// Function: FUN_00d28e50
// Address: 00d28e50
// Size: 673 bytes
// Class: GNSerialNumber
// String references:
//   "%01X"


/* WARNING: Removing unreachable block (ram,0x00d28f36) */
/* WARNING: Removing unreachable block (ram,0x00d28f3f) */
/* WARNING: Removing unreachable block (ram,0x00d28f8d) */
/* WARNING: Removing unreachable block (ram,0x00d28f96) */
/* WARNING: Removing unreachable block (ram,0x00d2902e) */
/* WARNING: Removing unreachable block (ram,0x00d2907f) */
/* WARNING: Removing unreachable block (ram,0x00d2908c) */

undefined8 * FUN_00d28e50(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *unaff_RDI;
  longlong lVar4;
  longlong local_70;
  char local_68;
  
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &DAT_02578b00;
  (*DAT_02578b18)();
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_025795a8;
  (*DAT_025795c0)();
  iVar3 = 0;
  do {
    FUN_00d46530();
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_00d7a410();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x13);
  FUN_00d2a2e0();
  FUN_00d2a650();
  if (local_70 != 0) {
    FUN_00d50b00();
  }
  lVar4 = 0;
  do {
    FUN_00d45870();
    FUN_00e7b4e0();
    FUN_00d8e3d0();
    if (local_70 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8dbf0();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x13);
  FUN_00d94d80();
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


