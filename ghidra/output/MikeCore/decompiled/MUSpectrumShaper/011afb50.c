// Function: FUN_011afb50
// Address: 011afb50
// Size: 4495 bytes
// Class: MUSpectrumShaper
// String references:
//   "bool"
//   "float"
//   "MULSSGenerator"
//   "GNInt"
//   "_parameterSet"
//   "_didRequestCacheValidation"
//   "_canUseSpectrumShaper"
//   "_processSpectrumShaper"
//   "_spectrumShaperParameterSet"
//   "MUSpectrumShaperEnvelope"
//   "_isBypassed"
//   "MUSpectrumShaperSpectrum"
//   "_processEqualizer"
//   "_processLowerSpectrum"
//   "_processUpperSpectrum"
//   "_overallSpectrumFundamentalPitchIndex"
//   "_overallSpectrumFreqPerBin"
//   "_referenceMagnitudeSum"
//   "_maximumMagnitudeSum"
//   "_synthAmps"
//   ... +8 more


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011afb50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar11;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_02607248;
  unaff_RDI[7] = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b10b0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_spectrumShaperParameterSet";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MULSSGenerator");
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b11a0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_parameterSet";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSpectrumShaperSpectrum");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b1290();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_parameterSet";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSpectrumShaperSpectrum");
  }
  puVar11 = unaff_RDI + 10;
  unaff_RDI[10] = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b1380();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_parameterSet";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSpectrumShaperSpectrum",param_3,param_4,puVar11);
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b1470();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_parameterSet";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSpectrumShaperSpectrum");
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b1560();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_parameterSet";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSpectrumShaperEnvelope");
  }
  unaff_RDI[0xd] = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b1650();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_parameterSet";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSpectrumShaperEnvelope");
  }
  unaff_RDI[0xe] = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b1740();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_parameterSet";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSpectrumShaperEnvelope");
  }
  *(undefined1 *)(unaff_RDI + 0xf) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b1db0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b1d78 = FUN_006ddb00();
        _DAT_027b1d70 = "_processSpectrumShaper";
        _DAT_027b1d80 = 0;
        _DAT_027b1d88 = 0x6201;
        _DAT_027b1d90 = "bool";
        _DAT_027b1d98 = 0;
        uRam00000000027b1da0 = 0;
        _DAT_027b1da8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x79) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b1df8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b1dc0 = FUN_006ddb00();
        _DAT_027b1db8 = "_canUseSpectrumShaper";
        _DAT_027b1dc8 = 0;
        _DAT_027b1dd0 = 0x6200;
        _DAT_027b1dd8 = "bool";
        _DAT_027b1de0 = 0;
        uRam00000000027b1de8 = 0;
        _DAT_027b1df0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x7a) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b1e40 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b1e08 = FUN_006ddb00();
        _DAT_027b1e00 = "_processEqualizer";
        _DAT_027b1e10 = 0;
        _DAT_027b1e18 = 0x6201;
        _DAT_027b1e20 = "bool";
        _DAT_027b1e28 = 0;
        uRam00000000027b1e30 = 0;
        _DAT_027b1e38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x7b) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b1e88 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b1e50 = FUN_006ddb00();
        _DAT_027b1e48 = "_processLowerSpectrum";
        _DAT_027b1e58 = 0;
        _DAT_027b1e60 = 0x6201;
        _DAT_027b1e68 = "bool";
        _DAT_027b1e70 = 0;
        uRam00000000027b1e78 = 0;
        _DAT_027b1e80 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x7c) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b1ed0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b1e98 = FUN_006ddb00();
        _DAT_027b1e90 = "_processUpperSpectrum";
        _DAT_027b1ea0 = 0;
        _DAT_027b1ea8 = 0x6201;
        _DAT_027b1eb0 = "bool";
        _DAT_027b1eb8 = 0;
        uRam00000000027b1ec0 = 0;
        _DAT_027b1ec8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x7d) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b1f18 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b1ee0 = FUN_006ddb00();
        _DAT_027b1ed8 = "_isBypassed";
        _DAT_027b1ee8 = 0;
        _DAT_027b1ef0 = 0x6200;
        _DAT_027b1ef8 = "bool";
        _DAT_027b1f00 = 0;
        uRam00000000027b1f08 = 0;
        _DAT_027b1f10 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_011b1830();
  FUN_011b1910();
  FUN_011b19f0();
  FUN_011b1ad0();
  FUN_011b1bb0();
  *(undefined4 *)(unaff_RDI + 0x15) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b20c8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2090 = FUN_006ddb00();
        _DAT_027b2088 = "_overallSpectrumFundamentalPitchIndex";
        _DAT_027b2098 = 0;
        _DAT_027b20a0 = 0x6900;
        _DAT_027b20a8 = "GNInt";
        _DAT_027b20b0 = 0;
        uRam00000000027b20b8 = 0;
        _DAT_027b20c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xac) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2110 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b20d8 = FUN_006ddb00();
        _DAT_027b20d0 = "_overallSpectrumFreqPerBin";
        _DAT_027b20e0 = 0;
        _DAT_027b20e8 = 0x6600;
        _DAT_027b20f0 = "float";
        _DAT_027b20f8 = 0;
        uRam00000000027b2100 = 0;
        _DAT_027b2108 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x16) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2158 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2120 = FUN_006ddb00();
        _DAT_027b2118 = "_referenceMagnitudeSum";
        _DAT_027b2128 = 0;
        _DAT_027b2130 = 0x6600;
        _DAT_027b2138 = "float";
        _DAT_027b2140 = 0;
        uRam00000000027b2148 = 0;
        _DAT_027b2150 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xb4) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b21a0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2168 = FUN_006ddb00();
        _DAT_027b2160 = "_maximumMagnitudeSum";
        _DAT_027b2170 = 0;
        _DAT_027b2178 = 0x6600;
        _DAT_027b2180 = "float";
        _DAT_027b2188 = 0;
        uRam00000000027b2190 = 0;
        _DAT_027b2198 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x17) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b21e8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b21b0 = FUN_006ddb00();
        _DAT_027b21a8 = "_synthAmps";
        _DAT_027b21b8 = 0;
        _DAT_027b21c0 = 0x6600;
        _DAT_027b21c8 = "float";
        _DAT_027b21d0 = 0;
        uRam00000000027b21d8 = 0;
        _DAT_027b21e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xbc) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2230 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b21f8 = FUN_006ddb00();
        _DAT_027b21f0 = "_synthPhases";
        _DAT_027b2200 = 0;
        _DAT_027b2208 = 0x6600;
        _DAT_027b2210 = "float";
        _DAT_027b2218 = 0;
        uRam00000000027b2220 = 0;
        _DAT_027b2228 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x18) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2278 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2240 = FUN_006ddb00();
        _DAT_027b2238 = "_emphasizePow";
        _DAT_027b2248 = 0;
        _DAT_027b2250 = 0x6600;
        _DAT_027b2258 = "float";
        _DAT_027b2260 = 0;
        uRam00000000027b2268 = 0;
        _DAT_027b2270 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xc4) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b22c0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2288 = FUN_006ddb00();
        _DAT_027b2280 = "_allGain";
        _DAT_027b2290 = 0;
        _DAT_027b2298 = 0x6600;
        _DAT_027b22a0 = "float";
        _DAT_027b22a8 = 0;
        uRam00000000027b22b0 = 0;
        _DAT_027b22b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x19) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2308 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b22d0 = FUN_006ddb00();
        _DAT_027b22c8 = "_ampDifferencePow";
        _DAT_027b22d8 = 0;
        _DAT_027b22e0 = 0x6600;
        _DAT_027b22e8 = "float";
        _DAT_027b22f0 = 0;
        uRam00000000027b22f8 = 0;
        _DAT_027b2300 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xcc) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2350 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2318 = FUN_006ddb00();
        _DAT_027b2310 = "_clipLimit";
        _DAT_027b2320 = 0;
        _DAT_027b2328 = 0x6600;
        _DAT_027b2330 = "float";
        _DAT_027b2338 = 0;
        uRam00000000027b2340 = 0;
        _DAT_027b2348 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1a) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b1c90();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xd4) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b23e0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b23a8 = FUN_006ddb00();
        _DAT_027b23a0 = "_didRequestCacheValidation";
        _DAT_027b23b0 = 0;
        _DAT_027b23b8 = 0x6211;
        _DAT_027b23c0 = "bool";
        _DAT_027b23c8 = 0;
        uRam00000000027b23d0 = 0;
        _DAT_027b23d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xd5) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2428 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b23f0 = FUN_006ddb00();
        _DAT_027b23e8 = "_appliedEqualizerFactorsAreValid";
        _DAT_027b23f8 = 0;
        _DAT_027b2400 = 0x6201;
        _DAT_027b2408 = "bool";
        _DAT_027b2410 = 0;
        uRam00000000027b2418 = 0;
        _DAT_027b2420 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xd6) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2470 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2438 = FUN_006ddb00();
        _DAT_027b2430 = "_appliedEqualizerFormantFactorsAreValid";
        _DAT_027b2440 = 0;
        _DAT_027b2448 = 0x6201;
        _DAT_027b2450 = "bool";
        _DAT_027b2458 = 0;
        uRam00000000027b2460 = 0;
        _DAT_027b2468 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xd7) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b24b8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2480 = FUN_006ddb00();
        _DAT_027b2478 = "_processSpectrumShaperIsValid";
        _DAT_027b2488 = 0;
        _DAT_027b2490 = 0x6201;
        _DAT_027b2498 = "bool";
        _DAT_027b24a0 = 0;
        uRam00000000027b24a8 = 0;
        _DAT_027b24b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


