// Function: FUN_003a6980
// Address: 003a6980
// Size: 1506 bytes
// Class: MDToolbarTempoPluginCtrl


void FUN_003a6980(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong unaff_RDI;
  undefined4 uVar5;
  longlong local_110;
  char local_108;
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
  longlong local_30;
  char local_28;
  
  FUN_00d50100();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02576110;
  *(undefined8 *)((longlong)puVar3 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x1a) = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  (*DAT_02576128)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0xc0);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xc0) = puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d48ac0();
  FUN_00d50b00();
  local_110 = DAT_026df590;
  if (DAT_026df590 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026d88c8;
  local_108 = '\x01';
  if (DAT_026d88c8 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar2;
  local_f8 = '\x01';
  local_f0 = 0;
  local_e8 = '\0';
  uVar5 = FUN_000bf690(&local_100,&local_110,&local_f0);
  lVar2 = *(longlong *)(unaff_RDI + 0x80);
  lVar4 = lVar2;
  if (lVar2 != local_30) {
    lVar4 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar4 = 0;
        goto LAB_003a6abb;
      }
      uVar5 = FUN_00d50b00();
      lVar2 = *(longlong *)(unaff_RDI + 0x80);
      *(longlong *)(unaff_RDI + 0x80) = local_30;
    }
    else {
      local_28 = '\0';
LAB_003a6abb:
      *(longlong *)(unaff_RDI + 0x80) = lVar4;
    }
    if (lVar2 != 0) {
      uVar5 = FUN_00d50b20();
      lVar4 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar4 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    uVar5 = FUN_00d50b20();
  }
  lVar2 = DAT_026f6d00;
  if (DAT_026f6d00 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_e0 = lVar2;
  local_d8 = '\x01';
  local_d0 = 0;
  local_c8 = '\0';
  uVar5 = FUN_000bf780(uVar5,&local_d0);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar2 = DAT_026d88d0;
  if (DAT_026d88d0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_c0 = lVar2;
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_000bf780(uVar5,&local_b0);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_a0 = DAT_026d88e0;
  if (DAT_026d88e0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026f6cf0;
  local_98 = '\x01';
  if (DAT_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar2;
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  FUN_000bf690(&local_90,&local_a0,&local_80);
  lVar2 = *(longlong *)(unaff_RDI + 0x88);
  lVar4 = lVar2;
  if (lVar2 != local_30) {
    lVar4 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar4 = 0;
        goto LAB_003a6d1c;
      }
      FUN_00d50b00();
      lVar2 = *(longlong *)(unaff_RDI + 0x88);
      *(longlong *)(unaff_RDI + 0x88) = local_30;
    }
    else {
      local_28 = '\0';
LAB_003a6d1c:
      *(longlong *)(unaff_RDI + 0x88) = lVar4;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar4 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 0xd0) = 0;
  lVar2 = DAT_027050d0;
  if (DAT_027050d0 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar2;
  local_68 = '\x01';
  FUN_01d51a40();
  lVar2 = *(longlong *)(unaff_RDI + 0xe0);
  lVar4 = lVar2;
  if (lVar2 != local_30) {
    lVar4 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar4 = 0;
        goto LAB_003a6e1b;
      }
      FUN_00d50b00();
      lVar2 = *(longlong *)(unaff_RDI + 0xe0);
      *(longlong *)(unaff_RDI + 0xe0) = local_30;
    }
    else {
      local_28 = '\0';
LAB_003a6e1b:
      *(longlong *)(unaff_RDI + 0xe0) = lVar4;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar4 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027050d8;
  if (DAT_027050d8 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar2;
  local_58 = '\x01';
  FUN_01d51a40();
  lVar2 = *(longlong *)(unaff_RDI + 0xe8);
  lVar4 = lVar2;
  if (lVar2 == local_30) goto LAB_003a6f14;
  lVar4 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar4 = 0;
      goto LAB_003a6ecd;
    }
    FUN_00d50b00();
    lVar2 = *(longlong *)(unaff_RDI + 0xe8);
    *(longlong *)(unaff_RDI + 0xe8) = local_30;
  }
  else {
    local_28 = '\0';
LAB_003a6ecd:
    *(longlong *)(unaff_RDI + 0xe8) = lVar4;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar4 = local_30;
  }
LAB_003a6f14:
  if ((local_28 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}


