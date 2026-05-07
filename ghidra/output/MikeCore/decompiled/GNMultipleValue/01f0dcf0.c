// Function: FUN_01f0dcf0
// Address: 01f0dcf0
// Size: 6819 bytes
// Class: GNMultipleValue
// String references:
//   "%@%@"


/* WARNING: Removing unreachable block (ram,0x01f0e006) */
/* WARNING: Removing unreachable block (ram,0x01f0f5d9) */
/* WARNING: Removing unreachable block (ram,0x01f0f5e5) */
/* WARNING: Removing unreachable block (ram,0x01f0e874) */
/* WARNING: Removing unreachable block (ram,0x01f0e880) */
/* WARNING: Removing unreachable block (ram,0x01f0f10b) */
/* WARNING: Removing unreachable block (ram,0x01f0f117) */
/* WARNING: Removing unreachable block (ram,0x01f0de97) */
/* WARNING: Removing unreachable block (ram,0x01f0dea3) */
/* WARNING: Removing unreachable block (ram,0x01f0e830) */
/* WARNING: Removing unreachable block (ram,0x01f0e83c) */
/* WARNING: Removing unreachable block (ram,0x01f0f720) */
/* WARNING: Removing unreachable block (ram,0x01f0f72c) */
/* WARNING: Removing unreachable block (ram,0x01f0f7a6) */
/* WARNING: Removing unreachable block (ram,0x01f0f7b2) */
/* WARNING: Removing unreachable block (ram,0x01f0f615) */
/* WARNING: Removing unreachable block (ram,0x01f0f621) */

