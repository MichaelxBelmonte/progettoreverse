// Function: FUN_00976c80
// Address: 00976c80
// Size: 2139 bytes
// Class: GNFilePath


undefined8 FUN_00976c80(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  undefined4 extraout_var;
  longlong lVar6;
  void *pvVar7;
  longlong unaff_RSI;
  longlong lVar8;
  longlong unaff_RDI;
  void *pvVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  if ((((*(int *)(unaff_RDI + 8) == *(int *)(unaff_RSI + 8)) &&
       (*(int *)(unaff_RDI + 0xc) == *(int *)(unaff_RSI + 0xc))) &&
      (*(int *)(unaff_RDI + 0x10) == *(int *)(unaff_RSI + 0x10))) &&
     (*(int *)(unaff_RDI + 0x14) == *(int *)(unaff_RSI + 0x14))) {
    lVar11 = *(longlong *)(unaff_RDI + 0x18);
    lVar6 = *(longlong *)(unaff_RDI + 0x20) - lVar11;
    if (lVar6 == *(longlong *)(unaff_RSI + 0x20) - *(longlong *)(unaff_RSI + 0x18)) {
      if (lVar11 != *(longlong *)(unaff_RDI + 0x20)) {
        lVar8 = 0;
        do {
          if (*(char *)(lVar11 + lVar8) != *(char *)(*(longlong *)(unaff_RSI + 0x18) + lVar8)) {
            return 0;
          }
          lVar8 = lVar8 + 1;
        } while (lVar6 != lVar8);
      }
      if (((((*(longlong *)(unaff_RDI + 0x30) == *(longlong *)(unaff_RSI + 0x30)) &&
            (*(longlong *)(unaff_RDI + 0x38) == *(longlong *)(unaff_RSI + 0x38))) &&
           ((*(longlong *)(unaff_RDI + 0x40) == *(longlong *)(unaff_RSI + 0x40) &&
            ((*(longlong *)(unaff_RDI + 0x48) == *(longlong *)(unaff_RSI + 0x48) &&
             (*(int *)(unaff_RDI + 0x50) == *(int *)(unaff_RSI + 0x50))))))) &&
          (*(int *)(unaff_RDI + 0x54) == *(int *)(unaff_RSI + 0x54))) &&
         (((((*(char *)(unaff_RDI + 0x58) == *(char *)(unaff_RSI + 0x58) &&
             (*(char *)(unaff_RDI + 0x59) == *(char *)(unaff_RSI + 0x59))) &&
            (*(char *)(unaff_RDI + 0x37d) == *(char *)(unaff_RSI + 0x37d))) &&
           ((*(char *)(unaff_RDI + 0x37d) == '\0' || (cVar3 = FUN_009b3200(), cVar3 != '\0')))) &&
          (*(char *)(unaff_RDI + 0x37e) == *(char *)(unaff_RSI + 0x37e))))) {
        if (*(char *)(unaff_RDI + 0x37e) != '\0') {
          if (*(int *)(unaff_RDI + 0xf8) != *(int *)(unaff_RSI + 0xf8)) {
            return 0;
          }
          lVar11 = *(longlong *)(unaff_RDI + 0x100);
          lVar6 = *(longlong *)(unaff_RDI + 0x108) - lVar11;
          if (lVar6 != *(longlong *)(unaff_RSI + 0x108) - *(longlong *)(unaff_RSI + 0x100)) {
            return 0;
          }
          if (lVar11 != *(longlong *)(unaff_RDI + 0x108)) {
            lVar8 = 0;
            do {
              if (*(char *)(lVar11 + lVar8) != *(char *)(*(longlong *)(unaff_RSI + 0x100) + lVar8))
              {
                return 0;
              }
              lVar8 = lVar8 + 1;
            } while (lVar6 != lVar8);
          }
          if (*(char *)(unaff_RDI + 0x118) != *(char *)(unaff_RSI + 0x118)) {
            return 0;
          }
          if (*(char *)(unaff_RDI + 0x119) != *(char *)(unaff_RSI + 0x119)) {
            return 0;
          }
          if (*(int *)(unaff_RDI + 0x11c) != *(int *)(unaff_RSI + 0x11c)) {
            return 0;
          }
          if (*(int *)(unaff_RDI + 0x120) != *(int *)(unaff_RSI + 0x120)) {
            return 0;
          }
          if (*(int *)(unaff_RDI + 0x124) != *(int *)(unaff_RSI + 0x124)) {
            return 0;
          }
          if (*(char *)(unaff_RDI + 0x128) != *(char *)(unaff_RSI + 0x128)) {
            return 0;
          }
          if (*(char *)(unaff_RDI + 0x129) != *(char *)(unaff_RSI + 0x129)) {
            return 0;
          }
          if (*(int *)(unaff_RDI + 300) != *(int *)(unaff_RSI + 300)) {
            return 0;
          }
          if (*(int *)(unaff_RDI + 0x130) != *(int *)(unaff_RSI + 0x130)) {
            return 0;
          }
          if (*(int *)(unaff_RDI + 0x134) != *(int *)(unaff_RSI + 0x134)) {
            return 0;
          }
          if (*(char *)(unaff_RDI + 0x138) != *(char *)(unaff_RSI + 0x138)) {
            return 0;
          }
          if (*(char *)(unaff_RDI + 0x139) != *(char *)(unaff_RSI + 0x139)) {
            return 0;
          }
          if (*(char *)(unaff_RDI + 0x13a) != *(char *)(unaff_RSI + 0x13a)) {
            return 0;
          }
        }
        if ((*(char *)(unaff_RDI + 0x37f) == *(char *)(unaff_RSI + 0x37f)) &&
           ((*(char *)(unaff_RDI + 0x37f) == '\0' || (cVar3 = FUN_009b3200(), cVar3 != '\0')))) {
          bVar1 = *(byte *)(unaff_RDI + 0x1e0);
          pvVar7 = (void *)(ulonglong)(bVar1 >> 1);
          if ((bVar1 & 1) != 0) {
            pvVar7 = *(void **)(unaff_RDI + 0x1e8);
          }
          bVar2 = *(byte *)(unaff_RSI + 0x1e0);
          if ((bVar2 & 1) == 0) {
            pvVar5 = (void *)(ulonglong)(bVar2 >> 1);
          }
          else {
            pvVar5 = *(void **)(unaff_RSI + 0x1e8);
          }
          if (pvVar7 == pvVar5) {
            if ((bVar2 & 1) == 0) {
              lVar11 = unaff_RSI + 0x1e1;
            }
            else {
              lVar11 = *(longlong *)(unaff_RSI + 0x1f0);
            }
            if ((bVar1 & 1) == 0) {
              if (pvVar7 != (void *)0x0) {
                pvVar7 = (void *)0x0;
                do {
                  if (*(char *)(unaff_RDI + 0x1e1 + (longlong)pvVar7) !=
                      *(char *)(lVar11 + (longlong)pvVar7)) {
                    return 0;
                  }
                  pvVar7 = (void *)((longlong)pvVar7 + 1);
                } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar7);
              }
            }
            else if ((pvVar7 != (void *)0x0) &&
                    (iVar4 = _memcmp((void *)(ulonglong)bVar2,pvVar7,(uint)bVar1), iVar4 != 0)) {
              return 0;
            }
            bVar1 = *(byte *)(unaff_RDI + 0x1f8);
            pvVar7 = (void *)(ulonglong)(bVar1 >> 1);
            if ((bVar1 & 1) != 0) {
              pvVar7 = *(void **)(unaff_RDI + 0x200);
            }
            bVar2 = *(byte *)(unaff_RSI + 0x1f8);
            if ((bVar2 & 1) == 0) {
              pvVar5 = (void *)(ulonglong)(bVar2 >> 1);
            }
            else {
              pvVar5 = *(void **)(unaff_RSI + 0x200);
            }
            if (pvVar7 == pvVar5) {
              if ((bVar2 & 1) == 0) {
                lVar11 = unaff_RSI + 0x1f9;
              }
              else {
                lVar11 = *(longlong *)(unaff_RSI + 0x208);
              }
              if ((bVar1 & 1) == 0) {
                if (pvVar7 != (void *)0x0) {
                  pvVar7 = (void *)0x0;
                  do {
                    if (*(char *)(unaff_RDI + 0x1f9 + (longlong)pvVar7) !=
                        *(char *)(lVar11 + (longlong)pvVar7)) {
                      return 0;
                    }
                    pvVar7 = (void *)((longlong)pvVar7 + 1);
                  } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar7);
                }
              }
              else if ((pvVar7 != (void *)0x0) &&
                      (iVar4 = _memcmp((void *)(ulonglong)bVar2,pvVar7,(uint)bVar1), iVar4 != 0)) {
                return 0;
              }
              bVar1 = *(byte *)(unaff_RDI + 0x210);
              pvVar7 = (void *)(ulonglong)(bVar1 >> 1);
              if ((bVar1 & 1) != 0) {
                pvVar7 = *(void **)(unaff_RDI + 0x218);
              }
              bVar2 = *(byte *)(unaff_RSI + 0x210);
              if ((bVar2 & 1) == 0) {
                pvVar5 = (void *)(ulonglong)(bVar2 >> 1);
              }
              else {
                pvVar5 = *(void **)(unaff_RSI + 0x218);
              }
              if (pvVar7 == pvVar5) {
                if ((bVar2 & 1) == 0) {
                  lVar11 = unaff_RSI + 0x211;
                }
                else {
                  lVar11 = *(longlong *)(unaff_RSI + 0x220);
                }
                if ((bVar1 & 1) == 0) {
                  if (pvVar7 != (void *)0x0) {
                    pvVar7 = (void *)0x0;
                    do {
                      if (*(char *)(unaff_RDI + 0x211 + (longlong)pvVar7) !=
                          *(char *)(lVar11 + (longlong)pvVar7)) {
                        return 0;
                      }
                      pvVar7 = (void *)((longlong)pvVar7 + 1);
                    } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar7);
                  }
                }
                else if ((pvVar7 != (void *)0x0) &&
                        (iVar4 = _memcmp((void *)(ulonglong)bVar2,pvVar7,(uint)bVar1), iVar4 != 0))
                {
                  return 0;
                }
                bVar1 = *(byte *)(unaff_RDI + 0x228);
                pvVar7 = (void *)(ulonglong)(bVar1 >> 1);
                if ((bVar1 & 1) != 0) {
                  pvVar7 = *(void **)(unaff_RDI + 0x230);
                }
                bVar2 = *(byte *)(unaff_RSI + 0x228);
                if ((bVar2 & 1) == 0) {
                  pvVar5 = (void *)(ulonglong)(bVar2 >> 1);
                }
                else {
                  pvVar5 = *(void **)(unaff_RSI + 0x230);
                }
                if (pvVar7 == pvVar5) {
                  if ((bVar2 & 1) == 0) {
                    lVar11 = unaff_RSI + 0x229;
                  }
                  else {
                    lVar11 = *(longlong *)(unaff_RSI + 0x238);
                  }
                  if ((bVar1 & 1) == 0) {
                    if (pvVar7 != (void *)0x0) {
                      pvVar7 = (void *)0x0;
                      do {
                        if (*(char *)(unaff_RDI + 0x229 + (longlong)pvVar7) !=
                            *(char *)(lVar11 + (longlong)pvVar7)) {
                          return 0;
                        }
                        pvVar7 = (void *)((longlong)pvVar7 + 1);
                      } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar7);
                    }
                  }
                  else if ((pvVar7 != (void *)0x0) &&
                          (iVar4 = _memcmp((void *)(ulonglong)bVar2,pvVar7,(uint)bVar1), iVar4 != 0)
                          ) {
                    return 0;
                  }
                  bVar1 = *(byte *)(unaff_RDI + 0x240);
                  pvVar7 = (void *)(ulonglong)(bVar1 >> 1);
                  if ((bVar1 & 1) != 0) {
                    pvVar7 = *(void **)(unaff_RDI + 0x248);
                  }
                  bVar2 = *(byte *)(unaff_RSI + 0x240);
                  if ((bVar2 & 1) == 0) {
                    pvVar5 = (void *)(ulonglong)(bVar2 >> 1);
                  }
                  else {
                    pvVar5 = *(void **)(unaff_RSI + 0x248);
                  }
                  if (pvVar7 == pvVar5) {
                    if ((bVar2 & 1) == 0) {
                      lVar11 = unaff_RSI + 0x241;
                    }
                    else {
                      lVar11 = *(longlong *)(unaff_RSI + 0x250);
                    }
                    if ((bVar1 & 1) == 0) {
                      if (pvVar7 != (void *)0x0) {
                        pvVar7 = (void *)0x0;
                        do {
                          if (*(char *)(unaff_RDI + 0x241 + (longlong)pvVar7) !=
                              *(char *)(lVar11 + (longlong)pvVar7)) {
                            return 0;
                          }
                          pvVar7 = (void *)((longlong)pvVar7 + 1);
                        } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar7);
                      }
                    }
                    else if ((pvVar7 != (void *)0x0) &&
                            (iVar4 = _memcmp((void *)(ulonglong)bVar2,pvVar7,(uint)bVar1),
                            iVar4 != 0)) {
                      return 0;
                    }
                    bVar1 = *(byte *)(unaff_RDI + 600);
                    pvVar7 = (void *)(ulonglong)(bVar1 >> 1);
                    if ((bVar1 & 1) != 0) {
                      pvVar7 = *(void **)(unaff_RDI + 0x260);
                    }
                    bVar2 = *(byte *)(unaff_RSI + 600);
                    if ((bVar2 & 1) == 0) {
                      pvVar5 = (void *)(ulonglong)(bVar2 >> 1);
                    }
                    else {
                      pvVar5 = *(void **)(unaff_RSI + 0x260);
                    }
                    if (pvVar7 == pvVar5) {
                      if ((bVar2 & 1) == 0) {
                        lVar11 = unaff_RSI + 0x259;
                      }
                      else {
                        lVar11 = *(longlong *)(unaff_RSI + 0x268);
                      }
                      if ((bVar1 & 1) == 0) {
                        if (pvVar7 != (void *)0x0) {
                          pvVar7 = (void *)0x0;
                          do {
                            if (*(char *)(unaff_RDI + 0x259 + (longlong)pvVar7) !=
                                *(char *)(lVar11 + (longlong)pvVar7)) {
                              return 0;
                            }
                            pvVar7 = (void *)((longlong)pvVar7 + 1);
                          } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar7);
                        }
                      }
                      else if ((pvVar7 != (void *)0x0) &&
                              (iVar4 = _memcmp((void *)(ulonglong)bVar2,pvVar7,(uint)bVar1),
                              iVar4 != 0)) {
                        return 0;
                      }
                      bVar1 = *(byte *)(unaff_RDI + 0x270);
                      uVar10 = 0;
                      pvVar7 = (void *)(ulonglong)(bVar1 >> 1);
                      if ((bVar1 & 1) != 0) {
                        pvVar7 = *(void **)(unaff_RDI + 0x278);
                      }
                      bVar2 = *(byte *)(unaff_RSI + 0x270);
                      if ((bVar2 & 1) == 0) {
                        pvVar5 = (void *)(ulonglong)(bVar2 >> 1);
                      }
                      else {
                        pvVar5 = *(void **)(unaff_RSI + 0x278);
                      }
                      if (pvVar7 == pvVar5) {
                        if ((bVar2 & 1) == 0) {
                          lVar11 = unaff_RSI + 0x271;
                        }
                        else {
                          lVar11 = *(longlong *)(unaff_RSI + 0x280);
                        }
                        if ((bVar1 & 1) == 0) {
                          if (pvVar7 != (void *)0x0) {
                            pvVar7 = (void *)0x0;
                            do {
                              if (*(char *)(unaff_RDI + 0x271 + (longlong)pvVar7) !=
                                  *(char *)(lVar11 + (longlong)pvVar7)) {
                                return 0;
                              }
                              pvVar7 = (void *)((longlong)pvVar7 + 1);
                            } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar7);
                          }
                        }
                        else if ((pvVar7 != (void *)0x0) &&
                                (iVar4 = _memcmp((void *)(ulonglong)bVar2,pvVar7,(uint)bVar1),
                                iVar4 != 0)) {
                          return 0;
                        }
                        if ((*(char *)(unaff_RDI + 0x387) == *(char *)(unaff_RSI + 0x387)) &&
                           ((*(char *)(unaff_RDI + 0x387) == '\0' ||
                            (cVar3 = FUN_00979214(), cVar3 != '\0')))) {
                          bVar1 = *(byte *)(unaff_RDI + 0x358);
                          pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
                          pvVar7 = pvVar5;
                          if ((bVar1 & 1) != 0) {
                            pvVar7 = *(void **)(unaff_RDI + 0x360);
                          }
                          bVar2 = *(byte *)(unaff_RSI + 0x358);
                          if ((bVar2 & 1) == 0) {
                            pvVar9 = (void *)(ulonglong)(bVar2 >> 1);
                          }
                          else {
                            pvVar9 = *(void **)(unaff_RSI + 0x360);
                          }
                          if (pvVar7 == pvVar9) {
                            if ((bVar2 & 1) == 0) {
                              lVar11 = unaff_RSI + 0x359;
                            }
                            else {
                              lVar11 = *(longlong *)(unaff_RSI + 0x368);
                            }
                            if ((bVar1 & 1) == 0) {
                              if (pvVar7 != (void *)0x0) {
                                pvVar7 = (void *)0x0;
                                do {
                                  if (*(char *)(unaff_RDI + 0x359 + (longlong)pvVar7) !=
                                      *(char *)(lVar11 + (longlong)pvVar7)) {
                                    return 0;
                                  }
                                  pvVar7 = (void *)((longlong)pvVar7 + 1);
                                } while (pvVar5 != pvVar7);
                              }
                            }
                            else if (pvVar7 != (void *)0x0) {
                              iVar4 = _memcmp((void *)(ulonglong)bVar1,pvVar7,
                                              (size_t)CONCAT71((int7)((ulonglong)uVar10 >> 8),1));
                              pvVar5 = (void *)CONCAT44(extraout_var,iVar4);
                              if (iVar4 != 0) {
                                return 0;
                              }
                            }
                            return CONCAT71((int7)((ulonglong)pvVar5 >> 8),1);
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
    }
  }
  return 0;
}


