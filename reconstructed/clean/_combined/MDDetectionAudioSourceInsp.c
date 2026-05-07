// ===================================================================
// MDDetectionAudioSourceInsp — Complete reconstructed pseudocode
// 2 functions
// ===================================================================


// ============================================================
// 0047a4c0
// ============================================================
// Function: FUN_0047a4c0
// Address: 0047a4c0
// Size: 14402 bytes
// Class: MDDetectionAudioSourceInsp
// String references:
//   "onFeatureSetChanged"
//   "handleAudioSourceTransients"
//   "handleAudioSourceFormantsUp"
//   "handleAudioSourceFormantsDown"
//   "_updateControls"
//   "handleSwitchSibilants"
//   "handleSibilantBalancePreviewChanged"
//   "handleSwitchRobustPitchCurve"
//   "handleChangeAlgorithmInsp"
//   "handleSaveMDDAsFile"
//   "handleSaveMDD"
//   "handleLoadMDD"
//   "handleLoadMDDFromFile"
//   "handleClearMDD"
//   "handleAudioSourceFormantsCharacter"
//   "handleAudioSourceCharacter"
//   "handleAudioSourceProcessPeriodBased"
//   "handleSetPitchOffset"
//   "handleSetFormantOffset"
//   "handlePatchTempo"
//   ... +20 more

