// Function: FUN_0150a2e0
// Address: 0150a2e0
// Size: 561 bytes
// Class: MUScalePitchSystemSequence
// String references:
//   "MUScalePitchSystemSequence"


/* WARNING: Removing unreachable block (ram,0x0150a431) */
/* WARNING: Removing unreachable block (ram,0x0150a43f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0150a2e0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_a0;
  longlong local_90;
  longlong local_88;
  undefined8 *local_40;
  
  if ((DAT_027c3428 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027c3378 = FUN_010ec850();
    _DAT_027c3360 = "MUScalePitchSystemSequence";
    _DAT_027c3368 = 0x60;
    _DAT_027c3370 = FUN_0151fdc0;
    _DAT_027c3380 = 0;
    uRam00000000027c3388 = 0;
    _DAT_027c3390 = 0;
    uRam00000000027c3398 = 0;
    _DAT_027c33a0 = 0;
    uRam00000000027c33a8 = 0;
    _DAT_027c33b0 = 0;
    uRam00000000027c33b8 = 0;
    _DAT_027c33c0 = 0;
    uRam00000000027c33c8 = 0;
    _DAT_027c33d0 = 0;
    uRam00000000027c33d8 = 0;
    _DAT_027c33e0 = 0;
    uRam00000000027c33e8 = 0;
    _DAT_027c33f0 = 0;
    uRam00000000027c33f8 = 0;
    _DAT_027c3400 = 0;
    uRam00000000027c3408 = 0;
    _DAT_027c3410 = 0;
    _uRam00000000027c3418 = 0;
    _DAT_027c3420 = 0;
    ___cxa_guard_release();
  }
  if (DAT_027c341b == '\0') {
    FUN_0151fab0();
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
    FUN_010ecad0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    FUN_0151bc40();
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    if (local_a0 != 0) {
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


