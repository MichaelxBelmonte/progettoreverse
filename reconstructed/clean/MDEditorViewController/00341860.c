// Function: FUN_00341860
// Address: 00341860
// Size: 512 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00341860(void)

{
  char cVar1;
  int64_t *this_ptr;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t *local_28;
  char local_20;
  
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_28 + 0x450))();
  if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x20))();
    uVar2 = (**(code **)(*local_28 + 0x68))();
    if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
      (**(code **)(*local_28 + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x20))();
    uVar3 = (**(code **)(*local_28 + 0xc0))();
    if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
      (**(code **)(*local_28 + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x20))();
    uVar4 = (**(code **)(*local_28 + 0xd0))();
    if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
      (**(code **)(*local_28 + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)(&UNK_000016f0 + *this_ptr))();
    uVar2 = FUN_0193c6b0(uVar2);
    uVar3 = FUN_0193c6b0(uVar3);
    uVar4 = FUN_0193c6b0(uVar4);
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x20))();
    (**(code **)(*local_28 + 0x60))(uVar2);
    if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
      (**(code **)(*local_28 + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x20))();
    (**(code **)(*local_28 + 0xe0))(uVar3,uVar4);
    if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
      (**(code **)(*local_28 + 0x10))();
      FUN_00d50b20();
    }
  }
  FUN_019f0fd0();
  (**(code **)(*this_ptr + 0x7b8))();
  (**(code **)(*local_28 + 0x620))();
  if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

