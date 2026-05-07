// Function: FUN_0038f280
// Address: 0038f280
// Size: 951 bytes
// Class: GNHeartbeatHandler
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_0038f280(float param_1,double param_2)

{
  float *pfVar1;
  double dVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint uVar8;
  double *pdVar9;
  int64_t lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int64_t *this_ptr;
  int64_t lVar14;
  int64_t lVar15;
  uint uVar16;
  uint64_t uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  uint32_t extraout_XMM0_Dc;
  float fVar22;
  uint32_t uVar23;
  int64_t local_58;
  char local_50;
  uint32_t uVar24;
  
  fVar22 = SUB84(param_2,0);
  fVar18 = (float)(**(code **)(*this_ptr + 0xb20))(0);
  fVar20 = fVar22;
  uVar24 = extraout_XMM0_Dc;
  fVar19 = (float)(**(code **)(*this_ptr + 0xb20))(g_02390124);
  fVar18 = (float)((uint)((fVar22 * g_0239011c + fVar18) - (fVar20 * g_0239011c + fVar19)) &
                  g_02390140);
  param_1 = param_1 * fVar18;
  fVar20 = 0.0;
  if ((0.0 <= param_1) && (fVar20 = param_1, fVar18 < param_1)) {
    fVar20 = fVar18;
  }
  dVar21 = (double)FUN_00e7d6f0();
  uVar23 = 0;
  lVar14 = this_ptr[0x3c];
  uVar8 = *(uint *)(lVar14 + 0x18);
  if (param_2 <= 0.0) {
    if ((uVar8 & 0xfffffff0) == 0x10) {
      pfVar1 = *(float **)(lVar14 + 0x10);
      if ((*pfVar1 == fVar20) && (!NAN(*pfVar1) && !NAN(fVar20))) {
        *(double *)(pfVar1 + 2) = dVar21;
        return;
      }
      *pfVar1 = fVar20;
      *(double *)(pfVar1 + 2) = dVar21;
    }
    else {
      FUN_00c8e340(SUB84(dVar21,0),0);
      *(double *)(*(int64_t *)(this_ptr[0x3c] + 0x10) + 8) = dVar21;
    }
    goto LAB_0038f617;
  }
  uVar12 = uVar8 + 0xf;
  if (-1 < (int)uVar8) {
    uVar12 = uVar8;
  }
  if (0xf < (int)uVar8) {
    uVar12 = (int)uVar12 >> 4;
    lVar14 = *(int64_t *)(lVar14 + 0x10);
    if ((uint64_t)uVar12 - 1 < 3) {
      uVar17 = 0xffffffff;
      uVar7 = 0;
    }
    else {
      pdVar9 = (double *)(lVar14 + 0x38);
      uVar17 = 0xffffffff;
      uVar7 = 0;
      do {
        uVar8 = (uint)uVar7;
        uVar16 = (uint)uVar17;
        if (dVar21 < pdVar9[-6]) {
          uVar16 = uVar8;
        }
        uVar5 = uVar8 + 1;
        if (pdVar9[-4] <= dVar21) {
          uVar5 = uVar16;
        }
        uVar16 = uVar8 + 2;
        if (pdVar9[-2] <= dVar21) {
          uVar16 = uVar5;
        }
        uVar23 = SUB84(*pdVar9,0);
        uVar8 = uVar8 + 3;
        if (*pdVar9 <= dVar21) {
          uVar8 = uVar16;
        }
        uVar17 = (uint64_t)uVar8;
        uVar7 = uVar7 + 4;
        pdVar9 = pdVar9 + 8;
      } while ((uVar12 & 0xfffffffc) != uVar7);
    }
    uVar8 = (uint)uVar17;
    lVar15 = 0;
    if ((uint64_t)(uVar12 & 3) != 0) {
      lVar6 = uVar7 * 0x10;
      lVar15 = (uint64_t)(uVar12 & 3) << 4;
      lVar10 = 0;
      do {
        dVar2 = *(double *)(lVar6 + lVar14 + 8 + lVar10);
        uVar23 = SUB84(dVar2,0);
        if (dVar21 < dVar2) {
          uVar17 = uVar7 & 0xffffffff;
        }
        uVar8 = (uint)uVar17;
        uVar7 = (uint64_t)((int)uVar7 + 1);
        lVar10 = lVar10 + 0x10;
      } while (lVar15 != lVar10);
    }
    if (0 < (int)uVar8) {
      FUN_00c8e710(uVar7,uVar23,lVar14,lVar15,dVar21,uVar24);
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      fVar18 = (float)FUN_00c8e340();
      lVar14 = this_ptr[0x3c];
      iVar11 = *(int *)(lVar14 + 0x18);
      iVar13 = iVar11 + 0xf;
      if (-1 < iVar11) {
        iVar13 = iVar11;
      }
      uVar12 = iVar13 >> 4;
      if ((int)uVar8 < (int)uVar12) {
        uVar7 = (uint64_t)uVar8;
        lVar15 = uVar7 * 0x10;
        lVar6 = 0;
        do {
          pfVar1 = (float *)(lVar6 + *(int64_t *)(lVar14 + 0x10) + lVar15);
          fVar18 = *pfVar1;
          fVar19 = pfVar1[1];
          fVar22 = pfVar1[2];
          fVar3 = pfVar1[3];
          pfVar1 = (float *)(*(int64_t *)(local_58 + 0x10) + lVar6);
          *pfVar1 = fVar18;
          pfVar1[1] = fVar19;
          pfVar1[2] = fVar22;
          pfVar1[3] = fVar3;
          uVar7 = uVar7 + 1;
          lVar14 = this_ptr[0x3c];
          iVar11 = *(int *)(lVar14 + 0x18);
          iVar13 = iVar11 + 0xf;
          if (-1 < iVar11) {
            iVar13 = iVar11;
          }
          uVar12 = iVar13 >> 4;
          lVar6 = lVar6 + 0x10;
        } while ((int64_t)uVar7 < (int64_t)(int)uVar12);
      }
      if ((int)uVar12 < 1) {
LAB_0038f585:
        bVar4 = false;
      }
      else {
        fVar18 = **(float **)(lVar14 + 0x10);
        bVar4 = true;
        if ((fVar18 == fVar20) && (!NAN(fVar18) && !NAN(fVar20))) {
          uVar8 = uVar12 & 7;
          if (6 < uVar12 - 1) {
            iVar11 = -(uVar12 & 0xfffffff8);
            do {
              iVar11 = iVar11 + 8;
            } while (iVar11 != 0);
          }
          for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          }
          goto LAB_0038f585;
        }
      }
      FUN_00c8e340(fVar18,0);
      lVar14 = *(int64_t *)(this_ptr[0x3c] + 0x10);
      lVar15 = (int64_t)*(int *)(this_ptr[0x3c] + 0x18);
      *(double *)(lVar15 + -8 + lVar14) = dVar21 + param_2;
      *(float *)(lVar15 + -0x10 + lVar14) = fVar20;
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if (!bVar4) {
        return;
      }
      goto LAB_0038f617;
    }
  }
  FUN_00c8e340(SUB84(dVar21,0),0);
  lVar14 = *(int64_t *)(this_ptr[0x3c] + 0x10);
  lVar15 = (int64_t)*(int *)(this_ptr[0x3c] + 0x18);
  *(double *)(lVar15 + -8 + lVar14) = dVar21 + param_2;
  *(float *)(lVar15 + -0x10 + lVar14) = fVar20;
  if ((*(float *)(this_ptr + 0x3d) == fVar20) &&
     (!NAN(*(float *)(this_ptr + 0x3d)) && !NAN(fVar20))) {
    return;
  }
LAB_0038f617:
  (**(code **)(*this_ptr + 0x620))();
  return;
}

