// ===================================================================
// MDWorkspaceLayoutStrategy — Complete reconstructed pseudocode
// 3 functions
// ===================================================================

// Registered properties (2):
//   MDAlignType     _alignV
//   MDAlignType     _alignH


// ============================================================
// 005f45b0
// ============================================================
// Function: FUN_005f45b0
// Address: 005f45b0
// Size: 1292 bytes
// Class: MDWorkspaceLayoutStrategy
// String references:
//   "MDWorkspaceLayoutStrategy"
// === MDWorkspaceLayoutStrategy properties ===
//   MDAlignType     _alignV
//   MDAlignType     _alignH


void FUN_005f45b0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02508168;
  FUN_005f4af0();
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_02720f2b == '\0') {
    FUN_005f4e10();
    FUN_00e87980();
  }
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_02720f2b == '\0') {
    FUN_005f4fa0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_02720f2b == '\0') {
    FUN_005f5130();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_02720f2b == '\0') {
    FUN_005f5390();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_02720f2b == '\0') {
    FUN_005f55f0();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 005f5130
// ============================================================
// Function: FUN_005f5130
// Address: 005f5130
// Size: 560 bytes
// Class: MDWorkspaceLayoutStrategy
// String references:
//   "MDWorkspaceLayoutStrategy"
//   "MDAlignType"
//   "_alignV"
// === MDWorkspaceLayoutStrategy properties ===
//   MDAlignType     _alignV
//   MDAlignType     _alignH


void* FUN_005f5130(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_02725d40 = "_alignV";
      g_02725d48 = &g_02720e70;
      g_02725d50 = 0;
      g_02725d58 = 0x6500;
      g_02725d60 = "MDAlignType";
      g_02725d68 = &g_02721018;
      g_02725d70 = 0;
      ram_0000000002725d78 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_02725d40;
}



// ============================================================
// 005f5390
// ============================================================
// Function: FUN_005f5390
// Address: 005f5390
// Size: 560 bytes
// Class: MDWorkspaceLayoutStrategy
// String references:
//   "MDWorkspaceLayoutStrategy"
//   "MDAlignType"
//   "_alignH"
// === MDWorkspaceLayoutStrategy properties ===
//   MDAlignType     _alignV
//   MDAlignType     _alignH


void* FUN_005f5390(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_02721050 = "_alignH";
      g_02721058 = &g_02720e70;
      g_02721060 = 0;
      g_02721068 = 0x6500;
      g_02721070 = "MDAlignType";
      g_02721078 = &g_02721018;
      g_02721080 = 0;
      ram_0000000002721088 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_02721050;
}

