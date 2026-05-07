// Function: FUN_01327470
// Address: 01327470
// Size: 762 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void FUN_01327470(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t this_ptr;
  void* pVar5;
  int64_t local_88;
  char local_80;
  int64_t local_58;
  char local_50;
  int local_40;
  
  *(void*)(this_ptr + 0x38) = 0;
  if (*(int64_t *)(this_ptr + 0x200) != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb480();
    if ((local_80 == '\0') && (local_88 != 0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_88 != 0) {
      if (0 < *(int *)(local_88 + 0xc)) {
        pVar5 = 0;
        do {
          lVar1 = local_58;
          pvVar2 = _pthread_getspecific(pVar5);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0124c6e0();
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
              goto LAB_01327640;
            }
          }
          else if (local_58 != 0) {
LAB_01327640:
            local_50 = '\0';
            local_58 = 0;
            local_40 = -1;
            while( true ) {
              lVar3 = (int64_t)local_40;
              local_40 = local_40 + 1;
              if (*(int *)(lVar1 + 0xc) <= local_40) break;
              lVar4 = *(int64_t *)(lVar1 + 0x10);
              local_58 = *(int64_t *)(lVar4 + 8 + lVar3 * 8);
              pvVar2 = _pthread_getspecific((void*)lVar4);
              lVar3 = local_58;
              if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                lVar3 = *(int64_t *)
                         (local_58 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
              }
              if (*(int64_t *)(lVar3 + 0x208) != 0) {
                FUN_00d64850();
                *(void*)(lVar3 + 0x208) = 0;
                FUN_00d64910();
              }
            }
            FUN_00115190();
            FUN_00d50b20();
          }
          pVar5 = pVar5 + 1;
        } while ((int)pVar5 < *(int *)(local_88 + 0xc));
      }
      FUN_00115e00();
      FUN_00d50b20();
    }
  }
  FUN_00d505d0();
  return;
}

