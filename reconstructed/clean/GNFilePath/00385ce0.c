// Function: FUN_00385ce0
// Address: 00385ce0
// Size: 617 bytes
// Class: GNFilePath

void FUN_00385ce0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *plVar4;
  int64_t *arg1;
  void*this_ptr;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_40;
  char local_38;
  
  if (*arg1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  (**(code **)(*(int64_t *)*arg1 + 0x368))();
  lVar2 = g_02704030;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
    lVar2 = g_02704030;
  }
  g_02704030 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  FUN_00276fd0();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00385e18;
  }
  arg1 = &g_02802688;
LAB_00385e18:
  if (*arg1 != 0) {
    FUN_00cd64a0();
    FUN_00cd0b60();
    (**(code **)(*local_a0 + 0x368))();
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    lVar2 = g_02704038;
    if (g_02704038 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

