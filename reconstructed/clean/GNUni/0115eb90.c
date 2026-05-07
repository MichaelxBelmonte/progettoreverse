// Function: FUN_0115eb90
// Address: 0115eb90
// Size: 515 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "MULoop"
//   "_project"
//   "MULoopUser"
//   "MULoopMusicianContract"
//   "MULoopLibrary"
//   "_projects"
//   "MULoopProducerContract"
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


void FUN_0115eb90(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_01150e50();
  *this_ptr = &g_026168f0;
  FUN_0115eea0();
  this_ptr[9] = 0;
  lVar2 = FUN_0115e7d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0115ef80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_projects";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopUser");
  }
  this_ptr[10] = 0;
  lVar2 = FUN_0115e7d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0115f070();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_project";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  puVar4 = this_ptr + 0xb;
  this_ptr[0xb] = 0;
  lVar2 = FUN_0115e7d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0115f160();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_project";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopProducerContract",param_3,param_4,puVar4);
  }
  this_ptr[0xc] = 0;
  lVar2 = FUN_0115e7d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0115f250();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_project";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopMusicianContract");
  }
  this_ptr[0xd] = 0;
  lVar2 = FUN_0115e7d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0115f340();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_projects";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopLibrary");
  }
  return;
}

