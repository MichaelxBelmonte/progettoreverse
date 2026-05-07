// Function: FUN_01aec450
// Address: 01aec450
// Size: 2295 bytes
// Class: GNView
// === GNView properties ===
//   float           _scaleArrayFilterFactor
//   GNInt           _centDisplayReferencePitchIndex
//   bool            _centDisplayModePlusMinus
//   GNInt           _pitchDisplayMode
//   GNInt           _selectedPitchIndex
//   GNInt           _clickedPitchIndex
//   float           _clickedPitch
//   bool            _pitchIndexIsHit
//   GNInt           _closestPitchIndex
//   float           _closestPitch
//   bool            _detectionIsCyclic
//   GNInt           _detectionCycleSizeCent
//   GNInt           _detectionMinPitchCent
//   GNInt           _detectionMaxPitchCent
//   bool            _applyDetectionToScale
//   bool            _detectionInsertsChromaticIntervals
//   bool            _scaleWasJustDetected
//   float           _preferredFundamentalPitchForDetection
//   bool            _movingTuningPitchAnchor
//   bool            _setTuningPitchAnchor
//   float           _tuningPitchAnchorAnimationOffset
//   float           _hertzScaleInAnimationLevel
//   float           _hertzScaleOutAnimationLevel
//   GNTimeInterval  _movingScaleIndicatorDisplayDelay
//   bool            _movingScaleTuning
//   bool            _movingScaleMode
//   bool            _movingDetectedScale
//   float           _movingTuningOffset
//   GNRect          _movingTuningRect
//   float           _slideRuleAnchorOffset
//   ... +16 more


