// Function: FUN_00e3c230
// Address: 00e3c230
// Size: 693 bytes
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


void FUN_00e3c230(float param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
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
  uint uVar18;
  uint uVar19;
  float *pfVar20;
  int iVar21;
  int64_t lVar22;
  uint uVar23;
  int64_t lVar24;
  int64_t lVar25;
  uint unaff_ESI;
  float *this_ptr;
  float *pfVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  uint64_t uVar29;
  
  pfVar26 = this_ptr;
  if (((uint64_t)this_ptr & 0xf) != 0) {
    uVar18 = 4 - (int)(((uint64_t)this_ptr & 0xf) >> 2);
    if ((int)unaff_ESI < (int)uVar18) {
      uVar18 = unaff_ESI;
    }
    if (((uint64_t)this_ptr & 3) != 0) {
      uVar18 = unaff_ESI;
    }
    unaff_ESI = unaff_ESI - uVar18;
    if (uVar18 != 0) {
      if (6 < uVar18 - 1) {
        uVar28 = (uint64_t)(uVar18 - 1) + 1;
        uVar27 = uVar28 & 0xfffffffffffffff8;
        uVar29 = (uVar27 - 8 >> 3) + 1;
        if (uVar27 - 8 == 0) {
          lVar22 = 0;
LAB_00e3c2f2:
          pfVar26 = this_ptr + lVar22;
          fVar3 = pfVar26[1];
          fVar4 = pfVar26[2];
          fVar5 = pfVar26[3];
          pfVar20 = this_ptr + lVar22 + 4;
          fVar6 = *pfVar20;
          fVar7 = pfVar20[1];
          fVar8 = pfVar20[2];
          fVar9 = pfVar20[3];
          pfVar20 = this_ptr + lVar22;
          *pfVar20 = *pfVar26 + param_1;
          pfVar20[1] = fVar3 + param_1;
          pfVar20[2] = fVar4 + param_1;
          pfVar20[3] = fVar5 + param_1;
          pfVar26 = this_ptr + lVar22 + 4;
          *pfVar26 = fVar6 + param_1;
          pfVar26[1] = fVar7 + param_1;
          pfVar26[2] = fVar8 + param_1;
          pfVar26[3] = fVar9 + param_1;
        }
        else {
          lVar24 = -(uVar29 & 0xfffffffffffffffe);
          lVar22 = 0;
          do {
            pfVar26 = this_ptr + lVar22;
            fVar3 = pfVar26[1];
            fVar4 = pfVar26[2];
            fVar5 = pfVar26[3];
            pfVar20 = this_ptr + lVar22 + 4;
            fVar6 = *pfVar20;
            fVar7 = pfVar20[1];
            fVar8 = pfVar20[2];
            fVar9 = pfVar20[3];
            pfVar20 = this_ptr + lVar22 + 8;
            fVar10 = *pfVar20;
            fVar11 = pfVar20[1];
            fVar12 = pfVar20[2];
            fVar13 = pfVar20[3];
            pfVar20 = this_ptr + lVar22 + 0xc;
            fVar14 = *pfVar20;
            fVar15 = pfVar20[1];
            fVar16 = pfVar20[2];
            fVar17 = pfVar20[3];
            pfVar20 = this_ptr + lVar22;
            *pfVar20 = *pfVar26 + param_1;
            pfVar20[1] = fVar3 + param_1;
            pfVar20[2] = fVar4 + param_1;
            pfVar20[3] = fVar5 + param_1;
            pfVar26 = this_ptr + lVar22 + 4;
            *pfVar26 = fVar6 + param_1;
            pfVar26[1] = fVar7 + param_1;
            pfVar26[2] = fVar8 + param_1;
            pfVar26[3] = fVar9 + param_1;
            pfVar26 = this_ptr + lVar22 + 8;
            *pfVar26 = fVar10 + param_1;
            pfVar26[1] = fVar11 + param_1;
            pfVar26[2] = fVar12 + param_1;
            pfVar26[3] = fVar13 + param_1;
            pfVar26 = this_ptr + lVar22 + 0xc;
            *pfVar26 = fVar14 + param_1;
            pfVar26[1] = fVar15 + param_1;
            pfVar26[2] = fVar16 + param_1;
            pfVar26[3] = fVar17 + param_1;
            lVar22 = lVar22 + 0x10;
            lVar24 = lVar24 + 2;
          } while (lVar24 != 0);
          if ((uVar29 & 1) != 0) goto LAB_00e3c2f2;
        }
        this_ptr = this_ptr + uVar27;
        pfVar26 = this_ptr;
        if (uVar28 == uVar27) goto LAB_00e3c338;
        uVar18 = uVar18 - (int)uVar27;
      }
      do {
        pfVar26 = this_ptr + 1;
        *this_ptr = *this_ptr + param_1;
        uVar18 = uVar18 - 1;
        this_ptr = pfVar26;
      } while (uVar18 != 0);
    }
LAB_00e3c338:
    if (unaff_ESI == 0) {
      return;
    }
  }
  if (3 < unaff_ESI) {
    uVar19 = (int)unaff_ESI >> 2;
    uVar18 = uVar19 - 1;
    pfVar20 = pfVar26;
    if ((uVar19 & 3) != 0) {
      uVar23 = 0;
      do {
        *pfVar20 = *pfVar20 + param_1;
        pfVar20[1] = pfVar20[1] + param_1;
        pfVar20[2] = pfVar20[2] + param_1;
        pfVar20[3] = pfVar20[3] + param_1;
        pfVar20 = pfVar20 + 4;
        uVar23 = uVar23 + 1;
      } while ((uVar19 & 3) != uVar23);
      uVar19 = uVar19 - uVar23;
    }
    if (2 < uVar18) {
      do {
        *pfVar20 = *pfVar20 + param_1;
        pfVar20[1] = pfVar20[1] + param_1;
        pfVar20[2] = pfVar20[2] + param_1;
        pfVar20[3] = pfVar20[3] + param_1;
        pfVar20[4] = pfVar20[4] + param_1;
        pfVar20[5] = pfVar20[5] + param_1;
        pfVar20[6] = pfVar20[6] + param_1;
        pfVar20[7] = pfVar20[7] + param_1;
        pfVar20[8] = pfVar20[8] + param_1;
        pfVar20[9] = pfVar20[9] + param_1;
        pfVar20[10] = pfVar20[10] + param_1;
        pfVar20[0xb] = pfVar20[0xb] + param_1;
        pfVar20[0xc] = pfVar20[0xc] + param_1;
        pfVar20[0xd] = pfVar20[0xd] + param_1;
        pfVar20[0xe] = pfVar20[0xe] + param_1;
        pfVar20[0xf] = pfVar20[0xf] + param_1;
        pfVar20 = pfVar20 + 0x10;
        uVar19 = uVar19 - 4;
      } while (uVar19 != 0);
    }
  }
  iVar21 = (int)unaff_ESI % 4;
  if (iVar21 == 0) {
    return;
  }
  pfVar20 = pfVar26 + (int)(unaff_ESI - iVar21);
  if (iVar21 - 1U < 7) goto LAB_00e3c496;
  uVar28 = (uint64_t)(iVar21 - 1U) + 1;
  uVar27 = uVar28 & 0xfffffffffffffff8;
  uVar29 = (uVar27 - 8 >> 3) + 1;
  if (uVar27 - 8 == 0) {
    lVar22 = 0;
LAB_00e3c472:
    pfVar26 = pfVar20 + lVar22;
    fVar3 = pfVar26[1];
    fVar4 = pfVar26[2];
    fVar5 = pfVar26[3];
    pfVar2 = pfVar20 + lVar22 + 4;
    fVar6 = *pfVar2;
    fVar7 = pfVar2[1];
    fVar8 = pfVar2[2];
    fVar9 = pfVar2[3];
    pfVar2 = pfVar20 + lVar22;
    *pfVar2 = *pfVar26 + param_1;
    pfVar2[1] = fVar3 + param_1;
    pfVar2[2] = fVar4 + param_1;
    pfVar2[3] = fVar5 + param_1;
    pfVar26 = pfVar20 + lVar22 + 4;
    *pfVar26 = fVar6 + param_1;
    pfVar26[1] = fVar7 + param_1;
    pfVar26[2] = fVar8 + param_1;
    pfVar26[3] = fVar9 + param_1;
  }
  else {
    lVar24 = (int64_t)(int)unaff_ESI - (int64_t)iVar21;
    lVar25 = -(uVar29 & 0xfffffffffffffffe);
    lVar22 = 0;
    do {
      pfVar1 = pfVar26 + lVar24 + lVar22;
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      pfVar2 = pfVar26 + lVar24 + lVar22 + 4;
      fVar6 = *pfVar2;
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      pfVar2 = pfVar26 + lVar24 + lVar22 + 8;
      fVar10 = *pfVar2;
      fVar11 = pfVar2[1];
      fVar12 = pfVar2[2];
      fVar13 = pfVar2[3];
      pfVar2 = pfVar26 + lVar24 + lVar22 + 0xc;
      fVar14 = *pfVar2;
      fVar15 = pfVar2[1];
      fVar16 = pfVar2[2];
      fVar17 = pfVar2[3];
      pfVar2 = pfVar26 + lVar24 + lVar22;
      *pfVar2 = *pfVar1 + param_1;
      pfVar2[1] = fVar3 + param_1;
      pfVar2[2] = fVar4 + param_1;
      pfVar2[3] = fVar5 + param_1;
      pfVar2 = pfVar26 + lVar24 + lVar22 + 4;
      *pfVar2 = fVar6 + param_1;
      pfVar2[1] = fVar7 + param_1;
      pfVar2[2] = fVar8 + param_1;
      pfVar2[3] = fVar9 + param_1;
      pfVar2 = pfVar26 + lVar24 + lVar22 + 8;
      *pfVar2 = fVar10 + param_1;
      pfVar2[1] = fVar11 + param_1;
      pfVar2[2] = fVar12 + param_1;
      pfVar2[3] = fVar13 + param_1;
      pfVar2 = pfVar26 + lVar24 + lVar22 + 0xc;
      *pfVar2 = fVar14 + param_1;
      pfVar2[1] = fVar15 + param_1;
      pfVar2[2] = fVar16 + param_1;
      pfVar2[3] = fVar17 + param_1;
      lVar22 = lVar22 + 0x10;
      lVar25 = lVar25 + 2;
    } while (lVar25 != 0);
    if ((uVar29 & 1) != 0) goto LAB_00e3c472;
  }
  if (uVar28 == uVar27) {
    return;
  }
  pfVar20 = pfVar20 + uVar27;
  iVar21 = iVar21 - (int)uVar27;
LAB_00e3c496:
  lVar22 = 0;
  do {
    pfVar20[lVar22] = pfVar20[lVar22] + param_1;
    lVar22 = lVar22 + 1;
  } while (iVar21 != (int)lVar22);
  return;
}

