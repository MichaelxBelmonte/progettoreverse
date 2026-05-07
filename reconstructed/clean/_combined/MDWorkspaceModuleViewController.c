// ===================================================================
// MDWorkspaceModuleViewController — Complete reconstructed pseudocode
// 2 functions
// ===================================================================


// ============================================================
// 00566d70
// ============================================================
// Function: FUN_00566d70
// Address: 00566d70
// Size: 649 bytes
// Class: MDWorkspaceModuleViewController
// String references:
//   "MDWorkspaceModuleViewController"

void FUN_00566d70(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_118;
  int64_t local_108;
  int64_t local_f0;
  void*local_60;
  
  if ((g_027217b0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026e4858 = FUN_00015ff0();
    g_026e4840 = "MDWorkspaceModuleViewController";
    g_026e4848 = 0xb8;
    g_026e4850 = FUN_00018320;
    g_026e4860 = 0;
    ram_00000000026e4868 = 0;
    g_026e4870 = 0;
    g_026e48e8 = 0;
    ram_00000000026e48f0 = 0;
    g_026e48f8 = 0;
    g_026e48fa = 1;
    g_026e4878 = 0;
    ram_00000000026e4880 = 0;
    g_026e4888 = 0;
    ram_00000000026e4890 = 0;
    g_026e4898 = 0;
    ram_00000000026e48a0 = 0;
    g_026e48a8 = 0;
    ram_00000000026e48b0 = 0;
    g_026e48b8 = 0;
    ram_00000000026e48c0 = 0;
    g_026e48c8 = 0;
    ram_00000000026e48d0 = 0;
    g_026e48d8 = 0;
    ram_00000000026e48e0 = 0;
    g_026e4903 = 0;
    g_026e48fb = 0;
    ___cxa_guard_release();
  }
  if (g_026e48fb == '\0') {
    FUN_0005a900();
    FUN_00e87760();
    FUN_000161a0();
    local_60 = (void*)0x0;
    if (1 < g_02802630) {
      local_60 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_60 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_005f6c40();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_f0 != 0) {
      FUN_00d50b20();
    }
    if (local_108 != 0) {
      FUN_00d50b20();
    }
    if (local_118 != 0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
    if (local_60 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
  }
  return;
}



// ============================================================
// 005f6c40
// ============================================================
// Function: FUN_005f6c40
// Address: 005f6c40
// Size: 1392 bytes
// Class: MDWorkspaceModuleViewController
// String references:
//   "MDWorkspaceModuleViewController"
//   "MDWorkspaceLayoutDelegate"
//   "MDTabTargetDelegate"

void FUN_005f6c40(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  this_ptr[0xe] = &g_025061a8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0xf] = &g_025057b8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_024d59d8;
  this_ptr[0xe] = &g_024d6028;
  this_ptr[0xf] = &g_024d6090;
  FUN_005f7250();
  *(void*)(this_ptr + 0x11) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e48fb == '\0') {
    FUN_005f7580();
    FUN_00e87980();
  }
  FUN_005f7710();
  FUN_005f7a40();
  *(void*)(this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e48fb == '\0') {
    FUN_005f7d60();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa1) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e48fb == '\0') {
    FUN_005f7ef0();
    FUN_00e87980();
  }
  FUN_005f8080();
  *(void*)(this_ptr + 0x16) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e48fb == '\0') {
    FUN_005f8340();
    FUN_00e87980();
  }
  return;
}

