// Function: FUN_016b9ed0
// Address: 016b9ed0
// Size: 597 bytes
// Class: MUAraContentReader
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "audioSource->getDocumentController() == documentController"
//   "MUAraContentReader::isEventTypeSupported((GNInt)contentType)"
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


byte FUN_016b9ed0(void* param_1)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    bVar2 = 0;
    if ((g_02802f60 != (void*)0x0) && (bVar2 = 0, *g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      bVar2 = 0;
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
        bVar2 = 0;
      }
    }
    else if ((arg1 == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
      bVar2 = 0;
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == this_ptr) {
        cVar1 = FUN_0172c0d0();
        if (cVar1 == '\0') {
          bVar2 = 0;
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
            bVar2 = 0;
          }
        }
        else {
          FUN_016acc10();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_01667e90();
          bVar2 = 1;
          if (cVar1 == '\0') {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            bVar2 = FUN_01667df0();
            bVar2 = bVar2 ^ 1;
          }
        }
      }
      else {
        bVar2 = 0;
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return bVar2;
}

