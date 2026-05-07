// Function: FUN_016ba6a0
// Address: 016ba6a0
// Size: 658 bytes
// Class: MUAraContentReader
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "audioSource->getDocumentController() == documentController"
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


int FUN_016ba6a0(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t arg1;
  int64_t this_ptr;
  int iVar4;
  int64_t lVar5;
  int64_t local_60;
  char local_58;
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    iVar4 = 0;
    if ((g_02802f60 != (void*)0x0) && (iVar4 = 0, *g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      iVar4 = 0;
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
        iVar4 = 0;
      }
    }
    else if ((arg1 == 0) || (cVar2 = FUN_0166db10(), cVar2 == '\0')) {
      iVar4 = 0;
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
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 == this_ptr) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01662650();
        if ((local_58 == '\0') && (local_60 != 0)) {
          FUN_00d50b00();
        }
        lVar1 = g_028ad890;
        if (g_028ad890 == 0) {
LAB_016ba90a:
          iVar4 = 0;
        }
        else {
          lVar5 = 0;
          do {
            if (*(int *)(lVar1 + 0xc) <= (int)lVar5) {
              FUN_00018280();
              goto LAB_016ba90a;
            }
            cVar2 = (**(code **)(**(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8) + 0x50))()
            ;
            lVar5 = lVar5 + 1;
          } while (cVar2 == '\0');
          FUN_00018280();
          iVar4 = (int)lVar5 + -1;
        }
        if (local_60 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        iVar4 = 0;
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return iVar4;
}

