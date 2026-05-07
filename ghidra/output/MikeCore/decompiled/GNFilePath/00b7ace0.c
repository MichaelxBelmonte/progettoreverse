// Function: FUN_00b7ace0
// Address: 00b7ace0
// Size: 1054 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x00b7b042) */
/* WARNING: Removing unreachable block (ram,0x00b7b04b) */
/* WARNING: Removing unreachable block (ram,0x00b7af7e) */
/* WARNING: Removing unreachable block (ram,0x00b7af87) */
/* WARNING: Removing unreachable block (ram,0x00b7aeba) */
/* WARNING: Removing unreachable block (ram,0x00b7aec3) */
/* WARNING: Removing unreachable block (ram,0x00b7adf6) */
/* WARNING: Removing unreachable block (ram,0x00b7adff) */
/* WARNING: Removing unreachable block (ram,0x00b7ae58) */
/* WARNING: Removing unreachable block (ram,0x00b7ae61) */
/* WARNING: Removing unreachable block (ram,0x00b7af1c) */
/* WARNING: Removing unreachable block (ram,0x00b7af25) */
/* WARNING: Removing unreachable block (ram,0x00b7afe0) */
/* WARNING: Removing unreachable block (ram,0x00b7afe9) */
/* WARNING: Removing unreachable block (ram,0x00b7b0a4) */
/* WARNING: Removing unreachable block (ram,0x00b7b0ad) */

void FUN_00b7ace0(void)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  bool bVar4;
  longlong local_40;
  char local_38;
  
  puVar3 = DAT_028a55b0;
  if ((DAT_028a55b0 == (undefined8 *)0x0) || (DAT_028a55b9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a55b0 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028a55b0 == puVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028a55b0 != (undefined8 *)0x0;
        DAT_028a55b0 = puVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a55b8 == '\0') {
        DAT_028a55b8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00b7d310();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_00b7dcf0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_00b7ce70();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_00b7d850();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_00b7e000();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_00b7e310();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_00b7e620();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_00b7ea30();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      DAT_028a55b9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a55b9 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = DAT_028a55b0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
      goto LAB_00b7b0e4;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00b7b0e4:
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


