// Function: FUN_00b7ce70
// Address: 00b7ce70
// Size: 722 bytes
// Class: GNFilePath

void FUN_00b7ce70(uint64_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void*this_ptr;
  bool bVar6;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  plVar5 = g_028a55e0;
  if ((g_028a55e0 == (int64_t *)0x0) || (g_028a55e9 == '\0')) {
    FUN_00e8cb50();
    if (g_028a55e0 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar5 + 0x18))();
      if (g_028a55e0 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar6 = g_028a55e0 != (int64_t *)0x0;
        g_028a55e0 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028a55e8 == '\0') {
        g_028a55e8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_0275e490;
      if (g_0275e490 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_02764108;
      if (g_02764108 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar4;
      local_78 = '\x01';
      FUN_00df16f0(param_1,&local_80);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_02764110;
      if (g_02764110 != 0) {
        FUN_00d50b00();
      }
      local_70 = lVar3;
      local_68 = '\x01';
      FUN_00df1690();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_02764118;
      if (g_02764118 != 0) {
        FUN_00d50b00();
      }
      local_60 = lVar3;
      local_58 = '\x01';
      FUN_00df1570();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_02764120;
      if (g_02764120 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar3;
      local_48 = '\x01';
      FUN_00df1570();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_02764128;
      if (g_02764128 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar3;
      local_38 = '\x01';
      FUN_00df1600();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_02764130;
      if (g_02764130 != 0) {
        FUN_00d50b00();
      }
      local_30 = lVar3;
      local_28 = '\x01';
      FUN_00df1600();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      g_028a55e9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a55e9 = '\x01';
      FUN_00e8cb70();
    }
    plVar5 = g_028a55e0;
    *(void*)(this_ptr + 1) = 0;
    if (plVar5 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      goto LAB_00b7d128;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00b7d128:
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

