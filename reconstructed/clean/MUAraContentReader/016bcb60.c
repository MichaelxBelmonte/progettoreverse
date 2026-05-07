// Function: FUN_016bcb60
// Address: 016bcb60
// Size: 711 bytes
// Class: MUAraContentReader
// String references:
//   "!playbackRegion->getAudioModification()->isDeactivatedForUndoHistory()"
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


uint32_t FUN_016bcb60(void* param_1,char param_2)

{
  char cVar1;
  uint32_t uVar2;
  void *pvVar3;
  int64_t local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01657380();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_01650890();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    if (g_027cb0f4 != '\0') {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01654a00();
      cVar1 = (**(code **)(*local_40 + 0x3a0))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar1 != '\0') {
        if (param_2 != '\0') {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0165a070();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012eb770();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 == (int64_t *)0x0) {
            return 0;
          }
        }
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165a070();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        uVar2 = FUN_0172c2f0();
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_38 != '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
            return uVar2;
          }
          return uVar2;
        }
        return uVar2;
      }
    }
  }
  else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
    (**g_02802f60)();
    return 0;
  }
  return 0;
}

