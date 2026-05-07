// ===================================================================
// GNColor — Complete reconstructed pseudocode
// 8 functions
// ===================================================================


// ============================================================
// 01df6bd0
// ============================================================
// Function: FUN_01df6bd0
// Address: 01df6bd0
// Size: 1513 bytes
// Class: GNColor
// String references:
//   "GNColor"
//   "GNTableColumnAssoc"
//   "GNString"

void* FUN_01df6bd0(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t **pplVar4;
  int64_t *plVar5;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Da;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  uVar6 = FUN_01db9a80();
  local_48 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      uVar6 = FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar6 = FUN_00d50b20();
      }
      goto LAB_01df6c12;
    }
    local_48 = (int64_t *)0x0;
  }
  else {
LAB_01df6c12:
    if (local_48 != (int64_t *)0x0) {
      if ((g_026f20e8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
      }
      (**(code **)(*local_48 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar5 = local_48;
      if (cVar2 == '\0') {
        plVar5 = g_02802688;
      }
      uVar6 = extraout_XMM0_Da;
      if (plVar5 != (int64_t *)0x0) {
        local_b0 = *param_2;
        local_a8 = '\0';
        local_a0 = *param_1;
        local_98 = '\0';
        uVar6 = FUN_01ed2ec0();
        local_90 = *param_3;
        local_88 = '\0';
        uVar6 = (**(code **)(*local_48 + 0x528))(uVar6,&local_b0,&local_90);
        plVar5 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (int64_t *)0x0) && (uVar6 = FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            uVar6 = FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          uVar6 = FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          uVar6 = FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          uVar6 = FUN_00d50b20();
        }
        if (plVar5 != (int64_t *)0x0) {
          *this_ptr = plVar5;
          *(void*)(this_ptr + 1) = 1;
          goto LAB_01df6f96;
        }
      }
    }
  }
  lVar1 = g_02724b68;
  if (g_02724b68 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_80 = lVar1;
  local_78 = '\x01';
  (**(code **)(*arg1 + 0x4c8))(uVar6,&local_80);
  plVar5 = local_60;
  local_40 = local_60;
  if (local_58 == '\0') {
    if (local_60 == (int64_t *)0x0) {
      local_40 = (int64_t *)0x0;
      local_38 = '\x01';
      plVar5 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      local_38 = '\x01';
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\x01';
    local_58 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    if ((g_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
    (**(code **)(*plVar5 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar5 = local_40;
    pplVar4 = &local_40;
    if (cVar2 == '\0') {
      pplVar4 = &g_02802688;
    }
    if (*pplVar4 == (int64_t *)0x0) {
      if ((g_026e9ce0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_026fd0e8 = FUN_00d4fe50();
        g_026fd0d0 = "GNColor";
        g_026fd0d8 = 0x30;
        g_026fd0e0 = FUN_001b8c30;
        g_026fd0f0 = 0;
        ram_00000000026fd0f8 = 0;
        g_026fd100 = 0;
        ram_00000000026fd108 = 0;
        g_026fd110 = 0;
        ram_00000000026fd118 = 0;
        g_026fd120 = 0;
        ram_00000000026fd128 = 0;
        g_026fd130 = 0;
        ram_00000000026fd138 = 0;
        g_026fd140 = 0;
        ram_00000000026fd148 = 0;
        g_026fd150 = 0;
        ram_00000000026fd158 = 0;
        g_026fd160 = 0;
        ram_00000000026fd168 = 0;
        g_026fd170 = 0;
        ram_00000000026fd178 = 0;
        g_026fd180 = 0;
        ram_00000000026fd188 = 0;
        g_026fd190 = 0;
        ___cxa_guard_release();
      }
      if (plVar5 == (int64_t *)0x0) {
LAB_01df6ee1:
        pplVar4 = &g_02802688;
        *(void*)(this_ptr + 1) = 0;
        plVar5 = g_02802688;
        cVar2 = g_02802690;
      }
      else {
        (**(code **)(*plVar5 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_01df6ee1;
        pplVar4 = &local_40;
        *(void*)(this_ptr + 1) = 0;
        plVar5 = local_40;
        cVar2 = local_38;
      }
      if (cVar2 == '\0') {
        if (plVar5 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *this_ptr = plVar5;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        *this_ptr = plVar5;
        *(void*)(this_ptr + 1) = 1;
        *(void*)(pplVar4 + 1) = 0;
      }
    }
    else {
      local_70 = local_40;
      local_68 = '\0';
      FUN_01cfb480();
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (int64_t *)0x0) {
    return this_ptr;
  }
LAB_01df6f96:
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 01df63b0
// ============================================================
// Function: FUN_01df63b0
// Address: 01df63b0
// Size: 1513 bytes
// Class: GNColor
// String references:
//   "GNColor"
//   "GNTableColumnAssoc"
//   "GNString"

void* FUN_01df63b0(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t **pplVar4;
  int64_t *plVar5;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Da;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  uVar6 = FUN_01db9a80();
  local_48 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      uVar6 = FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar6 = FUN_00d50b20();
      }
      goto LAB_01df63f2;
    }
    local_48 = (int64_t *)0x0;
  }
  else {
LAB_01df63f2:
    if (local_48 != (int64_t *)0x0) {
      if ((g_026f20e8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
      }
      (**(code **)(*local_48 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar5 = local_48;
      if (cVar2 == '\0') {
        plVar5 = g_02802688;
      }
      uVar6 = extraout_XMM0_Da;
      if (plVar5 != (int64_t *)0x0) {
        local_b0 = *param_2;
        local_a8 = '\0';
        local_a0 = *param_1;
        local_98 = '\0';
        uVar6 = FUN_01ed2ec0();
        local_90 = *param_3;
        local_88 = '\0';
        uVar6 = (**(code **)(*local_48 + 0x520))(uVar6,&local_b0,&local_90);
        plVar5 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (int64_t *)0x0) && (uVar6 = FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            uVar6 = FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          uVar6 = FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          uVar6 = FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          uVar6 = FUN_00d50b20();
        }
        if (plVar5 != (int64_t *)0x0) {
          *this_ptr = plVar5;
          *(void*)(this_ptr + 1) = 1;
          goto LAB_01df6776;
        }
      }
    }
  }
  lVar1 = g_027f2e50;
  if (g_027f2e50 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_80 = lVar1;
  local_78 = '\x01';
  (**(code **)(*arg1 + 0x4c8))(uVar6,&local_80);
  plVar5 = local_60;
  local_40 = local_60;
  if (local_58 == '\0') {
    if (local_60 == (int64_t *)0x0) {
      local_40 = (int64_t *)0x0;
      local_38 = '\x01';
      plVar5 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      local_38 = '\x01';
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\x01';
    local_58 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    if ((g_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
    (**(code **)(*plVar5 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar5 = local_40;
    pplVar4 = &local_40;
    if (cVar2 == '\0') {
      pplVar4 = &g_02802688;
    }
    if (*pplVar4 == (int64_t *)0x0) {
      if ((g_026e9ce0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_026fd0e8 = FUN_00d4fe50();
        g_026fd0d0 = "GNColor";
        g_026fd0d8 = 0x30;
        g_026fd0e0 = FUN_001b8c30;
        g_026fd0f0 = 0;
        ram_00000000026fd0f8 = 0;
        g_026fd100 = 0;
        ram_00000000026fd108 = 0;
        g_026fd110 = 0;
        ram_00000000026fd118 = 0;
        g_026fd120 = 0;
        ram_00000000026fd128 = 0;
        g_026fd130 = 0;
        ram_00000000026fd138 = 0;
        g_026fd140 = 0;
        ram_00000000026fd148 = 0;
        g_026fd150 = 0;
        ram_00000000026fd158 = 0;
        g_026fd160 = 0;
        ram_00000000026fd168 = 0;
        g_026fd170 = 0;
        ram_00000000026fd178 = 0;
        g_026fd180 = 0;
        ram_00000000026fd188 = 0;
        g_026fd190 = 0;
        ___cxa_guard_release();
      }
      if (plVar5 == (int64_t *)0x0) {
LAB_01df66c1:
        pplVar4 = &g_02802688;
        *(void*)(this_ptr + 1) = 0;
        plVar5 = g_02802688;
        cVar2 = g_02802690;
      }
      else {
        (**(code **)(*plVar5 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_01df66c1;
        pplVar4 = &local_40;
        *(void*)(this_ptr + 1) = 0;
        plVar5 = local_40;
        cVar2 = local_38;
      }
      if (cVar2 == '\0') {
        if (plVar5 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *this_ptr = plVar5;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        *this_ptr = plVar5;
        *(void*)(this_ptr + 1) = 1;
        *(void*)(pplVar4 + 1) = 0;
      }
    }
    else {
      local_70 = local_40;
      local_68 = '\0';
      FUN_01cfb480();
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (int64_t *)0x0) {
    return this_ptr;
  }
LAB_01df6776:
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 01df7770
// ============================================================
// Function: FUN_01df7770
// Address: 01df7770
// Size: 914 bytes
// Class: GNColor

void FUN_01df7770(void)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  uint64_t uVar7;
  undefined7 uVar9;
  uint64_t uVar8;
  int64_t *plVar10;
  uint uVar11;
  int64_t *plVar12;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01ccad60();
  plVar4 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01ed2da0();
  plVar12 = local_40;
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    (**(code **)(*local_40 + 0x10))();
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
  }
  iVar6 = FUN_01dca080();
  uVar8 = 0;
  plVar10 = (int64_t *)0x0;
  if ((iVar6 == 1) && (plVar12 != (int64_t *)0x0)) {
    uVar7 = 0;
    do {
      iVar6 = FUN_01dcea80();
      if (iVar6 <= (int)uVar7) {
        local_98 = plVar4;
        local_90 = '\0';
        local_88 = 0;
        local_80 = '\0';
        local_48 = plVar12;
        (**(code **)(*plVar12 + 0x18))(&local_88,&local_98);
        plVar10 = local_40;
        if (local_40 == (int64_t *)0x0) {
          plVar10 = (int64_t *)0x0;
          uVar8 = 0;
        }
        else {
          uVar9 = (undefined7)(uVar7 >> 8);
          if (local_38 == '\0') {
            FUN_00d50b00();
            uVar8 = CONCAT71(uVar9,1);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
            uVar8 = CONCAT71(uVar9,1);
          }
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar10 == (int64_t *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(uint *)((int64_t)plVar10 + 0xc);
        }
        local_50 = uVar8;
        FUN_01ed4a00();
        uVar1 = *(uint *)((int64_t)local_40 + 0xc);
        if (local_38 != '\0') {
          FUN_00d50b20();
        }
        uVar8 = local_50;
        plVar12 = local_48;
        if (uVar11 != uVar1) goto LAB_01df7ac0;
        if ((int)uVar11 < 1) goto LAB_01df7aaa;
        uVar7 = 0;
        local_58 = plVar10;
        goto LAB_01df7975;
      }
      cVar5 = FUN_01ed47c0();
      if (cVar5 != '\0') break;
      cVar5 = FUN_01ed46d0();
      uVar7 = (uint64_t)((int)uVar7 + 1);
    } while (cVar5 == '\0');
    uVar8 = 0;
    plVar10 = (int64_t *)0x0;
  }
LAB_01df7ac0:
  cVar5 = (char)uVar8;
  (**(code **)(*plVar4 + 0x920))();
  goto LAB_01df7acd;
  while( true ) {
    local_78 = plVar4;
    local_70 = '\0';
    FUN_01ed4a00();
    lVar2 = *(int64_t *)(*(int64_t *)(local_a8 + 0x10) + uVar7 * 8);
    local_60 = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    local_68 = lVar2;
    (**(code **)(*local_48 + 0x18))(&local_68,&local_78);
    plVar12 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar12 != (int64_t *)0x0) &&
       (iVar6 = *(int *)((int64_t)plVar12 + 0xc), FUN_00d50b20(), uVar8 = local_50,
       plVar10 = local_58, plVar12 = local_48, iVar6 != 0)) goto LAB_01df7ac0;
    uVar7 = uVar7 + 1;
    plVar10 = local_58;
    if (uVar11 == uVar7) break;
LAB_01df7975:
    lVar2 = *(int64_t *)(local_58[2] + uVar7 * 8);
    FUN_01ed4a00();
    lVar3 = *(int64_t *)(local_40[2] + uVar7 * 8);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar8 = local_50;
    plVar10 = local_58;
    plVar12 = local_48;
    if (lVar2 != lVar3) goto LAB_01df7ac0;
  }
LAB_01df7aaa:
  cVar5 = (char)local_50;
  plVar12 = local_48;
LAB_01df7acd:
  if (plVar12 != (int64_t *)0x0) {
    (**(code **)(*plVar12 + 0x10))();
    FUN_00d50b20();
  }
  if ((cVar5 != '\0') && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01f99d80
// ============================================================
// Function: FUN_01f99d80
// Address: 01f99d80
// Size: 821 bytes
// Class: GNColor
// String references:
//   "_availability_version_check"
//   "kCFAllocatorNull"
//   "CFDataCreateWithBytesNoCopy"
//   "CFPropertyListCreateWithData"
//   "CFPropertyListCreateFromXMLData"
//   "CFStringCreateWithCStringNoCopy"
//   "CFDictionaryGetValue"
//   "CFGetTypeID"
//   "CFStringGetTypeID"
//   "CFStringGetCString"
//   "CFRelease"
//   "/System/Library/CoreServices/SystemVersion.plist"
//   "ProductVersion"
//   "%d.%d.%d"

void FUN_01f99d80(FILE *param_1,char *param_2,size_t param_3,FILE *param_4)

{
  int64_t lVar1;
  char cVar2;
  size_t sVar3;
  size_t sVar4;
  void*puVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  FILE *pFVar15;
  int extraout_var;
  void *pvVar16;
  uint32_t extraout_var_00;
  int64_t lVar17;
  int64_t lVar18;
  FILE *pFVar19;
  char unaff_DIL;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if ((((g_028bb2e8 == 0) || (unaff_DIL != '\0')) &&
      ((g_028bb2e8 = _dlsym(), g_028bb2e8 == 0 || (unaff_DIL != '\0')))) &&
     (puVar5 = (void*)_dlsym(), puVar5 != (void*)0x0)) {
    pFVar19 = (FILE *)*puVar5;
    pcVar6 = _dlsym();
    if (pcVar6 != 0x0) {
      pcVar7 = _dlsym();
      pcVar8 = _dlsym();
      if (((((pcVar7 != 0x0 || pcVar8 != 0x0) &&
            (pcVar9 = _dlsym(), pcVar9 != 0x0)) &&
           (pcVar10 = _dlsym(), pcVar10 != 0x0)) &&
          ((pcVar11 = _dlsym(), pcVar11 != 0x0 &&
           (pcVar12 = _dlsym(), pcVar12 != 0x0)))) &&
         ((pcVar13 = _dlsym(), pcVar13 != 0x0 &&
          ((pcVar14 = _dlsym(), pcVar14 != 0x0 &&
           (pFVar15 = _fopen((char *)param_1,param_2), pFVar15 != (FILE *)0x0)))))) {
        _fseek(param_1,2,param_3);
        sVar3 = _ftell(param_1);
        if (-1 < extraout_var) {
          _rewind(param_1);
          pvVar16 = _malloc((size_t)param_1);
          if (((pvVar16 != (void *)0x0) &&
              (sVar4 = _fread(pFVar15,sVar3,param_3,param_4), param_1 = pFVar15,
              CONCAT44(extraout_var_00,sVar4) == CONCAT44(extraout_var,sVar3))) &&
             (param_1 = pFVar19, lVar17 = (*pcVar6)(pFVar19,CONCAT44(extraout_var,sVar3)),
             lVar17 != 0)) {
            param_1 = (FILE *)0x0;
            if (pcVar7 == 0x0) {
              lVar17 = (*pcVar8)(0,0);
            }
            else {
              lVar17 = (*pcVar7)(0,0,0);
            }
            if (lVar17 != 0) {
              lVar17 = (*pcVar9)(pFVar19,0x600);
              if (lVar17 != 0) {
                lVar17 = (*pcVar10)();
                (*pcVar14)();
                if (lVar17 != 0) {
                  lVar17 = (*pcVar11)();
                  lVar18 = (*pcVar12)();
                  if (lVar17 == lVar18) {
                    pFVar19 = (FILE *)0x8000100;
                    cVar2 = (*pcVar13)(0x8000100,0x20);
                    if (cVar2 != '\0') {
                      pFVar19 = (FILE *)&g_028bb2d4;
                      _sscanf((char *)&g_028bb2d4,(char *)&g_028bb2d0,&g_028bb2d8);
                    }
                  }
                }
              }
              (*pcVar14)();
              param_1 = pFVar19;
            }
            (*pcVar14)();
          }
        }
        _free(param_1);
        _fclose(param_1);
      }
    }
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar1) {
                        ___stack_chk_fail();
  }
  return;
}



// ============================================================
// 01f98990
// ============================================================
// Function: FUN_01f98990
// Address: 01f98990
// Size: 772 bytes
// Class: GNColor
// String references:
//   "GNColor"

void FUN_01f98990(double param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t arg1;
  int64_t *this_ptr;
  float fVar6;
  int64_t local_38;
  char local_30;
  
  plVar1 = *(int64_t **)(arg1 + 0x20);
  if ((g_026e9ce0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026fd0e8 = FUN_00d4fe50();
    g_026fd0d0 = "GNColor";
    g_026fd0d8 = 0x30;
    g_026fd0e0 = FUN_001b8c30;
    g_026fd0f0 = 0;
    ram_00000000026fd0f8 = 0;
    g_026fd100 = 0;
    ram_00000000026fd108 = 0;
    g_026fd110 = 0;
    ram_00000000026fd118 = 0;
    g_026fd120 = 0;
    ram_00000000026fd128 = 0;
    g_026fd130 = 0;
    ram_00000000026fd138 = 0;
    g_026fd140 = 0;
    ram_00000000026fd148 = 0;
    g_026fd150 = 0;
    ram_00000000026fd158 = 0;
    g_026fd160 = 0;
    ram_00000000026fd168 = 0;
    g_026fd170 = 0;
    ram_00000000026fd178 = 0;
    g_026fd180 = 0;
    ram_00000000026fd188 = 0;
    g_026fd190 = 0;
    ___cxa_guard_release();
  }
  lVar2 = g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    lVar2 = g_02802688;
    if (cVar4 != '\0') {
      lVar2 = *(int64_t *)(arg1 + 0x20);
    }
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  plVar1 = *(int64_t **)(arg1 + 0x28);
  if ((g_026e9ce0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026fd0e8 = FUN_00d4fe50();
    g_026fd0d0 = "GNColor";
    g_026fd0d8 = 0x30;
    g_026fd0e0 = FUN_001b8c30;
    g_026fd0f0 = 0;
    ram_00000000026fd0f8 = 0;
    g_026fd100 = 0;
    ram_00000000026fd108 = 0;
    g_026fd110 = 0;
    ram_00000000026fd118 = 0;
    g_026fd120 = 0;
    ram_00000000026fd128 = 0;
    g_026fd130 = 0;
    ram_00000000026fd138 = 0;
    g_026fd140 = 0;
    ram_00000000026fd148 = 0;
    g_026fd150 = 0;
    ram_00000000026fd158 = 0;
    g_026fd160 = 0;
    ram_00000000026fd168 = 0;
    g_026fd170 = 0;
    ram_00000000026fd178 = 0;
    g_026fd180 = 0;
    ram_00000000026fd188 = 0;
    g_026fd190 = 0;
    ___cxa_guard_release();
  }
  lVar3 = g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    lVar3 = g_02802688;
    if (cVar4 != '\0') {
      lVar3 = *(int64_t *)(arg1 + 0x28);
    }
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  fVar6 = (float)param_1;
  FUN_01cfcdc0((*(float *)(lVar3 + 0x10) - *(float *)(lVar2 + 0x10)) * fVar6 +
               *(float *)(lVar2 + 0x10),
               (*(float *)(lVar3 + 0x14) - *(float *)(lVar2 + 0x14)) * fVar6 +
               *(float *)(lVar2 + 0x14),
               (*(float *)(lVar3 + 0x18) - *(float *)(lVar2 + 0x18)) * fVar6 +
               *(float *)(lVar2 + 0x18),
               (*(float *)(lVar3 + 0x1c) - *(float *)(lVar2 + 0x1c)) * fVar6 +
               *(float *)(lVar2 + 0x1c));
  *(void*)(this_ptr + 1) = 0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      *this_ptr = local_38;
      *(void*)(this_ptr + 1) = 1;
      goto LAB_01f98af1;
    }
    local_38 = 0;
  }
  *this_ptr = local_38;
  *(void*)(this_ptr + 1) = 1;
LAB_01f98af1:
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}



// ============================================================
// 01df7e80
// ============================================================
// Function: FUN_01df7e80
// Address: 01df7e80
// Size: 769 bytes
// Class: GNColor

void FUN_01df7e80(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = g_027edfd0;
  if (g_027edfd0 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027edfd0;
  if (*param_1 == 0) {
    if (lVar2 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return;
    }
    FUN_01d25cb0();
  }
  else {
    if (g_027edfd0 != 0) {
      FUN_00d50b00();
    }
    FUN_01ccab60();
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      if (lVar2 == 0) {
        return;
      }
    }
    else {
      if (lVar2 == 0) {
        local_50 = lVar3;
        local_48 = '\0';
        (**(code **)(*(int64_t *)*param_1 + 0x88))();
        lVar1 = local_40;
        *(void*)(this_ptr + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 == 0) {
            *this_ptr = 0;
            *(void*)(this_ptr + 1) = 1;
          }
          else {
            FUN_00d50b00();
            *this_ptr = lVar1;
            *(void*)(this_ptr + 1) = 1;
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          *this_ptr = local_40;
          *(void*)(this_ptr + 1) = 1;
          local_38 = '\0';
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        return;
      }
      local_70 = *param_1;
      local_68 = '\0';
      local_60 = lVar3;
      local_58 = '\0';
      FUN_01d26fb0(&local_60,&local_70);
      lVar1 = local_40;
      *(void*)(this_ptr + 1) = 0;
      if (local_38 == '\0') {
        if (local_40 == 0) {
          *this_ptr = 0;
          *(void*)(this_ptr + 1) = 1;
        }
        else {
          FUN_00d50b00();
          *this_ptr = lVar1;
          *(void*)(this_ptr + 1) = 1;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        *this_ptr = local_40;
        *(void*)(this_ptr + 1) = 1;
        local_38 = '\0';
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01df73f0
// ============================================================
// Function: FUN_01df73f0
// Address: 01df73f0
// Size: 502 bytes
// Class: GNColor

void FUN_01df73f0(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *this_ptr;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = g_02800140;
  if (g_02800140 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027f2e88;
  if (lVar2 != 0) {
    local_80 = *param_1;
    local_78 = '\0';
    if (g_027f2e88 != 0) {
      FUN_00d50b00();
    }
    local_70 = lVar1;
    local_68 = '\x01';
    FUN_01d26fb0(&local_70,&local_80);
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      *this_ptr = lVar1;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      return;
    }
    FUN_00d50b20();
  }
  local_60 = *param_2;
  local_58 = '\0';
  local_50 = *param_1;
  local_48 = '\0';
  FUN_01ed2b70(&local_50,&local_60);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 001b8c80
// ============================================================
// Function: FUN_001b8c80
// Address: 001b8c80
// Size: 1352 bytes
// Class: GNColor
// String references:
//   "GNColor"

void FUN_001b8c80(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_026792c0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd18b == '\0') {
    FUN_001b9200();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd18b == '\0') {
    FUN_001b9370();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd18b == '\0') {
    FUN_001b94e0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd18b == '\0') {
    FUN_001b9650();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd18b == '\0') {
    FUN_001b97c0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd18b == '\0') {
    FUN_001b9930();
    FUN_00e87980();
  }
  FUN_001b9aa0();
  return;
}

