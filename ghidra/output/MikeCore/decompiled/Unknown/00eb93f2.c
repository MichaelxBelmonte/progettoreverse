// Function: FUN_00eb93f2
// Address: 00eb93f2
// Size: 1197 bytes
// Class: Unknown


undefined1 * FUN_00eb93f2(uint *param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *unaff_RSI;
  longlong unaff_RDI;
  byte bVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong local_res10;
  int local_70;
  int local_6c;
  uint local_68;
  longlong local_60;
  uint *local_58;
  undefined1 *local_50;
  uint *local_48;
  undefined1 *local_40;
  uint *local_38;
  
  local_60 = param_2;
  if (local_res10 != 0) {
    _ZSTD_DDict_dictContent();
    _ZSTD_DDict_dictSize();
  }
  puVar6 = (undefined1 *)((ulonglong)(*(int *)(unaff_RDI + 0x7598) == 0) * 4 + 1);
  local_38 = unaff_RSI;
  if (puVar6 <= param_3) {
    bVar5 = 0;
    do {
      while (((undefined1 *)((longlong)&MACH_HEADER.magic + 3) < param_3 &&
             ((*param_1 & 0xfffffff0) == 0x184d2a50))) {
        if (param_3 < &MACH_HEADER.cpusubtype) {
          return (undefined1 *)0xffffffffffffffb8;
        }
        if (0x1ffffffe < param_1[1] >> 3) {
          return (undefined1 *)0xfffffffffffffff2;
        }
        puVar7 = (undefined1 *)((ulonglong)param_1[1] + 8);
        if (param_3 < puVar7) {
          puVar7 = (undefined1 *)0xffffffffffffffb8;
        }
        if ((undefined1 *)0xffffffffffffff88 < puVar7) {
          return puVar7;
        }
        param_1 = (uint *)((longlong)param_1 + (longlong)puVar7);
        param_3 = param_3 + -(longlong)puVar7;
        if (param_3 < puVar6) goto LAB_00eb9457;
      }
      if (local_res10 == 0) {
        puVar6 = (undefined1 *)_ZSTD_decompressBegin_usingDict();
        if ((undefined1 *)0xffffffffffffff88 < puVar6) {
          return puVar6;
        }
      }
      else {
        _ZSTD_decompressBegin_usingDDict();
      }
      _ZSTD_checkContinuity();
      if (param_3 < (undefined1 *)((ulonglong)(*(int *)(unaff_RDI + 0x7598) == 0) * 4 + 5)) {
LAB_00eb9583:
        puVar6 = (undefined1 *)0xffffffffffffffb8;
      }
      else {
        puVar7 = (undefined1 *)FUN_00eb8c3b();
        puVar6 = puVar7;
        if (puVar7 < (undefined1 *)0xffffffffffffff89) {
          if (param_3 < puVar7 + 3) goto LAB_00eb9583;
          puVar6 = (undefined1 *)FUN_00eb9ec4();
          if (puVar6 < (undefined1 *)0xffffffffffffff89) {
            local_58 = (uint *)((longlong)param_1 + (longlong)puVar7);
            local_40 = param_3 + -(longlong)puVar7;
            puVar6 = (undefined1 *)_ZSTD_getcBlockSize();
            if (puVar6 < (undefined1 *)0xffffffffffffff89) {
              puVar3 = (uint *)(local_60 + (longlong)local_38);
              local_48 = local_38;
              do {
                puVar7 = local_40 + -3 + -(longlong)puVar6;
                if (local_40 + -3 < puVar6) goto LAB_00eb9583;
                local_58 = (uint *)((longlong)local_58 + 3);
                puVar4 = puVar3;
                if (local_58 < puVar3) {
                  puVar4 = local_58;
                }
                if (local_58 < local_48) {
                  puVar4 = puVar3;
                }
                local_50 = puVar6;
                local_40 = puVar7;
                if (local_70 == 2) {
                  puVar6 = (undefined1 *)
                           _ZSTD_decompressBlock_internal
                                     (local_58,(longlong)puVar4 - (longlong)local_48,puVar6,1);
                  if ((undefined1 *)0xffffffffffffff88 < puVar6) break;
                }
                else if (local_70 == 1) {
                  puVar6 = (undefined1 *)(ulonglong)local_68;
                  if ((undefined1 *)((longlong)puVar4 - (longlong)local_48) < puVar6) {
LAB_00eb983a:
                    puVar6 = (undefined1 *)0xffffffffffffffba;
                    break;
                  }
                  if (local_48 == (uint *)0x0) {
                    if (puVar6 != (undefined1 *)0x0) {
LAB_00eb9852:
                      puVar6 = (undefined1 *)0xffffffffffffffb6;
                      break;
                    }
                    puVar6 = (undefined1 *)0x0;
                  }
                  else {
                    _memset(local_58,local_68,(size_t)local_48);
                  }
                }
                else {
                  if (local_70 != 0) {
                    puVar6 = (undefined1 *)0xffffffffffffffec;
                    break;
                  }
                  if ((undefined1 *)((longlong)puVar3 - (longlong)local_48) < puVar6)
                  goto LAB_00eb983a;
                  if (local_48 == (uint *)0x0) {
                    if (puVar6 != (undefined1 *)0x0) goto LAB_00eb9852;
                    puVar6 = (undefined1 *)0x0;
                  }
                  else {
                    _memmove(local_58,puVar6,(size_t)local_48);
                    puVar6 = local_50;
                  }
                }
                if (*(int *)(unaff_RDI + 0x75a0) != 0) {
                  _ZSTD_XXH64_update(local_48,puVar6);
                }
                local_48 = (uint *)((longlong)local_48 + (longlong)puVar6);
                puVar4 = (uint *)((longlong)local_58 + (longlong)local_50);
                local_58 = puVar4;
                if (local_6c != 0) {
                  if ((*(longlong *)(unaff_RDI + 0x74e8) != -1) &&
                     (puVar6 = (undefined1 *)0xffffffffffffffec,
                     (longlong)local_48 - (longlong)local_38 != *(longlong *)(unaff_RDI + 0x74e8)))
                  break;
                  puVar6 = local_40;
                  if (*(int *)(unaff_RDI + 0x7508) != 0) {
                    puVar6 = (undefined1 *)0xffffffffffffffea;
                    if ((local_40 < &MACH_HEADER.cputype) ||
                       ((*(int *)(unaff_RDI + 0x759c) == 0 &&
                        (uVar2 = _ZSTD_XXH64_digest(), *local_58 != uVar2)))) break;
                    puVar4 = local_58 + 1;
                    puVar6 = local_40 + -4;
                  }
                  param_3 = puVar6;
                  param_1 = puVar4;
                  puVar6 = (undefined1 *)((longlong)local_48 - (longlong)local_38);
                  break;
                }
                puVar6 = (undefined1 *)_ZSTD_getcBlockSize(local_48,&local_70);
              } while (puVar6 < (undefined1 *)0xffffffffffffff89);
            }
          }
        }
      }
      iVar1 = _ZSTD_getErrorCode();
      if ((bool)(bVar5 & iVar1 == 10)) {
        return (undefined1 *)0xffffffffffffffb8;
      }
      if ((undefined1 *)0xffffffffffffff88 < puVar6) {
        return puVar6;
      }
      local_38 = (uint *)((longlong)local_38 + (longlong)puVar6);
      local_60 = local_60 - (longlong)puVar6;
      puVar6 = (undefined1 *)((ulonglong)(*(int *)(unaff_RDI + 0x7598) == 0) * 4 + 1);
      bVar5 = 1;
    } while (puVar6 <= param_3);
  }
LAB_00eb9457:
  puVar6 = (undefined1 *)0xffffffffffffffb8;
  if (param_3 == (undefined1 *)0x0) {
    puVar6 = (undefined1 *)((longlong)local_38 - (longlong)unaff_RSI);
  }
  return puVar6;
}


