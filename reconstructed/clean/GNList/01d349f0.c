// Function: FUN_01d349f0
// Address: 01d349f0
// Size: 2213 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01d349f0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t *local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
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
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (this_ptr[8] == 0) {
    FUN_01f27fe0();
    local_1a0 = 0;
    local_198 = '\0';
    (**(code **)(*this_ptr + 0x458))();
    local_a0 = local_120;
    local_98 = 0;
    if (local_118 == '\0') {
      if (local_120 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_118 = '\0';
    }
    local_98 = '\x01';
    FUN_001220c0();
    local_b0 = local_70;
    local_a8 = 0;
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_a8 = '\x01';
    (**(code **)(*this_ptr + 0x458))();
    local_90 = local_110;
    local_88 = 0;
    if (local_108 == '\0') {
      if (local_110 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_108 = '\0';
    }
    local_88 = '\x01';
    FUN_01f444f0(&local_b0,&local_1a0,&local_90);
    plVar5 = local_60;
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    (**(code **)(*this_ptr + 0x470))();
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr[8] == 0) {
      return;
    }
  }
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  FUN_00d403d0();
  local_190 = g_027f32f0;
  if (g_027f32f0 != 0) {
    FUN_00d50b00();
  }
  local_188 = '\x01';
  FUN_00d50b00();
  local_178 = '\0';
  local_180 = plVar5;
  FUN_00d40470(&local_180,&stack0xffffffffffffff00,3,3);
  if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar5 = g_027efa60;
  if (g_027efa60 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_60 = plVar5;
  local_58 = '\0';
  cVar4 = FUN_00ca18c0();
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    lVar1 = this_ptr[8];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*this_ptr + 0x450))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      (**(code **)(*(int64_t *)this_ptr[8] + 0x388))();
      lVar1 = g_02800148;
      if (g_02800148 != 0) {
        FUN_00d50b00();
      }
      local_120 = local_70;
      local_110 = lVar1;
      FUN_00083ea0(2,&local_110);
      FUN_000b4da0();
      lVar3 = local_80;
      if (local_78 == '\0') {
        if (((local_80 != 0) && (FUN_00d50b00(), local_78 != '\0')) && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78 = '\0';
      }
      local_60 = (int64_t *)&g_0253d630;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_60 = &g_024c5048;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = g_02725a70;
      if (g_02725a70 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_02801060;
      local_170 = lVar1;
      local_168 = '\x01';
      if (g_02801060 != 0) {
        FUN_00d50b00();
      }
      local_160 = lVar2;
      local_158 = '\x01';
      FUN_01f6ca30();
      local_150 = lVar3;
      local_148 = '\0';
      (**(code **)(*local_60 + 0x5d8))();
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (this_ptr[5] != 0) {
        this_ptr[5] = 0;
        FUN_00d50b20();
      }
      cVar4 = (**(code **)(*this_ptr + 0x598))();
      if (cVar4 != '\0') {
        FUN_01f27fe0();
        plVar5 = local_60;
        lVar1 = this_ptr[8];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar5 + 0x548))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*this_ptr + 0x480))();
      plVar5 = local_60;
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*this_ptr + 0x480))();
        FUN_00db65f0();
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01f27fe0();
      (**(code **)(*local_60 + 0x4b8))();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x4c0))();
      FUN_00d403d0();
      local_140 = g_027efa68;
      if (g_027efa68 != 0) {
        FUN_00d50b00();
      }
      local_138 = '\x01';
      FUN_00d50b00();
      local_130 = 0;
      local_128 = '\0';
      FUN_00d40470(&local_130,&stack0xffffffffffffff30,1,3);
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x5c8))();
    }
    (**(code **)(*this_ptr + 0x578))();
  }
  FUN_00d50b20();
  return;
}

