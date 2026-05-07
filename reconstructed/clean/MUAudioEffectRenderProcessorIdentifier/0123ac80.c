// Function: FUN_0123ac80
// Address: 0123ac80
// Size: 636 bytes
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


void FUN_0123ac80(uint64_t param_1,int64_t param_2)

{
  void*puVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  void*puVar5;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_48;
  char local_40;
  
  pVar4 = (void*)param_1;
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00115cd0();
  *puVar1 = &g_025ccea8;
  puVar1[0x13] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(void*)((int64_t)puVar1 + 0x84) = 0;
  *(void*)((int64_t)puVar1 + 0x8c) = 0;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(pVar4);
  puVar5 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar5 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  (**(code **)(*arg1 + 0x478))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if (puVar5[0xd] != local_48) {
    FUN_00d64850();
    lVar3 = puVar5[0xd];
    if (lVar3 != local_48) {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      puVar5[0xd] = local_48;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  puVar5 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar5 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  lVar3 = arg1[0xe];
  FUN_00d64850();
  puVar5[0xe] = lVar3 + param_2;
  FUN_00d64910();
  pvVar2 = _pthread_getspecific(pVar4);
  puVar5 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar5 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  FUN_00d64850();
  puVar5[0xf] = param_1;
  FUN_00d64910();
  pvVar2 = _pthread_getspecific(pVar4);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = arg1[0x11];
  }
  else {
    lVar3 = arg1[0x11];
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_0123b010();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  *this_ptr = puVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}

