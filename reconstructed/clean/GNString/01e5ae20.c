// Function: FUN_01e5ae20
// Address: 01e5ae20
// Size: 726 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e5ae20(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  void*arg1;
  int64_t this_ptr;
  
  lVar2 = g_027f3dd8;
  plVar1 = (int64_t *)*arg1;
  if (g_027f3dd8 != 0) {
    param_1 = FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x5a0))(param_1,2);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01d81fd0();
  plVar1 = (int64_t *)*arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x18);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x408))();
  (**(code **)(*(int64_t *)*arg1 + 0x3f0))(*(void*)(this_ptr + 0x88));
  (**(code **)(*(int64_t *)*arg1 + 0x408))();
  (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
  (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
  (**(code **)(*(int64_t *)*arg1 + 0x3b8))();
  (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
  (**(code **)(*(int64_t *)*arg1 + 0x3f0))(*(void*)(this_ptr + 0x40));
  plVar1 = (int64_t *)*arg1;
  if (*(int64_t *)(this_ptr + 0x58) == 0) {
    lVar2 = *(int64_t *)(this_ptr + 0x50);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x400))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*plVar1 + 0x400))();
  }
  plVar1 = (int64_t *)*arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x58);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x68);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}

