// ===== MUAudioIOSlot — Annotated small functions =====
// 9 readable functions

// ==================================================
// @00752a00 (1853 bytes) — calculation

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  pthread_key_t pVar9;
  longlong *arg1;
  undefined8 *this;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_000830c0();
  (**(code **)(*plVar5 + 0x18))();
  lVar1 = *arg1;
  lVar2 = plVar5[0xf];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    plVar5[0xf] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (*param_2 != 0) {
    FUN_01552cd0();
    (**(code **)(*(longlong *)*param_2 + 0x370))();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    cVar4 = (**(code **)(*local_40 + 0x50))();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      (**(code **)(*plVar5 + 0x470))();
      goto LAB_00752bc7;
    }
  }
  (**(code **)(*plVar5 + 0x470))();
LAB_00752bc7:
  lVar1 = *param_3;
  lVar2 = plVar5[0x18];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    plVar5[0x18] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*plVar5 + 0x628))();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb450();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0044c720();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_00753620();
  *(undefined1 *)(plVar5 + 0x2d) = 0;
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00039550();
  (**(code **)(*plVar7 + 0x18))();
  if (*param_4 != 0) {
    FUN_00cafd20();
  }
  (**(code **)(*plVar5 + 0x490))();
  if (*param_4 != 0) {
    FUN_00cb1fa0();
    (**(code **)(*plVar7 + 0x3c8))();
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar9 = 0x25f7058;
  *puVar8 = &DAT_025f7058;
  (*DAT_025f7070)();
  puVar3 = (undefined8 *)plVar5[0x26];
  if (puVar3 == puVar8) {
    FUN_00d50b20();
  }
  else {
    plVar5[0x26] = (longlong)puVar8;
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*plVar5 + 0x628))();
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505900();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_001060d0();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a4cb0();
  FUN_006e32b0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00108e20();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  *this = plVar5;
  *(undefined1 *)(this + 1) = 1;
  FUN_00d50b20();
  return this;
}




