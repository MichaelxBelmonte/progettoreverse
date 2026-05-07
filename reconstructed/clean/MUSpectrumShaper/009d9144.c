// Function: FUN_009d9144
// Address: 009d9144
// Size: 726 bytes
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


uint64_t FUN_009d9144(void)

{
  byte bVar1;
  uint32_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  void*puVar15;
  byte *pbVar16;
  void**ppuVar17;
  void*puVar18;
  byte *pbVar19;
  uint64_t uVar20;
  undefined7 uVar21;
  int64_t *this_ptr;
  int64_t *plVar22;
  byte *pbVar23;
  uint uVar24;
  byte bVar25;
  byte *pbStack_f8;
  void*puStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  int64_t lStack_d8;
  int64_t lStack_d0;
  uint64_t uStack_c8;
  ushort uStack_c0;
  uint64_t uStack_bc;
  uint8_t uStack_b4;
  void*puStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  
  pbVar19 = (byte *)(this_ptr[0x11] + 1);
  this_ptr[0x11] = (int64_t)pbVar19;
  if (pbVar19 == (byte *)this_ptr[0x10]) {
LAB_009d936f:
    FUN_009d86be();
    return 0;
  }
  uVar8 = *(uint *)(*this_ptr + 0x28);
  if (((uVar8 & 0x203) == 0) || ((uVar8 & 0x1003) == 0x1001)) {
    cVar6 = *(char *)(*(int64_t *)this_ptr[1] + 0x20 + (uint64_t)*pbVar19);
    if (cVar6 == '\x06') {
      uVar10 = FUN_009dc470();
      return uVar10;
    }
    if (cVar6 == '\b') {
      uVar10 = FUN_009dada4();
      return uVar10;
    }
  }
  uVar10 = 0;
  if ((uVar8 >> 0x16 & 1) == 0) {
    uVar24 = (int)this_ptr[0x12] + 1;
    uVar10 = (uint64_t)uVar24;
    *(uint *)(this_ptr + 0x12) = uVar24;
    if ((uVar8 >> 0x17 & 1) != 0) {
      FUN_009dc95a();
    }
  }
  lVar11 = FUN_009d8a9c();
  iVar9 = (int)uVar10;
  *(int *)(lVar11 + 0x10) = iVar9;
  lVar13 = *this_ptr;
  uVar8 = *(uint *)(lVar13 + 0x28);
  bVar25 = (byte)(uVar8 >> 0x14) & 1;
  *(byte *)(lVar11 + 0x14) = bVar25;
  lVar14 = *(int64_t *)(lVar13 + 0x160);
  lVar3 = this_ptr[0x15];
  uVar20 = (*(int64_t *)(lVar13 + 0x168) - lVar14) + 7U & 0xfffffffffffffff8;
  *(uint64_t *)(lVar13 + 0x168) = lVar14 + uVar20;
  this_ptr[0x15] = uVar20;
  lVar13 = this_ptr[0x16];
  *(void*)(this_ptr + 0x16) = 0;
  uVar2 = *(void*)((int64_t)this_ptr + 0x94);
  *(void*)((int64_t)this_ptr + 0x94) = 0xffffffff;
  FUN_009d8d70();
  cVar6 = FUN_009d8e36();
  if (cVar6 == '\0') {
    return 0;
  }
  if ((char)this_ptr[0x16] != '\0') {
    lVar12 = FUN_009d8a9c();
    *(byte *)(lVar12 + 0x10) = bVar25;
  }
  lVar12 = *this_ptr;
  *(uint *)(lVar12 + 0x28) = uVar8;
  uVar24 = uVar8 >> 0x14 & 1;
  if (uVar24 != *(byte *)(this_ptr + 3)) {
    *(char *)(this_ptr + 3) = (char)uVar24;
  }
  *(char *)(this_ptr + 0x16) = (char)lVar13;
  *(void*)((int64_t)this_ptr + 0x94) = uVar2;
  pbVar19 = (byte *)this_ptr[0x11];
  if (pbVar19 == (byte *)this_ptr[0x10]) goto LAB_009d936f;
  uVar20 = (uint64_t)*pbVar19;
  if (*(char *)(*(int64_t *)this_ptr[1] + 0x20 + uVar20) != '\x02') {
    return 0;
  }
  if ((iVar9 == 0) || ((uVar8 & 0x800000) == 0)) {
LAB_009d93af:
    this_ptr[0x11] = (int64_t)(pbVar19 + 1);
    lVar13 = FUN_009d8a9c(uVar20,0x18);
    *(int *)(lVar13 + 0x10) = iVar9;
    *(byte *)(lVar13 + 0x14) = (byte)(*(uint *)(*this_ptr + 0x28) >> 0x14) & 1;
    this_ptr[0x14] = lVar11 - lVar14;
    this_ptr[0x15] = lVar3;
    if (iVar9 - 1U < 0x1f) {
      *(uint *)((int64_t)this_ptr + 0x24) =
           *(uint *)((int64_t)this_ptr + 0x24) | 1 << ((byte)(iVar9 - 1U) & 0x1f);
    }
    return CONCAT71((int7)(uVar10 >> 8),1);
  }
  if ((uint64_t)(iVar9 - 1) <
      (uint64_t)(*(int64_t *)(lVar12 + 0x180) - *(int64_t *)(lVar12 + 0x178) >> 4)) {
    uVar20 = (int64_t)pbVar19 - this_ptr[0xf];
    *(uint64_t *)(*(int64_t *)(lVar12 + 0x178) + 8 + (uint64_t)(iVar9 - 1) * 0x10) = uVar20;
    goto LAB_009d93af;
  }
  plVar22 = (int64_t *)(lVar12 + 0x178);
  std::__vector_base_common<true>::__throw_out_of_range();
  pbVar16 = *(byte **)(lVar12 + 0x1f8);
  lVar13 = *(int64_t *)(lVar12 + 0x200);
  pbVar19 = (byte *)(lVar13 + 1);
  *(byte **)(lVar12 + 0x200) = pbVar19;
  if (pbVar19 == pbVar16) {
    lVar13 = *(int64_t *)(lVar12 + 0x1f0);
    ppuVar17 = &puStack_f0;
    FUN_009d5ed0();
    FUN_009d8cfc(ppuVar17,(int64_t)pbVar19 - lVar13);
    goto LAB_009d94bd;
  }
  lVar14 = **(int64_t **)(lVar12 + 0x180);
  cVar6 = *(char *)(lVar14 + 0x20 + (uint64_t)*pbVar19);
  bVar25 = cVar6 - 0x11;
  if (0x2a < bVar25) goto switchD_009d947b_caseD_1a;
  bVar1 = 0;
  uVar8 = (&switchD_009d947b::switchdataD_009d9d8c)[bVar25];
  uVar21 = (undefined7)((uint64_t)pbVar19 >> 8);
  switch(cVar6) {
  case '\x11':
    uVar10 = FUN_009dd9d0();
    return uVar10;
  case '\x12':
    *(int64_t *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '\x13':
    *(int64_t *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '\x14':
    *(int64_t *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '\x15':
    *(int64_t *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '\x16':
    goto switchD_009d947b_caseD_16;
  case '\x17':
    bVar1 = 1;
    goto switchD_009d947b_caseD_16;
  case '\x18':
    *(int64_t *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '\x19':
    *(int64_t *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  default:
    goto switchD_009d947b_caseD_1a;
  case '!':
    if ((*(ushort *)(*plVar22 + 0x28) & 0x203) == 0) goto LAB_009d977c;
    goto switchD_009d947b_caseD_1a;
  case '0':
    uVar10 = FUN_009ddabc();
    return uVar10;
  case '1':
    *(int64_t *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '2':
    *(int64_t *)(lVar12 + 0x200) = lVar13 + 2;
    pbVar19 = (byte *)(uint64_t)(byte)(2 - ((*(uint *)(*plVar22 + 0x28) >> 0xc & 1) == 0));
    if ((*(uint *)(*plVar22 + 0x28) >> 0xd & 1) != 0) {
      pbVar19 = (byte *)0x0;
    }
    lVar13 = FUN_009d8a9c(0,0x18);
    *(char *)(lVar13 + 0x10) = (char)pbVar19;
    goto LAB_009d981a;
  case '3':
    *(int64_t *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '4':
    *(int64_t *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '6':
    goto switchD_009d947b_caseD_36;
  case '7':
    bVar1 = 1;
switchD_009d947b_caseD_36:
    pbVar19 = (byte *)(lVar13 + 2);
    *(byte **)(lVar12 + 0x200) = pbVar19;
    if (pbVar19 == pbVar16) {
      lVar13 = *(int64_t *)(lVar12 + 0x1f0);
      ppuVar17 = &puStack_f0;
      FUN_009d5ed0();
      FUN_009d8cfc(ppuVar17,(int64_t)pbVar16 - lVar13);
LAB_009d94bd:
      if (((uint64_t)puStack_f0 & 1) != 0) {
        operator_delete(ppuVar17);
      }
LAB_009d94cc:
      uVar10 = 0;
      goto LAB_009d981c;
    }
    if (*(char *)(lVar14 + 0x20 + (uint64_t)*pbVar19) == '\x0f') {
      pbVar19 = (byte *)(lVar13 + 3);
      do {
        *(byte **)(lVar12 + 0x200) = pbVar19;
        if (pbVar16 == pbVar19) {
          lVar13 = *(int64_t *)(lVar12 + 0x1f0);
          ppuVar17 = &puStack_f0;
          FUN_009d5ed0();
          FUN_009d8cfc(ppuVar17,(int64_t)pbVar16 - lVar13);
          goto LAB_009d94bd;
        }
        bVar25 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (*(char *)(lVar14 + 0x20 + (uint64_t)bVar25) != '\x10');
      *(byte **)(lVar12 + 0x200) = pbVar19;
      uVar8 = FUN_009d826e();
    }
    else {
      uVar8 = FUN_009d826e();
      *(int64_t *)(lVar12 + 0x200) = *(int64_t *)(lVar12 + 0x200) + 1;
    }
    puVar18 = (void*)(uint64_t)uVar8;
    if (uVar8 == 0) {
      lVar13 = *(int64_t *)(lVar12 + 0x200);
      lVar14 = *(int64_t *)(lVar12 + 0x1f0);
      ppuVar17 = &puStack_f0;
      FUN_009d5ed0();
      FUN_009d8cfc(ppuVar17,lVar13 - lVar14);
      goto LAB_009d94bd;
    }
    puStack_f0 = &uStack_e8;
    uStack_e0 = 0;
    uStack_e8 = 0;
    lStack_d8 = 0;
    lStack_d0 = 0;
    uStack_c8 = 0;
    puStack_b0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_c0 = (ushort)bVar1;
    uStack_bc = (uint64_t)uVar8;
    uStack_b4 = 0;
    lVar13 = FUN_009de670(puVar18,0);
    uVar10 = CONCAT71(uVar21,1);
    if (lVar13 == 0) {
      FUN_009d86be();
      goto LAB_009d983e;
    }
    goto LAB_009d98f4;
  case '9':
    if ((*(ushort *)(*plVar22 + 0x28) & 0x203) != 0) goto LAB_009d977c;
    pbStack_f8 = (byte *)(lVar13 + 2);
    *(byte **)(lVar12 + 0x200) = pbStack_f8;
    if (pbStack_f8 == pbVar16) {
      lVar13 = *(int64_t *)(lVar12 + 0x1f0);
      ppuVar17 = &puStack_f0;
      FUN_009d5ed0();
      FUN_009d8cfc(ppuVar17,(int64_t)pbVar16 - lVar13);
      goto LAB_009d94bd;
    }
    bVar25 = *pbStack_f8;
    bVar1 = *(byte *)(lVar14 + 0x20 + (uint64_t)bVar25);
    lVar14 = 2;
    bVar5 = false;
    if ((uint64_t)bVar1 < 0x1a) {
      uVar10 = 0;
      if ((0x2108000UL >> ((uint64_t)bVar1 & 0x3f) & 1) != 0) {
        pbStack_f8 = (byte *)(lVar13 + 3);
        *(byte **)(lVar12 + 0x200) = pbStack_f8;
        if (pbStack_f8 == pbVar16) {
          lVar13 = *(int64_t *)(lVar12 + 0x1f0);
          ppuVar17 = &puStack_f0;
          FUN_009d5ed0();
          FUN_009d8cfc(ppuVar17,(int64_t)pbVar16 - lVar13);
          goto LAB_009d94bd;
        }
        uVar10 = 0x10;
        if (bVar1 != 0xf) {
          uVar10 = (uint64_t)(byte)((bVar1 != 0x14) * '\x04' + 0x15);
        }
        bVar25 = *pbStack_f8;
        bVar5 = true;
        lVar14 = 3;
      }
    }
    else {
      uVar10 = 0;
    }
    if (bVar25 == 0x2d) {
      pbStack_f8 = (byte *)(lVar13 + 1 + lVar14);
      *(byte **)(lVar12 + 0x200) = pbStack_f8;
      if (pbStack_f8 == pbVar16) {
        lVar13 = *(int64_t *)(lVar12 + 0x1f0);
        ppuVar17 = &puStack_f0;
        FUN_009d5ed0();
        FUN_009d8cfc(ppuVar17,(int64_t)pbVar16 - lVar13);
        goto LAB_009d94bd;
      }
    }
    puVar15 = (void*)FUN_009dcab0(10,pbVar16);
    cVar6 = (char)uVar10;
    if ((cVar6 != '\0') && ((int64_t)puVar15 < 0)) {
      pbVar19 = *(byte **)(lVar12 + 0x1f8);
      pbVar16 = *(byte **)(lVar12 + 0x200);
      puVar15 = &g_00002710;
      pbStack_f8 = pbVar16;
      if (pbVar16 != pbVar19) {
        lVar13 = **(int64_t **)(lVar12 + 0x180);
        cVar7 = *(char *)(lVar13 + 0x20 + (uint64_t)*pbVar16);
        while (pbVar23 = pbStack_f8, cVar7 != cVar6) {
          pbStack_f8 = pbStack_f8 + 1;
          *(byte **)(lVar12 + 0x200) = pbStack_f8;
          pbVar23 = pbVar19;
          if (pbVar19 == pbStack_f8) break;
          cVar7 = *(char *)(lVar13 + 0x20 + (uint64_t)*pbStack_f8);
        }
        uVar10 = 0;
        if (pbVar16 != pbVar23) {
          uVar20 = 0;
          do {
            uVar10 = uVar20 * 0x40;
            uVar20 = (uVar20 >> 2) + uVar10 + (int64_t)(char)*pbVar16 + 0x9e3779b9 ^ uVar20;
            pbVar16 = pbVar16 + 1;
          } while (pbVar23 != pbVar16);
          puVar15 = &g_00002710 + uVar20 % 0x7fffd8ee;
        }
      }
    }
    if (bVar25 == 0x2d) {
      puVar15 = (void*)((uint64_t)(*(int *)(lVar12 + 0x208) + 1) - (int64_t)puVar15);
    }
    if (((int64_t)puVar15 < 0x21) && (puVar15 + -1 < (void*)0x1f)) {
      uVar8 = *(uint *)(lVar12 + 0x19c) >> ((byte)((char)puVar15 - 1) & 0x1f);
joined_r0x009d9cd9:
      if ((uVar8 & 1) != 0) {
        *(byte **)(lVar12 + 0x200) = pbStack_f8;
        lVar13 = FUN_009d8a9c();
        *(int *)(lVar13 + 0x10) = (int)puVar15;
        *(byte *)(lVar13 + 0x14) = (byte)(*(uint *)(*plVar22 + 0x28) >> 0x14) & 1;
        *(byte **)(lVar12 + 0x200) = pbStack_f8;
        uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
        if (!bVar5) goto LAB_009d981c;
        if ((pbStack_f8 != *(byte **)(lVar12 + 0x1f8)) &&
           (*(char *)(**(int64_t **)(lVar12 + 0x180) + 0x20 + (uint64_t)*pbStack_f8) == cVar6)) {
          *(byte **)(lVar12 + 0x200) = pbStack_f8 + 1;
          goto LAB_009d981c;
        }
        lVar13 = *(int64_t *)(lVar12 + 0x1f0);
        ppuVar17 = &puStack_f0;
        FUN_009d5ed0();
        FUN_009d8cfc(ppuVar17,(int64_t)pbStack_f8 - lVar13);
        goto LAB_009d94bd;
      }
    }
    else if ((10000 < (int64_t)puVar15) &&
            ((iVar9 = FUN_009ddbc4(), 0 < iVar9 && (iVar9 = FUN_009ddbc4(), iVar9 < 0x21)))) {
      uVar8 = *(uint *)(lVar12 + 0x19c);
      uVar10 = (uint64_t)uVar8;
      cVar7 = FUN_009ddbc4();
      uVar8 = uVar8 >> ((byte)(cVar7 - 1) & 0x1f);
      goto joined_r0x009d9cd9;
    }
    FUN_009d86be();
    goto LAB_009d94cc;
  case ':':
    if ((*(ushort *)(*plVar22 + 0x28) & 0x203) != 0) goto LAB_009d977c;
    lVar14 = FUN_009d8a9c((int64_t)&switchD_009d947b::switchdataD_009d9d8c + (int64_t)(int)uVar8,
                          0x18);
    *(void*)(lVar14 + 0x10) = 0xfffffffb;
    lVar13 = *plVar22;
    *(byte *)(lVar14 + 0x14) = (byte)(*(uint *)(lVar13 + 0x28) >> 0x14) & 1;
    *(uint64_t *)(lVar13 + 0x168) =
         ((*(int64_t *)(lVar13 + 0x168) - *(int64_t *)(lVar13 + 0x160)) + 7U & 0xfffffffffffffff8)
         + *(int64_t *)(lVar13 + 0x160);
    *(int64_t *)(lVar12 + 0x200) = *(int64_t *)(lVar12 + 0x200) + 1;
    goto LAB_009d981a;
  case ';':
    if ((*(ushort *)(*plVar22 + 0x28) & 0x203) == 0) {
      uVar4 = *(void*)(lVar12 + 0x1f0);
      *(void**)(lVar12 + 0x200) = &g_023cf0c0;
      *(void**)(lVar12 + 0x1f0) = &g_023cf0c0;
      *(void**)(lVar12 + 0x1f8) = &g_023cf0d4;
      uVar10 = FUN_009d8d70();
      *(int64_t *)(lVar12 + 0x200) = lVar13 + 2;
      *(byte **)(lVar12 + 0x1f8) = pbVar16;
      *(void*)(lVar12 + 0x1f0) = uVar4;
      return uVar10;
    }
LAB_009d977c:
    bVar1 = 0;
switchD_009d947b_caseD_16:
    uVar8 = FUN_009d826e();
    if (uVar8 != 0) {
      puStack_f0 = &uStack_e8;
      uStack_e0 = 0;
      uStack_e8 = 0;
      lStack_d8 = 0;
      lStack_d0 = 0;
      uStack_c8 = 0;
      puVar18 = &uStack_a8;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_c0 = (ushort)bVar1;
      uStack_bc = (uint64_t)uVar8;
      uStack_b4 = 0;
      puStack_b0 = puVar18;
      lVar13 = FUN_009de670(puVar18,0);
      if (lVar13 == 0) {
        FUN_009d86be();
LAB_009d983e:
        uVar10 = 0;
      }
      else {
        *(int64_t *)(lVar12 + 0x200) = *(int64_t *)(lVar12 + 0x200) + 1;
        uVar10 = CONCAT71(uVar21,1);
      }
LAB_009d98f4:
      FUN_009df1d6();
      if (lStack_d8 != 0) {
        lStack_d0 = lStack_d8;
        operator_delete(puVar18);
      }
      FUN_009df1d6();
      goto LAB_009d981c;
    }
switchD_009d947b_caseD_1a:
    FUN_009dd3a8();
    FUN_009dd2e4();
    goto LAB_009d981a;
  }
  FUN_009d8a9c((int64_t)&switchD_009d947b::switchdataD_009d9d8c + (int64_t)(int)uVar8,0x10);
LAB_009d981a:
  uVar10 = CONCAT71((int7)((uint64_t)pbVar19 >> 8),1);
LAB_009d981c:
  return uVar10 & 0xffffffff;
}

