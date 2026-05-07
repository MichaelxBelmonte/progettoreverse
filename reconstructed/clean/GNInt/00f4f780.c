// Function: FUN_00f4f780
// Address: 00f4f780
// Size: 2064 bytes
// Class: GNInt
// === GNInt properties ===
//   GNInt           _assembledElementRendererCount
//   bool            _processPeriodBased
//   bool            _usesPososc
//   bool            _resetAllPhasesAtAttack
//   bool            _continueAllPhasesByDefault
//   bool            _renderWithOriginalTime
//   float           _freqDomainFormantResolution
//   GNInt           _freqDomainFourierSize
//   float           _freqDomainPhaseResetParametersScale
//   float           _formantPitchUpCompensationFactor
//   float           _formantPitchDownCompensationFactor
//   bool            _didFail
//   GNInt           _expectedResultLength
//   GNInt           _httpStatusCode
//   bool            _isSuspended
//   SInt64          _uploadLength
//   GNInt           _receivedResultLength
//   bool            _didTimeOut
//   float           _cent
//   GNInt           _westernStandardPitchIndexOffset
//   bool            _isLoop
//   GNInt           _numerator
//   GNInt           _denominator
//   GNInt           _beats
//   GNInt           _tonalKey
//   GNInt           _tonalGender
//   float           _time
//   float           _nextBeepStartTime
//   float           _beepTime
//   float           _beepLength
//   ... +133 more


void FUN_00f4f780(void)

