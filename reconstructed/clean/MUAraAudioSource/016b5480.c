// Function: FUN_016b5480
// Address: 016b5480
// Size: 754 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "audioSource->getDocumentController() == documentController"
// === MUAraAudioSource properties ===
//   double          _cursorTime
//   double          _lastHostCursorTime
//   bool            _lastHostCursorTimeValid
//   double          _hostPlaybackPendingStopTime
//   bool            _controlsLocalPlayback
//   bool            _distributedLocalPlayback
//   double          _lastPendingHostCycleUpdateRequestTime
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t FUN_016b5480(uint64_t param_1,uint64_t param_2)

{
  char cVar1;
  void *pvVar2;
  void* pVar3;
  uint64_t uVar4;
  char *pcVar5;
  int64_t lVar6;
  int64_t arg1;
  int64_t this_ptr;
  uint64_t local_80;
  uint8_t local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48 [16];
  char local_38 [8];
  
  uVar4 = param_1;
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (g_02802f60 != (void*)0x0) {
        lVar6 = 0;
        if (*g_02802f60 != 0x0) {
          (**g_02802f60)();
        }
        goto LAB_016b561c;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if (g_02802f60 != (void*)0x0) {
          lVar6 = 0;
          if (*g_02802f60 != 0x0) {
            (**g_02802f60)();
          }
          goto LAB_016b561c;
        }
      }
      else {
        FUN_01689520();
        pVar3 = (void*)uVar4;
        if (*(int *)(local_70 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          lVar6 = local_50;
          pVar3 = (void*)CONCAT71((int7)((uint64_t)uVar4 >> 8),local_48[0]);
          pcVar5 = local_38;
          if (local_48[0] != '\0') {
            pcVar5 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar5 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
          if ((local_38[0] != '\0') && (lVar6 != 0)) {
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
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
        else {
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01660830();
          lVar6 = local_50;
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 == this_ptr) {
            local_80 = 0;
            local_78 = 0;
            FUN_016b4e90(param_1,param_2,&local_80);
            lVar6 = local_50;
            if (local_48[0] == '\0') {
              if (local_50 == 0) goto LAB_016b561c;
              FUN_00d50b00();
            }
            else if (local_50 == 0) goto LAB_016b561c;
            FUN_00d50b20();
            goto LAB_016b561c;
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
      }
    }
  }
  lVar6 = 0;
LAB_016b561c:
  FUN_00da71b0();
  return lVar6;
}

