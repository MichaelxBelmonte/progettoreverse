// Function: FUN_01c8b7d0
// Address: 01c8b7d0
// Size: 4387 bytes
// Class: MUBarSignature

void FUN_01c8b7d0(int64_t *param_1,uint64_t param_2)

{
  void* pVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t lVar7;
  void *pvVar8;
  int64_t lVar9;
  void* pVar10;
  int64_t *in_RCX;
  int64_t *plVar11;
  void*puVar12;
  void*arg1;
  int64_t *this_ptr;
  bool bVar13;
  uint32_t uVar14;
  float fVar15;
  uint64_t in_XMM0_Qb;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint64_t in_XMM1_Qb;
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  int64_t local_160;
  char local_158;
  uint8_t local_150 [8];
  uint32_t local_148;
  uint32_t uStack_144;
  uint32_t uStack_140;
  uint32_t uStack_13c;
  uint8_t local_138 [4];
  int iStack_134;
  int64_t *local_130;
  uint32_t local_124;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  uint64_t local_e8;
  uint64_t uStack_e0;
  uint8_t local_d8 [8];
  uint64_t uStack_d0;
  uint32_t local_c4;
  int64_t *local_c0;
  int64_t *local_b8;
  uint64_t local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  uint64_t local_98;
  uint64_t uStack_90;
  int64_t *local_80;
  int64_t *local_70;
  char local_68;
  uint64_t local_60;
  float local_58;
  uint32_t uStack_54;
  int local_48;
  
  uStack_d0 = in_XMM1_Qb;
  local_d8 = (uint8_t  [8])param_2;
  local_e8 = param_1;
  uStack_e0 = in_XMM0_Qb;
  FUN_01d48370();
  (**(code **)(*(int64_t *)*arg1 + 0x390))();
  (**(code **)(*this_ptr + 0x640))();
  local_a8 = local_60;
  if ((local_58._0_1_ == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  plVar11 = (int64_t *)this_ptr[0x29];
  if (plVar11 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_80 = (int64_t *)this_ptr[0x2d];
  local_130 = plVar11;
  if (local_80 == (int64_t *)0x0) {
    FUN_01cfc6a0();
    local_80 = local_60;
    in_RCX = local_60;
    if (local_60 == (int64_t *)0x0) {
      local_80 = (int64_t *)0x0;
      local_b0 = 0;
    }
    else {
      local_b0 = CONCAT71((int7)((uint64_t)local_60 >> 8),1);
      if (local_58._0_1_ == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    uVar6 = FUN_00d50b00();
    local_b0 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
  }
  pVar10 = (void*)in_RCX;
  FUN_01d488d0();
  plVar11 = (int64_t *)*arg1;
  FUN_00d05530();
  (**(code **)(*plVar11 + 0x3b0))();
  FUN_01d48b40();
  plVar11 = (int64_t *)this_ptr[0x2e];
  if (plVar11 == (int64_t *)0x0) {
    (**(code **)(*local_a8 + 0x3a0))();
    local_c0 = local_60;
    if ((local_60 != (int64_t *)0x0) && (plVar11 = local_c0, local_58._0_1_ == '\0')) {
      FUN_00d50b00();
      plVar11 = local_c0;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_c0 = plVar11;
  plVar11 = (int64_t *)this_ptr[0x2f];
  if (plVar11 == (int64_t *)0x0) {
    (**(code **)(*local_a8 + 0x3a8))();
    local_b8 = local_60;
    if ((local_60 != (int64_t *)0x0) && (plVar11 = local_b8, local_58._0_1_ == '\0')) {
      FUN_00d50b00();
      plVar11 = local_b8;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_b8 = plVar11;
  local_d8._0_4_ = (float)local_d8._0_4_ + (float)local_e8;
  local_d8._4_4_ = (float)local_d8._4_4_ + local_e8._4_4_;
  uStack_d0._0_4_ = (float)uStack_d0 + (float)uStack_e0;
  uStack_d0._4_4_ = uStack_d0._4_4_ + uStack_e0._4_4_;
  auVar20._4_12_ = local_d8._4_12_;
  auVar20._0_4_ = (float)local_d8._0_4_ + g_02390d00;
  auVar24 = auVar20;
  (**(code **)(*local_130 + 0x368))();
  local_a0 = local_60;
  if ((local_58._0_1_ == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  plVar11 = local_a0;
  local_148 = local_e8._4_4_;
  uStack_144 = local_e8._4_4_;
  uStack_140 = uStack_e0._4_4_;
  uStack_13c = uStack_e0._4_4_;
  auVar16._4_4_ = local_d8._4_4_;
  auVar16._0_4_ = local_d8._4_4_;
  auVar16._8_4_ = uStack_d0._4_4_;
  auVar16._12_4_ = uStack_d0._4_4_;
  auVar17._4_12_ = auVar16._4_12_;
  auVar17._0_4_ = (float)local_d8._4_4_ + g_02390d00;
  _local_d8 = auVar17;
  if (local_a0 != (int64_t *)0x0) {
    local_58 = (float)((uint)local_58 & 0xffffff00);
    local_60 = (int64_t *)0x0;
    local_48 = -1;
    while( true ) {
      lVar7 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((int64_t)plVar11 + 0xc) <= local_48) break;
      local_60 = *(int64_t **)(plVar11[2] + 8 + lVar7 * 8);
      iVar5 = (**(code **)(*local_60 + 0x380))();
      if (iVar5 == 0) {
        plVar2 = (int64_t *)*arg1;
        uVar14 = (**(code **)(*local_60 + 0x368))();
        local_98 = CONCAT44(local_98._4_4_,uVar14);
        (**(code **)(*local_60 + 0x368))();
        auVar24._4_4_ = uStack_144;
        auVar24._0_4_ = (float)local_148;
        auVar24._8_4_ = uStack_140;
        auVar24._12_4_ = uStack_13c;
        (**(code **)(*plVar2 + 0x3e0))();
      }
    }
    FUN_01a01420();
    pVar10 = (void*)plVar11;
  }
  FUN_01d488d0();
  plVar11 = local_a0;
  if (local_a0 != (int64_t *)0x0) {
    local_58 = (float)((uint)local_58 & 0xffffff00);
    local_60 = (int64_t *)0x0;
    local_48 = -1;
    while( true ) {
      lVar7 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((int64_t)plVar11 + 0xc) <= local_48) break;
      local_60 = *(int64_t **)(plVar11[2] + 8 + lVar7 * 8);
      iVar5 = (**(code **)(*local_60 + 0x380))();
      if (iVar5 != 0) {
        plVar2 = (int64_t *)*arg1;
        uVar14 = (**(code **)(*local_60 + 0x368))();
        local_98 = CONCAT44(local_98._4_4_,uVar14);
        (**(code **)(*local_60 + 0x368))();
        auVar24._4_4_ = uStack_144;
        auVar24._0_4_ = (float)local_148;
        auVar24._8_4_ = uStack_140;
        auVar24._12_4_ = uStack_13c;
        (**(code **)(*plVar2 + 0x3e0))();
      }
    }
    FUN_01a01420();
    pVar10 = (void*)plVar11;
  }
  lVar7 = this_ptr[0x2b];
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(pVar10);
  pVar1 = (void*)lVar7;
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    pVar10 = pVar1;
  }
  iVar5 = FUN_016c2ea0();
  if (0 < iVar5) {
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_70 + 0x370))();
    local_118 = 0;
    if (local_58._0_1_ == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = (float)((uint)local_58 & 0xffffff00);
    }
    local_118 = '\x01';
    local_120 = local_60;
    FUN_01d48a10();
    if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58._0_1_ != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(pVar10);
    if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
      plVar11 = (int64_t *)this_ptr[0x28];
    }
    else {
      plVar11 = (int64_t *)this_ptr[0x28];
    }
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_98 = (**(code **)(*plVar11 + 0x388))(g_02390d00 + (float)local_e8);
    FUN_0123fd00();
    pVar10 = 0;
    uVar6 = FUN_016cb9d0(local_98,1);
    FUN_00d50b20();
    local_c4 = 0xffffffff;
    local_124 = 0xffffffff;
    pvVar8 = _pthread_getspecific(pVar10);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar12 = local_150;
    FUN_016ca840(puVar12,uVar6,local_138,&local_c4);
    pVar10 = (void*)puVar12;
    if ((local_58._0_1_ == '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    plVar11 = (int64_t *)this_ptr[0x28];
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    pvVar8 = _pthread_getspecific(pVar10);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c98e0();
    local_98 = (**(code **)(*plVar11 + 0x390))();
    uStack_90 = extraout_XMM0_Qb;
    FUN_00d50b20();
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_70 + 0x490))(0,0x11,0);
    local_f0 = local_60;
    if (local_58._0_1_ == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = (float)((uint)local_58 & 0xffffff00);
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x640))();
    puVar12 = (void*)((int64_t)&MACH_HEADER.magic + 1);
    (**(code **)(*local_70 + 0x490))(1,0x11,0);
    local_e8 = local_60;
    if (local_58._0_1_ == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = (float)((uint)local_58 & 0xffffff00);
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    auVar23._0_4_ = auVar20._0_4_ + g_02390124;
    auVar23._4_12_ = auVar20._4_12_;
    auVar18._0_4_ = g_023945e0 & (uint)(float)local_98;
    auVar18._4_4_ = _UNK_023945e4 & local_98._4_4_;
    auVar18._8_4_ = _UNK_023945e8 & (uint)uStack_90;
    auVar18._12_4_ = _UNK_023945ec & uStack_90._4_4_;
    auVar19._4_12_ = SUB1612(auVar18 | g_023945f0,4);
    auVar19._0_4_ = SUB164(auVar18 | g_023945f0,0) + (float)local_98;
    auVar20 = roundss(auVar19,auVar19,0xb);
    local_98 = CONCAT44(local_98._4_4_,auVar20._0_4_);
    auVar24 = auVar23;
    plVar11 = local_60;
    fVar15 = auVar20._0_4_;
    while (fVar15 <= auVar23._0_4_) {
      pVar10 = (void*)puVar12;
      FUN_01c8b390();
      if ((local_68 == '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      fVar15 = (float)local_60 + (float)local_98;
      uVar3 = (uint64_t)local_60 >> 0x20;
      local_60 = (int64_t *)CONCAT44((int)uVar3,fVar15);
      lVar9 = this_ptr[0x2d];
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      (**(code **)(*local_a8 + 0x3a0))();
      local_108 = 0;
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_108 = '\x01';
      local_110 = local_70;
      FUN_01d488d0();
      if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      if (iStack_134 == 0) {
LAB_01c8c443:
        pvVar8 = _pthread_getspecific(pVar10);
        if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pVar10 = pVar1;
        }
        cVar4 = FUN_016cb720();
        if (cVar4 == '\0') {
          FUN_01d488d0();
        }
        else {
          FUN_01d488d0();
        }
        auVar24._4_4_ = uStack_54;
        auVar24._0_4_ = local_58;
        auVar24._8_8_ = 0;
        (**(code **)(*(int64_t *)*arg1 + 0x3f8))(local_60,0);
      }
      else {
        plVar2 = (int64_t *)this_ptr[0x28];
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        pvVar8 = _pthread_getspecific(pVar10);
        if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pVar10 = pVar1;
        }
        FUN_016c98e0();
        local_98 = (**(code **)(*plVar2 + 0x390))();
        uStack_90 = extraout_XMM0_Qb_00;
        FUN_00d50b20();
        auVar21._0_4_ = (uint)(float)local_98 & g_023945e0;
        auVar21._4_4_ = local_98._4_4_ & _UNK_023945e4;
        auVar21._8_4_ = (uint)uStack_90 & _UNK_023945e8;
        auVar21._12_4_ = uStack_90._4_4_ & _UNK_023945ec;
        auVar22._4_12_ = SUB1612(auVar21 | g_023945f0,4);
        auVar22._0_4_ = SUB164(auVar21 | g_023945f0,0) + (float)local_98;
        auVar24 = roundss(ZEXT816(0),auVar22,0xb);
        local_98 = CONCAT44(local_98._4_4_,auVar24._0_4_);
        auVar24._0_4_ = auVar24._0_4_ + g_02394210;
        if (fVar15 + local_58 + g_02390d00 < auVar24._0_4_) goto LAB_01c8c443;
      }
      if (iStack_134 == 0) {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        break;
      }
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar12 = local_138;
      FUN_016ca9d0(puVar12,local_150,&local_c4);
      if (plVar11 == local_70) {
LAB_01c8c62d:
        if (local_68 == '\0') {
LAB_01c8c650:
          if (local_70 != (int64_t *)0x0) goto LAB_01c8c670;
        }
        else if (local_70 != (int64_t *)0x0) {
          FUN_00d50b20();
          goto LAB_01c8c644;
        }
      }
      else {
        if (local_68 == '\0') {
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar13 = plVar11 != (int64_t *)0x0;
          plVar11 = local_70;
          if (bVar13) {
            FUN_00d50b20();
          }
          goto LAB_01c8c62d;
        }
        bVar13 = plVar11 == (int64_t *)0x0;
        plVar11 = local_70;
        if (bVar13) goto LAB_01c8c650;
        FUN_00d50b20();
LAB_01c8c644:
        if (local_70 == (int64_t *)0x0) goto LAB_01c8c190;
LAB_01c8c670:
        FUN_00d50b20();
      }
LAB_01c8c190:
      fVar15 = (float)local_98;
    }
    if (local_e8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_f0 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  uVar6 = (**(code **)(*this_ptr + 0x640))();
  local_160 = g_026e41f0;
  if (g_026e41f0 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_158 = '\x01';
  (**(code **)(*local_70 + 0x3b0))(uVar6,&local_160);
  local_f8 = 0;
  if (local_58._0_1_ == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58._0_1_ = '\0';
  }
  local_f8 = '\x01';
  local_100 = local_60;
  FUN_01d488d0();
  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58._0_1_ != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar11 = (int64_t *)*arg1;
  uVar6 = FUN_01e3f820();
  local_148 = (uint32_t)uVar6;
  uStack_144 = (uint32_t)((uint64_t)uVar6 >> 0x20);
  uStack_140 = (uint32_t)extraout_XMM0_Qb_01;
  uStack_13c = (uint32_t)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
  _local_d8 = auVar24;
  local_98 = FUN_01e3f820();
  FUN_01e3f820();
  (**(code **)(*plVar11 + 0x3e0))();
  FUN_01d48390();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (local_a0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_b8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_c0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_130 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_a8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_b0 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

