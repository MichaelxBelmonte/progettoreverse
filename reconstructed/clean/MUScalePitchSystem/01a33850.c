// Function: FUN_01a33850
// Address: 01a33850
// Size: 1673 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


uint64_t FUN_01a33850(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t *arg1;
  bool bVar7;
  float fVar8;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar10 [16];
  float fVar13;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  float fVar14;
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint64_t extraout_XMM0_Qb_03;
  float fVar15;
  float fVar18;
  float in_XMM1_Dc;
  float fVar19;
  float fVar20;
  float in_XMM1_Dd;
  float fVar21;
  float fVar22;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  float fVar23;
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  float local_128;
  float fStack_124;
  uint64_t local_e8;
  uint64_t uStack_e0;
  uint8_t local_d8 [8];
  uint64_t uStack_d0;
  int64_t *local_c0;
  char local_b8;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  float local_5c;
  uint32_t local_58;
  uint32_t local_54;
  int64_t *local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  fVar8 = (float)((uint64_t)param_2 >> 0x20);
  fVar23 = (float)param_2;
  FUN_01a58dc0();
  local_38 = local_48;
  if (local_48 == (int64_t *)0x0) {
    local_58 = 1;
    local_38 = (int64_t *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      local_58 = 0;
      if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_01a338c4;
      FUN_00d50b20();
    }
    local_58 = 0;
  }
LAB_01a338c4:
  FUN_01e42030();
  plVar1 = local_48;
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    local_5c = g_02390124;
  }
  else {
    FUN_01e42030();
    (**(code **)(*local_c0 + 0x9a0))();
    local_5c = (float)(**(code **)(*local_48 + 0x448))();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*local_38 + 0x7b0))();
  local_50 = local_48;
  if (local_48 == (int64_t *)0x0) {
    local_54 = 1;
    local_50 = (int64_t *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      local_54 = 0;
      if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_01a339bf;
      FUN_00d50b20();
    }
    local_54 = 0;
  }
LAB_01a339bf:
  FUN_01cf74c0();
  local_e8 = 0;
  uStack_e0 = 0;
  bVar7 = true;
  if (*arg1 != 0) {
    iVar5 = FUN_01d3a5a0();
    if ((iVar5 != 1) || (iVar5 = FUN_01d3b630(), iVar5 != 1)) {
      FUN_01cf74c0();
      goto LAB_01a33dd1;
    }
    if (*arg1 != 0) {
      iVar5 = FUN_01d3b620();
      if (iVar5 == 2) {
        (**(code **)(*local_38 + 0xcc0))();
        goto LAB_01a33dd1;
      }
      if (*arg1 != 0) {
        FUN_01d3abf0();
        local_e8 = FUN_01e466c0();
        bVar7 = false;
        uStack_e0 = extraout_XMM0_Qb;
      }
    }
  }
  local_d8 = (uint8_t  [8])FUN_01cf5cf0();
  uStack_d0 = extraout_XMM0_Qb_00;
  uVar9 = FUN_01e3f820();
  fVar15 = fVar23;
  fVar18 = fVar8;
  fVar19 = in_XMM1_Dc;
  fVar21 = in_XMM1_Dd;
  FUN_01e436c0();
  fVar13 = fVar15;
  fVar14 = fVar18;
  fVar20 = fVar19;
  fVar22 = fVar21;
  FUN_01e436c0();
  auVar11._0_4_ = fVar23 - fVar15;
  auVar11._4_4_ = fVar8 - fVar18;
  auVar11._8_4_ = in_XMM1_Dc - fVar19;
  auVar11._12_4_ = in_XMM1_Dd - fVar21;
  auVar10._0_4_ = fVar23 - fVar13;
  auVar10._4_4_ = fVar8 - fVar14;
  auVar10._8_4_ = in_XMM1_Dc - fVar20;
  auVar10._12_4_ = in_XMM1_Dd - fVar22;
  blendps(auVar10,auVar11,0xd);
  local_128 = (float)uVar9;
  fStack_124 = (float)((uint64_t)uVar9 >> 0x20);
  fVar23 = auVar11._0_4_ + local_128 + g_02390d00;
