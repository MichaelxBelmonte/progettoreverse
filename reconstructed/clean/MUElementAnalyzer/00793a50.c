// Function: FUN_00793a50
// Address: 00793a50
// Size: 3673 bytes
// Class: MUElementAnalyzer
// String references:
//   "MUElementAnalyzer"
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


uint64_t FUN_00793a50(void)

{
  void* pVar1;
  int64_t *******ppppppplVar2;
  bool bVar3;
  char cVar4;
  int64_t lVar5;
  int64_t *******ppppppplVar6;
  char cVar7;
  uint64_t uVar8;
  int64_t lVar9;
  void *pvVar10;
  undefined7 uVar11;
  undefined7 extraout_var;
  char cVar12;
  void* pVar13;
  int64_t *******ppppppplVar14;
  uint64_t uVar15;
  int64_t *******ppppppplVar16;
  int64_t *******ppppppplVar17;
  int iVar18;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar19;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_130;
  char local_128;
  int64_t *******local_120;
  char local_118;
  int64_t *******local_110;
  char local_108;
  int64_t *******local_100;
  char local_f8;
  int64_t *******local_f0;
  char local_e8;
  int64_t *******local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *******local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint local_94;
  int64_t *******local_90;
  int64_t *******local_88;
  int64_t ******local_80;
  int64_t *******local_78;
  uint64_t local_70;
  int local_68;
  uint64_t local_60;
  int64_t *******local_58;
  int64_t *******local_50;
  char local_48;
  uint64_t uVar20;
  
  FUN_01f27fe0();
  uVar8 = (*(*local_88)[0x8a])();
  cVar7 = (char)uVar8;
  if (((char)local_80 != '\0') && (local_88 != (int64_t *******)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  uVar15 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1) & 0xffffffff;
  if (cVar7 == '\0') {
    return uVar15;
  }
  if (*arg1 == 0) {
    return uVar15;
  }
  if (*(int *)(*arg1 + 0xc) != 1) {
    return uVar15;
  }
  FUN_00d23310();
  ppppppplVar6 = local_88;
  local_50 = (int64_t *******)CONCAT71(local_50._1_7_,(char)local_80);
  ppppppplVar16 = &local_80;
  if ((char)local_80 == '\0') {
    ppppppplVar16 = (int64_t *******)&local_50;
  }
  *(void*)ppppppplVar16 = 0;
  if (((char)local_80 != '\0') && (local_88 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 == '\0') && (ppppppplVar6 != (int64_t *******)0x0)) {
    FUN_00d50b00();
  }
  local_a8 = 0;
  if (*(int64_t ********)(this_ptr + 0x120) != (int64_t *******)0x0) {
    local_80._0_1_ = '\0';
    local_88 = (int64_t *******)0x0;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_70._4_4_ = 0;
    local_78 = *(int64_t ********)(this_ptr + 0x120);
    do {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar18 = -local_70._4_4_;
        }
        else {
          iVar18 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar18);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar18 = 0;
        }
        local_70 = CONCAT44(iVar18,(int)local_70);
      }
      lVar9 = (int64_t)(int)local_70;
      iVar18 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar18);
      if (*(int *)((int64_t)local_78 + 0xc) <= iVar18) {
        local_a8 = 0;
        ppppppplVar16 = (int64_t *******)0x0;
        ppppppplVar14 = local_78;
        goto LAB_00793e27;
      }
      ppppppplVar16 = (int64_t *******)local_78[2][lVar9 + 1];
      local_50 = ppppppplVar16;
      local_88 = ppppppplVar16;
      if ((g_026e0c38 == '\0') && (iVar18 = ___cxa_guard_acquire(), iVar18 != 0)) {
        g_026e0b88 = FUN_000fddb0();
        g_026e0b70 = "MUElementAnalyzer";
        g_026e0b78 = 0x180;
        g_026e0b80 = FUN_000fdd80;
        g_026e0b90 = 0;
        ram_00000000026e0b98 = 0;
        g_026e0ba0 = 0;
        g_026e0c18 = 0;
        ram_00000000026e0c20 = 0;
        g_026e0c28 = 0;
        g_026e0c2a = 1;
        g_026e0ba8 = 0;
        ram_00000000026e0bb0 = 0;
        g_026e0bb8 = 0;
        ram_00000000026e0bc0 = 0;
        g_026e0bc8 = 0;
        ram_00000000026e0bd0 = 0;
        g_026e0bd8 = 0;
        ram_00000000026e0be0 = 0;
        g_026e0be8 = 0;
        ram_00000000026e0bf0 = 0;
        g_026e0bf8 = 0;
        ram_00000000026e0c00 = 0;
        g_026e0c08 = 0;
        ram_00000000026e0c10 = 0;
        g_026e0c33 = 0;
        g_026e0c2b = 0;
        ___cxa_guard_release();
      }
      ppppppplVar14 = (int64_t *******)&g_02802688;
      if (ppppppplVar16 != (int64_t *******)0x0) {
        (*(*ppppppplVar16)[0x6c])();
        cVar7 = FUN_00e85ea0();
        ppppppplVar14 = (int64_t *******)&local_50;
        if (cVar7 == '\0') {
          ppppppplVar14 = (int64_t *******)&g_02802688;
        }
      }
      if (*ppppppplVar14 != (int64_t ******)0x0) {
        uVar19 = FUN_00e33de0();
        lVar9 = g_0270b920;
        if (g_0270b920 != 0) {
          uVar19 = FUN_00d50b00();
        }
        local_130 = lVar9;
        local_128 = '\x01';
        FUN_000175c0(uVar19,&local_130);
        ppppppplVar16 = local_50;
        uVar8 = FUN_0006e1c0();
        ppppppplVar14 = (int64_t *******)&g_02802688;
        if (ppppppplVar16 != (int64_t *******)0x0) {
          (*(*ppppppplVar16)[0x6c])();
          uVar8 = FUN_00e85ea0();
          ppppppplVar14 = (int64_t *******)&local_50;
          if ((char)uVar8 == '\0') {
            ppppppplVar14 = (int64_t *******)&g_02802688;
          }
        }
        ppppppplVar2 = (int64_t *******)*ppppppplVar14;
        if (*(char *)(ppppppplVar14 + 1) == '\0') {
          if (ppppppplVar2 != (int64_t *******)0x0) {
            uVar8 = FUN_00d50b00();
          }
        }
        else {
          *(void*)(ppppppplVar14 + 1) = 0;
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
          uVar8 = FUN_00d50b20();
        }
        if ((local_128 != '\0') && (local_130 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        ppppppplVar16 = local_88;
        if (ppppppplVar2 == ppppppplVar6) goto LAB_00793ddd;
        if (ppppppplVar2 != (int64_t *******)0x0) {
          FUN_00d50b20();
        }
      }
    } while( true );
  }
