// Function: FUN_01a35080
// Address: 01a35080
// Size: 2370 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void* FUN_01a35080(int param_1,int param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  void*puVar4;
  int64_t **pplVar5;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar6;
  int64_t *local_1c0;
  char local_1b8;
  uint32_t local_150;
  uint32_t uStack_14c;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  void*local_100;
  char local_f8;
  uint32_t local_f0;
  uint32_t local_ec;
  uint64_t local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  uint32_t local_9c;
  uint32_t local_98;
  uint32_t local_94;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  int64_t local_78;
  uint64_t uStack_70;
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint64_t local_58;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint32_t local_48;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if (param_1 == 0) {
    plVar2 = (int64_t *)FUN_00e8fc40();
    FUN_001b9f00();
    (**(code **)(*plVar2 + 0x18))();
    FUN_01cfc6a0(g_0241be18);
    local_150 = 0;
    FUN_01cfc6a0(g_0241be1c);
    local_9c = 0x3eaaaa3b;
    FUN_01cfc6a0(g_0241be20);
    local_98 = 0x3f2aaa3b;
    FUN_01cfc6a0(g_0241be24);
    local_94 = 0x3f800000;
    pplVar5 = &local_90;
    FUN_01ae52c0(pplVar5,&local_150,&local_9c,&local_d0);
    FUN_01f7ba60(g_023b5d80,&local_1c0);
    FUN_019fe220();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)uStack_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = g_0241bef0;
    local_78 = g_0241be70;
    uStack_70 = _UNK_0241be78;
    local_68 = g_0241be80;
    uStack_64 = _UNK_0241be84;
    uStack_60 = _UNK_0241be88;
    uStack_5c = _UNK_0241be8c;
    local_58 = 0x3f4caacc3f060b0a;
    _uStack_50 = CONCAT44((int)((uint64_t)_UNK_0241bee8 >> 0x20),0x3ed0d4aa);
    plVar2 = (int64_t *)FUN_00e8fc40();
    FUN_001b9f00();
    (**(code **)(*plVar2 + 0x18))();
    FUN_01cfbee0(g_0241f36c,g_0241be28,g_0241be2c);
    local_9c = 0;
    FUN_01cfbee0(uStack_70._4_4_,g_0241be30,g_0241be34);
    local_98 = 0x3f000000;
    FUN_01cfbee0(g_0241f36c,g_0241be38,g_0241be3c);
    local_94 = 0x3f000000;
    FUN_01cfbee0(g_0241be40,g_0241be44,g_0241be48);
    local_f0 = 0x3f800000;
    pplVar5 = &local_d0;
    FUN_01ae52c0(pplVar5,&local_9c,&local_98,&local_e0);
    FUN_01f7ba60(g_023b5d80,&local_1c0);
    FUN_019fe220();
    if ((local_148 != '\0') && (CONCAT44(uStack_14c,local_150) != 0)) {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_140 = 0;
  local_138 = '\0';
  local_80 = plVar2;
  uVar3 = FUN_01d4e800(g_02420ca0);
  plVar2 = local_1c0;
  if (local_1c0 == (int64_t *)0x0) {
    local_ec = (uint32_t)CONCAT71((int7)((uint64_t)pplVar5 >> 8),1);
    plVar2 = (int64_t *)0x0;
    local_e8 = 0;
  }
  else {
    if (local_1b8 == '\0') {
      uVar3 = FUN_00d50b00();
      local_ec = 0;
      local_e8 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
      if ((local_1b8 == '\0') || (local_1c0 == (int64_t *)0x0)) goto LAB_01a354b8;
      FUN_00d50b20();
    }
    else {
      local_1b8 = '\0';
      local_e8 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
    }
    local_ec = 0;
  }
LAB_01a354b8:
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d52700();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02680400;
  *(void*)((int64_t)puVar4 + 0xc) = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  *(void*)((int64_t)puVar4 + 0x39) = 0;
  *(void*)((int64_t)puVar4 + 0x41) = 0;
  (*g_02680418)();
  if (param_2 == 0) {
    FUN_01d39400(0,0);
    FUN_01d38ba0(g_023908ec,0);
    FUN_01d38ba0(0,g_023908ec);
    FUN_01d38b10();
  }
  else {
    FUN_01d39400(0,0);
    FUN_01d38ba0(g_023908ec,0);
    FUN_01d38ba0(g_023908ec,g_023908ec);
    FUN_01d38b10();
  }
  if ((char)param_1 == '\0') {
    FUN_01d52740();
    uVar6 = (**(code **)(*arg1 + 0x640))();
    plVar1 = local_90;
    local_120 = g_027e1fb0;
    if (g_027e1fb0 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_118 = '\x01';
    (**(code **)(*plVar1 + 0x3b0))(uVar6,&local_120);
    local_b0 = local_78;
    local_a8 = 0;
    if ((char)uStack_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      uStack_70 = uStack_70 & 0xffffffffffffff00;
    }
    local_a8 = '\x01';
    FUN_01d488d0();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (((char)uStack_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d52740();
    uVar6 = (**(code **)(*arg1 + 0x640))();
    plVar1 = local_90;
    local_130 = g_026e4200;
    if (g_026e4200 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_128 = '\x01';
    (**(code **)(*plVar1 + 0x3b0))(uVar6,&local_130);
    local_c0 = local_78;
    local_b8 = 0;
    if ((char)uStack_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      uStack_70 = uStack_70 & 0xffffffffffffff00;
    }
    local_b8 = '\x01';
    FUN_01d488d0();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (((char)uStack_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d52740();
  (**(code **)(*local_1c0 + 0x3b0))(0,g_02420ca0);
  if ((local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  local_110 = local_80;
  local_108 = '\0';
  FUN_01d488d0();
  if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  local_f8 = '\0';
  local_100 = puVar4;
  (**(code **)(*local_1c0 + 0x3a0))();
  if ((local_f8 != '\0') && (local_100 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
  *(void*)(this_ptr + 1) = 0;
  if ((char)local_e8 == '\0' && plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  *this_ptr = plVar2;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  FUN_00d50b20();
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return this_ptr;
}

