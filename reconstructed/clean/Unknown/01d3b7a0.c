// Function: FUN_01d3b7a0
// Address: 01d3b7a0
// Size: 2564 bytes
// Class: Unknown

uint64_t FUN_01d3b7a0(char *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  uint *arg1;
  short *this_ptr;
  undefined7 uVar9;
  char cVar10;
  uint uVar11;
  uint64_t uVar12;
  int64_t *plVar13;
  bool bVar14;
  int64_t *local_58;
  char local_50;
  
  plVar13 = (int64_t *)*param_2;
  plVar8 = plVar13;
  if (plVar13 == (int64_t *)0x0) {
    cVar10 = '\0';
    plVar13 = (int64_t *)0x0;
  }
  else {
    cVar10 = (char)param_2[1];
    if (cVar10 != '\0') {
      FUN_00d50b00();
      plVar8 = (int64_t *)*param_2;
    }
  }
  *arg1 = 0;
  *this_ptr = 0;
  plVar2 = plVar13;
  if (plVar8 == (int64_t *)0x0) {
    uVar12 = 0;
  }
  else {
    iVar5 = FUN_00d8c7a0();
    lVar1 = g_027efe18;
    if (iVar5 == 0) {
      uVar12 = 0;
    }
    else {
      if (g_027efe18 != 0) {
        FUN_00d50b00();
      }
      uVar7 = FUN_00d90650();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((int)uVar7 == -1) {
        uVar12 = 0;
        lVar1 = g_027efe20;
      }
      else {
        *(byte *)arg1 = (byte)*arg1 | 2;
        uVar11 = (int)((uint64_t)uVar7 >> 0x20) + (int)uVar7;
        if ((int)uVar11 < 0) {
          uVar11 = 0;
        }
        uVar12 = (uint64_t)uVar11;
        lVar1 = g_027efe20;
      }
      g_027efe20 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      uVar7 = FUN_00d90650();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((int)uVar7 != -1) {
        *(byte *)arg1 = (byte)*arg1 | 0x10;
        uVar11 = (int)((uint64_t)uVar7 >> 0x20) + (int)uVar7;
        if ((int)uVar11 <= (int)(uint)uVar12) {
          uVar11 = (uint)uVar12;
        }
        uVar12 = (uint64_t)uVar11;
      }
      lVar1 = g_027efe28;
      if (g_027efe28 != 0) {
        FUN_00d50b00();
      }
      uVar7 = FUN_00d90650();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((int)uVar7 != -1) {
        *(byte *)arg1 = (byte)*arg1 | 8;
        uVar11 = (int)((uint64_t)uVar7 >> 0x20) + (int)uVar7;
        if ((int)uVar11 <= (int)(uint)uVar12) {
          uVar11 = (uint)uVar12;
        }
        uVar12 = (uint64_t)uVar11;
      }
      lVar1 = g_027efe30;
      if (g_027efe30 != 0) {
        FUN_00d50b00();
      }
      uVar7 = FUN_00d90650();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((int)uVar7 != -1) {
        *(byte *)arg1 = (byte)*arg1 | 4;
        uVar11 = (int)((uint64_t)uVar7 >> 0x20) + (int)uVar7;
        if ((int)uVar11 <= (int)(uint)uVar12) {
          uVar11 = (uint)uVar12;
        }
        uVar12 = (uint64_t)uVar11;
      }
      lVar1 = g_027efe38;
      if (g_027efe38 != 0) {
        FUN_00d50b00();
      }
      iVar5 = FUN_00d90650();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (iVar5 != -1) {
        *(byte *)arg1 = (byte)*arg1 | 0x20;
      }
      uVar9 = (undefined7)((uint64_t)param_2 >> 8);
      if ((0 < (int)uVar12) || (lVar1 = g_027efe40, (*arg1 & 0x20) != 0)) {
        iVar5 = FUN_00d8c7a0();
        uVar6 = iVar5 - (int)uVar12;
        uVar11 = uVar6 - 6;
        if ((*arg1 & 0x20) == 0) {
          uVar11 = uVar6;
        }
        param_1 = (char *)((uint64_t)uVar11 << 0x20);
        FUN_00d8e3d0(param_1,uVar12 | (uint64_t)param_1);
        lVar1 = g_027efe40;
        if (local_58 == plVar13) {
          if ((cVar10 == '\0') && (local_58 != (int64_t *)0x0)) {
            cVar10 = '\x01';
            if (local_50 != '\0') goto joined_r0x01d3bb6a;
            cVar10 = '\x01';
            FUN_00d50b00();
          }
LAB_01d3bb50:
          plVar2 = plVar13;
          lVar1 = g_027efe40;
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
            lVar1 = g_027efe40;
          }
        }
        else {
          plVar2 = local_58;
          if (local_50 == '\0') {
            if (local_58 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            cVar3 = '\x01';
            bVar14 = cVar10 != '\0';
            lVar1 = g_027efe40;
            cVar10 = cVar3;
            if ((bVar14) && (plVar13 != (int64_t *)0x0)) {
              FUN_00d50b20();
              plVar13 = local_58;
              goto LAB_01d3bb50;
            }
          }
          else {
            cVar3 = '\x01';
            bVar14 = cVar10 != '\0';
            cVar10 = cVar3;
            if ((bVar14) && (plVar13 != (int64_t *)0x0)) {
              FUN_00d50b20();
              lVar1 = g_027efe40;
            }
          }
        }
      }
joined_r0x01d3bb6a:
      uVar12 = CONCAT71(uVar9,1);
      g_027efe40 = lVar1;
      if (plVar2 == (int64_t *)0x0) goto LAB_01d3bfb2;
      uVar12 = CONCAT71(uVar9,1);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar2 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_026de770;
      if (cVar3 != '\0') {
        *this_ptr = 0;
        uVar11 = 0x100;
        if (cVar10 != '\0') {
          FUN_00d50b20();
        }
LAB_01d3bbe6:
        *arg1 = *arg1 | uVar11;
        goto LAB_01d3bfb2;
      }
      if (g_026de770 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar2 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027efe50;
      if (cVar3 == '\0') {
        if (g_027efe50 != 0) {
          FUN_00d50b00();
        }
        cVar3 = (**(code **)(*plVar2 + 0x50))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = g_026de788;
        if (cVar3 == '\0') {
          if (g_026de788 != 0) {
            FUN_00d50b00();
          }
          cVar3 = (**(code **)(*plVar2 + 0x50))();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar1 = g_027efe60;
          if (cVar3 == '\0') {
            if (g_027efe60 != 0) {
              FUN_00d50b00();
            }
            cVar3 = (**(code **)(*plVar2 + 0x50))();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            lVar1 = g_027efe68;
            if (cVar3 == '\0') {
              if (g_027efe68 != 0) {
                FUN_00d50b00();
              }
              cVar3 = (**(code **)(*plVar2 + 0x50))();
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
              lVar1 = g_027efe70;
              if (cVar3 == '\0') {
                if (g_027efe70 != 0) {
                  FUN_00d50b00();
                }
                cVar3 = (**(code **)(*plVar2 + 0x50))();
                if (lVar1 != 0) {
                  FUN_00d50b20();
                }
                lVar1 = g_026dea30;
                if (cVar3 == '\0') {
                  if (g_026dea30 != 0) {
                    FUN_00d50b00();
                  }
                  cVar3 = (**(code **)(*plVar2 + 0x50))();
                  if (lVar1 != 0) {
                    FUN_00d50b20();
                  }
                  lVar1 = g_027efe80;
                  if (cVar3 == '\0') {
                    if (g_027efe80 != 0) {
                      FUN_00d50b00();
                    }
                    cVar3 = (**(code **)(*plVar2 + 0x50))();
                    if (lVar1 != 0) {
                      FUN_00d50b20();
                    }
                    lVar1 = g_026de8f8;
                    if (cVar3 == '\0') {
                      if (g_026de8f8 != 0) {
                        FUN_00d50b00();
                      }
                      cVar3 = (**(code **)(*plVar2 + 0x50))();
                      if (lVar1 != 0) {
                        FUN_00d50b20();
                      }
                      lVar1 = g_027efe90;
                      if (cVar3 == '\0') {
                        if (g_027efe90 != 0) {
                          FUN_00d50b00();
                        }
                        cVar3 = (**(code **)(*plVar2 + 0x50))();
                        if (lVar1 != 0) {
                          FUN_00d50b20();
                        }
                        lVar1 = g_027efe98;
                        if (cVar3 == '\0') {
                          if (g_027efe98 != 0) {
                            FUN_00d50b00();
                          }
                          cVar3 = (**(code **)(*plVar2 + 0x50))();
                          if (lVar1 != 0) {
                            FUN_00d50b20();
                          }
                          lVar1 = g_027efea0;
                          if (cVar3 == '\0') {
                            if (g_027efea0 != 0) {
                              FUN_00d50b00();
                            }
                            cVar3 = (**(code **)(*plVar2 + 0x50))();
                            if (lVar1 != 0) {
                              FUN_00d50b20();
                            }
                            lVar1 = g_027efea8;
                            if (cVar3 == '\0') {
                              if (g_027efea8 != 0) {
                                FUN_00d50b00();
                              }
                              cVar3 = (**(code **)(*plVar2 + 0x50))();
                              if (lVar1 != 0) {
                                FUN_00d50b20();
                              }
                              if (cVar3 == '\0') {
                                iVar5 = FUN_00d8c7a0();
                                if ((((1 < iVar5) && (cVar3 = FUN_00d8ca70(), cVar3 == 'F')) &&
                                    (cVar3 = FUN_00d8ca70(), '0' < cVar3)) &&
                                   (cVar3 = FUN_00d8ca70(), cVar3 < ':')) {
                                  FUN_00d8b910();
                                  iVar5 = _atoi(param_1);
                                  *this_ptr = (short)iVar5;
                                  uVar11 = 0x80;
                                  if (cVar10 != '\0') {
                                    FUN_00d50b20();
                                  }
                                  goto LAB_01d3bbe6;
                                }
                                iVar5 = FUN_00d8c7a0();
                                if (iVar5 == 1) {
                                  sVar4 = FUN_00d8cbc0();
                                  *this_ptr = sVar4;
                                  uVar12 = CONCAT71(uVar9,1);
                                  if ((ushort)(sVar4 - 0x61U) < 0x1a) {
                                    *this_ptr = sVar4 + -0x20;
                                  }
                                }
                                else {
                                  uVar12 = 0;
                                }
                              }
                              else {
                                *(byte *)((int64_t)arg1 + 2) =
                                     *(byte *)((int64_t)arg1 + 2) | 8;
                                uVar12 = CONCAT71(uVar9,1);
                              }
                            }
                            else {
                              *(byte *)((int64_t)arg1 + 2) =
                                   *(byte *)((int64_t)arg1 + 2) | 4;
                              uVar12 = CONCAT71(uVar9,1);
                            }
                          }
                          else {
                            *(byte *)((int64_t)arg1 + 2) =
                                 *(byte *)((int64_t)arg1 + 2) | 2;
                            uVar12 = CONCAT71(uVar9,1);
                          }
                          goto joined_r0x01d3b8c3;
                        }
                        *(byte *)((int64_t)arg1 + 1) =
                             *(byte *)((int64_t)arg1 + 1) | 0x40;
                      }
                      else {
                        *(byte *)((int64_t)arg1 + 1) =
                             *(byte *)((int64_t)arg1 + 1) | 0x10;
                      }
                    }
                    else {
                      *this_ptr = 0x1b;
                    }
                  }
                  else {
                    *this_ptr = 0xd;
                  }
                }
                else {
                  *this_ptr = 0x20;
                }
              }
              else {
                *(byte *)((int64_t)arg1 + 2) = *(byte *)((int64_t)arg1 + 2) | 1;
              }
            }
            else {
              *(byte *)((int64_t)arg1 + 1) = *(byte *)((int64_t)arg1 + 1) | 0x80;
            }
          }
          else {
            *(byte *)((int64_t)arg1 + 1) = *(byte *)((int64_t)arg1 + 1) | 4;
          }
        }
        else {
          *(byte *)((int64_t)arg1 + 1) = *(byte *)((int64_t)arg1 + 1) | 8;
        }
      }
      else {
        *(byte *)((int64_t)arg1 + 1) = *(byte *)((int64_t)arg1 + 1) | 2;
      }
      uVar12 = CONCAT71(uVar9,1);
    }
  }
joined_r0x01d3b8c3:
  if ((cVar10 != '\0') && (plVar2 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01d3bfb2:
  return uVar12 & 0xffffffff;
}

