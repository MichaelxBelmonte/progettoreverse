// Function: FUN_01ec0ac0
// Address: 01ec0ac0
// Size: 1570 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"

void FUN_01ec0ac0(uint32_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *this_ptr;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  uint32_t uVar9;
  int64_t *local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  
  lVar2 = g_027e7c20;
  local_58 = '\0';
  local_60 = (int64_t *)0x0;
  if (g_027e7c20 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_e0 = lVar2;
  local_d8 = '\x01';
  uVar9 = FUN_01ccab60(param_1,&local_e0);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar3 = g_02800140;
  lVar2 = g_027e7c20;
  if (local_40 == (int64_t *)0x0) {
    if (g_02800140 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_c0 = lVar3;
    local_b8 = '\x01';
    FUN_01ccaae0(uVar9,&local_c0);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_027e7c20 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_d0 = lVar2;
    local_c8 = '\x01';
    (**(code **)(*this_ptr + 0x4c8))(uVar9,&local_d0);
    if (local_40 != (int64_t *)0x0) {
      if (local_38 == '\0') {
        FUN_00d50b00();
        local_60 = local_40;
        local_58 = '\x01';
      }
      else {
        local_60 = local_40;
        local_58 = '\x01';
        local_38 = '\0';
      }
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar6 = local_60;
  if ((g_0277a3a0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
    ___cxa_guard_release();
  }
  if (local_60 == (int64_t *)0x0) {
LAB_01ec0d0b:
    plVar7 = g_02802688;
    plVar8 = g_02802688;
    cVar4 = g_02802690;
    if (g_02802690 == '\0') goto LAB_01ec0d3f;
LAB_01ec0d30:
    plVar8 = (int64_t *)0x0;
    if (plVar7 == (int64_t *)0x0) goto LAB_01ec0d3f;
    FUN_00d50b00();
  }
  else {
    (**(code **)(*local_60 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01ec0d0b;
    plVar7 = local_60;
    plVar8 = local_60;
    cVar4 = local_58;
    if (local_58 != '\0') goto LAB_01ec0d30;
LAB_01ec0d3f:
    if (plVar8 == (int64_t *)0x0) goto LAB_01ec0dec;
  }
  FUN_00e987e0();
  if (local_60 == local_40) {
    if ((local_58 == '\0') && (local_40 != (int64_t *)0x0)) {
      if (local_38 != '\0') goto LAB_01ec0d94;
      FUN_00d50b00();
      goto LAB_01ec0dc7;
    }
LAB_01ec0dcb:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_60 = local_40;
      if ((local_58 != '\0') && (plVar6 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01ec0dc7:
      local_58 = '\x01';
      goto LAB_01ec0dcb;
    }
    local_60 = local_40;
    if ((local_58 != '\0') && (plVar6 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_01ec0d94:
    local_58 = '\x01';
  }
  if (cVar4 != '\0') {
    FUN_00d50b20();
  }
LAB_01ec0dec:
  if (local_60 == (int64_t *)0x0) {
    FUN_01ebf950();
    local_90 = 0;
    local_88 = '\0';
    FUN_01ea4ac0();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01f27fe0();
    local_b0 = local_60;
    local_a8 = '\0';
    (**(code **)(*local_f0 + 0x6d0))((int)g_023dcce4,&local_b0);
    if (local_40 == (int64_t *)0x0) {
      bVar1 = true;
      plVar6 = (int64_t *)0x0;
    }
    else {
      plVar6 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = false;
      }
      else {
        local_38 = '\0';
        bVar1 = false;
      }
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_98 = '\0';
    local_a0 = plVar6;
    FUN_01ea4500();
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01ebf950();
    local_78 = 0;
    local_80 = this_ptr[10];
    if (local_80 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_01ea4ac0();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_58 != '\0') {
      FUN_00d50b20();
    }
    if (!bVar1 && plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

