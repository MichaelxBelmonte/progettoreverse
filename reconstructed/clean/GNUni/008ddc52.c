// Function: FUN_008ddc52
// Address: 008ddc52
// Size: 875 bytes
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


int FUN_008ddc52(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int64_t lVar5;
  void *pvVar6;
  uint64_t uVar7;
  int64_t *arg1;
  void *pvVar8;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint8_t local_bc [4];
  uint8_t local_b8 [8];
  int64_t local_b0;
  int64_t local_a8;
  int local_74;
  int local_70;
  uint local_6c;
  uint64_t local_68 [4];
  uint local_44;
  uint64_t *local_40;
  short local_32;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*arg1 + 200))();
  local_b0 = this_ptr + 0x30;
  local_a8 = this_ptr + 0x10;
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))(&local_32,&local_74);
    iVar2 = iVar2 + iVar1;
    if (local_74 == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_32) {
    case 1:
      if (local_74 != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 8) = (uint32_t)local_68[0];
      *(void*)(this_ptr + 0x40) = 1;
      goto LAB_008ddf6c;
    case 2:
      if (local_74 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xc) = (uint32_t)local_68[0];
        *(void*)(this_ptr + 0x41) = 1;
        goto LAB_008ddf6c;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 3:
      if (local_74 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x42) = 1;
        goto LAB_008ddf6c;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 4:
      if (local_74 == 0xd) {
        FUN_0088f668();
        *(void*)(this_ptr + 0x38) = 0;
        *(int64_t *)(this_ptr + 0x28) = local_b0;
        *(void*)(this_ptr + 0x30) = 0;
        iVar1 = (**(code **)(*arg1 + 0xe8))(&local_44,local_bc);
        iVar1 = iVar1 + iVar2;
        if (local_44 != 0) {
          uVar4 = 0;
          do {
            local_68[0] = 0;
            local_68[1] = 0;
            local_68[2] = 0;
            local_70 = iVar1;
            local_6c = uVar4;
            iVar2 = (**(code **)(*arg1 + 0x150))();
            local_40 = local_68;
            lVar5 = FUN_0088fbf8(&local_40,&g_023bc25d,local_b8);
            *(void*)(lVar5 + 0x40) = *(void*)(lVar5 + 0x38);
            iVar3 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_40);
            iVar1 = local_70;
            pvVar8 = (void *)((uint64_t)local_40 & 0xffffffff);
            pvVar6 = (void *)(*(int64_t *)(lVar5 + 0x40) - *(int64_t *)(lVar5 + 0x38));
            if (pvVar6 < pvVar8) {
              FUN_0088d550();
            }
            else if (pvVar8 < pvVar6) {
              *(int64_t *)(lVar5 + 0x40) = *(int64_t *)(lVar5 + 0x38) + (int64_t)pvVar8;
            }
            iVar3 = iVar2 + iVar1 + iVar3;
            if ((int)local_40 != 0) {
              uVar7 = 0;
              do {
                iVar1 = (**(code **)(*arg1 + 0x128))();
                iVar3 = iVar3 + iVar1;
                uVar7 = uVar7 + 1;
              } while (uVar7 < ((uint64_t)local_40 & 0xffffffff));
            }
            iVar1 = (**(code **)(*arg1 + 0x100))();
            if ((local_68[0] & 1) != 0) {
              operator_delete(pvVar6);
            }
            iVar1 = iVar1 + iVar3;
            uVar4 = local_6c + 1;
          } while (uVar4 < local_44);
        }
        iVar3 = (**(code **)(*arg1 + 0xf0))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x43) = 1;
        goto LAB_008ddf6c;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008ddf6c:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

