// Function: FUN_00805bd0
// Address: 00805bd0
// Size: 657 bytes
// Class: GNString


void FUN_00805bd0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *unaff_RSI;
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
  longlong *local_30;
  char local_28;
  
  *(undefined8 *)(unaff_RDI + 0xc0) = *unaff_RSI;
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_30 + 0x450))();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    return;
  }
  FUN_00d50b00();
  local_b0 = DAT_0272fbc8;
  if (DAT_0272fbc8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026de540;
  local_a8 = '\x01';
  if (DAT_026de540 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_000bf690(&local_a0,&local_b0,&local_90);
  plVar1 = *(longlong **)(unaff_RDI + 0xd0);
  plVar4 = plVar1;
  if (plVar1 == local_30) goto LAB_00805d0f;
  plVar4 = local_30;
  if (local_28 == '\0') {
    if (local_30 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
      goto LAB_00805cc4;
    }
    FUN_00d50b00();
    plVar1 = *(longlong **)(unaff_RDI + 0xd0);
    *(longlong **)(unaff_RDI + 0xd0) = local_30;
  }
  else {
    local_28 = '\0';
LAB_00805cc4:
    *(longlong **)(unaff_RDI + 0xd0) = plVar4;
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar4 = local_30;
  }
LAB_00805d0f:
  if ((local_28 != '\0') && (plVar4 != (longlong *)0x0)) {
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
  lVar2 = DAT_026de548;
  if (DAT_026de548 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar2;
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
  lVar2 = DAT_026f6da0;
  if (DAT_026f6da0 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar2;
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


