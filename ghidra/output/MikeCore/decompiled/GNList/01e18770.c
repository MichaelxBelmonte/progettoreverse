// Function: FUN_01e18770
// Address: 01e18770
// Size: 635 bytes
// Class: GNList


void FUN_01e18770(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_30;
  char local_28;
  
  if (((char)unaff_RDI[0x2a] == '\0') || (unaff_RDI[0x30] != 0)) goto LAB_01e189c7;
  if (*(char *)((longlong)unaff_RDI + 0x174) == '\0') {
    FUN_00d403d0();
    FUN_00d50b00();
    local_90 = DAT_027f32f0;
    if (DAT_027f32f0 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    local_80 = 0;
    local_78 = '\0';
    FUN_00d41430(&local_80,&local_90);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_70 = DAT_027f32f8;
    if (DAT_027f32f8 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    local_60 = 0;
    local_58 = '\0';
    FUN_00d41430(&local_60,&local_70);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 0x31) = 1;
  FUN_01e1eb80(DAT_023942d0);
  lVar1 = unaff_RDI[0x30];
  lVar2 = lVar1;
  if (lVar1 != local_30) {
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar2 = 0;
        goto LAB_01e187ed;
      }
      FUN_00d50b00();
      lVar1 = unaff_RDI[0x30];
      unaff_RDI[0x30] = local_30;
    }
    else {
      local_28 = '\0';
LAB_01e187ed:
      unaff_RDI[0x30] = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x620))();
LAB_01e189c7:
  if ((longlong *)unaff_RDI[0x38] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x38] + 0x20))();
  }
  return;
}


