// Function: FUN_01b2ed90
// Address: 01b2ed90
// Size: 3131 bytes
// Class: MUScaleOpenPanel


/* WARNING: Removing unreachable block (ram,0x01b2f7f7) */
/* WARNING: Removing unreachable block (ram,0x01b2f803) */
/* WARNING: Removing unreachable block (ram,0x01b2f73c) */
/* WARNING: Removing unreachable block (ram,0x01b2f748) */
/* WARNING: Removing unreachable block (ram,0x01b2f9bc) */
/* WARNING: Removing unreachable block (ram,0x01b2f9c8) */
/* WARNING: Removing unreachable block (ram,0x01b2ee71) */
/* WARNING: Removing unreachable block (ram,0x01b2ee7d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b2ed90(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float local_158;
  float local_138;
  float fStack_134;
  float local_c8;
  longlong local_b0;
  char local_a8;
  float local_8c;
  float local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  float local_44;
  longlong *local_40;
  char local_38;
  
  fVar15 = (float)((ulonglong)param_2 >> 0x20);
  cVar4 = (**(code **)(*unaff_RDI + 0x9a0))();
  if (cVar4 != '\0') {
    FUN_01e3f820();
    iVar5 = FUN_01d3a5a0();
    if ((iVar5 == 1) && (iVar5 = FUN_01d3b630(), iVar5 == 1)) {
      FUN_01d3abf0();
      uVar18 = FUN_01e466c0();
      uVar19 = FUN_01b2e910();
      auVar21._8_4_ = (int)extraout_XMM0_Qb;
      auVar21._0_8_ = uVar19;
      auVar21._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
      cVar4 = FUN_00d05410();
      if (cVar4 != '\0') {
        *(byte *)((longlong)unaff_RDI + 0x1d9) = *(byte *)((longlong)unaff_RDI + 0x1d9) ^ 1;
                    /* WARNING: Could not recover jumptable at 0x01b2ee41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_RDI + 0x620))();
        return;
      }
      iVar5 = FUN_01d3b620();
      fStack_134 = (float)((ulonglong)uVar18 >> 0x20);
      if (((iVar5 == 2) && ((char)unaff_RDI[0x3b] != '\0')) &&
         (lVar7 = unaff_RDI[0x39], 0xf < *(int *)(lVar7 + 0x18))) {
        local_44 = DAT_02411fd8;
        uVar11 = 0xffffffff;
        lVar9 = 8;
        uVar10 = 0;
        do {
          uVar1 = *(ulonglong *)(*(longlong *)(lVar7 + 0x10) + -8 + lVar9);
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar1;
          cVar4 = FUN_00d05410(lVar7,uVar1,(int)*(undefined8 *)(*(longlong *)(lVar7 + 0x10) + lVar9)
                              );
          lVar7 = unaff_RDI[0x39];
          if (cVar4 != '\0') {
            fVar13 = (float)((uint)((*(float *)(*(longlong *)(lVar7 + 0x10) + 4 + lVar9) *
                                     DAT_0239011c +
                                    *(float *)(*(longlong *)(lVar7 + 0x10) + -4 + lVar9)) -
                                   fStack_134) & _DAT_02390140);
            auVar21 = ZEXT416((uint)local_44);
            if (fVar13 < local_44) {
              uVar11 = uVar10 & 0xffffffff;
              local_44 = fVar13;
            }
          }
          uVar10 = uVar10 + 1;
          iVar5 = *(int *)(lVar7 + 0x18);
          iVar8 = iVar5 + 0xf;
          if (-1 < iVar5) {
            iVar8 = iVar5;
          }
          lVar9 = lVar9 + 0x10;
        } while ((longlong)uVar10 < (longlong)(iVar8 >> 4));
        if ((int)uVar11 != -1) {
          lVar7 = *unaff_RDI;
          _exp2f(*(float *)(*(longlong *)(unaff_RDI[0x3a] + 0x10) + (longlong)(int)uVar11 * 4) *
                 DAT_023941f4);
          (**(code **)(lVar7 + 0x928))();
          (**(code **)(*unaff_RDI + 0xa18))();
          if (local_40 == (longlong *)0x0) {
            bVar12 = false;
          }
          else {
            (**(code **)(*unaff_RDI + 0xa28))();
            bVar12 = local_b0 != 0;
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (!bVar12) {
            return;
          }
          puVar6 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar6 = &DAT_026717b8;
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          *(undefined8 *)((longlong)puVar6 + 0x2c) = 0;
          *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
          (*DAT_026717d0)();
          (**(code **)(*unaff_RDI + 0xa18))();
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_01caeb20();
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar18 = (**(code **)(*unaff_RDI + 0xa28))();
          (**(code **)(*local_40 + 0x3b8))(uVar18,1);
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          return;
        }
      }
      (**(code **)(*unaff_RDI + 0x930))();
      fVar14 = (float)_log10f();
      FUN_01e436c0();
      FUN_01e436c0();
      fVar13 = *(float *)(unaff_RDI + 0x3d);
      fVar15 = fVar15 * DAT_0239011c;
      if ((fStack_134 <= fVar15) &&
         (plVar2 = (longlong *)unaff_RDI[0x40], plVar2 != (longlong *)0x0)) {
        FUN_00d50b00();
        (**(code **)(*plVar2 + 0x18))();
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      pcVar3 = DAT_026717d0;
      local_158 = auVar21._0_4_;
      fVar14 = fVar14 * local_158 * DAT_02390120;
      local_138 = (float)uVar18;
      local_158 = local_138;
      local_c8 = local_138;
      local_8c = fVar14;
LAB_01b2f140:
      (**(code **)(*unaff_RDI + 0x658))();
      plVar2 = (longlong *)*unaff_RSI;
      if (plVar2 == local_40) {
        if (((char)unaff_RSI[1] == '\0') && (local_40 != (longlong *)0x0)) {
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01b2f1ed;
          }
          goto LAB_01b2f1a3;
        }
LAB_01b2f1ad:
        if (*unaff_RSI == 0) goto LAB_01b2f829;
LAB_01b2f200:
        iVar5 = FUN_01d3a5a0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar5 == 6) goto LAB_01b2f83d;
        iVar5 = FUN_01d3a5a0();
        if (iVar5 == 5) {
          FUN_01d3abf0();
          uVar18 = FUN_01e466c0();
          fVar17 = (float)uVar18;
          uStack_54 = (uint)((ulonglong)uVar18 >> 0x20);
          uStack_50 = (uint)extraout_XMM0_Qb_00;
          uStack_4c = (uint)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
          auVar26._0_4_ = (uint)(fVar17 - local_c8) & _DAT_023945e0;
          auVar26._4_4_ = uStack_54 & _UNK_023945e4;
          auVar26._8_4_ = uStack_50 & _UNK_023945e8;
          auVar26._12_4_ = uStack_4c & _UNK_023945ec;
          auVar27._4_12_ = SUB1612(auVar26 | _DAT_023945f0,4);
          auVar27._0_4_ = SUB164(auVar26 | _DAT_023945f0,0) + (fVar17 - local_c8);
          auVar20._0_12_ = ZEXT812(0);
          auVar20._12_4_ = 0;
          auVar21 = roundss(auVar20,auVar27,0xb);
          local_c8 = fVar17;
          if ((auVar21._0_4_ != DAT_0239424c) || (NAN(auVar21._0_4_) || NAN(DAT_0239424c))) {
            local_58 = fVar17 - local_138;
            if (fStack_134 <= fVar15) {
              if (*(int *)((longlong)unaff_RDI + 0x1dc) == 1) {
                FUN_01e436c0();
                FUN_01e436c0();
                auVar22._4_12_ = local_58._4_12_;
                auVar22._0_4_ = local_58 / (auVar27._0_4_ * DAT_02390120);
                fVar25 = (float)___exp10f(auVar22._0_8_);
                fVar17 = *(float *)(unaff_RDI + 0x3e);
                if (*(float *)(unaff_RDI + 0x3e) <= fVar25) {
                  fVar17 = fVar25;
                }
                fVar25 = *(float *)((longlong)unaff_RDI + 500);
                if (fVar17 <= *(float *)((longlong)unaff_RDI + 500)) {
                  fVar25 = fVar17;
                }
                auVar21 = ZEXT416((uint)fVar25);
                fVar17 = (float)_log10f();
                FUN_01e436c0();
                FUN_01e436c0();
                auVar28._4_12_ = auVar21._4_12_;
                auVar28._0_4_ = auVar21._0_4_ * DAT_02390120 * fVar17 + fVar13;
                fVar17 = *(float *)(unaff_RDI + 0x3d);
                if ((fVar17 != auVar28._0_4_) || (NAN(fVar17) || NAN(auVar28._0_4_))) {
                  auVar21 = auVar28;
                  FUN_01e436c0();
                  FUN_01e436c0();
                  uVar16 = ___exp10f((fVar17 - auVar28._0_4_) / (auVar21._0_4_ * DAT_02390120));
                  *(undefined4 *)((longlong)unaff_RDI + 0x1ec) = uVar16;
                  *(float *)(unaff_RDI + 0x3d) = auVar28._0_4_;
                  (**(code **)(*unaff_RDI + 0x620))();
                  (**(code **)(*unaff_RDI + 0xa18))();
                  if (local_40 == (longlong *)0x0) {
                    bVar12 = false;
                  }
                  else {
                    (**(code **)(*unaff_RDI + 0xa28))();
                    bVar12 = local_b0 != 0;
                    if ((local_a8 != '\0') && (local_b0 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (bVar12) {
                    puVar6 = (undefined8 *)FUN_00e8fc40();
                    FUN_00d4ff40();
                    *puVar6 = &DAT_026717b8;
                    puVar6[2] = 0;
                    puVar6[3] = 0;
                    puVar6[4] = 0;
                    puVar6[5] = 0;
                    *(undefined8 *)((longlong)puVar6 + 0x2c) = 0;
                    *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
                    (*pcVar3)();
                    (**(code **)(*unaff_RDI + 0xa18))();
                    if (local_38 == '\0') {
                      if (local_40 != (longlong *)0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_38 = '\0';
                    }
                    FUN_01caeb20();
                    if (local_40 != (longlong *)0x0) {
                      FUN_00d50b20();
                    }
                    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    uVar18 = (**(code **)(*unaff_RDI + 0xa28))();
                    (**(code **)(*local_40 + 0x3b8))(uVar18,1);
                    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    FUN_00d50b20();
                  }
                }
                goto LAB_01b2f140;
              }
              if (*(int *)((longlong)unaff_RDI + 0x1dc) == 0) {
                uVar10 = FUN_01d3b590();
                if ((uVar10 & 8) == 0) {
                  auVar23._0_4_ = (uint)local_58 & _DAT_023945e0;
                  auVar23._4_4_ = uStack_54 & _UNK_023945e4;
                  auVar23._8_4_ = uStack_50 & _UNK_023945e8;
                  auVar23._12_4_ = uStack_4c & _UNK_023945ec;
                  auVar24._4_12_ = SUB1612(auVar23 | _DAT_023945f0,4);
                  auVar24._0_4_ = SUB164(auVar23 | _DAT_023945f0,0) + local_58;
                  auVar21 = roundss(auVar24,auVar24,0xb);
                  fVar25 = fVar14 - auVar21._0_4_;
                  local_8c = fVar25;
                  local_158 = fVar17;
                  fVar17 = fVar25;
                }
                else {
                  fVar25 = fVar17;
                  fVar17 = (fVar17 - local_158) * DAT_0241b638 + local_8c;
                }
                auVar21 = ZEXT416((uint)fVar25);
                FUN_01e436c0();
                FUN_01e436c0();
                ___exp10f(fVar17 / (auVar21._0_4_ * DAT_02390120));
                (**(code **)(*unaff_RDI + 0x928))();
                (**(code **)(*unaff_RDI + 0xa18))();
                if (local_40 == (longlong *)0x0) {
                  bVar12 = false;
                }
                else {
                  (**(code **)(*unaff_RDI + 0xa28))();
                  bVar12 = local_b0 != 0;
                  if ((local_a8 != '\0') && (local_b0 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (bVar12) {
                  puVar6 = (undefined8 *)FUN_00e8fc40();
                  FUN_00d4ff40();
                  *puVar6 = &DAT_026717b8;
                  puVar6[2] = 0;
                  puVar6[3] = 0;
                  puVar6[4] = 0;
                  puVar6[5] = 0;
                  *(undefined8 *)((longlong)puVar6 + 0x2c) = 0;
                  *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
                  (*pcVar3)();
                  (**(code **)(*unaff_RDI + 0xa18))();
                  if (local_38 == '\0') {
                    if (local_40 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  FUN_01caeb20();
                  if (local_40 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  uVar18 = (**(code **)(*unaff_RDI + 0xa28))();
                  (**(code **)(*local_40 + 0x3b8))(uVar18,1);
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                }
                goto LAB_01b2f140;
              }
            }
            if (fVar15 < fStack_134) {
              local_58 = local_58 + fVar13;
              fVar17 = *(float *)(unaff_RDI + 0x3d);
              if ((fVar17 != local_58) || (NAN(fVar17) || NAN(local_58))) {
                FUN_01e436c0();
                FUN_01e436c0();
                uVar16 = ___exp10f((fVar17 - local_58) / (auVar27._0_4_ * DAT_02390120));
                *(undefined4 *)((longlong)unaff_RDI + 0x1ec) = uVar16;
                *(float *)(unaff_RDI + 0x3d) = local_58;
                (**(code **)(*unaff_RDI + 0x620))();
              }
            }
          }
        }
        goto LAB_01b2f140;
      }
      lVar7 = unaff_RSI[1];
      if (local_38 != '\0') {
        *unaff_RSI = (longlong)local_40;
        if (((char)lVar7 != '\0') && (plVar2 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01b2f1a3:
        *(undefined1 *)(unaff_RSI + 1) = 1;
        local_38 = '\0';
        goto LAB_01b2f1ad;
      }
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)local_40;
      if (((char)lVar7 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01b2f1ed:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      if (*unaff_RSI != 0) goto LAB_01b2f200;
LAB_01b2f829:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01b2f83d:
      if ((fStack_134 <= fVar15) &&
         (plVar2 = (longlong *)unaff_RDI[0x40], plVar2 != (longlong *)0x0)) {
        FUN_00d50b00();
        (**(code **)(*plVar2 + 0x20))();
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_01d122b0();
    }
  }
  return;
}


