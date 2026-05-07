// Function: FUN_014163e0
// Address: 014163e0
// Size: 1295 bytes
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


void FUN_014163e0(int64_t *param_1)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  void* pVar7;
  char *pcVar8;
  int64_t *arg1;
  int64_t local_e0;
  char local_d8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  uint64_t local_80;
  int64_t *local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  int64_t *local_58;
  uint32_t local_4c;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00d3ecc0();
  plVar6 = local_48;
  lVar4 = g_027c0df0;
  if (g_027c0df0 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar6 + 0x50))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') goto LAB_01416872;
  FUN_00d3ecf0();
  plVar6 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_78 = plVar6;
  FUN_00d3ed20();
  lVar4 = g_027c0df8;
  if (g_027c0df8 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  local_60 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_013fb420();
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar4 = FUN_00e8b990();
  uVar5 = 0;
  if (lVar4 != 0) {
    uVar5 = FUN_00d50b00();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    uVar5 = FUN_00d50b20();
  }
  local_4c = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
  if (lVar4 == 0) {
LAB_0141660d:
    local_58 = (int64_t *)0x0;
    local_80 = 0;
  }
  else {
    FUN_00cb1f10();
    local_58 = local_48;
    param_1 = local_48;
    if (local_48 == (int64_t *)0x0) goto LAB_0141660d;
    plVar6 = local_48;
    if (((local_40[0] == '\0') && (plVar6 = (int64_t *)FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      plVar6 = (int64_t *)FUN_00d50b20();
    }
    local_80 = CONCAT71((int7)((uint64_t)plVar6 >> 8),1);
    FUN_00db3260();
    local_4c = 0;
  }
  FUN_013fb420();
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01328c30();
  FUN_00d23310();
  plVar6 = local_48;
  pVar7 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_40[0]);
  pcVar8 = local_38;
  if (local_40[0] != '\0') {
    pcVar8 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar8 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc1d0();
  if ((local_38[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_4c == '\0') {
    FUN_00db3270();
  }
  FUN_00d403d0();
  plVar6 = local_78;
  lVar1 = g_027c0e00;
  if (g_027c0e00 != 0) {
    FUN_00d50b00();
  }
  local_b0 = plVar6;
  local_a8 = '\0';
  local_a0 = 0;
  local_98 = '\0';
  FUN_00d40470(&local_a0,&local_b0,1,3);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_4c == '\0') {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_60 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01416872:
  local_90 = *arg1;
  local_88 = '\0';
  FUN_00d530a0();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  return;
}

