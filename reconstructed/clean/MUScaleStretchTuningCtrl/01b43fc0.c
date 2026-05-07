// Function: FUN_01b43fc0
// Address: 01b43fc0
// Size: 2580 bytes
// Class: MUScaleStretchTuningCtrl

void FUN_01b43fc0(uint64_t param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int64_t **pplVar3;
  uint8_t auVar4 [16];
  int64_t ***ppplVar5;
  void*puVar6;
  void *pvVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t ****pppplVar10;
  void*arg1;
  int64_t this_ptr;
  int64_t ****pppplVar11;
  uint64_t uVar12;
  float fVar13;
  uint64_t uVar14;
  uint64_t in_XMM0_Qb;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  double dVar15;
  uint8_t auVar19 [16];
  float fVar20;
  uint32_t uVar21;
  uint32_t uVar22;
  float fVar23;
  float fVar24;
  uint8_t auVar25 [16];
  int64_t ***local_c0;
  int64_t ***local_b8;
  int64_t ***local_b0;
  uint8_t local_a8 [8];
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  int64_t local_98;
  char local_90;
  int64_t ***local_88;
  int64_t ***local_80;
  uint8_t local_78 [16];
  int64_t ***local_68;
  void*local_60;
  int64_t ***local_48;
  char local_40;
  
  if (*(int64_t *)(this_ptr + 0x140) != 0) {
    local_78._8_8_ = in_XMM0_Qb;
    local_78._0_8_ = param_1;
    FUN_01d48370();
    (**(code **)(*(int64_t *)*arg1 + 0x390))();
    FUN_01cfbee0();
    if ((local_40 == '\0') && ((int64_t ****)local_48 != (int64_t ****)0x0)) {
      FUN_00d50b00();
    }
    local_88 = local_48;
    FUN_01cfbee0();
    if ((local_40 == '\0') && ((int64_t ****)local_48 != (int64_t ****)0x0)) {
      FUN_00d50b00();
    }
    local_b0 = local_48;
    FUN_01cfbee0();
    local_b8 = local_48;
    if (local_40 == '\0') {
      if ((int64_t ****)local_48 == (int64_t ****)0x0) {
        local_b8 = (int64_t ***)(int64_t ****)0x0;
      }
      else {
        FUN_00d50b00();
      }
    }
    FUN_01cfbee0();
    local_80 = local_48;
    if (local_40 == '\0') {
      if ((int64_t ****)local_48 == (int64_t ****)0x0) {
        local_80 = (int64_t ***)0x0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
    }
    local_c0 = local_80;
    FUN_01cfbee0();
    local_68 = local_48;
    if ((local_40 == '\0') && ((int64_t ****)local_48 != (int64_t ****)0x0)) {
      FUN_00d50b00();
    }
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pppplVar10 = (int64_t ****)&g_02680400;
    *puVar6 = &g_02680400;
    *(void*)((int64_t)puVar6 + 0xc) = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    *(void*)((int64_t)puVar6 + 0x39) = 0;
    *(void*)((int64_t)puVar6 + 0x41) = 0;
    (*g_02680418)();
    local_90 = 0;
    local_98 = *(int64_t *)(this_ptr + 0x140);
    local_60 = puVar6;
    if (local_98 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    FUN_01778a40();
    if (local_40 == '\0') {
      if ((int64_t ****)local_48 != (int64_t ****)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    auVar25 = local_78;
    fVar23 = g_023b1608 + local_78._0_4_;
    fVar13 = param_2 + local_78._0_4_ + g_02390d00 + g_02390d34;
    local_78._0_4_ = fVar23;
    while (fVar23 < fVar13) {
      FUN_01e3f820();
      auVar25._0_4_ = auVar25._0_4_ / g_0241d550;
      local_a8._0_4_ = (float)local_78._0_4_ / auVar25._0_4_ + g_0239394c;
      pvVar7 = _pthread_getspecific((void*)pppplVar10);
      pppplVar11 = (int64_t ****)local_48;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pppplVar10 = (int64_t ****)local_48;
        pppplVar11 = (int64_t ****)local_48[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      uVar14 = (*(*pppplVar11)[0x70])((double)(float)local_a8._0_4_);
      local_a8 = (uint8_t  [8])uVar14;
      FUN_01e3f820();
      uVar1 = *(uint *)(this_ptr + 0x150);
      auVar18 = auVar25;
      FUN_01e3f820();
      auVar16 = insertps(ZEXT416(*(uint *)(this_ptr + 0x150)),ZEXT416(uVar1),0x10);
      auVar17._0_4_ = auVar16._0_4_ + auVar16._0_4_;
      auVar17._4_4_ = auVar16._4_4_ + auVar16._4_4_;
      auVar17._8_4_ = auVar16._8_4_ + auVar16._8_4_;
      auVar17._12_4_ = auVar16._12_4_ + auVar16._12_4_;
      auVar25 = insertps(auVar25,auVar18,0x4c);
      auVar16 = divps(auVar25,auVar17);
      auVar25 = insertps(ZEXT416(uVar1),ZEXT416((uint)(float)(double)local_a8),0x10);
      fVar24 = auVar25._4_4_ * auVar16._4_4_;
      fVar23 = auVar25._0_4_ * auVar16._0_4_ - fVar24;
      auVar18._0_4_ = (uint)fVar23 & g_023945e0;
      auVar18._4_4_ = (uint)fVar24 & _UNK_023945e4;
      auVar18._8_4_ = (uint)(auVar25._8_4_ * auVar16._8_4_) & _UNK_023945e8;
      auVar18._12_4_ = (uint)(auVar25._12_4_ * auVar16._12_4_) & _UNK_023945ec;
      auVar16._4_12_ = SUB1612(auVar18 | g_023945f0,4);
      auVar16._0_4_ = SUB164(auVar18 | g_023945f0,0) + fVar23;
      roundss(auVar16,auVar16,0xb);
      _local_a8 = ZEXT416((uint)(float)(double)local_a8);
      FUN_01d38ba0();
      fVar23 = (float)local_78._0_4_ + g_02390124;
      auVar25 = ZEXT416((uint)fVar23);
      local_78._0_4_ = fVar23;
    }
    FUN_01d488d0();
    (**(code **)(*(int64_t *)*arg1 + 0x370))();
    (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    (**(code **)(*(int64_t *)*arg1 + 0x370))();
    (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    FUN_01d488d0();
    fVar13 = 0.0;
    uVar21 = 0;
    uVar22 = 0;
    fVar23 = g_02390124;
    (**(code **)(*(int64_t *)*arg1 + 0x370))();
    (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    pvVar7 = _pthread_getspecific((void*)pppplVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    if ((local_40 == '\0') && ((int64_t ****)local_48 != (int64_t ****)0x0)) {
      FUN_00d50b00();
    }
    if (0 < *(int *)((int64_t)local_48 + 0xc)) {
      uVar12 = 0;
      do {
        pVar9 = (void*)pppplVar10;
        uVar1 = *(uint *)(this_ptr + 0x16c);
        pplVar3 = (int64_t **)local_48[2][uVar12];
        if (pplVar3 != (int64_t **)0x0) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar14 = FUN_013faed0();
        local_78._0_8_ = uVar14;
        FUN_01e3f820();
        fVar24 = fVar23;
        FUN_01e3f820();
        local_a8._4_4_ = fVar13;
        local_a8._0_4_ = (fVar24 / g_0241d550) * g_02394218;
        uStack_a0 = uVar21;
        uStack_9c = uVar22;
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar15 = (double)FUN_013faf20();
        FUN_01e3f820();
        fVar24 = *(float *)(this_ptr + 0x150);
        fVar20 = fVar13;
        FUN_01e3f820();
        fVar2 = *(float *)(this_ptr + 0x150);
        pppplVar10 = &local_c0;
        FUN_01d488d0();
        auVar19._0_4_ =
             (float)(double)local_78._0_8_ * (fVar23 / g_0241d550) + (float)local_a8._0_4_;
        auVar19._4_4_ = local_78._4_4_;
        auVar19._8_8_ = 0;
        auVar4._4_4_ = fVar20;
        auVar4._0_4_ = (fVar20 / (fVar2 + fVar2)) * fVar24 -
                       (fVar13 / (fVar24 + fVar24)) * (float)dVar15;
        auVar4._8_4_ = uVar22;
        auVar4._12_4_ = uVar22;
        local_78 = insertps(auVar19,auVar4,0x10);
        (**(code **)(*(int64_t *)*arg1 + 0x3c0))();
        if (uVar12 == uVar1) {
          FUN_01d48b40();
        }
        FUN_01d488d0();
        fVar13 = 0.0;
        uVar21 = 0;
        uVar22 = 0;
        fVar23 = g_02390d2c;
        (**(code **)(*(int64_t *)*arg1 + 0x3c8))();
        if (uVar12 == uVar1) {
          FUN_01d48b40();
        }
        if (pplVar3 != (int64_t **)0x0) {
          FUN_00d50b20();
        }
        uVar12 = uVar12 + 1;
      } while ((int64_t)uVar12 < (int64_t)*(int *)((int64_t)local_48 + 0xc));
    }
    FUN_01d48390();
    FUN_00d50b20();
    puVar6 = local_60;
    ppplVar5 = local_80;
    if ((int64_t ****)local_48 != (int64_t ****)0x0) {
      FUN_00d50b20();
    }
    if (puVar6 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((int64_t ****)local_68 != (int64_t ****)0x0) {
      FUN_00d50b20();
    }
    if ((int64_t ****)ppplVar5 != (int64_t ****)0x0) {
      FUN_00d50b20();
    }
    if ((int64_t ****)local_b8 != (int64_t ****)0x0) {
      FUN_00d50b20();
    }
    if ((int64_t ****)local_b0 != (int64_t ****)0x0) {
      FUN_00d50b20();
    }
    if ((int64_t ****)local_88 != (int64_t ****)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

