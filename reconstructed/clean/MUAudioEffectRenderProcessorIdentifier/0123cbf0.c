// Function: FUN_0123cbf0
// Address: 0123cbf0
// Size: 1200 bytes
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


void* FUN_0123cbf0(void* param_1,int64_t *param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *arg1;
  void*this_ptr;
  uint64_t uVar6;
  int64_t *local_40;
  char local_38;
  
  plVar5 = (int64_t *)*param_2;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar5 = (int64_t *)*param_2;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar5 + 0x380))();
  plVar5 = (int64_t *)*param_2;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar5 = (int64_t *)*param_2;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  uVar6 = (**(code **)(*plVar5 + 0x370))();
  (**(code **)(*arg1 + 0x478))();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (param_3 != '\0') {
    FUN_00b82410(uVar6,10,0x44,0);
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if (local_40 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return this_ptr;
    }
    FUN_00b87ec0();
    FUN_0123b010();
    FUN_00d64850();
    arg1[0xe] = 0;
    FUN_00d64910();
    lVar4 = FUN_00b7a710();
    FUN_00d64850();
    arg1[0xf] = lVar4;
    FUN_00d64910();
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
    if (local_40 == (int64_t *)0x0) {
      return this_ptr;
    }
    goto LAB_0123d082;
  }
  (**(code **)(*local_40 + 0x3f0))();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_0123cec7;
    FUN_00d50b00();
LAB_0123cea1:
    cVar2 = (**(code **)(*local_40 + 0x3a0))();
    if (cVar2 == '\0') {
      (**(code **)(*local_40 + 0x420))();
    }
    bVar1 = false;
  }
  else {
    if (local_40 != (int64_t *)0x0) goto LAB_0123cea1;
LAB_0123cec7:
    bVar1 = true;
  }
  FUN_00b82410(uVar6,5,0x44,0);
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (local_40 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_00b7c570();
    FUN_00b87ec0();
    FUN_0123b010();
    FUN_00d64850();
    arg1[0xe] = 0;
    FUN_00d64910();
    lVar4 = FUN_00b7a710();
    FUN_00d64850();
    arg1[0xf] = lVar4;
    FUN_00d64910();
    FUN_00b79950();
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
LAB_0123d082:
  FUN_00d50b20();
  return this_ptr;
}

