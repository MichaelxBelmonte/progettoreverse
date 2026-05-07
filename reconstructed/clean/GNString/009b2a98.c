// Function: FUN_009b2a98
// Address: 009b2a98
// Size: 1432 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint32_t FUN_009b2a98(uint64_t param_1,uint64_t param_2,uint32_t param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t arg1;
  int64_t lVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t this_ptr;
  size_t sVar9;
  
  bVar1 = *(byte *)(this_ptr + 8);
  pvVar4 = (void *)(uint64_t)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    pvVar4 = *(void **)(this_ptr + 0x10);
  }
  bVar2 = *(byte *)(arg1 + 8);
  if ((bVar2 & 1) == 0) {
    pvVar7 = (void *)(uint64_t)(bVar2 >> 1);
  }
  else {
    pvVar7 = *(void **)(arg1 + 0x10);
  }
  if (pvVar4 == pvVar7) {
    sVar9 = CONCAT31((int3)((uint)param_3 >> 8),1);
    if ((bVar2 & 1) == 0) {
      lVar8 = arg1 + 9;
    }
    else {
      lVar8 = *(int64_t *)(arg1 + 0x18);
    }
    if ((bVar1 & 1) == 0) {
      if (pvVar4 != (void *)0x0) {
        pvVar4 = (void *)0x0;
        do {
          if (*(char *)(this_ptr + 9 + (int64_t)pvVar4) != *(char *)(lVar8 + (int64_t)pvVar4)) {
            return 0;
          }
          pvVar4 = (void *)((int64_t)pvVar4 + 1);
        } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar4);
      }
    }
    else if ((pvVar4 != (void *)0x0) &&
            (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar4,sVar9), iVar3 != 0)) {
      return 0;
    }
    bVar1 = *(byte *)(this_ptr + 0x20);
    pvVar4 = (void *)(uint64_t)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      pvVar4 = *(void **)(this_ptr + 0x28);
    }
    bVar2 = *(byte *)(arg1 + 0x20);
    if ((bVar2 & 1) == 0) {
      pvVar7 = (void *)(uint64_t)(bVar2 >> 1);
    }
    else {
      pvVar7 = *(void **)(arg1 + 0x28);
    }
    if (pvVar4 == pvVar7) {
      sVar9 = CONCAT31((int3)(sVar9 >> 8),1);
      if ((bVar2 & 1) == 0) {
        lVar8 = arg1 + 0x21;
      }
      else {
        lVar8 = *(int64_t *)(arg1 + 0x30);
      }
      if ((bVar1 & 1) == 0) {
        if (pvVar4 != (void *)0x0) {
          pvVar4 = (void *)0x0;
          do {
            if (*(char *)(this_ptr + 0x21 + (int64_t)pvVar4) !=
                *(char *)(lVar8 + (int64_t)pvVar4)) {
              return 0;
            }
            pvVar4 = (void *)((int64_t)pvVar4 + 1);
          } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar4);
        }
      }
      else if ((pvVar4 != (void *)0x0) &&
              (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar4,sVar9), iVar3 != 0)) {
        return 0;
      }
      if ((*(int *)(this_ptr + 0x38) == *(int *)(arg1 + 0x38)) &&
         (*(int64_t *)(this_ptr + 0x40) == *(int64_t *)(arg1 + 0x40))) {
        lVar8 = *(int64_t *)(this_ptr + 0x48);
        lVar5 = *(int64_t *)(this_ptr + 0x50) - lVar8;
        if (lVar5 == *(int64_t *)(arg1 + 0x50) - *(int64_t *)(arg1 + 0x48)) {
          if (lVar8 != *(int64_t *)(this_ptr + 0x50)) {
            lVar6 = 0;
            do {
              if (*(char *)(lVar8 + lVar6) != *(char *)(*(int64_t *)(arg1 + 0x48) + lVar6)) {
                return 0;
              }
              lVar6 = lVar6 + 1;
            } while (lVar5 != lVar6);
          }
          bVar1 = *(byte *)(this_ptr + 0x60);
          pvVar4 = (void *)(uint64_t)(bVar1 >> 1);
          if ((bVar1 & 1) != 0) {
            pvVar4 = *(void **)(this_ptr + 0x68);
          }
          bVar2 = *(byte *)(arg1 + 0x60);
          if ((bVar2 & 1) == 0) {
            pvVar7 = (void *)(uint64_t)(bVar2 >> 1);
          }
          else {
            pvVar7 = *(void **)(arg1 + 0x68);
          }
          if (pvVar4 == pvVar7) {
            sVar9 = CONCAT31((int3)(sVar9 >> 8),1);
            if ((bVar2 & 1) == 0) {
              lVar8 = arg1 + 0x61;
            }
            else {
              lVar8 = *(int64_t *)(arg1 + 0x70);
            }
            if ((bVar1 & 1) == 0) {
              if (pvVar4 != (void *)0x0) {
                pvVar4 = (void *)0x0;
                do {
                  if (*(char *)(this_ptr + 0x61 + (int64_t)pvVar4) !=
                      *(char *)(lVar8 + (int64_t)pvVar4)) {
                    return 0;
                  }
                  pvVar4 = (void *)((int64_t)pvVar4 + 1);
                } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar4);
              }
            }
            else if ((pvVar4 != (void *)0x0) &&
                    (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar4,sVar9), iVar3 != 0)) {
              return 0;
            }
            bVar1 = *(byte *)(this_ptr + 0x78);
            pvVar4 = (void *)(uint64_t)(bVar1 >> 1);
            if ((bVar1 & 1) != 0) {
              pvVar4 = *(void **)(this_ptr + 0x80);
            }
            bVar2 = *(byte *)(arg1 + 0x78);
            if ((bVar2 & 1) == 0) {
              pvVar7 = (void *)(uint64_t)(bVar2 >> 1);
            }
            else {
              pvVar7 = *(void **)(arg1 + 0x80);
            }
            if (pvVar4 == pvVar7) {
              sVar9 = CONCAT31((int3)(sVar9 >> 8),1);
              if ((bVar2 & 1) == 0) {
                lVar8 = arg1 + 0x79;
              }
              else {
                lVar8 = *(int64_t *)(arg1 + 0x88);
              }
              if ((bVar1 & 1) == 0) {
                if (pvVar4 != (void *)0x0) {
                  pvVar4 = (void *)0x0;
                  do {
                    if (*(char *)(this_ptr + 0x79 + (int64_t)pvVar4) !=
                        *(char *)(lVar8 + (int64_t)pvVar4)) {
                      return 0;
                    }
                    pvVar4 = (void *)((int64_t)pvVar4 + 1);
                  } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar4);
                }
              }
              else if ((pvVar4 != (void *)0x0) &&
                      (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar4,sVar9), iVar3 != 0)) {
                return 0;
              }
              bVar1 = *(byte *)(this_ptr + 0x90);
              pvVar4 = (void *)(uint64_t)(bVar1 >> 1);
              if ((bVar1 & 1) != 0) {
                pvVar4 = *(void **)(this_ptr + 0x98);
              }
              bVar2 = *(byte *)(arg1 + 0x90);
              if ((bVar2 & 1) == 0) {
                pvVar7 = (void *)(uint64_t)(bVar2 >> 1);
              }
              else {
                pvVar7 = *(void **)(arg1 + 0x98);
              }
              if (pvVar4 == pvVar7) {
                sVar9 = CONCAT31((int3)(sVar9 >> 8),1);
                if ((bVar2 & 1) == 0) {
                  lVar8 = arg1 + 0x91;
                }
                else {
                  lVar8 = *(int64_t *)(arg1 + 0xa0);
                }
                if ((bVar1 & 1) == 0) {
                  if (pvVar4 != (void *)0x0) {
                    pvVar4 = (void *)0x0;
                    do {
                      if (*(char *)(this_ptr + 0x91 + (int64_t)pvVar4) !=
                          *(char *)(lVar8 + (int64_t)pvVar4)) {
                        return 0;
                      }
                      pvVar4 = (void *)((int64_t)pvVar4 + 1);
                    } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar4);
                  }
                }
                else if ((pvVar4 != (void *)0x0) &&
                        (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar4,sVar9), iVar3 != 0)) {
                  return 0;
                }
                if (*(int *)(this_ptr + 0xa8) == *(int *)(arg1 + 0xa8)) {
                  bVar1 = *(byte *)(this_ptr + 0xb0);
                  pvVar4 = (void *)(uint64_t)(bVar1 >> 1);
                  if ((bVar1 & 1) != 0) {
                    pvVar4 = *(void **)(this_ptr + 0xb8);
                  }
                  bVar2 = *(byte *)(arg1 + 0xb0);
                  if ((bVar2 & 1) == 0) {
                    pvVar7 = (void *)(uint64_t)(bVar2 >> 1);
                  }
                  else {
                    pvVar7 = *(void **)(arg1 + 0xb8);
                  }
                  if (pvVar4 == pvVar7) {
                    sVar9 = CONCAT31((int3)(sVar9 >> 8),1);
                    if ((bVar2 & 1) == 0) {
                      lVar8 = arg1 + 0xb1;
                    }
                    else {
                      lVar8 = *(int64_t *)(arg1 + 0xc0);
                    }
                    if ((bVar1 & 1) == 0) {
                      if (pvVar4 != (void *)0x0) {
                        pvVar4 = (void *)0x0;
                        do {
                          if (*(char *)(this_ptr + 0xb1 + (int64_t)pvVar4) !=
                              *(char *)(lVar8 + (int64_t)pvVar4)) {
                            return 0;
                          }
                          pvVar4 = (void *)((int64_t)pvVar4 + 1);
                        } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar4);
                      }
                    }
                    else if ((pvVar4 != (void *)0x0) &&
                            (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar4,sVar9), iVar3 != 0)) {
                      return 0;
                    }
                    bVar1 = *(byte *)(this_ptr + 200);
                    pvVar4 = (void *)(uint64_t)(bVar1 >> 1);
                    if ((bVar1 & 1) != 0) {
                      pvVar4 = *(void **)(this_ptr + 0xd0);
                    }
                    bVar2 = *(byte *)(arg1 + 200);
                    if ((bVar2 & 1) == 0) {
                      pvVar7 = (void *)(uint64_t)(bVar2 >> 1);
                    }
                    else {
                      pvVar7 = *(void **)(arg1 + 0xd0);
                    }
                    if (pvVar4 == pvVar7) {
                      sVar9 = CONCAT31((int3)(sVar9 >> 8),1);
                      if ((bVar2 & 1) == 0) {
                        lVar8 = arg1 + 0xc9;
                      }
                      else {
                        lVar8 = *(int64_t *)(arg1 + 0xd8);
                      }
                      if ((bVar1 & 1) == 0) {
                        if (pvVar4 != (void *)0x0) {
                          pvVar4 = (void *)0x0;
                          do {
                            if (*(char *)(this_ptr + 0xc9 + (int64_t)pvVar4) !=
                                *(char *)(lVar8 + (int64_t)pvVar4)) {
                              return 0;
                            }
                            pvVar4 = (void *)((int64_t)pvVar4 + 1);
                          } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar4);
                        }
                      }
                      else if ((pvVar4 != (void *)0x0) &&
                              (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar4,sVar9), iVar3 != 0))
                      {
                        return 0;
                      }
                      bVar1 = *(byte *)(this_ptr + 0xe0);
                      pvVar4 = (void *)(uint64_t)(bVar1 >> 1);
                      if ((bVar1 & 1) != 0) {
                        pvVar4 = *(void **)(this_ptr + 0xe8);
                      }
                      bVar2 = *(byte *)(arg1 + 0xe0);
                      if ((bVar2 & 1) == 0) {
                        pvVar7 = (void *)(uint64_t)(bVar2 >> 1);
                      }
                      else {
                        pvVar7 = *(void **)(arg1 + 0xe8);
                      }
                      if (pvVar4 == pvVar7) {
                        if ((bVar2 & 1) == 0) {
                          lVar8 = arg1 + 0xe1;
                        }
                        else {
                          lVar8 = *(int64_t *)(arg1 + 0xf0);
                        }
                        if ((bVar1 & 1) == 0) {
                          if (pvVar4 != (void *)0x0) {
                            pvVar4 = (void *)0x0;
                            do {
                              if (*(char *)(this_ptr + 0xe1 + (int64_t)pvVar4) !=
                                  *(char *)(lVar8 + (int64_t)pvVar4)) {
                                return 0;
                              }
                              pvVar4 = (void *)((int64_t)pvVar4 + 1);
                            } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar4);
                          }
                        }
                        else if ((pvVar4 != (void *)0x0) &&
                                (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar4,
                                                 CONCAT31((int3)(sVar9 >> 8),1)), iVar3 != 0)) {
                          return 0;
                        }
                        return CONCAT31((int3)((uint)*(int *)(this_ptr + 0xf8) >> 8),
                                        *(int *)(this_ptr + 0xf8) == *(int *)(arg1 + 0xf8));
                      }
                    }
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

