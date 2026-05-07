// Function: FUN_0123dab0
// Address: 0123dab0
// Size: 1069 bytes
// Class: MUAudioEffectRenderProcessorIdentifier
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


void FUN_0123dab0(int64_t *param_1)

{
  char cVar1;
  uint32_t uVar2;
  int64_t *this_ptr;
  uint64_t uVar3;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_88;
  char local_80;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  cVar1 = FUN_0124d450();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*this_ptr + 0x498))(), cVar1 != '\0')) {
    (**(code **)(*this_ptr + 0x478))();
    if (local_48 == 0) {
      cVar1 = '\0';
    }
    else {
      (**(code **)(*this_ptr + 0x478))();
      (**(code **)(*local_c8 + 0x370))();
      if (local_38 == 0) {
        cVar1 = '\0';
      }
      else {
        (**(code **)(*this_ptr + 0x478))();
        (**(code **)(*local_a8 + 0x370))();
        FUN_00b7e000();
        if (local_80 == '\0') {
          if (local_88 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        cVar1 = (**(code **)(*local_b8 + 0x50))();
        if (local_88 != 0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') {
      (**(code **)(*this_ptr + 0x478))();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_00b810f0();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_0123b010();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*this_ptr + 0x478))();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      uVar2 = (**(code **)(*this_ptr + 0x380))();
      uVar3 = (**(code **)(*this_ptr + 0x370))();
      (**(code **)(*this_ptr + 0x378))();
      FUN_00b80910(uVar3,uVar2);
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_0123b010();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  param_1 = (int64_t *)*param_1;
  if (param_1 != (int64_t *)0x0) {
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*param_1 + 0x18))(g_02390124);
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