// ==================================================
// @00753e50 (1363 bytes) — calculation

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *this;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  (**(code **)(*this + 0x498))();
  plVar2 = local_38;
  if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b00();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_38 + 0x450))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    plVar1 = this + 9;
    local_f0 = 0;
    (**(code **)(this[9] + 0x10))();
    FUN_00d50b00();
    local_e8 = DAT_0280ced8;
    local_f0 = '\x01';
    local_158 = 0;
    local_150 = '\0';
    local_e0 = 0;
    local_f8 = plVar1;
    if (DAT_0280ced8 != 0) {
      FUN_00d50b00();
    }
    local_e0 = '\x01';
    FUN_00cbadd0(&local_e8,&local_158);
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
      (**(code **)(*local_f8 + 0x10))();
      FUN_00d50b20();
    }
    local_d0 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_c8 = DAT_0280cee8;
    local_d0 = '\x01';
    local_148 = 0;
    local_140 = '\0';
    local_c0 = 0;
    local_d8 = plVar1;
    if (DAT_0280cee8 != 0) {
      FUN_00d50b00();
    }
    local_c0 = '\x01';
    FUN_00cbadd0(&local_c8,&local_148);
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
      (**(code **)(*local_d8 + 0x10))();
      FUN_00d50b20();
    }
    local_b0 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_a8 = DAT_0280cef8;
    local_b0 = '\x01';
    local_138 = 0;
    local_130 = '\0';
    local_a0 = 0;
    local_b8 = plVar1;
    if (DAT_0280cef8 != 0) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    FUN_00cbadd0(&local_a8,&local_138);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      (**(code **)(*local_b8 + 0x10))();
      FUN_00d50b20();
    }
    local_90 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_88 = DAT_0280cf08;
    local_90 = '\x01';
    local_128 = 0;
    local_120 = '\0';
    local_80 = 0;
    local_98 = plVar1;
    if (DAT_0280cf08 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    FUN_00cbadd0(&local_88,&local_128);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      (**(code **)(*local_98 + 0x10))();
      FUN_00d50b20();
    }
    local_70 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_68 = DAT_0280cf18;
    local_70 = '\x01';
    local_118 = 0;
    local_110 = '\0';
    local_60 = 0;
    local_78 = plVar1;
    if (DAT_0280cf18 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    FUN_00cbadd0(&local_68,&local_118);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      (**(code **)(*local_78 + 0x10))();
      FUN_00d50b20();
    }
  }
  local_50 = 0;
  (**(code **)(this[9] + 0x10))();
  FUN_00d50b00();
  local_48 = DAT_0280cf28;
  local_50 = '\x01';
  local_108 = 0;
  local_100 = '\0';
  local_40 = 0;
  local_58 = this + 9;
  if (DAT_0280cf28 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\x01';
  FUN_00cbadd0(&local_48,&local_108);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    (**(code **)(*local_58 + 0x10))();
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00756200 (1352 bytes) — calculation

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *this;
  longlong lVar5;
  bool bVar6;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (this[0x21] != 0) {
    this[0x21] = 0;
    FUN_00d50b20();
  }
  (**(code **)(*this + 0x610))();
  if (*(int *)(local_40 + 0xc) == 0) {
    bVar6 = false;
  }
  else {
    (**(code **)(*this + 0x628))();
    bVar6 = local_50 != 0;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar6) {
    return;
  }
  cVar1 = FUN_00751ba0();
  if (cVar1 == '\0') {
    FUN_00757c60();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    lVar5 = local_40;
    if (local_40 == 0) {
      lVar5 = 0;
      bVar6 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar6 = true;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar6 = true;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*this + 0x628))();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a11a0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01713a10();
    lVar5 = local_40;
    if (local_40 == 0) {
      lVar5 = 0;
      bVar6 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar6 = true;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar6 = true;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_00e8b990();
  if (lVar3 == 0) goto LAB_0075671d;
  (**(code **)(*this + 0x498))();
  lVar3 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 == 0) goto LAB_0075671d;
  FUN_00d50b00();
  local_b0 = DAT_027296c0;
  if (DAT_027296c0 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_70 = FUN_00e8b990();
  local_68 = 0;
  if (local_70 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  FUN_000823a0();
  FUN_00e86210();
  local_a0 = DAT_026f6eb8;
  if (DAT_026f6eb8 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  FUN_00c841b0();
  local_60 = local_50;
  local_58 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_58 = '\x01';
  local_88 = '\0';
  local_90 = lVar5;
  FUN_000bfbc0(&local_70,&local_b0,0xa0,&local_60);
  lVar3 = this[0x21];
  lVar4 = lVar3;
  if (lVar3 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar4 = 0;
        goto LAB_00756627;
      }
      FUN_00d50b00();
      lVar3 = this[0x21];
      this[0x21] = local_40;
      lVar4 = local_40;
    }
    else {
      local_38 = '\0';
      lVar4 = local_40;
LAB_00756627:
      this[0x21] = lVar4;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
      lVar4 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (this != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_0075671d:
  if ((bVar6) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00757320 (1249 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong *this;
  longlong *local_b0;
  char local_a8;
  longlong *local_30;
  char local_28;
  
  plVar4 = (longlong *)FUN_002dd0f0();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = (longlong *)this[0x13];
  if (plVar1 == plVar4) {
    FUN_00d50b20();
  }
  else {
    this[0x13] = (longlong)plVar4;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00aea5e0(0);
  FUN_01530a20();
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_0038cc50();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = (longlong *)this[0x12];
  if (plVar1 == plVar4) {
    FUN_00d50b20();
  }
  else {
    this[0x12] = (longlong)plVar4;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00757c60();
  if (local_28 == '\0') {
    if (local_30 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  FUN_012d1940();
  if (local_30 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00757de0();
  if ((local_28 == '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_012d8bb0();
  if (local_30 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  lVar2 = this[0x13];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_012dddb0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*this + 0x498))();
  FUN_00cafd20();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this + 0x498))();
  lVar2 = this[0x13];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_30 + 0x3a0))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this + 0x498))();
  (**(code **)(*local_30 + 0x3c8))();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  (**(code **)(*local_b0 + 0x7b0))();
  if (local_28 == '\0') {
    if (local_30 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = this[0x12];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_01257c40();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*local_30 + 0x390))();
  if (cVar3 == '\0') {
    lVar2 = this[0x12];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01257980();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*(longlong *)this[0x12] + 0x368))();
    lVar2 = this[0x12];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01257a80();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (this[0xe] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    FUN_00b160d0();
    if (local_28 == '\0') {
      if (local_30 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_00757ea0();
    if (local_30 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @00757ea0 (1102 bytes) — math_loop

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *arg1;
  longlong *this;
  longlong *plVar5;
  longlong local_78;
  char local_70;
  longlong *local_58;
  char local_50;
  int local_40;
  
  if (*arg1 == 0) {
    FUN_00751820();
    return;
  }
  plVar1 = (longlong *)this[0xe];
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_003235a0();
  plVar5 = DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar5 = DAT_02802688;
    FUN_00d50b20();
    if (cVar3 != '\0') {
      plVar5 = plVar1;
    }
  }
  if (plVar5 != (longlong *)0x0) {
    return;
  }
  (**(code **)(*this + 0x610))();
  if (local_50 == '\0') {
    if (plVar1 == (longlong *)0x0) goto LAB_0075807c;
    FUN_00d50b00();
LAB_00757fa1:
    local_58 = (longlong *)0x0;
    local_40 = -1;
    do {
      lVar4 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)((longlong)plVar1 + 0xc) <= local_40) goto LAB_00758099;
      plVar5 = *(longlong **)(plVar1[2] + 8 + lVar4 * 8);
      FUN_006f47d0();
      lVar4 = this[0xe];
      if (lVar4 != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      local_58 = plVar5;
    } while (local_78 != lVar4);
    if (plVar5 == (longlong *)0x0) {
LAB_00758099:
      bVar2 = false;
      plVar5 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
      bVar2 = true;
    }
    local_50 = '\0';
    FUN_000e3600();
    FUN_00d50b20();
  }
  else {
    if (plVar1 != (longlong *)0x0) goto LAB_00757fa1;
LAB_0075807c:
    plVar5 = (longlong *)0x0;
    bVar2 = false;
    local_58 = plVar1;
  }
  plVar1 = local_58;
  (**(code **)(*this + 0x610))();
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) goto LAB_0075827b;
    FUN_00d50b00();
  }
  else if (local_58 == (longlong *)0x0) goto LAB_0075827b;
  local_50 = '\0';
  local_58 = (longlong *)0x0;
  local_40 = -1;
  while( true ) {
    lVar4 = (longlong)local_40;
    local_40 = local_40 + 1;
    if (*(int *)((longlong)plVar1 + 0xc) <= local_40) break;
    local_58 = *(longlong **)(plVar1[2] + 8 + lVar4 * 8);
    FUN_00d50b00();
    FUN_003193e0();
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    FUN_007105f0();
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (this != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_000e3600();
  FUN_00d50b20();
LAB_0075827b:
  if (plVar5 != (longlong *)0x0) {
    FUN_006f47d0();
    if (local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00751820();
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar2) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @007538d0 (839 bytes) — calculation

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  longlong *arg1;
  longlong *this;
  longlong *plVar5;
  longlong local_58;
  char local_50;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*this + 0x498))();
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00753905;
    }
    bVar2 = true;
    if (*arg1 == 0) goto LAB_00753bfb;
  }
  else {
LAB_00753905:
    if ((longlong *)*arg1 == local_40) goto LAB_00753bfb;
    bVar2 = true;
    if (local_40 != (longlong *)0x0) {
      FUN_00753e50();
      cVar3 = FUN_00751ba0();
      if (cVar3 == '\0') {
        FUN_00cafd20();
        (**(code **)(*this + 0x628))();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a1110();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        (**(code **)(*local_40 + 0x3a8))();
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*local_40 + 0x3c8))();
      }
      FUN_00d50b20();
      bVar2 = false;
      plVar5 = (longlong *)0x0;
    }
  }
  FUN_01d37120();
  if (*arg1 != 0) {
    cVar3 = FUN_00751ba0();
    if (cVar3 == '\0') {
      FUN_00cafd20();
      plVar1 = (longlong *)*arg1;
      (**(code **)(*this + 0x628))();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar1 + 0x3a0))();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*arg1 + 0x3c8))();
    }
    FUN_007549f0();
    FUN_00cb1f10();
    FUN_01b3fd00();
    FUN_00db2780();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00756200();
  local_40 = plVar5;
  if (!bVar2) {
    return;
  }
