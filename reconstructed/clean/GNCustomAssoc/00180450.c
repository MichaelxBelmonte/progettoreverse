// Function: FUN_00180450
// Address: 00180450
// Size: 539 bytes
// Class: GNCustomAssoc
// String references:
//   "GNCustomAssoc"

void FUN_00180450(void)

{
  int iVar1;
  void*puVar2;
  uint32_t uVar3;
  int64_t local_70;
  
  if ((g_026eb080 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026eafd0 = FUN_001ba850();
    g_026eafb8 = "GNCustomAssoc";
    g_026eafc0 = 0x50;
    g_026eafc8 = FUN_001c07a0;
    g_026eafd8 = 0;
    ram_00000000026eafe0 = 0;
    g_026eafe8 = 0;
    ram_00000000026eaff0 = 0;
    g_026eaff8 = 0;
    ram_00000000026eb000 = 0;
    g_026eb008 = 0;
    ram_00000000026eb010 = 0;
    g_026eb018 = 0;
    ram_00000000026eb020 = 0;
    g_026eb028 = 0;
    ram_00000000026eb030 = 0;
    g_026eb038 = 0;
    ram_00000000026eb040 = 0;
    g_026eb048 = 0;
    ram_00000000026eb050 = 0;
    g_026eb058 = 0;
    ram_00000000026eb060 = 0;
    g_026eb068 = 0;
    _ram_00000000026eb070 = 0;
    g_026eb078 = 0;
    ___cxa_guard_release();
  }
  if (g_026eb073 == '\0') {
    FUN_001ba5f0();
    FUN_00e87760();
    FUN_00d4ff40();
    if (1 < g_02802630) {
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_001baad0();
    FUN_001c0880();
    FUN_00d50c00();
    uVar3 = FUN_00e87770();
    FUN_00e87920(uVar3,0);
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    FUN_001bb300();
    FUN_001bb300();
  }
  return;
}

