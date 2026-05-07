// Function: FUN_01c85c10
// Address: 01c85c10
// Size: 532 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01c85c10(void)

{
  int64_t *plVar1;
  int64_t *this_ptr;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  FUN_01e3b710();
  plVar1 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(plVar1 + 0x27) = 0;
  plVar1[0x2e] = 0;
  *(void*)(plVar1 + 0x2f) = 0;
  plVar1[0x30] = 0;
  *(void*)(plVar1 + 0x31) = 0;
  plVar1[0x28] = 0;
  plVar1[0x29] = 0;
  *(void*)(plVar1 + 0x2a) = 0;
  plVar1[0x2b] = 0;
  plVar1[0x2c] = 0;
  *(void*)((int64_t)plVar1 + 0x165) = 0;
  *(void*)((int64_t)plVar1 + 0x18c) = 0;
  *(void*)((int64_t)plVar1 + 0x194) = 0;
  *(void*)((int64_t)plVar1 + 0x199) = 0;
  plVar1[0x35] = 0;
  plVar1[0x36] = 0;
  plVar1[0x37] = 0;
  plVar1[0x38] = 0;
  *plVar1 = (int64_t)&g_02683800;
  plVar1[2] = (int64_t)&g_026842c8;
  plVar1[0x39] = 0;
  plVar1[0x3a] = 0;
  (*g_02683818)();
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x4d0))();
  (**(code **)(*plVar1 + 0x558))();
  (**(code **)(*plVar1 + 0x9c8))();
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_60 + 0x370))();
  FUN_01d44d80(g_023b36b0);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar1 + 0x9d8))();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x450))();
  (**(code **)(*this_ptr + 0x570))();
  FUN_00d50b20();
  return;
}

