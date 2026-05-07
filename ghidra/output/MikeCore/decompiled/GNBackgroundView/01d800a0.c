// Function: FUN_01d800a0
// Address: 01d800a0
// Size: 872 bytes
// Class: GNBackgroundView


/* WARNING: Type propagation algorithm not settling */

void FUN_01d800a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  longlong unaff_RDI;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar17;
  float fVar18;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  float fVar19;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar20;
  float fVar23;
  float in_XMM1_Dc;
  float fVar24;
  float in_XMM1_Dd;
  float fVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_84;
  float fStack_7c;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [8];
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [16];
  
  local_78._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  local_78._0_4_ = (undefined4)param_2;
  local_48._0_8_ = FUN_01e3f820();
  local_48._8_8_ = extraout_XMM0_Qb;
  fStack_70 = in_XMM1_Dc;
  fStack_6c = in_XMM1_Dd;
  fVar20 = (float)local_78._0_4_;
  fVar23 = (float)local_78._4_4_;
  fVar24 = in_XMM1_Dc;
  fVar25 = in_XMM1_Dd;
  uVar11 = FUN_01e3f840();
  fVar17 = (float)((ulonglong)uVar11 >> 0x20);
  fVar9 = (float)uVar11;
  fVar18 = (float)extraout_XMM0_Qb_00;
  fVar19 = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  fVar26 = (float)local_48._0_8_;
  fVar27 = (float)((ulonglong)local_48._0_8_ >> 0x20);
  fVar10 = (float)extraout_XMM0_Qb;
  fVar28 = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
  if (NAN(fVar17)) {
    auVar33._8_4_ = fVar10;
    auVar33._0_8_ = local_48._0_8_;
    auVar33._12_4_ = fVar28;
    auVar32 = blendps(local_48,auVar33,2);
    auVar29 = _local_78;
  }
  else {
    fVar26 = fVar26 + fVar9;
    fVar27 = fVar27 + fVar17;
    fVar10 = fVar10 + fVar18;
    fVar28 = fVar28 + fVar19;
    auVar29._0_4_ = (float)local_78._0_4_ - fVar9;
    auVar29._4_4_ = (float)local_78._4_4_ - fVar17;
    auVar29._8_4_ = in_XMM1_Dc - fVar18;
    auVar29._12_4_ = in_XMM1_Dd - fVar19;
    auVar32._4_4_ = fVar27;
    auVar32._0_4_ = fVar26;
    auVar32._8_4_ = fVar10;
    auVar32._12_4_ = fVar28;
    auVar32 = blendps(local_48,auVar32,2);
  }
  if (!NAN(fVar9)) {
    auVar13._0_4_ = auVar32._0_4_ + fVar9;
    auVar13._4_4_ = auVar32._4_4_ + fVar17;
    auVar13._8_4_ = auVar32._8_4_ + fVar18;
    auVar13._12_4_ = auVar32._12_4_ + fVar19;
    auVar32 = auVar13;
  }
  auVar33 = blendps(_local_78,auVar29,2);
  auVar34 = auVar33;
  if (!NAN(fVar9)) {
    auVar34._0_4_ = auVar33._0_4_ - fVar9;
    auVar34._4_4_ = auVar33._4_4_ - fVar17;
    auVar34._8_4_ = auVar33._8_4_ - fVar18;
    auVar34._12_4_ = auVar33._12_4_ - fVar19;
  }
  auVar29 = blendps(auVar29,auVar34,0xd);
  if (NAN(fVar23) || NAN(fVar23)) {
    auVar33 = blendps(auVar34,auVar29,2);
  }
  else {
    auVar30._0_4_ = auVar29._0_4_ - fVar20;
    auVar30._4_4_ = auVar29._4_4_ - fVar23;
    auVar30._8_4_ = auVar29._8_4_ - fVar24;
    auVar30._12_4_ = auVar29._12_4_ - fVar25;
    auVar33 = blendps(auVar34,auVar30,2);
    auVar29 = auVar30;
  }
  if (NAN(fVar20)) {
    lVar1 = *(longlong *)(unaff_RDI + 0x38);
  }
  else {
    auVar12._0_4_ = auVar33._0_4_ - fVar20;
    auVar12._4_4_ = auVar33._4_4_ - fVar23;
    auVar12._8_4_ = auVar33._8_4_ - fVar24;
    auVar12._12_4_ = auVar33._12_4_ - fVar25;
    lVar1 = *(longlong *)(unaff_RDI + 0x38);
    auVar33 = auVar12;
  }
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      auVar3._4_4_ = fVar27;
      auVar3._0_4_ = fVar26;
      auVar3._8_4_ = fVar10;
      auVar3._12_4_ = fVar28;
      auVar32 = blendps(auVar32,auVar3,2);
      auVar13 = blendps(auVar33,auVar29,2);
      fVar26 = auVar29._4_4_;
      uVar31 = auVar29._12_4_;
      lVar8 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar8 * 8);
        iVar7 = FUN_01e3f4f0();
        if (iVar7 == 2) {
          (**(code **)(*plVar2 + 0x5d8))(DAT_023dccec,DAT_023dccf4);
        }
        else {
          uVar11 = (**(code **)(*plVar2 + 0x5c8))();
          fVar10 = (float)FUN_01e3f500();
          local_58._0_4_ = (undefined4)uVar11;
          local_58._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
          fStack_50 = (float)extraout_XMM0_Qb_01;
          fStack_4c = (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
          local_78._0_4_ = auVar33._0_4_;
          fStack_84 = auVar13._4_4_;
          if ((DAT_02390124 <= fVar10) ||
             (((float)local_58._0_4_ <= (float)local_78._0_4_ &&
              ((float)local_58._4_4_ <= fStack_84)))) {
            fStack_7c = auVar13._12_4_;
            auVar15._4_12_ = auVar13._4_12_;
            _local_68 = auVar13;
            if ((float)local_58._0_4_ <= (float)local_78._0_4_) {
              fStack_60 = fStack_50;
              local_68 = (undefined1  [8])uVar11;
              fStack_5c = fStack_4c;
            }
            local_e8 = auVar13._0_4_;
            fVar10 = local_e8;
            fStack_e0 = auVar13._8_4_;
            fVar28 = fStack_e0;
            fStack_e4 = fStack_84;
            fStack_dc = fStack_7c;
            if ((float)local_58._4_4_ <= fVar26) {
              local_e8 = (float)local_58._0_4_;
              fStack_e4 = (float)local_58._4_4_;
              fStack_e0 = fStack_50;
              fStack_dc = fStack_4c;
            }
            iVar7 = FUN_01e3f510();
            auVar4._4_4_ = fStack_e4;
            auVar4._0_4_ = local_e8;
            auVar4._8_4_ = fStack_e0;
            auVar4._12_4_ = fStack_dc;
            _local_68 = blendps(_local_68,auVar4,2);
            if (iVar7 == 1) {
              auVar5._4_4_ = fVar26;
              auVar5._0_4_ = fVar26;
              auVar5._8_4_ = uVar31;
              auVar5._12_4_ = uVar31;
              auVar21._4_12_ = auVar5._4_12_;
              auVar21._0_4_ = (fVar26 - fStack_e4) * DAT_0239011c;
              auVar29 = roundss(ZEXT816(0),auVar21,9);
              auVar14._4_12_ = auVar29._4_12_;
              auVar14._0_4_ = auVar29._0_4_ + fVar27;
              _local_58 = insertps(auVar32,auVar14,0x10);
            }
            else if (iVar7 == 2) {
              auVar6._4_4_ = fVar26;
              auVar6._0_4_ = fVar26;
              auVar6._8_4_ = uVar31;
              auVar6._12_4_ = uVar31;
              auVar22._4_12_ = auVar6._4_12_;
              auVar22._0_4_ = (fVar26 - fStack_e4) + fVar27;
              _local_58 = insertps(auVar32,auVar22,0x10);
            }
            else {
              _local_58 = auVar32;
              if (iVar7 == 3) {
                _local_68 = blendps(_local_68,auVar13,2);
              }
            }
            iVar7 = FUN_01e3f520();
            if (iVar7 == 1) {
              auVar15._0_4_ = (fVar10 - (float)local_68._0_4_) * DAT_0239011c;
              roundss(auVar15,auVar15,9);
            }
            else if (iVar7 == 2) {
              auVar16._0_4_ = fVar10 - (float)local_68._0_4_;
              auVar16._4_4_ = fStack_84 - (float)local_68._4_4_;
              auVar16._8_4_ = fVar28 - fStack_60;
              auVar16._12_4_ = fStack_7c - fStack_5c;
              blendps(_local_58,auVar16,0xd);
            }
            else if (iVar7 == 3) {
              blendps(_local_68,auVar13,0xd);
            }
            FUN_01e3f530();
            FUN_00d05650();
            (**(code **)(*plVar2 + 0x5d8))();
          }
          else {
            (**(code **)(*plVar2 + 0x5d8))(DAT_023dccec,DAT_023dccf4);
          }
        }
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_000a9680();
  }
  return;
}


