// Function: FUN_01c49e10
// Address: 01c49e10
// Size: 601 bytes
// Class: MUTempoEditorViewItem
// String references:
//   "MUTempoEditorViewItem"


/* WARNING: Removing unreachable block (ram,0x01c49f6a) */
/* WARNING: Removing unreachable block (ram,0x01c49f78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c49e10(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 *puStack_38;
  
  if ((DAT_027ec0c8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027ec018 = FUN_00d4fe50();
    _DAT_027ec000 = "MUTempoEditorViewItem";
    _DAT_027ec008 = 0x78;
    _DAT_027ec010 = FUN_01c7a1a0;
    _DAT_027ec020 = 0;
    uRam00000000027ec028 = 0;
    _DAT_027ec030 = 0;
    _DAT_027ec0a8 = 0;
    uRam00000000027ec0b0 = 0;
    _DAT_027ec0b8 = 0;
    DAT_027ec0ba = 1;
    _DAT_027ec038 = 0;
    uRam00000000027ec040 = 0;
    _DAT_027ec048 = 0;
    uRam00000000027ec050 = 0;
    _DAT_027ec058 = 0;
    uRam00000000027ec060 = 0;
    _DAT_027ec068 = 0;
    uRam00000000027ec070 = 0;
    _DAT_027ec078 = 0;
    uRam00000000027ec080 = 0;
    _DAT_027ec088 = 0;
    uRam00000000027ec090 = 0;
    _DAT_027ec098 = 0;
    uRam00000000027ec0a0 = 0;
    DAT_027ec0c3 = 0;
    _DAT_027ec0bb = 0;
    ___cxa_guard_release();
  }
  if (DAT_027ec0bb == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    puStack_38 = (undefined8 *)0x0;
    if (1 < DAT_02802630) {
      puStack_38 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puStack_38 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_01c7a3d0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_a0 != 0) {
      FUN_00d50b20();
    }
    if (local_a8 != 0) {
      FUN_00d50b20();
    }
    if (local_b0 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (puStack_38 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}


