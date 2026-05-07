// Function: FUN_01b5e5b0
// Address: 01b5e5b0
// Size: 4424 bytes
// Class: MUSpectrumShaper
// String references:
//   "MUSpectrumShaperSlider"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b5e5b0(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  pthread_key_t pVar8;
  longlong **pplVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
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
  longlong local_160;
  char local_158;
  undefined8 *local_150;
  char local_148;
  longlong local_140;
  char local_138;
  undefined8 *local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01b5e510();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01b5e5fd;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_01b5e5fd:
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_118 = 0;
    (**(code **)(*(longlong *)(unaff_RDI + 0x70) + 0x10))();
    uVar10 = FUN_00d50b00();
    local_118 = '\x01';
    local_250 = 0;
    local_248 = '\0';
    local_120 = (longlong *)(unaff_RDI + 0x70);
    FUN_00e8b9a0(uVar10,&local_250);
    if ((local_248 != '\0') && (local_250 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
      (**(code **)(*local_120 + 0x10))();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  local_240 = *unaff_RSI;
  local_238 = '\0';
  FUN_01d2a770();
  if ((local_238 != '\0') && (local_240 != 0)) {
    FUN_00d50b20();
  }
  FUN_01b5e510();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01b5e742;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_01b5e742:
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (longlong *)(unaff_RDI + 0x70);
    local_108 = 0;
    (**(code **)(*(longlong *)(unaff_RDI + 0x70) + 0x10))();
    FUN_00d50b00();
    local_108 = '\x01';
    local_110 = plVar1;
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar10 = FUN_00d4efa0();
    local_230 = DAT_027e4c88;
    if (DAT_027e4c88 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_228 = '\x01';
    FUN_00c841b0(uVar10,&local_230);
    local_d0 = local_40;
    local_c8 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_c8 = '\x01';
    pVar8 = 4;
    FUN_00e8b850(4,&local_d0);
    if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_228 != '\0') && (local_230 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
      (**(code **)(*local_110 + 0x10))();
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_f8 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_f8 = '\x01';
    local_100 = plVar1;
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar10 = FUN_00d4efa0();
    local_220 = DAT_027d4cf8;
    if (DAT_027d4cf8 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_218 = '\x01';
    FUN_00c841b0(uVar10,&local_220);
    local_c0 = local_40;
    local_b8 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_b8 = '\x01';
    pVar8 = 4;
    FUN_00e8b850(4,&local_c0);
    if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
      (**(code **)(*local_100 + 0x10))();
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_e8 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_e8 = '\x01';
    local_f0 = plVar1;
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar10 = FUN_00d4efa0();
    local_210 = DAT_027d4d00;
    if (DAT_027d4d00 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_208 = '\x01';
    FUN_00c841b0(uVar10,&local_210);
    local_b0 = local_40;
    local_a8 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_a8 = '\x01';
    param_1 = 4;
    FUN_00e8b850(4,&local_b0);
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_208 != '\0') && (local_210 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
      (**(code **)(*local_f0 + 0x10))();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_01b5e510();
  local_e0 = local_40;
  local_d8 = 0;
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  FUN_01ac7020();
  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar10 = FUN_01b60350();
  local_200 = DAT_027e4c58;
  if (*unaff_RSI == 0) {
    return;
  }
  if (DAT_027e4c58 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_1f8 = '\x01';
  pplVar9 = &local_40;
  uVar10 = FUN_01e57490(uVar10,&local_200);
  plVar1 = local_40;
  if ((DAT_027e5dd8 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_00, iVar5 != 0)) {
    _DAT_027e5d28 = FUN_001b37d0();
    _DAT_027e5d10 = "MUSpectrumShaperSlider";
    _DAT_027e5d18 = 0x200;
    param_1 = 0x1bdaad0;
    _DAT_027e5d20 = FUN_01bdaad0;
    _DAT_027e5d30 = 0;
    uRam00000000027e5d38 = 0;
    _DAT_027e5d40 = 0;
    uRam00000000027e5d48 = 0;
    _DAT_027e5d50 = 0;
    uRam00000000027e5d58 = 0;
    _DAT_027e5d60 = 0;
    uRam00000000027e5d68 = 0;
    _DAT_027e5d70 = 0;
    uRam00000000027e5d78 = 0;
    _DAT_027e5d80 = 0;
    uRam00000000027e5d88 = 0;
    _DAT_027e5d90 = 0;
    uRam00000000027e5d98 = 0;
    _DAT_027e5da0 = 0;
    uRam00000000027e5da8 = 0;
    _DAT_027e5db0 = 0;
    uRam00000000027e5db8 = 0;
    _DAT_027e5dc0 = 0;
    uRam00000000027e5dc8 = 0;
    _DAT_027e5dd0 = 0;
    uVar10 = ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01b5ed2c:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar10 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_01b5ed2c;
  }
  plVar1 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar10 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar9 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar5 = FUN_015b7ba0();
    lVar3 = DAT_027e4c90;
    lVar2 = DAT_027e4c60;
    if (iVar5 == 3) {
      if (DAT_027e4c90 != 0) {
        FUN_00d50b00();
      }
      local_1f0 = lVar3;
      local_1e8 = '\x01';
      FUN_01bd1950(DAT_02390d00);
      if ((local_1e8 != '\0') && (local_1f0 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027e4c98;
      if (DAT_027e4c98 != 0) {
        FUN_00d50b00();
      }
      local_1e0 = lVar2;
      local_1d8 = '\x01';
      FUN_01bd1950(0);
      if ((local_1d8 != '\0') && (local_1e0 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027e4ca0;
      if (DAT_027e4ca0 != 0) {
        FUN_00d50b00();
      }
      local_1d0 = lVar2;
      local_1c8 = '\x01';
      FUN_01bd1950(DAT_02390124);
      if ((local_1c8 != '\0') && (local_1d0 != 0)) {
        FUN_00d50b20();
      }
      uVar10 = (**(code **)(*plVar1 + 0x9c0))();
      local_1c0 = DAT_027e4ca8;
      if (DAT_027e4ca8 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_1b8 = '\x01';
      FUN_01e57260(uVar10,&local_1c0);
      local_98 = 0;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_98 = '\x01';
      local_a0 = local_50;
      FUN_00d4c980();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (DAT_027e4c60 != 0) {
        FUN_00d50b00();
      }
      local_1b0 = lVar2;
      local_1a8 = '\x01';
      FUN_01bd1950(DAT_02390d00);
      if ((local_1a8 != '\0') && (local_1b0 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027e4c68;
      if (DAT_027e4c68 != 0) {
        FUN_00d50b00();
      }
      local_1a0 = lVar2;
      local_198 = '\x01';
      FUN_01bd1950(0);
      if ((local_198 != '\0') && (local_1a0 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027e4c70;
      if (DAT_027e4c70 != 0) {
        FUN_00d50b00();
      }
      local_190 = lVar2;
      local_188 = '\x01';
      FUN_01bd1950(DAT_02390124);
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
      uVar10 = (**(code **)(*plVar1 + 0x9c0))();
      local_180 = DAT_027e4cb0;
      if (DAT_027e4cb0 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_178 = '\x01';
      FUN_01e57260(uVar10,&local_180);
      local_88 = 0;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_88 = '\x01';
      local_90 = local_50;
      FUN_00d4c980();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar10 = FUN_00d50b20();
  }
  lVar2 = DAT_027e4c78;
  if (DAT_027e4c78 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_170 = lVar2;
  local_168 = '\x01';
  pplVar9 = &local_40;
  FUN_01e57490(uVar10,&local_170);
  plVar1 = local_40;
  if ((DAT_027e5dd8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_027e5d28 = FUN_001b37d0();
    _DAT_027e5d10 = "MUSpectrumShaperSlider";
    _DAT_027e5d18 = 0x200;
    param_1 = 0x1bdaad0;
    _DAT_027e5d20 = FUN_01bdaad0;
    _DAT_027e5d30 = 0;
    uRam00000000027e5d38 = 0;
    _DAT_027e5d40 = 0;
    uRam00000000027e5d48 = 0;
    _DAT_027e5d50 = 0;
    uRam00000000027e5d58 = 0;
    _DAT_027e5d60 = 0;
    uRam00000000027e5d68 = 0;
    _DAT_027e5d70 = 0;
    uRam00000000027e5d78 = 0;
    _DAT_027e5d80 = 0;
    uRam00000000027e5d88 = 0;
    _DAT_027e5d90 = 0;
    uRam00000000027e5d98 = 0;
    _DAT_027e5da0 = 0;
    uRam00000000027e5da8 = 0;
    _DAT_027e5db0 = 0;
    uRam00000000027e5db8 = 0;
    _DAT_027e5dc0 = 0;
    uRam00000000027e5dc8 = 0;
    _DAT_027e5dd0 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_01b5f236;
  }
  pplVar9 = (longlong **)&DAT_02802688;
LAB_01b5f236:
  plVar1 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar9 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar5 = FUN_015b7ba0();
    if (iVar5 == 3) {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(undefined8 *)((longlong)puVar7 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x1a) = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      *puVar7 = &DAT_0264c460;
      FUN_00d500e0();
      uVar10 = FUN_00d48ac0();
      local_160 = DAT_027e4cb8;
      if (DAT_027e4cb8 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_158 = '\x01';
      FUN_01e57260(uVar10,&local_160);
      local_80 = local_40;
      local_78 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_78 = '\x01';
      FUN_00d4c980();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      local_148 = '\0';
      local_150 = puVar7;
      (**(code **)(*plVar1 + 0x9b8))();
      if ((local_148 != '\0') && (local_150 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_02576110;
      *(undefined8 *)((longlong)puVar7 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x1a) = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      (*DAT_02576128)();
      uVar10 = FUN_00d48ac0();
      local_140 = DAT_027e4cb8;
      if (DAT_027e4cb8 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_138 = '\x01';
      FUN_01e57260(uVar10,&local_140);
      local_70 = local_40;
      local_68 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_68 = '\x01';
      FUN_00d4c980();
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      local_128 = '\0';
      local_130 = puVar7;
      (**(code **)(*plVar1 + 0x9b8))();
      if ((local_128 != '\0') && (local_130 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}