void FUN_01aec450(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  bool bVar4;
  char cVar5;
  int iVar6;
  void*arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t extraout_XMM0_Qb;
  float fVar18;
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar17 [16];
  uint64_t extraout_XMM0_Qb_04;
  uint64_t in_XMM1_Qb;
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  int64_t *local_d8;
  char local_d0;
  uint8_t local_78 [16];
  int64_t local_68;
  char local_60;
  uint8_t local_58 [16];
  uint8_t local_48 [8];
  uint64_t uStack_40;
  
  uStack_40 = in_XMM1_Qb;
  local_48 = (uint8_t  [8])param_2;
  FUN_01ad3cb0();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 == 0) {
    return;
  }
  auVar19 = _local_48;
  FUN_01aec210();
  FUN_01adabe0();
  cVar5 = FUN_00d054a0();
  if (cVar5 == '\0') {
    FUN_01adad50();
    cVar5 = FUN_00d054a0();
    if (cVar5 != '\0') goto LAB_01aec622;
    if (*(int *)((int64_t)this_ptr + 0x284) == 0) {
      auVar19._8_8_ = 0;
      auVar19._0_8_ = g_023dccf4;
      cVar5 = FUN_00d054a0(g_023dccec);
    }
    else {
      uVar8 = FUN_01e3f820();
      fVar18 = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
      iVar6 = *(int *)((int64_t)this_ptr + 0x284);
      if (iVar6 == 3) {
        auVar9 = auVar19;
        FUN_01e3f820();
        auVar9 = blendps(auVar9,g_0241c700,0xd);
        iVar6 = *(int *)((int64_t)this_ptr + 0x284);
      }
      else {
        auVar9._8_8_ = 0;
        auVar9._0_8_ = g_023dccf4;
      }
      if ((iVar6 == 1) || (iVar6 == 0)) {
        auVar30._8_8_ = 0;
        auVar30._0_8_ = g_023dccf4;
      }
      else {
        auVar30 = auVar19;
        FUN_01e3f820();
        if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
          FUN_01e3f820();
        }
        auVar30 = blendps(auVar30,g_0241c710,0xd);
      }
      auVar10._0_4_ = auVar9._0_4_ + (float)uVar8 + auVar30._0_4_;
      auVar10._4_4_ = auVar9._4_4_ + (float)((uint64_t)uVar8 >> 0x20) + auVar30._4_4_;
      auVar10._8_4_ = auVar9._8_4_ + (float)extraout_XMM0_Qb + auVar30._8_4_;
      auVar10._12_4_ = auVar9._12_4_ + fVar18 + auVar30._12_4_;
      auVar2._8_4_ = (float)extraout_XMM0_Qb;
      auVar2._0_8_ = uVar8;
      auVar2._12_4_ = fVar18;
      auVar9 = blendps(auVar10,auVar2,2);
      auVar19 = blendps(auVar19,g_0241c720,0xd);
      cVar5 = FUN_00d054a0(auVar9._0_8_);
    }
    if (cVar5 != '\0') goto LAB_01aec622;
  }
  else {
LAB_01aec622:
    FUN_01adad50();
    cVar5 = FUN_00d054a0();
    if ((cVar5 != '\0') && (*(float *)(this_ptr + 0x3f) == 0.0)) {
      fVar18 = *(float *)((int64_t)this_ptr + 0x1fc);
      auVar19 = ZEXT416((uint)fVar18);
      if ((fVar18 == 0.0) && (!NAN(fVar18))) {
        if (((char)this_ptr[0x3c] == '\0') && (*(char *)((int64_t)this_ptr + 0x1e1) == '\0')) {
          auVar19 = ZEXT816(0);
          if ((*(float *)((int64_t)this_ptr + 0x1e4) == 0.0) &&
             (!NAN(*(float *)((int64_t)this_ptr + 0x1e4)))) goto LAB_01aec784;
        }
        uVar8 = g_023dccec;
        if (*(int *)((int64_t)this_ptr + 0x284) != 0) {
          uVar8 = FUN_01e3f820();
          auVar27._8_4_ = (float)extraout_XMM0_Qb_00;
          auVar27._0_8_ = uVar8;
          fVar18 = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
          auVar27._12_4_ = fVar18;
          iVar6 = *(int *)((int64_t)this_ptr + 0x284);
          if (iVar6 == 3) {
            FUN_01e3f820();
            auVar11 = blendps(auVar19,g_0241c700,0xd);
            iVar6 = *(int *)((int64_t)this_ptr + 0x284);
          }
          else {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = g_023dccf4;
          }
          if ((iVar6 == 1) || (iVar6 == 0)) {
            auVar20._8_8_ = 0;
            auVar20._0_8_ = g_023dccf4;
          }
          else {
            FUN_01e3f820();
            if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
              FUN_01e3f820();
            }
            auVar20 = blendps(auVar19,g_0241c710,0xd);
          }
          auVar12._0_4_ = auVar11._0_4_ + (float)uVar8 + auVar20._0_4_;
          auVar12._4_4_ = auVar11._4_4_ + (float)((uint64_t)uVar8 >> 0x20) + auVar20._4_4_;
          auVar12._8_4_ = auVar11._8_4_ + (float)extraout_XMM0_Qb_00 + auVar20._8_4_;
          auVar12._12_4_ = auVar11._12_4_ + fVar18 + auVar20._12_4_;
          auVar19 = blendps(auVar12,auVar27,2);
          uVar8 = auVar19._0_8_;
        }
        FUN_01aecf20(uVar8,0);
      }
    }
