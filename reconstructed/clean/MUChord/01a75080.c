// Function: FUN_01a75080
// Address: 01a75080
// Size: 1427 bytes
// Class: MUChord
// === MUChord properties ===
//                   _tonic
//                   _tuning
//                   _scale
//                   _pitchClasses
//                   _audioSource
//                   _parameterSet


void* FUN_01a75080(uint64_t param_1,uint32_t param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  undefined7 uVar5;
  uint64_t uVar4;
  int64_t arg1;
  void*this_ptr;
  void*puVar6;
  void*puVar7;
  void*local_e8;
  void*local_e0;
  uint32_t local_d8;
  uint32_t local_d4;
  uint64_t local_d0;
  void*local_c8;
  char local_c0;
  uint32_t local_78;
  void*local_70;
  uint8_t local_68;
  uint32_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  void*local_48;
  void*local_40;
  uint32_t local_34;
  
  uVar5 = (undefined7)((uint64_t)this_ptr >> 8);
  local_34 = param_2;
  if (*(int *)(arg1 + 0x1d0) == 1) {
    FUN_01cfbee0(g_023b294c,g_023b294c,g_023b294c);
    local_48 = local_c8;
    if (local_c8 == (void*)0x0) {
      local_48 = (void*)0x0;
      local_58 = 0;
    }
    else {
      local_58 = CONCAT71((int7)((uint64_t)local_c8 >> 8),1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01cfbee0(g_02390128,g_02390128,g_02390128);
    local_40 = local_c8;
    if (local_c8 == (void*)0x0) {
      local_40 = (void*)0x0;
      local_50 = 0;
    }
    else {
      local_50 = CONCAT71((int7)((uint64_t)local_c8 >> 8),1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01cfbee0(g_02390124,g_02390124,0);
    puVar6 = local_c8;
    if (local_c8 == (void*)0x0) {
      puVar6 = (void*)0x0;
      uVar4 = 0;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    local_d0 = uVar4;
    FUN_01cfbee0(g_02390124,0,0);
    puVar7 = local_c8;
    if (local_c8 != (void*)0x0) {
      bVar1 = true;
      bVar2 = true;
      param_2 = local_34;
      if (((local_c0 == '\0') &&
          (FUN_00d50b00(), param_2 = local_34, bVar1 = bVar2, local_c0 != '\0')) &&
         (local_c8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a7549f;
    }
  }
  else {
    if (*(int *)(arg1 + 0x1d0) != 0) {
      puVar7 = (void*)0x0;
      local_d0 = 0;
      puVar6 = (void*)0x0;
      local_50 = 0;
      local_40 = (void*)0x0;
      local_58 = 0;
      local_48 = (void*)0x0;
      bVar1 = false;
      goto LAB_01a7549f;
    }
    FUN_01cfbee0(0,g_02394214,0);
    local_48 = local_c8;
    if (local_c8 == (void*)0x0) {
      local_48 = (void*)0x0;
      local_58 = 0;
    }
    else {
      local_58 = CONCAT71((int7)((uint64_t)local_c8 >> 8),1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01cfbee0(0,g_02390124,0);
    local_40 = local_c8;
    if (local_c8 == (void*)0x0) {
      local_40 = (void*)0x0;
      local_50 = 0;
    }
    else {
      local_50 = CONCAT71((int7)((uint64_t)local_c8 >> 8),1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01cfbee0(g_02390124,g_02390124,0);
    puVar6 = local_c8;
    if (local_c8 == (void*)0x0) {
      puVar6 = (void*)0x0;
      uVar4 = 0;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    local_d0 = uVar4;
    FUN_01cfbee0(g_02390124,0,0);
    puVar7 = local_c8;
    if (local_c8 != (void*)0x0) {
      bVar1 = true;
      bVar2 = true;
      param_2 = local_34;
      if (((local_c0 == '\0') &&
          (FUN_00d50b00(), param_2 = local_34, bVar1 = bVar2, local_c0 != '\0')) &&
         (local_c8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a7549f;
    }
  }
  bVar1 = false;
  puVar7 = (void*)0x0;
  param_2 = local_34;
LAB_01a7549f:
  local_34 = 0;
  if ((char)param_2 == '\0') {
    local_34 = g_02394290;
  }
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_001b9f00();
  (**(code **)(*plVar3 + 0x18))();
  local_d8 = 0;
  local_d4 = 0x3f19999a;
  local_e8 = local_40;
  local_e0 = puVar6;
  FUN_01a01f50(&local_e8,&local_d8,&local_d4,&local_e0);
  local_78 = 0x3f4ccccd;
  local_c8 = &g_02628b00;
  local_68 = 0;
  if (puVar7 != (void*)0x0) {
    FUN_00d50b00();
  }
  local_68 = 1;
  local_c8 = &g_02645f38;
  local_60 = 0x3f800000;
  local_70 = puVar7;
  FUN_01f7ba60(local_34,&local_c8);
  FUN_019fe220();
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar1) && (puVar7 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_d0 != '\0') && (puVar6 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_48 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

