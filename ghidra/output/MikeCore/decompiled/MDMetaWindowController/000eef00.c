// Function: FUN_000eef00
// Address: 000eef00
// Size: 849 bytes
// Class: MDMetaWindowController


void FUN_000eef00(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RDI;
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
  lVar1 = DAT_026d85b8;
  if (DAT_026d85b8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_02725940;
  local_d0 = lVar1;
  local_c8 = '\x01';
  if (DAT_02725940 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar2;
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_000bf690(&local_c0,&local_d0,&local_b0);
  lVar1 = *(longlong *)(unaff_RDI + 0x88);
  lVar2 = lVar1;
  if (lVar1 != local_30) {
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar2 = 0;
        goto LAB_000eefc3;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x88);
      *(longlong *)(unaff_RDI + 0x88) = local_30;
    }
    else {
      local_28 = '\0';
LAB_000eefc3:
      *(longlong *)(unaff_RDI + 0x88) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026f6d00;
  if (DAT_026f6d00 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar1;
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_000bf780();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_80 = DAT_026d88e0;
  if (DAT_026d88e0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026f6cf0;
  local_78 = '\x01';
  if (DAT_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar1;
  local_68 = '\x01';
  local_60 = 0;
  local_58 = '\0';
  FUN_000bf690(&local_70,&local_80,&local_60);
  lVar1 = *(longlong *)(unaff_RDI + 0x90);
  lVar2 = lVar1;
  if (lVar1 == local_30) goto LAB_000ef1d5;
  lVar2 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar2 = 0;
      goto LAB_000ef18a;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x90);
    *(longlong *)(unaff_RDI + 0x90) = local_30;
  }
  else {
    local_28 = '\0';
LAB_000ef18a:
    *(longlong *)(unaff_RDI + 0x90) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_30;
  }
LAB_000ef1d5:
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  return;
}


