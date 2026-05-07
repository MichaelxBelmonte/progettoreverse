// Function: FUN_016baff0
// Address: 016baff0
// Size: 1573 bytes
// Class: MUAraContentReader
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "audioSource->getDocumentController() == documentController"
//   "isContentAvailable"
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


int64_t FUN_016baff0(void*param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint8_t uVar4;
  void *pvVar5;
  void* pVar6;
  void*puVar7;
  int64_t lVar8;
  int64_t arg1;
  int64_t this_ptr;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  int64_t local_48;
  char local_40;
  
  puVar7 = param_1;
  uVar10 = FUN_00da7190();
  pVar6 = (void*)puVar7;
  if ((this_ptr == 0) || (cVar3 = FUN_0168a120(), uVar10 = extraout_XMM0_Qa, cVar3 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)(uVar10,"provided object ref is invalid");
    }
  }
  else {
    cVar3 = FUN_0168a0d0();
    if (cVar3 == '\0') {
      if (g_02802f60 != (void*)0x0) {
        lVar8 = 0;
        if (*g_02802f60 != 0x0) {
          (**g_02802f60)(extraout_XMM0_Qa_00,"call required from document main thread");
          lVar8 = 0;
        }
        goto LAB_016bb0b6;
      }
    }
    else {
      uVar10 = extraout_XMM0_Qa_00;
      if ((arg1 == 0) || (cVar3 = FUN_0166db10(), uVar10 = extraout_XMM0_Qa_01, cVar3 == '\0'))
      {
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)(uVar10,"provided object ref is invalid");
        }
      }
      else {
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_01660830();
        lVar8 = local_48;
        if ((local_40 != '\0') && (local_48 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if (lVar8 == this_ptr) {
          uVar4 = FUN_0167b260();
          cVar3 = FUN_016b9a60(extraout_XMM0_Qa_02,uVar4);
          if (cVar3 != '\0') {
            if (param_2 == 0x15) {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0166d810();
              local_50 = local_48;
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
                if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              pVar6 = (void*)lVar8;
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0166d4c0();
            }
            else if (param_2 == 0x14) {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0166d7d0();
              local_50 = local_48;
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
                if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              pVar6 = (void*)lVar8;
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0166d4c0();
            }
            else {
              bVar2 = false;
              local_50 = 0;
            }
            lVar9 = local_50;
            if (param_1 == (void*)0x0) {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016676f0();
              local_70 = local_60;
              local_68 = 0;
              if (local_58 == '\0') {
                if (local_60 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = '\0';
              }
              local_68 = '\x01';
              local_a0 = lVar9;
              local_98 = '\0';
              FUN_0172d300(&local_a0,param_2);
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar1 = false;
                lVar8 = 0;
              }
              else if (local_40 == '\0') {
                FUN_00d50b00();
                bVar1 = true;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
                bVar1 = true;
              }
              if ((local_98 != '\0') && (local_a0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016676f0();
              local_80 = local_60;
              local_78 = 0;
              if (local_58 == '\0') {
                if (local_60 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = '\0';
              }
              lVar9 = local_50;
              local_78 = '\x01';
              FUN_0172dae0(*param_1,param_1[1]);
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar1 = false;
                lVar8 = 0;
              }
              else if (local_40 == '\0') {
                FUN_00d50b00();
                bVar1 = true;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
                bVar1 = true;
              }
              if ((local_78 != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
            }
            if (lVar8 == 0) {
              lVar8 = 0;
            }
            else {
              local_88 = '\0';
              local_90 = lVar8;
              FUN_01689550();
              if ((local_88 != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
              if (bVar1) {
                FUN_00d50b20();
              }
            }
            if ((bVar2) && (lVar9 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_016bb0b6;
          }
          if (g_02802f60 != (void*)0x0) {
            lVar8 = 0;
            if (*g_02802f60 != 0x0) {
              (**g_02802f60)(extraout_XMM0_Qa_03,"isContentAvailable");
            }
            goto LAB_016bb0b6;
          }
        }
        else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)
                    (uVar10,"audioSource->getDocumentController() == documentController");
        }
      }
    }
  }
  lVar8 = 0;
LAB_016bb0b6:
  FUN_00da71b0();
  return lVar8;
}

