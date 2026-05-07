// Function: FUN_016c2780
// Address: 016c2780
// Size: 1272 bytes
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


void FUN_016c2780(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void*this_ptr;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  plVar1 = (int64_t *)FUN_00e8fc40();
  FUN_0119c6b0();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific((void*)param_1);
  plVar5 = plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar5 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  FUN_018f9610();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d64850();
  lVar3 = plVar5[10];
  if (lVar3 != local_40) {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    plVar5[10] = local_40;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (*param_2 == 0) {
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    FUN_00e7bcc0();
    FUN_01909ea0();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_40 = local_50;
    FUN_00d21140();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = *param_2;
    FUN_00d243f0();
  }
  FUN_0123fbe0();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_0165b080();
  pvVar2 = _pthread_getspecific((void*)param_1);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = plVar1[0xb];
    plVar5 = plVar1;
  }
  else {
    plVar5 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    lVar3 = plVar5[0xb];
  }
  if (lVar3 != local_40) {
    if (local_40 == 0) {
      plVar5[0xb] = 0;
      param_1 = lVar3;
    }
    else {
      FUN_00d50b00();
      param_1 = plVar5[0xb];
      plVar5[0xb] = local_40;
    }
    if (param_1 != 0) {
      FUN_00d50b20();
    }
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = 1;
  while( true ) {
    pvVar2 = _pthread_getspecific((void*)param_1);
    plVar5 = plVar1;
    if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      plVar5 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    if (*(int *)(plVar5[0xc] + 0xc) <= lVar3) break;
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01909dc0();
    FUN_016cc400();
    lVar3 = lVar3 + 1;
  }
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016cc730();
  *this_ptr = plVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}

