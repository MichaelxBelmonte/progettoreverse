// Function: FUN_008d782a
// Address: 008d782a
// Size: 902 bytes
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


int FUN_008d782a(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *arg1;
  uint64_t uVar5;
  int64_t this_ptr;
  int64_t lVar6;
  int64_t lVar7;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar6 = this_ptr + 0x30;
  lVar7 = this_ptr + 0x18;
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))(&local_36,local_48,param_3,param_4,lVar6,lVar7);
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    iVar1 = local_36 + -0xb;
    switch(iVar1) {
    case 0:
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008d7aa7;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(this_ptr + 0xc) = local_34;
      *(void*)(this_ptr + 0x49) = 1;
      break;
    case 1:
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008d7aa7;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(this_ptr + 0x10) = local_34;
      *(void*)(this_ptr + 0x4a) = 1;
      break;
    case 2:
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008d7aa7;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(this_ptr + 0x14) = local_34;
      *(void*)(this_ptr + 0x4b) = 1;
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
switchD_008d78c2_caseD_3:
      iVar3 = (**(code **)(*arg1 + 0x160))();
LAB_008d7aa7:
      iVar3 = iVar3 + iVar2;
      break;
    case 10:
      if (local_48[0] != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008d7aa7;
      }
      *(void*)(this_ptr + 0x20) = *(void*)(this_ptr + 0x18);
      iVar1 = (**(code **)(*arg1 + 0xf8))(iVar1,&local_34);
      uVar5 = (uint64_t)local_34;
      uVar4 = *(int64_t *)(this_ptr + 0x20) - *(int64_t *)(this_ptr + 0x18);
      if (uVar4 < uVar5) {
        FUN_0088d550();
      }
      else if (uVar5 < uVar4) {
        *(uint64_t *)(this_ptr + 0x20) = *(int64_t *)(this_ptr + 0x18) + uVar5;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar4 = 0;
        do {
          iVar2 = (**(code **)(*arg1 + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar4 = uVar4 + 1;
        } while (uVar4 < local_34);
      }
      iVar3 = (**(code **)(*arg1 + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(void*)(this_ptr + 0x4c) = 1;
      break;
    case 0xb:
      if (local_48[0] != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008d7aa7;
      }
      *(void*)(this_ptr + 0x38) = *(void*)(this_ptr + 0x30);
      iVar1 = (**(code **)(*arg1 + 0xf8))(iVar1,&local_34);
      uVar5 = (uint64_t)local_34;
      uVar4 = *(int64_t *)(this_ptr + 0x38) - *(int64_t *)(this_ptr + 0x30);
      if (uVar4 < uVar5) {
        FUN_0088d550();
      }
      else if (uVar5 < uVar4) {
        *(uint64_t *)(this_ptr + 0x38) = *(int64_t *)(this_ptr + 0x30) + uVar5;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar4 = 0;
        do {
          iVar2 = (**(code **)(*arg1 + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar4 = uVar4 + 1;
        } while (uVar4 < local_34);
      }
      iVar3 = (**(code **)(*arg1 + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(void*)(this_ptr + 0x4d) = 1;
      break;
    default:
      if (local_36 != 1) goto switchD_008d78c2_caseD_3;
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008d7aa7;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(this_ptr + 8) = local_34;
      *(void*)(this_ptr + 0x48) = 1;
    }
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

