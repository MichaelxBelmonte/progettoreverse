// Function: FUN_00448f10
// Address: 00448f10
// Size: 1115 bytes
// Class: MDMetaWindowController


void FUN_00448f10(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RDI;
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
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026df5a0;
  if (DAT_026df5a0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026f6d00;
  local_110 = lVar1;
  local_108 = '\x01';
  if (DAT_026f6d00 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar2;
  local_f8 = '\x01';
  local_f0 = 0;
  local_e8 = '\0';
  FUN_000bf690(&local_100,&local_110,&local_f0);
  lVar1 = *(longlong *)(unaff_RDI + 0x90);
  lVar2 = lVar1;
  if (lVar1 != local_30) {
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar2 = 0;
        goto LAB_00448fd3;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x90);
      *(longlong *)(unaff_RDI + 0x90) = local_30;
    }
    else {
      local_28 = '\0';
LAB_00448fd3:
      *(longlong *)(unaff_RDI + 0x90) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026f6d60;
  if (DAT_026f6d60 != 0) {
    FUN_00d50b00();
  }
  local_e0 = lVar1;
  local_d8 = '\x01';
  local_d0 = 0;
  local_c8 = '\0';
  FUN_000bf780();
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_c0 = DAT_026df590;
  if (DAT_026df590 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026d88c8;
  local_b8 = '\x01';
  if (DAT_026d88c8 != 0) {
    FUN_00d50b00();
  }
  local_b0 = lVar1;
  local_a8 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  FUN_000bf690(&local_b0,&local_c0,&local_a0);
  lVar1 = *(longlong *)(unaff_RDI + 0x98);
  lVar2 = lVar1;
  if (lVar1 == local_30) goto LAB_00449206;
  lVar2 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar2 = 0;
      goto LAB_004491bb;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x98);
    *(longlong *)(unaff_RDI + 0x98) = local_30;
  }
  else {
    local_28 = '\0';
LAB_004491bb:
    *(longlong *)(unaff_RDI + 0x98) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_30;
  }
LAB_00449206:
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026f6d00;
  if (DAT_026f6d00 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar1;
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  FUN_000bf780();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026d88d0;
  if (DAT_026d88d0 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar1;
  local_68 = '\x01';
  local_60 = 0;
  local_58 = '\0';
  FUN_000bf780();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  return;
}


