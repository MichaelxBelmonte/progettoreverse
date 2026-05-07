// Function: FUN_016c3130
// Address: 016c3130
// Size: 1225 bytes
// Class: MUAraContentReader
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


void FUN_016c3130(int64_t param_1)

{
  int iVar1;
  uint64_t uVar2;
  char cVar3;
  void *pvVar4;
  void* pVar5;
  int64_t this_ptr;
  int64_t lVar6;
  double dVar7;
  double dVar8;
  uint64_t uVar9;
  double dVar10;
  int64_t local_d8;
  char local_d0;
  int iStack_74;
  double local_68;
  uint64_t local_60;
  char local_58;
  int local_4c;
  int64_t local_40;
  
  FUN_016d63b0();
  uVar2 = *(void*)(this_ptr + 0x68);
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  local_40 = **(int64_t **)(local_60 + 0x10);
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  lVar6 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + 8);
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  local_68 = (double)FUN_019079d0();
  local_4c = 2;
  while( true ) {
    pVar5 = (void*)param_1;
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    iVar1 = *(int *)(local_60 + 0xc);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (iVar1 <= local_4c) break;
    if (lVar6 != local_40) {
      local_40 = lVar6;
    }
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    param_1 = *(int64_t *)(local_60 + 0x10);
    lVar6 = *(int64_t *)(param_1 + (int64_t)local_4c * 8);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    dVar7 = (double)FUN_019079d0();
    dVar8 = dVar7;
    if (dVar7 <= local_68) {
      dVar8 = local_68;
    }
    dVar10 = dVar7;
    if (local_68 <= dVar7) {
      dVar10 = local_68;
    }
    if (g_02411148 < dVar8 / dVar10) {
      pvVar4 = _pthread_getspecific((void*)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      FUN_016cc400();
    }
    if ((local_68 != dVar7) || (NAN(local_68) || NAN(dVar7))) {
      pvVar4 = _pthread_getspecific((void*)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_60 = FUN_019079b0();
      pvVar4 = _pthread_getspecific((void*)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      FUN_00e7b970();
      if (((local_60 >> 0x20 != 0) && (iStack_74 = (int)((uint64_t)uVar2 >> 0x20), iStack_74 != 0))
         && (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_60 = FUN_019079b0();
        uVar9 = FUN_00e7b970();
        FUN_016da710(uVar9,local_60);
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        local_4c = local_4c + 1;
      }
    }
    local_4c = local_4c + 1;
    local_68 = dVar7;
  }
  return;
}

