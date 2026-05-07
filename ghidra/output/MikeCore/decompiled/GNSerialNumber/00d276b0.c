// Function: FUN_00d276b0
// Address: 00d276b0
// Size: 832 bytes
// Class: GNSerialNumber
// String references:
//   "0123456789012345678"


/* WARNING: Removing unreachable block (ram,0x00d2792e) */
/* WARNING: Removing unreachable block (ram,0x00d27833) */
/* WARNING: Removing unreachable block (ram,0x00d2783c) */
/* WARNING: Removing unreachable block (ram,0x00d27786) */
/* WARNING: Removing unreachable block (ram,0x00d2778f) */
/* WARNING: Removing unreachable block (ram,0x00d2798d) */
/* WARNING: Removing unreachable block (ram,0x00d2799a) */

undefined8 * FUN_00d276b0(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *unaff_RDI;
  longlong lVar5;
  longlong *local_50;
  char local_48;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02578b00;
  (*DAT_02578b18)();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025795a8;
  (*DAT_025795c0)();
  iVar4 = 0;
  do {
    FUN_00d46530();
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_00d7a410();
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x13);
  FUN_00d8f140();
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00ddb860();
  cVar1 = (**(code **)(*local_50 + 0x430))();
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_00d94d80();
    FUN_00d2a650();
    if (local_50 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      FUN_00d50b00();
      lVar5 = 0;
      do {
        FUN_00d45870();
        FUN_00e7b4e0();
        FUN_00e7b4e0();
        FUN_00d8e3d0();
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d8e100();
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x13);
      *unaff_RDI = puVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
      if (local_50 != (longlong *)0x0) goto LAB_00d279ef;
    }
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
LAB_00d279ef:
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


