// ===================================================================
// GNRadialColorGradient — Complete reconstructed pseudocode
// 13 functions
// ===================================================================


// ============================================================
// 01f7ef70
// ============================================================
// Function: FUN_01f7ef70
// Address: 01f7ef70
// Size: 1822 bytes
// Class: GNRadialColorGradient

void FUN_01f7ef70(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int64_t *this_ptr;
  byte bVar7;
  int64_t *plVar8;
  bool bVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  uint64_t uVar13;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint32_t uVar14;
  uint32_t uVar15;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  double local_60;
  uint64_t local_58;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  int64_t *local_40;
  char local_38;
  
  uVar14 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar11 = (uint32_t)param_2;
  local_60 = (double)FUN_00e7d6f0();
  cVar4 = FUN_01e4ad60();
  if (((cVar4 == '\0') || ((char)this_ptr[7] != '\0')) || (cVar4 = FUN_01d3a640(), cVar4 != '\0'))
  {
LAB_01f7f0b9:
    uVar13 = CONCAT44(local_58._4_4_,(uint32_t)local_58);
    bVar7 = 0;
    plVar1 = (int64_t *)this_ptr[9];
  }
  else {
    FUN_01f27fe0();
    iVar6 = *(int *)((int64_t)local_40 + 0xdc);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (iVar6 != 0) goto LAB_01f7f0b9;
    FUN_01f27fe0();
    cVar4 = FUN_01f45da0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') goto LAB_01f7f0b9;
    FUN_01f27fe0();
    FUN_01f45600();
    if (local_40 == (int64_t *)0x0) {
      bVar9 = false;
    }
    else {
      FUN_01f27fe0();
      FUN_01f45600();
      FUN_01e5ca90();
      bVar9 = local_80 != this_ptr[9];
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    uVar13 = CONCAT44(local_58._4_4_,(uint32_t)local_58);
    bVar7 = bVar9 ^ 1;
    plVar1 = (int64_t *)this_ptr[9];
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x9b8))();
    if (local_40 == (int64_t *)0x0) {
      bVar5 = 0;
    }
    else {
      (**(code **)(*(int64_t *)this_ptr[9] + 0x9b8))();
      local_58 = FUN_01e466c0((int)*(void*)((int64_t)this_ptr + 0x3c));
      (**(code **)(*(int64_t *)this_ptr[9] + 0x9b8))();
      uVar10 = FUN_01e3f820();
      bVar5 = FUN_00d05410((uint32_t)local_58,uVar10,CONCAT44(uVar14,uVar11));
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      bVar5 = bVar5 ^ 1;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar7 = bVar7 & ~bVar5;
    uVar13 = local_58;
  }
  local_58 = uVar13;
  uVar13 = FUN_01e466c0((int)*(void*)((int64_t)this_ptr + 0x3c));
  if ((double)this_ptr[6] < 0.0) {
    return;
  }
  if (this_ptr[9] == 0) {
    return;
  }
  if (bVar7 != 1) {
    return;
  }
  uStack_50 = extraout_XMM0_Dc;
  uStack_4c = extraout_XMM0_Dd;
  local_58 = uVar13;
  cVar4 = (**(code **)(*this_ptr + 0x3a8))();
  uVar11 = (**(code **)(*(int64_t *)this_ptr[9] + 0x490))((uint32_t)local_58);
  plVar1 = local_40;
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    uVar11 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
  }
  local_c0 = plVar1;
  local_b8 = '\0';
  (**(code **)(*this_ptr + 0x3b0))(uVar11,&local_c0);
  plVar8 = local_40;
  if (plVar1 == local_40) {
LAB_01f7f2c4:
    plVar8 = plVar1;
    if (local_38 != '\0') {
LAB_01f7f2ca:
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar1 = plVar8;
        goto LAB_01f7f2c4;
      }
      if (local_38 == '\0') goto LAB_01f7f2d8;
      goto LAB_01f7f2ca;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    local_38 = '\0';
  }
