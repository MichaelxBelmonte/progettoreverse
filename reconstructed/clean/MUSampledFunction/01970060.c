// Function: FUN_01970060
// Address: 01970060
// Size: 3415 bytes
// Class: MUSampledFunction

void FUN_01970060(void* param_1,char param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  byte bVar11;
  byte bVar12;
  void *pvVar13;
  void*puVar14;
  void*puVar15;
  void*arg1;
  int64_t this_ptr;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint64_t uVar20;
  double dVar21;
  double dVar22;
  uint64_t uVar23;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar25 [16];
  double dVar24;
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  uint8_t auVar39 [16];
  uint8_t auVar40 [16];
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  uint8_t auVar43 [16];
  uint8_t auVar44 [16];
  uint8_t auVar45 [16];
  uint8_t auVar46 [16];
  uint8_t auVar47 [16];
  uint8_t auVar48 [16];
  uint8_t auVar49 [16];
  uint8_t auVar50 [16];
  uint8_t auVar51 [16];
  float fVar52;
  float fStack_1c4;
  uint8_t local_1c8 [16];
  float fStack_1b4;
  uint8_t local_1b8 [16];
  uint8_t local_1a8 [48];
  float local_178;
  uint32_t uStack_174;
  uint32_t uStack_170;
  uint32_t uStack_16c;
  uint8_t local_148 [8];
  uint32_t uStack_140;
  uint32_t uStack_13c;
  float local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  int64_t *local_58;
  char local_50;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_05;
  
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  bVar11 = FUN_012686a0();
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  bVar12 = FUN_012686d0();
  if ((bVar12 | bVar11) == 1) {
    FUN_01989f80();
    if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    uVar20 = FUN_01968ab0();
    uStack_80 = extraout_XMM0_Qb;
    local_88 = (uint8_t  [8])uVar20;
    auVar33 = _local_88;
    pvVar13 = _pthread_getspecific(param_1);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar21 = (double)FUN_0125a280();
    pvVar13 = _pthread_getspecific(param_1);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar22 = (double)FUN_01264170();
    fVar16 = (float)(**(code **)(*local_58 + 0x938))(dVar21);
    uVar23 = (**(code **)(*local_58 + 0x938))();
    local_178 = (float)uVar23;
    uStack_174 = (uint32_t)((uint64_t)uVar23 >> 0x20);
    uStack_170 = (uint32_t)extraout_XMM0_Qb_00;
    uStack_16c = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
    lVar1 = *(int64_t *)(this_ptr + 0x178);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    auVar40._0_8_ = (**(code **)(*local_58 + 0xc38))();
    auVar40._8_8_ = extraout_XMM0_Qb_01;
    auVar25._4_12_ = auVar40._4_12_;
    auVar25._0_4_ = (float)auVar40._0_8_ + g_023b8c38;
    uVar23 = (**(code **)(*local_58 + 0xbf8))(auVar25._0_8_);
    local_a8 = (float)uVar23;
    uStack_a4 = (uint)((uint64_t)uVar23 >> 0x20);
    uStack_a0 = (uint)extraout_XMM0_Qb_02;
    uStack_9c = (uint)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
    lVar2 = *(int64_t *)(this_ptr + 0x178);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*local_58 + 0xc38))();
    fVar17 = (float)(**(code **)(*local_58 + 0xbf8))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    fVar17 = (float)((uint)(local_a8 - fVar17) & g_02390140);
    uStack_a4 = uStack_a4 & _UNK_02390144;
    uStack_a0 = uStack_a0 & _UNK_02390148;
    uStack_9c = uStack_9c & _UNK_0239014c;
    local_88._4_4_ = (uint32_t)((uint64_t)uVar20 >> 0x20);
    uStack_80._4_4_ = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
    local_88._0_4_ = (uint32_t)uVar20;
    if (bVar11 != 0) {
      pvVar13 = _pthread_getspecific(param_1);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar24 = (double)FUN_01268240();
      fVar18 = (float)(**(code **)(*local_58 + 0x938))(dVar21 + dVar24);
      pvVar13 = _pthread_getspecific(param_1);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266180();
      fVar18 = fVar18 - fVar16;
      uStack_80._0_4_ = (uint32_t)extraout_XMM0_Qb;
      fVar52 = (float)local_88._0_4_ + fVar18;
      auVar6._4_4_ = local_88._4_4_;
      auVar6._0_4_ = local_88._4_4_;
      auVar6._8_4_ = uStack_80._4_4_;
      auVar6._12_4_ = uStack_80._4_4_;
      auVar26._4_12_ = auVar6._4_12_;
      auVar26._0_4_ = (float)local_88._4_4_ - fVar17;
      auVar48._4_4_ = local_88._4_4_;
      auVar48._0_4_ = fVar52;
      auVar48._8_4_ = (uint32_t)uStack_80;
      auVar48._12_4_ = uStack_80._4_4_;
      local_1a8._0_16_ = insertps(auVar48,auVar26,0x10);
      auVar27._0_4_ = (float)local_88._4_4_ + fVar17;
      auVar27._4_12_ = auVar26._4_12_;
      auVar39._4_4_ = local_88._4_4_;
      auVar39._0_4_ = fVar52;
      auVar39._8_4_ = (uint32_t)uStack_80;
      auVar39._12_4_ = uStack_80._4_4_;
      auVar40 = insertps(auVar39,auVar27,0x10);
      fStack_1c4 = auVar40._4_4_;
      if (*(int64_t *)(this_ptr + 0x180) == 0) {
        local_148._4_4_ = local_88._4_4_;
        local_148._0_4_ = fVar52;
        uStack_140 = (uint32_t)uStack_80;
        uStack_13c = uStack_80._4_4_;
        puVar14 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        puVar15 = &g_02680400;
        *puVar14 = &g_02680400;
        *(void*)((int64_t)puVar14 + 0xc) = 0;
        puVar14[6] = 0;
        puVar14[7] = 0;
        *(void*)((int64_t)puVar14 + 0x39) = 0;
        *(void*)((int64_t)puVar14 + 0x41) = 0;
        (*g_02680418)();
        lVar1 = *(int64_t *)(this_ptr + 0x180);
        *(void**)(this_ptr + 0x180) = puVar14;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        FUN_01d38830();
        auVar41 = ZEXT416((uint)(g_02390d00 + fVar52));
        fVar19 = g_02390d00 + fVar52;
        while ((float)local_88._0_4_ < fVar19) {
          auVar28._4_12_ = auVar41._4_12_;
          auVar28._0_4_ = (auVar41._0_4_ - (float)local_88._0_4_) / fVar18;
          fVar19 = (float)_powf(auVar28._0_8_);
          auVar7._4_4_ = local_88._4_4_;
          auVar7._0_4_ = local_88._4_4_;
          auVar7._8_4_ = uStack_80._4_4_;
          auVar7._12_4_ = uStack_80._4_4_;
          auVar42._4_12_ = auVar7._4_12_;
          auVar42._0_4_ = (float)local_88._4_4_ - fVar19 * fVar17;
          auVar40 = insertps(auVar41,auVar42,0x10);
          FUN_01d38830(auVar40._0_8_);
          auVar41._0_4_ = auVar41._0_4_ + g_023b1608;
          auVar41._4_12_ = auVar28._4_12_;
          fVar19 = auVar41._0_4_;
        }
        FUN_01d38830();
        param_1 = (void*)puVar15;
        auVar43 = ZEXT416((uint)(g_02390124 + (float)local_88._0_4_));
        fVar19 = g_02390124 + (float)local_88._0_4_;
        while (fVar19 < fVar52) {
          auVar29._4_12_ = auVar43._4_12_;
          auVar29._0_4_ = (auVar43._0_4_ - (float)local_88._0_4_) / fVar18;
          auVar30._0_8_ = _powf(auVar29._0_8_);
          auVar30._8_8_ = extraout_XMM0_Qb_03;
          auVar31._4_12_ = auVar30._4_12_;
          auVar31._0_4_ = (float)auVar30._0_8_ * fVar17 + (float)local_88._4_4_;
          insertps(auVar43,auVar31,0x10);
          FUN_01d38830();
          param_1 = (void*)puVar15;
          auVar43._0_4_ = auVar43._0_4_ + g_02390d34;
          auVar43._4_12_ = auVar29._4_12_;
          fVar19 = auVar43._0_4_;
        }
        FUN_01d38830();
      }
    }
    if (bVar12 != 0) {
      fVar18 = (float)(**(code **)(*local_58 + 0x938))(dVar22 + dVar21);
      pvVar13 = _pthread_getspecific(param_1);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar24 = (double)FUN_01268260();
      fVar52 = (float)(**(code **)(*local_58 + 0x938))((dVar22 + dVar21) - dVar24);
      pvVar13 = _pthread_getspecific(param_1);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012661f0();
      fVar16 = (local_178 - fVar16) + (float)local_88._0_4_;
      fVar18 = fVar18 - fVar52;
      fVar52 = fVar16 - fVar18;
      auVar8._4_4_ = local_88._4_4_;
      auVar8._0_4_ = local_88._4_4_;
      auVar8._8_4_ = uStack_80._4_4_;
      auVar8._12_4_ = uStack_80._4_4_;
      auVar44._4_12_ = auVar8._4_12_;
      auVar44._0_4_ = (float)local_88._4_4_ - fVar17;
      auVar51._4_4_ = uStack_174;
      auVar51._0_4_ = fVar52;
      auVar51._8_4_ = uStack_170;
      auVar51._12_4_ = uStack_16c;
      _local_148 = insertps(auVar51,auVar44,0x10);
      auVar45._0_4_ = (float)local_88._4_4_ + fVar17;
      auVar45._4_12_ = auVar44._4_12_;
      auVar49._4_4_ = uStack_174;
      auVar49._0_4_ = fVar52;
      auVar49._8_4_ = uStack_170;
      auVar49._12_4_ = uStack_16c;
      auVar40 = insertps(auVar49,auVar45,0x10);
      fStack_1b4 = auVar40._4_4_;
      if (*(int64_t *)(this_ptr + 0x188) == 0) {
        puVar14 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar14 = &g_02680400;
        *(void*)((int64_t)puVar14 + 0xc) = 0;
        puVar14[6] = 0;
        puVar14[7] = 0;
        *(void*)((int64_t)puVar14 + 0x39) = 0;
        *(void*)((int64_t)puVar14 + 0x41) = 0;
        (*g_02680418)();
        lVar1 = *(int64_t *)(this_ptr + 0x188);
        *(void**)(this_ptr + 0x188) = puVar14;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        FUN_01d38830();
        auVar50 = ZEXT416((uint)(g_02390124 + fVar52));
        fVar19 = g_02390124 + fVar52;
        while (auVar10._4_4_ = uStack_174, auVar10._0_4_ = fVar16, auVar10._8_4_ = uStack_170,
              auVar10._12_4_ = uStack_16c, fVar19 < fVar16) {
          auVar32._4_12_ = auVar10._4_12_;
          auVar32._0_4_ = (fVar16 - auVar50._0_4_) / fVar18;
          fVar19 = (float)_powf(auVar32._0_8_);
          auVar9._4_4_ = local_88._4_4_;
          auVar9._0_4_ = local_88._4_4_;
          auVar9._8_4_ = uStack_80._4_4_;
          auVar9._12_4_ = uStack_80._4_4_;
          auVar46._4_12_ = auVar9._4_12_;
          auVar46._0_4_ = (float)local_88._4_4_ - fVar19 * fVar17;
          auVar40 = insertps(auVar50,auVar46,0x10);
          FUN_01d38830(auVar40._0_8_);
          auVar50._0_4_ = auVar50._0_4_ + g_02390d34;
          fVar19 = auVar50._0_4_;
        }
        auVar33 = blendps(auVar33,auVar10,1);
        FUN_01d38830(auVar33._0_8_);
        auVar33 = ZEXT416((uint)(g_02390d00 + fVar16));
        fVar19 = g_02390d00 + fVar16;
        while (fVar52 < fVar19) {
          auVar4._4_4_ = uStack_174;
          auVar4._0_4_ = fVar16;
          auVar4._8_4_ = uStack_170;
          auVar4._12_4_ = uStack_16c;
          auVar34._4_12_ = auVar4._4_12_;
          auVar34._0_4_ = (fVar16 - auVar33._0_4_) / fVar18;
          auVar35._0_8_ = _powf(auVar34._0_8_);
          auVar35._8_8_ = extraout_XMM0_Qb_04;
          auVar36._4_12_ = auVar35._4_12_;
          auVar36._0_4_ = (float)auVar35._0_8_ * fVar17 + (float)local_88._4_4_;
          insertps(auVar33,auVar36,0x10);
          FUN_01d38830();
          auVar33._0_4_ = auVar33._0_4_ + g_023b1608;
          fVar19 = auVar33._0_4_;
        }
        FUN_01d38830();
      }
      FUN_01d48b40();
    }
    FUN_01d48b30();
    FUN_01d48b10();
    FUN_01d48b40();
    FUN_0196a1c0();
    if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x188);
    if (lVar1 != 0) {
      plVar3 = (int64_t *)*arg1;
      FUN_00d50b00();
      (**(code **)(*plVar3 + 0x3a8))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = *(int64_t *)(this_ptr + 0x180);
    if (lVar1 != 0) {
      plVar3 = (int64_t *)*arg1;
      FUN_00d50b00();
      (**(code **)(*plVar3 + 0x3a8))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01d48b40();
    FUN_01969e40();
    if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x188);
    if (lVar1 != 0) {
      plVar3 = (int64_t *)*arg1;
      FUN_00d50b00();
      (**(code **)(*plVar3 + 0x3a8))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = *(int64_t *)(this_ptr + 0x180);
    if (lVar1 != 0) {
      plVar3 = (int64_t *)*arg1;
      FUN_00d50b00();
      (**(code **)(*plVar3 + 0x3a8))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01d48b40();
    FUN_01969e40();
    if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x180) != 0) {
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    }
    if (*(int64_t *)(this_ptr + 0x188) != 0) {
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    }
    FUN_01d48b10();
    FUN_01d48b40();
    if (param_2 != '\0') {
      if (*(int64_t *)(this_ptr + 0x180) != 0) {
        FUN_01968c50();
        fVar16 = (fStack_1c4 + (float)local_1a8._4_4_) * g_0239011c;
        auVar37._0_8_ = _logf();
        auVar37._8_8_ = extraout_XMM0_Qb_05;
        auVar38._4_12_ = auVar37._4_12_;
        auVar38._0_4_ = (((float)auVar37._0_8_ / g_0241c6f0) * fVar17) / g_02394298 + fVar16;
        auVar33 = insertps(local_1a8._0_16_,auVar38,0x10);
        FUN_01a84670(1,auVar33._0_8_);
      }
      if (*(int64_t *)(this_ptr + 0x188) != 0) {
        FUN_01968c50();
        fVar16 = (fStack_1b4 + (float)local_148._4_4_) * g_0239011c;
        fVar18 = (float)_logf();
        auVar5._4_4_ = uStack_a4;
        auVar5._0_4_ = fVar17;
        auVar5._8_4_ = uStack_a0;
        auVar5._12_4_ = uStack_9c;
        auVar47._4_12_ = auVar5._4_12_;
        auVar47._0_4_ = (fVar17 * (fVar18 / g_0241c6f0)) / g_02394298 + fVar16;
        auVar33 = insertps(_local_148,auVar47,0x10);
        FUN_01a84670(auVar33._0_8_,0);
      }
    }
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

