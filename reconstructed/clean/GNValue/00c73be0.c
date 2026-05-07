// Function: FUN_00c73be0
// Address: 00c73be0
// Size: 771 bytes
// Class: GNValue

void* FUN_00c73be0(uint64_t param_1,void*param_2)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  void*this_ptr;
  int64_t lVar4;
  int64_t *local_40;
  char local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025795a8;
  (*g_025795c0)();
  (**(code **)(*(int64_t *)*param_2 + 0x368))();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d8dbf0();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d8c7a0();
  cVar2 = FUN_00d8ca70();
  lVar1 = g_0270b790;
  lVar4 = g_026fce10;
  if (cVar2 == '-') {
    if (g_0270b790 != 0) {
      FUN_00d50b00();
      lVar4 = lVar1;
      goto LAB_00c73cef;
    }
  }
  else if (g_026fce10 != 0) {
    FUN_00d50b00();
    goto LAB_00c73cef;
  }
  lVar4 = 0;
LAB_00c73cef:
  FUN_00d8c7a0();
  FUN_00e7b4e0();
  FUN_00d8e100();
  FUN_00d8c7d0();
  FUN_00cddf30();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*(int64_t *)*param_2 + 0x498))();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*local_40 + 0x4a0))();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*param_2 + 0x488))();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*local_40 + 0x490))();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this_ptr;
}

