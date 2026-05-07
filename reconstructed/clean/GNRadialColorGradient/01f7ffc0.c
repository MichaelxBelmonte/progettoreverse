// Function: FUN_01f7ffc0
// Address: 01f7ffc0
// Size: 1398 bytes
// Class: GNRadialColorGradient

void FUN_01f7ffc0(uint64_t param_1,uint64_t param_2)

{
  void*puVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  void*puVar6;
  int64_t this_ptr;
  float fVar7;
  uint64_t uVar8;
  uint8_t auVar9 [16];
  float fVar11;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar10 [16];
  uint64_t extraout_XMM0_Qb_02;
  uint64_t in_XMM1_Qb;
  uint8_t auVar12 [16];
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  int64_t local_68;
  char local_60;
  uint8_t local_58 [16];
  int64_t *local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x48) == 0) {
    return;
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x540))();
  if (*(int64_t *)(this_ptr + 0x70) == 0) {
    auVar9 = ZEXT816(0);
LAB_01f8006f:
    local_58 = auVar9;
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)((int64_t)puVar6 + 0xc) = 0;
    *puVar6 = &g_026a3350;
    puVar6[2] = &g_026a37c8;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *(void*)(puVar6 + 5) = 0;
    puVar6[6] = 0;
    *(void*)((int64_t)puVar6 + 0x37) = 0;
    *(void*)((int64_t)puVar6 + 0x3c) = 0;
    *(void*)((int64_t)puVar6 + 0x44) = 0;
    *(void*)((int64_t)puVar6 + 0x4c) = 0;
    *(void*)((int64_t)puVar6 + 0x54) = 0;
    *(void*)((int64_t)puVar6 + 0x5c) = 0;
    *(void*)((int64_t)puVar6 + 100) = 0;
    *(void*)((int64_t)puVar6 + 0x69) = 0;
    puVar6[0xf] = 0;
    *(void*)((int64_t)puVar6 + 0x7f) = 0;
    *(void*)((int64_t)puVar6 + 0x84) = 0;
    *(void*)((int64_t)puVar6 + 0x8c) = 0;
    *(void*)((int64_t)puVar6 + 0x94) = 0;
    uVar8 = (*g_026a3368)();
    puVar1 = *(void**)(this_ptr + 0x70);
    if (puVar1 == puVar6) {
      uVar8 = FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0x70) = puVar6;
      if (puVar1 != (void*)0x0) {
        uVar8 = FUN_00d50b20();
      }
    }
    local_c8 = *(int64_t *)(this_ptr + 0x48);
    local_c0 = '\0';
    FUN_01e5b6f0(uVar8,&local_c8);
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e5ca90();
    plVar2 = local_40;
    local_60 = 0;
    local_68 = *(int64_t *)(this_ptr + 0x78);
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    (**(code **)(*plVar2 + 0x450))();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x4d8))();
    local_58._0_4_ = local_58._0_4_ + auVar9._0_4_;
    (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x4d8))();
    auVar9 = blendps(local_58,auVar9,0xe);
    FUN_01e5bc80(auVar9._0_8_);
  }
  else {
    (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x4d8))();
    local_58._8_8_ = in_XMM1_Qb;
    local_58._0_8_ = param_2;
    fVar7 = (float)FUN_01e59910();
    auVar9 = ZEXT816(0);
    if (fVar7 < (float)local_58._0_4_) {
      (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x478))();
      FUN_01e5e740();
      FUN_00d50130();
      if (*(int64_t *)(this_ptr + 0x70) == 0) {
        auVar9 = ZEXT416(g_02390124);
        goto LAB_01f8006f;
      }
      *(void*)(this_ptr + 0x70) = 0;
      FUN_00d50b20();
      auVar9 = ZEXT416(g_02390124);
    }
    if (*(int64_t *)(this_ptr + 0x70) == 0) goto LAB_01f8006f;
  }
  plVar2 = *(int64_t **)(this_ptr + 0x78);
  local_58._0_8_ = FUN_01e59910();
  local_58._8_8_ = extraout_XMM0_Qb;
  uVar8 = FUN_01e59910();
  auVar10._8_4_ = (int)extraout_XMM0_Qb_00;
  auVar10._0_8_ = uVar8;
  auVar10._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
  blendps(auVar10,local_58,0xd);
  (**(code **)(*plVar2 + 0x4d0))();
  local_58._8_8_ = 0;
  local_58._0_8_ = *(uint64_t *)(this_ptr + 0x3c);
  _local_78 = ZEXT416(*(uint *)(this_ptr + 100));
  fVar7 = *(float *)(this_ptr + 0x68);
  auVar12 = ZEXT416((uint)fVar7);
  auVar9._0_8_ = FUN_01e46ed0(*(void*)(this_ptr + 0x5c));
  auVar9._8_8_ = extraout_XMM0_Qb_01;
  fVar11 = (float)((uint64_t)auVar9._0_8_ >> 0x20);
  switch(*(void*)(this_ptr + 0x58)) {
  case 0:
    auVar12 = ZEXT416((uint)(fVar7 + fVar11 + g_02390d2c));
    auVar9 = insertps(local_58,auVar12,0x10);
    break;
  case 1:
    auVar12._0_4_ = (float)local_78._0_4_ * g_0239011c + (float)auVar9._0_8_;
    auVar12._4_4_ = (float)local_78._0_4_ * g_0239011c + fVar11;
    auVar12._8_4_ = (float)uStack_70 + (float)extraout_XMM0_Qb_01;
    auVar12._12_4_ = (float)uStack_70 + (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
    local_58 = auVar12;
    goto switchD_01f8027b_default;
  case 2:
    break;
  case 3:
    auVar12 = insertps(_local_78,ZEXT416((uint)(fVar7 + fVar11)),0x10);
    auVar10 = insertps(auVar9,g_02390d2c,0x10);
    auVar9._0_4_ = auVar10._0_4_ + auVar12._0_4_;
    auVar9._4_4_ = auVar10._4_4_ + auVar12._4_4_;
    auVar9._8_4_ = auVar10._8_4_ + auVar12._8_4_;
    auVar9._12_4_ = auVar10._12_4_ + auVar12._12_4_;
    break;
  default:
    goto switchD_01f8027b_default;
  }
  local_58 = auVar9;
switchD_01f8027b_default:
  (*PTR__objc_msgSend_024a9998)(g_0238fee8);
  FUN_01e5b880();
  _local_78 = auVar12;
  FUN_01d907a0();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f514b0(*(void*)(this_ptr + 0x3c));
  plVar3 = local_40;
  if (((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_01e46ed0(*(void*)(this_ptr + 0x5c));
  local_b8 = plVar2;
  local_b0 = '\0';
  local_a8 = plVar3;
  local_a0 = '\0';
  FUN_01ede930(&local_a8,1);
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_98 = plVar4;
  local_90 = '\0';
  local_58._0_8_ = FUN_01edf3b0();
  local_58._8_8_ = extraout_XMM0_Qb_02;
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_80 = '\0';
  local_88 = 0;
  FUN_01e5ba50();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  cVar5 = FUN_01e5c7e0();
  if (cVar5 == '\0') {
    FUN_01e5d9c0();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

