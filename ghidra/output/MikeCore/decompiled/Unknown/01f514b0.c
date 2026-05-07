// Function: FUN_01f514b0
// Address: 01f514b0
// Size: 1403 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01f51534) */
/* WARNING: Removing unreachable block (ram,0x01f515d6) */
/* WARNING: Removing unreachable block (ram,0x01f51865) */
/* WARNING: Removing unreachable block (ram,0x01f515e0) */
/* WARNING: Removing unreachable block (ram,0x01f51600) */
/* WARNING: Removing unreachable block (ram,0x01f51540) */
/* WARNING: Removing unreachable block (ram,0x01f51560) */
/* WARNING: Removing unreachable block (ram,0x01f51542) */
/* WARNING: Removing unreachable block (ram,0x01f51562) */
/* WARNING: Removing unreachable block (ram,0x01f515e2) */
/* WARNING: Removing unreachable block (ram,0x01f51602) */

longlong * FUN_01f514b0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float fVar18;
  float extraout_XMM0_Dd_02;
  undefined1 in_XMM1 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined1 auVar25 [16];
  float local_88;
  float local_78;
  float fStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  longlong local_60;
  int local_48;
  
  fVar16 = (float)((ulonglong)param_1 >> 0x20);
  fVar12 = (float)param_1;
  if ((DAT_028baaa0 != '\x01') || (lVar7 = DAT_028baa90, DAT_028baa90 == 0)) {
    FUN_01f50410();
    lVar7 = DAT_028baa90;
  }
  DAT_028baa90 = lVar7;
  if (lVar7 != 0) {
    local_48 = -1;
    if (unaff_RSI == 0) {
      do {
        lVar9 = (longlong)local_48;
        local_48 = local_48 + 1;
        if (*(int *)(lVar7 + 0xc) <= local_48) goto LAB_01f51653;
        local_60 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + 8 + lVar9 * 8);
        uVar24 = FUN_01f51240();
        in_XMM1._8_4_ = extraout_XMM0_Dc_00;
        in_XMM1._0_8_ = uVar24;
        in_XMM1._12_4_ = extraout_XMM0_Dd_00;
        cVar8 = FUN_00d05410(fVar12);
      } while (cVar8 == '\0');
    }
    else {
      do {
        lVar9 = (longlong)local_48;
        local_48 = local_48 + 1;
        if (*(int *)(lVar7 + 0xc) <= local_48) goto LAB_01f51653;
        local_60 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + 8 + lVar9 * 8);
        FUN_00d50b00();
        uVar24 = FUN_01f51240();
        in_XMM1._8_4_ = extraout_XMM0_Dc;
        in_XMM1._0_8_ = uVar24;
        in_XMM1._12_4_ = extraout_XMM0_Dd;
        cVar8 = FUN_00d05410(fVar12);
        FUN_00d50b20();
      } while (cVar8 == '\0');
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = local_60;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_0065c9a0();
    return unaff_RDI;
  }
LAB_01f518d1:
  FUN_01f50d20();
  return unaff_RDI;
