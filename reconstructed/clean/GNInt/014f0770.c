// Function: FUN_014f0770
// Address: 014f0770
// Size: 1139 bytes
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


void FUN_014f0770(uint64_t param_1,uint64_t param_2,uint32_t param_3,uint32_t param_4)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  bool bVar10;
  uint uVar11;
  int64_t lVar12;
  float *arg1;
  int64_t *this_ptr;
  uint64_t uVar13;
  int64_t lVar14;
  uint64_t uVar15;
  float fVar16;
  float fVar17;
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  float fVar20;
  float fVar21;
  char cVar22;
  uint64_t uVar23;
  
  uVar2 = *(uint *)(this_ptr[0x21] + 0xc);
  uVar15 = (uint64_t)uVar2;
  iVar5 = uVar2 * 2;
  bVar3 = (int)param_2 < iVar5;
  bVar10 = bVar3 || arg1 == (float *)0x0;
  if (bVar3 || arg1 == (float *)0x0) {
    arg1 = (float *)FUN_00e83010(CONCAT31((int3)((uint)iVar5 >> 8),bVar10),param_2,param_3,
                                      param_4,0);
  }
  fVar16 = (float)(**(code **)(*this_ptr + 0x3e0))();
  if (0 < (int)uVar2) {
    uVar13 = 0;
    lVar14 = 0;
    uVar23 = 0;
    do {
      cVar22 = (char)uVar23;
      lVar12 = *(int64_t *)(*(int64_t *)(this_ptr[0x21] + 0x10) + uVar13 * 8);
      if (lVar14 == lVar12) {
        if ((cVar22 == '\0') && (lVar14 != 0)) {
          uVar23 = 1;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar12 != 0) {
          FUN_00d50b00();
        }
        if ((cVar22 == '\0') || (lVar14 == 0)) {
          uVar23 = 1;
          lVar14 = lVar12;
        }
        else {
          FUN_00d50b20();
          uVar23 = 1;
          lVar14 = lVar12;
        }
      }
      cVar22 = (char)uVar23;
      arg1[uVar13] = *(float *)(lVar14 + 0x14);
      arg1[(int64_t)(int)uVar2 + uVar13] = *(float *)(lVar14 + 0x18);
      uVar13 = uVar13 + 1;
    } while (uVar15 != uVar13);
    fVar1 = *arg1;
    fVar21 = arg1[(int)uVar2];
    lVar12 = 0;
    fVar17 = fVar1 - fVar21;
    pfVar4 = arg1;
    do {
      pfVar9 = pfVar4 + 1;
      fVar20 = fVar1 - fVar21;
      if ((float)((uint)(fVar1 - fVar16) & g_02390140) < g_0241fd58) {
        uVar7 = (uint)lVar12;
        if ((float)((uint)fVar20 & g_02390140) < g_023908ec) {
          uVar11 = -uVar7;
        }
        else {
          if (((fVar17 < 0.0) || (0.0 <= fVar20)) && ((0.0 < fVar17 || (fVar20 <= 0.0))))
          goto LAB_014f094a;
          uVar11 = -uVar7;
          if ((int)uVar11 < (int)(uVar2 - 1)) {
            auVar19 = insertps(ZEXT416((uint)*pfVar9),ZEXT416((uint)fVar1),0x10);
            auVar18 = insertps(ZEXT416((uint)fVar1),pfVar4[-1],0x10);
            if ((float)((uint)(auVar19._4_4_ - auVar18._4_4_) & _UNK_02390144) <=
                (float)((uint)(auVar19._0_4_ - auVar18._0_4_) & g_02390140)) {
              uVar11 = ~uVar7;
            }
          }
          else {
            uVar11 = ~uVar7;
          }
        }
        iVar5 = FUN_014c2f20();
        iVar5 = iVar5 + uVar11;
        goto LAB_014f09e4;
      }
LAB_014f094a:
      if (1 - uVar15 == lVar12) goto LAB_014f096e;
      fVar1 = *pfVar9;
      fVar21 = pfVar9[(int)uVar2];
      lVar12 = lVar12 + -1;
      fVar17 = fVar20;
      pfVar4 = pfVar9;
    } while( true );
  }
  lVar14 = 0;
  cVar22 = '\0';
