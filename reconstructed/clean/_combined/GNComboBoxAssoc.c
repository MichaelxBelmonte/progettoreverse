// ===================================================================
// GNComboBoxAssoc — Complete reconstructed pseudocode
// 2 functions
// ===================================================================


// ============================================================
// 0017f5f0
// ============================================================
// Function: FUN_0017f5f0
// Address: 0017f5f0
// Size: 552 bytes
// Class: GNComboBoxAssoc
// String references:
//   "GNComboBoxAssoc"

void FUN_0017f5f0(void)

{
  int iVar1;
  void*puVar2;
  uint32_t uVar3;
  int64_t local_80;
  int64_t local_78;
  
  if ((g_026ea200 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026ea150 = FUN_001ba850();
    g_026ea138 = "GNComboBoxAssoc";
    g_026ea140 = 0x58;
    g_026ea148 = FUN_001ba760;
    g_026ea158 = 0;
    ram_00000000026ea160 = 0;
    g_026ea168 = 0;
    ram_00000000026ea170 = 0;
    g_026ea178 = 0;
    ram_00000000026ea180 = 0;
    g_026ea188 = 0;
    ram_00000000026ea190 = 0;
    g_026ea198 = 0;
    ram_00000000026ea1a0 = 0;
    g_026ea1a8 = 0;
    ram_00000000026ea1b0 = 0;
    g_026ea1b8 = 0;
    ram_00000000026ea1c0 = 0;
    g_026ea1c8 = 0;
    ram_00000000026ea1d0 = 0;
    g_026ea1d8 = 0;
    ram_00000000026ea1e0 = 0;
    g_026ea1e8 = 0;
    _ram_00000000026ea1f0 = 0;
    g_026ea1f8 = 0;
    ___cxa_guard_release();
  }
  if (g_026ea1f3 == '\0') {
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
    FUN_001bb380();
    FUN_00d50c00();
    uVar3 = FUN_00e87770();
    FUN_00e87920(uVar3,0);
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    if (local_80 != 0) {
      FUN_00d50b20();
    }
    FUN_001bb300();
    FUN_001bb300();
  }
  return;
}



// ============================================================
// 001bb380
// ============================================================
// Function: FUN_001bb380
// Address: 001bb380
// Size: 504 bytes
// Class: GNComboBoxAssoc
// String references:
//   "GNComboBoxAssoc"

void FUN_001bb380(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_001baad0();
  *this_ptr = &g_026a71a0;
  *(void*)((int64_t)this_ptr + 0x41) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ea1f3 == '\0') {
    FUN_001bb5c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x42) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ea1f3 == '\0') {
    FUN_001bb730();
    FUN_00e87980();
  }
  FUN_001bb8a0();
  FUN_001bbb20();
  return;
}

