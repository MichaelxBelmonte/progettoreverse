// ===== MUSignatureEditorRulerView — Annotated small functions =====
// 8 readable functions

// ==================================================
// @01c91010 (2024 bytes) — calculation

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *this;
  bool bVar12;
  undefined1 local_140 [8];
  undefined1 local_138 [8];
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
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  undefined8 *local_a8;
  char local_a0;
  undefined8 *local_98;
  uint local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined4 local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  plVar4 = DAT_028b7260;
  plVar11 = (longlong *)*param_2;
  if (DAT_028b7260 != plVar11) {
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    DAT_028b7260 = plVar11;
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    plVar11 = (longlong *)*param_2;
  }
  if ((plVar11 != (longlong *)0x0) && (DAT_028b7268 == '\0')) {
    DAT_028b7268 = '\x01';
    FUN_00e8cb90();
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_025795a8;
  (*DAT_025795c0)();
  if (DAT_028b7230 == puVar8) {
    bVar2 = false;
    bVar1 = false;
  }
  else {
    bVar2 = true;
    bVar1 = true;
    bVar12 = DAT_028b7230 != (undefined8 *)0x0;
    DAT_028b7230 = puVar8;
    if (bVar12) {
      FUN_00d50b20();
    }
  }
  if (DAT_028b7238 == '\0') {
    DAT_028b7238 = '\x01';
    FUN_00e8cb90();
    bVar1 = bVar2;
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  lVar9 = FUN_00003040();
  uVar10 = FUN_00003050();
  local_78 = FUN_00003060();
  local_90 = 3;
  local_98 = (undefined8 *)&DAT_02670858;
  local_88 = lVar9;
  local_80 = uVar10;
  FUN_00d94d80(&DAT_02670858,&local_98);
  FUN_00dec0e0();
  (**(code **)(*local_128 + 0x398))();
  FUN_00dec0e0();
  (**(code **)(*local_108 + 0x3a0))();
  FUN_00dec0e0();
  (**(code **)(*local_e8 + 0x3a8))();
  uVar6 = FUN_00da6b30();
  FUN_002bd7b0(local_138,local_140,4);
  local_98 = (undefined8 *)&DAT_02670890;
  local_58 = uVar6;
  FUN_00d94d80();
  local_98 = (undefined8 *)&DAT_025df260;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_98 = (undefined8 *)&DAT_0253d630;
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_98 = &DAT_024c5048;
  if (((char)local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*param_2 + 0x9b0))();
  uVar6 = *(undefined4 *)((longlong)local_98 + 0xc);
  if ((char)local_90 != '\0') {
    FUN_00d50b20();
  }
  (**(code **)(*DAT_028b7260 + 0x9b0))();
  local_50 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  local_d0 = '\0';
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = '\0';
  FUN_01293ed0(&local_c8,&local_d8);
  puVar8 = local_98;
  if ((char)local_90 == '\0') {
    if (local_98 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if (((char)local_90 != '\0') && (local_98 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_90 = local_90 & 0xffffff00;
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (puVar8 == (undefined8 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)((longlong)puVar8 + 0xc);
  }
  local_90 = 2;
  local_98 = (undefined8 *)&DAT_024c3df0;
  local_88 = CONCAT44(local_88._4_4_,uVar7);
  local_8c = uVar6;
  FUN_00d94d80(&DAT_024c3df0,&local_98);
  FUN_00da6ff0();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_00da7150();
  FUN_01ca6970();
  puVar5 = local_98;
  if (((char)local_90 == '\0') && (local_98 != (undefined8 *)0x0)) {
    FUN_00d50b00();
    if (((char)local_90 != '\0') && (local_98 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01ca5d90();
  local_a8 = DAT_028b7230;
  local_a0 = 0;
  if (DAT_028b7230 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  lVar9 = DAT_026fceb8;
  local_a0 = '\x01';
  if (DAT_026fceb8 != 0) {
    FUN_00d50b00();
  }
  local_b8 = lVar9;
  local_b0 = '\x01';
  FUN_01ca93d0();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d8c7d0();
  if (DAT_028b7250 != 0) {
    FUN_00d50130();
  }
  if (DAT_028b7250 != 0) {
    DAT_028b7250 = 0;
    FUN_00d50b20();
  }
  if (DAT_028b7260 != (longlong *)0x0) {
    DAT_028b7260 = (longlong *)0x0;
    FUN_00d50b20();
  }
  if (DAT_028b7240 != 0) {
    DAT_028b7240 = 0;
    FUN_00d50b20();
  }
  *(undefined1 *)(this + 1) = 0;
  puVar3 = DAT_028b7230;
  if (DAT_028b7230 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  *this = puVar3;
  *(undefined1 *)(this + 1) = 1;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar8 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @01c90380 (1528 bytes) — math_loop

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined8 uVar14;
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
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  char local_60;
  undefined8 *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  uVar14 = (**(code **)(*DAT_028b7260 + 0x9a8))(param_1,0);
  puVar12 = local_68;
  if ((((local_60 == '\0') && (local_68 != (undefined8 *)0x0)) &&
      (uVar14 = FUN_00d50b00(), local_60 != '\0')) && (local_68 != (undefined8 *)0x0)) {
    uVar14 = FUN_00d50b20();
  }
  local_70 = puVar12;
  (**(code **)(*DAT_028b7260 + 0x9b0))(uVar14,0);
  local_a8 = local_40;
  local_a0 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_a0 = '\x01';
  local_d8 = 0;
  local_d0 = '\0';
  FUN_01293ed0(&local_d8);
  local_78 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (undefined8 *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  if (local_78 != (undefined8 *)0x0) {
    local_60 = '\0';
    local_68 = (undefined8 *)0x0;
    local_58 = local_78;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if ((int)local_50._4_4_ < 1) {
          iVar11 = -local_50._4_4_;
        }
        else {
          iVar11 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar11);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar11 = 0;
        }
        local_50 = CONCAT44(iVar11,(int)local_50);
      }
      lVar5 = (longlong)(int)local_50;
      iVar11 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar11);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar11) break;
      lVar10 = local_58[2];
      local_68 = *(undefined8 **)(lVar10 + 8 + lVar5 * 8);
      FUN_0141ae30();
      local_98 = local_b8;
      pVar8 = (pthread_key_t)lVar10;
      local_90 = 0;
      if (local_b0 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = '\0';
      }
      local_90 = '\x01';
      FUN_0141af60();
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      plVar6 = (longlong *)FUN_00e8fc40();
      FUN_000fdf90();
      (**(code **)(*plVar6 + 0x18))();
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01320d00();
      plVar2 = local_40;
      puVar12 = local_70;
      local_80 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_80 = '\x01';
      local_88 = plVar2;
      FUN_013fb180();
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_c8 = plVar1;
      local_c0 = '\0';
      FUN_013fb350();
      if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      local_40 = plVar6;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar6 + 0x398))();
      FUN_00d50b20();
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00115190();
  }
  if (puVar4 == (undefined8 *)0x0) {
    while( true ) {
      FUN_00d403d0();
      FUN_00d3fc60();
      if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (MACH_HEADER.filetype == 0) break;
      FUN_00da68a0(_DAT_02391038);
    }
  }
  else {
    while( true ) {
      FUN_00d403d0();
      FUN_00d3fc60();
      if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      local_60 = '\0';
      local_68 = (undefined8 *)0x0;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_58 = puVar4;
      while( true ) {
        lVar5 = (longlong)(int)local_50;
        iVar11 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar11);
        if (*(int *)((longlong)local_58 + 0xc) <= iVar11) break;
        local_68 = *(undefined8 **)(local_58[2] + 8 + lVar5 * 8);
        cVar3 = FUN_00e34230();
        if (((cVar3 == '\0') && (cVar3 = FUN_00e34240(), cVar3 == '\0')) &&
           (cVar3 = FUN_00e34250(), cVar3 == '\0')) {
          bVar13 = local_50 < 0;
          uVar9 = local_50._4_4_;
        }
        else {
          lVar5 = local_50;
          uVar9 = ~local_50._4_4_;
          local_50 = CONCAT44(uVar9,(int)local_50);
          bVar13 = -1 < lVar5;
        }
        if (uVar9 != 0) {
          if (uVar9 == 0 || bVar13) {
            iVar11 = -uVar9;
          }
          else {
            local_50._4_4_ = (uint)((ulonglong)local_50 >> 0x20);
            local_50 = CONCAT44(local_50._4_4_,(int)local_50 - uVar9);
            FUN_00d23690(uVar9,uVar9);
            local_48 = local_48 + local_50._4_4_;
            iVar11 = 0;
          }
          local_50 = CONCAT44(iVar11,(int)local_50);
        }
      }
      FUN_0079b950();
      if (*(int *)((longlong)puVar4 + 0xc) == 0) break;
      FUN_00da68a0(_DAT_02391038);
    }
  }
  FUN_00d50b20();
  if (local_78 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar12 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01c8f0f0 (1209 bytes) — math_loop

{
  longlong *plVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  longlong local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  lVar5 = local_78;
  if ((((local_70 == '\0') && (local_78 != 0)) && (FUN_00d50b00(), local_70 != '\0')) &&
     (local_78 != 0)) {
    FUN_00d50b20();
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00274ea0();
  *plVar4 = (longlong)&DAT_02630138;
  plVar4[2] = (longlong)&DAT_02630600;
  plVar4[7] = 0;
  (*DAT_02630150)();
  local_a8 = DAT_028b7260;
  local_a0 = 0;
  if (DAT_028b7260 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  (**(code **)(*plVar4 + 0x410))();
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*DAT_028b7260 + 0x9b0))();
  local_88 = local_50;
  local_80 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_80 = '\x01';
  FUN_00243390();
  lVar2 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_38 = lVar5;
    local_70 = '\0';
    local_78 = 0;
    local_68 = lVar2;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_40 = plVar4;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar8 = -local_60._4_4_;
        }
        else {
          iVar8 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar8);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar8 = 0;
        }
        local_60 = CONCAT44(iVar8,(int)local_60);
      }
      lVar5 = (longlong)(int)local_60;
      iVar8 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar8);
      if (*(int *)(local_68 + 0xc) <= iVar8) break;
      lVar7 = *(longlong *)(local_68 + 0x10);
      local_78 = *(longlong *)(lVar7 + 8 + lVar5 * 8);
      pvVar3 = _pthread_getspecific((pthread_key_t)lVar7);
      pVar6 = (pthread_key_t)lVar7;
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01274b60();
      lVar5 = local_50;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_01274b60();
        lVar5 = local_b8;
        if (local_b0 == '\0') {
          if (local_b8 != 0) {
            uVar9 = FUN_00d50b00();
          }
        }
        else {
          local_b0 = '\0';
        }
        local_50 = lVar5;
        local_48 = '\0';
        FUN_00d233f0(uVar9,local_58 + (int)local_60);
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_001159b0();
    lVar5 = local_38;
    plVar4 = local_40;
  }
  plVar1 = DAT_028b7260;
  local_90 = 0;
  if (DAT_028b7260 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_98 = plVar1;
  local_90 = '\x01';
  local_d8 = lVar2;
  local_d0 = '\0';
  local_c8 = 0;
  local_c0 = '\0';
  FUN_01a26560(DAT_0241eeb0,&local_d8,&local_c8,0);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar4 + 0x418))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01c8fe40 (887 bytes) — math_loop

{
  void *pvVar1;
  undefined8 uVar2;
  longlong *plVar3;
  pthread_key_t pVar4;
  pthread_key_t pVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong local_40;
  char local_38;
  
  pvVar1 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  if (local_40 == 0) {
    uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    lVar8 = 0;
  }
  else {
    lVar8 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
    }
  }
  uVar2 = uVar6;
  pvVar1 = _pthread_getspecific((pthread_key_t)uVar6);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  if (local_40 == 0) {
    pVar4 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    lVar10 = 0;
  }
  else {
    lVar10 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      pVar4 = 0;
    }
    else {
      pVar4 = 0;
    }
  }
  pVar5 = pVar4;
  pvVar1 = _pthread_getspecific(pVar4);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar11 = (double)FUN_012ebfe0();
  pvVar1 = _pthread_getspecific(pVar5);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar12 = (double)FUN_012ebd30();
  uVar2 = FUN_00aea410(dVar12,2);
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_0038cc50();
  (**(code **)(*plVar3 + 0x18))();
  FUN_012dc370();
  FUN_012d1940();
  (**(code **)(*plVar3 + 0x398))(DAT_02410f78);
  FUN_00b335a0();
  (**(code **)(*plVar3 + 0x3a0))();
  (**(code **)(*plVar3 + 0x418))();
  (**(code **)(*plVar3 + 0x368))();
  FUN_0141c4c0(0);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar3 + 0x690))();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00da6e20();
  dVar13 = _DAT_0241eeb8;
  if (dVar12 <= _DAT_0241eeb8) {
    dVar13 = dVar12;
  }
  iVar9 = (int)((dVar13 - dVar11) * DAT_02410f78);
  if (0 < iVar9) {
    iVar7 = 0;
    do {
      (**(code **)(*plVar3 + 0x400))(0x400,uVar2);
      iVar7 = iVar7 + 0x400;
    } while (iVar7 < iVar9);
  }
  FUN_00da6fa0();
  (**(code **)(*plVar3 + 0x370))();
  FUN_00d50b20();
  if ((char)pVar4 == '\0' && lVar10 != 0) {
    FUN_00d50b20();
  }
  if ((char)uVar6 == '\0' && lVar8 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01c8f960 (834 bytes) — math_loop

{
  void *pvVar1;
  undefined8 uVar2;
  longlong *plVar3;
  pthread_key_t pVar4;
  pthread_key_t pVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong local_40;
  char local_38;
  
  pvVar1 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  if (local_40 == 0) {
    uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    lVar8 = 0;
  }
  else {
    lVar8 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
    }
  }
  uVar2 = uVar6;
  pvVar1 = _pthread_getspecific((pthread_key_t)uVar6);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  if (local_40 == 0) {
    pVar4 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    lVar10 = 0;
  }
  else {
    lVar10 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      pVar4 = 0;
    }
    else {
      pVar4 = 0;
    }
  }
  pVar5 = pVar4;
  pvVar1 = _pthread_getspecific(pVar4);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar11 = (double)FUN_012ebfe0();
  pvVar1 = _pthread_getspecific(pVar5);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar12 = (double)FUN_012ebd30();
  uVar2 = FUN_00aea410(dVar12,2);
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_0038cc50();
  (**(code **)(*plVar3 + 0x18))();
  FUN_012dc370();
  FUN_012d1940();
  (**(code **)(*plVar3 + 0x398))(DAT_02410f78);
  FUN_00b335a0();
  (**(code **)(*plVar3 + 0x3a0))();
  (**(code **)(*plVar3 + 0x418))();
  (**(code **)(*plVar3 + 0x368))();
  FUN_0141c350(0);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar3 + 0x690))();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  dVar13 = _DAT_0241eeb8;
  if (dVar12 <= _DAT_0241eeb8) {
    dVar13 = dVar12;
  }
  iVar9 = (int)((dVar13 - dVar11) * DAT_02410f78);
  if (0 < iVar9) {
    iVar7 = 0;
    do {
      (**(code **)(*plVar3 + 0x400))(0x400,uVar2);
      iVar7 = iVar7 + 0x400;
    } while (iVar7 < iVar9);
  }
  (**(code **)(*plVar3 + 0x370))();
  FUN_00d50b20();
  if ((char)pVar4 == '\0' && lVar10 != 0) {
    FUN_00d50b20();
  }
  if ((char)uVar6 == '\0' && lVar8 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01c92050 (619 bytes) — math_loop

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *arg1;
  longlong this;
  int iVar4;
  longlong local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  FUN_00d243f0();
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          local_38 = '\0';
          FUN_00d21140();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  lVar1 = *param_2;
  lVar2 = *(longlong *)(this + 0x28);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(this + 0x28) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @01c93360 (592 bytes) — calculation

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong this;
  longlong **pplVar5;
  longlong *local_48;
  char local_40;
  char local_31;
  
  plVar3 = (longlong *)*param_2;
  FUN_001152a0();
  if (plVar3 == (longlong *)0x0) {
LAB_01c933a5:
    param_2 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01c933a5;
  }
  local_31 = (char)param_2[1];
  if ((local_31 == '\0') || (*param_2 == 0)) {
    if (*param_2 == 0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  lVar1 = DAT_026e1370;
  if (DAT_026e1370 != 0) {
    FUN_00d50b00();
  }
  pplVar5 = &local_48;
  FUN_000175c0();
  plVar3 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) goto LAB_01c93593;
  plVar3 = (longlong *)FUN_00dd6dc0();
  local_48 = plVar3;
  FUN_001156b0();
  if (plVar3 == (longlong *)0x0) {
LAB_01c93471:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01c93471;
  }
  plVar3 = *pplVar5;
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  if (*(char *)(this + 0x28) == '\0') {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd9a0();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011ef3f0();
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01c93593:
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01c8e070 (568 bytes) — calculation

{
  int iVar1;
  undefined8 *this;
  
  FUN_000a32b0();
  *this = &DAT_0266f0a0;
  this[2] = &DAT_0266f9c8;
  FUN_01c8e2d0();
  *(undefined1 *)(this + 0x28) = 0;
  if (DAT_027ecfd0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027ecf20 = FUN_0006d940();
      _DAT_027ecf08 = "MUSignatureEditorRulerView";
      _DAT_027ecf10 = 0x148;
      _DAT_027ecf18 = FUN_01c8e010;
      _DAT_027ecf28 = 0;
      uRam00000000027ecf30 = 0;
      _DAT_027ecf38 = 0;
      _DAT_027ecfb0 = 0;
      uRam00000000027ecfb8 = 0;
      _DAT_027ecfc0 = 0;
      DAT_027ecfc2 = 1;
      _DAT_027ecf40 = 0;
      uRam00000000027ecf48 = 0;
      _DAT_027ecf50 = 0;
      uRam00000000027ecf58 = 0;
      _DAT_027ecf60 = 0;
      uRam00000000027ecf68 = 0;
      _DAT_027ecf70 = 0;
      uRam00000000027ecf78 = 0;
      _DAT_027ecf80 = 0;
      uRam00000000027ecf88 = 0;
      _DAT_027ecf90 = 0;
      uRam00000000027ecf98 = 0;
      _DAT_027ecfa0 = 0;
      uRam00000000027ecfa8 = 0;
      DAT_027ecfcb = 0;
      _DAT_027ecfc3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027ecfc3 == '\0') {
    FUN_01c8e5f0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x141) = 0;
  if (DAT_027ecfd0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027ecf20 = FUN_0006d940();
      _DAT_027ecf08 = "MUSignatureEditorRulerView";
      _DAT_027ecf10 = 0x148;
      _DAT_027ecf18 = FUN_01c8e010;
      _DAT_027ecf28 = 0;
      uRam00000000027ecf30 = 0;
      _DAT_027ecf38 = 0;
      _DAT_027ecfb0 = 0;
      uRam00000000027ecfb8 = 0;
      _DAT_027ecfc0 = 0;
      DAT_027ecfc2 = 1;
      _DAT_027ecf40 = 0;
      uRam00000000027ecf48 = 0;
      _DAT_027ecf50 = 0;
      uRam00000000027ecf58 = 0;
      _DAT_027ecf60 = 0;
      uRam00000000027ecf68 = 0;
      _DAT_027ecf70 = 0;
      uRam00000000027ecf78 = 0;
      _DAT_027ecf80 = 0;
      uRam00000000027ecf88 = 0;
      _DAT_027ecf90 = 0;
      uRam00000000027ecf98 = 0;
      _DAT_027ecfa0 = 0;
      uRam00000000027ecfa8 = 0;
      DAT_027ecfcb = 0;
      _DAT_027ecfc3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027ecfc3 == '\0') {
    FUN_01c8e780();
    FUN_00e87980();
  }
  return;
}



