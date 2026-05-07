// Function: FUN_012d4010
// Address: 012d4010
// Size: 1519 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_012d4010(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  code *pcVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  char *pcVar7;
  uint uVar8;
  void*puVar9;
  byte bVar10;
  void*local_58;
  char local_50 [8];
  byte local_39;
  char local_38;
  
  pcVar4 = g_02572370;
  uVar6 = 0;
  puVar9 = (void*)0x0;
LAB_012d4040:
  uVar5 = FUN_012dc2c0();
  bVar10 = (byte)uVar6;
  if (local_58 == puVar9) {
    local_39 = bVar10;
    puVar3 = puVar9;
    if ((bVar10 == 0) && (local_58 != (void*)0x0)) {
      if (local_50[0] != '\0') {
        local_39 = 1;
        uVar6 = uVar5;
        goto joined_r0x012d40ad;
      }
      local_39 = 1;
      uVar6 = FUN_00d50b00();
    }
joined_r0x012d4369:
    puVar9 = puVar3;
    if ((local_50[0] != '\0') && (local_58 != (void*)0x0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  else {
    if (local_50[0] == '\0') {
      if (local_58 != (void*)0x0) {
        uVar5 = FUN_00d50b00();
      }
      local_39 = 1;
      uVar6 = uVar5;
      puVar3 = local_58;
      if ((bVar10 != 0) && (puVar9 != (void*)0x0)) {
        uVar6 = FUN_00d50b20();
      }
      goto joined_r0x012d4369;
    }
    if ((bVar10 != 0) && (puVar9 != (void*)0x0)) {
      uVar5 = FUN_00d50b20();
    }
    local_39 = 1;
    uVar6 = uVar5;
    puVar9 = local_58;
  }
joined_r0x012d40ad:
  if (puVar9 != (void*)0x0) {
    FUN_00c9fe20();
    local_38 = local_50[0];
    pcVar7 = local_50;
    if (local_50[0] == '\0') {
      pcVar7 = &stack0xffffffffffffffc8;
    }
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)local_58[2];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    FUN_00ca1380();
    local_38 = local_50[0];
    pcVar7 = local_50;
    if (local_50[0] == '\0') {
      pcVar7 = &stack0xffffffffffffffc8;
    }
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = *(int64_t *)local_58[2];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    FUN_00c9fe40();
    local_38 = local_50[0];
    pcVar7 = local_50;
    if (local_50[0] == '\0') {
      pcVar7 = &stack0xffffffffffffffc8;
    }
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 == '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b00();
    }
    if (local_58 == (void*)0x0) {
      local_58 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_58 = &g_02572358;
      (*pcVar4)();
      local_50[0] = '\0';
      FUN_00ca0840();
      if ((local_50[0] != '\0') && (local_58 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d21140();
    if (local_58 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    uVar8 = (uint)local_39;
    uVar6 = (uint64_t)uVar8;
    if (lVar1 != 0) {
      FUN_00d50b20();
      uVar6 = (uint64_t)uVar8;
    }
    goto LAB_012d4040;
  }
  puVar9 = (void*)0x0;
  uVar6 = CONCAT71((int7)(uVar6 >> 8),local_39) & 0xffffffff;
  do {
    uVar5 = FUN_012dc2c0();
    bVar10 = (byte)uVar6;
    if (local_58 == puVar9) {
      puVar3 = puVar9;
      local_39 = bVar10;
      if ((bVar10 == 0) && (local_58 != (void*)0x0)) {
        if (local_50[0] != '\0') {
          local_39 = 1;
          uVar6 = uVar5;
          goto joined_r0x012d43ed;
        }
        local_39 = 1;
        uVar6 = FUN_00d50b00();
      }
joined_r0x012d4437:
      puVar9 = puVar3;
      if ((local_50[0] != '\0') && (local_58 != (void*)0x0)) {
        uVar6 = FUN_00d50b20();
      }
    }
    else {
      if (local_50[0] == '\0') {
        if (local_58 != (void*)0x0) {
          uVar5 = FUN_00d50b00();
        }
        local_39 = 1;
        puVar3 = local_58;
        uVar6 = uVar5;
        if ((bVar10 != 0) && (puVar9 != (void*)0x0)) {
          uVar6 = FUN_00d50b20();
        }
        goto joined_r0x012d4437;
      }
      if ((bVar10 != 0) && (puVar9 != (void*)0x0)) {
        uVar5 = FUN_00d50b20();
      }
      local_39 = 1;
      uVar6 = uVar5;
      puVar9 = local_58;
    }
joined_r0x012d43ed:
    if (puVar9 == (void*)0x0) {
      return uVar6;
    }
    FUN_00c9fe20();
    local_38 = local_50[0];
    pcVar7 = local_50;
    if (local_50[0] == '\0') {
      pcVar7 = &stack0xffffffffffffffc8;
    }
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)local_58[2];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    FUN_00ca1380();
    local_38 = local_50[0];
    pcVar7 = local_50;
    if (local_50[0] == '\0') {
      pcVar7 = &stack0xffffffffffffffc8;
    }
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = *(int64_t *)local_58[2];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    FUN_00c9fe40();
    local_38 = local_50[0];
    pcVar7 = local_50;
    if (local_50[0] == '\0') {
      pcVar7 = &stack0xffffffffffffffc8;
    }
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 == '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b00();
    }
    if (local_58 != (void*)0x0) {
      FUN_00d23f50();
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    uVar8 = (uint)local_39;
    uVar6 = (uint64_t)uVar8;
    if (lVar1 != 0) {
      FUN_00d50b20();
      uVar6 = (uint64_t)uVar8;
    }
  } while( true );
}

