// Function: FUN_01f8b430
// Address: 01f8b430
// Size: 1115 bytes
// Class: GNActionRegistration
// String references:
//   "GNActionRegistration"

void FUN_01f8b430(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar6;
  int64_t local_c8;
  char local_c0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  pplVar5 = &local_40;
  FUN_01eda0f0();
  plVar1 = local_40;
  if ((g_026e7b78 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar1 == (int64_t *)0x0) {
LAB_01f8b493:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01f8b493;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
  FUN_01caf470();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01f8b7c7;
    local_68 = local_40;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = local_40;
    if (local_40 == (int64_t *)0x0) goto LAB_01f8b7c7;
  }
  iVar4 = FUN_01dd4c80();
  if (-1 < iVar4) {
    uVar6 = FUN_01da4890();
    local_a8 = local_68;
    local_a0 = '\0';
    FUN_01da4a10(uVar6,&local_a8);
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01f8bbb0();
  if (local_40 != (int64_t *)0x0) {
    lVar2 = *arg1;
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      plVar1 = (int64_t *)this_ptr[0x12];
      FUN_01d3d730();
      local_60 = local_40;
      local_58 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_58 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_98 = *arg1;
      local_90 = '\0';
      FUN_01d68520();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*(int64_t *)this_ptr[0x10] + 0x920))();
  FUN_01da4890();
  FUN_01f27fe0();
  FUN_01f28c30();
  local_50 = local_88;
  local_48 = 0;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_48 = '\x01';
  FUN_01da8a40();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_70 = 0;
  lVar2 = this_ptr[0x10];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  local_78 = lVar2;
  (**(code **)(*this_ptr + 0x5e8))();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01f8b7c7:
  FUN_00d50b20();
  return;
}

