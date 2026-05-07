// Function: FUN_00f45bb0
// Address: 00f45bb0
// Size: 1427 bytes
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


int FUN_00f45bb0(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t *plVar1;
  short *psVar2;
  ushort uVar3;
  uint uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint64_t uVar13;
  uint uVar14;
  int iVar15;
  void *pvVar16;
  int unaff_ESI;
  uint uVar17;
  uint64_t uVar18;
  int64_t *this_ptr;
  size_t sVar19;
  void *pvVar20;
  bool bVar21;
  
LAB_00f45bde:
  do {
    if (*(uint *)((int64_t)this_ptr + 0xb4) < 0x106) {
      FUN_00f439b0();
      sVar19 = (size_t)param_3;
      uVar12 = *(uint *)((int64_t)this_ptr + 0xb4);
      if ((uVar12 < 0x106) && (unaff_ESI == 0)) {
        return 0;
      }
      if (uVar12 == 0) {
        uVar13 = (uint64_t)*(uint *)((int64_t)this_ptr + 0xac);
        uVar12 = 2;
        if (uVar13 < 2) {
          uVar12 = *(uint *)((int64_t)this_ptr + 0xac);
        }
        *(uint *)((int64_t)this_ptr + 0x172c) = uVar12;
        if (unaff_ESI == 4) {
          pvVar16 = (void *)((int64_t)&MACH_HEADER.magic + 1);
          FUN_00f4b740(1,uVar13 - this_ptr[0x13]);
          this_ptr[0x13] = (uint64_t)*(uint *)((int64_t)this_ptr + 0xac);
          lVar5 = *this_ptr;
          lVar6 = *(int64_t *)(lVar5 + 0x38);
          FUN_00f4b540();
          uVar12 = *(uint *)(lVar6 + 0x28);
          if (*(uint *)(lVar5 + 0x20) < *(uint *)(lVar6 + 0x28)) {
            uVar12 = *(uint *)(lVar5 + 0x20);
          }
          if (uVar12 != 0) {
            pvVar20 = (void *)(uint64_t)uVar12;
            _memcpy(pvVar16,pvVar20,sVar19);
            *(int64_t *)(lVar5 + 0x18) = *(int64_t *)(lVar5 + 0x18) + (int64_t)pvVar20;
            *(int64_t *)(lVar6 + 0x20) = *(int64_t *)(lVar6 + 0x20) + (int64_t)pvVar20;
            *(int64_t *)(lVar5 + 0x28) = *(int64_t *)(lVar5 + 0x28) + (int64_t)pvVar20;
            *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) - uVar12;
            plVar1 = (int64_t *)(lVar6 + 0x28);
            *plVar1 = *plVar1 - (int64_t)pvVar20;
            if (*plVar1 == 0) {
              *(void*)(lVar6 + 0x20) = *(void*)(lVar6 + 0x10);
            }
          }
          return 3 - (uint)(*(int *)(*this_ptr + 0x20) == 0);
        }
        if (*(int *)((int64_t)this_ptr + 0x170c) != 0) {
          pvVar16 = (void *)0x0;
          FUN_00f4b740(0,uVar13 - this_ptr[0x13]);
          this_ptr[0x13] = (uint64_t)*(uint *)((int64_t)this_ptr + 0xac);
          lVar5 = *this_ptr;
          lVar6 = *(int64_t *)(lVar5 + 0x38);
          FUN_00f4b540();
          uVar12 = *(uint *)(lVar6 + 0x28);
          if (*(uint *)(lVar5 + 0x20) < *(uint *)(lVar6 + 0x28)) {
            uVar12 = *(uint *)(lVar5 + 0x20);
          }
          if (uVar12 != 0) {
            pvVar20 = (void *)(uint64_t)uVar12;
            _memcpy(pvVar16,pvVar20,sVar19);
            *(int64_t *)(lVar5 + 0x18) = *(int64_t *)(lVar5 + 0x18) + (int64_t)pvVar20;
            *(int64_t *)(lVar6 + 0x20) = *(int64_t *)(lVar6 + 0x20) + (int64_t)pvVar20;
            *(int64_t *)(lVar5 + 0x28) = *(int64_t *)(lVar5 + 0x28) + (int64_t)pvVar20;
            *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) - uVar12;
            plVar1 = (int64_t *)(lVar6 + 0x28);
            *plVar1 = *plVar1 - (int64_t)pvVar20;
            if (*plVar1 == 0) {
              *(void*)(lVar6 + 0x20) = *(void*)(lVar6 + 0x10);
            }
          }
          if (*(int *)(*this_ptr + 0x20) == 0) {
            return 0;
          }
        }
        return 1;
      }
      if (2 < uVar12) goto LAB_00f45c18;
LAB_00f45c7e:
      uVar12 = *(uint *)(this_ptr + 0x14);
      if (2 < uVar12) goto LAB_00f45c8e;
LAB_00f45e88:
      bVar9 = *(byte *)(this_ptr[0xc] + (uint64_t)*(uint *)((int64_t)this_ptr + 0xac));
      uVar12 = *(uint *)((int64_t)this_ptr + 0x170c);
      *(uint *)((int64_t)this_ptr + 0x170c) = uVar12 + 1;
      *(void*)(this_ptr[0x2e0] + (uint64_t)uVar12) = 0;
      uVar12 = *(uint *)((int64_t)this_ptr + 0x170c);
      *(uint *)((int64_t)this_ptr + 0x170c) = uVar12 + 1;
      *(void*)(this_ptr[0x2e0] + (uint64_t)uVar12) = 0;
      uVar12 = *(uint *)((int64_t)this_ptr + 0x170c);
      *(uint *)((int64_t)this_ptr + 0x170c) = uVar12 + 1;
      *(byte *)(this_ptr[0x2e0] + (uint64_t)uVar12) = bVar9;
      psVar2 = (short *)((int64_t)this_ptr + (uint64_t)bVar9 * 4 + 0xd4);
      *psVar2 = *psVar2 + 1;
      *(int *)((int64_t)this_ptr + 0xb4) = *(int *)((int64_t)this_ptr + 0xb4) + -1;
      uVar12 = *(int *)((int64_t)this_ptr + 0xac) + 1;
      uVar13 = (uint64_t)uVar12;
      *(uint *)((int64_t)this_ptr + 0xac) = uVar12;
      if (*(int *)((int64_t)this_ptr + 0x170c) != (int)this_ptr[0x2e2]) goto LAB_00f45bde;
    }
    else {
LAB_00f45c18:
      uVar12 = *(uint *)((int64_t)this_ptr + 0xac);
      param_3 = this_ptr[0xe];
      uVar14 = ((uint)*(byte *)(this_ptr[0xc] + (uint64_t)(uVar12 + 2)) ^
               (int)this_ptr[0x10] << (*(byte *)(this_ptr + 0x12) & 0x1f)) &
               *(uint *)((int64_t)this_ptr + 0x8c);
      *(uint *)(this_ptr + 0x10) = uVar14;
      lVar5 = this_ptr[0xf];
      uVar3 = *(ushort *)(lVar5 + (uint64_t)uVar14 * 2);
      *(ushort *)(param_3 + (uint64_t)(*(uint *)(this_ptr + 0xb) & uVar12) * 2) = uVar3;
      *(short *)(lVar5 + (uint64_t)uVar14 * 2) = (short)uVar12;
      if ((uVar3 == 0) || ((int)this_ptr[10] - 0x106U < uVar12 - uVar3)) goto LAB_00f45c7e;
      uVar12 = FUN_00f46910();
      *(uint *)(this_ptr + 0x14) = uVar12;
      if (uVar12 < 3) goto LAB_00f45e88;
LAB_00f45c8e:
      bVar9 = (char)uVar12 - 3;
      iVar15 = *(int *)((int64_t)this_ptr + 0xac) - (int)this_ptr[0x16];
      uVar12 = *(uint *)((int64_t)this_ptr + 0x170c);
      *(uint *)((int64_t)this_ptr + 0x170c) = uVar12 + 1;
      *(char *)(this_ptr[0x2e0] + (uint64_t)uVar12) = (char)iVar15;
      uVar12 = *(uint *)((int64_t)this_ptr + 0x170c);
      *(uint *)((int64_t)this_ptr + 0x170c) = uVar12 + 1;
      *(char *)(this_ptr[0x2e0] + (uint64_t)uVar12) = (char)((uint)iVar15 >> 8);
      uVar12 = *(uint *)((int64_t)this_ptr + 0x170c);
      *(uint *)((int64_t)this_ptr + 0x170c) = uVar12 + 1;
      *(byte *)(this_ptr[0x2e0] + (uint64_t)uVar12) = bVar9;
      psVar2 = (short *)((int64_t)this_ptr + (uint64_t)(byte)(&g_023e8160)[bVar9] * 4 + 0x4d8);
      *psVar2 = *psVar2 + 1;
      uVar14 = iVar15 - 1U & 0xffff;
      uVar12 = (uVar14 >> 7) + 0x100;
      if (uVar14 < 0x100) {
        uVar12 = uVar14;
      }
      psVar2 = (short *)((int64_t)this_ptr + (uint64_t)(byte)(&g_023e7f60)[uVar12] * 4 + 0x9c8)
      ;
      *psVar2 = *psVar2 + 1;
      uVar12 = *(uint *)((int64_t)this_ptr + 0x170c);
      param_3 = (uint64_t)uVar12;
      uVar14 = *(uint *)(this_ptr + 0x2e2);
      uVar11 = *(uint *)(this_ptr + 0x14);
      uVar10 = *(int *)((int64_t)this_ptr + 0xb4) - uVar11;
      *(uint *)((int64_t)this_ptr + 0xb4) = uVar10;
      if ((*(uint *)(this_ptr + 0x18) < uVar11) || (uVar10 < 3)) {
        iVar15 = *(int *)((int64_t)this_ptr + 0xac);
        uVar10 = iVar15 + uVar11;
        uVar13 = (uint64_t)uVar10;
        *(uint *)((int64_t)this_ptr + 0xac) = uVar10;
        *(void*)(this_ptr + 0x14) = 0;
        uVar10 = (uint)*(byte *)(this_ptr[0xc] + uVar13);
        *(uint *)(this_ptr + 0x10) = uVar10;
        *(uint *)(this_ptr + 0x10) =
             ((uint)*(byte *)(this_ptr[0xc] + (uint64_t)(iVar15 + uVar11 + 1)) ^
             uVar10 << (*(byte *)(this_ptr + 0x12) & 0x1f)) & *(uint *)((int64_t)this_ptr + 0x8c)
        ;
      }
      else {
        *(uint *)(this_ptr + 0x14) = uVar11 - 1;
        lVar8 = this_ptr[0x12];
        lVar5 = this_ptr[0xc];
        uVar10 = *(uint *)((int64_t)this_ptr + 0x8c);
        lVar6 = this_ptr[0xf];
        lVar7 = this_ptr[0xe];
        uVar4 = *(uint *)(this_ptr + 0xb);
        uVar18 = (uint64_t)*(uint *)(this_ptr + 0x10);
        iVar15 = uVar11 - 2;
        uVar13 = (uint64_t)(*(int *)((int64_t)this_ptr + 0xac) + 1);
        do {
          uVar11 = (uint)uVar13;
          *(uint *)((int64_t)this_ptr + 0xac) = uVar11;
          uVar17 = uVar10 & ((uint)*(byte *)(lVar5 + (uint64_t)(uVar11 + 2)) ^
                            (int)uVar18 << ((byte)(int)lVar8 & 0x1f));
          uVar18 = (uint64_t)uVar17;
          *(uint *)(this_ptr + 0x10) = uVar17;
          *(void*)(lVar7 + (uint64_t)(uVar4 & uVar11) * 2) =
               *(void*)(lVar6 + uVar18 * 2);
          *(short *)(lVar6 + uVar18 * 2) = (short)uVar13;
          *(int *)(this_ptr + 0x14) = iVar15;
          uVar13 = (uint64_t)(uVar11 + 1);
          bVar21 = iVar15 != 0;
          iVar15 = iVar15 + -1;
        } while (bVar21);
        *(uint *)((int64_t)this_ptr + 0xac) = uVar11 + 1;
      }
      if (uVar12 != uVar14) goto LAB_00f45bde;
    }
    pvVar16 = (void *)0x0;
    FUN_00f4b740(0,uVar13 - this_ptr[0x13]);
    this_ptr[0x13] = (uint64_t)*(uint *)((int64_t)this_ptr + 0xac);
    lVar5 = *this_ptr;
    lVar6 = *(int64_t *)(lVar5 + 0x38);
    FUN_00f4b540();
    uVar12 = *(uint *)(lVar6 + 0x28);
    if (*(uint *)(lVar5 + 0x20) < *(uint *)(lVar6 + 0x28)) {
      uVar12 = *(uint *)(lVar5 + 0x20);
    }
    pvVar20 = (void *)(uint64_t)uVar12;
    if (uVar12 != 0) {
      _memcpy(pvVar16,pvVar20,(size_t)param_3);
      *(int64_t *)(lVar5 + 0x18) = *(int64_t *)(lVar5 + 0x18) + (int64_t)pvVar20;
      *(int64_t *)(lVar6 + 0x20) = *(int64_t *)(lVar6 + 0x20) + (int64_t)pvVar20;
      *(int64_t *)(lVar5 + 0x28) = *(int64_t *)(lVar5 + 0x28) + (int64_t)pvVar20;
      *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) - uVar12;
      plVar1 = (int64_t *)(lVar6 + 0x28);
      *plVar1 = *plVar1 - (int64_t)pvVar20;
      if (*plVar1 == 0) {
        *(void*)(lVar6 + 0x20) = *(void*)(lVar6 + 0x10);
      }
    }
    if (*(int *)(*this_ptr + 0x20) == 0) {
      return 0;
    }
  } while( true );
}

