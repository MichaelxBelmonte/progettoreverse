// Function: FUN_01939340
// Address: 01939340
// Size: 2955 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0193938d) */
/* WARNING: Removing unreachable block (ram,0x01939399) */

void FUN_01939340(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x3f8) != 0) {
    FUN_01e1f120();
  }
  plVar4 = (longlong *)FUN_0019ef40();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = *(longlong **)(unaff_RDI + 0x3f8);
  if (plVar1 == plVar4) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(unaff_RDI + 0x3f8) = plVar4;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b00();
  FUN_01e1f120();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar5 = &DAT_0261d518;
  puVar5[2] = &DAT_0261d9d8;
  puVar5[7] = 0;
  puVar5[8] = 0;
  (*DAT_0261d530)();
  local_208 = '\0';
  local_210 = 0;
  local_200 = 0;
  local_1f8 = '\0';
  FUN_01a59400(&local_200,&local_210);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01e1f090();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar5 = &DAT_0261c148;
  puVar5[2] = &DAT_0261c608;
  (*DAT_0261c160)();
  local_1e8 = '\0';
  local_1f0 = 0;
  local_1e0 = 0;
  local_1d8 = '\0';
  FUN_01a59400(&local_1e0,&local_1f0);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01e1f090();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar5 = &DAT_026202e8;
  puVar5[2] = &DAT_026207c8;
  puVar5[7] = 0;
  (*DAT_02620300)();
  local_1c8 = '\0';
  local_1d0 = 0;
  local_1c0 = 0;
  local_1b8 = '\0';
  FUN_01a59400(&local_1c0,&local_1d0);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  local_1b0 = lVar3;
  local_1a8 = '\0';
  FUN_01e1f090();
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar5 = &DAT_0266aea8;
  puVar5[2] = &DAT_0266b368;
  *(undefined1 *)((longlong)puVar5 + 0x31) = 0;
  (*DAT_0266aec0)();
  local_198 = '\0';
  local_1a0 = 0;
  local_190 = 0;
  local_188 = '\0';
  FUN_01a59400(&local_190,&local_1a0);
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01e261e0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar5 = &DAT_02657908;
  puVar5[2] = &DAT_02657dd0;
  (*DAT_02657920)();
  local_178 = '\0';
  local_180 = 0;
  local_170 = 0;
  local_168 = '\0';
  FUN_01a59400(&local_170,&local_180);
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01e261e0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (unaff_ESI == 3) {
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00274ea0();
    *puVar5 = &DAT_0265f070;
    puVar5[2] = &DAT_0265f530;
    (*DAT_0265f088)();
    local_158 = '\0';
    local_160 = 0;
    local_150 = 0;
    local_148 = '\0';
    FUN_01a59400(&local_150,&local_160);
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01e1f090();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar5 = &DAT_0262be70;
  puVar5[2] = &DAT_0262c338;
  (*DAT_0262be88)();
  local_130 = DAT_026f6e68;
  local_138 = '\0';
  local_140 = 0;
  if (DAT_026f6e68 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_02702d88;
  local_128 = '\x01';
  if (DAT_02702d88 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar2;
  local_118 = '\x01';
  local_110 = 0;
  local_108 = '\0';
  FUN_00d31230(&local_110,&local_120);
  local_60 = local_d0;
  local_58 = 0;
  if (local_c8 == '\0') {
    if (local_d0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_c8 = '\0';
  }
  local_58 = '\x01';
  FUN_01a59400(&local_60,&local_140);
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  local_100 = lVar2;
  local_f8 = '\0';
  FUN_01e1f090();
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar5 = &DAT_02643ec0;
  puVar5[2] = &DAT_02644388;
  (*DAT_02643ed8)();
  local_e8 = '\0';
  local_f0 = 0;
  local_e0 = 0;
  local_d8 = '\0';
  FUN_01a59400(&local_e0,&local_f0);
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
  FUN_01e261e0();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


