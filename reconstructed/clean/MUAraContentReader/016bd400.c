// Function: FUN_016bd400
// Address: 016bd400
// Size: 1164 bytes
// Class: MUAraContentReader
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "playbackRegion->getDocumentController() == documentController"
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


int64_t FUN_016bd400(void*param_1,uint32_t param_2)

{
  bool bVar1;
  char cVar2;
  uint8_t uVar3;
  void *pvVar4;
  void* pVar5;
  void*puVar6;
  int64_t arg1;
  int64_t this_ptr;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  puVar6 = param_1;
  uVar8 = FUN_00da7190();
  pVar5 = (void*)puVar6;
  if ((this_ptr == 0) || (cVar2 = FUN_0168a120(), uVar8 = extraout_XMM0_Qa, cVar2 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)(uVar8,"provided object ref is invalid");
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if (g_02802f60 != (void*)0x0) {
        lVar7 = 0;
        if (*g_02802f60 != 0x0) {
          (**g_02802f60)(extraout_XMM0_Qa_00,"call required from document main thread");
          lVar7 = 0;
        }
        goto LAB_016bd4c7;
      }
    }
    else {
      uVar8 = extraout_XMM0_Qa_00;
      if ((arg1 == 0) || (cVar2 = FUN_01658870(), uVar8 = extraout_XMM0_Qa_01, cVar2 == '\0'))
      {
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)(uVar8,"provided object ref is invalid");
        }
      }
      else {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar8 = FUN_01654a00();
        lVar7 = local_48;
        if ((local_40 != '\0') && (local_48 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        if (lVar7 == this_ptr) {
          uVar3 = FUN_0167b260();
          cVar2 = FUN_016bcb60(extraout_XMM0_Qa_02,uVar3);
          if (cVar2 == '\0') {
            if (g_02802f60 != (void*)0x0) {
              lVar7 = 0;
              if (*g_02802f60 != 0x0) {
                (**g_02802f60)(extraout_XMM0_Qa_03,"isContentAvailable");
              }
              goto LAB_016bd4c7;
            }
          }
          else {
            if (param_1 == (void*)0x0) {
              pvVar4 = _pthread_getspecific(pVar5);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0165a070();
              local_68 = local_58;
              local_60 = 0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_60 = '\x01';
              local_90 = '\0';
              local_98 = 0;
              FUN_0172d300(&local_98,param_2);
              lVar7 = local_48;
              if (local_48 == 0) {
                lVar7 = 0;
                bVar1 = false;
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
              if ((local_90 != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar4 = _pthread_getspecific(pVar5);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0165a070();
              local_78 = local_58;
              local_70 = 0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_70 = '\x01';
              FUN_0172dae0(*param_1,param_1[1]);
              lVar7 = local_48;
              if (local_48 == 0) {
                lVar7 = 0;
                bVar1 = false;
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
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            if (lVar7 != 0) {
              local_80 = '\0';
              local_88 = lVar7;
              FUN_01689550();
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
              if (bVar1) {
                FUN_00d50b20();
              }
              goto LAB_016bd4c7;
            }
          }
        }
        else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)
                    (uVar8,"playbackRegion->getDocumentController() == documentController");
        }
      }
    }
  }
  lVar7 = 0;
LAB_016bd4c7:
  FUN_00da71b0();
  return lVar7;
}

