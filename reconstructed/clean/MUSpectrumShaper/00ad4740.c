// Function: FUN_00ad4740
// Address: 00ad4740
// Size: 1151 bytes
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


int FUN_00ad4740(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  void*puVar1;
  uint64_t uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  string *psVar7;
  string *psVar8;
  void*puVar9;
  void*puVar10;
  byte bVar11;
  uint uVar12;
  string *psVar13;
  void*arg1;
  int64_t this_ptr;
  string *psVar15;
  int iVar16;
  uint32_t uVar17;
  uint32_t extraout_XMM0_Da;
  uint64_t uVar18;
  uint64_t local_48;
  string *psStack_40;
  void*local_38;
  string *psVar14;
  
  iVar4 = (**(code **)(**(int64_t **)(this_ptr + 0x60) + 0x18))();
  uVar17 = 0;
  local_48 = 0;
  psStack_40 = (string *)0x0;
  local_38 = (void*)0x0;
  if (*(char *)(this_ptr + 0x78) == '\0') {
    uVar17 = (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x38))(0,1);
  }
  *(void*)(this_ptr + 0x78) = 1;
  if (*(char *)(this_ptr + 0x79) != '\"') {
    cVar3 = (**(code **)(**(int64_t **)(this_ptr + 0x60) + 0x20))();
    uVar17 = extraout_XMM0_Da;
    if (cVar3 != '\0') {
      uVar17 = FUN_00ad3660();
    }
    if ((local_48 & 1) == 0) {
      local_48 = local_48 & 0xffffffffffff0000;
    }
    else {
      *local_38 = 0;
      psStack_40 = (string *)0x0;
    }
    cVar3 = *(char *)(this_ptr + 0x78);
    iVar16 = iVar4;
    while( true ) {
      if (cVar3 == '\0') {
        (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x38))(uVar17,1);
      }
      *(void*)(this_ptr + 0x78) = 1;
      uVar12 = *(byte *)(this_ptr + 0x79) - 0x2b;
      psVar14 = (string *)(uint64_t)uVar12;
      bVar11 = (byte)uVar12;
      psVar13 = psVar14;
      if ((0x3a < bVar11) ||
         (psVar13 = (string *)((uint64_t)psVar14 & 0xff),
         (0x400000004007fedU >> ((uint64_t)psVar14 & 0x3f) & 1) == 0)) break;
      *(void*)(this_ptr + 0x78) = 0;
      uVar17 = std::string::push_back(bVar11);
      iVar16 = iVar16 + 1;
      cVar3 = *(char *)(this_ptr + 0x78);
    }
    uVar18 = FUN_00ad4e80();
    goto LAB_00ad4a61;
  }
  iVar5 = FUN_00ad3c00(uVar17,1);
  uVar2 = local_48;
  psVar14 = (string *)(local_48 & 0xff);
  psVar15 = (string *)(local_48 >> 1 & 0x7f);
  psVar8 = psVar15;
  if ((local_48 & 1) != 0) {
    psVar8 = psStack_40;
  }
  psVar13 = g_028a0c18;
  if ((g_028a0c10 & 1) == 0) {
    psVar13 = (string *)(uint64_t)(g_028a0c10 >> 1);
  }
  if (psVar8 == psVar13) {
    iVar16 = iVar5 + iVar4;
    puVar1 = g_028a0c20;
    if ((g_028a0c10 & 1) == 0) {
      puVar1 = &g_028a0c11;
    }
    if ((local_48 & 1) == 0) {
      uVar18 = g_023908c8;
      if (psVar8 != (string *)0x0) {
        psVar7 = (string *)0x0;
        do {
          psVar13 = (string *)(uint64_t)(byte)psVar7[(int64_t)&local_48 + 1];
          if (psVar7[(int64_t)&local_48 + 1] != psVar7[(int64_t)puVar1]) goto LAB_00ad4884;
          psVar7 = psVar7 + 1;
          uVar18 = g_023908c8;
        } while (psVar15 != psVar7);
      }
      goto LAB_00ad4a61;
    }
    uVar18 = g_023908c8;
    if ((psVar8 == (string *)0x0) ||
       (iVar6 = _memcmp(psVar13,psVar8,param_3), uVar18 = g_023908c8, iVar6 == 0))
    goto LAB_00ad4a61;
  }
