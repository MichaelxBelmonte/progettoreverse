// Function: FUN_01270af0
// Address: 01270af0
// Size: 1301 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void* FUN_01270af0(void)

{
  bool bVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  void*puVar5;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar6;
  bool bVar7;
  int64_t local_40;
  char local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5 = &g_02572358;
  *puVar2 = &g_02572358;
  (*g_02572370)();
  bVar7 = arg1 == 0;
  if (bVar7) {
    arg1 = 0;
  }
  else {
    FUN_00d50b00();
  }
  bVar7 = !bVar7;
  while( true ) {
    bVar1 = bVar7;
    lVar6 = arg1;
    pvVar3 = _pthread_getspecific((void*)puVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      lVar4 = *(int64_t *)(lVar6 + 0xa8);
    }
    else {
      lVar4 = *(int64_t *)
               (*(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0xa8);
    }
    if (lVar4 == 0) break;
    pvVar3 = _pthread_getspecific((void*)puVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) break;
    pvVar3 = _pthread_getspecific((void*)puVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      if (*(int64_t *)(lVar6 + 0xa8) == 0) goto LAB_01270c49;
LAB_01270ca0:
      pvVar3 = _pthread_getspecific((void*)puVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff70();
      if (local_40 != lVar6) goto LAB_01270ce9;
LAB_01270c60:
      arg1 = lVar6;
      bVar7 = bVar1;
      if ((bVar1) || (local_40 == 0)) goto LAB_01270d4a;
      bVar7 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar7 = true;
LAB_01270d4a:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (*(int64_t *)
           (*(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0xa8) != 0
         ) goto LAB_01270ca0;
LAB_01270c49:
      local_38 = '\0';
      local_40 = 0;
      if (lVar6 == 0) goto LAB_01270c60;
LAB_01270ce9:
      arg1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        bVar7 = true;
        if ((bVar1) && (lVar6 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01270d4a;
      }
      bVar7 = true;
      if ((bVar1) && (lVar6 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d21140();
  local_40 = lVar6;
  while( true ) {
    lVar6 = local_40;
    pvVar3 = _pthread_getspecific((void*)puVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      lVar4 = *(int64_t *)(local_40 + 0xa0);
    }
    else {
      lVar4 = *(int64_t *)
               (*(int64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) +
               0xa0);
    }
    if (lVar4 == 0) break;
    pvVar3 = _pthread_getspecific((void*)puVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    if (local_40 == 0) break;
    pvVar3 = _pthread_getspecific((void*)puVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      if (*(int64_t *)(local_40 + 0xa0) == 0) goto LAB_01270e89;
LAB_01270ee0:
      pvVar3 = _pthread_getspecific((void*)puVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff00();
LAB_01270ea0:
      lVar4 = lVar6;
      bVar7 = bVar1;
      if ((!bVar1) && (local_40 != 0)) {
        FUN_00d50b00();
        local_40 = lVar6;
LAB_01270f75:
        lVar4 = local_40;
        bVar7 = true;
      }
    }
    else {
      if (*(int64_t *)
           (*(int64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0xa0)
          != 0) goto LAB_01270ee0;
LAB_01270e89:
      local_40 = 0;
      if (lVar6 == 0) goto LAB_01270ea0;
      local_40 = 0;
      lVar4 = local_40;
      bVar7 = true;
      if ((bVar1) && (lVar6 != 0)) {
        FUN_00d50b20();
        goto LAB_01270f75;
      }
    }
    bVar1 = bVar7;
    FUN_00d21140();
    local_40 = lVar4;
  }
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar1) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

