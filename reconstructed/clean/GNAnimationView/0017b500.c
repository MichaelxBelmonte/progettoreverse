// Function: FUN_0017b500
// Address: 0017b500
// Size: 578 bytes
// Class: GNAnimationView
// String references:
//   "GNAnimationView"

void FUN_0017b500(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t *local_218;
  int64_t local_210;
  int64_t local_200;
  
  if ((g_026e49f8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026e4948 = FUN_0006d940();
    g_026e4930 = "GNAnimationView";
    g_026e4938 = 0x198;
    g_026e4940 = FUN_0018ce70;
    g_026e4950 = 0;
    ram_00000000026e4958 = 0;
    g_026e4960 = 0;
    ram_00000000026e4968 = 0;
    g_026e4970 = 0;
    ram_00000000026e4978 = 0;
    g_026e4980 = 0;
    ram_00000000026e4988 = 0;
    g_026e4990 = 0;
    ram_00000000026e4998 = 0;
    g_026e49a0 = 0;
    ram_00000000026e49a8 = 0;
    g_026e49b0 = 0;
    ram_00000000026e49b8 = 0;
    g_026e49c0 = 0;
    ram_00000000026e49c8 = 0;
    g_026e49d0 = 0;
    ram_00000000026e49d8 = 0;
    g_026e49e0 = 0;
    _ram_00000000026e49e8 = 0;
    g_026e49f0 = 0;
    ___cxa_guard_release();
  }
  if (g_026e49eb == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_0018cef0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_200 != 0) {
      FUN_00d50b20();
    }
    if (local_210 != 0) {
      FUN_00d50b20();
    }
    if (local_218 != (int64_t *)0x0) {
      (**(code **)(*local_218 + 0x10))();
      FUN_00d50b20();
    }
    FUN_0006d770();
    FUN_0006d770();
  }
  return;
}

