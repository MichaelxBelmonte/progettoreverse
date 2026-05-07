// Function: FUN_0034ed60
// Address: 0034ed60
// Size: 3775 bytes
// Class: MUDetectionSeparationTool


/* WARNING: Removing unreachable block (ram,0x0034eea7) */
/* WARNING: Removing unreachable block (ram,0x0034eeb3) */

void FUN_0034ed60(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  longlong local_258;
  char local_250;
  longlong local_248;
  char local_240;
  undefined8 *local_238;
  char local_230;
  longlong local_228;
  char local_220;
  longlong local_218;
  char local_210;
  longlong local_208;
  char local_200;
  undefined8 *local_1f8;
  char local_1f0;
  longlong local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  undefined8 *local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  undefined8 *local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  undefined8 *local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  undefined8 *local_f8;
  char local_f0;
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
  undefined8 *local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong local_40;
  char local_38 [8];
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02576110;
  *(undefined8 *)((longlong)puVar3 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x1a) = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  (*DAT_02576128)();
  local_58 = puVar3;
  FUN_00d48ac0();
  lVar2 = DAT_02703118;
  if (DAT_02703118 != 0) {
    FUN_00d50b00();
  }
  FUN_018b4880((int)DAT_0238fee8,0,DAT_023b2c70);
  lVar1 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_38[0] = '\0';
  local_40 = lVar1;
  FUN_00d21140();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703120;
  if (DAT_02703120 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02703128;
  if (DAT_02703128 != 0) {
    FUN_00d50b00();
  }
  local_258 = lVar1;
  local_250 = '\x01';
  FUN_00d23340();
  pcVar4 = &local_50;
  if (local_38[0] != '\0') {
    pcVar4 = local_38;
  }
  local_50 = local_38[0];
  *pcVar4 = '\0';
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_c0 = 0;
  if ((local_50 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  local_c8 = local_40;
  local_c0 = '\x01';
  FUN_018ac3f0(&local_c8,&local_258);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_250 != '\0') && (local_258 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703130;
  if (DAT_02703130 != 0) {
    FUN_00d50b00();
  }
  local_248 = lVar2;
  local_240 = '\x01';
  local_238 = local_58;
  local_230 = '\0';
  FUN_018b4880((int)DAT_0238fee8,0,DAT_023b2c70);
  lVar2 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_38[0] = '\0';
  local_40 = lVar2;
  FUN_00d21140();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_230 != '\0') && (local_238 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_240 != '\0') && (local_248 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703120;
  if (DAT_02703120 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02703138;
  local_228 = lVar2;
  local_220 = '\x01';
  if (DAT_02703138 != 0) {
    FUN_00d50b00();
  }
  local_218 = lVar1;
  local_210 = '\x01';
  FUN_00d23340();
  lVar2 = local_40;
  pcVar4 = &local_50;
  if (local_38[0] != '\0') {
    pcVar4 = local_38;
  }
  local_50 = local_38[0];
  *pcVar4 = '\0';
  if ((local_38[0] != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  local_b0 = 0;
  if ((local_50 == '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  local_b8 = lVar2;
  local_b0 = '\x01';
  FUN_018ac3f0(&local_b8,&local_218);
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_210 != '\0') && (local_218 != 0)) {
    FUN_00d50b20();
  }
  if ((local_220 != '\0') && (local_228 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703140;
  if (DAT_02703140 != 0) {
    FUN_00d50b00();
  }
  local_208 = lVar2;
  local_200 = '\x01';
  local_1f8 = local_58;
  local_1f0 = '\0';
  FUN_018b4880((int)DAT_0238fee8,0,DAT_023b2c70);
  lVar2 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_38[0] = '\0';
  local_40 = lVar2;
  FUN_00d21140();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f0 != '\0') && (local_1f8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_200 != '\0') && (local_208 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703120;
  if (DAT_02703120 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02703148;
  local_1e8 = lVar2;
  local_1e0 = '\x01';
  if (DAT_02703148 != 0) {
    FUN_00d50b00();
  }
  local_1d8 = lVar1;
  local_1d0 = '\x01';
  FUN_00d23340();
  lVar2 = local_40;
  pcVar4 = &local_50;
  if (local_38[0] != '\0') {
    pcVar4 = local_38;
  }
  local_50 = local_38[0];
  *pcVar4 = '\0';
  if ((local_38[0] != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = 0;
  if ((local_50 == '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  local_a8 = lVar2;
  local_a0 = '\x01';
  FUN_018ac3f0(&local_a8,&local_1d8);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d0 != '\0') && (local_1d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1e0 != '\0') && (local_1e8 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703150;
  if (DAT_02703150 != 0) {
    FUN_00d50b00();
  }
  local_1c8 = lVar2;
  local_1c0 = '\x01';
  local_1b8 = local_58;
  local_1b0 = '\0';
  FUN_018b4880((int)DAT_0238fee8,0,DAT_023b2c70);
  lVar2 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_38[0] = '\0';
  local_40 = lVar2;
  FUN_00d21140();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b0 != '\0') && (local_1b8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703120;
  if (DAT_02703120 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02703158;
  local_1a8 = lVar2;
  local_1a0 = '\x01';
  if (DAT_02703158 != 0) {
    FUN_00d50b00();
  }
  local_198 = lVar1;
  local_190 = '\x01';
  FUN_00d23340();
  lVar2 = local_40;
  pcVar4 = &local_50;
  if (local_38[0] != '\0') {
    pcVar4 = local_38;
  }
  local_50 = local_38[0];
  *pcVar4 = '\0';
  if ((local_38[0] != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  local_90 = 0;
  if ((local_50 == '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  local_98 = lVar2;
  local_90 = '\x01';
  FUN_018ac3f0(&local_98,&local_198);
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_190 != '\0') && (local_198 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703160;
  if (DAT_02703160 != 0) {
    FUN_00d50b00();
  }
  local_188 = lVar2;
  local_180 = '\x01';
  local_178 = local_58;
  local_170 = '\0';
  FUN_018b4880((int)DAT_0238fee8,0,DAT_023b2c70);
  lVar2 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_38[0] = '\0';
  local_40 = lVar2;
  FUN_00d21140();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_170 != '\0') && (local_178 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703120;
  if (DAT_02703120 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02703168;
  local_168 = lVar2;
  local_160 = '\x01';
  if (DAT_02703168 != 0) {
    FUN_00d50b00();
  }
  local_158 = lVar1;
  local_150 = '\x01';
  FUN_00d23340();
  lVar2 = local_40;
  pcVar4 = &local_50;
  if (local_38[0] != '\0') {
    pcVar4 = local_38;
  }
  local_50 = local_38[0];
  *pcVar4 = '\0';
  if ((local_38[0] != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  local_80 = 0;
  if ((local_50 == '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  local_88 = lVar2;
  local_80 = '\x01';
  FUN_018ac3f0(&local_88,&local_158);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703170;
  if (DAT_02703170 != 0) {
    FUN_00d50b00();
  }
  local_148 = lVar2;
  local_140 = '\x01';
  local_138 = local_58;
  local_130 = '\0';
  FUN_018b4880((int)DAT_0238fee8,0,DAT_023b2c70);
  lVar2 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_38[0] = '\0';
  local_40 = lVar2;
  FUN_00d21140();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703120;
  if (DAT_02703120 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02703178;
  local_128 = lVar2;
  local_120 = '\x01';
  if (DAT_02703178 != 0) {
    FUN_00d50b00();
  }
  local_118 = lVar1;
  local_110 = '\x01';
  FUN_00d23340();
  lVar2 = local_40;
  pcVar4 = &local_50;
  if (local_38[0] != '\0') {
    pcVar4 = local_38;
  }
  local_50 = local_38[0];
  *pcVar4 = '\0';
  if ((local_38[0] != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  local_70 = 0;
  if ((local_50 == '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  FUN_018ac3f0(&local_78,&local_118);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703180;
  if (DAT_02703180 != 0) {
    FUN_00d50b00();
  }
  local_108 = lVar2;
  local_100 = '\x01';
  local_f8 = local_58;
  local_f0 = '\0';
  FUN_018b4740(0,&local_f8);
  lVar2 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_38[0] = '\0';
  local_40 = lVar2;
  FUN_00d21140();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703188;
  if (DAT_02703188 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02703190;
  local_e8 = lVar2;
  local_e0 = '\x01';
  if (DAT_02703190 != 0) {
    FUN_00d50b00();
  }
  local_d8 = lVar1;
  local_d0 = '\x01';
  FUN_00d23340();
  lVar2 = local_40;
  pcVar4 = local_38;
  if (local_38[0] == '\0') {
    pcVar4 = &local_50;
  }
  local_50 = local_38[0];
  *pcVar4 = '\0';
  if ((local_38[0] != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  local_60 = 0;
  if ((local_50 == '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  local_68 = lVar2;
  local_60 = '\x01';
  FUN_018ac3f0(&local_68,&local_d8);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


