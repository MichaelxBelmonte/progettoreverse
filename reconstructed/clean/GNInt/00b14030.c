// Function: FUN_00b14030
// Address: 00b14030
// Size: 1843 bytes
// Class: GNInt
// String references:
//   "float"
//   "gain"
//   "roomsize"
//   "damp"
//   "wet"
//   "dry"
//   "width"
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


void FUN_00b14030(char *param_1,uint64_t param_2,size_t param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int iVar4;
  int64_t lVar5;
  int64_t arg1;
  void*this_ptr;
  
  FUN_005fea00();
  *this_ptr = &g_025408b0;
  *(void*)(this_ptr + 0x12) = 0;
  lVar5 = FUN_00b13a60();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x94) = 0;
  lVar5 = FUN_00b13a60();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x13) = 0;
  lVar5 = FUN_00b13a60();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x9c) = 0;
  lVar5 = FUN_00b13a60();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x14) = 0;
  lVar5 = FUN_00b13a60();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa4) = 0;
  lVar5 = FUN_00b13a60();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  uVar1 = *(void*)(arg1 + 0xb0);
  this_ptr[0x15] = *(void*)(arg1 + 0xa8);
  this_ptr[0x16] = uVar1;
  uVar1 = *(void*)(arg1 + 0xb8);
  uVar2 = *(void*)(arg1 + 0xc0);
  uVar3 = *(void*)(arg1 + 0xd0);
  this_ptr[0x19] = *(void*)(arg1 + 200);
  this_ptr[0x1a] = uVar3;
  this_ptr[0x17] = uVar1;
  this_ptr[0x18] = uVar2;
  uVar1 = *(void*)(arg1 + 0xd8);
  uVar2 = *(void*)(arg1 + 0xe0);
  uVar3 = *(void*)(arg1 + 0xf0);
  this_ptr[0x1d] = *(void*)(arg1 + 0xe8);
  this_ptr[0x1e] = uVar3;
  this_ptr[0x1b] = uVar1;
  this_ptr[0x1c] = uVar2;
  uVar1 = *(void*)(arg1 + 0xf8);
  uVar2 = *(void*)(arg1 + 0x100);
  uVar3 = *(void*)(arg1 + 0x110);
  this_ptr[0x21] = *(void*)(arg1 + 0x108);
  this_ptr[0x22] = uVar3;
  this_ptr[0x1f] = uVar1;
  this_ptr[0x20] = uVar2;
  uVar1 = *(void*)(arg1 + 0x118);
  uVar2 = *(void*)(arg1 + 0x120);
  uVar3 = *(void*)(arg1 + 0x130);
  this_ptr[0x25] = *(void*)(arg1 + 0x128);
  this_ptr[0x26] = uVar3;
  this_ptr[0x23] = uVar1;
  this_ptr[0x24] = uVar2;
  uVar1 = *(void*)(arg1 + 0x140);
  uVar2 = *(void*)(arg1 + 0x148);
  uVar3 = *(void*)(arg1 + 0x150);
  this_ptr[0x27] = *(void*)(arg1 + 0x138);
  this_ptr[0x28] = uVar1;
  this_ptr[0x29] = uVar2;
  this_ptr[0x2a] = uVar3;
  uVar1 = *(void*)(arg1 + 0x160);
  uVar2 = *(void*)(arg1 + 0x168);
  uVar3 = *(void*)(arg1 + 0x170);
  this_ptr[0x2b] = *(void*)(arg1 + 0x158);
  this_ptr[0x2c] = uVar1;
  this_ptr[0x2d] = uVar2;
  this_ptr[0x2e] = uVar3;
  uVar1 = *(void*)(arg1 + 0x180);
  uVar2 = *(void*)(arg1 + 0x188);
  uVar3 = *(void*)(arg1 + 400);
  this_ptr[0x2f] = *(void*)(arg1 + 0x178);
  this_ptr[0x30] = uVar1;
  this_ptr[0x31] = uVar2;
  this_ptr[0x32] = uVar3;
  uVar1 = *(void*)(arg1 + 0x1a0);
  uVar2 = *(void*)(arg1 + 0x1a8);
  uVar3 = *(void*)(arg1 + 0x1b0);
  this_ptr[0x33] = *(void*)(arg1 + 0x198);
  this_ptr[0x34] = uVar1;
  this_ptr[0x35] = uVar2;
  this_ptr[0x36] = uVar3;
  uVar1 = *(void*)(arg1 + 0x1c0);
  uVar2 = *(void*)(arg1 + 0x1c8);
  uVar3 = *(void*)(arg1 + 0x1d0);
  this_ptr[0x37] = *(void*)(arg1 + 0x1b8);
  this_ptr[0x38] = uVar1;
  this_ptr[0x39] = uVar2;
  this_ptr[0x3a] = uVar3;
  uVar1 = *(void*)(arg1 + 0x1d8);
  uVar2 = *(void*)(arg1 + 0x1e0);
  uVar3 = *(void*)(arg1 + 0x1f0);
  this_ptr[0x3d] = *(void*)(arg1 + 0x1e8);
  this_ptr[0x3e] = uVar3;
  this_ptr[0x3b] = uVar1;
  this_ptr[0x3c] = uVar2;
  uVar1 = *(void*)(arg1 + 0x1f8);
  uVar2 = *(void*)(arg1 + 0x200);
  uVar3 = *(void*)(arg1 + 0x210);
  this_ptr[0x41] = *(void*)(arg1 + 0x208);
  this_ptr[0x42] = uVar3;
  this_ptr[0x3f] = uVar1;
  this_ptr[0x40] = uVar2;
  uVar1 = *(void*)(arg1 + 0x220);
  uVar2 = *(void*)(arg1 + 0x228);
  uVar3 = *(void*)(arg1 + 0x230);
  this_ptr[0x43] = *(void*)(arg1 + 0x218);
  this_ptr[0x44] = uVar1;
  this_ptr[0x45] = uVar2;
  this_ptr[0x46] = uVar3;
  uVar1 = *(void*)(arg1 + 0x240);
  uVar2 = *(void*)(arg1 + 0x248);
  uVar3 = *(void*)(arg1 + 0x250);
  this_ptr[0x47] = *(void*)(arg1 + 0x238);
  this_ptr[0x48] = uVar1;
  this_ptr[0x49] = uVar2;
  this_ptr[0x4a] = uVar3;
  uVar1 = *(void*)(arg1 + 0x260);
  uVar2 = *(void*)(arg1 + 0x268);
  uVar3 = *(void*)(arg1 + 0x270);
  this_ptr[0x4b] = *(void*)(arg1 + 600);
  this_ptr[0x4c] = uVar1;
  this_ptr[0x4d] = uVar2;
  this_ptr[0x4e] = uVar3;
  uVar1 = *(void*)(arg1 + 0x278);
  uVar2 = *(void*)(arg1 + 0x280);
  uVar3 = *(void*)(arg1 + 0x290);
  this_ptr[0x51] = *(void*)(arg1 + 0x288);
  this_ptr[0x52] = uVar3;
  this_ptr[0x4f] = uVar1;
  this_ptr[0x50] = uVar2;
  uVar1 = *(void*)(arg1 + 0x2a0);
  uVar2 = *(void*)(arg1 + 0x2a8);
  uVar3 = *(void*)(arg1 + 0x2b0);
  this_ptr[0x53] = *(void*)(arg1 + 0x298);
  this_ptr[0x54] = uVar1;
  this_ptr[0x55] = uVar2;
  this_ptr[0x56] = uVar3;
  uVar1 = *(void*)(arg1 + 0x2c0);
  this_ptr[0x57] = *(void*)(arg1 + 0x2b8);
  this_ptr[0x58] = uVar1;
  this_ptr[0x59] = *(void*)(arg1 + 0x2c8);
  this_ptr[0x5c] = *(void*)(arg1 + 0x2e0);
  uVar1 = *(void*)(arg1 + 0x2d8);
  this_ptr[0x5a] = *(void*)(arg1 + 0x2d0);
  this_ptr[0x5b] = uVar1;
  this_ptr[0x5f] = *(void*)(arg1 + 0x2f8);
  uVar1 = *(void*)(arg1 + 0x2f0);
  this_ptr[0x5d] = *(void*)(arg1 + 0x2e8);
  this_ptr[0x5e] = uVar1;
  uVar1 = *(void*)(arg1 + 0x308);
  this_ptr[0x60] = *(void*)(arg1 + 0x300);
  this_ptr[0x61] = uVar1;
  this_ptr[0x62] = *(void*)(arg1 + 0x310);
  uVar1 = *(void*)(arg1 + 800);
  this_ptr[99] = *(void*)(arg1 + 0x318);
  this_ptr[100] = uVar1;
  this_ptr[0x65] = *(void*)(arg1 + 0x328);
  uVar1 = *(void*)(arg1 + 0x338);
  this_ptr[0x66] = *(void*)(arg1 + 0x330);
  this_ptr[0x67] = uVar1;
  this_ptr[0x68] = *(void*)(arg1 + 0x340);
  this_ptr[0x6b] = *(void*)(arg1 + 0x358);
  uVar1 = *(void*)(arg1 + 0x350);
  this_ptr[0x69] = *(void*)(arg1 + 0x348);
  this_ptr[0x6a] = uVar1;
  uVar1 = *(void*)(arg1 + 0x368);
  this_ptr[0x6c] = *(void*)(arg1 + 0x360);
  this_ptr[0x6d] = uVar1;
  this_ptr[0x6e] = *(void*)(arg1 + 0x370);
  _memcpy(param_1,&g_00018da8,param_3);
  return;
}

