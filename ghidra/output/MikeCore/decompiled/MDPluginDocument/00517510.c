// Function: FUN_00517510
// Address: 00517510
// Size: 1364 bytes
// Class: MDPluginDocument


void FUN_00517510(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RDI;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  longlong local_28;
  char local_20;
  
  if (*(longlong *)(unaff_RDI + 0x308) != 0) {
    return;
  }
  FUN_00d50b00();
  local_108 = DAT_0270b7a8;
  if (DAT_0270b7a8 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_0270b7b0;
  local_100 = '\x01';
  if (DAT_0270b7b0 != 0) {
    FUN_00d50b00();
  }
  local_f8 = lVar1;
  local_f0 = '\x01';
  FUN_00d50b00();
  FUN_000bf690(&local_f8,&local_108,&stack0xffffffffffffff68);
  lVar1 = *(longlong *)(unaff_RDI + 0x378);
  lVar2 = lVar1;
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        lVar2 = 0;
        goto LAB_005175f1;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x378);
      *(longlong *)(unaff_RDI + 0x378) = local_28;
      lVar2 = local_28;
    }
    else {
      local_20 = '\0';
      lVar2 = local_28;
LAB_005175f1:
      *(longlong *)(unaff_RDI + 0x378) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_28;
    }
  }
  if ((local_20 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_e8 = DAT_0270b7b8;
  if (DAT_0270b7b8 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_0270b7c0;
  local_e0 = '\x01';
  if (DAT_0270b7c0 != 0) {
    FUN_00d50b00();
  }
  local_d8 = lVar1;
  local_d0 = '\x01';
  FUN_00b34cb0();
  (**(code **)(*local_58 + 0x90))();
  local_68 = local_38;
  local_60 = 0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_60 = '\x01';
  FUN_000bf690(&local_d8,&local_e8,&local_68);
  lVar1 = *(longlong *)(unaff_RDI + 0x388);
  lVar2 = lVar1;
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        lVar2 = 0;
        goto LAB_00517793;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x388);
      *(longlong *)(unaff_RDI + 0x388) = local_28;
      lVar2 = local_28;
    }
    else {
      local_20 = '\0';
      lVar2 = local_28;
LAB_00517793:
      *(longlong *)(unaff_RDI + 0x388) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_28;
    }
  }
  if ((local_20 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    (**(code **)(*local_58 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_c8 = DAT_0270b7c8;
  if (DAT_0270b7c8 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_0270b7d0;
  local_c0 = '\x01';
  if (DAT_0270b7d0 != 0) {
    FUN_00d50b00();
  }
  local_b8 = lVar1;
  local_b0 = '\x01';
  FUN_00b34cb0();
  (**(code **)(*local_58 + 0x90))();
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
  FUN_000bf690(&local_b8,&local_c8,&local_48);
  lVar1 = *(longlong *)(unaff_RDI + 0x390);
  lVar2 = lVar1;
  if (lVar1 == local_28) goto LAB_005179a5;
  if (local_20 == '\0') {
    if (local_28 == 0) {
      lVar2 = 0;
      goto LAB_0051795a;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x390);
    *(longlong *)(unaff_RDI + 0x390) = local_28;
    lVar2 = local_28;
  }
  else {
    local_20 = '\0';
    lVar2 = local_28;
LAB_0051795a:
    *(longlong *)(unaff_RDI + 0x390) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_28;
  }
LAB_005179a5:
  if ((local_20 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    (**(code **)(*local_58 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  return;
}


