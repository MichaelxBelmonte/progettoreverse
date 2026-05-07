// Function: FUN_01dc4200
// Address: 01dc4200
// Size: 2482 bytes
// Class: MUSpectrumShaper
// === MUSpectrumShaper properties ===
//   GNInt           _assembledElementRendererCount
//   MUSpectrumShaperSpectrumType _spectrumType
//   bool            _processSpectrumShaper
//   bool            _canUseSpectrumShaper
//   bool            _processEqualizer
//   bool            _processLowerSpectrum
//   bool            _processUpperSpectrum
//   bool            _isBypassed
//   GNInt           _overallSpectrumFundamentalPitchIndex
//   float           _overallSpectrumFreqPerBin
//   float           _referenceMagnitudeSum
//   float           _maximumMagnitudeSum
//   float           _synthAmps
//   float           _synthPhases
//   float           _emphasizePow
//   float           _allGain
//   float           _ampDifferencePow
//   float           _clipLimit
//   bool            _didRequestCacheValidation
//   bool            _appliedEqualizerFactorsAreValid
//   bool            _appliedEqualizerFormantFactorsAreValid
//   bool            _processSpectrumShaperIsValid
//   float           _startValue
//   float           _riseDuration
//   float           _riseEndValue
//   float           _decayStartTime
//   float           _decayEndTime
//   float           _decayFactor
//   float           _endValue
//   bool            _needsProcessEnvelope
//   ... +35 more