LAB_01f51653:
  FUN_0065c9a0();
  lVar7 = DAT_028baa90;
  if (DAT_028baa90 != 0) {
    if (*(int *)(DAT_028baa90 + 0xc) < 1) {
      bVar5 = false;
      lVar9 = 0;
    }
    else {
      lVar10 = 0;
      if (unaff_RSI == 0) {
        lVar11 = 0;
        fVar14 = DAT_02391078;
        bVar6 = false;
        do {
          lVar1 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + lVar10 * 8);
          uVar24 = FUN_01f51240();
          fVar13 = (float)((ulonglong)uVar24 >> 0x20);
          fVar17 = (float)uVar24;
          auVar19._8_4_ = in_XMM0_Dc;
          auVar19._0_8_ = param_1;
          auVar19._12_4_ = in_XMM0_Dd;
          if (fVar17 <= fVar12) {
            fVar17 = fVar17 + in_XMM1._0_4_ + DAT_02390d00;
            if (fVar17 < fVar12) {
              auVar3._8_4_ = in_XMM0_Dc;
              auVar3._0_8_ = param_1;
              auVar3._12_4_ = in_XMM0_Dd;
              auVar19._4_12_ = auVar3._4_12_;
              auVar19._0_4_ = fVar12 - (fVar12 - fVar17);
            }
          }
          else {
            auVar25._8_4_ = extraout_XMM0_Dc_02;
            auVar25._0_8_ = uVar24;
            auVar25._12_4_ = extraout_XMM0_Dd_02;
            auVar19._4_12_ = auVar25._4_12_;
            auVar19._0_4_ = (fVar17 - fVar12) + fVar12;
          }
          if (fVar13 <= fVar16) {
            fVar15 = fVar13 + in_XMM1._4_4_ + DAT_02390d00;
            fVar17 = fVar16;
            fVar13 = fVar16;
            fVar18 = in_XMM0_Dd;
            if (fVar15 < fVar16) {
              fVar17 = fVar16 - (fVar16 - fVar15);
            }
          }
          else {
            fVar17 = (fVar13 - fVar16) + fVar16;
            fVar18 = extraout_XMM0_Dd_02;
          }
          auVar2._4_4_ = fVar13;
          auVar2._0_4_ = fVar17;
          auVar2._8_4_ = fVar18;
          auVar2._12_4_ = fVar18;
          auVar19 = insertps(auVar19,auVar2,0x10);
          fVar13 = fVar12 - auVar19._0_4_;
          fVar17 = fVar16 - auVar19._4_4_;
          fVar18 = in_XMM0_Dd - auVar19._12_4_;
          fVar17 = fVar17 * fVar17;
          fVar18 = fVar18 * fVar18;
          auVar22._4_4_ = fVar17;
          auVar22._0_4_ = fVar17;
          auVar22._8_4_ = fVar18;
          auVar22._12_4_ = fVar18;
          auVar23._4_12_ = auVar22._4_12_;
          auVar23._0_4_ = SQRT(fVar17 + fVar13 * fVar13);
          lVar9 = lVar11;
          in_XMM1 = auVar23;
          bVar5 = bVar6;
          if (auVar23._0_4_ < fVar14) {
            fVar14 = auVar23._0_4_;
            if (lVar1 == lVar11) {
              if ((!bVar6) && (lVar1 != 0)) {
                bVar5 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
              bVar5 = true;
              lVar9 = lVar1;
              if ((bVar6) && (lVar11 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          lVar10 = lVar10 + 1;
          lVar11 = lVar9;
          bVar6 = bVar5;
        } while ((int)lVar10 < *(int *)(lVar7 + 0xc));
      }
      else {
        bVar5 = false;
        lVar11 = 0;
        fVar14 = DAT_02391078;
        do {
          lVar1 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + lVar10 * 8);
          FUN_00d50b00();
          uVar24 = FUN_01f51240();
          fVar17 = (float)((ulonglong)uVar24 >> 0x20);
          fVar13 = (float)uVar24;
          if (fVar13 <= fVar12) {
            fVar13 = fVar13 + in_XMM1._0_4_ + DAT_02390d00;
            local_78 = fVar12;
            fStack_74 = fVar16;
            uStack_70 = in_XMM0_Dc;
            fStack_6c = in_XMM0_Dd;
            if (fVar13 < fVar12) {
              local_78 = fVar12 - (fVar12 - fVar13);
            }
          }
          else {
            local_78 = (fVar13 - fVar12) + fVar12;
            fStack_74 = fVar17;
            uStack_70 = extraout_XMM0_Dc_01;
            fStack_6c = extraout_XMM0_Dd_01;
          }
          if (fVar17 <= fVar16) {
            fVar13 = fVar17 + in_XMM1._4_4_ + DAT_02390d00;
            local_88 = fVar16;
            if (fVar13 < fVar16) {
              local_88 = fVar16 - (fVar16 - fVar13);
            }
          }
          else {
            local_88 = (fVar17 - fVar16) + fVar16;
          }
          FUN_00d50b20();
          auVar4._4_4_ = fStack_74;
          auVar4._0_4_ = local_78;
          auVar4._8_4_ = uStack_70;
          auVar4._12_4_ = fStack_6c;
          auVar19 = insertps(auVar4,local_88,0x10);
          fVar13 = fVar12 - auVar19._0_4_;
          fVar17 = fVar16 - auVar19._4_4_;
          fVar18 = in_XMM0_Dd - auVar19._12_4_;
          fVar17 = fVar17 * fVar17;
          fVar18 = fVar18 * fVar18;
          auVar20._4_4_ = fVar17;
          auVar20._0_4_ = fVar17;
          auVar20._8_4_ = fVar18;
          auVar20._12_4_ = fVar18;
          auVar21._4_12_ = auVar20._4_12_;
          auVar21._0_4_ = SQRT(fVar17 + fVar13 * fVar13);
          lVar9 = lVar11;
          in_XMM1 = auVar21;
          bVar6 = bVar5;
          if (auVar21._0_4_ < fVar14) {
            fVar14 = auVar21._0_4_;
            if (lVar1 == lVar11) {
              if ((!bVar5) && (lVar1 != 0)) {
                FUN_00d50b00();
                bVar6 = true;
              }
            }
            else {
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
              bVar6 = true;
              lVar9 = lVar1;
              if ((bVar5) && (lVar11 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          bVar5 = bVar6;
          lVar10 = lVar10 + 1;
          lVar11 = lVar9;
        } while ((int)lVar10 < *(int *)(lVar7 + 0xc));
      }
    }
    FUN_0065c9a0();
    if (lVar9 != 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (!bVar5) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar9;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return unaff_RDI;
    }
  }
  goto LAB_01f518d1;
}