LAB_01f7f2d8:
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  dVar2 = (double)this_ptr[6] + (double)this_ptr[3];
  uVar11 = SUB84(local_60,0);
  uVar14 = (uint32_t)((uint64_t)local_60 >> 0x20);
  uVar10 = 0;
  uVar15 = 0;
  if (local_60 < dVar2) {
    if ((int64_t *)this_ptr[10] != plVar8) {
      this_ptr[6] = (int64_t)local_60;
      this_ptr[10] = (int64_t)plVar8;
    }
LAB_01f7f31e:
    if (plVar8 == (int64_t *)0x0) {
      return;
    }
    goto LAB_01f7f674;
  }
  dVar3 = dVar2 + (double)this_ptr[4];
  if ((local_60 < dVar2) || (dVar3 <= local_60)) {
    if ((local_60 < dVar3) || (dVar3 + (double)this_ptr[5] <= local_60)) {
      if ((dVar3 + (double)this_ptr[5] <= local_60) && (cVar4 == '\x01')) {
        (**(code **)(*this_ptr + 0x388))();
      }
      goto LAB_01f7f31e;
    }
    local_98 = '\0';
    local_a0 = plVar8;
    uVar12 = FUN_01e48f80((uint32_t)local_58);
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar8 + 0x6c8))(uVar12);
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01f7f564;
      }
LAB_01f7f611:
      bVar9 = true;
    }
    else {
      if (local_40 == (int64_t *)0x0) goto LAB_01f7f611;
LAB_01f7f564:
      iVar6 = FUN_00d8c7a0();
      if (iVar6 != 0) {
        local_88 = '\0';
        local_90 = plVar8;
        uVar13 = FUN_01e48f80((uint32_t)local_58);
        local_58 = uVar13;
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar8 + 0x6d0))((uint32_t)local_58);
        local_58._0_4_ = uVar11;
        local_58._4_4_ = uVar14;
        uStack_50 = uVar10;
        uStack_4c = uVar15;
        uVar13 = FUN_01e49120();
        uVar11 = (**(code **)(*plVar8 + 0x6c0))();
        FUN_01f7ed90(SUB84(local_60,0),uVar11,uVar13,(uint32_t)local_58);
      }
      bVar9 = false;
    }
    if ((cVar4 != '\0') &&
       (dVar2 = (local_60 - ((double)this_ptr[6] + (double)this_ptr[3] + (double)this_ptr[4])) /
                (double)this_ptr[5], g_02423ba0 <= dVar2)) {
      (**(code **)(*this_ptr + 0x3a0))((float)((dVar2 + g_023b19a0) * g_0241b688));
    }
    if (!bVar9) {
      FUN_00d50b20();
    }
    goto LAB_01f7f674;
  }
  local_a8 = '\0';
  local_b0 = plVar8;
  uVar13 = FUN_01e48f80((uint32_t)local_58);
  uStack_50 = extraout_XMM0_Dc_00;
  uStack_4c = extraout_XMM0_Dd_00;
  local_58 = uVar13;
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar8 + 0x6c8))((uint32_t)local_58);
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01f7f485;
    }
LAB_01f7f4f2:
    bVar9 = true;
LAB_01f7f50a:
    if (cVar4 != '\0') {
      this_ptr[6] = (int64_t)((local_60 - (double)this_ptr[3]) - (double)this_ptr[4]);
    }
    if (bVar9) goto LAB_01f7f674;
  }
  else {
    if (local_40 == (int64_t *)0x0) goto LAB_01f7f4f2;
LAB_01f7f485:
    iVar6 = FUN_00d8c7a0();
    if (iVar6 == 0) {
      bVar9 = false;
      goto LAB_01f7f50a;
    }
    (**(code **)(*plVar8 + 0x6d0))((uint32_t)local_58);
    local_58._0_4_ = uVar11;
    local_58._4_4_ = uVar14;
    uStack_50 = uVar10;
    uStack_4c = uVar15;
    uVar13 = FUN_01e49120();
    uVar11 = (**(code **)(*plVar8 + 0x6c0))();
    FUN_01f7ed90(SUB84(local_60,0),uVar11,uVar13,(uint32_t)local_58);
  }
  FUN_00d50b20();
