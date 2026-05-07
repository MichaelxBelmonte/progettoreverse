// Function: FUN_009f8d14
// Address: 009f8d14
// Size: 3636 bytes
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


int64_t FUN_009f8d14(id *param_1,string *param_2,uint64_t *param_3,uint64_t param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint32_t uVar4;
  uint uVar5;
  facet *pfVar6;
  locale *this;
  uint64_t uVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  bool bVar10;
  undefined6 uVar14;
  string *psVar11;
  string *this_00;
  byte *pbVar12;
  uint64_t *puVar13;
  uint *puVar15;
  int64_t lVar16;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar17;
  long lVar18;
  char *pcVar19;
  int64_t *plVar20;
  char *pcVar21;
  char local_res8;
  byte local_150 [24];
  byte local_138 [24];
  byte local_120 [32];
  uint64_t local_100;
  byte *local_f8;
  int64_t local_f0;
  uint64_t local_e8;
  uint16_t local_e0;
  int64_t local_d8;
  uint64_t local_d0;
  uint64_t *local_c8;
  uint64_t *local_c0;
  uint32_t local_b4;
  int64_t local_b0;
  int64_t local_a8;
  uint32_t local_a0;
  uint32_t local_9c;
  uint64_t local_98;
  int64_t local_80;
  uint local_78 [7];
  uint local_5c;
  uint64_t local_58;
  uint64_t uStack_50;
  uint64_t local_48;
  uint32_t local_40;
  uint8_t local_33;
  char local_32;
  uint8_t local_31;
  
  puVar15 = (uint *)param_2;
  puVar13 = param_3;
  local_100 = param_4;
LAB_009f8d49:
  plVar20 = (int64_t *)*arg1;
  if (plVar20 == (int64_t *)0x0) {
LAB_009f8d78:
    plVar20 = (int64_t *)0x0;
  }
  else if (plVar20[3] == plVar20[4]) {
    iVar3 = (**(code **)(*plVar20 + 0x48))();
    if (iVar3 == -1) {
      *arg1 = 0;
      goto LAB_009f8d78;
    }
    plVar20 = (int64_t *)*arg1;
  }
  lVar18 = (long)puVar13;
  plVar17 = *(int64_t **)param_2;
  if (plVar17 == (int64_t *)0x0) {
LAB_009f8dbc:
    lVar18 = (long)puVar13;
    if (plVar20 == (int64_t *)0x0) goto LAB_009f8e27;
  }
  else if (plVar17[3] == plVar17[4]) {
    iVar3 = (**(code **)(*plVar17 + 0x48))();
    lVar18 = (long)puVar13;
    if (iVar3 == -1) {
      *(int64_t *)param_2 = 0;
      goto LAB_009f8dbc;
    }
    param_1 = (id *)(uint64_t)(*(int64_t *)param_2 == 0);
    if ((plVar20 == (int64_t *)0x0) == (*(int64_t *)param_2 == 0)) goto LAB_009f8e27;
  }
  else if (plVar20 != (int64_t *)0x0) goto LAB_009f8e27;
  plVar20 = (int64_t *)*arg1;
  if ((char *)plVar20[3] == (char *)plVar20[4]) {
    cVar1 = (**(code **)(*plVar20 + 0x48))();
  }
  else {
    cVar1 = *(char *)plVar20[3];
  }
  if ((uint)(int)cVar1 < 0x80) {
    uVar5 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + (uint64_t)(uint)(int)cVar1 * 4 + 0x3c) &
            0x4000;
    param_1 = (id *)PTR___DefaultRuneLocale_0249c238;
  }
  else {
    uVar5 = ___maskrune((__darwin_ct_rune_t)param_1,(ulong)puVar15);
  }
  lVar18 = (long)puVar13;
  if (uVar5 == 0) goto LAB_009f8e27;
  plVar20 = (int64_t *)*arg1;
  if (plVar20[3] == plVar20[4]) {
    (**(code **)(*plVar20 + 0x50))();
  }
  else {
    plVar20[3] = plVar20[3] + 1;
  }
  goto LAB_009f8d49;
