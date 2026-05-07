// Function: FUN_009b34e8
// Address: 009b34e8
// Size: 2227 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_009b34e8(uint64_t param_1,uint64_t param_2,uint32_t param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  uint32_t extraout_var;
  void *pvVar5;
  int64_t arg1;
  int64_t this_ptr;
  void *pvVar6;
  size_t sVar7;
  int64_t lVar8;
  
  bVar1 = *(byte *)(this_ptr + 8);
  pvVar5 = (void *)(uint64_t)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    pvVar5 = *(void **)(this_ptr + 0x10);
  }
  bVar2 = *(byte *)(arg1 + 8);
  if ((bVar2 & 1) == 0) {
    pvVar4 = (void *)(uint64_t)(bVar2 >> 1);
  }
  else {
    pvVar4 = *(void **)(arg1 + 0x10);
  }
  if (pvVar5 == pvVar4) {
    sVar7 = CONCAT31((int3)((uint)param_3 >> 8),1);
    if ((bVar2 & 1) == 0) {
      lVar8 = arg1 + 9;
    }
    else {
      lVar8 = *(int64_t *)(arg1 + 0x18);
    }
    if ((bVar1 & 1) == 0) {
      if (pvVar5 != (void *)0x0) {
        pvVar5 = (void *)0x0;
        do {
          if (*(char *)(this_ptr + 9 + (int64_t)pvVar5) != *(char *)(lVar8 + (int64_t)pvVar5)) {
            return 0;
          }
          pvVar5 = (void *)((int64_t)pvVar5 + 1);
        } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar5);
      }
    }
    else if ((pvVar5 != (void *)0x0) &&
            (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar5,sVar7), iVar3 != 0)) {
      return 0;
    }
    bVar1 = *(byte *)(this_ptr + 0x20);
    pvVar5 = (void *)(uint64_t)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      pvVar5 = *(void **)(this_ptr + 0x28);
    }
    bVar2 = *(byte *)(arg1 + 0x20);
    if ((bVar2 & 1) == 0) {
      pvVar4 = (void *)(uint64_t)(bVar2 >> 1);
    }
    else {
      pvVar4 = *(void **)(arg1 + 0x28);
    }
    if (pvVar5 == pvVar4) {
      sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
      if ((bVar2 & 1) == 0) {
        lVar8 = arg1 + 0x21;
      }
      else {
        lVar8 = *(int64_t *)(arg1 + 0x30);
      }
      if ((bVar1 & 1) == 0) {
        if (pvVar5 != (void *)0x0) {
          pvVar5 = (void *)0x0;
          do {
            if (*(char *)(this_ptr + 0x21 + (int64_t)pvVar5) !=
                *(char *)(lVar8 + (int64_t)pvVar5)) {
              return 0;
            }
            pvVar5 = (void *)((int64_t)pvVar5 + 1);
          } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar5);
        }
      }
      else if ((pvVar5 != (void *)0x0) &&
              (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar5,sVar7), iVar3 != 0)) {
        return 0;
      }
      bVar1 = *(byte *)(this_ptr + 0x38);
      pvVar5 = (void *)(uint64_t)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        pvVar5 = *(void **)(this_ptr + 0x40);
      }
      bVar2 = *(byte *)(arg1 + 0x38);
      if ((bVar2 & 1) == 0) {
        pvVar4 = (void *)(uint64_t)(bVar2 >> 1);
      }
      else {
        pvVar4 = *(void **)(arg1 + 0x40);
      }
      if (pvVar5 == pvVar4) {
        sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
        if ((bVar2 & 1) == 0) {
          lVar8 = arg1 + 0x39;
        }
        else {
          lVar8 = *(int64_t *)(arg1 + 0x48);
        }
        if ((bVar1 & 1) == 0) {
          if (pvVar5 != (void *)0x0) {
            pvVar5 = (void *)0x0;
            do {
              if (*(char *)(this_ptr + 0x39 + (int64_t)pvVar5) !=
                  *(char *)(lVar8 + (int64_t)pvVar5)) {
                return 0;
              }
              pvVar5 = (void *)((int64_t)pvVar5 + 1);
            } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar5);
          }
        }
        else if ((pvVar5 != (void *)0x0) &&
                (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar5,sVar7), iVar3 != 0)) {
          return 0;
        }
        bVar1 = *(byte *)(this_ptr + 0x50);
        pvVar5 = (void *)(uint64_t)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          pvVar5 = *(void **)(this_ptr + 0x58);
        }
        bVar2 = *(byte *)(arg1 + 0x50);
        if ((bVar2 & 1) == 0) {
          pvVar4 = (void *)(uint64_t)(bVar2 >> 1);
        }
        else {
          pvVar4 = *(void **)(arg1 + 0x58);
        }
        if (pvVar5 == pvVar4) {
          sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
          if ((bVar2 & 1) == 0) {
            lVar8 = arg1 + 0x51;
          }
          else {
            lVar8 = *(int64_t *)(arg1 + 0x60);
          }
          if ((bVar1 & 1) == 0) {
            if (pvVar5 != (void *)0x0) {
              pvVar5 = (void *)0x0;
              do {
                if (*(char *)(this_ptr + 0x51 + (int64_t)pvVar5) !=
                    *(char *)(lVar8 + (int64_t)pvVar5)) {
                  return 0;
                }
                pvVar5 = (void *)((int64_t)pvVar5 + 1);
              } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar5);
            }
          }
          else if ((pvVar5 != (void *)0x0) &&
                  (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar5,sVar7), iVar3 != 0)) {
            return 0;
          }
          bVar1 = *(byte *)(this_ptr + 0x68);
          pvVar5 = (void *)(uint64_t)(bVar1 >> 1);
          if ((bVar1 & 1) != 0) {
            pvVar5 = *(void **)(this_ptr + 0x70);
          }
          bVar2 = *(byte *)(arg1 + 0x68);
          if ((bVar2 & 1) == 0) {
            pvVar4 = (void *)(uint64_t)(bVar2 >> 1);
          }
          else {
            pvVar4 = *(void **)(arg1 + 0x70);
          }
          if (pvVar5 == pvVar4) {
            sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
            if ((bVar2 & 1) == 0) {
              lVar8 = arg1 + 0x69;
            }
            else {
              lVar8 = *(int64_t *)(arg1 + 0x78);
            }
            if ((bVar1 & 1) == 0) {
              if (pvVar5 != (void *)0x0) {
                pvVar5 = (void *)0x0;
                do {
                  if (*(char *)(this_ptr + 0x69 + (int64_t)pvVar5) !=
                      *(char *)(lVar8 + (int64_t)pvVar5)) {
                    return 0;
                  }
                  pvVar5 = (void *)((int64_t)pvVar5 + 1);
                } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar5);
              }
            }
            else if ((pvVar5 != (void *)0x0) &&
                    (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar5,sVar7), iVar3 != 0)) {
              return 0;
            }
            bVar1 = *(byte *)(this_ptr + 0x80);
            pvVar5 = (void *)(uint64_t)(bVar1 >> 1);
            if ((bVar1 & 1) != 0) {
              pvVar5 = *(void **)(this_ptr + 0x88);
            }
            bVar2 = *(byte *)(arg1 + 0x80);
            if ((bVar2 & 1) == 0) {
              pvVar4 = (void *)(uint64_t)(bVar2 >> 1);
            }
            else {
              pvVar4 = *(void **)(arg1 + 0x88);
            }
            if (pvVar5 == pvVar4) {
              sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
              if ((bVar2 & 1) == 0) {
                lVar8 = arg1 + 0x81;
              }
              else {
                lVar8 = *(int64_t *)(arg1 + 0x90);
              }
              if ((bVar1 & 1) == 0) {
                if (pvVar5 != (void *)0x0) {
                  pvVar5 = (void *)0x0;
                  do {
                    if (*(char *)(this_ptr + 0x81 + (int64_t)pvVar5) !=
                        *(char *)(lVar8 + (int64_t)pvVar5)) {
                      return 0;
                    }
                    pvVar5 = (void *)((int64_t)pvVar5 + 1);
                  } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar5);
                }
              }
              else if ((pvVar5 != (void *)0x0) &&
                      (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar5,sVar7), iVar3 != 0)) {
                return 0;
              }
              bVar1 = *(byte *)(this_ptr + 0x98);
              pvVar5 = (void *)(uint64_t)(bVar1 >> 1);
              if ((bVar1 & 1) != 0) {
                pvVar5 = *(void **)(this_ptr + 0xa0);
              }
              bVar2 = *(byte *)(arg1 + 0x98);
              if ((bVar2 & 1) == 0) {
                pvVar4 = (void *)(uint64_t)(bVar2 >> 1);
              }
              else {
                pvVar4 = *(void **)(arg1 + 0xa0);
              }
              if (pvVar5 == pvVar4) {
                sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
                if ((bVar2 & 1) == 0) {
                  lVar8 = arg1 + 0x99;
                }
                else {
                  lVar8 = *(int64_t *)(arg1 + 0xa8);
                }
                if ((bVar1 & 1) == 0) {
                  if (pvVar5 != (void *)0x0) {
                    pvVar5 = (void *)0x0;
                    do {
                      if (*(char *)(this_ptr + 0x99 + (int64_t)pvVar5) !=
                          *(char *)(lVar8 + (int64_t)pvVar5)) {
                        return 0;
                      }
                      pvVar5 = (void *)((int64_t)pvVar5 + 1);
                    } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar5);
                  }
                }
                else if ((pvVar5 != (void *)0x0) &&
                        (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar5,sVar7), iVar3 != 0)) {
                  return 0;
                }
                bVar1 = *(byte *)(this_ptr + 0xb0);
                pvVar5 = (void *)(uint64_t)(bVar1 >> 1);
                if ((bVar1 & 1) != 0) {
                  pvVar5 = *(void **)(this_ptr + 0xb8);
                }
                bVar2 = *(byte *)(arg1 + 0xb0);
                if ((bVar2 & 1) == 0) {
                  pvVar4 = (void *)(uint64_t)(bVar2 >> 1);
                }
                else {
                  pvVar4 = *(void **)(arg1 + 0xb8);
                }
                if (pvVar5 == pvVar4) {
                  sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
                  if ((bVar2 & 1) == 0) {
                    lVar8 = arg1 + 0xb1;
                  }
                  else {
                    lVar8 = *(int64_t *)(arg1 + 0xc0);
                  }
                  if ((bVar1 & 1) == 0) {
                    if (pvVar5 != (void *)0x0) {
                      pvVar5 = (void *)0x0;
                      do {
                        if (*(char *)(this_ptr + 0xb1 + (int64_t)pvVar5) !=
                            *(char *)(lVar8 + (int64_t)pvVar5)) {
                          return 0;
                        }
                        pvVar5 = (void *)((int64_t)pvVar5 + 1);
                      } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar5);
                    }
                  }
                  else if ((pvVar5 != (void *)0x0) &&
                          (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar5,sVar7), iVar3 != 0)) {
                    return 0;
                  }
                  bVar1 = *(byte *)(this_ptr + 200);
                  pvVar5 = (void *)(uint64_t)(bVar1 >> 1);
                  if ((bVar1 & 1) != 0) {
                    pvVar5 = *(void **)(this_ptr + 0xd0);
                  }
                  bVar2 = *(byte *)(arg1 + 200);
                  if ((bVar2 & 1) == 0) {
                    pvVar4 = (void *)(uint64_t)(bVar2 >> 1);
                  }
                  else {
                    pvVar4 = *(void **)(arg1 + 0xd0);
                  }
                  if (pvVar5 == pvVar4) {
                    sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
                    if ((bVar2 & 1) == 0) {
                      lVar8 = arg1 + 0xc9;
                    }
                    else {
                      lVar8 = *(int64_t *)(arg1 + 0xd8);
                    }
                    if ((bVar1 & 1) == 0) {
                      if (pvVar5 != (void *)0x0) {
                        pvVar5 = (void *)0x0;
                        do {
                          if (*(char *)(this_ptr + 0xc9 + (int64_t)pvVar5) !=
                              *(char *)(lVar8 + (int64_t)pvVar5)) {
                            return 0;
                          }
                          pvVar5 = (void *)((int64_t)pvVar5 + 1);
                        } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar5);
                      }
                    }
                    else if ((pvVar5 != (void *)0x0) &&
                            (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar5,sVar7), iVar3 != 0)) {
                      return 0;
                    }
                    bVar1 = *(byte *)(this_ptr + 0xe0);
                    pvVar5 = (void *)(uint64_t)(bVar1 >> 1);
                    if ((bVar1 & 1) != 0) {
                      pvVar5 = *(void **)(this_ptr + 0xe8);
                    }
                    bVar2 = *(byte *)(arg1 + 0xe0);
                    if ((bVar2 & 1) == 0) {
                      pvVar4 = (void *)(uint64_t)(bVar2 >> 1);
                    }
                    else {
                      pvVar4 = *(void **)(arg1 + 0xe8);
                    }
                    if (pvVar5 == pvVar4) {
                      sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
                      if ((bVar2 & 1) == 0) {
                        lVar8 = arg1 + 0xe1;
                      }
                      else {
                        lVar8 = *(int64_t *)(arg1 + 0xf0);
                      }
                      if ((bVar1 & 1) == 0) {
                        if (pvVar5 != (void *)0x0) {
                          pvVar5 = (void *)0x0;
                          do {
                            if (*(char *)(this_ptr + 0xe1 + (int64_t)pvVar5) !=
                                *(char *)(lVar8 + (int64_t)pvVar5)) {
                              return 0;
                            }
                            pvVar5 = (void *)((int64_t)pvVar5 + 1);
                          } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar5);
                        }
                      }
                      else if ((pvVar5 != (void *)0x0) &&
                              (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar5,sVar7), iVar3 != 0))
                      {
                        return 0;
                      }
                      bVar1 = *(byte *)(this_ptr + 0xf8);
                      pvVar5 = (void *)(uint64_t)(bVar1 >> 1);
                      if ((bVar1 & 1) != 0) {
                        pvVar5 = *(void **)(this_ptr + 0x100);
                      }
                      bVar2 = *(byte *)(arg1 + 0xf8);
                      if ((bVar2 & 1) == 0) {
                        pvVar4 = (void *)(uint64_t)(bVar2 >> 1);
                      }
                      else {
                        pvVar4 = *(void **)(arg1 + 0x100);
                      }
                      if (pvVar5 == pvVar4) {
                        sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
                        if ((bVar2 & 1) == 0) {
                          lVar8 = arg1 + 0xf9;
                        }
                        else {
                          lVar8 = *(int64_t *)(arg1 + 0x108);
                        }
                        if ((bVar1 & 1) == 0) {
                          if (pvVar5 != (void *)0x0) {
                            pvVar5 = (void *)0x0;
                            do {
                              if (*(char *)(this_ptr + 0xf9 + (int64_t)pvVar5) !=
                                  *(char *)(lVar8 + (int64_t)pvVar5)) {
                                return 0;
                              }
                              pvVar5 = (void *)((int64_t)pvVar5 + 1);
                            } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar5);
                          }
                        }
                        else if ((pvVar5 != (void *)0x0) &&
                                (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar5,sVar7), iVar3 != 0)
                                ) {
                          return 0;
                        }
                        if (*(int *)(this_ptr + 0x110) == *(int *)(arg1 + 0x110)) {
                          bVar1 = *(byte *)(this_ptr + 0x118);
                          pvVar5 = (void *)(uint64_t)(bVar1 >> 1);
                          if ((bVar1 & 1) != 0) {
                            pvVar5 = *(void **)(this_ptr + 0x120);
                          }
                          bVar2 = *(byte *)(arg1 + 0x118);
                          if ((bVar2 & 1) == 0) {
                            pvVar4 = (void *)(uint64_t)(bVar2 >> 1);
                          }
                          else {
                            pvVar4 = *(void **)(arg1 + 0x120);
                          }
                          if (pvVar5 == pvVar4) {
                            sVar7 = CONCAT31((int3)(sVar7 >> 8),1);
                            if ((bVar2 & 1) == 0) {
                              lVar8 = arg1 + 0x119;
                            }
                            else {
                              lVar8 = *(int64_t *)(arg1 + 0x128);
                            }
                            if ((bVar1 & 1) == 0) {
                              if (pvVar5 != (void *)0x0) {
                                pvVar5 = (void *)0x0;
                                do {
                                  if (*(char *)(this_ptr + 0x119 + (int64_t)pvVar5) !=
                                      *(char *)(lVar8 + (int64_t)pvVar5)) {
                                    return 0;
                                  }
                                  pvVar5 = (void *)((int64_t)pvVar5 + 1);
                                } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar5);
                              }
                            }
                            else if ((pvVar5 != (void *)0x0) &&
                                    (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar5,sVar7),
                                    iVar3 != 0)) {
                              return 0;
                            }
                            if ((((*(int64_t *)(this_ptr + 0x130) ==
                                   *(int64_t *)(arg1 + 0x130)) &&
                                 (*(int64_t *)(this_ptr + 0x138) ==
                                  *(int64_t *)(arg1 + 0x138))) &&
                                (*(int *)(this_ptr + 0x140) == *(int *)(arg1 + 0x140))) &&
                               (*(int64_t *)(this_ptr + 0x148) == *(int64_t *)(arg1 + 0x148)
                               )) {
                              bVar1 = *(byte *)(this_ptr + 0x150);
                              pvVar4 = (void *)(uint64_t)(bVar1 >> 1);
                              pvVar5 = pvVar4;
                              if ((bVar1 & 1) != 0) {
                                pvVar5 = *(void **)(this_ptr + 0x158);
                              }
                              bVar2 = *(byte *)(arg1 + 0x150);
                              if ((bVar2 & 1) == 0) {
                                pvVar6 = (void *)(uint64_t)(bVar2 >> 1);
                              }
                              else {
                                pvVar6 = *(void **)(arg1 + 0x158);
                              }
                              if (pvVar5 == pvVar6) {
                                if ((bVar2 & 1) == 0) {
                                  lVar8 = arg1 + 0x151;
                                }
                                else {
                                  lVar8 = *(int64_t *)(arg1 + 0x160);
                                }
                                if ((bVar1 & 1) == 0) {
                                  if (pvVar5 != (void *)0x0) {
                                    pvVar5 = (void *)0x0;
                                    do {
                                      if (*(char *)(this_ptr + 0x151 + (int64_t)pvVar5) !=
                                          *(char *)(lVar8 + (int64_t)pvVar5)) {
                                        return 0;
                                      }
                                      pvVar5 = (void *)((int64_t)pvVar5 + 1);
                                    } while (pvVar4 != pvVar5);
                                  }
                                }
                                else if (pvVar5 != (void *)0x0) {
                                  iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar5,
                                                  CONCAT31((int3)(sVar7 >> 8),1));
                                  pvVar4 = (void *)CONCAT44(extraout_var,iVar3);
                                  if (iVar3 != 0) {
                                    return 0;
                                  }
                                }
                                return CONCAT71((int7)((uint64_t)pvVar4 >> 8),1);
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

