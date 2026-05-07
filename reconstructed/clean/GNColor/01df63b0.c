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

