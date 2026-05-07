// Function: FUN_01c37290
// Address: 01c37290
// Size: 1886 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"

void FUN_01c37290(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  char *pcVar7;
  int64_t *this_ptr;
  int64_t **pplVar8;
  bool bVar9;
  uint32_t uVar10;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  char local_98;
  undefined7 uStack_97;
  char local_90;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  
  if ((g_028b6520 == (int64_t *)0x0) || (g_028b6529 == '\0')) {
    FUN_00e8cb50();
    if (g_028b6520 == (int64_t *)0x0) {
      plVar6 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar6 + 0x18))();
      bVar9 = g_028b6520 == (int64_t *)0x0;
      g_028b6520 = plVar6;
      if (((bVar9) || (FUN_00d50b20(), g_028b6520 != (int64_t *)0x0)) && (g_028b6528 == '\0'))
      {
        g_028b6528 = '\x01';
        FUN_00e8cb90();
      }
      plVar6 = (int64_t *)FUN_00e8fc40();
      FUN_00152930();
      (**(code **)(*plVar6 + 0x18))();
      bVar9 = g_028b6530 == (int64_t *)0x0;
      g_028b6530 = plVar6;
      if (((bVar9) || (FUN_00d50b20(), g_028b6530 != (int64_t *)0x0)) && (g_028b6538 == '\0'))
      {
        g_028b6538 = '\x01';
        FUN_00e8cb90();
      }
      g_028b6529 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b6529 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((int64_t *)this_ptr[0x3c] == (int64_t *)0x0) {
    return;
  }
  uVar10 = (**(code **)(*(int64_t *)this_ptr[0x3c] + 0x388))();
  plVar6 = local_40;
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  if (plVar6 == (int64_t *)0x0) {
    return;
  }
  if ((int64_t *)this_ptr[0x3c] == (int64_t *)0x0) {
    local_48 = '\0';
    local_50 = 0;
LAB_01c3742d:
    local_78 = 0;
  }
  else {
    uVar10 = (**(code **)(*(int64_t *)this_ptr[0x3c] + 0x388))();
    local_78 = local_50;
    local_70 = 0;
    if (local_48 == '\0') {
      if (local_50 == 0) goto LAB_01c3742d;
      uVar10 = FUN_00d50b00();
    }
    else {
      local_48 = '\0';
    }
  }
  local_70 = '\x01';
  uVar10 = FUN_00c9fe40(uVar10,&local_78);
  pcVar7 = &local_98;
  if (local_38[0] != '\0') {
    pcVar7 = local_38;
  }
  local_98 = local_38[0];
  *pcVar7 = '\0';
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  if (local_98 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      uVar10 = FUN_00d50b00();
    }
  }
  else {
    local_98 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  plVar6 = g_028b6530;
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
    return;
  }
  if (g_028b6530 != (int64_t *)0x0) {
    uVar10 = FUN_00d50b00();
  }
  if ((int64_t *)this_ptr[0x3c] == (int64_t *)0x0) {
    local_48 = '\0';
    local_50 = 0;
LAB_01c37544:
    local_68 = 0;
  }
  else {
    uVar10 = (**(code **)(*(int64_t *)this_ptr[0x3c] + 0x388))();
    local_68 = local_50;
    local_60 = 0;
    if (local_48 == '\0') {
      if (local_50 == 0) goto LAB_01c37544;
      uVar10 = FUN_00d50b00();
    }
    else {
      local_48 = '\0';
    }
  }
  local_60 = '\x01';
  local_40 = plVar6;
  local_38[0] = '\0';
  pplVar8 = &local_40;
  FUN_00ca0840(uVar10,&local_68);
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((int64_t *)this_ptr[0x3c] == (int64_t *)0x0) {
    local_38[0] = '\0';
    local_40 = (int64_t *)0x0;
    plVar6 = (int64_t *)0x0;
  }
  else {
    (**(code **)(*(int64_t *)this_ptr[0x3c] + 0x388))();
    plVar6 = local_40;
  }
  local_40 = plVar6;
  if ((g_026fde10 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d1818 = FUN_00d4fe50();
    g_026d1800 = "GNFilePath";
    g_026d1808 = 0x40;
    g_026d1810 = FUN_00041050;
    g_026d1820 = 0;
    ram_00000000026d1828 = 0;
    g_026d1830 = 0;
    ram_00000000026d1838 = 0;
    g_026d1840 = 0;
    ram_00000000026d1848 = 0;
    g_026d1850 = 0;
    ram_00000000026d1858 = 0;
    g_026d1860 = 0;
    ram_00000000026d1868 = 0;
    g_026d1870 = 0;
    ram_00000000026d1878 = 0;
    g_026d1880 = 0;
    ram_00000000026d1888 = 0;
    g_026d1890 = 0;
    ram_00000000026d1898 = 0;
    g_026d18a0 = 0;
    ram_00000000026d18a8 = 0;
    g_026d18b0 = 0;
    ram_00000000026d18b8 = 0;
    g_026d18c0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_01c37635;
  }
  pplVar8 = (int64_t **)&g_02802688;
LAB_01c37635:
  plVar6 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*this_ptr + 0xae0))();
    FUN_01c19480();
    if (local_40 == (int64_t *)0x0) {
      cVar4 = '\0';
    }
    else {
      (**(code **)(*this_ptr + 0xae0))();
      FUN_01c19480();
      FUN_01c1ada0();
      lVar3 = g_02703fb8;
      plVar2 = (int64_t *)CONCAT71(uStack_97,local_98);
      if (g_02703fb8 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*plVar2 + 0x50))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (CONCAT71(uStack_97,local_98) != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      local_58 = plVar6;
      plVar6 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void*)((int64_t)plVar6 + 0x2f) = 0;
      *(void*)((int64_t)plVar6 + 0x37) = 0;
      plVar6[4] = 0;
      plVar6[5] = 0;
      plVar6[8] = 0;
      plVar6[9] = 0;
      *(void*)((int64_t)plVar6 + 0x49) = 0;
      *(void*)((int64_t)plVar6 + 0x51) = 0;
      *plVar6 = (int64_t)&g_0266a320;
      plVar6[2] = (int64_t)&g_0266a6d8;
      plVar6[3] = (int64_t)&g_0266a710;
      plVar6[0xc] = 0;
      plVar6[0xd] = 0;
      plVar6[0xe] = 0;
      FUN_00d500e0();
      FUN_00d403d0();
      FUN_00d50b00();
      local_b8 = g_027ebc70;
      if (g_027ebc70 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      local_a0 = '\0';
      local_a8 = plVar6;
      FUN_00d41430(&local_a8,&local_b8);
      plVar2 = local_58;
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar1 = (int64_t *)plVar6[0xc];
      if (plVar1 != plVar2) {
        FUN_00d50b00();
        plVar6[0xc] = (int64_t)plVar2;
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*this_ptr + 0xb78))();
      plVar6[0xe] = param_2;
      (**(code **)(*plVar6 + 0x398))();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

