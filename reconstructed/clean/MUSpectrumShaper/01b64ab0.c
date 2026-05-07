// Function: FUN_01b64ab0
// Address: 01b64ab0
// Size: 2670 bytes
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


void FUN_01b64ab0(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  bool bVar2;
  uint8_t auVar3 [16];
  int64_t lVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar9;
  int64_t lVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  uint64_t uVar15;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar16 [16];
  float fVar17;
  float fVar18;
  uint32_t uVar19;
  float fVar20;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  float fVar21;
  float fVar22;
  uint32_t uVar23;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar8 = local_40;
  fVar20 = (float)((uint64_t)param_2 >> 0x20);
  fVar11 = (float)param_2;
  if (this_ptr[0x27] == 0) goto LAB_01b64c7a;
  iVar7 = FUN_01d3a5a0();
  if (iVar7 != 7) {
    if (((this_ptr[0x27] != 0) && (iVar7 = FUN_01d3a5a0(), iVar7 == 1)) &&
       (iVar7 = FUN_01d3b630(), iVar7 == 1)) {
      FUN_01b57f70();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e3f820();
      if (*(int *)((int64_t)this_ptr + 0x144) < (int)this_ptr[0x28]) {
        local_64 = 0.0;
        local_58 = g_02390124;
        local_60 = g_0239011c;
        local_5c = g_0239011c;
      }
      else {
        lVar10 = (int64_t)(int)this_ptr[0x28] + -1;
        do {
          local_64 = (float)FUN_00d459e0();
          local_60 = (float)FUN_00d459e0();
          local_5c = (float)FUN_00d459e0();
          local_58 = (float)FUN_00d459e0();
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((int64_t)this_ptr + 0x144));
      }
      FUN_01d3abf0();
      fVar12 = (float)FUN_01e466c0();
      bVar2 = fVar12 < g_023908ec;
      fVar21 = g_02394248 + fVar11;
      fVar17 = fVar20 + g_02390d00;
      fVar22 = g_02390d00 + fVar11;
LAB_01b64de0:
      (**(code **)(*this_ptr + 0x658))();
      lVar10 = *arg1;
      if (lVar10 == local_40) {
        if (((char)arg1[1] == '\0') && (local_40 != 0)) {
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01b64e74;
          }
LAB_01b64e32:
          *(void*)(arg1 + 1) = 1;
          local_38 = '\0';
        }
        lVar10 = *arg1;
      }
      else {
        lVar4 = arg1[1];
        if (local_38 != '\0') {
          *arg1 = local_40;
          if (((char)lVar4 != '\0') && (lVar10 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01b64e32;
        }
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *arg1 = local_40;
        if (((char)lVar4 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
LAB_01b64e74:
        *(void*)(arg1 + 1) = 1;
        lVar10 = *arg1;
      }
      if (lVar10 != 0) {
        iVar7 = FUN_01d3a5a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (iVar7 == 6) goto LAB_01b6550c;
        iVar7 = FUN_01d3a5a0();
        if (iVar7 == 5) {
          FUN_01d3abf0();
          auVar16._0_8_ = FUN_01e466c0();
          auVar16._8_8_ = extraout_XMM0_Qb;
          if ((float)auVar16._0_8_ <= fVar21) {
            if ((float)auVar16._0_8_ < g_023908ec) {
              auVar16 = blendps(auVar16,g_023b1e70,0xd);
            }
          }
          else {
            auVar16 = blendps(auVar16,ZEXT416((uint)fVar21),1);
          }
          uVar15 = auVar16._0_8_;
          if (auVar16._4_4_ <= fVar20) {
            if (auVar16._4_4_ < 0.0) {
              auVar16 = blendps(auVar16,g_0238ff00,2);
              uVar15 = auVar16._0_8_;
            }
          }
          else {
            auVar3._4_4_ = fVar20;
            auVar3._0_4_ = fVar11;
            auVar3._8_4_ = in_XMM1_Dc;
            auVar3._12_4_ = in_XMM1_Dd;
            auVar16 = blendps(auVar16,auVar3,2);
            uVar15 = auVar16._0_8_;
          }
          fVar18 = (fVar20 - (float)((uint64_t)uVar15 >> 0x20)) / fVar17;
          fVar5 = fVar18;
          fVar6 = local_58;
          if ((g_023908ec <= fVar12) &&
             (fVar5 = local_64, fVar6 = fVar18, fVar12 < fVar21 || bVar2)) {
            local_60 = (float)uVar15 / fVar22;
            local_5c = fVar18;
            fVar6 = local_58;
          }
          local_58 = fVar6;
          local_64 = fVar5;
          iVar7 = (int)this_ptr[0x28];
          if (iVar7 <= *(int *)((int64_t)this_ptr + 0x144)) {
            dVar13 = (double)local_64;
            dVar14 = (double)local_58;
            iVar9 = iVar7 * 4;
            do {
              uVar15 = FUN_00d46dc0();
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar15 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_00d233f0(uVar15,iVar9);
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              uVar15 = FUN_00d46dc0();
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar15 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_00d233f0(uVar15,iVar9 + 1);
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              uVar15 = FUN_00d46dc0();
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar15 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_00d233f0(uVar15,iVar9 + 2);
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              uVar15 = FUN_00d46dc0();
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar15 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              local_40 = local_50;
              FUN_00d233f0(uVar15,iVar9 + 3);
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              uVar19 = SUB84((double)local_60,0);
              uVar23 = SUB84((double)local_5c,0);
              if (iVar7 == 0) {
                FUN_01b57fb0(dVar13,uVar19,uVar23,dVar14);
                lVar10 = this_ptr[0x29];
                if (lVar10 != local_50) {
                  if (local_50 == 0) {
                    this_ptr[0x29] = 0;
                  }
                  else {
                    FUN_00d50b00();
                    lVar10 = this_ptr[0x29];
                    this_ptr[0x29] = local_50;
                  }
                  if (lVar10 != 0) {
                    FUN_00d50b20();
                  }
                }
              }
              else if (iVar7 == 1) {
                FUN_01b57fb0(dVar13,uVar19,uVar23,dVar14);
                lVar10 = this_ptr[0x2a];
                if (lVar10 != local_50) {
                  if (local_50 == 0) {
                    this_ptr[0x2a] = 0;
                  }
                  else {
                    FUN_00d50b00();
                    lVar10 = this_ptr[0x2a];
                    this_ptr[0x2a] = local_50;
                  }
                  if (lVar10 != 0) {
                    FUN_00d50b20();
                  }
                }
              }
              else if (iVar7 == 2) {
                FUN_01b57fb0(dVar13,uVar19,uVar23,dVar14);
                lVar10 = this_ptr[0x2b];
                if (lVar10 != local_50) {
                  if (local_50 == 0) {
                    this_ptr[0x2b] = 0;
                  }
                  else {
                    FUN_00d50b00();
                    lVar10 = this_ptr[0x2b];
                    this_ptr[0x2b] = local_50;
                  }
                  if (lVar10 != 0) {
                    FUN_00d50b20();
                  }
                }
              }
              local_38 = '\0';
              iVar9 = iVar9 + 4;
              bVar1 = iVar7 < *(int *)((int64_t)this_ptr + 0x144);
              iVar7 = iVar7 + 1;
            } while (bVar1);
          }
          FUN_01b57e50();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          FUN_01b57030();
          FUN_01b57030();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
        }
        goto LAB_01b64de0;
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
LAB_01b6550c:
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
    }
    goto LAB_01b64c7a;
  }
  fVar11 = (float)FUN_01d3b640();
  iVar7 = (int)this_ptr[0x28];
  if (fVar11 <= 0.0) {
    if (iVar7 == 2) {
      if (*(int *)((int64_t)this_ptr + 0x144) == 2) {
LAB_01b64c36:
        lVar8 = 0x100000001;
        goto LAB_01b64c65;
      }
    }
    else if (iVar7 == 1) {
      if (*(int *)((int64_t)this_ptr + 0x144) == 1) goto LAB_01b64c4d;
    }
    else if ((iVar7 == 0) && (*(int *)((int64_t)this_ptr + 0x144) == 0)) goto LAB_01b64c12;
LAB_01b64c5b:
    lVar8 = 0x200000002;
LAB_01b64c65:
    this_ptr[0x28] = lVar8;
  }
  else {
    if (iVar7 == 2) {
      if (*(int *)((int64_t)this_ptr + 0x144) == 2) {
LAB_01b64c12:
        lVar8 = 0x200000000;
        goto LAB_01b64c65;
      }
    }
    else if (iVar7 == 1) {
      if (*(int *)((int64_t)this_ptr + 0x144) == 1) goto LAB_01b64c5b;
    }
    else if ((iVar7 == 0) && (*(int *)((int64_t)this_ptr + 0x144) == 0)) goto LAB_01b64c36;
LAB_01b64c4d:
    this_ptr[0x28] = 0;
  }
  (**(code **)(*this_ptr + 0x620))();
LAB_01b64c7a:
  FUN_01e459c0();
  return;
}

