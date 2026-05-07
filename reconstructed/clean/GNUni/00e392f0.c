// Function: FUN_00e392f0
// Address: 00e392f0
// Size: 780 bytes
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


uint64_t FUN_00e392f0(uint param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int iVar6;
  uint *arg1;
  uint uVar7;
  int64_t this_ptr;
  uint64_t uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  lVar1 = *(int64_t *)(this_ptr + 0x10);
  uVar3 = 0;
  if (lVar1 != 0) {
    uVar2 = *(uint *)(lVar1 + 0x18);
    uVar8 = (uint64_t)(int)uVar2;
    lVar1 = *(int64_t *)(lVar1 + 0x10);
    bVar10 = ((param_1 | uVar2) & 3) == 0;
    bVar11 = (param_2 & 3) == 0;
    uVar3 = (uint64_t)CONCAT31((int3)((param_1 | uVar2) >> 8),bVar11 && bVar10);
    if (*(char *)(this_ptr + 0x18) == '\0') {
      if (bVar11 && bVar10) {
        uVar9 = uVar2 + 3;
        if (-1 < (int)uVar2) {
          uVar9 = uVar2;
        }
        uVar2 = param_1 + 3;
        if (-1 < (int)param_1) {
          uVar2 = param_1;
        }
        if (3 < (int)param_1) {
          uVar9 = (int)uVar9 >> 2;
          iVar6 = (int)uVar2 >> 2;
          param_2 = param_2 >> 2;
          do {
            if ((param_2 | (int64_t)(int)uVar9) >> 0x20 == 0) {
              uVar8 = (param_2 & 0xffffffff) % (uint64_t)uVar9;
            }
            else {
              uVar8 = param_2 % (uint64_t)(int64_t)(int)uVar9;
            }
            uVar7 = (uint)param_2 & 0xff;
            uVar2 = uVar7 << 0x10 | uVar7 << 0x18;
            uVar3 = (uint64_t)uVar2;
            *arg1 = *arg1 ^ (uVar7 << 8 | uVar2 | uVar7) ^ *(uint *)(lVar1 + uVar8 * 4);
            param_2 = param_2 + 1;
            arg1 = arg1 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      else if (0 < (int)param_1) {
        if (param_1 != 1) {
          iVar6 = -(param_1 & 0xfffffffe);
          do {
            uVar4 = param_2 + 1;
            if ((param_2 | uVar8) >> 0x20 == 0) {
              uVar3 = (param_2 & 0xffffffff) % (uint64_t)uVar2;
            }
            else {
              uVar3 = param_2 % uVar8;
            }
            *(byte *)arg1 = (byte)*arg1 ^ (byte)(param_2 >> 2) ^ *(byte *)(lVar1 + uVar3);
            if ((uVar4 | uVar8) >> 0x20 == 0) {
              uVar3 = (uVar4 & 0xffffffff) / (uint64_t)uVar2;
              uVar5 = (uVar4 & 0xffffffff) % (uint64_t)uVar2;
            }
            else {
              uVar3 = uVar4 / uVar8;
              uVar5 = uVar4 % uVar8;
            }
            *(byte *)((int64_t)arg1 + 1) =
                 *(byte *)((int64_t)arg1 + 1) ^ (byte)(uVar4 >> 2) ^ *(byte *)(lVar1 + uVar5);
            param_2 = param_2 + 2;
            arg1 = (uint *)((int64_t)arg1 + 2);
            iVar6 = iVar6 + 2;
          } while (iVar6 != 0);
        }
        if ((param_1 & 1) != 0) {
          if ((param_2 | uVar8) >> 0x20 == 0) {
            uVar3 = (param_2 & 0xffffffff) / (uint64_t)uVar2;
            uVar8 = (param_2 & 0xffffffff) % (uint64_t)uVar2;
          }
          else {
            uVar3 = param_2 / uVar8;
            uVar8 = param_2 % uVar8;
          }
          *(byte *)arg1 = (byte)*arg1 ^ (byte)(param_2 >> 2) ^ *(byte *)(lVar1 + uVar8);
          return uVar3;
        }
      }
    }
    else if (bVar11 && bVar10) {
      uVar9 = uVar2 + 3;
      if (-1 < (int)uVar2) {
        uVar9 = uVar2;
      }
      uVar2 = param_1 + 3;
      if (-1 < (int)param_1) {
        uVar2 = param_1;
      }
      if (3 < (int)param_1) {
        uVar9 = (int)uVar9 >> 2;
        uVar8 = (uint64_t)(int)uVar9;
        param_2 = param_2 >> 2;
        if ((param_1 & 0xfffffffc) != 4) {
          iVar6 = -((int)uVar2 >> 2 & 0xfffffffeU);
          do {
            uVar3 = param_2 + 1;
            if ((param_2 | uVar8) >> 0x20 == 0) {
              uVar4 = (param_2 & 0xffffffff) % (uint64_t)uVar9;
            }
            else {
              uVar4 = param_2 % uVar8;
            }
            *arg1 = *arg1 ^ *(uint *)(lVar1 + uVar4 * 4);
            if ((uVar3 | uVar8) >> 0x20 == 0) {
              uVar3 = (uVar3 & 0xffffffff) % (uint64_t)uVar9;
            }
            else {
              uVar3 = uVar3 % uVar8;
            }
            uVar7 = *(uint *)(lVar1 + uVar3 * 4);
            uVar3 = (uint64_t)uVar7;
            arg1[1] = arg1[1] ^ uVar7;
            param_2 = param_2 + 2;
            arg1 = arg1 + 2;
            iVar6 = iVar6 + 2;
          } while (iVar6 != 0);
        }
        if (((int)uVar2 >> 2 & 1U) != 0) {
          if ((param_2 | uVar8) >> 0x20 == 0) {
            param_2 = (param_2 & 0xffffffff) % (uint64_t)uVar9;
          }
          else {
            param_2 = param_2 % uVar8;
          }
          uVar2 = *(uint *)(lVar1 + param_2 * 4);
          *arg1 = *arg1 ^ uVar2;
          return (uint64_t)uVar2;
        }
      }
    }
    else if (0 < (int)param_1) {
      if (param_1 != 1) {
        iVar6 = -(param_1 & 0xfffffffe);
        do {
          uVar4 = param_2 + 1;
          if ((param_2 | uVar8) >> 0x20 == 0) {
            uVar3 = (param_2 & 0xffffffff) % (uint64_t)uVar2;
          }
          else {
            uVar3 = param_2 % uVar8;
          }
          *(byte *)arg1 = (byte)*arg1 ^ *(byte *)(lVar1 + uVar3);
          if ((uVar4 | uVar8) >> 0x20 == 0) {
            uVar4 = (uVar4 & 0xffffffff) % (uint64_t)uVar2;
          }
          else {
            uVar4 = uVar4 % uVar8;
          }
          uVar3 = (uint64_t)*(byte *)(lVar1 + uVar4);
          *(byte *)((int64_t)arg1 + 1) =
               *(byte *)((int64_t)arg1 + 1) ^ *(byte *)(lVar1 + uVar4);
          param_2 = param_2 + 2;
          arg1 = (uint *)((int64_t)arg1 + 2);
          iVar6 = iVar6 + 2;
        } while (iVar6 != 0);
      }
      if ((param_1 & 1) != 0) {
        if ((uVar8 | param_2) >> 0x20 == 0) {
          uVar3 = (param_2 & 0xffffffff) / (uint64_t)uVar2;
          param_2 = (param_2 & 0xffffffff) % (uint64_t)uVar2;
        }
        else {
          uVar3 = param_2 / uVar8;
          param_2 = param_2 % uVar8;
        }
        uVar3 = CONCAT71((int7)(uVar3 >> 8),*(byte *)(lVar1 + param_2));
        *(byte *)arg1 = (byte)*arg1 ^ *(byte *)(lVar1 + param_2);
      }
    }
  }
  return uVar3;
}

