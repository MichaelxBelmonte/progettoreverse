// Function: FUN_00d4c4e0
// Address: 00d4c4e0
// Size: 707 bytes
// Class: GNString


undefined4 FUN_00d4c4e0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
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
  
  lVar1 = *(longlong *)(unaff_RDI + 0x18);
  if (lVar1 != 0) {
    local_78 = 0;
    FUN_00d50b00();
    local_78 = '\x01';
    local_80 = lVar1;
    FUN_00d8ede0();
    local_70 = local_50;
    local_68 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_68 = '\x01';
    FUN_00d98db0(&local_70,&local_80,0);
    lVar3 = local_40;
    lVar1 = *unaff_RSI;
    if (lVar1 == local_40) {
      if (((char)unaff_RSI[1] != '\0') || (local_40 == 0)) goto LAB_00d4c5ec;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_00d4c5e7;
      }
LAB_00d4c5b0:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      local_38 = '\0';
    }
    else {
      lVar2 = unaff_RSI[1];
      if (local_38 != '\0') {
        *unaff_RSI = local_40;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00d4c5b0;
      }
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = lVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d4c5e7:
      *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_00d4c5ec:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d95590();
  local_60 = local_50;
  local_58 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_58 = '\x01';
  FUN_00d97f20();
  lVar3 = local_40;
  lVar1 = *unaff_RSI;
  if (lVar1 == local_40) {
    if (((char)unaff_RSI[1] != '\0') || (local_40 == 0)) goto LAB_00d4c70c;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_00d4c707;
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
LAB_00d4c707:
      *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_00d4c70c:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00d4c720;
    }
    *unaff_RSI = local_40;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RSI + 1) = 1;
  local_38 = '\0';
LAB_00d4c720:
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0277dd00;
  if (DAT_0277dd00 != 0) {
    FUN_00d50b00();
  }
  uVar4 = FUN_00d90dc0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return uVar4;
}


