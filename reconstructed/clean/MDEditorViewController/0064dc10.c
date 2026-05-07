// Function: FUN_0064dc10
// Address: 0064dc10
// Size: 507 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_0064dc10(uint64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x5f8))();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int *)((int64_t)plVar2 + 0xc) == 1) {
    if (this_ptr[0x30] != 0) {
      FUN_00093a30();
      plVar2 = local_40;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == this_ptr) {
        FUN_00094d10();
      }
    }
    FUN_01e56750();
    FUN_01e5eda0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*this_ptr + 0x5d8))();
    plVar2 = local_40;
    if (((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    local_48 = 0;
    lVar1 = this_ptr[0x16];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = lVar1;
    cVar3 = (**(code **)(*this_ptr + 0x620))(param_1,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      local_58 = 0;
      lVar1 = this_ptr[0x16];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      local_60 = lVar1;
      (**(code **)(*this_ptr + 0x628))(param_1,&local_60);
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}

