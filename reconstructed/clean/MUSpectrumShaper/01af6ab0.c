// Function: FUN_01af6ab0
// Address: 01af6ab0
// Size: 1345 bytes
// Class: MUSpectrumShaper
// === MUSpectrumShaper properties ===
//   GNInt           _assembledElementRendererCount
//   MUSpectrumShaperSpectrumType _spectrumType
//   bool            _processSpectrumShaper
//   bool            _canUseSpectrumShaper
//   bool            _processEqualizer
//   bool            _processLowerSpectrum
//   bool            _processUpperSpectrum
//   bool            _isBypassed
//   GNInt           _overallSpectrumFundamentalPitchIndex
//   float           _overallSpectrumFreqPerBin
//   float           _referenceMagnitudeSum
//   float           _maximumMagnitudeSum
//   float           _synthAmps
//   float           _synthPhases
//   float           _emphasizePow
//   float           _allGain
//   float           _ampDifferencePow
//   float           _clipLimit
//   bool            _didRequestCacheValidation
//   bool            _appliedEqualizerFactorsAreValid
//   bool            _appliedEqualizerFormantFactorsAreValid
//   bool            _processSpectrumShaperIsValid
//   float           _startValue
//   float           _riseDuration
//   float           _riseEndValue
//   float           _decayStartTime
//   float           _decayEndTime
//   float           _decayFactor
//   float           _endValue
//   bool            _needsProcessEnvelope
//   ... +35 more