{
  uint uVar1;
  uint8_t auVar2 [16];
  int iVar3;
  int64_t lVar4;
  void*puVar5;
  uint8_t (*pauVar6) [16];
  uint8_t (*arg1) [16];
  void*this_ptr;
  uint8_t (*pauVar7) [16];
  uint8_t (*pauVar8) [16];
  uint8_t (*pauVar9) [16];
  uint8_t (*pauVar10) [16];
  uint8_t (*pauVar11) [16];
  uint8_t (*pauVar12) [16];
  uint8_t (*pauVar13) [16];
  uint8_t (*pauVar14) [16];
  uint8_t (*pauVar15) [16];
  uint8_t (*pauVar16) [16];
  uint8_t (*pauVar17) [16];
  uint8_t (*pauVar18) [16];
  uint8_t (*pauVar19) [16];
  uint8_t (*pauVar20) [16];
  uint8_t (*pauVar21) [16];
  uint8_t (*pauVar22) [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
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
  uint8_t local_2c0 [16];
  uint8_t local_2a0 [16];
  uint8_t local_290 [16];
  int64_t local_278;
  int64_t local_270;
  int64_t local_268;
  int64_t local_260;
  int64_t local_258;
  int64_t local_250;
  int64_t local_248;
  uint8_t local_180 [16];
  uint8_t local_170 [16];
  uint8_t local_160 [16];
  uint8_t local_150 [16];
  uint8_t local_140 [16];
  uint8_t local_130 [16];
  uint8_t local_120 [16];
  uint8_t local_110 [16];
  
  auVar24 = *arg1;
  local_2a0._0_4_ = *(void*)(this_ptr + 2);
  pauVar7 = (uint8_t (*) [16])*this_ptr;
  iVar3 = local_2a0._0_4_;
  if ((int)local_2a0._0_4_ < 1) {
    pauVar7 = &local_2c0;
    iVar3 = 0;
  }
  lVar4 = this_ptr[1] - (int64_t)pauVar7;
  local_2a0._4_4_ = *(void*)(this_ptr + 7);
  if (iVar3 < (int)local_2a0._4_4_) {
    iVar3 = local_2a0._4_4_;
  }
  pauVar9 = (uint8_t (*) [16])this_ptr[5];
  if ((int)local_2a0._4_4_ < 1) {
    pauVar9 = &local_2c0;
  }
  local_278 = this_ptr[6] - (int64_t)pauVar9;
  local_2a0._8_4_ = *(void*)(this_ptr + 0xc);
  if (iVar3 < (int)local_2a0._8_4_) {
    iVar3 = local_2a0._8_4_;
  }
  pauVar11 = (uint8_t (*) [16])this_ptr[10];
  if ((int)local_2a0._8_4_ < 1) {
    pauVar11 = &local_2c0;
  }
  local_270 = this_ptr[0xb] - (int64_t)pauVar11;
  local_2a0._12_4_ = *(void*)(this_ptr + 0x11);
  if (iVar3 < (int)local_2a0._12_4_) {
    iVar3 = local_2a0._12_4_;
  }
  pauVar13 = (uint8_t (*) [16])this_ptr[0xf];
  if ((int)local_2a0._12_4_ < 1) {
    pauVar13 = &local_2c0;
  }
  local_268 = this_ptr[0x10] - (int64_t)pauVar13;
  local_290._0_4_ = *(void*)(this_ptr + 0x16);
  if (iVar3 < (int)local_290._0_4_) {
    iVar3 = local_290._0_4_;
  }
  pauVar15 = (uint8_t (*) [16])this_ptr[0x14];
  if ((int)local_290._0_4_ < 1) {
    pauVar15 = &local_2c0;
  }
  local_260 = this_ptr[0x15] - (int64_t)pauVar15;
  local_290._4_4_ = *(void*)(this_ptr + 0x1b);
  if (iVar3 < (int)local_290._4_4_) {
    iVar3 = local_290._4_4_;
  }
  pauVar17 = (uint8_t (*) [16])this_ptr[0x19];
  if ((int)local_290._4_4_ < 1) {
    pauVar17 = &local_2c0;
  }
  local_258 = this_ptr[0x1a] - (int64_t)pauVar17;
  local_290._8_4_ = *(void*)(this_ptr + 0x20);
  if (iVar3 < (int)local_290._8_4_) {
    iVar3 = local_290._8_4_;
  }
  pauVar19 = (uint8_t (*) [16])this_ptr[0x1e];
  if ((int)local_290._8_4_ < 1) {
    pauVar19 = &local_2c0;
  }
  local_250 = this_ptr[0x1f] - (int64_t)pauVar19;
  local_290._12_4_ = *(void*)(this_ptr + 0x25);
  if (iVar3 < (int)local_290._12_4_) {
    iVar3 = local_290._12_4_;
  }
  pauVar21 = (uint8_t (*) [16])this_ptr[0x23];
  if ((int)local_290._12_4_ < 1) {
    pauVar21 = &local_2c0;
  }
  local_248 = this_ptr[0x24] - (int64_t)pauVar21;
  if (iVar3 != 0) {
    auVar26 = arg1[1];
    auVar23 = arg1[2];
    uVar1 = *(uint *)arg1[0xf];
    pauVar6 = &local_180;
    local_180 = *pauVar7;
    auVar2 = *pauVar7 ^ auVar24;
    local_170 = *pauVar9;
    auVar28 = *pauVar9 ^ auVar24;
    local_160 = *pauVar11;
    auVar30 = *pauVar11 ^ auVar24;
    local_150 = *pauVar13;
    auVar33 = *pauVar13 ^ auVar24;
    local_140 = *pauVar15;
    auVar35 = *pauVar15 ^ auVar24;
    local_130 = *pauVar17;
    auVar29 = *pauVar17 ^ auVar24;
    local_120 = *pauVar19;
    auVar31 = *pauVar19 ^ auVar24;
    local_110 = *pauVar21;
    auVar24 = *pauVar21 ^ auVar24;
    do {
      pauVar6 = (uint8_t (*) [16])((uint64_t)pauVar6 ^ 0x80);
      auVar25 = aesdec(auVar2,auVar26);
      auVar28 = aesdec(auVar28,auVar26);
      auVar30 = aesdec(auVar30,auVar26);
      auVar33 = aesdec(auVar33,auVar26);
      pauVar8 = pauVar7;
      if ((int)local_2a0._0_4_ < 2) {
        pauVar8 = &local_2c0;
      }
      auVar35 = aesdec(auVar35,auVar26);
      puVar5 = *pauVar7 + lVar4;
      if ((int)local_2a0._0_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar38 = aesdec(auVar29,auVar26);
      lVar4 = (int64_t)puVar5 - (int64_t)pauVar8;
      auVar41 = aesdec(auVar31,auVar26);
      auVar2 = pauVar8[1];
      auVar44 = aesdec(auVar24,auVar26);
      auVar24 = arg1[3];
      auVar26 = aesdec(auVar25,auVar23);
      auVar29 = aesdec(auVar28,auVar23);
      auVar31 = aesdec(auVar30,auVar23);
      auVar33 = aesdec(auVar33,auVar23);
      pauVar10 = pauVar9;
      if ((int)local_2a0._4_4_ < 2) {
        pauVar10 = &local_2c0;
      }
      auVar35 = aesdec(auVar35,auVar23);
      puVar5 = *pauVar9 + local_278;
      if ((int)local_2a0._4_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar30 = aesdec(auVar38,auVar23);
      local_278 = (int64_t)puVar5 - (int64_t)pauVar10;
      auVar25 = aesdec(auVar41,auVar23);
      auVar28 = pauVar10[1];
      auVar38 = aesdec(auVar44,auVar23);
      auVar23 = arg1[4];
      auVar26 = aesdec(auVar26,auVar24);
      auVar29 = aesdec(auVar29,auVar24);
      auVar31 = aesdec(auVar31,auVar24);
      auVar33 = aesdec(auVar33,auVar24);
      pauVar12 = pauVar11;
      if ((int)local_2a0._8_4_ < 2) {
        pauVar12 = &local_2c0;
      }
      auVar35 = aesdec(auVar35,auVar24);
      puVar5 = *pauVar11 + local_270;
      if ((int)local_2a0._8_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar41 = aesdec(auVar30,auVar24);
      local_270 = (int64_t)puVar5 - (int64_t)pauVar12;
      auVar44 = aesdec(auVar25,auVar24);
      auVar30 = pauVar12[1];
      auVar38 = aesdec(auVar38,auVar24);
      auVar24 = arg1[5];
      auVar26 = aesdec(auVar26,auVar23);
      auVar29 = aesdec(auVar29,auVar23);
      auVar31 = aesdec(auVar31,auVar23);
      auVar25 = aesdec(auVar33,auVar23);
      pauVar14 = pauVar13;
      if ((int)local_2a0._12_4_ < 2) {
        pauVar14 = &local_2c0;
      }
      auVar35 = aesdec(auVar35,auVar23);
      puVar5 = *pauVar13 + local_268;
      if ((int)local_2a0._12_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar41 = aesdec(auVar41,auVar23);
      local_268 = (int64_t)puVar5 - (int64_t)pauVar14;
      auVar44 = aesdec(auVar44,auVar23);
      auVar33 = pauVar14[1];
      auVar38 = aesdec(auVar38,auVar23);
      auVar23 = arg1[6];
      auVar26 = aesdec(auVar26,auVar24);
      auVar29 = aesdec(auVar29,auVar24);
      auVar31 = aesdec(auVar31,auVar24);
      auVar25 = aesdec(auVar25,auVar24);
      pauVar16 = pauVar15;
      if ((int)local_290._0_4_ < 2) {
        pauVar16 = &local_2c0;
      }
      auVar36 = aesdec(auVar35,auVar24);
      puVar5 = *pauVar15 + local_260;
      if ((int)local_290._0_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar41 = aesdec(auVar41,auVar24);
      local_260 = (int64_t)puVar5 - (int64_t)pauVar16;
      auVar44 = aesdec(auVar44,auVar24);
      auVar35 = pauVar16[1];
      auVar45 = aesdec(auVar38,auVar24);
      auVar24 = arg1[7];
      auVar26 = aesdec(auVar26,auVar23);
      auVar38 = aesdec(auVar29,auVar23);
      auVar31 = aesdec(auVar31,auVar23);
      auVar25 = aesdec(auVar25,auVar23);
      pauVar18 = pauVar17;
      if ((int)local_290._4_4_ < 2) {
        pauVar18 = &local_2c0;
      }
      auVar36 = aesdec(auVar36,auVar23);
      puVar5 = *pauVar17 + local_258;
      if ((int)local_290._4_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar39 = aesdec(auVar41,auVar23);
      local_258 = (int64_t)puVar5 - (int64_t)pauVar18;
      auVar44 = aesdec(auVar44,auVar23);
      auVar29 = pauVar18[1];
      auVar45 = aesdec(auVar45,auVar23);
      auVar23 = arg1[8];
      auVar26 = aesdec(auVar26,auVar24);
      auVar38 = aesdec(auVar38,auVar24);
      auVar41 = aesdec(auVar31,auVar24);
      auVar25 = aesdec(auVar25,auVar24);
      pauVar20 = pauVar19;
      if ((int)local_290._8_4_ < 2) {
        pauVar20 = &local_2c0;
      }
      auVar36 = aesdec(auVar36,auVar24);
      puVar5 = *pauVar19 + local_250;
      if ((int)local_290._8_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar39 = aesdec(auVar39,auVar24);
      local_250 = (int64_t)puVar5 - (int64_t)pauVar20;
      auVar44 = aesdec(auVar44,auVar24);
      auVar31 = pauVar20[1];
      auVar45 = aesdec(auVar45,auVar24);
      auVar24 = arg1[9];
      auVar26 = aesdec(auVar26,auVar23);
      auVar38 = aesdec(auVar38,auVar23);
      auVar41 = aesdec(auVar41,auVar23);
      auVar25 = aesdec(auVar25,auVar23);
      pauVar22 = pauVar21;
      if ((int)local_290._12_4_ < 2) {
        pauVar22 = &local_2c0;
      }
      auVar36 = aesdec(auVar36,auVar23);
      puVar5 = *pauVar21 + local_248;
      if ((int)local_290._12_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar39 = aesdec(auVar39,auVar23);
      local_248 = (int64_t)puVar5 - (int64_t)pauVar22;
      auVar42 = aesdec(auVar44,auVar23);
      auVar44 = pauVar22[1];
      auVar45 = aesdec(auVar45,auVar23);
      auVar23 = arg1[10];
      if (10 < uVar1) {
        auVar26 = aesdec(auVar26,auVar24);
        auVar38 = aesdec(auVar38,auVar24);
        auVar41 = aesdec(auVar41,auVar24);
        auVar25 = aesdec(auVar25,auVar24);
        auVar36 = aesdec(auVar36,auVar24);
        auVar39 = aesdec(auVar39,auVar24);
        auVar42 = aesdec(auVar42,auVar24);
        auVar45 = aesdec(auVar45,auVar24);
        auVar24 = arg1[0xb];
        auVar26 = aesdec(auVar26,auVar23);
        auVar38 = aesdec(auVar38,auVar23);
        auVar41 = aesdec(auVar41,auVar23);
        auVar25 = aesdec(auVar25,auVar23);
        auVar36 = aesdec(auVar36,auVar23);
        auVar39 = aesdec(auVar39,auVar23);
        auVar42 = aesdec(auVar42,auVar23);
        auVar45 = aesdec(auVar45,auVar23);
        auVar23 = arg1[0xc];
        if (uVar1 != 0xb) {
          auVar26 = aesdec(auVar26,auVar24);
          auVar38 = aesdec(auVar38,auVar24);
          auVar41 = aesdec(auVar41,auVar24);
          auVar25 = aesdec(auVar25,auVar24);
          auVar36 = aesdec(auVar36,auVar24);
          auVar39 = aesdec(auVar39,auVar24);
          auVar42 = aesdec(auVar42,auVar24);
          auVar45 = aesdec(auVar45,auVar24);
          auVar24 = arg1[0xd];
          auVar26 = aesdec(auVar26,auVar23);
          auVar38 = aesdec(auVar38,auVar23);
          auVar41 = aesdec(auVar41,auVar23);
          auVar25 = aesdec(auVar25,auVar23);
          auVar36 = aesdec(auVar36,auVar23);
          auVar39 = aesdec(auVar39,auVar23);
          auVar42 = aesdec(auVar42,auVar23);
          auVar45 = aesdec(auVar45,auVar23);
          auVar23 = arg1[0xe];
        }
      }
      auVar27 = aesdec(auVar26,auVar24);
      auVar38 = aesdec(auVar38,auVar24);
      auVar41 = aesdec(auVar41,auVar24);
      auVar26 = vpcmpgtd_avx(local_2a0,(uint8_t  [16])0x0);
      auVar34 = aesdec(auVar25,auVar24);
      auVar36 = aesdec(auVar36,auVar24);
      local_2a0 = vpaddd_avx(auVar26,local_2a0);
      auVar39 = aesdec(auVar39,auVar24);
      auVar43 = aesdec(auVar42,auVar24);
      auVar46 = aesdec(auVar45,auVar24);
      auVar26 = arg1[1];
      auVar42 = aesdeclast(auVar27,auVar23);
      auVar27 = aesdeclast(auVar38,auVar23);
      auVar32 = aesdeclast(auVar41,auVar23);
      auVar25 = pauVar6[1];
      auVar24 = vpcmpgtd_avx(local_290,(uint8_t  [16])0x0);
      auVar34 = aesdeclast(auVar34,auVar23);
      auVar38 = pauVar6[2];
      auVar37 = aesdeclast(auVar36,auVar23);
      auVar41 = pauVar6[3];
      local_290 = vpaddd_avx(local_290,auVar24);
      auVar24 = *arg1;
      auVar40 = aesdeclast(auVar39,auVar23);
      auVar36 = pauVar6[4];
      auVar43 = aesdeclast(auVar43,auVar23);
      auVar45 = pauVar6[5];
      auVar46 = aesdeclast(auVar46,auVar23);
      auVar39 = pauVar6[6];
      auVar23 = arg1[2];
      *(uint8_t (*) [16])((int64_t)pauVar8 + lVar4) = auVar42 ^ *pauVar6;
      pauVar7 = pauVar8 + 1;
      auVar42 = pauVar6[7];
      *(uint8_t (*) [16])((int64_t)pauVar10 + local_278) = auVar27 ^ auVar25;
      pauVar9 = pauVar10 + 1;
      *pauVar6 = auVar2;
      auVar2 = auVar2 ^ auVar24;
      *(uint8_t (*) [16])((int64_t)pauVar12 + local_270) = auVar32 ^ auVar38;
      pauVar11 = pauVar12 + 1;
      pauVar6[1] = auVar28;
      auVar28 = auVar28 ^ auVar24;
      *(uint8_t (*) [16])((int64_t)pauVar14 + local_268) = auVar34 ^ auVar41;
      pauVar13 = pauVar14 + 1;
      pauVar6[2] = auVar30;
      auVar30 = auVar30 ^ auVar24;
      *(uint8_t (*) [16])((int64_t)pauVar16 + local_260) = auVar37 ^ auVar36;
      pauVar15 = pauVar16 + 1;
      pauVar6[3] = auVar33;
      auVar33 = auVar33 ^ auVar24;
      pauVar6[4] = auVar35;
      auVar35 = auVar24 ^ auVar35;
      *(uint8_t (*) [16])((int64_t)pauVar18 + local_258) = auVar40 ^ auVar45;
      pauVar17 = pauVar18 + 1;
      pauVar6[5] = auVar29;
      auVar29 = auVar24 ^ auVar29;
      *(uint8_t (*) [16])((int64_t)pauVar20 + local_250) = auVar43 ^ auVar39;
      pauVar19 = pauVar20 + 1;
      pauVar6[6] = auVar31;
      auVar31 = auVar24 ^ auVar31;
      *(uint8_t (*) [16])((int64_t)pauVar22 + local_248) = auVar46 ^ auVar42;
      pauVar21 = pauVar22 + 1;
      pauVar6[7] = auVar44;
      auVar24 = auVar24 ^ auVar44;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

