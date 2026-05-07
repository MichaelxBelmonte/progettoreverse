// Function: FUN_01237b00
// Address: 01237b00
// Size: 873 bytes
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


void FUN_01237b00(void)

{
  int64_t *plVar1;
  uint32_t uVar2;
  int64_t *plVar3;
  int64_t this_ptr;
  int64_t *local_40;
  char local_38;
  
  FUN_00b341c0();
  FUN_01237550();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  (**(code **)(*local_40 + 0x5c0))();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01237d53;
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) goto LAB_01237d53;
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  FUN_012364a0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*g_028ac258 + 0x368))();
  FUN_01237080();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_01237130();
    plVar1 = *(int64_t **)(this_ptr + 0xf8);
    plVar3 = plVar1;
    if (plVar1 != local_40) {
      plVar3 = local_40;
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) {
          plVar3 = (int64_t *)0x0;
          goto LAB_01237ca8;
        }
        FUN_00d50b00();
        plVar1 = *(int64_t **)(this_ptr + 0xf8);
        *(int64_t **)(this_ptr + 0xf8) = local_40;
      }
      else {
        local_38 = '\0';
LAB_01237ca8:
        *(int64_t **)(this_ptr + 0xf8) = plVar3;
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar3 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar3 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*g_028ac258 + 0x378))();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
LAB_01237d53:
  if (*(int64_t *)(this_ptr + 0xf8) == 0) {
    FUN_00d51d20();
    plVar1 = *(int64_t **)(this_ptr + 0xf8);
    if (plVar1 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) {
          *(void*)(this_ptr + 0xf8) = 0;
        }
        else {
          FUN_00d50b00();
          plVar1 = *(int64_t **)(this_ptr + 0xf8);
          *(int64_t **)(this_ptr + 0xf8) = local_40;
        }
      }
      else {
        local_38 = '\0';
        *(int64_t **)(this_ptr + 0xf8) = local_40;
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(this_ptr + 0xf8);
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0x3b8))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    uVar2 = FUN_00b32020();
    *(void*)(this_ptr + 0xf0) = uVar2;
    (**(code **)(**(int64_t **)(this_ptr + 0xf8) + 0x368))();
  }
  FUN_00d50b20();
  return;
}

