// Function: FUN_001852e0
// Address: 001852e0
// Size: 551 bytes
// Class: GNModuleViewAssoc
// String references:
//   "GNModuleViewAssoc"


/* WARNING: Removing unreachable block (ram,0x00185443) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001852e0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong local_78;
  
  if ((DAT_026eef78 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026eeec8 = FUN_001ba850();
    _DAT_026eeeb0 = "GNModuleViewAssoc";
    _DAT_026eeeb8 = 0x58;
    _DAT_026eeec0 = FUN_001dc590;
    _DAT_026eeed0 = 0;
    uRam00000000026eeed8 = 0;
    _DAT_026eeee0 = 0;
    uRam00000000026eeee8 = 0;
    _DAT_026eeef0 = 0;
    uRam00000000026eeef8 = 0;
    _DAT_026eef00 = 0;
    uRam00000000026eef08 = 0;
    _DAT_026eef10 = 0;
    uRam00000000026eef18 = 0;
    _DAT_026eef20 = 0;
    uRam00000000026eef28 = 0;
    _DAT_026eef30 = 0;
    uRam00000000026eef38 = 0;
    _DAT_026eef40 = 0;
    uRam00000000026eef48 = 0;
    _DAT_026eef50 = 0;
    uRam00000000026eef58 = 0;
    _DAT_026eef60 = 0;
    _uRam00000000026eef68 = 0;
    _DAT_026eef70 = 0;
    ___cxa_guard_release();
  }
  if (DAT_026eef6b == '\0') {
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
    FUN_001dc670();
    FUN_001dc9b0();
    FUN_00d50c00();
    uVar3 = FUN_00e87770();
    FUN_00e87920(uVar3,0);
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    FUN_001bb300();
    FUN_001bb300();
  }
  return;
}


