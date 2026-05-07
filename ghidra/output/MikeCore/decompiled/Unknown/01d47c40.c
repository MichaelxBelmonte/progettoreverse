// Function: FUN_01d47c40
// Address: 01d47c40
// Size: 636 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01d47e6c) */
/* WARNING: Removing unreachable block (ram,0x01d47e75) */
/* WARNING: Removing unreachable block (ram,0x01d47e8d) */
/* WARNING: Removing unreachable block (ram,0x01d47e96) */
/* WARNING: Removing unreachable block (ram,0x01d47d25) */
/* WARNING: Removing unreachable block (ram,0x01d47d2e) */
/* WARNING: Removing unreachable block (ram,0x01d47de8) */
/* WARNING: Removing unreachable block (ram,0x01d47df1) */

void FUN_01d47c40(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *unaff_RDI;
  longlong local_50;
  char local_48;
  undefined8 *local_40;
  char local_38;
  
  if ((DAT_028b8148 == 0) || (DAT_028b8151 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027eff70;
    if (DAT_028b8148 == 0) {
      if (DAT_027eff70 != 0) {
        FUN_00d50b00();
        lVar4 = DAT_028b8148;
        if (DAT_028b8148 == lVar3) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          DAT_028b8148 = lVar3;
          bVar2 = true;
          bVar1 = true;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
        }
        if (DAT_028b8150 == '\0') {
          DAT_028b8150 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
      }
      DAT_028b8151 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b8151 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00da5ad0();
  if ((local_38 == '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00da6b70();
  lVar3 = DAT_028b8148;
  if (DAT_028b8148 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  if ((local_38 == '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  puVar5 = local_40;
  if (local_40 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_02572358;
    (*DAT_02572370)();
    FUN_00da6b70();
    lVar3 = DAT_028b8148;
    if (DAT_028b8148 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_40 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


