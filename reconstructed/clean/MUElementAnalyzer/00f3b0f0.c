// Function: FUN_00f3b0f0
// Address: 00f3b0f0
// Size: 8431 bytes
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


uint FUN_00f3b0f0(int param_1,uint param_2,int64_t param_3,mbstate_t *param_4)

{
  int64_t *plVar1;
  uint *puVar2;
  segment_command *psVar3;
  char *pcVar4;
  void*puVar5;
  void*puVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  qword qVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  bool bVar13;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  int iVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int64_t lVar27;
  dword *pdVar28;
  int64_t lVar29;
  segment_command *psVar30;
  uint32_t extraout_var;
  segment_command *psVar31;
  uint32_t extraout_var_00;
  uint32_t extraout_var_01;
  int64_t lVar32;
  uint64_t uVar33;
  int64_t lVar34;
  byte bVar35;
  bool bVar36;
  byte bVar37;
  uint64_t uVar38;
  segment_command *psVar39;
  wchar_t *pwVar40;
  dword *pdVar41;
  uint64_t uVar42;
  uint uVar43;
  uint uVar44;
  uint64_t uVar45;
  void*puVar46;
  bool bVar47;
  uint *puVar48;
  segment_command *psVar49;
  segment_command *arg1;
  segment_command *psVar50;
  wchar_t *this_ptr;
  int64_t lVar51;
  segment_command *psVar52;
  int *piVar53;
  uint64_t uVar54;
  size_t sVar55;
  size_t sVar56;
  uint64_t uVar57;
  mbstate_t *pmVar58;
  dword *pdVar59;
  void*puVar60;
  wchar_t *pwVar61;
  int *piVar62;
  int64_t *plVar63;
  uint64_t uVar64;
  uint *local_res8;
  uint8_t auStack_648 [1016];
  uint64_t uStack_250;
  uint8_t auStack_248 [8];
  int64_t local_240;
  void*local_238;
  uint local_230;
  uint local_22c;
  segment_command *psVar65;
  segment_command *local_200;
  segment_command *local_1d8;
  uint *local_1c8;
  uint local_1bc;
  uint local_194;
  size_t local_17c;
  uint local_16c;
  uint8_t local_b8 [32];
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  uint8_t local_78 [16];
  uint8_t local_68 [16];
  uint8_t local_58 [16];
  uint8_t local_48 [16];
  int64_t local_38;
  
  psVar49 = (segment_command *)auStack_248;
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_16c = 0;
  local_17c = 1;
  uVar7 = *(uint *)(this_ptr + 0x2c);
  uStack_250 = 0xf3b161;
  pmVar58 = param_4;
  lVar27 = FUN_00f3f400();
  local_b8._0_16_ = (uint8_t  [16])0x0;
  local_b8._16_16_ = (uint8_t  [16])0x0;
  local_98 = (uint8_t  [16])0x0;
  local_88 = (uint8_t  [16])0x0;
  local_78 = (uint8_t  [16])0x0;
  local_68 = (uint8_t  [16])0x0;
  local_58 = (uint8_t  [16])0x0;
  local_48 = (uint8_t  [16])0x0;
  local_1bc = 0xc;
  if (lVar27 != 0) {
    if (*(uint64_t *)(lVar27 + 0x18) < 0xc0) {
      puVar46 = auStack_648;
      psVar49 = (segment_command *)puVar46;
    }
    else {
      puVar46 = (void*)0x0;
      psVar49 = (segment_command *)auStack_248;
    }
    *(void*)((int64_t)psVar49 + -8) = 0xf3b1e6;
    pdVar28 = (dword *)FUN_00f3f480(0,puVar46,0xc0);
    if (pdVar28 != (dword *)0x0) {
      *(uint8_t (*) [16])(pdVar28 + 0x2c) = (uint8_t  [16])0x0;
      uVar23 = *(uint *)(this_ptr + 0x24);
      uVar38 = (uint64_t)(int)uVar23;
      uVar45 = uVar38 * 4 + 0xf & 0xfffffffffffffff0;
      uVar57 = (int64_t)psVar49 - uVar45;
      lVar51 = uVar57 - ((uint64_t)*(uint *)(this_ptr + 0x1a) * 8 + 0xf & 0xfffffffffffffff0);
      psVar52 = (segment_command *)
                (lVar51 - ((int64_t)*(int *)(this_ptr + 0x2a) * 4 + 0xfU & 0xfffffffffffffff0));
      local_238 = (void*)((int64_t)psVar49 + (0x10 - uVar45));
      iVar22 = 0;
      local_1bc = 0xffffffff;
      local_194 = 0xffffffff;
      local_240 = param_3;
      psVar49 = psVar52;
      psVar65 = arg1;
      local_1d8 = arg1;
      uVar8 = local_16c;
      lVar32 = local_240;
      do {
        local_240 = lVar32;
        if (0 < (int)uVar23) {
          if (lVar32 == 0) {
            if ((uint)uVar38 < 8) {
              uVar45 = 0;
            }
            else {
              uVar45 = (uint64_t)((uint)uVar38 & 0xfffffff8);
              uVar33 = (uVar45 - 8 >> 3) + 1;
              uVar54 = (uint64_t)((uint)uVar33 & 7);
              if (uVar45 - 8 < 0x38) {
                lVar29 = 0;
              }
              else {
                lVar32 = -(uVar33 & 0xfffffffffffffff8);
                lVar29 = 0;
                do {
                  puVar5 = (void*)(uVar57 + lVar29 * 4);
                  *puVar5 = 0xffffffff;
                  puVar5[1] = 0xffffffff;
                  puVar5[2] = 0xffffffff;
                  puVar5[3] = 0xffffffff;
                  puVar5 = (void*)(uVar57 + 0x10 + lVar29 * 4);
                  *puVar5 = 0xffffffff;
                  puVar5[1] = 0xffffffff;
                  puVar5[2] = 0xffffffff;
                  puVar5[3] = 0xffffffff;
                  puVar5 = (void*)(uVar57 + 0x20 + lVar29 * 4);
                  *puVar5 = 0xffffffff;
                  puVar5[1] = 0xffffffff;
                  puVar5[2] = 0xffffffff;
                  puVar5[3] = 0xffffffff;
                  puVar5 = (void*)(uVar57 + 0x30 + lVar29 * 4);
                  *puVar5 = 0xffffffff;
                  puVar5[1] = 0xffffffff;
                  puVar5[2] = 0xffffffff;
                  puVar5[3] = 0xffffffff;
                  puVar5 = (void*)(uVar57 + 0x40 + lVar29 * 4);
                  *puVar5 = 0xffffffff;
                  puVar5[1] = 0xffffffff;
                  puVar5[2] = 0xffffffff;
                  puVar5[3] = 0xffffffff;
                  puVar5 = (void*)(uVar57 + 0x50 + lVar29 * 4);
                  *puVar5 = 0xffffffff;
                  puVar5[1] = 0xffffffff;
                  puVar5[2] = 0xffffffff;
                  puVar5[3] = 0xffffffff;
                  puVar5 = (void*)(uVar57 + 0x60 + lVar29 * 4);
                  *puVar5 = 0xffffffff;
                  puVar5[1] = 0xffffffff;
                  puVar5[2] = 0xffffffff;
                  puVar5[3] = 0xffffffff;
                  puVar5 = (void*)(uVar57 + 0x70 + lVar29 * 4);
                  *puVar5 = 0xffffffff;
                  puVar5[1] = 0xffffffff;
                  puVar5[2] = 0xffffffff;
                  puVar5[3] = 0xffffffff;
                  puVar5 = (void*)(uVar57 + 0x80 + lVar29 * 4);
                  *puVar5 = 0xffffffff;
                  puVar5[1] = 0xffffffff;
                  puVar5[2] = 0xffffffff;
                  puVar5[3] = 0xffffffff;
                  puVar5 = (void*)(uVar57 + 0x90 + lVar29 * 4);
                  *puVar5 = 0xffffffff;
                  puVar5[1] = 0xffffffff;
                  puVar5[2] = 0xffffffff;
                  puVar5[3] = 0xffffffff;
                  puVar5 = (void*)(uVar57 + 0xa0 + lVar29 * 4);
                  *puVar5 = 0xffffffff;
                  puVar5[1] = 0xffffffff;
                  puVar5[2] = 0xffffffff;
                  puVar5[3] = 0xffffffff;
                  puVar5 = (void*)(uVar57 + 0xb0 + lVar29 * 4);
                  *puVar5 = 0xffffffff;
                  puVar5[1] = 0xffffffff;
                  puVar5[2] = 0xffffffff;
                  puVar5[3] = 0xffffffff;
                  puVar5 = (void*)(uVar57 + 0xc0 + lVar29 * 4);
                  *puVar5 = 0xffffffff;
                  puVar5[1] = 0xffffffff;
                  puVar5[2] = 0xffffffff;
                  puVar5[3] = 0xffffffff;
                  puVar5 = (void*)(uVar57 + 0xd0 + lVar29 * 4);
                  *puVar5 = 0xffffffff;
                  puVar5[1] = 0xffffffff;
                  puVar5[2] = 0xffffffff;
                  puVar5[3] = 0xffffffff;
                  puVar5 = (void*)(uVar57 + 0xe0 + lVar29 * 4);
                  *puVar5 = 0xffffffff;
                  puVar5[1] = 0xffffffff;
                  puVar5[2] = 0xffffffff;
                  puVar5[3] = 0xffffffff;
                  puVar5 = (void*)(uVar57 + 0xf0 + lVar29 * 4);
                  *puVar5 = 0xffffffff;
                  puVar5[1] = 0xffffffff;
                  puVar5[2] = 0xffffffff;
                  puVar5[3] = 0xffffffff;
                  lVar29 = lVar29 + 0x40;
                  lVar32 = lVar32 + 8;
                } while (lVar32 != 0);
              }
              if (uVar54 != 0) {
                lVar32 = 0;
                do {
                  puVar5 = (void*)(local_238 + lVar32 + lVar29 * 4 + -0x10);
                  *puVar5 = 0xffffffff;
                  puVar5[1] = 0xffffffff;
                  puVar5[2] = 0xffffffff;
                  puVar5[3] = 0xffffffff;
                  puVar5 = (void*)(local_238 + lVar32 + lVar29 * 4);
                  *puVar5 = 0xffffffff;
                  puVar5[1] = 0xffffffff;
                  puVar5[2] = 0xffffffff;
                  puVar5[3] = 0xffffffff;
                  lVar32 = lVar32 + 0x20;
                } while (uVar54 << 5 != lVar32);
              }
              if (uVar45 == (uVar38 & 0xffffffff)) goto LAB_00f3b420;
            }
            do {
              *(void*)(uVar57 + uVar45 * 4) = 0xffffffff;
              uVar45 = uVar45 + 1;
            } while (uVar45 < (uVar38 & 0xffffffff));
          }
          else {
            lVar29 = 0;
            do {
              *(void*)(uVar57 + lVar29 * 4) = 0xffffffff;
              *(void*)(lVar32 + lVar29 * 4) = 0xffffffff;
              lVar29 = lVar29 + 1;
            } while (lVar29 < *(int *)(this_ptr + 0x24));
          }
        }
LAB_00f3b420:
        if (0 < *(int *)(this_ptr + 0x2a)) {
          psVar49[-1].nsects = 0xf3b43b;
          psVar49[-1].flags = 0;
          ___bzero();
        }
        sVar55 = (size_t)uVar57;
        local_16c = uVar8;
        if (param_1 == 3) {
          pcVar9 = *(code **)arg1->segname;
          psVar49[-1].nsects = 0xf3b477;
          psVar49[-1].flags = 0;
          uVar64 = (*pcVar9)();
          local_194 = local_194 + local_17c;
          qVar10 = arg1->vmaddr;
          pcVar9 = *(code **)arg1;
          psVar49[-1].nsects = 0xf3b499;
          psVar49[-1].flags = 0;
          iVar22 = (*pcVar9)(uVar64,qVar10);
LAB_00f3b4b4:
          bVar13 = false;
        }
        else {
          if (param_1 == 0) {
            local_194 = local_194 + 1;
            if (((int)param_2 < 0) || ((int)local_194 < (int)param_2)) {
              local_16c = psVar65->cmd;
              psVar65 = (segment_command *)&psVar65->cmdsize;
            }
            else {
              local_16c = 0;
            }
            goto LAB_00f3b4b4;
          }
          if (param_1 == 2) {
            local_194 = local_194 + local_17c;
            if (local_1d8 == (segment_command *)0x0) {
              local_16c = 0;
              bVar13 = false;
              local_1d8 = (segment_command *)0x0;
            }
            else {
              psVar30 = (segment_command *)(uint64_t)(param_2 - local_194);
              if ((int)param_2 < 0) {
                psVar30 = &segment_command_00000020;
              }
              if ((int)psVar30 < 1) {
                local_16c = 0;
                local_17c = 1;
              }
              else {
                psVar49[-1].nsects = 0xf3bd86;
                psVar49[-1].flags = 0;
                local_17c = _mbrtowc((wchar_t *)local_b8,(char *)psVar30,sVar55,pmVar58);
                uVar38 = CONCAT44(extraout_var,local_17c);
                if (0xfffffffffffffffd < uVar38) {
LAB_00f3d232:
                  local_1bc = 1;
                  goto LAB_00f3d200;
                }
                if ((uVar38 == 0) && (-1 < (int)param_2)) {
                  local_17c = 1;
                  local_16c = 0;
                  local_1d8 = (segment_command *)((int64_t)&local_1d8->cmd + 1);
                }
                else {
                  local_1d8 = (segment_command *)(local_1d8->segname + (uVar38 - 8));
                }
              }
              bVar13 = false;
            }
          }
          else if (param_1 == 1) {
            local_194 = local_194 + 1;
            if (((int)param_2 < 0) || ((int)local_194 < (int)param_2)) {
              pdVar41 = &local_1d8->cmd;
              local_1d8 = (segment_command *)((int64_t)&local_1d8->cmd + 1);
              local_16c = (uint)(byte)*pdVar41;
              bVar13 = true;
            }
            else {
              local_16c = 0;
              bVar13 = true;
            }
          }
          else {
            bVar13 = false;
          }
        }
        auVar21 = local_48;
        auVar20 = local_58;
        auVar19 = local_68;
        auVar18 = local_78;
        auVar17 = local_88;
        auVar16 = local_98;
        auVar15 = local_b8._16_16_;
        auVar14 = local_b8._0_16_;
        uVar38 = (uint64_t)uVar8;
        uVar23 = uVar7 & 4;
        uVar43 = uVar23 >> 2;
        puVar46 = (void*)(uint64_t)uVar43;
        pdVar41 = (dword *)(uint64_t)local_16c;
        local_22c = local_16c;
        lVar32 = *(int64_t *)(this_ptr + 8);
        local_230 = uVar43;
        if (*(int64_t *)(lVar32 + 8) == 0) {
          piVar62 = (int *)0x0;
          local_1c8 = (uint *)0x0;
        }
        else {
          puVar60 = (void*)(lVar32 + 8);
          local_1c8 = (uint *)0x0;
          piVar62 = (int *)0x0;
          pdVar59 = pdVar28;
          do {
            uVar24 = *(uint *)(lVar32 + 0x28);
            pdVar28 = pdVar59;
            if (uVar24 == 0) goto LAB_00f3b910;
            bVar35 = ((uVar24 & 1) == 0 || (int)local_194 < 1 && ((uint64_t)param_4 & 1) == 0) |
                     uVar8 == 10 & (byte)uVar43;
            pdVar41 = (dword *)CONCAT71((int7)((uint64_t)pdVar41 >> 8),bVar35);
            if (bVar35 == 1) {
              if ((uVar24 & 2) != 0) {
                pdVar41 = (dword *)(uint64_t)local_16c;
                uVar44 = (uint)param_4 & 2 | local_16c;
                puVar46 = (void*)(uint64_t)uVar44;
                if ((uVar44 != 0) && ((local_16c != 10 || (uVar23 == 0)))) goto LAB_00f3b5c0;
              }
              if (((uVar24 & 0x10) == 0) || ((int)local_194 < 1)) goto LAB_00f3b6f6;
              if (uVar8 != 0x5f) {
                if (uVar8 < 0x80) {
                  pdVar41 = &section_000004c0.flags;
                  uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + uVar38 * 4 + 0x3c) & 0x500;
                }
                else {
                  psVar49[-1].nsects = 0xf3b66f;
                  psVar49[-1].flags = 0;
                  uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar41,(ulong)puVar46);
                }
                if (uVar24 == 0) {
                  if ((uint64_t)local_16c != 0x5f) {
                    if (local_16c < 0x80) {
                      pdVar41 = &section_000004c0.flags;
                      uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                        (uint64_t)local_16c * 4 + 0x3c) & 0x500;
                    }
                    else {
                      psVar49[-1].nsects = 0xf3b6cf;
                      psVar49[-1].flags = 0;
                      uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar41,(ulong)puVar46);
                    }
                    if (uVar24 == 0) goto LAB_00f3b5c0;
                  }
LAB_00f3b6f6:
                  uVar24 = *(uint *)(lVar32 + 0x28);
                  if ((uVar24 & 0x20) == 0) {
joined_r0x00f3b85e:
                    if ((((uVar24 & 0x40) == 0) || (local_194 == 0)) || (local_16c == 0)) {
LAB_00f3b8fa:
                      if (*(char *)(lVar32 + 0x28) < '\0') {
                        if ((local_194 != 0) && (local_16c != 0)) {
                          if (uVar8 == 0x5f) {
                            bVar36 = true;
                            if (local_16c == 0x5f) goto LAB_00f3b910;
                          }
                          else {
                            if (uVar8 < 0x80) {
                              pdVar41 = &section_000004c0.flags;
                              uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                uVar38 * 4 + 0x3c) & 0x500;
                            }
                            else {
                              psVar49[-1].nsects = 0xf3bb76;
                              psVar49[-1].flags = 0;
                              uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar41,(ulong)puVar46);
                            }
                            bVar36 = uVar24 != 0;
                            if (local_16c == 0x5f) {
                              if (uVar24 != 0) goto LAB_00f3b910;
                              goto LAB_00f3b5c0;
                            }
                          }
                          if (local_16c < 0x80) {
                            pdVar41 = &section_000004c0.flags;
                            uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                              (uint64_t)local_16c * 4 + 0x3c) & 0x500;
                          }
                          else {
                            psVar49[-1].nsects = 0xf3bbbf;
                            psVar49[-1].flags = 0;
                            uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar41,(ulong)puVar46);
                          }
                          if (!(bool)(bVar36 ^ uVar24 != 0)) goto LAB_00f3b910;
                        }
                      }
                      else {
LAB_00f3b910:
                        if (piVar62 == (int *)0x0) {
                          piVar62 = (int *)*puVar60;
                          local_1c8 = *(uint **)(lVar32 + 0x18);
                        }
                        else {
                          pdVar28 = *(dword **)(pdVar59 + 0x2e);
                          if (pdVar28 == (dword *)0x0) {
                            if (*(uint64_t *)(lVar27 + 0x18) < 0xc0) {
                              pdVar28 = &psVar49[-0xf].maxprot;
                              psVar49 = (segment_command *)pdVar28;
                            }
                            else {
                              pdVar28 = (dword *)0x0;
                            }
                            pdVar41 = (dword *)0x0;
                            *(void*)((int64_t)psVar49 + -8) = 0xf3b96b;
                            pdVar28 = (dword *)FUN_00f3f480(0,pdVar28,0xc0);
                            if (pdVar28 == (dword *)0x0) goto LAB_00f3d1de;
                            *(dword **)(pdVar28 + 0x2c) = pdVar59;
                            (pdVar28 + 0x2e)[0] = 0;
                            (pdVar28 + 0x2e)[1] = 0;
                            if (*(uint64_t *)(lVar27 + 0x18) <
                                (uint64_t)((int64_t)*(int *)(this_ptr + 0x24) << 2)) {
                              puVar46 = (void*)((int64_t)psVar49 + -0x400);
                              psVar49 = (segment_command *)puVar46;
                            }
                            else {
                              puVar46 = (void*)0x0;
                            }
                            pdVar41 = (dword *)0x0;
                            *(void*)((int64_t)psVar49 + -8) = 0xf3b9d1;
                            lVar29 = FUN_00f3f480();
                            *(int64_t *)(pdVar28 + 10) = lVar29;
                            if (lVar29 == 0) goto LAB_00f3d1de;
                            *(dword **)(pdVar59 + 0x2e) = pdVar28;
                          }
                          *pdVar28 = local_194;
                          *(segment_command **)(pdVar28 + 2) = local_1d8;
                          *(void*)(pdVar28 + 6) = *puVar60;
                          pdVar28[8] = *(uint *)(lVar32 + 0x10);
                          pdVar28[9] = local_16c;
                          if (0 < *(int *)(this_ptr + 0x24)) {
                            lVar29 = *(int64_t *)(pdVar28 + 10);
                            pdVar41 = (dword *)0x0;
                            do {
                              *(void*)(lVar29 + (int64_t)pdVar41 * 4) =
                                   *(void*)(uVar57 + (int64_t)pdVar41 * 4);
                              pdVar41 = (dword *)((int64_t)pdVar41 + 1);
                              puVar46 = (void*)(int64_t)*(int *)(this_ptr + 0x24);
                            } while ((int64_t)pdVar41 < (int64_t)puVar46);
                          }
                          *(void*)(pdVar28 + 0x28) = local_48._0_8_;
                          *(void*)(pdVar28 + 0x2a) = local_48._8_8_;
                          *(void*)(pdVar28 + 0x24) = local_58._0_8_;
                          *(void*)(pdVar28 + 0x26) = local_58._8_8_;
                          *(void*)(pdVar28 + 0x20) = local_68._0_8_;
                          *(void*)(pdVar28 + 0x22) = local_68._8_8_;
                          *(void*)(pdVar28 + 0x1c) = local_78._0_8_;
                          *(void*)(pdVar28 + 0x1e) = local_78._8_8_;
                          *(void*)(pdVar28 + 0x18) = local_88._0_8_;
                          *(void*)(pdVar28 + 0x1a) = local_88._8_8_;
                          *(void*)(pdVar28 + 0x14) = local_98._0_8_;
                          *(void*)(pdVar28 + 0x16) = local_98._8_8_;
                          *(void*)(pdVar28 + 0x10) = local_b8._16_8_;
                          *(void*)(pdVar28 + 0x12) = local_b8._24_8_;
                          *(void*)(pdVar28 + 0xc) = local_b8._0_8_;
                          *(void*)(pdVar28 + 0xe) = local_b8._8_8_;
                          puVar48 = *(uint **)(lVar32 + 0x18);
                          if ((puVar48 != (uint *)0x0) &&
                             (pdVar41 = (dword *)(uint64_t)*puVar48, -1 < (int)*puVar48)) {
                            puVar46 = *(void**)(pdVar28 + 10);
                            do {
                              puVar48 = puVar48 + 1;
                              *(uint *)(puVar46 + (int64_t)pdVar41 * 4) = local_194;
                              pdVar41 = (dword *)(uint64_t)*puVar48;
                            } while (-1 < (int)*puVar48);
                          }
                        }
                      }
                    }
                    else if (uVar8 == 0x5f) {
                      bVar36 = true;
                      if (local_16c != 0x5f) {
LAB_00f3b789:
                        if (local_16c < 0x80) {
                          pdVar41 = &section_000004c0.flags;
                          uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                            (uint64_t)local_16c * 4 + 0x3c) & 0x500;
                        }
                        else {
                          psVar49[-1].nsects = 0xf3b8c7;
                          psVar49[-1].flags = 0;
                          uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar41,(ulong)puVar46);
                        }
                        if (bVar36 != (uVar24 != 0)) goto LAB_00f3b8fa;
                      }
                    }
                    else {
                      if (uVar8 < 0x80) {
                        pdVar41 = &section_000004c0.flags;
                        uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + uVar38 * 4 + 0x3c) &
                                 0x500;
                      }
                      else {
                        psVar49[-1].nsects = 0xf3b87d;
                        psVar49[-1].flags = 0;
                        uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar41,(ulong)puVar46);
                      }
                      bVar36 = uVar24 != 0;
                      if (local_16c != 0x5f) goto LAB_00f3b789;
                      if (uVar24 == 0) goto LAB_00f3b8fa;
                    }
                  }
                  else {
                    if (uVar8 != 0x5f) {
                      if (uVar8 < 0x80) {
                        pdVar41 = &section_000004c0.flags;
                        uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + uVar38 * 4 + 0x3c) &
                                 0x500;
                      }
                      else {
                        psVar49[-1].nsects = 0xf3b7cc;
                        psVar49[-1].flags = 0;
                        uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar41,(ulong)puVar46);
                      }
                      if (uVar24 == 0) goto LAB_00f3b5c0;
                    }
                    if ((uint64_t)local_16c != 0x5f) {
                      if (local_16c < 0x80) {
                        pdVar41 = &section_000004c0.flags;
                        uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                          (uint64_t)local_16c * 4 + 0x3c) & 0x500;
                      }
                      else {
                        psVar49[-1].nsects = 0xf3b831;
                        psVar49[-1].flags = 0;
                        uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar41,(ulong)puVar46);
                      }
                      if (uVar24 == 0) {
                        uVar24 = *(uint *)(lVar32 + 0x28);
                        goto joined_r0x00f3b85e;
                      }
                    }
                  }
                }
              }
            }