void FUN_0047a4c0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_02808ad0 = "handleSwitchSibilants";
      g_02808ad8 = &g_02712c20;
      g_02808ae0 = 0;
      g_02808ae8 = &g_02708948;
      g_02808af0 = FUN_0049c2c0;
      g_02808af8 = FUN_0049a5d0;
      g_02808b00 = 0;
      ram_0000000002808b08 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808b18 = "handleSibilantBalancePreviewChanged";
      g_02808b20 = &g_02712c20;
      g_02808b28 = 0;
      g_02808b30 = &g_02708948;
      g_02808b38 = FUN_0049c2c0;
      g_02808b40 = FUN_0049aa10;
      g_02808b48 = 0;
      ram_0000000002808b50 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808b60 = "handleSwitchRobustPitchCurve";
      g_02808b68 = &g_02712c20;
      g_02808b70 = 0;
      g_02808b78 = &g_02708948;
      g_02808b80 = FUN_0049c2c0;
      g_02808b88 = FUN_0049a500;
      g_02808b90 = 0;
      ram_0000000002808b98 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808ba8 = "handleChangeAlgorithmInsp";
      g_02808bb0 = &g_02712c20;
      g_02808bb8 = 0;
      g_02808bc0 = &g_02708948;
      g_02808bc8 = FUN_0049c2c0;
      g_02808bd0 = FUN_0048fe80;
      g_02808bd8 = 0;
      ram_0000000002808be0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808bf0 = "handleSaveMDDAsFile";
      g_02808bf8 = &g_02712c20;
      g_02808c00 = 0;
      g_02808c08 = &g_02708948;
      g_02808c10 = FUN_0049c2c0;
      g_02808c18 = FUN_00491070;
      g_02808c20 = 0;
      ram_0000000002808c28 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808c38 = "handleSaveMDD";
      g_02808c40 = &g_02712c20;
      g_02808c48 = 0;
      g_02808c50 = &g_02708948;
      g_02808c58 = FUN_0049c2c0;
      g_02808c60 = FUN_00492210;
      g_02808c68 = 0;
      ram_0000000002808c70 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808c80 = "handleLoadMDD";
      g_02808c88 = &g_02712c20;
      g_02808c90 = 0;
      g_02808c98 = &g_02708948;
      g_02808ca0 = FUN_0049c2c0;
      g_02808ca8 = FUN_00494690;
      g_02808cb0 = 0;
      ram_0000000002808cb8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808cc8 = "handleLoadMDDFromFile";
      g_02808cd0 = &g_02712c20;
      g_02808cd8 = 0;
      g_02808ce0 = &g_02708948;
      g_02808ce8 = FUN_0049c2c0;
      g_02808cf0 = FUN_00493fd0;
      g_02808cf8 = 0;
      ram_0000000002808d00 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808d10 = "handleClearMDD";
      g_02808d18 = &g_02712c20;
      g_02808d20 = 0;
      g_02808d28 = &g_02708948;
      g_02808d30 = FUN_0049c2c0;
      g_02808d38 = FUN_00492370;
      g_02808d40 = 0;
      ram_0000000002808d48 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808d58 = "handleAudioSourceTransients";
      g_02808d60 = &g_02712c20;
      g_02808d68 = 0;
      g_02808d70 = &g_02708948;
      g_02808d78 = FUN_0049c2c0;
      g_02808d80 = FUN_00495c70;
      g_02808d88 = 0;
      ram_0000000002808d90 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808da0 = "handleAudioSourceFormantsUp";
      g_02808da8 = &g_02712c20;
      g_02808db0 = 0;
      g_02808db8 = &g_02708948;
      g_02808dc0 = FUN_0049c2c0;
      g_02808dc8 = FUN_00495de0;
      g_02808dd0 = 0;
      ram_0000000002808dd8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808de8 = "handleAudioSourceFormantsDown";
      g_02808df0 = &g_02712c20;
      g_02808df8 = 0;
      g_02808e00 = &g_02708948;
      g_02808e08 = FUN_0049c2c0;
      g_02808e10 = FUN_00495f50;
      g_02808e18 = 0;
      ram_0000000002808e20 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808e30 = "handleAudioSourceFormantsCharacter";
      g_02808e38 = &g_02712c20;
      g_02808e40 = 0;
      g_02808e48 = &g_02708948;
      g_02808e50 = FUN_0049c2c0;
      g_02808e58 = FUN_004960c0;
      g_02808e60 = 0;
      ram_0000000002808e68 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808e78 = "handleAudioSourceCharacter";
      g_02808e80 = &g_02712c20;
      g_02808e88 = 0;
      g_02808e90 = &g_02708948;
      g_02808e98 = FUN_0049c2c0;
      g_02808ea0 = FUN_00496390;
      g_02808ea8 = 0;
      ram_0000000002808eb0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808ec0 = "handleAudioSourceProcessPeriodBased";
      g_02808ec8 = &g_02712c20;
      g_02808ed0 = 0;
      g_02808ed8 = &g_02708948;
      g_02808ee0 = FUN_0049c2c0;
      g_02808ee8 = FUN_00496510;
      g_02808ef0 = 0;
      ram_0000000002808ef8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808f08 = "handleSetPitchOffset";
      g_02808f10 = &g_02712c20;
      g_02808f18 = 0;
      g_02808f20 = &g_02708948;
      g_02808f28 = FUN_0049c2c0;
      g_02808f30 = FUN_004990f0;
      g_02808f38 = 0;
      ram_0000000002808f40 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808f50 = "handleSetFormantOffset";
      g_02808f58 = &g_02712c20;
      g_02808f60 = 0;
      g_02808f68 = &g_02708948;
      g_02808f70 = FUN_0049c2c0;
      g_02808f78 = FUN_004991e0;
      g_02808f80 = 0;
      ram_0000000002808f88 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808f98 = "handlePatchTempo";
      g_02808fa0 = &g_02712c20;
      g_02808fa8 = 0;
      g_02808fb0 = &g_02708948;
      g_02808fb8 = FUN_0049c2c0;
      g_02808fc0 = FUN_004992d0;
      g_02808fc8 = 0;
      ram_0000000002808fd0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808fe0 = "handleBlendSpectrum";
      g_02808fe8 = &g_02712c20;
      g_02808ff0 = 0;
      g_02808ff8 = &g_02708948;
      g_02809000 = FUN_0049c2c0;
      g_02809008 = FUN_00499400;
      g_02809010 = 0;
      ram_0000000002809018 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809028 = "handleToggleSeparateAudioAutomatically";
      g_02809030 = &g_02712c20;
      g_02809038 = 0;
      g_02809040 = &g_02708948;
      g_02809048 = FUN_0049c2c0;
      g_02809050 = FUN_00496700;
      g_02809058 = 0;
      ram_0000000002809060 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809070 = "handleSeparateNow";
      g_02809078 = &g_02712c20;
      g_02809080 = 0;
      g_02809088 = &g_02708948;
      g_02809090 = FUN_0049c2c0;
      g_02809098 = FUN_004968e0;
      g_028090a0 = 0;
      ram_00000000028090a8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028090b8 = "handleAdjustAttacks";
      g_028090c0 = &g_02712c20;
      g_028090c8 = 0;
      g_028090d0 = &g_02708948;
      g_028090d8 = FUN_0049c2c0;
      g_028090e0 = FUN_00496970;
      g_028090e8 = 0;
      ram_00000000028090f0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809100 = "handleLoadAdjustAttacksPreset";
      g_02809108 = &g_02712c20;
      g_02809110 = 0;
      g_02809118 = &g_02708948;
      g_02809120 = FUN_0049c2c0;
      g_02809128 = FUN_00496bd0;
      g_02809130 = 0;
      ram_0000000002809138 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809148 = "handleResetAdjustAttacksToAppliedParameterSet";
      g_02809150 = &g_02712c20;
      g_02809158 = 0;
      g_02809160 = &g_02708948;
      g_02809168 = FUN_0049c2c0;
      g_02809170 = FUN_00496ec0;
      g_02809178 = 0;
      ram_0000000002809180 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809190 = "handleSetAdjustAttacksPresetDirectory";
      g_02809198 = &g_02712c20;
      g_028091a0 = 0;
      g_028091a8 = &g_02708948;
      g_028091b0 = FUN_0049c2c0;
      g_028091b8 = FUN_00497330;
      g_028091c0 = 0;
      ram_00000000028091c8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028091d8 = "handleSaveAdjustAttacksPreset";
      g_028091e0 = &g_02712c20;
      g_028091e8 = 0;
      g_028091f0 = &g_02708948;
      g_028091f8 = FUN_0049c2c0;
      g_02809200 = FUN_00497610;
      g_02809208 = 0;
      ram_0000000002809210 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809220 = "handleRecalcAllElementsPitchCenter";
      g_02809228 = &g_02712c20;
      g_02809230 = 0;
      g_02809238 = &g_02708948;
      g_02809240 = FUN_0049c2c0;
      g_02809248 = FUN_00497fc0;
      g_02809250 = 0;
      ram_0000000002809258 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809268 = "handleRecalcAllElementsPeriodsAndPitchCentersFromDecomposedAudioSignals";
      g_02809270 = &g_02712c20;
      g_02809278 = 0;
      g_02809280 = &g_02708948;
      g_02809288 = FUN_0049c2c0;
      g_02809290 = FUN_00498060;
      g_02809298 = 0;
      ram_00000000028092a0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028092b0 = "handlePitchToChordAdaptionEnabledChanged";
      g_028092b8 = &g_02712c20;
      g_028092c0 = 0;
      g_028092c8 = &g_02708948;
      g_028092d0 = FUN_0049c2c0;
      g_028092d8 = FUN_0049aae0;
      g_028092e0 = 0;
      ram_00000000028092e8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028092f8 = "handlePitchToChordAdaptionModeChanged";
      g_02809300 = &g_02712c20;
      g_02809308 = 0;
      g_02809310 = &g_02708948;
      g_02809318 = FUN_0049c2c0;
      g_02809320 = FUN_0049abb0;
      g_02809328 = 0;
      ram_0000000002809330 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809340 = "handlePitchToChordAdaptionContextChanged";
      g_02809348 = &g_02712c20;
      g_02809350 = 0;
      g_02809358 = &g_02708948;
      g_02809360 = FUN_0049c2c0;
      g_02809368 = FUN_0049ac70;
      g_02809370 = 0;
      ram_0000000002809378 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809388 = "onStartEditionDetection";
      g_02809390 = &g_02712c20;
      g_02809398 = 0;
      g_028093a0 = &g_0270894c;
      g_028093a8 = FUN_0049c350;
      g_028093b0 = FUN_00498190;
      g_028093b8 = 0;
      ram_00000000028093c0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028093d0 = "onFeatureSetChanged";
      g_028093d8 = &g_02712c20;
      g_028093e0 = 0;
      g_028093e8 = &g_0270894c;
      g_028093f0 = FUN_0049c350;
      g_028093f8 = FUN_00498b30;
      g_02809400 = 0;
      ram_0000000002809408 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809418 = "onEditingDetectionTargetNotification";
      g_02809420 = &g_02712c20;
      g_02809428 = 0;
      g_02809430 = &g_0270894c;
      g_02809438 = FUN_0049c350;
      g_02809440 = FUN_00498300;
      g_02809448 = 0;
      ram_0000000002809450 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809460 = "onDetectionRenderParametersChanged";
      g_02809468 = &g_02712c20;
      g_02809470 = 0;
      g_02809478 = &g_0270894c;
      g_02809480 = FUN_0049c350;
      g_02809488 = FUN_004994f0;
      g_02809490 = 0;
      ram_0000000002809498 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028094a8 = "onLocaleChanedNotification";
      g_028094b0 = &g_02712c20;
      g_028094b8 = 0;
      g_028094c0 = &g_0270894c;
      g_028094c8 = FUN_0049c350;
      g_028094d0 = FUN_004995c0;
      g_028094d8 = 0;
      ram_00000000028094e0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028094f0 = "onQuantizationPreviewChanged";
      g_028094f8 = &g_02712c20;
      g_02809500 = 0;
      g_02809508 = &g_0270894c;
      g_02809510 = FUN_0049c350;
      g_02809518 = FUN_0049a3e0;
      g_02809520 = 0;
      ram_0000000002809528 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809538 = "_updateControls";
      g_02809540 = &g_02712c20;
      g_02809548 = 0;
      g_02809550 = &g_0270894f;
      g_02809558 = FUN_0049c3d0;
      g_02809560 = FUN_0047dd70;
      g_02809568 = 0;
      ram_0000000002809570 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809580 = "handleQuantizationToggle";
      g_02809588 = &g_02712c20;
      g_02809590 = 0;
      g_02809598 = &g_02708948;
      g_028095a0 = FUN_0049c2c0;
      g_028095a8 = FUN_0049a270;
      g_028095b0 = 0;
      ram_00000000028095b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 00479050
