// Function: FUN_00180450
// Address: 00180450
// Size: 539 bytes
// Class: GNCustomAssoc
// String references:
//   "GNCustomAssoc"


/* WARNING: Removing unreachable block (ram,0x001805a7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00180450(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong local_70;
  
  if ((DAT_026eb080 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026eafd0 = FUN_001ba850();
    _DAT_026eafb8 = "GNCustomAssoc";
    _DAT_026eafc0 = 0x50;
    _DAT_026eafc8 = FUN_001c07a0;
    _DAT_026eafd8 = 0;
    uRam00000000026eafe0 = 0;
    _DAT_026eafe8 = 0;
    uRam00000000026eaff0 = 0;
    _DAT_026eaff8 = 0;
    uRam00000000026eb000 = 0;
    _DAT_026eb008 = 0;
    uRam00000000026eb010 = 0;
    _DAT_026eb018 = 0;
    uRam00000000026eb020 = 0;
    _DAT_026eb028 = 0;
    uRam00000000026eb030 = 0;
    _DAT_026eb038 = 0;
    uRam00000000026eb040 = 0;
    _DAT_026eb048 = 0;
    uRam00000000026eb050 = 0;
    _DAT_026eb058 = 0;
    uRam00000000026eb060 = 0;
    _DAT_026eb068 = 0;
    _uRam00000000026eb070 = 0;
    _DAT_026eb078 = 0;
    ___cxa_guard_release();
  }
  if (DAT_026eb073 == '\0') {
    FUN_001ba5f0();
    FUN_00e87760();
    FUN_00d4ff40();
    if (1 < DAT_02802630) {
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_001baad0();
    FUN_001c0880();
    FUN_00d50c00();
    uVar3 = FUN_00e87770();
    FUN_00e87920(uVar3,0);
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    FUN_001bb300();
    FUN_001bb300();
  }
  return;
}


