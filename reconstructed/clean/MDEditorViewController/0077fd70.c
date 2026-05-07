// Function: FUN_0077fd70
// Address: 0077fd70
// Size: 661 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_0077fd70(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t *plVar4;
  int64_t this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_58;
  char local_50;
  int64_t *local_38;
  char local_30;
  
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_38 + 0x450))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_00d403d0();
    lVar1 = g_02726c90;
    if (g_02726c90 != 0) {
      FUN_00d50b00();
    }
    if (this_ptr != 0) {
      FUN_00d50b00();
    }
    local_88 = 0;
    local_80 = '\0';
    plVar4 = &local_88;
    FUN_00d40470(plVar4,&stack0xffffffffffffff98,1,1);
    param_1 = (void*)plVar4;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_001061f0();
  FUN_00757c60();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_38 != local_58) {
    FUN_00757c60();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_001060d0();
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}

