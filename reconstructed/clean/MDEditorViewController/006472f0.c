// Function: FUN_006472f0
// Address: 006472f0
// Size: 550 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_006472f0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *this_ptr;
  int64_t local_a0;
  char local_98;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_30;
  char local_28;
  
  if (this_ptr[0x16] != 0) {
    if (this_ptr[0x1d] != 0) {
      FUN_01e40eb0();
      lVar1 = this_ptr[0x2e];
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if (local_30 == lVar1) {
        return;
      }
    }
    if (*(int *)(this_ptr[0x20] + 0xc) == 0) {
      (**(code **)(*this_ptr + 0x5e0))();
      if ((local_28 == '\0') && (local_30 != 0)) {
        FUN_00d50b00();
      }
      FUN_00645c10();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (local_30 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      plVar2 = (int64_t *)this_ptr[0x2e];
      local_48 = 0;
      lVar1 = this_ptr[0x1d];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_48 = '\x01';
      local_50 = lVar1;
      (**(code **)(*plVar2 + 0x9e0))();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d403d0();
    lVar1 = g_02725940;
    if (g_02725940 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_60 = 0;
    local_58 = '\0';
    FUN_00d40470(&local_60,&stack0xffffffffffffffc0,1,1);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_0063f660();
  }
  return;
}