LAB_00753bfb:
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00756ee0 (716 bytes) — calculation

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *this;
  longlong local_40;
  char local_38;
  
  if (this[0xe] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar5 = 0x25d84d8;
    *puVar2 = &DAT_025d84d8;
    puVar2[7] = 0;
    puVar2[8] = 0;
    (*DAT_025d84f0)();
    pvVar3 = _pthread_getspecific(pVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      plVar1 = (longlong *)this[0xe];
    }
    else {
      plVar1 = (longlong *)this[0xe];
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x418))();
    FUN_013200d0();
    FUN_00d50b20();
    pvVar3 = _pthread_getspecific(pVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      plVar1 = (longlong *)this[0xe];
    }
    else {
      plVar1 = (longlong *)this[0xe];
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x408))();
    FUN_01320140();
    FUN_00d50b20();
    (**(code **)(*this + 0x628))();
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a7b10();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this + 0x628))();
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (longlong *)this[0xe];
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3f8))();
    FUN_004a7cc0();
    FUN_00d50b20();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this + 0x628))();
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (longlong *)this[0xe];
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3b0))();
    FUN_004a7ce0();
    FUN_00d50b20();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00759cf0 (683 bytes) — calculation

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong arg1;
  undefined8 *this;
  longlong local_70;
  char local_68;
  longlong *local_40;
  char local_38;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_000161a0();
  *plVar3 = (longlong)&DAT_0250ac78;
  plVar3[0xe] = (longlong)&DAT_0250b2f8;
  plVar3[0xf] = (longlong)&DAT_0250b330;
  plVar3[0x10] = (longlong)&DAT_0250b3a8;
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  plVar3[0x13] = 0;
  plVar3[0x14] = 0;
  *(undefined8 *)((longlong)plVar3 + 0xa4) = 0;
  *(undefined8 *)((longlong)plVar3 + 0xac) = 0;
  plVar3[0x17] = 0;
  plVar3[0x18] = 0;
  plVar3[0x19] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x1f] = 0;
  (*DAT_0250ac90)();
  FUN_00758620();
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    FUN_0062abf0();
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_00453a40();
    if (local_40 == (longlong *)0x0) {
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (arg1 != 0) {
      FUN_00d50b00();
    }
    FUN_003193e0();
    if (local_40 == (longlong *)0x0) {
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    if (arg1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_007105f0();
  FUN_01e53c20();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 == (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x4c0))();
  }
  *this = plVar3;
  *(undefined1 *)(this + 1) = 1;
  if ((bVar1) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00756aa0 (679 bytes) — calculation

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *this;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (this[0xe] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    (**(code **)(*this + 0x628))();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a7c90();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      plVar1 = (longlong *)this[0xe];
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_013201a0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar4 = FUN_01320130();
      (**(code **)(*plVar1 + 0x428))(uVar5,uVar4);
      FUN_00d50b20();
      plVar1 = (longlong *)this[0xe];
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*this + 0x628))();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a7cd0();
      lVar3 = *plVar1;
      (**(code **)(lVar3 + 0x400))();
      param_1 = (pthread_key_t)lVar3;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    plVar1 = (longlong *)this[0xe];
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*this + 0x628))();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a7cf0();
    (**(code **)(*plVar1 + 0x3a8))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



