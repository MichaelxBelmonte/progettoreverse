// Function: FUN_007801f0
// Address: 007801f0
// Size: 708 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_007801f0(void* param_1,int64_t *param_2)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  int64_t local_38;
  char local_30;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if ((((g_0280ced8 == lVar1) || (g_0280cee8 == lVar1)) || (g_0280cef8 == lVar1)) ||
       ((g_0280cf08 == lVar1 || (g_0280cf18 == lVar1)))) {
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
      FUN_00d40470(&local_88,&stack0xffffffffffffff98,1,1);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (g_0280cf28 == lVar1) {
      FUN_001061f0();
      FUN_00757c60();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != local_58) {
        FUN_00757c60();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        if (local_30 == '\0') {
          if (local_38 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30 = '\0';
        }
        FUN_001060d0();
        if (local_38 != 0) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}

