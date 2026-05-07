// Function: FUN_00b80190
// Address: 00b80190
// Size: 674 bytes
// Class: GNFilePath

uint64_t FUN_00b80190(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  void*puVar5;
  int64_t *this_ptr;
  uint64_t unaff_R14;
  uint64_t uVar6;
  bool bVar7;
  int64_t local_a8;
  char local_a0;
  int64_t local_38;
  char local_30;
  
  if (*this_ptr == 0) {
    uVar6 = 0;
  }
  else {
    if ((g_028a5660 == (void*)0x0) || (g_028a5669 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5660 == (void*)0x0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_0258a670;
        (*g_0258a688)();
        if (g_028a5660 == puVar5) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          bVar2 = true;
          bVar1 = true;
          bVar7 = g_028a5660 != (void*)0x0;
          g_028a5660 = puVar5;
          if (bVar7) {
            FUN_00d50b20();
          }
        }
        if (g_028a5668 == '\0') {
          g_028a5668 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        FUN_00e38130(0,0,0);
        g_028a5669 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5669 = '\x01';
        FUN_00e8cb70();
      }
    }
    FUN_00b807b0();
    if ((local_30 == '\0') && (local_38 != 0)) {
      FUN_00d50b00();
    }
    if (local_38 == 0) {
      cVar3 = (**(code **)(*(int64_t *)*this_ptr + 0x3a0))();
      if (cVar3 == '\0') {
        FUN_00b9bdf0();
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        uVar6 = CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
      }
      else {
        uVar6 = 0;
      }
      FUN_00d46300();
      FUN_00b80860();
    }
    else {
      uVar4 = FUN_00d45ad0();
      uVar6 = (uint64_t)uVar4;
      FUN_00d50b20();
    }
  }
  return uVar6 & 0xffffffff;
}

