// Function: FUN_01d59670
// Address: 01d59670
// Size: 1443 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNString"

void FUN_01d59670(uint32_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  plVar6 = (int64_t *)*arg1;
  if ((g_0277a3a0 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_00, iVar5 != 0)) {
    g_026d3c38 = FUN_00d4fe50();
    g_026d3c20 = "GNMultipleValue";
    g_026d3c28 = 0x18;
    g_026d3c30 = FUN_00050c70;
    g_026d3c40 = 0;
    ram_00000000026d3c48 = 0;
    g_026d3c50 = 0;
    ram_00000000026d3c58 = 0;
    g_026d3c60 = 0;
    ram_00000000026d3c68 = 0;
    g_026d3c70 = 0;
    ram_00000000026d3c78 = 0;
    g_026d3c80 = 0;
    ram_00000000026d3c88 = 0;
    g_026d3c90 = 0;
    ram_00000000026d3c98 = 0;
    g_026d3ca0 = 0;
    ram_00000000026d3ca8 = 0;
    g_026d3cb0 = 0;
    ram_00000000026d3cb8 = 0;
    g_026d3cc0 = 0;
    ram_00000000026d3cc8 = 0;
    g_026d3cd0 = 0;
    ram_00000000026d3cd8 = 0;
    g_026d3ce0 = 0;
    param_1 = ___cxa_guard_release();
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = arg1;
    param_1 = extraout_XMM0_Da;
    if (cVar4 != '\0') goto LAB_01d596c9;
  }
  plVar6 = &g_02802688;
LAB_01d596c9:
  lVar1 = *plVar6;
  lVar3 = plVar6[1];
  if (((char)lVar3 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      plVar6 = (int64_t *)*arg1;
      if (plVar6 == (int64_t *)0x0) {
        FUN_00d8ede0();
        local_80 = local_40;
        local_78 = 0;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_78 = '\x01';
        (**(code **)(*this_ptr + 0x958))();
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_38 == '\0') {
          return;
        }
        if (local_40 == (int64_t *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      if ((int64_t *)this_ptr[0x39] != (int64_t *)0x0) {
        local_b8 = '\0';
        local_c0 = plVar6;
        (**(code **)(*(int64_t *)this_ptr[0x39] + 0x388))(param_1,&local_c0);
        local_70 = local_40;
        local_68 = 0;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_68 = '\x01';
        (**(code **)(*this_ptr + 0x958))();
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_b8 == '\0') {
          return;
        }
        if (local_c0 == (int64_t *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        g_026d5e58 = FUN_00d4fe50();
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
        g_026d5e50 = FUN_0005d920;
        g_026d5e60 = 0;
        ram_00000000026d5e68 = 0;
        g_026d5e70 = 0;
        ram_00000000026d5e78 = 0;
        g_026d5e80 = 0;
        ram_00000000026d5e88 = 0;
        g_026d5e90 = 0;
        ram_00000000026d5e98 = 0;
        g_026d5ea0 = 0;
        ram_00000000026d5ea8 = 0;
        g_026d5eb0 = 0;
        ram_00000000026d5eb8 = 0;
        g_026d5ec0 = 0;
        ram_00000000026d5ec8 = 0;
        g_026d5ed0 = 0;
        ram_00000000026d5ed8 = 0;
        g_026d5ee0 = 0;
        ram_00000000026d5ee8 = 0;
        g_026d5ef0 = 0;
        ram_00000000026d5ef8 = 0;
        g_026d5f00 = 0;
        ___cxa_guard_release();
      }
      (**(code **)(*plVar6 + 0x360))();
      cVar4 = FUN_00e85ea0();
      plVar6 = arg1;
      if (cVar4 == '\0') {
        plVar6 = &g_02802688;
      }
      if (*plVar6 == 0) {
        return;
      }
      local_b0 = *arg1;
      local_a8 = '\0';
      (**(code **)(*this_ptr + 0x968))();
      if (local_a8 == '\0') {
        return;
      }
      if (local_b0 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  plVar6 = (int64_t *)this_ptr[0x3a];
  if (plVar6 == (int64_t *)0x0) {
    FUN_00e99c70();
    if ((((local_40 != (int64_t *)0x0) && (plVar6 = local_40, local_38 == '\0')) &&
        (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
  }
  local_c8 = '\0';
  local_88 = 0;
  lVar2 = this_ptr[0x39];
  local_d0 = lVar1;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  local_90 = lVar2;
  FUN_00d8ede0();
  local_50 = local_a0;
  local_48 = 0;
  if (local_98 == '\0') {
    if (local_a0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_98 = '\0';
  }
  local_48 = '\x01';
  (**(code **)(*plVar6 + 0x368))(&local_90,&local_d0,&local_50);
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
  (**(code **)(*this_ptr + 0x968))();
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((char)lVar3 != '\0') {
    FUN_00d50b20();
  }
  return;
}

