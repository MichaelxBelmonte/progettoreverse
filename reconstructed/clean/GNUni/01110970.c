// Function: FUN_01110970
// Address: 01110970
// Size: 680 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "MUComposition"
//   "_copiesAudioSources"
//   "MUBarSignatureMap"
//   "MUBarSignatureMapResultItem"
// === GNUni properties ===
//   bool            _preferedFrameSizeLocked
//   GNCoord         _verticalScrollerWidth
//   GNCoord         _horizontalScrollerHeight
//   bool            _canGoUp
//   bool            _canRepeat
//   bool            _canGoDown
//   GNInt           _beatDivision
//   GNInt           _beatCount
//   GNInt           _timeSliceCount
//   GNFraction      _allStartBeat
//   float           _pitchOffset
//   bool            _isBlues
//   GNInt           _bluesRoot
//   bool            _considersBlues
//   bool            _reservesPitchRange
//   bool            _limitsHighestPitchIndex
//   bool            _limitsLowestPitchIndex
//   bool            _isQuarterAssignmentIrrelevant
//   bool            _isPitchAssignmentIrrelevant
//   bool            _calcsAlternateChords
//   bool            _isOutputSlot
//   bool            _isDefaultSlot
//   GNInt           _stereoItemCount
//   MDInspectorModeFlags _mode
//   double          _xDistanceResolutionForLinearApproximation
//   double          _yDistanceResolutionForLinearApproximation
//   bool            _didRequestCacheValidation
//   bool            _canChooseDirectory
//   bool            _canChooseFile
//   bool            _allowsMultipleSelection
//   ... +276 more


void FUN_01110970(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_00044470();
  *this_ptr = &g_025ca6a0;
  this_ptr[2] = &g_025caa90;
  this_ptr[3] = &g_025caac8;
  *(void*)((int64_t)this_ptr + 0x59) = 0;
  lVar2 = FUN_011104e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xc] = 0;
  lVar2 = FUN_011104e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01110d80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUBarSignatureMap");
  }
  this_ptr[0xd] = 0;
  lVar2 = FUN_011104e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01110e70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUBarSignatureMap");
  }
  this_ptr[0xe] = 0;
  lVar2 = FUN_011104e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01110f60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUComposition");
  }
  this_ptr[0xf] = 0;
  lVar2 = FUN_011104e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01111050();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUBarSignatureMapResultItem");
  }
  this_ptr[0x10] = 0;
  lVar2 = FUN_011104e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01111140();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUBarSignatureMapResultItem");
  }
  return;
}

