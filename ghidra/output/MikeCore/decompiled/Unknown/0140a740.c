// Function: FUN_0140a740
// Address: 0140a740
// Size: 1168 bytes
// Class: Unknown


void FUN_0140a740(void)

{
  longlong lVar1;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
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
  
  lVar3 = DAT_027df900;
  if (DAT_027df900 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_027c0b10;
  local_c0 = lVar3;
  local_b8 = '\x01';
  if (DAT_027c0b10 != 0) {
    FUN_00d50b00();
  }
  local_b0 = lVar4;
  local_a8 = '\x01';
  FUN_00d98db0(&local_b0,&local_c0,1);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  lVar4 = DAT_027c7e08;
  if (DAT_027c7e08 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027c0b18;
  local_a0 = lVar4;
  local_98 = '\x01';
  if (DAT_027c0b18 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar2;
  local_88 = '\x01';
  FUN_00d98db0(&local_90,&local_a0,1);
  lVar4 = local_40;
  if (lVar3 == local_40) {
LAB_0140a8e6:
    lVar4 = lVar3;
    if (local_38 != '\0') {
LAB_0140a8ec:
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
        lVar3 = lVar4;
        goto LAB_0140a8e6;
      }
      if (local_38 == '\0') goto LAB_0140a8fa;
      goto LAB_0140a8ec;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    local_38 = '\0';
  }
LAB_0140a8fa:
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  FUN_0140a320();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_0140a9f8;
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
LAB_0140a9f8:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar3 = *unaff_RSI;
    if ((char)unaff_RSI[1] == '\0') {
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      *unaff_RDI = lVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(unaff_RSI + 1) = 0;
    }
    goto joined_r0x0140ab71;
  }
  lVar2 = DAT_027c0b10;
  if (DAT_027c0b10 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027df900;
  local_80 = lVar2;
  local_78 = '\x01';
  if (DAT_027df900 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar1;
  local_68 = '\x01';
  FUN_00d98db0(&local_70,&local_80,1);
  lVar2 = local_40;
  lVar1 = lVar3;
  if (lVar3 == local_40) {
joined_r0x0140aa2e:
    lVar2 = lVar1;
    if ((local_38 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      lVar1 = lVar2;
      lVar3 = local_40;
      goto joined_r0x0140aa2e;
    }
    FUN_00d50b20();
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027c0b18;
  if (DAT_027c0b18 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027c7e08;
  local_60 = lVar3;
  local_58 = '\x01';
  if (DAT_027c7e08 != 0) {
    FUN_00d50b00();
  }
  local_50 = lVar1;
  local_48 = '\x01';
  FUN_00d98db0(&local_50,&local_60,1);
  lVar3 = local_40;
  if (local_40 == lVar2) {
LAB_0140ab2a:
    lVar3 = lVar2;
    if (local_38 != '\0') {
LAB_0140ab30:
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
        lVar2 = lVar3;
        goto LAB_0140ab2a;
      }
      if (local_38 == '\0') goto LAB_0140ab3e;
      goto LAB_0140ab30;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    local_38 = '\0';
  }
LAB_0140ab3e:
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = lVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
joined_r0x0140ab71:
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}


