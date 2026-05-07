// Function: FUN_00272a20
// Address: 00272a20
// Size: 551 bytes
// Class: MDQuantizeController
// String references:
//   "MDQuantizeController"


/* WARNING: Removing unreachable block (ram,0x00272b56) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00272a20(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_b8;
  longlong local_a8;
  undefined8 *local_30;
  
  if ((DAT_0271e090 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026f84d8 = FUN_00015ff0();
    _DAT_026f84c0 = "MDQuantizeController";
    _DAT_026f84c8 = 0x88;
    _DAT_026f84d0 = FUN_00273000;
    _DAT_026f84e0 = 0;
    uRam00000000026f84e8 = 0;
    _DAT_026f84f0 = 0;
    _DAT_026f8568 = 0;
    uRam00000000026f8570 = 0;
    _DAT_026f8578 = 0;
    DAT_026f857a = 1;
    _DAT_026f84f8 = 0;
    uRam00000000026f8500 = 0;
    _DAT_026f8508 = 0;
    uRam00000000026f8510 = 0;
    _DAT_026f8518 = 0;
    uRam00000000026f8520 = 0;
    _DAT_026f8528 = 0;
    uRam00000000026f8530 = 0;
    _DAT_026f8538 = 0;
    uRam00000000026f8540 = 0;
    _DAT_026f8548 = 0;
    uRam00000000026f8550 = 0;
    _DAT_026f8558 = 0;
    uRam00000000026f8560 = 0;
    DAT_026f8583 = 0;
    _DAT_026f857b = 0;
    ___cxa_guard_release();
  }
  if (DAT_026f857b == '\0') {
    FUN_0005a900();
    FUN_00e87760();
    FUN_000161a0();
    local_30 = (undefined8 *)0x0;
    if (1 < DAT_02802630) {
      local_30 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_30 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_002730b0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_00364340();
    FUN_00e87920(uVar2,0);
    if (local_a8 != 0) {
      FUN_00d50b20();
    }
    if (local_b8 != 0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
    if (local_30 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
  }
  return;
}


