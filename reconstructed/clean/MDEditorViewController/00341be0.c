// Function: FUN_00341be0
// Address: 00341be0
// Size: 710 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00341be0(void)

{
  int64_t lVar1;
  char cVar2;
  int64_t *this_ptr;
  int64_t local_78;
  char local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_30;
  char local_28;
  
  FUN_019f0ff0();
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_30 + 0x450))();
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x20))();
    local_68 = (**(code **)(*local_30 + 0x68))();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      (**(code **)(*local_30 + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x20))();
    local_60 = (**(code **)(*local_30 + 0xc0))();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      (**(code **)(*local_30 + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x20))();
    local_58 = (**(code **)(*local_30 + 0xd0))();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      (**(code **)(*local_30 + 0x10))();
      FUN_00d50b20();
    }
    local_48 = 0;
    lVar1 = this_ptr[0xa8];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = lVar1;
    (**(code **)(&UNK_000016f8 + *this_ptr))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_68 = FUN_01953bb0(local_68);
    local_60 = FUN_01953bb0(local_60);
    local_58 = FUN_01953bb0(local_58);
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x20))();
    (**(code **)(*local_30 + 0x60))(local_68);
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      (**(code **)(*local_30 + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x20))();
    (**(code **)(*local_30 + 0xe0))(local_60,local_58);
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      (**(code **)(*local_30 + 0x10))();
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  lVar1 = g_026f6d60;
  if (g_026f6d60 != 0) {
    FUN_00d50b00();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_78 = 0;
  local_70 = '\0';
  FUN_00d40470(&local_78,&stack0xffffffffffffffc0,1,3);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

