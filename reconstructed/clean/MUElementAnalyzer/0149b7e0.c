// Function: FUN_0149b7e0
// Address: 0149b7e0
// Size: 1030 bytes
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


void FUN_0149b7e0(double param_1,float param_2,float param_3)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  void *in_RCX;
  void *pvVar4;
  int64_t in_RDX;
  int64_t *arg1;
  uint in_R8D;
  uint uVar5;
  uint64_t uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  double dVar11;
  float local_70;
  int64_t local_68;
  int64_t local_48;
  char local_40;
  
  if ((*arg1 == 0) && (in_RDX == 0)) {
    return;
  }
  uVar5 = in_R8D;
  if (*arg1 != 0) {
    FUN_00d216c0();
  }
  dVar11 = g_0238fee8 / param_1;
  local_68 = in_RDX;
  if (in_RDX == 0) {
    local_68 = FUN_00e83010();
  }
  fVar10 = (float)dVar11;
  pfVar3 = (float *)FUN_00e83010();
  _memcpy(in_RCX,(void *)((int64_t)(int)in_R8D << 2),uVar5);
  pvVar4 = (void *)((int64_t)&MACH_HEADER.magic + 1);
  FUN_015c1480(g_023908d8,in_R8D);
  local_70 = *pfVar3;
  bVar2 = local_70 <= param_3;
  if ((int)in_R8D < 1) {
    iVar7 = 0;
LAB_0149b926:
    if (!bVar2) goto LAB_0149bbcd;
    if (iVar7 < (int)in_R8D) goto LAB_0149b93f;
  }
  else {
    _memset_pattern16(pvVar4,(void *)((uint64_t)in_R8D * 4),uVar5);
    if (in_R8D != 1) {
      dVar11 = (double)param_3 * g_024110e8;
      iVar8 = 0;
      uVar6 = 1;
      iVar7 = 0;
      do {
        fVar1 = pfVar3[uVar6];
        if (fVar1 <= param_3 && !(bool)(local_70 <= param_3 | bVar2)) {
          bVar2 = true;
          iVar7 = (int)uVar6;
        }
        iVar9 = iVar8;
        if (param_3 < fVar1) {
          iVar9 = (int)uVar6;
        }
        if (param_3 < local_70) {
          iVar9 = iVar8;
        }
        iVar8 = iVar9;
        if ((bVar2) && (dVar11 < (double)fVar1)) {
          if ((int)((double)param_2 * param_1) < iVar8 - iVar7) {
            if (iVar7 < iVar8) {
              ___bzero(local_68);
            }
            if (*arg1 == 0) {
              bVar2 = false;
              goto LAB_0149ba12;
            }
            FUN_01432380((double)((float)iVar7 * fVar10),(double)((float)iVar8 * fVar10));
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            FUN_00d21140();
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          bVar2 = false;
        }
LAB_0149ba12:
        uVar6 = uVar6 + 1;
        local_70 = fVar1;
      } while (in_R8D != uVar6);
      goto LAB_0149b926;
    }
    iVar7 = 0;
    if (param_3 < local_70) goto LAB_0149bbcd;
LAB_0149b93f:
    ___bzero(local_68);
  }
  if (*arg1 != 0) {
    FUN_01432380((double)((float)iVar7 * fVar10),(double)((float)(int)in_R8D * fVar10));
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_00d21140();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_0149bbcd:
  FUN_00e83070();
  if (in_RDX == 0) {
    FUN_00e83070();
  }
  return;
}