// ============================================================
// Function: FUN_00479050
// Address: 00479050
// Size: 1636 bytes
// Class: MDDetectionAudioSourceInsp

void FUN_00479050(uint64_t param_1,uint64_t param_2)

{
  int *piVar1;
  int64_t lVar2;
  int64_t *plVar3;
  bool bVar4;
  uint uVar5;
  uint8_t auVar6 [16];
  int64_t *plVar7;
  uint64_t uVar8;
  byte bVar9;
  uint8_t uVar10;
  char cVar11;
  short sVar12;
  int iVar13;
  int64_t **pplVar14;
  short *psVar15;
  short *psVar16;
  void*arg1;
  uint64_t uVar17;
  int64_t *this_ptr;
  short *psVar18;
  uint32_t uVar19;
  uint64_t uVar20;
  uint8_t auVar21 [8];
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t uVar22;
  float fVar23;
  float fVar24;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  int64_t *local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  int64_t local_58;
  int64_t *local_40;
  char local_38;
  
  fVar24 = (float)((uint64_t)param_2 >> 0x20);
  fVar23 = (float)param_2;
  uStack_60 = in_XMM0_Qb;
  local_68 = (uint8_t  [8])param_1;
  local_88 = fVar23;
  fStack_84 = fVar24;
  fStack_80 = in_XMM1_Dc;
  fStack_7c = in_XMM1_Dd;
  (**(code **)(*this_ptr + 0x640))();
  local_90 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      local_90 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  else {
  }
  plVar7 = local_90;
  lVar2 = this_ptr[0x4d];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_58 = lVar2;
  bVar9 = (**(code **)(*this_ptr + 0xac8))();
  if ((bVar9 | local_58 == 0) == 1) {
    FUN_01e07690(local_58 == 0,local_88);
  }
  else {
    cVar11 = (**(code **)(*this_ptr + 0xac8))();
    if (cVar11 != '\0') {
      (**(code **)(*this_ptr + 0x878))();
    }
    cVar11 = FUN_01e07410();
    if (cVar11 != '\0') {
      uVar19 = *(void*)((int64_t)this_ptr + 0x18c);
      uVar20 = FUN_01e3f820();
      local_88 = (float)uVar20;
      fStack_84 = (float)((uint64_t)uVar20 >> 0x20);
      fStack_80 = (float)extraout_XMM0_Qb;
      fStack_7c = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
      local_68._4_4_ = fVar24;
      local_68._0_4_ = fVar23;
      uStack_60._0_4_ = in_XMM1_Dc;
      uStack_60._4_4_ = in_XMM1_Dd;
      cVar11 = FUN_01e05890();
      uVar10 = (**(code **)(*this_ptr + 0x9a0))();
      uVar20 = 0x12;
      if (cVar11 != '\0') {
        uVar20 = 8;
      }
      fVar23 = (float)local_68._0_4_;
      fVar24 = (float)local_68._4_4_;
      in_XMM1_Dc = (float)uStack_60;
      in_XMM1_Dd = uStack_60._4_4_;
      (**(code **)(*plVar7 + 0x3f0))(uVar20,uVar19,0,uVar10);
    }
    FUN_01e3f820();
    uVar20 = (**(code **)(*plVar7 + 0x548))();
    local_88 = fVar23;
    fStack_84 = fVar24;
    fStack_80 = in_XMM1_Dc;
    fStack_7c = in_XMM1_Dd;
    (**(code **)(*this_ptr + 0x960))();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_004792a7;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_004792a7:
      iVar13 = FUN_00d8c7a0();
      if ((0 < iVar13) && (iVar13 = FUN_00d8c7a0(), 0 < iVar13)) {
        do {
          sVar12 = FUN_00d8cbc0();
          psVar15 = (short *)this_ptr[0x4e];
          piVar1 = (int *)(psVar15 + 0xc);
          psVar16 = (short *)&g_023dccec;
          psVar18 = (short *)&g_023dccf4;
          if (*piVar1 < 0x14) {
LAB_004793c0:
            fVar23 = (float)*(void*)psVar18;
            fVar24 = (float)((uint64_t)*(void*)psVar18 >> 0x20);
            in_XMM1_Dc = 0.0;
            in_XMM1_Dd = 0.0;
          }
          else {
            psVar15 = *(short **)(psVar15 + 8);
            if (*psVar15 == sVar12) {
              psVar16 = psVar15 + 2;
              psVar15 = psVar15 + 6;
              psVar18 = psVar15;
              goto LAB_004793c0;
            }
            uVar5 = *piVar1 / 0x14;
            uVar8 = 1;
            psVar16 = psVar15;
            do {
              uVar17 = uVar8;
              psVar16 = psVar16 + 10;
              if (uVar5 == uVar17) {
                psVar18 = (short *)&g_023dccf4;
                psVar16 = (short *)&g_023dccec;
                if ((int64_t)uVar17 < (int64_t)(int)uVar5) goto LAB_004793c8;
                goto LAB_004793c0;
              }
              uVar8 = uVar17 + 1;
            } while (*psVar16 != sVar12);
            psVar18 = (short *)&g_023dccf4;
            psVar16 = (short *)&g_023dccec;
            if ((int64_t)(int)uVar5 <= (int64_t)uVar17) goto LAB_004793c0;
            fVar23 = (float)*(void*)(psVar15 + (uVar17 & 0xffffffff) * 10 + 6);
            fVar24 = (float)((uint64_t)*(void*)(psVar15 + (uVar17 & 0xffffffff) * 10 + 6) >>
                            0x20);
            in_XMM1_Dc = 0.0;
            in_XMM1_Dd = 0.0;
          }
LAB_004793c8:
          if (fVar23 <= g_0239424c) {
            auVar21 = (uint8_t  [8])CONCAT44(fStack_84,local_88);
            uVar22 = CONCAT44(fStack_7c,fStack_80);
          }
          else {
            local_68._4_4_ = fStack_84 - fVar24;
            uStack_60._4_4_ = fStack_7c - in_XMM1_Dd;
            auVar27._8_8_ = extraout_XMM0_Qb_00;
            auVar27._0_8_ = uVar20;
            auVar25._4_12_ = auVar27._4_12_;
            auVar25._0_4_ = (float)uVar20 + (local_88 - fVar23) + g_02390d00 + g_02390d00;
            local_68._0_4_ = local_88 - fVar23;
            uStack_60._0_4_ = fStack_80 - in_XMM1_Dc;
            auVar28._0_4_ = (uint)((float)local_68._4_4_ * g_0239011c) & g_023945e0;
            auVar28._4_4_ = local_68._4_4_ & _UNK_023945e4;
            auVar28._8_4_ = (uint)uStack_60._4_4_ & _UNK_023945e8;
            auVar28._12_4_ = (uint)uStack_60._4_4_ & _UNK_023945ec;
            auVar29._4_12_ = SUB1612(auVar28 | g_023945f0,4);
            auVar29._0_4_ = SUB164(auVar28 | g_023945f0,0) + (float)local_68._4_4_ * g_0239011c
            ;
            auVar26._0_12_ = ZEXT812(0);
            auVar26._12_4_ = 0;
            auVar27 = roundss(auVar26,auVar29,0xb);
            auVar27 = insertps(auVar25,auVar27,0x10);
            (**(code **)(*(int64_t *)*arg1 + 0x408))(psVar15,psVar16,auVar27._0_8_);
            auVar6._4_4_ = fStack_84;
            auVar6._0_4_ = local_88;
            auVar6._8_4_ = fStack_80;
            auVar6._12_4_ = fStack_7c;
            _local_68 = blendps(_local_68,auVar6,2);
            auVar21 = local_68;
            uVar22 = uStack_60;
          }
          local_88 = SUB84(auVar21,0);
          fStack_84 = (float)((uint64_t)auVar21 >> 0x20);
          fStack_80 = (float)uVar22;
          fStack_7c = (float)((uint64_t)uVar22 >> 0x20);
          bVar4 = 1 < iVar13;
          iVar13 = iVar13 + -1;
        } while (bVar4);
      }
      FUN_00d50b20();
    }
  }
  if (this_ptr[0x4c] == 0) goto LAB_00479654;
  FUN_00d50b00();
  FUN_00209700();
  if (plVar7 == (int64_t *)0x0) {
LAB_004794e2:
    pplVar14 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar11 = FUN_00e85ea0();
    if (cVar11 == '\0') goto LAB_004794e2;
    pplVar14 = &local_90;
  }
  plVar3 = *pplVar14;
  FUN_00d50b20();
  if (plVar3 != (int64_t *)0x0) {
    uVar19 = FUN_01e3f820();
    (**(code **)(*plVar7 + 0x6a0))(0,uVar19);
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d48370();
    (**(code **)(*(int64_t *)*arg1 + 0x398))();
    lVar2 = this_ptr[0x4c];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))
              (*(void*)((int64_t)this_ptr + 0x24c),
               (int)*(void*)((int64_t)this_ptr + 0x254));
    FUN_01d48390();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_00479654:
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

