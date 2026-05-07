// Function: FUN_016adf20
// Address: 016adf20
// Size: 1340 bytes
// Class: MUAraDocumentController
// String references:
//   "MUAraDocumentController"
//   "hostInstance != NULL"
//   "hostInstance->structSize >= ARA::kARADocumentControllerHostInstanceMinSize"
//   "hostInstance->audioAccessControllerInterface != NULL"
//   "hostInstance->audioAccessControllerInterface->structSize >= ARA::kARAAudioAccessControllerInterface...
//   "hostInstance->archivingControllerInterface != NULL"
//   "hostInstance->archivingControllerInterface->structSize >= ARA_IMPLEMENTED_STRUCT_SIZE(ARAArchivingC...
//   "hostInstance->archivingControllerInterface->structSize >= ARA::kARAArchivingControllerInterfaceMinS...
//   "hostInstance->contentAccessControllerInterface->structSize >= ARA::kARAContentAccessControllerInter...
//   "hostInstance->modelUpdateControllerInterface->structSize >= ARA::kARAModelUpdateControllerInterface...
// === MUAraDocumentController properties ===
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


uint64_t FUN_016adf20(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t *this_ptr;
  uint32_t uVar7;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  uVar7 = FUN_00da7190();
  if (this_ptr == (uint64_t *)0x0) {
    if (g_02802f60 != (void*)0x0) {
      uVar6 = 0;
      if (*g_02802f60 != 0x0) {
        (**g_02802f60)(uVar7,"hostInstance != NULL");
        uVar6 = 0;
      }
      goto LAB_016ae19b;
    }
  }
  else if (*this_ptr < 0x58) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)
                (uVar7,"hostInstance->structSize >= ARA::kARADocumentControllerHostInstanceMinSize")
      ;
    }
  }
  else if ((uint64_t *)this_ptr[2] == (uint64_t *)0x0) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)(uVar7,"hostInstance->audioAccessControllerInterface != NULL");
    }
  }
  else if (*(uint64_t *)this_ptr[2] < 0x20) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)
                (uVar7,
                 "hostInstance->audioAccessControllerInterface->structSize >= ARA::kARAAudioAccessControllerInterfaceMinSize"
                );
    }
  }
  else if ((uint64_t *)this_ptr[4] == (uint64_t *)0x0) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)(uVar7,"hostInstance->archivingControllerInterface != NULL");
    }
  }
  else {
    iVar4 = 0;
    if (g_027cb0f0 != -1) {
      iVar4 = g_027cb0f0;
    }
    uVar1 = *(uint64_t *)this_ptr[4];
    if (iVar4 < 4) {
      if (0x2f < uVar1) goto LAB_016ae0c6;
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)
                  (uVar1,
                   "hostInstance->archivingControllerInterface->structSize >= ARA::kARAArchivingControllerInterfaceMinSize"
                  );
      }
    }
    else if (uVar1 < 0x38) {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)
                  (uVar1,
                   "hostInstance->archivingControllerInterface->structSize >= ARA_IMPLEMENTED_STRUCT_SIZE(ARAArchivingControllerInterface, getDocumentArchiveID)"
                  );
      }
    }
    else {
LAB_016ae0c6:
      if (((uint64_t *)this_ptr[6] == (uint64_t *)0x0) || (0x4f < *(uint64_t *)this_ptr[6])) {
        if (((uint64_t *)this_ptr[8] == (uint64_t *)0x0) || (0x1f < *(uint64_t *)this_ptr[8]))
        {
          if (iVar4 - 2U < 5) {
            if ((g_028ad840 == 0) || (g_028ad849 == '\0')) {
              FUN_00e8cb50();
              if (g_028ad840 == 0) {
                if ((g_027cb3b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
                  g_027cb300 = FUN_00d4fe50();
                  g_027cb2e8 = "MUAraDocumentController";
                  g_027cb2f0 = 0x80;
                  g_027cb2f8 = FUN_016be860;
                  g_027cb308 = 0;
                  ram_00000000027cb310 = 0;
                  g_027cb318 = 0;
                  g_027cb390 = 0;
                  ram_00000000027cb398 = 0;
                  g_027cb3a0 = 0;
                  g_027cb3a2 = 1;
                  g_027cb320 = 0;
                  ram_00000000027cb328 = 0;
                  g_027cb330 = 0;
                  ram_00000000027cb338 = 0;
                  g_027cb340 = 0;
                  ram_00000000027cb348 = 0;
                  g_027cb350 = 0;
                  ram_00000000027cb358 = 0;
                  g_027cb360 = 0;
                  ram_00000000027cb368 = 0;
                  g_027cb370 = 0;
                  ram_00000000027cb378 = 0;
                  g_027cb380 = 0;
                  ram_00000000027cb388 = 0;
                  g_027cb3ab = 0;
                  g_027cb3a3 = 0;
                  ___cxa_guard_release();
                }
                lVar5 = FUN_00e86210();
                lVar2 = g_028ad840;
                if (g_028ad840 != lVar5) {
                  if (lVar5 != 0) {
                    FUN_00d50b00();
                  }
                  g_028ad840 = lVar5;
                  if (lVar2 != 0) {
                    FUN_00d50b20();
                  }
                }
                if ((lVar5 != 0) && (g_028ad848 == '\0')) {
                  g_028ad848 = '\x01';
                  FUN_00e8cb90();
                }
                g_028ad849 = '\x01';
                FUN_00e8cb70();
              }
              else {
                g_028ad849 = '\x01';
                FUN_00e8cb70();
              }
            }
            FUN_00c811e0();
            plVar3 = local_40;
            if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
                (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            uVar7 = (**(code **)(*plVar3 + 0x18))();
            FUN_0167a4d0(uVar7,&g_025f9ff0);
            FUN_0167b270();
            FUN_016b0100();
            FUN_0167b310();
            local_38 = '\0';
            local_40 = plVar3;
            FUN_00d21140();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d403d0();
            lVar2 = g_026fb7d8;
            if (g_026fb7d8 != 0) {
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
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            uVar6 = FUN_0167aaf0();
            FUN_00d50b20();
            goto LAB_016ae19b;
          }
        }
        else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)
                    (uVar1,
                     "hostInstance->modelUpdateControllerInterface->structSize >= ARA::kARAModelUpdateControllerInterfaceMinSize"
                    );
        }
      }
      else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)
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

