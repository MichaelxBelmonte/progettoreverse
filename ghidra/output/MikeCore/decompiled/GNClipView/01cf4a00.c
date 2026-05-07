// Function: FUN_01cf4a00
// Address: 01cf4a00
// Size: 849 bytes
// Class: GNClipView


void FUN_01cf4a00(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint unaff_ESI;
  longlong *unaff_RDI;
  bool bVar4;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if ((DAT_028b78a8 == (undefined8 *)0x0) || (DAT_028b78b1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b78a8 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      bVar4 = DAT_028b78a8 == (undefined8 *)0x0;
      DAT_028b78a8 = puVar3;
      if (((bVar4) || (FUN_00d50b20(), lVar2 = DAT_027ef060, DAT_028b78a8 != (undefined8 *)0x0)) &&
         (lVar2 = DAT_027ef060, DAT_028b78b0 == '\0')) {
        DAT_028b78b0 = '\x01';
        FUN_00e8cb90();
        lVar2 = DAT_027ef060;
      }
      DAT_027ef060 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_30 = '\0';
      local_38 = lVar2;
      FUN_00d21140();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027ef068;
      if (DAT_027ef068 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar2;
      local_30 = '\0';
      FUN_00d21140();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027ef070;
      if (DAT_027ef070 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar2;
      local_30 = '\0';
      FUN_00d21140();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027ef078;
      if (DAT_027ef078 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar2;
      local_30 = '\0';
      FUN_00d21140();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      DAT_028b78b1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b78b1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if (3 < unaff_ESI) {
    return;
  }
  switch((ulonglong)unaff_ESI) {
  case 0:
    iVar1 = *(int *)((longlong)unaff_RDI + 0x154);
    break;
  case 1:
    iVar1 = *(int *)((longlong)unaff_RDI + 0x15c);
    break;
  case 2:
    iVar1 = (int)unaff_RDI[0x2b];
    goto joined_r0x01cf4c69;
  case 3:
    iVar1 = (int)unaff_RDI[0x2c];
joined_r0x01cf4c69:
    if (iVar1 != 2) {
      return;
    }
    goto LAB_01cf4c6f;
  }
  if (iVar1 == 2) {
LAB_01cf4c6f:
    FUN_01cf4890();
    FUN_00d46dc0();
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    lVar2 = *(longlong *)(DAT_028b78a8[2] + (ulonglong)unaff_ESI * 8);
    local_50 = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    local_58 = lVar2;
    (**(code **)(*unaff_RDI + 0x408))(&local_58,&local_48);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


