// Function: FUN_00ad6940
// Address: 00ad6940
// Size: 646 bytes
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


int FUN_00ad6940(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  locale *plVar5;
  uint uVar6;
  streambuf *this_00;
  void*arg1;
  int64_t this_ptr;
  uint32_t uVar7;
  int64_t local_1b8;
  uint auStack_198 [2];
  int64_t alStack_190 [5];
  byte local_168;
  void*local_140;
  uint16_t local_32;
  runtime_error *this;
  
  iVar4 = (**(code **)(**(int64_t **)(this_ptr + 0x60) + 0x18))();
  cVar3 = (**(code **)(**(int64_t **)(this_ptr + 0x60) + 0x20))();
  if (cVar3 != '\0') {
    FUN_00ad3660();
    iVar4 = iVar4 + 1;
  }
  uVar7 = 0;
  cVar3 = *(char *)(this_ptr + 0x78);
  while( true ) {
    if (cVar3 == '\0') {
      (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x38))(uVar7,1);
    }
    *(void*)(this_ptr + 0x78) = 1;
    uVar6 = *(byte *)(this_ptr + 0x79) - 0x2b;
    this = (runtime_error *)(uint64_t)uVar6;
    if ((0x3a < (byte)uVar6) ||
       (this = (runtime_error *)(uint64_t)(uVar6 & 0xff),
       (0x400000004007fedU >> ((uint64_t)this & 0x3f) & 1) == 0)) break;
    *(void*)(this_ptr + 0x78) = 0;
    uVar7 = std::string::push_back((byte)uVar6);
    iVar4 = iVar4 + 1;
    cVar3 = *(char *)(this_ptr + 0x78);
  }
  FUN_00ad90c0();
  lVar1 = *(int64_t *)(local_1b8 + -0x18);
  plVar5 = (locale *)std::locale::classic();
  std::ios_base::getloc();
  std::ios_base::imbue((locale *)this);
  std::locale::~locale((locale *)this);
  plVar2 = *(int64_t **)((int64_t)alStack_190 + lVar1);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
    std::locale::locale((locale *)this,plVar5);
    std::locale::operator=((locale *)this,plVar5);
    std::locale::~locale((locale *)this);
  }
  std::locale::~locale((locale *)this);
  std::istream::operator>>((istream *)this,(short *)plVar5);
  if ((*(uint *)((int64_t)auStack_198 + *(int64_t *)(local_1b8 + -0x18)) & 3) != 2) {
    ___cxa_allocate_exception();
    uVar7 = std::runtime_error::runtime_error(this,(string *)plVar5);
                        ___cxa_throw(uVar7,PTR__runtime_error_0249c260);
  }
  this_00 = (streambuf *)&g_02522c80;
  local_140 = &g_02522ca8;
  if ((local_168 & 1) != 0) {
    operator_delete(&g_02522c80);
  }
  std::streambuf::~streambuf(this_00);
  std::istream::~istream((istream *)this_00);
  std::ios::~ios((ios *)this_00);
  *arg1 = local_32;
  cVar3 = (**(code **)(**(int64_t **)(this_ptr + 0x60) + 0x20))();
  if (cVar3 != '\0') {
    FUN_00ad3660();
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}

