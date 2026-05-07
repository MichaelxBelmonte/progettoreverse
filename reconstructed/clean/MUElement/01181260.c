// Function: FUN_01181260
// Address: 01181260
// Size: 1771 bytes
// Class: MUElement
// String references:
//   "bool"
//   "float"
//   "MUElement"
//   "_noteRealization"
//   "MUNote"
//   "double"
//   "GNInt"
//   "_realizations"
//   "_originalAnchorTime"
//   "_timeQuantization"
//   "_originalPitchDeviation"
//   "_pitchQuantization"
//   "_pitchWasSetManually"
//   "_timeWasSetManually"
//   "_manuallySetAmpFactor"
//   "_pitchDriftWasSetManually"
//   "_westernStandardScaleSnapOffset"
// === MUElement properties ===
//   bool            _showsLeftSeparator
//   bool            _feedbacksEditing
//   bool            _showsLeftDisjoinArrows
//   bool            _showsRightDisjoinArrows
//   bool            _selected
//   GNInt           _feedbackDisconnected
//   bool            _flagsDirty
//   GNTimeInterval  _intervalPreviewStartDelay
//   GNInt           _referencePitchIndex
//   GNInt           _selectedPitchIndex
//   double          _startTime
//   double          _stopTime
//   GNInt           _toolMode
//   bool            _inRegionCheck
//   double          _originalAnchorTime
//   double          _timeQuantization
//   float           _originalPitchDeviation
//   float           _pitchQuantization
//   bool            _pitchWasSetManually
//   bool            _timeWasSetManually
//   float           _manuallySetAmpFactor
//   bool            _pitchDriftWasSetManually
//   GNInt           _westernStandardScaleSnapOffset
//   GNInt           _startMargin
//   GNInt           _endMargin
//   double          _performanceTime


void FUN_01181260(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  char *pcVar10;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_025ecd90;
  this_ptr[7] = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 9) = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 10) = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x51) = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xb) = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5c) = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xc] = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01181a00();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_noteRealization";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUElement");
  }
  this_ptr[0xd] = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01181af0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_realizations";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNote");
  }
  return;
}

