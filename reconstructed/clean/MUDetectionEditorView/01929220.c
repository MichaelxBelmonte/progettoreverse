// Function: FUN_01929220
// Address: 01929220
// Size: 1028 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_01929220(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  void *pvVar5;
  int64_t *this_ptr;
  float fVar6;
  float fVar7;
  float local_58;
  float local_54;
  int64_t local_50;
  char local_48;
  int local_38;
  
  lVar2 = local_50;
  (**(code **)(*this_ptr + 0x3f8))();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  plVar1 = (int64_t *)this_ptr[0x1b];
  if (*(int *)(local_50 + 0xc) == 0) {
    (**(code **)(*plVar1 + 0x998))();
    plVar1 = (int64_t *)this_ptr[0x1b];
    FUN_00e9aaa0();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    (**(code **)(*plVar1 + 0x958))();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    cVar3 = (**(code **)(*this_ptr + 0x698))();
    if (cVar3 != '\0') {
      (**(code **)(*this_ptr + 0x688))();
    }
    (**(code **)(*plVar1 + 0x998))();
    local_50 = 0;
    local_38 = -1;
    local_58 = g_02391074;
    local_54 = g_02391078;
    fVar6 = local_58;
    while( true ) {
      local_58 = fVar6;
      lVar4 = (int64_t)local_38;
      local_38 = local_38 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_38) break;
      local_50 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((void*)*(int64_t *)(lVar2 + 0x10));
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar6 = (float)FUN_01265b60();
      fVar7 = fVar6;
      if (local_54 <= fVar6) {
        fVar7 = local_54;
      }
      local_54 = fVar7;
      if (fVar6 <= local_58) {
        fVar6 = local_58;
      }
    }
    FUN_00083b20();
    if (*(int *)(lVar2 + 0xc) == 1) {
      plVar1 = (int64_t *)this_ptr[0x1b];
      (**(code **)(*(int64_t *)this_ptr[0x1c] + 0x378))(local_54);
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x958))();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      plVar1 = (int64_t *)this_ptr[0x1b];
      if ((local_54 != local_58) || (NAN(local_54) || NAN(local_58))) {
        FUN_00e99dd0();
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar1 + 0x958))();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*(int64_t *)this_ptr[0x1c] + 0x378))();
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar1 + 0x958))();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_00d50b20();
  return;
}

