// Function: FUN_000781f0
// Address: 000781f0
// Size: 3369 bytes
// Class: GNFilePath


void FUN_000781f0(void)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  longlong **pplVar7;
  longlong *plVar8;
  longlong local_248;
  char local_240;
  longlong local_238;
  char local_230;
  longlong local_228;
  char local_220;
  longlong local_218;
  char local_210;
  longlong local_208;
  char local_200;
  longlong local_1f8;
  char local_1f0;
  longlong local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong *local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_40;
  char local_38;
  
  FUN_00d403d0();
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02726c30;
  if (DAT_02726c30 != 0) {
    FUN_00d50b00();
  }
  local_248 = lVar1;
  local_240 = '\x01';
  lVar1 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar1 == 0) {
    local_178 = 0;
  }
  else {
    FUN_00d50b00();
    local_178 = lVar1;
  }
  local_170 = '\x01';
  FUN_004f9670();
  local_68 = local_188;
  local_60 = 0;
  if (local_180 == '\0') {
    if (local_188 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_180 = '\0';
  }
  local_60 = '\x01';
  plVar8 = &local_68;
  FUN_00d41040(plVar8,&local_248);
  pVar5 = (pthread_key_t)plVar8;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  if ((local_240 != '\0') && (local_248 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026d83d0;
  if (*(longlong *)(unaff_RDI + 0x48) == 0) goto LAB_0007848a;
  if (DAT_026d83d0 != 0) {
    FUN_00d50b00();
  }
  local_238 = lVar1;
  local_230 = '\x01';
  pplVar7 = &local_40;
  FUN_01e57490();
  plVar8 = local_40;
  FUN_00081d60();
  if (plVar8 == (longlong *)0x0) {
LAB_000783ec:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_000783ec;
  }
  plVar8 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_230 != '\0') && (local_238 != 0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (longlong *)0x0) {
    local_220 = '\0';
    local_228 = 0;
    FUN_01d2a770();
    if ((local_220 != '\0') && (local_228 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_0007848a:
  lVar1 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar4 = FUN_00e8b990();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 == 0) {
    (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x10))();
    FUN_00d50b00();
    local_190 = '\x01';
    local_198 = (longlong *)(unaff_RDI + 0x10);
    FUN_00cbb340();
    if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
      (**(code **)(*local_198 + 0x10))();
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = *(longlong *)(unaff_RDI + 0x38);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar8 = (longlong *)(unaff_RDI + 0x10);
    (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x10))();
    FUN_00d50b00();
    FUN_000823a0();
    FUN_00e86210();
    local_218 = DAT_026f6f60;
    if (DAT_026f6f60 != 0) {
      FUN_00d50b00();
    }
    local_210 = '\x01';
    FUN_00c841b0();
    local_58 = local_40;
    local_50 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_50 = '\x01';
    FUN_00e8b9a0();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_210 != '\0') && (local_218 != 0)) {
      FUN_00d50b20();
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x38);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    (**(code **)(*plVar8 + 0x10))();
    FUN_00d50b00();
    local_138 = DAT_028032c0;
    local_208 = 0;
    local_200 = '\0';
    local_130 = 0;
    if (DAT_028032c0 != 0) {
      FUN_00d50b00();
    }
    local_130 = '\x01';
    plVar6 = &local_138;
    FUN_00cbadd0(plVar6,&local_208);
    pVar5 = (pthread_key_t)plVar6;
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_200 != '\0') && (local_208 != 0)) {
      FUN_00d50b20();
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x38);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_120 = 0;
    (**(code **)(*plVar8 + 0x10))();
    FUN_00d50b00();
    local_118 = DAT_028032d0;
    local_120 = '\x01';
    local_1f8 = 0;
    local_1f0 = '\0';
    local_110 = 0;
    local_128 = plVar8;
    if (DAT_028032d0 != 0) {
      FUN_00d50b00();
    }
    local_110 = '\x01';
    plVar6 = &local_118;
    FUN_00cbadd0(plVar6,&local_1f8);
    pVar5 = (pthread_key_t)plVar6;
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1f0 != '\0') && (local_1f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
      (**(code **)(*local_128 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x38);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_100 = 0;
    (**(code **)(*plVar8 + 0x10))();
    FUN_00d50b00();
    local_f8 = DAT_028032e0;
    local_100 = '\x01';
    local_1e8 = 0;
    local_1e0 = '\0';
    local_f0 = 0;
    local_108 = plVar8;
    if (DAT_028032e0 != 0) {
      FUN_00d50b00();
    }
    local_f0 = '\x01';
    plVar6 = &local_f8;
    FUN_00cbadd0(plVar6,&local_1e8);
    pVar5 = (pthread_key_t)plVar6;
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1e0 != '\0') && (local_1e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
      (**(code **)(*local_108 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x38);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_e0 = 0;
    (**(code **)(*plVar8 + 0x10))();
    FUN_00d50b00();
    local_d8 = DAT_028032f0;
    local_e0 = '\x01';
    local_1d8 = 0;
    local_1d0 = '\0';
    local_d0 = 0;
    local_e8 = plVar8;
    if (DAT_028032f0 != 0) {
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    plVar6 = &local_d8;
    FUN_00cbadd0(plVar6,&local_1d8);
    pVar5 = (pthread_key_t)plVar6;
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1d0 != '\0') && (local_1d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
      (**(code **)(*local_e8 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x38);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_c0 = 0;
    (**(code **)(*plVar8 + 0x10))();
    FUN_00d50b00();
    local_b8 = DAT_02803300;
    local_c0 = '\x01';
    local_1c8 = 0;
    local_1c0 = '\0';
    local_b0 = 0;
    local_c8 = plVar8;
    if (DAT_02803300 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    plVar6 = &local_b8;
    FUN_00cbadd0(plVar6,&local_1c8);
    pVar5 = (pthread_key_t)plVar6;
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1c0 != '\0') && (local_1c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
      (**(code **)(*local_c8 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x38);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_a0 = 0;
    (**(code **)(*plVar8 + 0x10))();
    FUN_00d50b00();
    local_98 = DAT_02803310;
    local_a0 = '\x01';
    local_1b8 = 0;
    local_1b0 = '\0';
    local_90 = 0;
    local_a8 = plVar8;
    if (DAT_02803310 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    plVar6 = &local_98;
    FUN_00cbadd0(plVar6,&local_1b8);
    pVar5 = (pthread_key_t)plVar6;
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1b0 != '\0') && (local_1b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      (**(code **)(*local_a8 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x38);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_80 = 0;
    (**(code **)(*plVar8 + 0x10))();
    FUN_00d50b00();
    local_78 = DAT_02803320;
    local_80 = '\x01';
    local_1a8 = 0;
    local_1a0 = '\0';
    local_70 = 0;
    local_88 = plVar8;
    if (DAT_02803320 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    FUN_00cbadd0(&local_78,&local_1a8);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1a0 != '\0') && (local_1a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      (**(code **)(*local_88 + 0x10))();
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


