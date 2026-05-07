// Function: FUN_016b76f0
// Address: 016b76f0
// Size: 1241 bytes
// Class: MUAraAudioSource
// String references:
//   "MUAraAudioPlaybackRegion"
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "audioModification->getDocumentController() == documentController"
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


int64_t * FUN_016b76f0(uint64_t param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  void* pVar6;
  char *pcVar7;
  int64_t *this_ptr;
  int64_t *plVar8;
  uint32_t uVar9;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_50;
  char local_48 [16];
  char local_38 [8];
  
  uVar9 = FUN_00da7190();
  if ((this_ptr == (int64_t *)0x0) ||
     (cVar1 = FUN_0168a120(), uVar9 = extraout_XMM0_Da, cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)(uVar9,"provided object ref is invalid");
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (g_02802f60 != (void*)0x0) {
        local_50 = (int64_t *)0x0;
        if (*g_02802f60 != 0x0) {
          (**g_02802f60)(extraout_XMM0_Da_00,"call required from document main thread");
        }
        goto LAB_016b7873;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if (g_02802f60 != (void*)0x0) {
          local_50 = (int64_t *)0x0;
          if (*g_02802f60 != 0x0) {
            (**g_02802f60)
                      (extraout_XMM0_Da_01,"documentController->isHostEditingDocument()");
            local_50 = (int64_t *)0x0;
          }
          goto LAB_016b7873;
        }
      }
      else {
        FUN_01689520();
        pVar6 = (void*)param_1;
        if (*(int *)(local_88 + 0xc) != 0) {
          FUN_01689520();
          uVar9 = FUN_00d23310();
          pVar6 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_48[0]);
          pcVar7 = local_38;
          if (local_48[0] != '\0') {
            pcVar7 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar7 = '\0';
          if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
            uVar9 = FUN_00d50b20();
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)
                      (uVar9,"documentController->getContentReaders()->getCount() == 0");
          }
          if ((local_38[0] != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_0164e2c0();
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        if (local_50 == this_ptr) {
          if ((g_028ad860 == 0) || (g_028ad869 == '\0')) {
            FUN_00e8cb50();
            if (g_028ad860 == 0) {
              if ((g_026f9a88 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
                g_026f99d8 = FUN_00274820();
                g_026f99c0 = "MUAraAudioPlaybackRegion";
                g_026f99c8 = 0xb0;
                pVar6 = 0x275d40;
                g_026f99d0 = FUN_00275d40;
                g_026f99e0 = 0;
                ram_00000000026f99e8 = 0;
                g_026f99f0 = 0;
                g_026f9a68 = 0;
                ram_00000000026f9a70 = 0;
                g_026f9a78 = 0;
                g_026f9a7a = 1;
                g_026f99f8 = 0;
                ram_00000000026f9a00 = 0;
                g_026f9a08 = 0;
                ram_00000000026f9a10 = 0;
                g_026f9a18 = 0;
                ram_00000000026f9a20 = 0;
                g_026f9a28 = 0;
                ram_00000000026f9a30 = 0;
                g_026f9a38 = 0;
                ram_00000000026f9a40 = 0;
                g_026f9a48 = 0;
                ram_00000000026f9a50 = 0;
                g_026f9a58 = 0;
                ram_00000000026f9a60 = 0;
                g_026f9a83 = 0;
                g_026f9a7b = 0;
                ___cxa_guard_release();
              }
              lVar4 = FUN_00e86210();
              lVar5 = g_028ad860;
              if (g_028ad860 != lVar4) {
                if (lVar4 != 0) {
                  FUN_00d50b00();
                }
                g_028ad860 = lVar4;
                if (lVar5 != 0) {
                  FUN_00d50b20();
                }
              }
              if ((lVar4 != 0) && (g_028ad868 == '\0')) {
                g_028ad868 = '\x01';
                FUN_00e8cb90();
              }
              g_028ad869 = '\x01';
              FUN_00e8cb70();
            }
            else {
              g_028ad869 = '\x01';
              FUN_00e8cb70();
            }
          }
          FUN_00c811e0();
          if ((((local_48[0] == '\0') && (local_50 != (int64_t *)0x0)) &&
              (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar3 = _pthread_getspecific(pVar6);
          plVar8 = local_50;
          if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar8 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar8 + 0x18))();
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar9 = FUN_01653e10();
          FUN_016b6bb0(uVar9,&stack0xffffffffffffff68);
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_016b7873;
        }
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)
                    (uVar9,"audioModification->getDocumentController() == documentController");
        }
      }
    }
  }
  local_50 = (int64_t *)0x0;
LAB_016b7873:
  FUN_00da71b0();
  return local_50;
}

