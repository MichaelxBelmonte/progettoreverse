// Function: FUN_004b40e0
// Address: 004b40e0
// Size: 542 bytes
// Class: MDToolbarLayouter
// String references:
//   "MDToolbarLayouter"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b40e0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_178;
  undefined8 *local_30;
  
  if (DAT_02702998 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02709498 = FUN_0006d940();
      _DAT_02709480 = "MDToolbarLayouter";
      _DAT_02709488 = 0x148;
      _DAT_02709490 = FUN_0033dd70;
      _DAT_027094a0 = 0;
      uRam00000000027094a8 = 0;
      _DAT_027094b0 = 0;
      _DAT_02709528 = 0;
      uRam0000000002709530 = 0;
      _DAT_02709538 = 0;
      DAT_0270953a = 1;
      _DAT_027094b8 = 0;
      uRam00000000027094c0 = 0;
      _DAT_027094c8 = 0;
      uRam00000000027094d0 = 0;
      _DAT_027094d8 = 0;
      uRam00000000027094e0 = 0;
      _DAT_027094e8 = 0;
      uRam00000000027094f0 = 0;
      _DAT_027094f8 = 0;
      uRam0000000002709500 = 0;
      _DAT_02709508 = 0;
      uRam0000000002709510 = 0;
      _DAT_02709518 = 0;
      uRam0000000002709520 = 0;
      DAT_02709543 = 0;
      _DAT_0270953b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270953b == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    local_30 = (undefined8 *)0x0;
    if (1 < DAT_02802630) {
      local_30 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_30 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_004b5040();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_178 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    if (local_30 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
  }
  return;
}


