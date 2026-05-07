// Function: FUN_01256a50
// Address: 01256a50
// Size: 613 bytes
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


void FUN_01256a50(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t this_ptr;
  uint64_t uVar4;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  uVar4 = FUN_00d6f370();
  lVar2 = g_027beb70;
  if (g_027beb70 != 0) {
    uVar4 = FUN_00d50b00();
  }
  g_028ac360 = FUN_00d70f90(uVar4,0);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (g_028ac360 == '\0') {
    if (*(int64_t *)(this_ptr + 0xf8) == 0) {
      return;
    }
    FUN_01256e40();
    return;
  }
  if (*(int64_t *)(this_ptr + 0xf8) != 0) {
    return;
  }
  *(void*)(this_ptr + 0x100) = 0;
  lVar2 = g_027beb68;
  if (g_027beb68 != 0) {
    FUN_00d50b00();
  }
  FUN_00083ea0(2,&stack0xffffffffffffff68);
  FUN_0036bfe0();
  local_28 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_28 = '\x01';
  local_30 = local_50;
  FUN_00da62d0(g_02391038,&local_30);
  lVar1 = *(int64_t *)(this_ptr + 0xf8);
  lVar3 = lVar1;
  if (lVar1 == local_40) goto LAB_01256c17;
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar3 = 0;
      goto LAB_01256bcc;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0xf8);
    *(int64_t *)(this_ptr + 0xf8) = local_40;
  }
  else {
    local_38 = '\0';
LAB_01256bcc:
    *(int64_t *)(this_ptr + 0xf8) = lVar3;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar3 = local_40;
  }
LAB_01256c17:
  if ((local_38 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}

