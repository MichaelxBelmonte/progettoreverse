// Function: FUN_01b21660
// Address: 01b21660
// Size: 1960 bytes
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


void FUN_01b21660(double param_1)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  char cVar3;
  int iVar4;
  int64_t *this_ptr;
  float fVar5;
  uint64_t uVar6;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t local_58 [16];
  int64_t local_30;
  char local_28;
  
  if ((((char)this_ptr[0x41] != '\0') || (*(char *)((int64_t)this_ptr + 0x209) != '\0')) ||
     (*(char *)((int64_t)this_ptr + 0x20a) != '\0')) {
    auVar10._0_8_ = (double)this_ptr[0x40] - param_1;
    auVar10._8_8_ = 0;
    this_ptr[0x40] = (int64_t)auVar10._0_8_;
    if (auVar10._0_8_ <= 0.0) {
      FUN_01f27fe0();
      (**(code **)(this_ptr[0x2d] + 0x10))();
      FUN_00d50b00();
      FUN_01f474f0();
      if (this_ptr + 0x2d != (int64_t *)0x0) {
        (**(code **)(this_ptr[0x2d] + 0x10))();
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      iVar4 = *(int *)((int64_t)this_ptr + 0x284);
      uVar6 = g_023dccec;
      if (*(char *)((int64_t)this_ptr + 0x20a) == '\0') {
        if ((iVar4 != 1) && (iVar4 != 0)) {
          uVar6 = FUN_01e3f820();
          auVar9._8_8_ = extraout_XMM0_Qb_01;
          auVar9._0_8_ = uVar6;
          if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
            auVar7 = auVar10;
            FUN_01e3f820();
            auVar7 = blendps(auVar7,g_0241c700,0xd);
          }
          else {
            auVar7._8_8_ = 0;
            auVar7._0_8_ = g_023dccf4;
          }
          auVar8._0_4_ = auVar7._0_4_ + (float)uVar6;
          auVar8._4_4_ = auVar7._4_4_ + (float)((uint64_t)uVar6 >> 0x20);
          auVar8._8_4_ = auVar7._8_4_ + (float)extraout_XMM0_Qb_01;
          auVar8._12_4_ = auVar7._12_4_ + (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
          auVar9 = blendps(auVar8,auVar9,2);
          blendps(auVar10,g_0241c710,0xd);
          uVar6 = auVar9._0_8_;
        }
      }
      else if (iVar4 == 3) {
        uVar6 = FUN_01e3f820();
        blendps(auVar10,g_0241c700,0xd);
      }
      (**(code **)(*this_ptr + 0x618))(uVar6);
    }
  }
  fVar5 = *(float *)((int64_t)this_ptr + 0x1e4);
  if ((fVar5 != 0.0) || (NAN(fVar5))) {
    if ((float)(g_02390140 & (uint)fVar5) <= g_02390124) {
      FUN_01f27fe0();
      (**(code **)(this_ptr[0x2d] + 0x10))();
      FUN_00d50b00();
      FUN_01f474f0();
      if (this_ptr + 0x2d != (int64_t *)0x0) {
        (**(code **)(this_ptr[0x2d] + 0x10))();
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      *(void*)((int64_t)this_ptr + 0x1e4) = 0;
      (**(code **)(*this_ptr + 0x620))();
      FUN_01b08e50();
      *(void*)((int64_t)this_ptr + 0x1e1) = 0;
      return;
    }
    *(float *)((int64_t)this_ptr + 0x1e4) = g_02390118 * fVar5 + fVar5;
    (**(code **)(*this_ptr + 0x620))();
  }
  fVar5 = *(float *)(this_ptr + 0x3f);
  if ((fVar5 != 0.0) || (NAN(fVar5))) {
    if ((fVar5 == g_02390124) && (!NAN(fVar5) && !NAN(g_02390124))) {
      *(void*)(this_ptr + 0x3f) = 0x3f733333;
      fVar5 = g_02394234;
    }
    if (g_024119e0 < (double)fVar5) {
      fVar5 = fVar5 - ((g_02390124 - fVar5) + (g_02390124 - fVar5));
    }
    else {
      fVar5 = fVar5 * g_0239011c;
    }
    *(float *)(this_ptr + 0x3f) = fVar5;
    local_58._0_8_ = g_023934c8;
    local_58._8_8_ = 0;
    if ((double)fVar5 < g_023934c8) {
      *(void*)(this_ptr + 0x3f) = 0;
      FUN_01f27fe0();
      (**(code **)(this_ptr[0x2d] + 0x10))();
      FUN_00d50b00();
      FUN_01f474f0();
      if (this_ptr + 0x2d != (int64_t *)0x0) {
        (**(code **)(this_ptr[0x2d] + 0x10))();
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01adabe0();
    FUN_01adad50();
    FUN_00d052e0();
    if (*(int *)((int64_t)this_ptr + 0x284) != 0) {
      auVar10 = local_58;
      uVar6 = FUN_01e3f820();
      fVar5 = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
      iVar4 = *(int *)((int64_t)this_ptr + 0x284);
      if (iVar4 == 3) {
        auVar9 = auVar10;
        FUN_01e3f820();
        auVar11 = blendps(auVar9,g_0241c700,0xd);
        iVar4 = *(int *)((int64_t)this_ptr + 0x284);
      }
      else {
        auVar11._8_8_ = 0;
        auVar11._0_8_ = g_023dccf4;
      }
      if ((iVar4 == 1) || (iVar4 == 0)) {
        auVar15._8_8_ = 0;
        auVar15._0_8_ = g_023dccf4;
      }
      else {
        FUN_01e3f820();
        if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
          FUN_01e3f820();
        }
        auVar15 = blendps(local_58,g_0241c710,0xd);
      }
      auVar12._0_4_ = auVar11._0_4_ + (float)uVar6 + auVar15._0_4_;
      auVar12._4_4_ = auVar11._4_4_ + (float)((uint64_t)uVar6 >> 0x20) + auVar15._4_4_;
      auVar12._8_4_ = auVar11._8_4_ + (float)extraout_XMM0_Qb + auVar15._8_4_;
      auVar12._12_4_ = auVar11._12_4_ + fVar5 + auVar15._12_4_;
      auVar1._8_4_ = (float)extraout_XMM0_Qb;
      auVar1._0_8_ = uVar6;
      auVar1._12_4_ = fVar5;
      blendps(auVar12,auVar1,2);
      blendps(auVar10,g_0241c720,0xd);
    }
    FUN_00d052e0();
    (**(code **)(*this_ptr + 0x618))();
  }
  fVar5 = *(float *)((int64_t)this_ptr + 0x1fc);
  if ((fVar5 != 0.0) || (NAN(fVar5))) {
    fVar5 = fVar5 * g_0239011c;
    *(float *)((int64_t)this_ptr + 0x1fc) = fVar5;
    local_58._0_8_ = g_023934c8;
    local_58._8_8_ = 0;
    if ((double)fVar5 < g_023934c8) {
      *(void*)((int64_t)this_ptr + 0x1fc) = 0;
      FUN_01f27fe0();
      (**(code **)(this_ptr[0x2d] + 0x10))();
      FUN_00d50b00();
      FUN_01f474f0();
      if (this_ptr + 0x2d != (int64_t *)0x0) {
        (**(code **)(this_ptr[0x2d] + 0x10))();
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01adabe0();
    FUN_01adad50();
    FUN_00d052e0();
    if (*(int *)((int64_t)this_ptr + 0x284) != 0) {
      auVar10 = local_58;
      uVar6 = FUN_01e3f820();
      fVar5 = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
      iVar4 = *(int *)((int64_t)this_ptr + 0x284);
      if (iVar4 == 3) {
        auVar9 = auVar10;
        FUN_01e3f820();
        auVar13 = blendps(auVar9,g_0241c700,0xd);
        iVar4 = *(int *)((int64_t)this_ptr + 0x284);
      }
      else {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = g_023dccf4;
      }
      if ((iVar4 == 1) || (iVar4 == 0)) {
        auVar16._8_8_ = 0;
        auVar16._0_8_ = g_023dccf4;
      }
      else {
        FUN_01e3f820();
        if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
          FUN_01e3f820();
        }
        auVar16 = blendps(local_58,g_0241c710,0xd);
      }
      auVar14._0_4_ = auVar13._0_4_ + (float)uVar6 + auVar16._0_4_;
      auVar14._4_4_ = auVar13._4_4_ + (float)((uint64_t)uVar6 >> 0x20) + auVar16._4_4_;
      auVar14._8_4_ = auVar13._8_4_ + (float)extraout_XMM0_Qb_00 + auVar16._8_4_;
      auVar14._12_4_ = auVar13._12_4_ + fVar5 + auVar16._12_4_;
      auVar2._8_4_ = (float)extraout_XMM0_Qb_00;
      auVar2._0_8_ = uVar6;
      auVar2._12_4_ = fVar5;
      blendps(auVar14,auVar2,2);
      blendps(auVar10,g_0241c720,0xd);
    }
    FUN_00d052e0();
    (**(code **)(*this_ptr + 0x618))();
  }
  if ((char)this_ptr[0x5a] != '\0') {
    fVar5 = (float)FUN_01aade90();
    if ((g_02390124 <= fVar5) || (cVar3 = FUN_01aa7eb0(), cVar3 == '\0')) {
      (**(code **)(*this_ptr + 0x9b8))();
    }
    else if ((int64_t *)this_ptr[0x5d] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)this_ptr[0x5d] + 0x928))();
    }
  }
  return;
}

