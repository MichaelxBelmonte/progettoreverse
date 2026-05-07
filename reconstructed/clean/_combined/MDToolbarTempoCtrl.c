// ===================================================================
// MDToolbarTempoCtrl — Complete reconstructed pseudocode
// 3 functions
// ===================================================================


// ============================================================
// 000870e0
// ============================================================
// Function: FUN_000870e0
// Address: 000870e0
// Size: 4785 bytes
// Class: MDToolbarTempoCtrl
// String references:
//   "handleTempoChanged"
//   "handleToggleTempoEditor"
//   "handleToggleAutoStretch"
//   "handleSignatureChanged"
//   "handleClickSliderChanged"
//   "onUpdatePlaybackController"
//   "onTempoEditorChanged"
//   "onPreferencesDidChange"
//   "onTempoEditorIsChanging"
//   "onFeatureSetChanged"
//   "onMainResponderChanged"
//   "onTimeGridChanged"
//   "onUserLocaleChanged"
//   "onAudioDeviceChanged"
//   "MDToolbarTempoCtrl"

void FUN_000870e0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_02803378 = "handleTempoChanged";
      g_02803380 = &g_026d8950;
      g_02803388 = 0;
      g_02803390 = &g_026d8a20;
      g_02803398 = FUN_00091390;
      g_028033a0 = FUN_0008d170;
      g_028033a8 = 0;
      ram_00000000028033b0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028033c0 = "handleToggleTempoEditor";
      g_028033c8 = &g_026d8950;
      g_028033d0 = 0;
      g_028033d8 = &g_026d8a20;
      g_028033e0 = FUN_00091390;
      g_028033e8 = FUN_0008ee80;
      g_028033f0 = 0;
      ram_00000000028033f8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02803408 = "handleToggleAutoStretch";
      g_02803410 = &g_026d8950;
      g_02803418 = 0;
      g_02803420 = &g_026d8a20;
      g_02803428 = FUN_00091390;
      g_02803430 = FUN_0008dd50;
      g_02803438 = 0;
      ram_0000000002803440 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02803450 = "handleSignatureChanged";
      g_02803458 = &g_026d8950;
      g_02803460 = 0;
      g_02803468 = &g_026d8a20;
      g_02803470 = FUN_00091390;
      g_02803478 = FUN_0008f9e0;
      g_02803480 = 0;
      ram_0000000002803488 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02803498 = "handleClickSliderChanged";
      g_028034a0 = &g_026d8950;
      g_028034a8 = 0;
      g_028034b0 = &g_026d8a20;
      g_028034b8 = FUN_00091390;
      g_028034c0 = FUN_00090480;
      g_028034c8 = 0;
      ram_00000000028034d0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028034e0 = "onUpdatePlaybackController";
      g_028034e8 = &g_026d8950;
      g_028034f0 = 0;
      g_028034f8 = &g_026d8a24;
      g_02803500 = FUN_00091420;
      g_02803508 = FUN_0008b1e0;
      g_02803510 = 0;
      ram_0000000002803518 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02803528 = "onTempoEditorChanged";
      g_02803530 = &g_026d8950;
      g_02803538 = 0;
      g_02803540 = &g_026d8a24;
      g_02803548 = FUN_00091420;
      g_02803550 = FUN_0008a6e0;
      g_02803558 = 0;
      ram_0000000002803560 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02803570 = "onPreferencesDidChange";
      g_02803578 = &g_026d8950;
      g_02803580 = 0;
      g_02803588 = &g_026d8a24;
      g_02803590 = FUN_00091420;
      g_02803598 = FUN_00089b20;
      g_028035a0 = 0;
      ram_00000000028035a8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028035b8 = "onTempoEditorIsChanging";
      g_028035c0 = &g_026d8950;
      g_028035c8 = 0;
      g_028035d0 = &g_026d8a24;
      g_028035d8 = FUN_00091420;
      g_028035e0 = FUN_00088ba0;
      g_028035e8 = 0;
      ram_00000000028035f0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02803600 = "onFeatureSetChanged";
      g_02803608 = &g_026d8950;
      g_02803610 = 0;
      g_02803618 = &g_026d8a24;
      g_02803620 = FUN_00091420;
      g_02803628 = FUN_00088790;
      g_02803630 = 0;
      ram_0000000002803638 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02803648 = "onMainResponderChanged";
      g_02803650 = &g_026d8950;
      g_02803658 = 0;
      g_02803660 = &g_026d8a24;
      g_02803668 = FUN_00091420;
      g_02803670 = FUN_000883d0;
      g_02803678 = 0;
      ram_0000000002803680 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02803690 = "onTimeGridChanged";
      g_02803698 = &g_026d8950;
      g_028036a0 = 0;
      g_028036a8 = &g_026d8a24;
      g_028036b0 = FUN_00091420;
      g_028036b8 = FUN_0008a6d0;
      g_028036c0 = 0;
      ram_00000000028036c8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028036d8 = "onUserLocaleChanged";
      g_028036e0 = &g_026d8950;
      g_028036e8 = 0;
      g_028036f0 = &g_026d8a24;
      g_028036f8 = FUN_00091420;
      g_02803700 = FUN_00089de0;
      g_02803708 = 0;
      ram_0000000002803710 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02803720 = "onAudioDeviceChanged";
      g_02803728 = &g_026d8950;
      g_02803730 = 0;
      g_02803738 = &g_026d8a24;
      g_02803740 = FUN_00091420;
      g_02803748 = FUN_00089d90;
      g_02803750 = 0;
      ram_0000000002803758 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 000883e0