void FUN_01af6ab0(void* param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  void* pVar6;
  char cVar7;
  int iVar8;
  void *pvVar9;
  int64_t lVar10;
  int64_t *plVar11;
  int64_t *this_ptr;
  int64_t *plVar12;
  uint32_t uVar13;
  float fVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar17 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint32_t uVar21;
  float fVar22;
  uint32_t uVar31;
  uint uVar32;
  uint32_t in_XMM1_Dc;
  uint uVar33;
  uint32_t in_XMM1_Dd;
  uint uVar34;
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  float local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  float local_58;
  uint uStack_54;
  float fStack_50;
  uint uStack_4c;
  uint8_t local_48 [8];
  float fStack_40;
  float fStack_3c;
  int64_t *local_38;
  char local_30;
  
  uVar31 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar21 = (uint32_t)param_2;
  FUN_01ad3320();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar15 = FUN_01a1da00();
  FUN_01e3f820();
  FUN_01ad3cb0();
  if ((local_30 == '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  *(void*)((int64_t)this_ptr + 0x19c) = 0;
  if (this_ptr[0x34] != 0) {
    this_ptr[0x34] = 0;
    FUN_00d50b20();
  }
  uVar13 = (**(code **)(*this_ptr + 0x920))();
  *(void*)(this_ptr + 0x33) = uVar13;
  pvVar9 = _pthread_getspecific(param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar13 = FUN_017423e0();
  *(void*)(this_ptr + 0x35) = uVar13;
  pvVar9 = _pthread_getspecific(param_1);
  plVar12 = local_38;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar12 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  uVar13 = (**(code **)(*plVar12 + 0x3a0))();
  *(void*)((int64_t)this_ptr + 0x1ac) = uVar13;
  uVar16 = (**(code **)(*this_ptr + 0x918))();
  FUN_01adad50();
  cVar7 = FUN_00d05410();
  local_58 = (float)uVar16;
  fVar14 = local_58;
  uStack_54 = (uint)((uint64_t)uVar16 >> 0x20);
  fStack_50 = (float)extraout_XMM0_Qb_00;
  uStack_4c = (uint)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
  auVar18._0_4_ = g_023945e0 & (uint)local_58;
  auVar18._4_4_ = _UNK_023945e4 & uStack_54;
  auVar18._8_4_ = _UNK_023945e8 & (uint)fStack_50;
  auVar18._12_4_ = _UNK_023945ec & uStack_4c;
  auVar17._4_4_ = _UNK_023945f4;
  auVar17._0_4_ = g_023945f0;
  auVar17._8_4_ = _UNK_023945f8;
  auVar17._12_4_ = _UNK_023945fc;
  auVar26._4_12_ = SUB1612(auVar18 | auVar17,4);
  auVar26._0_4_ = SUB164(auVar18 | auVar17,0) + local_58;
  auVar17 = roundss(auVar26,auVar26,0xb);
  local_58 = auVar17._0_4_;
  if (cVar7 == '\0') {
    if (*(int *)((int64_t)this_ptr + 0x284) != 0) {
      uVar16 = FUN_01e3f820();
      iVar8 = *(int *)((int64_t)this_ptr + 0x284);
      fVar22 = fVar14;
      uVar32 = uStack_54;
      uVar33 = (uint)fStack_50;
      uVar34 = uStack_4c;
      if (iVar8 == 3) {
        FUN_01e3f820();
        local_48._4_4_ = uVar32;
        local_48._0_4_ = fVar22;
        fStack_40 = (float)uVar33;
        fStack_3c = (float)uVar34;
        _local_48 = blendps(_local_48,g_0241c700,0xd);
        iVar8 = *(int *)((int64_t)this_ptr + 0x284);
        pVar6 = param_1;
        if (iVar8 == 1) goto LAB_01af6cd0;
LAB_01af6ccc:
        param_1 = pVar6;
        if (iVar8 == 0) goto LAB_01af6cd0;
        FUN_01e3f820();
        if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
          FUN_01e3f820();
        }
        auVar5._4_4_ = uVar32;
        auVar5._0_4_ = fVar22;
        auVar5._8_4_ = uVar33;
        auVar5._12_4_ = uVar34;
        auVar35 = blendps(auVar5,g_0241c710,0xd);
      }
      else {
        param_1 = 0x23dccec;
        _fStack_40 = 0;
        local_48 = (uint8_t  [8])g_023dccf4;
        pVar6 = 0x23dccec;
        if (iVar8 != 1) goto LAB_01af6ccc;
LAB_01af6cd0:
        auVar35._8_8_ = 0;
        auVar35._0_8_ = g_023dccf4;
      }
      auVar4._8_8_ = extraout_XMM0_Qb_01;
      auVar4._0_8_ = uVar16;
      auVar23._0_4_ = (float)local_48._0_4_ + (float)uVar16 + auVar35._0_4_;
      auVar23._4_4_ = (float)local_48._4_4_ + (float)((uint64_t)uVar16 >> 0x20) + auVar35._4_4_;
      auVar23._8_4_ = fStack_40 + (float)extraout_XMM0_Qb_01 + auVar35._8_4_;
      auVar23._12_4_ = fStack_3c + (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20) + auVar35._12_4_;
      blendps(auVar23,auVar4,2);
      auVar3._4_4_ = uStack_54;
      auVar3._0_4_ = fVar14;
      auVar3._8_4_ = fStack_50;
      auVar3._12_4_ = uStack_4c;
      blendps(auVar3,g_0241c720,0xd);
    }
    cVar7 = FUN_00d05410();
    if (cVar7 != '\0') goto LAB_01af6d42;
    local_78 = (float)uVar15;
    uStack_74 = (uint)((uint64_t)uVar15 >> 0x20);
    uStack_70 = (uint)extraout_XMM0_Qb;
    uStack_6c = (uint)((uint64_t)extraout_XMM0_Qb >> 0x20);
    auVar28._0_4_ = (uint)(local_78 * g_02390438) & g_023945e0;
    auVar28._4_4_ = uStack_74 & _UNK_023945e4;
    auVar28._8_4_ = uStack_70 & _UNK_023945e8;
    auVar28._12_4_ = uStack_6c & _UNK_023945ec;
    auVar29._4_12_ = SUB1612(auVar28 | ZEXT416(g_02394dc8),4);
    auVar29._0_4_ = SUB164(auVar28 | ZEXT416(g_02394dc8),0) + local_78 * g_02390438;
    auVar18 = roundss(auVar29,auVar29,0xb);
    fVar14 = g_02392fd8;
    if (auVar18._0_4_ <= g_02392fd8) {
      fVar14 = auVar18._0_4_;
    }
    auVar18 = ZEXT416((uint)((float)(g_023945e0 & (uint)(fVar14 * g_0239011c) | g_02394dc8) +
                            fVar14 * g_0239011c));
    auVar18 = roundss(auVar18,auVar18,0xb);
    fVar14 = auVar18._0_4_;
    auVar30._4_12_ = auVar17._4_12_;
    auVar30._0_4_ = local_58 - fVar14;
    auVar20._4_12_ = auVar18._4_12_;
    auVar20._0_4_ = fVar14 + fVar14;
  }
  else {
LAB_01af6d42:
    pvVar9 = _pthread_getspecific(param_1);
    plVar12 = local_38;
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar12 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar12 + 0x3a0))();
    uVar15 = (**(code **)(*this_ptr + 0x918))();
    pvVar9 = _pthread_getspecific(param_1);
    plVar12 = local_38;
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar12 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar12 + 0x3a0))();
    uVar16 = (**(code **)(*this_ptr + 0x918))();
    local_78 = (float)uVar15;
    uStack_74 = (uint)((uint64_t)uVar15 >> 0x20);
    uStack_70 = (uint)extraout_XMM0_Qb_02;
    uStack_6c = (uint)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
    auVar24._0_4_ = g_023945e0 & (uint)local_78;
    auVar24._4_4_ = _UNK_023945e4 & uStack_74;
    auVar24._8_4_ = _UNK_023945e8 & uStack_70;
    auVar24._12_4_ = _UNK_023945ec & uStack_6c;
    auVar1._4_4_ = _UNK_023945f4;
    auVar1._0_4_ = g_023945f0;
    auVar1._8_4_ = _UNK_023945f8;
    auVar1._12_4_ = _UNK_023945fc;
    auVar25._4_12_ = SUB1612(auVar24 | auVar1,4);
    auVar25._0_4_ = SUB164(auVar24 | auVar1,0) + local_78;
    auVar26 = roundss(auVar25,auVar25,0xb);
    auVar36._0_4_ = ~g_02390140 & (uint)(float)uVar16;
    auVar36._4_4_ = ~_UNK_02390144 & (uint)((uint64_t)uVar16 >> 0x20);
    auVar36._8_4_ = ~_UNK_02390148 & (uint)extraout_XMM0_Qb_03;
    auVar36._12_4_ = ~_UNK_0239014c & (uint)((uint64_t)extraout_XMM0_Qb_03 >> 0x20);
    auVar36 = auVar36 | ZEXT416(g_02394dc8 & g_02390140);
    auVar37._4_12_ = auVar36._4_12_;
    auVar37._0_4_ = auVar36._0_4_ + (float)uVar16;
    auVar18 = roundss(ZEXT816(0),auVar37,0xb);
    auVar18 = insertps(auVar26,auVar18,0x10);
    fStack_50 = auVar17._8_4_;
    auVar19._0_4_ = (local_58 + auVar18._0_4_) * g_023945d0;
    auVar19._4_4_ = (local_58 + auVar18._4_4_) * _UNK_023945d4;
    auVar19._8_4_ = (fStack_50 + auVar18._8_4_) * _UNK_023945d8;
    auVar19._12_4_ = (fStack_50 + auVar18._12_4_) * _UNK_023945dc;
    auVar27._0_4_ = (float)(g_023945e0 & (uint)auVar19._0_4_ | g_023945f0) + auVar19._0_4_;
    auVar27._4_4_ = (float)(_UNK_023945e4 & (uint)auVar19._4_4_ | _UNK_023945f4) + auVar19._4_4_;
    auVar27._8_4_ = (float)(_UNK_023945e8 & (uint)auVar19._8_4_ | _UNK_023945f8) + auVar19._8_4_;
    auVar27._12_4_ = (float)(_UNK_023945ec & (uint)auVar19._12_4_ | _UNK_023945fc) + auVar19._12_4_;
    auVar17 = roundps(auVar19,auVar27,0xb);
    fVar14 = auVar17._4_4_;
    auVar30._4_4_ = fVar14;
    auVar30._0_4_ = fVar14;
    auVar30._8_4_ = auVar17._12_4_;
    auVar30._12_4_ = auVar17._12_4_;
    auVar20._4_12_ = auVar17._4_12_;
    auVar20._0_4_ = auVar17._0_4_ - fVar14;
  }
  *(void*)((int64_t)this_ptr + 0x194) = 0xfff0bdc0;
  insertps(auVar30,auVar30,0x1d);
  auVar2._4_4_ = uVar31;
  auVar2._0_4_ = uVar21;
  auVar2._8_4_ = in_XMM1_Dc;
  auVar2._12_4_ = in_XMM1_Dd;
  insertps(auVar2,auVar20,0x10);
  cVar7 = FUN_00d05410();
  if (cVar7 == '\0') goto LAB_01af6fcd;
  *(int *)((int64_t)this_ptr + 0x194) = (int)this_ptr[0x35];
  pvVar9 = _pthread_getspecific(param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01740240();
  plVar12 = (int64_t *)this_ptr[0x34];
  plVar11 = plVar12;
  if (plVar12 != local_38) {
    plVar11 = local_38;
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        plVar11 = (int64_t *)0x0;
        goto LAB_01af6f4a;
      }
      FUN_00d50b00();
      plVar12 = (int64_t *)this_ptr[0x34];
      this_ptr[0x34] = (int64_t)local_38;
    }
    else {
      local_30 = '\0';
LAB_01af6f4a:
      this_ptr[0x34] = (int64_t)plVar11;
    }
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar11 = local_38;
    }
  }
  if ((local_30 != '\0') && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((this_ptr[0x34] != 0) &&
     (*(void*)((int64_t)this_ptr + 0x19c) = 1, local_38 == (int64_t *)0x0)) {
    this_ptr[0x34] = 0;
    FUN_00d50b20();
  }
LAB_01af6fcd:
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

