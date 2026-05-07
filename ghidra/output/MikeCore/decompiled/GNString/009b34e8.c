// Function: FUN_009b34e8
// Address: 009b34e8
// Size: 2227 bytes
// Class: GNString


undefined8 FUN_009b34e8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  undefined4 extraout_var;
  void *pvVar5;
  longlong unaff_RSI;
  longlong unaff_RDI;
  void *pvVar6;
  size_t sVar7;
  longlong lVar8;
  
  bVar1 = *(byte *)(unaff_RDI + 8);
  pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    pvVar5 = *(void **)(unaff_RDI + 0x10);
  }
  bVar2 = *(byte *)(unaff_RSI + 8);
  if ((bVar2 & 1) == 0) {
    pvVar4 = (void *)(ulonglong)(bVar2 >> 1);
  }
  else {
    pvVar4 = *(void **)(unaff_RSI + 0x10);
  }
  if (pvVar5 == pvVar4) {
    sVar7 = CONCAT31((int3)((uint)param_3 >> 8),1);
    if ((bVar2 & 1) == 0) {
      lVar8 = unaff_RSI + 9;
    }
    else {
      lVar8 = *(longlong *)(unaff_RSI + 0x18);
    }
    if ((bVar1 & 1) == 0) {
      if (pvVar5 != (void *)0x0) {
        pvVar5 = (void *)0x0;
        do {
          if (*(char *)(unaff_RDI + 9 + (longlong)pvVar5) != *(char *)(lVar8 + (longlong)pvVar5)) {
            return 0;
          }
          pvVar5 = (void *)((longlong)pvVar5 + 1);
        } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar5);
      }
    }
    else if ((pvVar5 != (void *)0x0) &&
            (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar5,sVar7), iVar3 != 0)) {
      return 0;
    }
    bVar1 = *(byte *)(unaff_RDI + 0x20);
    pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      pvVar5 = *(void **)(unaff_RDI + 0x28);
    }
    bVar2 = *(byte *)(unaff_RSI + 0x20);
    if ((bVar2 & 1) == 0) {
      pvVar4 = (void *)(ulonglong)(bVar2 >> 1);
    }
    else {
      pvVar4 = *(void **)(unaff_RSI + 0x28);
    }
    if (pvVar5 == pvVar4) {
      sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
      if ((bVar2 & 1) == 0) {
        lVar8 = unaff_RSI + 0x21;
      }
      else {
        lVar8 = *(longlong *)(unaff_RSI + 0x30);
      }
      if ((bVar1 & 1) == 0) {
        if (pvVar5 != (void *)0x0) {
          pvVar5 = (void *)0x0;
          do {
            if (*(char *)(unaff_RDI + 0x21 + (longlong)pvVar5) !=
                *(char *)(lVar8 + (longlong)pvVar5)) {
              return 0;
            }
            pvVar5 = (void *)((longlong)pvVar5 + 1);
          } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar5);
        }
      }
      else if ((pvVar5 != (void *)0x0) &&
              (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar5,sVar7), iVar3 != 0)) {
        return 0;
      }
      bVar1 = *(byte *)(unaff_RDI + 0x38);
      pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        pvVar5 = *(void **)(unaff_RDI + 0x40);
      }
      bVar2 = *(byte *)(unaff_RSI + 0x38);
      if ((bVar2 & 1) == 0) {
        pvVar4 = (void *)(ulonglong)(bVar2 >> 1);
      }
      else {
        pvVar4 = *(void **)(unaff_RSI + 0x40);
      }
      if (pvVar5 == pvVar4) {
        sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
        if ((bVar2 & 1) == 0) {
          lVar8 = unaff_RSI + 0x39;
        }
        else {
          lVar8 = *(longlong *)(unaff_RSI + 0x48);
        }
        if ((bVar1 & 1) == 0) {
          if (pvVar5 != (void *)0x0) {
            pvVar5 = (void *)0x0;
            do {
              if (*(char *)(unaff_RDI + 0x39 + (longlong)pvVar5) !=
                  *(char *)(lVar8 + (longlong)pvVar5)) {
                return 0;
              }
              pvVar5 = (void *)((longlong)pvVar5 + 1);
            } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar5);
          }
        }
        else if ((pvVar5 != (void *)0x0) &&
                (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar5,sVar7), iVar3 != 0)) {
          return 0;
        }
        bVar1 = *(byte *)(unaff_RDI + 0x50);
        pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          pvVar5 = *(void **)(unaff_RDI + 0x58);
        }
        bVar2 = *(byte *)(unaff_RSI + 0x50);
        if ((bVar2 & 1) == 0) {
          pvVar4 = (void *)(ulonglong)(bVar2 >> 1);
        }
        else {
          pvVar4 = *(void **)(unaff_RSI + 0x58);
        }
        if (pvVar5 == pvVar4) {
          sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
          if ((bVar2 & 1) == 0) {
            lVar8 = unaff_RSI + 0x51;
          }
          else {
            lVar8 = *(longlong *)(unaff_RSI + 0x60);
          }
          if ((bVar1 & 1) == 0) {
            if (pvVar5 != (void *)0x0) {
              pvVar5 = (void *)0x0;
              do {
                if (*(char *)(unaff_RDI + 0x51 + (longlong)pvVar5) !=
                    *(char *)(lVar8 + (longlong)pvVar5)) {
                  return 0;
                }
                pvVar5 = (void *)((longlong)pvVar5 + 1);
              } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar5);
            }
          }
          else if ((pvVar5 != (void *)0x0) &&
                  (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar5,sVar7), iVar3 != 0)) {
            return 0;
          }
          bVar1 = *(byte *)(unaff_RDI + 0x68);
          pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
          if ((bVar1 & 1) != 0) {
            pvVar5 = *(void **)(unaff_RDI + 0x70);
          }
          bVar2 = *(byte *)(unaff_RSI + 0x68);
          if ((bVar2 & 1) == 0) {
            pvVar4 = (void *)(ulonglong)(bVar2 >> 1);
          }
          else {
            pvVar4 = *(void **)(unaff_RSI + 0x70);
          }
          if (pvVar5 == pvVar4) {
            sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
            if ((bVar2 & 1) == 0) {
              lVar8 = unaff_RSI + 0x69;
            }
            else {
              lVar8 = *(longlong *)(unaff_RSI + 0x78);
            }
            if ((bVar1 & 1) == 0) {
              if (pvVar5 != (void *)0x0) {
                pvVar5 = (void *)0x0;
                do {
                  if (*(char *)(unaff_RDI + 0x69 + (longlong)pvVar5) !=
                      *(char *)(lVar8 + (longlong)pvVar5)) {
                    return 0;
                  }
                  pvVar5 = (void *)((longlong)pvVar5 + 1);
                } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar5);
              }
            }
            else if ((pvVar5 != (void *)0x0) &&
                    (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar5,sVar7), iVar3 != 0)) {
              return 0;
            }
            bVar1 = *(byte *)(unaff_RDI + 0x80);
            pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
            if ((bVar1 & 1) != 0) {
              pvVar5 = *(void **)(unaff_RDI + 0x88);
            }
            bVar2 = *(byte *)(unaff_RSI + 0x80);
            if ((bVar2 & 1) == 0) {
              pvVar4 = (void *)(ulonglong)(bVar2 >> 1);
            }
            else {
              pvVar4 = *(void **)(unaff_RSI + 0x88);
            }
            if (pvVar5 == pvVar4) {
              sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
              if ((bVar2 & 1) == 0) {
                lVar8 = unaff_RSI + 0x81;
              }
              else {
                lVar8 = *(longlong *)(unaff_RSI + 0x90);
              }
              if ((bVar1 & 1) == 0) {
                if (pvVar5 != (void *)0x0) {
                  pvVar5 = (void *)0x0;
                  do {
                    if (*(char *)(unaff_RDI + 0x81 + (longlong)pvVar5) !=
                        *(char *)(lVar8 + (longlong)pvVar5)) {
                      return 0;
                    }
                    pvVar5 = (void *)((longlong)pvVar5 + 1);
                  } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar5);
                }
              }
              else if ((pvVar5 != (void *)0x0) &&
                      (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar5,sVar7), iVar3 != 0)) {
                return 0;
              }
              bVar1 = *(byte *)(unaff_RDI + 0x98);
              pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
              if ((bVar1 & 1) != 0) {
                pvVar5 = *(void **)(unaff_RDI + 0xa0);
              }
              bVar2 = *(byte *)(unaff_RSI + 0x98);
              if ((bVar2 & 1) == 0) {
                pvVar4 = (void *)(ulonglong)(bVar2 >> 1);
              }
              else {
                pvVar4 = *(void **)(unaff_RSI + 0xa0);
              }
              if (pvVar5 == pvVar4) {
                sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
                if ((bVar2 & 1) == 0) {
                  lVar8 = unaff_RSI + 0x99;
                }
                else {
                  lVar8 = *(longlong *)(unaff_RSI + 0xa8);
                }
                if ((bVar1 & 1) == 0) {
                  if (pvVar5 != (void *)0x0) {
                    pvVar5 = (void *)0x0;
                    do {
                      if (*(char *)(unaff_RDI + 0x99 + (longlong)pvVar5) !=
                          *(char *)(lVar8 + (longlong)pvVar5)) {
                        return 0;
                      }
                      pvVar5 = (void *)((longlong)pvVar5 + 1);
                    } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar5);
                  }
                }
                else if ((pvVar5 != (void *)0x0) &&
                        (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar5,sVar7), iVar3 != 0)) {
                  return 0;
                }
                bVar1 = *(byte *)(unaff_RDI + 0xb0);
                pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
                if ((bVar1 & 1) != 0) {
                  pvVar5 = *(void **)(unaff_RDI + 0xb8);
                }
                bVar2 = *(byte *)(unaff_RSI + 0xb0);
                if ((bVar2 & 1) == 0) {
                  pvVar4 = (void *)(ulonglong)(bVar2 >> 1);
                }
                else {
                  pvVar4 = *(void **)(unaff_RSI + 0xb8);
                }
                if (pvVar5 == pvVar4) {
                  sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
                  if ((bVar2 & 1) == 0) {
                    lVar8 = unaff_RSI + 0xb1;
                  }
                  else {
                    lVar8 = *(longlong *)(unaff_RSI + 0xc0);
                  }
                  if ((bVar1 & 1) == 0) {
                    if (pvVar5 != (void *)0x0) {
                      pvVar5 = (void *)0x0;
                      do {
                        if (*(char *)(unaff_RDI + 0xb1 + (longlong)pvVar5) !=
                            *(char *)(lVar8 + (longlong)pvVar5)) {
                          return 0;
                        }
                        pvVar5 = (void *)((longlong)pvVar5 + 1);
                      } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar5);
                    }
                  }
                  else if ((pvVar5 != (void *)0x0) &&
                          (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar5,sVar7), iVar3 != 0)) {
                    return 0;
                  }
                  bVar1 = *(byte *)(unaff_RDI + 200);
                  pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
                  if ((bVar1 & 1) != 0) {
                    pvVar5 = *(void **)(unaff_RDI + 0xd0);
                  }
                  bVar2 = *(byte *)(unaff_RSI + 200);
                  if ((bVar2 & 1) == 0) {
                    pvVar4 = (void *)(ulonglong)(bVar2 >> 1);
                  }
                  else {
                    pvVar4 = *(void **)(unaff_RSI + 0xd0);
                  }
                  if (pvVar5 == pvVar4) {
                    sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
                    if ((bVar2 & 1) == 0) {
                      lVar8 = unaff_RSI + 0xc9;
                    }
                    else {
                      lVar8 = *(longlong *)(unaff_RSI + 0xd8);
                    }
                    if ((bVar1 & 1) == 0) {
                      if (pvVar5 != (void *)0x0) {
                        pvVar5 = (void *)0x0;
                        do {
                          if (*(char *)(unaff_RDI + 0xc9 + (longlong)pvVar5) !=
                              *(char *)(lVar8 + (longlong)pvVar5)) {
                            return 0;
                          }
                          pvVar5 = (void *)((longlong)pvVar5 + 1);
                        } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar5);
                      }
                    }
                    else if ((pvVar5 != (void *)0x0) &&
                            (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar5,sVar7), iVar3 != 0)) {
                      return 0;
                    }
                    bVar1 = *(byte *)(unaff_RDI + 0xe0);
                    pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
                    if ((bVar1 & 1) != 0) {
                      pvVar5 = *(void **)(unaff_RDI + 0xe8);
                    }
                    bVar2 = *(byte *)(unaff_RSI + 0xe0);
                    if ((bVar2 & 1) == 0) {
                      pvVar4 = (void *)(ulonglong)(bVar2 >> 1);
                    }
                    else {
                      pvVar4 = *(void **)(unaff_RSI + 0xe8);
                    }
                    if (pvVar5 == pvVar4) {
                      sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
                      if ((bVar2 & 1) == 0) {
                        lVar8 = unaff_RSI + 0xe1;
                      }
                      else {
                        lVar8 = *(longlong *)(unaff_RSI + 0xf0);
                      }
                      if ((bVar1 & 1) == 0) {
                        if (pvVar5 != (void *)0x0) {
                          pvVar5 = (void *)0x0;
                          do {
                            if (*(char *)(unaff_RDI + 0xe1 + (longlong)pvVar5) !=
                                *(char *)(lVar8 + (longlong)pvVar5)) {
                              return 0;
                            }
                            pvVar5 = (void *)((longlong)pvVar5 + 1);
                          } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar5);
                        }
                      }
                      else if ((pvVar5 != (void *)0x0) &&
                              (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar5,sVar7), iVar3 != 0))
                      {
                        return 0;
                      }
                      bVar1 = *(byte *)(unaff_RDI + 0xf8);
                      pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
                      if ((bVar1 & 1) != 0) {
                        pvVar5 = *(void **)(unaff_RDI + 0x100);
                      }
                      bVar2 = *(byte *)(unaff_RSI + 0xf8);
                      if ((bVar2 & 1) == 0) {
                        pvVar4 = (void *)(ulonglong)(bVar2 >> 1);
                      }
                      else {
                        pvVar4 = *(void **)(unaff_RSI + 0x100);
                      }
                      if (pvVar5 == pvVar4) {
                        sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
                        if ((bVar2 & 1) == 0) {
                          lVar8 = unaff_RSI + 0xf9;
                        }
                        else {
                          lVar8 = *(longlong *)(unaff_RSI + 0x108);
                        }
                        if ((bVar1 & 1) == 0) {
                          if (pvVar5 != (void *)0x0) {
                            pvVar5 = (void *)0x0;
                            do {
                              if (*(char *)(unaff_RDI + 0xf9 + (longlong)pvVar5) !=
                                  *(char *)(lVar8 + (longlong)pvVar5)) {
                                return 0;
                              }
                              pvVar5 = (void *)((longlong)pvVar5 + 1);
                            } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar5);
                          }
                        }
                        else if ((pvVar5 != (void *)0x0) &&
                                (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar5,sVar7), iVar3 != 0)
                                ) {
                          return 0;
                        }
                        if (*(int *)(unaff_RDI + 0x110) == *(int *)(unaff_RSI + 0x110)) {
                          bVar1 = *(byte *)(unaff_RDI + 0x118);
                          pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
                          if ((bVar1 & 1) != 0) {
                            pvVar5 = *(void **)(unaff_RDI + 0x120);
                          }
                          bVar2 = *(byte *)(unaff_RSI + 0x118);
                          if ((bVar2 & 1) == 0) {
                            pvVar4 = (void *)(ulonglong)(bVar2 >> 1);
                          }
                          else {
                            pvVar4 = *(void **)(unaff_RSI + 0x120);
                          }
                          if (pvVar5 == pvVar4) {
                            sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
                            if ((bVar2 & 1) == 0) {
                              lVar8 = unaff_RSI + 0x119;
                            }
                            else {
                              lVar8 = *(longlong *)(unaff_RSI + 0x128);
                            }
                            if ((bVar1 & 1) == 0) {
                              if (pvVar5 != (void *)0x0) {
                                pvVar5 = (void *)0x0;
                                do {
                                  if (*(char *)(unaff_RDI + 0x119 + (longlong)pvVar5) !=
                                      *(char *)(lVar8 + (longlong)pvVar5)) {
                                    return 0;
                                  }
                                  pvVar5 = (void *)((longlong)pvVar5 + 1);
                                } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar5);
                              }
                            }
                            else if ((pvVar5 != (void *)0x0) &&
                                    (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar5,sVar7),
                                    iVar3 != 0)) {
                              return 0;
                            }
                            if ((((*(longlong *)(unaff_RDI + 0x130) ==
                                   *(longlong *)(unaff_RSI + 0x130)) &&
                                 (*(longlong *)(unaff_RDI + 0x138) ==
                                  *(longlong *)(unaff_RSI + 0x138))) &&
                                (*(int *)(unaff_RDI + 0x140) == *(int *)(unaff_RSI + 0x140))) &&
                               (*(longlong *)(unaff_RDI + 0x148) == *(longlong *)(unaff_RSI + 0x148)
                               )) {
                              bVar1 = *(byte *)(unaff_RDI + 0x150);
                              pvVar4 = (void *)(ulonglong)(bVar1 >> 1);
                              pvVar5 = pvVar4;
                              if ((bVar1 & 1) != 0) {
                                pvVar5 = *(void **)(unaff_RDI + 0x158);
                              }
                              bVar2 = *(byte *)(unaff_RSI + 0x150);
                              if ((bVar2 & 1) == 0) {
                                pvVar6 = (void *)(ulonglong)(bVar2 >> 1);
                              }
                              else {
                                pvVar6 = *(void **)(unaff_RSI + 0x158);
                              }
                              if (pvVar5 == pvVar6) {
                                if ((bVar2 & 1) == 0) {
                                  lVar8 = unaff_RSI + 0x151;
                                }
                                else {
                                  lVar8 = *(longlong *)(unaff_RSI + 0x160);
                                }
                                if ((bVar1 & 1) == 0) {
                                  if (pvVar5 != (void *)0x0) {
                                    pvVar5 = (void *)0x0;
                                    do {
                                      if (*(char *)(unaff_RDI + 0x151 + (longlong)pvVar5) !=
                                          *(char *)(lVar8 + (longlong)pvVar5)) {
                                        return 0;
                                      }
                                      pvVar5 = (void *)((longlong)pvVar5 + 1);
                                    } while (pvVar4 != pvVar5);
                                  }
                                }
                                else if (pvVar5 != (void *)0x0) {
                                  iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar5,
                                                  CONCAT31((int3)(sVar7 >> 8),1));
                                  pvVar4 = (void *)CONCAT44(extraout_var,iVar3);
                                  if (iVar3 != 0) {
                                    return 0;
                                  }
                                }
                                return CONCAT71((int7)((ulonglong)pvVar4 >> 8),1);
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
    }
  }
  return 0;
}


