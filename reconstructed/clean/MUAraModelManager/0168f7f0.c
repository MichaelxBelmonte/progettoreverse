// Function: FUN_0168f7f0
// Address: 0168f7f0
// Size: 557 bytes
// Class: MUAraModelManager
// String references:
//   "playbackRegion->getDocumentController() == plugInWrapper->_documentController"
//   "plugInWrapper->getPlaybackRegionsForPlayback()->containsObjectIdenticalTo(playbackRegion)"
//   "MUAraModelManager::getHostUsesAra1()"
//   "!plugInWrapper->getAudioProcessor()->isRunning()"
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


void FUN_0168f7f0(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  int64_t arg1;
  int64_t this_ptr;
  int64_t in_stack_ffffffffffffffb8;
  char local_40;
  
  FUN_00da7190();
  cVar3 = FUN_016ae5f0();
  if (cVar3 == '\0') {
    FUN_016aea20();
  }
  else if ((this_ptr == 0) || (*(int64_t *)(this_ptr + 0x28) == 0)) {
    FUN_016aea20();
  }
  else {
    FUN_00d50b00();
    cVar3 = FUN_0168a0d0();
    if (cVar3 == '\0') {
      FUN_016aea20();
    }
    else {
      plVar1 = *(int64_t **)(this_ptr + 0x28);
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x390))();
      FUN_00d50b20();
      if (cVar3 == '\0') {
        if ((arg1 == 0) || (cVar3 = FUN_01658870(), cVar3 == '\0')) {
          FUN_016aea20();
        }
        else {
          FUN_00d50b00();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01654a00();
          lVar2 = *(int64_t *)(this_ptr + 0x98);
          if ((local_40 != '\0') && (in_stack_ffffffffffffffb8 != 0)) {
            FUN_00d50b20();
          }
          if (in_stack_ffffffffffffffb8 == lVar2) {
            lVar2 = *(int64_t *)(this_ptr + 0xa8);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            cVar3 = FUN_00d24090();
            if (cVar3 == '\0') {
              FUN_016aea20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            FUN_0168eed0();
          }
          else {
            FUN_016aea20();
          }
          FUN_00d50b20();
        }
      }
      else {
        FUN_016aea20();
      }
    }
    FUN_00d50b20();
  }
  FUN_00da71b0();
  return;
}

