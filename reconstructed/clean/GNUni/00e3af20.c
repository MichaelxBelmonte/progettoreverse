// Function: FUN_00e3af20
// Address: 00e3af20
// Size: 1377 bytes
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


void FUN_00e3af20(uint64_t param_1,uint param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  float *pfVar27;
  uint uVar28;
  int64_t lVar29;
  float *pfVar30;
  int64_t lVar31;
  float *arg1;
  float *this_ptr;
  uint64_t uVar32;
  uint uVar33;
  uint64_t uVar34;
  uint uVar35;
  uint64_t uVar36;
  uint uVar37;
  
  uVar26 = (uint)arg1;
  if (((uint64_t)arg1 & 1) == 0 && ((uint64_t)this_ptr & 2) == 0) {
    uVar35 = (uint)this_ptr & 0xf;
    if (((uint64_t)this_ptr & 0xf) == 0) goto LAB_00e3b1d2;
    uVar37 = 4 - (uVar35 >> 2);
    if ((int)param_2 < (int)uVar37) {
      uVar37 = param_2;
    }
    param_2 = param_2 - uVar37;
    if (uVar37 != 0) {
      if ((6 < uVar37 - 1) &&
         ((uVar32 = (uint64_t)(uVar37 - 1) + 1, arg1 + uVar32 <= this_ptr ||
          (this_ptr + uVar32 <= arg1)))) {
        uVar34 = uVar32 & 0xfffffffffffffff8;
        uVar36 = (uVar34 - 8 >> 3) + 1;
        if (uVar34 - 8 == 0) {
          lVar29 = 0;
LAB_00e3b325:
          pfVar27 = arg1 + lVar29;
          fVar4 = pfVar27[1];
          fVar5 = pfVar27[2];
          fVar6 = pfVar27[3];
          pfVar30 = arg1 + lVar29 + 4;
          fVar7 = *pfVar30;
          fVar8 = pfVar30[1];
          fVar9 = pfVar30[2];
          fVar10 = pfVar30[3];
          pfVar30 = this_ptr + lVar29;
          fVar11 = pfVar30[1];
          fVar12 = pfVar30[2];
          fVar13 = pfVar30[3];
          pfVar1 = this_ptr + lVar29 + 4;
          fVar14 = *pfVar1;
          fVar15 = pfVar1[1];
          fVar16 = pfVar1[2];
          fVar17 = pfVar1[3];
          pfVar1 = this_ptr + lVar29;
          *pfVar1 = *pfVar30 * *pfVar27;
          pfVar1[1] = fVar11 * fVar4;
          pfVar1[2] = fVar12 * fVar5;
          pfVar1[3] = fVar13 * fVar6;
          pfVar27 = this_ptr + lVar29 + 4;
          *pfVar27 = fVar14 * fVar7;
          pfVar27[1] = fVar15 * fVar8;
          pfVar27[2] = fVar16 * fVar9;
          pfVar27[3] = fVar17 * fVar10;
        }
        else {
          lVar31 = -(uVar36 & 0xfffffffffffffffe);
          lVar29 = 0;
          do {
            pfVar27 = arg1 + lVar29;
            fVar4 = pfVar27[1];
            fVar5 = pfVar27[2];
            fVar6 = pfVar27[3];
            pfVar30 = arg1 + lVar29 + 4;
            fVar7 = *pfVar30;
            fVar8 = pfVar30[1];
            fVar9 = pfVar30[2];
            fVar10 = pfVar30[3];
            pfVar30 = this_ptr + lVar29;
            fVar11 = pfVar30[1];
            fVar12 = pfVar30[2];
            fVar13 = pfVar30[3];
            pfVar1 = this_ptr + lVar29 + 4;
            fVar14 = *pfVar1;
            fVar15 = pfVar1[1];
            fVar16 = pfVar1[2];
            fVar17 = pfVar1[3];
            pfVar1 = this_ptr + lVar29 + 8;
            fVar18 = *pfVar1;
            fVar19 = pfVar1[1];
            fVar20 = pfVar1[2];
            fVar21 = pfVar1[3];
            pfVar1 = this_ptr + lVar29 + 0xc;
            fVar22 = *pfVar1;
            fVar23 = pfVar1[1];
            fVar24 = pfVar1[2];
            fVar25 = pfVar1[3];
            pfVar1 = this_ptr + lVar29;
            *pfVar1 = *pfVar30 * *pfVar27;
            pfVar1[1] = fVar11 * fVar4;
            pfVar1[2] = fVar12 * fVar5;
            pfVar1[3] = fVar13 * fVar6;
            pfVar27 = this_ptr + lVar29 + 4;
            *pfVar27 = fVar14 * fVar7;
            pfVar27[1] = fVar15 * fVar8;
            pfVar27[2] = fVar16 * fVar9;
            pfVar27[3] = fVar17 * fVar10;
            pfVar27 = arg1 + lVar29 + 8;
            fVar4 = pfVar27[1];
            fVar5 = pfVar27[2];
            fVar6 = pfVar27[3];
            pfVar30 = arg1 + lVar29 + 0xc;
            fVar7 = *pfVar30;
            fVar8 = pfVar30[1];
            fVar9 = pfVar30[2];
            fVar10 = pfVar30[3];
            pfVar30 = this_ptr + lVar29 + 8;
            *pfVar30 = *pfVar27 * fVar18;
            pfVar30[1] = fVar4 * fVar19;
            pfVar30[2] = fVar5 * fVar20;
            pfVar30[3] = fVar6 * fVar21;
            pfVar27 = this_ptr + lVar29 + 0xc;
            *pfVar27 = fVar7 * fVar22;
            pfVar27[1] = fVar8 * fVar23;
            pfVar27[2] = fVar9 * fVar24;
            pfVar27[3] = fVar10 * fVar25;
            lVar29 = lVar29 + 0x10;
            lVar31 = lVar31 + 2;
          } while (lVar31 != 0);
          if ((uVar36 & 1) != 0) goto LAB_00e3b325;
        }
        this_ptr = this_ptr + uVar34;
        arg1 = arg1 + uVar34;
        if (uVar32 == uVar34) goto LAB_00e3b1ca;
        uVar37 = uVar37 - (int)uVar34;
      }
      uVar33 = uVar37 - 1;
      if ((uVar37 & 3) != 0) {
        uVar28 = 0;
        do {
          fVar4 = *arg1;
          arg1 = arg1 + 1;
          *this_ptr = fVar4 * *this_ptr;
          this_ptr = this_ptr + 1;
          uVar28 = uVar28 + 1;
        } while ((uVar37 & 3) != uVar28);
        uVar37 = uVar37 - uVar28;
      }
      if (2 < uVar33) {
        lVar29 = 0;
        lVar31 = 0;
        do {
          this_ptr[lVar29] = arg1[lVar29] * this_ptr[lVar29];
          this_ptr[lVar29 + 1] = arg1[lVar29 + 1] * this_ptr[lVar29 + 1];
          this_ptr[lVar29 + 2] = arg1[lVar29 + 2] * this_ptr[lVar29 + 2];
          this_ptr[lVar29 + 3] = arg1[lVar29 + 3] * this_ptr[lVar29 + 3];
          lVar31 = lVar31 + -0x10;
          lVar29 = lVar29 + 4;
        } while (uVar37 != (uint)lVar29);
        this_ptr = (float *)((int64_t)this_ptr - lVar31);
        arg1 = (float *)((int64_t)arg1 - lVar31);
      }
    }
LAB_00e3b1ca:
    if (param_2 == 0) {
      return;
    }
LAB_00e3b1d2:
    uVar33 = param_2 & 3;
    uVar37 = 0;
    if (uVar33 != 0) {
      uVar37 = param_2 & 0xfffffffc;
    }
    lVar29 = (int64_t)(int)uVar37;
    uVar37 = (int)param_2 >> 2;
    if (uVar35 == (uVar26 & 0xf)) {
      pfVar27 = arg1 + lVar29;
      if (3 < param_2) {
        uVar26 = uVar37 - 1;
        pfVar30 = this_ptr;
        if ((uVar37 & 3) != 0) {
          uVar35 = 0;
          do {
            fVar4 = arg1[1];
            fVar5 = arg1[2];
            fVar6 = arg1[3];
            *pfVar30 = *pfVar30 * *arg1;
            pfVar30[1] = pfVar30[1] * fVar4;
            pfVar30[2] = pfVar30[2] * fVar5;
            pfVar30[3] = pfVar30[3] * fVar6;
            pfVar30 = pfVar30 + 4;
            arg1 = arg1 + 4;
            uVar35 = uVar35 + 1;
          } while ((uVar37 & 3) != uVar35);
          uVar37 = uVar37 - uVar35;
        }
        if (2 < uVar26) {
          lVar31 = 0;
          do {
            pfVar1 = (float *)((int64_t)pfVar30 + lVar31);
            fVar4 = pfVar1[1];
            fVar5 = pfVar1[2];
            fVar6 = pfVar1[3];
            pfVar2 = (float *)((int64_t)pfVar30 + lVar31 + 0x10);
            fVar7 = *pfVar2;
            fVar8 = pfVar2[1];
            fVar9 = pfVar2[2];
            fVar10 = pfVar2[3];
            pfVar2 = (float *)((int64_t)pfVar30 + lVar31 + 0x20);
            fVar11 = *pfVar2;
            fVar12 = pfVar2[1];
            fVar13 = pfVar2[2];
            fVar14 = pfVar2[3];
            pfVar2 = (float *)((int64_t)arg1 + lVar31);
            fVar15 = pfVar2[1];
            fVar16 = pfVar2[2];
            fVar17 = pfVar2[3];
            pfVar3 = (float *)((int64_t)pfVar30 + lVar31 + 0x30);
            fVar18 = *pfVar3;
            fVar19 = pfVar3[1];
            fVar20 = pfVar3[2];
            fVar21 = pfVar3[3];
            pfVar3 = (float *)((int64_t)pfVar30 + lVar31);
            *pfVar3 = *pfVar1 * *pfVar2;
            pfVar3[1] = fVar4 * fVar15;
            pfVar3[2] = fVar5 * fVar16;
            pfVar3[3] = fVar6 * fVar17;
            pfVar1 = (float *)((int64_t)arg1 + lVar31 + 0x10);
            fVar4 = pfVar1[1];
            fVar5 = pfVar1[2];
            fVar6 = pfVar1[3];
            pfVar2 = (float *)((int64_t)pfVar30 + lVar31 + 0x10);
            *pfVar2 = fVar7 * *pfVar1;
            pfVar2[1] = fVar8 * fVar4;
            pfVar2[2] = fVar9 * fVar5;
            pfVar2[3] = fVar10 * fVar6;
            pfVar1 = (float *)((int64_t)arg1 + lVar31 + 0x20);
            fVar4 = pfVar1[1];
            fVar5 = pfVar1[2];
            fVar6 = pfVar1[3];
            pfVar2 = (float *)((int64_t)pfVar30 + lVar31 + 0x20);
            *pfVar2 = fVar11 * *pfVar1;
            pfVar2[1] = fVar12 * fVar4;
            pfVar2[2] = fVar13 * fVar5;
            pfVar2[3] = fVar14 * fVar6;
            pfVar1 = (float *)((int64_t)arg1 + lVar31 + 0x30);
            fVar4 = pfVar1[1];
            fVar5 = pfVar1[2];
            fVar6 = pfVar1[3];
            pfVar2 = (float *)((int64_t)pfVar30 + lVar31 + 0x30);
            *pfVar2 = fVar18 * *pfVar1;
            pfVar2[1] = fVar19 * fVar4;
            pfVar2[2] = fVar20 * fVar5;
            pfVar2[3] = fVar21 * fVar6;
            lVar31 = lVar31 + 0x40;
            uVar37 = uVar37 - 4;
          } while (uVar37 != 0);
        }
      }
    }
    else {
      pfVar27 = arg1;
      if (3 < param_2) {
        uVar26 = uVar37 - 1;
        pfVar30 = this_ptr;
        if ((uVar37 & 3) != 0) {
          uVar35 = 0;
          do {
            fVar4 = arg1[1];
            fVar5 = arg1[2];
            fVar6 = arg1[3];
            *pfVar30 = *arg1 * *pfVar30;
            pfVar30[1] = fVar4 * pfVar30[1];
            pfVar30[2] = fVar5 * pfVar30[2];
            pfVar30[3] = fVar6 * pfVar30[3];
            pfVar30 = pfVar30 + 4;
            arg1 = arg1 + 4;
            uVar35 = uVar35 + 1;
          } while ((uVar37 & 3) != uVar35);
          uVar37 = uVar37 - uVar35;
          pfVar27 = arg1;
        }
        if (2 < uVar26) {
          do {
            fVar4 = pfVar27[1];
            fVar5 = pfVar27[2];
            fVar6 = pfVar27[3];
            *pfVar30 = *pfVar27 * *pfVar30;
            pfVar30[1] = fVar4 * pfVar30[1];
            pfVar30[2] = fVar5 * pfVar30[2];
            pfVar30[3] = fVar6 * pfVar30[3];
            fVar4 = pfVar27[5];
            fVar5 = pfVar27[6];
            fVar6 = pfVar27[7];
            pfVar30[4] = pfVar27[4] * pfVar30[4];
            pfVar30[5] = fVar4 * pfVar30[5];
            pfVar30[6] = fVar5 * pfVar30[6];
            pfVar30[7] = fVar6 * pfVar30[7];
            fVar4 = pfVar27[9];
            fVar5 = pfVar27[10];
            fVar6 = pfVar27[0xb];
            pfVar30[8] = pfVar27[8] * pfVar30[8];
            pfVar30[9] = fVar4 * pfVar30[9];
            pfVar30[10] = fVar5 * pfVar30[10];
            pfVar30[0xb] = fVar6 * pfVar30[0xb];
            pfVar1 = pfVar27 + 0xc;
            fVar4 = pfVar27[0xd];
            fVar5 = pfVar27[0xe];
            fVar6 = pfVar27[0xf];
            pfVar27 = pfVar27 + 0x10;
            pfVar30[0xc] = *pfVar1 * pfVar30[0xc];
            pfVar30[0xd] = fVar4 * pfVar30[0xd];
            pfVar30[0xe] = fVar5 * pfVar30[0xe];
            pfVar30[0xf] = fVar6 * pfVar30[0xf];
            pfVar30 = pfVar30 + 0x10;
            uVar37 = uVar37 - 4;
          } while (uVar37 != 0);
        }
      }
    }
    if (uVar33 == 0) {
      return;
    }
    this_ptr[lVar29] = *pfVar27 * this_ptr[lVar29];
    if (uVar33 == 1) {
      return;
    }
    this_ptr[lVar29 + 1] = pfVar27[1] * this_ptr[lVar29 + 1];
    if (uVar33 == 2) {
      return;
    }
    this_ptr[lVar29 + 2] = pfVar27[2] * this_ptr[lVar29 + 2];
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if ((param_2 - 1 < 7) ||
     ((uVar32 = (uint64_t)(param_2 - 1) + 1, this_ptr < arg1 + uVar32 &&
      (arg1 < this_ptr + uVar32)))) goto LAB_00e3b12a;
  uVar34 = uVar32 & 0xfffffffffffffff8;
  uVar36 = (uVar34 - 8 >> 3) + 1;
  if (uVar34 - 8 == 0) {
    lVar29 = 0;
LAB_00e3b0f5:
    pfVar27 = arg1 + lVar29;
    fVar4 = pfVar27[1];
    fVar5 = pfVar27[2];
    fVar6 = pfVar27[3];
    pfVar30 = arg1 + lVar29 + 4;
    fVar7 = *pfVar30;
    fVar8 = pfVar30[1];
    fVar9 = pfVar30[2];
    fVar10 = pfVar30[3];
    pfVar30 = this_ptr + lVar29;
    fVar11 = pfVar30[1];
    fVar12 = pfVar30[2];
    fVar13 = pfVar30[3];
    pfVar1 = this_ptr + lVar29 + 4;
    fVar14 = *pfVar1;
    fVar15 = pfVar1[1];
    fVar16 = pfVar1[2];
    fVar17 = pfVar1[3];
    pfVar1 = this_ptr + lVar29;
    *pfVar1 = *pfVar30 * *pfVar27;
    pfVar1[1] = fVar11 * fVar4;
    pfVar1[2] = fVar12 * fVar5;
    pfVar1[3] = fVar13 * fVar6;
    pfVar27 = this_ptr + lVar29 + 4;
    *pfVar27 = fVar14 * fVar7;
    pfVar27[1] = fVar15 * fVar8;
    pfVar27[2] = fVar16 * fVar9;
    pfVar27[3] = fVar17 * fVar10;
  }
  else {
    lVar31 = -(uVar36 & 0xfffffffffffffffe);
    lVar29 = 0;
    do {
      pfVar27 = arg1 + lVar29;
      fVar4 = pfVar27[1];
      fVar5 = pfVar27[2];
      fVar6 = pfVar27[3];
      pfVar30 = arg1 + lVar29 + 4;
      fVar7 = *pfVar30;
      fVar8 = pfVar30[1];
      fVar9 = pfVar30[2];
      fVar10 = pfVar30[3];
      pfVar30 = this_ptr + lVar29;
      fVar11 = pfVar30[1];
      fVar12 = pfVar30[2];
      fVar13 = pfVar30[3];
      pfVar1 = this_ptr + lVar29 + 4;
      fVar14 = *pfVar1;
      fVar15 = pfVar1[1];
      fVar16 = pfVar1[2];
      fVar17 = pfVar1[3];
      pfVar1 = this_ptr + lVar29 + 8;
      fVar18 = *pfVar1;
      fVar19 = pfVar1[1];
      fVar20 = pfVar1[2];
      fVar21 = pfVar1[3];
      pfVar1 = this_ptr + lVar29 + 0xc;
      fVar22 = *pfVar1;
      fVar23 = pfVar1[1];
      fVar24 = pfVar1[2];
      fVar25 = pfVar1[3];
      pfVar1 = this_ptr + lVar29;
      *pfVar1 = *pfVar30 * *pfVar27;
      pfVar1[1] = fVar11 * fVar4;
      pfVar1[2] = fVar12 * fVar5;
      pfVar1[3] = fVar13 * fVar6;
      pfVar27 = this_ptr + lVar29 + 4;
      *pfVar27 = fVar14 * fVar7;
      pfVar27[1] = fVar15 * fVar8;
      pfVar27[2] = fVar16 * fVar9;
      pfVar27[3] = fVar17 * fVar10;
      pfVar27 = arg1 + lVar29 + 8;
      fVar4 = pfVar27[1];
      fVar5 = pfVar27[2];
      fVar6 = pfVar27[3];
      pfVar30 = arg1 + lVar29 + 0xc;
      fVar7 = *pfVar30;
      fVar8 = pfVar30[1];
      fVar9 = pfVar30[2];
      fVar10 = pfVar30[3];
      pfVar30 = this_ptr + lVar29 + 8;
      *pfVar30 = *pfVar27 * fVar18;
      pfVar30[1] = fVar4 * fVar19;
      pfVar30[2] = fVar5 * fVar20;
      pfVar30[3] = fVar6 * fVar21;
      pfVar27 = this_ptr + lVar29 + 0xc;
      *pfVar27 = fVar7 * fVar22;
      pfVar27[1] = fVar8 * fVar23;
      pfVar27[2] = fVar9 * fVar24;
      pfVar27[3] = fVar10 * fVar25;
      lVar29 = lVar29 + 0x10;
      lVar31 = lVar31 + 2;
    } while (lVar31 != 0);
    if ((uVar36 & 1) != 0) goto LAB_00e3b0f5;
  }
  if (uVar32 == uVar34) {
    return;
  }
  param_2 = param_2 - (int)uVar34;
  arg1 = arg1 + uVar34;
  this_ptr = this_ptr + uVar34;
LAB_00e3b12a:
  uVar26 = param_2 - 1;
  if ((param_2 & 3) != 0) {
    uVar35 = 0;
    do {
      fVar4 = *arg1;
      arg1 = arg1 + 1;
      *this_ptr = fVar4 * *this_ptr;
      this_ptr = this_ptr + 1;
      uVar35 = uVar35 + 1;
    } while ((param_2 & 3) != uVar35);
    param_2 = param_2 - uVar35;
  }
  if (2 < uVar26) {
    lVar29 = 0;
    do {
      this_ptr[lVar29] = arg1[lVar29] * this_ptr[lVar29];
      this_ptr[lVar29 + 1] = arg1[lVar29 + 1] * this_ptr[lVar29 + 1];
      this_ptr[lVar29 + 2] = arg1[lVar29 + 2] * this_ptr[lVar29 + 2];
      this_ptr[lVar29 + 3] = arg1[lVar29 + 3] * this_ptr[lVar29 + 3];
      lVar29 = lVar29 + 4;
    } while (param_2 != (uint)lVar29);
  }
  return;
}

