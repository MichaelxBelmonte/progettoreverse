// Function: FUN_0039f7d0
// Address: 0039f7d0
// Size: 541 bytes
// Class: MDMetaWindowController

void FUN_0039f7d0(void)

{
  void*arg1;
  int64_t *this_ptr;
  int64_t *local_90;
  char local_88;
  int64_t local_40;
  char local_38;
  
  FUN_01d39800(this_ptr[0x5c],this_ptr[0x5d],g_02390124);
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_90 + 0x390))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(g_02390124);
  FUN_01cfcdc0(*(void*)(local_40 + 0x10),*(void*)(local_40 + 0x14),
               *(void*)(local_40 + 0x18),g_02394288);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
  FUN_01d488d0();
  (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
  FUN_00d50b20();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}

