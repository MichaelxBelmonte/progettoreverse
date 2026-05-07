// Function: FUN_0158ac20
// Address: 0158ac20
// Size: 1149 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"

void FUN_0158ac20(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t **pplVar6;
  uint32_t extraout_XMM0_Da;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  
  if (*param_2 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_000649c0();
  (**(code **)(*plVar5 + 0x18))();
  local_58 = 0;
  (**(code **)(*(int64_t *)(arg1 + 0x10) + 0x10))();
  FUN_00d50b00();
  local_58 = '\x01';
  local_60 = (int64_t *)(arg1 + 0x10);
  FUN_00db1a90();
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar5 + 0x620))();
  lVar2 = g_027c79d8;
  if (cVar3 == '\0') {
    local_80 = *param_2;
    local_78 = '\0';
    pplVar6 = &local_40;
    (**(code **)(*plVar5 + 0x610))(extraout_XMM0_Da,&local_80);
    plVar5 = local_40;
    if ((g_026fdd40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_026cd0e8 = FUN_00d4fe50();
      g_026cd0d0 = "GNDictionary";
      g_026cd0d8 = 0x28;
      g_026cd0e0 = FUN_00022d20;
      g_026cd0f0 = 0;
      ram_00000000026cd0f8 = 0;
      g_026cd100 = 0;
      g_026cd178 = 0;
      ram_00000000026cd180 = 0;
      g_026cd188 = 0;
      g_026cd18a = 6;
      g_026cd108 = 0;
      ram_00000000026cd110 = 0;
      g_026cd118 = 0;
      ram_00000000026cd120 = 0;
      g_026cd128 = 0;
      ram_00000000026cd130 = 0;
      g_026cd138 = 0;
      ram_00000000026cd140 = 0;
      g_026cd148 = 0;
      ram_00000000026cd150 = 0;
      g_026cd158 = 0;
      ram_00000000026cd160 = 0;
      g_026cd168 = 0;
      ram_00000000026cd170 = 0;
      g_026cd193 = 0;
      g_026cd18b = 0;
      ___cxa_guard_release();
    }
    if (plVar5 == (int64_t *)0x0) {
LAB_0158ae17:
      pplVar6 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_0158ae17;
    }
    plVar5 = *pplVar6;
    if (plVar5 == (int64_t *)0x0) {
      bVar1 = false;
    }
    else if (*(char *)(pplVar6 + 1) == '\0') {
      bVar1 = true;
      FUN_00d50b00();
    }
    else {
      *(void*)(pplVar6 + 1) = 0;
      bVar1 = true;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_0158aec6;
  }
  if (g_027c79d8 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  local_90 = *param_2;
  local_88 = '\0';
  pplVar6 = &local_40;
  (**(code **)(*plVar5 + 0x630))(&local_90,&local_a0);
  plVar5 = local_40;
  if ((g_026fdd40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
    g_026cd0e0 = FUN_00022d20;
    g_026cd0f0 = 0;
    ram_00000000026cd0f8 = 0;
    g_026cd100 = 0;
    g_026cd178 = 0;
    ram_00000000026cd180 = 0;
    g_026cd188 = 0;
    g_026cd18a = 6;
    g_026cd108 = 0;
    ram_00000000026cd110 = 0;
    g_026cd118 = 0;
    ram_00000000026cd120 = 0;
    g_026cd128 = 0;
    ram_00000000026cd130 = 0;
    g_026cd138 = 0;
    ram_00000000026cd140 = 0;
    g_026cd148 = 0;
    ram_00000000026cd150 = 0;
    g_026cd158 = 0;
    ram_00000000026cd160 = 0;
    g_026cd168 = 0;
    ram_00000000026cd170 = 0;
    g_026cd193 = 0;
    g_026cd18b = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (int64_t *)0x0) {
LAB_0158ad82:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0158ad82;
  }
  plVar5 = *pplVar6;
  if (plVar5 == (int64_t *)0x0) {
    bVar1 = false;
  }
  else if (*(char *)(pplVar6 + 1) == '\0') {
    bVar1 = true;
    FUN_00d50b00();
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
    bVar1 = true;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
LAB_0158aec6:
  *(void*)(this_ptr + 1) = 0;
  if (!bVar1) {
    if (plVar5 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  *this_ptr = (int64_t)plVar5;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return;
}

