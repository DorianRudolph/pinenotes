#include "ebc_dev_2.26.h"



void get_auto_image(u8 *data_buf,u32 *buffer_new,u32 *buffer_old,u8 *frame_count,ebc_info *ebc_info)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  u32 uVar5;
  u32 uVar6;
  uint uVar7;
  byte bVar8;
  byte *pbVar9;
  ebc *peVar10;
  uint uVar11;
  long lVar12;
  byte *pbVar13;
  uint uVar14;
  u32 uVar15;
  byte bVar16;
  byte bVar17;
  
  peVar10 = global_ebc;
  bVar8 = ebc_info->frame_total;
  uVar6 = (global_ebc->panel).mirror;
  uVar4 = (global_ebc->panel).vir_width;
  uVar5 = (global_ebc->panel).vir_height;
  ebc_info->auto_need_refresh = 0;
  if (0 < (int)uVar5) {
    uVar4 = uVar4 >> 3;
    uVar15 = 0;
    lVar1 = (ulong)(uVar4 - 1) + 1;
    do {
      if (uVar6 == 0) {
        uVar11 = uVar15 * (peVar10->panel).vir_width;
      }
      else {
        uVar11 = (((peVar10->panel).vir_height - 1) - uVar15) * (peVar10->panel).vir_width;
      }
      lVar12 = 0;
      pbVar9 = frame_count;
      pbVar13 = data_buf + (uVar11 >> 2);
      if (uVar4 != 0) {
        do {
          uVar7 = buffer_new[lVar12];
          uVar11 = buffer_old[lVar12];
          if (uVar7 == uVar11) {
            *pbVar13 = 0;
            pbVar13[1] = 0;
          }
          else {
            uVar3 = uVar7 ^ uVar11;
            ebc_info->auto_need_refresh = 1;
            bVar16 = 0;
            uVar14 = (uint)bVar8;
            if ((uVar3 & 0xf) != 0) {
              uVar2 = *pbVar9 + 1 & 0xff;
              bVar17 = (byte)uVar2;
              bVar16 = (ebc_info->lut_data).wf_table
                       [(long)(int)((uint)*pbVar9 << 0x10) +
                        (ulong)((uVar11 & 0xff) * 0x100 + (uVar7 & 0xff))] & 3;
              if (uVar14 == uVar2) {
                uVar11 = uVar11 & 0xfffffff0 | uVar7 & 0xf;
                bVar17 = 0;
              }
              *pbVar9 = bVar17;
            }
            if ((uVar3 & 0xf0) != 0) {
              uVar2 = pbVar9[1] + 1 & 0xff;
              bVar17 = (byte)uVar2;
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar9[1] << 0x10) +
                                (ulong)((uVar11 >> 4 & 0xff) * 0x100 + (uVar7 >> 4 & 0xff))] & 3) <<
                             2) | bVar16;
              if (uVar14 == uVar2) {
                uVar11 = uVar7 & 0xf0 | uVar11 & 0xffffff0f;
                bVar17 = 0;
              }
              pbVar9[1] = bVar17;
            }
            if ((uVar3 & 0xf00) != 0) {
              uVar2 = pbVar9[2] + 1 & 0xff;
              bVar17 = (byte)uVar2;
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar9[2] << 0x10) +
                                (ulong)((ushort)(uVar7 >> 8) & 0xff | (ushort)uVar11 & 0xff00)] & 3)
                             << 4) | bVar16;
              if (uVar14 == uVar2) {
                uVar11 = uVar7 & 0xf00 | uVar11 & 0xfffff0ff;
                bVar17 = 0;
              }
              pbVar9[2] = bVar17;
            }
            if ((uVar3 & 0xf000) != 0) {
              uVar2 = pbVar9[3] + 1 & 0xff;
              bVar17 = (byte)uVar2;
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar9[3] << 0x10) +
                                (ulong)((uVar11 >> 0xc & 0xff) * 0x100 + (uVar7 >> 0xc & 0xff))] & 3
                              ) << 6) | bVar16;
              if (uVar14 == uVar2) {
                uVar11 = uVar7 & 0xf000 | uVar11 & 0xffff0fff;
                bVar17 = 0;
              }
              pbVar9[3] = bVar17;
            }
            *pbVar13 = bVar16;
            bVar16 = 0;
            if ((uVar3 & 0xf0000) != 0) {
              uVar2 = pbVar9[4] + 1 & 0xff;
              bVar17 = (byte)uVar2;
              bVar16 = (ebc_info->lut_data).wf_table
                       [(long)(int)((uint)pbVar9[4] << 0x10) +
                        (ulong)((uVar11 >> 0x10 & 0xff) * 0x100 + (uVar7 >> 0x10 & 0xff))] & 3;
              if (uVar14 == uVar2) {
                uVar11 = uVar7 & 0xf0000 | uVar11 & 0xfff0ffff;
                bVar17 = 0;
              }
              pbVar9[4] = bVar17;
            }
            if ((uVar3 & 0xf00000) != 0) {
              uVar2 = pbVar9[5] + 1 & 0xff;
              bVar17 = (byte)uVar2;
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar9[5] << 0x10) +
                                (ulong)((uVar11 >> 0x14 & 0xff) * 0x100 + (uVar7 >> 0x14 & 0xff))] &
                              3) << 2) | bVar16;
              if (uVar14 == uVar2) {
                uVar11 = uVar7 & 0xf00000 | uVar11 & 0xff0fffff;
                bVar17 = 0;
              }
              pbVar9[5] = bVar17;
            }
            if ((uVar3 & 0xf000000) != 0) {
              uVar2 = pbVar9[6] + 1 & 0xff;
              bVar17 = (byte)uVar2;
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar9[6] << 0x10) +
                                (ulong)((uVar7 >> 0x18) + (uVar11 >> 0x18) * 0x100)] & 3) << 4) |
                       bVar16;
              if (uVar14 == uVar2) {
                uVar11 = uVar7 & 0xf000000 | uVar11 & 0xf0ffffff;
                bVar17 = 0;
              }
              pbVar9[6] = bVar17;
            }
            if ((uVar3 & 0xf0000000) != 0) {
              uVar3 = pbVar9[7] + 1 & 0xff;
              bVar17 = (byte)uVar3;
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar9[7] << 0x10) +
                                (ulong)((uVar7 >> 0x1c) + (uVar11 >> 0x1c) * 0x100)] & 3) << 6) |
                       bVar16;
              if (uVar14 == uVar3) {
                uVar11 = uVar7 & 0xf0000000 | uVar11 & 0xfffffff;
                bVar17 = 0;
              }
              pbVar9[7] = bVar17;
            }
            buffer_old[lVar12] = uVar11;
            pbVar13[1] = bVar16;
          }
          lVar12 = lVar12 + 1;
          pbVar9 = pbVar9 + 8;
          pbVar13 = pbVar13 + 2;
        } while ((int)lVar12 < (int)uVar4);
        frame_count = frame_count + lVar1 * 8;
        buffer_old = buffer_old + lVar1;
        buffer_new = buffer_new + lVar1;
      }
      uVar15 = uVar15 + 1;
    } while (uVar5 != uVar15);
    return;
  }
  return;
}



void get_overlay_image(u8 *data_buf,u32 *buffer_new,u32 *buffer_old,u8 *frame_count,
                      ebc_info *ebc_info)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  u32 uVar6;
  u32 uVar7;
  uint uVar8;
  byte bVar9;
  byte *pbVar10;
  ebc *peVar11;
  uint uVar12;
  long lVar13;
  byte *pbVar14;
  u32 uVar15;
  byte bVar16;
  byte bVar17;
  
  peVar11 = global_ebc;
  uVar5 = (global_ebc->panel).vir_width;
  uVar6 = (global_ebc->panel).vir_height;
  uVar7 = (global_ebc->panel).mirror;
  ebc_info->auto_need_refresh = 0;
  if (0 < (int)uVar6) {
    uVar5 = uVar5 >> 3;
    uVar15 = 0;
    lVar1 = (ulong)(uVar5 - 1) + 1;
    do {
      if (uVar7 == 0) {
        uVar12 = uVar15 * (peVar11->panel).vir_width;
      }
      else {
        uVar12 = (((peVar11->panel).vir_height - 1) - uVar15) * (peVar11->panel).vir_width;
      }
      lVar13 = 0;
      pbVar10 = frame_count;
      pbVar14 = data_buf + (uVar12 >> 2);
      if (uVar5 != 0) {
        do {
          uVar8 = buffer_new[lVar13];
          uVar12 = buffer_old[lVar13];
          if (uVar8 == uVar12) {
            *pbVar14 = 0;
            pbVar14[1] = 0;
          }
          else {
            uVar4 = uVar8 ^ uVar12;
            ebc_info->auto_need_refresh = 1;
            bVar16 = 0;
            if ((uVar4 & 0xf) != 0) {
              uVar2 = *pbVar10 + 1 & 0xff;
              bVar17 = (byte)uVar2;
              bVar9 = ebc_info->frame_total;
              if ((uVar8 & 0xf) == 0 || (uVar8 & 0xf) == 0xf) {
                bVar9 = ebc_info->frame_bw_total;
              }
              bVar16 = (ebc_info->lut_data).wf_table
                       [(long)(int)((uint)*pbVar10 << 0x10) +
                        (ulong)((uVar12 & 0xff) * 0x100 + (uVar8 & 0xff))] & 3;
              if (bVar9 == uVar2) {
                uVar12 = uVar12 & 0xfffffff0 | uVar8 & 0xf;
                bVar17 = 0;
              }
              *pbVar10 = bVar17;
            }
            if ((uVar4 & 0xf0) != 0) {
              uVar2 = uVar8 & 0xf0;
              uVar3 = pbVar10[1] + 1 & 0xff;
              bVar17 = (byte)uVar3;
              bVar9 = ebc_info->frame_total;
              if (uVar2 == 0xf0 || uVar2 == 0) {
                bVar9 = ebc_info->frame_bw_total;
              }
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar10[1] << 0x10) +
                                (ulong)((uVar12 >> 4 & 0xff) * 0x100 + (uVar8 >> 4 & 0xff))] & 3) <<
                             2) | bVar16;
              if (bVar9 == uVar3) {
                bVar17 = 0;
                uVar12 = uVar2 | uVar12 & 0xffffff0f;
              }
              pbVar10[1] = bVar17;
            }
            if ((uVar4 & 0xf00) != 0) {
              uVar2 = uVar8 & 0xf00;
              uVar3 = pbVar10[2] + 1 & 0xff;
              bVar17 = (byte)uVar3;
              bVar9 = ebc_info->frame_total;
              if (uVar2 == 0xf00 || uVar2 == 0) {
                bVar9 = ebc_info->frame_bw_total;
              }
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar10[2] << 0x10) +
                                (ulong)((ushort)(uVar8 >> 8) & 0xff | (ushort)uVar12 & 0xff00)] & 3)
                             << 4) | bVar16;
              if (bVar9 == uVar3) {
                bVar17 = 0;
                uVar12 = uVar2 | uVar12 & 0xfffff0ff;
              }
              pbVar10[2] = bVar17;
            }
            if ((uVar4 & 0xf000) != 0) {
              uVar2 = uVar8 & 0xf000;
              uVar3 = pbVar10[3] + 1 & 0xff;
              bVar17 = (byte)uVar3;
              bVar9 = ebc_info->frame_total;
              if (uVar2 == 0xf000 || uVar2 == 0) {
                bVar9 = ebc_info->frame_bw_total;
              }
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar10[3] << 0x10) +
                                (ulong)((uVar12 >> 0xc & 0xff) * 0x100 + (uVar8 >> 0xc & 0xff))] & 3
                              ) << 6) | bVar16;
              if (bVar9 == uVar3) {
                bVar17 = 0;
                uVar12 = uVar2 | uVar12 & 0xffff0fff;
              }
              pbVar10[3] = bVar17;
            }
            *pbVar14 = bVar16;
            bVar16 = 0;
            if ((uVar4 & 0xf0000) != 0) {
              uVar2 = uVar8 & 0xf0000;
              uVar3 = pbVar10[4] + 1 & 0xff;
              bVar17 = (byte)uVar3;
              bVar9 = ebc_info->frame_total;
              if (uVar2 == 0xf0000 || uVar2 == 0) {
                bVar9 = ebc_info->frame_bw_total;
              }
              bVar16 = (ebc_info->lut_data).wf_table
                       [(long)(int)((uint)pbVar10[4] << 0x10) +
                        (ulong)((uVar12 >> 0x10 & 0xff) * 0x100 + (uVar8 >> 0x10 & 0xff))] & 3;
              if (bVar9 == uVar3) {
                bVar17 = 0;
                uVar12 = uVar2 | uVar12 & 0xfff0ffff;
              }
              pbVar10[4] = bVar17;
            }
            if ((uVar4 & 0xf00000) != 0) {
              uVar2 = uVar8 & 0xf00000;
              uVar3 = pbVar10[5] + 1 & 0xff;
              bVar17 = (byte)uVar3;
              bVar9 = ebc_info->frame_total;
              if (uVar2 == 0xf00000 || uVar2 == 0) {
                bVar9 = ebc_info->frame_bw_total;
              }
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar10[5] << 0x10) +
                                (ulong)((uVar12 >> 0x14 & 0xff) * 0x100 + (uVar8 >> 0x14 & 0xff))] &
                              3) << 2) | bVar16;
              if (bVar9 == uVar3) {
                bVar17 = 0;
                uVar12 = uVar2 | uVar12 & 0xff0fffff;
              }
              pbVar10[5] = bVar17;
            }
            if ((uVar4 & 0xf000000) != 0) {
              uVar3 = uVar8 & 0xf000000;
              uVar2 = pbVar10[6] + 1 & 0xff;
              bVar17 = (byte)uVar2;
              bVar9 = ebc_info->frame_total;
              if (uVar3 == 0 || uVar3 == 0xf000000) {
                bVar9 = ebc_info->frame_bw_total;
              }
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar10[6] << 0x10) +
                                (ulong)((uVar8 >> 0x18) + (uVar12 >> 0x18) * 0x100)] & 3) << 4) |
                       bVar16;
              if (bVar9 == uVar2) {
                bVar17 = 0;
                uVar12 = uVar3 | uVar12 & 0xf0ffffff;
              }
              pbVar10[6] = bVar17;
            }
            if ((uVar4 & 0xf0000000) != 0) {
              uVar4 = pbVar10[7] + 1 & 0xff;
              bVar17 = (byte)uVar4;
              bVar9 = ebc_info->frame_total;
              if ((uVar8 & 0xf0000000) == 0 || (uVar8 & 0xf0000000) == 0xf0000000) {
                bVar9 = ebc_info->frame_bw_total;
              }
              bVar16 = (byte)(((ebc_info->lut_data).wf_table
                               [(long)(int)((uint)pbVar10[7] << 0x10) +
                                (ulong)((uVar8 >> 0x1c) + (uVar12 >> 0x1c) * 0x100)] & 3) << 6) |
                       bVar16;
              if (bVar9 == uVar4) {
                bVar17 = 0;
                uVar12 = uVar8 & 0xf0000000 | uVar12 & 0xfffffff;
              }
              pbVar10[7] = bVar17;
            }
            buffer_old[lVar13] = uVar12;
            pbVar14[1] = bVar16;
          }
          lVar13 = lVar13 + 1;
          pbVar10 = pbVar10 + 8;
          pbVar14 = pbVar14 + 2;
        } while ((int)lVar13 < (int)uVar5);
        frame_count = frame_count + lVar1 * 8;
        buffer_old = buffer_old + lVar1;
        buffer_new = buffer_new + lVar1;
      }
      uVar15 = uVar15 + 1;
    } while (uVar6 != uVar15);
  }
  return;
}



int waveform_open(inode *inode,file *file)

{
  file->f_pos = 0;
  return 0;
}



int ebc_resume(device *dev)

{
  void *pvVar1;
  
  pvVar1 = dev->driver_data;
  (**(code **)(*(long *)((long)pvVar1 + 0x10) + 0x30))(*(long *)((long)pvVar1 + 0x10));
  *(undefined4 *)((long)pvVar1 + 0x324) = 0;
  _dev_info(*(undefined8 *)((long)pvVar1 + 0x120),"device resume\n");
  return 0;
}



void ebc_vdd_power_timeout(timer_list *t)

{
  if ((global_ebc->info).wake_lock_is_set == 0) {
    return;
  }
  (global_ebc->info).wake_lock_is_set = 0;
  __pm_relax();
  return;
}



int ebc_remove(platform_device *pdev)

{
  misc_deregister(&ebc_misc);
  return 0;
}



int ebc_mmap(file *file,vm_area_struct *vma)

{
  int iVar1;
  ulong uVar2;
  pteval_t pVar3;
  
  uVar2 = ebc_phy_buf_base_get();
  pVar3 = (vma->vm_page_prot).pgprot;
  vma->vm_flags = vma->vm_flags | 0x4044000;
  iVar1 = remap_pfn_range(vma,vma->vm_start,uVar2 >> 0xc,vma->vm_end - vma->vm_start,pVar3);
  if (iVar1 != 0) {
    iVar1 = -0xb;
  }
  return iVar1;
}



int waveform_mmap(file *file,vm_area_struct *vma)

{
  int iVar1;
  ulong uVar2;
  pteval_t pVar3;
  
  pVar3 = (vma->vm_page_prot).pgprot;
  uVar2 = (global_ebc->info).lut_buffer_phy;
  vma->vm_flags = vma->vm_flags | 0x4044000;
  iVar1 = remap_pfn_range(vma,vma->vm_start,uVar2 >> 0xc,vma->vm_end - vma->vm_start,pVar3);
  if (iVar1 != 0) {
    iVar1 = -0xb;
  }
  return iVar1;
}



long ebc_io_ctl(file *file,uint cmd,ulong arg)

{
  ebc_info *peVar1;
  ebc *peVar2;
  bool bVar3;
  int iVar4;
  ebc_buf_s *peVar5;
  char *__dest;
  ulong uVar6;
  size_t sVar7;
  device *pdVar8;
  int *piVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  wait_queue_entry __wq_entry;
  ebc_buf_info buf_info;
  long local_8;
  
  peVar2 = global_ebc;
  local_8 = __stack_chk_guard;
  if ((0x6fff < cmd) && (((cmd < 0x7004 || (cmd - 0x7006 < 2)) && (arg == 0)))) {
    lVar13 = -0xe;
    _dev_err((global_ebc->info).dev,"%s: argp NULL\n","ebc_io_ctl",0);
    goto LAB_00100b84;
  }
  if (cmd == 0x7005) {
    pdVar8 = (global_ebc->info).dev;
    (global_ebc->info).overlay_enable = 0;
    lVar13 = 0;
    (peVar2->info).overlay_start = 0;
    _dev_info(pdVar8,"disable ebc overlay\n");
    goto LAB_00100b84;
  }
  if (cmd < 0x7006) {
    if (cmd == 0x7002) {
      buf_info.width_mm = (global_ebc->panel).width_mm;
      buf_info.height_mm = (global_ebc->panel).height_mm;
      puVar11 = (undefined8 *)cRead_8(sp_el0);
      buf_info.width = (global_ebc->panel).vir_width;
      buf_info.height = (global_ebc->panel).vir_height;
      buf_info.panel_color = (global_ebc->panel).panel_color;
      buf_info.needpic = 0x10;
      if (((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) != 0) ||
         (uVar6 = arg, ((uint)*puVar11 >> 0x1a & 1) != 0)) {
        uVar6 = (long)(arg << 8) >> 8 & arg;
      }
      bVar3 = 0xffffffffffffffbf < uVar6;
      uVar6 = uVar6 + 0x40;
      uVar12 = 0;
      if (!bVar3 || uVar6 == 0) {
        uVar12 = puVar11[1];
      }
      if (bVar3) {
        uVar6 = 0xffffffffffffffff;
      }
      if (!CARRY8(uVar6,~uVar12) && !CARRY8(uVar6 + ~uVar12,(ulong)bVar3) ||
          uVar6 == uVar12 + !bVar3) {
        lVar13 = cRead_8(sp_el0);
        if (((long)(arg << 8) >> 8 & arg & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff)) != 0) {
          arg = 0;
        }
        lVar13 = __arch_copy_to_user(arg,&buf_info,0x40);
        if (lVar13 == 0) {
          lVar13 = 0;
          goto LAB_00100b84;
        }
      }
      lVar13 = -0xe;
      _dev_err((peVar2->info).dev,"EBC_GET_BUFFER_INFO failed\n");
      goto LAB_00100b84;
    }
    if (cmd < 0x7003) {
      if (cmd == 0x7000) {
        puVar11 = (undefined8 *)cRead_8(sp_el0);
        if (((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) != 0) ||
           (uVar6 = arg, ((uint)*puVar11 >> 0x1a & 1) != 0)) {
          uVar6 = (long)(arg << 8) >> 8 & arg;
        }
        bVar3 = 0xffffffffffffffbf < uVar6;
        uVar6 = uVar6 + 0x40;
        uVar12 = 0;
        if (!bVar3 || uVar6 == 0) {
          uVar12 = puVar11[1];
        }
        if (bVar3) {
          uVar6 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar6,~uVar12) && !CARRY8(uVar6 + ~uVar12,(ulong)bVar3) ||
            uVar6 == uVar12 + !bVar3) {
          lVar13 = cRead_8(sp_el0);
          uVar6 = (long)(arg << 8) >> 8;
          uVar12 = arg;
          if ((arg & uVar6 & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff)) != 0) {
            uVar12 = 0;
          }
          sVar7 = __arch_copy_from_user(&buf_info,uVar12,0x40);
          if ((sVar7 == 0) || (memset((void *)((long)&local_8 - sVar7),0,sVar7), (int)sVar7 == 0)) {
            peVar5 = ebc_empty_buf_get(buf_info.tid_name);
            if (peVar5 != (ebc_buf_s *)0x0) {
              uVar14 = peVar5->phy_addr;
              uVar12 = ebc_phy_buf_base_get();
              buf_info.width = (peVar2->panel).vir_width;
              buf_info.height = (peVar2->panel).vir_height;
              puVar11 = (undefined8 *)cRead_8(sp_el0);
              buf_info.panel_color = (peVar2->panel).panel_color;
              buf_info.offset = (int)uVar14 - (int)uVar12;
              buf_info.needpic = 0x10;
              if (((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) != 0) ||
                 (uVar12 = arg, ((uint)*puVar11 >> 0x1a & 1) != 0)) {
                uVar12 = arg & uVar6;
              }
              bVar3 = 0xffffffffffffffbf < uVar12;
              uVar12 = uVar12 + 0x40;
              uVar14 = 0;
              if (!bVar3 || uVar12 == 0) {
                uVar14 = puVar11[1];
              }
              if (bVar3) {
                uVar12 = 0xffffffffffffffff;
              }
              if (!CARRY8(uVar12,~uVar14) && !CARRY8(uVar12 + ~uVar14,(ulong)bVar3) ||
                  uVar12 == uVar14 + !bVar3) {
                lVar13 = cRead_8(sp_el0);
                if ((arg & uVar6 & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff)) != 0) {
                  arg = 0;
                }
                iVar4 = __arch_copy_to_user(arg,&buf_info,0x40);
                if (iVar4 == 0) {
                  lVar13 = 0;
                  goto LAB_00100b84;
                }
              }
              lVar13 = -0xe;
              ebc_buf_release(peVar5);
              goto LAB_00100b84;
            }
            goto LAB_00101270;
          }
        }
      }
      else {
        if (cmd != 0x7001) goto LAB_00101050;
        puVar11 = (undefined8 *)cRead_8(sp_el0);
        if (((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) != 0) ||
           (uVar6 = arg, ((uint)*puVar11 >> 0x1a & 1) != 0)) {
          uVar6 = (long)(arg << 8) >> 8 & arg;
        }
        bVar3 = 0xffffffffffffffbf < uVar6;
        uVar6 = uVar6 + 0x40;
        uVar12 = 0;
        if (!bVar3 || uVar6 == 0) {
          uVar12 = puVar11[1];
        }
        if (bVar3) {
          uVar6 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar6,~uVar12) && !CARRY8(uVar6 + ~uVar12,(ulong)bVar3) ||
            uVar6 == uVar12 + !bVar3) {
          lVar13 = cRead_8(sp_el0);
          if (((long)(arg << 8) >> 8 & arg & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff)) != 0) {
            arg = 0;
          }
          lVar13 = __arch_copy_from_user(&buf_info,arg,0x40);
          if (lVar13 == 0) {
            uVar6 = ebc_phy_buf_base_get();
            peVar5 = ebc_find_buf_by_phy_addr((long)buf_info.offset + uVar6);
            if (peVar5 != (ebc_buf_s *)0x0) {
              peVar5->buf_mode = buf_info.epd_mode;
              peVar5->win_x1 = buf_info.win_x1;
              peVar5->win_y1 = buf_info.win_y1;
              peVar5->win_x2 = buf_info.win_x2;
              peVar5->win_y2 = buf_info.win_y2;
              peVar5->needpic = buf_info.needpic;
              ebc_add_to_dsp_buf_list(peVar5);
              if ((peVar2->info).ebc_dsp_buf_status == 0) {
                (peVar2->info).ebc_dsp_buf_status = 1;
                __wake_up_sync(&ebc_thread_wq,1);
              }
              if (peVar5->buf_mode == EPD_SUSPEND) {
                if ((peVar2->info).is_early_suspend != 0) {
                  lVar13 = 0;
                  goto LAB_00100b84;
                }
              }
              else if (peVar5->buf_mode != EPD_POWER_OFF) goto __out;
              (peVar2->info).ebc_last_display = 1;
              init_wait_entry(&__wq_entry,0);
              while (lVar13 = prepare_to_wait_event(&ebc_poweroff_wq,&__wq_entry,1),
                    (peVar2->info).ebc_last_display != 0) {
                if (lVar13 != 0) goto __out;
                schedule();
              }
              finish_wait(&ebc_poweroff_wq,&__wq_entry);
            }
__out:
            lVar13 = 0;
            goto LAB_00100b84;
          }
        }
      }
LAB_00101200:
      lVar13 = -0xe;
    }
    else {
      if (cmd == 0x7003) {
        puVar11 = (undefined8 *)cRead_8(sp_el0);
        piVar9 = &(global_ebc->info).full_mode_num;
        if (((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) != 0) ||
           (uVar6 = arg, ((uint)*puVar11 >> 0x1a & 1) != 0)) {
          uVar6 = (long)(arg << 8) >> 8 & arg;
        }
        bVar3 = 0xfffffffffffffffb < uVar6;
        uVar6 = uVar6 + 4;
        uVar12 = 0;
        if (!bVar3 || uVar6 == 0) {
          uVar12 = puVar11[1];
        }
        if (bVar3) {
          uVar6 = 0xffffffffffffffff;
        }
        uVar6 = (ulong)(!CARRY8(uVar6,~uVar12) && !CARRY8(uVar6 + ~uVar12,(ulong)bVar3) ||
                       uVar6 == uVar12 + !bVar3);
        if (uVar6 == 0) {
          sVar7 = 4;
        }
        else {
          lVar13 = cRead_8(sp_el0);
          if (((long)(arg << 8) >> 8 & arg & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff)) != 0) {
            arg = 0;
          }
          sVar7 = __arch_copy_from_user(piVar9,arg,4);
          if (sVar7 == 0) {
            lVar13 = 0;
            _dev_info((peVar2->info).dev,"full_mode_num = %d\n",(peVar2->info).full_mode_num);
            goto LAB_00100b84;
          }
          uVar6 = 4 - sVar7;
        }
        memset((void *)((long)piVar9 + uVar6),0,sVar7);
        lVar13 = -0xe;
        _dev_err((peVar2->info).dev,"EBC_SET_FULL_MODE_NUM failed\n");
        goto LAB_00100b84;
      }
      if (cmd == 0x7004) {
        peVar1 = &global_ebc->info;
        (global_ebc->info).overlay_enable = 1;
        lVar13 = 0;
        _dev_info(peVar1->dev,
                  "enable ebc overlay, you can use auto_overlay mode to show somthing over the system display\n"
                 );
        goto LAB_00100b84;
      }
LAB_00101050:
      lVar13 = 0;
      _dev_err((global_ebc->info).dev,"%s: unknow cmd\n","ebc_io_ctl",0);
    }
    goto LAB_00100b84;
  }
  if (cmd == 0x7008) {
    peVar5 = ebc_empty_buf_get("ebc_dev_debug");
    if (peVar5 != (ebc_buf_s *)0x0) {
      piVar9 = (peVar2->info).auto_image_old;
      __dest = peVar5->virt_addr;
      uVar10 = (peVar2->panel).vir_width * (peVar2->panel).vir_height;
LAB_00100aac:
      memcpy(__dest,piVar9,(ulong)(uVar10 >> 1));
      uVar12 = peVar5->phy_addr;
      uVar6 = ebc_phy_buf_base_get();
      buf_info.offset = (int)uVar12 - (int)uVar6;
      puVar11 = (undefined8 *)cRead_8(sp_el0);
      buf_info.width = (peVar2->panel).vir_width;
      buf_info.height = (peVar2->panel).vir_height;
      uVar6 = puVar11[1];
      if ((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) == 0) {
LAB_00100adc:
        uVar12 = arg;
        if (((uint)*puVar11 >> 0x1a & 1) != 0) goto LAB_00100ae8;
      }
      else {
LAB_00100ae8:
        uVar12 = (long)(arg << 8) >> 8 & arg;
      }
      bVar3 = 0xffffffffffffffbf < uVar12;
      uVar12 = uVar12 + 0x40;
      uVar14 = 0;
      if (!bVar3 || uVar12 == 0) {
        uVar14 = uVar6;
      }
      if (bVar3) {
        uVar12 = 0xffffffffffffffff;
      }
      lVar13 = 0x40;
      if (!CARRY8(uVar12,~uVar14) && !CARRY8(uVar12 + ~uVar14,(ulong)bVar3) ||
          uVar12 == uVar14 + !bVar3) {
        lVar13 = cRead_8(sp_el0);
        if (((long)(arg << 8) >> 8 & arg & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff)) != 0) {
          arg = 0;
        }
        iVar4 = __arch_copy_to_user(arg,&buf_info,0x40);
        lVar13 = (long)iVar4;
      }
      ebc_buf_release(peVar5);
      goto LAB_00100b84;
    }
  }
  else if (cmd < 0x7009) {
    if (cmd != 0x7006) {
      if (cmd == 0x7007) {
        puVar11 = (undefined8 *)cRead_8(sp_el0);
        if (((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) != 0) ||
           (uVar6 = arg, ((uint)*puVar11 >> 0x1a & 1) != 0)) {
          uVar6 = (long)(arg << 8) >> 8 & arg;
        }
        bVar3 = 0xffffffffffffffbf < uVar6;
        uVar6 = uVar6 + 0x40;
        uVar12 = 0;
        if (!bVar3 || uVar6 == 0) {
          uVar12 = puVar11[1];
        }
        if (bVar3) {
          uVar6 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar6,~uVar12) && !CARRY8(uVar6 + ~uVar12,(ulong)bVar3) ||
            uVar6 == uVar12 + !bVar3) {
          lVar13 = cRead_8(sp_el0);
          if (((long)(arg << 8) >> 8 & arg & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff)) != 0) {
            arg = 0;
          }
          lVar13 = __arch_copy_from_user(&buf_info,arg,0x40);
          if (lVar13 == 0) {
            peVar5 = ebc_osd_buf_clone();
            if (peVar5 != (ebc_buf_s *)0x0) {
              peVar5->buf_mode = buf_info.epd_mode;
              peVar5->win_x1 = buf_info.win_x1;
              peVar5->win_y1 = buf_info.win_y1;
              peVar5->win_x2 = buf_info.win_x2;
              peVar5->win_y2 = buf_info.win_y2;
              ebc_add_to_dsp_buf_list(peVar5);
              if ((peVar2->info).ebc_dsp_buf_status == 0) {
                (peVar2->info).ebc_dsp_buf_status = 1;
                lVar13 = 0;
                __wake_up_sync(&ebc_thread_wq,1);
                goto LAB_00100b84;
              }
            }
            goto __out;
          }
        }
        goto LAB_00101200;
      }
      goto LAB_00101050;
    }
    peVar5 = ebc_osd_buf_get();
    if (peVar5 != (ebc_buf_s *)0x0) {
      uVar12 = peVar5->phy_addr;
      uVar6 = ebc_phy_buf_base_get();
      buf_info.panel_color = (peVar2->panel).panel_color;
      puVar11 = (undefined8 *)cRead_8(sp_el0);
      buf_info.offset = (int)uVar12 - (int)uVar6;
      buf_info.width = (peVar2->panel).vir_width;
      buf_info.height = (peVar2->panel).vir_height;
      buf_info.needpic = 0x10;
      if (((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) != 0) ||
         (uVar6 = arg, ((uint)*puVar11 >> 0x1a & 1) != 0)) {
        uVar6 = (long)(arg << 8) >> 8 & arg;
      }
      bVar3 = 0xffffffffffffffbf < uVar6;
      uVar6 = uVar6 + 0x40;
      uVar12 = 0;
      if (!bVar3 || uVar6 == 0) {
        uVar12 = puVar11[1];
      }
      if (bVar3) {
        uVar6 = 0xffffffffffffffff;
      }
      lVar13 = 0x40;
      if (!CARRY8(uVar6,~uVar12) && !CARRY8(uVar6 + ~uVar12,(ulong)bVar3) ||
          uVar6 == uVar12 + !bVar3) {
        lVar13 = cRead_8(sp_el0);
        if (((long)(arg << 8) >> 8 & arg & (*(ulong *)(lVar13 + 8) ^ 0xffffffffffffffff)) != 0) {
          arg = 0;
        }
        iVar4 = __arch_copy_to_user(arg,&buf_info,0x40);
        lVar13 = (long)iVar4;
      }
      goto LAB_00100b84;
    }
  }
  else if (cmd == 0x700a) {
    peVar5 = ebc_empty_buf_get("ebc_dev_debug");
    if (peVar5 != (ebc_buf_s *)0x0) {
      piVar9 = (peVar2->info).auto_image_bg;
      __dest = peVar5->virt_addr;
      uVar10 = (peVar2->panel).vir_width * (peVar2->panel).vir_height;
      goto LAB_00100aac;
    }
  }
  else if (cmd < 0x700a) {
    peVar5 = ebc_empty_buf_get("ebc_dev_debug");
    if (peVar5 != (ebc_buf_s *)0x0) {
      memcpy(peVar5->virt_addr,(peVar2->info).auto_image_new,
             (ulong)((peVar2->panel).vir_width * (peVar2->panel).vir_height >> 1));
      uVar12 = peVar5->phy_addr;
      uVar6 = ebc_phy_buf_base_get();
      buf_info.offset = (int)uVar12 - (int)uVar6;
      puVar11 = (undefined8 *)cRead_8(sp_el0);
      buf_info.width = (peVar2->panel).vir_width;
      buf_info.height = (peVar2->panel).vir_height;
      uVar6 = puVar11[1];
      if ((*(uint *)((long)puVar11 + 0x34) >> 0x15 & 1) == 0) goto LAB_00100adc;
      goto LAB_00100ae8;
    }
  }
  else {
    if (cmd != 0x700b) goto LAB_00101050;
    peVar5 = ebc_empty_buf_get("ebc_dev_debug");
    if (peVar5 != (ebc_buf_s *)0x0) {
      __dest = peVar5->virt_addr;
      uVar10 = (peVar2->panel).vir_width * (peVar2->panel).vir_height;
      piVar9 = (int *)((peVar2->info).curr_dsp_buf)->virt_addr;
      goto LAB_00100aac;
    }
  }
