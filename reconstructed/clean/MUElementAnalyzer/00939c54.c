// Function: FUN_00939c54
// Address: 00939c54
// Size: 1134 bytes
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


void FUN_00939c54(char param_1,int64_t param_2,uint64_t param_3,uint8_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int64_t lVar7;
  uint32_t uVar8;
  uint64_t uVar9;
  int unaff_ESI;
  uint64_t uVar10;
  int64_t this_ptr;
  int64_t lVar11;
  bool bVar12;
  char local_res8;
  
  plVar1 = (int64_t *)(this_ptr + 8);
  lVar7 = *(int64_t *)(this_ptr + 0x10);
  lVar2 = *(int64_t *)(this_ptr + 8);
  FUN_008f8528();
  lVar11 = *(int64_t *)(this_ptr + 8);
  if ((lVar7 != lVar2) && (*(int *)(lVar11 + 8) != unaff_ESI)) {
    if ((*(byte *)(lVar11 + 0x1e0) & 1) == 0) {
      *(void*)(lVar11 + 0x1e0) = 0;
    }
    else {
      **(void**)(lVar11 + 0x1f0) = 0;
      *(void*)(lVar11 + 0x1e8) = 0;
    }
    lVar7 = *plVar1;
    if ((*(byte *)(lVar7 + 0x1f8) & 1) == 0) {
      *(void*)(lVar7 + 0x1f8) = 0;
    }
    else {
      **(void**)(lVar7 + 0x208) = 0;
      *(void*)(lVar7 + 0x200) = 0;
    }
    lVar7 = *plVar1;
    if ((*(byte *)(lVar7 + 0x210) & 1) == 0) {
      *(void*)(lVar7 + 0x210) = 0;
    }
    else {
      **(void**)(lVar7 + 0x220) = 0;
      *(void*)(lVar7 + 0x218) = 0;
    }
    lVar7 = *plVar1;
    if ((*(byte *)(lVar7 + 0x228) & 1) == 0) {
      *(void*)(lVar7 + 0x228) = 0;
    }
    else {
      **(void**)(lVar7 + 0x238) = 0;
      *(void*)(lVar7 + 0x230) = 0;
    }
    lVar7 = *plVar1;
    if ((*(byte *)(lVar7 + 0x240) & 1) == 0) {
      *(void*)(lVar7 + 0x240) = 0;
    }
    else {
      **(void**)(lVar7 + 0x250) = 0;
      *(void*)(lVar7 + 0x248) = 0;
    }
    lVar7 = *plVar1;
    if ((*(byte *)(lVar7 + 600) & 1) == 0) {
      *(void*)(lVar7 + 600) = 0;
    }
    else {
      **(void**)(lVar7 + 0x268) = 0;
      *(void*)(lVar7 + 0x260) = 0;
    }
    lVar7 = *plVar1;
    if ((*(byte *)(lVar7 + 0x270) & 1) == 0) {
      *(void*)(lVar7 + 0x270) = 0;
    }
    else {
      **(void**)(lVar7 + 0x280) = 0;
      *(void*)(lVar7 + 0x278) = 0;
    }
    lVar11 = *plVar1;
    *(void*)(lVar11 + 0x387) = 0;
  }
  *(int *)(lVar11 + 8) = unaff_ESI;
  lVar7 = FUN_008e4ece();
  *(void*)(lVar11 + 0xc) = *(void*)(lVar7 + 0x2c);
  lVar7 = FUN_008e4ece();
  *(void*)(lVar11 + 0x10) = *(void*)(lVar7 + 0x2c);
  lVar7 = FUN_008e4ece();
  *(void*)(lVar11 + 0x14) = *(void*)(lVar7 + 0x2c);
  uVar9 = 8;
  if (unaff_ESI == 0x4801f777) {
    uVar9 = 1;
  }
  *(void*)(lVar11 + 0x30) = uVar9;
  *(uint64_t *)(lVar11 + 0x48) =
       *(uint64_t *)(lVar11 + 0x48) | (uint64_t)(unaff_ESI != 0x4801f777) * 0x10 + 0x10;
  lVar7 = FUN_008e4ece();
  *(void*)(lVar11 + 0x38) = *(void*)(lVar7 + 0x38);
  *(void*)(lVar11 + 0x20) = *(void*)(lVar11 + 0x18);
  *(void*)(lVar11 + 0x58) = 1;
  *(void*)(lVar11 + 0x37d) = 0;
  if (param_1 == '\0') {
    *(void*)(lVar11 + 0x59) = 0;
    bVar12 = true;
    bVar3 = true;
  }
  else {
    if ((*(byte *)(param_2 + 7) & 2) == 0) {
      cVar5 = '\0';
LAB_00939ef8:
      bVar12 = true;
      bVar3 = true;
    }
    else {
      FUN_0093a0f8(0xffffffff,param_3);
      FUN_008e8fb4();
      FUN_008e844a();
      *(void*)(lVar11 + 0x37d) = 1;
      cVar5 = '\x01';
      if (*(char *)(lVar11 + 0xe3) != '\0') goto LAB_00939ef8;
      bVar12 = *(int64_t *)(lVar11 + 0xb8) != 0;
      bVar3 = false;
    }
    if ((*(byte *)(param_2 + 7) & 1) != 0) {
      FUN_0093a51a(0xffffffff,param_4);
      FUN_008ea352();
      FUN_008e969a();
      *(void*)(lVar11 + 0x37e) = 1;
      if (*(char *)(lVar11 + 0x13a) == '\0') {
        bVar12 = false;
        bVar3 = false;
      }
      cVar5 = *(char *)(lVar11 + 0x37d);
    }
    if (cVar5 != '\0') {
      *(void*)(lVar11 + 0x59) = 1;
      if (*(char *)(lVar11 + 0x37e) == '\0') {
        *(void*)(lVar11 + 0x48) = 4;
        uVar10 = 0x100944;
        uVar8 = 0x4b;
      }
      else {
        *(void*)(lVar11 + 0x48) = 8;
        uVar10 = 0x100948;
        uVar8 = 0x23;
      }
      bVar4 = false;
      goto LAB_00939fcb;
    }
    *(char *)(lVar11 + 0x59) = *(char *)(lVar11 + 0x37e);
    if (*(char *)(lVar11 + 0x37e) != '\0') {
      *(void*)(lVar11 + 0x48) = 2;
      bVar4 = true;
      uVar10 = 0x100942;
      uVar8 = 0x37;
      goto LAB_00939fcb;
    }
  }
  *(void*)(lVar11 + 0x48) = 1;
  bVar4 = true;
  uVar10 = 0x100941;
  uVar8 = 0x5f;
LAB_00939fcb:
  *(void*)(lVar11 + 0x50) = uVar8;
  *(uint64_t *)(lVar11 + 0x48) = uVar10;
  if (local_res8 != '\0') {
    uVar6 = (uint)*(byte *)(param_2 + 7);
    *(uint64_t *)(lVar11 + 0x48) =
         (uint64_t)((char)*(byte *)(param_2 + 7) < '\0') * 0x1000 + 0x1000 | uVar10 |
         (uint64_t)((uVar6 & 0x10) >> 4) * 0x40000 + 0x40000 |
         (uint64_t)((uVar6 & 0x20) >> 5) * 0x10000 + 0x10000 |
         (uint64_t)((uVar6 & 0x40) >> 6) * 0x4000 + 0x4000;
  }
  *(void*)(lVar11 + 0x54) = 1;
  if (bVar3) {
    *(void*)(this_ptr + 0x20) = 1;
    *(void*)(lVar11 + 0x40) = 1;
  }
  else {
    *(void*)(this_ptr + 0x20) = 0;
    if (bVar12 && !bVar4) {
      *(void*)(lVar11 + 0x40) = 8;
      *(void*)(lVar11 + 0x50) = 1;
      *(void*)(lVar11 + 0x59) = 0;
      uVar8 = 1;
    }
    else {
      *(void*)(lVar11 + 0x40) = 4;
      *(void*)(lVar11 + 0x50) = 0;
      uVar8 = 0;
    }
  }
  *(void*)(this_ptr + 0x24) = uVar8;
  *(void*)(this_ptr + 0x21) = 0;
  return;
}

