// Function: FUN_01769110
// Address: 01769110
// Size: 2457 bytes
// Class: Unknown

void FUN_01769110(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  void *pvVar5;
  void* pVar6;
  int64_t *plVar7;
  int64_t this_ptr;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
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
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014fa190();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152b9c0();
  plVar7 = local_40;
  lVar1 = g_027e3bf0;
  if (g_027e3bf0 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar7 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014fa190();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152b9c0();
    plVar7 = local_40;
    local_110 = g_027cd5d8;
    if (g_027cd5d8 != 0) {
      FUN_00d50b00();
    }
    local_108 = '\x01';
    cVar4 = (**(code **)(*plVar7 + 0x50))();
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      lVar1 = *(int64_t *)(this_ptr + 0x60);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(param_1);
      lVar2 = g_027cd5a0;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
        lVar2 = g_027cd5a0;
      }
      g_027cd5a0 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_027cd5c0;
      local_f8 = '\x01';
      local_100 = lVar2;
      if (g_027cd5c0 != 0) {
        FUN_00d50b00();
      }
      local_f0 = lVar3;
      local_e8 = '\x01';
      local_e0 = 0;
      local_d8 = '\0';
      plVar7 = &local_e0;
      FUN_00d31230(plVar7,&local_f0);
      local_70 = local_40;
      pVar6 = (void*)plVar7;
      local_68 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_68 = '\x01';
      FUN_0176fd70();
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = *(int64_t *)(this_ptr + 0x58);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(pVar6);
      lVar2 = g_027cd5a0;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
        lVar2 = g_027cd5a0;
      }
      g_027cd5a0 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_027cd5b0;
      local_c8 = '\x01';
      local_d0 = lVar2;
      if (g_027cd5b0 != 0) {
        FUN_00d50b00();
      }
      local_c0 = lVar3;
      local_b8 = '\x01';
      local_b0 = 0;
      local_a8 = '\0';
      plVar7 = &local_b0;
      FUN_00d31230(plVar7,&local_c0);
      local_60 = local_40;
      pVar6 = (void*)plVar7;
      local_58 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_58 = '\x01';
      FUN_01735c40();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = *(int64_t *)(this_ptr + 0x58);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(pVar6);
      lVar2 = g_027e3c00;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
        lVar2 = g_027e3c00;
      }
      g_027e3c00 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_98 = '\x01';
      local_a0 = lVar2;
      FUN_01735120();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    lVar1 = *(int64_t *)(this_ptr + 0x60);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(param_1);
    lVar2 = g_027cd5a0;
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
      lVar2 = g_027cd5a0;
    }
    g_027cd5a0 = lVar2;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_027cd5c0;
    if (g_027cd5c0 != 0) {
      FUN_00d50b00();
    }
    local_170 = lVar3;
    local_168 = '\x01';
    local_160 = 0;
    local_158 = '\0';
    plVar7 = &local_160;
    FUN_00d31230(plVar7,&local_170);
    local_90 = local_40;
    pVar6 = (void*)plVar7;
    local_88 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_88 = '\x01';
    FUN_0176fd70();
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x58);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar6);
    lVar2 = g_027cd5a0;
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
      lVar2 = g_027cd5a0;
    }
    g_027cd5a0 = lVar2;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_027e3bf0;
    local_148 = '\x01';
    local_150 = lVar2;
    if (g_027e3bf0 != 0) {
      FUN_00d50b00();
    }
    local_140 = lVar3;
    local_138 = '\x01';
    local_130 = 0;
    local_128 = '\0';
    plVar7 = &local_130;
    FUN_00d31230(plVar7,&local_140);
    local_80 = local_40;
    pVar6 = (void*)plVar7;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    FUN_01735c40();
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    if ((local_138 != '\0') && (local_140 != 0)) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x58);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar6);
    lVar2 = g_027e3c00;
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
      lVar2 = g_027e3c00;
    }
    g_027e3c00 = lVar2;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_118 = '\x01';
    local_120 = lVar2;
    FUN_01735120();
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

