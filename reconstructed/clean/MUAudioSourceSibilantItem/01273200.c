// Function: FUN_01273200
// Address: 01273200
// Size: 1144 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void* FUN_01273200(void)

{
  int64_t lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  void*puVar5;
  void*puVar6;
  int64_t lVar7;
  void *pvVar8;
  int64_t lVar9;
  void*puVar10;
  int64_t *plVar11;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_70;
  char local_68;
  int local_58;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*pcVar2)();
  lVar1 = *arg1;
  if (lVar1 != 0) {
    local_68 = '\0';
    local_70 = 0;
    local_58 = -1;
    while( true ) {
      lVar7 = (int64_t)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_58) break;
      local_70 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar7 * 8);
      pvVar8 = _pthread_getspecific((void*)*(int64_t *)(lVar1 + 0x10));
      lVar7 = local_70;
      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        lVar7 = *(int64_t *)(local_70 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
      }
      if (*(int64_t *)(lVar7 + 0x100) != 0) {
        iVar3 = FUN_00d237a0();
        if (iVar3 == -1) {
          FUN_00d21140();
          puVar10 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar10 = &g_02572358;
          (*pcVar2)();
          FUN_00d21140();
          FUN_00d50b20();
        }
        FUN_00d21140();
      }
    }
    FUN_001159b0();
  }
  plVar11 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar11 + 0x18))();
  FUN_012e8850();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if (local_70 == 0) {
    *this_ptr = plVar11;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    if (0 < *(int *)(local_70 + 0xc)) {
      iVar3 = 0;
      do {
        iVar4 = FUN_00d23d20();
        lVar1 = *(int64_t *)(puVar5[2] + (int64_t)iVar4 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_0076f270();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(local_70 + 0xc));
    }
    FUN_000be170();
    *this_ptr = plVar11;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  if (puVar6 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

