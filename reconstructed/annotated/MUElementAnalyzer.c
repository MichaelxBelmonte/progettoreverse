// ===== MUElementAnalyzer — Annotated small functions =====
// 87 readable functions
// Known properties: 106
//   SInt64          _engineSampleOffset
//   GNInt           _engineIndex
//   float *         _originalSignal
//   float *         _originalSignalBufferWithMargin
//   SInt64          _sampleCount
//   SInt64          _nonSilentSampleCount
//   double          _sampleRate
//   double          _duration
//   double          _parameterValuesPerSecond
//   GNInt           _parameterDataSize
//   float           _maxAmplitude
//   float           _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum
//   float           _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum
//   bool            _isPercussive
//   bool            _isPolyphonic
//   float           _pitchJumpsSum
//   float           _pitchBarycenter
//   float           _allPercussiveDecay
//   float           _allRhythmicQuality
//   float           _allTonality
//   float           _allCentDiffPerMillisecond
//   float           _allPitchRangePerNote
//   float           _allEnergyRelevantRegionRatio
//   float           _allAttackPeakQuality
//   float           _allAttackPeakToEnergyRegionRatio
//   float           _allMonophony
//   float           _referenceAttackPeakValue
//   float           _referencePeakRmsLevel
//   bool            _origRMSValid
//   GNInt *         _nonSilentRmsVals
//   ... +76 more

// ==================================================
// @00791e10 (2965 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  char *pcVar7;
  pthread_key_t pVar8;
  int *in_RCX;
  longlong **pplVar9;
  longlong *plVar10;
  longlong lVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  longlong *arg1;
  uint uVar17;
  longlong this;
  undefined4 uVar18;
  longlong *local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  undefined8 local_b8;
  int local_b0;
  int local_a4;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  undefined8 local_60;
  int local_58;
  float local_4c;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar4 = DAT_027296b8;
  local_4c = param_1;
  if ((*arg1 != 0) && (1 < *(int *)(*arg1 + 0xc))) {
    if (DAT_027296b8 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar4;
    FUN_00e33de0();
    uVar18 = FUN_00d46dc0(local_4c);
    local_a0 = local_48;
    local_98 = 0;
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        uVar18 = FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    lVar4 = local_90;
    local_98 = '\x01';
    local_d0 = local_90;
    local_c8 = '\0';
    FUN_00ca0840(uVar18,&local_d0);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (*(longlong *)(this + 0x120) != 0) {
      local_c8 = '\0';
      local_d0 = 0;
      local_b8 = 0xffffffff;
      local_b0 = 0;
      local_a4 = 1;
      local_c0 = *(longlong *)(this + 0x120);
LAB_00792038:
      uVar15 = local_b8 & 0xffffffff;
LAB_00792050:
      uVar17 = (int)uVar15 + 1;
      if ((int)uVar17 < *(int *)(local_c0 + 0xc)) goto code_r0x0079205b;
      local_b8 = CONCAT44(local_b8._4_4_,(int)uVar15 + 1);
LAB_0079295c:
      FUN_00097c40();
      iVar14 = local_a4;
      lVar4 = local_90;
      goto joined_r0x0079297f;
    }
    iVar14 = 1;
joined_r0x0079297f:
    if (in_RCX != (int *)0x0) {
      *in_RCX = iVar14;
    }
    local_4c = local_4c / (float)iVar14;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  return local_4c;
code_r0x0079205b:
  local_d0 = *(longlong *)(*(longlong *)(local_c0 + 0x10) + (longlong)(int)uVar17 * 8);
  uVar15 = (ulonglong)uVar17;
  if (local_d0 != *param_2) goto code_r0x00792077;
  goto LAB_00792050;
code_r0x00792077:
  local_b8 = CONCAT44(local_b8._4_4_,uVar17);
LAB_0079207d:
  uVar18 = FUN_00e33de0();
  lVar4 = DAT_0270b920;
  if (DAT_0270b920 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_108 = lVar4;
  local_100 = '\x01';
  FUN_000175c0(uVar18,&local_108);
  plVar1 = local_78;
  FUN_0006e1c0();
  pplVar9 = (longlong **)&DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    pplVar9 = &local_78;
    if (cVar3 == '\0') {
      pplVar9 = (longlong **)&DAT_02802688;
    }
  }
  local_80 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (local_80 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar9 + 1) = 0;
  }
  pVar8 = (pthread_key_t)pplVar9;
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_80 == (longlong *)0x0) {
    uVar18 = FUN_00e33de0();
    lVar4 = DAT_027295d0;
    if (DAT_027295d0 != 0) {
      uVar18 = FUN_00d50b00();
    }
    local_f8 = lVar4;
    local_f0 = '\x01';
    FUN_000175c0(uVar18,&local_f8);
    plVar1 = local_78;
    if ((DAT_027048b0 == '\0') && (iVar14 = ___cxa_guard_acquire(), iVar14 != 0)) {
      _DAT_026cd478 = FUN_00d4fe50();
      DAT_026cd460 = "GNList";
      _DAT_026cd468 = 0x20;
      _DAT_026cd470 = FUN_00018210;
      _DAT_026cd480 = 0;
      uRam00000000026cd488 = 0;
      _DAT_026cd490 = 0;
      _DAT_026cd508 = 0;
      uRam00000000026cd510 = 0;
      _DAT_026cd518 = 0;
      DAT_026cd51a = 6;
      _DAT_026cd498 = 0;
      uRam00000000026cd4a0 = 0;
      _DAT_026cd4a8 = 0;
      uRam00000000026cd4b0 = 0;
      _DAT_026cd4b8 = 0;
      uRam00000000026cd4c0 = 0;
      _DAT_026cd4c8 = 0;
      uRam00000000026cd4d0 = 0;
      _DAT_026cd4d8 = 0;
      uRam00000000026cd4e0 = 0;
      _DAT_026cd4e8 = 0;
      uRam00000000026cd4f0 = 0;
      _DAT_026cd4f8 = 0;
      uRam00000000026cd500 = 0;
      DAT_026cd523 = 0;
      _DAT_026cd51b = 0;
      ___cxa_guard_release();
    }
    pplVar9 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar9 = (longlong **)&DAT_02802688;
      if (cVar3 != '\0') {
        FUN_0006e1c0();
        cVar3 = FUN_00e8da30();
        pplVar9 = &local_78;
        if (cVar3 == '\0') {
          pplVar9 = (longlong **)&DAT_02802688;
        }
      }
    }
    plVar1 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar9 + 1) = 0;
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    local_88 = plVar1;
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*param_2;
    if ((DAT_026e0c38 == '\0') && (iVar14 = ___cxa_guard_acquire(), iVar14 != 0)) {
      _DAT_026e0b88 = FUN_000fddb0();
      _DAT_026e0b70 = "MUElementAnalyzer";
      _DAT_026e0b78 = 0x180;
      _DAT_026e0b80 = FUN_000fdd80;
      _DAT_026e0b90 = 0;
      uRam00000000026e0b98 = 0;
      _DAT_026e0ba0 = 0;
      _DAT_026e0c18 = 0;
      uRam00000000026e0c20 = 0;
      _DAT_026e0c28 = 0;
      DAT_026e0c2a = 1;
      _DAT_026e0ba8 = 0;
      uRam00000000026e0bb0 = 0;
      _DAT_026e0bb8 = 0;
      uRam00000000026e0bc0 = 0;
      _DAT_026e0bc8 = 0;
      uRam00000000026e0bd0 = 0;
      _DAT_026e0bd8 = 0;
      uRam00000000026e0be0 = 0;
      _DAT_026e0be8 = 0;
      uRam00000000026e0bf0 = 0;
      _DAT_026e0bf8 = 0;
      uRam00000000026e0c00 = 0;
      _DAT_026e0c08 = 0;
      uRam00000000026e0c10 = 0;
      DAT_026e0c33 = 0;
      _DAT_026e0c2b = 0;
      ___cxa_guard_release();
    }
    plVar10 = &DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar10 = param_2;
      if (cVar3 == '\0') {
        plVar10 = &DAT_02802688;
      }
    }
    lVar4 = *plVar10;
    if (lVar4 != 0) {
      uVar18 = FUN_013fb420();
      plVar1 = local_78;
      if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) &&
          (uVar18 = FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      iVar14 = 0;
      if (*arg1 != 0) {
        local_70 = '\0';
        local_78 = (longlong *)0x0;
        local_60 = 0xffffffff;
        local_58 = 0;
        local_68 = *arg1;
        do {
          if (iVar14 != 0) {
            if (iVar14 < 1) {
              iVar14 = -iVar14;
            }
            else {
              local_60 = CONCAT44(local_60._4_4_,(int)local_60 - iVar14);
              FUN_00d23690(uVar18,iVar14);
              local_58 = local_58 + local_60._4_4_;
              iVar14 = 0;
            }
            local_60 = CONCAT44(iVar14,(int)local_60);
          }
          lVar6 = (longlong)(int)local_60;
          iVar14 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar14);
          if (*(int *)(local_68 + 0xc) <= iVar14) {
            iVar14 = 0;
            goto LAB_00792648;
          }
          lVar11 = *(longlong *)(local_68 + 0x10);
          local_78 = *(longlong **)(lVar11 + 8 + lVar6 * 8);
          pvVar5 = _pthread_getspecific((pthread_key_t)lVar11);
          pVar8 = (pthread_key_t)lVar11;
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar18 = FUN_012e5ae0();
          iVar14 = *(int *)((longlong)local_48 + 0xc);
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            uVar18 = FUN_00d50b20();
          }
          if (iVar14 == 1) {
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e5ae0();
            FUN_00d23310();
            plVar10 = local_48;
            local_38[0] = local_40[0];
            pcVar12 = local_38;
            pcVar7 = local_40;
            if (local_40[0] == '\0') {
              pcVar7 = pcVar12;
            }
            *pcVar7 = '\0';
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pVar8 = (pthread_key_t)pcVar12;
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126ef70();
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar18 = FUN_01320d00();
            plVar2 = local_48;
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              uVar18 = FUN_00d50b20();
            }
            if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
              uVar18 = FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (plVar10 != (longlong *)0x0)) {
              uVar18 = FUN_00d50b20();
            }
            if ((local_110 != '\0') && (local_118 != 0)) {
              uVar18 = FUN_00d50b20();
            }
            if (local_128 == plVar2) goto LAB_00792646;
          }
          iVar14 = local_60._4_4_;
        } while( true );
      }
      goto LAB_00792651;
    }
    cVar3 = '\0';
    goto LAB_0079265e;
  }
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  plVar1 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  local_78 = plVar1;
  local_70 = '\0';
  cVar3 = FUN_00d23d70();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') goto LAB_00792682;
  goto LAB_0079278c;
LAB_00792646:
  iVar14 = 1;
LAB_00792648:
  FUN_000be170();
LAB_00792651:
  cVar3 = (char)iVar14;
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_0079265e:
  if (local_88 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((lVar4 != 0) && (cVar3 != '\0')) {
LAB_00792682:
    lVar4 = local_90;
    uVar18 = FUN_00e33de0();
    local_e8 = lVar4;
    local_e0 = '\0';
    FUN_000175c0(uVar18,&local_e8);
    plVar1 = local_78;
    FUN_00053ac0();
    pplVar9 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar9 = &local_78;
      if (cVar3 == '\0') {
        pplVar9 = (longlong **)&DAT_02802688;
      }
    }
    plVar1 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar9 + 1) = 0;
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_a4 = local_a4 + 1;
    if (plVar1 != (longlong *)0x0) {
      uVar18 = FUN_00d459e0();
      local_88 = (longlong *)CONCAT44(local_88._4_4_,uVar18);
      FUN_00d50b20();
      local_4c = local_4c + local_88._0_4_;
    }
  }
  if (local_80 != (longlong *)0x0) {
LAB_0079278c:
    FUN_00d50b20();
  }
  iVar14 = local_b8._4_4_;
  iVar13 = local_b8._4_4_;
  if (local_b8._4_4_ == 0) goto LAB_00792038;
  do {
    if (iVar14 == 0) {
      iVar14 = 0;
    }
    else {
      if (iVar14 < 1) {
        iVar13 = -iVar14;
      }
      else {
        local_b8 = CONCAT44(local_b8._4_4_,(int)local_b8 - iVar14);
        FUN_00d23690();
        local_b0 = local_b0 + iVar13;
        iVar13 = 0;
      }
      local_b8 = CONCAT44(iVar13,(int)local_b8);
      iVar14 = iVar13;
    }
    lVar4 = (longlong)(int)local_b8;
    iVar16 = (int)local_b8 + 1;
    local_b8 = CONCAT44(local_b8._4_4_,iVar16);
    if (*(int *)(local_c0 + 0xc) <= iVar16) goto LAB_0079295c;
    local_d0 = *(longlong *)(*(longlong *)(local_c0 + 0x10) + 8 + lVar4 * 8);
  } while (local_d0 == *param_2);
  goto LAB_0079207d;
}




// ==================================================
// @0138f140 (2930 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  double dVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  longlong lVar13;
  undefined8 *puVar14;
  pthread_key_t pVar15;
  ulonglong uVar16;
  longlong *arg1;
  longlong this;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  undefined8 *local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  undefined4 local_b0;
  float local_ac;
  longlong local_98;
  char local_90;
  longlong local_88;
  longlong local_80;
  undefined8 *local_70;
  byte local_61;
  undefined8 *local_58;
  int local_44;
  pthread_key_t local_38;
  
  lVar13 = *arg1;
  if (*(int *)(lVar13 + 0xc) < 1) {
    iVar18 = -1;
    iVar17 = 0x7fffffff;
  }
  else {
    iVar17 = 0x7fffffff;
    iVar18 = -1;
    lVar20 = 0;
    do {
      pVar15 = (pthread_key_t)param_1;
      lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + lVar20 * 8);
      if (lVar13 != 0) {
        FUN_00d50b00();
      }
      pvVar12 = _pthread_getspecific(pVar15);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar10 = FUN_014c2f20();
      pvVar12 = _pthread_getspecific(pVar15);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar11 = FUN_014c2f80();
      if (iVar10 < iVar17) {
        iVar17 = iVar10;
      }
      if (iVar18 < iVar11) {
        iVar18 = iVar11;
      }
      if (lVar13 != 0) {
        FUN_00d50b20();
      }
      lVar20 = lVar20 + 1;
      lVar13 = *arg1;
      param_1 = (longlong)*(int *)(lVar13 + 0xc);
    } while (lVar20 < param_1);
  }
  pcVar7 = DAT_025f14a0;
  if (iVar17 <= iVar18) {
    local_38 = -1000;
    local_d0 = 0;
    local_c0 = 0;
    local_44 = -1000;
    local_c8 = 0;
    local_b8 = 0;
    local_88 = 0;
    bVar6 = false;
    local_80 = 0;
    bVar5 = false;
    local_70 = (undefined8 *)0x0;
    bVar4 = 0;
    local_58 = (undefined8 *)0x0;
    bVar2 = 0;
    local_dc = iVar18;
    do {
      if (0 < *(int *)(lVar13 + 0xc)) {
        uVar16 = (ulonglong)((uint)(1 < iVar17) * 2 - 1);
        lVar20 = 0;
        local_d8 = iVar17 + -1;
        do {
          pVar15 = (pthread_key_t)uVar16;
          lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + lVar20 * 8);
          if (lVar13 != 0) {
            FUN_00d50b00();
          }
          pvVar12 = _pthread_getspecific(pVar15);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014c34a0();
          if (local_90 == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
              goto LAB_0138f420;
            }
LAB_0138f436:
            if (local_98 != 0) goto LAB_0138f43e;
          }
          else {
            if (local_98 == 0) goto LAB_0138f436;
LAB_0138f420:
            if ((!NAN(*(float *)(local_98 + 0x20))) && (!NAN(*(float *)(local_98 + 0x10))))
            goto LAB_0138f436;
            puVar14 = local_58;
            pVar9 = local_38;
            if (iVar17 != local_44) {
              if (local_88 == 0) {
                lVar19 = *(longlong *)(this + 0x1a0);
                if (lVar19 == 0) {
                  FUN_0132d640();
                  lVar19 = *(longlong *)(this + 0x1a0);
                }
                if (lVar19 != 0) {
                  FUN_00d50b00();
                }
                if (lVar19 == local_80) {
                  bVar21 = bVar5;
                  if (lVar19 != 0) {
                    bVar21 = true;
                  }
                  lVar8 = local_80;
                  if ((bVar5) && (bVar21 = bVar5, lVar19 != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  bVar21 = true;
                  lVar8 = lVar19;
                  if ((bVar5) && (local_80 != 0)) {
                    FUN_00d50b20();
                  }
                }
                bVar5 = bVar21;
                local_80 = lVar8;
                local_b0 = *(undefined4 *)(local_80 + 0x30);
                local_b8 = (ulonglong)*(uint *)(local_80 + 0x20);
                dVar1 = *(double *)(local_80 + 0x50);
                local_d4 = *(undefined4 *)(local_80 + 0x2c);
                local_61 = *(byte *)(local_80 + 0x5c);
                FUN_00e83120();
                local_88 = local_98;
                if (local_98 == 0) {
                  local_88 = 0;
                }
                else {
                  bVar6 = true;
                  if (local_90 == '\0') {
                    FUN_00d50b00();
                  }
                }
                local_d0 = FUN_00e83da0();
                local_c0 = FUN_00e83010();
                local_c8 = FUN_00e83010();
                local_ac = (float)dVar1;
              }
              if (local_38 != local_d8) {
                puVar14 = (undefined8 *)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar14 = &DAT_025f1488;
                *(undefined8 *)((longlong)puVar14 + 0xc) = 0;
                *(undefined8 *)((longlong)puVar14 + 0x14) = 0;
                *(undefined8 *)((longlong)puVar14 + 0x1c) = 0;
                *(undefined8 *)((longlong)puVar14 + 0x24) = 0;
                *(undefined8 *)((longlong)puVar14 + 0x2c) = 0;
                *(undefined8 *)((longlong)puVar14 + 0x34) = 0;
                *(undefined8 *)((longlong)puVar14 + 0x3c) = 0;
                *(undefined8 *)((longlong)puVar14 + 0x44) = 0;
                puVar14[9] = 0;
                puVar14[10] = 0;
                (*pcVar7)();
                if (puVar14 == local_58) {
                  puVar14 = local_58;
                  if (bVar2 == 0) {
                    bVar2 = 1;
                  }
                  else {
                    FUN_00d50b20();
                  }
                }
                else {
                  bVar3 = 1;
                  bVar21 = bVar2 != 0;
                  bVar2 = bVar3;
                  if ((bVar21) && (local_58 != (undefined8 *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                local_58 = puVar14;
                local_190 = *(longlong *)(this + 0x38);
                local_188 = '\0';
                local_180 = local_80;
                local_178 = '\0';
                local_170 = 0;
                local_168 = '\0';
                local_160 = local_88;
                local_158 = '\0';
                local_150 = 0;
                local_148 = '\0';
                FUN_015c4d90(0,local_c8,&local_190,&local_180,&local_160,local_d0,local_61 & 1,6,
                             &local_150);
                if ((local_148 != '\0') && (local_150 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_158 != '\0') && (local_160 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_168 != '\0') && (local_170 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_178 != '\0') && (local_180 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_188 != '\0') && (local_190 != 0)) {
                  FUN_00d50b20();
                }
              }
              puVar14 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar14 = &DAT_025f1488;
              *(undefined8 *)((longlong)puVar14 + 0xc) = 0;
              *(undefined8 *)((longlong)puVar14 + 0x14) = 0;
              *(undefined8 *)((longlong)puVar14 + 0x1c) = 0;
              *(undefined8 *)((longlong)puVar14 + 0x24) = 0;
              *(undefined8 *)((longlong)puVar14 + 0x2c) = 0;
              *(undefined8 *)((longlong)puVar14 + 0x34) = 0;
              *(undefined8 *)((longlong)puVar14 + 0x3c) = 0;
              *(undefined8 *)((longlong)puVar14 + 0x44) = 0;
              puVar14[9] = 0;
              puVar14[10] = 0;
              (*pcVar7)();
              if (puVar14 == local_70) {
                puVar14 = local_70;
                if (bVar4 == 0) {
                  local_38 = 1;
                }
                else {
                  FUN_00d50b20();
                  local_38 = (pthread_key_t)bVar4;
                }
              }
              else {
                local_38 = 1;
                if ((bVar4 != 0) && (local_70 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
              }
              local_140 = *(longlong *)(this + 0x38);
              local_138 = '\0';
              local_130 = local_80;
              local_128 = '\0';
              local_120 = local_58;
              local_118 = '\0';
              local_110 = local_88;
              local_108 = '\0';
              local_100 = 0;
              local_f8 = '\0';
              pVar15 = 0;
              FUN_015c4d90(0,local_c8,&local_140,&local_130,&local_110,local_d0,local_61 & 1,0x1e,
                           &local_100);
              if ((local_f8 != '\0') && (local_100 != 0)) {
                FUN_00d50b20();
              }
              if ((local_108 != '\0') && (local_110 != 0)) {
                FUN_00d50b20();
              }
              if ((local_118 != '\0') && (local_120 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_128 != '\0') && (local_130 != 0)) {
                FUN_00d50b20();
              }
              if ((local_138 != '\0') && (local_140 != 0)) {
                FUN_00d50b20();
              }
              FUN_015c6b60();
              FUN_015c66c0();
              FUN_015c6ba0();
              pVar9 = iVar17;
              bVar4 = (byte)local_38;
              if (local_58 == puVar14) {
                local_70 = local_58;
                puVar14 = local_58;
                if ((bVar2 == 0) && (local_70 = local_58, local_58 != (undefined8 *)0x0)) {
                  FUN_00d50b00();
                  local_70 = local_58;
                  bVar2 = 1;
                }
              }
              else {
                if (puVar14 != (undefined8 *)0x0) {
                  FUN_00d50b00();
                }
                bVar21 = bVar2 != 0;
                pVar15 = local_38;
                local_70 = puVar14;
                bVar2 = (byte)local_38;
                if ((bVar21) && (local_58 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            local_38 = pVar9;
            local_58 = puVar14;
            pvVar12 = _pthread_getspecific(pVar15);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_f0 = local_98;
            local_e8 = '\0';
            FUN_014c3020();
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              FUN_00d50b20();
            }
            if (NAN(*(float *)(local_98 + 0x20))) {
              FUN_014eecb0(DAT_0240ded4,local_ac,local_d4);
            }
            local_44 = iVar17;
            if (NAN(*(float *)(local_98 + 0x10))) {
              FUN_014eed60(local_ac,local_b8);
            }
LAB_0138f43e:
            FUN_00d50b20();
          }
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          lVar20 = lVar20 + 1;
          lVar13 = *arg1;
          uVar16 = (ulonglong)*(int *)(lVar13 + 0xc);
          iVar18 = local_dc;
        } while (lVar20 < (longlong)uVar16);
      }
      lVar19 = local_c8;
      lVar20 = local_d0;
      bVar21 = iVar17 != iVar18;
      iVar17 = iVar17 + 1;
    } while (bVar21);
    if (local_c0 != 0) {
      FUN_00e83070();
    }
    if (lVar19 != 0) {
      FUN_00e83070();
    }
    if (lVar20 != 0) {
      FUN_00e83070();
    }
    if ((bVar2 != 0) && (local_58 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar4 != 0) && (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar5) && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar6) && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @014a5ba0 (2901 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  uint uVar1;
  float fVar2;
  double dVar3;
  longlong *plVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong *arg1;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  bool bVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int local_b8;
  float local_a4;
  float local_94;
  longlong local_88;
  float local_6c;
  longlong local_50;
  longlong local_48;
  char local_40;
  
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_02572358;
  (*DAT_02572370)();
  if (5 < *(int *)(*arg1 + 0xc)) {
    plVar4 = *(longlong **)(*arg1 + 0x10);
    dVar3 = *(double *)(*plVar4 + 0x10);
    uVar17 = 0;
    local_50 = 0;
    bVar6 = false;
    lVar13 = plVar4[1];
    lVar10 = local_50;
    if (lVar13 == 0) goto LAB_014a5c80;
    do {
      if (lVar13 != 0) {
        FUN_00d50b00();
      }
      bVar8 = true;
      local_50 = lVar13;
      if ((bVar6) && (lVar10 != 0)) {
        FUN_00d50b20();
      }
LAB_014a5cb0:
      bVar6 = bVar8;
      if (_DAT_0241eeb8 < *(double *)(local_50 + 0x10) - (double)(float)dVar3) {
LAB_014a5d0d:
        iVar20 = 0;
        local_a4 = 0.0;
        local_94 = 0.0;
        local_88 = 0;
        bVar8 = false;
        lVar13 = 0;
        bVar7 = false;
        goto LAB_014a5d50;
      }
      if ((longlong)*(int *)(*arg1 + 0xc) + -1 <= (longlong)(uVar17 + 2)) {
        uVar17 = (ulonglong)((int)uVar17 + 1);
        goto LAB_014a5d0d;
      }
      uVar17 = uVar17 + 1;
      lVar13 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + 8 + uVar17 * 8);
      lVar10 = local_50;
    } while (local_50 != lVar13);
LAB_014a5c80:
    bVar8 = bVar6;
    if ((!bVar6) && (local_50 != 0)) {
      FUN_00d50b00();
      bVar8 = true;
    }
    goto LAB_014a5cb0;
  }
  local_94 = DAT_0239011c;
  goto LAB_014a672c;
  while ((local_94 = fVar27, 0.0 < local_a4 && (iVar20 = iVar20 + 1, iVar20 != 3))) {
LAB_014a5d50:
    FUN_00d216c0();
    local_b8 = (int)uVar17;
    fVar27 = local_94;
    if (0 < local_b8) {
      fVar26 = 0.0;
      iVar19 = 0;
      do {
        lVar21 = (longlong)iVar19;
        lVar10 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + lVar21 * 8);
        if (local_50 == lVar10) {
          if ((!bVar6) && (local_50 != 0)) {
            bVar6 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          if ((bVar6) && (local_50 != 0)) {
            FUN_00d50b20();
            bVar6 = true;
            local_50 = lVar10;
          }
          else {
            bVar6 = true;
            local_50 = lVar10;
          }
        }
        lVar10 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + 8 + lVar21 * 8);
        if (local_88 == lVar10) {
          if ((!bVar8) && (local_88 != 0)) {
            bVar8 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          if ((bVar8) && (local_88 != 0)) {
            FUN_00d50b20();
            bVar8 = true;
            local_88 = lVar10;
          }
          else {
            bVar8 = true;
            local_88 = lVar10;
          }
        }
        lVar10 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + 0x10 + lVar21 * 8);
        if (lVar13 == lVar10) {
          if ((!bVar7) && (lVar13 != 0)) {
            bVar7 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          if ((bVar7) && (lVar13 != 0)) {
            FUN_00d50b20();
            bVar7 = true;
            lVar13 = lVar10;
          }
          else {
            bVar7 = true;
            lVar13 = lVar10;
          }
        }
        fVar24 = (float)(*(double *)(local_88 + 0x10) - *(double *)(local_50 + 0x10));
        iVar18 = iVar19 + 1;
        fVar25 = (float)(*(double *)(lVar13 + 0x10) - *(double *)(local_88 + 0x10));
        local_6c = fVar24;
        if (iVar20 == 2) {
          local_6c = fVar25 + fVar24;
          fVar25 = local_6c / local_a4;
          if (DAT_02390124 <= fVar25) {
            bVar23 = DAT_02411290 == fVar25;
            bVar22 = DAT_02411290 < fVar25;
            if (fVar25 < DAT_02411290) goto LAB_014a6058;
LAB_014a60bd:
            if (bVar22 || bVar23) {
LAB_014a605a:
              local_6c = fVar24;
            }
          }
          else {
            fVar25 = DAT_02390124 / fVar25;
            bVar23 = DAT_02411290 == fVar25;
            bVar22 = DAT_02411290 < fVar25;
            if (DAT_02411290 <= fVar25) goto LAB_014a60bd;
LAB_014a6058:
            iVar19 = iVar18;
            if (bVar22 || bVar23) goto LAB_014a605a;
          }
          FUN_014328b0((double)local_6c * param_1 + _DAT_0241eeb8);
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_00d21140();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          iVar18 = iVar19 + 1;
        }
        else if (iVar20 == 1) {
          FUN_014328b0((double)fVar24 * param_1 + _DAT_0241eeb8,DAT_0238fee8);
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_00d21140();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          local_6c = fVar24 + fVar25;
          FUN_014328b0((double)local_6c * param_1 + _DAT_0241eeb8);
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_00d21140();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else if (iVar20 == 0) {
          FUN_014328b0((double)fVar24 * param_1 + _DAT_0241eeb8);
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_00d21140();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        if (local_6c <= fVar26) {
          local_6c = fVar26;
        }
        fVar26 = local_6c;
        iVar19 = iVar18;
      } while (iVar18 < local_b8);
      if (DAT_0239424c < local_6c) {
        lVar10 = FUN_00e83010();
        uVar1 = (int)((double)local_6c * param_1) + 0x14;
        FUN_015c15e0(DAT_023908ec,uVar1,1,0);
        iVar19 = 0;
        fVar24 = 0.0;
        fVar26 = 0.0;
        if (-0x14 < (int)((double)local_6c * param_1)) {
          uVar11 = (ulonglong)(uVar1 & 3);
          if ((ulonglong)uVar1 - 1 < 3) {
            fVar27 = 0.0;
            uVar15 = 0;
            uVar16 = 0;
            fVar26 = 0.0;
          }
          else {
            fVar27 = 0.0;
            uVar15 = 0;
            uVar16 = 0;
            fVar26 = 0.0;
            do {
              fVar25 = *(float *)(lVar10 + uVar15 * 4);
              fVar2 = *(float *)(lVar10 + 4 + uVar15 * 4);
              uVar5 = (uint)uVar15;
              uVar14 = (uint)uVar16;
              if (fVar27 < fVar25) {
                uVar14 = uVar5;
              }
              fVar28 = fVar25;
              if (fVar25 <= fVar27) {
                fVar28 = fVar27;
              }
              uVar12 = uVar5 + 1;
              if (fVar2 <= fVar28) {
                uVar12 = uVar14;
              }
              fVar27 = fVar2;
              if (fVar2 <= fVar28) {
                fVar27 = fVar28;
              }
              fVar28 = *(float *)(lVar10 + 8 + uVar15 * 4);
              uVar14 = uVar5 + 2;
              if (fVar28 <= fVar27) {
                uVar14 = uVar12;
              }
              fVar29 = fVar28;
              if (fVar28 <= fVar27) {
                fVar29 = fVar27;
              }
              fVar27 = *(float *)(lVar10 + 0xc + uVar15 * 4);
              uVar5 = uVar5 + 3;
              if (fVar27 <= fVar29) {
                uVar5 = uVar14;
              }
              uVar16 = (ulonglong)uVar5;
              fVar26 = fVar26 + fVar25 + fVar2 + fVar28 + fVar27;
              if (fVar27 <= fVar29) {
                fVar27 = fVar29;
              }
              uVar15 = uVar15 + 4;
            } while ((uVar1 & 0xfffffffc) != uVar15);
          }
          iVar19 = (int)uVar16;
          for (; uVar11 != 0; uVar11 = uVar11 - 1) {
            fVar25 = *(float *)(lVar10 + uVar15 * 4);
            if (fVar27 < fVar25) {
              uVar16 = uVar15 & 0xffffffff;
            }
            iVar19 = (int)uVar16;
            fVar26 = fVar26 + fVar25;
            if (fVar25 <= fVar27) {
              fVar25 = fVar27;
            }
            uVar15 = uVar15 + 1;
            fVar27 = fVar25;
          }
        }
        local_a4 = (float)((double)(iVar19 + -10) / param_1);
        uVar14 = (uint)((double)(local_a4 + local_a4) * param_1);
        uVar5 = uVar14;
        if ((int)uVar14 < 0) {
          uVar5 = 0;
        }
        uVar12 = uVar14 + 0x15;
        if ((int)uVar1 < (int)(uVar14 + 0x15)) {
          uVar12 = uVar1;
        }
        if ((int)uVar5 < (int)uVar12) {
          uVar11 = (ulonglong)uVar5;
          uVar16 = ~uVar11;
          fVar24 = 0.0;
          uVar15 = (ulonglong)(uVar12 - uVar5) & 7;
          if ((uVar12 - uVar5 & 7) != 0) {
            do {
              fVar24 = fVar24 + *(float *)(lVar10 + uVar11 * 4);
              uVar11 = uVar11 + 1;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          if (6 < uVar16 + uVar12) {
            do {
              fVar24 = fVar24 + *(float *)(lVar10 + uVar11 * 4) +
                       *(float *)(lVar10 + 4 + uVar11 * 4) + *(float *)(lVar10 + 8 + uVar11 * 4) +
                       *(float *)(lVar10 + 0xc + uVar11 * 4) +
                       *(float *)(lVar10 + 0x10 + uVar11 * 4) +
                       *(float *)(lVar10 + 0x14 + uVar11 * 4) +
                       *(float *)(lVar10 + 0x18 + uVar11 * 4) +
                       *(float *)(lVar10 + 0x1c + uVar11 * 4);
              uVar11 = uVar11 + 8;
            } while (uVar12 != uVar11);
          }
        }
        fVar27 = (local_a4 + local_a4) * DAT_0239011c;
        if (DAT_0240e348 <= fVar27) {
          uVar14 = (uint)((double)fVar27 * param_1);
          uVar5 = uVar14;
          if ((int)uVar14 < 0) {
            uVar5 = 0;
          }
          uVar12 = uVar14 + 0x15;
          if ((int)uVar1 < (int)(uVar14 + 0x15)) {
            uVar12 = uVar1;
          }
          if ((int)uVar5 < (int)uVar12) {
            uVar11 = (ulonglong)uVar5;
            uVar16 = ~uVar11;
            uVar15 = (ulonglong)(uVar12 - uVar5) & 7;
            if ((uVar12 - uVar5 & 7) != 0) {
              do {
                fVar24 = fVar24 + *(float *)(lVar10 + uVar11 * 4);
                uVar11 = uVar11 + 1;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            if (6 < uVar16 + uVar12) {
              do {
                fVar24 = fVar24 + *(float *)(lVar10 + uVar11 * 4) +
                         *(float *)(lVar10 + 4 + uVar11 * 4) + *(float *)(lVar10 + 8 + uVar11 * 4) +
                         *(float *)(lVar10 + 0xc + uVar11 * 4) +
                         *(float *)(lVar10 + 0x10 + uVar11 * 4) +
                         *(float *)(lVar10 + 0x14 + uVar11 * 4) +
                         *(float *)(lVar10 + 0x18 + uVar11 * 4) +
                         *(float *)(lVar10 + 0x1c + uVar11 * 4);
                uVar11 = uVar11 + 8;
              } while (uVar12 != uVar11);
            }
          }
          if (DAT_0240e348 <= fVar27 * DAT_0239011c) {
            uVar14 = (uint)((double)(fVar27 * DAT_0239011c) * param_1);
            uVar5 = uVar14;
            if ((int)uVar14 < 0) {
              uVar5 = 0;
            }
            uVar12 = uVar14 + 0x15;
            if ((int)uVar1 < (int)(uVar14 + 0x15)) {
              uVar12 = uVar1;
            }
            if ((int)uVar5 < (int)uVar12) {
              uVar11 = (ulonglong)uVar5;
              uVar16 = ~uVar11;
              uVar15 = (ulonglong)(uVar12 - uVar5) & 7;
              if ((uVar12 - uVar5 & 7) != 0) {
                do {
                  fVar24 = fVar24 + *(float *)(lVar10 + uVar11 * 4);
                  uVar11 = uVar11 + 1;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              if (6 < uVar16 + uVar12) {
                do {
                  fVar24 = fVar24 + *(float *)(lVar10 + uVar11 * 4) +
                           *(float *)(lVar10 + 4 + uVar11 * 4) + *(float *)(lVar10 + 8 + uVar11 * 4)
                           + *(float *)(lVar10 + 0xc + uVar11 * 4) +
                           *(float *)(lVar10 + 0x10 + uVar11 * 4) +
                           *(float *)(lVar10 + 0x14 + uVar11 * 4) +
                           *(float *)(lVar10 + 0x18 + uVar11 * 4) +
                           *(float *)(lVar10 + 0x1c + uVar11 * 4);
                  uVar11 = uVar11 + 8;
                } while (uVar12 != uVar11);
              }
            }
          }
        }
        fVar27 = 0.0;
        if (0.0 < fVar26) {
          fVar27 = fVar24 / fVar26;
        }
        FUN_00e83070();
        if (fVar27 <= local_94) {
          fVar27 = local_94;
        }
      }
    }
  }
  if ((bVar7) && (lVar13 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar8) && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (puVar9 == (undefined8 *)0x0) {
    return local_94;
  }
LAB_014a672c:
  FUN_00d50b20();
  return local_94;
}




// ==================================================
// @0149f6a0 (2850 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  float *pfVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *in_RCX;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong arg1;
  longlong lVar26;
  float *pfVar27;
  longlong lVar28;
  int iVar29;
  longlong lVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  longlong local_a8;
  char local_a0;
  longlong local_58;
  longlong local_38;
  ulonglong uVar25;
  
  FUN_00e83120();
  local_58 = local_a8;
  if (local_a8 == 0) {
    bVar14 = true;
    local_58 = 0;
  }
  else if (local_a0 == '\0') {
    FUN_00d50b00();
    bVar14 = false;
  }
  else {
    bVar14 = false;
  }
  pfVar16 = (float *)FUN_00e83010();
  lVar17 = FUN_00e83010();
  lVar18 = FUN_00e83010();
  fVar32 = (float)(param_1 / _DAT_0240e370);
  if (fVar32 <= DAT_02390124) {
    fVar32 = DAT_02390124 / (float)(int)(DAT_02390124 / fVar32 + DAT_0239011c);
  }
  else {
    fVar32 = (float)(int)(fVar32 + DAT_0239011c);
  }
  ___bzero();
  bVar5 = fVar32 < DAT_02390124;
  fVar34 = fVar32;
  if (fVar32 < DAT_02390124) {
    fVar34 = DAT_02390124 / fVar32;
  }
  uVar31 = (uint)(fVar34 + DAT_0239011c);
  lVar28 = *in_RCX;
  if (*(int *)(lVar28 + 0xc) < 1) {
    bVar13 = false;
    local_38 = 0;
  }
  else if (fVar32 <= 0.0) {
    if ((lVar18 + 4U < lVar17 + 0x1000U) && (lVar17 + 8U < lVar18 + 0x800U)) {
      lVar26 = 0;
      local_38 = 0;
      bVar5 = false;
      do {
        lVar28 = *(longlong *)(*(longlong *)(lVar28 + 0x10) + lVar26 * 8);
        if (local_38 == lVar28) {
          lVar28 = local_38;
          bVar13 = bVar5;
          if ((!bVar5) && (local_38 != 0)) {
            FUN_00d50b00();
            bVar13 = true;
          }
        }
        else {
          if (lVar28 != 0) {
            FUN_00d50b00(lVar28);
          }
          bVar13 = true;
          if ((bVar5) && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
        local_38 = lVar28;
        FUN_00e83530();
        for (lVar28 = 2; fVar34 = *(float *)(lVar17 + -8 + lVar28 * 8),
            fVar37 = *(float *)(lVar17 + -4 + lVar28 * 8),
            *(float *)(lVar18 + -4 + lVar28 * 4) =
                 fVar37 * fVar37 + fVar34 * fVar34 + *(float *)(lVar18 + -4 + lVar28 * 4),
            lVar28 != 0x200; lVar28 = lVar28 + 2) {
          fVar34 = *(float *)(lVar17 + lVar28 * 8);
          fVar37 = *(float *)(lVar17 + 4 + lVar28 * 8);
          *(float *)(lVar18 + lVar28 * 4) =
               fVar37 * fVar37 + fVar34 * fVar34 + *(float *)(lVar18 + lVar28 * 4);
        }
        lVar26 = lVar26 + 1;
        lVar28 = *in_RCX;
        bVar5 = bVar13;
      } while (lVar26 < *(int *)(lVar28 + 0xc));
    }
    else {
      lVar26 = 0;
      local_38 = 0;
      bVar5 = false;
      do {
        lVar28 = *(longlong *)(*(longlong *)(lVar28 + 0x10) + lVar26 * 8);
        if (local_38 == lVar28) {
          lVar28 = local_38;
          bVar13 = bVar5;
          if ((!bVar5) && (local_38 != 0)) {
            FUN_00d50b00();
            bVar13 = true;
          }
        }
        else {
          if (lVar28 != 0) {
            FUN_00d50b00(lVar28);
          }
          bVar13 = true;
          if ((bVar5) && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
        local_38 = lVar28;
        FUN_00e83530();
        lVar28 = 5;
        while( true ) {
          pfVar16 = (float *)(lVar17 + -0x20 + lVar28 * 8);
          fVar34 = pfVar16[2];
          fVar37 = pfVar16[3];
          pfVar27 = (float *)(lVar17 + -0x10 + lVar28 * 8);
          fVar33 = *pfVar27;
          fVar36 = pfVar27[1];
          fVar38 = pfVar27[2];
          fVar6 = pfVar27[3];
          pfVar27 = (float *)(lVar18 + -0x10 + lVar28 * 4);
          fVar7 = pfVar27[1];
          fVar8 = pfVar27[2];
          fVar9 = pfVar27[3];
          pfVar3 = (float *)(lVar18 + -0x10 + lVar28 * 4);
          *pfVar3 = *pfVar27 + *pfVar16 * *pfVar16 + pfVar16[1] * pfVar16[1];
          pfVar3[1] = fVar7 + fVar34 * fVar34 + fVar37 * fVar37;
          pfVar3[2] = fVar8 + fVar33 * fVar33 + fVar36 * fVar36;
          pfVar3[3] = fVar9 + fVar38 * fVar38 + fVar6 * fVar6;
          if (lVar28 == 0x1fd) break;
          pfVar16 = (float *)(lVar17 + lVar28 * 8);
          fVar34 = pfVar16[2];
          fVar37 = pfVar16[3];
          pfVar27 = (float *)(lVar17 + 0x10 + lVar28 * 8);
          fVar33 = *pfVar27;
          fVar36 = pfVar27[1];
          fVar38 = pfVar27[2];
          fVar6 = pfVar27[3];
          pfVar27 = (float *)(lVar18 + lVar28 * 4);
          fVar7 = pfVar27[1];
          fVar8 = pfVar27[2];
          fVar9 = pfVar27[3];
          pfVar3 = (float *)(lVar18 + lVar28 * 4);
          *pfVar3 = *pfVar27 + *pfVar16 * *pfVar16 + pfVar16[1] * pfVar16[1];
          pfVar3[1] = fVar7 + fVar34 * fVar34 + fVar37 * fVar37;
          pfVar3[2] = fVar8 + fVar33 * fVar33 + fVar36 * fVar36;
          pfVar3[3] = fVar9 + fVar38 * fVar38 + fVar6 * fVar6;
          lVar28 = lVar28 + 8;
        }
        *(float *)(lVar18 + 0x7f4) =
             *(float *)(lVar17 + 0xfec) * *(float *)(lVar17 + 0xfec) +
             *(float *)(lVar17 + 0xfe8) * *(float *)(lVar17 + 0xfe8) + *(float *)(lVar18 + 0x7f4);
        *(float *)(lVar18 + 0x7f8) =
             *(float *)(lVar17 + 0xff4) * *(float *)(lVar17 + 0xff4) +
             *(float *)(lVar17 + 0xff0) * *(float *)(lVar17 + 0xff0) + *(float *)(lVar18 + 0x7f8);
        *(float *)(lVar18 + 0x7fc) =
             *(float *)(lVar17 + 0xffc) * *(float *)(lVar17 + 0xffc) +
             *(float *)(lVar17 + 0xff8) * *(float *)(lVar17 + 0xff8) + *(float *)(lVar18 + 0x7fc);
        lVar26 = lVar26 + 1;
        lVar28 = *in_RCX;
        bVar5 = bVar13;
      } while (lVar26 < *(int *)(lVar28 + 0xc));
    }
  }
  else {
    param_2 = param_2 - (int)(DAT_0240e33c * fVar32);
    uVar24 = uVar31 - 1;
    uVar25 = (ulonglong)uVar24;
    lVar26 = 0;
    local_38 = 0;
    bVar13 = false;
    do {
      lVar28 = *(longlong *)(*(longlong *)(lVar28 + 0x10) + lVar26 * 8);
      if (local_38 == lVar28) {
        lVar28 = local_38;
        bVar15 = bVar13;
        if ((!bVar13) && (local_38 != 0)) {
          FUN_00d50b00();
          bVar15 = true;
        }
      }
      else {
        if (lVar28 != 0) {
          FUN_00d50b00();
        }
        bVar15 = true;
        if ((bVar13) && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar13 = bVar15;
      local_38 = lVar28;
      lVar28 = (longlong)(*(double *)(local_38 + 0x10) * param_1);
      if (lVar28 < 0) {
        lVar28 = 0;
      }
      if (param_2 < lVar28) {
        lVar28 = param_2;
      }
      if ((int)uVar31 < 0x401 || bVar5) {
        if (uVar31 == 1) {
          if ((pfVar16 < (float *)(arg1 + lVar28 * 4 + 0x1000U)) &&
             ((float *)(arg1 + lVar28 * 4) < pfVar16 + 0x400)) {
            lVar28 = arg1 + 0xc + lVar28 * 4;
            lVar20 = 0;
            do {
              pfVar16[lVar20] = *(float *)(lVar28 + -0xc + lVar20 * 4);
              pfVar16[lVar20 + 1] = *(float *)(lVar28 + -8 + lVar20 * 4);
              pfVar16[lVar20 + 2] = *(float *)(lVar28 + -4 + lVar20 * 4);
              pfVar16[lVar20 + 3] = *(float *)(lVar28 + lVar20 * 4);
              lVar20 = lVar20 + 4;
            } while ((int)lVar20 != 0x400);
          }
          else {
            lVar28 = arg1 + 0x70 + lVar28 * 4;
            lVar20 = 0;
            do {
              puVar1 = (undefined8 *)(lVar28 + -0x70 + lVar20 * 4);
              uVar10 = puVar1[1];
              puVar2 = (undefined8 *)(lVar28 + -0x60 + lVar20 * 4);
              uVar11 = *puVar2;
              uVar12 = puVar2[1];
              *(undefined8 *)(pfVar16 + lVar20) = *puVar1;
              *(undefined8 *)(pfVar16 + lVar20 + 2) = uVar10;
              *(undefined8 *)(pfVar16 + lVar20 + 4) = uVar11;
              *(undefined8 *)(pfVar16 + lVar20 + 4 + 2) = uVar12;
              puVar1 = (undefined8 *)(lVar28 + -0x50 + lVar20 * 4);
              uVar10 = puVar1[1];
              puVar2 = (undefined8 *)(lVar28 + -0x40 + lVar20 * 4);
              uVar11 = *puVar2;
              uVar12 = puVar2[1];
              *(undefined8 *)(pfVar16 + lVar20 + 8) = *puVar1;
              *(undefined8 *)(pfVar16 + lVar20 + 8 + 2) = uVar10;
              *(undefined8 *)(pfVar16 + lVar20 + 0xc) = uVar11;
              *(undefined8 *)(pfVar16 + lVar20 + 0xc + 2) = uVar12;
              puVar1 = (undefined8 *)(lVar28 + -0x30 + lVar20 * 4);
              uVar10 = puVar1[1];
              puVar2 = (undefined8 *)(lVar28 + -0x20 + lVar20 * 4);
              uVar11 = *puVar2;
              uVar12 = puVar2[1];
              *(undefined8 *)(pfVar16 + lVar20 + 0x10) = *puVar1;
              *(undefined8 *)(pfVar16 + lVar20 + 0x10 + 2) = uVar10;
              *(undefined8 *)(pfVar16 + lVar20 + 0x14) = uVar11;
              *(undefined8 *)(pfVar16 + lVar20 + 0x14 + 2) = uVar12;
              puVar2 = (undefined8 *)(lVar28 + -0x10 + lVar20 * 4);
              uVar10 = puVar2[1];
              puVar1 = (undefined8 *)(lVar28 + lVar20 * 4);
              uVar11 = *puVar1;
              uVar12 = puVar1[1];
              *(undefined8 *)(pfVar16 + lVar20 + 0x18) = *puVar2;
              *(undefined8 *)(pfVar16 + lVar20 + 0x18 + 2) = uVar10;
              *(undefined8 *)(pfVar16 + lVar20 + 0x1c) = uVar11;
              *(undefined8 *)(pfVar16 + lVar20 + 0x1c + 2) = uVar12;
              lVar20 = lVar20 + 0x20;
            } while (lVar20 != 0x400);
          }
        }
        else if (DAT_02390124 <= fVar32) {
          lVar30 = -lVar28;
          lVar20 = arg1 + lVar28 * 4;
          iVar29 = 0x400;
          pfVar27 = pfVar16;
          do {
            fVar34 = 0.0;
            uVar22 = uVar31;
            lVar19 = lVar28;
            if ((uVar31 & 3) != 0) {
              lVar19 = 0;
              do {
                fVar34 = fVar34 + *(float *)(lVar20 + lVar19 * 4);
                lVar19 = lVar19 + 1;
              } while ((uVar31 & 3) != (uint)lVar19);
              uVar22 = uVar31 - (uint)lVar19;
              lVar19 = lVar19 - lVar30;
            }
            if (2 < uVar31 - 1) {
              lVar19 = arg1 + 0xc + lVar19 * 4;
              lVar21 = 0;
              do {
                fVar34 = fVar34 + *(float *)(lVar19 + -0xc + lVar21 * 4) +
                         *(float *)(lVar19 + -8 + lVar21 * 4) + *(float *)(lVar19 + -4 + lVar21 * 4)
                         + *(float *)(lVar19 + lVar21 * 4);
                lVar21 = lVar21 + 4;
              } while (uVar22 != (uint)lVar21);
            }
            lVar28 = lVar28 + uVar25 + 1;
            *pfVar27 = fVar34;
            pfVar27 = pfVar27 + 1;
            lVar30 = lVar30 + ~uVar25;
            lVar20 = lVar20 + uVar25 * 4 + 4;
            iVar29 = iVar29 + -1;
          } while (iVar29 != 0);
        }
        else {
          fVar34 = *(float *)(arg1 + lVar28 * 4);
          lVar28 = lVar28 + 1;
          fVar33 = 0.0;
          lVar20 = 0;
          uVar23 = 0;
          fVar37 = fVar34;
          do {
            if ((int)uVar23 == 0) {
              fVar36 = *(float *)(arg1 + lVar28 * 4);
              fVar33 = (fVar36 - fVar37) * fVar32;
              lVar28 = lVar28 + 1;
              pfVar16[lVar20] = fVar37;
              fVar38 = fVar36;
              uVar22 = uVar24;
              if (uVar24 != 0) goto LAB_0149fb07;
LAB_0149fa70:
              fVar36 = *(float *)(arg1 + lVar28 * 4);
              fVar33 = (fVar36 - fVar38) * fVar32;
              lVar28 = lVar28 + 1;
              uVar23 = uVar25;
            }
            else {
              uVar22 = (int)uVar23 - 1;
              pfVar16[lVar20] = fVar34;
              fVar36 = fVar37;
              fVar38 = fVar37;
              fVar37 = fVar34;
              if (uVar22 == 0) goto LAB_0149fa70;
LAB_0149fb07:
              fVar38 = fVar37 + fVar33;
              uVar23 = (ulonglong)(uVar22 - 1);
            }
            pfVar16[lVar20 + 1] = fVar38;
            fVar34 = fVar38 + fVar33;
            lVar20 = lVar20 + 2;
            fVar37 = fVar36;
          } while ((int)lVar20 != 0x400);
        }
      }
      FUN_00e83530();
      lVar28 = 1;
      if (lVar18 + 0x800U <= lVar17 + 8U || lVar17 + 0x1000U <= lVar18 + 4U) {
        lVar28 = 5;
        while( true ) {
          pfVar27 = (float *)(lVar17 + -0x20 + lVar28 * 8);
          fVar34 = pfVar27[2];
          fVar37 = pfVar27[3];
          pfVar3 = (float *)(lVar17 + -0x10 + lVar28 * 8);
          fVar33 = *pfVar3;
          fVar36 = pfVar3[1];
          fVar38 = pfVar3[2];
          fVar6 = pfVar3[3];
          pfVar3 = (float *)(lVar18 + -0x10 + lVar28 * 4);
          fVar7 = pfVar3[1];
          fVar8 = pfVar3[2];
          fVar9 = pfVar3[3];
          pfVar4 = (float *)(lVar18 + -0x10 + lVar28 * 4);
          *pfVar4 = *pfVar3 + *pfVar27 * *pfVar27 + pfVar27[1] * pfVar27[1];
          pfVar4[1] = fVar7 + fVar34 * fVar34 + fVar37 * fVar37;
          pfVar4[2] = fVar8 + fVar33 * fVar33 + fVar36 * fVar36;
          pfVar4[3] = fVar9 + fVar38 * fVar38 + fVar6 * fVar6;
          if (lVar28 == 0x1fd) break;
          pfVar27 = (float *)(lVar17 + lVar28 * 8);
          fVar34 = pfVar27[2];
          fVar37 = pfVar27[3];
          pfVar3 = (float *)(lVar17 + 0x10 + lVar28 * 8);
          fVar33 = *pfVar3;
          fVar36 = pfVar3[1];
          fVar38 = pfVar3[2];
          fVar6 = pfVar3[3];
          pfVar3 = (float *)(lVar18 + lVar28 * 4);
          fVar7 = pfVar3[1];
          fVar8 = pfVar3[2];
          fVar9 = pfVar3[3];
          pfVar4 = (float *)(lVar18 + lVar28 * 4);
          *pfVar4 = *pfVar3 + *pfVar27 * *pfVar27 + pfVar27[1] * pfVar27[1];
          pfVar4[1] = fVar7 + fVar34 * fVar34 + fVar37 * fVar37;
          pfVar4[2] = fVar8 + fVar33 * fVar33 + fVar36 * fVar36;
          pfVar4[3] = fVar9 + fVar38 * fVar38 + fVar6 * fVar6;
          lVar28 = lVar28 + 8;
        }
        lVar28 = 0x1fd;
      }
      fVar34 = *(float *)(lVar17 + lVar28 * 8);
      fVar37 = *(float *)(lVar17 + 4 + lVar28 * 8);
      *(float *)(lVar18 + lVar28 * 4) =
           fVar37 * fVar37 + fVar34 * fVar34 + *(float *)(lVar18 + lVar28 * 4);
      lVar28 = lVar28 + 2;
      do {
        fVar34 = *(float *)(lVar17 + -8 + lVar28 * 8);
        fVar37 = *(float *)(lVar17 + -4 + lVar28 * 8);
        *(float *)(lVar18 + -4 + lVar28 * 4) =
             fVar37 * fVar37 + fVar34 * fVar34 + *(float *)(lVar18 + -4 + lVar28 * 4);
        fVar34 = *(float *)(lVar17 + lVar28 * 8);
        fVar37 = *(float *)(lVar17 + 4 + lVar28 * 8);
        *(float *)(lVar18 + lVar28 * 4) =
             fVar37 * fVar37 + fVar34 * fVar34 + *(float *)(lVar18 + lVar28 * 4);
        lVar28 = lVar28 + 2;
      } while (lVar28 != 0x201);
      lVar26 = lVar26 + 1;
      lVar28 = *in_RCX;
    } while (lVar26 < *(int *)(lVar28 + 0xc));
  }
  lVar17 = 0;
  do {
    auVar35 = *(undefined1 (*) [16])(lVar18 + lVar17 * 4);
    auVar35 = sqrtps(auVar35,auVar35);
    *(undefined1 (*) [16])(lVar18 + lVar17 * 4) = auVar35;
    lVar17 = lVar17 + 4;
  } while (lVar17 != 0x200);
  auVar35 = ZEXT816(0);
  lVar17 = 7;
  do {
    auVar35._0_4_ =
         auVar35._0_4_ + *(float *)(lVar18 + -0x1c + lVar17 * 4) +
         *(float *)(lVar18 + -0x18 + lVar17 * 4) + *(float *)(lVar18 + -0x14 + lVar17 * 4) +
         *(float *)(lVar18 + -0x10 + lVar17 * 4) + *(float *)(lVar18 + -0xc + lVar17 * 4) +
         *(float *)(lVar18 + -8 + lVar17 * 4) + *(float *)(lVar18 + -4 + lVar17 * 4) +
         *(float *)(lVar18 + lVar17 * 4);
    lVar17 = lVar17 + 8;
  } while (lVar17 != 0x207);
  fVar34 = auVar35._0_4_ * DAT_0239011c;
  fVar37 = 0.0;
  lVar17 = 3;
  do {
    fVar37 = fVar37 + *(float *)(lVar18 + -0xc + lVar17 * 4);
    if (fVar34 <= fVar37) {
      lVar17 = lVar17 + -3;
LAB_0149ffdb:
      fVar33 = (float)(int)lVar17;
      break;
    }
    fVar37 = fVar37 + *(float *)(lVar18 + -8 + lVar17 * 4);
    if (fVar34 <= fVar37) {
      lVar17 = lVar17 + -2;
      goto LAB_0149ffdb;
    }
    fVar37 = fVar37 + *(float *)(lVar18 + -4 + lVar17 * 4);
    if (fVar34 <= fVar37) {
      lVar17 = lVar17 + -1;
      goto LAB_0149ffdb;
    }
    fVar37 = fVar37 + *(float *)(lVar18 + lVar17 * 4);
    if (fVar34 <= fVar37) goto LAB_0149ffdb;
    lVar17 = lVar17 + 4;
    fVar33 = DAT_0241126c;
  } while (lVar17 != 0x203);
  FUN_00e83070();
  FUN_00e83070();
  FUN_00e83070();
  if (!bVar14 && local_58 != 0) {
    FUN_00d50b20();
  }
  if ((bVar13) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return fVar33 * (float)((param_1 * DAT_0241d650) / (double)fVar32);
}




// ==================================================
// @00784900 (2844 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong *plVar1;
  longlong **pplVar2;
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  undefined8 *puVar10;
  longlong **pplVar11;
  longlong ***ppplVar12;
  undefined1 uVar13;
  undefined8 *arg1;
  uint uVar14;
  longlong **pplVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined8 local_138;
  undefined1 local_130;
  longlong **local_128;
  undefined1 local_120;
  longlong *local_118;
  undefined8 *local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong **local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  int local_c4;
  longlong local_c0;
  char local_b8;
  longlong local_a0;
  char local_98;
  longlong **local_80;
  char local_78;
  longlong **local_70;
  undefined8 local_68;
  int local_60;
  undefined1 local_51;
  longlong *local_50;
  char local_48;
  longlong **local_40;
  
  puVar10 = param_1;
  pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
  pVar9 = (pthread_key_t)puVar10;
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar6 = FUN_01326de0();
  if (iVar6 != 0) {
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0076f070();
    FUN_013d8fe0();
  }
  local_51 = iVar6 != 0;
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_c4 = iVar6;
  FUN_01320d00();
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar16 = FUN_0124e100();
  local_40 = local_80;
  pplVar11 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (longlong **)0x0) && (uVar16 = FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (longlong **)0x0)) {
      uVar16 = FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  pVar9 = (pthread_key_t)pplVar11;
  local_118 = param_2;
  local_110 = param_1;
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  uVar14 = 0;
  if (local_40 != (longlong **)0x0) {
    local_78 = '\0';
    local_80 = (longlong **)0x0;
    local_70 = local_40;
    local_68 = 0xffffffff;
    local_60 = 0;
    while( true ) {
      if (uVar14 != 0) {
        if ((int)uVar14 < 1) {
          iVar6 = -uVar14;
        }
        else {
          local_68 = CONCAT44(local_68._4_4_,(int)local_68 - uVar14);
          FUN_00d23690(uVar16,uVar14);
          local_60 = local_60 + local_68._4_4_;
          iVar6 = 0;
        }
        local_68 = CONCAT44(iVar6,(int)local_68);
      }
      lVar8 = (longlong)(int)local_68;
      iVar6 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar6);
      uVar14 = (uint)(iVar6 < *(int *)((longlong)local_70 + 0xc));
      pplVar11 = local_70;
      if (*(int *)((longlong)local_70 + 0xc) <= iVar6) break;
      local_80 = (longlong **)local_70[2][lVar8 + 1];
      uVar16 = FUN_00e33de0();
      plVar1 = DAT_02729580;
      if (DAT_02729580 != (longlong *)0x0) {
        uVar16 = FUN_00d50b00();
      }
      local_108 = plVar1;
      local_100 = '\x01';
      FUN_000175c0(uVar16,&local_108);
      plVar1 = local_50;
      uVar16 = FUN_00053ac0();
      pplVar11 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar11 = &local_50;
        uVar16 = extraout_XMM0_Da;
        if (cVar5 == '\0') {
          pplVar11 = (longlong **)&DAT_02802688;
        }
      }
      plVar1 = *pplVar11;
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          uVar16 = FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar11 + 1) = 0;
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        uVar16 = FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        cVar5 = FUN_00d45ad0();
        uVar16 = FUN_00d50b20();
        if (cVar5 != '\0') break;
      }
      uVar14 = local_68._4_4_;
    }
    pVar9 = (pthread_key_t)pplVar11;
    FUN_00097c40();
  }
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124e100();
  pplVar11 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (longlong **)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (longlong **)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (0 < (int)*(uint *)((longlong)pplVar11 + 0xc)) {
    lVar8 = (ulonglong)*(uint *)((longlong)pplVar11 + 0xc) + 1;
    do {
      pVar9 = (pthread_key_t)pplVar11[2];
      uVar16 = FUN_00e33de0();
      lVar3 = DAT_02729618;
      if (DAT_02729618 != 0) {
        uVar16 = FUN_00d50b00();
      }
      local_f8 = lVar3;
      local_f0 = '\x01';
      FUN_000175c0(uVar16,&local_f8);
      pplVar2 = local_80;
      pplVar15 = (longlong **)*arg1;
      if ((local_78 != '\0') && (local_80 != (longlong **)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (pplVar2 != pplVar15) {
        FUN_00d23620();
      }
      lVar8 = lVar8 + -1;
    } while (1 < lVar8);
  }
  local_e0 = '\0';
  local_e8 = pplVar11;
  FUN_00e34bb0();
  if ((local_e0 != '\0') && (local_e8 != (longlong **)0x0)) {
    FUN_00d50b20();
  }
  FUN_00785940();
  local_80 = (longlong **)*arg1;
  local_78 = '\0';
  FUN_00ca13a0();
  if ((local_78 != '\0') && (local_80 != (longlong **)0x0)) {
    FUN_00d50b20();
  }
  if (local_c4 == 0) {
LAB_00784f3b:
    local_78 = '\0';
    local_80 = (longlong **)0x0;
    uVar4 = 0;
LAB_00784f49:
    uVar13 = uVar4;
    pplVar15 = (longlong **)0x0;
  }
  else {
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar5 = FUN_0134a950();
    if (cVar5 == '\0') goto LAB_00784f3b;
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d610();
    pplVar15 = local_80;
    if (local_78 == '\0') {
      uVar13 = 1;
      uVar4 = 1;
      if (local_80 != (longlong **)0x0) {
        FUN_00d50b00();
        if ((local_78 != '\0') && (local_80 != (longlong **)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00784f4c;
      }
      goto LAB_00784f49;
    }
    local_78 = '\0';
    uVar13 = 1;
  }
LAB_00784f4c:
  local_138 = *local_110;
  local_130 = 0;
  local_d8 = *local_118;
  local_d0 = '\0';
  local_120 = 0;
  local_128 = pplVar15;
  uVar16 = FUN_007651c0(local_51,&local_138,&local_d8,uVar13);
  pplVar2 = local_80;
  if (local_40 == local_80) {
    if ((local_78 != '\0') && (local_80 != (longlong **)0x0)) {
      uVar16 = FUN_00d50b20();
    }
  }
  else {
    if (local_78 == '\0') {
      if (local_80 != (longlong **)0x0) {
        uVar16 = FUN_00d50b00();
      }
      if (local_40 != (longlong **)0x0) {
        local_40 = pplVar2;
        uVar16 = FUN_00d50b20();
        goto joined_r0x007850c2;
      }
    }
    else {
      if (local_40 == (longlong **)0x0) {
        local_40 = local_80;
        goto joined_r0x007850c2;
      }
      uVar16 = FUN_00d50b20();
    }
    local_40 = pplVar2;
  }
joined_r0x007850c2:
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    uVar16 = FUN_00d50b20();
  }
  if (((char)uVar14 != '\0') && (local_40 != (longlong **)0x0)) {
    local_78 = '\0';
    local_80 = (longlong **)0x0;
    local_70 = local_40;
    local_68 = 0xffffffff;
    local_60 = 0;
    iVar6 = 0;
    while( true ) {
      if (iVar6 != 0) {
        if (iVar6 < 1) {
          iVar6 = -iVar6;
        }
        else {
          local_68 = CONCAT44(local_68._4_4_,(int)local_68 - iVar6);
          uVar16 = FUN_00d23690(uVar16,iVar6);
          local_60 = local_60 + iVar6;
          iVar6 = 0;
        }
        local_68 = CONCAT44(iVar6,(int)local_68);
      }
      lVar8 = (longlong)(int)local_68;
      iVar6 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar6);
      if (*(int *)((longlong)local_70 + 0xc) <= iVar6) break;
      pplVar2 = (longlong **)local_70[2][lVar8 + 1];
      local_80 = pplVar2;
      if ((DAT_026e0c38 == '\0') &&
         (iVar6 = ___cxa_guard_acquire(), uVar16 = extraout_XMM0_Da_01, iVar6 != 0)) {
        _DAT_026e0b88 = FUN_000fddb0();
        _DAT_026e0b70 = "MUElementAnalyzer";
        _DAT_026e0b78 = 0x180;
        _DAT_026e0b80 = FUN_000fdd80;
        _DAT_026e0b90 = 0;
        uRam00000000026e0b98 = 0;
        _DAT_026e0ba0 = 0;
        _DAT_026e0c18 = 0;
        uRam00000000026e0c20 = 0;
        _DAT_026e0c28 = 0;
        DAT_026e0c2a = 1;
        _DAT_026e0ba8 = 0;
        uRam00000000026e0bb0 = 0;
        _DAT_026e0bb8 = 0;
        uRam00000000026e0bc0 = 0;
        _DAT_026e0bc8 = 0;
        uRam00000000026e0bd0 = 0;
        _DAT_026e0bd8 = 0;
        uRam00000000026e0be0 = 0;
        _DAT_026e0be8 = 0;
        uRam00000000026e0bf0 = 0;
        _DAT_026e0bf8 = 0;
        uRam00000000026e0c00 = 0;
        _DAT_026e0c08 = 0;
        uRam00000000026e0c10 = 0;
        DAT_026e0c33 = 0;
        _DAT_026e0c2b = 0;
        uVar16 = ___cxa_guard_release();
      }
      ppplVar12 = (longlong ***)&DAT_02802688;
      if (pplVar2 != (longlong **)0x0) {
        (*(code *)(*pplVar2)[0x6c])();
        cVar5 = FUN_00e85ea0();
        ppplVar12 = &local_80;
        uVar16 = extraout_XMM0_Da_00;
        if (cVar5 == '\0') {
          ppplVar12 = (longlong ***)&DAT_02802688;
        }
      }
      if (*(char *)(ppplVar12 + 1) == '\0') {
        if (*ppplVar12 != (longlong **)0x0) {
          FUN_00d50b00();
          goto LAB_007851f1;
        }
      }
      else {
        *(undefined1 *)(ppplVar12 + 1) = 0;
        if (*ppplVar12 != (longlong **)0x0) {
LAB_007851f1:
          FUN_00e33de0();
          uVar16 = FUN_00d46300();
          lVar8 = local_c0;
          plVar1 = DAT_02729580;
          if (local_b8 == '\0') {
            if (local_c0 != 0) {
              uVar16 = FUN_00d50b00();
              plVar1 = DAT_02729580;
            }
          }
          else {
            local_b8 = '\0';
          }
          DAT_02729580 = plVar1;
          if (plVar1 != (longlong *)0x0) {
            uVar16 = FUN_00d50b00();
          }
          local_48 = '\0';
          local_50 = plVar1;
          FUN_00ca0840(uVar16,&local_50);
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          uVar16 = FUN_00d50b20();
        }
      }
      iVar6 = local_68._4_4_;
    }
    FUN_00097c40();
  }
  if (pplVar15 != (longlong **)0x0) {
    FUN_00d50b20();
  }
  if (pplVar11 != (longlong **)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != (longlong **)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01c63f60 (2741 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  ulonglong uVar9;
  int extraout_var;
  ulonglong uVar10;
  ulonglong uVar11;
  pthread_key_t pVar12;
  ulonglong in_RCX;
  longlong lVar13;
  ulonglong *arg1;
  uint uVar14;
  longlong *this;
  bool bVar15;
  uint uVar16;
  undefined8 uVar17;
  float fVar22;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar19 [16];
  undefined8 uVar18;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  float local_a8;
  uint local_74;
  uint local_70;
  uint local_6c;
  int iStack_64;
  uint local_5c;
  uint local_58;
  float local_54;
  ulonglong local_50;
  char local_48;
  
  uVar10 = local_50;
  local_a8 = (float)param_1;
  iVar5 = FUN_01d3a5a0();
  if ((((iVar5 == 1) && (iVar5 = FUN_01d3b620(), iVar5 == 1)) &&
      (iVar5 = FUN_01d3b630(), iVar5 == 1)) &&
     ((cVar4 = FUN_01c63e00(), cVar4 == '\0' && (uVar11 = this[0x31], uVar11 != 0)))) {
    FUN_00d50b00();
    if (0 < *(int *)(this[0x40] + 0xc)) {
      lVar13 = 0;
      bVar15 = false;
      do {
        cVar4 = FUN_01c82ad0();
        if (cVar4 != '\0') {
          bVar15 = true;
          FUN_01c82ae0();
        }
        lVar13 = lVar13 + 1;
        in_RCX = (ulonglong)*(int *)(this[0x40] + 0xc);
      } while (lVar13 < (longlong)in_RCX);
      if (bVar15) {
        FUN_016bf0c0();
      }
    }
    FUN_01c45dc0();
    iVar5 = FUN_01d3b590();
    pvVar8 = _pthread_getspecific((pthread_key_t)in_RCX);
    if ((pvVar8 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
      in_RCX = uVar11;
    }
    FUN_016d8300();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      pvVar8 = _pthread_getspecific((pthread_key_t)in_RCX);
      if ((pvVar8 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
        in_RCX = uVar11;
      }
      FUN_016d8ab0();
      if ((local_48 == '\0') && (local_50 != 0)) {
        FUN_00d50b00();
      }
      FUN_016bf2e0();
      local_74 = FUN_00e7cea0();
      FUN_016bf310();
      local_70 = FUN_00e7cea0();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
    }
    pvVar8 = _pthread_getspecific((pthread_key_t)in_RCX);
    if ((pvVar8 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
      in_RCX = uVar11;
    }
    plVar1 = (longlong *)this[0x2e];
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    uVar17 = (**(code **)(*plVar1 + 0x388))(DAT_023b1608 + local_a8);
    FUN_016cb850(uVar17,0);
    local_58 = FUN_00e7d850();
    FUN_00d50b20();
    pvVar8 = _pthread_getspecific((pthread_key_t)in_RCX);
    if ((pvVar8 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
      in_RCX = uVar11;
    }
    plVar1 = (longlong *)this[0x2e];
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    uVar17 = (**(code **)(*plVar1 + 0x388))(DAT_02390d34 + local_a8);
    FUN_016cb850(uVar17,0);
    local_6c = FUN_00e7d850();
    FUN_00d50b20();
    if (iVar5 != 0) {
      cVar4 = FUN_016bf360();
      pVar12 = (pthread_key_t)in_RCX;
      if (cVar4 != '\0') {
        uVar9 = FUN_016bf2e0();
        FUN_016bf310();
        FUN_00e7b820();
        FUN_00e7c3c0();
        if ((uVar9 >> 0x20 == 0) || (cVar4 = FUN_00e7c650(), cVar4 != '\0')) {
          if ((local_50 == 0) ||
             (((extraout_var == 0 || (cVar4 = FUN_00e7c650(), cVar4 == '\0')) ||
              ((int)local_70 < (int)local_6c)))) {
            FUN_00e7bcc0();
            FUN_016bf1f0();
          }
          else {
            FUN_00e7bcc0();
            FUN_016bf1f0();
          }
          plVar1 = (longlong *)this[0x2e];
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          pvVar8 = _pthread_getspecific(pVar12);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          in_RCX = 0;
          FUN_016c46a0(0,0);
          local_54 = (float)(**(code **)(*plVar1 + 0x390))();
          FUN_00d50b20();
          local_50 = uVar9;
        }
        else {
          if (((local_50 == 0) || (iStack_64 = (int)(uVar9 >> 0x20), iStack_64 == 0)) ||
             ((cVar4 = FUN_00e7c6b0(), cVar4 != '\0' || ((int)local_6c < (int)local_74)))) {
            FUN_00e7bcc0();
            FUN_016bf260();
          }
          else {
            FUN_00e7bcc0();
            FUN_016bf260();
          }
          plVar1 = (longlong *)this[0x2e];
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          pvVar8 = _pthread_getspecific(pVar12);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          in_RCX = 0;
          FUN_016c46a0(0,0);
          local_54 = (float)(**(code **)(*plVar1 + 0x390))();
          FUN_00d50b20();
          local_50 = uVar9;
        }
        goto LAB_01c644d0;
      }
    }
    FUN_016bf0c0();
    local_54 = local_a8;
LAB_01c644d0:
    (**(code **)(*this + 0x620))();
    local_5c = 1;
LAB_01c644f0:
    do {
      (**(code **)(*this + 0x658))();
      uVar9 = *arg1;
      if (uVar9 == local_50) {
        if (((char)arg1[1] != '\0') || (local_50 == 0)) goto LAB_01c6458e;
        if (local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_01c64588;
        }
LAB_01c64553:
        *(undefined1 *)(arg1 + 1) = 1;
      }
      else {
        uVar3 = arg1[1];
        if (local_48 != '\0') {
          *arg1 = local_50;
          if (((char)uVar3 != '\0') && (uVar9 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01c64553;
        }
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *arg1 = local_50;
        if (((char)uVar3 != '\0') && (uVar9 != 0)) {
          FUN_00d50b20();
        }
LAB_01c64588:
        *(undefined1 *)(arg1 + 1) = 1;
LAB_01c6458e:
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((*arg1 == 0) || (iVar5 = FUN_01d3a5a0(), iVar5 == 6)) goto LAB_01c648c6;
      iVar5 = FUN_01d3a5a0();
    } while (iVar5 != 5);
    FUN_01d3abf0();
    uVar17 = FUN_01e466c0();
    local_b8 = (float)uVar17;
    uStack_b4 = (uint)((ulonglong)uVar17 >> 0x20);
    uStack_b0 = (uint)extraout_XMM0_Qb;
    uStack_ac = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
    pvVar8 = _pthread_getspecific((pthread_key_t)in_RCX);
    if ((pvVar8 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
      in_RCX = uVar11;
    }
    plVar1 = (longlong *)this[0x2e];
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    auVar21._8_4_ = uStack_b0;
    auVar21._0_8_ = uVar17;
    auVar21._12_4_ = uStack_ac;
    if (local_54 <= local_b8) {
      auVar21._0_4_ = local_54;
    }
    auVar19._4_12_ = auVar21._4_12_;
    auVar19._0_4_ = auVar21._0_4_ + DAT_023b1608;
    uVar18 = (**(code **)(*plVar1 + 0x388))();
    FUN_016cb850(uVar18,0);
    uVar6 = FUN_00e7d850();
    FUN_00d50b20();
    pvVar8 = _pthread_getspecific((pthread_key_t)in_RCX);
    if ((pvVar8 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
      in_RCX = uVar11;
    }
    plVar1 = (longlong *)this[0x2e];
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    auVar25._8_4_ = uStack_b0;
    auVar25._0_8_ = uVar17;
    auVar25._12_4_ = uStack_ac;
    if (local_b8 <= local_54) {
      auVar25._0_4_ = local_54;
    }
    auVar20._4_12_ = auVar25._4_12_;
    auVar20._0_4_ = auVar25._0_4_ + DAT_02390d34;
    uVar17 = (**(code **)(*plVar1 + 0x388))(auVar20._0_8_);
    FUN_016cb850(uVar17,0);
    uVar7 = FUN_00e7d850();
    FUN_00d50b20();
    if ((uVar6 != local_58) || (uVar7 != local_6c)) {
      in_RCX = CONCAT71((int7)(in_RCX >> 8),1);
      local_5c = (uint)in_RCX;
      uVar16 = uVar7;
      uVar14 = uVar6;
      if (uVar10 == 0) {
LAB_01c64777:
        if ((int)uVar16 < (int)uVar14) {
          FUN_016bf0c0();
        }
        else {
          if (uVar14 == uVar16) goto LAB_01c64792;
          FUN_00e7bcc0();
          FUN_016bf1f0();
          FUN_00e7bcc0();
          FUN_016bf260();
        }
      }
      else {
        in_RCX = (ulonglong)local_70;
        if (((int)uVar6 < (int)local_74) || ((int)local_70 < (int)uVar7)) {
          if (((int)local_74 <= (int)uVar6) || (uVar16 = local_74, (int)uVar7 < (int)local_74)) {
            local_5c = (uint)((int)uVar7 < (int)local_70 || (int)local_70 <= (int)uVar6);
            if ((int)uVar7 < (int)local_70 || (int)local_70 <= (int)uVar6) {
              in_RCX = (ulonglong)uVar6;
            }
            uVar16 = uVar7;
            uVar14 = (uint)in_RCX;
          }
          goto LAB_01c64777;
        }
        local_5c = 0;
LAB_01c64792:
        FUN_00e7bcc0();
        FUN_016bf1f0();
        FUN_00e7bcc0();
        FUN_016bf260();
      }
      (**(code **)(*this + 0x620))();
      local_6c = uVar7;
      local_58 = uVar6;
    }
    auVar23._0_4_ = (float)((uint)(local_b8 - local_54) & _DAT_02390140);
    auVar23._4_4_ = uStack_b4 & _UNK_02390144;
    auVar23._8_4_ = uStack_b0 & _UNK_02390148;
    auVar23._12_4_ = uStack_ac & _UNK_0239014c;
    auVar24._4_12_ = auVar23._4_12_;
    auVar24._0_4_ = auVar23._0_4_ + DAT_02390d34;
    auVar25 = blendps(auVar24,_DAT_023907b0,0xe);
    auVar2._8_8_ = in_XMM0_Qb;
    auVar2._0_8_ = param_1;
    auVar21 = blendps(auVar19,auVar2,0xe);
    uVar17 = FUN_00d05150(auVar21._0_8_);
    if ((*(float *)((longlong)this + 0x21c) == (float)uVar17) &&
       (!NAN(*(float *)((longlong)this + 0x21c)) && !NAN((float)uVar17))) {
      fVar22 = (float)((ulonglong)uVar17 >> 0x20);
      if ((*(float *)(this + 0x44) == fVar22) &&
         (!NAN(*(float *)(this + 0x44)) && !NAN(fVar22))) {
        if ((*(float *)((longlong)this + 0x224) == auVar25._0_4_) &&
           (!NAN(*(float *)((longlong)this + 0x224)) && !NAN(auVar25._0_4_))) {
          if ((*(float *)(this + 0x45) == auVar25._4_4_) &&
             (!NAN(*(float *)(this + 0x45)) && !NAN(auVar25._4_4_))) goto LAB_01c644f0;
        }
      }
    }
    *(undefined8 *)((longlong)this + 0x21c) = uVar17;
    *(longlong *)((longlong)this + 0x224) = auVar25._0_8_;
    (**(code **)(*this + 0x620))();
    goto LAB_01c644f0;
  }
  uVar10 = 0;
  goto LAB_01c63fe8;
LAB_01c648c6:
  if (((local_5c & 1) != 0) && (cVar4 = FUN_016bf360(), cVar4 != '\0')) {
    uVar10 = FUN_016bf2e0();
    uVar11 = FUN_016bf310();
    local_50 = uVar10 >> 0x20;
    if (((local_50 != 0) && (uVar11 >> 0x20 != 0)) && (cVar4 = FUN_00e7c000(), cVar4 != '\0')) {
      local_50 = this[0x42];
      FUN_016bf310();
      FUN_00e7c280();
      FUN_016bf1f0();
    }
  }
  uVar17 = DAT_023dccf4;
  if ((((*(float *)((longlong)this + 0x21c) != (float)DAT_023dccec) ||
       (NAN(*(float *)((longlong)this + 0x21c)) || NAN((float)DAT_023dccec))) ||
      ((fVar22 = (float)((ulonglong)DAT_023dccec >> 0x20), *(float *)(this + 0x44) != fVar22 ||
       ((NAN(*(float *)(this + 0x44)) || NAN(fVar22) ||
        (*(float *)((longlong)this + 0x224) != (float)DAT_023dccf4)))))) ||
     (NAN(*(float *)((longlong)this + 0x224)) || NAN((float)DAT_023dccf4))) {
LAB_01c649ab:
    *(undefined8 *)((longlong)this + 0x21c) = DAT_023dccec;
    *(undefined8 *)((longlong)this + 0x224) = uVar17;
    (**(code **)(*this + 0x620))();
  }
  else {
    fVar22 = (float)((ulonglong)DAT_023dccf4 >> 0x20);
    if ((*(float *)(this + 0x45) != fVar22) ||
       (NAN(*(float *)(this + 0x45)) || NAN(fVar22))) goto LAB_01c649ab;
  }
  *(undefined1 *)(this + 0x43) = 0;
  (**(code **)(*this + 0x620))();
  uVar10 = CONCAT71((int7)(local_50 >> 8),1);
  FUN_00d50b20();
LAB_01c63fe8:
  return uVar10 & 0xffffffff;
}




// ==================================================
// @014ae680 (2466 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  int *piVar1;
  void *pvVar2;
  float *pfVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  double dVar16;
  float fVar17;
  bool bVar18;
  float *pfVar19;
  float *pfVar20;
  ulonglong uVar21;
  uint uVar22;
  float *in_RCX;
  float *pfVar23;
  ulonglong uVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  size_t in_R8D;
  float *in_R9;
  ulonglong uVar28;
  int iVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float in_XMM4_Da;
  uint local_res8;
  longlong local_50;
  char local_48;
  float local_40;
  
  pfVar23 = in_RCX;
  pfVar19 = (float *)FUN_00e83010();
  pfVar20 = (float *)FUN_00e83010();
  pvVar2 = (void *)((longlong)(int)local_res8 * 4);
  _memcpy(pfVar23,pvVar2,in_R8D);
  _memcpy(pfVar23,pvVar2,in_R8D);
  fVar17 = _UNK_0240e18c;
  fVar32 = _UNK_0240e188;
  fVar33 = _UNK_0240e184;
  fVar31 = _DAT_023b294c;
  dVar16 = DAT_0238fee8;
  uVar28 = (ulonglong)local_res8;
  if (0 < (longlong)(int)local_res8) {
    if (local_res8 < 8) {
      uVar21 = 0;
    }
    else {
      uVar21 = (ulonglong)(local_res8 & 0xfffffff8);
      uVar24 = 0;
      do {
        pfVar23 = pfVar19 + uVar24;
        fVar5 = pfVar23[1];
        fVar6 = pfVar23[2];
        fVar7 = pfVar23[3];
        if (*pfVar23 < fVar31) {
          pfVar19[uVar24] = 0.6;
        }
        if (fVar5 < fVar33) {
          pfVar19[uVar24 + 1] = 0.6;
        }
        if (fVar32 <= fVar6) {
          if (fVar7 < fVar17) goto LAB_014ae840;
LAB_014ae7cb:
          pfVar23 = pfVar19 + uVar24 + 4;
          fVar5 = *pfVar23;
          fVar6 = pfVar23[1];
          fVar7 = pfVar23[2];
          fVar8 = pfVar23[3];
        }
        else {
          pfVar19[uVar24 + 2] = 0.6;
          if (fVar17 <= fVar7) goto LAB_014ae7cb;
LAB_014ae840:
          pfVar19[uVar24 + 3] = 0.6;
          pfVar23 = pfVar19 + uVar24 + 4;
          fVar5 = *pfVar23;
          fVar6 = pfVar23[1];
          fVar7 = pfVar23[2];
          fVar8 = pfVar23[3];
        }
        if (fVar5 < fVar31) {
          pfVar19[uVar24 + 4] = 0.6;
        }
        if (fVar6 < fVar33) {
          pfVar19[uVar24 + 5] = 0.6;
        }
        if (fVar7 < fVar32) {
          pfVar19[uVar24 + 6] = 0.6;
        }
        if (fVar8 < fVar17) {
          pfVar19[uVar24 + 7] = 0.6;
        }
        uVar24 = uVar24 + 8;
      } while (uVar21 != uVar24);
      fVar31 = _DAT_023b294c;
      if (uVar21 == uVar28) goto LAB_014ae88b;
    }
    do {
      if (pfVar19[uVar21] <= fVar31 && fVar31 != pfVar19[uVar21]) {
        pfVar19[uVar21] = 0.6;
      }
      uVar21 = uVar21 + 1;
    } while (uVar28 != uVar21);
  }
LAB_014ae88b:
  FUN_015c1480();
  fVar17 = _UNK_0240f0dc;
  fVar32 = _UNK_0240f0d8;
  fVar33 = _UNK_0240f0d4;
  fVar31 = DAT_023b4df0;
  if ((int)local_res8 < 1) {
    FUN_015c1480(param_3);
    goto LAB_014aed67;
  }
  if ((local_res8 < 8) || ((pfVar19 < in_RCX + uVar28 && (in_RCX < pfVar19 + uVar28)))) {
    uVar21 = 0;
LAB_014ae8f1:
    uVar24 = ~uVar21;
    if ((local_res8 & 1) != 0) {
      if (DAT_023b4df0 < in_RCX[uVar21]) {
        pfVar19[uVar21] = 1.0;
      }
      uVar21 = uVar21 | 1;
    }
    fVar31 = DAT_023b4df0;
    if (uVar24 + uVar28 != 0) {
      do {
        if (in_RCX[uVar21] <= fVar31) {
          fVar33 = in_RCX[uVar21 + 1];
        }
        else {
          pfVar19[uVar21] = 1.0;
          fVar33 = in_RCX[uVar21 + 1];
        }
        if (fVar31 < fVar33) {
          pfVar19[uVar21 + 1] = 1.0;
        }
        uVar21 = uVar21 + 2;
      } while (uVar28 != uVar21);
    }
  }
  else {
    uVar21 = (ulonglong)(local_res8 & 0xfffffff8);
    uVar24 = 0;
    do {
      pfVar23 = in_RCX + uVar24;
      fVar5 = pfVar23[1];
      fVar6 = pfVar23[2];
      fVar7 = pfVar23[3];
      pfVar3 = in_RCX + uVar24 + 4;
      fVar8 = *pfVar3;
      fVar9 = pfVar3[1];
      fVar10 = pfVar3[2];
      fVar11 = pfVar3[3];
      if (fVar31 < *pfVar23) {
        pfVar19[uVar24] = 1.0;
      }
      if (fVar33 < fVar5) {
        pfVar19[uVar24 + 1] = 1.0;
      }
      if (fVar32 < fVar6) {
        pfVar19[uVar24 + 2] = 1.0;
      }
      if (fVar17 < fVar7) {
        pfVar19[uVar24 + 3] = 1.0;
      }
      if (fVar31 < fVar8) {
        pfVar19[uVar24 + 4] = 1.0;
      }
      if (fVar33 < fVar9) {
        pfVar19[uVar24 + 5] = 1.0;
      }
      if (fVar32 < fVar10) {
        pfVar19[uVar24 + 6] = 1.0;
      }
      if (fVar17 < fVar11) {
        pfVar19[uVar24 + 7] = 1.0;
      }
      uVar24 = uVar24 + 8;
    } while (uVar21 != uVar24);
    if (uVar21 != uVar28) goto LAB_014ae8f1;
  }
  FUN_015c1480(param_3);
  if (local_res8 < 8) {
    uVar21 = 0;
  }
  else if ((pfVar20 < in_R9 + uVar28) && (in_R9 < pfVar20 + uVar28)) {
    uVar21 = 0;
  }
  else {
    uVar21 = (ulonglong)(local_res8 & 0xfffffff8);
    uVar24 = 0;
    do {
      piVar1 = (int *)((longlong)in_R9 + uVar24);
      iVar25 = piVar1[1];
      iVar29 = piVar1[2];
      iVar30 = piVar1[3];
      piVar4 = (int *)((longlong)in_R9 + uVar24 + 0x10);
      iVar12 = *piVar4;
      iVar13 = piVar4[1];
      iVar14 = piVar4[2];
      iVar15 = piVar4[3];
      if (*piVar1 == 0) {
        *(undefined4 *)((longlong)pfVar20 + uVar24) = 0;
      }
      if (iVar25 == 0) {
        *(undefined4 *)((longlong)pfVar20 + uVar24 + 4) = 0;
      }
      if (iVar29 == 0) {
        *(undefined4 *)((longlong)pfVar20 + uVar24 + 8) = 0;
      }
      if (iVar30 == 0) {
        *(undefined4 *)((longlong)pfVar20 + uVar24 + 0xc) = 0;
      }
      if (iVar12 == 0) {
        *(undefined4 *)((longlong)pfVar20 + uVar24 + 0x10) = 0;
      }
      if (iVar13 == 0) {
        *(undefined4 *)((longlong)pfVar20 + uVar24 + 0x14) = 0;
      }
      if (iVar14 == 0) {
        *(undefined4 *)((longlong)pfVar20 + uVar24 + 0x18) = 0;
      }
      if (iVar15 == 0) {
        *(undefined4 *)((longlong)pfVar20 + uVar24 + 0x1c) = 0;
      }
      uVar24 = uVar24 + 0x20;
    } while ((uVar28 * 4 & 0xffffffffffffffe0) != uVar24);
    if (uVar21 == uVar28) goto LAB_014aed67;
  }
  uVar24 = ~uVar21;
  if ((local_res8 & 1) != 0) {
    if (in_R9[uVar21] == 0.0) {
      pfVar20[uVar21] = 0.0;
    }
    uVar21 = uVar21 | 1;
  }
  if (uVar24 + uVar28 != 0) {
    do {
      while (in_R9[uVar21] == 0.0) {
        pfVar20[uVar21] = 0.0;
        if (in_R9[uVar21 + 1] != 0.0) goto LAB_014aed3f;
LAB_014aed55:
        pfVar20[uVar21 + 1] = 0.0;
        uVar21 = uVar21 + 2;
        if (uVar28 == uVar21) goto LAB_014aed67;
      }
      if (in_R9[uVar21 + 1] == 0.0) goto LAB_014aed55;
LAB_014aed3f:
      uVar21 = uVar21 + 2;
    } while (uVar28 != uVar21);
  }
LAB_014aed67:
  fVar31 = (float)(dVar16 / param_1);
  fVar33 = 0.0;
  bVar18 = 0.0 < *pfVar20 - *pfVar19;
  if (1 < (int)local_res8) {
    iVar29 = 0;
    uVar21 = 1;
    iVar25 = 0;
    local_40 = *pfVar20 - *pfVar19;
    do {
      fVar33 = pfVar20[uVar21] - pfVar19[uVar21];
      if ((local_40 <= 0.0 && !bVar18) && 0.0 < fVar33) {
        iVar25 = (int)uVar21;
      }
      if ((local_40 <= 0.0 && !bVar18) && 0.0 < fVar33) {
        bVar18 = true;
      }
      iVar30 = iVar29;
      if (fVar33 <= 0.0) {
        iVar30 = (int)uVar21;
      }
      if (local_40 <= 0.0) {
        iVar30 = iVar29;
      }
      iVar29 = iVar30;
      if ((bVar18) && (fVar33 < DAT_02394228)) {
        fVar32 = 0.0;
        uVar22 = iVar29 - iVar25;
        if (uVar22 != 0 && iVar25 <= iVar29) {
          uVar24 = (ulonglong)iVar25;
          uVar26 = ~uVar24;
          fVar32 = 0.0;
          uVar27 = (ulonglong)uVar22 & 3;
          if ((uVar22 & 3) != 0) {
            do {
              fVar32 = fVar32 + (pfVar20[uVar24] - pfVar19[uVar24]);
              uVar24 = uVar24 + 1;
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
          }
          if (2 < uVar26 + (longlong)iVar29) {
            do {
              fVar32 = (pfVar20[uVar24 + 3] - pfVar19[uVar24 + 3]) +
                       (pfVar20[uVar24 + 2] - pfVar19[uVar24 + 2]) +
                       (pfVar20[uVar24 + 1] - pfVar19[uVar24 + 1]) +
                       (pfVar20[uVar24] - pfVar19[uVar24]) + fVar32;
              uVar24 = uVar24 + 4;
            } while ((longlong)iVar29 != uVar24);
          }
        }
        bVar18 = false;
        if ((param_4 < fVar32) && ((int)((double)in_XMM4_Da * param_1) < (int)uVar22)) {
          FUN_01432380((double)((float)iVar25 * fVar31),(double)((float)iVar29 * fVar31));
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_00d21140();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          bVar18 = false;
        }
      }
      uVar21 = uVar21 + 1;
      local_40 = fVar33;
    } while (uVar21 != uVar28);
    fVar33 = (float)iVar25;
  }
  if (bVar18) {
    FUN_01432380((double)(fVar33 * fVar31),(double)((float)(int)local_res8 * fVar31));
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_00d21140();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00e83070();
  FUN_00e83070();
  return;
}




// ==================================================
// @0077cd50 (2462 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  longlong **pplVar8;
  longlong lVar9;
  longlong *this;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  pplVar8 = &local_58;
  FUN_00d3ecf0();
  plVar1 = local_58;
  if ((DAT_0272a440 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    _DAT_0272a390 = FUN_000fddb0();
    _DAT_0272a378 = "MUAmplitudeAnalyzer";
    _DAT_0272a380 = 0x90;
    _DAT_0272a388 = FUN_0079c0e0;
    _DAT_0272a398 = 0;
    uRam000000000272a3a0 = 0;
    _DAT_0272a3a8 = 0;
    _DAT_0272a420 = 0;
    uRam000000000272a428 = 0;
    _DAT_0272a430 = 0;
    DAT_0272a432 = 1;
    _DAT_0272a3b0 = 0;
    uRam000000000272a3b8 = 0;
    _DAT_0272a3c0 = 0;
    uRam000000000272a3c8 = 0;
    _DAT_0272a3d0 = 0;
    uRam000000000272a3d8 = 0;
    _DAT_0272a3e0 = 0;
    uRam000000000272a3e8 = 0;
    _DAT_0272a3f0 = 0;
    uRam000000000272a3f8 = 0;
    _DAT_0272a400 = 0;
    uRam000000000272a408 = 0;
    _DAT_0272a410 = 0;
    uRam000000000272a418 = 0;
    DAT_0272a43b = 0;
    _DAT_0272a433 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_0077cdaf:
    pplVar8 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0077cdaf;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    FUN_00d3ecf0();
    plVar2 = local_58;
    if ((((local_50 == '\0') && (local_58 != (longlong *)0x0)) && (FUN_00d50b00(), local_50 != '\0')
        ) && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    cVar5 = FUN_00e34240();
    if (cVar5 == '\0') {
      pplVar8 = &local_68;
      FUN_00d3ecf0();
      plVar3 = local_68;
      if ((DAT_0278c910 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        _DAT_026d1ef8 = FUN_00d4fe50();
        _DAT_026d1ee0 = "GNJob";
        _DAT_026d1ee8 = 0x60;
        _DAT_026d1ef0 = FUN_000443f0;
        _DAT_026d1f00 = 0;
        uRam00000000026d1f08 = 0;
        _DAT_026d1f10 = 0;
        _DAT_026d1f88 = 0;
        uRam00000000026d1f90 = 0;
        _DAT_026d1f98 = 0;
        DAT_026d1f9a = 1;
        _DAT_026d1f18 = 0;
        uRam00000000026d1f20 = 0;
        _DAT_026d1f28 = 0;
        uRam00000000026d1f30 = 0;
        _DAT_026d1f38 = 0;
        uRam00000000026d1f40 = 0;
        _DAT_026d1f48 = 0;
        uRam00000000026d1f50 = 0;
        _DAT_026d1f58 = 0;
        uRam00000000026d1f60 = 0;
        _DAT_026d1f68 = 0;
        uRam00000000026d1f70 = 0;
        _DAT_026d1f78 = 0;
        uRam00000000026d1f80 = 0;
        DAT_026d1fa3 = 0;
        _DAT_026d1f9b = 0;
        ___cxa_guard_release();
      }
      if (plVar3 == (longlong *)0x0) {
LAB_0077d0f1:
        pplVar8 = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar3 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_0077d0f1;
      }
      plVar3 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar8 + 1) = 0;
      }
      local_50 = '\0';
      local_58 = plVar3;
      FUN_00e8adb0();
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((DAT_026e0c38 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        _DAT_026e0b88 = FUN_000fddb0();
        _DAT_026e0b70 = "MUElementAnalyzer";
        _DAT_026e0b78 = 0x180;
        _DAT_026e0b80 = FUN_000fdd80;
        _DAT_026e0b90 = 0;
        uRam00000000026e0b98 = 0;
        _DAT_026e0ba0 = 0;
        _DAT_026e0c18 = 0;
        uRam00000000026e0c20 = 0;
        _DAT_026e0c28 = 0;
        DAT_026e0c2a = 1;
        _DAT_026e0ba8 = 0;
        uRam00000000026e0bb0 = 0;
        _DAT_026e0bb8 = 0;
        uRam00000000026e0bc0 = 0;
        _DAT_026e0bc8 = 0;
        uRam00000000026e0bd0 = 0;
        _DAT_026e0bd8 = 0;
        uRam00000000026e0be0 = 0;
        _DAT_026e0be8 = 0;
        uRam00000000026e0bf0 = 0;
        _DAT_026e0bf8 = 0;
        uRam00000000026e0c00 = 0;
        _DAT_026e0c08 = 0;
        uRam00000000026e0c10 = 0;
        DAT_026e0c33 = 0;
        _DAT_026e0c2b = 0;
        ___cxa_guard_release();
      }
      if (plVar2 == (longlong *)0x0) {
LAB_0077ceed:
        if (DAT_02802688 != (longlong *)0x0) goto LAB_0077d1f7;
LAB_0077d1ae:
        uVar10 = FUN_0079bbe0();
        plVar3 = DAT_02802688;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar5 = FUN_00e85ea0();
          uVar10 = extraout_XMM0_Da_00;
          plVar3 = DAT_02802688;
          if (cVar5 != '\0') {
            plVar3 = plVar2;
          }
        }
        if (plVar3 != (longlong *)0x0) goto LAB_0077d1f7;
      }
      else {
        (**(code **)(*plVar2 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_0077ceed;
        if (plVar2 == (longlong *)0x0) goto LAB_0077d1ae;
LAB_0077d1f7:
        uVar10 = FUN_00e33de0();
        local_c8 = DAT_0270b920;
        if (DAT_0270b920 != 0) {
          uVar10 = FUN_00d50b00();
        }
        local_c0 = '\x01';
        pplVar8 = &local_58;
        FUN_000175c0(uVar10,&local_c8);
        plVar3 = local_58;
        FUN_0006e1c0();
        if (plVar3 == (longlong *)0x0) {
LAB_0077d26b:
          pplVar8 = &DAT_02802688;
        }
        else {
          (**(code **)(*plVar3 + 0x360))();
          cVar5 = FUN_00e85ea0();
          if (cVar5 == '\0') goto LAB_0077d26b;
        }
        plVar3 = *pplVar8;
        if (*(char *)(pplVar8 + 1) == '\0') {
          if (plVar3 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar8 + 1) = 0;
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*this + 0x610))();
        plVar4 = local_58;
        if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0077d31c;
          }
        }
        else if (local_58 != (longlong *)0x0) {
LAB_0077d31c:
          local_50 = '\0';
          local_58 = (longlong *)0x0;
          local_48 = plVar4;
          local_38 = 0;
          local_40 = 0;
          if (0 < *(int *)((longlong)plVar4 + 0xc)) {
            lVar9 = 0;
            do {
              local_58 = *(longlong **)(plVar4[2] + lVar9 * 8);
              local_b8 = plVar2;
              local_b0 = '\0';
              local_a0 = '\0';
              local_98 = 0;
              local_90 = '\0';
              local_a8 = plVar3;
              FUN_006fe880(&local_98,&local_a8);
              if ((local_90 != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
              if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              lVar9 = lVar9 + 1;
              local_40 = CONCAT44(local_40._4_4_,(int)lVar9);
            } while ((int)lVar9 < *(int *)((longlong)plVar4 + 0xc));
          }
          FUN_000e3600();
          FUN_00d50b20();
        }
        uVar10 = FUN_0076f320();
        if (plVar3 != (longlong *)0x0) {
          uVar10 = FUN_00d50b20();
        }
      }
      FUN_0074ea80(uVar10,1);
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_0077d47c;
  }
  uVar10 = FUN_00e33de0();
  local_f8 = DAT_0270b920;
  if (DAT_0270b920 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_f0 = '\x01';
  pplVar8 = &local_58;
  FUN_000175c0(uVar10,&local_f8);
  plVar2 = local_58;
  FUN_0006e1c0();
  if (plVar2 == (longlong *)0x0) {
LAB_0077ce69:
    pplVar8 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0077ce69;
  }
  plVar2 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar10 = (**(code **)(*this + 0x610))();
  plVar3 = local_58;
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      uVar10 = FUN_00d50b00();
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      goto LAB_0077cfa4;
    }
  }
  else if (local_58 != (longlong *)0x0) {
LAB_0077cfa4:
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_48 = plVar3;
    local_38 = 0;
    local_40 = 0;
    if (0 < *(int *)((longlong)plVar3 + 0xc)) {
      lVar9 = 0;
      do {
        local_58 = *(longlong **)(plVar3[2] + lVar9 * 8);
        local_e0 = '\0';
        local_d0 = '\0';
        local_e8 = plVar1;
        local_d8 = plVar2;
        uVar10 = FUN_006fe4f0(uVar10,&local_d8);
        if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
        local_40 = CONCAT44(local_40._4_4_,(int)lVar9);
      } while ((int)lVar9 < *(int *)((longlong)plVar3 + 0xc));
    }
    FUN_000e3600();
    FUN_00d50b20();
  }
  uVar6 = FUN_00e34240();
  FUN_0074ea80(extraout_XMM0_Da,uVar6);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_0077d47c:
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00770960 (2427 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  longlong **pplVar7;
  longlong *plVar8;
  undefined8 *arg1;
  undefined4 uVar9;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined1 local_118;
  longlong *local_110;
  undefined1 local_108;
  undefined1 local_f8;
  undefined1 local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  int local_60;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_78 + 0x450))();
  if (cVar2 == '\0') {
    bVar3 = 0;
  }
  else {
    FUN_00757c60();
    plVar8 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_f8 = 1;
    bVar3 = FUN_0076e4d0();
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar3 = bVar3 ^ 1;
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar3 == 0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    FUN_00757c60();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    plVar8 = local_78;
    if (local_70 == '\0') {
      if (local_78 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_130 = *arg1;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_108 = 0;
  local_110 = plVar8;
  FUN_00764ff0(0,&local_130,&local_120,bVar3);
  if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_78 + 0x450))();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    if (local_78 == (longlong *)0x0) goto LAB_007712f0;
    local_60 = -1;
    while( true ) {
      lVar6 = (longlong)local_60;
      local_60 = local_60 + 1;
      if (*(int *)((longlong)local_78 + 0xc) <= local_60) break;
      plVar1 = *(longlong **)(local_78[2] + 8 + lVar6 * 8);
      local_40 = plVar1;
      if ((DAT_026e0c38 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026e0b88 = FUN_000fddb0();
        _DAT_026e0b70 = "MUElementAnalyzer";
        _DAT_026e0b78 = 0x180;
        _DAT_026e0b80 = FUN_000fdd80;
        _DAT_026e0b90 = 0;
        uRam00000000026e0b98 = 0;
        _DAT_026e0ba0 = 0;
        _DAT_026e0c18 = 0;
        uRam00000000026e0c20 = 0;
        _DAT_026e0c28 = 0;
        DAT_026e0c2a = 1;
        _DAT_026e0ba8 = 0;
        uRam00000000026e0bb0 = 0;
        _DAT_026e0bb8 = 0;
        uRam00000000026e0bc0 = 0;
        _DAT_026e0bc8 = 0;
        uRam00000000026e0bd0 = 0;
        _DAT_026e0bd8 = 0;
        uRam00000000026e0be0 = 0;
        _DAT_026e0be8 = 0;
        uRam00000000026e0bf0 = 0;
        _DAT_026e0bf8 = 0;
        uRam00000000026e0c00 = 0;
        _DAT_026e0c08 = 0;
        uRam00000000026e0c10 = 0;
        DAT_026e0c33 = 0;
        _DAT_026e0c2b = 0;
        ___cxa_guard_release();
      }
      pplVar7 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar7 = &local_40;
        if (cVar2 == '\0') {
          pplVar7 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar7 != (longlong *)0x0) {
        FUN_00e33de0();
        uVar9 = FUN_00d46300();
        plVar1 = DAT_027295b8;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            uVar9 = FUN_00d50b00();
            plVar1 = DAT_027295b8;
          }
        }
        else {
          local_48 = '\0';
        }
        DAT_027295b8 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          uVar9 = FUN_00d50b00();
        }
        local_38 = '\0';
        local_40 = plVar1;
        FUN_00ca0840(uVar9,&local_40);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    if (local_78 == (longlong *)0x0) goto LAB_007712f0;
    local_60 = -1;
    while( true ) {
      lVar6 = (longlong)local_60;
      local_60 = local_60 + 1;
      if (*(int *)((longlong)local_78 + 0xc) <= local_60) break;
      plVar1 = *(longlong **)(local_78[2] + 8 + lVar6 * 8);
      local_40 = plVar1;
      if ((DAT_026e0c38 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026e0b88 = FUN_000fddb0();
        _DAT_026e0b70 = "MUElementAnalyzer";
        _DAT_026e0b78 = 0x180;
        _DAT_026e0b80 = FUN_000fdd80;
        _DAT_026e0b90 = 0;
        uRam00000000026e0b98 = 0;
        _DAT_026e0ba0 = 0;
        _DAT_026e0c18 = 0;
        uRam00000000026e0c20 = 0;
        _DAT_026e0c28 = 0;
        DAT_026e0c2a = 1;
        _DAT_026e0ba8 = 0;
        uRam00000000026e0bb0 = 0;
        _DAT_026e0bb8 = 0;
        uRam00000000026e0bc0 = 0;
        _DAT_026e0bc8 = 0;
        uRam00000000026e0bd0 = 0;
        _DAT_026e0bd8 = 0;
        uRam00000000026e0be0 = 0;
        _DAT_026e0be8 = 0;
        uRam00000000026e0bf0 = 0;
        _DAT_026e0bf8 = 0;
        uRam00000000026e0c00 = 0;
        _DAT_026e0c08 = 0;
        uRam00000000026e0c10 = 0;
        DAT_026e0c33 = 0;
        _DAT_026e0c2b = 0;
        ___cxa_guard_release();
      }
      pplVar7 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar7 = &local_40;
        if (cVar2 == '\0') {
          pplVar7 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar7 != (longlong *)0x0) {
        FUN_00e33de0();
        FUN_00757c60();
        lVar6 = local_e0;
        if (local_d8 == '\0') {
          if (local_e0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_d8 = '\0';
        }
        local_e8 = 1;
        FUN_0076e4d0();
        uVar9 = FUN_00d46300();
        plVar1 = DAT_02729580;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            uVar9 = FUN_00d50b00();
            plVar1 = DAT_02729580;
          }
        }
        else {
          local_48 = '\0';
        }
        DAT_02729580 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          uVar9 = FUN_00d50b00();
        }
        local_38 = '\0';
        local_40 = plVar1;
        FUN_00ca0840(uVar9,&local_40);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        FUN_00e33de0();
        uVar9 = FUN_00d46300();
        plVar1 = DAT_027295b0;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            uVar9 = FUN_00d50b00();
            plVar1 = DAT_027295b0;
          }
        }
        else {
          local_48 = '\0';
        }
        DAT_027295b0 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          uVar9 = FUN_00d50b00();
        }
        local_38 = '\0';
        local_40 = plVar1;
        FUN_00ca0840(uVar9,&local_40);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_0079bb70();
  if (local_78 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_007712f0:
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @014b5230 (2425 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  float *pfVar10;
  float *in_RCX;
  ulonglong in_RDX;
  longlong lVar11;
  longlong lVar12;
  longlong arg1;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  float *in_R8;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  float *in_R9;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint local_38;
  
  if ((param_1 < DAT_02390d34) || (param_2 < DAT_02390d34)) {
    if (in_R8 != (float *)0x0) {
      *in_R8 = 0.0;
    }
    if (in_R9 == (float *)0x0) {
      return;
    }
    goto LAB_014b584f;
  }
  param_2 = param_1 / param_2;
  if (param_2 <= DAT_02390124) {
    fVar29 = DAT_02390124 / (float)(int)(DAT_02390124 / param_2 + DAT_0239011c);
  }
  else {
    fVar29 = (float)(int)(param_2 + DAT_0239011c);
  }
  fVar23 = param_1 / fVar29 + DAT_0239011c;
  param_3 = (float)(int)fVar23 * param_3;
  uVar16 = (int)((float)(int)param_3 * fVar29) + 1;
  uVar14 = (ulonglong)uVar16;
  uVar9 = (ulonglong)(int)uVar16;
  if ((longlong)in_RDX < (longlong)uVar9) {
    param_3 = (float)(int)in_RDX / fVar29;
    uVar9 = (ulonglong)(int)in_RDX;
    uVar14 = in_RDX & 0xffffffff;
  }
  uVar16 = (uint)param_3;
  uVar13 = 2;
  if (2 < (int)uVar16) {
    uVar13 = (ulonglong)uVar16;
  }
  lVar12 = (longlong)param_4 - (longlong)((int)(uVar14 >> 0x1f) + (int)uVar14 >> 1);
  lVar19 = ~uVar9 + in_RDX;
  if ((longlong)(lVar12 + uVar9) < (longlong)in_RDX) {
    lVar19 = lVar12;
  }
  lVar12 = 0;
  if (-1 < lVar19) {
    lVar12 = lVar19;
  }
  fVar24 = 0.0;
  local_38 = (uint)uVar13;
  if ((0.0 < fVar29) &&
     ((uVar22 = (uint)((float)(~-(uint)(fVar29 < DAT_02390124) & (uint)fVar29 |
                              (uint)(DAT_02390124 / fVar29) & -(uint)(fVar29 < DAT_02390124)) +
                      DAT_0239011c), (int)uVar22 <= (int)local_38 || (fVar29 < DAT_02390124)))) {
    if (uVar22 == 1) {
      uVar21 = local_38 - 1;
      pfVar10 = in_RCX;
      uVar22 = local_38;
      if ((6 < uVar21) &&
         ((uVar9 = (ulonglong)uVar21 + 1,
          (float *)(arg1 + (lVar12 + (ulonglong)uVar21) * 4 + 4) <= in_RCX ||
          (uVar22 = uVar16, in_RCX + uVar9 <= (float *)(arg1 + lVar12 * 4))))) {
        uVar20 = uVar9 & 0xfffffffffffffff8;
        uVar17 = (uVar20 - 8 >> 3) + 1;
        uVar14 = (ulonglong)((uint)uVar17 & 3);
        if (uVar20 - 8 < 0x18) {
          lVar11 = 0;
        }
        else {
          lVar19 = arg1 + lVar12 * 4;
          lVar18 = -(uVar17 & 0xfffffffffffffffc);
          lVar11 = 0;
          do {
            puVar1 = (undefined8 *)(lVar19 + lVar11 * 4);
            uVar3 = puVar1[1];
            puVar2 = (undefined8 *)(lVar19 + 0x10 + lVar11 * 4);
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            *(undefined8 *)(in_RCX + lVar11) = *puVar1;
            *(undefined8 *)(in_RCX + lVar11 + 2) = uVar3;
            *(undefined8 *)(in_RCX + lVar11 + 4) = uVar4;
            *(undefined8 *)(in_RCX + lVar11 + 4 + 2) = uVar5;
            puVar1 = (undefined8 *)(lVar19 + 0x20 + lVar11 * 4);
            uVar3 = puVar1[1];
            puVar2 = (undefined8 *)(lVar19 + 0x30 + lVar11 * 4);
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            *(undefined8 *)(in_RCX + lVar11 + 8) = *puVar1;
            *(undefined8 *)(in_RCX + lVar11 + 8 + 2) = uVar3;
            *(undefined8 *)(in_RCX + lVar11 + 0xc) = uVar4;
            *(undefined8 *)(in_RCX + lVar11 + 0xc + 2) = uVar5;
            puVar1 = (undefined8 *)(lVar19 + 0x40 + lVar11 * 4);
            uVar3 = puVar1[1];
            puVar2 = (undefined8 *)(lVar19 + 0x50 + lVar11 * 4);
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            *(undefined8 *)(in_RCX + lVar11 + 0x10) = *puVar1;
            *(undefined8 *)(in_RCX + lVar11 + 0x10 + 2) = uVar3;
            *(undefined8 *)(in_RCX + lVar11 + 0x14) = uVar4;
            *(undefined8 *)(in_RCX + lVar11 + 0x14 + 2) = uVar5;
            puVar2 = (undefined8 *)(lVar19 + 0x60 + lVar11 * 4);
            uVar3 = puVar2[1];
            puVar1 = (undefined8 *)(lVar19 + 0x70 + lVar11 * 4);
            uVar4 = *puVar1;
            uVar5 = puVar1[1];
            *(undefined8 *)(in_RCX + lVar11 + 0x18) = *puVar2;
            *(undefined8 *)(in_RCX + lVar11 + 0x18 + 2) = uVar3;
            *(undefined8 *)(in_RCX + lVar11 + 0x1c) = uVar4;
            *(undefined8 *)(in_RCX + lVar11 + 0x1c + 2) = uVar5;
            lVar11 = lVar11 + 0x20;
            lVar18 = lVar18 + 4;
          } while (lVar18 != 0);
        }
        if (uVar14 != 0) {
          lVar19 = arg1 + (lVar11 + lVar12) * 4;
          lVar18 = 0;
          do {
            puVar2 = (undefined8 *)(lVar19 + lVar18);
            uVar3 = puVar2[1];
            puVar1 = (undefined8 *)(lVar19 + 0x10 + lVar18);
            uVar4 = *puVar1;
            uVar5 = puVar1[1];
            puVar1 = (undefined8 *)((longlong)in_RCX + lVar18 + lVar11 * 4);
            *puVar1 = *puVar2;
            puVar1[1] = uVar3;
            puVar1 = (undefined8 *)((longlong)in_RCX + lVar18 + lVar11 * 4 + 0x10);
            *puVar1 = uVar4;
            puVar1[1] = uVar5;
            lVar18 = lVar18 + 0x20;
          } while (uVar14 << 5 != lVar18);
        }
        if (uVar9 == uVar20) goto LAB_014b5398;
        lVar12 = lVar12 + uVar20;
        pfVar10 = in_RCX + uVar20;
        uVar22 = local_38 - (int)uVar20;
      }
      uVar16 = uVar22 - 1;
      if ((uVar22 & 3) != 0) {
        uVar21 = 0;
        do {
          *pfVar10 = *(float *)(arg1 + lVar12 * 4);
          pfVar10 = pfVar10 + 1;
          lVar12 = lVar12 + 1;
          uVar21 = uVar21 + 1;
        } while ((uVar22 & 3) != uVar21);
        uVar22 = uVar22 - uVar21;
      }
      if (2 < uVar16) {
        lVar19 = arg1 + lVar12 * 4;
        lVar12 = 0;
        do {
          pfVar10[lVar12] = *(float *)(lVar19 + lVar12 * 4);
          pfVar10[lVar12 + 1] = *(float *)(lVar19 + 4 + lVar12 * 4);
          pfVar10[lVar12 + 2] = *(float *)(lVar19 + 8 + lVar12 * 4);
          pfVar10[lVar12 + 3] = *(float *)(lVar19 + 0xc + lVar12 * 4);
          lVar12 = lVar12 + 4;
        } while (uVar22 != (uint)lVar12);
      }
    }
    else if (DAT_02390124 <= fVar29) {
      uVar14 = (ulonglong)(uVar22 - 1);
      lVar11 = -lVar12;
      lVar19 = arg1 + lVar12 * 4;
      pfVar10 = in_RCX;
      uVar9 = uVar13;
      do {
        fVar27 = 0.0;
        uVar16 = uVar22;
        lVar18 = lVar12;
        if ((uVar22 & 3) != 0) {
          lVar18 = 0;
          do {
            fVar27 = fVar27 + *(float *)(lVar19 + lVar18 * 4);
            lVar18 = lVar18 + 1;
          } while ((uVar22 & 3) != (uint)lVar18);
          uVar16 = uVar22 - (uint)lVar18;
          lVar18 = lVar18 - lVar11;
        }
        if (2 < uVar22 - 1) {
          lVar18 = arg1 + 0xc + lVar18 * 4;
          lVar15 = 0;
          do {
            fVar27 = fVar27 + *(float *)(lVar18 + -0xc + lVar15 * 4) +
                     *(float *)(lVar18 + -8 + lVar15 * 4) + *(float *)(lVar18 + -4 + lVar15 * 4) +
                     *(float *)(lVar18 + lVar15 * 4);
            lVar15 = lVar15 + 4;
          } while (uVar16 != (uint)lVar15);
        }
        lVar12 = lVar12 + uVar14 + 1;
        *pfVar10 = fVar27;
        pfVar10 = pfVar10 + 1;
        lVar11 = lVar11 + ~uVar14;
        lVar19 = lVar19 + uVar14 * 4 + 4;
        uVar16 = (int)uVar9 - 1;
        uVar9 = (ulonglong)uVar16;
      } while (uVar16 != 0);
    }
    else {
      fVar27 = *(float *)(arg1 + lVar12 * 4);
      lVar12 = lVar12 + 1;
      fVar25 = 0.0;
      lVar19 = 0;
      uVar16 = 0;
      fVar28 = fVar27;
      do {
        fVar26 = fVar27;
        if (uVar16 == 0) {
          fVar26 = *(float *)(arg1 + lVar12 * 4);
          fVar25 = (fVar26 - fVar27) * fVar29;
          lVar12 = lVar12 + 1;
          uVar16 = uVar22;
          fVar28 = fVar27;
        }
        in_RCX[lVar19] = fVar28;
        if (uVar16 - 1 == 0) {
          fVar27 = *(float *)(arg1 + lVar12 * 4);
          fVar25 = (fVar27 - fVar26) * fVar29;
          lVar12 = lVar12 + 1;
          uVar16 = uVar22;
          fVar28 = fVar26;
        }
        else {
          uVar16 = uVar16 - 1;
          fVar28 = fVar28 + fVar25;
          fVar27 = fVar26;
        }
        uVar16 = uVar16 - 1;
        in_RCX[lVar19 + 1] = fVar28;
        fVar28 = fVar28 + fVar25;
        lVar19 = lVar19 + 2;
      } while ((local_38 & 0xfffffffe) != (uint)lVar19);
      if ((uVar13 & 1) != 0) {
        if (uVar16 != 0) {
          fVar27 = fVar28;
        }
        in_RCX[lVar19] = fVar27;
      }
    }
  }
LAB_014b5398:
  if (uVar13 - 1 < 7) {
    uVar9 = 0;
  }
  else {
    fVar24 = 0.0;
    uVar9 = 0;
    do {
      fVar24 = fVar24 + in_RCX[uVar9] + in_RCX[uVar9 + 1] + in_RCX[uVar9 + 2] + in_RCX[uVar9 + 3] +
               in_RCX[uVar9 + 4] + in_RCX[uVar9 + 5] + in_RCX[uVar9 + 6] + in_RCX[uVar9 + 7];
      uVar9 = uVar9 + 8;
    } while ((local_38 & 0x7ffffff8) != uVar9);
  }
  if ((ulonglong)(local_38 & 7) != 0) {
    uVar14 = 0;
    do {
      fVar24 = fVar24 + in_RCX[uVar9 + uVar14];
      uVar14 = uVar14 + 1;
    } while ((local_38 & 7) != uVar14);
  }
  uVar16 = (uint)fVar23;
  fVar24 = fVar24 / (float)(int)local_38;
  fVar23 = 0.0;
  uVar9 = 0;
  do {
    fVar27 = *(float *)((longlong)in_RCX + uVar9) - fVar24;
    fVar28 = *(float *)((longlong)in_RCX + uVar9 + 4) - fVar24;
    fVar23 = (float)(~-(uint)(0.0 < fVar28) & ((uint)fVar28 ^ _DAT_023945e0) |
                    (uint)fVar28 & -(uint)(0.0 < fVar28)) +
             (float)(~-(uint)(0.0 < fVar27) & ((uint)fVar27 ^ _DAT_023945e0) |
                    (uint)fVar27 & -(uint)(0.0 < fVar27)) + fVar23;
    uVar9 = uVar9 + 8;
  } while ((uVar13 * 4 & 0xfffffffffffffff8) != uVar9);
  if ((uVar13 & 1) != 0) {
    fVar24 = *(float *)((longlong)in_RCX + uVar9) - fVar24;
    fVar23 = fVar23 + (float)(~-(uint)(0.0 < fVar24) & (_DAT_023945e0 ^ (uint)fVar24) |
                             (uint)fVar24 & -(uint)(0.0 < fVar24));
  }
  fVar23 = fVar23 / (float)(int)local_38;
  uVar22 = uVar16;
  fVar24 = DAT_0240dedc;
  if (0.0 < fVar23) {
    fVar23 = DAT_02390124 / fVar23;
    uVar22 = uVar16 - 1;
    lVar19 = (longlong)(int)uVar22;
    uVar9 = uVar13 - lVar19;
    iVar8 = (int)uVar9;
    if (uVar9 == 0 || (longlong)uVar13 < lVar19) {
      fVar24 = 0.0;
    }
    else {
      pfVar10 = in_RCX + lVar19;
      if ((uVar9 & 1) == 0) {
        fVar24 = 0.0;
        pfVar6 = in_RCX;
        iVar7 = iVar8;
      }
      else {
        fVar24 = *in_RCX - *pfVar10;
        pfVar10 = pfVar10 + 1;
        fVar24 = (float)(~-(uint)(0.0 < fVar24) & (_DAT_023945e0 ^ (uint)fVar24) |
                        (uint)fVar24 & -(uint)(0.0 < fVar24)) + 0.0;
        pfVar6 = in_RCX + 1;
        iVar7 = iVar8 + -1;
      }
      if (local_38 != uVar16) {
        lVar12 = 0;
        do {
          fVar27 = pfVar6[lVar12] - pfVar10[lVar12];
          fVar28 = pfVar6[lVar12 + 1] - pfVar10[lVar12 + 1];
          fVar24 = (float)(~-(uint)(0.0 < fVar28) & ((uint)fVar28 ^ _DAT_023945e0) |
                          (uint)fVar28 & -(uint)(0.0 < fVar28)) +
                   (float)(~-(uint)(0.0 < fVar27) & ((uint)fVar27 ^ _DAT_023945e0) |
                          (uint)fVar27 & -(uint)(0.0 < fVar27)) + fVar24;
          lVar12 = lVar12 + 2;
        } while (iVar7 != (int)lVar12);
      }
    }
    fVar24 = DAT_02390124 - (fVar24 / (float)(iVar8 * 2)) * fVar23;
    if (fVar24 <= DAT_0241ee30) {
      fVar24 = DAT_0241ee30;
      uVar22 = uVar16;
    }
    lVar12 = lVar19 + 1;
    uVar9 = uVar13 - lVar12;
    iVar8 = (int)uVar9;
    if (uVar9 == 0 || (longlong)uVar13 < lVar12) {
      fVar27 = 0.0;
    }
    else {
      pfVar10 = in_RCX + lVar12;
      if ((uVar9 & 1) == 0) {
        fVar27 = 0.0;
        pfVar6 = in_RCX;
        iVar7 = iVar8;
      }
      else {
        fVar27 = *in_RCX - *pfVar10;
        pfVar10 = pfVar10 + 1;
        fVar27 = (float)(~-(uint)(0.0 < fVar27) & (_DAT_023945e0 ^ (uint)fVar27) |
                        (uint)fVar27 & -(uint)(0.0 < fVar27)) + 0.0;
        pfVar6 = in_RCX + 1;
        iVar7 = iVar8 + -1;
      }
      if (local_38 != uVar16 + 1) {
        lVar11 = 0;
        do {
          fVar28 = pfVar6[lVar11] - pfVar10[lVar11];
          fVar25 = pfVar6[lVar11 + 1] - pfVar10[lVar11 + 1];
          fVar27 = (float)(~-(uint)(0.0 < fVar25) & ((uint)fVar25 ^ _DAT_023945e0) |
                          (uint)fVar25 & -(uint)(0.0 < fVar25)) +
                   (float)(~-(uint)(0.0 < fVar28) & ((uint)fVar28 ^ _DAT_023945e0) |
                          (uint)fVar28 & -(uint)(0.0 < fVar28)) + fVar27;
          lVar11 = lVar11 + 2;
        } while (iVar7 != (int)lVar11);
      }
    }
    fVar27 = DAT_02390124 - (fVar27 / (float)(iVar8 * 2)) * fVar23;
    if (fVar24 < fVar27) {
      uVar22 = (uint)lVar12;
      fVar24 = fVar27;
    }
    lVar19 = lVar19 + 2;
    uVar9 = uVar13 - lVar19;
    iVar8 = (int)uVar9;
    if (uVar9 == 0 || (longlong)uVar13 < lVar19) {
      fVar27 = 0.0;
    }
    else {
      pfVar10 = in_RCX + lVar19;
      if ((uVar9 & 1) == 0) {
        fVar27 = 0.0;
        iVar7 = iVar8;
      }
      else {
        fVar27 = *in_RCX - *pfVar10;
        in_RCX = in_RCX + 1;
        pfVar10 = pfVar10 + 1;
        fVar27 = (float)(~-(uint)(0.0 < fVar27) & (_DAT_023945e0 ^ (uint)fVar27) |
                        (uint)fVar27 & -(uint)(0.0 < fVar27)) + 0.0;
        iVar7 = iVar8 + -1;
      }
      if (local_38 - 2 != uVar16) {
        lVar12 = 0;
        do {
          fVar28 = in_RCX[lVar12] - pfVar10[lVar12];
          fVar25 = in_RCX[lVar12 + 1] - pfVar10[lVar12 + 1];
          fVar27 = (float)(~-(uint)(0.0 < fVar25) & ((uint)fVar25 ^ _DAT_023945e0) |
                          (uint)fVar25 & -(uint)(0.0 < fVar25)) +
                   (float)(~-(uint)(0.0 < fVar28) & ((uint)fVar28 ^ _DAT_023945e0) |
                          (uint)fVar28 & -(uint)(0.0 < fVar28)) + fVar27;
          lVar12 = lVar12 + 2;
        } while (iVar7 != (int)lVar12);
      }
    }
    fVar23 = DAT_02390124 - fVar23 * (fVar27 / (float)(iVar8 * 2));
    if (fVar24 < fVar23) {
      uVar22 = (uint)lVar19;
      fVar24 = fVar23;
    }
  }
  if (in_R8 != (float *)0x0) {
    *in_R8 = fVar24;
  }
  if (in_R9 == (float *)0x0) {
    return;
  }
  param_1 = fVar29 * (float)(int)uVar22;
LAB_014b584f:
  *in_R9 = param_1;
  return;
}




// ==================================================
// @014adca0 (2407 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  ulonglong uVar7;
  uint uVar8;
  bool bVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong in_RCX;
  ulonglong uVar15;
  ulonglong in_RDX;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong arg1;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong in_R8;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  longlong *local_res8;
  float *local_res10;
  ulonglong local_98;
  longlong local_58;
  float local_48;
  uint local_44;
  
  bVar3 = *(int *)(*local_res8 + 0xc) < 1;
  if (bVar3) {
    uVar22 = in_RDX - 1;
    local_58 = 0;
  }
  else {
    local_58 = **(longlong **)(*local_res8 + 0x10);
    FUN_00d50b00();
    uVar22 = (ulonglong)(*(double *)(local_58 + 0x10) * param_1);
  }
  bVar9 = !bVar3;
  local_98 = in_RDX - 1;
  local_44 = (uint)!bVar3;
  dVar29 = param_1 / param_3;
  uVar15 = (ulonglong)param_4;
  fVar28 = DAT_023d59b4;
  if (0 < (int)param_4) {
    uVar18 = 0;
    uVar23 = 0;
    local_48 = DAT_023d59b4;
    do {
      fVar32 = *(float *)(in_R8 + uVar18 * 4);
      uVar24 = (ulonglong)((double)(int)uVar18 * dVar29);
      uVar27 = uVar22;
      if (((longlong)uVar22 <= (longlong)uVar24) &&
         (uVar27 = local_98, (int)local_44 < *(int *)(*local_res8 + 0xc))) {
        lVar21 = *(longlong *)(*(longlong *)(*local_res8 + 0x10) + (longlong)(int)local_44 * 8);
        if (local_58 == lVar21) {
          lVar21 = local_58;
          bVar3 = bVar9;
          if ((!bVar9) && (local_58 != 0)) {
            FUN_00d50b00();
            bVar3 = true;
          }
        }
        else {
          if (lVar21 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar9) && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar9 = bVar3;
        local_44 = local_44 + 1;
        uVar23 = uVar22;
        uVar27 = (longlong)(*(double *)(lVar21 + 0x10) * param_1);
        local_58 = lVar21;
      }
      uVar22 = uVar27;
      iVar12 = (int)fVar32;
      if (iVar12 < (int)dVar29) {
        iVar12 = (int)dVar29;
      }
      uVar26 = uVar24 - (longlong)iVar12;
      uVar19 = (longlong)iVar12 + uVar24;
      uVar27 = uVar26;
      if ((longlong)uVar26 < (longlong)uVar23) {
        uVar27 = uVar23;
      }
      uVar20 = uVar19;
      if ((longlong)uVar22 < (longlong)uVar19) {
        uVar20 = uVar22;
      }
      if ((longlong)uVar27 < 0) {
        uVar27 = 0;
      }
      if ((longlong)in_RDX < (longlong)uVar20) {
        uVar20 = in_RDX;
      }
      uVar16 = uVar20;
      if (arg1 == 0) {
        FUN_00e828a0();
        fVar33 = DAT_023d59b4;
        fVar32 = DAT_023d59b4;
joined_r0x014ae129:
        fVar34 = fVar32;
        DAT_023d59b4 = fVar33;
        if ((longlong)uVar23 <= (longlong)uVar26) goto LAB_014ae12b;
LAB_014ae1a6:
        fVar32 = local_48;
        if (local_48 <= fVar34) {
          fVar32 = fVar34;
        }
        uVar20 = uVar16;
        fVar34 = fVar33;
        if ((longlong)uVar22 < (longlong)uVar19) goto LAB_014ae1c3;
LAB_014ae13c:
        lVar21 = uVar20 - uVar27;
        if (lVar21 != 0 && (longlong)uVar27 <= (longlong)uVar20) goto LAB_014ae145;
LAB_014ae1d8:
        if (fVar32 <= fVar33) {
          *(float *)(in_RCX + uVar18 * 4) = fVar33;
          local_48 = fVar33;
        }
        else {
          *(float *)(in_RCX + uVar18 * 4) = fVar32;
          local_48 = fVar32;
        }
      }
      else {
        fVar32 = DAT_023d59b4;
        if ((longlong)uVar27 < (longlong)uVar24) {
          uVar13 = uVar27;
          if (((int)uVar24 - (int)uVar27 & 1U) != 0) {
            fVar32 = *(float *)(arg1 + uVar27 * 4) * param_2;
            fVar32 = (float)(~-(uint)(fVar32 < DAT_0239424c) & (uint)fVar32 |
                            ((uint)fVar32 ^ _DAT_023945e0) & -(uint)(fVar32 < DAT_0239424c));
            if (fVar32 <= DAT_023d59b4) {
              fVar32 = DAT_023d59b4;
            }
            uVar13 = uVar27 + 1;
          }
          if (~uVar27 + uVar24 != 0) {
            do {
              fVar33 = *(float *)(arg1 + uVar13 * 4) * param_2;
              fVar33 = (float)(~-(uint)(fVar33 < 0.0) & (uint)fVar33 |
                              ((uint)fVar33 ^ _DAT_023945e0) & -(uint)(fVar33 < 0.0));
              fVar34 = fVar32;
              if (fVar32 < fVar33) {
                uVar27 = uVar13;
                fVar34 = fVar33;
              }
              fVar32 = *(float *)(arg1 + 4 + uVar13 * 4) * param_2;
              fVar32 = (float)(~-(uint)(fVar32 < 0.0) & (uint)fVar32 |
                              ((uint)fVar32 ^ _DAT_023945e0) & -(uint)(fVar32 < 0.0));
              uVar10 = uVar13 + 1;
              if (fVar32 <= fVar34) {
                fVar32 = fVar34;
                uVar10 = uVar27;
              }
              uVar27 = uVar10;
              uVar13 = uVar13 + 2;
            } while (uVar13 != uVar24);
          }
        }
        fVar33 = DAT_023d59b4;
        if ((longlong)uVar20 <= (longlong)uVar24) goto joined_r0x014ae129;
        uVar13 = uVar24 + 1;
        uVar10 = uVar24;
        if (((int)uVar20 - (int)uVar24 & 1U) != 0) {
          fVar34 = *(float *)(arg1 + uVar24 * 4) * param_2;
          fVar34 = (float)(~-(uint)(fVar34 < DAT_0239424c) & (uint)fVar34 |
                          ((uint)fVar34 ^ _DAT_023945e0) & -(uint)(fVar34 < DAT_0239424c));
          uVar10 = uVar13;
          if (DAT_023d59b4 < fVar34) {
            uVar16 = uVar24;
            fVar33 = fVar34;
          }
        }
        while (uVar20 != uVar13) {
          fVar34 = *(float *)(arg1 + uVar10 * 4) * param_2;
          fVar34 = (float)(~-(uint)(fVar34 < 0.0) & (uint)fVar34 |
                          ((uint)fVar34 ^ _DAT_023945e0) & -(uint)(fVar34 < 0.0));
          if (fVar33 < fVar34) {
            uVar16 = uVar10;
            fVar33 = fVar34;
          }
          fVar34 = *(float *)(arg1 + 4 + uVar10 * 4) * param_2;
          fVar34 = (float)(~-(uint)(fVar34 < 0.0) & (uint)fVar34 |
                          ((uint)fVar34 ^ _DAT_023945e0) & -(uint)(fVar34 < 0.0));
          uVar7 = uVar10 + 1;
          if (fVar34 <= fVar33) {
            fVar34 = fVar33;
            uVar7 = uVar16;
          }
          uVar13 = uVar10 + 2;
          uVar10 = uVar13;
          uVar16 = uVar7;
          fVar33 = fVar34;
        }
        uVar20 = uVar16;
        fVar34 = fVar32;
        if ((longlong)uVar26 < (longlong)uVar23) goto LAB_014ae1a6;
LAB_014ae12b:
        fVar34 = fVar33;
        if ((longlong)uVar19 <= (longlong)uVar22) goto LAB_014ae13c;
LAB_014ae1c3:
        fVar33 = local_48;
        if (local_48 <= fVar34) {
          fVar33 = fVar34;
        }
        lVar21 = uVar20 - uVar27;
        if (lVar21 == 0 || (longlong)uVar20 < (longlong)uVar27) goto LAB_014ae1d8;
LAB_014ae145:
        local_48 = (fVar33 - fVar32) * ((float)(longlong)(uVar24 - uVar27) / (float)lVar21) + fVar32
        ;
        *(float *)(in_RCX + uVar18 * 4) = local_48;
      }
      if (fVar32 <= fVar28) {
        fVar32 = fVar28;
      }
      if (local_48 < DAT_023d59b4) {
        *(undefined4 *)(in_RCX + uVar18 * 4) = 0x38d1b717;
        local_48 = DAT_023d59b4;
      }
      fVar28 = fVar33;
      if (fVar33 <= fVar32) {
        fVar28 = fVar32;
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar15);
  }
  dVar30 = param_3 / DAT_0240f0f0;
  lVar21 = *local_res8;
  uVar14 = *(uint *)(lVar21 + 0xc);
  uVar22 = (ulonglong)uVar14;
  if (uVar14 == 0) {
    FUN_015c1480(1);
  }
  else if (-1 < (int)uVar14) {
    lVar25 = 0;
    uVar14 = 0;
    do {
      uVar17 = param_4;
      if (lVar25 < (int)uVar22) {
        uVar17 = (int)(*(double *)(*(longlong *)(*(longlong *)(lVar21 + 0x10) + lVar25 * 8) + 0x10)
                      * param_3) + 1;
      }
      iVar12 = uVar17 - uVar14;
      dVar31 = (double)*(float *)(in_R8 + (longlong)(iVar12 / 2) * 4) / dVar29;
      fVar33 = (float)(dVar31 + dVar31);
      fVar32 = DAT_023d59b4;
      if (0 < (int)uVar14) {
        fVar32 = *(float *)(in_RCX + (ulonglong)(uVar14 - 1) * 4);
      }
      fVar34 = DAT_02390d30;
      if (DAT_02390d30 <= fVar33) {
        fVar34 = fVar33;
      }
      uVar4 = uVar14 + 7;
      if ((int)uVar17 < (int)(uVar14 + 7)) {
        uVar4 = uVar17;
      }
      uVar22 = (ulonglong)(int)uVar14;
      if ((int)uVar14 < (int)uVar4) {
        uVar23 = ~uVar22;
        uVar18 = (ulonglong)(uVar4 - uVar14) & 3;
        if ((uVar4 - uVar14 & 3) == 0) {
          fVar33 = 0.0;
        }
        else {
          fVar35 = fVar32;
          fVar37 = 0.0;
          do {
            fVar32 = *(float *)(in_RCX + uVar22 * 4);
            fVar33 = fVar32 - fVar35;
            uVar11 = (uint)uVar22;
            if (fVar33 <= fVar37) {
              fVar33 = fVar37;
              uVar11 = uVar14;
            }
            uVar14 = uVar11;
            uVar22 = uVar22 + 1;
            uVar18 = uVar18 - 1;
            fVar35 = fVar32;
            fVar37 = fVar33;
          } while (uVar18 != 0);
        }
        if (2 < uVar23 + (longlong)(int)uVar4) {
          do {
            fVar35 = *(float *)(in_RCX + uVar22 * 4);
            fVar37 = *(float *)(in_RCX + 4 + uVar22 * 4);
            fVar36 = fVar37 - fVar35;
            fVar35 = fVar35 - fVar32;
            uVar11 = (uint)uVar22;
            if (fVar33 < fVar35) {
              uVar14 = uVar11;
            }
            fVar2 = *(float *)(in_RCX + 8 + uVar22 * 4);
            fVar37 = fVar2 - fVar37;
            if (fVar35 <= fVar33) {
              fVar35 = fVar33;
            }
            uVar8 = uVar11 + 1;
            if (fVar36 <= fVar35) {
              fVar36 = fVar35;
              uVar8 = uVar14;
            }
            uVar5 = uVar11 + 2;
            if (fVar37 <= fVar36) {
              uVar5 = uVar8;
              fVar37 = fVar36;
            }
            fVar32 = *(float *)(in_RCX + 0xc + uVar22 * 4);
            fVar33 = fVar32 - fVar2;
            uVar14 = uVar11 + 3;
            if (fVar33 <= fVar37) {
              fVar33 = fVar37;
              uVar14 = uVar5;
            }
            uVar22 = uVar22 + 4;
          } while (uVar22 != (longlong)(int)uVar4);
        }
        iVar12 = uVar17 - uVar14;
      }
      FUN_015c1480(fVar34 * (float)dVar30,iVar12);
      lVar21 = *local_res8;
      uVar22 = (ulonglong)*(int *)(lVar21 + 0xc);
      bVar3 = lVar25 < (longlong)uVar22;
      lVar25 = lVar25 + 1;
      uVar14 = uVar17;
    } while (bVar3);
  }
  fVar35 = _UNK_0240e1fc;
  fVar34 = _UNK_0240e1f8;
  fVar33 = _UNK_0240e1f4;
  fVar32 = DAT_023d59b4;
  if (0 < (int)param_4) {
    if (param_4 < 8) {
      uVar22 = 0;
    }
    else {
      uVar22 = (ulonglong)(param_4 & 0xfffffff8);
      uVar23 = 0;
      do {
        pfVar1 = (float *)(in_RCX + uVar23 * 4);
        fVar37 = pfVar1[1];
        fVar36 = pfVar1[2];
        fVar2 = pfVar1[3];
        if (*pfVar1 < fVar32) {
          *(undefined4 *)(in_RCX + uVar23 * 4) = 0x38d1b717;
        }
        if (fVar37 < fVar33) {
          *(undefined4 *)(in_RCX + 4 + uVar23 * 4) = 0x38d1b717;
        }
        if (fVar34 <= fVar36) {
          if (fVar2 < fVar35) goto LAB_014ae5a0;
LAB_014ae52b:
          pfVar1 = (float *)(in_RCX + 0x10 + uVar23 * 4);
          fVar37 = *pfVar1;
          fVar36 = pfVar1[1];
          fVar2 = pfVar1[2];
          fVar6 = pfVar1[3];
        }
        else {
          *(undefined4 *)(in_RCX + 8 + uVar23 * 4) = 0x38d1b717;
          if (fVar35 <= fVar2) goto LAB_014ae52b;
LAB_014ae5a0:
          *(undefined4 *)(in_RCX + 0xc + uVar23 * 4) = 0x38d1b717;
          pfVar1 = (float *)(in_RCX + 0x10 + uVar23 * 4);
          fVar37 = *pfVar1;
          fVar36 = pfVar1[1];
          fVar2 = pfVar1[2];
          fVar6 = pfVar1[3];
        }
        if (fVar37 < fVar32) {
          *(undefined4 *)(in_RCX + 0x10 + uVar23 * 4) = 0x38d1b717;
        }
        if (fVar36 < fVar33) {
          *(undefined4 *)(in_RCX + 0x14 + uVar23 * 4) = 0x38d1b717;
        }
        if (fVar2 < fVar34) {
          *(undefined4 *)(in_RCX + 0x18 + uVar23 * 4) = 0x38d1b717;
        }
        if (fVar6 < fVar35) {
          *(undefined4 *)(in_RCX + 0x1c + uVar23 * 4) = 0x38d1b717;
        }
        uVar23 = uVar23 + 8;
      } while (uVar22 != uVar23);
      fVar32 = DAT_023d59b4;
      if (uVar22 == uVar15) goto LAB_014ae5e8;
    }
    do {
      pfVar1 = (float *)(in_RCX + uVar22 * 4);
      if (*pfVar1 <= fVar32 && fVar32 != *pfVar1) {
        *(undefined4 *)(in_RCX + uVar22 * 4) = 0x38d1b717;
      }
      uVar22 = uVar22 + 1;
    } while (uVar15 != uVar22);
  }
LAB_014ae5e8:
  *local_res10 = fVar28;
  if ((bVar9) && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0149ebe0 (2352 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *in_RCX;
  ulonglong uVar11;
  longlong *in_RDX;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  longlong *arg1;
  ulonglong uVar16;
  uint uVar17;
  uint in_R8D;
  longlong lVar18;
  ulonglong uVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  float fVar24;
  undefined4 in_XMM5_Da;
  undefined4 in_XMM5_Db;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  longlong local_res8;
  ulonglong local_res10;
  longlong local_res18;
  int local_res20;
  undefined1 uVar25;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  longlong local_c0;
  double local_b8;
  double local_b0;
  undefined4 local_a4;
  int local_88;
  longlong local_58;
  float local_44;
  
  local_b0 = (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  local_b8 = (double)CONCAT44(in_XMM5_Db,in_XMM5_Da);
  uVar13 = (ulonglong)in_R8D;
  local_a4 = param_4;
  auVar21._0_4_ = (float)_logf(in_RCX,in_RDX,param_3 / _DAT_0240e330);
  lVar6 = FUN_00e83010();
  lVar7 = FUN_00e83010();
  FUN_00d216c0();
  pcVar5 = DAT_02572370;
  if ((int)in_R8D < 1) {
    ___bzero();
    bVar3 = false;
    lVar14 = 0;
  }
  else {
    auVar21._0_4_ = auVar21._0_4_ * DAT_0240e334 * DAT_023941f0 + DAT_0239011c;
    uVar19 = 0;
    do {
      puVar8 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &DAT_02572358;
      (*pcVar5)();
      FUN_00d21140();
      lVar14 = *(longlong *)(*(longlong *)(*in_RDX + 0x10) + uVar19 * 8);
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      FUN_00d214d0();
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
      iVar15 = *(int *)((longlong)puVar8 + 0xc);
      if (0 < iVar15) {
        lVar14 = 0;
        do {
          if ((int)auVar21._0_4_ <=
              *(int *)(*(longlong *)(puVar8[2] + (longlong)(int)lVar14 * 8) + 0x10)) {
            FUN_00d23620();
            lVar14 = lVar14 + -1;
            iVar15 = *(int *)((longlong)puVar8 + 0xc);
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 < iVar15);
      }
      FUN_00d50b20();
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar13);
    ___bzero();
    auVar21._0_4_ = (float)_logf(param_2 / _DAT_0240e330);
    local_88 = (int)(auVar21._0_4_ * DAT_0240e334 * DAT_023941f0 + DAT_0239011c);
    uVar19 = 0;
    lVar14 = 0;
    bVar3 = false;
    do {
      lVar9 = *(longlong *)(*(longlong *)(*in_RCX + 0x10) + uVar19 * 8);
      if (lVar14 == lVar9) {
        if ((!bVar3) && (lVar14 != 0)) {
          FUN_00d50b00();
          bVar3 = true;
        }
      }
      else {
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (lVar14 != 0)) {
          FUN_00d50b20();
          bVar3 = true;
          lVar14 = lVar9;
        }
        else {
          bVar3 = true;
          lVar14 = lVar9;
        }
      }
      if (*(int *)(lVar14 + 0xc) != 0) {
        local_88 = *(int *)(**(longlong **)(lVar14 + 0x10) + 0x10);
      }
      auVar21._0_4_ = (float)_exp2f((float)local_88 / DAT_023941f0);
      lVar12 = (longlong)((double)(int)uVar19 * param_1 * local_b8);
      lVar9 = (longlong)
              ((int)((double)(float)(local_b8 / (double)(auVar21._0_4_ * _DAT_0240e330)) *
                    DAT_0240e3b0) / 2);
      uVar11 = lVar12 - lVar9;
      uVar10 = lVar9 + lVar12;
      if ((longlong)uVar11 < 0) {
        uVar11 = 0;
      }
      if ((longlong)local_res10 < (longlong)uVar10) {
        uVar10 = local_res10;
      }
      lVar9 = uVar10 - uVar11;
      if (lVar9 != 0 && (longlong)uVar11 <= (longlong)uVar10) {
        auVar21._0_4_ = 0.0;
        if (lVar9 != 0 && (longlong)uVar11 <= (longlong)uVar10) {
          uVar17 = (int)uVar10 - (int)uVar11;
          uVar16 = ~uVar11;
          if ((uVar17 & 3) == 0) {
            auVar21 = ZEXT816(0);
          }
          else {
            lVar12 = -((ulonglong)uVar17 & 3);
            auVar21 = ZEXT816(0);
            do {
              fVar24 = *(float *)(local_res8 + uVar11 * 4);
              auVar21._0_4_ =
                   auVar21._0_4_ +
                   (float)(~-(uint)(0.0 < fVar24) & ((uint)fVar24 ^ _DAT_023945e0) |
                          (uint)fVar24 & -(uint)(0.0 < fVar24));
              uVar11 = uVar11 + 1;
              lVar12 = lVar12 + 1;
            } while (lVar12 != 0);
          }
          if (2 < uVar16 + uVar10) {
            do {
              fVar24 = *(float *)(local_res8 + uVar11 * 4);
              fVar2 = *(float *)(local_res8 + 4 + uVar11 * 4);
              fVar20 = auVar21._0_4_;
              auVar21._0_4_ = *(float *)(local_res8 + 8 + uVar11 * 4);
              fVar1 = *(float *)(local_res8 + 0xc + uVar11 * 4);
              auVar22._0_4_ = ~-(uint)(0.0 < fVar1) & ((uint)fVar1 ^ _DAT_023945e0);
              auVar22._4_4_ = _UNK_023945e4;
              auVar22._8_4_ = _UNK_023945e8;
              auVar22._12_4_ = _UNK_023945ec;
              auVar22 = auVar22 | ZEXT416((uint)fVar1 & -(uint)(0.0 < fVar1));
              auVar21._4_12_ = auVar22._4_12_;
              auVar21._0_4_ =
                   auVar22._0_4_ +
                   (float)(~-(uint)(0.0 < auVar21._0_4_) & ((uint)auVar21._0_4_ ^ _DAT_023945e0) |
                          (uint)auVar21._0_4_ & -(uint)(0.0 < auVar21._0_4_)) +
                   (float)(~-(uint)(0.0 < fVar2) & ((uint)fVar2 ^ _DAT_023945e0) |
                          (uint)fVar2 & -(uint)(0.0 < fVar2)) +
                   (float)(~-(uint)(0.0 < fVar24) & ((uint)fVar24 ^ _DAT_023945e0) |
                          (uint)fVar24 & -(uint)(0.0 < fVar24)) + fVar20;
              uVar11 = uVar11 + 4;
            } while (uVar10 != uVar11);
          }
        }
        *(float *)(lVar6 + uVar19 * 4) = auVar21._0_4_ / (float)lVar9;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar13);
  }
  local_58 = (longlong)(int)in_R8D;
  local_c8 = lVar6;
  FUN_015c1500(0,uVar13,0);
  ___bzero();
  if (0 < (int)in_R8D) {
    lVar12 = 0;
    lVar9 = 0;
    do {
      lVar18 = *(longlong *)(*(longlong *)(*in_RCX + 0x10) + (lVar12 >> 0x1d));
      if (lVar14 == lVar18) {
        if ((!bVar3) && (lVar14 != 0)) {
          FUN_00d50b00();
          bVar3 = true;
        }
      }
      else {
        if (lVar18 != 0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (lVar14 != 0)) {
          FUN_00d50b20();
          bVar3 = true;
          lVar14 = lVar18;
        }
        else {
          bVar3 = true;
          lVar14 = lVar18;
        }
      }
      if (*(int *)(lVar14 + 0xc) != 0) {
        *(undefined4 *)(lVar7 + lVar9 * 4) = *(undefined4 *)(**(longlong **)(lVar14 + 0x10) + 0x1c);
      }
      lVar9 = lVar9 + 1;
      lVar12 = lVar12 + 0x100000000;
    } while (local_58 != lVar9);
  }
  local_c0 = lVar7;
  FUN_015c1580(1,uVar13);
  FUN_014a8cc0(DAT_0238fee8 / param_1,lVar6,DAT_023b3888,uVar13);
  lVar6 = *in_RCX;
  uVar25 = 0;
  FUN_014b3460();
  lVar9 = *arg1;
  if (*(int *)(lVar9 + 0xc) < 1) {
    bVar4 = false;
    lVar12 = 0;
  }
  else {
    lVar18 = 0;
    lVar12 = 0;
    bVar4 = false;
    local_44 = param_2;
    do {
      lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + lVar18 * 8);
      if (lVar12 == lVar9) {
        if ((!bVar4) && (lVar12 != 0)) {
          bVar4 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        if ((bVar4) && (lVar12 != 0)) {
          FUN_00d50b20();
          bVar4 = true;
          lVar12 = lVar9;
        }
        else {
          bVar4 = true;
          lVar12 = lVar9;
        }
      }
      local_e8 = *in_RCX;
      local_e0 = 0;
      local_d0 = 0;
      local_d8 = lVar12;
      FUN_014b3ce0(param_1,&local_e8,&local_d8,1,lVar6,uVar25);
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      auVar21._0_4_ = *(float *)(lVar12 + 0x38);
      if (*(float *)(lVar12 + 0x38) <= 0.0) {
        *(float *)(lVar12 + 0x38) = local_44;
        auVar21._0_4_ = local_44;
      }
      lVar18 = lVar18 + 1;
      lVar9 = *arg1;
      local_44 = auVar21._0_4_;
    } while (lVar18 < *(int *)(lVar9 + 0xc));
  }
  if ((local_res18 != 0) && (0 < local_res20)) {
    auVar21._0_4_ = (float)(int)in_R8D + DAT_02390d00;
    lVar6 = 0;
    do {
      dVar23 = ((double)lVar6 / local_b0) / param_1;
      fVar24 = (float)dVar23;
      iVar15 = (int)dVar23;
      if ((int)(in_R8D - 2) < iVar15) {
        iVar15 = in_R8D - 2;
        fVar24 = auVar21._0_4_;
      }
      fVar2 = *(float *)(lVar7 + (longlong)iVar15 * 4);
      *(float *)(local_res18 + lVar6 * 4) =
           (*(float *)(lVar7 + 4 + (longlong)iVar15 * 4) - fVar2) * (fVar24 - (float)iVar15) + fVar2
      ;
      lVar6 = lVar6 + 1;
    } while (local_res20 != lVar6);
  }
  FUN_00e83070();
  FUN_00e83070();
  if ((bVar3) && (lVar14 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar4) && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00773ea0 (2232 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong arg1;
  longlong *this;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(arg1 + 0xd8) == 0) {
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar5 + 0x18))();
    lVar8 = *(longlong *)(arg1 + 0xd8);
    *(longlong **)(arg1 + 0xd8) = plVar5;
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00dd6a00();
  lVar8 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_48 = lVar8;
  FUN_0078d520();
  lVar8 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar8 == 0) {
    uVar4 = FUN_01433c20();
    lVar1 = DAT_02729670;
    pVar7 = 0x774d98;
    switch(uVar4) {
    case 1:
      FUN_013fb3a0();
      if (local_40 == 0) {
        cVar3 = '\0';
      }
      else {
        FUN_013fb3a0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0141b660();
        if (local_1b8 == 0) {
          cVar3 = '\0';
        }
        else {
          FUN_013fb3a0();
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0141b660();
          lVar1 = DAT_02729668;
          if (DAT_02729668 != 0) {
            FUN_00d50b00();
          }
          cVar3 = FUN_00d90eb0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_1a0 != '\0') && (local_1a8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_170 != '\0') && (local_178 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_1b0 != '\0') && (local_1b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_180 != '\0') && (local_188 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = DAT_02729670;
      if (cVar3 == '\0') {
        if (DAT_02729670 != 0) {
          FUN_00d50b00();
        }
        lVar2 = DAT_02729680;
        local_128 = lVar1;
        local_120 = '\x01';
        if (DAT_02729680 != 0) {
          FUN_00d50b00();
        }
        local_118 = lVar2;
        local_110 = '\x01';
        local_108 = 0;
        local_100 = '\0';
        FUN_00d31230(&local_108,&local_118);
        if (local_40 != 0) {
          lVar8 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
        }
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        if ((local_110 != '\0') && (local_118 != 0)) {
          FUN_00d50b20();
        }
        if ((local_120 != '\0') && (local_128 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (DAT_02729670 != 0) {
          FUN_00d50b00();
        }
        lVar2 = DAT_02729678;
        if (DAT_02729678 != 0) {
          FUN_00d50b00();
        }
        local_148 = lVar2;
        local_140 = '\x01';
        local_138 = 0;
        local_130 = '\0';
        FUN_00d31230(&local_138,&local_148);
        if (local_40 != 0) {
          lVar8 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
        }
        if ((local_130 != '\0') && (local_138 != 0)) {
          FUN_00d50b20();
        }
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      break;
    case 2:
      if (DAT_02729670 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_02729678;
      local_f8 = lVar1;
      local_f0 = '\x01';
      if (DAT_02729678 != 0) {
        FUN_00d50b00();
      }
      local_e8 = lVar2;
      local_e0 = '\x01';
      local_d8 = 0;
      local_d0 = '\0';
      FUN_00d31230(&local_d8,&local_e8);
      if (local_40 != 0) {
        lVar8 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      break;
    case 3:
      if (DAT_02729670 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_02729688;
      local_c8 = lVar1;
      local_c0 = '\x01';
      if (DAT_02729688 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar2;
      local_b0 = '\x01';
      local_a8 = 0;
      local_a0 = '\0';
      FUN_00d31230(&local_a8,&local_b8);
      if (local_40 != 0) {
        lVar8 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      break;
    case 4:
      if (DAT_02729670 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_02729690;
      local_98 = lVar1;
      local_90 = '\x01';
      if (DAT_02729690 != 0) {
        FUN_00d50b00();
      }
      local_88 = lVar2;
      local_80 = '\x01';
      local_78 = 0;
      local_70 = '\0';
      FUN_00d31230(&local_78,&local_88);
      if (local_40 != 0) {
        lVar8 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      local_60 = '\0';
      local_58 = local_48;
      local_50 = '\0';
      local_68 = lVar8;
      FUN_0078d5d0();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  *this = lVar8;
  *(undefined1 *)(this + 1) = 1;
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0149d5b0 (2143 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  bool bVar29;
  uint uVar30;
  int iVar31;
  undefined1 (*pauVar32) [16];
  longlong lVar33;
  ulonglong uVar34;
  float *in_RCX;
  int iVar35;
  int iVar36;
  longlong *arg1;
  int iVar37;
  uint uVar38;
  ulonglong uVar39;
  int iVar40;
  longlong lVar41;
  int iVar42;
  ulonglong uVar43;
  bool bVar44;
  float fVar45;
  undefined1 auVar46 [16];
  float fVar47;
  float *local_res8;
  float *local_res10;
  float *local_res18;
  float *local_res20;
  longlong local_48;
  
  pauVar32 = (undefined1 (*) [16])FUN_00e83010();
  ___bzero();
  if ((int)param_2 < 1) {
    bVar29 = false;
    lVar41 = 0;
    bVar28 = false;
    local_48 = 0;
  }
  else {
    uVar39 = 0;
    local_48 = 0;
    bVar28 = false;
    lVar41 = 0;
    bVar29 = false;
    do {
      lVar33 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + uVar39 * 8);
      if (local_48 == lVar33) {
        if ((!bVar28) && (local_48 != 0)) {
          bVar28 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar33 != 0) {
          FUN_00d50b00();
        }
        if ((bVar28) && (local_48 != 0)) {
          FUN_00d50b20();
          bVar28 = true;
          local_48 = lVar33;
        }
        else {
          bVar28 = true;
          local_48 = lVar33;
        }
      }
      if (*(int *)(local_48 + 0xc) != 0) {
        lVar33 = **(longlong **)(local_48 + 0x10);
        if (lVar41 == lVar33) {
          if ((!bVar29) && (lVar41 != 0)) {
            FUN_00d50b00();
            lVar33 = lVar41;
            goto LAB_0149d72d;
          }
          fVar45 = *(float *)(lVar41 + 0x1c) + DAT_02390118;
          if (fVar45 <= DAT_0239424c) goto LAB_0149d648;
        }
        else {
          if (lVar33 != 0) {
            FUN_00d50b00();
          }
          if ((bVar29) && (lVar41 != 0)) {
            FUN_00d50b20();
          }
LAB_0149d72d:
          bVar29 = true;
          fVar45 = *(float *)(lVar33 + 0x1c) + DAT_02390118;
          lVar41 = lVar33;
          if (fVar45 <= DAT_0239424c) goto LAB_0149d648;
        }
        lVar33 = (longlong)(*(int *)(lVar41 + 0x10) / 5);
        *(float *)(*pauVar32 + lVar33 * 4) = fVar45 + *(float *)(*pauVar32 + lVar33 * 4);
      }
LAB_0149d648:
      uVar39 = uVar39 + 1;
    } while (param_2 != uVar39);
  }
  uVar38 = 0;
  FUN_015c1480(DAT_02390d28,0x60);
  fVar45 = 0.0;
  lVar33 = 0;
  do {
    fVar47 = *(float *)(*pauVar32 + lVar33 * 4);
    uVar30 = (uint)lVar33;
    if (fVar45 < fVar47) {
      uVar38 = uVar30;
    }
    if (fVar47 <= fVar45) {
      fVar47 = fVar45;
    }
    fVar45 = *(float *)(*pauVar32 + lVar33 * 4 + 4);
    uVar26 = uVar30 + 1;
    if (*(float *)(*pauVar32 + lVar33 * 4 + 4) <= fVar47) {
      fVar45 = fVar47;
      uVar26 = uVar38;
    }
    fVar47 = *(float *)(*pauVar32 + lVar33 * 4 + 8);
    uVar27 = uVar30 + 2;
    if (*(float *)(*pauVar32 + lVar33 * 4 + 8) <= fVar45) {
      fVar47 = fVar45;
      uVar27 = uVar26;
    }
    fVar45 = *(float *)(*pauVar32 + lVar33 * 4 + 0xc);
    uVar38 = uVar30 + 3;
    if (*(float *)(*pauVar32 + lVar33 * 4 + 0xc) <= fVar47) {
      fVar45 = fVar47;
      uVar38 = uVar27;
    }
    lVar33 = lVar33 + 4;
  } while (lVar33 != 0x60);
  if (0.0 < fVar45) {
    auVar46._4_4_ = fVar45;
    auVar46._0_4_ = fVar45;
    auVar46._8_4_ = fVar45;
    auVar46._12_4_ = fVar45;
    auVar46 = divps(*pauVar32,auVar46);
    *pauVar32 = auVar46;
    auVar2._4_4_ = fVar45;
    auVar2._0_4_ = fVar45;
    auVar2._8_4_ = fVar45;
    auVar2._12_4_ = fVar45;
    auVar46 = divps(pauVar32[1],auVar2);
    pauVar32[1] = auVar46;
    auVar3._4_4_ = fVar45;
    auVar3._0_4_ = fVar45;
    auVar3._8_4_ = fVar45;
    auVar3._12_4_ = fVar45;
    auVar46 = divps(pauVar32[2],auVar3);
    pauVar32[2] = auVar46;
    auVar4._4_4_ = fVar45;
    auVar4._0_4_ = fVar45;
    auVar4._8_4_ = fVar45;
    auVar4._12_4_ = fVar45;
    auVar46 = divps(pauVar32[3],auVar4);
    pauVar32[3] = auVar46;
    auVar5._4_4_ = fVar45;
    auVar5._0_4_ = fVar45;
    auVar5._8_4_ = fVar45;
    auVar5._12_4_ = fVar45;
    auVar46 = divps(pauVar32[4],auVar5);
    pauVar32[4] = auVar46;
    auVar6._4_4_ = fVar45;
    auVar6._0_4_ = fVar45;
    auVar6._8_4_ = fVar45;
    auVar6._12_4_ = fVar45;
    auVar46 = divps(pauVar32[5],auVar6);
    pauVar32[5] = auVar46;
    auVar7._4_4_ = fVar45;
    auVar7._0_4_ = fVar45;
    auVar7._8_4_ = fVar45;
    auVar7._12_4_ = fVar45;
    auVar46 = divps(pauVar32[6],auVar7);
    pauVar32[6] = auVar46;
    auVar8._4_4_ = fVar45;
    auVar8._0_4_ = fVar45;
    auVar8._8_4_ = fVar45;
    auVar8._12_4_ = fVar45;
    auVar46 = divps(pauVar32[7],auVar8);
    pauVar32[7] = auVar46;
    auVar9._4_4_ = fVar45;
    auVar9._0_4_ = fVar45;
    auVar9._8_4_ = fVar45;
    auVar9._12_4_ = fVar45;
    auVar46 = divps(pauVar32[8],auVar9);
    pauVar32[8] = auVar46;
    auVar10._4_4_ = fVar45;
    auVar10._0_4_ = fVar45;
    auVar10._8_4_ = fVar45;
    auVar10._12_4_ = fVar45;
    auVar46 = divps(pauVar32[9],auVar10);
    pauVar32[9] = auVar46;
    auVar11._4_4_ = fVar45;
    auVar11._0_4_ = fVar45;
    auVar11._8_4_ = fVar45;
    auVar11._12_4_ = fVar45;
    auVar46 = divps(pauVar32[10],auVar11);
    pauVar32[10] = auVar46;
    auVar12._4_4_ = fVar45;
    auVar12._0_4_ = fVar45;
    auVar12._8_4_ = fVar45;
    auVar12._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0xb],auVar12);
    pauVar32[0xb] = auVar46;
    auVar13._4_4_ = fVar45;
    auVar13._0_4_ = fVar45;
    auVar13._8_4_ = fVar45;
    auVar13._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0xc],auVar13);
    pauVar32[0xc] = auVar46;
    auVar14._4_4_ = fVar45;
    auVar14._0_4_ = fVar45;
    auVar14._8_4_ = fVar45;
    auVar14._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0xd],auVar14);
    pauVar32[0xd] = auVar46;
    auVar15._4_4_ = fVar45;
    auVar15._0_4_ = fVar45;
    auVar15._8_4_ = fVar45;
    auVar15._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0xe],auVar15);
    pauVar32[0xe] = auVar46;
    auVar16._4_4_ = fVar45;
    auVar16._0_4_ = fVar45;
    auVar16._8_4_ = fVar45;
    auVar16._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0xf],auVar16);
    pauVar32[0xf] = auVar46;
    auVar17._4_4_ = fVar45;
    auVar17._0_4_ = fVar45;
    auVar17._8_4_ = fVar45;
    auVar17._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0x10],auVar17);
    pauVar32[0x10] = auVar46;
    auVar18._4_4_ = fVar45;
    auVar18._0_4_ = fVar45;
    auVar18._8_4_ = fVar45;
    auVar18._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0x11],auVar18);
    pauVar32[0x11] = auVar46;
    auVar19._4_4_ = fVar45;
    auVar19._0_4_ = fVar45;
    auVar19._8_4_ = fVar45;
    auVar19._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0x12],auVar19);
    pauVar32[0x12] = auVar46;
    auVar20._4_4_ = fVar45;
    auVar20._0_4_ = fVar45;
    auVar20._8_4_ = fVar45;
    auVar20._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0x13],auVar20);
    pauVar32[0x13] = auVar46;
    auVar21._4_4_ = fVar45;
    auVar21._0_4_ = fVar45;
    auVar21._8_4_ = fVar45;
    auVar21._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0x14],auVar21);
    pauVar32[0x14] = auVar46;
    auVar22._4_4_ = fVar45;
    auVar22._0_4_ = fVar45;
    auVar22._8_4_ = fVar45;
    auVar22._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0x15],auVar22);
    pauVar32[0x15] = auVar46;
    auVar23._4_4_ = fVar45;
    auVar23._0_4_ = fVar45;
    auVar23._8_4_ = fVar45;
    auVar23._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0x16],auVar23);
    pauVar32[0x16] = auVar46;
    auVar24._4_4_ = fVar45;
    auVar24._0_4_ = fVar45;
    auVar24._8_4_ = fVar45;
    auVar24._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0x17],auVar24);
    pauVar32[0x17] = auVar46;
  }
  if ((int)uVar38 < 1) {
    uVar30 = 0;
  }
  else {
    fVar45 = *(float *)(*pauVar32 + 4) - *(float *)*pauVar32;
    uVar30 = 0;
    lVar33 = 0;
    do {
      if (lVar33 == 0x5e) goto LAB_0149da88;
      fVar47 = *(float *)(*pauVar32 + lVar33 * 4 + 8) - *(float *)(*pauVar32 + lVar33 * 4 + 4);
      if (((0.0 <= fVar45) && (fVar47 < 0.0)) && (param_1 < *(float *)(*pauVar32 + lVar33 * 4 + 4)))
      {
        lVar33 = lVar33 + 1;
        break;
      }
      lVar1 = lVar33 * 4;
      fVar45 = *(float *)(*pauVar32 + lVar33 * 4 + 0xc) - *(float *)(*pauVar32 + lVar1 + 8);
      lVar33 = lVar33 + 2;
    } while (((fVar47 < 0.0) || (0.0 <= fVar45)) || (*(float *)(*pauVar32 + lVar1 + 8) <= param_1));
    uVar30 = (uint)lVar33;
LAB_0149da88:
    uVar39 = 0x5f;
    if (0x5e < (int)uVar38) goto LAB_0149db0d;
  }
  fVar45 = *(float *)(pauVar32[0x17] + 8) - *(float *)(pauVar32[0x17] + 0xc);
  uVar39 = 0x5f;
  do {
    if (uVar39 == 1) {
      uVar39 = (ulonglong)uVar30;
      break;
    }
    fVar47 = *(float *)(*pauVar32 + (ulonglong)((int)uVar39 - 2) * 4) -
             *(float *)(pauVar32[-1] + uVar39 * 4 + 0xc);
    if (((0.0 <= fVar45) && (fVar47 < 0.0)) &&
       (param_1 < *(float *)(pauVar32[-1] + uVar39 * 4 + 0xc))) {
      uVar39 = uVar39 - 1;
      iVar40 = 0x5f;
      iVar36 = (int)uVar39;
      if (0x5f < iVar36) goto LAB_0149db49;
      goto LAB_0149db18;
    }
    lVar33 = uVar39 * 4;
    fVar45 = *(float *)(*pauVar32 + (ulonglong)((int)uVar39 - 3U & 0xfffffffe) * 4) -
             *(float *)(pauVar32[-1] + lVar33 + 8);
    uVar39 = uVar39 - 2;
  } while (((fVar47 < 0.0) || (0.0 <= fVar45)) || (*(float *)(pauVar32[-1] + lVar33 + 8) <= param_1)
          );
LAB_0149db0d:
  iVar40 = 0x5f;
  iVar36 = (int)uVar39;
  if (iVar36 < 0x60) {
LAB_0149db18:
    iVar36 = (int)uVar39;
    fVar45 = *(float *)(*pauVar32 + (longlong)iVar36 * 4) * DAT_0239011c;
    if (param_1 <= fVar45) {
      fVar45 = param_1;
    }
    uVar39 = uVar39 & 0xffffffff;
    do {
      uVar43 = uVar39 + 1;
      if (*(float *)(*pauVar32 + uVar39 * 4) <= fVar45 &&
          fVar45 != *(float *)(*pauVar32 + uVar39 * 4)) break;
      bVar44 = uVar39 != 0x5f;
      uVar39 = uVar43;
    } while (bVar44);
    iVar40 = (int)uVar43 + -1;
  }
LAB_0149db49:
  fVar45 = 0.0;
  if ((int)uVar30 < 0) {
    iVar37 = 0;
  }
  else {
    uVar39 = (ulonglong)uVar30;
    fVar47 = *(float *)(*pauVar32 + uVar39 * 4);
    fVar25 = DAT_0239011c * fVar47;
    if (param_1 <= DAT_0239011c * fVar47) {
      fVar25 = param_1;
    }
    uVar43 = uVar39;
    if ((fVar25 <= fVar47) && (uVar34 = uVar39, uVar30 != 0)) {
      do {
        uVar43 = uVar34 - 1;
        if (*(float *)(pauVar32[-1] + uVar34 * 4 + 0xc) <= fVar25 &&
            fVar25 != *(float *)(pauVar32[-1] + uVar34 * 4 + 0xc)) break;
        bVar44 = uVar34 != 1;
        uVar34 = uVar43;
      } while (bVar44);
    }
    iVar37 = (int)uVar43;
    uVar43 = uVar39;
    if (DAT_0239011c <= fVar47) {
      do {
        if ((longlong)uVar43 < 1) goto LAB_0149dbd6;
        uVar39 = uVar43 - 1;
        lVar33 = uVar43 * 4;
        uVar43 = uVar39;
      } while (DAT_0239011c < *(float *)(pauVar32[-1] + lVar33 + 0xc) ||
               DAT_0239011c == *(float *)(pauVar32[-1] + lVar33 + 0xc));
    }
    iVar42 = 0;
    if (-1 < (int)uVar39) {
      iVar42 = (int)uVar39;
    }
    fVar45 = (float)iVar42;
  }
LAB_0149dbd6:
  if ((iVar37 < (int)uVar38) && ((int)uVar38 < iVar40)) {
    uVar43 = (ulonglong)uVar38;
    uVar39 = (ulonglong)uVar38;
    fVar47 = DAT_0239109c;
    do {
      if ((int)uVar43 < 0x5f) {
        uVar43 = (ulonglong)(int)uVar43;
        do {
          if (*(float *)(*pauVar32 + uVar43 * 4) <= fVar47) goto LAB_0149dc4c;
          uVar43 = uVar43 + 1;
        } while (uVar43 != 0x5f);
        uVar43 = 0x5f;
      }
LAB_0149dc4c:
      iVar42 = (int)uVar43;
      if (0 < (int)uVar39) {
        uVar39 = uVar39 & 0xffffffff;
        do {
          if (*(float *)(*pauVar32 + uVar39 * 4) <= fVar47) goto LAB_0149dc7b;
          bVar44 = 1 < (longlong)uVar39;
          uVar39 = uVar39 - 1;
        } while (bVar44);
        uVar39 = 0;
      }
LAB_0149dc7b:
      iVar35 = (int)uVar39;
      if (0xb < iVar42 - iVar35) {
        if (0xd < iVar42 - iVar35) {
          iVar42 = 0x5f;
          if ((int)uVar38 < 0x59) {
            iVar42 = uVar38 + 6;
          }
          iVar35 = 0;
          if (5 < (int)uVar38) {
            iVar35 = uVar38 - 6;
          }
        }
        goto LAB_0149dceb;
      }
      if ((0x5e < iVar42) && (iVar35 < 1)) goto LAB_0149dceb;
      fVar47 = fVar47 + DAT_0241b638;
    } while( true );
  }
  iVar31 = iVar37 + iVar40;
  uVar38 = iVar31 / 2;
  iVar42 = 0x5f;
  if (iVar31 < 0xb2) {
    iVar42 = uVar38 + 6;
  }
  iVar35 = 0;
  if (0xb < iVar31) {
    iVar35 = uVar38 - 6;
  }
LAB_0149dceb:
  fVar47 = (float)_exp2f((float)(int)uVar38 / DAT_02390d28);
  *in_RCX = fVar47 * _DAT_0240e330;
  fVar47 = (float)_exp2f((float)iVar36 / DAT_02390d28);
  *param_3 = fVar47 * _DAT_0240e330;
  fVar45 = (float)_exp2f(fVar45 / DAT_02390d28);
  *param_4 = fVar45 * _DAT_0240e330;
  fVar45 = (float)_exp2f((float)iVar40 / DAT_02390d28);
  *local_res8 = fVar45 * _DAT_0240e330;
  fVar45 = (float)_exp2f((float)iVar37 / DAT_02390d28);
  *local_res10 = fVar45 * _DAT_0240e330;
  fVar45 = (float)_exp2f((float)iVar42 / DAT_02390d28);
  *local_res18 = fVar45 * _DAT_0240e330;
  fVar45 = (float)_exp2f((float)iVar35 / DAT_02390d28);
  *local_res20 = fVar45 * _DAT_0240e330;
  FUN_00e83070();
  if ((bVar29) && (lVar41 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar28) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0077dba0 (2142 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  longlong *arg1;
  longlong this;
  longlong local_170;
  char local_168;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined8 local_50;
  longlong **local_48;
  longlong *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d3ecf0();
  plVar4 = local_40;
  if (((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027294e8;
  if (DAT_027294e8 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_026fb7e0;
  if (cVar5 != '\0') {
    FUN_007586e0();
    goto LAB_0077e3ab;
  }
  if (DAT_026fb7e0 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02726c30;
  if (cVar5 != '\0') {
    cVar5 = FUN_016ae5f0();
    if ((cVar5 != '\0') && (cVar5 = FUN_00bd22a0(), cVar5 != '\0')) {
      FUN_0074a910();
    }
    if (*(longlong *)(this + 0x70) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      plVar1 = *(longlong **)(this + 0x70);
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x4a8))();
      FUN_00d50b20();
    }
    goto LAB_0077e3ab;
  }
  if (DAT_02726c30 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_026f6d50;
  if (cVar5 != '\0') {
    FUN_0076fe30();
    goto LAB_0077e3ab;
  }
  if (DAT_026f6d50 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_026f6d58;
  if (cVar5 != '\0') {
    FUN_0076feb0();
    goto LAB_0077e3ab;
  }
  if (DAT_026f6d58 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_026f6d60;
  if (cVar5 != '\0') {
    FUN_0076ff30();
    goto LAB_0077e3ab;
  }
  if (DAT_026f6d60 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_026f6d20;
  if (cVar5 != '\0') {
    FUN_0076ffb0();
    goto LAB_0077e3ab;
  }
  if (DAT_026f6d20 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_026f6d30;
  if (cVar5 != '\0') {
    FUN_00770390();
    goto LAB_0077e3ab;
  }
  if (DAT_026f6d30 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02729460;
  if (cVar5 != '\0') {
    FUN_00771850();
    goto LAB_0077e3ab;
  }
  if (DAT_02729460 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027295a0;
  if (cVar5 != '\0') {
    FUN_00772060();
    goto LAB_0077e3ab;
  }
  if (DAT_027295a0 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027ebc70;
  if (cVar5 != '\0') {
    FUN_00772ab0();
    goto LAB_0077e3ab;
  }
  if (DAT_027ebc70 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02729470;
  if (cVar5 != '\0') {
    FUN_0077cd50();
    goto LAB_0077e3ab;
  }
  if (DAT_02729470 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  lVar3 = DAT_02702d30;
  cVar6 = '\x01';
  if (cVar5 == '\0') {
    if (DAT_02702d30 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar1 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_026f6cf0;
  if (cVar6 != '\0') {
    FUN_0077e980();
    goto LAB_0077e3ab;
  }
  if (DAT_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02729590;
  if (cVar5 != '\0') {
    FUN_0077fb50();
    goto LAB_0077e3ab;
  }
  if (DAT_02729590 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') goto LAB_0077e3ab;
  FUN_00d3ed20();
  local_70 = DAT_027295d8;
  if (DAT_027295d8 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_48 = &local_40;
  FUN_000175c0(param_1,&local_70);
  plVar1 = local_40;
  local_50 = FUN_00053ac0();
  if (plVar1 == (longlong *)0x0) {
LAB_0077e31b:
    local_48 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0077e31b;
  }
  plVar1 = *local_48;
  if (*(char *)(local_48 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(local_48 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d459e0();
    FUN_00172d10();
    FUN_00d50b20();
  }
LAB_0077e3ab:
  local_60 = *arg1;
  local_58 = '\0';
  FUN_00d530a0();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @014a3900 (2129 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  bool bVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  char cVar5;
  char cVar7;
  int iVar9;
  char cVar10;
  char cVar11;
  longlong *arg1;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar20;
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  longlong local_78;
  longlong local_70;
  longlong local_40;
  char cVar6;
  char cVar8;
  
  lVar15 = *arg1;
  if (1 < *(int *)(lVar15 + 0xc)) {
    lVar14 = 0;
    lVar13 = 0;
    cVar6 = '\0';
    cVar5 = '\0';
    local_40 = 0;
    cVar8 = '\0';
    cVar7 = '\0';
    local_78 = 0;
    bVar1 = false;
    lVar12 = 0;
    cVar10 = '\0';
    cVar11 = '\0';
    cVar3 = '\0';
    local_70 = 0;
    do {
      lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + lVar14 * 8);
      if (lVar13 == lVar15) {
        if ((cVar5 == '\0') && (lVar13 != 0)) {
          cVar6 = '\x01';
          cVar5 = '\x01';
          FUN_00d50b00();
        }
      }
      else {
        if (lVar15 != 0) {
          FUN_00d50b00();
        }
        if ((cVar5 == '\0') || (lVar13 == 0)) {
          cVar6 = '\x01';
          cVar5 = '\x01';
          lVar13 = lVar15;
        }
        else {
          FUN_00d50b20();
          cVar6 = '\x01';
          cVar5 = '\x01';
          lVar13 = lVar15;
        }
      }
      lVar15 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + 8 + lVar14 * 8);
      if (local_40 == lVar15) {
        if ((cVar7 == '\0') && (local_40 != 0)) {
          cVar8 = '\x01';
          cVar7 = '\x01';
          FUN_00d50b00();
        }
      }
      else {
        if (lVar15 != 0) {
          FUN_00d50b00();
        }
        if ((cVar7 == '\0') || (local_40 == 0)) {
          cVar8 = '\x01';
          cVar7 = '\x01';
          local_40 = lVar15;
        }
        else {
          FUN_00d50b20();
          cVar8 = '\x01';
          cVar7 = '\x01';
          local_40 = lVar15;
        }
      }
      if (lVar14 < (longlong)*(int *)(*arg1 + 0xc) + -2) {
        lVar15 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + 0x10 + lVar14 * 8);
        if (local_78 == lVar15) {
          if ((!bVar1) && (local_78 != 0)) {
            bVar1 = true;
            FUN_00d50b00();
          }
LAB_014a3b40:
          iVar9 = *(int *)(lVar13 + 0x3c);
        }
        else {
          if (lVar15 == 0) {
            lVar15 = 0;
          }
          else {
            FUN_00d50b00();
          }
joined_r0x014a3af5:
          if ((bVar1) && (local_78 != 0)) {
            FUN_00d50b20();
            bVar1 = true;
            local_78 = lVar15;
            goto LAB_014a3b40;
          }
          bVar1 = true;
          iVar9 = *(int *)(lVar13 + 0x3c);
          local_78 = lVar15;
        }
        if (iVar9 == 1) goto LAB_014a3bb5;
LAB_014a3b4b:
        bVar16 = true;
        if (((iVar9 == 2) && (*(int *)(local_40 + 0x3c) == 1)) &&
           (*(double *)(local_40 + 0x10) - *(double *)(lVar13 + 0x10) < (double)param_2))
        goto LAB_014a3bd8;
      }
      else {
        lVar15 = 0;
        if (local_78 != 0) goto joined_r0x014a3af5;
        local_78 = 0;
        iVar9 = *(int *)(lVar13 + 0x3c);
        if (iVar9 != 1) goto LAB_014a3b4b;
LAB_014a3bb5:
        bVar16 = true;
        if ((*(int *)(local_40 + 0x3c) == 2) &&
           (*(double *)(local_40 + 0x10) - *(double *)(lVar13 + 0x10) < (double)param_1)) {
LAB_014a3bd8:
          bVar16 = false;
        }
      }
      if ((local_78 == 0) || (*(int *)(local_40 + 0x3c) == *(int *)(local_78 + 0x3c))) {
        if (!bVar16) goto LAB_014a3c27;
      }
      else if (!bVar16 &&
               *(double *)(local_40 + 0x10) - *(double *)(lVar13 + 0x10) <=
               *(double *)(local_78 + 0x10) - *(double *)(local_40 + 0x10)) {
LAB_014a3c27:
        auVar19 = insertps(ZEXT416(*(uint *)(lVar13 + 0x2c)),*(undefined4 *)(local_40 + 0x2c),0x10);
        auVar17 = insertps(ZEXT416(*(uint *)(lVar13 + 0x20)),*(undefined4 *)(local_40 + 0x20),0x10);
        auVar21 = insertps(ZEXT416(*(uint *)(lVar13 + 0x28)),*(undefined4 *)(local_40 + 0x28),0x10);
        fVar18 = _DAT_023b5570 - auVar21._0_4_;
        fVar20 = _UNK_023b5574 - auVar21._4_4_;
        lVar15 = local_70;
        cVar2 = cVar3;
        if (fVar18 * fVar18 * auVar17._0_4_ * auVar19._0_4_ <=
            fVar20 * fVar20 * auVar17._4_4_ * auVar19._4_4_) {
          if (lVar12 == local_40) {
            lVar4 = lVar12;
            if (((cVar7 != '\0') && (cVar11 == '\0')) && (lVar12 != 0)) {
              FUN_00d50b00();
              cVar10 = '\x01';
              cVar11 = '\x01';
            }
          }
          else {
            if (cVar7 != '\0') {
              FUN_00d50b00();
            }
            bVar16 = cVar11 != '\0';
            lVar4 = local_40;
            cVar11 = cVar7;
            cVar10 = cVar8;
            if ((bVar16) && (lVar12 != 0)) {
              FUN_00d50b20();
              cVar10 = cVar7;
            }
          }
          lVar12 = lVar4;
          if (local_70 == lVar13) {
            if (((cVar5 != '\0') && (cVar3 == '\0')) && (local_70 != 0)) {
              FUN_00d50b00();
              cVar2 = '\x01';
            }
          }
          else {
            if (cVar5 != '\0') {
              FUN_00d50b00();
              cVar11 = cVar10;
            }
            lVar15 = lVar13;
            cVar2 = cVar5;
            if ((cVar3 != '\0') && (local_70 != 0)) {
              FUN_00d50b20(cVar3);
            }
          }
        }
        else {
          if (lVar12 == lVar13) {
            lVar4 = lVar12;
            if (((cVar5 != '\0') && (cVar11 == '\0')) && (lVar12 != 0)) {
              FUN_00d50b00();
              cVar10 = '\x01';
              cVar11 = '\x01';
            }
          }
          else {
            if (cVar5 != '\0') {
              FUN_00d50b00();
            }
            bVar16 = cVar11 != '\0';
            lVar4 = lVar13;
            cVar11 = cVar5;
            cVar10 = cVar6;
            if ((bVar16) && (lVar12 != 0)) {
              FUN_00d50b20(lVar13);
              cVar10 = cVar5;
            }
          }
          lVar12 = lVar4;
          if (local_70 == local_40) {
            if (((cVar7 != '\0') && (cVar3 == '\0')) && (local_70 != 0)) {
              FUN_00d50b00();
              cVar2 = '\x01';
            }
          }
          else {
            if (cVar7 != '\0') {
              FUN_00d50b00();
              cVar10 = cVar11;
            }
            cVar2 = cVar7;
            if ((cVar3 == '\0') || (local_70 == 0)) {
              local_70 = local_40;
              lVar15 = local_70;
            }
            else {
              local_70 = local_40;
              FUN_00d50b20(cVar3);
              lVar15 = local_70;
            }
          }
        }
        local_70 = lVar15;
        if ((*(int *)(lVar13 + 0x3c) == 2) && (lVar13 != lVar12)) {
          *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(lVar13 + 0x10);
          *(undefined4 *)(lVar12 + 0x24) = *(undefined4 *)(lVar13 + 0x20);
        }
        fVar18 = *(float *)(local_70 + 0x20);
        if (fVar18 < *(float *)(lVar12 + 0x20) || fVar18 == *(float *)(lVar12 + 0x20)) {
          fVar18 = *(float *)(local_70 + 0x28);
          if (fVar18 < *(float *)(lVar12 + 0x28) || fVar18 == *(float *)(lVar12 + 0x28))
          goto LAB_014a4016;
LAB_014a406d:
          *(float *)(lVar12 + 0x28) = fVar18;
          fVar18 = *(float *)(local_70 + 0x2c);
          if (*(float *)(lVar12 + 0x2c) <= fVar18 && fVar18 != *(float *)(lVar12 + 0x2c))
          goto LAB_014a4023;
LAB_014a4081:
          fVar18 = *(float *)(local_70 + 0x30);
          if (fVar18 < *(float *)(lVar12 + 0x30) || fVar18 == *(float *)(lVar12 + 0x30))
          goto LAB_014a4037;
LAB_014a408e:
          *(float *)(lVar12 + 0x30) = fVar18;
          fVar18 = *(float *)(local_70 + 0x34);
          if (*(float *)(lVar12 + 0x34) <= fVar18 && fVar18 != *(float *)(lVar12 + 0x34))
          goto LAB_014a4044;
LAB_014a40a2:
          fVar18 = *(float *)(local_70 + 0x38);
          if (*(float *)(lVar12 + 0x38) <= fVar18 && fVar18 != *(float *)(lVar12 + 0x38))
          goto LAB_014a40af;
        }
        else {
          *(float *)(lVar12 + 0x20) = fVar18;
          fVar18 = *(float *)(local_70 + 0x28);
          if (*(float *)(lVar12 + 0x28) <= fVar18 && fVar18 != *(float *)(lVar12 + 0x28))
          goto LAB_014a406d;
LAB_014a4016:
          fVar18 = *(float *)(local_70 + 0x2c);
          if (fVar18 < *(float *)(lVar12 + 0x2c) || fVar18 == *(float *)(lVar12 + 0x2c))
          goto LAB_014a4081;
LAB_014a4023:
          *(float *)(lVar12 + 0x2c) = fVar18;
          fVar18 = *(float *)(local_70 + 0x30);
          if (*(float *)(lVar12 + 0x30) <= fVar18 && fVar18 != *(float *)(lVar12 + 0x30))
          goto LAB_014a408e;
LAB_014a4037:
          fVar18 = *(float *)(local_70 + 0x34);
          if (fVar18 < *(float *)(lVar12 + 0x34) || fVar18 == *(float *)(lVar12 + 0x34))
          goto LAB_014a40a2;
LAB_014a4044:
          *(float *)(lVar12 + 0x34) = fVar18;
          fVar18 = *(float *)(local_70 + 0x38);
          if (*(float *)(lVar12 + 0x38) <= fVar18 && fVar18 != *(float *)(lVar12 + 0x38)) {
LAB_014a40af:
            *(float *)(lVar12 + 0x38) = fVar18;
          }
        }
        *(uint *)(lVar12 + 0x3c) = *(uint *)(lVar12 + 0x3c) | *(uint *)(local_70 + 0x3c);
        FUN_00d23f50();
        cVar3 = cVar2;
      }
      lVar14 = lVar14 + 1;
      lVar15 = *arg1;
    } while (lVar14 < (longlong)*(int *)(lVar15 + 0xc) + -1);
    if ((cVar3 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((cVar11 != '\0') && (lVar12 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar1) && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((cVar7 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @014af180 (2039 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  double dVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int in_ECX;
  longlong lVar10;
  longlong *in_RDX;
  longlong lVar11;
  longlong lVar12;
  longlong *arg1;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  longlong local_78;
  longlong local_68;
  double local_60;
  longlong local_58;
  double local_48;
  longlong local_40;
  
  lVar12 = *arg1;
  if (0 < *(int *)(lVar12 + 0xc)) {
    dVar15 = DAT_0238fee8 / param_2;
    lVar11 = 0;
    lVar13 = 0;
    local_68 = 0;
    bVar3 = false;
    local_78 = 0;
    bVar4 = false;
    local_58 = 0;
    bVar5 = false;
    lVar14 = 0;
    bVar8 = false;
    local_40 = 0;
    bVar7 = false;
    do {
      lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + lVar11 * 8);
      if (local_68 == lVar12) {
        if ((!bVar3) && (local_68 != 0)) {
          bVar3 = true;
          FUN_00d50b00();
        }
LAB_014af300:
        iVar2 = *(int *)(local_68 + 0x3c);
      }
      else {
        if (lVar12 != 0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (local_68 != 0)) {
          FUN_00d50b20();
          bVar3 = true;
          local_68 = lVar12;
          goto LAB_014af300;
        }
        bVar3 = true;
        iVar2 = *(int *)(lVar12 + 0x3c);
        local_68 = lVar12;
      }
      if (iVar2 == in_ECX) {
        bVar6 = bVar5;
        if (lVar11 < (longlong)*(int *)(*arg1 + 0xc) + -1) {
          lVar12 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + 8 + lVar11 * 8);
          if (local_78 == lVar12) {
            lVar10 = local_78;
            bVar9 = bVar4;
            if ((!bVar4) && (lVar12 != 0)) {
              FUN_00d50b00();
              bVar9 = true;
            }
          }
          else {
            if (lVar12 != 0) {
              FUN_00d50b00();
            }
LAB_014af38d:
            bVar9 = true;
            lVar10 = lVar12;
            if ((bVar4) && (local_78 != 0)) {
              FUN_00d50b20();
            }
          }
          bVar4 = bVar9;
          local_78 = lVar10;
          if (lVar11 == 0) goto LAB_014af3c1;
LAB_014af43c:
          lVar12 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + -8 + lVar11 * 8);
          if (local_58 != lVar12) {
            if (lVar12 != 0) {
              FUN_00d50b00();
              goto LAB_014af462;
            }
            lVar12 = 0;
            bVar6 = true;
            if (!bVar5) goto LAB_014af4d0;
            goto LAB_014af46c;
          }
          lVar12 = local_58;
          if ((!bVar5) && (local_58 != 0)) {
            FUN_00d50b00();
            bVar6 = true;
          }
        }
        else {
          lVar12 = 0;
          if (local_78 != 0) goto LAB_014af38d;
          local_78 = 0;
          if (lVar11 != 0) goto LAB_014af43c;
LAB_014af3c1:
          lVar12 = 0;
          if (local_58 == 0) {
            lVar12 = 0;
          }
          else {
LAB_014af462:
            bVar6 = true;
            if (bVar5) {
LAB_014af46c:
              bVar6 = true;
              if (local_58 != 0) {
                FUN_00d50b20();
              }
            }
          }
        }
LAB_014af4d0:
        dVar1 = *(double *)(local_68 + 0x10);
        local_60 = 0.0;
        if (0.0 <= dVar1 - param_2) {
          local_60 = dVar1 - param_2;
        }
        if ((lVar12 != 0) &&
           (dVar16 = (*(double *)(lVar12 + 0x10) + dVar1) * DAT_023942d0, local_60 < dVar16)) {
          local_60 = dVar16;
        }
        dVar16 = (*(double *)(local_68 + 0x18) + dVar1) * DAT_023942d0;
        if (local_40 != 0) {
          if (bVar8) {
            bVar8 = false;
            FUN_00d50b20();
          }
          else {
            bVar8 = false;
          }
        }
        lVar10 = *in_RDX;
        local_58 = lVar12;
        bVar5 = bVar6;
        if ((int)lVar13 < *(int *)(lVar10 + 0xc)) {
          dVar17 = param_3;
          if (dVar1 + param_2 <= param_3) {
            dVar17 = dVar1 + param_2;
          }
          if (dVar17 <= dVar16) {
            dVar16 = dVar17;
          }
          lVar13 = (longlong)(int)lVar13;
          if (in_ECX == 1) {
            local_48 = DAT_0240e3f8;
            local_40 = 0;
            bVar6 = bVar8;
            do {
              lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar13 * 8);
              if (lVar14 == lVar12) {
                if ((!bVar7) && (lVar14 != 0)) {
                  bVar7 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar12 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar7) && (lVar14 != 0)) {
                  FUN_00d50b20();
                  bVar7 = true;
                  lVar14 = lVar12;
                }
                else {
                  bVar7 = true;
                  lVar14 = lVar12;
                }
              }
              dVar17 = *(double *)(lVar14 + 0x10);
              bVar8 = bVar6;
              if (dVar16 < dVar17) break;
              lVar12 = local_40;
              if (((local_60 < dVar17) && (param_1 < *(float *)(lVar14 + 0x20))) &&
                 (dVar17 = (DAT_0238fee8 -
                           (double)((ulonglong)(dVar1 - dVar17) & _DAT_023908f0) * dVar15) *
                           (double)*(float *)(lVar14 + 0x30) * (double)*(float *)(lVar14 + 0x20),
                 local_48 < dVar17)) {
                local_48 = dVar17;
                if (local_40 == lVar14) {
                  if ((bVar7) && (!bVar6)) {
                    FUN_00d50b00();
                    bVar8 = true;
                  }
                }
                else {
                  if (bVar7) {
                    FUN_00d50b00();
                  }
                  lVar12 = lVar14;
                  bVar8 = bVar7;
                  if ((bVar6) && (local_40 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              local_40 = lVar12;
              lVar13 = lVar13 + 1;
              lVar10 = *in_RDX;
              bVar6 = bVar8;
            } while (lVar13 < *(int *)(lVar10 + 0xc));
          }
          else {
            local_48 = DAT_0240e3f8;
            local_40 = 0;
            do {
              lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar13 * 8);
              if (lVar14 == lVar12) {
                if ((!bVar7) && (lVar14 != 0)) {
                  bVar7 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar12 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar7) && (lVar14 != 0)) {
                  FUN_00d50b20();
                  bVar7 = true;
                  lVar14 = lVar12;
                }
                else {
                  bVar7 = true;
                  lVar14 = lVar12;
                }
              }
              dVar17 = *(double *)(lVar14 + 0x10);
              if (dVar16 < dVar17) break;
              lVar12 = local_40;
              bVar6 = bVar8;
              if (((local_60 < dVar17) && (param_1 < *(float *)(lVar14 + 0x20))) &&
                 (dVar17 = (DAT_0238fee8 -
                           (double)((ulonglong)(dVar1 - dVar17) & _DAT_023908f0) * dVar15) *
                           (double)*(float *)(lVar14 + 0x2c) * (double)*(float *)(lVar14 + 0x20),
                 local_48 < dVar17)) {
                local_48 = dVar17;
                if (local_40 == lVar14) {
                  if ((bVar7) && (!bVar8)) {
                    FUN_00d50b00();
                    bVar6 = true;
                  }
                }
                else {
                  if (bVar7) {
                    FUN_00d50b00();
                  }
                  lVar12 = lVar14;
                  bVar6 = bVar7;
                  if ((bVar8) && (local_40 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              bVar8 = bVar6;
              local_40 = lVar12;
              lVar13 = lVar13 + 1;
              lVar10 = *in_RDX;
            } while (lVar13 < *(int *)(lVar10 + 0xc));
          }
          lVar12 = *(longlong *)(local_68 + 0x40);
          if (lVar12 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(longlong *)(local_68 + 0x40) = local_40;
            if (lVar12 != 0) goto LAB_014af257;
          }
        }
        else if (*(longlong *)(local_68 + 0x40) == 0) {
          local_40 = 0;
        }
        else {
          *(undefined8 *)(local_68 + 0x40) = 0;
          local_40 = 0;
LAB_014af257:
          FUN_00d50b20();
        }
      }
      lVar11 = lVar11 + 1;
      lVar12 = *arg1;
    } while (lVar11 < *(int *)(lVar12 + 0xc));
    if ((bVar8) && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar7) && (lVar14 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar5) && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar4) && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (bVar3) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @014aa770 (2019 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong *in_RDX;
  int iVar13;
  longlong *arg1;
  undefined4 in_R8D;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  longlong local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  char local_d0;
  undefined8 local_c8;
  longlong local_78;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  local_c8 = param_1;
  FUN_014b3460(in_R8D);
  fVar15 = (float)_logf(param_2 / _DAT_0240e330);
  fVar16 = (float)_logf(param_3 / _DAT_0240e330);
  fVar17 = (float)_logf(param_4 / _DAT_0240e330);
  lVar14 = *arg1;
  if (0 < *(int *)(lVar14 + 0xc)) {
    iVar9 = (int)(fVar15 * DAT_0240e334 * DAT_023941f0 + DAT_0239011c);
    iVar10 = (int)(fVar16 * DAT_0240e334 * DAT_023941f0 + DAT_0239011c);
    iVar11 = (int)(fVar17 * DAT_0240e334 * DAT_023941f0 + DAT_0239011c);
    iVar13 = 0;
    local_78 = 0;
    bVar3 = false;
    local_48 = 0;
    bVar4 = false;
    local_60 = 0;
    bVar7 = false;
    local_50 = 0;
    bVar5 = false;
    local_58 = 0;
    bVar6 = false;
    do {
      lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x10) + (longlong)iVar13 * 8);
      if (local_78 == lVar14) {
        if ((!bVar3) && (local_78 != 0)) {
          bVar3 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar14 != 0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (local_78 != 0)) {
          FUN_00d50b20();
          bVar3 = true;
          local_78 = lVar14;
        }
        else {
          bVar3 = true;
          local_78 = lVar14;
        }
      }
      local_f8 = *in_RDX;
      local_f0 = 0;
      local_e8 = local_78;
      local_e0 = 0;
      FUN_014b3ce0(local_c8,&local_f8,&local_e8,0);
      lVar14 = local_d8;
      if (local_d8 == local_48) {
        if ((!bVar4) && (local_d8 != 0)) {
          lVar14 = local_48;
          if (local_d0 == '\0') {
            FUN_00d50b00();
          }
joined_r0x014aaa8b:
          bVar4 = true;
          local_48 = lVar14;
          goto joined_r0x014aaa8b;
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
          goto joined_r0x014aaa8b;
        }
joined_r0x014aac3c:
        if (local_48 != 0) goto LAB_014aab1d;
LAB_014aac6a:
        FUN_00d23620();
        iVar13 = iVar13 + -1;
      }
      else {
        if (local_d0 == '\0') {
          if (local_d8 != 0) {
            FUN_00d50b00();
          }
          if (!bVar4) goto joined_r0x014aaa8b;
          if (local_48 == 0) goto LAB_014aaad0;
          FUN_00d50b20();
          bVar4 = true;
          local_48 = lVar14;
        }
        else {
          if ((!bVar4) || (local_48 == 0)) {
LAB_014aaad0:
            bVar4 = true;
            local_48 = lVar14;
            goto joined_r0x014aac3c;
          }
          FUN_00d50b20();
          bVar4 = true;
          local_48 = lVar14;
        }
joined_r0x014aaa8b:
        if (local_48 == 0) goto LAB_014aac6a;
LAB_014aab1d:
        dVar18 = *(double *)(local_78 + 0x18) - *(double *)(local_78 + 0x10);
        iVar1 = *(int *)(local_48 + 0x10);
        iVar12 = iVar9 - iVar1;
        if (iVar11 <= iVar1) {
          iVar12 = 0;
        }
        if (iVar10 < iVar1) {
          iVar12 = iVar1 - iVar9;
        }
        if (0 < iVar12) {
          if (dVar18 < DAT_02390108) goto LAB_014aac6a;
          if (DAT_0241f368 <=
              ((float)iVar12 / DAT_0240e350) * DAT_02391090 + *(float *)(local_48 + 0x1c))
          goto LAB_014aa923;
          lVar14 = *(longlong *)
                    (*(longlong *)(*in_RDX + 0x10) + (longlong)*(int *)(local_48 + 0xc) * 8);
          if (local_58 == lVar14) {
            if ((!bVar5) && (local_58 != 0)) {
              FUN_00d50b00();
              lVar14 = local_58;
              goto LAB_014aacb8;
            }
            if (local_50 != 0) goto LAB_014aacc3;
LAB_014aaee4:
            iVar1 = *(int *)(local_58 + 0xc);
          }
          else {
            if (lVar14 != 0) {
              FUN_00d50b00();
            }
            if ((bVar5) && (local_58 != 0)) {
              FUN_00d50b20();
            }
LAB_014aacb8:
            bVar5 = true;
            local_58 = lVar14;
            if (local_50 == 0) goto LAB_014aaee4;
LAB_014aacc3:
            if (bVar6) {
              FUN_00d50b20();
              iVar1 = *(int *)(local_58 + 0xc);
            }
            else {
              iVar1 = *(int *)(local_58 + 0xc);
            }
            bVar6 = false;
          }
          if (iVar1 < 1) {
            local_50 = 0;
          }
          else {
            fVar15 = 0.0;
            lVar14 = 0;
            local_50 = 0;
            do {
              lVar8 = *(longlong *)(*(longlong *)(local_58 + 0x10) + lVar14 * 8);
              if (local_60 == lVar8) {
                if ((!bVar7) && (local_60 != 0)) {
                  bVar7 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar8 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar7) && (local_60 != 0)) {
                  FUN_00d50b20();
                  bVar7 = true;
                  local_60 = lVar8;
                }
                else {
                  bVar7 = true;
                  local_60 = lVar8;
                }
              }
              if (((*(int *)(local_60 + 0x10) < iVar10) && (iVar11 < *(int *)(local_60 + 0x10))) &&
                 (fVar15 < *(float *)(local_60 + 0x1c))) {
                if (local_50 == local_60) {
                  lVar8 = local_50;
                  bVar2 = bVar6;
                  if ((bVar7) && (!bVar6)) {
                    if (local_50 == 0) {
                      bVar2 = false;
                    }
                    else {
                      FUN_00d50b00();
                      bVar2 = true;
                    }
                  }
                }
                else {
                  if (bVar7) {
                    FUN_00d50b00();
                  }
                  lVar8 = local_60;
                  bVar2 = bVar7;
                  if ((bVar6) && (local_50 != 0)) {
                    FUN_00d50b20();
                  }
                }
                fVar15 = *(float *)(local_60 + 0x1c);
                local_50 = lVar8;
                bVar6 = bVar2;
              }
              lVar14 = lVar14 + 1;
            } while (lVar14 < *(int *)(local_58 + 0xc));
            if (local_50 != 0) {
              fVar15 = (float)_exp2f((float)*(int *)(local_50 + 0x10) / DAT_023941f0);
              *(float *)(local_78 + 0x38) = fVar15 * _DAT_0240e330;
              goto LAB_014aa923;
            }
            local_50 = 0;
          }
          goto LAB_014aac6a;
        }
        if ((dVar18 < DAT_02390108) &&
           ((*(float *)(local_48 + 0x1c) <= DAT_0241f368 &&
             DAT_0241f368 != *(float *)(local_48 + 0x1c) ||
            ((*(longlong *)(local_48 + 0x30) == 0 && (*(longlong *)(local_48 + 0x28) == 0))))))
        goto LAB_014aac6a;
      }
LAB_014aa923:
      iVar13 = iVar13 + 1;
      lVar14 = *arg1;
    } while (iVar13 < *(int *)(lVar14 + 0xc));
    if ((bVar5) && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar6) && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar7) && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar4) && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar3) && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @014a6a60 (1982 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint in_ECX;
  undefined *puVar8;
  void *pvVar9;
  int iVar10;
  ulonglong uVar11;
  size_t in_R8D;
  bool bVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float in_XMM4_Da;
  undefined4 in_XMM5_Da;
  undefined4 unaff_XMM6_Da;
  float fVar22;
  longlong local_60;
  char local_58;
  longlong local_38;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar8 = &DAT_02572358;
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  lVar6 = FUN_00e83010();
  lVar7 = FUN_00e83010();
  _memcpy(puVar8,(void *)((longlong)(int)in_ECX << 2),in_R8D);
  pvVar9 = (void *)0x0;
  FUN_015c1480(in_XMM5_Da,in_ECX);
  _memcpy(pvVar9,(void *)((longlong)(int)in_ECX << 2),in_R8D);
  FUN_015c1480(unaff_XMM6_Da,in_ECX);
  if (0 < (int)in_ECX) {
    fVar14 = (float)((double)param_2 * param_1);
    uVar11 = 0;
    local_38._0_4_ = DAT_02390d00;
    fVar15 = 0.0;
    fVar19 = DAT_02393944;
    do {
      fVar4 = (float)local_38;
      fVar16 = *(float *)(lVar7 + uVar11 * 4);
      fVar17 = *(float *)(lVar6 + uVar11 * 4);
      fVar22 = fVar16 / fVar17;
      local_38._0_4_ = DAT_02390d00;
      if ((in_XMM4_Da <= fVar17 && in_XMM4_Da <= fVar16) && param_3 <= fVar22) {
        local_38._0_4_ = DAT_02390124;
      }
      fVar20 = fVar22;
      if (fVar19 <= fVar22) {
        fVar20 = fVar19;
      }
      iVar10 = (int)uVar11;
      if ((0.0 <= fVar4) || ((float)local_38 <= 0.0)) {
        fVar21 = fVar22;
        if (fVar22 <= fVar15) {
          fVar21 = fVar15;
        }
        fVar15 = fVar21;
        fVar19 = fVar20;
        if (((in_XMM4_Da > fVar17 || in_XMM4_Da > fVar16) || param_3 > fVar22) && 0.0 < fVar4) {
          iVar1 = *(int *)((longlong)puVar5 + 0xc);
          if (0 < iVar1) {
            lVar13 = *(longlong *)(puVar5[2] + (ulonglong)(iVar1 - 1) * 8);
            fVar16 = (float)*(double *)(lVar13 + 0x10);
            fVar17 = (float)iVar10 - fVar16;
            fVar19 = (float)*(double *)(lVar13 + 0x18);
            if ((fVar17 < fVar14) ||
               ((fVar17 < fVar14 + fVar14 &&
                ((fVar21 < param_4 || (DAT_02390120 < fVar19 / fVar21)))))) {
              FUN_00d23740();
              if (fVar20 <= fVar19) {
                fVar19 = fVar20;
              }
              goto LAB_014a6beb;
            }
            if (((2 < iVar1) &&
                (lVar13 = *(longlong *)(puVar5[2] + (ulonglong)(iVar1 - 2) * 8),
                fVar16 - (float)*(double *)(lVar13 + 0x10) < fVar14 + fVar14)) &&
               ((DAT_02390120 < fVar19 / fVar21 ||
                (DAT_02390120 <
                 fVar19 / (float)((uint)(float)*(double *)(lVar13 + 0x18) ^ _DAT_023945e0))))) {
              FUN_00d23740();
              FUN_00d23740();
            }
          }
          FUN_014328b0(SUB84((double)iVar10,0));
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          FUN_00d21140();
          if (local_60 != 0) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_014a6be0;
        }
      }
      else {
        FUN_014328b0(SUB84((double)iVar10,0));
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        FUN_00d21140();
        if (local_60 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
LAB_014a6be0:
        fVar15 = 0.0;
        fVar19 = DAT_02393944;
      }
LAB_014a6beb:
      uVar11 = uVar11 + 1;
    } while (in_ECX != uVar11);
  }
  FUN_00d216c0();
  if (*(int *)((longlong)puVar5 + 0xc) < 1) {
    bVar12 = false;
    local_38 = 0;
    bVar3 = false;
    lVar6 = 0;
  }
  else {
    param_1 = DAT_0238fee8 / param_1;
    lVar7 = 0;
    lVar6 = 0;
    bVar3 = false;
    local_38 = 0;
    bVar12 = false;
    do {
      lVar13 = *(longlong *)(puVar5[2] + lVar7 * 8);
      if (lVar6 == lVar13) {
        if ((!bVar3) && (lVar6 != 0)) {
          bVar3 = true;
          FUN_00d50b00();
        }
LAB_014a7010:
        if (0.0 < *(double *)(lVar6 + 0x18) || *(double *)(lVar6 + 0x18) == 0.0) {
LAB_014a7049:
          dVar18 = (double)(int)(in_ECX - 1);
          bVar2 = bVar12;
          if (lVar7 < (longlong)*(int *)((longlong)puVar5 + 0xc) + -1) {
            lVar13 = *(longlong *)(puVar5[2] + 8 + lVar7 * 8);
            if (local_38 == lVar13) {
              lVar13 = local_38;
              if ((bVar12) || (local_38 == 0)) goto LAB_014a70ba;
              bVar2 = true;
              FUN_00d50b00();
            }
            else {
              if (lVar13 != 0) {
                FUN_00d50b00();
                goto LAB_014a70a1;
              }
              lVar13 = 0;
              bVar2 = true;
              if (!bVar12) goto LAB_014a70ba;
LAB_014a70a9:
              bVar2 = true;
              if (local_38 != 0) {
                FUN_00d50b20();
              }
LAB_014a70ba:
              local_38 = lVar13;
              if (local_38 == 0) {
                local_38 = 0;
                goto LAB_014a70e1;
              }
            }
            dVar18 = *(double *)(local_38 + 0x10);
          }
          else {
            lVar13 = 0;
            if (local_38 != 0) {
LAB_014a70a1:
              bVar2 = true;
              if (bVar12) goto LAB_014a70a9;
              goto LAB_014a70ba;
            }
            local_38 = 0;
          }
LAB_014a70e1:
          FUN_01432380(SUB84(*(double *)(lVar6 + 0x10) * (double)(float)param_1,0),
                       dVar18 * (double)(float)param_1);
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          FUN_00d21140();
          if (local_60 != 0) {
            FUN_00d50b20();
          }
          bVar12 = bVar2;
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        if (lVar13 != 0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (lVar6 != 0)) {
          FUN_00d50b20();
          bVar3 = true;
          lVar6 = lVar13;
          goto LAB_014a7010;
        }
        bVar3 = true;
        lVar6 = lVar13;
        if (0.0 < *(double *)(lVar13 + 0x18) || *(double *)(lVar13 + 0x18) == 0.0)
        goto LAB_014a7049;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((longlong)puVar5 + 0xc));
  }
  FUN_00e83070();
  FUN_00e83070();
  FUN_00d50b20();
  if ((bVar12) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @014ab670 (1968 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [12];
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  longlong *in_RCX;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 in_RDX;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *this;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong in_R8;
  ulonglong in_R9;
  uint uVar16;
  longlong lVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float in_XMM4_Da;
  ulonglong local_res8;
  uint local_res10;
  undefined1 local_68 [16];
  longlong local_40;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  
  lVar12 = *in_RCX;
  iVar11 = *(int *)(lVar12 + 0xc);
  if (iVar11 == 0) {
    local_40 = 0;
    bVar4 = false;
LAB_014ab904:
    uVar6 = _UNK_0240f0e8;
    uVar5 = _DAT_0240f0e0;
    if ((int)local_res10 < 1) goto LAB_014abe0a;
    fVar24 = (float)param_1 / in_XMM4_Da;
    uVar9 = (ulonglong)local_res10;
    if (local_res10 < 8) {
      uVar10 = 0;
    }
    else if ((in_R8 < in_R9 + uVar9 * 4) && (in_R9 < uVar9 * 4 + in_R8)) {
      uVar10 = 0;
    }
    else {
      uVar10 = (ulonglong)(local_res10 & 0xfffffff8);
      uVar13 = (uVar10 - 8 >> 3) + 1;
      uVar15 = (ulonglong)((uint)uVar13 & 3);
      if (uVar10 - 8 < 0x18) {
        lVar17 = 0;
      }
      else {
        lVar12 = -(uVar13 & 0xfffffffffffffffc);
        lVar17 = 0;
        do {
          pfVar1 = (float *)(in_R8 + lVar17 * 4);
          *pfVar1 = fVar24;
          pfVar1[1] = fVar24;
          pfVar1[2] = fVar24;
          pfVar1[3] = fVar24;
          pfVar1 = (float *)(in_R8 + 0x10 + lVar17 * 4);
          *pfVar1 = fVar24;
          pfVar1[1] = fVar24;
          pfVar1[2] = fVar24;
          pfVar1[3] = fVar24;
          puVar2 = (undefined8 *)(in_R9 + lVar17 * 4);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          puVar2 = (undefined8 *)(in_R9 + 0x10 + lVar17 * 4);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          pfVar1 = (float *)(in_R8 + 0x20 + lVar17 * 4);
          *pfVar1 = fVar24;
          pfVar1[1] = fVar24;
          pfVar1[2] = fVar24;
          pfVar1[3] = fVar24;
          pfVar1 = (float *)(in_R8 + 0x30 + lVar17 * 4);
          *pfVar1 = fVar24;
          pfVar1[1] = fVar24;
          pfVar1[2] = fVar24;
          pfVar1[3] = fVar24;
          puVar2 = (undefined8 *)(in_R9 + 0x20 + lVar17 * 4);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          puVar2 = (undefined8 *)(in_R9 + 0x30 + lVar17 * 4);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          pfVar1 = (float *)(in_R8 + 0x40 + lVar17 * 4);
          *pfVar1 = fVar24;
          pfVar1[1] = fVar24;
          pfVar1[2] = fVar24;
          pfVar1[3] = fVar24;
          pfVar1 = (float *)(in_R8 + 0x50 + lVar17 * 4);
          *pfVar1 = fVar24;
          pfVar1[1] = fVar24;
          pfVar1[2] = fVar24;
          pfVar1[3] = fVar24;
          puVar2 = (undefined8 *)(in_R9 + 0x40 + lVar17 * 4);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          puVar2 = (undefined8 *)(in_R9 + 0x50 + lVar17 * 4);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          pfVar1 = (float *)(in_R8 + 0x60 + lVar17 * 4);
          *pfVar1 = fVar24;
          pfVar1[1] = fVar24;
          pfVar1[2] = fVar24;
          pfVar1[3] = fVar24;
          pfVar1 = (float *)(in_R8 + 0x70 + lVar17 * 4);
          *pfVar1 = fVar24;
          pfVar1[1] = fVar24;
          pfVar1[2] = fVar24;
          pfVar1[3] = fVar24;
          puVar2 = (undefined8 *)(in_R9 + 0x60 + lVar17 * 4);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          puVar2 = (undefined8 *)(in_R9 + 0x70 + lVar17 * 4);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          lVar17 = lVar17 + 0x20;
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0);
      }
      uVar6 = _UNK_0240f0e8;
      uVar5 = _DAT_0240f0e0;
      if (uVar15 != 0) {
        lVar12 = in_R9 + lVar17 * 4;
        lVar14 = lVar17 * 4 + 0x10 + in_R8;
        lVar17 = 0;
        do {
          pfVar1 = (float *)(lVar14 + -0x10 + lVar17);
          *pfVar1 = fVar24;
          pfVar1[1] = fVar24;
          pfVar1[2] = fVar24;
          pfVar1[3] = fVar24;
          pfVar1 = (float *)(lVar14 + lVar17);
          *pfVar1 = fVar24;
          pfVar1[1] = fVar24;
          pfVar1[2] = fVar24;
          pfVar1[3] = fVar24;
          puVar2 = (undefined8 *)(lVar12 + lVar17);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          puVar2 = (undefined8 *)(lVar12 + 0x10 + lVar17);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          lVar17 = lVar17 + 0x20;
        } while (uVar15 << 5 != lVar17);
      }
      if (uVar10 == uVar9) goto LAB_014abc58;
    }
    uVar15 = ~uVar10;
    uVar13 = uVar9 & 3;
    if ((local_res10 & 3) != 0) {
      do {
        *(float *)(in_R8 + uVar10 * 4) = fVar24;
        *(undefined4 *)(in_R9 + uVar10 * 4) = 0xb58637bd;
        uVar10 = uVar10 + 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    if (2 < uVar15 + uVar9) {
      do {
        *(float *)(in_R8 + uVar10 * 4) = fVar24;
        *(undefined4 *)(in_R9 + uVar10 * 4) = 0xb58637bd;
        *(float *)(in_R8 + 4 + uVar10 * 4) = fVar24;
        *(undefined4 *)(in_R9 + 4 + uVar10 * 4) = 0xb58637bd;
        *(float *)(in_R8 + 8 + uVar10 * 4) = fVar24;
        *(undefined4 *)(in_R9 + 8 + uVar10 * 4) = 0xb58637bd;
        *(float *)(in_R8 + 0xc + uVar10 * 4) = fVar24;
        *(undefined4 *)(in_R9 + 0xc + uVar10 * 4) = 0xb58637bd;
        uVar10 = uVar10 + 4;
      } while (uVar9 != uVar10);
    }
  }
  else {
    if (iVar11 < 1) {
      local_40 = 0;
      bVar4 = false;
      uVar16 = 0;
      uVar9 = (ulonglong)local_res10;
    }
    else {
      fVar24 = DAT_02390124 / (float)iVar11;
      lVar17 = 0;
      local_68._0_4_ = DAT_0239011c;
      uVar9 = (ulonglong)local_res10;
      uVar16 = 0;
      local_40 = 0;
      bVar4 = false;
      do {
        lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + lVar17 * 8);
        if (local_40 == lVar12) {
          if ((!bVar4) && (local_40 != 0)) {
            bVar4 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar12 != 0) {
            FUN_00d50b00();
          }
          if ((bVar4) && (local_40 != 0)) {
            FUN_00d50b20();
            bVar4 = true;
            local_40 = lVar12;
          }
          else {
            bVar4 = true;
            local_40 = lVar12;
          }
        }
        uVar7 = (uint)(*(double *)(local_40 + 0x20) * param_2);
        uVar8 = (uint)(*(double *)(local_40 + 0x28) * param_2);
        if ((int)local_res10 < (int)uVar8) {
          uVar8 = local_res10;
        }
        if ((int)uVar7 < (int)uVar9) {
          uVar9 = (ulonglong)uVar7;
        }
        if ((int)uVar16 < (int)uVar8) {
          uVar16 = uVar8;
        }
        FUN_014b5bc0(param_1,in_RDX,param_3,param_4,0);
        fVar18 = (float)(int)lVar17 * fVar24 * DAT_02394214 + DAT_0239011c;
        if ((DAT_02394254 < fVar18 - (float)local_68._0_4_) &&
           ((**(code **)(*this + 0x380))(), local_68._0_4_ = fVar18,
           *(char *)((longlong)this + 0x3c) != '\0')) {
          FUN_00e34a60();
          goto LAB_014abe0a;
        }
        lVar17 = lVar17 + 1;
        lVar12 = *in_RCX;
      } while (lVar17 < *(int *)(lVar12 + 0xc));
      if (*(int *)(lVar12 + 0xc) == 0) goto LAB_014ab904;
    }
    uVar8 = (uint)uVar9;
    if (0 < (int)uVar8) {
      lVar12 = (longlong)(int)uVar8;
      uVar10 = uVar9 - 1;
      if ((uVar9 & 3) != 0) {
        iVar11 = -1;
        uVar13 = 0;
        do {
          *(undefined4 *)(in_R8 + (ulonglong)(uVar8 + iVar11) * 4) =
               *(undefined4 *)(in_R8 + lVar12 * 4);
          uVar13 = uVar13 + 1;
          iVar11 = iVar11 + -1;
        } while ((uVar9 & 3) != uVar13);
        uVar9 = uVar9 - uVar13;
        uVar8 = (uint)uVar9;
      }
      if (2 < uVar10) {
        lVar17 = uVar9 + 4;
        do {
          *(undefined4 *)(in_R8 + (ulonglong)(uVar8 - 1) * 4) = *(undefined4 *)(in_R8 + lVar12 * 4);
          *(undefined4 *)(in_R8 + (ulonglong)(uVar8 - 2) * 4) = *(undefined4 *)(in_R8 + lVar12 * 4);
          *(undefined4 *)(in_R8 + (ulonglong)(uVar8 - 3) * 4) = *(undefined4 *)(in_R8 + lVar12 * 4);
          *(undefined4 *)(in_R8 + (ulonglong)(uVar8 - 4) * 4) = *(undefined4 *)(in_R8 + lVar12 * 4);
          lVar17 = lVar17 + -4;
          uVar8 = uVar8 - 4;
        } while (4 < lVar17);
      }
    }
    if ((int)uVar16 < (int)local_res10) {
      lVar12 = (longlong)(int)(uVar16 - 1);
      uVar9 = (ulonglong)(int)uVar16;
      uVar13 = ~uVar9;
      uVar10 = (ulonglong)(local_res10 - uVar16) & 3;
      if ((local_res10 - uVar16 & 3) != 0) {
        do {
          *(undefined4 *)(in_R8 + uVar9 * 4) = *(undefined4 *)(in_R8 + lVar12 * 4);
          uVar9 = uVar9 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (2 < uVar13 + (longlong)(int)local_res10) {
        do {
          *(undefined4 *)(in_R8 + uVar9 * 4) = *(undefined4 *)(in_R8 + lVar12 * 4);
          *(undefined4 *)(in_R8 + 4 + uVar9 * 4) = *(undefined4 *)(in_R8 + lVar12 * 4);
          *(undefined4 *)(in_R8 + 8 + uVar9 * 4) = *(undefined4 *)(in_R8 + lVar12 * 4);
          *(undefined4 *)(in_R8 + 0xc + uVar9 * 4) = *(undefined4 *)(in_R8 + lVar12 * 4);
          uVar9 = uVar9 + 4;
        } while ((longlong)(int)local_res10 != uVar9);
      }
    }
  }
LAB_014abc58:
  if (0 < (int)local_res10) {
    fVar24 = (float)param_1;
    uVar9 = (ulonglong)local_res10;
    if ((local_res10 < 4) || ((local_res8 < uVar9 * 4 + in_R8 && (in_R8 < local_res8 + uVar9 * 4))))
    {
      uVar10 = 0;
    }
    else {
      uVar10 = (ulonglong)(local_res10 & 0xfffffffc);
      uVar13 = 0;
      do {
        auVar19._4_4_ = fVar24;
        auVar19._0_4_ = fVar24;
        auVar19._8_4_ = fVar24;
        auVar19._12_4_ = fVar24;
        auVar19 = divps(auVar19,*(undefined1 (*) [16])(in_R8 + uVar13 * 4));
        fVar18 = auVar19._4_4_ * _UNK_02394164;
        auVar21._8_4_ = auVar19._8_4_ * _UNK_02394168;
        auVar21._12_4_ = auVar19._12_4_ * _UNK_0239416c;
        local_68._0_8_ = _logf();
        local_68._8_8_ = extraout_XMM0_Qb;
        auVar20._0_8_ = _logf();
        auVar20._8_8_ = extraout_XMM0_Qb_00;
        auVar19 = insertps(local_68,auVar20,0x10);
        auVar3._4_8_ = extraout_XMM0_Qb_00;
        auVar3._0_4_ = fVar18;
        auVar21._0_8_ = auVar3._0_8_ << 0x20;
        auVar22._0_8_ = _logf(auVar21._8_8_);
        auVar22._8_8_ = extraout_XMM0_Qb_01;
        auVar19 = insertps(auVar19,auVar22,0x20);
        auVar23._0_8_ = _logf();
        auVar23._8_8_ = extraout_XMM0_Qb_02;
        auVar19 = insertps(auVar19,auVar23,0x30);
        fVar18 = auVar19._4_4_ * _UNK_02394174;
        fVar25 = auVar19._8_4_ * _UNK_02394178;
        fVar26 = auVar19._12_4_ * _UNK_0239417c;
        pfVar1 = (float *)(local_res8 + uVar13 * 4);
        *pfVar1 = auVar19._0_4_ * _DAT_02394170;
        pfVar1[1] = fVar18;
        pfVar1[2] = fVar25;
        pfVar1[3] = fVar26;
        uVar13 = uVar13 + 4;
      } while (uVar10 != uVar13);
      if (uVar10 == uVar9) goto LAB_014abe0a;
    }
    uVar13 = ~uVar10;
    if ((local_res10 & 1) != 0) {
      fVar18 = (float)_logf((fVar24 / *(float *)(in_R8 + uVar10 * 4)) * DAT_02394204);
      *(float *)(local_res8 + uVar10 * 4) = fVar18 * DAT_02394208;
      uVar10 = uVar10 | 1;
    }
    if (uVar13 + uVar9 != 0) {
      do {
        fVar18 = (float)_logf((fVar24 / *(float *)(in_R8 + uVar10 * 4)) * DAT_02394204);
        *(float *)(local_res8 + uVar10 * 4) = fVar18 * DAT_02394208;
        fVar18 = (float)_logf((fVar24 / *(float *)(in_R8 + 4 + uVar10 * 4)) * DAT_02394204);
        *(float *)(local_res8 + 4 + uVar10 * 4) = fVar18 * DAT_02394208;
        uVar10 = uVar10 + 2;
      } while (uVar9 != uVar10);
    }
  }
LAB_014abe0a:
  if ((bVar4) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0074ddb0 (1762 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong *this;
  longlong **pplVar6;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  local_a0 = 0;
  lVar4 = this[0x24];
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  local_a8 = lVar4;
  FUN_0074e990();
  plVar2 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    local_50 = 0;
    local_58 = (longlong *)0x0;
    local_48 = plVar2;
    local_40._0_4_ = -1;
    local_40._4_4_ = 0;
    local_38 = 0;
    while( true ) {
      lVar4 = (longlong)(int)local_40;
      local_40._0_4_ = (int)local_40 + 1;
      if (*(int *)((longlong)local_48 + 0xc) <= (int)local_40) break;
      local_58 = *(longlong **)(local_48[2] + 8 + lVar4 * 8);
      FUN_00e34b50();
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          local_40._4_4_ = -local_40._4_4_;
        }
        else {
          local_40._0_4_ = (int)local_40 - local_40._4_4_;
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          local_40._4_4_ = 0;
        }
      }
    }
    FUN_00097c40();
    local_50 = 0;
    local_58 = (longlong *)0x0;
    local_48 = plVar2;
    local_40._0_4_ = -1;
    local_40._4_4_ = 0;
    local_38 = 0;
    while( true ) {
      lVar4 = (longlong)(int)local_40;
      local_40._0_4_ = (int)local_40 + 1;
      if (*(int *)((longlong)local_48 + 0xc) <= (int)local_40) break;
      local_58 = *(longlong **)(local_48[2] + 8 + lVar4 * 8);
      FUN_0074ea80(local_48[2],1);
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          local_40._4_4_ = -local_40._4_4_;
        }
        else {
          local_40._0_4_ = (int)local_40 - local_40._4_4_;
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          local_40._4_4_ = 0;
        }
      }
    }
    FUN_00097c40();
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_48 = plVar2;
    local_40 = 0xffffffff;
    local_38 = 0;
    while( true ) {
      lVar4 = (longlong)(int)local_40;
      iVar5 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar5);
      if (*(int *)((longlong)local_48 + 0xc) <= iVar5) break;
      local_58 = *(longlong **)(local_48[2] + 8 + lVar4 * 8);
      FUN_00e34b70();
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar5 = -local_40._4_4_;
        }
        else {
          local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar5 = 0;
        }
        local_40 = CONCAT44(iVar5,(int)local_40);
      }
    }
    FUN_00097c40();
  }
  FUN_00d403d0();
  if (this != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_f8 = 0;
  local_f0 = '\0';
  local_e8 = 0;
  local_e0 = '\0';
  FUN_00d41040(&local_e8,&local_f8);
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (this != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  plVar1 = local_58;
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_01f27fe0();
    (**(code **)(this[10] + 0x10))();
    FUN_00d50b00();
    FUN_01f474f0();
    if (this + 10 != (longlong *)0x0) {
      (**(code **)(this[10] + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00751820();
  if (this[0x12] != 0) {
    pplVar6 = &local_58;
    FUN_01f27fe0();
    plVar1 = local_58;
    FUN_003708c0();
    if (plVar1 == (longlong *)0x0) {
LAB_0074e1b9:
      pplVar6 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_0074e1b9;
    }
    plVar1 = *pplVar6;
    if (*(char *)(pplVar6 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar6 + 1) = 0;
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x7b0))();
      lVar4 = this[0x12];
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      FUN_01257b00();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(longlong *)this[0x12] + 0x370))();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d403d0();
      lVar4 = this[0x12];
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      local_d8 = 0;
      local_d0 = '\0';
      local_c8 = 0;
      local_c0 = '\0';
      FUN_00d41040(&local_c8,&local_d8);
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (this[0x12] != 0) {
      this[0x12] = 0;
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this + 0x498))();
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) goto LAB_0074e474;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (longlong *)0x0) goto LAB_0074e474;
  local_b0 = '\0';
  local_b8 = 0;
  (**(code **)(*this + 0x490))();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this + 0x628))();
  if (local_58 == (longlong *)0x0) {
LAB_0074e464:
    FUN_00d50130();
  }
  else {
    cVar3 = FUN_00751ba0();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') goto LAB_0074e464;
  }
  FUN_00d50b20();
LAB_0074e474:
  FUN_00d50550();
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @014b3460 (1727 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong *arg1;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong local_70;
  longlong local_68;
  longlong local_50;
  longlong local_48;
  
  if (0 < (int)param_2) {
    uVar15 = 0;
    local_50 = 0;
    bVar3 = false;
    local_48 = 0;
    bVar4 = false;
    do {
      lVar16 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + uVar15 * 8);
      if (local_50 == lVar16) {
        if ((!bVar3) && (local_50 != 0)) {
          bVar3 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar16 != 0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (local_50 != 0)) {
          FUN_00d50b20();
          bVar3 = true;
          local_50 = lVar16;
        }
        else {
          bVar3 = true;
          local_50 = lVar16;
        }
      }
      uVar9 = *(uint *)(local_50 + 0xc);
      if ((int)param_1 <= (int)*(uint *)(local_50 + 0xc)) {
        uVar9 = param_1;
      }
      if (0 < (int)uVar9) {
        uVar13 = 0;
        do {
          lVar16 = *(longlong *)(*(longlong *)(local_50 + 0x10) + uVar13 * 8);
          if (local_48 == lVar16) {
            if ((!bVar4) && (local_48 != 0)) {
              bVar4 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar16 != 0) {
              FUN_00d50b00();
            }
            if ((bVar4) && (local_48 != 0)) {
              FUN_00d50b20();
              bVar4 = true;
              local_48 = lVar16;
            }
            else {
              bVar4 = true;
              local_48 = lVar16;
            }
          }
          *(int *)(local_48 + 0x14) = (int)uVar13;
          *(undefined1 *)(local_48 + 0x20) = 0;
          uVar13 = uVar13 + 1;
          *(undefined8 *)(local_48 + 0x28) = 0;
          *(undefined8 *)(local_48 + 0x30) = 0;
        } while (uVar9 != uVar13);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != param_2);
    if ((int)param_2 < 2) {
      bVar5 = false;
      local_70 = 0;
    }
    else {
      uVar15 = 0;
      local_70 = 0;
      bVar5 = false;
      lVar16 = 0;
      bVar6 = false;
      local_68 = 0;
      bVar7 = false;
      do {
        lVar1 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + uVar15 * 8);
        if (local_50 == lVar1) {
          if ((!bVar3) && (local_50 != 0)) {
            bVar3 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          if ((bVar3) && (local_50 != 0)) {
            FUN_00d50b20();
            bVar3 = true;
            local_50 = lVar1;
          }
          else {
            bVar3 = true;
            local_50 = lVar1;
          }
        }
        lVar1 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + 8 + uVar15 * 8);
        if (local_70 == lVar1) {
          if ((!bVar5) && (local_70 != 0)) {
            bVar5 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          if ((bVar5) && (local_70 != 0)) {
            FUN_00d50b20();
            bVar5 = true;
            local_70 = lVar1;
          }
          else {
            bVar5 = true;
            local_70 = lVar1;
          }
        }
        uVar9 = *(uint *)(local_50 + 0xc);
        if ((int)param_1 <= (int)*(uint *)(local_50 + 0xc)) {
          uVar9 = param_1;
        }
        uVar2 = *(uint *)(local_70 + 0xc);
        if ((int)param_1 <= (int)*(uint *)(local_70 + 0xc)) {
          uVar2 = param_1;
        }
        if (0 < (int)uVar9) {
          if ((int)uVar2 < 1) {
            uVar13 = 0;
            do {
              lVar1 = *(longlong *)(*(longlong *)(local_50 + 0x10) + uVar13 * 8);
              if (local_48 == lVar1) {
                if ((!bVar4) && (local_48 != 0)) {
                  bVar4 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar1 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar4) && (local_48 != 0)) {
                  FUN_00d50b20();
                  bVar4 = true;
                  local_48 = lVar1;
                }
                else {
                  bVar4 = true;
                  local_48 = lVar1;
                }
              }
              if (local_68 != 0) {
                if (bVar7) {
                  FUN_00d50b20();
                }
                bVar7 = false;
              }
              uVar13 = uVar13 + 1;
              local_68 = 0;
            } while (uVar9 != uVar13);
            local_68 = 0;
          }
          else {
            uVar13 = 0;
            do {
              lVar1 = *(longlong *)(*(longlong *)(local_50 + 0x10) + uVar13 * 8);
              if (local_48 == lVar1) {
                if ((!bVar4) && (local_48 != 0)) {
                  bVar4 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar1 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar4) && (local_48 != 0)) {
                  FUN_00d50b20();
                  bVar4 = true;
                  local_48 = lVar1;
                }
                else {
                  bVar4 = true;
                  local_48 = lVar1;
                }
              }
              if (local_68 != 0) {
                if (bVar7) {
                  FUN_00d50b20();
                }
                bVar7 = false;
              }
              iVar12 = 0x14;
              uVar14 = 0;
              local_68 = 0;
              bVar8 = bVar7;
              do {
                lVar1 = *(longlong *)(*(longlong *)(local_70 + 0x10) + uVar14 * 8);
                if (lVar16 == lVar1) {
                  if ((!bVar6) && (lVar16 != 0)) {
                    bVar6 = true;
                    FUN_00d50b00();
                  }
                }
                else {
                  if (lVar1 != 0) {
                    FUN_00d50b00();
                  }
                  if ((bVar6) && (lVar16 != 0)) {
                    FUN_00d50b20();
                    bVar6 = true;
                    lVar16 = lVar1;
                  }
                  else {
                    bVar6 = true;
                    lVar16 = lVar1;
                  }
                }
                iVar10 = *(int *)(local_48 + 0x10) - *(int *)(lVar16 + 0x10);
                iVar11 = -iVar10;
                if (0 < iVar10) {
                  iVar11 = iVar10;
                }
                lVar1 = local_68;
                bVar7 = bVar8;
                if ((iVar11 < iVar12) && (*(char *)(lVar16 + 0x20) == '\0')) {
                  iVar12 = iVar11;
                  if (local_68 == lVar16) {
                    if (((bVar6) && (!bVar8)) && (local_68 != 0)) {
                      FUN_00d50b00();
                      bVar7 = true;
                    }
                  }
                  else {
                    if (bVar6) {
                      FUN_00d50b00();
                    }
                    lVar1 = lVar16;
                    bVar7 = bVar6;
                    if ((bVar8) && (local_68 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                local_68 = lVar1;
                uVar14 = uVar14 + 1;
                bVar8 = bVar7;
              } while (uVar2 != uVar14);
              if (local_68 != 0) {
                *(longlong *)(local_48 + 0x28) = local_68;
                *(longlong *)(local_68 + 0x30) = local_48;
                *(undefined1 *)(local_68 + 0x20) = 1;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 != uVar9);
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != param_2 - 1);
      if ((bVar7) && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar6) && (lVar16 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((bVar4) && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar5) && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar3) && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @002773c0 (1546 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *this;
  
  FUN_00d4ff40();
  *this = &DAT_025d8f90;
  this[7] = 0;
  this[8] = 0;
  if (1 < DAT_02802630) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    this[8] = puVar3;
  }
  iVar2 = DAT_02802630;
  this[0x19] = 0;
  this[9] = 0;
  this[10] = 0;
  this[0xb] = 0;
  this[0xc] = 0;
  this[0xd] = 0;
  this[0xe] = 0;
  this[0xf] = 0;
  this[0x10] = 0;
  this[0x11] = 0;
  this[0x12] = 0;
  this[0x13] = 0;
  this[0x14] = 0;
  *(undefined4 *)(this + 0x15) = 0;
  this[0x16] = 0;
  this[0x17] = 0;
  *(undefined1 *)(this + 0x18) = 0;
  if (iVar2 < 2) {
    this[0x1a] = 0;
    this[0x1b] = 0;
LAB_00277772:
    this[0x1c] = 0;
    this[0x1d] = 0;
LAB_002777cc:
    this[0x1e] = 0;
LAB_002777e2:
    this[0x1f] = 0;
LAB_002777f8:
    this[0x20] = 0;
LAB_0027780e:
    this[0x21] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    this[0x19] = puVar3;
    iVar2 = DAT_02802630;
    this[0x1a] = 0;
    if (iVar2 < 2) {
      this[0x1b] = 0;
      this[0x1c] = 0;
LAB_002777b6:
      this[0x1d] = 0;
      goto LAB_002777cc;
    }
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    this[0x1a] = puVar3;
    iVar2 = DAT_02802630;
    this[0x1b] = 0;
    if (iVar2 < 2) goto LAB_00277772;
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    this[0x1b] = puVar3;
    iVar2 = DAT_02802630;
    this[0x1c] = 0;
    if (iVar2 < 2) goto LAB_002777b6;
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    this[0x1c] = puVar3;
    iVar2 = DAT_02802630;
    this[0x1d] = 0;
    if (iVar2 < 2) goto LAB_002777cc;
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    this[0x1d] = puVar3;
    iVar2 = DAT_02802630;
    this[0x1e] = 0;
    if (iVar2 < 2) goto LAB_002777e2;
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    this[0x1e] = puVar3;
    iVar2 = DAT_02802630;
    this[0x1f] = 0;
    if (iVar2 < 2) goto LAB_002777f8;
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    this[0x1f] = puVar3;
    iVar2 = DAT_02802630;
    this[0x20] = 0;
    if (iVar2 < 2) goto LAB_0027780e;
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    this[0x20] = puVar3;
    iVar2 = DAT_02802630;
    this[0x21] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      this[0x21] = puVar3;
      iVar2 = DAT_02802630;
      this[0x22] = 0;
      if (1 < iVar2) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        (*DAT_02572370)();
        this[0x22] = puVar3;
        iVar2 = DAT_02802630;
      }
      goto LAB_00277836;
    }
  }
  this[0x22] = 0;
LAB_00277836:
  *(undefined8 *)((longlong)this + 0x121) = 0;
  *(undefined8 *)((longlong)this + 0x129) = 0;
  this[0x23] = 0;
  this[0x24] = 0;
  *(undefined8 *)((longlong)this + 0x134) = 0;
  *(undefined8 *)((longlong)this + 0x13a) = 0;
  this[0x29] = 0;
  this[0x2a] = 0;
  *(undefined8 *)((longlong)this + 0x154) = 0;
  *(undefined8 *)((longlong)this + 0x15c) = 0;
  this[0x2d] = 0;
  *(undefined4 *)(this + 0x2e) = 0;
  this[0x2f] = 0;
  this[0x30] = 0;
  *(undefined4 *)(this + 0x31) = 0;
  this[0x32] = 0;
  this[0x33] = 0;
  if (1 < iVar2) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    this[0x33] = puVar3;
    iVar2 = DAT_02802630;
  }
  *(undefined8 *)((longlong)this + 0x1a5) = 0;
  this[0x34] = 0;
  this[0x36] = 0;
  this[0x37] = 0;
  this[0x38] = 0;
  this[0x39] = 0;
  *(undefined1 *)(this + 0x3a) = 0;
  this[0x3b] = 0;
  this[0x3c] = 0;
  this[0x3d] = 0;
  if (iVar2 < 2) {
    this[0x3e] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    this[0x3d] = puVar3;
    iVar2 = DAT_02802630;
    this[0x3e] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      this[0x3e] = puVar3;
    }
  }
  *(undefined8 *)((longlong)this + 0x201) = 0;
  *(undefined8 *)((longlong)this + 0x209) = 0;
  this[0x3f] = 0;
  this[0x40] = 0;
  *(undefined8 *)((longlong)this + 0x214) = 0;
  *(undefined8 *)((longlong)this + 0x21c) = 0;
  return;
}




// ==================================================
// @00791550 (1518 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *arg1;
  longlong **pplVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar12 = FUN_00e33de0();
  local_98 = DAT_0270b920;
  if (DAT_0270b920 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_90 = '\x01';
  pplVar9 = &local_70;
  FUN_000175c0(uVar12,&local_98);
  plVar8 = local_70;
  FUN_0006e1c0();
  if (plVar8 == (longlong *)0x0) {
LAB_007915db:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_007915db;
  }
  plVar8 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar9 + 1) = 0;
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x988))();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    plVar8 = local_80;
    if (local_78 == '\0') {
      if (local_80 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_70 = plVar8;
    local_68 = '\0';
    uVar4 = FUN_00d23d70();
    uVar11 = (ulonglong)uVar4;
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_007917d5;
  }
  plVar8 = (longlong *)*arg1;
  if ((DAT_026e0c38 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026e0b88 = FUN_000fddb0();
    _DAT_026e0b70 = "MUElementAnalyzer";
    _DAT_026e0b78 = 0x180;
    _DAT_026e0b80 = FUN_000fdd80;
    _DAT_026e0b90 = 0;
    uRam00000000026e0b98 = 0;
    _DAT_026e0ba0 = 0;
    _DAT_026e0c18 = 0;
    uRam00000000026e0c20 = 0;
    _DAT_026e0c28 = 0;
    DAT_026e0c2a = 1;
    _DAT_026e0ba8 = 0;
    uRam00000000026e0bb0 = 0;
    _DAT_026e0bb8 = 0;
    uRam00000000026e0bc0 = 0;
    _DAT_026e0bc8 = 0;
    uRam00000000026e0bd0 = 0;
    _DAT_026e0bd8 = 0;
    uRam00000000026e0be0 = 0;
    _DAT_026e0be8 = 0;
    uRam00000000026e0bf0 = 0;
    _DAT_026e0bf8 = 0;
    uRam00000000026e0c00 = 0;
    _DAT_026e0c08 = 0;
    uRam00000000026e0c10 = 0;
    DAT_026e0c33 = 0;
    _DAT_026e0c2b = 0;
    ___cxa_guard_release();
  }
  if (plVar8 == (longlong *)0x0) {
LAB_007916e8:
    arg1 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_007916e8;
  }
  if (*arg1 == 0) {
    uVar11 = 0;
    goto LAB_007917d5;
  }
  FUN_013fb420();
  plVar8 = local_70;
  if ((((local_68 == '\0') && (local_70 != (longlong *)0x0)) && (FUN_00d50b00(), local_68 != '\0'))
     && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_88 = plVar8;
  (**(code **)(*(longlong *)*param_2 + 0x988))();
  plVar1 = local_70;
  if (local_68 == '\0') {
    if (local_70 == (longlong *)0x0) goto LAB_00791a59;
    FUN_00d50b00();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_00791811:
    local_68 = '\0';
    local_70 = (longlong *)0x0;
    local_60 = plVar1;
    local_50 = 0;
    local_58 = 0;
    if (0 < *(int *)((longlong)plVar1 + 0xc)) {
      lVar10 = 0;
      do {
        local_70 = *(longlong **)(plVar1[2] + lVar10 * 8);
        pvVar6 = _pthread_getspecific((pthread_key_t)arg1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        iVar5 = *(int *)((longlong)local_48 + 0xc);
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((iVar5 == 1) && (local_88 != (longlong *)0x0)) {
          pvVar6 = _pthread_getspecific((pthread_key_t)arg1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          FUN_00d23310();
          plVar8 = local_48;
          local_38[0] = local_40[0];
          arg1 = (longlong *)local_38;
          plVar7 = (longlong *)local_40;
          if (local_40[0] == '\0') {
            plVar7 = arg1;
          }
          *(undefined1 *)plVar7 = 0;
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar6 = _pthread_getspecific((pthread_key_t)arg1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126ef70();
          pvVar6 = _pthread_getspecific((pthread_key_t)arg1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01320d00();
          plVar2 = local_48;
          plVar7 = local_80;
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (plVar8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          plVar8 = local_88;
          if (plVar7 == plVar2) {
            FUN_000be170();
            uVar11 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
            goto LAB_00791a6a;
          }
        }
        lVar10 = lVar10 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)lVar10);
        plVar8 = local_88;
      } while ((int)lVar10 < *(int *)((longlong)plVar1 + 0xc));
    }
    FUN_000be170();
    uVar11 = 0;
LAB_00791a6a:
    FUN_00d50b20();
  }
  else {
    if (local_70 != (longlong *)0x0) goto LAB_00791811;
LAB_00791a59:
    uVar11 = 0;
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_007917d5:
  return uVar11 & 0xffffffff;
}




// ==================================================
// @0137b4c0 (1517 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong this;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  FUN_013c8700(param_1,1);
  lVar4 = *(longlong *)(*(longlong *)(this + 0xb0) + 0x10);
  ___bzero();
  fVar25 = DAT_02390124;
  uVar3 = *(uint *)(this + 0xb8);
  uVar19 = (ulonglong)uVar3;
  if (1 < (int)uVar3) {
    uVar21 = uVar19 - 1;
    uVar13 = 1;
    if (uVar3 != 2) {
      uVar13 = 1;
      do {
        fVar26 = 0.0;
        fVar27 = 0.0;
        uVar12 = (uint)uVar13;
        if ((uVar13 < 0x81) &&
           (((uVar12 - 1 < 0x40 &&
             ((0x800000008000808bU >> ((ulonglong)(uVar12 - 1) & 0x3f) & 1) != 0)) ||
            (fVar27 = 0.0, uVar12 == 0x80)))) {
          fVar27 = fVar25 / (float)(int)uVar12;
          fVar27 = fVar27 * fVar27;
        }
        *(float *)(lVar4 + uVar13 * 4) = fVar27;
        if ((uVar13 < 0x80) &&
           (((uVar12 < 0x40 && ((0x800000008000808bU >> (uVar13 & 0x3f) & 1) != 0)) ||
            (uVar12 + 1 == 0x80)))) {
          fVar26 = fVar25 / (float)(int)(uVar12 + 1);
          fVar26 = fVar26 * fVar26;
        }
        *(float *)(lVar4 + 4 + uVar13 * 4) = fVar26;
        lVar18 = uVar13 - (uVar21 & 0xfffffffffffffffe);
        uVar13 = uVar13 + 2;
      } while (lVar18 != -1);
    }
    if ((uVar21 & 1) != 0) {
      fVar25 = 0.0;
      if (uVar13 < 0x81) {
        iVar5 = (int)uVar13;
        if (((iVar5 - 1U < 0x40) &&
            ((0x800000008000808bU >> ((ulonglong)(iVar5 - 1U) & 0x3f) & 1) != 0)) || (iVar5 == 0x80)
           ) {
          fVar25 = (DAT_02390124 / (float)iVar5) * (DAT_02390124 / (float)iVar5);
        }
      }
      *(float *)(lVar4 + uVar13 * 4) = fVar25;
    }
    uVar13 = (ulonglong)*(uint *)(this + 0xbc);
    if (1 < (int)*(uint *)(this + 0xbc)) {
      if (uVar21 < 8) {
        uVar9 = (ulonglong)((uint)uVar21 & 3);
        lVar18 = lVar4 + uVar19 * 4 + 0x10;
        uVar24 = 1;
        uVar22 = uVar19;
        do {
          lVar17 = 1;
          if (2 < uVar19 - 2) {
            uVar14 = 0;
            do {
              uVar11 = uVar14;
              *(undefined4 *)(lVar18 + -0xc + uVar11 * 4) = *(undefined4 *)(lVar4 + 4 + uVar11 * 4);
              *(undefined4 *)(lVar18 + -8 + uVar11 * 4) = *(undefined4 *)(lVar4 + 8 + uVar11 * 4);
              *(undefined4 *)(lVar18 + -4 + uVar11 * 4) = *(undefined4 *)(lVar4 + 0xc + uVar11 * 4);
              *(undefined4 *)(lVar18 + uVar11 * 4) = *(undefined4 *)(lVar4 + 0x10 + uVar11 * 4);
              uVar14 = uVar11 + 4;
            } while ((uVar21 & 0xfffffffffffffffc) != uVar11 + 4);
            lVar17 = uVar11 + 5;
          }
          if (uVar9 != 0) {
            uVar14 = 0;
            do {
              *(undefined4 *)(lVar4 + (lVar17 + uVar22) * 4 + uVar14 * 4) =
                   *(undefined4 *)(lVar4 + lVar17 * 4 + uVar14 * 4);
              uVar14 = uVar14 + 1;
            } while (uVar9 != uVar14);
          }
          uVar24 = uVar24 + 1;
          lVar18 = lVar18 + uVar19 * 4;
          uVar22 = uVar22 + uVar19;
        } while (uVar24 != uVar13);
      }
      else {
        uVar22 = lVar4 + uVar19 * 4;
        uVar9 = uVar21 & 0xfffffffffffffff8;
        if (uVar21 == uVar9) {
          uVar14 = (uVar9 - 8 >> 3) + 1;
          uVar11 = (ulonglong)((uint)uVar21 & 3);
          lVar18 = lVar4 + uVar19 * 4 + 0x34;
          lVar23 = lVar4 + uVar19 * 4 + 0x10;
          uVar20 = 1;
          lVar17 = 0;
          uVar24 = uVar19;
          do {
            if ((lVar4 + (uVar19 + 1 + lVar17 * uVar19) * 4 < uVar22) &&
               (lVar4 + 4U < lVar4 + (lVar17 * uVar19 + uVar19 * 2) * 4)) {
              lVar15 = 1;
              if (2 < uVar19 - 2) {
                uVar10 = 0;
                do {
                  uVar16 = uVar10;
                  *(undefined4 *)(lVar23 + -0xc + uVar16 * 4) =
                       *(undefined4 *)(lVar4 + 4 + uVar16 * 4);
                  *(undefined4 *)(lVar23 + -8 + uVar16 * 4) =
                       *(undefined4 *)(lVar4 + 8 + uVar16 * 4);
                  *(undefined4 *)(lVar23 + -4 + uVar16 * 4) =
                       *(undefined4 *)(lVar4 + 0xc + uVar16 * 4);
                  *(undefined4 *)(lVar23 + uVar16 * 4) = *(undefined4 *)(lVar4 + 0x10 + uVar16 * 4);
                  uVar10 = uVar16 + 4;
                } while ((uVar21 & 0xfffffffffffffffc) != uVar16 + 4);
                lVar15 = uVar16 + 5;
              }
              if (uVar11 != 0) {
                uVar10 = 0;
                do {
                  *(undefined4 *)(lVar4 + (lVar15 + uVar24) * 4 + uVar10 * 4) =
                       *(undefined4 *)(lVar4 + lVar15 * 4 + uVar10 * 4);
                  uVar10 = uVar10 + 1;
                } while (uVar11 != uVar10);
              }
            }
            else {
              if (uVar9 - 8 == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = 0;
                lVar15 = -(uVar14 & 0xfffffffffffffffe);
                do {
                  puVar1 = (undefined8 *)(lVar4 + 4 + uVar10 * 4);
                  uVar6 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar4 + 0x14 + uVar10 * 4);
                  uVar7 = *puVar2;
                  uVar8 = puVar2[1];
                  puVar2 = (undefined8 *)(lVar18 + -0x30 + uVar10 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar6;
                  puVar1 = (undefined8 *)(lVar18 + -0x20 + uVar10 * 4);
                  *puVar1 = uVar7;
                  puVar1[1] = uVar8;
                  puVar1 = (undefined8 *)(lVar4 + 0x24 + uVar10 * 4);
                  uVar6 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar4 + 0x34 + uVar10 * 4);
                  uVar7 = *puVar2;
                  uVar8 = puVar2[1];
                  puVar2 = (undefined8 *)(lVar18 + -0x10 + uVar10 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar6;
                  puVar1 = (undefined8 *)(lVar18 + uVar10 * 4);
                  *puVar1 = uVar7;
                  puVar1[1] = uVar8;
                  uVar10 = uVar10 + 0x10;
                  lVar15 = lVar15 + 2;
                } while (lVar15 != 0);
                if ((uVar14 & 1) == 0) goto LAB_0137b7c0;
              }
              uVar10 = uVar10 | 1;
              puVar1 = (undefined8 *)(lVar4 + uVar10 * 4);
              uVar6 = puVar1[1];
              puVar2 = (undefined8 *)(lVar4 + 0x10 + uVar10 * 4);
              uVar7 = *puVar2;
              uVar8 = puVar2[1];
              lVar15 = uVar10 + uVar20 * uVar19;
              puVar2 = (undefined8 *)(lVar4 + lVar15 * 4);
              *puVar2 = *puVar1;
              puVar2[1] = uVar6;
              puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar15 * 4);
              *puVar1 = uVar7;
              puVar1[1] = uVar8;
            }
LAB_0137b7c0:
            uVar20 = uVar20 + 1;
            lVar17 = lVar17 + 1;
            lVar18 = lVar18 + uVar19 * 4;
            lVar23 = lVar23 + uVar19 * 4;
            uVar24 = uVar24 + uVar19;
          } while (uVar20 != uVar13);
        }
        else {
          uVar14 = (uVar9 - 8 >> 3) + 1;
          lVar18 = lVar4 + uVar19 * 4 + 0x34;
          uVar24 = 1;
          lVar17 = 0;
          uVar21 = uVar22;
          do {
            if ((uVar22 <= lVar4 + (uVar19 + 1 + lVar17 * uVar19) * 4) ||
               (uVar11 = 1, lVar4 + (lVar17 * uVar19 + uVar19 * 2) * 4 <= lVar4 + 4U)) {
              uVar11 = uVar9 + 1;
              if (uVar9 - 8 == 0) {
                uVar20 = 0;
              }
              else {
                uVar20 = 0;
                lVar23 = -(uVar14 & 0xfffffffffffffffe);
                do {
                  puVar1 = (undefined8 *)(lVar4 + 4 + uVar20 * 4);
                  uVar6 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar4 + 0x14 + uVar20 * 4);
                  uVar7 = *puVar2;
                  uVar8 = puVar2[1];
                  puVar2 = (undefined8 *)(lVar18 + -0x30 + uVar20 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar6;
                  puVar1 = (undefined8 *)(lVar18 + -0x20 + uVar20 * 4);
                  *puVar1 = uVar7;
                  puVar1[1] = uVar8;
                  puVar1 = (undefined8 *)(lVar4 + 0x24 + uVar20 * 4);
                  uVar6 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar4 + 0x34 + uVar20 * 4);
                  uVar7 = *puVar2;
                  uVar8 = puVar2[1];
                  puVar2 = (undefined8 *)(lVar18 + -0x10 + uVar20 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar6;
                  puVar1 = (undefined8 *)(lVar18 + uVar20 * 4);
                  *puVar1 = uVar7;
                  puVar1[1] = uVar8;
                  uVar20 = uVar20 + 0x10;
                  lVar23 = lVar23 + 2;
                } while (lVar23 != 0);
                if ((uVar14 & 1) == 0) goto LAB_0137ba2d;
              }
              uVar20 = uVar20 | 1;
              puVar1 = (undefined8 *)(lVar4 + uVar20 * 4);
              uVar6 = puVar1[1];
              puVar2 = (undefined8 *)(lVar4 + 0x10 + uVar20 * 4);
              uVar7 = *puVar2;
              uVar8 = puVar2[1];
              lVar23 = uVar20 + uVar24 * uVar19;
              puVar2 = (undefined8 *)(lVar4 + lVar23 * 4);
              *puVar2 = *puVar1;
              puVar2[1] = uVar6;
              puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar23 * 4);
              *puVar1 = uVar7;
              puVar1[1] = uVar8;
            }
LAB_0137ba2d:
            uVar12 = uVar3 - (int)uVar11;
            uVar10 = ~uVar11;
            uVar20 = (ulonglong)uVar12 & 3;
            if ((uVar12 & 3) != 0) {
              do {
                *(undefined4 *)(uVar21 + uVar11 * 4) = *(undefined4 *)(lVar4 + uVar11 * 4);
                uVar11 = uVar11 + 1;
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
            }
            if (2 < uVar10 + uVar19) {
              do {
                *(undefined4 *)(uVar21 + uVar11 * 4) = *(undefined4 *)(lVar4 + uVar11 * 4);
                *(undefined4 *)(uVar21 + 4 + uVar11 * 4) = *(undefined4 *)(lVar4 + 4 + uVar11 * 4);
                *(undefined4 *)(uVar21 + 8 + uVar11 * 4) = *(undefined4 *)(lVar4 + 8 + uVar11 * 4);
                *(undefined4 *)(uVar21 + 0xc + uVar11 * 4) =
                     *(undefined4 *)(lVar4 + 0xc + uVar11 * 4);
                uVar11 = uVar11 + 4;
              } while (uVar19 != uVar11);
            }
            uVar24 = uVar24 + 1;
            lVar17 = lVar17 + 1;
            lVar18 = lVar18 + uVar19 * 4;
            uVar21 = uVar21 + uVar19 * 4;
          } while (uVar24 != uVar13);
        }
      }
    }
  }
  return;
}




// ==================================================
// @0149e4a0 (1499 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint in_EDX;
  uint uVar11;
  longlong *arg1;
  ulonglong uVar12;
  undefined8 in_R8;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 in_XMM5_Da;
  undefined4 unaff_XMM6_Da;
  char local_res10;
  longlong local_40;
  longlong local_38;
  
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_02572358;
  (*DAT_02572370)();
  fVar14 = (float)_logf(param_2 / _DAT_0240e330);
  fVar15 = (float)_logf(param_3 / _DAT_0240e330);
  fVar16 = (float)_logf(param_4 / _DAT_0240e330);
  if ((int)in_EDX < 1) {
    bVar5 = false;
    local_40 = 0;
  }
  else {
    fVar14 = fVar14 * DAT_0240e334 * DAT_023941f0 + DAT_0239011c;
    iVar6 = (int)(fVar15 * DAT_0240e334 * DAT_023941f0 + DAT_0239011c);
    iVar7 = (int)(fVar16 * DAT_0240e334 * DAT_023941f0 + DAT_0239011c);
    uVar10 = 0;
    local_40 = 0;
    bVar5 = false;
    local_38 = 0;
    bVar4 = false;
    do {
      lVar13 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + uVar10 * 8);
      if (local_40 == lVar13) {
        if ((!bVar5) && (local_40 != 0)) {
          bVar5 = true;
          FUN_00d50b00();
        }
LAB_0149e6a0:
        uVar1 = *(uint *)(local_40 + 0xc);
      }
      else {
        if (lVar13 != 0) {
          FUN_00d50b00();
        }
        if ((bVar5) && (local_40 != 0)) {
          FUN_00d50b20();
          bVar5 = true;
          local_40 = lVar13;
          goto LAB_0149e6a0;
        }
        bVar5 = true;
        uVar1 = *(uint *)(lVar13 + 0xc);
        local_40 = lVar13;
      }
      if (uVar1 != 0) {
        uVar11 = param_1;
        if ((int)uVar1 < (int)param_1) {
          uVar11 = uVar1;
        }
        if (0 < (int)uVar11) {
          uVar12 = 0;
          do {
            iVar2 = *(int *)(*(longlong *)(*(longlong *)(local_40 + 0x10) + uVar12 * 8) + 0x10);
            if ((iVar7 < iVar2) && (iVar2 < iVar6)) goto LAB_0149ea00;
            uVar12 = uVar12 + 1;
          } while (uVar11 != uVar12);
        }
        if ((int)param_1 < (int)uVar1) {
          FUN_00d216c0();
          if ((int)uVar11 < *(int *)(local_40 + 0xc)) {
            lVar13 = (longlong)(int)uVar11;
            do {
              lVar3 = *(longlong *)(*(longlong *)(local_40 + 0x10) + lVar13 * 8);
              if (local_38 == lVar3) {
                if ((!bVar4) && (local_38 != 0)) {
                  bVar4 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar3 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar4) && (local_38 != 0)) {
                  FUN_00d50b20();
                  bVar4 = true;
                  local_38 = lVar3;
                }
                else {
                  bVar4 = true;
                  local_38 = lVar3;
                }
              }
              if ((iVar7 < *(int *)(local_38 + 0x10)) && (*(int *)(local_38 + 0x10) < iVar6)) {
                FUN_00d21140();
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < *(int *)(local_40 + 0xc));
          }
          if (*(int *)((longlong)puVar9 + 0xc) != 0) {
            fVar15 = (float)FUN_014b32a0(unaff_XMM6_Da,in_R8,in_XMM5_Da,DAT_02390124);
            if (0 < *(int *)((longlong)puVar9 + 0xc)) {
              lVar13 = 0;
              do {
                lVar3 = *(longlong *)(puVar9[2] + lVar13 * 8);
                if (local_38 == lVar3) {
                  if ((!bVar4) && (local_38 != 0)) {
                    bVar4 = true;
                    FUN_00d50b00();
                  }
                }
                else {
                  if (lVar3 != 0) {
                    FUN_00d50b00();
                  }
                  if ((bVar4) && (local_38 != 0)) {
                    FUN_00d50b20();
                    bVar4 = true;
                    local_38 = lVar3;
                  }
                  else {
                    bVar4 = true;
                    local_38 = lVar3;
                  }
                }
                iVar8 = *(int *)(local_38 + 0x10) - (int)fVar14;
                iVar2 = -iVar8;
                if (0 < iVar8) {
                  iVar2 = iVar8;
                }
                fVar15 = (float)iVar2 * _DAT_0240e338 + DAT_02390124;
                fVar16 = 0.0;
                if (0.0 <= fVar15) {
                  fVar16 = fVar15;
                }
                *(float *)(local_38 + 0x18) = fVar16 * *(float *)(local_38 + 0x18);
                lVar13 = lVar13 + 1;
              } while (lVar13 < *(int *)((longlong)puVar9 + 0xc));
            }
            uVar17 = FUN_00d242c0(fVar15,0);
            lVar13 = *(longlong *)puVar9[2];
            if (lVar13 != 0) {
              uVar17 = FUN_00d50b00();
            }
            FUN_00d23370(uVar17,param_1 - 1);
            if (lVar13 != 0) {
              FUN_00d50b20();
            }
          }
        }
      }
LAB_0149ea00:
      while (iVar2 = *(int *)(local_40 + 0xc), (int)param_1 < iVar2) {
        FUN_00d23740();
      }
      if (local_res10 != '\0') {
        while ((iVar2 != 0 &&
               ((iVar2 = *(int *)(**(longlong **)(local_40 + 0x10) + 0x10), iVar2 <= iVar7 ||
                (iVar6 <= iVar2))))) {
          FUN_00d23620();
          iVar2 = *(int *)(local_40 + 0xc);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != in_EDX);
    if ((bVar4) && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (puVar9 == (undefined8 *)0x0) goto LAB_0149eaa2;
  }
  FUN_00d50b20();
LAB_0149eaa2:
  if ((bVar5) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01b71450 (1414 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  pthread_key_t pVar10;
  ulonglong *puVar11;
  int iVar12;
  longlong *this;
  longlong lVar13;
  int iVar14;
  undefined4 local_88;
  int iStack_84;
  undefined8 local_80;
  longlong local_78;
  char local_70;
  undefined4 local_64;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong *local_48;
  ulonglong *local_40;
  undefined8 *local_38;
  
  cVar1 = (**(code **)(*this + 0x9d0))();
  if (cVar1 != '\0') {
    if (this[0x2b] == 0) {
                    /* WARNING: Could not recover jumptable at 0x01b716a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*this + 0xa10))();
      return;
    }
    if ((*(int *)((longlong)this + 0x17c) != 0) || (*(int *)((longlong)this + 0x184) != 0)
       ) {
      local_40 = (ulonglong *)(this + 0x2f);
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      puVar6 = &DAT_025683c0;
      *puVar3 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      local_38 = puVar3;
      FUN_00c92160();
      local_64 = 0xffffffff;
      local_70 = '\0';
      local_78 = 0;
      while( true ) {
        pVar10 = (pthread_key_t)puVar6;
        lVar8 = this[0x2b];
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        pvVar4 = _pthread_getspecific(pVar10);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar5 = FUN_00e7bdb0();
        puVar6 = (undefined *)FUN_00e7bdb0();
        cVar1 = FUN_01252960(puVar6,uVar5,&local_78,&local_88);
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
        puVar3 = local_38;
        if (cVar1 == '\0') break;
        if (iStack_84 != 0) {
          iVar14 = *(int *)(local_38 + 3);
          FUN_00c8e340();
          puVar6 = (undefined *)CONCAT44(iStack_84,local_88);
          *(undefined **)(puVar3[2] + (longlong)iVar14) = puVar6;
        }
      }
      if (*(int *)(local_38 + 3) + 7U < 0xf) {
        uVar7 = FUN_00e7bdb0();
        *local_40 = uVar7;
        lVar8 = FUN_00e7bdb0();
        this[0x30] = lVar8;
      }
      uVar7 = *local_40 >> 0x20;
      if (uVar7 != 0) {
        iVar14 = *(int *)(local_38 + 3);
        iVar12 = iVar14 + 7;
        if (-1 < iVar14) {
          iVar12 = iVar14;
        }
        if (7 < iVar14) {
          iVar12 = iVar12 >> 3;
          iVar14 = *(int *)(local_38[2] + 4);
          lVar8 = local_38[2];
          while( true ) {
            iVar12 = iVar12 + -1;
            if (((iVar14 != 0) && ((int)uVar7 != 0)) && (cVar1 = FUN_00e7c000(), cVar1 != '\0'))
            goto LAB_01b716d8;
            if (iVar12 == 0) break;
            uVar7 = (ulonglong)*(uint *)((longlong)this + 0x17c);
            iVar14 = *(int *)(lVar8 + 0xc);
            lVar8 = lVar8 + 8;
          }
        }
        uVar7 = FUN_01b712c0();
        *local_40 = uVar7;
      }
LAB_01b716d8:
      local_48 = (ulonglong *)(this + 0x30);
      uVar7 = (ulonglong)this[0x30] >> 0x20;
      if (uVar7 != 0) {
        iVar14 = *(int *)(local_38 + 3);
        iVar12 = iVar14 + 7;
        if (-1 < iVar14) {
          iVar12 = iVar14;
        }
        if (7 < iVar14) {
          iVar12 = iVar12 >> 3;
          iVar14 = *(int *)(local_38[2] + 4);
          lVar8 = local_38[2];
          while( true ) {
            iVar12 = iVar12 + -1;
            if (((iVar14 != 0) && ((int)uVar7 != 0)) && (cVar1 = FUN_00e7c000(), cVar1 != '\0'))
            goto LAB_01b7177e;
            if (iVar12 == 0) break;
            uVar7 = (ulonglong)*(uint *)((longlong)this + 0x184);
            iVar14 = *(int *)(lVar8 + 0xc);
            lVar8 = lVar8 + 8;
          }
        }
        uVar7 = FUN_01b712c0();
        *local_48 = uVar7;
      }
LAB_01b7177e:
      iVar14 = *(int *)((longlong)this + 0x17c);
      while (((iVar14 != 0 && (*(int *)((longlong)local_48 + 4) != 0)) &&
             (cVar1 = FUN_00e7c020(), cVar1 == '\0'))) {
        iVar14 = *(int *)(local_38 + 3);
        iVar12 = iVar14 + 7;
        if (-1 < iVar14) {
          iVar12 = iVar14;
        }
        if (7 < iVar14) {
          lVar8 = local_38[2];
          iVar14 = 0;
          do {
            if (((*(int *)(lVar8 + 4) != 0) && (*(int *)((longlong)this + 0x17c) != 0)) &&
               (cVar1 = FUN_00e7c000(), cVar1 != '\0')) goto LAB_01b71856;
            lVar8 = lVar8 + 8;
            iVar14 = iVar14 + 1;
          } while (iVar12 >> 3 != iVar14);
          iVar14 = -1;
LAB_01b71856:
          iVar12 = *(int *)(local_38 + 3);
          iVar2 = iVar12 + 7;
          if (-1 < iVar12) {
            iVar2 = iVar12;
          }
          if (7 < iVar12) {
            lVar8 = local_38[2];
            lVar13 = 0;
            do {
              if (((*(int *)(lVar8 + 4) != 0) && (*(int *)((longlong)this + 0x184) != 0)) &&
                 (cVar1 = FUN_00e7c000(), cVar1 != '\0')) {
                if (iVar14 == -1) break;
                local_58 = FUN_00e7bdb0();
                uVar7 = FUN_00e7bdb0();
                if (0 < iVar14) {
                  local_58 = *(ulonglong *)(local_38[2] + (ulonglong)(iVar14 - 1) * 8);
                }
                iVar14 = *(int *)(local_38 + 3);
                iVar12 = iVar14 + 7;
                if (-1 < iVar14) {
                  iVar12 = iVar14;
                }
                if ((int)lVar13 < (iVar12 >> 3) + -1) {
                  uVar7 = *(ulonglong *)(local_38[2] + 8 + lVar13 * 8);
                }
                local_60 = uVar7;
                if (local_58 >> 0x20 == 0) {
                  puVar11 = local_48;
                  if (uVar7 >> 0x20 == 0) {
                    *local_40 = local_58;
                  }
                }
                else {
                  if (uVar7 >> 0x20 == 0) {
                    *local_40 = local_58;
                    break;
                  }
                  local_50 = *local_40;
                  FUN_00e7b970();
                  local_80 = FUN_00e7bdb0();
                  local_50 = *local_48;
                  FUN_00e7b970();
                  uVar9 = FUN_00e7bdb0();
                  uVar7 = local_60;
                  puVar11 = local_48;
                  if (((local_80._4_4_ != 0) && (uVar9 >> 0x20 != 0)) &&
                     (cVar1 = FUN_00e7c020(), uVar7 = local_60, puVar11 = local_48, cVar1 == '\0'))
                  {
                    uVar7 = local_58;
                    puVar11 = local_40;
                  }
                }
                *puVar11 = uVar7;
                break;
              }
              lVar8 = lVar8 + 8;
              lVar13 = lVar13 + 1;
            } while (iVar2 >> 3 != (int)lVar13);
          }
        }
        iVar14 = *(int *)((longlong)local_40 + 4);
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ==================================================
// @014a5580 (1405 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  float fVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong in_RCX;
  ulonglong uVar10;
  int iVar11;
  longlong in_RDX;
  longlong lVar12;
  longlong lVar13;
  longlong *arg1;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  double dVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_74;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  longlong local_40;
  longlong local_38;
  
  uVar6 = (uint)(DAT_02411970 * param_1);
  lVar8 = FUN_00e83010();
  lVar13 = *arg1;
  iVar2 = *(int *)(lVar13 + 0xc);
  local_74 = 0.0;
  iVar7 = 0;
  if (iVar2 < 1) {
    local_58 = 0.0;
    local_5c = 0.0;
    local_40 = 0;
    bVar3 = false;
    local_38 = 0;
    bVar4 = false;
    fVar21 = DAT_02390124;
  }
  else {
    dVar17 = _DAT_0240d7f8 * param_1;
    lVar12 = 0;
    local_54 = 0.0;
    local_58 = 0.0;
    local_64 = 0.0;
    local_40 = 0;
    bVar3 = false;
    local_38 = 0;
    bVar4 = false;
    do {
      lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + lVar12 * 8);
      if (local_40 == lVar13) {
        if ((!bVar3) && (local_40 != 0)) {
          bVar3 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar13 != 0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (local_40 != 0)) {
          FUN_00d50b20();
          bVar3 = true;
          local_40 = lVar13;
        }
        else {
          bVar3 = true;
          local_40 = lVar13;
        }
      }
      if (lVar12 < (longlong)*(int *)(*arg1 + 0xc) + -1) {
        lVar13 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + 8 + lVar12 * 8);
        if (local_38 == lVar13) {
          lVar13 = local_38;
          if (bVar4) {
            bVar5 = true;
            goto LAB_014a57b8;
          }
          if (local_38 == 0) {
            bVar5 = false;
            goto LAB_014a57b8;
          }
          FUN_00d50b00();
          iVar9 = (int)(*(double *)(local_40 + 0x10) * param_1) + 1;
          bVar4 = true;
        }
        else {
          if (lVar13 == 0) {
            lVar13 = 0;
          }
          else {
            FUN_00d50b00();
          }
joined_r0x014a57a4:
          bVar5 = true;
          if ((bVar4) && (bVar5 = true, local_38 != 0)) {
            FUN_00d50b20();
          }
LAB_014a57b8:
          bVar4 = bVar5;
          iVar9 = (int)(*(double *)(local_40 + 0x10) * param_1) + 1;
          local_38 = lVar13;
          if (lVar13 == 0) goto LAB_014a5868;
        }
        iVar11 = (int)(*(double *)(local_38 + 0x10) * param_1) + 1;
      }
      else {
        if (local_38 != 0) {
          lVar13 = 0;
          goto joined_r0x014a57a4;
        }
        iVar9 = (int)(*(double *)(local_40 + 0x10) * param_1) + 1;
LAB_014a5868:
        local_38 = 0;
        iVar11 = param_3;
      }
      if (param_3 < iVar11) {
        iVar11 = param_3;
      }
      uVar15 = iVar11 - iVar9;
      if ((int)uVar6 < iVar11 - iVar9) {
        uVar15 = uVar6;
      }
      if ((int)uVar15 < 1) {
        uVar14 = 0;
        fVar21 = 0.0;
        fVar20 = 0.0;
        iVar11 = 0;
      }
      else {
        uVar10 = 0;
        fVar21 = 0.0;
        fVar20 = 0.0;
        fVar19 = 0.0;
        uVar14 = 0;
        uVar16 = 0;
        do {
          lVar13 = (longlong)(iVar9 + (int)uVar10);
          fVar1 = *(float *)(in_RCX + lVar13 * 4);
          if ((uVar10 < uVar15 >> 1) && (fVar21 <= fVar1)) {
            local_54 = 0.0;
            uVar16 = uVar10 & 0xffffffff;
            uVar14 = uVar10 & 0xffffffff;
            fVar21 = fVar1;
          }
          iVar11 = (int)uVar10 - (int)uVar14;
          if ((0 < iVar11) && (fVar22 = (fVar21 - fVar1) / (float)iVar11, local_54 < fVar22)) {
            uVar16 = uVar10 & 0xffffffff;
            local_54 = fVar22;
            fVar20 = fVar1;
          }
          iVar11 = (int)uVar16;
          fVar19 = fVar19 + fVar1 * param_2 + *(float *)(in_RDX + lVar13 * 4);
          *(float *)(lVar8 + uVar10 * 4) = fVar19;
          uVar10 = uVar10 + 1;
        } while (uVar15 != uVar10);
        fVar19 = fVar19 * DAT_0239011c;
        uVar10 = 0;
        do {
          fVar1 = *(float *)(lVar8 + uVar10 * 4);
          if (fVar19 < fVar1) {
            if (((uint)uVar10 == 0) ||
               (uVar15 = (uint)(uVar10 - 1),
               fVar1 - fVar19 <= fVar19 - *(float *)(lVar8 + (uVar10 - 1 & 0xffffffff) * 4))) {
              uVar15 = (uint)uVar10;
            }
            break;
          }
          uVar10 = uVar10 + 1;
        } while (uVar15 != uVar10);
      }
      iVar11 = iVar11 - ((int)(uVar14 >> 0x1f) + (int)uVar14 >> 1);
      fVar19 = DAT_02390124;
      if ((0 < iVar11) && (0.0 < fVar21)) {
        fVar21 = (float)_logf(fVar20 / fVar21);
        uVar18 = _expf(fVar21 / (float)iVar11);
        fVar19 = (float)_powf(uVar18,(float)dVar17);
      }
      local_58 = local_58 + fVar19;
      local_64 = local_64 + (float)(int)uVar15 / (float)(int)uVar6;
      iVar7 = iVar7 + 1;
      lVar12 = lVar12 + 1;
      lVar13 = *arg1;
    } while (lVar12 < *(int *)(lVar13 + 0xc));
    local_5c = (float)iVar7;
    fVar21 = local_64 / local_5c;
  }
  fVar20 = ((DAT_02390124 - fVar21) + _DAT_0240e340) / DAT_02394250;
  fVar21 = 0.0;
  if (0.0 <= fVar20) {
    fVar21 = fVar20;
  }
  fVar21 = (float)_powf(fVar21,DAT_02390128);
  if (0 < iVar2) {
    local_74 = DAT_02390124 - local_58 / local_5c;
  }
  FUN_00e83070();
  if ((bVar4) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  fVar20 = fVar21;
  if (fVar21 <= local_74) {
    fVar20 = local_74;
  }
  return (fVar20 + fVar21 + local_74) * _DAT_0240e344;
}




// ==================================================
// @014a02f0 (1374 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int in_ECX;
  ulonglong uVar7;
  ulonglong in_RDX;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong arg1;
  longlong in_R8;
  longlong in_R9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong local_res8;
  longlong local_70;
  char local_68;
  float local_50;
  float local_4c;
  float local_34;
  
  param_2 = param_1 / param_2;
  uVar3 = (uint)(param_2 + param_2);
  lVar5 = FUN_00e83010();
  dVar13 = (double)_exp(SUB84(DAT_0240e3d0 / ((double)param_4 * param_1),0));
  fVar14 = (float)dVar13;
  if (0 < (longlong)in_RDX) {
    uVar11 = in_RDX;
    fVar12 = param_3;
    if ((in_RDX & 1) != 0) {
      uVar11 = in_RDX - 1;
      fVar15 = *(float *)(in_R8 + -4 + in_RDX * 4);
      fVar15 = (float)(~-(uint)(0.0 < fVar15) & (_DAT_023945e0 ^ (uint)fVar15) |
                      (uint)fVar15 & -(uint)(0.0 < fVar15)) + fVar14 * param_3;
      if (param_3 <= fVar15) {
        fVar12 = fVar15;
      }
      *(float *)(arg1 + -4 + in_RDX * 4) = fVar12;
    }
    uVar2 = _DAT_023945e0;
    if (in_RDX != 1) {
      lVar6 = uVar11 + 2;
      do {
        fVar15 = *(float *)(in_R8 + -0xc + lVar6 * 4);
        fVar15 = (float)(~-(uint)(0.0 < fVar15) & ((uint)fVar15 ^ uVar2) |
                        (uint)fVar15 & -(uint)(0.0 < fVar15)) + fVar12 * fVar14;
        fVar12 = param_3;
        if (param_3 <= fVar15) {
          fVar12 = fVar15;
        }
        *(float *)(arg1 + -0xc + lVar6 * 4) = fVar12;
        fVar15 = *(float *)(in_R8 + -0x10 + lVar6 * 4);
        fVar15 = (float)(~-(uint)(0.0 < fVar15) & ((uint)fVar15 ^ uVar2) |
                        (uint)fVar15 & -(uint)(0.0 < fVar15)) + fVar12 * fVar14;
        fVar12 = param_3;
        if (param_3 <= fVar15) {
          fVar12 = fVar15;
        }
        *(float *)(arg1 + -0x10 + lVar6 * 4) = fVar12;
        lVar6 = lVar6 + -2;
      } while (2 < lVar6);
    }
  }
  uVar11 = (ulonglong)(int)uVar3;
  ___bzero();
  if ((longlong)in_RDX < 1) {
    iVar4 = 0;
  }
  else {
    dVar13 = DAT_0238fee8 / param_2;
    lVar6 = (longlong)(int)(DAT_023942d0 * param_2);
    uVar7 = (longlong)(param_2 * 0.0) + lVar6;
    iVar4 = 0;
    uVar10 = 0;
    local_4c = 0.0;
    fVar12 = 0.0;
    fVar15 = 0.0;
    local_34 = DAT_02390d00;
    local_50 = param_3;
    do {
      if (uVar10 == uVar7) {
        fVar16 = (float)((double)fVar15 * dVar13 + DAT_023b19a0);
        if (iVar4 < in_ECX) {
          fVar15 = DAT_02390d2c;
          if (fVar16 <= DAT_02390d2c) {
            fVar15 = fVar16;
          }
          *(float *)(in_R9 + (longlong)iVar4 * 4) = fVar15;
          *(float *)(local_res8 + (longlong)iVar4 * 4) = (float)SQRT((double)fVar12 * dVar13);
        }
        fVar17 = fVar16 - local_4c;
        if (((0.0 < local_4c) && (0.0 <= local_34)) && (fVar17 < 0.0)) {
          uVar7 = (longlong)((double)(iVar4 + -2) * param_2) + lVar6;
          if ((longlong)uVar7 < 0) {
            uVar7 = 0;
          }
          uVar9 = uVar7;
          if (0 < (int)uVar3) {
            lVar1 = uVar7 + uVar11;
            fVar12 = DAT_0240e30c;
            do {
              if ((uVar7 | uVar11) >> 0x20 == 0) {
                uVar8 = (uVar7 & 0xffffffff) % (ulonglong)uVar3;
              }
              else {
                uVar8 = (longlong)uVar7 % (longlong)uVar11;
              }
              fVar15 = *(float *)(lVar5 + uVar8 * 4);
              uVar8 = uVar7;
              if (fVar15 <= fVar12) {
                fVar15 = fVar12;
                uVar8 = uVar9;
              }
              uVar9 = uVar8;
              fVar12 = fVar15;
              uVar7 = uVar7 + 1;
            } while ((longlong)uVar7 < lVar1);
          }
          FUN_014328b0(SUB84((double)(longlong)uVar9 / param_1,0));
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          FUN_00d21140();
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        iVar4 = iVar4 + 1;
        uVar7 = (longlong)((double)iVar4 * param_2) + lVar6;
        fVar15 = 0.0;
        fVar12 = 0.0;
        local_4c = fVar16;
        local_34 = fVar17;
      }
      fVar16 = *(float *)(in_R8 + uVar10 * 4);
      fVar16 = (float)(~-(uint)(fVar16 < 0.0) & (uint)fVar16 |
                      ((uint)fVar16 ^ _DAT_023945e0) & -(uint)(fVar16 < 0.0));
      fVar17 = local_50 * fVar14 + fVar16;
      local_50 = param_3;
      if (param_3 <= fVar17) {
        local_50 = fVar17;
      }
      fVar17 = *(float *)(arg1 + uVar10 * 4) / local_50;
      if ((uVar10 | uVar11) >> 0x20 == 0) {
        uVar9 = (uVar10 & 0xffffffff) % (ulonglong)uVar3;
      }
      else {
        uVar9 = (longlong)uVar10 % (longlong)uVar11;
      }
      *(float *)(lVar5 + uVar9 * 4) = fVar17;
      fVar15 = fVar15 + fVar17;
      fVar12 = fVar12 + fVar16 * fVar16;
      uVar10 = uVar10 + 1;
    } while (uVar10 != in_RDX);
  }
  if (iVar4 < in_ECX) {
    lVar5 = (longlong)(iVar4 + -1);
    uVar11 = (ulonglong)iVar4;
    uVar7 = ~uVar11;
    if ((in_ECX - iVar4 & 1U) != 0) {
      *(undefined4 *)(in_R9 + uVar11 * 4) = *(undefined4 *)(in_R9 + lVar5 * 4);
      *(undefined4 *)(local_res8 + uVar11 * 4) = *(undefined4 *)(local_res8 + lVar5 * 4);
      uVar11 = uVar11 + 1;
    }
    if (uVar7 + (longlong)in_ECX != 0) {
      do {
        *(undefined4 *)(in_R9 + uVar11 * 4) = *(undefined4 *)(in_R9 + lVar5 * 4);
        *(undefined4 *)(local_res8 + uVar11 * 4) = *(undefined4 *)(local_res8 + lVar5 * 4);
        *(undefined4 *)(in_R9 + 4 + uVar11 * 4) = *(undefined4 *)(in_R9 + lVar5 * 4);
        *(undefined4 *)(local_res8 + 4 + uVar11 * 4) = *(undefined4 *)(local_res8 + lVar5 * 4);
        uVar11 = uVar11 + 2;
      } while ((longlong)in_ECX != uVar11);
    }
  }
  FUN_00e83070();
  return;
}




// ==================================================
// @014b9750 (1299 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *in_RCX;
  ulonglong uVar16;
  uint uVar17;
  longlong *arg1;
  int iVar18;
  longlong *this;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  longlong local_a0;
  char local_98;
  
  uVar4 = *(uint *)(*this + 0xc);
  uVar14 = (ulonglong)uVar4;
  iVar12 = *(int *)(*param_3 + 0x18);
  iVar18 = iVar12 + 3;
  if (-1 < iVar12) {
    iVar18 = iVar12;
  }
  uVar21 = iVar18 >> 2;
  fVar1 = *(float *)(*(longlong *)(*param_3 + 0x10) + 4);
  iVar12 = FUN_00e7d780(param_1 / fVar1);
  uVar13 = iVar12 + 2U;
  if ((int)uVar21 < (int)(iVar12 + 2U)) {
    uVar13 = uVar21;
  }
  FUN_014b9ce0();
  if ((local_98 == '\0') && (local_a0 != 0)) {
    FUN_00d50b00();
  }
  if (0 < (int)uVar4) {
    fVar22 = DAT_02390124 / fVar1;
    uVar16 = 0;
    do {
      lVar15 = *(longlong *)(*(longlong *)(*this + 0x10) + uVar16 * 8);
      lVar5 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + uVar16 * 8);
      iVar12 = *(int *)(lVar15 + 0x18);
      iVar18 = iVar12 + 3;
      if (-1 < iVar12) {
        iVar18 = iVar12;
      }
      lVar6 = *(longlong *)(*(longlong *)(*param_2 + 0x10) + uVar16 * 8);
      ___bzero();
      fVar3 = DAT_0240e314;
      uVar11 = _DAT_02390140;
      lVar15 = *(longlong *)(lVar15 + 0x10);
      fVar23 = *(float *)(lVar15 + 4) * DAT_0240ded4;
      uVar9 = iVar18 >> 2;
      if (iVar18 >> 2 < 2) {
        uVar9 = 1;
      }
      if (7 < iVar12) {
        lVar5 = *(longlong *)(lVar5 + 0x10);
        uVar20 = 1;
        do {
          fVar2 = *(float *)(lVar15 + uVar20 * 4);
          if (param_1 < fVar2) break;
          fVar25 = (float)((uint)SQRT((float)(int)uVar20) & uVar11) * fVar23;
          fVar24 = fVar1;
          if (fVar1 <= fVar25) {
            fVar24 = fVar25;
          }
          iVar12 = (int)((fVar2 - fVar24) * fVar22);
          iVar18 = (int)((fVar24 + fVar2) * fVar22);
          uVar10 = iVar12 + 1;
          if (iVar12 < 0) {
            uVar10 = 1;
          }
          uVar17 = iVar18 + 1;
          if ((int)uVar21 <= iVar18) {
            uVar17 = uVar21;
          }
          if ((int)uVar10 < (int)uVar17) {
            fVar25 = *(float *)(lVar5 + uVar20 * 4);
            lVar7 = *(longlong *)(*param_3 + 0x10);
            uVar19 = (ulonglong)uVar10;
            do {
              fVar26 = (float)((uint)(fVar2 - *(float *)(lVar7 + uVar19 * 4)) & uVar11);
              if (fVar26 < fVar24) {
                lVar8 = *(longlong *)(lVar6 + 0x10);
                *(float *)(lVar8 + uVar19 * 4) =
                     *(float *)(*(longlong *)(local_a0 + 0x10) +
                               (longlong)(int)((fVar24 - fVar26) * (fVar3 / fVar24)) * 4) * fVar25 +
                     *(float *)(lVar8 + uVar19 * 4);
              }
              uVar19 = uVar19 + 1;
            } while (uVar17 != (uint)uVar19);
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 != uVar9);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar14);
    lVar15 = *in_RCX;
    if (lVar15 != 0) {
      uVar16 = 0;
      while( true ) {
        fVar1 = *(float *)(*(longlong *)(lVar15 + 0x10) + uVar16 * 4);
        if ((fVar1 != DAT_02390124) || (NAN(fVar1) || NAN(DAT_02390124))) {
          fVar3 = *(float *)(*(longlong *)
                              (*(longlong *)(*(longlong *)(*this + 0x10) + uVar16 * 8) + 0x10)
                            + 4);
          iVar18 = 1;
          iVar12 = 0x14;
          do {
            uVar21 = FUN_00e7d780((float)iVar18 * fVar3 * fVar22);
            fVar23 = (float)_powf(fVar1);
            if ((0 < (int)uVar21) && ((int)uVar21 < (int)uVar13)) {
              lVar15 = *(longlong *)
                        (*(longlong *)(*(longlong *)(*param_2 + 0x10) + uVar16 * 8) + 0x10);
              *(float *)(lVar15 + (ulonglong)uVar21 * 4) =
                   *(float *)(lVar15 + (ulonglong)uVar21 * 4) * fVar23;
            }
            if ((1 < (int)uVar21) && ((int)uVar21 <= (int)uVar13)) {
              lVar15 = *(longlong *)
                        (*(longlong *)(*(longlong *)(*param_2 + 0x10) + uVar16 * 8) + 0x10);
              *(float *)(lVar15 + (ulonglong)(uVar21 - 1) * 4) =
                   *(float *)(lVar15 + (ulonglong)(uVar21 - 1) * 4) * fVar23;
            }
            if ((-1 < (int)uVar21) && (uVar21 = uVar21 + 1, (int)uVar21 < (int)uVar13)) {
              lVar15 = *(longlong *)
                        (*(longlong *)(*(longlong *)(*param_2 + 0x10) + uVar16 * 8) + 0x10);
              *(float *)(lVar15 + (ulonglong)uVar21 * 4) =
                   fVar23 * *(float *)(lVar15 + (ulonglong)uVar21 * 4);
            }
            iVar18 = iVar18 + 1;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        uVar16 = uVar16 + 1;
        if (uVar16 == uVar14) break;
        lVar15 = *in_RCX;
      }
    }
  }
  fVar1 = DAT_02394274;
  if ((1 < (int)uVar13) && (0 < (int)uVar4)) {
    lVar15 = *param_2;
    lVar5 = *(longlong *)(lVar15 + 0x10);
    uVar16 = 1;
    do {
      fVar22 = 0.0;
      uVar20 = 0;
      if (2 < uVar14 - 1) {
        do {
          fVar22 = fVar22 + *(float *)(*(longlong *)(*(longlong *)(lVar5 + uVar20 * 8) + 0x10) +
                                      uVar16 * 4) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar5 + 8 + uVar20 * 8) + 0x10) +
                             uVar16 * 4) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar5 + 0x10 + uVar20 * 8) + 0x10) +
                             uVar16 * 4) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar5 + 0x18 + uVar20 * 8) + 0x10) +
                             uVar16 * 4);
          uVar20 = uVar20 + 4;
        } while ((uVar4 & 0xfffffffc) != uVar20);
      }
      if ((ulonglong)(uVar4 & 3) != 0) {
        uVar19 = 0;
        do {
          fVar22 = fVar22 + *(float *)(*(longlong *)
                                        (*(longlong *)(lVar5 + uVar20 * 8 + uVar19 * 8) + 0x10) +
                                      uVar16 * 4);
          uVar19 = uVar19 + 1;
        } while ((uVar4 & 3) != uVar19);
      }
      if (fVar1 <= fVar22) {
        fVar22 = DAT_02390124 / fVar22;
        lVar6 = *(longlong *)(lVar15 + 0x10);
        uVar20 = 0;
        if (uVar14 != 1) {
          do {
            lVar7 = *(longlong *)(*(longlong *)(lVar6 + uVar20 * 8) + 0x10);
            *(float *)(lVar7 + uVar16 * 4) = *(float *)(lVar7 + uVar16 * 4) * fVar22;
            lVar7 = *(longlong *)(*(longlong *)(lVar6 + 8 + uVar20 * 8) + 0x10);
            *(float *)(lVar7 + uVar16 * 4) = *(float *)(lVar7 + uVar16 * 4) * fVar22;
            uVar20 = uVar20 + 2;
          } while ((uVar4 & 0xfffffffe) != uVar20);
        }
        if ((uVar4 & 1) != 0) {
          lVar6 = *(longlong *)(*(longlong *)(lVar6 + uVar20 * 8) + 0x10);
          *(float *)(lVar6 + uVar16 * 4) = fVar22 * *(float *)(lVar6 + uVar16 * 4);
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar13);
  }
  if (local_a0 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00771850 (1279 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  void *pvVar7;
  longlong lVar8;
  uint uVar9;
  longlong *this;
  longlong **pplVar10;
  double dVar11;
  double dVar12;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  int local_70;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  pplVar10 = &local_58;
  FUN_00d3ecf0();
  plVar1 = local_58;
  FUN_000fe4b0();
  if (plVar1 == (longlong *)0x0) {
LAB_007718a2:
    pplVar10 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_007718a2;
  }
  plVar1 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar10 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  FUN_013fe9a0();
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  FUN_00757c60();
  plVar4 = local_58;
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != local_98) goto LAB_00771d4e;
  if (this[0x29] != 0) {
    FUN_00100170();
  }
  FUN_013fb9b0();
  plVar4 = local_58;
  if ((((local_50 == '\0') && (local_58 != (longlong *)0x0)) && (FUN_00d50b00(), local_50 != '\0'))
     && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_013fe9d0();
  plVar5 = local_58;
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00771a2a;
    }
  }
  else {
LAB_00771a2a:
    if ((plVar4 == (longlong *)0x0) || (plVar5 == (longlong *)0x0)) {
LAB_00771d33:
      if (plVar5 == (longlong *)0x0) goto LAB_00771d40;
    }
    else {
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (local_58 == (longlong *)0x0) {
        bVar2 = false;
      }
      else {
        dVar11 = (double)FUN_00b7a6e0();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_01264170();
        bVar2 = DAT_023908d0 < dVar11 - dVar12;
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar2) goto LAB_00771d33;
      (**(code **)(*plVar1 + 1000))();
      (**(code **)(*this + 0x610))();
      plVar1 = local_58;
      if (local_50 != '\0') {
        if (local_58 != (longlong *)0x0) goto LAB_00771b7a;
        goto LAB_00771d33;
      }
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_00771b7a:
        local_50 = '\0';
        local_58 = (longlong *)0x0;
        local_48 = plVar1;
        local_38 = 0;
        local_40 = 0;
        if (0 < *(int *)((longlong)plVar1 + 0xc)) {
          uVar9 = 0;
          do {
            lVar3 = local_88;
            local_58 = *(longlong **)(plVar1[2] + (ulonglong)uVar9 * 8);
            FUN_006f4810();
            FUN_002e4d80();
            if (local_80 == '\0') {
              if (local_88 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_80 = '\0';
            }
            if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_88 != 0) {
              local_80 = '\0';
              local_88 = 0;
              local_70 = -1;
              while( true ) {
                lVar8 = (longlong)local_70;
                local_70 = local_70 + 1;
                if (*(int *)(lVar3 + 0xc) <= local_70) break;
                local_88 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 8 + lVar8 * 8);
                FUN_01bca0a0();
              }
              FUN_00713b30();
              FUN_00d50b20();
            }
            uVar9 = uVar9 + 1;
            local_40 = CONCAT44(local_40._4_4_,uVar9);
          } while ((int)uVar9 < *(int *)((longlong)plVar1 + 0xc));
        }
        FUN_000e3600();
        FUN_00d50b20();
        goto LAB_00771d33;
      }
    }
    FUN_00d50b20();
  }
LAB_00771d40:
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_00771d4e:
  FUN_00d50b20();
  return;
}




// ==================================================
// @00785940 (1276 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *arg1;
  longlong *this;
  int iVar4;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  
  if (this[0x26] == 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320d00();
    if ((local_58 == '\0') && (local_60 != 0)) {
      FUN_00d50b00();
    }
    (**(code **)(*this + 0x628))();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a11a0();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0170f550();
    FUN_0167ab60();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01537d40();
    if ((local_58 == '\0') && (local_60 != 0)) {
      FUN_00d50b00();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (local_60 != 0) {
      if (0 < *(int *)(local_60 + 0xc)) {
        iVar4 = 0;
        do {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016670b0();
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (local_70 == local_60) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016670f0();
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(local_60 + 0xc));
      }
      FUN_0049cb70();
      FUN_00d50b20();
    }
    if (local_60 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00e8b020();
    if (local_58 == '\0') {
      if (local_60 == 0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_60 == 0) {
      return;
    }
    if (0 < *(int *)(local_60 + 0xc)) {
      iVar4 = 0;
      do {
        FUN_00e33de0();
        lVar2 = DAT_02729618;
        if (DAT_02729618 != 0) {
          FUN_00d50b00();
        }
        FUN_000175c0();
        lVar1 = *arg1;
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if (local_70 == lVar1) {
          FUN_00e8afb0();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(local_60 + 0xc));
    }
    FUN_00097c40();
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @011bf720 (1217 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *this;
  
  FUN_00044470();
  *this = &DAT_025f2cd0;
  this[2] = &DAT_025f3088;
  this[3] = &DAT_025f30c0;
  this[0xc] = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011bfda0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTempoAnalyzerEvent");
  }
  this[0xd] = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011bfe90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTempoAnalyzerEvent");
  }
  this[0xe] = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011bff80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeline");
  }
  this[0xf] = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011c0070();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeline");
  }
  this[0x10] = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011c0160();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElementAnalyzer");
  }
  this[0x11] = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b5d50 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b5d18 = FUN_011bf510();
        _DAT_027b5d10 = "_sourceDuration";
        _DAT_027b5d20 = 0;
        _DAT_027b5d28 = 0x6400;
        _DAT_027b5d30 = "double";
        _DAT_027b5d38 = 0;
        uRam00000000027b5d40 = 0;
        _DAT_027b5d48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(this + 0x12) = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b5d98 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b5d60 = FUN_011bf510();
        _DAT_027b5d58 = "_maxUsedPeriod";
        _DAT_027b5d68 = 0;
        _DAT_027b5d70 = 0x6600;
        _DAT_027b5d78 = "float";
        _DAT_027b5d80 = 0;
        uRam00000000027b5d88 = 0;
        _DAT_027b5d90 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x94) = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b5de0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b5da8 = FUN_011bf510();
        _DAT_027b5da0 = "_elementsAreTonal";
        _DAT_027b5db0 = 0;
        _DAT_027b5db8 = 0x6200;
        _DAT_027b5dc0 = "bool";
        _DAT_027b5dc8 = 0;
        uRam00000000027b5dd0 = 0;
        _DAT_027b5dd8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x95) = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b5e28 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b5df0 = FUN_011bf510();
        _DAT_027b5de8 = "_isPreliminary";
        _DAT_027b5df8 = 0;
        _DAT_027b5e00 = 0x6200;
        _DAT_027b5e08 = "bool";
        _DAT_027b5e10 = 0;
        uRam00000000027b5e18 = 0;
        _DAT_027b5e20 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @010fe8d0 (1197 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *this;
  
  FUN_010fee50();
  *this = &DAT_025e7818;
  this[7] = &DAT_025e7c80;
  this[0x27] = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01102a80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElementAnalyzer");
  }
  this[0x28] = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01102b70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceAttackItem");
  }
  this[0x29] = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01102c60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceItem");
  }
  *(undefined1 *)(this + 0x2a) = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02790df0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02790db8 = FUN_010fe3b0();
        _DAT_02790db0 = "_isMarkedAsPreliminaryItem";
        _DAT_02790dc0 = 0;
        _DAT_02790dc8 = 0x6210;
        _DAT_02790dd0 = "bool";
        _DAT_02790dd8 = 0;
        uRam0000000002790de0 = 0;
        _DAT_02790de8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x154) = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02790e38 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02790e00 = FUN_010fe3b0();
        _DAT_02790df8 = "_sortingValue";
        _DAT_02790e08 = 0;
        _DAT_02790e10 = 0x6610;
        _DAT_02790e18 = "float";
        _DAT_02790e20 = 0;
        uRam0000000002790e28 = 0;
        _DAT_02790e30 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(this + 0x2b) = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02790e80 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02790e48 = FUN_010fe3b0();
        _DAT_02790e40 = "_harmonicNumber";
        _DAT_02790e50 = 0;
        _DAT_02790e58 = 0x6910;
        _DAT_02790e60 = "GNInt";
        _DAT_02790e68 = 0;
        uRam0000000002790e70 = 0;
        _DAT_02790e78 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x15c) = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02790ec8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02790e90 = FUN_010fe3b0();
        _DAT_02790e88 = "_timePosIndexOfPitchCenterRelevanceStart";
        _DAT_02790e98 = 0;
        _DAT_02790ea0 = 0x6910;
        _DAT_02790ea8 = "GNInt";
        _DAT_02790eb0 = 0;
        uRam0000000002790eb8 = 0;
        _DAT_02790ec0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(this + 0x2c) = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02790f10 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02790ed8 = FUN_010fe3b0();
        _DAT_02790ed0 = "_timePosIndexOfPitchCenterRelevanceEnd";
        _DAT_02790ee0 = 0;
        _DAT_02790ee8 = 0x6910;
        _DAT_02790ef0 = "GNInt";
        _DAT_02790ef8 = 0;
        uRam0000000002790f00 = 0;
        _DAT_02790f08 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @0078dab0 (1195 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined8 local_80;
  undefined1 local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  cVar3 = FUN_00751ba0();
  if (cVar3 == '\0') {
    return;
  }
  pplVar5 = &local_40;
  FUN_00d3ecf0();
  plVar1 = local_40;
  if ((DAT_026e0c38 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026e0b88 = FUN_000fddb0();
    _DAT_026e0b70 = "MUElementAnalyzer";
    _DAT_026e0b78 = 0x180;
    _DAT_026e0b80 = FUN_000fdd80;
    _DAT_026e0b90 = 0;
    uRam00000000026e0b98 = 0;
    _DAT_026e0ba0 = 0;
    _DAT_026e0c18 = 0;
    uRam00000000026e0c20 = 0;
    _DAT_026e0c28 = 0;
    DAT_026e0c2a = 1;
    _DAT_026e0ba8 = 0;
    uRam00000000026e0bb0 = 0;
    _DAT_026e0bb8 = 0;
    uRam00000000026e0bc0 = 0;
    _DAT_026e0bc8 = 0;
    uRam00000000026e0bd0 = 0;
    _DAT_026e0bd8 = 0;
    uRam00000000026e0be0 = 0;
    _DAT_026e0be8 = 0;
    uRam00000000026e0bf0 = 0;
    _DAT_026e0bf8 = 0;
    uRam00000000026e0c00 = 0;
    _DAT_026e0c08 = 0;
    uRam00000000026e0c10 = 0;
    DAT_026e0c33 = 0;
    _DAT_026e0c2b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_0078db19:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0078db19;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  uVar6 = FUN_00e33de0();
  local_70 = DAT_027295c0;
  if (DAT_027295c0 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_68 = '\x01';
  pplVar5 = &local_40;
  FUN_000175c0(uVar6,&local_70);
  plVar2 = local_40;
  FUN_00053ac0();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_0078dbcb;
  }
  pplVar5 = (longlong **)&DAT_02802688;
LAB_0078dbcb:
  plVar2 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    cVar3 = FUN_00d45ad0();
    if (cVar3 == '\0') {
      uVar6 = FUN_00e33de0();
      local_60 = DAT_027295d0;
      if (DAT_027295d0 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_58 = '\x01';
      FUN_000175c0(uVar6,&local_60);
      plVar2 = local_40;
      if ((DAT_027048b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026cd478 = FUN_00d4fe50();
        DAT_026cd460 = "GNList";
        _DAT_026cd468 = 0x20;
        _DAT_026cd470 = FUN_00018210;
        _DAT_026cd480 = 0;
        uRam00000000026cd488 = 0;
        _DAT_026cd490 = 0;
        _DAT_026cd508 = 0;
        uRam00000000026cd510 = 0;
        _DAT_026cd518 = 0;
        DAT_026cd51a = 6;
        _DAT_026cd498 = 0;
        uRam00000000026cd4a0 = 0;
        _DAT_026cd4a8 = 0;
        uRam00000000026cd4b0 = 0;
        _DAT_026cd4b8 = 0;
        uRam00000000026cd4c0 = 0;
        _DAT_026cd4c8 = 0;
        uRam00000000026cd4d0 = 0;
        _DAT_026cd4d8 = 0;
        uRam00000000026cd4e0 = 0;
        _DAT_026cd4e8 = 0;
        uRam00000000026cd4f0 = 0;
        _DAT_026cd4f8 = 0;
        uRam00000000026cd500 = 0;
        DAT_026cd523 = 0;
        _DAT_026cd51b = 0;
        ___cxa_guard_release();
      }
      pplVar5 = (longlong **)&DAT_02802688;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 != '\0') {
          FUN_0006e1c0();
          cVar3 = FUN_00e8da30();
          pplVar5 = &local_40;
          if (cVar3 == '\0') {
            pplVar5 = (longlong **)&DAT_02802688;
          }
        }
      }
      plVar2 = *pplVar5;
      if (*(char *)(pplVar5 + 1) == '\0') {
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar5 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (longlong *)0x0) {
        if (*(int *)((longlong)plVar2 + 0xc) != 0) {
          local_38 = '\0';
          local_40 = plVar1;
          cVar3 = FUN_00d23d70();
          uVar6 = extraout_XMM0_Da;
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            uVar6 = FUN_00d50b20();
          }
          if (cVar3 == '\0') {
            local_80 = 0;
            local_78 = 0;
            FUN_007649a0(uVar6,&local_80);
          }
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @014ab140 (1185 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *in_RDX;
  longlong *arg1;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong in_R8;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double in_XMM4_Qa;
  longlong local_b8;
  char local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  
  local_88 = param_1;
  local_80 = in_RDX;
  FUN_014af180(param_3,param_4);
  lVar7 = *arg1;
  if (0 < *(int *)(lVar7 + 0xc)) {
    lVar13 = 0;
    lVar12 = 0;
    bVar3 = false;
    lVar14 = 0;
    bVar4 = false;
    dVar16 = 0.0;
    do {
      lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + lVar13 * 8);
      if (lVar12 == lVar7) {
        if ((!bVar3) && (lVar12 != 0)) {
          bVar3 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (lVar12 != 0)) {
          FUN_00d50b20();
          bVar3 = true;
          lVar12 = lVar7;
        }
        else {
          bVar3 = true;
          lVar12 = lVar7;
        }
      }
      dVar21 = in_XMM4_Qa;
      if (lVar13 < (longlong)*(int *)(*arg1 + 0xc) + -1) {
        lVar7 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + 8 + lVar13 * 8);
        if (lVar14 == lVar7) {
          if ((bVar4) || (lVar14 == 0)) {
            *(double *)(lVar12 + 0x20) = dVar16;
            goto joined_r0x014ab4a2;
          }
          FUN_00d50b00();
          *(double *)(lVar12 + 0x20) = dVar16;
          bVar4 = true;
          lVar7 = *(longlong *)(lVar14 + 0x40);
          if (lVar7 == 0) goto LAB_014ab330;
LAB_014ab485:
          dVar21 = *(double *)(lVar7 + 0x18);
        }
        else {
          if (lVar7 == 0) {
            lVar7 = 0;
          }
          else {
            FUN_00d50b00();
          }
joined_r0x014ab2d2:
          if ((bVar4) && (lVar14 != 0)) {
            FUN_00d50b20();
          }
          bVar4 = true;
          *(double *)(lVar12 + 0x20) = dVar16;
          lVar14 = lVar7;
joined_r0x014ab4a2:
          if (lVar14 == 0) {
            lVar14 = 0;
          }
          else {
            lVar7 = *(longlong *)(lVar14 + 0x40);
            if (lVar7 != 0) goto LAB_014ab485;
LAB_014ab330:
            dVar21 = *(double *)(lVar14 + 0x10);
            if (DAT_02391030 <= dVar21 - *(double *)(lVar12 + 0x18)) {
              iVar8 = (int)(*(double *)(lVar12 + 0x18) * param_2);
              iVar10 = (int)(dVar21 * param_2);
              if (iVar8 < iVar10) {
                uVar6 = (ulonglong)iVar8;
                uVar9 = ~uVar6;
                uVar11 = (ulonglong)(uint)(iVar10 - iVar8) & 3;
                fVar17 = DAT_02393944;
                fVar15 = DAT_02393944;
                if ((iVar10 - iVar8 & 3U) != 0) {
                  do {
                    fVar15 = *(float *)(in_R8 + uVar6 * 4);
                    iVar5 = (int)uVar6;
                    if (fVar17 <= fVar15) {
                      fVar15 = fVar17;
                      iVar5 = iVar8;
                    }
                    iVar8 = iVar5;
                    uVar6 = uVar6 + 1;
                    uVar11 = uVar11 - 1;
                    fVar17 = fVar15;
                  } while (uVar11 != 0);
                }
                if (2 < uVar9 + (longlong)iVar10) {
                  do {
                    fVar17 = *(float *)(in_R8 + uVar6 * 4);
                    iVar5 = (int)uVar6;
                    if (fVar17 < fVar15) {
                      iVar8 = iVar5;
                    }
                    fVar19 = *(float *)(in_R8 + 4 + uVar6 * 4);
                    if (fVar15 <= fVar17) {
                      fVar17 = fVar15;
                    }
                    iVar1 = iVar5 + 1;
                    if (fVar17 <= fVar19) {
                      fVar19 = fVar17;
                      iVar1 = iVar8;
                    }
                    fVar17 = *(float *)(in_R8 + 8 + uVar6 * 4);
                    iVar2 = iVar5 + 2;
                    if (fVar19 <= fVar17) {
                      fVar17 = fVar19;
                      iVar2 = iVar1;
                    }
                    fVar15 = *(float *)(in_R8 + 0xc + uVar6 * 4);
                    iVar8 = iVar5 + 3;
                    if (fVar17 <= fVar15) {
                      fVar15 = fVar17;
                      iVar8 = iVar2;
                    }
                    uVar6 = uVar6 + 4;
                  } while (uVar6 != (longlong)iVar10);
                }
              }
              dVar21 = (double)iVar8 / param_2;
            }
          }
        }
      }
      else {
        if (lVar14 != 0) {
          lVar7 = 0;
          goto joined_r0x014ab2d2;
        }
        *(double *)(lVar12 + 0x20) = dVar16;
        lVar14 = 0;
      }
      *(double *)(lVar12 + 0x28) = dVar21;
      dVar20 = *(double *)(lVar12 + 0x10);
      if (dVar20 < dVar16) {
        *(double *)(lVar12 + 0x10) = dVar16;
        dVar18 = *(double *)(lVar12 + 0x18);
        if (dVar21 < dVar18) goto LAB_014ab516;
LAB_014ab4e0:
        dVar20 = *(double *)(lVar12 + 0x30);
        if (dVar20 < dVar16) goto LAB_014ab53b;
LAB_014ab531:
        if (dVar18 < dVar20) goto LAB_014ab53b;
      }
      else {
        dVar18 = *(double *)(lVar12 + 0x18);
        dVar16 = dVar20;
        if (dVar18 <= dVar21) goto LAB_014ab4e0;
LAB_014ab516:
        *(double *)(lVar12 + 0x18) = dVar21;
        dVar20 = *(double *)(lVar12 + 0x30);
        dVar18 = dVar21;
        if (dVar16 <= dVar20) goto LAB_014ab531;
LAB_014ab53b:
        local_a8 = *local_80;
        local_a0 = 0;
        local_90 = 0;
        local_98 = lVar12;
        FUN_014b3ce0(local_88,&local_a8,&local_98,0);
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar13 = lVar13 + 1;
      lVar7 = *arg1;
      dVar16 = dVar21;
    } while (lVar13 < *(int *)(lVar7 + 0xc));
    if ((bVar4) && (lVar14 != 0)) {
      FUN_00d50b20();
    }
    if (bVar3) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @014b2970 (1149 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong lVar1;
  float fVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong in_RDX;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong arg1;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong local_70;
  char local_68;
  float local_44;
  float local_40;
  float local_34;
  
  param_2 = param_1 / param_2;
  uVar5 = (uint)(param_2 + param_2);
  lVar7 = FUN_00e83010();
  lVar8 = FUN_00e83010();
  dVar3 = (double)_exp(SUB84(DAT_0240e3d0 / ((double)param_4 * param_1),0));
  fVar15 = (float)dVar3;
  if (0 < (longlong)arg1) {
    uVar13 = arg1;
    fVar16 = param_3;
    if ((arg1 & 1) != 0) {
      uVar13 = arg1 - 1;
      fVar18 = *(float *)(in_RDX + -4 + arg1 * 4);
      fVar18 = (float)(~-(uint)(0.0 < fVar18) & (_DAT_023945e0 ^ (uint)fVar18) |
                      (uint)fVar18 & -(uint)(0.0 < fVar18)) + fVar15 * param_3;
      if (param_3 <= fVar18) {
        fVar16 = fVar18;
      }
      *(float *)(lVar8 + -4 + arg1 * 4) = fVar16;
    }
    uVar4 = _DAT_023945e0;
    if (arg1 != 1) {
      lVar9 = uVar13 + 2;
      do {
        fVar18 = *(float *)(in_RDX + -0xc + lVar9 * 4);
        fVar18 = (float)(~-(uint)(0.0 < fVar18) & ((uint)fVar18 ^ uVar4) |
                        (uint)fVar18 & -(uint)(0.0 < fVar18)) + fVar16 * fVar15;
        fVar16 = param_3;
        if (param_3 <= fVar18) {
          fVar16 = fVar18;
        }
        *(float *)(lVar8 + -0xc + lVar9 * 4) = fVar16;
        fVar18 = *(float *)(in_RDX + -0x10 + lVar9 * 4);
        fVar18 = (float)(~-(uint)(0.0 < fVar18) & ((uint)fVar18 ^ uVar4) |
                        (uint)fVar18 & -(uint)(0.0 < fVar18)) + fVar16 * fVar15;
        fVar16 = param_3;
        if (param_3 <= fVar18) {
          fVar16 = fVar18;
        }
        *(float *)(lVar8 + -0x10 + lVar9 * 4) = fVar16;
        lVar9 = lVar9 + -2;
      } while (2 < lVar9);
    }
  }
  uVar13 = (ulonglong)(int)uVar5;
  ___bzero();
  if (0 < (longlong)arg1) {
    dVar3 = DAT_0238fee8 / param_2;
    lVar9 = (longlong)(int)(DAT_023942d0 * param_2);
    uVar10 = (longlong)(param_2 * 0.0) + lVar9;
    iVar6 = 0;
    uVar14 = 0;
    local_40 = 0.0;
    fVar16 = 0.0;
    local_34 = DAT_02390d00;
    local_44 = param_3;
    do {
      if (uVar14 == uVar10) {
        fVar18 = (float)((double)fVar16 * dVar3 + DAT_023b19a0);
        fVar17 = fVar18 - local_40;
        if (((0.0 < local_40) && (0.0 <= local_34)) && (fVar17 < 0.0)) {
          uVar10 = (longlong)((double)(iVar6 + -2) * param_2) + lVar9;
          if ((longlong)uVar10 < 0) {
            uVar10 = 0;
          }
          uVar12 = uVar10;
          fVar16 = DAT_0240e30c;
          if (0 < (int)uVar5) {
            lVar1 = uVar10 + uVar13;
            do {
              if ((uVar10 | uVar13) >> 0x20 == 0) {
                uVar11 = (uVar10 & 0xffffffff) % (ulonglong)uVar5;
              }
              else {
                uVar11 = (longlong)uVar10 % (longlong)uVar13;
              }
              fVar2 = *(float *)(lVar7 + uVar11 * 4);
              uVar11 = uVar10;
              if (fVar2 <= fVar16) {
                fVar2 = fVar16;
                uVar11 = uVar12;
              }
              uVar12 = uVar11;
              fVar16 = fVar2;
              uVar10 = uVar10 + 1;
            } while ((longlong)uVar10 < lVar1);
          }
          FUN_014328b0(SUB84((double)(longlong)uVar12 / param_1,0),(double)fVar16 + DAT_023b19a0);
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          FUN_00d21140();
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        iVar6 = iVar6 + 1;
        uVar10 = (longlong)((double)iVar6 * param_2) + lVar9;
        fVar16 = 0.0;
        local_40 = fVar18;
        local_34 = fVar17;
      }
      fVar18 = *(float *)(in_RDX + uVar14 * 4);
      fVar18 = local_44 * fVar15 +
               (float)(~-(uint)(fVar18 < 0.0) & (uint)fVar18 |
                      ((uint)fVar18 ^ _DAT_023945e0) & -(uint)(fVar18 < 0.0));
      local_44 = param_3;
      if (param_3 <= fVar18) {
        local_44 = fVar18;
      }
      fVar18 = *(float *)(lVar8 + uVar14 * 4) / local_44;
      if ((uVar14 | uVar13) >> 0x20 == 0) {
        uVar12 = (uVar14 & 0xffffffff) % (ulonglong)uVar5;
      }
      else {
        uVar12 = (longlong)uVar14 % (longlong)uVar13;
      }
      *(float *)(lVar7 + uVar12 * 4) = fVar18;
      fVar16 = fVar16 + fVar18;
      uVar14 = uVar14 + 1;
    } while (uVar14 != arg1);
  }
  FUN_00e83070();
  FUN_00e83070();
  return;
}




// ==================================================
// @0149ded0 (1138 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  int in_ECX;
  ulonglong uVar7;
  uint in_EDX;
  longlong lVar8;
  longlong *arg1;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float in_XMM4_Da;
  float in_XMM5_Da;
  
  if (param_4 < param_1) {
    return;
  }
  fVar11 = (float)_logf(in_XMM4_Da / _DAT_0240e330);
  fVar12 = (float)_logf(in_XMM5_Da / _DAT_0240e330);
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  fVar13 = (float)_logf(param_4 / param_1);
  if ((int)in_EDX < 1) {
    bVar2 = false;
    lVar10 = 0;
  }
  else {
    fVar11 = fVar11 * DAT_0240e334;
    fVar15 = fVar11 * DAT_023941f0 + DAT_0239011c;
    fVar12 = fVar12 * DAT_0240e334 * DAT_023941f0 + DAT_0239011c;
    fVar13 = fVar13 * DAT_0240e334;
    uVar7 = 0;
    lVar10 = 0;
    bVar2 = false;
    bVar3 = false;
    lVar8 = 0;
    do {
      lVar9 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + uVar7 * 8);
      if (lVar10 == lVar9) {
        if ((!bVar2) && (lVar10 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (lVar10 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          lVar10 = lVar9;
        }
        else {
          bVar2 = true;
          lVar10 = lVar9;
        }
      }
      lVar9 = lVar8;
      if (*(int *)(lVar10 + 0xc) != 0) {
        fVar14 = (float)FUN_00d216c0();
        lVar9 = **(longlong **)(lVar10 + 0x10);
        if (lVar8 == lVar9) {
          lVar9 = lVar8;
          bVar4 = bVar3;
          if ((!bVar3) && (lVar8 != 0)) {
            fVar14 = (float)FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          if (lVar9 != 0) {
            fVar14 = (float)FUN_00d50b00();
          }
          bVar4 = true;
          if ((bVar3) && (lVar8 != 0)) {
            fVar14 = (float)FUN_00d50b20();
          }
        }
        iVar5 = *(int *)(lVar10 + 0xc);
        if (((int)fVar12 < *(int *)(lVar9 + 0x10)) && (*(int *)(lVar9 + 0x10) < (int)fVar15)) {
          while (in_ECX < iVar5) {
            lVar8 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (longlong)in_ECX * 8);
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            FUN_00d21140();
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
            fVar14 = (float)FUN_00d23620();
            iVar5 = *(int *)(lVar10 + 0xc);
          }
        }
        if (0 < iVar5) {
          lVar8 = 0;
          do {
            lVar1 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar8 * 8);
            if (lVar9 == lVar1) {
              if ((!bVar4) && (lVar9 != 0)) {
                bVar4 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
              if ((bVar4) && (lVar9 != 0)) {
                FUN_00d50b20();
                bVar4 = true;
                lVar9 = lVar1;
              }
              else {
                bVar4 = true;
                lVar9 = lVar1;
              }
            }
            fVar14 = (float)*(int *)(lVar9 + 0x10) / DAT_023941f0;
            fVar14 = (float)_powf(fVar13 * param_3 + param_2,
                                  ~-(uint)(fVar11 < fVar14) & (uint)fVar14 |
                                  (uint)((fVar11 + fVar11) - fVar14) & -(uint)(fVar11 < fVar14));
            fVar14 = fVar14 * *(float *)(lVar9 + 0x1c);
            *(float *)(lVar9 + 0x18) = fVar14;
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(lVar10 + 0xc));
        }
        FUN_00d242c0(fVar14,0);
        FUN_00d214d0();
        bVar3 = bVar4;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar9;
    } while (uVar7 != in_EDX);
    if ((bVar3) && (lVar9 != 0)) {
      FUN_00d50b20();
    }
    if (puVar6 == (undefined8 *)0x0) goto LAB_0149e35c;
  }
  FUN_00d50b20();
LAB_0149e35c:
  if ((bVar2) && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00939c54 (1134 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int unaff_ESI;
  ulonglong uVar10;
  longlong this;
  longlong lVar11;
  bool bVar12;
  char local_res8;
  
  plVar1 = (longlong *)(this + 8);
  lVar7 = *(longlong *)(this + 0x10);
  lVar2 = *(longlong *)(this + 8);
  FUN_008f8528();
  lVar11 = *(longlong *)(this + 8);
  if ((lVar7 != lVar2) && (*(int *)(lVar11 + 8) != unaff_ESI)) {
    if ((*(byte *)(lVar11 + 0x1e0) & 1) == 0) {
      *(undefined2 *)(lVar11 + 0x1e0) = 0;
    }
    else {
      **(undefined1 **)(lVar11 + 0x1f0) = 0;
      *(undefined8 *)(lVar11 + 0x1e8) = 0;
    }
    lVar7 = *plVar1;
    if ((*(byte *)(lVar7 + 0x1f8) & 1) == 0) {
      *(undefined2 *)(lVar7 + 0x1f8) = 0;
    }
    else {
      **(undefined1 **)(lVar7 + 0x208) = 0;
      *(undefined8 *)(lVar7 + 0x200) = 0;
    }
    lVar7 = *plVar1;
    if ((*(byte *)(lVar7 + 0x210) & 1) == 0) {
      *(undefined2 *)(lVar7 + 0x210) = 0;
    }
    else {
      **(undefined1 **)(lVar7 + 0x220) = 0;
      *(undefined8 *)(lVar7 + 0x218) = 0;
    }
    lVar7 = *plVar1;
    if ((*(byte *)(lVar7 + 0x228) & 1) == 0) {
      *(undefined2 *)(lVar7 + 0x228) = 0;
    }
    else {
      **(undefined1 **)(lVar7 + 0x238) = 0;
      *(undefined8 *)(lVar7 + 0x230) = 0;
    }
    lVar7 = *plVar1;
    if ((*(byte *)(lVar7 + 0x240) & 1) == 0) {
      *(undefined2 *)(lVar7 + 0x240) = 0;
    }
    else {
      **(undefined1 **)(lVar7 + 0x250) = 0;
      *(undefined8 *)(lVar7 + 0x248) = 0;
    }
    lVar7 = *plVar1;
    if ((*(byte *)(lVar7 + 600) & 1) == 0) {
      *(undefined2 *)(lVar7 + 600) = 0;
    }
    else {
      **(undefined1 **)(lVar7 + 0x268) = 0;
      *(undefined8 *)(lVar7 + 0x260) = 0;
    }
    lVar7 = *plVar1;
    if ((*(byte *)(lVar7 + 0x270) & 1) == 0) {
      *(undefined2 *)(lVar7 + 0x270) = 0;
    }
    else {
      **(undefined1 **)(lVar7 + 0x280) = 0;
      *(undefined8 *)(lVar7 + 0x278) = 0;
    }
    lVar11 = *plVar1;
    *(undefined1 *)(lVar11 + 0x387) = 0;
  }
  *(int *)(lVar11 + 8) = unaff_ESI;
  lVar7 = FUN_008e4ece();
  *(undefined4 *)(lVar11 + 0xc) = *(undefined4 *)(lVar7 + 0x2c);
  lVar7 = FUN_008e4ece();
  *(undefined4 *)(lVar11 + 0x10) = *(undefined4 *)(lVar7 + 0x2c);
  lVar7 = FUN_008e4ece();
  *(undefined4 *)(lVar11 + 0x14) = *(undefined4 *)(lVar7 + 0x2c);
  uVar9 = 8;
  if (unaff_ESI == 0x4801f777) {
    uVar9 = 1;
  }
  *(undefined8 *)(lVar11 + 0x30) = uVar9;
  *(ulonglong *)(lVar11 + 0x48) =
       *(ulonglong *)(lVar11 + 0x48) | (ulonglong)(unaff_ESI != 0x4801f777) * 0x10 + 0x10;
  lVar7 = FUN_008e4ece();
  *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(lVar7 + 0x38);
  *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar11 + 0x18);
  *(undefined1 *)(lVar11 + 0x58) = 1;
  *(undefined2 *)(lVar11 + 0x37d) = 0;
  if (param_1 == '\0') {
    *(undefined1 *)(lVar11 + 0x59) = 0;
    bVar12 = true;
    bVar3 = true;
  }
  else {
    if ((*(byte *)(param_2 + 7) & 2) == 0) {
      cVar5 = '\0';
LAB_00939ef8:
      bVar12 = true;
      bVar3 = true;
    }
    else {
      FUN_0093a0f8(0xffffffff,param_3);
      FUN_008e8fb4();
      FUN_008e844a();
      *(undefined1 *)(lVar11 + 0x37d) = 1;
      cVar5 = '\x01';
      if (*(char *)(lVar11 + 0xe3) != '\0') goto LAB_00939ef8;
      bVar12 = *(longlong *)(lVar11 + 0xb8) != 0;
      bVar3 = false;
    }
    if ((*(byte *)(param_2 + 7) & 1) != 0) {
      FUN_0093a51a(0xffffffff,param_4);
      FUN_008ea352();
      FUN_008e969a();
      *(undefined1 *)(lVar11 + 0x37e) = 1;
      if (*(char *)(lVar11 + 0x13a) == '\0') {
        bVar12 = false;
        bVar3 = false;
      }
      cVar5 = *(char *)(lVar11 + 0x37d);
    }
    if (cVar5 != '\0') {
      *(undefined1 *)(lVar11 + 0x59) = 1;
      if (*(char *)(lVar11 + 0x37e) == '\0') {
        *(undefined8 *)(lVar11 + 0x48) = 4;
        uVar10 = 0x100944;
        uVar8 = 0x4b;
      }
      else {
        *(undefined8 *)(lVar11 + 0x48) = 8;
        uVar10 = 0x100948;
        uVar8 = 0x23;
      }
      bVar4 = false;
      goto LAB_00939fcb;
    }
    *(char *)(lVar11 + 0x59) = *(char *)(lVar11 + 0x37e);
    if (*(char *)(lVar11 + 0x37e) != '\0') {
      *(undefined8 *)(lVar11 + 0x48) = 2;
      bVar4 = true;
      uVar10 = 0x100942;
      uVar8 = 0x37;
      goto LAB_00939fcb;
    }
  }
  *(undefined8 *)(lVar11 + 0x48) = 1;
  bVar4 = true;
  uVar10 = 0x100941;
  uVar8 = 0x5f;
LAB_00939fcb:
  *(undefined4 *)(lVar11 + 0x50) = uVar8;
  *(ulonglong *)(lVar11 + 0x48) = uVar10;
  if (local_res8 != '\0') {
    uVar6 = (uint)*(byte *)(param_2 + 7);
    *(ulonglong *)(lVar11 + 0x48) =
         (ulonglong)((char)*(byte *)(param_2 + 7) < '\0') * 0x1000 + 0x1000 | uVar10 |
         (ulonglong)((uVar6 & 0x10) >> 4) * 0x40000 + 0x40000 |
         (ulonglong)((uVar6 & 0x20) >> 5) * 0x10000 + 0x10000 |
         (ulonglong)((uVar6 & 0x40) >> 6) * 0x4000 + 0x4000;
  }
  *(undefined4 *)(lVar11 + 0x54) = 1;
  if (bVar3) {
    *(undefined1 *)(this + 0x20) = 1;
    *(undefined8 *)(lVar11 + 0x40) = 1;
  }
  else {
    *(undefined1 *)(this + 0x20) = 0;
    if (bVar12 && !bVar4) {
      *(undefined8 *)(lVar11 + 0x40) = 8;
      *(undefined4 *)(lVar11 + 0x50) = 1;
      *(undefined1 *)(lVar11 + 0x59) = 0;
      uVar8 = 1;
    }
    else {
      *(undefined8 *)(lVar11 + 0x40) = 4;
      *(undefined4 *)(lVar11 + 0x50) = 0;
      uVar8 = 0;
    }
  }
  *(undefined4 *)(this + 0x24) = uVar8;
  *(undefined1 *)(this + 0x21) = 0;
  return;
}




// ==================================================
// @014b9ce0 (1133 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong *this;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  undefined4 extraout_XMM0_Dc_08;
  undefined4 extraout_XMM0_Dc_09;
  undefined4 extraout_XMM0_Dc_10;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  undefined4 extraout_XMM0_Dd_08;
  undefined4 extraout_XMM0_Dd_09;
  undefined4 extraout_XMM0_Dd_10;
  undefined1 auVar22 [16];
  longlong local_68;
  char local_60;
  undefined1 local_48 [16];
  
  lVar19 = DAT_028acf48;
  if ((DAT_028acf48 == 0) || (DAT_028acf51 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028acf48 == 0) {
      uVar13 = FUN_00e7d780(DAT_023b2d70);
      uVar14 = FUN_00e83da0();
      FUN_00c8e690();
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      lVar19 = DAT_028acf48;
      if ((DAT_028acf48 != local_68) && (DAT_028acf48 = local_68, lVar19 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        if (DAT_028acf50 == '\0') {
          DAT_028acf50 = '\x01';
          FUN_00e8cb90();
        }
        if (local_68 != 0 && lVar19 == local_68) {
          FUN_00d50b20();
        }
      }
      if (0 < (int)uVar13) {
        uVar2 = *(ulonglong *)(DAT_028acf48 + 0x10);
        uVar15 = (ulonglong)uVar13;
        if ((uVar13 < 4) || ((uVar2 < uVar14 + uVar15 * 4 && (uVar14 < uVar15 * 4 + uVar2)))) {
          uVar20 = 0;
        }
        else {
          uVar20 = (ulonglong)(uVar13 & 0xfffffffc);
          uVar16 = (uVar20 - 4 >> 2) + 1;
          if (uVar20 - 4 == 0) {
            lVar19 = 0;
          }
          else {
            lVar17 = -(uVar16 & 0xfffffffffffffffe);
            lVar19 = 0;
            do {
              lVar1 = uVar14 + lVar19 * 4;
              uVar21 = *(undefined4 *)(lVar1 + 4);
              uVar12 = *(undefined4 *)(lVar1 + 0xc);
              local_48._0_8_ = _powf();
              local_48._8_4_ = extraout_XMM0_Dc;
              local_48._12_4_ = extraout_XMM0_Dd;
              uVar3 = _powf(uVar21);
              auVar22._8_4_ = extraout_XMM0_Dc_00;
              auVar22._0_8_ = uVar3;
              auVar22._12_4_ = extraout_XMM0_Dd_00;
              auVar22 = insertps(local_48,auVar22,0x10);
              uVar3 = _powf(*(undefined4 *)(uVar14 + 8 + lVar19 * 4));
              auVar4._8_4_ = extraout_XMM0_Dc_01;
              auVar4._0_8_ = uVar3;
              auVar4._12_4_ = extraout_XMM0_Dd_01;
              auVar22 = insertps(auVar22,auVar4,0x20);
              uVar3 = _powf(uVar12);
              auVar5._8_4_ = extraout_XMM0_Dc_02;
              auVar5._0_8_ = uVar3;
              auVar5._12_4_ = extraout_XMM0_Dd_02;
              auVar22 = insertps(auVar22,auVar5,0x30);
              *(undefined1 (*) [16])(uVar2 + lVar19 * 4) = auVar22;
              lVar1 = uVar14 + 0x10 + lVar19 * 4;
              uVar21 = *(undefined4 *)(lVar1 + 4);
              uVar12 = *(undefined4 *)(lVar1 + 0xc);
              local_48._0_8_ = _powf();
              local_48._8_4_ = extraout_XMM0_Dc_03;
              local_48._12_4_ = extraout_XMM0_Dd_03;
              uVar3 = _powf(uVar21);
              auVar6._8_4_ = extraout_XMM0_Dc_04;
              auVar6._0_8_ = uVar3;
              auVar6._12_4_ = extraout_XMM0_Dd_04;
              auVar22 = insertps(local_48,auVar6,0x10);
              uVar3 = _powf(*(undefined4 *)(uVar14 + 0x18 + lVar19 * 4));
              auVar7._8_4_ = extraout_XMM0_Dc_05;
              auVar7._0_8_ = uVar3;
              auVar7._12_4_ = extraout_XMM0_Dd_05;
              auVar22 = insertps(auVar22,auVar7,0x20);
              uVar3 = _powf(uVar12);
              auVar8._8_4_ = extraout_XMM0_Dc_06;
              auVar8._0_8_ = uVar3;
              auVar8._12_4_ = extraout_XMM0_Dd_06;
              auVar22 = insertps(auVar22,auVar8,0x30);
              *(undefined1 (*) [16])(uVar2 + 0x10 + lVar19 * 4) = auVar22;
              lVar19 = lVar19 + 8;
              lVar17 = lVar17 + 2;
            } while (lVar17 != 0);
          }
          if ((uVar16 & 1) != 0) {
            lVar17 = uVar14 + lVar19 * 4;
            uVar21 = *(undefined4 *)(lVar17 + 4);
            uVar12 = *(undefined4 *)(lVar17 + 0xc);
            local_48._0_8_ = _powf();
            local_48._8_4_ = extraout_XMM0_Dc_07;
            local_48._12_4_ = extraout_XMM0_Dd_07;
            uVar3 = _powf(uVar21);
            auVar9._8_4_ = extraout_XMM0_Dc_08;
            auVar9._0_8_ = uVar3;
            auVar9._12_4_ = extraout_XMM0_Dd_08;
            auVar22 = insertps(local_48,auVar9,0x10);
            uVar3 = _powf(*(undefined4 *)(uVar14 + 8 + lVar19 * 4));
            auVar10._8_4_ = extraout_XMM0_Dc_09;
            auVar10._0_8_ = uVar3;
            auVar10._12_4_ = extraout_XMM0_Dd_09;
            auVar22 = insertps(auVar22,auVar10,0x20);
            uVar3 = _powf(uVar12);
            auVar11._8_4_ = extraout_XMM0_Dc_10;
            auVar11._0_8_ = uVar3;
            auVar11._12_4_ = extraout_XMM0_Dd_10;
            auVar22 = insertps(auVar22,auVar11,0x30);
            *(undefined1 (*) [16])(uVar2 + lVar19 * 4) = auVar22;
          }
          if (uVar20 == uVar15) goto LAB_014ba0fe;
        }
        uVar18 = ~uVar20;
        uVar16 = uVar15 & 3;
        if ((uVar13 & 3) != 0) {
          do {
            uVar21 = _powf(*(undefined4 *)(uVar14 + uVar20 * 4));
            *(undefined4 *)(uVar2 + uVar20 * 4) = uVar21;
            uVar20 = uVar20 + 1;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        if (2 < uVar18 + uVar15) {
          do {
            uVar21 = _powf(*(undefined4 *)(uVar14 + uVar20 * 4));
            *(undefined4 *)(uVar2 + uVar20 * 4) = uVar21;
            uVar21 = _powf(*(undefined4 *)(uVar14 + 4 + uVar20 * 4));
            *(undefined4 *)(uVar2 + 4 + uVar20 * 4) = uVar21;
            uVar21 = _powf(*(undefined4 *)(uVar14 + 8 + uVar20 * 4));
            *(undefined4 *)(uVar2 + 8 + uVar20 * 4) = uVar21;
            uVar21 = _powf(*(undefined4 *)(uVar14 + 0xc + uVar20 * 4));
            *(undefined4 *)(uVar2 + 0xc + uVar20 * 4) = uVar21;
            uVar20 = uVar20 + 4;
          } while (uVar15 != uVar20);
        }
      }
LAB_014ba0fe:
      FUN_00e83070();
      DAT_028acf51 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028acf51 = '\x01';
      FUN_00e8cb70();
    }
    lVar19 = DAT_028acf48;
    *(undefined1 *)(this + 1) = 0;
    if (lVar19 == 0) {
      lVar19 = 0;
      goto LAB_014ba12f;
    }
  }
  else {
    *(undefined1 *)(this + 1) = 0;
  }
  FUN_00d50b00();
LAB_014ba12f:
  *this = lVar19;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @00aa2c58 (1112 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  undefined8 uVar1;
  string *this;
  undefined8 *arg1;
  undefined8 *this;
  
  *this = &DAT_0252a390;
  this[1] = &DAT_0252a720;
  *(undefined4 *)(this + 2) = 0xffffffff;
  this[3] = 0xffffffffffffffff;
  *(undefined2 *)(this + 4) = 0x101;
  this[0xd] = 0;
  this[0xe] = 0;
  this[0xf] = 0;
  this[0x1f] = 0;
  this[0x20] = 0;
  this[0x21] = 0;
  this[0x23] = 0;
  this[0x24] = 0;
  this[0x25] = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  this[0xb] = 0;
  this[0x16] = 0;
  this[0x15] = 0;
  this[0x14] = 0;
  this[0x13] = 0;
  this[0x12] = 0;
  this[0x11] = 0;
  this[0x1d] = 0;
  this[0x1c] = 0;
  this[0x1b] = 0;
  this[0x1a] = 0;
  this[0x19] = 0;
  this[0x18] = 0;
  this[0x2d] = 0;
  this[0x2c] = 0;
  this[0x2b] = 0;
  this[0x2a] = 0;
  this[0x29] = 0;
  this[0x28] = 0;
  this[0x37] = 0;
  this[0x36] = 0;
  this[0x35] = 0;
  this[0x34] = 0;
  this[0x33] = 0;
  this[0x32] = 0;
  this[0x31] = 0;
  this[0x30] = 0;
  this[0x2f] = 0;
  *(undefined1 *)(this + 0x38) = 0;
  *(undefined8 *)((longlong)this + 0x1c1) = 0x101000001;
  *(undefined8 *)((longlong)this + 0x1c9) = 0x100010101000101;
  this = (string *)(this + 0x1f);
  *(undefined2 *)((longlong)this + 0x1d1) = 0;
  *(undefined1 *)((longlong)this + 0x1d3) = 1;
  *(undefined2 *)(this + 0x3b) = 0;
  *(undefined4 *)((longlong)this + 0x1d4) = 0;
  *(undefined4 *)((longlong)this + 0x1da) = 1;
  FUN_00aa9d7a();
  *(undefined1 *)(this + 5) = *(undefined1 *)(arg1 + 5);
  *(undefined4 *)((longlong)this + 0x2c) = *(undefined4 *)((longlong)arg1 + 0x2c);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(arg1 + 0xc);
  std::string::operator=(this,param_2);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(arg1 + 0x10);
  *(undefined4 *)((longlong)this + 0x84) = *(undefined4 *)((longlong)arg1 + 0x84);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined4 *)(this + 0x17) = *(undefined4 *)(arg1 + 0x17);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined1 *)(this + 0x1e) = *(undefined1 *)(arg1 + 0x1e);
  std::string::operator=(this,param_2);
  *(undefined1 *)(this + 0x22) = *(undefined1 *)(arg1 + 0x22);
  *(undefined1 *)((longlong)this + 0x111) = *(undefined1 *)((longlong)arg1 + 0x111);
  if (this != arg1) {
    param_2 = (string *)arg1[0x24];
    FUN_008df080();
  }
  *(undefined1 *)(this + 0x26) = *(undefined1 *)(arg1 + 0x26);
  *(undefined1 *)((longlong)this + 0x131) = *(undefined1 *)((longlong)arg1 + 0x131);
  *(undefined4 *)((longlong)this + 0x134) = *(undefined4 *)((longlong)arg1 + 0x134);
  *(undefined4 *)(this + 0x27) = *(undefined4 *)(arg1 + 0x27);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined4 *)(this + 0x2e) = *(undefined4 *)(arg1 + 0x2e);
  *(undefined1 *)((longlong)this + 0x174) = *(undefined1 *)((longlong)arg1 + 0x174);
  if (this != arg1) {
    FUN_009bc850();
    FUN_009bc850();
    FUN_009bc850();
  }
  *(undefined8 *)((longlong)this + 0x1d6) = *(undefined8 *)((longlong)arg1 + 0x1d6);
  this[0x3a] = arg1[0x3a];
  uVar1 = arg1[0x38];
  this[0x39] = arg1[0x39];
  this[0x38] = uVar1;
  return;
}




// ==================================================
// @01432ed0 (1100 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  longlong **pplVar8;
  int iVar9;
  longlong *arg1;
  undefined4 uVar10;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80;
  longlong local_78;
  undefined8 local_70;
  int local_68;
  undefined8 *local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  uVar10 = (*DAT_02572370)();
  if (*arg1 != 0) {
    local_80 = 0;
    local_88 = 0;
    local_70 = 0xffffffff;
    local_68 = 0;
    iVar9 = 0;
    local_78 = *arg1;
    local_60 = puVar3;
    while( true ) {
      if (iVar9 != 0) {
        if (iVar9 < 1) {
          iVar9 = -iVar9;
        }
        else {
          local_70 = CONCAT44(local_70._4_4_,(int)local_70 - iVar9);
          FUN_00d23690(uVar10,iVar9);
          local_68 = local_68 + iVar9;
          iVar9 = 0;
        }
        local_70 = CONCAT44(iVar9,(int)local_70);
      }
      lVar4 = (longlong)(int)local_70;
      iVar9 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar9);
      if (*(int *)(local_78 + 0xc) <= iVar9) break;
      lVar7 = *(longlong *)(local_78 + 0x10);
      local_88 = *(undefined8 *)(lVar7 + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar7);
      pVar6 = (pthread_key_t)lVar7;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar10 = FUN_01266fe0();
      plVar1 = local_58;
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_0126ef70();
        plVar1 = local_58;
        if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_014330a0;
          }
        }
        else if (local_58 != (longlong *)0x0) {
LAB_014330a0:
          local_50 = '\0';
          local_58 = plVar1;
          cVar2 = FUN_00d24090();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar2 == '\0') {
            local_50 = '\0';
            local_58 = plVar1;
            FUN_00d21140();
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar5 = _pthread_getspecific(pVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0124e0d0();
            plVar1 = local_58;
            if (local_50 == '\0') {
              if (local_58 != (longlong *)0x0) {
                FUN_00d50b00();
                if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01433172;
              }
            }
            else if (local_58 != (longlong *)0x0) {
LAB_01433172:
              local_50 = '\0';
              local_58 = (longlong *)0x0;
              local_48 = plVar1;
              local_40 = 0xffffffff;
              local_38 = 0;
              local_40._4_4_ = 0;
              while( true ) {
                if (local_40._4_4_ != 0) {
                  if (local_40._4_4_ < 1) {
                    iVar9 = -local_40._4_4_;
                  }
                  else {
                    iVar9 = (int)local_40 - local_40._4_4_;
                    local_40 = CONCAT44(local_40._4_4_,iVar9);
                    FUN_00d23690();
                    local_38 = local_38 + local_40._4_4_;
                    iVar9 = 0;
                  }
                  local_40 = CONCAT44(iVar9,(int)local_40);
                }
                lVar4 = (longlong)(int)local_40;
                iVar9 = (int)local_40 + 1;
                local_40 = CONCAT44(local_40._4_4_,iVar9);
                if (*(int *)((longlong)local_48 + 0xc) <= iVar9) break;
                plVar1 = *(longlong **)(local_48[2] + 8 + lVar4 * 8);
                local_58 = plVar1;
                local_90 = plVar1;
                if ((DAT_026e0c38 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
                  _DAT_026e0b88 = FUN_000fddb0();
                  _DAT_026e0b70 = "MUElementAnalyzer";
                  _DAT_026e0b78 = 0x180;
                  _DAT_026e0b80 = FUN_000fdd80;
                  _DAT_026e0b90 = 0;
                  uRam00000000026e0b98 = 0;
                  _DAT_026e0ba0 = 0;
                  _DAT_026e0c18 = 0;
                  uRam00000000026e0c20 = 0;
                  _DAT_026e0c28 = 0;
                  DAT_026e0c2a = 1;
                  _DAT_026e0ba8 = 0;
                  uRam00000000026e0bb0 = 0;
                  _DAT_026e0bb8 = 0;
                  uRam00000000026e0bc0 = 0;
                  _DAT_026e0bc8 = 0;
                  uRam00000000026e0bd0 = 0;
                  _DAT_026e0bd8 = 0;
                  uRam00000000026e0be0 = 0;
                  _DAT_026e0be8 = 0;
                  uRam00000000026e0bf0 = 0;
                  _DAT_026e0bf8 = 0;
                  uRam00000000026e0c00 = 0;
                  _DAT_026e0c08 = 0;
                  uRam00000000026e0c10 = 0;
                  DAT_026e0c33 = 0;
                  _DAT_026e0c2b = 0;
                  ___cxa_guard_release();
                }
                pplVar8 = (longlong **)&DAT_02802688;
                if (plVar1 != (longlong *)0x0) {
                  (**(code **)(*plVar1 + 0x360))();
                  cVar2 = FUN_00e85ea0();
                  pplVar8 = &local_90;
                  if (cVar2 == '\0') {
                    pplVar8 = (longlong **)&DAT_02802688;
                  }
                }
                if (*pplVar8 != (longlong *)0x0) {
                  FUN_00e34b50();
                }
              }
              FUN_00713bd0();
              FUN_00d50b20();
            }
          }
          uVar10 = FUN_00d50b20();
        }
      }
      iVar9 = local_70._4_4_;
    }
    FUN_001159b0();
    if (local_60 == (undefined8 *)0x0) {
      return;
    }
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @008e8a1e (1061 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong *arg1;
  longlong this;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,8);
  iVar3 = (**(code **)(*arg1 + 0x90))();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(2,0xf);
  iVar6 = (**(code **)(*arg1 + 0x58))();
  iVar6 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6;
  for (lVar16 = *(longlong *)(this + 0x10); lVar16 != *(longlong *)(this + 0x18);
      lVar16 = lVar16 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar6 = iVar6 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(10,0xb);
  iVar4 = (**(code **)(*arg1 + 0xa8))();
  iVar5 = (**(code **)(*arg1 + 0x38))();
  iVar7 = (**(code **)(*arg1 + 0x30))(0xb,0xb);
  iVar8 = (**(code **)(*arg1 + 0xa8))();
  iVar9 = (**(code **)(*arg1 + 0x38))();
  iVar10 = (**(code **)(*arg1 + 0x30))(0xc,10);
  iVar11 = (**(code **)(*arg1 + 0x98))();
  iVar12 = (**(code **)(*arg1 + 0x38))();
  iVar13 = (**(code **)(*arg1 + 0x30))(0xd,0xb);
  iVar14 = (**(code **)(*arg1 + 0xa8))();
  iVar15 = (**(code **)(*arg1 + 0x38))();
  iVar15 = iVar1 + iVar6 + iVar2 + iVar3 + iVar4 + iVar5 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15;
  if (*(char *)(this + 0x8a) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xf,8);
    iVar2 = (**(code **)(*arg1 + 0x90))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar15 = iVar1 + iVar15 + iVar2 + iVar3;
  }
  if (*(char *)(this + 0x8b) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x10,8);
    iVar2 = (**(code **)(*arg1 + 0x90))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar15 = iVar1 + iVar15 + iVar2 + iVar3;
  }
  if (*(char *)(this + 0x8c) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x11,2);
    iVar2 = (**(code **)(*arg1 + 0x78))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar15 = iVar1 + iVar15 + iVar2 + iVar3;
  }
  if (*(char *)(this + 0x8d) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x12,2);
    iVar2 = (**(code **)(*arg1 + 0x78))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar15 = iVar1 + iVar15 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*arg1 + 0x30))(0x14,2);
  iVar2 = (**(code **)(*arg1 + 0x78))();
  iVar3 = (**(code **)(*arg1 + 0x38))();
  iVar4 = (**(code **)(*arg1 + 0x30))(0x15,2);
  iVar5 = (**(code **)(*arg1 + 0x78))();
  iVar6 = (**(code **)(*arg1 + 0x38))();
  iVar7 = (**(code **)(*arg1 + 0x40))();
  iVar8 = (**(code **)(*arg1 + 0x28))();
  *(int *)((longlong)arg1 + 0x1c) = *(int *)((longlong)arg1 + 0x1c) + -1;
  return iVar1 + iVar15 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8;
}




// ==================================================
// @014ad820 (1032 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  ulonglong uVar1;
  ulonglong uVar2;
  float *pfVar3;
  undefined1 auVar4 [12];
  bool bVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint in_ECX;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong in_RDX;
  uint uVar11;
  ulonglong uVar12;
  longlong arg1;
  longlong lVar13;
  ulonglong uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar21;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar22;
  float fVar23;
  undefined1 local_58 [16];
  longlong local_40;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  
  lVar7 = *param_4;
  if (*(int *)(lVar7 + 0xc) < 1) {
    bVar5 = false;
    local_40 = 0;
    uVar11 = in_ECX;
  }
  else {
    lVar13 = 0;
    uVar9 = (ulonglong)in_ECX;
    local_40 = 0;
    bVar5 = false;
    do {
      lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + lVar13 * 8);
      if (local_40 == lVar7) {
        if ((!bVar5) && (local_40 != 0)) {
          bVar5 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        if ((bVar5) && (local_40 != 0)) {
          FUN_00d50b20();
          bVar5 = true;
          local_40 = lVar7;
        }
        else {
          bVar5 = true;
          local_40 = lVar7;
        }
      }
      iVar6 = (int)(*(double *)(local_40 + 0x10) * param_1);
      if (((int)in_ECX < iVar6 + -5) && (iVar6 + 5 < param_3)) {
        uVar8 = (ulonglong)(iVar6 + -4);
        uVar14 = 0;
        fVar15 = *(float *)(arg1 + (longlong)(iVar6 + -5) * 4);
        fVar21 = 0.0;
        do {
          fVar22 = *(float *)(arg1 + uVar8 * 4);
          fVar23 = (float)((uint)(fVar22 - fVar15) & _DAT_02390140);
          uVar1 = uVar8 & 0xffffffff;
          if (fVar23 <= fVar21 || fVar23 <= DAT_023908ec) {
            fVar23 = fVar21;
            uVar1 = uVar14;
          }
          uVar14 = uVar1;
          uVar8 = uVar8 + 1;
          fVar15 = fVar22;
          fVar21 = fVar23;
        } while ((longlong)uVar8 < (longlong)(iVar6 + 5));
        if ((int)uVar14 != 0) {
          FUN_015c1480(1,(int)uVar14 - (int)uVar9);
          uVar9 = uVar14;
        }
      }
      lVar13 = lVar13 + 1;
      lVar7 = *param_4;
      uVar11 = (uint)uVar9;
    } while (lVar13 < *(int *)(lVar7 + 0xc));
  }
  FUN_015c1480(1,param_3 - uVar11);
  if ((int)in_ECX < param_3) {
    fVar15 = (float)param_2;
    uVar14 = (ulonglong)(int)in_ECX;
    uVar8 = (ulonglong)param_3;
    uVar9 = uVar8 - uVar14;
    if (3 < uVar9) {
      uVar1 = in_RDX + uVar14 * 4;
      uVar2 = arg1 + uVar14 * 4;
      if ((arg1 + uVar8 * 4 <= uVar1) || (in_RDX + uVar8 * 4 <= uVar2)) {
        uVar10 = uVar9 & 0xfffffffffffffffc;
        uVar14 = uVar14 + uVar10;
        uVar12 = 0;
        do {
          auVar16._4_4_ = fVar15;
          auVar16._0_4_ = fVar15;
          auVar16._8_4_ = fVar15;
          auVar16._12_4_ = fVar15;
          auVar16 = divps(auVar16,*(undefined1 (*) [16])(uVar2 + uVar12 * 4));
          fVar21 = auVar16._4_4_ * _UNK_02394164;
          auVar18._8_4_ = auVar16._8_4_ * _UNK_02394168;
          auVar18._12_4_ = auVar16._12_4_ * _UNK_0239416c;
          local_58._0_8_ = _logf();
          local_58._8_8_ = extraout_XMM0_Qb;
          auVar17._0_8_ = _logf();
          auVar17._8_8_ = extraout_XMM0_Qb_00;
          auVar16 = insertps(local_58,auVar17,0x10);
          auVar4._4_8_ = extraout_XMM0_Qb_00;
          auVar4._0_4_ = fVar21;
          auVar18._0_8_ = auVar4._0_8_ << 0x20;
          auVar19._0_8_ = _logf(auVar18._8_8_);
          auVar19._8_8_ = extraout_XMM0_Qb_01;
          auVar16 = insertps(auVar16,auVar19,0x20);
          auVar20._0_8_ = _logf();
          auVar20._8_8_ = extraout_XMM0_Qb_02;
          auVar16 = insertps(auVar16,auVar20,0x30);
          fVar21 = auVar16._4_4_ * _UNK_02394174;
          fVar22 = auVar16._8_4_ * _UNK_02394178;
          fVar23 = auVar16._12_4_ * _UNK_0239417c;
          pfVar3 = (float *)(uVar1 + uVar12 * 4);
          *pfVar3 = auVar16._0_4_ * _DAT_02394170;
          pfVar3[1] = fVar21;
          pfVar3[2] = fVar22;
          pfVar3[3] = fVar23;
          uVar12 = uVar12 + 4;
        } while (uVar10 != uVar12);
        if (uVar9 == uVar10) goto LAB_014adc2d;
      }
    }
    uVar9 = ~uVar14;
    if ((param_3 - (int)uVar14 & 1U) != 0) {
      fVar21 = (float)_logf((fVar15 / *(float *)(arg1 + uVar14 * 4)) * DAT_02394204);
      *(float *)(in_RDX + uVar14 * 4) = fVar21 * DAT_02394208;
      uVar14 = uVar14 + 1;
    }
    if (uVar9 + uVar8 != 0) {
      do {
        fVar21 = (float)_logf((fVar15 / *(float *)(arg1 + uVar14 * 4)) * DAT_02394204);
        *(float *)(in_RDX + uVar14 * 4) = fVar21 * DAT_02394208;
        fVar21 = (float)_logf((fVar15 / *(float *)(arg1 + 4 + uVar14 * 4)) * DAT_02394204);
        *(float *)(in_RDX + 4 + uVar14 * 4) = fVar21 * DAT_02394208;
        uVar14 = uVar14 + 2;
      } while (uVar8 != uVar14);
    }
  }
LAB_014adc2d:
  if ((bVar5) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0149b7e0 (1030 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  void *in_RCX;
  void *pvVar4;
  longlong in_RDX;
  longlong *arg1;
  uint in_R8D;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  double dVar11;
  float local_70;
  longlong local_68;
  longlong local_48;
  char local_40;
  
  if ((*arg1 == 0) && (in_RDX == 0)) {
    return;
  }
  uVar5 = in_R8D;
  if (*arg1 != 0) {
    FUN_00d216c0();
  }
  dVar11 = DAT_0238fee8 / param_1;
  local_68 = in_RDX;
  if (in_RDX == 0) {
    local_68 = FUN_00e83010();
  }
  fVar10 = (float)dVar11;
  pfVar3 = (float *)FUN_00e83010();
  _memcpy(in_RCX,(void *)((longlong)(int)in_R8D << 2),uVar5);
  pvVar4 = (void *)((longlong)&MACH_HEADER.magic + 1);
  FUN_015c1480(DAT_023908d8,in_R8D);
  local_70 = *pfVar3;
  bVar2 = local_70 <= param_3;
  if ((int)in_R8D < 1) {
    iVar7 = 0;
LAB_0149b926:
    if (!bVar2) goto LAB_0149bbcd;
    if (iVar7 < (int)in_R8D) goto LAB_0149b93f;
  }
  else {
    _memset_pattern16(pvVar4,(void *)((ulonglong)in_R8D * 4),uVar5);
    if (in_R8D != 1) {
      dVar11 = (double)param_3 * DAT_024110e8;
      iVar8 = 0;
      uVar6 = 1;
      iVar7 = 0;
      do {
        fVar1 = pfVar3[uVar6];
        if (fVar1 <= param_3 && !(bool)(local_70 <= param_3 | bVar2)) {
          bVar2 = true;
          iVar7 = (int)uVar6;
        }
        iVar9 = iVar8;
        if (param_3 < fVar1) {
          iVar9 = (int)uVar6;
        }
        if (param_3 < local_70) {
          iVar9 = iVar8;
        }
        iVar8 = iVar9;
        if ((bVar2) && (dVar11 < (double)fVar1)) {
          if ((int)((double)param_2 * param_1) < iVar8 - iVar7) {
            if (iVar7 < iVar8) {
              ___bzero(local_68);
            }
            if (*arg1 == 0) {
              bVar2 = false;
              goto LAB_0149ba12;
            }
            FUN_01432380((double)((float)iVar7 * fVar10),(double)((float)iVar8 * fVar10));
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            FUN_00d21140();
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          bVar2 = false;
        }
LAB_0149ba12:
        uVar6 = uVar6 + 1;
        local_70 = fVar1;
      } while (in_R8D != uVar6);
      goto LAB_0149b926;
    }
    iVar7 = 0;
    if (param_3 < local_70) goto LAB_0149bbcd;
LAB_0149b93f:
    ___bzero(local_68);
  }
  if (*arg1 != 0) {
    FUN_01432380((double)((float)iVar7 * fVar10),(double)((float)(int)in_R8D * fVar10));
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_00d21140();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_0149bbcd:
  FUN_00e83070();
  if (in_RDX == 0) {
    FUN_00e83070();
  }
  return;
}




// ==================================================
// @011410f0 (1009 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *this;
  
  FUN_00d4ff40();
  *(undefined8 *)((longlong)this + 0x2f) = 0;
  *(undefined8 *)((longlong)this + 0x37) = 0;
  this[4] = 0;
  this[5] = 0;
  this[8] = 0;
  this[9] = 0;
  *(undefined8 *)((longlong)this + 0x49) = 0;
  *(undefined8 *)((longlong)this + 0x51) = 0;
  *this = &DAT_025e5748;
  this[2] = &DAT_025e5b00;
  this[3] = &DAT_025e5b38;
  this[0xc] = 0;
  this[0xd] = 0;
  this[0xe] = 0;
  this[0xf] = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x11] = 0;
  this[0x12] = 0;
  this[0x13] = 0;
  this[0x14] = 0;
  this[0x15] = 0;
  this[0x16] = 0;
  this[0x17] = 0;
  this[0x18] = 0;
  this[0x19] = 0;
  this[0x1a] = 0;
  iVar2 = DAT_02802630;
  if (DAT_02802630 < 2) {
    this[0x1b] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    this[0x1a] = puVar3;
    iVar2 = DAT_02802630;
    this[0x1b] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      this[0x1b] = puVar3;
      iVar2 = DAT_02802630;
    }
  }
  *(undefined2 *)(this + 0x1c) = 0;
  this[0x28] = 0;
  *(undefined4 *)(this + 0x29) = 0;
  *(undefined8 *)((longlong)this + 0xe4) = 0;
  *(undefined8 *)((longlong)this + 0xec) = 0;
  *(undefined8 *)((longlong)this + 0xf4) = 0;
  *(undefined8 *)((longlong)this + 0xfc) = 0;
  *(undefined8 *)((longlong)this + 0x104) = 0;
  *(undefined8 *)((longlong)this + 0x10c) = 0;
  *(undefined8 *)((longlong)this + 0x114) = 0;
  *(undefined8 *)((longlong)this + 0x11c) = 0;
  *(undefined8 *)((longlong)this + 0x124) = 0;
  *(undefined8 *)((longlong)this + 300) = 0;
  *(undefined8 *)((longlong)this + 0x131) = 0;
  this[0x2a] = 0;
  this[0x2b] = 0;
  this[0x2c] = 0;
  if (iVar2 < 2) {
    this[0x2d] = 0;
    this[0x2e] = 0;
LAB_011413f7:
    this[0x2f] = 0;
    this[0x30] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    this[0x2c] = puVar3;
    iVar2 = DAT_02802630;
    this[0x2d] = 0;
    if (iVar2 < 2) {
      this[0x2e] = 0;
      this[0x2f] = 0;
LAB_0114140d:
      this[0x30] = 0;
    }
    else {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      this[0x2d] = puVar3;
      iVar2 = DAT_02802630;
      this[0x2e] = 0;
      if (iVar2 < 2) goto LAB_011413f7;
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      this[0x2e] = puVar3;
      iVar2 = DAT_02802630;
      this[0x2f] = 0;
      if (iVar2 < 2) goto LAB_0114140d;
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      this[0x2f] = puVar3;
      iVar2 = DAT_02802630;
      this[0x30] = 0;
      if (1 < iVar2) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        (*DAT_02572370)();
        this[0x30] = puVar3;
        iVar2 = DAT_02802630;
        this[0x31] = 0;
        if (1 < iVar2) {
          puVar3 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar3 = &DAT_02572358;
          (*DAT_02572370)();
          this[0x31] = puVar3;
        }
        goto LAB_01141423;
      }
    }
  }
  this[0x31] = 0;
LAB_01141423:
  this[0x32] = 0;
  *(undefined1 *)(this + 0x33) = 0;
  *(undefined8 *)((longlong)this + 0x19c) = 0;
  this[0x35] = 0;
  this[0x36] = 0;
  this[0x37] = 0;
  this[0x38] = 0;
  this[0x39] = 0;
  this[0x3a] = 0;
  *(undefined4 *)(this + 0x3b) = 0;
  this[0x3c] = 0;
  this[0x3d] = 0;
  this[0x3e] = 0;
  this[0x3f] = 0;
  this[0x40] = 0;
  this[0x41] = 0;
  this[0x42] = 0;
  this[0x43] = 0;
  this[0x44] = 0;
  this[0x45] = 0;
  *(undefined4 *)(this + 0x46) = 0;
  this[0x47] = 0;
  this[0x48] = 0;
  this[0x49] = 0;
  this[0x4a] = 0;
  this[0x4b] = 0;
  this[0x4c] = 0;
  this[0x4d] = 0;
  this[0x4e] = 0;
  this[0x4f] = 0;
  this[0x50] = 0;
  this[0x51] = 0;
  this[0x52] = 0;
  this[0x53] = 0;
  this[0x54] = 0;
  this[0x55] = 0;
  this[0x56] = 0;
  this[0x57] = 0;
  return;
}




// ==================================================
// @00a98ec4 (987 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  undefined8 uVar1;
  string *this;
  undefined8 *arg1;
  undefined8 *this;
  
  *this = &DAT_0252a098;
  this[1] = &DAT_0252a720;
  *(undefined4 *)(this + 2) = 0xffffffff;
  this[3] = 0xffffffffffffffff;
  *(undefined2 *)(this + 4) = 0x101;
  this[0x2a] = 0;
  this[0x2b] = 0;
  this[0x2c] = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  this[0xb] = 0;
  this[0xc] = 0;
  this[0xd] = 0;
  this[0xe] = 0;
  this[0xf] = 0;
  this[0x10] = 0;
  this[0x11] = 0;
  this[0x18] = 0;
  this[0x17] = 0;
  this[0x16] = 0;
  this[0x15] = 0;
  this[0x14] = 0;
  this[0x13] = 0;
  this[0x28] = 0;
  this[0x27] = 0;
  this[0x26] = 0;
  this[0x25] = 0;
  this[0x24] = 0;
  this[0x23] = 0;
  this[0x22] = 0;
  this[0x21] = 0;
  this[0x20] = 0;
  this[0x1f] = 0;
  this[0x1e] = 0;
  this[0x1d] = 0;
  this[0x1c] = 0;
  this[0x1b] = 0;
  this[0x1a] = 0;
  *(undefined1 *)(this + 0x37) = 0;
  this[0x36] = 0;
  this[0x35] = 0;
  this[0x34] = 0;
  this[0x33] = 0;
  this[0x32] = 0;
  this[0x31] = 0;
  this[0x30] = 0;
  this[0x2f] = 0;
  this[0x2e] = 0;
  *(undefined8 *)((longlong)this + 0x1b9) = 0x100010001000001;
  *(undefined8 *)((longlong)this + 0x1c1) = 0x10100010001;
  this = (string *)(this + 0x1d);
  *(undefined4 *)((longlong)this + 0x1c9) = 0x100;
  *(undefined1 *)((longlong)this + 0x1cd) = 0;
  FUN_00aa9d7a();
  *(undefined1 *)(this + 5) = *(undefined1 *)(arg1 + 5);
  *(undefined4 *)((longlong)this + 0x2c) = *(undefined4 *)((longlong)arg1 + 0x2c);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined4 *)(this + 0x12) = *(undefined4 *)(arg1 + 0x12);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined4 *)(this + 0x19) = *(undefined4 *)(arg1 + 0x19);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined4 *)(this + 0x29) = *(undefined4 *)(arg1 + 0x29);
  std::string::operator=(this,param_2);
  *(undefined4 *)(this + 0x2d) = *(undefined4 *)(arg1 + 0x2d);
  if (this != arg1) {
    FUN_009bc850();
    FUN_009bc850();
    FUN_009bc850();
  }
  *(undefined8 *)((longlong)this + 0x1c6) = *(undefined8 *)((longlong)arg1 + 0x1c6);
  uVar1 = arg1[0x37];
  this[0x38] = arg1[0x38];
  this[0x37] = uVar1;
  return;
}




// ==================================================
// @008f8d84 (981 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  undefined8 uVar1;
  string *this;
  string *psVar2;
  undefined8 *arg1;
  undefined8 *this;
  undefined4 uVar3;
  
  *this = &DAT_0251c5a8;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  this[0xd] = 0;
  this[0xe] = 0;
  this[0xf] = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  this[0x11] = &DAT_0251c338;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x12] = 0;
  this[0x13] = 0;
  this[0x14] = 0;
  this[0x15] = 0;
  this[0x16] = 0;
  this[0x17] = 0;
  *(undefined4 *)(this + 0x26) = 0;
  this[0x25] = 0;
  this[0x24] = 0;
  this[0x23] = 0;
  this[0x22] = 0;
  this[0x21] = 0;
  this[0x20] = 0;
  this[0x1f] = 0;
  this[0x1e] = 0;
  this[0x1d] = 0;
  this[0x1c] = 0;
  this[0x1b] = 0;
  this[0x1a] = 0;
  this[0x19] = 0;
  this[0x27] = 0;
  this[0x28] = 0;
  this[0x29] = 0;
  this[0x2a] = 0;
  this[0x2b] = 0;
  this[0x2c] = 0;
  this[0x2d] = 0;
  this[0x2e] = 0;
  this[0x2f] = 0;
  this[0x30] = 0;
  this[0x31] = 0;
  *(undefined1 *)(this + 0x32) = 1;
  this[0x37] = 0;
  this[0x36] = 0;
  this[0x35] = 0;
  psVar2 = (string *)&DAT_0251c3a0;
  this[0x38] = &DAT_0251c3a0;
  this[0x3f] = 0;
  this[0x3e] = 0;
  this[0x3d] = 0;
  this[0x3c] = 0;
  this[0x3b] = 0;
  this[0x3a] = 0;
  this[0x39] = 0;
  this[0x40] = 0x100000001;
  this[0x45] = 0;
  this[0x44] = 0;
  this[0x43] = 0;
  this[0x42] = 0;
  this[0x41] = 0;
  *(undefined2 *)(this + 0x46) = 1;
  *(undefined1 *)((longlong)this + 0x232) = 0;
  *(undefined4 *)((longlong)this + 0x233) = 0x1010101;
  *(undefined2 *)((longlong)this + 0x237) = 0;
  *(undefined1 *)((longlong)this + 0x239) = 0;
  *(undefined8 *)((longlong)this + 0x26f) = 0;
  this[0x4d] = 0;
  this[0x4c] = 0;
  this[0x4b] = 0;
  this[0x4a] = 0;
  this[0x49] = 0;
  this[0x48] = 0;
  this = (string *)0x100010000010001;
  *(undefined8 *)((longlong)this + 0x277) = 0x100010000010001;
  *(undefined4 *)((longlong)this + 0x27f) = 0;
  if (this != arg1) {
    psVar2 = (string *)arg1[2];
    FUN_0090c478();
  }
  *(undefined1 *)(this + 4) = *(undefined1 *)(arg1 + 4);
  *(undefined1 *)((longlong)this + 0x21) = *(undefined1 *)((longlong)arg1 + 0x21);
  *(undefined4 *)((longlong)this + 0x24) = *(undefined4 *)((longlong)arg1 + 0x24);
  std::string::operator=(this,psVar2);
  std::string::operator=(this,psVar2);
  uVar1 = arg1[0xc];
  this[0xb] = arg1[0xb];
  this[0xc] = uVar1;
  std::string::operator=(this,psVar2);
  *(undefined1 *)(this + 0x10) = *(undefined1 *)(arg1 + 0x10);
  *(undefined4 *)((longlong)this + 0x84) = *(undefined4 *)((longlong)arg1 + 0x84);
  uVar3 = FUN_008f0a5a();
  *(undefined4 *)(this + 0x33) = *(undefined4 *)(arg1 + 0x33);
  *(undefined1 *)((longlong)this + 0x19c) = *(undefined1 *)((longlong)arg1 + 0x19c);
  this[0x34] = arg1[0x34];
  if (this != arg1) {
    FUN_008df080(uVar3,arg1[0x36]);
  }
  uVar3 = FUN_008f1a3c();
  if (this != arg1) {
    uVar3 = FUN_0090c6d6(uVar3,arg1[0x49]);
    FUN_008d3508(uVar3,arg1[0x4c]);
  }
  *(undefined4 *)((longlong)this + 0x27f) = *(undefined4 *)((longlong)arg1 + 0x27f);
  uVar1 = arg1[0x4e];
  this[0x4f] = arg1[0x4f];
  this[0x4e] = uVar1;
  return;
}




// ==================================================
// @008f43ce (965 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  longlong *arg1;
  longlong this;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int local_3c;
  undefined4 local_38;
  short local_32;
  
  FUN_0088d1d0();
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar6 = this + 0x70;
  lVar7 = this + 0x68;
  lVar8 = this + 0x50;
  lVar9 = this + 0x38;
  lVar10 = this + 0x20;
  lVar11 = this + 8;
  while( true ) {
    psVar5 = &local_32;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar5,&local_3c,param_3,param_4,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,uVar12
                       ,uVar13,uVar14);
    if (local_3c == 0) break;
    switch(local_32) {
    case 1:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(undefined1 *)(this + 0xbe) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 2:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(undefined1 *)(this + 0xbf) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 3:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(undefined1 *)(this + 0xc0) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 4:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(undefined1 *)(this + 0xc1) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 5:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(undefined1 *)(this + 0xc2) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 6:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(undefined1 *)(this + 0xc3) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 7:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(undefined1 *)(this + 0xc4) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 8:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(undefined1 *)(this + 0xc5) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x14:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(undefined4 *)(this + 0xb8) = local_38;
        *(undefined1 *)(this + 0xc6) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0x15:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(undefined1 *)(this + 199) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0x16:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(undefined1 *)(this + 200) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    iVar4 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar3 + iVar2 + iVar1 + iVar4;
  }
  iVar3 = (**(code **)(*arg1 + 0xd0))();
  if ((uVar12 & 1) != 0) {
    operator_delete(psVar5);
  }
  *(int *)(arg1 + 3) = (int)arg1[3] + -1;
  return iVar3 + iVar2 + iVar1;
}




// ==================================================
// @014b4e50 (955 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong in_RCX;
  ulonglong uVar10;
  longlong *plVar11;
  uint unaff_ESI;
  float *this;
  ulonglong uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((0 < (int)unaff_ESI) && (0.0 < param_1)) {
    fVar16 = DAT_02390124 / param_1;
    iVar3 = (int)((float)(~-(uint)(param_1 < DAT_02390124) & (uint)param_1 |
                         -(uint)(param_1 < DAT_02390124) & (uint)fVar16) + DAT_0239011c);
    if ((iVar3 <= (int)unaff_ESI) || (param_1 < DAT_02390124)) {
      uVar8 = in_RCX;
      lVar4 = FUN_00aea550();
      uVar12 = (ulonglong)*(int *)(lVar4 + 0xc);
      iVar1 = *(int *)(lVar4 + 8);
      lVar13 = (longlong)iVar1;
      lVar2 = *(longlong *)(lVar4 + 0x10);
      plVar11 = (longlong *)*param_2;
      pvVar5 = _pthread_getspecific((pthread_key_t)uVar8);
      if (pvVar5 != (void *)0x0) {
        plVar11 = (longlong *)*param_2;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      uVar10 = in_RCX & 0xffffffff;
      (**(code **)(*plVar11 + 0x468))(uVar10,0,iVar1);
      uVar8 = lVar13 + in_RCX;
      if (iVar3 == 1) {
        lVar6 = 0;
        do {
          if (in_RCX == uVar8) {
            plVar11 = (longlong *)*param_2;
            pvVar5 = _pthread_getspecific((pthread_key_t)uVar10);
            if (pvVar5 != (void *)0x0) {
              plVar11 = (longlong *)*param_2;
              lVar7 = FUN_00e8b990();
              if (lVar7 != 0) {
                plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              }
            }
            (**(code **)(*plVar11 + 0x468))(in_RCX & 0xffffffff,0,iVar1);
            uVar8 = lVar13 + in_RCX;
          }
          uVar10 = in_RCX & uVar12;
          this[lVar6] = *(float *)(lVar2 + uVar10 * 4);
          in_RCX = in_RCX + 1;
          lVar6 = lVar6 + 1;
        } while (unaff_ESI != (uint)lVar6);
      }
      else if (DAT_02390124 <= param_1) {
        do {
          uVar10 = (ulonglong)unaff_ESI;
          fVar15 = 0.0;
          iVar9 = iVar3;
          do {
            if (in_RCX == uVar8) {
              plVar11 = (longlong *)*param_2;
              pvVar5 = _pthread_getspecific((pthread_key_t)uVar10);
              if (pvVar5 != (void *)0x0) {
                plVar11 = (longlong *)*param_2;
                lVar6 = FUN_00e8b990();
                if (lVar6 != 0) {
                  plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
                }
              }
              (**(code **)(*plVar11 + 0x468))(in_RCX & 0xffffffff,0,iVar1);
              uVar8 = lVar13 + in_RCX;
            }
            uVar10 = in_RCX & uVar12;
            fVar15 = fVar15 + *(float *)(lVar2 + uVar10 * 4);
            in_RCX = in_RCX + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          *this = fVar15;
          this = this + 1;
          unaff_ESI = unaff_ESI - 1;
        } while (unaff_ESI != 0);
      }
      else {
        fVar15 = *(float *)(lVar2 + (uVar12 & in_RCX) * 4);
        in_RCX = in_RCX + 1;
        fVar14 = 0.0;
        lVar6 = 0;
        iVar9 = 0;
        fVar18 = fVar15;
        do {
          fVar17 = fVar18;
          if (iVar9 == 0) {
            if (in_RCX == uVar8) {
              plVar11 = (longlong *)*param_2;
              pvVar5 = _pthread_getspecific(0);
              if (pvVar5 != (void *)0x0) {
                plVar11 = (longlong *)*param_2;
                lVar7 = FUN_00e8b990();
                if (lVar7 != 0) {
                  plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                }
              }
              (**(code **)(*plVar11 + 0x468))(in_RCX & 0xffffffff,0,iVar1);
              uVar8 = in_RCX + lVar13;
            }
            fVar17 = *(float *)(lVar2 + (in_RCX & uVar12) * 4);
            in_RCX = in_RCX + 1;
            fVar14 = (fVar17 - fVar18) * param_1;
            fVar15 = fVar18;
            iVar9 = iVar3;
          }
          iVar9 = iVar9 + -1;
          this[lVar6] = fVar15;
          fVar15 = fVar15 + fVar14;
          lVar6 = lVar6 + 1;
          fVar18 = fVar17;
        } while (unaff_ESI != (uint)lVar6);
      }
      if ((param_3 != '\0') && (DAT_02390124 < param_1)) {
        (**(code **)(DAT_02786500 + 0x20))(fVar16);
      }
      if (lVar4 != 0) {
        FUN_00aea5b0();
        return;
      }
    }
  }
  return;
}




// ==================================================
// @014b2ee0 (949 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong in_RCX;
  longlong *plVar6;
  int iVar7;
  longlong in_RDX;
  longlong arg1;
  ulonglong uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  float *local_res8;
  float *local_res10;
  
  iVar7 = 0;
  fVar14 = 0.0;
  fVar10 = DAT_0240e35c;
  do {
    plVar6 = &DAT_02802ee0;
    if (iVar7 == 6) {
      plVar6 = &DAT_02802ee8;
    }
    if (iVar7 == 0) {
      plVar6 = &DAT_02802ed8;
    }
    lVar1 = *plVar6;
    dVar15 = (double)((float)(1 << (0xcU - (char)iVar7 & 0x1f)) * fVar10) * param_2;
    dVar12 = dVar15 * _DAT_0240e408 * DAT_023942d0 + param_1;
    dVar16 = 0.0;
    if (0.0 <= dVar12) {
      dVar16 = dVar12;
    }
    uVar2 = (uint)(dVar15 + DAT_0240de78);
    uVar9 = 0;
    if (-1 < (int)uVar2) {
      uVar9 = uVar2;
    }
    dVar13 = (double)___bzero();
    dVar12 = DAT_023942d0;
    if (uVar9 == 1) {
      lVar3 = 0;
      do {
        dVar13 = dVar16 + dVar12;
        if (in_RCX <= (longlong)dVar13) break;
        *(undefined4 *)(param_4 + lVar3 * 4) = *(undefined4 *)(in_RDX + (longlong)dVar13 * 4);
        dVar13 = dVar16 + dVar15 + dVar12;
        if (in_RCX <= (longlong)dVar13) break;
        uVar9 = *(uint *)(in_RDX + (longlong)dVar13 * 4);
        dVar13 = (double)(ulonglong)uVar9;
        *(uint *)(param_4 + 4 + lVar3 * 4) = uVar9;
        dVar16 = dVar16 + dVar15 + dVar15;
        lVar3 = lVar3 + 2;
      } while (lVar3 != 0x100);
    }
    else if ((int)uVar2 < 1) {
      lVar3 = (longlong)dVar16;
      if (lVar3 <= in_RCX + -2) {
        uVar8 = 0;
        do {
          dVar13 = (double)(ulonglong)(uint)(float)(dVar16 - (double)lVar3);
          fVar10 = *(float *)(in_RDX + lVar3 * 4);
          *(float *)(param_4 + uVar8 * 4) =
               (*(float *)(in_RDX + 4 + lVar3 * 4) - fVar10) * (float)(dVar16 - (double)lVar3) +
               fVar10;
          if (0xfe < uVar8) break;
          dVar16 = dVar16 + dVar15;
          uVar8 = uVar8 + 1;
          lVar3 = (longlong)dVar16;
        } while (lVar3 <= in_RCX + -2);
      }
    }
    else {
      lVar3 = (longlong)dVar16;
      if (lVar3 <= (longlong)(~(ulonglong)uVar9 + in_RCX)) {
        fVar10 = DAT_02390124 / (float)(int)uVar9;
        dVar13 = (double)(ulonglong)(uint)fVar10;
        uVar8 = 0;
        do {
          fVar11 = 0.0;
          if (2 < uVar9 - 1) {
            fVar11 = 0.0;
            iVar5 = -(uVar9 & 0xfffffffc);
            do {
              fVar11 = fVar11 + *(float *)(in_RDX + lVar3 * 4) + *(float *)(in_RDX + 4 + lVar3 * 4)
                       + *(float *)(in_RDX + 8 + lVar3 * 4) + *(float *)(in_RDX + 0xc + lVar3 * 4);
              lVar3 = lVar3 + 4;
              iVar5 = iVar5 + 4;
            } while (iVar5 != 0);
          }
          if ((uVar9 & 3) != 0) {
            lVar4 = 0;
            do {
              fVar11 = fVar11 + *(float *)(in_RDX + lVar3 * 4 + lVar4 * 4);
              lVar4 = lVar4 + 1;
            } while ((uVar9 & 3) != (uint)lVar4);
          }
          *(float *)(param_4 + uVar8 * 4) = fVar11 * fVar10;
          if (0xfe < uVar8) break;
          dVar16 = dVar16 + dVar15;
          uVar8 = uVar8 + 1;
          lVar3 = (longlong)dVar16;
        } while (lVar3 <= (longlong)(~(ulonglong)uVar9 + in_RCX));
      }
    }
    FUN_00e3daa0(dVar13,local_res8);
    lVar3 = DAT_02802ed0;
    fVar10 = DAT_0240e35c;
    fVar11 = *local_res8 * DAT_0240e35c;
    lVar4 = 1;
    do {
      *(float *)(arg1 + -4 + lVar4 * 4) =
           local_res8[*(int *)(lVar3 + -4 + lVar4 * 4)] * *(float *)(lVar1 + -4 + lVar4 * 4) +
           *(float *)(arg1 + -4 + lVar4 * 4);
      *(float *)(arg1 + lVar4 * 4) =
           local_res8[*(int *)(lVar3 + lVar4 * 4)] * *(float *)(lVar1 + lVar4 * 4) +
           *(float *)(arg1 + lVar4 * 4);
      lVar4 = lVar4 + 2;
    } while (lVar4 != 0x79);
    fVar14 = fVar14 + fVar11;
    iVar7 = iVar7 + 1;
    arg1 = arg1 + 0xf0;
    if (iVar7 == 7) {
      if (local_res10 != (float *)0x0) {
        *local_res10 = fVar14 / DAT_0241c3ec;
      }
      return;
    }
  } while( true );
}




// ==================================================
// @007649a0 (934 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *arg1;
  longlong this;
  undefined4 uVar5;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  FUN_00d403d0();
  if (this != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027295a0;
  if (DAT_027295a0 != 0) {
    FUN_00d50b00();
  }
  local_b0 = lVar1;
  local_a8 = '\x01';
  local_a0 = *arg1;
  local_98 = '\0';
  FUN_00d41430(&local_a0,&local_b0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  if (this != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027ebc70;
  if (DAT_027ebc70 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar1;
  local_88 = '\x01';
  local_80 = *arg1;
  local_78 = '\0';
  FUN_00d41430(&local_80,&local_90);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (*param_2 != 0) {
    uVar5 = FUN_00e33de0();
    lVar1 = DAT_0270b920;
    local_70 = *param_2;
    local_68 = '\0';
    if (DAT_0270b920 != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_40 = lVar1;
    local_38 = '\0';
    FUN_00ca0840(uVar5,&local_40);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar4 = (longlong *)*arg1;
  if ((DAT_026e0c38 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026e0b88 = FUN_000fddb0();
    _DAT_026e0b70 = "MUElementAnalyzer";
    _DAT_026e0b78 = 0x180;
    _DAT_026e0b80 = FUN_000fdd80;
    _DAT_026e0b90 = 0;
    uRam00000000026e0b98 = 0;
    _DAT_026e0ba0 = 0;
    _DAT_026e0c18 = 0;
    uRam00000000026e0c20 = 0;
    _DAT_026e0c28 = 0;
    DAT_026e0c2a = 1;
    _DAT_026e0ba8 = 0;
    uRam00000000026e0bb0 = 0;
    _DAT_026e0bb8 = 0;
    uRam00000000026e0bc0 = 0;
    _DAT_026e0bc8 = 0;
    uRam00000000026e0bd0 = 0;
    _DAT_026e0bd8 = 0;
    uRam00000000026e0be0 = 0;
    _DAT_026e0be8 = 0;
    uRam00000000026e0bf0 = 0;
    _DAT_026e0bf8 = 0;
    uRam00000000026e0c00 = 0;
    _DAT_026e0c08 = 0;
    uRam00000000026e0c10 = 0;
    DAT_026e0c33 = 0;
    _DAT_026e0c2b = 0;
    ___cxa_guard_release();
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = arg1;
    if (cVar2 != '\0') goto LAB_00764c2b;
  }
  plVar4 = &DAT_02802688;
LAB_00764c2b:
  if (*plVar4 != 0) {
    FUN_0076f320();
  }
  local_40 = *arg1;
  local_38 = '\0';
  FUN_00d21140();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00b25f20 (916 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  int iVar1;
  longlong *this;
  
  if (this != (longlong *)0x0) {
    FUN_00d50b00();
    FUN_00d50b00();
  }
  (**(code **)(*this + 0x568))();
  if (this != (longlong *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  iVar1 = _AudioDeviceCreateIOProcID(this + 0x1c);
  if (iVar1 == 0) {
    if ((((int)this[0x1a] == *(int *)((longlong)this + 0xd4)) ||
        ((int)this[0x14] < 1)) ||
       (iVar1 = _AudioDeviceCreateIOProcID(this + 0x1b), iVar1 == 0)) {
      iVar1 = _AudioDeviceStart();
      if (iVar1 == 0) {
        if ((((int)this[0x1a] == *(int *)((longlong)this + 0xd4)) ||
            ((int)this[0x14] < 1)) || (iVar1 = _AudioDeviceStart(), iVar1 == 0)) {
          *(undefined1 *)((longlong)this + 0x74) = 1;
          return;
        }
        _AudioDeviceDestroyIOProcID();
        _AudioDeviceDestroyIOProcID();
        _AudioDeviceStop();
        FUN_00d50b00();
        FUN_00d50b00();
        (**(code **)(*this + 0x580))();
        if (this != (longlong *)0x0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
      }
      else {
        _AudioDeviceDestroyIOProcID();
        if (((int)this[0x1a] != *(int *)((longlong)this + 0xd4)) &&
           (0 < (int)this[0x14])) {
          _AudioDeviceDestroyIOProcID();
        }
        FUN_00d50b00();
        FUN_00d50b00();
        (**(code **)(*this + 0x580))();
        if (this != (longlong *)0x0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
      }
    }
    else {
      _AudioDeviceDestroyIOProcID();
      FUN_00d50b00();
      FUN_00d50b00();
      (**(code **)(*this + 0x580))();
      if (this != (longlong *)0x0) {
        FUN_00d50b20();
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b00();
    (**(code **)(*this + 0x580))();
    if (this != (longlong *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @014a08f0 (895 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *in_RDX;
  undefined8 *this;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float local_68;
  longlong local_50;
  char local_48;
  longlong local_40;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  lVar4 = *in_RDX;
  if (*(int *)(lVar4 + 0xc) < 1) {
    bVar1 = false;
    local_40 = 0;
    bVar2 = false;
    lVar5 = 0;
  }
  else {
    local_68 = DAT_0241b664;
    lVar6 = 0;
    lVar5 = 0;
    bVar2 = false;
    local_40 = 0;
    bVar1 = false;
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar6 * 8);
      if (lVar5 == lVar4) {
        if ((!bVar1) && (lVar5 != 0)) {
          bVar1 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (lVar5 != 0)) {
          FUN_00d50b20();
          bVar1 = true;
          lVar5 = lVar4;
        }
        else {
          bVar1 = true;
          lVar5 = lVar4;
        }
      }
      fVar7 = *(float *)(lVar5 + 0x38) * param_1;
      fVar9 = param_2;
      if (fVar7 <= param_2) {
        fVar9 = fVar7;
      }
      fVar7 = param_3;
      if (param_3 <= fVar9) {
        fVar7 = fVar9;
      }
      if (DAT_02390124 <= (float)((uint)(fVar7 - local_68) & _DAT_02390140)) {
        if (lVar6 == 0) {
          if (local_40 != 0) {
            lVar4 = 0;
            goto joined_r0x014a0a7f;
          }
LAB_014a0b0a:
          dVar8 = 0.0;
          local_40 = 0;
        }
        else {
          lVar4 = *(longlong *)(*(longlong *)(*in_RDX + 0x10) + -8 + lVar6 * 8);
          if (local_40 == lVar4) {
            if ((bVar2) || (local_40 == 0)) goto joined_r0x014a0aff;
            bVar2 = true;
            FUN_00d50b00();
          }
          else {
            if (lVar4 == 0) {
              lVar4 = 0;
            }
            else {
              FUN_00d50b00();
            }
joined_r0x014a0a7f:
            if ((bVar2) && (local_40 != 0)) {
              FUN_00d50b20();
            }
            bVar2 = true;
            local_40 = lVar4;
joined_r0x014a0aff:
            if (local_40 == 0) goto LAB_014a0b0a;
          }
          dVar8 = (*(double *)(local_40 + 0x18) + *(double *)(lVar5 + 0x10)) * DAT_023942d0;
        }
        FUN_014328b0(dVar8,(double)fVar7);
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_00d21140();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        local_68 = fVar7;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar6 = lVar6 + 1;
      lVar4 = *in_RDX;
    } while (lVar6 < *(int *)(lVar4 + 0xc));
  }
  if (*(int *)((longlong)puVar3 + 0xc) == 0) {
    FUN_014328b0(0,(double)param_2);
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_00d21140();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  *this = puVar3;
  *(undefined1 *)(this + 1) = 1;
  if ((bVar2) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @014b25b0 (872 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint in_ECX;
  ulonglong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  longlong *arg1;
  uint uVar18;
  ulonglong uVar19;
  float fVar20;
  
  uVar18 = param_3;
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar16 = &DAT_025f0d98;
  *puVar11 = &DAT_025f0d98;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  (*DAT_025f0db0)();
  if (0 < (int)in_ECX) {
    uVar12 = (ulonglong)in_ECX;
    if ((int)param_3 < 2) {
      uVar14 = 0;
      do {
        FUN_015c6b60();
        *(undefined4 *)(*arg1 + uVar14 * 4) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar12 != uVar14);
    }
    else {
      uVar14 = (ulonglong)param_3 - 1;
      puVar17 = (undefined *)(ulonglong)((uint)uVar14 & 7);
      uVar19 = 0;
      do {
        lVar13 = FUN_015c6b60();
        fVar20 = 0.0;
        if ((ulonglong)param_3 - 2 < 7) {
          puVar16 = (undefined *)((longlong)&MACH_HEADER.magic + 1);
        }
        else {
          uVar10 = 0;
          do {
            uVar15 = uVar10;
            fVar20 = fVar20 + *(float *)(lVar13 + 4 + uVar15 * 4) +
                     *(float *)(lVar13 + 8 + uVar15 * 4) + *(float *)(lVar13 + 0xc + uVar15 * 4) +
                     *(float *)(lVar13 + 0x10 + uVar15 * 4) + *(float *)(lVar13 + 0x14 + uVar15 * 4)
                     + *(float *)(lVar13 + 0x18 + uVar15 * 4) +
                     *(float *)(lVar13 + 0x1c + uVar15 * 4) + *(float *)(lVar13 + 0x20 + uVar15 * 4)
            ;
            uVar10 = uVar15 + 8;
          } while ((uVar14 & 0xfffffffffffffff8) != uVar15 + 8);
          puVar16 = (undefined *)(uVar15 + 9);
        }
        if (puVar17 != (undefined *)0x0) {
          lVar1 = (longlong)puVar16 * 4;
          puVar16 = (undefined *)0x0;
          do {
            fVar20 = fVar20 + *(float *)(lVar13 + lVar1 + (longlong)puVar16 * 4);
            puVar16 = puVar16 + 1;
          } while (puVar17 != puVar16);
        }
        *(float *)(*arg1 + uVar19 * 4) = fVar20;
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar12);
    }
    fVar9 = DAT_02411280;
    fVar8 = _UNK_0240e27c;
    fVar7 = _UNK_0240e278;
    fVar20 = _UNK_0240e274;
    lVar13 = *arg1;
    if (in_ECX < 8) {
      uVar14 = 0;
      fVar20 = DAT_02411280;
    }
    else {
      uVar14 = (ulonglong)(in_ECX & 0xfffffff8);
      puVar16 = (undefined *)(uVar12 * 4 & 0xffffffffffffffe0);
      puVar17 = (undefined *)0x0;
      do {
        pfVar2 = (float *)(puVar17 + lVar13);
        fVar3 = pfVar2[1];
        fVar4 = pfVar2[2];
        fVar5 = pfVar2[3];
        if (*pfVar2 < fVar9) {
          *(undefined4 *)(puVar17 + lVar13) = 0x3727c5ac;
        }
        if (fVar3 < fVar20) {
          *(undefined4 *)(puVar17 + lVar13 + 4) = 0x3727c5ac;
        }
        if (fVar4 < fVar7) {
          *(undefined4 *)(puVar17 + lVar13 + 8) = 0x3727c5ac;
          if (fVar8 <= fVar5) goto LAB_014b27db;
LAB_014b2858:
          *(undefined4 *)(puVar17 + lVar13 + 0xc) = 0x3727c5ac;
          pfVar2 = (float *)(puVar17 + lVar13 + 0x10);
          fVar3 = *pfVar2;
          fVar4 = pfVar2[1];
          fVar5 = pfVar2[2];
          fVar6 = pfVar2[3];
        }
        else {
          if (fVar5 < fVar8) goto LAB_014b2858;
LAB_014b27db:
          pfVar2 = (float *)(puVar17 + lVar13 + 0x10);
          fVar3 = *pfVar2;
          fVar4 = pfVar2[1];
          fVar5 = pfVar2[2];
          fVar6 = pfVar2[3];
        }
        if (fVar3 < fVar9) {
          *(undefined4 *)(puVar17 + lVar13 + 0x10) = 0x3727c5ac;
        }
        if (fVar4 < fVar20) {
          *(undefined4 *)(puVar17 + lVar13 + 0x14) = 0x3727c5ac;
        }
        if (fVar5 < fVar7) {
          *(undefined4 *)(puVar17 + lVar13 + 0x18) = 0x3727c5ac;
        }
        if (fVar6 < fVar8) {
          *(undefined4 *)(puVar17 + lVar13 + 0x1c) = 0x3727c5ac;
        }
        puVar17 = puVar17 + 0x20;
      } while (puVar16 != puVar17);
      fVar20 = DAT_02411280;
      if (uVar14 == uVar12) goto LAB_014b28af;
    }
    do {
      pfVar2 = (float *)(lVar13 + uVar14 * 4);
      if (*pfVar2 <= fVar20 && fVar20 != *pfVar2) {
        *(undefined4 *)(lVar13 + uVar14 * 4) = 0x3727c5ac;
      }
      uVar14 = uVar14 + 1;
    } while (uVar12 != uVar14);
  }
LAB_014b28af:
  param_1 = DAT_0238fee8 / param_1;
  _memcpy(puVar16,(void *)((longlong)(int)in_ECX << 2),uVar18);
  FUN_015c1480((float)param_1,in_ECX);
  if (puVar11 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @008be33e (863 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *arg1;
  longlong this;
  ulonglong uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  int local_40 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*arg1 + 200))();
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))(&local_36,local_40);
    iVar2 = iVar2 + iVar1;
    if (local_40[0] == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_36 < 0xc45) {
      if (local_36 == 1) {
        if (local_40[0] == 0xf) {
          lVar5 = *(longlong *)(this + 8);
          uVar7 = extraout_XMM0_Da;
          for (lVar4 = *(longlong *)(this + 0x10); lVar4 != lVar5; lVar4 = lVar4 + -0x288) {
            uVar7 = (*(code *)**(undefined8 **)(lVar4 + -0x288))();
          }
          *(longlong *)(this + 0x10) = lVar5;
          iVar1 = (**(code **)(*arg1 + 0xf8))(uVar7,&local_34);
          FUN_0088dad4();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            lVar5 = 0;
            uVar6 = 0;
            do {
              iVar2 = (**(code **)(*(longlong *)(*(longlong *)(this + 8) + lVar5) + 0x10))();
              iVar1 = iVar1 + iVar2;
              uVar6 = uVar6 + 1;
              lVar5 = lVar5 + 0x288;
            } while (uVar6 < local_34);
          }
          iVar3 = (**(code **)(*arg1 + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(undefined1 *)(this + 0x44) = 1;
          goto LAB_008be64f;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else if (local_36 == 2) {
        if (local_40[0] == 0xf) {
          lVar5 = *(longlong *)(this + 0x20);
          uVar7 = extraout_XMM0_Da;
          for (lVar4 = *(longlong *)(this + 0x28); lVar4 != lVar5; lVar4 = lVar4 + -0x760) {
            uVar7 = (*(code *)**(undefined8 **)(lVar4 + -0x760))();
          }
          *(longlong *)(this + 0x28) = lVar5;
          iVar1 = (**(code **)(*arg1 + 0xf8))(uVar7,&local_34);
          FUN_00908920();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            lVar5 = 0;
            uVar6 = 0;
            do {
              iVar2 = (**(code **)(*(longlong *)(*(longlong *)(this + 0x20) + lVar5) + 0x10))()
              ;
              iVar1 = iVar1 + iVar2;
              uVar6 = uVar6 + 1;
              lVar5 = lVar5 + 0x760;
            } while (uVar6 < local_34);
          }
          iVar3 = (**(code **)(*arg1 + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(undefined1 *)(this + 0x45) = 1;
          goto LAB_008be64f;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else {
LAB_008be5f1:
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
LAB_008be649:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_36 == 0xc45) {
      if (local_40[0] != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008be649;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x46) = 1;
    }
    else if (local_36 == 5000) {
      if (local_40[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008be649;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x47) = 1;
    }
    else {
      if (local_36 != 10000) goto LAB_008be5f1;
      if (local_40[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008be649;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x48) = 1;
    }
LAB_008be64f:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}




// ==================================================
// @014a3550 (843 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong in_RCX;
  int iVar9;
  longlong in_RDX;
  ulonglong uVar10;
  longlong *arg1;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int in_R8D;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  float fVar25;
  undefined1 auVar24 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  iVar13 = (int)((double)param_2 * param_1);
  if (iVar13 < 1) {
    iVar13 = 1;
  }
  iVar4 = 1;
  if (0 < (int)((double)param_3 * param_1)) {
    iVar4 = (int)((double)param_3 * param_1);
  }
  lVar12 = *arg1;
  if (0 < *(int *)(lVar12 + 0xc)) {
    fVar19 = DAT_02390124 / (float)iVar4;
    uVar7 = in_R8D - 1;
    lVar17 = 0;
    lVar16 = 0;
    bVar5 = false;
    do {
      lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + lVar17 * 8);
      if (lVar16 == lVar12) {
        if ((!bVar5) && (lVar16 != 0)) {
          FUN_00d50b00();
          bVar5 = true;
        }
      }
      else {
        if (lVar12 != 0) {
          FUN_00d50b00();
        }
        if ((bVar5) && (lVar16 != 0)) {
          bVar5 = true;
          FUN_00d50b20();
          lVar16 = lVar12;
        }
        else {
          bVar5 = true;
          lVar16 = lVar12;
        }
      }
      uVar15 = (uint)(*(double *)(lVar16 + 0x10) * param_1);
      uVar8 = uVar15 + 1;
      uVar6 = uVar8 - iVar4;
      if ((int)(uVar8 - iVar4) < 0) {
        uVar6 = 0;
      }
      uVar10 = (ulonglong)uVar6;
      uVar2 = uVar7;
      if ((int)uVar8 < in_R8D) {
        uVar2 = uVar8;
      }
      uVar1 = *(uint *)(in_RDX + uVar10 * 4);
      auVar21 = ZEXT416(*(uint *)(in_RCX + uVar10 * 4));
      auVar24 = insertps(ZEXT416(uVar1),auVar21,0x10);
      auVar23 = ZEXT816(0);
      if ((int)uVar6 < (int)uVar2) {
        uVar11 = (ulonglong)uVar2;
        auVar21 = insertps(auVar21,ZEXT416(uVar1),0x10);
        fVar20 = auVar21._0_4_ + _DAT_0238ff00;
        fVar22 = auVar21._4_4_ + _UNK_0238ff04;
        auVar21._0_4_ = (auVar24._0_4_ + auVar24._0_4_) * _DAT_023945d0;
        auVar21._4_4_ = (auVar24._4_4_ + auVar24._4_4_) * _UNK_023945d4;
        auVar21._8_4_ = (auVar24._8_4_ + auVar24._8_4_) * _UNK_023945d8;
        auVar21._12_4_ = (auVar24._12_4_ + auVar24._12_4_) * _UNK_023945dc;
        uVar14 = uVar10 + 1;
        auVar24 = auVar21;
        if (uVar14 != uVar11) {
          if ((~uVar6 + uVar2 & 1) != 0) {
            uVar6 = *(uint *)(in_RCX + 4 + uVar10 * 4);
            auVar24 = ZEXT416(*(uint *)(in_RDX + 4 + uVar10 * 4));
            auVar29 = insertps(ZEXT416(uVar6),auVar24,0x10);
            fVar20 = fVar20 + auVar29._0_4_;
            fVar22 = fVar22 + auVar29._4_4_;
            auVar24 = insertps(auVar24,ZEXT416(uVar6),0x10);
            auVar21._0_4_ = (auVar21._0_4_ + auVar24._0_4_) * _DAT_023945d0;
            auVar21._4_4_ = (auVar21._4_4_ + auVar24._4_4_) * _UNK_023945d4;
            auVar21._8_4_ = (auVar21._8_4_ + auVar24._8_4_) * _UNK_023945d8;
            auVar21._12_4_ = (auVar21._12_4_ + auVar24._12_4_) * _UNK_023945dc;
            uVar14 = uVar10 + 2;
          }
          auVar24 = auVar21;
          if (uVar11 - 2 != uVar10) {
            do {
              uVar6 = *(uint *)(in_RCX + uVar14 * 4);
              uVar2 = *(uint *)(in_RCX + 4 + uVar14 * 4);
              auVar24 = ZEXT416(*(uint *)(in_RDX + uVar14 * 4));
              auVar29 = ZEXT416(*(uint *)(in_RDX + 4 + uVar14 * 4));
              auVar31 = insertps(ZEXT416(uVar6),auVar24,0x10);
              auVar30 = insertps(auVar24,ZEXT416(uVar6),0x10);
              auVar24 = insertps(ZEXT416(uVar2),auVar29,0x10);
              fVar20 = auVar24._0_4_ + auVar31._0_4_ + fVar20;
              fVar22 = auVar24._4_4_ + auVar31._4_4_ + fVar22;
              auVar29 = insertps(auVar29,ZEXT416(uVar2),0x10);
              auVar24._0_8_ =
                   CONCAT44((auVar29._4_4_ + (auVar30._4_4_ + auVar21._4_4_) * _UNK_023945d4) *
                            _UNK_023945d4,
                            (auVar29._0_4_ + (auVar30._0_4_ + auVar21._0_4_) * _DAT_023945d0) *
                            _DAT_023945d0);
              auVar24._8_4_ =
                   (auVar29._8_4_ + (auVar30._8_4_ + auVar21._8_4_) * _UNK_023945d8) * _UNK_023945d8
              ;
              auVar24._12_4_ =
                   (auVar29._12_4_ + (auVar30._12_4_ + auVar21._12_4_) * _UNK_023945dc) *
                   _UNK_023945dc;
              uVar14 = uVar14 + 2;
              auVar21._8_4_ = auVar24._8_4_;
              auVar21._0_8_ = auVar24._0_8_;
              auVar21._12_4_ = auVar24._12_4_;
            } while (uVar11 != uVar14);
          }
        }
      }
      else {
        fVar20 = 0.0;
        fVar22 = 0.0;
      }
      uVar6 = uVar8;
      if ((int)uVar15 < -1) {
        uVar6 = 0;
      }
      uVar2 = iVar13 + uVar8;
      if (in_R8D <= (int)(iVar13 + uVar8)) {
        uVar2 = uVar7;
      }
      fVar27 = 0.0;
      fVar28 = 0.0;
      if ((int)uVar6 < (int)uVar2) {
        uVar1 = uVar8 + iVar4;
        if (in_R8D <= (int)(uVar8 + iVar4)) {
          uVar1 = uVar7;
        }
        lVar12 = (longlong)(int)uVar6;
        iVar9 = uVar2 - uVar6;
        auVar23 = ZEXT816(0);
        fVar28 = 0.0;
        fVar27 = 0.0;
        do {
          fVar18 = *(float *)(in_RDX + lVar12 * 4);
          if (lVar12 < (int)uVar1) {
            fVar28 = fVar28 + fVar18;
            fVar25 = *(float *)(in_RCX + lVar12 * 4);
            fVar27 = fVar27 + fVar25;
          }
          else {
            fVar25 = *(float *)(in_RCX + lVar12 * 4);
          }
          auVar21 = insertps(ZEXT416((uint)fVar18),ZEXT416((uint)fVar25),0x10);
          fVar18 = auVar24._4_4_;
          fVar25 = auVar24._8_4_;
          fVar26 = auVar24._12_4_;
          auVar24._0_4_ = (auVar24._0_4_ + auVar21._0_4_) * _DAT_023945d0;
          auVar24._4_4_ = (fVar18 + auVar21._4_4_) * _UNK_023945d4;
          auVar24._8_4_ = (fVar25 + auVar21._8_4_) * _UNK_023945d8;
          auVar24._12_4_ = (fVar26 + auVar21._12_4_) * _UNK_023945dc;
          auVar29._4_4_ = -(uint)(auVar23._4_4_ < auVar24._4_4_);
          auVar29._0_4_ = -(uint)(auVar23._0_4_ < auVar24._0_4_);
          auVar29._8_4_ = -(uint)(auVar23._8_4_ < auVar24._8_4_);
          auVar29._12_4_ = -(uint)(auVar23._12_4_ < auVar24._12_4_);
          auVar30._4_4_ = auVar24._0_4_;
          auVar30._0_4_ = auVar24._0_4_;
          auVar30._8_4_ = auVar24._8_4_;
          auVar30._12_4_ = auVar24._8_4_;
          auVar23 = blendvps(auVar23,auVar30,auVar29);
          lVar12 = lVar12 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      fVar18 = *(float *)(in_RDX + (longlong)(int)uVar8 * 4);
      if (-1 < (int)uVar15) {
        fVar18 = (fVar18 + *(float *)(in_RDX + (ulonglong)uVar15 * 4)) * DAT_0239011c;
      }
      fVar25 = fVar18;
      if (fVar22 * fVar19 <= fVar18) {
        fVar25 = fVar22 * fVar19;
      }
      *(float *)(lVar16 + 0x28) = fVar18;
      *(float *)(lVar16 + 0x2c) = fVar28 * fVar19 - fVar25;
      *(float *)(lVar16 + 0x30) = (fVar27 - fVar20) * fVar19;
      *(int *)(lVar16 + 0x34) = auVar23._0_4_;
      uVar3 = extractps(auVar23,1);
      *(undefined8 *)(lVar16 + 0x38) = uVar3;
      lVar17 = lVar17 + 1;
      lVar12 = *arg1;
    } while (lVar17 < *(int *)(lVar12 + 0xc));
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @00a645b4 (803 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  undefined8 uVar1;
  string *this;
  undefined8 *arg1;
  undefined8 *this;
  
  *this = &DAT_02528a00;
  this[1] = &DAT_0252a720;
  *(undefined4 *)(this + 2) = 0xffffffff;
  this[3] = 0xffffffffffffffff;
  *(undefined2 *)(this + 4) = 0x101;
  this[0x20] = 0;
  this[0x21] = 0;
  this[0x22] = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  this[0xb] = 0;
  this[0xc] = 0;
  this[0xd] = 0;
  this[0xe] = 0;
  this[0x1e] = 0;
  this[0x1d] = 0;
  this[0x1c] = 0;
  this[0x1b] = 0;
  this[0x1a] = 0;
  this[0x19] = 0;
  this[0x18] = 0;
  this[0x17] = 0;
  this[0x16] = 0;
  this[0x15] = 0;
  this[0x14] = 0;
  this[0x13] = 0;
  this[0x12] = 0;
  this[0x11] = 0;
  this[0x10] = 0;
  *(undefined1 *)(this + 0x2d) = 0;
  this[0x2c] = 0;
  this[0x2b] = 0;
  this[0x2a] = 0;
  this[0x29] = 0;
  this[0x28] = 0;
  this[0x27] = 0;
  this[0x26] = 0;
  this[0x25] = 0;
  this[0x24] = 0;
  *(undefined8 *)((longlong)this + 0x169) = 0x101000000010001;
  *(undefined8 *)((longlong)this + 0x171) = 0x10001000100;
  this = (string *)(this + 0x1c);
  *(undefined1 *)((longlong)this + 0x179) = 0;
  FUN_00aa9d7a();
  *(undefined1 *)(this + 5) = *(undefined1 *)(arg1 + 5);
  *(undefined4 *)((longlong)this + 0x2c) = *(undefined4 *)((longlong)arg1 + 0x2c);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined4 *)(this + 0xf) = *(undefined4 *)(arg1 + 0xf);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined1 *)(this + 0x1f) = *(undefined1 *)(arg1 + 0x1f);
  std::string::operator=(this,param_2);
  *(undefined1 *)(this + 0x23) = *(undefined1 *)(arg1 + 0x23);
  std::string::operator=(this,param_2);
  if (this != arg1) {
    FUN_009bc850();
    FUN_009bc850();
  }
  *(undefined2 *)(this + 0x2f) = *(undefined2 *)(arg1 + 0x2f);
  uVar1 = arg1[0x2d];
  this[0x2e] = arg1[0x2e];
  this[0x2d] = uVar1;
  return;
}




// ==================================================
// @009128e4 (796 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  undefined8 uVar1;
  longlong arg1;
  longlong this;
  
  *(undefined4 *)(this + 8) = *(undefined4 *)(arg1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(arg1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(arg1 + 0x10);
  if (this == arg1) {
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(arg1 + 0x30);
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(arg1 + 0x34);
    *(undefined4 *)(this + 0x98) = *(undefined4 *)(arg1 + 0x98);
  }
  else {
    FUN_008df080(param_1,*(undefined8 *)(arg1 + 0x20));
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(arg1 + 0x30);
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(arg1 + 0x34);
    FUN_008df080();
    FUN_008df080();
    FUN_008df080();
    FUN_008df080();
    *(undefined4 *)(this + 0x98) = *(undefined4 *)(arg1 + 0x98);
    FUN_008df080();
    FUN_008df080();
    FUN_008df080();
  }
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(arg1 + 0xe8);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(arg1 + 0xec);
  if (this == arg1) {
    *(undefined4 *)(this + 0x150) = *(undefined4 *)(arg1 + 0x150);
  }
  else {
    FUN_008df080();
    FUN_008df080();
    FUN_008df080();
    FUN_008df080();
    *(undefined4 *)(this + 0x150) = *(undefined4 *)(arg1 + 0x150);
    FUN_008df080();
  }
  *(undefined4 *)(this + 0x170) = *(undefined4 *)(arg1 + 0x170);
  *(undefined4 *)(this + 0x174) = *(undefined4 *)(arg1 + 0x174);
  if (this == arg1) {
    *(undefined4 *)(this + 0x1a8) = *(undefined4 *)(arg1 + 0x1a8);
    *(undefined4 *)(this + 0x1ac) = *(undefined4 *)(arg1 + 0x1ac);
  }
  else {
    FUN_008df080();
    FUN_008df080();
    *(undefined4 *)(this + 0x1a8) = *(undefined4 *)(arg1 + 0x1a8);
    *(undefined4 *)(this + 0x1ac) = *(undefined4 *)(arg1 + 0x1ac);
    FUN_008df080();
    FUN_008df080();
    FUN_008df080();
    FUN_008df080();
  }
  *(undefined4 *)(this + 0x210) = *(undefined4 *)(arg1 + 0x210);
  uVar1 = *(undefined8 *)(arg1 + 0x21c);
  *(undefined8 *)(this + 0x214) = *(undefined8 *)(arg1 + 0x214);
  *(undefined8 *)(this + 0x21c) = uVar1;
  *(undefined8 *)(this + 0x224) = *(undefined8 *)(arg1 + 0x224);
  *(undefined8 *)(this + 0x22c) = *(undefined8 *)(arg1 + 0x22c);
  *(undefined1 *)(this + 0x234) = *(undefined1 *)(arg1 + 0x234);
  return;
}




// ==================================================
// @00772060 (791 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong this;
  longlong **pplVar6;
  longlong *local_90;
  char local_88;
  longlong local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  pplVar6 = &local_40;
  FUN_00d3ecf0();
  plVar1 = local_40;
  FUN_000fe4b0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_007720b6;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_007720b6:
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_013fe9a0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8920();
    FUN_00757c60();
    plVar2 = local_40;
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 == local_90) {
      *(int *)(this + 0x16c) = *(int *)(this + 0x16c) + -1;
      if (*(longlong *)(this + 0x148) != 0) {
        FUN_00101480();
      }
      (**(code **)(*plVar1 + 1000))();
      FUN_01f27fe0();
      cVar3 = (**(code **)(*local_40 + 0x788))();
      pVar5 = CONCAT31((int3)(param_1 >> 8),local_38);
      if (cVar3 == '\0') {
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_013fe9d0();
        plVar1 = local_40;
        if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        plVar2 = local_40;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          FUN_00770960();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      cVar3 = FUN_00108e10();
      if (cVar3 == '\0') {
        FUN_00757c60();
        plVar1 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        cVar3 = FUN_0076e4d0();
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          FUN_0010a4f0();
        }
      }
    }
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @000f3de0 (775 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  longlong *arg1;
  longlong this;
  undefined8 unaff_R14;
  ulonglong uVar7;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if (*(longlong *)(this + 0xb8) == 0) {
    uVar7 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    goto LAB_000f4011;
  }
  plVar1 = (longlong *)*arg1;
  if ((DAT_026e0c38 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026e0b88 = FUN_000fddb0();
    _DAT_026e0b70 = "MUElementAnalyzer";
    _DAT_026e0b78 = 0x180;
    param_1 = 0xfdd80;
    _DAT_026e0b80 = FUN_000fdd80;
    _DAT_026e0b90 = 0;
    uRam00000000026e0b98 = 0;
    _DAT_026e0ba0 = 0;
    _DAT_026e0c18 = 0;
    uRam00000000026e0c20 = 0;
    _DAT_026e0c28 = 0;
    DAT_026e0c2a = 1;
    _DAT_026e0ba8 = 0;
    uRam00000000026e0bb0 = 0;
    _DAT_026e0bb8 = 0;
    uRam00000000026e0bc0 = 0;
    _DAT_026e0bc8 = 0;
    uRam00000000026e0bd0 = 0;
    _DAT_026e0bd8 = 0;
    uRam00000000026e0be0 = 0;
    _DAT_026e0be8 = 0;
    uRam00000000026e0bf0 = 0;
    _DAT_026e0bf8 = 0;
    uRam00000000026e0c00 = 0;
    _DAT_026e0c08 = 0;
    uRam00000000026e0c10 = 0;
    DAT_026e0c33 = 0;
    _DAT_026e0c2b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_000f3e34:
    arg1 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_000f3e34;
  }
  lVar2 = arg1[1];
  if (((char)lVar2 == '\0') || (*arg1 == 0)) {
    if (*arg1 == 0) {
      uVar7 = 0;
      goto LAB_000f4011;
    }
  }
  else {
    FUN_00d50b00();
  }
  (**(code **)(**(longlong **)(this + 0xb8) + 0x628))();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb480();
  FUN_013fb320();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  uVar4 = FUN_00d23d70();
  uVar7 = (ulonglong)uVar4;
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
LAB_000f4011:
  return uVar7 & 0xffffffff;
}




// ==================================================
// @01032af0 (770 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  bool bVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint uVar8;
  EVP_CIPHER_CTX *arg1;
  longlong *this;
  int reason;
  size_t sVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  EVP_CIPHER_CTX *pEVar13;
  
  pEVar13 = param_1;
  iVar3 = _EVP_CIPHER_CTX_test_flags(param_1,(int)param_2);
  uVar8 = param_3;
  if (iVar3 != 0) {
    uVar8 = param_3 + 7;
    if (-1 < (int)(param_3 + 7)) {
      uVar8 = param_3;
    }
    uVar8 = (int)(uVar8 + 7) >> 3;
  }
  if ((int)param_3 < 0) {
LAB_01032c16:
    *param_2 = 0;
    return param_3 == 0;
  }
  lVar10 = *this;
  uVar11 = *(uint *)(lVar10 + 4);
  if (param_3 == 0) {
    uVar4 = _EVP_CIPHER_flags((EVP_CIPHER *)param_1);
    if ((uVar4 & 0xf0007) != 7) goto LAB_01032c16;
    lVar10 = *this;
    bVar1 = *(byte *)(lVar10 + 0x12);
  }
  else {
    bVar1 = *(byte *)(lVar10 + 0x12);
  }
  if ((bVar1 & 0x10) == 0) {
    iVar3 = *(int *)((longlong)this + 0x14);
    uVar7 = (longlong)(arg1->oiv + (longlong)iVar3 + -0x18) - (longlong)pEVar13;
    bVar12 = uVar7 < (ulonglong)(longlong)(int)uVar8;
    bVar2 = (ulonglong)-(longlong)(int)uVar8 < uVar7;
    bVar5 = bVar12;
    if (((0 < (int)uVar8) &&
        ((EVP_CIPHER_CTX *)(arg1->oiv + (longlong)iVar3 + -0x18) != pEVar13)) &&
       (bVar5 = bVar12 || bVar2, bVar12 || bVar2)) {
      iVar3 = 0xa2;
      reason = 0x150;
LAB_01032cef:
      _ERR_put_error(0x201069c,iVar3,reason,(char *)(ulonglong)uVar11,(int)pEVar13);
      return false;
    }
    if (iVar3 == 0) {
      if ((*(uint *)((longlong)this + 0x84) & param_3) == 0) {
        iVar3 = (**(code **)(lVar10 + 0x20))(param_3,pEVar13);
        if (iVar3 != 0) {
          *param_2 = param_3;
          return true;
        }
        *param_2 = 0;
        return false;
      }
      uVar8 = 0;
      if (0x20 < (int)uVar11) goto LAB_01032ca4;
    }
    else {
      if (0x20 < (int)uVar11) {
LAB_01032ca4:
                    /* WARNING: Subroutine does not return */
        _OPENSSL_die(bVar5,0x15e);
      }
      uVar8 = uVar11 - iVar3;
      if ((int)param_3 < (int)uVar8) {
        _memcpy((void *)(ulonglong)uVar8,(void *)(ulonglong)param_3,(size_t)lVar10);
        *(int *)((longlong)this + 0x14) = *(int *)((longlong)this + 0x14) + param_3;
        *param_2 = 0;
        return true;
      }
      param_3 = param_3 - uVar8;
      if ((int)(0x7fffffff - uVar11) < (int)(-uVar11 & param_3)) {
        iVar3 = 0xb8;
        reason = 0x171;
        goto LAB_01032cef;
      }
      _memcpy((void *)(ulonglong)uVar8,(void *)(longlong)(int)uVar8,(size_t)lVar10);
      iVar3 = (**(code **)(*this + 0x20))((longlong)(int)uVar11,this + 7);
      if (iVar3 == 0) {
        return false;
      }
      pEVar13 = (EVP_CIPHER_CTX *)((longlong)(int)uVar8 + (longlong)(pEVar13->oiv + -0x18));
      uVar8 = uVar11;
    }
    sVar9 = (size_t)lVar10;
    *param_2 = uVar8;
    uVar8 = uVar11 - 1 & param_3;
    uVar11 = param_3 - uVar8;
    puVar6 = param_2;
    if (uVar11 != 0 && (int)uVar8 <= (int)param_3) {
      puVar6 = (uint *)(ulonglong)uVar11;
      iVar3 = (**(code **)(*this + 0x20))(puVar6,pEVar13);
      if (iVar3 == 0) {
        return false;
      }
      *param_2 = *param_2 + uVar11;
    }
    if (uVar8 != 0) {
      _memcpy(puVar6,(void *)(longlong)(int)uVar8,sVar9);
    }
    *(uint *)((longlong)this + 0x14) = uVar8;
  }
  else {
    if (uVar11 == 1) {
      if (((arg1 != pEVar13) && (0 < (int)uVar8)) &&
         ((ulonglong)((longlong)arg1 - (longlong)pEVar13) < (ulonglong)(longlong)(int)uVar8 ||
          (ulonglong)-(longlong)(int)uVar8 < (ulonglong)((longlong)arg1 - (longlong)pEVar13)))
      {
        iVar3 = 0xa2;
        reason = 0x143;
        goto LAB_01032cef;
      }
    }
    uVar8 = (**(code **)(lVar10 + 0x20))(param_3,pEVar13);
    if ((int)uVar8 < 0) {
      return false;
    }
    *param_2 = uVar8;
  }
  return true;
}




// ==================================================
// @01664ba0 (768 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  void *pvVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong this;
  undefined8 uVar4;
  longlong local_50;
  char local_48;
  longlong local_30;
  char local_28;
  
  if ((((*(longlong *)(this + 0xf0) == 0) || (*(double *)(this + 0xc0) <= 0.0)) ||
      (*(longlong *)(this + 0xd0) < 1)) || (*(int *)(this + 0xe0) == 0)) {
    uVar4 = FUN_01505340();
    if ((local_28 == '\0') && (local_30 != 0)) {
      uVar4 = FUN_00d50b00();
    }
    FUN_012ca6e0(uVar4,0);
    if ((local_28 == '\0') && (local_30 != 0)) {
      FUN_00d50b00();
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01505960();
    FUN_01667210();
    if (local_30 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  else {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df30();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (local_30 == 0) {
      plVar3 = *(longlong **)(this + 0xf0);
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        plVar3 = *(longlong **)(this + 0xf0);
        lVar2 = FUN_00e8b990();
        if (lVar2 != 0) {
          plVar3 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar3 + 0x3d0))();
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df10();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132c9b0(2,0);
    if ((local_28 == '\0') && (local_30 != 0)) {
      FUN_00d50b00();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_01667210();
    if (local_30 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @0149bce0 (758 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  float fVar1;
  longlong lVar2;
  longlong in_RCX;
  longlong in_RDX;
  ulonglong uVar3;
  longlong arg1;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  int local_res8;
  int local_res10;
  int local_res18;
  
  param_1 = param_1 / param_2;
  dVar9 = DAT_0238fee8 / param_1;
  lVar7 = (longlong)(int)(DAT_023942d0 * param_1);
  lVar5 = (longlong)(param_1 * 0.0) + lVar7;
  if ((in_RDX != 0) && (param_4 != 0)) {
    if (in_RCX < 1) {
      iVar8 = 0;
    }
    else {
      fVar10 = 0.0;
      iVar8 = 0;
      fVar11 = 0.0;
      lVar2 = 0;
      do {
        if (lVar2 == lVar5) {
          if (iVar8 < local_res8) {
            *(float *)(param_3 + (longlong)iVar8 * 4) = (float)SQRT((double)fVar11 * dVar9);
            *(float *)(param_4 + (longlong)iVar8 * 4) = (float)((double)fVar10 * dVar9);
            iVar8 = iVar8 + 1;
          }
          lVar5 = (longlong)((double)iVar8 * param_1) + lVar7;
          fVar11 = 0.0;
          fVar10 = 0.0;
        }
        fVar1 = *(float *)(arg1 + lVar2 * 4);
        fVar11 = fVar11 + fVar1 * fVar1;
        fVar10 = fVar10 + (*(float *)(in_RDX + lVar2 * 4) - fVar1);
        lVar2 = lVar2 + 1;
      } while (in_RCX != lVar2);
    }
    if (iVar8 < local_res8) {
      lVar5 = (longlong)(iVar8 + -1);
      uVar3 = (ulonglong)iVar8;
      uVar4 = ~uVar3;
      if ((local_res8 - iVar8 & 1U) != 0) {
        *(undefined4 *)(param_3 + uVar3 * 4) = *(undefined4 *)(param_3 + lVar5 * 4);
        *(undefined4 *)(param_4 + uVar3 * 4) = *(undefined4 *)(param_4 + lVar5 * 4);
        uVar3 = uVar3 + 1;
      }
      if (uVar4 + (longlong)local_res8 != 0) {
        do {
          *(undefined4 *)(param_3 + uVar3 * 4) = *(undefined4 *)(param_3 + lVar5 * 4);
          *(undefined4 *)(param_4 + uVar3 * 4) = *(undefined4 *)(param_4 + lVar5 * 4);
          *(undefined4 *)(param_3 + 4 + uVar3 * 4) = *(undefined4 *)(param_3 + lVar5 * 4);
          *(undefined4 *)(param_4 + 4 + uVar3 * 4) = *(undefined4 *)(param_4 + lVar5 * 4);
          uVar3 = uVar3 + 2;
        } while ((longlong)local_res8 != uVar3);
      }
    }
    FUN_015c1480((float)local_res10,local_res8);
    goto LAB_0149bfbf;
  }
  if (arg1 == 0) {
    FUN_00e828a0();
LAB_0149be60:
    iVar8 = 0;
  }
  else {
    if (in_RCX < 1) goto LAB_0149be60;
    fVar10 = 0.0;
    iVar8 = 0;
    lVar2 = 0;
    do {
      if (lVar2 == lVar5) {
        if (iVar8 < local_res8) {
          *(float *)(param_3 + (longlong)iVar8 * 4) = (float)SQRT((double)fVar10 * dVar9);
          iVar8 = iVar8 + 1;
        }
        lVar5 = (longlong)((double)iVar8 * param_1) + lVar7;
        fVar10 = 0.0;
      }
      fVar11 = *(float *)(arg1 + lVar2 * 4);
      fVar10 = fVar10 + fVar11 * fVar11;
      lVar2 = lVar2 + 1;
    } while (in_RCX != lVar2);
  }
  local_res18 = local_res10;
  if (iVar8 < local_res8) {
    lVar5 = (longlong)(iVar8 + -1);
    uVar4 = (ulonglong)iVar8;
    uVar3 = ~uVar4;
    uVar6 = (ulonglong)(uint)(local_res8 - iVar8) & 3;
    if ((local_res8 - iVar8 & 3U) != 0) {
      do {
        *(undefined4 *)(param_3 + uVar4 * 4) = *(undefined4 *)(param_3 + lVar5 * 4);
        uVar4 = uVar4 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (2 < uVar3 + (longlong)local_res8) {
      do {
        *(undefined4 *)(param_3 + uVar4 * 4) = *(undefined4 *)(param_3 + lVar5 * 4);
        *(undefined4 *)(param_3 + 4 + uVar4 * 4) = *(undefined4 *)(param_3 + lVar5 * 4);
        *(undefined4 *)(param_3 + 8 + uVar4 * 4) = *(undefined4 *)(param_3 + lVar5 * 4);
        *(undefined4 *)(param_3 + 0xc + uVar4 * 4) = *(undefined4 *)(param_3 + lVar5 * 4);
        uVar4 = uVar4 + 4;
      } while ((longlong)local_res8 != uVar4);
    }
  }
LAB_0149bfbf:
  FUN_015c1480((float)local_res18,local_res8);
  return;
}




// ==================================================
// @014b7630 (753 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int in_ECX;
  longlong *in_RDX;
  longlong *plVar5;
  longlong lVar6;
  char unaff_SIL;
  longlong *this;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float extraout_XMM0_Da;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  
  fVar9 = (float)_logf(DAT_02394204 * param_1);
  iVar4 = FUN_00e7d780((fVar9 * DAT_02394208) / DAT_023908e0);
  bVar3 = true;
  fVar9 = extraout_XMM0_Da;
  if (unaff_SIL == '\0') {
LAB_014b7754:
    bVar3 = true;
    lVar6 = 0;
  }
  else {
    lVar8 = *in_RDX;
    lVar6 = 0;
    if ((lVar8 != 0) && (lVar6 = 0, in_ECX + -1 <= iVar4)) {
      iVar4 = ((iVar4 - in_ECX) + 1) / 3;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      iVar7 = *(int *)(lVar8 + 0xc) + -1;
      if (iVar4 < *(int *)(lVar8 + 0xc)) {
        iVar7 = iVar4;
      }
      lVar6 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + (longlong)iVar7 * 8);
      fVar9 = (float)FUN_00d50b00();
      iVar4 = *(int *)(lVar6 + 0x18);
      iVar7 = iVar4 + 3;
      if (-1 < iVar4) {
        iVar7 = iVar4;
      }
      in_RDX = (longlong *)(ulonglong)(uint)(iVar7 >> 2);
      if (7 < iVar4) {
        plVar5 = (longlong *)((longlong)&MACH_HEADER.magic + 1);
        fVar11 = **(float **)(lVar6 + 0x10);
        do {
          fVar9 = (*(float **)(lVar6 + 0x10))[(longlong)plVar5];
          if (fVar9 < fVar11) {
            fVar9 = (float)FUN_00d50b20();
            goto LAB_014b7754;
          }
          plVar5 = (longlong *)((longlong)plVar5 + 1);
          fVar11 = fVar9;
        } while (in_RDX != plVar5);
      }
      bVar3 = false;
    }
  }
  uVar10 = FUN_00c8e340(fVar9,0);
  lVar8 = *this;
  iVar4 = *(int *)(lVar8 + 0x18);
  FUN_00c8e340(uVar10,1);
  *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + (longlong)iVar4) = 0;
  fVar9 = param_1;
  if (lVar6 != 0) {
    fVar12 = 0.0;
    lVar8 = 1;
    if ((longlong)(int)in_RDX < 2) goto LAB_014b77e0;
    do {
      fVar12 = *(float *)(*(longlong *)(lVar6 + 0x10) + lVar8 * 4);
      while( true ) {
        fVar11 = fVar12 * param_1;
        if (param_2 < fVar11) goto LAB_014b78a3;
        lVar2 = *this;
        iVar4 = *(int *)(lVar2 + 0x18);
        FUN_00c8e340(param_1,1);
        *(float *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar4) = fVar11;
        lVar8 = lVar8 + 1;
        if (lVar8 < (int)in_RDX) break;
LAB_014b77e0:
        fVar12 = fVar12 + DAT_02390124;
      }
    } while( true );
  }
  fVar11 = param_1;
  if (param_1 <= param_2) {
    iVar4 = 2;
    fVar12 = param_1;
    do {
      lVar8 = *this;
      iVar7 = *(int *)(lVar8 + 0x18);
      FUN_00c8e340(fVar9,1);
      *(float *)(*(longlong *)(lVar8 + 0x10) + (longlong)iVar7) = fVar12;
      fVar11 = (float)iVar4 * param_1;
      iVar4 = iVar4 + 1;
      fVar9 = fVar12;
      fVar12 = fVar11;
    } while (fVar11 <= param_2);
  }
LAB_014b78a3:
  lVar8 = *this;
  uVar1 = *(uint *)(lVar8 + 0x18);
  if ((uVar1 & 0xfffffffc) == 4) {
    FUN_00c8e340(fVar9,1);
    *(float *)(*(longlong *)(lVar8 + 0x10) + (ulonglong)uVar1) = fVar11;
  }
  if (!bVar3 && lVar6 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @014b71e0 (749 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  float *in_RCX;
  ulonglong uVar4;
  uint uVar5;
  longlong in_RDX;
  uint uVar6;
  longlong arg1;
  ulonglong uVar7;
  uint uVar8;
  longlong this;
  int in_R8D;
  float fVar9;
  float fVar10;
  float in_XMM4_Da;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar3 = FUN_00e84250();
  fVar15 = DAT_0240e314;
  uVar2 = _DAT_02390140;
  fVar13 = DAT_02390124;
  fVar16 = DAT_02390124 / param_2;
  uVar6 = (uint)(param_4 * DAT_02390118 + param_1 / param_3);
  uVar8 = (int)param_4 + uVar6 + 1;
  uVar5 = 1;
  if (0 < (int)uVar6) {
    uVar5 = uVar6;
  }
  uVar6 = in_R8D / 2;
  if ((int)uVar8 <= in_R8D / 2) {
    uVar6 = uVar8;
  }
  uVar4 = (ulonglong)uVar6;
  if ((in_RCX == (float *)0x0) || (in_RDX == 0)) {
    if ((int)uVar5 < (int)uVar6) {
      uVar7 = (ulonglong)uVar5;
      fVar9 = 0.0;
      if (DAT_02411280 < in_XMM4_Da) {
        do {
          fVar13 = (float)((uint)(param_1 - *(float *)(this + uVar7 * 4)) & uVar2);
          if (fVar13 < param_2) {
            fVar11 = *(float *)(arg1 + uVar7 * 4);
            fVar13 = *(float *)(lVar3 + (longlong)(int)((param_2 - fVar13) * fVar16 * fVar15) * 4) *
                     fVar11;
            fVar9 = fVar9 + fVar13;
            *(float *)(arg1 + uVar7 * 4) = fVar11 - fVar13 * in_XMM4_Da;
          }
          uVar7 = uVar7 + 1;
        } while (uVar4 != uVar7);
      }
      else {
        do {
          fVar13 = (float)((uint)(param_1 - *(float *)(this + uVar7 * 4)) & _DAT_02390140);
          if (fVar13 < param_2) {
            fVar9 = fVar9 + *(float *)(lVar3 + (longlong)
                                               (int)((param_2 - fVar13) * fVar16 * DAT_0240e314) * 4
                                      ) * *(float *)(arg1 + uVar7 * 4);
          }
          uVar7 = uVar7 + 1;
        } while (uVar4 != uVar7);
      }
      fVar11 = 0.0;
      goto LAB_014b7416;
    }
  }
  else if ((int)uVar5 < (int)uVar6) {
    uVar7 = (ulonglong)uVar5;
    fVar11 = 0.0;
    if (in_XMM4_Da <= DAT_02411280) {
      fVar9 = 0.0;
      do {
        fVar13 = (float)((uint)(param_1 - *(float *)(this + uVar7 * 4)) & _DAT_02390140);
        if (fVar13 < param_2) {
          fVar12 = *(float *)(lVar3 + (longlong)(int)((param_2 - fVar13) * fVar16 * DAT_0240e314) *
                                      4) * *(float *)(arg1 + uVar7 * 4);
          fVar13 = *(float *)(in_RDX + uVar7 * 4);
          fVar15 = DAT_02390124;
          if (fVar13 <= DAT_02390124) {
            fVar15 = fVar13;
          }
          fVar11 = fVar11 + fVar15 * fVar12;
          fVar9 = fVar9 + fVar12;
        }
        uVar7 = uVar7 + 1;
      } while (uVar4 != uVar7);
    }
    else {
      fVar9 = 0.0;
      do {
        fVar12 = (float)((uint)(param_1 - *(float *)(this + uVar7 * 4)) & uVar2);
        if (fVar12 < param_2) {
          fVar1 = *(float *)(arg1 + uVar7 * 4);
          fVar14 = *(float *)(lVar3 + (longlong)(int)((param_2 - fVar12) * fVar16 * fVar15) * 4) *
                   fVar1;
          fVar12 = *(float *)(in_RDX + uVar7 * 4);
          fVar10 = fVar13;
          if (fVar12 <= fVar13) {
            fVar10 = fVar12;
          }
          fVar11 = fVar11 + fVar10 * fVar14;
          fVar9 = fVar9 + fVar14;
          *(float *)(arg1 + uVar7 * 4) = fVar1 - fVar14 * in_XMM4_Da;
        }
        uVar7 = uVar7 + 1;
      } while (uVar4 != uVar7);
    }
LAB_014b7416:
    if (DAT_02394274 <= fVar9) goto LAB_014b745c;
  }
  fVar11 = (float)((double)(float)((double)*(float *)(arg1 +
                                                     (longlong)((int)(uVar6 + uVar5) / 2) * 4) *
                                  DAT_02391030) * DAT_023934c8);
LAB_014b745c:
  if (in_RCX != (float *)0x0) {
    *in_RCX = fVar11;
  }
  return;
}




// ==================================================
// @0078e160 (745 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong **pplVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  uVar7 = FUN_00e8b020();
  plVar1 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) {
      return;
    }
    uVar7 = FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  else if (local_58 == (longlong *)0x0) {
    return;
  }
  local_50 = 0;
  local_58 = (longlong *)0x0;
  local_48 = plVar1;
  local_40 = -1;
  iStack_3c = 0;
  local_38 = 0;
  while( true ) {
    iVar4 = iStack_3c;
    if (iStack_3c != 0) {
      if (iStack_3c < 1) {
        iStack_3c = -iStack_3c;
      }
      else {
        local_40 = local_40 - iStack_3c;
        FUN_00d23690(uVar7,iStack_3c);
        local_38 = local_38 + iVar4;
        iStack_3c = 0;
      }
    }
    lVar5 = (longlong)local_40;
    local_40 = local_40 + 1;
    if (*(int *)((longlong)local_48 + 0xc) <= local_40) break;
    plVar1 = *(longlong **)(local_48[2] + 8 + lVar5 * 8);
    local_58 = plVar1;
    FUN_00e8afb0();
    cVar2 = FUN_00e34a50();
    cVar3 = FUN_00e34240();
    if (cVar2 == '\0' && cVar3 == '\0') {
      if ((DAT_026e0c38 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026e0b88 = FUN_000fddb0();
        _DAT_026e0b70 = "MUElementAnalyzer";
        _DAT_026e0b78 = 0x180;
        _DAT_026e0b80 = FUN_000fdd80;
        _DAT_026e0b90 = 0;
        uRam00000000026e0b98 = 0;
        _DAT_026e0ba0 = 0;
        _DAT_026e0c18 = 0;
        uRam00000000026e0c20 = 0;
        _DAT_026e0c28 = 0;
        DAT_026e0c2a = 1;
        _DAT_026e0ba8 = 0;
        uRam00000000026e0bb0 = 0;
        _DAT_026e0bb8 = 0;
        uRam00000000026e0bc0 = 0;
        _DAT_026e0bc8 = 0;
        uRam00000000026e0bd0 = 0;
        _DAT_026e0bd8 = 0;
        uRam00000000026e0be0 = 0;
        _DAT_026e0be8 = 0;
        uRam00000000026e0bf0 = 0;
        _DAT_026e0bf8 = 0;
        uRam00000000026e0c00 = 0;
        _DAT_026e0c08 = 0;
        uRam00000000026e0c10 = 0;
        DAT_026e0c33 = 0;
        _DAT_026e0c2b = 0;
        ___cxa_guard_release();
      }
      pplVar6 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar6 = &local_58;
        if (cVar2 == '\0') {
          pplVar6 = (longlong **)&DAT_02802688;
        }
      }
      plVar1 = local_58;
      if (*pplVar6 == (longlong *)0x0) {
        uVar7 = FUN_0079bbe0();
        pplVar6 = (longlong **)&DAT_02802688;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar6 = &local_58;
          uVar7 = extraout_XMM0_Da_00;
          if (cVar2 == '\0') {
            pplVar6 = (longlong **)&DAT_02802688;
          }
        }
        if (*pplVar6 != (longlong *)0x0) {
          uVar7 = FUN_0077b140();
        }
      }
      else {
        uVar7 = FUN_00774db0();
      }
    }
    else {
      uVar7 = FUN_0074ea80(extraout_XMM0_Da,1);
    }
  }
  FUN_00097c40();
  FUN_00d50b20();
  return;
}




// ==================================================
// @009d8738 (730 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte *pbVar4;
  char cVar5;
  undefined8 uVar6;
  byte *pbVar7;
  longlong *this;
  byte local_38 [24];
  
  pbVar7 = (byte *)this[0x11];
  uVar3 = 0;
  switch(*(undefined1 *)(*(longlong *)this[1] + 0x20 + (ulonglong)*pbVar7)) {
  case 1:
    uVar3 = FUN_009d9144();
    return uVar3;
  case 2:
    goto switchD_009d877a_caseD_2;
  case 3:
    this[0x11] = (longlong)(pbVar7 + 1);
    goto LAB_009d87c2;
  case 4:
    this[0x11] = (longlong)(pbVar7 + 1);
LAB_009d87c2:
    FUN_009d8a9c(0,0x10);
LAB_009d880d:
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    goto switchD_009d877a_caseD_2;
  case 5:
    this[0x11] = (longlong)(pbVar7 + 1);
    cVar5 = '\x02' - ((*(uint *)(*this + 0x28) >> 0xc & 1) == 0);
    uVar3 = 0;
    if ((*(uint *)(*this + 0x28) >> 0xd & 1) != 0) {
      cVar5 = '\0';
    }
    lVar2 = FUN_009d8a9c(0,0x18);
    *(char *)(lVar2 + 0x10) = cVar5;
    goto LAB_009d880d;
  case 6:
    if (pbVar7 != (byte *)this[0xf]) {
      this[0x11] = (longlong)(pbVar7 + 1);
LAB_009d884b:
      uVar6 = 0xffffffffffffffff;
LAB_009d8872:
      uVar3 = FUN_009d9e38(0,uVar6);
      return uVar3;
    }
    pbVar4 = local_38;
    FUN_009d5ed0();
    FUN_009d8cfc(pbVar4,0);
    break;
  case 7:
    if (pbVar7 != (byte *)this[0xf]) {
      this[0x11] = (longlong)(pbVar7 + 1);
      goto LAB_009d884b;
    }
    pbVar4 = local_38;
    FUN_009d5ed0();
    FUN_009d8cfc(pbVar4,0);
    break;
  case 8:
    if (pbVar7 != (byte *)this[0xf]) {
      this[0x11] = (longlong)(pbVar7 + 1);
      uVar6 = 1;
      goto LAB_009d8872;
    }
    pbVar4 = local_38;
    FUN_009d5ed0();
    FUN_009d8cfc(pbVar4,0);
    break;
  case 9:
    uVar3 = FUN_009daaae();
    return uVar3;
  default:
    goto switchD_009d877a_caseD_a;
  case 0xb:
switchD_009d877a_caseD_b:
    uVar3 = FUN_009da82e();
    return uVar3;
  case 0xc:
    uVar3 = FUN_009d941a();
    return uVar3;
  case 0xd:
    if ((*(uint *)(*this + 0x28) & 0xa00) != 0x800) goto switchD_009d877a_caseD_a;
    lVar2 = this[0x10] - (longlong)pbVar7;
    uVar3 = 0x800;
    do {
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
      if (lVar2 == 0) break;
      pbVar4 = pbVar7 + 1;
      this[0x11] = (longlong)pbVar4;
      bVar1 = *pbVar7;
      lVar2 = lVar2 + -1;
      pbVar7 = pbVar4;
    } while ((0xd < (ulonglong)bVar1) || ((0x3400UL >> ((ulonglong)bVar1 & 0x3f) & 1) == 0));
    goto switchD_009d877a_caseD_2;
  case 0xf:
    this[0x11] = (longlong)(pbVar7 + 1);
    uVar3 = FUN_009da2a6();
    return uVar3;
  case 0x10:
    if ((*(byte *)(*this + 0x29) & 2) == 0) goto switchD_009d877a_caseD_a;
    lVar2 = this[0xf];
    pbVar4 = local_38;
    FUN_009d5ed0();
    FUN_009d8cfc(pbVar4,(longlong)pbVar7 - lVar2);
    break;
  case 0x1a:
    if ((*(byte *)(*this + 0x2a) & 2) != 0) goto switchD_009d877a_caseD_b;
    goto switchD_009d877a_caseD_a;
  }
  if ((local_38[0] & 1) != 0) {
    operator_delete(pbVar4);
  }
  uVar3 = 0;
switchD_009d877a_caseD_2:
  return uVar3 & 0xffffffff;
switchD_009d877a_caseD_a:
  uVar3 = FUN_009d8ca4();
  return uVar3;
}




// ==================================================
// @0149bfe0 (723 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  float fVar1;
  bool bVar2;
  int iVar3;
  longlong *in_RCX;
  float *arg1;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong local_50;
  char local_48;
  float local_40;
  int local_38;
  float local_34;
  
  if (*in_RCX != 0) {
    FUN_00d216c0();
  }
  fVar12 = 0.0;
  if (2 < param_2) {
    fVar11 = arg1[1];
    local_40 = fVar11 - *arg1;
    uVar6 = param_2 - 1;
    uVar7 = (ulonglong)uVar6 - 1;
    fVar12 = fVar11;
    fVar10 = local_40;
    if (uVar6 == 2) {
      fVar9 = 0.0;
      iVar3 = 0;
      uVar4 = 2;
    }
    else {
      iVar3 = 0;
      fVar9 = 0.0;
      uVar5 = 2;
      do {
        fVar1 = arg1[uVar5];
        bVar8 = 0.0 <= fVar10;
        fVar13 = fVar1 - fVar12;
        bVar2 = 0.0 < fVar12;
        if ((bVar2 && bVar8) && fVar13 < 0.0) {
          fVar9 = fVar9 + fVar12;
        }
        fVar12 = arg1[uVar5 + 1];
        fVar10 = fVar12 - fVar1;
        if ((0.0 < fVar1 && 0.0 <= fVar13) && fVar10 < 0.0) {
          fVar9 = fVar9 + fVar1;
        }
        iVar3 = iVar3 + (uint)((bVar2 && bVar8) && fVar13 < 0.0) +
                (uint)((0.0 < fVar1 && 0.0 <= fVar13) && fVar10 < 0.0);
        uVar4 = uVar5 + 2;
        bVar8 = uVar5 != (uVar7 & 0xfffffffffffffffe);
        uVar5 = uVar4;
      } while (bVar8);
    }
    if ((uVar7 & 1) != 0) {
      bVar8 = arg1[uVar4] - fVar12 < 0.0;
      if ((0.0 < fVar12 && 0.0 <= fVar10) && bVar8) {
        fVar9 = fVar9 + fVar12;
      }
      iVar3 = iVar3 + (uint)((0.0 < fVar12 && 0.0 <= fVar10) && bVar8);
    }
    param_1 = DAT_0238fee8 / param_1;
    fVar12 = 0.0;
    if (iVar3 != 0) {
      fVar12 = fVar9 / (float)iVar3;
    }
    fVar10 = DAT_02391094 * fVar12;
    local_38 = 0;
    uVar7 = 2;
    local_34 = 0.0;
    while( true ) {
      bVar8 = 0.0 <= local_40;
      local_40 = arg1[uVar7] - fVar11;
      if (((bVar8) && (local_40 < 0.0)) && (fVar10 < fVar11)) {
        local_34 = local_34 + fVar11;
        local_38 = local_38 + 1;
        if (*in_RCX != 0) {
          FUN_014328b0((double)((float)((int)uVar7 + -1) * (float)param_1),(double)fVar11);
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_00d21140();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      if (uVar6 == uVar7) break;
      fVar11 = arg1[uVar7];
      uVar7 = uVar7 + 1;
    }
    if (local_38 != 0) {
      fVar12 = local_34 / (float)local_38;
    }
  }
  return fVar12;
}




// ==================================================
// @00904fb8 (713 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong this;
  byte local_40;
  
  FUN_009ad920(param_1,9);
  FUN_009ad920();
  FUN_00a6d1a0();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  if (*(char *)(this + 0x1a9) == '\0') {
    FUN_009ad920();
  }
  else {
    FUN_0088d900();
    FUN_009ad920();
    if ((local_40 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_009ad920();
  FUN_009ad920();
  if (*(char *)(this + 0x1aa) == '\0') {
    FUN_009ad920();
  }
  else {
    FUN_0088d900();
    FUN_009ad920();
    if ((local_40 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_009ad920();
  FUN_009ad920();
  if (*(char *)(this + 0x1ab) == '\0') {
    FUN_009ad920();
  }
  else {
    FUN_0088d900();
    FUN_009ad920();
    if ((local_40 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_009ad920();
  FUN_009ad920();
  if (*(char *)(this + 0x1ac) == '\0') {
    FUN_009ad920();
  }
  else {
    FUN_009052b0();
    FUN_009ad920();
    if ((local_40 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_009ad920();
  return;
}




// ==================================================
// @00c8ee40 (684 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *arg1;
  longlong this;
  longlong local_48;
  char local_40;
  
  cVar3 = (**(code **)(*(longlong *)*arg1 + 0x380))();
  if (cVar3 == '\0') {
    iVar6 = (**(code **)(*(longlong *)*arg1 + 0x428))();
    *(int *)(this + 0x20) = iVar6;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (**(code **)(*(longlong *)*arg1 + 0x428))();
    }
    (**(code **)(*(longlong *)*arg1 + 0x428))();
    FUN_00c8e340();
    (**(code **)(*(longlong *)*arg1 + 0x478))();
  }
  else {
    *(undefined1 *)(this + 0x1d) = 0;
    lVar2 = DAT_027815b0;
    plVar1 = (longlong *)*arg1;
    if (DAT_027815b0 != 0) {
      FUN_00d50b00();
    }
    uVar5 = (**(code **)(*plVar1 + 0x520))();
    *(undefined4 *)(this + 0x20) = uVar5;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027815c8;
    plVar1 = (longlong *)*arg1;
    if (DAT_027815c8 != 0) {
      FUN_00d50b00();
    }
    uVar4 = (**(code **)(*plVar1 + 0x510))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027726e8;
    plVar1 = (longlong *)*arg1;
    if (DAT_027726e8 != 0) {
      FUN_00d50b00();
    }
    iVar6 = (**(code **)(*plVar1 + 0x520))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027648d0;
    if (iVar6 != 0) {
      plVar1 = (longlong *)*arg1;
      if (DAT_027648d0 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x580))();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        iVar6 = *(int *)(local_48 + 0x18);
        FUN_00c8e340();
        _memcpy(param_1,(void *)(longlong)iVar6,param_3);
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(this + 0x1c) = uVar4;
    lVar2 = DAT_027815b8;
    plVar1 = (longlong *)*arg1;
    if (DAT_027815b8 != 0) {
      FUN_00d50b00();
    }
    iVar6 = (**(code **)(*plVar1 + 0x520))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(this + 0x18);
  if ((*(int *)(this + 0x20) != 0) && (iVar6 == 1)) {
    FUN_00e7d230();
  }
  return;
}




// ==================================================
// @008dbdd4 (656 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  string *this;
  string *psVar1;
  undefined8 *arg1;
  undefined8 *this;
  
  *this = &DAT_0251b958;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  this[0xb] = 0;
  this[0xc] = 0;
  this[0xd] = 0;
  this[0xe] = 0;
  this[0xf] = 0;
  this[0x10] = 0;
  this[0x11] = &DAT_0251b900;
  this[0x12] = &DAT_0251b7a0;
  this[0x13] = 0;
  *(undefined1 *)(this + 0x14) = 0;
  this[0x15] = &DAT_0251b7f8;
  this[0x16] = &DAT_0251b850;
  psVar1 = (string *)&DAT_0251b8a8;
  this[0x17] = &DAT_0251b8a8;
  this[0x18] = 0;
  *(undefined1 *)(this + 0x19) = 0;
  *(undefined4 *)(this + 0x1a) = 0;
  this[0x1b] = &DAT_0251b6d0;
  FUN_008d7552();
  FUN_008d7552();
  *(undefined2 *)(this + 0x22) = 0x101;
  this = (string *)0x0;
  this[0x23] = 0;
  this[0x24] = 0;
  this[0x25] = 0;
  *(undefined2 *)(this + 0x26) = 0x101;
  *(undefined8 *)((longlong)this + 0x132) = 0;
  *(undefined4 *)(this + 1) = *(undefined4 *)(arg1 + 1);
  *(undefined4 *)((longlong)this + 0xc) = *(undefined4 *)((longlong)arg1 + 0xc);
  std::string::operator=((string *)0x0,psVar1);
  std::string::operator=(this,psVar1);
  std::string::operator=(this,psVar1);
  std::string::operator=(this,psVar1);
  std::string::operator=(this,psVar1);
  this[0x13] = arg1[0x13];
  *(undefined1 *)(this + 0x14) = *(undefined1 *)(arg1 + 0x14);
  this[0x18] = arg1[0x18];
  *(undefined1 *)(this + 0x19) = *(undefined1 *)(arg1 + 0x19);
  *(undefined4 *)(this + 0x1a) = *(undefined4 *)(arg1 + 0x1a);
  std::string::operator=(this,psVar1);
  std::string::operator=(this,psVar1);
  *(undefined2 *)(this + 0x22) = *(undefined2 *)(arg1 + 0x22);
  if (this != arg1) {
    FUN_008df080();
  }
  *(undefined2 *)(this + 0x27) = *(undefined2 *)(arg1 + 0x27);
  this[0x26] = arg1[0x26];
  return;
}




// ==================================================
// @000830c0 (635 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *this;
  
  FUN_00d4ff40();
  *(undefined1 *)((longlong)this + 0xc) = 0;
  *this = &DAT_0267fa98;
  this[2] = 0;
  if (1 < DAT_02802630) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    this[2] = puVar3;
  }
  iVar2 = DAT_02802630;
  *(undefined1 *)(this + 7) = 0;
  this[8] = 0;
  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  *this = &DAT_0250c388;
  this[9] = &DAT_0250c9e8;
  this[10] = &DAT_0250ca38;
  this[0xb] = &DAT_0250ca68;
  this[0xc] = 0;
  this[0xd] = 0;
  this[0xe] = 0;
  this[0xf] = 0;
  this[0x10] = 0;
  this[0x11] = 0;
  this[0x12] = 0;
  this[0x13] = 0;
  this[0x14] = 0;
  this[0x15] = 0;
  this[0x16] = 0;
  this[0x17] = 0;
  *(undefined8 *)((longlong)this + 0xb9) = 0;
  *(undefined8 *)((longlong)this + 0xc1) = 0;
  this[0x1a] = 0;
  this[0x1b] = 0;
  *(undefined1 *)(this + 0x1c) = 0;
  this[0x1d] = 0;
  this[0x1e] = 0;
  this[0x1f] = 0;
  this[0x20] = 0;
  this[0x21] = 0;
  this[0x22] = 0;
  this[0x23] = 0;
  if (iVar2 < 2) {
    this[0x24] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    this[0x23] = puVar3;
    iVar2 = DAT_02802630;
    this[0x24] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      this[0x24] = puVar3;
      iVar2 = DAT_02802630;
    }
  }
  this[0x2c] = 0;
  *(undefined2 *)(this + 0x2d) = 0;
  *(undefined4 *)((longlong)this + 0x174) = 0;
  *(undefined2 *)(this + 0x2f) = 0;
  this[0x25] = 0;
  this[0x26] = 0;
  this[0x27] = 0;
  this[0x28] = 0;
  this[0x29] = 0;
  this[0x2a] = 0;
  *(undefined2 *)(this + 0x2b) = 0;
  *(undefined4 *)((longlong)this + 0x16c) = 0;
  *(undefined4 *)((longlong)this + 0x16f) = 0;
  this[0x30] = 0;
  this[0x31] = 0;
  this[0x32] = 0;
  this[0x33] = 0;
  this[0x34] = 0;
  this[0x35] = 0;
  this[0x36] = 0;
  if (1 < iVar2) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    this[0x36] = puVar3;
  }
  return;
}




// ==================================================
// @01433780 (633 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong this;
  undefined4 uVar4;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  FUN_00e332f0();
  *(undefined8 *)(this + 200) = 0xbff0000000000000;
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025f0d98;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  (*DAT_025f0db0)();
  puVar1 = *(undefined8 **)(this + 0xb0);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(this + 0xb0) = puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  puVar1 = *(undefined8 **)(this + 0xe8);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(this + 0xe8) = puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  uVar4 = FUN_00d6f370();
  if (local_78 == '\0') {
    if (local_80 == 0) {
      return;
    }
    uVar4 = FUN_00d50b00();
  }
  else if (local_80 == 0) {
    return;
  }
  lVar2 = DAT_026f6e78;
  if (DAT_026f6e78 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_70 = lVar2;
  local_68 = '\x01';
  uVar4 = FUN_00d72780(uVar4,&local_70);
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  lVar2 = DAT_027c19f0;
  if (DAT_027c19f0 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_60 = lVar2;
  local_58 = '\x01';
  uVar4 = FUN_00d72780(uVar4,&local_60);
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  lVar2 = DAT_027c19f8;
  if (DAT_027c19f8 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_50 = lVar2;
  local_48 = '\x01';
  uVar4 = FUN_00d72780(uVar4,&local_50);
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  lVar2 = DAT_027e2720;
  if (DAT_027e2720 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_40 = lVar2;
  local_38 = '\x01';
  uVar4 = FUN_00d72780(uVar4,&local_40);
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  lVar2 = DAT_027e2730;
  if (DAT_027e2730 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_30 = lVar2;
  local_28 = '\x01';
  FUN_00d72780(uVar4,&local_30);
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @009fb2f0 (621 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  byte bVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  __darwin_ct_rune_t _Var6;
  longlong *plVar7;
  byte *pbVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *arg1;
  ulonglong uVar11;
  longlong this;
  bool bVar12;
  longlong *plVar13;
  char cVar14;
  
  uVar2 = *param_3;
  *param_3 = uVar2 + 1;
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    uVar11 = (ulonglong)(bVar1 >> 1);
  }
  else {
    uVar11 = *(ulonglong *)(param_1 + 8);
  }
  if (uVar11 < uVar2 + 1) {
    plVar7 = (longlong *)*arg1;
    pbVar8 = param_1;
    if (plVar7 == (longlong *)0x0) {
LAB_009fb38a:
      plVar7 = (longlong *)0x0;
    }
    else if (plVar7[3] == plVar7[4]) {
      iVar4 = (**(code **)(*plVar7 + 0x48))();
      if (iVar4 == -1) {
        *arg1 = 0;
        goto LAB_009fb38a;
      }
      plVar7 = (longlong *)*arg1;
    }
    iVar4 = (int)pbVar8;
    plVar9 = (longlong *)*param_2;
    if (plVar9 == (longlong *)0x0) {
LAB_009fb3db:
      if (plVar7 == (longlong *)0x0) {
LAB_009fb3f6:
        sVar3 = 0;
        goto LAB_009fb54d;
      }
    }
    else if (plVar9[3] == plVar9[4]) {
      iVar5 = (**(code **)(*plVar9 + 0x48))();
      iVar4 = (int)pbVar8;
      if (iVar5 == -1) {
        *param_2 = 0;
        goto LAB_009fb3db;
      }
      iVar4 = (int)CONCAT71((int7)((ulonglong)pbVar8 >> 8),plVar7 != (longlong *)0x0);
      sVar3 = 0;
      if ((*param_2 == 0) != (plVar7 != (longlong *)0x0)) goto LAB_009fb54d;
    }
    else if (plVar7 != (longlong *)0x0) goto LAB_009fb3f6;
    plVar7 = (longlong *)*arg1;
    if (plVar7[3] == plVar7[4]) {
      (**(code **)(*plVar7 + 0x48))();
    }
    bVar12 = true;
  }
  else {
    if ((bVar1 & 1) == 0) {
      iVar4 = (int)param_1 + 1;
    }
    else {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x10);
    }
    bVar12 = false;
  }
  _Var6 = ___tolower(iVar4);
  plVar7 = *(longlong **)(this + 8);
  if (plVar7 != (longlong *)0x0) {
    plVar13 = (longlong *)(this + 8);
    plVar9 = plVar7;
    plVar10 = plVar13;
    do {
      cVar14 = (char)_Var6;
      if (cVar14 <= (char)plVar9[4]) {
        plVar10 = plVar9;
      }
      plVar9 = (longlong *)plVar9[(char)plVar9[4] < cVar14];
    } while (plVar9 != (longlong *)0x0);
    do {
      plVar9 = (longlong *)(ulonglong)((char)plVar7[4] <= cVar14);
      if (cVar14 < (char)plVar7[4]) {
        plVar13 = plVar7;
      }
      plVar7 = (longlong *)plVar7[(longlong)plVar9];
    } while (plVar7 != (longlong *)0x0);
    while (plVar7 = plVar10, plVar7 != plVar13) {
      cVar14 = (char)plVar9;
      if (bVar12) {
        plVar9 = (longlong *)*arg1;
        if (plVar9[3] == plVar9[4]) {
          (**(code **)(*plVar9 + 0x50))();
        }
        else {
          plVar9[3] = plVar9[3] + 1;
        }
        std::string::push_back(cVar14);
      }
      if (((short)plVar7[8] != -1) && (uVar2 = *param_3, *(ushort *)(param_1 + 0x18) < uVar2)) {
        *(short *)(param_1 + 0x1a) = (short)plVar7[8];
        *(short *)(param_1 + 0x18) = (short)uVar2;
      }
      FUN_009fb2f0(param_1,param_2,param_3);
      uVar2 = *param_3;
      *param_3 = uVar2 - 1;
      if ((*param_1 & 1) == 0) {
        uVar11 = (ulonglong)(*param_1 >> 1);
      }
      else {
        uVar11 = *(ulonglong *)(param_1 + 8);
      }
      if (uVar2 - 1 <= uVar11) {
        bVar12 = false;
      }
      plVar9 = (longlong *)plVar7[1];
      if ((longlong *)plVar7[1] == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
        plVar10 = (longlong *)plVar7[2];
        if (*(longlong **)plVar7[2] != plVar7) {
          do {
            plVar7 = (longlong *)plVar7[2];
            plVar9 = plVar7;
            plVar10 = (longlong *)plVar7[2];
          } while (*(longlong **)plVar7[2] != plVar7);
        }
      }
      else {
        do {
          plVar10 = plVar9;
          plVar9 = (longlong *)*plVar10;
        } while (plVar9 != (longlong *)0x0);
        plVar9 = (longlong *)0x0;
      }
    }
  }
  sVar3 = *(short *)(param_1 + 0x1a);
LAB_009fb54d:
  return (int)sVar3;
}




// ==================================================
// @000f4cc0 (593 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  char cVar1;
  longlong this;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  FUN_00d3ecf0();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  cVar1 = FUN_000f45b0();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    FUN_00d3ecf0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    cVar1 = FUN_00d23d70();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      FUN_00d3ecf0();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_00d23f50();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_000f43b0();
      FUN_003b8a40();
      FUN_00d3ecf0();
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      cVar1 = FUN_000f3de0();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((cVar1 != '\0') && (FUN_000f4240(), *(int *)(local_48 + 0xc) == 0)) {
        *(undefined4 *)(this + 0xd8) = 0;
      }
    }
  }
  return;
}




// ==================================================
// @006fe4f0 (588 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong this;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  int local_38;
  undefined8 local_34;
  
  if (*(longlong *)(this + 0x10) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    cVar2 = FUN_00e34230();
    if (cVar2 == '\0') {
      cVar2 = FUN_00e34240();
      if (cVar2 == '\0') {
        lVar3 = *(longlong *)(this + 0x10);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        local_60 = *param_2;
        local_58 = '\0';
        FUN_002e4d80(param_1,&local_60);
        lVar1 = local_50;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_48 = '\0';
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          local_48 = 0;
          local_50 = 0;
          local_40 = lVar1;
          local_34 = 0;
          for (lVar3 = 0; local_38 = (int)lVar3, local_38 < *(int *)(lVar1 + 0xc); lVar3 = lVar3 + 1
              ) {
            local_50 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + lVar3 * 8);
            FUN_01bca0a0();
          }
          FUN_00713b30();
          FUN_00d50b20();
        }
      }
    }
    else {
      lVar3 = *(longlong *)(this + 0x10);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      local_70 = *param_2;
      local_68 = '\0';
      FUN_002e4d80(param_1,&local_70);
      lVar1 = local_50;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_48 = '\0';
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        local_48 = 0;
        local_50 = 0;
        local_40 = lVar1;
        local_34 = 0;
        for (lVar3 = 0; local_38 = (int)lVar3, local_38 < *(int *)(lVar1 + 0xc); lVar3 = lVar3 + 1)
        {
          local_50 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + lVar3 * 8);
          FUN_01bca0a0();
        }
        FUN_00713b30();
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ==================================================
// @014a89c0 (584 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  float fVar1;
  dword dVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *this;
  longlong lVar7;
  longlong lVar8;
  longlong local_58;
  char local_50;
  longlong local_38;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_014a42b0(0,0,DAT_02391090,DAT_02421228);
  if (local_58 == 0) {
    bVar5 = true;
    local_38 = 0;
    dVar2 = MACH_HEADER.filetype;
  }
  else {
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
    bVar5 = false;
    dVar2 = *(dword *)(local_58 + 0xc);
    local_38 = local_58;
  }
  if ((int)dVar2 < 1) {
    bVar4 = false;
    lVar8 = 0;
  }
  else {
    lVar7 = 0;
    lVar8 = 0;
    bVar4 = false;
    do {
      lVar3 = *(longlong *)(*(longlong *)(local_38 + 0x10) + lVar7 * 8);
      if (lVar8 == lVar3) {
        if ((!bVar4) && (lVar8 != 0)) {
          bVar4 = true;
          FUN_00d50b00();
        }
LAB_014a8b30:
        fVar1 = *(float *)(lVar8 + 0x20);
      }
      else {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        if ((bVar4) && (lVar8 != 0)) {
          FUN_00d50b20();
          bVar4 = true;
          lVar8 = lVar3;
          goto LAB_014a8b30;
        }
        bVar4 = true;
        fVar1 = *(float *)(lVar3 + 0x20);
        lVar8 = lVar3;
      }
      if (((param_1 < fVar1) && (param_2 <= *(double *)(lVar8 + 0x10))) &&
         (*(double *)(lVar8 + 0x10) < param_3)) {
        FUN_00d21140();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(local_38 + 0xc));
  }
  *this = puVar6;
  *(undefined1 *)(this + 1) = 1;
  if (!bVar5) {
    FUN_00d50b20();
  }
  if ((bVar4) && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @0113d230 (581 bytes) — logic_branch
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  int iVar1;
  
  if (DAT_027153a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02715380 = _DAT_0238fcc0;
      uRam0000000002715384 = _UNK_0238fcc4;
      uRam0000000002715388 = _UNK_0238fcc8;
      uRam000000000271538c = _UNK_0238fccc;
      _DAT_02715390 = 0x500000004;
      _DAT_02715398 = 6;
      DAT_0271539c = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_027153d8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027153a8 = "MUAudioSourceDescriptionType";
      _DAT_027153b0 = 7;
      DAT_027153b4 = DAT_0271539c;
      _DAT_027153b8 = &DAT_02715380;
      _DAT_027153c0 = &DAT_02715340;
      _DAT_027153c8 = 0;
      uRam00000000027153d0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_0279b6c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e0c38 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e0b88 = FUN_000fddb0();
          _DAT_026e0b70 = "MUElementAnalyzer";
          _DAT_026e0b78 = 0x180;
          _DAT_026e0b80 = FUN_000fdd80;
          _DAT_026e0b90 = 0;
          uRam00000000026e0b98 = 0;
          _DAT_026e0ba0 = 0;
          _DAT_026e0c18 = 0;
          uRam00000000026e0c20 = 0;
          _DAT_026e0c28 = 0;
          DAT_026e0c2a = 1;
          _DAT_026e0ba8 = 0;
          uRam00000000026e0bb0 = 0;
          _DAT_026e0bb8 = 0;
          uRam00000000026e0bc0 = 0;
          _DAT_026e0bc8 = 0;
          uRam00000000026e0bd0 = 0;
          _DAT_026e0bd8 = 0;
          uRam00000000026e0be0 = 0;
          _DAT_026e0be8 = 0;
          uRam00000000026e0bf0 = 0;
          _DAT_026e0bf8 = 0;
          uRam00000000026e0c00 = 0;
          _DAT_026e0c08 = 0;
          uRam00000000026e0c10 = 0;
          DAT_026e0c33 = 0;
          _DAT_026e0c2b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0279b680 = "_currentDescriptionType";
      _DAT_0279b688 = &DAT_026e0b70;
      _DAT_0279b690 = 0;
      _DAT_0279b698 = 0x6500;
      _DAT_0279b6a0 = "MUAudioSourceDescriptionType";
      _DAT_0279b6a8 = &DAT_027153a8;
      _DAT_0279b6b0 = 0;
      uRam000000000279b6b8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0279b680;
}




// ==================================================
// @01433c40 (576 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  void *pvVar1;
  longlong lVar2;
  undefined8 *puVar3;
  pthread_key_t pVar4;
  void *in_RCX;
  longlong *plVar5;
  longlong *this;
  longlong local_60;
  char local_58;
  
  plVar5 = (longlong *)*this;
  pvVar1 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar1 != (void *)0x0) {
    plVar5 = (longlong *)*this;
    lVar2 = FUN_00e8b990();
    if (lVar2 != 0) {
      plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    }
  }
  lVar2 = (**(code **)(*plVar5 + 0x388))();
  FUN_00c8e690(SUB84(((double)lVar2 / param_1) * _DAT_0241eeb8,0));
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_60 + 0x18)) {
    _memset_pattern16(in_RCX,(void *)((ulonglong)((*(uint *)(local_60 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined1 *)(puVar3 + 7) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0;
  *(undefined2 *)(puVar3 + 8) = 0;
  pVar4 = 0x25dc9e8;
  *puVar3 = &DAT_025dc9e8;
  puVar3[9] = 0;
  puVar3[10] = 0;
  (*DAT_025dca00)();
  pvVar1 = _pthread_getspecific(pVar4);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb950(SUB84(_DAT_0241eeb8,0));
  pvVar1 = _pthread_getspecific(pVar4);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb890();
  pvVar1 = _pthread_getspecific(pVar4);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc1d0();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}




// ==================================================
// @008ef24a (560 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  undefined8 uVar1;
  longlong arg1;
  undefined8 *this;
  
  *this = &DAT_0251c2d0;
  this[0x23] = 0;
  this[0x24] = 0;
  this[0x25] = 0;
  ___bzero();
  this[0x2e] = 0;
  this[0x2d] = 0;
  this[0x2c] = 0;
  this[0x2b] = 0;
  this[0x2a] = 0;
  *(undefined2 *)(this + 0x2f) = 0;
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  *(undefined4 *)(this + 0x22) = *(undefined4 *)(arg1 + 0x110);
  std::string::operator=(param_1,param_2);
  uVar1 = *(undefined8 *)(arg1 + 0x138);
  this[0x26] = *(undefined8 *)(arg1 + 0x130);
  this[0x27] = uVar1;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(arg1 + 0x140);
  this[0x29] = *(undefined8 *)(arg1 + 0x148);
  std::string::operator=(param_1,param_2);
  *(undefined2 *)(this + 0x2f) = *(undefined2 *)(arg1 + 0x178);
  uVar1 = *(undefined8 *)(arg1 + 0x168);
  this[0x2e] = *(undefined8 *)(arg1 + 0x170);
  this[0x2d] = uVar1;
  return;
}




// ==================================================
// @008b7348 (551 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *arg1;
  ulonglong uVar5;
  longlong this;
  undefined4 extraout_XMM0_Da;
  int local_44;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*arg1 + 200))();
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))(&local_36,&local_44);
    iVar2 = iVar2 + iVar1;
    if (local_44 == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_36 == 10000) {
      if (local_44 != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008b74c3;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x2a) = 1;
    }
    else {
      if (local_36 == 2) {
        if (local_44 == 8) {
          iVar3 = (**(code **)(*arg1 + 0x138))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(this + 0x29) = 1;
          goto LAB_008b74c9;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else if (local_36 == 1) {
        if (local_44 == 0xf) {
          *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 8);
          iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
          uVar5 = (ulonglong)local_34;
          uVar4 = *(longlong *)(this + 0x10) - *(longlong *)(this + 8);
          if (uVar4 < uVar5) {
            FUN_0088d550();
          }
          else if (uVar5 < uVar4) {
            *(ulonglong *)(this + 0x10) = *(longlong *)(this + 8) + uVar5;
          }
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            uVar4 = 0;
            do {
              iVar2 = (**(code **)(*arg1 + 0x128))();
              iVar1 = iVar1 + iVar2;
              uVar4 = uVar4 + 1;
            } while (uVar4 < local_34);
          }
          iVar3 = (**(code **)(*arg1 + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(undefined1 *)(this + 0x28) = 1;
          goto LAB_008b74c9;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
LAB_008b74c3:
      iVar3 = iVar3 + iVar2;
    }
LAB_008b74c9:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}




// ==================================================
// @008b806c (551 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *arg1;
  ulonglong uVar5;
  longlong this;
  undefined4 extraout_XMM0_Da;
  int local_44;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*arg1 + 200))();
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))(&local_36,&local_44);
    iVar2 = iVar2 + iVar1;
    if (local_44 == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_36 == 10000) {
      if (local_44 != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008b81e7;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x2a) = 1;
    }
    else {
      if (local_36 == 2) {
        if (local_44 == 8) {
          iVar3 = (**(code **)(*arg1 + 0x138))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(this + 0x29) = 1;
          goto LAB_008b81ed;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else if (local_36 == 1) {
        if (local_44 == 0xf) {
          *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 8);
          iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
          uVar5 = (ulonglong)local_34;
          uVar4 = *(longlong *)(this + 0x10) - *(longlong *)(this + 8);
          if (uVar4 < uVar5) {
            FUN_0088d550();
          }
          else if (uVar5 < uVar4) {
            *(ulonglong *)(this + 0x10) = *(longlong *)(this + 8) + uVar5;
          }
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            uVar4 = 0;
            do {
              iVar2 = (**(code **)(*arg1 + 0x128))();
              iVar1 = iVar1 + iVar2;
              uVar4 = uVar4 + 1;
            } while (uVar4 < local_34);
          }
          iVar3 = (**(code **)(*arg1 + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(undefined1 *)(this + 0x28) = 1;
          goto LAB_008b81ed;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
LAB_008b81e7:
      iVar3 = iVar3 + iVar2;
    }
LAB_008b81ed:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}




// ==================================================
// @007935f0 (547 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *arg1;
  longlong *this;
  undefined8 *local_48;
  char local_40;
  
  puVar3 = (undefined8 *)*arg1;
  if (puVar3 == (undefined8 *)0x0) {
    if (*(int *)(this[0x35] + 0xc) == 0) {
      return;
    }
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    lVar1 = *arg1;
    *arg1 = (longlong)puVar3;
    if (((char)arg1[1] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
      puVar3 = (undefined8 *)*arg1;
    }
    *(undefined1 *)(arg1 + 1) = 1;
    if (*(int *)(this[0x35] + 0xc) == *(int *)((longlong)puVar3 + 0xc)) goto LAB_0079369e;
  }
  else {
    if ((*(int *)((longlong)puVar3 + 0xc) == 0) && (*(int *)(this[0x35] + 0xc) == 0)) {
      return;
    }
    if (*(int *)(this[0x35] + 0xc) == *(int *)((longlong)puVar3 + 0xc)) {
LAB_0079369e:
      local_40 = '\0';
      cVar2 = FUN_00d23fd0();
      local_48 = puVar3;
      if (cVar2 != '\0') {
        return;
      }
    }
  }
  FUN_003231a0();
  puVar3 = (undefined8 *)this[0x35];
  puVar4 = puVar3;
  if (puVar3 == local_48) goto LAB_0079374a;
  puVar4 = local_48;
  if (local_40 == '\0') {
    if (local_48 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_007936ff;
    }
    FUN_00d50b00();
    puVar3 = (undefined8 *)this[0x35];
    this[0x35] = (longlong)local_48;
  }
  else {
    local_40 = '\0';
LAB_007936ff:
    this[0x35] = (longlong)puVar4;
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
    puVar4 = local_48;
  }
LAB_0079374a:
  if ((local_40 != '\0') && (puVar4 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this + 0x610))();
  if (local_40 == '\0') {
    if (local_48 == (undefined8 *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_48 == (undefined8 *)0x0) {
    return;
  }
  for (iVar5 = 0; iVar5 < *(int *)((longlong)local_48 + 0xc); iVar5 = iVar5 + 1) {
    FUN_006f63e0();
  }
  FUN_000e3600();
  FUN_00d50b20();
  return;
}




// ==================================================
// @00904b02 (520 bytes) — math_loop
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  longlong *arg1;
  longlong this;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int local_38;
  short local_32;
  
  FUN_0088d1d0();
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar6 = this + 0x10;
  lVar7 = this + 8;
  while( true ) {
    psVar5 = &local_32;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar5,&local_38,param_3,param_4,lVar6,lVar7,uVar8,uVar9,uVar10);
    if (local_38 == 0) break;
    switch(local_32) {
    case 1:
      if (local_38 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(undefined1 *)(this + 0x1a8) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 2:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(undefined1 *)(this + 0x1a9) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 3:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(undefined1 *)(this + 0x1aa) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 4:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(undefined1 *)(this + 0x1ab) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 5:
      if (local_38 == 0xc) {
        iVar3 = FUN_00902ee2();
        *(undefined1 *)(this + 0x1ac) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar4 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar3 + iVar2 + iVar1 + iVar4;
  }
  iVar3 = (**(code **)(*arg1 + 0xd0))();
  if ((uVar8 & 1) != 0) {
    operator_delete(psVar5);
  }
  *(int *)(arg1 + 3) = (int)arg1[3] + -1;
  return iVar3 + iVar2 + iVar1;
}




// ==================================================
// @00a2eb36 (506 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  undefined8 *this;
  
  *this = &DAT_0252a098;
  this[1] = &DAT_0252a720;
  *(undefined4 *)(this + 2) = 0xffffffff;
  this[3] = 0xffffffffffffffff;
  *(undefined2 *)(this + 4) = 0x101;
  *(undefined1 *)(this + 5) = 0;
  *(undefined8 *)((longlong)this + 0x2c) = 0;
  *(undefined8 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x3c) = 0;
  *(undefined4 *)((longlong)this + 0x44) = 0;
  FUN_00a2fdfa();
  this[0xe] = 0;
  this[0xd] = 0;
  this[0xc] = 0;
  FUN_00a2fdfa();
  *(undefined4 *)(this + 0x12) = 0;
  FUN_00a2fdfa();
  FUN_00a2fdfa();
  *(undefined4 *)(this + 0x19) = 0;
  FUN_00a2fdfa();
  this[0x1f] = 0;
  this[0x1e] = 0;
  this[0x1d] = 0;
  FUN_00a2fdfa();
  FUN_00a2fdfa();
  this[0x2c] = 0;
  this[0x2b] = 0;
  this[0x2a] = 0;
  this[0x26] = 0;
  this[0x27] = 0;
  this[0x28] = 0;
  *(undefined4 *)(this + 0x29) = 0;
  *(undefined4 *)(this + 0x2d) = 1;
  this[0x2e] = 0;
  this[0x2f] = 0;
  this[0x30] = 0;
  this[0x31] = 0;
  this[0x32] = 0;
  this[0x33] = 0;
  this[0x34] = 0;
  this[0x35] = 0;
  this[0x36] = 0;
  *(undefined1 *)(this + 0x37) = 0;
  *(undefined8 *)((longlong)this + 0x1b9) = 0x100010001000001;
  *(undefined8 *)((longlong)this + 0x1c1) = 0x10100010001;
  *(undefined4 *)((longlong)this + 0x1c9) = 0x100;
  *(undefined1 *)((longlong)this + 0x1cd) = 0;
  return;
}




// ==================================================
// @00a348e6 (503 bytes) — calculation
// Known properties of MUElementAnalyzer:
// _engineSampleOffset, _engineIndex, _originalSignal, _originalSignalBufferWithMargin, _sampleCount, _nonSilentSampleCount, _sampleRate, _duration, _parameterValuesPerSecond, _parameterDataSize, _maxAmplitude, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum, _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum, _isPercussive, _isPolyphonic, _pitchJumpsSum, _pitchBarycenter, _allPercussiveDecay, _allRhythmicQuality, _allTonality
// ... and more

{
  undefined8 uVar1;
  undefined8 *this;
  
  *this = &DAT_0252a390;
  this[1] = &DAT_0252a720;
  *(undefined4 *)(this + 2) = 0xffffffff;
  this[3] = 0xffffffffffffffff;
  *(undefined2 *)(this + 4) = 0x101;
  *(undefined1 *)(this + 5) = 0;
  *(undefined8 *)((longlong)this + 0x2c) = 0;
  *(undefined8 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x3c) = 0;
  *(undefined4 *)((longlong)this + 0x44) = 0;
  FUN_00a35b58();
  *(undefined4 *)(this + 0xc) = 0x1e;
  this[0xd] = 0;
  this[0xe] = 0;
  this[0xf] = 0;
  this[0x10] = 0;
  FUN_00a35b58();
  FUN_00a35b58();
  *(undefined4 *)(this + 0x17) = 0;
  FUN_00a35b58();
  FUN_00a35b58();
  *(undefined1 *)(this + 0x1e) = 1;
  this[0x1f] = 0;
  this[0x20] = 0;
  this[0x21] = 0;
  *(undefined2 *)(this + 0x22) = 1;
  this[0x23] = 0;
  this[0x24] = 0;
  this[0x25] = 0;
  *(undefined2 *)(this + 0x26) = 1;
  *(undefined8 *)((longlong)this + 0x134) = 0;
  *(undefined4 *)(this + 0x2e) = 0;
  this[0x28] = 0;
  this[0x29] = 0;
  this[0x2a] = 0;
  this[0x2b] = 0;
  this[0x2c] = 0;
  this[0x2d] = 0;
  *(undefined1 *)((longlong)this + 0x174) = 1;
  this[0x37] = 0;
  this[0x36] = 0;
  this[0x35] = 0;
  this[0x34] = 0;
  this[0x33] = 0;
  this[0x32] = 0;
  this[0x31] = 0;
  this[0x30] = 0;
  this[0x2f] = 0;
  *(undefined1 *)(this + 0x38) = 0;
  uVar1 = _UNK_023d4eb8;
  *(undefined8 *)((longlong)this + 0x1c1) = _DAT_023d4eb0;
  *(undefined8 *)((longlong)this + 0x1c9) = uVar1;
  *(undefined2 *)((longlong)this + 0x1d1) = 0;
  *(undefined1 *)((longlong)this + 0x1d3) = 1;
  *(undefined2 *)(this + 0x3b) = 0;
  *(undefined4 *)((longlong)this + 0x1d4) = 0;
  *(undefined4 *)((longlong)this + 0x1da) = 1;
  return;
}



