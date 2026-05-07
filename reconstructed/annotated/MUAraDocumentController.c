// ===== MUAraDocumentController — Annotated small functions =====
// 23 readable functions
// Known properties: 40
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more

// ==================================================
// @016a1890 (2625 bytes) — calculation
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  int iVar1;
  undefined8 *this;
  
  FUN_00d4ff80();
  this[2] = &DAT_024c15b0;
  if (DAT_0278c930 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ceef0 = "GNOperationProgressObserver";
      DAT_026cef00 = 0;
      _DAT_026ceef8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *this = &DAT_025f89b0;
  this[2] = &DAT_025f8d70;
  FUN_016a2460();
  FUN_016a2790();
  this[5] = 0;
  if (DAT_027cb3b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027cb300 = FUN_00d4fe50();
      _DAT_027cb2e8 = "MUAraDocumentController";
      _DAT_027cb2f0 = 0x80;
      _DAT_027cb2f8 = FUN_016be860;
      _DAT_027cb308 = 0;
      uRam00000000027cb310 = 0;
      _DAT_027cb318 = 0;
      _DAT_027cb390 = 0;
      uRam00000000027cb398 = 0;
      _DAT_027cb3a0 = 0;
      DAT_027cb3a2 = 1;
      _DAT_027cb320 = 0;
      uRam00000000027cb328 = 0;
      _DAT_027cb330 = 0;
      uRam00000000027cb338 = 0;
      _DAT_027cb340 = 0;
      uRam00000000027cb348 = 0;
      _DAT_027cb350 = 0;
      uRam00000000027cb358 = 0;
      _DAT_027cb360 = 0;
      uRam00000000027cb368 = 0;
      _DAT_027cb370 = 0;
      uRam00000000027cb378 = 0;
      _DAT_027cb380 = 0;
      uRam00000000027cb388 = 0;
      DAT_027cb3ab = 0;
      _DAT_027cb3a3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027cb3a3 == '\0') {
    FUN_016a2ac0();
    FUN_00e87980();
  }
  this[6] = 0;
  if (DAT_027cb3b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027cb300 = FUN_00d4fe50();
      _DAT_027cb2e8 = "MUAraDocumentController";
      _DAT_027cb2f0 = 0x80;
      _DAT_027cb2f8 = FUN_016be860;
      _DAT_027cb308 = 0;
      uRam00000000027cb310 = 0;
      _DAT_027cb318 = 0;
      _DAT_027cb390 = 0;
      uRam00000000027cb398 = 0;
      _DAT_027cb3a0 = 0;
      DAT_027cb3a2 = 1;
      _DAT_027cb320 = 0;
      uRam00000000027cb328 = 0;
      _DAT_027cb330 = 0;
      uRam00000000027cb338 = 0;
      _DAT_027cb340 = 0;
      uRam00000000027cb348 = 0;
      _DAT_027cb350 = 0;
      uRam00000000027cb358 = 0;
      _DAT_027cb360 = 0;
      uRam00000000027cb368 = 0;
      _DAT_027cb370 = 0;
      uRam00000000027cb378 = 0;
      _DAT_027cb380 = 0;
      uRam00000000027cb388 = 0;
      DAT_027cb3ab = 0;
      _DAT_027cb3a3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027cb3a3 == '\0') {
    FUN_016a2c50();
    FUN_00e87980();
  }
  FUN_016a2de0();
  FUN_016a3110();
  FUN_016a3440();
  FUN_016a3770();
  FUN_016a3aa0();
  FUN_016a3dd0();
  FUN_016a4100();
  *(undefined1 *)(this + 0xe) = 0;
  if (DAT_027cb3b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027cb300 = FUN_00d4fe50();
      _DAT_027cb2e8 = "MUAraDocumentController";
      _DAT_027cb2f0 = 0x80;
      _DAT_027cb2f8 = FUN_016be860;
      _DAT_027cb308 = 0;
      uRam00000000027cb310 = 0;
      _DAT_027cb318 = 0;
      _DAT_027cb390 = 0;
      uRam00000000027cb398 = 0;
      _DAT_027cb3a0 = 0;
      DAT_027cb3a2 = 1;
      _DAT_027cb320 = 0;
      uRam00000000027cb328 = 0;
      _DAT_027cb330 = 0;
      uRam00000000027cb338 = 0;
      _DAT_027cb340 = 0;
      uRam00000000027cb348 = 0;
      _DAT_027cb350 = 0;
      uRam00000000027cb358 = 0;
      _DAT_027cb360 = 0;
      uRam00000000027cb368 = 0;
      _DAT_027cb370 = 0;
      uRam00000000027cb378 = 0;
      _DAT_027cb380 = 0;
      uRam00000000027cb388 = 0;
      DAT_027cb3ab = 0;
      _DAT_027cb3a3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027cb3a3 == '\0') {
    FUN_016a4430();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x71) = 0;
  if (DAT_027cb3b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027cb300 = FUN_00d4fe50();
      _DAT_027cb2e8 = "MUAraDocumentController";
      _DAT_027cb2f0 = 0x80;
      _DAT_027cb2f8 = FUN_016be860;
      _DAT_027cb308 = 0;
      uRam00000000027cb310 = 0;
      _DAT_027cb318 = 0;
      _DAT_027cb390 = 0;
      uRam00000000027cb398 = 0;
      _DAT_027cb3a0 = 0;
      DAT_027cb3a2 = 1;
      _DAT_027cb320 = 0;
      uRam00000000027cb328 = 0;
      _DAT_027cb330 = 0;
      uRam00000000027cb338 = 0;
      _DAT_027cb340 = 0;
      uRam00000000027cb348 = 0;
      _DAT_027cb350 = 0;
      uRam00000000027cb358 = 0;
      _DAT_027cb360 = 0;
      uRam00000000027cb368 = 0;
      _DAT_027cb370 = 0;
      uRam00000000027cb378 = 0;
      _DAT_027cb380 = 0;
      uRam00000000027cb388 = 0;
      DAT_027cb3ab = 0;
      _DAT_027cb3a3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027cb3a3 == '\0') {
    FUN_016a45c0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x72) = 0;
  if (DAT_027cb3b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027cb300 = FUN_00d4fe50();
      _DAT_027cb2e8 = "MUAraDocumentController";
      _DAT_027cb2f0 = 0x80;
      _DAT_027cb2f8 = FUN_016be860;
      _DAT_027cb308 = 0;
      uRam00000000027cb310 = 0;
      _DAT_027cb318 = 0;
      _DAT_027cb390 = 0;
      uRam00000000027cb398 = 0;
      _DAT_027cb3a0 = 0;
      DAT_027cb3a2 = 1;
      _DAT_027cb320 = 0;
      uRam00000000027cb328 = 0;
      _DAT_027cb330 = 0;
      uRam00000000027cb338 = 0;
      _DAT_027cb340 = 0;
      uRam00000000027cb348 = 0;
      _DAT_027cb350 = 0;
      uRam00000000027cb358 = 0;
      _DAT_027cb360 = 0;
      uRam00000000027cb368 = 0;
      _DAT_027cb370 = 0;
      uRam00000000027cb378 = 0;
      _DAT_027cb380 = 0;
      uRam00000000027cb388 = 0;
      DAT_027cb3ab = 0;
      _DAT_027cb3a3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027cb3a3 == '\0') {
    FUN_016a4750();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x73) = 0;
  if (DAT_027cb3b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027cb300 = FUN_00d4fe50();
      _DAT_027cb2e8 = "MUAraDocumentController";
      _DAT_027cb2f0 = 0x80;
      _DAT_027cb2f8 = FUN_016be860;
      _DAT_027cb308 = 0;
      uRam00000000027cb310 = 0;
      _DAT_027cb318 = 0;
      _DAT_027cb390 = 0;
      uRam00000000027cb398 = 0;
      _DAT_027cb3a0 = 0;
      DAT_027cb3a2 = 1;
      _DAT_027cb320 = 0;
      uRam00000000027cb328 = 0;
      _DAT_027cb330 = 0;
      uRam00000000027cb338 = 0;
      _DAT_027cb340 = 0;
      uRam00000000027cb348 = 0;
      _DAT_027cb350 = 0;
      uRam00000000027cb358 = 0;
      _DAT_027cb360 = 0;
      uRam00000000027cb368 = 0;
      _DAT_027cb370 = 0;
      uRam00000000027cb378 = 0;
      _DAT_027cb380 = 0;
      uRam00000000027cb388 = 0;
      DAT_027cb3ab = 0;
      _DAT_027cb3a3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027cb3a3 == '\0') {
    FUN_016a48e0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x74) = 0;
  if (DAT_027cb3b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027cb300 = FUN_00d4fe50();
      _DAT_027cb2e8 = "MUAraDocumentController";
      _DAT_027cb2f0 = 0x80;
      _DAT_027cb2f8 = FUN_016be860;
      _DAT_027cb308 = 0;
      uRam00000000027cb310 = 0;
      _DAT_027cb318 = 0;
      _DAT_027cb390 = 0;
      uRam00000000027cb398 = 0;
      _DAT_027cb3a0 = 0;
      DAT_027cb3a2 = 1;
      _DAT_027cb320 = 0;
      uRam00000000027cb328 = 0;
      _DAT_027cb330 = 0;
      uRam00000000027cb338 = 0;
      _DAT_027cb340 = 0;
      uRam00000000027cb348 = 0;
      _DAT_027cb350 = 0;
      uRam00000000027cb358 = 0;
      _DAT_027cb360 = 0;
      uRam00000000027cb368 = 0;
      _DAT_027cb370 = 0;
      uRam00000000027cb378 = 0;
      _DAT_027cb380 = 0;
      uRam00000000027cb388 = 0;
      DAT_027cb3ab = 0;
      _DAT_027cb3a3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027cb3a3 == '\0') {
    FUN_016a4a70();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x75) = 0;
  if (DAT_027cb3b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027cb300 = FUN_00d4fe50();
      _DAT_027cb2e8 = "MUAraDocumentController";
      _DAT_027cb2f0 = 0x80;
      _DAT_027cb2f8 = FUN_016be860;
      _DAT_027cb308 = 0;
      uRam00000000027cb310 = 0;
      _DAT_027cb318 = 0;
      _DAT_027cb390 = 0;
      uRam00000000027cb398 = 0;
      _DAT_027cb3a0 = 0;
      DAT_027cb3a2 = 1;
      _DAT_027cb320 = 0;
      uRam00000000027cb328 = 0;
      _DAT_027cb330 = 0;
      uRam00000000027cb338 = 0;
      _DAT_027cb340 = 0;
      uRam00000000027cb348 = 0;
      _DAT_027cb350 = 0;
      uRam00000000027cb358 = 0;
      _DAT_027cb360 = 0;
      uRam00000000027cb368 = 0;
      _DAT_027cb370 = 0;
      uRam00000000027cb378 = 0;
      _DAT_027cb380 = 0;
      uRam00000000027cb388 = 0;
      DAT_027cb3ab = 0;
      _DAT_027cb3a3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027cb3a3 == '\0') {
    FUN_016a4c00();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x76) = 0;
  if (DAT_027cb3b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027cb300 = FUN_00d4fe50();
      _DAT_027cb2e8 = "MUAraDocumentController";
      _DAT_027cb2f0 = 0x80;
      _DAT_027cb2f8 = FUN_016be860;
      _DAT_027cb308 = 0;
      uRam00000000027cb310 = 0;
      _DAT_027cb318 = 0;
      _DAT_027cb390 = 0;
      uRam00000000027cb398 = 0;
      _DAT_027cb3a0 = 0;
      DAT_027cb3a2 = 1;
      _DAT_027cb320 = 0;
      uRam00000000027cb328 = 0;
      _DAT_027cb330 = 0;
      uRam00000000027cb338 = 0;
      _DAT_027cb340 = 0;
      uRam00000000027cb348 = 0;
      _DAT_027cb350 = 0;
      uRam00000000027cb358 = 0;
      _DAT_027cb360 = 0;
      uRam00000000027cb368 = 0;
      _DAT_027cb370 = 0;
      uRam00000000027cb378 = 0;
      _DAT_027cb380 = 0;
      uRam00000000027cb388 = 0;
      DAT_027cb3ab = 0;
      _DAT_027cb3a3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027cb3a3 == '\0') {
    FUN_016a4d90();
    FUN_00e87980();
  }
  FUN_016a4f20();
  return;
}




