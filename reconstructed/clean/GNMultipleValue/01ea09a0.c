// Function: FUN_01ea09a0
// Address: 01ea09a0
// Size: 722 bytes
// Class: GNMultipleValue

void FUN_01ea09a0(uint64_t param_1)

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
  
  plVar5 = g_028ba150;
  if ((g_028ba150 == (int64_t *)0x0) || (g_028ba159 == '\0')) {
    FUN_00e8cb50();
    if (g_028ba150 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar5 + 0x18))();
      if (g_028ba150 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar6 = g_028ba150 != (int64_t *)0x0;
        g_028ba150 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028ba158 == '\0') {
        g_028ba158 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe1e0;
      if (g_027fe1e0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027fe1e8;
      if (g_027fe1e8 != 0) {
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
      lVar3 = g_027fe1f0;
      if (g_027fe1f0 != 0) {
        FUN_00d50b00();
      }
      local_70 = lVar3;
      local_68 = '\x01';
      FUN_00df1690();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe1f8;
      if (g_027fe1f8 != 0) {
        FUN_00d50b00();
      }
      local_60 = lVar3;
      local_58 = '\x01';
      FUN_00df1570();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe200;
      if (g_027fe200 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar3;
      local_48 = '\x01';
      FUN_00df1570();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe208;
      if (g_027fe208 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar3;
      local_38 = '\x01';
      FUN_00df1600();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe200;
      if (g_027fe200 != 0) {
        FUN_00d50b00();
      }
      local_30 = lVar3;
      local_28 = '\x01';
      FUN_00df1600();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      g_028ba159 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ba159 = '\x01';
      FUN_00e8cb70();
    }
    plVar5 = g_028ba150;
    *(void*)(this_ptr + 1) = 0;
    if (plVar5 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      goto LAB_01ea0c58;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01ea0c58:
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

