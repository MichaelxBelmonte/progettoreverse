// Function: FUN_01964b30
// Address: 01964b30
// Size: 2001 bytes
// Class: GNInt
// === GNInt properties ===
//   GNInt           _assembledElementRendererCount
//   bool            _processPeriodBased
//   bool            _usesPososc
//   bool            _resetAllPhasesAtAttack
//   bool            _continueAllPhasesByDefault
//   bool            _renderWithOriginalTime
//   float           _freqDomainFormantResolution
//   GNInt           _freqDomainFourierSize
//   float           _freqDomainPhaseResetParametersScale
//   float           _formantPitchUpCompensationFactor
//   float           _formantPitchDownCompensationFactor
//   bool            _didFail
//   GNInt           _expectedResultLength
//   GNInt           _httpStatusCode
//   bool            _isSuspended
//   SInt64          _uploadLength
//   GNInt           _receivedResultLength
//   bool            _didTimeOut
//   float           _cent
//   GNInt           _westernStandardPitchIndexOffset
//   bool            _isLoop
//   GNInt           _numerator
//   GNInt           _denominator
//   GNInt           _beats
//   GNInt           _tonalKey
//   GNInt           _tonalGender
//   float           _time
//   float           _nextBeepStartTime
//   float           _beepTime
//   float           _beepLength
//   ... +133 more


