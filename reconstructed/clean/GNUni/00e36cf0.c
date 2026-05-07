// Function: FUN_00e36cf0
// Address: 00e36cf0
// Size: 738 bytes
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


void FUN_00e36cf0(void)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  void*puVar4;
  int64_t this_ptr;
  int64_t local_c8;
  char local_c0;
  int64_t local_70;
  char local_68;
  void*local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x368))();
  iVar2 = FUN_00e31390();
  iVar3 = *(int *)(this_ptr + 0x14);
  if ((*(int *)(*(int64_t *)(this_ptr + 0x40) + 0xc) + iVar3 < iVar2) &&
     ((*(int *)(*(int64_t *)(this_ptr + 0x20) + 0xc) + iVar3) -
      *(int *)(*(int64_t *)(this_ptr + 0x48) + 0xc) < *(int *)(this_ptr + 0x10))) {
    *(int *)(this_ptr + 0x14) = iVar3 + 1;
    (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x378))();
    iVar3 = FUN_00e31390();
    if (iVar3 == 0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02581c90;
      (*g_02581ca8)();
      local_40 = g_027e7c60;
      local_58 = '\x01';
      local_38 = 0;
      local_60 = puVar4;
      if (g_027e7c60 != 0) {
        FUN_00d50b00();
      }
      lVar1 = g_027864f8;
      local_38 = '\x01';
      local_28 = 0;
      if (g_027864f8 != 0) {
        FUN_00d50b00();
      }
      local_30 = lVar1;
      local_28 = '\x01';
      FUN_00e37180(&local_60,&local_40,&local_30);
      FUN_000b4da0();
      lVar1 = local_50;
      if (local_48 == '\0') {
        if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_002d10d0();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_70 = lVar1;
      local_68 = '\0';
      FUN_00da62d0(g_02391038,&local_70);
      if ((local_c0 == '\0') && (local_c8 != 0)) {
        FUN_00d50b00();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x368))();
      FUN_00d21140();
      *(int *)(this_ptr + 0x14) = *(int *)(this_ptr + 0x14) + -1;
      (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x378))();
      FUN_00dee620();
      if (local_c8 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    return;
  }
                                          (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x378))();
  return;
}