void FUN_01dc4200(void)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  bool bVar5;
  bool bVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int64_t *plVar12;
  int64_t lVar13;
  int64_t *this_ptr;
  int iVar14;
  bool bVar15;
  float fVar16;
  uint32_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar20 [16];
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint8_t auVar21 [16];
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qb_05;
  uint8_t auVar22 [16];
  float fVar25;
  uint8_t in_XMM1 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar26 [16];
  float local_f8;
  float fStack_f4;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  int64_t *local_58;
  char local_50;
  int local_40;
  
  plVar7 = local_58;
  g_028b8a58 = -1;
  g_028b8a5c = -1;
  if (this_ptr[0x28] != 0) {
    this_ptr[0x28] = 0;
    FUN_00d50b20();
  }
  FUN_01dc0d60();
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_58 == (int64_t *)0x0) {
    return;
  }
  for (iVar14 = 0; plVar8 = local_58, iVar10 = FUN_01dca080(), iVar11 = g_028b8a58,
      iVar14 < iVar10; iVar14 = iVar14 + 1) {
    uVar18 = FUN_01dc1b40();
    fStack_70 = (float)extraout_XMM0_Qb;
    fStack_6c = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
    FUN_01e3f820();
    auVar24._8_4_ = fStack_70;
    auVar24._0_8_ = uVar18;
    auVar24._12_4_ = fStack_6c;
    auVar23._4_12_ = auVar24._4_12_;
    auVar23._0_4_ = (float)uVar18 + g_023b1d84;
    auVar24 = blendps(auVar23,g_0238ff00,0xe);
    blendps(in_XMM1,g_023b5520,0xd);
    cVar9 = FUN_00d05410();
    iVar11 = iVar14;
    if (cVar9 != '\0') break;
    uVar18 = FUN_01dc1b40();
    local_78 = (float)uVar18;
    fStack_70 = (float)extraout_XMM0_Qb_00;
    fStack_6c = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
    uVar19 = FUN_01dc1b40();
    FUN_01e3f820();
    auVar2._8_4_ = fStack_70;
    auVar2._0_8_ = uVar18;
    auVar2._12_4_ = fStack_6c;
    auVar4._8_8_ = extraout_XMM0_Qb_01;
    auVar4._0_8_ = uVar19;
    auVar20._4_12_ = auVar2._4_12_;
    auVar20._0_4_ = local_78 - (float)uVar19;
    in_XMM1 = blendps(ZEXT816(0),auVar4,1);
    blendps(auVar24,auVar20,1);
    cVar9 = FUN_00d05410();
    if (cVar9 != '\0') {
      FUN_01dcc290();
      if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      cVar9 = FUN_01dd3d00();
      if (cVar9 != '\0') {
        FUN_01dd4f40();
      }
      g_028b8a5c = iVar14;
      cVar9 = FUN_01db9b00();
      if (cVar9 == '\0') {
LAB_01dc44d0:
        cVar9 = FUN_01db9fa0();
        bVar5 = true;
        if ((cVar9 != '\0') && (cVar9 = FUN_01dcca60(), cVar9 != '\0')) {
          uVar18 = FUN_01db9a50();
          fStack_70 = (float)extraout_XMM0_Qb_04;
          fStack_6c = (float)((uint64_t)extraout_XMM0_Qb_04 >> 0x20);
          fVar16 = (float)FUN_01dce580();
          uVar17 = (**(code **)(*this_ptr + 0x918))();
          plVar12 = (int64_t *)FUN_00e8fc40();
          FUN_00152930();
          (**(code **)(*plVar12 + 0x18))();
          if (g_028b8a48 == plVar12) {
            bVar6 = false;
            bVar5 = false;
          }
          else {
            bVar6 = true;
            bVar5 = true;
            bVar15 = g_028b8a48 != (int64_t *)0x0;
            g_028b8a48 = plVar12;
            if (bVar15) {
              FUN_00d50b20();
            }
          }
          if (g_028b8a50 == '\0') {
            g_028b8a50 = '\x01';
            FUN_00e8cb90();
            bVar5 = bVar6;
          }
          if (!bVar5) {
            FUN_00d50b20();
          }
          auVar3._8_4_ = fStack_70;
          auVar3._0_8_ = uVar18;
          auVar3._12_4_ = fStack_6c;
          auVar21._4_12_ = auVar3._4_12_;
          auVar21._0_4_ = (float)uVar18 + fVar16;
          auVar24 = insertps(auVar21,uVar17,0x10);
          uVar18 = FUN_01d4ed60(auVar24._0_8_);
          g_028b8a60 = 0.0;
          if (0 < g_028b8a5c) {
            iVar11 = 0;
            do {
              FUN_01dcc290(uVar18,iVar11);
              fVar16 = (float)FUN_01db9a50();
              uVar18 = FUN_01dce580();
              g_028b8a60 = fVar16 + (float)uVar18 + g_028b8a60;
              in_XMM1 = ZEXT416((uint)g_028b8a60);
              if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                uVar18 = FUN_00d50b20();
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < g_028b8a5c);
          }
          FUN_01db99d0();
          if (local_58 == (int64_t *)0x0) {
            bVar5 = true;
            plVar12 = (int64_t *)0x0;
          }
          else {
            plVar12 = local_58;
            if (local_50 == '\0') {
              FUN_00d50b00();
              bVar5 = false;
            }
            else {
              bVar5 = false;
            }
          }
          FUN_01db9ab0();
          if (local_50 == '\0') {
            if (local_58 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          (**(code **)(*plVar12 + 0x958))();
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar12 + 0x918))();
          FUN_01d530c0();
          (**(code **)(*plVar12 + 0x4d0))();
          FUN_01d52700();
          FUN_01d52740();
          if (local_50 == '\0') {
            if (local_58 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          FUN_01e3f820();
          (**(code **)(*plVar12 + 0x610))();
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          cVar9 = FUN_01db9d40();
          plVar12 = local_58;
          if (cVar9 == '\0') {
            (**(code **)(*this_ptr + 0x920))(extraout_XMM0_Qa,0xffffffff);
            if (local_58 == (int64_t *)0x0) {
              plVar12 = (int64_t *)0x0;
            }
            else if (local_50 == '\0') {
              FUN_00d50b00();
            }
LAB_01dc48bc:
            if (plVar12 != (int64_t *)0x0) {
              uVar18 = FUN_01e3f820();
              local_f8 = (float)uVar18;
              fStack_f4 = (float)((uint64_t)uVar18 >> 0x20);
              FUN_01d526f0();
              local_a8 = in_XMM1._0_4_;
              fStack_a4 = in_XMM1._4_4_;
              fStack_a0 = in_XMM1._8_4_;
              fStack_9c = in_XMM1._12_4_;
              in_XMM1._4_4_ = fStack_a4;
              in_XMM1._0_4_ = fStack_a4;
              in_XMM1._8_4_ = fStack_9c;
              in_XMM1._12_4_ = fStack_9c;
              auVar1._8_8_ = extraout_XMM0_Qb_05;
              auVar1._0_8_ = uVar18;
              auVar22._0_4_ = (local_a8 - fStack_a4) + local_f8;
              auVar22._4_4_ = (fStack_a4 - fStack_a4) + fStack_f4;
              auVar22._8_4_ = (fStack_a0 - fStack_9c) + (float)extraout_XMM0_Qb_05;
              auVar22._12_4_ =
                   (fStack_9c - fStack_9c) + (float)((uint64_t)extraout_XMM0_Qb_05 >> 0x20);
              auVar24 = blendps(auVar22,auVar1,2);
              FUN_00d05510(auVar24._0_8_);
              FUN_01d52740();
              (**(code **)(*local_58 + 0x400))();
              if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
          else {
            uVar17 = FUN_01db9f80();
            (**(code **)(*this_ptr + 0x920))(*this_ptr,uVar17);
            if (local_58 != (int64_t *)0x0) {
              if (local_50 == '\0') {
                FUN_00d50b00();
              }
              goto LAB_01dc48bc;
            }
          }
          FUN_01d52770();
          (**(code **)(*this_ptr + 0x620))();
          if (!bVar5) {
            FUN_00d50b20();
          }
          goto LAB_01dc49a9;
        }
      }
      else {
        fVar16 = (float)FUN_01db9a50();
        FUN_01e3f820();
        fVar25 = in_XMM1._4_4_;
        in_XMM1 = ZEXT416((uint)fVar16);
        if (fVar16 <= fVar25 + fVar25) goto LAB_01dc44d0;
        uVar18 = FUN_01dc1b40();
        local_78 = (float)uVar18;
        fStack_74 = (float)((uint64_t)uVar18 >> 0x20);
        fStack_70 = (float)extraout_XMM0_Qb_02;
        fStack_6c = (float)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
        uVar18 = FUN_01dc1b40();
        FUN_01e3f820();
        local_a8 = (float)uVar18;
        fStack_a4 = (float)((uint64_t)uVar18 >> 0x20);
        fStack_a0 = (float)extraout_XMM0_Qb_03;
        fStack_9c = (float)((uint64_t)extraout_XMM0_Qb_03 >> 0x20);
        auVar26._0_4_ = ((local_78 - local_a8) - in_XMM1._4_4_) + local_a8;
        auVar26._4_4_ = (fStack_74 - in_XMM1._4_4_) + fStack_a4;
        auVar26._8_4_ = (fStack_70 - in_XMM1._12_4_) + fStack_a0;
        auVar26._12_4_ = (fStack_6c - in_XMM1._12_4_) + fStack_9c;
        in_XMM1 = blendps(auVar26,g_0238ff00,2);
        cVar9 = FUN_00d05410();
        if (cVar9 == '\0') goto LAB_01dc44d0;
        g_028b8a5c = -1;
        if ((char)this_ptr[0x29] == '\0') {
          cVar9 = FUN_01db9d40();
          if (cVar9 == '\0') {
            FUN_01dd3ac0();
            FUN_01dcd4e0();
            if (local_50 == '\0') {
              if (local_58 != (int64_t *)0x0) {
                FUN_00d50b00();
                goto LAB_01dc4ab6;
              }
            }
            else if (local_58 != (int64_t *)0x0) {
LAB_01dc4ab6:
              local_50 = '\0';
              local_58 = (int64_t *)0x0;
              local_40 = -1;
              while( true ) {
                lVar13 = (int64_t)local_40;
                local_40 = local_40 + 1;
                if (*(int *)((int64_t)plVar8 + 0xc) <= local_40) break;
                local_58 = *(int64_t **)(plVar8[2] + 8 + lVar13 * 8);
                FUN_01db9b10();
              }
              FUN_01de6a30();
              FUN_00d50b20();
            }
            FUN_01db9d50();
            FUN_01db9b10();
            FUN_01dd3ad0();
            (**(code **)(*plVar7 + 0x980))();
            bVar5 = false;
          }
          else {
            iVar11 = FUN_01db9f80();
            if (iVar11 == 0) {
              FUN_01db9d50();
              goto LAB_01dc49a9;
            }
            bVar5 = false;
            FUN_01db9d50();
          }
          goto LAB_01dc49ab;
        }
        cVar9 = FUN_01db9d40();
        if (cVar9 == '\0') {
          FUN_01dd3ac0();
          FUN_01db9d50();
          FUN_01db9b10();
          FUN_01dd3ad0();
          (**(code **)(*plVar7 + 0x980))();
          bVar5 = false;
          goto LAB_01dc49ab;
        }
        iVar11 = FUN_01db9f80();
        if (iVar11 != 0) {
          bVar5 = false;
          FUN_01db9b10();
          goto LAB_01dc49ab;
        }
        FUN_01db9d50();
LAB_01dc49a9:
        bVar5 = false;
      }
LAB_01dc49ab:
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      iVar11 = g_028b8a58;
      if (!bVar5) break;
    }
  }
  g_028b8a58 = iVar11;
  FUN_00d50b20();
  return;
}

