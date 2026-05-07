// Function: FUN_009cf328
// Address: 009cf328
// Size: 556 bytes
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


uint64_t FUN_009cf328(dword *param_1,uint64_t param_2,int64_t param_3,FILE *param_4)

{
  void*puVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  uint32_t extraout_var;
  byte *pbVar5;
  uint32_t extraout_var_00;
  uint32_t extraout_var_01;
  int64_t lVar6;
  FILE *pFVar7;
  int64_t lVar8;
  int64_t *plVar9;
  byte *pbVar10;
  int64_t *plVar11;
  int64_t *this_ptr;
  int64_t *plVar12;
  uint64_t uVar13;
  dword *pdVar14;
  bool bVar15;
  byte *pbStack_f0;
  uint8_t uStack_e1;
  int64_t local_b8 [16];
  int64_t local_38;
  
  sVar2 = (size_t)param_3;
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  uVar13 = 0;
  if (this_ptr[0xf] == 0) goto LAB_009cf4e6;
  plVar11 = (int64_t *)this_ptr[0x10];
  if (plVar11 == (int64_t *)0x0) {
    FUN_009cf810();
    if (this_ptr[0xf] == 0) {
      return 0xffffffff;
    }
    if ((*(byte *)((int64_t)this_ptr + 0x18c) & 8) == 0) {
      this_ptr[5] = 0;
      this_ptr[6] = 0;
      this_ptr[7] = 0;
      bVar15 = *(char *)((int64_t)this_ptr + 0x192) == '\0';
      lVar6 = 0x40;
      if (bVar15) {
        lVar6 = 0x68;
      }
      param_1 = *(dword **)((int64_t)this_ptr + lVar6);
      pbVar10 = (byte *)((int64_t)param_1 + this_ptr[(uint64_t)bVar15 * 2 + 0xc]);
      this_ptr[2] = (int64_t)param_1;
      this_ptr[3] = (int64_t)pbVar10;
      this_ptr[4] = (int64_t)pbVar10;
      *(void*)((int64_t)this_ptr + 0x18c) = 8;
      bVar15 = true;
    }
    else {
      pbVar10 = (byte *)this_ptr[3];
      bVar15 = false;
    }
    if (pbVar10 == (byte *)0x0) {
      pbVar10 = &stack0xffffffffffffff20;
      param_1 = (dword *)&uStack_e1;
      this_ptr[2] = (int64_t)param_1;
      this_ptr[3] = (int64_t)pbVar10;
      this_ptr[4] = (int64_t)pbVar10;
    }
    if (bVar15) {
      pbVar5 = (byte *)this_ptr[4];
      pdVar14 = (dword *)0x0;
    }
    else {
      pbVar5 = (byte *)this_ptr[4];
      pdVar14 = (dword *)(((int64_t)pbVar5 - this_ptr[2]) / 2);
      param_1 = &MACH_HEADER.cputype;
      if ((void*)((int64_t)&MACH_HEADER.magic + 3) < pdVar14) {
        pdVar14 = &MACH_HEADER.cputype;
      }
    }
    if (pbVar10 != pbVar5) {
      uVar13 = (uint64_t)*pbVar10;
      goto LAB_009cf78e;
    }
    _memmove(param_1,pdVar14,sVar2);
    if (*(char *)((int64_t)this_ptr + 0x192) == '\0') {
      lVar6 = this_ptr[9];
      lVar8 = this_ptr[10];
      if ((void *)(lVar8 - lVar6) != (void *)0x0) {
        _memmove(param_1,(void *)(lVar8 - lVar6),sVar2);
        lVar6 = this_ptr[9];
        lVar8 = this_ptr[10];
      }
      plVar11 = (int64_t *)this_ptr[8];
      lVar6 = (lVar8 - lVar6) + (int64_t)plVar11;
      this_ptr[9] = lVar6;
      if (plVar11 == this_ptr + 0xb) {
        lVar8 = 8;
      }
      else {
        lVar8 = this_ptr[0xc];
      }
      this_ptr[10] = (int64_t)plVar11 + lVar8;
      uVar13 = ((int64_t)plVar11 + lVar8) - lVar6;
      if ((uint64_t)(this_ptr[0xe] - (int64_t)pdVar14) <= uVar13) {
        uVar13 = this_ptr[0xe] - (int64_t)pdVar14;
      }
      plVar11 = this_ptr + 0x11;
      plVar9 = this_ptr + 0x21;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *plVar9 = *plVar11;
        plVar11 = plVar11 + 1;
        plVar9 = plVar9 + 1;
      }
      sVar2 = _fread((void *)this_ptr[0xf],(size_t)uVar13,sVar2,param_4);
      if (CONCAT44(extraout_var_01,sVar2) != 0) {
        if ((int64_t *)this_ptr[0x10] == (int64_t *)0x0) {
          FUN_009cf810();
          uVar13 = 0xffffffff;
          if (((section_00000068.segname._0_8_ != 0) &&
              ((uint64_t)MACH_HEADER._16_8_ < (uint64_t)MACH_HEADER._24_8_)) &&
             ((((byte)section_00000158.offset & 0x10) != 0 ||
              (*(char *)(MACH_HEADER._24_8_ + -1) == '\x01')))) {
            puVar1 = (void*)(MACH_HEADER._24_8_ + -1);
            MACH_HEADER._24_8_ = MACH_HEADER._24_8_ + -1;
            *puVar1 = 1;
            uVar13 = 1;
          }
          return uVar13;
        }
        lVar6 = CONCAT44(extraout_var_01,sVar2) + this_ptr[9];
        this_ptr[10] = lVar6;
        iVar4 = (**(code **)(*(int64_t *)this_ptr[0x10] + 0x20))
                          (lVar6,this_ptr[8],this_ptr + 9,
                           (void*)(this_ptr[2] + (int64_t)pdVar14));
        if (iVar4 == 3) {
          pbVar10 = (byte *)this_ptr[8];
          pbStack_f0 = (byte *)this_ptr[10];
          this_ptr[2] = (int64_t)pbVar10;
        }
        else {
          pbVar10 = (byte *)((int64_t)pdVar14 + this_ptr[2]);
          if (pbStack_f0 == pbVar10) goto LAB_009cf789;
        }
        this_ptr[3] = (int64_t)pbVar10;
        this_ptr[4] = (int64_t)pbStack_f0;
        uVar13 = (uint64_t)*pbVar10;
        goto LAB_009cf78e;
      }
    }
    else {
      sVar2 = _fread((void *)this_ptr[0xf],((int)this_ptr[4] - (int)pdVar14) - (int)this_ptr[2],
                     sVar2,param_4);
      if (CONCAT44(extraout_var_00,sVar2) != 0) {
        puVar1 = (void*)(this_ptr[2] + (int64_t)pdVar14);
        this_ptr[3] = (int64_t)puVar1;
        this_ptr[4] = (int64_t)(puVar1 + CONCAT44(extraout_var_00,sVar2));
        uVar13 = (uint64_t)*(byte *)(this_ptr[2] + (int64_t)pdVar14);
        goto LAB_009cf78e;
      }
    }
LAB_009cf789:
    uVar13 = 0xffffffff;
LAB_009cf78e:
    if ((void*)this_ptr[2] == &uStack_e1) {
      this_ptr[4] = 0;
      this_ptr[3] = 0;
      this_ptr[2] = 0;
    }
    return uVar13;
  }
  if ((*(uint *)((int64_t)this_ptr + 0x18c) & 0x10) == 0) {
    if ((*(uint *)((int64_t)this_ptr + 0x18c) & 8) != 0) {
      plVar9 = this_ptr + 0x21;
      plVar12 = local_b8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *plVar12 = *plVar9;
        plVar9 = plVar9 + 1;
        plVar12 = plVar12 + 1;
      }
      if (*(char *)((int64_t)this_ptr + 0x192) == '\0') {
        uVar3 = (**(code **)(*plVar11 + 0x30))();
        pFVar7 = (FILE *)this_ptr[9];
        if (0 < (int)uVar3) {
          pFVar7 = (FILE *)((this_ptr[4] - this_ptr[3]) * (uint64_t)uVar3);
          goto LAB_009cf482;
        }
        param_3 = this_ptr[3];
        if (param_3 == this_ptr[4]) goto LAB_009cf482;
        iVar4 = (int)param_3 - (int)this_ptr[2];
        (**(code **)(*(int64_t *)this_ptr[0x10] + 0x40))(pFVar7,this_ptr[8]);
        bVar15 = true;
      }
      else {
        pFVar7 = (FILE *)0x0;
LAB_009cf482:
        iVar4 = (int)param_3;
        bVar15 = false;
      }
      iVar4 = _fseeko(pFVar7,1,iVar4);
      if (iVar4 != 0) {
        uVar13 = 0xffffffff;
        goto LAB_009cf4e6;
      }
      if (bVar15) {
        plVar11 = local_b8;
        plVar9 = this_ptr + 0x11;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *plVar9 = *plVar11;
          plVar11 = plVar11 + 1;
          plVar9 = plVar9 + 1;
        }
      }
      this_ptr[10] = this_ptr[8];
      this_ptr[9] = this_ptr[8];
      *(void*)((int64_t)this_ptr + 0x18c) = 0;
      this_ptr[2] = 0;
      this_ptr[3] = 0;
      this_ptr[4] = 0;
    }
  }
  else {
    if (this_ptr[6] != this_ptr[5]) {
      uVar13 = 0xffffffff;
      iVar4 = (**(code **)(*this_ptr + 0x68))();
      if (iVar4 == -1) goto LAB_009cf4e6;
    }
    uVar13 = 0xffffffff;
    do {
      sVar2 = (size_t)local_b8;
      iVar4 = (**(code **)(*(int64_t *)this_ptr[0x10] + 0x28))(this_ptr[0xc] + this_ptr[8]);
      pFVar7 = (FILE *)this_ptr[0xf];
      lVar6 = local_b8[0] - this_ptr[8];
      sVar2 = _fwrite(pFVar7,(size_t)lVar6,sVar2,param_4);
      if (CONCAT44(extraout_var,sVar2) != lVar6) goto LAB_009cf4e6;
    } while (iVar4 == 1);
    if ((iVar4 == 2) || (iVar4 = _fflush(pFVar7), iVar4 != 0)) goto LAB_009cf4e6;
  }
  uVar13 = 0;
LAB_009cf4e6:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return uVar13;
}

