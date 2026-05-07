// Function: FUN_014efd00
// Address: 014efd00
// Size: 703 bytes
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


int64_t * FUN_014efd00(void)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint32_t uVar12;
  uint64_t uVar13;
  uint *arg1;
  int64_t *this_ptr;
  uint uVar14;
  int64_t lVar15;
  uint uVar16;
  uint64_t uVar17;
  int64_t lVar18;
  uint32_t uVar19;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dc_01;
  uint32_t extraout_XMM0_Dc_02;
  uint32_t extraout_XMM0_Dc_03;
  uint32_t extraout_XMM0_Dc_04;
  uint32_t extraout_XMM0_Dc_05;
  uint32_t extraout_XMM0_Dc_06;
  uint32_t extraout_XMM0_Dc_07;
  uint32_t extraout_XMM0_Dc_08;
  uint32_t extraout_XMM0_Dc_09;
  uint32_t extraout_XMM0_Dc_10;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint32_t extraout_XMM0_Dd_01;
  uint32_t extraout_XMM0_Dd_02;
  uint32_t extraout_XMM0_Dd_03;
  uint32_t extraout_XMM0_Dd_04;
  uint32_t extraout_XMM0_Dd_05;
  uint32_t extraout_XMM0_Dd_06;
  uint32_t extraout_XMM0_Dd_07;
  uint32_t extraout_XMM0_Dd_08;
  uint32_t extraout_XMM0_Dd_09;
  uint32_t extraout_XMM0_Dd_10;
  uint8_t auVar20 [16];
  int64_t local_68;
  char local_60;
  uint8_t local_48 [16];
  
  uVar14 = *arg1;
  if ((uVar14 & 1) != 0) {
    uVar14 = uVar14 + 1;
    *arg1 = uVar14;
  }
  FUN_00e84080();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  if ((int)uVar14 < 2) goto LAB_014eff92;
  lVar2 = *(int64_t *)(local_68 + 0x10);
  uVar16 = uVar14 >> 1;
  if (uVar14 < 8) {
    uVar13 = 0;
  }
  else {
    uVar13 = (uint64_t)(uVar16 & 0xfffffffc);
    uVar17 = (uVar13 - 4 >> 2) + 1;
    if (uVar13 - 4 == 0) {
      lVar15 = 0;
LAB_014efeda:
      lVar18 = lVar2 + lVar15 * 4;
      uVar19 = *(void*)(lVar18 + 4);
      uVar12 = *(void*)(lVar18 + 0xc);
      local_48._0_8_ = _powf();
      local_48._8_4_ = extraout_XMM0_Dc_07;
      local_48._12_4_ = extraout_XMM0_Dd_07;
      uVar3 = _powf(uVar19);
      auVar9._8_4_ = extraout_XMM0_Dc_08;
      auVar9._0_8_ = uVar3;
      auVar9._12_4_ = extraout_XMM0_Dd_08;
      auVar20 = insertps(local_48,auVar9,0x10);
      uVar3 = _powf(*(void*)(lVar2 + 8 + lVar15 * 4));
      auVar10._8_4_ = extraout_XMM0_Dc_09;
      auVar10._0_8_ = uVar3;
      auVar10._12_4_ = extraout_XMM0_Dd_09;
      auVar20 = insertps(auVar20,auVar10,0x20);
      uVar3 = _powf(uVar12);
      auVar11._8_4_ = extraout_XMM0_Dc_10;
      auVar11._0_8_ = uVar3;
      auVar11._12_4_ = extraout_XMM0_Dd_10;
      auVar20 = insertps(auVar20,auVar11,0x30);
      *(uint8_t (*) [16])(lVar2 + lVar15 * 4) = auVar20;
    }
    else {
      lVar18 = -(uVar17 & 0xfffffffffffffffe);
      lVar15 = 0;
      do {
        lVar1 = lVar2 + lVar15 * 4;
        uVar19 = *(void*)(lVar1 + 4);
        uVar12 = *(void*)(lVar1 + 0xc);
        local_48._0_8_ = _powf();
        local_48._8_4_ = extraout_XMM0_Dc;
        local_48._12_4_ = extraout_XMM0_Dd;
        uVar3 = _powf(uVar19);
        auVar20._8_4_ = extraout_XMM0_Dc_00;
        auVar20._0_8_ = uVar3;
        auVar20._12_4_ = extraout_XMM0_Dd_00;
        auVar20 = insertps(local_48,auVar20,0x10);
        uVar3 = _powf(*(void*)(lVar2 + 8 + lVar15 * 4));
        auVar4._8_4_ = extraout_XMM0_Dc_01;
        auVar4._0_8_ = uVar3;
        auVar4._12_4_ = extraout_XMM0_Dd_01;
        auVar20 = insertps(auVar20,auVar4,0x20);
        uVar3 = _powf(uVar12);
        auVar5._8_4_ = extraout_XMM0_Dc_02;
        auVar5._0_8_ = uVar3;
        auVar5._12_4_ = extraout_XMM0_Dd_02;
        auVar20 = insertps(auVar20,auVar5,0x30);
        *(uint8_t (*) [16])(lVar2 + lVar15 * 4) = auVar20;
        lVar1 = lVar2 + 0x10 + lVar15 * 4;
        uVar19 = *(void*)(lVar1 + 4);
        uVar12 = *(void*)(lVar1 + 0xc);
        local_48._0_8_ = _powf();
        local_48._8_4_ = extraout_XMM0_Dc_03;
        local_48._12_4_ = extraout_XMM0_Dd_03;
        uVar3 = _powf(uVar19);
        auVar6._8_4_ = extraout_XMM0_Dc_04;
        auVar6._0_8_ = uVar3;
        auVar6._12_4_ = extraout_XMM0_Dd_04;
        auVar20 = insertps(local_48,auVar6,0x10);
        uVar3 = _powf(*(void*)(lVar2 + 0x18 + lVar15 * 4));
        auVar7._8_4_ = extraout_XMM0_Dc_05;
        auVar7._0_8_ = uVar3;
        auVar7._12_4_ = extraout_XMM0_Dd_05;
        auVar20 = insertps(auVar20,auVar7,0x20);
        uVar3 = _powf(uVar12);
        auVar8._8_4_ = extraout_XMM0_Dc_06;
        auVar8._0_8_ = uVar3;
        auVar8._12_4_ = extraout_XMM0_Dd_06;
        auVar20 = insertps(auVar20,auVar8,0x30);
        *(uint8_t (*) [16])(lVar2 + 0x10 + lVar15 * 4) = auVar20;
        lVar15 = lVar15 + 8;
        lVar18 = lVar18 + 2;
      } while (lVar18 != 0);
      if ((uVar17 & 1) != 0) goto LAB_014efeda;
    }
    if (uVar13 == uVar16) goto LAB_014eff92;
  }
  do {
    uVar19 = _powf(*(void*)(lVar2 + uVar13 * 4));
    *(void*)(lVar2 + uVar13 * 4) = uVar19;
    uVar13 = uVar13 + 1;
  } while (uVar16 != uVar13);
LAB_014eff92:
  *this_ptr = local_68;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

