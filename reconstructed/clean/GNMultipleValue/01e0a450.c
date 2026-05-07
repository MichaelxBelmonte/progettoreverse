// Function: FUN_01e0a450
// Address: 01e0a450
// Size: 2569 bytes
// Class: GNMultipleValue

void FUN_01e0a450(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int64_t *plVar7;
  char unaff_SIL;
  int64_t *this_ptr;
  int64_t *plVar8;
  bool bVar9;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  float fVar11;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  float local_c4;
  int64_t local_c0;
  char local_b8;
  int64_t *local_60;
  int64_t *local_48;
  char local_40;
  char local_31;
  
  if (*(char *)((int64_t)this_ptr + 0x20c) != '\0') {
    return;
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_178 = g_027f32f0;
  if (g_027f32f0 != 0) {
    FUN_00d50b00();
  }
  local_170 = '\x01';
  local_168 = 0;
  local_160 = '\0';
  FUN_00d41040(&local_168,&local_178);
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_158 = g_027f32f8;
  if (g_027f32f8 != 0) {
    FUN_00d50b00();
  }
  local_150 = '\x01';
  local_148 = 0;
  local_140 = '\0';
  FUN_00d41040(&local_148,&local_158);
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d3a560();
  local_60 = local_48;
  if (local_48 == (int64_t *)0x0) {
    bVar3 = true;
    local_60 = (int64_t *)0x0;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    bVar3 = false;
  }
  else {
    bVar3 = false;
  }
  FUN_00d50b00();
  *(void*)((int64_t)this_ptr + 0x20c) = 1;
  local_31 = '\x01';
  if (unaff_SIL == '\0') {
    local_31 = (**(code **)(*this_ptr + 0x3a8))();
  }
  (**(code **)(*this_ptr + 0x960))();
  lVar1 = local_c0;
  if (local_b8 == '\0') {
    if (local_c0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_b8 = '\0';
  }
  uVar10 = FUN_00d8dab0();
  plVar8 = local_48;
  if (local_48 == (int64_t *)0x0) {
    bVar4 = 1;
    plVar8 = (int64_t *)0x0;
    bVar2 = false;
  }
  else if (local_40 == '\0') {
    uVar10 = FUN_00d50b00();
    bVar4 = 0;
    bVar2 = true;
  }
  else {
    local_40 = '\0';
    bVar2 = true;
    bVar4 = 0;
  }
  if (lVar1 != 0) {
    uVar10 = FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  if (this_ptr[0x40] != 0) {
    FUN_01e40eb0();
    if (local_48 == (int64_t *)0x0) {
      plVar7 = (int64_t *)0x0;
      if (local_40 != '\0') {
        plVar7 = (int64_t *)0x0;
      }
    }
    else {
      plVar7 = local_48;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
    local_138 = 0;
    local_130 = '\0';
    FUN_01cf5bb0();
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar7 + 0x478))();
    local_120 = '\0';
    local_128 = (int64_t *)0x0;
    FUN_01e13680();
    if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
      (**(code **)(*local_128 + 0x10))();
      FUN_00d50b20();
    }
    if (this_ptr[0x40] != 0) {
      this_ptr[0x40] = 0;
      FUN_00d50b20();
    }
    uVar10 = (**(code **)(*this_ptr + 0x620))();
    if (local_48 != (int64_t *)0x0) {
      uVar10 = FUN_00d50b20();
    }
  }
  if (param_2 != '\0') {
LAB_01e0a8c5:
    if (local_31 != '\0') {
      FUN_01d11e80();
    }
    (**(code **)(*this_ptr + 0x620))();
    goto LAB_01e0addc;
  }
  if ((local_60 != (int64_t *)0x0) &&
     (iVar6 = FUN_01d3a5a0(), uVar10 = extraout_XMM0_Da, iVar6 == 2)) {
    FUN_01d3b5d0();
    cVar5 = FUN_00d8ca50();
    uVar10 = extraout_XMM0_Da_00;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    if (cVar5 != '\0') goto LAB_01e0a8c5;
  }
  lVar1 = g_0276bc70;
  if (*(char *)((int64_t)this_ptr + 0x20b) == '\0') {
    if ((char)this_ptr[0x44] != '\0') {
      if (g_0276bc70 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar1;
      local_110 = '\x01';
      cVar5 = FUN_00d8f400();
      uVar10 = extraout_XMM0_Da_01;
      if ((local_110 != '\0') && (local_118 != 0)) {
        uVar10 = FUN_00d50b20();
      }
      if (cVar5 != '\0') goto LAB_01e0a9ca;
    }
    uVar10 = (**(code **)(*this_ptr + 0xb28))();
    if ((char)this_ptr[0x34] != '\0') {
      if (local_31 != '\0') {
        FUN_01d11e80();
      }
      uVar10 = (**(code **)(*this_ptr + 0x620))();
    }
  }
LAB_01e0a9ca:
  lVar1 = g_0276bc70;
  plVar7 = (int64_t *)this_ptr[0x3a];
  if (plVar7 == (int64_t *)0x0) goto joined_r0x01e0ac88;
  if ((char)this_ptr[0x44] == '\0') {
LAB_01e0ab0c:
    local_f0 = '\0';
    local_f8 = plVar8;
    (**(code **)(*plVar7 + 0x398))(uVar10,&local_f8);
    if (local_48 == plVar8) {
      if ((bool)(bVar4 & plVar8 != (int64_t *)0x0)) {
        if (local_40 != '\0') goto LAB_01e0ab7b;
        bVar2 = true;
        FUN_00d50b00();
      }
LAB_01e0ac49:
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar9 = (bool)(bVar2 & plVar8 != (int64_t *)0x0);
        bVar2 = true;
        plVar8 = local_48;
        if (bVar9) {
          FUN_00d50b20();
        }
        goto LAB_01e0ac49;
      }
      bVar9 = plVar8 != (int64_t *)0x0;
      plVar8 = local_48;
      if ((bool)(bVar2 & bVar9)) {
        FUN_00d50b20();
      }
LAB_01e0ab7b:
      local_40 = '\0';
      bVar2 = true;
    }
    if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_0276bc70 != 0) {
      FUN_00d50b00();
    }
    local_108 = lVar1;
    local_100 = '\x01';
    cVar5 = FUN_00d8f400();
    uVar10 = extraout_XMM0_Da_02;
    if ((local_100 != '\0') && (local_108 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    plVar7 = (int64_t *)this_ptr[0x3a];
    if (cVar5 == '\0') goto LAB_01e0ab0c;
    lVar1 = this_ptr[0x2b];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_c4 = (float)(**(code **)(*plVar7 + 0x380))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    fVar11 = (float)FUN_00d8d7b0();
    (**(code **)(*(int64_t *)this_ptr[0x3a] + 0x378))(local_c4 * (fVar11 / g_023908e0));
    if (local_48 == plVar8) {
      if ((bool)(bVar4 & local_48 != (int64_t *)0x0)) {
        bVar2 = true;
        if (local_40 != '\0') goto joined_r0x01e0ac88;
        bVar2 = true;
        FUN_00d50b00();
      }
LAB_01e0acef:
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar9 = (bool)(bVar2 & plVar8 != (int64_t *)0x0);
        bVar2 = true;
        plVar8 = local_48;
        if (bVar9) {
          FUN_00d50b20();
        }
        goto LAB_01e0acef;
      }
      bVar9 = (bool)(bVar2 & plVar8 != (int64_t *)0x0);
      bVar2 = true;
      plVar8 = local_48;
      if (bVar9) {
        FUN_00d50b20();
      }
    }
  }
joined_r0x01e0ac88:
  if (plVar8 != (int64_t *)0x0) {
    lVar1 = this_ptr[0x2b];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*plVar8 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      if (local_31 != '\0') {
        FUN_01d11e80();
      }
      goto LAB_01e0addc;
    }
  }
  local_e0 = '\0';
  local_e8 = plVar8;
  uVar10 = FUN_00d8dab0();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b00();
  }
  if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  plVar7 = (int64_t *)this_ptr[0x2b];
  if (plVar7 != local_48) {
    if (local_48 != (int64_t *)0x0) {
      uVar10 = FUN_00d50b00();
    }
    this_ptr[0x2b] = (int64_t)local_48;
    if (plVar7 != (int64_t *)0x0) {
      uVar10 = FUN_00d50b20();
    }
  }
  local_d0 = '\0';
  local_d8 = 0;
  (**(code **)(*this_ptr + 0xa90))(uVar10,&local_d8);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d11e80();
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01e0addc:
  *(void*)((int64_t)this_ptr + 0x20c) = 0;
  FUN_00d50b20();
  if (!bVar3 && local_60 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

