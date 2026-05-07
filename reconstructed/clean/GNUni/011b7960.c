// Function: FUN_011b7960
// Address: 011b7960
// Size: 718 bytes
// Class: GNUni
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


void FUN_011b7960(void)

{
  code *pcVar1;
  int iVar2;
  void*puVar3;
  void*this_ptr;
  
  FUN_00d4ff40();
  *(void*)(this_ptr + 7) = 0;
  *this_ptr = &g_0260a060;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  this_ptr[10] = 0;
  this_ptr[0xb] = 0;
  if (1 < g_02802630) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    this_ptr[0xb] = puVar3;
  }
  iVar2 = g_02802630;
  this_ptr[0xe] = 0;
  this_ptr[0xf] = 0;
  this_ptr[0xc] = 0;
  this_ptr[0xd] = 0;
  if (iVar2 < 2) {
    this_ptr[0x10] = 0;
    this_ptr[0x11] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[0xf] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x10] = 0;
    if (iVar2 < 2) {
      this_ptr[0x11] = 0;
      this_ptr[0x12] = 0;
      goto LAB_011b7b56;
    }
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*pcVar1)();
    this_ptr[0x10] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x11] = 0;
    if (1 < iVar2) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x11] = puVar3;
      iVar2 = g_02802630;
      this_ptr[0x12] = 0;
      if (1 < iVar2) {
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &g_02572358;
        (*pcVar1)();
        this_ptr[0x12] = puVar3;
        iVar2 = g_02802630;
      }
      goto LAB_011b7b56;
    }
  }
  this_ptr[0x12] = 0;
LAB_011b7b56:
  *(void*)(this_ptr + 0x13) = 0;
  this_ptr[0x14] = 0;
  this_ptr[0x15] = 0;
  this_ptr[0x16] = 0;
  this_ptr[0x17] = 0;
  if (iVar2 < 2) {
    *(void*)(this_ptr + 0x18) = 0;
    this_ptr[0x19] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    this_ptr[0x17] = puVar3;
    iVar2 = g_02802630;
    *(void*)(this_ptr + 0x18) = 0;
    this_ptr[0x19] = 0;
    if (1 < iVar2) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*g_02572370)();
      this_ptr[0x19] = puVar3;
    }
  }
  this_ptr[0x1a] = 0;
  *(void*)(this_ptr + 0x1b) = 0;
  return;
}

