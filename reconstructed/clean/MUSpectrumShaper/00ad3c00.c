// Function: FUN_00ad3c00
// Address: 00ad3c00
// Size: 2114 bytes
// Class: MUSpectrumShaper
// String references:
//   "'."
//   "Expected control char, got '"
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


int FUN_00ad3c00(ushort *param_1,string *param_2,size_t param_3)

{
  ushort *puVar1;
  char cVar2;
  char *pcVar3;
  string *psVar4;
  int iVar5;
  int64_t lVar6;
  ushort *puVar7;
  void*puVar8;
  void*puVar9;
  ulong uVar10;
  void *pvVar11;
  byte *arg1;
  int64_t this_ptr;
  string *psVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  void *pvVar15;
  bool bVar16;
  uint32_t uVar17;
  ushort local_a0;
  uint64_t local_68;
  string *psStack_60;
  ushort *local_48;
  ushort *puStack_40;
  ushort *local_38;
  
  iVar5 = 0;
  if ((int)param_2 == 0) {
    iVar5 = (**(code **)(**(int64_t **)(this_ptr + 0x60) + 0x18))();
  }
  FUN_00ad3660();
  local_48 = (ushort *)0x0;
  puStack_40 = (ushort *)0x0;
  local_38 = (ushort *)0x0;
  if ((*arg1 & 1) == 0) {
    arg1[0] = 0;
    arg1[1] = 0;
  }
  else {
    **(void**)(arg1 + 0x10) = 0;
    arg1[8] = 0;
    arg1[9] = 0;
    arg1[10] = 0;
    arg1[0xb] = 0;
    arg1[0xc] = 0;
    arg1[0xd] = 0;
    arg1[0xe] = 0;
    arg1[0xf] = 0;
  }
  iVar5 = iVar5 + 1;
  do {
    while( true ) {
      if (*(char *)(this_ptr + 0x78) == '\0') {
        param_2 = (string *)((int64_t)&MACH_HEADER.magic + 1);
        (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x38))();
      }
      else {
        *(void*)(this_ptr + 0x78) = 0;
      }
      cVar2 = *(char *)(this_ptr + 0x79);
      if (cVar2 == '\\') break;
      iVar5 = iVar5 + 1;
      if (cVar2 == '\"') {
        if (local_48 != puStack_40) {
          puVar8 = (void*)___cxa_allocate_exception();
          puVar9 = operator_new((ulong)param_1);
          puVar9[3] = 0x6961702065746167;
          puVar9[2] = 0x6f7272757320776f;
          puVar9[1] = 0x6c2036312d465455;
          *puVar9 = 0x20676e697373694d;
          *(void*)(puVar9 + 4) = 0x2e72;
          *(void*)((int64_t)puVar9 + 0x22) = 0;
          *puVar8 = &g_02517278;
          uVar17 = std::string::string((string *)0x20676e697373694d,param_2);
          *puVar8 = &g_02517250;
          *(void*)(puVar8 + 4) = 1;
                              ___cxa_throw(uVar17,FUN_0088de20);
        }
        if (local_48 != (ushort *)0x0) {
          operator_delete(param_1);
        }
        return iVar5;
      }
joined_r0x00ad3ccb:
      if (local_48 != puStack_40) {
        puVar8 = (void*)___cxa_allocate_exception();
        puVar9 = operator_new((ulong)local_48);
        puVar9[3] = 0x6961702065746167;
        puVar9[2] = 0x6f7272757320776f;
        puVar9[1] = 0x6c2036312d465455;
        *puVar9 = 0x20676e697373694d;
        *(void*)(puVar9 + 4) = 0x2e72;
        *(void*)((int64_t)puVar9 + 0x22) = 0;
        *puVar8 = &g_02517278;
        uVar17 = std::string::string((string *)0x20676e697373694d,param_2);
        *puVar8 = &g_02517250;
        *(void*)(puVar8 + 4) = 1;
                            ___cxa_throw(uVar17,FUN_0088de20);
      }
      param_1 = local_48;
      std::string::push_back((char)local_48);
    }
    if (*(char *)(this_ptr + 0x78) != '\0') {
      *(void*)(this_ptr + 0x78) = 0;
LAB_00ad3d90:
      uVar10 = (ulong)param_1;
      param_2 = (string *)0x0;
      lVar6 = std::string::find((char)param_1,0);
      if (lVar6 == -1) {
        puVar8 = (void*)___cxa_allocate_exception();
        puVar9 = (void*)std::string::insert(uVar10,"Expected control char, got \'");
        pcVar3 = (char *)*puVar9;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9 = (void*)std::string::append(pcVar3);
        psVar12 = (string *)*puVar9;
        psVar4 = (string *)puVar9[1];
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        *puVar8 = &g_02517278;
        uVar17 = std::string::string(psVar12,psVar4);
        *puVar8 = &g_02517250;
        *(void*)(puVar8 + 4) = 1;
                            ___cxa_throw(uVar17,FUN_0088de20);
      }
      iVar5 = iVar5 + 2;
      goto joined_r0x00ad3ccb;
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x38))();
    if (*(char *)(this_ptr + 0x79) != 'u') goto LAB_00ad3d90;
    FUN_00ad3940();
    param_2 = (string *)(uint64_t)local_a0;
    if ((local_a0 & 0xfc00) == 0xd800) {
      if (puStack_40 == local_38) {
        psVar12 = (string *)((int64_t)puStack_40 - (int64_t)local_48);
        if ((int64_t)psVar12 < -2) {
                              std::__vector_base_common<true>::__throw_length_error();
        }
        lVar6 = (int64_t)psVar12 >> 1;
        uVar13 = (int64_t)local_38 - (int64_t)local_48;
        uVar14 = uVar13;
        if (uVar13 < lVar6 + 1U) {
          uVar14 = lVar6 + 1U;
        }
        if (0x3ffffffffffffffe < (uint64_t)((int64_t)uVar13 >> 1)) {
          uVar14 = 0x7fffffffffffffff;
        }
        if (uVar14 == 0) {
          puVar7 = (ushort *)0x0;
        }
        else {
          if ((int64_t)uVar14 < 0) {
                                FUN_00ad7940();
          }
          puVar7 = operator_new((ulong)((int64_t)uVar13 >> 1));
        }
        local_38 = puVar7 + uVar14;
        puVar7[lVar6] = local_a0;
        puStack_40 = puVar7 + lVar6 + 1;
        param_2 = (string *)(uint64_t)local_a0;
        if (0 < (int64_t)psVar12) {
          _memcpy(local_38,psVar12,param_3);
          param_2 = psVar12;
        }
        bVar16 = local_48 == (ushort *)0x0;
        param_1 = local_38;
        local_48 = puVar7;
        if (bVar16) goto LAB_00ad3e05;
        operator_delete(local_38);
        iVar5 = iVar5 + 6;
      }
      else {
        *puStack_40 = local_a0;
        puStack_40 = puStack_40 + 1;
LAB_00ad3e05:
        iVar5 = iVar5 + 6;
      }
    }
    else {
      if ((local_a0 & 0xfc00) == 0xdc00) {
        if (local_48 == puStack_40) {
          puVar8 = (void*)___cxa_allocate_exception();
          puVar9 = operator_new((ulong)param_1);
          puVar9[3] = 0x617020657461676f;
          puVar9[2] = 0x7272757320686769;
          puVar9[1] = 0x682036312d465455;
          *puVar9 = 0x20676e697373694d;
          *(void*)((int64_t)puVar9 + 0x1f) = 0x2e726961;
          *(void*)((int64_t)puVar9 + 0x23) = 0;
          *puVar8 = &g_02517278;
          uVar17 = std::string::string((string *)0x20676e697373694d,param_2);
          *puVar8 = &g_02517250;
          *(void*)(puVar8 + 4) = 1;
                              ___cxa_throw(uVar17,FUN_0088de20);
        }
        if (puStack_40 == local_38) goto LAB_00ad3e1f;
LAB_00ad3d65:
        *puStack_40 = local_a0;
        puStack_40 = puStack_40 + 1;
        if (local_38 <= puStack_40) goto LAB_00ad3f64;
LAB_00ad3d7a:
        *puStack_40 = 0;
      }
      else {
        if (puStack_40 != local_38) goto LAB_00ad3d65;
LAB_00ad3e1f:
        pvVar15 = (void *)((int64_t)local_38 - (int64_t)local_48);
        if ((int64_t)pvVar15 < -2) {
                              std::__vector_base_common<true>::__throw_length_error();
        }
        uVar14 = (int64_t)pvVar15 >> 1;
        pvVar11 = (void *)(uVar14 + 1);
        if ((void *)(uVar14 + 1) <= pvVar15) {
          pvVar11 = pvVar15;
        }
        if (0x3ffffffffffffffe < uVar14) {
          pvVar11 = (void *)0x7fffffffffffffff;
        }
        if (pvVar11 == (void *)0x0) {
          puVar7 = (ushort *)0x0;
        }
        else {
          if ((int64_t)pvVar11 < 0) {
                                FUN_00ad7940();
          }
          puVar7 = operator_new((ulong)local_48);
        }
        local_38 = puVar7 + (int64_t)pvVar11;
        puVar7[uVar14] = local_a0;
        puStack_40 = puVar7 + uVar14 + 1;
        if (0 < (int64_t)pvVar15) {
          _memcpy(local_48,pvVar15,param_3);
        }
        if (local_48 == (ushort *)0x0) {
          local_48 = puVar7;
          if (local_38 <= puStack_40) goto LAB_00ad3f64;
          goto LAB_00ad3d7a;
        }
        operator_delete(local_48);
        local_48 = puVar7;
        if (puStack_40 < local_38) goto LAB_00ad3d7a;
LAB_00ad3f64:
        pvVar15 = (void *)((int64_t)puStack_40 - (int64_t)local_48);
        if ((int64_t)pvVar15 < -2) {
                              std::__vector_base_common<true>::__throw_length_error();
        }
        lVar6 = (int64_t)pvVar15 >> 1;
        uVar13 = (int64_t)local_38 - (int64_t)local_48;
        uVar14 = uVar13;
        if (uVar13 < lVar6 + 1U) {
          uVar14 = lVar6 + 1U;
        }
        if (0x3ffffffffffffffe < (uint64_t)((int64_t)uVar13 >> 1)) {
          uVar14 = 0x7fffffffffffffff;
        }
        if (uVar14 == 0) {
          puVar7 = (ushort *)0x0;
        }
        else {
          if ((int64_t)uVar14 < 0) {
                                FUN_00ad7940();
          }
          puVar7 = operator_new((ulong)((int64_t)uVar13 >> 1));
        }
        local_38 = puVar7 + uVar14;
        puVar7[lVar6] = 0;
        if (0 < (int64_t)pvVar15) {
          _memcpy(puVar7 + lVar6 + 1,pvVar15,param_3);
        }
        bVar16 = local_48 != (ushort *)0x0;
        local_48 = puVar7;
        if (bVar16) {
          operator_delete(puVar7 + lVar6 + 1);
        }
      }
      puVar7 = local_48 + -1;
      do {
        puVar1 = puVar7 + 1;
        puVar7 = puVar7 + 1;
      } while (*puVar1 != 0);
      param_1 = (ushort *)0x0;
      FUN_00ad8e40();
      param_2 = psStack_60;
      if ((local_68 & 1) == 0) {
        param_2 = (string *)(local_68 >> 1 & 0x7f);
      }
      std::string::append((char *)param_1,(ulong)param_2);
      if ((local_68 & 1) != 0) {
        operator_delete(param_1);
      }
      puStack_40 = local_48;
      iVar5 = iVar5 + 6;
    }
  } while( true );
}

