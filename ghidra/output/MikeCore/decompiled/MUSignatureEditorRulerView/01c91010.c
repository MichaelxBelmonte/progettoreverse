// Function: FUN_01c91010
// Address: 01c91010
// Size: 2024 bytes
// Class: MUSignatureEditorRulerView
// String references:
//   "%s %s %s\n"
//   "%@ %@ %@ (%I cores)\n\n"
//   "%I Note(s) of %I File(s)\n\n"
//   "Archiving"
//   "Unarchiving"
//   "Plain Rendering"
//   "Plain Rendering in Realtime"
//   "Editing Pitch"
//   "Edited Rendering"
//   "Edited Rendering in Realtime"
//   "Analyzing Audio"


undefined8 * FUN_01c91010(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *unaff_RDI;
  bool bVar12;
  undefined1 local_140 [8];
  undefined1 local_138 [8];
  longlong *local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  undefined8 *local_a8;
  char local_a0;
  undefined8 *local_98;
  uint local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined4 local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  plVar4 = DAT_028b7260;
  plVar11 = (longlong *)*param_2;
  if (DAT_028b7260 != plVar11) {
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    DAT_028b7260 = plVar11;
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    plVar11 = (longlong *)*param_2;
  }
  if ((plVar11 != (longlong *)0x0) && (DAT_028b7268 == '\0')) {
    DAT_028b7268 = '\x01';
    FUN_00e8cb90();
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_025795a8;
  (*DAT_025795c0)();
  if (DAT_028b7230 == puVar8) {
    bVar2 = false;
    bVar1 = false;
  }
  else {
    bVar2 = true;
    bVar1 = true;
    bVar12 = DAT_028b7230 != (undefined8 *)0x0;
    DAT_028b7230 = puVar8;
    if (bVar12) {
      FUN_00d50b20();
    }
  }
  if (DAT_028b7238 == '\0') {
    DAT_028b7238 = '\x01';
    FUN_00e8cb90();
    bVar1 = bVar2;
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  lVar9 = FUN_00003040();
  uVar10 = FUN_00003050();
  local_78 = FUN_00003060();
  local_90 = 3;
  local_98 = (undefined8 *)&DAT_02670858;
  local_88 = lVar9;
  local_80 = uVar10;
  FUN_00d94d80(&DAT_02670858,&local_98);
  FUN_00dec0e0();
  (**(code **)(*local_128 + 0x398))();
  FUN_00dec0e0();
  (**(code **)(*local_108 + 0x3a0))();
  FUN_00dec0e0();
  (**(code **)(*local_e8 + 0x3a8))();
  uVar6 = FUN_00da6b30();
  FUN_002bd7b0(local_138,local_140,4);
  local_98 = (undefined8 *)&DAT_02670890;
  local_58 = uVar6;
  FUN_00d94d80();
  local_98 = (undefined8 *)&DAT_025df260;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_98 = (undefined8 *)&DAT_0253d630;
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_98 = &DAT_024c5048;
  if (((char)local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*param_2 + 0x9b0))();
  uVar6 = *(undefined4 *)((longlong)local_98 + 0xc);
  if ((char)local_90 != '\0') {
    FUN_00d50b20();
  }
  (**(code **)(*DAT_028b7260 + 0x9b0))();
  local_50 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  local_d0 = '\0';
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = '\0';
  FUN_01293ed0(&local_c8,&local_d8);
  puVar8 = local_98;
  if ((char)local_90 == '\0') {
    if (local_98 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if (((char)local_90 != '\0') && (local_98 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_90 = local_90 & 0xffffff00;
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (puVar8 == (undefined8 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)((longlong)puVar8 + 0xc);
  }
  local_90 = 2;
  local_98 = (undefined8 *)&DAT_024c3df0;
  local_88 = CONCAT44(local_88._4_4_,uVar7);
  local_8c = uVar6;
  FUN_00d94d80(&DAT_024c3df0,&local_98);
  FUN_00da6ff0();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_00da7150();
  FUN_01ca6970();
  puVar5 = local_98;
  if (((char)local_90 == '\0') && (local_98 != (undefined8 *)0x0)) {
    FUN_00d50b00();
    if (((char)local_90 != '\0') && (local_98 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01ca5d90();
  local_a8 = DAT_028b7230;
  local_a0 = 0;
  if (DAT_028b7230 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  lVar9 = DAT_026fceb8;
  local_a0 = '\x01';
  if (DAT_026fceb8 != 0) {
    FUN_00d50b00();
  }
  local_b8 = lVar9;
  local_b0 = '\x01';
  FUN_01ca93d0();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d8c7d0();
  if (DAT_028b7250 != 0) {
    FUN_00d50130();
  }
  if (DAT_028b7250 != 0) {
    DAT_028b7250 = 0;
    FUN_00d50b20();
  }
  if (DAT_028b7260 != (longlong *)0x0) {
    DAT_028b7260 = (longlong *)0x0;
    FUN_00d50b20();
  }
  if (DAT_028b7240 != 0) {
    DAT_028b7240 = 0;
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  puVar3 = DAT_028b7230;
  if (DAT_028b7230 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar8 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


