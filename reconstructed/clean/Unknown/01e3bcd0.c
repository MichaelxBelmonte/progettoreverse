// Function: FUN_01e3bcd0
// Address: 01e3bcd0
// Size: 544 bytes
// Class: Unknown

void FUN_01e3bcd0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  void*arg1;
  int64_t *this_ptr;
  
  FUN_01d81fd0();
  (**(code **)(*(int64_t *)*arg1 + 0x408))();
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))
            (*(void*)((int64_t)this_ptr + 0x10c),
             *(void*)((int64_t)this_ptr + 0x114));
  plVar1 = (int64_t *)*arg1;
  (**(code **)(*this_ptr + 0x560))();
  (**(code **)(*plVar1 + 0x3b8))();
  (**(code **)(*(int64_t *)*arg1 + 0x408))();
  plVar1 = (int64_t *)*arg1;
  lVar2 = this_ptr[8];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
  plVar1 = (int64_t *)*arg1;
  lVar2 = this_ptr[10];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3b8))();
  plVar1 = (int64_t *)*arg1;
  lVar2 = this_ptr[0xc];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x408))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  lVar2 = this_ptr[7];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}

