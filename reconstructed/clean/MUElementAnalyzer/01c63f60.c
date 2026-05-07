// Function: FUN_01c63f60
// Address: 01c63f60
// Size: 2741 bytes
// Class: MUElementAnalyzer
// === MUElementAnalyzer properties ===
//   SInt64          _engineSampleOffset
//   GNInt           _engineIndex
//   float *         _originalSignal
//   float *         _originalSignalBufferWithMargin
//   SInt64          _sampleCount
//   SInt64          _nonSilentSampleCount
//   double          _sampleRate
//   double          _duration
//   double          _parameterValuesPerSecond
//   GNInt           _parameterDataSize
//   float           _maxAmplitude
//   float           _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum
//   float           _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum
//   bool            _isPercussive
//   bool            _isPolyphonic
//   float           _pitchJumpsSum
//   float           _pitchBarycenter
//   float           _allPercussiveDecay
//   float           _allRhythmicQuality
//   float           _allTonality
//   float           _allCentDiffPerMillisecond
//   float           _allPitchRangePerNote
//   float           _allEnergyRelevantRegionRatio
//   float           _allAttackPeakQuality
//   float           _allAttackPeakToEnergyRegionRatio
//   float           _allMonophony
//   float           _referenceAttackPeakValue
//   float           _referencePeakRmsLevel
//   bool            _origRMSValid
//   GNInt *         _nonSilentRmsVals
//   ... +76 more


