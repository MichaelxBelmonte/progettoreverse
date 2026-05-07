// Function: FUN_0184ac30
// Address: 0184ac30
// Size: 533 bytes
// Class: MUScaleRegion
// String references:
//   "MUScaleRegion"


/* WARNING: Removing unreachable block (ram,0x0184ad65) */
/* WARNING: Removing unreachable block (ram,0x0184ad73) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0184ac30(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if ((DAT_027d6b78 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027d6ac8 = FUN_00d4fe50();
    _DAT_027d6ab0 = "MUScaleRegion";
    _DAT_027d6ab8 = 0x48;
    _DAT_027d6ac0 = FUN_0187cb40;
    _DAT_027d6ad0 = 0;
    uRam00000000027d6ad8 = 0;
    _DAT_027d6ae0 = 0;
    uRam00000000027d6ae8 = 0;
    _DAT_027d6af0 = 0;
    uRam00000000027d6af8 = 0;
    _DAT_027d6b00 = 0;
    uRam00000000027d6b08 = 0;
    _DAT_027d6b10 = 0;
    uRam00000000027d6b18 = 0;
    _DAT_027d6b20 = 0;
    uRam00000000027d6b28 = 0;
    _DAT_027d6b30 = 0;
    uRam00000000027d6b38 = 0;
    _DAT_027d6b40 = 0;
    uRam00000000027d6b48 = 0;
    _DAT_027d6b50 = 0;
    uRam00000000027d6b58 = 0;
    _DAT_027d6b60 = 0;
    _uRam00000000027d6b68 = 0;
    _DAT_027d6b70 = 0;
    ___cxa_guard_release();
  }
  if (DAT_027d6b6b == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    uStack_48 = 0;
    uStack_44 = 0;
    if (1 < DAT_02802630) {
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02572358;
      (*DAT_02572370)();
      uStack_48 = SUB84(puVar2,0);
      uStack_44 = (undefined4)((ulonglong)puVar2 >> 0x20);
    }
    FUN_00d50c00();
    FUN_01880930();
    FUN_00d50c00();
    uVar3 = FUN_00e87770();
    FUN_00e87920(uVar3,0);
    if (local_80 != 0) {
      FUN_00d50b20();
    }
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (CONCAT44(uStack_44,uStack_48) != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}


