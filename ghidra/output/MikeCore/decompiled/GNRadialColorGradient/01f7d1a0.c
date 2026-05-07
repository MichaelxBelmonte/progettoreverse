// Function: FUN_01f7d1a0
// Address: 01f7d1a0
// Size: 519 bytes
// Class: GNRadialColorGradient


/* WARNING: Removing unreachable block (ram,0x01f7d2b9) */
/* WARNING: Removing unreachable block (ram,0x01f7d2c2) */
/* WARNING: Removing unreachable block (ram,0x01f7d337) */
/* WARNING: Removing unreachable block (ram,0x01f7d340) */

void FUN_01f7d1a0(void)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  bool bVar4;
  longlong local_38;
  char local_30;
  
  puVar3 = DAT_028bb038;
  if ((DAT_028bb038 == (undefined8 *)0x0) || (DAT_028bb041 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028bb038 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028bb038 == puVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028bb038 != (undefined8 *)0x0;
        DAT_028bb038 = puVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028bb040 == '\0') {
        DAT_028bb040 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(0);
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
      FUN_00d46dc0(DAT_02390124);
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
      DAT_028bb041 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028bb041 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = DAT_028bb038;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
      goto LAB_01f7d38c;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01f7d38c:
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


