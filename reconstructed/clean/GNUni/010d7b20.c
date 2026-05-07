// Function: FUN_010d7b20
// Address: 010d7b20
// Size: 551 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "MUTrack"
//   "MUAudioIOSlot"
//   "_generator"
//   "MUMidiIOSlot"
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


void FUN_010d7b20(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  uint32_t uVar4;
  
  lVar2 = FUN_0114b5b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_010dd560();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_00d4ff80();
    lVar2 = FUN_0015ef90();
    if (*(char *)(lVar2 + 0xbb) == '\0') {
      FUN_010f6740();
      iVar1 = FUN_00e7ddf0();
      pcVar3 = "_generator";
      if (iVar1 == 0) {
        pcVar3 = (char *)0x0;
      }
      FUN_00e879c0(pcVar3,"MUTrack");
    }
    lVar2 = FUN_0114b5b0();
    if (*(char *)(lVar2 + 0xbb) == '\0') {
      FUN_0114b7f0();
      iVar1 = FUN_00e7ddf0();
      pcVar3 = "GNUni";
      if (iVar1 == 0) {
        pcVar3 = (char *)0x0;
      }
      FUN_00e879c0(pcVar3,"MUAudioIOSlot");
    }
    lVar2 = FUN_0114b5b0();
    if (*(char *)(lVar2 + 0xbb) == '\0') {
      FUN_0114b8e0();
      iVar1 = FUN_00e7ddf0();
      pcVar3 = "GNUni";
      if (iVar1 == 0) {
        pcVar3 = (char *)0x0;
      }
      FUN_00e879c0(pcVar3,"MUMidiIOSlot");
    }
    FUN_00d50c00();
    uVar4 = FUN_00e87770();
    FUN_00e87920(uVar4,0);
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}

