// Function: FUN_01e65670
// Address: 01e65670
// Size: 3492 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e65670(uint64_t param_1,uint64_t param_2,char param_3,float param_4)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  bool bVar5;
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  bool bVar10;
  code *pcVar11;
  void*puVar12;
  uint64_t in_RCX;
  uint64_t in_RDX;
  int64_t lVar13;
  void*arg1;
  int64_t *this_ptr;
  uint32_t in_R9D;
  uint64_t in_XMM0_Qb;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  float fVar21;
  uint64_t extraout_XMM0_Qb_00;
  uint32_t uVar22;
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  float fVar28;
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  float fVar29;
  uint8_t in_XMM2 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  float fVar32;
  float local_118;
  float fStack_114;
  uint32_t uStack_110;
  uint32_t uStack_10c;
  float local_78;
  float fStack_74;
  int64_t local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb;
  
  fVar29 = in_XMM2._0_4_;
  local_78 = (float)param_2;
  fStack_74 = (float)((uint64_t)param_2 >> 0x20);
  uStack_110 = (uint32_t)in_XMM0_Qb;
  uStack_10c = (uint32_t)((uint64_t)in_XMM0_Qb >> 0x20);
  fStack_114 = (float)((uint64_t)param_1 >> 0x20);
  local_118 = (float)param_1;
  switch((int)in_RDX) {
  case 9:
    (**(code **)(*this_ptr + 0x3f8))(in_RCX,0x24 - (uint)(fStack_74 < local_78),param_3,param_4);
    break;
  default:
    FUN_01cc0ca0(in_RCX,in_RDX,param_3,param_4);
    break;
  case 0xe:
    auVar8._8_8_ = in_XMM1_Qb;
    auVar8._0_8_ = param_2;
    uVar22 = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
    auVar14._4_4_ = fStack_74;
    auVar14._0_4_ = fStack_74;
    auVar14._8_4_ = uVar22;
    auVar14._12_4_ = uVar22;
    if (fStack_74 < local_78) {
      auVar15._4_12_ = auVar14._4_12_;
      auVar15._0_4_ = fStack_74 * g_0239011c;
      auVar18 = roundss(auVar15,auVar15,9);
      auVar6._8_4_ = uStack_110;
      auVar6._0_8_ = param_1;
      auVar6._12_4_ = uStack_10c;
      fVar32 = fStack_114 + auVar18._0_4_;
      auVar3._4_4_ = fStack_114;
      auVar3._0_4_ = fVar32;
      auVar3._8_4_ = uStack_10c;
      auVar3._12_4_ = uStack_10c;
      auVar18 = insertps(auVar6,auVar3,0x10);
      auVar23 = blendps(g_023b45e0,auVar8,1);
      FUN_01d39800(auVar18._0_8_,auVar23._0_8_);
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      lVar13 = this_ptr[0x1b];
      if (lVar13 != 0) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (lVar13 != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
      if (param_3 == '\0') {
        lVar13 = this_ptr[0x18];
        if (lVar13 != 0) {
          FUN_00d50b00();
        }
        FUN_01d488d0();
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        lVar13 = this_ptr[0x19];
        if (lVar13 != 0) {
          FUN_00d50b00();
        }
        FUN_01d488d0();
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
      }
      if ((fVar29 != 0.0) || (NAN(fVar29))) {
        FUN_01d48370();
        auVar9._8_8_ = in_XMM1_Qb;
        auVar9._0_8_ = param_2;
        auVar20._4_12_ = auVar9._4_12_;
        auVar20._0_4_ = local_78 * fVar29;
        blendps(auVar9,auVar20,1);
        (**(code **)(*(int64_t *)*arg1 + 0x390))();
        (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
        FUN_01d48390();
      }
      auVar7._8_4_ = uStack_110;
      auVar7._0_8_ = param_1;
      auVar7._12_4_ = uStack_10c;
      auVar31._4_12_ = auVar7._4_12_;
      auVar31._0_4_ = local_118 + g_02390d2c;
      blendps(ZEXT416((uint)((g_0240cdd8 + local_78 + g_02390d00) * fVar29)),g_023b1620,0xe);
      insertps(auVar31,fVar32,0x10);
      (**(code **)(*(int64_t *)*arg1 + 0x3c0))();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
    break;
  case 0xf:
    FUN_01d48370();
    FUN_01d48b10();
    bVar5 = g_023b169c < local_78;
    if (param_3 == '\0') {
      lVar13 = this_ptr[0x2e];
      if (lVar13 != 0) goto LAB_01e6597a;
LAB_01e65b2c:
      bVar10 = true;
      lVar13 = 0;
    }
    else {
      lVar13 = this_ptr[0x2c];
      if (lVar13 == 0) goto LAB_01e65b2c;
LAB_01e6597a:
      FUN_00d50b00();
      bVar10 = false;
    }
    FUN_01d488d0();
    ___sincosf_stret((g_02390118 + fVar29) * g_024204d0);
    puVar12 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar12 = &g_02680400;
    *(void*)((int64_t)puVar12 + 0xc) = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
    *(void*)((int64_t)puVar12 + 0x39) = 0;
    *(void*)((int64_t)puVar12 + 0x41) = 0;
    pcVar11 = g_02680418;
    (*g_02680418)();
    puVar12 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar12 = &g_02680400;
    *(void*)((int64_t)puVar12 + 0xc) = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
    *(void*)((int64_t)puVar12 + 0x39) = 0;
    *(void*)((int64_t)puVar12 + 0x41) = 0;
    (*pcVar11)();
    auVar30._4_12_ = in_XMM2._4_12_;
    auVar26._4_4_ = fStack_114;
    auVar26._0_4_ = fStack_114;
    auVar26._8_4_ = uStack_10c;
    auVar26._12_4_ = uStack_10c;
    auVar30._0_4_ = (float)((int)fStack_74 / 2) + g_023b1d84 + g_02394244;
    auVar27._4_12_ = auVar26._4_12_;
    auVar27._0_4_ = fStack_114 + fStack_74 * g_0239011c;
    auVar19._0_12_ = ZEXT812(0);
    auVar19._12_4_ = 0;
    auVar2._4_4_ = fStack_114;
    auVar2._0_4_ = local_118 + fStack_74 * g_0239011c;
    auVar2._8_4_ = uStack_110;
    auVar2._12_4_ = uStack_10c;
    roundss(auVar19,auVar2,9);
    auVar18 = roundss(auVar27,auVar27,9);
    FUN_01d39310(&g_02421d80,auVar18._0_8_,auVar30._0_8_,
                 *(void*)
                  (&g_02421d80 + (uint64_t)(-(uint)(param_4 == g_02390124) & 1) * 4));
    FUN_01d39310();
    FUN_01d48b40();
    g_02802fb0 = 0;
    FUN_01d488d0();
    fVar29 = *(float *)(&g_0240cd98 + (uint64_t)bVar5 * 4);
    if (param_3 != '\0') {
      g_02802fb0 = 0;
      FUN_01d48b40();
      FUN_01cfc6a0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
      FUN_01e63b70(g_02802fb0,0xf,1,in_R9D);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d48b10();
      FUN_01d48b40(g_0239011c * fVar29 * g_02394244);
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      FUN_01d48b10();
    }
    g_02802fb0 = 1;
    FUN_01d48b40();
    FUN_01e63b70(g_02802fb0,0xf,param_3,in_R9D);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    FUN_01d48b40();
    FUN_01d48390();
    FUN_00d50b20();
    FUN_00d50b20();
    if (!bVar10 && lVar13 != 0) {
      FUN_00d50b20();
    }
    break;
  case 0x23:
    auVar24._8_8_ = in_XMM1_Qb;
    auVar24._0_8_ = param_2;
    if (local_78 < fStack_74 * g_02390d2c) {
      return;
    }
    auVar16._0_8_ = (**(code **)(*this_ptr + 0x548))();
    auVar16._8_8_ = extraout_XMM0_Qb;
    param_4 = param_4 * auVar24._0_4_;
    fVar28 = auVar24._4_4_;
    fVar32 = fVar28;
    if (fVar28 <= param_4) {
      fVar32 = param_4;
    }
    auVar1._4_4_ = fVar28;
    auVar1._0_4_ = fVar32;
    auVar1._8_4_ = auVar24._12_4_;
    auVar1._12_4_ = auVar24._12_4_;
    auVar18 = blendps(auVar24,auVar1,1);
    auVar17._4_12_ = auVar16._4_12_;
    auVar17._0_4_ = (float)auVar16._0_8_ + (auVar24._0_4_ - fVar32) * fVar29;
    FUN_00d05530(auVar17._0_8_,auVar18._0_8_);
    FUN_01d39800();
    if (local_40 == 0) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    FUN_01e63b70(g_02802fb0,0x23,param_3,in_R9D);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
    goto LAB_01e660fb;
  case 0x24:
    auVar18._8_8_ = in_XMM1_Qb;
    auVar18._0_8_ = param_2;
    if (fStack_74 < g_02390d2c * local_78) {
      return;
    }
    auVar23._0_8_ = (**(code **)(*this_ptr + 0x548))();
    auVar23._8_8_ = extraout_XMM0_Qb_00;
    fVar28 = auVar18._4_4_;
    fVar32 = auVar18._0_4_;
    if (auVar18._0_4_ <= param_4 * fVar28) {
      fVar32 = param_4 * fVar28;
    }
    fVar21 = (float)((uint64_t)auVar23._0_8_ >> 0x20);
    uVar22 = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
    auVar25._4_4_ = fVar28;
    auVar25._0_4_ = fVar32;
    auVar25._8_4_ = auVar18._8_4_;
    auVar25._12_4_ = auVar18._12_4_;
    auVar25 = insertps(auVar18,auVar25,0x10);
    auVar4._4_4_ = fVar21;
    auVar4._0_4_ = fVar21 + (fVar28 - fVar32) * fVar29;
    auVar4._8_4_ = uVar22;
    auVar4._12_4_ = uVar22;
    auVar18 = insertps(auVar23,auVar4,0x10);
    FUN_00d05530(auVar18._0_8_,auVar25._0_8_);
    FUN_01d39800();
    if (local_40 == 0) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    FUN_01e63b70(g_02802fb0,0x24,param_3,in_R9D);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
LAB_01e660fb:
    if ((bVar5) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

