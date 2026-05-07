// Function: FUN_0055f640
// Address: 0055f640
// Size: 590 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
//   "MDAnimationCenter"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055f640(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_48;
  undefined8 *local_28;
  
  if (DAT_02708bb8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270f048 = FUN_00d4fe50();
      _DAT_0270f030 = "MDAnimationCenter";
      _DAT_0270f038 = 0x20;
      _DAT_0270f040 = FUN_0049f350;
      _DAT_0270f050 = 0;
      uRam000000000270f058 = 0;
      _DAT_0270f060 = 0;
      uRam000000000270f068 = 0;
      _DAT_0270f070 = 0;
      uRam000000000270f078 = 0;
      _DAT_0270f080 = 0;
      uRam000000000270f088 = 0;
      _DAT_0270f090 = 0;
      uRam000000000270f098 = 0;
      _DAT_0270f0a0 = 0;
      uRam000000000270f0a8 = 0;
      _DAT_0270f0b0 = 0;
      uRam000000000270f0b8 = 0;
      _DAT_0270f0c0 = 0;
      uRam000000000270f0c8 = 0;
      _DAT_0270f0d0 = 0;
      uRam000000000270f0d8 = 0;
      _DAT_0270f0e0 = 0;
      _uRam000000000270f0e8 = 0;
      _DAT_0270f0f0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270f0eb == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    local_28 = (undefined8 *)0x0;
    if (1 < DAT_02802630) {
      local_28 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_28 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_00d4ff80();
    if (DAT_026ff970 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026e0230 = "GNHeartbeatHandler";
        DAT_026e0240 = 0;
        _DAT_026e0238 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87c40();
    FUN_005745f0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (local_28 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}