void FUN_01f0dcf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar13;
  uint uVar14;
  longlong *unaff_R15;
  undefined7 uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 extraout_XMM0_Qb;
  undefined4 local_1f8;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong *local_b8;
  char local_b0;
  double local_a8;
  double local_a0;
  longlong *local_98;
  char local_90;
  ulonglong local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  undefined4 uStack_44;
  char local_40;
  
  if (*unaff_RSI == 0) {
    lVar11 = unaff_RDI[0x30];
    if ((lVar11 != 0) && (7 < *(int *)(lVar11 + 0x18))) {
      uVar22 = FUN_01d5b240(param_1,**(undefined4 **)(lVar11 + 0x10));
      plVar13 = local_68;
      if (local_60 == '\0') {
        if (local_68 != (longlong *)0x0) {
          uVar22 = FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_01f10600(uVar22,*(undefined4 *)(*(longlong *)(unaff_RDI[0x30] + 0x10) + 4));
      if (plVar13 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_60 == '\0') {
        return;
      }
      if (local_68 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
LAB_01f0dd8c:
    FUN_01d3a560();
    if (local_68 == (longlong *)0x0) {
      bVar16 = false;
    }
    else {
      FUN_01d3a560();
      iVar6 = FUN_01d3a5a0();
      bVar16 = iVar6 == 1;
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = 0.0;
    if (bVar16) {
LAB_01f0ddf6:
      local_a0 = (double)FUN_00e7d6f0();
    }
  }
  else {
    iVar6 = FUN_01d3a5a0();
    if (iVar6 == 1) goto LAB_01f0ddf6;
    local_a0 = 0.0;
    if (*unaff_RSI == 0) goto LAB_01f0dd8c;
  }
  if (unaff_RDI[0x2d] == 0) {
    (**(code **)(*unaff_RDI + 0x930))();
    if (*unaff_RSI != 0) goto LAB_01f0de20;
LAB_01f0f2f2:
    (**(code **)(*unaff_RDI + 0x658))();
    plVar12 = local_68;
    plVar13 = (longlong *)*unaff_RSI;
    if (plVar13 == local_68) {
      if (((char)unaff_RSI[1] == '\0') && (local_68 != (longlong *)0x0)) {
        if (local_60 != '\0') goto LAB_01f0f35d;
        FUN_00d50b00();
        goto LAB_01f0f3fd;
      }
LAB_01f0f401:
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar11 = unaff_RSI[1];
      if (local_60 == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *unaff_RSI = (longlong)plVar12;
        if (((char)lVar11 != '\0') && (plVar13 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01f0f3fd:
        unaff_R15 = unaff_RSI + 1;
        *(undefined1 *)unaff_R15 = 1;
        goto LAB_01f0f401;
      }
      *unaff_RSI = (longlong)local_68;
      if (((char)lVar11 != '\0') && (plVar13 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01f0f35d:
      unaff_R15 = unaff_RSI + 1;
      *(undefined1 *)unaff_R15 = 1;
    }
    if (*unaff_RSI != 0) goto LAB_01f0de2e;
LAB_01f0f427:
    local_88 = 0;
    local_80 = (longlong *)0x0;
  }
  else {
    if (*unaff_RSI == 0) goto LAB_01f0f2f2;
LAB_01f0de20:
    if (*unaff_RSI == 0) goto LAB_01f0f427;
LAB_01f0de2e:
    local_80 = (longlong *)0x0;
    local_a8 = 0.0;
    local_88 = 0;
LAB_01f0de6a:
    do {
      cVar5 = (**(code **)(*unaff_RDI + 0x958))();
      if (cVar5 != '\0') goto LAB_01f0f676;
      uVar7 = FUN_01d3a5a0();
      if ((uVar7 & 0xfffffffb) == 1) {
        FUN_01d3abf0();
        uVar19 = FUN_01e466c0();
        uVar22 = extraout_XMM0_Qb;
        FUN_01d5e2b0();
        plVar13 = local_68;
        if (local_60 == '\0') {
          if (local_68 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01f0dfe0;
          }
        }
        else if (local_68 != (longlong *)0x0) {
LAB_01f0dfe0:
          local_60 = '\0';
          local_68 = (longlong *)0x0;
          local_58 = plVar13;
          local_50 = 0xffffffff;
          local_48 = 0;
          while( true ) {
            lVar11 = (longlong)(int)local_50;
            iVar6 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar6);
            if (*(int *)((longlong)local_58 + 0xc) <= iVar6) break;
            local_68 = *(longlong **)(local_58[2] + 8 + lVar11 * 8);
            unaff_R15 = (longlong *)((longlong)iVar6 + (longlong)local_48);
            lVar11 = (longlong)unaff_R15 * 0x10;
            uVar1 = *(undefined8 *)(*(longlong *)(unaff_RDI[0x2d] + 0x10) + lVar11);
            uVar2 = *(undefined8 *)(*(longlong *)(unaff_RDI[0x2d] + 0x10) + 8 + lVar11);
            uVar20 = (**(code **)(*unaff_RDI + 0x950))(uVar19);
            local_1f8 = (undefined4)uVar2;
            cVar5 = FUN_00d05410(uVar20,uVar1,local_1f8,param_4,uVar19,uVar22);
            if (cVar5 != '\0') {
              uVar7 = *(uint *)(unaff_RDI + 0x28);
              uVar14 = (uint)unaff_R15;
              if (uVar14 == uVar7) {
                cVar5 = FUN_01d64c70();
                bVar16 = true;
                if ((cVar5 == '\0') || (unaff_RDI[0x29] != 0)) goto LAB_01f0e1f0;
                uVar7 = *(uint *)(unaff_RDI + 0x28);
              }
              if (-1 < (int)uVar7) {
                iVar6 = *(int *)(unaff_RDI[0x2d] + 0x18);
                iVar8 = iVar6 + 0xf;
                if (-1 < iVar6) {
                  iVar8 = iVar6;
                }
                if ((int)uVar7 < iVar8 >> 4) {
                  lVar3 = *(longlong *)(unaff_RDI[0x2d] + 0x10);
                  (**(code **)(*unaff_RDI + 0x618))
                            (*(undefined8 *)(lVar3 + (ulonglong)uVar7 * 0x10),
                             *(undefined8 *)(lVar3 + 8 + (ulonglong)uVar7 * 0x10));
                }
              }
              *(uint *)(unaff_RDI + 0x28) = uVar14;
              if (uVar14 != 0xffffffff) {
                (**(code **)(*unaff_RDI + 0x618))
                          (*(undefined8 *)(*(longlong *)(unaff_RDI[0x2d] + 0x10) + lVar11),
                           *(undefined8 *)(*(longlong *)(unaff_RDI[0x2d] + 0x10) + 8 + lVar11));
              }
              cVar5 = FUN_01d64c70();
              bVar16 = true;
              if (cVar5 == '\0') goto LAB_01f0e1f0;
              FUN_01d64cb0();
              uVar7 = FUN_01d5b230();
              unaff_R15 = (longlong *)(ulonglong)uVar7;
              if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (uVar7 == 0) goto LAB_01f0e1f0;
              if (unaff_RDI[0x29] != 0) {
                FUN_01d64cb0();
                if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01f0e1f0;
              }
              if ((char)unaff_RDI[0x31] != '\0') {
                FUN_01d64cb0();
                unaff_R15 = local_78;
                if (local_70 == '\0') {
                  if (local_78 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_70 = '\0';
                }
                FUN_01f11410();
                if (unaff_R15 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              FUN_01f10600();
              FUN_002a0a30();
              bVar17 = false;
              bVar16 = false;
              goto LAB_01f0e1fb;
            }
            if (local_50._4_4_ != 0) {
              if (local_50._4_4_ < 1) {
                iVar6 = -local_50._4_4_;
              }
              else {
                local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
                FUN_00d23690();
                local_48 = local_48 + local_50._4_4_;
                iVar6 = 0;
              }
              local_50 = CONCAT44(iVar6,(int)local_50);
            }
          }
          bVar16 = false;
LAB_01f0e1f0:
          FUN_002a0a30();
          bVar17 = true;
LAB_01f0e1fb:
          FUN_00d50b20();
          if (!bVar17) goto LAB_01f0f676;
          if (bVar16) goto LAB_01f0f1e0;
        }
        if ((int)unaff_RDI[0x28] != -1) {
          *(undefined4 *)(unaff_RDI + 0x28) = 0xffffffff;
          (**(code **)(*unaff_RDI + 0x620))();
        }
        plVar13 = (longlong *)unaff_RDI[0x2a];
        if (plVar13 == (longlong *)0x0) goto LAB_01f0f1e0;
        FUN_01d3abf0();
        (**(code **)(*plVar13 + 0x940))();
        plVar13 = local_68;
        if ((((local_60 == '\0') && (local_68 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_60 != '\0')) && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        unaff_R15 = (longlong *)unaff_RDI[0x2a];
        plVar12 = plVar13;
        if (unaff_R15 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        while (plVar12 == (longlong *)0x0) {
          plVar12 = (longlong *)unaff_R15[0x2a];
          if (plVar12 == (longlong *)0x0) goto LAB_01f0e722;
          if (plVar12 != unaff_R15) {
            FUN_00d50b00();
            FUN_00d50b20();
            unaff_R15 = plVar12;
          }
          FUN_01d3abf0();
          (**(code **)(*unaff_R15 + 0x940))();
          plVar12 = local_68;
          if (local_68 == plVar13) {
LAB_01f0e42d:
            plVar12 = plVar13;
            if (local_60 != '\0') {
LAB_01f0e437:
              if (local_68 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
          }
          else {
            if (local_60 == '\0') {
              if (local_68 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if (plVar13 != (longlong *)0x0) {
                FUN_00d50b20();
                plVar13 = plVar12;
                goto LAB_01f0e42d;
              }
              if (local_60 == '\0') goto LAB_01f0e390;
              goto LAB_01f0e437;
            }
            if (plVar13 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
LAB_01f0e390:
          plVar13 = (longlong *)0x0;
        }
        FUN_01d64cb0();
        plVar4 = local_68;
        plVar13 = (longlong *)unaff_RDI[0x27];
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar4 != plVar13) {
          plVar13 = (longlong *)unaff_RDI[0x2a];
          plVar12 = unaff_R15;
          if (plVar13 != unaff_R15) {
            if (plVar13 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            plVar12 = plVar13;
            if (unaff_R15 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          (**(code **)(*unaff_RDI + 0x938))();
          plVar12[0x29] = 0;
          FUN_01f0dcf0();
          FUN_00d50b20();
          FUN_00d50b20();
          goto LAB_01f0f676;
        }
        plVar13 = plVar12;
        if (unaff_R15 != (longlong *)0x0) {
LAB_01f0e722:
          FUN_00d50b20();
          plVar12 = plVar13;
        }
        if (plVar12 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      else if (uVar7 == 8) {
LAB_01f0df27:
        FUN_01d3b5d0();
        if (local_68 == (longlong *)0x0) {
          bVar16 = false;
        }
        else {
          FUN_01d3b5d0();
          iVar6 = FUN_00d8c7a0();
          if (iVar6 == 0) {
            bVar16 = false;
          }
          else {
            FUN_01d3b5d0();
            cVar5 = FUN_00d8ca70();
            bVar16 = cVar5 == '\x1b';
            if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar16) goto LAB_01f0f43d;
        if ((char)unaff_RDI[0x31] == '\0') {
LAB_01f0e4bb:
          uVar10 = FUN_01d3b590();
          if ((uVar10 & 0x200) != 0) {
LAB_01f0e663:
            lVar11 = unaff_RDI[0x27];
            if (lVar11 != 0) {
              FUN_00d50b00();
            }
            uVar9 = FUN_01f11570();
            *(undefined4 *)(unaff_RDI + 0x28) = uVar9;
            if (lVar11 != 0) {
              FUN_00d50b20();
            }
            (**(code **)(*unaff_RDI + 0x620))();
            goto LAB_01f0f1e0;
          }
          if ((char)unaff_RDI[0x31] != '\0') goto LAB_01f0e4dd;
LAB_01f0e4ff:
          uVar10 = FUN_01d3b590();
          if ((uVar10 & 0x100) != 0) {
LAB_01f0e6c1:
            lVar11 = unaff_RDI[0x27];
            if (lVar11 != 0) {
              FUN_00d50b00();
            }
            uVar9 = FUN_01f116d0();
            *(undefined4 *)(unaff_RDI + 0x28) = uVar9;
            if (lVar11 != 0) {
              FUN_00d50b20();
            }
            (**(code **)(*unaff_RDI + 0x620))();
            goto LAB_01f0f1e0;
          }
        }
        else {
          uVar10 = FUN_01d3b590();
          if ((uVar10 & 0x800) != 0) goto LAB_01f0e663;
          if ((char)unaff_RDI[0x31] == '\0') goto LAB_01f0e4bb;
LAB_01f0e4dd:
          uVar10 = FUN_01d3b590();
          if ((uVar10 & 0x400) != 0) goto LAB_01f0e6c1;
          if ((char)unaff_RDI[0x31] == '\0') goto LAB_01f0e4ff;
        }
        if (unaff_RDI[0x2a] == 0) {
LAB_01f0e565:
          if ((char)unaff_RDI[0x31] != '\0') goto LAB_01f0e570;
LAB_01f0e592:
          uVar10 = FUN_01d3b590();
          if ((uVar10 & 0x800) == 0) {
LAB_01f0e5a9:
            FUN_01d3b5d0();
            iVar6 = FUN_00d8c7a0();
            if (iVar6 == 0) {
LAB_01f0e5f4:
              FUN_01d3b5d0();
              iVar8 = FUN_00d8c7a0();
              if (iVar8 == 0) {
                bVar16 = false;
              }
              else {
                FUN_01d3b5d0();
                cVar5 = FUN_00d8ca70();
                bVar16 = cVar5 == ' ';
                if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (iVar6 != 0) goto LAB_01f0e964;
            }
            else {
              FUN_01d3b5d0();
              cVar5 = FUN_00d8ca70();
              bVar16 = true;
              if (cVar5 != '\r') goto LAB_01f0e5f4;
LAB_01f0e964:
              if ((local_150 != '\0') && (local_158 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (!bVar16) {
              FUN_01d3b5d0();
              plVar13 = local_68;
              if (local_60 == '\0') {
                if (local_68 != (longlong *)0x0) {
                  FUN_00d50b00();
                  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01f0eb60;
                }
              }
              else if (local_68 != (longlong *)0x0) {
LAB_01f0eb60:
                iVar6 = FUN_00d8c7a0();
                if (iVar6 == 1) {
                  uVar15 = (undefined7)((ulonglong)unaff_R15 >> 8);
                  if ((local_a8 != DAT_02390448) || (NAN(local_a8) || NAN(DAT_02390448))) {
                    dVar21 = (double)FUN_00e7d6f0();
                    if ((dVar21 - local_a8 <= DAT_023942d0) || (local_80 == (longlong *)0x0)) {
                      if (local_80 != (longlong *)0x0) {
                        local_98 = local_80;
                        local_b8 = plVar13;
                        FUN_00083ea0(2,&local_b8);
                        FUN_00d8cb40();
                        plVar12 = local_78;
                        if (local_70 == '\0') {
                          if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0'))
                             && (local_78 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        else {
                          local_70 = '\0';
                        }
                        local_68 = (longlong *)&DAT_0253d630;
                        if ((local_40 != '\0') && (CONCAT44(uStack_44,local_48) != 0)) {
                          FUN_00d50b20();
                        }
                        local_68 = &DAT_024c5048;
                        if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (plVar12 == local_80) {
                          if (((char)local_88 != '\0') || (plVar12 == (longlong *)0x0)) {
                            unaff_R15 = (longlong *)(local_88 & 0xffffffff);
                            goto LAB_01f0ef7a;
                          }
                          unaff_R15 = (longlong *)CONCAT71(uVar15,1);
                          local_88 = 0;
                          FUN_00d50b00();
                        }
                        else {
                          if (plVar12 != (longlong *)0x0) {
                            FUN_00d50b00();
                          }
                          unaff_R15 = (longlong *)CONCAT71(uVar15,1);
                          if ((char)local_88 == '\0') {
                            local_80 = plVar12;
                          }
                          else {
                            FUN_00d50b20();
                            local_80 = plVar12;
                          }
LAB_01f0ef7a:
                          plVar13 = local_80;
                          if (plVar12 == (longlong *)0x0) goto LAB_01f0ef8b;
                        }
                        plVar13 = local_80;
                        FUN_00d50b20();
                        goto LAB_01f0ef8b;
                      }
                    }
                    else {
                      if ((char)local_88 != '\0') {
                        FUN_00d50b20();
                      }
                      local_88 = 0;
                    }
                    FUN_00d50b00();
                    unaff_R15 = (longlong *)CONCAT71(uVar15,1);
                  }
                  else if (plVar13 == local_80) {
                    if ((char)local_88 == '\0') {
                      unaff_R15 = (longlong *)CONCAT71(uVar15,1);
                      FUN_00d50b00();
                      plVar13 = local_80;
                    }
                    else {
                      unaff_R15 = (longlong *)(local_88 & 0xffffffff);
                      plVar13 = local_80;
                    }
                  }
                  else {
                    FUN_00d50b00();
                    unaff_R15 = (longlong *)CONCAT71(uVar15,1);
                    if (((char)local_88 != '\0') && (local_80 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
LAB_01f0ef8b:
                  local_80 = plVar13;
                  if (plVar13 != (longlong *)0x0) {
                    FUN_01d5e2b0();
                    plVar13 = local_68;
                    if (local_60 == '\0') {
                      if (local_68 != (longlong *)0x0) {
                        FUN_00d50b00();
                        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        goto LAB_01f0efe5;
                      }
                    }
                    else if (local_68 != (longlong *)0x0) {
LAB_01f0efe5:
                      local_60 = '\0';
                      local_68 = (longlong *)0x0;
                      local_58 = plVar13;
                      local_50 = 0xffffffff;
                      local_48 = 0;
                      while( true ) {
                        lVar11 = (longlong)(int)local_50;
                        iVar6 = (int)local_50 + 1;
                        local_50 = CONCAT44(local_50._4_4_,iVar6);
                        if (*(int *)((longlong)local_58 + 0xc) <= iVar6) break;
                        local_68 = *(longlong **)(local_58[2] + 8 + lVar11 * 8);
                        FUN_01d65230();
                        if (local_78 == (longlong *)0x0) {
                          cVar5 = '\0';
                        }
                        else {
                          FUN_01d65230();
                          iVar6 = FUN_00d8c7a0();
                          iVar8 = FUN_00d8c7a0();
                          if (iVar6 < iVar8) {
                            cVar5 = '\0';
                          }
                          else {
                            FUN_01d65230();
                            FUN_00d8c7a0();
                            FUN_00e7b4e0();
                            FUN_00d8e3d0();
                            cVar5 = (**(code **)(*local_b8 + 0x318))();
                            if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                              FUN_00d50b20();
                            }
                            if ((local_140 != '\0') && (local_148 != 0)) {
                              FUN_00d50b20();
                            }
                          }
                          if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (cVar5 != '\0') {
                          *(int *)(unaff_RDI + 0x28) = local_48 + (int)local_50;
                          (**(code **)(*unaff_RDI + 0x620))();
                          break;
                        }
                        if (local_50._4_4_ != 0) {
                          if (local_50._4_4_ < 1) {
                            iVar6 = -local_50._4_4_;
                          }
                          else {
                            local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
                            FUN_00d23690();
                            local_48 = local_48 + local_50._4_4_;
                            iVar6 = 0;
                          }
                          local_50 = CONCAT44(iVar6,(int)local_50);
                        }
                      }
                      FUN_002a0a30();
                      FUN_00d50b20();
                    }
                  }
                  local_a8 = (double)FUN_00e7d6f0();
                  local_88 = (ulonglong)unaff_R15 & 0xffffffff;
                }
                FUN_00d50b20();
              }
              goto LAB_01f0f1e0;
            }
          }
        }
        else {
          if ((char)unaff_RDI[0x31] == '\0') {
LAB_01f0e54e:
            uVar10 = FUN_01d3b590();
            if ((uVar10 & 0x400) == 0) goto LAB_01f0e565;
LAB_01f0f746:
            plVar13 = (longlong *)unaff_RDI[0x2a];
            if (plVar13 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            (**(code **)(*unaff_RDI + 0x938))();
            plVar13[0x29] = 0;
            (**(code **)(*plVar13 + 0x3c0))();
            FUN_00d50b20();
            goto LAB_01f0f676;
          }
          uVar10 = FUN_01d3b590();
          if ((uVar10 & 0x100) != 0) goto LAB_01f0f746;
          if ((char)unaff_RDI[0x31] == '\0') goto LAB_01f0e54e;
LAB_01f0e570:
          uVar10 = FUN_01d3b590();
          if ((uVar10 & 0x200) == 0) {
            if ((char)unaff_RDI[0x31] == '\0') goto LAB_01f0e592;
            goto LAB_01f0e5a9;
          }
        }
        if ((int)unaff_RDI[0x28] == -1) {
          bVar16 = false;
          plVar13 = (longlong *)0x0;
LAB_01f0eb05:
          uVar10 = FUN_01d3b590();
          bVar18 = (uVar10 & 0xa00) == 0;
          bVar17 = !bVar18;
          unaff_R15 = (longlong *)(ulonglong)((uint)bVar18 * 2);
          if (bVar16) {
LAB_01f0edb5:
            if (plVar13 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          FUN_01d5b240();
          plVar13 = local_68;
          if (local_68 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
            bVar16 = false;
LAB_01f0ea50:
            bVar17 = false;
          }
          else {
            if (local_60 == '\0') {
              FUN_00d50b00();
            }
            else {
              local_60 = '\0';
            }
            cVar5 = FUN_01d64c70();
            bVar16 = true;
            if (cVar5 == '\0') goto LAB_01f0ea50;
            FUN_01d64cb0();
            iVar6 = FUN_01d5b230();
            bVar17 = iVar6 != 0;
            if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (!bVar17) goto LAB_01f0eb05;
          cVar5 = FUN_01d66e40();
          if (cVar5 == '\0') {
LAB_01f0ec86:
            FUN_01d64cb0();
            plVar12 = local_68;
            if (local_60 == '\0') {
              if (local_68 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            iVar6 = FUN_01f11410();
            if (plVar12 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (iVar6 == -1) {
              uVar22 = FUN_01d64cb0();
              plVar12 = local_68;
              if (local_60 == '\0') {
                if (local_68 != (longlong *)0x0) {
                  uVar22 = FUN_00d50b00();
                }
              }
              else {
                local_60 = '\0';
              }
              FUN_01f11570(uVar22,0xffffffff);
              if (plVar12 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_01f10600();
            unaff_R15 = (longlong *)((longlong)&MACH_HEADER.magic + 1);
          }
          else {
            FUN_01d65460();
            if (local_68 == (longlong *)0x0) {
              bVar17 = false;
            }
            else {
              FUN_01d3b5d0();
              iVar6 = FUN_00d8c7a0();
              if (iVar6 == 0) {
                bVar17 = false;
              }
              else {
                FUN_01d3b5d0();
                cVar5 = FUN_00d8ca70();
                bVar17 = cVar5 == '\r';
                if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (!bVar17) goto LAB_01f0ec86;
            unaff_R15 = (longlong *)((longlong)&MACH_HEADER.magic + 2);
          }
          bVar17 = false;
          if (bVar16) goto LAB_01f0edb5;
        }
        if (!bVar17) {
LAB_01f0e931:
          iVar6 = (int)unaff_R15;
          if ((iVar6 != 0) && (iVar6 != 3)) {
            if (iVar6 == 2) goto LAB_01f0f43d;
            goto LAB_01f0f676;
          }
        }
      }
      else if (uVar7 == 6) {
        if (((local_a0 == DAT_02390448) && (!NAN(local_a0) && !NAN(DAT_02390448))) ||
           (dVar21 = (double)FUN_00e7d6f0(), DAT_023b3490 <= dVar21 - local_a0)) {
          plVar13 = (longlong *)unaff_RDI[0x2a];
          if (plVar13 != (longlong *)0x0) {
            FUN_01d3abf0();
            (**(code **)(*plVar13 + 0x940))();
            if (local_60 == '\0') {
              if (local_68 == (longlong *)0x0) goto LAB_01f0f43d;
              FUN_00d50b00();
              if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else if (local_68 == (longlong *)0x0) goto LAB_01f0f43d;
            cVar5 = FUN_01d64c70();
            bVar16 = true;
            unaff_R15 = (longlong *)0x0;
            if (cVar5 != '\0') {
              FUN_01d64cb0();
              plVar12 = local_68;
              plVar13 = (longlong *)unaff_RDI[0x27];
              if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar12 == plVar13) {
                cVar5 = FUN_01d66e40();
                bVar16 = true;
                if (cVar5 == '\0') {
                  unaff_R15 = (longlong *)((longlong)&MACH_HEADER.magic + 3);
                  bVar16 = false;
                }
                else {
                  cVar5 = FUN_01d65320();
                  plVar13 = (longlong *)0x0;
                  unaff_R15 = (longlong *)0x0;
                  if (cVar5 != '\0') {
                    FUN_01d65460();
                    plVar12 = local_68;
                    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    unaff_R15 = plVar13;
                    if (plVar12 != (longlong *)0x0) {
                      FUN_01d66680();
                      FUN_01d65ea0();
                      FUN_01d610b0();
                      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      FUN_01d65ea0();
                      cVar5 = FUN_01d5e5d0();
                      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (cVar5 == '\0') {
                        FUN_01d661f0();
                      }
                      else {
                        FUN_01d66740();
                      }
                    }
                  }
                }
              }
              else {
                bVar16 = true;
              }
            }
            FUN_00d50b20();
            if (!bVar16) goto LAB_01f0e931;
          }
          goto LAB_01f0f43d;
        }
      }
      else if (uVar7 == 2) goto LAB_01f0df27;
LAB_01f0f1e0:
      (**(code **)(*unaff_RDI + 0x658))();
      plVar12 = local_68;
      plVar13 = (longlong *)*unaff_RSI;
      if (plVar13 == local_68) {
        if (((char)unaff_RSI[1] == '\0') && (local_68 != (longlong *)0x0)) {
          plVar12 = plVar13;
          if (local_60 != '\0') goto LAB_01f0de50;
          FUN_00d50b00();
          goto LAB_01f0f296;
        }
LAB_01f0f29e:
        lVar11 = *unaff_RSI;
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar11 == 0) goto LAB_01f0f43d;
        if (*unaff_RSI == 0) break;
        goto LAB_01f0de6a;
      }
      cVar5 = (char)unaff_RSI[1];
      unaff_R15 = (longlong *)CONCAT71((int7)((ulonglong)unaff_R15 >> 8),cVar5);
      if (local_60 == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *unaff_RSI = (longlong)plVar12;
        if ((cVar5 != '\0') && (plVar13 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01f0f296:
        *(undefined1 *)(unaff_RSI + 1) = 1;
        goto LAB_01f0f29e;
      }
      *unaff_RSI = (longlong)local_68;
      if ((cVar5 != '\0') && (plVar13 != (longlong *)0x0)) {
        FUN_00d50b20();
        plVar12 = (longlong *)*unaff_RSI;
      }
LAB_01f0de50:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      if (plVar12 == (longlong *)0x0) goto LAB_01f0f43d;
    } while (plVar12 != (longlong *)0x0);
  }
  *(undefined4 *)(unaff_RDI + 0x28) = 0xffffffff;
LAB_01f0f43d:
  (**(code **)(*unaff_RDI + 0x938))();
  if ((*unaff_RSI != 0) && (iVar6 = FUN_01d3a5a0(), iVar6 == 2)) {
    FUN_01d3b5d0();
    if (local_68 == (longlong *)0x0) {
      bVar16 = false;
    }
    else {
      FUN_01d3b5d0();
      iVar6 = FUN_00d8c7a0();
      if (iVar6 == 0) {
        bVar16 = false;
      }
      else {
        FUN_01d3b5d0();
        cVar5 = FUN_00d8ca70();
        bVar16 = cVar5 == '\x1b';
        if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar16) goto LAB_01f0f676;
  }
  lVar11 = unaff_RDI[0x28];
  if ((int)lVar11 != -1) {
    uVar22 = FUN_01d5e2b0();
    iVar6 = *(int *)((longlong)local_68 + 0xc);
    if (local_60 != '\0') {
      uVar22 = FUN_00d50b20();
    }
    if ((int)lVar11 < iVar6) {
      FUN_01d5b240(uVar22,(int)unaff_RDI[0x28]);
      plVar13 = local_68;
      if ((((local_60 == '\0') && (local_68 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_60 != '\0')) && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      cVar5 = FUN_01d65320();
      if (cVar5 != '\0') {
        FUN_01d66680();
        FUN_01d610b0();
        FUN_01d65ea0();
        cVar5 = FUN_01d5e5d0();
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar5 == '\0') {
          FUN_01d661f0();
        }
        else {
          FUN_01d66740();
        }
      }
      if (plVar13 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
LAB_01f0f676:
  if (((char)local_88 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


