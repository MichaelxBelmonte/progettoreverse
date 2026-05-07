// Function: FUN_00e6fda0
// Address: 00e6fda0
// Size: 1846 bytes
// Class: GNList
// String references:
//   "%@updateConfig?%@"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00e6fda0(uint64_t param_1)

{
  void*puVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  int64_t lVar5;
  char unaff_SIL;
  uint64_t uVar6;
  bool bVar7;
  uint64_t uVar8;
  uint64_t local_130;
  uint8_t local_128;
  void*local_120;
  uint8_t local_118;
  void*local_110;
  uint8_t local_108;
  int64_t local_100;
  uint8_t local_f8;
  int64_t local_f0 [2];
  uint8_t local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  void*local_b8;
  int64_t local_b0;
  int64_t local_a8;
  void*local_a0;
  void*local_98;
  byte local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  uint64_t local_48;
  void*local_40;
  
  uVar8 = FUN_00e67a40(param_1,1);
  if ((local_90 == '\0') && (local_98 != (void*)0x0)) {
    uVar8 = FUN_00d50b00();
  }
  lVar3 = g_027e3c48;
  lVar5 = g_02787960;
  local_a0 = local_98;
  if (unaff_SIL == '\0') {
    if (g_02787960 != 0) {
      uVar8 = FUN_00d50b00();
      goto LAB_00e6fe24;
    }
  }
  else if (g_027e3c48 != 0) {
    uVar8 = FUN_00d50b00();
    lVar5 = lVar3;
    goto LAB_00e6fe24;
  }
  lVar5 = 0;
LAB_00e6fe24:
  puVar1 = g_02787968;
  local_d0 = '\x01';
  local_d8 = lVar5;
  if (g_02787968 != (void*)0x0) {
    uVar8 = FUN_00d50b00();
  }
  local_98 = puVar1;
  local_90 = '\0';
  FUN_00ca0840(uVar8,&local_98);
  if ((local_90 != '\0') && (local_98 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  puVar1 = g_02787968;
  if (g_02787968 != (void*)0x0) {
    FUN_00d50b00();
  }
  lVar5 = g_02787870;
  if (g_02787870 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027855c0;
  if (g_027855c0 != 0) {
    FUN_00d50b00();
  }
  local_b8 = puVar1;
  local_b0 = lVar5;
  local_f0[0] = lVar3;
  FUN_002bd7b0(local_f0,&local_b0,3);
  FUN_000b6830();
  lVar2 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_e0 = 1;
  FUN_00e600c0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_98 = (void*)&g_025df260;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_98 = (void*)&g_0253d630;
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_98 = &g_024c5048;
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  lVar5 = g_02787970;
  if (g_02787970 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_02787880;
  if (g_02787880 != 0) {
    FUN_00d50b00();
  }
  local_b8 = (void*)lVar5;
  local_b0 = lVar3;
  uVar8 = FUN_00083ea0(2,&local_b0);
  FUN_00d8cb40(uVar8,&local_98);
  lVar2 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  local_98 = (void*)&g_0253d630;
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_98 = &g_024c5048;
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  local_90 = 0;
  local_98 = (void*)0x0;
  local_a8 = lVar2;
  FUN_00da5ad0();
  local_80 = local_50 != '\0';
  local_88 = local_58;
  if ((bool)local_80) {
    local_50 = '\0';
  }
  local_78 = FUN_00da7170();
  FUN_00da7180();
  if (local_88 == 0) {
    lVar5 = 0;
    bVar7 = false;
    local_40 = (void*)0x0;
    uVar6 = 0;
  }
  else {
    local_48 = 0;
    local_40 = (void*)0x0;
    bVar7 = false;
    lVar5 = 0;
    do {
      local_c8 = local_a8;
      local_c0 = '\0';
      local_130 = 0;
      local_128 = 0;
      uVar8 = FUN_00e69550(g_02394dd8,&local_c8,&local_130);
      lVar3 = local_58;
      if (lVar5 == local_58) {
        lVar3 = lVar5;
        if ((bVar7) || (lVar5 == 0)) {
          bVar4 = bVar7;
          if ((local_50 != '\0') && (local_58 != 0)) {
            uVar8 = FUN_00d50b20();
          }
        }
        else {
          bVar4 = true;
          if (local_50 == '\0') {
            uVar8 = FUN_00d50b00();
          }
        }
      }
      else if (local_50 == '\0') {
        if (local_58 != 0) {
          uVar8 = FUN_00d50b00();
        }
        bVar4 = true;
        if ((bVar7) && (lVar5 != 0)) {
          uVar8 = FUN_00d50b20();
        }
      }
      else {
        bVar4 = true;
        if ((bVar7) && (lVar5 != 0)) {
          uVar8 = FUN_00d50b20();
        }
      }
      bVar7 = bVar4;
      lVar5 = lVar3;
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        uVar8 = FUN_00d50b20();
      }
      uVar6 = local_48;
      if (local_98 != (void*)0x0) {
        local_120 = local_98;
        local_118 = 0;
        local_110 = local_a0;
        local_108 = 0;
        local_f8 = 0;
        local_100 = lVar5;
        FUN_00e6a750(uVar8,&local_100);
        FUN_00e97f20();
        puVar1 = local_98;
        uVar6 = (uint64_t)local_90;
        if (local_98 == local_40) {
          uVar6 = local_48;
          if (((local_90 != 0) && ((char)local_48 == '\0')) && (local_98 != (void*)0x0)) {
            FUN_00d50b00();
            uVar6 = 1;
          }
        }
        else {
          if ((local_90 != 0) && (local_98 != (void*)0x0)) {
            FUN_00d50b00();
          }
          if (((char)local_48 == '\0') || (local_40 == (void*)0x0)) {
            local_40 = puVar1;
          }
          else {
            FUN_00d50b20();
            local_40 = puVar1;
          }
        }
      }
      FUN_00da7180();
      if (local_88 == 0) break;
      local_88 = 0;
      if (local_80 == '\0') {
        local_80 = '\0';
        if (local_90 == 0) goto LAB_00e70477;
        goto LAB_00e70466;
      }
      FUN_00d50b20();
      local_80 = '\0';
      local_48 = uVar6 & 0xffffffff;
    } while (local_88 != 0);
  }
  if (local_90 != 0) {
LAB_00e70466:
    if (local_98 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
LAB_00e70477:
  puVar1 = local_a0;
  lVar3 = local_a8;
  if ((local_40 != (void*)0x0) && (FUN_00e971f0(), (char)uVar6 != '\0')) {
    FUN_00d50b20();
  }
  if ((bVar7) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