LAB_01aec784:
    FUN_01ae5410();
    auVar19 = _local_48;
  }
  if ((*(int *)((int64_t)this_ptr + 0x284) == 1) || (*(int *)((int64_t)this_ptr + 0x284) == 0))
  {
    auVar21._8_8_ = 0;
    auVar21._0_8_ = g_023dccf4;
    cVar5 = FUN_00d054a0(g_023dccec);
  }
  else {
    uVar8 = FUN_01e3f820();
    fVar18 = (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
    if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
      auVar9 = auVar19;
      FUN_01e3f820();
      auVar13 = blendps(auVar9,g_0241c700,0xd);
    }
    else {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = g_023dccf4;
    }
    auVar14._0_4_ = auVar13._0_4_ + (float)uVar8;
    auVar14._4_4_ = auVar13._4_4_ + (float)((uint64_t)uVar8 >> 0x20);
    auVar14._8_4_ = auVar13._8_4_ + (float)extraout_XMM0_Qb_01;
    auVar14._12_4_ = auVar13._12_4_ + fVar18;
    auVar3._8_4_ = (float)extraout_XMM0_Qb_01;
    auVar3._0_8_ = uVar8;
    auVar3._12_4_ = fVar18;
    auVar9 = blendps(auVar14,auVar3,2);
    auVar21 = blendps(auVar19,g_0241c710,0xd);
    cVar5 = FUN_00d054a0(auVar9._0_8_);
  }
  if (cVar5 != '\0') {
    FUN_01add020();
  }
  if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
    FUN_01e3f820();
    auVar22 = blendps(auVar21,g_0241c700,0xd);
  }
  else {
    auVar22._8_8_ = 0;
    auVar22._0_8_ = g_023dccf4;
  }
  cVar5 = FUN_00d054a0();
  if (cVar5 != '\0') {
    FUN_01adaf60();
  }
  if ((*(char *)((int64_t)this_ptr + 0x315) == '\0') ||
     (*(char *)((int64_t)this_ptr + 0x316) == '\0')) {
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_d8 + 0x470))();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01cfd130();
    if (local_68 == 0) {
      lVar7 = 0;
      bVar4 = false;
    }
    else {
      lVar7 = local_68;
      if (local_60 == '\0') {
        FUN_00d50b00();
        bVar4 = true;
      }
      else {
        bVar4 = true;
      }
    }
    if ((*(float *)(lVar7 + 0x1c) != g_0241bdc0) ||
       (NAN(*(float *)(lVar7 + 0x1c)) || NAN(g_0241bdc0))) {
      *(void*)(lVar7 + 0x1c) = 0x3eaa7efa;
      *(void*)(lVar7 + 0xf) = 0x55;
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    bVar4 = false;
    lVar7 = 0;
  }
  if (*(char *)((int64_t)this_ptr + 0x315) != '\0') goto LAB_01aecc28;
  FUN_01d488d0();
  plVar1 = (int64_t *)*arg1;
  if ((*(int *)((int64_t)this_ptr + 0x284) == 1) || (*(int *)((int64_t)this_ptr + 0x284) == 0))
  {
    auVar28._8_8_ = 0;
    auVar28._0_8_ = g_023dccf4;
    uVar8 = g_023dccec;
  }
  else {
    local_58._0_8_ = FUN_01e3f820();
    local_58._8_8_ = extraout_XMM0_Qb_02;
    if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
      auVar19 = auVar22;
      FUN_01e3f820();
      auVar15 = blendps(auVar19,g_0241c700,0xd);
    }
    else {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = g_023dccf4;
    }
    auVar16._0_4_ = auVar15._0_4_ + (float)local_58._0_8_;
    auVar16._4_4_ = auVar15._4_4_ + (float)((uint64_t)local_58._0_8_ >> 0x20);
    auVar16._8_4_ = auVar15._8_4_ + (float)extraout_XMM0_Qb_02;
    auVar16._12_4_ = auVar15._12_4_ + (float)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
    auVar19 = blendps(auVar16,local_58,2);
    uVar8 = auVar19._0_8_;
    auVar28 = blendps(auVar22,g_0241c710,0xd);
  }
  fVar18 = auVar28._0_4_;
  auVar23._4_12_ = auVar28._4_12_;
  auVar23._0_4_ = fVar18 * g_0239011c;
  if ((fVar18 == 0.0) && (!NAN(fVar18))) {
    auVar23 = auVar28;
  }
  (**(code **)(*plVar1 + 0x3b0))(uVar8);
  plVar1 = (int64_t *)*arg1;
  if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
    FUN_01e3f820();
    auVar24 = blendps(auVar23,g_0241c700,0xd);
  }
  else {
    auVar24._8_8_ = 0;
    auVar24._0_8_ = g_023dccf4;
  }
  (**(code **)(*plVar1 + 0x3b0))();
  plVar1 = (int64_t *)*arg1;
  if (*(int *)((int64_t)this_ptr + 0x284) == 0) {
    auVar22._8_8_ = 0;
    auVar22._0_8_ = g_023dccf4;
    uVar8 = g_023dccec;
  }
  else {
    local_78._0_8_ = FUN_01e3f820();
    local_78._8_8_ = extraout_XMM0_Qb_03;
    iVar6 = *(int *)((int64_t)this_ptr + 0x284);
    auVar19 = auVar24;
    if (iVar6 == 3) {
      FUN_01e3f820();
      _local_48 = blendps(auVar19,g_0241c700,0xd);
      iVar6 = *(int *)((int64_t)this_ptr + 0x284);
      if (iVar6 == 1) goto LAB_01aecbbf;
LAB_01aecbbb:
      if (iVar6 == 0) goto LAB_01aecbbf;
      FUN_01e3f820();
      if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
        FUN_01e3f820();
      }
      auVar29 = blendps(auVar19,g_0241c710,0xd);
    }
    else {
      uStack_40 = 0;
      local_48 = (uint8_t  [8])g_023dccf4;
      if (iVar6 != 1) goto LAB_01aecbbb;
LAB_01aecbbf:
      auVar29._8_8_ = 0;
      auVar29._0_8_ = g_023dccf4;
    }
    auVar17._0_4_ = (float)local_48._0_4_ + (float)local_78._0_8_ + auVar29._0_4_;
    auVar17._4_4_ =
         (float)local_48._4_4_ + (float)((uint64_t)local_78._0_8_ >> 0x20) + auVar29._4_4_;
    auVar17._8_4_ = (float)uStack_40 + (float)extraout_XMM0_Qb_03 + auVar29._8_4_;
    auVar17._12_4_ =
         uStack_40._4_4_ + (float)((uint64_t)extraout_XMM0_Qb_03 >> 0x20) + auVar29._12_4_;
    auVar19 = blendps(auVar17,local_78,2);
    auVar22 = blendps(auVar24,g_0241c720,0xd);
    uVar8 = auVar19._0_8_;
  }
  (**(code **)(*plVar1 + 0x3b0))(uVar8);
