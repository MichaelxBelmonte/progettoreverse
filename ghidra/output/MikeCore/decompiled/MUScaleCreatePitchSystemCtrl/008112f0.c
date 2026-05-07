// Function: FUN_008112f0
// Address: 008112f0
// Size: 528 bytes
// Class: MUScaleCreatePitchSystemCtrl
// String references:
//   "MUScaleCreatePitchSystemCtrl"


/* WARNING: Removing unreachable block (ram,0x00811429) */
/* WARNING: Removing unreachable block (ram,0x0081141b) */
/* WARNING: Removing unreachable block (ram,0x00811437) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008112f0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  
  if ((DAT_02737a48 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_02737998 = FUN_00842350();
    _DAT_02737980 = "MUScaleCreatePitchSystemCtrl";
    _DAT_02737988 = 0xb8;
    _DAT_02737990 = FUN_008422e0;
    _DAT_027379a0 = 0;
    uRam00000000027379a8 = 0;
    _DAT_027379b0 = 0;
    uRam00000000027379b8 = 0;
    _DAT_027379c0 = 0;
    uRam00000000027379c8 = 0;
    _DAT_027379d0 = 0;
    uRam00000000027379d8 = 0;
    _DAT_027379e0 = 0;
    uRam00000000027379e8 = 0;
    _DAT_027379f0 = 0;
    uRam00000000027379f8 = 0;
    _DAT_02737a00 = 0;
    uRam0000000002737a08 = 0;
    _DAT_02737a10 = 0;
    uRam0000000002737a18 = 0;
    _DAT_02737a20 = 0;
    uRam0000000002737a28 = 0;
    _DAT_02737a30 = 0;
    _uRam0000000002737a38 = 0;
    _DAT_02737a40 = 0;
    ___cxa_guard_release();
  }
  if (DAT_02737a3b == '\0') {
    FUN_00811d70();
    FUN_00e87760();
    FUN_000161a0();
    FUN_00d50c00();
    FUN_00842640();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_e0 != 0) {
      FUN_00d50b20();
    }
    if (local_e8 != 0) {
      FUN_00d50b20();
    }
    if (local_f0 != 0) {
      FUN_00d50b20();
    }
    FUN_008425a0();
    FUN_008425a0();
  }
  return;
}


