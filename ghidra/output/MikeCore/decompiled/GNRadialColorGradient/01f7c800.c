// Function: FUN_01f7c800
// Address: 01f7c800
// Size: 766 bytes
// Class: GNRadialColorGradient


/* WARNING: Removing unreachable block (ram,0x01f7ca15) */
/* WARNING: Removing unreachable block (ram,0x01f7ca1e) */
/* WARNING: Removing unreachable block (ram,0x01f7c919) */
/* WARNING: Removing unreachable block (ram,0x01f7c922) */
/* WARNING: Removing unreachable block (ram,0x01f7c997) */
/* WARNING: Removing unreachable block (ram,0x01f7c9a0) */
/* WARNING: Removing unreachable block (ram,0x01f7ca93) */
/* WARNING: Removing unreachable block (ram,0x01f7ca9c) */

void FUN_01f7c800(void)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  bool bVar4;
  longlong local_30;
  char local_28;
  
  puVar3 = DAT_028bb018;
  if ((DAT_028bb018 == (undefined8 *)0x0) || (DAT_028bb021 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028bb018 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028bb018 == puVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028bb018 != (undefined8 *)0x0;
        DAT_028bb018 = puVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028bb020 == '\0') {
        DAT_028bb020 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(0);
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
      FUN_00d46dc0(DAT_0240dedc);
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
      FUN_00d46dc0(DAT_02423b68);
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
      FUN_00d46dc0(DAT_02390124);
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
      DAT_028bb021 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028bb021 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = DAT_028bb018;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
      goto LAB_01f7cae7;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01f7cae7:
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


