// Function: FUN_01dd5630
// Address: 01dd5630
// Size: 2475 bytes
// Class: GNControl
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


bool FUN_01dd5630(int param_1,uint64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  uint32_t in_EDX;
  uint64_t uVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar9;
  bool bVar10;
  float fVar11;
  uint32_t uVar12;
  float extraout_XMM0_Db;
  uint64_t uVar13;
  float fVar14;
  uint32_t uVar15;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  uint32_t local_64;
  int64_t local_60;
  char local_51;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  uVar15 = (uint32_t)((uint64_t)param_2 >> 0x20);
  fVar14 = (float)param_2;
  lVar2 = *(int64_t *)(*(int64_t *)(this_ptr[0x2c] + 0x10) + (int64_t)param_1 * 8);
  local_64 = in_EDX;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_51 = *(char *)((int64_t)this_ptr + 0x1dc);
  local_60 = lVar2;
  if (local_51 != '\0') {
    lVar2 = this_ptr[0x28];
    if (lVar2 != 0) {
      local_e8 = 0;
      FUN_00d50b00();
      local_e8 = '\x01';
      local_f0 = lVar2;
      (**(code **)(*this_ptr + 0x470))();
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr[0x28] != 0) {
        this_ptr[0x28] = 0;
        FUN_00d50b20();
      }
    }
    goto LAB_01dd5fb4;
  }
  if ((*arg1 != 0) && (iVar5 = FUN_01d3a5a0(), iVar5 == 1)) {
    FUN_01d3b620();
    FUN_01d3abf0();
    FUN_01e466c0();
    if (*(char *)((int64_t)this_ptr + 0x279) == '\0') {
      fVar11 = extraout_XMM0_Db /
               (*(float *)(this_ptr + 0x2d) + *(float *)((int64_t)this_ptr + 0x174));
      iVar5 = -1;
      fVar14 = 0.0;
      if ((0.0 <= fVar11) && (fVar14 = (float)(int)this_ptr[0x30], fVar11 < fVar14)) {
        iVar5 = (int)fVar11;
      }
    }
    else {
      iVar5 = -1;
      fVar14 = 0.0;
      fVar11 = extraout_XMM0_Db;
      if ((0.0 <= extraout_XMM0_Db) && (lVar2 = this_ptr[0x52], lVar2 != 0)) {
        iVar1 = *(int *)(lVar2 + 0x18);
        iVar6 = iVar1 + 3;
        if (-1 < iVar1) {
          iVar6 = iVar1;
        }
        uVar8 = 0;
        uVar7 = (uint64_t)(uint)(iVar6 >> 2);
        if (iVar6 >> 2 < 1) {
          uVar7 = uVar8;
        }
        do {
          if (uVar7 == uVar8) goto LAB_01dd57da;
          fVar14 = *(float *)(*(int64_t *)(lVar2 + 0x10) + uVar8 * 4);
          uVar8 = uVar8 + 1;
        } while (fVar14 <= extraout_XMM0_Db);
        iVar5 = (int)uVar8 + -1;
      }
    }
LAB_01dd57da:
    uVar15 = 0;
    if ((int)this_ptr[0x36] != iVar5) {
      FUN_01dd3d20(fVar11,0);
    }
  }
  FUN_01db9a00();
  FUN_00d51d20();
  plVar3 = (int64_t *)this_ptr[0x28];
  if (plVar3 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        this_ptr[0x28] = 0;
      }
      else {
        FUN_00d50b00();
        plVar3 = (int64_t *)this_ptr[0x28];
        this_ptr[0x28] = (int64_t)local_40;
      }
    }
    else {
      local_38 = '\0';
      this_ptr[0x28] = (int64_t)local_40;
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr[0x28] == 0) goto LAB_01dd5fb4;
  *(void*)((int64_t)this_ptr + 0x1dc) = 1;
  (**(code **)(*this_ptr + 0x990))();
  FUN_01db9a00();
  (**(code **)(*local_50 + 0xa18))();
  plVar3 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027f2a00;
  plVar9 = (int64_t *)this_ptr[0x28];
  if (plVar3 == (int64_t *)0x0) {
    if (g_027f2a00 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar9 + 0xa10))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    plVar3 = (int64_t *)this_ptr[0x28];
    FUN_00d50b00();
    (**(code **)(*plVar3 + 0xa20))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01db9a00();
    (**(code **)(*local_50 + 0xa18))();
    local_98 = local_40;
    local_90 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_90 = '\x01';
    (**(code **)(*plVar9 + 0xa10))();
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar3 = (int64_t *)this_ptr[0x28];
    FUN_01db9a00();
    (**(code **)(*local_50 + 0xa28))();
    local_88 = local_40;
    local_80 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_80 = '\x01';
    (**(code **)(*plVar3 + 0xa20))();
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar3 = (int64_t *)this_ptr[0x28];
  FUN_01db9a00();
  (**(code **)(*local_50 + 0x9e0))();
  local_78 = local_40;
  local_70 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_70 = '\x01';
  (**(code **)(*plVar3 + 0x9d8))();
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x27) = local_64;
  *(int *)((int64_t)this_ptr + 0x13c) = param_1;
  plVar3 = (int64_t *)this_ptr[0x28];
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0xa08))(param_1,local_64);
  plVar9 = local_50;
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_40 = plVar9;
  local_38 = '\0';
  (**(code **)(*plVar3 + 0x978))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar12 = FUN_00d50b20();
  uVar13 = (**(code **)(*this_ptr + 0x950))(uVar12,param_1);
  *(void*)((int64_t)this_ptr + 0x1cc) = uVar13;
  *(float *)((int64_t)this_ptr + 0x1d4) = fVar14;
  *(void*)(this_ptr + 0x3b) = uVar15;
  (**(code **)(*(int64_t *)this_ptr[0x28] + 0x4d0))();
  plVar3 = (int64_t *)this_ptr[0x3e];
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
    local_120 = local_60;
    local_118 = '\0';
    local_b0 = 0;
    local_b8 = this_ptr[0x28];
    if (local_b8 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    (**(code **)(*plVar3 + 0x30))(&local_120,local_64,&local_b8);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  local_a0 = 0;
  lVar2 = this_ptr[0x28];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  local_a8 = lVar2;
  (**(code **)(*this_ptr + 0x450))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)this_ptr[0x28];
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar3 + 0x4a0))();
  if (local_40 == (int64_t *)0x0) {
    bVar10 = false;
  }
  else {
    (**(code **)(*plVar3 + 0x4a0))();
    bVar10 = *(int *)((int64_t)local_50 + 0xc) != 0;
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar9 = plVar3;
  if (bVar10) {
    FUN_01d3abf0();
    FUN_01e466c0();
    (**(code **)(*plVar3 + 0x490))();
    plVar9 = local_40;
    plVar4 = plVar3;
    if (plVar3 != local_40) {
      if (local_38 != '\0') {
        FUN_00d50b20();
        goto LAB_01dd5ece;
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar4 = plVar9;
      plVar3 = local_40;
    }
    plVar9 = plVar4;
    if ((local_38 != '\0') && (plVar3 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_01dd5ece:
  local_110 = *arg1;
  local_108 = '\0';
  (**(code **)(*plVar9 + 0x3c0))();
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = this_ptr[0x28];
  if (lVar2 != 0) {
    local_f8 = 0;
    FUN_00d50b00();
    local_f8 = '\x01';
    local_100 = lVar2;
    (**(code **)(*this_ptr + 0x470))();
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr[0x28] != 0) {
      this_ptr[0x28] = 0;
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x618))((int)uVar13,fVar14);
  }
  *(void*)((int64_t)this_ptr + 0x1dc) = 0;
  FUN_00d50b20();
LAB_01dd5fb4:
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  return local_51 == '\0';
}

