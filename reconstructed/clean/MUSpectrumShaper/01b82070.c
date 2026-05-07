// Function: FUN_01b82070
// Address: 01b82070
// Size: 626 bytes
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


uint64_t FUN_01b82070(uint64_t param_1,byte param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int64_t *unaff_RBX;
  uint64_t uVar4;
  int64_t *this_ptr;
  uint64_t uVar5;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  int64_t local_78;
  char local_70;
  int64_t local_50;
  char local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  
  cVar2 = (**(code **)(*this_ptr + 0x9d0))();
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_01b8225a;
  }
  local_38 = FUN_00e7bdb0();
  local_40 = FUN_00e7bdb0();
  uVar5 = FUN_01b70bd0(&local_40,&local_38);
  if (local_48 == '\0') {
    if (local_50 != 0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  if (*(int *)(local_50 + 0xc) == 1) {
    local_30 = this_ptr[0x33];
    if (local_30 >> 0x20 == 0) {
LAB_01b82141:
      if (local_38 >> 0x20 == 0) {
        FUN_01e436c0();
      }
      else {
        uVar5 = (**(code **)(*this_ptr + 0xa68))();
        auVar6._0_4_ = g_023945e0 & (uint)(float)uVar5;
        auVar6._4_4_ = _UNK_023945e4 & (uint)((uint64_t)uVar5 >> 0x20);
        auVar6._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb;
        auVar6._12_4_ = _UNK_023945ec & (uint)((uint64_t)extraout_XMM0_Qb >> 0x20);
        auVar7._4_12_ = SUB1612(auVar6 | g_023945f0,4);
        auVar7._0_4_ = SUB164(auVar6 | g_023945f0,0) + (float)uVar5;
        roundss(ZEXT816(0),auVar7,0xb);
      }
      if (local_40 >> 0x20 == 0) {
        FUN_01e436c0();
      }
      else {
        uVar5 = (**(code **)(*this_ptr + 0xa68))();
        auVar8._0_4_ = g_023945e0 & (uint)(float)uVar5;
        auVar8._4_4_ = _UNK_023945e4 & (uint)((uint64_t)uVar5 >> 0x20);
        auVar8._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_00;
        auVar8._12_4_ = _UNK_023945ec & (uint)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
        auVar9._4_12_ = SUB1612(auVar8 | g_023945f0,4);
        auVar9._0_4_ = SUB164(auVar8 | g_023945f0,0) + (float)uVar5;
        roundss(ZEXT816(0),auVar9,0xb);
      }
      unaff_RBX = (int64_t *)this_ptr[0x2c];
      (**(code **)(*unaff_RBX + 0x3c8))();
      local_30 = FUN_01a8fc90();
      if (local_30 >> 0x20 == 0) goto LAB_01b82250;
      uVar5 = extraout_XMM0_Qa_01;
      if (local_38._4_4_ != 0) {
        cVar2 = FUN_00e7c020();
        if (cVar2 == '\0') goto LAB_01b82250;
        uVar5 = extraout_XMM0_Qa_02;
        if (local_30._4_4_ == 0) goto LAB_01b82269;
      }
      if (local_40._4_4_ == 0) goto LAB_01b82269;
      uVar3 = FUN_00e7c020();
      uVar4 = (uint64_t)uVar3;
      param_2 = (byte)uVar3 & param_2;
      uVar5 = extraout_XMM0_Qa_03;
    }
    else {
      if (local_38._4_4_ == 0) {
LAB_01b82122:
        if ((local_40._4_4_ != 0) &&
           (cVar2 = FUN_00e7c020(), uVar5 = extraout_XMM0_Qa_00, cVar2 == '\0')) goto LAB_01b82141;
      }
      else {
        cVar2 = FUN_00e7c020();
        if (cVar2 == '\0') goto LAB_01b82141;
        uVar5 = extraout_XMM0_Qa;
        if (local_30._4_4_ != 0) goto LAB_01b82122;
      }
LAB_01b82269:
      uVar4 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
    }
    if (param_2 != 0) {
      (**(code **)(*this_ptr + 0xa30))(uVar5,local_30);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      uVar5 = FUN_01b70bd0(&local_40,&local_38);
      iVar1 = *(int *)(local_50 + 0xc);
      if (local_48 != '\0') {
        uVar5 = FUN_00d50b20();
      }
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
      if (iVar1 == 2) {
        (**(code **)(*this_ptr + 0x9f0))(uVar5,local_30);
      }
    }
  }
  else {
LAB_01b82250:
    uVar4 = 0;
  }
  FUN_00d50b20();
LAB_01b8225a:
  return uVar4 & 0xffffffff;
}

