// Function: FUN_0077b140
// Address: 0077b140
// Size: 4086 bytes
// Class: MUElementAnalyzer
// === MUElementAnalyzer properties ===
//   SInt64          _engineSampleOffset
//   GNInt           _engineIndex
//   float *         _originalSignal
//   float *         _originalSignalBufferWithMargin
//   SInt64          _sampleCount
//   SInt64          _nonSilentSampleCount
//   double          _sampleRate
//   double          _duration
//   double          _parameterValuesPerSecond
//   GNInt           _parameterDataSize
//   float           _maxAmplitude
//   float           _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum
//   float           _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum
//   bool            _isPercussive
//   bool            _isPolyphonic
//   float           _pitchJumpsSum
//   float           _pitchBarycenter
//   float           _allPercussiveDecay
//   float           _allRhythmicQuality
//   float           _allTonality
//   float           _allCentDiffPerMillisecond
//   float           _allPitchRangePerNote
//   float           _allEnergyRelevantRegionRatio
//   float           _allAttackPeakQuality
//   float           _allAttackPeakToEnergyRegionRatio
//   float           _allMonophony
//   float           _referenceAttackPeakValue
//   float           _referencePeakRmsLevel
//   bool            _origRMSValid
//   GNInt *         _nonSilentRmsVals
//   ... +76 more


