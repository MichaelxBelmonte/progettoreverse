// Function: FUN_00acd960
// Address: 00acd960
// Size: 906 bytes
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


void FUN_00acd960(runtime_error *param_1,uint64_t param_2,uint64_t param_3)

{
  uint uVar1;
  int64_t *plVar2;
  size_t sVar3;
  uint64_t uVar4;
  uint32_t extraout_var;
  void *pvVar6;
  uint64_t uVar7;
  string *psVar8;
  uint64_t uVar9;
  uint8_t uVar10;
  runtime_error rVar11;
  int iVar12;
  int64_t this_ptr;
  int64_t lVar13;
  size_t sVar14;
  char cVar15;
  string local_90 [8];
  int64_t local_88;
  uint64_t local_78;
  uint64_t local_70;
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  runtime_error *local_58;
  uint64_t local_48;
  void*local_40;
  void *local_38;
  void*puVar5;
  
  ___bzero();
  FUN_00acddc0();
  if (((byte)local_90[0] & 1) == 0) {
    if ((byte)local_90[0] >> 1 != 0) goto LAB_00acd9b3;
  }
  else if (local_88 != 0) {
LAB_00acd9b3:
    if (*(int64_t **)(this_ptr + 0x10) != (int64_t *)0x0) {
      uVar4 = (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x18))();
      if ((int)uVar4 < 0) {
        local_58 = operator_new((ulong)param_1);
        local_68 = g_023d4f60;
        uStack_64 = _UNK_023d4f64;
        uStack_60 = _UNK_023d4f68;
        uStack_5c = _UNK_023d4f6c;
        *(void*)(local_58 + 0x18) = 0x203a676f6c617461;
        *(void*)(local_58 + 0x10) = 0x6320656761737365;
        *(void*)(local_58 + 8) = 0x6d206e65706f206f;
        param_1 = (runtime_error *)0x7420656c62616e55;
        *(void*)local_58 = 0x7420656c62616e55;
        local_58[0x20] = (runtime_error)0x0;
        psVar8 = local_90;
        FUN_009d6fc0();
        std::runtime_error::runtime_error(param_1,psVar8);
        if ((local_48 & 1) != 0) {
          operator_delete(param_1);
        }
        FUN_00acdf60();
        std::runtime_error::~runtime_error(param_1);
        if ((local_68 & 1) != 0) {
          operator_delete(param_1);
        }
      }
      if (-1 < (int)uVar4) {
        iVar12 = 1;
        local_70 = uVar4;
        do {
          sVar14 = (size_t)param_3;
          plVar2 = *(int64_t **)(this_ptr + 0x10);
          local_78 = FUN_00acf6c0();
          sVar3 = _strlen((char *)param_1);
          puVar5 = (void*)CONCAT44(extraout_var,sVar3);
          if ((void*)0xffffffffffffffef < puVar5) {
                                std::__basic_string_common<true>::__throw_length_error();
          }
          if ((void*)((int64_t)&MACH_HEADER.sizeofcmds + 2) < puVar5) {
            pvVar6 = operator_new((ulong)param_1);
            local_48 = (uint64_t)(puVar5 + 0x10) & 0xfffffffffffffff0 | 1;
            local_40 = puVar5;
            local_38 = pvVar6;
LAB_00acdb2e:
            uVar4 = local_70;
            _memcpy(param_1,puVar5,sVar14);
          }
          else {
            local_48 = CONCAT71(local_48._1_7_,(char)sVar3 * '\x02');
            pvVar6 = (void *)((int64_t)&local_48 + 1);
            uVar4 = local_70;
            if (puVar5 != (void*)0x0) goto LAB_00acdb2e;
          }
          *(void*)((int64_t)pvVar6 + (int64_t)puVar5) = 0;
          param_1 = (runtime_error *)0x0;
          (**(code **)(*plVar2 + 0x20))(0,uVar4,iVar12,&local_48);
          if ((local_48 & 1) != 0) {
            operator_delete(param_1);
          }
          param_3 = (uint64_t)(byte)local_68;
          if ((local_68 & 1) == 0) {
            uVar7 = (uint64_t)((byte)local_68 >> 1);
          }
          else {
            uVar7 = CONCAT44(uStack_5c,uStack_60);
          }
          if (uVar7 != 0) {
            param_1 = (runtime_error *)((int64_t)&local_68 + 1);
            if ((local_68 & 1) != 0) {
              param_1 = local_58;
            }
            uVar9 = (uint64_t)((uint)uVar7 & 3);
            uVar10 = (uint8_t)iVar12;
            if (uVar7 - 1 < 3) {
              lVar13 = 0;
            }
            else {
              lVar13 = 0;
              do {
                *(void*)(this_ptr + 0x20 + (uint64_t)(byte)param_1[lVar13]) = uVar10;
                *(void*)(this_ptr + 0x20 + (uint64_t)(byte)param_1[lVar13 + 1]) = uVar10;
                *(void*)(this_ptr + 0x20 + (uint64_t)(byte)param_1[lVar13 + 2]) = uVar10;
                *(void*)(this_ptr + 0x20 + (uint64_t)(byte)param_1[lVar13 + 3]) = uVar10;
                lVar13 = lVar13 + 4;
              } while (uVar7 - uVar9 != lVar13);
            }
            if (uVar9 != 0) {
              param_1 = param_1 + lVar13;
              uVar7 = 0;
              do {
                *(void*)(this_ptr + 0x20 + (uint64_t)(byte)param_1[uVar7]) = uVar10;
                uVar7 = uVar7 + 1;
              } while (uVar9 != uVar7);
            }
          }
          if ((local_68 & 1) != 0) {
            operator_delete(param_1);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 != 0x3c);
        (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x28))();
        goto LAB_00acdc91;
      }
    }
  }
  cVar15 = '\x01';
  do {
    param_1 = (runtime_error *)FUN_00acf6c0();
    if ((param_1 != (runtime_error *)0x0) && (rVar11 = *param_1, rVar11 != (runtime_error)0x0)) {
      param_1 = param_1 + 1;
      do {
        *(char *)(this_ptr + 0x20 + (uint64_t)(byte)rVar11) = cVar15;
        rVar11 = *param_1;
        param_1 = param_1 + 1;
      } while (rVar11 != (runtime_error)0x0);
    }
    cVar15 = cVar15 + '\x01';
  } while (cVar15 != '<');
LAB_00acdc91:
  uVar7 = 0;
  do {
    if ((*(char *)(this_ptr + 0x61 + uVar7) == '\0') &&
       (cVar15 = (char)(uVar7 & 0xffffffff) + 'A',
       param_1 = (runtime_error *)CONCAT71((int7)((uVar7 & 0xffffffff) >> 8),cVar15), -1 < cVar15))
    {
      uVar1 = *(uint *)(*(int64_t *)(*(int64_t *)(this_ptr + 8) + 0x10) + 0x104 + uVar7 * 4);
      param_1 = (runtime_error *)(uint64_t)uVar1;
      if ((uVar1 & 0x1000) == 0) {
        if ((short)uVar1 < 0) {
          *(void*)(this_ptr + 0x61 + uVar7) = 0x17;
        }
      }
      else {
        *(void*)(this_ptr + 0x61 + uVar7) = 0x16;
      }
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0xbf);
  if (((byte)local_90[0] & 1) != 0) {
    operator_delete(param_1);
  }
  return;
}

