// Function: FUN_017281b0
// Address: 017281b0
// Size: 936 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x017284ae) */
/* WARNING: Removing unreachable block (ram,0x017284b7) */
/* WARNING: Removing unreachable block (ram,0x0172840e) */
/* WARNING: Removing unreachable block (ram,0x01728417) */
/* WARNING: Removing unreachable block (ram,0x0172832f) */
/* WARNING: Removing unreachable block (ram,0x01728338) */
/* WARNING: Removing unreachable block (ram,0x017282b4) */
/* WARNING: Removing unreachable block (ram,0x017282bd) */
/* WARNING: Removing unreachable block (ram,0x017283aa) */
/* WARNING: Removing unreachable block (ram,0x017283b3) */
/* WARNING: Removing unreachable block (ram,0x0172845e) */
/* WARNING: Removing unreachable block (ram,0x01728467) */
/* WARNING: Removing unreachable block (ram,0x017284fe) */
/* WARNING: Removing unreachable block (ram,0x01728507) */

void FUN_017281b0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RDI;
  bool bVar3;
  longlong local_40;
  char local_38;
  
  puVar2 = DAT_028adac8;
  if ((DAT_028adac8 == (undefined8 *)0x0) || (DAT_028adad1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028adac8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02572358;
      (*DAT_02572370)();
      bVar3 = DAT_028adac8 == (undefined8 *)0x0;
      DAT_028adac8 = puVar2;
      if (((bVar3) || (FUN_00d50b20(), DAT_028adac8 != (undefined8 *)0x0)) && (DAT_028adad0 == '\0')
         ) {
        DAT_028adad0 = '\x01';
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
      lVar1 = DAT_02781678;
      if (DAT_02781678 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027cc8f0;
      if (DAT_027cc8f0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027cc940;
      if (DAT_027cc940 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027df528;
      if (DAT_027df528 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028adad1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028adad1 = '\x01';
      FUN_00e8cb70();
    }
    puVar2 = DAT_028adac8;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_0172853e;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_0172853e:
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


