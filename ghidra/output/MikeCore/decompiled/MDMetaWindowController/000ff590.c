// Function: FUN_000ff590
// Address: 000ff590
// Size: 982 bytes
// Class: MDMetaWindowController


void FUN_000ff590(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RDI;
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
  lVar1 = DAT_026defb8;
  if (DAT_026defb8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026e0f00;
  local_f0 = lVar1;
  local_e8 = '\x01';
  if (DAT_026e0f00 != 0) {
    FUN_00d50b00();
  }
  local_e0 = lVar2;
  local_d8 = '\x01';
  local_d0 = 0;
  local_c8 = '\0';
  FUN_000bf690(&local_e0,&local_f0,&local_d0);
  lVar1 = *(longlong *)(unaff_RDI + 0x90);
  lVar2 = lVar1;
  if (lVar1 != local_30) {
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar2 = 0;
        goto LAB_000ff653;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x90);
      *(longlong *)(unaff_RDI + 0x90) = local_30;
    }
    else {
      local_28 = '\0';
LAB_000ff653:
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
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026e0f08;
  if (DAT_026e0f08 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar1;
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_000bf780();
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026fe470;
  if (DAT_026fe470 != 0) {
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
  local_80 = DAT_026f6db0;
  if (DAT_026f6db0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026fe470;
  local_78 = '\x01';
  if (DAT_026fe470 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar1;
  local_68 = '\x01';
  local_60 = 0;
  local_58 = '\0';
  FUN_000bf690(&local_70,&local_80,&local_60);
  lVar1 = *(longlong *)(unaff_RDI + 0x98);
  lVar2 = lVar1;
  if (lVar1 == local_30) goto LAB_000ff8ea;
  lVar2 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar2 = 0;
      goto LAB_000ff89f;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x98);
    *(longlong *)(unaff_RDI + 0x98) = local_30;
  }
  else {
    local_28 = '\0';
LAB_000ff89f:
    *(longlong *)(unaff_RDI + 0x98) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_30;
  }
LAB_000ff8ea:
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


