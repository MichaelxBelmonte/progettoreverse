// Function: FUN_00d292b0
// Address: 00d292b0
// Size: 2360 bytes
// Class: GNSerialNumber
// String references:
//   "%@"
//   "%@-"


void FUN_00d292b0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined8 *local_50;
  uint local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = DAT_026fce10;
  if (DAT_026fce10 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar1;
  local_f8 = '\x01';
  FUN_00d8ede0();
  local_70 = local_60;
  local_68 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_68 = '\x01';
  FUN_00d98db0(&local_70,&local_100,0);
  puVar3 = local_50;
  lVar1 = *unaff_RSI;
  if ((undefined8 *)lVar1 == local_50) {
    if (((char)unaff_RSI[1] == '\0') && (local_50 != (undefined8 *)0x0)) {
      if ((char)local_48 != '\0') goto LAB_00d29394;
      FUN_00d50b00();
      goto LAB_00d293cc;
    }
LAB_00d293d1:
    if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if ((char)local_48 == '\0') {
      if (local_50 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)puVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d293cc:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      goto LAB_00d293d1;
    }
    *unaff_RSI = (longlong)local_50;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00d29394:
    *(undefined1 *)(unaff_RSI + 1) = 1;
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0276ce70;
  if (DAT_0276ce70 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_0277d260;
  local_f0 = lVar1;
  local_e8 = '\x01';
  if (DAT_0277d260 != 0) {
    FUN_00d50b00();
  }
  local_e0 = lVar2;
  local_d8 = '\x01';
  FUN_00d98db0(&local_e0,&local_f0,0);
  puVar3 = local_50;
  lVar1 = *unaff_RSI;
  if ((undefined8 *)lVar1 == local_50) {
    if (((char)unaff_RSI[1] == '\0') && (local_50 != (undefined8 *)0x0)) {
      if ((char)local_48 != '\0') goto LAB_00d294d9;
      FUN_00d50b00();
      goto LAB_00d29511;
    }
LAB_00d29516:
    if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if ((char)local_48 == '\0') {
      if (local_50 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)puVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d29511:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      goto LAB_00d29516;
    }
    *unaff_RSI = (longlong)local_50;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00d294d9:
    *(undefined1 *)(unaff_RSI + 1) = 1;
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0276c080;
  if (DAT_0276c080 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_0277d268;
  local_d0 = lVar1;
  local_c8 = '\x01';
  if (DAT_0277d268 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar2;
  local_b8 = '\x01';
  FUN_00d98db0(&local_c0,&local_d0,0);
  puVar3 = local_50;
  lVar1 = *unaff_RSI;
  if ((undefined8 *)lVar1 == local_50) {
    if (((char)unaff_RSI[1] == '\0') && (local_50 != (undefined8 *)0x0)) {
      if ((char)local_48 != '\0') goto LAB_00d29610;
      FUN_00d50b00();
      goto LAB_00d29648;
    }
LAB_00d2964d:
    if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if ((char)local_48 == '\0') {
      if (local_50 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)puVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d29648:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      goto LAB_00d2964d;
    }
    *unaff_RSI = (longlong)local_50;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00d29610:
    *(undefined1 *)(unaff_RSI + 1) = 1;
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02781718;
  if (DAT_02781718 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_0277d270;
  local_b0 = lVar1;
  local_a8 = '\x01';
  if (DAT_0277d270 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  FUN_00d98db0(&local_a0,&local_b0,0);
  puVar3 = local_50;
  lVar1 = *unaff_RSI;
  if ((undefined8 *)lVar1 == local_50) {
    if (((char)unaff_RSI[1] == '\0') && (local_50 != (undefined8 *)0x0)) {
      if ((char)local_48 != '\0') goto LAB_00d29747;
      FUN_00d50b00();
      goto LAB_00d2977f;
    }
LAB_00d29784:
    if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if ((char)local_48 == '\0') {
      if (local_50 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)puVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d2977f:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      goto LAB_00d29784;
    }
    *unaff_RSI = (longlong)local_50;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00d29747:
    *(undefined1 *)(unaff_RSI + 1) = 1;
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0277d278;
  if (DAT_0277d278 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_0277d280;
  local_90 = lVar1;
  local_88 = '\x01';
  if (DAT_0277d280 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar2;
  local_78 = '\x01';
  FUN_00d98db0(&local_80,&local_90,0);
  puVar3 = local_50;
  lVar1 = *unaff_RSI;
  if ((undefined8 *)lVar1 == local_50) {
    if (((char)unaff_RSI[1] != '\0') || (local_50 == (undefined8 *)0x0)) goto LAB_00d298af;
    if ((char)local_48 == '\0') {
      FUN_00d50b00();
      goto LAB_00d298aa;
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if ((char)local_48 == '\0') {
      if (local_50 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)puVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d298aa:
      *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_00d298af:
      if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00d298c3;
    }
    *unaff_RSI = (longlong)local_50;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RSI + 1) = 1;
  local_48 = local_48 & 0xffffff00;
LAB_00d298c3:
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025795a8;
  (*DAT_025795c0)();
  FUN_00e7b4e0();
  FUN_00d8e3d0();
  local_40 = local_60;
  local_48 = 1;
  local_50 = &DAT_024c5048;
  local_38 = 0;
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  FUN_00d94d80();
  local_50 = &DAT_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e7b4e0();
  FUN_00d8e3d0();
  lVar1 = local_60;
  local_48 = 1;
  local_50 = &DAT_024c5048;
  local_38 = 0;
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_40 = lVar1;
  local_38 = '\x01';
  FUN_00d94d80();
  local_50 = &DAT_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e7b4e0();
  FUN_00d8e3d0();
  lVar1 = local_60;
  local_48 = 1;
  local_50 = &DAT_024c5048;
  local_38 = 0;
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_40 = lVar1;
  local_38 = '\x01';
  FUN_00d94d80();
  local_50 = &DAT_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e7b4e0();
  FUN_00d8e3d0();
  lVar1 = local_60;
  local_48 = 1;
  local_50 = &DAT_024c5048;
  local_38 = 0;
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_40 = lVar1;
  local_38 = '\x01';
  FUN_00d94d80();
  local_50 = &DAT_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e7b4e0();
  FUN_00d8e3d0();
  lVar1 = local_60;
  local_48 = 1;
  local_50 = &DAT_024c5048;
  local_38 = 0;
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_40 = lVar1;
  local_38 = '\x01';
  FUN_00d94d80();
  local_50 = &DAT_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


