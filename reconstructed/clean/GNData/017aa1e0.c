// Function: FUN_017aa1e0
// Address: 017aa1e0
// Size: 524 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_017aa1e0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  void*this_ptr;
  bool bVar5;
  
  plVar4 = g_028adf28;
  if ((g_028adf28 == (int64_t *)0x0) || (g_028adf31 == '\0')) {
    FUN_00e8cb50();
    if (g_028adf28 == (int64_t *)0x0) {
      plVar4 = (int64_t *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar4 + 0x18))();
      if (g_028adf28 == plVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = g_028adf28 != (int64_t *)0x0;
        g_028adf28 = plVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028adf30 == '\0') {
        g_028adf30 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_027d2a40;
      if (g_027d2a40 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1910();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027d2a48;
      if (g_027d2a48 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1690();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027d2a50;
      if (g_027d2a50 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1570();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027d2a58;
      if (g_027d2a58 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1600();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028adf31 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028adf31 = '\x01';
      FUN_00e8cb70();
    }
    plVar4 = g_028adf28;
    *(void*)(this_ptr + 1) = 0;
    if (plVar4 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
      goto LAB_017aa3d2;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_017aa3d2:
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

