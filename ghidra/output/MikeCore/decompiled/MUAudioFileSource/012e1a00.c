// Function: FUN_012e1a00
// Address: 012e1a00
// Size: 4441 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_012e1a00(pthread_key_t param_1)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  void *pvVar10;
  undefined8 *puVar11;
  pthread_key_t pVar12;
  ulonglong uVar13;
  longlong *plVar14;
  char unaff_SIL;
  longlong *unaff_RDI;
  longlong **pplVar15;
  undefined4 uVar16;
  longlong *local_298;
  undefined1 local_290;
  longlong *local_288;
  char local_280;
  longlong *local_278;
  char local_270;
  longlong *local_268;
  char local_260;
  longlong local_258;
  char local_250;
  longlong local_248;
  char local_240;
  longlong *local_238;
  char local_230;
  longlong *local_228;
  char local_220;
  longlong local_218;
  char local_210;
  longlong *local_208;
  char local_200;
  longlong *local_1f8;
  char local_1f0;
  longlong local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong *local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong *local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  undefined8 *local_158;
  int local_150;
  undefined4 uStack_14c;
  char local_148;
  longlong local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  
  pvVar10 = _pthread_getspecific(param_1);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar15 = &local_68;
  FUN_01320d00();
  plVar14 = local_68;
  if ((DAT_026fdd70 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
    _DAT_026e3238 = FUN_00115af0();
    DAT_026e3220 = "MUAudioFileSource";
    _DAT_026e3228 = 0xa0;
    param_1 = 0x136df0;
    _DAT_026e3230 = FUN_00136df0;
    _DAT_026e3240 = 0;
    uRam00000000026e3248 = 0;
    _DAT_026e3250 = 0;
    uRam00000000026e3258 = 0;
    _DAT_026e3260 = 0;
    uRam00000000026e3268 = 0;
    _DAT_026e3270 = 0;
    uRam00000000026e3278 = 0;
    _DAT_026e3280 = 0;
    uRam00000000026e3288 = 0;
    _DAT_026e3290 = 0;
    uRam00000000026e3298 = 0;
    _DAT_026e32a0 = 0;
    uRam00000000026e32a8 = 0;
    _DAT_026e32b0 = 0;
    uRam00000000026e32b8 = 0;
    _DAT_026e32c0 = 0;
    uRam00000000026e32c8 = 0;
    _DAT_026e32d0 = 0;
    uRam00000000026e32d8 = 0;
    _DAT_026e32e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar14 == (longlong *)0x0) {
LAB_012e1a95:
    pplVar15 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar14 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_012e1a95;
  }
  plVar14 = *pplVar15;
  if (*(char *)(pplVar15 + 1) == '\0') {
    if (plVar14 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar15 + 1) = 0;
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar14 == (longlong *)0x0) {
    uVar13 = 0;
    goto LAB_012e2a9b;
  }
  if (unaff_SIL == '\0') {
    FUN_012e0fb0();
    plVar14 = local_68;
    if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    uVar16 = FUN_00003040();
    uVar16 = FUN_00d91a70(uVar16,1);
    local_d0 = local_78;
    local_c8 = 0;
    plVar3 = DAT_027c2508;
    if (local_70 == '\0') {
      if (local_78 != 0) {
        uVar16 = FUN_00d50b00();
        plVar3 = DAT_027c2508;
      }
    }
    else {
      local_70 = '\0';
    }
    local_c8 = '\x01';
    DAT_027c2508 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      local_c8 = '\x01';
      uVar16 = FUN_00d50b00();
    }
    local_60 = '\0';
    local_68 = plVar3;
    FUN_00ca0840(uVar16,&local_68);
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    uVar16 = FUN_00003050();
    uVar16 = FUN_00d91a70(uVar16,1);
    local_c0 = local_78;
    local_b8 = 0;
    plVar3 = DAT_027c2510;
    if (local_70 == '\0') {
      if (local_78 != 0) {
        uVar16 = FUN_00d50b00();
        plVar3 = DAT_027c2510;
      }
    }
    else {
      local_70 = '\0';
    }
    local_b8 = '\x01';
    DAT_027c2510 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      local_b8 = '\x01';
      uVar16 = FUN_00d50b00();
    }
    local_60 = '\0';
    local_68 = plVar3;
    FUN_00ca0840(uVar16,&local_68);
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123abe0();
    plVar3 = local_68;
    local_80 = local_68;
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_012e2043;
      }
