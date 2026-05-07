// Function: FUN_01970060
// Address: 01970060
// Size: 3415 bytes
// Class: MUSampledFunction


/* WARNING: Removing unreachable block (ram,0x01970cd8) */
/* WARNING: Removing unreachable block (ram,0x01970ce4) */
/* WARNING: Removing unreachable block (ram,0x01970d86) */
/* WARNING: Removing unreachable block (ram,0x01970d92) */
/* WARNING: Removing unreachable block (ram,0x01970148) */
/* WARNING: Removing unreachable block (ram,0x01970151) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01970060(pthread_key_t param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  byte bVar11;
  byte bVar12;
  void *pvVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar25 [16];
  double dVar24;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fStack_1c4;
  undefined1 local_1c8 [16];
  float fStack_1b4;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [48];
  float local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_148 [8];
  undefined4 uStack_140;
  undefined4 uStack_13c;
  float local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined1 local_88 [8];
  undefined8 uStack_80;
  longlong *local_58;
  char local_50;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  
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
    if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    uVar20 = FUN_01968ab0();
    uStack_80 = extraout_XMM0_Qb;
    local_88 = (undefined1  [8])uVar20;
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
    uStack_174 = (undefined4)((ulonglong)uVar23 >> 0x20);
    uStack_170 = (undefined4)extraout_XMM0_Qb_00;
    uStack_16c = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    lVar1 = *(longlong *)(unaff_RDI + 0x178);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    auVar40._0_8_ = (**(code **)(*local_58 + 0xc38))();
    auVar40._8_8_ = extraout_XMM0_Qb_01;
    auVar25._4_12_ = auVar40._4_12_;
    auVar25._0_4_ = (float)auVar40._0_8_ + DAT_023b8c38;
    uVar23 = (**(code **)(*local_58 + 0xbf8))(auVar25._0_8_);
    local_a8 = (float)uVar23;
    uStack_a4 = (uint)((ulonglong)uVar23 >> 0x20);
    uStack_a0 = (uint)extraout_XMM0_Qb_02;
    uStack_9c = (uint)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
    lVar2 = *(longlong *)(unaff_RDI + 0x178);
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
    fVar17 = (float)((uint)(local_a8 - fVar17) & _DAT_02390140);
    uStack_a4 = uStack_a4 & _UNK_02390144;
    uStack_a0 = uStack_a0 & _UNK_02390148;
    uStack_9c = uStack_9c & _UNK_0239014c;
    local_88._4_4_ = (undefined4)((ulonglong)uVar20 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
    local_88._0_4_ = (undefined4)uVar20;
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
      uStack_80._0_4_ = (undefined4)extraout_XMM0_Qb;
      fVar52 = (float)local_88._0_4_ + fVar18;
      auVar6._4_4_ = local_88._4_4_;
      auVar6._0_4_ = local_88._4_4_;
      auVar6._8_4_ = uStack_80._4_4_;
      auVar6._12_4_ = uStack_80._4_4_;
      auVar26._4_12_ = auVar6._4_12_;
      auVar26._0_4_ = (float)local_88._4_4_ - fVar17;
      auVar48._4_4_ = local_88._4_4_;
      auVar48._0_4_ = fVar52;
      auVar48._8_4_ = (undefined4)uStack_80;
      auVar48._12_4_ = uStack_80._4_4_;
      local_1a8._0_16_ = insertps(auVar48,auVar26,0x10);
      auVar27._0_4_ = (float)local_88._4_4_ + fVar17;
      auVar27._4_12_ = auVar26._4_12_;
      auVar39._4_4_ = local_88._4_4_;
      auVar39._0_4_ = fVar52;
      auVar39._8_4_ = (undefined4)uStack_80;
      auVar39._12_4_ = uStack_80._4_4_;
      auVar40 = insertps(auVar39,auVar27,0x10);
      fStack_1c4 = auVar40._4_4_;
      if (*(longlong *)(unaff_RDI + 0x180) == 0) {
        local_148._4_4_ = local_88._4_4_;
        local_148._0_4_ = fVar52;
        uStack_140 = (undefined4)uStack_80;
        uStack_13c = uStack_80._4_4_;
        puVar14 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        puVar15 = &DAT_02680400;
        *puVar14 = &DAT_02680400;
        *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
        puVar14[6] = 0;
        puVar14[7] = 0;
        *(undefined8 *)((longlong)puVar14 + 0x39) = 0;
        *(undefined8 *)((longlong)puVar14 + 0x41) = 0;
        (*DAT_02680418)();
        lVar1 = *(longlong *)(unaff_RDI + 0x180);
        *(undefined8 **)(unaff_RDI + 0x180) = puVar14;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        FUN_01d38830();
        auVar41 = ZEXT416((uint)(DAT_02390d00 + fVar52));
        fVar19 = DAT_02390d00 + fVar52;
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
          auVar41._0_4_ = auVar41._0_4_ + DAT_023b1608;
          auVar41._4_12_ = auVar28._4_12_;
          fVar19 = auVar41._0_4_;
        }
        FUN_01d38830();
        param_1 = (pthread_key_t)puVar15;
        auVar43 = ZEXT416((uint)(DAT_02390124 + (float)local_88._0_4_));
        fVar19 = DAT_02390124 + (float)local_88._0_4_;
        while (fVar19 < fVar52) {
          auVar29._4_12_ = auVar43._4_12_;
          auVar29._0_4_ = (auVar43._0_4_ - (float)local_88._0_4_) / fVar18;
          auVar30._0_8_ = _powf(auVar29._0_8_);
          auVar30._8_8_ = extraout_XMM0_Qb_03;
          auVar31._4_12_ = auVar30._4_12_;
          auVar31._0_4_ = (float)auVar30._0_8_ * fVar17 + (float)local_88._4_4_;
          insertps(auVar43,auVar31,0x10);
          FUN_01d38830();
          param_1 = (pthread_key_t)puVar15;
          auVar43._0_4_ = auVar43._0_4_ + DAT_02390d34;
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
      if (*(longlong *)(unaff_RDI + 0x188) == 0) {
        puVar14 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar14 = &DAT_02680400;
        *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
        puVar14[6] = 0;
        puVar14[7] = 0;
        *(undefined8 *)((longlong)puVar14 + 0x39) = 0;
        *(undefined8 *)((longlong)puVar14 + 0x41) = 0;
        (*DAT_02680418)();
        lVar1 = *(longlong *)(unaff_RDI + 0x188);
        *(undefined8 **)(unaff_RDI + 0x188) = puVar14;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        FUN_01d38830();
        auVar50 = ZEXT416((uint)(DAT_02390124 + fVar52));
        fVar19 = DAT_02390124 + fVar52;
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
          auVar50._0_4_ = auVar50._0_4_ + DAT_02390d34;
          fVar19 = auVar50._0_4_;
        }
        auVar33 = blendps(auVar33,auVar10,1);
        FUN_01d38830(auVar33._0_8_);
        auVar33 = ZEXT416((uint)(DAT_02390d00 + fVar16));
        fVar19 = DAT_02390d00 + fVar16;
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
          auVar33._0_4_ = auVar33._0_4_ + DAT_023b1608;
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
    if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x188);
    if (lVar1 != 0) {
      plVar3 = (longlong *)*unaff_RSI;
      FUN_00d50b00();
      (**(code **)(*plVar3 + 0x3a8))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x180);
    if (lVar1 != 0) {
      plVar3 = (longlong *)*unaff_RSI;
      FUN_00d50b00();
      (**(code **)(*plVar3 + 0x3a8))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01d48b40();
    FUN_01969e40();
    if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x188);
    if (lVar1 != 0) {
      plVar3 = (longlong *)*unaff_RSI;
      FUN_00d50b00();
      (**(code **)(*plVar3 + 0x3a8))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x180);
    if (lVar1 != 0) {
      plVar3 = (longlong *)*unaff_RSI;
      FUN_00d50b00();
      (**(code **)(*plVar3 + 0x3a8))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01d48b40();
    FUN_01969e40();
    if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x180) != 0) {
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    }
    if (*(longlong *)(unaff_RDI + 0x188) != 0) {
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    }
    FUN_01d48b10();
    FUN_01d48b40();
    if (param_2 != '\0') {
      if (*(longlong *)(unaff_RDI + 0x180) != 0) {
        FUN_01968c50();
        fVar16 = (fStack_1c4 + (float)local_1a8._4_4_) * DAT_0239011c;
        auVar37._0_8_ = _logf();
        auVar37._8_8_ = extraout_XMM0_Qb_05;
        auVar38._4_12_ = auVar37._4_12_;
        auVar38._0_4_ = (((float)auVar37._0_8_ / DAT_0241c6f0) * fVar17) / DAT_02394298 + fVar16;
        auVar33 = insertps(local_1a8._0_16_,auVar38,0x10);
        FUN_01a84670(1,auVar33._0_8_);
      }
      if (*(longlong *)(unaff_RDI + 0x188) != 0) {
        FUN_01968c50();
        fVar16 = (fStack_1b4 + (float)local_148._4_4_) * DAT_0239011c;
        fVar18 = (float)_logf();
        auVar5._4_4_ = uStack_a4;
        auVar5._0_4_ = fVar17;
        auVar5._8_4_ = uStack_a0;
        auVar5._12_4_ = uStack_9c;
        auVar47._4_12_ = auVar5._4_12_;
        auVar47._0_4_ = (fVar17 * (fVar18 / DAT_0241c6f0)) / DAT_02394298 + fVar16;
        auVar33 = insertps(_local_148,auVar47,0x10);
        FUN_01a84670(auVar33._0_8_,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


