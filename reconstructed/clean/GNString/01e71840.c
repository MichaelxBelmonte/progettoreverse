// Function: FUN_01e71840
// Address: 01e71840
// Size: 920 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e71840(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *this_ptr;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  
  FUN_01e3b710();
  this_ptr[0x29] = 0;
  (**(code **)(*this_ptr + 0x4d0))(0,g_0241b400);
  (**(code **)(*this_ptr + 0x570))();
  (**(code **)(*this_ptr + 0x558))();
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(plVar3 + 0x27) = 0;
  plVar3[0x2e] = 0;
  *(void*)(plVar3 + 0x2f) = 0;
  plVar3[0x30] = 0;
  *(void*)(plVar3 + 0x31) = 0;
  plVar3[0x28] = 0;
  plVar3[0x29] = 0;
  *(void*)(plVar3 + 0x2a) = 0;
  plVar3[0x2b] = 0;
  plVar3[0x2c] = 0;
  *(void*)((int64_t)plVar3 + 0x165) = 0;
  *(void*)((int64_t)plVar3 + 0x18c) = 0;
  *(void*)((int64_t)plVar3 + 0x194) = 0;
  *(void*)((int64_t)plVar3 + 0x199) = 0;
  plVar3[0x35] = 0;
  plVar3[0x36] = 0;
  plVar3[0x37] = 0;
  plVar3[0x38] = 0;
  *plVar3 = (int64_t)&g_02677e10;
  plVar3[2] = (int64_t)&g_026788e8;
  plVar3[0x39] = (int64_t)&g_02678928;
  *(void*)((int64_t)plVar3 + 500) = 0;
  *(void*)(plVar3 + 0x3f) = 0;
  plVar3[0x43] = 0;
  plVar3[0x3c] = 0;
  plVar3[0x3d] = 0;
  plVar3[0x3a] = 0;
  plVar3[0x3b] = 0;
  *(void*)(plVar3 + 0x3e) = 0;
  *(void*)((int64_t)plVar3 + 0x1fc) = 0;
  *(void*)((int64_t)plVar3 + 0x204) = 0;
  *(void*)((int64_t)plVar3 + 0x20c) = 0;
  (*g_02677e28)();
  (**(code **)(*plVar3 + 0x4d0))(g_02421f10,g_02421f20);
  FUN_01cef4c0();
  lVar1 = g_027f4250;
  if (g_027f4250 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_02800110;
  if (g_02800110 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar2;
  local_90 = '\x01';
  local_88 = 0;
  local_80 = '\0';
  FUN_00d31230(&local_88,&local_98);
  lVar2 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  (**(code **)(*plVar3 + 0x958))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  (**(code **)(*plVar3 + 0xa20))();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  lVar1 = g_027f4288;
  if (g_027f4288 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar1;
  local_70 = '\x01';
  (**(code **)(*plVar3 + 0xa10))();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar3 + 0x558))();
  local_60 = '\0';
  local_68 = plVar3;
  (**(code **)(*this_ptr + 0x450))();
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

