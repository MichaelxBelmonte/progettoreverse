// ===== MUSpectrumShaper — Annotated small functions =====
// 129 readable functions
// Known properties: 65
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

// ==================================================
// @011b2e50 (2923 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong arg1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_02590538;
  uVar1 = *(undefined4 *)(arg1 + 0x14);
  uVar2 = *(undefined4 *)(arg1 + 0x18);
  uVar3 = *(undefined4 *)(arg1 + 0x1c);
  uVar4 = *(undefined4 *)(arg1 + 0x20);
  uVar5 = *(undefined4 *)(arg1 + 0x24);
  uVar6 = *(undefined4 *)(arg1 + 0x28);
  uVar7 = *(undefined4 *)(arg1 + 0x2c);
  *(undefined4 *)(this + 2) = *(undefined4 *)(arg1 + 0x10);
  *(undefined4 *)((longlong)this + 0x14) = uVar1;
  *(undefined4 *)(this + 3) = uVar2;
  *(undefined4 *)((longlong)this + 0x1c) = uVar3;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)((longlong)this + 0x24) = uVar5;
  *(undefined4 *)(this + 5) = uVar6;
  *(undefined4 *)((longlong)this + 0x2c) = uVar7;
  this[6] = *(undefined8 *)(arg1 + 0x30);
  *this = &DAT_025f0a18;
  this[7] = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b3b90();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSpectrumShaperParameterSet");
  }
  *(undefined4 *)(this + 8) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b3c80();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x44) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b28e0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b28a8 = FUN_011b2c10();
        _DAT_027b28a0 = "_spectrumSize";
        _DAT_027b28b0 = 0;
        _DAT_027b28b8 = 0x6900;
        _DAT_027b28c0 = "GNInt";
        _DAT_027b28c8 = 0;
        uRam00000000027b28d0 = 0;
        _DAT_027b28d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(this + 9) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2928 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b28f0 = FUN_011b2c10();
        _DAT_027b28e8 = "_needsProcessSpectrumShaper";
        _DAT_027b28f8 = 0;
        _DAT_027b2900 = 0x6201;
        _DAT_027b2908 = "bool";
        _DAT_027b2910 = 0;
        uRam00000000027b2918 = 0;
        _DAT_027b2920 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x49) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2970 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2938 = FUN_011b2c10();
        _DAT_027b2930 = "_needsProcessFormants";
        _DAT_027b2940 = 0;
        _DAT_027b2948 = 0x6201;
        _DAT_027b2950 = "bool";
        _DAT_027b2958 = 0;
        uRam00000000027b2960 = 0;
        _DAT_027b2968 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x4a) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b29b8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2980 = FUN_011b2c10();
        _DAT_027b2978 = "_needsProcessFormantsIsValid";
        _DAT_027b2988 = 0;
        _DAT_027b2990 = 0x6201;
        _DAT_027b2998 = "bool";
        _DAT_027b29a0 = 0;
        uRam00000000027b29a8 = 0;
        _DAT_027b29b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x4b) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2a00 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b29c8 = FUN_011b2c10();
        _DAT_027b29c0 = "_didRequestCacheValidation";
        _DAT_027b29d0 = 0;
        _DAT_027b29d8 = 0x6211;
        _DAT_027b29e0 = "bool";
        _DAT_027b29e8 = 0;
        uRam00000000027b29f0 = 0;
        _DAT_027b29f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_011b3df0();
  FUN_011b3ed0();
  FUN_011b3fb0();
  FUN_011b4090();
  FUN_011b4170();
  *(undefined1 *)(this + 0xf) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2bb0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2b78 = FUN_011b2c10();
        _DAT_027b2b70 = "_appliedSpectrumFactorsAreValid";
        _DAT_027b2b80 = 0;
        _DAT_027b2b88 = 0x6201;
        _DAT_027b2b90 = "bool";
        _DAT_027b2b98 = 0;
        uRam00000000027b2ba0 = 0;
        _DAT_027b2ba8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_011b4250();
  *(undefined1 *)(this + 0x11) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2c40 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2c08 = FUN_011b2c10();
        _DAT_027b2c00 = "_combFactorsAreValid";
        _DAT_027b2c10 = 0;
        _DAT_027b2c18 = 0x6201;
        _DAT_027b2c20 = "bool";
        _DAT_027b2c28 = 0;
        uRam00000000027b2c30 = 0;
        _DAT_027b2c38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x8c) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2c88 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2c50 = FUN_011b2c10();
        _DAT_027b2c48 = "_referenceFrequency";
        _DAT_027b2c58 = 0;
        _DAT_027b2c60 = 0x6600;
        _DAT_027b2c68 = "float";
        _DAT_027b2c70 = 0;
        uRam00000000027b2c78 = 0;
        _DAT_027b2c80 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(this + 0x12) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2cd0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2c98 = FUN_011b2c10();
        _DAT_027b2c90 = "_oneByFTiltPow";
        _DAT_027b2ca0 = 0;
        _DAT_027b2ca8 = 0x6600;
        _DAT_027b2cb0 = "float";
        _DAT_027b2cb8 = 0;
        uRam00000000027b2cc0 = 0;
        _DAT_027b2cc8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x94) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2d18 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2ce0 = FUN_011b2c10();
        _DAT_027b2cd8 = "_oneByFDiffPow";
        _DAT_027b2ce8 = 0;
        _DAT_027b2cf0 = 0x6600;
        _DAT_027b2cf8 = "float";
        _DAT_027b2d00 = 0;
        uRam00000000027b2d08 = 0;
        _DAT_027b2d10 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(this + 0x13) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2d60 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2d28 = FUN_011b2c10();
        _DAT_027b2d20 = "_oneByFDecayPow";
        _DAT_027b2d30 = 0;
        _DAT_027b2d38 = 0x6601;
        _DAT_027b2d40 = "float";
        _DAT_027b2d48 = 0;
        uRam00000000027b2d50 = 0;
        _DAT_027b2d58 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x9c) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2da8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2d70 = FUN_011b2c10();
        _DAT_027b2d68 = "_oneByFDecayPowIsValid";
        _DAT_027b2d78 = 0;
        _DAT_027b2d80 = 0x6200;
        _DAT_027b2d88 = "bool";
        _DAT_027b2d90 = 0;
        uRam00000000027b2d98 = 0;
        _DAT_027b2da0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(this + 0x14) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2df0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2db8 = FUN_011b2c10();
        _DAT_027b2db0 = "_combStart";
        _DAT_027b2dc0 = 0;
        _DAT_027b2dc8 = 0x6600;
        _DAT_027b2dd0 = "float";
        _DAT_027b2dd8 = 0;
        uRam00000000027b2de0 = 0;
        _DAT_027b2de8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0xa4) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2e38 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2e00 = FUN_011b2c10();
        _DAT_027b2df8 = "_combBalance";
        _DAT_027b2e08 = 0;
        _DAT_027b2e10 = 0x6600;
        _DAT_027b2e18 = "float";
        _DAT_027b2e20 = 0;
        uRam00000000027b2e28 = 0;
        _DAT_027b2e30 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(this + 0x15) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2e80 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2e48 = FUN_011b2c10();
        _DAT_027b2e40 = "_combWidth";
        _DAT_027b2e50 = 0;
        _DAT_027b2e58 = 0x6600;
        _DAT_027b2e60 = "float";
        _DAT_027b2e68 = 0;
        uRam00000000027b2e70 = 0;
        _DAT_027b2e78 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @019806e0 (2921 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong *plVar7;
  longlong *plVar8;
  char cVar9;
  void *pvVar10;
  pthread_key_t pVar11;
  char *pcVar12;
  longlong *this;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  undefined8 uVar18;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  undefined4 uStack_100;
  undefined1 local_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float local_68;
  longlong local_58;
  char local_50;
  char local_48 [8];
  longlong *local_40;
  char local_38 [8];
  
  if (*(char *)((longlong)this + 0x194) != '\0') {
    *(undefined1 *)((longlong)this + 0x194) = 0;
    FUN_0197f820();
    FUN_01981860();
  }
  FUN_019801c0();
  plVar7 = local_40;
  pVar11 = CONCAT31((int3)((uint)param_1 >> 8),local_38[0]);
  pcVar12 = local_48;
  if (local_38[0] != '\0') {
    pcVar12 = local_38;
  }
  local_48[0] = local_38[0];
  *pcVar12 = '\0';
  if ((local_38[0] != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    if ((char)this[0x31] == '\0') {
      FUN_01989f80();
      plVar1 = local_40;
      lVar2 = this[0x2e];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      cVar9 = (**(code **)(
                          "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                          + *plVar1 + 0x20))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar9 == '\0') {
        if (*(char *)((longlong)this + 0x189) != '\0') {
          *(undefined1 *)((longlong)this + 0x189) = 0;
          *(undefined1 *)((longlong)this + 0x194) = 1;
          (**(code **)(*this + 0x620))();
        }
      }
      else if (*(char *)((longlong)this + 0x189) == '\0') {
        *(undefined1 *)((longlong)this + 0x189) = 1;
        *(undefined1 *)((longlong)this + 0x194) = 1;
        (**(code **)(*this + 0x620))();
      }
    }
    else {
      FUN_01989f80();
      plVar1 = local_40;
      lVar2 = this[0x2e];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      cVar9 = (**(code **)(
                          "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                          + *plVar1 + 0x18))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar9 == '\0') {
        if (*(char *)((longlong)this + 0x189) != '\0') {
          *(undefined1 *)((longlong)this + 0x189) = 0;
          *(undefined1 *)((longlong)this + 0x194) = 1;
          (**(code **)(*this + 0x620))();
        }
      }
      else if (*(char *)((longlong)this + 0x189) == '\0') {
        *(undefined1 *)((longlong)this + 0x189) = 1;
        *(undefined1 *)((longlong)this + 0x194) = 1;
        (**(code **)(*this + 0x620))();
      }
    }
    if ((int)this[0x32] == 0) {
      FUN_019801c0();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 == (longlong *)0x0) {
        FUN_0198a800();
      }
      (**(code **)(*plVar7 + 0x4d8))();
      (**(code **)(*this + 0x4d0))();
      goto LAB_01981223;
    }
  }
  if (this[0x2e] == 0) goto LAB_01981223;
  FUN_01989f80();
  plVar8 = local_40;
  plVar1 = this + 0x2e;
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  fVar13 = (float)(**(code **)(*plVar8 + 0xc38))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)this[0x31] == '\0') {
LAB_01980bcf:
    pvVar10 = _pthread_getspecific(pVar11);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012641c0();
    plVar8 = local_40;
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_68 = fVar13;
    if (plVar8 == (longlong *)0x0) goto LAB_01980d5b;
    FUN_01989f80();
    plVar8 = local_40;
    pvVar10 = _pthread_getspecific(pVar11);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012641c0();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_68 = (float)(**(code **)(*plVar8 + 0xc38))();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_68 <= fVar13) goto LAB_01980d5b;
    local_118 = FUN_0198a7d0(fVar13 + _DAT_0241b4d0);
    local_108 = (float)FUN_0198a7d0(local_68 + _DAT_0241b4d4);
    uStack_110 = extraout_XMM0_Qb;
    uStack_100 = extraout_XMM0_Dc;
  }
  else {
    pvVar10 = _pthread_getspecific(pVar11);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01268710();
    plVar8 = local_40;
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_01989f80();
      plVar8 = local_40;
      pvVar10 = _pthread_getspecific(pVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01268710();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      fVar14 = (float)(**(code **)(*plVar8 + 0xc38))();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      fVar15 = (float)FUN_0198a7d0();
      fVar16 = (float)FUN_0198a7d0();
      if ((float)((uint)(fVar15 - fVar16) & _DAT_02390140) < DAT_02390d30) {
        fVar13 = fVar14;
      }
    }
    local_68 = fVar13;
    if ((char)this[0x31] == '\0') goto LAB_01980bcf;
LAB_01980d5b:
    local_108 = (float)FUN_0198a7d0(fVar13 + _DAT_0241b4d4);
    local_118 = FUN_0198a7d0(local_68 + _DAT_0241b4d0);
    uStack_110 = extraout_XMM0_Qb_00;
    uStack_100 = extraout_XMM0_Dc_00;
  }
  local_78._4_4_ = local_108;
  local_78._0_4_ = local_108;
  uStack_70 = uStack_100;
  uStack_6c = uStack_100;
  if ((char)this[0x31] == '\0') {
    FUN_01989f80();
    plVar8 = local_40;
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    cVar9 = (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                        + *plVar8 + 0x20))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar9 == '\0') {
      FUN_01989f80();
      plVar1 = local_40;
      pvVar10 = _pthread_getspecific(pVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01259520();
      uVar18 = (**(code **)(*plVar1 + 0x938))();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      auVar21._8_8_ = extraout_XMM0_Qb_04;
      auVar21._0_8_ = uVar18;
      _local_78 = blendps(_local_78,auVar21,1);
      if (*(char *)((longlong)this + 0x189) != '\0') {
        *(undefined1 *)((longlong)this + 0x189) = 0;
        *(undefined1 *)((longlong)this + 0x194) = 1;
        (**(code **)(*this + 0x620))();
      }
    }
    else {
      FUN_01989f80();
      plVar1 = local_40;
      pvVar10 = _pthread_getspecific(pVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar17 = (double)FUN_01259520();
      FUN_01989f80();
      uVar18 = (**(code **)(*plVar1 + 0x938))(dVar17 + *(double *)(local_58 + 1000));
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      auVar5._8_8_ = extraout_XMM0_Qb_02;
      auVar5._0_8_ = uVar18;
      _local_78 = blendps(_local_78,auVar5,1);
      if (*(char *)((longlong)this + 0x189) != '\x01') {
        *(undefined1 *)((longlong)this + 0x189) = 1;
        *(undefined1 *)((longlong)this + 0x194) = 1;
        (**(code **)(*this + 0x620))();
      }
    }
  }
  else {
    FUN_01989f80();
    plVar8 = local_40;
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    cVar9 = (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                        + *plVar8 + 0x18))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar9 == '\0') {
      FUN_01989f80();
      plVar1 = local_40;
      pvVar10 = _pthread_getspecific(pVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a280();
      uVar18 = (**(code **)(*plVar1 + 0x938))();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      auVar6._8_8_ = extraout_XMM0_Qb_03;
      auVar6._0_8_ = uVar18;
      _local_78 = blendps(_local_78,auVar6,1);
      if (*(char *)((longlong)this + 0x189) != '\0') {
        *(undefined1 *)((longlong)this + 0x189) = 0;
        *(undefined1 *)((longlong)this + 0x194) = 1;
        (**(code **)(*this + 0x620))();
      }
    }
    else {
      FUN_01989f80();
      plVar1 = local_40;
      pvVar10 = _pthread_getspecific(pVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar17 = (double)FUN_0125a280();
      FUN_01989f80();
      uVar18 = (**(code **)(*plVar1 + 0x938))(dVar17 + *(double *)(local_58 + 0x3d8));
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      auVar4._8_8_ = extraout_XMM0_Qb_01;
      auVar4._0_8_ = uVar18;
      _local_78 = blendps(_local_78,auVar4,1);
      if (*(char *)((longlong)this + 0x189) != '\x01') {
        *(undefined1 *)((longlong)this + 0x189) = 1;
        *(undefined1 *)((longlong)this + 0x194) = 1;
        (**(code **)(*this + 0x620))();
      }
    }
  }
  auVar3._8_8_ = uStack_110;
  auVar3._0_8_ = local_118;
  auVar19._4_12_ = auVar3._4_12_;
  auVar19._0_4_ = (float)local_118 - local_108;
  auVar21 = insertps(_DAT_0241b4c0,auVar19,0x10);
  auVar20._4_12_ = local_78._4_12_;
  auVar20._0_4_ = local_78._0_4_ + DAT_023b1614;
  FUN_00d051c0(auVar20._0_8_,auVar21._0_8_);
  (**(code **)(*this + 0x4d0))();
LAB_01981223:
  if ((local_48[0] != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0105f8e0 (2759 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
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
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined1 (*arg1) [16];
  ulonglong *this;
  uint uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  bool bVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [64];
  undefined1 extraout_var [56];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [64];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [64];
  undefined1 auVar43 [16];
  undefined1 auVar44 [64];
  undefined1 auVar45 [16];
  undefined1 auVar46 [64];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  
  if ((param_2 < 0x80) && (*(uint *)((longlong)this + 0x14) == 0)) {
    param_2 = param_2 >> 4;
    if (param_2 != 0) {
      uVar20 = this[3];
      uVar22 = this[4];
      uVar30 = *this;
      uVar31 = this[1];
      uVar23 = this[2];
      uVar24 = (uVar22 >> 2) + uVar22;
      do {
        uVar32 = uVar30 + *(longlong *)*arg1;
        puVar17 = *arg1;
        uVar30 = (ulonglong)CARRY8(uVar30,*(ulonglong *)*arg1);
        uVar25 = uVar31 + *(ulonglong *)(puVar17 + 8);
        uVar28 = uVar25 + uVar30;
        arg1 = arg1 + 1;
        lVar27 = uVar23 + param_1 +
                 (ulonglong)(CARRY8(uVar31,*(ulonglong *)(puVar17 + 8)) || CARRY8(uVar25,uVar30));
        auVar54._8_8_ = 0;
        auVar54._0_8_ = uVar22;
        auVar53._8_8_ = 0;
        auVar53._0_8_ = uVar32;
        auVar36._8_8_ = 0;
        auVar36._0_8_ = uVar20;
        auVar34._8_8_ = 0;
        auVar34._0_8_ = uVar32;
        auVar55._8_8_ = 0;
        auVar55._0_8_ = uVar20;
        auVar49._8_8_ = 0;
        auVar49._0_8_ = uVar28;
        auVar54 = auVar54 * auVar53 + auVar55 * auVar49;
        uVar23 = auVar54._0_8_;
        auVar52._8_8_ = 0;
        auVar52._0_8_ = uVar24;
        auVar45._8_8_ = 0;
        auVar45._0_8_ = uVar28;
        auVar36 = auVar52 * auVar45 + auVar36 * auVar34;
        uVar32 = auVar36._0_8_;
        uVar31 = auVar36._8_8_;
        uVar30 = lVar27 * uVar24;
        uVar28 = uVar23 + uVar30;
        uVar25 = uVar31 + uVar28;
        uVar28 = auVar54._8_8_ + (ulonglong)CARRY8(uVar23,uVar30) + lVar27 * uVar20 +
                 (ulonglong)CARRY8(uVar31,uVar28);
        uVar31 = (uVar28 & 0xfffffffffffffffc) + (uVar28 >> 2);
        uVar30 = uVar32 + uVar31;
        uVar23 = (ulonglong)CARRY8(uVar32,uVar31);
        uVar31 = uVar25 + uVar23;
        uVar23 = (uVar28 & 3) + (ulonglong)CARRY8(uVar25,uVar23);
        param_2 = param_2 - 1;
      } while (param_2 != 0);
      *this = uVar30;
      this[1] = uVar31;
      this[2] = uVar23;
    }
    return;
  }
  uVar20 = param_2 & 0xfffffffffffffff0;
  if (uVar20 == 0) {
    return;
  }
  if (*(uint *)((longlong)this + 0x14) == 0) {
    uVar22 = *this;
    uVar30 = this[1];
    uVar31 = (ulonglong)(uint)this[2];
    if ((param_2 & 0x10) != 0) {
      bVar33 = CARRY8(uVar22,*(ulonglong *)*arg1);
      uVar22 = uVar22 + *(longlong *)*arg1;
      uVar23 = (ulonglong)bVar33;
      bVar33 = CARRY8(uVar30,*(ulonglong *)(*arg1 + 8));
      uVar24 = uVar30 + *(ulonglong *)(*arg1 + 8);
      uVar30 = uVar24 + uVar23;
      arg1 = arg1 + 1;
      uVar31 = uVar31 + param_1 + (ulonglong)(bVar33 || CARRY8(uVar24,uVar23));
      uVar20 = uVar20 - 0x10;
      FUN_0105f660();
    }
    auVar38 = ZEXT464((uint)(uVar22 >> 0x1a) & 0x3ffffff);
    auVar42 = ZEXT464((uint)(uVar22 >> 0x34) | (uint)(uVar30 << 0xc) & 0x3ffffff);
    auVar44 = ZEXT464((uint)(uVar30 >> 0xe) & 0x3ffffff);
    auVar46 = ZEXT464((uint)(uVar31 << 0x18) | (uint)(uVar30 >> 0x28));
    *(uint *)((longlong)this + 0x14) = 1;
    auVar35._0_8_ = FUN_0105f6e0((uint)uVar22 & 0x3ffffff);
    auVar35._8_56_ = extraout_var;
  }
  else {
    if ((param_2 & 0x10) != 0) {
      uVar22 = this[1];
      uVar30 = (*this & 0xffffffff) + ((*this & 0xffffffff80000000) >> 6);
      uVar31 = uVar30 + (uVar22 << 0x34);
      uVar22 = ((uVar22 & 0xffffffff) >> 0xc) + ((uVar22 & 0xffffffff80000000) >> 0x12) +
               (ulonglong)CARRY8(uVar30,uVar22 << 0x34);
      uVar30 = (ulonglong)(uint)this[2] << 0x28;
      uVar23 = uVar22 + uVar30;
      uVar28 = (ulonglong)((uint)this[2] >> 0x18) + (ulonglong)CARRY8(uVar22,uVar30);
      uVar22 = (uVar28 >> 2) + (uVar28 & 0xfffffffffffffffc);
      uVar30 = uVar31 + uVar22;
      uVar22 = (ulonglong)CARRY8(uVar31,uVar22);
      uVar24 = uVar23 + uVar22;
      uVar32 = uVar30 + *(longlong *)*arg1;
      puVar17 = *arg1;
      uVar30 = (ulonglong)CARRY8(uVar30,*(ulonglong *)*arg1);
      uVar31 = uVar24 + *(ulonglong *)(puVar17 + 8);
      uVar25 = uVar31 + uVar30;
      arg1 = arg1 + 1;
      uVar22 = (uVar28 & 3) + (ulonglong)CARRY8(uVar23,uVar22) + param_1 +
               (ulonglong)(CARRY8(uVar24,*(ulonglong *)(puVar17 + 8)) || CARRY8(uVar31,uVar30));
      FUN_0105f660();
      if (param_1 == 0) {
        *this = uVar32;
        this[1] = uVar25;
        this[2] = uVar22;
      }
      else {
        uVar18 = (uint)uVar32 & 0x3ffffff;
        uVar19 = (uint)(uVar32 >> 0x1a) & 0x3ffffff;
        uVar29 = (uint)(uVar32 >> 0x34) | (int)uVar25 * 0x1000 & 0x3ffffffU;
        uVar21 = (uint)(uVar25 >> 0xe) & 0x3ffffff;
        uVar26 = (int)uVar22 * 0x1000000 | (uint)(uVar25 >> 0x28);
        uVar20 = uVar20 - 0x10;
        if (uVar20 != 0) {
          auVar35 = ZEXT464(uVar18);
          auVar38 = ZEXT464(uVar19);
          auVar42 = ZEXT464(uVar29);
          auVar44 = ZEXT464(uVar21);
          auVar46 = ZEXT464(uVar26);
          goto LAB_0105fb98;
        }
        *(uint *)this = uVar18;
        *(uint *)((longlong)this + 4) = uVar19;
        *(uint *)(this + 1) = uVar29;
        *(uint *)((longlong)this + 0xc) = uVar21;
        *(uint *)(this + 2) = uVar26;
      }
      return;
    }
    auVar35 = ZEXT464((uint)*this);
    auVar38 = ZEXT464(*(uint *)((longlong)this + 4));
    auVar42 = ZEXT464((uint)this[1]);
    auVar44 = ZEXT464(*(uint *)((longlong)this + 0xc));
    auVar46 = ZEXT464((uint)this[2]);
  }
LAB_0105fb98:
  auVar36 = auVar46._0_16_;
  auVar53 = auVar44._0_16_;
  auVar54 = auVar38._0_16_;
  auVar52 = auVar35._0_16_;
  auVar55 = auVar42._0_16_;
  uVar22 = uVar20 - 0x40;
  if (uVar20 < 0x40) {
    arg1 = arg1 + -2;
  }
  auVar34 = *(undefined1 (*) [16])(this + 6);
  pauVar1 = (undefined1 (*) [16])(this + 0xe);
  auVar49 = arg1[2];
  auVar45 = arg1[3];
  auVar48 = vpsrldq_avx(auVar49,6);
  auVar51 = vpsrldq_avx(auVar45,6);
  auVar47 = vpunpckhqdq_avx(auVar49,auVar45);
  auVar49 = vpunpcklqdq_avx(auVar49,auVar45);
  auVar48 = vpunpcklqdq_avx(auVar48,auVar51);
  auVar51 = vpsrlq_avx(auVar47,0x28);
  auVar47 = vpsrlq_avx(auVar49,0x1a);
  auVar45 = vpand_avx(auVar49,_DAT_01060cc0);
  auVar49 = vpsrlq_avx(auVar48,4);
  auVar47 = vpand_avx(auVar47,_DAT_01060cc0);
  auVar48 = vpsrlq_avx(auVar48,0x1e);
  auVar49 = vpand_avx(auVar49,_DAT_01060cc0);
  auVar48 = vpand_avx(auVar48,_DAT_01060cc0);
  auVar51 = vpor_avx(auVar51,_DAT_01060ca0);
  if (uVar20 >= 0x40 && uVar22 != 0) {
    auVar37 = vpshufd_avx(auVar34,0xee);
    auVar34 = vpshufd_avx(auVar34,0x44);
    auVar41 = vpshufd_avx(*(undefined1 (*) [16])(this + 8),0xee);
    auVar40 = vpshufd_avx(*(undefined1 (*) [16])(this + 8),0x44);
    auVar43 = vpshufd_avx(*(undefined1 (*) [16])(this + 10),0xee);
    auVar4 = vpshufd_avx(*(undefined1 (*) [16])(this + 10),0x44);
    auVar5 = vpshufd_avx(*(undefined1 (*) [16])(this + 0xc),0xee);
    auVar6 = vpshufd_avx(*(undefined1 (*) [16])(this + 0xc),0x44);
    auVar7 = vpshufd_avx(*pauVar1,0xee);
    auVar8 = vpshufd_avx(*pauVar1,0x44);
    auVar9 = vpshufd_avx(*(undefined1 (*) [16])(this + 0x10),0xee);
    auVar10 = vpshufd_avx(*(undefined1 (*) [16])(this + 0x10),0x44);
    auVar11 = vpshufd_avx(*(undefined1 (*) [16])(this + 0x12),0xee);
    auVar12 = vpshufd_avx(*(undefined1 (*) [16])(this + 0x12),0x44);
    auVar13 = vpshufd_avx(*(undefined1 (*) [16])(this + 0x14),0xee);
    auVar14 = vpshufd_avx(*(undefined1 (*) [16])(this + 0x14),0x44);
    auVar15 = vpshufd_avx(*(undefined1 (*) [16])(this + 0x16),0xee);
    auVar16 = vpshufd_avx(*(undefined1 (*) [16])(this + 0x16),0x44);
    do {
      auVar54 = vpmuludq_avx(auVar34,auVar45);
      auVar53 = vpmuludq_avx(auVar34,auVar47);
      auVar52 = vpmuludq_avx(auVar34,auVar49);
      auVar55 = vpmuludq_avx(auVar34,auVar48);
      auVar36 = vpmuludq_avx(auVar34,auVar51);
      auVar39 = vpmuludq_avx(auVar51,auVar4);
      auVar3 = vpmuludq_avx(auVar40,auVar48);
      auVar54 = vpaddq_avx(auVar54,auVar39);
      auVar36 = vpaddq_avx(auVar36,auVar3);
      auVar39 = vpmuludq_avx(auVar40,auVar49);
      auVar3 = vpmuludq_avx(auVar40,auVar47);
      auVar55 = vpaddq_avx(auVar55,auVar39);
      auVar52 = vpaddq_avx(auVar52,auVar3);
      auVar39 = vpmuludq_avx(auVar40,auVar45);
      auVar3 = vpmuludq_avx(auVar6,auVar49);
      auVar53 = vpaddq_avx(auVar53,auVar39);
      auVar36 = vpaddq_avx(auVar36,auVar3);
      auVar39 = vpmuludq_avx(auVar6,auVar47);
      auVar3 = vpmuludq_avx(auVar6,auVar45);
      auVar55 = vpaddq_avx(auVar55,auVar39);
      auVar52 = vpaddq_avx(auVar52,auVar3);
      auVar39 = vpmuludq_avx(auVar8,auVar51);
      auVar3 = vpmuludq_avx(auVar8,auVar48);
      auVar53 = vpaddq_avx(auVar53,auVar39);
      auVar39 = vpaddq_avx(auVar54,auVar3);
      auVar54 = vpmuludq_avx(auVar10,auVar47);
      auVar50 = vpmuludq_avx(auVar10,auVar45);
      auVar3 = vpaddq_avx(auVar36,auVar54);
      auVar55 = vpaddq_avx(auVar55,auVar50);
      auVar54 = vpmuludq_avx(auVar12,auVar51);
      auVar36 = vpmuludq_avx(auVar12,auVar48);
      auVar52 = vpaddq_avx(auVar52,auVar54);
      auVar54 = *arg1;
      auVar53 = vpaddq_avx(auVar53,auVar36);
      auVar36 = vpmuludq_avx(auVar12,auVar49);
      auVar50 = vpmuludq_avx(auVar16,auVar49);
      auVar49 = vpaddq_avx(auVar39,auVar36);
      auVar36 = arg1[1];
      auVar53 = vpaddq_avx(auVar53,auVar50);
      auVar48 = vpmuludq_avx(auVar16,auVar48);
      auVar51 = vpmuludq_avx(auVar16,auVar51);
      auVar39 = vpsrldq_avx(auVar54,6);
      auVar52 = vpaddq_avx(auVar52,auVar48);
      auVar55 = vpaddq_avx(auVar55,auVar51);
      auVar51 = vpsrldq_avx(auVar36,6);
      auVar45 = vpmuludq_avx(auVar45,auVar14);
      auVar47 = vpmuludq_avx(auVar16,auVar47);
      auVar48 = vpunpckhqdq_avx(auVar54,auVar36);
      auVar45 = vpaddq_avx(auVar3,auVar45);
      auVar49 = vpaddq_avx(auVar49,auVar47);
      auVar54 = vpunpcklqdq_avx(auVar54,auVar36);
      auVar51 = vpunpcklqdq_avx(auVar39,auVar51);
      auVar47 = vpsrldq_avx(auVar48,5);
      auVar36 = vpsrlq_avx(auVar54,0x1a);
      auVar54 = vpand_avx(auVar54,_DAT_01060cc0);
      auVar48 = vpsrlq_avx(auVar51,4);
      auVar36 = vpand_avx(auVar36,_DAT_01060cc0);
      auVar47 = vpand_avx(auVar47,_DAT_01060c80);
      auVar51 = vpsrlq_avx(auVar51,0x1e);
      auVar48 = vpand_avx(auVar48,_DAT_01060cc0);
      auVar51 = vpand_avx(auVar51,_DAT_01060cc0);
      auVar39 = vpor_avx(auVar47,_DAT_01060ca0);
      auVar54 = vpaddq_avx(auVar54,auVar35._0_16_);
      auVar36 = vpaddq_avx(auVar36,auVar38._0_16_);
      auVar47 = vpaddq_avx(auVar48,auVar42._0_16_);
      auVar48 = vpaddq_avx(auVar51,auVar44._0_16_);
      auVar51 = vpaddq_avx(auVar39,auVar46._0_16_);
      pauVar2 = arg1 + 2;
      bVar33 = 0x3f < uVar22;
      uVar22 = uVar22 - 0x40;
      arg1 = arg1 + 4;
      if (!bVar33) {
        arg1 = pauVar2;
      }
      auVar39 = vpmuludq_avx(auVar37,auVar54);
      auVar3 = vpmuludq_avx(auVar37,auVar36);
      auVar49 = vpaddq_avx(auVar49,auVar39);
      auVar53 = vpaddq_avx(auVar53,auVar3);
      auVar39 = vpmuludq_avx(auVar37,auVar47);
      auVar3 = vpmuludq_avx(auVar37,auVar48);
      auVar52 = vpaddq_avx(auVar52,auVar39);
      auVar55 = vpaddq_avx(auVar55,auVar3);
      auVar39 = vpmuludq_avx(auVar37,auVar51);
      auVar3 = vpmuludq_avx(auVar51,auVar43);
      auVar45 = vpaddq_avx(auVar45,auVar39);
      auVar49 = vpaddq_avx(auVar49,auVar3);
      auVar39 = vpmuludq_avx(auVar41,auVar47);
      auVar3 = vpmuludq_avx(auVar41,auVar48);
      auVar55 = vpaddq_avx(auVar55,auVar39);
      auVar45 = vpaddq_avx(auVar45,auVar3);
      auVar39 = vpmuludq_avx(auVar41,auVar36);
      auVar3 = vpmuludq_avx(auVar41,auVar54);
      auVar52 = vpaddq_avx(auVar52,auVar39);
      auVar53 = vpaddq_avx(auVar53,auVar3);
      auVar39 = vpmuludq_avx(auVar5,auVar47);
      auVar3 = vpmuludq_avx(auVar5,auVar36);
      auVar45 = vpaddq_avx(auVar45,auVar39);
      auVar55 = vpaddq_avx(auVar55,auVar3);
      auVar39 = vpmuludq_avx(auVar5,auVar54);
      auVar3 = vpmuludq_avx(auVar7,auVar51);
      auVar52 = vpaddq_avx(auVar52,auVar39);
      auVar53 = vpaddq_avx(auVar53,auVar3);
      auVar39 = vpmuludq_avx(auVar7,auVar48);
      auVar3 = vpmuludq_avx(auVar9,auVar36);
      auVar49 = vpaddq_avx(auVar49,auVar39);
      auVar45 = vpaddq_avx(auVar45,auVar3);
      auVar39 = vpmuludq_avx(auVar9,auVar54);
      auVar3 = vpmuludq_avx(auVar11,auVar51);
      auVar39 = vpaddq_avx(auVar55,auVar39);
      auVar3 = vpaddq_avx(auVar52,auVar3);
      auVar55 = arg1[2];
      auVar52 = vpmuludq_avx(auVar11,auVar48);
      auVar50 = vpmuludq_avx(auVar11,auVar47);
      auVar53 = vpaddq_avx(auVar53,auVar52);
      auVar52 = arg1[3];
      auVar49 = vpaddq_avx(auVar49,auVar50);
      auVar47 = vpmuludq_avx(auVar15,auVar47);
      auVar48 = vpmuludq_avx(auVar15,auVar48);
      auVar50 = vpsrldq_avx(auVar55,6);
      auVar53 = vpaddq_avx(auVar53,auVar47);
      auVar47 = vpmuludq_avx(auVar15,auVar51);
      auVar51 = vpsrldq_avx(auVar52,6);
      auVar3 = vpaddq_avx(auVar3,auVar48);
      auVar39 = vpaddq_avx(auVar39,auVar47);
      auVar54 = vpmuludq_avx(auVar54,auVar13);
      auVar36 = vpmuludq_avx(auVar15,auVar36);
      auVar47 = vpunpckhqdq_avx(auVar55,auVar52);
      auVar54 = vpaddq_avx(auVar45,auVar54);
      auVar36 = vpaddq_avx(auVar49,auVar36);
      auVar55 = vpunpcklqdq_avx(auVar55,auVar52);
      auVar52 = vpunpcklqdq_avx(auVar50,auVar51);
      auVar51 = vpsrldq_avx(auVar47,5);
      auVar49 = vpsrlq_avx(auVar55,0x1a);
      auVar45 = vpand_avx(auVar55,_DAT_01060cc0);
      auVar48 = vpsrlq_avx(auVar52,4);
      auVar47 = vpand_avx(auVar49,_DAT_01060cc0);
      auVar55 = vpand_avx(auVar51,_DAT_01060c80);
      auVar52 = vpsrlq_avx(auVar52,0x1e);
      auVar49 = vpand_avx(auVar48,_DAT_01060cc0);
      auVar48 = vpand_avx(auVar52,_DAT_01060cc0);
      auVar51 = vpor_avx(auVar55,_DAT_01060ca0);
      auVar55 = vpsrlq_avx(auVar39,0x1a);
      auVar52 = vpand_avx(auVar39,_DAT_01060cc0);
      auVar54 = vpaddq_avx(auVar54,auVar55);
      auVar39 = vpsrlq_avx(auVar36,0x1a);
      auVar55 = vpand_avx(auVar36,_DAT_01060cc0);
      auVar36 = vpaddq_avx(auVar53,auVar39);
      auVar53 = vpsrlq_avx(auVar54,0x1a);
      auVar39 = vpand_avx(auVar54,_DAT_01060cc0);
      auVar54 = vpsrlq_avx(auVar36,0x1a);
      auVar50 = vpand_avx(auVar36,_DAT_01060cc0);
      auVar54 = vpaddq_avx(auVar3,auVar54);
      auVar36 = vpaddq_avx(auVar55,auVar53);
      auVar55 = vpsllq_avx(auVar53,2);
      auVar36 = vpaddq_avx(auVar36,auVar55);
      auVar53 = vpsrlq_avx(auVar54,0x1a);
      auVar55 = vpand_avx(auVar54,_DAT_01060cc0);
      auVar42 = ZEXT1664(auVar55);
      auVar53 = vpaddq_avx(auVar52,auVar53);
      auVar54 = vpsrlq_avx(auVar36,0x1a);
      auVar52 = vpand_avx(auVar36,_DAT_01060cc0);
      auVar35 = ZEXT1664(auVar52);
      auVar54 = vpaddq_avx(auVar50,auVar54);
      auVar38 = ZEXT1664(auVar54);
      auVar36 = vpsrlq_avx(auVar53,0x1a);
      auVar53 = vpand_avx(auVar53,_DAT_01060cc0);
      auVar44 = ZEXT1664(auVar53);
      auVar36 = vpaddq_avx(auVar39,auVar36);
      auVar46 = ZEXT1664(auVar36);
    } while (bVar33 && uVar22 != 0);
  }
  auVar34 = vpshufd_avx(auVar34,0x10);
  if (uVar22 == 0xffffffffffffffe0) {
    auVar49 = vpaddq_avx(auVar49,auVar55);
    auVar45 = vpaddq_avx(auVar45,auVar52);
    auVar47 = vpaddq_avx(auVar47,auVar54);
    auVar48 = vpaddq_avx(auVar48,auVar53);
    auVar51 = vpaddq_avx(auVar51,auVar36);
  }
  auVar41 = vpmuludq_avx(auVar34,auVar49);
  auVar43 = vpmuludq_avx(auVar34,auVar45);
  auVar5 = vpshufd_avx(*(undefined1 (*) [16])(this + 8),0x10);
  auVar40 = vpmuludq_avx(auVar34,auVar47);
  auVar37 = vpmuludq_avx(auVar34,auVar48);
  auVar34 = vpmuludq_avx(auVar34,auVar51);
  auVar4 = vpmuludq_avx(auVar5,auVar48);
  auVar34 = vpaddq_avx(auVar34,auVar4);
  auVar6 = vpshufd_avx(*(undefined1 (*) [16])(this + 10),0x10);
  auVar4 = vpmuludq_avx(auVar5,auVar49);
  auVar37 = vpaddq_avx(auVar37,auVar4);
  auVar7 = vpshufd_avx(*(undefined1 (*) [16])(this + 0xc),0x10);
  auVar4 = vpmuludq_avx(auVar5,auVar47);
  auVar41 = vpaddq_avx(auVar41,auVar4);
  auVar4 = vpmuludq_avx(auVar5,auVar45);
  auVar40 = vpaddq_avx(auVar40,auVar4);
  auVar4 = vpmuludq_avx(auVar6,auVar51);
  auVar43 = vpaddq_avx(auVar43,auVar4);
  auVar5 = vpshufd_avx(*pauVar1,0x10);
  auVar4 = vpmuludq_avx(auVar7,auVar49);
  auVar34 = vpaddq_avx(auVar34,auVar4);
  auVar4 = vpmuludq_avx(auVar7,auVar47);
  auVar37 = vpaddq_avx(auVar37,auVar4);
  auVar6 = vpshufd_avx(*(undefined1 (*) [16])(this + 0x10),0x10);
  auVar4 = vpmuludq_avx(auVar7,auVar45);
  auVar41 = vpaddq_avx(auVar41,auVar4);
  auVar4 = vpmuludq_avx(auVar5,auVar51);
  auVar40 = vpaddq_avx(auVar40,auVar4);
  auVar7 = vpshufd_avx(*(undefined1 (*) [16])(this + 0x12),0x10);
  auVar4 = vpmuludq_avx(auVar5,auVar48);
  auVar43 = vpaddq_avx(auVar43,auVar4);
  auVar4 = vpmuludq_avx(auVar6,auVar47);
  auVar34 = vpaddq_avx(auVar34,auVar4);
  auVar4 = vpmuludq_avx(auVar6,auVar45);
  auVar37 = vpaddq_avx(auVar37,auVar4);
  auVar5 = vpshufd_avx(*(undefined1 (*) [16])(this + 0x14),0x10);
  auVar4 = vpmuludq_avx(auVar7,auVar51);
  auVar41 = vpaddq_avx(auVar41,auVar4);
  auVar6 = vpshufd_avx(*(undefined1 (*) [16])(this + 0x16),0x10);
  auVar4 = vpmuludq_avx(auVar7,auVar48);
  auVar40 = vpaddq_avx(auVar40,auVar4);
  auVar4 = vpmuludq_avx(auVar7,auVar49);
  auVar43 = vpaddq_avx(auVar43,auVar4);
  auVar45 = vpmuludq_avx(auVar5,auVar45);
  auVar34 = vpaddq_avx(auVar34,auVar45);
  auVar45 = vpmuludq_avx(auVar6,auVar51);
  auVar51 = vpaddq_avx(auVar37,auVar45);
  auVar45 = vpmuludq_avx(auVar6,auVar48);
  auVar48 = vpaddq_avx(auVar41,auVar45);
  auVar49 = vpmuludq_avx(auVar6,auVar49);
  auVar45 = vpaddq_avx(auVar40,auVar49);
  auVar49 = vpmuludq_avx(auVar6,auVar47);
  auVar49 = vpaddq_avx(auVar43,auVar49);
  if (uVar22 != 0xffffffffffffffe0) {
    auVar47 = *arg1;
    auVar37 = arg1[1];
    auVar40 = vpsrldq_avx(auVar47,6);
    auVar43 = vpsrldq_avx(auVar37,6);
    auVar41 = vpunpckhqdq_avx(auVar47,auVar37);
    auVar47 = vpunpcklqdq_avx(auVar47,auVar37);
    auVar40 = vpunpcklqdq_avx(auVar40,auVar43);
    auVar43 = vpsrlq_avx(auVar41,0x28);
    auVar37 = vpsrlq_avx(auVar47,0x1a);
    auVar47 = vpand_avx(auVar47,_DAT_01060cc0);
    auVar41 = vpsrlq_avx(auVar40,4);
    auVar37 = vpand_avx(auVar37,_DAT_01060cc0);
    auVar40 = vpsrlq_avx(auVar40,0x1e);
    auVar41 = vpand_avx(auVar41,_DAT_01060cc0);
    auVar40 = vpand_avx(auVar40,_DAT_01060cc0);
    auVar43 = vpor_avx(auVar43,_DAT_01060ca0);
    auVar4 = vpshufd_avx(*(undefined1 (*) [16])(this + 6),0x32);
    auVar52 = vpaddq_avx(auVar47,auVar52);
    auVar54 = vpaddq_avx(auVar37,auVar54);
    auVar55 = vpaddq_avx(auVar41,auVar55);
    auVar53 = vpaddq_avx(auVar40,auVar53);
    auVar36 = vpaddq_avx(auVar43,auVar36);
    auVar47 = vpmuludq_avx(auVar4,auVar52);
    auVar49 = vpaddq_avx(auVar49,auVar47);
    auVar47 = vpmuludq_avx(auVar4,auVar54);
    auVar45 = vpaddq_avx(auVar45,auVar47);
    auVar47 = vpmuludq_avx(auVar4,auVar55);
    auVar47 = vpaddq_avx(auVar48,auVar47);
    auVar37 = vpshufd_avx(*(undefined1 (*) [16])(this + 8),0x32);
    auVar48 = vpmuludq_avx(auVar4,auVar53);
    auVar48 = vpaddq_avx(auVar51,auVar48);
    auVar51 = vpmuludq_avx(auVar4,auVar36);
    auVar34 = vpaddq_avx(auVar34,auVar51);
    auVar51 = vpmuludq_avx(auVar37,auVar53);
    auVar34 = vpaddq_avx(auVar34,auVar51);
    auVar41 = vpshufd_avx(*(undefined1 (*) [16])(this + 10),0x32);
    auVar51 = vpmuludq_avx(auVar37,auVar55);
    auVar48 = vpaddq_avx(auVar48,auVar51);
    auVar40 = vpshufd_avx(*(undefined1 (*) [16])(this + 0xc),0x32);
    auVar51 = vpmuludq_avx(auVar37,auVar54);
    auVar47 = vpaddq_avx(auVar47,auVar51);
    auVar51 = vpmuludq_avx(auVar37,auVar52);
    auVar45 = vpaddq_avx(auVar45,auVar51);
    auVar51 = vpmuludq_avx(auVar41,auVar36);
    auVar49 = vpaddq_avx(auVar49,auVar51);
    auVar37 = vpshufd_avx(*pauVar1,0x32);
    auVar51 = vpmuludq_avx(auVar40,auVar55);
    auVar34 = vpaddq_avx(auVar34,auVar51);
    auVar51 = vpmuludq_avx(auVar40,auVar54);
    auVar48 = vpaddq_avx(auVar48,auVar51);
    auVar41 = vpshufd_avx(*(undefined1 (*) [16])(this + 0x10),0x32);
    auVar51 = vpmuludq_avx(auVar40,auVar52);
    auVar47 = vpaddq_avx(auVar47,auVar51);
    auVar51 = vpmuludq_avx(auVar37,auVar36);
    auVar45 = vpaddq_avx(auVar45,auVar51);
    auVar40 = vpshufd_avx(*(undefined1 (*) [16])(this + 0x12),0x32);
    auVar51 = vpmuludq_avx(auVar37,auVar53);
    auVar49 = vpaddq_avx(auVar49,auVar51);
    auVar51 = vpmuludq_avx(auVar41,auVar54);
    auVar34 = vpaddq_avx(auVar34,auVar51);
    auVar51 = vpmuludq_avx(auVar41,auVar52);
    auVar48 = vpaddq_avx(auVar48,auVar51);
    auVar37 = vpshufd_avx(*(undefined1 (*) [16])(this + 0x14),0x32);
    auVar51 = vpmuludq_avx(auVar40,auVar36);
    auVar47 = vpaddq_avx(auVar47,auVar51);
    auVar41 = vpshufd_avx(*(undefined1 (*) [16])(this + 0x16),0x32);
    auVar51 = vpmuludq_avx(auVar40,auVar53);
    auVar45 = vpaddq_avx(auVar45,auVar51);
    auVar51 = vpmuludq_avx(auVar40,auVar55);
    auVar49 = vpaddq_avx(auVar49,auVar51);
    auVar52 = vpmuludq_avx(auVar37,auVar52);
    auVar34 = vpaddq_avx(auVar34,auVar52);
    auVar36 = vpmuludq_avx(auVar41,auVar36);
    auVar51 = vpaddq_avx(auVar48,auVar36);
    auVar36 = vpmuludq_avx(auVar41,auVar53);
    auVar48 = vpaddq_avx(auVar47,auVar36);
    auVar36 = vpmuludq_avx(auVar41,auVar55);
    auVar45 = vpaddq_avx(auVar45,auVar36);
    auVar54 = vpmuludq_avx(auVar41,auVar54);
    auVar49 = vpaddq_avx(auVar49,auVar54);
  }
  auVar36 = vpsrldq_avx(auVar34,8);
  auVar54 = vpsrldq_avx(auVar51,8);
  auVar52 = vpsrldq_avx(auVar45,8);
  auVar55 = vpsrldq_avx(auVar49,8);
  auVar53 = vpsrldq_avx(auVar48,8);
  auVar54 = vpaddq_avx(auVar51,auVar54);
  auVar36 = vpaddq_avx(auVar34,auVar36);
  auVar55 = vpaddq_avx(auVar49,auVar55);
  auVar52 = vpaddq_avx(auVar45,auVar52);
  auVar53 = vpaddq_avx(auVar48,auVar53);
  auVar49 = vpsrlq_avx(auVar54,0x1a);
  auVar34 = vpand_avx(auVar54,_DAT_01060cc0);
  auVar54 = vpaddq_avx(auVar36,auVar49);
  auVar36 = vpsrlq_avx(auVar55,0x1a);
  auVar55 = vpand_avx(auVar55,_DAT_01060cc0);
  auVar36 = vpaddq_avx(auVar52,auVar36);
  auVar45 = vpsrlq_avx(auVar54,0x1a);
  auVar52 = vpand_avx(auVar54,_DAT_01060cc0);
  auVar54 = vpsrlq_avx(auVar36,0x1a);
  auVar49 = vpand_avx(auVar36,_DAT_01060cc0);
  auVar54 = vpaddq_avx(auVar53,auVar54);
  auVar36 = vpaddq_avx(auVar55,auVar45);
  auVar55 = vpsllq_avx(auVar45,2);
  auVar36 = vpaddq_avx(auVar36,auVar55);
  auVar53 = vpsrlq_avx(auVar54,0x1a);
  auVar55 = vpand_avx(auVar54,_DAT_01060cc0);
  auVar54 = vpaddq_avx(auVar34,auVar53);
  auVar34 = vpsrlq_avx(auVar36,0x1a);
  auVar53 = vpand_avx(auVar36,_DAT_01060cc0);
  auVar36 = vpaddq_avx(auVar49,auVar34);
  auVar49 = vpsrlq_avx(auVar54,0x1a);
  auVar34 = vpand_avx(auVar54,_DAT_01060cc0);
  auVar54 = vpaddq_avx(auVar52,auVar49);
  *(uint *)this = auVar53._0_4_;
  *(uint *)((longlong)this + 4) = auVar36._0_4_;
  *(uint *)(this + 1) = auVar55._0_4_;
  *(uint *)((longlong)this + 0xc) = auVar34._0_4_;
  *(uint *)(this + 2) = auVar54._0_4_;
  return;
}




// ==================================================
// @01b5c650 (2715 bytes) — logic_branch
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  
  if (DAT_028b4cd8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e7428 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e7378 = FUN_00015ff0();
          _DAT_027e7360 = "MUSpectrumShaperSpectrumCtrl";
          _DAT_027e7368 = 0x98;
          _DAT_027e7370 = FUN_01be23f0;
          _DAT_027e7380 = 0;
          uRam00000000027e7388 = 0;
          _DAT_027e7390 = 0;
          uRam00000000027e7398 = 0;
          _DAT_027e73a0 = 0;
          uRam00000000027e73a8 = 0;
          _DAT_027e73b0 = 0;
          uRam00000000027e73b8 = 0;
          _DAT_027e73c0 = 0;
          uRam00000000027e73c8 = 0;
          _DAT_027e73d0 = 0;
          uRam00000000027e73d8 = 0;
          _DAT_027e73e0 = 0;
          uRam00000000027e73e8 = 0;
          _DAT_027e73f0 = 0;
          uRam00000000027e73f8 = 0;
          _DAT_027e7400 = 0;
          uRam00000000027e7408 = 0;
          _DAT_027e7410 = 0;
          uRam00000000027e7418 = 0;
          _DAT_027e7420 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4c98 = "handleIncrementCombStart";
      _DAT_028b4ca0 = &DAT_027e7360;
      _DAT_028b4ca8 = 0;
      _DAT_028b4cb0 = &DAT_027e4da0;
      _DAT_028b4cb8 = FUN_01b62c90;
      _DAT_028b4cc0 = 0x5d1;
      _DAT_028b4cc8 = 0;
      uRam00000000028b4cd0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b4d20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e7428 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e7378 = FUN_00015ff0();
          _DAT_027e7360 = "MUSpectrumShaperSpectrumCtrl";
          _DAT_027e7368 = 0x98;
          _DAT_027e7370 = FUN_01be23f0;
          _DAT_027e7380 = 0;
          uRam00000000027e7388 = 0;
          _DAT_027e7390 = 0;
          uRam00000000027e7398 = 0;
          _DAT_027e73a0 = 0;
          uRam00000000027e73a8 = 0;
          _DAT_027e73b0 = 0;
          uRam00000000027e73b8 = 0;
          _DAT_027e73c0 = 0;
          uRam00000000027e73c8 = 0;
          _DAT_027e73d0 = 0;
          uRam00000000027e73d8 = 0;
          _DAT_027e73e0 = 0;
          uRam00000000027e73e8 = 0;
          _DAT_027e73f0 = 0;
          uRam00000000027e73f8 = 0;
          _DAT_027e7400 = 0;
          uRam00000000027e7408 = 0;
          _DAT_027e7410 = 0;
          uRam00000000027e7418 = 0;
          _DAT_027e7420 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4ce0 = "handleDecrementCombStart";
      _DAT_028b4ce8 = &DAT_027e7360;
      _DAT_028b4cf0 = 0;
      _DAT_028b4cf8 = &DAT_027e4da0;
      _DAT_028b4d00 = FUN_01b62c90;
      _DAT_028b4d08 = 0x5d9;
      _DAT_028b4d10 = 0;
      uRam00000000028b4d18 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b4d68 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e7428 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e7378 = FUN_00015ff0();
          _DAT_027e7360 = "MUSpectrumShaperSpectrumCtrl";
          _DAT_027e7368 = 0x98;
          _DAT_027e7370 = FUN_01be23f0;
          _DAT_027e7380 = 0;
          uRam00000000027e7388 = 0;
          _DAT_027e7390 = 0;
          uRam00000000027e7398 = 0;
          _DAT_027e73a0 = 0;
          uRam00000000027e73a8 = 0;
          _DAT_027e73b0 = 0;
          uRam00000000027e73b8 = 0;
          _DAT_027e73c0 = 0;
          uRam00000000027e73c8 = 0;
          _DAT_027e73d0 = 0;
          uRam00000000027e73d8 = 0;
          _DAT_027e73e0 = 0;
          uRam00000000027e73e8 = 0;
          _DAT_027e73f0 = 0;
          uRam00000000027e73f8 = 0;
          _DAT_027e7400 = 0;
          uRam00000000027e7408 = 0;
          _DAT_027e7410 = 0;
          uRam00000000027e7418 = 0;
          _DAT_027e7420 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4d28 = "handleSetSpectrumShaperTargetToOriginal";
      _DAT_028b4d30 = &DAT_027e7360;
      _DAT_028b4d38 = 0;
      _DAT_028b4d40 = &DAT_027e4da0;
      _DAT_028b4d48 = FUN_01b62c90;
      _DAT_028b4d50 = 0x5e1;
      _DAT_028b4d58 = 0;
      uRam00000000028b4d60 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b4db0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e7428 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e7378 = FUN_00015ff0();
          _DAT_027e7360 = "MUSpectrumShaperSpectrumCtrl";
          _DAT_027e7368 = 0x98;
          _DAT_027e7370 = FUN_01be23f0;
          _DAT_027e7380 = 0;
          uRam00000000027e7388 = 0;
          _DAT_027e7390 = 0;
          uRam00000000027e7398 = 0;
          _DAT_027e73a0 = 0;
          uRam00000000027e73a8 = 0;
          _DAT_027e73b0 = 0;
          uRam00000000027e73b8 = 0;
          _DAT_027e73c0 = 0;
          uRam00000000027e73c8 = 0;
          _DAT_027e73d0 = 0;
          uRam00000000027e73d8 = 0;
          _DAT_027e73e0 = 0;
          uRam00000000027e73e8 = 0;
          _DAT_027e73f0 = 0;
          uRam00000000027e73f8 = 0;
          _DAT_027e7400 = 0;
          uRam00000000027e7408 = 0;
          _DAT_027e7410 = 0;
          uRam00000000027e7418 = 0;
          _DAT_027e7420 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4d70 = "handleSetSpectrumShaperTargetToZero";
      _DAT_028b4d78 = &DAT_027e7360;
      _DAT_028b4d80 = 0;
      _DAT_028b4d88 = &DAT_027e4da0;
      _DAT_028b4d90 = FUN_01b62c90;
      _DAT_028b4d98 = 0x5e9;
      _DAT_028b4da0 = 0;
      uRam00000000028b4da8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b4df8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e7428 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e7378 = FUN_00015ff0();
          _DAT_027e7360 = "MUSpectrumShaperSpectrumCtrl";
          _DAT_027e7368 = 0x98;
          _DAT_027e7370 = FUN_01be23f0;
          _DAT_027e7380 = 0;
          uRam00000000027e7388 = 0;
          _DAT_027e7390 = 0;
          uRam00000000027e7398 = 0;
          _DAT_027e73a0 = 0;
          uRam00000000027e73a8 = 0;
          _DAT_027e73b0 = 0;
          uRam00000000027e73b8 = 0;
          _DAT_027e73c0 = 0;
          uRam00000000027e73c8 = 0;
          _DAT_027e73d0 = 0;
          uRam00000000027e73d8 = 0;
          _DAT_027e73e0 = 0;
          uRam00000000027e73e8 = 0;
          _DAT_027e73f0 = 0;
          uRam00000000027e73f8 = 0;
          _DAT_027e7400 = 0;
          uRam00000000027e7408 = 0;
          _DAT_027e7410 = 0;
          uRam00000000027e7418 = 0;
          _DAT_027e7420 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4db8 = "handleMakeRandomSpectrum";
      _DAT_028b4dc0 = &DAT_027e7360;
      _DAT_028b4dc8 = 0;
      _DAT_028b4dd0 = &DAT_027e4da0;
      _DAT_028b4dd8 = FUN_01b62c90;
      _DAT_028b4de0 = 0x5f1;
      _DAT_028b4de8 = 0;
      uRam00000000028b4df0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b4e40 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e7428 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e7378 = FUN_00015ff0();
          _DAT_027e7360 = "MUSpectrumShaperSpectrumCtrl";
          _DAT_027e7368 = 0x98;
          _DAT_027e7370 = FUN_01be23f0;
          _DAT_027e7380 = 0;
          uRam00000000027e7388 = 0;
          _DAT_027e7390 = 0;
          uRam00000000027e7398 = 0;
          _DAT_027e73a0 = 0;
          uRam00000000027e73a8 = 0;
          _DAT_027e73b0 = 0;
          uRam00000000027e73b8 = 0;
          _DAT_027e73c0 = 0;
          uRam00000000027e73c8 = 0;
          _DAT_027e73d0 = 0;
          uRam00000000027e73d8 = 0;
          _DAT_027e73e0 = 0;
          uRam00000000027e73e8 = 0;
          _DAT_027e73f0 = 0;
          uRam00000000027e73f8 = 0;
          _DAT_027e7400 = 0;
          uRam00000000027e7408 = 0;
          _DAT_027e7410 = 0;
          uRam00000000027e7418 = 0;
          _DAT_027e7420 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4e00 = "handleMakeRandomFormantMapping";
      _DAT_028b4e08 = &DAT_027e7360;
      _DAT_028b4e10 = 0;
      _DAT_028b4e18 = &DAT_027e4da0;
      _DAT_028b4e20 = FUN_01b62c90;
      _DAT_028b4e28 = 0x5f9;
      _DAT_028b4e30 = 0;
      uRam00000000028b4e38 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b4e88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e7428 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e7378 = FUN_00015ff0();
          _DAT_027e7360 = "MUSpectrumShaperSpectrumCtrl";
          _DAT_027e7368 = 0x98;
          _DAT_027e7370 = FUN_01be23f0;
          _DAT_027e7380 = 0;
          uRam00000000027e7388 = 0;
          _DAT_027e7390 = 0;
          uRam00000000027e7398 = 0;
          _DAT_027e73a0 = 0;
          uRam00000000027e73a8 = 0;
          _DAT_027e73b0 = 0;
          uRam00000000027e73b8 = 0;
          _DAT_027e73c0 = 0;
          uRam00000000027e73c8 = 0;
          _DAT_027e73d0 = 0;
          uRam00000000027e73d8 = 0;
          _DAT_027e73e0 = 0;
          uRam00000000027e73e8 = 0;
          _DAT_027e73f0 = 0;
          uRam00000000027e73f8 = 0;
          _DAT_027e7400 = 0;
          uRam00000000027e7408 = 0;
          _DAT_027e7410 = 0;
          uRam00000000027e7418 = 0;
          _DAT_027e7420 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4e48 = "handleCopySpectrumShaperTarget";
      _DAT_028b4e50 = &DAT_027e7360;
      _DAT_028b4e58 = 0;
      _DAT_028b4e60 = &DAT_027e4da0;
      _DAT_028b4e68 = FUN_01b62c90;
      _DAT_028b4e70 = 0x601;
      _DAT_028b4e78 = 0;
      uRam00000000028b4e80 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b4ed0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e7428 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e7378 = FUN_00015ff0();
          _DAT_027e7360 = "MUSpectrumShaperSpectrumCtrl";
          _DAT_027e7368 = 0x98;
          _DAT_027e7370 = FUN_01be23f0;
          _DAT_027e7380 = 0;
          uRam00000000027e7388 = 0;
          _DAT_027e7390 = 0;
          uRam00000000027e7398 = 0;
          _DAT_027e73a0 = 0;
          uRam00000000027e73a8 = 0;
          _DAT_027e73b0 = 0;
          uRam00000000027e73b8 = 0;
          _DAT_027e73c0 = 0;
          uRam00000000027e73c8 = 0;
          _DAT_027e73d0 = 0;
          uRam00000000027e73d8 = 0;
          _DAT_027e73e0 = 0;
          uRam00000000027e73e8 = 0;
          _DAT_027e73f0 = 0;
          uRam00000000027e73f8 = 0;
          _DAT_027e7400 = 0;
          uRam00000000027e7408 = 0;
          _DAT_027e7410 = 0;
          uRam00000000027e7418 = 0;
          _DAT_027e7420 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4e90 = "handlePasteSpectrumShaperTarget";
      _DAT_028b4e98 = &DAT_027e7360;
      _DAT_028b4ea0 = 0;
      _DAT_028b4ea8 = &DAT_027e4da0;
      _DAT_028b4eb0 = FUN_01b62c90;
      _DAT_028b4eb8 = 0x609;
      _DAT_028b4ec0 = 0;
      uRam00000000028b4ec8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ==================================================
// @01b64ab0 (2670 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  bool bVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  longlong *arg1;
  longlong *this;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar8 = local_40;
  fVar20 = (float)((ulonglong)param_2 >> 0x20);
  fVar11 = (float)param_2;
  if (this[0x27] == 0) goto LAB_01b64c7a;
  iVar7 = FUN_01d3a5a0();
  if (iVar7 != 7) {
    if (((this[0x27] != 0) && (iVar7 = FUN_01d3a5a0(), iVar7 == 1)) &&
       (iVar7 = FUN_01d3b630(), iVar7 == 1)) {
      FUN_01b57f70();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e3f820();
      if (*(int *)((longlong)this + 0x144) < (int)this[0x28]) {
        local_64 = 0.0;
        local_58 = DAT_02390124;
        local_60 = DAT_0239011c;
        local_5c = DAT_0239011c;
      }
      else {
        lVar10 = (longlong)(int)this[0x28] + -1;
        do {
          local_64 = (float)FUN_00d459e0();
          local_60 = (float)FUN_00d459e0();
          local_5c = (float)FUN_00d459e0();
          local_58 = (float)FUN_00d459e0();
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((longlong)this + 0x144));
      }
      FUN_01d3abf0();
      fVar12 = (float)FUN_01e466c0();
      bVar2 = fVar12 < DAT_023908ec;
      fVar21 = DAT_02394248 + fVar11;
      fVar17 = fVar20 + DAT_02390d00;
      fVar22 = DAT_02390d00 + fVar11;
LAB_01b64de0:
      (**(code **)(*this + 0x658))();
      lVar10 = *arg1;
      if (lVar10 == local_40) {
        if (((char)arg1[1] == '\0') && (local_40 != 0)) {
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01b64e74;
          }
LAB_01b64e32:
          *(undefined1 *)(arg1 + 1) = 1;
          local_38 = '\0';
        }
        lVar10 = *arg1;
      }
      else {
        lVar4 = arg1[1];
        if (local_38 != '\0') {
          *arg1 = local_40;
          if (((char)lVar4 != '\0') && (lVar10 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01b64e32;
        }
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *arg1 = local_40;
        if (((char)lVar4 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
LAB_01b64e74:
        *(undefined1 *)(arg1 + 1) = 1;
        lVar10 = *arg1;
      }
      if (lVar10 != 0) {
        iVar7 = FUN_01d3a5a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (iVar7 == 6) goto LAB_01b6550c;
        iVar7 = FUN_01d3a5a0();
        if (iVar7 == 5) {
          FUN_01d3abf0();
          auVar16._0_8_ = FUN_01e466c0();
          auVar16._8_8_ = extraout_XMM0_Qb;
          if ((float)auVar16._0_8_ <= fVar21) {
            if ((float)auVar16._0_8_ < DAT_023908ec) {
              auVar16 = blendps(auVar16,_DAT_023b1e70,0xd);
            }
          }
          else {
            auVar16 = blendps(auVar16,ZEXT416((uint)fVar21),1);
          }
          uVar15 = auVar16._0_8_;
          if (auVar16._4_4_ <= fVar20) {
            if (auVar16._4_4_ < 0.0) {
              auVar16 = blendps(auVar16,_DAT_0238ff00,2);
              uVar15 = auVar16._0_8_;
            }
          }
          else {
            auVar3._4_4_ = fVar20;
            auVar3._0_4_ = fVar11;
            auVar3._8_4_ = in_XMM1_Dc;
            auVar3._12_4_ = in_XMM1_Dd;
            auVar16 = blendps(auVar16,auVar3,2);
            uVar15 = auVar16._0_8_;
          }
          fVar18 = (fVar20 - (float)((ulonglong)uVar15 >> 0x20)) / fVar17;
          fVar5 = fVar18;
          fVar6 = local_58;
          if ((DAT_023908ec <= fVar12) &&
             (fVar5 = local_64, fVar6 = fVar18, fVar12 < fVar21 || bVar2)) {
            local_60 = (float)uVar15 / fVar22;
            local_5c = fVar18;
            fVar6 = local_58;
          }
          local_58 = fVar6;
          local_64 = fVar5;
          iVar7 = (int)this[0x28];
          if (iVar7 <= *(int *)((longlong)this + 0x144)) {
            dVar13 = (double)local_64;
            dVar14 = (double)local_58;
            iVar9 = iVar7 * 4;
            do {
              uVar15 = FUN_00d46dc0();
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar15 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_00d233f0(uVar15,iVar9);
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              uVar15 = FUN_00d46dc0();
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar15 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_00d233f0(uVar15,iVar9 + 1);
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              uVar15 = FUN_00d46dc0();
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar15 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_00d233f0(uVar15,iVar9 + 2);
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              uVar15 = FUN_00d46dc0();
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar15 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              local_40 = local_50;
              FUN_00d233f0(uVar15,iVar9 + 3);
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              uVar19 = SUB84((double)local_60,0);
              uVar23 = SUB84((double)local_5c,0);
              if (iVar7 == 0) {
                FUN_01b57fb0(dVar13,uVar19,uVar23,dVar14);
                lVar10 = this[0x29];
                if (lVar10 != local_50) {
                  if (local_50 == 0) {
                    this[0x29] = 0;
                  }
                  else {
                    FUN_00d50b00();
                    lVar10 = this[0x29];
                    this[0x29] = local_50;
                  }
                  if (lVar10 != 0) {
                    FUN_00d50b20();
                  }
                }
              }
              else if (iVar7 == 1) {
                FUN_01b57fb0(dVar13,uVar19,uVar23,dVar14);
                lVar10 = this[0x2a];
                if (lVar10 != local_50) {
                  if (local_50 == 0) {
                    this[0x2a] = 0;
                  }
                  else {
                    FUN_00d50b00();
                    lVar10 = this[0x2a];
                    this[0x2a] = local_50;
                  }
                  if (lVar10 != 0) {
                    FUN_00d50b20();
                  }
                }
              }
              else if (iVar7 == 2) {
                FUN_01b57fb0(dVar13,uVar19,uVar23,dVar14);
                lVar10 = this[0x2b];
                if (lVar10 != local_50) {
                  if (local_50 == 0) {
                    this[0x2b] = 0;
                  }
                  else {
                    FUN_00d50b00();
                    lVar10 = this[0x2b];
                    this[0x2b] = local_50;
                  }
                  if (lVar10 != 0) {
                    FUN_00d50b20();
                  }
                }
              }
              local_38 = '\0';
              iVar9 = iVar9 + 4;
              bVar1 = iVar7 < *(int *)((longlong)this + 0x144);
              iVar7 = iVar7 + 1;
            } while (bVar1);
          }
          FUN_01b57e50();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          FUN_01b57030();
          FUN_01b57030();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
        }
        goto LAB_01b64de0;
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
LAB_01b6550c:
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
    }
    goto LAB_01b64c7a;
  }
  fVar11 = (float)FUN_01d3b640();
  iVar7 = (int)this[0x28];
  if (fVar11 <= 0.0) {
    if (iVar7 == 2) {
      if (*(int *)((longlong)this + 0x144) == 2) {
LAB_01b64c36:
        lVar8 = 0x100000001;
        goto LAB_01b64c65;
      }
    }
    else if (iVar7 == 1) {
      if (*(int *)((longlong)this + 0x144) == 1) goto LAB_01b64c4d;
    }
    else if ((iVar7 == 0) && (*(int *)((longlong)this + 0x144) == 0)) goto LAB_01b64c12;
LAB_01b64c5b:
    lVar8 = 0x200000002;
LAB_01b64c65:
    this[0x28] = lVar8;
  }
  else {
    if (iVar7 == 2) {
      if (*(int *)((longlong)this + 0x144) == 2) {
LAB_01b64c12:
        lVar8 = 0x200000000;
        goto LAB_01b64c65;
      }
    }
    else if (iVar7 == 1) {
      if (*(int *)((longlong)this + 0x144) == 1) goto LAB_01b64c5b;
    }
    else if ((iVar7 == 0) && (*(int *)((longlong)this + 0x144) == 0)) goto LAB_01b64c36;
LAB_01b64c4d:
    this[0x28] = 0;
  }
  (**(code **)(*this + 0x620))();
LAB_01b64c7a:
  FUN_01e459c0();
  return;
}




// ==================================================
// @017ed3c0 (2534 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  undefined8 uVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *arg1;
  longlong this;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 auVar20 [16];
  undefined8 *local_130;
  undefined1 local_128;
  longlong local_120;
  undefined1 local_118;
  longlong local_110;
  undefined1 local_108;
  longlong local_100;
  undefined1 local_f8;
  longlong local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined1 local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  int local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  longlong local_70;
  char local_68;
  undefined8 *local_60;
  longlong local_58;
  longlong local_50;
  undefined1 local_45;
  float local_44;
  longlong local_40;
  char local_38;
  
  local_8c = 1;
  local_88 = 100.0;
  local_84 = 0x43c80000;
  local_80 = 10.766602;
  local_7c = 1.0;
  local_78 = 1.0;
  FUN_00c8e690();
  local_58 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  local_50 = local_40;
  if (((local_38 == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  lVar15 = local_40;
  if (((local_38 == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  lVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  local_45 = 0;
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar12 = (longlong *)&DAT_02572358;
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  lVar11 = local_58;
  lVar14 = *arg1;
  local_60 = puVar6;
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    local_128 = 0;
    local_120 = lVar1;
    local_118 = 0;
    local_110 = local_58;
    local_108 = 0;
    local_100 = local_50;
    local_f8 = 0;
    local_f0 = lVar15;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    plVar12 = &local_120;
    plVar13 = &local_110;
    local_130 = puVar6;
    uVar7 = FUN_017ee2e0(plVar12,&local_130,plVar13,&local_100,&local_88,&local_84,&local_7c,
                         &local_78,&local_45,lVar14,0);
    param_3 = (size_t)plVar13;
    if ((char)uVar7 != '\0') {
      local_74 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      lVar14 = lVar15;
      lVar15 = lVar1;
      goto LAB_017eda3f;
    }
  }
  FUN_00c8e690();
  lVar14 = local_40;
  if (((local_38 == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(lVar14 + 0x18)) {
    _memset_pattern16(plVar12,(void *)((ulonglong)((*(uint *)(lVar14 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  if (lVar11 == lVar14) {
    FUN_00d50b20();
  }
  else {
    FUN_00d50b20();
    lVar11 = lVar14;
  }
  auVar5 = _DAT_023b2d50;
  lVar14 = *(longlong *)(lVar11 + 0x10);
  lVar10 = 5;
  iVar16 = _DAT_02394150;
  iVar17 = _UNK_02394154;
  iVar18 = _UNK_02394158;
  iVar19 = _UNK_0239415c;
  while( true ) {
    auVar20._4_4_ = (float)iVar17;
    auVar20._0_4_ = (float)iVar16;
    auVar20._8_4_ = (float)iVar18;
    auVar20._12_4_ = (float)iVar19;
    auVar20 = divps(auVar5,auVar20);
    *(undefined1 (*) [16])(lVar14 + -0x10 + lVar10 * 4) = auVar20;
    if (lVar10 == 0x1fd) break;
    auVar2._4_4_ = (float)(iVar17 + _UNK_02394184);
    auVar2._0_4_ = (float)(iVar16 + _DAT_02394180);
    auVar2._8_4_ = (float)(iVar18 + _UNK_02394188);
    auVar2._12_4_ = (float)(iVar19 + _UNK_0239418c);
    auVar20 = divps(auVar5,auVar2);
    *(undefined1 (*) [16])(lVar14 + lVar10 * 4) = auVar20;
    iVar16 = iVar16 + _DAT_023de2b0;
    iVar17 = iVar17 + _UNK_023de2b4;
    iVar18 = iVar18 + _UNK_023de2b8;
    iVar19 = iVar19 + _UNK_023de2bc;
    lVar10 = lVar10 + 8;
  }
  pvVar8 = (void *)0x3b0080813b00c122;
  *(undefined8 *)(lVar14 + 0x7f4) = 0x3b0080813b00c122;
  *(undefined4 *)(lVar14 + 0x7fc) = 0x3b004020;
  local_68 = '\0';
  local_70 = lVar11;
  local_58 = lVar11;
  FUN_00c8e4f0();
  lVar14 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (local_50 == lVar14) {
    if (local_50 == 0) {
      local_50 = 0;
    }
    else {
      FUN_00d50b20();
    }
  }
  else {
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    local_50 = lVar14;
  }
  local_68 = '\0';
  local_70 = lVar11;
  FUN_00c8e4f0();
  lVar14 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (lVar15 == lVar14) {
    if (lVar15 == 0) {
      lVar14 = 0;
    }
    else {
      FUN_00d50b20();
      lVar14 = lVar15;
    }
  }
  else if (lVar15 != 0) {
    FUN_00d50b20();
  }
  FUN_00c8e690();
  lVar15 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(lVar15 + 0x18)) {
    _memset_pattern16(pvVar8,(void *)((ulonglong)((*(uint *)(lVar15 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  if (lVar1 == lVar15) {
    FUN_00d50b20();
    lVar15 = lVar1;
  }
  else if (lVar1 != 0) {
    FUN_00d50b20();
  }
  auVar5 = _DAT_023b2d50;
  lVar1 = *(longlong *)(lVar15 + 0x10);
  lVar11 = 5;
  iVar16 = _DAT_02394150;
  iVar17 = _UNK_02394154;
  iVar18 = _UNK_02394158;
  iVar19 = _UNK_0239415c;
  while( true ) {
    auVar3._4_4_ = (float)iVar17;
    auVar3._0_4_ = (float)iVar16;
    auVar3._8_4_ = (float)iVar18;
    auVar3._12_4_ = (float)iVar19;
    auVar20 = divps(auVar5,auVar3);
    *(undefined1 (*) [16])(lVar1 + -0x10 + lVar11 * 4) = auVar20;
    if (lVar11 == 0x7fd) break;
    auVar4._4_4_ = (float)(iVar17 + _UNK_02394184);
    auVar4._0_4_ = (float)(iVar16 + _DAT_02394180);
    auVar4._8_4_ = (float)(iVar18 + _UNK_02394188);
    auVar4._12_4_ = (float)(iVar19 + _UNK_0239418c);
    auVar20 = divps(auVar5,auVar4);
    *(undefined1 (*) [16])(lVar1 + lVar11 * 4) = auVar20;
    iVar16 = iVar16 + _DAT_023de2b0;
    iVar17 = iVar17 + _UNK_023de2b4;
    iVar18 = iVar18 + _UNK_023de2b8;
    iVar19 = iVar19 + _UNK_023de2bc;
    lVar11 = lVar11 + 8;
  }
  plVar12 = (longlong *)0x3a0020083a003012;
  *(undefined8 *)(&DAT_00001ff4 + lVar1) = 0x3a0020083a003012;
  *(undefined4 *)(lVar1 + 0x1ffc) = 0x3a001002;
  local_74 = 0;
LAB_017eda3f:
  pVar9 = (pthread_key_t)plVar12;
  pvVar8 = _pthread_getspecific(pVar9);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_c0 = local_58;
  local_b8 = '\0';
  local_44 = local_88;
  FUN_015be4d0();
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  pvVar8 = _pthread_getspecific(pVar9);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_b0 = local_50;
  local_a8 = '\0';
  FUN_015be4d0(local_44);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  pvVar8 = _pthread_getspecific(pVar9);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_98 = '\0';
  local_a0 = lVar14;
  FUN_015be4d0(local_84);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  iVar16 = local_8c;
  if (*(int *)(this + 0xa8) != local_8c) {
    FUN_00d64850();
    *(int *)(this + 0xa8) = iVar16;
    FUN_00d64910();
  }
  if ((*(float *)(this + 0xac) != local_80) ||
     (NAN(*(float *)(this + 0xac)) || NAN(local_80))) {
    local_44 = local_80;
    FUN_00d64850();
    *(float *)(this + 0xac) = local_44;
    FUN_00d64910();
  }
  local_c8 = 0;
  FUN_017f1b90();
  if ((*(float *)(this + 0xb0) != local_7c) ||
     (NAN(*(float *)(this + 0xb0)) || NAN(local_7c))) {
    local_44 = local_7c;
    FUN_00d64850();
    *(float *)(this + 0xb0) = local_44;
    FUN_00d64910();
  }
  if ((*(float *)(this + 0xb4) != local_78) ||
     (NAN(*(float *)(this + 0xb4)) || NAN(local_78))) {
    local_44 = local_78;
    FUN_00d64850();
    *(float *)(this + 0xb4) = local_44;
    FUN_00d64910();
  }
  FUN_017f1c80();
  if (*(undefined8 **)(this + 0x80) != local_60) {
    FUN_00d64850();
    puVar6 = *(undefined8 **)(this + 0x80);
    if (puVar6 != local_60) {
      if (local_60 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      *(undefined8 **)(this + 0x80) = local_60;
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (((char)local_74 != '\0') && (*(int *)(this + 0xd0) != 1)) {
    FUN_00d64850();
    *(undefined4 *)(this + 0xd0) = 1;
    FUN_00d64910();
  }
  if (local_60 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  lVar1 = local_58;
  if (lVar15 != 0) {
    FUN_00d50b20();
  }
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01b5d300 (2507 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
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
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  
  lVar2 = DAT_027e4c10;
  if (DAT_027e4c10 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_130 = lVar2;
  local_128 = '\x01';
  pplVar5 = &local_30;
  uVar6 = FUN_01e57490(param_1,&local_130);
  plVar1 = local_30;
  if (DAT_027e5dd8 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    uVar6 = extraout_XMM0_Da_02;
    if (iVar4 != 0) {
      _DAT_027e5d28 = FUN_001b37d0();
      _DAT_027e5d10 = "MUSpectrumShaperSlider";
      _DAT_027e5d18 = 0x200;
      _DAT_027e5d20 = FUN_01bdaad0;
      _DAT_027e5d30 = 0;
      uRam00000000027e5d38 = 0;
      _DAT_027e5d40 = 0;
      uRam00000000027e5d48 = 0;
      _DAT_027e5d50 = 0;
      uRam00000000027e5d58 = 0;
      _DAT_027e5d60 = 0;
      uRam00000000027e5d68 = 0;
      _DAT_027e5d70 = 0;
      uRam00000000027e5d78 = 0;
      _DAT_027e5d80 = 0;
      uRam00000000027e5d88 = 0;
      _DAT_027e5d90 = 0;
      uRam00000000027e5d98 = 0;
      _DAT_027e5da0 = 0;
      uRam00000000027e5da8 = 0;
      _DAT_027e5db0 = 0;
      uRam00000000027e5db8 = 0;
      _DAT_027e5dc0 = 0;
      uRam00000000027e5dc8 = 0;
      _DAT_027e5dd0 = 0;
      uVar6 = ___cxa_guard_release();
    }
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01b5d381:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar6 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_01b5d381;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  lVar2 = DAT_027e4c18;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_027e4c18 != 0) {
      FUN_00d50b00();
    }
    local_120 = lVar2;
    local_118 = '\x01';
    FUN_01bd1950(0);
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e4c20;
    if (DAT_027e4c20 != 0) {
      FUN_00d50b00();
    }
    local_110 = lVar2;
    local_108 = '\x01';
    FUN_01bd1950(DAT_02390124);
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e4c28;
    if (DAT_027e4c28 != 0) {
      FUN_00d50b00();
    }
    local_100 = lVar2;
    local_f8 = '\x01';
    FUN_01bd1950(DAT_02390d34);
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    FUN_01bd1fd0(DAT_02390124);
    uVar6 = FUN_00d50b20();
  }
  lVar2 = DAT_027e4c30;
  if (DAT_027e4c30 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_f0 = lVar2;
  local_e8 = '\x01';
  pplVar5 = &local_30;
  uVar6 = FUN_01e57490(uVar6,&local_f0);
  plVar1 = local_30;
  if (DAT_027e5dd8 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    uVar6 = extraout_XMM0_Da_03;
    if (iVar4 != 0) {
      _DAT_027e5d28 = FUN_001b37d0();
      _DAT_027e5d10 = "MUSpectrumShaperSlider";
      _DAT_027e5d18 = 0x200;
      _DAT_027e5d20 = FUN_01bdaad0;
      _DAT_027e5d30 = 0;
      uRam00000000027e5d38 = 0;
      _DAT_027e5d40 = 0;
      uRam00000000027e5d48 = 0;
      _DAT_027e5d50 = 0;
      uRam00000000027e5d58 = 0;
      _DAT_027e5d60 = 0;
      uRam00000000027e5d68 = 0;
      _DAT_027e5d70 = 0;
      uRam00000000027e5d78 = 0;
      _DAT_027e5d80 = 0;
      uRam00000000027e5d88 = 0;
      _DAT_027e5d90 = 0;
      uRam00000000027e5d98 = 0;
      _DAT_027e5da0 = 0;
      uRam00000000027e5da8 = 0;
      _DAT_027e5db0 = 0;
      uRam00000000027e5db8 = 0;
      _DAT_027e5dc0 = 0;
      uRam00000000027e5dc8 = 0;
      _DAT_027e5dd0 = 0;
      uVar6 = ___cxa_guard_release();
    }
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01b5d555:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar6 = extraout_XMM0_Da_00;
    if (cVar3 == '\0') goto LAB_01b5d555;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  lVar2 = DAT_027e4c38;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_027e4c38 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar2;
    local_d8 = '\x01';
    FUN_01bd1950(DAT_02390d00);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e4c40;
    if (DAT_027e4c40 != 0) {
      FUN_00d50b00();
    }
    local_d0 = lVar2;
    local_c8 = '\x01';
    FUN_01bd1950(DAT_02390118);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e4c48;
    if (DAT_027e4c48 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar2;
    local_b8 = '\x01';
    FUN_01bd1950(0);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e4c50;
    if (DAT_027e4c50 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar2;
    local_a8 = '\x01';
    FUN_01bd1950(DAT_02390124);
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    FUN_01bd1fd0(DAT_02390118);
    FUN_01bd1fd0(0);
    uVar6 = FUN_00d50b20();
  }
  lVar2 = DAT_027e4c58;
  if (DAT_027e4c58 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  pplVar5 = &local_30;
  uVar6 = FUN_01e57490(uVar6,&local_a0);
  plVar1 = local_30;
  if (DAT_027e5dd8 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    uVar6 = extraout_XMM0_Da_04;
    if (iVar4 != 0) {
      _DAT_027e5d28 = FUN_001b37d0();
      _DAT_027e5d10 = "MUSpectrumShaperSlider";
      _DAT_027e5d18 = 0x200;
      _DAT_027e5d20 = FUN_01bdaad0;
      _DAT_027e5d30 = 0;
      uRam00000000027e5d38 = 0;
      _DAT_027e5d40 = 0;
      uRam00000000027e5d48 = 0;
      _DAT_027e5d50 = 0;
      uRam00000000027e5d58 = 0;
      _DAT_027e5d60 = 0;
      uRam00000000027e5d68 = 0;
      _DAT_027e5d70 = 0;
      uRam00000000027e5d78 = 0;
      _DAT_027e5d80 = 0;
      uRam00000000027e5d88 = 0;
      _DAT_027e5d90 = 0;
      uRam00000000027e5d98 = 0;
      _DAT_027e5da0 = 0;
      uRam00000000027e5da8 = 0;
      _DAT_027e5db0 = 0;
      uRam00000000027e5db8 = 0;
      _DAT_027e5dc0 = 0;
      uRam00000000027e5dc8 = 0;
      _DAT_027e5dd0 = 0;
      uVar6 = ___cxa_guard_release();
    }
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01b5d787:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar6 = extraout_XMM0_Da_01;
    if (cVar3 == '\0') goto LAB_01b5d787;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  lVar2 = DAT_027e4c60;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_027e4c60 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar2;
    local_88 = '\x01';
    FUN_01bd1950(DAT_02390d00);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e4c68;
    if (DAT_027e4c68 != 0) {
      FUN_00d50b00();
    }
    local_80 = lVar2;
    local_78 = '\x01';
    FUN_01bd1950(0);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e4c70;
    if (DAT_027e4c70 != 0) {
      FUN_00d50b00();
    }
    local_70 = lVar2;
    local_68 = '\x01';
    FUN_01bd1950(DAT_02390124);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_01bd1fd0(0);
    uVar6 = FUN_00d50b20();
  }
  lVar2 = DAT_027e4c78;
  if (DAT_027e4c78 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_60 = lVar2;
  local_58 = '\x01';
  pplVar5 = &local_30;
  FUN_01e57490(uVar6,&local_60);
  plVar1 = local_30;
  if (DAT_027e5dd8 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    if (iVar4 != 0) {
      _DAT_027e5d28 = FUN_001b37d0();
      _DAT_027e5d10 = "MUSpectrumShaperSlider";
      _DAT_027e5d18 = 0x200;
      _DAT_027e5d20 = FUN_01bdaad0;
      _DAT_027e5d30 = 0;
      uRam00000000027e5d38 = 0;
      _DAT_027e5d40 = 0;
      uRam00000000027e5d48 = 0;
      _DAT_027e5d50 = 0;
      uRam00000000027e5d58 = 0;
      _DAT_027e5d60 = 0;
      uRam00000000027e5d68 = 0;
      _DAT_027e5d70 = 0;
      uRam00000000027e5d78 = 0;
      _DAT_027e5d80 = 0;
      uRam00000000027e5d88 = 0;
      _DAT_027e5d90 = 0;
      uRam00000000027e5d98 = 0;
      _DAT_027e5da0 = 0;
      uRam00000000027e5da8 = 0;
      _DAT_027e5db0 = 0;
      uRam00000000027e5db8 = 0;
      _DAT_027e5dc0 = 0;
      uRam00000000027e5dc8 = 0;
      _DAT_027e5dd0 = 0;
      ___cxa_guard_release();
    }
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01b5d930;
  }
  pplVar5 = (longlong **)&DAT_02802688;
LAB_01b5d930:
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027e4c48;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_027e4c48 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar2;
    local_48 = '\x01';
    FUN_01bd1950(DAT_02390d34);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e4c80;
    if (DAT_027e4c80 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar2;
    local_38 = '\x01';
    FUN_01bd1950(DAT_02390d28);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_01e534b0();
  return;
}




// ==================================================
// @01dc4200 (2482 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong *plVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *this;
  int iVar14;
  bool bVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar20 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar21 [16];
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb_05;
  undefined1 auVar22 [16];
  float fVar25;
  undefined1 in_XMM1 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  float local_f8;
  float fStack_f4;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  longlong *local_58;
  char local_50;
  int local_40;
  
  plVar7 = local_58;
  DAT_028b8a58 = -1;
  DAT_028b8a5c = -1;
  if (this[0x28] != 0) {
    this[0x28] = 0;
    FUN_00d50b20();
  }
  FUN_01dc0d60();
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_58 == (longlong *)0x0) {
    return;
  }
  for (iVar14 = 0; plVar8 = local_58, iVar10 = FUN_01dca080(), iVar11 = DAT_028b8a58,
      iVar14 < iVar10; iVar14 = iVar14 + 1) {
    uVar18 = FUN_01dc1b40();
    fStack_70 = (float)extraout_XMM0_Qb;
    fStack_6c = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
    FUN_01e3f820();
    auVar24._8_4_ = fStack_70;
    auVar24._0_8_ = uVar18;
    auVar24._12_4_ = fStack_6c;
    auVar23._4_12_ = auVar24._4_12_;
    auVar23._0_4_ = (float)uVar18 + DAT_023b1d84;
    auVar24 = blendps(auVar23,_DAT_0238ff00,0xe);
    blendps(in_XMM1,_DAT_023b5520,0xd);
    cVar9 = FUN_00d05410();
    iVar11 = iVar14;
    if (cVar9 != '\0') break;
    uVar18 = FUN_01dc1b40();
    local_78 = (float)uVar18;
    fStack_70 = (float)extraout_XMM0_Qb_00;
    fStack_6c = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    uVar19 = FUN_01dc1b40();
    FUN_01e3f820();
    auVar2._8_4_ = fStack_70;
    auVar2._0_8_ = uVar18;
    auVar2._12_4_ = fStack_6c;
    auVar4._8_8_ = extraout_XMM0_Qb_01;
    auVar4._0_8_ = uVar19;
    auVar20._4_12_ = auVar2._4_12_;
    auVar20._0_4_ = local_78 - (float)uVar19;
    in_XMM1 = blendps(ZEXT816(0),auVar4,1);
    blendps(auVar24,auVar20,1);
    cVar9 = FUN_00d05410();
    if (cVar9 != '\0') {
      FUN_01dcc290();
      if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      cVar9 = FUN_01dd3d00();
      if (cVar9 != '\0') {
        FUN_01dd4f40();
      }
      DAT_028b8a5c = iVar14;
      cVar9 = FUN_01db9b00();
      if (cVar9 == '\0') {
LAB_01dc44d0:
        cVar9 = FUN_01db9fa0();
        bVar5 = true;
        if ((cVar9 != '\0') && (cVar9 = FUN_01dcca60(), cVar9 != '\0')) {
          uVar18 = FUN_01db9a50();
          fStack_70 = (float)extraout_XMM0_Qb_04;
          fStack_6c = (float)((ulonglong)extraout_XMM0_Qb_04 >> 0x20);
          fVar16 = (float)FUN_01dce580();
          uVar17 = (**(code **)(*this + 0x918))();
          plVar12 = (longlong *)FUN_00e8fc40();
          FUN_00152930();
          (**(code **)(*plVar12 + 0x18))();
          if (DAT_028b8a48 == plVar12) {
            bVar6 = false;
            bVar5 = false;
          }
          else {
            bVar6 = true;
            bVar5 = true;
            bVar15 = DAT_028b8a48 != (longlong *)0x0;
            DAT_028b8a48 = plVar12;
            if (bVar15) {
              FUN_00d50b20();
            }
          }
          if (DAT_028b8a50 == '\0') {
            DAT_028b8a50 = '\x01';
            FUN_00e8cb90();
            bVar5 = bVar6;
          }
          if (!bVar5) {
            FUN_00d50b20();
          }
          auVar3._8_4_ = fStack_70;
          auVar3._0_8_ = uVar18;
          auVar3._12_4_ = fStack_6c;
          auVar21._4_12_ = auVar3._4_12_;
          auVar21._0_4_ = (float)uVar18 + fVar16;
          auVar24 = insertps(auVar21,uVar17,0x10);
          uVar18 = FUN_01d4ed60(auVar24._0_8_);
          DAT_028b8a60 = 0.0;
          if (0 < DAT_028b8a5c) {
            iVar11 = 0;
            do {
              FUN_01dcc290(uVar18,iVar11);
              fVar16 = (float)FUN_01db9a50();
              uVar18 = FUN_01dce580();
              DAT_028b8a60 = fVar16 + (float)uVar18 + DAT_028b8a60;
              in_XMM1 = ZEXT416((uint)DAT_028b8a60);
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                uVar18 = FUN_00d50b20();
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < DAT_028b8a5c);
          }
          FUN_01db99d0();
          if (local_58 == (longlong *)0x0) {
            bVar5 = true;
            plVar12 = (longlong *)0x0;
          }
          else {
            plVar12 = local_58;
            if (local_50 == '\0') {
              FUN_00d50b00();
              bVar5 = false;
            }
            else {
              bVar5 = false;
            }
          }
          FUN_01db9ab0();
          if (local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          (**(code **)(*plVar12 + 0x958))();
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar12 + 0x918))();
          FUN_01d530c0();
          (**(code **)(*plVar12 + 0x4d0))();
          FUN_01d52700();
          FUN_01d52740();
          if (local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          FUN_01e3f820();
          (**(code **)(*plVar12 + 0x610))();
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          cVar9 = FUN_01db9d40();
          plVar12 = local_58;
          if (cVar9 == '\0') {
            (**(code **)(*this + 0x920))(extraout_XMM0_Qa,0xffffffff);
            if (local_58 == (longlong *)0x0) {
              plVar12 = (longlong *)0x0;
            }
            else if (local_50 == '\0') {
              FUN_00d50b00();
            }
LAB_01dc48bc:
            if (plVar12 != (longlong *)0x0) {
              uVar18 = FUN_01e3f820();
              local_f8 = (float)uVar18;
              fStack_f4 = (float)((ulonglong)uVar18 >> 0x20);
              FUN_01d526f0();
              local_a8 = in_XMM1._0_4_;
              fStack_a4 = in_XMM1._4_4_;
              fStack_a0 = in_XMM1._8_4_;
              fStack_9c = in_XMM1._12_4_;
              in_XMM1._4_4_ = fStack_a4;
              in_XMM1._0_4_ = fStack_a4;
              in_XMM1._8_4_ = fStack_9c;
              in_XMM1._12_4_ = fStack_9c;
              auVar1._8_8_ = extraout_XMM0_Qb_05;
              auVar1._0_8_ = uVar18;
              auVar22._0_4_ = (local_a8 - fStack_a4) + local_f8;
              auVar22._4_4_ = (fStack_a4 - fStack_a4) + fStack_f4;
              auVar22._8_4_ = (fStack_a0 - fStack_9c) + (float)extraout_XMM0_Qb_05;
              auVar22._12_4_ =
                   (fStack_9c - fStack_9c) + (float)((ulonglong)extraout_XMM0_Qb_05 >> 0x20);
              auVar24 = blendps(auVar22,auVar1,2);
              FUN_00d05510(auVar24._0_8_);
              FUN_01d52740();
              (**(code **)(*local_58 + 0x400))();
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
          else {
            uVar17 = FUN_01db9f80();
            (**(code **)(*this + 0x920))(*this,uVar17);
            if (local_58 != (longlong *)0x0) {
              if (local_50 == '\0') {
                FUN_00d50b00();
              }
              goto LAB_01dc48bc;
            }
          }
          FUN_01d52770();
          (**(code **)(*this + 0x620))();
          if (!bVar5) {
            FUN_00d50b20();
          }
          goto LAB_01dc49a9;
        }
      }
      else {
        fVar16 = (float)FUN_01db9a50();
        FUN_01e3f820();
        fVar25 = in_XMM1._4_4_;
        in_XMM1 = ZEXT416((uint)fVar16);
        if (fVar16 <= fVar25 + fVar25) goto LAB_01dc44d0;
        uVar18 = FUN_01dc1b40();
        local_78 = (float)uVar18;
        fStack_74 = (float)((ulonglong)uVar18 >> 0x20);
        fStack_70 = (float)extraout_XMM0_Qb_02;
        fStack_6c = (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
        uVar18 = FUN_01dc1b40();
        FUN_01e3f820();
        local_a8 = (float)uVar18;
        fStack_a4 = (float)((ulonglong)uVar18 >> 0x20);
        fStack_a0 = (float)extraout_XMM0_Qb_03;
        fStack_9c = (float)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
        auVar26._0_4_ = ((local_78 - local_a8) - in_XMM1._4_4_) + local_a8;
        auVar26._4_4_ = (fStack_74 - in_XMM1._4_4_) + fStack_a4;
        auVar26._8_4_ = (fStack_70 - in_XMM1._12_4_) + fStack_a0;
        auVar26._12_4_ = (fStack_6c - in_XMM1._12_4_) + fStack_9c;
        in_XMM1 = blendps(auVar26,_DAT_0238ff00,2);
        cVar9 = FUN_00d05410();
        if (cVar9 == '\0') goto LAB_01dc44d0;
        DAT_028b8a5c = -1;
        if ((char)this[0x29] == '\0') {
          cVar9 = FUN_01db9d40();
          if (cVar9 == '\0') {
            FUN_01dd3ac0();
            FUN_01dcd4e0();
            if (local_50 == '\0') {
              if (local_58 != (longlong *)0x0) {
                FUN_00d50b00();
                goto LAB_01dc4ab6;
              }
            }
            else if (local_58 != (longlong *)0x0) {
LAB_01dc4ab6:
              local_50 = '\0';
              local_58 = (longlong *)0x0;
              local_40 = -1;
              while( true ) {
                lVar13 = (longlong)local_40;
                local_40 = local_40 + 1;
                if (*(int *)((longlong)plVar8 + 0xc) <= local_40) break;
                local_58 = *(longlong **)(plVar8[2] + 8 + lVar13 * 8);
                FUN_01db9b10();
              }
              FUN_01de6a30();
              FUN_00d50b20();
            }
            FUN_01db9d50();
            FUN_01db9b10();
            FUN_01dd3ad0();
            (**(code **)(*plVar7 + 0x980))();
            bVar5 = false;
          }
          else {
            iVar11 = FUN_01db9f80();
            if (iVar11 == 0) {
              FUN_01db9d50();
              goto LAB_01dc49a9;
            }
            bVar5 = false;
            FUN_01db9d50();
          }
          goto LAB_01dc49ab;
        }
        cVar9 = FUN_01db9d40();
        if (cVar9 == '\0') {
          FUN_01dd3ac0();
          FUN_01db9d50();
          FUN_01db9b10();
          FUN_01dd3ad0();
          (**(code **)(*plVar7 + 0x980))();
          bVar5 = false;
          goto LAB_01dc49ab;
        }
        iVar11 = FUN_01db9f80();
        if (iVar11 != 0) {
          bVar5 = false;
          FUN_01db9b10();
          goto LAB_01dc49ab;
        }
        FUN_01db9d50();
LAB_01dc49a9:
        bVar5 = false;
      }
LAB_01dc49ab:
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      iVar11 = DAT_028b8a58;
      if (!bVar5) break;
    }
  }
  DAT_028b8a58 = iVar11;
  FUN_00d50b20();
  return;
}




// ==================================================
// @01bdee90 (2405 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  undefined8 *this;
  
  FUN_000a32b0();
  this[0x27] = &DAT_025768d0;
  if (DAT_026ea710 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f7680 = "GNPropertyObserver";
      DAT_026f7690 = 0;
      _DAT_026f7688 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  this[0x28] = &DAT_0267efd8;
  if (DAT_026eba00 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e6cc0 = "GNDisplayGroupDelegate";
      DAT_027e6cd0 = 0;
      _DAT_027e6cc8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *this = &DAT_0264e380;
  this[2] = &DAT_0264ecd8;
  this[0x27] = &DAT_0264ed18;
  this[0x28] = &DAT_0264ed68;
  FUN_01bdf850();
  this[0x2a] = 0;
  this[0x2b] = 0;
  if (DAT_027e6cb8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e6c08 = FUN_0006d940();
      _DAT_027e6bf0 = "MUSpectrumShaperEnvelopeView";
      _DAT_027e6bf8 = 0x198;
      _DAT_027e6c00 = FUN_01bdee00;
      _DAT_027e6c10 = 0;
      uRam00000000027e6c18 = 0;
      _DAT_027e6c20 = 0;
      uRam00000000027e6c28 = 0;
      _DAT_027e6c30 = 0;
      uRam00000000027e6c38 = 0;
      _DAT_027e6c40 = 0;
      uRam00000000027e6c48 = 0;
      _DAT_027e6c50 = 0;
      uRam00000000027e6c58 = 0;
      _DAT_027e6c60 = 0;
      uRam00000000027e6c68 = 0;
      _DAT_027e6c70 = 0;
      uRam00000000027e6c78 = 0;
      _DAT_027e6c80 = 0;
      uRam00000000027e6c88 = 0;
      _DAT_027e6c90 = 0;
      uRam00000000027e6c98 = 0;
      _DAT_027e6ca0 = 0;
      _uRam00000000027e6ca8 = 0;
      _DAT_027e6cb0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e6cab == '\0') {
    FUN_01bdfb40();
    FUN_00e87980();
  }
  this[0x2c] = 0;
  this[0x2d] = 0;
  if (DAT_027e6cb8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e6c08 = FUN_0006d940();
      _DAT_027e6bf0 = "MUSpectrumShaperEnvelopeView";
      _DAT_027e6bf8 = 0x198;
      _DAT_027e6c00 = FUN_01bdee00;
      _DAT_027e6c10 = 0;
      uRam00000000027e6c18 = 0;
      _DAT_027e6c20 = 0;
      uRam00000000027e6c28 = 0;
      _DAT_027e6c30 = 0;
      uRam00000000027e6c38 = 0;
      _DAT_027e6c40 = 0;
      uRam00000000027e6c48 = 0;
      _DAT_027e6c50 = 0;
      uRam00000000027e6c58 = 0;
      _DAT_027e6c60 = 0;
      uRam00000000027e6c68 = 0;
      _DAT_027e6c70 = 0;
      uRam00000000027e6c78 = 0;
      _DAT_027e6c80 = 0;
      uRam00000000027e6c88 = 0;
      _DAT_027e6c90 = 0;
      uRam00000000027e6c98 = 0;
      _DAT_027e6ca0 = 0;
      _uRam00000000027e6ca8 = 0;
      _DAT_027e6cb0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e6cab == '\0') {
    FUN_01bdfcb0();
    FUN_00e87980();
  }
  this[0x2e] = 0;
  this[0x2f] = 0;
  if (DAT_027e6cb8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e6c08 = FUN_0006d940();
      _DAT_027e6bf0 = "MUSpectrumShaperEnvelopeView";
      _DAT_027e6bf8 = 0x198;
      _DAT_027e6c00 = FUN_01bdee00;
      _DAT_027e6c10 = 0;
      uRam00000000027e6c18 = 0;
      _DAT_027e6c20 = 0;
      uRam00000000027e6c28 = 0;
      _DAT_027e6c30 = 0;
      uRam00000000027e6c38 = 0;
      _DAT_027e6c40 = 0;
      uRam00000000027e6c48 = 0;
      _DAT_027e6c50 = 0;
      uRam00000000027e6c58 = 0;
      _DAT_027e6c60 = 0;
      uRam00000000027e6c68 = 0;
      _DAT_027e6c70 = 0;
      uRam00000000027e6c78 = 0;
      _DAT_027e6c80 = 0;
      uRam00000000027e6c88 = 0;
      _DAT_027e6c90 = 0;
      uRam00000000027e6c98 = 0;
      _DAT_027e6ca0 = 0;
      _uRam00000000027e6ca8 = 0;
      _DAT_027e6cb0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e6cab == '\0') {
    FUN_01bdfe20();
    FUN_00e87980();
  }
  *(undefined1 *)(this + 0x30) = 0;
  if (DAT_027e6cb8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e6c08 = FUN_0006d940();
      _DAT_027e6bf0 = "MUSpectrumShaperEnvelopeView";
      _DAT_027e6bf8 = 0x198;
      _DAT_027e6c00 = FUN_01bdee00;
      _DAT_027e6c10 = 0;
      uRam00000000027e6c18 = 0;
      _DAT_027e6c20 = 0;
      uRam00000000027e6c28 = 0;
      _DAT_027e6c30 = 0;
      uRam00000000027e6c38 = 0;
      _DAT_027e6c40 = 0;
      uRam00000000027e6c48 = 0;
      _DAT_027e6c50 = 0;
      uRam00000000027e6c58 = 0;
      _DAT_027e6c60 = 0;
      uRam00000000027e6c68 = 0;
      _DAT_027e6c70 = 0;
      uRam00000000027e6c78 = 0;
      _DAT_027e6c80 = 0;
      uRam00000000027e6c88 = 0;
      _DAT_027e6c90 = 0;
      uRam00000000027e6c98 = 0;
      _DAT_027e6ca0 = 0;
      _uRam00000000027e6ca8 = 0;
      _DAT_027e6cb0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e6cab == '\0') {
    FUN_01bdff90();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x181) = 0;
  if (DAT_027e6cb8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e6c08 = FUN_0006d940();
      _DAT_027e6bf0 = "MUSpectrumShaperEnvelopeView";
      _DAT_027e6bf8 = 0x198;
      _DAT_027e6c00 = FUN_01bdee00;
      _DAT_027e6c10 = 0;
      uRam00000000027e6c18 = 0;
      _DAT_027e6c20 = 0;
      uRam00000000027e6c28 = 0;
      _DAT_027e6c30 = 0;
      uRam00000000027e6c38 = 0;
      _DAT_027e6c40 = 0;
      uRam00000000027e6c48 = 0;
      _DAT_027e6c50 = 0;
      uRam00000000027e6c58 = 0;
      _DAT_027e6c60 = 0;
      uRam00000000027e6c68 = 0;
      _DAT_027e6c70 = 0;
      uRam00000000027e6c78 = 0;
      _DAT_027e6c80 = 0;
      uRam00000000027e6c88 = 0;
      _DAT_027e6c90 = 0;
      uRam00000000027e6c98 = 0;
      _DAT_027e6ca0 = 0;
      _uRam00000000027e6ca8 = 0;
      _DAT_027e6cb0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e6cab == '\0') {
    FUN_01be0100();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x182) = 0;
  if (DAT_027e6cb8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e6c08 = FUN_0006d940();
      _DAT_027e6bf0 = "MUSpectrumShaperEnvelopeView";
      _DAT_027e6bf8 = 0x198;
      _DAT_027e6c00 = FUN_01bdee00;
      _DAT_027e6c10 = 0;
      uRam00000000027e6c18 = 0;
      _DAT_027e6c20 = 0;
      uRam00000000027e6c28 = 0;
      _DAT_027e6c30 = 0;
      uRam00000000027e6c38 = 0;
      _DAT_027e6c40 = 0;
      uRam00000000027e6c48 = 0;
      _DAT_027e6c50 = 0;
      uRam00000000027e6c58 = 0;
      _DAT_027e6c60 = 0;
      uRam00000000027e6c68 = 0;
      _DAT_027e6c70 = 0;
      uRam00000000027e6c78 = 0;
      _DAT_027e6c80 = 0;
      uRam00000000027e6c88 = 0;
      _DAT_027e6c90 = 0;
      uRam00000000027e6c98 = 0;
      _DAT_027e6ca0 = 0;
      _uRam00000000027e6ca8 = 0;
      _DAT_027e6cb0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e6cab == '\0') {
    FUN_01be0270();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x183) = 0;
  if (DAT_027e6cb8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e6c08 = FUN_0006d940();
      _DAT_027e6bf0 = "MUSpectrumShaperEnvelopeView";
      _DAT_027e6bf8 = 0x198;
      _DAT_027e6c00 = FUN_01bdee00;
      _DAT_027e6c10 = 0;
      uRam00000000027e6c18 = 0;
      _DAT_027e6c20 = 0;
      uRam00000000027e6c28 = 0;
      _DAT_027e6c30 = 0;
      uRam00000000027e6c38 = 0;
      _DAT_027e6c40 = 0;
      uRam00000000027e6c48 = 0;
      _DAT_027e6c50 = 0;
      uRam00000000027e6c58 = 0;
      _DAT_027e6c60 = 0;
      uRam00000000027e6c68 = 0;
      _DAT_027e6c70 = 0;
      uRam00000000027e6c78 = 0;
      _DAT_027e6c80 = 0;
      uRam00000000027e6c88 = 0;
      _DAT_027e6c90 = 0;
      uRam00000000027e6c98 = 0;
      _DAT_027e6ca0 = 0;
      _uRam00000000027e6ca8 = 0;
      _DAT_027e6cb0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e6cab == '\0') {
    FUN_01be03e0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x184) = 0;
  if (DAT_027e6cb8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e6c08 = FUN_0006d940();
      _DAT_027e6bf0 = "MUSpectrumShaperEnvelopeView";
      _DAT_027e6bf8 = 0x198;
      _DAT_027e6c00 = FUN_01bdee00;
      _DAT_027e6c10 = 0;
      uRam00000000027e6c18 = 0;
      _DAT_027e6c20 = 0;
      uRam00000000027e6c28 = 0;
      _DAT_027e6c30 = 0;
      uRam00000000027e6c38 = 0;
      _DAT_027e6c40 = 0;
      uRam00000000027e6c48 = 0;
      _DAT_027e6c50 = 0;
      uRam00000000027e6c58 = 0;
      _DAT_027e6c60 = 0;
      uRam00000000027e6c68 = 0;
      _DAT_027e6c70 = 0;
      uRam00000000027e6c78 = 0;
      _DAT_027e6c80 = 0;
      uRam00000000027e6c88 = 0;
      _DAT_027e6c90 = 0;
      uRam00000000027e6c98 = 0;
      _DAT_027e6ca0 = 0;
      _uRam00000000027e6ca8 = 0;
      _DAT_027e6cb0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e6cab == '\0') {
    FUN_01be0550();
    FUN_00e87980();
  }
  *(undefined4 *)(this + 0x31) = 0;
  if (DAT_027e6cb8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e6c08 = FUN_0006d940();
      _DAT_027e6bf0 = "MUSpectrumShaperEnvelopeView";
      _DAT_027e6bf8 = 0x198;
      _DAT_027e6c00 = FUN_01bdee00;
      _DAT_027e6c10 = 0;
      uRam00000000027e6c18 = 0;
      _DAT_027e6c20 = 0;
      uRam00000000027e6c28 = 0;
      _DAT_027e6c30 = 0;
      uRam00000000027e6c38 = 0;
      _DAT_027e6c40 = 0;
      uRam00000000027e6c48 = 0;
      _DAT_027e6c50 = 0;
      uRam00000000027e6c58 = 0;
      _DAT_027e6c60 = 0;
      uRam00000000027e6c68 = 0;
      _DAT_027e6c70 = 0;
      uRam00000000027e6c78 = 0;
      _DAT_027e6c80 = 0;
      uRam00000000027e6c88 = 0;
      _DAT_027e6c90 = 0;
      uRam00000000027e6c98 = 0;
      _DAT_027e6ca0 = 0;
      _uRam00000000027e6ca8 = 0;
      _DAT_027e6cb0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e6cab == '\0') {
    FUN_01be06c0();
    FUN_00e87980();
  }
  FUN_01be0830();
  return;
}




// ==================================================
// @01abe1e0 (2354 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  pthread_key_t in_ECX;
  pthread_key_t pVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *arg1;
  longlong this;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar15;
  undefined8 in_XMM0_Qb;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fStack_124;
  float fStack_11c;
  float fStack_f4;
  float fStack_ec;
  float local_4c;
  longlong local_48;
  char local_40;
  int iVar11;
  
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b7b80();
  if (local_40 == '\0') {
    if (local_48 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_48 == 0) {
    return;
  }
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar5 = FUN_017f2980();
  if ((cVar5 != '\0') || (*(longlong *)(this + 0x168) == 0)) goto LAB_01abeaf7;
  FUN_00d50b00();
  iVar6 = FUN_014148b0();
  if (0 < iVar6) {
    FUN_01414880();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
        goto LAB_01abe341;
      }
    }
    else if (local_48 != 0) {
LAB_01abe341:
      if (DAT_02394274 < *(float *)(*(longlong *)(local_48 + 0x10) + 4)) {
        iVar6 = *(int *)(local_48 + 0x18);
        iVar11 = iVar6 + 3;
        if (-1 < iVar6) {
          iVar11 = iVar6;
        }
        uVar10 = iVar11 >> 2;
        lVar13 = 0;
        do {
          iVar6 = (int)lVar13;
          if ((int)(uVar10 + iVar6) < 2) goto LAB_01abeae2;
          lVar9 = lVar13 * 4;
          lVar13 = lVar13 + -1;
        } while (*(float *)(*(longlong *)(local_48 + 0x10) + (ulonglong)(uVar10 - 1) * 4 + lVar9) *
                 (float)(int)(uVar10 + iVar6 + -1) <= DAT_02394274);
        lVar9 = (ulonglong)uVar10 + lVar13;
        if ((lVar9 != 1) && ((ulonglong)uVar10 + lVar13 != 2)) {
          lVar12 = (ulonglong)(uVar10 + (int)lVar13 + 1 & 1) + 1;
          do {
            lVar12 = lVar12 + 2;
          } while (lVar9 != lVar12);
        }
        FUN_00aea610();
        fVar14 = (float)_powf();
        fStack_f4 = (float)((ulonglong)param_2 >> 0x20);
        fStack_ec = (float)((ulonglong)in_XMM1_Qb >> 0x20);
        lVar9 = (longlong)(int)uVar10 * 4 + *(longlong *)(*(longlong *)(this + 0x180) + 0x10);
        fVar1 = *(float *)(lVar9 + lVar13 * 4);
        if (DAT_02394274 <= fVar1) {
          local_4c = 0.0;
          if (0.0 <= fVar14 * fStack_f4) {
            local_4c = fVar14 * fStack_f4;
          }
          local_4c = local_4c / fVar1;
        }
        else {
          local_4c = DAT_02390124;
        }
        pvVar7 = _pthread_getspecific((pthread_key_t)lVar9);
        pVar8 = (pthread_key_t)lVar9;
        if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pVar8 = (pthread_key_t)local_48;
        }
        fVar14 = (float)FUN_017f2db0();
        fVar1 = DAT_02390124;
        if (DAT_02394274 <= fVar14) {
          FUN_014148b0();
          FUN_014148d0();
          FUN_014148b0();
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017f2db0();
        }
        if (0 < *(int *)(this + 0x19c)) {
          fVar14 = DAT_02390d34;
          if (local_4c <= DAT_02390d34) {
            fVar14 = local_4c;
          }
          fStack_124 = (float)((ulonglong)param_1 >> 0x20);
          fStack_11c = (float)((ulonglong)in_XMM0_Qb >> 0x20);
          fVar15 = DAT_0239011c * fStack_f4;
          lVar9 = 0;
          do {
            lVar12 = lVar9 + 1;
            lVar4 = *(longlong *)(*(longlong *)(this + 0x178) + 0x10);
            fVar2 = *(float *)(lVar4 + 4 + lVar9 * 4);
            fVar3 = *(float *)(lVar4 + 8 + lVar9 * 4);
            if (lVar12 < (int)uVar10 + lVar13 + 1) {
              FUN_00aea610();
              fVar16 = (float)_powf();
              fVar17 = 0.0;
              if (0.0 <= fVar16 * fStack_f4) {
                fVar17 = fVar16 * fStack_f4;
              }
            }
            else {
              fVar17 = *(float *)(*(longlong *)(*(longlong *)(this + 0x180) + 0x10) + 4 +
                                 lVar9 * 4) * fVar14;
            }
            lVar4 = *(longlong *)(*(longlong *)(this + 400) + 0x10);
            fVar17 = (*(float *)(lVar4 + 4 + lVar9 * 4) - fVar17) * DAT_0239109c + fVar17;
            *(float *)(lVar4 + 4 + lVar9 * 4) = fVar17;
            if (DAT_02391090 < (fVar1 / fVar15) * fVar17) {
              lVar4 = *(longlong *)(*(longlong *)(this + 0x178) + 0x10);
              fVar16 = *(float *)(lVar4 + 8 + lVar9 * 4) - *(float *)(lVar4 + 4 + lVar9 * 4);
              FUN_01cfc9f0();
              if (local_40 == '\0') {
                if (local_48 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40 = '\0';
              }
              FUN_01d488d0();
              if (local_48 != 0) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              auVar20 = roundss(ZEXT816(0),
                                ZEXT416((uint)((float)((uint)fVar2 & _DAT_023945e0 | DAT_02394dc8) +
                                              fVar2)),0xb);
              auVar18 = ZEXT416((uint)((float)((uint)fVar3 & _DAT_023945e0 | DAT_02394dc8) + fVar3))
              ;
              auVar18 = roundss(auVar18,auVar18,0xb);
              auVar19._4_12_ = auVar18._4_12_;
              auVar21 = ZEXT416((uint)fVar16 & _DAT_023945e0) | _DAT_023945f0;
              auVar21._0_4_ = auVar21._0_4_ + fVar16;
              auVar21 = roundss(auVar21,auVar21,0xb);
              auVar19._0_4_ = (auVar18._0_4_ + auVar20._0_4_ + DAT_023b1608) * DAT_0239011c;
              auVar18._4_4_ = fStack_124 + fStack_f4;
              auVar18._0_4_ = (fStack_124 + fStack_f4) - fVar17;
              auVar18._8_4_ = fStack_11c + fStack_ec;
              auVar18._12_4_ = fStack_11c + fStack_ec;
              auVar18 = insertps(auVar19,auVar18,0x10);
              auVar20._4_12_ = auVar21._4_12_;
              auVar20._0_4_ = auVar21._0_4_ * DAT_02391094;
              (**(code **)(*(longlong *)*arg1 + 0x3c0))(auVar18._0_8_,auVar20._0_8_);
            }
            lVar9 = lVar12;
          } while (lVar12 < *(int *)(this + 0x19c));
        }
      }
LAB_01abeae2:
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01abeaf7:
  FUN_00d50b20();
  return;
}




// ==================================================
// @01982df0 (2296 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  undefined8 *arg1;
  longlong this;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float extraout_XMM0_Db;
  undefined1 auVar13 [16];
  float fVar14;
  undefined4 uVar15;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  longlong local_88;
  char local_80;
  float local_78;
  char local_5c;
  char local_50;
  longlong *local_48;
  char local_40;
  
  uVar15 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar14 = (float)param_2;
  if (*(char *)(this + 0x18a) == '\0') {
    bVar8 = *(char *)(this + 0x18b) == '\0';
    lVar1 = *(longlong *)(this + 0x178);
  }
  else {
    bVar8 = false;
    lVar1 = *(longlong *)(this + 0x178);
  }
  if (((lVar1 == 0) && (!bVar8)) && (*(int *)(this + 0x198) == 1)) {
    return;
  }
  if (*(char *)(this + 0x18c) == '\0') {
    local_5c = '\0';
  }
  else {
    FUN_01989f80();
    local_5c = (**(code **)(*local_48 + 0xb58))();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01989f80();
  (**(code **)(&UNK_00001418 + *local_48))();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01989f80();
  fVar10 = (float)(**(code **)(*local_48 + 3000))();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  fVar11 = (float)FUN_01e3f820();
  fVar14 = fVar14 * DAT_0239011c;
  FUN_01e3f820();
  FUN_01e3f820();
  auVar13._4_4_ = uVar15;
  auVar13._0_4_ = fVar14 + fVar11;
  auVar13._8_4_ = in_XMM1_Dc;
  auVar13._12_4_ = in_XMM1_Dd;
  auVar13 = roundss(auVar13,auVar13,9);
  local_78 = auVar13._0_4_;
  if ((*(char *)(this + 0x188) == '\0') || (*(longlong *)(this + 0x170) == 0)) {
LAB_0198300e:
    bVar8 = false;
    plVar7 = (longlong *)0x0;
  }
  else {
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    if (local_40 == '\0') {
      if (local_48 == (longlong *)0x0) goto LAB_0198300e;
      FUN_00d50b00();
    }
    else if (local_48 == (longlong *)0x0) goto LAB_0198300e;
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfcb0();
    if (local_48 == (longlong *)0x0) {
      cVar3 = '\0';
    }
    else {
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_013ddf90();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      plVar7 = (longlong *)0x0;
      bVar8 = false;
    }
    else {
      FUN_01cfcdc0();
      if (local_48 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
        bVar8 = false;
      }
      else {
        bVar8 = true;
        plVar7 = local_48;
        if (local_40 == '\0') {
          FUN_00d50b00();
        }
      }
      local_78 = local_78 + DAT_02390124;
    }
    FUN_00d50b20();
  }
  if (local_5c == '\0') {
    if (plVar7 == (longlong *)0x0) {
      FUN_01d48b40();
      FUN_01cfcdc0();
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01d488d0();
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01d48b40();
      FUN_01d488d0();
    }
  }
  else {
    FUN_01d48b40();
    if (plVar7 == (longlong *)0x0) {
      FUN_01cfcdc0();
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01d488d0();
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01d488d0();
    }
  }
  if ((*(char *)(this + 0x18b) == '\0') && (*(char *)(this + 0x18a) == '\0')) {
    cVar3 = *(char *)(this + 0x188);
    if (cVar3 == '\0') {
      pVar6 = 0;
LAB_019834c5:
      bVar9 = cVar3 != '\0';
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_01263cf0();
      local_50 = (char)pVar6;
      cVar2 = cVar4;
      if (local_50 == '\0') {
        if (cVar3 != '\0') goto LAB_01983547;
      }
      else {
LAB_01983524:
        cVar4 = cVar2;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if (bVar9) goto LAB_01983547;
      }
    }
    else {
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01268710();
      if (local_48 != (longlong *)0x0) {
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01268710();
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_01263cf0();
        bVar9 = true;
        cVar2 = '\x01';
        if (cVar4 == '\0') goto LAB_019834a4;
        goto LAB_01983524;
      }
LAB_019834a4:
      pVar6 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_48 != (longlong *)0x0);
      if (*(char *)(this + 0x188) == '\0') goto LAB_019834c5;
      bVar9 = true;
      cVar4 = '\0';
      cVar2 = '\0';
      if (local_48 != (longlong *)0x0) goto LAB_01983524;
LAB_01983547:
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (cVar4 != '\0') {
      auVar13 = ZEXT416((uint)(fVar10 * _DAT_0241b4d4 + fVar10 * _DAT_0241b4d4));
      auVar13 = roundss(auVar13,auVar13,9);
      (**(code **)(*(longlong *)*arg1 + 0x3e0))();
      (**(code **)(*(longlong *)*arg1 + 0x3e0))();
      if (local_5c != '\0') {
        (**(code **)(*(longlong *)*arg1 + 0x3e0))
                  (DAT_02390124 + local_78,extraout_XMM0_Db,DAT_02390124 + local_78,
                   extraout_XMM0_Db + auVar13._0_4_);
        (**(code **)(*(longlong *)*arg1 + 0x3e0))();
      }
      goto LAB_0198364e;
    }
  }
  (**(code **)(*(longlong *)*arg1 + 0x3e0))();
LAB_0198364e:
  uVar12 = FUN_01d48b40();
  if (*(char *)(this + 0x18b) != '\0') {
    uVar12 = FUN_01982510(uVar12,2,local_78);
  }
  if (*(char *)(this + 0x18a) != '\0') {
    FUN_01982510(uVar12,0,local_78);
  }
  if ((bVar8) && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @017ebde0 (2258 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong this;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar21 [16];
  longlong local_40;
  char local_38;
  
  FUN_00e8b7a0();
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined2 *)(this + 0x7c) = 0;
  *(undefined8 *)(this + 0xc4) = 0x3f8000003f800000;
  *(undefined4 *)(this + 0xb0) = 0x3f800000;
  *(undefined8 *)(this + 0xa8) = 0x412c440000000001;
  puVar13 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &DAT_025f0a18;
  puVar13[0x10] = 0;
  *(undefined1 *)(puVar13 + 0x11) = 0;
  puVar13[0x14] = 0;
  *(undefined4 *)(puVar13 + 0x15) = 0;
  puVar13[7] = 0;
  puVar13[8] = 0;
  *(undefined4 *)(puVar13 + 9) = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  *(undefined8 *)((longlong)puVar13 + 0x69) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x71) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x8c) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x94) = 0;
  *(undefined1 *)((longlong)puVar13 + 0x9c) = 0;
  pcVar12 = DAT_025f0a30;
  (*DAT_025f0a30)();
  lVar1 = *(longlong *)(this + 0x40);
  *(undefined8 **)(this + 0x40) = puVar13;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar14 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar14 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar16 = FUN_00d50b00();
  FUN_015b73b0(uVar16,&stack0xffffffffffffff50);
  if (this != 0) {
    FUN_00d50b20();
  }
  puVar13 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &DAT_025f0a18;
  puVar13[0x10] = 0;
  *(undefined1 *)(puVar13 + 0x11) = 0;
  puVar13[0x14] = 0;
  *(undefined4 *)(puVar13 + 0x15) = 0;
  puVar13[7] = 0;
  puVar13[8] = 0;
  *(undefined4 *)(puVar13 + 9) = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  *(undefined8 *)((longlong)puVar13 + 0x69) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x71) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x8c) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x94) = 0;
  *(undefined1 *)((longlong)puVar13 + 0x9c) = 0;
  (*pcVar12)();
  lVar1 = *(longlong *)(this + 0x48);
  *(undefined8 **)(this + 0x48) = puVar13;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar14 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar14 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar16 = FUN_00d50b00();
  FUN_015b73b0(uVar16,&stack0xffffffffffffff60);
  if (this != 0) {
    FUN_00d50b20();
  }
  puVar13 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &DAT_025f0a18;
  puVar13[0x10] = 0;
  *(undefined1 *)(puVar13 + 0x11) = 0;
  puVar13[0x14] = 0;
  *(undefined4 *)(puVar13 + 0x15) = 0;
  puVar13[7] = 0;
  puVar13[8] = 0;
  *(undefined4 *)(puVar13 + 9) = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  *(undefined8 *)((longlong)puVar13 + 0x69) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x71) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x8c) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x94) = 0;
  *(undefined1 *)((longlong)puVar13 + 0x9c) = 0;
  (*pcVar12)();
  lVar1 = *(longlong *)(this + 0x50);
  *(undefined8 **)(this + 0x50) = puVar13;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar14 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar14 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar16 = FUN_00d50b00();
  FUN_015b73b0(uVar16,&stack0xffffffffffffff70);
  if (this != 0) {
    FUN_00d50b20();
  }
  puVar13 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &DAT_025f0a18;
  puVar13[0x10] = 0;
  *(undefined1 *)(puVar13 + 0x11) = 0;
  puVar13[0x14] = 0;
  *(undefined4 *)(puVar13 + 0x15) = 0;
  puVar13[7] = 0;
  puVar13[8] = 0;
  *(undefined4 *)(puVar13 + 9) = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  *(undefined8 *)((longlong)puVar13 + 0x69) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x71) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x8c) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x94) = 0;
  *(undefined1 *)((longlong)puVar13 + 0x9c) = 0;
  (*pcVar12)();
  lVar1 = *(longlong *)(this + 0x58);
  *(undefined8 **)(this + 0x58) = puVar13;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar14 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar14 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar16 = FUN_00d50b00();
  FUN_015b73b0(uVar16,&stack0xffffffffffffff80);
  if (this != 0) {
    FUN_00d50b20();
  }
  puVar13 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &DAT_02610350;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[9] = 0;
  puVar13[10] = 0;
  *(undefined8 *)((longlong)puVar13 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x5c) = 0;
  pcVar12 = DAT_02610368;
  (*DAT_02610368)();
  lVar1 = *(longlong *)(this + 0x60);
  *(undefined8 **)(this + 0x60) = puVar13;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar14 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar14 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar16 = FUN_00d50b00();
  FUN_0188ea70(uVar16,&stack0xffffffffffffff90);
  if (this != 0) {
    FUN_00d50b20();
  }
  puVar13 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &DAT_02610350;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[9] = 0;
  puVar13[10] = 0;
  *(undefined8 *)((longlong)puVar13 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x5c) = 0;
  (*pcVar12)();
  lVar1 = *(longlong *)(this + 0x68);
  *(undefined8 **)(this + 0x68) = puVar13;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar14 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar14 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar16 = FUN_00d50b00();
  FUN_0188ea70(uVar16,&stack0xffffffffffffffa0);
  if (this != 0) {
    FUN_00d50b20();
  }
  puVar13 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &DAT_02610350;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[9] = 0;
  puVar13[10] = 0;
  *(undefined8 *)((longlong)puVar13 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x5c) = 0;
  (*pcVar12)();
  lVar1 = *(longlong *)(this + 0x70);
  *(undefined8 **)(this + 0x70) = puVar13;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar14 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar14 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar16 = FUN_00d50b00();
  FUN_0188ea70(uVar16,&stack0xffffffffffffffb0);
  if (this != 0) {
    FUN_00d50b20();
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_40 + 0x18)) {
    _memset_pattern16(param_1,(void *)((ulonglong)((*(uint *)(local_40 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  lVar1 = *(longlong *)(this + 0x90);
  if (lVar1 == local_40) {
    FUN_00d50b20();
  }
  else {
    *(longlong *)(this + 0x90) = local_40;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_40 + 0x18)) {
    _memset_pattern16(param_1,(void *)((ulonglong)((*(uint *)(local_40 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  lVar1 = *(longlong *)(this + 0x98);
  if (lVar1 == local_40) {
    FUN_00d50b20();
  }
  else {
    *(longlong *)(this + 0x98) = local_40;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_40 + 0x18)) {
    _memset_pattern16(param_1,(void *)((ulonglong)((*(uint *)(local_40 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  lVar1 = *(longlong *)(this + 0x88);
  if (lVar1 == local_40) {
    FUN_00d50b20();
  }
  else {
    *(longlong *)(this + 0x88) = local_40;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  iVar11 = _UNK_023de2bc;
  iVar10 = _UNK_023de2b8;
  iVar9 = _UNK_023de2b4;
  iVar8 = _DAT_023de2b0;
  auVar7 = _DAT_023b2d50;
  iVar6 = _UNK_0239418c;
  iVar5 = _UNK_02394188;
  iVar4 = _UNK_02394184;
  iVar3 = _DAT_02394180;
  lVar1 = *(longlong *)(*(longlong *)(this + 0x88) + 0x10);
  lVar15 = 5;
  iVar17 = _DAT_02394150;
  iVar18 = _UNK_02394154;
  iVar19 = _UNK_02394158;
  iVar20 = _UNK_0239415c;
  while( true ) {
    auVar21._4_4_ = (float)iVar18;
    auVar21._0_4_ = (float)iVar17;
    auVar21._8_4_ = (float)iVar19;
    auVar21._12_4_ = (float)iVar20;
    auVar21 = divps(auVar7,auVar21);
    *(undefined1 (*) [16])(lVar1 + -0x10 + lVar15 * 4) = auVar21;
    if (lVar15 == 0x7fd) break;
    auVar2._4_4_ = (float)(iVar18 + iVar4);
    auVar2._0_4_ = (float)(iVar17 + iVar3);
    auVar2._8_4_ = (float)(iVar19 + iVar5);
    auVar2._12_4_ = (float)(iVar20 + iVar6);
    auVar21 = divps(auVar7,auVar2);
    *(undefined1 (*) [16])(lVar1 + lVar15 * 4) = auVar21;
    iVar17 = iVar17 + iVar8;
    iVar18 = iVar18 + iVar9;
    iVar19 = iVar19 + iVar10;
    iVar20 = iVar20 + iVar11;
    lVar15 = lVar15 + 8;
  }
  *(undefined8 *)(&DAT_00001ff4 + lVar1) = 0x3a0020083a003012;
  *(undefined4 *)(lVar1 + 0x1ffc) = 0x3a001002;
  return;
}




// ==================================================
// @01bd5d50 (2213 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong **pplVar6;
  longlong this;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong lVar8;
  undefined1 uVar9;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  lVar2 = DAT_027e5bc8;
  if (DAT_027e5bc8 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_88 = lVar2;
  local_80 = '\x01';
  pplVar6 = &local_38;
  uVar7 = FUN_01e57490(param_1,&local_88);
  plVar1 = local_38;
  if (DAT_027e5dd8 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    uVar7 = extraout_XMM0_Da_01;
    if (iVar4 != 0) {
      _DAT_027e5d28 = FUN_001b37d0();
      _DAT_027e5d10 = "MUSpectrumShaperSlider";
      _DAT_027e5d18 = 0x200;
      _DAT_027e5d20 = FUN_01bdaad0;
      _DAT_027e5d30 = 0;
      uRam00000000027e5d38 = 0;
      _DAT_027e5d40 = 0;
      uRam00000000027e5d48 = 0;
      _DAT_027e5d50 = 0;
      uRam00000000027e5d58 = 0;
      _DAT_027e5d60 = 0;
      uRam00000000027e5d68 = 0;
      _DAT_027e5d70 = 0;
      uRam00000000027e5d78 = 0;
      _DAT_027e5d80 = 0;
      uRam00000000027e5d88 = 0;
      _DAT_027e5d90 = 0;
      uRam00000000027e5d98 = 0;
      _DAT_027e5da0 = 0;
      uRam00000000027e5da8 = 0;
      _DAT_027e5db0 = 0;
      uRam00000000027e5db8 = 0;
      _DAT_027e5dc0 = 0;
      uRam00000000027e5dc8 = 0;
      _DAT_027e5dd0 = 0;
      uVar7 = ___cxa_guard_release();
    }
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01bd5dca:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar7 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_01bd5dca;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  lVar2 = DAT_027e5bd0;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_027e5bd0 != 0) {
      FUN_00d50b00();
    }
    FUN_01bd1950(0);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e5bd8;
    if (DAT_027e5bd8 != 0) {
      FUN_00d50b00();
    }
    FUN_01bd1950(DAT_02390124);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e5be0;
    if (DAT_027e5be0 != 0) {
      FUN_00d50b00();
    }
    uVar9 = 1;
    lVar8 = lVar2;
    uVar7 = FUN_01bd1950(DAT_02390d34);
    if (lVar2 != 0) {
      uVar7 = FUN_00d50b20();
    }
    lVar2 = plVar1[0x3d];
    iVar4 = *(int *)(lVar2 + 0x18);
    FUN_00c8e340(uVar7,1,param_3,param_4,lVar8,uVar9);
    *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar4) = 0x3f800000;
    uVar7 = FUN_00d50b20();
  }
  lVar2 = DAT_027e5be8;
  if (DAT_027e5be8 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  pplVar6 = &local_38;
  uVar7 = FUN_01e57490(uVar7,&local_78);
  plVar1 = local_38;
  if (DAT_027e5dd8 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    uVar7 = extraout_XMM0_Da_02;
    if (iVar4 != 0) {
      _DAT_027e5d28 = FUN_001b37d0();
      _DAT_027e5d10 = "MUSpectrumShaperSlider";
      _DAT_027e5d18 = 0x200;
      _DAT_027e5d20 = FUN_01bdaad0;
      _DAT_027e5d30 = 0;
      uRam00000000027e5d38 = 0;
      _DAT_027e5d40 = 0;
      uRam00000000027e5d48 = 0;
      _DAT_027e5d50 = 0;
      uRam00000000027e5d58 = 0;
      _DAT_027e5d60 = 0;
      uRam00000000027e5d68 = 0;
      _DAT_027e5d70 = 0;
      uRam00000000027e5d78 = 0;
      _DAT_027e5d80 = 0;
      uRam00000000027e5d88 = 0;
      _DAT_027e5d90 = 0;
      uRam00000000027e5d98 = 0;
      _DAT_027e5da0 = 0;
      uRam00000000027e5da8 = 0;
      _DAT_027e5db0 = 0;
      uRam00000000027e5db8 = 0;
      _DAT_027e5dc0 = 0;
      uRam00000000027e5dc8 = 0;
      _DAT_027e5dd0 = 0;
      uVar7 = ___cxa_guard_release();
    }
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01bd5f81:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar7 = extraout_XMM0_Da_00;
    if (cVar3 == '\0') goto LAB_01bd5f81;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  lVar2 = DAT_027e5bf0;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_027e5bf0 != 0) {
      FUN_00d50b00();
    }
    FUN_01bd1950(DAT_02390124);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e5bf8;
    if (DAT_027e5bf8 != 0) {
      FUN_00d50b00();
    }
    FUN_01bd1950(DAT_0241df14);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e5c00;
    if (DAT_027e5c00 != 0) {
      FUN_00d50b00();
    }
    FUN_01bd1950(0);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e5c08;
    if (DAT_027e5c08 != 0) {
      FUN_00d50b00();
    }
    FUN_01bd1950(DAT_0241df10);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e5c10;
    if (DAT_027e5c10 != 0) {
      FUN_00d50b00();
    }
    uVar7 = FUN_01bd1950(DAT_02390d00);
    if (lVar2 != 0) {
      uVar7 = FUN_00d50b20();
    }
    lVar2 = plVar1[0x3d];
    iVar4 = *(int *)(lVar2 + 0x18);
    uVar7 = FUN_00c8e340(uVar7,1);
    *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar4) = 0xbf34fdf4;
    lVar2 = plVar1[0x3d];
    iVar4 = *(int *)(lVar2 + 0x18);
    uVar7 = FUN_00c8e340(uVar7,1);
    *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar4) = 0;
    lVar2 = plVar1[0x3d];
    iVar4 = *(int *)(lVar2 + 0x18);
    FUN_00c8e340(uVar7,1);
    *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar4) = 0x3f34fdf4;
    uVar7 = FUN_00d50b20();
  }
  lVar2 = DAT_027e5c18;
  if (DAT_027e5c18 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_68 = lVar2;
  local_60 = '\x01';
  pplVar6 = &local_38;
  FUN_01e57490(uVar7,&local_68);
  plVar1 = local_38;
  if (DAT_026e5340 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    if (iVar4 != 0) {
      _DAT_027e7718 = FUN_0006d940();
      _DAT_027e7700 = "GNModuleView";
      _DAT_027e7708 = 0x178;
      _DAT_027e7710 = FUN_00191170;
      _DAT_027e7720 = 0;
      uRam00000000027e7728 = 0;
      _DAT_027e7730 = 0;
      uRam00000000027e7738 = 0;
      _DAT_027e7740 = 0;
      uRam00000000027e7748 = 0;
      _DAT_027e7750 = 0;
      uRam00000000027e7758 = 0;
      _DAT_027e7760 = 0;
      uRam00000000027e7768 = 0;
      _DAT_027e7770 = 0;
      uRam00000000027e7778 = 0;
      _DAT_027e7780 = 0;
      uRam00000000027e7788 = 0;
      _DAT_027e7790 = 0;
      uRam00000000027e7798 = 0;
      _DAT_027e77a0 = 0;
      uRam00000000027e77a8 = 0;
      _DAT_027e77b0 = 0;
      uRam00000000027e77b8 = 0;
      _DAT_027e77c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01bd621d;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_01bd621d:
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    *plVar5 = (longlong)&DAT_0265c788;
    plVar5[2] = (longlong)&DAT_0265d0b0;
    FUN_00d500e0();
    lVar2 = *(longlong *)(this + 0x88);
    *(longlong **)(this + 0x88) = plVar5;
    if (lVar2 != 0) {
      FUN_00d50b20();
      plVar5 = *(longlong **)(this + 0x88);
    }
    (**(code **)(*plVar1 + 0x4d8))();
    (**(code **)(*plVar5 + 0x4d0))();
    plVar5 = *(longlong **)(this + 0x88);
    (**(code **)(*plVar1 + 0x560))();
    (**(code **)(*plVar5 + 0x558))();
    (**(code **)(**(longlong **)(this + 0x88) + 0x570))();
    FUN_01e40eb0();
    plVar5 = local_38;
    local_40 = 0;
    local_48 = *(longlong *)(this + 0x88);
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
    (**(code **)(*plVar5 + 0x450))();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x478))();
    FUN_01e3f820();
    (**(code **)(*plVar1 + 0x4d0))();
    local_50 = '\0';
    local_58 = plVar1;
    (**(code **)(**(longlong **)(this + 0x88) + 0x450))();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x558))();
    FUN_00d50b20();
  }
  FUN_01e534b0();
  return;
}




// ==================================================
// @019383e0 (2199 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  longlong lVar4;
  char *pcVar5;
  longlong *arg1;
  longlong *this;
  undefined4 uVar6;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(*this + 0x978))();
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*this + 0x978))();
    local_e0 = 0;
    local_e8 = this[0x27];
    if (local_e8 != 0) {
      FUN_00d50b00();
    }
    local_e0 = '\x01';
    (**(code **)(*local_48 + 0x968))();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  uVar6 = FUN_01bfdcc0(DAT_02390124);
  *(undefined4 *)((longlong)this + 0x584) = uVar6;
  if ((((this[0x80] == 0) && (this[0xaa] != 0)) &&
      (lVar4 = *(longlong *)(this[0xaa] + 0x400), lVar4 != 0)) && (lVar4 != 0)) {
    FUN_00d50b00();
    this[0x80] = lVar4;
  }
  if (((this[0x81] == 0) && (this[0xaa] != 0)) &&
     (lVar4 = *(longlong *)(this[0xaa] + 0x408), lVar4 != 0)) {
    if (lVar4 != 0) {
      FUN_00d50b00();
      this[0x81] = lVar4;
    }
    FUN_00d50b00();
    FUN_01a17960();
    if (this != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar1 = (longlong *)this[0x27];
  (**(code **)(*(longlong *)this[0xaa] + 0x958))();
  (**(code **)(*local_48 + 0x3c8))();
  lVar4 = *plVar1;
  (**(code **)(lVar4 + 0x3d0))();
  pVar3 = (pthread_key_t)lVar4;
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(&DAT_000014b0 + *(longlong *)this[0xaa]))();
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  (**(code **)(&DAT_000014a8 + *this))();
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*arg1 == 0) {
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *(longlong *)this[0xaa] + 0x20))();
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x10))();
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this + 0x18))();
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this + 0x18))();
  }
  lVar4 = this[0xa8];
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(&UNK_000016f8 + *this))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  *(undefined4 *)(this + 0x5e) = 0;
  (**(code **)(&DAT_000015b0 + *this))();
  (**(code **)(*this + 0x970))();
  FUN_0197be80();
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this + 0x20))();
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x10))();
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    FUN_01a34e60();
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
    lVar4 = this[0xa9];
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*local_48 + 0x920))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if (this[0x7f] == 0) {
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01326de0();
    (**(code **)(&DAT_000016e0 + *this))();
  }
  if (this[0x80] != 0) {
    lVar4 = this[0x7f];
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    FUN_01e26eb0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  lVar4 = DAT_026fb998;
  plVar1 = (longlong *)this[0x81];
  if (plVar1 != (longlong *)0x0) {
    if (DAT_026fb998 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x948))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01e1f270();
  FUN_00d23310();
  pcVar5 = local_38;
  if (local_40[0] != '\0') {
    pcVar5 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar6 = FUN_01e26150();
  local_108 = DAT_026f6e60;
  if (DAT_026f6e60 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_100 = '\x01';
  uVar6 = FUN_000175c0(uVar6,&local_108);
  if (local_50 == '\0') {
    if (local_58 != 0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  (**(code **)(*this + 0xec8))(uVar6,0);
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  local_f0 = '\0';
  local_f8 = 0;
  (**(code **)("/System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices" +
              *(longlong *)this[0xaa] + 0x18))();
  (**(code **)(&UNK_00001488 + *this))();
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  *(undefined4 *)(this + 0x79) = *(undefined4 *)(this[0xaa] + 0x3c8);
  (**(code **)(*this + 0x400))();
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01abf3d0 (2173 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  void *pvVar7;
  longlong *this;
  undefined8 *puVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar17 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar18 [16];
  undefined8 *local_a8;
  char local_a0;
  undefined8 *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  undefined8 *local_78;
  float local_6c;
  undefined8 *local_68;
  uint local_60;
  undefined8 *local_58;
  char local_50;
  undefined4 local_48;
  undefined8 *local_40;
  uint local_38;
  undefined4 local_34;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  
  uVar11 = FUN_01e3f820();
  if (*(int *)((longlong)this + 0x1bc) == -1) goto LAB_01abfc19;
  fVar1 = *(float *)((longlong)this + 0x1b4);
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b9440();
  puVar4 = local_68;
  if (((char)local_60 == '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b00();
    if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_78 = puVar4;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b93e0();
  puVar4 = local_68;
  if (((char)local_60 == '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b00();
    if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar6 = FUN_015b7ba0();
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b7b80();
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017ed3a0();
  if (local_68 == (undefined8 *)0x0) {
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_01abf72a:
    local_6c = DAT_02390124;
    iVar6 = (int)this[0x33];
    if (iVar6 == 0) goto LAB_01abf70c;
LAB_01abf742:
    puVar8 = DAT_027e3078;
    if (iVar6 == 3) {
      if (DAT_027e3078 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      FUN_00015ff0();
      local_88 = FUN_00e86210();
      local_80 = 0;
      uVar12 = extraout_XMM0_Qa;
      if (local_88 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_80 = '\x01';
      uVar12 = FUN_01d824e0(uVar12,&local_88);
      puVar5 = local_68;
      puVar9 = local_78;
      if ((char)local_60 == '\0') {
        if (local_68 != (undefined8 *)0x0) {
          uVar12 = FUN_00d50b00();
          if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
            uVar12 = FUN_00d50b20();
          }
        }
      }
      else {
        local_60 = local_60 & 0xffffff00;
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      if (puVar5 != (undefined8 *)0x0) {
        local_a8 = puVar8;
        local_a0 = '\0';
        FUN_01e57260(uVar12,&local_a8);
        puVar9 = local_68;
        if (local_68 == puVar8) {
LAB_01abf987:
          puVar9 = local_78;
          if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((char)local_60 == '\0') {
            if (local_68 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            bVar10 = puVar8 != (undefined8 *)0x0;
            puVar8 = puVar9;
            if (bVar10) {
              FUN_00d50b20();
            }
            goto LAB_01abf987;
          }
          if (puVar8 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          local_60 = local_60 & 0xffffff00;
          puVar8 = local_68;
          puVar9 = local_78;
        }
        if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      local_58 = puVar8;
      if (DAT_02390124 <=
          local_6c * *(float *)(puVar9[2] + (longlong)*(int *)((longlong)this + 0x1bc) * 4)) {
        auVar15._0_8_ = _logf();
        auVar15._8_8_ = extraout_XMM0_Qb_02;
        auVar16._4_12_ = auVar15._4_12_;
        auVar16._0_4_ = (float)auVar15._0_8_ * _DAT_0240e498;
        local_48 = FUN_00e7d780(auVar16._0_8_);
        local_60 = 2;
        local_68 = &DAT_024c5048;
        local_50 = 0;
        uVar12 = extraout_XMM0_Qa_01;
        if (puVar8 != (undefined8 *)0x0) {
          uVar12 = FUN_00d50b00();
        }
        local_50 = '\x01';
        local_68 = (undefined8 *)&DAT_025df2a0;
        FUN_00d8cb40(uVar12,&local_68);
        puVar9 = local_40;
        if (local_40 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
          bVar10 = false;
        }
        else if ((char)local_38 == '\0') {
          FUN_00d50b00();
          bVar10 = true;
          if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = local_38 & 0xffffff00;
          bVar10 = true;
        }
        local_68 = &DAT_024c5048;
        if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        auVar13._0_8_ = _logf();
        auVar13._8_8_ = extraout_XMM0_Qb_01;
        auVar14._4_12_ = auVar13._4_12_;
        auVar14._0_4_ = (float)auVar13._0_8_ * _DAT_0240e498;
        local_48 = FUN_00e7d780(auVar14._0_8_);
        local_60 = 2;
        local_68 = &DAT_024c5048;
        local_50 = 0;
        uVar12 = extraout_XMM0_Qa_00;
        if (puVar8 != (undefined8 *)0x0) {
          uVar12 = FUN_00d50b00();
        }
        local_50 = '\x01';
        local_68 = (undefined8 *)&DAT_025df2a0;
        FUN_00d8cb40(uVar12,&local_68);
        puVar9 = local_40;
        if (local_40 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
          bVar10 = false;
        }
        else if ((char)local_38 == '\0') {
          FUN_00d50b00();
          bVar10 = true;
          if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = local_38 & 0xffffff00;
          bVar10 = true;
        }
        local_68 = &DAT_024c5048;
        if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (puVar8 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_01abfb81;
    }
    if (*(float *)(puVar4[2] + (longlong)*(int *)((longlong)this + 0x1bc) * 4) <= DAT_02390124)
    {
      uVar12 = FUN_00aea610();
      local_38 = 1;
      local_40 = &DAT_024d0b28;
      local_34 = (undefined4)uVar12;
      FUN_00d8cb40(uVar12,&local_40);
      puVar9 = local_68;
      if (local_68 == (undefined8 *)0x0) goto LAB_01abf929;
      bVar10 = true;
      if ((char)local_60 == '\0') {
        FUN_00d50b00();
        if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      uVar12 = FUN_00aea610();
      local_38 = 1;
      local_40 = &DAT_024d0b28;
      local_34 = (undefined4)uVar12;
      FUN_00d8cb40(uVar12,&local_40);
      puVar9 = local_68;
      if (local_68 == (undefined8 *)0x0) {
LAB_01abf929:
        puVar9 = (undefined8 *)0x0;
        bVar10 = false;
      }
      else {
        bVar10 = true;
        if ((char)local_60 == '\0') {
          FUN_00d50b00();
          if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
LAB_01abfb86:
    FUN_00d50b20();
  }
  else {
    if ((char)local_60 != '\0') {
      FUN_00d50b20();
    }
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((iVar6 != 3) && (iVar6 != 0)) goto LAB_01abf72a;
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015b7b80();
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017ed3a0();
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    auVar17._0_8_ = FUN_012c6af0();
    auVar17._8_8_ = extraout_XMM0_Qb_00;
    auVar18._4_12_ = auVar17._4_12_;
    auVar18._0_4_ = (float)auVar17._0_8_ * DAT_023941f4;
    local_6c = (float)_exp2f(auVar18._0_8_);
    if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_6c = DAT_02390124 / local_6c;
    iVar6 = (int)this[0x33];
    if (iVar6 != 0) goto LAB_01abf742;
LAB_01abf70c:
    bVar10 = false;
    puVar9 = (undefined8 *)0x0;
LAB_01abfb81:
    if (puVar4 != (undefined8 *)0x0) goto LAB_01abfb86;
  }
  if (local_78 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar9 != (undefined8 *)0x0) {
    auVar3._8_8_ = in_XMM1_Qb;
    auVar3._0_8_ = param_2;
    auVar18 = blendps(auVar3,_DAT_0241c670,0xd);
    auVar2._8_8_ = extraout_XMM0_Qb;
    auVar2._0_8_ = uVar11;
    auVar17 = blendps(auVar2,ZEXT416((uint)(fVar1 + DAT_023b36a8)),1);
    local_90 = '\0';
    local_98 = puVar9;
    (**(code **)(*this + 0x6d8))(auVar17._0_8_,auVar18._0_8_);
    if ((local_90 != '\0') && (local_98 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar10) {
      return;
    }
    FUN_00d50b20();
    return;
  }
LAB_01abfc19:
  (**(code **)(*this + 0x6e0))();
  return;
}




// ==================================================
// @00ad3c00 (2114 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  ushort *puVar1;
  char cVar2;
  char *pcVar3;
  string *psVar4;
  int iVar5;
  longlong lVar6;
  ushort *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  void *pvVar11;
  byte *arg1;
  longlong this;
  string *psVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  void *pvVar15;
  bool bVar16;
  undefined4 uVar17;
  ushort local_a0;
  ulonglong local_68;
  string *psStack_60;
  ushort *local_48;
  ushort *puStack_40;
  ushort *local_38;
  
  iVar5 = 0;
  if ((int)param_2 == 0) {
    iVar5 = (**(code **)(**(longlong **)(this + 0x60) + 0x18))();
  }
  FUN_00ad3660();
  local_48 = (ushort *)0x0;
  puStack_40 = (ushort *)0x0;
  local_38 = (ushort *)0x0;
  if ((*arg1 & 1) == 0) {
    arg1[0] = 0;
    arg1[1] = 0;
  }
  else {
    **(undefined1 **)(arg1 + 0x10) = 0;
    arg1[8] = 0;
    arg1[9] = 0;
    arg1[10] = 0;
    arg1[0xb] = 0;
    arg1[0xc] = 0;
    arg1[0xd] = 0;
    arg1[0xe] = 0;
    arg1[0xf] = 0;
  }
  iVar5 = iVar5 + 1;
  do {
    while( true ) {
      if (*(char *)(this + 0x78) == '\0') {
        param_2 = (string *)((longlong)&MACH_HEADER.magic + 1);
        (**(code **)(**(longlong **)(this + 0x70) + 0x38))();
      }
      else {
        *(undefined1 *)(this + 0x78) = 0;
      }
      cVar2 = *(char *)(this + 0x79);
      if (cVar2 == '\\') break;
      iVar5 = iVar5 + 1;
      if (cVar2 == '\"') {
        if (local_48 != puStack_40) {
          puVar8 = (undefined8 *)___cxa_allocate_exception();
          puVar9 = operator_new((ulong)param_1);
          puVar9[3] = 0x6961702065746167;
          puVar9[2] = 0x6f7272757320776f;
          puVar9[1] = 0x6c2036312d465455;
          *puVar9 = 0x20676e697373694d;
          *(undefined2 *)(puVar9 + 4) = 0x2e72;
          *(undefined1 *)((longlong)puVar9 + 0x22) = 0;
          *puVar8 = &DAT_02517278;
          uVar17 = std::string::string((string *)0x20676e697373694d,param_2);
          *puVar8 = &DAT_02517250;
          *(undefined4 *)(puVar8 + 4) = 1;
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(uVar17,FUN_0088de20);
        }
        if (local_48 != (ushort *)0x0) {
          operator_delete(param_1);
        }
        return iVar5;
      }
joined_r0x00ad3ccb:
      if (local_48 != puStack_40) {
        puVar8 = (undefined8 *)___cxa_allocate_exception();
        puVar9 = operator_new((ulong)local_48);
        puVar9[3] = 0x6961702065746167;
        puVar9[2] = 0x6f7272757320776f;
        puVar9[1] = 0x6c2036312d465455;
        *puVar9 = 0x20676e697373694d;
        *(undefined2 *)(puVar9 + 4) = 0x2e72;
        *(undefined1 *)((longlong)puVar9 + 0x22) = 0;
        *puVar8 = &DAT_02517278;
        uVar17 = std::string::string((string *)0x20676e697373694d,param_2);
        *puVar8 = &DAT_02517250;
        *(undefined4 *)(puVar8 + 4) = 1;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(uVar17,FUN_0088de20);
      }
      param_1 = local_48;
      std::string::push_back((char)local_48);
    }
    if (*(char *)(this + 0x78) != '\0') {
      *(undefined1 *)(this + 0x78) = 0;
LAB_00ad3d90:
      uVar10 = (ulong)param_1;
      param_2 = (string *)0x0;
      lVar6 = std::string::find((char)param_1,0);
      if (lVar6 == -1) {
        puVar8 = (undefined8 *)___cxa_allocate_exception();
        puVar9 = (undefined8 *)std::string::insert(uVar10,"Expected control char, got \'");
        pcVar3 = (char *)*puVar9;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9 = (undefined8 *)std::string::append(pcVar3);
        psVar12 = (string *)*puVar9;
        psVar4 = (string *)puVar9[1];
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        *puVar8 = &DAT_02517278;
        uVar17 = std::string::string(psVar12,psVar4);
        *puVar8 = &DAT_02517250;
        *(undefined4 *)(puVar8 + 4) = 1;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(uVar17,FUN_0088de20);
      }
      iVar5 = iVar5 + 2;
      goto joined_r0x00ad3ccb;
    }
    (**(code **)(**(longlong **)(this + 0x70) + 0x38))();
    if (*(char *)(this + 0x79) != 'u') goto LAB_00ad3d90;
    FUN_00ad3940();
    param_2 = (string *)(ulonglong)local_a0;
    if ((local_a0 & 0xfc00) == 0xd800) {
      if (puStack_40 == local_38) {
        psVar12 = (string *)((longlong)puStack_40 - (longlong)local_48);
        if ((longlong)psVar12 < -2) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar6 = (longlong)psVar12 >> 1;
        uVar13 = (longlong)local_38 - (longlong)local_48;
        uVar14 = uVar13;
        if (uVar13 < lVar6 + 1U) {
          uVar14 = lVar6 + 1U;
        }
        if (0x3ffffffffffffffe < (ulonglong)((longlong)uVar13 >> 1)) {
          uVar14 = 0x7fffffffffffffff;
        }
        if (uVar14 == 0) {
          puVar7 = (ushort *)0x0;
        }
        else {
          if ((longlong)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00ad7940();
          }
          puVar7 = operator_new((ulong)((longlong)uVar13 >> 1));
        }
        local_38 = puVar7 + uVar14;
        puVar7[lVar6] = local_a0;
        puStack_40 = puVar7 + lVar6 + 1;
        param_2 = (string *)(ulonglong)local_a0;
        if (0 < (longlong)psVar12) {
          _memcpy(local_38,psVar12,param_3);
          param_2 = psVar12;
        }
        bVar16 = local_48 == (ushort *)0x0;
        param_1 = local_38;
        local_48 = puVar7;
        if (bVar16) goto LAB_00ad3e05;
        operator_delete(local_38);
        iVar5 = iVar5 + 6;
      }
      else {
        *puStack_40 = local_a0;
        puStack_40 = puStack_40 + 1;
LAB_00ad3e05:
        iVar5 = iVar5 + 6;
      }
    }
    else {
      if ((local_a0 & 0xfc00) == 0xdc00) {
        if (local_48 == puStack_40) {
          puVar8 = (undefined8 *)___cxa_allocate_exception();
          puVar9 = operator_new((ulong)param_1);
          puVar9[3] = 0x617020657461676f;
          puVar9[2] = 0x7272757320686769;
          puVar9[1] = 0x682036312d465455;
          *puVar9 = 0x20676e697373694d;
          *(undefined4 *)((longlong)puVar9 + 0x1f) = 0x2e726961;
          *(undefined1 *)((longlong)puVar9 + 0x23) = 0;
          *puVar8 = &DAT_02517278;
          uVar17 = std::string::string((string *)0x20676e697373694d,param_2);
          *puVar8 = &DAT_02517250;
          *(undefined4 *)(puVar8 + 4) = 1;
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(uVar17,FUN_0088de20);
        }
        if (puStack_40 == local_38) goto LAB_00ad3e1f;
LAB_00ad3d65:
        *puStack_40 = local_a0;
        puStack_40 = puStack_40 + 1;
        if (local_38 <= puStack_40) goto LAB_00ad3f64;
LAB_00ad3d7a:
        *puStack_40 = 0;
      }
      else {
        if (puStack_40 != local_38) goto LAB_00ad3d65;
LAB_00ad3e1f:
        pvVar15 = (void *)((longlong)local_38 - (longlong)local_48);
        if ((longlong)pvVar15 < -2) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        uVar14 = (longlong)pvVar15 >> 1;
        pvVar11 = (void *)(uVar14 + 1);
        if ((void *)(uVar14 + 1) <= pvVar15) {
          pvVar11 = pvVar15;
        }
        if (0x3ffffffffffffffe < uVar14) {
          pvVar11 = (void *)0x7fffffffffffffff;
        }
        if (pvVar11 == (void *)0x0) {
          puVar7 = (ushort *)0x0;
        }
        else {
          if ((longlong)pvVar11 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00ad7940();
          }
          puVar7 = operator_new((ulong)local_48);
        }
        local_38 = puVar7 + (longlong)pvVar11;
        puVar7[uVar14] = local_a0;
        puStack_40 = puVar7 + uVar14 + 1;
        if (0 < (longlong)pvVar15) {
          _memcpy(local_48,pvVar15,param_3);
        }
        if (local_48 == (ushort *)0x0) {
          local_48 = puVar7;
          if (local_38 <= puStack_40) goto LAB_00ad3f64;
          goto LAB_00ad3d7a;
        }
        operator_delete(local_48);
        local_48 = puVar7;
        if (puStack_40 < local_38) goto LAB_00ad3d7a;
LAB_00ad3f64:
        pvVar15 = (void *)((longlong)puStack_40 - (longlong)local_48);
        if ((longlong)pvVar15 < -2) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar6 = (longlong)pvVar15 >> 1;
        uVar13 = (longlong)local_38 - (longlong)local_48;
        uVar14 = uVar13;
        if (uVar13 < lVar6 + 1U) {
          uVar14 = lVar6 + 1U;
        }
        if (0x3ffffffffffffffe < (ulonglong)((longlong)uVar13 >> 1)) {
          uVar14 = 0x7fffffffffffffff;
        }
        if (uVar14 == 0) {
          puVar7 = (ushort *)0x0;
        }
        else {
          if ((longlong)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00ad7940();
          }
          puVar7 = operator_new((ulong)((longlong)uVar13 >> 1));
        }
        local_38 = puVar7 + uVar14;
        puVar7[lVar6] = 0;
        if (0 < (longlong)pvVar15) {
          _memcpy(puVar7 + lVar6 + 1,pvVar15,param_3);
        }
        bVar16 = local_48 != (ushort *)0x0;
        local_48 = puVar7;
        if (bVar16) {
          operator_delete(puVar7 + lVar6 + 1);
        }
      }
      puVar7 = local_48 + -1;
      do {
        puVar1 = puVar7 + 1;
        puVar7 = puVar7 + 1;
      } while (*puVar1 != 0);
      param_1 = (ushort *)0x0;
      FUN_00ad8e40();
      param_2 = psStack_60;
      if ((local_68 & 1) == 0) {
        param_2 = (string *)(local_68 >> 1 & 0x7f);
      }
      std::string::append((char *)param_1,(ulong)param_2);
      if ((local_68 & 1) != 0) {
        operator_delete(param_1);
      }
      puStack_40 = local_48;
      iVar5 = iVar5 + 6;
    }
  } while( true );
}




// ==================================================
// @01be41a0 (2076 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  char *pcVar5;
  int iVar6;
  undefined8 *arg1;
  longlong *this;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong *local_100;
  char local_f8;
  longlong *local_60;
  char local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  char local_38 [8];
  undefined8 uVar14;
  
  fVar10 = (float)((ulonglong)param_2 >> 0x20);
  fVar17 = (float)param_2;
  fVar13 = (float)((ulonglong)param_1 >> 0x20);
  fVar7 = (float)param_1;
  fVar16 = fVar17;
  fVar18 = fVar10;
  if (this[0x27] == 0) {
    local_58[0] = '\0';
    local_60 = (longlong *)0x0;
  }
  else {
    FUN_01bbfb40();
  }
  plVar2 = local_60;
  pcVar5 = local_38;
  if (local_58[0] != '\0') {
    pcVar5 = local_58;
  }
  local_38[0] = local_58[0];
  *pcVar5 = '\0';
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01be81a0();
  if ((((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar14 = FUN_01e3f820();
  fVar15 = (float)((ulonglong)uVar14 >> 0x20);
  fVar8 = (float)uVar14;
  cVar3 = FUN_01bc0690();
  if (cVar3 == '\0') {
    (**(code **)(*local_60 + 0x978))();
    if (local_58[0] == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58[0] = '\0';
    }
    FUN_01d488d0();
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*arg1 + 0x3b0))(fVar8,fVar16);
  }
  else {
    (**(code **)(*local_60 + 0x9e0))();
    if (local_58[0] == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58[0] = '\0';
    }
    FUN_01d488d0();
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*arg1 + 0x3b0))(fVar8,fVar16);
  }
  (**(code **)(*local_60 + 0x988))();
  if (local_58[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58[0] = '\0';
  }
  FUN_01d488d0();
  if (local_60 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  fVar17 = DAT_02390d00 + fVar17 + fVar7;
  (**(code **)(*local_60 + 0x368))();
  if (local_58[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01be4501;
    }
  }
  else if (local_60 != (longlong *)0x0) {
LAB_01be4501:
    local_58[0] = '\0';
    local_60 = (longlong *)0x0;
    local_50 = plVar2;
    local_48 = 0xffffffff;
    local_40 = 0;
    fVar9 = DAT_02390d00 + fVar10 + fVar13;
    local_48._4_4_ = 0;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar6 = -local_48._4_4_;
        }
        else {
          iVar6 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar6);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar6 = 0;
        }
        local_48 = CONCAT44(iVar6,(int)local_48);
      }
      lVar4 = (longlong)(int)local_48;
      iVar6 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar6);
      if (*(int *)((longlong)local_50 + 0xc) <= iVar6) break;
      local_60 = *(longlong **)(local_50[2] + 8 + lVar4 * 8);
      iVar6 = (**(code **)(*local_60 + 0x380))();
      if (iVar6 == 0) {
        plVar1 = (longlong *)*arg1;
        uVar11 = (**(code **)(*local_60 + 0x368))();
        uVar12 = (**(code **)(*local_60 + 0x368))();
        (**(code **)(*plVar1 + 0x3e0))(uVar11,fVar13,uVar12,fVar9);
      }
    }
    FUN_01a01420();
    FUN_00d50b20();
  }
  plVar1 = local_60;
  (**(code **)(*plVar2 + 0x990))();
  if (local_58[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58[0] = '\0';
  }
  FUN_01d488d0();
  if (local_60 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar2 + 0x368))(fVar7,fVar17);
  if (local_58[0] == '\0') {
    if (local_60 == (longlong *)0x0) goto LAB_01be47f2;
    FUN_00d50b00();
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_60 == (longlong *)0x0) goto LAB_01be47f2;
  local_58[0] = '\0';
  local_60 = (longlong *)0x0;
  local_50 = plVar1;
  local_48 = 0xffffffff;
  local_40 = 0;
  fVar10 = fVar10 + fVar13 + DAT_02390d00;
  local_48._4_4_ = 0;
  while( true ) {
    if (local_48._4_4_ != 0) {
      if (local_48._4_4_ < 1) {
        iVar6 = -local_48._4_4_;
      }
      else {
        iVar6 = (int)local_48 - local_48._4_4_;
        local_48 = CONCAT44(local_48._4_4_,iVar6);
        FUN_00d23690();
        local_40 = local_40 + local_48._4_4_;
        iVar6 = 0;
      }
      local_48 = CONCAT44(iVar6,(int)local_48);
    }
    lVar4 = (longlong)(int)local_48;
    iVar6 = (int)local_48 + 1;
    local_48 = CONCAT44(local_48._4_4_,iVar6);
    if (*(int *)((longlong)local_50 + 0xc) <= iVar6) break;
    local_60 = *(longlong **)(local_50[2] + 8 + lVar4 * 8);
    iVar6 = (**(code **)(*local_60 + 0x380))();
    if (iVar6 != 0) {
      plVar1 = (longlong *)*arg1;
      uVar11 = (**(code **)(*local_60 + 0x368))();
      uVar12 = (**(code **)(*local_60 + 0x368))();
      (**(code **)(*plVar1 + 0x3e0))(uVar11,fVar13,uVar12,fVar10);
    }
  }
  FUN_01a01420();
  FUN_00d50b20();
LAB_01be47f2:
  fVar13 = (float)FUN_01bf0370();
  if ((fVar7 <= fVar13) && (fVar13 <= fVar17)) {
    (**(code **)(*plVar2 + 0x938))();
    if (local_58[0] == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58[0] = '\0';
    }
    FUN_01d488d0();
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*arg1 + 0x3e0))
              (fVar13,fVar15,fVar13,fVar15 + fVar18 + DAT_02390d00);
  }
  (**(code **)(*this + 0x640))();
  (**(code **)(*local_100 + 0x4b0))();
  if (local_58[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58[0] = '\0';
  }
  FUN_01d488d0();
  if (local_60 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  fVar18 = fVar15 + fVar18 + DAT_02390d00;
  (**(code **)(*(longlong *)*arg1 + 0x3e0))(fVar8,fVar18,fVar8 + fVar16 + DAT_02390d00,fVar18);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (plVar2 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01981860 (2072 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  void *pvVar4;
  longlong *this;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  longlong local_70;
  char local_68;
  longlong *local_48;
  char local_40;
  
  FUN_01989f80();
  (**(code **)(*local_48 + 0xe20))();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar5 = this[0x2e];
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_00d23d70();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    if ((char)this[0x31] == '\0') {
      if (*(char *)((longlong)this + 0x18a) == '\0') {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01268dd0();
        if (lVar5 != 0) {
          FUN_00d50b00();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_01263cf0();
          if (cVar2 == '\0') {
            cVar2 = FUN_00d23d70();
          }
          else {
            cVar2 = '\0';
          }
          FUN_00d50b20();
          goto LAB_01982016;
        }
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if (lVar5 != 0) {
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar1 = this[0x2e];
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_012ebc80();
          bVar7 = lVar5 == 0;
          if (bVar7) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar5 != 0) {
            if (*(int *)(lVar5 + 0xc) < 1) {
              cVar2 = '\0';
              FUN_001159b0();
            }
            else {
              iVar6 = 0;
              cVar2 = '\0';
              do {
                cVar3 = FUN_00d23d70();
                if (cVar3 != '\0') {
                  cVar2 = '\x01';
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(int *)(lVar5 + 0xc));
              FUN_001159b0();
            }
            if (!bVar7) {
              FUN_00d50b20();
            }
            goto LAB_01982016;
          }
        }
      }
    }
    else if (*(char *)((longlong)this + 0x18b) == '\0') {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01268710();
      if (lVar5 != 0) {
        FUN_00d50b00();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_01263cf0();
        if (cVar2 == '\0') {
          cVar2 = FUN_00d23d70();
        }
        else {
          cVar2 = '\0';
        }
        FUN_00d50b20();
        goto LAB_01982016;
      }
    }
    else {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (lVar5 != 0) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar1 = this[0x2e];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_012eb7a0();
        bVar7 = lVar5 == 0;
        if (bVar7) {
          lVar5 = 0;
        }
        else {
          FUN_00d50b00();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0xc) < 1) {
            cVar2 = '\0';
            FUN_001159b0();
          }
          else {
            iVar6 = 0;
            cVar2 = '\0';
            do {
              cVar3 = FUN_00d23d70();
              if (cVar3 != '\0') {
                cVar2 = '\x01';
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(lVar5 + 0xc));
            FUN_001159b0();
          }
          if (!bVar7) {
            FUN_00d50b20();
          }
          goto LAB_01982016;
        }
      }
    }
  }
  cVar2 = '\0';
LAB_01982016:
  if (*(char *)((longlong)this + 0x18c) != cVar2) {
    *(char *)((longlong)this + 0x18c) = cVar2;
    (**(code **)(*this + 0x620))();
  }
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @011af000 (2061 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong arg1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_02590538;
  uVar1 = *(undefined4 *)(arg1 + 0x14);
  uVar2 = *(undefined4 *)(arg1 + 0x18);
  uVar3 = *(undefined4 *)(arg1 + 0x1c);
  uVar4 = *(undefined4 *)(arg1 + 0x20);
  uVar5 = *(undefined4 *)(arg1 + 0x24);
  uVar6 = *(undefined4 *)(arg1 + 0x28);
  uVar7 = *(undefined4 *)(arg1 + 0x2c);
  *(undefined4 *)(this + 2) = *(undefined4 *)(arg1 + 0x10);
  *(undefined4 *)((longlong)this + 0x14) = uVar1;
  *(undefined4 *)(this + 3) = uVar2;
  *(undefined4 *)((longlong)this + 0x1c) = uVar3;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)((longlong)this + 0x24) = uVar5;
  *(undefined4 *)(this + 5) = uVar6;
  *(undefined4 *)((longlong)this + 0x2c) = uVar7;
  this[6] = *(undefined8 *)(arg1 + 0x30);
  *this = &DAT_02610350;
  this[7] = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011af8f0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSpectrumShaperParameterSet");
  }
  *(undefined4 *)(this + 8) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011af9e0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x44) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b1788 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b1750 = FUN_011aee00();
        _DAT_027b1748 = "_startValue";
        _DAT_027b1758 = 0;
        _DAT_027b1760 = 0x6600;
        _DAT_027b1768 = "float";
        _DAT_027b1770 = 0;
        uRam00000000027b1778 = 0;
        _DAT_027b1780 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(this + 9) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b17d0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b1798 = FUN_011aee00();
        _DAT_027b1790 = "_riseDuration";
        _DAT_027b17a0 = 0;
        _DAT_027b17a8 = 0x6600;
        _DAT_027b17b0 = "float";
        _DAT_027b17b8 = 0;
        uRam00000000027b17c0 = 0;
        _DAT_027b17c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b1818 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b17e0 = FUN_011aee00();
        _DAT_027b17d8 = "_riseEndValue";
        _DAT_027b17e8 = 0;
        _DAT_027b17f0 = 0x6600;
        _DAT_027b17f8 = "float";
        _DAT_027b1800 = 0;
        uRam00000000027b1808 = 0;
        _DAT_027b1810 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(this + 10) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b1860 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b1828 = FUN_011aee00();
        _DAT_027b1820 = "_decayStartTime";
        _DAT_027b1830 = 0;
        _DAT_027b1838 = 0x6600;
        _DAT_027b1840 = "float";
        _DAT_027b1848 = 0;
        uRam00000000027b1850 = 0;
        _DAT_027b1858 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x54) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b18a8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b1870 = FUN_011aee00();
        _DAT_027b1868 = "_decayEndTime";
        _DAT_027b1878 = 0;
        _DAT_027b1880 = 0x6600;
        _DAT_027b1888 = "float";
        _DAT_027b1890 = 0;
        uRam00000000027b1898 = 0;
        _DAT_027b18a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(this + 0xb) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b18f0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b18b8 = FUN_011aee00();
        _DAT_027b18b0 = "_decayFactor";
        _DAT_027b18c0 = 0;
        _DAT_027b18c8 = 0x6600;
        _DAT_027b18d0 = "float";
        _DAT_027b18d8 = 0;
        uRam00000000027b18e0 = 0;
        _DAT_027b18e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x5c) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b1938 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b1900 = FUN_011aee00();
        _DAT_027b18f8 = "_endValue";
        _DAT_027b1908 = 0;
        _DAT_027b1910 = 0x6600;
        _DAT_027b1918 = "float";
        _DAT_027b1920 = 0;
        uRam00000000027b1928 = 0;
        _DAT_027b1930 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(this + 0xc) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b1980 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b1948 = FUN_011aee00();
        _DAT_027b1940 = "_isBypassed";
        _DAT_027b1950 = 0;
        _DAT_027b1958 = 0x6200;
        _DAT_027b1960 = "bool";
        _DAT_027b1968 = 0;
        uRam00000000027b1970 = 0;
        _DAT_027b1978 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x61) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b19c8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b1990 = FUN_011aee00();
        _DAT_027b1988 = "_needsProcessEnvelope";
        _DAT_027b1998 = 0;
        _DAT_027b19a0 = 0x6201;
        _DAT_027b19a8 = "bool";
        _DAT_027b19b0 = 0;
        uRam00000000027b19b8 = 0;
        _DAT_027b19c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x62) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b1a10 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b19d8 = FUN_011aee00();
        _DAT_027b19d0 = "_needsProcessEnvelopeIsValid";
        _DAT_027b19e0 = 0;
        _DAT_027b19e8 = 0x6201;
        _DAT_027b19f0 = "bool";
        _DAT_027b19f8 = 0;
        uRam00000000027b1a00 = 0;
        _DAT_027b1a08 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 99) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b1a58 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b1a20 = FUN_011aee00();
        _DAT_027b1a18 = "_didRequestCacheValidation";
        _DAT_027b1a28 = 0;
        _DAT_027b1a30 = 0x6211;
        _DAT_027b1a38 = "bool";
        _DAT_027b1a40 = 0;
        uRam00000000027b1a48 = 0;
        _DAT_027b1a50 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @01b836f0 (2061 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  undefined8 *puVar2;
  
  if (DAT_028b54c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e6cb8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e6c08 = FUN_0006d940();
          _DAT_027e6bf0 = "MUSpectrumShaperEnvelopeView";
          _DAT_027e6bf8 = 0x198;
          _DAT_027e6c00 = FUN_01bdee00;
          _DAT_027e6c10 = 0;
          uRam00000000027e6c18 = 0;
          _DAT_027e6c20 = 0;
          uRam00000000027e6c28 = 0;
          _DAT_027e6c30 = 0;
          uRam00000000027e6c38 = 0;
          _DAT_027e6c40 = 0;
          uRam00000000027e6c48 = 0;
          _DAT_027e6c50 = 0;
          uRam00000000027e6c58 = 0;
          _DAT_027e6c60 = 0;
          uRam00000000027e6c68 = 0;
          _DAT_027e6c70 = 0;
          uRam00000000027e6c78 = 0;
          _DAT_027e6c80 = 0;
          uRam00000000027e6c88 = 0;
          _DAT_027e6c90 = 0;
          uRam00000000027e6c98 = 0;
          _DAT_027e6ca0 = 0;
          uRam00000000027e6ca8 = 0;
          _DAT_027e6cb0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b5480 = "setEnvelope";
      _DAT_028b5488 = &DAT_027e6bf0;
      _DAT_028b5490 = 0;
      _DAT_028b5498 = &DAT_027e4ff0;
      _DAT_028b54a0 = FUN_01b8c1a0;
      _DAT_028b54a8 = FUN_01b8b2b0;
      _DAT_028b54b0 = 0;
      uRam00000000028b54b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5508 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e6cb8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e6c08 = FUN_0006d940();
          _DAT_027e6bf0 = "MUSpectrumShaperEnvelopeView";
          _DAT_027e6bf8 = 0x198;
          _DAT_027e6c00 = FUN_01bdee00;
          _DAT_027e6c10 = 0;
          uRam00000000027e6c18 = 0;
          _DAT_027e6c20 = 0;
          uRam00000000027e6c28 = 0;
          _DAT_027e6c30 = 0;
          uRam00000000027e6c38 = 0;
          _DAT_027e6c40 = 0;
          uRam00000000027e6c48 = 0;
          _DAT_027e6c50 = 0;
          uRam00000000027e6c58 = 0;
          _DAT_027e6c60 = 0;
          uRam00000000027e6c68 = 0;
          _DAT_027e6c70 = 0;
          uRam00000000027e6c78 = 0;
          _DAT_027e6c80 = 0;
          uRam00000000027e6c88 = 0;
          _DAT_027e6c90 = 0;
          uRam00000000027e6c98 = 0;
          _DAT_027e6ca0 = 0;
          uRam00000000027e6ca8 = 0;
          _DAT_027e6cb0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b54c8 = "getEnvelope";
      _DAT_028b54d0 = &DAT_027e6bf0;
      _DAT_028b54d8 = 0;
      _DAT_028b54e0 = &DAT_027e4ff3;
      _DAT_028b54e8 = FUN_01b8c220;
      _DAT_028b54f0 = FUN_01b8b270;
      _DAT_028b54f8 = 0;
      puVar2 = (undefined8 *)FUN_011aee00();
      _DAT_028b5500 = *puVar2;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5550 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e6cb8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e6c08 = FUN_0006d940();
          _DAT_027e6bf0 = "MUSpectrumShaperEnvelopeView";
          _DAT_027e6bf8 = 0x198;
          _DAT_027e6c00 = FUN_01bdee00;
          _DAT_027e6c10 = 0;
          uRam00000000027e6c18 = 0;
          _DAT_027e6c20 = 0;
          uRam00000000027e6c28 = 0;
          _DAT_027e6c30 = 0;
          uRam00000000027e6c38 = 0;
          _DAT_027e6c40 = 0;
          uRam00000000027e6c48 = 0;
          _DAT_027e6c50 = 0;
          uRam00000000027e6c58 = 0;
          _DAT_027e6c60 = 0;
          uRam00000000027e6c68 = 0;
          _DAT_027e6c70 = 0;
          uRam00000000027e6c78 = 0;
          _DAT_027e6c80 = 0;
          uRam00000000027e6c88 = 0;
          _DAT_027e6c90 = 0;
          uRam00000000027e6c98 = 0;
          _DAT_027e6ca0 = 0;
          uRam00000000027e6ca8 = 0;
          _DAT_027e6cb0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b5510 = "handleDelete";
      _DAT_028b5518 = &DAT_027e6bf0;
      _DAT_028b5520 = 0;
      _DAT_028b5528 = &DAT_027e4ff8;
      _DAT_028b5530 = FUN_01b8c2c0;
      _DAT_028b5538 = 0x921;
      _DAT_028b5540 = 0;
      uRam00000000028b5548 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5598 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e6cb8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e6c08 = FUN_0006d940();
          _DAT_027e6bf0 = "MUSpectrumShaperEnvelopeView";
          _DAT_027e6bf8 = 0x198;
          _DAT_027e6c00 = FUN_01bdee00;
          _DAT_027e6c10 = 0;
          uRam00000000027e6c18 = 0;
          _DAT_027e6c20 = 0;
          uRam00000000027e6c28 = 0;
          _DAT_027e6c30 = 0;
          uRam00000000027e6c38 = 0;
          _DAT_027e6c40 = 0;
          uRam00000000027e6c48 = 0;
          _DAT_027e6c50 = 0;
          uRam00000000027e6c58 = 0;
          _DAT_027e6c60 = 0;
          uRam00000000027e6c68 = 0;
          _DAT_027e6c70 = 0;
          uRam00000000027e6c78 = 0;
          _DAT_027e6c80 = 0;
          uRam00000000027e6c88 = 0;
          _DAT_027e6c90 = 0;
          uRam00000000027e6c98 = 0;
          _DAT_027e6ca0 = 0;
          uRam00000000027e6ca8 = 0;
          _DAT_027e6cb0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b5558 = "handleCut";
      _DAT_028b5560 = &DAT_027e6bf0;
      _DAT_028b5568 = 0;
      _DAT_028b5570 = &DAT_027e4ff8;
      _DAT_028b5578 = FUN_01b8c2c0;
      _DAT_028b5580 = 0x929;
      _DAT_028b5588 = 0;
      uRam00000000028b5590 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b55e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e6cb8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e6c08 = FUN_0006d940();
          _DAT_027e6bf0 = "MUSpectrumShaperEnvelopeView";
          _DAT_027e6bf8 = 0x198;
          _DAT_027e6c00 = FUN_01bdee00;
          _DAT_027e6c10 = 0;
          uRam00000000027e6c18 = 0;
          _DAT_027e6c20 = 0;
          uRam00000000027e6c28 = 0;
          _DAT_027e6c30 = 0;
          uRam00000000027e6c38 = 0;
          _DAT_027e6c40 = 0;
          uRam00000000027e6c48 = 0;
          _DAT_027e6c50 = 0;
          uRam00000000027e6c58 = 0;
          _DAT_027e6c60 = 0;
          uRam00000000027e6c68 = 0;
          _DAT_027e6c70 = 0;
          uRam00000000027e6c78 = 0;
          _DAT_027e6c80 = 0;
          uRam00000000027e6c88 = 0;
          _DAT_027e6c90 = 0;
          uRam00000000027e6c98 = 0;
          _DAT_027e6ca0 = 0;
          uRam00000000027e6ca8 = 0;
          _DAT_027e6cb0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b55a0 = "handleCopy";
      _DAT_028b55a8 = &DAT_027e6bf0;
      _DAT_028b55b0 = 0;
      _DAT_028b55b8 = &DAT_027e4ff8;
      _DAT_028b55c0 = FUN_01b8c2c0;
      _DAT_028b55c8 = 0x931;
      _DAT_028b55d0 = 0;
      uRam00000000028b55d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5628 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e6cb8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e6c08 = FUN_0006d940();
          _DAT_027e6bf0 = "MUSpectrumShaperEnvelopeView";
          _DAT_027e6bf8 = 0x198;
          _DAT_027e6c00 = FUN_01bdee00;
          _DAT_027e6c10 = 0;
          uRam00000000027e6c18 = 0;
          _DAT_027e6c20 = 0;
          uRam00000000027e6c28 = 0;
          _DAT_027e6c30 = 0;
          uRam00000000027e6c38 = 0;
          _DAT_027e6c40 = 0;
          uRam00000000027e6c48 = 0;
          _DAT_027e6c50 = 0;
          uRam00000000027e6c58 = 0;
          _DAT_027e6c60 = 0;
          uRam00000000027e6c68 = 0;
          _DAT_027e6c70 = 0;
          uRam00000000027e6c78 = 0;
          _DAT_027e6c80 = 0;
          uRam00000000027e6c88 = 0;
          _DAT_027e6c90 = 0;
          uRam00000000027e6c98 = 0;
          _DAT_027e6ca0 = 0;
          uRam00000000027e6ca8 = 0;
          _DAT_027e6cb0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b55e8 = "handlePaste";
      _DAT_028b55f0 = &DAT_027e6bf0;
      _DAT_028b55f8 = 0;
      _DAT_028b5600 = &DAT_027e4ff8;
      _DAT_028b5608 = FUN_01b8c2c0;
      _DAT_028b5610 = 0x939;
      _DAT_028b5618 = 0;
      uRam00000000028b5620 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ==================================================
// @01e21040 (1933 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *arg1;
  longlong *this;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  if (*arg1 != 0) {
    bVar2 = false;
    do {
      iVar4 = FUN_01d3a5a0();
      if (iVar4 == 6) {
        return;
      }
      iVar4 = FUN_01d3a5a0();
      if (iVar4 == 5) {
        FUN_01d3abf0();
        uVar9 = FUN_01e466c0();
        if ((char)this[0x28] == '\0') {
          iVar4 = *(int *)(*(longlong *)(this[0x27] + 0x18) + 0xc);
          if (0 < iVar4) {
            uVar7 = 0;
            uVar10 = param_2;
            do {
              param_2 = FUN_01e21f60();
              cVar3 = FUN_00d05410(uVar9,param_2,uVar10);
              if (cVar3 != '\0') {
                if (*(int *)(this[0x27] + 0xc) != (int)uVar7) {
                  lVar5 = *(longlong *)
                           (*(longlong *)(*(longlong *)(this[0x27] + 0x18) + 0x10) + uVar7 * 8)
                  ;
                  if (lVar5 != 0) {
                    FUN_00d50b00();
                  }
                  cVar3 = FUN_01e26480();
                  if (lVar5 != 0) {
                    FUN_00d50b20();
                  }
                  lVar5 = this[0x27];
                  if (cVar3 == '\0') {
                    uVar7 = (ulonglong)*(uint *)(lVar5 + 0xc);
                  }
                  else {
                    *(undefined4 *)(lVar5 + 0x10) = 0xffffffff;
                    *(int *)(lVar5 + 0xc) = (int)uVar7;
                    if (*(char *)(lVar5 + 0x31) != '\0') {
                      FUN_01e1f2c0();
                    }
                  }
                  (**(code **)(*this + 0x620))();
                  (**(code **)(*this + 0x778))();
                }
                bVar2 = true;
                cVar3 = FUN_01e4ad60();
                if (cVar3 == '\0') goto LAB_01e21440;
                if ((int)uVar7 == -1) goto LAB_01e211f9;
                lVar5 = (longlong)*(int *)(this[0x27] + 0xc);
                if (lVar5 == -1) {
                  bVar2 = true;
                  lVar5 = 0;
                }
                else {
                  lVar5 = *(longlong *)
                           (*(longlong *)(*(longlong *)(this[0x27] + 0x18) + 0x10) + lVar5 * 8)
                  ;
                  if (lVar5 == 0) {
                    lVar5 = 0;
                  }
                  else {
                    FUN_00d50b00();
                  }
                  bVar2 = false;
                }
                FUN_01e26120();
                if (local_38 == '\0') {
                  if (local_40 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                uVar9 = FUN_01e21f60();
                (**(code **)(*this + 0x6d8))(uVar9,3);
                if (local_40 != 0) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                if (!bVar2 && lVar5 != 0) {
                  FUN_00d50b20();
                }
                goto LAB_01e21205;
              }
              uVar7 = uVar7 + 1;
              uVar10 = param_2;
            } while (iVar4 != (int)uVar7);
          }
          cVar3 = FUN_01e21b90();
          if (cVar3 != '\0') {
            return;
          }
          bVar2 = true;
          cVar3 = FUN_01e4ad60();
          if (cVar3 != '\0') {
LAB_01e211f9:
            (**(code **)(*this + 0x6e0))();
LAB_01e21205:
            bVar2 = true;
          }
        }
        else {
          iVar4 = FUN_01e21aa0();
          lVar5 = this[0x27];
          if (iVar4 == -1) {
            *(undefined4 *)(lVar5 + 0x10) = 0xffffffff;
            cVar3 = FUN_01e21b90();
            if (cVar3 != '\0') {
              return;
            }
LAB_01e2123d:
            (**(code **)(*this + 0x620))();
            iVar8 = iVar4;
          }
          else {
            iVar8 = iVar4;
            if (iVar4 != *(int *)(lVar5 + 0x10)) {
              iVar8 = -1;
              if (((longlong)*(int *)(lVar5 + 0xc) != -1) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x10) +
                   (longlong)*(int *)(lVar5 + 0xc) * 8) != 0)) {
                uVar9 = FUN_00d50b00();
                lVar5 = (longlong)*(int *)(this[0x27] + 0xc);
                if (lVar5 == -1) {
                  bVar2 = true;
LAB_01e215ea:
                  lVar5 = 0;
                }
                else {
                  lVar5 = *(longlong *)
                           (*(longlong *)(*(longlong *)(this[0x27] + 0x18) + 0x10) + lVar5 * 8)
                  ;
                  if (lVar5 == 0) {
                    bVar2 = false;
                    goto LAB_01e215ea;
                  }
                  uVar9 = FUN_00d50b00();
                  bVar2 = false;
                }
                uVar9 = FUN_01e26090(uVar9,iVar4);
                if (local_40 == 0) {
                  cVar3 = '\0';
                }
                else {
                  lVar6 = (longlong)*(int *)(this[0x27] + 0xc);
                  if (lVar6 == -1) {
                    bVar1 = true;
                    lVar6 = 0;
                  }
                  else {
                    lVar6 = *(longlong *)
                             (*(longlong *)(*(longlong *)(this[0x27] + 0x18) + 0x10) +
                             lVar6 * 8);
                    if (lVar6 == 0) {
                      lVar6 = 0;
                    }
                    else {
                      uVar9 = FUN_00d50b00();
                    }
                    bVar1 = false;
                  }
                  FUN_01e26090(uVar9,iVar4);
                  cVar3 = FUN_01e26480();
                  if ((local_60 != '\0') && (local_68 != 0)) {
                    FUN_00d50b20();
                  }
                  if (!bVar1 && lVar6 != 0) {
                    FUN_00d50b20();
                  }
                }
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                if (!bVar2 && lVar5 != 0) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
                if (cVar3 != '\0') {
                  *(int *)(this[0x27] + 0x10) = iVar4;
                  goto LAB_01e2123d;
                }
              }
            }
          }
          bVar2 = true;
          cVar3 = FUN_01e4ad60();
          if (cVar3 != '\0') {
            if (iVar8 == -1) {
              (**(code **)(*this + 0x6e0))();
            }
            else {
              if ((*(int *)(this[0x27] + 0xc) == -1) ||
                 (*(int *)(this[0x27] + 0x10) == -1)) {
                local_60 = '\0';
                local_68 = 0;
              }
              else {
                FUN_01e26090();
              }
              uVar9 = FUN_01e26120();
              if (local_38 == '\0') {
                if (local_40 != 0) {
                  uVar9 = FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              uVar9 = FUN_01e21df0(uVar9,iVar8);
              (**(code **)(*this + 0x6d8))(uVar9,3);
              if (local_40 != 0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
LAB_01e21440:
      (**(code **)(*this + 0x658))();
      lVar5 = *arg1;
      if (lVar5 == local_40) {
        if (((char)arg1[1] == '\0') && (local_40 != 0)) {
          if (local_38 != '\0') goto LAB_01e21493;
          FUN_00d50b00();
          goto LAB_01e214cd;
        }
LAB_01e214d3:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar6 = arg1[1];
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          *arg1 = local_40;
          if (((char)lVar6 != '\0') && (lVar5 != 0)) {
            FUN_00d50b20();
          }
LAB_01e214cd:
          *(undefined1 *)(arg1 + 1) = 1;
          goto LAB_01e214d3;
        }
        *arg1 = local_40;
        if (((char)lVar6 != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
LAB_01e21493:
        *(undefined1 *)(arg1 + 1) = 1;
      }
      if (*arg1 == 0) {
        return;
      }
      iVar4 = FUN_01d3a5a0();
      if ((((iVar4 == 6) && (iVar4 = FUN_01d3b630(), iVar4 == 2)) && (!bVar2)) &&
         ((char)this[0x28] == '\0')) {
        (**(code **)(*this + 0x658))();
        lVar5 = *arg1;
        if (lVar5 == local_40) {
          if (((char)arg1[1] == '\0') && (local_40 != 0)) {
            if (local_38 != '\0') goto LAB_01e2106e;
            FUN_00d50b00();
            goto LAB_01e215bd;
          }
LAB_01e215c3:
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar6 = arg1[1];
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *arg1 = local_40;
            if (((char)lVar6 != '\0') && (lVar5 != 0)) {
              FUN_00d50b20();
            }
LAB_01e215bd:
            *(undefined1 *)(arg1 + 1) = 1;
            goto LAB_01e215c3;
          }
          *arg1 = local_40;
          if (((char)lVar6 != '\0') && (lVar5 != 0)) {
            FUN_00d50b20();
          }
LAB_01e2106e:
          *(undefined1 *)(arg1 + 1) = 1;
        }
        bVar2 = true;
      }
    } while (*arg1 != 0);
  }
  return;
}




// ==================================================
// @010604a0 (1931 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 (*pauVar16) [32];
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 (*arg1) [16];
  ulonglong *this;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  bool bVar26;
  undefined1 auVar27 [64];
  undefined1 extraout_var [56];
  undefined1 auVar28 [64];
  undefined1 auVar29 [32];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auStack_128 [240];
  undefined8 uStack_38;
  
  if ((param_2 < 0x80) && (*(uint *)((longlong)this + 0x14) == 0)) {
    param_2 = param_2 >> 4;
    if (param_2 != 0) {
      uVar12 = this[3];
      uVar15 = this[4];
      uVar23 = *this;
      uVar20 = this[1];
      uVar19 = this[2];
      uVar24 = (uVar15 >> 2) + uVar15;
      do {
        uVar22 = uVar23 + *(longlong *)*arg1;
        puVar9 = *arg1;
        uVar23 = (ulonglong)CARRY8(uVar23,*(ulonglong *)*arg1);
        uVar25 = uVar20 + *(ulonglong *)(puVar9 + 8);
        uVar14 = uVar25 + uVar23;
        arg1 = arg1 + 1;
        lVar18 = uVar19 + param_1 +
                 (ulonglong)(CARRY8(uVar20,*(ulonglong *)(puVar9 + 8)) || CARRY8(uVar25,uVar23));
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar15;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar22;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar12;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar22;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar12;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar14;
        auVar1 = auVar1 * auVar5 + auVar3 * auVar7;
        uVar19 = auVar1._0_8_;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar24;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar14;
        auVar2 = auVar4 * auVar8 + auVar2 * auVar6;
        uVar22 = auVar2._0_8_;
        uVar20 = auVar2._8_8_;
        uVar23 = lVar18 * uVar24;
        uVar14 = uVar19 + uVar23;
        uVar25 = uVar20 + uVar14;
        uVar14 = auVar1._8_8_ + (ulonglong)CARRY8(uVar19,uVar23) + lVar18 * uVar12 +
                 (ulonglong)CARRY8(uVar20,uVar14);
        uVar20 = (uVar14 & 0xfffffffffffffffc) + (uVar14 >> 2);
        uVar23 = uVar22 + uVar20;
        uVar19 = (ulonglong)CARRY8(uVar22,uVar20);
        uVar20 = uVar25 + uVar19;
        uVar19 = (uVar14 & 3) + (ulonglong)CARRY8(uVar25,uVar19);
        param_2 = param_2 - 1;
      } while (param_2 != 0);
      *this = uVar23;
      this[1] = uVar20;
      this[2] = uVar19;
    }
    return;
  }
  uVar12 = param_2 & 0xfffffffffffffff0;
  if (uVar12 == 0) {
    return;
  }
  if (*(uint *)((longlong)this + 0x14) == 0) {
    uVar15 = *this;
    uVar23 = this[1];
    uVar20 = (ulonglong)(uint)this[2];
    param_2 = param_2 & 0x30;
    while (param_2 != 0) {
      bVar26 = CARRY8(uVar15,*(ulonglong *)*arg1);
      uVar15 = uVar15 + *(longlong *)*arg1;
      uVar19 = (ulonglong)bVar26;
      bVar26 = CARRY8(uVar23,*(ulonglong *)(*arg1 + 8));
      uVar24 = uVar23 + *(ulonglong *)(*arg1 + 8);
      uVar23 = uVar24 + uVar19;
      arg1 = arg1 + 1;
      uVar20 = uVar20 + param_1 + (ulonglong)(bVar26 || CARRY8(uVar24,uVar19));
      uVar12 = uVar12 - 0x10;
      uStack_38 = 0x10606ac;
      FUN_0105f660();
      param_2 = uVar12 & 0x3f;
    }
    auVar28 = ZEXT464((uint)(uVar15 >> 0x1a) & 0x3ffffff);
    auVar30 = ZEXT464((uint)(uVar15 >> 0x34) | (uint)(uVar23 << 0xc) & 0x3ffffff);
    auVar31 = ZEXT464((uint)(uVar23 >> 0xe) & 0x3ffffff);
    auVar32 = ZEXT464((uint)(uVar20 << 0x18) | (uint)(uVar23 >> 0x28));
    *(uint *)((longlong)this + 0x14) = 1;
    uStack_38 = 0x106071e;
    auVar27._0_8_ = FUN_0105f6e0((uint)uVar15 & 0x3ffffff);
    auVar29 = auVar30._0_32_;
    auVar27._8_56_ = extraout_var;
  }
  else {
    if ((param_2 & 0x30) != 0) {
      uVar15 = this[1];
      uVar23 = (*this & 0xffffffff) + ((*this & 0xffffffff80000000) >> 6);
      uVar24 = uVar23 + (uVar15 << 0x34);
      uVar15 = ((uVar15 & 0xffffffff) >> 0xc) + ((uVar15 & 0xffffffff80000000) >> 0x12) +
               (ulonglong)CARRY8(uVar23,uVar15 << 0x34);
      uVar20 = (ulonglong)(uint)this[2] << 0x28;
      uVar23 = uVar15 + uVar20;
      uVar19 = (ulonglong)((uint)this[2] >> 0x18) + (ulonglong)CARRY8(uVar15,uVar20);
      uVar15 = (uVar19 >> 2) + (uVar19 & 0xfffffffffffffffc);
      uVar25 = uVar24 + uVar15;
      uVar15 = (ulonglong)CARRY8(uVar24,uVar15);
      uVar20 = uVar23 + uVar15;
      uVar15 = (uVar19 & 3) + (ulonglong)CARRY8(uVar23,uVar15);
      do {
        bVar26 = CARRY8(uVar25,*(ulonglong *)*arg1);
        uVar25 = uVar25 + *(longlong *)*arg1;
        uVar23 = (ulonglong)bVar26;
        bVar26 = CARRY8(uVar20,*(ulonglong *)(*arg1 + 8));
        uVar19 = uVar20 + *(ulonglong *)(*arg1 + 8);
        uVar20 = uVar19 + uVar23;
        arg1 = arg1 + 1;
        uVar15 = uVar15 + param_1 + (ulonglong)(bVar26 || CARRY8(uVar19,uVar23));
        uVar12 = uVar12 - 0x10;
        uStack_38 = 0x1060581;
        FUN_0105f660();
      } while ((uVar12 & 0x3f) != 0);
      if (param_1 == 0) {
        *this = uVar25;
        this[1] = uVar20;
        this[2] = uVar15;
      }
      else {
        uVar10 = (uint)uVar25 & 0x3ffffff;
        uVar11 = (uint)(uVar25 >> 0x1a) & 0x3ffffff;
        uVar21 = (uint)(uVar25 >> 0x34) | (int)uVar20 * 0x1000 & 0x3ffffffU;
        uVar13 = (uint)(uVar20 >> 0xe) & 0x3ffffff;
        uVar17 = (int)uVar15 * 0x1000000 | (uint)(uVar20 >> 0x28);
        if (uVar12 != 0) {
          auVar27 = ZEXT464(uVar10);
          auVar28 = ZEXT464(uVar11);
          auVar29 = ZEXT432(uVar21);
          auVar31 = ZEXT464(uVar13);
          auVar32 = ZEXT464(uVar17);
          goto LAB_0106077f;
        }
        *(uint *)this = uVar10;
        *(uint *)((longlong)this + 4) = uVar11;
        *(uint *)(this + 1) = uVar21;
        *(uint *)((longlong)this + 0xc) = uVar13;
        *(uint *)(this + 2) = uVar17;
      }
      return;
    }
    auVar27 = ZEXT464((uint)*this);
    auVar28 = ZEXT464(*(uint *)((longlong)this + 4));
    auVar29 = ZEXT432((uint)this[1]);
    auVar31 = ZEXT464(*(uint *)((longlong)this + 0xc));
    auVar32 = ZEXT464((uint)this[2]);
  }
LAB_0106077f:
  auVar34 = _DAT_01060ce0;
  auVar47 = auVar32._0_32_;
  auVar46 = auVar31._0_32_;
  auVar44 = auVar28._0_32_;
  auVar39 = auVar27._0_32_;
  pauVar16 = (undefined1 (*) [32])((ulonglong)auStack_128 & 0xfffffffffffffe00);
  auVar1 = *(undefined1 (*) [16])(this + 0xc);
  auVar2 = *(undefined1 (*) [16])(this + 0xe);
  auVar3 = *(undefined1 (*) [16])(this + 0x10);
  auVar4 = *(undefined1 (*) [16])(this + 0x12);
  auVar43 = vpermd_avx2(_DAT_01060ce0,ZEXT1632(*(undefined1 (*) [16])(this + 6)));
  auVar5 = *(undefined1 (*) [16])(this + 0x14);
  auVar37 = vpermd_avx2(_DAT_01060ce0,ZEXT1632(*(undefined1 (*) [16])(this + 8)));
  auVar6 = *(undefined1 (*) [16])(this + 0x16);
  auVar45 = vpermd_avx2(_DAT_01060ce0,ZEXT1632(*(undefined1 (*) [16])(this + 10)));
  *pauVar16 = auVar43;
  auVar43 = vpermd_avx2(auVar34,ZEXT1632(auVar1));
  pauVar16[1] = auVar37;
  auVar37 = vpermd_avx2(auVar34,ZEXT1632(auVar2));
  pauVar16[2] = auVar45;
  auVar45 = vpermd_avx2(auVar34,ZEXT1632(auVar3));
  pauVar16[3] = auVar43;
  auVar43 = vpermd_avx2(auVar34,ZEXT1632(auVar4));
  pauVar16[4] = auVar37;
  auVar37 = vpermd_avx2(auVar34,ZEXT1632(auVar5));
  pauVar16[5] = auVar45;
  auVar45 = vpermd_avx2(auVar34,ZEXT1632(auVar6));
  pauVar16[6] = auVar43;
  pauVar16[7] = auVar37;
  pauVar16[8] = auVar45;
  auVar45._0_16_ = ZEXT116(0) * arg1[2] + ZEXT116(1) * *arg1;
  auVar45._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * arg1[2];
  auVar34._0_16_ = ZEXT116(0) * arg1[3] + ZEXT116(1) * arg1[1];
  auVar34._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * arg1[3];
  auVar37 = vpsrldq_avx2(auVar45,6);
  auVar40 = vpsrldq_avx2(auVar34,6);
  auVar43 = vpunpckhqdq_avx2(auVar45,auVar34);
  auVar37 = vpunpcklqdq_avx2(auVar37,auVar40);
  auVar45 = vpunpcklqdq_avx2(auVar45,auVar34);
  auVar41 = vpsrlq_avx2(auVar37,0x1e);
  auVar37 = vpsrlq_avx2(auVar37,4);
  auVar34 = vpsrlq_avx2(auVar45,0x1a);
  auVar40 = vpsrlq_avx2(auVar43,0x28);
  auVar43 = vpand_avx2(auVar37,_DAT_01060cc0);
  auVar37 = vpand_avx2(auVar45,_DAT_01060cc0);
  auVar45 = vpand_avx2(auVar34,_DAT_01060cc0);
  auVar34 = vpand_avx2(auVar41,_DAT_01060cc0);
  auVar40 = vpor_avx2(auVar40,_DAT_01060ca0);
  auVar29 = vpaddq_avx2(auVar43,auVar29);
  while (uVar12 = uVar12 - 0x40, uVar12 != 0) {
    auVar39 = vpaddq_avx2(auVar37,auVar27._0_32_);
    auVar44 = *pauVar16;
    auVar46 = vpaddq_avx2(auVar45,auVar28._0_32_);
    auVar47 = pauVar16[1];
    auVar34 = vpaddq_avx2(auVar34,auVar31._0_32_);
    auVar43 = pauVar16[3];
    auVar40 = vpaddq_avx2(auVar40,auVar32._0_32_);
    auVar37 = pauVar16[6];
    auVar45 = pauVar16[8];
    auVar41 = vpmuludq_avx2(auVar44,auVar29);
    auVar42 = vpmuludq_avx2(auVar47,auVar29);
    auVar36 = vpmuludq_avx2(auVar43,auVar29);
    auVar35 = vpmuludq_avx2(auVar37,auVar29);
    auVar29 = vpmuludq_avx2(auVar45,auVar29);
    auVar33 = vpmuludq_avx2(auVar47,auVar39);
    auVar38 = vpmuludq_avx2(auVar47,auVar46);
    auVar29 = vpaddq_avx2(auVar29,auVar33);
    auVar41 = vpaddq_avx2(auVar41,auVar38);
    auVar47 = vpmuludq_avx2(auVar47,auVar34);
    auVar33 = vpmuludq_avx2(auVar40,pauVar16[2]);
    auVar47 = vpaddq_avx2(auVar36,auVar47);
    auVar36 = vpaddq_avx2(auVar35,auVar33);
    auVar35 = vpmuludq_avx2(auVar44,auVar39);
    auVar33 = vpmuludq_avx2(auVar44,auVar46);
    auVar36 = vpaddq_avx2(auVar36,auVar35);
    auVar29 = vpaddq_avx2(auVar29,auVar33);
    auVar35 = vpmuludq_avx2(auVar44,auVar34);
    auVar33 = vpmuludq_avx2(auVar44,auVar40);
    auVar44 = vpaddq_avx2(auVar42,auVar35);
    auVar47 = vpaddq_avx2(auVar47,auVar33);
    auVar33._0_16_ = ZEXT116(0) * arg1[6] + ZEXT116(1) * arg1[4];
    auVar33._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * arg1[6];
    auVar42 = vpmuludq_avx2(pauVar16[4],auVar34);
    auVar35 = vpmuludq_avx2(pauVar16[4],auVar40);
    auVar36 = vpaddq_avx2(auVar36,auVar42);
    auVar29 = vpaddq_avx2(auVar29,auVar35);
    auVar42 = vpmuludq_avx2(auVar43,auVar46);
    auVar43 = vpmuludq_avx2(auVar43,auVar39);
    auVar44 = vpaddq_avx2(auVar44,auVar42);
    auVar43 = vpaddq_avx2(auVar41,auVar43);
    auVar35._0_16_ = ZEXT116(0) * arg1[7] + ZEXT116(1) * arg1[5];
    auVar35._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * arg1[7];
    auVar41 = vpmuludq_avx2(pauVar16[5],auVar46);
    auVar42 = vpmuludq_avx2(pauVar16[5],auVar39);
    auVar38 = vpsrldq_avx2(auVar33,6);
    auVar47 = vpaddq_avx2(auVar47,auVar41);
    auVar44 = vpaddq_avx2(auVar44,auVar42);
    auVar41 = vpmuludq_avx2(auVar37,auVar34);
    auVar37 = vpmuludq_avx2(auVar37,auVar40);
    auVar42 = vpsrldq_avx2(auVar35,6);
    auVar29 = vpaddq_avx2(auVar29,auVar41);
    auVar43 = vpaddq_avx2(auVar43,auVar37);
    auVar41 = vpunpckhqdq_avx2(auVar33,auVar35);
    auVar37 = vpmuludq_avx2(auVar45,auVar34);
    auVar34 = vpmuludq_avx2(auVar45,auVar40);
    auVar40 = vpunpcklqdq_avx2(auVar33,auVar35);
    auVar43 = vpaddq_avx2(auVar43,auVar37);
    auVar44 = vpaddq_avx2(auVar44,auVar34);
    auVar42 = vpunpcklqdq_avx2(auVar38,auVar42);
    auVar37 = vpmuludq_avx2(auVar39,pauVar16[7]);
    auVar45 = vpmuludq_avx2(auVar45,auVar46);
    auVar47 = vpaddq_avx2(auVar47,auVar37);
    auVar37 = vpaddq_avx2(auVar36,auVar45);
    auVar34 = vpsrlq_avx2(auVar44,0x1a);
    auVar45 = vpand_avx2(auVar44,_DAT_01060cc0);
    auVar44 = vpaddq_avx2(auVar47,auVar34);
    auVar34 = vpsrlq_avx2(auVar37,0x1a);
    auVar47 = vpand_avx2(auVar37,_DAT_01060cc0);
    auVar29 = vpaddq_avx2(auVar29,auVar34);
    auVar46 = vpsrlq_avx2(auVar44,0x1a);
    auVar37 = vpand_avx2(auVar44,_DAT_01060cc0);
    auVar39 = vpsrlq_avx2(auVar42,4);
    auVar44 = vpsrlq_avx2(auVar29,0x1a);
    auVar34 = vpand_avx2(auVar29,_DAT_01060cc0);
    auVar29 = vpaddq_avx2(auVar43,auVar44);
    auVar44 = vpaddq_avx2(auVar47,auVar46);
    auVar47 = vpsllq_avx2(auVar46,2);
    auVar44 = vpaddq_avx2(auVar44,auVar47);
    auVar43 = vpand_avx2(auVar39,_DAT_01060cc0);
    auVar36 = vpsrlq_avx2(auVar40,0x1a);
    auVar47 = vpsrlq_avx2(auVar29,0x1a);
    auVar29 = vpand_avx2(auVar29,_DAT_01060cc0);
    auVar47 = vpaddq_avx2(auVar45,auVar47);
    auVar29 = vpaddq_avx2(auVar29,auVar43);
    auVar42 = vpsrlq_avx2(auVar42,0x1e);
    auVar43 = vpsrlq_avx2(auVar44,0x1a);
    auVar39 = vpand_avx2(auVar44,_DAT_01060cc0);
    auVar27 = ZEXT3264(auVar39);
    auVar44 = vpaddq_avx2(auVar34,auVar43);
    auVar28 = ZEXT3264(auVar44);
    auVar43 = vpsrlq_avx2(auVar41,0x28);
    auVar45 = vpsrlq_avx2(auVar47,0x1a);
    auVar46 = vpand_avx2(auVar47,_DAT_01060cc0);
    auVar31 = ZEXT3264(auVar46);
    auVar47 = vpaddq_avx2(auVar37,auVar45);
    auVar32 = ZEXT3264(auVar47);
    auVar37 = vpand_avx2(auVar40,_DAT_01060cc0);
    auVar45 = vpand_avx2(auVar36,_DAT_01060cc0);
    auVar34 = vpand_avx2(auVar42,_DAT_01060cc0);
    auVar40 = vpor_avx2(auVar43,_DAT_01060ca0);
    arg1 = arg1 + 4;
  }
  auVar39 = vpaddq_avx2(auVar37,auVar39);
  auVar43 = *(undefined1 (*) [32])(*pauVar16 + 4);
  auVar41 = vpaddq_avx2(auVar45,auVar44);
  auVar44 = *(undefined1 (*) [32])(pauVar16[1] + 4);
  auVar34 = vpaddq_avx2(auVar34,auVar46);
  auVar37 = *(undefined1 (*) [32])(pauVar16[3] + 4);
  auVar46 = vpaddq_avx2(auVar40,auVar47);
  auVar47 = *(undefined1 (*) [32])(pauVar16[6] + 4);
  auVar45 = *(undefined1 (*) [32])(pauVar16[8] + 4);
  auVar40 = vpmuludq_avx2(auVar43,auVar29);
  auVar42 = vpmuludq_avx2(auVar44,auVar29);
  auVar36 = vpmuludq_avx2(auVar37,auVar29);
  auVar35 = vpmuludq_avx2(auVar47,auVar29);
  auVar29 = vpmuludq_avx2(auVar45,auVar29);
  auVar33 = vpmuludq_avx2(auVar44,auVar39);
  auVar38 = vpmuludq_avx2(auVar44,auVar41);
  auVar29 = vpaddq_avx2(auVar29,auVar33);
  auVar40 = vpaddq_avx2(auVar40,auVar38);
  auVar44 = vpmuludq_avx2(auVar44,auVar34);
  auVar33 = vpmuludq_avx2(auVar46,*(undefined1 (*) [32])(pauVar16[2] + 4));
  auVar44 = vpaddq_avx2(auVar36,auVar44);
  auVar36 = vpaddq_avx2(auVar35,auVar33);
  auVar35 = vpmuludq_avx2(auVar43,auVar39);
  auVar33 = vpmuludq_avx2(auVar43,auVar41);
  auVar36 = vpaddq_avx2(auVar36,auVar35);
  auVar29 = vpaddq_avx2(auVar29,auVar33);
  auVar35 = vpmuludq_avx2(auVar43,auVar34);
  auVar33 = vpmuludq_avx2(auVar43,auVar46);
  auVar43 = vpaddq_avx2(auVar42,auVar35);
  auVar44 = vpaddq_avx2(auVar44,auVar33);
  auVar42 = vpmuludq_avx2(*(undefined1 (*) [32])(pauVar16[4] + 4),auVar34);
  auVar35 = vpmuludq_avx2(*(undefined1 (*) [32])(pauVar16[4] + 4),auVar46);
  auVar36 = vpaddq_avx2(auVar36,auVar42);
  auVar29 = vpaddq_avx2(auVar29,auVar35);
  auVar42 = vpmuludq_avx2(auVar37,auVar41);
  auVar37 = vpmuludq_avx2(auVar37,auVar39);
  auVar43 = vpaddq_avx2(auVar43,auVar42);
  auVar37 = vpaddq_avx2(auVar40,auVar37);
  auVar40 = vpmuludq_avx2(*(undefined1 (*) [32])(pauVar16[5] + 4),auVar41);
  auVar42 = vpmuludq_avx2(*(undefined1 (*) [32])(pauVar16[5] + 4),auVar39);
  auVar44 = vpaddq_avx2(auVar44,auVar40);
  auVar43 = vpaddq_avx2(auVar43,auVar42);
  auVar40 = vpmuludq_avx2(auVar47,auVar34);
  auVar47 = vpmuludq_avx2(auVar47,auVar46);
  auVar29 = vpaddq_avx2(auVar29,auVar40);
  auVar47 = vpaddq_avx2(auVar37,auVar47);
  auVar37 = vpmuludq_avx2(auVar45,auVar34);
  auVar34 = vpmuludq_avx2(auVar45,auVar46);
  auVar47 = vpaddq_avx2(auVar47,auVar37);
  auVar43 = vpaddq_avx2(auVar43,auVar34);
  auVar37 = vpmuludq_avx2(auVar39,*(undefined1 (*) [32])(pauVar16[7] + 4));
  auVar45 = vpmuludq_avx2(auVar45,auVar41);
  auVar44 = vpaddq_avx2(auVar44,auVar37);
  auVar37 = vpaddq_avx2(auVar36,auVar45);
  auVar39 = vpsrldq_avx2(auVar29,8);
  auVar46 = vpsrldq_avx2(auVar47,8);
  auVar40 = vpsrldq_avx2(auVar43,8);
  auVar45 = vpsrldq_avx2(auVar44,8);
  auVar34 = vpsrldq_avx2(auVar37,8);
  auVar29 = vpaddq_avx2(auVar29,auVar39);
  auVar47 = vpaddq_avx2(auVar47,auVar46);
  auVar43 = vpaddq_avx2(auVar43,auVar40);
  auVar44 = vpaddq_avx2(auVar44,auVar45);
  auVar37 = vpaddq_avx2(auVar37,auVar34);
  auVar45 = vpermq_avx2(auVar43,2);
  auVar34 = vpermq_avx2(auVar44,2);
  auVar39 = vpermq_avx2(auVar37,2);
  auVar46 = vpermq_avx2(auVar29,2);
  auVar40 = vpermq_avx2(auVar47,2);
  auVar43 = vpaddq_avx2(auVar43,auVar45);
  auVar44 = vpaddq_avx2(auVar44,auVar34);
  auVar37 = vpaddq_avx2(auVar37,auVar39);
  auVar29 = vpaddq_avx2(auVar29,auVar46);
  auVar47 = vpaddq_avx2(auVar47,auVar40);
  auVar45 = vpsrlq_avx2(auVar43,0x1a);
  auVar43 = vpand_avx2(auVar43,_DAT_01060cc0);
  auVar44 = vpaddq_avx2(auVar44,auVar45);
  auVar45 = vpsrlq_avx2(auVar37,0x1a);
  auVar37 = vpand_avx2(auVar37,_DAT_01060cc0);
  auVar29 = vpaddq_avx2(auVar29,auVar45);
  auVar39 = vpsrlq_avx2(auVar44,0x1a);
  auVar45 = vpand_avx2(auVar44,_DAT_01060cc0);
  auVar44 = vpsrlq_avx2(auVar29,0x1a);
  auVar34 = vpand_avx2(auVar29,_DAT_01060cc0);
  auVar29 = vpaddq_avx2(auVar47,auVar44);
  auVar44 = vpaddq_avx2(auVar37,auVar39);
  auVar47 = vpsllq_avx2(auVar39,2);
  auVar44 = vpaddq_avx2(auVar44,auVar47);
  auVar37 = vpsrlq_avx2(auVar29,0x1a);
  auVar47 = vpand_avx2(auVar29,_DAT_01060cc0);
  auVar29 = vpaddq_avx2(auVar43,auVar37);
  auVar37 = vpsrlq_avx2(auVar44,0x1a);
  auVar43 = vpand_avx2(auVar44,_DAT_01060cc0);
  auVar44 = vpaddq_avx2(auVar34,auVar37);
  auVar34 = vpsrlq_avx2(auVar29,0x1a);
  auVar37 = vpand_avx2(auVar29,_DAT_01060cc0);
  auVar29 = vpaddq_avx2(auVar45,auVar34);
  *(uint *)this = auVar43._0_4_;
  *(uint *)((longlong)this + 4) = auVar44._0_4_;
  *(uint *)(this + 1) = auVar47._0_4_;
  *(uint *)((longlong)this + 0xc) = auVar37._0_4_;
  *(uint *)(this + 2) = auVar29._0_4_;
  return;
}




// ==================================================
// @01bdbfa0 (1927 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  undefined8 *this;
  
  FUN_000a32b0();
  this[0x27] = &DAT_025768d0;
  if (DAT_026ea710 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f7680 = "GNPropertyObserver";
      DAT_026f7690 = 0;
      _DAT_026f7688 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  this[0x28] = &DAT_024c8618;
  if (DAT_026ff970 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e0230 = "GNHeartbeatHandler";
      DAT_026e0240 = 0;
      _DAT_026e0238 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *this = &DAT_02643490;
  this[2] = &DAT_02643e00;
  this[0x27] = &DAT_02643e40;
  this[0x28] = &DAT_02643e90;
  FUN_01bdc890();
  FUN_01bdcb80();
  FUN_01bdce70();
  FUN_01bdd160();
  FUN_01bdd450();
  FUN_01bdd6d0();
  FUN_01bdd950();
  FUN_01bddbd0();
  FUN_01bdde50();
  FUN_01bde0d0();
  *(undefined4 *)(this + 0x33) = 0;
  if (DAT_027e66d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e6620 = FUN_0006d940();
      _DAT_027e6608 = "MUSpectrumShaperSpectrumView";
      _DAT_027e6610 = 0x1c0;
      _DAT_027e6618 = FUN_01bdbd50;
      _DAT_027e6628 = 0;
      uRam00000000027e6630 = 0;
      _DAT_027e6638 = 0;
      uRam00000000027e6640 = 0;
      _DAT_027e6648 = 0;
      uRam00000000027e6650 = 0;
      _DAT_027e6658 = 0;
      uRam00000000027e6660 = 0;
      _DAT_027e6668 = 0;
      uRam00000000027e6670 = 0;
      _DAT_027e6678 = 0;
      uRam00000000027e6680 = 0;
      _DAT_027e6688 = 0;
      uRam00000000027e6690 = 0;
      _DAT_027e6698 = 0;
      uRam00000000027e66a0 = 0;
      _DAT_027e66a8 = 0;
      uRam00000000027e66b0 = 0;
      _DAT_027e66b8 = 0;
      _uRam00000000027e66c0 = 0;
      _DAT_027e66c8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e66c3 == '\0') {
    FUN_01bde350();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x19c) = 0;
  if (DAT_027e66d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e6620 = FUN_0006d940();
      _DAT_027e6608 = "MUSpectrumShaperSpectrumView";
      _DAT_027e6610 = 0x1c0;
      _DAT_027e6618 = FUN_01bdbd50;
      _DAT_027e6628 = 0;
      uRam00000000027e6630 = 0;
      _DAT_027e6638 = 0;
      uRam00000000027e6640 = 0;
      _DAT_027e6648 = 0;
      uRam00000000027e6650 = 0;
      _DAT_027e6658 = 0;
      uRam00000000027e6660 = 0;
      _DAT_027e6668 = 0;
      uRam00000000027e6670 = 0;
      _DAT_027e6678 = 0;
      uRam00000000027e6680 = 0;
      _DAT_027e6688 = 0;
      uRam00000000027e6690 = 0;
      _DAT_027e6698 = 0;
      uRam00000000027e66a0 = 0;
      _DAT_027e66a8 = 0;
      uRam00000000027e66b0 = 0;
      _DAT_027e66b8 = 0;
      _uRam00000000027e66c0 = 0;
      _DAT_027e66c8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e66c3 == '\0') {
    FUN_01bde580();
    FUN_00e87980();
  }
  *(undefined1 *)(this + 0x34) = 0;
  if (DAT_027e66d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e6620 = FUN_0006d940();
      _DAT_027e6608 = "MUSpectrumShaperSpectrumView";
      _DAT_027e6610 = 0x1c0;
      _DAT_027e6618 = FUN_01bdbd50;
      _DAT_027e6628 = 0;
      uRam00000000027e6630 = 0;
      _DAT_027e6638 = 0;
      uRam00000000027e6640 = 0;
      _DAT_027e6648 = 0;
      uRam00000000027e6650 = 0;
      _DAT_027e6658 = 0;
      uRam00000000027e6660 = 0;
      _DAT_027e6668 = 0;
      uRam00000000027e6670 = 0;
      _DAT_027e6678 = 0;
      uRam00000000027e6680 = 0;
      _DAT_027e6688 = 0;
      uRam00000000027e6690 = 0;
      _DAT_027e6698 = 0;
      uRam00000000027e66a0 = 0;
      _DAT_027e66a8 = 0;
      uRam00000000027e66b0 = 0;
      _DAT_027e66b8 = 0;
      _uRam00000000027e66c0 = 0;
      _DAT_027e66c8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e66c3 == '\0') {
    FUN_01bde6f0();
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)this + 0x1a4) = 0;
  *(undefined8 *)((longlong)this + 0x1ac) = 0;
  if (DAT_027e66d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e6620 = FUN_0006d940();
      _DAT_027e6608 = "MUSpectrumShaperSpectrumView";
      _DAT_027e6610 = 0x1c0;
      _DAT_027e6618 = FUN_01bdbd50;
      _DAT_027e6628 = 0;
      uRam00000000027e6630 = 0;
      _DAT_027e6638 = 0;
      uRam00000000027e6640 = 0;
      _DAT_027e6648 = 0;
      uRam00000000027e6650 = 0;
      _DAT_027e6658 = 0;
      uRam00000000027e6660 = 0;
      _DAT_027e6668 = 0;
      uRam00000000027e6670 = 0;
      _DAT_027e6678 = 0;
      uRam00000000027e6680 = 0;
      _DAT_027e6688 = 0;
      uRam00000000027e6690 = 0;
      _DAT_027e6698 = 0;
      uRam00000000027e66a0 = 0;
      _DAT_027e66a8 = 0;
      uRam00000000027e66b0 = 0;
      _DAT_027e66b8 = 0;
      _uRam00000000027e66c0 = 0;
      _DAT_027e66c8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e66c3 == '\0') {
    FUN_01bde860();
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)this + 0x1b4) = 0;
  if (DAT_027e66d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e6620 = FUN_0006d940();
      _DAT_027e6608 = "MUSpectrumShaperSpectrumView";
      _DAT_027e6610 = 0x1c0;
      _DAT_027e6618 = FUN_01bdbd50;
      _DAT_027e6628 = 0;
      uRam00000000027e6630 = 0;
      _DAT_027e6638 = 0;
      uRam00000000027e6640 = 0;
      _DAT_027e6648 = 0;
      uRam00000000027e6650 = 0;
      _DAT_027e6658 = 0;
      uRam00000000027e6660 = 0;
      _DAT_027e6668 = 0;
      uRam00000000027e6670 = 0;
      _DAT_027e6678 = 0;
      uRam00000000027e6680 = 0;
      _DAT_027e6688 = 0;
      uRam00000000027e6690 = 0;
      _DAT_027e6698 = 0;
      uRam00000000027e66a0 = 0;
      _DAT_027e66a8 = 0;
      uRam00000000027e66b0 = 0;
      _DAT_027e66b8 = 0;
      _uRam00000000027e66c0 = 0;
      _DAT_027e66c8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e66c3 == '\0') {
    FUN_01bde9d0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x1bc) = 0;
  if (DAT_027e66d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e6620 = FUN_0006d940();
      _DAT_027e6608 = "MUSpectrumShaperSpectrumView";
      _DAT_027e6610 = 0x1c0;
      _DAT_027e6618 = FUN_01bdbd50;
      _DAT_027e6628 = 0;
      uRam00000000027e6630 = 0;
      _DAT_027e6638 = 0;
      uRam00000000027e6640 = 0;
      _DAT_027e6648 = 0;
      uRam00000000027e6650 = 0;
      _DAT_027e6658 = 0;
      uRam00000000027e6660 = 0;
      _DAT_027e6668 = 0;
      uRam00000000027e6670 = 0;
      _DAT_027e6678 = 0;
      uRam00000000027e6680 = 0;
      _DAT_027e6688 = 0;
      uRam00000000027e6690 = 0;
      _DAT_027e6698 = 0;
      uRam00000000027e66a0 = 0;
      _DAT_027e66a8 = 0;
      uRam00000000027e66b0 = 0;
      _DAT_027e66b8 = 0;
      _uRam00000000027e66c0 = 0;
      _DAT_027e66c8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e66c3 == '\0') {
    FUN_01bdeb40();
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @00f46160 (1923 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  short *psVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  void *pvVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  int unaff_ESI;
  longlong *this;
  size_t sVar16;
  void *pvVar17;
  bool bVar18;
  
LAB_00f4619d:
  do {
    if (*(uint *)((longlong)this + 0xb4) < 0x106) {
      FUN_00f439b0();
      sVar16 = (size_t)param_3;
      uVar9 = *(uint *)((longlong)this + 0xb4);
      if ((uVar9 < 0x106) && (unaff_ESI == 0)) {
        return 0;
      }
      if (uVar9 == 0) {
        if ((int)this[0x15] != 0) {
          bVar10 = *(byte *)(this[0xc] + (ulonglong)(*(int *)((longlong)this + 0xac) - 1))
          ;
          uVar9 = *(uint *)((longlong)this + 0x170c);
          *(uint *)((longlong)this + 0x170c) = uVar9 + 1;
          *(undefined1 *)(this[0x2e0] + (ulonglong)uVar9) = 0;
          uVar9 = *(uint *)((longlong)this + 0x170c);
          *(uint *)((longlong)this + 0x170c) = uVar9 + 1;
          *(undefined1 *)(this[0x2e0] + (ulonglong)uVar9) = 0;
          uVar9 = *(uint *)((longlong)this + 0x170c);
          *(uint *)((longlong)this + 0x170c) = uVar9 + 1;
          *(byte *)(this[0x2e0] + (ulonglong)uVar9) = bVar10;
          psVar2 = (short *)((longlong)this + (ulonglong)bVar10 * 4 + 0xd4);
          *psVar2 = *psVar2 + 1;
          *(undefined4 *)(this + 0x15) = 0;
        }
        uVar15 = (ulonglong)*(uint *)((longlong)this + 0xac);
        uVar9 = 2;
        if (uVar15 < 2) {
          uVar9 = *(uint *)((longlong)this + 0xac);
        }
        *(uint *)((longlong)this + 0x172c) = uVar9;
        if (unaff_ESI == 4) {
          pvVar12 = (void *)((longlong)&MACH_HEADER.magic + 1);
          FUN_00f4b740(1,uVar15 - this[0x13]);
          this[0x13] = (ulonglong)*(uint *)((longlong)this + 0xac);
          lVar6 = *this;
          lVar7 = *(longlong *)(lVar6 + 0x38);
          FUN_00f4b540();
          uVar9 = *(uint *)(lVar7 + 0x28);
          if (*(uint *)(lVar6 + 0x20) < *(uint *)(lVar7 + 0x28)) {
            uVar9 = *(uint *)(lVar6 + 0x20);
          }
          if (uVar9 != 0) {
            pvVar17 = (void *)(ulonglong)uVar9;
            _memcpy(pvVar12,pvVar17,sVar16);
            *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar6 + 0x18) + (longlong)pvVar17;
            *(longlong *)(lVar7 + 0x20) = *(longlong *)(lVar7 + 0x20) + (longlong)pvVar17;
            *(longlong *)(lVar6 + 0x28) = *(longlong *)(lVar6 + 0x28) + (longlong)pvVar17;
            *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) - uVar9;
            plVar1 = (longlong *)(lVar7 + 0x28);
            *plVar1 = *plVar1 - (longlong)pvVar17;
            if (*plVar1 == 0) {
              *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar7 + 0x10);
            }
          }
          return 3 - (uint)(*(int *)(*this + 0x20) == 0);
        }
        if (*(int *)((longlong)this + 0x170c) != 0) {
          pvVar12 = (void *)0x0;
          FUN_00f4b740(0,uVar15 - this[0x13]);
          this[0x13] = (ulonglong)*(uint *)((longlong)this + 0xac);
          lVar6 = *this;
          lVar7 = *(longlong *)(lVar6 + 0x38);
          FUN_00f4b540();
          uVar9 = *(uint *)(lVar7 + 0x28);
          if (*(uint *)(lVar6 + 0x20) < *(uint *)(lVar7 + 0x28)) {
            uVar9 = *(uint *)(lVar6 + 0x20);
          }
          if (uVar9 != 0) {
            pvVar17 = (void *)(ulonglong)uVar9;
            _memcpy(pvVar12,pvVar17,sVar16);
            *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar6 + 0x18) + (longlong)pvVar17;
            *(longlong *)(lVar7 + 0x20) = *(longlong *)(lVar7 + 0x20) + (longlong)pvVar17;
            *(longlong *)(lVar6 + 0x28) = *(longlong *)(lVar6 + 0x28) + (longlong)pvVar17;
            *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) - uVar9;
            plVar1 = (longlong *)(lVar7 + 0x28);
            *plVar1 = *plVar1 - (longlong)pvVar17;
            if (*plVar1 == 0) {
              *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar7 + 0x10);
            }
          }
          if (*(int *)(*this + 0x20) == 0) {
            return 0;
          }
        }
        return 1;
      }
      if (2 < uVar9) goto LAB_00f461db;
      uVar9 = *(uint *)(this + 0x14);
      *(uint *)(this + 0x17) = uVar9;
      *(int *)((longlong)this + 0xa4) = (int)this[0x16];
      *(undefined4 *)(this + 0x14) = 2;
LAB_00f462ec:
      uVar13 = 2;
      if (uVar9 < 3) goto LAB_00f464b0;
LAB_00f46330:
      if (uVar9 < uVar13) goto LAB_00f464b0;
      uVar13 = *(uint *)((longlong)this + 0xa4);
      iVar4 = *(int *)((longlong)this + 0xac);
      iVar5 = *(int *)((longlong)this + 0xb4);
      bVar10 = (char)uVar9 - 3;
      iVar14 = iVar4 + ~uVar13;
      uVar9 = *(uint *)((longlong)this + 0x170c);
      *(uint *)((longlong)this + 0x170c) = uVar9 + 1;
      *(char *)(this[0x2e0] + (ulonglong)uVar9) = (char)iVar14;
      uVar9 = *(uint *)((longlong)this + 0x170c);
      *(uint *)((longlong)this + 0x170c) = uVar9 + 1;
      *(char *)(this[0x2e0] + (ulonglong)uVar9) = (char)((uint)iVar14 >> 8);
      uVar9 = *(uint *)((longlong)this + 0x170c);
      *(uint *)((longlong)this + 0x170c) = uVar9 + 1;
      *(byte *)(this[0x2e0] + (ulonglong)uVar9) = bVar10;
      psVar2 = (short *)((longlong)this + (ulonglong)(byte)(&DAT_023e8160)[bVar10] * 4 + 0x4d8)
      ;
      *psVar2 = *psVar2 + 1;
      uVar13 = (~uVar13 + iVar4) - 1 & 0xffff;
      uVar9 = (uVar13 >> 7) + 0x100;
      if (uVar13 < 0x100) {
        uVar9 = uVar13;
      }
      psVar2 = (short *)((longlong)this + (ulonglong)(byte)(&DAT_023e7f60)[uVar9] * 4 + 0x9c8);
      *psVar2 = *psVar2 + 1;
      uVar9 = *(uint *)((longlong)this + 0x170c);
      param_3 = (ulonglong)uVar9;
      uVar13 = *(uint *)(this + 0x2e2);
      iVar14 = (int)this[0x17];
      *(int *)((longlong)this + 0xb4) = (*(int *)((longlong)this + 0xb4) - iVar14) + 1;
      *(int *)(this + 0x17) = iVar14 + -2;
      iVar14 = iVar14 + -3;
      uVar8 = *(int *)((longlong)this + 0xac) + 1;
      do {
        *(uint *)((longlong)this + 0xac) = uVar8;
        if (uVar8 <= (iVar4 + iVar5) - 3U) {
          uVar11 = ((uint)*(byte *)(this[0xc] + (ulonglong)(uVar8 + 2)) ^
                   (int)this[0x10] << (*(byte *)(this + 0x12) & 0x1f)) &
                   *(uint *)((longlong)this + 0x8c);
          *(uint *)(this + 0x10) = uVar11;
          lVar6 = this[0xf];
          *(undefined2 *)(this[0xe] + (ulonglong)(*(uint *)(this + 0xb) & uVar8) * 2) =
               *(undefined2 *)(lVar6 + (ulonglong)uVar11 * 2);
          *(short *)(lVar6 + (ulonglong)uVar11 * 2) = (short)uVar8;
        }
        *(int *)(this + 0x17) = iVar14;
        uVar8 = uVar8 + 1;
        bVar18 = iVar14 != 0;
        iVar14 = iVar14 + -1;
      } while (bVar18);
      *(undefined4 *)(this + 0x15) = 0;
      *(undefined4 *)(this + 0x14) = 2;
      *(uint *)((longlong)this + 0xac) = uVar8;
      if (uVar9 != uVar13) goto LAB_00f4619d;
      pvVar12 = (void *)0x0;
      FUN_00f4b740(0,(ulonglong)uVar8 - this[0x13]);
      this[0x13] = (ulonglong)*(uint *)((longlong)this + 0xac);
      lVar6 = *this;
      lVar7 = *(longlong *)(lVar6 + 0x38);
      FUN_00f4b540();
      uVar9 = *(uint *)(lVar7 + 0x28);
      if (*(uint *)(lVar6 + 0x20) < *(uint *)(lVar7 + 0x28)) {
        uVar9 = *(uint *)(lVar6 + 0x20);
      }
      pvVar17 = (void *)(ulonglong)uVar9;
      if (uVar9 == 0) {
LAB_00f46630:
        iVar4 = *(int *)(*this + 0x20);
      }
      else {
        _memcpy(pvVar12,pvVar17,(size_t)param_3);
        *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar6 + 0x18) + (longlong)pvVar17;
        *(longlong *)(lVar7 + 0x20) = *(longlong *)(lVar7 + 0x20) + (longlong)pvVar17;
        *(longlong *)(lVar6 + 0x28) = *(longlong *)(lVar6 + 0x28) + (longlong)pvVar17;
        *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) - uVar9;
        plVar1 = (longlong *)(lVar7 + 0x28);
        *plVar1 = *plVar1 - (longlong)pvVar17;
        if (*plVar1 != 0) goto LAB_00f46630;
        *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar7 + 0x10);
        iVar4 = *(int *)(*this + 0x20);
      }
    }
    else {
LAB_00f461db:
      uVar9 = *(uint *)((longlong)this + 0xac);
      param_3 = this[0xe];
      uVar13 = ((uint)*(byte *)(this[0xc] + (ulonglong)(uVar9 + 2)) ^
               (int)this[0x10] << (*(byte *)(this + 0x12) & 0x1f)) &
               *(uint *)((longlong)this + 0x8c);
      *(uint *)(this + 0x10) = uVar13;
      lVar6 = this[0xf];
      uVar3 = *(ushort *)(lVar6 + (ulonglong)uVar13 * 2);
      *(ushort *)(param_3 + (ulonglong)(*(uint *)(this + 0xb) & uVar9) * 2) = uVar3;
      *(short *)(lVar6 + (ulonglong)uVar13 * 2) = (short)uVar9;
      uVar9 = *(uint *)(this + 0x14);
      *(uint *)(this + 0x17) = uVar9;
      *(int *)((longlong)this + 0xa4) = (int)this[0x16];
      *(undefined4 *)(this + 0x14) = 2;
      uVar13 = 2;
      if (uVar3 == 0) goto LAB_00f462ec;
      if ((uVar9 < *(uint *)(this + 0x18)) &&
         (*(int *)((longlong)this + 0xac) - (uint)uVar3 <= (int)this[10] - 0x106U)) {
        uVar13 = FUN_00f46910();
        *(uint *)(this + 0x14) = uVar13;
        if ((uVar13 < 6) &&
           (((int)this[0x19] == 1 ||
            ((uVar13 == 3 &&
             (uVar13 = 3,
             0x1000 < (uint)(*(int *)((longlong)this + 0xac) - (int)this[0x16]))))))) {
          *(undefined4 *)(this + 0x14) = 2;
          uVar13 = 2;
        }
      }
      uVar9 = *(uint *)(this + 0x17);
      if (2 < uVar9) goto LAB_00f46330;
LAB_00f464b0:
      if ((int)this[0x15] == 0) {
        *(undefined4 *)(this + 0x15) = 1;
        *(int *)((longlong)this + 0xac) = *(int *)((longlong)this + 0xac) + 1;
        *(int *)((longlong)this + 0xb4) = *(int *)((longlong)this + 0xb4) + -1;
        goto LAB_00f4619d;
      }
      bVar10 = *(byte *)(this[0xc] + (ulonglong)(*(int *)((longlong)this + 0xac) - 1));
      uVar9 = *(uint *)((longlong)this + 0x170c);
      *(uint *)((longlong)this + 0x170c) = uVar9 + 1;
      *(undefined1 *)(this[0x2e0] + (ulonglong)uVar9) = 0;
      uVar9 = *(uint *)((longlong)this + 0x170c);
      *(uint *)((longlong)this + 0x170c) = uVar9 + 1;
      *(undefined1 *)(this[0x2e0] + (ulonglong)uVar9) = 0;
      uVar9 = *(uint *)((longlong)this + 0x170c);
      *(uint *)((longlong)this + 0x170c) = uVar9 + 1;
      *(byte *)(this[0x2e0] + (ulonglong)uVar9) = bVar10;
      psVar2 = (short *)((longlong)this + (ulonglong)bVar10 * 4 + 0xd4);
      *psVar2 = *psVar2 + 1;
      if (*(int *)((longlong)this + 0x170c) == (int)this[0x2e2]) {
        pvVar12 = (void *)0x0;
        FUN_00f4b740(0,(ulonglong)*(uint *)((longlong)this + 0xac) - this[0x13]);
        this[0x13] = (ulonglong)*(uint *)((longlong)this + 0xac);
        lVar6 = *this;
        lVar7 = *(longlong *)(lVar6 + 0x38);
        FUN_00f4b540();
        uVar9 = *(uint *)(lVar7 + 0x28);
        if (*(uint *)(lVar6 + 0x20) < *(uint *)(lVar7 + 0x28)) {
          uVar9 = *(uint *)(lVar6 + 0x20);
        }
        pvVar17 = (void *)(ulonglong)uVar9;
        if (uVar9 != 0) {
          _memcpy(pvVar12,pvVar17,(size_t)param_3);
          *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar6 + 0x18) + (longlong)pvVar17;
          *(longlong *)(lVar7 + 0x20) = *(longlong *)(lVar7 + 0x20) + (longlong)pvVar17;
          *(longlong *)(lVar6 + 0x28) = *(longlong *)(lVar6 + 0x28) + (longlong)pvVar17;
          *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) - uVar9;
          plVar1 = (longlong *)(lVar7 + 0x28);
          *plVar1 = *plVar1 - (longlong)pvVar17;
          if (*plVar1 == 0) {
            *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar7 + 0x10);
          }
        }
      }
      *(int *)((longlong)this + 0xac) = *(int *)((longlong)this + 0xac) + 1;
      *(int *)((longlong)this + 0xb4) = *(int *)((longlong)this + 0xb4) + -1;
      iVar4 = *(int *)(*this + 0x20);
    }
    if (iVar4 == 0) {
      return 0;
    }
  } while( true );
}




// ==================================================
// @017ecb00 (1817 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong *arg1;
  longlong this;
  longlong lVar9;
  double dVar10;
  double local_98;
  longlong local_88;
  char local_80;
  double local_78;
  double local_70;
  longlong local_68;
  char local_60;
  int local_50;
  longlong local_38;
  
  lVar8 = *arg1;
  cVar2 = '\0';
  if (lVar8 != 0) {
    local_60 = '\0';
    local_68 = 0;
    local_50 = -1;
    do {
      do {
        lVar4 = (longlong)local_50;
        local_50 = local_50 + 1;
        if (*(int *)(lVar8 + 0xc) <= local_50) {
          cVar2 = '\0';
          goto LAB_017eccbf;
        }
        lVar9 = *(longlong *)(lVar8 + 0x10);
        local_68 = *(longlong *)(lVar9 + 8 + lVar4 * 8);
        pvVar5 = _pthread_getspecific((pthread_key_t)lVar9);
        pVar7 = (pthread_key_t)lVar9;
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      } while (local_88 == 0);
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar3 = FUN_01326de0();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    } while ((uVar3 & 0xfffffffd) != 1);
    cVar2 = '\x01';
LAB_017eccbf:
    FUN_001159b0();
  }
  if (*(char *)(this + 0x79) != cVar2) {
    FUN_00d64850();
    *(char *)(this + 0x79) = cVar2;
    FUN_00d64910();
  }
  if (cVar2 == '\0') {
    if (*(longlong *)(this + 0x80) == 0) {
      return;
    }
    FUN_00d64850();
    if (*(longlong *)(this + 0x80) != 0) {
      *(undefined8 *)(this + 0x80) = 0;
      FUN_00d50b20();
    }
    FUN_00d64910();
    return;
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  lVar8 = *arg1;
  if (((lVar8 != 0) && (*(int *)(lVar8 + 0xc) != 0)) && (0 < *(int *)(lVar8 + 0xc))) {
    local_78 = 0.0;
    lVar4 = 0;
    do {
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_01263cf0();
      if (cVar2 == '\0') {
        local_68 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + lVar4 * 8);
        if (local_68 != 0) {
          FUN_00d50b00();
        }
        local_60 = '\0';
        FUN_00d21140();
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        pvVar5 = _pthread_getspecific((pthread_key_t)lVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_01264170();
        local_78 = local_78 + dVar10;
        if (DAT_0241c430 < local_78) break;
      }
      lVar4 = lVar4 + 1;
      lVar8 = *arg1;
    } while (lVar4 < *(int *)(lVar8 + 0xc));
    if (DAT_02411158 <= local_78) {
      if (*(longlong *)(this + 0x38) == 0) {
        bVar1 = false;
        local_38 = 0;
        lVar4 = *(longlong *)(this + 0x80);
        if (lVar4 != 0) goto LAB_017ecfe4;
LAB_017ed1de:
        FUN_017ed3c0();
      }
      else {
        pvVar5 = _pthread_getspecific((pthread_key_t)lVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0123f310();
        local_38 = local_68;
        lVar8 = local_68;
        if (local_68 == 0) {
          local_38 = 0;
          bVar1 = false;
        }
        else {
          bVar1 = true;
          if (local_60 == '\0') {
            FUN_00d50b00();
          }
        }
        lVar4 = *(longlong *)(this + 0x80);
        if (lVar4 == 0) goto LAB_017ed1de;
LAB_017ecfe4:
        FUN_00d50b00();
        if ((*(int *)(lVar4 + 0xc) == 0) || (*(int *)(lVar4 + 0xc) < 1)) goto LAB_017ed1de;
        if (local_38 == 0) {
          lVar9 = 0;
          do {
            pvVar5 = _pthread_getspecific((pthread_key_t)lVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264170();
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)(lVar4 + 0xc));
          goto LAB_017ed1de;
        }
        local_98 = 0.0;
        lVar9 = 0;
        local_70 = 0.0;
        do {
          pvVar5 = _pthread_getspecific((pthread_key_t)lVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar10 = (double)FUN_01264170();
          pvVar5 = _pthread_getspecific((pthread_key_t)lVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if (local_68 == local_38) {
            local_98 = local_98 + dVar10;
          }
          local_70 = local_70 + dVar10;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)(lVar4 + 0xc));
        if ((local_98 < DAT_02411158) ||
           ((local_98 < DAT_0241c430 &&
            ((((DAT_024110e8 < local_70 / local_98 || (local_70 / local_98 < _DAT_0241b6c8)) ||
              (DAT_024110e8 < local_70 / local_78)) || (local_70 / local_78 < _DAT_0241b6c8))))))
        goto LAB_017ed1de;
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((bVar1) && (local_38 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_017ececa;
    }
  }
  if (*(char *)(this + 0x79) != '\0') {
    FUN_00d64850();
    *(undefined1 *)(this + 0x79) = 0;
    FUN_00d64910();
  }
  if (*(longlong *)(this + 0x80) != 0) {
    FUN_00d64850();
    if (*(longlong *)(this + 0x80) != 0) {
      *(longlong *)(this + 0x80) = 0;
      FUN_00d50b20();
    }
    FUN_00d64910();
  }
LAB_017ececa:
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01431180 (1765 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  longlong *arg1;
  longlong *this;
  int local_6c;
  longlong local_60;
  char local_58 [32];
  char local_38 [8];
  
  if (*arg1 != 0) {
    lVar1 = **(longlong **)(this[0x21] + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00c9fe40();
    local_38[0] = local_58[0];
    pcVar3 = local_58;
    if (local_58[0] == '\0') {
      pcVar3 = local_38;
    }
    *pcVar3 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_60 != 0)) {
      FUN_00d50b00();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_60 != 0) {
      *(int *)(this + 0x20) = (int)this[0x20] + *(int *)(local_60 + 0xc);
      local_58[0] = '\0';
      FUN_00d214d0();
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = **(longlong **)(this[0x21] + 0x10);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca13a0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(*(longlong *)(this[0x21] + 0x10) + 8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00c9fe40();
    local_38[0] = local_58[0];
    pcVar3 = local_58;
    if (local_58[0] == '\0') {
      pcVar3 = local_38;
    }
    *pcVar3 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_60 != 0)) {
      FUN_00d50b00();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_60 != 0) {
      local_58[0] = '\0';
      FUN_00d214d0();
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = *(longlong *)(*(longlong *)(this[0x21] + 0x10) + 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca13a0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(*(longlong *)(this[0x21] + 0x10) + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00c9fe40();
    pcVar3 = local_58;
    if (local_58[0] == '\0') {
      pcVar3 = local_38;
    }
    local_38[0] = local_58[0];
    *pcVar3 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_60 != 0)) {
      FUN_00d50b00();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_60 != 0) {
      local_58[0] = '\0';
      FUN_00d214d0();
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = *(longlong *)(*(longlong *)(this[0x21] + 0x10) + 0x10);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca13a0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  if (*param_2 != 0) {
    iVar2 = FUN_014308d0();
    iVar5 = (int)this[0x20];
    iVar6 = iVar5 - iVar2;
    if (iVar6 == 0 || iVar5 < iVar2) {
      if (iVar5 < iVar2) {
        (**(code **)(*this + 0x660))();
      }
    }
    else {
      if (*(int *)(this[0x1f] + 0xc) < iVar6) {
        iVar6 = *(int *)(this[0x1f] + 0xc);
      }
      if (0 < iVar6) {
        pcVar3 = local_58 + 0x10;
        local_6c = iVar6;
        do {
          local_6c = local_6c + -1;
          FUN_00d23340();
          local_58[0x10] = local_58[0];
          pcVar4 = local_58;
          if (local_58[0] == '\0') {
            pcVar4 = pcVar3;
          }
          *pcVar4 = '\0';
          if ((local_58[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          local_38[0] = local_58[0x10] != '\0';
          pcVar4 = pcVar3;
          if (!(bool)local_38[0]) {
            pcVar4 = local_38;
          }
          *pcVar4 = '\0';
          if ((local_58[0x10] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (local_60 != 0) {
            local_58[0] = '\0';
            FUN_00d21140();
            if ((local_58[0] != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d23740();
          }
          FUN_00d23340();
          local_58[0x18] = local_58[0];
          pcVar4 = local_58;
          if (local_58[0] == '\0') {
            pcVar4 = local_58 + 0x18;
          }
          *pcVar4 = '\0';
          if ((local_58[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          local_58[0x10] = local_58[0x18] != '\0';
          pcVar4 = local_58 + 0x18;
          if (!(bool)local_58[0x10]) {
            pcVar4 = pcVar3;
          }
          *pcVar4 = '\0';
          if ((local_58[0x18] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (local_60 != 0) {
            local_58[0] = '\0';
            FUN_00d21140();
            if ((local_58[0] != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d23740();
          }
          FUN_00d23340();
          local_58[8] = local_58[0];
          pcVar4 = local_58;
          if (local_58[0] == '\0') {
            pcVar4 = local_58 + 8;
          }
          *pcVar4 = '\0';
          if ((local_58[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          local_58[0x18] = local_58[8] != '\0';
          pcVar4 = local_58 + 8;
          if (!(bool)local_58[0x18]) {
            pcVar4 = local_58 + 0x18;
          }
          *pcVar4 = '\0';
          if ((local_58[8] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (local_60 != 0) {
            local_58[0] = '\0';
            FUN_00d21140();
            if ((local_58[0] != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d23740();
            if (local_58[0x18] != '\0') {
              FUN_00d50b20();
            }
          }
          if ((local_58[0x10] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        } while (local_6c != 0);
        iVar5 = (int)this[0x20];
      }
      *(int *)(this + 0x20) = iVar5 - iVar6;
    }
  }
  return;
}




// ==================================================
// @01982510 (1698 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  int in_EDX;
  undefined8 *arg1;
  bool bVar5;
  float fVar6;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  
  fVar6 = (float)((ulonglong)param_2 >> 0x20);
  if ((DAT_028b0f08 == (undefined8 *)0x0) || (DAT_028b0f11 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0f08 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02680400;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(undefined8 *)((longlong)puVar4 + 0x39) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x41) = 0;
      (*DAT_02680418)();
      if (DAT_028b0f08 == puVar4) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar5 = DAT_028b0f08 != (undefined8 *)0x0;
        DAT_028b0f08 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b0f10 == '\0') {
        DAT_028b0f10 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      FUN_01d39400(0,0);
      FUN_01d38ba0(DAT_023b1614,0);
      fVar6 = 0.0;
      FUN_01d38ba0(0,DAT_02390d2c);
      FUN_01d38b10();
      DAT_028b0f11 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0f11 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0f18 == (undefined8 *)0x0) || (DAT_028b0f21 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0f18 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02680400;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(undefined8 *)((longlong)puVar4 + 0x39) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x41) = 0;
      (*DAT_02680418)();
      if (DAT_028b0f18 == puVar4) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar5 = DAT_028b0f18 != (undefined8 *)0x0;
        DAT_028b0f18 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b0f20 == '\0') {
        DAT_028b0f20 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      FUN_01d39400(0,0);
      FUN_01d38ba0(DAT_023b1614,0);
      fVar6 = 0.0;
      FUN_01d38ba0(0,DAT_023b1614);
      FUN_01d38b10();
      DAT_028b0f21 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0f21 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0f28 == (undefined8 *)0x0) || (DAT_028b0f31 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0f28 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02680400;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(undefined8 *)((longlong)puVar4 + 0x39) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x41) = 0;
      (*DAT_02680418)();
      if (DAT_028b0f28 == puVar4) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar5 = DAT_028b0f28 != (undefined8 *)0x0;
        DAT_028b0f28 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b0f30 == '\0') {
        DAT_028b0f30 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      FUN_01d39400(0,0);
      FUN_01d38ba0(DAT_02390d2c,0);
      fVar6 = 0.0;
      FUN_01d38ba0(0,DAT_02390d2c);
      FUN_01d38b10();
      DAT_028b0f31 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0f31 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0f38 == (undefined8 *)0x0) || (DAT_028b0f41 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0f38 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02680400;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(undefined8 *)((longlong)puVar4 + 0x39) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x41) = 0;
      (*DAT_02680418)();
      if (DAT_028b0f38 == puVar4) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar5 = DAT_028b0f38 != (undefined8 *)0x0;
        DAT_028b0f38 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b0f40 == '\0') {
        DAT_028b0f40 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      FUN_01d39400(0,0);
      FUN_01d38ba0(DAT_02390d2c,0);
      fVar6 = 0.0;
      FUN_01d38ba0(0,DAT_023b1614);
      FUN_01d38b10();
      DAT_028b0f41 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0f41 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_01e3f820();
  FUN_01e3f820();
  fVar6 = fVar6 + extraout_XMM0_Db_00 + DAT_02390d00;
  if (in_EDX == 0) {
    (**(code **)(*(longlong *)*arg1 + 0x370))(param_3,extraout_XMM0_Db);
    puVar4 = DAT_028b0f08;
    plVar1 = (longlong *)*arg1;
    if (DAT_028b0f08 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3a0))();
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*arg1 + 0x370))(0,fVar6 - extraout_XMM0_Db);
    puVar4 = DAT_028b0f18;
    plVar1 = (longlong *)*arg1;
    if (DAT_028b0f18 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3a0))();
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    if (in_EDX != 2) {
      return;
    }
    (**(code **)(*(longlong *)*arg1 + 0x370))(param_3,extraout_XMM0_Db);
    puVar4 = DAT_028b0f28;
    plVar1 = (longlong *)*arg1;
    if (DAT_028b0f28 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3a0))();
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*arg1 + 0x370))(0,fVar6 - extraout_XMM0_Db);
    puVar4 = DAT_028b0f38;
    plVar1 = (longlong *)*arg1;
    if (DAT_028b0f38 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3a0))();
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)*arg1 + 0x370))
            (param_3 ^ _DAT_023945e0,(uint)fVar6 ^ _DAT_023945e0);
  return;
}




// ==================================================
// @01bd3370 (1697 bytes) — logic_branch
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  
  if (DAT_028b5f60 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02725b90 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e5c58 = FUN_00015ff0();
          _DAT_027e5c40 = "MUSpectrumShaperController";
          _DAT_027e5c48 = 0xa0;
          _DAT_027e5c50 = FUN_006594f0;
          _DAT_027e5c60 = 0;
          uRam00000000027e5c68 = 0;
          _DAT_027e5c70 = 0;
          uRam00000000027e5c78 = 0;
          _DAT_027e5c80 = 0;
          uRam00000000027e5c88 = 0;
          _DAT_027e5c90 = 0;
          uRam00000000027e5c98 = 0;
          _DAT_027e5ca0 = 0;
          uRam00000000027e5ca8 = 0;
          _DAT_027e5cb0 = 0;
          uRam00000000027e5cb8 = 0;
          _DAT_027e5cc0 = 0;
          uRam00000000027e5cc8 = 0;
          _DAT_027e5cd0 = 0;
          uRam00000000027e5cd8 = 0;
          _DAT_027e5ce0 = 0;
          uRam00000000027e5ce8 = 0;
          _DAT_027e5cf0 = 0;
          uRam00000000027e5cf8 = 0;
          _DAT_027e5d00 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b5f20 = "handleSelectTab";
      _DAT_028b5f28 = &DAT_027e5c40;
      _DAT_028b5f30 = 0;
      _DAT_028b5f38 = &DAT_027e6600;
      _DAT_028b5f40 = FUN_01bdbcc0;
      _DAT_028b5f48 = 0x5d9;
      _DAT_028b5f50 = 0;
      uRam00000000028b5f58 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5fa8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02725b90 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e5c58 = FUN_00015ff0();
          _DAT_027e5c40 = "MUSpectrumShaperController";
          _DAT_027e5c48 = 0xa0;
          _DAT_027e5c50 = FUN_006594f0;
          _DAT_027e5c60 = 0;
          uRam00000000027e5c68 = 0;
          _DAT_027e5c70 = 0;
          uRam00000000027e5c78 = 0;
          _DAT_027e5c80 = 0;
          uRam00000000027e5c88 = 0;
          _DAT_027e5c90 = 0;
          uRam00000000027e5c98 = 0;
          _DAT_027e5ca0 = 0;
          uRam00000000027e5ca8 = 0;
          _DAT_027e5cb0 = 0;
          uRam00000000027e5cb8 = 0;
          _DAT_027e5cc0 = 0;
          uRam00000000027e5cc8 = 0;
          _DAT_027e5cd0 = 0;
          uRam00000000027e5cd8 = 0;
          _DAT_027e5ce0 = 0;
          uRam00000000027e5ce8 = 0;
          _DAT_027e5cf0 = 0;
          uRam00000000027e5cf8 = 0;
          _DAT_027e5d00 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b5f68 = "handleToggleBypass";
      _DAT_028b5f70 = &DAT_027e5c40;
      _DAT_028b5f78 = 0;
      _DAT_028b5f80 = &DAT_027e6600;
      _DAT_028b5f88 = FUN_01bdbcc0;
      _DAT_028b5f90 = 0x5e9;
      _DAT_028b5f98 = 0;
      uRam00000000028b5fa0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5ff0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02725b90 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e5c58 = FUN_00015ff0();
          _DAT_027e5c40 = "MUSpectrumShaperController";
          _DAT_027e5c48 = 0xa0;
          _DAT_027e5c50 = FUN_006594f0;
          _DAT_027e5c60 = 0;
          uRam00000000027e5c68 = 0;
          _DAT_027e5c70 = 0;
          uRam00000000027e5c78 = 0;
          _DAT_027e5c80 = 0;
          uRam00000000027e5c88 = 0;
          _DAT_027e5c90 = 0;
          uRam00000000027e5c98 = 0;
          _DAT_027e5ca0 = 0;
          uRam00000000027e5ca8 = 0;
          _DAT_027e5cb0 = 0;
          uRam00000000027e5cb8 = 0;
          _DAT_027e5cc0 = 0;
          uRam00000000027e5cc8 = 0;
          _DAT_027e5cd0 = 0;
          uRam00000000027e5cd8 = 0;
          _DAT_027e5ce0 = 0;
          uRam00000000027e5ce8 = 0;
          _DAT_027e5cf0 = 0;
          uRam00000000027e5cf8 = 0;
          _DAT_027e5d00 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b5fb0 = "handleResetSpectrumShaper";
      _DAT_028b5fb8 = &DAT_027e5c40;
      _DAT_028b5fc0 = 0;
      _DAT_028b5fc8 = &DAT_027e6600;
      _DAT_028b5fd0 = FUN_01bdbcc0;
      _DAT_028b5fd8 = 0x5e1;
      _DAT_028b5fe0 = 0;
      uRam00000000028b5fe8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b6038 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02725b90 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e5c58 = FUN_00015ff0();
          _DAT_027e5c40 = "MUSpectrumShaperController";
          _DAT_027e5c48 = 0xa0;
          _DAT_027e5c50 = FUN_006594f0;
          _DAT_027e5c60 = 0;
          uRam00000000027e5c68 = 0;
          _DAT_027e5c70 = 0;
          uRam00000000027e5c78 = 0;
          _DAT_027e5c80 = 0;
          uRam00000000027e5c88 = 0;
          _DAT_027e5c90 = 0;
          uRam00000000027e5c98 = 0;
          _DAT_027e5ca0 = 0;
          uRam00000000027e5ca8 = 0;
          _DAT_027e5cb0 = 0;
          uRam00000000027e5cb8 = 0;
          _DAT_027e5cc0 = 0;
          uRam00000000027e5cc8 = 0;
          _DAT_027e5cd0 = 0;
          uRam00000000027e5cd8 = 0;
          _DAT_027e5ce0 = 0;
          uRam00000000027e5ce8 = 0;
          _DAT_027e5cf0 = 0;
          uRam00000000027e5cf8 = 0;
          _DAT_027e5d00 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b5ff8 = "handlePasteSpectrumShaperParameterSet";
      _DAT_028b6000 = &DAT_027e5c40;
      _DAT_028b6008 = 0;
      _DAT_028b6010 = &DAT_027e6600;
      _DAT_028b6018 = FUN_01bdbcc0;
      _DAT_028b6020 = 0x5f1;
      _DAT_028b6028 = 0;
      uRam00000000028b6030 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b6080 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02725b90 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e5c58 = FUN_00015ff0();
          _DAT_027e5c40 = "MUSpectrumShaperController";
          _DAT_027e5c48 = 0xa0;
          _DAT_027e5c50 = FUN_006594f0;
          _DAT_027e5c60 = 0;
          uRam00000000027e5c68 = 0;
          _DAT_027e5c70 = 0;
          uRam00000000027e5c78 = 0;
          _DAT_027e5c80 = 0;
          uRam00000000027e5c88 = 0;
          _DAT_027e5c90 = 0;
          uRam00000000027e5c98 = 0;
          _DAT_027e5ca0 = 0;
          uRam00000000027e5ca8 = 0;
          _DAT_027e5cb0 = 0;
          uRam00000000027e5cb8 = 0;
          _DAT_027e5cc0 = 0;
          uRam00000000027e5cc8 = 0;
          _DAT_027e5cd0 = 0;
          uRam00000000027e5cd8 = 0;
          _DAT_027e5ce0 = 0;
          uRam00000000027e5ce8 = 0;
          _DAT_027e5cf0 = 0;
          uRam00000000027e5cf8 = 0;
          _DAT_027e5d00 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b6040 = "handleCopySpectrumShaperParameterSet";
      _DAT_028b6048 = &DAT_027e5c40;
      _DAT_028b6050 = 0;
      _DAT_028b6058 = &DAT_027e6600;
      _DAT_028b6060 = FUN_01bdbcc0;
      _DAT_028b6068 = 0x5f9;
      _DAT_028b6070 = 0;
      uRam00000000028b6078 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ==================================================
// @0197f820 (1686 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  void *pvVar4;
  undefined1 *puVar5;
  longlong *this;
  longlong lVar6;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if ((char)this[0x31] == '\0') {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012708c0();
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_0197facb;
    }
    else {
      if (local_40 == 0) {
LAB_0197facb:
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        bVar2 = 1;
        if (local_40 == 0) {
          bVar3 = false;
LAB_0197fdb1:
          FUN_0197f3b0();
        }
        else {
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar1 = this[0x2e];
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_012ebc80();
          if (local_40 == 0) {
            bVar3 = false;
            lVar6 = 0;
          }
          else {
            lVar6 = local_40;
            if (local_38 == '\0') {
              FUN_00d50b00();
              bVar3 = true;
            }
            else {
              local_38 = '\0';
              bVar3 = true;
            }
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 == 0) goto LAB_0197fdb1;
          if (*(int *)(lVar6 + 0xc) == 0) {
            bVar2 = 0;
            goto LAB_0197fdb1;
          }
          lVar1 = **(longlong **)(lVar6 + 0x10);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_0197f3b0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          bVar2 = 0;
        }
        if (*(char *)((longlong)this + 0x18a) != '\x01') {
          *(undefined1 *)((longlong)this + 0x18a) = 1;
          (**(code **)(*this + 0x620))();
        }
        if (!(bool)(!bVar3 | bVar2)) {
          FUN_00d50b20();
        }
        goto LAB_0197fe03;
      }
      FUN_00d50b20();
    }
    FUN_0197f3b0();
    if (*(char *)((longlong)this + 0x18a) == '\0') goto LAB_0197fe03;
    puVar5 = (undefined1 *)((longlong)this + 0x18a);
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01270ab0();
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_0197f94f;
    }
    else {
      if (local_40 == 0) {
LAB_0197f94f:
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        bVar2 = 1;
        if (local_40 == 0) {
          bVar3 = false;
LAB_0197fcb1:
          FUN_0197f3b0();
        }
        else {
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar1 = this[0x2e];
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_012eb7a0();
          if (local_40 == 0) {
            lVar6 = 0;
            bVar3 = false;
          }
          else {
            lVar6 = local_40;
            if (local_38 == '\0') {
              FUN_00d50b00();
              bVar3 = true;
            }
            else {
              local_38 = '\0';
              bVar3 = true;
            }
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 == 0) goto LAB_0197fcb1;
          if (*(int *)(lVar6 + 0xc) == 0) {
            bVar2 = 0;
            goto LAB_0197fcb1;
          }
          lVar1 = **(longlong **)(lVar6 + 0x10);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_0197f3b0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          bVar2 = 0;
        }
        if (*(char *)((longlong)this + 0x18b) != '\x01') {
          *(undefined1 *)((longlong)this + 0x18b) = 1;
          (**(code **)(*this + 0x620))();
        }
        if (!(bool)(!bVar3 | bVar2)) {
          FUN_00d50b20();
        }
        goto LAB_0197fe03;
      }
      FUN_00d50b20();
    }
    FUN_0197f3b0();
    if (*(char *)((longlong)this + 0x18b) == '\0') goto LAB_0197fe03;
    puVar5 = (undefined1 *)((longlong)this + 0x18b);
  }
  *puVar5 = 0;
  (**(code **)(*this + 0x620))();
LAB_0197fe03:
  lVar1 = this[0x2e];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_0197f680();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0197e990();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @008eb9f8 (1670 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  ulonglong uVar5;
  longlong *arg1;
  ulonglong uVar6;
  longlong this;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int local_4c [2];
  short local_42;
  uint local_34;
  
  FUN_0088d1d0();
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar7 = this + 0x71;
  lVar8 = this + 0x70;
  lVar9 = this + 0x6c;
  lVar10 = this + 100;
  lVar11 = this + 0x5c;
  lVar12 = this + 0x58;
  lVar13 = this + 0x40;
  lVar14 = this + 0x28;
  lVar15 = this + 0x10;
  lVar16 = this + 8;
  do {
    psVar4 = &local_42;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,local_4c,param_3,param_4,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,lVar13
                       ,lVar14,lVar15,lVar16,uVar17,uVar18,uVar19);
    iVar2 = iVar2 + iVar1;
    if (local_4c[0] == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar17 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_42) {
    case 1:
      if (local_4c[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x75) = 1;
      goto LAB_008ebf2e;
    case 2:
      if (local_4c[0] == 0xf) {
        *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x10);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_008ebb07::switchdataD_008ec0b8,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(this + 0x18) - *(longlong *)(this + 0x10);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(this + 0x18) = *(longlong *)(this + 0x10) + uVar6;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*arg1 + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(this + 0x76) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x14:
      if (local_4c[0] == 0xf) {
        *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x28);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_008ebb07::switchdataD_008ec0b8,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(this + 0x30) - *(longlong *)(this + 0x28);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(this + 0x30) = *(longlong *)(this + 0x28) + uVar6;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*arg1 + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(this + 0x77) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x15:
      if (local_4c[0] == 0xf) {
        *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 0x40);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_008ebb07::switchdataD_008ec0b8,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(this + 0x48) - *(longlong *)(this + 0x40);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(this + 0x48) = *(longlong *)(this + 0x40) + uVar6;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*arg1 + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(this + 0x78) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x16:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x79) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x17:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x7a) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x18:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(this + 0x60) = local_34;
        *(undefined1 *)(this + 0x7b) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x19:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x7c) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1a:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(this + 0x68) = local_34;
        *(undefined1 *)(this + 0x7d) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1b:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x7e) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1e:
      if (local_4c[0] == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x7f) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1f:
      if (local_4c[0] == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x80) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x20:
      if (local_4c[0] == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x81) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x21:
      if (local_4c[0] == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x82) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x22:
      if (local_4c[0] == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x83) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008ebf2e:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}




// ==================================================
// @01bd23c0 (1645 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *arg1;
  longlong this;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  if (*(longlong *)(this + 0x20) != 0) {
    local_70 = 0;
    (**(code **)(*(longlong *)(this + 0x10) + 0x10))();
    FUN_00d50b00();
    local_70 = '\x01';
    local_60 = 0;
    local_68 = *(longlong *)(this + 0x20);
    local_78 = (longlong *)(this + 0x10);
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    local_d8 = 0;
    local_d0 = '\0';
    plVar1 = &local_d8;
    FUN_00cbadd0(plVar1,&local_68);
    param_1 = (pthread_key_t)plVar1;
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      (**(code **)(*local_78 + 0x10))();
      FUN_00d50b20();
    }
    plVar1 = *(longlong **)(this + 0x40);
    local_50 = 0;
    lVar4 = *(longlong *)(this + 0x20);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    local_58 = lVar4;
    (**(code **)(*plVar1 + 0x3a8))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(this + 0x40) + 0x468))();
    if (*(longlong *)(this + 0x20) != 0) {
      *(undefined8 *)(this + 0x20) = 0;
      FUN_00d50b20();
    }
    if (*(longlong *)(this + 0x28) != 0) {
      *(undefined8 *)(this + 0x28) = 0;
      FUN_00d50b20();
    }
  }
  local_38 = (longlong *)*arg1;
  local_30 = '\0';
  FUN_00d243f0();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d51d20();
  plVar1 = local_98;
  if (local_90 == '\0') {
    if (local_98 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = '\0';
  }
  local_38 = plVar1;
  local_30 = '\0';
  FUN_00d243f0();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_c8 = *arg1;
  if (local_c8 == 0) {
    return;
  }
  if (*(int *)(local_c8 + 0xc) == 0) {
    return;
  }
  local_c0 = '\0';
  FUN_017fa230();
  plVar1 = *(longlong **)(this + 0x20);
  plVar3 = plVar1;
  if (plVar1 == local_38) goto LAB_01bd265a;
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
      goto LAB_01bd2618;
    }
    FUN_00d50b00();
    plVar1 = *(longlong **)(this + 0x20);
    *(longlong **)(this + 0x20) = local_38;
    plVar3 = local_38;
  }
  else {
    local_30 = '\0';
    plVar3 = local_38;
LAB_01bd2618:
    *(longlong **)(this + 0x20) = plVar3;
  }
  param_1 = (pthread_key_t)plVar1;
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar3 = local_38;
  }
LAB_01bd265a:
  if ((local_30 != '\0') && (plVar3 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(this + 0x40) == 0) {
    plVar1 = (longlong *)FUN_00e8fc40();
    FUN_00039550();
    (**(code **)(*plVar1 + 0x18))();
    lVar4 = *(longlong *)(this + 0x40);
    *(longlong **)(this + 0x40) = plVar1;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  plVar1 = *(longlong **)(this + 0x28);
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        *(undefined8 *)(this + 0x28) = 0;
      }
      else {
        FUN_00d50b00();
        plVar1 = *(longlong **)(this + 0x28);
        *(longlong **)(this + 0x28) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(longlong **)(this + 0x28) = local_38;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c6cb0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017ebb00();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c6cb0();
  plVar1 = local_38;
  pvVar2 = _pthread_getspecific(param_1);
  plVar3 = local_38;
  if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar1 = plVar3, lVar4 != 0)) {
    plVar1 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar1 + 0x1a0))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c6cb0();
  plVar1 = local_38;
  pvVar2 = _pthread_getspecific(param_1);
  plVar3 = local_38;
  if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar1 = plVar3, lVar4 != 0)) {
    plVar1 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar1 + 0x1a0))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(this + 0x40);
  local_40 = 0;
  lVar4 = *(longlong *)(this + 0x20);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\x01';
  local_48 = lVar4;
  (**(code **)(*plVar1 + 0x3a0))();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)(this + 0x10) + 0x10))();
  FUN_00d50b00();
  local_b0 = '\x01';
  local_80 = 0;
  local_88 = *(longlong *)(this + 0x20);
  local_b8 = (longlong *)(this + 0x10);
  if (local_88 != 0) {
    FUN_00d50b00();
  }
  local_80 = '\x01';
  local_a8 = 0;
  local_a0 = '\0';
  FUN_00cbad80(&local_a8,&local_88,0x20);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    (**(code **)(*local_b8 + 0x10))();
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01ac67c0 (1600 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  char cVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t in_ECX;
  byte bVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *this;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar23 [16];
  float fVar25;
  undefined1 auVar24 [16];
  uint uVar26;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined4 uVar31;
  longlong *local_38;
  char local_30;
  undefined1 auVar27 [16];
  
  (**(code **)(*this + 0x640))();
  FUN_01e3f820();
  uVar19 = (**(code **)(*local_38 + 0x3d0))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b7b80();
  if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  *(undefined4 *)(this + 0x33) = 0;
  *(undefined8 *)((longlong)this + 0x1b4) = param_1;
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar6 = FUN_017f2970();
  if (cVar6 != '\0') {
    pvVar7 = _pthread_getspecific(in_ECX);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar6 = FUN_017f2980();
    if (cVar6 == '\0') {
      auVar28._8_8_ = in_XMM1_Qb;
      auVar28._0_8_ = param_2;
      uVar31 = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
      fVar30 = (float)((ulonglong)param_2 >> 0x20);
      fVar18 = DAT_0240b530 * fVar30;
      auVar23 = ZEXT416(_DAT_023945e0 & (uint)fVar18) | _DAT_023945f0;
      auVar23._0_4_ = auVar23._0_4_ + fVar18;
      auVar23 = roundss(ZEXT816(0),auVar23,0xb);
      fVar18 = DAT_0241fd58;
      if (auVar23._0_4_ <= DAT_0241fd58) {
        fVar18 = auVar23._0_4_;
      }
      auVar4._8_8_ = extraout_XMM0_Qb;
      auVar4._0_8_ = uVar19;
      uVar3 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
      fVar25 = (float)((ulonglong)uVar19 >> 0x20);
      auVar20._4_4_ = fVar25;
      auVar20._0_4_ = fVar25;
      auVar20._8_4_ = uVar3;
      auVar20._12_4_ = uVar3;
      fVar30 = fVar30 - fVar18;
      auVar21._4_12_ = auVar20._4_12_;
      auVar21._0_4_ = fVar25 + fVar30;
      insertps(auVar4,auVar21,0x10);
      insertps(auVar28,ZEXT416((uint)fVar18),0x10);
      cVar6 = FUN_00d05410();
      if (cVar6 == '\0') {
        if (-1 < (int)*(uint *)((longlong)this + 0x19c)) {
          lVar8 = 0;
          auVar29._8_8_ = in_XMM0_Qb;
          auVar29._0_8_ = param_1;
          while (((float)param_1 < *(float *)(*(longlong *)(this[0x2f] + 0x10) + lVar8 * 4) ||
                 (*(float *)(*(longlong *)(this[0x2f] + 0x10) + 4 + lVar8 * 4) <=
                  (float)param_1))) {
            lVar8 = lVar8 + 1;
            if ((ulonglong)*(uint *)((longlong)this + 0x19c) + 1 == lVar8) goto LAB_01ac6b0a;
          }
          fVar18 = *(float *)(*(longlong *)(this[0x30] + 0x10) + lVar8 * 4);
          uVar17 = -(uint)(fVar30 + _DAT_02390440 < fVar18);
          uVar26 = ~uVar17 & (uint)fVar18;
          auVar27 = ZEXT416(uVar26);
          fVar18 = auVar21._0_4_ -
                   (float)(uVar17 & (uint)(fVar18 - (fVar18 - (fVar30 + _DAT_02390440))) | uVar26);
          fVar25 = (float)((ulonglong)param_1 >> 0x20);
          if (fVar18 < fVar25) {
            FUN_01ac0380();
            if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
              FUN_00d50b00();
            }
            FUN_01e4ac90();
            if (local_38 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            goto LAB_01ac6de3;
          }
          if (fVar25 <= fVar18 + _DAT_02390440) {
            FUN_01e4ac90();
            goto LAB_01ac6def;
          }
          pcVar2 = *(char **)(this[0x2e] + 0x10);
          auVar22 = ZEXT816(0);
          lVar10 = 0xc;
          auVar24._0_12_ = ZEXT812(0);
          auVar24._12_4_ = 0;
          do {
            auVar28 = pmovzxbd(auVar27,*(undefined4 *)(pcVar2 + lVar10 + -0xc));
            auVar27._0_4_ = auVar28._0_4_ + auVar22._0_4_;
            auVar27._4_4_ = auVar28._4_4_ + auVar22._4_4_;
            auVar27._8_4_ = auVar28._8_4_ + auVar22._8_4_;
            auVar27._12_4_ = auVar28._12_4_ + auVar22._12_4_;
            auVar28 = pmovzxbd(auVar29,*(undefined4 *)(pcVar2 + lVar10 + -8));
            auVar29._0_4_ = auVar28._0_4_ + auVar24._0_4_;
            auVar29._4_4_ = auVar28._4_4_ + auVar24._4_4_;
            auVar29._8_4_ = auVar28._8_4_ + auVar24._8_4_;
            auVar29._12_4_ = auVar28._12_4_ + auVar24._12_4_;
            auVar28 = pmovzxbd(auVar22,*(undefined4 *)(pcVar2 + lVar10 + -4));
            auVar23 = pmovzxbd(auVar24,*(undefined4 *)(pcVar2 + lVar10));
            auVar22._0_4_ = auVar28._0_4_ + auVar27._0_4_;
            auVar22._4_4_ = auVar28._4_4_ + auVar27._4_4_;
            auVar22._8_4_ = auVar28._8_4_ + auVar27._8_4_;
            auVar22._12_4_ = auVar28._12_4_ + auVar27._12_4_;
            auVar24._0_4_ = auVar23._0_4_ + auVar29._0_4_;
            auVar24._4_4_ = auVar23._4_4_ + auVar29._4_4_;
            auVar24._8_4_ = auVar23._8_4_ + auVar29._8_4_;
            auVar24._12_4_ = auVar23._12_4_ + auVar29._12_4_;
            lVar10 = lVar10 + 0x10;
          } while (lVar10 != 0x20c);
          if (*pcVar2 == '\0') {
            bVar15 = true;
            uVar11 = 0x20c;
          }
          else {
            uVar12 = 0;
            do {
              uVar11 = uVar12;
              if (pcVar2[uVar11 + 1] == '\0') goto LAB_01ac6c59;
              if (pcVar2[uVar11 + 2] == '\0') {
                uVar11 = uVar11 + 1;
                goto LAB_01ac6c59;
              }
              if (pcVar2[uVar11 + 3] == '\0') {
                uVar11 = uVar11 + 2;
                goto LAB_01ac6c59;
              }
              if (uVar11 == 0x1fc) {
                uVar11 = 0x1ff;
                goto LAB_01ac6c59;
              }
              uVar12 = uVar11 + 4;
            } while (pcVar2[uVar11 + 4] != '\0');
            uVar11 = uVar11 | 3;
LAB_01ac6c59:
            bVar15 = uVar11 < 0x1ff;
          }
          uVar17 = auVar24._8_4_ + auVar22._8_4_ + auVar24._0_4_ + auVar22._0_4_ +
                   auVar24._12_4_ + auVar22._12_4_ + auVar24._4_4_ + auVar22._4_4_;
          if (*pcVar2 == '\0') {
            lVar10 = 0;
            do {
              if (pcVar2[lVar10 + 1] != '\0') {
                lVar14 = lVar10 + 1;
                break;
              }
              if (pcVar2[lVar10 + 2] != '\0') {
                lVar14 = lVar10 + 2;
                break;
              }
              if (pcVar2[lVar10 + 3] != '\0') {
                lVar14 = lVar10 + 3;
                break;
              }
              if (lVar10 == 0x1fc) {
                lVar14 = 0xffffffff;
                break;
              }
              lVar14 = lVar10 + 4;
              lVar5 = lVar10 + 4;
              lVar10 = lVar14;
            } while (pcVar2[lVar5] == '\0');
          }
          else {
            lVar14 = 0;
          }
          uVar12 = 0x1ff;
          do {
            if (pcVar2[uVar12] != '\0') goto LAB_01ac6cfe;
            iVar13 = (int)uVar12;
            if (pcVar2[uVar12 - 1] != '\0') {
              uVar12 = (ulonglong)(iVar13 - 1);
              goto LAB_01ac6cfe;
            }
            if (pcVar2[uVar12 - 2] != '\0') {
              uVar12 = (ulonglong)(iVar13 - 2);
              goto LAB_01ac6cfe;
            }
            uVar11 = (ulonglong)(iVar13 - 3);
            if (pcVar2[uVar11] != '\0') {
              uVar12 = (ulonglong)(iVar13 - 3);
              goto LAB_01ac6cfe;
            }
            uVar12 = uVar12 - 4;
          } while ((int)uVar12 != -1);
          uVar12 = 0xffffffff;
LAB_01ac6cfe:
          iVar13 = (int)lVar14;
          if (iVar13 != -1) {
            uVar11 = CONCAT71((int7)(uVar11 >> 8),1);
            if (iVar13 <= (int)uVar12) {
              lVar10 = (longlong)iVar13;
              do {
                pcVar1 = pcVar2 + lVar10;
                if (*pcVar1 == '\0') break;
                bVar16 = (int)uVar12 != lVar10;
                lVar10 = lVar10 + 1;
              } while (bVar16);
              uVar11 = CONCAT71((int7)(int3)(uVar12 >> 8),*pcVar1 != '\0');
            }
            if (((pcVar2[lVar8] != '\0') &&
                (bVar9 = (byte)uVar11 & bVar15, uVar11 = CONCAT71((int7)(uVar11 >> 8),bVar9),
                bVar9 != 0)) && (2 < uVar17)) {
              FUN_01ac05e0();
              if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
                FUN_00d50b00();
              }
              FUN_01e4ac90();
              if (local_38 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              *(undefined4 *)(this + 0x33) = 2;
              goto LAB_01ac6def;
            }
          }
          FUN_01ac0380(pcVar2,uVar11,bVar15,uVar17,fVar30,uVar31);
          if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          FUN_01e4ac90();
          if (local_38 != (longlong *)0x0) {
            FUN_00d50b20();
          }
LAB_01ac6de3:
          *(undefined4 *)(this + 0x33) = 1;
          goto LAB_01ac6def;
        }
LAB_01ac6b0a:
        FUN_01e4ac90();
      }
      else {
        FUN_01ac0840();
        if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        FUN_01e4ac90();
        if (local_38 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        *(undefined4 *)(this + 0x33) = 3;
      }
    }
  }
LAB_01ac6def:
  if (local_38 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00a9639e (1599 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *arg1;
  longlong this;
  ulonglong uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int local_3c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar9 = this + 0x70;
  lVar10 = this + 0x58;
  lVar11 = this + 0x50;
  lVar12 = this + 0x4c;
  lVar13 = this + 0x48;
  lVar14 = this + 0x44;
  lVar15 = this + 0x40;
  lVar16 = this + 0x3c;
  lVar17 = this + 0x38;
  lVar18 = this + 0x34;
  lVar19 = this + 0x30;
  lVar20 = this + 0x2c;
  lVar21 = this + 0x28;
  lVar22 = this + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_3c,param_3,param_4,lVar9,lVar10,lVar11,lVar12,lVar13,lVar14,
                       lVar15,lVar16,lVar17,lVar18,lVar19,lVar20,lVar21,lVar22,uVar23,uVar24,uVar25)
    ;
    iVar2 = iVar2 + iVar1;
    if (local_3c == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar23 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_3c != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = FUN_00aa9ade();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0xc0) = 1;
      goto LAB_00a9698f;
    case 2:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xc1) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xb:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xc2) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xc:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xc3) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xd:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xc4) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xe:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xc5) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xf:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xc6) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x10:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 199) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x11:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 200) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x12:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xc9) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x13:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xca) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x14:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xcb) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x15:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xcc) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x16:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xcd) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x17:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xce) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x18:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xcf) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x19:
      if (local_3c == 0xf) {
        lVar6 = *(longlong *)(this + 0xa8);
        uVar8 = extraout_XMM0_Da;
        for (lVar5 = *(longlong *)(this + 0xb0); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
          uVar8 = (*(code *)**(undefined8 **)(lVar5 + -0x20))();
        }
        *(longlong *)(this + 0xb0) = lVar6;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar8,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar7 = 0;
          do {
            iVar2 = (**(code **)(*(longlong *)(*(longlong *)(this + 0xa8) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar7 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(this + 0xd0) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_00a9698f:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}




// ==================================================
// @01abec70 (1512 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  pthread_key_t in_ECX;
  ulonglong uVar7;
  undefined8 *arg1;
  longlong this;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 in_XMM0_Qb;
  undefined1 auVar13 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fStack_a4;
  float fStack_9c;
  float fStack_94;
  float fStack_8c;
  longlong local_48;
  char local_40;
  
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b7b80();
  if (local_40 == '\0') {
    if (local_48 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_48 == 0) {
    return;
  }
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_017f2980();
  if ((cVar4 == '\0') && (*(longlong *)(this + 0x168) != 0)) {
    FUN_00d50b00();
    iVar5 = FUN_014148b0();
    if (0 < iVar5) {
      FUN_01414880();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_01414880();
        if ((local_40 == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        FUN_014148d0();
        FUN_014148b0();
        FUN_014148b0();
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar9 = (float)FUN_017f2db0();
        if (DAT_02394274 < fVar9) {
          pvVar6 = _pthread_getspecific(in_ECX);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017f2db0();
        }
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017f2da0();
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017f2d90();
        fStack_94 = (float)((ulonglong)param_2 >> 0x20);
        fStack_8c = (float)((ulonglong)in_XMM1_Qb >> 0x20);
        fStack_a4 = (float)((ulonglong)param_1 >> 0x20);
        fStack_9c = (float)((ulonglong)in_XMM0_Qb >> 0x20);
        fStack_a4 = fStack_a4 + fStack_94;
        fVar9 = DAT_02390124 / (fStack_94 * DAT_0239011c);
        lVar8 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(this + 0x178) + 0x10);
          fVar1 = *(float *)(lVar3 + 4 + lVar8 * 4);
          fVar2 = *(float *)(lVar3 + 8 + lVar8 * 4);
          _exp2f((float)((int)lVar8 + 0x24) * DAT_023908e0 * DAT_023941f4);
          FUN_00aea610();
          fVar10 = (float)_powf();
          fVar11 = 0.0;
          if (0.0 <= fVar10 * fStack_94) {
            fVar11 = fVar10 * fStack_94;
          }
          lVar3 = *(longlong *)(*(longlong *)(this + 400) + 0x10);
          fVar10 = *(float *)(lVar3 + 4 + lVar8 * 4);
          uVar7 = (ulonglong)(fVar10 < fVar11);
          fVar11 = (fVar10 - fVar11) * *(float *)("fff?333?" + uVar7 * 4) + fVar11;
          *(float *)(lVar3 + 4 + lVar8 * 4) = fVar11;
          fVar10 = fVar9 * fVar11;
          if (DAT_02391090 < fVar10) {
            lVar3 = *(longlong *)(*(longlong *)(this + 0x178) + 0x10);
            fVar12 = *(float *)(lVar3 + 8 + lVar8 * 4) - *(float *)(lVar3 + 4 + lVar8 * 4);
            FUN_01cfc9f0(uVar7,-(uint)(fVar10 < DAT_02394288) &
                               (uint)((fVar10 + DAT_0241b638) * DAT_023908d8 * _DAT_023b294c) |
                               ~-(uint)(fVar10 < DAT_02394288) & (uint)_DAT_023b294c);
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            FUN_01d488d0();
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            auVar14 = roundss(ZEXT816(0),
                              ZEXT416((uint)((float)((uint)fVar1 & _DAT_023945e0 | DAT_02394dc8) +
                                            fVar1)),0xb);
            auVar15 = ZEXT416((uint)((float)((uint)fVar2 & _DAT_023945e0 | DAT_02394dc8) + fVar2));
            auVar13 = roundss(auVar15,auVar15,0xb);
            auVar15 = ZEXT416((uint)fVar12 & _DAT_023945e0) | _DAT_023945f0;
            auVar16._4_12_ = auVar15._4_12_;
            auVar16._0_4_ = auVar15._0_4_ + fVar12;
            auVar16 = roundss(auVar16,auVar16,0xb);
            auVar15._4_4_ = fStack_a4;
            auVar15._0_4_ = fStack_a4;
            auVar15._8_4_ = fStack_9c + fStack_8c;
            auVar15._12_4_ = fStack_9c + fStack_8c;
            auVar17._4_12_ = auVar15._4_12_;
            auVar17._0_4_ = fStack_a4 - fVar11;
            auVar13._0_4_ = (auVar13._0_4_ + auVar14._0_4_ + DAT_023b1608) * DAT_0239011c;
            auVar15 = insertps(auVar13,auVar17,0x10);
            auVar14._4_12_ = auVar16._4_12_;
            auVar14._0_4_ = auVar16._0_4_ * DAT_02391094;
            (**(code **)(*(longlong *)*arg1 + 0x3c0))(auVar15._0_8_,auVar14._0_8_);
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x65);
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @008f2b3c (1500 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *arg1;
  longlong this;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int local_40;
  undefined4 local_3c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar5 = this + 0x38;
  lVar6 = this + 0x30;
  lVar7 = this + 0x28;
  lVar8 = this + 0x20;
  lVar9 = this + 0x18;
  lVar10 = this + 0x14;
  lVar11 = this + 0x10;
  lVar12 = this + 0xc;
  lVar13 = this + 8;
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (&local_36,&local_40,param_3,param_4,lVar5,lVar6,lVar7,lVar8,lVar9,lVar10,
                       lVar11,lVar12,lVar13);
    iVar2 = iVar2 + iVar1;
    if (local_40 == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    iVar1 = (int)local_36;
    switch(iVar1 + -1) {
    case 0:
      if (local_40 != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x8a) = 1;
      break;
    case 1:
      if (local_40 != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x8b) = 1;
      break;
    case 2:
      if (local_40 != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x8c) = 1;
      break;
    case 3:
      if (local_40 != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x8d) = 1;
      break;
    case 4:
      if (local_40 != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x8e) = 1;
      break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
switchD_008f2c60_caseD_5:
      iVar3 = (**(code **)(*arg1 + 0x160))();
LAB_008f30c4:
      iVar3 = iVar3 + iVar2;
      break;
    case 9:
      if (local_40 != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x8f) = 1;
      break;
    case 10:
      if (local_40 != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x90) = 1;
      break;
    case 0xb:
      if (local_40 != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x91) = 1;
      break;
    case 0xc:
      if (local_40 != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x92) = 1;
      break;
    case 0x13:
      if (local_40 != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x93) = 1;
      break;
    case 0x14:
      if (local_40 != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(this + 0x48) = local_34;
      *(undefined1 *)(this + 0x94) = 1;
      break;
    case 0x15:
      if (local_40 != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x95) = 1;
      break;
    case 0x16:
      if (local_40 != 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x96) = 1;
      break;
    case 0x1d:
      if (local_40 != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x70);
      iVar1 = (**(code **)(*arg1 + 0xf8))(iVar1 + -1,&local_34);
      FUN_008f31bc();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar4 = 0;
        do {
          iVar2 = (**(code **)(*arg1 + 0x138))();
          iVar1 = iVar1 + iVar2;
          *(undefined4 *)(*(longlong *)(this + 0x70) + uVar4 * 4) = local_3c;
          uVar4 = uVar4 + 1;
        } while (uVar4 < local_34);
      }
      iVar3 = (**(code **)(*arg1 + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(this + 0x97) = 1;
      break;
    default:
      if (iVar1 == 0x28) {
        if (local_40 != 2) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008f30c4;
        }
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x98) = 1;
      }
      else {
        if (iVar1 != 0x29) goto switchD_008f2c60_caseD_5;
        if (local_40 != 2) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008f30c4;
        }
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x99) = 1;
      }
    }
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}




// ==================================================
// @01984820 (1438 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  char *pcVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *this;
  float fVar20;
  float fVar21;
  
  if (DAT_028b0f88 != '\0') goto LAB_01984ad5;
  pcVar1 = *(char **)(DAT_028b0f48 + 0x10);
  pfVar2 = *(float **)(DAT_028b0f58 + 0x10);
  if (*pcVar1 == '\0') {
    fVar20 = *pfVar2 * DAT_02394234 + _DAT_0241b544;
    *pfVar2 = fVar20;
    fVar21 = 0.0;
    if (fVar20 < 0.0) goto LAB_0198487f;
  }
  else {
    fVar20 = (*pfVar2 + DAT_02391090) / DAT_02394234;
    *pfVar2 = fVar20;
    fVar21 = DAT_02390124;
    if (DAT_02390124 < fVar20) {
LAB_0198487f:
      *pfVar2 = fVar21;
    }
  }
  if (pcVar1[1] == '\0') {
    fVar20 = pfVar2[1] * DAT_02394234 + _DAT_0241b544;
    pfVar2[1] = fVar20;
    fVar21 = 0.0;
    if (fVar20 < 0.0) goto LAB_019848b4;
  }
  else {
    fVar20 = (pfVar2[1] + DAT_02391090) / DAT_02394234;
    pfVar2[1] = fVar20;
    fVar21 = DAT_02390124;
    if (DAT_02390124 < fVar20) {
LAB_019848b4:
      pfVar2[1] = fVar21;
    }
  }
  if (pcVar1[2] == '\0') {
    fVar20 = pfVar2[2] * DAT_02394234 + _DAT_0241b544;
    pfVar2[2] = fVar20;
    fVar21 = 0.0;
    if (fVar20 < 0.0) goto LAB_019848ea;
  }
  else {
    fVar20 = (pfVar2[2] + DAT_02391090) / DAT_02394234;
    pfVar2[2] = fVar20;
    fVar21 = DAT_02390124;
    if (DAT_02390124 < fVar20) {
LAB_019848ea:
      pfVar2[2] = fVar21;
    }
  }
  if (pcVar1[3] == '\0') {
    fVar20 = pfVar2[3] * DAT_02394234 + _DAT_0241b544;
    pfVar2[3] = fVar20;
    fVar21 = 0.0;
    if (fVar20 < 0.0) goto LAB_01984920;
  }
  else {
    fVar20 = (pfVar2[3] + DAT_02391090) / DAT_02394234;
    pfVar2[3] = fVar20;
    fVar21 = DAT_02390124;
    if (DAT_02390124 < fVar20) {
LAB_01984920:
      pfVar2[3] = fVar21;
    }
  }
  if (pcVar1[4] == '\0') {
    fVar20 = pfVar2[4] * DAT_02394234 + _DAT_0241b544;
    pfVar2[4] = fVar20;
    fVar21 = 0.0;
    if (fVar20 < 0.0) goto LAB_01984956;
  }
  else {
    fVar20 = (pfVar2[4] + DAT_02391090) / DAT_02394234;
    pfVar2[4] = fVar20;
    fVar21 = DAT_02390124;
    if (DAT_02390124 < fVar20) {
LAB_01984956:
      pfVar2[4] = fVar21;
    }
  }
  if (pcVar1[5] == '\0') {
    fVar20 = pfVar2[5] * DAT_02394234 + _DAT_0241b544;
    pfVar2[5] = fVar20;
    fVar21 = 0.0;
    if (fVar20 < 0.0) goto LAB_0198498c;
  }
  else {
    fVar20 = (pfVar2[5] + DAT_02391090) / DAT_02394234;
    pfVar2[5] = fVar20;
    fVar21 = DAT_02390124;
    if (DAT_02390124 < fVar20) {
LAB_0198498c:
      pfVar2[5] = fVar21;
    }
  }
  if (pcVar1[6] == '\0') {
    fVar20 = pfVar2[6] * DAT_02394234 + _DAT_0241b544;
    pfVar2[6] = fVar20;
    fVar21 = 0.0;
    if (fVar20 < 0.0) goto LAB_019849c2;
  }
  else {
    fVar20 = (pfVar2[6] + DAT_02391090) / DAT_02394234;
    pfVar2[6] = fVar20;
    fVar21 = DAT_02390124;
    if (DAT_02390124 < fVar20) {
LAB_019849c2:
      pfVar2[6] = fVar21;
    }
  }
  if (pcVar1[7] == '\0') {
    fVar20 = pfVar2[7] * DAT_02394234 + _DAT_0241b544;
    pfVar2[7] = fVar20;
    fVar21 = 0.0;
    if (fVar20 < 0.0) goto LAB_019849f8;
  }
  else {
    fVar20 = (pfVar2[7] + DAT_02391090) / DAT_02394234;
    pfVar2[7] = fVar20;
    fVar21 = DAT_02390124;
    if (DAT_02390124 < fVar20) {
LAB_019849f8:
      pfVar2[7] = fVar21;
    }
  }
  if (pcVar1[8] == '\0') {
    fVar20 = pfVar2[8] * DAT_02394234 + _DAT_0241b544;
    pfVar2[8] = fVar20;
    fVar21 = 0.0;
    if (fVar20 < 0.0) goto LAB_01984a2e;
  }
  else {
    fVar20 = (pfVar2[8] + DAT_02391090) / DAT_02394234;
    pfVar2[8] = fVar20;
    fVar21 = DAT_02390124;
    if (DAT_02390124 < fVar20) {
LAB_01984a2e:
      pfVar2[8] = fVar21;
    }
  }
  if (pcVar1[9] == '\0') {
    fVar20 = pfVar2[9] * DAT_02394234 + _DAT_0241b544;
    pfVar2[9] = fVar20;
    fVar21 = 0.0;
    if (fVar20 < 0.0) goto LAB_01984a64;
  }
  else {
    fVar20 = (pfVar2[9] + DAT_02391090) / DAT_02394234;
    pfVar2[9] = fVar20;
    fVar21 = DAT_02390124;
    if (DAT_02390124 < fVar20) {
LAB_01984a64:
      pfVar2[9] = fVar21;
    }
  }
  if (pcVar1[10] == '\0') {
    fVar20 = pfVar2[10] * DAT_02394234 + _DAT_0241b544;
    pfVar2[10] = fVar20;
    fVar21 = 0.0;
    if (fVar20 < 0.0) goto LAB_01984a9a;
  }
  else {
    fVar20 = (pfVar2[10] + DAT_02391090) / DAT_02394234;
    pfVar2[10] = fVar20;
    fVar21 = DAT_02390124;
    if (DAT_02390124 < fVar20) {
LAB_01984a9a:
      pfVar2[10] = fVar21;
    }
  }
  if (pcVar1[0xb] == '\0') {
    fVar20 = pfVar2[0xb] * DAT_02394234 + _DAT_0241b544;
    pfVar2[0xb] = fVar20;
    fVar21 = 0.0;
    if (0.0 <= fVar20) goto LAB_01984ad5;
  }
  else {
    fVar20 = (pfVar2[0xb] + DAT_02391090) / DAT_02394234;
    pfVar2[0xb] = fVar20;
    fVar21 = DAT_02390124;
    if (fVar20 <= DAT_02390124) goto LAB_01984ad5;
  }
  pfVar2[0xb] = fVar21;
LAB_01984ad5:
  lVar19 = DAT_028b0f68;
  lVar18 = DAT_028b0f58;
  pfVar2 = *(float **)(DAT_028b0f58 + 0x10);
  pfVar3 = *(float **)(DAT_028b0f68 + 0x10);
  bVar6 = true;
  if ((*pfVar2 == *pfVar3) && (!NAN(*pfVar2) && !NAN(*pfVar3))) {
    if ((pfVar2[1] == pfVar3[1]) && (!NAN(pfVar2[1]) && !NAN(pfVar3[1]))) {
      if ((pfVar2[2] == pfVar3[2]) && (!NAN(pfVar2[2]) && !NAN(pfVar3[2]))) {
        if ((pfVar2[3] == pfVar3[3]) && (!NAN(pfVar2[3]) && !NAN(pfVar3[3]))) {
          if ((pfVar2[4] == pfVar3[4]) && (!NAN(pfVar2[4]) && !NAN(pfVar3[4]))) {
            if ((pfVar2[5] == pfVar3[5]) && (!NAN(pfVar2[5]) && !NAN(pfVar3[5]))) {
              if ((pfVar2[6] == pfVar3[6]) && (!NAN(pfVar2[6]) && !NAN(pfVar3[6]))) {
                if ((pfVar2[7] == pfVar3[7]) && (!NAN(pfVar2[7]) && !NAN(pfVar3[7]))) {
                  if ((pfVar2[8] == pfVar3[8]) && (!NAN(pfVar2[8]) && !NAN(pfVar3[8]))) {
                    if ((pfVar2[9] == pfVar3[9]) && (!NAN(pfVar2[9]) && !NAN(pfVar3[9]))) {
                      if ((pfVar2[10] == pfVar3[10]) && (!NAN(pfVar2[10]) && !NAN(pfVar3[10]))) {
                        if ((pfVar2[0xb] == pfVar3[0xb]) && (!NAN(pfVar2[0xb]) && !NAN(pfVar3[0xb]))
                           ) {
                          bVar6 = false;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_00d50b00();
  puVar4 = *(undefined4 **)(lVar19 + 0x10);
  puVar5 = *(undefined4 **)(lVar18 + 0x10);
  uVar7 = *puVar5;
  uVar8 = puVar5[1];
  uVar9 = puVar5[2];
  uVar10 = puVar5[3];
  uVar11 = puVar5[4];
  uVar12 = puVar5[5];
  uVar13 = puVar5[6];
  uVar14 = puVar5[7];
  uVar15 = puVar5[9];
  uVar16 = puVar5[10];
  uVar17 = puVar5[0xb];
  puVar4[8] = puVar5[8];
  puVar4[9] = uVar15;
  puVar4[10] = uVar16;
  puVar4[0xb] = uVar17;
  puVar4[4] = uVar11;
  puVar4[5] = uVar12;
  puVar4[6] = uVar13;
  puVar4[7] = uVar14;
  *puVar4 = uVar7;
  puVar4[1] = uVar8;
  puVar4[2] = uVar9;
  puVar4[3] = uVar10;
  FUN_00d50b20();
  if (!bVar6) {
    return;
  }
  DAT_028b0f90 = 0;
                    /* WARNING: Could not recover jumptable at 0x01984be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*this + 0x620))();
  return;
}




// ==================================================
// @00f45bb0 (1427 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  short *psVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  void *pvVar16;
  int unaff_ESI;
  uint uVar17;
  ulonglong uVar18;
  longlong *this;
  size_t sVar19;
  void *pvVar20;
  bool bVar21;
  
LAB_00f45bde:
  do {
    if (*(uint *)((longlong)this + 0xb4) < 0x106) {
      FUN_00f439b0();
      sVar19 = (size_t)param_3;
      uVar12 = *(uint *)((longlong)this + 0xb4);
      if ((uVar12 < 0x106) && (unaff_ESI == 0)) {
        return 0;
      }
      if (uVar12 == 0) {
        uVar13 = (ulonglong)*(uint *)((longlong)this + 0xac);
        uVar12 = 2;
        if (uVar13 < 2) {
          uVar12 = *(uint *)((longlong)this + 0xac);
        }
        *(uint *)((longlong)this + 0x172c) = uVar12;
        if (unaff_ESI == 4) {
          pvVar16 = (void *)((longlong)&MACH_HEADER.magic + 1);
          FUN_00f4b740(1,uVar13 - this[0x13]);
          this[0x13] = (ulonglong)*(uint *)((longlong)this + 0xac);
          lVar5 = *this;
          lVar6 = *(longlong *)(lVar5 + 0x38);
          FUN_00f4b540();
          uVar12 = *(uint *)(lVar6 + 0x28);
          if (*(uint *)(lVar5 + 0x20) < *(uint *)(lVar6 + 0x28)) {
            uVar12 = *(uint *)(lVar5 + 0x20);
          }
          if (uVar12 != 0) {
            pvVar20 = (void *)(ulonglong)uVar12;
            _memcpy(pvVar16,pvVar20,sVar19);
            *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar5 + 0x18) + (longlong)pvVar20;
            *(longlong *)(lVar6 + 0x20) = *(longlong *)(lVar6 + 0x20) + (longlong)pvVar20;
            *(longlong *)(lVar5 + 0x28) = *(longlong *)(lVar5 + 0x28) + (longlong)pvVar20;
            *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) - uVar12;
            plVar1 = (longlong *)(lVar6 + 0x28);
            *plVar1 = *plVar1 - (longlong)pvVar20;
            if (*plVar1 == 0) {
              *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar6 + 0x10);
            }
          }
          return 3 - (uint)(*(int *)(*this + 0x20) == 0);
        }
        if (*(int *)((longlong)this + 0x170c) != 0) {
          pvVar16 = (void *)0x0;
          FUN_00f4b740(0,uVar13 - this[0x13]);
          this[0x13] = (ulonglong)*(uint *)((longlong)this + 0xac);
          lVar5 = *this;
          lVar6 = *(longlong *)(lVar5 + 0x38);
          FUN_00f4b540();
          uVar12 = *(uint *)(lVar6 + 0x28);
          if (*(uint *)(lVar5 + 0x20) < *(uint *)(lVar6 + 0x28)) {
            uVar12 = *(uint *)(lVar5 + 0x20);
          }
          if (uVar12 != 0) {
            pvVar20 = (void *)(ulonglong)uVar12;
            _memcpy(pvVar16,pvVar20,sVar19);
            *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar5 + 0x18) + (longlong)pvVar20;
            *(longlong *)(lVar6 + 0x20) = *(longlong *)(lVar6 + 0x20) + (longlong)pvVar20;
            *(longlong *)(lVar5 + 0x28) = *(longlong *)(lVar5 + 0x28) + (longlong)pvVar20;
            *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) - uVar12;
            plVar1 = (longlong *)(lVar6 + 0x28);
            *plVar1 = *plVar1 - (longlong)pvVar20;
            if (*plVar1 == 0) {
              *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar6 + 0x10);
            }
          }
          if (*(int *)(*this + 0x20) == 0) {
            return 0;
          }
        }
        return 1;
      }
      if (2 < uVar12) goto LAB_00f45c18;
LAB_00f45c7e:
      uVar12 = *(uint *)(this + 0x14);
      if (2 < uVar12) goto LAB_00f45c8e;
LAB_00f45e88:
      bVar9 = *(byte *)(this[0xc] + (ulonglong)*(uint *)((longlong)this + 0xac));
      uVar12 = *(uint *)((longlong)this + 0x170c);
      *(uint *)((longlong)this + 0x170c) = uVar12 + 1;
      *(undefined1 *)(this[0x2e0] + (ulonglong)uVar12) = 0;
      uVar12 = *(uint *)((longlong)this + 0x170c);
      *(uint *)((longlong)this + 0x170c) = uVar12 + 1;
      *(undefined1 *)(this[0x2e0] + (ulonglong)uVar12) = 0;
      uVar12 = *(uint *)((longlong)this + 0x170c);
      *(uint *)((longlong)this + 0x170c) = uVar12 + 1;
      *(byte *)(this[0x2e0] + (ulonglong)uVar12) = bVar9;
      psVar2 = (short *)((longlong)this + (ulonglong)bVar9 * 4 + 0xd4);
      *psVar2 = *psVar2 + 1;
      *(int *)((longlong)this + 0xb4) = *(int *)((longlong)this + 0xb4) + -1;
      uVar12 = *(int *)((longlong)this + 0xac) + 1;
      uVar13 = (ulonglong)uVar12;
      *(uint *)((longlong)this + 0xac) = uVar12;
      if (*(int *)((longlong)this + 0x170c) != (int)this[0x2e2]) goto LAB_00f45bde;
    }
    else {
LAB_00f45c18:
      uVar12 = *(uint *)((longlong)this + 0xac);
      param_3 = this[0xe];
      uVar14 = ((uint)*(byte *)(this[0xc] + (ulonglong)(uVar12 + 2)) ^
               (int)this[0x10] << (*(byte *)(this + 0x12) & 0x1f)) &
               *(uint *)((longlong)this + 0x8c);
      *(uint *)(this + 0x10) = uVar14;
      lVar5 = this[0xf];
      uVar3 = *(ushort *)(lVar5 + (ulonglong)uVar14 * 2);
      *(ushort *)(param_3 + (ulonglong)(*(uint *)(this + 0xb) & uVar12) * 2) = uVar3;
      *(short *)(lVar5 + (ulonglong)uVar14 * 2) = (short)uVar12;
      if ((uVar3 == 0) || ((int)this[10] - 0x106U < uVar12 - uVar3)) goto LAB_00f45c7e;
      uVar12 = FUN_00f46910();
      *(uint *)(this + 0x14) = uVar12;
      if (uVar12 < 3) goto LAB_00f45e88;
LAB_00f45c8e:
      bVar9 = (char)uVar12 - 3;
      iVar15 = *(int *)((longlong)this + 0xac) - (int)this[0x16];
      uVar12 = *(uint *)((longlong)this + 0x170c);
      *(uint *)((longlong)this + 0x170c) = uVar12 + 1;
      *(char *)(this[0x2e0] + (ulonglong)uVar12) = (char)iVar15;
      uVar12 = *(uint *)((longlong)this + 0x170c);
      *(uint *)((longlong)this + 0x170c) = uVar12 + 1;
      *(char *)(this[0x2e0] + (ulonglong)uVar12) = (char)((uint)iVar15 >> 8);
      uVar12 = *(uint *)((longlong)this + 0x170c);
      *(uint *)((longlong)this + 0x170c) = uVar12 + 1;
      *(byte *)(this[0x2e0] + (ulonglong)uVar12) = bVar9;
      psVar2 = (short *)((longlong)this + (ulonglong)(byte)(&DAT_023e8160)[bVar9] * 4 + 0x4d8);
      *psVar2 = *psVar2 + 1;
      uVar14 = iVar15 - 1U & 0xffff;
      uVar12 = (uVar14 >> 7) + 0x100;
      if (uVar14 < 0x100) {
        uVar12 = uVar14;
      }
      psVar2 = (short *)((longlong)this + (ulonglong)(byte)(&DAT_023e7f60)[uVar12] * 4 + 0x9c8)
      ;
      *psVar2 = *psVar2 + 1;
      uVar12 = *(uint *)((longlong)this + 0x170c);
      param_3 = (ulonglong)uVar12;
      uVar14 = *(uint *)(this + 0x2e2);
      uVar11 = *(uint *)(this + 0x14);
      uVar10 = *(int *)((longlong)this + 0xb4) - uVar11;
      *(uint *)((longlong)this + 0xb4) = uVar10;
      if ((*(uint *)(this + 0x18) < uVar11) || (uVar10 < 3)) {
        iVar15 = *(int *)((longlong)this + 0xac);
        uVar10 = iVar15 + uVar11;
        uVar13 = (ulonglong)uVar10;
        *(uint *)((longlong)this + 0xac) = uVar10;
        *(undefined4 *)(this + 0x14) = 0;
        uVar10 = (uint)*(byte *)(this[0xc] + uVar13);
        *(uint *)(this + 0x10) = uVar10;
        *(uint *)(this + 0x10) =
             ((uint)*(byte *)(this[0xc] + (ulonglong)(iVar15 + uVar11 + 1)) ^
             uVar10 << (*(byte *)(this + 0x12) & 0x1f)) & *(uint *)((longlong)this + 0x8c)
        ;
      }
      else {
        *(uint *)(this + 0x14) = uVar11 - 1;
        lVar8 = this[0x12];
        lVar5 = this[0xc];
        uVar10 = *(uint *)((longlong)this + 0x8c);
        lVar6 = this[0xf];
        lVar7 = this[0xe];
        uVar4 = *(uint *)(this + 0xb);
        uVar18 = (ulonglong)*(uint *)(this + 0x10);
        iVar15 = uVar11 - 2;
        uVar13 = (ulonglong)(*(int *)((longlong)this + 0xac) + 1);
        do {
          uVar11 = (uint)uVar13;
          *(uint *)((longlong)this + 0xac) = uVar11;
          uVar17 = uVar10 & ((uint)*(byte *)(lVar5 + (ulonglong)(uVar11 + 2)) ^
                            (int)uVar18 << ((byte)(int)lVar8 & 0x1f));
          uVar18 = (ulonglong)uVar17;
          *(uint *)(this + 0x10) = uVar17;
          *(undefined2 *)(lVar7 + (ulonglong)(uVar4 & uVar11) * 2) =
               *(undefined2 *)(lVar6 + uVar18 * 2);
          *(short *)(lVar6 + uVar18 * 2) = (short)uVar13;
          *(int *)(this + 0x14) = iVar15;
          uVar13 = (ulonglong)(uVar11 + 1);
          bVar21 = iVar15 != 0;
          iVar15 = iVar15 + -1;
        } while (bVar21);
        *(uint *)((longlong)this + 0xac) = uVar11 + 1;
      }
      if (uVar12 != uVar14) goto LAB_00f45bde;
    }
    pvVar16 = (void *)0x0;
    FUN_00f4b740(0,uVar13 - this[0x13]);
    this[0x13] = (ulonglong)*(uint *)((longlong)this + 0xac);
    lVar5 = *this;
    lVar6 = *(longlong *)(lVar5 + 0x38);
    FUN_00f4b540();
    uVar12 = *(uint *)(lVar6 + 0x28);
    if (*(uint *)(lVar5 + 0x20) < *(uint *)(lVar6 + 0x28)) {
      uVar12 = *(uint *)(lVar5 + 0x20);
    }
    pvVar20 = (void *)(ulonglong)uVar12;
    if (uVar12 != 0) {
      _memcpy(pvVar16,pvVar20,(size_t)param_3);
      *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar5 + 0x18) + (longlong)pvVar20;
      *(longlong *)(lVar6 + 0x20) = *(longlong *)(lVar6 + 0x20) + (longlong)pvVar20;
      *(longlong *)(lVar5 + 0x28) = *(longlong *)(lVar5 + 0x28) + (longlong)pvVar20;
      *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) - uVar12;
      plVar1 = (longlong *)(lVar6 + 0x28);
      *plVar1 = *plVar1 - (longlong)pvVar20;
      if (*plVar1 == 0) {
        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar6 + 0x10);
      }
    }
    if (*(int *)(*this + 0x20) == 0) {
      return 0;
    }
  } while( true );
}




// ==================================================
// @01b83fb0 (1394 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *arg1;
  longlong *this;
  longlong **pplVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
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
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  pplVar5 = &local_40;
  local_88 = param_2;
  (**(code **)(*this + 0x640))();
  plVar1 = local_40;
  uVar6 = FUN_00209700();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar6 = extraout_XMM0_Da;
    if (cVar4 != '\0') goto LAB_01b84014;
  }
  pplVar5 = (longlong **)&DAT_02802688;
LAB_01b84014:
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  lVar3 = DAT_027e1fb0;
  lVar2 = DAT_02724b90;
  if (plVar1 == (longlong *)0x0) {
    if (param_1 == '\0') {
      FUN_01ab5990();
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      FUN_01d488d0();
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01ab4fd0();
      local_60 = local_40;
      local_58 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_58 = '\x01';
      FUN_01d488d0();
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_c8 = *local_88;
    local_c0 = '\0';
    (**(code **)(*(longlong *)*arg1 + 0x3a0))();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01ab4fd0();
    local_98 = local_40;
    local_90 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_90 = '\x01';
    FUN_01d488d0();
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_b8 = *local_88;
    local_b0 = '\0';
    (**(code **)(*(longlong *)*arg1 + 0x3a8))();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (param_1 == '\0') {
      if (DAT_027e1fb0 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_f8 = lVar3;
      local_f0 = '\x01';
      (**(code **)(*plVar1 + 0x3b0))(uVar6,&local_f8);
      local_70 = local_40;
      local_68 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_68 = '\x01';
      FUN_01d488d0();
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (DAT_02724b90 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_108 = lVar2;
      local_100 = '\x01';
      (**(code **)(*plVar1 + 0x3b0))(uVar6,&local_108);
      local_80 = local_40;
      local_78 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_78 = '\x01';
      FUN_01d488d0();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
    }
    local_e8 = *local_88;
    local_e0 = '\0';
    (**(code **)(*(longlong *)*arg1 + 0x3a0))();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01cfc6a0(DAT_02394288);
    local_a8 = local_40;
    local_a0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_a0 = '\x01';
    FUN_01d488d0();
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40(DAT_02390124);
    local_d8 = *local_88;
    local_d0 = '\0';
    (**(code **)(*(longlong *)*arg1 + 0x3a8))();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01af6ab0 (1345 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  pthread_key_t pVar6;
  char cVar7;
  int iVar8;
  void *pvVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *this;
  longlong *plVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar31;
  uint uVar32;
  undefined4 in_XMM1_Dc;
  uint uVar33;
  undefined4 in_XMM1_Dd;
  uint uVar34;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  float local_58;
  uint uStack_54;
  float fStack_50;
  uint uStack_4c;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  longlong *local_38;
  char local_30;
  
  uVar31 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar21 = (undefined4)param_2;
  FUN_01ad3320();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar15 = FUN_01a1da00();
  FUN_01e3f820();
  FUN_01ad3cb0();
  if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  *(undefined1 *)((longlong)this + 0x19c) = 0;
  if (this[0x34] != 0) {
    this[0x34] = 0;
    FUN_00d50b20();
  }
  uVar13 = (**(code **)(*this + 0x920))();
  *(undefined4 *)(this + 0x33) = uVar13;
  pvVar9 = _pthread_getspecific(param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar13 = FUN_017423e0();
  *(undefined4 *)(this + 0x35) = uVar13;
  pvVar9 = _pthread_getspecific(param_1);
  plVar12 = local_38;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar12 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  uVar13 = (**(code **)(*plVar12 + 0x3a0))();
  *(undefined4 *)((longlong)this + 0x1ac) = uVar13;
  uVar16 = (**(code **)(*this + 0x918))();
  FUN_01adad50();
  cVar7 = FUN_00d05410();
  local_58 = (float)uVar16;
  fVar14 = local_58;
  uStack_54 = (uint)((ulonglong)uVar16 >> 0x20);
  fStack_50 = (float)extraout_XMM0_Qb_00;
  uStack_4c = (uint)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  auVar18._0_4_ = _DAT_023945e0 & (uint)local_58;
  auVar18._4_4_ = _UNK_023945e4 & uStack_54;
  auVar18._8_4_ = _UNK_023945e8 & (uint)fStack_50;
  auVar18._12_4_ = _UNK_023945ec & uStack_4c;
  auVar17._4_4_ = _UNK_023945f4;
  auVar17._0_4_ = _DAT_023945f0;
  auVar17._8_4_ = _UNK_023945f8;
  auVar17._12_4_ = _UNK_023945fc;
  auVar26._4_12_ = SUB1612(auVar18 | auVar17,4);
  auVar26._0_4_ = SUB164(auVar18 | auVar17,0) + local_58;
  auVar17 = roundss(auVar26,auVar26,0xb);
  local_58 = auVar17._0_4_;
  if (cVar7 == '\0') {
    if (*(int *)((longlong)this + 0x284) != 0) {
      uVar16 = FUN_01e3f820();
      iVar8 = *(int *)((longlong)this + 0x284);
      fVar22 = fVar14;
      uVar32 = uStack_54;
      uVar33 = (uint)fStack_50;
      uVar34 = uStack_4c;
      if (iVar8 == 3) {
        FUN_01e3f820();
        local_48._4_4_ = uVar32;
        local_48._0_4_ = fVar22;
        fStack_40 = (float)uVar33;
        fStack_3c = (float)uVar34;
        _local_48 = blendps(_local_48,_DAT_0241c700,0xd);
        iVar8 = *(int *)((longlong)this + 0x284);
        pVar6 = param_1;
        if (iVar8 == 1) goto LAB_01af6cd0;
LAB_01af6ccc:
        param_1 = pVar6;
        if (iVar8 == 0) goto LAB_01af6cd0;
        FUN_01e3f820();
        if (*(int *)((longlong)this + 0x284) == 3) {
          FUN_01e3f820();
        }
        auVar5._4_4_ = uVar32;
        auVar5._0_4_ = fVar22;
        auVar5._8_4_ = uVar33;
        auVar5._12_4_ = uVar34;
        auVar35 = blendps(auVar5,_DAT_0241c710,0xd);
      }
      else {
        param_1 = 0x23dccec;
        _fStack_40 = 0;
        local_48 = (undefined1  [8])DAT_023dccf4;
        pVar6 = 0x23dccec;
        if (iVar8 != 1) goto LAB_01af6ccc;
LAB_01af6cd0:
        auVar35._8_8_ = 0;
        auVar35._0_8_ = DAT_023dccf4;
      }
      auVar4._8_8_ = extraout_XMM0_Qb_01;
      auVar4._0_8_ = uVar16;
      auVar23._0_4_ = (float)local_48._0_4_ + (float)uVar16 + auVar35._0_4_;
      auVar23._4_4_ = (float)local_48._4_4_ + (float)((ulonglong)uVar16 >> 0x20) + auVar35._4_4_;
      auVar23._8_4_ = fStack_40 + (float)extraout_XMM0_Qb_01 + auVar35._8_4_;
      auVar23._12_4_ = fStack_3c + (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20) + auVar35._12_4_;
      blendps(auVar23,auVar4,2);
      auVar3._4_4_ = uStack_54;
      auVar3._0_4_ = fVar14;
      auVar3._8_4_ = fStack_50;
      auVar3._12_4_ = uStack_4c;
      blendps(auVar3,_DAT_0241c720,0xd);
    }
    cVar7 = FUN_00d05410();
    if (cVar7 != '\0') goto LAB_01af6d42;
    local_78 = (float)uVar15;
    uStack_74 = (uint)((ulonglong)uVar15 >> 0x20);
    uStack_70 = (uint)extraout_XMM0_Qb;
    uStack_6c = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
    auVar28._0_4_ = (uint)(local_78 * DAT_02390438) & _DAT_023945e0;
    auVar28._4_4_ = uStack_74 & _UNK_023945e4;
    auVar28._8_4_ = uStack_70 & _UNK_023945e8;
    auVar28._12_4_ = uStack_6c & _UNK_023945ec;
    auVar29._4_12_ = SUB1612(auVar28 | ZEXT416(DAT_02394dc8),4);
    auVar29._0_4_ = SUB164(auVar28 | ZEXT416(DAT_02394dc8),0) + local_78 * DAT_02390438;
    auVar18 = roundss(auVar29,auVar29,0xb);
    fVar14 = DAT_02392fd8;
    if (auVar18._0_4_ <= DAT_02392fd8) {
      fVar14 = auVar18._0_4_;
    }
    auVar18 = ZEXT416((uint)((float)(_DAT_023945e0 & (uint)(fVar14 * DAT_0239011c) | DAT_02394dc8) +
                            fVar14 * DAT_0239011c));
    auVar18 = roundss(auVar18,auVar18,0xb);
    fVar14 = auVar18._0_4_;
    auVar30._4_12_ = auVar17._4_12_;
    auVar30._0_4_ = local_58 - fVar14;
    auVar20._4_12_ = auVar18._4_12_;
    auVar20._0_4_ = fVar14 + fVar14;
  }
  else {
LAB_01af6d42:
    pvVar9 = _pthread_getspecific(param_1);
    plVar12 = local_38;
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar12 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar12 + 0x3a0))();
    uVar15 = (**(code **)(*this + 0x918))();
    pvVar9 = _pthread_getspecific(param_1);
    plVar12 = local_38;
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar12 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar12 + 0x3a0))();
    uVar16 = (**(code **)(*this + 0x918))();
    local_78 = (float)uVar15;
    uStack_74 = (uint)((ulonglong)uVar15 >> 0x20);
    uStack_70 = (uint)extraout_XMM0_Qb_02;
    uStack_6c = (uint)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
    auVar24._0_4_ = _DAT_023945e0 & (uint)local_78;
    auVar24._4_4_ = _UNK_023945e4 & uStack_74;
    auVar24._8_4_ = _UNK_023945e8 & uStack_70;
    auVar24._12_4_ = _UNK_023945ec & uStack_6c;
    auVar1._4_4_ = _UNK_023945f4;
    auVar1._0_4_ = _DAT_023945f0;
    auVar1._8_4_ = _UNK_023945f8;
    auVar1._12_4_ = _UNK_023945fc;
    auVar25._4_12_ = SUB1612(auVar24 | auVar1,4);
    auVar25._0_4_ = SUB164(auVar24 | auVar1,0) + local_78;
    auVar26 = roundss(auVar25,auVar25,0xb);
    auVar36._0_4_ = ~_DAT_02390140 & (uint)(float)uVar16;
    auVar36._4_4_ = ~_UNK_02390144 & (uint)((ulonglong)uVar16 >> 0x20);
    auVar36._8_4_ = ~_UNK_02390148 & (uint)extraout_XMM0_Qb_03;
    auVar36._12_4_ = ~_UNK_0239014c & (uint)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
    auVar36 = auVar36 | ZEXT416(DAT_02394dc8 & _DAT_02390140);
    auVar37._4_12_ = auVar36._4_12_;
    auVar37._0_4_ = auVar36._0_4_ + (float)uVar16;
    auVar18 = roundss(ZEXT816(0),auVar37,0xb);
    auVar18 = insertps(auVar26,auVar18,0x10);
    fStack_50 = auVar17._8_4_;
    auVar19._0_4_ = (local_58 + auVar18._0_4_) * _DAT_023945d0;
    auVar19._4_4_ = (local_58 + auVar18._4_4_) * _UNK_023945d4;
    auVar19._8_4_ = (fStack_50 + auVar18._8_4_) * _UNK_023945d8;
    auVar19._12_4_ = (fStack_50 + auVar18._12_4_) * _UNK_023945dc;
    auVar27._0_4_ = (float)(_DAT_023945e0 & (uint)auVar19._0_4_ | _DAT_023945f0) + auVar19._0_4_;
    auVar27._4_4_ = (float)(_UNK_023945e4 & (uint)auVar19._4_4_ | _UNK_023945f4) + auVar19._4_4_;
    auVar27._8_4_ = (float)(_UNK_023945e8 & (uint)auVar19._8_4_ | _UNK_023945f8) + auVar19._8_4_;
    auVar27._12_4_ = (float)(_UNK_023945ec & (uint)auVar19._12_4_ | _UNK_023945fc) + auVar19._12_4_;
    auVar17 = roundps(auVar19,auVar27,0xb);
    fVar14 = auVar17._4_4_;
    auVar30._4_4_ = fVar14;
    auVar30._0_4_ = fVar14;
    auVar30._8_4_ = auVar17._12_4_;
    auVar30._12_4_ = auVar17._12_4_;
    auVar20._4_12_ = auVar17._4_12_;
    auVar20._0_4_ = auVar17._0_4_ - fVar14;
  }
  *(undefined4 *)((longlong)this + 0x194) = 0xfff0bdc0;
  insertps(auVar30,auVar30,0x1d);
  auVar2._4_4_ = uVar31;
  auVar2._0_4_ = uVar21;
  auVar2._8_4_ = in_XMM1_Dc;
  auVar2._12_4_ = in_XMM1_Dd;
  insertps(auVar2,auVar20,0x10);
  cVar7 = FUN_00d05410();
  if (cVar7 == '\0') goto LAB_01af6fcd;
  *(int *)((longlong)this + 0x194) = (int)this[0x35];
  pvVar9 = _pthread_getspecific(param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01740240();
  plVar12 = (longlong *)this[0x34];
  plVar11 = plVar12;
  if (plVar12 != local_38) {
    plVar11 = local_38;
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        plVar11 = (longlong *)0x0;
        goto LAB_01af6f4a;
      }
      FUN_00d50b00();
      plVar12 = (longlong *)this[0x34];
      this[0x34] = (longlong)local_38;
    }
    else {
      local_30 = '\0';
LAB_01af6f4a:
      this[0x34] = (longlong)plVar11;
    }
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar11 = local_38;
    }
  }
  if ((local_30 != '\0') && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((this[0x34] != 0) &&
     (*(undefined1 *)((longlong)this + 0x19c) = 1, local_38 == (longlong *)0x0)) {
    this[0x34] = 0;
    FUN_00d50b20();
  }
LAB_01af6fcd:
  if (local_38 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01430250 (1331 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  longlong **pplVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *this;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_80;
  char local_78 [8];
  longlong *local_70;
  char local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  undefined4 local_3c;
  char local_38 [8];
  
  lVar3 = this[0x1d];
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*this + 0x650))();
  local_48 = local_70;
  if (local_70 == (longlong *)0x0) {
    local_3c = 1;
    local_48 = (longlong *)0x0;
  }
  else {
    if (local_68 == '\0') {
      FUN_00d50b00();
      local_3c = 0;
      if ((local_68 == '\0') || (local_70 == (longlong *)0x0)) goto LAB_014302fc;
      FUN_00d50b20();
    }
    else {
      local_68 = '\0';
    }
    local_3c = 0;
  }
LAB_014302fc:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00d216c0();
  if (local_48 != (longlong *)0x0) {
    local_68 = '\0';
    local_70 = (longlong *)0x0;
    local_60 = local_48;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar7 = -local_58._4_4_;
        }
        else {
          iVar7 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar7);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar7 = 0;
        }
        local_58 = CONCAT44(iVar7,(int)local_58);
      }
      lVar3 = (longlong)(int)local_58;
      iVar7 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar7);
      if (*(int *)((longlong)local_60 + 0xc) <= iVar7) break;
      plVar1 = *(longlong **)(local_60[2] + 8 + lVar3 * 8);
      local_70 = plVar1;
      local_80 = plVar1;
      if ((DAT_027b2588 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        _DAT_027b24d8 = FUN_00d4fe50();
        _DAT_027b24c0 = "MUSpectrumShaperDisplayInfo";
        _DAT_027b24c8 = 0x20;
        _DAT_027b24d0 = FUN_011b1f40;
        _DAT_027b24e0 = 0;
        uRam00000000027b24e8 = 0;
        _DAT_027b24f0 = 0;
        _DAT_027b2568 = 0;
        uRam00000000027b2570 = 0;
        _DAT_027b2578 = 0;
        DAT_027b257a = 1;
        _DAT_027b24f8 = 0;
        uRam00000000027b2500 = 0;
        _DAT_027b2508 = 0;
        uRam00000000027b2510 = 0;
        _DAT_027b2518 = 0;
        uRam00000000027b2520 = 0;
        _DAT_027b2528 = 0;
        uRam00000000027b2530 = 0;
        _DAT_027b2538 = 0;
        uRam00000000027b2540 = 0;
        _DAT_027b2548 = 0;
        uRam00000000027b2550 = 0;
        _DAT_027b2558 = 0;
        uRam00000000027b2560 = 0;
        DAT_027b2583 = 0;
        _DAT_027b257b = 0;
        ___cxa_guard_release();
      }
      pplVar5 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar5 = &local_80;
        if (cVar2 == '\0') {
          pplVar5 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar5 != (longlong *)0x0) {
        FUN_01415140();
        plVar1 = local_80;
        local_38[0] = local_78[0];
        pcVar4 = local_78;
        if (local_78[0] == '\0') {
          pcVar4 = local_38;
        }
        *pcVar4 = '\0';
        if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_014148f0();
        local_78[0] = '\0';
        local_80 = plVar1;
        FUN_00d21140();
        if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01431fb0();
  }
  for (uVar6 = (ulonglong)*(uint *)(this[0x1e] + 0xc); 0 < (int)uVar6; uVar6 = uVar6 - 1) {
    (**(code **)(**(longlong **)(*(longlong *)(this[0x1e] + 0x10) + -8 + uVar6 * 8) + 0x400))
              (param_1,param_2);
  }
  FUN_00e7b4e0();
  uVar8 = (**(code **)(*this + 0x408))();
  if (local_48 != (longlong *)0x0) {
    local_68 = 0;
    local_70 = (longlong *)0x0;
    local_60 = local_48;
    local_58._0_4_ = -1;
    local_58._4_4_ = 0;
    local_50 = 0;
    while( true ) {
      iVar7 = local_58._4_4_;
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          local_58._4_4_ = -local_58._4_4_;
        }
        else {
          local_58._0_4_ = (int)local_58 - local_58._4_4_;
          uVar8 = FUN_00d23690(uVar8,local_58._4_4_);
          local_50 = local_50 + iVar7;
          local_58._4_4_ = 0;
        }
      }
      lVar3 = (longlong)(int)local_58;
      local_58._0_4_ = (int)local_58 + 1;
      if (*(int *)((longlong)local_60 + 0xc) <= (int)local_58) break;
      plVar1 = *(longlong **)(local_60[2] + 8 + lVar3 * 8);
      local_70 = plVar1;
      local_80 = plVar1;
      if ((DAT_027b2588 == '\0') &&
         (iVar7 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_00, iVar7 != 0)) {
        _DAT_027b24d8 = FUN_00d4fe50();
        _DAT_027b24c0 = "MUSpectrumShaperDisplayInfo";
        _DAT_027b24c8 = 0x20;
        _DAT_027b24d0 = FUN_011b1f40;
        _DAT_027b24e0 = 0;
        uRam00000000027b24e8 = 0;
        _DAT_027b24f0 = 0;
        _DAT_027b2568 = 0;
        uRam00000000027b2570 = 0;
        _DAT_027b2578 = 0;
        DAT_027b257a = 1;
        _DAT_027b24f8 = 0;
        uRam00000000027b2500 = 0;
        _DAT_027b2508 = 0;
        uRam00000000027b2510 = 0;
        _DAT_027b2518 = 0;
        uRam00000000027b2520 = 0;
        _DAT_027b2528 = 0;
        uRam00000000027b2530 = 0;
        _DAT_027b2538 = 0;
        uRam00000000027b2540 = 0;
        _DAT_027b2548 = 0;
        uRam00000000027b2550 = 0;
        _DAT_027b2558 = 0;
        uRam00000000027b2560 = 0;
        DAT_027b2583 = 0;
        _DAT_027b257b = 0;
        uVar8 = ___cxa_guard_release();
      }
      pplVar5 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar5 = &local_80;
        uVar8 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          pplVar5 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar5 != (longlong *)0x0) {
        uVar8 = FUN_01415190();
      }
    }
    FUN_01431fb0();
    if ((char)local_3c == '\0') {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @01b62150 (1309 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  longlong **pplVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  longlong local_b8;
  char local_b0;
  longlong *local_40;
  char local_38;
  
  FUN_01b5e510();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return 0;
    }
    FUN_00d50b00();
    plVar8 = DAT_027e4cc8;
  }
  else {
    plVar8 = DAT_027e4cc8;
    if (local_40 == (longlong *)0x0) {
      return 0;
    }
  }
  DAT_027e4cc8 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar4 = FUN_015b7ba0();
  plVar2 = DAT_027e4cc0;
  if (iVar4 == 3) {
    if (DAT_027e4cc0 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    if (plVar8 == plVar2) {
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      bVar10 = plVar8 != (longlong *)0x0;
      plVar8 = plVar2;
      if (bVar10) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01ca6970();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01ca8220();
  local_38 = '\0';
  local_40 = plVar8;
  uVar5 = FUN_00d23d70();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = DAT_027e4cc0;
  if (((byte)uVar5 & param_2) == 0) goto LAB_01b62636;
  if (DAT_027e4cc0 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar8 + 0x50))();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar9 = DAT_027e4cc8;
  plVar1 = DAT_027e4cc0;
  if (cVar3 == '\0') {
    if (DAT_027e4cc8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    pplVar7 = &local_40;
    FUN_01cacbe0();
    plVar1 = local_40;
    FUN_011b2c10();
    if (plVar1 == (longlong *)0x0) {
LAB_01b6241d:
      pplVar7 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01b6241d;
    }
    plVar1 = *pplVar7;
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar7 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015bea90();
      FUN_00d50b20();
    }
    goto LAB_01b62636;
  }
  if (DAT_027e4cc0 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  pplVar7 = &local_40;
  FUN_01cacbe0();
  plVar9 = local_40;
  FUN_006ddb00();
  if (plVar9 == (longlong *)0x0) {
    pplVar7 = &DAT_02802688;
    plVar9 = DAT_02802688;
    if (DAT_02802690 == '\0') goto LAB_01b6245c;
LAB_01b623b4:
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') {
      pplVar7 = &DAT_02802688;
    }
    plVar9 = *pplVar7;
    if (*(char *)(pplVar7 + 1) != '\0') goto LAB_01b623b4;
LAB_01b6245c:
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017eca70();
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_015bea90();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_01b62636:
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return uVar5;
}




// ==================================================
// @014163e0 (1295 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  pthread_key_t pVar7;
  char *pcVar8;
  longlong *arg1;
  longlong local_e0;
  char local_d8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  longlong *local_58;
  undefined4 local_4c;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00d3ecc0();
  plVar6 = local_48;
  lVar4 = DAT_027c0df0;
  if (DAT_027c0df0 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar6 + 0x50))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') goto LAB_01416872;
  FUN_00d3ecf0();
  plVar6 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_78 = plVar6;
  FUN_00d3ed20();
  lVar4 = DAT_027c0df8;
  if (DAT_027c0df8 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  local_60 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_013fb420();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar4 = FUN_00e8b990();
  uVar5 = 0;
  if (lVar4 != 0) {
    uVar5 = FUN_00d50b00();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    uVar5 = FUN_00d50b20();
  }
  local_4c = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  if (lVar4 == 0) {
LAB_0141660d:
    local_58 = (longlong *)0x0;
    local_80 = 0;
  }
  else {
    FUN_00cb1f10();
    local_58 = local_48;
    param_1 = local_48;
    if (local_48 == (longlong *)0x0) goto LAB_0141660d;
    plVar6 = local_48;
    if (((local_40[0] == '\0') && (plVar6 = (longlong *)FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      plVar6 = (longlong *)FUN_00d50b20();
    }
    local_80 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
    FUN_00db3260();
    local_4c = 0;
  }
  FUN_013fb420();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01328c30();
  FUN_00d23310();
  plVar6 = local_48;
  pVar7 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_40[0]);
  pcVar8 = local_38;
  if (local_40[0] != '\0') {
    pcVar8 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar8 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc1d0();
  if ((local_38[0] != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_4c == '\0') {
    FUN_00db3270();
  }
  FUN_00d403d0();
  plVar6 = local_78;
  lVar1 = DAT_027c0e00;
  if (DAT_027c0e00 != 0) {
    FUN_00d50b00();
  }
  local_b0 = plVar6;
  local_a8 = '\0';
  local_a0 = 0;
  local_98 = '\0';
  FUN_00d40470(&local_a0,&local_b0,1,3);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_4c == '\0') {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_60 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01416872:
  local_90 = *arg1;
  local_88 = '\0';
  FUN_00d530a0();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0142ed20 (1270 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  uint *puVar6;
  longlong *arg1;
  undefined8 *this;
  undefined8 *puVar7;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  undefined8 *local_60;
  uint local_58 [2];
  longlong local_50;
  char local_48;
  char local_40;
  undefined7 uStack_3f;
  char local_38;
  
  if (*(int *)(arg1[0x1f] + 0xc) != 0) {
    FUN_00d23340();
    puVar6 = (uint *)&local_40;
    if ((char)local_58[0] != '\0') {
      puVar6 = local_58;
    }
    local_40 = (char)local_58[0];
    *(undefined1 *)puVar6 = 0;
    if (((char)local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 == '\0') && (local_60 != (undefined8 *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00d23740();
    *this = local_60;
    *(undefined1 *)(this + 1) = 1;
    return;
  }
  lVar1 = arg1[0x1d];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123f310();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  if ((char)local_58[0] == '\0') {
    if (local_60 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if (((char)local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_58[0] = local_58[0] & 0xffffff00;
  }
  if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar7 = local_60;
  if ((local_60 != (undefined8 *)0x0) && (iVar4 = FUN_00d8c7a0(), iVar4 != 0)) goto LAB_0142f16b;
  lVar1 = arg1[0x1d];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123f310();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012eb770();
  if (((char)local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_60 == (undefined8 *)0x0) goto LAB_0142f16b;
  lVar1 = arg1[0x1d];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123f310();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012eb770();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  local_58[0] = 1;
  local_48 = 0;
  if (local_90 != 0) {
    FUN_00d50b00();
  }
  local_50 = local_90;
  local_48 = '\x01';
  FUN_00d8cb40();
  puVar2 = (undefined8 *)CONCAT71(uStack_3f,local_40);
  if (local_60 == puVar2) {
LAB_0142f0ec:
    if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    puVar7 = puVar2;
    if (local_38 == '\0') {
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      if (local_60 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_0142f0ec;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    local_38 = '\0';
  }
  local_60 = &DAT_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_0142f16b:
  (**(code **)(*arg1 + 0x5d0))();
  if (local_60 == (undefined8 *)0x0) {
    cVar3 = '\0';
  }
  else {
    (**(code **)(*arg1 + 0x5d0))();
    cVar3 = (**(code **)(*(longlong *)CONCAT71(uStack_3f,local_40) + 0x420))();
    if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
      FUN_00d50b20();
    }
  }
  if (((char)local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
  }
  else {
    FUN_01430160();
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @017eb5e0 (1269 bytes) — logic_branch
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  
  FUN_006ddb00();
  FUN_00e87cb0();
  if (DAT_028af588 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028af550 = FUN_006ddb00();
      _DAT_028af548 = "setCanUseSpectrumShaper";
      _DAT_028af558 = 0;
      _DAT_028af560 = &DAT_027d4d18;
      _DAT_028af568 = FUN_017fa480;
      _DAT_028af570 = FUN_017ebb00;
      _DAT_028af578 = 0;
      uRam00000000028af580 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028af5d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028af598 = FUN_006ddb00();
      _DAT_028af590 = "setIsBypassed";
      _DAT_028af5a0 = 0;
      _DAT_028af5a8 = &DAT_027d4d18;
      _DAT_028af5b0 = FUN_017fa480;
      _DAT_028af5b8 = FUN_017ebb50;
      _DAT_028af5c0 = 0;
      uRam00000000028af5c8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028af618 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028af5e0 = FUN_006ddb00();
      _DAT_028af5d8 = "setSynthAmps";
      _DAT_028af5e8 = 0;
      _DAT_028af5f0 = &DAT_027d4d1b;
      _DAT_028af5f8 = FUN_017fa4a0;
      _DAT_028af600 = FUN_017ebba0;
      _DAT_028af608 = 0;
      uRam00000000028af610 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028af660 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028af628 = FUN_006ddb00();
      _DAT_028af620 = "setSynthPhases";
      _DAT_028af630 = 0;
      _DAT_028af638 = &DAT_027d4d1b;
      _DAT_028af640 = FUN_017fa4a0;
      _DAT_028af648 = FUN_017ebc00;
      _DAT_028af650 = 0;
      uRam00000000028af658 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028af6a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028af670 = FUN_006ddb00();
      _DAT_028af668 = "setEmphasizePow";
      _DAT_028af678 = 0;
      _DAT_028af680 = &DAT_027d4d1b;
      _DAT_028af688 = FUN_017fa4a0;
      _DAT_028af690 = FUN_017ebc60;
      _DAT_028af698 = 0;
      uRam00000000028af6a0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028af6f0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028af6b8 = FUN_006ddb00();
      _DAT_028af6b0 = "setClipLimit";
      _DAT_028af6c0 = 0;
      _DAT_028af6c8 = &DAT_027d4d1b;
      _DAT_028af6d0 = FUN_017fa4a0;
      _DAT_028af6d8 = FUN_017ebcc0;
      _DAT_028af6e0 = 0;
      uRam00000000028af6e8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028af738 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028af700 = FUN_006ddb00();
      _DAT_028af6f8 = "setAllGain";
      _DAT_028af708 = 0;
      _DAT_028af710 = &DAT_027d4d1b;
      _DAT_028af718 = FUN_017fa4a0;
      _DAT_028af720 = FUN_017ebd20;
      _DAT_028af728 = 0;
      uRam00000000028af730 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028af780 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028af748 = FUN_006ddb00();
      _DAT_028af740 = "setAmpDifferencePow";
      _DAT_028af750 = 0;
      _DAT_028af758 = &DAT_027d4d1b;
      _DAT_028af760 = FUN_017fa4a0;
      _DAT_028af768 = FUN_017ebd80;
      _DAT_028af770 = 0;
      uRam00000000028af778 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ==================================================
// @008e84b4 (1260 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  ulonglong uVar5;
  longlong *arg1;
  ulonglong uVar6;
  longlong this;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int local_44;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar7 = this + 0x81;
  lVar8 = this + 0x80;
  lVar9 = this + 0x7c;
  lVar10 = this + 0x78;
  lVar11 = this + 0x60;
  lVar12 = this + 0x58;
  lVar13 = this + 0x40;
  lVar14 = this + 0x28;
  lVar15 = this + 0x10;
  lVar16 = this + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_44,param_3,param_4,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,
                       lVar13,lVar14,lVar15,lVar16,uVar17,uVar18,uVar19);
    iVar2 = iVar2 + iVar1;
    if (local_44 == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar17 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_44 != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x84) = 1;
      goto LAB_008e88fb;
    case 2:
      if (local_44 == 0xf) {
        *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x10);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_008e85d0::switchdataD_008e89c8,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(this + 0x18) - *(longlong *)(this + 0x10);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(this + 0x18) = *(longlong *)(this + 0x10) + uVar6;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*arg1 + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(this + 0x85) = 1;
        goto LAB_008e88fb;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 10:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x86) = 1;
        goto LAB_008e88fb;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xb:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x87) = 1;
        goto LAB_008e88fb;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xc:
      if (local_44 == 10) {
        iVar3 = (**(code **)(*arg1 + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x88) = 1;
        goto LAB_008e88fb;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xd:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x89) = 1;
        goto LAB_008e88fb;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xf:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x8a) = 1;
        goto LAB_008e88fb;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x10:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x8b) = 1;
        goto LAB_008e88fb;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x11:
      if (local_44 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x8c) = 1;
        goto LAB_008e88fb;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x12:
      if (local_44 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x8d) = 1;
        goto LAB_008e88fb;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x14:
      if (local_44 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x8e) = 1;
        goto LAB_008e88fb;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x15:
      if (local_44 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x8f) = 1;
        goto LAB_008e88fb;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008e88fb:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}




// ==================================================
// @00a6b098 (1226 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *arg1;
  longlong this;
  ulonglong uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int local_3c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar9 = this + 0x68;
  lVar10 = this + 0x50;
  lVar11 = this + 0x38;
  lVar12 = this + 0x34;
  lVar13 = this + 0x30;
  lVar14 = this + 0x2c;
  lVar15 = this + 0x28;
  lVar16 = this + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_3c,param_3,param_4,lVar9,lVar10,lVar11,lVar12,lVar13,lVar14,
                       lVar15,lVar16,uVar17,uVar18,uVar19);
    iVar2 = iVar2 + iVar1;
    if (local_3c == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar17 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_3c != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = FUN_00aa9ade();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0xd0) = 1;
      goto LAB_00a6b514;
    case 2:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xd1) = 1;
        goto LAB_00a6b514;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xb:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xd2) = 1;
        goto LAB_00a6b514;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xc:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xd3) = 1;
        goto LAB_00a6b514;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xd:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xd4) = 1;
        goto LAB_00a6b514;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xe:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xd5) = 1;
        goto LAB_00a6b514;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xf:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xd6) = 1;
        goto LAB_00a6b514;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x10:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xd7) = 1;
        goto LAB_00a6b514;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x11:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xd8) = 1;
        goto LAB_00a6b514;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x12:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xd9) = 1;
        goto LAB_00a6b514;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x13:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0xda) = 1;
        goto LAB_00a6b514;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x14:
      if (local_3c == 0xf) {
        lVar6 = *(longlong *)(this + 0xb8);
        uVar8 = extraout_XMM0_Da;
        for (lVar5 = *(longlong *)(this + 0xc0); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
          uVar8 = (*(code *)**(undefined8 **)(lVar5 + -0x20))();
        }
        *(longlong *)(this + 0xc0) = lVar6;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar8,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar7 = 0;
          do {
            iVar2 = (**(code **)(*(longlong *)(*(longlong *)(this + 0xb8) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar7 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(this + 0xdb) = 1;
        goto LAB_00a6b514;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_00a6b514:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}




// ==================================================
// @01be4f70 (1219 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  longlong lVar2;
  longlong **pplVar3;
  int iVar4;
  longlong *this;
  longlong *plVar5;
  undefined8 in_XMM1_Qb;
  undefined1 local_b8 [16];
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  plVar1 = local_70;
  if (this[0x27] == 0) {
LAB_01be500f:
    while( true ) {
      (**(code **)(*this + 0x4a0))();
      iVar4 = *(int *)((longlong)local_70 + 0xc);
      if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar4 == 0) break;
      (**(code **)(*this + 0x4a0))();
      FUN_00d23340();
      local_38[0] = (char)local_68;
      pplVar3 = &local_68;
      if ((char)local_68 == '\0') {
        pplVar3 = (longlong **)local_38;
      }
      *(char *)pplVar3 = '\0';
      if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_70 + 0x478))();
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    return;
  }
  FUN_01bbfb40();
  if ((char)local_68 == '\0') {
    if (local_70 == (longlong *)0x0) goto LAB_01be500f;
    FUN_00d50b00();
    if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_70 == (longlong *)0x0) goto LAB_01be500f;
  (**(code **)(*this + 0x4a0))();
  plVar5 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_01dcb110();
  if ((char)local_68 == '\0') {
    if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_68 != '\0')) &&
       (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68._0_1_ = '\0';
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e3f820();
  local_b8._8_8_ = in_XMM1_Qb;
  local_b8._0_8_ = param_2;
  FUN_01bc09c0();
  if ((char)local_68 == '\0') {
    if (local_70 == (longlong *)0x0) goto LAB_01be53bb;
    FUN_00d50b00();
    if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_70 == (longlong *)0x0) goto LAB_01be53bb;
  local_68._0_1_ = '\0';
  local_70 = (longlong *)0x0;
  local_60 = plVar1;
  local_58 = 0xffffffff;
  local_50 = 0;
  blendps(local_b8,ZEXT816(0),0xd);
  local_58._4_4_ = 0;
  while( true ) {
    if (local_58._4_4_ != 0) {
      if (local_58._4_4_ < 1) {
        iVar4 = -local_58._4_4_;
      }
      else {
        iVar4 = (int)local_58 - local_58._4_4_;
        local_58 = CONCAT44(local_58._4_4_,iVar4);
        FUN_00d23690();
        local_50 = local_50 + local_58._4_4_;
        iVar4 = 0;
      }
      local_58 = CONCAT44(iVar4,(int)local_58);
    }
    lVar2 = (longlong)(int)local_58;
    iVar4 = (int)local_58 + 1;
    local_58 = CONCAT44(local_58._4_4_,iVar4);
    if (*(int *)((longlong)local_60 + 0xc) <= iVar4) break;
    local_70 = *(longlong **)(local_60[2] + 8 + lVar2 * 8);
    FUN_01bc5e00();
    plVar5 = local_48;
    if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) && (FUN_00d50b00(), local_40 != '\0')
        ) && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01bc5f50();
    if (plVar5 == (longlong *)0x0) {
      FUN_01bc6250();
      if (((local_48 != (longlong *)0x0) && (plVar5 = local_48, local_40 == '\0')) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (longlong *)0x0)))) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar5 + 0x4d0))(0);
    }
    local_40 = '\0';
    local_48 = plVar5;
    iVar4 = FUN_00d237a0();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar4 < 0) {
      (**(code **)(*this + 0x450))();
    }
    else {
      FUN_00d23620();
    }
    FUN_01bca0c0();
    FUN_01bc6fd0();
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_000840d0();
  FUN_00d50b20();
LAB_01be53bb:
  while (*(int *)((longlong)plVar1 + 0xc) != 0) {
    FUN_00d23340();
    local_48 = (longlong *)CONCAT71(local_48._1_7_,(char)local_68);
    pplVar3 = &local_68;
    if ((char)local_68 == '\0') {
      pplVar3 = &local_48;
    }
    *(undefined1 *)pplVar3 = 0;
    if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_70 + 0x478))();
    if ((char)local_48 != '\0') {
      FUN_00d50b20();
    }
    FUN_00d23740();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}




// ==================================================
// @01bd5340 (1170 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  dword *pdVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  void *pvVar6;
  dword *pdVar7;
  longlong *arg1;
  longlong this;
  int iVar8;
  longlong local_80;
  char local_78;
  int local_50;
  longlong local_40;
  char local_38;
  
  if ((*arg1 == 0) ||
     (cVar5 = (**(code **)(**(longlong **)(this + 0x78) + 0x50))(), cVar5 == '\0')) {
    lVar3 = *(longlong *)(this + 0x78);
    if (*(int *)(lVar3 + 0xc) != 0) {
      local_50 = -1;
      plVar1 = (longlong *)(this + 0x70);
      while (local_50 = local_50 + 1, local_50 < *(int *)(lVar3 + 0xc)) {
        pvVar6 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(lVar3 + 0x10));
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(*plVar1 + 0x10))();
        FUN_00d50b00();
        FUN_000823a0();
        FUN_00e86210();
        lVar4 = DAT_026f6f60;
        if (DAT_026f6f60 != 0) {
          FUN_00d50b00();
        }
        FUN_00c841b0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00e8b9a0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          FUN_00d50b20();
        }
      }
      FUN_000be170();
    }
    FUN_00d243f0();
    lVar3 = *(longlong *)(this + 0x78);
    if (*(int *)(lVar3 + 0xc) != 0) {
      if (0 < *(int *)(lVar3 + 0xc)) {
        pdVar2 = (dword *)(this + 0x70);
        iVar8 = 0;
        pdVar7 = pdVar2;
        do {
          pvVar6 = _pthread_getspecific((pthread_key_t)pdVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          (**(code **)(*(longlong *)pdVar2 + 0x10))();
          FUN_00d50b00();
          FUN_000823a0();
          FUN_00e86210();
          lVar4 = DAT_026f6f60;
          if (DAT_026f6f60 != 0) {
            FUN_00d50b00();
          }
          FUN_00c841b0();
          local_78 = 0;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_78 = '\x01';
          local_80 = local_40;
          pdVar7 = &section_00000068.reloff;
          FUN_00e8b850(0xa0,&local_80);
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if (pdVar2 != (dword *)0x0) {
            (**(code **)(*(longlong *)pdVar2 + 0x10))();
            FUN_00d50b20();
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(lVar3 + 0xc));
      }
      FUN_000be170();
    }
    FUN_01bd7b90();
  }
  else {
    FUN_01bd69c0();
  }
  return;
}




// ==================================================
// @00b6b2c0 (1156 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  byte bVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  uint uVar7;
  byte bVar8;
  uint uVar9;
  undefined8 *arg1;
  longlong *this;
  byte bVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 in_XMM1 [16];
  undefined1 auVar18 [16];
  undefined1 local_78 [16];
  longlong *local_50;
  char local_48;
  
  (**(code **)(*this + 0x640))();
  if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  bVar10 = *(byte *)(this + 0x28);
  bVar1 = *(byte *)((longlong)this + 0x141);
  (**(code **)(*local_50 + 0x390))();
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_01d488d0();
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar2 = (longlong *)*arg1;
  FUN_01e3f820();
  (**(code **)(*plVar2 + 0x3b0))();
  bVar11 = bVar10;
  if (bVar10 <= bVar1) {
    do {
      uVar7 = bVar11 / 0xc;
      bVar8 = (char)uVar7 * -0xc + bVar11;
      if ((10 < bVar8) || ((0x54aUL >> ((ulonglong)bVar8 & 0x3f) & 1) == 0)) {
        local_78 = ZEXT816(0);
        uVar15 = 0;
        uVar16 = 0;
        uVar17 = 0;
        if ((0xab5U >> (bVar8 & 0x1f) & 1) != 0) {
          local_78 = ZEXT416(*(uint *)(&DAT_023d80a4 + (ulonglong)bVar8 * 4));
          uVar15 = _UNK_023d8034;
          uVar16 = _UNK_023d8038;
          uVar17 = _UNK_023d803c;
        }
        uVar9 = *(byte *)(this + 0x28) / 0xc;
        fVar12 = (float)(int)(char)(*(byte *)(this + 0x28) + (char)uVar9 * -0xc) * DAT_02421224
        ;
        fVar13 = (float)(int)(uVar7 - uVar9) * DAT_023d7fec;
        FUN_01e436c0();
        fVar12 = (float)local_78._0_4_ + fVar13 + fVar12;
        auVar18 = ZEXT416((uint)DAT_023d7ff0);
        if (in_XMM1._4_4_ < DAT_023d7ff0) {
          FUN_01e436c0();
          auVar6._4_4_ = 0;
          auVar6._0_4_ = fVar12;
          auVar6._8_4_ = local_78._8_4_;
          auVar6._12_4_ = local_78._12_4_;
          auVar3._4_4_ = 0;
          auVar3._0_4_ = 0.0 - (DAT_023d7ff0 - auVar18._4_4_);
          auVar3._8_4_ = local_78._12_4_;
          auVar3._12_4_ = local_78._12_4_;
          auVar18 = insertps(auVar6,auVar3,0x10);
          fVar12 = auVar18._0_4_;
        }
        auVar4._4_8_ = auVar18._8_8_;
        auVar4._0_4_ = uVar15;
        in_XMM1._0_8_ = auVar4._0_8_ << 0x20;
        in_XMM1._8_4_ = uVar16;
        in_XMM1._12_4_ = uVar17;
        (**(code **)(*this + 0x918))(fVar12,(uint)bVar11);
      }
      bVar11 = bVar11 + 1;
    } while (bVar11 <= bVar1);
    do {
      uVar7 = bVar10 / 0xc;
      switch((char)uVar7 * -0xc + bVar10) {
      case 1:
        fVar12 = DAT_023908ec;
        break;
      default:
        goto switchD_00b6b5bc_caseD_2;
      case 3:
        fVar12 = DAT_0241e624;
        break;
      case 6:
        fVar12 = DAT_0240e314;
        break;
      case 8:
        fVar12 = DAT_023d7ff8;
        break;
      case 10:
        fVar12 = DAT_023d7ff4;
      }
      uVar9 = *(byte *)(this + 0x28) / 0xc;
      fVar13 = (float)(int)(char)(*(byte *)(this + 0x28) + (char)uVar9 * -0xc) * DAT_02421224;
      fVar14 = (float)(int)(uVar7 - uVar9) * DAT_023d7fec;
      FUN_01e436c0();
      fVar12 = fVar12 + fVar14 + fVar13;
      auVar18 = ZEXT416((uint)DAT_023d7ff0);
      if (in_XMM1._4_4_ < DAT_023d7ff0) {
        FUN_01e436c0();
        auVar18 = insertps(ZEXT416((uint)fVar12),
                           ZEXT416((uint)(0.0 - (DAT_023d7ff0 - auVar18._4_4_))),0x10);
        fVar12 = auVar18._0_4_;
      }
      auVar5._4_8_ = auVar18._8_8_;
      auVar5._0_4_ = _UNK_023d8024;
      in_XMM1._0_8_ = auVar5._0_8_ << 0x20;
      in_XMM1._8_4_ = _UNK_023d8028;
      in_XMM1._12_4_ = _UNK_023d802c;
      (**(code **)(*this + 0x918))(fVar12,(uint)bVar10);
switchD_00b6b5bc_caseD_2:
      bVar10 = bVar10 + 1;
    } while (bVar10 <= bVar1);
    if (local_50 == (longlong *)0x0) {
      return;
    }
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @00ad4740 (1151 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  undefined1 *puVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  string *psVar7;
  string *psVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  byte bVar11;
  uint uVar12;
  string *psVar13;
  undefined8 *arg1;
  longlong this;
  string *psVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  undefined8 uVar18;
  undefined8 local_48;
  string *psStack_40;
  undefined1 *local_38;
  string *psVar14;
  
  iVar4 = (**(code **)(**(longlong **)(this + 0x60) + 0x18))();
  uVar17 = 0;
  local_48 = 0;
  psStack_40 = (string *)0x0;
  local_38 = (undefined1 *)0x0;
  if (*(char *)(this + 0x78) == '\0') {
    uVar17 = (**(code **)(**(longlong **)(this + 0x70) + 0x38))(0,1);
  }
  *(undefined1 *)(this + 0x78) = 1;
  if (*(char *)(this + 0x79) != '\"') {
    cVar3 = (**(code **)(**(longlong **)(this + 0x60) + 0x20))();
    uVar17 = extraout_XMM0_Da;
    if (cVar3 != '\0') {
      uVar17 = FUN_00ad3660();
    }
    if ((local_48 & 1) == 0) {
      local_48 = local_48 & 0xffffffffffff0000;
    }
    else {
      *local_38 = 0;
      psStack_40 = (string *)0x0;
    }
    cVar3 = *(char *)(this + 0x78);
    iVar16 = iVar4;
    while( true ) {
      if (cVar3 == '\0') {
        (**(code **)(**(longlong **)(this + 0x70) + 0x38))(uVar17,1);
      }
      *(undefined1 *)(this + 0x78) = 1;
      uVar12 = *(byte *)(this + 0x79) - 0x2b;
      psVar14 = (string *)(ulonglong)uVar12;
      bVar11 = (byte)uVar12;
      psVar13 = psVar14;
      if ((0x3a < bVar11) ||
         (psVar13 = (string *)((ulonglong)psVar14 & 0xff),
         (0x400000004007fedU >> ((ulonglong)psVar14 & 0x3f) & 1) == 0)) break;
      *(undefined1 *)(this + 0x78) = 0;
      uVar17 = std::string::push_back(bVar11);
      iVar16 = iVar16 + 1;
      cVar3 = *(char *)(this + 0x78);
    }
    uVar18 = FUN_00ad4e80();
    goto LAB_00ad4a61;
  }
  iVar5 = FUN_00ad3c00(uVar17,1);
  uVar2 = local_48;
  psVar14 = (string *)(local_48 & 0xff);
  psVar15 = (string *)(local_48 >> 1 & 0x7f);
  psVar8 = psVar15;
  if ((local_48 & 1) != 0) {
    psVar8 = psStack_40;
  }
  psVar13 = DAT_028a0c18;
  if ((DAT_028a0c10 & 1) == 0) {
    psVar13 = (string *)(ulonglong)(DAT_028a0c10 >> 1);
  }
  if (psVar8 == psVar13) {
    iVar16 = iVar5 + iVar4;
    puVar1 = DAT_028a0c20;
    if ((DAT_028a0c10 & 1) == 0) {
      puVar1 = &DAT_028a0c11;
    }
    if ((local_48 & 1) == 0) {
      uVar18 = DAT_023908c8;
      if (psVar8 != (string *)0x0) {
        psVar7 = (string *)0x0;
        do {
          psVar13 = (string *)(ulonglong)(byte)psVar7[(longlong)&local_48 + 1];
          if (psVar7[(longlong)&local_48 + 1] != psVar7[(longlong)puVar1]) goto LAB_00ad4884;
          psVar7 = psVar7 + 1;
          uVar18 = DAT_023908c8;
        } while (psVar15 != psVar7);
      }
      goto LAB_00ad4a61;
    }
    uVar18 = DAT_023908c8;
    if ((psVar8 == (string *)0x0) ||
       (iVar6 = _memcmp(psVar13,psVar8,param_3), uVar18 = DAT_023908c8, iVar6 == 0))
    goto LAB_00ad4a61;
  }
LAB_00ad4884:
  iVar16 = iVar5 + iVar4;
  psVar13 = DAT_028a0c30;
  if ((DAT_028a0c28 & 1) == 0) {
    psVar13 = (string *)(ulonglong)(DAT_028a0c28 >> 1);
  }
  if (psVar8 == psVar13) {
    puVar1 = DAT_028a0c38;
    if ((DAT_028a0c28 & 1) == 0) {
      puVar1 = &DAT_028a0c29;
    }
    if ((uVar2 & 1) == 0) {
      uVar18 = DAT_023e1698;
      if (psVar8 != (string *)0x0) {
        psVar7 = (string *)0x0;
        do {
          psVar13 = (string *)(ulonglong)(byte)psVar7[(longlong)&local_48 + 1];
          if (psVar7[(longlong)&local_48 + 1] != psVar7[(longlong)puVar1]) goto LAB_00ad4996;
          psVar7 = psVar7 + 1;
          uVar18 = DAT_023e1698;
        } while (psVar15 != psVar7);
      }
      goto LAB_00ad4a61;
    }
    uVar18 = DAT_023e1698;
    if ((psVar8 == (string *)0x0) ||
       (iVar4 = _memcmp(psVar13,psVar8,param_3), uVar18 = DAT_023e1698, iVar4 == 0))
    goto LAB_00ad4a61;
  }
LAB_00ad4996:
  psVar13 = DAT_028a0c48;
  if ((DAT_028a0c40 & 1) == 0) {
    psVar13 = (string *)(ulonglong)(DAT_028a0c40 >> 1);
  }
  if (psVar8 == psVar13) {
    puVar1 = DAT_028a0c50;
    if ((DAT_028a0c40 & 1) == 0) {
      puVar1 = &DAT_028a0c41;
    }
    uVar18 = DAT_0241f388;
    if ((uVar2 & 1) == 0) {
      if (psVar8 != (string *)0x0) {
        psVar8 = (string *)0x0;
        do {
          psVar13 = (string *)(ulonglong)(byte)psVar8[(longlong)&local_48 + 1];
          if (psVar8[(longlong)&local_48 + 1] != psVar8[(longlong)puVar1]) goto LAB_00ad4a46;
          psVar8 = psVar8 + 1;
        } while (psVar15 != psVar8);
      }
      goto LAB_00ad4a61;
    }
    if ((psVar8 == (string *)0x0) ||
       (iVar4 = _memcmp(psVar13,psVar8,param_3), psVar14 = psVar8, uVar18 = DAT_0241f388, iVar4 == 0
       )) goto LAB_00ad4a61;
  }
LAB_00ad4a46:
  cVar3 = (**(code **)(**(longlong **)(this + 0x60) + 0x20))();
  if (cVar3 == '\0') {
    puVar9 = (undefined8 *)___cxa_allocate_exception();
    puVar10 = operator_new((ulong)psVar13);
    puVar10[3] = 0x6465746f75712079;
    puVar10[2] = 0x6c64657463657078;
    puVar10[1] = 0x656e752061746164;
    *puVar10 = 0x20636972656d754e;
    *(undefined1 *)(puVar10 + 4) = 0;
    *puVar9 = &DAT_02517278;
    uVar17 = std::string::string((string *)0x20636972656d754e,psVar14);
    *puVar9 = &DAT_02517250;
    *(undefined4 *)(puVar9 + 4) = 1;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar17,FUN_0088de20);
  }
  uVar18 = FUN_00ad4e80();
LAB_00ad4a61:
  *arg1 = uVar18;
  if ((local_48 & 1) != 0) {
    operator_delete(psVar13);
  }
  return iVar16;
}




// ==================================================
// @0197dfb0 (1147 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong this;
  longlong local_38;
  char local_30;
  longlong local_28;
  char local_20;
  
  FUN_01989e10();
  *(undefined4 *)(this + 0x140) = 1;
  *(undefined1 *)(this + 0x18c) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  if ((DAT_028b0ed8 == 0) || (DAT_028b0ee1 == '\0')) {
    FUN_00e8cb50();
    lVar2 = DAT_027eb4b0;
    if (DAT_028b0ed8 == 0) {
      if (DAT_027eb4b0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01d20ca0(_DAT_0241ea30);
      lVar3 = DAT_028b0ed8;
      if (DAT_028b0ed8 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_00d50b00();
            lVar3 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar3 = local_28;
        }
        bVar1 = DAT_028b0ed8 != 0;
        DAT_028b0ed8 = lVar3;
        if (bVar1) {
          FUN_00d50b20();
          lVar3 = local_28;
        }
      }
      if ((lVar3 != 0) && (DAT_028b0ee0 == '\0')) {
        DAT_028b0ee0 = '\x01';
        FUN_00e8cb90();
        lVar3 = local_28;
      }
      if ((local_20 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027e0cb0;
      if (DAT_027e0cb0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01d20ca0(_DAT_0241ea30);
      lVar3 = DAT_028b0ee8;
      if (DAT_028b0ee8 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_00d50b00();
            lVar3 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar3 = local_28;
        }
        bVar1 = DAT_028b0ee8 != 0;
        DAT_028b0ee8 = lVar3;
        if (bVar1) {
          FUN_00d50b20();
          lVar3 = local_28;
        }
      }
      if ((lVar3 != 0) && (DAT_028b0ef0 == '\0')) {
        DAT_028b0ef0 = '\x01';
        FUN_00e8cb90();
        lVar3 = local_28;
      }
      if ((local_20 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027e0cb8;
      if (DAT_027e0cb8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01d20ca0(_DAT_0241ea30);
      lVar3 = DAT_028b0ef8;
      if (DAT_028b0ef8 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_00d50b00();
            lVar3 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar3 = local_28;
        }
        bVar1 = DAT_028b0ef8 != 0;
        DAT_028b0ef8 = lVar3;
        if (bVar1) {
          FUN_00d50b20();
          lVar3 = local_28;
        }
      }
      if ((lVar3 != 0) && (DAT_028b0f00 == '\0')) {
        DAT_028b0f00 = '\x01';
        FUN_00e8cb90();
        lVar3 = local_28;
      }
      if ((local_20 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      DAT_028b0ee1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0ee1 = '\x01';
      FUN_00e8cb70();
    }
  }
  *(undefined1 *)(this + 0x194) = 1;
  return;
}




// ==================================================
// @00978a88 (1141 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong arg1;
  void *pvVar10;
  longlong lVar11;
  longlong this;
  size_t sVar12;
  
  lVar7 = *(longlong *)(this + 8);
  lVar6 = *(longlong *)(this + 0x10);
  if (lVar6 - lVar7 == *(longlong *)(arg1 + 0x10) - *(longlong *)(arg1 + 8)) {
    for (; lVar7 != lVar6; lVar7 = lVar7 + 0x390) {
      cVar3 = FUN_00976c80();
      if (cVar3 == '\0') goto LAB_00978eea;
    }
    if (((*(char *)(this + 0x20) == *(char *)(arg1 + 0x20)) &&
        (*(char *)(this + 0x21) == *(char *)(arg1 + 0x21))) &&
       (*(int *)(this + 0x24) == *(int *)(arg1 + 0x24))) {
      bVar1 = *(byte *)(this + 0x28);
      pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        pvVar5 = *(void **)(this + 0x30);
      }
      bVar2 = *(byte *)(arg1 + 0x28);
      if ((bVar2 & 1) == 0) {
        pvVar10 = (void *)(ulonglong)(bVar2 >> 1);
      }
      else {
        pvVar10 = *(void **)(arg1 + 0x30);
      }
      if (pvVar5 == pvVar10) {
        sVar12 = CONCAT31((int3)((uint)param_3 >> 8),1);
        if ((bVar2 & 1) == 0) {
          lVar7 = arg1 + 0x29;
        }
        else {
          lVar7 = *(longlong *)(arg1 + 0x38);
        }
        if ((bVar1 & 1) == 0) {
          if (pvVar5 != (void *)0x0) {
            pvVar5 = (void *)0x0;
            do {
              if (*(char *)(this + 0x29 + (longlong)pvVar5) !=
                  *(char *)(lVar7 + (longlong)pvVar5)) goto LAB_00978eea;
              pvVar5 = (void *)((longlong)pvVar5 + 1);
            } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar5);
          }
        }
        else if ((pvVar5 != (void *)0x0) &&
                (iVar4 = _memcmp((void *)(ulonglong)bVar2,pvVar5,sVar12), iVar4 != 0))
        goto LAB_00978eea;
        bVar1 = *(byte *)(this + 0x40);
        pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          pvVar5 = *(void **)(this + 0x48);
        }
        bVar2 = *(byte *)(arg1 + 0x40);
        if ((bVar2 & 1) == 0) {
          pvVar10 = (void *)(ulonglong)(bVar2 >> 1);
        }
        else {
          pvVar10 = *(void **)(arg1 + 0x48);
        }
        if (pvVar5 == pvVar10) {
          sVar12 = CONCAT31((int3)(sVar12 >> 8),1);
          if ((bVar2 & 1) == 0) {
            lVar7 = arg1 + 0x41;
          }
          else {
            lVar7 = *(longlong *)(arg1 + 0x50);
          }
          if ((bVar1 & 1) == 0) {
            if (pvVar5 != (void *)0x0) {
              pvVar5 = (void *)0x0;
              do {
                if (*(char *)(this + 0x41 + (longlong)pvVar5) !=
                    *(char *)(lVar7 + (longlong)pvVar5)) goto LAB_00978eea;
                pvVar5 = (void *)((longlong)pvVar5 + 1);
              } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar5);
            }
          }
          else if ((pvVar5 != (void *)0x0) &&
                  (iVar4 = _memcmp((void *)(ulonglong)bVar2,pvVar5,sVar12), iVar4 != 0))
          goto LAB_00978eea;
          if ((*(longlong *)(this + 0x58) == *(longlong *)(arg1 + 0x58)) &&
             (*(longlong *)(this + 0x60) == *(longlong *)(arg1 + 0x60))) {
            bVar1 = *(byte *)(this + 0x68);
            pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
            if ((bVar1 & 1) != 0) {
              pvVar5 = *(void **)(this + 0x70);
            }
            bVar2 = *(byte *)(arg1 + 0x68);
            if ((bVar2 & 1) == 0) {
              pvVar10 = (void *)(ulonglong)(bVar2 >> 1);
            }
            else {
              pvVar10 = *(void **)(arg1 + 0x70);
            }
            if (pvVar5 == pvVar10) {
              if ((bVar2 & 1) == 0) {
                lVar7 = arg1 + 0x69;
              }
              else {
                lVar7 = *(longlong *)(arg1 + 0x78);
              }
              if ((bVar1 & 1) == 0) {
                if (pvVar5 != (void *)0x0) {
                  pvVar5 = (void *)0x0;
                  do {
                    if (*(char *)(this + 0x69 + (longlong)pvVar5) !=
                        *(char *)(lVar7 + (longlong)pvVar5)) goto LAB_00978eea;
                    pvVar5 = (void *)((longlong)pvVar5 + 1);
                  } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar5);
                }
              }
              else if ((pvVar5 != (void *)0x0) &&
                      (iVar4 = _memcmp((void *)(ulonglong)bVar2,pvVar5,
                                       CONCAT31((int3)(sVar12 >> 8),1)), iVar4 != 0))
              goto LAB_00978eea;
              if ((((*(char *)(this + 0x80) == *(char *)(arg1 + 0x80)) &&
                   (*(int *)(this + 0x84) == *(int *)(arg1 + 0x84))) &&
                  (*(char *)(this + 0x27b) == *(char *)(arg1 + 0x27b))) &&
                 (((*(char *)(this + 0x27b) == '\0' || (cVar3 = FUN_009b2a98(), cVar3 != '\0'))
                  && ((*(int *)(this + 0x198) == *(int *)(arg1 + 0x198) &&
                      ((*(char *)(this + 0x19c) == *(char *)(arg1 + 0x19c) &&
                       (*(longlong *)(this + 0x1a0) == *(longlong *)(arg1 + 0x1a0)))))))))
              {
                lVar7 = *(longlong *)(this + 0x1a8);
                lVar6 = *(longlong *)(this + 0x1b0) - lVar7;
                if (lVar6 == *(longlong *)(arg1 + 0x1b0) - *(longlong *)(arg1 + 0x1a8)) {
                  lVar8 = arg1;
                  if (lVar7 != *(longlong *)(this + 0x1b0)) {
                    lVar11 = 0;
                    do {
                      lVar8 = CONCAT71((int7)((ulonglong)lVar8 >> 8),*(char *)(lVar7 + lVar11));
                      if (*(char *)(lVar7 + lVar11) !=
                          *(char *)(*(longlong *)(arg1 + 0x1a8) + lVar11)) goto LAB_00978eea;
                      lVar11 = lVar11 + 1;
                    } while (lVar6 != lVar11);
                  }
                  if ((*(char *)(this + 0x280) == *(char *)(arg1 + 0x280)) &&
                     (((*(char *)(this + 0x280) == '\0' ||
                       (cVar3 = FUN_009b3030(), cVar3 != '\0')) &&
                      (*(char *)(this + 0x281) == *(char *)(arg1 + 0x281))))) {
                    if (*(char *)(this + 0x281) != '\0') {
                      lVar8 = *(longlong *)(this + 0x240);
                      lVar7 = *(longlong *)(this + 0x248);
                      if (lVar7 - lVar8 !=
                          *(longlong *)(arg1 + 0x248) - *(longlong *)(arg1 + 0x240))
                      goto LAB_00978eea;
                      for (; lVar8 != lVar7; lVar8 = lVar8 + 0x58) {
                        cVar3 = FUN_009796ac();
                        if (cVar3 == '\0') goto LAB_00978eea;
                      }
                    }
                    if (*(char *)(this + 0x282) == *(char *)(arg1 + 0x282)) {
                      uVar9 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
                      if (*(char *)(this + 0x282) == '\0') goto LAB_00978eec;
                      lVar7 = *(longlong *)(this + 600);
                      lVar6 = *(longlong *)(this + 0x260);
                      if (lVar6 - lVar7 ==
                          *(longlong *)(arg1 + 0x260) - *(longlong *)(arg1 + 600)) {
                        for (; lVar7 != lVar6; lVar7 = lVar7 + 0x180) {
                          cVar3 = FUN_009b34e8();
                          if (cVar3 == '\0') goto LAB_00978eea;
                        }
                        goto LAB_00978eec;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00978eea:
  uVar9 = 0;
LAB_00978eec:
  return uVar9 & 0xffffffff;
}




// ==================================================
// @01b60350 (1088 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  longlong this;
  undefined4 extraout_XMM0_Da;
  float fVar4;
  undefined8 *local_90;
  undefined4 local_88;
  int local_84;
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
  
  FUN_01b5e510();
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar2 = FUN_015b7ba0();
  if (iVar2 == 3) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_015bb7e0();
    plVar1 = *(longlong **)(this + 0x80);
    FUN_01b60d60(extraout_XMM0_Da,iVar2);
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    (**(code **)(*plVar1 + 0x958))();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = *(longlong **)(this + 0x88);
    iVar2 = iVar2 + 7;
    FUN_01b60d60((ulonglong)((longlong)iVar2 * 0x2aaaaaab) >> 0x3f,
                 iVar2 + (((uint)(iVar2 / 6 + (iVar2 >> 0x1f)) >> 1) - (iVar2 >> 0x1f)) * -0xc);
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    (**(code **)(*plVar1 + 0x958))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015ba320();
    iVar2 = FUN_00e7d780();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar4 = (float)FUN_015ba390();
    iVar2 = iVar2 + (uint)(0.0 < fVar4);
    plVar1 = *(longlong **)(this + 0x80);
    local_88 = 1;
    local_90 = &DAT_024cc6f0;
    local_84 = iVar2;
    FUN_00d8cb40(fVar4,&local_90);
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    (**(code **)(*plVar1 + 0x958))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = *(longlong **)(this + 0x88);
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015ba3a0();
    local_84 = FUN_00e7d780();
    local_84 = local_84 + iVar2;
    local_88 = 1;
    local_90 = &DAT_024cc6f0;
    FUN_00d8cb40(&DAT_024cc6f0,&local_90);
    local_70 = local_40;
    local_68 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = '\x01';
    (**(code **)(*plVar1 + 0x958))();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @008c6b60 (1048 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  ulonglong uVar5;
  longlong *arg1;
  ulonglong uVar6;
  longlong this;
  undefined4 extraout_XMM0_Da;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar7 = this + 0x50;
  lVar8 = this + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,local_48,param_3,param_4,lVar7,lVar8,uVar9,uVar10,uVar11);
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar9 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_36 < 0x14) {
      if (local_36 == 1) {
        if (local_48[0] != 0xb) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008c6e6e;
        }
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x68) = 1;
      }
      else if (local_36 == 10) {
        if (local_48[0] != 0xf) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008c6e6e;
        }
        *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + 0x20);
        iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(this + 0x28) - *(longlong *)(this + 0x20);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(this + 0x28) = *(longlong *)(this + 0x20) + uVar6;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*arg1 + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(this + 0x69) = 1;
      }
      else {
        if (local_36 != 0xb) goto LAB_008c6df8;
        if (local_48[0] != 0xf) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008c6e6e;
        }
        *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x38);
        iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(this + 0x40) - *(longlong *)(this + 0x38);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(this + 0x40) = *(longlong *)(this + 0x38) + uVar6;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*arg1 + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(this + 0x6a) = 1;
      }
    }
    else if (local_36 < 0x16) {
      if (local_36 == 0x14) {
        if (local_48[0] == 8) {
          iVar3 = (**(code **)(*arg1 + 0x138))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(this + 0x6b) = 1;
          goto LAB_008c6e74;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else if (local_36 == 0x15) {
        if (local_48[0] == 8) {
          iVar3 = (**(code **)(*arg1 + 0x138))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(this + 0x6c) = 1;
          goto LAB_008c6e74;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else {
LAB_008c6df8:
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
LAB_008c6e6e:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_36 == 0x16) {
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c6e6e;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x6d) = 1;
    }
    else {
      if (local_36 != 0x1e) goto LAB_008c6df8;
      if (local_48[0] != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c6e6e;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x6e) = 1;
    }
LAB_008c6e74:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}




// ==================================================
// @01bd1110 (1045 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 *arg1;
  longlong *this;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 in_XMM1_Dc;
  undefined4 uVar6;
  longlong local_c0;
  char local_b8;
  longlong *local_68;
  char local_60;
  longlong local_58;
  int local_50;
  undefined8 local_48;
  float local_34;
  
  local_34 = (float)(**(code **)(*this + 0xb10))();
  cVar2 = (**(code **)(*this + 0xaf0))();
  if (cVar2 != '\0') {
    local_34 = DAT_02390124 - local_34;
  }
  (**(code **)(*this + 0x640))();
  plVar1 = local_68;
  if ((((local_60 == '\0') && (local_68 != (longlong *)0x0)) && (FUN_00d50b00(), local_60 != '\0'))
     && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar6 = *(undefined4 *)((longlong)this + 0x18c);
  local_48 = FUN_01e3f820();
  uVar3 = (**(code **)(*this + 0x9a0))();
  (**(code **)(*this + 0xa70))();
  (**(code **)(*plVar1 + 0x3f0))((undefined4)local_48,uVar6,0,uVar3);
  if (this[0x3c] != 0) {
    local_60 = '\0';
    local_68 = (longlong *)0x0;
    local_58 = *(longlong *)(this[0x3c] + 0x10);
    local_50 = 0;
    if (0 < *(int *)(local_58 + 0xc)) {
      do {
        local_68 = *(longlong **)(*(longlong *)(local_58 + 0x10) + (longlong)local_50 * 8);
        FUN_01bd1720((longlong)local_50,&local_68);
        if ((local_b8 == '\0') && (local_c0 != 0)) {
          FUN_00d50b00();
        }
        uVar6 = (undefined4)this[0x2e];
        uVar4 = FUN_00c71d60();
        *(undefined4 *)(this + 0x2e) = uVar4;
        uVar4 = (**(code **)(*this + 0xb10))();
        local_48._0_4_ = uVar4;
        (**(code **)(*this + 0xaf0))();
        FUN_01e3f820();
        local_48 = (**(code **)(*plVar1 + 0x560))();
        uVar4 = FUN_01d526f0();
        uVar5 = FUN_00d05510((undefined4)local_48,param_2,uVar4);
        local_48 = uVar5;
        cVar2 = (**(code **)(*this + 0x9a0))();
        if (cVar2 == '\0') {
          in_XMM1_Dc = 0;
          param_2 = DAT_0239011c;
          FUN_01d49110((undefined4)local_48,3);
        }
        else {
          (**(code **)(*(longlong *)*arg1 + 0x400))((undefined4)local_48);
        }
        *(undefined4 *)(this + 0x2e) = uVar6;
        if (local_c0 != 0) {
          FUN_00d50b20();
        }
        local_50 = local_50 + 1;
      } while (local_50 < *(int *)(local_58 + 0xc));
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  uVar5 = FUN_01e3f820();
  local_48 = uVar5;
  (**(code **)(*this + 0x9a0))();
  (**(code **)(*this + 0xa70))();
  FUN_01cc0c20((undefined4)local_48,param_2,local_34,DAT_02390d00,param_2,in_XMM1_Dc);
  FUN_00d50b20();
  return;
}




// ==================================================
// @01430a30 (1034 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong this;
  int iVar7;
  longlong local_68;
  char local_60;
  
  iVar3 = FUN_014308d0();
  iVar7 = iVar3 - *(int *)(this + 0x100);
  if (iVar7 != 0 && *(int *)(this + 0x100) <= iVar3) {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_02572358;
    pcVar2 = DAT_02572370;
    (*DAT_02572370)();
    iVar3 = iVar7;
    if (0 < iVar7) {
      do {
        FUN_01430160();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_00d21140();
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    lVar1 = **(longlong **)(*(longlong *)(this + 0x108) + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_02572358;
    (*pcVar2)();
    iVar3 = iVar7;
    if (0 < iVar7) {
      do {
        FUN_0142ff00();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_00d21140();
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(this + 0x108) + 0x10) + 8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_02572358;
    (*pcVar2)();
    if (0 < iVar7) {
      do {
        FUN_014300a0();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_00d21140();
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(this + 0x108) + 0x10) + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @0197d460 (1032 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_90;
  char local_88;
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
  longlong *local_30;
  char local_28;
  
  lVar2 = DAT_027e0c20;
  if (DAT_027e0c20 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_90 = lVar2;
  local_88 = '\x01';
  pplVar5 = &local_30;
  uVar6 = FUN_01e57490(param_1,&local_90);
  plVar1 = local_30;
  if (DAT_027e5dd8 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    uVar6 = extraout_XMM0_Da_00;
    if (iVar4 != 0) {
      _DAT_027e5d28 = FUN_001b37d0();
      _DAT_027e5d10 = "MUSpectrumShaperSlider";
      _DAT_027e5d18 = 0x200;
      _DAT_027e5d20 = FUN_01bdaad0;
      _DAT_027e5d30 = 0;
      uRam00000000027e5d38 = 0;
      _DAT_027e5d40 = 0;
      uRam00000000027e5d48 = 0;
      _DAT_027e5d50 = 0;
      uRam00000000027e5d58 = 0;
      _DAT_027e5d60 = 0;
      uRam00000000027e5d68 = 0;
      _DAT_027e5d70 = 0;
      uRam00000000027e5d78 = 0;
      _DAT_027e5d80 = 0;
      uRam00000000027e5d88 = 0;
      _DAT_027e5d90 = 0;
      uRam00000000027e5d98 = 0;
      _DAT_027e5da0 = 0;
      uRam00000000027e5da8 = 0;
      _DAT_027e5db0 = 0;
      uRam00000000027e5db8 = 0;
      _DAT_027e5dc0 = 0;
      uRam00000000027e5dc8 = 0;
      _DAT_027e5dd0 = 0;
      uVar6 = ___cxa_guard_release();
    }
  }
  if (plVar1 == (longlong *)0x0) {
LAB_0197d4db:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar6 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_0197d4db;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  lVar2 = DAT_027e4c48;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_027e4c48 != 0) {
      FUN_00d50b00();
    }
    local_80 = lVar2;
    local_78 = '\x01';
    FUN_01bd1950(0);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e0c28;
    if (DAT_027e0c28 != 0) {
      FUN_00d50b00();
    }
    local_70 = lVar2;
    local_68 = '\x01';
    FUN_01bd1950(DAT_02390124);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    uVar6 = FUN_00d50b20();
  }
  lVar2 = DAT_027e0c30;
  if (DAT_027e0c30 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_60 = lVar2;
  local_58 = '\x01';
  pplVar5 = &local_30;
  FUN_01e57490(uVar6,&local_60);
  plVar1 = local_30;
  if (DAT_027e5dd8 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    if (iVar4 != 0) {
      _DAT_027e5d28 = FUN_001b37d0();
      _DAT_027e5d10 = "MUSpectrumShaperSlider";
      _DAT_027e5d18 = 0x200;
      _DAT_027e5d20 = FUN_01bdaad0;
      _DAT_027e5d30 = 0;
      uRam00000000027e5d38 = 0;
      _DAT_027e5d40 = 0;
      uRam00000000027e5d48 = 0;
      _DAT_027e5d50 = 0;
      uRam00000000027e5d58 = 0;
      _DAT_027e5d60 = 0;
      uRam00000000027e5d68 = 0;
      _DAT_027e5d70 = 0;
      uRam00000000027e5d78 = 0;
      _DAT_027e5d80 = 0;
      uRam00000000027e5d88 = 0;
      _DAT_027e5d90 = 0;
      uRam00000000027e5d98 = 0;
      _DAT_027e5da0 = 0;
      uRam00000000027e5da8 = 0;
      _DAT_027e5db0 = 0;
      uRam00000000027e5db8 = 0;
      _DAT_027e5dc0 = 0;
      uRam00000000027e5dc8 = 0;
      _DAT_027e5dd0 = 0;
      ___cxa_guard_release();
    }
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_0197d629;
  }
  pplVar5 = (longlong **)&DAT_02802688;
LAB_0197d629:
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027e0c38;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_027e0c38 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar2;
    local_48 = '\x01';
    FUN_01bd1950(0);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e0c40;
    if (DAT_027e0c40 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar2;
    local_38 = '\x01';
    FUN_01bd1950(DAT_02390124);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_01e534b0();
  return;
}




// ==================================================
// @01965590 (1030 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  void *pvVar4;
  longlong arg1;
  longlong this;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  longlong *local_80;
  char local_78;
  undefined4 local_58;
  undefined8 uStack_50;
  longlong *local_38;
  char local_30;
  
  *(undefined8 *)(this + 0x1a8) = 0;
  uVar9 = *(undefined8 *)(arg1 + 8);
  *(undefined8 *)(this + 0x1b0) = uVar9;
  fVar6 = (float)((ulonglong)uVar9 >> 0x20);
  fVar5 = fVar6 * DAT_02390d2c;
  *(float *)(this + 0x1ac) = 0.0 - (fVar6 + fVar6);
  *(float *)(this + 0x1b4) = fVar5;
  if (*(longlong *)(this + 0x178) != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar6 = (float)FUN_01265b60();
    if (DAT_02390124 < fVar6) {
      fVar6 = *(float *)(this + 0x1b4);
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01265b60();
      fVar5 = (float)FUN_00aea6b0();
      fVar6 = fVar6 * fVar5;
      fVar6 = fVar6 + fVar6;
      *(float *)(this + 0x1ac) =
           (fVar6 - *(float *)(this + 0x1b4)) * DAT_02390118 + *(float *)(this + 0x1ac);
      *(float *)(this + 0x1b4) = fVar6;
    }
  }
  FUN_01989f80();
  lVar1 = *(longlong *)(this + 0x178);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  fVar6 = (float)(**(code **)((longlong)&dylib_command_000011b8.cmd + *local_38))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!NAN(fVar6)) {
    fVar5 = *(float *)(this + 0x1bc);
    fVar7 = (float)FUN_01964590();
    fVar5 = (fVar7 - fVar6) * fVar5;
    if ((fVar5 != 0.0) || (NAN(fVar5))) {
      uStack_50 = *(undefined8 *)(this + 0x1b0);
      local_58 = (undefined4)*(undefined8 *)(this + 0x1a8);
      uVar9 = *(undefined8 *)(this + 0x1b0);
      uVar8 = FUN_00d052e0(*(undefined8 *)(this + 0x1a8),uVar9,local_58,uStack_50);
      *(undefined8 *)(this + 0x1a8) = uVar8;
      *(undefined8 *)(this + 0x1b0) = uVar9;
    }
  }
  FUN_01989f80();
  cVar3 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                      *local_38 + 0x40))();
  if (cVar3 == '\0') {
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    cVar3 = FUN_01965aa0();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      uVar9 = *(undefined8 *)(this + 0x1b0);
      uVar8 = FUN_00d052e0(*(undefined8 *)(this + 0x1a8),uVar9,local_58,uStack_50);
      *(undefined8 *)(this + 0x1a8) = uVar8;
      *(undefined8 *)(this + 0x1b0) = uVar9;
    }
  }
  if ((*(char *)(this + 0x1c5) != '\0') && (cVar3 = FUN_01966100(), cVar3 != '\0')) {
    uVar9 = *(undefined8 *)(this + 0x1b0);
    uVar8 = FUN_00d052e0(*(undefined8 *)(this + 0x1a8),uVar9,local_58,uStack_50);
    *(undefined8 *)(this + 0x1a8) = uVar8;
    *(undefined8 *)(this + 0x1b0) = uVar9;
  }
  fVar7 = *(float *)(this + 0x1bc) * DAT_023908e0 * DAT_023908d8;
  fVar5 = 0.0;
  fVar6 = *(float *)(arg1 + 8);
  uStack_50 = CONCAT44(fVar7,fVar6);
  FUN_01989f80();
  if (local_38 == (longlong *)0x0) {
    cVar3 = '\0';
  }
  else {
    FUN_01989f80();
    cVar3 = (**(code **)((longlong)&dylib_command_000013a0.dylib.name.offset + *local_80))();
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    fVar5 = _DAT_0241b200 + 0.0;
    uStack_50 = CONCAT44(fVar7 + _UNK_0241b20c,fVar6 + _UNK_0241b208);
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *(ulonglong *)(this + 0x1b0);
  uVar9 = FUN_00d052e0(*(undefined8 *)(this + 0x1a8),*(ulonglong *)(this + 0x1b0),fVar5,
                       uStack_50);
  auVar2._8_4_ = auVar10._0_4_;
  auVar2._0_8_ = uVar9;
  auVar2._12_4_ = auVar10._4_4_;
  *(undefined1 (*) [16])(this + 0x1a8) = auVar2;
  uVar9 = FUN_00d05530();
  *(undefined8 *)(this + 0x1a8) = uVar9;
  *(longlong *)(this + 0x1b0) = auVar10._0_8_;
  return;
}




// ==================================================
// @017f2990 (1010 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  void *pvVar12;
  bool bVar13;
  longlong this;
  
  if (*(char *)(this + 0x79) == '\0') {
    bVar13 = false;
  }
  else {
    bVar13 = false;
    bVar3 = 0;
    bVar4 = 0;
    if (*(char *)(this + 0x7d) != '\0') goto LAB_017f2ce2;
    pvVar12 = _pthread_getspecific(param_1);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar2 = FUN_015b7bc0();
    pvVar12 = _pthread_getspecific(param_1);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar3 = FUN_015b7bc0();
    pvVar12 = _pthread_getspecific(param_1);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar4 = FUN_015b7bc0();
    pvVar12 = _pthread_getspecific(param_1);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar5 = FUN_015b7bd0();
    pvVar12 = _pthread_getspecific(param_1);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar6 = FUN_015b7bd0();
    pvVar12 = _pthread_getspecific(param_1);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar7 = FUN_015b7bd0();
    pvVar12 = _pthread_getspecific(param_1);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar8 = FUN_015b7bd0();
    cVar1 = *(char *)(this + 0x7a);
    pvVar12 = _pthread_getspecific(param_1);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar9 = FUN_0188f200();
    pvVar12 = _pthread_getspecific(param_1);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar10 = FUN_0188f200();
    pvVar12 = _pthread_getspecific(param_1);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar11 = FUN_0188f200();
    bVar13 = true;
    if (((bVar11 | bVar10 | bVar9 | cVar1 != '\0' | bVar8 | bVar7 | bVar6 | bVar5 | bVar3 | bVar4 |
         bVar2) & 1) != 0) goto LAB_017f2ce2;
    if ((*(float *)(this + 0xc0) == 0.0) && (!NAN(*(float *)(this + 0xc0)))) {
      bVar13 = *(float *)(this + 200) != DAT_02390124 ||
               (*(float *)(this + 0xbc) != 0.0 || *(float *)(this + 0xb8) != 0.0);
    }
  }
  bVar3 = 0;
  bVar4 = 0;
LAB_017f2ce2:
  if ((bool)*(char *)(this + 0x78) == bVar13) {
    bVar2 = *(byte *)(this + 0x7b);
  }
  else {
    FUN_00d64850();
    *(bool *)(this + 0x78) = bVar13;
    FUN_00d64910();
    bVar2 = *(byte *)(this + 0x7b);
  }
  if (bVar2 == bVar3) {
    bVar3 = *(byte *)(this + 0x7c);
  }
  else {
    FUN_00d64850();
    *(byte *)(this + 0x7b) = bVar3;
    FUN_00d64910();
    bVar3 = *(byte *)(this + 0x7c);
  }
  if (bVar3 != bVar4) {
    FUN_00d64850();
    *(byte *)(this + 0x7c) = bVar4;
    FUN_00d64910();
    return;
  }
  return;
}




// ==================================================
// @008c8648 (1007 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  ulonglong uVar5;
  longlong *arg1;
  ulonglong uVar6;
  longlong this;
  undefined4 extraout_XMM0_Da;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar7 = this + 0x40;
  lVar8 = this + 0x38;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,local_48,param_3,param_4,lVar7,lVar8,uVar9,uVar10,uVar11);
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar9 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_36 < 0x14) {
      if (local_36 == 1) {
        if (local_48[0] != 0xf) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008c8935;
        }
        *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 8);
        iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(this + 0x10) - *(longlong *)(this + 8);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(this + 0x10) = *(longlong *)(this + 8) + uVar6;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*arg1 + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(this + 100) = 1;
      }
      else if (local_36 == 2) {
        if (local_48[0] != 0xf) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008c8935;
        }
        *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + 0x20);
        iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(this + 0x28) - *(longlong *)(this + 0x20);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(this + 0x28) = *(longlong *)(this + 0x20) + uVar6;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*arg1 + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(this + 0x65) = 1;
      }
      else {
        if (local_36 != 10) goto LAB_008c88c7;
        if (local_48[0] != 10) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008c8935;
        }
        iVar3 = (**(code **)(*arg1 + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x66) = 1;
      }
    }
    else if (local_36 < 0x1f) {
      if (local_36 == 0x14) {
        if (local_48[0] == 0xb) {
          iVar3 = (**(code **)(*arg1 + 0x150))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(this + 0x67) = 1;
          goto LAB_008c893b;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else if (local_36 == 0x1e) {
        if (local_48[0] == 8) {
          iVar3 = (**(code **)(*arg1 + 0x138))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(this + 0x68) = 1;
          goto LAB_008c893b;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else {
LAB_008c88c7:
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
LAB_008c8935:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_36 == 0x1f) {
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c8935;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x69) = 1;
    }
    else {
      if (local_36 != 0x20) goto LAB_008c88c7;
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c8935;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x6a) = 1;
    }
LAB_008c893b:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}




// ==================================================
// @01bcf5e0 (993 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  char unaff_SIL;
  longlong *this;
  longlong *plVar5;
  float fVar6;
  undefined4 uVar7;
  longlong local_80;
  char local_78;
  longlong *local_40;
  char local_38;
  
  FUN_01beea30();
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  FUN_002dff80();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this + 0x7b8))();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((float)((ulonglong)param_1 >> 0x20) <= DAT_02390124) {
    plVar5 = (longlong *)0x0;
    bVar1 = false;
    bVar2 = false;
    if (local_40 == (longlong *)0x0) goto LAB_01bcf99d;
  }
  else {
    bVar1 = false;
    plVar5 = (longlong *)0x0;
LAB_01bcf6f0:
    (**(code **)(*this + 0x658))();
    if (local_40 == plVar5) {
      if ((!bVar1) && (local_40 != (longlong *)0x0)) {
        plVar4 = plVar5;
        if (local_38 != '\0') goto LAB_01bcf743;
        bVar1 = true;
        FUN_00d50b00();
      }
    }
    else {
      plVar4 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar5 = local_40;
          bVar1 = true;
          goto LAB_01bcf790;
        }
      }
      else {
        if ((bVar1) && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01bcf743:
        local_38 = '\0';
      }
      plVar5 = plVar4;
      bVar1 = true;
    }
LAB_01bcf790:
    if (plVar5 != (longlong *)0x0) {
      iVar3 = FUN_01d3a5a0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar3 == 6) goto LAB_01bcf974;
      iVar3 = FUN_01d3a5a0();
      if (iVar3 == 5) {
        FUN_01d3abf0();
        fVar6 = (float)FUN_01e466c0();
        fVar6 = fVar6 - (float)param_1;
        uVar7 = FUN_00d05150();
        FUN_01bcf2f0();
        if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        if (unaff_SIL != '\0') {
          local_38 = '\0';
          FUN_00d23480();
        }
        (**(code **)(*(longlong *)this[0x2a] + 0x9d0))();
        FUN_00d50b00();
        uVar7 = FUN_01e437f0(uVar7);
        if (this != (longlong *)0x0) {
          FUN_00d50b20();
        }
        (**(code **)(*local_40 + 0x948))(uVar7,fVar6);
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      goto LAB_01bcf6f0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01bcf974:
    (**(code **)(*local_40 + 0x948))((int)DAT_023dccec,(int)DAT_023dccf4);
  }
  FUN_00d50b20();
  bVar2 = bVar1;
LAB_01bcf99d:
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @008ed030 (990 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
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
  int local_4c;
  short local_3a [3];
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*arg1 + 200))();
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))(local_3a,&local_4c);
    iVar2 = iVar2 + iVar1;
    if (local_4c == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_3a[0]) {
    case 1:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      lVar5 = *(longlong *)(this + 8);
      uVar7 = extraout_XMM0_Da;
      for (lVar4 = *(longlong *)(this + 0x10); lVar4 != lVar5; lVar4 = lVar4 + -0x90) {
        uVar7 = (*(code *)**(undefined8 **)(lVar4 + -0x90))();
      }
      *(longlong *)(this + 0x10) = lVar5;
      iVar1 = (**(code **)(*arg1 + 0xf8))(uVar7,&local_34);
      FUN_008ed458();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        lVar5 = 0;
        uVar6 = 0;
        do {
          iVar2 = (**(code **)(*(longlong *)(*(longlong *)(this + 8) + lVar5) + 0x10))();
          iVar1 = iVar1 + iVar2;
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 0x90;
        } while (uVar6 < local_34);
      }
      iVar3 = (**(code **)(*arg1 + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(this + 0x68) = 1;
      goto LAB_008ed3c3;
    case 2:
      if (local_4c == 0xf) {
        lVar5 = *(longlong *)(this + 0x20);
        uVar7 = extraout_XMM0_Da;
        for (lVar4 = *(longlong *)(this + 0x28); lVar4 != lVar5; lVar4 = lVar4 + -0x60) {
          uVar7 = (*(code *)**(undefined8 **)(lVar4 + -0x60))();
        }
        *(longlong *)(this + 0x28) = lVar5;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar7,&local_34);
        FUN_008ed4d4();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar5 = 0;
          uVar6 = 0;
          do {
            iVar2 = (**(code **)(*(longlong *)(*(longlong *)(this + 0x20) + lVar5) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 0x60;
          } while (uVar6 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(this + 0x69) = 1;
        goto LAB_008ed3c3;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 3:
      if (local_4c == 0xf) {
        lVar5 = *(longlong *)(this + 0x38);
        uVar7 = extraout_XMM0_Da;
        for (lVar4 = *(longlong *)(this + 0x40); lVar4 != lVar5; lVar4 = lVar4 + -0x58) {
          uVar7 = (*(code *)**(undefined8 **)(lVar4 + -0x58))();
        }
        *(longlong *)(this + 0x40) = lVar5;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar7,&local_34);
        FUN_008ed54a();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar5 = 0;
          uVar6 = 0;
          do {
            iVar2 = (**(code **)(*(longlong *)(*(longlong *)(this + 0x38) + lVar5) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 0x58;
          } while (uVar6 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(this + 0x6a) = 1;
        goto LAB_008ed3c3;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 4:
      if (local_4c == 0xf) {
        lVar5 = *(longlong *)(this + 0x50);
        uVar7 = extraout_XMM0_Da;
        for (lVar4 = *(longlong *)(this + 0x58); lVar4 != lVar5; lVar4 = lVar4 + -0x88) {
          uVar7 = (*(code *)**(undefined8 **)(lVar4 + -0x88))();
        }
        *(longlong *)(this + 0x58) = lVar5;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar7,&local_34);
        FUN_008ed5bc();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar5 = 0;
          uVar6 = 0;
          do {
            iVar2 = (**(code **)(*(longlong *)(*(longlong *)(this + 0x50) + lVar5) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 0x88;
          } while (uVar6 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(this + 0x6b) = 1;
        goto LAB_008ed3c3;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008ed3c3:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}




// ==================================================
// @01b63c50 (987 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong this;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  int local_44;
  longlong *local_40;
  longlong *local_38;
  
  iVar4 = FUN_01d6fde0();
  lVar5 = DAT_027e3c00;
  while (DAT_027e3c00 = lVar5, 1 < iVar4) {
    FUN_01d70040();
    iVar4 = FUN_01d6fde0();
    lVar5 = DAT_027e3c00;
  }
  if (iVar4 == 0) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_c8 = '\x01';
    local_d0 = lVar5;
    FUN_00e427c0(param_1,&local_d0);
    local_90 = local_70;
    local_88 = 0;
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_88 = '\x01';
    FUN_01d6f990();
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01b57f70();
  plVar6 = local_70;
  if ((((local_68 == '\0') && (local_70 != (longlong *)0x0)) && (FUN_00d50b00(), local_68 != '\0'))
     && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01b57e50();
  plVar7 = local_70;
  if (((local_68 == '\0') && (local_70 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_68 != '\0' && (local_70 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_01b58c00();
  plVar2 = local_70;
  if (local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01b63dbf;
    }
  }
  else if (local_70 != (longlong *)0x0) {
LAB_01b63dbf:
    local_40 = plVar7;
    local_38 = plVar6;
    local_68 = '\0';
    local_70 = (longlong *)0x0;
    local_60 = plVar2;
    local_50 = 0;
    local_58 = 0;
    if (*(int *)((longlong)plVar2 + 0xc) < 1) {
      local_44 = 0;
    }
    else {
      lVar5 = 0;
      local_44 = 0;
      do {
        plVar6 = *(longlong **)(plVar2[2] + lVar5 * 8);
        local_c0 = local_40;
        local_b8 = '\0';
        local_70 = plVar6;
        cVar3 = (**(code **)(*plVar6 + 0x50))();
        if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          local_44 = (int)lVar5 + 1;
        }
        local_a8 = '\0';
        local_b0 = plVar6;
        FUN_00e427c0(param_1,&local_b0);
        local_80 = local_a0;
        local_78 = 0;
        if (local_98 == '\0') {
          if (local_a0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_98 = '\0';
        }
        local_78 = '\x01';
        FUN_01d6f990();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)lVar5);
      } while ((int)lVar5 < *(int *)((longlong)plVar2 + 0xc));
    }
    FUN_00018280();
    bVar1 = false;
    plVar6 = local_38;
    plVar7 = local_40;
    goto LAB_01b63f79;
  }
  bVar1 = true;
LAB_01b63f79:
  (**(code **)(**(longlong **)(this + 0x70) + 0x918))();
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00943e2a (959 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong this;
  undefined4 uVar3;
  undefined *local_310;
  undefined *local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined2 local_2e8;
  undefined8 local_2e4;
  undefined8 local_2dc;
  undefined8 local_2d4;
  undefined8 local_2cc;
  undefined8 local_2c4;
  undefined8 local_2bc;
  undefined8 local_2b4;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 local_288;
  undefined4 local_284;
  undefined *local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined4 local_170;
  undefined1 local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined1 local_d6;
  undefined4 local_d5;
  undefined2 local_d1;
  undefined1 local_cf;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined7 uStack_a0;
  undefined1 local_99;
  undefined7 uStack_98;
  undefined8 local_91;
  undefined4 local_89;
  undefined1 local_80;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  
  local_310 = &DAT_025198d0;
  local_308 = &DAT_0251c5a8;
  local_300 = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_2ac = 0;
  local_2e4 = 0;
  local_2dc = 0;
  local_2d4 = 0;
  local_2cc = 0;
  local_2c4 = 0;
  local_2bc = 0;
  local_2b4 = 0;
  local_2a8 = 0xffffffffffffffff;
  local_284 = 0;
  local_2a0 = 0;
  local_298 = 0;
  local_290 = 0;
  local_288 = 0;
  local_280 = &DAT_0251c338;
  local_248 = 0;
  local_250 = 0;
  local_258 = 0;
  local_260 = 0;
  local_268 = 0;
  local_270 = 0;
  local_278 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = 0;
  local_220 = 0;
  local_228 = 0;
  local_230 = 0;
  local_238 = 0;
  local_240 = 0;
  local_180 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_178 = 1;
  local_16c = 0;
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_148 = &DAT_0251c3a0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_108 = 0x100000001;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_d8 = 1;
  local_d6 = 0;
  local_d5 = 0x1010101;
  local_d1 = 0;
  local_cf = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  local_99 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_91 = 0x100010000010001;
  local_89 = 0;
  local_170 = 0;
  local_80 = 0;
  local_38 = &DAT_02519928;
  local_30 = 4;
  local_2c = 1;
  FUN_008f91be();
  if (*(longlong *)(this + 0x70) == 0) {
    plVar2 = *(longlong **)(this + 8);
    if (plVar2 == (longlong *)0x0) {
      FUN_00925fd0();
      uVar1 = FUN_00926010();
      uVar3 = FUN_00928ab0("void pace::AuthorizationVerifier::cacheProductLocationData(const petpub::AuthChain &)"
                           ,&DAT_00002b2e);
      FUN_009bd14b(uVar3,uVar1);
      plVar2 = *(longlong **)(this + 8);
    }
    (**(code **)(*plVar2 + 0x50))(4,&local_310);
  }
  else {
    local_78 = 0;
    lStack_70 = 0;
    local_68 = 0;
    local_48 = 0;
    local_58 = 0;
    lStack_50 = 0;
    FUN_00944238(0,1);
    plVar2 = &local_58;
    uVar3 = FUN_00928f8a(plVar2,&local_78);
    FUN_0095010b(uVar3,&local_38);
    if (local_58 != 0) {
      lStack_50 = local_58;
      operator_delete(plVar2);
    }
    if (local_78 != 0) {
      lStack_70 = local_78;
      operator_delete(plVar2);
    }
  }
  FUN_008b67e4();
  FUN_008b64fc();
  return;
}




// ==================================================
// @0090f500 (923 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *arg1;
  ulonglong uVar9;
  longlong this;
  undefined4 uVar10;
  int local_54;
  longlong *local_50;
  short local_3a;
  uint local_38;
  uint local_34;
  
  FUN_0088d1d0();
  iVar4 = (**(code **)(*arg1 + 200))();
  local_50 = (longlong *)(this + 0x70);
  do {
    iVar5 = (**(code **)(*arg1 + 0xd8))(&local_3a,&local_54);
    iVar5 = iVar5 + iVar4;
    if (local_54 == 0) {
      iVar4 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar4 + iVar5;
    }
    switch((int)local_3a) {
    case 1:
      if (local_54 != 8) {
        iVar6 = (**(code **)(*arg1 + 0x160))();
        goto LAB_0090f830;
      }
      iVar6 = (**(code **)(*arg1 + 0x138))();
      iVar6 = iVar6 + iVar5;
      *(uint *)(this + 8) = local_34;
      *(undefined1 *)(this + 0x88) = 1;
      break;
    case 2:
      if (local_54 != 8) {
        iVar6 = (**(code **)(*arg1 + 0x160))();
        goto LAB_0090f830;
      }
      iVar6 = (**(code **)(*arg1 + 0x138))();
      iVar6 = iVar6 + iVar5;
      *(uint *)(this + 0xc) = local_34;
      *(undefined1 *)(this + 0x89) = 1;
      break;
    case 3:
      if (local_54 != 8) {
        iVar6 = (**(code **)(*arg1 + 0x160))();
        goto LAB_0090f830;
      }
      iVar6 = (**(code **)(*arg1 + 0x138))();
      iVar6 = iVar6 + iVar5;
      *(uint *)(this + 0x10) = local_34;
      *(undefined1 *)(this + 0x8a) = 1;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
switchD_0090f59e_caseD_4:
      iVar6 = (**(code **)(*arg1 + 0x160))();
LAB_0090f830:
      iVar6 = iVar6 + iVar5;
      break;
    case 0xb:
      if (local_54 != 0xc) {
        iVar6 = (**(code **)(*arg1 + 0x160))();
        goto LAB_0090f830;
      }
      iVar6 = FUN_008d782a();
      iVar6 = iVar6 + iVar5;
      *(undefined1 *)(this + 0x8b) = 1;
      break;
    case 0xc:
      if (local_54 != 8) {
        iVar6 = (**(code **)(*arg1 + 0x160))();
        goto LAB_0090f830;
      }
      iVar6 = (**(code **)(*arg1 + 0x138))();
      iVar6 = iVar6 + iVar5;
      *(undefined1 *)(this + 0x8c) = 1;
      break;
    default:
      if (local_3a != 0x15) goto switchD_0090f59e_caseD_4;
      if (local_54 == 0xf) {
        uVar10 = FUN_0091c338();
        iVar4 = (**(code **)(*arg1 + 0xf8))(uVar10,&local_34);
        FUN_0090f900();
        iVar4 = iVar4 + iVar5;
        if (local_34 != 0) {
          uVar8 = 0;
          do {
            uVar1 = *(undefined8 *)(*local_50 + uVar8 * 0x18);
            *(undefined8 *)(*local_50 + 8 + uVar8 * 0x18) = uVar1;
            iVar5 = (**(code **)(*arg1 + 0xf8))(uVar1,&local_38);
            lVar2 = *local_50;
            uVar9 = (ulonglong)local_38;
            lVar3 = *(longlong *)(lVar2 + uVar8 * 0x18);
            uVar7 = *(longlong *)(lVar2 + 8 + uVar8 * 0x18) - lVar3;
            if (uVar7 < uVar9) {
              FUN_0088d550();
            }
            else if (uVar9 < uVar7) {
              *(ulonglong *)(lVar2 + 8 + uVar8 * 0x18) = lVar3 + uVar9;
            }
            iVar5 = iVar5 + iVar4;
            if (local_38 != 0) {
              uVar7 = 0;
              do {
                iVar4 = (**(code **)(*arg1 + 0x128))();
                iVar5 = iVar5 + iVar4;
                uVar7 = uVar7 + 1;
              } while (uVar7 < local_38);
            }
            iVar4 = (**(code **)(*arg1 + 0x100))();
            iVar4 = iVar4 + iVar5;
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_34);
        }
        iVar6 = (**(code **)(*arg1 + 0x100))();
        iVar6 = iVar6 + iVar4;
        *(undefined1 *)(this + 0x8d) = 1;
      }
      else {
        iVar6 = (**(code **)(*arg1 + 0x160))();
        iVar6 = iVar6 + iVar5;
      }
    }
    iVar4 = (**(code **)(*arg1 + 0xe0))();
    iVar4 = iVar4 + iVar6;
  } while( true );
}




// ==================================================
// @00ab2f02 (914 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *arg1;
  longlong this;
  ulonglong uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int local_3c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar9 = this + 0x48;
  lVar10 = this + 0x30;
  lVar11 = this + 0x28;
  lVar12 = this + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_3c,param_3,param_4,lVar9,lVar10,lVar11,lVar12,uVar13,uVar14,
                       uVar15);
    iVar2 = iVar2 + iVar1;
    if (local_3c == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar13 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_3c != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = FUN_00aa9ade();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x98) = 1;
      goto LAB_00ab3249;
    case 2:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x99) = 1;
        goto LAB_00ab3249;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xb:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x9a) = 1;
        goto LAB_00ab3249;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xc:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x9b) = 1;
        goto LAB_00ab3249;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xd:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x9c) = 1;
        goto LAB_00ab3249;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xe:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x9d) = 1;
        goto LAB_00ab3249;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xf:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x9e) = 1;
        goto LAB_00ab3249;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x10:
      if (local_3c == 0xf) {
        lVar6 = *(longlong *)(this + 0x80);
        uVar8 = extraout_XMM0_Da;
        for (lVar5 = *(longlong *)(this + 0x88); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
          uVar8 = (*(code *)**(undefined8 **)(lVar5 + -0x20))();
        }
        *(longlong *)(this + 0x88) = lVar6;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar8,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar7 = 0;
          do {
            iVar2 = (**(code **)(*(longlong *)(*(longlong *)(this + 0x80) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar7 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(this + 0x9f) = 1;
        goto LAB_00ab3249;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_00ab3249:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}




// ==================================================
// @0116a8f0 (913 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *this;
  undefined8 *puVar4;
  
  FUN_010f3160();
  *this = &DAT_025e3768;
  this[0x1d] = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0116ae80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSGenerator");
  }
  puVar4 = this + 0x1e;
  this[0x1e] = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0116af70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSElementRenderer",param_3,param_4,puVar4);
  }
  this[0x1f] = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0116b060();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSElementRenderer");
  }
  *(undefined4 *)(this + 0x20) = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a5288 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a5250 = FUN_0116a2e0();
        _DAT_027a5248 = "_assembledElementRendererCount";
        _DAT_027a5258 = 0;
        _DAT_027a5260 = 0x6900;
        _DAT_027a5268 = "GNInt";
        _DAT_027a5270 = 0;
        uRam00000000027a5278 = 0;
        _DAT_027a5280 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0116b150();
  this[0x22] = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0116b230();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSComponentRenderer");
  }
  this[0x23] = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0116b320();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUComponentSpectrumRenderer");
  }
  this[0x24] = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0116b410();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  this[0x25] = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0116b500();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUSpectrumShaperDisplayInfoBuffer");
  }
  return;
}




// ==================================================
// @00acd960 (906 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  uint uVar1;
  longlong *plVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined4 extraout_var;
  void *pvVar6;
  ulonglong uVar7;
  string *psVar8;
  ulonglong uVar9;
  undefined1 uVar10;
  runtime_error rVar11;
  int iVar12;
  longlong this;
  longlong lVar13;
  size_t sVar14;
  char cVar15;
  string local_90 [8];
  longlong local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  runtime_error *local_58;
  undefined8 local_48;
  undefined1 *local_40;
  void *local_38;
  undefined1 *puVar5;
  
  ___bzero();
  FUN_00acddc0();
  if (((byte)local_90[0] & 1) == 0) {
    if ((byte)local_90[0] >> 1 != 0) goto LAB_00acd9b3;
  }
  else if (local_88 != 0) {
LAB_00acd9b3:
    if (*(longlong **)(this + 0x10) != (longlong *)0x0) {
      uVar4 = (**(code **)(**(longlong **)(this + 0x10) + 0x18))();
      if ((int)uVar4 < 0) {
        local_58 = operator_new((ulong)param_1);
        local_68 = _DAT_023d4f60;
        uStack_64 = _UNK_023d4f64;
        uStack_60 = _UNK_023d4f68;
        uStack_5c = _UNK_023d4f6c;
        *(undefined8 *)(local_58 + 0x18) = 0x203a676f6c617461;
        *(undefined8 *)(local_58 + 0x10) = 0x6320656761737365;
        *(undefined8 *)(local_58 + 8) = 0x6d206e65706f206f;
        param_1 = (runtime_error *)0x7420656c62616e55;
        *(undefined8 *)local_58 = 0x7420656c62616e55;
        local_58[0x20] = (runtime_error)0x0;
        psVar8 = local_90;
        FUN_009d6fc0();
        std::runtime_error::runtime_error(param_1,psVar8);
        if ((local_48 & 1) != 0) {
          operator_delete(param_1);
        }
        FUN_00acdf60();
        std::runtime_error::~runtime_error(param_1);
        if ((local_68 & 1) != 0) {
          operator_delete(param_1);
        }
      }
      if (-1 < (int)uVar4) {
        iVar12 = 1;
        local_70 = uVar4;
        do {
          sVar14 = (size_t)param_3;
          plVar2 = *(longlong **)(this + 0x10);
          local_78 = FUN_00acf6c0();
          sVar3 = _strlen((char *)param_1);
          puVar5 = (undefined1 *)CONCAT44(extraout_var,sVar3);
          if ((undefined1 *)0xffffffffffffffef < puVar5) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if ((undefined1 *)((longlong)&MACH_HEADER.sizeofcmds + 2) < puVar5) {
            pvVar6 = operator_new((ulong)param_1);
            local_48 = (ulonglong)(puVar5 + 0x10) & 0xfffffffffffffff0 | 1;
            local_40 = puVar5;
            local_38 = pvVar6;
LAB_00acdb2e:
            uVar4 = local_70;
            _memcpy(param_1,puVar5,sVar14);
          }
          else {
            local_48 = CONCAT71(local_48._1_7_,(char)sVar3 * '\x02');
            pvVar6 = (void *)((longlong)&local_48 + 1);
            uVar4 = local_70;
            if (puVar5 != (undefined1 *)0x0) goto LAB_00acdb2e;
          }
          *(undefined1 *)((longlong)pvVar6 + (longlong)puVar5) = 0;
          param_1 = (runtime_error *)0x0;
          (**(code **)(*plVar2 + 0x20))(0,uVar4,iVar12,&local_48);
          if ((local_48 & 1) != 0) {
            operator_delete(param_1);
          }
          param_3 = (ulonglong)(byte)local_68;
          if ((local_68 & 1) == 0) {
            uVar7 = (ulonglong)((byte)local_68 >> 1);
          }
          else {
            uVar7 = CONCAT44(uStack_5c,uStack_60);
          }
          if (uVar7 != 0) {
            param_1 = (runtime_error *)((longlong)&local_68 + 1);
            if ((local_68 & 1) != 0) {
              param_1 = local_58;
            }
            uVar9 = (ulonglong)((uint)uVar7 & 3);
            uVar10 = (undefined1)iVar12;
            if (uVar7 - 1 < 3) {
              lVar13 = 0;
            }
            else {
              lVar13 = 0;
              do {
                *(undefined1 *)(this + 0x20 + (ulonglong)(byte)param_1[lVar13]) = uVar10;
                *(undefined1 *)(this + 0x20 + (ulonglong)(byte)param_1[lVar13 + 1]) = uVar10;
                *(undefined1 *)(this + 0x20 + (ulonglong)(byte)param_1[lVar13 + 2]) = uVar10;
                *(undefined1 *)(this + 0x20 + (ulonglong)(byte)param_1[lVar13 + 3]) = uVar10;
                lVar13 = lVar13 + 4;
              } while (uVar7 - uVar9 != lVar13);
            }
            if (uVar9 != 0) {
              param_1 = param_1 + lVar13;
              uVar7 = 0;
              do {
                *(undefined1 *)(this + 0x20 + (ulonglong)(byte)param_1[uVar7]) = uVar10;
                uVar7 = uVar7 + 1;
              } while (uVar9 != uVar7);
            }
          }
          if ((local_68 & 1) != 0) {
            operator_delete(param_1);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 != 0x3c);
        (**(code **)(**(longlong **)(this + 0x10) + 0x28))();
        goto LAB_00acdc91;
      }
    }
  }
  cVar15 = '\x01';
  do {
    param_1 = (runtime_error *)FUN_00acf6c0();
    if ((param_1 != (runtime_error *)0x0) && (rVar11 = *param_1, rVar11 != (runtime_error)0x0)) {
      param_1 = param_1 + 1;
      do {
        *(char *)(this + 0x20 + (ulonglong)(byte)rVar11) = cVar15;
        rVar11 = *param_1;
        param_1 = param_1 + 1;
      } while (rVar11 != (runtime_error)0x0);
    }
    cVar15 = cVar15 + '\x01';
  } while (cVar15 != '<');
LAB_00acdc91:
  uVar7 = 0;
  do {
    if ((*(char *)(this + 0x61 + uVar7) == '\0') &&
       (cVar15 = (char)(uVar7 & 0xffffffff) + 'A',
       param_1 = (runtime_error *)CONCAT71((int7)((uVar7 & 0xffffffff) >> 8),cVar15), -1 < cVar15))
    {
      uVar1 = *(uint *)(*(longlong *)(*(longlong *)(this + 8) + 0x10) + 0x104 + uVar7 * 4);
      param_1 = (runtime_error *)(ulonglong)uVar1;
      if ((uVar1 & 0x1000) == 0) {
        if ((short)uVar1 < 0) {
          *(undefined1 *)(this + 0x61 + uVar7) = 0x17;
        }
      }
      else {
        *(undefined1 *)(this + 0x61 + uVar7) = 0x16;
      }
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0xbf);
  if (((byte)local_90[0] & 1) != 0) {
    operator_delete(param_1);
  }
  return;
}




// ==================================================
// @0170f8b0 (904 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  longlong this;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar1 = *(longlong *)(this + 0x68);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_60 = 0;
  lVar2 = *(longlong *)(this + 0x70);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar2;
  FUN_017105a0();
  local_58 = local_38;
  local_50 = 0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_50 = '\x01';
  plVar6 = &local_58;
  FUN_01687020(plVar6,&local_68);
  lVar2 = local_48;
  pVar5 = (pthread_key_t)plVar6;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313b00();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar3 = FUN_01512830();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313b00();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01512830();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      cVar3 = FUN_0167b260();
      if (cVar3 != '\0') {
        FUN_016818b0();
      }
    }
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01ab4480 (904 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong this;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_30;
  char local_28;
  
  FUN_01e3b710();
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar1 = *(longlong *)(this + 0x178);
  if (lVar1 == local_30) {
    FUN_00d50b20();
  }
  else {
    *(longlong *)(this + 0x178) = local_30;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar1 = *(longlong *)(this + 0x180);
  if (lVar1 == local_30) {
    FUN_00d50b20();
  }
  else {
    *(longlong *)(this + 0x180) = local_30;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar1 = *(longlong *)(this + 0x188);
  if (lVar1 == local_30) {
    FUN_00d50b20();
  }
  else {
    *(longlong *)(this + 0x188) = local_30;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar1 = *(longlong *)(this + 400);
  if (lVar1 == local_30) {
    FUN_00d50b20();
  }
  else {
    *(longlong *)(this + 400) = local_30;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  ___bzero();
  lVar1 = *(longlong *)(this + 0x170);
  if (lVar1 == local_30) {
    FUN_00d50b20();
  }
  else {
    *(longlong *)(this + 0x170) = local_30;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  uVar4 = DAT_023dccf4._4_4_;
  uVar3 = (undefined4)DAT_023dccf4;
  uVar2 = DAT_023dccec._4_4_;
  *(undefined4 *)(this + 0x1a4) = (undefined4)DAT_023dccec;
  *(undefined4 *)(this + 0x1a8) = uVar2;
  *(undefined4 *)(this + 0x1ac) = uVar3;
  *(undefined4 *)(this + 0x1b0) = uVar4;
  *(undefined1 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1bc) = 0xffffffff;
  FUN_00d403d0();
  FUN_00d50b00();
  local_60 = DAT_027e3b40;
  if (DAT_027e3b40 != 0) {
    FUN_00d50b00();
  }
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  FUN_00d41430(&local_50,&local_60);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01be78a0 (884 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *arg1;
  longlong *this;
  undefined1 auVar4 [16];
  longlong local_38;
  char local_30;
  
  if (arg1[0x35] != 0) goto LAB_01be7bdb;
  (**(code **)(*arg1 + 0x968))();
  lVar1 = arg1[0x35];
  lVar3 = lVar1;
  if (lVar1 != local_38) {
    lVar3 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar3 = 0;
        goto LAB_01be78ef;
      }
      FUN_00d50b00();
      lVar1 = arg1[0x35];
      arg1[0x35] = local_38;
    }
    else {
      local_30 = '\0';
LAB_01be78ef:
      arg1[0x35] = lVar3;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar3 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  FUN_01dcea50();
  FUN_01ed4f00(0);
  FUN_01dca0e0();
  FUN_01dd3cf0();
  FUN_01de0990();
  FUN_01de09a0();
  auVar4 = blendps(ZEXT416(*(uint *)((longlong)arg1 + 0x204)),_DAT_0241e1f0,0xe);
  (**(code **)(*(longlong *)arg1[0x35] + 0x4d0))(0,auVar4._0_8_);
  FUN_01dce4c0(DAT_0241e220);
  FUN_01dd07d0();
  FUN_01dcc8a0();
  FUN_01de5a60();
  (**(code **)(*(longlong *)arg1[0x35] + 0x548))();
  FUN_01dce590();
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02692468;
  puVar2[2] = &DAT_026927f8;
  puVar2[0xc] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  *(undefined2 *)(puVar2 + 0xb) = 0;
  (*DAT_02692480)();
  FUN_01db9690(*(undefined4 *)((longlong)arg1 + 0x204));
  FUN_01db99b0();
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(puVar2 + 0x27) = 0;
  puVar2[0x2e] = 0;
  *(undefined4 *)(puVar2 + 0x2f) = 0;
  puVar2[0x30] = 0;
  *(undefined1 *)(puVar2 + 0x31) = 0;
  puVar2[0x28] = 0;
  puVar2[0x29] = 0;
  *(undefined4 *)(puVar2 + 0x2a) = 0;
  puVar2[0x2b] = 0;
  puVar2[0x2c] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x165) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x18c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x194) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x199) = 0;
  puVar2[0x35] = 0;
  puVar2[0x36] = 0;
  puVar2[0x37] = 0;
  puVar2[0x38] = 0;
  *puVar2 = &DAT_026611e8;
  puVar2[2] = &DAT_02661cb0;
  puVar2[0x39] = 0;
  *(undefined4 *)(puVar2 + 0x3a) = 0;
  (*DAT_02661200)();
  FUN_01db9640();
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_01dcbe90();
  FUN_00d50b20();
LAB_01be7bdb:
  *(undefined1 *)(this + 1) = 0;
  lVar1 = arg1[0x35];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *this = lVar1;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @019801c0 (875 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  longlong *arg1;
  undefined8 *this;
  longlong *plVar6;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  
  bVar2 = false;
  if ((char)arg1[0x31] == '\0') {
LAB_019804e2:
    *this = 0;
    goto LAB_01980516;
  }
  if (arg1[0x2f] == 0) {
LAB_019804f1:
    plVar6 = (longlong *)0x0;
  }
  else {
    FUN_01989f80();
    lVar1 = arg1[0x2f];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*local_48 + 0xaf8))();
    if (local_58 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = local_58;
      if (local_50 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
        local_50 = '\0';
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (longlong *)0x0) goto LAB_019804f1;
    (**(code **)(*arg1 + 0x928))();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01507f00();
    (**(code **)(*plVar6 + 0x928))();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_01507f00();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (iVar3 != iVar4) {
      if (bVar2) {
        FUN_00d50b20();
      }
      goto LAB_019804e2;
    }
  }
  *(undefined1 *)(this + 1) = 0;
  if ((!bVar2) && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  *this = plVar6;
LAB_01980516:
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @01bd1950 (874 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *this;
  longlong lVar4;
  undefined4 uVar5;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  FUN_01d51a40();
  lVar4 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if (lVar4 == 0) goto LAB_01bd1c8f;
  if ((DAT_028b5f10 == 0) || (DAT_028b5f19 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b5f10 == 0) {
      FUN_01cfc6a0(_DAT_023b294c);
      local_40 = 0;
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_40 = '\x01';
      local_48 = local_78;
      FUN_01d553b0();
      lVar3 = DAT_028b5f10;
      if (DAT_028b5f10 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_00d50b00();
            lVar3 = local_38;
          }
        }
        else {
          local_30 = '\0';
          lVar3 = local_38;
        }
        bVar1 = DAT_028b5f10 != 0;
        DAT_028b5f10 = lVar3;
        if (bVar1) {
          FUN_00d50b20();
          lVar3 = local_38;
        }
      }
      if ((lVar3 != 0) && (DAT_028b5f18 == '\0')) {
        DAT_028b5f18 = '\x01';
        FUN_00e8cb90();
        lVar3 = local_38;
      }
      if ((local_30 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b5f19 = '\x01';
      uVar5 = FUN_00e8cb70();
    }
    else {
      DAT_028b5f19 = '\x01';
      uVar5 = FUN_00e8cb70();
    }
    if (DAT_028b5f10 != 0) goto LAB_01bd1b52;
    lVar3 = 0;
  }
  else {
LAB_01bd1b52:
    lVar3 = DAT_028b5f10;
    local_50 = 0;
    uVar5 = FUN_00d50b00();
  }
  local_50 = '\x01';
  local_58 = lVar3;
  FUN_01d534b0(uVar5,&local_58);
  lVar3 = local_38;
  lVar2 = lVar4;
  if (lVar4 == local_38) {
joined_r0x01bd1b99:
    lVar3 = lVar2;
    if ((local_30 != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      lVar2 = lVar3;
      lVar4 = local_38;
      goto joined_r0x01bd1b99;
    }
    FUN_00d50b20();
    local_30 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = FUN_00d46dc0(param_1);
  local_68 = local_38;
  local_60 = 0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_60 = '\x01';
  FUN_01bd1f20(uVar5,&local_68);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this + 0x620))();
  lVar4 = lVar3;
LAB_01bd1c8f:
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0142e110 (848 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong **pplVar4;
  int iVar5;
  longlong *this;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  undefined8 local_68;
  int local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  uVar6 = FUN_0123f8a0();
  local_90 = this[0x1d];
  if (local_90 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_88 = '\x01';
  uVar6 = (**(code **)(*this + 0x650))(uVar6,&local_90);
  plVar1 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != (longlong *)0x0) && (uVar6 = FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != (longlong *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  local_50 = 0;
  local_58 = (longlong *)0x0;
  local_48 = (longlong)plVar1;
  local_40 = -1;
  iStack_3c = 0;
  local_38 = 0;
LAB_0142e1e3:
  do {
    do {
      iVar5 = iStack_3c;
      if (iStack_3c != 0) {
        if (iStack_3c < 1) {
          iStack_3c = -iStack_3c;
        }
        else {
          local_40 = local_40 - iStack_3c;
          uVar6 = FUN_00d23690(uVar6,iStack_3c);
          local_38 = local_38 + iVar5;
          iStack_3c = 0;
        }
      }
      lVar3 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(local_48 + 0xc) <= local_40) {
        FUN_01431fb0();
        FUN_00d50b20();
        return;
      }
      plVar1 = *(longlong **)(*(longlong *)(local_48 + 0x10) + 8 + lVar3 * 8);
      local_58 = plVar1;
      local_80 = plVar1;
      if ((DAT_027b2588 == '\0') &&
         (iVar5 = ___cxa_guard_acquire(), uVar6 = extraout_XMM0_Da_00, iVar5 != 0)) {
        _DAT_027b24d8 = FUN_00d4fe50();
        _DAT_027b24c0 = "MUSpectrumShaperDisplayInfo";
        _DAT_027b24c8 = 0x20;
        _DAT_027b24d0 = FUN_011b1f40;
        _DAT_027b24e0 = 0;
        uRam00000000027b24e8 = 0;
        _DAT_027b24f0 = 0;
        _DAT_027b2568 = 0;
        uRam00000000027b2570 = 0;
        _DAT_027b2578 = 0;
        DAT_027b257a = 1;
        _DAT_027b24f8 = 0;
        uRam00000000027b2500 = 0;
        _DAT_027b2508 = 0;
        uRam00000000027b2510 = 0;
        _DAT_027b2518 = 0;
        uRam00000000027b2520 = 0;
        _DAT_027b2528 = 0;
        uRam00000000027b2530 = 0;
        _DAT_027b2538 = 0;
        uRam00000000027b2540 = 0;
        _DAT_027b2548 = 0;
        uRam00000000027b2550 = 0;
        _DAT_027b2558 = 0;
        uRam00000000027b2560 = 0;
        DAT_027b2583 = 0;
        _DAT_027b257b = 0;
        uVar6 = ___cxa_guard_release();
      }
      pplVar4 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar4 = &local_80;
        uVar6 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          pplVar4 = (longlong **)&DAT_02802688;
        }
      }
    } while (*pplVar4 == (longlong *)0x0);
    uVar6 = FUN_01414fe0();
    plVar1 = local_80;
    if (local_78 == '\0') goto LAB_0142e2a0;
  } while (local_80 == (longlong *)0x0);
  goto LAB_0142e2d0;
LAB_0142e2a0:
  if (local_80 != (longlong *)0x0) {
    FUN_00d50b00();
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_0142e2d0:
    local_78 = '\0';
    local_80 = (longlong *)0x0;
    local_70 = plVar1;
    local_68 = 0xffffffff;
    local_60 = 0;
    while( true ) {
      lVar3 = (longlong)(int)local_68;
      iVar5 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar5);
      if (*(int *)((longlong)local_70 + 0xc) <= iVar5) break;
      local_80 = *(longlong **)(local_70[2] + 8 + lVar3 * 8);
      FUN_014148f0();
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar5 = -local_68._4_4_;
        }
        else {
          local_68 = CONCAT44(local_68._4_4_,(int)local_68 - local_68._4_4_);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar5 = 0;
        }
        local_68 = CONCAT44(iVar5,(int)local_68);
      }
    }
    FUN_012c2730();
    uVar6 = FUN_00d50b20();
  }
  goto LAB_0142e1e3;
}




// ==================================================
// @00aaa448 (843 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *arg1;
  longlong this;
  ulonglong uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int local_3c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar9 = this + 0x48;
  lVar10 = this + 0x30;
  lVar11 = this + 0x28;
  lVar12 = this + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_3c,param_3,param_4,lVar9,lVar10,lVar11,lVar12,uVar13,uVar14,
                       uVar15);
    iVar2 = iVar2 + iVar1;
    if (local_3c == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar13 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_3c != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = FUN_00aa9ade();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x98) = 1;
      goto LAB_00aaa748;
    case 2:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x99) = 1;
        goto LAB_00aaa748;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xb:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x9a) = 1;
        goto LAB_00aaa748;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xc:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x9b) = 1;
        goto LAB_00aaa748;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xd:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x9c) = 1;
        goto LAB_00aaa748;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xe:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x9d) = 1;
        goto LAB_00aaa748;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xf:
      if (local_3c == 0xf) {
        lVar6 = *(longlong *)(this + 0x80);
        uVar8 = extraout_XMM0_Da;
        for (lVar5 = *(longlong *)(this + 0x88); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
          uVar8 = (*(code *)**(undefined8 **)(lVar5 + -0x20))();
        }
        *(longlong *)(this + 0x88) = lVar6;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar8,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar7 = 0;
          do {
            iVar2 = (**(code **)(*(longlong *)(*(longlong *)(this + 0x80) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar7 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(this + 0x9e) = 1;
        goto LAB_00aaa748;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_00aaa748:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}




// ==================================================
// @0170ff60 (831 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  longlong this;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(this + 0x78) != 0) {
    plVar2 = (longlong *)FUN_00e8fc40();
    FUN_0013dd30();
    (**(code **)(*plVar2 + 0x18))();
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      lVar4 = *(longlong *)(this + 0x78);
    }
    else {
      lVar4 = *(longlong *)(this + 0x78);
    }
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    FUN_0150c7f0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313b00();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_01512890();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313b00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01512890();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150c7f0();
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01bd0660 (818 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *this;
  int iVar7;
  bool bVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_01e41c80();
  if ((DAT_02725b90 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_027e5c58 = FUN_00015ff0();
    _DAT_027e5c40 = "MUSpectrumShaperController";
    _DAT_027e5c48 = 0xa0;
    _DAT_027e5c50 = FUN_006594f0;
    _DAT_027e5c60 = 0;
    uRam00000000027e5c68 = 0;
    _DAT_027e5c70 = 0;
    uRam00000000027e5c78 = 0;
    _DAT_027e5c80 = 0;
    uRam00000000027e5c88 = 0;
    _DAT_027e5c90 = 0;
    uRam00000000027e5c98 = 0;
    _DAT_027e5ca0 = 0;
    uRam00000000027e5ca8 = 0;
    _DAT_027e5cb0 = 0;
    uRam00000000027e5cb8 = 0;
    _DAT_027e5cc0 = 0;
    uRam00000000027e5cc8 = 0;
    _DAT_027e5cd0 = 0;
    uRam00000000027e5cd8 = 0;
    _DAT_027e5ce0 = 0;
    uRam00000000027e5ce8 = 0;
    _DAT_027e5cf0 = 0;
    uRam00000000027e5cf8 = 0;
    _DAT_027e5d00 = 0;
    ___cxa_guard_release();
  }
  local_50 = FUN_00e86210();
  local_48 = 0;
  uVar9 = extraout_XMM0_Da;
  if (local_50 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_48 = '\x01';
  FUN_01d824e0(uVar9,&local_50);
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    (**(code **)(*this + 0x4d8))();
    iVar5 = 1;
    if (*(longlong **)(lVar2 + 0x88) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x88) + 0x4a0))();
      iVar4 = *(int *)(local_40 + 0xc);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
      if (iVar4 != 0 && 0.0 < param_2) {
        iVar4 = FUN_00e7d780(param_2 / _DAT_0241df1c);
        iVar5 = 1;
        if (0 < iVar4) {
          iVar5 = iVar4;
        }
      }
    }
    lVar1 = *(longlong *)(lVar2 + 0x90);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00c8e4f0();
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00c92170();
    uVar9 = FUN_00c92160();
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b20();
    }
    iVar4 = *(int *)(lVar3 + 0x18);
    iVar7 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar7 = iVar4;
    }
    if (iVar5 < iVar7 >> 2) {
      do {
        bVar8 = iVar4 != 0;
        iVar4 = 0;
        if (bVar8) {
          uVar9 = FUN_00c8e340(uVar9,0);
          iVar4 = *(int *)(lVar3 + 0x18);
        }
        iVar6 = iVar4 + 3;
        if (-1 < iVar4) {
          iVar6 = iVar4;
        }
      } while (iVar5 < iVar6 >> 2);
      FUN_01bd0ba0();
      if (lVar3 != 0) goto LAB_01bd088c;
    }
    else {
LAB_01bd088c:
      FUN_00d50b20();
    }
    if (iVar5 < iVar7 >> 2) goto LAB_01bd08a1;
  }
  FUN_01bd0d90();
LAB_01bd08a1:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @011b1ff0 (803 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_025df698;
  *(undefined4 *)((longlong)this + 0xc) = 0;
  if (DAT_027b2588 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b24d8 = FUN_00d4fe50();
      _DAT_027b24c0 = "MUSpectrumShaperDisplayInfo";
      _DAT_027b24c8 = 0x20;
      _DAT_027b24d0 = FUN_011b1f40;
      _DAT_027b24e0 = 0;
      uRam00000000027b24e8 = 0;
      _DAT_027b24f0 = 0;
      _DAT_027b2568 = 0;
      uRam00000000027b2570 = 0;
      _DAT_027b2578 = 0;
      DAT_027b257a = 1;
      _DAT_027b24f8 = 0;
      uRam00000000027b2500 = 0;
      _DAT_027b2508 = 0;
      uRam00000000027b2510 = 0;
      _DAT_027b2518 = 0;
      uRam00000000027b2520 = 0;
      _DAT_027b2528 = 0;
      uRam00000000027b2530 = 0;
      _DAT_027b2538 = 0;
      uRam00000000027b2540 = 0;
      _DAT_027b2548 = 0;
      uRam00000000027b2550 = 0;
      _DAT_027b2558 = 0;
      uRam00000000027b2560 = 0;
      DAT_027b2583 = 0;
      _DAT_027b257b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b257b == '\0') {
    FUN_011b2370();
    FUN_00e87980();
  }
  FUN_011b25c0();
  *(undefined4 *)(this + 3) = 0;
  if (DAT_027b2588 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b24d8 = FUN_00d4fe50();
      _DAT_027b24c0 = "MUSpectrumShaperDisplayInfo";
      _DAT_027b24c8 = 0x20;
      _DAT_027b24d0 = FUN_011b1f40;
      _DAT_027b24e0 = 0;
      uRam00000000027b24e8 = 0;
      _DAT_027b24f0 = 0;
      _DAT_027b2568 = 0;
      uRam00000000027b2570 = 0;
      _DAT_027b2578 = 0;
      DAT_027b257a = 1;
      _DAT_027b24f8 = 0;
      uRam00000000027b2500 = 0;
      _DAT_027b2508 = 0;
      uRam00000000027b2510 = 0;
      _DAT_027b2518 = 0;
      uRam00000000027b2520 = 0;
      _DAT_027b2528 = 0;
      uRam00000000027b2530 = 0;
      _DAT_027b2538 = 0;
      uRam00000000027b2540 = 0;
      _DAT_027b2548 = 0;
      uRam00000000027b2550 = 0;
      _DAT_027b2558 = 0;
      uRam00000000027b2560 = 0;
      DAT_027b2583 = 0;
      _DAT_027b257b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b257b == '\0') {
    FUN_011b28f0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x1c) = 0;
  if (DAT_027b2588 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b24d8 = FUN_00d4fe50();
      _DAT_027b24c0 = "MUSpectrumShaperDisplayInfo";
      _DAT_027b24c8 = 0x20;
      _DAT_027b24d0 = FUN_011b1f40;
      _DAT_027b24e0 = 0;
      uRam00000000027b24e8 = 0;
      _DAT_027b24f0 = 0;
      _DAT_027b2568 = 0;
      uRam00000000027b2570 = 0;
      _DAT_027b2578 = 0;
      DAT_027b257a = 1;
      _DAT_027b24f8 = 0;
      uRam00000000027b2500 = 0;
      _DAT_027b2508 = 0;
      uRam00000000027b2510 = 0;
      _DAT_027b2518 = 0;
      uRam00000000027b2520 = 0;
      _DAT_027b2528 = 0;
      uRam00000000027b2530 = 0;
      _DAT_027b2538 = 0;
      uRam00000000027b2540 = 0;
      _DAT_027b2548 = 0;
      uRam00000000027b2550 = 0;
      _DAT_027b2558 = 0;
      uRam00000000027b2560 = 0;
      DAT_027b2583 = 0;
      _DAT_027b257b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b257b == '\0') {
    FUN_011b2a80();
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @0197e990 (793 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  longlong *arg1;
  longlong this;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(this + 0x180) != *arg1) {
    if (*(longlong *)(this + 0x180) != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      (**(code **)(*(longlong *)(this + 0x168) + 0x10))();
      FUN_00d50b00();
      FUN_001156b0();
      FUN_00e86210();
      lVar1 = DAT_027e0cc0;
      if (DAT_027e0cc0 != 0) {
        FUN_00d50b00();
      }
      FUN_00c841b0();
      lVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00e8b9a0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((longlong *)(this + 0x168) != (longlong *)0x0) {
        (**(code **)(*(longlong *)(this + 0x168) + 0x10))();
        FUN_00d50b20();
      }
    }
    lVar1 = *arg1;
    lVar2 = *(longlong *)(this + 0x180);
    lVar3 = lVar2;
    if (lVar2 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(this + 0x180) = lVar1;
      lVar3 = lVar1;
      if (lVar2 != 0) {
        FUN_00d50b20();
        lVar3 = *(longlong *)(this + 0x180);
      }
    }
    if (lVar3 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      (**(code **)(*(longlong *)(this + 0x168) + 0x10))();
      FUN_00d50b00();
      FUN_001156b0();
      FUN_00e86210();
      lVar1 = DAT_027e0cc0;
      if (DAT_027e0cc0 != 0) {
        FUN_00d50b00();
      }
      FUN_00c841b0();
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      FUN_00e8b850(0x20,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((longlong *)(this + 0x168) != (longlong *)0x0) {
        (**(code **)(*(longlong *)(this + 0x168) + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ==================================================
// @01b70bd0 (768 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  pthread_key_t pVar8;
  longlong *arg1;
  undefined8 *this;
  longlong local_70;
  char local_68;
  undefined8 *local_60;
  undefined4 local_54;
  longlong local_50;
  char local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  local_40 = param_2;
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar7 = (undefined8 *)&DAT_02572358;
  *puVar3 = &DAT_02572358;
  local_38 = puVar3;
  (*DAT_02572370)();
  cVar2 = (**(code **)(*arg1 + 0x9d0))();
  if (cVar2 != '\0') {
    local_54 = 0xffffffff;
    local_68 = '\0';
    local_70 = 0;
    local_60 = (undefined8 *)FUN_00e7bdb0();
    uVar4 = FUN_00e7bdb0();
    if (local_40 != (undefined8 *)0x0) {
      uVar5 = FUN_00e7bdb0();
      *local_40 = uVar5;
      puVar7 = local_40;
    }
    if (param_1 == (undefined8 *)0x0) {
      while( true ) {
        pVar8 = (pthread_key_t)puVar7;
        lVar1 = arg1[0x2b];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = (**(code **)(*arg1 + 0x9d8))();
        puVar7 = (undefined8 *)(**(code **)(*arg1 + 0x9e0))();
        cVar2 = FUN_01252960(puVar7,uVar4,&local_70,&local_60);
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') break;
        if (local_70 != 0) {
          puVar7 = local_38;
          if ((*(int *)((longlong)local_38 + 0xc) == 0) && (local_40 != (undefined8 *)0x0)) {
            *local_40 = local_60;
            puVar7 = local_60;
          }
          local_50 = local_70;
          local_48 = '\0';
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    else {
      uVar5 = FUN_00e7bdb0();
      *param_1 = uVar5;
      puVar7 = param_1;
      while( true ) {
        pVar8 = (pthread_key_t)puVar7;
        lVar1 = arg1[0x2b];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar5 = (**(code **)(*arg1 + 0x9d8))();
        puVar7 = (undefined8 *)(**(code **)(*arg1 + 0x9e0))();
        cVar2 = FUN_01252960(puVar7,uVar5,&local_70,&local_60);
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') break;
        if (local_70 != 0) {
          if ((*(int *)((longlong)local_38 + 0xc) == 0) && (local_40 != (undefined8 *)0x0)) {
            *local_40 = local_60;
          }
          local_50 = local_70;
          local_48 = '\0';
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          *param_1 = uVar4;
          puVar7 = param_1;
        }
      }
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  *this = local_38;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @01b82620 (744 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  longlong lVar2;
  longlong *this;
  longlong lVar3;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (this[0x3c] == 0) {
    plVar1 = (longlong *)FUN_01b83030();
    (**(code **)(*plVar1 + 0x18))();
    lVar3 = this[0x3c];
    this[0x3c] = (longlong)plVar1;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*this + 0x978))();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *local_60 + 0x20))();
    local_70 = local_40;
    local_68 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 0x10))();
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = '\x01';
    FUN_01aa6800();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      (**(code **)(*local_70 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (this[0x3d] == 0) {
    plVar1 = (longlong *)FUN_01b83030();
    (**(code **)(*plVar1 + 0x18))();
    lVar3 = this[0x3d];
    this[0x3d] = (longlong)plVar1;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*this + 0x978))();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *local_60 + 0x20))();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 0x10))();
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_01aa6800();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar3 = 0;
  if (this[0x3e] != 0) {
    FUN_019214e0();
    lVar3 = this[0x3e];
  }
  lVar2 = this[0x3c];
  if ((lVar3 != lVar2) || (lVar2 = this[0x3d], lVar3 != lVar2)) {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    this[0x3e] = lVar2;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  local_80 = *param_2;
  local_78 = '\0';
  FUN_0191dac0(param_1,&local_80);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @009b3200 (738 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  longlong lVar7;
  void *pvVar8;
  longlong arg1;
  longlong lVar9;
  void *pvVar10;
  longlong lVar11;
  longlong this;
  
  if (*(int *)(this + 8) == *(int *)(arg1 + 8)) {
    lVar11 = *(longlong *)(this + 0x10);
    lVar7 = *(longlong *)(this + 0x18) - lVar11;
    if (lVar7 == *(longlong *)(arg1 + 0x18) - *(longlong *)(arg1 + 0x10)) {
      if (lVar11 != *(longlong *)(this + 0x18)) {
        lVar9 = 0;
        do {
          if (*(char *)(lVar11 + lVar9) != *(char *)(*(longlong *)(arg1 + 0x10) + lVar9)) {
            return 0;
          }
          lVar9 = lVar9 + 1;
        } while (lVar7 != lVar9);
      }
      bVar1 = *(byte *)(this + 0x28);
      pvVar8 = (void *)(ulonglong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        pvVar8 = *(void **)(this + 0x30);
      }
      bVar2 = *(byte *)(arg1 + 0x28);
      if ((bVar2 & 1) == 0) {
        pvVar5 = (void *)(ulonglong)(bVar2 >> 1);
      }
      else {
        pvVar5 = *(void **)(arg1 + 0x30);
      }
      if (pvVar8 == pvVar5) {
        if ((bVar2 & 1) == 0) {
          lVar11 = arg1 + 0x29;
        }
        else {
          lVar11 = *(longlong *)(arg1 + 0x38);
        }
        if ((bVar1 & 1) == 0) {
          if (pvVar8 != (void *)0x0) {
            pvVar8 = (void *)0x0;
            do {
              if (*(char *)(this + 0x29 + (longlong)pvVar8) !=
                  *(char *)(lVar11 + (longlong)pvVar8)) {
                return 0;
              }
              pvVar8 = (void *)((longlong)pvVar8 + 1);
            } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar8);
          }
        }
        else if ((pvVar8 != (void *)0x0) &&
                (iVar4 = _memcmp((void *)(ulonglong)bVar2,pvVar8,(uint)bVar1), iVar4 != 0)) {
          return 0;
        }
        bVar1 = *(byte *)(this + 0x40);
        pvVar8 = (void *)(ulonglong)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          pvVar8 = *(void **)(this + 0x48);
        }
        bVar2 = *(byte *)(arg1 + 0x40);
        if ((bVar2 & 1) == 0) {
          pvVar5 = (void *)(ulonglong)(bVar2 >> 1);
        }
        else {
          pvVar5 = *(void **)(arg1 + 0x48);
        }
        if (pvVar8 == pvVar5) {
          if ((bVar2 & 1) == 0) {
            lVar11 = arg1 + 0x41;
          }
          else {
            lVar11 = *(longlong *)(arg1 + 0x50);
          }
          if ((bVar1 & 1) == 0) {
            if (pvVar8 != (void *)0x0) {
              pvVar8 = (void *)0x0;
              do {
                if (*(char *)(this + 0x41 + (longlong)pvVar8) !=
                    *(char *)(lVar11 + (longlong)pvVar8)) {
                  return 0;
                }
                pvVar8 = (void *)((longlong)pvVar8 + 1);
              } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar8);
            }
          }
          else if ((pvVar8 != (void *)0x0) &&
                  (iVar4 = _memcmp((void *)(ulonglong)bVar2,pvVar8,(uint)bVar1), iVar4 != 0)) {
            return 0;
          }
          if (*(longlong *)(this + 0x58) == *(longlong *)(arg1 + 0x58)) {
            bVar1 = *(byte *)(this + 0x60);
            pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
            pvVar8 = pvVar5;
            if ((bVar1 & 1) != 0) {
              pvVar8 = *(void **)(this + 0x68);
            }
            bVar2 = *(byte *)(arg1 + 0x60);
            if ((bVar2 & 1) == 0) {
              pvVar10 = (void *)(ulonglong)(bVar2 >> 1);
            }
            else {
              pvVar10 = *(void **)(arg1 + 0x68);
            }
            if (pvVar8 == pvVar10) {
              if ((bVar2 & 1) == 0) {
                lVar11 = arg1 + 0x61;
              }
              else {
                lVar11 = *(longlong *)(arg1 + 0x70);
              }
              if ((bVar1 & 1) == 0) {
                if (pvVar8 != (void *)0x0) {
                  pvVar8 = (void *)0x0;
                  do {
                    if (*(char *)(this + 0x61 + (longlong)pvVar8) !=
                        *(char *)(lVar11 + (longlong)pvVar8)) {
                      return 0;
                    }
                    pvVar8 = (void *)((longlong)pvVar8 + 1);
                  } while (pvVar5 != pvVar8);
                }
              }
              else if (pvVar8 != (void *)0x0) {
                iVar4 = _memcmp((void *)(ulonglong)bVar2,pvVar8,(uint)bVar1);
                pvVar5 = (void *)CONCAT44(extraout_var,iVar4);
                if (iVar4 != 0) {
                  return 0;
                }
              }
              cVar3 = *(char *)(this + 0x8a);
              uVar6 = CONCAT71((int7)((ulonglong)pvVar5 >> 8),cVar3);
              if ((cVar3 == *(char *)(arg1 + 0x8a)) &&
                 ((cVar3 == '\0' ||
                  (uVar6 = (ulonglong)*(uint *)(this + 0x78),
                  *(uint *)(this + 0x78) == *(uint *)(arg1 + 0x78))))) {
                cVar3 = *(char *)(this + 0x8b);
                uVar6 = CONCAT71((int7)(uVar6 >> 8),cVar3);
                if ((cVar3 == *(char *)(arg1 + 0x8b)) &&
                   ((cVar3 == '\0' ||
                    (uVar6 = (ulonglong)*(uint *)(this + 0x7c),
                    *(uint *)(this + 0x7c) == *(uint *)(arg1 + 0x7c))))) {
                  if (((*(char *)(this + 0x8c) == *(char *)(arg1 + 0x8c)) &&
                      (((*(char *)(this + 0x8c) == '\0' ||
                        (*(char *)(this + 0x80) == *(char *)(arg1 + 0x80))) &&
                       (*(char *)(this + 0x8d) == *(char *)(arg1 + 0x8d))))) &&
                     (((*(char *)(this + 0x8d) == '\0' ||
                       (*(char *)(this + 0x81) == *(char *)(arg1 + 0x81))) &&
                      (*(char *)(this + 0x82) == *(char *)(arg1 + 0x82))))) {
                    return CONCAT71((int7)(uVar6 >> 8),
                                    *(char *)(this + 0x83) == *(char *)(arg1 + 0x83));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}




// ==================================================
// @009d9144 (726 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined *puVar15;
  byte *pbVar16;
  undefined8 **ppuVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  ulonglong uVar20;
  undefined7 uVar21;
  longlong *this;
  longlong *plVar22;
  byte *pbVar23;
  uint uVar24;
  byte bVar25;
  byte *pbStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  ushort uStack_c0;
  ulonglong uStack_bc;
  undefined1 uStack_b4;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  pbVar19 = (byte *)(this[0x11] + 1);
  this[0x11] = (longlong)pbVar19;
  if (pbVar19 == (byte *)this[0x10]) {
LAB_009d936f:
    FUN_009d86be();
    return 0;
  }
  uVar8 = *(uint *)(*this + 0x28);
  if (((uVar8 & 0x203) == 0) || ((uVar8 & 0x1003) == 0x1001)) {
    cVar6 = *(char *)(*(longlong *)this[1] + 0x20 + (ulonglong)*pbVar19);
    if (cVar6 == '\x06') {
      uVar10 = FUN_009dc470();
      return uVar10;
    }
    if (cVar6 == '\b') {
      uVar10 = FUN_009dada4();
      return uVar10;
    }
  }
  uVar10 = 0;
  if ((uVar8 >> 0x16 & 1) == 0) {
    uVar24 = (int)this[0x12] + 1;
    uVar10 = (ulonglong)uVar24;
    *(uint *)(this + 0x12) = uVar24;
    if ((uVar8 >> 0x17 & 1) != 0) {
      FUN_009dc95a();
    }
  }
  lVar11 = FUN_009d8a9c();
  iVar9 = (int)uVar10;
  *(int *)(lVar11 + 0x10) = iVar9;
  lVar13 = *this;
  uVar8 = *(uint *)(lVar13 + 0x28);
  bVar25 = (byte)(uVar8 >> 0x14) & 1;
  *(byte *)(lVar11 + 0x14) = bVar25;
  lVar14 = *(longlong *)(lVar13 + 0x160);
  lVar3 = this[0x15];
  uVar20 = (*(longlong *)(lVar13 + 0x168) - lVar14) + 7U & 0xfffffffffffffff8;
  *(ulonglong *)(lVar13 + 0x168) = lVar14 + uVar20;
  this[0x15] = uVar20;
  lVar13 = this[0x16];
  *(undefined1 *)(this + 0x16) = 0;
  uVar2 = *(undefined4 *)((longlong)this + 0x94);
  *(undefined4 *)((longlong)this + 0x94) = 0xffffffff;
  FUN_009d8d70();
  cVar6 = FUN_009d8e36();
  if (cVar6 == '\0') {
    return 0;
  }
  if ((char)this[0x16] != '\0') {
    lVar12 = FUN_009d8a9c();
    *(byte *)(lVar12 + 0x10) = bVar25;
  }
  lVar12 = *this;
  *(uint *)(lVar12 + 0x28) = uVar8;
  uVar24 = uVar8 >> 0x14 & 1;
  if (uVar24 != *(byte *)(this + 3)) {
    *(char *)(this + 3) = (char)uVar24;
  }
  *(char *)(this + 0x16) = (char)lVar13;
  *(undefined4 *)((longlong)this + 0x94) = uVar2;
  pbVar19 = (byte *)this[0x11];
  if (pbVar19 == (byte *)this[0x10]) goto LAB_009d936f;
  uVar20 = (ulonglong)*pbVar19;
  if (*(char *)(*(longlong *)this[1] + 0x20 + uVar20) != '\x02') {
    return 0;
  }
  if ((iVar9 == 0) || ((uVar8 & 0x800000) == 0)) {
LAB_009d93af:
    this[0x11] = (longlong)(pbVar19 + 1);
    lVar13 = FUN_009d8a9c(uVar20,0x18);
    *(int *)(lVar13 + 0x10) = iVar9;
    *(byte *)(lVar13 + 0x14) = (byte)(*(uint *)(*this + 0x28) >> 0x14) & 1;
    this[0x14] = lVar11 - lVar14;
    this[0x15] = lVar3;
    if (iVar9 - 1U < 0x1f) {
      *(uint *)((longlong)this + 0x24) =
           *(uint *)((longlong)this + 0x24) | 1 << ((byte)(iVar9 - 1U) & 0x1f);
    }
    return CONCAT71((int7)(uVar10 >> 8),1);
  }
  if ((ulonglong)(iVar9 - 1) <
      (ulonglong)(*(longlong *)(lVar12 + 0x180) - *(longlong *)(lVar12 + 0x178) >> 4)) {
    uVar20 = (longlong)pbVar19 - this[0xf];
    *(ulonglong *)(*(longlong *)(lVar12 + 0x178) + 8 + (ulonglong)(iVar9 - 1) * 0x10) = uVar20;
    goto LAB_009d93af;
  }
  plVar22 = (longlong *)(lVar12 + 0x178);
  std::__vector_base_common<true>::__throw_out_of_range();
  pbVar16 = *(byte **)(lVar12 + 0x1f8);
  lVar13 = *(longlong *)(lVar12 + 0x200);
  pbVar19 = (byte *)(lVar13 + 1);
  *(byte **)(lVar12 + 0x200) = pbVar19;
  if (pbVar19 == pbVar16) {
    lVar13 = *(longlong *)(lVar12 + 0x1f0);
    ppuVar17 = &puStack_f0;
    FUN_009d5ed0();
    FUN_009d8cfc(ppuVar17,(longlong)pbVar19 - lVar13);
    goto LAB_009d94bd;
  }
  lVar14 = **(longlong **)(lVar12 + 0x180);
  cVar6 = *(char *)(lVar14 + 0x20 + (ulonglong)*pbVar19);
  bVar25 = cVar6 - 0x11;
  if (0x2a < bVar25) goto switchD_009d947b_caseD_1a;
  bVar1 = 0;
  uVar8 = (&switchD_009d947b::switchdataD_009d9d8c)[bVar25];
  uVar21 = (undefined7)((ulonglong)pbVar19 >> 8);
  switch(cVar6) {
  case '\x11':
    uVar10 = FUN_009dd9d0();
    return uVar10;
  case '\x12':
    *(longlong *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '\x13':
    *(longlong *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '\x14':
    *(longlong *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '\x15':
    *(longlong *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '\x16':
    goto switchD_009d947b_caseD_16;
  case '\x17':
    bVar1 = 1;
    goto switchD_009d947b_caseD_16;
  case '\x18':
    *(longlong *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '\x19':
    *(longlong *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  default:
    goto switchD_009d947b_caseD_1a;
  case '!':
    if ((*(ushort *)(*plVar22 + 0x28) & 0x203) == 0) goto LAB_009d977c;
    goto switchD_009d947b_caseD_1a;
  case '0':
    uVar10 = FUN_009ddabc();
    return uVar10;
  case '1':
    *(longlong *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '2':
    *(longlong *)(lVar12 + 0x200) = lVar13 + 2;
    pbVar19 = (byte *)(ulonglong)(byte)(2 - ((*(uint *)(*plVar22 + 0x28) >> 0xc & 1) == 0));
    if ((*(uint *)(*plVar22 + 0x28) >> 0xd & 1) != 0) {
      pbVar19 = (byte *)0x0;
    }
    lVar13 = FUN_009d8a9c(0,0x18);
    *(char *)(lVar13 + 0x10) = (char)pbVar19;
    goto LAB_009d981a;
  case '3':
    *(longlong *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '4':
    *(longlong *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '6':
    goto switchD_009d947b_caseD_36;
  case '7':
    bVar1 = 1;
switchD_009d947b_caseD_36:
    pbVar19 = (byte *)(lVar13 + 2);
    *(byte **)(lVar12 + 0x200) = pbVar19;
    if (pbVar19 == pbVar16) {
      lVar13 = *(longlong *)(lVar12 + 0x1f0);
      ppuVar17 = &puStack_f0;
      FUN_009d5ed0();
      FUN_009d8cfc(ppuVar17,(longlong)pbVar16 - lVar13);
LAB_009d94bd:
      if (((ulonglong)puStack_f0 & 1) != 0) {
        operator_delete(ppuVar17);
      }
LAB_009d94cc:
      uVar10 = 0;
      goto LAB_009d981c;
    }
    if (*(char *)(lVar14 + 0x20 + (ulonglong)*pbVar19) == '\x0f') {
      pbVar19 = (byte *)(lVar13 + 3);
      do {
        *(byte **)(lVar12 + 0x200) = pbVar19;
        if (pbVar16 == pbVar19) {
          lVar13 = *(longlong *)(lVar12 + 0x1f0);
          ppuVar17 = &puStack_f0;
          FUN_009d5ed0();
          FUN_009d8cfc(ppuVar17,(longlong)pbVar16 - lVar13);
          goto LAB_009d94bd;
        }
        bVar25 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (*(char *)(lVar14 + 0x20 + (ulonglong)bVar25) != '\x10');
      *(byte **)(lVar12 + 0x200) = pbVar19;
      uVar8 = FUN_009d826e();
    }
    else {
      uVar8 = FUN_009d826e();
      *(longlong *)(lVar12 + 0x200) = *(longlong *)(lVar12 + 0x200) + 1;
    }
    puVar18 = (undefined8 *)(ulonglong)uVar8;
    if (uVar8 == 0) {
      lVar13 = *(longlong *)(lVar12 + 0x200);
      lVar14 = *(longlong *)(lVar12 + 0x1f0);
      ppuVar17 = &puStack_f0;
      FUN_009d5ed0();
      FUN_009d8cfc(ppuVar17,lVar13 - lVar14);
      goto LAB_009d94bd;
    }
    puStack_f0 = &uStack_e8;
    uStack_e0 = 0;
    uStack_e8 = 0;
    lStack_d8 = 0;
    lStack_d0 = 0;
    uStack_c8 = 0;
    puStack_b0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_c0 = (ushort)bVar1;
    uStack_bc = (ulonglong)uVar8;
    uStack_b4 = 0;
    lVar13 = FUN_009de670(puVar18,0);
    uVar10 = CONCAT71(uVar21,1);
    if (lVar13 == 0) {
      FUN_009d86be();
      goto LAB_009d983e;
    }
    goto LAB_009d98f4;
  case '9':
    if ((*(ushort *)(*plVar22 + 0x28) & 0x203) != 0) goto LAB_009d977c;
    pbStack_f8 = (byte *)(lVar13 + 2);
    *(byte **)(lVar12 + 0x200) = pbStack_f8;
    if (pbStack_f8 == pbVar16) {
      lVar13 = *(longlong *)(lVar12 + 0x1f0);
      ppuVar17 = &puStack_f0;
      FUN_009d5ed0();
      FUN_009d8cfc(ppuVar17,(longlong)pbVar16 - lVar13);
      goto LAB_009d94bd;
    }
    bVar25 = *pbStack_f8;
    bVar1 = *(byte *)(lVar14 + 0x20 + (ulonglong)bVar25);
    lVar14 = 2;
    bVar5 = false;
    if ((ulonglong)bVar1 < 0x1a) {
      uVar10 = 0;
      if ((0x2108000UL >> ((ulonglong)bVar1 & 0x3f) & 1) != 0) {
        pbStack_f8 = (byte *)(lVar13 + 3);
        *(byte **)(lVar12 + 0x200) = pbStack_f8;
        if (pbStack_f8 == pbVar16) {
          lVar13 = *(longlong *)(lVar12 + 0x1f0);
          ppuVar17 = &puStack_f0;
          FUN_009d5ed0();
          FUN_009d8cfc(ppuVar17,(longlong)pbVar16 - lVar13);
          goto LAB_009d94bd;
        }
        uVar10 = 0x10;
        if (bVar1 != 0xf) {
          uVar10 = (ulonglong)(byte)((bVar1 != 0x14) * '\x04' + 0x15);
        }
        bVar25 = *pbStack_f8;
        bVar5 = true;
        lVar14 = 3;
      }
    }
    else {
      uVar10 = 0;
    }
    if (bVar25 == 0x2d) {
      pbStack_f8 = (byte *)(lVar13 + 1 + lVar14);
      *(byte **)(lVar12 + 0x200) = pbStack_f8;
      if (pbStack_f8 == pbVar16) {
        lVar13 = *(longlong *)(lVar12 + 0x1f0);
        ppuVar17 = &puStack_f0;
        FUN_009d5ed0();
        FUN_009d8cfc(ppuVar17,(longlong)pbVar16 - lVar13);
        goto LAB_009d94bd;
      }
    }
    puVar15 = (undefined *)FUN_009dcab0(10,pbVar16);
    cVar6 = (char)uVar10;
    if ((cVar6 != '\0') && ((longlong)puVar15 < 0)) {
      pbVar19 = *(byte **)(lVar12 + 0x1f8);
      pbVar16 = *(byte **)(lVar12 + 0x200);
      puVar15 = &DAT_00002710;
      pbStack_f8 = pbVar16;
      if (pbVar16 != pbVar19) {
        lVar13 = **(longlong **)(lVar12 + 0x180);
        cVar7 = *(char *)(lVar13 + 0x20 + (ulonglong)*pbVar16);
        while (pbVar23 = pbStack_f8, cVar7 != cVar6) {
          pbStack_f8 = pbStack_f8 + 1;
          *(byte **)(lVar12 + 0x200) = pbStack_f8;
          pbVar23 = pbVar19;
          if (pbVar19 == pbStack_f8) break;
          cVar7 = *(char *)(lVar13 + 0x20 + (ulonglong)*pbStack_f8);
        }
        uVar10 = 0;
        if (pbVar16 != pbVar23) {
          uVar20 = 0;
          do {
            uVar10 = uVar20 * 0x40;
            uVar20 = (uVar20 >> 2) + uVar10 + (longlong)(char)*pbVar16 + 0x9e3779b9 ^ uVar20;
            pbVar16 = pbVar16 + 1;
          } while (pbVar23 != pbVar16);
          puVar15 = &DAT_00002710 + uVar20 % 0x7fffd8ee;
        }
      }
    }
    if (bVar25 == 0x2d) {
      puVar15 = (undefined *)((ulonglong)(*(int *)(lVar12 + 0x208) + 1) - (longlong)puVar15);
    }
    if (((longlong)puVar15 < 0x21) && (puVar15 + -1 < (undefined *)0x1f)) {
      uVar8 = *(uint *)(lVar12 + 0x19c) >> ((byte)((char)puVar15 - 1) & 0x1f);
joined_r0x009d9cd9:
      if ((uVar8 & 1) != 0) {
        *(byte **)(lVar12 + 0x200) = pbStack_f8;
        lVar13 = FUN_009d8a9c();
        *(int *)(lVar13 + 0x10) = (int)puVar15;
        *(byte *)(lVar13 + 0x14) = (byte)(*(uint *)(*plVar22 + 0x28) >> 0x14) & 1;
        *(byte **)(lVar12 + 0x200) = pbStack_f8;
        uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
        if (!bVar5) goto LAB_009d981c;
        if ((pbStack_f8 != *(byte **)(lVar12 + 0x1f8)) &&
           (*(char *)(**(longlong **)(lVar12 + 0x180) + 0x20 + (ulonglong)*pbStack_f8) == cVar6)) {
          *(byte **)(lVar12 + 0x200) = pbStack_f8 + 1;
          goto LAB_009d981c;
        }
        lVar13 = *(longlong *)(lVar12 + 0x1f0);
        ppuVar17 = &puStack_f0;
        FUN_009d5ed0();
        FUN_009d8cfc(ppuVar17,(longlong)pbStack_f8 - lVar13);
        goto LAB_009d94bd;
      }
    }
    else if ((10000 < (longlong)puVar15) &&
            ((iVar9 = FUN_009ddbc4(), 0 < iVar9 && (iVar9 = FUN_009ddbc4(), iVar9 < 0x21)))) {
      uVar8 = *(uint *)(lVar12 + 0x19c);
      uVar10 = (ulonglong)uVar8;
      cVar7 = FUN_009ddbc4();
      uVar8 = uVar8 >> ((byte)(cVar7 - 1) & 0x1f);
      goto joined_r0x009d9cd9;
    }
    FUN_009d86be();
    goto LAB_009d94cc;
  case ':':
    if ((*(ushort *)(*plVar22 + 0x28) & 0x203) != 0) goto LAB_009d977c;
    lVar14 = FUN_009d8a9c((longlong)&switchD_009d947b::switchdataD_009d9d8c + (longlong)(int)uVar8,
                          0x18);
    *(undefined4 *)(lVar14 + 0x10) = 0xfffffffb;
    lVar13 = *plVar22;
    *(byte *)(lVar14 + 0x14) = (byte)(*(uint *)(lVar13 + 0x28) >> 0x14) & 1;
    *(ulonglong *)(lVar13 + 0x168) =
         ((*(longlong *)(lVar13 + 0x168) - *(longlong *)(lVar13 + 0x160)) + 7U & 0xfffffffffffffff8)
         + *(longlong *)(lVar13 + 0x160);
    *(longlong *)(lVar12 + 0x200) = *(longlong *)(lVar12 + 0x200) + 1;
    goto LAB_009d981a;
  case ';':
    if ((*(ushort *)(*plVar22 + 0x28) & 0x203) == 0) {
      uVar4 = *(undefined8 *)(lVar12 + 0x1f0);
      *(undefined **)(lVar12 + 0x200) = &DAT_023cf0c0;
      *(undefined **)(lVar12 + 0x1f0) = &DAT_023cf0c0;
      *(undefined **)(lVar12 + 0x1f8) = &DAT_023cf0d4;
      uVar10 = FUN_009d8d70();
      *(longlong *)(lVar12 + 0x200) = lVar13 + 2;
      *(byte **)(lVar12 + 0x1f8) = pbVar16;
      *(undefined8 *)(lVar12 + 0x1f0) = uVar4;
      return uVar10;
    }
LAB_009d977c:
    bVar1 = 0;
switchD_009d947b_caseD_16:
    uVar8 = FUN_009d826e();
    if (uVar8 != 0) {
      puStack_f0 = &uStack_e8;
      uStack_e0 = 0;
      uStack_e8 = 0;
      lStack_d8 = 0;
      lStack_d0 = 0;
      uStack_c8 = 0;
      puVar18 = &uStack_a8;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_c0 = (ushort)bVar1;
      uStack_bc = (ulonglong)uVar8;
      uStack_b4 = 0;
      puStack_b0 = puVar18;
      lVar13 = FUN_009de670(puVar18,0);
      if (lVar13 == 0) {
        FUN_009d86be();
LAB_009d983e:
        uVar10 = 0;
      }
      else {
        *(longlong *)(lVar12 + 0x200) = *(longlong *)(lVar12 + 0x200) + 1;
        uVar10 = CONCAT71(uVar21,1);
      }
LAB_009d98f4:
      FUN_009df1d6();
      if (lStack_d8 != 0) {
        lStack_d0 = lStack_d8;
        operator_delete(puVar18);
      }
      FUN_009df1d6();
      goto LAB_009d981c;
    }
switchD_009d947b_caseD_1a:
    FUN_009dd3a8();
    FUN_009dd2e4();
    goto LAB_009d981a;
  }
  FUN_009d8a9c((longlong)&switchD_009d947b::switchdataD_009d9d8c + (longlong)(int)uVar8,0x10);
LAB_009d981a:
  uVar10 = CONCAT71((int7)((ulonglong)pbVar19 >> 8),1);
LAB_009d981c:
  return uVar10 & 0xffffffff;
}




// ==================================================
// @00efd407 (712 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  byte bVar9;
  ulonglong *arg1;
  uint uVar10;
  ulonglong *this;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined4 local_res8;
  int local_res10;
  
  lVar1 = param_3 + param_4;
  uVar12 = *(uint *)(param_1 + 0x1c);
  bVar15 = *(int *)(param_1 + 0x60) != 1;
  uVar13 = 0xfffffe;
  if (local_res10 != 1) {
    uVar13 = 0xdffffffe;
  }
  if (1 < uVar12 - 1) {
    uVar13 = 0xdffffffe;
  }
  uVar14 = lVar1 - uVar13;
  if (param_4 <= uVar13) {
    uVar14 = param_3;
    uVar13 = param_4;
  }
  iVar5 = (int)lVar1;
  if (uVar13 == 0) {
    if (arg1 == (ulonglong *)0x0 || bVar15) goto LAB_00efd593;
  }
  else {
    if (*this == uVar14) {
      uVar8 = this[2];
      uVar11 = (ulonglong)(uint)this[3];
      uVar6 = *(uint *)((longlong)this + 0x1c);
    }
    else {
      uVar8 = this[1];
      uVar11 = *this - uVar8;
      uVar6 = (uint)this[3];
      *(uint *)((longlong)this + 0x1c) = uVar6;
      uVar10 = (uint)uVar11;
      *(uint *)(this + 3) = uVar10;
      this[2] = uVar8;
      this[1] = uVar14 - uVar11;
      if (uVar10 - uVar6 < 8) {
        *(uint *)((longlong)this + 0x1c) = uVar10;
        uVar6 = uVar10;
      }
    }
    uVar2 = uVar14 + uVar13;
    *this = uVar2;
    if ((uVar6 + uVar8 < uVar2) && (uVar14 < uVar8 + (uVar11 & 0xffffffff))) {
      uVar4 = (undefined4)(uVar2 - uVar8);
      if ((longlong)(uVar11 & 0xffffffff) < (longlong)(uVar2 - uVar8)) {
        uVar4 = (undefined4)uVar11;
      }
      *(undefined4 *)((longlong)this + 0x1c) = uVar4;
    }
    if (arg1 == (ulonglong *)0x0 || bVar15) goto LAB_00efd593;
    if (*arg1 == uVar14) {
      uVar8 = arg1[2];
      uVar12 = *(uint *)((longlong)arg1 + 0x1c);
      uVar11 = (ulonglong)(uint)arg1[3];
    }
    else {
      uVar8 = arg1[1];
      uVar11 = *arg1 - uVar8;
      uVar12 = (uint)arg1[3];
      *(uint *)((longlong)arg1 + 0x1c) = uVar12;
      uVar6 = (uint)uVar11;
      *(uint *)(arg1 + 3) = uVar6;
      arg1[2] = uVar8;
      arg1[1] = uVar14 - uVar11;
      if (uVar6 - uVar12 < 8) {
        *(uint *)((longlong)arg1 + 0x1c) = uVar6;
        uVar12 = uVar6;
      }
    }
    *arg1 = uVar2;
    if ((uVar12 + uVar8 < uVar2) && (uVar14 < uVar8 + (uVar11 & 0xffffffff))) {
      uVar3 = uVar2 - uVar8;
      if ((longlong)(uVar11 & 0xffffffff) < (longlong)(uVar2 - uVar8)) {
        uVar3 = uVar11;
      }
      *(int *)((longlong)arg1 + 0x1c) = (int)uVar3;
    }
  }
  iVar7 = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar7 = iVar5 - (int)arg1[1];
  }
  *(int *)(arg1 + 6) = iVar7;
  _ZSTD_ldm_fillHashTable(param_1 + 0x60,lVar1);
  uVar12 = *(uint *)(param_1 + 0x1c);
LAB_00efd593:
  if (uVar12 < 8) {
    uVar12 = *(uint *)(param_1 + 8);
    if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0xc)) {
      uVar12 = *(uint *)(param_1 + 0xc);
    }
    bVar9 = 0x1c;
    if (uVar12 < 0x1c) {
      bVar9 = (byte)uVar12;
    }
    uVar8 = (ulonglong)(uint)(8 << (bVar9 & 0x1f));
    if (uVar8 < uVar13) {
      uVar13 = uVar8;
      uVar14 = lVar1 - uVar8;
    }
  }
  *(int *)((longlong)this + 0x2c) = (int)uVar14 - (int)this[1];
  iVar7 = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar7 = iVar5 - (int)this[1];
  }
  *(int *)(this + 5) = iVar7;
  *(undefined4 *)(this + 0x11) = *(undefined4 *)(param_1 + 0x94);
  if (8 < uVar13) {
    FUN_00efbaff(uVar14,param_1,lVar1);
    switch(*(undefined4 *)(param_1 + 0x1c)) {
    case 1:
      _ZSTD_fillHashTable(local_res10);
      break;
    case 2:
      _ZSTD_fillDoubleHashTable(local_res10);
      break;
    case 3:
    case 4:
    case 5:
      if (*(int *)((longlong)this + 0x8c) == 0) {
        if (*(int *)(param_1 + 0x90) == 1) {
          ___bzero(CONCAT71(0xefd6,*(undefined1 *)(param_1 + 0xc)));
          _ZSTD_row_update();
        }
        else {
          _ZSTD_insertAndFindFirstIndex(&switchD_00efd634::switchdataD_00efd6d0,local_res8);
        }
      }
      else {
        _ZSTD_dedicatedDictSearch_lazy_loadDictionary();
      }
      break;
    case 6:
    case 7:
    case 8:
    case 9:
      _ZSTD_updateTree(&switchD_00efd634::switchdataD_00efd6d0,lVar1);
    }
    *(int *)((longlong)this + 0x2c) = iVar5 - (int)this[1];
  }
  return;
}




// ==================================================
// @01983fb0 (705 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  pthread_key_t in_ECX;
  longlong *this;
  undefined8 unaff_R12;
  ulonglong uVar4;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  undefined7 uVar5;
  
  uVar6 = (**(code **)(*this + 0x4d8))();
  cVar1 = FUN_00d05410(param_1,uVar6,param_2);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar5 = (undefined7)((ulonglong)unaff_R12 >> 8);
    uVar4 = CONCAT71(uVar5,1);
    if (this[0x2e] != 0) {
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (local_40 == (longlong *)0x0) {
        bVar2 = 0;
      }
      else {
        FUN_01989f80();
        cVar1 = FUN_019a9840();
        if (cVar1 == '\0') {
          bVar2 = 0;
        }
        else {
          FUN_01989f80();
          bVar2 = FUN_019b43a0();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          bVar2 = bVar2 ^ 1;
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar2 != 0) {
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar7 = (double)FUN_012f7cb0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_012f9490();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01989f80();
        dVar9 = (double)(**(code **)(*local_40 + 0x930))(param_1);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar4 = CONCAT71(uVar5,dVar9 <= dVar8 && dVar7 <= dVar9);
      }
    }
  }
  return uVar4 & 0xffffffff;
}




// ==================================================
// @0197ef60 (703 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  longlong *arg1;
  longlong *this;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  if (this[0x2e] != *arg1) {
    if (this[0x2e] != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_40 = 0;
      (**(code **)(this[0x2d] + 0x10))();
      FUN_00d50b00();
      local_40 = '\x01';
      local_48 = this + 0x2d;
      FUN_00e8b9a0();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        (**(code **)(*local_48 + 0x10))();
        FUN_00d50b20();
      }
    }
    lVar1 = *arg1;
    lVar2 = this[0x2e];
    lVar3 = lVar2;
    if (lVar2 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      this[0x2e] = lVar1;
      lVar3 = lVar1;
      if (lVar2 != 0) {
        FUN_00d50b20();
        lVar3 = this[0x2e];
      }
    }
    if (lVar3 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_30 = 0;
      (**(code **)(this[0x2d] + 0x10))();
      FUN_00d50b00();
      local_30 = '\x01';
      local_68 = 0;
      local_60 = '\0';
      local_38 = this + 0x2d;
      FUN_00e8b850(0x20,&local_68);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        (**(code **)(*local_38 + 0x10))();
        FUN_00d50b20();
      }
    }
    FUN_0197f3b0();
    lVar1 = this[0x2e];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_0197f680();
    lVar2 = local_58;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_0197e990();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*this + 0x620))();
    *(undefined1 *)((longlong)this + 0x194) = 1;
  }
  return;
}




// ==================================================
// @01be58e0 (701 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  longlong *this;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_b0;
  char local_a8;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_40;
  char local_38;
  
  if (this[0x27] != 0) {
    FUN_01bbfb40();
    plVar2 = local_40;
    if (local_38 != '\0') goto LAB_01be593f;
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01be593f;
    }
  }
  plVar2 = (longlong *)0x0;
LAB_01be593f:
  FUN_01bf21a0();
  uVar3 = (**(code **)(*this + 0x920))();
  if (this[0x27] == 0) {
    local_68 = '\0';
    local_70 = 0;
  }
  else {
    FUN_01bbfb40();
  }
  FUN_01be8270();
  FUN_01bcee20();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_80 = local_40;
  local_78 = '\0';
  iVar1 = (**(code **)(*(longlong *)this[0x27] + 0x388))(0,&local_80);
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar1 == 0) {
    FUN_01c023b0();
  }
  else {
    (**(code **)(*plVar2 + 0x930))();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00d50b00();
    FUN_01c025c0(uVar3,&stack0xffffffffffffffa0,0);
    if (this != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return iVar1;
}




// ==================================================
// @01b60e40 (696 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  uVar2 = local_68;
  FUN_01b5e510();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto joined_r0x01b60e8a;
    }
LAB_01b610fe:
    uVar2 = 0;
  }
  else {
joined_r0x01b60e8a:
    if ((local_68 == 0) || ((char)(param_2 & 0xffffffff) == '\0')) {
LAB_01b610ed:
      bVar4 = local_68 == 0;
      local_68 = param_2 & 0xffffffff;
      if (bVar4) goto LAB_01b610fe;
    }
    else {
      FUN_01b5e390();
      if ((local_60 == '\0') || (local_68 == 0)) {
        if (local_68 == 0) {
          pvVar1 = _pthread_getspecific(param_1);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_015be040();
          goto LAB_01b610ed;
        }
      }
      else {
        FUN_00d50b20();
      }
      FUN_01b5e390();
      FUN_01bd2e70();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        local_60 = '\0';
        local_68 = 0;
        if (0 < *(int *)(uVar2 + 0xc)) {
          lVar3 = 0;
          do {
            local_68 = *(ulonglong *)(*(longlong *)(uVar2 + 0x10) + lVar3 * 8);
            pvVar1 = _pthread_getspecific(param_1);
            if (pvVar1 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar1 = _pthread_getspecific(param_1);
            if (pvVar1 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_015b7ba0();
            FUN_017eca70();
            pvVar1 = _pthread_getspecific(param_1);
            if (pvVar1 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_015be040();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            lVar3 = lVar3 + 1;
          } while ((int)lVar3 < *(int *)(uVar2 + 0xc));
        }
        FUN_01be3b70();
        FUN_00d50b20();
      }
      FUN_01b5e1b0();
      FUN_01bd5d40();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    uVar2 = CONCAT71((int7)(local_68 >> 8),1);
    FUN_00d50b20();
  }
  return uVar2 & 0xffffffff;
}




// ==================================================
// @01b61220 (696 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  uVar2 = local_68;
  FUN_01b5e510();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto joined_r0x01b6126a;
    }
LAB_01b614de:
    uVar2 = 0;
  }
  else {
joined_r0x01b6126a:
    if ((local_68 == 0) || ((char)(param_2 & 0xffffffff) == '\0')) {
LAB_01b614cd:
      bVar4 = local_68 == 0;
      local_68 = param_2 & 0xffffffff;
      if (bVar4) goto LAB_01b614de;
    }
    else {
      FUN_01b5e390();
      if ((local_60 == '\0') || (local_68 == 0)) {
        if (local_68 == 0) {
          pvVar1 = _pthread_getspecific(param_1);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_015be4c0();
          goto LAB_01b614cd;
        }
      }
      else {
        FUN_00d50b20();
      }
      FUN_01b5e390();
      FUN_01bd2e70();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        local_60 = '\0';
        local_68 = 0;
        if (0 < *(int *)(uVar2 + 0xc)) {
          lVar3 = 0;
          do {
            local_68 = *(ulonglong *)(*(longlong *)(uVar2 + 0x10) + lVar3 * 8);
            pvVar1 = _pthread_getspecific(param_1);
            if (pvVar1 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar1 = _pthread_getspecific(param_1);
            if (pvVar1 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_015b7ba0();
            FUN_017eca70();
            pvVar1 = _pthread_getspecific(param_1);
            if (pvVar1 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_015be4c0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            lVar3 = lVar3 + 1;
          } while ((int)lVar3 < *(int *)(uVar2 + 0xc));
        }
        FUN_01be3b70();
        FUN_00d50b20();
      }
      FUN_01b5e1b0();
      FUN_01bd5d40();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    uVar2 = CONCAT71((int7)(local_68 >> 8),1);
    FUN_00d50b20();
  }
  return uVar2 & 0xffffffff;
}




// ==================================================
// @01b61600 (696 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  uVar2 = local_68;
  FUN_01b5e510();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto joined_r0x01b6164a;
    }
LAB_01b618be:
    uVar2 = 0;
  }
  else {
joined_r0x01b6164a:
    if ((local_68 == 0) || ((char)(param_2 & 0xffffffff) == '\0')) {
LAB_01b618ad:
      bVar4 = local_68 == 0;
      local_68 = param_2 & 0xffffffff;
      if (bVar4) goto LAB_01b618be;
    }
    else {
      FUN_01b5e390();
      if ((local_60 == '\0') || (local_68 == 0)) {
        if (local_68 == 0) {
          pvVar1 = _pthread_getspecific(param_1);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_015b9980();
          goto LAB_01b618ad;
        }
      }
      else {
        FUN_00d50b20();
      }
      FUN_01b5e390();
      FUN_01bd2e70();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        local_60 = '\0';
        local_68 = 0;
        if (0 < *(int *)(uVar2 + 0xc)) {
          lVar3 = 0;
          do {
            local_68 = *(ulonglong *)(*(longlong *)(uVar2 + 0x10) + lVar3 * 8);
            pvVar1 = _pthread_getspecific(param_1);
            if (pvVar1 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar1 = _pthread_getspecific(param_1);
            if (pvVar1 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_015b7ba0();
            FUN_017eca70();
            pvVar1 = _pthread_getspecific(param_1);
            if (pvVar1 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_015b9980();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            lVar3 = lVar3 + 1;
          } while ((int)lVar3 < *(int *)(uVar2 + 0xc));
        }
        FUN_01be3b70();
        FUN_00d50b20();
      }
      FUN_01b5e1b0();
      FUN_01bd5d40();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    uVar2 = CONCAT71((int7)(local_68 >> 8),1);
    FUN_00d50b20();
  }
  return uVar2 & 0xffffffff;
}




// ==================================================
// @01b619e0 (696 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  uVar2 = local_68;
  FUN_01b5e510();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto joined_r0x01b61a2a;
    }
LAB_01b61c9e:
    uVar2 = 0;
  }
  else {
joined_r0x01b61a2a:
    if ((local_68 == 0) || ((char)(param_2 & 0xffffffff) == '\0')) {
LAB_01b61c8d:
      bVar4 = local_68 == 0;
      local_68 = param_2 & 0xffffffff;
      if (bVar4) goto LAB_01b61c9e;
    }
    else {
      FUN_01b5e390();
      if ((local_60 == '\0') || (local_68 == 0)) {
        if (local_68 == 0) {
          pvVar1 = _pthread_getspecific(param_1);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_015b99a0();
          goto LAB_01b61c8d;
        }
      }
      else {
        FUN_00d50b20();
      }
      FUN_01b5e390();
      FUN_01bd2e70();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        local_60 = '\0';
        local_68 = 0;
        if (0 < *(int *)(uVar2 + 0xc)) {
          lVar3 = 0;
          do {
            local_68 = *(ulonglong *)(*(longlong *)(uVar2 + 0x10) + lVar3 * 8);
            pvVar1 = _pthread_getspecific(param_1);
            if (pvVar1 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar1 = _pthread_getspecific(param_1);
            if (pvVar1 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_015b7ba0();
            FUN_017eca70();
            pvVar1 = _pthread_getspecific(param_1);
            if (pvVar1 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_015b99a0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            lVar3 = lVar3 + 1;
          } while ((int)lVar3 < *(int *)(uVar2 + 0xc));
        }
        FUN_01be3b70();
        FUN_00d50b20();
      }
      FUN_01b5e1b0();
      FUN_01bd5d40();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    uVar2 = CONCAT71((int7)(local_68 >> 8),1);
    FUN_00d50b20();
  }
  return uVar2 & 0xffffffff;
}




// ==================================================
// @00928788 (693 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  int unaff_ESI;
  undefined8 *this;
  
  *this = &DAT_0251eb40;
  this[1] = 0;
  this[2] = 0;
  uVar7 = param_1;
  FUN_009b23e0();
  this[0xf] = 0;
  this[0xe] = 0;
  this[0x11] = &DAT_0251a348;
  *(undefined4 *)(this + 0x12) = 0;
  ___bzero();
  this[0x26] = &DAT_0251c758;
  *(undefined1 *)(this + 0x27) = 0;
  this[0x28] = 0;
  this[0x29] = 0;
  this[0x2a] = 0;
  *(undefined2 *)(this + 0x2b) = 1;
  this[0x2c] = 0;
  this[0x2d] = 0;
  this[0x2e] = 0;
  *(undefined8 *)((longlong)this + 0x177) = 0;
  *(undefined4 *)(this + 0x30) = 4;
  *(undefined8 *)((longlong)this + 0x184) = 0;
  *(undefined8 *)((longlong)this + 0x18c) = 0;
  *(undefined8 *)((longlong)this + 0x191) = 0;
  *(undefined1 *)((longlong)this + 0x199) = 1;
  FUN_009b4e10();
  FUN_009285ea();
  if ((unaff_ESI == 0) || (*param_2 == 0)) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    uVar7 = 0x1fc0bd8;
    FUN_00928ab0("pace::AuthorizationVerifier::AuthorizationVerifier(uint32_t, pace::SharedEncryptor_T, bool)"
                 ,0xde);
    FUN_009bd14b();
  }
  pvVar5 = operator_new(uVar7);
  FUN_0098cdbc();
  puVar6 = operator_new(uVar7);
  puVar6[2] = 0;
  puVar6[1] = 0;
  puVar8 = &DAT_0251fb00;
  *puVar6 = &DAT_0251fb00;
  puVar6[3] = pvVar5;
  this[0xe] = pvVar5;
  plVar3 = (longlong *)this[0xf];
  this[0xf] = puVar6;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar2 = *param_2;
  lVar4 = this[0xe];
  _memcpy(puVar8,section_000001f8.segname + 2,param_3);
  if (lVar4 != lVar2) {
    FUN_009ad770();
  }
  *(undefined2 *)(lVar4 + 0x238) = *(undefined2 *)(lVar2 + 0x238);
  *(undefined8 *)(lVar4 + 0x230) = *(undefined8 *)(lVar2 + 0x230);
  *(undefined1 *)(this + 0x10) = 1;
  *(int *)(this + 0xd) = unaff_ESI;
  this[0xb] = 0x200000000;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(this[0xe] + 8);
  *(undefined4 *)((longlong)this + 100) = 0;
  *(char *)(this + 0x38) = (char)param_1;
  FUN_0094d0ec();
  return;
}




// ==================================================
// @0102d800 (680 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  int func;
  int unaff_EBP;
  uint unaff_ESI;
  longlong this;
  int reason;
  undefined4 uVar4;
  
  if (0x25 < unaff_ESI) {
switchD_0102d836_caseD_17:
    return 0xffffffff;
  }
  lVar2 = *(longlong *)(this + 0x78);
  uVar1 = 1;
  switch(unaff_ESI) {
  case 0:
    if (lVar2 == 0) {
      uVar4 = _Poly1305_ctx_size();
      lVar2 = _CRYPTO_zalloc(uVar4,0x1fd);
      *(longlong *)(this + 0x78) = lVar2;
      if (lVar2 == 0) {
        func = 0x86;
        reason = 0x1ff;
        goto LAB_0102da9f;
      }
    }
    *(undefined8 *)(lVar2 + 0xb4) = 0;
    *(undefined8 *)(lVar2 + 0xbc) = 0;
    *(undefined8 *)(lVar2 + 0xa8) = 0;
    *(undefined8 *)(lVar2 + 0xb0) = 0;
    *(undefined4 *)(lVar2 + 0xc4) = 0xc;
    *(undefined8 *)(lVar2 + 200) = 0xffffffffffffffff;
    *(undefined8 *)(lVar2 + 0x94) = 0;
    *(undefined8 *)(lVar2 + 0x9c) = 0;
    uVar1 = 1;
    break;
  default:
    goto switchD_0102d836_caseD_17;
  case 8:
    if (lVar2 != 0) {
      _Poly1305_ctx_size();
      lVar2 = _CRYPTO_memdup(0x211,"crypto/evp/e_chacha20_poly1305.c");
      param_1[0xf] = lVar2;
      if (lVar2 != 0) {
        return 1;
      }
      func = 0xad;
      reason = 0x213;
LAB_0102da9f:
      _ERR_put_error(0x201051f,func,reason,param_4,unaff_EBP);
      return 0;
    }
    goto LAB_0102da75;
  case 9:
    uVar1 = 0;
    if (param_2 - 1 < 0xc) {
      *(uint *)(lVar2 + 0xc4) = param_2;
      uVar1 = 1;
    }
    break;
  case 0x10:
    uVar1 = 0;
    if ((param_2 - 1 < 0x10) && (*(int *)(this + 0x10) != 0)) {
      _memcpy((void *)(ulonglong)(param_2 - 1),(void *)(ulonglong)param_2,param_3);
      uVar1 = 1;
    }
    break;
  case 0x11:
    if (0xf < param_2 - 1) {
      return 0;
    }
    if (param_1 != (undefined8 *)0x0) {
      _memcpy((void *)(ulonglong)(param_2 - 1),(void *)(ulonglong)param_2,param_3);
      *(uint *)(lVar2 + 0xc0) = param_2;
      return 1;
    }
    goto LAB_0102da75;
  case 0x12:
    uVar1 = 0;
    if (param_2 == 0xc) {
      uVar4 = *(undefined4 *)param_1;
      *(undefined4 *)(lVar2 + 0x24) = uVar4;
      *(undefined4 *)(lVar2 + 0x78) = uVar4;
      uVar4 = *(undefined4 *)((longlong)param_1 + 4);
      *(undefined4 *)(lVar2 + 0x28) = uVar4;
      *(undefined4 *)(lVar2 + 0x7c) = uVar4;
      uVar4 = *(undefined4 *)(param_1 + 1);
      *(undefined4 *)(lVar2 + 0x2c) = uVar4;
      *(undefined4 *)(lVar2 + 0x80) = uVar4;
      uVar1 = 1;
    }
    break;
  case 0x16:
    uVar1 = 0;
    if (param_2 == 0xd) {
      uVar1 = *param_1;
      *(undefined8 *)(lVar2 + 0x99) = *(undefined8 *)((longlong)param_1 + 5);
      *(undefined8 *)(lVar2 + 0x94) = uVar1;
      uVar3 = (uint)*(ushort *)((longlong)param_1 + 0xb) << 0x10;
      uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8;
      if (*(int *)(this + 0x10) == 0) {
        if (uVar3 < 0x10) {
          return 0;
        }
        uVar3 = uVar3 - 0x10;
        *(ushort *)(lVar2 + 0x9f) = (ushort)uVar3 << 8 | (ushort)uVar3 >> 8;
      }
      *(ulonglong *)(lVar2 + 200) = (ulonglong)uVar3;
      *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(lVar2 + 0x78);
      *(uint *)(lVar2 + 0x28) = *(uint *)(lVar2 + 0x94) ^ *(uint *)(lVar2 + 0x7c);
      *(uint *)(lVar2 + 0x2c) = *(uint *)(lVar2 + 0x98) ^ *(uint *)(lVar2 + 0x80);
      *(undefined4 *)(lVar2 + 0xbc) = 0;
      uVar1 = 0x10;
    }
    break;
  case 0x17:
    break;
  case 0x25:
    *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + 0xc4);
LAB_0102da75:
    uVar1 = 1;
  }
  return uVar1;
}




// ==================================================
// @01bd4470 (678 bytes) — logic_branch
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  undefined4 uVar2;
  longlong local_260;
  longlong local_248;
  longlong local_240;
  
  if ((DAT_027e5dd8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027e5d28 = FUN_001b37d0();
    _DAT_027e5d10 = "MUSpectrumShaperSlider";
    _DAT_027e5d18 = 0x200;
    _DAT_027e5d20 = FUN_01bdaad0;
    _DAT_027e5d30 = 0;
    uRam00000000027e5d38 = 0;
    _DAT_027e5d40 = 0;
    uRam00000000027e5d48 = 0;
    _DAT_027e5d50 = 0;
    uRam00000000027e5d58 = 0;
    _DAT_027e5d60 = 0;
    uRam00000000027e5d68 = 0;
    _DAT_027e5d70 = 0;
    uRam00000000027e5d78 = 0;
    _DAT_027e5d80 = 0;
    uRam00000000027e5d88 = 0;
    _DAT_027e5d90 = 0;
    uRam00000000027e5d98 = 0;
    _DAT_027e5da0 = 0;
    uRam00000000027e5da8 = 0;
    _DAT_027e5db0 = 0;
    uRam00000000027e5db8 = 0;
    _DAT_027e5dc0 = 0;
    _uRam00000000027e5dc8 = 0;
    _DAT_027e5dd0 = 0;
    ___cxa_guard_release();
  }
  if (DAT_027e5dcb == '\0') {
    FUN_001e95f0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_01be0b20();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_240 != 0) {
      FUN_00d50b20();
    }
    if (local_248 != 0) {
      FUN_00d50b20();
    }
    if (local_260 != 0) {
      FUN_00d50b20();
    }
    FUN_000993f0();
    FUN_000993f0();
  }
  return;
}




// ==================================================
// @01be3200 (677 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *this;
  
  FUN_00006550();
  this[2] = &DAT_025768d0;
  if (DAT_026ea710 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f7680 = "GNPropertyObserver";
      DAT_026f7690 = 0;
      _DAT_026f7688 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *this = &DAT_0265abf8;
  this[2] = &DAT_0265b060;
  this[3] = 0;
  lVar2 = FUN_01bdac40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01be35b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_multipleSelectionHandler";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUSpectrumShaperController");
  }
  this[4] = 0;
  lVar2 = FUN_01bdac40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01be36a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSGenerator");
  }
  this[5] = 0;
  lVar2 = FUN_01bdac40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01be3790();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSGenerator");
  }
  this[6] = 0;
  lVar2 = FUN_01bdac40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01be3880();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSGenerator");
  }
  this[7] = 0;
  lVar2 = FUN_01bdac40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01be3970();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSGenerator");
  }
  this[8] = 0;
  lVar2 = FUN_01bdac40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01be3a60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNEditingContext");
  }
  return;
}




// ==================================================
// @00f46910 (673 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint unaff_ESI;
  longlong this;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  char cVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  char local_31;
  
  lVar7 = *(longlong *)(this + 0x60);
  uVar5 = *(uint *)(this + 0xac);
  uVar19 = (ulonglong)uVar5;
  pcVar2 = (char *)(uVar19 + lVar7);
  uVar11 = (ulonglong)(int)*(uint *)(this + 0xb8);
  uVar14 = *(int *)(this + 0x50) - 0x106;
  uVar15 = uVar5 - uVar14;
  if (uVar5 < uVar14) {
    uVar15 = 0;
  }
  local_31 = pcVar2[uVar11 - 1];
  cVar18 = pcVar2[uVar11];
  uVar14 = *(uint *)(this + 0xbc) >> 2;
  if (*(uint *)(this + 0xb8) < *(uint *)(this + 0xcc)) {
    uVar14 = *(uint *)(this + 0xbc);
  }
  uVar6 = *(uint *)(this + 0xb4);
  uVar12 = *(uint *)(this + 0xd0);
  if (uVar6 < *(uint *)(this + 0xd0)) {
    uVar12 = uVar6;
  }
  uVar13 = uVar19 + lVar7 + 0x102;
  do {
    uVar20 = (ulonglong)unaff_ESI;
    pcVar3 = (char *)(uVar20 + lVar7);
    iVar9 = (int)uVar11;
    if ((((pcVar3[iVar9] == cVar18) && (pcVar3[(longlong)iVar9 + -1] == local_31)) &&
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
        *(uint *)(this + 0xb0) = unaff_ESI;
        if ((int)uVar12 <= (int)uVar10) {
LAB_00f46b99:
          if (uVar6 < uVar10) {
            uVar10 = uVar6;
          }
          return uVar10;
        }
        local_31 = pcVar2[iVar16 + 0x101];
        cVar18 = pcVar2[(int)uVar10];
        uVar11 = (ulonglong)uVar10;
      }
    }
    uVar10 = (uint)uVar11;
    unaff_ESI = (uint)*(ushort *)
                       (*(longlong *)(this + 0x70) +
                       (ulonglong)(unaff_ESI & *(uint *)(this + 0x58)) * 2);
    if ((unaff_ESI <= uVar15) || (uVar14 = uVar14 - 1, uVar14 == 0)) goto LAB_00f46b99;
  } while( true );
}




// ==================================================
// @00a00ec8 (654 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  void *pvVar12;
  longlong this;
  size_t sVar13;
  undefined4 uVar14;
  byte local_40;
  uint local_38;
  
  if (*(int *)(this + 0x68) == 1) {
    *(longlong *)(this + 0x70) = *(longlong *)(this + 0x70) + 1;
  }
  else if (*(int *)(this + 0x68) == 0) {
    puVar9 = operator_new(param_1);
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[4] = 0;
    *puVar9 = &DAT_0252c2f0;
    uVar11 = 1;
    sVar13 = 0;
    FUN_00a14fd8(1,0x400);
    puVar10 = operator_new(uVar11);
    puVar10[2] = 0;
    puVar10[1] = 0;
    *puVar10 = &DAT_0251fb50;
    puVar10[3] = puVar9;
    *(undefined8 **)(this + 0x50) = puVar9;
    plVar3 = *(longlong **)(this + 0x58);
    *(undefined8 **)(this + 0x58) = puVar10;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar14 = *(undefined4 *)(this + 0x60);
    uVar8 = FUN_009e9b47();
    uVar7 = _UNK_023d4e7c;
    uVar6 = _UNK_023d4e78;
    uVar5 = _UNK_023d4e74;
    uVar4 = _DAT_023d4e70;
    *(undefined4 *)(this + 0x7c) = 0x40;
    plVar3 = *(longlong **)(this + 0x50);
    puVar10 = (undefined8 *)plVar3[3];
    puVar9 = puVar10 + 8;
    if ((undefined8 *)plVar3[4] < puVar9) {
      (**(code **)(*plVar3 + 0x80))(puVar9,0x40);
    }
    else {
      puVar10[7] = 0;
      puVar10[6] = 0;
      puVar10[5] = 0;
      puVar10[4] = CONCAT44(0x40,uVar14);
      puVar10[3] = 0x6b684354;
      puVar10[2] = CONCAT44(1,uVar7);
      puVar10[1] = CONCAT44(uVar6,uVar5);
      *puVar10 = CONCAT44(uVar4,uVar8);
      plVar3[3] = (longlong)puVar9;
    }
    if (*(char *)(this + 100) == '\0') {
      *(undefined4 *)(this + 0x78) = 0;
    }
    else {
      FUN_0094c1c0();
      uVar14 = FUN_0097e92b();
      if ((local_40 & 1) == 0) {
        local_38 = (uint)(local_40 >> 1);
      }
      plVar3 = *(longlong **)(this + 0x50);
      pvVar12 = (void *)(ulonglong)(local_38 + 1);
      lVar2 = plVar3[3];
      if ((ulonglong)plVar3[4] < (ulonglong)(lVar2 + (longlong)pvVar12)) {
        (**(code **)(*plVar3 + 0x80))(uVar14,pvVar12);
      }
      else {
        _memcpy(puVar9,pvVar12,sVar13);
        plVar3[3] = lVar2 + (longlong)pvVar12;
      }
      *(int *)(this + 0x78) = *(int *)(this + 0x7c);
      *(uint *)(this + 0x7c) = local_38 + 1 + *(int *)(this + 0x7c);
      if ((local_40 & 1) != 0) {
        operator_delete(puVar9);
      }
    }
    plVar3 = *(longlong **)(this + 0x58);
    if (plVar3 == (longlong *)0x0) {
      FUN_00a01188();
    }
    else {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
      FUN_00a01188();
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    *(longlong *)(this + 0x70) = *(longlong *)(this + 0x70) + 1;
    *(undefined4 *)(this + 0x68) = 1;
  }
  return 0;
}




// ==================================================
// @008d7c1a (650 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
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
  longlong lVar11;
  longlong *arg1;
  longlong this;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,8);
  iVar3 = (**(code **)(*arg1 + 0x90))();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(0xb,8);
  iVar6 = (**(code **)(*arg1 + 0x90))();
  iVar7 = (**(code **)(*arg1 + 0x38))();
  iVar8 = (**(code **)(*arg1 + 0x30))(0xc,8);
  iVar9 = (**(code **)(*arg1 + 0x90))();
  iVar10 = (**(code **)(*arg1 + 0x38))();
  iVar10 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10;
  if (*(char *)(this + 0x4b) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xd,8);
    iVar2 = (**(code **)(*arg1 + 0x90))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar10 = iVar1 + iVar10 + iVar2 + iVar3;
  }
  if (*(char *)(this + 0x4c) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x15,0xf);
    iVar2 = (**(code **)(*arg1 + 0x58))();
    iVar2 = iVar1 + iVar10 + iVar2;
    for (lVar11 = *(longlong *)(this + 0x18); lVar11 != *(longlong *)(this + 0x20);
        lVar11 = lVar11 + 1) {
      iVar1 = (**(code **)(*arg1 + 0x80))();
      iVar2 = iVar2 + iVar1;
    }
    iVar1 = (**(code **)(*arg1 + 0x60))();
    iVar10 = (**(code **)(*arg1 + 0x38))();
    iVar10 = iVar1 + iVar2 + iVar10;
  }
  iVar1 = (**(code **)(*arg1 + 0x30))(0x16,0xf);
  iVar2 = (**(code **)(*arg1 + 0x58))();
  iVar2 = iVar1 + iVar10 + iVar2;
  for (lVar11 = *(longlong *)(this + 0x30); lVar11 != *(longlong *)(this + 0x38);
      lVar11 = lVar11 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar2 = iVar2 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar3 = (**(code **)(*arg1 + 0x38))();
  iVar4 = (**(code **)(*arg1 + 0x40))();
  iVar5 = (**(code **)(*arg1 + 0x28))();
  *(int *)((longlong)arg1 + 0x1c) = *(int *)((longlong)arg1 + 0x1c) + -1;
  return iVar1 + iVar2 + iVar3 + iVar4 + iVar5;
}




// ==================================================
// @00082580 (647 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *this;
  
  FUN_00d4ff40();
  *this = &DAT_025d6680;
  this[7] = 0;
  if (1 < DAT_02802630) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    FUN_00d22760();
    this[7] = puVar3;
  }
  iVar2 = DAT_02802630;
  this[8] = 0;
  *(undefined4 *)(this + 9) = 0;
  this[10] = 0;
  if (1 < iVar2) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    this[10] = puVar3;
    iVar2 = DAT_02802630;
  }
  *(undefined8 *)((longlong)this + 100) = 0;
  *(undefined8 *)((longlong)this + 0x6c) = 0;
  this[0xb] = 0;
  this[0xc] = 0;
  this[0xf] = 0;
  this[0x10] = 0;
  *(undefined2 *)(this + 0x11) = 0;
  *(undefined8 *)((longlong)this + 0x8c) = 0;
  *(undefined8 *)((longlong)this + 0x94) = 0;
  *(undefined1 *)((longlong)this + 0x9c) = 0;
  this[0x14] = 0;
  this[0x15] = 0;
  if (iVar2 < 2) {
    this[0x16] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    this[0x15] = puVar3;
    iVar2 = DAT_02802630;
    this[0x16] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      this[0x16] = puVar3;
      iVar2 = DAT_02802630;
    }
  }
  this[0x19] = 0;
  this[0x1a] = 0;
  this[0x17] = 0;
  this[0x18] = 0;
  if (iVar2 < 2) {
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
    }
  }
  this[0x1c] = 0;
  *(undefined1 *)(this + 0x1d) = 0;
  this[0x1e] = 0;
  *(undefined4 *)(this + 0x1f) = 0;
  this[0x20] = 0;
  *(undefined4 *)(this + 0x21) = 0;
  this[0x29] = 0;
  this[0x22] = 0;
  this[0x23] = 0;
  this[0x24] = 0;
  this[0x25] = 0;
  this[0x26] = 0;
  this[0x27] = 0;
  *(undefined1 *)(this + 0x28) = 0;
  return;
}




// ==================================================
// @00ad6940 (646 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  locale *plVar5;
  uint uVar6;
  streambuf *this_00;
  undefined2 *arg1;
  longlong this;
  undefined4 uVar7;
  longlong local_1b8;
  uint auStack_198 [2];
  longlong alStack_190 [5];
  byte local_168;
  undefined *local_140;
  undefined2 local_32;
  runtime_error *this;
  
  iVar4 = (**(code **)(**(longlong **)(this + 0x60) + 0x18))();
  cVar3 = (**(code **)(**(longlong **)(this + 0x60) + 0x20))();
  if (cVar3 != '\0') {
    FUN_00ad3660();
    iVar4 = iVar4 + 1;
  }
  uVar7 = 0;
  cVar3 = *(char *)(this + 0x78);
  while( true ) {
    if (cVar3 == '\0') {
      (**(code **)(**(longlong **)(this + 0x70) + 0x38))(uVar7,1);
    }
    *(undefined1 *)(this + 0x78) = 1;
    uVar6 = *(byte *)(this + 0x79) - 0x2b;
    this = (runtime_error *)(ulonglong)uVar6;
    if ((0x3a < (byte)uVar6) ||
       (this = (runtime_error *)(ulonglong)(uVar6 & 0xff),
       (0x400000004007fedU >> ((ulonglong)this & 0x3f) & 1) == 0)) break;
    *(undefined1 *)(this + 0x78) = 0;
    uVar7 = std::string::push_back((byte)uVar6);
    iVar4 = iVar4 + 1;
    cVar3 = *(char *)(this + 0x78);
  }
  FUN_00ad90c0();
  lVar1 = *(longlong *)(local_1b8 + -0x18);
  plVar5 = (locale *)std::locale::classic();
  std::ios_base::getloc();
  std::ios_base::imbue((locale *)this);
  std::locale::~locale((locale *)this);
  plVar2 = *(longlong **)((longlong)alStack_190 + lVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
    std::locale::locale((locale *)this,plVar5);
    std::locale::operator=((locale *)this,plVar5);
    std::locale::~locale((locale *)this);
  }
  std::locale::~locale((locale *)this);
  std::istream::operator>>((istream *)this,(short *)plVar5);
  if ((*(uint *)((longlong)auStack_198 + *(longlong *)(local_1b8 + -0x18)) & 3) != 2) {
    ___cxa_allocate_exception();
    uVar7 = std::runtime_error::runtime_error(this,(string *)plVar5);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar7,PTR__runtime_error_0249c260);
  }
  this_00 = (streambuf *)&DAT_02522c80;
  local_140 = &DAT_02522ca8;
  if ((local_168 & 1) != 0) {
    operator_delete(&DAT_02522c80);
  }
  std::streambuf::~streambuf(this_00);
  std::istream::~istream((istream *)this_00);
  std::ios::~ios((ios *)this_00);
  *arg1 = local_32;
  cVar3 = (**(code **)(**(longlong **)(this + 0x60) + 0x20))();
  if (cVar3 != '\0') {
    FUN_00ad3660();
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}




// ==================================================
// @00ad64b0 (644 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  locale *plVar5;
  uint uVar6;
  streambuf *this_00;
  undefined1 *arg1;
  longlong this;
  undefined4 uVar7;
  longlong local_1b8;
  uint auStack_198 [2];
  longlong alStack_190 [5];
  byte local_168;
  undefined *local_140;
  undefined1 local_31;
  runtime_error *this;
  
  iVar4 = (**(code **)(**(longlong **)(this + 0x60) + 0x18))();
  cVar3 = (**(code **)(**(longlong **)(this + 0x60) + 0x20))();
  if (cVar3 != '\0') {
    FUN_00ad3660();
    iVar4 = iVar4 + 1;
  }
  uVar7 = 0;
  cVar3 = *(char *)(this + 0x78);
  while( true ) {
    if (cVar3 == '\0') {
      (**(code **)(**(longlong **)(this + 0x70) + 0x38))(uVar7,1);
    }
    *(undefined1 *)(this + 0x78) = 1;
    uVar6 = *(byte *)(this + 0x79) - 0x2b;
    this = (runtime_error *)(ulonglong)uVar6;
    if ((0x3a < (byte)uVar6) ||
       (this = (runtime_error *)(ulonglong)(uVar6 & 0xff),
       (0x400000004007fedU >> ((ulonglong)this & 0x3f) & 1) == 0)) break;
    *(undefined1 *)(this + 0x78) = 0;
    uVar7 = std::string::push_back((byte)uVar6);
    iVar4 = iVar4 + 1;
    cVar3 = *(char *)(this + 0x78);
  }
  FUN_00ad90c0();
  lVar1 = *(longlong *)(local_1b8 + -0x18);
  plVar5 = (locale *)std::locale::classic();
  std::ios_base::getloc();
  std::ios_base::imbue((locale *)this);
  std::locale::~locale((locale *)this);
  plVar2 = *(longlong **)((longlong)alStack_190 + lVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
    std::locale::locale((locale *)this,plVar5);
    std::locale::operator=((locale *)this,plVar5);
    std::locale::~locale((locale *)this);
  }
  std::locale::~locale((locale *)this);
  std::istream::operator>>((istream *)this,(bool *)plVar5);
  if ((*(uint *)((longlong)auStack_198 + *(longlong *)(local_1b8 + -0x18)) & 3) != 2) {
    ___cxa_allocate_exception();
    uVar7 = std::runtime_error::runtime_error(this,(string *)plVar5);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar7,PTR__runtime_error_0249c260);
  }
  this_00 = (streambuf *)&DAT_02522c80;
  local_140 = &DAT_02522ca8;
  if ((local_168 & 1) != 0) {
    operator_delete(&DAT_02522c80);
  }
  std::streambuf::~streambuf(this_00);
  std::istream::~istream((istream *)this_00);
  std::ios::~ios((ios *)this_00);
  *arg1 = local_31;
  cVar3 = (**(code **)(**(longlong **)(this + 0x60) + 0x20))();
  if (cVar3 != '\0') {
    FUN_00ad3660();
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}




// ==================================================
// @00ad6dd0 (644 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  locale *plVar5;
  uint uVar6;
  streambuf *this_00;
  undefined4 *arg1;
  longlong this;
  undefined4 uVar7;
  longlong local_1b8;
  uint auStack_198 [2];
  longlong alStack_190 [5];
  byte local_168;
  undefined *local_140;
  undefined4 local_34;
  runtime_error *this;
  
  iVar4 = (**(code **)(**(longlong **)(this + 0x60) + 0x18))();
  cVar3 = (**(code **)(**(longlong **)(this + 0x60) + 0x20))();
  if (cVar3 != '\0') {
    FUN_00ad3660();
    iVar4 = iVar4 + 1;
  }
  uVar7 = 0;
  cVar3 = *(char *)(this + 0x78);
  while( true ) {
    if (cVar3 == '\0') {
      (**(code **)(**(longlong **)(this + 0x70) + 0x38))(uVar7,1);
    }
    *(undefined1 *)(this + 0x78) = 1;
    uVar6 = *(byte *)(this + 0x79) - 0x2b;
    this = (runtime_error *)(ulonglong)uVar6;
    if ((0x3a < (byte)uVar6) ||
       (this = (runtime_error *)(ulonglong)(uVar6 & 0xff),
       (0x400000004007fedU >> ((ulonglong)this & 0x3f) & 1) == 0)) break;
    *(undefined1 *)(this + 0x78) = 0;
    uVar7 = std::string::push_back((byte)uVar6);
    iVar4 = iVar4 + 1;
    cVar3 = *(char *)(this + 0x78);
  }
  FUN_00ad90c0();
  lVar1 = *(longlong *)(local_1b8 + -0x18);
  plVar5 = (locale *)std::locale::classic();
  std::ios_base::getloc();
  std::ios_base::imbue((locale *)this);
  std::locale::~locale((locale *)this);
  plVar2 = *(longlong **)((longlong)alStack_190 + lVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
    std::locale::locale((locale *)this,plVar5);
    std::locale::operator=((locale *)this,plVar5);
    std::locale::~locale((locale *)this);
  }
  std::locale::~locale((locale *)this);
  std::istream::operator>>((istream *)this,(int *)plVar5);
  if ((*(uint *)((longlong)auStack_198 + *(longlong *)(local_1b8 + -0x18)) & 3) != 2) {
    ___cxa_allocate_exception();
    uVar7 = std::runtime_error::runtime_error(this,(string *)plVar5);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar7,PTR__runtime_error_0249c260);
  }
  this_00 = (streambuf *)&DAT_02522c80;
  local_140 = &DAT_02522ca8;
  if ((local_168 & 1) != 0) {
    operator_delete(&DAT_02522c80);
  }
  std::streambuf::~streambuf(this_00);
  std::istream::~istream((istream *)this_00);
  std::ios::~ios((ios *)this_00);
  *arg1 = local_34;
  cVar3 = (**(code **)(**(longlong **)(this + 0x60) + 0x20))();
  if (cVar3 != '\0') {
    FUN_00ad3660();
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}




// ==================================================
// @00ad5540 (638 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  locale *plVar5;
  uint uVar6;
  streambuf *this_00;
  undefined8 *arg1;
  longlong this;
  undefined4 uVar7;
  longlong local_1b0;
  uint auStack_190 [2];
  longlong alStack_188 [5];
  byte local_160;
  undefined *local_138;
  undefined8 local_80;
  runtime_error *this;
  
  iVar4 = (**(code **)(**(longlong **)(this + 0x60) + 0x18))();
  cVar3 = (**(code **)(**(longlong **)(this + 0x60) + 0x20))();
  if (cVar3 != '\0') {
    FUN_00ad3660();
    iVar4 = iVar4 + 1;
  }
  uVar7 = 0;
  cVar3 = *(char *)(this + 0x78);
  while( true ) {
    if (cVar3 == '\0') {
      (**(code **)(**(longlong **)(this + 0x70) + 0x38))(uVar7,1);
    }
    *(undefined1 *)(this + 0x78) = 1;
    uVar6 = *(byte *)(this + 0x79) - 0x2b;
    this = (runtime_error *)(ulonglong)uVar6;
    if ((0x3a < (byte)uVar6) ||
       (this = (runtime_error *)(ulonglong)(uVar6 & 0xff),
       (0x400000004007fedU >> ((ulonglong)this & 0x3f) & 1) == 0)) break;
    *(undefined1 *)(this + 0x78) = 0;
    uVar7 = std::string::push_back((byte)uVar6);
    iVar4 = iVar4 + 1;
    cVar3 = *(char *)(this + 0x78);
  }
  FUN_00ad90c0();
  lVar1 = *(longlong *)(local_1b0 + -0x18);
  plVar5 = (locale *)std::locale::classic();
  std::ios_base::getloc();
  std::ios_base::imbue((locale *)this);
  std::locale::~locale((locale *)this);
  plVar2 = *(longlong **)((longlong)alStack_188 + lVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
    std::locale::locale((locale *)this,plVar5);
    std::locale::operator=((locale *)this,plVar5);
    std::locale::~locale((locale *)this);
  }
  std::locale::~locale((locale *)this);
  std::istream::operator>>((istream *)this,(longlong *)plVar5);
  if ((*(uint *)((longlong)auStack_190 + *(longlong *)(local_1b0 + -0x18)) & 3) != 2) {
    ___cxa_allocate_exception();
    uVar7 = std::runtime_error::runtime_error(this,(string *)plVar5);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar7,PTR__runtime_error_0249c260);
  }
  this_00 = (streambuf *)&DAT_02522c80;
  local_138 = &DAT_02522ca8;
  if ((local_160 & 1) != 0) {
    operator_delete(&DAT_02522c80);
  }
  std::streambuf::~streambuf(this_00);
  std::istream::~istream((istream *)this_00);
  std::ios::~ios((ios *)this_00);
  *arg1 = local_80;
  cVar3 = (**(code **)(**(longlong **)(this + 0x60) + 0x20))();
  if (cVar3 != '\0') {
    FUN_00ad3660();
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}




// ==================================================
// @00ad5b10 (638 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  locale *plVar5;
  uint uVar6;
  streambuf *this_00;
  undefined8 *arg1;
  longlong this;
  undefined4 uVar7;
  longlong local_1b0;
  uint auStack_190 [2];
  longlong alStack_188 [5];
  byte local_160;
  undefined *local_138;
  undefined8 local_80;
  runtime_error *this;
  
  iVar4 = (**(code **)(**(longlong **)(this + 0x60) + 0x18))();
  cVar3 = (**(code **)(**(longlong **)(this + 0x60) + 0x20))();
  if (cVar3 != '\0') {
    FUN_00ad3660();
    iVar4 = iVar4 + 1;
  }
  uVar7 = 0;
  cVar3 = *(char *)(this + 0x78);
  while( true ) {
    if (cVar3 == '\0') {
      (**(code **)(**(longlong **)(this + 0x70) + 0x38))(uVar7,1);
    }
    *(undefined1 *)(this + 0x78) = 1;
    uVar6 = *(byte *)(this + 0x79) - 0x2b;
    this = (runtime_error *)(ulonglong)uVar6;
    if ((0x3a < (byte)uVar6) ||
       (this = (runtime_error *)(ulonglong)(uVar6 & 0xff),
       (0x400000004007fedU >> ((ulonglong)this & 0x3f) & 1) == 0)) break;
    *(undefined1 *)(this + 0x78) = 0;
    uVar7 = std::string::push_back((byte)uVar6);
    iVar4 = iVar4 + 1;
    cVar3 = *(char *)(this + 0x78);
  }
  FUN_00ad90c0();
  lVar1 = *(longlong *)(local_1b0 + -0x18);
  plVar5 = (locale *)std::locale::classic();
  std::ios_base::getloc();
  std::ios_base::imbue((locale *)this);
  std::locale::~locale((locale *)this);
  plVar2 = *(longlong **)((longlong)alStack_188 + lVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
    std::locale::locale((locale *)this,plVar5);
    std::locale::operator=((locale *)this,plVar5);
    std::locale::~locale((locale *)this);
  }
  std::locale::~locale((locale *)this);
  std::istream::operator>>((istream *)this,(ulonglong *)plVar5);
  if ((*(uint *)((longlong)auStack_190 + *(longlong *)(local_1b0 + -0x18)) & 3) != 2) {
    ___cxa_allocate_exception();
    uVar7 = std::runtime_error::runtime_error(this,(string *)plVar5);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar7,PTR__runtime_error_0249c260);
  }
  this_00 = (streambuf *)&DAT_02522c80;
  local_138 = &DAT_02522ca8;
  if ((local_160 & 1) != 0) {
    operator_delete(&DAT_02522c80);
  }
  std::streambuf::~streambuf(this_00);
  std::istream::~istream((istream *)this_00);
  std::ios::~ios((ios *)this_00);
  *arg1 = local_80;
  cVar3 = (**(code **)(**(longlong **)(this + 0x60) + 0x20))();
  if (cVar3 != '\0') {
    FUN_00ad3660();
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}




// ==================================================
// @009e4ecc (630 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  byte *pbVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong this;
  undefined4 uVar10;
  byte bVar11;
  byte bVar12;
  int *piVar13;
  
  pbVar7 = *(byte **)(this + 0x28);
  lVar1 = *(longlong *)(this + 0x58);
  if (pbVar7 == *(byte **)(this + 0x20)) {
    bVar12 = (byte)*(uint *)(lVar1 + 0x118);
    bVar11 = (byte)((*(uint *)(lVar1 + 0x118) & 2) >> 1);
  }
  else {
    bVar12 = *(byte *)(lVar1 + 0x18 + (ulonglong)*pbVar7);
    bVar11 = (bVar12 & 2) >> 1;
  }
  bVar12 = bVar12 & 1;
  piVar13 = *(int **)(this + 0xd8);
  if (((*piVar13 != 5) || (piVar13[6] != *(int *)(lVar1 + 0x130))) ||
     (lVar4 = *(longlong *)(this + 0x80), *(int *)(lVar4 + 0x10) != piVar13[6])) {
    piVar13 = piVar13 + -0xc;
    if (piVar13 < *(int **)(this + 0xd0)) {
      FUN_009e5df8();
      pbVar7 = *(byte **)(this + 0x28);
      piVar13 = (int *)(*(longlong *)(this + 0xd8) + -0x30);
    }
    uVar10 = 0x80000003;
    if (*(longlong *)(this + 0xc0) != *(longlong *)(this + 0xb8)) {
      uVar10 = *(undefined4 *)(*(longlong *)(this + 0xc0) + -0x70);
    }
    *piVar13 = 5;
    FUN_009e623c(pbVar7,this + 0x80,uVar10);
    *(int **)(this + 0xd8) = piVar13;
    lVar4 = *(longlong *)(this + 0x80);
  }
  uVar2 = *(ulonglong *)(lVar1 + 0x128);
  if (*(longlong *)(lVar4 + 0x18) == 0) {
    lVar8 = *(longlong *)(this + 0x28);
LAB_009e4fe0:
    *(longlong *)(lVar4 + 0x20) = lVar8;
    lVar4 = *(longlong *)(this + 0x80);
    uVar9 = *(ulonglong *)(lVar4 + 0x18);
  }
  else {
    lVar8 = *(longlong *)(this + 0x28);
    if (lVar8 != *(longlong *)(lVar4 + 0x20)) goto LAB_009e4fe0;
    *(ulonglong *)(lVar4 + 0x18) = uVar2;
    uVar9 = uVar2;
  }
  if (uVar9 < *(ulonglong *)(lVar1 + 0x120)) {
    if (bVar12 == 0) {
      return 0;
    }
LAB_009e5001:
    *(ulonglong *)(lVar4 + 0x18) = uVar9 + 1;
    uVar6 = *(undefined8 *)(lVar1 + 8);
  }
  else {
    if (*(char *)(lVar1 + 0x135) == '\0') {
      bVar12 = bVar12 ^ 1 | uVar2 <= uVar9;
LAB_009e50c8:
      if (bVar11 == 0) {
        if (bVar12 != 0) {
          return 0;
        }
        goto LAB_009e5001;
      }
      if (bVar12 == 0) {
        uVar6 = *(undefined8 *)(lVar1 + 8);
        puVar5 = (undefined4 *)(*(longlong *)(this + 0xd8) + -0x18);
        if (puVar5 < *(undefined4 **)(this + 0xd0)) {
          FUN_009e5df8();
          puVar5 = (undefined4 *)(*(longlong *)(this + 0xd8) + -0x18);
        }
        uVar3 = *(undefined8 *)(this + 0x28);
        *puVar5 = 0xd;
        *(undefined8 *)(puVar5 + 2) = uVar6;
        *(undefined8 *)(puVar5 + 4) = uVar3;
        *(undefined4 **)(this + 0xd8) = puVar5;
      }
    }
    else {
      if ((*(byte *)(this + 0x61) & 4) == 0) {
        if ((uVar9 < uVar2) && (bVar12 == 1)) {
LAB_009e5037:
          if (bVar11 != 0) {
            uVar6 = *(undefined8 *)(lVar1 + 0x10);
            puVar5 = (undefined4 *)(*(longlong *)(this + 0xd8) + -0x18);
            if (puVar5 < *(undefined4 **)(this + 0xd0)) {
              FUN_009e5df8();
              puVar5 = (undefined4 *)(*(longlong *)(this + 0xd8) + -0x18);
            }
            uVar3 = *(undefined8 *)(this + 0x28);
            *puVar5 = 4;
            *(undefined8 *)(puVar5 + 2) = uVar6;
            *(undefined8 *)(puVar5 + 4) = uVar3;
            *(undefined4 **)(this + 0xd8) = puVar5;
            lVar4 = *(longlong *)(this + 0x80);
            uVar9 = *(ulonglong *)(lVar4 + 0x18);
          }
          goto LAB_009e5001;
        }
      }
      else {
        bVar12 = bVar12 ^ 1 | uVar2 <= uVar9;
        if (*(char *)(this + 0x7b) == '\0') goto LAB_009e50c8;
        if (bVar12 == 0) goto LAB_009e5037;
      }
      if (bVar11 == 0) {
        return 0;
      }
    }
    uVar6 = *(undefined8 *)(lVar1 + 0x10);
  }
  *(undefined8 *)(this + 0x58) = uVar6;
  return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
}




// ==================================================
// @01b82070 (626 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong *unaff_RBX;
  ulonglong uVar4;
  longlong *this;
  undefined8 uVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  longlong local_78;
  char local_70;
  longlong local_50;
  char local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  cVar2 = (**(code **)(*this + 0x9d0))();
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_01b8225a;
  }
  local_38 = FUN_00e7bdb0();
  local_40 = FUN_00e7bdb0();
  uVar5 = FUN_01b70bd0(&local_40,&local_38);
  if (local_48 == '\0') {
    if (local_50 != 0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  if (*(int *)(local_50 + 0xc) == 1) {
    local_30 = this[0x33];
    if (local_30 >> 0x20 == 0) {
LAB_01b82141:
      if (local_38 >> 0x20 == 0) {
        FUN_01e436c0();
      }
      else {
        uVar5 = (**(code **)(*this + 0xa68))();
        auVar6._0_4_ = _DAT_023945e0 & (uint)(float)uVar5;
        auVar6._4_4_ = _UNK_023945e4 & (uint)((ulonglong)uVar5 >> 0x20);
        auVar6._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb;
        auVar6._12_4_ = _UNK_023945ec & (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
        auVar7._4_12_ = SUB1612(auVar6 | _DAT_023945f0,4);
        auVar7._0_4_ = SUB164(auVar6 | _DAT_023945f0,0) + (float)uVar5;
        roundss(ZEXT816(0),auVar7,0xb);
      }
      if (local_40 >> 0x20 == 0) {
        FUN_01e436c0();
      }
      else {
        uVar5 = (**(code **)(*this + 0xa68))();
        auVar8._0_4_ = _DAT_023945e0 & (uint)(float)uVar5;
        auVar8._4_4_ = _UNK_023945e4 & (uint)((ulonglong)uVar5 >> 0x20);
        auVar8._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_00;
        auVar8._12_4_ = _UNK_023945ec & (uint)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
        auVar9._4_12_ = SUB1612(auVar8 | _DAT_023945f0,4);
        auVar9._0_4_ = SUB164(auVar8 | _DAT_023945f0,0) + (float)uVar5;
        roundss(ZEXT816(0),auVar9,0xb);
      }
      unaff_RBX = (longlong *)this[0x2c];
      (**(code **)(*unaff_RBX + 0x3c8))();
      local_30 = FUN_01a8fc90();
      if (local_30 >> 0x20 == 0) goto LAB_01b82250;
      uVar5 = extraout_XMM0_Qa_01;
      if (local_38._4_4_ != 0) {
        cVar2 = FUN_00e7c020();
        if (cVar2 == '\0') goto LAB_01b82250;
        uVar5 = extraout_XMM0_Qa_02;
        if (local_30._4_4_ == 0) goto LAB_01b82269;
      }
      if (local_40._4_4_ == 0) goto LAB_01b82269;
      uVar3 = FUN_00e7c020();
      uVar4 = (ulonglong)uVar3;
      param_2 = (byte)uVar3 & param_2;
      uVar5 = extraout_XMM0_Qa_03;
    }
    else {
      if (local_38._4_4_ == 0) {
LAB_01b82122:
        if ((local_40._4_4_ != 0) &&
           (cVar2 = FUN_00e7c020(), uVar5 = extraout_XMM0_Qa_00, cVar2 == '\0')) goto LAB_01b82141;
      }
      else {
        cVar2 = FUN_00e7c020();
        if (cVar2 == '\0') goto LAB_01b82141;
        uVar5 = extraout_XMM0_Qa;
        if (local_30._4_4_ != 0) goto LAB_01b82122;
      }
LAB_01b82269:
      uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    }
    if (param_2 != 0) {
      (**(code **)(*this + 0xa30))(uVar5,local_30);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      uVar5 = FUN_01b70bd0(&local_40,&local_38);
      iVar1 = *(int *)(local_50 + 0xc);
      if (local_48 != '\0') {
        uVar5 = FUN_00d50b20();
      }
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
      if (iVar1 == 2) {
        (**(code **)(*this + 0x9f0))(uVar5,local_30);
      }
    }
  }
  else {
LAB_01b82250:
    uVar4 = 0;
  }
  FUN_00d50b20();
LAB_01b8225a:
  return uVar4 & 0xffffffff;
}




// ==================================================
// @01d38830 (624 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong this;
  undefined8 uVar8;
  undefined8 in_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar13;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  float local_48;
  float fStack_44;
  longlong local_38;
  char local_30;
  
  local_48 = (float)param_1;
  fStack_44 = (float)((ulonglong)param_1 >> 0x20);
  *(undefined1 *)(this + 0x48) = 0;
  FUN_01d38ea0();
  iVar3 = *(int *)(local_38 + 0x18);
  if (local_30 != '\0') {
    FUN_00d50b20();
  }
  if (0x36 < iVar3 + 0x1bU) {
    if (0x53 < iVar3) {
      FUN_01d38ea0();
      lVar4 = *(longlong *)(local_38 + 0x10);
      if (local_30 != '\0') {
        FUN_00d50b20();
      }
      FUN_01d38ea0();
      lVar5 = *(longlong *)(local_38 + 0x10);
      if (local_30 != '\0') {
        FUN_00d50b20();
      }
      lVar6 = (ulonglong)(iVar3 / 0x1c - 1) * 0x1c;
      lVar7 = (ulonglong)(iVar3 / 0x1c - 2) * 0x1c;
      if (((*(int *)(lVar4 + lVar7) == 0) || (*(int *)(lVar4 + lVar7) == 1)) &&
         (*(int *)(lVar5 + lVar6) == 1)) {
        fVar1 = *(float *)(lVar5 + 4 + lVar6);
        fVar11 = *(float *)(lVar5 + 8 + lVar6);
        fVar2 = *(float *)(lVar4 + 4 + lVar7);
        fVar13 = *(float *)(lVar4 + 8 + lVar7);
        auVar9 = insertps(ZEXT416((uint)fVar1),local_48,0x1c);
        auVar12 = insertps(ZEXT416((uint)fVar2),ZEXT416((uint)fVar1),0x10);
        auVar10._0_4_ = auVar9._0_4_ - auVar12._0_4_;
        auVar10._4_4_ = auVar9._4_4_ - auVar12._4_4_;
        auVar10._8_4_ = auVar9._8_4_ - auVar12._8_4_;
        auVar10._12_4_ = auVar9._12_4_ - auVar12._12_4_;
        if (((auVar10._0_4_ != auVar10._4_4_) || (auVar10._0_4_ != 0.0)) || (NAN(auVar10._0_4_))) {
          auVar9._8_8_ = in_XMM0_Qb;
          auVar9._0_8_ = param_1;
          auVar9 = blendps(auVar9,ZEXT416((uint)fVar11),1);
          auVar14 = insertps(ZEXT416((uint)fVar13),ZEXT416((uint)fVar11),0x10);
          fVar11 = auVar9._0_4_ - auVar14._0_4_;
          fVar13 = auVar9._4_4_ - auVar14._4_4_;
          auVar12._0_8_ = CONCAT44(fVar13,fVar11);
          auVar12._8_4_ = auVar9._8_4_ - auVar14._8_4_;
          auVar12._12_4_ = auVar9._12_4_ - auVar14._12_4_;
          if (((fVar11 != fVar13) || (fVar11 != 0.0)) || (NAN(fVar11))) {
            fVar1 = *(float *)(this + 0xc);
            if (((fVar1 != 0.0) || (NAN(fVar1))) &&
               ((((auVar10._0_4_ != 0.0 || (NAN(auVar10._0_4_))) &&
                 ((auVar10._4_4_ != 0.0 || (NAN(auVar10._4_4_))))) &&
                ((auVar14._8_4_ = auVar12._8_4_, auVar14._0_8_ = auVar12._0_8_,
                 auVar14._12_4_ = auVar12._12_4_, auVar9 = divps(auVar14,auVar10),
                 (float)((uint)(auVar9._0_4_ - auVar9._4_4_) & _DAT_02390140) <= fVar1 ||
                 (auVar9 = divps(auVar10,auVar12),
                 (float)((uint)(auVar9._0_4_ - auVar9._4_4_) & _DAT_02390140) <= fVar1)))))) {
              *(undefined8 *)(lVar5 + 4 + lVar6) = param_1;
              return;
            }
          }
          else if (((fVar2 <= fVar1) && (fVar1 <= local_48)) ||
                  ((fVar1 <= fVar2 && (local_48 <= fVar1)))) {
            *(float *)(lVar6 + lVar5 + 4) = local_48;
            return;
          }
        }
        else if (((fVar13 <= fVar11) && (fVar11 <= fStack_44)) ||
                ((fVar11 <= fVar13 && (fStack_44 <= fVar11)))) {
          *(float *)(lVar6 + lVar5 + 8) = fStack_44;
          return;
        }
      }
    }
    uVar8 = FUN_01d38ea0();
    iVar3 = *(int *)(local_38 + 0x18);
    FUN_00c8e340(uVar8,1);
    lVar4 = *(longlong *)(local_38 + 0x10);
    *(undefined4 *)(lVar4 + iVar3) = 1;
    *(undefined8 *)(lVar4 + 4 + (longlong)iVar3) = param_1;
    if (local_30 != '\0') {
      FUN_00d50b20();
    }
    return;
  }
  FUN_01d39180();
  return;
}




// ==================================================
// @0142e970 (618 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  void *pvVar1;
  pthread_key_t pVar2;
  longlong *in_RCX;
  longlong *arg1;
  double dVar3;
  longlong local_90;
  undefined1 local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  double local_60;
  longlong local_40;
  char local_38;
  
  pVar2 = (pthread_key_t)in_RCX;
  local_90 = *arg1;
  local_88 = 0;
  local_60 = param_1;
  FUN_0142e5e0(pVar2,&local_90);
  if (local_40 == 0) {
    FUN_0142ed20();
    local_80 = *arg1;
    local_78 = '\0';
    FUN_0123f630();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    FUN_00d21140();
    local_70 = *arg1;
    local_68 = '\0';
    FUN_012c3160(local_60,param_2);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (*in_RCX != 0) {
      pvVar1 = _pthread_getspecific(pVar2);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_60 = (double)FUN_013201a0();
      pvVar1 = _pthread_getspecific(pVar2);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar3 = (double)FUN_01320130();
      FUN_012c5ff0(local_60 - dVar3);
      *(undefined1 *)(local_40 + 0x108) = 1;
    }
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @009cf554 (616 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  undefined1 *puVar1;
  longlong lVar2;
  size_t sVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  longlong this;
  undefined8 *puVar12;
  dword *pdVar13;
  bool bVar14;
  byte *local_38;
  undefined1 local_29;
  
  if (*(longlong *)(this + 0x78) == 0) {
    return 0xffffffff;
  }
  if ((*(byte *)(this + 0x18c) & 8) == 0) {
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    bVar14 = *(char *)(this + 0x192) == '\0';
    lVar9 = 0x40;
    if (bVar14) {
      lVar9 = 0x68;
    }
    param_1 = *(dword **)(this + lVar9);
    pbVar10 = (byte *)((longlong)param_1 +
                      *(longlong *)((ulonglong)bVar14 * 0x10 + 0x60 + this));
    *(dword **)(this + 0x10) = param_1;
    *(byte **)(this + 0x18) = pbVar10;
    *(byte **)(this + 0x20) = pbVar10;
    *(undefined4 *)(this + 0x18c) = 8;
    bVar14 = true;
  }
  else {
    pbVar10 = *(byte **)(this + 0x18);
    bVar14 = false;
  }
  if (pbVar10 == (byte *)0x0) {
    pbVar10 = &stack0xffffffffffffffd8;
    param_1 = (dword *)&local_29;
    *(dword **)(this + 0x10) = param_1;
    *(byte **)(this + 0x18) = pbVar10;
    *(byte **)(this + 0x20) = pbVar10;
  }
  if (bVar14) {
    pbVar5 = *(byte **)(this + 0x20);
    pdVar13 = (dword *)0x0;
  }
  else {
    pbVar5 = *(byte **)(this + 0x20);
    pdVar13 = (dword *)(((longlong)pbVar5 - *(longlong *)(this + 0x10)) / 2);
    param_1 = &MACH_HEADER.cputype;
    if ((undefined1 *)((longlong)&MACH_HEADER.magic + 3) < pdVar13) {
      pdVar13 = &MACH_HEADER.cputype;
    }
  }
  if (pbVar10 != pbVar5) {
    uVar6 = (ulonglong)*pbVar10;
    goto LAB_009cf78e;
  }
  _memmove(param_1,pdVar13,param_3);
  if (*(char *)(this + 0x192) == '\0') {
    lVar9 = *(longlong *)(this + 0x48);
    lVar7 = *(longlong *)(this + 0x50);
    if ((void *)(lVar7 - lVar9) != (void *)0x0) {
      _memmove(param_1,(void *)(lVar7 - lVar9),param_3);
      lVar9 = *(longlong *)(this + 0x48);
      lVar7 = *(longlong *)(this + 0x50);
    }
    lVar2 = *(longlong *)(this + 0x40);
    lVar9 = (lVar7 - lVar9) + lVar2;
    *(longlong *)(this + 0x48) = lVar9;
    if (lVar2 == this + 0x58) {
      lVar7 = 8;
    }
    else {
      lVar7 = *(longlong *)(this + 0x60);
    }
    *(longlong *)(this + 0x50) = lVar2 + lVar7;
    uVar8 = *(longlong *)(this + 0x70) - (longlong)pdVar13;
    uVar6 = (lVar2 + lVar7) - lVar9;
    if (uVar8 <= uVar6) {
      uVar6 = uVar8;
    }
    puVar11 = (undefined8 *)(this + 0x88);
    puVar12 = (undefined8 *)(this + 0x108);
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    sVar3 = _fread(*(void **)(this + 0x78),(size_t)uVar6,param_3,param_4);
    if (CONCAT44(extraout_var_00,sVar3) != 0) {
      if (*(longlong **)(this + 0x80) == (longlong *)0x0) {
        FUN_009cf810();
        uVar6 = 0xffffffff;
        if (((section_00000068.segname._0_8_ != 0) &&
            ((ulonglong)MACH_HEADER._16_8_ < (ulonglong)MACH_HEADER._24_8_)) &&
           ((((byte)section_00000158.offset & 0x10) != 0 ||
            (*(char *)(MACH_HEADER._24_8_ + -1) == '\x01')))) {
          puVar1 = (undefined1 *)(MACH_HEADER._24_8_ + -1);
          MACH_HEADER._24_8_ = MACH_HEADER._24_8_ + -1;
          *puVar1 = 1;
          uVar6 = 1;
        }
        return uVar6;
      }
      lVar9 = CONCAT44(extraout_var_00,sVar3) + *(longlong *)(this + 0x48);
      *(longlong *)(this + 0x50) = lVar9;
      iVar4 = (**(code **)(**(longlong **)(this + 0x80) + 0x20))
                        (lVar9,*(undefined8 *)(this + 0x40),this + 0x48,
                         (undefined1 *)(*(longlong *)(this + 0x10) + (longlong)pdVar13));
      if (iVar4 == 3) {
        pbVar10 = *(byte **)(this + 0x40);
        local_38 = *(byte **)(this + 0x50);
        *(byte **)(this + 0x10) = pbVar10;
      }
      else {
        pbVar10 = (byte *)((longlong)pdVar13 + *(longlong *)(this + 0x10));
        if (local_38 == pbVar10) goto LAB_009cf789;
      }
      *(byte **)(this + 0x18) = pbVar10;
      *(byte **)(this + 0x20) = local_38;
      uVar6 = (ulonglong)*pbVar10;
      goto LAB_009cf78e;
    }
  }
  else {
    sVar3 = _fread(*(void **)(this + 0x78),
                   ((int)*(undefined8 *)(this + 0x20) - (int)pdVar13) -
                   (int)*(undefined8 *)(this + 0x10),param_3,param_4);
    if (CONCAT44(extraout_var,sVar3) != 0) {
      puVar1 = (undefined1 *)(*(longlong *)(this + 0x10) + (longlong)pdVar13);
      *(undefined1 **)(this + 0x18) = puVar1;
      *(undefined1 **)(this + 0x20) = puVar1 + CONCAT44(extraout_var,sVar3);
      uVar6 = (ulonglong)*(byte *)(*(longlong *)(this + 0x10) + (longlong)pdVar13);
      goto LAB_009cf78e;
    }
  }
LAB_009cf789:
  uVar6 = 0xffffffff;
LAB_009cf78e:
  if (*(undefined1 **)(this + 0x10) == &local_29) {
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  return uVar6;
}




// ==================================================
// @01be64b0 (615 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  char cVar1;
  longlong arg1;
  undefined8 *this;
  bool bVar2;
  longlong lVar4;
  longlong local_b0;
  char local_a8;
  longlong local_88;
  char local_80;
  longlong local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  bool bVar3;
  
  if (*(longlong *)(arg1 + 0x138) == 0) {
    local_38 = '\0';
    local_40 = (longlong *)0x0;
  }
  else {
    FUN_01bbfb40();
  }
  FUN_01beead0();
  if ((local_80 == '\0') && (local_88 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    if (0 < *(int *)(local_88 + 0xc)) {
      lVar4 = 0;
      bVar3 = false;
      bVar2 = false;
      do {
        if (bVar2) {
          FUN_01bc0650();
          FUN_00d4efa0();
          FUN_00d4efa0();
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          cVar1 = (**(code **)(*local_40 + 0x50))();
          if (local_60 != 0) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          if (cVar1 != '\0') {
            FUN_01bc0650();
            FUN_002e0650();
            FUN_00d50b20();
            return this;
          }
        }
        else {
          bVar2 = bVar3;
          if (*(longlong *)(*(longlong *)(local_88 + 0x10) + lVar4 * 8) ==
              *(longlong *)(arg1 + 0x138)) {
            bVar3 = true;
            bVar2 = true;
          }
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(local_88 + 0xc));
    }
    FUN_002e0650();
    FUN_00d50b20();
  }
  *(undefined1 *)(this + 1) = 0;
  *this = 0;
  return this;
}




// ==================================================
// @00905508 (612 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
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
  lVar6 = this + 0x20;
  lVar7 = this + 8;
  do {
    psVar5 = &local_32;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (&local_32,&local_38,param_3,param_4,lVar6,lVar7,uVar8,uVar9,uVar10);
    if (local_38 == 0) {
      iVar3 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar8 & 1) != 0) {
        operator_delete(psVar5);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar3 + iVar2 + iVar1;
    }
    if (local_32 < 0xb) {
      if (local_32 == 1) {
        if (local_38 == 0xb) {
          iVar3 = (**(code **)(*arg1 + 0x150))();
          *(undefined1 *)(this + 0x6a) = 1;
        }
        else {
          iVar3 = (**(code **)(*arg1 + 0x160))();
        }
      }
      else if (local_32 == 2) {
        if (local_38 == 0xb) {
          iVar3 = (**(code **)(*arg1 + 0x150))();
          *(undefined1 *)(this + 0x6b) = 1;
        }
        else {
          iVar3 = (**(code **)(*arg1 + 0x160))();
        }
      }
      else if (local_32 == 3) {
        if (local_38 == 0xb) {
          iVar3 = (**(code **)(*arg1 + 0x150))();
          *(undefined1 *)(this + 0x6c) = 1;
        }
        else {
          iVar3 = (**(code **)(*arg1 + 0x160))();
        }
      }
      else {
LAB_009056bc:
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    else if (local_32 == 0xb) {
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(undefined1 *)(this + 0x6d) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    else if (local_32 == 0x15) {
      if (local_38 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(undefined1 *)(this + 0x6e) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    else {
      if (local_32 != 0x16) goto LAB_009056bc;
      if (local_38 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(undefined1 *)(this + 0x6f) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    iVar4 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar3 + iVar2 + iVar1 + iVar4;
  } while( true );
}




// ==================================================
// @009da82e (612 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  byte *pbVar5;
  longlong lVar6;
  void *pvVar7;
  undefined7 uVar9;
  ulonglong uVar8;
  longlong lVar10;
  longlong *this;
  void *pvVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte local_58 [24];
  longlong local_40;
  longlong local_38;
  
  if ((((int *)this[2] == (int *)0x0) || (*(int *)this[2] == 0)) &&
     ((*(uint *)(*this + 0x28) & 0x1000003) != 0)) {
    lVar12 = this[0x11];
    lVar6 = this[0xf];
    pbVar5 = local_58;
    FUN_009d5ed0();
    FUN_009d8cfc(pbVar5,lVar12 - lVar6);
    if ((local_58[0] & 1) != 0) {
      operator_delete(pbVar5);
    }
    uVar8 = 0;
  }
  else {
    if (*(uint *)(this + 0x13) < *(uint *)(this + 0x12)) {
      *(uint *)(this + 0x13) = *(uint *)(this + 0x12);
    }
    if (-1 < *(int *)((longlong)this + 0x94)) {
      *(int *)(this + 0x12) = *(int *)((longlong)this + 0x94);
    }
    this[0x11] = this[0x11] + 1;
    lVar2 = FUN_009d8a9c(param_1,0x18);
    lVar12 = *(longlong *)(*this + 0x160);
    lVar3 = FUN_009dcfc8(0x120,0x11);
    lVar6 = *this;
    lVar10 = ((*(longlong *)(lVar6 + 0x168) - *(longlong *)(lVar6 + 0x160)) + 7U &
             0xfffffffffffffff8) + *(longlong *)(lVar6 + 0x160);
    *(longlong *)(lVar6 + 0x168) = lVar10;
    *(longlong *)(lVar3 + 0x10) = lVar10 - lVar3;
    lVar6 = *(longlong *)(*this + 0x168) - *(longlong *)(*this + 0x160);
    this[0x15] = lVar6;
    if ((char)this[0x16] != '\0') {
      lVar3 = this[3];
      lVar6 = FUN_009d8a9c(lVar6,0x18);
      *(char *)(lVar6 + 0x10) = (char)lVar3;
    }
    lVar12 = (lVar2 - lVar12) + 0x120;
    plVar1 = (longlong *)this[0x18];
    uVar9 = (undefined7)((ulonglong)this >> 8);
    if (plVar1 == (longlong *)this[0x19]) {
      lVar6 = this[0x17];
      pvVar11 = (void *)((longlong)plVar1 - lVar6);
      lVar2 = (longlong)pvVar11 >> 3;
      uVar8 = lVar2 + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar3 = this[0x19] - lVar6;
      uVar13 = lVar3 >> 2;
      if (uVar13 < uVar8) {
        uVar13 = uVar8;
      }
      pvVar7 = (void *)0xfffffffffffffff;
      if (0xffffffffffffffe < (ulonglong)(lVar3 >> 3)) {
        uVar13 = 0x1fffffffffffffff;
      }
      if (uVar13 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        local_40 = lVar6;
        local_38 = lVar2;
        if (0x1fffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_009d5f52();
        }
        pvVar4 = operator_new(0xffffffff);
        lVar2 = local_38;
        lVar6 = local_40;
      }
      lVar2 = (longlong)pvVar4 + lVar2 * 8 + 8;
      *(longlong *)(lVar2 + -8) = lVar12;
      if (0 < (longlong)pvVar11) {
        _memcpy(pvVar7,pvVar11,(size_t)lVar6);
      }
      this[0x17] = (longlong)pvVar4;
      this[0x18] = lVar2;
      this[0x19] = (longlong)((longlong)pvVar4 + uVar13 * 8);
      uVar8 = CONCAT71(uVar9,1);
      if (lVar6 != 0) {
        operator_delete(pvVar7);
      }
    }
    else {
      *plVar1 = lVar12;
      this[0x18] = (longlong)(plVar1 + 1);
      uVar8 = CONCAT71(uVar9,1);
    }
  }
  return uVar8 & 0xffffffff;
}




// ==================================================
// @008dab96 (589 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong this;
  byte local_38;
  
  FUN_009ad920(param_1,0x16);
  FUN_009ad920();
  if (*(char *)(this + 0x48) == '\0') {
    FUN_009ad920();
  }
  else {
    FUN_008dae10();
    FUN_009ad920();
    if ((local_38 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_009ad920();
  FUN_009ad920();
  if (*(char *)(this + 0x49) == '\0') {
    FUN_009ad920();
  }
  else {
    FUN_008dafac();
    FUN_009ad920();
    if ((local_38 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_009ad920();
  FUN_009ad920();
  if (*(char *)(this + 0x4a) == '\0') {
    FUN_009ad920();
  }
  else {
    FUN_008db148();
    FUN_009ad920();
    if ((local_38 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_009ad920();
  FUN_009ad920();
  if (*(char *)(this + 0x4b) == '\0') {
    FUN_009ad920();
  }
  else {
    FUN_008db2e4();
    FUN_009ad920();
    if ((local_38 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_009ad920();
  return;
}




// ==================================================
// @00a9f004 (587 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  undefined8 uVar1;
  string *this;
  undefined8 *arg1;
  undefined8 *this;
  
  *this = &DAT_0252a260;
  this[1] = &DAT_0252a720;
  *(undefined4 *)(this + 2) = 0xffffffff;
  this[3] = 0xffffffffffffffff;
  *(undefined2 *)(this + 4) = 0x101;
  this[0xe] = 0;
  this[0xf] = 0;
  this[0x10] = 0;
  this[0x12] = 0;
  this[0x13] = 0;
  this[0x14] = 0;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  this[0xb] = 0;
  this[0xc] = 0;
  *(undefined1 *)(this + 0x20) = 0;
  this[0x1f] = 0;
  this[0x1e] = 0;
  this[0x1d] = 0;
  this[0x1c] = 0;
  this[0x1b] = 0;
  this[0x1a] = 0;
  this[0x19] = 0;
  this[0x18] = 0;
  this[0x17] = 0;
  this = (string *)0x100010100000001;
  *(undefined8 *)((longlong)this + 0x101) = 0x100010100000001;
  *(undefined1 *)((longlong)this + 0x111) = 0;
  *(undefined8 *)((longlong)this + 0x109) = 0;
  FUN_00aa9d7a();
  *(undefined1 *)(this + 5) = *(undefined1 *)(arg1 + 5);
  *(undefined4 *)((longlong)this + 0x2c) = *(undefined4 *)((longlong)arg1 + 0x2c);
  *(undefined4 *)(this + 6) = *(undefined4 *)(arg1 + 6);
  *(undefined1 *)((longlong)this + 0x34) = *(undefined1 *)((longlong)arg1 + 0x34);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined4 *)(this + 0xd) = *(undefined4 *)(arg1 + 0xd);
  std::string::operator=(this,param_2);
  *(undefined4 *)(this + 0x11) = *(undefined4 *)(arg1 + 0x11);
  *(undefined4 *)((longlong)this + 0x8c) = *(undefined4 *)((longlong)arg1 + 0x8c);
  std::string::operator=(this,param_2);
  *(undefined4 *)(this + 0x15) = *(undefined4 *)(arg1 + 0x15);
  *(undefined4 *)((longlong)this + 0xac) = *(undefined4 *)((longlong)arg1 + 0xac);
  *(undefined1 *)(this + 0x16) = *(undefined1 *)(arg1 + 0x16);
  std::string::operator=(this,param_2);
  if (this != arg1) {
    FUN_009bc850();
    FUN_009bc850();
  }
  *(undefined2 *)(this + 0x22) = *(undefined2 *)(arg1 + 0x22);
  uVar1 = arg1[0x20];
  this[0x21] = arg1[0x21];
  this[0x20] = uVar1;
  return;
}




// ==================================================
// @0142e5e0 (582 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong arg1;
  longlong *this;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar1 = *(uint *)(*(longlong *)(arg1 + 0xf0) + 0xc);
  if ((int)uVar1 < 1) {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    return this;
  }
  lVar6 = 0;
  lVar5 = 0;
  bVar2 = false;
  lVar8 = **(longlong **)(*(longlong *)(arg1 + 0xf0) + 0x10);
  bVar3 = bVar2;
  if (lVar8 == 0) goto LAB_0142e660;
  do {
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    bVar2 = true;
    if ((bVar3) && (lVar5 != 0)) {
      FUN_00d50b20();
    }
LAB_0142e690:
    lVar5 = lVar8;
    cVar4 = FUN_012c2b70();
    if (cVar4 != '\0') goto LAB_0142e7fd;
    if ((ulonglong)uVar1 - 1 == lVar6) {
      uVar7 = 0;
      while( true ) {
        lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(arg1 + 0xf0) + 0x10) + uVar7 * 8);
        if (lVar5 == lVar8) {
          if ((!bVar2) && (lVar5 != 0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (lVar5 != 0)) {
            bVar2 = true;
            FUN_00d50b20();
            lVar5 = lVar8;
          }
          else {
            bVar2 = true;
            lVar5 = lVar8;
          }
        }
        cVar4 = FUN_012c2b70();
        if (cVar4 != '\0') break;
        uVar7 = uVar7 + 1;
        if (uVar1 == uVar7) {
          *(undefined1 *)(this + 1) = 0;
          *this = 0;
          if ((bVar2) && (lVar5 != 0)) {
            FUN_00d50b20();
          }
          return this;
        }
      }
LAB_0142e7fd:
      *(undefined1 *)(this + 1) = 0;
      if ((!bVar2) && (lVar5 != 0)) {
        FUN_00d50b00();
      }
      *this = lVar5;
      *(undefined1 *)(this + 1) = 1;
      return this;
    }
    lVar6 = lVar6 + 1;
    lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(arg1 + 0xf0) + 0x10) + lVar6 * 8);
    bVar3 = bVar2;
  } while (lVar5 != lVar8);
LAB_0142e660:
  lVar8 = lVar5;
  if ((!bVar2) && (lVar5 != 0)) {
    bVar2 = true;
    FUN_00d50b00();
  }
  goto LAB_0142e690;
}




// ==================================================
// @00aa7086 (575 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  undefined8 uVar1;
  undefined8 *arg1;
  undefined8 *this;
  
  *this = &DAT_0252a558;
  this[1] = &DAT_0252a720;
  *(undefined4 *)(this + 2) = 0xffffffff;
  this[3] = 0xffffffffffffffff;
  *(undefined2 *)(this + 4) = 0x101;
  ___bzero();
  this[0x27] = 0;
  this[0x26] = 0;
  this[0x25] = 0;
  this[0x24] = 0;
  this[0x23] = 0;
  this[0x22] = 0;
  *(undefined4 *)(this + 0x28) = 0x1000100;
  *(undefined2 *)((longlong)this + 0x144) = 0x100;
  *(undefined8 *)((longlong)this + 0x146) = 0x1000000000000;
  *(undefined1 *)((longlong)this + 0x14e) = 0;
  FUN_00aa9d7a();
  *(undefined1 *)(this + 5) = *(undefined1 *)(arg1 + 5);
  *(undefined4 *)((longlong)this + 0x2c) = *(undefined4 *)((longlong)arg1 + 0x2c);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  *(undefined4 *)(this + 0x21) = *(undefined4 *)(arg1 + 0x21);
  if (this != arg1) {
    FUN_009bc850();
    FUN_009bc850();
  }
  uVar1 = arg1[0x28];
  *(undefined8 *)((longlong)this + 0x147) = *(undefined8 *)((longlong)arg1 + 0x147);
  this[0x28] = uVar1;
  return;
}




// ==================================================
// @01bd3c40 (569 bytes) — logic_branch
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  undefined4 uVar2;
  longlong local_218;
  longlong local_1d0;
  
  if ((DAT_027e6cb8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027e6c08 = FUN_0006d940();
    _DAT_027e6bf0 = "MUSpectrumShaperEnvelopeView";
    _DAT_027e6bf8 = 0x198;
    _DAT_027e6c00 = FUN_01bdee00;
    _DAT_027e6c10 = 0;
    uRam00000000027e6c18 = 0;
    _DAT_027e6c20 = 0;
    uRam00000000027e6c28 = 0;
    _DAT_027e6c30 = 0;
    uRam00000000027e6c38 = 0;
    _DAT_027e6c40 = 0;
    uRam00000000027e6c48 = 0;
    _DAT_027e6c50 = 0;
    uRam00000000027e6c58 = 0;
    _DAT_027e6c60 = 0;
    uRam00000000027e6c68 = 0;
    _DAT_027e6c70 = 0;
    uRam00000000027e6c78 = 0;
    _DAT_027e6c80 = 0;
    uRam00000000027e6c88 = 0;
    _DAT_027e6c90 = 0;
    uRam00000000027e6c98 = 0;
    _DAT_027e6ca0 = 0;
    _uRam00000000027e6ca8 = 0;
    _DAT_027e6cb0 = 0;
    ___cxa_guard_release();
  }
  if (DAT_027e6cab == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_01bdee90();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01b836f0();
    FUN_00e87920(uVar2,0);
    if (local_1d0 != 0) {
      FUN_00d50b20();
    }
    if (local_218 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    FUN_0006d770();
  }
  return;
}




// ==================================================
// @00a9aea4 (567 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  undefined8 uVar1;
  string *this;
  undefined8 *arg1;
  undefined8 *this;
  
  *this = &DAT_0252a130;
  this[1] = &DAT_0252a720;
  *(undefined4 *)(this + 2) = 0xffffffff;
  this[3] = 0xffffffffffffffff;
  *(undefined2 *)(this + 4) = 0x101;
  this[0x16] = 0;
  this[0x17] = 0;
  this[0x18] = 0;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  this[0xb] = 0;
  this[0xc] = 0;
  this[0xe] = 0;
  this[0xf] = 0;
  this[0x10] = 0;
  this[0x11] = 0;
  this[0x12] = 0;
  this[0x13] = 0;
  this[0x1c] = 0;
  this[0x1b] = 0;
  this[0x1a] = 0;
  *(undefined2 *)(this + 0x1d) = 0x100;
  this = (string *)0x101000000000000;
  *(undefined8 *)((longlong)this + 0xea) = 0x101000000000000;
  *(undefined4 *)((longlong)this + 0xf5) = 0;
  *(undefined4 *)((longlong)this + 0xf2) = 0;
  FUN_00aa9d7a();
  *(undefined1 *)(this + 5) = *(undefined1 *)(arg1 + 5);
  *(undefined4 *)((longlong)this + 0x2c) = *(undefined4 *)((longlong)arg1 + 0x2c);
  *(undefined1 *)(this + 6) = *(undefined1 *)(arg1 + 6);
  if (this != arg1) {
    FUN_008df080();
    param_2 = (string *)arg1[0xb];
    FUN_008df080();
  }
  *(undefined4 *)(this + 0xd) = *(undefined4 *)(arg1 + 0xd);
  *(undefined4 *)((longlong)this + 0x6c) = *(undefined4 *)((longlong)arg1 + 0x6c);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(arg1 + 0x14);
  *(undefined4 *)((longlong)this + 0xa4) = *(undefined4 *)((longlong)arg1 + 0xa4);
  *(undefined1 *)(this + 0x15) = *(undefined1 *)(arg1 + 0x15);
  std::string::operator=(this,param_2);
  *(undefined4 *)(this + 0x19) = *(undefined4 *)(arg1 + 0x19);
  *(undefined1 *)((longlong)this + 0xcc) = *(undefined1 *)((longlong)arg1 + 0xcc);
  if (this != arg1) {
    FUN_009bc850();
  }
  *(undefined1 *)(this + 0x1f) = *(undefined1 *)(arg1 + 0x1f);
  uVar1 = arg1[0x1d];
  this[0x1e] = arg1[0x1e];
  this[0x1d] = uVar1;
  return;
}




// ==================================================
// @01b81d90 (567 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined7 uVar8;
  longlong *this;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  char local_38;
  
  cVar3 = (**(code **)(*this + 0x9d0))();
  if (cVar3 == '\0') {
    puVar7 = (undefined1 *)0x0;
    goto LAB_01b81f95;
  }
  local_50 = FUN_00e7bdb0();
  local_48 = FUN_00e7bdb0();
  puVar6 = &local_48;
  FUN_01b70bd0(puVar6,&local_50);
  lVar1 = local_40;
  pVar5 = (pthread_key_t)puVar6;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (*(int *)(lVar1 + 0xc) == 1) {
    local_60 = local_50;
    local_58 = local_48;
    local_38 = '\0';
    local_40 = 0;
    lVar1 = this[0x2b];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar6 = &local_60;
    cVar3 = FUN_01253c10(puVar6,&local_40,&local_58,0);
    lVar2 = local_40;
    pVar5 = (pthread_key_t)puVar6;
    if (cVar3 == '\0') {
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
LAB_01b81edd:
      local_60 = local_50;
      local_58 = local_48;
      lVar1 = this[0x2b];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_012535e0(&local_60,&local_40,&local_58,0);
      lVar2 = local_40;
      if (cVar3 == '\0') {
        if (lVar1 == 0) {
          puVar7 = (undefined1 *)0x0;
        }
        else {
          FUN_00d50b20();
          puVar7 = (undefined1 *)0x0;
        }
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        uVar8 = (undefined7)((ulonglong)lVar2 >> 8);
        puVar7 = (undefined1 *)CONCAT71(uVar8,lVar2 != 0);
        if ((lVar2 != 0) && (param_2 != '\0')) {
          puVar7 = (undefined1 *)CONCAT71(uVar8,1);
          (**(code **)(*this + 0xa40))();
        }
      }
    }
    else {
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 == 0) goto LAB_01b81edd;
      puVar7 = &DAT_02802501;
      if (param_2 != '\0') {
        (**(code **)(*this + 0xa40))();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    puVar7 = (undefined1 *)0x0;
  }
  FUN_00d50b20();
LAB_01b81f95:
  return (ulonglong)puVar7 & 0xffffffff;
}




// ==================================================
// @01415520 (564 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_025dfa10;
  FUN_014157a0();
  FUN_01415ac0();
  *(undefined4 *)(this + 4) = 0;
  if (DAT_027c0c68 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027c0bb8 = FUN_00d4fe50();
      _DAT_027c0ba0 = "MUSpectrumShaperDisplayInfoBuffer";
      _DAT_027c0ba8 = 0x28;
      _DAT_027c0bb0 = FUN_01415360;
      _DAT_027c0bc0 = 0;
      uRam00000000027c0bc8 = 0;
      _DAT_027c0bd0 = 0;
      _DAT_027c0c48 = 0;
      uRam00000000027c0c50 = 0;
      _DAT_027c0c58 = 0;
      DAT_027c0c5a = 1;
      _DAT_027c0bd8 = 0;
      uRam00000000027c0be0 = 0;
      _DAT_027c0be8 = 0;
      uRam00000000027c0bf0 = 0;
      _DAT_027c0bf8 = 0;
      uRam00000000027c0c00 = 0;
      _DAT_027c0c08 = 0;
      uRam00000000027c0c10 = 0;
      _DAT_027c0c18 = 0;
      uRam00000000027c0c20 = 0;
      _DAT_027c0c28 = 0;
      uRam00000000027c0c30 = 0;
      _DAT_027c0c38 = 0;
      uRam00000000027c0c40 = 0;
      DAT_027c0c63 = 0;
      _DAT_027c0c5b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027c0c5b == '\0') {
    FUN_01415d80();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x24) = 0;
  if (DAT_027c0c68 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027c0bb8 = FUN_00d4fe50();
      _DAT_027c0ba0 = "MUSpectrumShaperDisplayInfoBuffer";
      _DAT_027c0ba8 = 0x28;
      _DAT_027c0bb0 = FUN_01415360;
      _DAT_027c0bc0 = 0;
      uRam00000000027c0bc8 = 0;
      _DAT_027c0bd0 = 0;
      _DAT_027c0c48 = 0;
      uRam00000000027c0c50 = 0;
      _DAT_027c0c58 = 0;
      DAT_027c0c5a = 1;
      _DAT_027c0bd8 = 0;
      uRam00000000027c0be0 = 0;
      _DAT_027c0be8 = 0;
      uRam00000000027c0bf0 = 0;
      _DAT_027c0bf8 = 0;
      uRam00000000027c0c00 = 0;
      _DAT_027c0c08 = 0;
      uRam00000000027c0c10 = 0;
      _DAT_027c0c18 = 0;
      uRam00000000027c0c20 = 0;
      _DAT_027c0c28 = 0;
      uRam00000000027c0c30 = 0;
      _DAT_027c0c38 = 0;
      uRam00000000027c0c40 = 0;
      DAT_027c0c63 = 0;
      _DAT_027c0c5b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027c0c5b == '\0') {
    FUN_01415f10();
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @01be7d10 (557 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  longlong *arg1;
  undefined8 *this;
  longlong *local_38;
  char local_30;
  
  (**(code **)(*arg1 + 0x958))();
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) goto LAB_01be7f25;
    FUN_00d50b00();
  }
  else if (local_38 == (longlong *)0x0) goto LAB_01be7f25;
  lVar1 = arg1[0x34];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_38 + 0x968))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = arg1[0x2f];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_38 + 0x988))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = arg1[0x30];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_38 + 0x990))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = arg1[0x31];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_38 + 0x998))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = arg1[0x32];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_0010acd0();
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  (**(code **)(*local_38 + 0x9e8))();
  if (local_38 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_01be7f25:
  *this = local_38;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @009cf328 (556 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  undefined1 *puVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_var;
  byte *pbVar5;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  longlong lVar6;
  FILE *pFVar7;
  longlong lVar8;
  longlong *plVar9;
  byte *pbVar10;
  longlong *plVar11;
  longlong *this;
  longlong *plVar12;
  ulonglong uVar13;
  dword *pdVar14;
  bool bVar15;
  byte *pbStack_f0;
  undefined1 uStack_e1;
  longlong local_b8 [16];
  longlong local_38;
  
  sVar2 = (size_t)param_3;
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  uVar13 = 0;
  if (this[0xf] == 0) goto LAB_009cf4e6;
  plVar11 = (longlong *)this[0x10];
  if (plVar11 == (longlong *)0x0) {
    FUN_009cf810();
    if (this[0xf] == 0) {
      return 0xffffffff;
    }
    if ((*(byte *)((longlong)this + 0x18c) & 8) == 0) {
      this[5] = 0;
      this[6] = 0;
      this[7] = 0;
      bVar15 = *(char *)((longlong)this + 0x192) == '\0';
      lVar6 = 0x40;
      if (bVar15) {
        lVar6 = 0x68;
      }
      param_1 = *(dword **)((longlong)this + lVar6);
      pbVar10 = (byte *)((longlong)param_1 + this[(ulonglong)bVar15 * 2 + 0xc]);
      this[2] = (longlong)param_1;
      this[3] = (longlong)pbVar10;
      this[4] = (longlong)pbVar10;
      *(undefined4 *)((longlong)this + 0x18c) = 8;
      bVar15 = true;
    }
    else {
      pbVar10 = (byte *)this[3];
      bVar15 = false;
    }
    if (pbVar10 == (byte *)0x0) {
      pbVar10 = &stack0xffffffffffffff20;
      param_1 = (dword *)&uStack_e1;
      this[2] = (longlong)param_1;
      this[3] = (longlong)pbVar10;
      this[4] = (longlong)pbVar10;
    }
    if (bVar15) {
      pbVar5 = (byte *)this[4];
      pdVar14 = (dword *)0x0;
    }
    else {
      pbVar5 = (byte *)this[4];
      pdVar14 = (dword *)(((longlong)pbVar5 - this[2]) / 2);
      param_1 = &MACH_HEADER.cputype;
      if ((undefined1 *)((longlong)&MACH_HEADER.magic + 3) < pdVar14) {
        pdVar14 = &MACH_HEADER.cputype;
      }
    }
    if (pbVar10 != pbVar5) {
      uVar13 = (ulonglong)*pbVar10;
      goto LAB_009cf78e;
    }
    _memmove(param_1,pdVar14,sVar2);
    if (*(char *)((longlong)this + 0x192) == '\0') {
      lVar6 = this[9];
      lVar8 = this[10];
      if ((void *)(lVar8 - lVar6) != (void *)0x0) {
        _memmove(param_1,(void *)(lVar8 - lVar6),sVar2);
        lVar6 = this[9];
        lVar8 = this[10];
      }
      plVar11 = (longlong *)this[8];
      lVar6 = (lVar8 - lVar6) + (longlong)plVar11;
      this[9] = lVar6;
      if (plVar11 == this + 0xb) {
        lVar8 = 8;
      }
      else {
        lVar8 = this[0xc];
      }
      this[10] = (longlong)plVar11 + lVar8;
      uVar13 = ((longlong)plVar11 + lVar8) - lVar6;
      if ((ulonglong)(this[0xe] - (longlong)pdVar14) <= uVar13) {
        uVar13 = this[0xe] - (longlong)pdVar14;
      }
      plVar11 = this + 0x11;
      plVar9 = this + 0x21;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *plVar9 = *plVar11;
        plVar11 = plVar11 + 1;
        plVar9 = plVar9 + 1;
      }
      sVar2 = _fread((void *)this[0xf],(size_t)uVar13,sVar2,param_4);
      if (CONCAT44(extraout_var_01,sVar2) != 0) {
        if ((longlong *)this[0x10] == (longlong *)0x0) {
          FUN_009cf810();
          uVar13 = 0xffffffff;
          if (((section_00000068.segname._0_8_ != 0) &&
              ((ulonglong)MACH_HEADER._16_8_ < (ulonglong)MACH_HEADER._24_8_)) &&
             ((((byte)section_00000158.offset & 0x10) != 0 ||
              (*(char *)(MACH_HEADER._24_8_ + -1) == '\x01')))) {
            puVar1 = (undefined1 *)(MACH_HEADER._24_8_ + -1);
            MACH_HEADER._24_8_ = MACH_HEADER._24_8_ + -1;
            *puVar1 = 1;
            uVar13 = 1;
          }
          return uVar13;
        }
        lVar6 = CONCAT44(extraout_var_01,sVar2) + this[9];
        this[10] = lVar6;
        iVar4 = (**(code **)(*(longlong *)this[0x10] + 0x20))
                          (lVar6,this[8],this + 9,
                           (undefined1 *)(this[2] + (longlong)pdVar14));
        if (iVar4 == 3) {
          pbVar10 = (byte *)this[8];
          pbStack_f0 = (byte *)this[10];
          this[2] = (longlong)pbVar10;
        }
        else {
          pbVar10 = (byte *)((longlong)pdVar14 + this[2]);
          if (pbStack_f0 == pbVar10) goto LAB_009cf789;
        }
        this[3] = (longlong)pbVar10;
        this[4] = (longlong)pbStack_f0;
        uVar13 = (ulonglong)*pbVar10;
        goto LAB_009cf78e;
      }
    }
    else {
      sVar2 = _fread((void *)this[0xf],((int)this[4] - (int)pdVar14) - (int)this[2],
                     sVar2,param_4);
      if (CONCAT44(extraout_var_00,sVar2) != 0) {
        puVar1 = (undefined1 *)(this[2] + (longlong)pdVar14);
        this[3] = (longlong)puVar1;
        this[4] = (longlong)(puVar1 + CONCAT44(extraout_var_00,sVar2));
        uVar13 = (ulonglong)*(byte *)(this[2] + (longlong)pdVar14);
        goto LAB_009cf78e;
      }
    }
LAB_009cf789:
    uVar13 = 0xffffffff;
LAB_009cf78e:
    if ((undefined1 *)this[2] == &uStack_e1) {
      this[4] = 0;
      this[3] = 0;
      this[2] = 0;
    }
    return uVar13;
  }
  if ((*(uint *)((longlong)this + 0x18c) & 0x10) == 0) {
    if ((*(uint *)((longlong)this + 0x18c) & 8) != 0) {
      plVar9 = this + 0x21;
      plVar12 = local_b8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *plVar12 = *plVar9;
        plVar9 = plVar9 + 1;
        plVar12 = plVar12 + 1;
      }
      if (*(char *)((longlong)this + 0x192) == '\0') {
        uVar3 = (**(code **)(*plVar11 + 0x30))();
        pFVar7 = (FILE *)this[9];
        if (0 < (int)uVar3) {
          pFVar7 = (FILE *)((this[4] - this[3]) * (ulonglong)uVar3);
          goto LAB_009cf482;
        }
        param_3 = this[3];
        if (param_3 == this[4]) goto LAB_009cf482;
        iVar4 = (int)param_3 - (int)this[2];
        (**(code **)(*(longlong *)this[0x10] + 0x40))(pFVar7,this[8]);
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
        plVar9 = this + 0x11;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *plVar9 = *plVar11;
          plVar11 = plVar11 + 1;
          plVar9 = plVar9 + 1;
        }
      }
      this[10] = this[8];
      this[9] = this[8];
      *(undefined4 *)((longlong)this + 0x18c) = 0;
      this[2] = 0;
      this[3] = 0;
      this[4] = 0;
    }
  }
  else {
    if (this[6] != this[5]) {
      uVar13 = 0xffffffff;
      iVar4 = (**(code **)(*this + 0x68))();
      if (iVar4 == -1) goto LAB_009cf4e6;
    }
    uVar13 = 0xffffffff;
    do {
      sVar2 = (size_t)local_b8;
      iVar4 = (**(code **)(*(longlong *)this[0x10] + 0x28))(this[0xc] + this[8]);
      pFVar7 = (FILE *)this[0xf];
      lVar6 = local_b8[0] - this[8];
      sVar2 = _fwrite(pFVar7,(size_t)lVar6,sVar2,param_4);
      if (CONCAT44(extraout_var,sVar2) != lVar6) goto LAB_009cf4e6;
    } while (iVar4 == 1);
    if ((iVar4 == 2) || (iVar4 = _fflush(pFVar7), iVar4 != 0)) goto LAB_009cf4e6;
  }
  uVar13 = 0;
LAB_009cf4e6:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar13;
}




// ==================================================
// @009e5486 (550 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong lVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  bool bVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  ulonglong *puVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  longlong this;
  ulonglong uVar13;
  byte *pbVar14;
  ulonglong *local_50;
  ulonglong *local_40;
  
  lVar1 = *(longlong *)(this + 0x58);
  lVar2 = *(longlong *)(lVar1 + 8);
  if (*(char *)(lVar1 + 0x135) == '\0') {
    puVar9 = (ulonglong *)(lVar1 + 0x120);
    bVar5 = false;
  }
  else if (((*(byte *)(this + 0x61) & 4) == 0) ||
          (puVar9 = (ulonglong *)(lVar1 + 0x120), *(char *)(this + 0x7b) != '\0')) {
    puVar9 = (ulonglong *)(lVar1 + 0x128);
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  local_40 = (ulonglong *)(lVar1 + 0x128);
  local_50 = (ulonglong *)(lVar1 + 0x120);
  uVar12 = *puVar9;
  pbVar3 = *(byte **)(this + 0x28);
  pbVar6 = pbVar3;
  pbVar14 = pbVar3;
  if (uVar12 == 0xffffffffffffffff) {
    pbVar10 = *(byte **)(this + 0x20);
  }
  else {
    pbVar10 = *(byte **)(this + 0x20);
    if (uVar12 < (ulonglong)((longlong)pbVar10 - (longlong)pbVar3)) {
      pbVar10 = pbVar3 + uVar12;
    }
  }
  while (pbVar6 != pbVar10) {
    bVar7 = *pbVar6;
    if (*(char *)(this + 0x78) != '\0') {
      bVar7 = (**(code **)(**(longlong **)(**(longlong **)(this + 0x50) + 8) + 0x28))();
    }
    pbVar14 = *(byte **)(this + 0x28);
    if (*(char *)(lVar2 + 0x10 + (ulonglong)bVar7) == '\0') break;
    *(byte **)(this + 0x28) = pbVar14 + 1;
    pbVar6 = pbVar14 + 1;
    pbVar14 = pbVar10;
  }
  uVar13 = (ulonglong)(uint)((int)pbVar14 - (int)pbVar3);
  uVar12 = *local_50;
  if (uVar13 < uVar12) {
    uVar12 = 0;
  }
  else if (bVar5) {
    if ((*(char *)(lVar1 + 0x134) != '\0') && (uVar13 < *local_40)) {
      *(byte **)(this + 0x30) = pbVar14;
    }
    if (uVar13 != uVar12) {
      puVar11 = (undefined4 *)(*(longlong *)(this + 0xd8) + -0x20);
      if (puVar11 < *(undefined4 **)(this + 0xd0)) {
        FUN_009e5df8();
        puVar11 = (undefined4 *)(*(longlong *)(this + 0xd8) + -0x20);
      }
      *puVar11 = 7;
      *(ulonglong *)(puVar11 + 2) = uVar13;
      *(longlong *)(puVar11 + 4) = lVar1;
      *(byte **)(puVar11 + 6) = pbVar14;
      *(undefined4 **)(this + 0xd8) = puVar11;
    }
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(this + 0x58) = uVar4;
    uVar12 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  else {
    if (uVar13 < *local_40) {
      puVar11 = (undefined4 *)(*(longlong *)(this + 0xd8) + -0x20);
      if (puVar11 < *(undefined4 **)(this + 0xd0)) {
        FUN_009e5df8();
        puVar11 = (undefined4 *)(*(longlong *)(this + 0xd8) + -0x20);
      }
      *puVar11 = 0xb;
      *(ulonglong *)(puVar11 + 2) = uVar13;
      *(longlong *)(puVar11 + 4) = lVar1;
      *(byte **)(puVar11 + 6) = pbVar14;
      *(undefined4 **)(this + 0xd8) = puVar11;
      pbVar14 = *(byte **)(this + 0x28);
    }
    *(undefined8 *)(this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
    if (pbVar14 == *(byte **)(this + 0x20)) {
      uVar8 = *(uint *)(lVar1 + 0x118) & 2;
    }
    else {
      uVar8 = *(byte *)(lVar1 + 0x18 + (ulonglong)*pbVar14) >> 1 & 1;
    }
    uVar12 = (ulonglong)(uVar8 != 0);
  }
  return uVar12;
}




// ==================================================
// @009e5262 (547 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  bool bVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  ulonglong *puVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  longlong this;
  ulonglong uVar13;
  byte *pbVar14;
  ulonglong *local_50;
  ulonglong *local_40;
  
  lVar2 = *(longlong *)(this + 0x58);
  bVar1 = *(byte *)(*(longlong *)(lVar2 + 8) + 0x18);
  if (*(char *)(lVar2 + 0x135) == '\0') {
    puVar9 = (ulonglong *)(lVar2 + 0x120);
    bVar5 = false;
  }
  else if (((*(byte *)(this + 0x61) & 4) == 0) ||
          (puVar9 = (ulonglong *)(lVar2 + 0x120), *(char *)(this + 0x7b) != '\0')) {
    puVar9 = (ulonglong *)(lVar2 + 0x128);
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  local_40 = (ulonglong *)(lVar2 + 0x128);
  local_50 = (ulonglong *)(lVar2 + 0x120);
  uVar12 = *puVar9;
  pbVar3 = *(byte **)(this + 0x28);
  pbVar6 = pbVar3;
  pbVar14 = pbVar3;
  if (uVar12 == 0xffffffffffffffff) {
    pbVar10 = *(byte **)(this + 0x20);
  }
  else {
    pbVar10 = *(byte **)(this + 0x20);
    if (uVar12 < (ulonglong)((longlong)pbVar10 - (longlong)pbVar3)) {
      pbVar10 = pbVar3 + uVar12;
    }
  }
  while (pbVar6 != pbVar10) {
    bVar7 = *pbVar6;
    if (*(char *)(this + 0x78) != '\0') {
      bVar7 = (**(code **)(**(longlong **)(**(longlong **)(this + 0x50) + 8) + 0x28))();
    }
    pbVar14 = *(byte **)(this + 0x28);
    if (bVar7 != bVar1) break;
    *(byte **)(this + 0x28) = pbVar14 + 1;
    pbVar6 = pbVar14 + 1;
    pbVar14 = pbVar10;
  }
  uVar13 = (ulonglong)(uint)((int)pbVar14 - (int)pbVar3);
  uVar12 = *local_50;
  if (uVar13 < uVar12) {
    uVar12 = 0;
  }
  else if (bVar5) {
    if ((*(char *)(lVar2 + 0x134) != '\0') && (uVar13 < *local_40)) {
      *(byte **)(this + 0x30) = pbVar14;
    }
    if (uVar13 != uVar12) {
      puVar11 = (undefined4 *)(*(longlong *)(this + 0xd8) + -0x20);
      if (puVar11 < *(undefined4 **)(this + 0xd0)) {
        FUN_009e5df8();
        puVar11 = (undefined4 *)(*(longlong *)(this + 0xd8) + -0x20);
      }
      *puVar11 = 7;
      *(ulonglong *)(puVar11 + 2) = uVar13;
      *(longlong *)(puVar11 + 4) = lVar2;
      *(byte **)(puVar11 + 6) = pbVar14;
      *(undefined4 **)(this + 0xd8) = puVar11;
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)(this + 0x58) = uVar4;
    uVar12 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  else {
    if (uVar13 < *local_40) {
      puVar11 = (undefined4 *)(*(longlong *)(this + 0xd8) + -0x20);
      if (puVar11 < *(undefined4 **)(this + 0xd0)) {
        FUN_009e5df8();
        puVar11 = (undefined4 *)(*(longlong *)(this + 0xd8) + -0x20);
      }
      *puVar11 = 10;
      *(ulonglong *)(puVar11 + 2) = uVar13;
      *(longlong *)(puVar11 + 4) = lVar2;
      *(byte **)(puVar11 + 6) = pbVar14;
      *(undefined4 **)(this + 0xd8) = puVar11;
      pbVar14 = *(byte **)(this + 0x28);
    }
    *(undefined8 *)(this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
    if (pbVar14 == *(byte **)(this + 0x20)) {
      uVar8 = *(uint *)(lVar2 + 0x118) & 2;
    }
    else {
      uVar8 = *(byte *)(lVar2 + 0x18 + (ulonglong)*pbVar14) >> 1 & 1;
    }
    uVar12 = (ulonglong)(uVar8 != 0);
  }
  return uVar12;
}




// ==================================================
// @011b2370 (547 bytes) — logic_branch
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  
  if (DAT_027b2628 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b2610 = _DAT_0238fcc0;
      uRam00000000027b2614 = _UNK_0238fcc4;
      uRam00000000027b2618 = _UNK_0238fcc8;
      uRam00000000027b261c = _UNK_0238fccc;
      DAT_027b2620 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b2660 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b2630 = "MUSpectrumShaperSpectrumType";
      _DAT_027b2638 = 4;
      DAT_027b263c = DAT_027b2620;
      _DAT_027b2640 = &DAT_027b2610;
      _DAT_027b2648 = &DAT_027b25e0;
      _DAT_027b2650 = 0;
      uRam00000000027b2658 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027b25d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027b2588 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027b24d8 = FUN_00d4fe50();
          _DAT_027b24c0 = "MUSpectrumShaperDisplayInfo";
          _DAT_027b24c8 = 0x20;
          _DAT_027b24d0 = FUN_011b1f40;
          _DAT_027b24e0 = 0;
          uRam00000000027b24e8 = 0;
          _DAT_027b24f0 = 0;
          _DAT_027b2568 = 0;
          uRam00000000027b2570 = 0;
          _DAT_027b2578 = 0;
          DAT_027b257a = 1;
          _DAT_027b24f8 = 0;
          uRam00000000027b2500 = 0;
          _DAT_027b2508 = 0;
          uRam00000000027b2510 = 0;
          _DAT_027b2518 = 0;
          uRam00000000027b2520 = 0;
          _DAT_027b2528 = 0;
          uRam00000000027b2530 = 0;
          _DAT_027b2538 = 0;
          uRam00000000027b2540 = 0;
          _DAT_027b2548 = 0;
          uRam00000000027b2550 = 0;
          _DAT_027b2558 = 0;
          uRam00000000027b2560 = 0;
          DAT_027b2583 = 0;
          _DAT_027b257b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027b2590 = "_spectrumType";
      _DAT_027b2598 = &DAT_027b24c0;
      _DAT_027b25a0 = 0;
      _DAT_027b25a8 = 0x6500;
      _DAT_027b25b0 = "MUSpectrumShaperSpectrumType";
      _DAT_027b25b8 = &DAT_027b2630;
      _DAT_027b25c0 = 0;
      uRam00000000027b25c8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027b2590;
}




// ==================================================
// @01b61dc0 (545 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong local_38;
  char local_30;
  
  param_2 = param_2 & 0xffffffff;
  FUN_01b5e510();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      goto joined_r0x01b61e08;
    }
  }
  else {
joined_r0x01b61e08:
    if ((local_38 != 0) && ((char)param_2 != '\0')) {
      FUN_01ca6970();
      if ((local_30 == '\0') && (local_38 != 0)) {
        FUN_00d50b00();
      }
      FUN_01ca5d90();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar1 = FUN_015b7ba0();
      param_2 = DAT_027e4cc8;
      if (iVar1 == 3) {
        FUN_01b5e420();
        param_2 = DAT_027e4cc0;
        if ((local_30 == '\0') && (local_38 != 0)) {
          FUN_00d50b00();
          param_2 = DAT_027e4cc0;
        }
        DAT_027e4cc0 = param_2;
        if (param_2 != 0) {
          FUN_00d50b00();
        }
        FUN_01ca93d0();
        if (param_2 != 0) {
          FUN_00d50b20();
        }
        if (local_38 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        if (DAT_027e4cc8 != 0) {
          FUN_00d50b00();
        }
        FUN_01ca93d0();
        if (param_2 != 0) {
          FUN_00d50b20();
        }
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_38 != 0) {
      uVar3 = CONCAT71((int7)(param_2 >> 8),1);
      FUN_00d50b20();
      goto LAB_01b61fd2;
    }
  }
  uVar3 = 0;
LAB_01b61fd2:
  return uVar3 & 0xffffffff;
}




// ==================================================
// @009e3592 (532 bytes) — calculation
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *this;
  
  lVar5 = FUN_00ace010();
  this[0x1a] = lVar5;
  this[0x1b] = lVar5 + 0xff8;
  *(undefined4 *)(lVar5 + 0xff8) = 0;
  *(undefined4 *)(this + 0x1c) = 0x400;
  this[0xd] = 0;
  if ((*(uint *)(this + 0xc) >> 9 & 1) == 0) {
    this[5] = this[3];
    this[7] = this[3];
    this[0xb] = *(longlong *)(*(longlong *)this[9] + 0x48);
    FUN_009e3b3c(this[4]);
    *(longlong *)(this[2] + 0x18) = this[3];
    plVar3 = *(longlong **)(this[9] + 8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    FUN_009e5ecc();
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x18))();
        }
      }
    }
    uVar6 = *(uint *)(this + 0xc) | 0x200;
    *(uint *)(this + 0xc) = uVar6;
  }
  else {
    lVar5 = FUN_009e2686();
    lVar5 = *(longlong *)(lVar5 + 8);
    this[5] = lVar5;
    this[7] = lVar5;
    if (((*(byte *)((longlong)this + 0x61) & 8) == 0) && (lVar5 = FUN_009e3c78(), lVar5 == 0))
    {
      if (this[5] == this[4]) {
        uVar4 = 0;
        goto LAB_009e378c;
      }
      this[5] = this[5] + 1;
    }
    FUN_009e3b3c(this[4],this[7]);
    uVar6 = *(uint *)(this + 0xc);
  }
  if ((uVar6 >> 0x11 & 1) != 0) {
    FUN_009e3b3c(this[4],this[3]);
    *(longlong *)(*this + 0x18) = this[3];
  }
  FUN_00acdf70();
  uVar7 = 4;
  if ((*(byte *)((longlong)this + 0x61) & 0x10) == 0) {
    uVar7 = (ulonglong)*(uint *)(*(longlong *)this[9] + 0x50);
  }
  uVar4 = (**(code **)(&DAT_025240d0 + uVar7 * 0x10))();
LAB_009e378c:
  FUN_009e7f5c();
  return uVar4;
}




// ==================================================
// @009e56ac (530 bytes) — math_loop
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  bool bVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong *puVar11;
  longlong this;
  byte *pbVar12;
  byte *pbVar13;
  ulonglong uVar14;
  
  lVar2 = *(longlong *)(this + 0x58);
  uVar3 = *(undefined8 *)(lVar2 + 8);
  if ((*(char *)(lVar2 + 0x135) == '\0') ||
     (((*(byte *)(this + 0x61) & 4) != 0 && (*(char *)(this + 0x7b) == '\0')))) {
    puVar11 = (ulonglong *)(lVar2 + 0x120);
    bVar5 = false;
  }
  else {
    puVar11 = (ulonglong *)(lVar2 + 0x128);
    bVar5 = true;
  }
  uVar9 = *puVar11;
  pbVar4 = *(byte **)(this + 0x28);
  if (uVar9 == 0xffffffffffffffff) {
    pbVar13 = *(byte **)(this + 0x20);
  }
  else {
    pbVar13 = *(byte **)(this + 0x20);
    if (uVar9 < (ulonglong)((longlong)pbVar13 - (longlong)pbVar4)) {
      pbVar13 = pbVar4 + uVar9;
    }
  }
  pbVar7 = pbVar4;
  pbVar12 = pbVar4;
  if (pbVar4 != pbVar13) {
    uVar10 = **(undefined8 **)(this + 0x48);
    uVar1 = *(undefined1 *)(this + 0x78);
    while( true ) {
      pbVar7 = (byte *)FUN_009e63a2(uVar10,uVar3,uVar1);
      pbVar12 = *(byte **)(this + 0x28);
      if (pbVar12 == pbVar7) break;
      pbVar12 = pbVar12 + 1;
      *(byte **)(this + 0x28) = pbVar12;
      pbVar7 = pbVar13;
      if (pbVar12 == pbVar13) break;
      uVar10 = **(undefined8 **)(this + 0x48);
      uVar1 = *(undefined1 *)(this + 0x78);
    }
  }
  uVar14 = (ulonglong)(uint)((int)pbVar7 - (int)pbVar4);
  uVar9 = *(ulonglong *)(lVar2 + 0x120);
  if (uVar14 < uVar9) {
    uVar9 = 0;
  }
  else if (bVar5) {
    if ((*(char *)(lVar2 + 0x134) != '\0') && (uVar14 < *(ulonglong *)(lVar2 + 0x128))) {
      *(byte **)(this + 0x30) = pbVar12;
    }
    if (uVar14 != uVar9) {
      puVar8 = (undefined4 *)(*(longlong *)(this + 0xd8) + -0x20);
      if (puVar8 < *(undefined4 **)(this + 0xd0)) {
        FUN_009e5df8();
        puVar8 = (undefined4 *)(*(longlong *)(this + 0xd8) + -0x20);
      }
      *puVar8 = 7;
      *(ulonglong *)(puVar8 + 2) = uVar14;
      *(longlong *)(puVar8 + 4) = lVar2;
      *(byte **)(puVar8 + 6) = pbVar7;
      *(undefined4 **)(this + 0xd8) = puVar8;
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)(this + 0x58) = uVar3;
    uVar9 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  else {
    if (uVar14 < *(ulonglong *)(lVar2 + 0x128)) {
      puVar8 = (undefined4 *)(*(longlong *)(this + 0xd8) + -0x20);
      if (puVar8 < *(undefined4 **)(this + 0xd0)) {
        FUN_009e5df8();
        puVar8 = (undefined4 *)(*(longlong *)(this + 0xd8) + -0x20);
      }
      *puVar8 = 0xc;
      *(ulonglong *)(puVar8 + 2) = uVar14;
      *(longlong *)(puVar8 + 4) = lVar2;
      *(byte **)(puVar8 + 6) = pbVar7;
      *(undefined4 **)(this + 0xd8) = puVar8;
      pbVar7 = *(byte **)(this + 0x28);
    }
    *(undefined8 *)(this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
    if (pbVar7 == *(byte **)(this + 0x20)) {
      uVar6 = *(uint *)(lVar2 + 0x118) & 2;
    }
    else {
      uVar6 = *(byte *)(lVar2 + 0x18 + (ulonglong)*pbVar7) >> 1 & 1;
    }
    uVar9 = (ulonglong)(uVar6 != 0);
  }
  return uVar9;
}




// ==================================================
// @01bde350 (519 bytes) — logic_branch
// Known properties of MUSpectrumShaper:
// _assembledElementRendererCount, _spectrumType, _processSpectrumShaper, _canUseSpectrumShaper, _processEqualizer, _processLowerSpectrum, _processUpperSpectrum, _isBypassed, _overallSpectrumFundamentalPitchIndex, _overallSpectrumFreqPerBin, _referenceMagnitudeSum, _maximumMagnitudeSum, _synthAmps, _synthPhases, _emphasizePow, _allGain, _ampDifferencePow, _clipLimit, _didRequestCacheValidation, _appliedEqualizerFactorsAreValid
// ... and more

{
  int iVar1;
  
  if (DAT_027e6a48 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e6a30 = _DAT_0238fcc0;
      uRam00000000027e6a34 = _UNK_0238fcc4;
      uRam00000000027e6a38 = _UNK_0238fcc8;
      uRam00000000027e6a3c = _UNK_0238fccc;
      DAT_027e6a40 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e6a80 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e6a50 = "MUSpectrumShaperEditType";
      _DAT_027e6a58 = 4;
      DAT_027e6a5c = DAT_027e6a40;
      _DAT_027e6a60 = &DAT_027e6a30;
      _DAT_027e6a68 = &DAT_027e6a00;
      _DAT_027e6a70 = 0;
      uRam00000000027e6a78 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027e69f0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027e66d0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e6620 = FUN_0006d940();
          _DAT_027e6608 = "MUSpectrumShaperSpectrumView";
          _DAT_027e6610 = 0x1c0;
          _DAT_027e6618 = FUN_01bdbd50;
          _DAT_027e6628 = 0;
          uRam00000000027e6630 = 0;
          _DAT_027e6638 = 0;
          uRam00000000027e6640 = 0;
          _DAT_027e6648 = 0;
          uRam00000000027e6650 = 0;
          _DAT_027e6658 = 0;
          uRam00000000027e6660 = 0;
          _DAT_027e6668 = 0;
          uRam00000000027e6670 = 0;
          _DAT_027e6678 = 0;
          uRam00000000027e6680 = 0;
          _DAT_027e6688 = 0;
          uRam00000000027e6690 = 0;
          _DAT_027e6698 = 0;
          uRam00000000027e66a0 = 0;
          _DAT_027e66a8 = 0;
          uRam00000000027e66b0 = 0;
          _DAT_027e66b8 = 0;
          uRam00000000027e66c0 = 0;
          _DAT_027e66c8 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027e69b0 = "_spectrumEditType";
      _DAT_027e69b8 = &DAT_027e6608;
      _DAT_027e69c0 = 0;
      _DAT_027e69c8 = 0x6500;
      _DAT_027e69d0 = "MUSpectrumShaperEditType";
      _DAT_027e69d8 = &DAT_027e6a50;
      _DAT_027e69e0 = 0;
      uRam00000000027e69e8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027e69b0;
}



