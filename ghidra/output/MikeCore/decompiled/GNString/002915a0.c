// Function: FUN_002915a0
// Address: 002915a0
// Size: 863 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x0029181b) */
/* WARNING: Removing unreachable block (ram,0x00291824) */
/* WARNING: Removing unreachable block (ram,0x0029172f) */
/* WARNING: Removing unreachable block (ram,0x00291738) */
/* WARNING: Removing unreachable block (ram,0x002916b9) */
/* WARNING: Removing unreachable block (ram,0x002916c2) */
/* WARNING: Removing unreachable block (ram,0x002917a5) */
/* WARNING: Removing unreachable block (ram,0x002917ae) */
/* WARNING: Removing unreachable block (ram,0x00291891) */
/* WARNING: Removing unreachable block (ram,0x0029189a) */

void FUN_002915a0(void)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  bool bVar4;
  longlong local_30;
  char local_28;
  
  puVar3 = DAT_02805d88;
  if ((DAT_02805d88 == (undefined8 *)0x0) || (DAT_02805d91 == '\0')) {
    FUN_00e8cb50();
    if (DAT_02805d88 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_02805d88 == puVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_02805d88 != (undefined8 *)0x0;
        DAT_02805d88 = puVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_02805d90 == '\0') {
        DAT_02805d90 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00b7ace0();
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d214d0();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00b7e000();
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d23f50();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_0074b2e0();
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_01552cd0();
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00b6ff00();
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d23480();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      DAT_02805d91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_02805d91 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = DAT_02805d88;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
      goto LAB_002918e5;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_002918e5:
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


