// Function: FUN_017936d0
// Address: 017936d0
// Size: 661 bytes
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


void FUN_017936d0(uint64_t param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_40;
  char local_38;
  
  cVar2 = FUN_01716a10();
  if (cVar2 == '\0') {
    cVar2 = FUN_017176e0();
    if (cVar2 == '\0') {
      if ((~*(uint64_t *)(*arg1 + 0x18) & 0xf0000000000) == 0) {
        FUN_01715480();
        FUN_017939b0();
        if (local_40 != 0) {
          bVar1 = true;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          goto LAB_017938e3;
        }
      }
      else {
        FUN_01715480();
        FUN_017939b0();
        if (local_40 != 0) {
          bVar1 = true;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          goto LAB_017938e3;
        }
      }
    }
    else {
      FUN_01715480();
      FUN_017939b0();
      if (local_40 != 0) {
        bVar1 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_017938e3;
      }
    }
  }
  else {
    cVar2 = FUN_01717530();
    if (cVar2 == '\0') {
      if ((~*(uint64_t *)(*arg1 + 0x18) & 0xf00000000000) == 0) {
        FUN_01715480();
        FUN_017939b0();
        if (local_40 != 0) {
          bVar1 = true;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          goto LAB_017938e3;
        }
      }
      else if ((~*(uint64_t *)(*arg1 + 0x18) & 0xf000000000) == 0) {
        FUN_01715480();
        FUN_017939b0();
        if (local_40 != 0) {
          bVar1 = true;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          goto LAB_017938e3;
        }
      }
      else {
        FUN_01715480();
        FUN_017939b0();
        if (local_40 != 0) {
          bVar1 = true;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          goto LAB_017938e3;
        }
      }
    }
    else {
      FUN_01715480();
      FUN_017939b0();
      if (local_40 != 0) {
        bVar1 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_017938e3;
      }
    }
  }
  local_40 = 0;
  bVar1 = false;
LAB_017938e3:
  if (param_2 == 1) {
    iVar3 = FUN_01717260();
    if (iVar3 == 0xb) {
      iVar3 = FUN_01717260();
      if (iVar3 != 0xb) {
        FUN_01715d40();
        FUN_01715d40();
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar1) && (local_40 != 0)) {
    FUN_00d50b00();
  }
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  return;
}

