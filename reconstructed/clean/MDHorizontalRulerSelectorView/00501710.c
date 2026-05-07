// Function: FUN_00501710
// Address: 00501710
// Size: 557 bytes
// Class: MDHorizontalRulerSelectorView

void FUN_00501710(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  void*puVar4;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  FUN_0197a540();
  (**(code **)(*this_ptr + 0x9f8))();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *puVar4 = &g_024c4260;
  puVar4[2] = &g_024c4b98;
  puVar4[0x27] = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  (*g_024c4278)();
  FUN_01d9ac40();
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *puVar4 = &g_024dc470;
  puVar4[2] = &g_024dcdc0;
  puVar4[0x27] = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  puVar4[0x2a] = 0;
  (*g_024dc488)();
  FUN_01d9ade0();
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  lVar2 = g_026f6f70;
  plVar1 = (int64_t *)this_ptr[0x3a];
  if (plVar1 != (int64_t *)0x0) {
    if (g_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_02709df0;
    if (g_02709df0 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar3;
    local_58 = '\x01';
    local_50 = 0;
    local_48 = '\0';
    FUN_00d31230(&local_50,&local_60);
    local_30 = local_40;
    local_28 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_28 = '\x01';
    (**(code **)(*plVar1 + 0x6a8))();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x928))();
  return;
}

