// Function: FUN_00f46160
// Address: 00f46160
// Size: 1923 bytes
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


int FUN_00f46160(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t *plVar1;
  short *psVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  void *pvVar12;
  uint uVar13;
  int iVar14;
  uint64_t uVar15;
  int unaff_ESI;
  int64_t *this_ptr;
  size_t sVar16;
  void *pvVar17;
  bool bVar18;
  
LAB_00f4619d:
  do {
    if (*(uint *)((int64_t)this_ptr + 0xb4) < 0x106) {
      FUN_00f439b0();
      sVar16 = (size_t)param_3;
      uVar9 = *(uint *)((int64_t)this_ptr + 0xb4);
      if ((uVar9 < 0x106) && (unaff_ESI == 0)) {
        return 0;
      }
      if (uVar9 == 0) {
        if ((int)this_ptr[0x15] != 0) {
          bVar10 = *(byte *)(this_ptr[0xc] + (uint64_t)(*(int *)((int64_t)this_ptr + 0xac) - 1))
          ;
          uVar9 = *(uint *)((int64_t)this_ptr + 0x170c);
          *(uint *)((int64_t)this_ptr + 0x170c) = uVar9 + 1;
          *(void*)(this_ptr[0x2e0] + (uint64_t)uVar9) = 0;
          uVar9 = *(uint *)((int64_t)this_ptr + 0x170c);
          *(uint *)((int64_t)this_ptr + 0x170c) = uVar9 + 1;
          *(void*)(this_ptr[0x2e0] + (uint64_t)uVar9) = 0;
          uVar9 = *(uint *)((int64_t)this_ptr + 0x170c);
          *(uint *)((int64_t)this_ptr + 0x170c) = uVar9 + 1;
          *(byte *)(this_ptr[0x2e0] + (uint64_t)uVar9) = bVar10;
          psVar2 = (short *)((int64_t)this_ptr + (uint64_t)bVar10 * 4 + 0xd4);
          *psVar2 = *psVar2 + 1;
          *(void*)(this_ptr + 0x15) = 0;
        }
        uVar15 = (uint64_t)*(uint *)((int64_t)this_ptr + 0xac);
        uVar9 = 2;
        if (uVar15 < 2) {
          uVar9 = *(uint *)((int64_t)this_ptr + 0xac);
        }
        *(uint *)((int64_t)this_ptr + 0x172c) = uVar9;
        if (unaff_ESI == 4) {
          pvVar12 = (void *)((int64_t)&MACH_HEADER.magic + 1);
          FUN_00f4b740(1,uVar15 - this_ptr[0x13]);
          this_ptr[0x13] = (uint64_t)*(uint *)((int64_t)this_ptr + 0xac);
          lVar6 = *this_ptr;
          lVar7 = *(int64_t *)(lVar6 + 0x38);
          FUN_00f4b540();
          uVar9 = *(uint *)(lVar7 + 0x28);
          if (*(uint *)(lVar6 + 0x20) < *(uint *)(lVar7 + 0x28)) {
            uVar9 = *(uint *)(lVar6 + 0x20);
          }
          if (uVar9 != 0) {
            pvVar17 = (void *)(uint64_t)uVar9;
            _memcpy(pvVar12,pvVar17,sVar16);
            *(int64_t *)(lVar6 + 0x18) = *(int64_t *)(lVar6 + 0x18) + (int64_t)pvVar17;
            *(int64_t *)(lVar7 + 0x20) = *(int64_t *)(lVar7 + 0x20) + (int64_t)pvVar17;
            *(int64_t *)(lVar6 + 0x28) = *(int64_t *)(lVar6 + 0x28) + (int64_t)pvVar17;
            *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) - uVar9;
            plVar1 = (int64_t *)(lVar7 + 0x28);
            *plVar1 = *plVar1 - (int64_t)pvVar17;
            if (*plVar1 == 0) {
              *(void*)(lVar7 + 0x20) = *(void*)(lVar7 + 0x10);
            }
          }
          return 3 - (uint)(*(int *)(*this_ptr + 0x20) == 0);
        }
        if (*(int *)((int64_t)this_ptr + 0x170c) != 0) {
          pvVar12 = (void *)0x0;
          FUN_00f4b740(0,uVar15 - this_ptr[0x13]);
          this_ptr[0x13] = (uint64_t)*(uint *)((int64_t)this_ptr + 0xac);
          lVar6 = *this_ptr;
          lVar7 = *(int64_t *)(lVar6 + 0x38);
          FUN_00f4b540();
          uVar9 = *(uint *)(lVar7 + 0x28);
          if (*(uint *)(lVar6 + 0x20) < *(uint *)(lVar7 + 0x28)) {
            uVar9 = *(uint *)(lVar6 + 0x20);
          }
          if (uVar9 != 0) {
            pvVar17 = (void *)(uint64_t)uVar9;
            _memcpy(pvVar12,pvVar17,sVar16);
            *(int64_t *)(lVar6 + 0x18) = *(int64_t *)(lVar6 + 0x18) + (int64_t)pvVar17;
            *(int64_t *)(lVar7 + 0x20) = *(int64_t *)(lVar7 + 0x20) + (int64_t)pvVar17;
            *(int64_t *)(lVar6 + 0x28) = *(int64_t *)(lVar6 + 0x28) + (int64_t)pvVar17;
            *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) - uVar9;
            plVar1 = (int64_t *)(lVar7 + 0x28);
            *plVar1 = *plVar1 - (int64_t)pvVar17;
            if (*plVar1 == 0) {
              *(void*)(lVar7 + 0x20) = *(void*)(lVar7 + 0x10);
            }
          }
          if (*(int *)(*this_ptr + 0x20) == 0) {
            return 0;
          }
        }
        return 1;
      }
      if (2 < uVar9) goto LAB_00f461db;
      uVar9 = *(uint *)(this_ptr + 0x14);
      *(uint *)(this_ptr + 0x17) = uVar9;
      *(int *)((int64_t)this_ptr + 0xa4) = (int)this_ptr[0x16];
      *(void*)(this_ptr + 0x14) = 2;
LAB_00f462ec:
      uVar13 = 2;
      if (uVar9 < 3) goto LAB_00f464b0;
LAB_00f46330:
      if (uVar9 < uVar13) goto LAB_00f464b0;
      uVar13 = *(uint *)((int64_t)this_ptr + 0xa4);
      iVar4 = *(int *)((int64_t)this_ptr + 0xac);
      iVar5 = *(int *)((int64_t)this_ptr + 0xb4);
      bVar10 = (char)uVar9 - 3;
      iVar14 = iVar4 + ~uVar13;
      uVar9 = *(uint *)((int64_t)this_ptr + 0x170c);
      *(uint *)((int64_t)this_ptr + 0x170c) = uVar9 + 1;
      *(char *)(this_ptr[0x2e0] + (uint64_t)uVar9) = (char)iVar14;
      uVar9 = *(uint *)((int64_t)this_ptr + 0x170c);
      *(uint *)((int64_t)this_ptr + 0x170c) = uVar9 + 1;
      *(char *)(this_ptr[0x2e0] + (uint64_t)uVar9) = (char)((uint)iVar14 >> 8);
      uVar9 = *(uint *)((int64_t)this_ptr + 0x170c);
      *(uint *)((int64_t)this_ptr + 0x170c) = uVar9 + 1;
      *(byte *)(this_ptr[0x2e0] + (uint64_t)uVar9) = bVar10;
      psVar2 = (short *)((int64_t)this_ptr + (uint64_t)(byte)(&g_023e8160)[bVar10] * 4 + 0x4d8)
      ;
      *psVar2 = *psVar2 + 1;
      uVar13 = (~uVar13 + iVar4) - 1 & 0xffff;
      uVar9 = (uVar13 >> 7) + 0x100;
      if (uVar13 < 0x100) {
        uVar9 = uVar13;
      }
      psVar2 = (short *)((int64_t)this_ptr + (uint64_t)(byte)(&g_023e7f60)[uVar9] * 4 + 0x9c8);
      *psVar2 = *psVar2 + 1;
      uVar9 = *(uint *)((int64_t)this_ptr + 0x170c);
      param_3 = (uint64_t)uVar9;
      uVar13 = *(uint *)(this_ptr + 0x2e2);
      iVar14 = (int)this_ptr[0x17];
      *(int *)((int64_t)this_ptr + 0xb4) = (*(int *)((int64_t)this_ptr + 0xb4) - iVar14) + 1;
      *(int *)(this_ptr + 0x17) = iVar14 + -2;
      iVar14 = iVar14 + -3;
      uVar8 = *(int *)((int64_t)this_ptr + 0xac) + 1;
      do {
        *(uint *)((int64_t)this_ptr + 0xac) = uVar8;
        if (uVar8 <= (iVar4 + iVar5) - 3U) {
          uVar11 = ((uint)*(byte *)(this_ptr[0xc] + (uint64_t)(uVar8 + 2)) ^
                   (int)this_ptr[0x10] << (*(byte *)(this_ptr + 0x12) & 0x1f)) &
                   *(uint *)((int64_t)this_ptr + 0x8c);
          *(uint *)(this_ptr + 0x10) = uVar11;
          lVar6 = this_ptr[0xf];
          *(void*)(this_ptr[0xe] + (uint64_t)(*(uint *)(this_ptr + 0xb) & uVar8) * 2) =
               *(void*)(lVar6 + (uint64_t)uVar11 * 2);
          *(short *)(lVar6 + (uint64_t)uVar11 * 2) = (short)uVar8;
        }
        *(int *)(this_ptr + 0x17) = iVar14;
        uVar8 = uVar8 + 1;
        bVar18 = iVar14 != 0;
        iVar14 = iVar14 + -1;
      } while (bVar18);
      *(void*)(this_ptr + 0x15) = 0;
      *(void*)(this_ptr + 0x14) = 2;
      *(uint *)((int64_t)this_ptr + 0xac) = uVar8;
      if (uVar9 != uVar13) goto LAB_00f4619d;
      pvVar12 = (void *)0x0;
      FUN_00f4b740(0,(uint64_t)uVar8 - this_ptr[0x13]);
      this_ptr[0x13] = (uint64_t)*(uint *)((int64_t)this_ptr + 0xac);
      lVar6 = *this_ptr;
      lVar7 = *(int64_t *)(lVar6 + 0x38);
      FUN_00f4b540();
      uVar9 = *(uint *)(lVar7 + 0x28);
      if (*(uint *)(lVar6 + 0x20) < *(uint *)(lVar7 + 0x28)) {
        uVar9 = *(uint *)(lVar6 + 0x20);
      }
      pvVar17 = (void *)(uint64_t)uVar9;
      if (uVar9 == 0) {
LAB_00f46630:
        iVar4 = *(int *)(*this_ptr + 0x20);
      }
      else {
        _memcpy(pvVar12,pvVar17,(size_t)param_3);
        *(int64_t *)(lVar6 + 0x18) = *(int64_t *)(lVar6 + 0x18) + (int64_t)pvVar17;
        *(int64_t *)(lVar7 + 0x20) = *(int64_t *)(lVar7 + 0x20) + (int64_t)pvVar17;
        *(int64_t *)(lVar6 + 0x28) = *(int64_t *)(lVar6 + 0x28) + (int64_t)pvVar17;
        *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) - uVar9;
        plVar1 = (int64_t *)(lVar7 + 0x28);
        *plVar1 = *plVar1 - (int64_t)pvVar17;
        if (*plVar1 != 0) goto LAB_00f46630;
        *(void*)(lVar7 + 0x20) = *(void*)(lVar7 + 0x10);
        iVar4 = *(int *)(*this_ptr + 0x20);
      }
    }
    else {
LAB_00f461db:
      uVar9 = *(uint *)((int64_t)this_ptr + 0xac);
      param_3 = this_ptr[0xe];
      uVar13 = ((uint)*(byte *)(this_ptr[0xc] + (uint64_t)(uVar9 + 2)) ^
               (int)this_ptr[0x10] << (*(byte *)(this_ptr + 0x12) & 0x1f)) &
               *(uint *)((int64_t)this_ptr + 0x8c);
      *(uint *)(this_ptr + 0x10) = uVar13;
      lVar6 = this_ptr[0xf];
      uVar3 = *(ushort *)(lVar6 + (uint64_t)uVar13 * 2);
      *(ushort *)(param_3 + (uint64_t)(*(uint *)(this_ptr + 0xb) & uVar9) * 2) = uVar3;
      *(short *)(lVar6 + (uint64_t)uVar13 * 2) = (short)uVar9;
      uVar9 = *(uint *)(this_ptr + 0x14);
      *(uint *)(this_ptr + 0x17) = uVar9;
      *(int *)((int64_t)this_ptr + 0xa4) = (int)this_ptr[0x16];
      *(void*)(this_ptr + 0x14) = 2;
      uVar13 = 2;
      if (uVar3 == 0) goto LAB_00f462ec;
      if ((uVar9 < *(uint *)(this_ptr + 0x18)) &&
         (*(int *)((int64_t)this_ptr + 0xac) - (uint)uVar3 <= (int)this_ptr[10] - 0x106U)) {
        uVar13 = FUN_00f46910();
        *(uint *)(this_ptr + 0x14) = uVar13;
        if ((uVar13 < 6) &&
           (((int)this_ptr[0x19] == 1 ||
            ((uVar13 == 3 &&
             (uVar13 = 3,
             0x1000 < (uint)(*(int *)((int64_t)this_ptr + 0xac) - (int)this_ptr[0x16]))))))) {
          *(void*)(this_ptr + 0x14) = 2;
          uVar13 = 2;
        }
      }
      uVar9 = *(uint *)(this_ptr + 0x17);
      if (2 < uVar9) goto LAB_00f46330;
LAB_00f464b0:
      if ((int)this_ptr[0x15] == 0) {
        *(void*)(this_ptr + 0x15) = 1;
        *(int *)((int64_t)this_ptr + 0xac) = *(int *)((int64_t)this_ptr + 0xac) + 1;
        *(int *)((int64_t)this_ptr + 0xb4) = *(int *)((int64_t)this_ptr + 0xb4) + -1;
        goto LAB_00f4619d;
      }
      bVar10 = *(byte *)(this_ptr[0xc] + (uint64_t)(*(int *)((int64_t)this_ptr + 0xac) - 1));
      uVar9 = *(uint *)((int64_t)this_ptr + 0x170c);
      *(uint *)((int64_t)this_ptr + 0x170c) = uVar9 + 1;
      *(void*)(this_ptr[0x2e0] + (uint64_t)uVar9) = 0;
      uVar9 = *(uint *)((int64_t)this_ptr + 0x170c);
      *(uint *)((int64_t)this_ptr + 0x170c) = uVar9 + 1;
      *(void*)(this_ptr[0x2e0] + (uint64_t)uVar9) = 0;
      uVar9 = *(uint *)((int64_t)this_ptr + 0x170c);
      *(uint *)((int64_t)this_ptr + 0x170c) = uVar9 + 1;
      *(byte *)(this_ptr[0x2e0] + (uint64_t)uVar9) = bVar10;
      psVar2 = (short *)((int64_t)this_ptr + (uint64_t)bVar10 * 4 + 0xd4);
      *psVar2 = *psVar2 + 1;
      if (*(int *)((int64_t)this_ptr + 0x170c) == (int)this_ptr[0x2e2]) {
        pvVar12 = (void *)0x0;
        FUN_00f4b740(0,(uint64_t)*(uint *)((int64_t)this_ptr + 0xac) - this_ptr[0x13]);
        this_ptr[0x13] = (uint64_t)*(uint *)((int64_t)this_ptr + 0xac);
        lVar6 = *this_ptr;
        lVar7 = *(int64_t *)(lVar6 + 0x38);
        FUN_00f4b540();
        uVar9 = *(uint *)(lVar7 + 0x28);
        if (*(uint *)(lVar6 + 0x20) < *(uint *)(lVar7 + 0x28)) {
          uVar9 = *(uint *)(lVar6 + 0x20);
        }
        pvVar17 = (void *)(uint64_t)uVar9;
        if (uVar9 != 0) {
          _memcpy(pvVar12,pvVar17,(size_t)param_3);
          *(int64_t *)(lVar6 + 0x18) = *(int64_t *)(lVar6 + 0x18) + (int64_t)pvVar17;
          *(int64_t *)(lVar7 + 0x20) = *(int64_t *)(lVar7 + 0x20) + (int64_t)pvVar17;
          *(int64_t *)(lVar6 + 0x28) = *(int64_t *)(lVar6 + 0x28) + (int64_t)pvVar17;
          *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) - uVar9;
          plVar1 = (int64_t *)(lVar7 + 0x28);
          *plVar1 = *plVar1 - (int64_t)pvVar17;
          if (*plVar1 == 0) {
            *(void*)(lVar7 + 0x20) = *(void*)(lVar7 + 0x10);
          }
        }
      }
      *(int *)((int64_t)this_ptr + 0xac) = *(int *)((int64_t)this_ptr + 0xac) + 1;
      *(int *)((int64_t)this_ptr + 0xb4) = *(int *)((int64_t)this_ptr + 0xb4) + -1;
      iVar4 = *(int *)(*this_ptr + 0x20);
    }
    if (iVar4 == 0) {
      return 0;
    }
  } while( true );
}

