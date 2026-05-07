// Function: FUN_01308280
// Address: 01308280
// Size: 506 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01308280(void)

{
  int64_t *plVar1;
  int64_t this_ptr;
  
  if (*(int64_t *)(this_ptr + 0x120) != 0) {
    *(void*)(this_ptr + 0x120) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x108) != 0) {
    *(void*)(this_ptr + 0x108) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x100) != 0) {
    *(void*)(this_ptr + 0x100) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0xe8) != 0) {
    *(void*)(this_ptr + 0xe8) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0xf0) != 0) {
    *(void*)(this_ptr + 0xf0) = 0;
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xf8) + 0x1c0))();
  if (*(int64_t **)(this_ptr + 0x110) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x110) + 0x1c0))();
  }
  if (*(int64_t *)(this_ptr + 0x118) != 0) {
    *(void*)(this_ptr + 0x118) = 0;
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x140) + 0x1c0))();
  (**(code **)(**(int64_t **)(this_ptr + 0x148) + 0x1c0))();
  plVar1 = (int64_t *)**(int64_t **)(*(int64_t *)(this_ptr + 0x128) + 0x10);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x1c0))();
  }
  plVar1 = (int64_t *)**(int64_t **)(*(int64_t *)(this_ptr + 0x130) + 0x10);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x1c0))();
  }
  plVar1 = *(int64_t **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x128) + 0x10) + 8);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x1c0))();
  }
  plVar1 = *(int64_t **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x130) + 0x10) + 8);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x1c0))();
  }
  plVar1 = *(int64_t **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x128) + 0x10) + 0x10);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x1c0))();
  }
  plVar1 = *(int64_t **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x130) + 0x10) + 0x10);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x1c0))();
  }
  plVar1 = *(int64_t **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x128) + 0x10) + 0x18);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x1c0))();
  }
  plVar1 = *(int64_t **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x130) + 0x10) + 0x18);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x1c0))();
  }
  *(void*)(this_ptr + 0x168) = 0;
  *(void*)(this_ptr + 0xd1) = 1;
  FUN_012dd8d0();
  return;
}

