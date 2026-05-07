// Function: FUN_01e4a630
// Address: 01e4a630
// Size: 838 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01e4a695) */
/* WARNING: Removing unreachable block (ram,0x01e4a69e) */
/* WARNING: Removing unreachable block (ram,0x01e4a750) */
/* WARNING: Removing unreachable block (ram,0x01e4a759) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01e4a630(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *unaff_RDI;
  undefined8 unaff_R12;
  ulonglong uVar10;
  longlong *plVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar27;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  longlong *local_40;
  char local_38;
  undefined7 uVar11;
  
  uStack_50 = in_XMM0_Qb;
  local_58 = (undefined1  [8])param_1;
  uVar11 = (undefined7)((ulonglong)unaff_R12 >> 8);
  uVar10 = CONCAT71(uVar11,1);
  if (unaff_RDI[6] == 0) goto LAB_01e4a964;
  (**(code **)(*unaff_RDI + 0x7b0))();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01e4a964;
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) goto LAB_01e4a964;
  if ((longlong *)unaff_RDI[6] == local_40) {
    fVar13 = (float)*(undefined8 *)((longlong)unaff_RDI + 0x114);
    fVar17 = (float)((ulonglong)*(undefined8 *)((longlong)unaff_RDI + 0x114) >> 0x20);
    fVar18 = 0.0;
    fVar33 = 0.0;
    uVar16 = FUN_00d05360();
    fVar21 = fVar13;
    fVar27 = fVar17;
    fVar19 = fVar18;
    fVar20 = fVar33;
    uVar14 = FUN_01cf5cf0();
    fStack_70 = (float)extraout_XMM0_Qb_00;
    fStack_6c = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    uVar15 = FUN_01e436c0();
    auVar28._4_4_ = fVar27;
    auVar28._0_4_ = fVar21;
    auVar28._8_4_ = fVar19;
    auVar28._12_4_ = fVar20;
    auVar22._4_4_ = fVar17;
    auVar22._0_4_ = fVar13;
    auVar22._8_4_ = fVar18;
    auVar22._12_4_ = fVar33;
    auVar28 = minps(auVar28,auVar22);
    auVar34._4_4_ = fVar27;
    auVar34._0_4_ = fVar21;
    auVar34._8_4_ = fVar19;
    auVar34._12_4_ = fVar20;
    if (fVar13 <= fVar21) {
      auVar34 = blendps(auVar22,auVar28,2);
    }
    auVar22 = blendps(auVar34,auVar28,2);
    local_58._0_4_ = (undefined4)uVar16;
    local_58._4_4_ = (undefined4)((ulonglong)uVar16 >> 0x20);
    uStack_50._0_4_ = (float)extraout_XMM0_Qb;
    uStack_50._4_4_ = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
    fVar13 = (float)uVar15;
    fVar17 = (float)((ulonglong)uVar15 >> 0x20);
    fVar18 = (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
    if ((float)local_58._0_4_ < fVar13) {
      auVar35._8_4_ = fStack_70;
      auVar35._0_8_ = uVar14;
      auVar35._12_4_ = fStack_6c;
      auVar29._0_4_ = (float)uVar14 - (fVar13 - (float)local_58._0_4_);
      auVar29._4_4_ = (float)((ulonglong)uVar14 >> 0x20) - (fVar17 - (float)local_58._4_4_);
      auVar29._8_4_ = fStack_70 - ((float)extraout_XMM0_Qb_01 - (float)uStack_50);
      auVar29._12_4_ = fStack_6c - (fVar18 - uStack_50._4_4_);
    }
    else {
      auVar29._8_4_ = fStack_70;
      auVar29._0_8_ = uVar14;
      auVar29._12_4_ = fStack_6c;
      auVar35 = auVar29;
    }
    auVar34 = blendps(auVar35,auVar29,0xd);
    auVar25._0_4_ = auVar22._0_4_ + (float)local_58._0_4_;
    auVar25._4_4_ = auVar22._4_4_ + (float)local_58._4_4_;
    auVar25._8_4_ = auVar22._8_4_ + (float)uStack_50;
    auVar25._12_4_ = auVar22._12_4_ + uStack_50._4_4_;
    fVar33 = DAT_02390d00 + fVar21 + fVar13;
    if (fVar33 < auVar25._0_4_ + DAT_02390d00) {
      auVar30._4_12_ = auVar29._4_12_;
      auVar30._0_4_ = auVar29._0_4_ - (fVar33 - (auVar25._0_4_ + DAT_02390d00));
      auVar34 = blendps(auVar34,auVar30,1);
    }
    if ((float)local_58._4_4_ < fVar17) {
      fVar33 = auVar34._4_4_;
      auVar31._4_4_ = fVar33;
      auVar31._0_4_ = fVar33;
      auVar31._8_4_ = auVar34._12_4_;
      auVar31._12_4_ = auVar34._12_4_;
      auVar32._4_12_ = auVar31._4_12_;
      auVar32._0_4_ = fVar33 - (fVar17 - (float)local_58._4_4_);
      auVar34 = insertps(auVar34,auVar32,0x10);
    }
    auVar4._4_4_ = fVar27 + fVar17;
    auVar4._0_4_ = fVar21 + fVar13;
    auVar4._8_4_ = fVar19 + (float)extraout_XMM0_Qb_01;
    auVar4._12_4_ = fVar20 + fVar18;
    auVar22 = insertps(auVar25,auVar4,0x4c);
    fVar21 = auVar22._0_4_ + _DAT_023b5de0;
    fVar27 = auVar22._4_4_ + _UNK_023b5de4;
    if (fVar21 < fVar27) {
      auVar5._4_4_ = auVar34._4_4_;
      auVar5._0_4_ = auVar34._4_4_ - (fVar21 - fVar27);
      auVar5._8_4_ = auVar34._12_4_;
      auVar5._12_4_ = auVar34._12_4_;
      insertps(auVar34,auVar5,0x10);
    }
    uVar10 = CONCAT71(uVar11,1);
    FUN_01cf5c80();
  }
  else {
    FUN_01cf3f40();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_01e4a75e;
      }
LAB_01e4a76d:
      bVar6 = true;
LAB_01e4a780:
      do {
        cVar7 = (**(code **)(*unaff_RDI + 0x4b8))();
        if (cVar7 != '\0') break;
        uVar16 = (**(code **)(*unaff_RDI + 0x4d8))();
        local_68 = (float)uVar16;
        fStack_64 = (float)((ulonglong)uVar16 >> 0x20);
        fStack_60 = (float)extraout_XMM0_Qb_02;
        fStack_5c = (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
        uVar16 = (**(code **)(*unaff_RDI + 0x4d8))();
        auVar23._0_4_ = (float)uVar16 + (float)local_58._0_4_;
        auVar23._4_4_ = (float)((ulonglong)uVar16 >> 0x20) + (float)local_58._4_4_;
        auVar23._8_4_ = (float)extraout_XMM0_Qb_03 + (float)uStack_50;
        auVar23._12_4_ = (float)((ulonglong)extraout_XMM0_Qb_03 >> 0x20) + uStack_50._4_4_;
        auVar1._4_4_ = fStack_64 + (float)local_58._4_4_;
        auVar1._0_4_ = local_68 + (float)local_58._0_4_;
        auVar1._8_4_ = fStack_60 + (float)uStack_50;
        auVar1._12_4_ = fStack_5c + uStack_50._4_4_;
        _local_58 = blendps(auVar23,auVar1,0xd);
        plVar12 = (longlong *)unaff_RDI[6];
        if ((longlong *)unaff_RDI[6] == unaff_RDI) {
          plVar12 = unaff_RDI;
        }
        unaff_RDI = plVar12;
      } while (unaff_RDI != (longlong *)0x0);
      plVar12 = local_40;
      if (!bVar6) {
        do {
          cVar7 = (**(code **)(*plVar12 + 0x4b8))();
          if (cVar7 != '\0') break;
          uVar16 = (**(code **)(*plVar12 + 0x4d8))();
          local_68 = (float)uVar16;
          fStack_64 = (float)((ulonglong)uVar16 >> 0x20);
          fStack_60 = (float)extraout_XMM0_Qb_04;
          fStack_5c = (float)((ulonglong)extraout_XMM0_Qb_04 >> 0x20);
          uVar16 = (**(code **)(*plVar12 + 0x4d8))();
          auVar24._0_4_ = (float)local_58._0_4_ - (float)uVar16;
          auVar24._4_4_ = (float)local_58._4_4_ - (float)((ulonglong)uVar16 >> 0x20);
          auVar24._8_4_ = (float)uStack_50 - (float)extraout_XMM0_Qb_05;
          auVar24._12_4_ = uStack_50._4_4_ - (float)((ulonglong)extraout_XMM0_Qb_05 >> 0x20);
          auVar2._4_4_ = (float)local_58._4_4_ - fStack_64;
          auVar2._0_4_ = (float)local_58._0_4_ - local_68;
          auVar2._8_4_ = (float)uStack_50 - fStack_60;
          auVar2._12_4_ = uStack_50._4_4_ - fStack_5c;
          _local_58 = blendps(auVar24,auVar2,0xd);
          plVar9 = (longlong *)plVar12[6];
          if ((longlong *)plVar12[6] == plVar12) {
            plVar9 = plVar12;
          }
          plVar12 = plVar9;
        } while (plVar9 != (longlong *)0x0);
      }
    }
    else {
      if (local_40 == (longlong *)0x0) goto LAB_01e4a76d;
LAB_01e4a75e:
      if ((longlong *)unaff_RDI[6] != local_40) {
        bVar6 = false;
        goto LAB_01e4a780;
      }
      uVar16 = (**(code **)(*unaff_RDI + 0x4d8))();
      local_68 = (float)uVar16;
      fStack_64 = (float)((ulonglong)uVar16 >> 0x20);
      fStack_60 = (float)extraout_XMM0_Qb_06;
      fStack_5c = (float)((ulonglong)extraout_XMM0_Qb_06 >> 0x20);
      uVar16 = (**(code **)(*unaff_RDI + 0x4d8))();
      local_58._0_4_ = (undefined4)param_1;
      local_58._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
      uStack_50._0_4_ = (float)in_XMM0_Qb;
      uStack_50._4_4_ = (float)((ulonglong)in_XMM0_Qb >> 0x20);
      auVar26._0_4_ = (float)uVar16 + (float)local_58._0_4_;
      auVar26._4_4_ = (float)((ulonglong)uVar16 >> 0x20) + (float)local_58._4_4_;
      auVar26._8_4_ = (float)extraout_XMM0_Qb_07 + (float)uStack_50;
      auVar26._12_4_ = (float)((ulonglong)extraout_XMM0_Qb_07 >> 0x20) + uStack_50._4_4_;
      auVar3._4_4_ = fStack_64 + (float)local_58._4_4_;
      auVar3._0_4_ = local_68 + (float)local_58._0_4_;
      auVar3._8_4_ = fStack_60 + (float)uStack_50;
      auVar3._12_4_ = fStack_5c + uStack_50._4_4_;
      blendps(auVar26,auVar3,0xd);
    }
    uVar8 = (**(code **)(*local_40 + 0x518))();
    uVar10 = (ulonglong)uVar8;
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01e4a964:
  return uVar10 & 0xffffffff;
}


