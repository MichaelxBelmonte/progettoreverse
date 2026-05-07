// Function: FUN_00f439b0
// Address: 00f439b0
// Size: 1068 bytes
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


void FUN_00f439b0(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int64_t *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint8_t auVar9 [16];
  int iVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t uVar13;
  byte bVar14;
  uint uVar15;
  int64_t lVar16;
  short sVar17;
  uint uVar18;
  int64_t *this_ptr;
  uint uVar19;
  uint64_t uVar20;
  uint uVar21;
  void *pvVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  bool bVar25;
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  
  uVar3 = *(uint *)(this_ptr + 10);
  uVar21 = *(uint *)((int64_t)this_ptr + 0xb4);
  pvVar22 = (void *)(uint64_t)(uVar3 - 0x106);
  uVar20 = (uint64_t)uVar3;
  do {
    uVar19 = *(uint *)((int64_t)this_ptr + 0xac);
    uVar21 = (int)this_ptr[0xd] - (uVar21 + uVar19);
    if ((int)uVar20 + (uVar3 - 0x106) <= uVar19) {
      _memcpy(pvVar22,(void *)(uint64_t)(uVar3 - uVar21),(size_t)param_3);
      *(uint *)(this_ptr + 0x16) = (int)this_ptr[0x16] - uVar3;
      uVar19 = *(int *)((int64_t)this_ptr + 0xac) - uVar3;
      *(uint *)((int64_t)this_ptr + 0xac) = uVar19;
      this_ptr[0x13] = this_ptr[0x13] - (uint64_t)uVar3;
      if (uVar19 < *(uint *)((int64_t)this_ptr + 0x172c)) {
        *(uint *)((int64_t)this_ptr + 0x172c) = uVar19;
      }
      auVar9 = g_023e75a0;
      uVar8 = _UNK_023e759c;
      uVar7 = _UNK_023e7598;
      uVar6 = _UNK_023e7594;
      uVar5 = g_023e7590;
      uVar15 = *(uint *)(this_ptr + 10);
      uVar18 = *(uint *)((int64_t)this_ptr + 0x84);
      uVar20 = (uint64_t)uVar18;
      lVar12 = this_ptr[0xf] + uVar20 * 2;
      if (uVar18 - 1 < 0xf) {
LAB_00f43aff:
        lVar11 = 0;
        do {
          uVar2 = *(ushort *)(lVar12 + -2 + lVar11 * 2);
          sVar17 = uVar2 - (short)uVar15;
          if (uVar2 < uVar15) {
            sVar17 = 0;
          }
          *(short *)(lVar12 + -2 + lVar11 * 2) = sVar17;
          lVar11 = lVar11 + -1;
        } while (-uVar18 != (int)lVar11);
      }
      else {
        uVar24 = (uint64_t)(uVar18 - 1) + 1;
        param_3 = uVar24 & 0x1fffffff0;
        lVar12 = lVar12 + param_3 * -2;
        uVar18 = uVar18 - (int)param_3;
        lVar11 = this_ptr[0xf] + uVar20 * 2;
        lVar16 = 0;
        do {
          auVar26._0_4_ = (uVar5 < uVar15) * uVar5 | (uVar5 >= uVar15) * uVar15;
          auVar26._4_4_ = (uVar6 < uVar15) * uVar6 | (uVar6 >= uVar15) * uVar15;
          auVar26._8_4_ = (uVar7 < uVar15) * uVar7 | (uVar7 >= uVar15) * uVar15;
          auVar26._12_4_ = (uVar8 < uVar15) * uVar8 | (uVar8 >= uVar15) * uVar15;
          auVar26 = packusdw(auVar26,auVar26);
          auVar27 = pshufb(auVar26,auVar9);
          auVar26 = psubusw(*(uint8_t (*) [16])(lVar11 + -0x10 + lVar16 * 2),auVar27);
          *(uint8_t (*) [16])(lVar11 + -0x10 + lVar16 * 2) = auVar26;
          auVar26 = psubusw(*(uint8_t (*) [16])(lVar11 + -0x20 + lVar16 * 2),auVar27);
          *(uint8_t (*) [16])(lVar11 + -0x20 + lVar16 * 2) = auVar26;
          lVar16 = lVar16 + -0x10;
        } while (-lVar16 != (uVar24 & 0xfffffffffffffff0));
        if (uVar24 != param_3) goto LAB_00f43aff;
      }
      lVar12 = this_ptr[0xe] + (uint64_t)uVar15 * 2;
      uVar18 = uVar15;
      if (uVar15 - 1 < 0xf) {
LAB_00f43bcf:
        lVar11 = 0;
        do {
          uVar2 = *(ushort *)(lVar12 + -2 + lVar11 * 2);
          sVar17 = uVar2 - (short)uVar15;
          if (uVar2 < uVar15) {
            sVar17 = 0;
          }
          *(short *)(lVar12 + -2 + lVar11 * 2) = sVar17;
          lVar11 = lVar11 + -1;
        } while (-uVar18 != (int)lVar11);
      }
      else {
        uVar20 = (uint64_t)(uVar15 - 1) + 1;
        param_3 = uVar20 & 0x1fffffff0;
        lVar12 = lVar12 + param_3 * -2;
        lVar11 = this_ptr[0xe] + (uint64_t)uVar15 * 2;
        lVar16 = 0;
        do {
          auVar27._0_4_ = (uVar5 < uVar15) * uVar5 | (uVar5 >= uVar15) * uVar15;
          auVar27._4_4_ = (uVar6 < uVar15) * uVar6 | (uVar6 >= uVar15) * uVar15;
          auVar27._8_4_ = (uVar7 < uVar15) * uVar7 | (uVar7 >= uVar15) * uVar15;
          auVar27._12_4_ = (uVar8 < uVar15) * uVar8 | (uVar8 >= uVar15) * uVar15;
          auVar26 = packusdw(auVar27,auVar27);
          auVar27 = pshufb(auVar26,auVar9);
          auVar26 = psubusw(*(uint8_t (*) [16])(lVar11 + -0x10 + lVar16 * 2),auVar27);
          *(uint8_t (*) [16])(lVar11 + -0x10 + lVar16 * 2) = auVar26;
          auVar26 = psubusw(*(uint8_t (*) [16])(lVar11 + -0x20 + lVar16 * 2),auVar27);
          *(uint8_t (*) [16])(lVar11 + -0x20 + lVar16 * 2) = auVar26;
          lVar16 = lVar16 + -0x10;
        } while (-lVar16 != (uVar20 & 0xfffffffffffffff0));
        uVar18 = uVar15 - (int)param_3;
        if (uVar20 != param_3) goto LAB_00f43bcf;
      }
      uVar21 = uVar21 + uVar3;
    }
    plVar4 = (int64_t *)*this_ptr;
    uVar15 = *(uint *)(plVar4 + 1);
    if (uVar15 == 0) {
LAB_00f43d67:
      uVar20 = this_ptr[0x2e7];
      uVar24 = this_ptr[0xd];
      uVar13 = uVar24 - uVar20;
      if (uVar20 <= uVar24 && uVar13 != 0) {
        uVar23 = (uint64_t)*(uint *)((int64_t)this_ptr + 0xb4) +
                 (uint64_t)*(uint *)((int64_t)this_ptr + 0xac);
        if (uVar20 < uVar23) {
          uVar20 = 0x102;
          if (uVar24 - uVar23 < 0x102) {
            uVar20 = uVar24 - uVar23;
          }
          ___bzero();
          lVar12 = uVar20 + uVar23;
        }
        else {
          uVar24 = (uVar23 + 0x102) - uVar20;
          if (uVar23 + 0x102 < uVar20 || uVar24 == 0) {
            return;
          }
          if (uVar13 < uVar24) {
            uVar24 = uVar13;
          }
          ___bzero();
          lVar12 = uVar24 + this_ptr[0x2e7];
        }
        this_ptr[0x2e7] = lVar12;
      }
      return;
    }
    iVar10 = *(int *)((int64_t)this_ptr + 0xb4);
    if (uVar15 <= uVar21) {
      uVar21 = uVar15;
    }
    pvVar22 = (void *)(uint64_t)uVar21;
    if (uVar21 != 0) {
      *(uint *)(plVar4 + 1) = uVar15 - uVar21;
      _memcpy((void *)(uint64_t)uVar19,pvVar22,(size_t)param_3);
      if (*(int *)(plVar4[7] + 0x30) == 2) {
        lVar12 = FUN_00f43510();
LAB_00f43c7e:
        plVar4[0xc] = lVar12;
      }
      else if (*(int *)(plVar4[7] + 0x30) == 1) {
        lVar12 = FUN_00f42bd0();
        goto LAB_00f43c7e;
      }
      *plVar4 = *plVar4 + (int64_t)pvVar22;
      plVar4[2] = plVar4[2] + (int64_t)pvVar22;
      iVar10 = *(int *)((int64_t)this_ptr + 0xb4);
    }
    uVar21 = iVar10 + uVar21;
    *(uint *)((int64_t)this_ptr + 0xb4) = uVar21;
    iVar10 = *(int *)((int64_t)this_ptr + 0x172c);
    pvVar22 = (void *)(uint64_t)(iVar10 + uVar21);
    if (2 < iVar10 + uVar21) {
      uVar15 = *(int *)((int64_t)this_ptr + 0xac) - iVar10;
      uVar20 = (uint64_t)uVar15;
      param_3 = this_ptr[0xc];
      bVar1 = *(byte *)(param_3 + uVar20);
      *(uint *)(this_ptr + 0x10) = (uint)bVar1;
      pvVar22 = (void *)(uint64_t)*(uint *)(this_ptr + 0x12);
      bVar14 = (byte)*(uint *)(this_ptr + 0x12);
      uVar19 = *(uint *)((int64_t)this_ptr + 0x8c);
      uVar15 = uVar19 & ((uint)*(byte *)(param_3 + (uVar15 + 1)) ^ (uint)bVar1 << (bVar14 & 0x1f));
      uVar24 = (uint64_t)uVar15;
      *(uint *)(this_ptr + 0x10) = uVar15;
      do {
        bVar25 = iVar10 == 0;
        iVar10 = iVar10 + -1;
        if (bVar25) break;
        uVar15 = (uint)uVar20;
        uVar18 = uVar19 & ((uint)*(byte *)(param_3 + (uVar15 + 2)) ^ (int)uVar24 << (bVar14 & 0x1f))
        ;
        uVar24 = (uint64_t)uVar18;
        *(uint *)(this_ptr + 0x10) = uVar18;
        lVar12 = this_ptr[0xf];
        *(void*)(this_ptr[0xe] + (uint64_t)(*(uint *)(this_ptr + 0xb) & uVar15) * 2) =
             *(void*)(lVar12 + uVar24 * 2);
        *(short *)(lVar12 + uVar24 * 2) = (short)uVar20;
        uVar20 = (uint64_t)(uVar15 + 1);
        *(int *)((int64_t)this_ptr + 0x172c) = iVar10;
      } while (2 < uVar21 + iVar10);
    }
    if ((0x105 < uVar21) || (*(int *)(*this_ptr + 8) == 0)) goto LAB_00f43d67;
    uVar20 = (uint64_t)*(uint *)(this_ptr + 10);
  } while( true );
}

