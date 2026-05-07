// Function: FUN_001899f0
// Address: 001899f0
// Size: 574 bytes
// Class: GNTabView
// String references:
//   "GNTabView"


/* WARNING: Removing unreachable block (ram,0x00189b57) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001899f0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_1c8;
  longlong local_1a0;
  undefined8 *local_58;
  
  if ((DAT_027fa280 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026f24c8 = FUN_0006d940();
    _DAT_026f24b0 = "GNTabView";
    _DAT_026f24b8 = 0x170;
    _DAT_026f24c0 = FUN_001f41f0;
    _DAT_026f24d0 = 0;
    uRam00000000026f24d8 = 0;
    _DAT_026f24e0 = 0;
    uRam00000000026f24e8 = 0;
    _DAT_026f24f0 = 0;
    uRam00000000026f24f8 = 0;
    _DAT_026f2500 = 0;
    uRam00000000026f2508 = 0;
    _DAT_026f2510 = 0;
    uRam00000000026f2518 = 0;
    _DAT_026f2520 = 0;
    uRam00000000026f2528 = 0;
    _DAT_026f2530 = 0;
    uRam00000000026f2538 = 0;
    _DAT_026f2540 = 0;
    uRam00000000026f2548 = 0;
    _DAT_026f2550 = 0;
    uRam00000000026f2558 = 0;
    _DAT_026f2560 = 0;
    _uRam00000000026f2568 = 0;
    _DAT_026f2570 = 0;
    ___cxa_guard_release();
  }
  if (DAT_026f256b == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    local_58 = (undefined8 *)0x0;
    if (1 < DAT_02802630) {
      local_58 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_58 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_001f42d0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01dfd890();
    FUN_00e87920(uVar2,0);
    if (local_1a0 != 0) {
      FUN_00d50b20();
    }
    if (local_1c8 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    if (local_58 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
  }
  return;
}


