// Function: FUN_0168e5c0
// Address: 0168e5c0
// Size: 598 bytes
// Class: MUAraModelManager
// String references:
//   "false && \"changing playback regions for playback renderers requires setActive(false)\""
//   "false && \"changing playback regions for playback renderers requires uninitialize()\""
//   "false && \"changing playback regions for playback renderers requires -deallocateRenderResources\""
//   "false && \"changing playback regions for playback renderers requires temporarily disabling renderin...
//   "plugInWrapper->_isPlaybackRenderer"
//   "playbackRegion->getDocumentController() == plugInWrapper->_documentController"
//   "!plugInWrapper->getPlaybackRegionsForPlayback()->containsObjectIdenticalTo(playbackRegion)"
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


void FUN_0168e5c0(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  char cVar3;
  uint32_t uVar4;
  void *pvVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t in_stack_ffffffffffffffb8;
  char local_40;
  
  FUN_00da7190();
  if ((this_ptr == (int64_t *)0x0) || (this_ptr[5] == 0)) {
    FUN_016aea20();
    goto LAB_0168e7fe;
  }
  FUN_00d50b00();
  cVar2 = FUN_0168a0d0();
  if (cVar2 == '\0') {
    FUN_016aea20();
  }
  else if (*(char *)((int64_t)this_ptr + 0xa5) == '\0') {
    FUN_016aea20();
  }
  else {
    cVar2 = (**(code **)(*this_ptr + 0x4c8))();
    if (cVar2 != '\0') {
      uVar4 = FUN_00bd1920();
      param_1 = 0x168e8c0;
      switch(uVar4) {
      case 0xb:
        break;
      case 0xc:
        break;
      default:
        break;
      case 0xf:
        goto switchD_0168e649_caseD_f;
      case 0x10:
      }
      param_1 = 0x168e8c0;
      FUN_016aea20();
    }
switchD_0168e649_caseD_f:
    if ((arg1 == 0) || (cVar3 = FUN_01658870(), cVar3 == '\0')) {
      FUN_016aea20();
    }
    else {
      FUN_00d50b00();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01654a00();
      lVar1 = this_ptr[0x13];
      if ((local_40 != '\0') && (in_stack_ffffffffffffffb8 != 0)) {
        FUN_00d50b20();
      }
      if (in_stack_ffffffffffffffb8 == lVar1) {
        lVar1 = this_ptr[0x15];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        cVar3 = FUN_00d24090();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          FUN_0168e920();
          if (cVar2 != '\0') {
            (**(code **)(*this_ptr + 0x4d0))();
          }
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
  }
  FUN_00d50b20();
LAB_0168e7fe:
  FUN_00da71b0();
  return;
}

