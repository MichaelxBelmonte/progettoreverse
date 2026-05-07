// Function: FUN_00f4b740
// Address: 00f4b740
// Size: 3107 bytes
// Class: MUSpectrumShaper
// String references:
//   "/System/Library/Frameworks/Cocoa.framework/Versions/A/Cocoa"
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


void FUN_00f4b740(int param_1,int64_t param_2)

{
  short *psVar1;
  int64_t lVar2;
  uint8_t uVar3;
  uint uVar4;
  uint uVar5;
  int64_t lVar6;
  byte bVar7;
  uint32_t uVar8;
  int iVar11;
  ushort uVar12;
  uint uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int iVar16;
  uint uVar17;
  int64_t arg1;
  int64_t *this_ptr;
  int iVar18;
  uint32_t uVar19;
  uint32_t uVar9;
  uint32_t uVar10;
  
  if (*(int *)((int64_t)this_ptr + 0xc4) < 1) {
    uVar14 = param_2 + 5;
    iVar11 = 0;
LAB_00f4bc90:
    uVar15 = uVar14;
    if (uVar14 < param_2 + 4U) goto LAB_00f4bcb7;
LAB_00f4bc9c:
    if (arg1 == 0) goto LAB_00f4bcb7;
    FUN_00f4b3c0(param_1,param_2);
  }
  else {
    if (*(int *)(*this_ptr + 0x58) == 2) {
      uVar9 = 0;
      uVar19 = 0;
      uVar10 = 0;
      uVar8 = 0;
      if ((((((((*(short *)((int64_t)this_ptr + 0xd4) == 0) && ((short)this_ptr[0x1b] == 0)) &&
              (*(short *)((int64_t)this_ptr + 0xdc) == 0)) &&
             ((uVar19 = uVar8, (short)this_ptr[0x1c] == 0 &&
              (*(short *)((int64_t)this_ptr + 0xe4) == 0)))) && ((short)this_ptr[0x1d] == 0)) &&
           (((*(short *)((int64_t)this_ptr + 0xec) == 0 &&
             (*(short *)((int64_t)this_ptr + 0x10c) == 0)) &&
            (((short)this_ptr[0x22] == 0 &&
             (((uVar19 = uVar9, *(short *)((int64_t)this_ptr + 0x114) == 0 &&
               ((short)this_ptr[0x23] == 0)) && (*(short *)((int64_t)this_ptr + 0x11c) == 0))))))
           )) && (((uVar19 = uVar10, (short)this_ptr[0x24] == 0 &&
                   (*(short *)((int64_t)this_ptr + 0x124) == 0)) &&
                  (((short)this_ptr[0x25] == 0 &&
                   (((*(short *)((int64_t)this_ptr + 300) == 0 && ((short)this_ptr[0x26] == 0))
                    && ((*(short *)((int64_t)this_ptr + 0x134) == 0 &&
                        ((((short)this_ptr[0x27] == 0 &&
                          (*(short *)((int64_t)this_ptr + 0x144) == 0)) &&
                         ((short)this_ptr[0x29] == 0)))))))))))) &&
         ((*(short *)((int64_t)this_ptr + 0x14c) == 0 &&
          (uVar19 = uVar8, (short)this_ptr[0x2a] == 0)))) {
        if (((short)this_ptr[0x1f] == 0) &&
           ((*(short *)((int64_t)this_ptr + 0xfc) == 0 && ((short)this_ptr[0x21] == 0)))) {
          lVar6 = 0;
          do {
            if ((((*(short *)((int64_t)this_ptr + lVar6 * 4 + 0x154) != 0) ||
                 (*(short *)((int64_t)this_ptr + lVar6 * 4 + 0x158) != 0)) ||
                (*(short *)((int64_t)this_ptr + lVar6 * 4 + 0x15c) != 0)) ||
               (*(short *)((int64_t)this_ptr + lVar6 * 4 + 0x160) != 0)) goto LAB_00f4c339;
            lVar6 = lVar6 + 4;
            uVar19 = 0;
          } while (lVar6 != 0xe0);
        }
        else {
LAB_00f4c339:
          uVar19 = 1;
        }
      }
      *(void*)(*this_ptr + 0x58) = uVar19;
    }
    FUN_00f4c390();
    FUN_00f4c390();
    lVar6 = this_ptr[0x16c];
    uVar12 = *(ushort *)((int64_t)this_ptr + 0xd6);
    uVar5 = (int)lVar6 + 1;
    *(void*)((int64_t)this_ptr + (int64_t)(int)uVar5 * 4 + 0xd6) = 0xffff;
    if (-1 < (int)lVar6) {
      uVar13 = 7;
      if (uVar12 == 0) {
        uVar13 = 0x8a;
      }
      iVar18 = 4 - (uint)(uVar12 == 0);
      uVar17 = 0xffffffff;
      uVar14 = 0;
      iVar11 = 0;
      do {
        uVar15 = (uint64_t)uVar12;
        uVar4 = (uint)uVar12;
        uVar12 = *(ushort *)((int64_t)this_ptr + uVar14 * 4 + 0xda);
        uVar14 = uVar14 + 1;
        iVar16 = iVar11 + 1;
        if (((int)uVar13 <= iVar16) || (uVar4 != uVar12)) {
          if (iVar16 < iVar18) {
            psVar1 = (short *)((int64_t)this_ptr + uVar15 * 4 + 0xabc);
            *psVar1 = *psVar1 + (short)iVar16;
          }
          else if (uVar4 == 0) {
            if (iVar11 < 10) {
              *(short *)(this_ptr + 0x160) = (short)this_ptr[0x160] + 1;
            }
            else {
              *(short *)((int64_t)this_ptr + 0xb04) = *(short *)((int64_t)this_ptr + 0xb04) + 1;
            }
          }
          else {
            if (uVar4 != uVar17) {
              psVar1 = (short *)((int64_t)this_ptr + uVar15 * 4 + 0xabc);
              *psVar1 = *psVar1 + 1;
            }
            *(short *)((int64_t)this_ptr + 0xafc) = *(short *)((int64_t)this_ptr + 0xafc) + 1;
          }
          uVar17 = uVar4;
          if (uVar12 == 0) {
            iVar18 = 3;
            uVar13 = 0x8a;
            iVar16 = 0;
          }
          else {
            iVar18 = 4 - (uint)(uVar4 == uVar12);
            uVar13 = uVar4 == uVar12 ^ 7;
            iVar16 = 0;
          }
        }
        iVar11 = iVar16;
      } while (uVar5 != uVar14);
    }
    lVar6 = this_ptr[0x16f];
    uVar12 = *(ushort *)((int64_t)this_ptr + 0x9ca);
    uVar5 = (int)lVar6 + 1;
    *(void*)((int64_t)this_ptr + (int64_t)(int)uVar5 * 4 + 0x9ca) = 0xffff;
    if (-1 < (int)lVar6) {
      uVar13 = 7;
      if (uVar12 == 0) {
        uVar13 = 0x8a;
      }
      iVar18 = 4 - (uint)(uVar12 == 0);
      uVar17 = 0xffffffff;
      uVar14 = 0;
      iVar11 = 0;
      do {
        uVar15 = (uint64_t)uVar12;
        uVar4 = (uint)uVar12;
        uVar12 = *(ushort *)((int64_t)this_ptr + uVar14 * 4 + 0x9ce);
        uVar14 = uVar14 + 1;
        iVar16 = iVar11 + 1;
        if (((int)uVar13 <= iVar16) || (uVar4 != uVar12)) {
          if (iVar16 < iVar18) {
            psVar1 = (short *)((int64_t)this_ptr + uVar15 * 4 + 0xabc);
            *psVar1 = *psVar1 + (short)iVar16;
          }
          else if (uVar4 == 0) {
            if (iVar11 < 10) {
              *(short *)(this_ptr + 0x160) = (short)this_ptr[0x160] + 1;
            }
            else {
              *(short *)((int64_t)this_ptr + 0xb04) = *(short *)((int64_t)this_ptr + 0xb04) + 1;
            }
          }
          else {
            if (uVar4 != uVar17) {
              psVar1 = (short *)((int64_t)this_ptr + uVar15 * 4 + 0xabc);
              *psVar1 = *psVar1 + 1;
            }
            *(short *)((int64_t)this_ptr + 0xafc) = *(short *)((int64_t)this_ptr + 0xafc) + 1;
          }
          uVar17 = uVar4;
          if (uVar12 == 0) {
            iVar16 = 0;
            iVar18 = 3;
            uVar13 = 0x8a;
          }
          else {
            iVar16 = 0;
            iVar18 = 4 - (uint)(uVar4 == uVar12);
            uVar13 = uVar4 == uVar12 ^ 7;
          }
        }
        iVar11 = iVar16;
      } while (uVar5 != uVar14);
    }
    FUN_00f4c390();
    iVar11 = 0x12;
    if ((((((*(short *)((int64_t)this_ptr + 0xafa) == 0) &&
           (iVar11 = 0x11, *(short *)((int64_t)this_ptr + 0xac2) == 0)) &&
          (iVar11 = 0x10, *(short *)((int64_t)this_ptr + 0xaf6) == 0)) &&
         (((iVar11 = 0xf, *(short *)((int64_t)this_ptr + 0xac6) == 0 &&
           (iVar11 = 0xe, *(short *)((int64_t)this_ptr + 0xaf2) == 0)) &&
          ((iVar11 = 0xd, *(short *)((int64_t)this_ptr + 0xaca) == 0 &&
           ((iVar11 = 0xc, *(short *)((int64_t)this_ptr + 0xaee) == 0 &&
            (iVar11 = 0xb, *(short *)((int64_t)this_ptr + 0xace) == 0)))))))) &&
        (iVar11 = 10, *(short *)((int64_t)this_ptr + 0xaea) == 0)) &&
       ((((iVar11 = 9, *(short *)((int64_t)this_ptr + 0xad2) == 0 &&
          (iVar11 = 8, *(short *)((int64_t)this_ptr + 0xae6) == 0)) &&
         (iVar11 = 7, *(short *)((int64_t)this_ptr + 0xad6) == 0)) &&
        (((iVar11 = 6, *(short *)((int64_t)this_ptr + 0xae2) == 0 &&
          (iVar11 = 5, *(short *)((int64_t)this_ptr + 0xada) == 0)) &&
         (iVar11 = 4, *(short *)((int64_t)this_ptr + 0xade) == 0)))))) {
      iVar11 = 3 - (uint)(*(short *)((int64_t)this_ptr + 0xabe) == 0);
    }
    lVar6 = this_ptr[0x2e3];
    this_ptr[0x2e3] = (uint64_t)(uint)(iVar11 * 3) + lVar6 + 0x11;
    uVar15 = lVar6 + (uint64_t)(uint)(iVar11 * 3) + 0x1b >> 3;
    uVar14 = this_ptr[0x2e4] + 10U >> 3;
    if ((uVar14 <= uVar15) || ((int)this_ptr[0x19] == 4)) goto LAB_00f4bc90;
    if (param_2 + 4U <= uVar15) goto LAB_00f4bc9c;
LAB_00f4bcb7:
    uVar5 = *(uint *)((int64_t)this_ptr + 0x1734);
    bVar7 = (byte)uVar5;
    if (uVar14 == uVar15) {
      uVar13 = param_1 + 2;
      if ((int)uVar5 < 0xe) {
        uVar14 = (uint64_t)uVar5;
        *(ushort *)(this_ptr + 0x2e6) =
             *(ushort *)(this_ptr + 0x2e6) | (ushort)(uVar13 << (bVar7 & 0x1f));
        iVar11 = uVar5 + 3;
      }
      else {
        uVar12 = (ushort)(uVar13 << (bVar7 & 0x1f)) | *(ushort *)(this_ptr + 0x2e6);
        *(ushort *)(this_ptr + 0x2e6) = uVar12;
        lVar6 = this_ptr[5];
        this_ptr[5] = lVar6 + 1;
        *(char *)(this_ptr[2] + lVar6) = (char)uVar12;
        lVar6 = this_ptr[2];
        lVar2 = this_ptr[5];
        this_ptr[5] = lVar2 + 1;
        *(void*)(lVar6 + lVar2) = *(void*)((int64_t)this_ptr + 0x1731);
        bVar7 = 0x10 - (char)*(int *)((int64_t)this_ptr + 0x1734);
        uVar14 = CONCAT71((int7)((uint64_t)lVar6 >> 8),bVar7);
        *(short *)(this_ptr + 0x2e6) = (short)((uVar13 & 0xffff) >> (bVar7 & 0x1f));
        iVar11 = *(int *)((int64_t)this_ptr + 0x1734) + -0xd;
      }
      *(int *)((int64_t)this_ptr + 0x1734) = iVar11;
      FUN_00f4cdf0(uVar14,&g_023e86e0);
    }
    else {
      uVar13 = param_1 + 4;
      if ((int)uVar5 < 0xe) {
        uVar13 = (uint)(ushort)((ushort)(uVar13 << (bVar7 & 0x1f)) | *(ushort *)(this_ptr + 0x2e6))
        ;
        iVar18 = uVar5 + 3;
      }
      else {
        uVar12 = (ushort)(uVar13 << (bVar7 & 0x1f)) | *(ushort *)(this_ptr + 0x2e6);
        *(ushort *)(this_ptr + 0x2e6) = uVar12;
        lVar6 = this_ptr[5];
        this_ptr[5] = lVar6 + 1;
        *(char *)(this_ptr[2] + lVar6) = (char)uVar12;
        lVar6 = this_ptr[5];
        this_ptr[5] = lVar6 + 1;
        *(void*)(this_ptr[2] + lVar6) = *(void*)((int64_t)this_ptr + 0x1731);
        uVar13 = (uVar13 & 0xffff) >> (0x10U - (char)*(int *)((int64_t)this_ptr + 0x1734) & 0x1f);
        iVar18 = *(int *)((int64_t)this_ptr + 0x1734) + -0xd;
      }
      *(int *)((int64_t)this_ptr + 0x1734) = iVar18;
      uVar5 = *(uint *)(this_ptr + 0x16f);
      uVar17 = (int)this_ptr[0x16c] + 0xff00;
      if (iVar18 < 0xc) {
        uVar13 = uVar13 | uVar17 << ((byte)iVar18 & 0x1f);
        iVar18 = iVar18 + 5;
      }
      else {
        uVar13 = uVar13 | uVar17 << ((byte)iVar18 & 0x1f);
        *(short *)(this_ptr + 0x2e6) = (short)uVar13;
        lVar6 = this_ptr[5];
        this_ptr[5] = lVar6 + 1;
        *(char *)(this_ptr[2] + lVar6) = (char)uVar13;
        lVar6 = this_ptr[5];
        this_ptr[5] = lVar6 + 1;
        *(void*)(this_ptr[2] + lVar6) = *(void*)((int64_t)this_ptr + 0x1731);
        uVar13 = (uVar17 & 0xffff) >> (0x10U - (char)*(int *)((int64_t)this_ptr + 0x1734) & 0x1f);
        iVar18 = *(int *)((int64_t)this_ptr + 0x1734) + -0xb;
      }
      *(int *)((int64_t)this_ptr + 0x1734) = iVar18;
      if (iVar18 < 0xc) {
        uVar13 = uVar13 | uVar5 + 0x10000 << ((byte)iVar18 & 0x1f);
        iVar18 = iVar18 + 5;
      }
      else {
        uVar13 = uVar13 | uVar5 + 0x10000 << ((byte)iVar18 & 0x1f);
        *(short *)(this_ptr + 0x2e6) = (short)uVar13;
        lVar6 = this_ptr[5];
        this_ptr[5] = lVar6 + 1;
        *(char *)(this_ptr[2] + lVar6) = (char)uVar13;
        lVar6 = this_ptr[5];
        this_ptr[5] = lVar6 + 1;
        *(void*)(this_ptr[2] + lVar6) = *(void*)((int64_t)this_ptr + 0x1731);
        uVar13 = (uVar5 & 0xffff) >> (0x10U - (char)*(int *)((int64_t)this_ptr + 0x1734) & 0x1f);
        iVar18 = *(int *)((int64_t)this_ptr + 0x1734) + -0xb;
      }
      *(int *)((int64_t)this_ptr + 0x1734) = iVar18;
      uVar17 = iVar11 + 0xfffd;
      if (iVar18 < 0xd) {
        uVar13 = uVar13 | uVar17 << ((byte)iVar18 & 0x1f);
        iVar18 = iVar18 + 4;
      }
      else {
        uVar13 = uVar13 | uVar17 << ((byte)iVar18 & 0x1f);
        *(short *)(this_ptr + 0x2e6) = (short)uVar13;
        lVar6 = this_ptr[5];
        this_ptr[5] = lVar6 + 1;
        *(char *)(this_ptr[2] + lVar6) = (char)uVar13;
        lVar6 = this_ptr[5];
        this_ptr[5] = lVar6 + 1;
        *(void*)(this_ptr[2] + lVar6) = *(void*)((int64_t)this_ptr + 0x1731);
        uVar13 = (uVar17 & 0xffff) >> (0x10U - (char)*(int *)((int64_t)this_ptr + 0x1734) & 0x1f);
        iVar18 = *(int *)((int64_t)this_ptr + 0x1734) + -0xc;
      }
      *(int *)((int64_t)this_ptr + 0x1734) = iVar18;
      uVar14 = 0;
      do {
        while( true ) {
          uVar12 = *(ushort *)
                    ((int64_t)this_ptr + (uint64_t)(byte)(&g_023e88b0)[uVar14] * 4 + 0xabe);
          uVar13 = uVar13 | (uint)uVar12 << ((byte)iVar18 & 0x1f);
          *(short *)(this_ptr + 0x2e6) = (short)uVar13;
          if (iVar18 < 0xe) break;
          lVar6 = this_ptr[5];
          this_ptr[5] = lVar6 + 1;
          *(char *)(this_ptr[2] + lVar6) = (char)uVar13;
          lVar6 = this_ptr[5];
          this_ptr[5] = lVar6 + 1;
          *(void*)(this_ptr[2] + lVar6) = *(void*)((int64_t)this_ptr + 0x1731);
          uVar12 = uVar12 >> (0x10U - (char)*(int *)((int64_t)this_ptr + 0x1734) & 0x1f);
          *(ushort *)(this_ptr + 0x2e6) = uVar12;
          iVar18 = *(int *)((int64_t)this_ptr + 0x1734) + -0xd;
          uVar13 = (uint)uVar12;
          *(int *)((int64_t)this_ptr + 0x1734) = iVar18;
          uVar14 = uVar14 + 1;
          if (iVar11 + 1 == uVar14) goto LAB_00f4c01f;
        }
        iVar18 = iVar18 + 3;
        *(int *)((int64_t)this_ptr + 0x1734) = iVar18;
        uVar14 = uVar14 + 1;
      } while (iVar11 + 1 != uVar14);
LAB_00f4c01f:
      uVar19 = FUN_00f4d250();
      uVar19 = FUN_00f4d250(uVar19,uVar5);
      FUN_00f4cdf0(uVar19,this_ptr + 0x139);
    }
  }
  lVar6 = 0x36;
  do {
    *(void*)((int64_t)this_ptr + lVar6 * 4 + -4) = 0;
    *(void*)((int64_t)this_ptr + lVar6 * 4) = 0;
    lVar6 = lVar6 + 2;
  } while (lVar6 != 0x154);
  *(void*)(this_ptr + 0x139) = 0;
  *(void*)((int64_t)this_ptr + 0x9cc) = 0;
  *(void*)(this_ptr + 0x13a) = 0;
  *(void*)((int64_t)this_ptr + 0x9d4) = 0;
  *(void*)(this_ptr + 0x13b) = 0;
  *(void*)((int64_t)this_ptr + 0x9dc) = 0;
  *(void*)(this_ptr + 0x13c) = 0;
  *(void*)((int64_t)this_ptr + 0x9e4) = 0;
  *(void*)(this_ptr + 0x13d) = 0;
  *(void*)((int64_t)this_ptr + 0x9ec) = 0;
  *(void*)(this_ptr + 0x13e) = 0;
  *(void*)((int64_t)this_ptr + 0x9f4) = 0;
  *(void*)(this_ptr + 0x13f) = 0;
  *(void*)((int64_t)this_ptr + 0x9fc) = 0;
  *(void*)(this_ptr + 0x140) = 0;
  *(void*)((int64_t)this_ptr + 0xa04) = 0;
  *(void*)(this_ptr + 0x141) = 0;
  *(void*)((int64_t)this_ptr + 0xa0c) = 0;
  *(void*)(this_ptr + 0x142) = 0;
  *(void*)((int64_t)this_ptr + 0xa14) = 0;
  *(void*)(this_ptr + 0x143) = 0;
  *(void*)((int64_t)this_ptr + 0xa1c) = 0;
  *(void*)(this_ptr + 0x144) = 0;
  *(void*)((int64_t)this_ptr + 0xa24) = 0;
  *(void*)(this_ptr + 0x145) = 0;
  *(void*)((int64_t)this_ptr + 0xa2c) = 0;
  *(void*)(this_ptr + 0x146) = 0;
  *(void*)((int64_t)this_ptr + 0xa34) = 0;
  *(void*)(this_ptr + 0x147) = 0;
  *(void*)((int64_t)this_ptr + 0xa3c) = 0;
  *(void*)((int64_t)this_ptr + 0xabc) = 0;
  *(void*)(this_ptr + 0x158) = 0;
  *(void*)((int64_t)this_ptr + 0xac4) = 0;
  *(void*)(this_ptr + 0x159) = 0;
  *(void*)((int64_t)this_ptr + 0xacc) = 0;
  *(void*)(this_ptr + 0x15a) = 0;
  *(void*)((int64_t)this_ptr + 0xad4) = 0;
  *(void*)(this_ptr + 0x15b) = 0;
  *(void*)((int64_t)this_ptr + 0xadc) = 0;
  *(void*)(this_ptr + 0x15c) = 0;
  *(void*)((int64_t)this_ptr + 0xae4) = 0;
  *(void*)(this_ptr + 0x15d) = 0;
  *(void*)((int64_t)this_ptr + 0xaec) = 0;
  *(void*)(this_ptr + 0x15e) = 0;
  *(void*)((int64_t)this_ptr + 0xaf4) = 0;
  *(void*)(this_ptr + 0x15f) = 0;
  *(void*)((int64_t)this_ptr + 0xafc) = 0;
  *(void*)(this_ptr + 0x160) = 0;
  *(void*)((int64_t)this_ptr + 0xb04) = 0;
  *(void*)((int64_t)this_ptr + 0x4d4) = 1;
  *(void*)((int64_t)this_ptr + 0x170c) = 0;
  this_ptr[0x2e3] = 0;
  this_ptr[0x2e4] = 0;
  *(void*)(this_ptr + 0x2e5) = 0;
  if (param_1 == 0) {
    return;
  }
  if (*(int *)((int64_t)this_ptr + 0x1734) < 9) {
    if (*(int *)((int64_t)this_ptr + 0x1734) < 1) goto LAB_00f4c2e2;
    uVar3 = (uint8_t)this_ptr[0x2e6];
  }
  else {
    lVar6 = this_ptr[5];
    this_ptr[5] = lVar6 + 1;
    *(char *)(this_ptr[2] + lVar6) = (char)this_ptr[0x2e6];
    uVar3 = *(void*)((int64_t)this_ptr + 0x1731);
  }
  lVar6 = this_ptr[5];
  this_ptr[5] = lVar6 + 1;
  *(void*)(this_ptr[2] + lVar6) = uVar3;
LAB_00f4c2e2:
  *(void*)(this_ptr + 0x2e6) = 0;
  *(void*)((int64_t)this_ptr + 0x1734) = 0;
  return;
}

