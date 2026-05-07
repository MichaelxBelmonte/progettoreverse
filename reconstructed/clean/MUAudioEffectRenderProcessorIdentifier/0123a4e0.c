// Function: FUN_0123a4e0
// Address: 0123a4e0
// Size: 932 bytes
// Class: MUAudioEffectRenderProcessorIdentifier
// String references:
//   "%@.m4a"
// === MUAudioEffectRenderProcessorIdentifier properties ===
//                   _parameterChangeCounter
//                   _renderProcessor
//                   _inputRecorder
//                   _outputRecorder
//                   _parameterIdentifier
//                   _distribution
//                   _lowercaseModeTitle
//                   _lowercaseLocalizedModeTitle
//                   _score


void FUN_0123a4e0(uint64_t param_1,void*param_2)

{
  char cVar1;
  uint64_t uVar2;
  void*arg1;
  void*this_ptr;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  int64_t *local_50;
  uint local_48;
  int64_t local_40;
  char local_38;
  
  uVar2 = (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
  if ((char)uVar2 == '\0') {
    uVar2 = (**(code **)(*(int64_t *)*arg1 + 0x3f0))();
    plVar4 = local_50;
    if (local_50 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
      local_58 = 0;
    }
    else {
      local_58 = CONCAT71((int7)((uint64_t)uVar2 >> 8),1);
      if ((char)local_48 == '\0') {
        FUN_00d50b00();
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    plVar4 = (int64_t *)*arg1;
    if (plVar4 == (int64_t *)0x0) {
      local_58 = 0;
      plVar4 = (int64_t *)0x0;
    }
    else {
      local_58 = CONCAT71((int7)((uint64_t)uVar2 >> 8),*(char *)(arg1 + 1));
      if (*(char *)(arg1 + 1) != '\0') {
        FUN_00d50b00();
      }
    }
  }
  (**(code **)(*(int64_t *)*param_2 + 0x388))();
  plVar3 = local_50;
  if (((char)local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_70 = plVar3;
  local_c0 = plVar3;
  local_b8 = '\0';
  (**(code **)(*plVar4 + 0x400))(param_1,&local_c0);
  plVar3 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar1 = (**(code **)(*plVar3 + 0x398))();
  if (cVar1 == '\0') {
LAB_0123a660:
    (**(code **)(*(int64_t *)*param_2 + 0x390))();
    local_48 = 1;
    local_50 = &g_024c5048;
    local_38 = 0;
    if (local_d0 != 0) {
      FUN_00d50b00();
    }
    local_40 = local_d0;
    local_38 = '\x01';
    FUN_00d8cb40(param_1,&local_50);
    local_68 = local_80;
    local_60 = 0;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_60 = '\x01';
    (**(code **)(*plVar4 + 0x400))(param_1,&local_68);
    plVar4 = local_90;
    if (plVar3 == local_90) {
LAB_0123a772:
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_88 == '\0') {
        if (local_90 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        plVar3 = plVar4;
        goto LAB_0123a772;
      }
      FUN_00d50b20();
      local_88 = '\0';
      plVar3 = local_90;
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    cVar1 = (**(code **)(*plVar3 + 0x398))();
    if (cVar1 != '\0') {
      local_98 = '\0';
      local_a0 = plVar3;
      cVar1 = FUN_00b80190();
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar1 != '\0') goto LAB_0123a82d;
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    FUN_00d50b20();
  }
  else {
    local_b0 = plVar3;
    local_a8 = '\0';
    cVar1 = FUN_00b80190();
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') goto LAB_0123a660;
LAB_0123a82d:
    *this_ptr = plVar3;
    *(void*)(this_ptr + 1) = 1;
  }
  if (local_70 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_58 != '\0') {
    FUN_00d50b20();
  }
  return;
}