// ============================================================
// Function: FUN_000883e0
// Address: 000883e0
// Size: 589 bytes
// Class: MDToolbarTempoCtrl

void FUN_000883e0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte bVar4;
  uint64_t uVar5;
  int64_t this_ptr;
  double dVar6;
  uint64_t uVar7;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar2 = g_026d8938;
  if ((*(int64_t *)(this_ptr + 0xa0) != 0) && (*(int64_t *)(this_ptr + 0x10) != 0)) {
    if (g_026d8938 != 0) {
      FUN_00d50b00();
    }
    dVar6 = (double)FUN_00e7d6f0();
    uVar5 = (uint64_t)(dVar6 * g_023907c0);
    dVar6 = dVar6 * g_023907c0 - g_023907c8;
    uVar7 = FUN_0071a120();
    if ((local_38 == '\0') && (local_40 != 0)) {
      uVar7 = FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar7 = FUN_00d50b20();
      }
    }
    bVar4 = (byte)(((int64_t)dVar6 & (int64_t)uVar5 >> 0x3f | uVar5) / 3);
    local_60 = lVar2;
    local_58 = '\0';
    FUN_000175c0(uVar7,&local_60);
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      local_38 = '\0';
      local_40 = lVar3;
      bVar4 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((lVar3 != 0 & bVar4) == 0) {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x478))();
      }
    }
    else {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        plVar1 = *(int64_t **)(this_ptr + 0x10);
        lVar2 = *(int64_t *)(this_ptr + 0xa0);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_48 = '\x01';
        local_50 = lVar2;
        (**(code **)(*plVar1 + 0x450))();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_0008a6e0();
  return;
}



// ============================================================
// 0087bf80
// ============================================================
// Function: FUN_0087bf80
// Address: 0087bf80
// Size: 2032 bytes
// Class: MDToolbarTempoCtrl
// String references:
//   "MDToolbarTempoCtrl"
//   "GNTextViewDelegate"
//   "MUTextFieldDragAndEditHandler"

void FUN_0087bf80(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  this_ptr[0xe] = &g_0264a7b8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0xf] = &g_0269d6b8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_024c6008;
  this_ptr[0xe] = &g_024c65f8;
  this_ptr[0xf] = &g_024c6640;
  FUN_0087c970();
  FUN_0087cc50();
  FUN_0087cf30();
  FUN_0087d220();
  FUN_0087d500();
  FUN_0087d7f0();
  FUN_0087dad0();
  FUN_0087ddc0();
  FUN_0087e0b0();
  FUN_0087e3a0();
  FUN_0087e690();
  FUN_0087e980();
  FUN_0087ec70();
  FUN_0087ef60();
  FUN_0087f250();
  this_ptr[0x1f] = 0;
  // [STATIC_INIT: property registration]
  if (g_026d8a0b == '\0') {
    FUN_0087f540();
    FUN_00e87980();
  }
  this_ptr[0x20] = 0;
  // [STATIC_INIT: property registration]
  if (g_026d8a0b == '\0') {
    FUN_0087f6b0();
    FUN_00e87980();
  }
  FUN_0087f820();
  this_ptr[0x22] = 0;
  // [STATIC_INIT: property registration]
  if (g_026d8a0b == '\0') {
    FUN_0087faa0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x23) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d8a0b == '\0') {
    FUN_0087fc10();
    FUN_00e87980();
  }
  this_ptr[0x24] = 0;
  // [STATIC_INIT: property registration]
  if (g_026d8a0b == '\0') {
    FUN_0087fd80();
    FUN_00e87980();
  }
  FUN_0087fef0();
  *(void*)(this_ptr + 0x26) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d8a0b == '\0') {
    FUN_00880170();
    FUN_00e87980();
  }
  return;
}

