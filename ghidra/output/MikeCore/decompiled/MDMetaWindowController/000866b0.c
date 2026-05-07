// Function: FUN_000866b0
// Address: 000866b0
// Size: 605 bytes
// Class: MDMetaWindowController


void FUN_000866b0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RDI;
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
  lVar1 = DAT_026d85b8;
  if (DAT_026d85b8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_02725940;
  local_b0 = lVar1;
  local_a8 = '\x01';
  if (DAT_02725940 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_000bf690(&local_a0,&local_b0,&local_90);
  lVar1 = *(longlong *)(unaff_RDI + 0x90);
  lVar2 = lVar1;
  if (lVar1 == local_40) goto LAB_000867bb;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar2 = 0;
      goto LAB_00086770;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x90);
    *(longlong *)(unaff_RDI + 0x90) = local_40;
    lVar2 = local_40;
  }
  else {
    local_38 = '\0';
    lVar2 = local_40;
LAB_00086770:
    *(longlong *)(unaff_RDI + 0x90) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_40;
  }
LAB_000867bb:
  if ((local_38 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026f6d00;
  if (DAT_026f6d00 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar1;
  local_78 = '\x01';
  local_70 = 0;
  local_68 = '\0';
  FUN_000bf780();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026d85c0;
  if (DAT_026d85c0 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  FUN_000bf780();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}


