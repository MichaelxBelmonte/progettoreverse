// Function: FUN_00bf3f50
// Address: 00bf3f50
// Size: 635 bytes
// Class: GNOverloudConvolver
// String references:
//   "GNOverloudConvolver"


/* WARNING: Removing unreachable block (ram,0x00bf40e8) */
/* WARNING: Removing unreachable block (ram,0x00bf40f6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf3f50(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  undefined8 *puStack_30;
  
  if ((DAT_0276e120 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_0276e070 = FUN_00b10020();
    _DAT_0276e058 = "GNOverloudConvolver";
    _DAT_0276e060 = 0xe0;
    _DAT_0276e068 = FUN_00c41070;
    _DAT_0276e078 = 0;
    uRam000000000276e080 = 0;
    _DAT_0276e088 = 0;
    uRam000000000276e090 = 0;
    _DAT_0276e098 = 0;
    uRam000000000276e0a0 = 0;
    _DAT_0276e0a8 = 0;
    uRam000000000276e0b0 = 0;
    _DAT_0276e0b8 = 0;
    uRam000000000276e0c0 = 0;
    _DAT_0276e0c8 = 0;
    uRam000000000276e0d0 = 0;
    _DAT_0276e0d8 = 0;
    uRam000000000276e0e0 = 0;
    _DAT_0276e0e8 = 0;
    uRam000000000276e0f0 = 0;
    _DAT_0276e0f8 = 0;
    uRam000000000276e100 = 0;
    _DAT_0276e108 = 0;
    _uRam000000000276e110 = 0;
    _DAT_0276e118 = 0;
    ___cxa_guard_release();
  }
  if (DAT_0276e113 == '\0') {
    FUN_00af3fa0();
    FUN_00e87760();
    FUN_00d4ff40();
    puStack_30 = (undefined8 *)0x0;
    if (1 < DAT_02802630) {
      puStack_30 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puStack_30 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_00c46990();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_00c1a890();
    FUN_00e87920(uVar2,0);
    FUN_00c226d0();
    FUN_00c228b0();
    FUN_00c22b10();
    if (local_100 != 0) {
      FUN_00d50b20();
    }
    if (local_108 != 0) {
      FUN_00d50b20();
    }
    if (local_110 != 0) {
      FUN_00d50b20();
    }
    FUN_00b10a20();
    if (puStack_30 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_00b10a20();
  }
  return;
}


