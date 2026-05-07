// Function: FUN_00d12ed0
// Address: 00d12ed0
// Size: 1341 bytes
// Class: GNList
// String references:
//   " %@"
//   "%@"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_00d12ed0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *plVar4;
  void*puVar5;
  void*this_ptr;
  void*puVar6;
  void*puVar7;
  uint32_t uVar8;
  void*local_d8;
  char local_d0;
  void*local_c8;
  char local_c0;
  void*local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_68;
  char local_60;
  void*local_58;
  void*local_50;
  uint32_t local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00d30620();
  puVar3 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 == (void*)0x0) goto LAB_00d12f29;
    FUN_00d50b00();
    if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_00d12f64:
    local_58 = puVar3;
  }
  else {
    local_58 = local_50;
    if (local_50 == (void*)0x0) {
LAB_00d12f29:
      FUN_00d30660();
      local_58 = local_50;
      if (local_50 == (void*)0x0) goto LAB_00d12f64;
      if ((char)local_48 == '\0') {
        FUN_00d50b00();
        if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_00d13800();
  puVar3 = local_50;
  lVar1 = g_0277ca30;
  if ((char)local_48 == '\0') {
    if (local_50 != (void*)0x0) {
      FUN_00d50b00();
      if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00d12fa8;
    }
  }
  else if (local_50 != (void*)0x0) {
LAB_00d12fa8:
    FUN_00d30ec0();
    puVar6 = local_50;
    puVar5 = g_0277ca28;
    if ((char)local_48 == '\0') {
      if (local_50 == (void*)0x0) goto LAB_00d130ba;
      FUN_00d50b00();
      if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_50 == (void*)0x0) {
LAB_00d130ba:
      if (g_0277ca28 != (void*)0x0) {
        FUN_00d50b00();
        puVar6 = puVar5;
      }
    }
    plVar4 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar4 = (int64_t)&g_0257fb38;
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    (*g_0257fb50)();
    (**(code **)(*plVar4 + 0x3c8))();
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_025795a8;
    uVar8 = (*g_025795c0)();
    local_d8 = puVar3;
    local_d0 = '\0';
    uVar8 = (**(code **)(*plVar4 + 0x388))(uVar8,&local_d8);
    local_48 = 1;
    local_50 = &g_024c5048;
    local_38 = 0;
    if (local_68 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_40 = local_68;
    local_38 = '\x01';
    FUN_00d94d80(uVar8,&local_50);
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != (void*)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d30ef0();
    puVar7 = local_50;
    if (local_50 == puVar6) {
LAB_00d1327f:
      puVar7 = puVar6;
      if ((char)local_48 != '\0') {
LAB_00d13285:
        if (local_50 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if ((char)local_48 == '\0') {
        if (local_50 != (void*)0x0) {
          FUN_00d50b00();
        }
        if (puVar6 != (void*)0x0) {
          FUN_00d50b20();
          puVar6 = puVar7;
          goto LAB_00d1327f;
        }
        if ((char)local_48 == '\0') goto LAB_00d13298;
        goto LAB_00d13285;
      }
      if (puVar6 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
LAB_00d13298:
    puVar6 = g_02800168;
    if (puVar7 == (void*)0x0) {
      if (g_02800168 == (void*)0x0) {
        puVar7 = (void*)0x0;
      }
      else {
        FUN_00d50b00();
        puVar7 = puVar6;
      }
    }
    local_c0 = '\0';
    local_c8 = puVar7;
    uVar8 = (**(code **)(*plVar4 + 0x3c8))();
    if ((local_c0 != '\0') && (local_c8 != (void*)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    local_b8 = puVar3;
    local_b0 = '\0';
    uVar8 = (**(code **)(*plVar4 + 0x388))(uVar8,&local_b8);
    local_48 = 1;
    local_50 = &g_024c5048;
    local_38 = 0;
    if (local_68 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_40 = local_68;
    local_38 = '\x01';
    FUN_00d94d80(uVar8,&local_50);
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (void*)0x0)) {
      FUN_00d50b20();
    }
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    if (puVar7 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_00d133d8;
  }
  if (g_0277ca30 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_0277ca38;
  local_a8 = lVar1;
  local_a0 = '\x01';
  if (g_0277ca38 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar2;
  local_90 = '\x01';
  local_88 = 0;
  local_80 = '\0';
  FUN_00d31230(&local_88,&local_98);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
LAB_00d133d8:
  if (local_58 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

