// Function: FUN_01690050
// Address: 01690050
// Size: 523 bytes
// Class: MUAraModelManager
// String references:
//   "plugInWrapper->_isEditorRenderer"
//   "regionSequence->getDocumentController() == plugInWrapper->_documentController"
//   "!plugInWrapper->getPlaybackRegionsForPreview()->getCount()"
//   "!plugInWrapper->_regionSequencesForPreview->containsObjectIdenticalTo(regionSequence)"
//   "provided object ref is invalid"
//   "call required from document main thread"
// === MUAraModelManager properties ===
//                   _orderIndex
//                   _timelineProvidedByHost
//                   _hostProvidedScaleTuningSequence
//                   _hostProvidedScaleModeSequence
//                   _hostProvidedChordSequence
//                   _regionSequences
//                   _musicalContext
//                   _sequenceTracksRootTrack
//                   _plugInDocument
//                   _compareDocument
//                   _lastTrackRange
//                   _modifiedRange
//                   _plugInHostTrack


void FUN_01690050(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t arg1;
  int64_t this_ptr;
  int64_t in_stack_ffffffffffffffc0;
  char local_38;
  
  FUN_00da7190();
  if ((this_ptr == 0) || (*(int64_t *)(this_ptr + 0x28) == 0)) {
    FUN_016aea20();
  }
  else {
    FUN_00d50b00();
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      FUN_016aea20();
    }
    else if (*(char *)(this_ptr + 0xa6) == '\0') {
      FUN_016aea20();
    }
    else if ((arg1 == 0) || (cVar2 = FUN_012c91b0(), cVar2 == '\0')) {
      FUN_016aea20();
    }
    else {
      FUN_00d50b00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c89b0();
      lVar1 = *(int64_t *)(this_ptr + 0x98);
      if ((local_38 != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
        FUN_00d50b20();
      }
      if (in_stack_ffffffffffffffc0 == lVar1) {
        if (*(int *)(*(int64_t *)(this_ptr + 0xb8) + 0xc) == 0) {
          lVar1 = *(int64_t *)(this_ptr + 0xb0);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          if (*(int *)(lVar1 + 0xc) != 0) {
            FUN_016aea20();
          }
          FUN_00d50b20();
        }
        cVar2 = FUN_00d24090();
        if (cVar2 == '\0') {
          FUN_01690310();
        }
        else {
          FUN_016aea20();
        }
      }
      else {
        FUN_016aea20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00da71b0();
  return;
}

