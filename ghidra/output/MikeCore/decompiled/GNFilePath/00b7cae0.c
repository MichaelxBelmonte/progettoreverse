// Function: FUN_00b7cae0
// Address: 00b7cae0
// Size: 569 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x00b7cc58) */
/* WARNING: Removing unreachable block (ram,0x00b7cc61) */
/* WARNING: Removing unreachable block (ram,0x00b7cbf6) */
/* WARNING: Removing unreachable block (ram,0x00b7cbff) */
/* WARNING: Removing unreachable block (ram,0x00b7ccba) */
/* WARNING: Removing unreachable block (ram,0x00b7ccc3) */

void FUN_00b7cae0(void)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  bool bVar4;
  longlong local_48;
  char local_40;
  
  puVar3 = DAT_028a55a0;
  if ((DAT_028a55a0 == (undefined8 *)0x0) || (DAT_028a55a9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a55a0 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028a55a0 == puVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028a55a0 != (undefined8 *)0x0;
        DAT_028a55a0 = puVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a55a8 == '\0') {
        DAT_028a55a8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00b7ce70();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_00d21140();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      FUN_00b7d310();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_00d21140();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      FUN_00b7d850();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      DAT_028a55a9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a55a9 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = DAT_028a55a0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
      goto LAB_00b7ccfb;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00b7ccfb:
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


