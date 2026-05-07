// ===================================================================
// MDDetectionElementInsp — Complete reconstructed pseudocode
// 3 functions
// ===================================================================

// Registered properties (33):
//                   _distinctSeparationButton
//                   _assignedAttackButton
//                   _ampClaimLabel
//                   _asdObserver
//                   _araMusicalContext
//                   _editorDescriptions
//                   _cycleTimeJump
//                   _rootDisplayGroup
//                   _lastAutosavedUndoStackFrame
//                   _hadChanges
//                   _filepath
//                   _preselectedDirectory
//                   _currentPlaybackController
//                   _metaDocumentController
//                   _plugInHostDocument
//                   _playbackRenderer
//                   _renderParameter
//                   _timeProgressor
//                   _timelineUpdateDate
//                   _isNewDocument
//                   _attachedDetections
//                   _jobProgressInfo
//                   _isDetectionInProgress
//                   _audioDeviceDidChange
//                   _descriptionTypeDidChange
//                   _defaultChannelDidChange
//                   _undoManagerDidPerform
//                   _subTracksChangedObserver
//                   _araElementAnalyzerWillRunNotification
//                   _sequenceTracks
//                   _queuedJobs
//                   _pendingJobs
//                   _pendingJobsLock


// ============================================================
// 007ea750
// ============================================================
// Function: FUN_007ea750
// Address: 007ea750
// Size: 678 bytes
// Class: MDDetectionElementInsp
// === MDDetectionElementInsp properties ===
//                   _distinctSeparationButton
//                   _assignedAttackButton
//                   _ampClaimLabel
//                   _asdObserver
//                   _araMusicalContext
//                   _editorDescriptions
//                   _cycleTimeJump
//                   _rootDisplayGroup
//                   _lastAutosavedUndoStackFrame
//                   _hadChanges
//                   _filepath
//                   _preselectedDirectory
//                   _currentPlaybackController
//                   _metaDocumentController
//                   _plugInHostDocument
//                   _playbackRenderer
//                   _renderParameter
//                   _timeProgressor
//                   _timelineUpdateDate
//                   _isNewDocument
//                   _attachedDetections
//                   _jobProgressInfo
//                   _isDetectionInProgress
//                   _audioDeviceDidChange
//                   _descriptionTypeDidChange
//                   _defaultChannelDidChange
//                   _undoManagerDidPerform
//                   _subTracksChangedObserver
//                   _araElementAnalyzerWillRunNotification
//                   _sequenceTracks
//   ... +3 more


