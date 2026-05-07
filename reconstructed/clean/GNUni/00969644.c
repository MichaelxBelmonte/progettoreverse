// Function: FUN_00969644
// Address: 00969644
// Size: 1361 bytes
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


void FUN_00969644(uint64_t param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t lVar7;
  int unaff_ESI;
  int64_t lVar8;
  uint uVar9;
  uint *this_ptr;
  uint64_t uVar10;
  
  if (this_ptr != (uint *)0x0) {
    this_ptr[0x33] = 0;
    if ((param_2 == 1) || (0x80000000 < param_2)) {
      this_ptr[0x5a] = 6;
    }
    else {
      FUN_0096939d();
      uVar3 = *this_ptr;
      this_ptr[2] = 0;
      this_ptr[3] = 1;
      if (uVar3 == 0) {
        this_ptr[2] = 0x20;
        this_ptr[3] = 0;
        uVar4 = 0x20;
      }
      else {
        uVar4 = 0;
        if (uVar3 != 1) {
          uVar4 = 0;
          uVar6 = 1;
          uVar9 = uVar3;
          do {
            uVar4 = uVar4 + 1;
            uVar6 = uVar6 * 2;
            bVar1 = 3 < uVar9;
            uVar9 = uVar9 >> 1;
          } while (bVar1);
          this_ptr[2] = uVar4;
          this_ptr[3] = uVar6;
          if (uVar3 != uVar6) {
            this_ptr[0x5a] = 0x1a;
            return;
          }
        }
      }
      if (unaff_ESI < 1) {
        iVar2 = ~(unaff_ESI << 3) / (int)uVar4;
      }
      else {
        iVar2 = (unaff_ESI + -1) / (int)this_ptr[1];
      }
      uVar3 = iVar2 + 1;
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      uVar4 = uVar3 + 1;
      this_ptr[4] = uVar4;
      if (uVar3 < 9) {
        this_ptr[5] = 1;
        this_ptr[0x5a] = 0;
        this_ptr[0x32] = 1;
        this_ptr[0x1c8] = 0;
        this_ptr[0x1c9] = 0;
        uVar3 = uVar4 * 2 | 1;
        this_ptr[4] = uVar3;
        if ((int)uVar3 < 0) {
          this_ptr[0x5a] = 0xe;
          this_ptr[4] = uVar4;
        }
        else {
          FUN_009740e6(uVar4,0x5b4);
          uVar3 = (int)((this_ptr[4] - 1) - ((int)(this_ptr[4] - 1) >> 0x1f)) >> 1;
          this_ptr[4] = uVar3;
          if (this_ptr[0x5a] == 0) {
            uVar6 = (int)this_ptr + 0x16cU & 3;
            uVar4 = 4 - uVar6;
            if (uVar6 == 0) {
              uVar4 = 0;
            }
            uVar10 = (uint64_t)uVar4;
            lVar7 = (int64_t)this_ptr + uVar10 + 0x16c;
            *(uint64_t *)(lVar7 + 8) = (lVar7 - ((uint64_t)((int)lVar7 + 0x10) & 3)) + 0x14;
            *(int64_t *)(this_ptr + 0x36) = lVar7;
            lVar5 = (int64_t)(int)uVar3;
            lVar7 = (int64_t)this_ptr + (lVar5 * 8 + 0x28U | uVar10) + 0x16c;
            *(uint64_t *)(lVar7 + 8) = (lVar7 - ((uint64_t)((int)lVar7 + 0x10) & 3)) + 0x14;
            *(int64_t *)(this_ptr + 0x38) = lVar7;
            lVar7 = lVar5 + 1;
            lVar8 = lVar5 * 4 + 0x14;
            lVar5 = (int64_t)this_ptr + lVar8 * 3 + uVar10 + 0x16c;
            *(uint64_t *)(lVar5 + 8) = (lVar5 - ((uint64_t)((int)lVar5 + 0x10) & 3)) + 0x14;
            *(int64_t *)(this_ptr + 0x3a) = lVar5;
            lVar5 = (int64_t)this_ptr + (lVar7 * 0x10 + 0x40U | uVar10) + 0x16c;
            *(uint64_t *)(lVar5 + 8) = (lVar5 - ((uint64_t)((int)lVar5 + 0x10) & 3)) + 0x14;
            *(int64_t *)(this_ptr + 0x3c) = lVar5;
            lVar5 = (int64_t)this_ptr + lVar8 * 5 + uVar10 + 0x16c;
            *(uint64_t *)(lVar5 + 8) = (lVar5 - ((uint64_t)((int)lVar5 + 0x10) & 3)) + 0x14;
            *(int64_t *)(this_ptr + 0x3e) = lVar5;
            lVar5 = (int64_t)this_ptr + (lVar8 * 6 | uVar10) + 0x16c;
            *(uint64_t *)(lVar5 + 8) = (lVar5 - ((uint64_t)((int)lVar5 + 0x10) & 3)) + 0x14;
            *(int64_t *)(this_ptr + 0x40) = lVar5;
            lVar5 = (int64_t)this_ptr + (lVar7 * 0x20 + 0x80U | uVar10) + 0x16c;
            *(uint64_t *)(lVar5 + 8) = (lVar5 - ((uint64_t)((int)lVar5 + 0x10) & 3)) + 0x14;
            *(int64_t *)(this_ptr + 0x42) = lVar5;
            lVar5 = (int64_t)this_ptr + (lVar8 * 10 | uVar10) + 0x16c;
            *(uint64_t *)(lVar5 + 8) = (lVar5 - ((uint64_t)((int)lVar5 + 0x10) & 3)) + 0x14;
            *(int64_t *)(this_ptr + 0x44) = lVar5;
            lVar5 = (int64_t)this_ptr + (lVar8 * 0xc | uVar10) + 0x16c;
            *(uint64_t *)(lVar5 + 8) = (lVar5 - ((uint64_t)((int)lVar5 + 0x10) & 3)) + 0x14;
            *(int64_t *)(this_ptr + 0x46) = lVar5;
            lVar5 = (int64_t)this_ptr + lVar8 * 0xd + uVar10 + 0x16c;
            *(uint64_t *)(lVar5 + 8) = (lVar5 - ((uint64_t)((int)lVar5 + 0x10) & 3)) + 0x14;
            *(int64_t *)(this_ptr + 0x48) = lVar5;
            lVar5 = (int64_t)this_ptr + (lVar8 * 0xe | uVar10) + 0x16c;
            *(uint64_t *)(lVar5 + 8) = (lVar5 - ((uint64_t)((int)lVar5 + 0x10) & 3)) + 0x14;
            *(int64_t *)(this_ptr + 0x4a) = lVar5;
            lVar5 = (int64_t)this_ptr + lVar8 * 0xf + uVar10 + 0x16c;
            *(uint64_t *)(lVar5 + 8) = (lVar5 - ((uint64_t)((int)lVar5 + 0x10) & 3)) + 0x14;
            *(int64_t *)(this_ptr + 0x4c) = lVar5;
            lVar7 = (int64_t)this_ptr + (lVar7 * 0x40 + 0x100U | uVar10) + 0x16c;
            *(uint64_t *)(lVar7 + 8) = (lVar7 - ((uint64_t)((int)lVar7 + 0x10) & 3)) + 0x14;
            *(int64_t *)(this_ptr + 0x4e) = lVar7;
            lVar7 = (int64_t)this_ptr + lVar8 * 0x11 + uVar10 + 0x16c;
            *(uint64_t *)(lVar7 + 8) = (lVar7 - ((uint64_t)((int)lVar7 + 0x10) & 3)) + 0x14;
            *(int64_t *)(this_ptr + 0x50) = lVar7;
            lVar7 = (int64_t)this_ptr + (lVar8 * 0x12 | uVar10) + 0x16c;
            *(uint64_t *)(lVar7 + 8) = (lVar7 - ((uint64_t)((int)lVar7 + 0x10) & 3)) + 0x14;
            *(int64_t *)(this_ptr + 0x52) = lVar7;
            lVar7 = (int64_t)this_ptr + lVar8 * 0x13 + uVar10 + 0x16c;
            *(uint64_t *)(lVar7 + 8) = (lVar7 - ((uint64_t)((int)lVar7 + 0x10) & 3)) + 0x14;
            *(int64_t *)(this_ptr + 0x54) = lVar7;
            lVar7 = (int64_t)this_ptr + (lVar8 * 0x14 | uVar10) + 0x16c;
            *(uint64_t *)(lVar7 + 8) = (lVar7 - ((uint64_t)((int)lVar7 + 0x10) & 3)) + 0x14;
            *(int64_t *)(this_ptr + 0x2e) = lVar7;
            lVar7 = (int64_t)this_ptr + lVar8 * 0x15 + uVar10 + 0x16c;
            *(uint64_t *)(lVar7 + 8) = (lVar7 - ((uint64_t)((int)lVar7 + 0x10) & 3)) + 0x14;
            *(int64_t *)(this_ptr + 0x30) = lVar7;
            lVar7 = (int64_t)this_ptr + lVar8 * 0x17 + uVar10 + 0x16c;
            *(uint64_t *)(lVar7 + 8) = (lVar7 - ((uint64_t)((int)lVar7 + 0x10) & 3)) + 0x14;
            *(int64_t *)(this_ptr + 0x56) = lVar7;
            lVar7 = (int64_t)this_ptr + (lVar8 * 0x18 | uVar10) + 0x16c;
            *(uint64_t *)(lVar7 + 8) = (lVar7 - ((uint64_t)((int)lVar7 + 0x10) & 3)) + 0x14;
          }
          else {
            lVar7 = 0;
            this_ptr[0x30] = 0;
            this_ptr[0x31] = 0;
            this_ptr[0x2e] = 0;
            this_ptr[0x2f] = 0;
            ___bzero();
          }
          *(int64_t *)(this_ptr + 0x58) = lVar7;
        }
      }
      else {
        this_ptr[0x5a] = 0xe;
      }
    }
  }
  return;
}

