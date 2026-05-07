// Function: FUN_00075c20
// Address: 00075c20
// Size: 5472 bytes
// Class: MUMultiTrackHeaderViewController


void FUN_00075c20(pthread_key_t param_1)

{
  longlong *plVar1;
  bool bVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  longlong unaff_RDI;
  undefined4 uVar8;
  longlong local_280;
  char local_278;
  longlong local_270;
  char local_268;
  longlong local_260;
  char local_258;
  longlong local_250;
  char local_248;
  longlong local_240;
  char local_238;
  longlong local_230;
  char local_228;
  longlong local_220;
  char local_218;
  longlong local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if ((DAT_028032b0 == 0) || (DAT_028032b9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028032b0 == 0) {
      FUN_000823a0();
      uVar8 = FUN_00e86210();
      local_280 = DAT_026f6f60;
      if (DAT_026f6f60 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_278 = '\x01';
      FUN_00c841b0(uVar8,&local_280);
      lVar5 = DAT_028032b0;
      if (DAT_028032b0 != local_40) {
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
        param_1 = (pthread_key_t)DAT_028032b0;
        bVar2 = DAT_028032b0 != 0;
        DAT_028032b0 = lVar5;
        if (bVar2) {
          FUN_00d50b20();
          lVar5 = local_40;
        }
      }
      if ((lVar5 != 0) && (DAT_028032b8 == '\0')) {
        DAT_028032b8 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_40;
      }
      if ((local_38 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_278 != '\0') && (local_280 != 0)) {
        FUN_00d50b20();
      }
      DAT_028032b9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028032b9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028032c0 == 0) || (DAT_028032c9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028032c0 == 0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_270 = DAT_026d83d8;
      if (DAT_026d83d8 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_268 = '\x01';
      FUN_00c841b0(uVar8,&local_270);
      lVar5 = DAT_028032c0;
      if (DAT_028032c0 != local_40) {
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
        param_1 = (pthread_key_t)DAT_028032c0;
        bVar2 = DAT_028032c0 != 0;
        DAT_028032c0 = lVar5;
        if (bVar2) {
          FUN_00d50b20();
          lVar5 = local_40;
        }
      }
      if ((lVar5 != 0) && (DAT_028032c8 == '\0')) {
        DAT_028032c8 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_40;
      }
      if ((local_38 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_268 != '\0') && (local_270 != 0)) {
        FUN_00d50b20();
      }
      DAT_028032c9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028032c9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028032d0 == 0) || (DAT_028032d9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028032d0 == 0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_260 = DAT_026fe480;
      if (DAT_026fe480 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_258 = '\x01';
      FUN_00c841b0(uVar8,&local_260);
      lVar5 = DAT_028032d0;
      if (DAT_028032d0 != local_40) {
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
        param_1 = (pthread_key_t)DAT_028032d0;
        bVar2 = DAT_028032d0 != 0;
        DAT_028032d0 = lVar5;
        if (bVar2) {
          FUN_00d50b20();
          lVar5 = local_40;
        }
      }
      if ((lVar5 != 0) && (DAT_028032d8 == '\0')) {
        DAT_028032d8 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_40;
      }
      if ((local_38 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_258 != '\0') && (local_260 != 0)) {
        FUN_00d50b20();
      }
      DAT_028032d9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028032d9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028032e0 == 0) || (DAT_028032e9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028032e0 == 0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_250 = DAT_026d83e0;
      if (DAT_026d83e0 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_248 = '\x01';
      FUN_00c841b0(uVar8,&local_250);
      lVar5 = DAT_028032e0;
      if (DAT_028032e0 != local_40) {
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
        param_1 = (pthread_key_t)DAT_028032e0;
        bVar2 = DAT_028032e0 != 0;
        DAT_028032e0 = lVar5;
        if (bVar2) {
          FUN_00d50b20();
          lVar5 = local_40;
        }
      }
      if ((lVar5 != 0) && (DAT_028032e8 == '\0')) {
        DAT_028032e8 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_40;
      }
      if ((local_38 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_248 != '\0') && (local_250 != 0)) {
        FUN_00d50b20();
      }
      DAT_028032e9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028032e9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028032f0 == 0) || (DAT_028032f9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028032f0 == 0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_240 = DAT_026d83e8;
      if (DAT_026d83e8 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_238 = '\x01';
      FUN_00c841b0(uVar8,&local_240);
      lVar5 = DAT_028032f0;
      if (DAT_028032f0 != local_40) {
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
        param_1 = (pthread_key_t)DAT_028032f0;
        bVar2 = DAT_028032f0 != 0;
        DAT_028032f0 = lVar5;
        if (bVar2) {
          FUN_00d50b20();
          lVar5 = local_40;
        }
      }
      if ((lVar5 != 0) && (DAT_028032f8 == '\0')) {
        DAT_028032f8 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_40;
      }
      if ((local_38 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_238 != '\0') && (local_240 != 0)) {
        FUN_00d50b20();
      }
      DAT_028032f9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028032f9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_02803300 == 0) || (DAT_02803309 == '\0')) {
    FUN_00e8cb50();
    if (DAT_02803300 == 0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_230 = DAT_026d83f0;
      if (DAT_026d83f0 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_228 = '\x01';
      FUN_00c841b0(uVar8,&local_230);
      lVar5 = DAT_02803300;
      if (DAT_02803300 != local_40) {
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
        param_1 = (pthread_key_t)DAT_02803300;
        bVar2 = DAT_02803300 != 0;
        DAT_02803300 = lVar5;
        if (bVar2) {
          FUN_00d50b20();
          lVar5 = local_40;
        }
      }
      if ((lVar5 != 0) && (DAT_02803308 == '\0')) {
        DAT_02803308 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_40;
      }
      if ((local_38 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_228 != '\0') && (local_230 != 0)) {
        FUN_00d50b20();
      }
      DAT_02803309 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_02803309 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_02803310 == 0) || (DAT_02803319 == '\0')) {
    FUN_00e8cb50();
    if (DAT_02803310 == 0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_220 = DAT_026d83f8;
      if (DAT_026d83f8 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_218 = '\x01';
      FUN_00c841b0(uVar8,&local_220);
      lVar5 = DAT_02803310;
      if (DAT_02803310 != local_40) {
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
        param_1 = (pthread_key_t)DAT_02803310;
        bVar2 = DAT_02803310 != 0;
        DAT_02803310 = lVar5;
        if (bVar2) {
          FUN_00d50b20();
          lVar5 = local_40;
        }
      }
      if ((lVar5 != 0) && (DAT_02803318 == '\0')) {
        DAT_02803318 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_40;
      }
      if ((local_38 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_218 != '\0') && (local_220 != 0)) {
        FUN_00d50b20();
      }
      DAT_02803319 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_02803319 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_02803320 == 0) || (DAT_02803329 == '\0')) {
    FUN_00e8cb50();
    if (DAT_02803320 == 0) {
      FUN_0006e1c0();
      uVar8 = FUN_00e86210();
      local_210 = DAT_026d8400;
      if (DAT_026d8400 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_208 = '\x01';
      FUN_00c841b0(uVar8,&local_210);
      lVar5 = DAT_02803320;
      if (DAT_02803320 != local_40) {
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
        param_1 = (pthread_key_t)DAT_02803320;
        bVar2 = DAT_02803320 != 0;
        DAT_02803320 = lVar5;
        if (bVar2) {
          FUN_00d50b20();
          lVar5 = local_40;
        }
      }
      if ((lVar5 != 0) && (DAT_02803328 == '\0')) {
        DAT_02803328 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_40;
      }
      if ((local_38 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_208 != '\0') && (local_210 != 0)) {
        FUN_00d50b20();
      }
      DAT_02803329 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_02803329 = '\x01';
      FUN_00e8cb70();
    }
  }
  lVar5 = *(longlong *)(unaff_RDI + 0x38);
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
    lVar5 = *(longlong *)(unaff_RDI + 0x38);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (longlong *)(unaff_RDI + 0x10);
    local_158 = 0;
    (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x10))();
    FUN_00d50b00();
    local_150 = DAT_028032b0;
    local_158 = '\x01';
    local_148 = 0;
    local_160 = plVar1;
    if (DAT_028032b0 != 0) {
      FUN_00d50b00();
    }
    local_148 = '\x01';
    pVar6 = 0xa0;
    FUN_00e8b850(0xa0,&local_150);
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
      (**(code **)(*local_160 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)(unaff_RDI + 0x38);
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
    local_130 = DAT_028032c0;
    local_138 = '\x01';
    local_200 = 0;
    local_1f8 = '\0';
    local_128 = 0;
    local_140 = plVar1;
    if (DAT_028032c0 != 0) {
      FUN_00d50b00();
    }
    local_128 = '\x01';
    plVar7 = &local_130;
    FUN_00cbad30(plVar7,&local_200,4);
    pVar6 = (pthread_key_t)plVar7;
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
    if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
      (**(code **)(*local_140 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)(unaff_RDI + 0x38);
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
    local_110 = DAT_028032d0;
    local_118 = '\x01';
    local_1f0 = 0;
    local_1e8 = '\0';
    local_108 = 0;
    local_120 = plVar1;
    if (DAT_028032d0 != 0) {
      FUN_00d50b00();
    }
    local_108 = '\x01';
    plVar7 = &local_110;
    FUN_00cbad30(plVar7,&local_1f0,4);
    pVar6 = (pthread_key_t)plVar7;
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1e8 != '\0') && (local_1f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
      (**(code **)(*local_120 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)(unaff_RDI + 0x38);
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
    local_f0 = DAT_028032e0;
    local_f8 = '\x01';
    local_1e0 = 0;
    local_1d8 = '\0';
    local_e8 = 0;
    local_100 = plVar1;
    if (DAT_028032e0 != 0) {
      FUN_00d50b00();
    }
    local_e8 = '\x01';
    plVar7 = &local_f0;
    FUN_00cbad30(plVar7,&local_1e0,4);
    pVar6 = (pthread_key_t)plVar7;
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1d8 != '\0') && (local_1e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
      (**(code **)(*local_100 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)(unaff_RDI + 0x38);
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
    local_d0 = DAT_028032f0;
    local_d8 = '\x01';
    local_1d0 = 0;
    local_1c8 = '\0';
    local_c8 = 0;
    local_e0 = plVar1;
    if (DAT_028032f0 != 0) {
      FUN_00d50b00();
    }
    local_c8 = '\x01';
    plVar7 = &local_d0;
    FUN_00cbad30(plVar7,&local_1d0,4);
    pVar6 = (pthread_key_t)plVar7;
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1c8 != '\0') && (local_1d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
      (**(code **)(*local_e0 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)(unaff_RDI + 0x38);
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
    local_b0 = DAT_02803300;
    local_b8 = '\x01';
    local_1c0 = 0;
    local_1b8 = '\0';
    local_a8 = 0;
    local_c0 = plVar1;
    if (DAT_02803300 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    plVar7 = &local_b0;
    FUN_00cbad30(plVar7,&local_1c0,4);
    pVar6 = (pthread_key_t)plVar7;
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
      (**(code **)(*local_c0 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)(unaff_RDI + 0x38);
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
    local_90 = DAT_02803310;
    local_98 = '\x01';
    local_1b0 = 0;
    local_1a8 = '\0';
    local_88 = 0;
    local_a0 = plVar1;
    if (DAT_02803310 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    plVar7 = &local_90;
    FUN_00cbad30(plVar7,&local_1b0,4);
    pVar6 = (pthread_key_t)plVar7;
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1a8 != '\0') && (local_1b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      (**(code **)(*local_a0 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)(unaff_RDI + 0x38);
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
    local_70 = DAT_02803320;
    local_78 = '\x01';
    local_1a0 = 0;
    local_198 = '\0';
    local_68 = 0;
    local_80 = plVar1;
    if (DAT_02803320 != 0) {
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
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      (**(code **)(*local_80 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  uVar8 = FUN_000780c0();
  *(undefined4 *)(unaff_RDI + 0x54) = uVar8;
  *(undefined4 *)(unaff_RDI + 0x68) = uVar8;
  FUN_00d403d0();
  FUN_00d50b00();
  local_190 = DAT_02726c30;
  if (DAT_02726c30 != 0) {
    FUN_00d50b00();
  }
  local_188 = '\x01';
  lVar5 = *(longlong *)(unaff_RDI + 0x38);
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
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}


