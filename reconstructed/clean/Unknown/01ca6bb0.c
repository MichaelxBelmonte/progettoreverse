// Function: FUN_01ca6bb0
// Address: 01ca6bb0
// Size: 653 bytes
// Class: Unknown

void FUN_01ca6bb0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  void*puVar4;
  void*arg1;
  void*this_ptr;
  int64_t local_48;
  char local_40;
  void*local_38;
  char local_30;
  
  FUN_01ca63c0();
  FUN_000175c0();
  if ((local_30 == '\0') && (local_38 != (void*)0x0)) {
    FUN_00d50b00();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_026fceb8;
  if (local_38 == (void*)0x0) {
    plVar1 = (int64_t *)*arg1;
    if (g_026fceb8 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = g_026fcec0;
    if (cVar3 == '\0') {
      plVar1 = (int64_t *)*arg1;
      if (g_026fcec0 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_027e92b0;
      if (cVar3 == '\0') {
        plVar1 = (int64_t *)*arg1;
        if (g_027e92b0 != 0) {
          FUN_00d50b00();
        }
        cVar3 = (**(code **)(*plVar1 + 0x50))();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        local_38 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        if (cVar3 == '\0') {
          puVar4 = &g_026b65c8;
        }
        else {
          puVar4 = &g_026c30d8;
        }
      }
      else {
        local_38 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        puVar4 = &g_026b6238;
      }
    }
    else {
      local_38 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      puVar4 = &g_026b6958;
    }
    *local_38 = puVar4 + 0x10;
    (**(code **)(puVar4 + 0x28))();
    FUN_01ca63c0();
    FUN_00ca0840();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = local_38;
  *(void*)(this_ptr + 1) = 1;
  return;
}