LAB_01aecc28:
  if (*(char *)((int64_t)this_ptr + 0x316) == '\0') {
    FUN_01d488d0();
    plVar1 = (int64_t *)*arg1;
    if ((*(int *)((int64_t)this_ptr + 0x284) != 1) && (*(int *)((int64_t)this_ptr + 0x284) != 0)
       ) {
      local_58._0_8_ = FUN_01e3f820();
      local_58._8_8_ = extraout_XMM0_Qb_04;
      if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
        auVar19 = auVar22;
        FUN_01e3f820();
        auVar25 = blendps(auVar19,g_0241c700,0xd);
      }
      else {
        auVar25._8_8_ = 0;
        auVar25._0_8_ = g_023dccf4;
      }
      auVar26._0_4_ = auVar25._0_4_ + (float)local_58._0_8_;
      auVar26._4_4_ = auVar25._4_4_ + (float)((uint64_t)local_58._0_8_ >> 0x20);
      auVar26._8_4_ = auVar25._8_4_ + (float)extraout_XMM0_Qb_04;
      auVar26._12_4_ = auVar25._12_4_ + (float)((uint64_t)extraout_XMM0_Qb_04 >> 0x20);
      blendps(auVar26,local_58,2);
      blendps(auVar22,g_0241c710,0xd);
    }
    (**(code **)(*plVar1 + 0x3b0))();
  }
  if ((bVar4) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  return;
}

