// Function: FUN_01c82c20
// Address: 01c82c20
// Size: 4898 bytes
// Class: Unknown
// String references:
//   "%0.2f"
//   "%i"
//   "%d"

void FUN_01c82c20(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  char cVar2;
  char *pcVar3;
  uint32_t uVar4;
  undefined7 uVar6;
  int64_t *plVar5;
  void*arg1;
  int64_t *this_ptr;
  int iVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  float fVar10;
  uint64_t uVar11;
  double extraout_XMM0_Qa;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar15 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_05;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  double dVar14;
  uint64_t extraout_XMM0_Qb_06;
  uint64_t extraout_XMM0_Qb_07;
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint64_t extraout_XMM0_Qb_08;
  uint64_t extraout_XMM0_Qb_09;
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint64_t extraout_XMM0_Qb_10;
  uint64_t extraout_XMM0_Qb_11;
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint64_t extraout_XMM0_Qb_12;
  uint64_t extraout_XMM0_Qb_13;
  uint64_t extraout_XMM0_Qb_14;
  float fVar27;
  uint32_t uVar41;
  uint uVar42;
  uint32_t uVar43;
  uint64_t in_XMM1_Qb;
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint64_t uVar44;
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint uVar40;
  uint uVar45;
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  uint8_t auVar39 [16];
  uint32_t uVar46;
  int64_t *local_228;
  char local_220;
  int64_t local_128;
  char local_120;
  double local_118;
  int64_t *local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  int64_t *local_c0;
  uint8_t local_b8 [16];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  uint8_t local_98 [16];
  uint32_t local_7c;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  void*local_68;
  uint64_t local_60;
  float local_54;
  int64_t *local_50;
  char local_48 [8];
  int64_t *local_40;
  char local_38 [8];
  
  uStack_70 = in_XMM1_Qb;
  local_78 = (uint8_t  [8])param_2;
  local_a8 = (float)param_1;
  fStack_a4 = (float)((uint64_t)param_1 >> 0x20);
  fStack_a0 = (float)in_XMM0_Qb;
  fStack_9c = (float)((uint64_t)in_XMM0_Qb >> 0x20);
  (**(code **)(*this_ptr + 0x640))();
  plVar8 = local_40;
  pcVar3 = local_48;
  if (local_38[0] != '\0') {
    pcVar3 = local_38;
  }
  local_48[0] = local_38[0];
  *pcVar3 = '\0';
  if ((local_38[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar11 = FUN_01e3f820();
  local_b8._8_8_ = in_XMM1_Qb;
  local_b8._0_8_ = param_2;
  auVar15._8_4_ = (int)extraout_XMM0_Qb;
  auVar15._0_8_ = uVar11;
  auVar15._12_4_ = (int)((uint64_t)extraout_XMM0_Qb >> 0x20);
  local_98._4_12_ = auVar15._4_12_;
  local_98._0_4_ = (float)uVar11 + g_023b1698 + (float)param_2;
  auVar15 = blendps(ZEXT416(g_023b16a0),local_b8,2);
  this_ptr[0x2c] = local_98._0_8_;
  this_ptr[0x2d] = auVar15._0_8_;
  FUN_01d48370();
  plVar5 = (int64_t *)*arg1;
  FUN_01e3f820();
  (**(code **)(*plVar5 + 0x390))();
  FUN_01cfc6a0();
  local_108 = local_40;
  local_100 = 0;
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_100 = '\x01';
  FUN_01d488d0();
  if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar5 = (int64_t *)*arg1;
  FUN_01e3f820();
  (**(code **)(*plVar5 + 0x3b0))();
  uVar11 = FUN_00d05530();
  local_a8 = SUB84(local_78,0);
  fStack_a4 = (float)((uint64_t)local_78 >> 0x20);
  fStack_a0 = (float)uStack_70;
  fStack_9c = (float)((uint64_t)uStack_70 >> 0x20);
  local_78 = (uint8_t  [8])uVar11;
  FUN_01e3f820();
  local_78 = (uint8_t  [8])FUN_00d052e0();
  uStack_70 = extraout_XMM0_Qb_00;
  auVar15 = blendps(local_b8,g_023b16c0,0xd);
  (**(code **)(*(int64_t *)*arg1 + 0x390))();
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_228 + 0x370))();
  FUN_01d44d80();
  local_f8 = local_40;
  local_f0 = 0;
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_f0 = '\x01';
  FUN_01d48a10();
  if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_220 != '\0') && (local_228 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48ad0();
  local_54 = (float)FUN_01d43b70();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  auVar20._0_8_ = FUN_01e3f820();
  auVar20._8_8_ = extraout_XMM0_Qb_01;
  local_98 = blendps(ZEXT416((uint)(g_0240d174 + auVar15._0_4_ + (float)auVar20._0_8_ + 0.0)),
                     auVar20,0xe);
  auVar15 = blendps(auVar15,g_0241ee40,0xd);
  local_b8 = auVar15;
  cVar2 = FUN_00d054a0();
  dVar14 = extraout_XMM0_Qa;
  if (cVar2 == '\0') goto LAB_01c83d52;
  local_50 = plVar8;
  if (((double)this_ptr[0x2a] != 0.0) || (local_7c = g_0241ee30, NAN((double)this_ptr[0x2a]))) {
    uVar12 = FUN_01c4d600();
    auVar28._0_8_ = CONCAT44(_UNK_023945e4,g_023945e0) & uVar12;
    auVar28._8_8_ = CONCAT44(_UNK_023945ec,_UNK_023945e8) & extraout_XMM0_Qb_02;
    auVar29._4_12_ = SUB1612(auVar28 | g_023945f0,4);
    auVar29._0_4_ = SUB164(auVar28 | g_023945f0,0) + (float)uVar12;
    auVar15 = roundss(ZEXT816(0),auVar29,0xb);
    local_7c = auVar15._0_4_;
  }
  (**(code **)(*plVar8 + 0x3a0))();
  plVar5 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_c8 = plVar5;
  (**(code **)(*plVar8 + 0x490))(1,0x11,0);
  local_c0 = local_40;
  if (((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_38[0] != '\0' && (local_40 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_01d488d0();
  uVar11 = CONCAT44(fStack_a4,local_a8);
  uVar44 = CONCAT44(fStack_9c,fStack_a0);
  uVar13 = FUN_00d05360();
  local_a8 = (float)uVar13;
  fStack_a4 = (float)((uint64_t)uVar13 >> 0x20);
  fStack_a0 = (float)extraout_XMM0_Qb_03;
  fStack_9c = (float)((uint64_t)extraout_XMM0_Qb_03 >> 0x20);
  uStack_70 = uVar44;
  local_78 = (uint8_t  [8])uVar11;
  *(void*)((int64_t)this_ptr + 0x15c) = 0x32;
  FUN_01d48b40();
  local_118 = g_02395720;
  uVar11 = FUN_01c4d600();
  local_54 = local_54 + local_54;
  auVar30._0_4_ = g_023945e0 & (uint)(float)uVar11;
  auVar30._4_4_ = _UNK_023945e4 & (uint)((uint64_t)uVar11 >> 0x20);
  auVar30._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_04;
  auVar30._12_4_ = _UNK_023945ec & (uint)((uint64_t)extraout_XMM0_Qb_04 >> 0x20);
  auVar31._4_12_ = SUB1612(auVar30 | g_023945f0,4);
  auVar31._0_4_ = SUB164(auVar30 | g_023945f0,0) + (float)uVar11;
  auVar15 = roundss(ZEXT816(0),auVar31,0xb);
  local_b8._0_4_ = auVar15._0_4_;
  FUN_01d489d0();
  FUN_01d488d0();
  local_78._4_4_ = (float)local_78._4_4_ + fStack_a4;
  local_78._0_4_ = (float)local_78._0_4_ + local_a8;
  uStack_70._0_4_ = (float)uStack_70 + fStack_a0;
  uStack_70._4_4_ = uStack_70._4_4_ + fStack_9c;
  uVar40 = 0;
  uVar42 = 0;
  uVar45 = 0;
  fVar27 = (float)local_b8._0_4_;
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  uVar11 = FUN_01d488d0();
  local_60 = 0x7800000001;
  local_68 = &g_024cc6f0;
  FUN_00d8cb40(uVar11,&local_68);
  plVar8 = local_40;
  if (((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_38[0] != '\0' && (local_40 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  local_110 = plVar8;
  FUN_01d48ad0();
  local_98._0_8_ = FUN_01d43d10();
  local_98._8_8_ = extraout_XMM0_Qb_05;
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = (int64_t *)*arg1;
  fVar10 = (float)FUN_01e3f820();
  fVar27 = (fVar27 * g_0239011c + fVar10) - (float)local_98._0_4_ * g_0239011c;
  auVar16._0_4_ = g_023945e0 & (uint)fVar27;
  auVar16._4_4_ = _UNK_023945e4 & uVar40;
  auVar16._8_4_ = _UNK_023945e8 & uVar42;
  auVar16._12_4_ = _UNK_023945ec & uVar45;
  auVar17._4_12_ = SUB1612(auVar16 | g_023945f0,4);
  auVar17._0_4_ = SUB164(auVar16 | g_023945f0,0) + fVar27;
  auVar15 = roundss(auVar17,auVar17,0xb);
  (**(code **)(*plVar8 + 0x3f0))(auVar15._0_8_,g_023b1608 + (float)local_b8._0_4_);
  auVar32._4_4_ = fStack_a4;
  auVar32._0_4_ = fStack_a4;
  auVar32._8_4_ = fStack_9c;
  auVar32._12_4_ = fStack_9c;
  local_a8 = (float)local_78._4_4_ + g_02390d00 + g_02390124;
  auVar33._4_12_ = auVar32._4_12_;
  auVar33._0_4_ = fStack_a4 + g_02390d00;
  fStack_a4 = (float)local_78._4_4_;
  fStack_a0 = uStack_70._4_4_;
  fStack_9c = uStack_70._4_4_;
  _local_78 = auVar33;
  if ((float)local_b8._0_4_ < local_a8) {
    iVar7 = 1;
    local_98._0_8_ = g_02395720;
LAB_01c833f4:
    while( true ) {
      fVar27 = (float)iVar7 * g_02390434 + (float)local_b8._0_4_;
      if (local_78._0_4_ <= fVar27) break;
LAB_01c833f0:
      iVar7 = iVar7 + 1;
    }
    if (fVar27 < local_a8) {
      dVar14 = (double)FUN_01c5c4d0();
      auVar34._8_8_ = extraout_XMM0_Qb_06 & _UNK_023945b8 | _UNK_023945c8;
      auVar34._0_8_ =
           (double)((uint64_t)(dVar14 * g_023908d0) & g_023945b0 | g_023945c0) +
           dVar14 * g_023908d0;
      auVar15 = roundsd(ZEXT816(0),auVar34,0xb);
      dVar14 = auVar15._0_8_ * g_02411100;
      if ((dVar14 == (double)local_98._0_8_) && (!NAN(dVar14) && !NAN((double)local_98._0_8_)))
      goto LAB_01c833f0;
      local_98._0_8_ = dVar14;
      uVar12 = FUN_01c4d600();
      auVar35._0_8_ = uVar12 & CONCAT44(_UNK_023945e4,g_023945e0);
      auVar35._8_8_ = extraout_XMM0_Qb_07 & CONCAT44(_UNK_023945ec,_UNK_023945e8);
      auVar36._4_12_ = SUB1612(auVar35 | g_023945f0,4);
      auVar36._0_4_ = SUB164(auVar35 | g_023945f0,0) + (float)uVar12;
      auVar15 = roundss(ZEXT816(0),auVar36,0xb);
      FUN_01d489d0();
      FUN_01d488d0();
      auVar20 = ZEXT416((uint)auVar15._0_4_);
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      FUN_01d488d0();
      local_68 = &g_024cc6f0;
      local_60 = CONCAT44((int)(double)local_98._0_8_,1);
      FUN_00d8cb40(&g_024cc6f0,&local_68);
      plVar8 = local_40;
      if ((local_38[0] == '\0') &&
         (((local_40 != (int64_t *)0x0 && (FUN_00d50b00(), local_38[0] != '\0')) &&
          (local_40 != (int64_t *)0x0)))) {
        FUN_00d50b20();
      }
      FUN_01d48ad0();
      fVar27 = (float)FUN_01d43d10();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar5 = (int64_t *)*arg1;
      fVar10 = (float)FUN_01e3f820();
      fVar27 = (auVar20._0_4_ * g_0239011c + fVar10) - fVar27 * g_0239011c;
      auVar18._0_4_ = (uint)fVar27 & g_023945e0;
      auVar18._4_4_ = auVar20._4_4_ & _UNK_023945e4;
      auVar18._8_4_ = auVar20._8_4_ & _UNK_023945e8;
      auVar18._12_4_ = auVar20._12_4_ & _UNK_023945ec;
      auVar19._4_12_ = SUB1612(auVar18 | g_023945f0,4);
      auVar19._0_4_ = SUB164(auVar18 | g_023945f0,0) + fVar27;
      auVar20 = roundss(auVar19,auVar19,0xb);
      (**(code **)(*plVar5 + 0x3f0))(auVar20._0_8_,auVar15._0_4_ + g_023b1608);
      iVar7 = iVar7 + 1;
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_01c833f4;
    }
  }
  plVar8 = local_50;
  if ((float)local_78._0_4_ < (float)local_b8._0_4_) {
    iVar7 = 1;
LAB_01c83708:
    local_98._0_8_ = local_118;
    do {
      fVar27 = (float)iVar7 * g_023b5d70 + (float)local_b8._0_4_;
      if (fVar27 <= local_a8) {
        if (fVar27 <= (float)local_78._0_4_) break;
        dVar14 = (double)FUN_01c5c4d0();
        auVar37._8_8_ = extraout_XMM0_Qb_08 & _UNK_023945b8 | _UNK_023945c8;
        auVar37._0_8_ =
             (double)((uint64_t)(dVar14 * g_023934c8) & g_023945b0 | g_023945c0) +
             dVar14 * g_023934c8;
        auVar15 = roundsd(ZEXT816(0),auVar37,0xb);
        dVar14 = auVar15._0_8_ * g_0241eeb8;
        if ((dVar14 != (double)local_98._0_8_) || (NAN(dVar14) || NAN((double)local_98._0_8_)))
        goto LAB_01c83799;
      }
      iVar7 = iVar7 + 1;
    } while( true );
  }
  FUN_01d489d0();
  plVar5 = local_c8;
  dVar14 = (double)this_ptr[0x2a];
  auVar15 = ZEXT816(0);
  if ((dVar14 != 0.0) || (NAN(dVar14))) {
    local_78 = (uint8_t  [8])FUN_01c4d600();
    uStack_70 = extraout_XMM0_Qb_10;
    dVar14 = (double)this_ptr[0x2a];
    uVar6 = (undefined7)((uint64_t)plVar5 >> 8);
    if ((dVar14 != (double)(int)dVar14) || (NAN(dVar14) || NAN((double)(int)dVar14))) {
      local_68 = &g_024d0b28;
      local_60 = CONCAT44((float)dVar14,1);
      FUN_00d94e10(CONCAT44((int)((uint64_t)dVar14 >> 0x20),(float)dVar14),&local_68);
      plVar9 = local_40;
      if (local_40 == (int64_t *)0x0) goto LAB_01c83b35;
      uVar4 = (uint32_t)CONCAT71(uVar6,1);
      if (((local_38[0] == '\0') && (FUN_00d50b00(), local_38[0] != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = &g_024cc6f0;
      local_60 = CONCAT44((int)dVar14,1);
      FUN_00d8cb40(&g_024cc6f0,&local_68);
      plVar9 = local_40;
      if (local_40 == (int64_t *)0x0) {
LAB_01c83b35:
        uVar4 = 0;
        plVar9 = local_40;
      }
      else {
        uVar4 = (uint32_t)CONCAT71(uVar6,1);
        if (((local_38[0] == '\0') && (FUN_00d50b00(), local_38[0] != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    local_b8._0_4_ = uVar4;
    FUN_01d48ad0();
    uVar11 = FUN_01d43d10();
    local_a8 = (float)uVar11;
    fStack_a4 = (float)((uint64_t)uVar11 >> 0x20);
    fStack_a0 = (float)extraout_XMM0_Qb_11;
    fStack_9c = (float)((uint64_t)extraout_XMM0_Qb_11 >> 0x20);
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar8 + 0x390))();
    local_e8 = local_40;
    local_e0 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    plVar8 = local_50;
    local_e0 = '\x01';
    FUN_01d488d0();
    if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    auVar23._0_4_ = g_023945e0 & local_78._0_4_;
    auVar23._4_4_ = _UNK_023945e4 & local_78._4_4_;
    auVar23._8_4_ = _UNK_023945e8 & (uint)(float)uStack_70;
    auVar23._12_4_ = _UNK_023945ec & (uint)uStack_70._4_4_;
    auVar24._4_12_ = SUB1612(auVar23 | g_023945f0,4);
    auVar24._0_4_ = SUB164(auVar23 | g_023945f0,0) + (float)local_78._0_4_;
    auVar15 = roundss(ZEXT816(0),auVar24,0xb);
    local_78._0_4_ = auVar15._0_4_;
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    plVar5 = (int64_t *)*arg1;
    fVar27 = (float)FUN_01e3f820();
    fVar27 = (auVar15._0_4_ * g_0239011c + fVar27) - local_a8 * g_0239011c;
    auVar25._0_4_ = g_023945e0 & (uint)fVar27;
    auVar25._4_4_ = _UNK_023945e4 & auVar15._4_4_;
    auVar25._8_4_ = _UNK_023945e8 & auVar15._8_4_;
    auVar25._12_4_ = _UNK_023945ec & auVar15._12_4_;
    auVar26._4_12_ = SUB1612(auVar25 | g_023945f0,4);
    auVar26._0_4_ = SUB164(auVar25 | g_023945f0,0) + fVar27;
    auVar20 = roundss(auVar26,auVar26,0xb);
    auVar15 = ZEXT416((uint)((float)local_78._0_4_ + g_023b1608));
    dVar14 = (double)(**(code **)(*plVar5 + 0x3f0))(auVar20._0_8_);
    plVar5 = local_c8;
    if ((local_b8[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      dVar14 = (double)FUN_00d50b20();
    }
  }
  if (local_110 != (int64_t *)0x0) {
    dVar14 = (double)FUN_00d50b20();
  }
  if (local_c0 != (int64_t *)0x0) {
    dVar14 = (double)FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    dVar14 = (double)FUN_00d50b20();
  }
LAB_01c83d52:
  lVar1 = g_026e41f0;
  if (g_026e41f0 != 0) {
    dVar14 = (double)FUN_00d50b00();
  }
  local_128 = lVar1;
  local_120 = '\x01';
  (**(code **)(*plVar8 + 0x3b0))(dVar14,&local_128);
  local_d8 = local_40;
  local_d0 = 0;
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_d0 = '\x01';
  FUN_01d488d0();
  if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  plVar8 = (int64_t *)*arg1;
  local_b8._0_8_ = FUN_01e3f820();
  _local_78 = auVar15;
  uVar11 = FUN_01e3f820();
  local_a8 = (float)uVar11;
  fStack_a4 = (float)((uint64_t)uVar11 >> 0x20);
  fStack_a0 = (float)extraout_XMM0_Qb_12;
  fStack_9c = (float)((uint64_t)extraout_XMM0_Qb_12 >> 0x20);
  local_98 = auVar15;
  FUN_01e3f820();
  uVar4 = 0;
  uVar41 = 0;
  uVar43 = 0;
  uVar46 = 0;
  (**(code **)(*plVar8 + 0x3e0))();
  plVar8 = (int64_t *)*arg1;
  local_b8._0_8_ = FUN_01e3f820();
  local_b8._8_8_ = extraout_XMM0_Qb_13;
  local_78._4_4_ = uVar41;
  local_78._0_4_ = uVar4;
  uStack_70._0_4_ = (float)uVar43;
  uStack_70._4_4_ = (float)uVar46;
  uVar11 = FUN_01e3f820();
  local_a8 = (float)uVar11;
  fStack_a4 = (float)((uint64_t)uVar11 >> 0x20);
  fStack_a0 = (float)extraout_XMM0_Qb_14;
  fStack_9c = (float)((uint64_t)extraout_XMM0_Qb_14 >> 0x20);
  local_98._4_4_ = uVar41;
  local_98._0_4_ = uVar4;
  local_98._8_4_ = uVar43;
  local_98._12_4_ = uVar46;
  FUN_01e3f820();
  (**(code **)(*plVar8 + 0x3e0))();
  FUN_01d48390();
  if (local_48[0] != '\0') {
    FUN_00d50b20();
  }
  return;
LAB_01c83799:
  local_118 = dVar14;
  uVar12 = FUN_01c4d600();
  auVar38._0_8_ = uVar12 & CONCAT44(_UNK_023945e4,g_023945e0);
  auVar38._8_8_ = extraout_XMM0_Qb_09 & CONCAT44(_UNK_023945ec,_UNK_023945e8);
  auVar39._4_12_ = SUB1612(auVar38 | g_023945f0,4);
  auVar39._0_4_ = SUB164(auVar38 | g_023945f0,0) + (float)uVar12;
  auVar15 = roundss(ZEXT816(0),auVar39,0xb);
  local_98._0_4_ = auVar15._0_4_;
  FUN_01d489d0();
  FUN_01d488d0();
  auVar15 = ZEXT416((uint)local_98._0_4_);
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  FUN_01d488d0();
  local_68 = &g_024cc6f0;
  local_60 = CONCAT44((int)local_118,1);
  FUN_00d8cb40(&g_024cc6f0,&local_68);
  plVar5 = local_40;
  if ((local_38[0] == '\0') &&
     (((local_40 != (int64_t *)0x0 && (FUN_00d50b00(), local_38[0] != '\0')) &&
      (local_40 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_01d48ad0();
  fVar27 = (float)FUN_01d43d10();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = (int64_t *)*arg1;
  fVar10 = (float)FUN_01e3f820();
  fVar27 = (auVar15._0_4_ * g_0239011c + fVar10) - fVar27 * g_0239011c;
  auVar21._0_4_ = (uint)fVar27 & g_023945e0;
  auVar21._4_4_ = auVar15._4_4_ & _UNK_023945e4;
  auVar21._8_4_ = auVar15._8_4_ & _UNK_023945e8;
  auVar21._12_4_ = auVar15._12_4_ & _UNK_023945ec;
  auVar22._4_12_ = SUB1612(auVar21 | g_023945f0,4);
  auVar22._0_4_ = SUB164(auVar21 | g_023945f0,0) + fVar27;
  auVar15 = roundss(auVar22,auVar22,0xb);
  (**(code **)(*plVar8 + 0x3f0))(auVar15._0_8_,(float)local_98._0_4_ + g_023b1608);
  plVar8 = local_50;
  iVar7 = iVar7 + 1;
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  goto LAB_01c83708;
}