LAB_00f3b5c0:
            puVar60 = (void*)(lVar32 + 0x40);
            plVar63 = (int64_t *)(lVar32 + 0x40);
            lVar32 = lVar32 + 0x38;
            pdVar59 = pdVar28;
          } while (*plVar63 != 0);
          if (local_1c8 == (uint *)0x0) {
            local_1c8 = (uint *)0x0;
          }
          else {
            uVar8 = *local_1c8;
            while (-1 < (int)uVar8) {
              *(uint *)(uVar57 + (uint64_t)uVar8 * 4) = local_194;
              puVar48 = local_1c8 + 1;
              local_1c8 = local_1c8 + 1;
              uVar8 = *puVar48;
            }
          }
        }
        pmVar58 = (mbstate_t *)(uint64_t)local_194;
        psVar30 = local_1d8;
        uVar8 = local_194;
        local_200 = psVar65;
        if (piVar62 != (int *)0x0) goto LAB_00f3be90;
LAB_00f3ced0:
        pdVar41 = *(dword **)(pdVar28 + 0x2c);
        if (pdVar41 != (dword *)0x0) {
          piVar62 = *(int **)(pdVar28 + 6);
          if (piVar62[10] != 0) {
            pcVar4 = psVar52->segname + (int64_t)(int)pdVar28[8] * 4 + -8;
            pcVar4[0] = '\0';
            pcVar4[1] = '\0';
            pcVar4[2] = '\0';
            pcVar4[3] = '\0';
          }
          uVar8 = *pdVar28;
          psVar30 = *(segment_command **)(pdVar28 + 2);
          local_16c = pdVar28[9];
          uVar43 = *(uint *)(this_ptr + 0x24);
          uVar38 = (uint64_t)uVar43;
          if (0 < (int)uVar43) {
            uVar45 = *(uint64_t *)(pdVar28 + 10);
            if ((uVar43 < 8) || ((uVar57 < uVar45 + uVar38 * 4 && (uVar45 < uVar57 + uVar38 * 4))))
            {
              uVar54 = 0;
            }
            else {
              uVar54 = (uint64_t)(uVar43 & 0xfffffff8);
              uVar33 = (uVar54 - 8 >> 3) + 1;
              uVar42 = (uint64_t)((uint)uVar33 & 3);
              if (uVar54 - 8 < 0x18) {
                lVar32 = 0;
              }
              else {
                lVar29 = -(uVar33 & 0xfffffffffffffffc);
                lVar32 = 0;
                do {
                  puVar60 = (void*)(uVar45 + lVar32 * 4);
                  uVar64 = puVar60[1];
                  puVar6 = (void*)(uVar45 + 0x10 + lVar32 * 4);
                  uVar11 = *puVar6;
                  uVar12 = puVar6[1];
                  puVar6 = (void*)(uVar57 + lVar32 * 4);
                  *puVar6 = *puVar60;
                  puVar6[1] = uVar64;
                  puVar60 = (void*)(uVar57 + 0x10 + lVar32 * 4);
                  *puVar60 = uVar11;
                  puVar60[1] = uVar12;
                  puVar60 = (void*)(uVar45 + 0x20 + lVar32 * 4);
                  uVar64 = puVar60[1];
                  puVar6 = (void*)(uVar45 + 0x30 + lVar32 * 4);
                  uVar11 = *puVar6;
                  uVar12 = puVar6[1];
                  puVar6 = (void*)(uVar57 + 0x20 + lVar32 * 4);
                  *puVar6 = *puVar60;
                  puVar6[1] = uVar64;
                  puVar60 = (void*)(uVar57 + 0x30 + lVar32 * 4);
                  *puVar60 = uVar11;
                  puVar60[1] = uVar12;
                  puVar60 = (void*)(uVar45 + 0x40 + lVar32 * 4);
                  uVar64 = puVar60[1];
                  puVar6 = (void*)(uVar45 + 0x50 + lVar32 * 4);
                  uVar11 = *puVar6;
                  uVar12 = puVar6[1];
                  puVar6 = (void*)(uVar57 + 0x40 + lVar32 * 4);
                  *puVar6 = *puVar60;
                  puVar6[1] = uVar64;
                  puVar60 = (void*)(uVar57 + 0x50 + lVar32 * 4);
                  *puVar60 = uVar11;
                  puVar60[1] = uVar12;
                  puVar60 = (void*)(uVar45 + 0x60 + lVar32 * 4);
                  uVar64 = puVar60[1];
                  puVar6 = (void*)(uVar45 + 0x70 + lVar32 * 4);
                  uVar11 = *puVar6;
                  uVar12 = puVar6[1];
                  puVar6 = (void*)(uVar57 + 0x60 + lVar32 * 4);
                  *puVar6 = *puVar60;
                  puVar6[1] = uVar64;
                  puVar60 = (void*)(uVar57 + 0x70 + lVar32 * 4);
                  *puVar60 = uVar11;
                  puVar60[1] = uVar12;
                  lVar32 = lVar32 + 0x20;
                  lVar29 = lVar29 + 4;
                } while (lVar29 != 0);
              }
              if (uVar42 != 0) {
                lVar29 = uVar45 + lVar32 * 4;
                lVar34 = 0;
                do {
                  puVar6 = (void*)(lVar29 + lVar34);
                  uVar64 = puVar6[1];
                  puVar60 = (void*)(lVar29 + 0x10 + lVar34);
                  uVar11 = *puVar60;
                  uVar12 = puVar60[1];
                  *(void*)(local_238 + lVar34 + lVar32 * 4 + -0x10) = *puVar6;
                  *(void*)((int64_t)(local_238 + lVar34 + lVar32 * 4 + -0x10) + 8) = uVar64;
                  *(void*)(local_238 + lVar34 + lVar32 * 4) = uVar11;
                  *(void*)((int64_t)(local_238 + lVar34 + lVar32 * 4) + 8) = uVar12;
                  lVar34 = lVar34 + 0x20;
                } while (uVar42 << 5 != lVar34);
              }
              if (uVar54 == uVar38) goto LAB_00f3d170;
            }
            uVar33 = ~uVar54;
            uVar42 = uVar38 & 3;
            if ((uVar43 & 3) != 0) {
              do {
                *(void*)(uVar57 + uVar54 * 4) = *(void*)(uVar45 + uVar54 * 4);
                uVar54 = uVar54 + 1;
                uVar42 = uVar42 - 1;
              } while (uVar42 != 0);
            }
            if (2 < uVar33 + uVar38) {
              do {
                *(void*)(uVar57 + uVar54 * 4) = *(void*)(uVar45 + uVar54 * 4);
                *(void*)(uVar57 + 4 + uVar54 * 4) = *(void*)(uVar45 + 4 + uVar54 * 4);
                *(void*)(uVar57 + 8 + uVar54 * 4) = *(void*)(uVar45 + 8 + uVar54 * 4);
                *(void*)(uVar57 + 0xc + uVar54 * 4) =
                     *(void*)(uVar45 + 0xc + uVar54 * 4);
                uVar54 = uVar54 + 4;
              } while (uVar38 != uVar54);
            }
          }
LAB_00f3d170:
          local_48 = *(uint8_t (*) [16])(pdVar28 + 0x28);
          local_58 = *(uint8_t (*) [16])(pdVar28 + 0x24);
          local_68 = *(uint8_t (*) [16])(pdVar28 + 0x20);
          local_78 = *(uint8_t (*) [16])(pdVar28 + 0x1c);
          local_88 = *(uint8_t (*) [16])(pdVar28 + 0x18);
          local_98 = *(uint8_t (*) [16])(pdVar28 + 0x14);
          local_b8._16_16_ = *(uint8_t (*) [16])(pdVar28 + 0x10);
          local_b8._0_16_ = *(uint8_t (*) [16])(pdVar28 + 0xc);
          pdVar28 = pdVar41;
LAB_00f3be90:
          pmVar58 = (mbstate_t *)(uint64_t)uVar8;
          puVar48 = local_1c8;
LAB_00f3bea0:
          local_1c8 = puVar48;
          uVar8 = local_16c;
          uVar43 = (uint)pmVar58;
          if (piVar62 == *(int **)(this_ptr + 0xc)) goto LAB_00f3ce20;
          psVar39 = (segment_command *)(uint64_t)param_2;
          if ((*(int64_t *)(piVar62 + 2) == 0) || ((*(byte *)((int64_t)piVar62 + 0x29) & 1) == 0))
          {
            if ((int)param_2 < 0) {
              if (param_1 == 3) {
                if (iVar22 != 0) goto LAB_00f3ced0;
              }
              else if (local_16c == 0) goto LAB_00f3ced0;
            }
            else if ((int)param_2 <= (int)uVar43) goto LAB_00f3ced0;
            psVar31 = psVar30;
            if (bVar13) {
              pmVar58 = (mbstate_t *)(uint64_t)(uVar43 + 1);
              if (((int)param_2 < 0) || ((int)(uVar43 + 1) < (int)param_2)) {
                local_16c = (uint)(byte)psVar30->cmd;
                psVar30 = (segment_command *)((int64_t)&psVar30->cmd + 1);
                psVar31 = psVar30;
              }
              else {
LAB_00f3bff4:
                local_16c = 0;
              }
            }
            else if (param_1 == 2) {
              pmVar58 = (mbstate_t *)(uint64_t)(uVar43 + local_17c);
              if (psVar30 == (segment_command *)0x0) {
                local_16c = 0;
                psVar30 = (segment_command *)0x0;
              }
              else {
                psVar31 = (segment_command *)(uint64_t)(param_2 - (uVar43 + local_17c));
                if ((int)param_2 < 0) {
                  psVar31 = &segment_command_00000020;
                }
                if ((int)psVar31 < 1) {
                  local_16c = 0;
                  local_17c = 1;
                  psVar39 = (segment_command *)0x0;
                  psVar31 = psVar30;
                }
                else {
                  psVar39 = (segment_command *)local_b8;
                  *(void*)((int64_t)psVar49 + -8) = 0xf3c07a;
                  local_17c = _mbrtowc((wchar_t *)psVar39,(char *)psVar31,sVar55,pmVar58);
                  uVar38 = CONCAT44(extraout_var_00,local_17c);
                  if (0xfffffffffffffffd < uVar38) goto LAB_00f3d232;
                  if ((uVar38 == 0) && (-1 < (int)param_2)) {
                    local_17c = 1;
                    local_16c = 0;
                    psVar30 = (segment_command *)((int64_t)&psVar30->cmd + 1);
                  }
                  else {
                    psVar30 = (segment_command *)(psVar30->segname + (uVar38 - 8));
                  }
                }
              }
            }
            else if (param_1 == 0) {
              pmVar58 = (mbstate_t *)(uint64_t)(uVar43 + 1);
              if ((-1 < (int)param_2) && ((int)param_2 <= (int)(uVar43 + 1))) goto LAB_00f3bff4;
              local_16c = local_200->cmd;
              psVar39 = (segment_command *)&local_200->cmdsize;
              local_200 = psVar39;
            }
            else if (param_1 == 3) {
              pmVar58 = (mbstate_t *)(uint64_t)(uVar43 + local_17c);
              psVar31 = (segment_command *)arg1->vmaddr;
              pcVar9 = *(code **)arg1;
              *(void*)((int64_t)psVar49 + -8) = 0xf3c101;
              iVar22 = (*pcVar9)(psVar39,psVar31);
            }
          }
          else {
            iVar26 = piVar62[0xb];
            *(void*)((int64_t)psVar49 + -8) = 0xf3bf15;
            pwVar40 = this_ptr;
            uVar38 = uVar57;
            FUN_00f33490(this_ptr,0);
            lVar32 = (int64_t)*(int *)(lVar51 + 4 + (int64_t)iVar26 * 8) -
                     (int64_t)*(int *)(lVar51 + (int64_t)iVar26 * 8);
            iVar26 = (int)lVar32;
            pwVar61 = (wchar_t *)(int64_t)iVar26;
            sVar56 = (size_t)uVar38;
            if ((int)param_2 < 0) {
              if (param_1 == 3) {
                qVar10 = arg1->vmaddr;
                pcVar9 = *(code **)(arg1->segname + 8);
                *(void*)((int64_t)psVar49 + -8) = 0xf3c029;
                iVar25 = (*pcVar9)(qVar10,lVar32);
              }
              else if (param_1 == 0) {
                *(void*)((int64_t)psVar49 + -8) = 0xf3c1b5;
                iVar25 = _wcsncmp(pwVar40,pwVar61,sVar56);
              }
              else {
                *(void*)((int64_t)psVar49 + -8) = 0xf3c146;
                iVar25 = _strncmp((char *)pwVar40,(char *)pwVar61,sVar56);
              }
            }
            else {
              if ((int)(param_2 - uVar43) < iVar26) goto LAB_00f3ced0;
              *(void*)((int64_t)psVar49 + -8) = 0xf3bf5d;
              iVar25 = _memcmp(pwVar40,pwVar61,sVar56);
            }
            if (iVar25 != 0) goto LAB_00f3ced0;
            if ((iVar26 == 0) && (*(int *)(psVar52->segname + (int64_t)piVar62[4] * 4 + -8) != 0))
            goto LAB_00f3ced0;
            *(uint *)(psVar52->segname + (int64_t)piVar62[4] * 4 + -8) = (uint)(iVar26 == 0);
            psVar3 = (segment_command *)((int64_t)pwVar61 + (int64_t)(psVar30->segname + -8));
            psVar50 = (segment_command *)((int64_t)&psVar3[-1].flags + 3);
            psVar39 = psVar30;
            psVar31 = psVar52;
            if (bVar13) {
              pmVar58 = (mbstate_t *)(uint64_t)(uVar43 + iVar26);
              if (((int)param_2 < 0) || ((int)(uVar43 + iVar26) < (int)param_2)) {
                local_16c = (uint)(byte)psVar50->cmd;
                psVar30 = psVar3;
              }
              else {
                local_16c = 0;
                psVar30 = psVar50;
              }
            }
            else {
              uVar24 = (iVar26 + uVar43) - 1;
              if (param_1 == 2) {
                uVar24 = uVar24 + local_17c;
                if (psVar30 == (segment_command *)0x0) {
                  local_16c = 0;
                  pmVar58 = (mbstate_t *)(uint64_t)uVar24;
                  psVar30 = (segment_command *)0x0;
                  goto LAB_00f3c410;
                }
                psVar30 = (segment_command *)0x0;
                psVar31 = (segment_command *)(uint64_t)(param_2 - uVar24);
                if ((int)param_2 < 0) {
                  psVar31 = &segment_command_00000020;
                }
                if ((int)psVar31 < 1) {
                  local_16c = 0;
                  local_17c = 1;
                  psVar31 = psVar52;
                  goto LAB_00f3c409;
                }
                psVar30 = (segment_command *)local_b8;
                *(void*)((int64_t)psVar49 + -8) = 0xf3c301;
                local_17c = _mbrtowc((wchar_t *)psVar30,(char *)psVar31,sVar55,pmVar58);
                uVar38 = CONCAT44(extraout_var_01,local_17c);
                if (0xfffffffffffffffd < uVar38) goto LAB_00f3d232;
                if ((uVar38 == 0) && (-1 < (int)param_2)) {
                  local_17c = 1;
                  local_16c = 0;
                  psVar50 = psVar3;
                }
                else {
                  psVar50 = (segment_command *)(psVar50->segname + (uVar38 - 8));
                }
              }
              else {
                if (param_1 == 0) {
                  pmVar58 = (mbstate_t *)(uint64_t)(uVar43 + iVar26);
                  if (((int)param_2 < 0) || ((int)(uVar43 + iVar26) < (int)param_2)) {
                    local_16c = local_200->cmd;
                    psVar39 = (segment_command *)&local_200->cmdsize;
                    psVar30 = psVar50;
                    local_200 = (segment_command *)&local_200->cmdsize;
                  }
                  else {
                    local_16c = 0;
                    psVar30 = psVar50;
                  }
                  goto LAB_00f3c410;
                }
                if (param_1 == 3) {
                  uVar24 = uVar24 + local_17c;
                  psVar31 = (segment_command *)arg1->vmaddr;
                  pcVar9 = *(code **)arg1;
                  *(void*)((int64_t)psVar49 + -8) = 0xf3c384;
                  iVar22 = (*pcVar9)(psVar30,psVar31);
                }
              }
LAB_00f3c409:
              pmVar58 = (mbstate_t *)(uint64_t)uVar24;
              psVar39 = psVar30;
              psVar30 = psVar50;
            }
          }
LAB_00f3c410:
          plVar63 = (int64_t *)(piVar62 + 2);
          uVar43 = (uint)pmVar58;
          if (*plVar63 == 0) {
            piVar53 = (int *)0x0;
          }
          else {
            bVar36 = (int)uVar43 < 1 && ((uint64_t)param_4 & 1) == 0;
            pdVar41 = (dword *)CONCAT71((int7)((uint64_t)psVar39 >> 8),bVar36);
            bVar35 = uVar8 == 10 & (byte)local_230;
            puVar46 = (void*)CONCAT71((int7)((uint64_t)psVar31 >> 8),bVar35);
            uVar38 = (uint64_t)uVar8;
            piVar53 = (int *)0x0;
            pdVar59 = pdVar28;
            do {
              pdVar28 = pdVar59;
              if ((*piVar62 <= (int)uVar8) && ((int)uVar8 <= piVar62[1])) {
                uVar24 = piVar62[10];
                if (uVar24 == 0) {
LAB_00f3cc06:
                  if (piVar53 == (int *)0x0) {
                    piVar53 = (int *)*plVar63;
                    local_1c8 = *(uint **)(piVar62 + 6);
                  }
                  else {
                    pdVar28 = *(dword **)(pdVar59 + 0x2e);
                    if (pdVar28 == (dword *)0x0) {
                      if (*(uint64_t *)(lVar27 + 0x18) < 0xc0) {
                        puVar46 = (void*)((int64_t)psVar49 + -0x400);
                        psVar49 = (segment_command *)puVar46;
                      }
                      else {
                        puVar46 = (void*)0x0;
                      }
                      *(void*)((int64_t)psVar49 + -8) = 0xf3cc74;
                      pdVar28 = (dword *)FUN_00f3f480(0,puVar46,0xc0);
                      pdVar41 = pdVar59;
                      if (pdVar28 == (dword *)0x0) goto LAB_00f3d1de;
                      *(dword **)(pdVar28 + 0x2c) = pdVar59;
                      (pdVar28 + 0x2e)[0] = 0;
                      (pdVar28 + 0x2e)[1] = 0;
                      if (*(uint64_t *)(lVar27 + 0x18) <
                          (uint64_t)((int64_t)*(int *)(this_ptr + 0x24) << 2)) {
                        puVar46 = (void*)((int64_t)psVar49 + -0x400);
                        psVar49 = (segment_command *)puVar46;
                      }
                      else {
                        puVar46 = (void*)0x0;
                      }
                      pdVar41 = (dword *)0x0;
                      *(void*)((int64_t)psVar49 + -8) = 0xf3ccde;
                      lVar32 = FUN_00f3f480();
                      *(int64_t *)(pdVar28 + 10) = lVar32;
                      if (lVar32 == 0) goto LAB_00f3d1de;
                      *(dword **)(pdVar59 + 0x2e) = pdVar28;
                    }
                    *pdVar28 = uVar43;
                    *(segment_command **)(pdVar28 + 2) = psVar30;
                    *(int64_t *)(pdVar28 + 6) = *plVar63;
                    pdVar28[8] = piVar62[4];
                    pdVar28[9] = local_16c;
                    if (0 < *(int *)(this_ptr + 0x24)) {
                      lVar32 = *(int64_t *)(pdVar28 + 10);
                      pdVar41 = (dword *)0x0;
                      do {
                        *(void*)(lVar32 + (int64_t)pdVar41 * 4) =
                             *(void*)(uVar57 + (int64_t)pdVar41 * 4);
                        pdVar41 = (dword *)((int64_t)pdVar41 + 1);
                        puVar46 = (void*)(int64_t)*(int *)(this_ptr + 0x24);
                      } while ((int64_t)pdVar41 < (int64_t)puVar46);
                    }
                    *(void*)(pdVar28 + 0x28) = local_48._0_8_;
                    *(void*)(pdVar28 + 0x2a) = local_48._8_8_;
                    *(void*)(pdVar28 + 0x24) = local_58._0_8_;
                    *(void*)(pdVar28 + 0x26) = local_58._8_8_;
                    *(void*)(pdVar28 + 0x20) = local_68._0_8_;
                    *(void*)(pdVar28 + 0x22) = local_68._8_8_;
                    *(void*)(pdVar28 + 0x1c) = local_78._0_8_;
                    *(void*)(pdVar28 + 0x1e) = local_78._8_8_;
                    *(void*)(pdVar28 + 0x18) = local_88._0_8_;
                    *(void*)(pdVar28 + 0x1a) = local_88._8_8_;
                    *(void*)(pdVar28 + 0x14) = local_98._0_8_;
                    *(void*)(pdVar28 + 0x16) = local_98._8_8_;
                    *(void*)(pdVar28 + 0x10) = local_b8._16_8_;
                    *(void*)(pdVar28 + 0x12) = local_b8._24_8_;
                    *(void*)(pdVar28 + 0xc) = local_b8._0_8_;
                    *(void*)(pdVar28 + 0xe) = local_b8._8_8_;
                    puVar48 = *(uint **)(piVar62 + 6);
                    if ((puVar48 != (uint *)0x0) &&
                       (pdVar41 = (dword *)(uint64_t)*puVar48, -1 < (int)*puVar48)) {
                      puVar46 = *(void**)(pdVar28 + 10);
                      do {
                        puVar48 = puVar48 + 1;
                        *(uint *)(puVar46 + (int64_t)pdVar41 * 4) = uVar43;
                        pdVar41 = (dword *)(uint64_t)*puVar48;
                      } while (-1 < (int)*puVar48);
                    }
                  }
                }
                else {
                  bVar37 = ((uVar24 & 1) == 0 || bVar36) | bVar35;
                  pdVar41 = (dword *)CONCAT71((int7)((uint64_t)pdVar41 >> 8),bVar37);
                  if (bVar37 == 1) {
                    if ((uVar24 & 2) != 0) {
                      pdVar41 = (dword *)(uint64_t)local_16c;
                      uVar44 = (uint)param_4 & 2 | local_16c;
                      puVar46 = (void*)(uint64_t)uVar44;
                      if ((uVar44 != 0) && ((local_16c != 10 || (uVar23 == 0)))) goto LAB_00f3c4d0;
                    }
                    if (((uVar24 & 0x10) == 0) || ((int)uVar43 < 1)) goto LAB_00f3c61b;
                    if (uVar8 != 0x5f) {
                      if (uVar8 < 0x80) {
                        pdVar41 = &section_000004c0.flags;
                        uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + uVar38 * 4 + 0x3c) &
                                 0x500;
                      }
                      else {
                        *(void*)((int64_t)psVar49 + -8) = 0xf3c58d;
                        uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar41,(ulong)puVar46);
                      }
                      if (uVar24 == 0) {
                        if ((uint64_t)local_16c != 0x5f) {
                          if (local_16c < 0x80) {
                            pdVar41 = &section_000004c0.flags;
                            uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                              (uint64_t)local_16c * 4 + 0x3c) & 0x500;
                          }
                          else {
                            *(void*)((int64_t)psVar49 + -8) = 0xf3c5f4;
                            uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar41,(ulong)puVar46);
                          }
                          if (uVar24 == 0) goto LAB_00f3c4d0;
                        }
LAB_00f3c61b:
                        uVar24 = piVar62[10];
                        if ((uVar24 & 0x20) == 0) {
joined_r0x00f3c764:
                          if ((((uVar24 & 0x40) == 0) || (uVar43 == 0)) || (local_16c == 0)) {
LAB_00f3c81b:
                            if (-1 < (char)piVar62[10]) {
LAB_00f3c822:
                              uVar24 = piVar62[10] & 4;
                              if ((uVar24 != 0) && ((uVar7 & 2) == 0)) {
                                if (uVar8 < 0x80) {
                                  uVar24 = piVar62[0xb] &
                                           *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                    uVar38 * 4 + 0x3c);
                                  pdVar41 = (dword *)PTR___DefaultRuneLocale_0249c238;
                                }
                                else {
                                  *(void*)((int64_t)psVar49 + -8) = 0xf3c8b1;
                                  uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar41,(ulong)puVar46);
                                }
                                if (uVar24 == 0) goto LAB_00f3c4d0;
                                uVar24 = piVar62[10] & 4;
                              }
                              if ((uVar24 != 0) && ((uVar7 & 2) != 0)) {
                                *(void*)((int64_t)psVar49 + -8) = 0xf3c905;
                                uVar24 = ___tolower((__darwin_ct_rune_t)pdVar41);
                                if (uVar24 < 0x80) {
                                  pdVar41 = (dword *)(uint64_t)uVar24;
                                  uVar24 = piVar62[0xb] &
                                           *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                    (int64_t)pdVar41 * 4 + 0x3c);
                                  puVar46 = PTR___DefaultRuneLocale_0249c238;
                                }
                                else {
                                  *(void*)((int64_t)psVar49 + -8) = 0xf3c927;
                                  uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar41,(ulong)puVar46);
                                }
                                if (uVar24 == 0) {
                                  *(void*)((int64_t)psVar49 + -8) = 0xf3c95d;
                                  uVar24 = ___toupper((__darwin_ct_rune_t)pdVar41);
                                  if (uVar24 < 0x80) {
                                    pdVar41 = (dword *)(uint64_t)uVar24;
                                    uVar24 = piVar62[0xb] &
                                             *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                      (int64_t)pdVar41 * 4 + 0x3c);
                                    puVar46 = PTR___DefaultRuneLocale_0249c238;
                                  }
                                  else {
                                    *(void*)((int64_t)psVar49 + -8) = 0xf3c9d9;
                                    uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar41,(ulong)puVar46)
                                    ;
                                  }
                                  if (uVar24 == 0) goto LAB_00f3c4d0;
                                }
                              }
                              if ((*(byte *)(piVar62 + 10) & 8) != 0) {
                                puVar48 = *(uint **)(piVar62 + 0xc);
                                uVar24 = *puVar48;
                                if (uVar24 != 0) {
                                  if ((uVar7 & 2) == 0) {
                                    if (uVar8 < 0x80) {
                                      pdVar41 = (dword *)(uint64_t)
                                                         *(uint *)(PTR___DefaultRuneLocale_0249c238
                                                                  + uVar38 * 4 + 0x3c);
                                      do {
                                        puVar48 = puVar48 + 1;
                                        if ((*(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                      uVar38 * 4 + 0x3c) & uVar24) != 0)
                                        goto LAB_00f3c4d0;
                                        uVar24 = *puVar48;
                                      } while (uVar24 != 0);
                                    }
                                    else {
                                      do {
                                        puVar48 = puVar48 + 1;
                                        *(void*)((int64_t)psVar49 + -8) = 0xf3cbca;
                                        iVar26 = ___maskrune((__darwin_ct_rune_t)pdVar41,
                                                             (ulong)puVar46);
                                        if (iVar26 != 0) goto LAB_00f3c4d0;
                                      } while (*puVar48 != 0);
                                    }
                                  }
                                  else {
                                    do {
                                      *(void*)((int64_t)psVar49 + -8) = 0xf3ca78;
                                      uVar24 = ___toupper((__darwin_ct_rune_t)pdVar41);
                                      if (uVar24 < 0x80) {
                                        pdVar41 = (dword *)(uint64_t)uVar24;
                                        uVar24 = *puVar48 &
                                                 *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                          (int64_t)pdVar41 * 4 + 0x3c);
                                        puVar46 = PTR___DefaultRuneLocale_0249c238;
                                      }
                                      else {
                                        *(void*)((int64_t)psVar49 + -8) = 0xf3caa8;
                                        uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar41,
                                                             (ulong)puVar46);
                                      }
                                      if (uVar24 != 0) goto LAB_00f3c4d0;
                                      *(void*)((int64_t)psVar49 + -8) = 0xf3cab8;
                                      uVar24 = ___tolower((__darwin_ct_rune_t)pdVar41);
                                      if (uVar24 < 0x80) {
                                        pdVar41 = (dword *)(uint64_t)uVar24;
                                        uVar24 = *puVar48 &
                                                 *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                          (int64_t)pdVar41 * 4 + 0x3c);
                                        puVar46 = PTR___DefaultRuneLocale_0249c238;
                                      }
                                      else {
                                        *(void*)((int64_t)psVar49 + -8) = 0xf3cad8;
                                        uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar41,
                                                             (ulong)puVar46);
                                      }
                                      if (uVar24 != 0) goto LAB_00f3c4d0;
                                      puVar2 = puVar48 + 1;
                                      puVar48 = puVar48 + 1;
                                    } while (*puVar2 != 0);
                                  }
                                }
                              }
                              goto LAB_00f3cc06;
                            }
                            if ((uVar43 != 0) && (local_16c != 0)) {
                              if (uVar8 == 0x5f) {
                                bVar47 = true;
                                if (local_16c == 0x5f) goto LAB_00f3c822;
                              }
                              else {
                                if (uVar8 < 0x80) {
                                  pdVar41 = &section_000004c0.flags;
                                  uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                    uVar38 * 4 + 0x3c) & 0x500;
                                }
                                else {
                                  *(void*)((int64_t)psVar49 + -8) = 0xf3cb2d;
                                  uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar41,(ulong)puVar46);
                                }
                                bVar47 = uVar24 != 0;
                                if (local_16c == 0x5f) {
                                  if (uVar24 != 0) goto LAB_00f3c822;
                                  goto LAB_00f3c4d0;
                                }
                              }
                              if (local_16c < 0x80) {
                                pdVar41 = &section_000004c0.flags;
                                uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                  (uint64_t)local_16c * 4 + 0x3c) & 0x500;
                              }
                              else {
                                *(void*)((int64_t)psVar49 + -8) = 0xf3cb7e;
                                uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar41,(ulong)puVar46);
                              }
                              if (!(bool)(bVar47 ^ uVar24 != 0)) goto LAB_00f3c822;
                            }
                          }
                          else if (uVar8 == 0x5f) {
                            bVar47 = true;
                            if (local_16c != 0x5f) {
LAB_00f3c7b2:
                              if (local_16c < 0x80) {
                                pdVar41 = &section_000004c0.flags;
                                uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                  (uint64_t)local_16c * 4 + 0x3c) & 0x500;
                              }
                              else {
                                *(void*)((int64_t)psVar49 + -8) = 0xf3c7eb;
                                uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar41,(ulong)puVar46);
                              }
                              if (bVar47 != (uVar24 != 0)) goto LAB_00f3c81b;
                            }
                          }
                          else {
                            if (uVar8 < 0x80) {
                              pdVar41 = &section_000004c0.flags;
                              uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                uVar38 * 4 + 0x3c) & 0x500;
                            }
                            else {
                              *(void*)((int64_t)psVar49 + -8) = 0xf3c77f;
                              uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar41,(ulong)puVar46);
                            }
                            bVar47 = uVar24 != 0;
                            if (local_16c != 0x5f) goto LAB_00f3c7b2;
                            if (uVar24 == 0) goto LAB_00f3c81b;
                          }
                        }
                        else {
                          if (uVar8 != 0x5f) {
                            if (uVar8 < 0x80) {
                              pdVar41 = &section_000004c0.flags;
                              uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                uVar38 * 4 + 0x3c) & 0x500;
                            }
                            else {
                              *(void*)((int64_t)psVar49 + -8) = 0xf3c6c4;
                              uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar41,(ulong)puVar46);
                            }
                            if (uVar24 == 0) goto LAB_00f3c4d0;
                          }
                          if ((uint64_t)local_16c != 0x5f) {
                            if (local_16c < 0x80) {
                              pdVar41 = &section_000004c0.flags;
                              uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                (uint64_t)local_16c * 4 + 0x3c) & 0x500;
                            }
                            else {
                              *(void*)((int64_t)psVar49 + -8) = 0xf3c730;
                              uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar41,(ulong)puVar46);
                            }
                            if (uVar24 == 0) {
                              uVar24 = piVar62[10];
                              goto joined_r0x00f3c764;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_00f3c4d0:
              plVar63 = (int64_t *)(piVar62 + 0x10);
              plVar1 = (int64_t *)(piVar62 + 0x10);
              piVar62 = piVar62 + 0xe;
              pdVar59 = pdVar28;
            } while (*plVar1 != 0);
          }
          if (piVar53 == (int *)0x0) goto LAB_00f3ced0;
          puVar48 = (uint *)0x0;
          piVar62 = piVar53;
          if (local_1c8 != (uint *)0x0) {
            uVar8 = *local_1c8;
            while (puVar48 = local_1c8, -1 < (int)uVar8) {
              *(uint *)(uVar57 + (uint64_t)uVar8 * 4) = uVar43;
              puVar48 = local_1c8 + 1;
              local_1c8 = local_1c8 + 1;
              uVar8 = *puVar48;
            }
          }
          goto LAB_00f3bea0;
        }
        if (-1 < (int)local_1bc) goto LAB_00f3d21f;
        if ((int)param_2 < 0) {
          if (local_16c == 0) goto LAB_00f3d21f;
        }
        else if ((int)param_2 <= (int)pmVar58) goto LAB_00f3d21f;
        local_48 = auVar21;
        local_58 = auVar20;
        local_68 = auVar19;
        local_78 = auVar18;
        local_88 = auVar17;
        local_98 = auVar16;
        local_b8._16_16_ = auVar15;
        local_b8._0_16_ = auVar14;
        uVar23 = *(uint *)(this_ptr + 0x24);
        uVar38 = (uint64_t)uVar23;
        pmVar58 = (mbstate_t *)0x0;
        uVar8 = local_22c;
        lVar32 = local_240;
      } while( true );
    }
