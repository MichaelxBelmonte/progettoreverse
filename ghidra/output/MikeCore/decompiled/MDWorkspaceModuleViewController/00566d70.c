// Function: FUN_00566d70
// Address: 00566d70
// Size: 649 bytes
// Class: MDWorkspaceModuleViewController
// String references:
//   "MDWorkspaceModuleViewController"


/* WARNING: Removing unreachable block (ram,0x00566ef6) */
/* WARNING: Removing unreachable block (ram,0x00566f04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00566d70(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_118;
  longlong local_108;
  longlong local_f0;
  undefined8 *local_60;
  
  if ((DAT_027217b0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026e4858 = FUN_00015ff0();
    _DAT_026e4840 = "MDWorkspaceModuleViewController";
    _DAT_026e4848 = 0xb8;
    _DAT_026e4850 = FUN_00018320;
    _DAT_026e4860 = 0;
    uRam00000000026e4868 = 0;
    _DAT_026e4870 = 0;
    _DAT_026e48e8 = 0;
    uRam00000000026e48f0 = 0;
    _DAT_026e48f8 = 0;
    DAT_026e48fa = 1;
    _DAT_026e4878 = 0;
    uRam00000000026e4880 = 0;
    _DAT_026e4888 = 0;
    uRam00000000026e4890 = 0;
    _DAT_026e4898 = 0;
    uRam00000000026e48a0 = 0;
    _DAT_026e48a8 = 0;
    uRam00000000026e48b0 = 0;
    _DAT_026e48b8 = 0;
    uRam00000000026e48c0 = 0;
    _DAT_026e48c8 = 0;
    uRam00000000026e48d0 = 0;
    _DAT_026e48d8 = 0;
    uRam00000000026e48e0 = 0;
    DAT_026e4903 = 0;
    _DAT_026e48fb = 0;
    ___cxa_guard_release();
  }
  if (DAT_026e48fb == '\0') {
    FUN_0005a900();
    FUN_00e87760();
    FUN_000161a0();
    local_60 = (undefined8 *)0x0;
    if (1 < DAT_02802630) {
      local_60 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_60 = &DAT_02572358;
      (*DAT_02572370)();
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
    if (local_60 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
  }
  return;
}


