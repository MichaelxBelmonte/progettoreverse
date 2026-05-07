// Function: FUN_006fe880
// Address: 006fe880
// Size: 3290 bytes
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


void FUN_006fe880(int64_t *param_1,int64_t *param_2)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  int64_t lVar5;
  char *pcVar6;
  int iVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar8;
  float fVar9;
  float fVar10;
  int64_t *local_168;
  char local_160;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  int local_94;
  int64_t local_90;
  uint32_t local_7c;
  char local_78 [16];
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  local_c8 = param_1;
  cVar3 = FUN_00e34230();
  if (cVar3 == '\0') {
    cVar3 = FUN_00e34240();
    if (cVar3 == '\0') {
      local_7c = FUN_00e340b0();
      if (this_ptr[2] != 0) {
        FUN_00d50b00();
        lVar5 = *param_2;
        uVar8 = FUN_00d50b20();
        if (lVar5 == 0) {
          cVar3 = '\0';
          goto LAB_006fed58;
        }
        lVar5 = this_ptr[2];
        if (lVar5 != 0) {
          uVar8 = FUN_00d50b00();
        }
        local_138 = *param_2;
        local_130 = '\0';
        uVar8 = FUN_002e4d80(uVar8,&local_138);
        lVar2 = local_58;
        if (local_50[0] == '\0') {
          if (((local_58 != 0) && (uVar8 = FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0))
          {
            uVar8 = FUN_00d50b20();
          }
        }
        else {
          local_50[0] = '\0';
        }
        if ((local_130 != '\0') && (local_138 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        if (lVar5 != 0) {
          uVar8 = FUN_00d50b20();
        }
        iVar7 = 0;
        if (lVar2 == 0) goto LAB_006fed54;
        local_50[0] = '\0';
        local_58 = 0;
        local_48 = lVar2;
        local_40 = 0xffffffff;
        local_38 = 0;
        while( true ) {
          if (iVar7 != 0) {
            if (iVar7 < 1) {
              iVar7 = -iVar7;
            }
            else {
              local_40 = CONCAT44(local_40._4_4_,(int)local_40 - iVar7);
              FUN_00d23690(uVar8,iVar7);
              local_38 = local_38 + local_40._4_4_;
              iVar7 = 0;
            }
            local_40 = CONCAT44(iVar7,(int)local_40);
          }
          lVar5 = (int64_t)(int)local_40;
          iVar7 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar7);
          if (*(int *)(local_48 + 0xc) <= iVar7) break;
          local_58 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar5 * 8);
          FUN_01bca0a0();
          FUN_01bca040(local_7c);
          local_128 = *local_c8;
          local_120 = '\0';
          uVar8 = FUN_01bca300();
          if ((local_120 != '\0') && (local_128 != 0)) {
            uVar8 = FUN_00d50b20();
          }
          iVar7 = local_40._4_4_;
        }
        FUN_00713b30();
        FUN_00d50b20();
      }
      iVar7 = 0;
    }
    else {
      local_7c = g_02390124;
      iVar7 = 1;
      cVar3 = '\x01';
      if (this_ptr[2] != 0) {
        FUN_00d50b00();
        lVar5 = *param_2;
        FUN_00d50b20();
        if (lVar5 != 0) {
          lVar5 = this_ptr[2];
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          FUN_002e4d80();
          lVar2 = local_58;
          if (local_50[0] == '\0') {
            if (((local_58 != 0) && (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_50[0] = '\0';
          }
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            local_50[0] = '\0';
            local_58 = 0;
            local_48 = lVar2;
            local_40 = 0xffffffff;
            local_38 = 0;
            while( true ) {
              lVar5 = (int64_t)(int)local_40;
              iVar7 = (int)local_40 + 1;
              local_40 = CONCAT44(local_40._4_4_,iVar7);
              if (*(int *)(local_48 + 0xc) <= iVar7) break;
              local_58 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar5 * 8);
              FUN_01bca0a0();
              if (local_40._4_4_ != 0) {
                if (local_40 < 0) {
                  iVar7 = -local_40._4_4_;
                }
                else {
                  local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
                  FUN_00d23690();
                  local_38 = local_38 + local_40._4_4_;
                  iVar7 = 0;
                }
                local_40 = CONCAT44(iVar7,(int)local_40);
              }
            }
            FUN_00713b30();
            FUN_00d50b20();
          }
        }
        goto LAB_006fed58;
      }
    }
LAB_006fed54:
    cVar3 = (char)iVar7;
  }
  else {
    local_7c = g_02390124;
    iVar7 = 1;
    cVar3 = '\x01';
    if (this_ptr[2] == 0) goto LAB_006fed54;
    FUN_00d50b00();
    lVar5 = *param_2;
    FUN_00d50b20();
    if (lVar5 != 0) {
      lVar5 = this_ptr[2];
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      FUN_002e4d80();
      lVar2 = local_58;
      if (local_50[0] == '\0') {
        if (((local_58 != 0) && (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50[0] = '\0';
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        local_50[0] = '\0';
        local_58 = 0;
        local_48 = lVar2;
        local_40 = 0xffffffff;
        local_38 = 0;
        while( true ) {
          lVar5 = (int64_t)(int)local_40;
          iVar7 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar7);
          if (*(int *)(local_48 + 0xc) <= iVar7) break;
          local_58 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar5 * 8);
          FUN_01bca0a0();
          if (local_40._4_4_ != 0) {
            if (local_40 < 0) {
              iVar7 = -local_40._4_4_;
            }
            else {
              local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar7 = 0;
            }
            local_40 = CONCAT44(iVar7,(int)local_40);
          }
        }
        FUN_00713b30();
        FUN_00d50b20();
      }
    }
  }
LAB_006fed58:
  FUN_00dd6a00();
  local_a0 = local_58;
  if (((local_50[0] == '\0') && (local_58 != 0)) &&
     ((FUN_00d50b00(), local_50[0] != '\0' && (local_58 != 0)))) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x5d8))();
  lVar5 = local_58;
  local_78[0] = local_50[0];
  pcVar6 = local_78;
  if (local_50[0] != '\0') {
    pcVar6 = local_50;
  }
  *pcVar6 = '\0';
  if ((local_50[0] != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 == 0) goto LAB_006ff157;
  FUN_0063f230();
  lVar2 = local_58;
  pcVar6 = local_50;
  if (local_50[0] == '\0') {
    pcVar6 = local_78 + 8;
  }
  local_78[8] = local_50[0];
  *pcVar6 = '\0';
  if ((local_50[0] != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 == 0) goto LAB_006ff157;
  cVar4 = FUN_00212c70();
  if (cVar4 == '\0') {
    local_90 = lVar2;
    FUN_006f3f00();
    lVar2 = local_58;
    local_108 = *arg1;
    local_100 = '\0';
    uVar8 = FUN_0021a630();
    local_c0 = local_68;
    local_b8 = 0;
    if (local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        uVar8 = FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_b8 = '\x01';
    cVar4 = FUN_00791550(uVar8,&local_c0);
    if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      local_58 = local_a0;
      local_50[0] = '\0';
      cVar4 = FUN_00d23d70();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        FUN_0021a630();
        (**(code **)(*local_68 + 0x970))();
        FUN_0197ca10(g_02390124);
        if ((local_50[0] != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        cVar3 = '\x01';
      }
    }
    else {
      local_58 = local_a0;
      local_50[0] = '\0';
      FUN_00d235a0();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_94 = 1;
      FUN_006f3f00();
      lVar2 = local_58;
      FUN_0021a630();
      (**(code **)(*local_168 + 0x988))();
      local_b0 = local_68;
      local_a8 = 0;
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_a8 = '\x01';
      local_f8 = *arg1;
      local_f0 = '\0';
      fVar9 = (float)FUN_00791e10(local_7c,&local_f8);
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_94 == 1) {
        FUN_0021a630();
        (**(code **)(*local_68 + 0x970))();
        FUN_0197ca10(fVar9);
        if ((local_50[0] != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_0021a630();
        (**(code **)(*local_68 + 0x970))();
        local_e8 = *local_c8;
        local_e0 = '\0';
        FUN_0197ce50();
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50[0] != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_0021a630();
        (**(code **)(*local_68 + 0x970))();
        fVar10 = (float)FUN_0197cd00();
        iVar7 = local_94;
        if (fVar9 <= fVar10) {
          iVar1 = *(int *)((int64_t)this_ptr + 0xec);
          if ((local_50[0] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar1 != iVar7) goto LAB_006ff493;
        }
        else {
          if ((local_50[0] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_006ff493:
          FUN_0021a630();
          (**(code **)(*local_68 + 0x970))();
          FUN_0197ca10(fVar9);
          if ((local_50[0] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_0021a630();
        (**(code **)(*local_68 + 0x970))();
        local_d8 = 0;
        local_d0 = '\0';
        FUN_0197ce50();
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50[0] != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      *(int *)((int64_t)this_ptr + 0xec) = local_94;
    }
  }
  else {
    FUN_0021a630();
    (**(code **)(*local_68 + 0x970))();
    FUN_0197ca10(local_7c);
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_0021a630();
    (**(code **)(*local_68 + 0x970))();
    local_118 = *local_c8;
    local_110 = '\0';
    FUN_0197ce50();
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_78[8] != '\0') {
    FUN_00d50b20();
  }
LAB_006ff157:
  lVar2 = local_a0;
  if (cVar3 != '\0') {
    local_58 = local_a0;
    local_50[0] = '\0';
    FUN_00d23f50();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_78[0] != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}