LAB_009f8e27:
  plVar20 = (int64_t *)*arg1;
  if (plVar20 == (int64_t *)0x0) {
    plVar20 = (int64_t *)0x0;
  }
  else if (plVar20[3] == plVar20[4]) {
    iVar3 = (**(code **)(*plVar20 + 0x48))();
    if (iVar3 == -1) {
      *arg1 = 0;
      plVar20 = (int64_t *)0x0;
    }
    else {
      plVar20 = (int64_t *)*arg1;
    }
  }
  plVar17 = *(int64_t **)param_2;
  if (plVar17 == (int64_t *)0x0) {
LAB_009f8eb8:
    if (plVar20 != (int64_t *)0x0) goto LAB_009f8ebd;
LAB_009f8f0a:
    local_98 = 0;
  }
  else {
    if (plVar17[3] == plVar17[4]) {
      iVar3 = (**(code **)(*plVar17 + 0x48))();
      if (iVar3 == -1) {
        *(int64_t *)param_2 = 0;
        goto LAB_009f8eb8;
      }
      puVar15 = (uint *)0x0;
      local_98 = 0;
      param_1 = (id *)(uint64_t)(*(int64_t *)param_2 == 0);
      if ((plVar20 == (int64_t *)0x0) == (*(int64_t *)param_2 == 0)) goto LAB_009f8f1b;
    }
    else if (plVar20 != (int64_t *)0x0) goto LAB_009f8f0a;
LAB_009f8ebd:
    plVar20 = (int64_t *)*arg1;
    if ((char *)plVar20[3] == (char *)plVar20[4]) {
      cVar1 = (**(code **)(*plVar20 + 0x48))();
    }
    else {
      cVar1 = *(char *)plVar20[3];
    }
    if (cVar1 != '-') {
      plVar20 = (int64_t *)*arg1;
      if ((char *)plVar20[3] == (char *)plVar20[4]) {
        cVar1 = (**(code **)(*plVar20 + 0x48))();
      }
      else {
        cVar1 = *(char *)plVar20[3];
      }
      if (cVar1 != '+') goto LAB_009f8f0a;
    }
    plVar20 = (int64_t *)*arg1;
    if ((byte *)plVar20[3] == (byte *)plVar20[4]) {
      local_98 = (**(code **)(*plVar20 + 0x48))();
    }
    else {
      local_98 = (uint64_t)*(byte *)plVar20[3];
    }
  }
LAB_009f8f1b:
  local_e8 = 0;
  std::ios_base::getloc();
  cVar1 = std::locale::has_facet(param_1);
  std::locale::~locale((locale *)param_1);
  if (cVar1 == '\0') {
    pfVar6 = operator_new((ulong)param_1);
    *(void*)(pfVar6 + 8) = 0xffffffffffffffff;
    *(void**)pfVar6 = PTR_vtable_024a9850 + 0x10;
    std::ios_base::getloc();
    this = (locale *)std::locale::id::__get();
    std::locale::__install_ctor(this,pfVar6,lVar18);
    std::locale::~locale(this);
    puVar15 = (uint *)&local_58;
    std::ios_base::imbue(this);
    std::locale::~locale(this);
    std::locale::~locale(this);
  }
  local_f8 = (byte *)(this_ptr + 0x10);
  bVar2 = *(byte *)(this_ptr + 0x10);
  if ((bVar2 & 1) == 0) {
    pcVar21 = (char *)(this_ptr + 0x11);
  }
  else {
    pcVar21 = *(char **)(this_ptr + 0x20);
  }
  local_f0 = this_ptr + 0x11;
  local_b0 = this_ptr + 0x70;
  local_a8 = this_ptr + 0x148;
  uVar14 = (undefined6)((uint64_t)local_a8 >> 0x10);
  local_9c = (uint32_t)CONCAT62(uVar14,0x578);
  local_a0 = (uint32_t)CONCAT62(uVar14,1);
  local_b4 = (uint32_t)CONCAT62(uVar14,1);
  local_d0 = 0;
  local_d8 = 0;
  local_c0 = (uint64_t *)0x0;
  local_c8 = (uint64_t *)0x0;
  local_5c = 0;
