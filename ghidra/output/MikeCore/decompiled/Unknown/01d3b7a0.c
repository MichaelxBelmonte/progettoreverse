// Function: FUN_01d3b7a0
// Address: 01d3b7a0
// Size: 2564 bytes
// Class: Unknown


ulonglong FUN_01d3b7a0(char *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint *unaff_RSI;
  short *unaff_RDI;
  undefined7 uVar9;
  char cVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  bool bVar14;
  longlong *local_58;
  char local_50;
  
  plVar13 = (longlong *)*param_2;
  plVar8 = plVar13;
  if (plVar13 == (longlong *)0x0) {
    cVar10 = '\0';
    plVar13 = (longlong *)0x0;
  }
  else {
    cVar10 = (char)param_2[1];
    if (cVar10 != '\0') {
      FUN_00d50b00();
      plVar8 = (longlong *)*param_2;
    }
  }
  *unaff_RSI = 0;
  *unaff_RDI = 0;
  plVar2 = plVar13;
  if (plVar8 == (longlong *)0x0) {
    uVar12 = 0;
  }
  else {
    iVar5 = FUN_00d8c7a0();
    lVar1 = DAT_027efe18;
    if (iVar5 == 0) {
      uVar12 = 0;
    }
    else {
      if (DAT_027efe18 != 0) {
        FUN_00d50b00();
      }
      uVar7 = FUN_00d90650();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((int)uVar7 == -1) {
        uVar12 = 0;
        lVar1 = DAT_027efe20;
      }
      else {
        *(byte *)unaff_RSI = (byte)*unaff_RSI | 2;
        uVar11 = (int)((ulonglong)uVar7 >> 0x20) + (int)uVar7;
        if ((int)uVar11 < 0) {
          uVar11 = 0;
        }
        uVar12 = (ulonglong)uVar11;
        lVar1 = DAT_027efe20;
      }
      DAT_027efe20 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      uVar7 = FUN_00d90650();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((int)uVar7 != -1) {
        *(byte *)unaff_RSI = (byte)*unaff_RSI | 0x10;
        uVar11 = (int)((ulonglong)uVar7 >> 0x20) + (int)uVar7;
        if ((int)uVar11 <= (int)(uint)uVar12) {
          uVar11 = (uint)uVar12;
        }
        uVar12 = (ulonglong)uVar11;
      }
      lVar1 = DAT_027efe28;
      if (DAT_027efe28 != 0) {
        FUN_00d50b00();
      }
      uVar7 = FUN_00d90650();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((int)uVar7 != -1) {
        *(byte *)unaff_RSI = (byte)*unaff_RSI | 8;
        uVar11 = (int)((ulonglong)uVar7 >> 0x20) + (int)uVar7;
        if ((int)uVar11 <= (int)(uint)uVar12) {
          uVar11 = (uint)uVar12;
        }
        uVar12 = (ulonglong)uVar11;
      }
      lVar1 = DAT_027efe30;
      if (DAT_027efe30 != 0) {
        FUN_00d50b00();
      }
      uVar7 = FUN_00d90650();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((int)uVar7 != -1) {
        *(byte *)unaff_RSI = (byte)*unaff_RSI | 4;
        uVar11 = (int)((ulonglong)uVar7 >> 0x20) + (int)uVar7;
        if ((int)uVar11 <= (int)(uint)uVar12) {
          uVar11 = (uint)uVar12;
        }
        uVar12 = (ulonglong)uVar11;
      }
      lVar1 = DAT_027efe38;
      if (DAT_027efe38 != 0) {
        FUN_00d50b00();
      }
      iVar5 = FUN_00d90650();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (iVar5 != -1) {
        *(byte *)unaff_RSI = (byte)*unaff_RSI | 0x20;
      }
      uVar9 = (undefined7)((ulonglong)param_2 >> 8);
      if ((0 < (int)uVar12) || (lVar1 = DAT_027efe40, (*unaff_RSI & 0x20) != 0)) {
        iVar5 = FUN_00d8c7a0();
        uVar6 = iVar5 - (int)uVar12;
        uVar11 = uVar6 - 6;
        if ((*unaff_RSI & 0x20) == 0) {
          uVar11 = uVar6;
        }
        param_1 = (char *)((ulonglong)uVar11 << 0x20);
        FUN_00d8e3d0(param_1,uVar12 | (ulonglong)param_1);
        lVar1 = DAT_027efe40;
        if (local_58 == plVar13) {
          if ((cVar10 == '\0') && (local_58 != (longlong *)0x0)) {
            cVar10 = '\x01';
            if (local_50 != '\0') goto joined_r0x01d3bb6a;
            cVar10 = '\x01';
            FUN_00d50b00();
          }
LAB_01d3bb50:
          plVar2 = plVar13;
          lVar1 = DAT_027efe40;
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
            lVar1 = DAT_027efe40;
          }
        }
        else {
          plVar2 = local_58;
          if (local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            cVar3 = '\x01';
            bVar14 = cVar10 != '\0';
            lVar1 = DAT_027efe40;
            cVar10 = cVar3;
            if ((bVar14) && (plVar13 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar13 = local_58;
              goto LAB_01d3bb50;
            }
          }
          else {
            cVar3 = '\x01';
            bVar14 = cVar10 != '\0';
            cVar10 = cVar3;
            if ((bVar14) && (plVar13 != (longlong *)0x0)) {
              FUN_00d50b20();
              lVar1 = DAT_027efe40;
            }
          }
        }
      }
joined_r0x01d3bb6a:
      uVar12 = CONCAT71(uVar9,1);
      DAT_027efe40 = lVar1;
      if (plVar2 == (longlong *)0x0) goto LAB_01d3bfb2;
      uVar12 = CONCAT71(uVar9,1);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar2 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_026de770;
      if (cVar3 != '\0') {
        *unaff_RDI = 0;
        uVar11 = 0x100;
        if (cVar10 != '\0') {
          FUN_00d50b20();
        }
LAB_01d3bbe6:
        *unaff_RSI = *unaff_RSI | uVar11;
        goto LAB_01d3bfb2;
      }
      if (DAT_026de770 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar2 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027efe50;
      if (cVar3 == '\0') {
        if (DAT_027efe50 != 0) {
          FUN_00d50b00();
        }
        cVar3 = (**(code **)(*plVar2 + 0x50))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = DAT_026de788;
        if (cVar3 == '\0') {
          if (DAT_026de788 != 0) {
            FUN_00d50b00();
          }
          cVar3 = (**(code **)(*plVar2 + 0x50))();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar1 = DAT_027efe60;
          if (cVar3 == '\0') {
            if (DAT_027efe60 != 0) {
              FUN_00d50b00();
            }
            cVar3 = (**(code **)(*plVar2 + 0x50))();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            lVar1 = DAT_027efe68;
            if (cVar3 == '\0') {
              if (DAT_027efe68 != 0) {
                FUN_00d50b00();
              }
              cVar3 = (**(code **)(*plVar2 + 0x50))();
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
              lVar1 = DAT_027efe70;
              if (cVar3 == '\0') {
                if (DAT_027efe70 != 0) {
                  FUN_00d50b00();
                }
                cVar3 = (**(code **)(*plVar2 + 0x50))();
                if (lVar1 != 0) {
                  FUN_00d50b20();
                }
                lVar1 = DAT_026dea30;
                if (cVar3 == '\0') {
                  if (DAT_026dea30 != 0) {
                    FUN_00d50b00();
                  }
                  cVar3 = (**(code **)(*plVar2 + 0x50))();
                  if (lVar1 != 0) {
                    FUN_00d50b20();
                  }
                  lVar1 = DAT_027efe80;
                  if (cVar3 == '\0') {
                    if (DAT_027efe80 != 0) {
                      FUN_00d50b00();
                    }
                    cVar3 = (**(code **)(*plVar2 + 0x50))();
                    if (lVar1 != 0) {
                      FUN_00d50b20();
                    }
                    lVar1 = DAT_026de8f8;
                    if (cVar3 == '\0') {
                      if (DAT_026de8f8 != 0) {
                        FUN_00d50b00();
                      }
                      cVar3 = (**(code **)(*plVar2 + 0x50))();
                      if (lVar1 != 0) {
                        FUN_00d50b20();
                      }
                      lVar1 = DAT_027efe90;
                      if (cVar3 == '\0') {
                        if (DAT_027efe90 != 0) {
                          FUN_00d50b00();
                        }
                        cVar3 = (**(code **)(*plVar2 + 0x50))();
                        if (lVar1 != 0) {
                          FUN_00d50b20();
                        }
                        lVar1 = DAT_027efe98;
                        if (cVar3 == '\0') {
                          if (DAT_027efe98 != 0) {
                            FUN_00d50b00();
                          }
                          cVar3 = (**(code **)(*plVar2 + 0x50))();
                          if (lVar1 != 0) {
                            FUN_00d50b20();
                          }
                          lVar1 = DAT_027efea0;
                          if (cVar3 == '\0') {
                            if (DAT_027efea0 != 0) {
                              FUN_00d50b00();
                            }
                            cVar3 = (**(code **)(*plVar2 + 0x50))();
                            if (lVar1 != 0) {
                              FUN_00d50b20();
                            }
                            lVar1 = DAT_027efea8;
                            if (cVar3 == '\0') {
                              if (DAT_027efea8 != 0) {
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
                                  *unaff_RDI = (short)iVar5;
                                  uVar11 = 0x80;
                                  if (cVar10 != '\0') {
                                    FUN_00d50b20();
                                  }
                                  goto LAB_01d3bbe6;
                                }
                                iVar5 = FUN_00d8c7a0();
                                if (iVar5 == 1) {
                                  sVar4 = FUN_00d8cbc0();
                                  *unaff_RDI = sVar4;
                                  uVar12 = CONCAT71(uVar9,1);
                                  if ((ushort)(sVar4 - 0x61U) < 0x1a) {
                                    *unaff_RDI = sVar4 + -0x20;
                                  }
                                }
                                else {
                                  uVar12 = 0;
                                }
                              }
                              else {
                                *(byte *)((longlong)unaff_RSI + 2) =
                                     *(byte *)((longlong)unaff_RSI + 2) | 8;
                                uVar12 = CONCAT71(uVar9,1);
                              }
                            }
                            else {
                              *(byte *)((longlong)unaff_RSI + 2) =
                                   *(byte *)((longlong)unaff_RSI + 2) | 4;
                              uVar12 = CONCAT71(uVar9,1);
                            }
                          }
                          else {
                            *(byte *)((longlong)unaff_RSI + 2) =
                                 *(byte *)((longlong)unaff_RSI + 2) | 2;
                            uVar12 = CONCAT71(uVar9,1);
                          }
                          goto joined_r0x01d3b8c3;
                        }
                        *(byte *)((longlong)unaff_RSI + 1) =
                             *(byte *)((longlong)unaff_RSI + 1) | 0x40;
                      }
                      else {
                        *(byte *)((longlong)unaff_RSI + 1) =
                             *(byte *)((longlong)unaff_RSI + 1) | 0x10;
                      }
                    }
                    else {
                      *unaff_RDI = 0x1b;
                    }
                  }
                  else {
                    *unaff_RDI = 0xd;
                  }
                }
                else {
                  *unaff_RDI = 0x20;
                }
              }
              else {
                *(byte *)((longlong)unaff_RSI + 2) = *(byte *)((longlong)unaff_RSI + 2) | 1;
              }
            }
            else {
              *(byte *)((longlong)unaff_RSI + 1) = *(byte *)((longlong)unaff_RSI + 1) | 0x80;
            }
          }
          else {
            *(byte *)((longlong)unaff_RSI + 1) = *(byte *)((longlong)unaff_RSI + 1) | 4;
          }
        }
        else {
          *(byte *)((longlong)unaff_RSI + 1) = *(byte *)((longlong)unaff_RSI + 1) | 8;
        }
      }
      else {
        *(byte *)((longlong)unaff_RSI + 1) = *(byte *)((longlong)unaff_RSI + 1) | 2;
      }
      uVar12 = CONCAT71(uVar9,1);
    }
  }
joined_r0x01d3b8c3:
  if ((cVar10 != '\0') && (plVar2 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01d3bfb2:
  return uVar12 & 0xffffffff;
}


