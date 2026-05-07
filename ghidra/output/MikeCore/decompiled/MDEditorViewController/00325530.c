// Function: FUN_00325530
// Address: 00325530
// Size: 1080 bytes
// Class: MDEditorViewController


void FUN_00325530(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RDI;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_28;
  char local_20;
  
  FUN_01a34c10();
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026fe3f8;
  if (DAT_026fe3f8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026f6e70;
  local_e8 = lVar1;
  local_e0 = '\x01';
  if (DAT_026f6e70 != 0) {
    FUN_00d50b00();
  }
  local_d8 = lVar2;
  local_d0 = '\x01';
  local_c8 = 0;
  local_c0 = '\0';
  FUN_000bf690(&local_d8,&local_e8,&local_c8);
  lVar1 = *(longlong *)(unaff_RDI + 0x1b8);
  lVar2 = lVar1;
  if (lVar1 != local_28) {
    lVar2 = local_28;
    if (local_20 == '\0') {
      if (local_28 == 0) {
        lVar2 = 0;
        goto LAB_003255f1;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x1b8);
      *(longlong *)(unaff_RDI + 0x1b8) = local_28;
    }
    else {
      local_20 = '\0';
LAB_003255f1:
      *(longlong *)(unaff_RDI + 0x1b8) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_28;
    }
  }
  if ((local_20 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
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
  local_b8 = DAT_026fe408;
  if (DAT_026fe408 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026fe410;
  local_b0 = '\x01';
  if (DAT_026fe410 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar1;
  local_a0 = '\x01';
  local_98 = 0;
  local_90 = '\0';
  FUN_000bf690(&local_a8,&local_b8,&local_98);
  lVar1 = *(longlong *)(unaff_RDI + 0x1c0);
  lVar2 = lVar1;
  if (lVar1 != local_28) {
    lVar2 = local_28;
    if (local_20 == '\0') {
      if (local_28 == 0) {
        lVar2 = 0;
        goto LAB_00325754;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x1c0);
      *(longlong *)(unaff_RDI + 0x1c0) = local_28;
    }
    else {
      local_20 = '\0';
LAB_00325754:
      *(longlong *)(unaff_RDI + 0x1c0) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_28;
    }
  }
  if ((local_20 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_88 = DAT_027024e8;
  if (DAT_027024e8 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026defc0;
  local_80 = '\x01';
  if (DAT_026defc0 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar1;
  local_70 = '\x01';
  local_68 = 0;
  local_60 = '\0';
  FUN_000bf690(&local_78,&local_88,&local_68);
  lVar1 = *(longlong *)(unaff_RDI + 0x1c8);
  lVar2 = lVar1;
  if (lVar1 == local_28) goto LAB_003258e7;
  lVar2 = local_28;
  if (local_20 == '\0') {
    if (local_28 == 0) {
      lVar2 = 0;
      goto LAB_0032589c;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x1c8);
    *(longlong *)(unaff_RDI + 0x1c8) = local_28;
  }
  else {
    local_20 = '\0';
LAB_0032589c:
    *(longlong *)(unaff_RDI + 0x1c8) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_28;
  }
LAB_003258e7:
  if ((local_20 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  return;
}


