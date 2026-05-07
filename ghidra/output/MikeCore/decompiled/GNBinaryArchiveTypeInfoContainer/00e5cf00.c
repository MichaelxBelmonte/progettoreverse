// Function: FUN_00e5cf00
// Address: 00e5cf00
// Size: 527 bytes
// Class: GNBinaryArchiveTypeInfoContainer
// String references:
//   "GNBinaryArchiveTypeInfoContainer"


/* WARNING: Removing unreachable block (ram,0x00e5d024) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e5cf00(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_48;
  longlong local_40;
  undefined8 *local_28;
  
  if ((DAT_0277ead8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_0277ea28 = FUN_00d4fe50();
    _DAT_0277ea10 = "GNBinaryArchiveTypeInfoContainer";
    _DAT_0277ea18 = 0x20;
    _DAT_0277ea20 = FUN_00e4c0a0;
    _DAT_0277ea30 = 0;
    uRam000000000277ea38 = 0;
    _DAT_0277ea40 = 0;
    _DAT_0277eab8 = 0;
    uRam000000000277eac0 = 0;
    _DAT_0277eac8 = 0;
    DAT_0277eaca = 1;
    _DAT_0277ea48 = 0;
    uRam000000000277ea50 = 0;
    _DAT_0277ea58 = 0;
    uRam000000000277ea60 = 0;
    _DAT_0277ea68 = 0;
    uRam000000000277ea70 = 0;
    _DAT_0277ea78 = 0;
    uRam000000000277ea80 = 0;
    _DAT_0277ea88 = 0;
    uRam000000000277ea90 = 0;
    _DAT_0277ea98 = 0;
    uRam000000000277eaa0 = 0;
    _DAT_0277eaa8 = 0;
    uRam000000000277eab0 = 0;
    DAT_0277ead3 = 0;
    _DAT_0277eacb = 0;
    ___cxa_guard_release();
  }
  if (DAT_0277eacb == '\0') {
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
    FUN_00e5dd70();
    FUN_00e5e0a0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_40 != 0) {
      FUN_00d50b20();
    }
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