// ==================================================
// @016b08f0 (1708 bytes) — calculation
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  char *pcVar5;
  longlong this;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong in_stack_ffffffffffffffc0;
  char local_38 [16];
  char local_28 [8];
  
  FUN_00da7190();
  if ((this == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    FUN_00d50b00();
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      FUN_0167ab60();
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01537d40();
      if (*(int *)(local_60 + 0xc) != 0) {
        FUN_0167ab60();
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537d40();
        FUN_00d23310();
        param_1 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_38[0]);
        pcVar5 = local_28;
        if (local_38[0] != '\0') {
          pcVar5 = local_38;
        }
        local_28[0] = local_38[0];
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
        if ((local_28[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_0167ab60();
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01537fd0();
      pVar4 = (pthread_key_t)param_1;
      if (*(int *)(local_60 + 0xc) != 0) {
        FUN_0167ab60();
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537fd0();
        FUN_00d23310();
        pVar4 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_38[0]);
        pcVar5 = local_28;
        if (local_38[0] != '\0') {
          pcVar5 = local_38;
        }
        local_28[0] = local_38[0];
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
        if ((local_28[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_0167ab60();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01537ab0();
      if (*(int *)(local_60 + 0xc) != 0) {
        FUN_0167ab60();
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537ab0();
        FUN_00d23310();
        pcVar5 = local_28;
        if (local_38[0] != '\0') {
          pcVar5 = local_38;
        }
        local_28[0] = local_38[0];
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
        if ((local_28[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_01689520();
      if (*(int *)(local_60 + 0xc) != 0) {
        FUN_01689520();
        FUN_00d23310();
        pcVar5 = &local_70;
        if (local_38[0] != '\0') {
          pcVar5 = local_38;
        }
        local_70 = local_38[0];
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
        if ((local_70 != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      lVar1 = DAT_027cb138;
      if (DAT_027cb138 != 0) {
        FUN_00d50b00();
      }
      local_90 = 0;
      local_88 = '\0';
      FUN_00d40470(&local_90,&stack0xffffffffffffff60,1,3);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
        FUN_00d50b20();
      }
      local_38[0] = '\0';
      FUN_00d23f50();
      if ((local_38[0] != '\0') && (this != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50130();
    }
    FUN_00d50b20();
  }
  FUN_00da71b0();
  return;
}




// ==================================================
// @016b2af0 (1369 bytes) — math_loop
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  double dVar1;
  ulonglong uVar2;
  int iVar3;
  void *pvVar4;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar5;
  pthread_key_t pVar6;
  pthread_key_t pVar7;
  char *pcVar8;
  ulonglong *arg1;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qa;
  longlong local_50;
  longlong local_40;
  char local_38;
  
  if (arg1 == (ulonglong *)0x0) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar8 = "properties != NULL";
LAB_016b2be8:
                    /* WARNING: Could not recover jumptable at 0x016b2bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,pcVar8);
    return;
  }
  if (*arg1 < 0x30) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar8 = "properties->structSize >= ARA::kARAAudioSourcePropertiesMinSize";
    goto LAB_016b2be8;
  }
  uVar2 = arg1[1];
  pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
  pVar6 = (pthread_key_t)param_1;
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  if (uVar2 == 0) {
    local_38 = '\0';
    local_40 = 0;
LAB_016b2c08:
    local_50 = 0;
  }
  else {
    FUN_00d93290();
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_016b2c08;
      FUN_00d50b00();
      local_50 = local_40;
    }
    else {
      local_50 = local_40;
      local_38 = '\0';
    }
  }
  uVar9 = FUN_01667bd0();
  if (local_50 != 0) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  uVar2 = arg1[2];
  if (((uVar2 == 0) && (DAT_02802f60 != (longlong *)0x0)) && ((code *)*DAT_02802f60 != (code *)0x0))
  {
    (*(code *)*DAT_02802f60)(uVar9,"persistentID != NULL");
  }
  iVar3 = FUN_00e7dde0();
  if (((iVar3 < 1) && (DAT_02802f60 != (longlong *)0x0)) && ((code *)*DAT_02802f60 != (code *)0x0))
  {
    (*(code *)*DAT_02802f60)(extraout_XMM0_Qa,"gn_strlen(persistentID) > 0");
  }
  if ((uVar2 == 0) || (iVar3 = FUN_00e7dde0(), iVar3 < 1)) {
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01733bc0();
  }
  else {
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d91a70();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01733bc0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  dVar1 = (double)arg1[4];
  if (((dVar1 <= _DAT_0241eeb8) && (DAT_02802f60 != (longlong *)0x0)) &&
     ((code *)*DAT_02802f60 != (code *)0x0)) {
    (*(code *)*DAT_02802f60)(dVar1,"sampleRate > 10.0");
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar9 = FUN_01666d20(dVar1);
  if ((((longlong)arg1[3] < 2) && (DAT_02802f60 != (longlong *)0x0)) &&
     ((code *)*DAT_02802f60 != (code *)0x0)) {
    (*(code *)*DAT_02802f60)(uVar9,"sampleCount > 1");
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar9 = FUN_01666df0();
  if ((((int)arg1[5] < 1) && (DAT_02802f60 != (longlong *)0x0)) &&
     ((code *)*DAT_02802f60 != (code *)0x0)) {
    uVar9 = (*(code *)*DAT_02802f60)(uVar9,"properties->channelCount > 0");
  }
  if (*arg1 < 0x35) {
    pVar7 = 0;
    if (0x30 < *arg1) {
      if (DAT_02802f60 == (longlong *)0x0) {
        return;
      }
      if ((code *)*DAT_02802f60 == (code *)0x0) {
        return;
      }
      (*(code *)*DAT_02802f60)
                (0,
                 "!ARA_IMPLEMENTS_FIELD(properties, ARAAudioSourceProperties, channelArrangementDataType)"
                );
      return;
    }
    goto switchD_016b2f1a_caseD_0;
  }
  pVar7 = 0x16b3160;
  switch((int)arg1[6]) {
  case 0:
    goto switchD_016b2f1a_caseD_0;
  case 1:
    pVar7 = 0x16b3160;
    break;
  case 2:
    pVar7 = 0x16b3160;
    lVar5 = FUN_00bce6e0();
    if (lVar5 != 0) goto switchD_016b2f1a_caseD_0;
    break;
  case 3:
    pVar7 = 0x16b3160;
    break;
  default:
    pVar7 = pVar6;
    if ((DAT_02802f60 != (longlong *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)
                (uVar9,"false && \"channel layout information uses wrong Companion API\"");
    }
    goto switchD_016b2f1a_caseD_0;
  }
  FUN_00bce6e0();
switchD_016b2f1a_caseD_0:
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016b29c0();
  FUN_01666ee0();
  return;
}




// ==================================================
// @016adf20 (1340 bytes) — calculation
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong *this;
  undefined4 uVar7;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  uVar7 = FUN_00da7190();
  if (this == (ulonglong *)0x0) {
    if (DAT_02802f60 != (undefined8 *)0x0) {
      uVar6 = 0;
      if ((code *)*DAT_02802f60 != (code *)0x0) {
        (*(code *)*DAT_02802f60)(uVar7,"hostInstance != NULL");
        uVar6 = 0;
      }
      goto LAB_016ae19b;
    }
  }
  else if (*this < 0x58) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)
                (uVar7,"hostInstance->structSize >= ARA::kARADocumentControllerHostInstanceMinSize")
      ;
    }
  }
  else if ((ulonglong *)this[2] == (ulonglong *)0x0) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(uVar7,"hostInstance->audioAccessControllerInterface != NULL");
    }
  }
  else if (*(ulonglong *)this[2] < 0x20) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)
                (uVar7,
                 "hostInstance->audioAccessControllerInterface->structSize >= ARA::kARAAudioAccessControllerInterfaceMinSize"
                );
    }
  }
  else if ((ulonglong *)this[4] == (ulonglong *)0x0) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(uVar7,"hostInstance->archivingControllerInterface != NULL");
    }
  }
  else {
    iVar4 = 0;
    if (DAT_027cb0f0 != -1) {
      iVar4 = DAT_027cb0f0;
    }
    uVar1 = *(ulonglong *)this[4];
    if (iVar4 < 4) {
      if (0x2f < uVar1) goto LAB_016ae0c6;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)
                  (uVar1,
                   "hostInstance->archivingControllerInterface->structSize >= ARA::kARAArchivingControllerInterfaceMinSize"
                  );
      }
    }
    else if (uVar1 < 0x38) {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)
                  (uVar1,
                   "hostInstance->archivingControllerInterface->structSize >= ARA_IMPLEMENTED_STRUCT_SIZE(ARAArchivingControllerInterface, getDocumentArchiveID)"
                  );
      }
    }
    else {
LAB_016ae0c6:
      if (((ulonglong *)this[6] == (ulonglong *)0x0) || (0x4f < *(ulonglong *)this[6])) {
        if (((ulonglong *)this[8] == (ulonglong *)0x0) || (0x1f < *(ulonglong *)this[8]))
        {
          if (iVar4 - 2U < 5) {
            if ((DAT_028ad840 == 0) || (DAT_028ad849 == '\0')) {
              FUN_00e8cb50();
              if (DAT_028ad840 == 0) {
                if ((DAT_027cb3b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
                  _DAT_027cb300 = FUN_00d4fe50();
                  _DAT_027cb2e8 = "MUAraDocumentController";
                  _DAT_027cb2f0 = 0x80;
                  _DAT_027cb2f8 = FUN_016be860;
                  _DAT_027cb308 = 0;
                  uRam00000000027cb310 = 0;
                  _DAT_027cb318 = 0;
                  _DAT_027cb390 = 0;
                  uRam00000000027cb398 = 0;
                  _DAT_027cb3a0 = 0;
                  DAT_027cb3a2 = 1;
                  _DAT_027cb320 = 0;
                  uRam00000000027cb328 = 0;
                  _DAT_027cb330 = 0;
                  uRam00000000027cb338 = 0;
                  _DAT_027cb340 = 0;
                  uRam00000000027cb348 = 0;
                  _DAT_027cb350 = 0;
                  uRam00000000027cb358 = 0;
                  _DAT_027cb360 = 0;
                  uRam00000000027cb368 = 0;
                  _DAT_027cb370 = 0;
                  uRam00000000027cb378 = 0;
                  _DAT_027cb380 = 0;
                  uRam00000000027cb388 = 0;
                  DAT_027cb3ab = 0;
                  _DAT_027cb3a3 = 0;
                  ___cxa_guard_release();
                }
                lVar5 = FUN_00e86210();
                lVar2 = DAT_028ad840;
                if (DAT_028ad840 != lVar5) {
                  if (lVar5 != 0) {
                    FUN_00d50b00();
                  }
                  DAT_028ad840 = lVar5;
                  if (lVar2 != 0) {
                    FUN_00d50b20();
                  }
                }
                if ((lVar5 != 0) && (DAT_028ad848 == '\0')) {
                  DAT_028ad848 = '\x01';
                  FUN_00e8cb90();
                }
                DAT_028ad849 = '\x01';
                FUN_00e8cb70();
              }
              else {
                DAT_028ad849 = '\x01';
                FUN_00e8cb70();
              }
            }
            FUN_00c811e0();
            plVar3 = local_40;
            if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
                (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            uVar7 = (**(code **)(*plVar3 + 0x18))();
            FUN_0167a4d0(uVar7,&DAT_025f9ff0);
            FUN_0167b270();
            FUN_016b0100();
            FUN_0167b310();
            local_38 = '\0';
            local_40 = plVar3;
            FUN_00d21140();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d403d0();
            lVar2 = DAT_026fb7d8;
            if (DAT_026fb7d8 != 0) {
              FUN_00d50b00();
            }
            local_60 = plVar3;
            local_58 = '\0';
            local_50 = 0;
            local_48 = '\0';
            FUN_00d40470(&local_50,&local_60,1,3);
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            uVar6 = FUN_0167aaf0();
            FUN_00d50b20();
            goto LAB_016ae19b;
          }
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)
                    (uVar1,
                     "hostInstance->modelUpdateControllerInterface->structSize >= ARA::kARAModelUpdateControllerInterfaceMinSize"
                    );
        }
      }
      else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)
                  (uVar1,
                   "hostInstance->contentAccessControllerInterface->structSize >= ARA::kARAContentAccessControllerInterfaceMinSize"
                  );
      }
    }
  }
  uVar6 = 0;
LAB_016ae19b:
  FUN_00da71b0();
  return uVar6;
}




// ==================================================
// @016af970 (1313 bytes) — calculation
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  undefined8 *puVar6;
  char *pcVar7;
  longlong this;
  longlong local_b0;
  char local_a8;
  int local_60;
  undefined4 uStack_5c;
  char local_58;
  longlong local_50;
  char local_48 [16];
  char local_38 [8];
  
  puVar6 = param_1;
  FUN_00da7190();
  if ((this == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    uVar2 = 0;
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      uVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        uVar2 = 0;
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        FUN_01689520();
        pVar5 = (pthread_key_t)puVar6;
        if (*(int *)(CONCAT44(uStack_5c,local_60) + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          pVar5 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar6 >> 8),local_48[0]);
          pcVar7 = local_38;
          if (local_48[0] != '\0') {
            pcVar7 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar7 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_58 != '\0') && (CONCAT44(uStack_5c,local_60) != 0)) {
          FUN_00d50b20();
        }
        if ((param_2 == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
          uVar2 = 0;
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01660830();
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (local_50 == this) {
            DAT_02802f48 = DAT_02802f48 + 1;
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016670b0();
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0124df10();
            if (local_48[0] == '\0') {
              if (((local_50 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_48[0] = '\0';
            }
            if ((local_58 != '\0') && (CONCAT44(uStack_5c,local_60) != 0)) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01733b90();
            if (((local_48[0] == '\0') && (local_50 != 0)) &&
               ((FUN_00d50b00(), local_48[0] != '\0' && (local_50 != 0)))) {
              FUN_00d50b20();
            }
            FUN_012e16c0();
            if (local_48[0] == '\0') {
              if (((local_50 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_48[0] = '\0';
            }
            uVar2 = FUN_01684310();
            lVar4 = FUN_000030c0();
            *param_1 = *(undefined8 *)(lVar4 + (longlong)local_60 * 8);
            *param_3 = 0;
            DAT_02802f48 = DAT_02802f48 + -1;
            if (local_50 != 0) {
              FUN_00d50b20();
              FUN_00d50b20();
              FUN_00d50b20();
            }
          }
          else {
            uVar2 = 0;
            if ((DAT_02802f60 != (undefined8 *)0x0) &&
               (uVar2 = 0, (code *)*DAT_02802f60 != (code *)0x0)) {
              (*(code *)*DAT_02802f60)();
            }
          }
        }
      }
      else {
        uVar2 = 0;
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
          uVar2 = 0;
        }
      }
    }
  }
  FUN_00da71b0();
  return uVar2;
}




// ==================================================
// @016b4010 (1064 bytes) — math_loop
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  char *pcVar4;
  int iVar5;
  longlong arg1;
  longlong this;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60 [16];
  int local_50;
  undefined8 local_4c;
  char local_38 [8];
  
  FUN_00da7190();
  if ((this == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else {
        FUN_01689520();
        if (*(int *)(local_88 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_60[0]);
          pcVar4 = local_38;
          if (local_60[0] != '\0') {
            pcVar4 = local_60;
          }
          local_38[0] = local_60[0];
          *pcVar4 = '\0';
          if ((local_60[0] != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((arg1 == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01660830();
          if ((local_60[0] != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if (local_68 == this) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            bVar2 = FUN_016670a0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01667050();
            if ((param_2 == 0 & (bVar2 ^ 1)) == 0) {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016678c0();
              if (local_60[0] == '\0') {
                if (local_68 == 0) goto LAB_016b41a8;
                FUN_00d50b00();
                if ((local_60[0] != '\0') && (local_68 != 0)) {
                  FUN_00d50b20();
                }
              }
              else if (local_68 == 0) goto LAB_016b41a8;
              local_60[0] = '\0';
              local_4c = 0;
              iVar5 = 0;
              do {
                local_50 = iVar5;
                if (*(int *)(local_68 + 0xc) <= iVar5) {
                  FUN_0049cc10();
                  FUN_00d50b20();
                  goto LAB_016b41a8;
                }
                pvVar3 = _pthread_getspecific(param_1);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                cVar1 = FUN_01650890();
                iVar5 = iVar5 + 1;
              } while (cVar1 != '\0');
              if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
                (*(code *)*DAT_02802f60)();
              }
              FUN_0049cc10();
              FUN_00d50b20();
            }
          }
          else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
      }
    }
  }
LAB_016b41a8:
  FUN_00da71b0();
  return;
}




// ==================================================
// @016b4550 (1004 bytes) — calculation
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  longlong arg1;
  longlong this;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((this == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else if ((arg1 == 0) || (cVar2 = FUN_0166db10(), cVar2 == '\0')) {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      FUN_00d50b00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == this) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01660c60();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016678c0();
        iVar1 = *(int *)(local_48 + 0xc);
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
        if (iVar1 == 0) {
          FUN_0167ab60();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01537ea0();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d50130();
          FUN_0168a050();
          cVar2 = FUN_0167b260();
          if (cVar2 == '\0') {
            if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
              (*(code *)*DAT_02802f60)();
            }
          }
          else {
            FUN_01689520();
            if (*(int *)(local_78 + 0xc) != 0) {
              FUN_01689520();
              FUN_00d23310();
              pcVar4 = local_30;
              if (local_40[0] != '\0') {
                pcVar4 = local_40;
              }
              local_30[0] = local_40[0];
              *pcVar4 = '\0';
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
                (*(code *)*DAT_02802f60)();
              }
              if ((local_30[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
      FUN_00d50b20();
    }
  }
  FUN_00da71b0();
  return;
}




// ==================================================
// @016b24e0 (943 bytes) — calculation
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  longlong arg1;
  longlong this;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((this == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else if ((arg1 == 0) || (cVar2 = FUN_01713980(), cVar2 == '\0')) {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      FUN_00d50b00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f550();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == this) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01713cc0();
        iVar1 = *(int *)(local_48 + 0xc);
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
        if (iVar1 == 0) {
          FUN_0167ab60();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01537c10();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d50130();
          cVar2 = FUN_0167b260();
          if (cVar2 == '\0') {
            if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
              (*(code *)*DAT_02802f60)();
            }
          }
          else {
            FUN_01689520();
            if (*(int *)(local_78 + 0xc) != 0) {
              FUN_01689520();
              FUN_00d23310();
              pcVar4 = local_30;
              if (local_40[0] != '\0') {
                pcVar4 = local_40;
              }
              local_30[0] = local_40[0];
              *pcVar4 = '\0';
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
                (*(code *)*DAT_02802f60)();
              }
              if ((local_30[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
      FUN_00d50b20();
    }
  }
  FUN_00da71b0();
  return;
}




// ==================================================
// @016b1510 (913 bytes) — calculation
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  ulonglong uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar4;
  ulonglong *arg1;
  longlong local_38;
  char local_30;
  
  if (arg1 == (ulonglong *)0x0) {
    if ((DAT_02802f60 != (longlong *)0x0) &&
       (UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      pcVar4 = "properties != NULL";
LAB_016b1613:
                    /* WARNING: Could not recover jumptable at 0x016b161f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,pcVar4);
      return;
    }
  }
  else if (*arg1 < 8) {
    if ((DAT_02802f60 != (longlong *)0x0) &&
       (UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      pcVar4 = "properties->structSize >= ARA::kARAMusicalContextPropertiesMinSize";
      goto LAB_016b1613;
    }
  }
  else {
    if ((*arg1 == 8) || (arg1[1] == 0)) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f5a0();
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d93290();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_0170f5a0();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((*arg1 < 9) || (arg1[1] == 0)) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f690();
      uVar1 = *arg1;
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f690();
      uVar1 = *arg1;
    }
    if ((uVar1 < 0x15) || (*(longlong *)((longlong)arg1 + 0x14) == 0)) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f710();
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar2 = *(undefined4 **)((longlong)arg1 + 0x14);
      FUN_01cfbee0(*puVar2,puVar2[1],puVar2[2]);
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_0170f710();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ==================================================
// @016b38f0 (835 bytes) — calculation
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  longlong arg1;
  longlong this;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48 [16];
  char local_38 [8];
  
  uVar4 = FUN_00da7190();
  if ((this == 0) || (cVar1 = FUN_0168a120(), uVar4 = extraout_XMM0_Qa, cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(uVar4,"provided object ref is invalid");
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)(extraout_XMM0_Qa_00,"call required from document main thread");
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)
                    (extraout_XMM0_Qa_01,"documentController->isHostEditingDocument()");
        }
      }
      else {
        uVar4 = FUN_01689520();
        if (*(int *)(local_70 + 0xc) != 0) {
          FUN_01689520();
          uVar4 = FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_48[0]);
          pcVar3 = local_38;
          if (local_48[0] != '\0') {
            pcVar3 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar3 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            uVar4 = (*(code *)*DAT_02802f60)
                              (uVar4,"documentController->getContentReaders()->getCount() == 0");
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            uVar4 = FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          uVar4 = FUN_00d50b20();
        }
        if ((arg1 == 0) || (cVar1 = FUN_0166db10(), uVar4 = extraout_XMM0_Qa_02, cVar1 == '\0')
           ) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)(uVar4,"provided object ref is invalid");
          }
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar4 = FUN_01660830();
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if (local_50 == this) {
            if (param_2 == (undefined8 *)0x0) {
              pvVar2 = _pthread_getspecific(param_1);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar2 = _pthread_getspecific(param_1);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar4 = FUN_01666eb0();
              FUN_01668800(0,uVar4);
            }
            else {
              pvVar2 = _pthread_getspecific(param_1);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01668800(*param_2,param_2[1]);
            }
          }
          else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)
                      (uVar4,"audioSource->getDocumentController() == documentController");
          }
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}




// ==================================================
// @016b4a70 (795 bytes) — calculation
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  ulonglong uVar1;
  int iVar2;
  void *pvVar3;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar4;
  ulonglong *arg1;
  longlong local_50;
  longlong local_40;
  char local_38;
  
  if (arg1 == (ulonglong *)0x0) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar4 = "properties != NULL";
LAB_016b4b68:
                    /* WARNING: Could not recover jumptable at 0x016b4b76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,pcVar4);
    return;
  }
  if (*arg1 < 0x18) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar4 = "properties->structSize >= ARA::kARAAudioModificationPropertiesMinSize";
    goto LAB_016b4b68;
  }
  uVar1 = arg1[1];
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  if (uVar1 == 0) {
    local_38 = '\0';
    local_40 = 0;
  }
  else {
    FUN_00d93290();
    if (local_38 != '\0') {
      local_50 = local_40;
      local_38 = '\0';
      goto LAB_016b4ba2;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
      local_50 = local_40;
      goto LAB_016b4ba2;
    }
  }
  local_50 = 0;
LAB_016b4ba2:
  FUN_01650680();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  uVar1 = arg1[2];
  if (((uVar1 == 0) && (DAT_02802f60 != (longlong *)0x0)) && ((code *)*DAT_02802f60 != (code *)0x0))
  {
    (*(code *)*DAT_02802f60)();
  }
  iVar2 = FUN_00e7dde0();
  if (((iVar2 < 1) && (DAT_02802f60 != (longlong *)0x0)) && ((code *)*DAT_02802f60 != (code *)0x0))
  {
    (*(code *)*DAT_02802f60)();
  }
  if ((uVar1 == 0) || (iVar2 = FUN_00e7dde0(), iVar2 < 1)) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01733bc0();
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d91a70();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01733bc0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @016b19d0 (740 bytes) — calculation
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  char *pcVar4;
  longlong this;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_50;
  char local_48 [16];
  char local_38 [8];
  
  FUN_00da7190();
  if ((this == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        plVar2 = (longlong *)0x0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
          plVar2 = (longlong *)0x0;
        }
        goto LAB_016b1b79;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 != '\0') {
        FUN_01689520();
        if (*(int *)(local_90 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_48[0]);
          pcVar4 = local_38;
          if (local_48[0] != '\0') {
            pcVar4 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar4 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        plVar2 = (longlong *)FUN_00e8fc40();
        FUN_00274a00();
        (**(code **)(*plVar2 + 0x18))();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0170cec0();
        FUN_016b1510();
        FUN_0167ab60();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537ae0();
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto LAB_016b1b79;
      }
      if (DAT_02802f60 != (undefined8 *)0x0) {
        plVar2 = (longlong *)0x0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
        }
        goto LAB_016b1b79;
      }
    }
  }
  plVar2 = (longlong *)0x0;
LAB_016b1b79:
  FUN_00da71b0();
  return plVar2;
}




// ==================================================
// @016b3170 (740 bytes) — calculation
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  char *pcVar4;
  longlong this;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_50;
  char local_48 [16];
  char local_38 [8];
  
  FUN_00da7190();
  if ((this == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        plVar2 = (longlong *)0x0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
          plVar2 = (longlong *)0x0;
        }
        goto LAB_016b3319;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 != '\0') {
        FUN_01689520();
        if (*(int *)(local_90 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_48[0]);
          pcVar4 = local_38;
          if (local_48[0] != '\0') {
            pcVar4 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar4 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        plVar2 = (longlong *)FUN_00e8fc40();
        FUN_0049c930();
        (**(code **)(*plVar2 + 0x18))();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016607b0();
        FUN_016b2af0();
        FUN_0167ab60();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537d70();
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto LAB_016b3319;
      }
      if (DAT_02802f60 != (undefined8 *)0x0) {
        plVar2 = (longlong *)0x0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
        }
        goto LAB_016b3319;
      }
    }
  }
  plVar2 = (longlong *)0x0;
LAB_016b3319:
  FUN_00da71b0();
  return plVar2;
}




// ==================================================
// @016b2150 (738 bytes) — calculation
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  char cVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  ulonglong uVar4;
  char *pcVar5;
  longlong arg1;
  longlong this;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48 [16];
  char local_38 [8];
  
  uVar4 = param_1;
  FUN_00da7190();
  if ((this == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else {
        FUN_01689520();
        pVar3 = (pthread_key_t)uVar4;
        if (*(int *)(local_70 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          pVar3 = (pthread_key_t)CONCAT71((int7)(uVar4 >> 8),local_48[0]);
          pcVar5 = local_38;
          if (local_48[0] != '\0') {
            pcVar5 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar5 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((arg1 == 0) || (cVar1 = FUN_01713980(), cVar1 == '\0')) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0170f550();
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (local_50 == this) {
            if ((~(uint)param_1 & 0x1c) != 0) {
              pvVar2 = _pthread_getspecific(pVar3);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0170d420((param_1 & 0x10) == 0,(param_1 & 8) == 0,0);
            }
          }
          else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}




// ==================================================
// @016a5910 (691 bytes) — calculation
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong arg1;
  undefined8 *this;
  undefined8 *puVar11;
  
  FUN_00d4ff80();
  *this = &DAT_02590538;
  uVar1 = *(undefined4 *)(arg1 + 0x14);
  uVar2 = *(undefined4 *)(arg1 + 0x18);
  uVar3 = *(undefined4 *)(arg1 + 0x1c);
  uVar4 = *(undefined4 *)(arg1 + 0x20);
  uVar5 = *(undefined4 *)(arg1 + 0x24);
  uVar6 = *(undefined4 *)(arg1 + 0x28);
  uVar7 = *(undefined4 *)(arg1 + 0x2c);
  *(undefined4 *)(this + 2) = *(undefined4 *)(arg1 + 0x10);
  *(undefined4 *)((longlong)this + 0x14) = uVar1;
  *(undefined4 *)(this + 3) = uVar2;
  *(undefined4 *)((longlong)this + 0x1c) = uVar3;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)((longlong)this + 0x24) = uVar5;
  *(undefined4 *)(this + 5) = uVar6;
  *(undefined4 *)((longlong)this + 0x2c) = uVar7;
  this[6] = *(undefined8 *)(arg1 + 0x30);
  *this = &DAT_025ee8e8;
  this[7] = 0;
  lVar9 = FUN_015388a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a5d30();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraDocumentData");
  }
  this[8] = 0;
  lVar9 = FUN_015388a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a5e20();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraMusicalContext");
  }
  this[9] = 0;
  lVar9 = FUN_015388a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a5f10();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraAudioSource");
  }
  puVar11 = this + 10;
  this[10] = 0;
  lVar9 = FUN_015388a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a6000();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraAudioModification",param_3,param_4,puVar11);
  }
  FUN_016a60f0();
  FUN_016a61d0();
  FUN_016a62b0();
  FUN_016a6390();
  *(undefined1 *)(this + 0xf) = 0;
  lVar9 = FUN_015388a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027ca790 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027ca758 = FUN_015388a0();
        _DAT_027ca750 = "_isUnstable";
        _DAT_027ca760 = 0;
        _DAT_027ca768 = 0x6210;
        _DAT_027ca770 = "bool";
        _DAT_027ca778 = 0;
        uRam00000000027ca780 = 0;
        _DAT_027ca788 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @016b1e00 (660 bytes) — calculation
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  longlong arg1;
  longlong this;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((this == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else {
        FUN_01689520();
        if (*(int *)(local_68 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
          pcVar3 = local_30;
          if (local_40[0] != '\0') {
            pcVar3 = local_40;
          }
          local_30[0] = local_40[0];
          *pcVar3 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((arg1 == 0) || (cVar1 = FUN_01713980(), cVar1 == '\0')) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0170f550();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (local_48 == this) {
            FUN_016b1510();
          }
          else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}




// ==================================================
// @016b35a0 (660 bytes) — calculation
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  longlong arg1;
  longlong this;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((this == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else {
        FUN_01689520();
        if (*(int *)(local_68 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
          pcVar3 = local_30;
          if (local_40[0] != '\0') {
            pcVar3 = local_40;
          }
          local_30[0] = local_40[0];
          *pcVar3 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((arg1 == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01660830();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (local_48 == this) {
            FUN_016b2af0();
          }
          else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}




// ==================================================
// @016b3ce0 (646 bytes) — calculation
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  longlong arg1;
  longlong this;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48 [16];
  char local_38 [8];
  
  FUN_00da7190();
  if ((this == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      FUN_01689520();
      if (*(int *)(local_70 + 0xc) != 0) {
        FUN_01689520();
        FUN_00d23310();
        param_1 = CONCAT31((int3)(param_1 >> 8),local_48[0]);
        pcVar3 = local_38;
        if (local_48[0] != '\0') {
          pcVar3 = local_48;
        }
        local_38[0] = local_48[0];
        *pcVar3 = '\0';
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
        if ((local_38[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((arg1 == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01660830();
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (local_50 == this) {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01660c60();
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}




// ==================================================
// @016a5360 (612 bytes) — calculation
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong arg1;
  undefined8 *this;
  char *pcVar10;
  
  FUN_00d4ff80();
  *this = &DAT_02590538;
  uVar1 = *(undefined4 *)(arg1 + 0x14);
  uVar2 = *(undefined4 *)(arg1 + 0x18);
  uVar3 = *(undefined4 *)(arg1 + 0x1c);
  uVar4 = *(undefined4 *)(arg1 + 0x20);
  uVar5 = *(undefined4 *)(arg1 + 0x24);
  uVar6 = *(undefined4 *)(arg1 + 0x28);
  uVar7 = *(undefined4 *)(arg1 + 0x2c);
  *(undefined4 *)(this + 2) = *(undefined4 *)(arg1 + 0x10);
  *(undefined4 *)((longlong)this + 0x14) = uVar1;
  *(undefined4 *)(this + 3) = uVar2;
  *(undefined4 *)((longlong)this + 0x1c) = uVar3;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)((longlong)this + 0x24) = uVar5;
  *(undefined4 *)(this + 5) = uVar6;
  *(undefined4 *)((longlong)this + 0x2c) = uVar7;
  this[6] = *(undefined8 *)(arg1 + 0x30);
  *this = &DAT_025f7f28;
  this[7] = 0;
  lVar9 = FUN_016be450();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a5650();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraDocumentController");
  }
  this[8] = 0;
  lVar9 = FUN_016be450();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a5740();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraMusicalContextPersistentData");
  }
  FUN_016a5830();
  *(undefined1 *)(this + 10) = 0;
  lVar9 = FUN_016be450();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027ca4c0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027ca488 = FUN_016be450();
        _DAT_027ca480 = "_archiveIsPotentiallyUnstable";
        _DAT_027ca490 = 0;
        _DAT_027ca498 = 0x6210;
        _DAT_027ca4a0 = "bool";
        _DAT_027ca4a8 = 0;
        uRam00000000027ca4b0 = 0;
        _DAT_027ca4b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x51) = 0;
  lVar9 = FUN_016be450();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027ca508 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027ca4d0 = FUN_016be450();
        _DAT_027ca4c8 = "_mustSyncPitchSystemsAfterImportingPreM41Archive";
        _DAT_027ca4d8 = 0;
        _DAT_027ca4e0 = 0x6211;
        _DAT_027ca4e8 = "bool";
        _DAT_027ca4f0 = 0;
        uRam00000000027ca4f8 = 0;
        _DAT_027ca500 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @016b0100 (589 bytes) — math_loop
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar5;
  int iVar6;
  ulonglong *arg1;
  longlong local_60;
  char local_58;
  longlong local_38;
  
  lVar2 = local_60;
  if (arg1 == (ulonglong *)0x0) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar5 = "properties != NULL";
LAB_016b0211:
                    /* WARNING: Could not recover jumptable at 0x016b021d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,pcVar5);
    return;
  }
  if (*arg1 < 0x10) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar5 = "properties->structSize >= ARA::kARADocumentPropertiesMinSize";
    goto LAB_016b0211;
  }
  FUN_0167ab60();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  uVar1 = arg1[1];
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    if (uVar1 == 0) goto LAB_016b01a3;
LAB_016b022b:
    FUN_00d93290();
    if (local_58 == '\0') {
      if (local_60 == 0) goto LAB_016b01b3;
      FUN_00d50b00();
      local_38 = local_60;
    }
    else {
      local_38 = local_60;
      local_58 = '\0';
    }
  }
  else {
    if (uVar1 != 0) goto LAB_016b022b;
LAB_016b01a3:
    local_58 = '\0';
    local_60 = 0;
LAB_016b01b3:
    local_38 = 0;
  }
  FUN_01538290();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01689950();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_016b0333;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_016b0333;
  for (iVar6 = 0; iVar6 < *(int *)(local_60 + 0xc); iVar6 = iVar6 + 1) {
    FUN_01693550();
  }
  FUN_016be7c0();
  FUN_00d50b20();
LAB_016b0333:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @016aeee0 (560 bytes) — calculation
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  longlong this;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((this == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        uVar2 = 0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
        }
        goto LAB_016af0a5;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 != '\0') {
        FUN_01689520();
        if (*(int *)(local_78 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          pcVar3 = local_30;
          if (local_40[0] != '\0') {
            pcVar3 = local_40;
          }
          local_30[0] = local_40[0];
          *pcVar3 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        FUN_016841e0();
        if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != 0)) {
          FUN_00d50b20();
        }
        uVar2 = FUN_0167bc80(0);
        FUN_0167b310();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        goto LAB_016af0a5;
      }
      if (DAT_02802f60 != (undefined8 *)0x0) {
        uVar2 = 0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
        }
        goto LAB_016af0a5;
      }
    }
  }
  uVar2 = 0;
LAB_016af0a5:
  FUN_00da71b0();
  return uVar2;
}




// ==================================================
// @016af570 (558 bytes) — calculation
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  longlong this;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38 [8];
  char local_30 [8];
  
  if ((this != 0) && (cVar2 = FUN_0168a120(), cVar2 != '\0')) {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if (DAT_02802f60 == (undefined8 *)0x0) {
        return 0;
      }
      pcVar1 = (code *)*DAT_02802f60;
    }
    else {
      cVar2 = FUN_0167b260();
      if (cVar2 == '\0') {
        FUN_01689520();
        if (*(int *)(local_70 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          pcVar4 = local_30;
          if (local_38[0] != '\0') {
            pcVar4 = local_38;
          }
          local_30[0] = local_38[0];
          *pcVar4 = '\0';
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        DAT_02802f48 = DAT_02802f48 + 1;
        FUN_01682950();
        if ((((local_38[0] == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
           (local_40 != 0)) {
          FUN_00d50b20();
        }
        DAT_02802f48 = DAT_02802f48 + -1;
        uVar3 = FUN_01684310();
        if (local_40 == 0) {
          return uVar3;
        }
        FUN_00d50b20();
        return uVar3;
      }
      if (DAT_02802f60 == (undefined8 *)0x0) {
        return 0;
      }
      pcVar1 = (code *)*DAT_02802f60;
    }
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    return 0;
  }
  if (DAT_02802f60 == (undefined8 *)0x0) {
    return 0;
  }
  if ((code *)*DAT_02802f60 == (code *)0x0) {
    return 0;
  }
  (*(code *)*DAT_02802f60)();
  return 0;
}




// ==================================================
// @016af230 (553 bytes) — calculation
// Known properties of MUAraDocumentController:
// _cacheWarmUpDoWarmUp, _cacheWarmUpLastStartTime, _hostPlaybackParamsLastStartTime, _cacheWarmUpLastCursorTime, _cacheWarmUpLastLeftCycleQuarter, _expectedNextAraHostSampleIndex, _replaceBufferSize, _renderStateTime, _renderStateHostIsPlaying, _renderStateRenderingEnabled, _shouldTransferContextReset, _shouldTransferContextEnabled, _lastTransferContextEnabled, _hostPlaybackParamsCycleActive, _isAAX, _hostPlaybackParamsCycleTimeValid, _hostPlaybackParamsCycleStartQuarter, _hostPlaybackParamsCycleEndQuarter, _hostPlaybackParamsCursorTime, _hostPlaybackParamsTempo
// ... and more

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  longlong this;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((this == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        uVar2 = 0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
        }
        goto LAB_016af3ee;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 != '\0') {
        FUN_01689520();
        if (*(int *)(local_78 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          pcVar3 = local_30;
          if (local_40[0] != '\0') {
            pcVar3 = local_40;
          }
          local_30[0] = local_40[0];
          *pcVar3 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        FUN_016841e0();
        if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != 0)) {
          FUN_00d50b20();
        }
        uVar2 = FUN_0167bc80(param_2);
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        goto LAB_016af3ee;
      }
      if (DAT_02802f60 != (undefined8 *)0x0) {
        uVar2 = 0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
        }
        goto LAB_016af3ee;
      }
    }
  }
  uVar2 = 0;
LAB_016af3ee:
  FUN_00da71b0();
  return uVar2;
}