LAB_00ad4884:
  iVar16 = iVar5 + iVar4;
  psVar13 = g_028a0c30;
  if ((g_028a0c28 & 1) == 0) {
    psVar13 = (string *)(uint64_t)(g_028a0c28 >> 1);
  }
  if (psVar8 == psVar13) {
    puVar1 = g_028a0c38;
    if ((g_028a0c28 & 1) == 0) {
      puVar1 = &g_028a0c29;
    }
    if ((uVar2 & 1) == 0) {
      uVar18 = g_023e1698;
      if (psVar8 != (string *)0x0) {
        psVar7 = (string *)0x0;
        do {
          psVar13 = (string *)(uint64_t)(byte)psVar7[(int64_t)&local_48 + 1];
          if (psVar7[(int64_t)&local_48 + 1] != psVar7[(int64_t)puVar1]) goto LAB_00ad4996;
          psVar7 = psVar7 + 1;
          uVar18 = g_023e1698;
        } while (psVar15 != psVar7);
      }
      goto LAB_00ad4a61;
    }
    uVar18 = g_023e1698;
    if ((psVar8 == (string *)0x0) ||
       (iVar4 = _memcmp(psVar13,psVar8,param_3), uVar18 = g_023e1698, iVar4 == 0))
    goto LAB_00ad4a61;
  }
LAB_00ad4996:
  psVar13 = g_028a0c48;
  if ((g_028a0c40 & 1) == 0) {
    psVar13 = (string *)(uint64_t)(g_028a0c40 >> 1);
  }
  if (psVar8 == psVar13) {
    puVar1 = g_028a0c50;
    if ((g_028a0c40 & 1) == 0) {
      puVar1 = &g_028a0c41;
    }
    uVar18 = g_0241f388;
    if ((uVar2 & 1) == 0) {
      if (psVar8 != (string *)0x0) {
        psVar8 = (string *)0x0;
        do {
          psVar13 = (string *)(uint64_t)(byte)psVar8[(int64_t)&local_48 + 1];
          if (psVar8[(int64_t)&local_48 + 1] != psVar8[(int64_t)puVar1]) goto LAB_00ad4a46;
          psVar8 = psVar8 + 1;
        } while (psVar15 != psVar8);
      }
      goto LAB_00ad4a61;
    }
    if ((psVar8 == (string *)0x0) ||
       (iVar4 = _memcmp(psVar13,psVar8,param_3), psVar14 = psVar8, uVar18 = g_0241f388, iVar4 == 0
       )) goto LAB_00ad4a61;
  }
LAB_00ad4a46:
  cVar3 = (**(code **)(**(int64_t **)(this_ptr + 0x60) + 0x20))();
  if (cVar3 == '\0') {
    puVar9 = (void*)___cxa_allocate_exception();
    puVar10 = operator_new((ulong)psVar13);
    puVar10[3] = 0x6465746f75712079;
    puVar10[2] = 0x6c64657463657078;
    puVar10[1] = 0x656e752061746164;
    *puVar10 = 0x20636972656d754e;
    *(void*)(puVar10 + 4) = 0;
    *puVar9 = &g_02517278;
    uVar17 = std::string::string((string *)0x20636972656d754e,psVar14);
    *puVar9 = &g_02517250;
    *(void*)(puVar9 + 4) = 1;
                        ___cxa_throw(uVar17,FUN_0088de20);
  }
  uVar18 = FUN_00ad4e80();
LAB_00ad4a61:
  *arg1 = uVar18;
  if ((local_48 & 1) != 0) {
    operator_delete(psVar13);
  }
  return iVar16;
}

