// Function: FUN_008eab5e
// Address: 008eab5e
// Size: 1150 bytes
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


int FUN_008eab5e(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint64_t uVar5;
  int64_t *arg1;
  uint64_t uVar6;
  int64_t this_ptr;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar7 = this_ptr + 0x4b;
  lVar8 = this_ptr + 0x4a;
  lVar9 = this_ptr + 0x49;
  lVar10 = this_ptr + 0x48;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,local_48,param_3,param_4,lVar7,lVar8,lVar9,lVar10,uVar11,uVar12,uVar13
                      );
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar11 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    iVar1 = local_36 + -1;
    switch(iVar1) {
    case 0:
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008eaed5;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x4c) = 1;
      break;
    case 1:
      if (local_48[0] != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008eaed5;
      }
      *(void*)(this_ptr + 0x18) = *(void*)(this_ptr + 0x10);
      iVar1 = (**(code **)(*arg1 + 0xf8))(iVar1,&local_34);
      uVar6 = (uint64_t)local_34;
      uVar5 = *(int64_t *)(this_ptr + 0x18) - *(int64_t *)(this_ptr + 0x10);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(uint64_t *)(this_ptr + 0x18) = *(int64_t *)(this_ptr + 0x10) + uVar6;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*arg1 + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*arg1 + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(void*)(this_ptr + 0x4d) = 1;
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
switchD_008eac47_caseD_2:
      iVar3 = (**(code **)(*arg1 + 0x160))();
LAB_008eaed5:
      iVar3 = iVar3 + iVar2;
      break;
    case 9:
      if (local_48[0] != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008eaed5;
      }
      *(void*)(this_ptr + 0x30) = *(void*)(this_ptr + 0x28);
      iVar1 = (**(code **)(*arg1 + 0xf8))(iVar1,&local_34);
      uVar6 = (uint64_t)local_34;
      uVar5 = *(int64_t *)(this_ptr + 0x30) - *(int64_t *)(this_ptr + 0x28);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(uint64_t *)(this_ptr + 0x30) = *(int64_t *)(this_ptr + 0x28) + uVar6;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*arg1 + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*arg1 + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(void*)(this_ptr + 0x4e) = 1;
      break;
    case 10:
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008eaed5;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x4f) = 1;
      break;
    case 0xb:
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008eaed5;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x50) = 1;
      break;
    default:
      switch((int)local_36) {
      case 0x14:
        if (local_48[0] != 2) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008eaed5;
        }
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x51) = 1;
        break;
      case 0x15:
        if (local_48[0] != 2) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008eaed5;
        }
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x52) = 1;
        break;
      case 0x16:
        if (local_48[0] != 2) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008eaed5;
        }
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x53) = 1;
        break;
      case 0x17:
        if (local_48[0] != 2) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008eaed5;
        }
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x54) = 1;
        break;
      default:
        goto switchD_008eac47_caseD_2;
      }
    }
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