LAB_00101270:
  lVar13 = -1;
LAB_00100b84:
  if (local_8 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return lVar13;
}



void frame_done_callback(void)

{
  panel_refresh_mode pVar1;
  ebc *peVar2;
  device *pdVar3;
  
  peVar2 = global_ebc;
  pVar1 = ((global_ebc->info).curr_dsp_buf)->buf_mode;
  if (((int)pVar1 < 0) || ((1 < (int)pVar1 && (1 < pVar1 + ~EPD_FORCE_FULL)))) {
    if ((global_ebc->info).frame_left == 0) {
      pdVar3 = (global_ebc->info).dev;
      (global_ebc->info).is_busy_now = 0;
      (peVar2->info).ebc_irq_status = 1;
      _dev_info(pdVar3,"frame done\n");
      __wake_up_sync(&ebc_wq,1,1);
      __wake_up_sync(&ebc_thread_wq,1,1);
      return;
    }
    (global_ebc->info).is_busy_now = 1;
    wake_up_process(ebc_auto_task);
    return;
  }
  if ((global_ebc->info).auto_need_refresh != 0) {
    wake_up_process(ebc_auto_task);
    return;
  }
  if ((global_ebc->info).auto_check != 0) {
    mod_timer(&(global_ebc->info).frame_timer,jiffies + 2);
    return;
  }
  _dev_info((global_ebc->info).dev,"auto frame done\n");
  mod_timer(&(peVar2->info).frame_timer,jiffies + 0x18000000);
  (peVar2->info).ebc_irq_status = 1;
  (peVar2->info).is_busy_now = 0;
  __wake_up_sync(&ebc_wq,1,1);
  __wake_up_sync(&ebc_thread_wq,1,1);
  return;
}



void ebc_frame_timeout(timer_list *t)

{
  frame_done_callback();
  return;
}



// WARNING: Type propagation algorithm not settling

int ebc_lut_update(ebc *ebc,int needpic)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  epd_lut_type lut_type;
  int local_c;
  long local_8;
  
  local_8 = __stack_chk_guard;
  local_c = 0x19;
  iVar2 = (*ebc->pmic->pmic_read_temperature)(ebc->pmic,&local_c);
  if (iVar2 == 0) {
    if (local_c < 0) {
      _dev_info((ebc->info).dev,"temperature = %d, out of range0~50 ,use 0 \n");
      local_c = 0;
    }
    else if (0x32 < local_c) {
      _dev_info((ebc->info).dev,"temperature = %d, out of range0~50 ,use 50 \n");
      local_c = 0x32;
    }
  }
  else {
    _dev_err((ebc->info).dev,"ebc_pmic_read_temp failed, ret = %d\n",iVar2);
  }
  _dev_info((ebc->info).dev,"lut update use temperature = %d\n",local_c);
  switch(((ebc->info).curr_dsp_buf)->buf_mode) {
  case EPD_AUTO:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_GC16,local_c,0x10);
    break;
  case EPD_OVERLAY:
    lut_type = epd_overlay_lut();
    iVar3 = epd_lut_get(&(ebc->info).lut_data,lut_type,local_c,0x10);
    if (iVar3 == 0) {
      if (lut_type != WF_TYPE_AUTO) goto LAB_001016c0;
      goto LAB_001014fc;
    }
    iVar2 = -1;
    if (lut_type != WF_TYPE_AUTO) {
LAB_001016c0:
      uVar1 = (ebc->info).lut_data.frame_num;
      (ebc->info).lut_data.frame_num = uVar1 | uVar1 << 8;
      goto LAB_001014fc;
    }
    goto LAB_00101560;
  default:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_GC16,local_c,needpic);
    break;
  case EPD_FULL_GL16:
  case EPD_PART_GL16:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_GL16,local_c,needpic);
    break;
  case EPD_FULL_GLR16:
  case EPD_PART_GLR16:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_GLR16,local_c,needpic);
    break;
  case EPD_FULL_GLD16:
  case EPD_PART_GLD16:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_GLD16,local_c,needpic);
    break;
  case EPD_FULL_GCC16:
  case EPD_PART_GCC16:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_GCC16,local_c,needpic);
    break;
  case EPD_A2:
  case EPD_A2_DITHER:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_A2,local_c,needpic);
    break;
  case EPD_DU:
  case EPD_A2_ENTER:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_GRAY2,local_c,needpic);
    break;
  case EPD_DU4:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_GRAY4,local_c,needpic);
    break;
  case EPD_RESET:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_RESET,local_c,needpic);
    break;
  case EPD_AUTO_DU:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_GRAY2,local_c,0x10);
    break;
  case EPD_AUTO_DU4:
    iVar3 = epd_lut_get(&(ebc->info).lut_data,WF_TYPE_GRAY4,local_c,0x10);
  }
  if (iVar3 == 0) {
LAB_001014fc:
    if (iVar2 == 0) goto LAB_00101500;
  }
  else {
LAB_00101560:
    iVar2 = -1;
  }
  _dev_err((ebc->info).dev,"get lut data failed\n");
