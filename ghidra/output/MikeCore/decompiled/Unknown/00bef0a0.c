// Function: FUN_00bef0a0
// Address: 00bef0a0
// Size: 1092 bytes
// Class: Unknown
// String references:
//   "%@/%@"


undefined8 FUN_00bef0a0(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined7 uVar7;
  longlong *plVar6;
  longlong unaff_RDI;
  bool bVar8;
  longlong local_f8;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  undefined8 local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  FUN_00d6f370();
  plVar3 = local_80;
  if ((((local_78 == '\0') && (local_80 != (longlong *)0x0)) && (FUN_00d50b00(), local_78 != '\0'))
     && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (param_2 == '\0') goto LAB_00bef4c3;
  FUN_00b160d0();
  plVar6 = local_80;
  if (((local_78 == '\0') && (local_80 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_78 != '\0' && (local_80 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027674a0;
  local_e0 = plVar6;
  if (DAT_027674a0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar6 + 0x5e0))();
  local_f8 = local_f0;
  FUN_00083ea0(2,&local_f8);
  uVar5 = FUN_00d8cb40();
  lVar4 = local_50;
  uVar7 = (undefined7)((ulonglong)uVar5 >> 8);
  if (local_50 == 0) {
    local_38 = (undefined4)CONCAT71(uVar7,1);
    local_88 = 0;
  }
  else {
    if (local_48 == '\0') {
      uVar5 = FUN_00d50b00();
      local_38 = 0;
      local_88 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      if ((local_48 == '\0') || (local_50 == 0)) goto LAB_00bef1f4;
      FUN_00d50b20();
    }
    else {
      local_48 = '\0';
      local_88 = CONCAT71(uVar7,1);
    }
    local_38 = 0;
  }
LAB_00bef1f4:
  local_80 = (longlong *)&DAT_0253d630;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_80 = &DAT_024c5048;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  local_d8 = lVar4;
  local_d0 = '\0';
  local_c8 = 0;
  local_c0 = '\0';
  uVar5 = FUN_00d704d0(&local_c8,&local_d8);
  plVar6 = local_80;
  if (local_80 == (longlong *)0x0) {
    local_40 = 0;
    plVar6 = (longlong *)0x0;
    bVar8 = true;
joined_r0x00bef2c3:
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_78 == '\0') {
      uVar5 = FUN_00d50b00();
      local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      bVar8 = plVar6 == (longlong *)0x0;
      goto joined_r0x00bef2c3;
    }
    local_78 = '\0';
    local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    bVar8 = false;
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (bVar8) {
    plVar6 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    uVar5 = (**(code **)(*plVar6 + 0x18))();
    local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x960))();
  local_98 = local_50;
  local_90 = 0;
  plVar1 = DAT_027674a8;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
      plVar1 = DAT_027674a8;
    }
  }
  else {
    local_48 = '\0';
  }
  local_90 = '\x01';
  DAT_027674a8 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    local_90 = '\x01';
    FUN_00d50b00();
  }
  local_78 = '\0';
  local_80 = plVar1;
  FUN_00ca0840();
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_b0 = '\0';
  local_a8 = lVar4;
  local_a0 = '\0';
  local_b8 = plVar6;
  FUN_00d6f570();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((char)local_38 == '\0' && lVar4 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_40 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_00bef4c3:
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}


