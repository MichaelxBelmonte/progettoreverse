// Function: FUN_01b71450
// Address: 01b71450
// Size: 1414 bytes
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


void FUN_01b71450(void)

{
  char cVar1;
  int iVar2;
  void*puVar3;
  void *pvVar4;
  uint64_t uVar5;
  void*puVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  void* pVar10;
  uint64_t *puVar11;
  int iVar12;
  int64_t *this_ptr;
  int64_t lVar13;
  int iVar14;
  uint32_t local_88;
  int iStack_84;
  uint64_t local_80;
  int64_t local_78;
  char local_70;
  uint32_t local_64;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t *local_48;
  uint64_t *local_40;
  void*local_38;
  
  cVar1 = (**(code **)(*this_ptr + 0x9d0))();
  if (cVar1 != '\0') {
    if (this_ptr[0x2b] == 0) {
                                              (**(code **)(*this_ptr + 0xa10))();
      return;
    }
    if ((*(int *)((int64_t)this_ptr + 0x17c) != 0) || (*(int *)((int64_t)this_ptr + 0x184) != 0)
       ) {
      local_40 = (uint64_t *)(this_ptr + 0x2f);
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      puVar6 = &g_025683c0;
      *puVar3 = &g_025683c0;
      (*g_025683d8)();
      FUN_00c92170();
      local_38 = puVar3;
      FUN_00c92160();
      local_64 = 0xffffffff;
      local_70 = '\0';
      local_78 = 0;
      while( true ) {
        pVar10 = (void*)puVar6;
        lVar8 = this_ptr[0x2b];
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        pvVar4 = _pthread_getspecific(pVar10);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar5 = FUN_00e7bdb0();
        puVar6 = (void*)FUN_00e7bdb0();
        cVar1 = FUN_01252960(puVar6,uVar5,&local_78,&local_88);
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
        puVar3 = local_38;
        if (cVar1 == '\0') break;
        if (iStack_84 != 0) {
          iVar14 = *(int *)(local_38 + 3);
          FUN_00c8e340();
          puVar6 = (void*)CONCAT44(iStack_84,local_88);
          *(void**)(puVar3[2] + (int64_t)iVar14) = puVar6;
        }
      }
      if (*(int *)(local_38 + 3) + 7U < 0xf) {
        uVar7 = FUN_00e7bdb0();
        *local_40 = uVar7;
        lVar8 = FUN_00e7bdb0();
        this_ptr[0x30] = lVar8;
      }
      uVar7 = *local_40 >> 0x20;
      if (uVar7 != 0) {
        iVar14 = *(int *)(local_38 + 3);
        iVar12 = iVar14 + 7;
        if (-1 < iVar14) {
          iVar12 = iVar14;
        }
        if (7 < iVar14) {
          iVar12 = iVar12 >> 3;
          iVar14 = *(int *)(local_38[2] + 4);
          lVar8 = local_38[2];
          while( true ) {
            iVar12 = iVar12 + -1;
            if (((iVar14 != 0) && ((int)uVar7 != 0)) && (cVar1 = FUN_00e7c000(), cVar1 != '\0'))
            goto LAB_01b716d8;
            if (iVar12 == 0) break;
            uVar7 = (uint64_t)*(uint *)((int64_t)this_ptr + 0x17c);
            iVar14 = *(int *)(lVar8 + 0xc);
            lVar8 = lVar8 + 8;
          }
        }
        uVar7 = FUN_01b712c0();
        *local_40 = uVar7;
      }
LAB_01b716d8:
      local_48 = (uint64_t *)(this_ptr + 0x30);
      uVar7 = (uint64_t)this_ptr[0x30] >> 0x20;
      if (uVar7 != 0) {
        iVar14 = *(int *)(local_38 + 3);
        iVar12 = iVar14 + 7;
        if (-1 < iVar14) {
          iVar12 = iVar14;
        }
        if (7 < iVar14) {
          iVar12 = iVar12 >> 3;
          iVar14 = *(int *)(local_38[2] + 4);
          lVar8 = local_38[2];
          while( true ) {
            iVar12 = iVar12 + -1;
            if (((iVar14 != 0) && ((int)uVar7 != 0)) && (cVar1 = FUN_00e7c000(), cVar1 != '\0'))
            goto LAB_01b7177e;
            if (iVar12 == 0) break;
            uVar7 = (uint64_t)*(uint *)((int64_t)this_ptr + 0x184);
            iVar14 = *(int *)(lVar8 + 0xc);
            lVar8 = lVar8 + 8;
          }
        }
        uVar7 = FUN_01b712c0();
        *local_48 = uVar7;
      }
LAB_01b7177e:
      iVar14 = *(int *)((int64_t)this_ptr + 0x17c);
      while (((iVar14 != 0 && (*(int *)((int64_t)local_48 + 4) != 0)) &&
             (cVar1 = FUN_00e7c020(), cVar1 == '\0'))) {
        iVar14 = *(int *)(local_38 + 3);
        iVar12 = iVar14 + 7;
        if (-1 < iVar14) {
          iVar12 = iVar14;
        }
        if (7 < iVar14) {
          lVar8 = local_38[2];
          iVar14 = 0;
          do {
            if (((*(int *)(lVar8 + 4) != 0) && (*(int *)((int64_t)this_ptr + 0x17c) != 0)) &&
               (cVar1 = FUN_00e7c000(), cVar1 != '\0')) goto LAB_01b71856;
            lVar8 = lVar8 + 8;
            iVar14 = iVar14 + 1;
          } while (iVar12 >> 3 != iVar14);
          iVar14 = -1;
LAB_01b71856:
          iVar12 = *(int *)(local_38 + 3);
          iVar2 = iVar12 + 7;
          if (-1 < iVar12) {
            iVar2 = iVar12;
          }
          if (7 < iVar12) {
            lVar8 = local_38[2];
            lVar13 = 0;
            do {
              if (((*(int *)(lVar8 + 4) != 0) && (*(int *)((int64_t)this_ptr + 0x184) != 0)) &&
                 (cVar1 = FUN_00e7c000(), cVar1 != '\0')) {
                if (iVar14 == -1) break;
                local_58 = FUN_00e7bdb0();
                uVar7 = FUN_00e7bdb0();
                if (0 < iVar14) {
                  local_58 = *(uint64_t *)(local_38[2] + (uint64_t)(iVar14 - 1) * 8);
                }
                iVar14 = *(int *)(local_38 + 3);
                iVar12 = iVar14 + 7;
                if (-1 < iVar14) {
                  iVar12 = iVar14;
                }
                if ((int)lVar13 < (iVar12 >> 3) + -1) {
                  uVar7 = *(uint64_t *)(local_38[2] + 8 + lVar13 * 8);
                }
                local_60 = uVar7;
                if (local_58 >> 0x20 == 0) {
                  puVar11 = local_48;
                  if (uVar7 >> 0x20 == 0) {
                    *local_40 = local_58;
                  }
                }
                else {
                  if (uVar7 >> 0x20 == 0) {
                    *local_40 = local_58;
                    break;
                  }
                  local_50 = *local_40;
                  FUN_00e7b970();
                  local_80 = FUN_00e7bdb0();
                  local_50 = *local_48;
                  FUN_00e7b970();
                  uVar9 = FUN_00e7bdb0();
                  uVar7 = local_60;
                  puVar11 = local_48;
                  if (((local_80._4_4_ != 0) && (uVar9 >> 0x20 != 0)) &&
                     (cVar1 = FUN_00e7c020(), uVar7 = local_60, puVar11 = local_48, cVar1 == '\0'))
                  {
                    uVar7 = local_58;
                    puVar11 = local_40;
                  }
                }
                *puVar11 = uVar7;
                break;
              }
              lVar8 = lVar8 + 8;
              lVar13 = lVar13 + 1;
            } while (iVar2 >> 3 != (int)lVar13);
          }
        }
        iVar14 = *(int *)((int64_t)local_40 + 4);
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

