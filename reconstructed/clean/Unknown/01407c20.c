// Function: FUN_01407c20
// Address: 01407c20
// Size: 560 bytes
// Class: Unknown

void FUN_01407c20(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar3;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if ((g_028ace58 == (int64_t *)0x0) || (g_028ace61 == '\0')) {
    FUN_00e8cb50();
    if (g_028ace58 == (int64_t *)0x0) {
      plVar1 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar1 + 0x18))();
      bVar3 = g_028ace58 == (int64_t *)0x0;
      g_028ace58 = plVar1;
      if (((bVar3) || (FUN_00d50b20(), g_028ace58 != (int64_t *)0x0)) && (g_028ace60 == '\0'))
      {
        g_028ace60 = '\x01';
        FUN_00e8cb90();
      }
      g_028ace61 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ace61 = '\x01';
      FUN_00e8cb70();
    }
  }
  local_88 = *arg1;
  local_80 = '\0';
  FUN_01408000(param_1,&local_88);
  lVar2 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 == 0) {
    FUN_01780150();
    local_48 = local_58;
    local_40 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_40 = '\x01';
    FUN_0009d720();
    if (local_38 != 0) {
      lVar2 = local_38;
      if (local_30 == '\0') {
        FUN_00d50b00();
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_30 = '\0';
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_70 = '\0';
    local_68 = *arg1;
    local_60 = '\0';
    local_78 = lVar2;
    FUN_014080b0(param_1,&local_68);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = lVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

