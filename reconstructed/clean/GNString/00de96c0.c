// Function: FUN_00de96c0
// Address: 00de96c0
// Size: 3299 bytes
// Class: GNString
// String references:
//   "%@=%@"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00de96c0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int iVar6;
  int64_t *this_ptr;
  int64_t local_258;
  int64_t local_250;
  char local_248;
  uint8_t local_238;
  int64_t local_230;
  char local_228;
  void*local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  void*local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  void*local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  void*local_e8;
  char local_e0;
  void*local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  void*local_b8;
  char local_b0;
  void*local_a8;
  int64_t local_a0;
  char local_98;
  void*local_90;
  uint64_t local_88;
  int local_80;
  int64_t local_78;
  char local_70;
  void*local_68;
  char local_60 [8];
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  if ((int64_t *)this_ptr[0x18] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x18] + 0x18))();
    puVar3 = local_68;
    if ((local_60[0] != '\0') && (local_68 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar3 != (void*)0x0) {
      (**(code **)(*(int64_t *)this_ptr[0x18] + 0x18))();
      puVar3 = local_68;
      lVar5 = g_02784490;
      if (local_60[0] == '\0') {
        if (local_68 != (void*)0x0) {
          FUN_00d50b00();
          lVar5 = g_02784490;
        }
      }
      else {
        local_60[0] = '\0';
      }
      local_238 = 1;
      g_02784490 = lVar5;
      if (lVar5 != 0) {
        local_238 = 1;
        FUN_00d50b00();
      }
      FUN_00de8b00();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if (puVar3 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_60[0] != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  lVar5 = g_02784498;
  if (g_02784498 != 0) {
    FUN_00d50b00();
  }
  local_218 = lVar5;
  local_210 = '\x01';
  FUN_00e94b30();
  if ((local_210 != '\0') && (local_218 != 0)) {
    FUN_00d50b20();
  }
  local_110 = 0;
  lVar5 = this_ptr[2];
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  local_110 = '\x01';
  local_118 = lVar5;
  FUN_00db9a70();
  FUN_00dbb440();
  local_d8 = local_68;
  local_d0 = 0;
  local_208 = g_027844a0;
  if (local_60[0] == '\0') {
    if (local_68 != (void*)0x0) {
      FUN_00d50b00();
      local_208 = g_027844a0;
    }
  }
  else {
    local_60[0] = '\0';
  }
  local_d0 = '\x01';
  g_027844a0 = local_208;
  if (local_208 != 0) {
    local_d0 = '\x01';
    FUN_00d50b00();
  }
  local_200 = '\x01';
  (**(code **)(*this_ptr + 0x3a8))();
  if ((local_200 != '\0') && (local_208 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60[0] != '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_02789550;
  lVar5 = g_027844c8;
  iVar6 = *(int *)((int64_t)this_ptr + 0x74);
  if (iVar6 != 2) {
    if (iVar6 == 1) {
      local_f0 = 0;
      lVar5 = this_ptr[0x17];
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      local_f0 = '\x01';
      local_f8 = lVar5;
      FUN_00e4c3d0();
      puVar3 = local_68;
      if (local_60[0] == '\0') {
        if (((local_68 != (void*)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
           (local_68 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60[0] = '\0';
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = g_02789558;
      if (g_02789558 != 0) {
        FUN_00d50b00();
      }
      lVar1 = g_027844a8;
      local_1b8 = lVar5;
      local_1b0 = '\x01';
      if (g_027844a8 != 0) {
        FUN_00d50b00();
      }
      local_1a8 = lVar1;
      local_1a0 = '\x01';
      (**(code **)(*this_ptr + 0x3a8))();
      if ((local_1a0 != '\0') && (local_1a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1b0 != '\0') && (local_1b8 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = g_027844c0;
      if (g_027844c0 != 0) {
        FUN_00d50b00();
      }
      lVar1 = g_027844b8;
      local_198 = lVar5;
      local_190 = '\x01';
      if (g_027844b8 != 0) {
        FUN_00d50b00();
      }
      local_188 = lVar1;
      local_180 = '\x01';
      (**(code **)(*this_ptr + 0x3a8))();
      if ((local_180 != '\0') && (local_188 != 0)) {
        FUN_00d50b20();
      }
      if ((local_190 != '\0') && (local_198 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d8cbf0();
      local_e8 = local_68;
      local_e0 = 0;
      if (local_60[0] == '\0') {
        if (local_68 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60[0] = '\0';
      }
      local_e0 = '\x01';
      FUN_00e94bd0();
      if ((local_e0 != '\0') && (local_e8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60[0] != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar3 == (void*)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    if (iVar6 != 0) {
      return;
    }
    if (g_02789550 != 0) {
      FUN_00d50b00();
    }
    lVar5 = g_027844a8;
    local_1f8 = lVar1;
    local_1f0 = '\x01';
    if (g_027844a8 != 0) {
      FUN_00d50b00();
    }
    local_1e8 = lVar5;
    local_1e0 = '\x01';
    (**(code **)(*this_ptr + 0x3a8))();
    if ((local_1e0 != '\0') && (local_1e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1f0 != '\0') && (local_1f8 != 0)) {
      FUN_00d50b20();
    }
    lVar5 = g_027844b0;
    if (g_027844b0 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_027844b8;
    local_1d8 = lVar5;
    local_1d0 = '\x01';
    if (g_027844b8 != 0) {
      FUN_00d50b00();
    }
    local_1c8 = lVar1;
    local_1c0 = '\x01';
    (**(code **)(*this_ptr + 0x3a8))();
    if ((local_1c0 != '\0') && (local_1c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1d0 != '\0') && (local_1d8 != 0)) {
      FUN_00d50b20();
    }
    FUN_00ca91d0();
    local_108 = local_68;
    local_100 = 0;
    if (local_60[0] == '\0') {
      if (local_68 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60[0] = '\0';
    }
    local_100 = '\x01';
    FUN_00e94bd0();
    if ((local_100 != '\0') && (local_108 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (local_60[0] == '\0') {
      return;
    }
    if (local_68 == (void*)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if (g_027844c8 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_027844b8;
  local_178 = lVar5;
  local_170 = '\x01';
  if (g_027844b8 != 0) {
    FUN_00d50b00();
  }
  local_168 = lVar1;
  local_160 = '\x01';
  (**(code **)(*this_ptr + 0x3a8))();
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  local_a8 = puVar3;
  (*g_02572370)();
  FUN_00c9fe20();
  puVar3 = local_68;
  plVar4 = (int64_t *)local_60;
  if (local_60[0] == '\0') {
    plVar4 = &local_a0;
  }
  local_a0 = CONCAT71(local_a0._1_7_,local_60[0]);
  *(void*)plVar4 = 0;
  if ((local_60[0] != '\0') && (puVar3 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_a0 == '\0') {
    if (puVar3 == (void*)0x0) goto LAB_00dea1a6;
    FUN_00d50b00();
  }
  else if (puVar3 == (void*)0x0) goto LAB_00dea1a6;
  local_98 = '\0';
  local_a0 = 0;
  local_220 = puVar3;
  local_90 = puVar3;
  local_88 = 0xffffffff;
  local_80 = 0;
  local_88._4_4_ = 0;
  while( true ) {
    if (local_88._4_4_ != 0) {
      if (local_88._4_4_ < 1) {
        iVar6 = -local_88._4_4_;
      }
      else {
        iVar6 = (int)local_88 - local_88._4_4_;
        local_88 = CONCAT44(local_88._4_4_,iVar6);
        FUN_00d23690();
        local_80 = local_80 + local_88._4_4_;
        iVar6 = 0;
      }
      local_88 = CONCAT44(iVar6,(int)local_88);
    }
    lVar5 = (int64_t)(int)local_88;
    iVar6 = (int)local_88 + 1;
    local_88 = CONCAT44(local_88._4_4_,iVar6);
    if (*(int *)((int64_t)local_90 + 0xc) <= iVar6) break;
    local_158 = *(int64_t *)(local_90[2] + 8 + lVar5 * 8);
    local_150 = '\0';
    local_a0 = local_158;
    FUN_000175c0(this_ptr,&local_158);
    lVar5 = local_78;
    local_c0 = 0;
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    local_c0 = '\x01';
    local_c8 = lVar5;
    FUN_00d97750();
    puVar3 = local_68;
    if (local_60[0] == '\0') {
      if (((local_68 != (void*)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
         (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60[0] = '\0';
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if (puVar3 != (void*)0x0) {
      FUN_00de9570();
      FUN_00de9570();
      lVar1 = local_230;
      lVar5 = local_250;
      local_78 = local_230;
      local_258 = local_250;
      FUN_00083ea0(2,&local_258);
      FUN_00d8cb40();
      lVar2 = local_128;
      if (local_120 == '\0') {
        if (local_128 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_120 = '\0';
      }
      local_78 = lVar2;
      local_70 = '\0';
      FUN_00d21140();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      local_68 = (void*)&g_0253d630;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_68 = &g_024c5048;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_248 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_228 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  FUN_00018280();
  FUN_00d50b20();
LAB_00dea1a6:
  puVar3 = local_a8;
  lVar5 = g_0277e590;
  local_140 = '\0';
  local_148 = local_a8;
  if (g_0277e590 != 0) {
    FUN_00d50b00();
  }
  local_138 = lVar5;
  local_130 = '\x01';
  FUN_00d95130();
  FUN_00d8cbf0();
  local_b8 = local_68;
  local_b0 = 0;
  if (local_60[0] == '\0') {
    if (local_68 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60[0] = '\0';
  }
  local_b0 = '\x01';
  FUN_00e94bd0();
  if ((local_b0 != '\0') && (local_b8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60[0] != '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