void FUN_0077b140(void* param_1)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void* pVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int iVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar10;
  uint64_t uVar11;
  int64_t **pplVar12;
  int64_t local_218;
  char local_210;
  int64_t *local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t *local_1b8;
  char local_1b0;
  int64_t *local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t *local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  uint64_t local_a8;
  int64_t *local_a0;
  void*local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_69;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  
  lVar4 = *arg1;
  local_69 = (char)arg1[1];
  if ((local_69 != '\0') && (lVar4 != 0)) {
    FUN_00d50b00();
  }
  local_108 = lVar4;
  FUN_01646470();
  local_78 = local_68;
  if ((((local_60 == '\0') && (local_68 != (int64_t *)0x0)) && (FUN_00d50b00(), local_60 != '\0'))
     && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00e33de0();
  lVar4 = g_0270b920;
  if (g_0270b920 != 0) {
    FUN_00d50b00();
  }
  pplVar12 = &local_68;
  FUN_000175c0();
  plVar7 = local_68;
  FUN_0006e1c0();
  if (plVar7 == (int64_t *)0x0) {
    pplVar12 = &g_02802688;
    plVar7 = g_02802688;
    if (g_02802690 == '\0') goto LAB_0077b265;
LAB_0077b249:
    *(void*)(pplVar12 + 1) = 0;
    plVar10 = local_78;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') {
      pplVar12 = &g_02802688;
    }
    plVar7 = *pplVar12;
    if (*(char *)(pplVar12 + 1) != '\0') goto LAB_0077b249;
LAB_0077b265:
    plVar10 = local_78;
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  local_b0 = plVar7;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  local_a0 = local_68;
  if ((((local_60 == '\0') && (local_68 != (int64_t *)0x0)) && (FUN_00d50b00(), local_60 != '\0'))
     && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x610))();
  plVar7 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0077b380;
    }
  }
  else if (local_68 != (int64_t *)0x0) {
LAB_0077b380:
    local_60 = '\0';
    local_68 = (int64_t *)0x0;
    local_58 = plVar7;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar9 = -local_50._4_4_;
        }
        else {
          iVar9 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar9);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar9 = 0;
        }
        local_50 = CONCAT44(iVar9,(int)local_50);
      }
      lVar4 = (int64_t)(int)local_50;
      iVar9 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar9);
      if (*(int *)((int64_t)local_58 + 0xc) <= iVar9) break;
      local_68 = *(int64_t **)(local_58[2] + 8 + lVar4 * 8);
      local_1d8 = local_b0;
      local_1d0 = '\0';
      local_1c8 = 0;
      local_1c0 = '\0';
      FUN_006fe880(&local_1c8,&local_1d8);
      if ((local_1c0 != '\0') && (local_1c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1d0 != '\0') && (local_1d8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    plVar7 = local_58;
    FUN_000e3600();
    param_1 = (void*)plVar7;
    FUN_00d50b20();
    plVar10 = local_78;
  }
  if (plVar10 == (int64_t *)0x0) {
    bVar1 = true;
    uVar11 = 0;
    local_40 = (int64_t *)0x0;
    local_a8 = 0;
    local_80 = (int64_t *)0x0;
    goto LAB_0077be72;
  }
  (**(code **)(*this_ptr + 0x498))();
  FUN_00cb1f10();
  plVar7 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  FUN_00db32a0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  plVar5 = local_68;
  if (((local_60 == '\0') && (local_68 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_60 != '\0' && (local_68 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  local_98 = (void*)0x0;
  local_80 = (int64_t *)0x0;
  FUN_00d50b00();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264240();
  local_80 = local_68;
  plVar8 = local_68;
  if (local_68 == (int64_t *)0x0) {
    local_80 = (int64_t *)0x0;
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
    if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
  }
  local_98 = &g_02802501;
  pVar6 = (void*)plVar8;
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_1b0 = '\0';
  local_1b8 = plVar10;
  local_a8 = uVar11;
  FUN_0124c710();
  if ((local_1b0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00764570();
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505900();
  local_100 = local_90;
  local_f8 = 0;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_f8 = '\x01';
  FUN_016cbba0();
  local_40 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d900();
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00764570();
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  local_f0 = local_90;
  local_e8 = 0;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_e8 = '\x01';
  FUN_015127c0();
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_1a8 = local_40;
  local_1a0 = '\0';
  FUN_0132d960();
  if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar6);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    pVar6 = (void*)local_a0;
  }
  local_198 = local_b0;
  local_190 = '\0';
  FUN_0039e8b0();
  local_e0 = local_68;
  local_d8 = 0;
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_d8 = '\x01';
  local_188 = local_78;
  local_180 = '\0';
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  local_d0 = local_90;
  local_c8 = 0;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  plVar10 = local_78;
  local_c8 = '\x01';
  pplVar12 = &local_188;
  FUN_012f0b60(pplVar12,&local_e0,1,0,&local_d0);
  pVar6 = (void*)pplVar12;
  if ((local_210 != '\0') && (local_218 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00db32a0();
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124c6e0();
  plVar8 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0077bd17;
    }
  }
  else if (local_68 != (int64_t *)0x0) {
LAB_0077bd17:
    local_60 = '\0';
    local_68 = (int64_t *)0x0;
    local_58 = plVar8;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar9 = -local_50._4_4_;
        }
        else {
          iVar9 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar9);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar9 = 0;
        }
        local_50 = CONCAT44(iVar9,(int)local_50);
      }
      lVar4 = (int64_t)(int)local_50;
      iVar9 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar9);
      if (*(int *)((int64_t)local_58 + 0xc) <= iVar9) break;
      local_68 = *(int64_t **)(local_58[2] + 8 + lVar4 * 8);
      pvVar3 = _pthread_getspecific((void*)local_58[2]);
      plVar10 = plVar5;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        plVar10 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      local_178 = local_68;
      local_170 = '\0';
      (**(code **)(*plVar10 + 0x3e0))();
      if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00115190();
    FUN_00d50b20();
    plVar10 = local_78;
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  uVar11 = CONCAT71((int7)((uint64_t)plVar5 >> 8),1);
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  bVar1 = false;
  local_40 = plVar10;
LAB_0077be72:
  plVar10 = local_40;
  local_98 = (void*)uVar11;
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  plVar7 = g_026f6de8;
  local_160 = '\0';
  local_168 = plVar10;
  if (g_026f6de8 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_68 = plVar7;
  local_60 = '\0';
  FUN_00ca0840();
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_158 = g_026f6d80;
  if (g_026f6d80 != 0) {
    FUN_00d50b00();
  }
  local_150 = '\x01';
  local_110 = 0;
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  lVar4 = local_108;
  local_110 = '\x01';
  local_140 = '\0';
  local_148 = plVar5;
  local_118 = this_ptr;
  FUN_00d40470(&local_148,&local_118,3,3);
  if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != (int64_t *)0x0) && (local_40 != (int64_t *)0x0)) {
    (**(code **)(*this_ptr + 0x5f0))();
    local_138 = local_80;
    local_130 = '\0';
    local_128 = local_40;
    local_120 = '\0';
    (**(code **)(*local_68 + 0x640))();
    if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_0074ea80();
  FUN_0076f320();
  FUN_00d50b20();
  if (local_a0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_b0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar1 && local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_a8 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_78 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_69 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  return;
}

