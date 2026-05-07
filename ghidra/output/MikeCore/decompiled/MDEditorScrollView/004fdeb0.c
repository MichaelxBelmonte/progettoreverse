// Function: FUN_004fdeb0
// Address: 004fdeb0
// Size: 796 bytes
// Class: MDEditorScrollView


void FUN_004fdeb0(void)

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
  longlong local_30;
  char local_28;
  
  FUN_0197a220();
  FUN_00d403d0();
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02709dd0;
  if (DAT_02709dd0 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar1;
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  FUN_00d41430(&local_c0,&local_d0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026fce70;
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_b0 = lVar1;
  local_a8 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  FUN_00d41430(&local_a0,&local_b0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02709de0;
  if (DAT_02709de0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026f6cf0;
  local_90 = lVar1;
  local_88 = '\x01';
  if (DAT_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar2;
  local_78 = '\x01';
  local_70 = 0;
  local_68 = '\0';
  FUN_000bf690(&local_80,&local_90,&local_70);
  lVar1 = *(longlong *)(unaff_RDI + 0x240);
  lVar2 = lVar1;
  if (lVar1 == local_30) goto LAB_004fe149;
  lVar2 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar2 = 0;
      goto LAB_004fe0fe;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x240);
    *(longlong *)(unaff_RDI + 0x240) = local_30;
  }
  else {
    local_28 = '\0';
LAB_004fe0fe:
    *(longlong *)(unaff_RDI + 0x240) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_30;
  }
LAB_004fe149:
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x220) = 0;
  return;
}


