// Function: FUN_01f92800
// Address: 01f92800
// Size: 622 bytes
// Class: GNActionRegistration
// String references:
//   "GNActionRegistration"

void FUN_01f92800(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void*arg1;
  int64_t *this_ptr;
  int64_t **pplVar4;
  uint32_t uVar5;
  int64_t *local_68;
  char local_60;
  int64_t *local_38;
  char local_30;
  
  FUN_01dd11e0();
  cVar2 = FUN_01e420b0();
  if (cVar2 == '\0') {
    return;
  }
  if ((int)this_ptr[0x5c] == -1) {
    return;
  }
  pplVar4 = &local_38;
  FUN_01eda0f0();
  plVar1 = local_38;
  if ((g_026e7b78 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026e7ac8 = FUN_00d4fe50();
    g_026e7ab0 = "GNActionRegistration";
    g_026e7ab8 = 0x38;
    g_026e7ac0 = FUN_001a8af0;
    g_026e7ad0 = 0;
    ram_00000000026e7ad8 = 0;
    g_026e7ae0 = 0;
    ram_00000000026e7ae8 = 0;
    g_026e7af0 = 0;
    ram_00000000026e7af8 = 0;
    g_026e7b00 = 0;
    ram_00000000026e7b08 = 0;
    g_026e7b10 = 0;
    ram_00000000026e7b18 = 0;
    g_026e7b20 = 0;
    ram_00000000026e7b28 = 0;
    g_026e7b30 = 0;
    ram_00000000026e7b38 = 0;
    g_026e7b40 = 0;
    ram_00000000026e7b48 = 0;
    g_026e7b50 = 0;
    ram_00000000026e7b58 = 0;
    g_026e7b60 = 0;
    ram_00000000026e7b68 = 0;
    g_026e7b70 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_01f928a7;
  }
  pplVar4 = (int64_t **)&g_02802688;
LAB_01f928a7:
  plVar1 = *pplVar4;
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_01d48370();
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_68 + 0x4b8))();
    plVar1 = local_38;
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar5 = FUN_01d48b40(g_02390d34);
    plVar1 = (int64_t *)*arg1;
    (**(code **)(*this_ptr + 0x950))(uVar5,1);
    FUN_00d05530();
    (**(code **)(*plVar1 + 0x3b8))();
    FUN_01d48390();
  }
  return;
}

