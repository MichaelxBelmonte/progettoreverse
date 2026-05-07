// Function: FUN_0126f100
// Address: 0126f100
// Size: 565 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void* FUN_0126f100(void* param_1)

{
  double dVar1;
  void *pvVar2;
  int64_t lVar3;
  void*puVar4;
  int64_t *plVar5;
  uint32_t uVar6;
  int64_t *local_40;
  char local_38;
  
  FUN_0125e7c0();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return (void*)0x0;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) {
    return (void*)0x0;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_0126f20c;
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) {
LAB_0126f20c:
    puVar4 = &g_02802501;
    goto LAB_0126f31c;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc240();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_0126f234;
    }
LAB_0126f281:
    puVar4 = &g_02802501;
  }
  else {
    if (local_40 == (int64_t *)0x0) goto LAB_0126f281;
LAB_0126f234:
    pvVar2 = _pthread_getspecific(param_1);
    plVar5 = local_40;
    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      plVar5 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
    dVar1 = (double)(**(code **)(*plVar5 + 0x380))(0);
    if ((float)dVar1 <= g_023d59b4) {
      pvVar2 = _pthread_getspecific(param_1);
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        local_40 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar6 = FUN_014bb310();
      dVar1 = (double)(**(code **)(*local_40 + 0x3a8))(0,uVar6);
      puVar4 = (void*)CONCAT71(0x28025,(float)dVar1 <= g_023d59b4);
    }
    else {
      puVar4 = (void*)0x0;
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_0126f31c:
  FUN_00d50b20();
  return puVar4;
}

