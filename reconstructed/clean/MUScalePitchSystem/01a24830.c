// Function: FUN_01a24830
// Address: 01a24830
// Size: 1605 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_01a24830(void)

{
  uint8_t auVar1 [16];
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  bool bVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *this_ptr;
  int64_t *plVar9;
  float fVar10;
  uint64_t uVar11;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  float fVar18;
  uint64_t extraout_XMM0_Qb_04;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint64_t extraout_XMM0_Qb_05;
  uint64_t extraout_XMM0_Qb_06;
  uint8_t in_XMM1 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint8_t local_a8 [16];
  int64_t local_88;
  char local_80;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  uint8_t local_58 [16];
  int64_t *local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_03;
  
  if ((int)this_ptr[0x35] != 0) {
    return;
  }
  if ((this_ptr[0x3b] == 0) || (FUN_01bcc520(), local_40 == (int64_t *)0x0)) {
    FUN_01d9af40();
    return;
  }
  if (local_38 == '\0') {
    FUN_00d50b00();
  }
  plVar9 = (int64_t *)this_ptr[0x2b];
  if (plVar9 == (int64_t *)0x0) {
    plVar7 = (int64_t *)0x0;
    bVar2 = false;
  }
  else {
    FUN_00d50b00();
    (**(code **)(*plVar9 + 0x4d8))();
    _local_78 = in_XMM1;
    iVar6 = FUN_01bead40();
    if (iVar6 == 0) {
      uVar11 = FUN_01e3f820();
      auVar16._8_4_ = (int)extraout_XMM0_Qb_00;
      auVar16._0_8_ = uVar11;
      auVar16._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
      auVar17._4_12_ = auVar16._4_12_;
      auVar17._0_4_ = (float)uVar11 + in_XMM1._0_4_ + g_02390d00;
    }
    else {
      uVar11 = FUN_01be7cc0();
      auVar17._8_4_ = (int)extraout_XMM0_Qb;
      auVar17._0_8_ = uVar11;
      auVar17._12_4_ = (int)((uint64_t)extraout_XMM0_Qb >> 0x20);
    }
    auVar19._4_12_ = auVar17._4_12_;
    auVar19._0_4_ = auVar17._0_4_ + g_02390d00;
    bVar2 = true;
    in_XMM1 = blendps(auVar19,_local_78,0xe);
    (**(code **)(*plVar9 + 0x4d0))();
    plVar7 = plVar9;
  }
  FUN_01d9af40();
  fVar10 = (float)FUN_01bf1450();
  if (0.0 < fVar10) {
    plVar8 = (int64_t *)this_ptr[0x2a];
    if (plVar8 == plVar7) {
      if ((plVar9 == (int64_t *)0x0) && (plVar8 != (int64_t *)0x0)) {
        bVar2 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (plVar9 == (int64_t *)0x0 || plVar7 == (int64_t *)0x0) {
        bVar2 = true;
        plVar7 = plVar8;
      }
      else {
        FUN_00d50b20();
        bVar2 = true;
        plVar7 = plVar8;
      }
    }
    if (plVar7 != (int64_t *)0x0) {
      auVar12._0_8_ = (**(code **)(*plVar7 + 0x4d8))();
      auVar12._8_8_ = extraout_XMM0_Qb_01;
      auVar13._4_12_ = auVar12._4_12_;
      auVar13._0_4_ = (float)auVar12._0_8_ + fVar10;
      in_XMM1._0_4_ = in_XMM1._0_4_ - fVar10;
      (**(code **)(*plVar7 + 0x4d0))(auVar13._0_8_);
    }
    FUN_01d97870();
    if (local_40 == plVar7) {
      plVar9 = plVar7;
      bVar5 = bVar2;
      if ((!bVar2) && (local_40 != (int64_t *)0x0)) {
        bVar5 = true;
        if (local_38 != '\0') goto LAB_01a24ab5;
        FUN_00d50b00();
        bVar5 = true;
      }
LAB_01a24aa1:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar9 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar5 = true;
        if ((bVar2) && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01a24aa1;
      }
      bVar5 = true;
      if ((bVar2) && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01a24ab5:
    if (plVar9 == (int64_t *)0x0) goto LAB_01a24b6a;
    local_78 = (uint8_t  [8])(**(code **)(*plVar9 + 0x4d8))();
    uStack_70 = extraout_XMM0_Qb_02;
    auVar14._4_12_ = local_78._4_12_;
    auVar14._0_4_ = SUB84(local_78,0) + fVar10;
    auVar24._4_12_ = in_XMM1._4_12_;
    auVar24._0_4_ = in_XMM1._0_4_ - fVar10;
    (**(code **)(*plVar9 + 0x4d0))(auVar14._0_8_);
    if ((int64_t *)this_ptr[0x28] != (int64_t *)0x0) {
      auVar15._0_8_ = (**(code **)(*(int64_t *)this_ptr[0x28] + 0x4d8))();
      auVar15._8_8_ = extraout_XMM0_Qb_03;
      fVar25 = (float)local_78._0_4_ - (float)auVar15._0_8_;
      fVar10 = (float)((uint64_t)auVar15._0_8_ >> 0x20);
      fVar26 = (float)local_78._4_4_ - fVar10;
      fVar27 = (float)uStack_70 - (float)extraout_XMM0_Qb_03;
      fVar18 = (float)((uint64_t)extraout_XMM0_Qb_03 >> 0x20);
      fVar28 = uStack_70._4_4_ - fVar18;
      auVar20._0_4_ = (float)auVar15._0_8_ + fVar25;
      auVar20._4_4_ = fVar10 + fVar26;
      auVar20._8_4_ = (float)extraout_XMM0_Qb_03 + fVar27;
      auVar20._12_4_ = fVar18 + fVar28;
      blendps(auVar20,auVar15,2);
      auVar23._0_4_ = auVar24._0_4_ - fVar25;
      auVar23._4_4_ = auVar24._4_4_ - fVar26;
      auVar23._8_4_ = auVar24._8_4_ - fVar27;
      auVar23._12_4_ = auVar24._12_4_ - fVar28;
      auVar24 = blendps(auVar23,auVar24,2);
      (**(code **)(*(int64_t *)this_ptr[0x28] + 0x4d0))();
    }
    plVar7 = (int64_t *)this_ptr[0x2b];
    if (plVar7 == plVar9) {
      if ((!bVar5) && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b00();
        bVar5 = true;
      }
LAB_01a24b97:
      bVar2 = bVar5;
      local_58._0_8_ = (**(code **)(*plVar9 + 0x4d8))();
      local_58._8_8_ = extraout_XMM0_Qb_04;
      auVar16 = auVar24;
      iVar6 = FUN_01bead40();
      if (iVar6 == 0) {
        FUN_01e3f820();
        auVar17 = blendps(local_58,g_023b1620,0xe);
        uVar11 = auVar17._0_8_;
        fVar10 = auVar16._4_4_;
        auVar21._4_4_ = fVar10;
        auVar21._0_4_ = fVar10;
        auVar21._8_4_ = auVar16._12_4_;
        auVar21._12_4_ = auVar16._12_4_;
        auVar22._4_12_ = auVar21._4_12_;
        auVar22._0_4_ = fVar10 + g_023b1608;
        auVar24 = insertps(auVar24,auVar22,0x10);
      }
      else {
        auVar1._4_4_ = auVar24._4_4_ - (local_78._4_4_ - (float)((uint64_t)local_58._0_8_ >> 0x20))
        ;
        auVar1._0_4_ = auVar24._0_4_ - (local_78._0_4_ - (float)local_58._0_8_);
        auVar1._8_4_ = auVar24._8_4_ - (local_78._8_4_ - (float)extraout_XMM0_Qb_04);
        auVar1._12_4_ =
             auVar24._12_4_ - (local_78._12_4_ - (float)((uint64_t)extraout_XMM0_Qb_04 >> 0x20));
        auVar24 = blendps(auVar24,auVar1,2);
        auVar16 = blendps(local_58,_local_78,2);
        uVar11 = auVar16._0_8_;
      }
      (**(code **)(*plVar9 + 0x4d0))(uVar11);
      plVar8 = (int64_t *)this_ptr[0x2e];
      plVar7 = plVar8;
      bVar3 = bVar2;
      if (plVar8 != plVar9) goto LAB_01a24c2b;
LAB_01a24c68:
      plVar7 = plVar9;
      if ((!bVar2) && (plVar8 != (int64_t *)0x0)) {
        bVar2 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (bVar5) {
        FUN_00d50b20();
      }
      bVar2 = true;
      bVar3 = true;
      plVar9 = plVar7;
      bVar5 = true;
      if (plVar7 != (int64_t *)0x0) goto LAB_01a24b97;
      plVar9 = (int64_t *)0x0;
      plVar7 = (int64_t *)this_ptr[0x2e];
      plVar8 = (int64_t *)0x0;
      if (plVar7 == (int64_t *)0x0) goto LAB_01a24c68;
LAB_01a24c2b:
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar2 = true;
      if ((bVar3) && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
        bVar2 = true;
      }
    }
    if (plVar7 != (int64_t *)0x0) {
      local_a8._0_8_ = (**(code **)(*plVar7 + 0x4d8))();
      local_a8._8_8_ = extraout_XMM0_Qb_05;
      iVar6 = FUN_01bead40();
      if (iVar6 == 0) {
        blendps(_local_78,local_a8,2);
      }
      else {
        blendps(local_a8,ZEXT816(0),1);
      }
      (**(code **)(*plVar7 + 0x4d0))();
    }
    iVar6 = FUN_01bead40();
    if (iVar6 == 0) {
      if (this_ptr[0x29] != 0) {
        FUN_01e40eb0();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 == this_ptr) {
          local_78 = (uint8_t  [8])(**(code **)(*(int64_t *)this_ptr[0x29] + 0x4d8))();
          uStack_70 = extraout_XMM0_Qb_06;
          auVar16 = auVar24;
          FUN_01e3f820();
          blendps(auVar24,auVar16,2);
          auVar16 = blendps(_local_78,ZEXT816(0),2);
          (**(code **)(*(int64_t *)this_ptr[0x29] + 0x4d0))(auVar16._0_8_);
        }
      }
      if (this_ptr[0x27] != 0) {
        FUN_01d9cbc0();
      }
    }
    FUN_00d403d0();
    lVar4 = g_027e7c00;
    if (g_027e7c00 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_88 = 0;
    local_80 = '\0';
    FUN_00d40470(&local_88,&stack0xffffffffffffff98,1,3);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((bVar2) && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a24b6a:
  FUN_00d50b20();
  return;
}

