// Function: FUN_0027ad60
// Address: 0027ad60
// Size: 509 bytes
// Class: Unknown

void FUN_0027ad60(uint64_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void*this_ptr;
  bool bVar6;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  plVar5 = g_02805da8;
  if ((g_02805da8 == (int64_t *)0x0) || (g_02805db1 == '\0')) {
    FUN_00e8cb50();
    if (g_02805da8 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar5 + 0x18))();
      if (g_02805da8 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar6 = g_02805da8 != (int64_t *)0x0;
        g_02805da8 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_02805db0 == '\0') {
        g_02805db0 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_026f6f70;
      if (g_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_026fbd08;
      if (g_026fbd08 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar4;
      local_48 = '\x01';
      FUN_00df16f0(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_026fbd10;
      if (g_026fbd10 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar3;
      local_38 = '\x01';
      FUN_00df1690();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_026fbd18;
      if (g_026fbd18 != 0) {
        FUN_00d50b00();
      }
      local_30 = lVar3;
      local_28 = '\x01';
      FUN_00df1570();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      g_02805db1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_02805db1 = '\x01';
      FUN_00e8cb70();
    }
    plVar5 = g_02805da8;
    *(void*)(this_ptr + 1) = 0;
    if (plVar5 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      goto LAB_0027af43;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_0027af43:
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

