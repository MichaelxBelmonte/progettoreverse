// Function: FUN_0091713e
// Address: 0091713e
// Size: 1616 bytes
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


int FUN_0091713e(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  int local_3c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar6 = this_ptr + 0x14;
  lVar7 = this_ptr + 0x13;
  lVar8 = this_ptr + 0x12;
  lVar9 = this_ptr + 0x11;
  lVar10 = this_ptr + 0x10;
  lVar11 = this_ptr + 0xf;
  lVar12 = this_ptr + 0xe;
  lVar13 = this_ptr + 0xd;
  lVar14 = this_ptr + 0xc;
  lVar15 = this_ptr + 0xb;
  lVar16 = this_ptr + 10;
  lVar17 = this_ptr + 9;
  lVar18 = this_ptr + 8;
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (&local_36,&local_3c,param_3,param_4,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,
                       lVar12,lVar13,lVar14,lVar15,lVar16,lVar17,lVar18);
    iVar2 = iVar2 + iVar1;
    if (local_3c == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_3c != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x48) = 1;
      goto LAB_00917740;
    case 2:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x49) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 3:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x4a) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 4:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x4b) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 5:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x4c) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 6:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x4d) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 7:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x4e) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 10:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x4f) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xb:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x50) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x14:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x51) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x15:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x52) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x16:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x53) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x17:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x54) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x18:
      if (local_3c == 10) {
        iVar3 = (**(code **)(*arg1 + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x55) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x19:
      if (local_3c == 10) {
        iVar3 = (**(code **)(*arg1 + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x56) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1e:
      if (local_3c == 0xf) {
        uVar5 = FUN_0091c2ea();
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar5,&local_34);
        FUN_0088ed80();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar4 = 0;
          do {
            iVar2 = (**(code **)(*arg1 + 0x150))();
            iVar1 = iVar1 + iVar2;
            uVar4 = uVar4 + 1;
          } while (uVar4 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x57) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x28:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x58) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x29:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(this_ptr + 0x44) = local_34;
        *(void*)(this_ptr + 0x59) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_00917740:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

