// Function: FUN_01e731f0
// Address: 01e731f0
// Size: 590 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
//   "GNAnimationCenter"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e731f0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_48;
  undefined8 *local_28;
  
  if (DAT_027f48c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02801548 = FUN_00d4fe50();
      _DAT_02801530 = "GNAnimationCenter";
      _DAT_02801538 = 0x20;
      _DAT_02801540 = FUN_01f99af0;
      _DAT_02801550 = 0;
      uRam0000000002801558 = 0;
      _DAT_02801560 = 0;
      uRam0000000002801568 = 0;
      _DAT_02801570 = 0;
      uRam0000000002801578 = 0;
      _DAT_02801580 = 0;
      uRam0000000002801588 = 0;
      _DAT_02801590 = 0;
      uRam0000000002801598 = 0;
      _DAT_028015a0 = 0;
      uRam00000000028015a8 = 0;
      _DAT_028015b0 = 0;
      uRam00000000028015b8 = 0;
      _DAT_028015c0 = 0;
      uRam00000000028015c8 = 0;
      _DAT_028015d0 = 0;
      uRam00000000028015d8 = 0;
      _DAT_028015e0 = 0;
      _uRam00000000028015e8 = 0;
      _DAT_028015f0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_028015eb == '\0') {
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
    FUN_01e7a560();
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


