// ===================================================================
// GNMidiFileReader — Complete reconstructed pseudocode
// 2 functions
// ===================================================================


// ============================================================
// 00b070b0
// ============================================================
// Function: FUN_00b070b0
// Address: 00b070b0
// Size: 3025 bytes
// Class: GNMidiFileReader
// String references:
//   "GNMidiFileReader"

void FUN_00b070b0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0253bb78;
  FUN_00b07d00();
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_02763283 == '\0') {
    FUN_00b08030();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_02763283 == '\0') {
    FUN_00b081c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_02763283 == '\0') {
    FUN_00b08350();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_02763283 == '\0') {
    FUN_00b084e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_02763283 == '\0') {
    FUN_00b08670();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_02763283 == '\0') {
    FUN_00b08800();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x34) = 0;
  // [STATIC_INIT: property registration]
  if (g_02763283 == '\0') {
    FUN_00b08990();
    FUN_00e87980();
  }
  this_ptr[7] = 0;
  // [STATIC_INIT: property registration]
  if (g_02763283 == '\0') {
    FUN_00b08b20();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 8) = 0;
  // [STATIC_INIT: property registration]
  if (g_02763283 == '\0') {
    FUN_00b08cb0();
    FUN_00e87980();
  }
  FUN_00b08e40();
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_02763283 == '\0') {
    FUN_00b09170();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  // [STATIC_INIT: property registration]
  if (g_02763283 == '\0') {
    FUN_00b09300();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xb) = 0;
  // [STATIC_INIT: property registration]
  if (g_02763283 == '\0') {
    FUN_00b09490();
    FUN_00e87980();
  }
  FUN_00b09620();
  return;
}



// ============================================================
// 00af24b0
// ============================================================
// Function: FUN_00af24b0
// Address: 00af24b0
// Size: 515 bytes
// Class: GNMidiFileReader
// String references:
//   "GNMidiFileReader"

void FUN_00af24b0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_d8;
  int64_t local_a0;
  int64_t local_88;
  
  if ((g_02759b00 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027631e0 = FUN_00d4fe50();
    g_027631c8 = "GNMidiFileReader";
    g_027631d0 = 0x68;
    g_027631d8 = FUN_00b66c80;
    g_027631e8 = 0;
    ram_00000000027631f0 = 0;
    g_027631f8 = 0;
    g_02763270 = 0;
    ram_0000000002763278 = 0;
    g_02763280 = 0;
    g_02763282 = 1;
    g_02763200 = 0;
    ram_0000000002763208 = 0;
    g_02763210 = 0;
    ram_0000000002763218 = 0;
    g_02763220 = 0;
    ram_0000000002763228 = 0;
    g_02763230 = 0;
    ram_0000000002763238 = 0;
    g_02763240 = 0;
    ram_0000000002763248 = 0;
    g_02763250 = 0;
    ram_0000000002763258 = 0;
    g_02763260 = 0;
    ram_0000000002763268 = 0;
    g_0276328b = 0;
    g_02763283 = 0;
    ___cxa_guard_release();
  }
  if (g_02763283 == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_00b070b0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if (local_a0 != 0) {
      FUN_00d50b20();
    }
    if (local_d8 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}

