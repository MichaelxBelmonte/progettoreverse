// Function: FUN_000aa260
// Address: 000aa260
// Size: 1762 bytes
// Class: MDNotificationObserver


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000aa260(void)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *unaff_RDI;
  double dVar8;
  undefined8 uVar9;
  undefined8 *local_c8;
  undefined1 local_c0;
  undefined8 *local_b8;
  undefined1 local_b0;
  undefined8 *local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  undefined1 local_70;
  longlong local_68;
  char local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  longlong local_40;
  char local_38;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*pcVar2)();
  local_58 = puVar6;
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*pcVar2)();
  lVar1 = unaff_RDI[0x1a];
  local_50 = puVar6;
  if (lVar1 != 0) {
    FUN_00d50b00();
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  lVar1 = unaff_RDI[0x13];
  if ((char)unaff_RDI[0x11] == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x16];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x19];
    if (lVar1 != 0) {
      FUN_00d50b00();
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x17];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    uVar9 = FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  else {
    local_48 = puVar5;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x16];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x14];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x19];
    if (lVar1 != 0) {
      FUN_00d50b00();
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = DAT_026db000;
    if (DAT_026db000 != 0) {
      FUN_00d50b00();
    }
    dVar8 = (double)FUN_00e7d6f0();
    uVar7 = (ulonglong)(dVar8 * DAT_023907c0);
    dVar8 = dVar8 * DAT_023907c0 - _DAT_023907c8;
    uVar9 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != 0)) && (uVar9 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    bVar4 = (byte)(((longlong)dVar8 & (longlong)uVar7 >> 0x3f | uVar7) / 3);
    local_68 = lVar1;
    local_60 = '\0';
    FUN_000175c0(uVar9,&local_68);
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      local_38 = '\0';
      local_40 = lVar3;
      bVar4 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    puVar5 = local_48;
    if ((lVar3 != 0 & bVar4) != 0) {
      lVar1 = unaff_RDI[0x12];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = unaff_RDI[0x17];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    uVar9 = FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  uVar9 = FUN_004b43d0(uVar9,0);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_90 = 1;
  local_98 = lVar1;
  local_c0 = 0;
  local_c8 = puVar5;
  uVar9 = FUN_000aaf60(uVar9,&local_c8);
  if (lVar1 != 0) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  uVar9 = FUN_004b43d0(uVar9,2);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_80 = 1;
  local_88 = lVar1;
  local_b8 = local_58;
  local_b0 = 0;
  uVar9 = FUN_000aaf60(uVar9,&local_b8);
  if (lVar1 != 0) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  uVar9 = FUN_004b43d0(uVar9,1);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_70 = 1;
  local_78 = lVar1;
  local_a8 = local_50;
  local_a0 = 0;
  FUN_000aaf60(uVar9,&local_a8);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x5c0))();
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}


