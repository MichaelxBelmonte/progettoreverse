// Function: FUN_01729150
// Address: 01729150
// Size: 899 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01729429) */
/* WARNING: Removing unreachable block (ram,0x01729432) */
/* WARNING: Removing unreachable block (ram,0x0172934a) */
/* WARNING: Removing unreachable block (ram,0x01729353) */
/* WARNING: Removing unreachable block (ram,0x01729254) */
/* WARNING: Removing unreachable block (ram,0x0172925d) */
/* WARNING: Removing unreachable block (ram,0x017292cf) */
/* WARNING: Removing unreachable block (ram,0x017292d8) */
/* WARNING: Removing unreachable block (ram,0x017293c5) */
/* WARNING: Removing unreachable block (ram,0x017293ce) */
/* WARNING: Removing unreachable block (ram,0x01729479) */
/* WARNING: Removing unreachable block (ram,0x01729482) */

void FUN_01729150(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RDI;
  bool bVar3;
  longlong local_40;
  char local_38;
  
  puVar2 = DAT_028adb08;
  if ((DAT_028adb08 == (undefined8 *)0x0) || (DAT_028adb11 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028adb08 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02572358;
      (*DAT_02572370)();
      bVar3 = DAT_028adb08 == (undefined8 *)0x0;
      DAT_028adb08 = puVar2;
      if (((bVar3) || (FUN_00d50b20(), DAT_028adb08 != (undefined8 *)0x0)) && (DAT_028adb10 == '\0')
         ) {
        DAT_028adb10 = '\x01';
        FUN_00e8cb90();
      }
      FUN_00d933c0();
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
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d933c0();
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
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d933c0();
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
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d933c0();
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
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027cc910;
      if (DAT_027cc910 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027cc950;
      if (DAT_027cc950 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028adb11 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028adb11 = '\x01';
      FUN_00e8cb70();
    }
    puVar2 = DAT_028adb08;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_017294b9;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_017294b9:
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