LAB_009f905f:
  if ((bVar2 & 1) == 0) {
    uVar7 = (uint64_t)(bVar2 >> 1);
    lVar16 = local_f0;
  }
  else {
    uVar7 = *(uint64_t *)(this_ptr + 0x18);
    lVar16 = *(int64_t *)(this_ptr + 0x20);
  }
  if (pcVar21 == (char *)(lVar16 + uVar7)) goto LAB_009f9bd1;
  plVar20 = (int64_t *)*arg1;
  if (plVar20 == (int64_t *)0x0) {
LAB_009f90b4:
    plVar20 = (int64_t *)0x0;
  }
  else if (plVar20[3] == plVar20[4]) {
    iVar3 = (**(code **)(*plVar20 + 0x48))();
    if (iVar3 == -1) {
      *arg1 = 0;
      goto LAB_009f90b4;
    }
    plVar20 = (int64_t *)*arg1;
  }
  plVar17 = *(int64_t **)param_2;
  if (plVar17 == (int64_t *)0x0) {
LAB_009f90fb:
    if (plVar20 == (int64_t *)0x0) goto LAB_009f9bd1;
  }
  else if (plVar17[3] == plVar17[4]) {
    iVar3 = (**(code **)(*plVar17 + 0x48))();
    if (iVar3 == -1) {
      *(int64_t *)param_2 = 0;
      goto LAB_009f90fb;
    }
    if ((plVar20 == (int64_t *)0x0) == (*(int64_t *)param_2 == 0)) goto LAB_009f9bd1;
  }
  else if (plVar20 != (int64_t *)0x0) goto LAB_009f9bd1;
  pcVar19 = pcVar21 + 1;
  if (*pcVar21 != '%') {
    if ((local_5c & 1) == 0) {
      plVar20 = (int64_t *)*arg1;
      if (plVar20[3] == plVar20[4]) {
        (**(code **)(*plVar20 + 0x50))();
      }
      else {
        plVar20[3] = plVar20[3] + 1;
      }
    }
    else {
      local_5c = 0;
    }
    goto LAB_009f9931;
  }
  if ((*local_f8 & 1) == 0) {
    uVar7 = (uint64_t)(*local_f8 >> 1);
    lVar16 = local_f0;
  }
  else {
    uVar7 = *(uint64_t *)(this_ptr + 0x18);
    lVar16 = *(int64_t *)(this_ptr + 0x20);
  }
  if (pcVar19 == (char *)(lVar16 + uVar7)) {
LAB_009f9bd1:
    if ((short)local_d0 < 1) {
      FUN_0097e7bc(local_a0,local_b4);
      uVar5 = (uint)local_58;
    }
    else {
      uVar7 = local_d0 & 0xffff;
      local_e0 = 0x578;
      FUN_009a81f8();
      FUN_0097e7bc(1,1);
      local_58 = uVar7 - 1;
      uVar5 = FUN_009f4a54();
    }
    FUN_009a8638(local_e8,local_d8);
    local_78[0] = uVar5;
    FUN_00953fa0();
    *param_3 = local_58;
    return *arg1;
  }
  cVar1 = *pcVar19;
  iVar3 = (int)cVar1;
  if (iVar3 == 0x25) {
    plVar20 = (int64_t *)*arg1;
    if (plVar20[3] == plVar20[4]) {
      (**(code **)(*plVar20 + 0x50))();
    }
    else {
      plVar20[3] = plVar20[3] + 1;
    }
LAB_009f929d:
    lVar16 = 1;
    goto switchD_009f91bf_caseD_63;
  }
  lVar16 = 1;
  puVar13 = param_3;
  if (iVar3 < 0x59) {
    if (7 < iVar3 - 0x41U) {
      if (iVar3 == 0x4d) {
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        local_40 = 0xffff0000;
        local_78[0] = CONCAT31(local_78[0]._1_3_,0x30);
        puVar15 = (uint *)&local_58;
        local_c0 = (uint64_t *)FUN_009fca36(2,puVar15,local_78);
        bVar10 = true;
        puVar8 = local_c0;
        if (local_c0 == (uint64_t *)0xffffffffffffffff) {
          puVar15 = (uint *)param_2;
          local_80 = FUN_009faace(param_3,param_2,(int)(char)local_98);
          goto LAB_009f9910;
        }
        goto LAB_009f9912;
      }
      if (iVar3 == 0x53) goto switchD_009f91bf_caseD_73;
      goto switchD_009f91bf_caseD_63;
    }
    puVar15 = &switchD_009f9200::switchdataD_009f9e30;
    this_00 = (string *)
              ((int64_t)&switchD_009f9200::switchdataD_009f9e30 +
              (int64_t)(int)(&switchD_009f9200::switchdataD_009f9e30)[iVar3 - 0x41U]);
    switch(iVar3) {
    case 0x41:
      goto switchD_009f91bf_caseD_61;
    case 0x42:
      goto switchD_009f91bf_caseD_62;
    case 0x46:
      plVar20 = (int64_t *)*arg1;
      if ((char *)plVar20[3] == (char *)plVar20[4]) {
        cVar1 = (**(code **)(*plVar20 + 0x48))();
      }
      else {
        cVar1 = *(char *)plVar20[3];
      }
      local_5c = (uint)CONCAT71((int7)((uint64_t)this_00 >> 8),1);
      if (cVar1 == '.') {
        plVar20 = (int64_t *)*arg1;
        if (plVar20[3] == plVar20[4]) {
          (**(code **)(*plVar20 + 0x50))();
        }
        else {
          plVar20[3] = plVar20[3] + 1;
        }
        puVar15 = (uint *)param_2;
        FUN_009face2(&local_e8);
      }
      break;
    case 0x48:
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0xffff0000;
      local_78[0] = CONCAT31(local_78[0]._1_3_,0x30);
      puVar15 = (uint *)&local_58;
      puVar8 = (uint64_t *)FUN_009fca36(2,puVar15,local_78);
      bVar10 = true;
      local_c8 = puVar8;
      if (puVar8 == (uint64_t *)0xffffffffffffffff) {
        puVar15 = (uint *)param_2;
        local_80 = FUN_009faace(param_3,param_2,(int)(char)local_98);
LAB_009f9910:
        bVar10 = false;
        puVar8 = puVar13;
      }
LAB_009f9912:
      if ((local_58 & 1) != 0) goto LAB_009f991c;
      goto LAB_009f9921;
    }
    goto switchD_009f91bf_caseD_63;
  }
  psVar11 = (string *)(uint64_t)(iVar3 - 0x61U);
  if (0x18 < iVar3 - 0x61U) {
    if (iVar3 != 0x5a) {
      this_00 = psVar11;
      if (iVar3 == 0x59) goto switchD_009f91bf_caseD_79;
      goto switchD_009f91bf_caseD_63;
    }
    uVar9 = 0;
    if (local_res8 != '\0') {
      uVar7 = 0xfffffff9;
      if (pcVar21[2] == 'P') {
LAB_009f96ab:
        plVar20 = (int64_t *)*arg1;
        if (plVar20 == (int64_t *)0x0) {
LAB_009f96da:
          plVar20 = (int64_t *)0x0;
        }
        else if (plVar20[3] == plVar20[4]) {
          iVar3 = (**(code **)(*plVar20 + 0x48))();
          if (iVar3 == -1) {
            *arg1 = 0;
            goto LAB_009f96da;
          }
          plVar20 = (int64_t *)*arg1;
        }
        plVar17 = *(int64_t **)param_2;
        if (plVar17 == (int64_t *)0x0) {
LAB_009f9721:
          if (plVar20 == (int64_t *)0x0) goto LAB_009f97d9;
        }
        else if (plVar17[3] == plVar17[4]) {
          iVar3 = (**(code **)(*plVar17 + 0x48))();
          if (iVar3 == -1) {
            *(int64_t *)param_2 = 0;
            goto LAB_009f9721;
          }
          bVar10 = (*(int64_t *)param_2 == 0) != (plVar20 == (int64_t *)0x0);
          uVar7 = (uint64_t)bVar10;
          if (!bVar10) goto LAB_009f97d9;
        }
        else if (plVar20 != (int64_t *)0x0) goto LAB_009f97d9;
        plVar20 = (int64_t *)*arg1;
        if ((char *)plVar20[3] == (char *)plVar20[4]) {
          cVar1 = (**(code **)(*plVar20 + 0x48))();
        }
        else {
          cVar1 = *(char *)plVar20[3];
        }
        if ((uint)(int)cVar1 < 0x80) {
          uVar7 = 0x4000;
          uVar5 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                           (uint64_t)(uint)(int)cVar1 * 4 + 0x3c) & 0x4000;
        }
        else {
          uVar5 = ___maskrune((__darwin_ct_rune_t)uVar7,(ulong)puVar15);
        }
        if (uVar5 == 0) goto LAB_009f97d9;
        plVar20 = (int64_t *)*arg1;
        if (plVar20[3] == plVar20[4]) {
          (**(code **)(*plVar20 + 0x50))();
        }
        else {
          plVar20[3] = plVar20[3] + 1;
        }
        goto LAB_009f96ab;
      }
      pcVar19 = pcVar21 + 2;
      goto LAB_009f9931;
    }
    goto LAB_009f9a3f;
  }
  puVar15 = &switchD_009f91bf::switchdataD_009f9e50;
  this_00 = (string *)
            ((int64_t)&switchD_009f91bf::switchdataD_009f9e50 +
            (int64_t)(int)(&switchD_009f91bf::switchdataD_009f9e50)[(int64_t)psVar11]);
  switch(psVar11) {
  case (string *)0x0:
  case (string *)0x16:
switchD_009f91bf_caseD_61:
    local_33 = 0x25;
    local_31 = 0;
    local_32 = cVar1;
    FUN_009f4e38();
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0xffff0000;
    pbVar12 = local_120;
    std::string::string(this_00,(string *)puVar15);
    FUN_009fa4cc(pbVar12,param_2,&local_58);
    if ((local_120[0] & 1) != 0) {
      operator_delete(pbVar12);
    }
    uVar7 = uStack_50;
    if ((local_58 & 1) == 0) {
      uVar7 = (uint64_t)((byte)local_58._0_1_ >> 1);
    }
    local_5c = local_5c & 0xff;
    if ((ushort)local_40 < uVar7) {
      local_5c = 1;
    }
    goto LAB_009f94d5;
  case (string *)0x1:
  case (string *)0xc:
switchD_009f91bf_caseD_62:
    local_33 = 0x25;
    local_31 = 0;
    local_32 = cVar1;
    FUN_009f4e38();
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0xffff0000;
    pbVar12 = local_138;
    std::string::string(this_00,(string *)puVar15);
    uVar4 = FUN_009fa172(pbVar12,param_2,&local_58);
    if ((local_138[0] & 1) != 0) {
      operator_delete(pbVar12);
    }
    uVar7 = uStack_50;
    if ((local_58 & 1) == 0) {
      uVar7 = (uint64_t)((byte)local_58._0_1_ >> 1);
    }
    local_5c = local_5c & 0xff;
    local_b4 = uVar4;
    if ((ushort)local_40 < uVar7) {
      local_5c = 1;
    }
LAB_009f94d5:
    puVar15 = (uint *)(uint64_t)local_5c;
    bVar10 = true;
    puVar8 = (uint64_t *)(uint64_t)((byte)local_58._0_1_ & 1);
    if (((byte)local_58._0_1_ & 1) != 0) {
      operator_delete(puVar8);
    }
    if ((local_78[0] & 1) != 0) {
LAB_009f991c:
      operator_delete(puVar8);
    }
LAB_009f9921:
    lVar16 = 1;
    if (!bVar10) {
      return local_80;
    }
    break;
  case (string *)0x3:
  case (string *)0x4:
    if (cVar1 == 'd') {
      puVar15 = (uint *)param_2;
      local_a0 = FUN_009fa82a();
    }
    else {
      puVar15 = (uint *)param_2;
      local_a0 = FUN_009fa9a2();
    }
    break;
  case (string *)0x5:
    goto switchD_009f91bf_caseD_66;
  case (string *)0x9:
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0xffff0000;
    local_78[0] = CONCAT31(local_78[0]._1_3_,0x30);
    puVar15 = (uint *)&local_58;
    puVar8 = (uint64_t *)((int64_t)&MACH_HEADER.magic + 3);
    local_d0 = FUN_009fbfb8(3,puVar15,local_78);
    if ((short)local_d0 == -1) {
      local_78[0] = 0;
      puVar8 = &local_58;
      puVar15 = (uint *)param_2;
      FUN_009fb2f0(puVar8,param_2,local_78);
      if (local_40._2_2_ != -1) {
        uVar7 = FUN_009585b8();
        *param_3 = uVar7;
        local_80 = *arg1;
        goto LAB_009f9910;
      }
    }
    local_78[0] = CONCAT22(local_78[0]._2_2_,1);
    FUN_009fc20c();
    bVar10 = true;
    goto LAB_009f9912;
  case (string *)0x12:
switchD_009f91bf_caseD_73:
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0xffff0000;
    local_78[0] = CONCAT31(local_78[0]._1_3_,0x30);
    puVar15 = (uint *)&local_58;
    puVar13 = (uint64_t *)((int64_t)&MACH_HEADER.magic + 2);
    local_d8 = FUN_009fca36(2,puVar15,local_78);
    if (local_d8 == -1) {
      puVar13 = param_3;
      puVar15 = (uint *)param_2;
      local_80 = FUN_009faace(param_3,param_2,(int)(char)local_98);
      iVar3 = 1;
    }
    else {
      iVar3 = 6;
      if (*pcVar19 != 'S') {
        plVar20 = (int64_t *)*arg1;
        if (plVar20 == (int64_t *)0x0) {
LAB_009f997b:
          plVar20 = (int64_t *)0x0;
        }
        else if (plVar20[3] == plVar20[4]) {
          iVar3 = (**(code **)(*plVar20 + 0x48))();
          if (iVar3 == -1) {
            *arg1 = 0;
            goto LAB_009f997b;
          }
          plVar20 = (int64_t *)*arg1;
        }
        plVar17 = *(int64_t **)param_2;
        if (plVar17 == (int64_t *)0x0) {
LAB_009f99a6:
          plVar17 = (int64_t *)0x0;
        }
        else if (plVar17[3] == plVar17[4]) {
          iVar3 = (**(code **)(*plVar17 + 0x48))();
          if (iVar3 == -1) {
            *(int64_t *)param_2 = 0;
            goto LAB_009f99a6;
          }
          plVar17 = *(int64_t **)param_2;
        }
        bVar10 = (plVar17 == (int64_t *)0x0) != (plVar20 != (int64_t *)0x0);
        puVar13 = (uint64_t *)CONCAT71((int7)((uint64_t)puVar13 >> 8),bVar10);
        iVar3 = 0;
        if (bVar10) {
          iVar3 = 6;
        }
      }
    }
    if ((local_58 & 1) != 0) {
      operator_delete(puVar13);
    }
    if (iVar3 == 6) goto LAB_009f929d;
    if (iVar3 != 0) {
      return local_80;
    }
    goto switchD_009f91bf_caseD_66;
  case (string *)0x18:
switchD_009f91bf_caseD_79:
    local_33 = 0x25;
    local_31 = 0;
    local_32 = cVar1;
    FUN_009f4e38();
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0xffff0000;
    pbVar12 = local_150;
    std::string::string(this_00,(string *)puVar15);
    puVar15 = (uint *)param_2;
    uVar4 = FUN_009f9eb4(pbVar12,param_2,&local_58);
    if ((local_150[0] & 1) != 0) {
      operator_delete(pbVar12);
    }
    lVar16 = 1;
    local_9c = uVar4;
    if ((local_58 & 1) != 0) {
      operator_delete(pbVar12);
    }
    if ((local_78[0] & 1) != 0) {
      operator_delete(pbVar12);
    }
  }
  goto switchD_009f91bf_caseD_63;
