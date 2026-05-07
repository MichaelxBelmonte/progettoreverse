// ===================================================================
// MUTestViewController — Complete reconstructed pseudocode
// 3 functions
// ===================================================================

// Registered properties (5):
//                   _sampleFrames
//                   _inputChannelFormat
//                   _outputChannelFormat
//                   _secondsPerSampleFrame
//                   _workgroup


// ============================================================
// 018ad410
// ============================================================
// Function: FUN_018ad410
// Address: 018ad410
// Size: 694 bytes
// Class: MUTestViewController
// String references:
//   "MUTestViewController"
// === MUTestViewController properties ===
//                   _sampleFrames
//                   _inputChannelFormat
//                   _outputChannelFormat
//                   _secondsPerSampleFrame
//                   _workgroup


void FUN_018ad410(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar2 = g_027dbf18;
  if (*param_2 == 0) {
    lVar6 = 0;
    if (g_027dbf18 != 0) {
      FUN_00d50b00();
      lVar6 = *param_2;
    }
    if (lVar6 == lVar2) {
      if (((char)param_2[1] != '\0') || (lVar2 == 0)) {
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        goto LAB_018ad47f;
      }
    }
    else {
      *param_2 = lVar2;
      if (((char)param_2[1] != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(param_2 + 1) = 1;
  }
LAB_018ad47f:
  lVar2 = g_027dbf20;
  if (g_027dbf20 != 0) {
    FUN_00d50b00();
  }
  local_70 = 0;
  local_68 = '\0';
  local_60 = 0;
  local_58 = '\0';
  pplVar5 = &local_40;
  FUN_01e4fcf0(&local_60,&local_70);
  plVar1 = local_40;
  if ((g_02723108 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_02723058 = FUN_00015ff0();
    g_02723040 = "MUTestViewController";
    g_02723048 = 0x78;
    g_02723050 = FUN_005fe3c0;
    g_02723060 = 0;
    ram_0000000002723068 = 0;
    g_02723070 = 0;
    ram_0000000002723078 = 0;
    g_02723080 = 0;
    ram_0000000002723088 = 0;
    g_02723090 = 0;
    ram_0000000002723098 = 0;
    g_027230a0 = 0;
    ram_00000000027230a8 = 0;
    g_027230b0 = 0;
    ram_00000000027230b8 = 0;
    g_027230c0 = 0;
    ram_00000000027230c8 = 0;
    g_027230d0 = 0;
    ram_00000000027230d8 = 0;
    g_027230e0 = 0;
    ram_00000000027230e8 = 0;
    g_027230f0 = 0;
    ram_00000000027230f8 = 0;
    g_02723100 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_018ad509;
  }
  pplVar5 = (int64_t **)&g_02802688;
LAB_018ad509:
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01e56750();
  local_50 = *param_2;
  local_48 = '\0';
  FUN_01e5a050();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_018ae240();
  (**(code **)(*plVar1 + 0x460))();
  *this_ptr = (int64_t)plVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 018acf50
// ============================================================
// Function: FUN_018acf50
// Address: 018acf50
// Size: 674 bytes
// Class: MUTestViewController
// === MUTestViewController properties ===
//                   _sampleFrames
//                   _inputChannelFormat
//                   _outputChannelFormat
//                   _secondsPerSampleFrame
//                   _workgroup


void FUN_018acf50(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int64_t *arg1;
  int64_t local_c0;
  char local_b8;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar2 = local_40;
  lVar1 = g_027dbf00;
  if (g_027dbf00 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar2 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_00d3ed20();
    local_90 = g_027dbf08;
    if (g_027dbf08 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    FUN_000175c0(param_1,&local_90);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d3ed20();
    local_80 = g_027feca0;
    if (g_027feca0 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_000175c0(param_1,&local_80);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_70 = plVar3;
    local_68 = '\0';
    FUN_018ad410(param_1,&local_70,param_3,param_4,0);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  local_60 = *arg1;
  local_58 = '\0';
  FUN_00d530a0();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 018ac3f0
// ============================================================
// Function: FUN_018ac3f0
// Address: 018ac3f0
// Size: 546 bytes
// Class: MUTestViewController
// === MUTestViewController properties ===
//                   _sampleFrames
//                   _inputChannelFormat
//                   _outputChannelFormat
//                   _secondsPerSampleFrame
//                   _workgroup


void FUN_018ac3f0(uint64_t param_1,void*param_2)

{
  void*puVar1;
  uint64_t local_b0;
  uint8_t local_a8;
  void*local_40;
  char local_38;
  
  local_b0 = *param_2;
  local_a8 = 0;
  FUN_018ac7a0(param_1,&local_b0);
  if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b00();
  }
  FUN_000b6b40();
  if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b00();
  }
  puVar1 = local_40;
  if (local_40 == (void*)0x0) {
    puVar1 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar1 = &g_02572358;
    (*g_02572370)();
    FUN_000b68d0();
  }
  FUN_00d235a0();
  FUN_018ac8a0();
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

