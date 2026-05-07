// Function: FUN_0123d700
// Address: 0123d700
// Size: 520 bytes
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


void FUN_0123d700(int64_t param_1,uint64_t param_2,uint64_t param_3,uint8_t param_4)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  void*arg1;
  void*this_ptr;
  int64_t local_88;
  char local_80;
  uint64_t local_78;
  uint8_t local_70;
  uint64_t local_68;
  int64_t local_50;
  char local_48;
  
  lVar3 = param_1;
  local_68 = param_3;
  plVar1 = (int64_t *)FUN_00e8fc40();
  pVar4 = (void*)lVar3;
  FUN_0123f100();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(pVar4);
  plVar6 = plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar6 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  FUN_0123c760();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  if (plVar6[0x14] != local_50) {
    FUN_00d64850();
    lVar3 = plVar6[0x14];
    if (lVar3 != local_50) {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      plVar6[0x14] = local_50;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if (plVar6[0x16] != 0) {
      plVar6[0x16] = 0;
      FUN_00d50b20();
    }
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_78 = *arg1;
  local_70 = 0;
  uVar5 = local_68;
  FUN_0123cbf0(local_68,&local_78,param_4);
  pVar4 = (void*)uVar5;
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  plVar6 = plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar6 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  plVar6[0x13] = param_1;
  *this_ptr = plVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}

