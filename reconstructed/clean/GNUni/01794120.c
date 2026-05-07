// Function: FUN_01794120
// Address: 01794120
// Size: 651 bytes
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


uint64_t FUN_01794120(int64_t *param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  void*arg1;
  int64_t *this_ptr;
  bool bVar7;
  bool bVar8;
  uint64_t local_68;
  uint8_t local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t local_40;
  char local_38;
  
  if (*param_1 == 0) {
    local_40 = *this_ptr;
    local_38 = '\0';
    local_68 = *arg1;
    local_60 = 0;
    FUN_017921e0(param_2,&local_68,0);
    lVar1 = *param_1;
    if (lVar1 == local_58) {
      if (((char)param_1[1] == '\0') && (local_58 != 0)) {
        local_48 = param_1 + 1;
        if (local_50 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_017941f2;
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = param_1 + 1;
      lVar2 = param_1[1];
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        *param_1 = local_58;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *param_1 = local_58;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_017941f2:
      *(void*)local_48 = 1;
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  iVar5 = FUN_01717260();
  if ((iVar5 != 7) && (iVar5 != -1)) {
    return 0xffffffff;
  }
  cVar3 = FUN_01716be0();
  cVar4 = FUN_01716c00();
  if (((cVar3 == '\0') && (cVar4 == '\0')) && (*param_1 != 0)) {
    FUN_01715480();
    cVar4 = FUN_01716980();
    if (cVar4 == '\0') {
      FUN_01715480();
      cVar4 = FUN_01716980();
      goto joined_r0x01794393;
    }
    cVar4 = '\0';
  }
  else if (cVar3 == '\0') goto joined_r0x01794393;
  uVar6 = ~*(uint64_t *)(*this_ptr + 0x18);
  bVar7 = (uVar6 & 0xf00000000000) != 0;
  bVar8 = (uVar6 & 0xf0000000000) != 0;
  if ((uVar6 & 0xff0000000000) == 0) {
    if (*param_1 == 0) goto joined_r0x01794393;
    FUN_01715480();
    cVar3 = FUN_01716980();
    if (cVar3 == '\0') {
      FUN_01715480();
      FUN_01716980();
      goto joined_r0x01794393;
    }
    bVar7 = true;
    bVar8 = false;
  }
  if ((!bVar8) && (bVar7)) {
    if (*param_1 == 0) {
      return 6;
    }
    FUN_01715480();
    cVar3 = FUN_01716980();
    if (cVar3 != '\0') {
      return 6;
    }
  }
joined_r0x01794393:
  if (cVar4 != '\0') {
    if (*param_1 == 0) {
      return 1;
    }
    FUN_01715480();
    cVar4 = FUN_01716980();
    if (cVar4 != '\0') {
      return 1;
    }
  }
  return 0xffffffff;
}

