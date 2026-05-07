// Function: FUN_0018b960
// Address: 0018b960
// Size: 545 bytes
// Class: GNToolbarPalette
// String references:
//   "GNToolbarPalette"

void FUN_0018b960(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_188;
  int64_t local_180;
  void*local_38;
  
  if ((g_026f3f68 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026f3eb8 = FUN_0006d940();
    g_026f3ea0 = "GNToolbarPalette";
    g_026f3ea8 = 0x150;
    g_026f3eb0 = FUN_002043b0;
    g_026f3ec0 = 0;
    ram_00000000026f3ec8 = 0;
    g_026f3ed0 = 0;
    ram_00000000026f3ed8 = 0;
    g_026f3ee0 = 0;
    ram_00000000026f3ee8 = 0;
    g_026f3ef0 = 0;
    ram_00000000026f3ef8 = 0;
    g_026f3f00 = 0;
    ram_00000000026f3f08 = 0;
    g_026f3f10 = 0;
    ram_00000000026f3f18 = 0;
    g_026f3f20 = 0;
    ram_00000000026f3f28 = 0;
    g_026f3f30 = 0;
    ram_00000000026f3f38 = 0;
    g_026f3f40 = 0;
    ram_00000000026f3f48 = 0;
    g_026f3f50 = 0;
    _ram_00000000026f3f58 = 0;
    g_026f3f60 = 0;
    ___cxa_guard_release();
  }
  if (g_026f3f5b == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    local_38 = (void*)0x0;
    if (1 < g_02802630) {
      local_38 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_38 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_00204470();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_180 != 0) {
      FUN_00d50b20();
    }
    if (local_188 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    if (local_38 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
  }
  return;
}

