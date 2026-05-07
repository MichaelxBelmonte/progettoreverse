// ===================================================================
// GNSoundFileWAVEReader — Complete reconstructed pseudocode
// 2 functions
// ===================================================================


// ============================================================
// 007c11c0
// ============================================================
// Function: FUN_007c11c0
// Address: 007c11c0
// Size: 3996 bytes
// Class: GNSoundFileWAVEReader
// String references:
//   "GNSoundFileWAVEReader"

void FUN_007c11c0(code *param_1,uint64_t param_2,size_t param_3)

{
  int iVar1;
  void*this_ptr;
  
  FUN_007b58a0();
  *this_ptr = &g_02544308;
  FUN_007c21c0();
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272dd9b == '\0') {
    FUN_007c24f0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3a) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272dd9b == '\0') {
    FUN_007c2680();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272dd9b == '\0') {
    FUN_007c2810();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3e) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272dd9b == '\0') {
    FUN_007c29a0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 8) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272dd9b == '\0') {
    FUN_007c2b30();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272dd9b == '\0') {
    FUN_007c2cc0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272dd9b == '\0') {
    FUN_007c2e50();
    FUN_00e87980();
  }
  this_ptr[10] = 0;
  // [STATIC_INIT: property registration]
  if (g_0272dd9b == '\0') {
    FUN_007c2fe0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xb) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272dd9b == '\0') {
    FUN_007c3170();
    FUN_00e87980();
  }
  this_ptr[0xc] = 0;
  // [STATIC_INIT: property registration]
  if (g_0272dd9b == '\0') {
    FUN_007c3300();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xd) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272dd9b == '\0') {
    FUN_007c3490();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x6a) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272dd9b == '\0') {
    FUN_007c3620();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x6c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272dd9b == '\0') {
    FUN_007c37b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x6e) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272dd9b == '\0') {
    FUN_007c3940();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xe) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272dd9b == '\0') {
    FUN_007c3ad0();
    FUN_00e87980();
  }
  this_ptr[0xf] = 0;
  // [STATIC_INIT: property registration]
  if (g_0272dd9b == '\0') {
    FUN_007c3c60();
    FUN_00e87980();
  }
  _memcpy(param_1,section_000007e0.segname + 8,param_3);
  return;
}



// ============================================================
// 007a77d0
// ============================================================
// Function: FUN_007a77d0
// Address: 007a77d0
// Size: 545 bytes
// Class: GNSoundFileWAVEReader
// String references:
//   "GNSoundFileWAVEReader"

void FUN_007a77d0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_10d8;
  
  if ((g_027653b0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_0272dcf8 = FUN_007b4da0();
    g_0272dce0 = "GNSoundFileWAVEReader";
    g_0272dce8 = 0x878;
    g_0272dcf0 = FUN_007c1140;
    g_0272dd00 = 0;
    ram_000000000272dd08 = 0;
    g_0272dd10 = 0;
    g_0272dd88 = 0;
    ram_000000000272dd90 = 0;
    g_0272dd98 = 0;
    g_0272dd9a = 1;
    g_0272dd18 = 0;
    ram_000000000272dd20 = 0;
    g_0272dd28 = 0;
    ram_000000000272dd30 = 0;
    g_0272dd38 = 0;
    ram_000000000272dd40 = 0;
    g_0272dd48 = 0;
    ram_000000000272dd50 = 0;
    g_0272dd58 = 0;
    ram_000000000272dd60 = 0;
    g_0272dd68 = 0;
    ram_000000000272dd70 = 0;
    g_0272dd78 = 0;
    ram_000000000272dd80 = 0;
    g_0272dda3 = 0;
    g_0272dd9b = 0;
    ___cxa_guard_release();
  }
  if (g_0272dd9b == '\0') {
    FUN_007b4c70();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_007c11c0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_10d8 != 0) {
      FUN_00d50b20();
    }
    FUN_007b5be0();
    FUN_007b5be0();
  }
  return;
}

