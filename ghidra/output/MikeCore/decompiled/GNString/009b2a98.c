// Function: FUN_009b2a98
// Address: 009b2a98
// Size: 1432 bytes
// Class: GNString


undefined4 FUN_009b2a98(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  longlong unaff_RSI;
  longlong lVar6;
  void *pvVar7;
  longlong lVar8;
  longlong unaff_RDI;
  size_t sVar9;
  
  bVar1 = *(byte *)(unaff_RDI + 8);
  pvVar4 = (void *)(ulonglong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    pvVar4 = *(void **)(unaff_RDI + 0x10);
  }
  bVar2 = *(byte *)(unaff_RSI + 8);
  if ((bVar2 & 1) == 0) {
    pvVar7 = (void *)(ulonglong)(bVar2 >> 1);
  }
  else {
    pvVar7 = *(void **)(unaff_RSI + 0x10);
  }
  if (pvVar4 == pvVar7) {
    sVar9 = CONCAT31((int3)((uint)param_3 >> 8),1);
    if ((bVar2 & 1) == 0) {
      lVar8 = unaff_RSI + 9;
    }
    else {
      lVar8 = *(longlong *)(unaff_RSI + 0x18);
    }
    if ((bVar1 & 1) == 0) {
      if (pvVar4 != (void *)0x0) {
        pvVar4 = (void *)0x0;
        do {
          if (*(char *)(unaff_RDI + 9 + (longlong)pvVar4) != *(char *)(lVar8 + (longlong)pvVar4)) {
            return 0;
          }
          pvVar4 = (void *)((longlong)pvVar4 + 1);
        } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar4);
      }
    }
    else if ((pvVar4 != (void *)0x0) &&
            (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar4,sVar9), iVar3 != 0)) {
      return 0;
    }
    bVar1 = *(byte *)(unaff_RDI + 0x20);
    pvVar4 = (void *)(ulonglong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      pvVar4 = *(void **)(unaff_RDI + 0x28);
    }
    bVar2 = *(byte *)(unaff_RSI + 0x20);
    if ((bVar2 & 1) == 0) {
      pvVar7 = (void *)(ulonglong)(bVar2 >> 1);
    }
    else {
      pvVar7 = *(void **)(unaff_RSI + 0x28);
    }
    if (pvVar4 == pvVar7) {
      sVar9 = CONCAT31((int3)(sVar9 >> 8),1);
      if ((bVar2 & 1) == 0) {
        lVar8 = unaff_RSI + 0x21;
      }
      else {
        lVar8 = *(longlong *)(unaff_RSI + 0x30);
      }
      if ((bVar1 & 1) == 0) {
        if (pvVar4 != (void *)0x0) {
          pvVar4 = (void *)0x0;
          do {
            if (*(char *)(unaff_RDI + 0x21 + (longlong)pvVar4) !=
                *(char *)(lVar8 + (longlong)pvVar4)) {
              return 0;
            }
            pvVar4 = (void *)((longlong)pvVar4 + 1);
          } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar4);
        }
      }
      else if ((pvVar4 != (void *)0x0) &&
              (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar4,sVar9), iVar3 != 0)) {
        return 0;
      }
      if ((*(int *)(unaff_RDI + 0x38) == *(int *)(unaff_RSI + 0x38)) &&
         (*(longlong *)(unaff_RDI + 0x40) == *(longlong *)(unaff_RSI + 0x40))) {
        lVar8 = *(longlong *)(unaff_RDI + 0x48);
        lVar5 = *(longlong *)(unaff_RDI + 0x50) - lVar8;
        if (lVar5 == *(longlong *)(unaff_RSI + 0x50) - *(longlong *)(unaff_RSI + 0x48)) {
          if (lVar8 != *(longlong *)(unaff_RDI + 0x50)) {
            lVar6 = 0;
            do {
              if (*(char *)(lVar8 + lVar6) != *(char *)(*(longlong *)(unaff_RSI + 0x48) + lVar6)) {
                return 0;
              }
              lVar6 = lVar6 + 1;
            } while (lVar5 != lVar6);
          }
          bVar1 = *(byte *)(unaff_RDI + 0x60);
          pvVar4 = (void *)(ulonglong)(bVar1 >> 1);
          if ((bVar1 & 1) != 0) {
            pvVar4 = *(void **)(unaff_RDI + 0x68);
          }
          bVar2 = *(byte *)(unaff_RSI + 0x60);
          if ((bVar2 & 1) == 0) {
            pvVar7 = (void *)(ulonglong)(bVar2 >> 1);
          }
          else {
            pvVar7 = *(void **)(unaff_RSI + 0x68);
          }
          if (pvVar4 == pvVar7) {
            sVar9 = CONCAT31((int3)(sVar9 >> 8),1);
            if ((bVar2 & 1) == 0) {
              lVar8 = unaff_RSI + 0x61;
            }
            else {
              lVar8 = *(longlong *)(unaff_RSI + 0x70);
            }
            if ((bVar1 & 1) == 0) {
              if (pvVar4 != (void *)0x0) {
                pvVar4 = (void *)0x0;
                do {
                  if (*(char *)(unaff_RDI + 0x61 + (longlong)pvVar4) !=
                      *(char *)(lVar8 + (longlong)pvVar4)) {
                    return 0;
                  }
                  pvVar4 = (void *)((longlong)pvVar4 + 1);
                } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar4);
              }
            }
            else if ((pvVar4 != (void *)0x0) &&
                    (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar4,sVar9), iVar3 != 0)) {
              return 0;
            }
            bVar1 = *(byte *)(unaff_RDI + 0x78);
            pvVar4 = (void *)(ulonglong)(bVar1 >> 1);
            if ((bVar1 & 1) != 0) {
              pvVar4 = *(void **)(unaff_RDI + 0x80);
            }
            bVar2 = *(byte *)(unaff_RSI + 0x78);
            if ((bVar2 & 1) == 0) {
              pvVar7 = (void *)(ulonglong)(bVar2 >> 1);
            }
            else {
              pvVar7 = *(void **)(unaff_RSI + 0x80);
            }
            if (pvVar4 == pvVar7) {
              sVar9 = CONCAT31((int3)(sVar9 >> 8),1);
              if ((bVar2 & 1) == 0) {
                lVar8 = unaff_RSI + 0x79;
              }
              else {
                lVar8 = *(longlong *)(unaff_RSI + 0x88);
              }
              if ((bVar1 & 1) == 0) {
                if (pvVar4 != (void *)0x0) {
                  pvVar4 = (void *)0x0;
                  do {
                    if (*(char *)(unaff_RDI + 0x79 + (longlong)pvVar4) !=
                        *(char *)(lVar8 + (longlong)pvVar4)) {
                      return 0;
                    }
                    pvVar4 = (void *)((longlong)pvVar4 + 1);
                  } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar4);
                }
              }
              else if ((pvVar4 != (void *)0x0) &&
                      (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar4,sVar9), iVar3 != 0)) {
                return 0;
              }
              bVar1 = *(byte *)(unaff_RDI + 0x90);
              pvVar4 = (void *)(ulonglong)(bVar1 >> 1);
              if ((bVar1 & 1) != 0) {
                pvVar4 = *(void **)(unaff_RDI + 0x98);
              }
              bVar2 = *(byte *)(unaff_RSI + 0x90);
              if ((bVar2 & 1) == 0) {
                pvVar7 = (void *)(ulonglong)(bVar2 >> 1);
              }
              else {
                pvVar7 = *(void **)(unaff_RSI + 0x98);
              }
              if (pvVar4 == pvVar7) {
                sVar9 = CONCAT31((int3)(sVar9 >> 8),1);
                if ((bVar2 & 1) == 0) {
                  lVar8 = unaff_RSI + 0x91;
                }
                else {
                  lVar8 = *(longlong *)(unaff_RSI + 0xa0);
                }
                if ((bVar1 & 1) == 0) {
                  if (pvVar4 != (void *)0x0) {
                    pvVar4 = (void *)0x0;
                    do {
                      if (*(char *)(unaff_RDI + 0x91 + (longlong)pvVar4) !=
                          *(char *)(lVar8 + (longlong)pvVar4)) {
                        return 0;
                      }
                      pvVar4 = (void *)((longlong)pvVar4 + 1);
                    } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar4);
                  }
                }
                else if ((pvVar4 != (void *)0x0) &&
                        (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar4,sVar9), iVar3 != 0)) {
                  return 0;
                }
                if (*(int *)(unaff_RDI + 0xa8) == *(int *)(unaff_RSI + 0xa8)) {
                  bVar1 = *(byte *)(unaff_RDI + 0xb0);
                  pvVar4 = (void *)(ulonglong)(bVar1 >> 1);
                  if ((bVar1 & 1) != 0) {
                    pvVar4 = *(void **)(unaff_RDI + 0xb8);
                  }
                  bVar2 = *(byte *)(unaff_RSI + 0xb0);
                  if ((bVar2 & 1) == 0) {
                    pvVar7 = (void *)(ulonglong)(bVar2 >> 1);
                  }
                  else {
                    pvVar7 = *(void **)(unaff_RSI + 0xb8);
                  }
                  if (pvVar4 == pvVar7) {
                    sVar9 = CONCAT31((int3)(sVar9 >> 8),1);
                    if ((bVar2 & 1) == 0) {
                      lVar8 = unaff_RSI + 0xb1;
                    }
                    else {
                      lVar8 = *(longlong *)(unaff_RSI + 0xc0);
                    }
                    if ((bVar1 & 1) == 0) {
                      if (pvVar4 != (void *)0x0) {
                        pvVar4 = (void *)0x0;
                        do {
                          if (*(char *)(unaff_RDI + 0xb1 + (longlong)pvVar4) !=
                              *(char *)(lVar8 + (longlong)pvVar4)) {
                            return 0;
                          }
                          pvVar4 = (void *)((longlong)pvVar4 + 1);
                        } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar4);
                      }
                    }
                    else if ((pvVar4 != (void *)0x0) &&
                            (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar4,sVar9), iVar3 != 0)) {
                      return 0;
                    }
                    bVar1 = *(byte *)(unaff_RDI + 200);
                    pvVar4 = (void *)(ulonglong)(bVar1 >> 1);
                    if ((bVar1 & 1) != 0) {
                      pvVar4 = *(void **)(unaff_RDI + 0xd0);
                    }
                    bVar2 = *(byte *)(unaff_RSI + 200);
                    if ((bVar2 & 1) == 0) {
                      pvVar7 = (void *)(ulonglong)(bVar2 >> 1);
                    }
                    else {
                      pvVar7 = *(void **)(unaff_RSI + 0xd0);
                    }
                    if (pvVar4 == pvVar7) {
                      sVar9 = CONCAT31((int3)(sVar9 >> 8),1);
                      if ((bVar2 & 1) == 0) {
                        lVar8 = unaff_RSI + 0xc9;
                      }
                      else {
                        lVar8 = *(longlong *)(unaff_RSI + 0xd8);
                      }
                      if ((bVar1 & 1) == 0) {
                        if (pvVar4 != (void *)0x0) {
                          pvVar4 = (void *)0x0;
                          do {
                            if (*(char *)(unaff_RDI + 0xc9 + (longlong)pvVar4) !=
                                *(char *)(lVar8 + (longlong)pvVar4)) {
                              return 0;
                            }
                            pvVar4 = (void *)((longlong)pvVar4 + 1);
                          } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar4);
                        }
                      }
                      else if ((pvVar4 != (void *)0x0) &&
                              (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar4,sVar9), iVar3 != 0))
                      {
                        return 0;
                      }
                      bVar1 = *(byte *)(unaff_RDI + 0xe0);
                      pvVar4 = (void *)(ulonglong)(bVar1 >> 1);
                      if ((bVar1 & 1) != 0) {
                        pvVar4 = *(void **)(unaff_RDI + 0xe8);
                      }
                      bVar2 = *(byte *)(unaff_RSI + 0xe0);
                      if ((bVar2 & 1) == 0) {
                        pvVar7 = (void *)(ulonglong)(bVar2 >> 1);
                      }
                      else {
                        pvVar7 = *(void **)(unaff_RSI + 0xe8);
                      }
                      if (pvVar4 == pvVar7) {
                        if ((bVar2 & 1) == 0) {
                          lVar8 = unaff_RSI + 0xe1;
                        }
                        else {
                          lVar8 = *(longlong *)(unaff_RSI + 0xf0);
                        }
                        if ((bVar1 & 1) == 0) {
                          if (pvVar4 != (void *)0x0) {
                            pvVar4 = (void *)0x0;
                            do {
                              if (*(char *)(unaff_RDI + 0xe1 + (longlong)pvVar4) !=
                                  *(char *)(lVar8 + (longlong)pvVar4)) {
                                return 0;
                              }
                              pvVar4 = (void *)((longlong)pvVar4 + 1);
                            } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar4);
                          }
                        }
                        else if ((pvVar4 != (void *)0x0) &&
                                (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar4,
                                                 CONCAT31((int3)(sVar9 >> 8),1)), iVar3 != 0)) {
                          return 0;
                        }
                        return CONCAT31((int3)((uint)*(int *)(unaff_RDI + 0xf8) >> 8),
                                        *(int *)(unaff_RDI + 0xf8) == *(int *)(unaff_RSI + 0xf8));
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


