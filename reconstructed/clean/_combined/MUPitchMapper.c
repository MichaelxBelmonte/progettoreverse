// ===================================================================
// MUPitchMapper — Complete reconstructed pseudocode
// 25 functions
// ===================================================================

// Registered properties (13):
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


// ============================================================
// 01806b70
// ============================================================
// Function: FUN_01806b70
// Address: 01806b70
// Size: 16823 bytes
// Class: MUPitchMapper
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void FUN_01806b70(void)

{
  int *piVar1;
  uint32_t uVar2;
  bool bVar3;
  size_t sVar4;
  uint uVar5;
  uint64_t uVar6;
  uint8_t uVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  code **ppcVar16;
  void*puVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  void *pvVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  void* pVar23;
  uint64_t *puVar24;
  uint64_t uVar25;
  void *pvVar26;
  int iVar27;
  int iVar28;
  int64_t lVar29;
  int64_t lVar30;
  int64_t lVar31;
  bool bVar32;
  byte bVar33;
  byte bVar34;
  int iVar35;
  int64_t lVar36;
  void*arg1;
  int64_t lVar37;
  int64_t *this_ptr;
  void**ppuVar38;
  void *in_R9;
  uint64_t uVar39;
  size_t sVar40;
  int64_t lVar41;
  void *pvVar42;
  int iVar43;
  uint uVar44;
  uint64_t uVar45;
  bool bVar46;
  uint32_t uVar47;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  uint32_t extraout_XMM0_Da_08;
  uint32_t extraout_XMM0_Da_09;
  uint32_t extraout_XMM0_Da_10;
  uint32_t extraout_XMM0_Da_11;
  float extraout_XMM0_Da_12;
  float fVar48;
  uint64_t local_3a0;
  uint8_t uVar49;
  undefined7 in_stack_fffffffffffffc69;
  int64_t local_360;
  char local_358;
  int64_t local_350;
  uint64_t local_348;
  char local_340;
  uint64_t local_338;
  char local_330;
  uint64_t local_328;
  char local_320;
  uint64_t local_318;
  char local_310;
  uint64_t local_308;
  char local_300;
  uint64_t local_2f8;
  char local_2f0;
  int64_t local_2e8;
  char local_2e0;
  uint64_t local_2d8;
  char local_2d0;
  uint64_t local_2c8;
  char local_2c0;
  uint64_t local_2b8;
  char local_2b0;
  uint64_t local_2a8;
  char local_2a0;
  int64_t local_298;
  char local_290;
  uint64_t local_288;
  char local_280;
  int64_t local_278;
  char local_270;
  int64_t local_268;
  char local_260;
  uint64_t local_258;
  char local_250;
  uint64_t local_248;
  char local_240;
  uint64_t local_238;
  char local_230;
  float local_224;
  uint64_t local_220;
  int64_t local_218;
  char local_210;
  uint64_t local_208;
  float local_1fc;
  uint64_t local_1f8;
  char local_1f0;
  void*local_1e8;
  char local_1e0;
  void*local_1d8;
  char local_1d0;
  uint64_t local_1c8;
  char local_1c0;
  uint64_t local_1b8;
  uint64_t local_1b0;
  uint64_t local_1a8;
  uint64_t local_1a0;
  int64_t local_198;
  int64_t local_190;
  uint64_t local_188;
  void *local_180;
  uint64_t local_178;
  int64_t local_170;
  int64_t local_168;
  void *local_160;
  uint64_t local_158;
  uint64_t local_150;
  uint64_t local_148;
  uint64_t local_140;
  uint64_t local_138;
  uint64_t local_130;
  uint64_t local_128;
  uint64_t local_120;
  uint64_t local_118;
  uint64_t local_110;
  uint local_104;
  void*local_100;
  char local_f8;
  uint64_t local_f0;
  int local_e8;
  int iStack_e4;
  int local_e0;
  uint64_t local_d8;
  size_t local_d0;
  uint local_cc;
  uint64_t local_c8;
  uint64_t local_c0;
  uint64_t local_b8;
  uint local_a0;
  uint local_98;
  code *local_90;
  code *local_88;
  code *local_80;
  int local_6c;
  code *local_68;
  uint64_t local_60;
  uint64_t local_58;
  code *local_50;
  uint64_t local_48;
  uint64_t local_40;
  int local_38;
  
  uVar47 = FUN_017e1dd0();
  uVar6 = local_58;
  local_90._0_1_ = (char)local_50;
  ppcVar16 = &local_90;
  if ((char)local_50 != '\0') {
    ppcVar16 = &local_50;
  }
  *(void*)ppcVar16 = 0;
  if (((char)local_50 != '\0') && (uVar6 != 0)) {
    uVar47 = FUN_00d50b20();
  }
  local_168 = *(int64_t *)(*(int64_t *)(uVar6 + 0x78) + 0x10);
  *(void*)(local_168 + 0x78) = *(void*)((int64_t)this_ptr + 0x5c);
  *(bool *)(local_168 + 0x79) = (int)this_ptr[0xc] != 0x7f;
  *(bool *)(local_168 + 0x7a) = *(int *)((int64_t)this_ptr + 100) != 0x7f;
  *(void*)(local_168 + 0x7b) = *(void*)(uVar6 + 0x98);
  local_178 = *(uint64_t *)(local_168 + 0x18);
  local_b8 = *(uint64_t *)(local_168 + 0x20);
  local_170 = *(int64_t *)(local_168 + 0x28);
  lVar36 = *(int64_t *)(local_168 + 0x30);
  lVar29 = *(int64_t *)(uVar6 + 0x50);
  if (lVar29 != 0) {
    uVar47 = FUN_00d50b00();
  }
  local_190 = lVar29;
  FUN_00c8e340(uVar47,0);
  FUN_00d216c0();
  FUN_00d216c0();
  FUN_00d216c0();
  FUN_00c8e690();
  local_120 = local_58;
  if (((char)local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_017e1b40();
  uVar45 = local_58;
  local_88._0_1_ = (char)local_50;
  ppcVar16 = &local_88;
  if ((char)local_50 != '\0') {
    ppcVar16 = &local_50;
  }
  *(void*)ppcVar16 = 0;
  if (((char)local_50 != '\0') && (uVar45 != 0)) {
    FUN_00d50b20();
  }
  local_148 = uVar45;
  FUN_017e1ac0();
  uVar45 = local_58;
  local_80._0_1_ = (char)local_50;
  ppcVar16 = &local_80;
  if ((char)local_50 != '\0') {
    ppcVar16 = &local_50;
  }
  *(void*)ppcVar16 = 0;
  if (((char)local_50 != '\0') && (uVar45 != 0)) {
    FUN_00d50b20();
  }
  local_188 = uVar45;
  FUN_017e1bf0();
  local_60 = local_58;
  if (((char)local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_017e1bc0();
  uVar45 = local_58;
  ppcVar16 = &local_50;
  if ((char)local_50 == '\0') {
    ppcVar16 = &local_68;
  }
  local_68._0_1_ = (char)local_50;
  *(void*)ppcVar16 = 0;
  if (((char)local_50 != '\0') && (uVar45 != 0)) {
    FUN_00d50b20();
  }
  local_348 = local_60;
  local_340 = '\0';
  local_130 = uVar45;
  local_338 = uVar45;
  local_330 = '\0';
  uVar47 = FUN_017e1d20();
  FUN_017e22f0(&local_338,&local_348,uVar47);
  local_1a8 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
  }
  if ((local_330 != '\0') && (local_338 != 0)) {
    FUN_00d50b20();
  }
  if ((local_340 != '\0') && (local_348 != 0)) {
    FUN_00d50b20();
  }
  local_328 = local_148;
  local_320 = '\0';
  local_318 = local_188;
  local_310 = '\0';
  uVar47 = FUN_017e1d20();
  FUN_017e22f0(&local_318,&local_328,uVar47);
  local_208 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
  }
  if ((local_310 != '\0') && (local_318 != 0)) {
    FUN_00d50b20();
  }
  if ((local_320 != '\0') && (local_328 != 0)) {
    FUN_00d50b20();
  }
  uVar47 = FUN_017154c0();
  local_3a0 = *arg1;
  uVar49 = 0;
  local_104 = FUN_018064c0(uVar47,&local_3a0);
  uVar47 = FUN_018064c0();
  local_150 = CONCAT44(local_150._4_4_,uVar47);
  FUN_00d227d0();
  iVar35 = 0x80;
  do {
    local_58 = 0;
    local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
    FUN_00d21140();
    if (((char)local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    iVar35 = iVar35 + -1;
  } while (iVar35 != 0);
  uVar47 = FUN_017e1d40();
  uVar45 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_018070c2;
    }
  }
  else if (local_58 != 0) {
LAB_018070c2:
    local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
    local_58 = 0;
    local_48 = uVar45;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    iVar35 = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar12 = -local_40._4_4_;
        }
        else {
          iVar12 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar12);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar12 = 0;
        }
        local_40 = CONCAT44(iVar12,(int)local_40);
      }
      lVar29 = (int64_t)(int)local_40;
      iVar12 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar12);
      if (*(int *)(local_48 + 0xc) <= iVar12) break;
      local_308 = *(uint64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar29 * 8);
      local_300 = '\0';
      local_58 = local_308;
      uVar13 = FUN_017e4480();
      if ((local_300 != '\0') && (local_308 != 0)) {
        FUN_00d50b20();
      }
      if ((uVar13 < 0x80) &&
         (*(int64_t *)(*(int64_t *)(local_170 + 0x10) + (uint64_t)uVar13 * 8) == 0)) {
        if (*(int *)(lVar36 + 0xc) <= iVar35) {
          puVar17 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar17 = &g_02608110;
          *(void*)((int64_t)puVar17 + 0x1c) = 0;
          *(void*)((int64_t)puVar17 + 0xc) = 0;
          *(void*)((int64_t)puVar17 + 0x12) = 0;
          FUN_00d500e0();
          local_f8 = '\0';
          local_100 = puVar17;
          FUN_00d21140();
          if ((local_f8 != '\0') && (local_100 != (void*)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        lVar29 = *(int64_t *)(lVar36 + 0x10);
        puVar17 = *(void**)(lVar29 + (int64_t)iVar35 * 8);
        *(uint *)((int64_t)puVar17 + 0xc) = uVar13;
        *(void*)((int64_t)puVar17 + 0x1c) = 0xffffffff;
        FUN_00c8e340(lVar29,0);
        uVar7 = FUN_01716980();
        *(void*)(puVar17 + 3) = uVar7;
        uVar7 = FUN_01716980();
        *(void*)((int64_t)puVar17 + 0x19) = uVar7;
        local_f8 = '\0';
        local_100 = puVar17;
        FUN_00d233f0(extraout_XMM0_Da,uVar13);
        if ((local_f8 != '\0') && (local_100 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_f8 = '\0';
        local_100 = puVar17;
        FUN_00d21140();
        if ((local_f8 != '\0') && (local_100 != (void*)0x0)) {
          FUN_00d50b20();
        }
        FUN_01715480();
        iVar35 = iVar35 + 1;
        if ((*(char *)(puVar17 + 3) != '\0') ||
           (((int)this_ptr[0xd] == 0 && (*(char *)((int64_t)puVar17 + 0x19) != '\0')))) {
          local_f8 = '\0';
          local_100 = puVar17;
          FUN_00d21140();
          if ((local_f8 != '\0') && (local_100 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_01916320();
    uVar47 = FUN_00d50b20();
  }
  uVar45 = local_60;
  if (*(int *)(local_b8 + 0xc) == 0) goto LAB_0180adde;
  if (*(char *)((int64_t)this_ptr + 0x5d) != '\0') {
    local_2f8 = local_60;
    local_2f0 = '\0';
    uVar47 = FUN_01716260();
    uVar18 = local_58;
    if (uVar45 == local_58) {
LAB_0180741e:
      if ((char)local_50 != '\0') {
LAB_01807424:
        if (local_58 != 0) {
          uVar47 = FUN_00d50b20();
        }
      }
    }
    else {
      if ((char)local_50 == '\0') {
        if (local_58 != 0) {
          uVar47 = FUN_00d50b00();
        }
        if (local_60 != 0) {
          local_60 = uVar18;
          uVar47 = FUN_00d50b20();
          goto LAB_0180741e;
        }
        local_60 = uVar18;
        if ((char)local_50 == '\0') goto LAB_01807432;
        goto LAB_01807424;
      }
      if (local_60 != 0) {
        local_60 = local_58;
        uVar47 = FUN_00d50b20();
      }
      local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
      local_60 = uVar18;
    }
LAB_01807432:
    if ((local_2f0 != '\0') && (local_2f8 != 0)) {
      uVar47 = FUN_00d50b20();
    }
    lVar36 = 0;
    do {
      iVar35 = *(int *)(local_190 + 0x18);
      iVar12 = iVar35 + 3;
      if (-1 < iVar35) {
        iVar12 = iVar35;
      }
      if (3 < iVar35) {
        lVar29 = 0;
        do {
          if (*(int *)(*(int64_t *)(local_190 + 0x10) + lVar29 * 4) == (&g_024167b0)[lVar36])
          goto LAB_01807500;
          lVar29 = lVar29 + 1;
        } while (iVar12 >> 2 != (int)lVar29);
      }
      cVar8 = FUN_01716e70();
      uVar47 = extraout_XMM0_Da_00;
      if (cVar8 != '\0') {
        cVar8 = FUN_01716e70();
        if (cVar8 != '\0') {
          FUN_01716e90();
        }
        cVar8 = FUN_01716e70();
        uVar47 = extraout_XMM0_Da_01;
        if (cVar8 != '\0') {
          uVar47 = FUN_01716e90();
        }
      }
LAB_01807500:
    } while (((*(int *)(local_190 + 0x18) < 8) ||
             (iVar35 = FUN_01717720(), uVar47 = extraout_XMM0_Da_02, 2 < iVar35)) &&
            (lVar36 = lVar36 + 1, lVar36 != 7));
  }
  lVar36 = *(int64_t *)(local_168 + 0x58);
  FUN_00c8e340(uVar47,0);
  uVar45 = local_60;
  iVar35 = FUN_01715480();
  uVar45 = *(uint64_t *)(uVar45 + 0x18);
  if ((~(uint)uVar45 & 0xf) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(~(uint)uVar45,1);
    iVar10 = iVar35 + (((uint)(iVar35 / 6 + (iVar35 >> 0x1f)) >> 1) - (iVar35 >> 0x1f)) * -0xc;
    *(uint *)(*(int64_t *)(lVar36 + 0x10) + (int64_t)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
    uVar45 = *(uint64_t *)(local_60 + 0x18);
  }
  if ((~(uint)uVar45 & 0xf0) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(~(uint)uVar45,1);
    iVar10 = iVar35 + 1;
    iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
    *(uint *)(*(int64_t *)(lVar36 + 0x10) + (int64_t)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
    uVar45 = *(uint64_t *)(local_60 + 0x18);
  }
  if ((~(uint)uVar45 & 0xf00) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(~(uint)uVar45,1);
    iVar10 = iVar35 + 2;
    iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
    *(uint *)(*(int64_t *)(lVar36 + 0x10) + (int64_t)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
    uVar45 = *(uint64_t *)(local_60 + 0x18);
  }
  if ((~(uint)uVar45 & 0xf000) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(~(uint)uVar45,1);
    iVar10 = iVar35 + 3;
    iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
    *(uint *)(*(int64_t *)(lVar36 + 0x10) + (int64_t)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
    uVar45 = *(uint64_t *)(local_60 + 0x18);
  }
  if ((~(uint)uVar45 & 0xf0000) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(~(uint)uVar45,1);
    iVar10 = iVar35 + 4;
    iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
    *(uint *)(*(int64_t *)(lVar36 + 0x10) + (int64_t)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
    uVar45 = *(uint64_t *)(local_60 + 0x18);
  }
  if ((~(uint)uVar45 & 0xf00000) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(~(uint)uVar45,1);
    iVar10 = iVar35 + 5;
    iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
    *(uint *)(*(int64_t *)(lVar36 + 0x10) + (int64_t)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
    uVar45 = *(uint64_t *)(local_60 + 0x18);
  }
  if ((~(uint)uVar45 & 0xf000000) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(~(uint)uVar45,1);
    iVar10 = iVar35 + 6;
    iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
    *(uint *)(*(int64_t *)(lVar36 + 0x10) + (int64_t)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
    uVar45 = *(uint64_t *)(local_60 + 0x18);
  }
  if ((~(uint)uVar45 & 0xf0000000) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(~(uint)uVar45,1);
    iVar10 = iVar35 + 7;
    iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
    *(uint *)(*(int64_t *)(lVar36 + 0x10) + (int64_t)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
    uVar45 = *(uint64_t *)(local_60 + 0x18);
  }
  if ((~uVar45 & 0xf00000000) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(~uVar45,1);
    iVar10 = iVar35 + 8;
    iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
    *(uint *)(*(int64_t *)(lVar36 + 0x10) + (int64_t)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
    uVar45 = *(uint64_t *)(local_60 + 0x18);
  }
  if ((~uVar45 & 0xf000000000) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(~uVar45,1);
    iVar10 = iVar35 + 9;
    iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
    *(uint *)(*(int64_t *)(lVar36 + 0x10) + (int64_t)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
    uVar45 = *(uint64_t *)(local_60 + 0x18);
  }
  if ((~uVar45 & 0xf0000000000) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(~uVar45,1);
    iVar10 = iVar35 + 10;
    iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
    *(uint *)(*(int64_t *)(lVar36 + 0x10) + (int64_t)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
    uVar45 = *(uint64_t *)(local_60 + 0x18);
  }
  if ((~uVar45 & 0xf00000000000) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(0xf00000000000,1);
    iVar10 = iVar35 + 0xb;
    iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
    *(uint *)(*(int64_t *)(lVar36 + 0x10) + (int64_t)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
  }
  uVar47 = FUN_00d50b00();
  if ((int)this_ptr[0xd] == 0) {
    local_c0 = local_60;
    if (local_130 != local_60) {
      if ((char)local_68 == '\0') {
        if (local_130 != 0) {
          FUN_00d50b00();
        }
        local_c0 = local_130;
        uVar47 = FUN_00d50b20();
      }
      else {
        local_c0 = local_130;
        uVar47 = FUN_00d50b20();
        local_68._0_1_ = '\0';
        local_c0 = local_130;
      }
    }
    FUN_00c8e340(uVar47,0);
    FUN_017e1bf0();
    local_1f8 = local_58;
    local_1f0 = 0;
    if ((char)local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
    }
    local_1f0 = '\x01';
    FUN_017e1bc0();
    local_1e8 = local_100;
    local_1e0 = 0;
    if (local_f8 == '\0') {
      if (local_100 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_f8 = '\0';
    }
    local_1e0 = '\x01';
    uVar47 = FUN_017e1d20();
    local_2e0 = '\0';
    local_2e8 = 0;
    iVar12 = FUN_01794120(&local_2e8,uVar47);
    if ((local_2e0 != '\0') && (local_2e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1e0 != '\0') && (local_1e8 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1f0 != '\0') && (local_1f8 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_017e1bf0();
    cVar8 = FUN_01716c00();
    if (((char)local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    iVar10 = -1;
    if (cVar8 != '\0') {
      FUN_017e1bc0();
      iVar10 = FUN_01715480();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_017e1bc0();
      cVar8 = FUN_01716c00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (cVar8 != '\0') {
        iVar10 = iVar10 + 3;
        iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
        iVar10 = (iVar10 >> 0x1f & 0xcU) + iVar10;
      }
      FUN_017e1bf0();
      iVar27 = FUN_01715480();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      iVar27 = iVar27 + -4;
      iVar27 = iVar27 + (((uint)(iVar27 / 6 + (iVar27 >> 0x1f)) >> 1) - (iVar27 >> 0x1f)) * -0xc;
      iVar10 = (uint)((iVar27 >> 0x1f & 0xcU) + iVar27 == iVar10) * 9 + -1;
    }
    iVar27 = iVar10 + iVar35;
    iVar27 = iVar27 + (((uint)(iVar27 / 6 + (iVar27 >> 0x1f)) >> 1) - (iVar27 >> 0x1f)) * -0xc;
    iVar27 = (iVar27 >> 0x1f & 0xcU) + iVar27;
    local_c8 = CONCAT44(local_c8._4_4_,iVar27);
    if (iVar12 == -1) {
      if (iVar10 == -1) {
        iVar35 = 0;
        uVar13 = local_104 | (uint)local_150;
        do {
          iVar12 = FUN_0171a210();
          if (iVar12 != -1) {
            iVar12 = FUN_0171a210();
            iVar12 = iVar12 % 7;
            uVar14 = (iVar12 >> 0x1f & 7U) + iVar12;
            if ((uVar14 != 0xffffffff) && ((uVar13 >> (uVar14 & 0x1f) & 1) != 0)) {
              iVar10 = *(int *)(lVar36 + 0x18);
              FUN_00c8e340(iVar12,1);
              *(int *)(*(int64_t *)(lVar36 + 0x10) + (int64_t)iVar10) = iVar35;
            }
          }
          iVar35 = iVar35 + 1;
        } while (iVar35 != 0xc);
        local_cc = 0;
      }
      else {
        local_cc = 0;
        iVar35 = 0;
        do {
          iVar12 = FUN_0171a210();
          if (iVar12 != -1) {
            iVar12 = FUN_0171a210();
            uVar13 = (iVar12 % 7 >> 0x1f & 7U) + iVar12 % 7;
            if ((uVar13 != 0xffffffff) &&
               ((((uint)local_150 | local_104) >> (uVar13 & 0x1f) & 1) != 0)) {
              uVar47 = extraout_XMM0_Da_06;
              if ((uint)local_c8 == iVar35) {
                iVar12 = -1;
                iVar10 = 0;
                uVar45 = 0xc;
                do {
                  FUN_017e1bf0();
                  uVar18 = FUN_01716980();
                  cVar8 = (char)uVar18;
                  uVar47 = extraout_XMM0_Da_07;
                  if (((char)local_50 != '\0') && (local_58 != 0)) {
                    uVar18 = FUN_00d50b20();
                    uVar47 = extraout_XMM0_Da_08;
                  }
                  if (cVar8 != '\0') {
                    iVar28 = iVar10 - iVar27;
                    iVar43 = -iVar28;
                    if (0 < iVar28) {
                      iVar43 = iVar28;
                    }
                    iVar43 = 6 - iVar43;
                    iVar28 = -iVar43;
                    if (0 < iVar43) {
                      iVar28 = iVar43;
                    }
                    uVar14 = iVar28 - 6;
                    uVar13 = -uVar14;
                    if (0 < (int)uVar14) {
                      uVar13 = uVar14;
                    }
                    uVar18 = (uint64_t)uVar13;
                    if ((int)uVar13 < (int)uVar45) {
                      uVar45 = uVar18;
                      iVar12 = iVar10;
                    }
                  }
                  iVar10 = iVar10 + 1;
                } while (iVar10 != 0xc);
                if (iVar12 == -1) goto LAB_01807f70;
                iVar10 = *(int *)(lVar36 + 0x18);
                local_cc = (uint)CONCAT71((int7)(uVar18 >> 8),1);
                FUN_00c8e340(uVar47,1);
              }
              else {
LAB_01807f70:
                iVar10 = *(int *)(lVar36 + 0x18);
                FUN_00c8e340(uVar47,1);
                iVar12 = iVar35;
              }
              *(int *)(*(int64_t *)(lVar36 + 0x10) + (int64_t)iVar10) = iVar12;
            }
          }
          iVar35 = iVar35 + 1;
        } while (iVar35 != 0xc);
      }
    }
    else {
      iVar12 = iVar12 + iVar35;
      iVar12 = iVar12 + (((uint)(iVar12 / 6 + (iVar12 >> 0x1f)) >> 1) - (iVar12 >> 0x1f)) * -0xc;
      iVar12 = (iVar12 >> 0x1f & 0xcU) + iVar12;
      if (iVar10 == -1) {
        iVar35 = 0;
        local_cc = 0;
        iVar10 = 0;
        do {
          iVar27 = FUN_0171a210();
          if (iVar27 != -1) {
            iVar27 = FUN_0171a210();
            uVar13 = (iVar27 % 7 >> 0x1f & 7U) + iVar27 % 7;
            if ((uVar13 != 0xffffffff) &&
               ((((uint)local_150 | local_104) >> (uVar13 & 0x1f) & 1) != 0)) {
              uVar47 = extraout_XMM0_Da_09;
              if (iVar12 == iVar10) {
                iVar27 = -1;
                iVar43 = 0;
                uVar13 = 0xc;
                do {
                  FUN_017e1bf0();
                  uVar45 = FUN_01716980();
                  cVar8 = (char)uVar45;
                  uVar47 = extraout_XMM0_Da_10;
                  if (((char)local_50 != '\0') && (local_58 != 0)) {
                    uVar45 = FUN_00d50b20();
                    uVar47 = extraout_XMM0_Da_11;
                  }
                  if (cVar8 != '\0') {
                    iVar11 = iVar35 + iVar43;
                    iVar28 = -iVar11;
                    if (0 < iVar11) {
                      iVar28 = iVar11;
                    }
                    iVar28 = 6 - iVar28;
                    iVar11 = -iVar28;
                    if (0 < iVar28) {
                      iVar11 = iVar28;
                    }
                    uVar15 = iVar11 - 6;
                    uVar14 = -uVar15;
                    if (0 < (int)uVar15) {
                      uVar14 = uVar15;
                    }
                    uVar45 = (uint64_t)uVar14;
                    if ((int)uVar14 < (int)uVar13) {
                      uVar13 = uVar14;
                      iVar27 = iVar43;
                    }
                  }
                  iVar43 = iVar43 + 1;
                } while (iVar43 != 0xc);
                if (iVar27 == -1) goto LAB_018080fe;
                iVar43 = *(int *)(lVar36 + 0x18);
                local_cc = (uint)CONCAT71((int7)(uVar45 >> 8),1);
                FUN_00c8e340(uVar47,1);
              }
              else {
LAB_018080fe:
                iVar43 = *(int *)(lVar36 + 0x18);
                FUN_00c8e340(uVar47,1);
                iVar27 = iVar10;
              }
              *(int *)(*(int64_t *)(lVar36 + 0x10) + (int64_t)iVar43) = iVar27;
            }
          }
          iVar10 = iVar10 + 1;
          iVar35 = iVar35 + -1;
        } while (iVar10 != 0xc);
      }
      else {
        iVar35 = 0;
        local_cc = 0;
        iVar10 = 0;
        do {
          iVar27 = FUN_0171a210();
          if (iVar27 != -1) {
            iVar27 = FUN_0171a210();
            uVar13 = (iVar27 % 7 >> 0x1f & 7U) + iVar27 % 7;
            if ((uVar13 != 0xffffffff) &&
               ((((uint)local_150 | local_104) >> (uVar13 & 0x1f) & 1) != 0)) {
              if ((iVar12 == iVar10 || (uint)local_c8 != iVar10) &&
                 (uVar47 = extraout_XMM0_Da_03, iVar12 != iVar10)) {
LAB_01807db7:
                iVar43 = *(int *)(lVar36 + 0x18);
                FUN_00c8e340(uVar47,1);
                iVar27 = iVar10;
              }
              else {
                iVar27 = -1;
                iVar43 = 0;
                uVar13 = 0xc;
                do {
                  FUN_017e1bf0();
                  uVar45 = FUN_01716980();
                  cVar8 = (char)uVar45;
                  uVar47 = extraout_XMM0_Da_04;
                  if (((char)local_50 != '\0') && (local_58 != 0)) {
                    uVar45 = FUN_00d50b20();
                    uVar47 = extraout_XMM0_Da_05;
                  }
                  if (cVar8 != '\0') {
                    iVar11 = iVar35 + iVar43;
                    iVar28 = -iVar11;
                    if (0 < iVar11) {
                      iVar28 = iVar11;
                    }
                    iVar28 = 6 - iVar28;
                    iVar11 = -iVar28;
                    if (0 < iVar28) {
                      iVar11 = iVar28;
                    }
                    uVar15 = iVar11 - 6;
                    uVar14 = -uVar15;
                    if (0 < (int)uVar15) {
                      uVar14 = uVar15;
                    }
                    uVar45 = (uint64_t)uVar14;
                    if ((int)uVar14 < (int)uVar13) {
                      uVar13 = uVar14;
                      iVar27 = iVar43;
                    }
                  }
                  iVar43 = iVar43 + 1;
                } while (iVar43 != 0xc);
                if (iVar27 == -1) goto LAB_01807db7;
                iVar43 = *(int *)(lVar36 + 0x18);
                local_cc = (uint)CONCAT71((int7)(uVar45 >> 8),1);
                FUN_00c8e340(uVar47,1);
              }
              *(int *)(*(int64_t *)(lVar36 + 0x10) + (int64_t)iVar43) = iVar27;
            }
          }
          iVar10 = iVar10 + 1;
          iVar35 = iVar35 + -1;
        } while (iVar10 != 0xc);
      }
    }
    if ((local_cc & 1) != 0) {
      local_58 = 0;
      local_50 = FUN_00e8b540;
      _qsort_r(&local_58,4,0x370b80,in_R9,(int *)CONCAT71(in_stack_fffffffffffffc69,uVar49));
    }
  }
  else {
    local_cc = 0;
    local_c0 = local_60;
  }
  uVar47 = FUN_00d242c0();
  FUN_00d242c0(uVar47,this_ptr);
  iVar35 = FUN_01715480();
  iVar12 = FUN_01715480();
  if ((int)this_ptr[0xd] == 0) {
    iVar35 = FUN_01715480();
    iVar12 = FUN_01715480();
  }
  iVar35 = iVar35 - iVar12;
  iVar12 = 6;
  if (iVar35 < 6) {
    iVar12 = iVar35;
  }
  uVar13 = (iVar35 - iVar12) + 0xb;
  iVar35 = (uVar13 % 0xc - uVar13) + iVar35;
  iVar12 = -6;
  if (-6 < iVar35) {
    iVar12 = iVar35;
  }
  uVar13 = (uint)(iVar12 - iVar35 != 0);
  uVar13 = iVar35 + (((iVar12 - iVar35) - uVar13) / 0xc + uVar13) * 0xc;
  uVar14 = -uVar13;
  if (0 < (int)uVar13) {
    uVar14 = uVar13;
  }
  local_140 = 0;
  if (uVar14 < 3) {
    local_140 = (uint64_t)uVar13;
  }
  _expf(g_024167a0 / (float)*(int *)(local_b8 + 0xc));
  iVar35 = FUN_00e7d780();
  if (6 < *(int *)(lVar36 + 0x18) + 3U) {
    local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
    local_58 = 0;
    local_48 = local_b8;
    local_40._0_4_ = -1;
    local_40._4_4_ = 0;
    local_38 = 0;
    uVar13 = (int)local_140 + 9;
    ppuVar38 = (void**)(uint64_t)uVar13;
    local_d0 = (int)local_140 - 9;
    local_118 = CONCAT44(local_118._4_4_,uVar13);
    sVar40 = local_d0;
    iVar12 = 0;
LAB_018084fa:
    iVar10 = 0;
    if (iVar12 != 0) {
      if (iVar12 < 1) {
        iVar10 = -iVar12;
        local_40._4_4_ = iVar10;
      }
      else {
        local_40._0_4_ = (int)local_40 - iVar12;
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar10 = 0;
        ppuVar38 = (void**)(local_118 & 0xffffffff);
        sVar40 = local_d0;
        local_40._4_4_ = iVar10;
      }
    }
    lVar29 = (int64_t)(int)local_40;
    local_40._0_4_ = (int)local_40 + 1;
    if ((int)local_40 < *(int *)(local_48 + 0xc)) {
      local_58 = *(uint64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar29 * 8);
      iVar27 = *(int *)(lVar36 + 0x18);
      iVar12 = iVar10;
      if (3 < iVar27) {
        iVar43 = *(int *)(local_58 + 0xc) + (int)local_140;
        bVar46 = false;
        uVar13 = 0xffffffff;
        bVar32 = false;
        iVar10 = 0;
        do {
          iVar12 = iVar27 + 3;
          if (-1 < iVar27) {
            iVar12 = iVar27;
          }
          if (3 < iVar27) {
            iVar27 = iVar43 + (((uint)(iVar43 / 6 + (iVar43 >> 0x1f)) >> 1) - (iVar43 >> 0x1f)) *
                              -0xc;
            lVar29 = 0;
            do {
              if (*(int *)(*(int64_t *)(lVar36 + 0x10) + lVar29 * 4) ==
                  (iVar27 >> 0x1f & 0xcU) + iVar27) {
                iVar12 = iVar43 - *(int *)(local_58 + 0xc);
                if (iVar12 < (int)ppuVar38) {
                  if ((int)sVar40 < iVar12) {
                    if (iVar43 - 1U < 0x7e) {
                      lVar29 = *(int64_t *)(local_58 + 0x10);
                      local_c8 = (uint64_t)*(int *)(lVar29 + 0x18);
                      FUN_00c8e340(local_c8,1);
                      *(int *)(*(int64_t *)(lVar29 + 0x10) + local_c8) = iVar43;
                      ppuVar38 = (void**)(local_118 & 0xffffffff);
                      sVar40 = local_d0;
                    }
                    iVar10 = iVar10 + 1;
                  }
                  else {
                    bVar46 = true;
                  }
                }
                else {
                  bVar32 = true;
                }
                break;
              }
              lVar29 = lVar29 + 1;
            } while (iVar12 >> 2 != (int)lVar29);
          }
          iVar12 = local_40._4_4_;
          if ((bVar46 && bVar32) || (iVar35 <= iVar10)) break;
          iVar43 = iVar43 + uVar13;
          uVar14 = 1 - uVar13;
          bVar3 = (int)uVar13 < 1;
          uVar13 = ~uVar13;
          if (bVar3) {
            uVar13 = uVar14;
          }
          iVar27 = *(int *)(lVar36 + 0x18);
        } while( true );
      }
      goto LAB_018084fa;
    }
    FUN_0180d270();
    iVar35 = *(int *)(local_b8 + 0xc);
    lVar29 = (int64_t)iVar35;
    uVar45 = *(uint64_t *)(local_168 + 0x38);
    pvVar20 = *(void **)(local_168 + 0x40);
    lVar36 = *(int64_t *)(local_168 + 0x48);
    local_160 = pvVar20;
    FUN_00c8e690();
    uVar18 = local_58;
    if (((char)local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    local_d8 = uVar18;
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    FUN_00c8e710();
    local_128 = local_58;
    if (((char)local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    uVar47 = FUN_00c92160();
    FUN_00c8e340(uVar47,0);
    uVar47 = ___bzero();
    FUN_00c8e340(uVar47,0);
    uVar47 = ___bzero();
    local_220 = 0;
    FUN_00c8e340(uVar47,0);
    local_198 = 0;
    local_350 = 0;
    lVar31 = 0;
    local_138 = uVar45;
LAB_01808883:
    FUN_00c8e340();
    uVar47 = ___bzero();
    uVar47 = FUN_00c8e340(uVar47,0);
    uVar47 = FUN_00c8e340(uVar47,0);
    lVar30 = *(int64_t *)(uVar6 + 0x68);
    if ((lVar30 != 0) && (3 < *(int *)(lVar30 + 0x18))) {
      lVar41 = 0;
      do {
        uVar2 = *(void*)(*(int64_t *)(lVar30 + 0x10) + lVar41 * 4);
        iVar12 = *(int *)(lVar36 + 0x18);
        uVar47 = FUN_00c8e340(uVar47,1);
        *(void*)(*(int64_t *)(lVar36 + 0x10) + (int64_t)iVar12) = uVar2;
        iVar12 = *(int *)(lVar30 + 0x18);
        iVar10 = iVar12 + 3;
        if (-1 < iVar12) {
          iVar10 = iVar12;
        }
        pvVar20 = (void *)(uint64_t)(uint)(iVar10 >> 2);
        lVar41 = lVar41 + 1;
      } while ((int)lVar41 < iVar10 >> 2);
    }
    lVar30 = *(int64_t *)(uVar6 + 0x60);
    if ((lVar30 != 0) && (3 < *(int *)(lVar30 + 0x18))) {
      pvVar20 = *(void **)(lVar30 + 0x10);
      lVar41 = *(int64_t *)((int64_t)local_160 + 0x10);
      lVar37 = 0;
      do {
        piVar1 = (int *)(lVar41 + (int64_t)*(int *)((int64_t)pvVar20 + lVar37 * 4) * 4);
        *piVar1 = *piVar1 + 1;
        iVar12 = *(int *)(lVar30 + 0x18);
        iVar10 = iVar12 + 3;
        if (-1 < iVar12) {
          iVar10 = iVar12;
        }
        lVar37 = lVar37 + 1;
      } while ((int)lVar37 < iVar10 >> 2);
    }
    lVar30 = *(int64_t *)(uVar6 + 0x70);
    if (lVar30 != 0) {
      uVar47 = FUN_00d50b00();
    }
    FUN_00c8e340(uVar47,0);
    _memcpy(pvVar20,(void *)(int64_t)*(int *)(lVar30 + 0x18),(size_t)ppuVar38);
    FUN_00d50b20();
    local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
    local_58 = 0;
    local_48 = local_b8;
    local_40._0_4_ = -1;
    local_40._4_4_ = 0;
    local_38 = 0;
    local_110 = CONCAT44(local_110._4_4_,0xffffffff);
    local_d0 = 0;
    local_1b8 = local_1b8 & 0xffffffff00000000;
    local_180 = (void *)((uint64_t)local_180 & 0xffffffff00000000);
    uVar13 = 0;
    local_1b0 = local_1b0 & 0xffffffff00000000;
    local_118 = local_118 & 0xffffffff00000000;
    local_158 = local_158 & 0xffffffff00000000;
    local_1a0 = local_1a0 & 0xffffffff00000000;
    iVar12 = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          local_40._4_4_ = -local_40._4_4_;
        }
        else {
          local_40._0_4_ = (int)local_40 - local_40._4_4_;
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          local_40._4_4_ = 0;
        }
      }
      lVar30 = (int64_t)(int)local_40;
      local_40._0_4_ = (int)local_40 + 1;
      if (*(int *)(local_48 + 0xc) <= (int)local_40) break;
      local_58 = *(uint64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar30 * 8);
      iVar10 = *(int *)(local_58 + 0xc);
      iVar27 = *(int *)(*(int64_t *)(*(int64_t *)(local_58 + 0x10) + 0x10) +
                       (int64_t)
                       *(int *)(*(int64_t *)(local_138 + 0x10) +
                               ((int64_t)(int)local_40 + (int64_t)local_38) * 4) * 4);
      uVar14 = (uint)local_118 & 0xff;
      if (iVar27 < iVar12) {
        uVar14 = 1;
      }
      local_118 = CONCAT44(local_118._4_4_,uVar14);
      if (((int)local_40 == *(int *)(local_48 + 0xc) + -1) &&
         (iVar43 = FUN_0171a290(), iVar43 != -1)) {
        iVar43 = FUN_0171a290();
        iVar43 = iVar43 % 7;
        uVar14 = (iVar43 >> 0x1f & 7U) + iVar43;
        if (uVar14 != 0xffffffff) {
          local_1a0 = CONCAT44(local_1a0._4_4_,(int)CONCAT71((uint7)(uint3)((uint)iVar43 >> 8),1));
          if ((((uint)local_150 >> (uVar14 & 0x1f) & 1) == 0) &&
             ((((uVar14 & 0xfffffffd) != 1 || (cVar8 = FUN_01716e70(), cVar8 != '\0')) ||
              ((local_150 & 4) == 0)))) {
            local_1a0 = local_1a0 & 0xffffffff00000000;
          }
        }
      }
      uVar19 = FUN_01717260();
      iVar43 = iVar27 >> 0x1f;
      if ((local_38 + (int)local_40 == 1) && ((int)uVar19 != -1)) {
        iVar28 = iVar27 + (((uint)(iVar27 / 6 + iVar43) >> 1) - iVar43) * -0xc;
        iVar12 = iVar12 + (((uint)(iVar12 / 6 + (iVar12 >> 0x1f)) >> 1) - (iVar12 >> 0x1f)) * -0xc;
        iVar28 = ((iVar12 >> 0x1f & 0xfffffff4U) - iVar12) + iVar28 + (iVar28 >> 0x1f & 0xcU);
        iVar12 = -iVar28;
        if (0 < iVar28) {
          iVar12 = iVar28;
        }
        iVar12 = 6 - iVar12;
        iVar28 = -iVar12;
        if (0 < iVar12) {
          iVar28 = iVar12;
        }
        iVar28 = iVar28 + -6;
        iVar12 = -iVar28;
        if (0 < iVar28) {
          iVar12 = iVar28;
        }
        if (((iVar28 == 0) || (iVar12 == 5)) || (iVar12 == (int)uVar19)) {
          local_1b0 = CONCAT44(local_1b0._4_4_,(int)CONCAT71((int7)((uint64_t)uVar19 >> 8),1));
        }
      }
      sVar40 = iVar27 - iVar10;
      if (((((int)sVar40 < (int)this_ptr[9]) ||
           (*(int *)((int64_t)this_ptr + 0x4c) < (int)sVar40)) || (iVar27 < (int)this_ptr[10]))
         || (*(int *)((int64_t)this_ptr + 0x54) < iVar27)) {
        uVar13 = 1;
      }
      cVar8 = FUN_017e4320();
      uVar13 = uVar13 & 0xff;
      if (cVar8 == '\0') {
        uVar13 = 1;
      }
      local_c8 = CONCAT44(local_c8._4_4_,uVar13);
      iVar28 = iVar27 + (((uint)(iVar27 / 6 + iVar43) >> 1) - iVar43) * -0xc;
      iVar28 = (iVar28 >> 0x1f & 0xcU) + iVar28;
      iVar12 = *(int *)(lVar36 + 0x18);
      lVar30 = (int64_t)iVar12;
      iVar43 = iVar12 + 3;
      if (-1 < lVar30) {
        iVar43 = iVar12;
      }
      if (3 < lVar30) {
        iVar43 = iVar43 >> 2;
        lVar41 = 0;
        do {
          if (*(int *)(*(int64_t *)(lVar36 + 0x10) + lVar41 * 4) == iVar28) goto LAB_01808d8e;
          lVar41 = lVar41 + 1;
        } while (iVar43 != (int)lVar41);
      }
      FUN_00c8e340(iVar43,1);
      *(int *)(*(int64_t *)(lVar36 + 0x10) + lVar30) = iVar28;
LAB_01808d8e:
      uVar45 = local_128;
      iVar12 = *(int *)(*(int64_t *)((int64_t)local_160 + 0x10) + (int64_t)iVar27 * 4);
      *(int *)(*(int64_t *)((int64_t)local_160 + 0x10) + (int64_t)iVar27 * 4) = iVar12 + 1;
      local_140 = CONCAT71(local_140._1_7_,0 < iVar12);
      sVar4 = -sVar40;
      if (0 < (int)sVar40) {
        sVar4 = sVar40;
      }
      if ((int)local_d0 < (int)sVar4) {
        local_d0 = sVar4;
      }
      iVar12 = *(int *)(local_128 + 0x18);
      FUN_00c8e340();
      *(size_t *)(*(int64_t *)(uVar45 + 0x10) + (int64_t)iVar12) = sVar40;
      pVar23 = (void*)local_110;
      if (((void*)local_110 == 0xffffffff) ||
         ((void*)local_110 == local_38 + (int)local_40)) {
        if (((int)this_ptr[0xc] == 1) && ((int)this_ptr[0xd] != 0)) {
          uVar19 = FUN_017154c0();
          local_158 = CONCAT44(local_158._4_4_,
                               (int)CONCAT71((int7)((uint64_t)uVar19 >> 8),(int)uVar19 == iVar28));
          uVar13 = (uint)local_c8;
        }
        else {
          uVar14 = local_104;
          if ((iVar27 < 0x40) && ((int)this_ptr[0xd] != 0)) {
            local_2d8 = local_60;
            local_2d0 = '\0';
            FUN_017e1da0();
            puVar17 = local_100;
            local_1d0 = 0;
            if (local_f8 == '\0') {
              if (local_100 != (void*)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_f8 = '\0';
            }
            local_1d0 = '\x01';
            local_1d8 = puVar17;
            local_2c8 = local_130;
            local_2c0 = '\0';
            FUN_017e1d20();
            FUN_017e1dd0();
            puVar24 = &local_2d8;
            ppuVar38 = &local_1d8;
            iVar12 = (**(code **)(*this_ptr + 0x3d0))(puVar24,iVar27,ppuVar38,&local_2c8);
            pVar23 = (void*)puVar24;
            if ((local_358 != '\0') && (local_360 != 0)) {
              FUN_00d50b20();
            }
            if ((local_2c0 != '\0') && (local_2c8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_1d0 != '\0') && (local_1d8 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if ((local_f8 != '\0') && (local_100 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if ((local_2d0 != '\0') && (local_2d8 != 0)) {
              FUN_00d50b20();
            }
            if (iVar12 != (int)this_ptr[0xc]) {
              *(void*)(local_168 + 0x79) = 1;
            }
            uVar14 = FUN_018064c0();
          }
          iVar12 = FUN_0171a290();
          uVar13 = (uint)local_c8;
          if (iVar12 != -1) {
            iVar12 = FUN_0171a290();
            pVar23 = iVar12 % 7;
            uVar15 = ((int)pVar23 >> 0x1f & 7U) + pVar23;
            if (uVar15 != 0xffffffff) {
              pVar23 = (void*)CONCAT71((uint7)(uint3)(pVar23 >> 8),1);
              local_158 = CONCAT44(local_158._4_4_,pVar23);
              if (((uVar14 >> (uVar15 & 0x1f) & 1) == 0) &&
                 ((((uVar15 & 0xfffffffd) != 1 || (cVar8 = FUN_01716e70(), cVar8 != '\0')) ||
                  ((uVar14 & 4) == 0)))) {
                local_158 = local_158 & 0xffffffff00000000;
              }
            }
          }
        }
        local_110 = CONCAT44(local_110._4_4_,local_38 + (int)local_40);
        iVar12 = *(int *)((int64_t)this_ptr + 0x6c);
      }
      else {
        iVar12 = *(int *)((int64_t)this_ptr + 0x6c);
        uVar13 = (uint)local_c8;
      }
      if ((iVar12 != 0) && (*(int64_t *)(uVar6 + 0xb8) != 0)) {
        pvVar20 = _pthread_getspecific(pVar23);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01531cc0();
        iVar12 = *(int *)(local_100 + 3);
        iVar43 = iVar12 + 3;
        if (-1 < iVar12) {
          iVar43 = iVar12;
        }
        iVar28 = -1;
        if (3 < iVar12) {
          lVar30 = 0;
          do {
            if (*(int *)(local_100[2] + lVar30 * 4) == iVar10) {
              iVar28 = (int)lVar30;
              break;
            }
            lVar30 = lVar30 + 1;
          } while (iVar43 >> 2 != (int)lVar30);
        }
        if ((local_f8 != '\0') && (local_100 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (iVar28 != -1) {
          iVar12 = *(int *)(local_d8 + 0x18);
          lVar30 = (int64_t)iVar12;
          iVar10 = iVar12 + 3;
          if (-1 < lVar30) {
            iVar10 = iVar12;
          }
          if (3 < lVar30) {
            iVar10 = iVar10 >> 2;
            lVar41 = 0;
            do {
              if (*(int *)(*(int64_t *)(local_d8 + 0x10) + lVar41 * 4) == iVar27)
              goto LAB_01808a80;
              lVar41 = lVar41 + 1;
            } while (iVar10 != (int)lVar41);
          }
          FUN_00c8e340(iVar10,1);
          *(int *)(*(int64_t *)(local_d8 + 0x10) + lVar30) = iVar27;
          uVar13 = (uint)local_c8;
        }
      }
LAB_01808a80:
      local_180 = (void *)CONCAT44(local_180._4_4_,(int)local_180 + (uint)(byte)local_140);
      local_1b8 = CONCAT44(local_1b8._4_4_,(int)local_1b8 + sVar4);
      iVar12 = iVar27;
    }
    FUN_0180d270();
    local_1fc = g_02390124;
    if ((int)this_ptr[0xd] != 0) {
      local_2b8 = local_148;
      local_2b0 = '\0';
      local_210 = 0;
      lVar30 = *(int64_t *)(uVar6 + 0x58);
      if (lVar30 != 0) {
        FUN_00d50b00();
      }
      local_210 = '\x01';
      local_2a8 = local_60;
      local_2a0 = '\0';
      local_290 = '\0';
      local_298 = lVar36;
      local_218 = lVar30;
      local_1fc = (float)FUN_017dd520(&local_298,&local_2a8);
      if ((local_290 != '\0') && (local_298 != 0)) {
        FUN_00d50b20();
      }
      if ((local_2a0 != '\0') && (local_2a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_210 != '\0') && (local_218 != 0)) {
        FUN_00d50b20();
      }
      if ((local_2b0 != '\0') && (local_2b8 != 0)) {
        FUN_00d50b20();
      }
    }
    if (local_120 != 0) {
      FUN_00d50b00();
    }
    lVar30 = *(int64_t *)((int64_t)local_160 + 0x10);
    lVar41 = 0;
    uVar14 = 0;
    while( true ) {
      if (*(int *)(lVar30 + lVar41 * 4) != 0) {
        lVar37 = (int64_t)(int)uVar14;
        uVar14 = uVar14 + 1;
        *(int *)(*(int64_t *)(local_120 + 0x10) + lVar37 * 4) = (int)lVar41;
      }
      if (lVar41 == 0x7e) break;
      if (*(int *)(lVar30 + 4 + lVar41 * 4) != 0) {
        lVar37 = (int64_t)(int)uVar14;
        uVar14 = uVar14 + 1;
        *(int *)(*(int64_t *)(local_120 + 0x10) + lVar37 * 4) = (int)lVar41 + 1;
      }
      lVar41 = lVar41 + 2;
    }
    local_c8 = CONCAT44(local_c8._4_4_,uVar13);
    if ((int)uVar14 < 1) {
      local_6c = 0;
      local_110 = (uint64_t)local_110._4_4_ << 0x20;
    }
    else {
      local_140 = (uint64_t)(uVar14 - 1);
      uVar45 = 0;
      local_110 = (uint64_t)local_110._4_4_ << 0x20;
      local_6c = 0;
      do {
        iVar12 = *(int *)(*(int64_t *)(local_120 + 0x10) + uVar45 * 4);
        iVar10 = FUN_0171a210();
        if (iVar10 != -1) {
          if (uVar45 != 0) {
            iVar27 = *(int *)(*(int64_t *)(local_120 + 0x10) + -4 + uVar45 * 4);
            iVar43 = FUN_0171a210();
            uVar15 = iVar12 - iVar27;
            uVar13 = -uVar15;
            if (0 < (int)uVar15) {
              uVar13 = uVar15;
            }
            if (uVar13 < 4) {
              local_110 = CONCAT44(local_110._4_4_,
                                   (void*)local_110 + (iVar10 == 1 && iVar43 == 0));
              local_6c = local_6c + (uint)(iVar10 == 8 && iVar43 == 0) +
                         (uint)(iVar43 == 2 && iVar10 == 10);
            }
          }
          if (uVar45 < local_140) {
            iVar27 = *(int *)(*(int64_t *)(local_120 + 0x10) + 4 + uVar45 * 4);
            iVar43 = FUN_0171a210();
            uVar15 = iVar12 - iVar27;
            uVar13 = -uVar15;
            if (0 < (int)uVar15) {
              uVar13 = uVar15;
            }
            if (uVar13 < 4) {
              local_110 = CONCAT44(local_110._4_4_,
                                   (void*)local_110 + (iVar10 == 3 && iVar43 == 4));
              local_6c = local_6c + (uint)(iVar43 == 2 && iVar10 == 8) +
                         (uint)(iVar10 == 10 && iVar43 == 4);
            }
          }
        }
        uVar45 = uVar45 + 1;
      } while (uVar14 != uVar45);
    }
    local_288 = local_128;
    local_280 = '\0';
    uVar47 = FUN_017dd2b0();
    uVar45 = local_c8;
    if ((local_280 != '\0') && (local_288 != 0)) {
      FUN_00d50b20();
    }
    uVar21 = FUN_00e7bcc0();
    local_58 = uVar21;
    FUN_00e7bac0();
    uVar18 = local_58;
    sVar40 = (size_t)ppuVar38;
    fVar48 = 0.0;
    if ((*(int *)((int64_t)this_ptr + 0x6c) != 0) && (*(int64_t *)(uVar6 + 0xb0) != 0)) {
      pvVar20 = _pthread_getspecific((void*)local_58);
      if (pvVar20 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01531cc0();
      uVar39 = local_58;
      local_140 = local_58;
      if ((char)local_50 == '\0') {
        if (local_58 == 0) goto LAB_018097d4;
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
LAB_018096a0:
        uVar13 = *(uint *)(uVar39 + 0x18);
        uVar15 = uVar13 + 3;
        if (-1 < (int)uVar13) {
          uVar15 = uVar13;
        }
        uVar15 = (int)uVar15 >> 2;
        local_224 = 0.0;
        if ((int)uVar14 < 1) {
          if (3 < (int)uVar13) {
            uVar14 = *(uint *)(local_d8 + 0x18);
            uVar44 = uVar14;
            if ((int)uVar14 < 0) {
              uVar44 = uVar14 + 3;
            }
            if ((uVar14 + 3 < 7) || ((int)uVar14 < 4)) {
              uVar13 = uVar15 & 7;
              if (6 < uVar15 - 1) {
                iVar12 = -(uVar15 & 0xfffffff8);
                do {
                  iVar12 = iVar12 + 8;
                } while (iVar12 != 0);
              }
              for (; uVar13 != 0; uVar13 = uVar13 - 1) {
              }
            }
            else {
              ppuVar38 = *(void***)(uVar39 + 0x10);
              iVar12 = (int)uVar44 >> 2;
              if ((uVar13 & 0xfffffffc) == 4) {
                local_224 = 0.0;
                uVar13 = 0;
              }
              else {
                uVar14 = uVar15 & 0xfffffffe;
                local_224 = 0.0;
                uVar13 = 0;
                do {
                  lVar30 = 0;
                  do {
                    if (*(int *)(*(int64_t *)(local_d8 + 0x10) + lVar30 * 4) ==
                        *(int *)((int64_t)ppuVar38 + (uint64_t)uVar13 * 4)) {
                      local_224 = local_224 + g_02390124;
                      break;
                    }
                    lVar30 = lVar30 + 1;
                  } while (iVar12 != (int)lVar30);
                  lVar30 = 0;
                  do {
                    if (*(int *)(*(int64_t *)(local_d8 + 0x10) + lVar30 * 4) ==
                        *(int *)((int64_t)ppuVar38 + (uint64_t)(uVar13 | 1) * 4)) {
                      local_224 = local_224 + g_02390124;
                      break;
                    }
                    lVar30 = lVar30 + 1;
                  } while (iVar12 != (int)lVar30);
                  uVar13 = uVar13 + 2;
                  uVar14 = uVar14 - 2;
                } while (uVar14 != 0);
              }
              if ((uVar15 & 1) != 0) {
                lVar30 = 0;
                do {
                  if (*(int *)(*(int64_t *)(local_d8 + 0x10) + lVar30 * 4) ==
                      *(int *)((int64_t)ppuVar38 + (uint64_t)uVar13 * 4)) goto LAB_0180998f;
                  lVar30 = lVar30 + 1;
                } while (iVar12 != (int)lVar30);
              }
            }
          }
        }
        else if (3 < (int)uVar13) {
          ppuVar38 = *(void***)(uVar39 + 0x10);
          uVar44 = *(uint *)(local_d8 + 0x18);
          uVar5 = uVar44;
          if ((int)uVar44 < 0) {
            uVar5 = uVar44 + 3;
          }
          if (uVar44 + 3 < 7) {
            lVar30 = *(int64_t *)(local_120 + 0x10);
            local_224 = 0.0;
            uVar39 = 0;
            do {
              iVar12 = *(int *)((int64_t)ppuVar38 + uVar39 * 4);
              uVar25 = 0;
              if (2 < (uint64_t)uVar14 - 1) {
                do {
                  if (*(int *)(lVar30 + uVar25 * 4) == iVar12) {
                    local_224 = local_224 + g_02390124;
                    if (*(int *)(lVar30 + 4 + uVar25 * 4) != iVar12) goto LAB_01809784;
LAB_018097ae:
                    local_224 = local_224 + g_02390124;
                    if (*(int *)(lVar30 + 8 + uVar25 * 4) != iVar12) goto LAB_0180978a;
LAB_018097bc:
                    local_224 = local_224 + g_02390124;
                    iVar10 = *(int *)(lVar30 + 0xc + uVar25 * 4);
                  }
                  else {
                    if (*(int *)(lVar30 + 4 + uVar25 * 4) == iVar12) goto LAB_018097ae;
LAB_01809784:
                    if (*(int *)(lVar30 + 8 + uVar25 * 4) == iVar12) goto LAB_018097bc;
LAB_0180978a:
                    iVar10 = *(int *)(lVar30 + 0xc + uVar25 * 4);
                  }
                  if (iVar10 == iVar12) {
                    local_224 = local_224 + g_02390124;
                  }
                  uVar25 = uVar25 + 4;
                } while ((uVar14 & 0xfffffffc) != uVar25);
              }
              if ((uint64_t)(uVar14 & 3) != 0) {
                uVar22 = 0;
                do {
                  fVar48 = local_224 + g_02390124;
                  if (*(int *)(lVar30 + uVar25 * 4 + uVar22 * 4) != iVar12) {
                    fVar48 = local_224;
                  }
                  local_224 = fVar48;
                  uVar22 = uVar22 + 1;
                } while ((uVar14 & 3) != uVar22);
              }
              uVar13 = (int)uVar39 + 1;
              uVar39 = (uint64_t)uVar13;
            } while ((int)uVar13 < (int)uVar15);
          }
          else if ((int)uVar44 < 4) {
            uVar13 = uVar15 & 7;
            if (6 < uVar15 - 1) {
              iVar12 = -(uVar15 & 0xfffffff8);
              do {
                iVar12 = iVar12 + 8;
              } while (iVar12 != 0);
            }
            for (; uVar13 != 0; uVar13 = uVar13 - 1) {
            }
          }
          else {
            iVar12 = (int)uVar5 >> 2;
            if ((uVar13 & 0xfffffffc) == 4) {
              local_224 = 0.0;
              uVar13 = 0;
            }
            else {
              uVar14 = uVar15 & 0xfffffffe;
              local_224 = 0.0;
              uVar13 = 0;
              do {
                lVar30 = 0;
                do {
                  if (*(int *)(*(int64_t *)(local_d8 + 0x10) + lVar30 * 4) ==
                      *(int *)((int64_t)ppuVar38 + (uint64_t)uVar13 * 4)) {
                    local_224 = local_224 + g_02390124;
                    break;
                  }
                  lVar30 = lVar30 + 1;
                } while (iVar12 != (int)lVar30);
                lVar30 = 0;
                do {
                  if (*(int *)(*(int64_t *)(local_d8 + 0x10) + lVar30 * 4) ==
                      *(int *)((int64_t)ppuVar38 + (uint64_t)(uVar13 | 1) * 4)) {
                    local_224 = local_224 + g_02390124;
                    break;
                  }
                  lVar30 = lVar30 + 1;
                } while (iVar12 != (int)lVar30);
                uVar13 = uVar13 + 2;
                uVar14 = uVar14 - 2;
              } while (uVar14 != 0);
            }
            if ((uVar15 & 1) != 0) {
              lVar30 = 0;
              do {
                if (*(int *)(*(int64_t *)(local_d8 + 0x10) + lVar30 * 4) ==
                    *(int *)((int64_t)ppuVar38 + (uint64_t)uVar13 * 4)) goto LAB_0180998f;
                lVar30 = lVar30 + 1;
              } while (iVar12 != (int)lVar30);
            }
          }
        }
      }
      else {
        if (local_58 != 0) goto LAB_018096a0;
LAB_018097d4:
        local_224 = 0.0;
      }
      goto LAB_018099a0;
    }
    goto LAB_018099dc;
  }
  goto LAB_0180adcd;
LAB_0180998f:
  local_224 = local_224 + g_02390124;
LAB_018099a0:
  sVar40 = (size_t)ppuVar38;
  iVar12 = *(int *)(local_140 + 0x18);
  iVar10 = iVar12 + 3;
  if (-1 < iVar12) {
    iVar10 = iVar12;
  }
  FUN_00d50b20();
  fVar48 = local_224 / (float)(iVar10 >> 2);
LAB_018099dc:
  lVar30 = local_198;
  if ((local_350 == 0) && (local_350 = *(int64_t *)(local_168 + 0x68), local_350 == local_198)) {
    local_350 = *(int64_t *)(local_168 + 0x70);
  }
  *(char *)(local_350 + 0x48) = (char)local_118;
  *(int *)(local_350 + 0x1c) = (int)local_180;
  *(int *)(local_350 + 0x24) = (int)local_1b8;
  *(uint64_t *)(local_350 + 0x28) = uVar21;
  *(size_t *)(local_350 + 0x30) = local_d0;
  *(uint64_t *)(local_350 + 0x34) = uVar18;
  *(void*)(local_350 + 0x3c) = uVar47;
  *(float *)(local_350 + 0x40) = fVar48;
  *(char *)(local_350 + 0x49) = (char)uVar45;
  *(byte *)(local_350 + 0x4a) = ((byte)local_158 | (byte)local_cc) & 1;
  *(char *)(local_350 + 0x4c) = (char)local_1b0;
  pvVar20 = (void *)((uint64_t)CONCAT31((int3)(local_1a0 >> 8),(byte)local_1a0 | (byte)local_cc) &
                    0xffffffffffffff01);
  *(char *)(local_350 + 0x4d) = (char)pvVar20;
  *(float *)(local_350 + 0x18) = local_1fc;
  *(void* *)(local_350 + 0x44) = (void*)local_110 - local_6c;
  fVar48 = local_1fc;
  if (*(int64_t *)(local_350 + 0x58) != 0) {
    *(void*)(local_350 + 0x58) = 0;
    fVar48 = (float)FUN_00d50b20();
  }
  uVar45 = local_138;
  *(void*)(local_350 + 0x20) = 0;
  *(void*)(local_350 + 0x4b) = 0;
  local_198 = lVar30;
  if (lVar30 != 0) {
    local_270 = '\0';
    local_268 = lVar30;
    local_260 = '\0';
    local_278 = local_350;
    iVar12 = FUN_018048e0(fVar48,local_168);
    fVar48 = extraout_XMM0_Da_12;
    if ((local_260 != '\0') && (local_268 != 0)) {
      fVar48 = (float)FUN_00d50b20();
    }
    if ((local_270 != '\0') && (local_278 != 0)) {
      fVar48 = (float)FUN_00d50b20();
    }
    lVar30 = local_350;
    if (iVar12 != -1) goto LAB_01809b7f;
  }
  FUN_00c8e340(fVar48,0);
  _memcpy(pvVar20,(void *)(int64_t)*(int *)(uVar45 + 0x18),sVar40);
  lVar30 = 0;
  local_198 = local_350;
LAB_01809b7f:
  iVar27 = (int)lVar31;
  lVar41 = (int64_t)iVar27;
  ppuVar38 = *(void***)(local_b8 + 0x10);
  iVar12 = *(int *)(ppuVar38[lVar41][2] + 0x18);
  iVar10 = iVar12 + 3;
  if (-1 < iVar12) {
    iVar10 = iVar12;
  }
  if ((int)local_220 < (iVar10 >> 2) + -1) {
    uVar13 = (int)local_220 + 1;
    local_220 = (uint64_t)uVar13;
    pvVar20 = *(void **)(uVar45 + 0x10);
    *(uint *)((int64_t)pvVar20 + lVar41 * 4) = uVar13;
  }
  else {
    lVar37 = lVar41 + 1;
    lVar31 = lVar29;
    if (lVar29 < lVar37) {
      lVar31 = lVar37;
    }
    lVar41 = lVar41 * 4 + -4;
    iVar27 = iVar27 + -1;
    do {
      if (lVar29 <= lVar37) {
        bVar34 = 0;
        bVar33 = 0;
        goto joined_r0x01809c6c;
      }
      iVar12 = *(int *)(*(int64_t *)(uVar45 + 0x10) + 8 + lVar41);
      uVar13 = *(uint *)(*(int64_t *)(*(int64_t *)((int64_t)ppuVar38 + lVar41 * 2 + 0x10) + 0x10)
                        + 0x18);
      pvVar20 = (void *)(uint64_t)uVar13;
      uVar14 = uVar13 + 3;
      if (-1 < (int)uVar13) {
        uVar14 = uVar13;
      }
      lVar41 = lVar41 + 4;
      iVar27 = iVar27 + 1;
      lVar37 = lVar37 + 1;
    } while (iVar12 == ((int)uVar14 >> 2) + -1);
    *(int *)(*(int64_t *)(uVar45 + 0x10) + 4 + lVar41) = iVar12 + 1;
    local_220 = 0;
    if (-1 < iVar27) {
      ___bzero();
    }
    lVar31 = 0;
  }
  bVar34 = 1;
  bVar33 = 1;
joined_r0x01809c6c:
  if (local_120 != 0) {
    FUN_00d50b20();
    bVar33 = bVar34;
  }
  local_350 = lVar30;
  if (!(bool)(bVar33 & (int)lVar31 < iVar35)) goto LAB_01809cef;
  goto LAB_01808883;
LAB_01809cef:
  if (local_128 != 0) {
    FUN_00d50b20();
  }
  lVar36 = local_198;
  if (local_d8 != 0) {
    FUN_00d50b20();
  }
  local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
  local_58 = 0;
  local_48 = local_b8;
  local_40 = 0xffffffff;
  local_38 = 0;
  while( true ) {
    lVar29 = (int64_t)(int)local_40;
    iVar35 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar35);
    if (*(int *)(local_48 + 0xc) <= iVar35) break;
    local_58 = *(uint64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar29 * 8);
    *(void*)(local_58 + 0x1c) =
         *(void*)
          (*(int64_t *)(*(int64_t *)(local_58 + 0x10) + 0x10) +
          (int64_t)
          *(int *)(*(int64_t *)(*(int64_t *)(lVar36 + 0x10) + 0x10) +
                  ((int64_t)iVar35 + (int64_t)local_38) * 4) * 4);
    FUN_01715480();
    if (local_40._4_4_ != 0) {
      if (local_40 < 0) {
        iVar35 = -local_40._4_4_;
      }
      else {
        local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar35 = 0;
      }
      local_40 = CONCAT44(iVar35,(int)local_40);
    }
  }
  FUN_0180d270();
  local_118 = *(int64_t *)(local_168 + 0x40);
  uVar45 = *(uint64_t *)(local_168 + 0x50);
  pvVar20 = *(void **)(local_168 + 0x60);
  FUN_00d216c0();
  FUN_00c8e340();
  ___bzero();
  FUN_00c8e340();
  ___bzero();
  if (local_178 != 0) {
    local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
    local_58 = 0;
    local_48 = local_178;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    local_158 = 0;
    local_138 = 0;
    uVar21 = 0;
    uVar18 = 0;
    local_160 = pvVar20;
    local_128 = uVar45;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar35 = -local_40._4_4_;
        }
        else {
          iVar35 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar35);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar35 = 0;
        }
        local_40 = CONCAT44(iVar35,(int)local_40);
      }
      iVar35 = (int)local_40;
      lVar36 = (int64_t)(int)local_40;
      iVar12 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar12);
      if (*(int *)(local_48 + 0xc) <= iVar12) break;
      local_58 = *(uint64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar36 * 8);
      if ((*(char *)(local_58 + 0x18) == '\0') &&
         (((int)this_ptr[0xd] != 0 || (*(char *)(local_58 + 0x19) == '\0')))) {
        uVar13 = (uint)uVar18;
        uVar39 = uVar21;
        if (iVar12 == *(int *)(local_48 + 0xc) + -1) {
          uVar14 = iVar12 + local_38;
          uVar45 = (uint64_t)uVar14;
          if (local_138 == 0) {
            fVar48 = 0.0;
            local_110 = 0x7f;
            local_158 = 0;
            local_138 = 0;
            uVar21 = 0;
            uVar39 = uVar18;
            local_b8 = uVar45;
          }
          else {
            iVar12 = *(int *)(local_138 + 0xc);
            uVar21 = (uint64_t)*(uint *)(local_138 + 0x1c);
            uVar25 = (uint64_t)(uVar13 + 1);
            local_158 = local_138;
            uVar39 = uVar18;
LAB_0180a065:
            fVar48 = (float)((int)uVar21 - iVar12);
            local_110 = 0x7f;
            local_138 = 0;
            uVar18 = uVar25;
            uVar14 = (uint)uVar45;
            local_b8 = uVar45;
          }
LAB_0180a0f0:
          iVar35 = (int)((double)fVar48 + g_023942d0);
          if (fVar48 <= 0.0) {
            iVar35 = 0;
          }
          iVar12 = (int)((double)fVar48 + g_02394dd0);
          if (0.0 <= fVar48) {
            iVar12 = iVar35;
          }
          iVar35 = (int)uVar18;
          if (iVar35 <= (int)uVar14) {
            pvVar42 = (void *)(int64_t)iVar35;
            uVar15 = uVar14 + 1;
            uVar45 = (uint64_t)uVar15;
            lVar36 = *(int64_t *)(local_178 + 0x10);
            uVar44 = uVar15 - iVar35;
            pvVar26 = pvVar42;
            for (uVar13 = uVar44 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
              lVar29 = *(int64_t *)(lVar36 + (int64_t)pvVar26 * 8);
              *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0xc) + iVar12;
              pvVar26 = (void *)((int64_t)pvVar26 + 1);
            }
            if (2 < uVar14 - iVar35) {
              do {
                lVar29 = *(int64_t *)(lVar36 + (int64_t)pvVar26 * 8);
                *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0xc) + iVar12;
                lVar29 = *(int64_t *)(lVar36 + 8 + (int64_t)pvVar26 * 8);
                *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0xc) + iVar12;
                lVar29 = *(int64_t *)(lVar36 + 0x10 + (int64_t)pvVar26 * 8);
                *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0xc) + iVar12;
                lVar29 = *(int64_t *)(lVar36 + 0x18 + (int64_t)pvVar26 * 8);
                *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0xc) + iVar12;
                pvVar26 = (void *)((int64_t)pvVar26 + 4);
              } while (uVar15 != (uint)pvVar26);
            }
            local_1b8 = uVar21;
            local_1a0 = uVar39;
            FUN_00d216c0();
            do {
              puVar17 = *(void**)(*(int64_t *)(local_178 + 0x10) + (int64_t)pvVar42 * 8);
              if (puVar17 != (void*)0x0) {
                FUN_00d50b00();
              }
              local_f8 = '\0';
              local_100 = puVar17;
              uVar47 = FUN_00d21140();
              if ((local_f8 != '\0') && (local_100 != (void*)0x0)) {
                uVar47 = FUN_00d50b20();
              }
              if (puVar17 != (void*)0x0) {
                uVar47 = FUN_00d50b20();
              }
              uVar18 = local_128;
              sVar40 = (size_t)uVar45;
              pvVar42 = (void *)((int64_t)pvVar42 + 1);
              uVar44 = uVar44 - 1;
            } while (uVar44 != 0);
            local_1b0 = (uint64_t)*(uint *)(local_128 + 0xc);
            FUN_00c8e340(uVar47,0);
            if (3 < (int)*(uint *)((int64_t)pvVar20 + 0x18)) {
              _memset_pattern16(pvVar26,(void *)((uint64_t)
                                                 ((*(uint *)((int64_t)pvVar20 + 0x18) >> 2) - 1) *
                                                 4 + 4),sVar40);
            }
            FUN_00c8e340();
            ___bzero();
            iVar35 = 1;
            if (1 < (int)local_1b0) {
              iVar35 = (int)local_1b0;
            }
            local_180 = (void *)((uint64_t)(iVar35 - 1) << 2);
            uVar45 = 0;
            local_d8 = 0;
            uVar13 = 0xfffffffe;
            do {
              local_104 = uVar13;
              ___bzero();
              if (uVar18 == 0) {
                iVar35 = 0;
                uVar47 = 0;
                uVar49 = 0;
                bVar34 = 0;
                bVar33 = 0;
                uVar7 = 0;
                sVar40 = 0;
              }
              else {
                local_f8 = '\0';
                local_100 = (void*)0x0;
                local_e8 = -1;
                iStack_e4 = 0;
                local_e0 = 0;
                local_d0 = 0;
                iVar35 = 0;
                local_140 = local_140 & 0xffffffff00000000;
                local_c8 = local_c8 & 0xffffffff00000000;
                uVar49 = 0;
                uVar21 = 0;
                bVar34 = 0;
                bVar33 = 0;
                local_150 = uVar45;
                local_f0 = uVar18;
                while( true ) {
                  if (iStack_e4 != 0) {
                    if (iStack_e4 < 1) {
                      iStack_e4 = -iStack_e4;
                    }
                    else {
                      local_e8 = local_e8 - iStack_e4;
                      FUN_00d23690();
                      local_e0 = local_e0 + iStack_e4;
                      iStack_e4 = 0;
                    }
                  }
                  lVar36 = (int64_t)local_e8;
                  local_e8 = local_e8 + 1;
                  if (*(int *)(local_f0 + 0xc) <= local_e8) break;
                  local_100 = *(void**)(*(int64_t *)(local_f0 + 0x10) + 8 + lVar36 * 8);
                  uVar45 = (int64_t)
                           *(int *)(*(int64_t *)((int64_t)pvVar20 + 0x10) +
                                   ((int64_t)local_e8 + (int64_t)local_e0) * 4) +
                           (int64_t)*(int *)((int64_t)local_100 + 0x1c);
                  iVar12 = (int)uVar45;
                  if (iVar12 < (int)uVar21) {
                    bVar33 = 1;
                  }
                  iVar10 = iVar12 - *(int *)((int64_t)local_100 + 0xc);
                  if ((((iVar10 < (int)this_ptr[9]) ||
                       (*(int *)((int64_t)this_ptr + 0x4c) < iVar10)) ||
                      (iVar12 < (int)this_ptr[10])) ||
                     (*(int *)((int64_t)this_ptr + 0x54) < iVar12)) {
                    uVar49 = 1;
                  }
                  cVar8 = FUN_017e4320();
                  if (cVar8 == '\0') {
                    uVar49 = 1;
                  }
                  iVar27 = *(int *)(*(int64_t *)(local_118 + 0x10) + uVar45 * 4);
                  *(int *)(*(int64_t *)(local_118 + 0x10) + uVar45 * 4) = iVar27 + 1;
                  if (*(char *)((int64_t)local_100 + 0x19) == '\0') {
                    bVar9 = FUN_01716980();
                    bVar9 = bVar9 ^ 1;
                  }
                  else {
                    bVar9 = FUN_01716980();
                  }
                  local_d0 = local_d0 + (0 < iVar27);
                  local_140 = CONCAT44(local_140._4_4_,(int)local_140 + (uint)bVar9);
                  iVar27 = -iVar10;
                  if (0 < iVar10) {
                    iVar27 = iVar10;
                  }
                  iVar35 = iVar35 + iVar27;
                  bVar9 = bVar34;
                  if ((int)(void*)local_110 < iVar12) {
                    bVar9 = 1;
                  }
                  if (iVar12 < (int)local_1b8) {
                    bVar9 = 1;
                  }
                  uVar13 = (uint)local_c8 & 0xff;
                  if (iVar12 == (int)local_1b8 || iVar12 == (void*)local_110) {
                    uVar13 = 1;
                  }
                  local_c8 = CONCAT44(local_c8._4_4_,uVar13);
                  if (iVar12 == (int)local_1b8 || iVar12 == (void*)local_110) {
                    bVar9 = bVar34;
                  }
                  bVar34 = bVar9;
                  uVar21 = uVar45 & 0xffffffff;
                  pvVar20 = local_160;
                }
                FUN_0180d270();
                uVar47 = (uint32_t)local_140;
                uVar45 = local_150;
                uVar7 = (uint8_t)local_c8;
                sVar40 = local_d0;
              }
              uVar21 = local_d8;
              if ((local_d8 == 0) && (uVar21 = *(uint64_t *)(local_168 + 0x68), uVar21 == uVar45))
              {
                uVar21 = *(uint64_t *)(local_168 + 0x70);
              }
              *(byte *)(uVar21 + 0x48) = bVar33 | bVar34;
              *(size_t *)(uVar21 + 0x1c) = sVar40;
              *(int *)(uVar21 + 0x24) = iVar35;
              *(void*)(uVar21 + 0x4b) = uVar7;
              *(void*)(uVar21 + 0x49) = uVar49;
              *(void*)(uVar21 + 0x20) = uVar47;
              if (*(int64_t *)(uVar21 + 0x58) != 0) {
                *(void*)(uVar21 + 0x58) = 0;
                FUN_00d50b20();
              }
              uVar18 = local_128;
              uVar39 = local_1a0;
              *(void*)(uVar21 + 0x4a) = 0;
              *(void*)(uVar21 + 0x4d) = 0;
              if (uVar45 == 0) {
LAB_0180a6c0:
                pvVar26 = local_180;
                FUN_00c8e340(local_180,0);
                _memcpy(pvVar26,(void *)(int64_t)*(int *)((int64_t)pvVar20 + 0x18),sVar40);
                uVar25 = 0;
                uVar45 = uVar21;
              }
              else {
                uVar25 = uVar21;
                if (*(char *)(uVar21 + 0x48) == '\0') {
                  if (*(char *)(uVar45 + 0x48) == '\0') goto LAB_0180a694;
                  goto LAB_0180a6c0;
                }
                if (*(char *)(uVar45 + 0x48) != '\0') {
LAB_0180a694:
                  if (*(char *)(uVar21 + 0x49) == '\0') {
                    if (*(char *)(uVar45 + 0x49) != '\0') goto LAB_0180a6c0;
                  }
                  else if (*(char *)(uVar45 + 0x49) == '\0') goto LAB_0180a6f2;
                  if (*(int *)(uVar21 + 0x1c) < *(int *)(uVar45 + 0x1c)) goto LAB_0180a6c0;
                  if (*(int *)(uVar21 + 0x1c) <= *(int *)(uVar45 + 0x1c)) {
                    if (*(char *)(uVar21 + 0x4b) == '\0') {
                      if (*(char *)(uVar45 + 0x4b) != '\0') goto LAB_0180a6c0;
                    }
                    else if (*(char *)(uVar45 + 0x4b) == '\0') goto LAB_0180a6f2;
                    if ((*(int *)(uVar45 + 0x20) < *(int *)(uVar21 + 0x20)) ||
                       ((*(int *)(uVar45 + 0x20) <= *(int *)(uVar21 + 0x20) &&
                        (*(int *)(uVar21 + 0x24) < *(int *)(uVar45 + 0x24))))) goto LAB_0180a6c0;
                  }
                }
              }
LAB_0180a6f2:
              local_d8 = uVar25;
              if ((int)local_104 < 2) {
                uVar13 = local_104 + 1;
                **(uint **)((int64_t)pvVar20 + 0x10) = uVar13;
              }
              else {
                pvVar26 = (void *)0x0;
                do {
                  if (local_180 == pvVar26) goto LAB_0180a790;
                  iVar35 = *(int *)(*(int64_t *)((int64_t)pvVar20 + 0x10) + 4 + (int64_t)pvVar26)
                  ;
                  pvVar26 = (void *)((int64_t)pvVar26 + 4);
                } while (iVar35 == 2);
                *(int *)(*(int64_t *)((int64_t)pvVar20 + 0x10) + (int64_t)pvVar26) = iVar35 + 1;
                _memset_pattern16(local_180,pvVar26,sVar40);
                uVar13 = 0xfffffffe;
              }
            } while (0 < (int)local_1b0);
LAB_0180a790:
            if (uVar18 != 0) {
              local_f8 = '\0';
              local_100 = (void*)0x0;
              local_f0 = uVar18;
              local_e0 = 0;
              lVar36 = 0xffffffff;
              while( true ) {
                iStack_e4 = 0;
                lVar36 = (int64_t)(int)lVar36 + 1;
                local_e8 = (int)lVar36;
                if (*(int *)(uVar18 + 0xc) <= local_e8) break;
                local_100 = *(void**)(*(int64_t *)(uVar18 + 0x10) + (int64_t)local_e8 * 8);
                *(int *)((int64_t)local_100 + 0x1c) =
                     *(int *)((int64_t)local_100 + 0x1c) +
                     *(int *)(*(int64_t *)(*(int64_t *)(uVar45 + 0x10) + 0x10) + lVar36 * 4);
              }
              FUN_0180d270();
            }
          }
          uVar13 = (uint)local_b8;
        }
      }
      else {
        uVar45 = local_58;
        if (local_58 == local_138) {
          uVar45 = local_138;
        }
        uVar39 = uVar18;
        uVar18 = local_138;
        if (local_138 == 0) {
          uVar39 = uVar21;
          uVar45 = local_58;
          uVar18 = local_158;
        }
        local_158 = uVar18;
        local_138 = uVar45;
        uVar13 = local_38 + iVar12;
        uVar45 = (uint64_t)uVar13;
        if (iVar12 != 0 || local_38 != 0) {
          local_b8 = uVar45;
          if (local_158 == 0) {
            uVar18 = uVar39;
            if (local_138 == 0) {
              fVar48 = 0.0;
              local_110 = 0x7f;
              local_158 = 0;
              local_138 = 0;
              uVar21 = 0;
              uVar14 = uVar13;
            }
            else {
              local_110 = (uint64_t)*(uint *)(local_138 + 0x1c);
              fVar48 = (float)(int)(*(uint *)(local_138 + 0x1c) - *(int *)(local_138 + 0xc));
              local_158 = 0;
              uVar21 = 0;
              uVar14 = local_38 + iVar35;
            }
          }
          else {
            iVar12 = *(int *)(local_158 + 0xc);
            uVar21 = (uint64_t)*(uint *)(local_158 + 0x1c);
            uVar25 = (uint64_t)((int)uVar39 + 1);
            if (local_138 == 0) goto LAB_0180a065;
            local_110 = (uint64_t)*(uint *)(local_138 + 0x1c);
            fVar48 = (float)(int)((*(uint *)(local_138 + 0x1c) + *(uint *)(local_158 + 0x1c)) -
                                 (iVar12 + *(int *)(local_138 + 0xc))) * g_0239011c;
            uVar18 = uVar25;
            uVar14 = local_38 + iVar35;
          }
          goto LAB_0180a0f0;
        }
      }
      uVar21 = uVar39 & 0xffffffff;
      uVar18 = (uint64_t)uVar13;
    }
    FUN_0180d270();
  }
  FUN_017e1d40();
  iVar35 = *(int *)(local_58 + 0xc);
  if ((char)local_50 != '\0') {
    FUN_00d50b20();
  }
  if (iVar35 != 0) {
    FUN_017e1d40();
    uVar45 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0180a8dd;
      }
    }
    else if (local_58 != 0) {
LAB_0180a8dd:
      local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
      local_58 = 0;
      local_48 = uVar45;
      local_40 = 0xffffffff;
      local_38 = 0;
      local_a0 = 0xfff0bdc0;
      local_40._4_4_ = 0;
      local_98 = 0xfff0bdc0;
      local_c8 = uVar45;
      while( true ) {
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar35 = -local_40._4_4_;
          }
          else {
            iVar35 = (int)local_40 - local_40._4_4_;
            local_40 = CONCAT44(local_40._4_4_,iVar35);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar35 = 0;
          }
          local_40 = CONCAT44(iVar35,(int)local_40);
        }
        lVar36 = (int64_t)(int)local_40;
        iVar35 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar35);
        if (*(int *)(local_48 + 0xc) <= iVar35) break;
        local_258 = *(uint64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar36 * 8);
        local_250 = '\0';
        local_58 = local_258;
        uVar13 = FUN_017e4480();
        if ((local_250 != '\0') && (local_258 != 0)) {
          FUN_00d50b20();
        }
        bVar32 = true;
        if (uVar13 < 0x80) {
          lVar36 = *(int64_t *)(*(int64_t *)(local_170 + 0x10) + (uint64_t)uVar13 * 8);
          if (lVar36 == 0) goto LAB_0180a9f0;
          uVar14 = *(uint *)(*(int64_t *)(*(int64_t *)(local_170 + 0x10) + (uint64_t)uVar13 * 8)
                            + 0x1c);
          bVar32 = false;
          cVar8 = (char)this_ptr[7];
        }
        else {
LAB_0180a9f0:
          lVar36 = 0;
          cVar8 = (char)this_ptr[7];
          uVar14 = uVar13;
        }
        if (cVar8 != '\0') {
          FUN_017e4290();
        }
        local_248 = local_58;
        local_240 = '\0';
        FUN_017e4370();
        if ((local_240 != '\0') && (local_248 != 0)) {
          FUN_00d50b20();
        }
        uVar15 = local_a0;
        if ((int)local_a0 < (int)uVar14) {
          uVar15 = uVar14;
        }
        bVar46 = local_a0 == 0xfff0bdc0;
        local_a0 = uVar15;
        if (bVar46) {
          local_a0 = uVar14;
        }
        uVar15 = local_98;
        if ((int)uVar14 < (int)local_98) {
          uVar15 = uVar14;
        }
        if (local_98 == 0xfff0bdc0) {
          uVar15 = uVar14;
        }
        if ((!bVar32) && (*(char *)(lVar36 + 0x18) != '\0')) {
          lVar36 = *(int64_t *)(uVar6 + 0x68);
          iVar10 = uVar14 + (((uint)((int)uVar14 / 6 + ((int)uVar14 >> 0x1f)) >> 1) -
                            ((int)uVar14 >> 0x1f)) * -0xc;
          iVar10 = (iVar10 >> 0x1f & 0xcU) + iVar10;
          iVar35 = *(int *)(lVar36 + 0x18);
          lVar29 = (int64_t)iVar35;
          iVar12 = iVar35 + 3;
          if (-1 < lVar29) {
            iVar12 = iVar35;
          }
          if (3 < lVar29) {
            lVar31 = 0;
            do {
              if (*(int *)(*(int64_t *)(lVar36 + 0x10) + lVar31 * 4) == iVar10) goto LAB_0180ab27;
              lVar31 = lVar31 + 1;
            } while (iVar12 >> 2 != (int)lVar31);
          }
          FUN_00c8e340();
          *(int *)(*(int64_t *)(lVar36 + 0x10) + lVar29) = iVar10;
LAB_0180ab27:
          lVar36 = *(int64_t *)(uVar6 + 0x60);
          pVar23 = *(void* *)(lVar36 + 0x18);
          lVar29 = (int64_t)(int)pVar23;
          local_98 = pVar23 + 3;
          if (-1 < lVar29) {
            local_98 = pVar23;
          }
          if (3 < lVar29) {
            local_98 = (int)local_98 >> 2;
            lVar31 = 0;
            do {
              if (*(uint *)(*(int64_t *)(lVar36 + 0x10) + lVar31 * 4) == uVar14) goto LAB_0180ab86;
              lVar31 = lVar31 + 1;
            } while (local_98 != (void*)lVar31);
          }
          FUN_00c8e340();
          *(uint *)(*(int64_t *)(lVar36 + 0x10) + lVar29) = uVar14;
        }
LAB_0180ab86:
        if ((*(int *)((int64_t)this_ptr + 0x6c) != 0) && (*(int64_t *)(uVar6 + 0xb8) != 0)) {
          pvVar20 = _pthread_getspecific(local_98);
          if (pvVar20 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01531cc0();
          iVar35 = *(int *)(local_100 + 3);
          iVar12 = iVar35 + 3;
          if (-1 < iVar35) {
            iVar12 = iVar35;
          }
          iVar10 = -1;
          if (3 < iVar35) {
            lVar36 = 0;
            do {
              if (*(uint *)(local_100[2] + lVar36 * 4) == uVar13) {
                iVar10 = (int)lVar36;
                break;
              }
              lVar36 = lVar36 + 1;
            } while (iVar12 >> 2 != (int)lVar36);
          }
          if ((local_f8 != '\0') && (local_100 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (iVar10 != -1) {
            lVar36 = *(int64_t *)(uVar6 + 0x70);
            iVar35 = *(int *)(lVar36 + 0x18);
            lVar29 = (int64_t)iVar35;
            iVar12 = iVar35 + 3;
            if (-1 < lVar29) {
              iVar12 = iVar35;
            }
            if (3 < lVar29) {
              iVar12 = iVar12 >> 2;
              lVar31 = 0;
              do {
                if (*(uint *)(*(int64_t *)(lVar36 + 0x10) + lVar31 * 4) == uVar14)
                goto LAB_0180a920;
                lVar31 = lVar31 + 1;
              } while (iVar12 != (int)lVar31);
            }
            FUN_00c8e340(iVar12,1);
            *(uint *)(*(int64_t *)(lVar36 + 0x10) + lVar29) = uVar14;
          }
        }
LAB_0180a920:
        local_98 = uVar15;
      }
      FUN_01916320();
      FUN_00d50b20();
      if ((local_a0 != 0xfff0bdc0) && (*(char *)((int64_t)this_ptr + 0x39) != '\0')) {
        FUN_017e42c0();
      }
      if ((local_98 != 0xfff0bdc0) && (*(char *)((int64_t)this_ptr + 0x3a) != '\0')) {
        FUN_017e42f0();
      }
    }
  }
  FUN_017e1d40();
  local_1c8 = local_58;
  local_1c0 = 0;
  if ((char)local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
  }
  local_1c0 = '\x01';
  local_238 = uVar6;
  local_230 = '\0';
  FUN_017dce10();
  if ((local_230 != '\0') && (local_238 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
LAB_0180adcd:
  if (local_c0 != 0) {
    FUN_00d50b20();
  }
LAB_0180adde:
  if (local_208 != 0) {
    FUN_00d50b20();
  }
  if (local_1a8 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_88 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if (local_120 != 0) {
    FUN_00d50b20();
  }
  if (local_190 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_90 != '\0') && (uVar6 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01816ee0
// ============================================================
// Function: FUN_01816ee0
// Address: 01816ee0
// Size: 6624 bytes
// Class: MUPitchMapper
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void FUN_01816ee0(uint32_t param_1,int64_t *param_2,int param_3,int param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint64_t uVar8;
  char *pcVar9;
  void *pvVar10;
  int iVar11;
  void* pVar12;
  int iVar13;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t uVar18;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  char local_res8;
  uint8_t local_1b0 [8];
  uint8_t local_1a8;
  uint8_t local_198;
  uint8_t local_190 [8];
  uint8_t local_188;
  int64_t *local_180;
  uint64_t local_178;
  char local_170;
  uint64_t local_168;
  char local_160;
  uint64_t local_158;
  char local_150;
  uint64_t local_148;
  char local_140;
  uint64_t local_138;
  char local_130;
  uint64_t local_128;
  char local_120;
  uint64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  uint64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  uint64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  char local_80 [9];
  undefined7 uStack_77;
  char local_70;
  uint64_t local_68;
  uint64_t local_58;
  char local_50 [8];
  int64_t local_48;
  uint64_t local_40;
  uint32_t local_38;
  
  local_180 = param_2;
  FUN_017e1dd0();
  local_80[0] = local_50[0];
  pcVar9 = local_80;
  if (local_50[0] != '\0') {
    pcVar9 = local_50;
  }
  *pcVar9 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = *(uint *)((int64_t)this_ptr + 0x4c) & 0xfffffffe;
  local_68 = (uint64_t)uVar5;
  iVar15 = 7;
  if (uVar5 == 6) {
    FUN_017e1bf0();
    uVar8 = FUN_01717260();
    local_68 = uVar8;
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      local_68 = FUN_00d50b20();
    }
    iVar15 = 7;
    if ((int)uVar8 != -1) {
      iVar15 = (int)uVar8;
    }
  }
  switch(param_1) {
  case 0:
    FUN_017e1a30();
    local_68 = FUN_01715480();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 1:
    FUN_017e1a60();
    local_68 = FUN_01715480();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 2:
    FUN_017e1a60();
    local_68 = FUN_017154c0();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 3:
    local_68 = FUN_01815fa0();
    break;
  case 4:
    FUN_017e1a90();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 == 0) {
      FUN_017e1a60();
      local_68 = FUN_01715480();
    }
    else {
      FUN_017e1a90();
      local_68 = FUN_01715480();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_017e1a90();
      local_e0 = 0;
      if (local_50[0] == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50[0] = '\0';
      }
      local_e0 = '\x01';
      local_e8 = local_58;
      FUN_017e1cd0();
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    break;
  case 5:
  case 6:
    FUN_017e1a60();
    cVar4 = FUN_01717530();
    cVar3 = '\x01';
    if (cVar4 == '\0') {
      FUN_017e1a60();
      cVar3 = FUN_017176e0();
      if ((local_70 != '\0') && (CONCAT71(uStack_77,local_80[8]) != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      FUN_017e1a30();
      if (local_50[0] == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50[0] = '\0';
      }
      uVar18 = FUN_017e1a60();
      lVar1 = CONCAT71(uStack_77,local_80[8]);
      if (local_70 == '\0') {
        if (lVar1 != 0) {
          uVar18 = FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_1a8 = 1;
      local_68 = FUN_01815dc0(uVar18,local_1b0);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (CONCAT71(uStack_77,local_80[8]) != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_017e1a60();
      local_d0 = 0;
      local_d8 = CONCAT71(uStack_77,local_80[8]);
      if (local_70 == '\0') {
        if (local_d8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_d0 = '\x01';
      FUN_01716260();
      if (local_50[0] == '\0') {
        if (((local_58 != 0) && (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50[0] = '\0';
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (CONCAT71(uStack_77,local_80[8]) != 0)) {
        FUN_00d50b20();
      }
      iVar11 = (int)local_68 * 7;
      iVar11 = iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) - (iVar11 >> 0x1f)) * -0xc;
      cVar4 = ((byte)(iVar11 >> 0x1f) & 0xc) + (char)iVar11 + '\x06';
      uVar5 = cVar4 * 0x2b;
      FUN_01715d30((int)(char)(cVar4 + ((char)((uVar5 & 0xffff) >> 0xf) + (char)(uVar5 >> 9)) * -0xc
                              + -6));
      local_178 = local_58;
      local_170 = '\0';
      FUN_017e1cd0();
      if ((local_170 != '\0') && (local_178 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_017e1a60();
      local_68 = FUN_01715480();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  switch(param_3) {
  case 0:
    FUN_017e1bc0();
    iVar15 = FUN_01715480();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 1:
    FUN_017e1bf0();
    iVar15 = FUN_01715480();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 2:
    FUN_017e1bf0();
    iVar15 = FUN_017154c0();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 3:
    FUN_017e1bf0();
    if (local_50[0] == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    uVar5 = 0xffffffff;
    iVar15 = 0x18;
    uVar8 = local_68;
    do {
      cVar4 = FUN_01716980();
      uVar16 = (uint)uVar8;
      uVar18 = extraout_XMM0_Qa;
      if (cVar4 != '\0') {
        iVar11 = FUN_01715480();
        iVar11 = uVar16 - iVar11;
        iVar11 = iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) - (iVar11 >> 0x1f)) * -0xc;
        uVar6 = (uint)(*(uint64_t *)(local_58 + 0x18) >>
                      ((((byte)(iVar11 >> 0x1f) & 0xc) + (char)iVar11) * '\x04' & 0x3f)) & 0xf;
        uVar18 = extraout_XMM0_Qa_00;
        if ((uVar6 < 0x10) && ((0x801fU >> uVar6 & 1) != 0)) goto LAB_01817a3c;
      }
      uVar16 = uVar16 + uVar5;
      uVar8 = (uint64_t)uVar16;
      uVar6 = 1 - uVar5;
      bVar17 = (int)uVar5 < 1;
      uVar5 = ~uVar5;
      if (bVar17) {
        uVar5 = uVar6;
      }
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    if (local_58 != 0) {
LAB_01817a3c:
      uVar18 = FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    goto LAB_01818096;
  case 4:
    uVar18 = FUN_017e1bc0();
    local_80[8] = local_50[0];
    pcVar9 = local_50;
    if (local_50[0] == '\0') {
      pcVar9 = local_80 + 8;
    }
    *pcVar9 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    uVar5 = *(uint *)(local_58 + 0x80);
    if ((uVar5 & 1) == 0) {
      uVar18 = FUN_017e1bf0();
      if (((local_80[8] == '\0') && (local_58 != 0)) && (local_50[0] != '\0')) {
        local_80[8] = '\x01';
        local_50[0] = '\0';
      }
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      uVar5 = *(uint *)(local_58 + 0x80);
    }
    iVar15 = (int)-*(char *)(local_58 + 0x84);
    if ((uVar5 & 3) == 0) {
      iVar15 = 0;
    }
    uVar16 = iVar15 + *(int *)(*arg1 + 0x84);
    if ((*(char *)(local_58 + 0x84) != '\0') || (uVar5 == 0)) {
      while (cVar4 = FUN_01716980(), uVar18 = extraout_XMM0_Qa_02, cVar4 == '\0') {
        uVar16 = uVar16 - 1;
      }
    }
    if ((local_80[8] != '\0') && (local_58 != 0)) {
      uVar18 = FUN_00d50b20();
    }
LAB_01818096:
    iVar15 = uVar16 - (int)local_68;
    if (param_3 != 4) goto LAB_01817d53;
    goto LAB_018180a4;
  case 5:
    FUN_017e1d70();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 == 0) {
      FUN_017e1bf0();
      iVar15 = FUN_01715480();
    }
    else {
      FUN_017e1d70();
      iVar15 = FUN_01715480();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_017e1d70();
      local_c0 = 0;
      if (local_50[0] == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50[0] = '\0';
      }
      local_c0 = '\x01';
      local_c8 = local_58;
      FUN_017e1c50();
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    break;
  case 6:
    FUN_017e1bc0();
    iVar11 = FUN_01715480();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_017e1bc0();
    iVar7 = FUN_01715480();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_018178dc;
  case 7:
    FUN_017e1bf0();
    iVar11 = FUN_01715480();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_017e1bf0();
    iVar7 = FUN_01715480();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
LAB_018178dc:
    iVar7 = iVar7 + iVar15;
    iVar7 = iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc;
    iVar15 = (iVar7 >> 0x1f & 0xcU) + iVar7;
    auVar19._0_4_ = iVar15 - (int)local_68;
    auVar19._4_4_ = iVar11 - (int)local_68;
    auVar19._8_8_ = 0;
    auVar19 = pabsd(auVar19,auVar19);
    auVar21._0_4_ = g_023d92f0 - auVar19._0_4_;
    auVar21._4_4_ = _UNK_023d92f4 - auVar19._4_4_;
    auVar21._8_4_ = _UNK_023d92f8 - auVar19._8_4_;
    auVar21._12_4_ = _UNK_023d92fc - auVar19._12_4_;
    auVar19 = pabsd(auVar19,auVar21);
    auVar20._0_4_ = auVar19._0_4_ + g_02416d20;
    auVar20._4_4_ = auVar19._4_4_ + _UNK_02416d24;
    auVar20._8_4_ = auVar19._8_4_ + _UNK_02416d28;
    auVar20._12_4_ = auVar19._12_4_ + _UNK_02416d2c;
    auVar19 = pabsd(auVar20,auVar20);
    uVar5 = auVar19._0_4_;
    uVar16 = auVar19._4_4_;
    if (!(bool)(~(((uVar16 < uVar5) * uVar5 | (uVar16 >= uVar5) * uVar16) == uVar5) & 1)) {
      iVar15 = iVar11;
    }
    break;
  case 8:
  case 9:
    FUN_017e1bf0();
    cVar4 = FUN_01717530();
    cVar3 = '\x01';
    if (cVar4 == '\0') {
      FUN_017e1bf0();
      cVar3 = FUN_017176e0();
      if ((local_70 != '\0') && (CONCAT71(uStack_77,local_80[8]) != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      FUN_017e1bc0();
      if (local_50[0] == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50[0] = '\0';
      }
      local_198 = 1;
      uVar18 = FUN_017e1bf0();
      lVar1 = CONCAT71(uStack_77,local_80[8]);
      if (local_70 == '\0') {
        if (lVar1 != 0) {
          uVar18 = FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_188 = 1;
      iVar15 = FUN_01815dc0(uVar18,local_190);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (CONCAT71(uStack_77,local_80[8]) != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_017e1bf0();
      local_b0 = 0;
      local_b8 = CONCAT71(uStack_77,local_80[8]);
      if (local_70 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_b0 = '\x01';
      FUN_01716260();
      if (local_50[0] == '\0') {
        if (((local_58 != 0) && (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50[0] = '\0';
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (CONCAT71(uStack_77,local_80[8]) != 0)) {
        FUN_00d50b20();
      }
      iVar11 = iVar15 * 7;
      iVar11 = iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) - (iVar11 >> 0x1f)) * -0xc;
      cVar4 = ((byte)(iVar11 >> 0x1f) & 0xc) + (char)iVar11 + '\x06';
      uVar5 = cVar4 * 0x2b;
      FUN_01715d30((int)(char)(cVar4 + ((char)((uVar5 & 0xffff) >> 0xf) + (char)(uVar5 >> 9)) * -0xc
                              + -6));
      local_168 = local_58;
      local_160 = '\0';
      FUN_017e1c50();
      if ((local_160 != '\0') && (local_168 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_017e1bf0();
      iVar15 = FUN_01715480();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  iVar15 = iVar15 - (int)local_68;
LAB_01817d53:
  iVar7 = (**(code **)(*this_ptr + 0x370))();
  iVar11 = 6;
  if (iVar15 < 6) {
    iVar11 = iVar15;
  }
  uVar5 = (iVar15 - iVar11) + 0xb;
  iVar15 = (uVar5 % 0xc - uVar5) + iVar15;
  iVar11 = -6;
  if (-6 < iVar15) {
    iVar11 = iVar15;
  }
  uVar5 = (uint)(iVar11 - iVar15 != 0);
  iVar11 = ((iVar11 - iVar15) - uVar5) / 0xc + uVar5;
  pVar12 = iVar11 * 3;
  iVar15 = iVar15 + iVar11 * 0xc;
  uVar18 = extraout_XMM0_Qa_01;
  if ((iVar7 != 0) && (local_res8 != '\0')) {
    FUN_017e1dd0();
    lVar1 = *(int64_t *)(local_58 + 0xb8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    uVar18 = FUN_017e1dd0();
    lVar14 = *(int64_t *)(local_58 + 0xb0);
    if (lVar14 != 0) {
      uVar18 = FUN_00d50b00();
    }
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    if (lVar1 != 0) {
      pvVar10 = _pthread_getspecific(pVar12);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar18 = FUN_01531cc0();
      bVar17 = false;
      if (((*(uint *)(local_58 + 0x18) & 0xfffffffc) == 4) && (bVar17 = false, lVar14 != 0)) {
        pvVar10 = _pthread_getspecific(pVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar18 = FUN_01531cc0();
        bVar17 = (*(uint *)(CONCAT71(uStack_77,local_80[8]) + 0x18) & 0xfffffffc) == 4;
        if (local_70 != '\0') {
          uVar18 = FUN_00d50b20();
        }
      }
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if (bVar17) {
        pvVar10 = _pthread_getspecific(pVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01531cc0();
        iVar15 = **(int **)(local_58 + 0x10);
        pvVar10 = _pthread_getspecific(pVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar18 = FUN_01531cc0();
        iVar15 = iVar15 - **(int **)(CONCAT71(uStack_77,local_80[8]) + 0x10);
        if (local_70 != '\0') {
          uVar18 = FUN_00d50b20();
        }
        if ((local_50[0] != '\0') && (local_58 != 0)) {
          uVar18 = FUN_00d50b20();
        }
      }
    }
    if (lVar14 != 0) {
      uVar18 = FUN_00d50b20();
    }
    if (lVar1 != 0) {
      uVar18 = FUN_00d50b20();
    }
  }
LAB_018180a4:
  if (*(char *)(local_58 + 0xc2) == '\0') {
    lVar1 = this_ptr[0xb];
    iVar11 = *(int *)((int64_t)this_ptr + 0x5c);
    iVar7 = *(int *)(*arg1 + 0x80);
    iVar13 = *(int *)(*arg1 + 0x84);
    if ((*(int *)(local_58 + 0x44) + *(int *)(local_58 + 0x48)) / 2 < (iVar7 + iVar13) / 2) {
      while (cVar4 = FUN_017e4340(uVar18,*(int *)(*arg1 + 0x84) + iVar15), cVar4 == '\0') {
        iVar15 = iVar15 + 0xc;
        uVar18 = extraout_XMM0_Qa_03;
      }
    }
    else {
      while (cVar4 = FUN_017e4340(iVar7 + iVar15,iVar13 + iVar15), cVar4 == '\0') {
        iVar15 = iVar15 + -0xc;
        iVar7 = *(int *)(*arg1 + 0x80);
        iVar13 = *(int *)(*arg1 + 0x84);
      }
    }
    iVar7 = *(int *)((int64_t)this_ptr + 0x54);
    if (iVar15 < *(int *)((int64_t)this_ptr + 0x54)) {
      iVar7 = iVar15;
    }
    uVar5 = (iVar15 - iVar7) + 0xb;
    iVar15 = (uVar5 % 0xc - uVar5) + iVar15;
    iVar7 = (int)this_ptr[10];
    if ((int)this_ptr[10] < iVar15) {
      iVar7 = iVar15;
    }
    uVar5 = (uint)(iVar7 - iVar15 != 0);
    iVar15 = iVar15 + (((iVar7 - iVar15) - uVar5) / 0xc + uVar5) * 0xc;
    do {
      iVar7 = iVar15 + -0xc;
      iVar13 = iVar15 + *(int *)(*arg1 + 0x84);
      iVar15 = iVar7;
    } while (iVar11 < iVar13);
    do {
      iVar15 = iVar7 + 0xc;
      iVar11 = iVar7 + *(int *)(*arg1 + 0x80);
      iVar7 = iVar15;
    } while (iVar11 + 0xc < (int)lVar1);
  }
  if (iVar15 == 0) goto LAB_01818879;
  FUN_017e1ac0();
  if ((((local_50[0] == '\0') && (local_58 != 0)) && (FUN_00d50b00(), local_50[0] != '\0')) &&
     (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_017e1b40();
  if (local_50[0] == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01818258;
    }
    if (-1 < param_4) goto LAB_018185bd;
LAB_018182d5:
    local_68 = local_58;
  }
  else {
LAB_01818258:
    if (param_4 < 0) goto LAB_018182d5;
    if (local_58 != 0) {
      local_158 = local_58;
      local_150 = '\0';
      FUN_01716260();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
      iVar11 = FUN_01715480();
      iVar11 = iVar11 + iVar15;
      iVar11 = iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) - (iVar11 >> 0x1f)) * -0xc;
      iVar11 = ((iVar11 >> 0x1f & 0xcU) + iVar11) * 7;
      iVar11 = iVar11 + ((int)(short)iVar11 / 0xc) * -0xc;
      cVar4 = ((byte)((uint)(int)(short)iVar11 >> 0xf) & 0xc) + (char)iVar11 + '\x06';
      uVar5 = cVar4 * 0x2b;
      FUN_01715d30((int)(char)(cVar4 + ((char)((uVar5 & 0xffff) >> 0xf) + (char)(uVar5 >> 9)) * -0xc
                              + -6));
      local_148 = local_58;
      local_140 = '\0';
      FUN_017e1b70();
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
      FUN_017e1ca0();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_017e1ca0();
        local_a0 = 0;
        local_a8 = CONCAT71(uStack_77,local_80[8]);
        if (local_70 == '\0') {
          if (local_a8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_a0 = '\x01';
        FUN_01716260();
        if (local_50[0] == '\0') {
          if (((local_58 != 0) && (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_50[0] = '\0';
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (CONCAT71(uStack_77,local_80[8]) != 0)) {
          FUN_00d50b20();
        }
        iVar11 = FUN_01715480();
        iVar11 = iVar11 + iVar15;
        iVar11 = iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) - (iVar11 >> 0x1f)) * -0xc;
        iVar11 = ((iVar11 >> 0x1f & 0xcU) + iVar11) * 7;
        iVar11 = iVar11 + ((int)(short)iVar11 / 0xc) * -0xc;
        cVar4 = ((byte)((uint)(int)(short)iVar11 >> 0xf) & 0xc) + (char)iVar11 + '\x06';
        uVar5 = cVar4 * 0x2b;
        FUN_01715d30((int)(char)(cVar4 + ((char)((uVar5 & 0xffff) >> 0xf) + (char)(uVar5 >> 9)) *
                                         -0xc + -6));
        local_138 = local_58;
        local_130 = '\0';
        FUN_017e1cd0();
        if ((local_130 != '\0') && (local_138 != 0)) {
          FUN_00d50b20();
        }
        if (local_58 != 0) {
          FUN_00d50b20();
        }
      }
    }
LAB_018185bd:
    if (local_58 == 0) {
      local_68 = local_58;
    }
    else {
      local_128 = local_58;
      local_120 = '\0';
      FUN_01716260();
      local_68 = local_58;
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      uVar8 = local_68;
      iVar11 = FUN_01715480();
      iVar11 = iVar11 + iVar15;
      iVar11 = iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) - (iVar11 >> 0x1f)) * -0xc;
      iVar15 = ((iVar11 >> 0x1f & 0xcU) + iVar11) * 7;
      iVar15 = iVar15 + ((int)(short)iVar15 / 0xc) * -0xc;
      cVar4 = ((byte)((uint)(int)(short)iVar15 >> 0xf) & 0xc) + (char)iVar15 + '\x06';
      uVar5 = cVar4 * 0x2b;
      FUN_01715d30((int)(char)(cVar4 + ((char)((uVar5 & 0xffff) >> 0xf) + (char)(uVar5 >> 9)) * -0xc
                              + -6));
      local_118 = uVar8;
      local_110 = '\0';
      FUN_017e1af0();
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  lVar1 = *local_180;
  if (lVar1 != 0) {
    local_50[0] = '\0';
    local_38 = 0;
    local_40 = 0;
    local_48 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar14 = 0;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar14 * 8);
        local_100 = '\0';
        local_108 = lVar2;
        uVar18 = FUN_017e4480();
        if ((local_100 != '\0') && (local_108 != 0)) {
          uVar18 = FUN_00d50b20();
        }
        local_f0 = '\0';
        local_f8 = lVar2;
        FUN_017e4370(uVar18,&local_f8);
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if ((char)this_ptr[7] != '\0') {
          FUN_017e4290();
        }
        lVar14 = lVar14 + 1;
        local_40 = CONCAT44(local_40._4_4_,(int)lVar14);
      } while ((int)lVar14 < *(int *)(lVar1 + 0xc));
    }
    FUN_01916320();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
LAB_01818879:
  if ((local_80[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01802d60
// ============================================================
// Function: FUN_01802d60
// Address: 01802d60
// Size: 2518 bytes
// Class: MUPitchMapper
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void FUN_01802d60(void)

{
  char cVar1;
  void*puVar2;
  int64_t *plVar3;
  bool bVar4;
  void*local_98;
  char local_90;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  plVar3 = g_028af7b8;
  if (g_028af7b8 != (int64_t *)0x0) {
    FUN_01800300();
    (**(code **)(*local_48 + 0x3c0))();
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    cVar1 = (**(code **)(*plVar3 + 0x50))();
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') {
      if (g_028af7a8 == (void*)0x0) goto LAB_01802e4f;
      g_028af7a8 = (void*)0x0;
      FUN_00d50b20();
    }
  }
  if ((g_028af7a8 != (void*)0x0) && (g_028af7b1 != '\0')) {
    return;
  }
LAB_01802e4f:
  FUN_00e8cb50();
  if (g_028af7a8 == (void*)0x0) {
    FUN_01800300();
    cVar1 = (**(code **)(*local_38 + 0x398))();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      FUN_01800300();
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_00c8e830();
      if (local_30 == '\0') {
        if (local_38 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      if (local_38 != (int64_t *)0x0) {
        FUN_00c92170();
      }
      FUN_00ca9940();
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      FUN_01800c00();
      if (g_028af7a8 != local_98) {
        puVar2 = g_028af7a8;
        if (local_90 == '\0') {
          if (local_98 != (void*)0x0) {
            FUN_00d50b00();
            puVar2 = g_028af7a8;
          }
        }
        else {
          local_90 = '\0';
        }
        g_028af7a8 = local_98;
        if (puVar2 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_98 != (void*)0x0) && (g_028af7b0 == '\0')) {
        g_028af7b0 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_90 != '\0') && (local_98 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01800300();
      (**(code **)(*local_68 + 0x3c0))();
      plVar3 = g_028af7b8;
      if (g_028af7b8 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == (int64_t *)0x0) {
            plVar3 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar3 = local_38;
          }
        }
        else {
          local_30 = '\0';
          plVar3 = local_38;
        }
        bVar4 = g_028af7b8 != (int64_t *)0x0;
        g_028af7b8 = plVar3;
        if (bVar4) {
          FUN_00d50b20();
          plVar3 = local_38;
        }
      }
      if ((plVar3 != (int64_t *)0x0) && (g_028af7c0 == '\0')) {
        g_028af7c0 = '\x01';
        FUN_00e8cb90();
        plVar3 = local_38;
      }
      if ((local_30 != '\0') && (plVar3 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (g_028af7a8 == (void*)0x0) {
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02572358;
      (*g_02572370)();
      bVar4 = g_028af7a8 == (void*)0x0;
      g_028af7a8 = puVar2;
      if (((bVar4) || (FUN_00d50b20(), g_028af7a8 != (void*)0x0)) && (g_028af7b0 == '\0')
         ) {
        g_028af7b0 = '\x01';
        FUN_00e8cb90();
      }
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02608800;
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 1;
      *(void*)((int64_t)puVar2 + 0x14) = 0x41200000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02608800;
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 1;
      *(void*)(puVar2 + 2) = 1;
      *(void*)((int64_t)puVar2 + 0x14) = 0x41100000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02608800;
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 2;
      *(void*)(puVar2 + 2) = 1;
      *(void*)((int64_t)puVar2 + 0x14) = 0x41000000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02608800;
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 3;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0x40200000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02608800;
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 4;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0x40333333;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02608800;
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 5;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0x40a00000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02608800;
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 6;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0xc0400000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02608800;
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 7;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0x3f000000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02608800;
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 9;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0xbf800000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02608800;
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 10;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02608800;
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 0xd;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0x42c80000;
      FUN_00d21140();
      FUN_00d50b20();
    }
    FUN_00d242c0();
    g_028af7b1 = 1;
    FUN_00e8cb70();
  }
  else {
    g_028af7b1 = 1;
    FUN_00e8cb70();
  }
  return;
}



// ============================================================
// 018048e0
// ============================================================
// Function: FUN_018048e0
// Address: 018048e0
// Size: 1546 bytes
// Class: MUPitchMapper
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


uint64_t FUN_018048e0(uint64_t param_1,int64_t param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t *arg1;
  int64_t lVar9;
  int64_t *this_ptr;
  int64_t lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_38;
  float local_34;
  
  if (g_028af7a8 == 0) {
    FUN_01802d60();
    if (g_028af7a8 == 0) goto LAB_0180496b;
LAB_0180490d:
    lVar10 = g_028af7a8;
    FUN_00d50b00();
    if (*(int *)(lVar10 + 0xc) < 1) {
      local_34 = 0.0;
      local_38 = 0.0;
    }
    else {
      local_38 = 0.0;
      lVar7 = 0;
      local_34 = 0.0;
      do {
        lVar9 = *(int64_t *)(*(int64_t *)(lVar10 + 0x10) + lVar7 * 8);
        switch(*(void*)(lVar9 + 0xc)) {
        case 0:
          if (*(char *)(lVar9 + 0x10) != '\0') {
            cVar6 = *(char *)(*arg1 + 0x48);
            if (*(char *)(*this_ptr + 0x48) == '\0') goto LAB_01804a00;
LAB_01804a2b:
            if (cVar6 != '\0') break;
LAB_01804ed5:
            uVar8 = 1;
LAB_01804eda:
            FUN_0180d070();
            goto joined_r0x01804ee6;
          }
          fVar12 = g_02390124;
          if (*(char *)(*this_ptr + 0x48) == '\0') {
            fVar12 = 0.0;
          }
          fVar13 = *(float *)(lVar9 + 0x14);
          fVar12 = fVar12 * fVar13;
          cVar6 = *(char *)(*arg1 + 0x48);
joined_r0x01804e3e:
          fVar11 = g_02390124;
          if (cVar6 == '\0') {
            fVar11 = 0.0;
          }
          local_34 = local_34 + fVar12;
          fVar13 = fVar13 * fVar11;
LAB_018049a9:
          local_38 = local_38 + fVar13;
          break;
        case 1:
          if (*(char *)(lVar9 + 0x10) == '\0') {
            fVar12 = g_02390124;
            if (*(char *)(*this_ptr + 0x49) == '\0') {
              fVar12 = 0.0;
            }
            fVar13 = *(float *)(lVar9 + 0x14);
            fVar12 = fVar12 * fVar13;
            cVar6 = *(char *)(*arg1 + 0x49);
            goto joined_r0x01804e3e;
          }
          cVar6 = *(char *)(*arg1 + 0x49);
          if (*(char *)(*this_ptr + 0x49) != '\0') goto LAB_01804a2b;
LAB_01804a00:
          if (cVar6 != '\0') {
LAB_01804ece:
            uVar8 = 0xffffffff;
            goto LAB_01804eda;
          }
          break;
        case 2:
          if (*(char *)(param_2 + 0x79) != '\0') {
            if (*(char *)(lVar9 + 0x10) == '\0') {
              fVar12 = g_02390124;
              if (*(char *)(*this_ptr + 0x4a) == '\0') {
                fVar12 = 0.0;
              }
              fVar13 = *(float *)(lVar9 + 0x14);
              fVar12 = fVar12 * fVar13;
              cVar6 = *(char *)(*arg1 + 0x4a);
              goto joined_r0x01804e3e;
            }
            cVar6 = *(char *)(*arg1 + 0x4a);
            if (*(char *)(*this_ptr + 0x4a) == '\0') goto joined_r0x01804be9;
LAB_01804aa5:
            if (cVar6 == '\0') goto LAB_01804ece;
          }
          break;
        case 3:
          if (*(char *)(param_2 + 0x78) != '\0') {
            cVar1 = *(char *)(*this_ptr + 0x4c);
            if (*(char *)(lVar9 + 0x10) == '\0') {
              fVar12 = g_02390124;
              if (cVar1 == '\0') {
                fVar12 = 0.0;
              }
              fVar13 = *(float *)(lVar9 + 0x14);
              fVar12 = fVar12 * fVar13;
              cVar6 = *(char *)(*arg1 + 0x4c);
              goto joined_r0x01804e3e;
            }
            cVar6 = *(char *)(*arg1 + 0x4c);
joined_r0x01804ae0:
            if (cVar1 != '\0') goto LAB_01804aa5;
joined_r0x01804be9:
            if (cVar6 != '\0') goto LAB_01804ed5;
          }
          break;
        case 4:
          if (*(char *)(param_2 + 0x7a) != '\0') {
            cVar1 = *(char *)(*this_ptr + 0x4d);
            if (*(char *)(lVar9 + 0x10) != '\0') {
              cVar6 = *(char *)(*arg1 + 0x4d);
              goto joined_r0x01804ae0;
            }
            fVar12 = g_02390124;
            if (cVar1 == '\0') {
              fVar12 = 0.0;
            }
            fVar13 = *(float *)(lVar9 + 0x14);
            fVar12 = fVar12 * fVar13;
            cVar6 = *(char *)(*arg1 + 0x4d);
            goto joined_r0x01804e3e;
          }
          break;
        case 5:
          if (*(char *)(param_2 + 0x7b) == '\0') {
            fVar13 = *(float *)(*this_ptr + 0x18);
            if (*(char *)(lVar9 + 0x10) != '\0') {
              fVar12 = *(float *)(*arg1 + 0x18);
              if (fVar13 <= fVar12) goto LAB_01804c5a;
              goto LAB_01804ece;
            }
            local_34 = local_34 + fVar13 * *(float *)(lVar9 + 0x14);
            fVar13 = *(float *)(lVar9 + 0x14) * *(float *)(*arg1 + 0x18);
            goto LAB_018049a9;
          }
          break;
        case 6:
          iVar2 = *(int *)(*this_ptr + 0x1c);
          if (*(char *)(lVar9 + 0x10) == '\0') {
            fVar11 = (float)iVar2;
            fVar12 = *(float *)(lVar9 + 0x14);
            fVar13 = (float)*(int *)(*arg1 + 0x1c);
LAB_0180498a:
            local_34 = local_34 + fVar11 * fVar12;
            fVar13 = fVar13 * fVar12;
            goto LAB_018049a9;
          }
          if (iVar2 < *(int *)(*arg1 + 0x1c)) goto LAB_01804ece;
          if (*(int *)(*arg1 + 0x1c) < iVar2) goto LAB_01804ed5;
          break;
        case 7:
          iVar2 = *(int *)(*this_ptr + 0x44);
          if (*(char *)(lVar9 + 0x10) == '\0') {
            fVar11 = (float)iVar2;
            fVar12 = *(float *)(lVar9 + 0x14);
            fVar13 = (float)*(int *)(*arg1 + 0x44);
            goto LAB_0180498a;
          }
          if (*(int *)(*arg1 + 0x44) < iVar2) goto LAB_01804ece;
          if (iVar2 < *(int *)(*arg1 + 0x44)) goto LAB_01804ed5;
          break;
        case 9:
          if (*(char *)(lVar9 + 0x10) == '\0') {
            fVar12 = (float)FUN_00e7c810();
            fVar13 = *(float *)(lVar9 + 0x14);
            fVar11 = (float)FUN_00e7c810();
            local_34 = local_34 + fVar12 * fVar13;
            local_38 = local_38 + fVar11 * *(float *)(lVar9 + 0x14);
          }
          else if (*(int *)(*this_ptr + 0x38) != 0) {
            lVar9 = *arg1;
            if (*(int *)(lVar9 + 0x38) != 0) {
              cVar6 = FUN_00e7c020();
              if (cVar6 != '\0') goto LAB_01804ece;
              if (*(int *)(*this_ptr + 0x38) == 0) break;
              lVar9 = *arg1;
            }
            if (*(int *)(lVar9 + 0x38) != 0) {
              cVar6 = FUN_00e7c020();
              goto joined_r0x01804be9;
            }
          }
          break;
        case 10:
          uVar3 = *(uint *)(*this_ptr + 0x3c);
          uVar4 = -uVar3;
          if (0 < (int)uVar3) {
            uVar4 = uVar3;
          }
          uVar3 = *(uint *)(*arg1 + 0x3c);
          uVar5 = -uVar3;
          if (0 < (int)uVar3) {
            uVar5 = uVar3;
          }
          if (*(char *)(lVar9 + 0x10) == '\0') {
            fVar11 = (float)(int)uVar4;
            fVar12 = *(float *)(lVar9 + 0x14);
            fVar13 = (float)(int)uVar5;
            goto LAB_0180498a;
          }
          if (uVar4 < uVar5) goto LAB_01804ece;
          if (uVar5 < uVar4) goto LAB_01804ed5;
          break;
        case 0xd:
          fVar13 = *(float *)(*this_ptr + 0x40);
          if (*(char *)(lVar9 + 0x10) == '\0') {
            local_34 = local_34 + fVar13 * *(float *)(lVar9 + 0x14);
            fVar13 = *(float *)(lVar9 + 0x14) * *(float *)(*arg1 + 0x40);
            goto LAB_018049a9;
          }
          fVar12 = *(float *)(*arg1 + 0x40);
          if (fVar12 < fVar13) goto LAB_01804ece;
LAB_01804c5a:
          if (fVar13 < fVar12) goto LAB_01804ed5;
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(lVar10 + 0xc));
    }
    FUN_0180d070();
    uVar8 = 0xffffffff;
    if (local_38 < local_34) goto joined_r0x01804ee6;
  }
  else {
    if (g_028af7a8 != 0) goto LAB_0180490d;
LAB_0180496b:
    local_38 = 0.0;
    local_34 = 0.0;
    lVar10 = g_028af7a8;
  }
  uVar8 = (uint64_t)(local_34 < local_38);
joined_r0x01804ee6:
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  return uVar8;
}



// ============================================================
// 01805680
// ============================================================
// Function: FUN_01805680
// Address: 01805680
// Size: 1854 bytes
// Class: MUPitchMapper
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


uint64_t FUN_01805680(uint64_t param_1,uint64_t param_2,byte param_3,int64_t *param_4,
                      void*param_5)

{
  int64_t lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  void* pVar6;
  uint uVar7;
  uint uVar8;
  int64_t this_ptr;
  uint uVar9;
  uint64_t unaff_R14;
  uint64_t uVar10;
  uint uVar11;
  uint local_res10;
  uint local_res18;
  uint8_t local_res20;
  int64_t local_b8;
  uint8_t local_b0;
  uint64_t local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int *)(this_ptr + 0x68) != 0) {
    uVar10 = CONCAT71((int7)((uint64_t)unaff_R14 >> 8),local_res20);
    goto LAB_0180569e;
  }
  local_b8 = *param_4;
  local_b0 = 0;
  pVar6 = (void*)param_3;
  local_a8 = param_2;
  cVar2 = FUN_01805370(param_3,param_2,&local_b8);
  if (cVar2 == '\0') {
    FUN_017e2270();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017e0180();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017e4950();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510360(0,0,0);
    local_a0 = local_40;
    local_98 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_98 = '\x01';
    FUN_017178d0();
    lVar1 = local_50;
    if (local_48 == '\0') {
      if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    iVar4 = FUN_0171a210();
    if (iVar4 == -1) {
      uVar9 = 0xffffffff;
      if (local_res10 != 0x7f) goto LAB_01805ca4;
LAB_01805ca8:
      local_res10 = *(uint *)(this_ptr + 100);
    }
    else {
      iVar4 = FUN_0171a210();
      uVar9 = (iVar4 % 7 >> 0x1f & 7U) + iVar4 % 7;
      if (local_res10 == 0x7f) goto LAB_01805ca8;
LAB_01805ca4:
      if (local_res10 == 0) goto LAB_01805ca8;
    }
    if (*(char *)(this_ptr + 0x5e) != '\0') {
      this_ptr = *param_4;
      cVar2 = FUN_01716a10();
      uVar11 = 0;
      if (cVar2 != '\0') {
        bVar3 = FUN_01716a10();
        uVar11 = (uint)(bVar3 ^ 1) + (uint)(bVar3 ^ 1) * 4;
      }
      cVar2 = FUN_01716a10();
      if (cVar2 == '\0') {
        cVar2 = FUN_01716a10();
        uVar7 = 2;
        if (cVar2 == '\0') goto LAB_01805cf7;
      }
      else {
LAB_01805cf7:
        uVar7 = uVar11;
        if (uVar11 == 0) goto LAB_01805d63;
      }
      uVar11 = uVar7 - 1;
      if ((uVar7 & 3) != 0) {
        uVar8 = 0;
        do {
          local_res10 = (local_res10 >> 6 & 1) + (local_res10 & 0x3f) * 2;
          uVar8 = uVar8 + 1;
        } while ((uVar7 & 3) != uVar8);
        uVar7 = uVar7 - uVar8;
      }
      if (2 < uVar11) {
        do {
          local_res10 = (local_res10 >> 3 & 1) +
                        (local_res10 >> 4 & 1 |
                        (local_res10 >> 4 & 2) +
                        ((local_res10 >> 6 & 1) + (local_res10 & 0xf) * 2) * 4 & 0x3f) * 2;
          uVar7 = uVar7 - 4;
        } while (uVar7 != 0);
      }
    }
LAB_01805d63:
    if (uVar9 == 0xffffffff) {
LAB_01805da5:
      uVar10 = 0;
    }
    else {
      if (param_5 != (void*)0x0) {
        *param_5 = 1;
      }
      uVar10 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
      if (((local_res10 >> (uVar9 & 0x1f) & 1) == 0) &&
         ((((uVar9 & 0xfffffffd) != 1 || (cVar2 = FUN_01716e70(), cVar2 != '\0')) ||
          ((local_res10 & 4) == 0)))) goto LAB_01805da5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    goto LAB_0180569e;
  }
  FUN_017e2270();
  pvVar5 = _pthread_getspecific(pVar6);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017e0180();
  pvVar5 = _pthread_getspecific(pVar6);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017e4950();
  pvVar5 = _pthread_getspecific(pVar6);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510360(0,0,0);
  local_90 = local_40;
  local_88 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_88 = '\x01';
  FUN_017178d0();
  lVar1 = local_50;
  if (local_48 == '\0') {
    if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  iVar4 = FUN_0171a210();
  if (iVar4 == -1) {
    uVar9 = 0xffffffff;
    if (local_res18 != 0) goto LAB_018059f5;
LAB_01805c78:
    uVar10 = CONCAT71((int7)((uint64_t)this_ptr >> 8),uVar9 != 0xffffffff);
  }
  else {
    iVar4 = FUN_0171a210();
    uVar9 = (iVar4 % 7 >> 0x1f & 7U) + iVar4 % 7;
    if (local_res18 == 0) goto LAB_01805c78;
LAB_018059f5:
    if (*(char *)(this_ptr + 0x5e) != '\0') {
      this_ptr = *param_4;
      cVar2 = FUN_01716a10();
      uVar11 = 0;
      if (cVar2 != '\0') {
        bVar3 = FUN_01716a10();
        uVar11 = (uint)(bVar3 ^ 1) + (uint)(bVar3 ^ 1) * 4;
      }
      cVar2 = FUN_01716a10();
      if (cVar2 == '\0') {
        cVar2 = FUN_01716a10();
        uVar7 = 2;
        if (cVar2 == '\0') goto LAB_01805a40;
      }
      else {
LAB_01805a40:
        uVar7 = uVar11;
        if (uVar11 == 0) goto LAB_01805ab3;
      }
      uVar11 = uVar7 - 1;
      if ((uVar7 & 3) != 0) {
        uVar8 = 0;
        do {
          local_res18 = (local_res18 >> 6 & 1) + (local_res18 & 0x3f) * 2;
          uVar8 = uVar8 + 1;
        } while ((uVar7 & 3) != uVar8);
        uVar7 = uVar7 - uVar8;
      }
      if (2 < uVar11) {
        do {
          local_res18 = (local_res18 >> 3 & 1) +
                        (local_res18 >> 4 & 1 |
                        (local_res18 >> 4 & 2) +
                        ((local_res18 >> 6 & 1) + (local_res18 & 0xf) * 2) * 4 & 0x3f) * 2;
          uVar7 = uVar7 - 4;
        } while (uVar7 != 0);
      }
    }
LAB_01805ab3:
    if ((uVar9 == 0xffffffff) ||
       ((uVar10 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1),
        (local_res18 >> (uVar9 & 0x1f) & 1) == 0 &&
        ((((uVar9 & 0xfffffffd) != 1 || (cVar2 = FUN_01716e70(), cVar2 != '\0')) ||
         ((local_res18 & 4) == 0)))))) {
      uVar10 = 0;
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_0180569e:
  return uVar10 & 0xffffffff;
}



// ============================================================
// 018165c0
// ============================================================
// Function: FUN_018165c0
// Address: 018165c0
// Size: 1547 bytes
// Class: MUPitchMapper
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void FUN_018165c0(void)

{
  int iVar1;
  int iVar2;
  void*puVar3;
  void*puVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar9;
  bool bVar10;
  void*local_120;
  uint8_t local_118;
  void*local_110;
  uint8_t local_108;
  uint8_t local_100 [8];
  uint8_t local_f8;
  code *local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60 [8];
  int64_t local_58;
  uint64_t local_50;
  int local_48;
  int64_t local_40;
  char local_38 [8];
  
  FUN_017e1dd0();
  pcVar8 = local_38;
  if (local_60[0] != '\0') {
    pcVar8 = local_60;
  }
  local_38[0] = local_60[0];
  *pcVar8 = '\0';
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_017e1d40();
  if ((((local_60[0] == '\0') && (local_68 != 0)) && (FUN_00d50b00(), local_60[0] != '\0')) &&
     (local_68 != 0)) {
    FUN_00d50b20();
  }
  lVar9 = local_68;
  if (*(int *)(this_ptr + 0x48) == 2) {
    FUN_017e1a60();
    iVar1 = FUN_017154c0();
    FUN_017e1a60();
    iVar2 = FUN_01715480();
    bVar10 = true;
    if (iVar1 == iVar2) {
      FUN_017e1bf0();
      iVar1 = FUN_017154c0();
      FUN_017e1bf0();
      iVar2 = FUN_01715480();
      bVar10 = iVar1 != iVar2;
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar10) && (iVar1 = FUN_017154c0(), local_68 != 0)) {
      local_40 = local_68;
      local_60[0] = '\0';
      local_58 = local_68;
      local_50 = 0xffffffff;
      local_48 = 0;
      iVar2 = 0x7fffffff;
      bVar10 = false;
      while( true ) {
        iVar7 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar7);
        if (*(int *)(local_58 + 0xc) <= iVar7) break;
        pvVar5 = _pthread_getspecific((void*)*(void*)(local_58 + 0x10));
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar7 = FUN_017dca70();
        iVar6 = iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc;
        if (iVar2 <= iVar7) {
          iVar7 = iVar2;
        }
        if ((iVar6 >> 0x1f & 0xcU) + iVar6 != iVar1) {
          bVar10 = true;
          iVar7 = iVar2;
        }
        iVar2 = iVar7;
        if (local_50._4_4_ != 0) {
          if (local_50 < 0) {
            iVar7 = -local_50._4_4_;
          }
          else {
            local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar7 = 0;
          }
          local_50 = CONCAT44(iVar7,(int)local_50);
        }
      }
      FUN_01916320();
      lVar9 = local_40;
      if (bVar10) {
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &g_02572358;
        local_f0 = g_02572370;
        (*g_02572370)();
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_02572358;
        (*local_f0)();
        local_60[0] = '\0';
        local_58 = local_68;
        local_50 = 0xffffffff;
        local_48 = 0;
        while( true ) {
          iVar1 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar1);
          if (*(int *)(local_58 + 0xc) <= iVar1) break;
          pvVar5 = _pthread_getspecific((void*)*(void*)(local_58 + 0x10));
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar1 = FUN_017dca70();
          if (iVar1 == iVar2) {
            FUN_00d21140();
          }
          else {
            FUN_00d21140();
          }
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar1 = -local_50._4_4_;
            }
            else {
              local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar1 = 0;
            }
            local_50 = CONCAT44(iVar1,(int)local_50);
          }
        }
        FUN_01916320();
        local_c8 = *arg1;
        local_c0 = '\0';
        local_118 = 0;
        local_120 = puVar3;
        FUN_01816ee0(*(void*)(this_ptr + 0x48),&local_120,*(void*)(this_ptr + 0x4c),
                     0xffffffff);
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        local_b8 = *arg1;
        local_b0 = '\0';
        local_108 = 0;
        local_110 = puVar4;
        FUN_01816ee0(1,&local_110,1,0);
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if (puVar4 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (puVar3 != (void*)0x0) {
          FUN_00d50b20();
        }
        goto LAB_018168ff;
      }
    }
  }
  local_a8 = *arg1;
  local_a0 = '\0';
  local_f8 = 0;
  FUN_01816ee0(*(void*)(this_ptr + 0x48),local_100,*(void*)(this_ptr + 0x4c),0);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
LAB_018168ff:
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01814c10
// ============================================================
// Function: FUN_01814c10
// Address: 01814c10
// Size: 1228 bytes
// Class: MUPitchMapper
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void FUN_01814c10(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *this_ptr;
  uint64_t uVar3;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint64_t in_XMM1_Qb;
  uint32_t uVar7;
  uint8_t auVar6 [16];
  uint64_t local_d8;
  uint64_t uStack_d0;
  float local_c8;
  float fStack_c4;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  float local_74;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  uVar7 = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
  FUN_01e42030();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == 0) {
    plVar1 = (int64_t *)FUN_00e8fc40();
    FUN_000161a0();
    (**(code **)(*plVar1 + 0x18))();
    FUN_01e3f820();
    (**(code **)(*this_ptr + 0x640))();
    local_d8 = (**(code **)(MACH_HEADER._0_8_ + 0x580))();
    uStack_d0 = extraout_XMM0_Qb;
    (**(code **)(*this_ptr + 0x640))();
    uVar3 = (**(code **)(MACH_HEADER._0_8_ + 0x578))();
    local_74 = (float)uVar3;
    local_b8 = 0;
    local_b0 = '\0';
    (**(code **)(*plVar1 + 0x450))(uVar3,&local_b8);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e56750();
    FUN_01e5c680();
    FUN_01e56750();
    FUN_01e5c730();
    FUN_01e56750();
    FUN_01e5ca90();
    (**(code **)(MACH_HEADER._0_8_ + 0x570))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e56750();
    local_c8 = (float)param_2;
    fStack_c4 = (float)((uint64_t)param_2 >> 0x20);
    auVar4._4_12_ = local_d8._4_12_;
    auVar4._0_4_ = (float)local_d8 + local_c8;
    auVar5._4_4_ = fStack_c4;
    auVar5._0_4_ = fStack_c4;
    auVar5._8_4_ = uVar7;
    auVar5._12_4_ = uVar7;
    auVar6._4_12_ = auVar5._4_12_;
    auVar6._0_4_ = fStack_c4 + local_74;
    auVar5 = insertps(auVar4,auVar6,0x10);
    FUN_01e5a130(auVar5._0_8_);
    plVar2 = (int64_t *)FUN_00e8fc40();
    FUN_00074c30();
    (**(code **)(*plVar2 + 0x18))();
    FUN_01d95060();
    FUN_01d94ee0();
    insertps(auVar4,auVar6._0_4_,0x10);
    (**(code **)(*plVar2 + 0x4d0))();
    (**(code **)(*plVar2 + 0x558))();
    FUN_00d50b00();
    FUN_01d978b0();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_01e56750();
    FUN_01e5ca90();
    local_a0 = '\0';
    local_a8 = plVar2;
    (**(code **)(MACH_HEADER._0_8_ + 0x450))();
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e56750();
    local_98 = g_027d6280;
    if (g_027d6280 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    FUN_01e5a050();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x460))();
    FUN_01f27fe0();
    (**(code **)(this_ptr[0x27] + 0x10))();
    uVar3 = FUN_00d50b00();
    local_88 = 0;
    local_80 = '\0';
    FUN_01f47190(uVar3,&local_88);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr + 0x27 != (int64_t *)0x0) {
      (**(code **)(this_ptr[0x27] + 0x10))();
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
  }
  else {
    FUN_01e42030();
    FUN_01d8c6e0();
    FUN_01e5d9c0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 0093890a
// ============================================================
// Function: FUN_0093890a
// Address: 0093890a
// Size: 817 bytes
// Class: MUPitchMapper
// String references:
//   "storageId"
//   "writeProperties"
//   "timeLimited"
//   "countLimited"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "Bad LsDeveloperBlockPtr (0x%16X)"
//   "static petpub::DeveloperDataRecord pace::AuthorizationVerifier::convertDevDataFromLicenseDbToPublic...
//   "dataReadOnly"
//   "dataWritable"
//   "writtenOnce"
//   "sizeLimit"
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void FUN_0093890a(string *param_1,byte *param_2,size_t param_3)

{
  byte bVar1;
  int iVar2;
  int64_t lVar3;
  char *this;
  code *pcVar4;
  string *psVar5;
  char *pcVar6;
  int64_t *arg1;
  void*this_ptr;
  int64_t *in_stack_ffffffffffffffb8;
  code *local_40;
  
  *this_ptr = &g_0251c198;
  *(void*)(this_ptr + 1) = 0;
  this_ptr[2] = 0;
  this_ptr[3] = 0;
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  *(void*)((int64_t)this_ptr + 0x4d) = 0;
  this = (char *)param_1;
  if (*arg1 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_40 = FUN_0094fb4d;
    FUN_00983230();
    this = 
    "static petpub::DeveloperDataRecord pace::AuthorizationVerifier::convertDevDataFromLicenseDbToPublic(license_services::LsDeveloperBlockPtr, bool &, bool &, int32_t)"
    ;
    FUN_00928ab0("static petpub::DeveloperDataRecord pace::AuthorizationVerifier::convertDevDataFromLicenseDbToPublic(license_services::LsDeveloperBlockPtr, bool &, bool &, int32_t)"
                 ,&g_00001b88);
    FUN_009bd14b();
    in_stack_ffffffffffffffb8 = arg1;
  }
  *(void*)((int64_t)this_ptr + 0x4b) = 1;
  FUN_00a432fe();
  pcVar6 = "storageId";
  FUN_009bafbc();
  lVar3 = FUN_00a432fe();
  *(void*)(this_ptr + 1) = *(void*)(lVar3 + 0xa4);
  (**(code **)(*(int64_t *)*arg1 + 0x48))();
  std::string::string((string *)this,(string *)pcVar6);
  if (((uint64_t)in_stack_ffffffffffffffb8 & 1) == 0) {
    local_40 = ((uint64_t)in_stack_ffffffffffffffb8 >> 1 & 0x7f);
  }
  pcVar4 = (this_ptr[3] - this_ptr[2]);
  if (pcVar4 < local_40) {
    FUN_0088d550();
  }
  else if (local_40 < pcVar4) {
    pcVar4 = local_40 + this_ptr[2];
    this_ptr[3] = pcVar4;
  }
  _memcpy(pcVar4,local_40,param_3);
  FUN_00a432fe();
  FUN_009bafbc();
  lVar3 = FUN_00a432fe();
  psVar5 = (string *)(lVar3 + 0x38);
  if ((string *)(this_ptr + 5) != psVar5) {
    FUN_008df080(psVar5,*(void*)(lVar3 + 0x40));
  }
  if (this_ptr[6] == this_ptr[5]) {
    FUN_00a432fe();
    FUN_009bafbc();
    FUN_00a432fe();
  }
  FUN_00a432fe();
  FUN_009bafbc();
  lVar3 = FUN_00a432fe();
  iVar2 = *(int *)(lVar3 + 200);
  *(int *)(this_ptr + 8) = iVar2;
  if (iVar2 == 2) {
    FUN_00a432fe();
    FUN_009bafbc();
    lVar3 = FUN_00a432fe();
    if (*(char *)(lVar3 + 0xcc) != '\0') {
      *(void*)(this_ptr + 8) = 3;
    }
  }
  FUN_00a432fe();
  FUN_009bafbc();
  lVar3 = FUN_00a432fe();
  *(void*)((int64_t)this_ptr + 0x44) = *(void*)(lVar3 + 0xa0);
  *(void*)(this_ptr + 9) = 1;
  FUN_00a432fe();
  FUN_009bafbc();
  lVar3 = FUN_00a432fe();
  *(void*)((int64_t)this_ptr + 0x49) = *(void*)(lVar3 + 0xa8);
  FUN_00a432fe();
  FUN_009bafbc();
  lVar3 = FUN_00a432fe();
  bVar1 = *(byte *)(lVar3 + 0x30);
  *(byte *)((int64_t)this_ptr + 0x4a) = bVar1;
  if (*(char *)((int64_t)this_ptr + 0x4b) != '\0') {
    *param_2 = *param_2 | *(byte *)((int64_t)this_ptr + 0x49);
    *param_1 = (string)((byte)*param_1 | bVar1);
    psVar5 = param_1;
  }
  if (((uint64_t)in_stack_ffffffffffffffb8 & 1) != 0) {
    operator_delete(psVar5);
  }
  return;
}



// ============================================================
// 018064c0
// ============================================================
// Function: FUN_018064c0
// Address: 018064c0
// Size: 775 bytes
// Class: MUPitchMapper
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


uint FUN_018064c0(void)

{
  int64_t lVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  uint uVar5;
  uint unaff_ESI;
  uint uVar6;
  int64_t this_ptr;
  uint uVar7;
  char *pcVar8;
  int64_t local_60;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(char *)(this_ptr + 0x5e) == '\0') {
    return unaff_ESI;
  }
  FUN_017e1b40();
  pcVar8 = local_50;
  local_40[0] = local_50[0];
  pcVar4 = pcVar8;
  if (local_50[0] == '\0') {
    pcVar4 = local_40;
  }
  *pcVar4 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_48 = local_58;
  FUN_017e1bf0();
  local_38[0] = local_50[0];
  pcVar4 = pcVar8;
  if (local_50[0] == '\0') {
    pcVar4 = local_38;
  }
  *pcVar4 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)(this_ptr + 0x68) == 0) {
    FUN_017e1ac0();
    local_60 = local_58;
    if (local_48 == local_58) {
      lVar1 = local_48;
      if (((local_40[0] == '\0') && (local_48 != 0)) && (local_50[0] != '\0')) {
        local_40[0] = '\x01';
        local_60 = local_48;
        goto LAB_018065ef;
      }
    }
    else {
      if (local_50[0] == '\0') {
        if (local_48 != 0 && local_40[0] != '\0') {
          FUN_00d50b20();
        }
        pcVar8 = local_40;
      }
      else {
        if (local_48 != 0 && local_40[0] != '\0') {
          FUN_00d50b20();
        }
        local_40[0] = '\x01';
      }
LAB_018065ef:
      *pcVar8 = '\0';
      local_48 = local_60;
      lVar1 = local_58;
    }
    if ((local_50[0] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    FUN_017e1bc0();
    if (((local_38[0] == '\0') && (local_58 != 0)) && (local_50[0] != '\0')) {
      local_38[0] = '\x01';
    }
    else if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = local_48;
  if (*(char *)(this_ptr + 0x5e) == '\0') goto joined_r0x01806773;
  cVar2 = FUN_01716a10();
  uVar7 = 0;
  if (cVar2 != '\0') {
    bVar3 = FUN_01716a10();
    uVar7 = (uint)(bVar3 ^ 1) + (uint)(bVar3 ^ 1) * 4;
  }
  cVar2 = FUN_01716a10();
  if (cVar2 == '\0') {
    cVar2 = FUN_01716a10();
    uVar5 = 2;
    if (cVar2 == '\0') goto LAB_018066f2;
  }
  else {
LAB_018066f2:
    uVar5 = uVar7;
    if (uVar7 == 0) goto joined_r0x01806773;
  }
  uVar7 = uVar5 - 1;
  if ((uVar5 & 3) != 0) {
    uVar6 = 0;
    do {
      unaff_ESI = (unaff_ESI >> 6 & 1) + (unaff_ESI & 0x3f) * 2;
      uVar6 = uVar6 + 1;
    } while ((uVar5 & 3) != uVar6);
    uVar5 = uVar5 - uVar6;
  }
  if (2 < uVar7) {
    do {
      unaff_ESI = (unaff_ESI >> 3 & 1) +
                  (unaff_ESI >> 4 & 1 |
                  (unaff_ESI >> 4 & 2) + ((unaff_ESI >> 6 & 1) + (unaff_ESI & 0xf) * 2) * 4 & 0x3f)
                  * 2;
      uVar5 = uVar5 - 4;
    } while (uVar5 != 0);
  }
joined_r0x01806773:
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  return unaff_ESI;
}



// ============================================================
// 01815fa0
// ============================================================
// Function: FUN_01815fa0
// Address: 01815fa0
// Size: 584 bytes
// Class: MUPitchMapper
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


uint64_t FUN_01815fa0(void)

{
  int *piVar1;
  int iVar2;
  int64_t lVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int iVar8;
  int iVar9;
  int64_t *this_ptr;
  uint uVar10;
  int64_t local_60;
  char local_58;
  int local_48;
  
  FUN_00c8e690();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar3 = *this_ptr;
  if (lVar3 != 0) {
    local_48 = -1;
    while (local_48 = local_48 + 1, local_48 < *(int *)(lVar3 + 0xc)) {
      uVar4 = FUN_017e4480();
      if (uVar4 < 0x80) {
        piVar1 = (int *)(*(int64_t *)(local_60 + 0x10) + (uint64_t)uVar4 * 4);
        *piVar1 = *piVar1 + 1;
      }
    }
    FUN_01916320();
  }
  if (local_60 == 0) {
    uVar7 = 0x3c;
  }
  else {
    iVar8 = *(int *)(local_60 + 0x18);
    iVar2 = iVar8 + 3;
    if (-1 < iVar8) {
      iVar2 = iVar8;
    }
    uVar7 = 0x3c;
    if (3 < iVar8) {
      uVar10 = iVar2 >> 2;
      lVar3 = *(int64_t *)(local_60 + 0x10);
      uVar4 = uVar10 & 3;
      if (uVar10 - 1 < 3) {
        uVar7 = 0x3c;
        uVar6 = 0;
        iVar5 = 0;
      }
      else {
        uVar6 = 0;
        uVar7 = 0x3c;
        iVar8 = 0;
        do {
          while( true ) {
            iVar2 = *(int *)(lVar3 + uVar6 * 4);
            iVar9 = iVar8;
            if (iVar8 < iVar2) {
              iVar9 = iVar2;
            }
            iVar5 = *(int *)(lVar3 + 4 + uVar6 * 4);
            if (iVar8 < iVar2) {
              uVar7 = uVar6 & 0xffffffff;
            }
            iVar2 = (int)uVar6;
            if (iVar9 < iVar5) break;
            iVar8 = *(int *)(lVar3 + 8 + uVar6 * 4);
            iVar5 = iVar9;
            if (iVar8 <= iVar9) goto LAB_018161ac;
LAB_0181618b:
            iVar5 = iVar8;
            uVar7 = (uint64_t)(iVar2 + 2);
            iVar8 = *(int *)(lVar3 + 0xc + uVar6 * 4);
            if (iVar8 <= iVar5) goto LAB_01816160;
LAB_018161b7:
            uVar7 = (uint64_t)(iVar2 + 3);
            uVar6 = uVar6 + 4;
            iVar5 = iVar8;
            if ((uVar10 & 0xfffffffc) == (uint)uVar6) goto LAB_018161c3;
          }
          uVar7 = (uint64_t)(iVar2 + 1);
          iVar8 = *(int *)(lVar3 + 8 + uVar6 * 4);
          if (iVar5 < iVar8) goto LAB_0181618b;
LAB_018161ac:
          iVar8 = *(int *)(lVar3 + 0xc + uVar6 * 4);
          if (iVar5 < iVar8) goto LAB_018161b7;
LAB_01816160:
          uVar6 = uVar6 + 4;
          iVar8 = iVar5;
        } while ((uVar10 & 0xfffffffc) != (uint)uVar6);
      }
LAB_018161c3:
      if (uVar4 != 0) {
        uVar6 = uVar6 & 0xffffffff;
        do {
          iVar8 = *(int *)(lVar3 + uVar6 * 4);
          if (iVar5 < iVar8) {
            uVar7 = uVar6 & 0xffffffff;
            iVar5 = iVar8;
          }
          uVar6 = uVar6 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    FUN_00d50b20();
  }
  return uVar7;
}



// ============================================================
// 018060a0
// ============================================================
// Function: FUN_018060a0
// Address: 018060a0
// Size: 793 bytes
// Class: MUPitchMapper
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void FUN_018060a0(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  int64_t lVar8;
  uint uVar9;
  int64_t lVar10;
  int64_t local_70;
  char local_68;
  int local_58;
  int64_t local_40;
  char local_38;
  
  FUN_017e1d40();
  if (local_68 == '\0') {
    if (local_70 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_70 == 0) {
    return;
  }
  local_58 = -1;
  do {
    do {
      local_58 = local_58 + 1;
      if (*(int *)(local_70 + 0xc) <= local_58) {
        FUN_01916320();
        FUN_00d50b20();
        return;
      }
      pvVar6 = _pthread_getspecific((void*)*(void*)(local_70 + 0x10));
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_017dca70();
      FUN_017e1a60();
      iVar5 = FUN_01715480();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_017e1a60();
      iVar5 = iVar4 - iVar5;
      iVar5 = iVar5 + (((uint)(iVar5 / 6 + (iVar5 >> 0x1f)) >> 1) - (iVar5 >> 0x1f)) * -0xc;
      uVar1 = *(uint64_t *)(local_40 + 0x18);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      uVar9 = (uint)(uVar1 >> ((((byte)(iVar5 >> 0x1f) & 0xc) + (char)iVar5) * '\x04' & 0x3f)) & 0xf
      ;
    } while (uVar9 == 0xf);
    FUN_017e1dd0();
    lVar2 = *(int64_t *)(local_40 + 0x50);
    cVar3 = (char)(uVar9 * 0x25 >> 8);
    iVar5 = *(int *)(lVar2 + 0x18);
    lVar10 = (int64_t)iVar5;
    iVar7 = iVar5 + 3;
    if (-1 < lVar10) {
      iVar7 = iVar5;
    }
    uVar9 = (uint)(byte)((char)uVar9 +
                        ((byte)(((byte)((char)uVar9 - cVar3) >> 1) + cVar3) >> 2) * -7);
    if (3 < lVar10) {
      lVar8 = 0;
      do {
        if (*(uint *)(*(int64_t *)(lVar2 + 0x10) + lVar8 * 4) == uVar9) goto LAB_018062ea;
        lVar8 = lVar8 + 1;
      } while (iVar7 >> 2 != (int)lVar8);
    }
    FUN_00c8e340();
    *(uint *)(*(int64_t *)(lVar2 + 0x10) + lVar10) = uVar9;
LAB_018062ea:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_017e1dd0();
    lVar2 = *(int64_t *)(local_40 + 0x58);
    iVar4 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
    iVar4 = (iVar4 >> 0x1f & 0xcU) + iVar4;
    iVar5 = *(int *)(lVar2 + 0x18);
    lVar10 = (int64_t)iVar5;
    iVar7 = iVar5 + 3;
    if (-1 < lVar10) {
      iVar7 = iVar5;
    }
    if (3 < lVar10) {
      iVar7 = iVar7 >> 2;
      lVar8 = 0;
      do {
        if (*(int *)(*(int64_t *)(lVar2 + 0x10) + lVar8 * 4) == iVar4) goto LAB_0180638a;
        lVar8 = lVar8 + 1;
      } while (iVar7 != (int)lVar8);
    }
    FUN_00c8e340(iVar7,1);
    *(int *)(*(int64_t *)(lVar2 + 0x10) + lVar10) = iVar4;
LAB_0180638a:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  } while( true );
}



// ============================================================
// 018068b0
// ============================================================
// Function: FUN_018068b0
// Address: 018068b0
// Size: 703 bytes
// Class: MUPitchMapper
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


uint FUN_018068b0(int64_t *param_1,uint param_2,int64_t *param_3,int64_t *param_4)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  uint unaff_ESI;
  int local_res8;
  char local_res10;
  
  if ((int)param_2 < 0x28) {
    iVar3 = FUN_01716a70();
    if (iVar3 == 0) {
      return 1;
    }
  }
  else {
    if (0x34 < (int)param_2) {
      if ((int)param_2 < 0x40) {
        if (local_res8 != 1) {
          return unaff_ESI & 0x15;
        }
        return unaff_ESI & 0x55;
      }
      iVar3 = FUN_0171a210();
      if (iVar3 != -1) {
        iVar3 = FUN_0171a210();
        uVar4 = (iVar3 % 7 >> 0x1f & 7U) + iVar3 % 7;
        if ((uVar4 < 5) && ((0x15U >> (uVar4 & 0x1f) & 1) != 0)) {
          return unaff_ESI;
        }
      }
      uVar4 = FUN_017154c0();
      if (uVar4 == param_2 % 0xc) {
        return unaff_ESI;
      }
      cVar2 = FUN_01716980();
      if (cVar2 == '\0') {
        return 0x15;
      }
      return unaff_ESI;
    }
    iVar3 = FUN_01716a70();
    if (iVar3 == 0) {
      if (*param_4 == 0) {
        bVar7 = false;
      }
      else {
        FUN_01715480();
        uVar4 = FUN_0171a210();
        cVar2 = FUN_01716be0();
        if (cVar2 == '\0') {
          bVar7 = (uVar4 & 0xfffffffd) == 0;
        }
        else {
          bVar7 = uVar4 == 0 || uVar4 == 5;
        }
      }
      iVar3 = FUN_0171a210();
      if (iVar3 == -1) {
        iVar3 = -1;
        lVar1 = *param_3;
      }
      else {
        iVar3 = FUN_0171a210();
        iVar3 = (iVar3 % 7 >> 0x1f & 7U) + iVar3 % 7;
        lVar1 = *param_3;
      }
      if (lVar1 == 0) {
        bVar7 = true;
      }
      else {
        iVar5 = FUN_01715480();
        iVar5 = (uint)(byte)((char)param_2 + ((byte)((param_2 & 0xff) / 3) & 0xfc) * -3) - iVar5;
        iVar8 = -iVar5;
        if (0 < iVar5) {
          iVar8 = iVar5;
        }
        iVar8 = 6 - iVar8;
        iVar5 = -iVar8;
        if (0 < iVar8) {
          iVar5 = iVar8;
        }
        iVar5 = iVar5 + -6;
        iVar8 = -iVar5;
        if (0 < iVar5) {
          iVar8 = iVar5;
        }
        bVar7 = (bool)(iVar8 != 1 | bVar7);
      }
      iVar8 = FUN_01715480();
      uVar4 = 1;
      if (!bVar7) {
        iVar8 = param_2 - iVar8;
        iVar8 = iVar8 + (((uint)(iVar8 / 6 + (iVar8 >> 0x1f)) >> 1) - (iVar8 >> 0x1f)) * -0xc;
        uVar6 = (uint)(iVar3 == 2) * 4 + 1;
        uVar4 = 0x11;
        if ((iVar8 >> 0x1f & 0xcU) + iVar8 != 7 || iVar3 != 4) {
          uVar4 = uVar6;
        }
        if (local_res10 == '\0') {
          uVar4 = uVar6;
        }
      }
      return unaff_ESI & uVar4;
    }
  }
  lVar1 = *param_1;
  cVar2 = FUN_01716a70();
  return 1 << ((byte)(*(uint64_t *)(lVar1 + 0x18) >> (cVar2 * '\x04' & 0x3fU)) & 0xf);
}



// ============================================================
// 0180d2e0
// ============================================================
// Function: FUN_0180d2e0
// Address: 0180d2e0
// Size: 3748 bytes
// Class: MUPitchMapper
// String references:
//   "MUPitchMapperOption"
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void FUN_0180d2e0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02608488;
  FUN_0180e1f0();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5413 == '\0') {
    FUN_0180e470();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5413 == '\0') {
    FUN_0180e5e0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5413 == '\0') {
    FUN_0180e750();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5413 == '\0') {
    FUN_0180e8c0();
    FUN_00e87980();
  }
  this_ptr[5] = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027d5413 == '\0') {
    FUN_0180ea30();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5413 == '\0') {
    FUN_0180eba0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x34) = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027d5413 == '\0') {
    FUN_0180ed10();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5413 == '\0') {
    FUN_0180ee80();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 8) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5413 == '\0') {
    FUN_0180eff0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5413 == '\0') {
    FUN_0180f160();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5413 == '\0') {
    FUN_0180f2d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x49) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5413 == '\0') {
    FUN_0180f440();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4a) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5413 == '\0') {
    FUN_0180f5b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4b) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5413 == '\0') {
    FUN_0180f720();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5413 == '\0') {
    FUN_0180f890();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4d) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5413 == '\0') {
    FUN_0180fa00();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5413 == '\0') {
    FUN_0180fb70();
    FUN_00e87980();
  }
  FUN_0180fce0();
  return;
}



// ============================================================
// 00940f84
// ============================================================
// Function: FUN_00940f84
// Address: 00940f84
// Size: 591 bytes
// Class: MUPitchMapper
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "convertDevDataFromIlok2ToPublic was passed a storage record with the wrong bRecordtype (0x%02X)"
//   "static petpub::DeveloperDataRecord pace::AuthorizationVerifier::convertDevDataFromIlok2ToPublic(con...
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void FUN_00940f84(byte *param_1,byte *param_2)

{
  ushort uVar1;
  byte bVar2;
  int64_t lVar3;
  uint64_t uVar4;
  byte bVar5;
  ushort uVar6;
  char *arg1;
  int64_t lVar7;
  void*this_ptr;
  
  *this_ptr = &g_0251c198;
  *(void*)(this_ptr + 1) = 0;
  lVar7 = 0;
  this_ptr[2] = 0;
  this_ptr[3] = 0;
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  *(void*)((int64_t)this_ptr + 0x4d) = 0;
  lVar3 = 0;
  if (*arg1 != -0x7c) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("static petpub::DeveloperDataRecord pace::AuthorizationVerifier::convertDevDataFromIlok2ToPublic(const EEPROM_StorageRecordStruct &, bool &, bool &, int32_t)"
                 ,&g_00002c71);
    FUN_009bd14b();
    lVar7 = this_ptr[2];
    lVar3 = this_ptr[3];
  }
  *(void*)((int64_t)this_ptr + 0x4b) = 1;
  *(void*)(this_ptr + 1) = *(void*)(arg1 + 4);
  if ((uint64_t)(lVar3 - lVar7) < 4) {
    FUN_0088d550();
  }
  else if (lVar3 - lVar7 != 4) {
    this_ptr[3] = lVar7 + 4;
  }
  FUN_009740dc();
  uVar4 = this_ptr[6] - this_ptr[5];
  if (uVar4 < 0x10) {
    FUN_0088d550();
  }
  else if (uVar4 != 0x10) {
    this_ptr[6] = this_ptr[5] + 0x10;
  }
  FUN_009740dc();
  FUN_009740dc();
  FUN_009740dc();
  FUN_009740dc();
  uVar1 = *(ushort *)(arg1 + 2);
  uVar6 = uVar1 & 3;
  if ((((uVar1 >> 2 & 3) == uVar6) && ((uVar1 >> 4 & 3) == uVar6)) && ((uVar1 >> 6 & 3) == uVar6)) {
    switch(uVar6) {
    case 0:
      *(void*)(this_ptr + 8) = 4;
      break;
    case 1:
      *(void*)(this_ptr + 8) = 1;
      break;
    case 2:
      *(void*)(this_ptr + 8) = 2;
      break;
    case 3:
      *(void*)(this_ptr + 8) = 3;
    }
  }
  else {
    *(void*)(this_ptr + 8) = 5;
    *(void*)((int64_t)this_ptr + 0x4b) = 0;
  }
  *(void*)((int64_t)this_ptr + 0x44) = 0x10;
  bVar2 = (byte)(uVar1 >> 8);
  *(byte *)(this_ptr + 9) = bVar2 & 1;
  bVar5 = bVar2 >> 5 & 1;
  *(byte *)((int64_t)this_ptr + 0x49) = bVar5;
  bVar2 = bVar2 >> 6 & 1;
  *(byte *)((int64_t)this_ptr + 0x4a) = bVar2;
  if (*(char *)((int64_t)this_ptr + 0x4b) != '\0') {
    *param_2 = *param_2 | bVar5;
    *param_1 = *param_1 | bVar2;
  }
  return;
}



// ============================================================
// 01196100
// ============================================================
// Function: FUN_01196100
// Address: 01196100
// Size: 2843 bytes
// Class: MUPitchMapper
// String references:
//   "MUPitchMapper"
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void FUN_01196100(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_01152110();
  *this_ptr = &g_02607d28;
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ac653 == '\0') {
    FUN_01196c60();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ac653 == '\0') {
    FUN_01196dd0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ac653 == '\0') {
    FUN_01196f40();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ac653 == '\0') {
    FUN_011970b0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xb) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ac653 == '\0') {
    FUN_01197220();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ac653 == '\0') {
    FUN_01197390();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5d) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ac653 == '\0') {
    FUN_01197500();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5e) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ac653 == '\0') {
    FUN_01197670();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5f) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ac653 == '\0') {
    FUN_011977e0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ac653 == '\0') {
    FUN_01197950();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 100) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ac653 == '\0') {
    FUN_01197ac0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xd) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ac653 == '\0') {
    FUN_01197c30();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x6c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ac653 == '\0') {
    FUN_01197e80();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 01805370
// ============================================================
// Function: FUN_01805370
// Address: 01805370
// Size: 534 bytes
// Class: MUPitchMapper
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


uint64_t FUN_01805370(char param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int64_t this_ptr;
  uint64_t uVar5;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  if (*(int *)(this_ptr + 0x68) != 0) {
    return 0;
  }
  uVar3 = FUN_01716ab0();
  uVar5 = (uint64_t)uVar3;
  if ((char)uVar3 != '\0') goto LAB_018053db;
  uVar5 = CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
  if ((*(byte *)(this_ptr + 0x60) & 100) != 0) {
    return uVar5;
  }
  if ((*(byte *)(this_ptr + 100) & 100) != 0) {
    return uVar5;
  }
  cVar2 = FUN_01716c00();
  if (cVar2 == '\0') {
    FUN_01715620();
    FUN_017185b0();
    local_38 = local_48;
    if (local_48 == 0) goto LAB_01805526;
    bVar1 = true;
    if (local_40 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    iVar4 = FUN_01715480();
    iVar4 = iVar4 + 3;
    iVar4 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
    iVar4 = ((iVar4 >> 0x1f & 0xcU) + iVar4) * 7;
    iVar4 = iVar4 + ((int)(short)iVar4 / 0xc) * -0xc;
    cVar2 = ((byte)((uint)(int)(short)iVar4 >> 0xf) & 0xc) + (char)iVar4 + '\x06';
    uVar3 = cVar2 * 0x2b;
    FUN_017185b0((int)(char)(cVar2 + ((char)((uVar3 & 0xffff) >> 0xf) + (char)(uVar3 >> 9)) * -0xc +
                            -6));
    local_38 = local_48;
    if (local_48 == 0) {
LAB_01805526:
      local_38 = 0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  cVar2 = FUN_01716ab0();
  if ((bVar1) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    return uVar5;
  }
LAB_018053db:
  if ((param_1 != '\0') && (*(char *)(this_ptr + 0x5f) != '\0')) {
    return CONCAT71((int7)(uVar5 >> 8),1);
  }
  return 0;
}



// ============================================================
// 01804160
// ============================================================
// Function: FUN_01804160
// Address: 01804160
// Size: 635 bytes
// Class: MUPitchMapper
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void FUN_01804160(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  void*arg1;
  int64_t this_ptr;
  
  FUN_00d61ea0();
  FUN_017e1f30();
  lVar2 = g_027d51a0;
  plVar1 = (int64_t *)*arg1;
  if (g_027d51a0 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027d51a0;
  if (cVar4 != '\0') {
    plVar1 = (int64_t *)*arg1;
    if (g_027d51a0 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar1 + 0x510))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      *(void*)(this_ptr + 0x60) = 1;
    }
    lVar2 = g_027d51a8;
    plVar1 = (int64_t *)*arg1;
    if (g_027d51a8 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar1 + 0x590))();
    lVar3 = g_027d51a8;
    if (cVar4 == '\0') {
      cVar4 = '\0';
    }
    else {
      plVar1 = (int64_t *)*arg1;
      if (g_027d51a8 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*plVar1 + 0x510))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      *(byte *)(this_ptr + 0x60) = *(byte *)(this_ptr + 0x60) | 0x10;
    }
  }
  lVar2 = g_027d51b0;
  plVar1 = (int64_t *)*arg1;
  if (g_027d51b0 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027d51b0;
  if (cVar4 != '\0') {
    plVar1 = (int64_t *)*arg1;
    if (g_027d51b0 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar1 + 0x510))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      *(void*)(this_ptr + 100) = 0x11;
    }
  }
  return;
}



// ============================================================
// 018045a0
// ============================================================
// Function: FUN_018045a0
// Address: 018045a0
// Size: 508 bytes
// Class: MUPitchMapper
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void FUN_018045a0(void* param_1)

{
  void *pvVar1;
  char *pcVar2;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_017e2270();
  if (local_40[0] == '\0') {
    if (local_48 == 0) goto LAB_0180476f;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == 0) goto LAB_0180476f;
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017e0a10();
  if (local_40[0] == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if (local_48 != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017dfc60();
    FUN_00d23310();
    pcVar2 = local_38;
    if (local_40[0] != '\0') {
      pcVar2 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar2 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      *this_ptr = local_48;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      FUN_00d50b20();
      return;
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_0180476f:
  *(void*)(this_ptr + 1) = 0;
  if (arg1 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = arg1;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01810ba0
// ============================================================
// Function: FUN_01810ba0
// Address: 01810ba0
// Size: 1139 bytes
// Class: MUPitchMapper
// String references:
//   "MUPitchMapperMappingStorage"
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void FUN_01810ba0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_026079b0;
  FUN_018111e0();
  FUN_01811460();
  FUN_018116e0();
  FUN_01811960();
  FUN_01811be0();
  FUN_01811e60();
  FUN_018120e0();
  FUN_01812360();
  FUN_018125e0();
  FUN_01812860();
  FUN_01812ae0();
  FUN_01812d60();
  FUN_01813050();
  *(void*)(this_ptr + 0xf) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5273 == '\0') {
    FUN_01813340();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x79) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5273 == '\0') {
    FUN_018134b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x7a) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5273 == '\0') {
    FUN_01813620();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x7b) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5273 == '\0') {
    FUN_01813790();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 0180ff60
// ============================================================
// Function: FUN_0180ff60
// Address: 0180ff60
// Size: 927 bytes
// Class: MUPitchMapper
// String references:
//   "MUPitchMapperEntry"
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void FUN_0180ff60(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02608110;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5343 == '\0') {
    FUN_01810360();
    FUN_00e87980();
  }
  FUN_018104d0();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5343 == '\0') {
    FUN_01810750();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5343 == '\0') {
    FUN_018108c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d5343 == '\0') {
    FUN_01810a30();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 01813bd0
// ============================================================
// Function: FUN_01813bd0
// Address: 01813bd0
// Size: 538 bytes
// Class: MUPitchMapper
// String references:
//   "MUPitchMapperWeight"
//   "MUPitchMapperCriterion"
//   "_criterion"
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void* FUN_01813bd0(void)

{
  int iVar1;
  uint32_t extraout_XMM0_Da;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027d6088 = "_criterion";
      g_027d6090 = &g_027d5428;
      g_027d6098 = 0;
      g_027d60a0 = 0x6500;
      g_027d60a8 = "MUPitchMapperCriterion";
      g_027d60b0 = &g_027d6198;
      g_027d60b8 = 0;
      ram_00000000027d60c0 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027d6088;
}



// ============================================================
// 01813900
// ============================================================
// Function: FUN_01813900
// Address: 01813900
// Size: 674 bytes
// Class: MUPitchMapper
// String references:
//   "MUPitchMapperWeight"
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void FUN_01813900(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02608800;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d54e3 == '\0') {
    FUN_01813bd0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d54e3 == '\0') {
    FUN_01813e10();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d54e3 == '\0') {
    FUN_01813f80();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 01197e80
// ============================================================
// Function: FUN_01197e80
// Address: 01197e80
// Size: 553 bytes
// Class: MUPitchMapper
// String references:
//   "MUPitchMapper"
//   "MUPartMapperVoicingMode"
//   "_voicingMode"
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void* FUN_01197e80(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027ac9c8 = "_voicingMode";
      g_027ac9d0 = &g_027ac598;
      g_027ac9d8 = 0;
      g_027ac9e0 = 0x6500;
      g_027ac9e8 = "MUPartMapperVoicingMode";
      g_027ac9f0 = &g_027aca78;
      g_027ac9f8 = 0;
      ram_00000000027aca00 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027ac9c8;
}



// ============================================================
// 01197c30
// ============================================================
// Function: FUN_01197c30
// Address: 01197c30
// Size: 553 bytes
// Class: MUPitchMapper
// String references:
//   "MUPartMapperScaleScope"
//   "_scaleScope"
//   "MUPitchMapper"
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void* FUN_01197c30(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027ac980 = "_scaleScope";
      g_027ac988 = &g_027ac598;
      g_027ac990 = 0;
      g_027ac998 = 0x6500;
      g_027ac9a0 = "MUPartMapperScaleScope";
      g_027ac9a8 = &g_027ac388;
      g_027ac9b0 = 0;
      ram_00000000027ac9b8 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027ac980;
}



// ============================================================
// 01803d20
// ============================================================
// Function: FUN_01803d20
// Address: 01803d20
// Size: 536 bytes
// Class: MUPitchMapper
// String references:
//   "MUPitchMapper"
//   "canRedirectOnDominants"
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void FUN_01803d20(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  FUN_00e87cb0();
  // [STATIC_INIT: property registration]
      g_028af7c8 = "canRedirectOnDominants";
      g_028af7d0 = &g_027ac598;
      g_028af7d8 = 0;
      g_028af7e0 = &g_027d54f8;
      g_028af7e8 = FUN_0180d240;
      g_028af7f0 = FUN_01803f60;
      g_028af7f8 = 0;
      ram_00000000028af800 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

