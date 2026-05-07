// Function: FUN_00544e30
// Address: 00544e30
// Size: 1368 bytes
// Class: MDPluginTransferTempoDialog


void FUN_00544e30(double param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  longlong unaff_RDI;
  undefined4 uVar8;
  undefined8 unaff_R13;
  byte bVar9;
  bool bVar10;
  longlong local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  undefined4 local_64;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(**(longlong **)(unaff_RDI + 200) + 0x378))((float)param_1);
  lVar2 = DAT_0270cbb0;
  if (DAT_0270cbb0 != 0) {
    FUN_00d50b00();
  }
  local_138 = lVar2;
  FUN_00083ea0(2,&local_138);
  FUN_000b4da0();
  lVar4 = local_80;
  if (local_80 == 0) {
    uVar8 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  }
  else {
    if (local_78 == '\0') {
      FUN_00d50b00();
      uVar8 = 0;
      if ((local_78 == '\0') || (local_80 == 0)) goto LAB_00544ef0;
      FUN_00d50b20();
    }
    else {
      local_78 = '\0';
    }
    uVar8 = 0;
  }
LAB_00544ef0:
  local_60 = (longlong *)&DAT_0253d630;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_60 = &DAT_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_0270cbb8;
  local_70 = lVar4;
  local_64 = uVar8;
  if (DAT_0270cbb8 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_0270cbc0;
  local_120 = lVar2;
  local_118 = '\x01';
  if (DAT_0270cbc0 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar3;
  local_108 = '\x01';
  local_100 = lVar4;
  local_f8 = '\0';
  FUN_00d31230(&local_100,&local_110);
  plVar7 = local_60;
  if (local_60 == (longlong *)0x0) {
    bVar9 = 1;
    bVar1 = false;
  }
  else {
    if (local_58 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      bVar9 = 0;
      if ((local_58 == '\0') || (bVar9 = 0, local_60 == (longlong *)0x0)) goto LAB_00545012;
      FUN_00d50b20();
    }
    else {
      local_58 = '\0';
    }
    bVar1 = true;
    bVar9 = 0;
  }
LAB_00545012:
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x960))();
  local_f0 = plVar7;
  local_e8 = '\0';
  cVar6 = (**(code **)(*local_60 + 0x50))();
  if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
    local_e0 = plVar7;
    local_d8 = '\0';
    (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x958))();
    if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_0270cbb8;
  if (DAT_0270cbb8 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_0270cbc8;
  local_d0 = lVar2;
  local_c8 = '\x01';
  if (DAT_0270cbc8 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar4;
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_00d31230(&local_b0,&local_c0);
  plVar5 = local_60;
  if (plVar7 == local_60) {
    if (!(bool)(bVar9 & plVar7 != (longlong *)0x0)) goto joined_r0x00545217;
    if (local_58 == '\0') {
      FUN_00d50b00();
      goto LAB_00545202;
    }
  }
  else {
    if (local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar10 = plVar7 != (longlong *)0x0;
      plVar7 = plVar5;
      if ((bool)(bVar1 & bVar10)) {
        FUN_00d50b20();
      }
LAB_00545202:
      bVar1 = true;
joined_r0x00545217:
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto joined_r0x0054536a;
    }
    bVar10 = plVar7 != (longlong *)0x0;
    plVar7 = plVar5;
    if ((bool)(bVar1 & bVar10)) {
      FUN_00d50b20();
    }
  }
  local_58 = '\0';
  bVar1 = true;
joined_r0x0054536a:
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x960))();
  local_98 = '\0';
  local_a0 = plVar7;
  cVar6 = (**(code **)(*local_60 + 0x50))();
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
    local_88 = '\0';
    local_90 = plVar7;
    (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x958))();
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((char)local_64 == '\0' && local_70 != 0) {
    FUN_00d50b20();
  }
  if ((bVar1) && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