LAB_012e23dc:
      bVar2 = true;
      bVar1 = true;
      lVar4 = DAT_027c24d8;
joined_r0x012e23e9:
      DAT_027c24d8 = lVar4;
      if (lVar4 != 0) {
        FUN_00d50b00();
        bVar1 = bVar2;
      }
      lVar5 = DAT_027c24e0;
      local_250 = '\x01';
      local_258 = lVar4;
      if (DAT_027c24e0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_027c24e8;
      local_248 = lVar5;
      local_240 = '\x01';
      if (DAT_027c24e8 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_98 = local_80;
      uVar16 = FUN_00083ea0(2,&local_98);
      FUN_00e972c0(uVar16,&local_68);
      local_68 = (longlong *)&DAT_0253d630;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_68 = &DAT_024c5048;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_240 != '\0') && (local_248 != 0)) {
        FUN_00d50b20();
      }
      bVar8 = 1;
      if ((local_250 != '\0') && (local_258 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar1) goto LAB_012e2a78;
    }
    else {
      if (local_68 == (longlong *)0x0) goto LAB_012e23dc;
LAB_012e2043:
      cVar6 = (**(code **)(*plVar3 + 0x398))();
      if (cVar6 == '\0') {
        bVar2 = false;
        bVar1 = false;
        lVar4 = DAT_027c24d8;
        goto joined_r0x012e23e9;
      }
      local_38 = plVar14;
      puVar11 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar11 = &DAT_025c2410;
      FUN_00d500e0();
      local_238 = plVar3;
      local_230 = '\0';
      local_158 = puVar11;
      uVar16 = FUN_014fff90();
      plVar3 = local_68;
      if (local_60 == '\0') {
        if (((local_68 != (longlong *)0x0) && (uVar16 = FUN_00d50b00(), local_60 != '\0')) &&
           (local_68 != (longlong *)0x0)) {
          uVar16 = FUN_00d50b20();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_230 != '\0') && (local_238 != (longlong *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
      local_228 = plVar3;
      local_220 = '\0';
      local_a0 = plVar3;
      FUN_00cc95f0(uVar16,0);
      plVar3 = local_68;
      if (local_60 == '\0') {
        if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
           (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60 = '\0';
      }
      local_88 = plVar3;
      if ((local_220 != '\0') && (local_228 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar4 = DAT_027c2518;
      if (DAT_027c2518 != 0) {
        FUN_00d50b00();
      }
      local_218 = lVar4;
      local_210 = '\x01';
      local_208 = plVar14;
      local_200 = '\0';
      local_1f8 = (longlong *)0x0;
      local_1f0 = '\0';
      local_1e8 = 0;
      local_1e0 = '\0';
      cVar6 = FUN_00cc9d90(&local_208,1,&local_1f8,&local_1e8);
      if ((local_1e0 != '\0') && (local_1e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1f0 != '\0') && (local_1f8 != (longlong *)0x0)) {
        (**(code **)(*local_1f8 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_200 != '\0') && (local_208 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_210 != '\0') && (local_218 != 0)) {
        FUN_00d50b20();
      }
      lVar4 = DAT_027c2548;
      bVar8 = 1;
      plVar14 = local_a0;
      if (cVar6 != '\0') {
        if (DAT_027c2548 != 0) {
          FUN_00d50b00();
        }
        local_1d8 = lVar4;
        local_1d0 = '\x01';
        local_1c8 = *unaff_RDI;
        local_1c0 = '\0';
        local_1b8 = (longlong *)0x0;
        local_1b0 = '\0';
        local_1a8 = 0;
        local_1a0 = '\0';
        cVar6 = FUN_00cc9d90(&local_1c8,0xd,&local_1b8,&local_1a8);
        plVar14 = local_a0;
        if ((local_1a0 != '\0') && (local_1a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
          (**(code **)(*local_1b8 + 0x10))();
          FUN_00d50b20();
        }
        if ((local_1c0 != '\0') && (local_1c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1d0 != '\0') && (local_1d8 != 0)) {
          FUN_00d50b20();
        }
        if (cVar6 != '\0') {
          local_198 = local_80;
          local_190 = '\0';
          FUN_00deb9f0();
          plVar3 = local_68;
          if (local_60 == '\0') {
            if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
               (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_60 = '\0';
          }
          if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          lVar4 = DAT_027c24f0;
          if (DAT_027c24f0 != 0) {
            FUN_00d50b00();
          }
          local_188 = lVar4;
          local_180 = '\x01';
          FUN_00de6fa0();
          local_b0 = local_68;
          local_a8 = 0;
          if (local_60 == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          plVar14 = local_a0;
          local_a8 = '\x01';
          bVar8 = FUN_00cc9d30(&local_b0,1);
          if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_180 != '\0') && (local_188 != 0)) {
            FUN_00d50b20();
          }
          bVar8 = bVar8 ^ 1;
          if (plVar3 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      if (local_88 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar14 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      plVar14 = local_38;
LAB_012e2a78:
      FUN_00d50b20();
    }
    if (plVar14 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    uVar13 = (ulonglong)(bVar8 == 0);
  }
  else {
    uVar16 = FUN_00d9bb60();
    plVar14 = local_68;
    if ((((local_60 == '\0') && (local_68 != (longlong *)0x0)) &&
        (uVar16 = FUN_00d50b00(), local_60 != '\0')) && (local_68 != (longlong *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    local_298 = plVar14;
    local_290 = 0;
    local_88 = plVar14;
    FUN_012e16c0(uVar16,&local_298);
    local_80 = local_68;
    if (((local_60 == '\0') && (local_68 != (longlong *)0x0)) &&
       ((FUN_00d50b00(), local_60 != '\0' && (local_68 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar7 = FUN_013d91b0();
    local_288 = local_80;
    local_280 = '\0';
    FUN_000030c0();
    FUN_00d91a70((longlong)local_150,1);
    local_140 = local_78;
    local_138 = 0;
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    local_138 = '\x01';
    local_278 = plVar14;
    local_270 = '\0';
    uVar16 = FUN_00003040();
    FUN_00d91a70(uVar16,1);
    local_130 = local_98;
    local_128 = 0;
    if (local_90 == '\0') {
      if (local_98 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = '\0';
    }
    local_128 = '\x01';
    uVar16 = FUN_00003050();
    FUN_00d91a70(uVar16,1);
    local_118 = 0;
    local_120 = CONCAT44(uStack_14c,local_150);
    if (local_148 == '\0') {
      if (local_120 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_148 = '\0';
    }
    local_118 = '\x01';
    uVar16 = FUN_00003080();
    FUN_00d91a70(uVar16,1);
    local_110 = local_178;
    local_108 = 0;
    if (local_170 == '\0') {
      if (local_178 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_170 = '\0';
    }
    local_108 = '\x01';
    uVar16 = FUN_000030a0();
    FUN_00d91a70(uVar16,1);
    local_100 = local_168;
    local_f8 = 0;
    if (local_160 == '\0') {
      if (local_168 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_160 = '\0';
    }
    local_f8 = '\x01';
    pplVar15 = &local_278;
    FUN_00bdf830(pplVar15,&local_140,uVar7,&local_130);
    plVar14 = local_68;
    pVar12 = (pthread_key_t)pplVar15;
    if (local_60 == '\0') {
      if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (CONCAT44(uStack_14c,local_150) != 0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_270 != '\0') && (local_278 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_138 != '\0') && (local_140 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_280 != '\0') && (local_288 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar10 = _pthread_getspecific(pVar12);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123b100();
    local_268 = plVar14;
    local_260 = '\0';
    pvVar10 = _pthread_getspecific(pVar12);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar16 = FUN_0123b100();
    local_e0 = local_98;
    local_d8 = 0;
    if (local_90 == '\0') {
      if (local_98 != (longlong *)0x0) {
        uVar16 = FUN_00d50b00();
      }
    }
    else {
      local_90 = '\0';
    }
    plVar3 = local_88;
    local_d8 = '\x01';
    FUN_00be0550(uVar16,&local_e0);
    lVar4 = local_78;
    local_e8 = 0;
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    local_e8 = '\x01';
    local_f0 = lVar4;
    FUN_00b8cce0();
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_260 != '\0') && (local_268 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar14 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_80 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    uVar13 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_012e2a9b:
  return uVar13 & 0xffffffff;
}


