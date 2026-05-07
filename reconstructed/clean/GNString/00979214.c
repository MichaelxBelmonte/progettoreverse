// Function: FUN_00979214
// Address: 00979214
// Size: 1176 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint32_t FUN_00979214(uint64_t param_1,uint64_t param_2,uint32_t param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  int64_t arg1;
  void *pvVar5;
  int64_t lVar6;
  int64_t this_ptr;
  size_t sVar7;
  
  bVar1 = *(byte *)(this_ptr + 8);
  pvVar4 = (void *)(uint64_t)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    pvVar4 = *(void **)(this_ptr + 0x10);
  }
  bVar2 = *(byte *)(arg1 + 8);
  if ((bVar2 & 1) == 0) {
    pvVar5 = (void *)(uint64_t)(bVar2 >> 1);
  }
  else {
    pvVar5 = *(void **)(arg1 + 0x10);
  }
  if (pvVar4 == pvVar5) {
    sVar7 = CONCAT31((int3)((uint)param_3 >> 8),1);
    if ((bVar2 & 1) == 0) {
      lVar6 = arg1 + 9;
    }
    else {
      lVar6 = *(int64_t *)(arg1 + 0x18);
    }
    if ((bVar1 & 1) == 0) {
      if (pvVar4 != (void *)0x0) {
        pvVar4 = (void *)0x0;
        do {
          if (*(char *)(this_ptr + 9 + (int64_t)pvVar4) != *(char *)(lVar6 + (int64_t)pvVar4)) {
            return 0;
          }
          pvVar4 = (void *)((int64_t)pvVar4 + 1);
        } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar4);
      }
    }
    else if ((pvVar4 != (void *)0x0) &&
            (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar4,sVar7), iVar3 != 0)) {
      return 0;
    }
    bVar1 = *(byte *)(this_ptr + 0x20);
    pvVar4 = (void *)(uint64_t)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      pvVar4 = *(void **)(this_ptr + 0x28);
    }
    bVar2 = *(byte *)(arg1 + 0x20);
    if ((bVar2 & 1) == 0) {
      pvVar5 = (void *)(uint64_t)(bVar2 >> 1);
    }
    else {
      pvVar5 = *(void **)(arg1 + 0x28);
    }
    if (pvVar4 == pvVar5) {
      sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
      if ((bVar2 & 1) == 0) {
        lVar6 = arg1 + 0x21;
      }
      else {
        lVar6 = *(int64_t *)(arg1 + 0x30);
      }
      if ((bVar1 & 1) == 0) {
        if (pvVar4 != (void *)0x0) {
          pvVar4 = (void *)0x0;
          do {
            if (*(char *)(this_ptr + 0x21 + (int64_t)pvVar4) !=
                *(char *)(lVar6 + (int64_t)pvVar4)) {
              return 0;
            }
            pvVar4 = (void *)((int64_t)pvVar4 + 1);
          } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar4);
        }
      }
      else if ((pvVar4 != (void *)0x0) &&
              (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar4,sVar7), iVar3 != 0)) {
        return 0;
      }
      bVar1 = *(byte *)(this_ptr + 0x38);
      pvVar4 = (void *)(uint64_t)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        pvVar4 = *(void **)(this_ptr + 0x40);
      }
      bVar2 = *(byte *)(arg1 + 0x38);
      if ((bVar2 & 1) == 0) {
        pvVar5 = (void *)(uint64_t)(bVar2 >> 1);
      }
      else {
        pvVar5 = *(void **)(arg1 + 0x40);
      }
      if (pvVar4 == pvVar5) {
        sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
        if ((bVar2 & 1) == 0) {
          lVar6 = arg1 + 0x39;
        }
        else {
          lVar6 = *(int64_t *)(arg1 + 0x48);
        }
        if ((bVar1 & 1) == 0) {
          if (pvVar4 != (void *)0x0) {
            pvVar4 = (void *)0x0;
            do {
              if (*(char *)(this_ptr + 0x39 + (int64_t)pvVar4) !=
                  *(char *)(lVar6 + (int64_t)pvVar4)) {
                return 0;
              }
              pvVar4 = (void *)((int64_t)pvVar4 + 1);
            } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar4);
          }
        }
        else if ((pvVar4 != (void *)0x0) &&
                (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar4,sVar7), iVar3 != 0)) {
          return 0;
        }
        bVar1 = *(byte *)(this_ptr + 0x50);
        pvVar4 = (void *)(uint64_t)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          pvVar4 = *(void **)(this_ptr + 0x58);
        }
        bVar2 = *(byte *)(arg1 + 0x50);
        if ((bVar2 & 1) == 0) {
          pvVar5 = (void *)(uint64_t)(bVar2 >> 1);
        }
        else {
          pvVar5 = *(void **)(arg1 + 0x58);
        }
        if (pvVar4 == pvVar5) {
          sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
          if ((bVar2 & 1) == 0) {
            lVar6 = arg1 + 0x51;
          }
          else {
            lVar6 = *(int64_t *)(arg1 + 0x60);
          }
          if ((bVar1 & 1) == 0) {
            if (pvVar4 != (void *)0x0) {
              pvVar4 = (void *)0x0;
              do {
                if (*(char *)(this_ptr + 0x51 + (int64_t)pvVar4) !=
                    *(char *)(lVar6 + (int64_t)pvVar4)) {
                  return 0;
                }
                pvVar4 = (void *)((int64_t)pvVar4 + 1);
              } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar4);
            }
          }
          else if ((pvVar4 != (void *)0x0) &&
                  (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar4,sVar7), iVar3 != 0)) {
            return 0;
          }
          if (*(int *)(this_ptr + 0x68) == *(int *)(arg1 + 0x68)) {
            bVar1 = *(byte *)(this_ptr + 0x70);
            pvVar4 = (void *)(uint64_t)(bVar1 >> 1);
            if ((bVar1 & 1) != 0) {
              pvVar4 = *(void **)(this_ptr + 0x78);
            }
            bVar2 = *(byte *)(arg1 + 0x70);
            if ((bVar2 & 1) == 0) {
              pvVar5 = (void *)(uint64_t)(bVar2 >> 1);
            }
            else {
              pvVar5 = *(void **)(arg1 + 0x78);
            }
            if (pvVar4 == pvVar5) {
              sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
              if ((bVar2 & 1) == 0) {
                lVar6 = arg1 + 0x71;
              }
              else {
                lVar6 = *(int64_t *)(arg1 + 0x80);
              }
              if ((bVar1 & 1) == 0) {
                if (pvVar4 != (void *)0x0) {
                  pvVar4 = (void *)0x0;
                  do {
                    if (*(char *)(this_ptr + 0x71 + (int64_t)pvVar4) !=
                        *(char *)(lVar6 + (int64_t)pvVar4)) {
                      return 0;
                    }
                    pvVar4 = (void *)((int64_t)pvVar4 + 1);
                  } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar4);
                }
              }
              else if ((pvVar4 != (void *)0x0) &&
                      (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar4,sVar7), iVar3 != 0)) {
                return 0;
              }
              bVar1 = *(byte *)(this_ptr + 0x88);
              pvVar4 = (void *)(uint64_t)(bVar1 >> 1);
              if ((bVar1 & 1) != 0) {
                pvVar4 = *(void **)(this_ptr + 0x90);
              }
              bVar2 = *(byte *)(arg1 + 0x88);
              if ((bVar2 & 1) == 0) {
                pvVar5 = (void *)(uint64_t)(bVar2 >> 1);
              }
              else {
                pvVar5 = *(void **)(arg1 + 0x90);
              }
              if (pvVar4 == pvVar5) {
                sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
                if ((bVar2 & 1) == 0) {
                  lVar6 = arg1 + 0x89;
                }
                else {
                  lVar6 = *(int64_t *)(arg1 + 0x98);
                }
                if ((bVar1 & 1) == 0) {
                  if (pvVar4 != (void *)0x0) {
                    pvVar4 = (void *)0x0;
                    do {
                      if (*(char *)(this_ptr + 0x89 + (int64_t)pvVar4) !=
                          *(char *)(lVar6 + (int64_t)pvVar4)) {
                        return 0;
                      }
                      pvVar4 = (void *)((int64_t)pvVar4 + 1);
                    } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar4);
                  }
                }
                else if ((pvVar4 != (void *)0x0) &&
                        (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar4,sVar7), iVar3 != 0)) {
                  return 0;
                }
                bVar1 = *(byte *)(this_ptr + 0xa0);
                pvVar4 = (void *)(uint64_t)(bVar1 >> 1);
                if ((bVar1 & 1) != 0) {
                  pvVar4 = *(void **)(this_ptr + 0xa8);
                }
                bVar2 = *(byte *)(arg1 + 0xa0);
                if ((bVar2 & 1) == 0) {
                  pvVar5 = (void *)(uint64_t)(bVar2 >> 1);
                }
                else {
                  pvVar5 = *(void **)(arg1 + 0xa8);
                }
                if (pvVar4 == pvVar5) {
                  if ((bVar2 & 1) == 0) {
                    lVar6 = arg1 + 0xa1;
                  }
                  else {
                    lVar6 = *(int64_t *)(arg1 + 0xb0);
                  }
                  if ((bVar1 & 1) == 0) {
                    if (pvVar4 != (void *)0x0) {
                      pvVar4 = (void *)0x0;
                      do {
                        if (*(char *)(this_ptr + 0xa1 + (int64_t)pvVar4) !=
                            *(char *)(lVar6 + (int64_t)pvVar4)) {
                          return 0;
                        }
                        pvVar4 = (void *)((int64_t)pvVar4 + 1);
                      } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar4);
                    }
                  }
                  else if ((pvVar4 != (void *)0x0) &&
                          (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar4,
                                           CONCAT31((int3)(sVar7 >> 8),1)), iVar3 != 0)) {
                    return 0;
                  }
                  if ((*(int *)(this_ptr + 0xb8) == *(int *)(arg1 + 0xb8)) &&
                     (*(char *)(this_ptr + 0xbc) == *(char *)(arg1 + 0xbc))) {
                    return CONCAT31((int3)((uint)*(int *)(this_ptr + 0xb8) >> 8),
                                    *(char *)(this_ptr + 0xbd) == *(char *)(arg1 + 0xbd));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

