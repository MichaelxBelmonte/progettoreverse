// Function: FUN_018c8ac0
// Address: 018c8ac0
// Size: 21900 bytes
// Class: GNList
// String references:
//   "%@9"
//   "%@13"
//   "%@#11"
//   "%@7#11"
//   "%@9#11"
//   "%@#5"
//   "%@7#5"
//   "m%@"
//   "-%@7"
//   "m%@7"
//   "-%@9"
//   "m%@9"
//   "%@b13"
//   "%@7b13"
//   "%@7"
//   "-%@"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_018c8ac0(void)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  code *pcVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  void*puVar11;
  void*puVar12;
  void*puVar13;
  int64_t *plVar14;
  int64_t *plVar15;
  int64_t *plVar16;
  uint *puVar17;
  int iVar18;
  bool bVar19;
  uint32_t uVar20;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint64_t local_c0;
  int64_t *local_80;
  char local_78;
  uint64_t local_70;
  char local_68;
  int64_t local_60;
  int64_t *local_58;
  int64_t *local_50;
  uint local_48 [2];
  int64_t *local_40;
  char local_38;
  
  if ((g_028b0640 == (void*)0x0) || (g_028b0649 == '\0')) {
    FUN_00e8cb50();
    if (g_028b0640 == (void*)0x0) {
      puVar11 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar11 = &g_02572358;
      pcVar5 = g_02572370;
      (*g_02572370)();
      puVar12 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &g_02572358;
      (*pcVar5)();
      plVar14 = g_027cc8f0;
      if (g_027cc8f0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df220;
      if (g_027df220 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df228;
      if (g_027df228 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df230;
      if (g_027df230 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df238;
      if (g_027df238 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df240;
      if (g_027df240 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df248;
      if (g_027df248 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df250;
      if (g_027df250 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df258;
      if (g_027df258 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df260;
      if (g_027df260 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df268;
      if (g_027df268 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df270;
      if (g_027df270 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_02781710;
      if (g_02781710 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df278;
      if (g_027df278 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027818f8;
      if (g_027818f8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df280;
      if (g_027df280 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027cc8a0;
      if (g_027cc8a0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df288;
      if (g_027df288 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df290;
      if (g_027df290 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df298;
      if (g_027df298 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df2a0;
      if (g_027df2a0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df2a8;
      if (g_027df2a8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df2b0;
      if (g_027df2b0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df2b8;
      if (g_027df2b8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027c7e18;
      if (g_027c7e18 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df2c0;
      if (g_027df2c0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027c7e00;
      if (g_027c7e00 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df2c8;
      if (g_027df2c8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df2d0;
      if (g_027df2d0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df2d8;
      if (g_027df2d8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df2e0;
      if (g_027df2e0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df2e8;
      if (g_027df2e8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df2f0;
      if (g_027df2f0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df2f8;
      if (g_027df2f8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df300;
      if (g_027df300 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df308;
      if (g_027df308 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df310;
      if (g_027df310 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df318;
      if (g_027df318 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df320;
      if (g_027df320 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df328;
      if (g_027df328 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_02781720;
      if (g_02781720 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df330;
      if (g_027df330 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df338;
      if (g_027df338 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df340;
      if (g_027df340 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df348;
      if (g_027df348 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df350;
      if (g_027df350 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_02781738;
      if (g_02781738 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df358;
      if (g_027df358 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df360;
      if (g_027df360 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df368;
      if (g_027df368 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df370;
      if (g_027df370 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df378;
      if (g_027df378 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df380;
      if (g_027df380 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df388;
      if (g_027df388 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_026fce10;
      if (g_026fce10 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df390;
      if (g_027df390 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027c7dd8;
      if (g_027c7dd8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df398;
      if (g_027df398 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027c7de0;
      if (g_027c7de0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df3a0;
      if (g_027df3a0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df3a8;
      if (g_027df3a8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df3b0;
      if (g_027df3b0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df3b8;
      if (g_027df3b8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df3c0;
      if (g_027df3c0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027c7de8;
      if (g_027c7de8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df3c8;
      if (g_027df3c8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df3d0;
      if (g_027df3d0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df3d8;
      if (g_027df3d8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df3e0;
      if (g_027df3e0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df3e8;
      if (g_027df3e8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df3f0;
      if (g_027df3f0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df3f8;
      if (g_027df3f8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df400;
      if (g_027df400 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df408;
      if (g_027df408 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df410;
      if (g_027df410 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df418;
      if (g_027df418 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df420;
      if (g_027df420 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df428;
      if (g_027df428 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027c7df8;
      if (g_027c7df8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df430;
      if (g_027df430 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df438;
      if (g_027df438 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df440;
      if (g_027df440 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_0270b790;
      if (g_0270b790 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df448;
      if (g_027df448 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027c7e08;
      if (g_027c7e08 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df450;
      if (g_027df450 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027c7e10;
      if (g_027c7e10 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df458;
      if (g_027df458 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df460;
      if (g_027df460 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df468;
      if (g_027df468 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df470;
      if (g_027df470 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df478;
      if (g_027df478 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df480;
      if (g_027df480 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df488;
      if (g_027df488 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df490;
      if (g_027df490 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df498;
      if (g_027df498 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df4a0;
      if (g_027df4a0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df4a8;
      if (g_027df4a8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df4b0;
      if (g_027df4b0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df4b8;
      if (g_027df4b8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df4c0;
      if (g_027df4c0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df4c8;
      if (g_027df4c8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df4d0;
      if (g_027df4d0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df4d8;
      if (g_027df4d8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027816f0;
      if (g_027816f0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df4e0;
      if (g_027df4e0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_02781708;
      if (g_02781708 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df4e8;
      if (g_027df4e8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_02781898;
      if (g_02781898 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df4f0;
      if (g_027df4f0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_02781890;
      if (g_02781890 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df4f8;
      if (g_027df4f8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df500;
      if (g_027df500 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar14 = g_027df508;
      if (g_027df508 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar14;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      uVar1 = *(uint *)((int64_t)puVar11 + 0xc);
      puVar13 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar13 = &g_02572358;
      (*pcVar5)();
      bVar19 = g_028b0640 == (void*)0x0;
      g_028b0640 = puVar13;
      if (((bVar19) || (FUN_00d50b20(), g_028b0640 != (void*)0x0)) &&
         (g_028b0648 == '\0')) {
        g_028b0648 = '\x01';
        FUN_00e8cb90();
      }
      FUN_00d21370();
      pcVar5 = g_025795c0;
      if (0 < (int)uVar1) {
        local_c0 = 0;
        do {
          plVar14 = (int64_t *)FUN_00e8fc40();
          FUN_00d4ff40();
          *plVar14 = (int64_t)&g_02614bd8;
          plVar14[2] = 0;
          plVar14[3] = 0;
          plVar14[4] = 0;
          FUN_00d500e0();
          local_48[0] = local_48[0] & 0xffffff00;
          local_58 = plVar14;
          local_50 = plVar14;
          FUN_00d21140();
          if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          lVar2 = *(int64_t *)(puVar12[2] + local_c0 * 8);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          cVar8 = FUN_00d8ca70();
          plVar14 = local_58 + 2;
          **(int **)(*plVar14 + 0x10) = cVar8 + -0x30;
          cVar8 = FUN_00d8ca70();
          *(int *)(*(int64_t *)(*plVar14 + 0x10) + 4) = cVar8 + -0x30;
          cVar8 = FUN_00d8ca70();
          *(int *)(*(int64_t *)(*plVar14 + 0x10) + 8) = cVar8 + -0x30;
          cVar8 = FUN_00d8ca70();
          *(int *)(*(int64_t *)(*plVar14 + 0x10) + 0xc) = cVar8 + -0x30;
          cVar8 = FUN_00d8ca70();
          *(int *)(*(int64_t *)(*plVar14 + 0x10) + 0x10) = cVar8 + -0x30;
          cVar8 = FUN_00d8ca70();
          *(int *)(*(int64_t *)(*plVar14 + 0x10) + 0x14) = cVar8 + -0x30;
          cVar8 = FUN_00d8ca70();
          *(int *)(*(int64_t *)(*plVar14 + 0x10) + 0x18) = cVar8 + -0x30;
          cVar8 = FUN_00d8ca70();
          *(int *)(*(int64_t *)(*plVar14 + 0x10) + 0x1c) = cVar8 + -0x30;
          cVar8 = FUN_00d8ca70();
          *(int *)(*(int64_t *)(*plVar14 + 0x10) + 0x20) = cVar8 + -0x30;
          cVar8 = FUN_00d8ca70();
          *(int *)(*(int64_t *)(*plVar14 + 0x10) + 0x24) = cVar8 + -0x30;
          cVar8 = FUN_00d8ca70();
          *(int *)(*(int64_t *)(*plVar14 + 0x10) + 0x28) = cVar8 + -0x30;
          cVar8 = FUN_00d8ca70();
          *(int *)(*(int64_t *)(*plVar14 + 0x10) + 0x2c) = cVar8 + -0x30;
          plVar14 = *(int64_t **)(puVar11[2] + local_c0 * 8);
          if (plVar14 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          lVar3 = local_58[3];
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          local_48[0] = local_48[0] & 0xffffff00;
          local_60 = lVar3;
          local_50 = plVar14;
          FUN_00d21140();
          if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          plVar15 = (int64_t *)FUN_00e8fc40();
          FUN_00d4ff40();
          *plVar15 = (int64_t)&g_025795a8;
          (*pcVar5)();
          bVar19 = false;
          for (iVar18 = 0; iVar10 = FUN_00d8c7a0(), iVar18 < iVar10; iVar18 = iVar18 + 1) {
            cVar9 = FUN_00d8ca70();
            cVar8 = cVar9;
            if (cVar9 == '-') {
              cVar8 = 'm';
            }
            local_50 = (int64_t *)CONCAT71(local_50._1_7_,cVar8);
            FUN_00d8db70(0x6d,1);
            if (cVar9 == '-') {
              bVar19 = true;
            }
          }
          if (bVar19) {
            local_48[0] = local_48[0] & 0xffffff00;
            local_50 = plVar15;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar16 = (int64_t *)FUN_00e8fc40();
          FUN_00d4ff40();
          *plVar16 = (int64_t)&g_025795a8;
          (*pcVar5)();
          if (plVar15 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          bVar19 = false;
          for (iVar18 = 0; iVar10 = FUN_00d8c7a0(), iVar18 < iVar10; iVar18 = iVar18 + 1) {
            cVar9 = FUN_00d8ca70();
            cVar8 = cVar9;
            if (cVar9 == '^') {
              cVar8 = 'M';
            }
            local_50 = (int64_t *)CONCAT71(local_50._1_7_,cVar8);
            FUN_00d8db70(0x4d,1);
            if (cVar9 == '^') {
              bVar19 = true;
            }
          }
          if (bVar19) {
            local_48[0] = local_48[0] & 0xffffff00;
            local_50 = plVar16;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar15 = (int64_t *)FUN_00e8fc40();
          FUN_00d4ff40();
          *plVar15 = (int64_t)&g_025795a8;
          (*pcVar5)();
          if (plVar16 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          bVar19 = false;
          for (iVar18 = 0; iVar10 = FUN_00d8c7a0(), iVar18 < iVar10; iVar18 = iVar18 + 1) {
            cVar9 = FUN_00d8ca70();
            cVar8 = cVar9;
            if (cVar9 == '#') {
              cVar8 = '+';
            }
            local_50 = (int64_t *)CONCAT71(local_50._1_7_,cVar8);
            FUN_00d8db70(0x2b,1);
            if (cVar9 == '#') {
              bVar19 = true;
            }
          }
          if (bVar19) {
            local_48[0] = local_48[0] & 0xffffff00;
            local_50 = plVar15;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_017281b0();
          FUN_00d23310();
          plVar16 = local_50;
          local_70._0_1_ = (char)local_48[0];
          puVar17 = local_48;
          if ((char)local_48[0] == '\0') {
            puVar17 = (uint *)&local_70;
          }
          *(void*)puVar17 = 0;
          if (((char)local_48[0] != '\0') && (plVar16 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_70 == '\0') && (plVar16 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01729150();
          FUN_00d23310();
          plVar6 = local_50;
          local_70._0_1_ = (char)local_48[0];
          puVar17 = local_48;
          if ((char)local_48[0] == '\0') {
            puVar17 = (uint *)&local_70;
          }
          *(void*)puVar17 = 0;
          if (((char)local_48[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_70 == '\0') && (plVar6 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_017297a0();
          FUN_00d23310();
          plVar7 = local_50;
          local_70._0_1_ = (char)local_48[0];
          puVar17 = local_48;
          if ((char)local_48[0] == '\0') {
            puVar17 = (uint *)&local_70;
          }
          *(void*)puVar17 = 0;
          if (((char)local_48[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_70 == '\0') && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          plVar4 = g_027cc8f0;
          if (g_027cc8f0 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (cVar8 != '\0') {
            FUN_00d8ede0();
            if (local_78 == '\0') {
              if (local_80 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_78 = '\0';
            }
            local_50 = local_80;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_026fce10;
          if (g_026fce10 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027df510;
          if (cVar8 != '\0') {
            if (g_027df510 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027df3e0;
          if (g_027df3e0 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027df518;
          if (cVar8 != '\0') {
            if (g_027df518 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_027df520;
            if (g_027df520 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027df228;
          if (g_027df228 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_02781678;
          if (cVar8 != '\0') {
            if (g_02781678 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_027be638;
            if (g_027be638 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_027e2260;
            if (g_027e2260 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_027df528;
            if (g_027df528 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            local_48[0] = local_48[0] & 0xffffff00;
            local_50 = plVar16;
            uVar20 = FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              uVar20 = FUN_00d50b20();
            }
            local_48[0] = 1;
            local_50 = &g_024c5048;
            local_38 = 0;
            if (plVar16 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b00();
            }
            local_40 = plVar16;
            local_38 = '\x01';
            FUN_00d8cb40(uVar20,&local_50);
            local_80 = (int64_t *)CONCAT71(local_70._1_7_,(char)local_70);
            if (local_68 == '\0') {
              if (local_80 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_78 = '\0';
            FUN_00d21140();
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
              FUN_00d50b20();
            }
            local_50 = &g_024c5048;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027df238;
          if (g_027df238 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          uVar20 = extraout_XMM0_Da;
          if (plVar4 != (int64_t *)0x0) {
            uVar20 = FUN_00d50b20();
          }
          if (cVar8 != '\0') {
            local_48[0] = 1;
            local_50 = &g_024c5048;
            local_38 = 0;
            if (plVar16 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b00();
            }
            local_40 = plVar16;
            local_38 = '\x01';
            FUN_00d8cb40(uVar20,&local_50);
            local_80 = (int64_t *)CONCAT71(local_70._1_7_,(char)local_70);
            if (local_68 == '\0') {
              if (local_80 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_78 = '\0';
            FUN_00d21140();
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
              FUN_00d50b20();
            }
            local_50 = &g_024c5048;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027df248;
          if (g_027df248 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          uVar20 = extraout_XMM0_Da_00;
          if (plVar4 != (int64_t *)0x0) {
            uVar20 = FUN_00d50b20();
          }
          if (cVar8 != '\0') {
            local_48[0] = 1;
            local_50 = &g_024c5048;
            local_38 = 0;
            if (plVar16 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b00();
            }
            local_40 = plVar16;
            local_38 = '\x01';
            FUN_00d8cb40(uVar20,&local_50);
            local_80 = (int64_t *)CONCAT71(local_70._1_7_,(char)local_70);
            if (local_68 == '\0') {
              if (local_80 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_78 = '\0';
            FUN_00d21140();
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
              FUN_00d50b20();
            }
            local_50 = &g_024c5048;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027df258;
          if (g_027df258 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027df530;
          if (cVar8 != '\0') {
            if (g_027df530 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_027df538;
            if (g_027df538 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            uVar20 = FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              uVar20 = FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b20();
            }
            local_48[0] = 1;
            local_50 = &g_024c5048;
            local_38 = 0;
            if (plVar16 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b00();
            }
            local_40 = plVar16;
            local_38 = '\x01';
            FUN_00d8cb40(uVar20,&local_50);
            lVar3 = CONCAT71(local_70._1_7_,(char)local_70);
            if (local_68 == '\0') {
              if (lVar3 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            uVar20 = FUN_00d21140();
            if (lVar3 != 0) {
              uVar20 = FUN_00d50b20();
            }
            if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
              uVar20 = FUN_00d50b20();
            }
            local_50 = &g_024c5048;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              uVar20 = FUN_00d50b20();
            }
            local_48[0] = 1;
            local_50 = &g_024c5048;
            local_38 = 0;
            if (plVar16 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b00();
            }
            local_40 = plVar16;
            local_38 = '\x01';
            FUN_00d8cb40(uVar20,&local_50);
            lVar3 = CONCAT71(local_70._1_7_,(char)local_70);
            if (local_68 == '\0') {
              if (lVar3 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            uVar20 = FUN_00d21140();
            if (lVar3 != 0) {
              uVar20 = FUN_00d50b20();
            }
            if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
              uVar20 = FUN_00d50b20();
            }
            local_50 = &g_024c5048;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              uVar20 = FUN_00d50b20();
            }
            local_48[0] = 1;
            local_50 = &g_024c5048;
            local_38 = 0;
            if (plVar16 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b00();
            }
            local_40 = plVar16;
            local_38 = '\x01';
            FUN_00d8cb40(uVar20,&local_50);
            local_80 = (int64_t *)CONCAT71(local_70._1_7_,(char)local_70);
            if (local_68 == '\0') {
              if (local_80 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_78 = '\0';
            FUN_00d21140();
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
              FUN_00d50b20();
            }
            local_50 = &g_024c5048;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027df268;
          if (g_027df268 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027df540;
          if (cVar8 != '\0') {
            if (g_027df540 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            uVar20 = FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              uVar20 = FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b20();
            }
            local_48[0] = 1;
            local_50 = &g_024c5048;
            local_38 = 0;
            if (plVar16 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b00();
            }
            local_40 = plVar16;
            local_38 = '\x01';
            FUN_00d8cb40(uVar20,&local_50);
            lVar3 = CONCAT71(local_70._1_7_,(char)local_70);
            if (local_68 == '\0') {
              if (lVar3 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            uVar20 = FUN_00d21140();
            if (lVar3 != 0) {
              uVar20 = FUN_00d50b20();
            }
            if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
              uVar20 = FUN_00d50b20();
            }
            local_50 = &g_024c5048;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              uVar20 = FUN_00d50b20();
            }
            local_48[0] = 1;
            local_50 = &g_024c5048;
            local_38 = 0;
            if (plVar16 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b00();
            }
            local_40 = plVar16;
            local_38 = '\x01';
            FUN_00d8cb40(uVar20,&local_50);
            local_80 = (int64_t *)CONCAT71(local_70._1_7_,(char)local_70);
            if (local_68 == '\0') {
              if (local_80 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_78 = '\0';
            FUN_00d21140();
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
              FUN_00d50b20();
            }
            local_50 = &g_024c5048;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027c7de8;
          if (g_027c7de8 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          uVar20 = extraout_XMM0_Da_01;
          if (plVar4 != (int64_t *)0x0) {
            uVar20 = FUN_00d50b20();
          }
          if (cVar8 != '\0') {
            local_48[0] = 1;
            local_50 = &g_024c5048;
            local_38 = 0;
            if (plVar16 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b00();
            }
            local_40 = plVar16;
            local_38 = '\x01';
            FUN_00d8cb40(uVar20,&local_50);
            lVar3 = CONCAT71(local_70._1_7_,(char)local_70);
            if (local_68 == '\0') {
              if (lVar3 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            uVar20 = FUN_00d21140();
            if (lVar3 != 0) {
              uVar20 = FUN_00d50b20();
            }
            if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
              uVar20 = FUN_00d50b20();
            }
            local_50 = &g_024c5048;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              uVar20 = FUN_00d50b20();
            }
            local_48[0] = 1;
            local_50 = &g_024c5048;
            local_38 = 0;
            if (plVar16 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b00();
            }
            local_40 = plVar16;
            local_38 = '\x01';
            FUN_00d8cb40(uVar20,&local_50);
            lVar3 = CONCAT71(local_70._1_7_,(char)local_70);
            if (local_68 == '\0') {
              if (lVar3 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            uVar20 = FUN_00d21140();
            if (lVar3 != 0) {
              uVar20 = FUN_00d50b20();
            }
            if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
              uVar20 = FUN_00d50b20();
            }
            local_50 = &g_024c5048;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              uVar20 = FUN_00d50b20();
            }
            local_48[0] = 1;
            local_50 = &g_024c5048;
            local_38 = 0;
            if (plVar16 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b00();
            }
            local_40 = plVar16;
            local_38 = '\x01';
            FUN_00d8cb40(uVar20,&local_50);
            lVar3 = CONCAT71(local_70._1_7_,(char)local_70);
            if (local_68 == '\0') {
              if (lVar3 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            uVar20 = FUN_00d21140();
            if (lVar3 != 0) {
              uVar20 = FUN_00d50b20();
            }
            if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
              uVar20 = FUN_00d50b20();
            }
            local_50 = &g_024c5048;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              uVar20 = FUN_00d50b20();
            }
            local_48[0] = 1;
            local_50 = &g_024c5048;
            local_38 = 0;
            if (plVar16 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b00();
            }
            local_40 = plVar16;
            local_38 = '\x01';
            FUN_00d8cb40(uVar20,&local_50);
            local_80 = (int64_t *)CONCAT71(local_70._1_7_,(char)local_70);
            if (local_68 == '\0') {
              if (local_80 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_78 = '\0';
            FUN_00d21140();
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
              FUN_00d50b20();
            }
            local_50 = &g_024c5048;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            plVar4 = g_027df548;
            if (g_027df548 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027df3d0;
          if (g_027df3d0 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          uVar20 = extraout_XMM0_Da_02;
          if (plVar4 != (int64_t *)0x0) {
            uVar20 = FUN_00d50b20();
          }
          if (cVar8 != '\0') {
            local_48[0] = 1;
            local_50 = &g_024c5048;
            local_38 = 0;
            if (plVar16 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b00();
            }
            local_40 = plVar16;
            local_38 = '\x01';
            FUN_00d8cb40(uVar20,&local_50);
            lVar3 = CONCAT71(local_70._1_7_,(char)local_70);
            if (local_68 == '\0') {
              if (lVar3 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            uVar20 = FUN_00d21140();
            if (lVar3 != 0) {
              uVar20 = FUN_00d50b20();
            }
            if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
              uVar20 = FUN_00d50b20();
            }
            local_50 = &g_024c5048;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              uVar20 = FUN_00d50b20();
            }
            local_48[0] = 1;
            local_50 = &g_024c5048;
            local_38 = 0;
            if (plVar16 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b00();
            }
            local_40 = plVar16;
            local_38 = '\x01';
            FUN_00d8cb40(uVar20,&local_50);
            local_80 = (int64_t *)CONCAT71(local_70._1_7_,(char)local_70);
            if (local_68 == '\0') {
              if (local_80 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_78 = '\0';
            FUN_00d21140();
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
              FUN_00d50b20();
            }
            local_50 = &g_024c5048;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027df400;
          if (g_027df400 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027cc950;
          if (cVar8 != '\0') {
            if (g_027cc950 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_027df550;
            if (g_027df550 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_027df558;
            if (g_027df558 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            local_48[0] = local_48[0] & 0xffffff00;
            local_50 = plVar6;
            uVar20 = FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              uVar20 = FUN_00d50b20();
            }
            local_48[0] = 1;
            local_50 = &g_024c5048;
            local_38 = 0;
            if (plVar6 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b00();
            }
            local_40 = plVar6;
            local_38 = '\x01';
            FUN_00d8cb40(uVar20,&local_50);
            local_80 = (int64_t *)CONCAT71(local_70._1_7_,(char)local_70);
            if (local_68 == '\0') {
              if (local_80 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_78 = '\0';
            FUN_00d21140();
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
              FUN_00d50b20();
            }
            local_50 = &g_024c5048;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027df410;
          if (g_027df410 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          uVar20 = extraout_XMM0_Da_03;
          if (plVar4 != (int64_t *)0x0) {
            uVar20 = FUN_00d50b20();
          }
          if (cVar8 != '\0') {
            local_48[0] = 1;
            local_50 = &g_024c5048;
            local_38 = 0;
            if (plVar6 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b00();
            }
            local_40 = plVar6;
            local_38 = '\x01';
            FUN_00d8cb40(uVar20,&local_50);
            local_80 = (int64_t *)CONCAT71(local_70._1_7_,(char)local_70);
            if (local_68 == '\0') {
              if (local_80 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_78 = '\0';
            FUN_00d21140();
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
              FUN_00d50b20();
            }
            local_50 = &g_024c5048;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027df420;
          if (g_027df420 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027cc960;
          if (cVar8 != '\0') {
            if (g_027cc960 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_0276ce70;
            if (g_0276ce70 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_027df560;
            if (g_027df560 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            local_48[0] = local_48[0] & 0xffffff00;
            local_50 = plVar7;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027c7df8;
          if (g_027c7df8 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027df568;
          if (cVar8 != '\0') {
            if (g_027df568 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_027df570;
            if (g_027df570 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_027df578;
            if (g_027df578 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            uVar20 = FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              uVar20 = FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b20();
            }
            local_48[0] = 1;
            local_50 = &g_024c5048;
            local_38 = 0;
            if (plVar7 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b00();
            }
            local_40 = plVar7;
            local_38 = '\x01';
            FUN_00d8cb40(uVar20,&local_50);
            local_80 = (int64_t *)CONCAT71(local_70._1_7_,(char)local_70);
            if (local_68 == '\0') {
              if (local_80 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_78 = '\0';
            FUN_00d21140();
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
              FUN_00d50b20();
            }
            local_50 = &g_024c5048;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027df438;
          if (g_027df438 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027df580;
          if (cVar8 != '\0') {
            if (g_027df580 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_027df588;
            if (g_027df588 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_027df590;
            if (g_027df590 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            uVar20 = FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              uVar20 = FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b20();
            }
            local_48[0] = 1;
            local_50 = &g_024c5048;
            local_38 = 0;
            if (plVar7 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b00();
            }
            local_40 = plVar7;
            local_38 = '\x01';
            FUN_00d8cb40(uVar20,&local_50);
            lVar3 = CONCAT71(local_70._1_7_,(char)local_70);
            if (local_68 == '\0') {
              if (lVar3 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            FUN_00d21140();
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
              FUN_00d50b20();
            }
            local_50 = &g_024c5048;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            plVar4 = g_027df598;
            if (g_027df598 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_027df5a0;
            if (g_027df5a0 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_027df5a8;
            if (g_027df5a8 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_027df5b0;
            if (g_027df5b0 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            uVar20 = FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              uVar20 = FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b20();
            }
            local_48[0] = 1;
            local_50 = &g_024c5048;
            local_38 = 0;
            if (plVar7 != (int64_t *)0x0) {
              uVar20 = FUN_00d50b00();
            }
            local_40 = plVar7;
            local_38 = '\x01';
            FUN_00d8cb40(uVar20,&local_50);
            local_80 = (int64_t *)CONCAT71(local_70._1_7_,(char)local_70);
            if (local_68 == '\0') {
              if (local_80 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_78 = '\0';
            FUN_00d21140();
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
              FUN_00d50b20();
            }
            local_50 = &g_024c5048;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027df338;
          if (g_027df338 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027df5b8;
          if (cVar8 != '\0') {
            if (g_027df5b8 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_027df5c0;
            if (g_027df5c0 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_027df5c8;
            if (g_027df5c8 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027df348;
          if (g_027df348 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027df5d0;
          if (cVar8 != '\0') {
            if (g_027df5d0 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027df2f0;
          if (g_027df2f0 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027df5d8;
          if (cVar8 != '\0') {
            if (g_027df5d8 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027df300;
          if (g_027df300 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027df5e0;
          if (cVar8 != '\0') {
            if (g_027df5e0 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027df310;
          if (g_027df310 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027df5e8;
          if (cVar8 != '\0') {
            if (g_027df5e8 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_02781720;
          if (g_02781720 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_02781948;
          if (cVar8 != '\0') {
            if (g_02781948 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027c7e18;
          if (g_027c7e18 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027df5f0;
          if (cVar8 != '\0') {
            if (g_027df5f0 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_0270b790;
          if (g_0270b790 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027cc900;
          if (cVar8 != '\0') {
            if (g_027cc900 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027c7e00;
          if (g_027c7e00 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027df5f8;
          if (cVar8 != '\0') {
            if (g_027df5f8 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_027df600;
            if (g_027df600 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_027df608;
            if (g_027df608 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_027df610;
            if (g_027df610 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_02781738;
          if (g_02781738 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027df618;
          if (cVar8 != '\0') {
            if (g_027df618 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027c7e08;
          if (g_027c7e08 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027df620;
          if (cVar8 != '\0') {
            if (g_027df620 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_02781700;
            if (g_02781700 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027c7e10;
          if (g_027c7e10 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027df628;
          if (cVar8 != '\0') {
            if (g_027df628 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_02781920;
            if (g_02781920 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_027cc890;
            if (g_027cc890 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027df460;
          if (g_027df460 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027df630;
          if (cVar8 != '\0') {
            if (g_027df630 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027df470;
          if (g_027df470 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027df638;
          if (cVar8 != '\0') {
            if (g_027df638 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027df480;
          if (g_027df480 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027df640;
          if (cVar8 != '\0') {
            if (g_027df640 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027df490;
          if (g_027df490 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027df648;
          if (cVar8 != '\0') {
            if (g_027df648 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          plVar4 = g_027df4a0;
          if (g_027df4a0 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027df650;
          if (cVar8 != '\0') {
            if (g_027df650 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar4;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          if (plVar14 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          plVar4 = g_027cc8f0;
          if (g_027cc8f0 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar8 = (**(code **)(*plVar14 + 0x50))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar4 = g_027df400;
          if (cVar8 == '\0') {
            if (g_027df400 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            cVar8 = (**(code **)(*plVar14 + 0x50))();
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar4 = g_027cc950;
            if (cVar8 != '\0') {
              if (g_027cc950 == (int64_t *)0x0) {
                if (plVar14 != (int64_t *)0x0) goto LAB_018cdf2c;
              }
              else {
                FUN_00d50b00();
                if (plVar14 == plVar4) {
                  FUN_00d50b20();
                }
                else {
LAB_018cdf2c:
                  FUN_00d50b20();
                  plVar14 = plVar4;
                }
              }
            }
          }
          else {
            FUN_00d8ede0();
            plVar4 = plVar14;
            if (local_50 != plVar14) {
              plVar14 = local_50;
              if ((char)local_48[0] != '\0') {
                FUN_00d50b20();
                goto LAB_018cdf40;
              }
              if (local_50 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              FUN_00d50b20();
              plVar4 = local_50;
            }
            if (((char)local_48[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
LAB_018cdf40:
          plVar4 = (int64_t *)local_58[4];
          if (plVar4 != plVar14) {
            if (plVar14 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_58[4] = (int64_t)plVar14;
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          if (plVar14 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (plVar7 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (plVar6 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (plVar16 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (plVar15 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (local_60 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          local_c0 = local_c0 + 1;
        } while (local_c0 != uVar1);
      }
      puVar13 = g_028b0640;
      if (g_028b0640 != (void*)0x0) {
        FUN_00d50b00();
      }
      FUN_018d3410();
      if (puVar13 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (puVar12 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (puVar11 != (void*)0x0) {
        FUN_00d50b20();
      }
      g_028b0649 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b0649 = '\x01';
      FUN_00e8cb70();
    }
  }
  return;
}

