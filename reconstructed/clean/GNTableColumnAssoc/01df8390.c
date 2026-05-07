// Function: FUN_01df8390
// Address: 01df8390
// Size: 1146 bytes
// Class: GNTableColumnAssoc
// String references:
//   "GNTableColumnAssoc"

int64_t * FUN_01df8390(uint32_t param_1)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int64_t *in_RCX;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *this_ptr;
  int64_t *plVar8;
  bool bVar9;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar10;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  int64_t *local_68;
  uint32_t local_5c;
  int64_t *local_40;
  char local_38;
  
  lVar1 = g_027edfd0;
  local_70 = (int64_t *)0x0;
  if (g_027edfd0 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_c0 = lVar1;
  local_b8 = '\x01';
  FUN_01ccaae0(param_1,&local_c0);
  if (local_40 == (int64_t *)0x0) {
    local_5c = (uint32_t)CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
    plVar8 = (int64_t *)0x0;
  }
  else {
    plVar8 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_5c = 0;
    }
    else {
      local_38 = '\0';
      local_5c = 0;
    }
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  local_68 = plVar8;
  FUN_01db9a80();
  if (local_40 == (int64_t *)0x0) {
    bVar2 = false;
    plVar6 = (int64_t *)0x0;
LAB_01df850d:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    bVar3 = false;
    local_40 = (int64_t *)0x0;
    bVar9 = false;
    plVar7 = (int64_t *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    local_70 = local_40;
    if ((g_026f20e8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_026f2038 = FUN_001ba850();
      g_026f2020 = "GNTableColumnAssoc";
      g_026f2028 = 0x58;
      g_026f2030 = FUN_001f28d0;
      g_026f2040 = 0;
      ram_00000000026f2048 = 0;
      g_026f2050 = 0;
      ram_00000000026f2058 = 0;
      g_026f2060 = 0;
      ram_00000000026f2068 = 0;
      g_026f2070 = 0;
      ram_00000000026f2078 = 0;
      g_026f2080 = 0;
      ram_00000000026f2088 = 0;
      g_026f2090 = 0;
      ram_00000000026f2098 = 0;
      g_026f20a0 = 0;
      ram_00000000026f20a8 = 0;
      g_026f20b0 = 0;
      ram_00000000026f20b8 = 0;
      g_026f20c0 = 0;
      ram_00000000026f20c8 = 0;
      g_026f20d0 = 0;
      ram_00000000026f20d8 = 0;
      g_026f20e0 = 0;
      ___cxa_guard_release();
      plVar8 = local_68;
    }
    (**(code **)(*local_40 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar7 = local_70;
    plVar6 = local_70;
    if (cVar4 == '\0') {
      plVar6 = g_02802688;
    }
    if (plVar6 == (int64_t *)0x0) {
      bVar2 = true;
      plVar6 = local_70;
      goto LAB_01df850d;
    }
    bVar9 = local_70 != (int64_t *)0x0;
    uVar10 = extraout_XMM0_Da;
    local_b0 = g_027e7c20;
    if (bVar9) {
      uVar10 = FUN_00d50b00();
      local_b0 = g_027e7c20;
    }
    g_027e7c20 = local_b0;
    if (local_b0 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_a8 = '\x01';
    uVar10 = FUN_01ccab60(uVar10,&local_b0);
    if (local_40 == (int64_t *)0x0) {
      local_40 = (int64_t *)0x0;
      bVar3 = false;
    }
    else if (local_38 == '\0') {
      uVar10 = FUN_00d50b00();
      bVar3 = true;
    }
    else {
      bVar3 = true;
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    plVar6 = plVar7;
    if (local_40 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      lVar1 = *in_RCX;
      if ((char)in_RCX[1] == '\0') {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = lVar1;
        *(void*)(this_ptr + 1) = 1;
        local_40 = (int64_t *)0x0;
LAB_01df874c:
        bVar2 = true;
      }
      else {
        *this_ptr = lVar1;
        *(void*)(this_ptr + 1) = 1;
        *(void*)(in_RCX + 1) = 0;
        bVar2 = true;
        local_40 = (int64_t *)0x0;
      }
    }
    else {
      if (plVar8 == (int64_t *)0x0) {
        local_78 = '\0';
        local_80 = local_40;
        (**(code **)(*(int64_t *)*in_RCX + 0x88))(uVar10,&local_80);
        bVar2 = true;
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01df8540;
      }
      local_a0 = *in_RCX;
      local_98 = '\0';
      local_88 = '\0';
      local_90 = local_40;
      FUN_01d26fb0(&local_90,&local_a0);
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar2 = true;
      if ((local_98 == '\0') || (local_a0 == 0)) goto LAB_01df874c;
      FUN_00d50b20();
    }
  }
  if ((char)local_5c == '\0' && local_68 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01df8540:
  if ((bVar3) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar9) && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

