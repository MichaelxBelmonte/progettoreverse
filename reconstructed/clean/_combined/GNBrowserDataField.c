// ===================================================================
// GNBrowserDataField — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (2):
//   float           _playingItemProgress
//   float           _canStartPlayback


// ============================================================
// 0017e420
// ============================================================
// Function: FUN_0017e420
// Address: 0017e420
// Size: 561 bytes
// Class: GNBrowserDataField
// String references:
//   "GNBrowserDataField"
// === GNBrowserDataField properties ===
//   float           _playingItemProgress
//   float           _canStartPlayback


void FUN_0017e420(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_200;
  
  if ((g_026e8c70 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027ea068 = FUN_001b2d30();
    g_027ea050 = "GNBrowserDataField";
    g_027ea058 = 0x1d8;
    g_027ea060 = FUN_001b2c60;
    g_027ea070 = 0;
    ram_00000000027ea078 = 0;
    g_027ea080 = 0;
    ram_00000000027ea088 = 0;
    g_027ea090 = 0;
    ram_00000000027ea098 = 0;
    g_027ea0a0 = 0;
    ram_00000000027ea0a8 = 0;
    g_027ea0b0 = 0;
    ram_00000000027ea0b8 = 0;
    g_027ea0c0 = 0;
    ram_00000000027ea0c8 = 0;
    g_027ea0d0 = 0;
    ram_00000000027ea0d8 = 0;
    g_027ea0e0 = 0;
    ram_00000000027ea0e8 = 0;
    g_027ea0f0 = 0;
    ram_00000000027ea0f8 = 0;
    g_027ea100 = 0;
    _ram_00000000027ea108 = 0;
    g_027ea110 = 0;
    ___cxa_guard_release();
  }
  if (g_027ea10b == '\0') {
    FUN_00189280();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_001b2fa0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_200 != 0) {
      FUN_00d50b20();
    }
    FUN_000993f0();
    FUN_000993f0();
  }
  return;
}



// ============================================================
// 008401e0
// ============================================================
// Function: FUN_008401e0
// Address: 008401e0
// Size: 588 bytes
// Class: GNBrowserDataField
// String references:
//   "float"
//   "GNBrowserDataField"
//   "_playingItemProgress"
//   "_canStartPlayback"
// === GNBrowserDataField properties ===
//   float           _playingItemProgress
//   float           _canStartPlayback


void FUN_008401e0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_0083cc40();
  *this_ptr = &g_026415d0;
  this_ptr[2] = &g_02641f80;
  *(void*)((int64_t)this_ptr + 0x194) = 0;
  lVar2 = FUN_0083c8c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x33) = 0;
  lVar2 = FUN_0083c8c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x34] = 0;
  lVar2 = FUN_0083c8c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_008404b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNBrowserDataField");
  }
  this_ptr[0x35] = 0;
  lVar2 = FUN_0083c8c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_008405a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNBrowserDataField");
  }
  return;
}

