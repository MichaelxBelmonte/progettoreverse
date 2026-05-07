// ===================================================================
// MUTranspositionMapper — Complete reconstructed pseudocode
// 3 functions
// ===================================================================

// Registered properties (2):
//   MUTranspositionMapperTarget _target
//   MUTranspositionMapperSource _source


// ============================================================
// 011d3330
// ============================================================
// Function: FUN_011d3330
// Address: 011d3330
// Size: 1550 bytes
// Class: MUTranspositionMapper
// String references:
//   "MUTranspositionMapper"
// === MUTranspositionMapper properties ===
//   MUTranspositionMapperTarget _target
//   MUTranspositionMapperSource _source


void FUN_011d3330(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_01152110();
  *this_ptr = &g_02609518;
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b911b == '\0') {
    FUN_011d3970();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b911b == '\0') {
    FUN_011d3bc0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b911b == '\0') {
    FUN_011d3e20();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b911b == '\0') {
    FUN_011d3f90();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xb) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b911b == '\0') {
    FUN_011d4100();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b911b == '\0') {
    FUN_011d4270();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b911b == '\0') {
    FUN_011d43e0();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 011d3bc0
// ============================================================
// Function: FUN_011d3bc0
// Address: 011d3bc0
// Size: 561 bytes
// Class: MUTranspositionMapper
// String references:
//   "_target"
//   "MUTranspositionMapper"
//   "MUTranspositionMapperTarget"
// === MUTranspositionMapper properties ===
//   MUTranspositionMapperTarget _target
//   MUTranspositionMapperSource _source


void* FUN_011d3bc0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027b9220 = "_target";
      g_027b9228 = &g_027b9060;
      g_027b9230 = 0;
      g_027b9238 = 0x6500;
      g_027b9240 = "MUTranspositionMapperTarget";
      g_027b9248 = &g_027b9308;
      g_027b9250 = 0;
      ram_00000000027b9258 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027b9220;
}



// ============================================================
// 011d3970
// ============================================================
// Function: FUN_011d3970
// Address: 011d3970
// Size: 553 bytes
// Class: MUTranspositionMapper
// String references:
//   "_source"
//   "MUTranspositionMapper"
//   "MUTranspositionMapperSource"
// === MUTranspositionMapper properties ===
//   MUTranspositionMapperTarget _target
//   MUTranspositionMapperSource _source


void* FUN_011d3970(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027b9130 = "_source";
      g_027b9138 = &g_027b9060;
      g_027b9140 = 0;
      g_027b9148 = 0x6500;
      g_027b9150 = "MUTranspositionMapperSource";
      g_027b9158 = &g_027b91e8;
      g_027b9160 = 0;
      ram_00000000027b9168 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027b9130;
}

