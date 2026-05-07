// Function: FUN_00fc6310
// Address: 00fc6310
// Size: 3424 bytes
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


void FUN_00fc6310(void)

{
  uint uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int64_t lVar14;
  uint64_t uVar15;
  int64_t lVar16;
  uint64_t uVar17;
  int64_t lVar18;
  int64_t lVar19;
  int64_t lVar20;
  int64_t lVar21;
  uint64_t uVar22;
  uint3 *this_ptr;
  int64_t lVar23;
  uint64_t uVar24;
  int64_t lVar25;
  uint64_t uVar26;
  int64_t lVar27;
  uint64_t uVar28;
  uint64_t uVar29;
  int64_t lVar30;
  int64_t lVar31;
  uint64_t uVar32;
  int64_t lVar33;
  int64_t lVar34;
  int64_t lVar35;
  int64_t lVar36;
  int64_t lVar37;
  int64_t lVar38;
  int64_t lVar39;
  uint64_t uVar40;
  int64_t lVar41;
  
  uVar17 = (uint64_t)((uint6)*(uint3 *)((int64_t)this_ptr + 0x2a) & 0x1fffff);
  uVar22 = (uint64_t)(*(uint *)((int64_t)this_ptr + 0x39) >> 6 & 0x1fffff);
  uVar4 = (uint64_t)(*(uint3 *)((int64_t)this_ptr + 0x37) >> 1 & 0x1fffff);
  lVar6 = uVar4 * -0xa6f7d + (uint64_t)(*(uint *)(this_ptr + 9) >> 6 & 0x1fffff) +
          uVar22 * 0x215d1;
  uVar32 = (uint64_t)(*(uint *)(this_ptr + 0xd) >> 4 & 0x1fffff);
  uVar12 = (uint64_t)(*(uint *)((int64_t)this_ptr + 0x31) >> 7 & 0x1fffff);
  lVar18 = uVar12 * -0xa6f7d + (uint64_t)(*(uint *)((int64_t)this_ptr + 0x1f) >> 4 & 0x1fffff) +
           uVar32 * 0x215d1 + uVar4 * -0xf39ad + uVar22 * 0x9fb67;
  uVar29 = (uint64_t)(*(uint3 *)((int64_t)this_ptr + 0x2f) >> 2 & 0x1fffff);
  lVar10 = uVar29 * 0x9fb67 + (uint64_t)((uint6)*(uint3 *)((int64_t)this_ptr + 0x15) & 0x1fffff)
           + uVar12 * 0x72d18;
  lVar2 = uVar29 * 0x215d1 + (uint64_t)(*(uint3 *)((int64_t)this_ptr + 0x1a) >> 2 & 0x1fffff) +
          uVar12 * -0xf39ad + uVar32 * 0x9fb67 + uVar4 * 0x72d18;
  uVar15 = (uint64_t)(*(uint *)((int64_t)this_ptr + 0xf) >> 6 & 0x1fffff);
  uVar26 = uVar29 * 0xa2c13 + uVar15 + 0x100000;
  lVar23 = (uVar26 >> 0x15) +
           uVar29 * 0x72d18 + (uint64_t)(*(uint3 *)((int64_t)this_ptr + 0x12) >> 3);
  uVar40 = uVar32 * 0xa2c13 + lVar10 + 0x100000;
  lVar37 = uVar29 * -0xf39ad + (uint64_t)(*(uint *)((int64_t)this_ptr + 0x17) >> 5 & 0x1fffff) +
           uVar12 * 0x9fb67 + uVar32 * 0x72d18 + uVar4 * 0xa2c13;
  uVar11 = uVar22 * 0xa2c13 + lVar2 + 0x100000;
  uVar28 = (uint64_t)(*(uint *)(this_ptr + 0xf) >> 3);
  lVar30 = uVar29 * -0xa6f7d + (uint64_t)(*(uint *)(this_ptr + 7) >> 7 & 0x1fffff) +
           uVar12 * 0x215d1 + uVar32 * -0xf39ad + uVar4 * 0x9fb67 + uVar22 * 0x72d18 +
           uVar28 * 0xa2c13;
  uVar3 = uVar28 * 0x72d18 + lVar18 + 0x100000;
  lVar33 = uVar32 * -0xa6f7d + (uint64_t)(*(uint3 *)((int64_t)this_ptr + 0x22) >> 1 & 0x1fffff) +
           uVar4 * 0x215d1 + uVar22 * -0xf39ad + uVar28 * 0x9fb67;
  uVar4 = uVar28 * -0xf39ad + lVar6 + 0x100000;
  lVar8 = uVar22 * -0xa6f7d + (uint64_t)(*(uint3 *)((int64_t)this_ptr + 0x27) >> 3) +
          uVar28 * 0x215d1;
  uVar5 = uVar28 * -0xa6f7d + uVar17 + 0x100000;
  lVar27 = ((int64_t)uVar5 >> 0x15) + (uint64_t)(*(uint *)(this_ptr + 0xb) >> 5 & 0x1fffff);
  uVar7 = uVar12 * 0xa2c13 + lVar23 + 0x100000;
  uVar13 = uVar40 >> 0x15;
  uVar24 = uVar13 + lVar37 + 0x100000;
  lVar2 = (((int64_t)uVar24 >> 0x15) + lVar2 + uVar22 * 0xa2c13) - (uVar11 & 0xffffffffffe00000);
  lVar14 = (int64_t)uVar11 >> 0x15;
  uVar11 = lVar14 + lVar30 + 0x100000;
  lVar31 = ((int64_t)uVar11 >> 0x15) + ((lVar18 + uVar28 * 0x72d18) - (uVar3 & 0xffffffffffe00000))
  ;
  lVar19 = (lVar30 + lVar14) - (uVar11 & 0xffffffffffe00000);
  lVar14 = (int64_t)uVar3 >> 0x15;
  uVar3 = lVar33 + lVar14 + 0x100000;
  lVar18 = ((int64_t)uVar3 >> 0x15) + ((lVar6 + uVar28 * -0xf39ad) - (uVar4 & 0xffffffffffe00000));
  lVar6 = (lVar33 + lVar14) - (uVar3 & 0xffffffffffe00000);
  lVar33 = (int64_t)uVar4 >> 0x15;
  uVar3 = lVar33 + lVar8 + 0x100000;
  lVar14 = ((int64_t)uVar3 >> 0x15) + ((uVar28 * -0xa6f7d + uVar17) - (uVar5 & 0xffffffffffe00000))
  ;
  lVar35 = (lVar8 + lVar33) - (uVar3 & 0xffffffffffe00000);
  lVar8 = lVar14 * -0xa6f7d + lVar27 * 0x215d1 + ((lVar37 + uVar13) - (uVar24 & 0xffffffffffe00000))
  ;
  lVar20 = lVar14 * 0x215d1 +
           lVar27 * -0xf39ad +
           (((uVar7 >> 0x15) + lVar10 + uVar32 * 0xa2c13) - (uVar40 & 0xffffffffffe00000));
  lVar34 = lVar18 * 0x215d1 +
           lVar35 * -0xf39ad +
           lVar14 * 0x9fb67 +
           lVar27 * 0x72d18 + ((uVar29 * 0xa2c13 + uVar15) - (uVar26 & 0xffffffffffe00000));
  lVar33 = lVar18 * -0xa6f7d +
           lVar35 * 0x215d1 +
           lVar14 * -0xf39ad +
           lVar27 * 0x9fb67 + ((lVar23 + uVar12 * 0xa2c13) - (uVar7 & 0xffffffffffe00000));
  lVar30 = lVar31 * 0x9fb67 + (uint64_t)(*(uint3 *)((int64_t)this_ptr + 5) >> 2 & 0x1fffff) +
           lVar18 * 0xa2c13;
  lVar10 = lVar31 * 0x215d1 +
           lVar35 * 0x72d18 +
           lVar14 * 0xa2c13 + (uint64_t)(*(uint *)((int64_t)this_ptr + 10) >> 4 & 0x1fffff) +
           lVar18 * 0x9fb67;
  uVar12 = lVar31 * 0xa2c13 + (uint64_t)((uint6)*this_ptr & 0x1fffff) + 0x100000;
  lVar41 = lVar31 * 0x72d18 + (uint64_t)(*(uint *)((int64_t)this_ptr + 2) >> 5 & 0x1fffff) +
           lVar6 * 0xa2c13;
  uVar3 = lVar6 * 0x72d18 + lVar30 + 0x100000;
  lVar36 = lVar31 * -0xf39ad +
           lVar35 * 0xa2c13 + (uint64_t)(*(uint *)((int64_t)this_ptr + 7) >> 7 & 0x1fffff) +
           lVar18 * 0x72d18 + lVar6 * 0x9fb67;
  uVar4 = lVar6 * -0xf39ad + lVar10 + 0x100000;
  lVar21 = lVar31 * -0xa6f7d +
           lVar35 * 0x9fb67 +
           lVar14 * 0x72d18 +
           lVar27 * 0xa2c13 + (uint64_t)(*(uint3 *)((int64_t)this_ptr + 0xd) >> 1 & 0x1fffff) +
           lVar18 * -0xf39ad + lVar6 * 0x215d1;
  uVar13 = lVar6 * -0xa6f7d + lVar34 + 0x100000;
  uVar17 = lVar20 + lVar35 * -0xa6f7d + 0x100000;
  uVar15 = lVar2 + lVar27 * -0xa6f7d + 0x100000;
  lVar25 = (int64_t)uVar12 >> 0x15;
  uVar24 = lVar25 + lVar41 + 0x100000;
  lVar37 = (int64_t)uVar3 >> 0x15;
  uVar29 = lVar37 + lVar36 + 0x100000;
  lVar16 = (int64_t)uVar4 >> 0x15;
  uVar22 = lVar21 + lVar16 + 0x100000;
  lVar14 = (int64_t)uVar13 >> 0x15;
  uVar5 = lVar14 + lVar33 + 0x100000;
  lVar18 = (int64_t)uVar17 >> 0x15;
  uVar7 = lVar18 + lVar8 + 0x100000;
  lVar38 = (int64_t)uVar15 >> 0x15;
  uVar11 = lVar19 + lVar38 + 0x100000;
  lVar23 = (int64_t)uVar11 >> 0x15;
  lVar39 = lVar23 * 0xa2c13 +
           ((lVar31 * 0xa2c13 + (uint64_t)((uint6)*this_ptr & 0x1fffff)) -
           (uVar12 & 0xffffffffffe00000));
  lVar25 = (lVar39 >> 0x15) + ((lVar23 * 0x72d18 + lVar41 + lVar25) - (uVar24 & 0xffffffffffe00000))
  ;
  lVar30 = (lVar25 >> 0x15) +
           ((lVar23 * 0x9fb67 + lVar30 + lVar6 * 0x72d18) - (uVar3 & 0xffffffffffe00000)) +
           ((int64_t)uVar24 >> 0x15);
  lVar31 = (lVar30 >> 0x15) +
           ((lVar23 * -0xf39ad + lVar37 + lVar36) - (uVar29 & 0xffffffffffe00000));
  lVar37 = (lVar31 >> 0x15) +
           ((lVar23 * 0x215d1 + lVar10 + lVar6 * -0xf39ad) - (uVar4 & 0xffffffffffe00000)) +
           ((int64_t)uVar29 >> 0x15);
  lVar10 = (lVar37 >> 0x15) +
           ((lVar23 * -0xa6f7d + lVar21 + lVar16) - (uVar22 & 0xffffffffffe00000));
  lVar6 = (lVar10 >> 0x15) +
          ((int64_t)uVar22 >> 0x15) + ((lVar34 + lVar6 * -0xa6f7d) - (uVar13 & 0xffffffffffe00000))
  ;
  lVar14 = (lVar6 >> 0x15) + ((lVar33 + lVar14) - (uVar5 & 0xffffffffffe00000));
  lVar23 = (lVar14 >> 0x15) +
           ((int64_t)uVar5 >> 0x15) +
           ((lVar20 + lVar35 * -0xa6f7d) - (uVar17 & 0xffffffffffe00000));
  lVar16 = (lVar23 >> 0x15) + ((lVar8 + lVar18) - (uVar7 & 0xffffffffffe00000));
  lVar18 = (lVar16 >> 0x15) +
           ((int64_t)uVar7 >> 0x15) + ((lVar2 + lVar27 * -0xa6f7d) - (uVar15 & 0xffffffffffe00000))
  ;
  lVar2 = (lVar18 >> 0x15) + ((lVar19 + lVar38) - (uVar11 & 0xffffffffffe00000));
  lVar8 = lVar2 >> 0x15;
  lVar33 = lVar8 * 0xa2c13 + (uint64_t)((uint)lVar39 & 0x1fffff);
  uVar3 = (lVar33 >> 0x15) + lVar8 * 0x72d18 + (uint64_t)((uint)lVar25 & 0x1fffff);
  uVar4 = ((int64_t)uVar3 >> 0x15) + lVar8 * 0x9fb67 + (uint64_t)((uint)lVar30 & 0x1fffff);
  uVar7 = ((int64_t)uVar4 >> 0x15) + lVar8 * -0xf39ad + (uint64_t)((uint)lVar31 & 0x1fffff);
  uVar17 = ((int64_t)uVar7 >> 0x15) + lVar8 * 0x215d1 + (uint64_t)((uint)lVar37 & 0x1fffff);
  uVar5 = ((int64_t)uVar17 >> 0x15) + lVar8 * -0xa6f7d + (uint64_t)((uint)lVar10 & 0x1fffff);
  uVar13 = ((int64_t)uVar5 >> 0x15) + (uint64_t)((uint)lVar6 & 0x1fffff);
  uVar12 = ((int64_t)uVar13 >> 0x15) + (uint64_t)((uint)lVar14 & 0x1fffff);
  lVar8 = ((int64_t)uVar12 >> 0x15) + (uint64_t)((uint)lVar23 & 0x1fffff);
  uVar11 = (lVar8 >> 0x15) + (uint64_t)((uint)lVar16 & 0x1fffff);
  uVar15 = ((int64_t)uVar11 >> 0x15) + (uint64_t)((uint)lVar18 & 0x1fffff);
  uVar22 = ((int64_t)uVar15 >> 0x15) + (uint64_t)((uint)lVar2 & 0x1fffff);
  uVar9 = (uint)uVar3 & 0x1fffff;
  *(char *)this_ptr = (char)lVar33;
  *(char *)((int64_t)this_ptr + 1) = (char)((uint64_t)lVar33 >> 8);
  *(byte *)((int64_t)this_ptr + 2) = (byte)(uVar9 << 5) | (byte)((uint64_t)lVar33 >> 0x10) & 0x1f
  ;
  *(char *)((int64_t)this_ptr + 3) = (char)(uVar3 >> 3);
  *(char *)(this_ptr + 1) = (char)(uVar3 >> 0xb);
  uVar1 = (uint)uVar4 & 0x1fffff;
  *(char *)((int64_t)this_ptr + 5) = (char)(uVar9 >> 0x13) + (char)uVar1 * '\x04';
  uVar9 = (uint)uVar7 & 0x1fffff;
  *(char *)((int64_t)this_ptr + 6) = (char)(uVar4 >> 6);
  *(byte *)((int64_t)this_ptr + 7) = (byte)(uVar1 >> 0xe) | (byte)(uVar9 << 7);
  *(char *)(this_ptr + 2) = (char)(uVar7 >> 1);
  uVar1 = (uint)uVar17 & 0x1fffff;
  *(char *)((int64_t)this_ptr + 9) = (char)(uVar7 >> 9);
  *(byte *)((int64_t)this_ptr + 10) = (byte)(uVar9 >> 0x11) | (byte)(uVar1 << 4);
  *(char *)((int64_t)this_ptr + 0xb) = (char)(uVar17 >> 4);
  *(char *)(this_ptr + 3) = (char)(uVar17 >> 0xc);
  uVar9 = (uint)uVar5 & 0x1fffff;
  *(char *)((int64_t)this_ptr + 0xd) = (char)(uVar1 >> 0x14) + (char)uVar9 * '\x02';
  uVar1 = (uint)uVar13 & 0x1fffff;
  *(char *)((int64_t)this_ptr + 0xe) = (char)(uVar5 >> 7);
  *(byte *)((int64_t)this_ptr + 0xf) = (byte)(uVar9 >> 0xf) | (byte)(uVar1 << 6);
  *(char *)(this_ptr + 4) = (char)(uVar13 >> 2);
  *(char *)((int64_t)this_ptr + 0x11) = (char)(uVar13 >> 10);
  *(char *)((int64_t)this_ptr + 0x12) = (char)(uVar1 >> 0x12) + (char)uVar12 * '\b';
  *(char *)((int64_t)this_ptr + 0x13) = (char)(uVar12 >> 5);
  uVar1 = (uint)uVar11 & 0x1fffff;
  *(char *)(this_ptr + 5) = (char)(uVar12 >> 0xd);
  *(char *)((int64_t)this_ptr + 0x15) = (char)lVar8;
  *(char *)((int64_t)this_ptr + 0x16) = (char)((uint64_t)lVar8 >> 8);
  *(byte *)((int64_t)this_ptr + 0x17) =
       (byte)(uVar1 << 5) | (byte)((uint64_t)lVar8 >> 0x10) & 0x1f;
  *(char *)(this_ptr + 6) = (char)(uVar11 >> 3);
  *(char *)((int64_t)this_ptr + 0x19) = (char)(uVar11 >> 0xb);
  uVar9 = (uint)uVar15 & 0x1fffff;
  *(char *)((int64_t)this_ptr + 0x1a) = (char)(uVar1 >> 0x13) + (char)uVar9 * '\x04';
  *(char *)((int64_t)this_ptr + 0x1b) = (char)(uVar15 >> 6);
  *(byte *)(this_ptr + 7) = (byte)(uVar9 >> 0xe) | (byte)((int)uVar22 << 7);
  *(char *)((int64_t)this_ptr + 0x1d) = (char)(uVar22 >> 1);
  *(char *)((int64_t)this_ptr + 0x1e) = (char)(uVar22 >> 9);
  *(char *)((int64_t)this_ptr + 0x1f) = (char)(uVar22 >> 0x11);
  return;
}

