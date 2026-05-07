// Function: FUN_00976c80
// Address: 00976c80
// Size: 2139 bytes
// Class: GNFilePath

uint64_t FUN_00976c80(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  uint32_t extraout_var;
  int64_t lVar6;
  void *pvVar7;
  int64_t arg1;
  int64_t lVar8;
  int64_t this_ptr;
  void *pvVar9;
  uint64_t uVar10;
  int64_t lVar11;
  
  if ((((*(int *)(this_ptr + 8) == *(int *)(arg1 + 8)) &&
       (*(int *)(this_ptr + 0xc) == *(int *)(arg1 + 0xc))) &&
      (*(int *)(this_ptr + 0x10) == *(int *)(arg1 + 0x10))) &&
     (*(int *)(this_ptr + 0x14) == *(int *)(arg1 + 0x14))) {
    lVar11 = *(int64_t *)(this_ptr + 0x18);
    lVar6 = *(int64_t *)(this_ptr + 0x20) - lVar11;
    if (lVar6 == *(int64_t *)(arg1 + 0x20) - *(int64_t *)(arg1 + 0x18)) {
      if (lVar11 != *(int64_t *)(this_ptr + 0x20)) {
        lVar8 = 0;
        do {
          if (*(char *)(lVar11 + lVar8) != *(char *)(*(int64_t *)(arg1 + 0x18) + lVar8)) {
            return 0;
          }
          lVar8 = lVar8 + 1;
        } while (lVar6 != lVar8);
      }
      if (((((*(int64_t *)(this_ptr + 0x30) == *(int64_t *)(arg1 + 0x30)) &&
            (*(int64_t *)(this_ptr + 0x38) == *(int64_t *)(arg1 + 0x38))) &&
           ((*(int64_t *)(this_ptr + 0x40) == *(int64_t *)(arg1 + 0x40) &&
            ((*(int64_t *)(this_ptr + 0x48) == *(int64_t *)(arg1 + 0x48) &&
             (*(int *)(this_ptr + 0x50) == *(int *)(arg1 + 0x50))))))) &&
          (*(int *)(this_ptr + 0x54) == *(int *)(arg1 + 0x54))) &&
         (((((*(char *)(this_ptr + 0x58) == *(char *)(arg1 + 0x58) &&
             (*(char *)(this_ptr + 0x59) == *(char *)(arg1 + 0x59))) &&
            (*(char *)(this_ptr + 0x37d) == *(char *)(arg1 + 0x37d))) &&
           ((*(char *)(this_ptr + 0x37d) == '\0' || (cVar3 = FUN_009b3200(), cVar3 != '\0')))) &&
          (*(char *)(this_ptr + 0x37e) == *(char *)(arg1 + 0x37e))))) {
        if (*(char *)(this_ptr + 0x37e) != '\0') {
          if (*(int *)(this_ptr + 0xf8) != *(int *)(arg1 + 0xf8)) {
            return 0;
          }
          lVar11 = *(int64_t *)(this_ptr + 0x100);
          lVar6 = *(int64_t *)(this_ptr + 0x108) - lVar11;
          if (lVar6 != *(int64_t *)(arg1 + 0x108) - *(int64_t *)(arg1 + 0x100)) {
            return 0;
          }
          if (lVar11 != *(int64_t *)(this_ptr + 0x108)) {
            lVar8 = 0;
            do {
              if (*(char *)(lVar11 + lVar8) != *(char *)(*(int64_t *)(arg1 + 0x100) + lVar8))
              {
                return 0;
              }
              lVar8 = lVar8 + 1;
            } while (lVar6 != lVar8);
          }
          if (*(char *)(this_ptr + 0x118) != *(char *)(arg1 + 0x118)) {
            return 0;
          }
          if (*(char *)(this_ptr + 0x119) != *(char *)(arg1 + 0x119)) {
            return 0;
          }
          if (*(int *)(this_ptr + 0x11c) != *(int *)(arg1 + 0x11c)) {
            return 0;
          }
          if (*(int *)(this_ptr + 0x120) != *(int *)(arg1 + 0x120)) {
            return 0;
          }
          if (*(int *)(this_ptr + 0x124) != *(int *)(arg1 + 0x124)) {
            return 0;
          }
          if (*(char *)(this_ptr + 0x128) != *(char *)(arg1 + 0x128)) {
            return 0;
          }
          if (*(char *)(this_ptr + 0x129) != *(char *)(arg1 + 0x129)) {
            return 0;
          }
          if (*(int *)(this_ptr + 300) != *(int *)(arg1 + 300)) {
            return 0;
          }
          if (*(int *)(this_ptr + 0x130) != *(int *)(arg1 + 0x130)) {
            return 0;
          }
          if (*(int *)(this_ptr + 0x134) != *(int *)(arg1 + 0x134)) {
            return 0;
          }
          if (*(char *)(this_ptr + 0x138) != *(char *)(arg1 + 0x138)) {
            return 0;
          }
          if (*(char *)(this_ptr + 0x139) != *(char *)(arg1 + 0x139)) {
            return 0;
          }
          if (*(char *)(this_ptr + 0x13a) != *(char *)(arg1 + 0x13a)) {
            return 0;
          }
        }
        if ((*(char *)(this_ptr + 0x37f) == *(char *)(arg1 + 0x37f)) &&
           ((*(char *)(this_ptr + 0x37f) == '\0' || (cVar3 = FUN_009b3200(), cVar3 != '\0')))) {
          bVar1 = *(byte *)(this_ptr + 0x1e0);
          pvVar7 = (void *)(uint64_t)(bVar1 >> 1);
          if ((bVar1 & 1) != 0) {
            pvVar7 = *(void **)(this_ptr + 0x1e8);
          }
          bVar2 = *(byte *)(arg1 + 0x1e0);
          if ((bVar2 & 1) == 0) {
            pvVar5 = (void *)(uint64_t)(bVar2 >> 1);
          }
          else {
            pvVar5 = *(void **)(arg1 + 0x1e8);
          }
          if (pvVar7 == pvVar5) {
            if ((bVar2 & 1) == 0) {
              lVar11 = arg1 + 0x1e1;
            }
            else {
              lVar11 = *(int64_t *)(arg1 + 0x1f0);
            }
            if ((bVar1 & 1) == 0) {
              if (pvVar7 != (void *)0x0) {
                pvVar7 = (void *)0x0;
                do {
                  if (*(char *)(this_ptr + 0x1e1 + (int64_t)pvVar7) !=
                      *(char *)(lVar11 + (int64_t)pvVar7)) {
                    return 0;
                  }
                  pvVar7 = (void *)((int64_t)pvVar7 + 1);
                } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar7);
              }
            }
            else if ((pvVar7 != (void *)0x0) &&
                    (iVar4 = _memcmp((void *)(uint64_t)bVar2,pvVar7,(uint)bVar1), iVar4 != 0)) {
              return 0;
            }
            bVar1 = *(byte *)(this_ptr + 0x1f8);
            pvVar7 = (void *)(uint64_t)(bVar1 >> 1);
            if ((bVar1 & 1) != 0) {
              pvVar7 = *(void **)(this_ptr + 0x200);
            }
            bVar2 = *(byte *)(arg1 + 0x1f8);
            if ((bVar2 & 1) == 0) {
              pvVar5 = (void *)(uint64_t)(bVar2 >> 1);
            }
            else {
              pvVar5 = *(void **)(arg1 + 0x200);
            }
            if (pvVar7 == pvVar5) {
              if ((bVar2 & 1) == 0) {
                lVar11 = arg1 + 0x1f9;
              }
              else {
                lVar11 = *(int64_t *)(arg1 + 0x208);
              }
              if ((bVar1 & 1) == 0) {
                if (pvVar7 != (void *)0x0) {
                  pvVar7 = (void *)0x0;
                  do {
                    if (*(char *)(this_ptr + 0x1f9 + (int64_t)pvVar7) !=
                        *(char *)(lVar11 + (int64_t)pvVar7)) {
                      return 0;
                    }
                    pvVar7 = (void *)((int64_t)pvVar7 + 1);
                  } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar7);
                }
              }
              else if ((pvVar7 != (void *)0x0) &&
                      (iVar4 = _memcmp((void *)(uint64_t)bVar2,pvVar7,(uint)bVar1), iVar4 != 0)) {
                return 0;
              }
              bVar1 = *(byte *)(this_ptr + 0x210);
              pvVar7 = (void *)(uint64_t)(bVar1 >> 1);
              if ((bVar1 & 1) != 0) {
                pvVar7 = *(void **)(this_ptr + 0x218);
              }
              bVar2 = *(byte *)(arg1 + 0x210);
              if ((bVar2 & 1) == 0) {
                pvVar5 = (void *)(uint64_t)(bVar2 >> 1);
              }
              else {
                pvVar5 = *(void **)(arg1 + 0x218);
              }
              if (pvVar7 == pvVar5) {
                if ((bVar2 & 1) == 0) {
                  lVar11 = arg1 + 0x211;
                }
                else {
                  lVar11 = *(int64_t *)(arg1 + 0x220);
                }
                if ((bVar1 & 1) == 0) {
                  if (pvVar7 != (void *)0x0) {
                    pvVar7 = (void *)0x0;
                    do {
                      if (*(char *)(this_ptr + 0x211 + (int64_t)pvVar7) !=
                          *(char *)(lVar11 + (int64_t)pvVar7)) {
                        return 0;
                      }
                      pvVar7 = (void *)((int64_t)pvVar7 + 1);
                    } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar7);
                  }
                }
                else if ((pvVar7 != (void *)0x0) &&
                        (iVar4 = _memcmp((void *)(uint64_t)bVar2,pvVar7,(uint)bVar1), iVar4 != 0))
                {
                  return 0;
                }
                bVar1 = *(byte *)(this_ptr + 0x228);
                pvVar7 = (void *)(uint64_t)(bVar1 >> 1);
                if ((bVar1 & 1) != 0) {
                  pvVar7 = *(void **)(this_ptr + 0x230);
                }
                bVar2 = *(byte *)(arg1 + 0x228);
                if ((bVar2 & 1) == 0) {
                  pvVar5 = (void *)(uint64_t)(bVar2 >> 1);
                }
                else {
                  pvVar5 = *(void **)(arg1 + 0x230);
                }
                if (pvVar7 == pvVar5) {
                  if ((bVar2 & 1) == 0) {
                    lVar11 = arg1 + 0x229;
                  }
                  else {
                    lVar11 = *(int64_t *)(arg1 + 0x238);
                  }
                  if ((bVar1 & 1) == 0) {
                    if (pvVar7 != (void *)0x0) {
                      pvVar7 = (void *)0x0;
                      do {
                        if (*(char *)(this_ptr + 0x229 + (int64_t)pvVar7) !=
                            *(char *)(lVar11 + (int64_t)pvVar7)) {
                          return 0;
                        }
                        pvVar7 = (void *)((int64_t)pvVar7 + 1);
                      } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar7);
                    }
                  }
                  else if ((pvVar7 != (void *)0x0) &&
                          (iVar4 = _memcmp((void *)(uint64_t)bVar2,pvVar7,(uint)bVar1), iVar4 != 0)
                          ) {
                    return 0;
                  }
                  bVar1 = *(byte *)(this_ptr + 0x240);
                  pvVar7 = (void *)(uint64_t)(bVar1 >> 1);
                  if ((bVar1 & 1) != 0) {
                    pvVar7 = *(void **)(this_ptr + 0x248);
                  }
                  bVar2 = *(byte *)(arg1 + 0x240);
                  if ((bVar2 & 1) == 0) {
                    pvVar5 = (void *)(uint64_t)(bVar2 >> 1);
                  }
                  else {
                    pvVar5 = *(void **)(arg1 + 0x248);
                  }
                  if (pvVar7 == pvVar5) {
                    if ((bVar2 & 1) == 0) {
                      lVar11 = arg1 + 0x241;
                    }
                    else {
                      lVar11 = *(int64_t *)(arg1 + 0x250);
                    }
                    if ((bVar1 & 1) == 0) {
                      if (pvVar7 != (void *)0x0) {
                        pvVar7 = (void *)0x0;
                        do {
                          if (*(char *)(this_ptr + 0x241 + (int64_t)pvVar7) !=
                              *(char *)(lVar11 + (int64_t)pvVar7)) {
                            return 0;
                          }
                          pvVar7 = (void *)((int64_t)pvVar7 + 1);
                        } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar7);
                      }
                    }
                    else if ((pvVar7 != (void *)0x0) &&
                            (iVar4 = _memcmp((void *)(uint64_t)bVar2,pvVar7,(uint)bVar1),
                            iVar4 != 0)) {
                      return 0;
                    }
                    bVar1 = *(byte *)(this_ptr + 600);
                    pvVar7 = (void *)(uint64_t)(bVar1 >> 1);
                    if ((bVar1 & 1) != 0) {
                      pvVar7 = *(void **)(this_ptr + 0x260);
                    }
                    bVar2 = *(byte *)(arg1 + 600);
                    if ((bVar2 & 1) == 0) {
                      pvVar5 = (void *)(uint64_t)(bVar2 >> 1);
                    }
                    else {
                      pvVar5 = *(void **)(arg1 + 0x260);
                    }
                    if (pvVar7 == pvVar5) {
                      if ((bVar2 & 1) == 0) {
                        lVar11 = arg1 + 0x259;
                      }
                      else {
                        lVar11 = *(int64_t *)(arg1 + 0x268);
                      }
                      if ((bVar1 & 1) == 0) {
                        if (pvVar7 != (void *)0x0) {
                          pvVar7 = (void *)0x0;
                          do {
                            if (*(char *)(this_ptr + 0x259 + (int64_t)pvVar7) !=
                                *(char *)(lVar11 + (int64_t)pvVar7)) {
                              return 0;
                            }
                            pvVar7 = (void *)((int64_t)pvVar7 + 1);
                          } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar7);
                        }
                      }
                      else if ((pvVar7 != (void *)0x0) &&
                              (iVar4 = _memcmp((void *)(uint64_t)bVar2,pvVar7,(uint)bVar1),
                              iVar4 != 0)) {
                        return 0;
                      }
                      bVar1 = *(byte *)(this_ptr + 0x270);
                      uVar10 = 0;
                      pvVar7 = (void *)(uint64_t)(bVar1 >> 1);
                      if ((bVar1 & 1) != 0) {
                        pvVar7 = *(void **)(this_ptr + 0x278);
                      }
                      bVar2 = *(byte *)(arg1 + 0x270);
                      if ((bVar2 & 1) == 0) {
                        pvVar5 = (void *)(uint64_t)(bVar2 >> 1);
                      }
                      else {
                        pvVar5 = *(void **)(arg1 + 0x278);
                      }
                      if (pvVar7 == pvVar5) {
                        if ((bVar2 & 1) == 0) {
                          lVar11 = arg1 + 0x271;
                        }
                        else {
                          lVar11 = *(int64_t *)(arg1 + 0x280);
                        }
                        if ((bVar1 & 1) == 0) {
                          if (pvVar7 != (void *)0x0) {
                            pvVar7 = (void *)0x0;
                            do {
                              if (*(char *)(this_ptr + 0x271 + (int64_t)pvVar7) !=
                                  *(char *)(lVar11 + (int64_t)pvVar7)) {
                                return 0;
                              }
                              pvVar7 = (void *)((int64_t)pvVar7 + 1);
                            } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar7);
                          }
                        }
                        else if ((pvVar7 != (void *)0x0) &&
                                (iVar4 = _memcmp((void *)(uint64_t)bVar2,pvVar7,(uint)bVar1),
                                iVar4 != 0)) {
                          return 0;
                        }
                        if ((*(char *)(this_ptr + 0x387) == *(char *)(arg1 + 0x387)) &&
                           ((*(char *)(this_ptr + 0x387) == '\0' ||
                            (cVar3 = FUN_00979214(), cVar3 != '\0')))) {
                          bVar1 = *(byte *)(this_ptr + 0x358);
                          pvVar5 = (void *)(uint64_t)(bVar1 >> 1);
                          pvVar7 = pvVar5;
                          if ((bVar1 & 1) != 0) {
                            pvVar7 = *(void **)(this_ptr + 0x360);
                          }
                          bVar2 = *(byte *)(arg1 + 0x358);
                          if ((bVar2 & 1) == 0) {
                            pvVar9 = (void *)(uint64_t)(bVar2 >> 1);
                          }
                          else {
                            pvVar9 = *(void **)(arg1 + 0x360);
                          }
                          if (pvVar7 == pvVar9) {
                            if ((bVar2 & 1) == 0) {
                              lVar11 = arg1 + 0x359;
                            }
                            else {
                              lVar11 = *(int64_t *)(arg1 + 0x368);
                            }
                            if ((bVar1 & 1) == 0) {
                              if (pvVar7 != (void *)0x0) {
                                pvVar7 = (void *)0x0;
                                do {
                                  if (*(char *)(this_ptr + 0x359 + (int64_t)pvVar7) !=
                                      *(char *)(lVar11 + (int64_t)pvVar7)) {
                                    return 0;
                                  }
                                  pvVar7 = (void *)((int64_t)pvVar7 + 1);
                                } while (pvVar5 != pvVar7);
                              }
                            }
                            else if (pvVar7 != (void *)0x0) {
                              iVar4 = _memcmp((void *)(uint64_t)bVar1,pvVar7,
                                              (size_t)CONCAT71((int7)((uint64_t)uVar10 >> 8),1));
                              pvVar5 = (void *)CONCAT44(extraout_var,iVar4);
                              if (iVar4 != 0) {
                                return 0;
                              }
                            }
                            return CONCAT71((int7)((uint64_t)pvVar5 >> 8),1);
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

