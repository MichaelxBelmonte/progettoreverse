// Function: FUN_006ee080
// Address: 006ee080
// Size: 4490 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_006ee080(void* param_1,uint32_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t *this_ptr;
  int64_t **pplVar8;
  uint32_t uVar9;
  uint32_t extraout_XMM0_Da;
  uint32_t local_138;
  uint32_t local_128;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  uint64_t local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar7 = *this_ptr;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar7 = *this_ptr;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  FUN_002dcf70(*(void*)(lVar7 + 0x54));
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar7 = *this_ptr;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar7 = *this_ptr;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  FUN_002dcf80(*(void*)(lVar7 + 0x50));
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar7 = *this_ptr;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar7 = *this_ptr;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  FUN_002dcf90(*(void*)(lVar7 + 0x60));
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar7 = *this_ptr;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar7 = *this_ptr;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  FUN_002dcfa0(*(void*)(lVar7 + 0x58));
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar7 = *this_ptr;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar7 = *this_ptr;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  FUN_002dcfb0(*(void*)(lVar7 + 0x5c));
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_007dd2b0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_007dd280();
  plVar1 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_007dd280();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    local_48 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != (int64_t *)0x0) {
      pvVar5 = _pthread_getspecific(param_1);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = (void*)local_48;
      }
      uVar9 = FUN_012c9740();
      local_100 = g_02727928;
      if (g_02727928 != 0) {
        uVar9 = FUN_00d50b00();
      }
      local_f8 = '\x01';
      pplVar8 = &local_40;
      FUN_000175c0(uVar9,&local_100);
      plVar1 = local_40;
      FUN_00053ac0();
      if (plVar1 == (int64_t *)0x0) {
LAB_006ee52e:
        pplVar8 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_006ee52e;
      }
      plVar1 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar8 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_60 = plVar1;
      pvVar5 = _pthread_getspecific(param_1);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = (void*)local_48;
      }
      uVar9 = FUN_012c9740();
      local_f0 = g_02727930;
      if (g_02727930 != 0) {
        uVar9 = FUN_00d50b00();
      }
      local_e8 = '\x01';
      pplVar8 = &local_40;
      FUN_000175c0(uVar9,&local_f0);
      plVar1 = local_40;
      FUN_00053ac0();
      if (plVar1 == (int64_t *)0x0) {
LAB_006ee678:
        pplVar8 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_006ee678;
      }
      plVar1 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar8 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_68 = plVar1;
      pvVar5 = _pthread_getspecific(param_1);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = (void*)local_48;
      }
      uVar9 = FUN_012c9740();
      local_e0 = g_02727938;
      if (g_02727938 != 0) {
        uVar9 = FUN_00d50b00();
      }
      local_d8 = '\x01';
      pplVar8 = &local_40;
      FUN_000175c0(uVar9,&local_e0);
      plVar1 = local_40;
      FUN_00053ac0();
      if (plVar1 == (int64_t *)0x0) {
LAB_006ee78f:
        pplVar8 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_006ee78f;
      }
      plVar2 = local_60;
      plVar1 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar8 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (((plVar2 != (int64_t *)0x0) && (local_68 != (int64_t *)0x0)) &&
         (plVar1 != (int64_t *)0x0)) {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_70 = FUN_00d45bc0();
        param_2 = FUN_00d45bc0();
        FUN_002dcab0((int)local_70);
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d45ad0();
        FUN_002dcf40();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar1 = local_60;
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  plVar1 = g_02727940;
  if (g_02727940 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar1;
  local_38 = '\0';
  cVar3 = FUN_00ca18c0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = g_02727940;
  uVar9 = (uint32_t)g_023b19a0;
  local_48 = (int64_t *)g_023b19a0;
  if (cVar3 != '\0') {
    if (g_02727940 != (int64_t *)0x0) {
      uVar9 = FUN_00d50b00();
    }
    local_d0 = plVar1;
    local_c8 = '\x01';
    pplVar8 = &local_40;
    FUN_000175c0(uVar9,&local_d0);
    plVar1 = local_40;
    FUN_00053ac0();
    if (plVar1 == (int64_t *)0x0) {
LAB_006ee9c5:
      pplVar8 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_006ee9c5;
    }
    plVar1 = *pplVar8;
    if (*(char *)(pplVar8 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar8 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      local_48 = (int64_t *)FUN_00d45bc0();
      FUN_00d50b20();
    }
  }
  plVar1 = g_02727948;
  if (g_02727948 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar1;
  local_38 = '\0';
  cVar3 = FUN_00ca18c0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = g_02727948;
  uVar9 = 0;
  local_60 = (int64_t *)0x0;
  if (cVar3 != '\0') {
    if (g_02727948 != (int64_t *)0x0) {
      uVar9 = FUN_00d50b00();
    }
    local_c0 = plVar1;
    local_b8 = '\x01';
    pplVar8 = &local_40;
    FUN_000175c0(uVar9,&local_c0);
    plVar1 = local_40;
    FUN_00053ac0();
    if (plVar1 == (int64_t *)0x0) {
LAB_006eeafa:
      pplVar8 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_006eeafa;
    }
    plVar1 = *pplVar8;
    if (*(char *)(pplVar8 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar8 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      local_60 = (int64_t *)FUN_00d45bc0();
      FUN_00d50b20();
    }
  }
  plVar1 = g_02727950;
  if (g_02727950 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar1;
  local_38 = '\0';
  cVar3 = FUN_00ca18c0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = g_02727950;
  local_68 = (int64_t *)CONCAT44(local_68._4_4_,g_02390d00);
  if (cVar3 != '\0') {
    uVar9 = g_02390d00;
    if (g_02727950 != (int64_t *)0x0) {
      uVar9 = FUN_00d50b00();
    }
    local_b0 = plVar1;
    local_a8 = '\x01';
    pplVar8 = &local_40;
    FUN_000175c0(uVar9,&local_b0);
    plVar1 = local_40;
    FUN_00053ac0();
    if (plVar1 == (int64_t *)0x0) {
LAB_006eec34:
      pplVar8 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_006eec34;
    }
    plVar1 = *pplVar8;
    if (*(char *)(pplVar8 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar8 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      uVar9 = FUN_00d459e0();
      local_68 = (int64_t *)CONCAT44(local_68._4_4_,uVar9);
      FUN_00d50b20();
    }
  }
  plVar1 = g_02727958;
  if (g_02727958 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar1;
  local_38 = '\0';
  cVar3 = FUN_00ca18c0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = g_02727958;
  uVar9 = 0;
  local_70 = local_70 & 0xffffffff00000000;
  if (cVar3 != '\0') {
    if (g_02727958 != (int64_t *)0x0) {
      uVar9 = FUN_00d50b00();
    }
    local_a0 = plVar1;
    local_98 = '\x01';
    pplVar8 = &local_40;
    FUN_000175c0(uVar9,&local_a0);
    plVar1 = local_40;
    FUN_00053ac0();
    if (plVar1 == (int64_t *)0x0) {
LAB_006eed69:
      pplVar8 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_006eed69;
    }
    plVar1 = *pplVar8;
    if (*(char *)(pplVar8 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar8 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      uVar9 = FUN_00d459e0();
      local_70 = CONCAT44(local_70._4_4_,uVar9);
      FUN_00d50b20();
    }
  }
  plVar1 = g_02727960;
  local_138 = (uint32_t)g_023dccec;
  local_128 = (uint32_t)g_023dccf4;
  if (g_02727960 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar1;
  local_38 = '\0';
  cVar3 = FUN_00ca18c0();
  uVar9 = extraout_XMM0_Da;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    uVar9 = FUN_00d50b20();
  }
  plVar1 = g_02727960;
  if (cVar3 == '\0') goto LAB_006eef4c;
  if (g_02727960 != (int64_t *)0x0) {
    uVar9 = FUN_00d50b00();
  }
  local_90 = plVar1;
  local_88 = '\x01';
  pplVar8 = &local_40;
  FUN_000175c0(uVar9,&local_90);
  plVar1 = local_40;
  if ((g_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    param_1 = 0x5d920;
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
  if (plVar1 == (int64_t *)0x0) {
LAB_006eeebb:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_006eeebb;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    local_78 = '\0';
    local_80 = plVar1;
    local_138 = FUN_00d96410();
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    local_128 = param_2;
  }
LAB_006eef4c:
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_002dca50();
  FUN_004406d0((int)local_48);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_002dca50();
  FUN_004406e0((int)local_60);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_002dca50();
  FUN_004406f0(local_68._0_4_);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_002dca50();
  FUN_00440700((uint32_t)local_70);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_002dca50();
  FUN_00440710(local_138,local_128);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

