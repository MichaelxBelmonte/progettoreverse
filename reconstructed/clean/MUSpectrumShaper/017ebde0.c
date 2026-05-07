// Function: FUN_017ebde0
// Address: 017ebde0
// Size: 2258 bytes
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


void FUN_017ebde0(void *param_1,uint64_t param_2,size_t param_3)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint8_t auVar7 [16];
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  void*puVar13;
  void *pvVar14;
  int64_t lVar15;
  int64_t this_ptr;
  uint32_t uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint8_t auVar21 [16];
  int64_t local_40;
  char local_38;
  
  FUN_00e8b7a0();
  *(void*)(this_ptr + 0xb8) = 0;
  *(void*)(this_ptr + 0xc0) = 0;
  *(void*)(this_ptr + 0xcc) = 0;
  *(void*)(this_ptr + 0x78) = 0;
  *(void*)(this_ptr + 0x7c) = 0;
  *(void*)(this_ptr + 0xc4) = 0x3f8000003f800000;
  *(void*)(this_ptr + 0xb0) = 0x3f800000;
  *(void*)(this_ptr + 0xa8) = 0x412c440000000001;
  puVar13 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &g_025f0a18;
  puVar13[0x10] = 0;
  *(void*)(puVar13 + 0x11) = 0;
  puVar13[0x14] = 0;
  *(void*)(puVar13 + 0x15) = 0;
  puVar13[7] = 0;
  puVar13[8] = 0;
  *(void*)(puVar13 + 9) = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  *(void*)((int64_t)puVar13 + 0x69) = 0;
  *(void*)((int64_t)puVar13 + 0x71) = 0;
  *(void*)((int64_t)puVar13 + 0x8c) = 0;
  *(void*)((int64_t)puVar13 + 0x94) = 0;
  *(void*)((int64_t)puVar13 + 0x9c) = 0;
  pcVar12 = g_025f0a30;
  (*g_025f0a30)();
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  *(void**)(this_ptr + 0x40) = puVar13;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar14 = _pthread_getspecific((void*)param_1);
  if (pvVar14 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar16 = FUN_00d50b00();
  FUN_015b73b0(uVar16,&stack0xffffffffffffff50);
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  puVar13 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &g_025f0a18;
  puVar13[0x10] = 0;
  *(void*)(puVar13 + 0x11) = 0;
  puVar13[0x14] = 0;
  *(void*)(puVar13 + 0x15) = 0;
  puVar13[7] = 0;
  puVar13[8] = 0;
  *(void*)(puVar13 + 9) = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  *(void*)((int64_t)puVar13 + 0x69) = 0;
  *(void*)((int64_t)puVar13 + 0x71) = 0;
  *(void*)((int64_t)puVar13 + 0x8c) = 0;
  *(void*)((int64_t)puVar13 + 0x94) = 0;
  *(void*)((int64_t)puVar13 + 0x9c) = 0;
  (*pcVar12)();
  lVar1 = *(int64_t *)(this_ptr + 0x48);
  *(void**)(this_ptr + 0x48) = puVar13;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar14 = _pthread_getspecific((void*)param_1);
  if (pvVar14 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar16 = FUN_00d50b00();
  FUN_015b73b0(uVar16,&stack0xffffffffffffff60);
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  puVar13 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &g_025f0a18;
  puVar13[0x10] = 0;
  *(void*)(puVar13 + 0x11) = 0;
  puVar13[0x14] = 0;
  *(void*)(puVar13 + 0x15) = 0;
  puVar13[7] = 0;
  puVar13[8] = 0;
  *(void*)(puVar13 + 9) = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  *(void*)((int64_t)puVar13 + 0x69) = 0;
  *(void*)((int64_t)puVar13 + 0x71) = 0;
  *(void*)((int64_t)puVar13 + 0x8c) = 0;
  *(void*)((int64_t)puVar13 + 0x94) = 0;
  *(void*)((int64_t)puVar13 + 0x9c) = 0;
  (*pcVar12)();
  lVar1 = *(int64_t *)(this_ptr + 0x50);
  *(void**)(this_ptr + 0x50) = puVar13;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar14 = _pthread_getspecific((void*)param_1);
  if (pvVar14 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar16 = FUN_00d50b00();
  FUN_015b73b0(uVar16,&stack0xffffffffffffff70);
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  puVar13 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &g_025f0a18;
  puVar13[0x10] = 0;
  *(void*)(puVar13 + 0x11) = 0;
  puVar13[0x14] = 0;
  *(void*)(puVar13 + 0x15) = 0;
  puVar13[7] = 0;
  puVar13[8] = 0;
  *(void*)(puVar13 + 9) = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  *(void*)((int64_t)puVar13 + 0x69) = 0;
  *(void*)((int64_t)puVar13 + 0x71) = 0;
  *(void*)((int64_t)puVar13 + 0x8c) = 0;
  *(void*)((int64_t)puVar13 + 0x94) = 0;
  *(void*)((int64_t)puVar13 + 0x9c) = 0;
  (*pcVar12)();
  lVar1 = *(int64_t *)(this_ptr + 0x58);
  *(void**)(this_ptr + 0x58) = puVar13;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar14 = _pthread_getspecific((void*)param_1);
  if (pvVar14 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar16 = FUN_00d50b00();
  FUN_015b73b0(uVar16,&stack0xffffffffffffff80);
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  puVar13 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &g_02610350;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[9] = 0;
  puVar13[10] = 0;
  *(void*)((int64_t)puVar13 + 0x54) = 0;
  *(void*)((int64_t)puVar13 + 0x5c) = 0;
  pcVar12 = g_02610368;
  (*g_02610368)();
  lVar1 = *(int64_t *)(this_ptr + 0x60);
  *(void**)(this_ptr + 0x60) = puVar13;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar14 = _pthread_getspecific((void*)param_1);
  if (pvVar14 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar16 = FUN_00d50b00();
  FUN_0188ea70(uVar16,&stack0xffffffffffffff90);
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  puVar13 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &g_02610350;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[9] = 0;
  puVar13[10] = 0;
  *(void*)((int64_t)puVar13 + 0x54) = 0;
  *(void*)((int64_t)puVar13 + 0x5c) = 0;
  (*pcVar12)();
  lVar1 = *(int64_t *)(this_ptr + 0x68);
  *(void**)(this_ptr + 0x68) = puVar13;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar14 = _pthread_getspecific((void*)param_1);
  if (pvVar14 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar16 = FUN_00d50b00();
  FUN_0188ea70(uVar16,&stack0xffffffffffffffa0);
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  puVar13 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &g_02610350;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[9] = 0;
  puVar13[10] = 0;
  *(void*)((int64_t)puVar13 + 0x54) = 0;
  *(void*)((int64_t)puVar13 + 0x5c) = 0;
  (*pcVar12)();
  lVar1 = *(int64_t *)(this_ptr + 0x70);
  *(void**)(this_ptr + 0x70) = puVar13;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar14 = _pthread_getspecific((void*)param_1);
  if (pvVar14 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar16 = FUN_00d50b00();
  FUN_0188ea70(uVar16,&stack0xffffffffffffffb0);
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_40 + 0x18)) {
    _memset_pattern16(param_1,(void *)((uint64_t)((*(uint *)(local_40 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  lVar1 = *(int64_t *)(this_ptr + 0x90);
  if (lVar1 == local_40) {
    FUN_00d50b20();
  }
  else {
    *(int64_t *)(this_ptr + 0x90) = local_40;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_40 + 0x18)) {
    _memset_pattern16(param_1,(void *)((uint64_t)((*(uint *)(local_40 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  lVar1 = *(int64_t *)(this_ptr + 0x98);
  if (lVar1 == local_40) {
    FUN_00d50b20();
  }
  else {
    *(int64_t *)(this_ptr + 0x98) = local_40;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_40 + 0x18)) {
    _memset_pattern16(param_1,(void *)((uint64_t)((*(uint *)(local_40 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  lVar1 = *(int64_t *)(this_ptr + 0x88);
  if (lVar1 == local_40) {
    FUN_00d50b20();
  }
  else {
    *(int64_t *)(this_ptr + 0x88) = local_40;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  iVar11 = _UNK_023de2bc;
  iVar10 = _UNK_023de2b8;
  iVar9 = _UNK_023de2b4;
  iVar8 = g_023de2b0;
  auVar7 = g_023b2d50;
  iVar6 = _UNK_0239418c;
  iVar5 = _UNK_02394188;
  iVar4 = _UNK_02394184;
  iVar3 = g_02394180;
  lVar1 = *(int64_t *)(*(int64_t *)(this_ptr + 0x88) + 0x10);
  lVar15 = 5;
  iVar17 = g_02394150;
  iVar18 = _UNK_02394154;
  iVar19 = _UNK_02394158;
  iVar20 = _UNK_0239415c;
  while( true ) {
    auVar21._4_4_ = (float)iVar18;
    auVar21._0_4_ = (float)iVar17;
    auVar21._8_4_ = (float)iVar19;
    auVar21._12_4_ = (float)iVar20;
    auVar21 = divps(auVar7,auVar21);
    *(uint8_t (*) [16])(lVar1 + -0x10 + lVar15 * 4) = auVar21;
    if (lVar15 == 0x7fd) break;
    auVar2._4_4_ = (float)(iVar18 + iVar4);
    auVar2._0_4_ = (float)(iVar17 + iVar3);
    auVar2._8_4_ = (float)(iVar19 + iVar5);
    auVar2._12_4_ = (float)(iVar20 + iVar6);
    auVar21 = divps(auVar7,auVar2);
    *(uint8_t (*) [16])(lVar1 + lVar15 * 4) = auVar21;
    iVar17 = iVar17 + iVar8;
    iVar18 = iVar18 + iVar9;
    iVar19 = iVar19 + iVar10;
    iVar20 = iVar20 + iVar11;
    lVar15 = lVar15 + 8;
  }
  *(void*)(&g_00001ff4 + lVar1) = 0x3a0020083a003012;
  *(void*)(lVar1 + 0x1ffc) = 0x3a001002;
  return;
}

