// Function: FUN_01ea01c0
// Address: 01ea01c0
// Size: 1152 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01ea0584) */
/* WARNING: Removing unreachable block (ram,0x01ea058d) */
/* WARNING: Removing unreachable block (ram,0x01ea04c0) */
/* WARNING: Removing unreachable block (ram,0x01ea04c9) */
/* WARNING: Removing unreachable block (ram,0x01ea03fc) */
/* WARNING: Removing unreachable block (ram,0x01ea0405) */
/* WARNING: Removing unreachable block (ram,0x01ea0338) */
/* WARNING: Removing unreachable block (ram,0x01ea0341) */
/* WARNING: Removing unreachable block (ram,0x01ea02d6) */
/* WARNING: Removing unreachable block (ram,0x01ea02df) */
/* WARNING: Removing unreachable block (ram,0x01ea039a) */
/* WARNING: Removing unreachable block (ram,0x01ea03a3) */
/* WARNING: Removing unreachable block (ram,0x01ea045e) */
/* WARNING: Removing unreachable block (ram,0x01ea0467) */
/* WARNING: Removing unreachable block (ram,0x01ea0522) */
/* WARNING: Removing unreachable block (ram,0x01ea052b) */
/* WARNING: Removing unreachable block (ram,0x01ea05e6) */
/* WARNING: Removing unreachable block (ram,0x01ea05ef) */

void FUN_01ea01c0(void)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  bool bVar4;
  longlong local_40;
  char local_38;
  
  puVar3 = DAT_028ba1e0;
  if ((DAT_028ba1e0 == (undefined8 *)0x0) || (DAT_028ba1e9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ba1e0 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028ba1e0 == puVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028ba1e0 != (undefined8 *)0x0;
        DAT_028ba1e0 = puVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028ba1e8 == '\0') {
        DAT_028ba1e8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_01ea09a0();
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
      FUN_01ea0e40();
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
      FUN_01ea1460();
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
      FUN_01ea1a80();
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
      FUN_01ea20a0();
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
      FUN_01ea2540();
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
      FUN_01ea1770();
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
      FUN_01ea1d90();
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
      FUN_01ea1150();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      DAT_028ba1e9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ba1e9 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = DAT_028ba1e0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
      goto LAB_01ea0626;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01ea0626:
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


