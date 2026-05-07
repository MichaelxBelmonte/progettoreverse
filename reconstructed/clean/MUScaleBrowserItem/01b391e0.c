// Function: FUN_01b391e0
// Address: 01b391e0
// Size: 4877 bytes
// Class: MUScaleBrowserItem
// String references:
//   "MUScaleBrowserItem"

uint64_t FUN_01b391e0(void* param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  uint8_t uVar5;
  byte bVar6;
  int iVar7;
  uint64_t uVar8;
  void *pvVar9;
  void*puVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int64_t **pplVar13;
  int64_t this_ptr;
  int64_t lVar14;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  int64_t *local_1e8;
  char local_1e0;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  uint64_t local_60;
  uint32_t local_54;
  int64_t local_50;
  int64_t *local_48;
  char local_40;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar8 = FUN_01b3e280();
  local_68 = local_48;
  if (local_40 == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_01b392ad;
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_01b39245:
    local_b0 = 0;
    lVar14 = *(int64_t *)(this_ptr + 0x120);
    if (lVar14 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    local_b8 = lVar14;
    cVar4 = (**(code **)(*local_68 + 0x50))();
    uVar8 = extraout_XMM0_Qa_00;
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d50b20();
      return 1;
    }
    local_54 = 0;
    plVar12 = *(int64_t **)(this_ptr + 0x120);
    if (plVar12 != local_68) {
LAB_01b392d5:
      if ((char)local_54 == '\0') {
        uVar8 = FUN_00d50b00();
      }
      *(int64_t **)(this_ptr + 0x120) = local_68;
      if (plVar12 != (int64_t *)0x0) {
        local_60 = 0;
        uVar8 = FUN_00d50b20();
      }
    }
  }
  else {
    if (local_48 != (int64_t *)0x0) goto LAB_01b39245;
LAB_01b392ad:
    local_54 = (uint32_t)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
    plVar12 = *(int64_t **)(this_ptr + 0x120);
    uVar8 = extraout_XMM0_Qa;
    if (plVar12 != local_48) goto LAB_01b392d5;
  }
  if ((char)local_54 == '\0') {
    FUN_01b06a50();
    cVar4 = FUN_01aa7eb0();
    uVar8 = extraout_XMM0_Qa_01;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_01f27fe0();
      local_a0 = 0;
      (**(code **)(*(int64_t *)(this_ptr + 0x90) + 0x10))();
      FUN_00d50b00();
      local_a0 = '\x01';
      local_a8 = (int64_t *)(this_ptr + 0x90);
      FUN_01f474f0();
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        (**(code **)(*local_a8 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01b06a50();
      FUN_01aa8280();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = FUN_01aa5ff0(0);
    }
  }
  if (*(int64_t *)(this_ptr + 0xe0) != 0) {
    *(void*)(this_ptr + 0xe0) = 0;
    local_60 = 0;
    uVar8 = FUN_00d50b20();
  }
  if ((char)local_54 != '\0') goto LAB_01b39902;
  FUN_017b2910(uVar8,0);
  plVar12 = *(int64_t **)(this_ptr + 0xd8);
  plVar1 = plVar12;
  plVar11 = plVar12;
  if (plVar12 != local_48) {
    if (local_40 == '\0') {
      if (local_48 == (int64_t *)0x0) {
        *(void*)(this_ptr + 0xd8) = 0;
        plVar1 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        plVar12 = *(int64_t **)(this_ptr + 0xd8);
        *(int64_t **)(this_ptr + 0xd8) = local_48;
        plVar1 = local_48;
      }
    }
    else {
      local_40 = '\0';
      *(int64_t **)(this_ptr + 0xd8) = local_48;
      plVar1 = local_48;
    }
    plVar11 = plVar1;
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar1 = *(int64_t **)(this_ptr + 0xd8);
      plVar11 = local_48;
    }
  }
  if ((local_40 != '\0') && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    (**(code **)(*local_68 + 0x370))();
    plVar12 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b3a2a1;
      }
    }
    else if (local_48 != (int64_t *)0x0) {
LAB_01b3a2a1:
      FUN_017a9f30();
      local_98 = local_48;
      local_90 = 0;
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_90 = '\x01';
      cVar4 = (**(code **)(*plVar12 + 0x50))();
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        puVar10 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        param_1 = 0x26034e8;
        *puVar10 = &g_026034e8;
        puVar10[0xc] = 0;
        *(uint8_t (*) [16])(puVar10 + 7) = (uint8_t  [16])0x0;
        *(uint8_t (*) [16])(puVar10 + 9) = (uint8_t  [16])0x0;
        *(void*)((int64_t)puVar10 + 0x55) = 0;
        (*g_02603500)();
        pvVar9 = _pthread_getspecific(param_1);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017b31f0();
        FUN_00d50b20();
      }
      local_60 = 0;
      FUN_00d50b20();
      goto LAB_01b3990b;
    }
  }
  else {
    pvVar9 = _pthread_getspecific(param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017aa5e0();
    plVar12 = local_48;
    if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) && (FUN_00d50b00(), local_40 != '\0')
        ) && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_0173b120();
    plVar1 = *(int64_t **)(this_ptr + 0xe0);
    plVar11 = plVar1;
    if (plVar1 != local_48) {
      if (local_40 == '\0') {
        if (local_48 == (int64_t *)0x0) {
          plVar11 = (int64_t *)0x0;
          goto LAB_01b395a9;
        }
        FUN_00d50b00();
        plVar1 = *(int64_t **)(this_ptr + 0xe0);
        *(int64_t **)(this_ptr + 0xe0) = local_48;
        plVar11 = local_48;
      }
      else {
        local_40 = '\0';
        plVar11 = local_48;
LAB_01b395a9:
        *(int64_t **)(this_ptr + 0xe0) = plVar11;
      }
      param_1 = (void*)plVar1;
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar11 = local_48;
      }
    }
    if ((local_40 != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_0173b120();
    plVar1 = *(int64_t **)(this_ptr + 0xe8);
    plVar11 = plVar1;
    if (plVar1 != local_48) {
      if (local_40 == '\0') {
        if (local_48 == (int64_t *)0x0) {
          plVar11 = (int64_t *)0x0;
          goto LAB_01b39683;
        }
        FUN_00d50b00();
        plVar1 = *(int64_t **)(this_ptr + 0xe8);
        *(int64_t **)(this_ptr + 0xe8) = local_48;
        plVar11 = local_48;
      }
      else {
        local_40 = '\0';
        plVar11 = local_48;
LAB_01b39683:
        *(int64_t **)(this_ptr + 0xe8) = plVar11;
      }
      param_1 = (void*)plVar1;
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar11 = local_48;
      }
    }
    if ((local_40 != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar9 = _pthread_getspecific(param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_017583b0();
    if (cVar4 != '\0') {
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01758890();
    }
    pvVar9 = _pthread_getspecific(param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_0173f680();
    if (cVar4 == '\0') {
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736c00();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736c00();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_01b39902:
  local_60 = 0;
LAB_01b3990b:
  lVar14 = 0;
  if (*(int64_t *)(this_ptr + 0xe0) == 0) {
    *(void*)(this_ptr + 0xf0) = 0;
    *(void*)(this_ptr + 0xfc) = 0;
    *(void*)(this_ptr + 0x100) = 0;
    *(void*)(this_ptr + 0x104) = 0xffffffff;
    *(void*)(this_ptr + 0x108) = 0xffffffff;
    *(void*)(this_ptr + 0x10c) = 0xffffffff;
    *(void*)(this_ptr + 0x110) = 0xffffffff;
  }
  else {
    FUN_01b27070();
    plVar12 = local_48;
    if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) && (FUN_00d50b00(), local_40 != '\0')
        ) && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0xd8) != 0) {
      local_50 = 0;
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_017c0150();
      if (cVar4 == '\0') {
        *(void*)(this_ptr + 0xf0) = 0;
      }
      else {
        *(void*)(this_ptr + 0xf0) = *(void*)(this_ptr + 0x89);
      }
      if (*(char *)(this_ptr + 0xfc) == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = *(void*)(this_ptr + 0x89);
      }
      *(void*)(this_ptr + 0xfc) = uVar5;
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_017bff00();
      if (cVar4 == '\0') {
        *(void*)(this_ptr + 0xf1) = 0;
      }
      else {
        *(void*)(this_ptr + 0xf1) = *(void*)(this_ptr + 0x88);
      }
      if (*(char *)(this_ptr + 0xfd) == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = *(void*)(this_ptr + 0x88);
      }
      *(void*)(this_ptr + 0xfd) = uVar5;
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_017c0270();
      if (cVar4 == '\0') {
        *(void*)(this_ptr + 0xf2) = 0;
      }
      else {
        *(void*)(this_ptr + 0xf2) = *(void*)(this_ptr + 0x89);
      }
      if (*(char *)(this_ptr + 0xfe) == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = *(void*)(this_ptr + 0x89);
      }
      *(void*)(this_ptr + 0xfe) = uVar5;
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_017c0260();
      lVar14 = local_50;
      if (cVar4 == '\0') {
        *(void*)(this_ptr + 0xf3) = 0;
      }
      else {
        *(void*)(this_ptr + 0xf3) = *(void*)(this_ptr + 0x88);
      }
      if (*(char *)(this_ptr + 0xff) == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = *(void*)(this_ptr + 0x88);
      }
      *(void*)(this_ptr + 0xff) = uVar5;
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      bVar6 = FUN_017c0280();
      *(uint *)(this_ptr + 0xf8) = (uint)bVar6;
      if (*(char *)(this_ptr + 0x100) == '\0') {
        cVar4 = '\0';
      }
      else {
        cVar4 = *(char *)(this_ptr + 0x88);
      }
      *(char *)(this_ptr + 0x100) = cVar4;
    }
    if (*(char *)(this_ptr + 0xf3) == '\0') {
      if (*(char *)(this_ptr + 0x88) == '\0') {
        *(void*)(this_ptr + 0xf4) = 1;
        cVar4 = *(char *)(this_ptr + 0xfc);
      }
      else {
        *(void*)(this_ptr + 0xf4) = 0;
        cVar4 = *(char *)(this_ptr + 0xfc);
      }
    }
    else {
      *(void*)(this_ptr + 0xf4) = 4;
      cVar4 = *(char *)(this_ptr + 0xfc);
    }
    if ((cVar4 != '\0') && (*(int *)(this_ptr + 0x104) != -1)) {
      if (*(int *)(this_ptr + 0x104) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(void*)(this_ptr + 0x89);
      }
      *(void*)(this_ptr + 0xf0) = uVar5;
    }
    if ((*(char *)(this_ptr + 0xfd) != '\0') && (*(int *)(this_ptr + 0x108) != -1)) {
      if (*(int *)(this_ptr + 0x108) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(void*)(this_ptr + 0x88);
      }
      *(void*)(this_ptr + 0xf1) = uVar5;
    }
    if ((*(char *)(this_ptr + 0xfe) != '\0') && (*(int *)(this_ptr + 0x10c) != -1)) {
      if (*(int *)(this_ptr + 0x10c) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(void*)(this_ptr + 0x89);
      }
      *(void*)(this_ptr + 0xf2) = uVar5;
    }
    if ((*(char *)(this_ptr + 0xff) != '\0') && (*(int *)(this_ptr + 0x110) != -1)) {
      *(int *)(this_ptr + 0xf4) = *(int *)(this_ptr + 0x110);
    }
    FUN_01b381a0();
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01b31bc0();
  lVar2 = g_027e4590;
  if ((*(int64_t *)(this_ptr + 0xe0) == 0) && (lVar14 != 0)) {
    if (g_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_027e4598;
    if (g_027e4598 != 0) {
      FUN_00d50b00();
    }
    local_128 = lVar3;
    local_120 = '\x01';
    local_118 = 0;
    local_110 = '\0';
    FUN_00d31230(&local_118,&local_128);
    plVar12 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_01e11330();
    local_108 = plVar12;
    local_100 = '\0';
    FUN_01e125e0();
    if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  pplVar13 = &local_48;
  FUN_01ceb020();
  plVar12 = local_48;
  if ((g_02737920 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    local_50 = lVar14;
    g_027e2e88 = FUN_00d4fe50();
    g_027e2e70 = "MUScaleBrowserItem";
    g_027e2e78 = 0x20;
    g_027e2e80 = FUN_00841ad0;
    g_027e2e90 = (uint8_t  [16])0x0;
    g_027e2ea0 = (uint8_t  [16])0x0;
    g_027e2eb0 = (uint8_t  [16])0x0;
    g_027e2ec0 = (uint8_t  [16])0x0;
    g_027e2ed0 = (uint8_t  [16])0x0;
    g_027e2ee0 = (uint8_t  [16])0x0;
    g_027e2ef0 = (uint8_t  [16])0x0;
    g_027e2f00 = (uint8_t  [16])0x0;
    g_027e2f10 = (uint8_t  [16])0x0;
    g_027e2f20 = (uint8_t  [16])0x0;
    g_027e2f30 = 0;
    ___cxa_guard_release();
    lVar14 = local_50;
  }
  if (plVar12 == (int64_t *)0x0) {
    pplVar13 = &g_02802688;
    plVar12 = g_02802688;
    cVar4 = g_02802690;
  }
  else {
    (**(code **)(*plVar12 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') {
      pplVar13 = &g_02802688;
    }
    plVar12 = *pplVar13;
    cVar4 = *(char *)(pplVar13 + 1);
  }
  if (cVar4 == '\0') {
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar13 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar12 == (int64_t *)0x0) {
    uVar8 = FUN_00d6f370();
    local_d8 = g_027e4588;
    local_e8 = 0;
    local_e0 = '\0';
    if (g_027e4588 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_d0 = '\x01';
    FUN_00d6f570(uVar8,&local_d8);
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01aa3f90();
    cVar4 = (**(code **)(*local_48 + 0x3a0))();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d6f370();
      FUN_01aa3f90();
      uVar8 = (**(code **)(*local_1e8 + 0x368))();
      local_78 = local_c8;
      local_70 = 0;
      local_f8 = g_027e4588;
      if (local_c0 == '\0') {
        if (local_c8 != 0) {
          uVar8 = FUN_00d50b00();
          local_f8 = g_027e4588;
        }
      }
      else {
        local_c0 = '\0';
      }
      local_70 = '\x01';
      g_027e4588 = local_f8;
      if (local_f8 != 0) {
        local_70 = '\x01';
        uVar8 = FUN_00d50b00();
      }
      local_f0 = '\x01';
      FUN_00d6f570(uVar8,&local_f8);
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1e0 != '\0') && (local_1e8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  if ((char)local_54 == '\0') {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (lVar14 != 0)) {
    FUN_00d50b20();
  }
  return 1;
}

