// Function: FUN_00dd4a40
// Address: 00dd4a40
// Size: 551 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00dd4b8b) */
/* WARNING: Removing unreachable block (ram,0x00dd4b94) */
/* WARNING: Removing unreachable block (ram,0x00dd4b25) */
/* WARNING: Removing unreachable block (ram,0x00dd4ae6) */
/* WARNING: Removing unreachable block (ram,0x00dd4aef) */
/* WARNING: Removing unreachable block (ram,0x00dd4c19) */
/* WARNING: Removing unreachable block (ram,0x00dd4c22) */
/* WARNING: Removing unreachable block (ram,0x00dd4bc4) */
/* WARNING: Removing unreachable block (ram,0x00dd4be4) */
/* WARNING: Removing unreachable block (ram,0x00dd4bed) */

undefined8 * FUN_00dd4a40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar3;
  longlong local_90;
  char local_88;
  longlong *local_40;
  char local_38;
  
  FUN_00da5ad0();
  if ((char)local_40[3] == '\0') {
    bVar3 = false;
  }
  else {
    FUN_00d3a520();
    bVar3 = local_90 == 0;
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar3) {
    FUN_00d3a4d0();
    (**(code **)(**(longlong **)(unaff_RSI + 0x10) + 0x368))();
    FUN_00d3aaa0();
    FUN_00d3a4d0();
    FUN_00d3aa50();
    *unaff_RDI = 0;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    uVar1 = FUN_00d3a4c0();
    uVar2 = FUN_00d3a550();
    FUN_00d3af80(uVar2,uVar1,DAT_025908a0);
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00d3a4b0();
    (**(code **)(*local_40 + 0x368))();
    FUN_00d3aaa0();
    *unaff_RDI = 0;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
  }
  return unaff_RDI;
}


