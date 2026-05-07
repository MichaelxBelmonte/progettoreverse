// Function: FUN_010eb850
// Address: 010eb850
// Size: 525 bytes
// Class: Unknown
// String references:
//   "PNTestMatrixPeaksForFastSearch"


/* WARNING: Removing unreachable block (ram,0x010eb97d) */
/* WARNING: Removing unreachable block (ram,0x010eb98b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010eb850(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 *local_48;
  
  if ((DAT_027bc120 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027bc070 = FUN_00d4fe50();
    _DAT_027bc058 = "PNTestMatrixPeaksForFastSearch";
    _DAT_027bc060 = 0x40;
    _DAT_027bc068 = FUN_011e67a0;
    _DAT_027bc078 = 0;
    uRam00000000027bc080 = 0;
    _DAT_027bc088 = 0;
    uRam00000000027bc090 = 0;
    _DAT_027bc098 = 0;
    uRam00000000027bc0a0 = 0;
    _DAT_027bc0a8 = 0;
    uRam00000000027bc0b0 = 0;
    _DAT_027bc0b8 = 0;
    uRam00000000027bc0c0 = 0;
    _DAT_027bc0c8 = 0;
    uRam00000000027bc0d0 = 0;
    _DAT_027bc0d8 = 0;
    uRam00000000027bc0e0 = 0;
    _DAT_027bc0e8 = 0;
    uRam00000000027bc0f0 = 0;
    _DAT_027bc0f8 = 0;
    uRam00000000027bc100 = 0;
    _DAT_027bc108 = 0;
    _uRam00000000027bc110 = 0;
    _DAT_027bc118 = 0;
    ___cxa_guard_release();
  }
  if (DAT_027bc113 == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    local_48 = (undefined8 *)0x0;
    if (1 < DAT_02802630) {
      local_48 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_48 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_011e69a0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    if (local_80 != 0) {
      FUN_00d50b20();
    }
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (local_48 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}


