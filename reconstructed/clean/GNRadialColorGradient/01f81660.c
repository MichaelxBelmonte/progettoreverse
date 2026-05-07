// Function: FUN_01f81660
// Address: 01f81660
// Size: 537 bytes
// Class: GNRadialColorGradient

void FUN_01f81660(uint32_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  void*arg1;
  int64_t *this_ptr;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x640))();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d48370();
  (**(code **)(*local_40 + 0x4f0))();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x3b0))();
  (**(code **)(*local_40 + 0x3a8))();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x368))(g_023b4a20);
  (**(code **)(*(int64_t *)this_ptr[0x27] + 0x3f0))();
  FUN_01eab940(param_1,param_2);
  FUN_01d48390();
  FUN_00d50b20();
  return;
}

