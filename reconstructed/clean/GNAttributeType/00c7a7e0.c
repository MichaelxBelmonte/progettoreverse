// Function: FUN_00c7a7e0
// Address: 00c7a7e0
// Size: 537 bytes
// Class: GNAttributeType

void FUN_00c7a7e0(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  bool bVar7;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if ((g_028a6ca0 == (int64_t *)0x0) || (g_028a6ca9 == '\0')) {
    FUN_00e8cb50();
    if (g_028a6ca0 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar5 + 0x18))();
      if (g_028a6ca0 == plVar5) {
        bVar4 = false;
        bVar3 = false;
      }
      else {
        bVar4 = true;
        bVar3 = true;
        bVar7 = g_028a6ca0 != (int64_t *)0x0;
        g_028a6ca0 = plVar5;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      if (g_028a6ca8 == '\0') {
        g_028a6ca8 = '\x01';
        FUN_00e8cb90();
        bVar3 = bVar4;
      }
      if (!bVar3) {
        FUN_00d50b20();
      }
      g_028a6ca9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a6ca9 = '\x01';
      FUN_00e8cb70();
    }
  }
  local_70 = *arg1;
  local_68 = '\0';
  FUN_00c7a420(param_1,&local_70);
  lVar6 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 == 0) {
    FUN_00c7ab30();
    if ((local_40 != 0) && (lVar6 = local_40, local_38 == '\0')) {
      FUN_00d50b00();
    }
    lVar1 = *arg1;
    lVar2 = *(int64_t *)(lVar6 + 0x10);
    if (lVar2 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(lVar6 + 0x10) = lVar1;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    local_58 = '\0';
    local_50 = *arg1;
    local_48 = '\0';
    local_60 = lVar6;
    FUN_00c7a730(param_1,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  return;
}

