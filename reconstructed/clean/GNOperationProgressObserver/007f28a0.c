// Function: FUN_007f28a0
// Address: 007f28a0
// Size: 1012 bytes
// Class: GNOperationProgressObserver

void FUN_007f28a0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  void*local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  void*local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x18) != 0) {
    FUN_00172bc0();
    local_d8 = '\0';
    local_e0 = (int64_t *)0x0;
    FUN_017a9390();
    if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
      (**(code **)(*local_e0 + 0x10))();
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x18);
  lVar3 = lVar2;
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x18) = lVar1;
    lVar3 = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar3 = *(int64_t *)(this_ptr + 0x18);
    }
  }
  if ((lVar3 != 0) && (*param_2 != 0)) {
    FUN_017a6db0();
    if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (local_70 != (void*)0x0) {
      FUN_017a6db0();
      (**(code **)(*local_f0 + 0x468))();
      lVar1 = g_02729550;
      if (g_02729550 != 0) {
        FUN_00d50b00();
      }
      local_108 = lVar1;
      FUN_00083ea0(2,&local_108);
      FUN_000b4da0();
      lVar2 = local_90;
      if (local_88 == '\0') {
        if (((local_90 != 0) && (FUN_00d50b00(), local_88 != '\0')) && (local_90 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_88 = '\0';
      }
      local_70 = (void*)&g_0253d630;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      local_70 = &g_024c5048;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar1 = g_026f6f70;
      if (g_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_0272f678;
      local_d0 = lVar1;
      local_c8 = '\x01';
      if (g_0272f678 != 0) {
        FUN_00d50b00();
      }
      local_c0 = lVar3;
      local_b8 = '\x01';
      local_b0 = lVar2;
      local_a8 = '\0';
      FUN_00d31230(&local_b0,&local_c0);
      local_40 = local_70;
      local_38 = 0;
      if (local_68 == '\0') {
        if (local_70 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_38 = '\x01';
      local_a0 = *param_2;
      local_98 = '\0';
      FUN_00172950();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      local_78 = 0;
      (**(code **)(*(int64_t *)(this_ptr + 0x10) + 0x10))();
      FUN_00d50b00();
      local_78 = '\x01';
      local_80 = (int64_t *)(this_ptr + 0x10);
      FUN_017a9390();
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        (**(code **)(*local_80 + 0x10))();
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