LAB_01f7f674:
  FUN_00d50b20();
  return;
}



// ============================================================
// 01f7ffc0
// ============================================================
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



// ============================================================
// 01f7b740
// ============================================================
// Function: FUN_01f7b740
// Address: 01f7b740
// Size: 645 bytes
// Class: GNRadialColorGradient

void FUN_01f7b740(float param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *arg1;
  int64_t *this_ptr;
  float fVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  int64_t local_40;
  char local_38;
  
  FUN_01f7b490();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  lVar1 = *arg1;
  lVar2 = *param_2;
  fVar3 = (*(float *)(lVar2 + 0x10) - *(float *)(lVar1 + 0x10)) * param_1 + *(float *)(lVar1 + 0x10)
  ;
  if ((*(float *)(local_40 + 0x10) != fVar3) || (NAN(*(float *)(local_40 + 0x10)) || NAN(fVar3))) {
    if (0.0 <= fVar3) {
      if (fVar3 <= g_02390124) {
        *(float *)(local_40 + 0x10) = fVar3;
        fVar3 = fVar3 * g_02394220;
      }
      else {
        *(void*)(local_40 + 0x10) = 0x3f800000;
        fVar3 = g_02394220;
      }
    }
    else {
      *(void*)(local_40 + 0x10) = 0;
      fVar3 = 0.0;
    }
    auVar4 = ZEXT416(g_023945e0 & (uint)fVar3) | g_023945f0;
    auVar4._0_4_ = auVar4._0_4_ + fVar3;
    auVar4 = roundss(auVar4,auVar4,0xb);
    *(uint *)(local_40 + 0xc) =
         (int)(int64_t)auVar4._0_4_ << 0x10 | *(uint *)(local_40 + 0xc) & 0xff00ffff;
  }
  fVar3 = (*(float *)(lVar2 + 0x14) - *(float *)(lVar1 + 0x14)) * param_1 + *(float *)(lVar1 + 0x14)
  ;
  if ((*(float *)(local_40 + 0x14) != fVar3) || (NAN(*(float *)(local_40 + 0x14)) || NAN(fVar3))) {
    if (0.0 <= fVar3) {
      if (fVar3 <= g_02390124) {
        *(float *)(local_40 + 0x14) = fVar3;
        fVar3 = fVar3 * g_02394220;
      }
      else {
        *(void*)(local_40 + 0x14) = 0x3f800000;
        fVar3 = g_02394220;
      }
    }
    else {
      *(void*)(local_40 + 0x14) = 0;
      fVar3 = 0.0;
    }
    auVar4 = ZEXT416(g_023945e0 & (uint)fVar3) | g_023945f0;
    auVar5._4_12_ = auVar4._4_12_;
    auVar5._0_4_ = auVar4._0_4_ + fVar3;
    auVar4 = roundss(auVar5,auVar5,0xb);
    *(uint *)(local_40 + 0xc) =
         (int)(int64_t)auVar4._0_4_ << 8 | *(uint *)(local_40 + 0xc) & 0xffff00ff;
  }
  fVar3 = (*(float *)(lVar2 + 0x18) - *(float *)(lVar1 + 0x18)) * param_1 + *(float *)(lVar1 + 0x18)
  ;
  if ((*(float *)(local_40 + 0x18) != fVar3) || (NAN(*(float *)(local_40 + 0x18)) || NAN(fVar3))) {
    if (0.0 <= fVar3) {
      if (fVar3 <= g_02390124) {
        *(float *)(local_40 + 0x18) = fVar3;
        fVar3 = fVar3 * g_02394220;
      }
      else {
        *(void*)(local_40 + 0x18) = 0x3f800000;
        fVar3 = g_02394220;
      }
    }
    else {
      *(void*)(local_40 + 0x18) = 0;
      fVar3 = 0.0;
    }
    auVar4 = ZEXT416(g_023945e0 & (uint)fVar3) | g_023945f0;
    auVar6._4_12_ = auVar4._4_12_;
    auVar6._0_4_ = auVar4._0_4_ + fVar3;
    auVar4 = roundss(auVar6,auVar6,0xb);
    *(uint *)(local_40 + 0xc) =
         (uint)(int64_t)auVar4._0_4_ | *(uint *)(local_40 + 0xc) & 0xffffff00;
  }
  fVar3 = (*(float *)(lVar2 + 0x1c) - *(float *)(lVar1 + 0x1c)) * param_1 + *(float *)(lVar1 + 0x1c)
  ;
  if ((*(float *)(local_40 + 0x1c) != fVar3) || (NAN(*(float *)(local_40 + 0x1c)) || NAN(fVar3))) {
    if (0.0 <= fVar3) {
      if (fVar3 <= g_02390124) {
        *(float *)(local_40 + 0x1c) = fVar3;
        fVar3 = fVar3 * g_02394220;
      }
      else {
        *(void*)(local_40 + 0x1c) = 0x3f800000;
        fVar3 = g_02394220;
      }
    }
    else {
      *(void*)(local_40 + 0x1c) = 0;
      fVar3 = 0.0;
    }
    auVar4 = ZEXT416(g_023945e0 & (uint)fVar3) | g_023945f0;
    auVar7._4_12_ = auVar4._4_12_;
    auVar7._0_4_ = auVar4._0_4_ + fVar3;
    auVar4 = roundss(auVar7,auVar7,0xb);
    *(char *)(local_40 + 0xf) = (char)(int64_t)auVar4._0_4_;
  }
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01f7c800
// ============================================================
// Function: FUN_01f7c800
// Address: 01f7c800
// Size: 766 bytes
// Class: GNRadialColorGradient

void FUN_01f7c800(void)

{
  bool bVar1;
  bool bVar2;
  void*puVar3;
  void*this_ptr;
  bool bVar4;
  int64_t local_30;
  char local_28;
  
  puVar3 = g_028bb018;
  if ((g_028bb018 == (void*)0x0) || (g_028bb021 == '\0')) {
    FUN_00e8cb50();
    if (g_028bb018 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*g_02572370)();
      if (g_028bb018 == puVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = g_028bb018 != (void*)0x0;
        g_028bb018 = puVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (g_028bb020 == '\0') {
        g_028bb020 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(0);
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(g_0240dedc);
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(g_02423b68);
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(g_02390124);
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      g_028bb021 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028bb021 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = g_028bb018;
    *(void*)(this_ptr + 1) = 0;
    if (puVar3 == (void*)0x0) {
      puVar3 = (void*)0x0;
      goto LAB_01f7cae7;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01f7cae7:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01f7aa20
// ============================================================
// Function: FUN_01f7aa20
// Address: 01f7aa20
// Size: 955 bytes
// Class: GNRadialColorGradient

uint64_t FUN_01f7aa20(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint32_t uVar6;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t local_38;
  char local_30;
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_01d70da0();
  FUN_01d701d0();
  if (local_30 == '\0') {
    if (local_38 == 0) {
      return 1;
    }
    FUN_00d50b00();
  }
  else if (local_38 == 0) {
    return 1;
  }
  uVar6 = FUN_01d654a0();
  lVar5 = g_0277d5d0;
  lVar4 = g_0277d5c0;
  lVar3 = g_0277d5b8;
  lVar2 = g_0277d5b0;
  lVar1 = g_0277d5a8;
  lVar7 = local_38;
  switch(uVar6) {
  case 0:
    if (g_0277d5a8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d306a0();
    if (local_38 == 0) {
      lVar7 = 0;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_30 = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    break;
  case 1:
    if (g_0277d5b8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d306a0();
    if (local_38 == 0) {
      lVar7 = 0;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_30 = '\0';
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    break;
  case 2:
    if (g_0277d5b0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d306a0();
    if (local_38 == 0) {
      lVar7 = 0;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_30 = '\0';
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    break;
  case 3:
    if (g_0277d5c0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d306a0();
    if (local_38 == 0) {
      lVar7 = 0;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_30 = '\0';
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    break;
  case 4:
    if (g_0277d5d0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d306a0();
    if (local_38 == 0) {
      lVar7 = 0;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_30 = '\0';
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    break;
  default:
    goto switchD_01f7aab1_default;
  }
  if (lVar7 == 0) {
switchD_01f7aab1_default:
    lVar7 = 0;
  }
  else {
    FUN_00d30620();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != lVar7) {
      FUN_00d30860();
      (**(code **)(*this_ptr + 0x5c0))();
    }
  }
  FUN_00d50b20();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  return 1;
}



// ============================================================
// 01f7c3a0
// ============================================================
// Function: FUN_01f7c3a0
// Address: 01f7c3a0
// Size: 607 bytes
// Class: GNRadialColorGradient
// String references:
//   "GNRadialColorGradient"

void FUN_01f7c3a0(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar7;
  int64_t local_50;
  char local_48;
  
  if ((g_026f0bb8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026f0b08 = FUN_001b9d20();
    g_026f0af0 = "GNRadialColorGradient";
    g_026f0af8 = 0x48;
    g_026f0b00 = FUN_001e8f20;
    g_026f0b10 = 0;
    ram_00000000026f0b18 = 0;
    g_026f0b20 = 0;
    ram_00000000026f0b28 = 0;
    g_026f0b30 = 0;
    ram_00000000026f0b38 = 0;
    g_026f0b40 = 0;
    ram_00000000026f0b48 = 0;
    g_026f0b50 = 0;
    ram_00000000026f0b58 = 0;
    g_026f0b60 = 0;
    ram_00000000026f0b68 = 0;
    g_026f0b70 = 0;
    ram_00000000026f0b78 = 0;
    g_026f0b80 = 0;
    ram_00000000026f0b88 = 0;
    g_026f0b90 = 0;
    ram_00000000026f0b98 = 0;
    g_026f0ba0 = 0;
    ram_00000000026f0ba8 = 0;
    g_026f0bb0 = 0;
    ___cxa_guard_release();
  }
  if (arg1 != (int64_t *)0x0) {
    (**(code **)(*arg1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') {
      plVar4 = (int64_t *)&stack0xffffffffffffffc0;
      goto LAB_01f7c3fc;
    }
  }
  plVar4 = &g_02802688;
LAB_01f7c3fc:
  lVar5 = *plVar4;
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_001b9f00();
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  else {
    *plVar4 = (int64_t)&g_026c0290;
    (*g_026c02a8)();
  }
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_01f7bcc0();
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  lVar5 = plVar4[6];
  if (0 < *(int *)(lVar5 + 0xc)) {
    uVar6 = 0;
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(lVar5 + 0x10) + uVar6 * 8);
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      uVar7 = (**(code **)(*plVar1 + 0x368))();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          uVar7 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d233f0(uVar7,uVar6 & 0xffffffff);
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      uVar6 = uVar6 + 1;
      lVar5 = plVar4[6];
    } while ((int64_t)uVar6 < (int64_t)*(int *)(lVar5 + 0xc));
  }
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01f81010
// ============================================================
// Function: FUN_01f81010
// Address: 01f81010
// Size: 817 bytes
// Class: GNRadialColorGradient

void FUN_01f81010(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  code *pcVar3;
  int64_t *this_ptr;
  int64_t local_98;
  char local_90;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  (**(code **)(*this_ptr + 0x640))();
  if ((local_30 == '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  lVar2 = FUN_01cc5a70();
  if (lVar2 == 0) {
    FUN_01ea9910();
    (**(code **)(*local_58 + 0x370))();
    (**(code **)(*local_38 + 0x4f8))();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    (**(code **)(*local_38 + 0x380))();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01ea9910();
    (**(code **)(*local_58 + 0x370))();
    pcVar3 = FUN_01cc5a70();
    (**(code **)(*local_38 + 0x4f8))();
    (*pcVar3)();
    FUN_01cff4e0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    (**(code **)(*local_38 + 0x380))();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01ea9910();
  (**(code **)(*local_58 + 0x370))();
  (**(code **)(*local_38 + 0x370))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  (**(code **)(*local_38 + 0x370))();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)this_ptr[0x27];
  (**(code **)(*plVar1 + 0x388))();
  (**(code **)(*plVar1 + 0x3a8))();
  FUN_00d50b20();
  return;
}



// ============================================================
// 01f7db00
// ============================================================
// Function: FUN_01f7db00
// Address: 01f7db00
// Size: 601 bytes
// Class: GNRadialColorGradient

void FUN_01f7db00(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_30;
  char local_28;
  
  FUN_01e534b0();
  FUN_01f27fe0();
  FUN_01f2eb50();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_002edd50();
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  FUN_01d2a8f0();
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x70) != 0) {
    FUN_01e40eb0();
    lVar1 = *(int64_t *)(this_ptr + 0x90);
    lVar2 = lVar1;
    if (lVar1 != local_30) {
      lVar2 = local_30;
      if (local_28 == '\0') {
        if (local_30 == 0) {
          lVar2 = 0;
          goto LAB_01f7dc41;
        }
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x90);
        *(int64_t *)(this_ptr + 0x90) = local_30;
      }
      else {
        local_28 = '\0';
LAB_01f7dc41:
        *(int64_t *)(this_ptr + 0x90) = lVar2;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar2 = local_30;
      }
    }
    if ((local_28 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x478))();
  }
  if (*(int64_t *)(this_ptr + 0x80) == 0) {
    return;
  }
  FUN_01e40eb0();
  lVar1 = *(int64_t *)(this_ptr + 0x98);
  lVar2 = lVar1;
  if (lVar1 == local_30) goto LAB_01f7dd23;
  lVar2 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar2 = 0;
      goto LAB_01f7dcdc;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x98);
    *(int64_t *)(this_ptr + 0x98) = local_30;
  }
  else {
    local_28 = '\0';
LAB_01f7dcdc:
    *(int64_t *)(this_ptr + 0x98) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_30;
  }
LAB_01f7dd23:
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x478))();
  return;
}



// ============================================================
// 01f7b490
// ============================================================
// Function: FUN_01f7b490
// Address: 01f7b490
// Size: 517 bytes
// Class: GNRadialColorGradient

void FUN_01f7b490(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  void*puVar4;
  uint64_t uVar5;
  int64_t *this_ptr;
  bool bVar6;
  
  if ((g_028baff0 == (void*)0x0) || (g_028baff9 == '\0')) {
    FUN_00e8cb50();
    if (g_028baff0 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_026792c0;
      puVar4[5] = 0;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      *(void*)((int64_t)puVar4 + 0x14) = 0;
      *(void*)((int64_t)puVar4 + 0x19) = 0;
      (*g_026792d8)();
      if (g_028baff0 == puVar4) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar6 = g_028baff0 != (void*)0x0;
        g_028baff0 = puVar4;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028baff8 == '\0') {
        g_028baff8 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      g_028baff9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028baff9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028bb000 == (void*)0x0) || (g_028bb009 == '\0')) {
    FUN_00e8cb50();
    if (g_028bb000 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_026792c0;
      puVar4[5] = 0;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      *(void*)((int64_t)puVar4 + 0x14) = 0;
      *(void*)((int64_t)puVar4 + 0x19) = 0;
      (*g_026792d8)();
      if (g_028bb000 == puVar4) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar6 = g_028bb000 != (void*)0x0;
        g_028bb000 = puVar4;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028bb008 == '\0') {
        g_028bb008 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      g_028bb009 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028bb009 = '\x01';
      FUN_00e8cb70();
    }
  }
  uVar5 = (uint64_t)g_028bb010;
  g_028bb010 = (int)(uVar5 ^ 1);
  *(void*)(this_ptr + 1) = 0;
  lVar1 = (int64_t)(&g_028baff0)[(uVar5 ^ 1) * 2];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01f7cd50
// ============================================================
// Function: FUN_01f7cd50
// Address: 01f7cd50
// Size: 640 bytes
// Class: GNRadialColorGradient

void FUN_01f7cd50(void)

{
  bool bVar1;
  bool bVar2;
  void*puVar3;
  void*this_ptr;
  bool bVar4;
  int64_t local_30;
  char local_28;
  
  puVar3 = g_028bb028;
  if ((g_028bb028 == (void*)0x0) || (g_028bb031 == '\0')) {
    FUN_00e8cb50();
    if (g_028bb028 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*g_02572370)();
      if (g_028bb028 == puVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = g_028bb028 != (void*)0x0;
        g_028bb028 = puVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (g_028bb030 == '\0') {
        g_028bb030 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(0);
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(g_0239011c);
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(g_02390124);
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      g_028bb031 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028bb031 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = g_028bb028;
    *(void*)(this_ptr + 1) = 0;
    if (puVar3 == (void*)0x0) {
      puVar3 = (void*)0x0;
      goto LAB_01f7cfb9;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01f7cfb9:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01f7bcc0
// ============================================================
// Function: FUN_01f7bcc0
// Address: 01f7bcc0
// Size: 651 bytes
// Class: GNRadialColorGradient

void FUN_01f7bcc0(void)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar5;
  float fVar6;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  lVar2 = *(int64_t *)(*arg1 + 0x30);
  if (lVar2 == 0) {
    local_60 = 0;
    uVar1 = MACH_HEADER.filetype;
  }
  else {
    FUN_00d50b00();
    uVar1 = *(uint *)(lVar2 + 0xc);
    local_60 = lVar2;
  }
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      lVar3 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + uVar5 * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_01cfd130();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_48 = local_58;
      local_40 = '\0';
      FUN_00d21140();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  FUN_01f7c100();
  if (local_48 == 0) {
    bVar4 = true;
    uVar1 = MACH_HEADER.filetype;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
    }
    bVar4 = false;
    uVar1 = *(uint *)(local_48 + 0xc);
  }
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      FUN_00d459e0();
      FUN_00d46dc0();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_00d21140();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  lVar3 = *arg1;
  fVar6 = *(float *)(lVar3 + 0x40);
  if (*(int *)(*(int64_t *)(lVar3 + 0x38) + 0xc) != *(int *)(*(int64_t *)(lVar3 + 0x30) + 0xc)) {
    fVar6 = fVar6 + g_02394294;
  }
  *(float *)(this_ptr + 0x40) = fVar6;
  *(void*)(this_ptr + 0x44) = *(void*)(lVar3 + 0x44);
  if (!bVar4) {
    FUN_00d50b20();
  }
  if ((lVar2 != 0) && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01f7d1a0
// ============================================================
// Function: FUN_01f7d1a0
// Address: 01f7d1a0
// Size: 519 bytes
// Class: GNRadialColorGradient

void FUN_01f7d1a0(void)

{
  bool bVar1;
  bool bVar2;
  void*puVar3;
  void*this_ptr;
  bool bVar4;
  int64_t local_38;
  char local_30;
  
  puVar3 = g_028bb038;
  if ((g_028bb038 == (void*)0x0) || (g_028bb041 == '\0')) {
    FUN_00e8cb50();
    if (g_028bb038 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*g_02572370)();
      if (g_028bb038 == puVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = g_028bb038 != (void*)0x0;
        g_028bb038 = puVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (g_028bb040 == '\0') {
        g_028bb040 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(0);
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_00d21140();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(g_02390124);
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_00d21140();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      g_028bb041 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028bb041 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = g_028bb038;
    *(void*)(this_ptr + 1) = 0;
    if (puVar3 == (void*)0x0) {
      puVar3 = (void*)0x0;
      goto LAB_01f7d38c;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01f7d38c:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01f81660
// ============================================================
// Function: FUN_01f81660
// Address: 01f81660
// Size: 537 bytes
// Class: GNRadialColorGradient

void FUN_01f81660(uint32_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  void*arg1;
  int64_t *this_ptr;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x640))();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d48370();
  (**(code **)(*local_40 + 0x4f0))();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x3b0))();
  (**(code **)(*local_40 + 0x3a8))();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x368))(g_023b4a20);
  (**(code **)(*(int64_t *)this_ptr[0x27] + 0x3f0))();
  FUN_01eab940(param_1,param_2);
  FUN_01d48390();
  FUN_00d50b20();
  return;
}

