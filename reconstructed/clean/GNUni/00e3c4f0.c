// Function: FUN_00e3c4f0
// Address: 00e3c4f0
// Size: 563 bytes
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


void FUN_00e3c4f0(void)

{
  uint8_t (*pauVar1) [16];
  float fVar2;
  uint64_t uVar3;
  uint8_t auVar4 [12];
  float fVar5;
  void*puVar6;
  uint8_t (*pauVar7) [16];
  float *pfVar8;
  uint uVar9;
  int64_t lVar10;
  uint unaff_ESI;
  uint8_t (*this_ptr) [16];
  uint uVar11;
  uint uVar12;
  uint8_t auVar13 [16];
  uint8_t in_XMM1 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  
  if (((uint64_t)this_ptr & 0xf) == 0) {
    auVar14 = ZEXT416(g_02391074);
  }
  else {
    uVar12 = 4 - (int)(((uint64_t)this_ptr & 0xf) >> 2);
    if ((int)unaff_ESI < (int)uVar12) {
      uVar12 = unaff_ESI;
    }
    if (((uint64_t)this_ptr & 3) != 0) {
      uVar12 = unaff_ESI;
    }
    unaff_ESI = unaff_ESI - uVar12;
    if (uVar12 == 0) {
      auVar14 = ZEXT416(g_02391074);
    }
    else {
      uVar11 = uVar12 - 1;
      auVar14 = ZEXT416(g_02391074);
      pauVar7 = this_ptr;
      if ((uVar12 & 3) != 0) {
        uVar9 = 0;
        do {
          in_XMM1 = auVar14;
          puVar6 = *pauVar7;
          pauVar7 = (uint8_t (*) [16])(*pauVar7 + 4);
          fVar2 = *(float *)puVar6;
          if (*(float *)puVar6 <= in_XMM1._0_4_) {
            fVar2 = in_XMM1._0_4_;
          }
          auVar14 = ZEXT416((uint)fVar2);
          uVar9 = uVar9 + 1;
        } while ((uVar12 & 3) != uVar9);
        uVar12 = uVar12 - uVar9;
      }
      if (2 < uVar11) {
        lVar10 = 0;
        do {
          fVar2 = *(float *)(*pauVar7 + lVar10 * 4);
          if (*(float *)(*pauVar7 + lVar10 * 4) <= auVar14._0_4_) {
            fVar2 = auVar14._0_4_;
          }
          fVar5 = *(float *)(*pauVar7 + lVar10 * 4 + 4);
          if (*(float *)(*pauVar7 + lVar10 * 4 + 4) <= fVar2) {
            fVar5 = fVar2;
          }
          fVar2 = *(float *)(*pauVar7 + lVar10 * 4 + 8);
          if (*(float *)(*pauVar7 + lVar10 * 4 + 8) <= fVar5) {
            fVar2 = fVar5;
          }
          in_XMM1._8_8_ = 0;
          in_XMM1._0_8_ = CONCAT44(0,fVar2);
          uVar3 = (uint64_t)(uint)*(float *)(*pauVar7 + lVar10 * 4 + 0xc);
          if (*(float *)(*pauVar7 + lVar10 * 4 + 0xc) <= fVar2) {
            uVar3 = CONCAT44(0,fVar2);
          }
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar3;
          lVar10 = lVar10 + 4;
        } while (uVar12 != (uint)lVar10);
      }
      this_ptr = (uint8_t (*) [16])(*this_ptr + (uint64_t)uVar11 * 4 + 4);
    }
    if (unaff_ESI == 0) {
      return;
    }
  }
  if (3 < unaff_ESI) {
    auVar13._0_4_ = auVar14._0_4_;
    auVar13._4_4_ = auVar13._0_4_;
    auVar13._8_4_ = auVar13._0_4_;
    auVar13._12_4_ = auVar13._0_4_;
    uVar11 = (int)unaff_ESI >> 2;
    uVar12 = uVar11 - 1;
    pauVar7 = this_ptr;
    if ((uVar11 & 7) != 0) {
      uVar9 = 0;
      do {
        in_XMM1 = auVar13;
        auVar14 = *pauVar7;
        pauVar7 = pauVar7 + 1;
        auVar13 = maxps(auVar14,in_XMM1);
        uVar9 = uVar9 + 1;
      } while ((uVar11 & 7) != uVar9);
      uVar11 = uVar11 - uVar9;
    }
    if (6 < uVar12) {
      do {
        auVar14 = maxps(*pauVar7,auVar13);
        auVar14 = maxps(pauVar7[1],auVar14);
        auVar14 = maxps(pauVar7[2],auVar14);
        auVar14 = maxps(pauVar7[3],auVar14);
        auVar14 = maxps(pauVar7[4],auVar14);
        auVar14 = maxps(pauVar7[5],auVar14);
        in_XMM1 = maxps(pauVar7[6],auVar14);
        pauVar1 = pauVar7 + 7;
        pauVar7 = pauVar7 + 8;
        auVar13 = maxps(*pauVar1,in_XMM1);
        uVar11 = uVar11 - 8;
      } while (uVar11 != 0);
    }
    auVar4._4_8_ = in_XMM1._8_8_;
    auVar4._0_4_ = auVar13._4_4_;
    auVar15._0_8_ = auVar4._0_8_ << 0x20;
    auVar15._8_4_ = auVar13._8_4_;
    auVar15._12_4_ = auVar13._12_4_;
    auVar16._8_8_ = auVar13._8_8_;
    auVar16._0_8_ = auVar15._8_8_;
    auVar14 = maxps(auVar13,auVar16);
    if (auVar14._0_4_ <= auVar14._4_4_) {
      auVar14._0_4_ = auVar14._4_4_;
    }
  }
  uVar12 = (int)unaff_ESI % 4;
  if (uVar12 != 0) {
    pfVar8 = (float *)(*this_ptr + (int64_t)(int)(unaff_ESI - uVar12) * 4);
    uVar11 = uVar12 - 1;
    if ((uVar12 & 3) != 0) {
      uVar9 = 0;
      do {
        fVar2 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        if (fVar2 <= auVar14._0_4_) {
          fVar2 = auVar14._0_4_;
        }
        auVar14 = ZEXT416((uint)fVar2);
        uVar9 = uVar9 + 1;
      } while ((uVar12 & 3) != uVar9);
      uVar12 = uVar12 - uVar9;
    }
    if (2 < uVar11) {
      lVar10 = 0;
      do {
        fVar2 = pfVar8[lVar10];
        if (pfVar8[lVar10] <= auVar14._0_4_) {
          fVar2 = auVar14._0_4_;
        }
        fVar5 = pfVar8[lVar10 + 1];
        if (pfVar8[lVar10 + 1] <= fVar2) {
          fVar5 = fVar2;
        }
        fVar2 = pfVar8[lVar10 + 2];
        if (pfVar8[lVar10 + 2] <= fVar5) {
          fVar2 = fVar5;
        }
        fVar5 = pfVar8[lVar10 + 3];
        if (pfVar8[lVar10 + 3] <= fVar2) {
          fVar5 = fVar2;
        }
        auVar14 = ZEXT416((uint)fVar5);
        lVar10 = lVar10 + 4;
      } while (uVar12 != (uint)lVar10);
    }
  }
  return;
}

