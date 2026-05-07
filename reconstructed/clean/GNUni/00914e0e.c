// Function: FUN_00914e0e
// Address: 00914e0e
// Size: 765 bytes
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


int FUN_00914e0e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *arg1;
  uint64_t uVar7;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar8;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*arg1 + 200))();
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))(&local_36,local_48);
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_36 < 0xc) {
      if (local_36 == 1) {
        if (local_48[0] == 0xf) {
          *(void*)(this_ptr + 0x10) = *(void*)(this_ptr + 8);
          iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
          uVar7 = (uint64_t)local_34;
          uVar4 = *(int64_t *)(this_ptr + 0x10) - *(int64_t *)(this_ptr + 8);
          if (uVar4 < uVar7) {
            FUN_0088d550();
          }
          else if (uVar7 < uVar4) {
            *(uint64_t *)(this_ptr + 0x10) = *(int64_t *)(this_ptr + 8) + uVar7;
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
          *(void*)(this_ptr + 0x40) = 1;
          goto LAB_00915068;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else if (local_36 == 0xb) {
        if (local_48[0] == 8) {
          iVar3 = (**(code **)(*arg1 + 0x138))();
          iVar3 = iVar3 + iVar2;
          *(uint *)(this_ptr + 0x20) = local_34;
          *(void*)(this_ptr + 0x41) = 1;
          goto LAB_00915068;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else {
LAB_00914f9b:
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
LAB_00915062:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_36 == 0xc) {
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_00915062;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(this_ptr + 0x24) = local_34;
      *(void*)(this_ptr + 0x42) = 1;
    }
    else {
      if (local_36 != 0x15) goto LAB_00914f9b;
      if (local_48[0] != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_00915062;
      }
      lVar6 = *(int64_t *)(this_ptr + 0x28);
      uVar8 = extraout_XMM0_Da;
      for (lVar5 = *(int64_t *)(this_ptr + 0x30); lVar5 != lVar6; lVar5 = lVar5 + -0x448) {
        uVar8 = (***(void**)(lVar5 + -0x448))();
      }
      *(int64_t *)(this_ptr + 0x30) = lVar6;
      iVar1 = (**(code **)(*arg1 + 0xf8))(uVar8,&local_34);
      FUN_0091513e();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        lVar6 = 0;
        uVar4 = 0;
        do {
          iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x28) + lVar6) + 0x10))();
          iVar1 = iVar1 + iVar2;
          uVar4 = uVar4 + 1;
          lVar6 = lVar6 + 0x448;
        } while (uVar4 < local_34);
      }
      iVar3 = (**(code **)(*arg1 + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(void*)(this_ptr + 0x43) = 1;
    }
LAB_00915068:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

