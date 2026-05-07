// Function: FUN_01328810
// Address: 01328810
// Size: 713 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void FUN_01328810(void)

{
  int64_t lVar1;
  void*puVar2;
  void *pvVar3;
  void*puVar4;
  void*puVar5;
  int64_t arg1;
  void*this_ptr;
  int iVar6;
  int local_50;
  int64_t local_40;
  char local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar4 = &g_02572358;
  *puVar2 = &g_02572358;
  (*g_02572370)();
  puVar5 = *(void**)(arg1 + 200);
  if (puVar5 != (void*)0x0) {
    local_50 = -1;
LAB_013288ab:
    while (local_50 = local_50 + 1, local_50 < *(int *)(puVar5 + 0xc)) {
      pvVar3 = _pthread_getspecific((void*)*(void*)(puVar5 + 0x10));
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc000();
      if (local_38 == '\0') goto LAB_01328950;
      if (local_40 != 0) goto LAB_01328980;
    }
    FUN_0131c8b0();
    puVar4 = puVar5;
  }
  lVar1 = *(int64_t *)(arg1 + 0xd8);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar6 = 0;
      do {
        pvVar3 = _pthread_getspecific((void*)puVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc000();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            goto LAB_01328ab0;
          }
        }
        else if (local_40 != 0) {
LAB_01328ab0:
          local_38 = '\0';
          FUN_00d235a0();
          FUN_00d50b20();
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar1 + 0xc));
    }
    FUN_013dc230();
  }
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
LAB_01328950:
  if (local_40 != 0) {
    FUN_00d50b00();
LAB_01328980:
    local_38 = '\0';
    FUN_00d235a0();
    FUN_00d50b20();
  }
  goto LAB_013288ab;
}

