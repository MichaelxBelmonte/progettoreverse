// Function: FUN_01f7cd50
// Address: 01f7cd50
// Size: 640 bytes
// Class: GNRadialColorGradient


/* WARNING: Removing unreachable block (ram,0x01f7cee7) */
/* WARNING: Removing unreachable block (ram,0x01f7cef0) */
/* WARNING: Removing unreachable block (ram,0x01f7ce69) */
/* WARNING: Removing unreachable block (ram,0x01f7ce72) */
/* WARNING: Removing unreachable block (ram,0x01f7cf65) */
/* WARNING: Removing unreachable block (ram,0x01f7cf6e) */

void FUN_01f7cd50(void)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  bool bVar4;
  longlong local_30;
  char local_28;
  
  puVar3 = DAT_028bb028;
  if ((DAT_028bb028 == (undefined8 *)0x0) || (DAT_028bb031 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028bb028 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028bb028 == puVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028bb028 != (undefined8 *)0x0;
        DAT_028bb028 = puVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028bb030 == '\0') {
        DAT_028bb030 = '\x01';
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
      FUN_00d46dc0(DAT_0239011c);
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
      DAT_028bb031 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028bb031 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = DAT_028bb028;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
      goto LAB_01f7cfb9;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01f7cfb9:
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