LAB_00f3d1fb:
    local_1bc = 0xc;
  }
LAB_00f3d200:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        *(void**)((int64_t)psVar49 + -8) = &UNK_00f3d23e;
    ___stack_chk_fail();
  }
  return local_1bc;
LAB_00f3ce20:
  if ((int)local_1bc < (int)uVar43) {
LAB_00f3ce30:
    local_1bc = uVar43;
    if ((local_240 != 0) && (0 < *(int *)(this_ptr + 0x24))) {
      lVar32 = 0;
      do {
        *(void*)(local_240 + lVar32 * 4) = *(void*)(uVar57 + lVar32 * 4);
        lVar32 = lVar32 + 1;
      } while (lVar32 < *(int *)(this_ptr + 0x24));
    }
  }
  else if (((local_1bc == uVar43) && (local_240 != 0)) && (0 < (int)*(uint *)(this_ptr + 0x24))) {
    uVar38 = 0;
    do {
      iVar26 = *(int *)(uVar57 + uVar38 * 4);
      iVar25 = *(int *)(local_240 + uVar38 * 4);
      if (*(int *)(*(int64_t *)(this_ptr + 0x1c) + uVar38 * 4) == 0) {
        if (iVar26 < iVar25) goto LAB_00f3ce30;
        if (iVar25 < iVar26) break;
      }
      else {
        if (iVar25 < iVar26) goto LAB_00f3ce30;
        if (iVar26 < iVar25) break;
      }
      uVar38 = uVar38 + 1;
    } while (*(uint *)(this_ptr + 0x24) != uVar38);
  }
  goto LAB_00f3ced0;
LAB_00f3d1de:
  *(void*)((int64_t)psVar49 + -8) = 0xf3d1e3;
  _free(pdVar41);
  *(void*)((int64_t)psVar49 + -8) = 0xf3d1ef;
  _free(pdVar41);
  *(void*)((int64_t)psVar49 + -8) = 0xf3d1fb;
  _free(pdVar41);
  goto LAB_00f3d1fb;
LAB_00f3d21f:
  *local_res8 = local_1bc;
  local_1bc = local_1bc >> 0x1f;
  goto LAB_00f3d200;
}

