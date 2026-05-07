// Function: FUN_006eced0
// Address: 006eced0
// Size: 1729 bytes
// Class: MDMetaWindowController


void FUN_006eced0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong unaff_RDI;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  undefined8 *local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  undefined8 *local_b8;
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
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  FUN_01e534b0();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x1a) = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  *puVar4 = &DAT_02576dc8;
  (*DAT_02576de0)();
  FUN_00d48b00(DAT_02390d34);
  lVar2 = DAT_027277f0;
  if (DAT_027277f0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027277f8;
  if (DAT_027277f8 != 0) {
    FUN_00d50b00();
  }
  local_168 = lVar3;
  local_160 = '\x01';
  local_158 = 0;
  local_150 = '\0';
  FUN_00d31230(&local_158,&local_168);
  local_78 = local_38;
  local_70 = 0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_70 = '\x01';
  FUN_00d4c980();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  local_140 = '\0';
  local_148 = puVar4;
  (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x9b8))();
  if ((local_140 != '\0') && (local_148 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0xab8))(0);
  (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0xac8))(DAT_02390d34);
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02576110;
  *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x1a) = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  (*DAT_02576128)();
  FUN_00d48ac0();
  local_138 = DAT_026fce10;
  if (DAT_026fce10 != 0) {
    FUN_00d50b00();
  }
  local_130 = '\x01';
  FUN_00d48cb0();
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_0270b790;
  if (DAT_0270b790 != 0) {
    FUN_00d50b00();
  }
  local_128 = lVar2;
  local_120 = '\x01';
  FUN_00d48c60();
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02727800;
  if (DAT_02727800 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_02727808;
  local_118 = lVar2;
  local_110 = '\x01';
  if (DAT_02727808 != 0) {
    FUN_00d50b00();
  }
  local_108 = lVar3;
  local_100 = '\x01';
  local_f8 = 0;
  local_f0 = '\0';
  FUN_00d31230(&local_f8,&local_108);
  local_68 = local_38;
  local_60 = 0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_60 = '\x01';
  FUN_00d48b20();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027277f0;
  if (DAT_027277f0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_02727810;
  local_e8 = lVar2;
  local_e0 = '\x01';
  if (DAT_02727810 != 0) {
    FUN_00d50b00();
  }
  local_d8 = lVar3;
  local_d0 = '\x01';
  local_c8 = 0;
  local_c0 = '\0';
  FUN_00d31230(&local_c8,&local_d8);
  local_58 = local_38;
  local_50 = 0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_50 = '\x01';
  FUN_00d4c980();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
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
  local_b0 = '\0';
  local_b8 = puVar4;
  (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x9b8))();
  if ((local_b0 != '\0') && (local_b8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027277f0;
  plVar1 = *(longlong **)(unaff_RDI + 0x80);
  if (DAT_027277f0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_02727818;
  local_a8 = lVar2;
  local_a0 = '\x01';
  if (DAT_02727818 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar3;
  local_90 = '\x01';
  local_88 = 0;
  local_80 = '\0';
  FUN_00d31230(&local_88,&local_98);
  local_48 = local_38;
  local_40 = 0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_40 = '\x01';
  (**(code **)(*plVar1 + 0x6a8))();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}


