// Function: FUN_00caa040
// Address: 00caa040
// Size: 2769 bytes
// Class: GNString
// String references:
//   "true"
//   "data"
//   "false"
//   "dict"
//   "array"
//   "real"
//   "integer"
//   "string"


void FUN_00caa040(void)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  char *pcVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar10;
  bool bVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar12;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  undefined8 local_50;
  float local_44;
  longlong *local_40;
  char local_38 [8];
  
  iVar5 = FUN_00e7ddf0();
  if (iVar5 == 0) {
    uVar6 = FUN_00cabf30();
    plVar7 = local_40;
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        uVar6 = FUN_00d50b00();
        plVar8 = DAT_02773320;
        goto joined_r0x00caa2ce;
      }
    }
    else {
      plVar8 = DAT_02773320;
      if (local_40 != (longlong *)0x0) {
joined_r0x00caa2ce:
        DAT_02773320 = plVar8;
        if (plVar8 != (longlong *)0x0) {
          uVar6 = FUN_00d50b00();
        }
        local_68 = 0;
        local_70 = plVar8;
        FUN_00c9fe40(uVar6,&local_70);
        pcVar9 = (char *)&local_50;
        if (local_38[0] != '\0') {
          pcVar9 = local_38;
        }
        local_50 = CONCAT71(local_50._1_7_,local_38[0]);
        *pcVar9 = '\0';
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_50 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar8 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        plVar8 = DAT_02773320;
        if (local_40 != (longlong *)0x0) {
          if (DAT_02773320 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_40 = plVar8;
          local_38[0] = '\0';
          FUN_00ca13a0();
          if (plVar8 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          plVar8 = (longlong *)FUN_00e8fc40();
          FUN_0004b090();
          uVar6 = (**(code **)(*plVar8 + 0x18))();
          local_e0 = plVar7;
          local_d8 = '\0';
          FUN_00d18390(uVar6,&local_e0);
          if (plVar7 == local_40) {
LAB_00caa535:
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar7 = local_40;
            if (local_38[0] == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              FUN_00d50b20();
              goto LAB_00caa535;
            }
            FUN_00d50b20();
            local_38[0] = '\0';
          }
          if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    iVar5 = FUN_00e7ddf0();
    if (iVar5 == 0) {
      FUN_00ca9ea0();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      plVar7 = local_40;
      if (local_38[0] == '\0') {
        if (local_40 == (longlong *)0x0) goto LAB_00caaadf;
        FUN_00d50b00();
      }
    }
    else {
      iVar5 = FUN_00e7ddf0();
      if (iVar5 == 0) {
        if (*(longlong *)(unaff_RSI + 0x28) != 0) {
          uVar6 = FUN_00e7dde0();
          FUN_00c8e2b0(extraout_XMM0_Da_00,uVar6);
          plVar7 = local_40;
          if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
              (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar6 = FUN_00c92170();
          local_d0 = plVar7;
          local_c8 = '\0';
          uVar6 = FUN_00d93320(uVar6,6);
          plVar8 = local_40;
          if (local_38[0] == '\0') {
            if (((local_40 != (longlong *)0x0) && (uVar6 = FUN_00d50b00(), local_38[0] != '\0')) &&
               (local_40 != (longlong *)0x0)) {
              uVar6 = FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
          }
          if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
            uVar6 = FUN_00d50b20();
          }
          lVar2 = DAT_02773348;
          if (DAT_02773348 != 0) {
            uVar6 = FUN_00d50b00();
          }
          local_c0 = lVar2;
          local_b8 = '\x01';
          FUN_00d97fb0(uVar6,&local_c0);
          plVar10 = plVar8;
          if (plVar8 != local_40) {
            plVar10 = local_40;
            if (local_38[0] != '\0') {
              if (plVar8 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              local_38[0] = '\0';
              goto LAB_00caa89f;
            }
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if (plVar8 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_00caa89f:
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          local_a8 = '\0';
          local_b0 = plVar10;
          FUN_00c923f0();
          plVar8 = local_40;
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (local_38[0] == '\0') {
            if (local_40 == (longlong *)0x0) {
              *unaff_RDI = 0;
              *(undefined1 *)(unaff_RDI + 1) = 1;
            }
            else {
              FUN_00d50b00();
              *unaff_RDI = plVar8;
              *(undefined1 *)(unaff_RDI + 1) = 1;
              if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            *unaff_RDI = local_40;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            local_38[0] = '\0';
          }
          if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar10 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (plVar7 == (longlong *)0x0) {
            return;
          }
          FUN_00d50b20();
          return;
        }
        plVar7 = (longlong *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar7 = (longlong)&DAT_025683c0;
        (*DAT_025683d8)();
      }
      else {
        iVar5 = FUN_00e7ddf0();
        if (iVar5 == 0) {
          local_44 = 0.0;
          if (*(longlong *)(unaff_RSI + 0x28) != 0) {
            uVar6 = FUN_00e7dde0();
            FUN_00d8d3e0(extraout_XMM0_Da_01,uVar6);
            plVar7 = local_40;
            if (local_38[0] == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
                if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_00caa5f1;
              }
            }
            else if (local_40 != (longlong *)0x0) {
LAB_00caa5f1:
              iVar5 = FUN_00d8c7a0();
              if ((iVar5 != 3) || (sVar4 = FUN_00d8cbc0(), fVar12 = DAT_023b26e8, sVar4 != 0x4e)) {
                if ((DAT_028a72d0 == (longlong *)0x0) || (DAT_028a72d9 == '\0')) {
                  FUN_00e8cb50();
                  if (DAT_028a72d0 == (longlong *)0x0) {
                    plVar8 = (longlong *)FUN_00e8fc40();
                    FUN_00d4ff40();
                    *plVar8 = (longlong)&DAT_0257ef30;
                    plVar8[5] = 0;
                    plVar8[2] = 0;
                    plVar8[3] = 0;
                    *(undefined4 *)(plVar8 + 4) = 0;
                    (*DAT_0257ef48)();
                    if (DAT_028a72d0 == plVar8) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                      bVar11 = DAT_028a72d0 != (longlong *)0x0;
                      DAT_028a72d0 = plVar8;
                      if (bVar11) {
                        FUN_00d50b20();
                      }
                    }
                    if (DAT_028a72d8 == '\0') {
                      DAT_028a72d8 = '\x01';
                      FUN_00e8cb90();
                    }
                    if (!bVar1) {
                      FUN_00d50b20();
                    }
                    DAT_028a72d9 = '\x01';
                    FUN_00e8cb70();
                  }
                  else {
                    DAT_028a72d9 = '\x01';
                    FUN_00e8cb70();
                  }
                }
                local_a0 = plVar7;
                local_98 = '\0';
                (**(code **)(*DAT_028a72d0 + 0x368))();
                if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                cVar3 = (**(code **)(*DAT_028a72d0 + 0x468))();
                if (cVar3 == '\0') {
                  fVar12 = 0.0;
                }
                else {
                  fVar12 = (float)(double)local_40;
                }
              }
              local_44 = fVar12;
              FUN_00d50b20();
            }
          }
          FUN_00cab270(local_44);
          *(undefined1 *)(unaff_RDI + 1) = 0;
          plVar7 = local_40;
          if (local_38[0] == '\0') {
            if (local_40 == (longlong *)0x0) {
LAB_00caaadf:
              plVar7 = (longlong *)0x0;
            }
            else {
              FUN_00d50b00();
            }
          }
        }
        else {
          iVar5 = FUN_00e7ddf0();
          if (iVar5 != 0) {
            iVar5 = FUN_00e7ddf0();
            if (iVar5 == 0) {
              if (*(longlong *)(unaff_RSI + 0x28) != 0) {
                FUN_00caba80();
                plVar7 = local_40;
                if (local_38[0] == '\0') {
                  if (local_40 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38[0] = '\0';
                }
                local_90 = plVar7;
                local_88 = '\0';
                cVar3 = FUN_00dd8370();
                if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar3 != '\0') {
                  local_80 = plVar7;
                  local_78 = '\0';
                  FUN_00dd7810();
                  plVar8 = local_40;
                  *(undefined1 *)(unaff_RDI + 1) = 0;
                  if (local_38[0] == '\0') {
                    if (local_40 == (longlong *)0x0) {
                      *unaff_RDI = 0;
                      *(undefined1 *)(unaff_RDI + 1) = 1;
                    }
                    else {
                      FUN_00d50b00();
                      *unaff_RDI = plVar8;
                      *(undefined1 *)(unaff_RDI + 1) = 1;
                      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                  }
                  else {
                    *unaff_RDI = local_40;
                    *(undefined1 *)(unaff_RDI + 1) = 1;
                    local_38[0] = '\0';
                  }
                  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (plVar7 == (longlong *)0x0) {
                    return;
                  }
                  FUN_00d50b20();
                  return;
                }
                *unaff_RDI = plVar7;
                goto LAB_00caaae5;
              }
              FUN_00d8ede0();
              plVar7 = local_40;
              *(undefined1 *)(unaff_RDI + 1) = 0;
              if (local_38[0] == '\0') {
                if (local_40 != (longlong *)0x0) {
                  FUN_00d50b00();
                  *unaff_RDI = plVar7;
                  *(undefined1 *)(unaff_RDI + 1) = 1;
                  if (local_38[0] == '\0') {
                    return;
                  }
                  if (local_40 == (longlong *)0x0) {
                    return;
                  }
                  FUN_00d50b20();
                  return;
                }
                goto LAB_00caaadf;
              }
            }
            else {
              iVar5 = FUN_00e7ddf0();
              if (iVar5 == 0) {
                FUN_00d46300();
                plVar7 = local_40;
                *(undefined1 *)(unaff_RDI + 1) = 0;
                if (local_38[0] == '\0') {
                  if (local_40 != (longlong *)0x0) {
                    FUN_00d50b00();
                    *unaff_RDI = plVar7;
                    *(undefined1 *)(unaff_RDI + 1) = 1;
                    if (local_38[0] == '\0') {
                      return;
                    }
                    if (local_40 == (longlong *)0x0) {
                      return;
                    }
                    FUN_00d50b20();
                    return;
                  }
                  goto LAB_00caaadf;
                }
              }
              else {
                iVar5 = FUN_00e7ddf0();
                if (iVar5 != 0) {
                  *(undefined1 *)(unaff_RDI + 1) = 0;
                  *unaff_RDI = 0;
                  return;
                }
                FUN_00d46300();
                plVar7 = local_40;
                *(undefined1 *)(unaff_RDI + 1) = 0;
                if (local_38[0] == '\0') {
                  if (local_40 != (longlong *)0x0) {
                    FUN_00d50b00();
                    *unaff_RDI = plVar7;
                    *(undefined1 *)(unaff_RDI + 1) = 1;
                    if (local_38[0] == '\0') {
                      return;
                    }
                    if (local_40 == (longlong *)0x0) {
                      return;
                    }
                    FUN_00d50b20();
                    return;
                  }
                  goto LAB_00caaadf;
                }
              }
            }
            goto LAB_00caaae1;
          }
          local_50 = 0;
          if (*(longlong *)(unaff_RSI + 0x28) == 0) {
LAB_00caa758:
            local_50 = 0;
          }
          else {
            FUN_00d91a70(extraout_XMM0_Da,1);
            local_60 = local_70;
            local_58 = 0;
            if (local_68 == '\0') {
              if (local_70 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_58 = '\x01';
            FUN_00ddb860();
            cVar3 = (**(code **)(*local_40 + 0x3f8))();
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar3 == '\0') goto LAB_00caa758;
          }
          FUN_00cab720();
          *(undefined1 *)(unaff_RDI + 1) = 0;
          plVar7 = local_40;
          if (local_38[0] == '\0') {
            if (local_40 == (longlong *)0x0) goto LAB_00caaadf;
            FUN_00d50b00();
          }
        }
      }
    }
  }
LAB_00caaae1:
  *unaff_RDI = plVar7;
LAB_00caaae5:
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


