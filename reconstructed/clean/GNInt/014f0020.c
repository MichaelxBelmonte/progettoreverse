// Function: FUN_014f0020
// Address: 014f0020
// Size: 1511 bytes
// Class: GNInt
// === GNInt properties ===
//   GNInt           _assembledElementRendererCount
//   bool            _processPeriodBased
//   bool            _usesPososc
//   bool            _resetAllPhasesAtAttack
//   bool            _continueAllPhasesByDefault
//   bool            _renderWithOriginalTime
//   float           _freqDomainFormantResolution
//   GNInt           _freqDomainFourierSize
//   float           _freqDomainPhaseResetParametersScale
//   float           _formantPitchUpCompensationFactor
//   float           _formantPitchDownCompensationFactor
//   bool            _didFail
//   GNInt           _expectedResultLength
//   GNInt           _httpStatusCode
//   bool            _isSuspended
//   SInt64          _uploadLength
//   GNInt           _receivedResultLength
//   bool            _didTimeOut
//   float           _cent
//   GNInt           _westernStandardPitchIndexOffset
//   bool            _isLoop
//   GNInt           _numerator
//   GNInt           _denominator
//   GNInt           _beats
//   GNInt           _tonalKey
//   GNInt           _tonalGender
//   float           _time
//   float           _nextBeepStartTime
//   float           _beepTime
//   float           _beepLength
//   ... +133 more


void FUN_014f0020(int64_t param_1,int param_2)

{
  uint64_t uVar1;
  void*puVar2;
  float fVar3;
  uint32_t uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  void *pvVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar13;
  bool bVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  int64_t local_a8;
  char local_a0;
  uint32_t local_94;
  int64_t local_80;
  char local_78;
  
  lVar10 = param_1;
  (**(code **)(*this_ptr + 0x378))();
  pvVar8 = _pthread_getspecific((void*)lVar10);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = *(uint *)(this_ptr[0x21] + 0xc);
  lVar10 = (int64_t)(int)uVar5;
  bVar15 = arg1 == 0;
  bVar6 = param_2 < (int)(uVar5 * 5);
  if (bVar6 || bVar15) {
    arg1 = FUN_00e83010();
  }
  if (param_1 == 0) {
    FUN_014efd00();
    lVar13 = local_80;
    if (local_78 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    lVar13 = 0;
  }
  puVar2 = (void*)(arg1 + lVar10 * 4);
  if ((int)uVar5 < 1) {
    bVar14 = false;
    lVar12 = 0;
  }
  else {
    uVar11 = 0;
    lVar12 = 0;
    bVar14 = false;
    do {
      lVar9 = *(int64_t *)(*(int64_t *)(this_ptr[0x21] + 0x10) + uVar11 * 8);
      if (lVar12 == lVar9) {
        if ((!bVar14) && (lVar12 != 0)) {
          bVar14 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        if ((bVar14) && (lVar12 != 0)) {
          FUN_00d50b20();
          bVar14 = true;
          lVar12 = lVar9;
        }
        else {
          bVar14 = true;
          lVar12 = lVar9;
        }
      }
      *(void*)(arg1 + uVar11 * 4) = *(void*)(lVar12 + 0x14);
      uVar11 = uVar11 + 1;
    } while (uVar5 != uVar11);
    if ((int)uVar5 < 5) {
      uVar11 = 0;
      do {
        lVar9 = *(int64_t *)(*(int64_t *)(this_ptr[0x21] + 0x10) + uVar11 * 8);
        if (lVar12 == lVar9) {
          if (!bVar14) {
            bVar14 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          lVar12 = lVar9;
          if (bVar14) {
            FUN_00d50b20();
            bVar14 = true;
          }
          else {
            bVar14 = true;
          }
        }
        fVar17 = 0.0;
        if ((!NAN(*(float *)(lVar12 + 0x20))) && (!NAN(*(float *)(lVar12 + 0x10)))) {
          fVar17 = *(float *)(lVar12 + 0x20) * *(float *)(lVar12 + 0x10) * g_0239011c;
        }
        puVar2[uVar11] = fVar17;
        uVar11 = uVar11 + 1;
      } while (uVar5 != uVar11);
    }
    else {
      uVar11 = 2;
      do {
        lVar9 = *(int64_t *)(*(int64_t *)(this_ptr[0x21] + 0x10) + uVar11 * 8);
        if (lVar12 == lVar9) {
          if (!bVar14) {
            bVar14 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          lVar12 = lVar9;
          if (bVar14) {
            FUN_00d50b20();
            bVar14 = true;
          }
          else {
            bVar14 = true;
          }
        }
        fVar17 = *(float *)(arg1 + -4 + uVar11 * 4);
        fVar16 = *(float *)(arg1 + uVar11 * 4);
        fVar3 = *(float *)(arg1 + 4 + uVar11 * 4);
        uVar1 = uVar11 + 1;
        fVar16 = g_02394240 -
                 (float)((uint)((*(float *)(arg1 + 8 + uVar11 * 4) - fVar3) * g_0239011c +
                               (fVar3 - fVar16) +
                               (fVar16 - fVar17) +
                               (fVar17 - *(float *)(arg1 + -8 + uVar11 * 4)) * g_0239011c) &
                        g_02390140);
        fVar17 = g_0239425c;
        if (g_0239425c <= fVar16) {
          fVar17 = fVar16;
        }
        fVar16 = 0.0;
        if ((!NAN(*(float *)(lVar12 + 0x20))) && (!NAN(*(float *)(lVar12 + 0x10)))) {
          fVar16 = *(float *)(lVar12 + 0x20) *
                   fVar17 * g_023b81d4 * fVar17 * g_023b81d4 * *(float *)(lVar12 + 0x10);
        }
        puVar2[uVar11] = fVar16;
        uVar11 = uVar1;
      } while (uVar5 - 2 != uVar1);
      *puVar2 = puVar2[2];
      puVar2[1] = puVar2[2];
      uVar4 = puVar2[uVar5 - 3];
      puVar2[uVar5 - 1] = uVar4;
      puVar2[(int)(uVar5 - 2)] = uVar4;
    }
  }
  lVar9 = lVar10 * 0x10 + arg1;
  FUN_015c35f0(arg1 + lVar10 * 0xc,lVar9,arg1 + lVar10 * 8,uVar5);
  if (0 < (int)uVar5) {
    uVar11 = 0;
    do {
      lVar10 = *(int64_t *)(*(int64_t *)(this_ptr[0x21] + 0x10) + uVar11 * 8);
      if (lVar12 == lVar10) {
        lVar10 = lVar12;
        bVar7 = bVar14;
        if ((!bVar14) && (lVar12 != 0)) {
          FUN_00d50b00();
          bVar7 = true;
        }
      }
      else {
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        bVar7 = true;
        if ((bVar14) && (lVar12 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar14 = bVar7;
      lVar12 = lVar10;
      *(void*)(lVar12 + 0x18) = *(void*)(lVar9 + uVar11 * 4);
      *(void*)(lVar12 + 0x1c) = puVar2[uVar11];
      uVar11 = uVar11 + 1;
    } while (uVar5 != uVar11);
  }
  FUN_014bd3c0(local_94);
  if (bVar6 || bVar15) {
    FUN_00e83070();
  }
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  if (param_1 == 0 && lVar13 != 0) {
    FUN_00d50b20();
  }
  if ((bVar14) && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  return;
}

