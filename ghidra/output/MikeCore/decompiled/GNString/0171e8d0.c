// Function: FUN_0171e8d0
// Address: 0171e8d0
// Size: 501 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x0171e9d7) */
/* WARNING: Removing unreachable block (ram,0x0171e9e0) */
/* WARNING: Removing unreachable block (ram,0x0171ea52) */
/* WARNING: Removing unreachable block (ram,0x0171ea5b) */

void FUN_0171e8d0(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_RDI;
  bool bVar2;
  longlong local_38;
  char local_30;
  
  puVar1 = DAT_028adae8;
  if ((DAT_028adae8 == (undefined8 *)0x0) || (DAT_028adaf1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028adae8 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar1 = &DAT_02572358;
      (*DAT_02572370)();
      bVar2 = DAT_028adae8 == (undefined8 *)0x0;
      DAT_028adae8 = puVar1;
      if (((bVar2) || (FUN_00d50b20(), DAT_028adae8 != (undefined8 *)0x0)) && (DAT_028adaf0 == '\0')
         ) {
        DAT_028adaf0 = '\x01';
        FUN_00e8cb90();
      }
      FUN_00d933c0();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_00d21140();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d933c0();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_00d21140();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      DAT_028adaf1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028adaf1 = '\x01';
      FUN_00e8cb70();
    }
    puVar1 = DAT_028adae8;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
      goto LAB_0171eaa7;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_0171eaa7:
  *unaff_RDI = puVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


