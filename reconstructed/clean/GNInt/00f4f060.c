// Function: FUN_00f4f060
// Address: 00f4f060
// Size: 1796 bytes
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


void FUN_00f4f060(void)

{
  uint uVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  int iVar7;
  int64_t lVar8;
  void*puVar9;
  uint8_t (*arg1) [16];
  void*this_ptr;
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
  uint8_t (*pauVar23) [16];
  uint8_t (*pauVar24) [16];
  uint8_t (*pauVar25) [16];
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
  uint8_t local_100 [16];
  uint8_t local_e0 [16];
  uint8_t local_d0 [16];
  int64_t local_b8;
  int64_t local_b0;
  int64_t local_a8;
  int64_t local_a0;
  int64_t local_98;
  int64_t local_90;
  int64_t local_88;
  
  auVar41 = *arg1;
  local_e0._0_4_ = *(void*)(this_ptr + 2);
  iVar7 = 0;
  if (0 < (int)local_e0._0_4_) {
    iVar7 = local_e0._0_4_;
  }
  pauVar10 = (uint8_t (*) [16])*this_ptr;
  if ((int)local_e0._0_4_ < 1) {
    pauVar10 = &local_100;
  }
  lVar8 = this_ptr[1] - (int64_t)pauVar10;
  local_e0._4_4_ = *(void*)(this_ptr + 7);
  if (iVar7 < (int)local_e0._4_4_) {
    iVar7 = local_e0._4_4_;
  }
  pauVar12 = (uint8_t (*) [16])this_ptr[5];
  if ((int)local_e0._4_4_ < 1) {
    pauVar12 = &local_100;
  }
  local_b8 = this_ptr[6] - (int64_t)pauVar12;
  local_e0._8_4_ = *(void*)(this_ptr + 0xc);
  if (iVar7 < (int)local_e0._8_4_) {
    iVar7 = local_e0._8_4_;
  }
  pauVar14 = (uint8_t (*) [16])this_ptr[10];
  if ((int)local_e0._8_4_ < 1) {
    pauVar14 = &local_100;
  }
  local_b0 = this_ptr[0xb] - (int64_t)pauVar14;
  local_e0._12_4_ = *(void*)(this_ptr + 0x11);
  if (iVar7 < (int)local_e0._12_4_) {
    iVar7 = local_e0._12_4_;
  }
  pauVar16 = (uint8_t (*) [16])this_ptr[0xf];
  if ((int)local_e0._12_4_ < 1) {
    pauVar16 = &local_100;
  }
  local_a8 = this_ptr[0x10] - (int64_t)pauVar16;
  local_d0._0_4_ = *(void*)(this_ptr + 0x16);
  if (iVar7 < (int)local_d0._0_4_) {
    iVar7 = local_d0._0_4_;
  }
  pauVar18 = (uint8_t (*) [16])this_ptr[0x14];
  if ((int)local_d0._0_4_ < 1) {
    pauVar18 = &local_100;
  }
  local_a0 = this_ptr[0x15] - (int64_t)pauVar18;
  local_d0._4_4_ = *(void*)(this_ptr + 0x1b);
  if (iVar7 < (int)local_d0._4_4_) {
    iVar7 = local_d0._4_4_;
  }
  pauVar20 = (uint8_t (*) [16])this_ptr[0x19];
  if ((int)local_d0._4_4_ < 1) {
    pauVar20 = &local_100;
  }
  local_98 = this_ptr[0x1a] - (int64_t)pauVar20;
  local_d0._8_4_ = *(void*)(this_ptr + 0x20);
  if (iVar7 < (int)local_d0._8_4_) {
    iVar7 = local_d0._8_4_;
  }
  pauVar22 = (uint8_t (*) [16])this_ptr[0x1e];
  if ((int)local_d0._8_4_ < 1) {
    pauVar22 = &local_100;
  }
  local_90 = this_ptr[0x1f] - (int64_t)pauVar22;
  local_d0._12_4_ = *(void*)(this_ptr + 0x25);
  if (iVar7 < (int)local_d0._12_4_) {
    iVar7 = local_d0._12_4_;
  }
  pauVar24 = (uint8_t (*) [16])this_ptr[0x23];
  if ((int)local_d0._12_4_ < 1) {
    pauVar24 = &local_100;
  }
  local_88 = this_ptr[0x24] - (int64_t)pauVar24;
  if (iVar7 != 0) {
    auVar27 = arg1[1];
    auVar26 = arg1[2];
    uVar1 = *(uint *)arg1[0xf];
    auVar28 = *(uint8_t (*) [16])(this_ptr + 3) ^ auVar41 ^ *pauVar10;
    auVar29 = *(uint8_t (*) [16])(this_ptr + 8) ^ auVar41 ^ *pauVar12;
    auVar31 = *(uint8_t (*) [16])(this_ptr + 0xd) ^ auVar41 ^ *pauVar14;
    auVar33 = *(uint8_t (*) [16])(this_ptr + 0x12) ^ auVar41 ^ *pauVar16;
    auVar35 = *(uint8_t (*) [16])(this_ptr + 0x17) ^ auVar41 ^ *pauVar18;
    auVar34 = *(uint8_t (*) [16])(this_ptr + 0x1c) ^ auVar41 ^ *pauVar20;
    auVar32 = *(uint8_t (*) [16])(this_ptr + 0x21) ^ auVar41 ^ *pauVar22;
    auVar30 = *(uint8_t (*) [16])(this_ptr + 0x26) ^ auVar41 ^ *pauVar24;
    do {
      auVar28 = aesenc(auVar28,auVar27);
      auVar29 = aesenc(auVar29,auVar27);
      auVar31 = aesenc(auVar31,auVar27);
      auVar33 = aesenc(auVar33,auVar27);
      pauVar11 = pauVar10;
      if ((int)local_e0._0_4_ < 2) {
        pauVar11 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar27);
      puVar9 = *pauVar10 + lVar8;
      if ((int)local_e0._0_4_ < 1) {
        puVar9 = local_100;
      }
      auVar36 = aesenc(auVar34,auVar27);
      lVar8 = (int64_t)puVar9 - (int64_t)pauVar11;
      auVar38 = aesenc(auVar32,auVar27);
      auVar2 = auVar41 ^ pauVar11[1];
      auVar40 = aesenc(auVar30,auVar27);
      auVar27 = arg1[3];
      auVar28 = aesenc(auVar28,auVar26);
      auVar30 = aesenc(auVar29,auVar26);
      auVar32 = aesenc(auVar31,auVar26);
      auVar34 = aesenc(auVar33,auVar26);
      pauVar13 = pauVar12;
      if ((int)local_e0._4_4_ < 2) {
        pauVar13 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar26);
      puVar9 = *pauVar12 + local_b8;
      if ((int)local_e0._4_4_ < 1) {
        puVar9 = local_100;
      }
      auVar33 = aesenc(auVar36,auVar26);
      local_b8 = (int64_t)puVar9 - (int64_t)pauVar13;
      auVar31 = aesenc(auVar38,auVar26);
      auVar36 = auVar41 ^ pauVar13[1];
      auVar29 = aesenc(auVar40,auVar26);
      auVar26 = arg1[4];
      auVar28 = aesenc(auVar28,auVar27);
      auVar30 = aesenc(auVar30,auVar27);
      auVar32 = aesenc(auVar32,auVar27);
      auVar34 = aesenc(auVar34,auVar27);
      pauVar15 = pauVar14;
      if ((int)local_e0._8_4_ < 2) {
        pauVar15 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar27);
      puVar9 = *pauVar14 + local_b0;
      if ((int)local_e0._8_4_ < 1) {
        puVar9 = local_100;
      }
      auVar33 = aesenc(auVar33,auVar27);
      local_b0 = (int64_t)puVar9 - (int64_t)pauVar15;
      auVar31 = aesenc(auVar31,auVar27);
      auVar38 = auVar41 ^ pauVar15[1];
      auVar29 = aesenc(auVar29,auVar27);
      auVar27 = arg1[5];
      auVar28 = aesenc(auVar28,auVar26);
      auVar30 = aesenc(auVar30,auVar26);
      auVar32 = aesenc(auVar32,auVar26);
      auVar34 = aesenc(auVar34,auVar26);
      pauVar17 = pauVar16;
      if ((int)local_e0._12_4_ < 2) {
        pauVar17 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar26);
      puVar9 = *pauVar16 + local_a8;
      if ((int)local_e0._12_4_ < 1) {
        puVar9 = local_100;
      }
      auVar33 = aesenc(auVar33,auVar26);
      local_a8 = (int64_t)puVar9 - (int64_t)pauVar17;
      auVar31 = aesenc(auVar31,auVar26);
      auVar40 = auVar41 ^ pauVar17[1];
      auVar29 = aesenc(auVar29,auVar26);
      auVar26 = arg1[6];
      auVar28 = aesenc(auVar28,auVar27);
      auVar30 = aesenc(auVar30,auVar27);
      auVar32 = aesenc(auVar32,auVar27);
      auVar34 = aesenc(auVar34,auVar27);
      pauVar19 = pauVar18;
      if ((int)local_d0._0_4_ < 2) {
        pauVar19 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar27);
      puVar9 = *pauVar18 + local_a0;
      if ((int)local_d0._0_4_ < 1) {
        puVar9 = local_100;
      }
      auVar33 = aesenc(auVar33,auVar27);
      local_a0 = (int64_t)puVar9 - (int64_t)pauVar19;
      auVar31 = aesenc(auVar31,auVar27);
      auVar3 = auVar41 ^ pauVar19[1];
      auVar29 = aesenc(auVar29,auVar27);
      auVar27 = arg1[7];
      auVar28 = aesenc(auVar28,auVar26);
      auVar30 = aesenc(auVar30,auVar26);
      auVar32 = aesenc(auVar32,auVar26);
      auVar34 = aesenc(auVar34,auVar26);
      pauVar21 = pauVar20;
      if ((int)local_d0._4_4_ < 2) {
        pauVar21 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar26);
      puVar9 = *pauVar20 + local_98;
      if ((int)local_d0._4_4_ < 1) {
        puVar9 = local_100;
      }
      auVar33 = aesenc(auVar33,auVar26);
      local_98 = (int64_t)puVar9 - (int64_t)pauVar21;
      auVar31 = aesenc(auVar31,auVar26);
      auVar4 = auVar41 ^ pauVar21[1];
      auVar29 = aesenc(auVar29,auVar26);
      auVar26 = arg1[8];
      auVar28 = aesenc(auVar28,auVar27);
      auVar30 = aesenc(auVar30,auVar27);
      auVar32 = aesenc(auVar32,auVar27);
      auVar34 = aesenc(auVar34,auVar27);
      pauVar23 = pauVar22;
      if ((int)local_d0._8_4_ < 2) {
        pauVar23 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar27);
      puVar9 = *pauVar22 + local_90;
      if ((int)local_d0._8_4_ < 1) {
        puVar9 = local_100;
      }
      auVar33 = aesenc(auVar33,auVar27);
      local_90 = (int64_t)puVar9 - (int64_t)pauVar23;
      auVar31 = aesenc(auVar31,auVar27);
      auVar5 = auVar41 ^ pauVar23[1];
      auVar29 = aesenc(auVar29,auVar27);
      auVar27 = arg1[9];
      auVar28 = aesenc(auVar28,auVar26);
      auVar30 = aesenc(auVar30,auVar26);
      auVar32 = aesenc(auVar32,auVar26);
      auVar34 = aesenc(auVar34,auVar26);
      pauVar25 = pauVar24;
      if ((int)local_d0._12_4_ < 2) {
        pauVar25 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar26);
      puVar9 = *pauVar24 + local_88;
      if ((int)local_d0._12_4_ < 1) {
        puVar9 = local_100;
      }
      auVar33 = aesenc(auVar33,auVar26);
      local_88 = (int64_t)puVar9 - (int64_t)pauVar25;
      auVar31 = aesenc(auVar31,auVar26);
      auVar6 = auVar41 ^ pauVar25[1];
      auVar41 = aesenc(auVar29,auVar26);
      auVar26 = arg1[10];
      if (10 < uVar1) {
        auVar28 = aesenc(auVar28,auVar27);
        auVar30 = aesenc(auVar30,auVar27);
        auVar32 = aesenc(auVar32,auVar27);
        auVar34 = aesenc(auVar34,auVar27);
        auVar35 = aesenc(auVar35,auVar27);
        auVar33 = aesenc(auVar33,auVar27);
        auVar31 = aesenc(auVar31,auVar27);
        auVar41 = aesenc(auVar41,auVar27);
        auVar27 = arg1[0xb];
        auVar28 = aesenc(auVar28,auVar26);
        auVar30 = aesenc(auVar30,auVar26);
        auVar32 = aesenc(auVar32,auVar26);
        auVar34 = aesenc(auVar34,auVar26);
        auVar35 = aesenc(auVar35,auVar26);
        auVar33 = aesenc(auVar33,auVar26);
        auVar31 = aesenc(auVar31,auVar26);
        auVar41 = aesenc(auVar41,auVar26);
        auVar26 = arg1[0xc];
        if (uVar1 != 0xb) {
          auVar28 = aesenc(auVar28,auVar27);
          auVar30 = aesenc(auVar30,auVar27);
          auVar32 = aesenc(auVar32,auVar27);
          auVar34 = aesenc(auVar34,auVar27);
          auVar35 = aesenc(auVar35,auVar27);
          auVar33 = aesenc(auVar33,auVar27);
          auVar31 = aesenc(auVar31,auVar27);
          auVar41 = aesenc(auVar41,auVar27);
          auVar27 = arg1[0xd];
          auVar28 = aesenc(auVar28,auVar26);
          auVar30 = aesenc(auVar30,auVar26);
          auVar32 = aesenc(auVar32,auVar26);
          auVar34 = aesenc(auVar34,auVar26);
          auVar35 = aesenc(auVar35,auVar26);
          auVar33 = aesenc(auVar33,auVar26);
          auVar31 = aesenc(auVar31,auVar26);
          auVar41 = aesenc(auVar41,auVar26);
          auVar26 = arg1[0xe];
        }
      }
      auVar29 = aesenc(auVar28,auVar27);
      auVar30 = aesenc(auVar30,auVar27);
      auVar32 = aesenc(auVar32,auVar27);
      auVar28 = vpcmpgtd_avx(local_e0,(uint8_t  [16])0x0);
      auVar34 = aesenc(auVar34,auVar27);
      auVar35 = aesenc(auVar35,auVar27);
      local_e0 = vpaddd_avx(auVar28,local_e0);
      auVar37 = aesenc(auVar33,auVar27);
      auVar39 = aesenc(auVar31,auVar27);
      auVar42 = aesenc(auVar41,auVar27);
      auVar27 = arg1[1];
      auVar28 = aesenclast(auVar29,auVar26);
      auVar29 = aesenclast(auVar30,auVar26);
      auVar31 = aesenclast(auVar32,auVar26);
      auVar41 = vpcmpgtd_avx(local_d0,(uint8_t  [16])0x0);
      auVar33 = aesenclast(auVar34,auVar26);
      auVar35 = aesenclast(auVar35,auVar26);
      local_d0 = vpaddd_avx(local_d0,auVar41);
      auVar41 = *arg1;
      auVar34 = aesenclast(auVar37,auVar26);
      auVar32 = aesenclast(auVar39,auVar26);
      auVar30 = aesenclast(auVar42,auVar26);
      auVar26 = arg1[2];
      *(uint8_t (*) [16])((int64_t)pauVar11 + lVar8) = auVar28;
      pauVar10 = pauVar11 + 1;
      auVar28 = auVar28 ^ auVar2;
      *(uint8_t (*) [16])((int64_t)pauVar13 + local_b8) = auVar29;
      pauVar12 = pauVar13 + 1;
      auVar29 = auVar29 ^ auVar36;
      *(uint8_t (*) [16])((int64_t)pauVar15 + local_b0) = auVar31;
      pauVar14 = pauVar15 + 1;
      auVar31 = auVar31 ^ auVar38;
      *(uint8_t (*) [16])((int64_t)pauVar17 + local_a8) = auVar33;
      pauVar16 = pauVar17 + 1;
      auVar33 = auVar33 ^ auVar40;
      *(uint8_t (*) [16])((int64_t)pauVar19 + local_a0) = auVar35;
      pauVar18 = pauVar19 + 1;
      auVar35 = auVar35 ^ auVar3;
      *(uint8_t (*) [16])((int64_t)pauVar21 + local_98) = auVar34;
      pauVar20 = pauVar21 + 1;
      auVar34 = auVar34 ^ auVar4;
      *(uint8_t (*) [16])((int64_t)pauVar23 + local_90) = auVar32;
      pauVar22 = pauVar23 + 1;
      auVar32 = auVar32 ^ auVar5;
      *(uint8_t (*) [16])((int64_t)pauVar25 + local_88) = auVar30;
      pauVar24 = pauVar25 + 1;
      auVar30 = auVar30 ^ auVar6;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