uint64_t FUN_01c63f60(uint64_t param_1)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint64_t uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  uint64_t uVar9;
  int extraout_var;
  uint64_t uVar10;
  uint64_t uVar11;
  void* pVar12;
  uint64_t in_RCX;
  int64_t lVar13;
  uint64_t *arg1;
  uint uVar14;
  int64_t *this_ptr;
  bool bVar15;
  uint uVar16;
  uint64_t uVar17;
  float fVar22;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar19 [16];
  uint64_t uVar18;
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  float local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  float local_a8;
  uint local_74;
  uint local_70;
  uint local_6c;
  int iStack_64;
  uint local_5c;
  uint local_58;
  float local_54;
  uint64_t local_50;
  char local_48;
  
  uVar10 = local_50;
  local_a8 = (float)param_1;
  iVar5 = FUN_01d3a5a0();
  if ((((iVar5 == 1) && (iVar5 = FUN_01d3b620(), iVar5 == 1)) &&
      (iVar5 = FUN_01d3b630(), iVar5 == 1)) &&
     ((cVar4 = FUN_01c63e00(), cVar4 == '\0' && (uVar11 = this_ptr[0x31], uVar11 != 0)))) {
    FUN_00d50b00();
    if (0 < *(int *)(this_ptr[0x40] + 0xc)) {
      lVar13 = 0;
      bVar15 = false;
      do {
        cVar4 = FUN_01c82ad0();
        if (cVar4 != '\0') {
          bVar15 = true;
          FUN_01c82ae0();
        }
        lVar13 = lVar13 + 1;
        in_RCX = (uint64_t)*(int *)(this_ptr[0x40] + 0xc);
      } while (lVar13 < (int64_t)in_RCX);
      if (bVar15) {
        FUN_016bf0c0();
      }
    }
    FUN_01c45dc0();
    iVar5 = FUN_01d3b590();
    pvVar8 = _pthread_getspecific((void*)in_RCX);
    if ((pvVar8 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
      in_RCX = uVar11;
    }
    FUN_016d8300();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      pvVar8 = _pthread_getspecific((void*)in_RCX);
      if ((pvVar8 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
        in_RCX = uVar11;
      }
      FUN_016d8ab0();
      if ((local_48 == '\0') && (local_50 != 0)) {
        FUN_00d50b00();
      }
      FUN_016bf2e0();
      local_74 = FUN_00e7cea0();
      FUN_016bf310();
      local_70 = FUN_00e7cea0();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
    }
    pvVar8 = _pthread_getspecific((void*)in_RCX);
    if ((pvVar8 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
      in_RCX = uVar11;
    }
    plVar1 = (int64_t *)this_ptr[0x2e];
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    uVar17 = (**(code **)(*plVar1 + 0x388))(g_023b1608 + local_a8);
    FUN_016cb850(uVar17,0);
    local_58 = FUN_00e7d850();
    FUN_00d50b20();
    pvVar8 = _pthread_getspecific((void*)in_RCX);
    if ((pvVar8 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
      in_RCX = uVar11;
    }
    plVar1 = (int64_t *)this_ptr[0x2e];
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    uVar17 = (**(code **)(*plVar1 + 0x388))(g_02390d34 + local_a8);
    FUN_016cb850(uVar17,0);
    local_6c = FUN_00e7d850();
    FUN_00d50b20();
    if (iVar5 != 0) {
      cVar4 = FUN_016bf360();
      pVar12 = (void*)in_RCX;
      if (cVar4 != '\0') {
        uVar9 = FUN_016bf2e0();
        FUN_016bf310();
        FUN_00e7b820();
        FUN_00e7c3c0();
        if ((uVar9 >> 0x20 == 0) || (cVar4 = FUN_00e7c650(), cVar4 != '\0')) {
          if ((local_50 == 0) ||
             (((extraout_var == 0 || (cVar4 = FUN_00e7c650(), cVar4 == '\0')) ||
              ((int)local_70 < (int)local_6c)))) {
            FUN_00e7bcc0();
            FUN_016bf1f0();
          }
          else {
            FUN_00e7bcc0();
            FUN_016bf1f0();
          }
          plVar1 = (int64_t *)this_ptr[0x2e];
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          pvVar8 = _pthread_getspecific(pVar12);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          in_RCX = 0;
          FUN_016c46a0(0,0);
          local_54 = (float)(**(code **)(*plVar1 + 0x390))();
          FUN_00d50b20();
          local_50 = uVar9;
        }
        else {
          if (((local_50 == 0) || (iStack_64 = (int)(uVar9 >> 0x20), iStack_64 == 0)) ||
             ((cVar4 = FUN_00e7c6b0(), cVar4 != '\0' || ((int)local_6c < (int)local_74)))) {
            FUN_00e7bcc0();
            FUN_016bf260();
          }
          else {
            FUN_00e7bcc0();
            FUN_016bf260();
          }
          plVar1 = (int64_t *)this_ptr[0x2e];
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          pvVar8 = _pthread_getspecific(pVar12);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          in_RCX = 0;
          FUN_016c46a0(0,0);
          local_54 = (float)(**(code **)(*plVar1 + 0x390))();
          FUN_00d50b20();
          local_50 = uVar9;
        }
        goto LAB_01c644d0;
      }
    }
    FUN_016bf0c0();
    local_54 = local_a8;
LAB_01c644d0:
    (**(code **)(*this_ptr + 0x620))();
    local_5c = 1;
LAB_01c644f0:
    do {
      (**(code **)(*this_ptr + 0x658))();
      uVar9 = *arg1;
      if (uVar9 == local_50) {
        if (((char)arg1[1] != '\0') || (local_50 == 0)) goto LAB_01c6458e;
        if (local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_01c64588;
        }
LAB_01c64553:
        *(void*)(arg1 + 1) = 1;
      }
      else {
        uVar3 = arg1[1];
        if (local_48 != '\0') {
          *arg1 = local_50;
          if (((char)uVar3 != '\0') && (uVar9 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01c64553;
        }
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *arg1 = local_50;
        if (((char)uVar3 != '\0') && (uVar9 != 0)) {
          FUN_00d50b20();
        }
LAB_01c64588:
        *(void*)(arg1 + 1) = 1;
LAB_01c6458e:
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((*arg1 == 0) || (iVar5 = FUN_01d3a5a0(), iVar5 == 6)) goto LAB_01c648c6;
      iVar5 = FUN_01d3a5a0();
    } while (iVar5 != 5);
    FUN_01d3abf0();
    uVar17 = FUN_01e466c0();
    local_b8 = (float)uVar17;
    uStack_b4 = (uint)((uint64_t)uVar17 >> 0x20);
    uStack_b0 = (uint)extraout_XMM0_Qb;
    uStack_ac = (uint)((uint64_t)extraout_XMM0_Qb >> 0x20);
    pvVar8 = _pthread_getspecific((void*)in_RCX);
    if ((pvVar8 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
      in_RCX = uVar11;
    }
    plVar1 = (int64_t *)this_ptr[0x2e];
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    auVar21._8_4_ = uStack_b0;
    auVar21._0_8_ = uVar17;
    auVar21._12_4_ = uStack_ac;
    if (local_54 <= local_b8) {
      auVar21._0_4_ = local_54;
    }
    auVar19._4_12_ = auVar21._4_12_;
    auVar19._0_4_ = auVar21._0_4_ + g_023b1608;
    uVar18 = (**(code **)(*plVar1 + 0x388))();
    FUN_016cb850(uVar18,0);
    uVar6 = FUN_00e7d850();
    FUN_00d50b20();
    pvVar8 = _pthread_getspecific((void*)in_RCX);
    if ((pvVar8 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
      in_RCX = uVar11;
    }
    plVar1 = (int64_t *)this_ptr[0x2e];
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    auVar25._8_4_ = uStack_b0;
    auVar25._0_8_ = uVar17;
    auVar25._12_4_ = uStack_ac;
    if (local_b8 <= local_54) {
      auVar25._0_4_ = local_54;
    }
    auVar20._4_12_ = auVar25._4_12_;
    auVar20._0_4_ = auVar25._0_4_ + g_02390d34;
    uVar17 = (**(code **)(*plVar1 + 0x388))(auVar20._0_8_);
    FUN_016cb850(uVar17,0);
    uVar7 = FUN_00e7d850();
    FUN_00d50b20();
    if ((uVar6 != local_58) || (uVar7 != local_6c)) {
      in_RCX = CONCAT71((int7)(in_RCX >> 8),1);
      local_5c = (uint)in_RCX;
      uVar16 = uVar7;
      uVar14 = uVar6;
      if (uVar10 == 0) {
LAB_01c64777:
        if ((int)uVar16 < (int)uVar14) {
          FUN_016bf0c0();
        }
        else {
          if (uVar14 == uVar16) goto LAB_01c64792;
          FUN_00e7bcc0();
          FUN_016bf1f0();
          FUN_00e7bcc0();
          FUN_016bf260();
        }
      }
      else {
        in_RCX = (uint64_t)local_70;
        if (((int)uVar6 < (int)local_74) || ((int)local_70 < (int)uVar7)) {
          if (((int)local_74 <= (int)uVar6) || (uVar16 = local_74, (int)uVar7 < (int)local_74)) {
            local_5c = (uint)((int)uVar7 < (int)local_70 || (int)local_70 <= (int)uVar6);
            if ((int)uVar7 < (int)local_70 || (int)local_70 <= (int)uVar6) {
              in_RCX = (uint64_t)uVar6;
            }
            uVar16 = uVar7;
            uVar14 = (uint)in_RCX;
          }
          goto LAB_01c64777;
        }
        local_5c = 0;
LAB_01c64792:
        FUN_00e7bcc0();
        FUN_016bf1f0();
        FUN_00e7bcc0();
        FUN_016bf260();
      }
      (**(code **)(*this_ptr + 0x620))();
      local_6c = uVar7;
      local_58 = uVar6;
    }
    auVar23._0_4_ = (float)((uint)(local_b8 - local_54) & g_02390140);
    auVar23._4_4_ = uStack_b4 & _UNK_02390144;
    auVar23._8_4_ = uStack_b0 & _UNK_02390148;
    auVar23._12_4_ = uStack_ac & _UNK_0239014c;
    auVar24._4_12_ = auVar23._4_12_;
    auVar24._0_4_ = auVar23._0_4_ + g_02390d34;
    auVar25 = blendps(auVar24,g_023907b0,0xe);
    auVar2._8_8_ = in_XMM0_Qb;
    auVar2._0_8_ = param_1;
    auVar21 = blendps(auVar19,auVar2,0xe);
    uVar17 = FUN_00d05150(auVar21._0_8_);
    if ((*(float *)((int64_t)this_ptr + 0x21c) == (float)uVar17) &&
       (!NAN(*(float *)((int64_t)this_ptr + 0x21c)) && !NAN((float)uVar17))) {
      fVar22 = (float)((uint64_t)uVar17 >> 0x20);
      if ((*(float *)(this_ptr + 0x44) == fVar22) &&
         (!NAN(*(float *)(this_ptr + 0x44)) && !NAN(fVar22))) {
        if ((*(float *)((int64_t)this_ptr + 0x224) == auVar25._0_4_) &&
           (!NAN(*(float *)((int64_t)this_ptr + 0x224)) && !NAN(auVar25._0_4_))) {
          if ((*(float *)(this_ptr + 0x45) == auVar25._4_4_) &&
             (!NAN(*(float *)(this_ptr + 0x45)) && !NAN(auVar25._4_4_))) goto LAB_01c644f0;
        }
      }
    }
    *(void*)((int64_t)this_ptr + 0x21c) = uVar17;
    *(int64_t *)((int64_t)this_ptr + 0x224) = auVar25._0_8_;
    (**(code **)(*this_ptr + 0x620))();
    goto LAB_01c644f0;
  }
  uVar10 = 0;
  goto LAB_01c63fe8;
LAB_01c648c6:
  if (((local_5c & 1) != 0) && (cVar4 = FUN_016bf360(), cVar4 != '\0')) {
    uVar10 = FUN_016bf2e0();
    uVar11 = FUN_016bf310();
    local_50 = uVar10 >> 0x20;
    if (((local_50 != 0) && (uVar11 >> 0x20 != 0)) && (cVar4 = FUN_00e7c000(), cVar4 != '\0')) {
      local_50 = this_ptr[0x42];
      FUN_016bf310();
      FUN_00e7c280();
      FUN_016bf1f0();
    }
  }
  uVar17 = g_023dccf4;
  if ((((*(float *)((int64_t)this_ptr + 0x21c) != (float)g_023dccec) ||
       (NAN(*(float *)((int64_t)this_ptr + 0x21c)) || NAN((float)g_023dccec))) ||
      ((fVar22 = (float)((uint64_t)g_023dccec >> 0x20), *(float *)(this_ptr + 0x44) != fVar22 ||
       ((NAN(*(float *)(this_ptr + 0x44)) || NAN(fVar22) ||
        (*(float *)((int64_t)this_ptr + 0x224) != (float)g_023dccf4)))))) ||
     (NAN(*(float *)((int64_t)this_ptr + 0x224)) || NAN((float)g_023dccf4))) {
LAB_01c649ab:
    *(void*)((int64_t)this_ptr + 0x21c) = g_023dccec;
    *(void*)((int64_t)this_ptr + 0x224) = uVar17;
    (**(code **)(*this_ptr + 0x620))();
  }
  else {
    fVar22 = (float)((uint64_t)g_023dccf4 >> 0x20);
    if ((*(float *)(this_ptr + 0x45) != fVar22) ||
       (NAN(*(float *)(this_ptr + 0x45)) || NAN(fVar22))) goto LAB_01c649ab;
  }
  *(void*)(this_ptr + 0x43) = 0;
  (**(code **)(*this_ptr + 0x620))();
  uVar10 = CONCAT71((int7)(local_50 >> 8),1);
  FUN_00d50b20();
LAB_01c63fe8:
  return uVar10 & 0xffffffff;
}

