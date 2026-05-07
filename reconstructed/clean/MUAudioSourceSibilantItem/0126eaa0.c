// Function: FUN_0126eaa0
// Address: 0126eaa0
// Size: 729 bytes
// Class: MUAudioSourceSibilantItem
// String references:
//   "MUAudioSourceSibilantItem"
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


int64_t * FUN_0126eaa0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  void *pvVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t **pplVar9;
  int64_t arg1;
  int64_t *this_ptr;
  int local_50;
  int64_t *local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(arg1 + 0xe0);
  if (1 < *(int *)(lVar1 + 0xc)) {
    local_50 = -1;
LAB_0126eb03:
    while( true ) {
      lVar5 = (int64_t)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_50) break;
      lVar8 = *(int64_t *)(lVar1 + 0x10);
      lVar5 = *(int64_t *)(lVar8 + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((void*)lVar8);
      pVar7 = (void*)lVar8;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      if (local_38 == '\0') goto LAB_0126ebb0;
      if (local_40 != (int64_t *)0x0) goto LAB_0126ebe0;
    }
    FUN_0015edf0();
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
LAB_0126ebb0:
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_0126ebe0:
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    plVar2 = local_40;
    if ((g_027c0190 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_027910a8 = FUN_007ef2d0();
      g_02791090 = "MUAudioSourceSibilantItem";
      g_02791098 = 200;
      g_027910a0 = FUN_01103980;
      g_027910b0 = 0;
      ram_00000000027910b8 = 0;
      g_027910c0 = 0;
      ram_00000000027910c8 = 0;
      g_027910d0 = 0;
      ram_00000000027910d8 = 0;
      g_027910e0 = 0;
      ram_00000000027910e8 = 0;
      g_027910f0 = 0;
      ram_00000000027910f8 = 0;
      g_02791100 = 0;
      ram_0000000002791108 = 0;
      g_02791110 = 0;
      ram_0000000002791118 = 0;
      g_02791120 = 0;
      ram_0000000002791128 = 0;
      g_02791130 = 0;
      ram_0000000002791138 = 0;
      g_02791140 = 0;
      ram_0000000002791148 = 0;
      g_02791150 = 0;
      ___cxa_guard_release();
    }
    pplVar9 = (int64_t **)&g_02802688;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar9 = &local_40;
      if (cVar3 == '\0') {
        pplVar9 = (int64_t **)&g_02802688;
      }
    }
    plVar2 = *pplVar9;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar5;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      FUN_0015edf0();
      return this_ptr;
    }
    FUN_00d50b20();
  }
  goto LAB_0126eb03;
}

