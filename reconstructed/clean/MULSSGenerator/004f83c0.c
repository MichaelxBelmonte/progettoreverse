// Function: FUN_004f83c0
// Address: 004f83c0
// Size: 3428 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

void* FUN_004f83c0(void* param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  void *pvVar6;
  int64_t *plVar7;
  void*puVar8;
  void* pVar9;
  void*this_ptr;
  int64_t **pplVar10;
  bool bVar11;
  uint32_t uVar12;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  uint64_t local_48;
  int64_t *local_40;
  char local_38;
  
  local_48 = param_2;
  FUN_004f9670();
  plVar5 = local_40;
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_004f7c70();
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  local_70 = local_58;
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00082580();
  (**(code **)(*plVar5 + 0x18))();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar12 = FUN_012f4ba0();
  plVar7 = g_02708bf0;
  if (g_02708bf0 != (int64_t *)0x0) {
    uVar12 = FUN_00d50b00();
  }
  local_58 = plVar7;
  local_50 = '\0';
  pplVar10 = &local_58;
  FUN_00ca0840(uVar12,pplVar10);
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5f80();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e57a0();
  local_50 = '\0';
  local_58 = (int64_t *)0x0;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e78c0();
  plVar7 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (int64_t *)0x0) {
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar7[7] = 0;
    plVar7[8] = 0;
    pVar9 = 0x25d31f0;
    *plVar7 = (int64_t)&g_025d31f0;
    *(void*)(plVar7 + 9) = 0;
    plVar7[10] = 0;
    *(void*)(plVar7 + 0xb) = 0;
    *(void*)((int64_t)plVar7 + 0x5c) = 0;
    *(void*)((int64_t)plVar7 + 99) = 0;
    (*g_025d3208)();
    pvVar6 = _pthread_getspecific(pVar9);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    param_1 = 0x2607248;
    *puVar8 = &g_02607248;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[0xe] = 0;
    *(void*)((int64_t)puVar8 + 0x76) = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0x12] = 0;
    puVar8[0x13] = 0;
    puVar8[0x14] = 0;
    puVar8[0x15] = 0;
    puVar8[0x16] = 0;
    puVar8[0x17] = 0;
    puVar8[0x18] = 0;
    puVar8[0x19] = 0;
    puVar8[0x1a] = 0;
    (*g_02607260)();
    FUN_012c64a0();
    if (puVar8 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    local_50 = '\x01';
    local_58 = plVar7;
    FUN_00d50b20();
  }
  else {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e78c0();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    plVar7 = local_40;
    if (local_40 == (int64_t *)0x0) {
      plVar7 = (int64_t *)0x0;
joined_r0x004f8796:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        FUN_00d50b00();
        local_58 = plVar7;
        local_50 = '\x01';
        goto joined_r0x004f8796;
      }
      local_58 = local_40;
      local_50 = '\x01';
      local_38 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((g_0270c820 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_027e77e8 = FUN_0015ef90();
      g_027e77d0 = "MULSSGenerator";
      g_027e77d8 = 0x70;
      param_1 = 0x15ef30;
      g_027e77e0 = FUN_0015ef30;
      g_027e77f0 = 0;
      ram_00000000027e77f8 = 0;
      g_027e7800 = 0;
      ram_00000000027e7808 = 0;
      g_027e7810 = 0;
      ram_00000000027e7818 = 0;
      g_027e7820 = 0;
      ram_00000000027e7828 = 0;
      g_027e7830 = 0;
      ram_00000000027e7838 = 0;
      g_027e7840 = 0;
      ram_00000000027e7848 = 0;
      g_027e7850 = 0;
      ram_00000000027e7858 = 0;
      g_027e7860 = 0;
      ram_00000000027e7868 = 0;
      g_027e7870 = 0;
      ram_00000000027e7878 = 0;
      g_027e7880 = 0;
      ram_00000000027e7888 = 0;
      g_027e7890 = 0;
      ___cxa_guard_release();
    }
    if (plVar7 == (int64_t *)0x0) {
LAB_004f88d4:
      pplVar10 = &g_02802688;
    }
    else {
      (**(code **)(*plVar7 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_004f88d4;
    }
    cVar3 = *(char *)(pplVar10 + 1);
    if ((cVar3 == '\0') || (*pplVar10 == (int64_t *)0x0)) {
      if (*pplVar10 == (int64_t *)0x0) goto LAB_004f8a46;
    }
    else {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6cb0();
    plVar7 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (int64_t *)0x0) {
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      param_1 = 0x2607248;
      *puVar8 = &g_02607248;
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      *(void*)((int64_t)puVar8 + 0x76) = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = 0;
      puVar8[0x12] = 0;
      puVar8[0x13] = 0;
      puVar8[0x14] = 0;
      puVar8[0x15] = 0;
      puVar8[0x16] = 0;
      puVar8[0x17] = 0;
      puVar8[0x18] = 0;
      puVar8[0x19] = 0;
      puVar8[0x1a] = 0;
      (*g_02607260)();
      FUN_012c64a0();
      if (puVar8 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    if (cVar3 != '\0') {
      FUN_00d50b20();
    }
  }
LAB_004f8a46:
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar7 = local_58;
  FUN_012e7710();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7900();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e60a0();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_012e60e0();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6040();
  FUN_012e6050();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar10 = &local_40;
  FUN_011f2810();
  plVar2 = local_40;
  FUN_004fbac0();
  plVar1 = g_02802688;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') {
      pplVar10 = &g_02802688;
    }
    plVar1 = *pplVar10;
  }
  if (plVar1 == (int64_t *)0x0) {
    bVar11 = false;
    plVar1 = local_70;
    goto joined_r0x004f8e02;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar10 = &local_90;
  FUN_011f2810();
  plVar1 = local_90;
  FUN_004fbac0();
  if (plVar1 == (int64_t *)0x0) {
LAB_004f8dc1:
    pplVar10 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_004f8dc1;
  }
  plVar1 = local_70;
  bVar11 = *pplVar10 != (int64_t *)0x0;
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
joined_r0x004f8e02:
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (bVar11) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7d10();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011f2810();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7d10();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011f2810();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012de7c0();
    FUN_012de780();
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  if ((local_50 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

