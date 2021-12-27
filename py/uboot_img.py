import fdt
from hashlib import sha256

SZ = 0x200000
with open('../static/uboot_factory.img', 'rb') as f:
    img = f.read()

assert img[SZ:] == img[:SZ]  # the uboot image contains the same data two times


def check_hash_and_dump(dump=False):
    dt = fdt.parse_dtb(img[:SZ])
    # print(dt.to_dts())
    ub = dt.get_node('images/uboot')
    sz = ub.get_property('data-size').value
    print(f'sz = 0x{sz:x}')
    pos = ub.get_property('data-position').value
    print(f'pos = 0x{pos:x}')
    h = ub.get_subnode('hash').get_property('value')
    hash_hex = ''.join(f'{i:08x}' for i in h)
    uboot_bin = img[pos:pos + sz]
    assert hash_hex == sha256(uboot_bin).hexdigest()

    if dump:
        with open('uboot.bin', 'wb') as f:
            f.write(uboot_bin)

    print(img.find(sha256(uboot_bin).digest()))


def patch():
    sz = 0x128288
    pos = 0xe00
    h = sha256(img[pos:pos + sz]).digest()
    hash_offset = img.find(h)

    with open('uboot_patched.bin', 'rb') as f:
        uboot_patched = f.read()
    assert len(uboot_patched) == sz
    h2 = sha256(uboot_patched).digest()

    img2 = bytearray(img[:SZ])
    img2[pos:pos + sz] = uboot_patched
    img2[hash_offset:hash_offset + len(h)] = h2

    with open('uboot_patched.img', 'wb') as f:
        f.write(img2)
        f.write(img2)


# check_hash_and_dump()
patch()
