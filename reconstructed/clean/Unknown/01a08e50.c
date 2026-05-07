// Function: FUN_01a08e50
// Address: 01a08e50
// Size: 906 bytes
// Class: Unknown

void FUN_01a08e50(void)

{
  int64_t *plVar1;
  char cVar2;
  void*arg1;
  int64_t this_ptr;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_40;
  char local_38;
  
  FUN_01d48b40(g_02390124);
  FUN_01989f80();
  if (local_b0 == 0) {
    cVar2 = '\0';
  }
  else {
    FUN_01989f80();
    (**(code **)(*local_90 + 0xe20))();
    local_40 = *(int64_t *)(this_ptr + 0x170);
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    cVar2 = FUN_00d24090();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    FUN_01cfcdc0(g_02390124,g_0239011c,0,g_0239011c);
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)*arg1;
    FUN_01e3f820();
    (**(code **)(*plVar1 + 0x3b0))();
    FUN_01cfbee0(g_02390120,0,0);
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01cfcdc0(g_023b3888,0,g_02391090,g_023b3888);
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)*arg1;
    FUN_01e3f820();
    (**(code **)(*plVar1 + 0x3b0))();
    FUN_01cfbee0(g_02394214,0,0);
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  plVar1 = (int64_t *)*arg1;
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x3b8))();
  return;
}

