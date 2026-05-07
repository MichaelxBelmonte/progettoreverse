// Function: FUN_00b6ff00
// Address: 00b6ff00
// Size: 601 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00b70075) */
/* WARNING: Removing unreachable block (ram,0x00b7007e) */
/* WARNING: Removing unreachable block (ram,0x00b6ffff) */
/* WARNING: Removing unreachable block (ram,0x00b70008) */
/* WARNING: Removing unreachable block (ram,0x00b700eb) */
/* WARNING: Removing unreachable block (ram,0x00b700f4) */

void FUN_00b6ff00(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_RDI;
  bool bVar2;
  longlong local_30;
  char local_28;
  
  puVar1 = DAT_028a5358;
  if ((DAT_028a5358 == (undefined8 *)0x0) || (DAT_028a5361 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5358 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar1 = &DAT_02572358;
      (*DAT_02572370)();
      bVar2 = DAT_028a5358 == (undefined8 *)0x0;
      DAT_028a5358 = puVar1;
      if (((bVar2) || (FUN_00d50b20(), DAT_028a5358 != (undefined8 *)0x0)) && (DAT_028a5360 == '\0')
         ) {
        DAT_028a5360 = '\x01';
        FUN_00e8cb90();
      }
      FUN_00b7ea30();
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
      FUN_00b7ce70();
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
      FUN_00b7d310();
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
      DAT_028a5361 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5361 = '\x01';
      FUN_00e8cb70();
    }
    puVar1 = DAT_028a5358;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
      goto LAB_00b7013f;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00b7013f:
  *unaff_RDI = puVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


