// Function: FUN_008f1ff4
// Address: 008f1ff4
// Size: 712 bytes
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


int FUN_008f1ff4(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int local_38;
  short local_32;
  
  FUN_0088d1d0();
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar6 = this_ptr + 0x3c;
  lVar7 = this_ptr + 0x38;
  lVar8 = this_ptr + 0x20;
  lVar9 = this_ptr + 8;
  while( true ) {
    psVar5 = &local_32;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar5,&local_38,param_3,param_4,lVar6,lVar7,lVar8,lVar9,uVar10,uVar11,uVar12
                      );
    if (local_38 == 0) break;
    switch(local_32) {
    case 1:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0x50) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 2:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0x51) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 10:
      if (local_38 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(void*)(this_ptr + 0x52) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0xb:
      if (local_38 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(void*)(this_ptr + 0x53) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0xc:
      if (local_38 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(void*)(this_ptr + 0x54) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0xd:
      if (local_38 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(void*)(this_ptr + 0x55) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0xe:
      if (local_38 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(void*)(this_ptr + 0x56) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0xf:
      if (local_38 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(void*)(this_ptr + 0x57) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    iVar4 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar3 + iVar2 + iVar1 + iVar4;
  }
  iVar3 = (**(code **)(*arg1 + 0xd0))();
  if ((uVar10 & 1) != 0) {
    operator_delete(psVar5);
  }
  *(int *)(arg1 + 3) = (int)arg1[3] + -1;
  return iVar3 + iVar2 + iVar1;
}

