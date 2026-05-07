// ===================================================================
// MUDetectionBaseInsp — Complete reconstructed pseudocode
// 4 functions
// ===================================================================

// Registered properties (3):
//                   _spectrumBlendingSlider
//                   _tempoSlider
//                   _activationSlider


// ============================================================
// 01bfebb0
// ============================================================
// Function: FUN_01bfebb0
// Address: 01bfebb0
// Size: 678 bytes
// Class: MUDetectionBaseInsp
// === MUDetectionBaseInsp properties ===
//                   _spectrumBlendingSlider
//                   _tempoSlider
//                   _activationSlider


void FUN_01bfebb0(void* param_1)

{
  void *pvVar1;
  int64_t this_ptr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int64_t *local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  FUN_01bfe010();
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != 0) && (*(int64_t *)(this_ptr + 0xe8) != 0)) {
    FUN_01bfe010();
    (**(code **)(&UNK_00001668 + *local_40))();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      FUN_01bfe010();
      (**(code **)(&UNK_00001668 + *local_40))();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar2 = (float)FUN_0132da20();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01bfe010();
      (**(code **)(&UNK_00001668 + *local_40))();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar3 = (float)FUN_0132da70();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01bfe010();
      fVar4 = (float)FUN_01940ca0();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if (fVar2 <= fVar3) {
        fVar6 = fVar3 - fVar2;
        fVar3 = g_0239011c / (g_02390124 - fVar2);
        fVar5 = g_0239011c;
      }
      else {
        fVar6 = g_0239011c / fVar2;
        fVar5 = g_02390124;
      }
      if (fVar2 <= fVar4) {
        fVar7 = fVar4 - fVar2;
        fVar4 = g_0239011c / (g_02390124 - fVar2);
        fVar2 = g_0239011c;
      }
      else {
        fVar7 = g_0239011c / fVar2;
        fVar2 = g_02390124;
      }
      (**(code **)(**(int64_t **)(this_ptr + 0xe8) + 0x928))(fVar5 - fVar3 * fVar6);
      FUN_01b8e060(fVar2 - fVar4 * fVar7);
    }
  }
  FUN_01bfe330();
  return;
}



// ============================================================
// 0080bf20
// ============================================================
// Function: FUN_0080bf20
// Address: 0080bf20
// Size: 573 bytes
// Class: MUDetectionBaseInsp
// String references:
//   "MUDetectionBaseInsp"
// === MUDetectionBaseInsp properties ===
//                   _spectrumBlendingSlider
//                   _tempoSlider
//                   _activationSlider


void FUN_0080bf20(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_30;
  int64_t local_28;
  
  if ((g_02731fc0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_02731f10 = FUN_00335590();
    g_02731ef8 = "MUDetectionBaseInsp";
    g_02731f00 = 0xe0;
    g_02731f08 = FUN_00825660;
    g_02731f18 = 0;
    ram_0000000002731f20 = 0;
    g_02731f28 = 0;
    g_02731fa0 = 0;
    ram_0000000002731fa8 = 0;
    g_02731fb0 = 0;
    g_02731fb2 = 1;
    g_02731f30 = 0;
    ram_0000000002731f38 = 0;
    g_02731f40 = 0;
    ram_0000000002731f48 = 0;
    g_02731f50 = 0;
    ram_0000000002731f58 = 0;
    g_02731f60 = 0;
    ram_0000000002731f68 = 0;
    g_02731f70 = 0;
    ram_0000000002731f78 = 0;
    g_02731f80 = 0;
    ram_0000000002731f88 = 0;
    g_02731f90 = 0;
    ram_0000000002731f98 = 0;
    g_02731fbb = 0;
    g_02731fb3 = 0;
    ___cxa_guard_release();
  }
  if (g_02731fb3 == '\0') {
    FUN_00827f80();
    FUN_00e87760();
    FUN_00018440();
    FUN_00d50c00();
    FUN_008258e0();
    FUN_00825bb0();
    FUN_00825ee0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01bfdce0();
    FUN_00e87920(uVar2,0);
    if (local_28 != 0) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    FUN_000a2890();
    FUN_000a2890();
  }
  return;
}



// ============================================================
// 01bfef80
// ============================================================
// Function: FUN_01bfef80
// Address: 01bfef80
// Size: 587 bytes
// Class: MUDetectionBaseInsp
// === MUDetectionBaseInsp properties ===
//                   _spectrumBlendingSlider
//                   _tempoSlider
//                   _activationSlider


uint64_t FUN_01bfef80(void* param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int64_t this_ptr;
  int64_t *local_68;
  char local_60;
  int64_t local_30;
  char local_28;
  
  if (param_2 != 0) {
    (**(code **)(**(int64_t **)(this_ptr + 0xe8) + 0x930))();
    FUN_01b8e080();
    FUN_01bfe010();
    (**(code **)(&UNK_00001668 + *local_68))();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132da20();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar1 = FUN_01caecd0();
    if (iVar1 != 1) {
      iVar1 = FUN_01caecd0();
      if (iVar1 == 2) {
        FUN_01bfe010();
        FUN_01940b70();
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01bfe010();
        FUN_01940c40();
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  return 1;
}



// ============================================================
// 01bfdce0
// ============================================================
// Function: FUN_01bfdce0
// Address: 01bfdce0
// Size: 741 bytes
// Class: MUDetectionBaseInsp
// String references:
//   "handlePatchTempo"
//   "handleBlendSpectrum"
//   "MUDetectionBaseInsp"
// === MUDetectionBaseInsp properties ===
//                   _spectrumBlendingSlider
//                   _tempoSlider
//                   _activationSlider


void FUN_01bfdce0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028b6180 = "handleBlendSpectrum";
      g_028b6188 = &g_02731ef8;
      g_028b6190 = 0;
      g_028b6198 = &g_027e8888;
      g_028b61a0 = FUN_01bfea10;
      g_028b61a8 = FUN_01bfe630;
      g_028b61b0 = 0;
      ram_00000000028b61b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b61c8 = "handlePatchTempo";
      g_028b61d0 = &g_02731ef8;
      g_028b61d8 = 0;
      g_028b61e0 = &g_027e8888;
      g_028b61e8 = FUN_01bfea10;
      g_028b61f0 = FUN_01bfe550;
      g_028b61f8 = 0;
      ram_00000000028b6200 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