void FUN_007ea750(uint64_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  int64_t *plVar6;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  *(void*)(this_ptr + 0x38) = 0;
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  FUN_007e3560();
  if (*(int *)(*(int64_t *)(this_ptr + 0x28) + 0xc) == 0) {
    FUN_00172bc0();
    plVar6 = g_0270b810;
    if (g_0270b810 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38 = plVar6;
    local_30 = '\0';
    cVar4 = FUN_00ca18c0();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    lVar2 = g_02729518;
    if (cVar4 == '\0') {
      if (g_02729518 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_02729520;
      local_68 = lVar2;
      local_60 = '\x01';
      if (g_02729520 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar3;
      local_50 = '\x01';
      FUN_01f6ca30(param_1,&local_58);
      plVar6 = local_38;
      if (local_38 == (int64_t *)0x0) {
        plVar6 = (int64_t *)0x0;
        bVar1 = false;
      }
      else if (local_30 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_30 = '\0';
        bVar1 = true;
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (g_02729518 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_0272f688;
      if (g_0272f688 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar3;
      local_70 = '\x01';
      FUN_01f6ca30(param_1,&local_78);
      plVar6 = local_38;
      if (local_38 == (int64_t *)0x0) {
        plVar6 = (int64_t *)0x0;
        bVar1 = false;
      }
      else if (local_30 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_30 = '\0';
        bVar1 = true;
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    local_40 = '\0';
    local_48 = plVar5;
    (**(code **)(*plVar6 + 0x5d8))();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar1) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_007e59d0();
    FUN_007e6670();
    FUN_007e8ac0();
    FUN_00172bc0();
    FUN_00d216c0();
    if (*(int64_t *)(this_ptr + 0x20) != 0) {
      *(void*)(this_ptr + 0x20) = 0;
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 007eb210
// ============================================================
// Function: FUN_007eb210
// Address: 007eb210
// Size: 1110 bytes
// Class: MDDetectionElementInsp
// String references:
//   "MDDetectionElementInsp"
//   "handleDistinctSeparationToggle"
//   "handleAssignedAttacksToggle"
//   "handleAudioSourceDescriptionChanged"
// === MDDetectionElementInsp properties ===
//                   _distinctSeparationButton
//                   _assignedAttackButton
//                   _ampClaimLabel
//                   _asdObserver
//                   _araMusicalContext
//                   _editorDescriptions
//                   _cycleTimeJump
//                   _rootDisplayGroup
//                   _lastAutosavedUndoStackFrame
//                   _hadChanges
//                   _filepath
//                   _preselectedDirectory
//                   _currentPlaybackController
//                   _metaDocumentController
//                   _plugInHostDocument
//                   _playbackRenderer
//                   _renderParameter
//                   _timeProgressor
//                   _timelineUpdateDate
//                   _isNewDocument
//                   _attachedDetections
//                   _jobProgressInfo
//                   _isDetectionInProgress
//                   _audioDeviceDidChange
//                   _descriptionTypeDidChange
//                   _defaultChannelDidChange
//                   _undoManagerDidPerform
//                   _subTracksChangedObserver
//                   _araElementAnalyzerWillRunNotification
//                   _sequenceTracks
//   ... +3 more


void FUN_007eb210(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_0280d150 = "handleDistinctSeparationToggle";
      g_0280d158 = &g_02718100;
      g_0280d160 = 0;
      g_0280d168 = &g_0272f6e0;
      g_0280d170 = FUN_007eec30;
      g_0280d178 = FUN_007ed8f0;
      g_0280d180 = 0;
      ram_000000000280d188 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280d198 = "handleAssignedAttacksToggle";
      g_0280d1a0 = &g_02718100;
      g_0280d1a8 = 0;
      g_0280d1b0 = &g_0272f6e0;
      g_0280d1b8 = FUN_007eec30;
      g_0280d1c0 = FUN_007ee1b0;
      g_0280d1c8 = 0;
      ram_000000000280d1d0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280d1e0 = "handleAudioSourceDescriptionChanged";
      g_0280d1e8 = &g_02718100;
      g_0280d1f0 = 0;
      g_0280d1f8 = &g_0272f6e4;
      g_0280d200 = FUN_007eecc0;
      g_0280d208 = FUN_007eb690;
      g_0280d210 = 0;
      ram_000000000280d218 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 005af2c0
// ============================================================
// Function: FUN_005af2c0
// Address: 005af2c0
// Size: 675 bytes
// Class: MDDetectionElementInsp
// String references:
//   "MDDetectionElementInsp"
// === MDDetectionElementInsp properties ===
//                   _distinctSeparationButton
//                   _assignedAttackButton
//                   _ampClaimLabel
//                   _asdObserver
//                   _araMusicalContext
//                   _editorDescriptions
//                   _cycleTimeJump
//                   _rootDisplayGroup
//                   _lastAutosavedUndoStackFrame
//                   _hadChanges
//                   _filepath
//                   _preselectedDirectory
//                   _currentPlaybackController
//                   _metaDocumentController
//                   _plugInHostDocument
//                   _playbackRenderer
//                   _renderParameter
//                   _timeProgressor
//                   _timelineUpdateDate
//                   _isNewDocument
//                   _attachedDetections
//                   _jobProgressInfo
//                   _isDetectionInProgress
//                   _audioDeviceDidChange
//                   _descriptionTypeDidChange
//                   _defaultChannelDidChange
//                   _undoManagerDidPerform
//                   _subTracksChangedObserver
//                   _araElementAnalyzerWillRunNotification
//                   _sequenceTracks
//   ... +3 more


void FUN_005af2c0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a2970();
  *this_ptr = &g_0250ff20;
  FUN_005af640();
  FUN_005af970();
  FUN_005afca0();
  FUN_005affd0();
  FUN_005b0300();
  *(void*)(this_ptr + 0x1f) = 0;
  // [STATIC_INIT: property registration]
  if (g_027181bb == '\0') {
    FUN_005b0630();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xf9) = 0;
  // [STATIC_INIT: property registration]
  if (g_027181bb == '\0') {
    FUN_005b07c0();
    FUN_00e87980();
  }
  return;
}

