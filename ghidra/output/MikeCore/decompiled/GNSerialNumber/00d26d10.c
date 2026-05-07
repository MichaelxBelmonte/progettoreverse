// Function: FUN_00d26d10
// Address: 00d26d10
// Size: 1624 bytes
// Class: GNSerialNumber


void FUN_00d26d10(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
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
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = DAT_026fce10;
  if (DAT_026fce10 != 0) {
    FUN_00d50b00();
  }
  local_f0 = lVar1;
  local_e8 = '\x01';
  FUN_00d8ede0();
  local_50 = local_60;
  local_48 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_48 = '\x01';
  FUN_00d98db0(&local_50,&local_f0,0);
  lVar3 = local_40;
  lVar1 = *unaff_RSI;
  if (lVar1 == local_40) {
    if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
      if (local_38 != '\0') goto LAB_00d26dee;
      FUN_00d50b00();
      goto LAB_00d26e25;
    }
LAB_00d26e2a:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = lVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d26e25:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      goto LAB_00d26e2a;
    }
    *unaff_RSI = local_40;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00d26dee:
    *(undefined1 *)(unaff_RSI + 1) = 1;
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0277d260;
  if (DAT_0277d260 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_0276ce70;
  local_e0 = lVar1;
  local_d8 = '\x01';
  if (DAT_0276ce70 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar3;
  local_c8 = '\x01';
  FUN_00d98db0(&local_d0,&local_e0,0);
  lVar3 = local_40;
  lVar1 = *unaff_RSI;
  if (lVar1 == local_40) {
    if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
      if (local_38 != '\0') goto LAB_00d26f2b;
      FUN_00d50b00();
      goto LAB_00d26f62;
    }
LAB_00d26f67:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = lVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d26f62:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      goto LAB_00d26f67;
    }
    *unaff_RSI = local_40;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00d26f2b:
    *(undefined1 *)(unaff_RSI + 1) = 1;
    local_38 = '\0';
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0277d268;
  if (DAT_0277d268 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_0276c080;
  local_c0 = lVar1;
  local_b8 = '\x01';
  if (DAT_0276c080 != 0) {
    FUN_00d50b00();
  }
  local_b0 = lVar3;
  local_a8 = '\x01';
  FUN_00d98db0(&local_b0,&local_c0,0);
  lVar3 = local_40;
  lVar1 = *unaff_RSI;
  if (lVar1 == local_40) {
    if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
      if (local_38 != '\0') goto LAB_00d2705a;
      FUN_00d50b00();
      goto LAB_00d27091;
    }
LAB_00d27096:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = lVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d27091:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      goto LAB_00d27096;
    }
    *unaff_RSI = local_40;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00d2705a:
    *(undefined1 *)(unaff_RSI + 1) = 1;
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0277d270;
  if (DAT_0277d270 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_02781718;
  local_a0 = lVar1;
  local_98 = '\x01';
  if (DAT_02781718 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar3;
  local_88 = '\x01';
  FUN_00d98db0(&local_90,&local_a0,0);
  lVar3 = local_40;
  lVar1 = *unaff_RSI;
  if (lVar1 == local_40) {
    if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
      if (local_38 != '\0') goto LAB_00d27186;
      FUN_00d50b00();
      goto LAB_00d271bd;
    }
LAB_00d271c2:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = lVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d271bd:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      goto LAB_00d271c2;
    }
    *unaff_RSI = local_40;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00d27186:
    *(undefined1 *)(unaff_RSI + 1) = 1;
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0277d280;
  if (DAT_0277d280 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_0277d278;
  local_80 = lVar1;
  local_78 = '\x01';
  if (DAT_0277d278 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar3;
  local_68 = '\x01';
  FUN_00d98db0(&local_70,&local_80,0);
  lVar3 = local_40;
  lVar1 = *unaff_RSI;
  if (lVar1 == local_40) {
    if (((char)unaff_RSI[1] != '\0') || (local_40 == 0)) goto LAB_00d272dc;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_00d272d7;
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = lVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d272d7:
      *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_00d272dc:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00d272f0;
    }
    *unaff_RSI = local_40;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RSI + 1) = 1;
  local_38 = '\0';
LAB_00d272f0:
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar1 = *unaff_RSI;
  if ((char)unaff_RSI[1] == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(unaff_RSI + 1) = 0;
  }
  return;
}