LAB_01a33b30:
  do {
    (**(code **)(*local_38 + 0x658))();
    plVar3 = local_48;
    plVar1 = (int64_t *)*arg1;
    if (plVar1 == local_48) {
      if (((char)arg1[1] == '\0') && (local_48 != (int64_t *)0x0)) {
        if (local_40 == '\0') {
          FUN_00d50b00();
          goto LAB_01a33bdd;
        }
        goto LAB_01a33b92;
      }
LAB_01a33b9b:
      if (*arg1 != 0) goto LAB_01a33bef;
LAB_01a33d7f:
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01a33d93:
      local_80 = *arg1;
      local_78 = '\0';
      FUN_0199eb40();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      FUN_01cf74c0();
      goto LAB_01a33dd1;
    }
    lVar2 = arg1[1];
    if (local_40 != '\0') {
      *arg1 = (int64_t)local_48;
      if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01a33b92:
      *(void*)(arg1 + 1) = 1;
      local_40 = '\0';
      goto LAB_01a33b9b;
    }
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *arg1 = (int64_t)plVar3;
    if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_01a33bdd:
    *(void*)(arg1 + 1) = 1;
    if (*arg1 == 0) goto LAB_01a33d7f;
LAB_01a33bef:
    iVar5 = FUN_01d3a5a0();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar5 == 6) goto LAB_01a33d93;
    iVar5 = FUN_01d3a5a0();
    if (iVar5 == 5) {
      if (bVar7) {
        FUN_01d3abf0();
        bVar7 = false;
        local_e8 = FUN_01e466c0();
        uStack_e0 = extraout_XMM0_Qb_01;
        goto LAB_01a33b30;
      }
      FUN_01d3abf0();
      uVar9 = FUN_01e466c0();
      fVar13 = (float)((uint64_t)uVar9 >> 0x20) - local_e8._4_4_;
      fVar14 = (float)((uint64_t)extraout_XMM0_Qb_02 >> 0x20) - uStack_e0._4_4_;
      fVar8 = ((float)uVar9 - (float)local_e8) / local_5c;
      auVar24._0_4_ = (uint)fVar8 & g_023945e0;
      auVar24._4_4_ = (uint)fVar13 & _UNK_023945e4;
      auVar24._8_4_ = (uint)((float)extraout_XMM0_Qb_02 - (float)uStack_e0) & _UNK_023945e8;
      auVar24._12_4_ = (uint)fVar14 & _UNK_023945ec;
      auVar25._4_12_ = SUB1612(auVar24 | ZEXT416(g_02394dc8),4);
      auVar25._0_4_ = SUB164(auVar24 | ZEXT416(g_02394dc8),0) + fVar8;
      auVar17._0_12_ = ZEXT812(0);
      auVar17._12_4_ = 0;
      auVar11 = roundss(auVar17,auVar25,0xb);
      auVar26._0_4_ = (uint)(fVar13 / local_5c) & g_023945e0;
      auVar26._4_4_ = (uint)fVar13 & _UNK_023945e4;
      auVar26._8_4_ = (uint)fVar14 & _UNK_023945e8;
      auVar26._12_4_ = (uint)fVar14 & _UNK_023945ec;
      auVar27._4_12_ = SUB1612(auVar26 | ZEXT416(g_02394dc8),4);
      auVar27._0_4_ = SUB164(auVar26 | ZEXT416(g_02394dc8),0) + fVar13 / local_5c;
      auVar16._0_12_ = ZEXT812(0);
      auVar16._12_4_ = 0;
      auVar17 = roundss(auVar16,auVar27,0xb);
      auVar28._4_4_ = local_d8._4_4_;
      auVar28._0_4_ = local_d8._4_4_;
      auVar28._8_4_ = uStack_d0._4_4_;
      auVar28._12_4_ = uStack_d0._4_4_;
      fVar8 = (float)local_d8._0_4_ - auVar11._0_4_ * local_5c;
      auVar29._4_12_ = auVar28._4_12_;
      auVar29._0_4_ = (float)local_d8._4_4_ - auVar17._0_4_ * local_5c;
      auVar12._4_4_ = local_d8._4_4_;
      auVar12._0_4_ = fVar8;
      auVar12._8_4_ = (uint32_t)uStack_d0;
      auVar12._12_4_ = uStack_d0._4_4_;
      _local_d8 = insertps(auVar12,auVar29,0x10);
      cVar4 = FUN_00d05410();
      if (cVar4 == '\0') {
        if ((((auVar10._4_4_ != g_0239424c) || (NAN(auVar10._4_4_) || NAN(g_0239424c))) ||
            (fVar8 < fStack_124)) || (fVar23 <= fVar8)) {
          bVar7 = false;
          local_d8 = (uint8_t  [8])FUN_01cf5cf0();
          uStack_d0 = extraout_XMM0_Qb_03;
          local_e8 = uVar9;
          uStack_e0 = extraout_XMM0_Qb_02;
          goto LAB_01a33b30;
        }
      }
      bVar7 = false;
      FUN_01cf7140();
      goto LAB_01a33b30;
    }
    iVar5 = FUN_01d3a5a0();
    bVar7 = false;
  } while (iVar5 != 4);
  FUN_01cf74c0();
  uVar6 = FUN_01d3b590();
  if ((uVar6 & 4) == 0) {
    local_68 = 0;
    lVar2 = local_38[0x82];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    local_70 = lVar2;
    uVar9 = (**(code **)(*local_38 + 0xed8))();
    if ((local_68 != '\0') && (local_70 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    local_90 = 0;
    local_88 = '\0';
    (**(code **)(*(int64_t *)local_38[0x82] + 0x380))(uVar9,&local_90);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_01a33dd1:
  if ((char)local_54 == '\0' && local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_58 == '\0') {
    FUN_00d50b20();
  }
  return 1;
}

