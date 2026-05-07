// ===================================================================
// MUMultiTrackHeaderViewController — Complete reconstructed pseudocode
// 3 functions
// ===================================================================


// ============================================================
// 00075c20
// ============================================================
// Function: FUN_00075c20
// Address: 00075c20
// Size: 5472 bytes
// Class: MUMultiTrackHeaderViewController

void FUN_00075c20(void* param_1)

{
  int64_t *plVar1;
  bool bVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *plVar7;
  int64_t this_ptr;
  uint32_t uVar8;
  int64_t local_280;
  char local_278;
  int64_t local_270;
  char local_268;
  int64_t local_260;
  char local_258;
  int64_t local_250;
  char local_248;
  int64_t local_240;
  char local_238;
  int64_t local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if ((g_028032b0 == 0) || (g_028032b9 == '\0')) {
    FUN_00e8cb50();
    if (g_028032b0 == 0) {
      FUN_000823a0();
      uVar8 = FUN_00e86210();
      local_280 = g_026f6f60;
      if (g_026f6f60 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_278 = '\x01';
      FUN_00c841b0(uVar8,&local_280);
      lVar5 = g_028032b0;
      if (g_028032b0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar5 = local_40;
        }
        param_1 = (void*)g_028032b0;
        bVar2 = g_028032b0 != 0;
        g_028032b0 = lVar5;
        if (bVar2) {
          FUN_00d50b20();
          lVar5 = local_40;
        }
      }
      if ((lVar5 != 0) && (g_028032b8 == '\0')) {
        g_028032b8 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_40;
      }
      if ((local_38 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_278 != '\0') && (local_280 != 0)) {
        FUN_00d50b20();
      }
      g_028032b9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028032b9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028032c0 == 0) || (g_028032c9 == '\0')) {
    FUN_00e8cb50();
    if (g_028032c0 == 0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_270 = g_026d83d8;
      if (g_026d83d8 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_268 = '\x01';
      FUN_00c841b0(uVar8,&local_270);
      lVar5 = g_028032c0;
      if (g_028032c0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar5 = local_40;
        }
        param_1 = (void*)g_028032c0;
        bVar2 = g_028032c0 != 0;
        g_028032c0 = lVar5;
        if (bVar2) {
          FUN_00d50b20();
          lVar5 = local_40;
        }
      }
      if ((lVar5 != 0) && (g_028032c8 == '\0')) {
        g_028032c8 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_40;
      }
      if ((local_38 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_268 != '\0') && (local_270 != 0)) {
        FUN_00d50b20();
      }
      g_028032c9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028032c9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028032d0 == 0) || (g_028032d9 == '\0')) {
    FUN_00e8cb50();
    if (g_028032d0 == 0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_260 = g_026fe480;
      if (g_026fe480 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_258 = '\x01';
      FUN_00c841b0(uVar8,&local_260);
      lVar5 = g_028032d0;
      if (g_028032d0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar5 = local_40;
        }
        param_1 = (void*)g_028032d0;
        bVar2 = g_028032d0 != 0;
        g_028032d0 = lVar5;
        if (bVar2) {
          FUN_00d50b20();
          lVar5 = local_40;
        }
      }
      if ((lVar5 != 0) && (g_028032d8 == '\0')) {
        g_028032d8 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_40;
      }
      if ((local_38 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_258 != '\0') && (local_260 != 0)) {
        FUN_00d50b20();
      }
      g_028032d9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028032d9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028032e0 == 0) || (g_028032e9 == '\0')) {
    FUN_00e8cb50();
    if (g_028032e0 == 0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_250 = g_026d83e0;
      if (g_026d83e0 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_248 = '\x01';
      FUN_00c841b0(uVar8,&local_250);
      lVar5 = g_028032e0;
      if (g_028032e0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar5 = local_40;
        }
        param_1 = (void*)g_028032e0;
        bVar2 = g_028032e0 != 0;
        g_028032e0 = lVar5;
        if (bVar2) {
          FUN_00d50b20();
          lVar5 = local_40;
        }
      }
      if ((lVar5 != 0) && (g_028032e8 == '\0')) {
        g_028032e8 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_40;
      }
      if ((local_38 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_248 != '\0') && (local_250 != 0)) {
        FUN_00d50b20();
      }
      g_028032e9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028032e9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028032f0 == 0) || (g_028032f9 == '\0')) {
    FUN_00e8cb50();
    if (g_028032f0 == 0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_240 = g_026d83e8;
      if (g_026d83e8 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_238 = '\x01';
      FUN_00c841b0(uVar8,&local_240);
      lVar5 = g_028032f0;
      if (g_028032f0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar5 = local_40;
        }
        param_1 = (void*)g_028032f0;
        bVar2 = g_028032f0 != 0;
        g_028032f0 = lVar5;
        if (bVar2) {
          FUN_00d50b20();
          lVar5 = local_40;
        }
      }
      if ((lVar5 != 0) && (g_028032f8 == '\0')) {
        g_028032f8 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_40;
      }
      if ((local_38 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_238 != '\0') && (local_240 != 0)) {
        FUN_00d50b20();
      }
      g_028032f9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028032f9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_02803300 == 0) || (g_02803309 == '\0')) {
    FUN_00e8cb50();
    if (g_02803300 == 0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_230 = g_026d83f0;
      if (g_026d83f0 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_228 = '\x01';
      FUN_00c841b0(uVar8,&local_230);
      lVar5 = g_02803300;
      if (g_02803300 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar5 = local_40;
        }
        param_1 = (void*)g_02803300;
        bVar2 = g_02803300 != 0;
        g_02803300 = lVar5;
        if (bVar2) {
          FUN_00d50b20();
          lVar5 = local_40;
        }
      }
      if ((lVar5 != 0) && (g_02803308 == '\0')) {
        g_02803308 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_40;
      }
      if ((local_38 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_228 != '\0') && (local_230 != 0)) {
        FUN_00d50b20();
      }
      g_02803309 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_02803309 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_02803310 == 0) || (g_02803319 == '\0')) {
    FUN_00e8cb50();
    if (g_02803310 == 0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_220 = g_026d83f8;
      if (g_026d83f8 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_218 = '\x01';
      FUN_00c841b0(uVar8,&local_220);
      lVar5 = g_02803310;
      if (g_02803310 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar5 = local_40;
        }
        param_1 = (void*)g_02803310;
        bVar2 = g_02803310 != 0;
        g_02803310 = lVar5;
        if (bVar2) {
          FUN_00d50b20();
          lVar5 = local_40;
        }
      }
      if ((lVar5 != 0) && (g_02803318 == '\0')) {
        g_02803318 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_40;
      }
      if ((local_38 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_218 != '\0') && (local_220 != 0)) {
        FUN_00d50b20();
      }
      g_02803319 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_02803319 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_02803320 == 0) || (g_02803329 == '\0')) {
    FUN_00e8cb50();
    if (g_02803320 == 0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_210 = g_026d8400;
      if (g_026d8400 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_208 = '\x01';
      FUN_00c841b0(uVar8,&local_210);
      lVar5 = g_02803320;
      if (g_02803320 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar5 = local_40;
        }
        param_1 = (void*)g_02803320;
        bVar2 = g_02803320 != 0;
        g_02803320 = lVar5;
        if (bVar2) {
          FUN_00d50b20();
          lVar5 = local_40;
        }
      }
      if ((lVar5 != 0) && (g_02803328 == '\0')) {
        g_02803328 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_40;
      }
      if ((local_38 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_208 != '\0') && (local_210 != 0)) {
        FUN_00d50b20();
      }
      g_02803329 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_02803329 = '\x01';
      FUN_00e8cb70();
    }
  }
  lVar5 = *(int64_t *)(this_ptr + 0x38);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar4 = FUN_00e8b990();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    lVar5 = *(int64_t *)(this_ptr + 0x38);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (int64_t *)(this_ptr + 0x10);
    local_158 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x10) + 0x10))();
    FUN_00d50b00();
    local_150 = g_028032b0;
    local_158 = '\x01';
    local_148 = 0;
    local_160 = plVar1;
    if (g_028032b0 != 0) {
      FUN_00d50b00();
    }
    local_148 = '\x01';
    pVar6 = 0xa0;
    FUN_00e8b850(0xa0,&local_150);
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
      (**(code **)(*local_160 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(int64_t *)(this_ptr + 0x38);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_138 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_130 = g_028032c0;
    local_138 = '\x01';
    local_200 = 0;
    local_1f8 = '\0';
    local_128 = 0;
    local_140 = plVar1;
    if (g_028032c0 != 0) {
      FUN_00d50b00();
    }
    local_128 = '\x01';
    plVar7 = &local_130;
    FUN_00cbad30(plVar7,&local_200,4);
    pVar6 = (void*)plVar7;
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
    if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
      (**(code **)(*local_140 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(int64_t *)(this_ptr + 0x38);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_118 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_110 = g_028032d0;
    local_118 = '\x01';
    local_1f0 = 0;
    local_1e8 = '\0';
    local_108 = 0;
    local_120 = plVar1;
    if (g_028032d0 != 0) {
      FUN_00d50b00();
    }
    local_108 = '\x01';
    plVar7 = &local_110;
    FUN_00cbad30(plVar7,&local_1f0,4);
    pVar6 = (void*)plVar7;
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1e8 != '\0') && (local_1f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
      (**(code **)(*local_120 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(int64_t *)(this_ptr + 0x38);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_f8 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_f0 = g_028032e0;
    local_f8 = '\x01';
    local_1e0 = 0;
    local_1d8 = '\0';
    local_e8 = 0;
    local_100 = plVar1;
    if (g_028032e0 != 0) {
      FUN_00d50b00();
    }
    local_e8 = '\x01';
    plVar7 = &local_f0;
    FUN_00cbad30(plVar7,&local_1e0,4);
    pVar6 = (void*)plVar7;
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1d8 != '\0') && (local_1e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
      (**(code **)(*local_100 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(int64_t *)(this_ptr + 0x38);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_d8 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_d0 = g_028032f0;
    local_d8 = '\x01';
    local_1d0 = 0;
    local_1c8 = '\0';
    local_c8 = 0;
    local_e0 = plVar1;
    if (g_028032f0 != 0) {
      FUN_00d50b00();
    }
    local_c8 = '\x01';
    plVar7 = &local_d0;
    FUN_00cbad30(plVar7,&local_1d0,4);
    pVar6 = (void*)plVar7;
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1c8 != '\0') && (local_1d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
      (**(code **)(*local_e0 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(int64_t *)(this_ptr + 0x38);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_b8 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_b0 = g_02803300;
    local_b8 = '\x01';
    local_1c0 = 0;
    local_1b8 = '\0';
    local_a8 = 0;
    local_c0 = plVar1;
    if (g_02803300 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    plVar7 = &local_b0;
    FUN_00cbad30(plVar7,&local_1c0,4);
    pVar6 = (void*)plVar7;
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
      (**(code **)(*local_c0 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(int64_t *)(this_ptr + 0x38);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_98 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_90 = g_02803310;
    local_98 = '\x01';
    local_1b0 = 0;
    local_1a8 = '\0';
    local_88 = 0;
    local_a0 = plVar1;
    if (g_02803310 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    plVar7 = &local_90;
    FUN_00cbad30(plVar7,&local_1b0,4);
    pVar6 = (void*)plVar7;
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1a8 != '\0') && (local_1b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      (**(code **)(*local_a0 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(int64_t *)(this_ptr + 0x38);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_78 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_70 = g_02803320;
    local_78 = '\x01';
    local_1a0 = 0;
    local_198 = '\0';
    local_68 = 0;
    local_80 = plVar1;
    if (g_02803320 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    FUN_00cbad30(&local_70,&local_1a0,4);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      (**(code **)(*local_80 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  uVar8 = FUN_000780c0();
  *(void*)(this_ptr + 0x54) = uVar8;
  *(void*)(this_ptr + 0x68) = uVar8;
  FUN_00d403d0();
  FUN_00d50b00();
  local_190 = g_02726c30;
  if (g_02726c30 != 0) {
    FUN_00d50b00();
  }
  local_188 = '\x01';
  lVar5 = *(int64_t *)(this_ptr + 0x38);
  if (lVar5 == 0) {
    local_170 = 0;
  }
  else {
    FUN_00d50b00();
    local_170 = lVar5;
  }
  local_168 = '\x01';
  FUN_004f9670();
  local_50 = local_180;
  local_48 = 0;
  if (local_178 == '\0') {
    if (local_180 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_178 = '\0';
  }
  local_48 = '\x01';
  FUN_00d41430(&local_50,&local_190);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01c001a0
// ============================================================
// Function: FUN_01c001a0
// Address: 01c001a0
// Size: 993 bytes
// Class: MUMultiTrackHeaderViewController
// String references:
//   "MUMultiTrackHeaderViewController"

void FUN_01c001a0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t **pplVar6;
  bool bVar7;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  char local_31;
  
  plVar1 = (int64_t *)*arg1;
  if ((g_02700010 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027e7e28 = FUN_00015ff0();
    g_027e7e10 = "MUMultiTrackHeaderViewController";
    g_027e7e18 = 0x78;
    g_027e7e20 = FUN_00081d20;
    g_027e7e30 = 0;
    ram_00000000027e7e38 = 0;
    g_027e7e40 = 0;
    g_027e7eb8 = 0;
    ram_00000000027e7ec0 = 0;
    g_027e7ec8 = 0;
    g_027e7eca = 1;
    g_027e7e48 = 0;
    ram_00000000027e7e50 = 0;
    g_027e7e58 = 0;
    ram_00000000027e7e60 = 0;
    g_027e7e68 = 0;
    ram_00000000027e7e70 = 0;
    g_027e7e78 = 0;
    ram_00000000027e7e80 = 0;
    g_027e7e88 = 0;
    ram_00000000027e7e90 = 0;
    g_027e7e98 = 0;
    ram_00000000027e7ea0 = 0;
    g_027e7ea8 = 0;
    ram_00000000027e7eb0 = 0;
    g_027e7ed3 = 0;
    g_027e7ecb = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01c001ec:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01c001ec;
  }
  lVar2 = *arg1;
  cVar3 = (char)arg1[1];
  if ((cVar3 != '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  lVar5 = *(int64_t *)(this_ptr + 0x1c8);
  if (lVar5 == lVar2) {
    if (lVar5 != 0) {
      FUN_01e53c20();
      plVar1 = local_58;
      FUN_01e3f820();
      (**(code **)(*plVar1 + 0x4d0))();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    goto LAB_01c0049a;
  }
  if (lVar5 == 0) {
    lVar5 = 0;
    if (lVar2 != 0) goto LAB_01c002e6;
  }
  else {
    FUN_01e53c20();
    FUN_01e40eb0();
    plVar1 = local_58;
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(this_ptr + 0x1c8) + 0x4d0))();
    }
    lVar5 = *(int64_t *)(this_ptr + 0x1c8);
    if (lVar5 != lVar2) {
LAB_01c002e6:
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0x1c8) = lVar2;
      bVar7 = lVar5 != 0;
      lVar5 = lVar2;
      if (bVar7) {
        FUN_00d50b20();
        lVar5 = *(int64_t *)(this_ptr + 0x1c8);
      }
    }
  }
  if (lVar5 == 0) goto LAB_01c0049a;
  FUN_01e53c20();
  FUN_01e40eb0();
  plVar1 = local_58;
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    local_31 = cVar3;
    FUN_01e53c20();
    pplVar6 = &local_58;
    FUN_01e40eb0();
    plVar1 = local_58;
    FUN_01bf2e70();
    if (plVar1 == (int64_t *)0x0) {
LAB_01c003c4:
      pplVar6 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01c003c4;
    }
    cVar3 = local_31;
    plVar1 = *pplVar6;
    if (*(char *)(pplVar6 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar6 + 1) = 0;
      cVar3 = local_31;
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x978))();
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x1c8);
  FUN_00d50b00();
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x4c8))();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
LAB_01c0049a:
  if ((cVar3 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 000756d0
// ============================================================
// Function: FUN_000756d0
// Address: 000756d0
// Size: 815 bytes
// Class: MUMultiTrackHeaderViewController
// String references:
//   "MUMultiTrackHeaderViewController"

int64_t * FUN_000756d0(uint32_t param_1)

{
  uint uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t **pplVar7;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar9;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  int64_t *local_48;
  char local_40;
  uint64_t local_38;
  
  uVar1 = *(uint *)(arg1 + 0x6c);
  uVar6 = (uint64_t)uVar1;
  lVar8 = g_026d83c8;
  if (((uVar1 == 3) || (lVar8 = g_026d83c0, uVar1 == 2)) || (lVar8 = g_026d83b8, uVar1 == 1)) {
    if (lVar8 != 0) {
      uVar6 = FUN_00d50b00();
      param_1 = extraout_XMM0_Da;
    }
    local_38 = CONCAT71((int7)(uVar6 >> 8),lVar8 != 0);
  }
  else {
    local_38 = 0;
    lVar8 = 0;
  }
  local_80 = 0;
  local_78 = '\0';
  pplVar7 = &local_48;
  local_50 = lVar8;
  uVar9 = FUN_01e51a60(param_1,&local_80);
  plVar2 = local_48;
  if ((g_02700010 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar9 = extraout_XMM0_Da_01, iVar5 != 0)) {
    g_027e7e28 = FUN_00015ff0();
    g_027e7e10 = "MUMultiTrackHeaderViewController";
    g_027e7e18 = 0x78;
    g_027e7e20 = FUN_00081d20;
    g_027e7e30 = 0;
    ram_00000000027e7e38 = 0;
    g_027e7e40 = 0;
    g_027e7eb8 = 0;
    ram_00000000027e7ec0 = 0;
    g_027e7ec8 = 0;
    g_027e7eca = 1;
    g_027e7e48 = 0;
    ram_00000000027e7e50 = 0;
    g_027e7e58 = 0;
    ram_00000000027e7e60 = 0;
    g_027e7e68 = 0;
    ram_00000000027e7e70 = 0;
    g_027e7e78 = 0;
    ram_00000000027e7e80 = 0;
    g_027e7e88 = 0;
    ram_00000000027e7e90 = 0;
    g_027e7e98 = 0;
    ram_00000000027e7ea0 = 0;
    g_027e7ea8 = 0;
    ram_00000000027e7eb0 = 0;
    g_027e7ed3 = 0;
    g_027e7ecb = 0;
    uVar9 = ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_000757aa:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar9 = extraout_XMM0_Da_00;
    if (cVar4 == '\0') goto LAB_000757aa;
  }
  plVar2 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar8 = g_026d83d0;
  if (g_026d83d0 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_70 = lVar8;
  local_68 = '\x01';
  pplVar7 = &local_48;
  FUN_01e57490(uVar9,&local_70);
  plVar3 = local_48;
  FUN_00081d60();
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_0007586e;
  }
  pplVar7 = (int64_t **)&g_02802688;
LAB_0007586e:
  plVar3 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  lVar8 = *(int64_t *)(arg1 + 0x38);
  if (lVar8 == 0) {
    local_60 = 0;
  }
  else {
    FUN_00d50b00();
    local_60 = lVar8;
  }
  local_58 = '\x01';
  FUN_01d2a770();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = (int64_t)plVar2;
  *(void*)(this_ptr + 1) = 1;
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_38 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

