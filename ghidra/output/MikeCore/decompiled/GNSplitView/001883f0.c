// Function: FUN_001883f0
// Address: 001883f0
// Size: 555 bytes
// Class: GNSplitView
// String references:
//   "GNSplitView"


/* WARNING: Removing unreachable block (ram,0x00188544) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001883f0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_180;
  longlong local_178;
  undefined8 *local_30;
  
  if ((DAT_026f14c0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026f1410 = FUN_0006d940();
    _DAT_026f13f8 = "GNSplitView";
    _DAT_026f1400 = 0x150;
    _DAT_026f1408 = FUN_001edd10;
    _DAT_026f1418 = 0;
    uRam00000000026f1420 = 0;
    _DAT_026f1428 = 0;
    uRam00000000026f1430 = 0;
    _DAT_026f1438 = 0;
    uRam00000000026f1440 = 0;
    _DAT_026f1448 = 0;
    uRam00000000026f1450 = 0;
    _DAT_026f1458 = 0;
    uRam00000000026f1460 = 0;
    _DAT_026f1468 = 0;
    uRam00000000026f1470 = 0;
    _DAT_026f1478 = 0;
    uRam00000000026f1480 = 0;
    _DAT_026f1488 = 0;
    uRam00000000026f1490 = 0;
    _DAT_026f1498 = 0;
    uRam00000000026f14a0 = 0;
    _DAT_026f14a8 = 0;
    _uRam00000000026f14b0 = 0;
    _DAT_026f14b8 = 0;
    ___cxa_guard_release();
  }
  if (DAT_026f14b3 == '\0') {
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
    FUN_001edde0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01db1310();
    FUN_00e87920(uVar2,0);
    if (local_178 != 0) {
      FUN_00d50b20();
    }
    if (local_180 != 0) {
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


