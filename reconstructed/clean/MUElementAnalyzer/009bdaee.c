// Function: FUN_009bdaee
// Address: 009bdaee
// Size: 4201 bytes
// Class: MUElementAnalyzer
// String references:
//   ", "
//   ": "
//   "Unknown"
//   "TException"
//   "::"
//   "Error processing the command line because multiple occurances of the same option was provided."
//   "Unknown exception!"
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


void FUN_009bdaee(char *param_1,uint64_t param_2,ulong param_3)

{
  uint uVar1;
  byte *pbVar2;
  int64_t *plVar3;
  void*puVar4;
  byte bVar5;
  uint8_t uVar6;
  uint8_t uVar7;
  int iVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int iVar17;
  void*puVar18;
  int64_t lVar19;
  int64_t *plVar20;
  int64_t lVar21;
  void*puVar22;
  void*puVar23;
  uint64_t *puVar24;
  void*puVar25;
  byte *pbVar26;
  ulong uVar27;
  char *pcVar28;
  char *pcVar29;
  string *psVar30;
  void *pvVar31;
  byte *pbVar32;
  char *pcVar33;
  int64_t *arg1;
  char *pcVar34;
  int64_t *this_ptr;
  bool bVar35;
  byte local_3e8;
  char cStackY_3e7;
  undefined6 uStackY_3e6;
  void *local_3e0;
  ulong in_stack_fffffffffffffc28;
  uint32_t uStack_3d4;
  ulong in_stack_fffffffffffffc30;
  uint64_t local_390;
  uint64_t local_388;
  uint64_t local_380;
  uint64_t local_368;
  uint64_t local_360;
  uint64_t local_348;
  uint64_t local_340;
  uint64_t local_338;
  uint64_t local_328;
  uint64_t local_320;
  uint64_t local_318;
  uint64_t local_308;
  uint64_t local_300;
  uint64_t local_2f8;
  uint64_t local_2f0;
  uint64_t local_2e8;
  uint64_t local_2d0;
  uint64_t local_2c8;
  uint64_t local_2b0;
  uint64_t local_2a8;
  uint64_t local_2a0;
  uint64_t local_290;
  uint64_t local_288;
  uint64_t local_280;
  uint64_t local_270;
  uint64_t local_268;
  uint64_t local_260;
  uint64_t local_250;
  uint64_t local_248;
  uint64_t local_240;
  uint64_t local_230;
  string *local_228;
  uint64_t local_220;
  uint64_t local_210;
  uint64_t local_208;
  uint64_t local_200;
  uint64_t local_1f8;
  uint64_t local_1f0;
  char *local_1e8;
  byte local_1d8;
  byte local_128;
  ulong local_120;
  uint64_t local_108;
  uint64_t uStack_100;
  char *local_f8;
  uint64_t local_e8;
  char *pcStack_e0;
  void*local_d8;
  uint64_t local_d0;
  void*local_c8;
  uint64_t local_c0;
  uint16_t uStack_aa;
  undefined6 local_a8;
  uint16_t local_92;
  undefined6 uStack_90;
  byte local_88;
  uint16_t uStack_82;
  uint16_t uStack_80;
  uint32_t uStack_7e;
  uint64_t local_68;
  uint64_t uStack_60;
  uint64_t local_58;
  void*local_50;
  void*local_48;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  *(void*)(this_ptr + 1) = 0xc;
  pbVar26 = (byte *)(this_ptr + 2);
  if ((*(byte *)(this_ptr + 2) & 1) == 0) {
    pbVar26[0] = 0;
    pbVar26[1] = 0;
  }
  else {
    *(void*)this_ptr[4] = 0;
    this_ptr[3] = 0;
  }
  pbVar2 = (byte *)(this_ptr + 5);
  if ((*(byte *)(this_ptr + 5) & 1) == 0) {
    pbVar2[0] = 0;
    pbVar2[1] = 0;
  }
  else {
    *(void*)this_ptr[7] = 0;
    this_ptr[6] = 0;
  }
  plVar20 = (int64_t *)this_ptr[10];
  this_ptr[9] = 0;
  this_ptr[10] = 0;
  if (plVar20 != (int64_t *)0x0) {
    LOCK();
    plVar3 = plVar20 + 1;
    lVar19 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plVar20 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar20 = (int64_t *)this_ptr[0xc];
  this_ptr[0xb] = 0;
  this_ptr[0xc] = 0;
  if (plVar20 != (int64_t *)0x0) {
    LOCK();
    plVar3 = plVar20 + 1;
    lVar19 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plVar20 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (arg1 == (int64_t *)0x0) {
    std::string::assign(param_1);
LAB_009bdcc2:
    uVar1 = (int)this_ptr[1] - 3;
    pcVar28 = (char *)(uint64_t)uVar1;
    pcVar29 = pcVar28;
    if (uVar1 < 10) {
      pcVar29 = (char *)((int64_t)&switchD_009bdce0::switchdataD_009bee5c +
                        (int64_t)(int)(&switchD_009bdce0::switchdataD_009bee5c)[(int64_t)pcVar28])
      ;
      switch(pcVar28) {
      case (char *)0x0:
        if (arg1 == (int64_t *)0x0) break;
        goto LAB_009bddb2;
      case (char *)0x1:
switchD_009bdce0_caseD_4:
        FUN_009bee84();
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        if (arg1 != (int64_t *)0x0) {
          (**(code **)(*arg1 + 0x10))();
          std::string::assign(pcVar29);
        }
        FUN_009bee84();
        if ((local_3e8 & 1) == 0) {
          local_3e0._0_4_ = (ulong)(local_3e8 >> 1);
          pcVar29 = &cStackY_3e7;
        }
        else {
          pcVar29 = (char *)CONCAT44(uStack_3d4,in_stack_fffffffffffffc28);
        }
        puVar24 = (uint64_t *)std::string::insert((ulong)local_3e0,pcVar29,param_3);
        local_c0 = puVar24[2];
        local_d0 = *puVar24;
        local_c8 = (void*)puVar24[1];
        *puVar24 = 0;
        puVar24[1] = 0;
        puVar24[2] = 0;
        if ((local_68 & 1) == 0) {
          uVar27 = (ulong)((byte)local_68 >> 1);
        }
        else {
          uVar27 = (ulong)uStack_60;
        }
        puVar22 = (void*)std::string::append((char *)0x0,uVar27);
        uVar6 = *(void*)puVar22;
        uVar7 = *(void*)((int64_t)puVar22 + 1);
        uStack_80 = (uint16_t)((uint64_t)puVar22[1] >> 0x10);
        uStack_7e = (uint32_t)((uint64_t)puVar22[1] >> 0x20);
        uVar16 = *(void*)((int64_t)puVar22 + 2);
        uStack_82 = (uint16_t)((uint64_t)uVar16 >> 0x30);
        lVar19 = puVar22[2];
        *puVar22 = 0;
        puVar22[1] = 0;
        puVar22[2] = 0;
        if ((*pbVar2 & 1) != 0) {
          operator_delete((void *)0x0);
        }
        *(void*)(this_ptr + 5) = uVar6;
        *(void*)((int64_t)this_ptr + 0x29) = uVar7;
        pvVar31 = (void *)CONCAT44(uStack_7e,CONCAT22(uStack_80,uStack_82));
        *(void*)((int64_t)this_ptr + 0x2a) = uVar16;
        this_ptr[6] = (int64_t)pvVar31;
        this_ptr[7] = lVar19;
        if ((local_d0 & 1) != 0) {
          operator_delete(pvVar31);
        }
        if ((local_108 & 1) != 0) {
          operator_delete(pvVar31);
        }
        if ((local_68 & 1) != 0) {
          operator_delete(pvVar31);
        }
        if ((local_3e8 & 1) == 0) break;
        goto LAB_009bead4;
      case (char *)0x2:
        if (arg1 == (int64_t *)0x0) break;
LAB_009be189:
        pvVar31 = (void *)0x0;
        lVar19 = ___dynamic_cast(0,&PTR_vtable_025221e8);
        if (lVar19 != 0) {
          FUN_009bef98();
          if ((*pbVar2 & 1) != 0) {
            operator_delete(pvVar31);
          }
          this_ptr[7] = CONCAT44(uStack_3d4,in_stack_fffffffffffffc28);
          this_ptr[6] = (int64_t)local_3e0;
          *(uint64_t *)pbVar2 = CONCAT62(uStackY_3e6,CONCAT11(cStackY_3e7,local_3e8));
        }
        break;
      default:
        goto switchD_009bdce0_caseD_6;
      case "":
        std::string::assign(pcVar29);
        break;
      case "":
        std::string::assign(pcVar29);
      }
      goto LAB_009be1f7;
    }
switchD_009bdce0_caseD_6:
    if (arg1 == (int64_t *)0x0) goto LAB_009be1f7;
  }
  else {
    FUN_009bee84();
    FUN_009cd29e();
    if ((*pbVar26 & 1) != 0) {
      operator_delete(param_1);
    }
    this_ptr[4] = CONCAT44(uStack_3d4,in_stack_fffffffffffffc28);
    this_ptr[3] = (int64_t)local_3e0;
    *(uint64_t *)pbVar26 = CONCAT62(uStackY_3e6,CONCAT11(cStackY_3e7,local_3e8));
    local_3e8 = 0;
    cStackY_3e7 = '\0';
    if ((local_68 & 1) != 0) {
      operator_delete(local_3e0);
    }
    lVar19 = ___dynamic_cast(0,&PTR_vtable_025221b0);
    pcVar29 = (char *)((int64_t)&MACH_HEADER.magic + 1);
    if (lVar19 == 0) {
      plVar20 = (int64_t *)___dynamic_cast(0,&PTR_vtable_02522928);
      if (plVar20 != (int64_t *)0x0) {
        *(void*)(this_ptr + 1) = 2;
        lVar19 = *plVar20;
        lVar21 = (**(code **)(lVar19 + 0x18))();
        puVar22 = operator_new((ulong)lVar19);
        puVar22[2] = 0;
        puVar22[1] = 0;
        *puVar22 = &g_025224e8;
        puVar22[3] = lVar21;
        this_ptr[9] = lVar21;
        plVar20 = (int64_t *)this_ptr[10];
        this_ptr[10] = (int64_t)puVar22;
        if (plVar20 != (int64_t *)0x0) {
          LOCK();
          plVar3 = plVar20 + 1;
          lVar19 = *plVar3;
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (lVar19 == 0) {
            (**(code **)(*plVar20 + 0x10))();
            std::__shared_weak_count::__release_weak();
          }
        }
        goto LAB_009bdcc2;
      }
      lVar19 = ___dynamic_cast(0,&PTR_vtable_0251b538);
      if (lVar19 == 0) {
        pcVar29 = (char *)0x0;
        lVar19 = ___dynamic_cast(0,&PTR_vtable_02517210);
        if (lVar19 == 0) {
          lVar19 = ___dynamic_cast(0,&PTR_vtable_025221e8);
          if (lVar19 == 0) {
            lVar19 = ___dynamic_cast(0,&PTR_vtable_0252b170);
            pcVar29 = (char *)((int64_t)&MACH_HEADER.cputype + 2);
            if (lVar19 == 0) {
              lVar19 = ___dynamic_cast(0,&PTR_vtable_0251e010);
              pcVar29 = (char *)((int64_t)&MACH_HEADER.cputype + 3);
              if (lVar19 == 0) {
                lVar19 = ___dynamic_cast(0,PTR_typeinfo_024a9810);
                pcVar29 = (char *)(uint64_t)(lVar19 == 0 | 10);
              }
            }
            goto LAB_009bdc78;
          }
          *(void*)(this_ptr + 1) = 5;
          goto LAB_009be189;
        }
        *(void*)(this_ptr + 1) = 4;
        goto switchD_009bdce0_caseD_4;
      }
      *(void*)(this_ptr + 1) = 3;
LAB_009bddb2:
      uVar27 = 0;
      lVar19 = ___dynamic_cast(0,&PTR_vtable_0251b538);
      if (lVar19 == 0) goto LAB_009be1f7;
      FUN_009bf31a();
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = (char *)0x0;
      local_88 = 0;
      uStack_80 = 0;
      uStack_7e = 0;
      if (*local_1e8 != '\0') {
        puVar22 = operator_new(uVar27);
        puVar22[1] = &g_025222d8;
        puVar22[2] = local_390;
        puVar22[3] = local_388;
        *puVar22 = &g_02522348;
        puVar22[4] = local_380;
        puVar22[6] = &g_025222d8;
        puVar22[7] = local_368;
        puVar22[8] = local_360;
        puVar22[5] = &g_02522388;
        puVar22[10] = &g_025222d8;
        puVar22[0xb] = local_348;
        puVar22[0xc] = local_340;
        puVar22[9] = &g_025223c8;
        puVar22[0xd] = local_338;
        puVar22[0xe] = &g_02522408;
        puVar22[0xf] = local_328;
        puVar22[0x10] = local_320;
        puVar22[0x11] = local_318;
        puVar22[0x12] = &g_02522408;
        puVar22[0x13] = local_308;
        puVar22[0x14] = local_300;
        puVar22[0x15] = local_2f8;
        puVar22[0x16] = local_2f0;
        puVar22[0x17] = local_2e8;
        puVar22[0x19] = &g_025222d8;
        puVar22[0x1a] = local_2d0;
        puVar22[0x1b] = local_2c8;
        puVar22[0x18] = &g_02522438;
        puVar22[0x1d] = &g_025222d8;
        puVar22[0x1e] = local_2b0;
        puVar22[0x1f] = local_2a8;
        puVar22[0x1c] = &g_02522478;
        puVar22[0x20] = local_2a0;
        puVar22[0x21] = &g_02522408;
        puVar22[0x22] = local_290;
        puVar22[0x23] = local_288;
        puVar22[0x24] = local_280;
        puVar22[0x25] = &g_025224b8;
        puVar22[0x26] = local_270;
        puVar22[0x27] = local_268;
        puVar22[0x28] = local_260;
        puVar22[0x29] = &g_02522408;
        puVar22[0x2a] = local_250;
        puVar22[0x2b] = local_248;
        puVar22[0x2c] = local_240;
        puVar22[0x2d] = &g_02522408;
        puVar22[0x2e] = local_230;
        puVar22[0x2f] = local_228;
        puVar22[0x30] = local_220;
        puVar22[0x31] = &g_02522408;
        puVar22[0x34] = local_200;
        puVar22[0x33] = local_208;
        puVar22[0x32] = local_210;
        puVar22[0x35] = local_1f8;
        puVar22[0x36] = local_1f0;
        puVar23 = operator_new((ulong)local_1f0);
        puVar23[2] = 0;
        puVar23[1] = 0;
        psVar30 = (string *)&g_02522538;
        *puVar23 = &g_02522538;
        puVar23[3] = puVar22;
        this_ptr[0xb] = (int64_t)puVar22;
        plVar20 = (int64_t *)this_ptr[0xc];
        this_ptr[0xc] = (int64_t)puVar23;
        if (plVar20 != (int64_t *)0x0) {
          LOCK();
          plVar3 = plVar20 + 1;
          lVar19 = *plVar3;
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (lVar19 == 0) {
            (**(code **)(*plVar20 + 0x10))();
            std::__shared_weak_count::__release_weak();
          }
        }
        std::string::operator=(psVar30,local_228);
        psVar30 = *(string **)(this_ptr[0xb] + 0x1a8);
        if (*psVar30 == (string)0x0) {
          std::string::operator=(psVar30,local_228);
        }
        else {
          pbVar26 = *(byte **)(this_ptr[0xb] + 0x110);
          FUN_009bee84();
          if ((*pbVar26 & 1) == 0) {
            pbVar32 = pbVar26 + 1;
            uVar27 = (ulong)(*pbVar26 >> 1);
          }
          else {
            uVar27 = (ulong)*(void*)(pbVar26 + 8);
            pbVar32 = *(byte **)(pbVar26 + 0x10);
          }
          puVar24 = (uint64_t *)std::string::insert(uVar27,(char *)pbVar32,param_3);
          uVar9 = *puVar24;
          *puVar24 = 0;
          puVar24[1] = 0;
          puVar24[2] = 0;
          local_d8 = (void*)0x0;
          local_e8 = (char *)0x0;
          pcStack_e0 = (char *)0x0;
          local_50 = (void*)((int64_t)&local_68 + 2);
          puVar4 = (void*)((int64_t)&local_58 + 7);
          iVar8 = **(int **)(this_ptr[0xb] + 0x130);
          iVar17 = -iVar8;
          if (0 < iVar8) {
            iVar17 = iVar8;
          }
          local_d0 = CONCAT44(local_d0._4_4_,iVar17);
          local_c0 = CONCAT71(local_c0._1_7_,0x30);
          local_c0 = CONCAT44(0x30,(uint32_t)local_c0);
          local_c8 = puVar4;
          local_48 = puVar4;
          puVar25 = (void*)FUN_009bff00();
          if (iVar8 < 0) {
            puVar25[-1] = 0x2d;
            puVar25 = puVar25 + -1;
          }
          pcVar33 = puVar4 + -(int64_t)puVar25;
          pcVar29 = (char *)((uint64_t)local_e8 & 0xff);
          bVar35 = ((uint64_t)local_e8 & 1) == 0;
          pcVar28 = local_e8;
          if (bVar35) {
            pcVar28 = pcVar29;
          }
          pcVar34 = (char *)((int64_t)&MACH_HEADER.sizeofcmds + 2);
          if (!bVar35) {
            pcVar34 = (char *)(((uint64_t)local_e8 & 0xfffffffffffffffe) - 1);
          }
          local_50 = puVar25;
          local_48 = puVar4;
          if (pcVar34 <= pcVar33 && (int64_t)pcVar33 - (int64_t)pcVar34 != 0) {
            pcVar29 = pcStack_e0;
            if (((uint64_t)local_e8 & 1) == 0) {
              pcVar29 = (char *)((uint64_t)local_e8 >> 1 & 0x7f);
            }
            param_3 = 0;
            std::string::__grow_by
                      ((ulong)pcVar29,(ulong)((int64_t)pcVar33 - (int64_t)pcVar34),0,
                       (ulong)pcVar29,in_stack_fffffffffffffc28,in_stack_fffffffffffffc30);
            pcVar28 = (char *)((uint64_t)local_e8 & 0xff);
          }
          puVar18 = (void*)((int64_t)&local_e8 + 1);
          if (((uint64_t)pcVar28 & 1) != 0) {
            puVar18 = local_d8;
          }
          for (; puVar25 != puVar4; puVar25 = puVar25 + 1) {
            pcVar29 = (char *)CONCAT71((int7)((uint64_t)pcVar29 >> 8),*puVar25);
            *puVar18 = *puVar25;
            puVar18 = puVar18 + 1;
          }
          *puVar18 = 0;
          pcVar28 = pcVar33;
          if (((uint64_t)local_e8 & 1) == 0) {
            local_e8 = (char *)CONCAT71(local_e8._1_7_,(char)pcVar33 * '\x02');
            pcVar33 = (char *)(uint64_t)((uint)pcVar33 & 0x7f);
            pcVar28 = pcStack_e0;
          }
          pcStack_e0 = pcVar28;
          puVar24 = (uint64_t *)std::string::append(pcVar29,(ulong)pcVar33);
          uVar10 = *puVar24;
          pcVar29 = (char *)0x0;
          *puVar24 = 0;
          puVar24[1] = 0;
          puVar24[2] = 0;
          FUN_009bee84();
          if ((local_68 & 1) == 0) {
            uStack_60._0_4_ = (ulong)((byte)local_68 >> 1);
          }
          puVar24 = (uint64_t *)std::string::append(pcVar29,(ulong)uStack_60);
          uVar11 = *puVar24;
          *puVar24 = 0;
          puVar24[1] = 0;
          puVar24[2] = 0;
          bVar5 = **(byte **)(this_ptr[0xb] + 0x150);
          if ((bVar5 & 1) == 0) {
            uVar27 = (ulong)(bVar5 >> 1);
          }
          else {
            uVar27 = (ulong)*(void*)(*(byte **)(this_ptr[0xb] + 0x150) + 8);
          }
          puVar24 = (uint64_t *)std::string::append((char *)0x0,uVar27);
          uVar12 = *puVar24;
          pcVar29 = (char *)0x0;
          *puVar24 = 0;
          puVar24[1] = 0;
          puVar24[2] = 0;
          FUN_009bee84();
          if ((local_d0 & 1) == 0) {
            uVar27 = (ulong)((byte)local_d0 >> 1);
          }
          else {
            uVar27 = (ulong)local_c8;
          }
          puVar24 = (uint64_t *)std::string::append(pcVar29,uVar27);
          uVar13 = *puVar24;
          *puVar24 = 0;
          puVar24[1] = 0;
          puVar24[2] = 0;
          bVar5 = **(byte **)(this_ptr[0xb] + 400);
          if ((bVar5 & 1) == 0) {
            uVar27 = (ulong)(bVar5 >> 1);
          }
          else {
            uVar27 = (ulong)*(void*)(*(byte **)(this_ptr[0xb] + 400) + 8);
          }
          puVar24 = (uint64_t *)std::string::append((char *)0x0,uVar27);
          uVar14 = *puVar24;
          pcVar29 = (char *)0x0;
          *puVar24 = 0;
          puVar24[1] = 0;
          puVar24[2] = 0;
          FUN_009bee84();
          if ((local_128 & 1) == 0) {
            local_120 = (ulong)(local_128 >> 1);
          }
          puVar24 = (uint64_t *)std::string::append(pcVar29,local_120);
          uVar15 = *puVar24;
          *puVar24 = 0;
          puVar24[1] = 0;
          puVar24[2] = 0;
          bVar5 = **(byte **)(this_ptr[0xb] + 0x170);
          if ((bVar5 & 1) == 0) {
            uVar27 = (ulong)(bVar5 >> 1);
          }
          else {
            uVar27 = (ulong)*(void*)(*(byte **)(this_ptr[0xb] + 0x170) + 8);
          }
          pbVar26 = (byte *)std::string::append((char *)0x0,uVar27);
          local_88 = *pbVar26;
          uVar16 = *(void*)(pbVar26 + 8);
          uStack_90 = (undefined6)((uint64_t)uVar16 >> 0x10);
          local_92 = (uint16_t)((uint64_t)*(void*)(pbVar26 + 2) >> 0x30);
          pbVar26[0] = 0;
          pbVar26[1] = 0;
          pbVar26[2] = 0;
          pbVar26[3] = 0;
          pbVar26[4] = 0;
          pbVar26[5] = 0;
          pbVar26[6] = 0;
          pbVar26[7] = 0;
          pbVar26[8] = 0;
          pbVar26[9] = 0;
          pbVar26[10] = 0;
          pbVar26[0xb] = 0;
          pbVar26[0xc] = 0;
          pbVar26[0xd] = 0;
          pbVar26[0xe] = 0;
          pbVar26[0xf] = 0;
          pbVar26[0x10] = 0;
          pbVar26[0x11] = 0;
          pbVar26[0x12] = 0;
          pbVar26[0x13] = 0;
          pbVar26[0x14] = 0;
          pbVar26[0x15] = 0;
          pbVar26[0x16] = 0;
          pbVar26[0x17] = 0;
          pvVar31 = (void *)CONCAT62(uStack_90,local_92);
          uStack_80 = local_92;
          uStack_7e = (uint32_t)((uint64_t)uVar16 >> 0x10);
          if ((uVar15 & 1) != 0) {
            operator_delete(pvVar31);
          }
          if ((local_128 & 1) != 0) {
            operator_delete(pvVar31);
          }
          if ((uVar14 & 1) != 0) {
            operator_delete(pvVar31);
          }
          if ((uVar13 & 1) != 0) {
            operator_delete(pvVar31);
          }
          if ((local_d0 & 1) != 0) {
            operator_delete(pvVar31);
          }
          if ((uVar12 & 1) != 0) {
            operator_delete(pvVar31);
          }
          if ((uVar11 & 1) != 0) {
            operator_delete(pvVar31);
          }
          if ((local_68 & 1) != 0) {
            operator_delete(pvVar31);
          }
          if ((uVar10 & 1) != 0) {
            operator_delete(pvVar31);
          }
          if (((uint64_t)local_e8 & 1) != 0) {
            operator_delete(pvVar31);
          }
          if ((uVar9 & 1) != 0) {
            operator_delete(pvVar31);
          }
          if ((local_1d8 & 1) != 0) {
            operator_delete(pvVar31);
          }
        }
      }
      FUN_009bee84();
      if ((local_108 & 1) == 0) {
        uVar27 = (ulong)((byte)local_108 >> 1);
        pcVar29 = (char *)((int64_t)&local_108 + 1);
      }
      else {
        uVar27 = (ulong)uStack_100;
        pcVar29 = local_f8;
      }
      puVar24 = (uint64_t *)std::string::insert(uVar27,pcVar29,param_3);
      local_58 = puVar24[2];
      local_68 = *puVar24;
      uStack_60 = puVar24[1];
      *puVar24 = 0;
      puVar24[1] = 0;
      puVar24[2] = 0;
      if ((local_88 & 1) == 0) {
        uVar27 = (ulong)(local_88 >> 1);
      }
      else {
        uVar27 = (ulong)CONCAT42(uStack_7e,uStack_80);
      }
      puVar22 = (void*)std::string::append((char *)0x0,uVar27);
      uVar6 = *(void*)puVar22;
      uVar7 = *(void*)((int64_t)puVar22 + 1);
      local_a8 = (undefined6)((uint64_t)puVar22[1] >> 0x10);
      uVar16 = *(void*)((int64_t)puVar22 + 2);
      uStack_aa = (uint16_t)((uint64_t)uVar16 >> 0x30);
      lVar19 = puVar22[2];
      *puVar22 = 0;
      puVar22[1] = 0;
      puVar22[2] = 0;
      if ((*pbVar2 & 1) != 0) {
        operator_delete((void *)0x0);
      }
      *(void*)(this_ptr + 5) = uVar6;
      *(void*)((int64_t)this_ptr + 0x29) = uVar7;
      pvVar31 = (void *)CONCAT62(local_a8,uStack_aa);
      *(void*)((int64_t)this_ptr + 0x2a) = uVar16;
      this_ptr[6] = (int64_t)pvVar31;
      this_ptr[7] = lVar19;
      if ((local_68 & 1) != 0) {
        operator_delete(pvVar31);
      }
      if ((local_d0 & 1) != 0) {
        operator_delete(pvVar31);
      }
      if ((local_88 & 1) != 0) {
        operator_delete(pvVar31);
      }
      if ((local_108 & 1) == 0) goto LAB_009be1f7;
LAB_009bead4:
      operator_delete(pvVar31);
      goto LAB_009be1f7;
    }
LAB_009bdc78:
    *(int *)(this_ptr + 1) = (int)pcVar29;
  }
  (**(code **)(*arg1 + 0x10))();
  std::string::assign(pcVar29);
LAB_009be1f7:
  (**(code **)(*this_ptr + 0x18))(param_2,arg1);
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}

