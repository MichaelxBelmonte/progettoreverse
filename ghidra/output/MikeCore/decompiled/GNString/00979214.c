// Function: FUN_00979214
// Address: 00979214
// Size: 1176 bytes
// Class: GNString


undefined4 FUN_00979214(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  longlong unaff_RSI;
  void *pvVar5;
  longlong lVar6;
  longlong unaff_RDI;
  size_t sVar7;
  
  bVar1 = *(byte *)(unaff_RDI + 8);
  pvVar4 = (void *)(ulonglong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    pvVar4 = *(void **)(unaff_RDI + 0x10);
  }
  bVar2 = *(byte *)(unaff_RSI + 8);
  if ((bVar2 & 1) == 0) {
    pvVar5 = (void *)(ulonglong)(bVar2 >> 1);
  }
  else {
    pvVar5 = *(void **)(unaff_RSI + 0x10);
  }
  if (pvVar4 == pvVar5) {
    sVar7 = CONCAT31((int3)((uint)param_3 >> 8),1);
    if ((bVar2 & 1) == 0) {
      lVar6 = unaff_RSI + 9;
    }
    else {
      lVar6 = *(longlong *)(unaff_RSI + 0x18);
    }
    if ((bVar1 & 1) == 0) {
      if (pvVar4 != (void *)0x0) {
        pvVar4 = (void *)0x0;
        do {
          if (*(char *)(unaff_RDI + 9 + (longlong)pvVar4) != *(char *)(lVar6 + (longlong)pvVar4)) {
            return 0;
          }
          pvVar4 = (void *)((longlong)pvVar4 + 1);
        } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar4);
      }
    }
    else if ((pvVar4 != (void *)0x0) &&
            (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar4,sVar7), iVar3 != 0)) {
      return 0;
    }
    bVar1 = *(byte *)(unaff_RDI + 0x20);
    pvVar4 = (void *)(ulonglong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      pvVar4 = *(void **)(unaff_RDI + 0x28);
    }
    bVar2 = *(byte *)(unaff_RSI + 0x20);
    if ((bVar2 & 1) == 0) {
      pvVar5 = (void *)(ulonglong)(bVar2 >> 1);
    }
    else {
      pvVar5 = *(void **)(unaff_RSI + 0x28);
    }
    if (pvVar4 == pvVar5) {
      sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
      if ((bVar2 & 1) == 0) {
        lVar6 = unaff_RSI + 0x21;
      }
      else {
        lVar6 = *(longlong *)(unaff_RSI + 0x30);
      }
      if ((bVar1 & 1) == 0) {
        if (pvVar4 != (void *)0x0) {
          pvVar4 = (void *)0x0;
          do {
            if (*(char *)(unaff_RDI + 0x21 + (longlong)pvVar4) !=
                *(char *)(lVar6 + (longlong)pvVar4)) {
              return 0;
            }
            pvVar4 = (void *)((longlong)pvVar4 + 1);
          } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar4);
        }
      }
      else if ((pvVar4 != (void *)0x0) &&
              (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar4,sVar7), iVar3 != 0)) {
        return 0;
      }
      bVar1 = *(byte *)(unaff_RDI + 0x38);
      pvVar4 = (void *)(ulonglong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        pvVar4 = *(void **)(unaff_RDI + 0x40);
      }
      bVar2 = *(byte *)(unaff_RSI + 0x38);
      if ((bVar2 & 1) == 0) {
        pvVar5 = (void *)(ulonglong)(bVar2 >> 1);
      }
      else {
        pvVar5 = *(void **)(unaff_RSI + 0x40);
      }
      if (pvVar4 == pvVar5) {
        sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
        if ((bVar2 & 1) == 0) {
          lVar6 = unaff_RSI + 0x39;
        }
        else {
          lVar6 = *(longlong *)(unaff_RSI + 0x48);
        }
        if ((bVar1 & 1) == 0) {
          if (pvVar4 != (void *)0x0) {
            pvVar4 = (void *)0x0;
            do {
              if (*(char *)(unaff_RDI + 0x39 + (longlong)pvVar4) !=
                  *(char *)(lVar6 + (longlong)pvVar4)) {
                return 0;
              }
              pvVar4 = (void *)((longlong)pvVar4 + 1);
            } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar4);
          }
        }
        else if ((pvVar4 != (void *)0x0) &&
                (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar4,sVar7), iVar3 != 0)) {
          return 0;
        }
        bVar1 = *(byte *)(unaff_RDI + 0x50);
        pvVar4 = (void *)(ulonglong)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          pvVar4 = *(void **)(unaff_RDI + 0x58);
        }
        bVar2 = *(byte *)(unaff_RSI + 0x50);
        if ((bVar2 & 1) == 0) {
          pvVar5 = (void *)(ulonglong)(bVar2 >> 1);
        }
        else {
          pvVar5 = *(void **)(unaff_RSI + 0x58);
        }
        if (pvVar4 == pvVar5) {
          sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
          if ((bVar2 & 1) == 0) {
            lVar6 = unaff_RSI + 0x51;
          }
          else {
            lVar6 = *(longlong *)(unaff_RSI + 0x60);
          }
          if ((bVar1 & 1) == 0) {
            if (pvVar4 != (void *)0x0) {
              pvVar4 = (void *)0x0;
              do {
                if (*(char *)(unaff_RDI + 0x51 + (longlong)pvVar4) !=
                    *(char *)(lVar6 + (longlong)pvVar4)) {
                  return 0;
                }
                pvVar4 = (void *)((longlong)pvVar4 + 1);
              } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar4);
            }
          }
          else if ((pvVar4 != (void *)0x0) &&
                  (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar4,sVar7), iVar3 != 0)) {
            return 0;
          }
          if (*(int *)(unaff_RDI + 0x68) == *(int *)(unaff_RSI + 0x68)) {
            bVar1 = *(byte *)(unaff_RDI + 0x70);
            pvVar4 = (void *)(ulonglong)(bVar1 >> 1);
            if ((bVar1 & 1) != 0) {
              pvVar4 = *(void **)(unaff_RDI + 0x78);
            }
            bVar2 = *(byte *)(unaff_RSI + 0x70);
            if ((bVar2 & 1) == 0) {
              pvVar5 = (void *)(ulonglong)(bVar2 >> 1);
            }
            else {
              pvVar5 = *(void **)(unaff_RSI + 0x78);
            }
            if (pvVar4 == pvVar5) {
              sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
              if ((bVar2 & 1) == 0) {
                lVar6 = unaff_RSI + 0x71;
              }
              else {
                lVar6 = *(longlong *)(unaff_RSI + 0x80);
              }
              if ((bVar1 & 1) == 0) {
                if (pvVar4 != (void *)0x0) {
                  pvVar4 = (void *)0x0;
                  do {
                    if (*(char *)(unaff_RDI + 0x71 + (longlong)pvVar4) !=
                        *(char *)(lVar6 + (longlong)pvVar4)) {
                      return 0;
                    }
                    pvVar4 = (void *)((longlong)pvVar4 + 1);
                  } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar4);
                }
              }
              else if ((pvVar4 != (void *)0x0) &&
                      (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar4,sVar7), iVar3 != 0)) {
                return 0;
              }
              bVar1 = *(byte *)(unaff_RDI + 0x88);
              pvVar4 = (void *)(ulonglong)(bVar1 >> 1);
              if ((bVar1 & 1) != 0) {
                pvVar4 = *(void **)(unaff_RDI + 0x90);
              }
              bVar2 = *(byte *)(unaff_RSI + 0x88);
              if ((bVar2 & 1) == 0) {
                pvVar5 = (void *)(ulonglong)(bVar2 >> 1);
              }
              else {
                pvVar5 = *(void **)(unaff_RSI + 0x90);
              }
              if (pvVar4 == pvVar5) {
                sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
                if ((bVar2 & 1) == 0) {
                  lVar6 = unaff_RSI + 0x89;
                }
                else {
                  lVar6 = *(longlong *)(unaff_RSI + 0x98);
                }
                if ((bVar1 & 1) == 0) {
                  if (pvVar4 != (void *)0x0) {
                    pvVar4 = (void *)0x0;
                    do {
                      if (*(char *)(unaff_RDI + 0x89 + (longlong)pvVar4) !=
                          *(char *)(lVar6 + (longlong)pvVar4)) {
                        return 0;
                      }
                      pvVar4 = (void *)((longlong)pvVar4 + 1);
                    } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar4);
                  }
                }
                else if ((pvVar4 != (void *)0x0) &&
                        (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar4,sVar7), iVar3 != 0)) {
                  return 0;
                }
                bVar1 = *(byte *)(unaff_RDI + 0xa0);
                pvVar4 = (void *)(ulonglong)(bVar1 >> 1);
                if ((bVar1 & 1) != 0) {
                  pvVar4 = *(void **)(unaff_RDI + 0xa8);
                }
                bVar2 = *(byte *)(unaff_RSI + 0xa0);
                if ((bVar2 & 1) == 0) {
                  pvVar5 = (void *)(ulonglong)(bVar2 >> 1);
                }
                else {
                  pvVar5 = *(void **)(unaff_RSI + 0xa8);
                }
                if (pvVar4 == pvVar5) {
                  if ((bVar2 & 1) == 0) {
                    lVar6 = unaff_RSI + 0xa1;
                  }
                  else {
                    lVar6 = *(longlong *)(unaff_RSI + 0xb0);
                  }
                  if ((bVar1 & 1) == 0) {
                    if (pvVar4 != (void *)0x0) {
                      pvVar4 = (void *)0x0;
                      do {
                        if (*(char *)(unaff_RDI + 0xa1 + (longlong)pvVar4) !=
                            *(char *)(lVar6 + (longlong)pvVar4)) {
                          return 0;
                        }
                        pvVar4 = (void *)((longlong)pvVar4 + 1);
                      } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar4);
                    }
                  }
                  else if ((pvVar4 != (void *)0x0) &&
                          (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar4,
                                           CONCAT31((int3)(sVar7 >> 8),1)), iVar3 != 0)) {
                    return 0;
                  }
                  if ((*(int *)(unaff_RDI + 0xb8) == *(int *)(unaff_RSI + 0xb8)) &&
                     (*(char *)(unaff_RDI + 0xbc) == *(char *)(unaff_RSI + 0xbc))) {
                    return CONCAT31((int3)((uint)*(int *)(unaff_RDI + 0xb8) >> 8),
                                    *(char *)(unaff_RDI + 0xbd) == *(char *)(unaff_RSI + 0xbd));
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


