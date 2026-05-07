// Function: FUN_0006f9e0
// Address: 0006f9e0
// Size: 1392 bytes
// Class: MDMetaWindowController

void FUN_0006f9e0(uint64_t param_1)

{
  int64_t lVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_R13;
  undefined7 uVar5;
  uint64_t uVar4;
  int64_t lVar6;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  uint64_t local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_34;
  
  FUN_00d30620();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_0006fa7f;
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
LAB_0006fa32:
    lVar6 = g_026d7d20;
    if (g_026d7d20 != 0) {
      FUN_00d50b00();
    }
    local_140 = lVar6;
    local_138 = '\x01';
    FUN_00d30f20(param_1,&local_140);
    lVar6 = local_48;
    if (local_48 == 0) {
      lVar6 = 0;
      uVar4 = 0;
    }
    else {
      uVar5 = (undefined7)((uint64_t)unaff_R13 >> 8);
      if (local_40 == '\0') {
        FUN_00d50b00();
        uVar4 = CONCAT71(uVar5,1);
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
        uVar4 = CONCAT71(uVar5,1);
      }
    }
    if ((local_138 != '\0') && (local_140 != 0)) {
      FUN_00d50b20();
    }
    uVar3 = 0;
    uVar2 = 0;
    if (lVar6 != 0) goto LAB_0006faea;
  }
  else {
    if (local_48 != 0) goto LAB_0006fa32;
LAB_0006fa7f:
    uVar4 = 0;
    uVar2 = (int)CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
  }
  uVar3 = uVar2;
  lVar6 = g_026d7d28;
  if (g_026d7d28 == 0) {
    lVar6 = 0;
  }
  else {
    FUN_00d50b00();
    uVar4 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
  }
LAB_0006faea:
  local_50 = uVar4;
  FUN_01d0a8f0();
  local_128 = '\0';
  local_130 = lVar6;
  local_34 = uVar3;
  FUN_01d0a800();
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026d7d30;
  if (g_026d7d30 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar1;
  local_118 = '\x01';
  FUN_01d0a800();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_0276c070;
  if (g_0276c070 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar1;
  local_108 = '\x01';
  FUN_01d0a800();
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026d7d38;
  if (g_026d7d38 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar1;
  local_f8 = '\x01';
  FUN_01d0a800();
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_0276c040;
  if (g_0276c040 != 0) {
    FUN_00d50b00();
  }
  local_f0 = lVar1;
  local_e8 = '\x01';
  FUN_01d0a800();
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026d7d40;
  if (g_026d7d40 != 0) {
    FUN_00d50b00();
  }
  local_e0 = lVar1;
  local_d8 = '\x01';
  FUN_01d0a800();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_0276c010;
  if (g_0276c010 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar1;
  local_c8 = '\x01';
  FUN_01d0a800();
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026d7d48;
  if (g_026d7d48 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar1;
  local_b8 = '\x01';
  FUN_01d0a800();
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026d7d50;
  if (g_026d7d50 != 0) {
    FUN_00d50b00();
  }
  local_b0 = lVar1;
  local_a8 = '\x01';
  FUN_01d0a800();
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026d7d58;
  if (g_026d7d58 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar1;
  local_98 = '\x01';
  FUN_01d0a800();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026d7d60;
  if (g_026d7d60 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar1;
  local_88 = '\x01';
  FUN_01d0a800();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026d7d68;
  if (g_026d7d68 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar1;
  local_78 = '\x01';
  FUN_01d0a800();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026d7d70;
  if (g_026d7d70 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar1;
  local_68 = '\x01';
  FUN_01d0a800();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026d7d78;
  if (g_026d7d78 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  FUN_01d0a800();
  uVar2 = local_34;
  uVar4 = local_50;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_000703d0();
  if ((char)uVar2 == '\0') {
    FUN_00d50b20();
  }
  if (((char)uVar4 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  return;
}

