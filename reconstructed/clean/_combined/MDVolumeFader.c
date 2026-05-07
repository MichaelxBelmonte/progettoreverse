// ===================================================================
// MDVolumeFader — Complete reconstructed pseudocode
// 3 functions
// ===================================================================

// Registered properties (1):
//   MDVolumeScalaType _volumeScalaType


// ============================================================
// 006c7220
// ============================================================
// Function: FUN_006c7220
// Address: 006c7220
// Size: 681 bytes
// Class: MDVolumeFader
// String references:
//   "MDVolumeFader"
// === MDVolumeFader properties ===
//   MDVolumeScalaType _volumeScalaType


void FUN_006c7220(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_250;
  int64_t local_230;
  
  if ((g_02726d50 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026fbd68 = FUN_001b37d0();
    g_026fbd50 = "MDVolumeFader";
    g_026fbd58 = 0x1f8;
    g_026fbd60 = FUN_002a8700;
    g_026fbd70 = 0;
    ram_00000000026fbd78 = 0;
    g_026fbd80 = 0;
    g_026fbdf8 = 0;
    ram_00000000026fbe00 = 0;
    g_026fbe08 = 0;
    g_026fbe0a = 1;
    g_026fbd88 = 0;
    ram_00000000026fbd90 = 0;
    g_026fbd98 = 0;
    ram_00000000026fbda0 = 0;
    g_026fbda8 = 0;
    ram_00000000026fbdb0 = 0;
    g_026fbdb8 = 0;
    ram_00000000026fbdc0 = 0;
    g_026fbdc8 = 0;
    ram_00000000026fbdd0 = 0;
    g_026fbdd8 = 0;
    ram_00000000026fbde0 = 0;
    g_026fbde8 = 0;
    ram_00000000026fbdf0 = 0;
    g_026fbe13 = 0;
    g_026fbe0b = 0;
    ___cxa_guard_release();
  }
  if (g_026fbe0b == '\0') {
    FUN_001e95f0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_006dc210();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_230 != 0) {
      FUN_00d50b20();
    }
    if (local_250 != 0) {
      FUN_00d50b20();
    }
    FUN_000993f0();
    FUN_000993f0();
  }
  return;
}



// ============================================================
// 006dc210
// ============================================================
// Function: FUN_006dc210
// Address: 006dc210
// Size: 1083 bytes
// Class: MDVolumeFader
// String references:
//   "MDVolumeFader"
// === MDVolumeFader properties ===
//   MDVolumeScalaType _volumeScalaType


void FUN_006dc210(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_001b40a0();
  *this_ptr = &PTR_FUN_024da8a0;
  this_ptr[2] = &g_024db3e0;
  *(void*)((int64_t)this_ptr + 0x1dc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fbe0b == '\0') {
    FUN_006dc6d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1e4) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fbe0b == '\0') {
    FUN_006dc860();
    FUN_00e87980();
  }
  FUN_006dcab0();
  *(void*)(this_ptr + 0x3e) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fbe0b == '\0') {
    FUN_006dcde0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1f1) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fbe0b == '\0') {
    FUN_006dcf70();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 006dc860
// ============================================================
// Function: FUN_006dc860
// Address: 006dc860
// Size: 547 bytes
// Class: MDVolumeFader
// String references:
//   "MDVolumeFader"
//   "MDVolumeScalaType"
//   "_volumeScalaType"
// === MDVolumeFader properties ===
//   MDVolumeScalaType _volumeScalaType


void* FUN_006dc860(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_02726da8 = "_volumeScalaType";
      g_02726db0 = &g_026fbd50;
      g_02726db8 = 0;
      g_02726dc0 = 0x6500;
      g_02726dc8 = "MDVolumeScalaType";
      g_02726dd0 = &g_02726e40;
      g_02726dd8 = 0;
      ram_0000000002726de0 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_02726da8;
}

