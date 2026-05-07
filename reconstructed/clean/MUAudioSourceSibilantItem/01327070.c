// Function: FUN_01327070
// Address: 01327070
// Size: 964 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void FUN_01327070(void* param_1)

{
  int64_t lVar1;
  uint32_t uVar2;
  void *pvVar3;
  void* pVar4;
  int64_t this_ptr;
  uint32_t uVar5;
  
  if (((*(int64_t *)(this_ptr + 0x1f8) == 0) && (*(int64_t *)(this_ptr + 0x200) == 0)) &&
     (*(int64_t *)(this_ptr + 0x148) != 0)) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar2 = FUN_0141bab0();
    pVar4 = 0x132745c;
    uVar5 = g_02390124;
    param_1 = 0x132745c;
    switch(uVar2) {
    case 1:
      lVar1 = *(int64_t *)(this_ptr + 0x148);
      pVar4 = 0x132745c;
      if (lVar1 != 0) {
        pVar4 = 0x132745c;
        FUN_00d50b00();
      }
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0141bae0();
      uVar5 = g_0239011c;
      if (lVar1 != 0) {
        FUN_00d50b20();
        uVar5 = g_0239011c;
      }
      break;
    case 2:
      break;
    default:
      goto switchD_013273c1_caseD_3;
    }
  }
  else {
switchD_013273c1_caseD_3:
    pVar4 = param_1;
    uVar5 = g_0239011c;
  }
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2e00();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2e80();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2ec0();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2f00();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2f40(g_0239011c);
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2f80();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2fc0(uVar5);
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b3000(g_02390124);
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b3060(g_02390124);
  return;
}

