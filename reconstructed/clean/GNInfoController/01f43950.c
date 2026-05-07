// Function: FUN_01f43950
// Address: 01f43950
// Size: 557 bytes
// Class: GNInfoController

void FUN_01f43950(void)

{
  int iVar1;
  void*puVar2;
  int64_t *this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x478))();
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
    return;
  }
  FUN_01d64cb0();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_01f43b66;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_01f43b66;
  iVar1 = FUN_01d5b230();
  if (0 < iVar1) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
    FUN_01f50d20();
    FUN_01f51370();
    FUN_01ede360(0,0,0);
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_00d21140();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5ef60(g_02422dc0,g_023dcce4);
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01f43b66:
  FUN_00d50b20();
  return;
}

