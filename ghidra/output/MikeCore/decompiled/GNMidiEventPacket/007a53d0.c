// Function: FUN_007a53d0
// Address: 007a53d0
// Size: 508 bytes
// Class: GNMidiEventPacket
// String references:
//   "GNMidiEventPacket"


/* WARNING: Removing unreachable block (ram,0x007a54ef) */
/* WARNING: Removing unreachable block (ram,0x007a54fd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a53d0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_78;
  longlong local_70;
  longlong local_58;
  undefined8 *local_40;
  
  if ((DAT_027594e0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_0272b4c8 = FUN_00d4fe50();
    _DAT_0272b4b0 = "GNMidiEventPacket";
    _DAT_0272b4b8 = 0x38;
    _DAT_0272b4c0 = FUN_007af310;
    _DAT_0272b4d0 = 0;
    uRam000000000272b4d8 = 0;
    _DAT_0272b4e0 = 0;
    uRam000000000272b4e8 = 0;
    _DAT_0272b4f0 = 0;
    uRam000000000272b4f8 = 0;
    _DAT_0272b500 = 0;
    uRam000000000272b508 = 0;
    _DAT_0272b510 = 0;
    uRam000000000272b518 = 0;
    _DAT_0272b520 = 0;
    uRam000000000272b528 = 0;
    _DAT_0272b530 = 0;
    uRam000000000272b538 = 0;
    _DAT_0272b540 = 0;
    uRam000000000272b548 = 0;
    _DAT_0272b550 = 0;
    uRam000000000272b558 = 0;
    _DAT_0272b560 = 0;
    _uRam000000000272b568 = 0;
    _DAT_0272b570 = 0;
    ___cxa_guard_release();
  }
  if (DAT_0272b56b == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    local_40 = (undefined8 *)0x0;
    if (1 < DAT_02802630) {
      local_40 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_40 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_007af3c0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (local_40 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}


