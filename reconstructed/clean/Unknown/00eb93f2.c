// Function: FUN_00eb93f2
// Address: 00eb93f2
// Size: 1197 bytes
// Class: Unknown

void* FUN_00eb93f2(uint *param_1,int64_t param_2,void*param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *arg1;
  int64_t this_ptr;
  byte bVar5;
  void*puVar6;
  void*puVar7;
  int64_t local_res10;
  int local_70;
  int local_6c;
  uint local_68;
  int64_t local_60;
  uint *local_58;
  void*local_50;
  uint *local_48;
  void*local_40;
  uint *local_38;
  
  local_60 = param_2;
  if (local_res10 != 0) {
    _ZSTD_DDict_dictContent();
    _ZSTD_DDict_dictSize();
  }
  puVar6 = (void*)((uint64_t)(*(int *)(this_ptr + 0x7598) == 0) * 4 + 1);
  local_38 = arg1;
  if (puVar6 <= param_3) {
    bVar5 = 0;
    do {
      while (((void*)((int64_t)&MACH_HEADER.magic + 3) < param_3 &&
             ((*param_1 & 0xfffffff0) == 0x184d2a50))) {
        if (param_3 < &MACH_HEADER.cpusubtype) {
          return (void*)0xffffffffffffffb8;
        }
        if (0x1ffffffe < param_1[1] >> 3) {
          return (void*)0xfffffffffffffff2;
        }
        puVar7 = (void*)((uint64_t)param_1[1] + 8);
        if (param_3 < puVar7) {
          puVar7 = (void*)0xffffffffffffffb8;
        }
        if ((void*)0xffffffffffffff88 < puVar7) {
          return puVar7;
        }
        param_1 = (uint *)((int64_t)param_1 + (int64_t)puVar7);
        param_3 = param_3 + -(int64_t)puVar7;
        if (param_3 < puVar6) goto LAB_00eb9457;
      }
      if (local_res10 == 0) {
        puVar6 = (void*)_ZSTD_decompressBegin_usingDict();
        if ((void*)0xffffffffffffff88 < puVar6) {
          return puVar6;
        }
      }
      else {
        _ZSTD_decompressBegin_usingDDict();
      }
      _ZSTD_checkContinuity();
      if (param_3 < (void*)((uint64_t)(*(int *)(this_ptr + 0x7598) == 0) * 4 + 5)) {
LAB_00eb9583:
        puVar6 = (void*)0xffffffffffffffb8;
      }
      else {
        puVar7 = (void*)FUN_00eb8c3b();
        puVar6 = puVar7;
        if (puVar7 < (void*)0xffffffffffffff89) {
          if (param_3 < puVar7 + 3) goto LAB_00eb9583;
          puVar6 = (void*)FUN_00eb9ec4();
          if (puVar6 < (void*)0xffffffffffffff89) {
            local_58 = (uint *)((int64_t)param_1 + (int64_t)puVar7);
            local_40 = param_3 + -(int64_t)puVar7;
            puVar6 = (void*)_ZSTD_getcBlockSize();
            if (puVar6 < (void*)0xffffffffffffff89) {
              puVar3 = (uint *)(local_60 + (int64_t)local_38);
              local_48 = local_38;
              do {
                puVar7 = local_40 + -3 + -(int64_t)puVar6;
                if (local_40 + -3 < puVar6) goto LAB_00eb9583;
                local_58 = (uint *)((int64_t)local_58 + 3);
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
                  puVar6 = (void*)
                           _ZSTD_decompressBlock_internal
                                     (local_58,(int64_t)puVar4 - (int64_t)local_48,puVar6,1);
                  if ((void*)0xffffffffffffff88 < puVar6) break;
                }
                else if (local_70 == 1) {
                  puVar6 = (void*)(uint64_t)local_68;
                  if ((void*)((int64_t)puVar4 - (int64_t)local_48) < puVar6) {
LAB_00eb983a:
                    puVar6 = (void*)0xffffffffffffffba;
                    break;
                  }
                  if (local_48 == (uint *)0x0) {
                    if (puVar6 != (void*)0x0) {
LAB_00eb9852:
                      puVar6 = (void*)0xffffffffffffffb6;
                      break;
                    }
                    puVar6 = (void*)0x0;
                  }
                  else {
                    _memset(local_58,local_68,(size_t)local_48);
                  }
                }
                else {
                  if (local_70 != 0) {
                    puVar6 = (void*)0xffffffffffffffec;
                    break;
                  }
                  if ((void*)((int64_t)puVar3 - (int64_t)local_48) < puVar6)
                  goto LAB_00eb983a;
                  if (local_48 == (uint *)0x0) {
                    if (puVar6 != (void*)0x0) goto LAB_00eb9852;
                    puVar6 = (void*)0x0;
                  }
                  else {
                    _memmove(local_58,puVar6,(size_t)local_48);
                    puVar6 = local_50;
                  }
                }
                if (*(int *)(this_ptr + 0x75a0) != 0) {
                  _ZSTD_XXH64_update(local_48,puVar6);
                }
                local_48 = (uint *)((int64_t)local_48 + (int64_t)puVar6);
                puVar4 = (uint *)((int64_t)local_58 + (int64_t)local_50);
                local_58 = puVar4;
                if (local_6c != 0) {
                  if ((*(int64_t *)(this_ptr + 0x74e8) != -1) &&
                     (puVar6 = (void*)0xffffffffffffffec,
                     (int64_t)local_48 - (int64_t)local_38 != *(int64_t *)(this_ptr + 0x74e8)))
                  break;
                  puVar6 = local_40;
                  if (*(int *)(this_ptr + 0x7508) != 0) {
                    puVar6 = (void*)0xffffffffffffffea;
                    if ((local_40 < &MACH_HEADER.cputype) ||
                       ((*(int *)(this_ptr + 0x759c) == 0 &&
                        (uVar2 = _ZSTD_XXH64_digest(), *local_58 != uVar2)))) break;
                    puVar4 = local_58 + 1;
                    puVar6 = local_40 + -4;
                  }
                  param_3 = puVar6;
                  param_1 = puVar4;
                  puVar6 = (void*)((int64_t)local_48 - (int64_t)local_38);
                  break;
                }
                puVar6 = (void*)_ZSTD_getcBlockSize(local_48,&local_70);
              } while (puVar6 < (void*)0xffffffffffffff89);
            }
          }
        }
      }
      iVar1 = _ZSTD_getErrorCode();
      if ((bool)(bVar5 & iVar1 == 10)) {
        return (void*)0xffffffffffffffb8;
      }
      if ((void*)0xffffffffffffff88 < puVar6) {
        return puVar6;
      }
      local_38 = (uint *)((int64_t)local_38 + (int64_t)puVar6);
      local_60 = local_60 - (int64_t)puVar6;
      puVar6 = (void*)((uint64_t)(*(int *)(this_ptr + 0x7598) == 0) * 4 + 1);
      bVar5 = 1;
    } while (puVar6 <= param_3);
  }
LAB_00eb9457:
  puVar6 = (void*)0xffffffffffffffb8;
  if (param_3 == (void*)0x0) {
    puVar6 = (void*)((int64_t)local_38 - (int64_t)arg1);
  }
  return puVar6;
}

