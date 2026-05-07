// Function: FUN_00f46910
// Address: 00f46910
// Size: 673 bytes
// Class: MUSpectrumShaper
// === MUSpectrumShaper properties ===
//   GNInt           _assembledElementRendererCount
//   MUSpectrumShaperSpectrumType _spectrumType
//   bool            _processSpectrumShaper
//   bool            _canUseSpectrumShaper
//   bool            _processEqualizer
//   bool            _processLowerSpectrum
//   bool            _processUpperSpectrum
//   bool            _isBypassed
//   GNInt           _overallSpectrumFundamentalPitchIndex
//   float           _overallSpectrumFreqPerBin
//   float           _referenceMagnitudeSum
//   float           _maximumMagnitudeSum
//   float           _synthAmps
//   float           _synthPhases
//   float           _emphasizePow
//   float           _allGain
//   float           _ampDifferencePow
//   float           _clipLimit
//   bool            _didRequestCacheValidation
//   bool            _appliedEqualizerFactorsAreValid
//   bool            _appliedEqualizerFormantFactorsAreValid
//   bool            _processSpectrumShaperIsValid
//   float           _startValue
//   float           _riseDuration
//   float           _riseEndValue
//   float           _decayStartTime
//   float           _decayEndTime
//   float           _decayFactor
//   float           _endValue
//   bool            _needsProcessEnvelope
//   ... +35 more


uint FUN_00f46910(void)

{
  int64_t lVar1;
  char *pcVar2;
  char *pcVar3;
  int64_t lVar4;
  uint uVar5;
  uint uVar6;
  int64_t lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint64_t uVar11;
  uint uVar12;
  uint64_t uVar13;
  uint uVar14;
  uint unaff_ESI;
  int64_t this_ptr;
  uint uVar15;
  int iVar16;
  int64_t lVar17;
  char cVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  char local_31;
  
  lVar7 = *(int64_t *)(this_ptr + 0x60);
  uVar5 = *(uint *)(this_ptr + 0xac);
  uVar19 = (uint64_t)uVar5;
  pcVar2 = (char *)(uVar19 + lVar7);
  uVar11 = (uint64_t)(int)*(uint *)(this_ptr + 0xb8);
  uVar14 = *(int *)(this_ptr + 0x50) - 0x106;
  uVar15 = uVar5 - uVar14;
  if (uVar5 < uVar14) {
    uVar15 = 0;
  }
  local_31 = pcVar2[uVar11 - 1];
  cVar18 = pcVar2[uVar11];
  uVar14 = *(uint *)(this_ptr + 0xbc) >> 2;
  if (*(uint *)(this_ptr + 0xb8) < *(uint *)(this_ptr + 0xcc)) {
    uVar14 = *(uint *)(this_ptr + 0xbc);
  }
  uVar6 = *(uint *)(this_ptr + 0xb4);
  uVar12 = *(uint *)(this_ptr + 0xd0);
  if (uVar6 < *(uint *)(this_ptr + 0xd0)) {
    uVar12 = uVar6;
  }
  uVar13 = uVar19 + lVar7 + 0x102;
  do {
    uVar20 = (uint64_t)unaff_ESI;
    pcVar3 = (char *)(uVar20 + lVar7);
    iVar9 = (int)uVar11;
    if ((((pcVar3[iVar9] == cVar18) && (pcVar3[(int64_t)iVar9 + -1] == local_31)) &&
        (*pcVar3 == *pcVar2)) && (lVar17 = lVar7, pcVar3[1] == pcVar2[1])) {
      do {
        iVar16 = (int)lVar17;
        iVar8 = (int)uVar13;
        if (*(char *)(lVar17 + 3 + uVar19) != *(char *)(lVar17 + 3 + uVar20)) {
          iVar16 = iVar16 + uVar5 + 3;
          goto LAB_00f46aa9;
        }
        if (*(char *)(lVar17 + 4 + uVar19) != *(char *)(lVar17 + 4 + uVar20)) {
          iVar16 = iVar16 + uVar5 + 4;
          goto LAB_00f46aa9;
        }
        if (*(char *)(lVar17 + 5 + uVar19) != *(char *)(lVar17 + 5 + uVar20)) {
          iVar16 = (iVar16 + uVar5 + 5) - iVar8;
          goto joined_r0x00f46af6;
        }
        if (*(char *)(lVar17 + 6 + uVar19) != *(char *)(lVar17 + 6 + uVar20)) {
          iVar16 = (iVar16 + uVar5 + 6) - iVar8;
          goto joined_r0x00f46af6;
        }
        if (*(char *)(lVar17 + 7 + uVar19) != *(char *)(lVar17 + 7 + uVar20)) {
          iVar16 = (iVar16 + uVar5 + 7) - iVar8;
          goto joined_r0x00f46af6;
        }
        if (*(char *)(lVar17 + 8 + uVar19) != *(char *)(lVar17 + 8 + uVar20)) {
          iVar16 = (iVar16 + uVar5 + 8) - iVar8;
          goto joined_r0x00f46af6;
        }
        if (*(char *)(lVar17 + 9 + uVar19) != *(char *)(lVar17 + 9 + uVar20)) {
          iVar16 = (iVar16 + uVar5 + 9) - iVar8;
          goto joined_r0x00f46af6;
        }
        lVar1 = lVar17 + 8;
      } while ((*(char *)(lVar17 + 10 + uVar19) == *(char *)(lVar17 + 10 + uVar20)) &&
              (lVar4 = lVar17 + uVar19, lVar17 = lVar1, lVar4 + 10U < uVar13));
      iVar16 = (int)lVar1 + uVar5 + 2;
LAB_00f46aa9:
      iVar16 = iVar16 - iVar8;
joined_r0x00f46af6:
      uVar10 = iVar16 + 0x102;
      if (iVar9 < (int)uVar10) {
        *(uint *)(this_ptr + 0xb0) = unaff_ESI;
        if ((int)uVar12 <= (int)uVar10) {
LAB_00f46b99:
          if (uVar6 < uVar10) {
            uVar10 = uVar6;
          }
          return uVar10;
        }
        local_31 = pcVar2[iVar16 + 0x101];
        cVar18 = pcVar2[(int)uVar10];
        uVar11 = (uint64_t)uVar10;
      }
    }
    uVar10 = (uint)uVar11;
    unaff_ESI = (uint)*(ushort *)
                       (*(int64_t *)(this_ptr + 0x70) +
                       (uint64_t)(unaff_ESI & *(uint *)(this_ptr + 0x58)) * 2);
    if ((unaff_ESI <= uVar15) || (uVar14 = uVar14 - 1, uVar14 == 0)) goto LAB_00f46b99;
  } while( true );
}