LAB_00793e72:
  uVar8 = FUN_00c9fe20();
  ppppppplVar16 = local_88;
  uVar11 = (undefined7)((uint64_t)uVar8 >> 8);
  ppppppplVar14 = &local_80;
  if ((char)local_80 == '\0') {
    ppppppplVar14 = (int64_t *******)&local_50;
  }
  local_50 = (int64_t *******)CONCAT71(local_50._1_7_,(char)local_80);
  *(void*)ppppppplVar14 = 0;
  uVar19 = extraout_XMM0_Da;
  if (((char)local_80 != '\0') && (local_88 != (int64_t *******)0x0)) {
    uVar19 = FUN_00d50b20();
    uVar11 = extraout_var;
  }
  if ((char)local_50 == '\0') {
    if (ppppppplVar16 != (int64_t *******)0x0) {
      uVar19 = FUN_00d50b00();
      goto LAB_00793efa;
    }
  }
  else if (ppppppplVar16 != (int64_t *******)0x0) {
LAB_00793efa:
    local_80._0_1_ = '\0';
    local_88 = (int64_t *******)0x0;
    local_78 = ppppppplVar16;
    local_68 = 0;
    local_70 = 0;
    if (0 < *(int *)((int64_t)ppppppplVar16 + 0xc)) {
      lVar9 = 0;
      do {
        ppppppplVar14 = (int64_t *******)ppppppplVar16[2][lVar9];
        local_118 = '\0';
        local_120 = ppppppplVar14;
        local_88 = ppppppplVar14;
        FUN_0076f110(uVar19,&local_120);
        ppppppplVar2 = local_50;
        if (local_48 == '\0') {
          if (((local_50 != (int64_t *******)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
             (local_50 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_48 = '\0';
        }
        if ((local_118 != '\0') && (local_120 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        local_50 = ppppppplVar6;
        local_48 = '\0';
        cVar7 = FUN_00d23d70();
        uVar19 = extraout_XMM0_Da_00;
        if ((local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
          uVar19 = FUN_00d50b20();
        }
        if (cVar7 != '\0') {
          local_50 = ppppppplVar6;
          local_48 = '\0';
          FUN_00d23f50();
          if ((local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          if (*(int *)((int64_t)ppppppplVar2 + 0xc) < 2) {
            local_48 = '\0';
            local_50 = ppppppplVar14;
            FUN_00ca13a0();
            if ((local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
          break;
        }
        if (ppppppplVar2 != (int64_t *******)0x0) {
          uVar19 = FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
        local_70 = CONCAT44(local_70._4_4_,(int)lVar9);
      } while ((int)lVar9 < *(int *)((int64_t)ppppppplVar16 + 0xc));
    }
    FUN_00115190();
    uVar8 = FUN_00d50b20();
    bVar3 = true;
    uVar20 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1) & 0xffffffff;
    goto joined_r0x007948af;
  }
  uVar20 = CONCAT71(uVar11,1) & 0xffffffff;
LAB_007948bd:
  if (ppppppplVar6 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  return uVar20;
LAB_00793ddd:
  if (local_88 == (int64_t *******)0x0) {
    local_a8 = 0;
    ppppppplVar16 = (int64_t *******)0x0;
  }
  else {
    if ((char)local_80 == '\0') {
      uVar8 = FUN_00d50b00();
    }
    else {
      local_80._0_1_ = '\0';
    }
    local_a8 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
  }
  if (ppppppplVar6 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
LAB_00793e27:
  FUN_0079bb70();
  if (ppppppplVar16 == (int64_t *******)0x0) goto LAB_00793e72;
  local_b0 = ppppppplVar16;
  pvVar10 = _pthread_getspecific((void*)ppppppplVar14);
  if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    ppppppplVar14 = ppppppplVar6;
  }
  FUN_01264240();
  ppppppplVar16 = local_88;
  if ((char)local_80 == '\0') {
    if (local_88 != (int64_t *******)0x0) {
      FUN_00d50b00();
      if (((char)local_80 != '\0') && (local_88 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0079405d;
    }
LAB_007940e9:
    uVar15 = CONCAT71((int7)((uint64_t)ppppppplVar14 >> 8),1);
    local_90 = (int64_t *******)0x0;
    local_a0 = 0;
    uVar8 = 0;
    local_60 = (int64_t *******)CONCAT44(local_60._4_4_,1);
LAB_007942da:
    local_58 = ppppppplVar16;
    ppppppplVar14 = *(int64_t ********)(this_ptr + 0x120);
    uVar20 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1) & 0xffffffff;
    if (ppppppplVar14 == (int64_t *******)0x0) {
      cVar7 = (char)local_60;
    }
    else {
      local_94 = (uint)uVar15;
      local_80._0_1_ = '\0';
      local_88 = (int64_t *******)0x0;
      local_68 = 0;
      local_70 = 0;
      local_78 = ppppppplVar14;
      if (0 < *(int *)((int64_t)ppppppplVar14 + 0xc)) {
        lVar9 = 0;
        do {
          local_88 = (int64_t *******)ppppppplVar14[2][lVar9];
          uVar19 = FUN_00e33de0();
          lVar5 = g_0270b920;
          if (g_0270b920 != 0) {
            uVar19 = FUN_00d50b00();
          }
          local_d0 = lVar5;
          local_c8 = '\x01';
          FUN_000175c0(uVar19,&local_d0);
          ppppppplVar2 = local_50;
          FUN_0006e1c0();
          ppppppplVar16 = (int64_t *******)&g_02802688;
          if (ppppppplVar2 != (int64_t *******)0x0) {
            (*(*ppppppplVar2)[0x6c])();
            cVar7 = FUN_00e85ea0();
            ppppppplVar16 = (int64_t *******)&local_50;
            if (cVar7 == '\0') {
              ppppppplVar16 = (int64_t *******)&g_02802688;
            }
          }
          ppppppplVar2 = (int64_t *******)*ppppppplVar16;
          if (*(char *)(ppppppplVar16 + 1) == '\0') {
            if (ppppppplVar2 != (int64_t *******)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(ppppppplVar16 + 1) = 0;
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          if (ppppppplVar2 == ppppppplVar6) {
            FUN_00e34b50();
          }
          if (ppppppplVar2 != (int64_t *******)0x0) {
            FUN_00d50b20();
          }
          lVar9 = lVar9 + 1;
          local_70 = CONCAT44(local_70._4_4_,(int)lVar9);
        } while ((int)lVar9 < *(int *)((int64_t)ppppppplVar14 + 0xc));
      }
      FUN_00097c40();
      uVar15 = (uint64_t)local_94;
      cVar7 = (char)local_60;
    }
    cVar12 = (char)uVar15;
    cVar4 = (char)local_a0;
  }
  else {
    if (local_88 == (int64_t *******)0x0) goto LAB_007940e9;
LAB_0079405d:
    local_80._0_1_ = '\0';
    local_88 = ppppppplVar16;
    cVar7 = FUN_00ca18c0();
    if (((char)local_80 != '\0') && (local_88 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    uVar15 = CONCAT71((int7)((uint64_t)ppppppplVar14 >> 8),1);
    if (cVar7 == '\0') {
      local_90 = (int64_t *******)0x0;
      uVar8 = 0;
      local_a0 = 0;
LAB_00794121:
      local_60 = (int64_t *******)((uint64_t)local_60._4_4_ << 0x20);
      goto LAB_007942da;
    }
    local_110 = ppppppplVar16;
    local_108 = '\0';
    FUN_0076f110(uVar15,&local_110);
    local_90 = local_88;
    ppppppplVar14 = local_88;
    if (local_88 == (int64_t *******)0x0) {
      local_90 = (int64_t *******)0x0;
      uVar8 = 0;
      local_a0 = 0;
    }
    else if ((char)local_80 == '\0') {
      uVar8 = FUN_00d50b00();
      uVar8 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
      local_a0 = uVar8;
      if (((char)local_80 != '\0') && (local_88 != (int64_t *******)0x0)) {
        uVar8 = FUN_00d50b20();
      }
    }
    else {
      local_80._0_1_ = '\0';
      uVar8 = CONCAT71((int7)((uint64_t)local_88 >> 8),1);
      local_a0 = uVar8;
    }
    if ((local_108 != '\0') && (local_110 != (int64_t *******)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if (local_90 == (int64_t *******)0x0) {
      uVar8 = 0;
      local_90 = (int64_t *******)0x0;
      local_60 = (int64_t *******)((uint64_t)local_60._4_4_ << 0x20);
      uVar15 = CONCAT71((int7)((uint64_t)ppppppplVar14 >> 8),1);
      goto LAB_007942da;
    }
    if (*(int *)((int64_t)local_90 + 0xc) < 1) {
      uVar15 = 0;
      goto LAB_00794121;
    }
    FUN_00d23340();
    ppppppplVar2 = local_88;
    ppppppplVar14 = (int64_t *******)&local_50;
    ppppppplVar17 = &local_80;
    if ((char)local_80 == '\0') {
      ppppppplVar17 = ppppppplVar14;
    }
    local_50 = (int64_t *******)CONCAT71(local_50._1_7_,(char)local_80);
    *(void*)ppppppplVar17 = 0;
    if (((char)local_80 != '\0') && (local_88 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    pVar13 = (void*)ppppppplVar14;
    if (((char)local_50 == '\0') && (ppppppplVar2 != (int64_t *******)0x0)) {
      FUN_00d50b00();
    }
    pvVar10 = _pthread_getspecific(pVar13);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    local_60 = local_88;
    if (((((char)local_80 == '\0') && (local_88 != (int64_t *******)0x0)) &&
        (FUN_00d50b00(), (char)local_80 != '\0')) && (local_88 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    pvVar10 = _pthread_getspecific(pVar13);
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pVar13 = (void*)local_60;
    }
    local_f8 = '\0';
    local_100 = ppppppplVar2;
    FUN_012e6e20();
    if ((local_f8 != '\0') && (local_100 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    pVar1 = (void*)ppppppplVar6;
    if (ppppppplVar6 != (int64_t *******)0x0) {
      pvVar10 = _pthread_getspecific(pVar13);
      if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        pVar13 = pVar1;
      }
      FUN_01266fe0();
      ppppppplVar14 = local_88;
      if (((char)local_80 != '\0') && (local_88 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if (ppppppplVar14 != (int64_t *******)0x0) {
        pvVar10 = _pthread_getspecific(pVar13);
        if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pVar13 = pVar1;
        }
        FUN_01266fe0();
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_f0 = ppppppplVar6;
        local_e8 = '\0';
        FUN_012e6e20();
        if ((local_e8 != '\0') && (local_f0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_80 != '\0') && (local_88 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    pvVar10 = _pthread_getspecific(pVar13);
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pVar13 = pVar1;
    }
    pvVar10 = _pthread_getspecific(pVar13);
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pVar13 = (void*)ppppppplVar2;
    }
    FUN_0125a280();
    FUN_012642b0();
    pvVar10 = _pthread_getspecific(pVar13);
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pVar13 = pVar1;
    }
    pvVar10 = _pthread_getspecific(pVar13);
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pVar13 = (void*)ppppppplVar2;
    }
    FUN_01264170();
    FUN_01259540();
    pvVar10 = _pthread_getspecific(pVar13);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    ppppppplVar14 = local_60;
    local_e0 = ppppppplVar6;
    local_d8 = '\0';
    FUN_012e6a70();
    if ((local_d8 != '\0') && (local_e0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    local_80._0_1_ = '\0';
    local_88 = ppppppplVar2;
    FUN_00d23f50();
    if (((char)local_80 != '\0') && (local_88 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if (*(int *)((int64_t)local_90 + 0xc) < 2) {
      local_80._0_1_ = '\0';
      local_88 = ppppppplVar16;
      FUN_00ca13a0();
      if (((char)local_80 != '\0') && (local_88 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
    if (ppppppplVar14 != (int64_t *******)0x0) {
      FUN_00d50b20();
    }
    if (ppppppplVar2 != (int64_t *******)0x0) {
      FUN_00d50b20();
    }
    cVar12 = '\0';
    cVar7 = '\0';
    uVar20 = 0;
    cVar4 = (char)local_a0;
  }
  if ((cVar4 != '\0') && (cVar12 == '\0')) {
    FUN_00d50b20();
  }
  if (cVar7 == '\0') {
    FUN_00d50b20();
  }
  bVar3 = false;
joined_r0x007948af:
  if (((char)local_a8 != '\0') && (!bVar3)) {
    FUN_00d50b20();
  }
  goto LAB_007948bd;
}

