// Function: FUN_01deec00
// Address: 01deec00
// Size: 562 bytes
// Class: GNTableColumnAssoc
// String references:
//   "GNTableColumnAssoc"

uint32_t FUN_01deec00(int64_t *param_1,uint32_t param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint32_t uVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t **pplVar7;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_34;
  
  pplVar7 = &local_88;
  local_34 = param_2;
  FUN_01db9a80();
  plVar6 = local_88;
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
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01deec69;
  }
  pplVar7 = (int64_t **)&g_02802688;
LAB_01deec69:
  plVar6 = *pplVar7;
  if (plVar6 == (int64_t *)0x0) {
    bVar2 = true;
    bVar1 = true;
    plVar6 = (int64_t *)0x0;
  }
  else {
    if (*(char *)(pplVar7 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(void*)(pplVar7 + 1) = 0;
    }
    bVar2 = false;
    bVar1 = false;
  }
  if ((local_80 != '\0') && (bVar1 = bVar2, local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (int64_t *)0x0) {
    local_58 = *arg1;
    local_50 = '\0';
    local_48 = *param_1;
    local_40 = '\0';
    uVar4 = FUN_01dc7f90(&local_48,local_34);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = *arg1;
    local_70 = '\0';
    local_68 = *param_1;
    local_60 = '\0';
    uVar4 = (**(code **)(*plVar6 + 0x530))(&local_68,local_34);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar1) {
      FUN_00d50b20();
    }
  }
  return uVar4;
}