LAB_014f096e:
  iVar5 = FUN_014c2f20();
  iVar6 = FUN_014c2f80();
  iVar5 = (iVar6 + iVar5) / 2;
LAB_014f09e4:
  iVar6 = FUN_014c2f80();
  if (iVar6 <= iVar5) {
    iVar5 = FUN_014c2f80();
    iVar5 = iVar5 + -1;
  }
  iVar6 = FUN_014c2f20();
  if (iVar5 < iVar6) {
    iVar5 = FUN_014c2f20();
  }
  iVar6 = FUN_014c2f20();
  if ((iVar6 <= iVar5) && (iVar6 = FUN_014c2f80(), iVar5 <= iVar6)) {
    *(int *)((int64_t)this_ptr + 0x15c) = iVar5;
  }
  if (0 < (int)uVar2) {
    uVar7 = uVar2 - 1;
    uVar13 = (uint64_t)uVar7;
    fVar21 = arg1[(int)uVar7] - arg1[(int64_t)(int)uVar2 + (int64_t)(int)uVar7];
    do {
      fVar1 = arg1[uVar13];
      fVar17 = fVar1 - arg1[(int64_t)(int)uVar2 + uVar13];
      iVar5 = (int)uVar15;
      if ((float)((uint)(fVar1 - fVar16) & g_02390140) < g_0241fd58) {
        if ((float)((uint)fVar17 & g_02390140) < g_023908ec) {
          iVar5 = iVar5 + -1;
        }
        else {
          if (((fVar21 < 0.0) || (0.0 <= fVar17)) && ((0.0 < fVar21 || (fVar17 <= 0.0))))
          goto LAB_014f0a90;
          iVar6 = iVar5 + -1;
          if (0 < iVar6) {
            auVar18 = insertps(ZEXT416((uint)fVar1),arg1[uVar15],0x10);
            auVar19 = insertps(ZEXT416((uint)arg1[(int)uVar13 - 1]),ZEXT416((uint)fVar1),0x10);
            bVar3 = true;
            if ((float)((uint)(auVar18._0_4_ - auVar19._0_4_) & g_02390140) <
                (float)((uint)(auVar18._4_4_ - auVar19._4_4_) & _UNK_02390144)) goto LAB_014f0b3b;
          }
        }
        iVar6 = iVar5;
        bVar3 = true;
        goto LAB_014f0b3b;
      }
LAB_014f0a90:
      uVar15 = (uint64_t)(iVar5 - 1);
      bVar3 = 0 < (int64_t)uVar13;
      uVar13 = uVar13 - 1;
      fVar21 = fVar17;
    } while (bVar3);
  }
  bVar3 = false;
  iVar6 = 0;
LAB_014f0b3b:
  iVar5 = FUN_014c2f20();
  if (bVar3) {
    iVar8 = *(int *)((int64_t)this_ptr + 0x15c);
    if (iVar8 == -1) {
      iVar8 = FUN_014c2f20();
    }
    iVar5 = iVar5 + iVar6;
    if (iVar8 < iVar5) goto LAB_014f0b8c;
  }
  iVar5 = *(int *)((int64_t)this_ptr + 0x15c);
  if (iVar5 == -1) {
    iVar5 = FUN_014c2f20();
  }
  iVar5 = iVar5 + 1;
LAB_014f0b8c:
  iVar6 = FUN_014c2f80();
  if (iVar6 < iVar5) {
    iVar5 = FUN_014c2f80();
  }
  iVar6 = FUN_014c2f20();
  if ((iVar6 <= iVar5) && (iVar6 = FUN_014c2f80(), iVar5 <= iVar6)) {
    *(int *)(this_ptr + 0x2c) = iVar5;
  }
  if (bVar10) {
    FUN_00e83070();
  }
  if ((cVar22 != '\0') && (lVar14 != 0)) {
    FUN_00d50b20();
  }
  return;
}