void FUN_01964b30(void)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  uint8_t uVar6;
  void *pvVar7;
  void* pVar8;
  int64_t *plVar9;
  int64_t *this_ptr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint64_t uVar15;
  double dVar16;
  double dVar17;
  uint64_t extraout_XMM0_Qb;
  float fVar18;
  double local_d0;
  uint64_t local_c8;
  uint64_t uStack_c0;
  uint8_t local_b8 [16];
  int64_t local_a8;
  char local_a0;
  uint64_t local_58;
  int64_t *local_40;
  char local_38;
  
  if (this_ptr[0x2f] == 0) {
    return;
  }
  uVar15 = FUN_01989f80();
  if (local_40 == (int64_t *)0x0) {
    return;
  }
  if (local_38 == '\0') {
    uVar15 = FUN_00d50b00();
  }
  (**(code **)(*local_40 + 0xcd0))(uVar15,&local_d0);
  plVar9 = local_40;
  if (local_40 == (int64_t *)0x0) {
    bVar3 = true;
    fVar10 = g_02390124;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    pvVar7 = _pthread_getspecific((void*)plVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar3 = false;
    fVar10 = (float)local_d0;
  }
  pVar8 = (void*)plVar9;
  *(float *)(this_ptr + 0x3a) = fVar10;
  lVar1 = this_ptr[0x35];
  local_c8 = this_ptr[0x36];
  uStack_c0 = 0;
  local_b8 = ZEXT416((uint)(*(float *)((int64_t)this_ptr + 0x10c) + (float)lVar1));
  fVar10 = *(float *)(this_ptr + 0x22);
  fVar11 = (float)(**(code **)(*local_40 + 3000))();
  FUN_01964590();
  fVar12 = (float)FUN_0198a7d0();
  fVar18 = g_0241b660 * fVar11;
  fVar13 = g_023908e0 * fVar11;
  pvVar7 = _pthread_getspecific(pVar8);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125a280();
  fVar14 = (float)(**(code **)(*local_40 + 0x938))();
  local_58 = CONCAT44(fVar12 + fVar18,fVar14);
  cVar4 = (**(code **)((int64_t)&dylib_command_00001288.cmd + *local_40))();
  if (cVar4 == '\0') {
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar16 = (double)FUN_0125a280();
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar17 = (double)FUN_01264380();
    fVar12 = (float)(**(code **)(*local_40 + 0x938))(dVar16 + dVar17);
  }
  else {
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar16 = (double)FUN_0125a280();
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar17 = (double)FUN_01264170();
    fVar12 = (float)(**(code **)(*local_40 + 0x938))(dVar16 + dVar17);
  }
  fVar12 = fVar12 - fVar14;
  uVar15 = FUN_00d051c0(local_58);
  cVar4 = *(char *)((int64_t)this_ptr + 0x1c5);
  cVar5 = (**(code **)(*this_ptr + 0x9d0))();
  if (cVar4 != cVar5) {
    uVar6 = (**(code **)(*this_ptr + 0x9d0))();
    *(void*)((int64_t)this_ptr + 0x1c5) = uVar6;
    FUN_00d216c0();
    *(void*)(this_ptr + 0x37) = 1;
  }
  if ((fVar13 != *(float *)(this_ptr + 0x23)) || (NAN(fVar13) || NAN(*(float *)(this_ptr + 0x23)))
     ) {
LAB_01964f44:
    if (this_ptr[0x30] != 0) {
      this_ptr[0x30] = 0;
      FUN_00d50b20();
    }
    if (this_ptr[0x31] != 0) {
      this_ptr[0x31] = 0;
      FUN_00d50b20();
    }
    if (this_ptr[0x3b] != 0) {
      this_ptr[0x3b] = 0;
      FUN_00d50b20();
    }
    if (this_ptr[0x33] != 0) {
      this_ptr[0x33] = 0;
      FUN_00d50b20();
    }
    FUN_00d216c0();
    if (this_ptr[0x32] != 0) {
      this_ptr[0x32] = 0;
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 0x37) = 1;
  }
  else if ((fVar12 != *(float *)((int64_t)this_ptr + 0x114)) ||
          (NAN(fVar12) || NAN(*(float *)((int64_t)this_ptr + 0x114)))) goto LAB_01964f44;
  if ((*(float *)((int64_t)this_ptr + 0x1bc) != fVar11) ||
     (NAN(*(float *)((int64_t)this_ptr + 0x1bc)) || NAN(fVar11))) {
LAB_01965017:
    FUN_00d216c0();
    *(void*)(this_ptr + 0x37) = 1;
  }
  else {
    local_58._0_4_ = (float)uVar15;
    if (((float)local_58 != *(float *)((int64_t)this_ptr + 0x10c)) ||
       (NAN((float)local_58) || NAN(*(float *)((int64_t)this_ptr + 0x10c)))) goto LAB_01965017;
    local_58._4_4_ = (float)((uint64_t)uVar15 >> 0x20);
    if ((local_58._4_4_ != *(float *)(this_ptr + 0x22)) ||
       (NAN(local_58._4_4_) || NAN(*(float *)(this_ptr + 0x22)))) goto LAB_01965017;
  }
  local_a0 = 0;
  lVar2 = this_ptr[0x2f];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  local_a8 = lVar2;
  fVar13 = (float)(**(code **)((int64_t)&dylib_command_000011b8.cmd + *local_40))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (NAN(fVar13)) {
    if (((char)this_ptr[0x37] == '\0') &&
       (cVar4 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                            *local_40 + 0x40))(), cVar4 == '\0')) goto LAB_019652b4;
  }
  else {
    *(void*)(this_ptr + 0x37) = 1;
  }
  *(float *)((int64_t)this_ptr + 0x1bc) = fVar11;
  (**(code **)(*this_ptr + 0x9e0))();
  FUN_01e3c0a0(uVar15,fVar12);
  local_b8 = insertps(local_b8,(float)((uint64_t)lVar1 >> 0x20) + fVar10,0x10);
  if (((local_c8._4_4_ != 0.0) || (NAN(local_c8._4_4_))) &&
     (((float)local_c8 != 0.0 || (NAN((float)local_c8))))) {
    local_b8._0_8_ = FUN_00d052e0();
    local_b8._8_8_ = extraout_XMM0_Qb;
  }
  FUN_01e40eb0();
  (**(code **)(*local_40 + 0x618))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x37) = 0;
  FUN_01989f80();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_01989f80();
    FUN_00d50b00();
    (**(code **)(*local_40 + 0xbb0))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e3f820();
    cVar4 = FUN_00d05440();
    if (cVar4 == '\0') {
      FUN_01989f80();
      FUN_00d50b00();
      (**(code **)(*local_40 + 0xc30))();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_019652b4:
  if (!bVar3) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