LAB_00101500:
  if (local_8 == __stack_chk_guard) {
    return iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



ssize_t ebc_buf_state_read(device *device,device_attribute *attr,char *buf)

{
  int iVar1;
  
  iVar1 = ebc_buf_state_show(buf);
  return (long)iVar1;
}



ssize_t ebc_state_read(device *device,device_attribute *attr,char *buf)

{
  int iVar1;
  
  iVar1 = sprintf(buf,"%d\n",(ulong)(uint)(global_ebc->info).wake_lock_is_set);
  return (long)iVar1;
}



ssize_t ebc_version_read(device *device,device_attribute *attr,char *buf)

{
  int iVar1;
  
  iVar1 = sprintf(buf,"%s\n",&DAT_0010a5e8);
  return (long)iVar1;
}



ssize_t pmic_vcom_read(device *device,device_attribute *attr,char *buf)

{
  int iVar1;
  
  iVar1 = (*global_ebc->pmic->pmic_get_vcom)(global_ebc->pmic);
  iVar1 = sprintf(buf,"%d\n",iVar1);
  return (long)iVar1;
}



ssize_t pmic_temp_read(device *device,device_attribute *attr,char *buf)

{
  int iVar1;
  int t;
  uint local_c;
  long local_8;
  
  local_8 = __stack_chk_guard;
  (*global_ebc->pmic->pmic_read_temperature)(global_ebc->pmic,(int *)&local_c);
  iVar1 = sprintf(buf,"%d\n",(ulong)local_c);
  if (local_8 == __stack_chk_guard) {
    return (long)iVar1;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



ssize_t pmic_name_read(device *device,device_attribute *attr,char *buf)

{
  int iVar1;
  
  iVar1 = sprintf(buf,"%s\n",global_ebc->pmic->pmic_name);
  return (long)iVar1;
}



ssize_t pmic_vcom_write(device *device,device_attribute *attr,char *buf,size_t count)

{
  ebc *peVar1;
  int iVar2;
  int local_c;
  long local_8;
  
  peVar1 = global_ebc;
  local_8 = __stack_chk_guard;
  iVar2 = kstrtouint(buf,0,&local_c);
  if (iVar2 == 0) {
    iVar2 = ebc_pmic_set_vcom((ebc_pmic_conflict *)peVar1->pmic,local_c);
    if (iVar2 != 0) {
      count = 0xffffffffffffffff;
      _dev_err(peVar1->dev,"set vcom value failed\n");
    }
  }
  else {
    count = 0xffffffffffffffff;
    _dev_err(peVar1->dev,"invalid value = %s\n",buf);
  }
  if (local_8 == __stack_chk_guard) {
    return count;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



ssize_t waveform_version_read(device *device,device_attribute *attr,char *buf)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = epd_lut_get_wf_version();
  iVar1 = sprintf(buf,"%s\n",pcVar2);
  return (long)iVar1;
}



void direct_mode_data_change(u8 *data_buf,u32 *buffer_new,u32 *buffer_old,ebc_info *ebc_info)

{
  undefined8 *puVar1;
  long lVar2;
  uint *puVar3;
  int iVar4;
  u32 uVar5;
  uint uVar6;
  ebc *peVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  u8 *puVar11;
  ulong uVar12;
  uint uVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  uint *puVar17;
  u32 uVar18;
  u32 uVar19;
  
  peVar7 = global_ebc;
  iVar4 = ebc_info->curr_dsp_buf->needpic;
  if (iVar4 == 0x20) {
    iVar4 = ebc_info->prev_dsp_buf->needpic;
    if (iVar4 == 0x20) {
      puVar11 = (ebc_info->lut_data).wf_table;
      iVar4 = (uint)(byte)ebc_info->frame_total - ebc_info->frame_left;
      uVar19 = (global_ebc->panel).vir_height;
      uVar9 = (global_ebc->panel).vir_width;
      uVar5 = (global_ebc->panel).mirror;
      uVar6 = uVar9 >> 2;
      if ((int)uVar19 < 1) {
        return;
      }
      uVar18 = 0;
      lVar2 = (ulong)(uVar6 - 1) + 1;
      if (uVar5 == 0) goto LAB_00102080;
      do {
        uVar9 = (((peVar7->panel).vir_height - 1) - uVar18) * uVar9;
        while( true ) {
          if (uVar6 != 0) {
            lVar15 = 0;
            do {
              uVar10 = buffer_old[lVar15];
              uVar13 = buffer_new[lVar15];
              data_buf[lVar15 + (ulong)(uVar9 >> 2)] =
                   (byte)(((uint)puVar11[(long)(int)((uVar10 >> 0x10 & 0xff) * 0x100 +
                                                    (uVar13 >> 0x10 & 0xff)) +
                                         (long)(iVar4 * 0x10000)] |
                          (puVar11[(long)(int)((uVar10 >> 0x10 & 0xff00) + (uVar13 >> 0x18)) +
                                   (long)(iVar4 * 0x10000)] & 0x3f) << 2) << 4) |
                   puVar11[(long)(int)((uVar10 & 0xff) * 0x100 + (uVar13 & 0xff)) +
                           (long)(iVar4 * 0x10000)] |
                   puVar11[(long)(int)((uVar10 & 0xff00) + ((uVar13 & 0xffff) >> 8)) +
                           (long)(iVar4 * 0x10000)] << 2;
              lVar15 = lVar15 + 1;
            } while ((int)lVar15 < (int)uVar6);
            buffer_new = buffer_new + lVar2;
            buffer_old = buffer_old + lVar2;
          }
          uVar18 = uVar18 + 1;
          if (uVar19 == uVar18) {
            return;
          }
          uVar9 = (peVar7->panel).vir_width;
          if (uVar5 != 0) break;
LAB_00102080:
          uVar9 = uVar18 * uVar9;
        }
      } while( true );
    }
    if (iVar4 == 0x10) {
      puVar11 = (ebc_info->lut_data).wf_table;
      iVar4 = (uint)(byte)ebc_info->frame_total - ebc_info->frame_left;
      uVar19 = (global_ebc->panel).vir_height;
      uVar9 = (global_ebc->panel).vir_width;
      uVar5 = (global_ebc->panel).mirror;
      uVar6 = uVar9 >> 3;
      if ((int)uVar19 < 1) {
        return;
      }
      uVar18 = 0;
      lVar2 = (ulong)(uVar6 - 1) + 1;
      if (uVar5 == 0) goto LAB_00101e88;
      do {
        uVar9 = (((peVar7->panel).vir_height - 1) - uVar18) * uVar9;
        while( true ) {
          if (uVar6 != 0) {
            puVar3 = buffer_new + lVar2 * 2;
            puVar8 = buffer_new;
            pbVar14 = data_buf + (uVar9 >> 2);
            puVar17 = buffer_old;
            do {
              buffer_new = puVar8 + 2;
              uVar9 = *puVar8;
              uVar10 = *puVar17;
              *pbVar14 = puVar11[(long)(int)((uVar9 >> 8 & 0xf8) + (uVar10 & 0xf0) * 0x100) +
                                 (long)(iVar4 * 0x10000)] << 2 |
                         puVar11[(long)(int)((uVar10 & 0xf00) * 0x10 + (uVar9 >> 0x10 & 0xf8)) +
                                 (long)(iVar4 * 0x10000)] << 4 |
                         puVar11[(long)(int)((uVar10 & 0xf) * 0x1000 + (uVar9 & 0xf8)) +
                                 (long)(iVar4 * 0x10000)] |
                         puVar11[(long)(int)((uVar10 & 0xf000) + (uVar9 >> 0x18 & 0xf8)) +
                                 (long)(iVar4 * 0x10000)] << 6;
              uVar9 = puVar8[1];
              pbVar14[1] = puVar11[(long)(int)((uVar10 >> 0xc & 0xf000) + (uVar9 >> 0x10 & 0xf8)) +
                                   (long)(iVar4 * 0x10000)] << 4 |
                           puVar11[(long)(int)((uVar10 >> 8 & 0xf000) + (uVar9 >> 8 & 0xf8)) +
                                   (long)(iVar4 * 0x10000)] << 2 |
                           puVar11[(long)(int)((uVar10 >> 4 & 0xf000) + (uVar9 & 0xf8)) +
                                   (long)(iVar4 * 0x10000)] |
                           puVar11[(long)(int)((uVar10 >> 0x10 & 0xf000) + (uVar9 >> 0x18 & 0xf8)) +
                                   (long)(iVar4 * 0x10000)] << 6;
              puVar8 = buffer_new;
              pbVar14 = pbVar14 + 2;
              puVar17 = puVar17 + 1;
            } while (buffer_new != puVar3);
            buffer_old = buffer_old + lVar2;
          }
          uVar18 = uVar18 + 1;
          if (uVar19 == uVar18) {
            return;
          }
          uVar9 = (peVar7->panel).vir_width;
          if (uVar5 != 0) break;
LAB_00101e88:
          uVar9 = uVar18 * uVar9;
        }
      } while( true );
    }
  }
  else if ((iVar4 == 0x10) && (ebc_info->prev_dsp_buf->needpic == 0x10)) {
    uVar19 = ebc_info->buf_align16;
    if (uVar19 != 0) {
      puVar11 = (ebc_info->lut_data).wf_table;
      iVar4 = (uint)(byte)ebc_info->frame_total - ebc_info->frame_left;
      uVar19 = (global_ebc->panel).vir_height;
      uVar9 = (global_ebc->panel).vir_width;
      uVar5 = (global_ebc->panel).mirror;
      uVar6 = uVar9 >> 4;
      if ((int)uVar19 < 1) {
        return;
      }
      uVar18 = 0;
      lVar2 = (ulong)(uVar6 - 1) + 1;
      if (uVar5 == 0) goto LAB_00101ce4;
      do {
        uVar9 = (((peVar7->panel).vir_height - 1) - uVar18) * uVar9;
        while( true ) {
          if (uVar6 != 0) {
            lVar15 = 0;
            pbVar14 = data_buf + (uVar9 >> 2);
            do {
              puVar1 = (undefined8 *)((long)buffer_old + lVar15);
              uVar12 = *(ulong *)((long)buffer_new + lVar15);
              lVar15 = lVar15 + 8;
              uVar13 = (uint)*puVar1;
              uVar10 = (uint)uVar12;
              uVar9 = (uint)((ulong)*puVar1 >> 0x20);
              uVar16 = uVar12 >> 0x20 & 0xffff;
              *pbVar14 = puVar11[(long)(int)((uVar13 & 0xff) * 0x100 + (uVar10 & 0xff)) +
                                 (long)(iVar4 * 0x10000)] |
                         puVar11[(long)(int)((uVar13 & 0xff00) + ((uVar10 & 0xffff) >> 8)) +
                                 (long)(iVar4 * 0x10000)] << 4;
              pbVar14[1] = puVar11[(long)(int)((uVar13 >> 0x10 & 0xff) * 0x100 +
                                              (uVar10 >> 0x10 & 0xff)) + (long)(iVar4 * 0x10000)] |
                           puVar11[(long)(int)((uVar13 >> 0x10 & 0xff00) + (uVar10 >> 0x18)) +
                                   (long)(iVar4 * 0x10000)] << 4;
              pbVar14[2] = puVar11[(long)(int)((uVar9 & 0xff) * 0x100 + (uint)(byte)uVar16) +
                                   (long)(iVar4 * 0x10000)] |
                           puVar11[(long)(int)((uVar9 & 0xff00) + ((uint)uVar16 >> 8)) +
                                   (long)(iVar4 * 0x10000)] << 4;
              pbVar14[3] = puVar11[(long)(int)((uVar9 >> 0x10 & 0xff) * 0x100 +
                                              (uint)(byte)(uVar12 >> 0x30)) +
                                   (long)(iVar4 * 0x10000)] |
                           puVar11[(long)(int)((uVar9 >> 0x10 & 0xff00) + (uint)(uVar12 >> 0x38)) +
                                   (long)(iVar4 * 0x10000)] << 4;
              pbVar14 = pbVar14 + 4;
            } while (lVar2 * 8 - lVar15 != 0);
            buffer_new = buffer_new + lVar2 * 2;
            buffer_old = buffer_old + lVar2 * 2;
          }
          uVar18 = uVar18 + 1;
          if (uVar19 == uVar18) {
            return;
          }
          uVar9 = (peVar7->panel).vir_width;
          if (uVar5 != 0) break;
LAB_00101ce4:
          uVar9 = uVar18 * uVar9;
        }
      } while( true );
    }
    puVar11 = (ebc_info->lut_data).wf_table;
    iVar4 = (uint)(byte)ebc_info->frame_total - ebc_info->frame_left;
    uVar5 = (global_ebc->panel).vir_height;
    uVar9 = (global_ebc->panel).vir_width;
    uVar18 = (global_ebc->panel).mirror;
    uVar6 = uVar9 >> 3;
    if ((int)uVar5 < 1) {
      return;
    }
    lVar2 = (ulong)(uVar6 - 1) + 1;
    if (uVar18 == 0) goto LAB_00101f80;
    do {
      uVar9 = (((peVar7->panel).vir_height - 1) - uVar19) * uVar9;
      while( true ) {
        if (uVar6 != 0) {
          lVar15 = 0;
          pbVar14 = data_buf + (uVar9 >> 2);
          do {
            uVar9 = buffer_old[lVar15];
            uVar10 = buffer_new[lVar15];
            lVar15 = lVar15 + 1;
            *pbVar14 = puVar11[(long)(int)((uVar9 & 0xff) * 0x100 + (uVar10 & 0xff)) +
                               (long)(iVar4 * 0x10000)] |
                       puVar11[(long)(int)((uVar9 & 0xff00) + ((uVar10 & 0xffff) >> 8)) +
                               (long)(iVar4 * 0x10000)] << 4;
            pbVar14[1] = puVar11[(long)(int)((uVar9 >> 0x10 & 0xff) * 0x100 +
                                            (uVar10 >> 0x10 & 0xff)) + (long)(iVar4 * 0x10000)] |
                         puVar11[(long)(int)((uVar9 >> 0x10 & 0xff00) + (uVar10 >> 0x18)) +
                                 (long)(iVar4 * 0x10000)] << 4;
            pbVar14 = pbVar14 + 2;
          } while ((int)lVar15 < (int)uVar6);
          buffer_new = buffer_new + lVar2;
          buffer_old = buffer_old + lVar2;
        }
        uVar19 = uVar19 + 1;
        if (uVar5 == uVar19) {
          return;
        }
        uVar9 = (peVar7->panel).vir_width;
        if (uVar18 != 0) break;
LAB_00101f80:
        uVar9 = uVar19 * uVar9;
      }
    } while( true );
  }
  puVar11 = (ebc_info->lut_data).wf_table;
  iVar4 = (uint)(byte)ebc_info->frame_total - ebc_info->frame_left;
  uVar19 = (global_ebc->panel).vir_height;
  uVar9 = (global_ebc->panel).vir_width;
  uVar5 = (global_ebc->panel).mirror;
  uVar6 = uVar9 >> 3;
  if ((int)uVar19 < 1) {
    return;
  }
  uVar18 = 0;
  lVar2 = (ulong)(uVar6 - 1) + 1;
  if (uVar5 == 0) goto LAB_00101b64;
  do {
    uVar9 = (((peVar7->panel).vir_height - 1) - uVar18) * uVar9;
    while( true ) {
      if (uVar6 != 0) {
        puVar3 = buffer_new + lVar2;
        puVar8 = buffer_new;
        pbVar14 = data_buf + (uVar9 >> 2);
        puVar17 = buffer_old;
        do {
          buffer_new = puVar8 + 1;
          uVar10 = *puVar8;
          uVar9 = *puVar17;
          *pbVar14 = (byte)((puVar11[(long)(int)((uVar10 >> 4 & 0xf) + (uVar9 >> 0xc & 0xf) * 0x100)
                                     + (long)(iVar4 * 0x10000)] & 3) << 2) |
                     (byte)((puVar11[(long)(int)((uVar10 >> 8 & 0xf) + (uVar9 >> 0x14 & 0xf) * 0x100
                                                ) + (long)(iVar4 * 0x10000)] & 3) << 4) |
                     puVar11[(long)(int)((uVar10 & 0xf) + (uVar9 >> 4 & 0xf) * 0x100) +
                             (long)(iVar4 * 0x10000)] & 3 |
                     puVar11[(long)(int)((uVar10 >> 0xc & 0xf) + (uVar9 >> 0x1c) * 0x100) +
                             (long)(iVar4 * 0x10000)] << 6;
          uVar9 = puVar17[1];
          pbVar14[1] = (byte)((puVar11[(long)(int)((uVar10 >> 0x14 & 0xf) +
                                                  (uVar9 >> 0xc & 0xf) * 0x100) +
                                       (long)(iVar4 * 0x10000)] & 3) << 2) |
                       (byte)((puVar11[(long)(int)((uVar10 >> 0x18 & 0xf) +
                                                  (uVar9 >> 0x14 & 0xf) * 0x100) +
                                       (long)(iVar4 * 0x10000)] & 3) << 4) |
                       puVar11[(long)(int)((uVar10 >> 0x10 & 0xf) + (uVar9 >> 4 & 0xf) * 0x100) +
                               (long)(iVar4 * 0x10000)] & 3 |
                       puVar11[(long)(int)((uVar10 >> 0x1c) + (uVar9 >> 0x1c) * 0x100) +
                               (long)(iVar4 * 0x10000)] << 6;
          puVar8 = buffer_new;
          pbVar14 = pbVar14 + 2;
          puVar17 = puVar17 + 2;
        } while (buffer_new != puVar3);
        buffer_old = buffer_old + lVar2 * 2;
      }
      uVar18 = uVar18 + 1;
      if (uVar19 == uVar18) {
        return;
      }
      uVar9 = (peVar7->panel).vir_width;
      if (uVar5 != 0) break;
LAB_00101b64:
      uVar9 = uVar18 * uVar9;
    }
  } while( true );
}



void direct_mode_data_change_part(u8 *data_buf,u32 *buffer_new,u32 *buffer_old,ebc_info *ebc_info)

{
  long lVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  u32 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ebc *peVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  u8 *puVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  undefined4 *puVar20;
  byte bVar21;
  byte *pbVar22;
  uint *puVar23;
  long lVar24;
  byte bVar25;
  u32 uVar26;
  undefined2 *puVar27;
  byte bVar28;
  u32 uVar29;
  uint uVar30;
  
  peVar12 = global_ebc;
  iVar6 = ebc_info->curr_dsp_buf->needpic;
  if (iVar6 == 0x20) {
    iVar6 = ebc_info->prev_dsp_buf->needpic;
    if (iVar6 == 0x20) {
      puVar16 = (ebc_info->lut_data).wf_table;
      iVar6 = (uint)(byte)ebc_info->frame_total - ebc_info->frame_left;
      uVar29 = (global_ebc->panel).vir_height;
      uVar14 = (global_ebc->panel).vir_width;
      uVar7 = (global_ebc->panel).mirror;
      uVar9 = uVar14 >> 2;
      if ((int)uVar29 < 1) {
        return;
      }
      uVar26 = 0;
      lVar1 = (ulong)(uVar9 - 1) + 1;
      if (uVar7 == 0) goto LAB_00102a74;
LAB_00102954:
      uVar14 = (((peVar12->panel).vir_height - 1) - uVar26) * uVar14;
      do {
        if (uVar9 != 0) {
          lVar24 = 0;
          do {
            while( true ) {
              uVar8 = buffer_old[lVar24];
              bVar21 = 0;
              uVar10 = buffer_new[lVar24];
              bVar25 = 0;
              uVar11 = uVar8 >> 0x10;
              uVar15 = uVar10 & 0xffff;
              uVar18 = uVar8 & 0xffff ^ uVar15;
              uVar5 = (uVar8 ^ uVar10) >> 0x10;
              if (uVar10 != uVar8) break;
              data_buf[lVar24 + (ulong)(uVar14 >> 2)] = '\0';
              lVar24 = lVar24 + 1;
              if ((int)uVar9 <= (int)lVar24) goto LAB_00102a58;
            }
            uVar30 = 3;
            bVar28 = 3;
            if ((uVar8 & 0xffff) != uVar15) {
              if ((uVar18 & 0xff) == 0) {
                bVar28 = 0;
              }
              bVar21 = bVar28 | 0xc;
              if ((uVar18 & 0xff00) == 0) {
                bVar21 = bVar28;
              }
              bVar21 = (puVar16[(long)(int)((uVar8 & 0xff) * 0x100 + (uVar10 & 0xff)) +
                                (long)(iVar6 * 0x10000)] |
                       puVar16[(long)(int)((uVar8 & 0xff00) + (uVar15 >> 8)) +
                               (long)(iVar6 * 0x10000)] << 2) & bVar21;
            }
            if (uVar11 != uVar10 >> 0x10) {
              if ((uVar5 & 0xff) == 0) {
                uVar30 = 0;
              }
              uVar15 = uVar30 | 0xc;
              if ((uVar5 & 0xff00) == 0) {
                uVar15 = uVar30;
              }
              bVar25 = (byte)((((uint)puVar16[(long)(int)((uVar11 & 0xff) * 0x100 +
                                                         (uVar10 >> 0x10 & 0xff)) +
                                              (long)(iVar6 * 0x10000)] |
                               (uint)puVar16[(long)(int)((uVar11 & 0xff00) + (uVar10 >> 0x18)) +
                                             (long)(iVar6 * 0x10000)] << 2) & uVar15) << 4);
            }
            data_buf[lVar24 + (ulong)(uVar14 >> 2)] = bVar21 | bVar25;
            lVar24 = lVar24 + 1;
          } while ((int)lVar24 < (int)uVar9);
LAB_00102a58:
          buffer_new = buffer_new + lVar1;
          buffer_old = buffer_old + lVar1;
        }
        uVar26 = uVar26 + 1;
        if (uVar29 == uVar26) {
          return;
        }
        uVar14 = (peVar12->panel).vir_width;
        if (uVar7 != 0) goto LAB_00102954;
LAB_00102a74:
        uVar14 = uVar26 * uVar14;
      } while( true );
    }
    if (iVar6 == 0x10) {
      puVar16 = (ebc_info->lut_data).wf_table;
      iVar6 = (uint)(byte)ebc_info->frame_total - ebc_info->frame_left;
      uVar29 = (global_ebc->panel).vir_height;
      uVar14 = (global_ebc->panel).vir_width;
      uVar7 = (global_ebc->panel).mirror;
      uVar9 = uVar14 >> 3;
      if ((int)uVar29 < 1) {
        return;
      }
      uVar26 = 0;
      lVar1 = (ulong)(uVar9 - 1) + 1;
      if (uVar7 == 0) goto LAB_00102740;
      do {
        uVar14 = (((peVar12->panel).vir_height - 1) - uVar26) * uVar14;
        while( true ) {
          if (uVar9 != 0) {
            puVar2 = buffer_new + lVar1 * 2;
            puVar13 = buffer_new;
            pbVar22 = data_buf + (uVar14 >> 2);
            puVar23 = buffer_old;
            do {
              uVar15 = *puVar23;
              bVar21 = 0;
              uVar14 = *puVar13;
              if ((uVar14 & 0xf8) != (uVar15 & 0xf) << 4) {
                bVar21 = puVar16[(long)(int)((uVar14 & 0xf8) + (uVar15 & 0xf) * 0x1000) +
                                 (long)(iVar6 * 0x10000)];
              }
              uVar18 = uVar14 >> 8 & 0xf8;
              if (uVar18 != (uVar15 & 0xf0)) {
                bVar21 = bVar21 | (byte)((puVar16[(long)(int)(uVar18 + (uVar15 & 0xf0) * 0x100) +
                                                  (long)(iVar6 * 0x10000)] & 0x3f) << 2);
              }
              uVar18 = uVar14 >> 0x10 & 0xf8;
              uVar5 = uVar15 >> 4 & 0xf0;
              if (uVar18 != uVar5) {
                bVar21 = bVar21 | (byte)((puVar16[(long)(int)(uVar18 + uVar5 * 0x100) +
                                                  (long)(iVar6 * 0x10000)] & 0xf) << 4);
              }
              uVar14 = uVar14 >> 0x18 & 0xf8;
              uVar18 = uVar15 >> 8 & 0xf0;
              if (uVar14 != uVar18) {
                bVar21 = bVar21 | (byte)((puVar16[(long)(int)(uVar14 + uVar18 * 0x100) +
                                                  (long)(iVar6 * 0x10000)] & 3) << 6);
              }
              buffer_new = puVar13 + 2;
              *pbVar22 = bVar21;
              bVar21 = 0;
              uVar14 = uVar15 >> 0xc & 0xf0;
              uVar18 = puVar13[1];
              if ((uVar18 & 0xf8) != uVar14) {
                bVar21 = puVar16[(long)(int)((uVar18 & 0xf8) + uVar14 * 0x100) +
                                 (long)(iVar6 * 0x10000)];
              }
              uVar14 = uVar18 >> 8 & 0xf8;
              uVar5 = uVar15 >> 0x10 & 0xf0;
              if (uVar14 != uVar5) {
                bVar21 = bVar21 | (byte)((puVar16[(long)(int)(uVar14 + uVar5 * 0x100) +
                                                  (long)(iVar6 * 0x10000)] & 0x3f) << 2);
              }
              uVar14 = uVar18 >> 0x10 & 0xf8;
              uVar5 = uVar15 >> 0x14 & 0xf0;
              if (uVar14 != uVar5) {
                bVar21 = bVar21 | (byte)((puVar16[(long)(int)(uVar14 + uVar5 * 0x100) +
                                                  (long)(iVar6 * 0x10000)] & 0xf) << 4);
              }
              uVar14 = uVar18 >> 0x18 & 0xf8;
              uVar15 = uVar15 >> 0x18 & 0xf0;
              if (uVar14 != uVar15) {
                bVar21 = bVar21 | (byte)((puVar16[(long)(int)(uVar14 + uVar15 * 0x100) +
                                                  (long)(iVar6 * 0x10000)] & 3) << 6);
              }
              pbVar22[1] = bVar21;
              puVar13 = buffer_new;
              pbVar22 = pbVar22 + 2;
              puVar23 = puVar23 + 1;
            } while (buffer_new != puVar2);
            buffer_old = buffer_old + lVar1;
          }
          uVar26 = uVar26 + 1;
          if (uVar29 == uVar26) {
            return;
          }
          uVar14 = (peVar12->panel).vir_width;
          if (uVar7 != 0) break;
LAB_00102740:
          uVar14 = uVar26 * uVar14;
        }
      } while( true );
    }
  }
  else if ((iVar6 == 0x10) && (ebc_info->prev_dsp_buf->needpic == 0x10)) {
    uVar29 = ebc_info->buf_align16;
    if (uVar29 == 0) {
      puVar16 = (ebc_info->lut_data).wf_table;
      iVar6 = (uint)(byte)ebc_info->frame_total - ebc_info->frame_left;
      uVar7 = (global_ebc->panel).vir_height;
      uVar26 = (global_ebc->panel).mirror;
      uVar14 = (global_ebc->panel).vir_width;
      uVar9 = uVar14 >> 3;
      if ((int)uVar7 < 1) {
        return;
      }
      lVar1 = (ulong)(uVar9 - 1) + 1;
      if (uVar26 == 0) goto LAB_001028e0;
      do {
        uVar14 = (((peVar12->panel).vir_height - 1) - uVar29) * uVar14;
        while( true ) {
          if (uVar9 != 0) {
            lVar24 = 0;
            puVar27 = (undefined2 *)(data_buf + (uVar14 >> 2));
            do {
              uVar5 = buffer_old[lVar24];
              bVar21 = 0;
              uVar8 = buffer_new[lVar24];
              bVar25 = 0;
              uVar14 = uVar8 & 0xffff;
              uVar10 = uVar5 >> 0x10;
              uVar15 = uVar5 & 0xffff ^ uVar14;
              uVar18 = (uVar5 ^ uVar8) >> 0x10;
              if (uVar8 == uVar5) {
                *puVar27 = 0;
              }
              else {
                bVar28 = 3;
                if ((uVar5 & 0xffff) != uVar14) {
                  bVar21 = bVar28;
                  if ((uVar15 & 0xf) == 0) {
                    bVar21 = 0;
                  }
                  bVar3 = bVar21 | 0xc;
                  if ((uVar15 & 0xf0) == 0) {
                    bVar3 = bVar21;
                  }
                  bVar4 = bVar3 | 0x30;
                  if ((uVar15 & 0xf00) == 0) {
                    bVar4 = bVar3;
                  }
                  bVar21 = bVar4 | 0xc0;
                  if ((uVar15 & 0xf000) == 0) {
                    bVar21 = bVar4;
                  }
                  bVar21 = (puVar16[(long)(int)((uVar5 & 0xff) * 0x100 + (uVar8 & 0xff)) +
                                    (long)(iVar6 * 0x10000)] |
                           puVar16[(long)(int)((uVar5 & 0xff00) + (uVar14 >> 8)) +
                                   (long)(iVar6 * 0x10000)] << 4) & bVar21;
                }
                *(byte *)puVar27 = bVar21;
                if (uVar10 != uVar8 >> 0x10) {
                  if ((uVar18 & 0xf) == 0) {
                    bVar28 = 0;
                  }
                  bVar21 = bVar28 | 0xc;
                  if ((uVar18 & 0xf0) == 0) {
                    bVar21 = bVar28;
                  }
                  bVar28 = bVar21 | 0x30;
                  if ((uVar18 & 0xf00) == 0) {
                    bVar28 = bVar21;
                  }
                  bVar25 = bVar28 | 0xc0;
                  if ((uVar18 & 0xf000) == 0) {
                    bVar25 = bVar28;
                  }
                  bVar25 = (puVar16[(long)(int)((uVar10 & 0xff) * 0x100 + (uVar8 >> 0x10 & 0xff)) +
                                    (long)(iVar6 * 0x10000)] |
                           puVar16[(long)(int)((uVar10 & 0xff00) + (uVar8 >> 0x18)) +
                                   (long)(iVar6 * 0x10000)] << 4) & bVar25;
                }
                *(byte *)((long)puVar27 + 1) = bVar25;
              }
              lVar24 = lVar24 + 1;
              puVar27 = puVar27 + 1;
            } while ((int)lVar24 < (int)uVar9);
            buffer_new = buffer_new + lVar1;
            buffer_old = buffer_old + lVar1;
          }
          uVar29 = uVar29 + 1;
          if (uVar7 == uVar29) {
            return;
          }
          uVar14 = (peVar12->panel).vir_width;
          if (uVar26 != 0) break;
LAB_001028e0:
          uVar14 = uVar29 * uVar14;
        }
      } while( true );
    }
    puVar16 = (ebc_info->lut_data).wf_table;
    iVar6 = (uint)(byte)ebc_info->frame_total - ebc_info->frame_left;
    uVar29 = (global_ebc->panel).vir_height;
    uVar7 = (global_ebc->panel).mirror;
    uVar14 = (global_ebc->panel).vir_width;
    uVar9 = uVar14 >> 4;
    if ((int)uVar29 < 1) {
      return;
    }
    uVar26 = 0;
    lVar1 = (ulong)(uVar9 - 1) + 1;
    if (uVar7 == 0) goto LAB_00102538;
    do {
      uVar14 = (((peVar12->panel).vir_height - 1) - uVar26) * uVar14;
      while( true ) {
        if (uVar9 != 0) {
          lVar24 = 0;
          puVar20 = (undefined4 *)(data_buf + (uVar14 >> 2));
          do {
            uVar17 = *(ulong *)(buffer_new + lVar24 * 2);
            uVar19 = *(ulong *)(buffer_old + lVar24 * 2);
            if (uVar17 == uVar19) {
              *puVar20 = 0;
            }
            else {
              uVar18 = (uint)uVar19;
              uVar15 = (uint)uVar17;
              uVar14 = uVar15 & 0xffff;
              bVar21 = 0;
              bVar25 = 3;
              if ((uVar18 & 0xffff) != uVar14) {
                uVar5 = uVar18 & 0xffff ^ uVar14;
                bVar21 = bVar25;
                if ((uVar5 & 0xf) == 0) {
                  bVar21 = 0;
                }
                bVar28 = bVar21 | 0xc;
                if ((uVar5 & 0xf0) == 0) {
                  bVar28 = bVar21;
                }
                bVar3 = bVar28 | 0x30;
                if ((uVar5 & 0xf00) == 0) {
                  bVar3 = bVar28;
                }
                bVar21 = bVar3 | 0xc0;
                if ((uVar5 & 0xf000) == 0) {
                  bVar21 = bVar3;
                }
                bVar21 = (puVar16[(long)(int)((uVar18 & 0xff) * 0x100 + (uVar15 & 0xff)) +
                                  (long)(iVar6 * 0x10000)] |
                         puVar16[(long)(int)((uVar18 & 0xff00) + (uVar14 >> 8)) +
                                 (long)(iVar6 * 0x10000)] << 4) & bVar21;
              }
              *(byte *)puVar20 = bVar21;
              uVar14 = uVar18 >> 0x10;
              bVar21 = 0;
              if (uVar14 != uVar15 >> 0x10) {
                uVar18 = (uVar18 ^ uVar15) >> 0x10;
                bVar21 = bVar25;
                if ((uVar18 & 0xf) == 0) {
                  bVar21 = 0;
                }
                bVar28 = bVar21 | 0xc;
                if ((uVar18 & 0xf0) == 0) {
                  bVar28 = bVar21;
                }
                bVar3 = bVar28 | 0x30;
                if ((uVar18 & 0xf00) == 0) {
                  bVar3 = bVar28;
                }
                bVar21 = bVar3 | 0xc0;
                if ((uVar18 & 0xf000) == 0) {
                  bVar21 = bVar3;
                }
                bVar21 = (puVar16[(long)(int)((uVar14 & 0xff) * 0x100 + (uVar15 >> 0x10 & 0xff)) +
                                  (long)(iVar6 * 0x10000)] |
                         puVar16[(long)(int)((uVar14 & 0xff00) + (uVar15 >> 0x18)) +
                                 (long)(iVar6 * 0x10000)] << 4) & bVar21;
              }
              *(byte *)((long)puVar20 + 1) = bVar21;
              uVar14 = (uint)(uVar19 >> 0x20);
              uVar19 = uVar17 >> 0x20 & 0xffff;
              bVar21 = 0;
              uVar15 = (uint)uVar19;
              if ((uVar14 & 0xffff) != uVar15) {
                uVar18 = uVar14 & 0xffff ^ uVar15;
                bVar21 = bVar25;
                if ((uVar18 & 0xf) == 0) {
                  bVar21 = 0;
                }
                bVar28 = bVar21 | 0xc;
                if ((uVar18 & 0xf0) == 0) {
                  bVar28 = bVar21;
                }
                bVar3 = bVar28 | 0x30;
                if ((uVar18 & 0xf00) == 0) {
                  bVar3 = bVar28;
                }
                bVar21 = bVar3 | 0xc0;
                if ((uVar18 & 0xf000) == 0) {
                  bVar21 = bVar3;
                }
                bVar21 = (puVar16[(long)(int)((uVar14 & 0xff) * 0x100 + (uint)(byte)uVar19) +
                                  (long)(iVar6 * 0x10000)] |
                         puVar16[(long)(int)((uVar14 & 0xff00) + (uVar15 >> 8)) +
                                 (long)(iVar6 * 0x10000)] << 4) & bVar21;
              }
              *(byte *)((long)puVar20 + 2) = bVar21;
              bVar21 = 0;
              uVar15 = (uint)(uVar17 >> 0x20);
              if (uVar14 >> 0x10 != uVar15 >> 0x10) {
                uVar18 = (uVar14 ^ uVar15) >> 0x10;
                if ((uVar18 & 0xf) == 0) {
                  bVar25 = 0;
                }
                bVar21 = bVar25 | 0xc;
                if ((uVar18 & 0xf0) == 0) {
                  bVar21 = bVar25;
                }
                bVar25 = bVar21 | 0x30;
                if ((uVar18 & 0xf00) == 0) {
                  bVar25 = bVar21;
                }
                bVar21 = bVar25 | 0xc0;
                if ((uVar18 & 0xf000) == 0) {
                  bVar21 = bVar25;
                }
                bVar21 = (puVar16[(long)(int)((uVar14 >> 0x10 & 0xff) * 0x100 +
                                             (uint)(byte)(uVar17 >> 0x30)) + (long)(iVar6 * 0x10000)
                                 ] |
                         puVar16[(long)(int)((uVar14 >> 0x10 & 0xff00) + (uVar15 >> 0x18)) +
                                 (long)(iVar6 * 0x10000)] << 4) & bVar21;
              }
              *(byte *)((long)puVar20 + 3) = bVar21;
            }
            lVar24 = lVar24 + 1;
            puVar20 = puVar20 + 1;
          } while ((int)lVar24 < (int)uVar9);
          buffer_new = buffer_new + lVar1 * 2;
          buffer_old = buffer_old + lVar1 * 2;
        }
        uVar26 = uVar26 + 1;
        if (uVar29 == uVar26) {
          return;
        }
        uVar14 = (peVar12->panel).vir_width;
        if (uVar7 != 0) break;
LAB_00102538:
        uVar14 = uVar26 * uVar14;
      }
    } while( true );
  }
  puVar16 = (ebc_info->lut_data).wf_table;
  iVar6 = (uint)(byte)ebc_info->frame_total - ebc_info->frame_left;
  uVar29 = (global_ebc->panel).vir_height;
  uVar14 = (global_ebc->panel).vir_width;
  uVar7 = (global_ebc->panel).mirror;
  uVar9 = uVar14 >> 3;
  if ((int)uVar29 < 1) {
    return;
  }
  uVar26 = 0;
  lVar1 = (ulong)(uVar9 - 1) + 1;
  if (uVar7 == 0) goto LAB_00102280;
  do {
    uVar14 = (((peVar12->panel).vir_height - 1) - uVar26) * uVar14;
    while( true ) {
      if (uVar9 != 0) {
        puVar2 = buffer_new + lVar1;
        puVar13 = buffer_new;
        pbVar22 = data_buf + (uVar14 >> 2);
        puVar23 = buffer_old;
        do {
          uVar14 = *puVar23;
          bVar21 = 0;
          buffer_new = puVar13 + 1;
          uVar15 = *puVar13;
          uVar18 = uVar14 >> 4 & 0xf;
          if ((uVar15 & 0xf) != uVar18) {
            bVar21 = puVar16[(long)(int)((uVar15 & 0xf) + uVar18 * 0x100) + (long)(iVar6 * 0x10000)]
                     & 3;
          }
          uVar18 = uVar15 >> 4 & 0xf;
          uVar5 = uVar14 >> 0xc & 0xf;
          if (uVar18 != uVar5) {
            bVar21 = bVar21 | (byte)((puVar16[(long)(int)(uVar18 + uVar5 * 0x100) +
                                              (long)(iVar6 * 0x10000)] & 3) << 2);
          }
          uVar18 = uVar15 >> 8 & 0xf;
          uVar5 = uVar14 >> 0x14 & 0xf;
          if (uVar18 != uVar5) {
            bVar21 = bVar21 | (byte)((puVar16[(long)(int)(uVar18 + uVar5 * 0x100) +
                                              (long)(iVar6 * 0x10000)] & 3) << 4);
          }
          uVar18 = uVar15 >> 0xc & 0xf;
          if (uVar18 != uVar14 >> 0x1c) {
            bVar21 = bVar21 | (byte)((puVar16[(long)(int)(uVar18 + (uVar14 >> 0x1c) * 0x100) +
                                              (long)(iVar6 * 0x10000)] & 3) << 6);
          }
          *pbVar22 = bVar21;
          uVar18 = uVar15 >> 0x10 & 0xf;
          bVar21 = 0;
          uVar14 = puVar23[1];
          uVar5 = uVar14 >> 4 & 0xf;
          if (uVar18 != uVar5) {
            bVar21 = puVar16[(long)(int)(uVar18 + uVar5 * 0x100) + (long)(iVar6 * 0x10000)] & 3;
          }
          uVar18 = uVar15 >> 0x14 & 0xf;
          uVar5 = uVar14 >> 0xc & 0xf;
          if (uVar18 != uVar5) {
            bVar21 = bVar21 | (byte)((puVar16[(long)(int)(uVar18 + uVar5 * 0x100) +
                                              (long)(iVar6 * 0x10000)] & 3) << 2);
          }
          uVar18 = uVar15 >> 0x18 & 0xf;
          uVar5 = uVar14 >> 0x14 & 0xf;
          if (uVar18 != uVar5) {
            bVar21 = bVar21 | (byte)((puVar16[(long)(int)(uVar18 + uVar5 * 0x100) +
                                              (long)(iVar6 * 0x10000)] & 3) << 4);
          }
          if (uVar15 >> 0x1c != uVar14 >> 0x1c) {
            bVar21 = bVar21 | (byte)((puVar16[(long)(int)((uVar15 >> 0x1c) +
                                                         (uVar14 >> 0x1c) * 0x100) +
                                              (long)(iVar6 * 0x10000)] & 3) << 6);
          }
          pbVar22[1] = bVar21;
          puVar13 = buffer_new;
          pbVar22 = pbVar22 + 2;
          puVar23 = puVar23 + 2;
        } while (buffer_new != puVar2);
        buffer_old = buffer_old + lVar1 * 2;
      }
      uVar26 = uVar26 + 1;
      if (uVar29 == uVar26) {
        return;
      }
      uVar14 = (peVar12->panel).vir_width;
      if (uVar7 != 0) break;
LAB_00102280:
      uVar14 = uVar26 * uVar14;
    }
  } while( true );
}



void flip(ebc_panel *panel,ebc_info *ebc_info)

{
  int iVar1;
  device *pdVar2;
  dma_map_ops *pdVar3;
  
  iVar1 = panel->current_buffer;
  pdVar2 = panel->dev;
  if (pdVar2 == (device *)0x0) {
    pdVar3 = (dma_map_ops *)&dummy_dma_ops;
  }
  else {
    pdVar3 = (dma_map_ops *)&dummy_dma_ops;
    if (pdVar2->dma_ops != (dma_map_ops *)0x0) {
      pdVar3 = pdVar2->dma_ops;
    }
  }
  if (pdVar3->sync_single_for_device !=
      (anon_subr_void_device_ptr_dma_addr_t_size_t_dma_data_direction_for_sync_single_for_device *)
      0x0) {
    (*pdVar3->sync_single_for_device)
              (pdVar2,panel->fb[iVar1].phy_addr,(long)(int)ebc_info,DMA_TO_DEVICE);
  }
  (*panel->tcon->dsp_mode_set)(panel->tcon,0,0,0,0);
  (*panel->tcon->image_addr_set)(panel->tcon,*(u32 *)&panel->fb[iVar1].phy_addr,0);
  (*panel->tcon->frame_start)(panel->tcon,1);
  panel->current_buffer = 1 - panel->current_buffer;
  return;
}



void ebc_frame_start(ebc *ebc)

{
  ebc_info *ebc_info;
  ebc_panel *panel;
  panel_refresh_mode pVar1;
  ebc_buf_s *peVar2;
  
  ebc_info = &ebc->info;
  panel = &ebc->panel;
  peVar2 = (ebc->info).curr_dsp_buf;
  pVar1 = peVar2->buf_mode;
  if ((int)pVar1 < 0x11) {
    if (6 < (int)pVar1) {
      (ebc->info).frame_left = (uint)(byte)(ebc->info).frame_total;
      direct_mode_data_change_part
                ((u8 *)(ebc->info).direct_buffer[0],(u32 *)peVar2->virt_addr,
                 (u32 *)((ebc->info).prev_dsp_buf)->virt_addr,ebc_info);
      (ebc->panel).current_buffer = 0;
      flip(panel,(ebc_info *)(ulong)(uint)(ebc->info).direct_buf_real_size);
      (ebc->info).frame_left = (ebc->info).frame_left + -1;
      direct_mode_data_change_part
                ((u8 *)(ebc->info).direct_buffer[1],(u32 *)((ebc->info).curr_dsp_buf)->virt_addr,
                 (u32 *)((ebc->info).prev_dsp_buf)->virt_addr,ebc_info);
      return;
    }
    if (pVar1 == EPD_AUTO) {
LAB_00102bfc:
      get_auto_image((u8 *)(ebc->info).direct_buffer[0],(u32 *)(ebc->info).auto_image_new,
                     (u32 *)(ebc->info).auto_image_old,(ebc->info).auto_frame_count,ebc_info);
      if ((ebc->info).auto_need_refresh != 0) {
        (ebc->panel).current_buffer = 0;
        flip(panel,(ebc_info *)(ulong)(uint)(ebc->info).direct_buf_real_size);
        get_auto_image((u8 *)(ebc->info).direct_buffer[1],(u32 *)(ebc->info).auto_image_new,
                       (u32 *)(ebc->info).auto_image_old,(ebc->info).auto_frame_count,ebc_info);
        return;
      }
      _dev_info((ebc->info).dev,"%s: auto no need to update\n","ebc_frame_start");
      (ebc->info).is_busy_now = 0;
      return;
    }
    if (pVar1 == EPD_OVERLAY) {
      get_overlay_image((u8 *)(ebc->info).direct_buffer[0],(u32 *)(ebc->info).auto_image_new,
                        (u32 *)(ebc->info).auto_image_old,(ebc->info).auto_frame_count,ebc_info);
      if ((ebc->info).auto_need_refresh != 0) {
        (ebc->panel).current_buffer = 0;
        flip(panel,(ebc_info *)(ulong)(uint)(ebc->info).direct_buf_real_size);
        get_overlay_image((u8 *)(ebc->info).direct_buffer[1],(u32 *)(ebc->info).auto_image_new,
                          (u32 *)(ebc->info).auto_image_old,(ebc->info).auto_frame_count,ebc_info);
        return;
      }
      _dev_info((ebc->info).dev,"%s: overlay no need to update\n","ebc_frame_start");
      (ebc->info).is_busy_now = 0;
      return;
    }
  }
  else if (pVar1 + ~EPD_FORCE_FULL < 2) goto LAB_00102bfc;
  (ebc->info).frame_left = (uint)(byte)(ebc->info).frame_total;
  direct_mode_data_change
            ((u8 *)(ebc->info).direct_buffer[0],(u32 *)peVar2->virt_addr,
             (u32 *)((ebc->info).prev_dsp_buf)->virt_addr,ebc_info);
  (ebc->panel).current_buffer = 0;
  flip(panel,(ebc_info *)(ulong)(uint)(ebc->info).direct_buf_real_size);
  (ebc->info).frame_left = (ebc->info).frame_left + -1;
  direct_mode_data_change
            ((u8 *)(ebc->info).direct_buffer[1],(u32 *)((ebc->info).curr_dsp_buf)->virt_addr,
             (u32 *)((ebc->info).prev_dsp_buf)->virt_addr,ebc_info);
  return;
}



int ebc_power_set(ebc *ebc,int power_status)

{
  int iVar1;
  
  (ebc->info).ebc_power_status = power_status;
  (*ebc->tcon->disable)(ebc->tcon);
  (*ebc->pmic->pmic_power_req)(ebc->pmic,false);
  if ((ebc->info).wake_lock_is_set == 0) {
    iVar1 = _dev_info(ebc->dev,"ebc hw power off\n");
    return iVar1;
  }
  (ebc->info).wake_lock_is_set = 0;
  __pm_relax(&(ebc->info).suspend_lock);
  iVar1 = _dev_info(ebc->dev,"ebc hw power off\n");
  return iVar1;
}



int ebc_suspend(device *dev)

{
  ebc *ebc;
  
  ebc = (ebc *)dev->driver_data;
  if ((ebc->info).ebc_power_status == 1) {
    _dev_info((ebc->info).dev,"%s: device is busy now...\n","ebc_suspend");
    ebc_power_set(ebc,0);
  }
  (ebc->info).is_deep_sleep = 1;
  (*ebc->pmic->pmic_pm_suspend)(ebc->pmic);
  _dev_info((ebc->info).dev,"device suspend\n");
  return 0;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int check_black_percent(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long in_x0;
  int in_w1;
  long lVar4;
  int in_w2;
  int iVar5;
  
  iVar2 = in_w2 << 1;
  if (in_w1 != 0x20) {
    iVar2 = in_w2;
  }
  iVar3 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  if (0 < iVar3 >> 3) {
    lVar4 = 0;
    iVar5 = 0;
    do {
      lVar1 = lVar4 * 8;
      lVar4 = lVar4 + 1;
      if (*(long *)(in_x0 + lVar1) != 0) {
        iVar5 = iVar5 + 1;
      }
      if (iVar2 / 10 + iVar5 * -8 < 0 != SBORROW4(iVar2 / 10,iVar5 * 8)) {
        return 0;
      }
    } while ((int)lVar4 < iVar3 >> 3);
  }
  printk("black point > 90percent, skip this frame\n");
  return 1;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Could not reconcile some variable overlaps

int ebc_probe(platform_device *pdev)

{
  device *pdVar1;
  list_head *plVar2;
  timer_list *ptVar3;
  timer_list *ptVar4;
  u32 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  ebc *peVar12;
  device_node *pdVar13;
  long lVar14;
  ebc_tcon *peVar15;
  uint *puVar16;
  ebc_pmic *peVar17;
  char *pcVar18;
  u8 *__s;
  workqueue_struct *pwVar19;
  task_struct *ptVar20;
  char *__s_00;
  ebc_buf_s *peVar21;
  ulong uVar22;
  int iVar23;
  device *pdVar24;
  void *__dest;
  void *__dest_00;
  int local_70;
  uint local_6c;
  resource r;
  
  lVar9 = __stack_chk_guard;
  pdVar1 = &pdev->dev;
  peVar12 = (ebc *)devm_kmalloc(pdVar1,0x338,0x6080c0);
  if (peVar12 == (ebc *)0x0) {
    iVar10 = -0xc;
    goto LAB_00103038;
  }
  pdVar13 = (pdev->dev).of_node;
  global_ebc = peVar12;
  peVar12->dev = pdVar1;
  lVar14 = of_parse_phandle(pdVar13,"ebc_tcon",0);
  if (lVar14 == 0) {
    iVar10 = -0x13;
    _dev_err(pdVar1,"not find ebc tcon\n");
    goto LAB_00103038;
  }
  lVar14 = of_find_device_by_node();
  if (lVar14 != 0) {
    peVar15 = *(ebc_tcon **)(lVar14 + 200);
    peVar12->tcon = peVar15;
    if (peVar15 != (ebc_tcon *)0x0) {
      peVar15->dsp_end_callback = frame_done_callback;
      puVar16 = (uint *)of_get_property((pdev->dev).of_node,&DAT_0010a708,&local_70);
      local_70 = (int)((ulong)(long)local_70 >> 2);
      if (local_70 == 0) {
        iVar10 = -0x16;
        _dev_err(pdVar1,"wrong pmics number\n");
        goto LAB_00103038;
      }
      iVar10 = 0;
      if (local_70 < 1) {
LAB_00103084:
        peVar17 = peVar12->pmic;
        if (peVar17 != (ebc_pmic *)0x0) {
          (peVar12->info).dev = pdVar1;
          (peVar12->panel).dev = pdVar1;
          (peVar12->panel).tcon = peVar12->tcon;
          (peVar12->panel).pmic = peVar17;
          iVar10 = of_property_read_variable_u32_array
                             ((pdev->dev).of_node,"panel,width",&(peVar12->panel).width,1,0);
          if ((((((iVar10 < 0) ||
                 (iVar10 = of_property_read_variable_u32_array
                                     ((pdev->dev).of_node,"panel,height",&(peVar12->panel).height,1,
                                      0), iVar10 < 0)) ||
                (iVar10 = of_property_read_variable_u32_array
                                    ((pdev->dev).of_node,"panel,vir_width",
                                     &(peVar12->panel).vir_width,1,0), iVar10 < 0)) ||
               ((iVar10 = of_property_read_variable_u32_array
                                    ((pdev->dev).of_node,"panel,vir_height",
                                     &(peVar12->panel).vir_height,1,0), iVar10 < 0 ||
                (iVar10 = of_property_read_variable_u32_array
                                    ((pdev->dev).of_node,"panel,sdck",&(peVar12->panel).sdck,1,0),
                iVar10 < 0)))) ||
              (((iVar10 = of_property_read_variable_u32_array
                                    ((pdev->dev).of_node,"panel,lsl",&(peVar12->panel).lsl,1,0),
                iVar10 < 0 ||
                ((iVar10 = of_property_read_variable_u32_array
                                     ((pdev->dev).of_node,"panel,lbl",&(peVar12->panel).lbl,1,0),
                 iVar10 < 0 ||
                 (iVar10 = of_property_read_variable_u32_array
                                     ((pdev->dev).of_node,"panel,ldl",&(peVar12->panel).ldl,1,0),
                 iVar10 < 0)))) ||
               (iVar10 = of_property_read_variable_u32_array
                                   ((pdev->dev).of_node,"panel,lel",&(peVar12->panel).lel,1,0),
               iVar10 < 0)))) ||
             ((((iVar10 = of_property_read_variable_u32_array
                                    ((pdev->dev).of_node,"panel,gdck-sta",&(peVar12->panel).gdck_sta
                                     ,1,0), iVar10 < 0 ||
                (iVar10 = of_property_read_variable_u32_array
                                    ((pdev->dev).of_node,"panel,lgonl",&(peVar12->panel).lgonl,1,0),
                iVar10 < 0)) ||
               (iVar10 = of_property_read_variable_u32_array
                                   ((pdev->dev).of_node,"panel,fsl",&(peVar12->panel).fsl,1,0),
               iVar10 < 0)) ||
              (((iVar10 = of_property_read_variable_u32_array
                                    ((pdev->dev).of_node,"panel,fbl",&(peVar12->panel).fbl,1,0),
                iVar10 < 0 ||
                (iVar10 = of_property_read_variable_u32_array
                                    ((pdev->dev).of_node,"panel,fdl",&(peVar12->panel).fdl,1,0),
                iVar10 < 0)) ||
               (iVar10 = of_property_read_variable_u32_array
                                   ((pdev->dev).of_node,"panel,fel",&(peVar12->panel).fel,1,0),
               iVar10 < 0)))))) {
            iVar10 = -0x16;
            _dev_err(pdVar1,"failed to probe panel: %d\n",0xffffffea);
            goto LAB_00103038;
          }
          iVar10 = of_property_read_variable_u32_array
                             ((pdev->dev).of_node,"panel,panel_16bit",&(peVar12->panel).panel_16bit,
                              1,0);
          if (iVar10 < 0) {
            (peVar12->panel).panel_16bit = 0;
          }
          iVar10 = of_property_read_variable_u32_array
                             ((pdev->dev).of_node,"panel,panel_color",&(peVar12->panel).panel_color,
                              1,0);
          if (iVar10 < 0) {
            (peVar12->panel).panel_color = 0;
          }
          iVar10 = of_property_read_variable_u32_array
                             ((pdev->dev).of_node,"panel,mirror",&(peVar12->panel).mirror,1,0);
          if (iVar10 < 0) {
            (peVar12->panel).mirror = 0;
          }
          iVar10 = of_property_read_variable_u32_array
                             ((pdev->dev).of_node,"panel,width-mm",&(peVar12->panel).width_mm,1,0);
          if (iVar10 < 0) {
            (peVar12->panel).width_mm = 0;
          }
          iVar10 = of_property_read_variable_u32_array
                             ((pdev->dev).of_node,"panel,height-mm",&(peVar12->panel).height_mm,1,0)
          ;
          if (iVar10 < 0) {
            (peVar12->panel).height_mm = 0;
          }
          uVar5 = (peVar12->panel).vir_height;
          (peVar12->info).height = uVar5;
          uVar6 = (peVar12->panel).vir_width;
          (peVar12->info).width = uVar6;
          uVar7 = uVar5 * uVar6;
          (peVar12->info).buf_align16 = (uint)((uVar6 & 0xf) == 0);
          (peVar12->info).ebc_buf_real_size = uVar7 >> 1;
          (peVar12->info).direct_buf_real_size = uVar7 >> 2;
          pdVar24 = peVar12->dev;
          lVar14 = of_parse_phandle(pdVar24->of_node,"memory-region",0);
          if (lVar14 == 0) {
            iVar10 = -0x13;
          }
          else {
            iVar10 = of_address_to_resource(lVar14,0,&r);
            if (iVar10 == 0) {
              (peVar12->info).ebc_buffer_phy = CONCAT44(r.start._4_4_,(uint)r.start);
              iVar10 = ((int)r.end + 1) - (uint)r.start;
              (peVar12->info).ebc_buffer_size = iVar10;
              pcVar18 = (char *)devm_memremap(pdVar24,CONCAT44(r.start._4_4_,(uint)r.start),
                                              (long)iVar10,1);
              (peVar12->info).ebc_buffer_vir = pcVar18;
              if ((pcVar18 != (char *)0x0) &&
                 (iVar10 = ebc_buf_init((peVar12->info).ebc_buffer_phy,pcVar18,
                                        (peVar12->info).ebc_buffer_size,0x400000,4), iVar10 == 0)) {
                pcVar18 = (peVar12->info).ebc_buffer_vir;
                (peVar12->panel).fb[0].size = 0x100000;
                (peVar12->panel).fb[0].virt_addr = pcVar18 + 0x1400000;
                uVar22 = (peVar12->info).ebc_buffer_phy;
                (peVar12->panel).fb[0].phy_addr = uVar22 + 0x1400000;
                (peVar12->info).direct_buffer[0] = pcVar18 + 0x1400000;
                (peVar12->panel).fb[1].size = 0x100000;
                (peVar12->panel).fb[1].virt_addr = pcVar18 + 0x1500000;
                (peVar12->panel).fb[1].phy_addr = uVar22 + 0x1500000;
                (peVar12->info).auto_image_new = (int *)(pcVar18 + 0x1600000);
                (peVar12->info).auto_image_old = (int *)(pcVar18 + 0x1a00000);
                (peVar12->info).direct_buffer[1] = pcVar18 + 0x1500000;
                (peVar12->info).auto_image_bg = (int *)(pcVar18 + 0x1e00000);
                (peVar12->info).lut_data.wf_table = (u8 *)(pcVar18 + 0x2200000);
                __s = (u8 *)devm_kmalloc(pdVar24,(peVar12->panel).vir_width *
                                                 (peVar12->panel).vir_height,0x6080c0);
                (peVar12->info).auto_frame_count = __s;
                if (__s != (u8 *)0x0) {
                  memset(__s,0,(ulong)((peVar12->panel).vir_width * (peVar12->panel).vir_height));
                  memset((peVar12->info).auto_image_bg,0xff,(long)(peVar12->info).ebc_buf_real_size)
                  ;
                  pdVar24 = (peVar12->info).dev;
                  lVar14 = of_parse_phandle(pdVar24->of_node,"waveform-region",0);
                  if (lVar14 == 0) {
                    iVar10 = -0x13;
                  }
                  else {
                    iVar10 = of_address_to_resource(lVar14,0,&r);
                    if (iVar10 == 0) {
                      (peVar12->info).lut_buffer_phy = CONCAT44(r.start._4_4_,(uint)r.start);
                      iVar23 = ((int)r.end + 1) - (uint)r.start;
                      (peVar12->info).lut_buffer_size = iVar23;
                      pcVar18 = (char *)devm_memremap(pdVar24,CONCAT44(r.start._4_4_,(uint)r.start),
                                                      (long)iVar23,1);
                      (peVar12->info).lut_ddr_vir = pcVar18;
                      if (pcVar18 != (char *)0x0) {
                        iVar11 = epd_lut_from_mem_init(pcVar18);
                        if (iVar11 < 0) {
                          _dev_err((peVar12->info).dev,
                                   "Failed to read waveform from mem, we use waveform file from kernel file instead\n"
                                  );
                          iVar23 = epd_lut_from_file_init
                                             ((device_conflict *)(peVar12->info).dev,
                                              (peVar12->info).lut_ddr_vir,iVar23);
                          if (iVar23 < 0) {
                            iVar10 = -1;
                            _dev_err((peVar12->info).dev,
                                     "Failed to read waveform file from kernel, no waveform!!!\n");
                            goto LAB_001034b8;
                          }
                        }
                        plVar2 = &(peVar12->info).auto_buffer_work.entry;
                        (peVar12->info).auto_buffer_work.data.counter = 0xfffffffe0;
                        (peVar12->info).auto_buffer_work.entry.next = plVar2;
                        (peVar12->info).auto_buffer_work.entry.prev = plVar2;
                        (peVar12->info).auto_buffer_work.func = new_buffer_refresh;
                        r.start._0_4_ = 99;
                        pwVar19 = (workqueue_struct *)
                                  __alloc_workqueue_key
                                            (&DAT_0010abc8,0xa000e,1,0,0,"auto-refresh-wq");
                        (peVar12->info).auto_buffer_wq = pwVar19;
                        ebc_auto_task =
                             (task_struct *)
                             kthread_create_on_node
                                       (ebc_auto_tast_function,&peVar12->info,0xffffffff,"ebc_task")
                        ;
                        if (ebc_auto_task < (task_struct *)0xfffffffffffff001) {
                          sched_setscheduler_nocheck(ebc_auto_task,1,&r);
                          __ll_sc_atomic_add(1,&ebc_auto_task->usage);
                          r.start._0_4_ = 99;
                          ptVar20 = (task_struct *)
                                    kthread_create_on_node
                                              (ebc_thread,&peVar12->info,0xffffffff,"ebc_thread");
                          if (ptVar20 < (task_struct *)0xfffffffffffff001) {
                            wake_up_process();
                            (peVar12->info).ebc_task = ptVar20;
                            sched_setscheduler_nocheck(ptVar20,1,&r);
                            __ll_sc_atomic_add(1,&((peVar12->info).ebc_task)->usage);
                            (peVar12->info).full_mode_num = -1;
                            (peVar12->info).is_busy_now = 0;
                            (peVar12->info).auto_check = 0;
                            (peVar12->info).ebc_dsp_buf_status = 0;
                            (peVar12->info).ebc_power_status = 0;
                            ptVar3 = &(peVar12->info).vdd_timer;
                            (peVar12->info).is_early_suspend = 0;
                            (peVar12->info).is_deep_sleep = 0;
                            (peVar12->info).suspend_lock.ws.name = (char *)0x0;
                            *(undefined8 *)&(peVar12->info).suspend_lock.ws.id = 0;
                            (peVar12->info).suspend_lock.ws.entry.next = (list_head *)0x0;
                            (peVar12->info).suspend_lock.ws.entry.prev = (list_head *)0x0;
                            *(undefined8 *)&(peVar12->info).suspend_lock.ws.lock = 0;
                            (peVar12->info).suspend_lock.ws.wakeirq = (wake_irq *)0x0;
                            (peVar12->info).suspend_lock.ws.timer.entry.next = (hlist_node *)0x0;
                            (peVar12->info).suspend_lock.ws.timer.entry.pprev = (hlist_node **)0x0;
                            (peVar12->info).suspend_lock.ws.timer.expires = 0;
                            (peVar12->info).suspend_lock.ws.timer.function =
                                 (anon_subr_void_timer_list_ptr_for_function *)0x0;
                            *(undefined8 *)&(peVar12->info).suspend_lock.ws.timer.flags = 0;
                            (peVar12->info).suspend_lock.ws.timer.android_kabi_reserved1 = 0;
                            (peVar12->info).suspend_lock.ws.timer.android_kabi_reserved2 = 0;
                            (peVar12->info).suspend_lock.ws.timer_expires = 0;
                            (peVar12->info).suspend_lock.ws.total_time = 0;
                            (peVar12->info).suspend_lock.ws.max_time = 0;
                            (peVar12->info).suspend_lock.ws.last_time = 0;
                            (peVar12->info).suspend_lock.ws.start_prevent_time = 0;
                            (peVar12->info).suspend_lock.ws.prevent_sleep_time = 0;
                            (peVar12->info).suspend_lock.ws.event_count = 0;
                            (peVar12->info).suspend_lock.ws.active_count = 0;
                            (peVar12->info).suspend_lock.ws.relax_count = 0;
                            (peVar12->info).suspend_lock.ws.expire_count = 0;
                            (peVar12->info).suspend_lock.ws.wakeup_count = 0;
                            (peVar12->info).suspend_lock.ws.dev = (device *)0x0;
                            *(undefined8 *)&(peVar12->info).suspend_lock.ws.field_0xc8 = 0;
                            (peVar12->info).suspend_lock.ws.name = "ebc";
                            wakeup_source_add();
                            (peVar12->info).wake_lock_is_set = 0;
                            init_timer_key(ptVar3,ebc_vdd_power_timeout,0,0,0);
                            ptVar4 = &(peVar12->info).frame_timer;
                            mod_timer(ptVar3,jiffies + 0xfffffff);
                            init_timer_key(ptVar4,ebc_frame_timeout,0,0,0);
                            mod_timer(ptVar4,jiffies + 0xfffffff);
                            pcVar18 = saved_command_line;
                            local_6c = 0;
                            r.start._0_4_ = 0;
                            __s_00 = strstr(saved_command_line,"ulogo_addr=");
                            pcVar18 = strstr(pcVar18,"klogo_addr=");
                            if ((__s_00 == (char *)0x0) ||
                               (sscanf(__s_00,"ulogo_addr=0x%x",&local_6c),
                               (ulong)local_6c < (peVar12->info).ebc_buffer_phy)) {
                              bVar8 = false;
                              __dest_00 = (void *)0x0;
                              __dest = (void *)0x0;
                              if (pcVar18 != (char *)0x0) {
LAB_001037a8:
                                sscanf(pcVar18,"klogo_addr=0x%x",&r);
                                pcVar18 = (char *)0x0;
                                __dest = (void *)0x0;
                                if ((peVar12->info).ebc_buffer_phy <= (ulong)(uint)r.start) {
                                  _dev_info((peVar12->info).dev,
                                            "need show klogo, klogo addr = 0x%x\n");
                                  __dest = (void *)__kmalloc((peVar12->panel).vir_width *
                                                             (peVar12->panel).vir_height >> 1,
                                                             0x6080c0);
                                  if (__dest == (void *)0x0) {
                                    _dev_err((peVar12->info).dev,"malloc klogo buffer failed\n");
                                    goto LAB_00103868;
                                  }
                                  pcVar18 = (char *)0x1;
                                  memcpy(__dest,(peVar12->info).ebc_buffer_vir +
                                                ((ulong)(uint)r.start -
                                                (peVar12->info).ebc_buffer_phy),
                                         (ulong)((peVar12->panel).vir_width *
                                                 (peVar12->panel).vir_height >> 1));
                                }
                                iVar23 = (int)pcVar18;
                                if (bVar8) goto LAB_0010396c;
                              }
                              iVar23 = (int)pcVar18;
                              _dev_info((peVar12->info).dev,"no uboot logo, panel init\n");
                              ebc_pmic_verity_vcom((ebc_pmic_conflict *)peVar12->pmic);
                              peVar21 = ebc_empty_buf_get("ebc_dev_reset");
                              memset(peVar21->virt_addr,0xff,
                                     (ulong)((peVar12->panel).vir_width *
                                             (peVar12->panel).vir_height >> 1));
                              peVar21->win_x1 = 0;
                              peVar21->win_y1 = 0;
                              peVar21->buf_mode = EPD_RESET;
                              peVar21->win_x2 = (peVar12->panel).vir_width;
                              peVar21->win_y2 = (peVar12->panel).vir_height;
                              peVar21->needpic = 0x10;
                              ebc_add_to_dsp_buf_list(peVar21);
LAB_00103840:
                              if ((iVar23 != 0) &&
                                 (peVar21 = ebc_empty_buf_get("ebc_dev_logo"),
                                 peVar21 != (ebc_buf_s *)0x0)) {
                                memcpy(peVar21->virt_addr,__dest,
                                       (ulong)((peVar12->panel).vir_width *
                                               (peVar12->panel).vir_height >> 1));
                                peVar21->win_x1 = 0;
                                peVar21->win_y1 = 0;
                                peVar21->buf_mode = EPD_PART_GC16;
                                peVar21->win_x2 = (peVar12->panel).vir_width;
                                peVar21->win_y2 = (peVar12->panel).vir_height;
                                peVar21->needpic = 0x10;
                                ebc_add_to_dsp_buf_list(peVar21);
                              }
                              if ((peVar12->info).ebc_dsp_buf_status == 0) {
                                (peVar12->info).ebc_dsp_buf_status = 1;
                                __wake_up_sync(&ebc_thread_wq,1);
                              }
                              if (__dest_00 != (void *)0x0) {
                                kfree(__dest_00);
                              }
                              if (__dest != (void *)0x0) {
                                kfree(__dest);
                              }
                            }
                            else {
                              _dev_info((peVar12->info).dev,
                                        "have ulogo display, ulogo addr = 0x%x\n");
                              __dest_00 = (void *)__kmalloc((peVar12->panel).vir_width *
                                                            (peVar12->panel).vir_height >> 1,
                                                            0x6080c0);
                              if (__dest_00 != (void *)0x0) {
                                memcpy(__dest_00,
                                       (peVar12->info).ebc_buffer_vir +
                                       ((ulong)local_6c - (peVar12->info).ebc_buffer_phy),
                                       (ulong)((peVar12->panel).vir_width *
                                               (peVar12->panel).vir_height >> 1));
                                if (pcVar18 != (char *)0x0) {
                                  bVar8 = true;
                                  goto LAB_001037a8;
                                }
                                iVar23 = 0;
                                __dest = (void *)0x0;
LAB_0010396c:
                                peVar21 = ebc_empty_buf_get("ebc_dev_logo");
                                if (peVar21 != (ebc_buf_s *)0x0) {
                                  memcpy(peVar21->virt_addr,__dest_00,
                                         (ulong)((peVar12->panel).vir_width *
                                                 (peVar12->panel).vir_height >> 1));
                                  peVar21->win_x1 = 0;
                                  peVar21->win_y1 = 0;
                                  peVar21->buf_mode = EPD_PART_GC16;
                                  peVar21->win_x2 = (peVar12->panel).vir_width;
                                  peVar21->win_y2 = (peVar12->panel).vir_height;
                                  peVar21->needpic = 0x10;
                                  ebc_add_to_dsp_buf_list(peVar21);
                                }
                                goto LAB_00103840;
                              }
                              _dev_err((peVar12->info).dev,"malloc ulogo buffer failed\n");
                            }
LAB_00103868:
                            (pdev->dev).driver_data = peVar12;
                            misc_register(&ebc_misc);
                            misc_register(&waveform_misc);
                            device_create_file((peVar12->info).dev,&dev_attr_waveform_version);
                            device_create_file((peVar12->info).dev,&dev_attr_pmic_name);
                            device_create_file((peVar12->info).dev,&dev_attr_pmic_temp);
                            device_create_file((peVar12->info).dev,&dev_attr_pmic_vcom);
                            device_create_file((peVar12->info).dev,&dev_attr_ebc_version);
                            device_create_file((peVar12->info).dev,&dev_attr_ebc_state);
                            device_create_file((peVar12->info).dev,&dev_attr_ebc_buf_state);
                            _dev_info((peVar12->info).dev,"rockchip ebc driver %s probe success\n",
                                      &DAT_0010a5e8);
                            goto LAB_00103038;
                          }
                          (peVar12->info).ebc_task = ptVar20;
                          _dev_err((peVar12->info).dev,"failed to run ebc thread\n");
                        }
                        else {
                          _dev_err((peVar12->info).dev,"failed to create ebc_task thread\n");
                        }
                        iVar10 = -1;
                        _dev_err(pdVar1,"task init failed\n");
                        goto LAB_00103038;
                      }
                      iVar10 = -0xc;
                      _dev_err((peVar12->info).dev,"%s:%d: failed to get mem from reserved\n",
                               "ebc_lut_table_init",0xae2);
                    }
                  }
LAB_001034b8:
                  _dev_err(pdVar1,"lut table init failed\n");
                  goto LAB_00103038;
                }
              }
              iVar10 = -0xc;
            }
            else {
              _dev_err(pdVar24,"Couldn\'t address to resource for reserved memory\n");
            }
          }
          _dev_err(pdVar1,"buffer manage init failed\n");
          goto LAB_00103038;
        }
      }
      else {
        do {
          uVar6 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
          lVar14 = of_find_node_by_phandle(uVar6 >> 0x10 | uVar6 << 0x10);
          if (lVar14 == 0) {
            iVar10 = -0x13;
            _dev_err(pdVar1,"not find pmic node\n");
            goto LAB_00103038;
          }
          lVar14 = of_find_i2c_device_by_node();
          if (lVar14 == 0) {
            iVar10 = -0x13;
            _dev_err(pdVar1,"not find pmic i2c client\n");
            goto LAB_00103038;
          }
          peVar17 = *(ebc_pmic **)(lVar14 + 0xd8);
          peVar12->pmic = peVar17;
          if (peVar17 != (ebc_pmic *)0x0) {
            _dev_info(pdVar1,"use pmic%d\n",iVar10);
            goto LAB_00103084;
          }
          iVar10 = iVar10 + 1;
          puVar16 = puVar16 + 1;
        } while (iVar10 < local_70);
      }
      iVar10 = -0x205;
      _dev_err(pdVar1,"get drvdata from pmic client failed\n");
      goto LAB_00103038;
    }
  }
  iVar10 = -0x205;
LAB_00103038:
  if (lVar9 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar10;
}



int ebc_power_set(ebc *ebc,int power_status)

{
  if ((ebc->info).wake_lock_is_set == 0) {
    (ebc->info).wake_lock_is_set = 1;
    __pm_stay_awake(&(ebc->info).suspend_lock,power_status);
  }
  (ebc->info).ebc_power_status = 1;
  (*ebc->pmic->pmic_power_req)(ebc->pmic,true);
  (*ebc->tcon->enable)(ebc->tcon,&ebc->panel);
  _dev_info(ebc->dev,"ebc hw power on\n");
  return 0;
}



undefined8 ebc_open(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x68) = 0;
  return 0;
}



void refresh_new_image2(u32 *image_new,u32 *image_fb,u32 *image_bg,u64 *frame_count,
                       ebc_info *ebc_info,int buf_mode)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar3 = ebc_info->height;
  iVar9 = ebc_info->width;
  iVar2 = iVar9 + 7;
  if (-1 < iVar9) {
    iVar2 = iVar9;
  }
  iVar2 = iVar2 >> 3;
  if (0 < iVar3) {
    iVar9 = 0;
    lVar1 = (ulong)(iVar2 - 1) + 1;
    do {
      lVar6 = 0;
      if (0 < iVar2) {
        do {
          while( true ) {
            uVar5 = frame_count[lVar6];
            uVar7 = 0;
            uVar4 = image_fb[lVar6];
            uVar8 = image_new[lVar6];
            if (((uVar5 & 0xff) == 0) && (uVar7 = 0xf, (uVar4 & 0xf) == 0xe)) {
              uVar8 = uVar8 | 0xf;
              uVar7 = 0;
            }
            if ((uVar5 & 0xff00) == 0) {
              if ((uVar4 & 0xf0) == 0xe0) {
                uVar8 = uVar8 | 0xf0;
              }
              else {
                uVar7 = uVar7 | 0xf0;
              }
            }
            if ((uVar5 & 0xff0000) == 0) {
              if ((uVar4 & 0xf00) == 0xe00) {
                uVar8 = uVar8 | 0xf00;
              }
              else {
                uVar7 = uVar7 | 0xf00;
              }
            }
            if ((uVar5 & 0xff000000) == 0) {
              if ((uVar4 & 0xf000) == 0xe000) {
                uVar8 = uVar8 | 0xf000;
              }
              else {
                uVar7 = uVar7 | 0xf000;
              }
            }
            if ((uVar5 & 0xff00000000) == 0) {
              if ((uVar4 & 0xf0000) == 0xe0000) {
                uVar8 = uVar8 | 0xf0000;
              }
              else {
                uVar7 = uVar7 | 0xf0000;
              }
            }
            if ((uVar5 & 0xff0000000000) == 0) {
              if ((uVar4 & 0xf00000) == 0xe00000) {
                uVar8 = uVar8 | 0xf00000;
              }
              else {
                uVar7 = uVar7 | 0xf00000;
              }
            }
            if ((uVar5 & 0xff000000000000) == 0) {
              if ((uVar4 & 0xf000000) == 0xe000000) {
                uVar8 = uVar8 | 0xf000000;
              }
              else {
                uVar7 = uVar7 | 0xf000000;
              }
            }
            if ((uVar5 & 0xff00000000000000) == 0) break;
LAB_00103d38:
            image_new[lVar6] = uVar8 ^ (uVar4 & image_bg[lVar6] ^ uVar8) & uVar7;
            lVar6 = lVar6 + 1;
            if (iVar2 <= (int)lVar6) goto LAB_00103dbc;
          }
          if ((uVar4 & 0xf0000000) != 0xe0000000) {
            uVar7 = uVar7 | 0xf0000000;
            goto LAB_00103d38;
          }
          image_new[lVar6] =
               (uVar8 | 0xf0000000) ^ (uVar4 & image_bg[lVar6] ^ (uVar8 | 0xf0000000)) & uVar7;
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < iVar2);
LAB_00103dbc:
        frame_count = frame_count + lVar1;
        image_fb = image_fb + lVar1;
        image_bg = image_bg + lVar1;
        image_new = image_new + lVar1;
      }
      iVar9 = iVar9 + 1;
    } while (iVar3 != iVar9);
  }
  return;
}



void refresh_new_image_auto_32(u32 *image_new,u32 *image_fb,u64 *frame_count,ebc_info *ebc_info)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  int iVar10;
  
  iVar3 = ebc_info->height;
  iVar10 = ebc_info->width;
  iVar2 = iVar10 + 7;
  if (-1 < iVar10) {
    iVar2 = iVar10;
  }
  iVar2 = iVar2 >> 3;
  if (0 < iVar3) {
    iVar10 = 0;
    lVar1 = (ulong)(iVar2 - 1) + 1;
    do {
      lVar8 = 0;
      puVar9 = image_fb;
      if (0 < iVar2) {
        do {
          uVar7 = frame_count[lVar8];
          uVar4 = *puVar9;
          if ((uVar7 & 0xff) == 0) {
            uVar5 = uVar4 >> 4 & 0xf;
            uVar6 = 0xf;
          }
          else {
            uVar6 = 0;
            uVar5 = 0;
          }
          if ((uVar7 & 0xff00) == 0) {
            uVar6 = uVar6 | 0xf0;
            uVar5 = uVar5 | (uint)((ulong)uVar4 >> 8) & 0xf0;
          }
          if ((uVar7 & 0xff0000) == 0) {
            uVar6 = uVar6 | 0xf00;
            uVar5 = uVar5 | uVar4 >> 0xc & 0xf00;
          }
          if ((uVar7 & 0xff000000) == 0) {
            uVar6 = uVar6 | 0xf000;
            uVar5 = uVar5 | (uint)((ulong)uVar4 >> 0x10) & 0xf000;
          }
          uVar4 = puVar9[1];
          if ((uVar7 & 0xff00000000) == 0) {
            uVar6 = uVar6 | 0xf0000;
            uVar5 = uVar5 | (uVar4 & 0xf0) << 0xc;
          }
          if ((uVar7 & 0xff0000000000) == 0) {
            uVar6 = uVar6 | 0xf00000;
            uVar5 = uVar5 | (uVar4 & 0xf000) << 8;
          }
          if ((uVar7 & 0xff000000000000) == 0) {
            uVar6 = uVar6 | 0xf000000;
            uVar5 = uVar5 | (uVar4 & 0xf00000) << 4;
          }
          if ((uVar7 & 0xff00000000000000) == 0) {
            uVar6 = uVar6 | 0xf0000000;
            uVar5 = uVar5 | uVar4 & 0xf0000000;
          }
          image_new[lVar8] = uVar5 | image_new[lVar8] & (uVar6 ^ 0xffffffff);
          lVar8 = lVar8 + 1;
          puVar9 = puVar9 + 2;
        } while ((int)lVar8 < iVar2);
        frame_count = frame_count + lVar1;
        image_fb = image_fb + lVar1 * 2;
        image_new = image_new + lVar1;
      }
      iVar10 = iVar10 + 1;
    } while (iVar3 != iVar10);
  }
  return;
}



void refresh_new_image_auto(u32 *image_new,u32 *image_fb,u64 *frame_count,ebc_info *ebc_info)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  
  iVar4 = ebc_info->height;
  iVar8 = ebc_info->width;
  iVar2 = iVar8 + 7;
  if (-1 < iVar8) {
    iVar2 = iVar8;
  }
  iVar2 = iVar2 >> 3;
  if (0 < iVar4) {
    iVar8 = 0;
    lVar1 = (ulong)(iVar2 - 1) + 1;
    do {
      lVar6 = 0;
      if (0 < iVar2) {
        do {
          uVar5 = frame_count[lVar6];
          uVar7 = 0;
          if ((uVar5 & 0xff) == 0) {
            uVar7 = 0xf;
          }
          uVar3 = uVar7 | 0xf0;
          if ((uVar5 & 0xff00) != 0) {
            uVar3 = uVar7;
          }
          uVar7 = uVar3 | 0xf00;
          if ((uVar5 & 0xff0000) != 0) {
            uVar7 = uVar3;
          }
          uVar3 = uVar7 | 0xf000;
          if ((uVar5 & 0xff000000) != 0) {
            uVar3 = uVar7;
          }
          uVar7 = uVar3 | 0xf0000;
          if ((uVar5 & 0xff00000000) != 0) {
            uVar7 = uVar3;
          }
          uVar3 = uVar7 | 0xf00000;
          if ((uVar5 & 0xff0000000000) != 0) {
            uVar3 = uVar7;
          }
          uVar7 = uVar3 | 0xf000000;
          if ((uVar5 & 0xff000000000000) != 0) {
            uVar7 = uVar3;
          }
          uVar3 = uVar7 | 0xf0000000;
          if ((uVar5 & 0xff00000000000000) != 0) {
            uVar3 = uVar7;
          }
          image_new[lVar6] = (image_fb[lVar6] ^ image_new[lVar6]) & uVar3 ^ image_new[lVar6];
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < iVar2);
        frame_count = frame_count + lVar1;
        image_fb = image_fb + lVar1;
        image_new = image_new + lVar1;
      }
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
  }
  return;
}



void new_buffer_refresh(work_struct *work)

{
  ebc_info *ebc_info;
  panel_refresh_mode buf_mode;
  ebc *peVar1;
  ebc_buf_s *peVar2;
  u32 *image_new;
  u64 *frame_count;
  
  peVar1 = global_ebc;
  down_write(&auto_buf_sema);
  ebc_info = &peVar1->info;
  peVar2 = (peVar1->info).curr_dsp_buf;
  buf_mode = peVar2->buf_mode;
  if ((buf_mode != EPD_AUTO && buf_mode != EPD_AUTO_DU) && buf_mode != EPD_AUTO_DU4) {
    refresh_new_image2((u32 *)(peVar1->info).auto_image_new,(u32 *)peVar2->virt_addr,
                       (u32 *)(peVar1->info).auto_image_bg,(u64 *)(peVar1->info).auto_frame_count,
                       ebc_info,buf_mode);
    up_write(&auto_buf_sema);
    return;
  }
  frame_count = (u64 *)(peVar1->info).auto_frame_count;
  image_new = (u32 *)(peVar1->info).auto_image_new;
  if (peVar2->needpic != 0x20) {
    refresh_new_image_auto(image_new,(u32 *)peVar2->virt_addr,frame_count,ebc_info);
    up_write(&auto_buf_sema);
    return;
  }
  refresh_new_image_auto_32(image_new,(u32 *)peVar2->virt_addr,frame_count,ebc_info);
  up_write(&auto_buf_sema);
  return;
}



int ebc_auto_tast_function(void *data)

{
  bool bVar1;
  ebc_panel *panel;
  ebc_info *ebc_info;
  panel_refresh_mode pVar2;
  int iVar3;
  long lVar4;
  ebc_info *peVar5;
  ebc *peVar6;
  
  peVar6 = global_ebc;
  panel = &global_ebc->panel;
  ebc_info = &global_ebc->info;
  lVar4 = cRead_8(sp_el0);
  peVar5 = &global_ebc->info;
  do {
    down(&ebc_auto_thread_sem);
    *(undefined8 *)(lVar4 + 0x20) = 2;
    DataMemoryBarrier(2,3);
    pVar2 = ((peVar6->info).curr_dsp_buf)->buf_mode;
    if ((int)pVar2 < 0x11) {
      if ((int)pVar2 < 7) {
        if (pVar2 == EPD_AUTO) goto LAB_00104298;
        if (pVar2 != EPD_OVERLAY) goto LAB_00104254;
        flip(panel,(ebc_info *)(ulong)(uint)(peVar6->info).direct_buf_real_size);
        get_overlay_image((u8 *)ebc_info->direct_buffer[(peVar6->panel).current_buffer],
                          (u32 *)(peVar6->info).auto_image_new,(u32 *)(peVar6->info).auto_image_old,
                          (peVar6->info).auto_frame_count,ebc_info);
      }
      else {
        (peVar6->info).frame_left = (peVar6->info).frame_left + -1;
        flip(panel,(ebc_info *)(ulong)(uint)(peVar6->info).direct_buf_real_size);
        if ((peVar6->info).frame_left != 0) {
          direct_mode_data_change_part
                    ((u8 *)ebc_info->direct_buffer[(peVar6->panel).current_buffer],
                     (u32 *)((peVar6->info).curr_dsp_buf)->virt_addr,
                     (u32 *)((peVar6->info).prev_dsp_buf)->virt_addr,ebc_info);
        }
      }
    }
    else if (pVar2 + ~EPD_FORCE_FULL < 2) {
LAB_00104298:
      flip(panel,(ebc_info *)(ulong)(uint)(peVar6->info).direct_buf_real_size);
      get_auto_image((u8 *)ebc_info->direct_buffer[(peVar6->panel).current_buffer],
                     (u32 *)(peVar6->info).auto_image_new,(u32 *)(peVar6->info).auto_image_old,
                     (peVar6->info).auto_frame_count,ebc_info);
    }
    else {
LAB_00104254:
      (peVar6->info).frame_left = (peVar6->info).frame_left + -1;
      flip(panel,(ebc_info *)(ulong)(uint)(peVar6->info).direct_buf_real_size);
      if ((peVar6->info).frame_left != 0) {
        direct_mode_data_change
                  ((u8 *)ebc_info->direct_buffer[(peVar6->panel).current_buffer],
                   (u32 *)((peVar6->info).curr_dsp_buf)->virt_addr,
                   (u32 *)((peVar6->info).prev_dsp_buf)->virt_addr,ebc_info);
      }
    }
    pVar2 = ((peVar6->info).curr_dsp_buf)->buf_mode;
    bVar1 = pVar2 + ~EPD_FORCE_FULL < 2;
    if (((bVar1 || pVar2 == EPD_AUTO) || !bVar1 && pVar2 == EPD_OVERLAY) &&
       ((peVar6->info).auto_need_refresh == 0)) {
      (peVar6->info).auto_check = 1;
      printk("ebc_info->auto_need_refresh == 0, check again\n");
      new_buffer_refresh(&peVar5->auto_buffer_work);
      iVar3 = (peVar6->panel).current_buffer;
      if (((peVar6->info).curr_dsp_buf)->buf_mode == EPD_OVERLAY) {
        get_overlay_image((u8 *)ebc_info->direct_buffer[iVar3],(u32 *)(peVar6->info).auto_image_new,
                          (u32 *)(peVar6->info).auto_image_old,(peVar6->info).auto_frame_count,
                          ebc_info);
        (peVar6->info).auto_check = 0;
      }
      else {
        get_auto_image((u8 *)ebc_info->direct_buffer[iVar3],(u32 *)(peVar6->info).auto_image_new,
                       (u32 *)(peVar6->info).auto_image_old,(peVar6->info).auto_frame_count,ebc_info
                      );
        (peVar6->info).auto_check = 0;
      }
    }
    up(&ebc_auto_thread_sem);
    schedule();
  } while( true );
}



int ebc_thread(void *ptr)

{
  char **ppcVar1;
  long *plVar2;
  long *plVar3;
  ebc_info *ebc_info;
  timer_list *ptVar4;
  int iVar5;
  int iVar6;
  panel_refresh_mode pVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ebc *ebc;
  long lVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  ebc_buf_s *peVar17;
  ebc_buf_s *peVar18;
  long lVar19;
  ebc_buf_s *peVar20;
  u32 *puVar21;
  workqueue_struct *pwVar22;
  ulong uVar23;
  u64 *frame_count;
  uint uVar24;
  byte *pbVar25;
  uint uVar26;
  int iVar27;
  int *piVar28;
  u8 *puVar29;
  int *piVar30;
  char *pcVar31;
  long lVar32;
  ebc_buf_s *peVar33;
  int local_84;
  wait_queue_entry __wq_entry;
  ebc_buf_s new_prev_buf;
  
  lVar13 = __stack_chk_guard;
  ebc = global_ebc;
  ebc_info = &global_ebc->info;
  local_84 = 0;
LAB_0010437c:
  iVar16 = (ebc->info).is_power_off;
joined_r0x00104380:
  if (iVar16 != 0) {
    if ((ebc->info).ebc_power_status == 1) {
      ebc_power_set(ebc,0);
    }
    if (lVar13 == __stack_chk_guard) {
      return 0;
    }
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  peVar17 = ebc_dsp_buf_get();
  if ((peVar17 == (ebc_buf_s *)0x0) || (peVar17->phy_addr == 0)) {
    if ((ebc->info).ebc_dsp_buf_status != 0) {
      (ebc->info).ebc_dsp_buf_status = 0;
      goto LAB_0010437c;
    }
    init_wait_entry(&__wq_entry,0);
    lVar32 = 0x3c;
    lVar19 = prepare_to_wait_event(&ebc_thread_wq,&__wq_entry,1);
    bVar15 = false;
    bVar14 = (ebc->info).ebc_dsp_buf_status != 0;
    goto LAB_001048d0;
  }
  pVar7 = peVar17->buf_mode;
  if ((pVar7 + ~EPD_RESET & 0xfffffffd) == 0) {
    (ebc->info).overlay_start = 0;
    resume_count_start = 0;
LAB_001043b4:
    mod_timer(&(ebc->info).vdd_timer,jiffies + 0x18000000);
    if ((ebc->info).first_in == 0) {
      (ebc->info).prev_dsp_buf = peVar17;
      peVar20 = peVar17;
    }
    else {
      peVar20 = (ebc->info).prev_dsp_buf;
    }
    pVar7 = peVar20->buf_mode;
    if (peVar17->buf_mode != pVar7) {
      _dev_info((ebc->info).dev,"change display mode from %d to %d\n");
      if ((ebc->info).is_busy_now == 1) {
        _dev_info((ebc->info).dev,"ebc is busy now, waiting prev refresh mode end...\n");
        if ((ebc->info).ebc_irq_status == 0) {
          init_wait_entry(&__wq_entry,0);
          while (lVar19 = prepare_to_wait_event(&ebc_wq,&__wq_entry,1),
                (ebc->info).ebc_irq_status == 0) {
            if (lVar19 != 0) goto __out;
            schedule();
          }
          finish_wait(&ebc_wq,&__wq_entry);
        }
__out:
        _dev_info((ebc->info).dev,"prev refresh mode end\n");
      }
      pVar7 = peVar17->buf_mode;
    }
    switch(pVar7) {
    case EPD_AUTO:
    case EPD_AUTO_DU:
    case EPD_AUTO_DU4:
      goto switchD_001044ec_caseD_0;
    case EPD_OVERLAY:
      if ((ebc->info).overlay_enable == 0) {
        _dev_info((ebc->info).dev,"overlay disabled, drop EPD_OVERLAY frame\n");
        goto LAB_001044c4;
      }
      peVar20 = (ebc->info).prev_dsp_buf;
      (ebc->info).curr_dsp_buf = peVar17;
      (ebc->info).overlay_start = 1;
      pVar7 = peVar20->buf_mode;
      if ((pVar7 < EPD_FULL_GC16 || pVar7 == EPD_AUTO_DU) || pVar7 == EPD_AUTO_DU4) {
        peVar20 = peVar17;
        if ((pVar7 == EPD_AUTO || pVar7 == EPD_AUTO_DU) || pVar7 == EPD_AUTO_DU4) {
          memcpy((ebc->info).auto_image_bg,(ebc->info).auto_image_old,
                 (long)(ebc->info).ebc_buf_real_size);
          peVar20 = (ebc->info).curr_dsp_buf;
        }
        goto LAB_00104658;
      }
      if (peVar20->needpic == 0x20) {
        iVar16 = (ebc->info).ebc_buf_real_size;
        piVar28 = (ebc->info).auto_image_bg;
        if (iVar16 < 1) goto LAB_0010463c;
        lVar19 = 0;
        pbVar25 = (byte *)peVar20->virt_addr;
        do {
          *(byte *)((long)piVar28 + lVar19) = pbVar25[1] & 0xf0 | *pbVar25 >> 4;
          lVar19 = lVar19 + 1;
          pbVar25 = pbVar25 + 2;
        } while ((int)lVar19 < iVar16);
      }
      else {
        memcpy((ebc->info).auto_image_bg,peVar20->virt_addr,(long)(ebc->info).ebc_buf_real_size);
      }
      iVar16 = (ebc->info).ebc_buf_real_size;
      piVar28 = (ebc->info).auto_image_bg;
LAB_0010463c:
      memcpy((ebc->info).auto_image_new,piVar28,(long)iVar16);
      memcpy((ebc->info).auto_image_old,(ebc->info).auto_image_bg,
             (long)(ebc->info).ebc_buf_real_size);
      peVar20 = (ebc->info).curr_dsp_buf;
LAB_00104658:
      iVar5 = peVar20->win_x1;
      iVar16 = peVar20->win_y1;
      iVar6 = peVar20->win_x2;
      iVar8 = (ebc->info).width;
      iVar10 = iVar5 + 7;
      if (-1 < iVar5) {
        iVar10 = iVar5;
      }
      iVar5 = iVar6 + 7;
      if (-1 < iVar6) {
        iVar5 = iVar6;
      }
      iVar6 = iVar8 + 7;
      if (-1 < iVar8) {
        iVar6 = iVar8;
      }
      iVar6 = iVar6 >> 3;
      iVar5 = (iVar5 >> 3) + 1;
      iVar9 = (ebc->info).height;
      pcVar31 = peVar20->virt_addr;
      iVar8 = iVar6 + -1;
      if (iVar5 < iVar6) {
        iVar8 = iVar5;
      }
      iVar5 = iVar9 + -1;
      if (peVar20->win_y2 < iVar9) {
        iVar5 = peVar20->win_y2;
      }
      iVar9 = iVar16 * iVar6;
      piVar28 = (ebc->info).auto_image_new;
      piVar30 = (ebc->info).auto_image_bg;
      puVar29 = (ebc->info).auto_frame_count;
      for (; iVar27 = iVar10 >> 3, iVar16 <= iVar5; iVar16 = iVar16 + 1) {
joined_r0x001046dc:
        if (iVar27 <= iVar8) {
          do {
            lVar32 = (long)iVar27;
            uVar24 = 0;
            lVar19 = (long)iVar9;
            uVar23 = *(ulong *)(puVar29 + lVar32 * 8 + (long)iVar9 * 8);
            uVar26 = piVar28[lVar19 + lVar32];
            uVar11 = *(uint *)(pcVar31 + lVar32 * 4 + lVar19 * 4);
            uVar12 = piVar30[lVar19 + lVar32];
            if (((uVar23 & 0xff) == 0) && (uVar24 = 0xf, (uVar11 & 0xf) == 0xe)) {
              uVar26 = uVar26 | 0xf;
              uVar24 = 0;
            }
            if ((uVar23 & 0xff00) == 0) {
              if ((uVar11 & 0xf0) == 0xe0) {
                uVar26 = uVar26 | 0xf0;
              }
              else {
                uVar24 = uVar24 | 0xf0;
              }
            }
            if ((uVar23 & 0xff0000) == 0) {
              if ((uVar11 & 0xf00) == 0xe00) {
                uVar26 = uVar26 | 0xf00;
              }
              else {
                uVar24 = uVar24 | 0xf00;
              }
            }
            if ((uVar23 & 0xff000000) == 0) {
              if ((uVar11 & 0xf000) == 0xe000) {
                uVar26 = uVar26 | 0xf000;
              }
              else {
                uVar24 = uVar24 | 0xf000;
              }
            }
            if ((uVar23 & 0xff00000000) == 0) {
              if ((uVar11 & 0xf0000) == 0xe0000) {
                uVar26 = uVar26 | 0xf0000;
              }
              else {
                uVar24 = uVar24 | 0xf0000;
              }
            }
            if ((uVar23 & 0xff0000000000) == 0) {
              if ((uVar11 & 0xf00000) == 0xe00000) {
                uVar26 = uVar26 | 0xf00000;
              }
              else {
                uVar24 = uVar24 | 0xf00000;
              }
            }
            if ((uVar23 & 0xff000000000000) == 0) {
              if ((uVar11 & 0xf000000) == 0xe000000) {
                uVar26 = uVar26 | 0xf000000;
              }
              else {
                uVar24 = uVar24 | 0xf000000;
              }
            }
            if ((uVar23 & 0xff00000000000000) == 0) {
              if ((uVar11 & 0xf0000000) == 0xe0000000) goto LAB_00104c80;
              uVar24 = uVar24 | 0xf0000000;
            }
            iVar27 = iVar27 + 1;
            piVar28[lVar19 + lVar32] = uVar26 ^ (uVar11 & uVar12 ^ uVar26) & uVar24;
            if (iVar8 < iVar27) break;
          } while( true );
        }
        iVar9 = iVar9 + iVar6;
      }
      if ((ebc->info).is_busy_now == 0) {
        (ebc->info).ebc_irq_status = 0;
        (ebc->info).is_busy_now = 1;
        if ((ebc->info).ebc_power_status == 0) {
          ebc_power_set(ebc,1);
        }
        iVar16 = ebc_lut_update(ebc,0x10);
        if (iVar16 != -1) {
          uVar26 = (ebc->info).lut_data.frame_num;
          (ebc->info).frame_total = (char)uVar26;
          (ebc->info).frame_bw_total = (char)(uVar26 >> 8);
          _dev_info((ebc->info).dev,"overlay mode start, frame_total=%d, bw_frame = %d\n",
                    uVar26 & 0xff,uVar26 >> 8 & 0xff);
          ebc_frame_start(ebc);
        }
      }
      goto one_buffer_end;
    case EPD_FULL_GC16:
    case EPD_FULL_GL16:
    case EPD_FULL_GLR16:
    case EPD_FULL_GLD16:
    case EPD_FULL_GCC16:
    case EPD_PART_GLR16:
    case EPD_PART_GLD16:
    case EPD_A2:
    case EPD_A2_DITHER:
    case EPD_A2_ENTER:
    case EPD_RESET:
    case EPD_SUSPEND:
    case EPD_RESUME:
    case EPD_POWER_OFF:
    case EPD_FORCE_FULL:
      bVar15 = true;
      break;
    case EPD_PART_GC16:
    case EPD_PART_GL16:
    case EPD_PART_GCC16:
    case EPD_DU:
    case EPD_DU4:
      bVar15 = false;
      break;
    default:
      goto switchD_001044ec_caseD_18;
    }
    peVar33 = (ebc->info).prev_dsp_buf;
    pVar7 = peVar33->buf_mode;
    uVar26 = pVar7 + ~EPD_FORCE_FULL;
    peVar20 = (ebc_buf_s *)(ulong)uVar26;
    if ((uVar26 < 2 || pVar7 == EPD_AUTO) || uVar26 >= 2 && pVar7 == EPD_OVERLAY) {
      (ebc->info).prev_dsp_buf = &new_prev_buf;
      new_prev_buf.virt_addr = (char *)(ebc->info).auto_image_old;
      new_prev_buf.needpic = 0x10;
    }
    (ebc->info).ebc_irq_status = 0;
    (ebc->info).curr_dsp_buf = peVar17;
    if (0xe < peVar17->buf_mode + ~EPD_OVERLAY) goto LAB_00104550;
    peVar20 = (ebc->info).prev_dsp_buf;
    if (peVar17->needpic != peVar20->needpic) goto LAB_00104550;
    iVar10 = (ebc->info).ebc_buf_real_size;
    iVar16 = iVar10 << 1;
    if (peVar17->needpic != 0x20) {
      iVar16 = iVar10;
    }
    iVar10 = iVar16 + 7;
    if (-1 < iVar16) {
      iVar10 = iVar16;
    }
    if (iVar10 >> 3 < 1) goto LAB_00104dd0;
    ppcVar1 = &peVar20->virt_addr;
    peVar20 = *(ebc_buf_s **)*ppcVar1;
    if (*(ebc_buf_s **)peVar17->virt_addr != peVar20) goto LAB_00104550;
    peVar20 = (ebc_buf_s *)(((ulong)((iVar10 >> 3) - 1) + 1) * 8);
    peVar18 = (ebc_buf_s *)0x8;
    goto LAB_00104dc8;
  }
  if (resume_count_start == 0) {
    if (*(long *)&(ebc->info).is_early_suspend == 0) {
      if (pVar7 == EPD_FORCE_FULL) {
        (ebc->info).overlay_start = 0;
        goto LAB_001043b4;
      }
      if ((ebc->info).overlay_start == 0 || pVar7 == EPD_OVERLAY) goto LAB_001043b4;
      if (peVar17->needpic == 0x20) {
        iVar16 = (ebc->info).ebc_buf_real_size;
        lVar19 = 0;
        piVar28 = (ebc->info).auto_image_bg;
        pbVar25 = (byte *)peVar17->virt_addr;
        if (0 < iVar16) {
          do {
            *(byte *)((long)piVar28 + lVar19) = pbVar25[1] & 0xf0 | *pbVar25 >> 4;
            lVar19 = lVar19 + 1;
            pbVar25 = pbVar25 + 2;
          } while ((int)lVar19 < iVar16);
        }
      }
      else {
        memcpy((ebc->info).auto_image_bg,peVar17->virt_addr,(long)(ebc->info).ebc_buf_real_size);
      }
      ebc_remove_from_dsp_buf_list(peVar17);
      ebc_buf_release(peVar17);
      if ((ebc->info).auto_need_refresh == 0) {
        peVar17 = (ebc->info).curr_dsp_buf;
        puVar21 = (u32 *)peVar17->virt_addr;
        refresh_new_image2((u32 *)(ebc->info).auto_image_new,puVar21,
                           (u32 *)(ebc->info).auto_image_bg,(u64 *)(ebc->info).auto_frame_count,
                           ebc_info,peVar17->buf_mode);
        iVar16 = (int)puVar21;
      }
      else {
        pwVar22 = (ebc->info).auto_buffer_wq;
        queue_work_on(8,pwVar22,&(ebc->info).auto_buffer_work);
        iVar16 = (int)pwVar22;
      }
      if ((ebc->info).is_busy_now == 0) {
        (ebc->info).is_busy_now = 1;
        (ebc->info).ebc_irq_status = 0;
        if ((ebc->info).ebc_power_status == 0) {
          ebc_power_set(ebc,iVar16);
        }
        _dev_info((ebc->info).dev,"overlay mode start, update background, frame_total=%d\n",
                  (ebc->info).frame_total);
        ebc_frame_start(ebc);
      }
      goto LAB_0010437c;
    }
    if (pVar7 == EPD_RESUME) {
      (ebc->info).is_early_suspend = 0;
      ebc_notify(3);
      _dev_info((ebc->info).dev,"early resume\n");
      resume_count_start = 1;
      resume_frame_count = 0;
      iVar16 = check_black_percent();
      goto joined_r0x001044bc;
    }
  }
  else {
    if (5 < resume_frame_count) {
      resume_count_start = 0;
    }
    resume_frame_count = resume_frame_count + 1;
    iVar16 = check_black_percent();
joined_r0x001044bc:
    if (iVar16 == 0) goto LAB_001043b4;
  }
LAB_001044c4:
  ebc_remove_from_dsp_buf_list(peVar17);
  ebc_buf_release(peVar17);
  goto LAB_0010437c;
  while( true ) {
    if (lVar19 != 0) goto __out;
    lVar32 = schedule_timeout(lVar32);
    lVar19 = prepare_to_wait_event(&ebc_thread_wq,&__wq_entry,1);
    bVar14 = (ebc->info).ebc_dsp_buf_status != 0;
    bVar15 = lVar32 == 0;
    if (bVar14 && bVar15) break;
LAB_001048d0:
    if ((bool)(bVar14 | bVar15)) break;
  }
  finish_wait(&ebc_thread_wq,&__wq_entry);
__out:
  if ((ebc->info).ebc_dsp_buf_status != 0) goto LAB_0010437c;
  if ((ebc->info).is_busy_now == 1) {
    init_wait_entry(&__wq_entry,0);
    while ((lVar19 = prepare_to_wait_event(&ebc_thread_wq,&__wq_entry,1),
           (ebc->info).is_busy_now != 0 && (iVar16 = (ebc->info).ebc_dsp_buf_status, iVar16 == 0)))
    {
      if (lVar19 != 0) goto LAB_00104fbc;
      schedule();
    }
    iVar16 = (int)register0x00000008 + -0x78;
    finish_wait(&ebc_thread_wq);
    if (((ebc->info).is_busy_now == 0) && ((ebc->info).ebc_power_status == 1)) goto LAB_00104fb0;
LAB_00104fbc:
    if ((ebc->info).ebc_dsp_buf_status != 0) {
      iVar10 = (ebc->info).ebc_power_status;
      (ebc->info).ebc_dsp_buf_status = 0;
      goto joined_r0x00104fcc;
    }
  }
  else if ((ebc->info).ebc_power_status == 1) {
LAB_00104fb0:
    iVar16 = 0;
    ebc_power_set(ebc,0);
    goto LAB_00104fbc;
  }
  init_wait_entry(&__wq_entry,0);
  while( true ) {
    lVar19 = prepare_to_wait_event(&ebc_thread_wq,&__wq_entry,1);
    iVar16 = (ebc->info).ebc_dsp_buf_status;
    if (iVar16 != 0) break;
    if (lVar19 != 0) goto __out;
    schedule();
  }
  iVar16 = (int)register0x00000008 + -0x78;
  finish_wait(&ebc_thread_wq);
__out:
  iVar10 = (ebc->info).ebc_power_status;
  (ebc->info).ebc_dsp_buf_status = 0;
joined_r0x00104fcc:
  if (iVar10 == 0) {
    ebc_power_set(ebc,iVar16);
  }
  goto LAB_0010437c;
switchD_001044ec_caseD_18:
  _dev_err((ebc->info).dev,"ebc buffer mode %d error!!!\n");
  ebc_remove_from_dsp_buf_list(peVar17);
  ebc_buf_release(peVar17);
  iVar16 = (ebc->info).is_power_off;
  goto joined_r0x00104380;
  while (plVar3 = (long *)((long)peVar17->virt_addr + (long)peVar18),
        plVar2 = (long *)((long)*ppcVar1 + (long)peVar18), peVar18 = (ebc_buf_s *)&peVar18->phy_addr
        , *plVar3 == *plVar2) {
LAB_00104dc8:
    if (peVar18 == peVar20) goto LAB_00104dd0;
  }
LAB_00104550:
  iVar16 = (int)peVar20;
  if (bVar15) {
    iVar10 = (ebc->info).ebc_power_status;
    local_84 = 0;
  }
  else {
    iVar10 = (ebc->info).full_mode_num;
    if ((0 < iVar10) && (iVar16 = local_84 + 1, local_84 = iVar16, iVar10 <= iVar16)) {
      local_84 = 0;
      peVar17->buf_mode = EPD_FULL_GC16;
    }
    iVar10 = (ebc->info).ebc_power_status;
  }
  if (iVar10 == 0) {
    ebc_power_set(ebc,iVar16);
  }
  iVar16 = ebc_lut_update(ebc,((ebc->info).curr_dsp_buf)->needpic);
  if (iVar16 == 0) {
    uVar26 = (ebc->info).lut_data.frame_num;
    (ebc->info).frame_total = (char)uVar26;
    _dev_info((ebc->info).dev,"frame start, mode = %d, framecount = %d\n",
              ((ebc->info).curr_dsp_buf)->buf_mode,uVar26 & 0xff);
    (ebc->info).is_busy_now = 1;
    ebc_frame_start(ebc);
    ptVar4 = &(ebc->info).frame_timer;
    mod_timer(ptVar4,jiffies + 900);
    if ((ebc->info).ebc_irq_status == 0) {
      init_wait_entry(&__wq_entry,0);
      while (lVar19 = prepare_to_wait_event(&ebc_wq,&__wq_entry,1), (ebc->info).ebc_irq_status == 0)
      {
        if (lVar19 != 0) goto __out;
        schedule();
      }
      finish_wait(&ebc_wq,&__wq_entry);
    }
__out:
    mod_timer(ptVar4,jiffies + 0x18000000);
    (ebc->info).ebc_irq_status = 0;
    (ebc->info).prev_dsp_buf = peVar33;
    pVar7 = ((ebc->info).curr_dsp_buf)->buf_mode;
    goto joined_r0x00104a70;
  }
  _dev_err((ebc->info).dev,"ebc_lut_update err\n");
  (ebc->info).prev_dsp_buf = peVar33;
one_buffer_end:
  pVar7 = ((ebc->info).curr_dsp_buf)->buf_mode;
joined_r0x00104a70:
  if (pVar7 == EPD_POWER_OFF) {
    (ebc->info).ebc_last_display = 0;
    (ebc->info).is_power_off = 1;
    _dev_info((ebc->info).dev,"power off\n");
    __wake_up_sync(&ebc_poweroff_wq,1,1);
  }
  else if (pVar7 == EPD_SUSPEND) {
    _dev_info((ebc->info).dev,"early suspend\n");
    if ((ebc->info).is_early_suspend == 0) {
      ebc_notify(2);
    }
    (ebc->info).ebc_last_display = 0;
    (ebc->info).is_early_suspend = 1;
    (ebc->info).overlay_start = 0;
    resume_count_start = 0;
    __wake_up_sync(&ebc_poweroff_wq,1);
  }
  ebc_remove_from_dsp_buf_list(peVar17);
  if ((ebc->info).first_in == 0) {
    (ebc->info).first_in = 1;
  }
  else {
    ebc_buf_release((ebc->info).prev_dsp_buf);
  }
  (ebc->info).prev_dsp_buf = (ebc->info).curr_dsp_buf;
  goto LAB_0010437c;
LAB_00104dd0:
  _dev_info((ebc->info).dev,"check_part_mode==0, no need refresh\n");
  (ebc->info).prev_dsp_buf = peVar33;
  goto one_buffer_end;
LAB_00104c80:
  piVar28[lVar19 + lVar32] =
       (uVar26 | 0xf0000000) ^ (uVar11 & uVar12 ^ (uVar26 | 0xf0000000)) & uVar24;
  iVar27 = iVar27 + 1;
  goto joined_r0x001046dc;
switchD_001044ec_caseD_0:
  down_write(&auto_buf_sema);
  peVar20 = (ebc->info).prev_dsp_buf;
  (ebc->info).curr_dsp_buf = peVar17;
  pVar7 = peVar20->buf_mode;
  bVar15 = pVar7 + ~EPD_FORCE_FULL < 2;
  if ((bVar15 || pVar7 == EPD_AUTO) || !bVar15 && pVar7 == EPD_OVERLAY) {
    frame_count = (u64 *)(ebc->info).auto_frame_count;
    puVar21 = (u32 *)(ebc->info).auto_image_new;
    if (peVar17->needpic == 0x20) {
      refresh_new_image_auto_32(puVar21,(u32 *)peVar17->virt_addr,frame_count,ebc_info);
    }
    else {
      refresh_new_image_auto(puVar21,(u32 *)peVar17->virt_addr,frame_count,ebc_info);
    }
  }
  else {
    if (peVar20->needpic == 0x20) {
      iVar16 = (ebc->info).ebc_buf_real_size;
      piVar28 = (ebc->info).auto_image_old;
      if (0 < iVar16) {
        lVar19 = 0;
        pbVar25 = (byte *)peVar20->virt_addr;
        do {
          *(byte *)((long)piVar28 + lVar19) = pbVar25[1] & 0xf0 | *pbVar25 >> 4;
          lVar19 = lVar19 + 1;
          pbVar25 = pbVar25 + 2;
        } while ((int)lVar19 < iVar16);
        goto LAB_0010483c;
      }
      peVar20 = peVar17;
      if (peVar17->needpic == 0x20) goto LAB_00104b84;
    }
    else {
      memcpy((ebc->info).auto_image_old,peVar20->virt_addr,(long)(ebc->info).ebc_buf_real_size);
LAB_0010483c:
      peVar20 = (ebc->info).curr_dsp_buf;
      if (peVar20->needpic == 0x20) {
        iVar16 = (ebc->info).ebc_buf_real_size;
        lVar19 = 0;
        piVar28 = (ebc->info).auto_image_new;
        pbVar25 = (byte *)peVar20->virt_addr;
        if (0 < iVar16) {
          do {
            *(byte *)((long)piVar28 + lVar19) = pbVar25[1] & 0xf0 | *pbVar25 >> 4;
            lVar19 = lVar19 + 1;
            pbVar25 = pbVar25 + 2;
          } while ((int)lVar19 < iVar16);
        }
        goto LAB_00104b84;
      }
      iVar16 = (ebc->info).ebc_buf_real_size;
    }
    memcpy((ebc->info).auto_image_new,peVar20->virt_addr,(long)iVar16);
  }
LAB_00104b84:
  up_write(&auto_buf_sema);
  if ((ebc->info).is_busy_now == 0) {
    (ebc->info).ebc_irq_status = 0;
    (ebc->info).is_busy_now = 1;
    if ((ebc->info).ebc_power_status == 0) {
      ebc_power_set(ebc,1);
    }
    iVar16 = ebc_lut_update(ebc,0x10);
    if (iVar16 == -1) {
      _dev_err((ebc->info).dev,"ebc_lut_update err\n");
    }
    else {
      uVar26 = (ebc->info).lut_data.frame_num;
      (ebc->info).frame_total = (char)uVar26;
      (ebc->info).frame_bw_total = (char)(uVar26 >> 8);
      _dev_info((ebc->info).dev,"auto mode start, frame_total=%d\n",uVar26 & 0xff);
      ebc_frame_start(ebc);
    }
  }
  goto one_buffer_end;
}



int ebc_register_notifier(notifier_block *nb)

{
  int iVar1;
  
  _mcount();
  iVar1 = blocking_notifier_chain_register(&ebc_notifier_list,nb);
  return iVar1;
}



int ebc_unregister_notifier(notifier_block *nb)

{
  int iVar1;
  
  _mcount();
  iVar1 = blocking_notifier_chain_unregister(&ebc_notifier_list,nb);
  return iVar1;
}



int ebc_notify(ulong event)

{
  int iVar1;
  
  _mcount();
  iVar1 = blocking_notifier_call_chain(&ebc_notifier_list,event,0);
  return iVar1;
}



int epd_lut_from_mem_init(void *waveform)

{
  int iVar1;
  code *pcVar2;
  
  _mcount();
  iVar1 = rkf_wf_input(waveform);
  if (iVar1 < 0) {
    printk("[lut]: failed to input RKF waveform\n");
    iVar1 = pvi_wf_input(waveform);
    if (iVar1 < 0) {
      printk("[lut]: failed to input PVI waveform\n");
      return iVar1;
    }
    printk("[lut]: PVI waveform\n");
    pcVar2 = pvi_wf_get_lut;
  }
  else {
    printk("[lut]: RKF waveform\n");
    pcVar2 = rkf_wf_get_lut;
  }
  lut_get = pcVar2;
  return 0;
}



int epd_lut_from_file_init(device_conflict *dev,void *waveform,int size)

{
  int iVar1;
  firmware *fw;
  long local_8;
  
  _mcount();
  local_8 = __stack_chk_guard;
  iVar1 = request_firmware_into_buf(&fw,"waveform.bin",dev,waveform,(long)size);
  if (iVar1 == 0) {
    iVar1 = epd_lut_from_mem_init(waveform);
  }
  else {
    _dev_err(dev,"failed to load waveform firmware: %d\n",iVar1);
  }
  if (local_8 - __stack_chk_guard != 0) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(strcpy,local_8 - __stack_chk_guard,0);
  }
  return iVar1;
}



char * epd_lut_get_wf_version(void)

{
  char *pcVar1;
  
  _mcount();
  pcVar1 = rkf_wf_get_version();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = pvi_wf_get_version();
    if (pcVar1 != (char *)0x0) {
      pcVar1 = pvi_wf_get_version();
    }
  }
  else {
    pcVar1 = rkf_wf_get_version();
  }
  return pcVar1;
}



int epd_lut_get(epd_lut_data *output,epd_lut_type lut_type,int temperture,int needpic)

{
  int iVar1;
  
  _mcount();
  iVar1 = (*lut_get)(output,lut_type,temperture,needpic);
  return iVar1;
}



int epd_overlay_lut(void)

{
  _mcount();
  return 5;
}



void pvi_lut_init_wf_table(u8 *wf_table,int frame_num)

{
  u8 *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  puVar1 = waveformdata;
  if (0 < frame_num) {
    iVar6 = 0;
    do {
      iVar4 = iVar6 << 0x10;
      uVar5 = 0;
      do {
        lVar3 = 0;
        do {
          uVar2 = (uint)lVar3;
          lVar3 = lVar3 + 1;
          wf_table[(int)(iVar4 + uVar2)] =
               (byte)((puVar1[(int)(iVar6 * 0x400 + (uVar5 & 0xf0) * 2 + ((uVar2 & 0xffff) >> 4))] &
                      3) << 2) |
               puVar1[(int)((uVar2 & 0xf) + (uVar5 & 0xf) * 0x20 + iVar6 * 0x400)] & 3;
        } while (lVar3 != 0x100);
        iVar4 = iVar4 + 0x100;
        uVar5 = uVar5 + 1 & 0xffff;
      } while (uVar5 != 0x100);
      iVar6 = iVar6 + 1;
    } while (frame_num != iVar6);
    return;
  }
  return;
}



int get_wf_mode_index(epd_lut_type lut_type)

{
  byte bVar1;
  pvi_wf_mode *ppVar2;
  
  bVar1 = global_waveform->mode_version;
  if (bVar1 == 0x19) {
LAB_00105538:
    parse_mode_version::pvi_modes[0] = PVI_WF_RESET;
    parse_mode_version::pvi_modes[1] = PVI_WF_DU;
    parse_mode_version::pvi_modes[2] = PVI_WF_A2;
    parse_mode_version::pvi_modes[3] = PVI_WF_DU4;
    parse_mode_version::pvi_modes[4] = PVI_WF_GC16;
    parse_mode_version::pvi_modes[5] = PVI_WF_GL16;
    parse_mode_version::pvi_modes[6] = PVI_WF_GLR16;
    parse_mode_version::pvi_modes[8] = PVI_WF_GL16;
    parse_mode_version::pvi_modes[7] = PVI_WF_GLD16;
  }
  else if (bVar1 < 0x1a) {
    if (bVar1 == 0x12) {
      parse_mode_version::pvi_modes[0] = PVI_WF_RESET;
      parse_mode_version::pvi_modes[1] = PVI_WF_DU;
      parse_mode_version::pvi_modes[2] = PVI_WF_A2;
      parse_mode_version::pvi_modes[3] = PVI_WF_GC16;
      parse_mode_version::pvi_modes[4] = PVI_WF_GC16;
      parse_mode_version::pvi_modes[5] = PVI_WF_GLR16;
      parse_mode_version::pvi_modes[6] = PVI_WF_GLD16;
      parse_mode_version::pvi_modes[7] = PVI_WF_GL16;
      parse_mode_version::pvi_modes[8] = PVI_WF_GLR16;
    }
    else if (bVar1 < 0x13) {
      if (bVar1 != 9) goto LAB_001055d8;
      parse_mode_version::pvi_modes[0] = PVI_WF_RESET;
      parse_mode_version::pvi_modes[1] = PVI_WF_DU;
      parse_mode_version::pvi_modes[2] = PVI_WF_DU;
      parse_mode_version::pvi_modes[3] = PVI_WF_DU4;
      parse_mode_version::pvi_modes[4] = PVI_WF_GC16;
      parse_mode_version::pvi_modes[5] = PVI_WF_GC16;
      parse_mode_version::pvi_modes[6] = PVI_WF_GC16;
      parse_mode_version::pvi_modes[7] = PVI_WF_GL16;
      parse_mode_version::pvi_modes[8] = PVI_WF_GC16;
    }
    else if (bVar1 == 0x16) {
      parse_mode_version::pvi_modes[0] = PVI_WF_RESET;
      parse_mode_version::pvi_modes[1] = PVI_WF_DU;
      parse_mode_version::pvi_modes[2] = PVI_WF_DU;
      parse_mode_version::pvi_modes[3] = PVI_WF_DU4;
      parse_mode_version::pvi_modes[4] = PVI_WF_GC16;
      parse_mode_version::pvi_modes[5] = PVI_WF_GL16;
      parse_mode_version::pvi_modes[6] = PVI_WF_GL16;
      parse_mode_version::pvi_modes[7] = PVI_WF_GLD16;
      parse_mode_version::pvi_modes[8] = PVI_WF_GLR16;
    }
    else {
      if (bVar1 == 0x18) goto LAB_00105500;
LAB_001055d8:
      parse_mode_version::pvi_modes[0] = PVI_WF_RESET;
      parse_mode_version::pvi_modes[1] = PVI_WF_DU;
      parse_mode_version::pvi_modes[4] = PVI_WF_GC16;
      parse_mode_version::pvi_modes[5] = PVI_WF_GL16;
      parse_mode_version::pvi_modes[2] = PVI_WF_DU;
      parse_mode_version::pvi_modes[3] = PVI_WF_DU4;
      parse_mode_version::pvi_modes[8] = PVI_WF_GL16;
      parse_mode_version::pvi_modes[6] = PVI_WF_GLR16;
      parse_mode_version::pvi_modes[7] = PVI_WF_GLD16;
      printk("pvi : Unknow waveform version %x,%x\n",global_waveform->mode_version,
             global_waveform->wfm_rev);
    }
  }
  else if (bVar1 == 0x23) {
    parse_mode_version::pvi_modes[0] = PVI_WF_RESET;
    parse_mode_version::pvi_modes[1] = PVI_WF_DU;
    parse_mode_version::pvi_modes[2] = PVI_WF_GLR16;
    parse_mode_version::pvi_modes[3] = PVI_WF_DU4;
    parse_mode_version::pvi_modes[4] = PVI_WF_GC16;
    parse_mode_version::pvi_modes[5] = PVI_WF_GC16;
    parse_mode_version::pvi_modes[6] = PVI_WF_GC16;
    parse_mode_version::pvi_modes[7] = PVI_WF_GL16;
    parse_mode_version::pvi_modes[8] = PVI_WF_GC16;
  }
  else if (bVar1 < 0x24) {
    if (bVar1 != 0x20) goto LAB_001055d8;
LAB_00105500:
    parse_mode_version::pvi_modes[0] = PVI_WF_RESET;
    parse_mode_version::pvi_modes[1] = PVI_WF_DU;
    parse_mode_version::pvi_modes[2] = PVI_WF_DU;
    parse_mode_version::pvi_modes[3] = PVI_WF_DU4;
    parse_mode_version::pvi_modes[4] = PVI_WF_GC16;
    parse_mode_version::pvi_modes[5] = PVI_WF_GL16;
    parse_mode_version::pvi_modes[6] = PVI_WF_GLR16;
    parse_mode_version::pvi_modes[7] = PVI_WF_GLD16;
    parse_mode_version::pvi_modes[8] = PVI_WF_GL16;
  }
  else {
    if (bVar1 == 0x43) goto LAB_00105538;
    if (bVar1 != 0x54) goto LAB_001055d8;
    parse_mode_version::pvi_modes[0] = PVI_WF_RESET;
    parse_mode_version::pvi_modes[1] = PVI_WF_DU;
    parse_mode_version::pvi_modes[2] = PVI_WF_DU;
    parse_mode_version::pvi_modes[3] = PVI_WF_DU4;
    parse_mode_version::pvi_modes[4] = PVI_WF_GC16;
    parse_mode_version::pvi_modes[5] = PVI_WF_GL16;
    parse_mode_version::pvi_modes[6] = PVI_WF_GL16;
    parse_mode_version::pvi_modes[7] = PVI_WF_GLR16;
    parse_mode_version::pvi_modes[8] = PVI_WF_GL16;
  }
  if (((lut_type == WF_TYPE_AUTO) || (lut_type == WF_TYPE_GRAY16)) || (lut_type == WF_TYPE_GC16)) {
    ppVar2 = parse_mode_version::pvi_modes + 3;
  }
  else if (lut_type < WF_TYPE_GL16) {
    if (lut_type == WF_TYPE_GRAY4) {
      ppVar2 = parse_mode_version::pvi_modes + 2;
    }
    else if (lut_type < WF_TYPE_GRAY2) {
      ppVar2 = parse_mode_version::pvi_modes;
      if (lut_type != WF_TYPE_RESET) {
LAB_001054ac:
        printk("pvi: unspport PVI waveform type");
        return -1;
      }
    }
    else if (lut_type == WF_TYPE_GRAY2) {
      ppVar2 = parse_mode_version::pvi_modes + 1;
    }
    else {
      ppVar2 = parse_mode_version::pvi_modes + 7;
      if (lut_type != WF_TYPE_A2) goto LAB_001054ac;
    }
  }
  else if (lut_type == WF_TYPE_GLR16) {
    ppVar2 = parse_mode_version::pvi_modes + 5;
  }
  else if (lut_type < WF_TYPE_GLR16) {
    ppVar2 = parse_mode_version::pvi_modes + 4;
  }
  else if (lut_type == WF_TYPE_GLD16) {
    ppVar2 = parse_mode_version::pvi_modes + 6;
  }
  else {
    ppVar2 = parse_mode_version::pvi_modes + 8;
    if (lut_type != WF_TYPE_GCC16) goto LAB_001054ac;
  }
  return *ppVar2;
}



int decodewaveform(uchar *data)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uchar uVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  u8 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  puVar10 = waveformdata;
  iVar2 = maxpic;
  if (waveformdata == (u8 *)0x0) {
    printk("waveformdata is NULL\n");
    uVar16 = 0xffffffea;
  }
  else {
    uVar12 = 1;
    uVar15 = 0;
    uVar16 = 0;
    uVar13 = 0;
    uVar11 = 0;
    do {
      uVar14 = (uint)uVar15;
      bVar5 = data[uVar15];
      if (bVar5 == 0xff) {
        if (maxpic != 0x20) {
          return uVar16;
        }
        if (uVar16 == 0) {
          return 0;
        }
        goto LAB_00105894;
      }
      if (bVar5 == 0xfc) {
        uVar14 = uVar14 + 1;
        uVar12 = uVar12 ^ 1;
        bVar5 = data[uVar14];
      }
      iVar7 = uVar16 * 0x400;
      if (uVar12 == 0) {
        iVar3 = iVar7 + uVar13;
        puVar10[iVar7 + uVar11 * 0x20 + uVar13] = bVar5 & 3;
        puVar10[iVar3 + (uVar11 + 1) * 0x20] = bVar5 >> 2 & 3;
        puVar10[iVar3 + (uVar11 + 2) * 0x20] = bVar5 >> 4 & 3;
        puVar10[iVar3 + (uVar11 + 3) * 0x20] = bVar5 >> 6;
        uVar11 = uVar11 + 4;
        uVar15 = (ulong)(uVar14 + 1);
        if ((uint)iVar2 <= uVar11) {
          uVar13 = uVar13 + 1;
          uVar11 = 0;
          if ((uint)iVar2 <= uVar13) {
            uVar16 = uVar16 + 1;
            uVar13 = 0;
            uVar11 = uVar12;
          }
        }
      }
      else {
        iVar3 = iVar7 + uVar13;
        puVar10[iVar7 + uVar11 * 0x20 + uVar13] = bVar5 & 3;
        bVar8 = bVar5 >> 2 & 3;
        puVar10[iVar3 + (uVar11 + 1) * 0x20] = bVar8;
        bVar9 = bVar5 >> 4 & 3;
        puVar10[iVar3 + (uVar11 + 2) * 0x20] = bVar9;
        puVar10[iVar3 + (uVar11 + 3) * 0x20] = bVar5 >> 6;
        uVar11 = uVar11 + 4;
        if ((uint)iVar2 <= uVar11) {
          uVar13 = uVar13 + 1;
          uVar11 = 0;
          if ((uint)iVar2 <= uVar13) {
            uVar16 = uVar16 + 1;
            uVar13 = 0;
          }
        }
        uVar6 = data[uVar14 + 1];
        while (uVar6 != '\0') {
          iVar7 = uVar11 + 1;
          iVar4 = uVar16 * 0x400 + uVar13;
          iVar3 = uVar11 + 2;
          iVar1 = uVar11 + 3;
          puVar10[uVar16 * 0x400 + uVar11 * 0x20 + uVar13] = bVar5 & 3;
          uVar11 = uVar11 + 4;
          puVar10[(uint)(iVar4 + iVar7 * 0x20)] = bVar8;
          uVar6 = uVar6 + 0xff;
          puVar10[(uint)(iVar4 + iVar3 * 0x20)] = bVar9;
          puVar10[(uint)(iVar4 + iVar1 * 0x20)] = bVar5 >> 6;
          if ((uint)iVar2 <= uVar11) {
            uVar13 = uVar13 + 1;
            uVar11 = 0;
            if ((uint)iVar2 <= uVar13) {
              uVar16 = uVar16 + 1;
              uVar13 = 0;
            }
          }
        }
        uVar15 = (ulong)(uVar14 + 2);
        uVar12 = 1;
      }
    } while (uVar16 < 0x96);
    printk("pvi: decodec waveform 19 error\n");
    if (maxpic == 0x20) {
LAB_00105894:
      puVar10 = waveformdata;
      uVar13 = 0;
      do {
        uVar15 = 0;
        iVar2 = uVar13 * 0x400;
        do {
          uVar11 = 0;
          do {
            uVar14 = uVar11 + iVar2;
            uVar12 = uVar11 >> 1;
            uVar11 = uVar11 + 2;
            puVar10[uVar13 * 0x400 + (int)(uVar15 >> 1) * 0x20 + uVar12] = puVar10[uVar14];
          } while (uVar11 != 0x20);
          uVar11 = (int)uVar15 + 2;
          uVar15 = (ulong)uVar11;
          iVar2 = iVar2 + 0x40;
        } while (uVar11 != 0x20);
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 < uVar16);
    }
  }
  return uVar16;
}



int decodewaveform_32(uchar *data)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uchar uVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  u8 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  puVar10 = waveformdata;
  iVar9 = maxpic;
  if (waveformdata == (u8 *)0x0) {
    printk("waveformdata is NULL\n");
    uVar16 = 0xffffffea;
  }
  else {
    uVar13 = 1;
    uVar15 = 0;
    uVar16 = 0;
    uVar12 = 0;
    uVar11 = 0;
    do {
      uVar14 = (uint)uVar15;
      bVar4 = data[uVar15];
      if (bVar4 == 0xff) {
        return uVar16;
      }
      if (bVar4 == 0xfc) {
        uVar14 = uVar14 + 1;
        uVar13 = uVar13 ^ 1;
        bVar4 = data[uVar14];
      }
      iVar6 = uVar16 * 0x400;
      if (uVar13 == 0) {
        iVar2 = iVar6 + uVar12;
        puVar10[iVar6 + uVar11 * 0x20 + uVar12] = bVar4 & 3;
        puVar10[iVar2 + (uVar11 + 1) * 0x20] = bVar4 >> 2 & 3;
        puVar10[iVar2 + (uVar11 + 2) * 0x20] = bVar4 >> 4 & 3;
        puVar10[iVar2 + (uVar11 + 3) * 0x20] = bVar4 >> 6;
        uVar11 = uVar11 + 4;
        uVar15 = (ulong)(uVar14 + 1);
        if ((uint)iVar9 <= uVar11) {
          uVar12 = uVar12 + 1;
          uVar11 = 0;
          if ((uint)iVar9 <= uVar12) {
            uVar16 = uVar16 + 1;
            uVar12 = 0;
            uVar11 = uVar13;
          }
        }
      }
      else {
        iVar2 = iVar6 + uVar12;
        puVar10[iVar6 + uVar11 * 0x20 + uVar12] = bVar4 & 3;
        bVar7 = bVar4 >> 2 & 3;
        puVar10[iVar2 + (uVar11 + 1) * 0x20] = bVar7;
        bVar8 = bVar4 >> 4 & 3;
        puVar10[iVar2 + (uVar11 + 2) * 0x20] = bVar8;
        puVar10[iVar2 + (uVar11 + 3) * 0x20] = bVar4 >> 6;
        uVar11 = uVar11 + 4;
        if ((uint)iVar9 <= uVar11) {
          uVar12 = uVar12 + 1;
          uVar11 = 0;
          if ((uint)iVar9 <= uVar12) {
            uVar16 = uVar16 + 1;
            uVar12 = 0;
          }
        }
        uVar5 = data[uVar14 + 1];
        while (uVar5 != '\0') {
          iVar6 = uVar11 + 1;
          iVar3 = uVar12 + uVar16 * 0x400;
          iVar2 = uVar11 + 2;
          iVar1 = uVar11 + 3;
          puVar10[uVar16 * 0x400 + uVar11 * 0x20 + uVar12] = bVar4 & 3;
          uVar11 = uVar11 + 4;
          puVar10[(uint)(iVar3 + iVar6 * 0x20)] = bVar7;
          uVar5 = uVar5 + 0xff;
          puVar10[(uint)(iVar3 + iVar2 * 0x20)] = bVar8;
          puVar10[(uint)(iVar3 + iVar1 * 0x20)] = bVar4 >> 6;
          if ((uint)iVar9 <= uVar11) {
            uVar12 = uVar12 + 1;
            uVar11 = 0;
            if ((uint)iVar9 <= uVar12) {
              uVar16 = uVar16 + 1;
              uVar12 = 0;
            }
          }
        }
        uVar15 = (ulong)(uVar14 + 2);
        uVar13 = 1;
      }
    } while (uVar16 < 0x96);
    printk("pvi: decodec waveform 19 error\n");
  }
  return uVar16;
}



int decodewaveform_auto(uchar *data,int gray16_frame)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  u8 *puVar5;
  u8 *puVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uchar uVar13;
  uint uVar14;
  
  puVar5 = waveformdata;
  iVar1 = maxpic;
  if (waveformdata == (u8 *)0x0) {
    printk("waveformdata is NULL\n");
    uVar14 = 0xffffffea;
  }
  else {
    bVar8 = true;
    uVar12 = 0;
    uVar14 = 0;
    uVar10 = 0;
    uVar9 = 0x1e;
    if (maxpic != 0x20) {
      uVar9 = 0xf;
    }
    uVar7 = 0;
    do {
      uVar11 = (uint)uVar12;
      bVar4 = data[uVar12];
      if (bVar4 == 0xff) goto LAB_00105c9c;
      if (bVar4 == 0xfc) {
        uVar11 = uVar11 + 1;
        bVar8 = (bool)(bVar8 ^ 1);
        bVar4 = data[uVar11];
      }
      if (bVar8) {
        if (uVar10 == 0 || uVar9 == uVar10) {
          iVar2 = uVar14 * 0x400 + uVar10;
          puVar5[uVar14 * 0x400 + uVar7 * 0x20 + uVar10] = bVar4 & 3;
          puVar5[iVar2 + (uVar7 + 1) * 0x20] = bVar4 >> 2 & 3;
          puVar5[iVar2 + (uVar7 + 2) * 0x20] = bVar4 >> 4 & 3;
          puVar5[iVar2 + (uVar7 + 3) * 0x20] = bVar4 >> 6;
        }
        uVar7 = uVar7 + 4;
        if ((uint)iVar1 <= uVar7) {
          uVar10 = uVar10 + 1;
          uVar7 = 0;
          if ((uint)iVar1 <= uVar10) {
            uVar14 = uVar14 + 1;
            uVar10 = 0;
          }
        }
        uVar13 = data[uVar11 + 1];
        if (uVar13 != '\0') {
          do {
            iVar2 = uVar14 * 0x400 + uVar10;
            if (uVar10 == 0 || uVar9 == uVar10) {
              puVar5[uVar14 * 0x400 + uVar7 * 0x20 + uVar10] = bVar4 & 3;
              puVar5[iVar2 + (uVar7 + 1) * 0x20] = bVar4 >> 2 & 3;
              puVar5[iVar2 + (uVar7 + 2) * 0x20] = bVar4 >> 4 & 3;
              puVar5[iVar2 + (uVar7 + 3) * 0x20] = bVar4 >> 6;
            }
            uVar7 = uVar7 + 4;
            uVar13 = uVar13 + 0xff;
            if ((uint)iVar1 <= uVar7) {
              uVar10 = uVar10 + 1;
              uVar7 = 0;
              if ((uint)iVar1 <= uVar10) {
                uVar14 = uVar14 + 1;
                uVar10 = 0;
              }
            }
          } while (uVar13 != '\0');
        }
        uVar12 = (ulong)(uVar11 + 2);
        bVar8 = true;
      }
      else {
        if (uVar10 == 0 || uVar9 == uVar10) {
          iVar2 = uVar14 * 0x400 + uVar10;
          puVar5[uVar14 * 0x400 + uVar7 * 0x20 + uVar10] = bVar4 & 3;
          puVar5[iVar2 + (uVar7 + 1) * 0x20] = bVar4 >> 2 & 3;
          puVar5[iVar2 + (uVar7 + 2) * 0x20] = bVar4 >> 4 & 3;
          puVar5[iVar2 + (uVar7 + 3) * 0x20] = bVar4 >> 6;
        }
        uVar7 = uVar7 + 4;
        uVar12 = (ulong)(uVar11 + 1);
        if ((uint)iVar1 <= uVar7) {
          uVar10 = uVar10 + 1;
          uVar7 = 0;
          if ((uint)iVar1 <= uVar10) {
            uVar14 = uVar14 + 1;
            uVar10 = 0;
          }
        }
      }
    } while (uVar14 < 0x96);
    printk("pvi: decodec waveform 19 error\n");
LAB_00105c9c:
    puVar6 = waveformdata;
    puVar5 = waveformdata;
    uVar10 = uVar14;
    if (maxpic == 0x20) {
      if (gray16_frame < 1) {
        return uVar14;
      }
      uVar9 = 0;
      do {
        uVar12 = 0;
        iVar1 = uVar9 * 0x400;
        do {
          uVar7 = 0;
          do {
            uVar3 = iVar1 + uVar7;
            uVar11 = uVar7 >> 1;
            uVar7 = uVar7 + 2;
            puVar6[uVar9 * 0x400 + (int)(uVar12 >> 1) * 0x20 + uVar11] = puVar6[uVar3];
          } while (uVar7 != 0x20);
          uVar7 = (int)uVar12 + 2;
          uVar12 = (ulong)uVar7;
          iVar1 = iVar1 + 0x40;
        } while (uVar7 != 0x20);
        uVar9 = uVar9 + 1 & 0xff;
        puVar5 = waveformdata;
      } while ((int)uVar9 < gray16_frame);
    }
    for (; puVar6 = waveformdata, uVar10 = uVar10 & 0xff, waveformdata = puVar5,
        (int)uVar10 < gray16_frame; uVar10 = uVar10 + 1) {
      uVar7 = uVar10 * 0x400;
      uVar9 = uVar7 + 0x200;
      do {
        uVar11 = uVar7 + 0xf;
        puVar6[uVar7] = '\0';
        uVar7 = uVar7 + 0x20;
        puVar6[uVar11] = '\0';
      } while (uVar9 != uVar7);
      puVar5 = waveformdata;
      waveformdata = puVar6;
    }
  }
  return uVar14;
}