LAB_009f97d9:
  plVar20 = (int64_t *)*arg1;
  if (plVar20 == (int64_t *)0x0) {
LAB_009f9808:
    plVar20 = (int64_t *)0x0;
  }
  else if (plVar20[3] == plVar20[4]) {
    iVar3 = (**(code **)(*plVar20 + 0x48))();
    if (iVar3 == -1) {
      *arg1 = 0;
      goto LAB_009f9808;
    }
    plVar20 = (int64_t *)*arg1;
  }
  plVar17 = *(int64_t **)param_2;
  if (plVar17 == (int64_t *)0x0) {
LAB_009f9849:
    if (plVar20 == (int64_t *)0x0) goto LAB_009f9897;
  }
  else if (plVar17[3] == plVar17[4]) {
    iVar3 = (**(code **)(*plVar17 + 0x48))();
    if (iVar3 == -1) {
      *(int64_t *)param_2 = 0;
      goto LAB_009f9849;
    }
    uVar7 = (uint64_t)(*(int64_t *)param_2 == 0);
    if ((plVar20 == (int64_t *)0x0) == (*(int64_t *)param_2 == 0)) goto LAB_009f9897;
  }
  else if (plVar20 != (int64_t *)0x0) goto LAB_009f9897;
  plVar20 = (int64_t *)*arg1;
  if ((char *)plVar20[3] == (char *)plVar20[4]) {
    cVar1 = (**(code **)(*plVar20 + 0x48))();
  }
  else {
    cVar1 = *(char *)plVar20[3];
  }
  if ((uint)(int)cVar1 < 0x80) {
    uVar7 = 0x4000;
    uVar5 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + (uint64_t)(uint)(int)cVar1 * 4 + 0x3c) &
            0x4000;
  }
  else {
    uVar5 = ___maskrune((__darwin_ct_rune_t)uVar7,(ulong)puVar15);
  }
  if (uVar5 != 0) goto LAB_009f9897;
  plVar20 = (int64_t *)*arg1;
  if (plVar20[3] == plVar20[4]) {
    (**(code **)(*plVar20 + 0x48))();
  }
  std::string::push_back((char)uVar7);
  plVar20 = (int64_t *)*arg1;
  if (plVar20[3] == plVar20[4]) {
    (**(code **)(*plVar20 + 0x50))();
  }
  else {
    plVar20[3] = plVar20[3] + 1;
  }
  goto LAB_009f97d9;
LAB_009f9897:
  lVar16 = 2;
  goto switchD_009f91bf_caseD_63;
switchD_009f91bf_caseD_66:
  plVar20 = (int64_t *)*arg1;
  if ((char *)plVar20[3] == (char *)plVar20[4]) {
    cVar1 = (**(code **)(*plVar20 + 0x48))();
  }
  else {
    cVar1 = *(char *)plVar20[3];
  }
  if (cVar1 != '.') {
    lVar16 = FUN_009faace(param_3,param_2,(int)(char)local_98);
    return lVar16;
  }
  plVar20 = (int64_t *)*arg1;
  if (plVar20[3] == plVar20[4]) {
    (**(code **)(*plVar20 + 0x50))();
  }
  else {
    plVar20[3] = plVar20[3] + 1;
  }
  puVar15 = (uint *)param_2;
  uVar9 = FUN_009face2(&local_e8);
LAB_009f9a3f:
  lVar16 = 1;
  local_5c = (uint)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
switchD_009f91bf_caseD_63:
  pcVar19 = pcVar19 + lVar16;
LAB_009f9931:
  bVar2 = *local_f8;
  pcVar21 = pcVar19;
  goto LAB_009f905f;
}

