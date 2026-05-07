// Function: FUN_0013aa20
// Address: 0013aa20
// Size: 1108 bytes
// Class: MDMetaWindowController


void FUN_0013aa20(void)

{
  longlong lVar1;
  undefined8 *puVar2;
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
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_00d50100();
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026e37c0;
  if (DAT_026e37c0 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_02725940;
  local_110 = lVar1;
  local_108 = '\x01';
  if (DAT_02725940 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar4;
  local_f8 = '\x01';
  local_f0 = 0;
  local_e8 = '\0';
  uVar5 = FUN_000bf690(&local_100,&local_110,&local_f0);
  lVar1 = *(longlong *)(unaff_RDI + 0x90);
  lVar4 = lVar1;
  if (lVar1 == local_40) goto LAB_0013ab2e;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar4 = 0;
      goto LAB_0013aae3;
    }
    uVar5 = FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x90);
    *(longlong *)(unaff_RDI + 0x90) = local_40;
    lVar4 = local_40;
  }
  else {
    local_38 = '\0';
    lVar4 = local_40;
LAB_0013aae3:
    *(longlong *)(unaff_RDI + 0x90) = lVar4;
  }
  if (lVar1 != 0) {
    uVar5 = FUN_00d50b20();
    lVar4 = local_40;
  }
LAB_0013ab2e:
  if ((local_38 != '\0') && (lVar4 != 0)) {
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
  lVar1 = DAT_026f6e70;
  if (DAT_026f6e70 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_e0 = lVar1;
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
  lVar1 = DAT_026fe410;
  if (DAT_026fe410 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_c0 = lVar1;
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  uVar5 = FUN_000bf780(uVar5,&local_b0);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = DAT_026f6d60;
  if (DAT_026f6d60 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_a0 = lVar1;
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  uVar5 = FUN_000bf780(uVar5,&local_90);
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = DAT_026d7d88;
  if (DAT_026d7d88 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_80 = lVar1;
  local_78 = '\x01';
  local_70 = 0;
  local_68 = '\0';
  uVar5 = FUN_000bf780(uVar5,&local_70);
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = DAT_027257b0;
  if (DAT_027257b0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  FUN_000bf780(uVar5,&local_50);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025ce610;
  puVar3[2] = 0;
  puVar3[3] = 0;
  (*DAT_025ce628)();
  puVar2 = *(undefined8 **)(unaff_RDI + 0x98);
  if (puVar2 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x98) = puVar3;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  *(undefined8 *)(unaff_RDI + 0xf8) = 0x3ff0000000000000;
  return;
}


