// Function: FUN_0017c120
// Address: 0017c120
// Size: 544 bytes
// Class: GNToolBox
// String references:
//   "GNToolBox"


/* WARNING: Removing unreachable block (ram,0x0017c26b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017c120(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_f0;
  longlong local_e8;
  undefined8 *local_78;
  
  if ((DAT_026e6760 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026e66b0 = FUN_00d4fe50();
    _DAT_026e6698 = "GNToolBox";
    _DAT_026e66a0 = 0x78;
    _DAT_026e66a8 = FUN_0019ef40;
    _DAT_026e66b8 = 0;
    uRam00000000026e66c0 = 0;
    _DAT_026e66c8 = 0;
    uRam00000000026e66d0 = 0;
    _DAT_026e66d8 = 0;
    uRam00000000026e66e0 = 0;
    _DAT_026e66e8 = 0;
    uRam00000000026e66f0 = 0;
    _DAT_026e66f8 = 0;
    uRam00000000026e6700 = 0;
    _DAT_026e6708 = 0;
    uRam00000000026e6710 = 0;
    _DAT_026e6718 = 0;
    uRam00000000026e6720 = 0;
    _DAT_026e6728 = 0;
    uRam00000000026e6730 = 0;
    _DAT_026e6738 = 0;
    uRam00000000026e6740 = 0;
    _DAT_026e6748 = 0;
    _uRam00000000026e6750 = 0;
    _DAT_026e6758 = 0;
    ___cxa_guard_release();
  }
  if (DAT_026e6753 == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    local_78 = (undefined8 *)0x0;
    if (1 < DAT_02802630) {
      local_78 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_78 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_0019f010();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_e8 != 0) {
      FUN_00d50b20();
    }
    if (local_f0 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (local_78 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}


