/*
 * (C) Copyright 2020 Rockchip Electronics Co., Ltd
 *
 * SPDX-License-Identifier:     GPL-2.0+
 * Author: Wenping Zhang <wenping.zhang@rock-chips.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <errno.h>

#define PNG_DEBUG 3

#include <png.h>

#define ASSERTF(a, fmt, ...) do { if(!(a)) { fprintf(stderr, fmt, ##__VA_ARGS__); exit(1); } } while(0)

enum type_logo {
  EINK_LOGO_RESET = 0,
  EINK_LOGO_UBOOT = 1 << 0,
  EINK_LOGO_KERNEL = 1 << 1,
  EINK_LOGO_CHARGING_0 = 1 << 2,
  EINK_LOGO_CHARGING_1 = 1 << 3,
  EINK_LOGO_CHARGING_2 = 1 << 4,
  EINK_LOGO_CHARGING_3 = 1 << 5,
  EINK_LOGO_CHARGING_4 = 1 << 6,
  EINK_LOGO_CHARGING_5 = 1 << 7,
  EINK_LOGO_CHARGING_LOWPOWER = 1 << 8,
  EINK_LOGO_OFF = 1 << 9,
};

const char *logo_file_name(enum type_logo logo) {
  switch (logo) {
    case EINK_LOGO_RESET:
      return "logo_reset.png";
    case EINK_LOGO_UBOOT:
      return "logo_uboot.png";
    case EINK_LOGO_KERNEL:
      return "logo_kernel.png";
    case EINK_LOGO_CHARGING_0:
      return "logo_charging_0.png";
    case EINK_LOGO_CHARGING_1:
      return "logo_charging_1.png";
    case EINK_LOGO_CHARGING_2:
      return "logo_charging_2.png";
    case EINK_LOGO_CHARGING_3:
      return "logo_charging_3.png";
    case EINK_LOGO_CHARGING_4:
      return "logo_charging_4.png";
    case EINK_LOGO_CHARGING_5:
      return "logo_charging_5.png";
    case EINK_LOGO_CHARGING_LOWPOWER:
      return "logo_charging_lowpower.png";
    case EINK_LOGO_OFF:
      return "logo_off.png";
    default:
      ASSERTF(0, "Invalid logo type 0x%x.\n", logo);
  }
}

//logo partition Header, 64byte
struct logo_part_header {
  char magic[4]; /* must be "RKEL" */
  uint32_t total_size;
  uint32_t screen_width;
  uint32_t screen_height;
  uint32_t logo_count;
  char version[4];
  uint32_t rsv[10];
} __attribute__((packed));

// logo image header,32 byte
struct grayscale_header {
  char magic[4]; /* must be "GR04" */
  uint16_t x;
  uint16_t y;
  uint16_t w;
  uint16_t h;
  uint32_t logo_type;
  uint32_t data_offset; /* image offset in byte */
  uint32_t data_size; /* image size in byte */
  uint32_t rsv[2];
} __attribute__((packed));

/*
 * The start address of logo image in logo.img must be aligned
 * in 512 bytes,so the header size must be times of 512 bytes.
 * Here we fix the size to 512 bytes, so the count of logo image
 * can only support up to 14.
 */
struct logo_info {
  struct logo_part_header part_hdr;
  struct grayscale_header img_hdr[14];
} __attribute__((packed));

void *read_file(const char *path, size_t *sz) {
  FILE *f = fopen(path, "rb");
  ASSERTF(f, "Error opening file \"%s\": %s\n", path, strerror(errno));
  fseek(f, 0, SEEK_END);
  *sz = ftell(f);
  fseek(f, 0, SEEK_SET);
  char *buf = malloc(*sz);
  size_t r = fread(buf, 1, *sz, f);
  ASSERTF(r == *sz, "Could not read file \"%s\" completely.\n", path);
  fclose(f);
  return buf;
}

void write_file(const char *path, const char *buf, size_t sz) {

}


void write_png(char *path, uint32_t w, uint32_t h, unsigned char *buf) {
  FILE *fp = fopen(path, "wb");
  ASSERTF(fp, "Error opening file \"%s\" for writing: %s\n", path, strerror(errno));

  png_structp png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
  ASSERTF(png, "Failed to create PNG struct,");

  png_infop info = png_create_info_struct(png);
  ASSERTF(png, "Failed to create info struct,");

  if (setjmp(png_jmpbuf(png)))
    ASSERTF(0, "Error while creating PNG.");

  png_init_io(png, fp);

  png_set_IHDR(
      png,
      info,
      w, h,
      4,
      PNG_COLOR_TYPE_GRAY,
      PNG_INTERLACE_NONE,
      PNG_COMPRESSION_TYPE_DEFAULT,
      PNG_FILTER_TYPE_DEFAULT
  );
  png_write_info(png, info);

  png_bytepp row_pointers = malloc(h * sizeof(png_bytep));
  ASSERTF(row_pointers, "malloc failed\n");
  for (int i = 0; i < h; ++i) {
    row_pointers[i] = buf + i * w / 2;
  }

  png_set_packswap(png);
  png_write_image(png, row_pointers);
  png_write_end(png, NULL);

  free(row_pointers);
  fclose(fp);

  png_destroy_write_struct(&png, &info);
}

void read_logos(const char *logo_img_path, char *logos_path) {
  size_t sz;
  void *buf = read_file(logo_img_path, &sz);
  struct logo_info info;
  ASSERTF(sz >= sizeof info, "logo.img is too small.\n");
  memcpy(&info, buf, sizeof info);
  ASSERTF(memcmp(info.part_hdr.magic, "RKEL", 4) == 0, "logo.img has wrong magic bytes.\n");
  printf("found %u logos\n", info.part_hdr.logo_count);
  for (int i = 0; i < info.part_hdr.logo_count; ++i) {
    struct grayscale_header hdr = info.img_hdr[i];
    ASSERTF(memcmp(hdr.magic, "GR04", 4) == 0, "logo %d has wrong magic bytes.\n", i);
    ASSERTF(hdr.data_size + hdr.data_offset <= sz, "logo.img too small to read logo %d.\n", i);
    ASSERTF(hdr.data_size * 2 == hdr.w * hdr.h, "Logo %d size does not match its width and height.\n", i);
    char logo_path[256];
    sprintf(logo_path, "%s/%s", logos_path, logo_file_name(hdr.logo_type));
    write_png(logo_path, hdr.w, hdr.h, buf + hdr.data_offset);
  }
  free(buf);
}

void write_logos(const char *logo_img_path, char *logos_path) {

}

int main(int argc, char **argv) {
  if (argc != 4) goto error;
  char mode = argv[1][0];
  char *logo_img_path = argv[2];
  char *logos_path = argv[3];
  if (mode == 'r') {
    read_logos(logo_img_path, logos_path);
  } else if (mode == 'w') {
    write_logos(logo_img_path, logos_path);
  } else {
    goto error;
  }
  return 0;
  error:
  fprintf(stderr, "Usage: %s (r|w) <logo.img> <logodir> # read/write logo.img from logos in logodir", *argv);
  return 1;
}
