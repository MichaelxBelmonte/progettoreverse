// Function: FUN_00b6b2c0
// Address: 00b6b2c0
// Size: 1156 bytes
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


void FUN_00b6b2c0(void)

{
  byte bVar1;
  int64_t *plVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [12];
  uint8_t auVar5 [12];
  uint8_t auVar6 [16];
  uint uVar7;
  byte bVar8;
  uint uVar9;
  void*arg1;
  int64_t *this_ptr;
  byte bVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint32_t uVar15;
  uint32_t uVar16;
  uint32_t uVar17;
  uint8_t in_XMM1 [16];
  uint8_t auVar18 [16];
  uint8_t local_78 [16];
  int64_t *local_50;
  char local_48;
  
  (**(code **)(*this_ptr + 0x640))();
  if ((local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  bVar10 = *(byte *)(this_ptr + 0x28);
  bVar1 = *(byte *)((int64_t)this_ptr + 0x141);
  (**(code **)(*local_50 + 0x390))();
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_01d488d0();
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar2 = (int64_t *)*arg1;
  FUN_01e3f820();
  (**(code **)(*plVar2 + 0x3b0))();
  bVar11 = bVar10;
  if (bVar10 <= bVar1) {
    do {
      uVar7 = bVar11 / 0xc;
      bVar8 = (char)uVar7 * -0xc + bVar11;
      if ((10 < bVar8) || ((0x54aUL >> ((uint64_t)bVar8 & 0x3f) & 1) == 0)) {
        local_78 = ZEXT816(0);
        uVar15 = 0;
        uVar16 = 0;
        uVar17 = 0;
        if ((0xab5U >> (bVar8 & 0x1f) & 1) != 0) {
          local_78 = ZEXT416(*(uint *)(&g_023d80a4 + (uint64_t)bVar8 * 4));
          uVar15 = _UNK_023d8034;
          uVar16 = _UNK_023d8038;
          uVar17 = _UNK_023d803c;
        }
        uVar9 = *(byte *)(this_ptr + 0x28) / 0xc;
        fVar12 = (float)(int)(char)(*(byte *)(this_ptr + 0x28) + (char)uVar9 * -0xc) * g_02421224
        ;
        fVar13 = (float)(int)(uVar7 - uVar9) * g_023d7fec;
        FUN_01e436c0();
        fVar12 = (float)local_78._0_4_ + fVar13 + fVar12;
        auVar18 = ZEXT416((uint)g_023d7ff0);
        if (in_XMM1._4_4_ < g_023d7ff0) {
          FUN_01e436c0();
          auVar6._4_4_ = 0;
          auVar6._0_4_ = fVar12;
          auVar6._8_4_ = local_78._8_4_;
          auVar6._12_4_ = local_78._12_4_;
          auVar3._4_4_ = 0;
          auVar3._0_4_ = 0.0 - (g_023d7ff0 - auVar18._4_4_);
          auVar3._8_4_ = local_78._12_4_;
          auVar3._12_4_ = local_78._12_4_;
          auVar18 = insertps(auVar6,auVar3,0x10);
          fVar12 = auVar18._0_4_;
        }
        auVar4._4_8_ = auVar18._8_8_;
        auVar4._0_4_ = uVar15;
        in_XMM1._0_8_ = auVar4._0_8_ << 0x20;
        in_XMM1._8_4_ = uVar16;
        in_XMM1._12_4_ = uVar17;
        (**(code **)(*this_ptr + 0x918))(fVar12,(uint)bVar11);
      }
      bVar11 = bVar11 + 1;
    } while (bVar11 <= bVar1);
    do {
      uVar7 = bVar10 / 0xc;
      switch((char)uVar7 * -0xc + bVar10) {
      case 1:
        fVar12 = g_023908ec;
        break;
      default:
        goto switchD_00b6b5bc_caseD_2;
      case 3:
        fVar12 = g_0241e624;
        break;
      case 6:
        fVar12 = g_0240e314;
        break;
      case 8:
        fVar12 = g_023d7ff8;
        break;
      case 10:
        fVar12 = g_023d7ff4;
      }
      uVar9 = *(byte *)(this_ptr + 0x28) / 0xc;
      fVar13 = (float)(int)(char)(*(byte *)(this_ptr + 0x28) + (char)uVar9 * -0xc) * g_02421224;
      fVar14 = (float)(int)(uVar7 - uVar9) * g_023d7fec;
      FUN_01e436c0();
      fVar12 = fVar12 + fVar14 + fVar13;
      auVar18 = ZEXT416((uint)g_023d7ff0);
      if (in_XMM1._4_4_ < g_023d7ff0) {
        FUN_01e436c0();
        auVar18 = insertps(ZEXT416((uint)fVar12),
                           ZEXT416((uint)(0.0 - (g_023d7ff0 - auVar18._4_4_))),0x10);
        fVar12 = auVar18._0_4_;
      }
      auVar5._4_8_ = auVar18._8_8_;
      auVar5._0_4_ = _UNK_023d8024;
      in_XMM1._0_8_ = auVar5._0_8_ << 0x20;
      in_XMM1._8_4_ = _UNK_023d8028;
      in_XMM1._12_4_ = _UNK_023d802c;
      (**(code **)(*this_ptr + 0x918))(fVar12,(uint)bVar10);
switchD_00b6b5bc_caseD_2:
      bVar10 = bVar10 + 1;
    } while (bVar10 <= bVar1);
    if (local_50 == (int64_t *)0x0) {
      return;
    }
  }
  FUN_00d50b20();
  return;
}