int pvi_wf_get_lut(epd_lut_data *output,epd_lut_type lut_type,int temperture,int needpic)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  u8 *puVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  u8 *puVar12;
  ulong uVar13;
  uint uVar14;
  
  if (global_waveform == (pvi_waveform *)0x0) {
    return -0x13;
  }
  if ((output == (epd_lut_data *)0x0) && (lRam0000000000000010 == 0)) {
    return -0x16;
  }
  if (maxpic < needpic) {
    printk("pvi: unsupport, needpic = %d, maxpic = %d\n",needpic);
    return -0x16;
  }
  if ((temperture / 3 == pvi_wf_get_lut::sftemp / 3) &&
     (pvi_wf_get_lut::stype == lut_type && needpic == -1)) {
    return 0;
  }
  bVar2 = global_waveform->temperaturenumber;
  if (bVar2 == 0) {
LAB_00105ee8:
    uVar14 = bVar2 - 1;
  }
  else if (temperture < (int)(uint)*(byte *)&global_waveform[1].checksum) {
    uVar14 = 0xffffffff;
  }
  else {
    uVar9 = 0;
    do {
      uVar14 = uVar9;
      if ((uint)bVar2 == uVar14 + 1) goto LAB_00105ee8;
      uVar9 = uVar14 + 1;
    } while ((int)(uint)global_waveform->xwia[(long)(int)(uVar14 + 0x31) + -0x1d] <= temperture);
  }
  waveformdata = output->wf_table + 0x950000;
  pvi_wf_get_lut::sftemp = temperture;
  pvi_wf_get_lut::stype = lut_type;
  if (10 < lut_type + 0xffffffff) {
    printk("pvi: unsupport WF type = %d\n",lut_type);
    return -1;
  }
  iVar8 = get_wf_mode_index(lut_type);
  iVar8 = (uint)global_waveform->sc1 + iVar8 * 4;
  bVar4 = global_waveform->xwia[(long)iVar8 + -0x1d];
  bVar2 = global_waveform->xwia[(long)iVar8 + -0x1b];
  bVar3 = global_waveform->xwia[(long)iVar8 + -0x1c];
  bVar7 = (uint)global_waveform->xwia[(long)iVar8 + -0x1a] !=
          ((uint)bVar3 + (uint)bVar2 + (uint)bVar4 & 0xff);
  if (needpic != 0x20 && lut_type != WF_TYPE_AUTO) {
    if (bVar7) {
      printk("pvi: %s %d check error\n","get_wf_frm_num",0x22b);
      goto LAB_00105ffc;
    }
    iVar8 = uVar14 * 4 + ((uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4);
    if ((uint)global_waveform->xwia[(long)iVar8 + -0x1a] !=
        ((uint)global_waveform->xwia[(long)iVar8 + -0x1c] +
         (uint)global_waveform->xwia[(long)iVar8 + -0x1b] +
         (uint)global_waveform->xwia[(long)iVar8 + -0x1d] & 0xff)) {
      printk("pvi: %s %d check error\n","get_wf_frm_num",0x239);
      goto LAB_00105ffc;
    }
    uVar9 = decodewaveform(global_waveform->xwia +
                           ((ulong)((uint)global_waveform->xwia[(long)iVar8 + -0x1b] << 0x10 |
                                    (uint)global_waveform->xwia[(long)iVar8 + -0x1c] << 8 |
                                   (uint)global_waveform->xwia[(long)iVar8 + -0x1d]) - 0x1d));
  }
  else {
    if (bVar7) {
      printk("pvi: %s %d check error\n","get_wf_frm_num_32",0x24f);
      goto LAB_00105ffc;
    }
    iVar8 = uVar14 * 4 + ((uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4);
    if ((uint)global_waveform->xwia[(long)iVar8 + -0x1a] !=
        ((uint)global_waveform->xwia[(long)iVar8 + -0x1c] +
         (uint)global_waveform->xwia[(long)iVar8 + -0x1b] +
         (uint)global_waveform->xwia[(long)iVar8 + -0x1d] & 0xff)) {
      printk("pvi: %s %d check error\n","get_wf_frm_num_32",0x25d);
      goto LAB_00105ffc;
    }
    uVar9 = decodewaveform_32(global_waveform->xwia +
                              ((ulong)((uint)global_waveform->xwia[(long)iVar8 + -0x1b] << 0x10 |
                                       (uint)global_waveform->xwia[(long)iVar8 + -0x1c] << 8 |
                                      (uint)global_waveform->xwia[(long)iVar8 + -0x1d]) - 0x1d));
  }
  if ((int)uVar9 < 0) {
LAB_00105ffc:
    printk("pvi waveform get frame number failed\n");
    return -1;
  }
  output->frame_num = uVar9;
  puVar6 = waveformdata;
  if (lut_type != WF_TYPE_AUTO) {
    if (needpic != 0x20 && lut_type != WF_TYPE_AUTO) {
      pvi_lut_init_wf_table(output->wf_table,uVar9);
      return 0;
    }
    puVar12 = output->wf_table;
    if (uVar9 == 0) {
      return 0;
    }
    uVar14 = 0;
    do {
      iVar8 = uVar14 << 0x10;
      uVar13 = 0;
      do {
        uVar11 = 0;
        do {
          uVar5 = uVar11 >> 3;
          iVar10 = (int)uVar11;
          uVar11 = uVar11 + 1;
          puVar12[iVar8 + iVar10] =
               puVar6[(int)(((uint)uVar5 & 0x1fff) + uVar14 * 0x400 + (int)(uVar13 >> 3) * 0x20)] &
               3;
        } while (uVar11 != 0x100);
        iVar8 = iVar8 + 0x100;
        uVar1 = (int)uVar13 + 1U & 0xffff;
        uVar13 = (ulong)uVar1;
      } while (uVar1 != 0x100);
      uVar14 = uVar14 + 1;
    } while (uVar9 != uVar14);
    return 0;
  }
  iVar8 = get_wf_mode_index(WF_TYPE_GRAY2);
  iVar8 = (uint)global_waveform->sc1 + iVar8 * 4;
  if ((uint)global_waveform->xwia[(long)iVar8 + -0x1a] ==
      ((uint)global_waveform->xwia[(long)iVar8 + -0x1c] +
       (uint)global_waveform->xwia[(long)iVar8 + -0x1b] +
       (uint)global_waveform->xwia[(long)iVar8 + -0x1d] & 0xff)) {
    iVar8 = uVar14 * 4 +
            ((uint)global_waveform->xwia[(long)iVar8 + -0x1b] << 0x10 |
             (uint)global_waveform->xwia[(long)iVar8 + -0x1c] << 8 |
            (uint)global_waveform->xwia[(long)iVar8 + -0x1d]);
    if ((uint)global_waveform->xwia[(long)iVar8 + -0x1a] ==
        ((uint)global_waveform->xwia[(long)iVar8 + -0x1c] +
         (uint)global_waveform->xwia[(long)iVar8 + -0x1b] +
         (uint)global_waveform->xwia[(long)iVar8 + -0x1d] & 0xff)) {
      iVar8 = decodewaveform_auto(global_waveform->xwia +
                                  ((ulong)((uint)global_waveform->xwia[(long)iVar8 + -0x1b] << 0x10
                                           | (uint)global_waveform->xwia[(long)iVar8 + -0x1c] << 8 |
                                          (uint)global_waveform->xwia[(long)iVar8 + -0x1d]) - 0x1d),
                                  uVar9);
      uVar14 = iVar8 << 8;
      if (0 < iVar8) goto LAB_001060d4;
    }
    else {
      uVar14 = 0xffffea00;
      printk("pvi: %s %d check error\n","get_wf_frm_num_auto",0x281);
    }
  }
  else {
    uVar14 = 0xffffea00;
    printk("pvi: %s %d check error\n","get_wf_frm_num_auto",0x273);
  }
  printk("Get GRAY2 waveform data failed during AUTO mode\n");
LAB_001060d4:
  pvi_lut_init_wf_table(output->wf_table,uVar9);
  output->frame_num = output->frame_num | uVar14;
  return 0;
}



int pvi_wf_input(void *waveform_file)

{
  byte bVar1;
  
  if (global_waveform != (pvi_waveform *)0x0) {
    return -0x10;
  }
  printk("pvi : input waveform version 0x%x\n",*(undefined *)((long)waveform_file + 0x10));
  bVar1 = *(byte *)((long)waveform_file + 0x10);
  if (bVar1 < 0x1a) {
    if (bVar1 < 0x18) {
      if (bVar1 == 0x12) {
        global_waveform = (pvi_waveform *)waveform_file;
        return 0;
      }
      if (bVar1 != 0x16) {
        if (bVar1 == 9) {
          global_waveform = (pvi_waveform *)waveform_file;
          return 0;
        }
        goto LAB_00106384;
      }
    }
  }
  else {
    if (bVar1 == 0x23) {
      global_waveform = (pvi_waveform *)waveform_file;
      return 0;
    }
    if (bVar1 < 0x24) {
      if (bVar1 != 0x20) goto LAB_00106384;
    }
    else if (bVar1 != 0x43) {
      if (bVar1 == 0x54) {
        global_waveform = (pvi_waveform *)waveform_file;
        return 0;
      }
LAB_00106384:
      printk("pvi : Unknow waveform version 0x%x, 0x%x, may be wrong waveform file\n",bVar1,
             *(undefined *)((long)waveform_file + 0x16));
      return -8;
    }
  }
  maxpic = 0x20;
  global_waveform = (pvi_waveform *)waveform_file;
  return 0;
}



char * pvi_wf_get_version(void)

{
  pvi_waveform *ppVar1;
  long lVar2;
  
  ppVar1 = global_waveform;
  if (global_waveform != (pvi_waveform *)0x0) {
    lVar2 = 0;
    do {
      pvi_wf_get_version::spi_id_buffer[lVar2] = ppVar1[1].xwia[lVar2 + -0xc];
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x1f);
    pvi_wf_get_version::spi_id_buffer[31] = '\0';
    return pvi_wf_get_version::spi_id_buffer;
  }
  return (char *)0x0;
}



uint * decode_wf_data(uchar *pbuf,uint length)

{
  uint *__dest;
  
  __dest = (uint *)__kmalloc((ulong)length,0x6080c0);
  if (__dest != (uint *)0x0) {
    memcpy(__dest,pbuf + 4,(ulong)length);
  }
  return __dest;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int parse_wf_gray16(void)

{
  byte bVar1;
  int iVar2;
  uint *in_x0;
  char *pcVar3;
  uint *puVar4;
  uint **in_x1;
  long lVar5;
  int in_w2;
  uint in_w3;
  
  if (in_w3 == 3) {
    pcVar3 = global_waveform->gl16_temp_list;
    puVar4 = global_waveform->gl16_list;
  }
  else if (in_w3 < 4) {
    if (in_w3 == 1) {
      pcVar3 = global_waveform->du_temp_list;
      puVar4 = global_waveform->du_list;
    }
    else {
      pcVar3 = global_waveform->reset_temp_list;
      puVar4 = global_waveform->reset_list;
      if (1 < in_w3) {
        pcVar3 = global_waveform->gc16_temp_list;
        puVar4 = global_waveform->gc16_list;
      }
    }
  }
  else if (in_w3 == 5) {
    pcVar3 = global_waveform->gld16_temp_list;
    puVar4 = global_waveform->gld16_list;
  }
  else if (in_w3 < 5) {
    pcVar3 = global_waveform->glr16_temp_list;
    puVar4 = global_waveform->glr16_list;
  }
  else {
    pcVar3 = global_waveform->a2_temp_list;
    puVar4 = global_waveform->a2_list;
    if (in_w3 != 6) {
      pcVar3 = (char *)0x0;
      goto LAB_00106514;
    }
  }
  if (in_w2 < 0) {
    in_w2 = 0;
  }
  lVar5 = 0;
  if (0x32 < in_w2) {
    in_w2 = 0x32;
  }
  do {
    if (in_w2 < (int)(uint)(byte)pcVar3[lVar5]) {
      lVar5 = lVar5 << 2;
      goto LAB_0010650c;
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x32);
  lVar5 = 0;
LAB_0010650c:
  pcVar3 = global_waveform->format + ((ulong)*(uint *)((long)puVar4 + lVar5) - 4);
LAB_00106514:
  bVar1 = *pcVar3;
  *in_x0 = (uint)bVar1;
  puVar4 = decode_wf_data((uchar *)pcVar3,(uint)bVar1 << 6);
  *in_x1 = puVar4;
  iVar2 = -0x16;
  if (puVar4 != (uint *)0x0) {
    iVar2 = 0;
  }
  return iVar2;
}



int rkf_wf_input(void *waveform_file)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  iVar6 = -0x10;
  if (global_waveform == (rkf_waveform *)0x0) {
    iVar6 = strncmp((char *)((long)waveform_file + 4),"rkf waveform",0xc);
    if (iVar6 == 0) {
                    // WARNING: Load size is inaccurate
      uVar4 = *waveform_file;
      if ((int)uVar4 < 0x40001) {
        uVar5 = *(uint *)((long)waveform_file + (long)(int)uVar4);
        memset(crc32_table,0,0x400);
        lVar10 = 0;
        do {
          uVar8 = (int)lVar10 << 0x16;
          uVar9 = 8;
          uVar7 = 0;
          do {
            uVar3 = uVar8 ^ uVar7;
            uVar1 = uVar7 << 1;
            uVar7 = uVar7 << 1;
            if ((int)uVar3 < 0) {
              uVar7 = uVar1 ^ 0x4c10db7;
            }
            uVar8 = uVar8 << 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
          *(uint *)((long)crc32_table + lVar10) = uVar7;
          lVar10 = lVar10 + 4;
        } while (lVar10 != 0x400);
        if (uVar4 != 0) {
          lVar10 = 0;
          do {
            pbVar2 = (byte *)((long)waveform_file + lVar10);
            lVar10 = lVar10 + 1;
            uVar9 = crc32_table[(uint)*pbVar2 ^ uVar9 >> 0x18] ^ uVar9 << 8;
          } while ((uint)lVar10 < uVar4);
        }
        if (uVar5 == uVar9) {
          printk("rkf file version: %s\n",(long)waveform_file + 0x14);
          global_waveform = (rkf_waveform *)waveform_file;
          return 0;
        }
        printk("[EINK]: waveform crc err readcrc = %x crccheck = %x\n",uVar5);
      }
      printk("rkf: failed to check crc RKF waveform\n");
      return -1;
    }
    printk("rkf: check format failed\n");
    iVar6 = -1;
    printk("rkf: failed to check RKF file format\n");
  }
  return iVar6;
}



char * rkf_wf_get_version(void)

{
  char *pcVar1;
  
  pcVar1 = global_waveform->full_version;
  if (global_waveform == (rkf_waveform *)0x0) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



// WARNING: Type propagation algorithm not settling

int rkf_wf_get_lut(epd_lut_data *output,epd_lut_type lut_type,int temperture,int needpic)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  
  if (global_waveform == (rkf_waveform *)0x0) {
    return -0x13;
  }
  if (output == (epd_lut_data *)0x0) {
    return -0x16;
  }
  if ((temperture / 5 == rkf_wf_get_lut::sftemp / 5) && (rkf_wf_get_lut::stype == lut_type)) {
    return 0;
  }
  rkf_wf_get_lut::sftemp = temperture;
  rkf_wf_get_lut::stype = lut_type;
  if (output->data != (uint *)0x0) {
    kfree();
    output->data = (uint *)0x0;
  }
  if (lut_type == WF_TYPE_GRAY16) goto LAB_00106b88;
  if (lut_type == WF_TYPE_GCC16) {
LAB_00106b68:
    iVar7 = parse_wf_gray16();
    goto joined_r0x00106b7c;
  }
  if (lut_type == WF_TYPE_A2) {
    lVar8 = 0;
    iVar7 = rkf_wf_get_lut::sftemp;
    if (rkf_wf_get_lut::sftemp < 0) {
      iVar7 = 0;
    }
    if (0x32 < iVar7) {
      iVar7 = 0x32;
    }
    do {
      if (iVar7 < (int)(uint)(byte)global_waveform->a2_temp_list[lVar8]) {
        lVar8 = lVar8 << 2;
        goto LAB_00106bf8;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0x32);
    lVar8 = 0;
LAB_00106bf8:
    uVar14 = (ulong)*(uint *)((long)global_waveform->a2_list + lVar8);
    pcVar6 = global_waveform->format;
    bVar3 = global_waveform->format[uVar14 - 4];
    output->frame_num = (uint)bVar3;
    puVar9 = decode_wf_data((uchar *)(pcVar6 + (uVar14 - 4)),(uint)bVar3 << 6);
    output->data = puVar9;
    if (puVar9 == (uint *)0x0) {
      return -1;
    }
  }
  else {
    if (lut_type < WF_TYPE_GC16) {
      if (lut_type != WF_TYPE_GRAY4) {
        if (lut_type < WF_TYPE_GRAY2) {
          if (lut_type != WF_TYPE_RESET) {
            return -1;
          }
          lVar8 = 0;
          iVar7 = rkf_wf_get_lut::sftemp;
          if (rkf_wf_get_lut::sftemp < 0) {
            iVar7 = 0;
          }
          if (0x32 < iVar7) {
            iVar7 = 0x32;
          }
          do {
            if (iVar7 < (int)(uint)(byte)global_waveform->reset_temp_list[lVar8]) {
              lVar8 = lVar8 << 2;
              goto LAB_00106ab4;
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 != 0x32);
          lVar8 = 0;
LAB_00106ab4:
          uVar14 = (ulong)*(uint *)((long)global_waveform->reset_list + lVar8);
          bVar3 = global_waveform->format[uVar14 - 4];
          uVar18 = bVar3 + 0xf >> 4;
          puVar9 = decode_wf_data((uchar *)(global_waveform->format + (uVar14 - 4)),uVar18 << 2);
          if (puVar9 == (uint *)0x0) {
            return -1;
          }
          output->frame_num = (uint)bVar3;
          puVar10 = (uint *)__kmalloc(uVar18 << 10,0x6080c0);
          if (puVar10 == (uint *)0x0) {
            output->data = (uint *)0x0;
            kfree(puVar9);
            return -1;
          }
          if (uVar18 != 0) {
            lVar8 = 0;
            do {
              uVar2 = puVar9[lVar8];
              iVar7 = (int)lVar8 << 8;
              uVar11 = 0;
              do {
                uVar1 = (int)uVar2 >> (uVar11 & 0x1f) & 3;
                uVar13 = 0;
                uVar16 = uVar1;
                do {
                  uVar4 = uVar13 & 0x1f;
                  uVar13 = uVar13 + 2;
                  uVar16 = uVar16 | uVar1 << (ulong)uVar4;
                } while (uVar13 != 0x20);
                iVar17 = iVar7 + 0x10;
                do {
                  puVar10[iVar7] = uVar16;
                  iVar7 = iVar7 + 1;
                } while (iVar7 != iVar17);
                uVar11 = uVar11 + 2;
              } while (uVar11 != 0x20);
              lVar8 = lVar8 + 1;
            } while ((int)lVar8 < (int)uVar18);
          }
          output->data = puVar10;
        }
        else {
          if (lut_type == WF_TYPE_GRAY2) {
            lVar8 = 0;
            iVar7 = rkf_wf_get_lut::sftemp;
            if (rkf_wf_get_lut::sftemp < 0) {
              iVar7 = 0;
            }
            if (0x32 < iVar7) {
              iVar7 = 0x32;
            }
            do {
              if (iVar7 < (int)(uint)(byte)global_waveform->du_temp_list[lVar8]) {
                lVar8 = lVar8 << 2;
                goto LAB_00106a44;
              }
              lVar8 = lVar8 + 1;
            } while (lVar8 != 0x32);
            lVar8 = 0;
LAB_00106a44:
            uVar14 = (ulong)*(uint *)((long)global_waveform->du_list + lVar8);
            uVar18 = (uint)(byte)global_waveform->format[uVar14 - 4];
            puVar9 = decode_wf_data((uchar *)(global_waveform->format + (uVar14 - 4)),
                                    (uint)(byte)global_waveform->format[uVar14 - 4] << 6);
            output->data = puVar9;
            if (puVar9 == (uint *)0x0) {
              return -1;
            }
            output->frame_num = uVar18;
            goto LAB_001068dc;
          }
          if (lut_type != WF_TYPE_AUTO) {
            return -1;
          }
          lVar8 = 0;
          iVar7 = rkf_wf_get_lut::sftemp;
          if (rkf_wf_get_lut::sftemp < 0) {
            iVar7 = 0;
          }
          if (0x32 < iVar7) {
            iVar7 = 0x32;
          }
          do {
            if (iVar7 < (int)(uint)(byte)global_waveform->gc16_temp_list[lVar8]) {
              lVar8 = lVar8 << 2;
              goto LAB_00106804;
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 != 0x32);
          lVar8 = 0;
LAB_00106804:
          uVar14 = (ulong)*(uint *)((long)global_waveform->gc16_list + lVar8);
          pcVar6 = global_waveform->format;
          bVar3 = global_waveform->format[uVar14 - 4];
          output->frame_num = (uint)bVar3;
          puVar9 = decode_wf_data((uchar *)(pcVar6 + (uVar14 - 4)),(uint)bVar3 << 6);
          output->data = puVar9;
          if (puVar9 == (uint *)0x0) {
            return -1;
          }
          lVar8 = 0;
          do {
            if (iVar7 < (int)(uint)(byte)global_waveform->du_temp_list[lVar8]) {
              lVar8 = lVar8 << 2;
              goto LAB_00106850;
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 != 0x32);
          lVar8 = 0;
LAB_00106850:
          uVar14 = (ulong)*(uint *)((long)global_waveform->du_list + lVar8);
          pcVar6 = global_waveform->format;
          bVar3 = global_waveform->format[uVar14 - 4];
          output->frame_num = output->frame_num | (uint)bVar3 << 8;
          puVar9 = decode_wf_data((uchar *)(pcVar6 + (uVar14 - 4)),(uint)bVar3 << 6);
          if (puVar9 == (uint *)0x0) {
            return -1;
          }
          if ((uint)*(byte *)&output->frame_num < (uint)bVar3) {
            printk("%s: frame_num err, du frame = %d, gc16 frame = %d\n","decode_wf_auto",bVar3);
          }
          else {
            uVar18 = 0;
            puVar15 = output->data;
            puVar10 = puVar9;
            if (bVar3 != 0) {
              do {
                lVar8 = 0;
                do {
                  *(uint *)((long)puVar15 + lVar8) =
                       *(uint *)((long)puVar10 + lVar8) & 0xc0000003 |
                       *(uint *)((long)puVar15 + lVar8) & 0x3ffffffc;
                  lVar8 = lVar8 + 4;
                } while (lVar8 != 0x40);
                uVar18 = uVar18 + 1;
                puVar10 = puVar10 + 0x10;
                puVar15 = puVar15 + 0x10;
              } while (uVar18 != bVar3);
            }
          }
        }
        kfree(puVar9);
        uVar18 = output->frame_num;
        goto LAB_001068dc;
      }
LAB_00106b88:
      iVar7 = parse_wf_gray16();
    }
    else if (lut_type == WF_TYPE_GL16) {
      iVar7 = parse_wf_gray16();
    }
    else {
      if (lut_type < WF_TYPE_GL16) goto LAB_00106b88;
      if (lut_type == WF_TYPE_GLR16) goto LAB_00106b68;
      if (lut_type != WF_TYPE_GLD16) {
        return -1;
      }
      iVar7 = parse_wf_gray16();
    }
joined_r0x00106b7c:
    if (iVar7 != 0) {
      return -1;
    }
  }
  uVar18 = output->frame_num;
LAB_001068dc:
  if ((uVar18 & 0xff) != 0) {
    iVar7 = 0;
    lVar8 = 0;
    do {
      puVar9 = output->data;
      uVar14 = 0;
      iVar17 = iVar7;
      do {
        uVar12 = 0;
        do {
          uVar5 = uVar12 >> 3;
          uVar11 = (uint)uVar12;
          uVar12 = (ulong)(uVar11 + 1);
          output->wf_table[iVar17 + uVar11] =
               (byte)((*(uint *)((long)puVar9 + (uVar14 >> 4) * 4 + lVar8) >>
                       (ulong)((uint)uVar5 & 0x1e) & 3) << 2) |
               (byte)(*(uint *)((long)puVar9 + (uVar14 & 0xf) * 4 + lVar8) >>
                     (ulong)((uVar11 & 0xf) << 1)) & 3;
        } while (uVar11 + 1 != 0x100);
        uVar11 = (int)uVar14 + 1;
        uVar14 = (ulong)uVar11;
        iVar17 = iVar17 + 0x100;
      } while (uVar11 != 0x100);
      iVar7 = iVar7 + 0x10000;
      lVar8 = lVar8 + 0x40;
    } while ((uVar18 & 0xff) << 0x10 != iVar7);
  }
  return 0;
}



int ebc_buf_release(ebc_buf_s *release_buf)

{
  _mcount();
  if (release_buf != (ebc_buf_s *)0x0) {
    if (release_buf->status == buf_osd) {
      kfree(release_buf);
    }
    else {
      release_buf->status = buf_idle;
      if (ebc_buf_info.use_buf_is_empty == 1) {
        ebc_buf_info.use_buf_is_empty = 0;
        __wake_up_sync(&ebc_buf_wq,1);
      }
    }
  }
  return 0;
}



int ebc_remove_from_dsp_buf_list(ebc_buf_s *remove_buf)

{
  int pos;
  
  _mcount();
  mutex_lock(0x10d2f8);
  if (ebc_buf_info.dsp_buf_list != (buf_list_s *)0x0) {
    pos = buf_list_get_pos(ebc_buf_info.dsp_buf_list,(int *)remove_buf);
    buf_list_remove(ebc_buf_info.dsp_buf_list,pos);
  }
  mutex_unlock(0x10d2f8);
  return 0;
}



int ebc_add_to_dsp_buf_list(ebc_buf_s *dsp_buf)

{
  panel_refresh_mode pVar1;
  bool bVar2;
  int iVar3;
  ebc_buf_s *release_buf;
  
  _mcount();
  mutex_lock(0x10d2f8);
  if (ebc_buf_info.dsp_buf_list != (buf_list_s *)0x0) {
    if ((((dsp_buf->needpic != 0x20) && (dsp_buf->buf_mode != EPD_OVERLAY)) &&
        ((iVar3 = (ebc_buf_info.dsp_buf_list)->nb_elt, 5 < dsp_buf->buf_mode + ~EPD_DU4 ||
         ((ebc_buf_info.dsp_buf_list)->maxelements <= iVar3)))) && (1 < iVar3)) {
      bVar2 = false;
LAB_00106e28:
      iVar3 = iVar3 + -1;
      if (iVar3 != 0) {
        release_buf = (ebc_buf_s *)buf_list_get(ebc_buf_info.dsp_buf_list,iVar3);
        pVar1 = release_buf->buf_mode;
        if ((pVar1 != EPD_OVERLAY) && (release_buf->needpic != 0x20)) {
          if ((EPD_AUTO_DU4 < pVar1) || ((0xc0fffdU >> ((ulong)pVar1 & 0x3f) & 1) == 0)) {
            if (!bVar2) {
              bVar2 = true;
              goto LAB_00106e28;
            }
            if (pVar1 + ~EPD_RESET < 3) goto LAB_00106e28;
          }
          buf_list_remove(ebc_buf_info.dsp_buf_list,iVar3);
          ebc_buf_release(release_buf);
        }
        goto LAB_00106e28;
      }
    }
    iVar3 = buf_list_add(ebc_buf_info.dsp_buf_list,(int *)dsp_buf,-1);
    if (iVar3 == -1) {
      ebc_buf_release(dsp_buf);
      mutex_unlock(0x10d2f8);
      return -1;
    }
    if (dsp_buf->status != buf_osd) {
      dsp_buf->status = buf_dsp;
    }
  }
  mutex_unlock(0x10d2f8);
  return 0;
}



int ebc_get_dsp_list_enum_num(void)

{
  _mcount();
  return (ebc_buf_info.dsp_buf_list)->nb_elt;
}



ebc_buf_s * ebc_find_buf_by_phy_addr(ulong phy_addr)

{
  int iVar1;
  ebc_buf_s *peVar2;
  int pos;
  
  _mcount();
  if (ebc_buf_info.buf_list == (buf_list_s *)0x0) {
LAB_00106ee8:
    peVar2 = (ebc_buf_s *)0x0;
  }
  else {
    pos = 0;
    do {
      if ((ebc_buf_info.buf_list)->nb_elt <= pos) goto LAB_00106ee8;
      iVar1 = pos + 1;
      peVar2 = (ebc_buf_s *)buf_list_get(ebc_buf_info.buf_list,pos);
      pos = iVar1;
    } while ((peVar2 == (ebc_buf_s *)0x0) || (peVar2->phy_addr != phy_addr));
  }
  return peVar2;
}



ebc_buf_s * ebc_dsp_buf_get(void)

{
  ebc_buf_s *peVar1;
  
  _mcount();
  mutex_lock(0x10d2f8);
  peVar1 = (ebc_buf_s *)ebc_buf_info.dsp_buf_list;
  if (ebc_buf_info.dsp_buf_list != (buf_list_s *)0x0) {
    if ((ebc_buf_info.dsp_buf_list)->nb_elt < 1) {
      peVar1 = (ebc_buf_s *)0x0;
    }
    else {
      peVar1 = (ebc_buf_s *)buf_list_get(ebc_buf_info.dsp_buf_list,0);
    }
  }
  mutex_unlock(0x10d2f8);
  return peVar1;
}



ebc_buf_s * ebc_osd_buf_get(void)

{
  _mcount();
  return ebc_buf_info.osd_buf;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ebc_buf_s * ebc_osd_buf_clone(void)

{
  ebc_buf_s *peVar1;
  ebc_buf_s *peVar2;
  
  _mcount();
  peVar2 = (ebc_buf_s *)kmem_cache_alloc_trace(_DAT_0010e350,0x6080c0,0x48);
  peVar1 = ebc_buf_info.osd_buf;
  if (peVar2 != (ebc_buf_s *)0x0) {
    peVar2->virt_addr = (ebc_buf_info.osd_buf)->virt_addr;
    peVar2->phy_addr = peVar1->phy_addr;
    peVar2->status = buf_osd;
  }
  return peVar2;
}



ebc_buf_s * ebc_empty_buf_get(char *tid_name)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int pos;
  ebc_buf_s *peVar4;
  wait_queue_entry __wq_entry;
  
  _mcount();
  lVar1 = __stack_chk_guard;
  peVar4 = (ebc_buf_s *)0x0;
  mutex_lock(0x10d330,0);
__out:
  do {
    do {
      if (ebc_buf_info.buf_list == (buf_list_s *)0x0) {
OUT:
        mutex_unlock(0x10d330);
        if (lVar1 - __stack_chk_guard == 0) {
          return peVar4;
        }
                    // WARNING: Subroutine does not return
        __stack_chk_fail(strcpy,lVar1 - __stack_chk_guard,0);
      }
      pos = 0;
      while (pos < (ebc_buf_info.buf_list)->nb_elt) {
        iVar2 = pos + 1;
        peVar4 = (ebc_buf_s *)buf_list_get(ebc_buf_info.buf_list,pos);
        pos = iVar2;
        if (peVar4 != (ebc_buf_s *)0x0) {
          if (peVar4->status == buf_idle) {
            peVar4->status = buf_user;
            *(undefined8 *)peVar4->tid_name = *(undefined8 *)tid_name;
            *(undefined8 *)(peVar4->tid_name + 7) = *(undefined8 *)(tid_name + 7);
            goto OUT;
          }
          if ((peVar4->status == buf_user) &&
             (iVar2 = strncmp(peVar4->tid_name,tid_name,0xf), iVar2 == 0)) {
            printk("[%s]: one tid only can get one buf at one time\n",tid_name);
            goto OUT;
          }
        }
      }
      ebc_buf_info.use_buf_is_empty = 1;
      _cond_resched();
    } while (ebc_buf_info.use_buf_is_empty != 1);
    init_wait_entry(&__wq_entry,0);
    while (lVar3 = prepare_to_wait_event(&ebc_buf_wq,&__wq_entry,1),
          ebc_buf_info.use_buf_is_empty == 1) {
      if (lVar3 != 0) goto __out;
      schedule();
    }
    finish_wait(&ebc_buf_wq,&__wq_entry);
  } while( true );
}



ulong ebc_phy_buf_base_get(void)

{
  _mcount();
  return ebc_buf_info.phy_mem_base;
}



char * ebc_virt_buf_base_get(void)

{
  _mcount();
  return ebc_buf_info.virt_mem_base;
}



int ebc_buf_state_show(char *buf)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint pos;
  
  _mcount();
  iVar1 = sprintf(buf,"dsp_buf num = %d\n",(ulong)(uint)(ebc_buf_info.dsp_buf_list)->nb_elt);
  if (ebc_buf_info.buf_list != (buf_list_s *)0x0) {
    for (pos = 0; (int)pos < (ebc_buf_info.buf_list)->nb_elt; pos = pos + 1) {
      puVar3 = (uint *)buf_list_get(ebc_buf_info.buf_list,pos);
      iVar2 = sprintf(buf + iVar1,"ebc_buf[%d]: s = %d, m = %d, tid = %s\n",(ulong)pos,
                      (ulong)*puVar3,(ulong)puVar3[10],puVar3 + 6);
      iVar1 = iVar1 + iVar2;
    }
  }
  return iVar1;
}



int ebc_buf_uninit(void)

{
  int *piVar1;
  int pos;
  
  _mcount();
  ebc_buf_info.buf_total_num = 0;
  if (ebc_buf_info.buf_list != (buf_list_s *)0x0) {
    pos = (ebc_buf_info.buf_list)->nb_elt;
    while (pos = pos + -1, -1 < pos) {
      piVar1 = buf_list_get(ebc_buf_info.buf_list,pos);
      if (piVar1 != (int *)0x0) {
        kfree();
      }
      buf_list_remove(ebc_buf_info.buf_list,pos);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

int ebc_buf_init(ulong phy_start,char *mem_start,int men_len,int dest_buf_len,int max_buf_num)

{
  buf_list_s *li;
  int iVar1;
  int iVar2;
  int *el;
  ebc_buf_s *peVar3;
  
  _mcount();
  if ((-1 < max_buf_num) && (mem_start != (char *)0x0)) {
    __mutex_init(0x10d2f8,"&ebc_buf_info.dsp_buf_lock",&vcom);
    __mutex_init(0x10d330,"&ebc_buf_info.ebc_buf_lock",&vcom);
    iVar1 = buf_list_init(&ebc_buf_info.buf_list,100);
    if (iVar1 == 0) {
      iVar1 = buf_list_init(&ebc_buf_info.dsp_buf_list,100);
      if (iVar1 == 0) {
        ebc_buf_info.buf_total_num = 0;
        ebc_buf_info.phy_mem_base = phy_start;
        ebc_buf_info.virt_mem_base = mem_start;
        iVar1 = dest_buf_len;
        do {
          if (men_len < iVar1) break;
          el = (int *)kmem_cache_alloc_trace(_DAT_0010e350,0x6080c0,0x48);
          li = ebc_buf_info.buf_list;
          if (el == (int *)0x0) goto LAB_00107484;
          *el = 0;
          *(ulong *)(el + 2) = phy_start;
          *(char **)(el + 4) = mem_start;
          el[0xb] = dest_buf_len;
          iVar2 = buf_list_add(li,el,-1);
          if (iVar2 == -1) goto LAB_00107484;
          ebc_buf_info.use_buf_is_empty = 0;
          mem_start = mem_start + dest_buf_len;
          phy_start = phy_start + (long)dest_buf_len;
          iVar1 = iVar1 + dest_buf_len;
        } while ((ebc_buf_info.buf_list)->nb_elt != max_buf_num);
        ebc_buf_info.buf_total_num = (ebc_buf_info.buf_list)->nb_elt;
        if (men_len < iVar1) {
          return 0;
        }
        peVar3 = (ebc_buf_s *)kmem_cache_alloc_trace(_DAT_0010e350,0x6080c0,0x48);
        if (peVar3 != (ebc_buf_s *)0x0) {
          peVar3->status = buf_osd;
          peVar3->phy_addr = phy_start;
          peVar3->virt_addr = mem_start;
          peVar3->len = dest_buf_len;
          ebc_buf_info.osd_buf = peVar3;
          return 0;
        }
LAB_00107484:
        ebc_buf_uninit();
        buf_list_uninit(ebc_buf_info.dsp_buf_list);
      }
      buf_list_uninit(ebc_buf_info.buf_list);
    }
  }
  return -1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int buf_list_init(buf_list_t **li,int maxelements)

{
  buf_list_t *pbVar1;
  int **ppiVar2;
  ulong __n;
  
  _mcount();
  pbVar1 = (buf_list_t *)kmem_cache_alloc_trace(_DAT_0010e350,0x6000c0,0x18);
  *li = pbVar1;
  if (pbVar1 != (buf_list_t *)0x0) {
    pbVar1->nb_elt = 0;
    pbVar1->array_elements = (int **)0x0;
    pbVar1->maxelements = maxelements;
    __n = -(ulong)((uint)maxelements >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)maxelements << 3;
    ppiVar2 = (int **)__kmalloc(__n,0x6000c0);
    pbVar1->array_elements = ppiVar2;
    ppiVar2 = (*li)->array_elements;
    if (ppiVar2 != (int **)0x0) {
      memset(ppiVar2,0,__n);
      return 0;
    }
    kfree(*li);
  }
  return -0xc;
}



int buf_list_uninit(buf_list_t *li)

{
  _mcount();
  if (li != (buf_list_t *)0x0) {
    if (li->array_elements != (int **)0x0) {
      memset(li->array_elements,0,(long)li->maxelements << 3);
      kfree(li->array_elements);
      li->array_elements = (int **)0x0;
    }
    kfree(li);
  }
  return 0;
}



int buf_list_eol(buf_list_t *li,int i)

{
  uint uVar1;
  
  _mcount();
  if (((li == (buf_list_t *)0x0) || (li->array_elements == (int **)0x0)) || (i < 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (uint)(li->nb_elt <= i);
  }
  return uVar1;
}



int * buf_list_get(buf_list_t *li,int pos)

{
  _mcount();
  if (li != (buf_list_t *)0x0) {
    if (li->array_elements == (int **)0x0) {
      return (int *)0x0;
    }
    if ((-1 < pos) && (pos < li->nb_elt)) {
      return li->array_elements[pos];
    }
  }
  return (int *)0x0;
}



int buf_list_remove(buf_list_t *li,int pos)

{
  int iVar1;
  
  _mcount();
  if ((((li == (buf_list_t *)0x0) || (li->array_elements == (int **)0x0)) || (pos < 0)) ||
     (li->nb_elt <= pos)) {
    iVar1 = -1;
  }
  else {
    while( true ) {
      iVar1 = li->nb_elt + -1;
      if (iVar1 <= pos) break;
      li->array_elements[pos] = li->array_elements[pos + 1];
      pos = pos + 1;
    }
    li->nb_elt = iVar1;
  }
  return iVar1;
}



int buf_list_add(buf_list_t *li,int *el,int pos)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _mcount();
  if ((li != (buf_list_t *)0x0) && (li->array_elements != (int **)0x0)) {
    uVar3 = li->nb_elt;
    if ((-1 < pos) && (pos < (int)uVar3)) {
      uVar6 = (ulong)(uVar3 - 1);
      uVar4 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
      uVar5 = -(ulong)(uVar3 - 1 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3;
      for (; uVar3 = pos, pos <= (int)uVar6; uVar6 = (ulong)((int)uVar6 - 1)) {
        puVar1 = (undefined8 *)((long)li->array_elements + uVar5);
        uVar5 = uVar5 - 8;
        *(undefined8 *)((long)li->array_elements + uVar4) = *puVar1;
        uVar4 = uVar4 - 8;
      }
    }
    if ((int)uVar3 < li->maxelements) {
      li->array_elements[(int)uVar3] = el;
      iVar2 = li->nb_elt + 1;
      li->nb_elt = iVar2;
      return iVar2;
    }
  }
  return -1;
}



int * buf_list_find(buf_list_t *list,int *node,anon_subr_int_int_ptr_int_ptr *cmp_func)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  _mcount();
  if ((list != (buf_list_t *)0x0) && (list->array_elements != (int **)0x0)) {
    for (iVar2 = 0; iVar2 < list->nb_elt; iVar2 = iVar2 + 1) {
      piVar3 = list->array_elements[iVar2];
      iVar1 = (*cmp_func)(node,piVar3);
      if (iVar1 == 0) {
        return piVar3;
      }
    }
  }
  return (int *)0x0;
}



int buf_list_get_pos(buf_list_t *list,int *node)

{
  long lVar1;
  
  _mcount();
  if (((list != (buf_list_t *)0x0) && (list->array_elements != (int **)0x0)) && (0 < list->nb_elt))
  {
    lVar1 = 0;
    do {
      if (list->array_elements[lVar1] == node) {
        return (int)lVar1;
      }
      lVar1 = lVar1 + 1;
    } while ((int)lVar1 < list->nb_elt);
  }
  return -1;
}



int buf_list_set(buf_list_t *li,int *el,int pos)

{
  int iVar1;
  
  _mcount();
  if ((((li == (buf_list_t *)0x0) || (li->array_elements == (int **)0x0)) || (pos < 0)) ||
     (li->nb_elt <= pos)) {
    iVar1 = -1;
  }
  else {
    li->array_elements[pos] = el;
    iVar1 = 0;
  }
  return iVar1;
}



// WARNING: Could not reconcile some variable overlaps

int ebc_pmic_set_vcom(ebc_pmic_conflict *pmic,int value)

{
  long lVar1;
  int iVar2;
  char data [64];
  
  _mcount();
  lVar1 = __stack_chk_guard;
  data._0_8_ = 0;
  data._8_8_ = 0;
  data._16_8_ = 0;
  data._24_8_ = 0;
  data._32_8_ = 0;
  data._40_8_ = 0;
  data._48_8_ = 0;
  data._56_8_ = 0;
  if (value - 1U < 0x13f6) {
    _dev_info(pmic->dev,"set chip vcom to: %dmV\n",value);
    (*pmic->pmic_set_vcom)(pmic,value);
    data._0_8_ = 0;
    data._8_8_ = 0;
    data._16_8_ = 0;
    data._24_8_ = 0;
    data._32_8_ = 0;
    data._40_8_ = 0;
    data._48_8_ = 0;
    data._56_8_ = 0;
    sprintf(data,"%d",(ulong)(uint)value);
    _dev_info(pmic->dev,"store vcom %d to vendor storage\n",value);
    iVar2 = rk_vendor_write(0x11,data,0x40);
    if (iVar2 < 0) {
      _dev_err(pmic->dev,"%s failed to write vendor storage\n","ebc_pmic_set_vcom");
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = -1;
    _dev_err(pmic->dev,"vcom value should be %d~%d\n",0,0x13f6);
  }
  if (lVar1 - __stack_chk_guard != 0) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(strcpy,lVar1 - __stack_chk_guard,0);
  }
  return iVar2;
}



void ebc_pmic_verity_vcom(ebc_pmic_conflict *pmic)

{
  int iVar1;
  int iVar2;
  
  _mcount();
  iVar2 = vcom;
  if (vcom - 1U < 0x13f6) {
    iVar1 = (*pmic->pmic_get_vcom)(pmic);
    if (iVar2 != iVar1) {
      _dev_info(pmic->dev,"chip_vcom %d != vendor_vcom %d, set vcom from vendor\n",iVar1,iVar2);
      iVar2 = (*pmic->pmic_set_vcom)(pmic,iVar2);
      if (iVar2 != 0) {
        _dev_err(pmic->dev,"set vcom value failed\n");
      }
    }
  }
  else {
    _dev_err(pmic->dev,"invaild vcom value %d from vendor storage\n",vcom);
  }
  return;
}



int tps65185_remove(i2c_client_conflict *client)

{
  _mcount();
  if ((client->dev).links.consumers.next[1].prev[8].next != (list_head *)0x0) {
    destroy_workqueue();
  }
  return 0;
}



// WARNING: Could not reconcile some variable overlaps

int papyrus_hw_getreg(papyrus_sess *sess,uint8_t regaddr,uint8_t *val)

{
  long lVar1;
  int iVar2;
  i2c_client_conflict *piVar3;
  int iVar4;
  uint8_t local_31 [9];
  i2c_msg msgs [2];
  
  local_31[0] = regaddr;
  _mcount();
  lVar1 = __stack_chk_guard;
  piVar3 = sess->client;
  msgs[0].addr = piVar3->addr;
  msgs[0]._2_4_ = 0x10000;
  msgs[0].buf = local_31;
  msgs[1].addr = piVar3->addr;
  msgs[1]._2_4_ = 0x10001;
  msgs[1].buf = val;
  iVar2 = i2c_transfer(piVar3->adapter,msgs,2);
  if (iVar2 < 0) {
    _dev_err(&sess->client->dev,"i2c read error: %d\n",iVar2);
    iVar4 = iVar2;
  }
  else if (iVar2 == 2) {
    iVar4 = 0;
  }
  else {
    iVar4 = -5;
    _dev_err(&sess->client->dev,"i2c read N mismatch: %d\n",iVar2);
  }
  if (lVar1 - __stack_chk_guard != 0) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(strcpy,lVar1 - __stack_chk_guard,0);
  }
  return iVar4;
}



int papyrus_hw_read_temperature(ebc_pmic *pmic,int *t)

{
  int iVar1;
  uint8_t local_9;
  long local_8;
  
  _mcount();
  local_8 = __stack_chk_guard;
  iVar1 = papyrus_hw_getreg((papyrus_sess *)pmic->drvpar,'\0',&local_9);
  *t = (int)(char)local_9;
  if (local_8 - __stack_chk_guard != 0) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(iVar1,strcpy,local_8 - __stack_chk_guard,0);
  }
  return iVar1;
}



int papyrus_hw_setreg(papyrus_sess *sess,uint8_t regaddr,uint8_t val)

{
  long lVar1;
  int iVar2;
  int iVar3;
  i2c_msg msgs [1];
  uint8_t txbuf [2];
  
  _mcount();
  lVar1 = __stack_chk_guard;
  msgs[0].addr = sess->client->addr;
  msgs[0]._2_4_ = 0x20000;
  msgs[0].buf = txbuf;
  txbuf[0] = regaddr;
  txbuf[1] = val;
  iVar2 = i2c_transfer(sess->client->adapter,msgs,1);
  if (iVar2 < 0) {
    _dev_err(&sess->client->dev,"i2c send error: %d\n",iVar2);
    iVar3 = iVar2;
  }
  else if (iVar2 == 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = -5;
    _dev_err(&sess->client->dev,"i2c send N mismatch: %d\n",iVar2);
  }
  if (lVar1 - __stack_chk_guard != 0) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(strcpy,lVar1 - __stack_chk_guard,0);
  }
  return iVar3;
}



int papyrus_hw_vcom_set(ebc_pmic *pmic,int vcom_mv)

{
  byte val;
  uint8_t val_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  papyrus_sess *sess;
  byte local_9;
  long local_8;
  
  _mcount();
  sess = (papyrus_sess *)pmic->drvpar;
  local_8 = __stack_chk_guard;
  local_9 = 0;
  mutex_lock(&sess->power_lock,0);
  gpiod_direction_output(sess->wake_up_pin,1);
  msleep(10);
  val_00 = (uint8_t)(vcom_mv / 10);
  sess->vcom1 = val_00;
  sess->vcom2 = (byte)((uint)(vcom_mv / 10) >> 8) & 1;
  uVar1 = papyrus_hw_setreg(sess,'\x03',val_00);
  uVar2 = papyrus_hw_setreg(sess,'\x04',sess->vcom2);
  val = sess->vcom2 | 0x40;
  sess->vcom2 = val;
  uVar3 = papyrus_hw_setreg(sess,'\x04',val);
  uVar3 = uVar1 | uVar2 | uVar3;
  local_9 = 0;
  do {
    uVar1 = papyrus_hw_getreg(sess,'\a',&local_9);
    uVar3 = uVar3 | uVar1;
    if (uVar3 != 0) {
      _dev_err(&sess->client->dev,"papyrus: I2C error: %d\n",uVar3);
      break;
    }
    msleep(0x32);
  } while ((local_9 & 1) == 0);
  mutex_unlock(&sess->power_lock);
  if (local_8 - __stack_chk_guard == 0) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(strcpy,local_8 - __stack_chk_guard,0);
}



int papyrus_hw_vcom_get(ebc_pmic *pmic)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  papyrus_sess *sess;
  byte local_9;
  long local_8;
  
  _mcount();
  local_8 = __stack_chk_guard;
  sess = (papyrus_sess *)pmic->drvpar;
  local_9 = 0;
  mutex_lock(&sess->power_lock,0);
  gpiod_direction_output(sess->wake_up_pin,0);
  msleep(10);
  gpiod_direction_output(sess->wake_up_pin,1);
  msleep(10);
  uVar3 = papyrus_hw_getreg(sess,'\x03',&local_9);
  bVar2 = local_9;
  uVar4 = papyrus_hw_getreg(sess,'\x04',&local_9);
  uVar5 = (uint)local_9;
  if ((uVar3 | uVar4) != 0) {
    _dev_err(&sess->client->dev,"papyrus: I2C error: %d\n");
  }
  mutex_unlock(&sess->power_lock);
  iVar1 = ((uVar5 & 1) * 0x100 + (uint)bVar2) * 10;
  if (local_8 - __stack_chk_guard != 0) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(iVar1,strcpy,local_8 - __stack_chk_guard,0);
  }
  return iVar1;
}



void papyrus_hw_power_req(ebc_pmic *pmic,bool up)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  gpio_desc *pgVar9;
  papyrus_sess *sess;
  
  _mcount();
  sess = (papyrus_sess *)pmic->drvpar;
  if (up != false) {
    mutex_lock(&sess->power_lock);
  }
  if (papyrus_need_reconfig == false) {
    if (up != false) {
      pgVar9 = sess->pwr_up_pin;
      if ((pgVar9 != (gpio_desc *)0x0) && (pgVar9 < (gpio_desc *)0xfffffffffffff001)) {
        gpiod_direction_output(pgVar9,1);
      }
      enable_irq(sess->irq);
      return;
    }
    disable_irq(sess->irq);
    pgVar9 = sess->pwr_up_pin;
    if ((pgVar9 != (gpio_desc *)0x0) && (pgVar9 < (gpio_desc *)0xfffffffffffff001)) {
      gpiod_direction_output(pgVar9,0);
    }
  }
  else {
    if (up == false) {
      disable_irq(sess->irq);
      sess->enable_reg_shadow = 'o';
      uVar2 = papyrus_hw_setreg(sess,'\x01','o');
      usleep_range(2000,3000);
      bVar1 = sess->enable_reg_shadow & 0xdf;
      sess->enable_reg_shadow = bVar1;
      uVar3 = papyrus_hw_setreg(sess,'\x01',bVar1);
      if ((uVar2 | uVar3) != 0) {
        _dev_err(&sess->client->dev,"i2c error: %d\n");
      }
    }
    else {
      uVar2 = papyrus_hw_setreg(sess,'\x02',sess->vadj);
      uVar3 = papyrus_hw_setreg(sess,'\t',sess->upseq0);
      uVar4 = papyrus_hw_setreg(sess,'\n',sess->upseq1);
      uVar5 = papyrus_hw_setreg(sess,'\v',sess->dwnseq0);
      uVar6 = papyrus_hw_setreg(sess,'\f',sess->dwnseq1);
      bVar1 = sess->enable_reg_shadow | 0x20;
      sess->enable_reg_shadow = bVar1;
      uVar7 = papyrus_hw_setreg(sess,'\x01',bVar1);
      usleep_range(2000,3000);
      sess->enable_reg_shadow = 0xbf;
      uVar8 = papyrus_hw_setreg(sess,'\x01',0xbf);
      if ((uVar8 | uVar6 | uVar7 | uVar4 | uVar5 | uVar2 | uVar3) != 0) {
        _dev_err(&sess->client->dev,"i2c error: %d\n");
      }
      pgVar9 = sess->pwr_up_pin;
      if ((pgVar9 != (gpio_desc *)0x0) && (pgVar9 < (gpio_desc *)0xfffffffffffff001)) {
        gpiod_direction_output(pgVar9,1);
      }
      enable_irq(sess->irq);
    }
    papyrus_need_reconfig = false;
    if (up != false) {
      papyrus_need_reconfig = false;
      return;
    }
  }
  mutex_unlock(&sess->power_lock);
  return;
}



void papyrus_pm_sleep(ebc_pmic *pmic)

{
  ulong uVar1;
  void *pvVar2;
  
  _mcount();
  pvVar2 = pmic->drvpar;
  cancel_delayed_work_sync((long)pvVar2 + 0x88);
  mutex_lock((long)pvVar2 + 0x48);
  gpiod_direction_output(*(undefined8 *)((long)pvVar2 + 0x40),0);
  gpiod_direction_output(*(undefined8 *)((long)pvVar2 + 0x38),0);
  uVar1 = *(ulong *)((long)pvVar2 + 0x28);
  if ((uVar1 != 0) && (uVar1 < 0xfffffffffffff001)) {
    gpiod_direction_output(uVar1,0);
  }
  papyrus_need_reconfig = true;
  mutex_unlock((long)pvVar2 + 0x48);
  return;
}



void papyrus_tmp_work(work_struct *work)

{
  _mcount();
  papyrus_hw_setreg((papyrus_sess *)&work[-3].entry,'\r',0x80);
  queue_delayed_work_on(8,work[-1].android_kabi_reserved2,work,3000);
  return;
}



void papyrus_pm_resume(ebc_pmic *pmic)

{
  gpio_desc *pgVar1;
  papyrus_sess *sess;
  
  _mcount();
  sess = (papyrus_sess *)pmic->drvpar;
  mutex_lock(&sess->power_lock);
  pgVar1 = sess->pwr_en_pin;
  if ((pgVar1 != (gpio_desc *)0x0) && (pgVar1 < (gpio_desc *)0xfffffffffffff001)) {
    gpiod_direction_output(pgVar1,1);
    usleep_range(2000,3000);
  }
  gpiod_direction_output(sess->wake_up_pin,1);
  gpiod_direction_output(sess->vcom_ctl_pin,1);
  usleep_range(2000,3000);
  mutex_unlock(&sess->power_lock);
  papyrus_hw_setreg(sess,'\r',0x80);
  queue_delayed_work_on(8,sess->tmp_monitor_wq,&sess->tmp_delay_work,3000);
  return;
}



// WARNING: Type propagation algorithm not settling

int tps65185_probe(i2c_client_conflict *client,i2c_device_id *id)

{
  device *pdVar1;
  u32 uVar2;
  int iVar3;
  uint uVar4;
  list_head *plVar5;
  papyrus_sess *sess;
  gpio_desc *pgVar6;
  device *pdVar7;
  undefined8 uVar8;
  workqueue_struct *pwVar9;
  char *pcVar10;
  ulong uVar11;
  byte local_9;
  long local_8;
  
  _mcount();
  local_8 = __stack_chk_guard;
  pdVar1 = &client->dev;
  uVar2 = (*client->adapter->algo->functionality)(client->adapter);
  if ((uVar2 & 1) == 0) {
    pcVar10 = "i2c check functionality failed.";
  }
  else {
    plVar5 = (list_head *)devm_kmalloc(pdVar1,0x50,0x6080c0);
    if (plVar5 == (list_head *)0x0) {
      _dev_err(pdVar1,"%s:%d: kzalloc failed\n","tps65185_probe",0x270);
      iVar3 = -0xc;
      goto LAB_00108370;
    }
    sess = (papyrus_sess *)devm_kmalloc(pdVar1,0x110,0x6080c0);
    if (sess == (papyrus_sess *)0x0) {
      _dev_err(pdVar1,"%s:%d: kzalloc failed\n","papyrus_probe",0x216);
      goto LAB_001083c8;
    }
    sess->client = client;
    __mutex_init((mutex *)(&sess->enable_reg_shadow + 0x38),"&sess->power_lock",&__key_1);
    (&sess->enable_reg_shadow)[1] = '\x03';
    *(undefined2 *)(&sess->enable_reg_shadow + 2) = 0x9c;
    *(undefined4 *)(&sess->enable_reg_shadow + 4) = 0x1e00e1;
    pgVar6 = (gpio_desc *)devm_gpiod_get_optional(pdVar1,"poweren",7);
    *(gpio_desc **)(&sess->enable_reg_shadow + 0x18) = pgVar6;
    if ((pgVar6 == (gpio_desc *)0x0) || ((gpio_desc *)0xfffffffffffff000 < pgVar6)) {
      _dev_err(pdVar1,"tsp65185: failed to find poweren pin, no defined\n");
    }
    pgVar6 = (gpio_desc *)devm_gpiod_get_optional(pdVar1,"wakeup",7);
    *(gpio_desc **)(&sess->enable_reg_shadow + 0x28) = pgVar6;
    pdVar7 = pdVar1;
    if ((pgVar6 == (gpio_desc *)0x0) || ((gpio_desc *)0xfffffffffffff000 < pgVar6)) {
      pcVar10 = "tsp65185: failed to find wakeup pin\n";
LAB_00108470:
      _dev_err(pdVar7,pcVar10);
    }
    else {
      pgVar6 = (gpio_desc *)devm_gpiod_get_optional(pdVar1,"vcomctl",7);
      *(gpio_desc **)(&sess->enable_reg_shadow + 0x30) = pgVar6;
      if ((pgVar6 == (gpio_desc *)0x0) || ((gpio_desc *)0xfffffffffffff000 < pgVar6)) {
        pcVar10 = "tsp65185: failed to find vcom_ctl pin\n";
        goto LAB_00108470;
      }
      pgVar6 = (gpio_desc *)devm_gpiod_get_optional(pdVar1,"powerup",7);
      *(gpio_desc **)(&sess->enable_reg_shadow + 0x20) = pgVar6;
      if ((pgVar6 == (gpio_desc *)0x0) || ((gpio_desc *)0xfffffffffffff000 < pgVar6)) {
        _dev_err(pdVar1,"tsp65185: no pwr_up pin find\n");
      }
      pgVar6 = (gpio_desc *)devm_gpiod_get(pdVar1,&DAT_0010b7de,1);
      *(gpio_desc **)(&sess->enable_reg_shadow + 0x10) = pgVar6;
      if (pgVar6 < (gpio_desc *)0xfffffffffffff001) {
        uVar8 = gpiod_to_irq();
        *(int *)(&sess->enable_reg_shadow + 8) = (int)uVar8;
        if ((int)uVar8 < 0) {
          _dev_err(pdVar1,"Unable to get irq number for int pin\n");
          iVar3 = *(int *)(&sess->enable_reg_shadow + 8);
          goto LAB_00108510;
        }
        irq_modify_status(uVar8,0,0x1000);
        iVar3 = devm_request_threaded_irq
                          (pdVar1,*(int *)(&sess->enable_reg_shadow + 8),0,papyrus_irq,0x2008,
                           "tps65185",sess);
        if (iVar3 == 0) {
          pgVar6 = *(gpio_desc **)(&sess->enable_reg_shadow + 0x18);
          if ((pgVar6 != (gpio_desc *)0x0) && (pgVar6 < (gpio_desc *)0xfffffffffffff001)) {
            gpiod_direction_output(pgVar6,1,0);
            usleep_range(2000,3000);
          }
          gpiod_direction_output(*(gpio_desc **)(&sess->enable_reg_shadow + 0x28),0);
          msleep(0x6e);
          gpiod_direction_output(*(gpio_desc **)(&sess->enable_reg_shadow + 0x28),1);
          pgVar6 = *(gpio_desc **)(&sess->enable_reg_shadow + 0x20);
          if ((pgVar6 != (gpio_desc *)0x0) && (pgVar6 < (gpio_desc *)0xfffffffffffff001)) {
            gpiod_direction_output(pgVar6,0);
          }
          gpiod_direction_output(*(gpio_desc **)(&sess->enable_reg_shadow + 0x30),1);
          msleep(0x32);
          uVar4 = papyrus_hw_getreg(sess,'\x10',&local_9);
          uVar11 = (ulong)uVar4;
          if (uVar4 == 0) {
            uVar11 = (ulong)local_9;
          }
          else {
            _dev_err(&sess->client->dev,"i2c error: %d\n",uVar4);
            if ((int)uVar4 < 0) {
              pcVar10 = "get id failed";
              pdVar7 = &sess->client->dev;
              goto LAB_00108470;
            }
          }
          _dev_info(&sess->client->dev,"detected device with ID=%02x (TPS6518%dr%dp%d)\n",uVar11,
                    (uint)uVar11 & 0xf,uVar11 >> 6 & 3,uVar11 >> 4 & 3);
          sess->enable_reg_shadow = '\0';
          iVar3 = papyrus_hw_setreg(sess,'\x01','\0');
          if (iVar3 != 0) goto LAB_001083c8;
          papyrus_hw_setreg(sess,'\r',0x80);
          plVar5[4].next = (list_head *)papyrus_hw_vcom_get;
          plVar5[4].prev = (list_head *)papyrus_hw_vcom_set;
          plVar5[3].next = (list_head *)papyrus_pm_resume;
          plVar5[2].prev = (list_head *)papyrus_pm_sleep;
          plVar5[2].next = (list_head *)papyrus_hw_power_req;
          plVar5[1].prev = (list_head *)sess;
          plVar5[3].prev = (list_head *)papyrus_hw_read_temperature;
          pwVar9 = (workqueue_struct *)
                   __alloc_workqueue_key(&DAT_0010b8a5,0xa000e,1,0,0,"tps-tmp-monitor-wq");
          sess->tmp_monitor_wq = pwVar9;
          (((delayed_work *)(&sess->tmp_monitor_wq + 1))->work).data = (atomic_long_t)0xfffffffe0;
          ((list_head *)(&sess->tmp_monitor_wq + 2))->next =
               (list_head *)(&sess->tmp_monitor_wq + 2);
          ((list_head *)(&sess->tmp_monitor_wq + 2))->prev =
               (list_head *)(&sess->tmp_monitor_wq + 2);
          *(code **)&sess->tmp_delay_work = papyrus_tmp_work;
          init_timer_key((timer_list *)&sess->tmp_delay_work,&delayed_work_timer_fn,0x200000,0,0);
          queue_delayed_work_on
                    (8,sess->tmp_monitor_wq,(delayed_work *)(&sess->tmp_monitor_wq + 1),3000);
          goto LAB_00108744;
        }
        _dev_err(pdVar1,"Failed to enable IRQ, error: %d\n");
      }
      else {
        _dev_err(pdVar1,"tsp65185: failed to find int pin\n");
        iVar3 = *(int *)(&sess->enable_reg_shadow + 0x10);
LAB_00108510:
        if (iVar3 == 0) {
LAB_00108744:
          plVar5->next = (list_head *)pdVar1;
          strcpy((char *)&plVar5->prev,"tps65185");
          (client->dev).links.consumers.next = plVar5;
          _dev_info(pdVar1,"tps65185 probe ok.\n");
          iVar3 = 0;
          goto LAB_00108370;
        }
      }
    }
LAB_001083c8:
    pcVar10 = "tps65185 hw init failed.";
  }
  _dev_err(pdVar1,pcVar10);
  iVar3 = -0x13;
LAB_00108370:
  if (local_8 - __stack_chk_guard == 0) {
    return iVar3;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(iVar3,strcpy,local_8 - __stack_chk_guard,0);
}



irqreturn_t papyrus_irq(int irq,void *dev_id)

{
  long lVar1;
  int iVar2;
  papyrus_hw_state hwst;
  
  _mcount();
  lVar1 = __stack_chk_guard;
  iVar2 = papyrus_hw_getreg((papyrus_sess *)dev_id,'\a',&hwst.int_status1);
  if (iVar2 != 0) {
    _dev_err(*(long *)((long)dev_id + 8) + 0x20,"i2c error: %d\n",iVar2);
  }
  iVar2 = papyrus_hw_getreg((papyrus_sess *)dev_id,'\b',&hwst.int_status2);
  if (iVar2 != 0) {
    _dev_err(*(long *)((long)dev_id + 8) + 0x20,"i2c error: %d\n",iVar2);
  }
  _dev_info(*(long *)((long)dev_id + 8) + 0x20,"%s: (INT1 = %02x, INT2 = %02x)\n","papyrus_irq",
            hwst.int_status1,hwst.int_status2);
  if ((hwst.int_status2 & 0xfa | hwst.int_status1 & 4) != 0) {
    papyrus_hw_setreg((papyrus_sess *)dev_id,'\x01',*(uint8_t *)((long)dev_id + 0x10));
  }
  if (lVar1 - __stack_chk_guard != 0) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(strcpy,lVar1 - __stack_chk_guard,0);
  }
  return IRQ_HANDLED;
}



bool tcon_is_volatile_reg(device *dev,uint reg)

{
  bool bVar1;
  
  _mcount();
  if (reg < 9) {
    bVar1 = (1 << ((ulong)reg & 0x3f) & 0x111U) == 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



int ebc_tcon_remove(platform_device_conflict *pdev)

{
  _mcount();
  __pm_runtime_disable(&pdev->dev,1);
  return 0;
}



void tcon_image_addr_set(ebc_tcon *tcon,u32 pre_image_addr,u32 cur_image_addr)

{
  _mcount();
  regmap_write(tcon->regmap_base,0x24,pre_image_addr);
  regmap_write(tcon->regmap_base,0x28,cur_image_addr);
  regmap_write(tcon->regmap_base,0x50,1);
  return;
}



void tcon_frame_addr_set(ebc_tcon *tcon,u32 frame_addr)

{
  _mcount();
  regmap_write(tcon->regmap_base,0x58,frame_addr);
  regmap_write(tcon->regmap_base,0x50,1);
  return;
}



int tcon_lut_data_set(ebc_tcon *tcon,uint *lut_data,int frame_count,int lut_32)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  _mcount();
  if ((frame_count < 0x101 || lut_32 != 0) && (frame_count < 0x41 || lut_32 == 0)) {
    lVar4 = 0;
    iVar2 = frame_count << 4;
    if (lut_32 != 0) {
      iVar2 = frame_count << 6;
    }
    while( true ) {
      iVar3 = (int)lVar4;
      if (iVar2 <= iVar3) break;
      puVar1 = lut_data + lVar4;
      lVar4 = lVar4 + 1;
      regmap_write(tcon->regmap_base,iVar3 * 4 + 0x1000,*puVar1);
    }
    regmap_write(tcon->regmap_base,0x50,1);
    iVar2 = 0;
  }
  else {
    _dev_err(tcon->dev,"frame count over flow\n");
    iVar2 = -1;
  }
  return iVar2;
}



void tcon_dsp_mode_set(ebc_tcon *tcon,int update_mode,int display_mode,int three_win_mode,
                      int eink_mode)

{
  _mcount();
  regmap_update_bits_base
            (tcon->regmap_base,8,0x30000000,
             (uint)(display_mode != 0) << 0x1c | (uint)(update_mode != 0) << 0x1d,0,0,0);
  regmap_update_bits_base(tcon->regmap_base,4,0x80,(ulong)(three_win_mode != 0) << 7,0,0,0);
  regmap_update_bits_base(tcon->regmap_base,0,0x2001,(ulong)(eink_mode != 0) << 0xd,0,0,0);
  regmap_write(tcon->regmap_base,0x50,1);
  return;
}



void tcon_frame_start(ebc_tcon *tcon,int frame_total)

{
  _mcount();
  regmap_write(tcon->regmap_base,0x3c,0xd0);
  regmap_update_bits_base(tcon->regmap_base,0,0x3fd,(frame_total - 1U & 0xff) << 2,0,0,0);
  regmap_write(tcon->regmap_base,0x50,1);
  regmap_update_bits_base(tcon->regmap_base,0,1,1,0,0,0);
  return;
}



void tcon_disable(ebc_tcon *tcon)

{
  clk *pcVar1;
  
  _mcount();
  disable_irq(tcon->irq);
  regmap_update_bits_base(tcon->regmap_base,0,0x80000001,0x80000000,0,0,0);
  __pm_runtime_idle(tcon->dev,4);
  pcVar1 = tcon->dclk;
  clk_disable(pcVar1);
  clk_unprepare(pcVar1);
  pcVar1 = tcon->hclk;
  clk_disable(pcVar1);
  clk_unprepare(pcVar1);
  return;
}



int tcon_enable(ebc_tcon *tcon,ebc_panel *panel)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  clk *pcVar5;
  
  _mcount();
  pcVar5 = tcon->hclk;
  iVar3 = clk_prepare(pcVar5);
  if ((iVar3 == 0) && (iVar3 = clk_enable(pcVar5), iVar3 != 0)) {
    clk_unprepare(pcVar5);
  }
  pcVar5 = tcon->dclk;
  iVar3 = clk_prepare(pcVar5);
  if ((iVar3 == 0) && (iVar3 = clk_enable(pcVar5), iVar3 != 0)) {
    clk_unprepare(pcVar5);
  }
  __pm_runtime_resume(tcon->dev,4);
  regmap_write(tcon->regmap_base,0xc,
               (panel->ldl + panel->lel + panel->lsl + panel->lbl & 0xfff) << 0x10 |
               panel->lsl + 2 & 0xff);
  iVar3 = panel->lsl + panel->lbl;
  regmap_write(tcon->regmap_base,0x10,(iVar3 + panel->ldl & 0x7ff) << 0x10 | iVar3 - 1U & 0xff);
  regmap_write(tcon->regmap_base,0x14,
               (panel->fdl + panel->fel + panel->fsl + panel->fbl & 0x7ff) << 0x10 |
               panel->fsl & 0xff);
  uVar1 = panel->fsl + panel->fbl;
  regmap_write(tcon->regmap_base,0x18,(uVar1 + panel->fdl & 0x7ff) << 0x10 | uVar1 & 0xff);
  regmap_write(tcon->regmap_base,0x1c,(panel->height & 0x7ff) << 0x10 | panel->width & 0xfff);
  regmap_write(tcon->regmap_base,0x2c,(uint)*(ushort *)&panel->vir_width | panel->vir_height << 0x10
              );
  regmap_write(tcon->regmap_base,0x30,(panel->height & 0x7ff) << 0x10 | panel->width & 0xfff);
  regmap_write(tcon->regmap_base,0x34,(panel->height & 0x7ff) << 0x10 | panel->width & 0xfff);
  regmap_write(tcon->regmap_base,0x38,
               (panel->fsl + panel->fbl & 0x7ff) << 0x10 | panel->lsl + panel->lbl & 0xfff);
  regmap_write(tcon->regmap_base,0x20,0xf841fc0);
  uVar1 = panel->lsl + panel->gdck_sta;
  uVar2 = panel->panel_16bit;
  if (uVar2 != 0) {
    uVar2 = 0x40;
  }
  regmap_write(tcon->regmap_base,4,
               (uVar1 & 0xff) << 8 | uVar2 | (uVar1 + panel->lgonl & 0x7ff) << 0x10 | 0x80000003);
  regmap_write(tcon->regmap_base,0,(panel->ldl & 0x3ff) << 0x10 | 0x1000);
  uVar4 = 0x88000000;
  if (panel->panel_16bit == 0) {
    uVar4 = 0xc8000000;
  }
  regmap_write(tcon->regmap_base,8,uVar4);
  regmap_write(tcon->regmap_base,0x50,1);
  enable_irq(tcon->irq);
  return 0;
}



// WARNING: Type propagation algorithm not settling

int ebc_tcon_probe(platform_device_conflict *pdev)

{
  device *pdVar1;
  list_head *plVar2;
  undefined8 *puVar3;
  list_head *plVar4;
  list_head *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *pcVar8;
  
  _mcount();
  pdVar1 = &pdev->dev;
  plVar2 = (list_head *)devm_kmalloc(pdVar1,0x70,0x6080c0);
  if (plVar2 == (list_head *)0x0) {
    plVar4 = (list_head *)0xfffffff4;
  }
  else {
    puVar3 = (undefined8 *)platform_get_resource(pdev,0x200,0);
    plVar4 = (list_head *)devm_ioremap_resource(pdVar1,puVar3);
    plVar2->prev = plVar4;
    if (plVar4 < (list_head *)0xfffffffffffff001) {
      *(int *)&plVar2[1].next = ((int)puVar3[1] + 1) - (int)*puVar3;
      ebc_regmap_config.max_register = ((int)puVar3[1] - (int)*puVar3) - 3;
      ebc_regmap_config.name = "rockchip,ebc_tcon";
      plVar4 = (list_head *)__devm_regmap_init_mmio_clk(pdVar1,0,plVar4,&ebc_regmap_config,0,0);
      plVar2[2].prev = plVar4;
      if (plVar4 < (list_head *)0xfffffffffffff001) {
        plVar5 = (list_head *)devm_clk_get(pdVar1,&DAT_0010b91e);
        plVar2[1].prev = plVar5;
        if (plVar5 < (list_head *)0xfffffffffffff001) {
          plVar5 = (list_head *)devm_clk_get(pdVar1,&DAT_0010b941,plVar5);
          plVar2[2].next = plVar5;
          if (plVar5 < (list_head *)0xfffffffffffff001) {
            uVar6 = platform_get_irq(pdev,0,plVar5);
            *(int *)((long)&plVar2[1].next + 4) = (int)uVar6;
            if ((int)uVar6 < 0) {
              _dev_err(pdVar1,"No IRQ resource!\n");
              plVar4 = (list_head *)(ulong)*(uint *)((long)&plVar2[1].next + 4);
              goto LAB_00108f7c;
            }
            irq_modify_status(uVar6,0,0x1000);
            pcVar8 = (pdev->dev).init_name;
            if (pcVar8 == (char *)0x0) {
              pcVar8 = (pdev->dev).kobj.name;
            }
            uVar7 = devm_request_threaded_irq
                              (pdVar1,*(undefined4 *)((long)&plVar2[1].next + 4),tcon_irq_hanlder,0,
                               0,pcVar8,plVar2);
            plVar4 = (list_head *)(uVar7 & 0xffffffff);
            if (-1 < (int)uVar7) {
              plVar2[3].next = (list_head *)tcon_enable;
              plVar2[3].prev = (list_head *)tcon_disable;
              plVar2[4].next = (list_head *)tcon_dsp_mode_set;
              plVar2[4].prev = (list_head *)tcon_image_addr_set;
              plVar2[5].next = (list_head *)tcon_frame_addr_set;
              (pdev->dev).links.consumers.next = plVar2;
              plVar2[5].prev = (list_head *)tcon_lut_data_set;
              plVar4 = (list_head *)0x0;
              plVar2->next = (list_head *)pdVar1;
              plVar2[6].next = (list_head *)tcon_frame_start;
              pm_runtime_enable(pdVar1);
              goto LAB_00108f7c;
            }
            plVar5 = (list_head *)(uVar7 & 0xffffffff);
            pcVar8 = "failed to requeset irq: %d\n";
          }
          else {
            plVar4 = (list_head *)((ulong)plVar5 & 0xffffffff);
            pcVar8 = "failed to get dclk clock: %d\n";
          }
        }
        else {
          plVar4 = (list_head *)((ulong)plVar5 & 0xffffffff);
          pcVar8 = "failed to get hclk clock: %d\n";
        }
        _dev_err(pdVar1,pcVar8,plVar5);
      }
    }
    else {
      plVar4 = (list_head *)((ulong)plVar4 & 0xffffffff);
    }
  }
LAB_00108f7c:
  return (int)plVar4;
}



irqreturn_t tcon_irq_hanlder(int irq,void *dev_id)

{
  uint value;
  long local_8;
  
  _mcount();
  local_8 = __stack_chk_guard;
  regmap_read(*(undefined8 *)((long)dev_id + 0x28),0x3c,&value);
  if ((value >> 1 & 1) != 0) {
    regmap_update_bits_base(*(undefined8 *)((long)dev_id + 0x28),0x3c,0x200,0x200,0,0,0);
    if (*(code **)((long)dev_id + 0x68) != (code *)0x0) {
      (**(code **)((long)dev_id + 0x68))();
    }
  }
  if (local_8 - __stack_chk_guard != 0) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(strcpy,local_8 - __stack_chk_guard,0);
  }
  return IRQ_HANDLED;
}



int eink_tcon_remove(platform_device_conflict *pdev)

{
  _mcount();
  __pm_runtime_disable(&pdev->dev,1);
  return 0;
}



void tcon_image_addr_set(eink_tcon *tcon,u32 pre_image_buf_addr,u32 cur_image_buf_addr,
                        u32 image_process_buf_addr)

{
  _mcount();
  regmap_write(tcon->regmap_base,0xc,pre_image_buf_addr);
  regmap_write(tcon->regmap_base,0x10,cur_image_buf_addr);
  regmap_write(tcon->regmap_base,0x14,image_process_buf_addr);
  return;
}



void tcon_frame_start(eink_tcon *tcon)

{
  _mcount();
  regmap_write(tcon->regmap_base,0,1);
  return;
}



void tcon_disable(eink_tcon *tcon)

{
  clk *pcVar1;
  
  _mcount();
  disable_irq(tcon->irq);
  __pm_runtime_idle(tcon->dev,4);
  pcVar1 = tcon->hclk;
  clk_disable(pcVar1);
  clk_unprepare(pcVar1);
  pcVar1 = tcon->pclk;
  clk_disable(pcVar1);
  clk_unprepare(pcVar1);
  return;
}



int tcon_enable(eink_tcon *tcon,ebc_panel *panel)

{
  int iVar1;
  clk *pcVar2;
  eink_reg_data *peVar3;
  eink_reg_data *peVar4;
  eink_reg_data *peVar5;
  
  _mcount();
  pcVar2 = tcon->pclk;
  iVar1 = clk_prepare(pcVar2);
  if ((iVar1 == 0) && (iVar1 = clk_enable(pcVar2), iVar1 != 0)) {
    clk_unprepare(pcVar2);
  }
  pcVar2 = tcon->hclk;
  iVar1 = clk_prepare(pcVar2);
  if ((iVar1 == 0) && (iVar1 = clk_enable(pcVar2), iVar1 != 0)) {
    clk_unprepare(pcVar2);
  }
  __pm_runtime_resume(tcon->dev,4);
  peVar3 = PANEL_1872x1404_INIT;
  if ((panel->width == 0x4b0) && (peVar3 = PANEL_1200x825_INIT, panel->height != 0x339)) {
    peVar3 = PANEL_1872x1404_INIT;
  }
  peVar4 = peVar3;
  do {
    peVar5 = peVar4 + 1;
    regmap_write(tcon->regmap_base,peVar4->addr,peVar4->value);
    peVar4 = peVar5;
  } while (peVar5 != peVar3 + 0x15);
  enable_irq(tcon->irq);
  return 0;
}



// WARNING: Type propagation algorithm not settling

int eink_tcon_probe(platform_device_conflict *pdev)

{
  device *pdVar1;
  list_head *plVar2;
  undefined8 *puVar3;
  list_head *plVar4;
  list_head *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *pcVar8;
  
  _mcount();
  pdVar1 = &pdev->dev;
  plVar2 = (list_head *)devm_kmalloc(pdVar1,0x58,0x6080c0);
  if (plVar2 == (list_head *)0x0) {
    plVar4 = (list_head *)0xfffffff4;
  }
  else {
    puVar3 = (undefined8 *)platform_get_resource(pdev,0x200,0);
    plVar4 = (list_head *)devm_ioremap_resource(pdVar1,puVar3);
    plVar2->prev = plVar4;
    if (plVar4 < (list_head *)0xfffffffffffff001) {
      *(int *)&plVar2[1].next = ((int)puVar3[1] + 1) - (int)*puVar3;
      eink_regmap_config.max_register = ((int)puVar3[1] - (int)*puVar3) - 3;
      eink_regmap_config.name = "rockchip,eink_tcon";
      plVar4 = (list_head *)__devm_regmap_init_mmio_clk(pdVar1,0,plVar4,&eink_regmap_config,0,0);
      plVar2[2].prev = plVar4;
      if (plVar4 < (list_head *)0xfffffffffffff001) {
        plVar5 = (list_head *)devm_clk_get(pdVar1,&DAT_0010b9b1);
        plVar2[1].prev = plVar5;
        if (plVar5 < (list_head *)0xfffffffffffff001) {
          plVar5 = (list_head *)devm_clk_get(pdVar1,&DAT_0010b9d4,plVar5);
          plVar2[2].next = plVar5;
          if (plVar5 < (list_head *)0xfffffffffffff001) {
            uVar6 = platform_get_irq(pdev,0,plVar5);
            *(int *)((long)&plVar2[1].next + 4) = (int)uVar6;
            if ((int)uVar6 < 0) {
              _dev_err(pdVar1,"No IRQ resource!\n");
              plVar4 = (list_head *)(ulong)*(uint *)((long)&plVar2[1].next + 4);
              goto LAB_00109468;
            }
            irq_modify_status(uVar6,0,0x1000);
            pcVar8 = (pdev->dev).init_name;
            if (pcVar8 == (char *)0x0) {
              pcVar8 = (pdev->dev).kobj.name;
            }
            uVar7 = devm_request_threaded_irq
                              (pdVar1,*(undefined4 *)((long)&plVar2[1].next + 4),tcon_irq_hanlder,0,
                               0,pcVar8,plVar2);
            plVar4 = (list_head *)(uVar7 & 0xffffffff);
            if (-1 < (int)uVar7) {
              plVar2[3].next = (list_head *)tcon_enable;
              plVar2[3].prev = (list_head *)tcon_disable;
              (pdev->dev).links.consumers.next = plVar2;
              plVar4 = (list_head *)0x0;
              plVar2[4].next = (list_head *)tcon_image_addr_set;
              plVar2->next = (list_head *)pdVar1;
              plVar2[4].prev = (list_head *)tcon_frame_start;
              pm_runtime_enable(pdVar1);
              goto LAB_00109468;
            }
            plVar5 = (list_head *)(uVar7 & 0xffffffff);
            pcVar8 = "failed to requeset irq: %d\n";
          }
          else {
            plVar4 = (list_head *)((ulong)plVar5 & 0xffffffff);
            pcVar8 = "failed to get dclk clock: %d\n";
          }
        }
        else {
          plVar4 = (list_head *)((ulong)plVar5 & 0xffffffff);
          pcVar8 = "failed to get hclk clock: %d\n";
        }
        _dev_err(pdVar1,pcVar8,plVar5);
      }
    }
    else {
      plVar4 = (list_head *)((ulong)plVar4 & 0xffffffff);
    }
  }
LAB_00109468:
  return (int)plVar4;
}



irqreturn_t tcon_irq_hanlder(int irq,void *dev_id)

{
  uint value;
  long local_8;
  
  _mcount();
  local_8 = __stack_chk_guard;
  regmap_read(*(undefined8 *)((long)dev_id + 0x28),0x28,&value);
  if ((value & 1) != 0) {
    regmap_update_bits_base(*(undefined8 *)((long)dev_id + 0x28),0x30,1,1,0,0,0);
    if (*(code **)((long)dev_id + 0x50) != (code *)0x0) {
      (**(code **)((long)dev_id + 0x50))();
    }
  }
  if (local_8 - __stack_chk_guard != 0) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(strcpy,local_8 - __stack_chk_guard,0);
  }
  return IRQ_HANDLED;
}



void ebc_exit(void)

{
  platform_driver_unregister(&ebc_driver);
  return;
}



void tps65185_driver_exit(void)

{
  i2c_del_driver(&tps65185_driver);
  return;
}



void ebc_tcon_driver_exit(void)

{
  platform_driver_unregister(&ebc_tcon_driver);
  return;
}



void eink_tcon_driver_exit(void)

{
  platform_driver_unregister(&eink_tcon_driver);
  return;
}



int ebc_init(void)

{
  int iVar1;
  
  iVar1 = __platform_driver_register(&ebc_driver,0);
  return iVar1;
}



int tps65185_driver_init(void)

{
  int iVar1;
  
  _mcount();
  iVar1 = i2c_register_driver(0,&tps65185_driver);
  return iVar1;
}



int ebc_tcon_driver_init(void)

{
  int iVar1;
  
  _mcount();
  iVar1 = __platform_driver_register(&ebc_tcon_driver,0);
  return iVar1;
}



int eink_tcon_driver_init(void)

{
  int iVar1;
  
  _mcount();
  iVar1 = __platform_driver_register(&eink_tcon_driver,0);
  return iVar1;
}


