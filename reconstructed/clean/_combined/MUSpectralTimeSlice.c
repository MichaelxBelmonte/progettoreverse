// ===================================================================
// MUSpectralTimeSlice — Complete reconstructed pseudocode
// 13 functions
// ===================================================================

// Registered properties (5):
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


// ============================================================
// 015c4e40
// ============================================================
// Function: MUSpectralTimeSlice_initFromTimeSignal
// Address: 015c4e40
// Size: 4396 bytes
// Class: MUSpectralTimeSlice
// String references:
//   "MUSpectralTimeSlice::initFromTimeSignal(): incomplete parameters!"
//   "MUSpectralTimeSlice::initFromTimeSignal(): no valid neighbourTimeSlice for trueFreqs!"
//   "MUSpectralTimeSlice::getPhaseData(): no phase data"
// === MUSpectralTimeSlice properties ===
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


void MUSpectralTimeSlice_initFromTimeSignal(char param_1,void*param_2,int64_t *param_3,uint param_4,int param_5,
                 int64_t *param_6,int64_t param_7,uint8_t param_8,byte param_9)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int *piVar4;
  int64_t lVar5;
  uint8_t auVar6 [12];
  uint8_t auVar7 [12];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  int iVar10;
  size_t sVar11;
  void *pvVar12;
  int64_t lVar13;
  void*puVar14;
  void*puVar15;
  void*puVar16;
  void *pvVar17;
  void* pVar18;
  void*puVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  int64_t *plVar23;
  int64_t arg1;
  int64_t this_ptr;
  int64_t *plVar24;
  int64_t lVar25;
  int64_t lVar26;
  bool bVar27;
  uint uVar28;
  uint32_t uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  uint64_t uVar33;
  int iVar48;
  int64_t lVar49;
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  uint8_t auVar39 [16];
  int iVar47;
  int iVar50;
  uint8_t auVar40 [16];
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  uint8_t auVar43 [16];
  uint8_t auVar44 [16];
  uint8_t auVar45 [16];
  uint8_t auVar46 [16];
  int64_t lVar51;
  int64_t lVar53;
  uint8_t auVar52 [16];
  int64_t lVar54;
  int64_t lVar55;
  int64_t *local_res8;
  int64_t local_res10;
  int64_t local_res18;
  int64_t *local_res20;
  uint8_t local_58 [16];
  int64_t local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_05;
  uint64_t extraout_XMM0_Qb_06;
  uint64_t extraout_XMM0_Qb_07;
  
  plVar24 = param_3;
  if ((((arg1 == 0) || (param_2 == (void*)0x0)) ||
      ((param_1 == '\0' && (*param_3 == 0)))) ||
     (((*local_res8 == 0 || (param_7 == 0)) || (*param_6 == 0)))) {
    FUN_00e828a0();
  }
  sVar11 = (size_t)plVar24;
  if ((g_028ad700 != (void*)0x0) && (g_028ad709 != '\0')) goto LAB_015c57dd;
  FUN_00e8cb50();
  sVar11 = (size_t)plVar24;
  if (g_028ad700 != (void*)0x0) {
    g_028ad709 = '\x01';
    FUN_00e8cb70();
    goto LAB_015c57dd;
  }
  puVar15 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar19 = &g_02572358;
  *puVar15 = &g_02572358;
  (*g_02572370)();
  bVar27 = g_028ad700 == (void*)0x0;
  g_028ad700 = puVar15;
  if (((bVar27) || (FUN_00d50b20(), g_028ad700 != (void*)0x0)) && (g_028ad708 == '\0')) {
    g_028ad708 = '\x01';
    FUN_00e8cb90();
  }
  FUN_00e83da0();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  _memcpy(puVar19,&g_00008000,(size_t)plVar24);
  FUN_00e83070();
  FUN_00d21140();
  FUN_00d50b20();
  FUN_00e83da0();
  FUN_00c8e690();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  _memcpy(puVar19,&g_00004000,(size_t)plVar24);
  FUN_00e83070();
  FUN_00d21140();
  FUN_00d50b20();
  FUN_00e83da0();
  FUN_00c8e690();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  _memcpy(puVar19,&g_00002000,(size_t)plVar24);
  FUN_00e83070();
  local_38 = '\0';
  FUN_00d21140();
  FUN_00d50b20();
  FUN_00c8e690();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar26 = g_028ad710;
  if ((g_028ad710 != local_40) && (g_028ad710 = local_40, lVar26 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    if (g_028ad718 == '\0') {
      g_028ad718 = '\x01';
      FUN_00e8cb90();
    }
    if (local_40 != 0 && lVar26 == local_40) {
      FUN_00d50b20();
    }
  }
  puVar15 = *(void**)(g_028ad710 + 0x10);
  *puVar15 = 0x400000003f800000;
  *(void*)(puVar15 + 1) = 0x40800000;
  FUN_00c8e690();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar26 = g_028ad720;
  if ((g_028ad720 != local_40) && (g_028ad720 = local_40, lVar26 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    if (g_028ad728 == '\0') {
      g_028ad728 = '\x01';
      FUN_00e8cb90();
    }
    if (local_40 != 0 && lVar26 == local_40) {
      FUN_00d50b20();
    }
  }
  iVar10 = FUN_00e7d780(g_024110a0);
  piVar4 = *(int **)(g_028ad720 + 0x10);
  *piVar4 = iVar10;
  piVar4[1] = iVar10 * 2;
  piVar4[2] = iVar10 << 2;
  FUN_00c8e690();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar26 = g_028ad730;
  if ((g_028ad730 != local_40) && (g_028ad730 = local_40, lVar26 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    if (g_028ad738 == '\0') {
      g_028ad738 = '\x01';
      FUN_00e8cb90();
    }
    if (local_40 != 0 && lVar26 == local_40) {
      FUN_00d50b20();
    }
  }
  piVar4 = *(int **)(g_028ad720 + 0x10);
  iVar10 = *piVar4;
  lVar13 = (int64_t)iVar10;
  iVar3 = piVar4[1];
  lVar26 = (int64_t)iVar3;
  if (iVar3 - iVar10 != 0 && iVar10 <= iVar3) {
    fVar31 = (float)(iVar3 - iVar10);
    lVar5 = *(int64_t *)(g_028ad730 + 0x10);
    uVar20 = lVar26 - lVar13;
    lVar25 = lVar13;
    if (3 < uVar20) {
      uVar21 = uVar20 & 0xfffffffffffffffc;
      lVar25 = uVar21 + lVar13;
      auVar35._8_4_ = iVar10;
      auVar35._0_8_ = lVar13;
      auVar35._12_4_ = iVar10 >> 0x1f;
      lVar51 = g_0240df80 + lVar13;
      lVar49 = auVar35._8_8_;
      lVar53 = _UNK_0240df88 + lVar49;
      lVar54 = g_0240df90 + lVar13;
      lVar55 = _UNK_0240df98 + lVar49;
      uVar22 = uVar21;
      do {
        auVar34._0_4_ = (float)(int)(lVar54 - lVar13);
        auVar34._4_4_ = (float)(int)(lVar55 - lVar49);
        auVar34._8_4_ = (float)(int)(lVar51 - lVar13);
        auVar34._12_4_ = (float)(int)(lVar53 - lVar49);
        auVar8._4_4_ = fVar31;
        auVar8._0_4_ = fVar31;
        auVar8._8_4_ = fVar31;
        auVar8._12_4_ = fVar31;
        auVar35 = divps(auVar34,auVar8);
        fVar30 = auVar35._4_4_ + _UNK_023b2d54;
        auVar37._8_4_ = auVar35._8_4_ + _UNK_023b2d58;
        auVar37._12_4_ = auVar35._12_4_ + _UNK_023b2d5c;
        local_58._0_8_ = _logf();
        local_58._8_8_ = extraout_XMM0_Qb;
        auVar36._0_8_ = _logf();
        auVar36._8_8_ = extraout_XMM0_Qb_00;
        auVar35 = insertps(local_58,auVar36,0x10);
        auVar6._4_8_ = extraout_XMM0_Qb_00;
        auVar6._0_4_ = fVar30;
        auVar37._0_8_ = auVar6._0_8_ << 0x20;
        auVar38._0_8_ = _logf(auVar37._8_8_);
        auVar38._8_8_ = extraout_XMM0_Qb_01;
        auVar35 = insertps(auVar35,auVar38,0x20);
        auVar39._0_8_ = _logf();
        auVar39._8_8_ = extraout_XMM0_Qb_02;
        auVar35 = insertps(auVar35,auVar39,0x30);
        auVar35 = divps(auVar35,g_024110b0);
        *(uint8_t (*) [16])(lVar5 + (lVar54 - lVar13) * 4) = auVar35;
        lVar54 = lVar54 + g_0240dfb0;
        lVar55 = lVar55 + _UNK_0240dfb8;
        lVar51 = lVar51 + g_0240dfb0;
        lVar53 = lVar53 + _UNK_0240dfb8;
        uVar22 = uVar22 - 4;
      } while (uVar22 != 0);
      if (uVar20 == uVar21) goto LAB_015c560a;
    }
    do {
      fVar30 = (float)_logf((float)((int)lVar25 - iVar10) / fVar31 + g_02390124);
      *(float *)(lVar5 + lVar13 * -4 + lVar25 * 4) = fVar30 / g_0241c6f0;
      lVar25 = lVar25 + 1;
    } while (lVar26 != lVar25);
  }
LAB_015c560a:
  sVar11 = (size_t)plVar24;
  iVar10 = piVar4[2];
  if (iVar3 < iVar10) {
    fVar31 = (float)(iVar10 - iVar3);
    lVar25 = *(int64_t *)(g_028ad730 + 0x10);
    uVar20 = iVar10 - lVar26;
    if (3 < uVar20) {
      uVar22 = uVar20 & 0xfffffffffffffffc;
      auVar52._0_4_ = g_0238fcc0 + iVar3;
      auVar52._4_4_ = _UNK_0238fcc4 + iVar3;
      auVar52._8_4_ = _UNK_0238fcc8 + iVar3;
      auVar52._12_4_ = _UNK_0238fccc + iVar3;
      uVar21 = 0;
      do {
        iVar47 = auVar52._4_4_;
        iVar48 = auVar52._8_4_;
        iVar50 = auVar52._12_4_;
        auVar40._0_4_ = (float)(auVar52._0_4_ - iVar3);
        auVar40._4_4_ = (float)(iVar47 - iVar3);
        auVar40._8_4_ = (float)(iVar48 - iVar3);
        auVar40._12_4_ = (float)(iVar50 - iVar3);
        auVar9._4_4_ = fVar31;
        auVar9._0_4_ = fVar31;
        auVar9._8_4_ = fVar31;
        auVar9._12_4_ = fVar31;
        auVar35 = divps(auVar40,auVar9);
        fVar30 = auVar35._4_4_ + _UNK_023b2d54;
        auVar42._8_4_ = auVar35._8_4_ + _UNK_023b2d58;
        auVar42._12_4_ = auVar35._12_4_ + _UNK_023b2d5c;
        local_58._0_8_ = _logf();
        local_58._8_8_ = extraout_XMM0_Qb_03;
        auVar41._0_8_ = _logf();
        auVar41._8_8_ = extraout_XMM0_Qb_04;
        auVar35 = insertps(local_58,auVar41,0x10);
        auVar7._4_8_ = extraout_XMM0_Qb_04;
        auVar7._0_4_ = fVar30;
        auVar42._0_8_ = auVar7._0_8_ << 0x20;
        auVar43._0_8_ = _logf(auVar42._8_8_);
        auVar43._8_8_ = extraout_XMM0_Qb_05;
        auVar35 = insertps(auVar35,auVar43,0x20);
        auVar44._0_8_ = _logf();
        sVar11 = (size_t)plVar24;
        auVar44._8_8_ = extraout_XMM0_Qb_06;
        auVar35 = insertps(auVar35,auVar44,0x30);
        auVar35 = divps(auVar35,g_024110b0);
        *(uint8_t (*) [16])(lVar25 + (lVar26 - lVar13) * 4 + uVar21 * 4) = auVar35;
        uVar21 = uVar21 + 4;
        auVar52._0_4_ = auVar52._0_4_ + g_02394180;
        auVar52._4_4_ = iVar47 + _UNK_02394184;
        auVar52._8_4_ = iVar48 + _UNK_02394188;
        auVar52._12_4_ = iVar50 + _UNK_0239418c;
      } while (uVar22 != uVar21);
      lVar26 = uVar22 + lVar26;
      if (uVar20 == uVar22) goto LAB_015c57ca;
    }
    do {
      fVar30 = (float)_logf((float)((int)lVar26 - iVar3) / fVar31 + g_02390124);
      sVar11 = (size_t)plVar24;
      *(float *)(lVar25 + lVar13 * -4 + lVar26 * 4) = fVar30 / g_0241c6f0;
      lVar26 = lVar26 + 1;
    } while (iVar10 != lVar26);
  }
LAB_015c57ca:
  g_028ad709 = '\x01';
  FUN_00e8cb70();
LAB_015c57dd:
  lVar26 = *local_res8;
  iVar10 = *(int *)(lVar26 + 0x20);
  dVar1 = *(double *)(lVar26 + 0x18);
  pvVar17 = (void *)(uint64_t)*(uint *)(lVar26 + 0x24);
  *(uint *)(this_ptr + 0xc) = *(uint *)(lVar26 + 0x24);
  dVar2 = *(double *)(lVar26 + 0x50);
  if (((param_9 & 0x18) != 0) &&
     ((lVar26 = *local_res20, lVar26 == 0 ||
      ((*(int64_t *)(lVar26 + 0x20) == 0 && (FUN_00e828a0(), *(int64_t *)(lVar26 + 0x20) == 0)))))
     ) {
    FUN_00e828a0();
  }
  if (param_1 == '\0') {
    lVar26 = local_res18 - (int)((double)(iVar10 / 2) * dVar1 + g_023942d0);
    plVar24 = (int64_t *)*param_3;
    pvVar12 = _pthread_getspecific((void*)pvVar17);
    pVar18 = (void*)pvVar17;
    if ((int)param_4 < 0) {
      if (pvVar12 != (void *)0x0) {
        plVar24 = (int64_t *)*param_3;
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          plVar24 = (int64_t *)plVar24[(uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4];
        }
      }
      plVar23 = (int64_t *)*param_3;
      pvVar17 = _pthread_getspecific(pVar18);
      if (pvVar17 != (void *)0x0) {
        plVar23 = (int64_t *)*param_3;
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          plVar23 = (int64_t *)plVar23[(uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4];
        }
      }
      sVar11 = (**(code **)(*plVar23 + 0x3a0))();
      pvVar17 = (void *)0x0;
      (**(code **)(*plVar24 + 0x388))(g_0238fee8 / dVar1,&stack0xffffffffffffffa0,sVar11,lVar26);
    }
    else {
      if (pvVar12 != (void *)0x0) {
        plVar24 = (int64_t *)*param_3;
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          plVar24 = (int64_t *)plVar24[(uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4];
        }
      }
      pvVar17 = (void *)(uint64_t)param_4;
      sVar11 = 1;
      (**(code **)(*plVar24 + 0x388))(g_0238fee8 / dVar1,&stack0xffffffffffffffa0,1,lVar26);
    }
  }
  if ((param_9 & 1) != 0) {
    param_2 = (void*)FUN_00e83010();
    *(void**)(this_ptr + 0x10) = param_2;
  }
  FUN_00e7d780();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  uVar33 = FUN_00c92160();
  (**(code **)(g_02786500 + 0x38))(uVar33,iVar10);
  pvVar12 = (void *)(int64_t)((iVar10 / 2) * 4);
  _memcpy(pvVar17,pvVar12,sVar11);
  _memcpy(pvVar17,pvVar12,sVar11);
  _memcpy(pvVar17,pvVar12,sVar11);
  FUN_00e83530();
  if ((param_9 & 0xbe) != 0) {
    uVar33 = FUN_00e83010();
    *(void*)(this_ptr + 0x18) = uVar33;
    puVar14 = (void*)FUN_00e83010();
    *(void**)(this_ptr + 0x20) = puVar14;
    puVar16 = *(void**)(this_ptr + 0x18);
    *puVar16 = *param_2;
    *puVar14 = param_2[1];
    uVar28 = *(uint *)(this_ptr + 0xc);
    if (1 < (int)uVar28) {
      lVar26 = 0;
      do {
        puVar16[lVar26 + 1] =
             SQRT((float)param_2[lVar26 * 2 + 3] * (float)param_2[lVar26 * 2 + 3] +
                  (float)param_2[lVar26 * 2 + 2] * (float)param_2[lVar26 * 2 + 2]);
        uVar29 = _atan2f();
        puVar14[lVar26 + 1] = uVar29;
        lVar26 = lVar26 + 1;
      } while ((uint64_t)uVar28 - 1 != lVar26);
    }
  }
  if ((param_9 & 0x98) != 0) {
    fVar31 = *(float *)(*local_res8 + 0x2c);
    if (local_res10 == 0) {
      FUN_015c7140();
      local_res10 = *(int64_t *)(local_40 + 0x10);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
    }
    uVar33 = FUN_00e83010();
    *(void*)(this_ptr + 0x28) = uVar33;
    lVar26 = *local_res20;
    lVar13 = *(int64_t *)(lVar26 + 0x20);
    if (lVar13 == 0) {
      FUN_00e828a0();
      lVar13 = *(int64_t *)(lVar26 + 0x20);
    }
    if ((char)param_9 < '\0') {
      puVar15 = (void*)FUN_00e83010();
      *(void**)(this_ptr + 0x48) = puVar15;
      *puVar15 = 0;
    }
    fVar30 = (float)dVar2;
    fVar31 = fVar31 * g_0239011c;
    **(void**)(this_ptr + 0x28) = 0;
    if (param_5 < 0) {
      if (1 < *(int *)(this_ptr + 0xc)) {
        lVar26 = 1;
        do {
          fVar32 = (float)FUN_015b4cf0((*(float *)(lVar13 + lVar26 * 4) -
                                       *(float *)(*(int64_t *)(this_ptr + 0x20) + lVar26 * 4)) -
                                       *(float *)(local_res10 + lVar26 * 4));
          fVar32 = fVar32 * fVar31;
          if (*(int64_t *)(this_ptr + 0x48) != 0) {
            *(float *)(*(int64_t *)(this_ptr + 0x48) + 4 + lVar26 * 8) = fVar32;
          }
          fVar32 = (fVar32 + (float)(int)lVar26) * fVar30;
          uVar28 = -(uint)(g_0239424c < fVar32);
          *(uint *)(*(int64_t *)(this_ptr + 0x28) + lVar26 * 4) =
               ~uVar28 & (uint)((float)(int)lVar26 * fVar30) | (uint)fVar32 & uVar28;
          lVar26 = lVar26 + 1;
        } while (lVar26 < *(int *)(this_ptr + 0xc));
      }
    }
    else if (1 < *(int *)(this_ptr + 0xc)) {
      lVar26 = 1;
      do {
        fVar32 = (float)FUN_015b4cf0((*(float *)(*(int64_t *)(this_ptr + 0x20) + lVar26 * 4) -
                                     *(float *)(lVar13 + lVar26 * 4)) -
                                     *(float *)(local_res10 + lVar26 * 4));
        fVar32 = fVar32 * fVar31;
        if (*(int64_t *)(this_ptr + 0x48) != 0) {
          *(float *)(*(int64_t *)(this_ptr + 0x48) + 4 + lVar26 * 8) = fVar32;
        }
        fVar32 = (fVar32 + (float)(int)lVar26) * fVar30;
        uVar28 = -(uint)(g_0239424c < fVar32);
        *(uint *)(*(int64_t *)(this_ptr + 0x28) + lVar26 * 4) =
             ~uVar28 & (uint)((float)(int)lVar26 * fVar30) | (uint)fVar32 & uVar28;
        lVar26 = lVar26 + 1;
      } while (lVar26 < *(int *)(this_ptr + 0xc));
    }
  }
  if ((param_9 & 0x10) != 0) {
    MUSpectralTimeSlice_getTrueFreqData(*local_res8,param_8);
  }
  if ((param_9 & 0xa0) != 0) {
    if ((param_9 & 0x20) != 0) {
      puVar16 = (void*)FUN_00e83010();
      *(void**)(this_ptr + 0x38) = puVar16;
      *puVar16 = 0;
    }
    if (1 < *(int *)(this_ptr + 0xc)) {
      fVar31 = (float)dVar1 * (float)iVar10 * g_0239011c;
      lVar26 = 1;
      do {
        auVar45._0_8_ =
             FUN_015b4cf0(*(float *)(*(int64_t *)(this_ptr + 0x20) + lVar26 * 4) -
                          *(float *)(*(int64_t *)(this_ptr + 0x20) + -4 + lVar26 * 4));
        auVar45._8_8_ = extraout_XMM0_Qb_07;
        if (*(int64_t *)(this_ptr + 0x48) != 0) {
          *(float *)(*(int64_t *)(this_ptr + 0x48) + lVar26 * 8) = (float)auVar45._0_8_;
        }
        if (*(int64_t *)(this_ptr + 0x38) != 0) {
          auVar46._4_12_ = auVar45._4_12_;
          auVar46._0_4_ = (float)auVar45._0_8_ * fVar31;
          iVar10 = FUN_00e7d780(auVar46._0_8_);
          *(int *)(*(int64_t *)(this_ptr + 0x38) + lVar26 * 4) = -iVar10;
        }
        lVar26 = lVar26 + 1;
      } while (lVar26 < *(int *)(this_ptr + 0xc));
    }
  }
  if ((*(int64_t *)(this_ptr + 0x18) != 0) && ((param_9 & 2) == 0)) {
    FUN_00e83070();
    *(void*)(this_ptr + 0x18) = 0;
  }
  if ((*(int64_t *)(this_ptr + 0x20) != 0) && ((param_9 & 4) == 0)) {
    FUN_00e83070();
    *(void*)(this_ptr + 0x20) = 0;
  }
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 015cabc0
// ============================================================
// Function: FUN_015cabc0
// Address: 015cabc0
// Size: 3309 bytes
// Class: MUSpectralTimeSlice
// === MUSpectralTimeSlice properties ===
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


void FUN_015cabc0(void)

{
  double dVar1;
  int iVar2;
  int64_t lVar3;
  char *pcVar4;
  int64_t lVar5;
  void*puVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t *arg1;
  int64_t this_ptr;
  uint uVar10;
  int *in_R9;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  uint32_t uVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  uint32_t uVar22;
  float fVar23;
  uint32_t uVar24;
  uint32_t uVar25;
  uint uVar26;
  int64_t local_80;
  int64_t local_78;
  int64_t *local_58;
  int64_t local_50;
  char local_48 [8];
  uint64_t local_40;
  char local_38 [8];
  
  lVar5 = local_50;
  if (*(int *)(*(int64_t *)(this_ptr + 0x68) + 0xc) == 0) {
    if (*(int *)(*(int64_t *)(this_ptr + 0x60) + 0xc) == 0) {
      return;
    }
LAB_015cac1e:
    FUN_00c8e690();
    if ((((local_48[0] == '\0') && (local_50 != 0)) && (FUN_00d50b00(), local_48[0] != '\0')) &&
       (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    bVar14 = local_50 != 0;
    lVar12 = local_50;
  }
  else {
    if (*(int *)(*(int64_t *)(this_ptr + 0x60) + 0xc) != 0) goto LAB_015cac1e;
    bVar14 = false;
    lVar12 = 0;
  }
  local_58 = (int64_t *)(this_ptr + 0x60);
  if (*(int *)(*arg1 + 0xc) == 0) {
    bVar15 = false;
    local_80 = 0;
  }
  else {
    FUN_00c8e690();
    if (((local_48[0] == '\0') && (local_50 != 0)) &&
       ((FUN_00d50b00(), local_48[0] != '\0' && (local_50 != 0)))) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    local_80 = local_50;
    bVar15 = local_50 != 0;
  }
  fVar19 = g_02394214;
  lVar11 = *local_58;
  uVar10 = *(uint *)(lVar11 + 0xc);
  fVar17 = g_02394214;
  if (2 < (int)uVar10) {
    FUN_00d242c0(g_02394214,0);
    iVar2 = *(int *)(*local_58 + 0xc);
    uVar21 = iVar2 - 1;
    if (1 < iVar2) {
      lVar11 = *(int64_t *)(*local_58 + 0x10);
      lVar9 = *(int64_t *)(lVar12 + 0x10);
      if (uVar21 == 1) {
        uVar7 = 0;
      }
      else {
        uVar10 = uVar21 & 0xfffffffe;
        uVar8 = 0;
        do {
          *(float *)(lVar9 + uVar8 * 4) =
               (float)(*(double *)(*(int64_t *)(lVar11 + 8 + uVar8 * 8) + 0x10) -
                      *(double *)(*(int64_t *)(lVar11 + uVar8 * 8) + 0x10));
          uVar7 = uVar8 + 2;
          *(float *)(lVar9 + 4 + uVar8 * 4) =
               (float)(*(double *)(*(int64_t *)(lVar11 + 0x10 + uVar8 * 8) + 0x10) -
                      *(double *)(*(int64_t *)(lVar11 + 8 + uVar8 * 8) + 0x10));
          uVar8 = uVar7;
        } while (uVar10 != uVar7);
      }
      in_R9 = (int *)(uint64_t)uVar21;
      if ((uVar21 & 1) != 0) {
        *(float *)(lVar9 + uVar7 * 4) =
             (float)(*(double *)(*(int64_t *)(lVar11 + 8 + uVar7 * 8) + 0x10) -
                    *(double *)(*(int64_t *)(lVar11 + uVar7 * 8) + 0x10));
      }
    }
    _qsort(FUN_00e8b5c0,4,uVar10,in_R9);
    lVar11 = *local_58;
    uVar10 = *(uint *)(lVar11 + 0xc);
    fVar17 = *(float *)(*(int64_t *)(lVar12 + 0x10) +
                       (int64_t)(int)((double)(int)(uVar10 - 1) * g_023942d0) * 4);
  }
  fVar20 = g_02390124;
  if (fVar17 <= g_02390124) {
    fVar20 = fVar17;
  }
  local_40 = CONCAT44(local_40._4_4_,fVar20);
  fVar17 = g_02394244 * fVar20;
  if (g_02394244 * fVar20 <= g_02411260) {
    fVar17 = g_02411260;
  }
  *(float *)(this_ptr + 0x90) = fVar17;
  if (uVar10 != 0) {
    if (0 < (int)uVar10) {
      lVar11 = *(int64_t *)(lVar11 + 0x10);
      lVar9 = *(int64_t *)(lVar12 + 0x10);
      if ((uint64_t)uVar10 - 1 < 3) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          *(void*)(lVar9 + uVar8 * 4) =
               *(void*)(*(int64_t *)(lVar11 + uVar8 * 8) + 0x20);
          *(void*)(lVar9 + 4 + uVar8 * 4) =
               *(void*)(*(int64_t *)(lVar11 + 8 + uVar8 * 8) + 0x20);
          *(void*)(lVar9 + 8 + uVar8 * 4) =
               *(void*)(*(int64_t *)(lVar11 + 0x10 + uVar8 * 8) + 0x20);
          *(void*)(lVar9 + 0xc + uVar8 * 4) =
               *(void*)(*(int64_t *)(lVar11 + 0x18 + uVar8 * 8) + 0x20);
          uVar8 = uVar8 + 4;
        } while ((uVar10 & 0xfffffffc) != uVar8);
      }
      if ((uint64_t)(uVar10 & 3) != 0) {
        uVar7 = 0;
        do {
          *(void*)(lVar9 + uVar8 * 4 + uVar7 * 4) =
               *(void*)(*(int64_t *)(lVar11 + uVar8 * 8 + uVar7 * 8) + 0x20);
          uVar7 = uVar7 + 1;
        } while ((uVar10 & 3) != uVar7);
      }
    }
    _qsort(FUN_00e8b5c0,4,uVar10,in_R9);
    uVar21 = *(uint *)(*local_58 + 0xc);
    fVar17 = *(float *)(*(int64_t *)(lVar12 + 0x10) +
                       (int64_t)(int)((double)(int)uVar21 * g_023b1e88) * 4);
    if ((g_02394274 <= fVar17) && (0 < (int)uVar21)) {
      fVar17 = g_02390124 / fVar17;
      lVar11 = *(int64_t *)(*local_58 + 0x10);
      if (uVar21 == 1) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          lVar9 = *(int64_t *)(lVar11 + uVar8 * 8);
          fVar20 = *(float *)(lVar9 + 0x20) * fVar17;
          *(float *)(lVar9 + 0x20) = fVar20;
          if (g_02390124 < fVar20) {
            *(void*)(*(int64_t *)(*(int64_t *)(*local_58 + 0x10) + uVar8 * 8) + 0x20) =
                 0x3f800000;
          }
          lVar9 = *(int64_t *)(lVar11 + 8 + uVar8 * 8);
          fVar20 = *(float *)(lVar9 + 0x20) * fVar17;
          *(float *)(lVar9 + 0x20) = fVar20;
          if (g_02390124 < fVar20) {
            *(void*)(*(int64_t *)(*(int64_t *)(*local_58 + 0x10) + 8 + uVar8 * 8) + 0x20) =
                 0x3f800000;
          }
          uVar8 = uVar8 + 2;
        } while ((uVar21 & 0xfffffffe) != uVar8);
      }
      if (((uVar21 & 1) != 0) &&
         (lVar11 = *(int64_t *)(lVar11 + uVar8 * 8), fVar17 = fVar17 * *(float *)(lVar11 + 0x20),
         *(float *)(lVar11 + 0x20) = fVar17, g_02390124 < fVar17)) {
        *(void*)(*(int64_t *)(*(int64_t *)(*local_58 + 0x10) + uVar8 * 8) + 0x20) =
             0x3f800000;
      }
    }
  }
  lVar11 = *arg1;
  uVar21 = *(uint *)(lVar11 + 0xc);
  if ((uint64_t)uVar21 != 0) {
    if (0 < (int)uVar21) {
      lVar11 = *(int64_t *)(lVar11 + 0x10);
      lVar9 = *(int64_t *)(local_80 + 0x10);
      uVar10 = uVar21 & 3;
      if ((uint64_t)uVar21 - 1 < 3) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          *(void*)(lVar9 + uVar8 * 4) =
               *(void*)(*(int64_t *)(lVar11 + uVar8 * 8) + 0x20);
          *(void*)(lVar9 + 4 + uVar8 * 4) =
               *(void*)(*(int64_t *)(lVar11 + 8 + uVar8 * 8) + 0x20);
          *(void*)(lVar9 + 8 + uVar8 * 4) =
               *(void*)(*(int64_t *)(lVar11 + 0x10 + uVar8 * 8) + 0x20);
          *(void*)(lVar9 + 0xc + uVar8 * 4) =
               *(void*)(*(int64_t *)(lVar11 + 0x18 + uVar8 * 8) + 0x20);
          uVar8 = uVar8 + 4;
        } while ((uVar21 & 0xfffffffc) != uVar8);
      }
      if ((uint64_t)uVar10 != 0) {
        uVar7 = 0;
        do {
          *(void*)(lVar9 + uVar8 * 4 + uVar7 * 4) =
               *(void*)(*(int64_t *)(lVar11 + uVar8 * 8 + uVar7 * 8) + 0x20);
          uVar7 = uVar7 + 1;
        } while (uVar10 != uVar7);
      }
    }
    _qsort(FUN_00e8b5c0,4,uVar10,in_R9);
    fVar20 = g_02391094;
    lVar11 = *arg1;
    uVar10 = *(uint *)(lVar11 + 0xc);
    fVar17 = *(float *)(*(int64_t *)(local_80 + 0x10) +
                       (int64_t)(int)((double)(int)uVar10 * g_023b1e88) * 4);
    if ((g_02394274 <= fVar17) && (0 < (int)uVar10)) {
      fVar17 = (g_02390124 / fVar17) * g_02391094;
      lVar9 = *(int64_t *)(lVar11 + 0x10);
      if (uVar10 == 1) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          lVar13 = *(int64_t *)(lVar9 + uVar8 * 8);
          fVar23 = *(float *)(lVar13 + 0x20) * fVar17;
          *(float *)(lVar13 + 0x20) = fVar23;
          if (fVar20 < fVar23) {
            lVar11 = *arg1;
            *(void*)(*(int64_t *)(*(int64_t *)(lVar11 + 0x10) + uVar8 * 8) + 0x20) =
                 0x3e4ccccd;
          }
          lVar13 = *(int64_t *)(lVar9 + 8 + uVar8 * 8);
          fVar23 = *(float *)(lVar13 + 0x20) * fVar17;
          *(float *)(lVar13 + 0x20) = fVar23;
          if (fVar20 < fVar23) {
            lVar11 = *arg1;
            *(void*)(*(int64_t *)(*(int64_t *)(lVar11 + 0x10) + 8 + uVar8 * 8) + 0x20) =
                 0x3e4ccccd;
          }
          uVar8 = uVar8 + 2;
        } while ((uVar10 & 0xfffffffe) != uVar8);
      }
      if (((uVar10 & 1) != 0) &&
         (lVar9 = *(int64_t *)(lVar9 + uVar8 * 8), fVar17 = fVar17 * *(float *)(lVar9 + 0x20),
         *(float *)(lVar9 + 0x20) = fVar17, g_02391094 < fVar17)) {
        lVar11 = *arg1;
        *(void*)(*(int64_t *)(*(int64_t *)(lVar11 + 0x10) + uVar8 * 8) + 0x20) = 0x3e4ccccd
        ;
      }
    }
  }
  if ((*(int *)(*local_58 + 0xc) == 0) || (*(int *)(lVar11 + 0xc) == 0)) {
    local_48[0] = '\0';
    fVar17 = (float)FUN_00d214d0();
    if ((local_48[0] != '\0') && (lVar11 != 0)) {
      fVar17 = (float)FUN_00d50b20();
    }
    goto LAB_015cb6cd;
  }
  uVar18 = FUN_00d242c0(local_58,0);
  FUN_00d242c0(uVar18,0);
  lVar11 = *local_58;
  if (lVar11 != 0) {
    FUN_00d50b00();
  }
  FUN_015f3b60();
  if (local_48[0] == '\0') {
    if (((local_50 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48[0] = '\0';
  }
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  local_78 = **(int64_t **)(*arg1 + 0x10);
  if (local_78 != 0) {
    FUN_00d50b00();
  }
  lVar11 = **(int64_t **)(*local_58 + 0x10);
  if (lVar11 != 0) {
    FUN_00d50b00();
  }
  if (*(double *)(local_78 + 0x10) <= *(double *)(lVar11 + 0x10) &&
      *(double *)(lVar11 + 0x10) != *(double *)(local_78 + 0x10)) {
    local_48[0] = '\0';
    FUN_00d21140();
    if ((local_48[0] != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23620();
    local_50 = local_78;
  }
  if ((float)local_40 * g_02390120 <= fVar19) {
    fVar19 = (float)local_40 * g_02390120;
  }
  if (*(int *)(*arg1 + 0xc) != 0) {
    FUN_00d23340();
    local_38[0] = local_48[0];
    pcVar4 = local_48;
    if (local_48[0] == '\0') {
      pcVar4 = local_38;
    }
    *pcVar4 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 == local_78) {
      if ((local_38[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_38[0] == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      local_78 = local_50;
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
      local_78 = local_50;
    }
    FUN_00d23340();
    pcVar4 = local_48;
    if (local_48[0] == '\0') {
      pcVar4 = local_38;
    }
    local_38[0] = local_48[0];
    *pcVar4 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 == lVar11) {
      if ((local_38[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar11 = local_50;
      if (local_38[0] == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      else {
        FUN_00d50b20();
      }
    }
    if ((double)fVar19 + *(double *)(lVar11 + 0x10) < *(double *)(local_78 + 0x10)) {
      local_48[0] = '\0';
      FUN_00d21140();
      if ((local_48[0] != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d23740();
    }
  }
  lVar9 = *arg1;
  if (*(int *)(lVar9 + 0xc) < 1) {
LAB_015cb6ab:
    fVar17 = (float)FUN_00d50b20();
  }
  else {
    lVar13 = 0;
    do {
      lVar9 = *(int64_t *)(*(int64_t *)(lVar9 + 0x10) + lVar13 * 8);
      if (local_78 == lVar9) {
LAB_015cb5a9:
        iVar2 = *(int *)(lVar5 + 0xc);
        fVar17 = g_02394264;
      }
      else {
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        if (local_78 != 0) {
          FUN_00d50b20();
          local_78 = lVar9;
          goto LAB_015cb5a9;
        }
        iVar2 = *(int *)(lVar5 + 0xc);
        fVar17 = g_02394264;
        local_78 = lVar9;
      }
      g_02394264 = fVar17;
      if (0 < iVar2) {
        lVar9 = 0;
        local_40._4_4_ = (uint32_t)((uint64_t)local_40 >> 0x20);
        local_40 = CONCAT44(local_40._4_4_,fVar17);
        do {
          lVar3 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + lVar9 * 8);
          if (lVar11 != lVar3) {
            if (lVar3 != 0) {
              FUN_00d50b00();
            }
            bVar16 = lVar11 != 0;
            lVar11 = lVar3;
            if (bVar16) {
              FUN_00d50b20();
            }
          }
          fVar17 = (float)((uint)(float)(*(double *)(local_78 + 0x10) - *(double *)(lVar11 + 0x10))
                          & g_02390140);
          if ((float)local_40 <= fVar17) {
            fVar17 = (float)local_40;
          }
          lVar9 = lVar9 + 1;
          local_40 = CONCAT44(local_40._4_4_,fVar17);
        } while (lVar9 < *(int *)(lVar5 + 0xc));
      }
      if (fVar19 < fVar17) {
        local_48[0] = '\0';
        fVar17 = (float)FUN_00d21140();
        if ((local_48[0] != '\0') && (local_78 != 0)) {
          fVar17 = (float)FUN_00d50b20();
        }
      }
      lVar13 = lVar13 + 1;
      lVar9 = *arg1;
    } while (lVar13 < *(int *)(lVar9 + 0xc));
    if (lVar11 != 0) goto LAB_015cb6ab;
  }
  if (local_78 != 0) {
    fVar17 = (float)FUN_00d50b20();
  }
  if (lVar5 != 0) {
    fVar17 = (float)FUN_00d50b20();
  }
LAB_015cb6cd:
  lVar5 = *(int64_t *)(this_ptr + 0x68);
  if (0 < *(int *)(lVar5 + 0xc)) {
    lVar11 = 0;
    do {
      lVar5 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + lVar11 * 8);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      uVar18 = SUB84(g_024110e8,0);
      uVar22 = (uint32_t)((uint64_t)g_024110e8 >> 0x20);
      dVar1 = *(double *)(lVar5 + 0x18);
      if (dVar1 <= g_024110e8) {
        uVar18 = SUB84(dVar1,0);
        uVar22 = (uint32_t)((uint64_t)dVar1 >> 0x20);
      }
      uVar24 = SUB84(g_02391030,0);
      uVar25 = (int)((uint64_t)g_02391030 >> 0x20);
      if (g_02391030 <= (double)CONCAT44(uVar22,uVar18)) {
        uVar24 = uVar18;
        uVar25 = uVar22;
      }
      local_40 = *(void*)(lVar5 + 0x10);
      uVar10 = -(uint)((float)(double)CONCAT44(uVar25,uVar24) <= g_02394270);
      fVar19 = (float)_exp2f(*(float *)(lVar5 + 0x24) * g_023941f4);
      fVar19 = fVar19 * g_023941f8;
      fVar17 = g_02394254;
      if (g_02394254 <= *(float *)(lVar5 + 0x28)) {
        fVar17 = *(float *)(lVar5 + 0x28);
      }
      fVar20 = (float)_powf(fVar17,g_02394288);
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_025f30f8;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(void*)((int64_t)puVar6 + 0x1c) = 0;
      *(void*)((int64_t)puVar6 + 0x24) = 0;
      FUN_00d500e0();
      uVar21 = (uint)SQRT((float)(double)CONCAT44(uVar25,uVar24)) & g_02390140;
      uVar26 = uVar10 & g_023b3e04;
      fVar19 = g_02411264 / fVar19;
      fVar17 = g_02394254;
      if (g_02394254 <= fVar19) {
        fVar17 = fVar19;
      }
      fVar17 = (float)((uint)SQRT(fVar17) & g_02390140);
      puVar6[2] = local_40;
      *(float *)(puVar6 + 4) = fVar20 * fVar17 * (float)(uVar26 | ~uVar10 & uVar21);
      local_48[0] = '\0';
      FUN_00d21140();
      if ((local_48[0] != '\0') && (puVar6 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      fVar17 = (float)FUN_00d50b20();
      lVar11 = lVar11 + 1;
      lVar5 = *(int64_t *)(this_ptr + 0x68);
    } while (lVar11 < *(int *)(lVar5 + 0xc));
  }
  FUN_00d242c0(fVar17,0);
  if ((bVar15) && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar14) && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 015c9ee0
// ============================================================
// Function: FUN_015c9ee0
// Address: 015c9ee0
// Size: 2350 bytes
// Class: MUSpectralTimeSlice
// === MUSpectralTimeSlice properties ===
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


void FUN_015c9ee0(void)

{
  uint *puVar1;
  uint64_t uVar2;
  void* pVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  void*puVar10;
  int64_t lVar11;
  void *pvVar12;
  int64_t lVar13;
  void*puVar14;
  void* pVar15;
  void*puVar16;
  int64_t *arg1;
  uint64_t uVar17;
  int64_t this_ptr;
  int64_t lVar18;
  uint32_t uVar19;
  int64_t local_88;
  char local_80;
  uint32_t local_64;
  void*local_60;
  void*local_58;
  void*local_48;
  char local_40;
  
  puVar10 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar16 = &g_02572358;
  *puVar10 = &g_02572358;
  (*g_02572370)();
  lVar11 = *arg1;
  if (0 < *(int *)(lVar11 + 0xc)) {
    lVar18 = 0;
    do {
      pVar15 = (void*)puVar16;
      lVar11 = *(int64_t *)(*(int64_t *)(lVar11 + 0x10) + lVar18 * 8);
      if (lVar11 != 0) {
        FUN_00d50b00();
      }
      pvVar12 = _pthread_getspecific(pVar15);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      if (local_40 == '\0') {
        if (local_48 != (void*)0x0) {
          FUN_00d50b00();
          goto LAB_015ca020;
        }
LAB_015ca0b0:
        bVar8 = true;
        bVar6 = false;
        local_60 = (void*)0x0;
        bVar7 = false;
        local_58 = (void*)0x0;
LAB_015ca40f:
        pvVar12 = _pthread_getspecific(pVar15);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar4 = (double)FUN_01259650();
        pvVar12 = _pthread_getspecific(pVar15);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar5 = (double)FUN_012646c0();
        pvVar12 = _pthread_getspecific(pVar15);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar19 = FUN_0125a2c0();
        local_64 = g_02390124;
        if (local_60 != (void*)0x0) {
          pvVar12 = _pthread_getspecific(pVar15);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_64 = FUN_014ecb20();
        }
        puVar14 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar14 = &g_025f30f8;
        puVar14[2] = 0;
        puVar14[3] = 0;
        *(void*)((int64_t)puVar14 + 0x1c) = 0;
        *(void*)((int64_t)puVar14 + 0x24) = 0;
        FUN_00d500e0();
        puVar14[2] = dVar4;
        *(void*)(puVar14 + 4) = local_64;
        *(void*)(puVar14 + 5) = local_64;
        *(void*)((int64_t)puVar14 + 0x24) = uVar19;
        puVar14[3] = dVar5 - dVar4;
        FUN_00d21140();
        if (local_58 == (void*)0x0) {
          uVar2 = puVar14[2];
          uVar19 = *(void*)(puVar14 + 4);
          local_48 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *local_48 = &g_025f30f8;
          local_48[2] = 0;
          local_48[3] = 0;
          *(void*)((int64_t)local_48 + 0x1c) = 0;
          *(void*)((int64_t)local_48 + 0x24) = 0;
          FUN_00d500e0();
          local_48[2] = uVar2;
          *(void*)(local_48 + 4) = uVar19;
          FUN_00d21140();
          FUN_00d50b20();
LAB_015ca7da:
          FUN_00d50b20();
        }
        else {
          lVar13 = *(int64_t *)(this_ptr + 0x60);
          puVar1 = (uint *)(lVar13 + 0xc);
          if (0 < (int)*puVar1) {
            lVar13 = *(int64_t *)(lVar13 + 0x10);
            uVar17 = 0;
            do {
              local_48 = puVar14;
              if ((double)((uint64_t)
                           (*(double *)(*(int64_t *)(lVar13 + uVar17 * 8) + 0x10) - dVar4) &
                          g_023908f0) < g_02391030) goto LAB_015ca7d5;
              uVar17 = uVar17 + 1;
            } while (*puVar1 != uVar17);
          }
          pvVar12 = _pthread_getspecific((void*)lVar13);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar19 = FUN_014bae60();
          local_48 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *local_48 = &g_025f30f8;
          local_48[2] = 0;
          local_48[3] = 0;
          *(void*)((int64_t)local_48 + 0x1c) = 0;
          *(void*)((int64_t)local_48 + 0x24) = 0;
          FUN_00d500e0();
          local_48[2] = dVar4;
          *(void*)(local_48 + 4) = uVar19;
          FUN_00d21140();
          FUN_00d50b20();
LAB_015ca7d5:
          if (puVar14 != (void*)0x0) goto LAB_015ca7da;
        }
        local_40 = '\0';
        if ((bVar6) && (local_60 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((bVar7) && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (!bVar8) goto LAB_015ca817;
      }
      else {
        if (local_48 == (void*)0x0) goto LAB_015ca0b0;
LAB_015ca020:
        pvVar12 = _pthread_getspecific(pVar15);
        pVar3 = (void*)local_48;
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar15 = pVar3;
        }
        FUN_013dfcb0();
        if (local_48 == (void*)0x0) {
          cVar9 = '\0';
        }
        else {
          pvVar12 = _pthread_getspecific(pVar15);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar15 = pVar3;
          }
          FUN_013de560();
          pvVar12 = _pthread_getspecific(pVar15);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar9 = FUN_014bc070();
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (cVar9 == '\0') {
          pvVar12 = _pthread_getspecific(pVar15);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          local_60 = local_48;
          puVar14 = local_48;
          if (local_48 == (void*)0x0) {
            local_60 = (void*)0x0;
            bVar6 = false;
          }
          else {
            bVar6 = true;
            if (local_40 == '\0') {
              FUN_00d50b00();
            }
          }
          pvVar12 = _pthread_getspecific((void*)puVar14);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            puVar14 = local_48;
          }
          FUN_013dfdd0();
          if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (local_48 == (void*)0x0) {
            bVar7 = false;
            local_58 = (void*)0x0;
          }
          else {
            pvVar12 = _pthread_getspecific((void*)puVar14);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013e5500();
            local_58 = local_48;
            if (local_48 == (void*)0x0) {
              local_58 = (void*)0x0;
              bVar7 = false;
              puVar14 = local_48;
            }
            else {
              bVar7 = true;
              puVar14 = local_48;
              if (local_40 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          pVar15 = (void*)puVar14;
          pvVar12 = _pthread_getspecific(pVar15);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar15 = pVar3;
          }
          FUN_013df480();
          if (local_48 == (void*)0x0) {
            cVar9 = '\0';
          }
          else {
            pvVar12 = _pthread_getspecific(pVar15);
            if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
              pVar15 = pVar3;
            }
            FUN_013df480();
            pvVar12 = _pthread_getspecific(pVar15);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar9 = FUN_013c8ce0();
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (cVar9 != '\0') {
            *(void*)(this_ptr + 0x94) = 1;
          }
          bVar8 = false;
          goto LAB_015ca40f;
        }
LAB_015ca817:
        FUN_00d50b20();
      }
      if (lVar11 != 0) {
        FUN_00d50b20();
      }
      lVar18 = lVar18 + 1;
      lVar11 = *arg1;
      puVar16 = (void*)(int64_t)*(int *)(lVar11 + 0xc);
    } while (lVar18 < (int64_t)puVar16);
  }
  FUN_015cabc0();
  if (puVar10 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 015cbd00
// ============================================================
// Function: FUN_015cbd00
// Address: 015cbd00
// Size: 2110 bytes
// Class: MUSpectralTimeSlice
// === MUSpectralTimeSlice properties ===
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


void FUN_015cbd00(int64_t *param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  code *pcVar4;
  int64_t *plVar5;
  char cVar6;
  void*puVar7;
  void*puVar8;
  int64_t lVar9;
  void *pvVar10;
  int64_t lVar11;
  void*puVar12;
  void* pVar13;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar14;
  int64_t lVar15;
  uint32_t uVar16;
  uint32_t uVar17;
  int64_t local_98;
  char local_90;
  int64_t *local_50;
  int64_t *local_40;
  char local_38;
  
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  pcVar4 = g_02572370;
  (*g_02572370)();
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_02572358;
  (*pcVar4)();
  lVar9 = *arg1;
  if (0 < *(int *)(lVar9 + 0xc)) {
    lVar15 = 0;
    do {
      plVar5 = local_40;
      lVar9 = *(int64_t *)(*(int64_t *)(lVar9 + 0x10) + lVar15 * 8);
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      pvVar10 = _pthread_getspecific((void*)param_1);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        pvVar10 = _pthread_getspecific((void*)param_1);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        pvVar10 = _pthread_getspecific((void*)param_1);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar6 = FUN_014bc070();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar6 == '\0') {
          pvVar10 = _pthread_getspecific((void*)param_1);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013df480();
          if (local_40 == (int64_t *)0x0) {
            cVar6 = '\0';
          }
          else {
            pvVar10 = _pthread_getspecific((void*)param_1);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013df480();
            pvVar10 = _pthread_getspecific((void*)param_1);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar6 = FUN_013c8ce0();
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar6 != '\0') {
            *(void*)(this_ptr + 0x94) = 1;
          }
          pvVar10 = _pthread_getspecific((void*)param_1);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          pvVar10 = _pthread_getspecific((void*)param_1);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dfdd0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 == (int64_t *)0x0) {
            bVar3 = false;
            local_50 = (int64_t *)0x0;
          }
          else {
            pvVar10 = _pthread_getspecific((void*)param_1);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013e5500();
            local_50 = local_40;
            if (local_40 == (int64_t *)0x0) {
              local_50 = (int64_t *)0x0;
              bVar3 = false;
              param_1 = local_40;
            }
            else {
              bVar3 = true;
              param_1 = local_40;
              if (local_38 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          pvVar10 = _pthread_getspecific((void*)param_1);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            param_1 = local_40;
          }
          dVar1 = (double)FUN_014bb640();
          pvVar10 = _pthread_getspecific((void*)param_1);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            param_1 = local_40;
          }
          dVar2 = (double)FUN_014bb710();
          pvVar10 = _pthread_getspecific((void*)param_1);
          plVar14 = local_40;
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            param_1 = local_40;
            plVar14 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
          }
          pVar13 = (void*)param_1;
          uVar16 = (**(code **)(*plVar14 + 0x3e0))();
          pvVar10 = _pthread_getspecific(pVar13);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            pVar13 = (void*)local_40;
          }
          uVar17 = FUN_014ecb20();
          puVar12 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar12 = &g_025f30f8;
          puVar12[2] = 0;
          puVar12[3] = 0;
          *(void*)((int64_t)puVar12 + 0x1c) = 0;
          *(void*)((int64_t)puVar12 + 0x24) = 0;
          FUN_00d500e0();
          puVar12[2] = dVar1;
          *(void*)(puVar12 + 4) = uVar17;
          *(void*)(puVar12 + 5) = uVar17;
          *(void*)((int64_t)puVar12 + 0x24) = uVar16;
          puVar12[3] = dVar2 - dVar1;
          FUN_00d21140();
          if (local_50 == (int64_t *)0x0) {
            lVar11 = puVar12[2];
            uVar16 = *(void*)(puVar12 + 4);
            local_40 = (int64_t *)FUN_00e8fc40();
            FUN_00d4ff40();
            *local_40 = (int64_t)&g_025f30f8;
            local_40[2] = 0;
            local_40[3] = 0;
            *(void*)((int64_t)local_40 + 0x1c) = 0;
            *(void*)((int64_t)local_40 + 0x24) = 0;
            FUN_00d500e0();
            local_40[2] = lVar11;
            *(void*)(local_40 + 4) = uVar16;
            FUN_00d21140();
            FUN_00d50b20();
          }
          else {
            local_40 = local_50;
            cVar6 = FUN_00d23d70();
            if (cVar6 == '\0') {
              pvVar10 = _pthread_getspecific(pVar13);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar16 = FUN_014bae60();
              puVar12 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar12 = &g_025f30f8;
              puVar12[2] = 0;
              puVar12[3] = 0;
              *(void*)((int64_t)puVar12 + 0x1c) = 0;
              *(void*)((int64_t)puVar12 + 0x24) = 0;
              FUN_00d500e0();
              puVar12[2] = dVar1;
              *(void*)(puVar12 + 4) = uVar16;
              FUN_00d21140();
              FUN_00d50b20();
              FUN_00d21140();
            }
          }
          local_38 = '\0';
          FUN_00d50b20();
          if ((bVar3) && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar5 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      lVar15 = lVar15 + 1;
      lVar9 = *arg1;
      param_1 = (int64_t *)(int64_t)*(int *)(lVar9 + 0xc);
    } while (lVar15 < (int64_t)param_1);
  }
  FUN_015cabc0();
  if (puVar8 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 015c7920
// ============================================================
// Function: FUN_015c7920
// Address: 015c7920
// Size: 672 bytes
// Class: MUSpectralTimeSlice
// === MUSpectralTimeSlice properties ===
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


int64_t FUN_015c7920(void *param_1,uint64_t param_2,size_t param_3)

{
  void*puVar1;
  void*puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t this_ptr;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  int iVar16;
  uint uVar17;
  void *pvVar18;
  uint uVar19;
  
  if (*(int64_t *)(this_ptr + 0x80) != 0) {
    return *(int64_t *)(this_ptr + 0x80);
  }
  uVar7 = FUN_00e83010();
  *(void*)(this_ptr + 0x80) = uVar7;
  iVar6 = (int)((float)*(int *)(this_ptr + 0x58) * g_02391094);
  iVar16 = 1;
  if (0 < iVar6) {
    iVar16 = iVar6;
  }
  uVar10 = 0;
  uVar8 = FUN_00e83da0();
  iVar6 = *(int *)(this_ptr + 0x58);
  uVar19 = (uint)((float)iVar6 * g_0239011c);
  if (0 < (int)uVar19) {
    ___bzero();
    uVar10 = (uint64_t)uVar19;
  }
  uVar17 = (iVar16 + uVar19) - (int)uVar10;
  pvVar18 = (void *)(uint64_t)uVar17;
  if (uVar17 != 0 && (int)uVar10 <= (int)(iVar16 + uVar19)) {
    lVar3 = *(int64_t *)(this_ptr + 0x80);
    if ((uVar17 < 8) ||
       ((lVar3 + uVar10 * 4 < uVar8 + (int64_t)pvVar18 * 4 &&
        (uVar8 < lVar3 + (uVar10 + (int64_t)pvVar18) * 4)))) {
      param_1 = (void *)0x0;
    }
    else {
      param_1 = (void *)(uint64_t)(uVar17 & 0xfffffff8);
      uVar9 = ((int64_t)param_1 - 8U >> 3) + 1;
      uVar11 = (uint64_t)((uint)uVar9 & 3);
      if ((int64_t)param_1 - 8U < 0x18) {
        lVar13 = 0;
      }
      else {
        lVar15 = lVar3 + uVar10 * 4;
        lVar12 = -(uVar9 & 0xfffffffffffffffc);
        lVar13 = 0;
        do {
          puVar1 = (void*)(uVar8 + lVar13 * 4);
          uVar7 = puVar1[1];
          puVar2 = (void*)(uVar8 + 0x10 + lVar13 * 4);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (void*)(lVar15 + lVar13 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (void*)(lVar15 + 0x10 + lVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (void*)(uVar8 + 0x20 + lVar13 * 4);
          uVar7 = puVar1[1];
          puVar2 = (void*)(uVar8 + 0x30 + lVar13 * 4);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (void*)(lVar15 + 0x20 + lVar13 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (void*)(lVar15 + 0x30 + lVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (void*)(uVar8 + 0x40 + lVar13 * 4);
          uVar7 = puVar1[1];
          puVar2 = (void*)(uVar8 + 0x50 + lVar13 * 4);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (void*)(lVar15 + 0x40 + lVar13 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (void*)(lVar15 + 0x50 + lVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (void*)(uVar8 + 0x60 + lVar13 * 4);
          uVar7 = puVar1[1];
          puVar2 = (void*)(uVar8 + 0x70 + lVar13 * 4);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (void*)(lVar15 + 0x60 + lVar13 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (void*)(lVar15 + 0x70 + lVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar13 = lVar13 + 0x20;
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0);
      }
      lVar15 = 0;
      if (uVar11 != 0) {
        lVar12 = uVar8 + lVar13 * 4;
        lVar13 = lVar3 + (lVar13 + uVar10) * 4;
        lVar15 = uVar11 << 5;
        lVar14 = 0;
        do {
          puVar2 = (void*)(lVar12 + lVar14);
          uVar7 = puVar2[1];
          puVar1 = (void*)(lVar12 + 0x10 + lVar14);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          puVar1 = (void*)(lVar13 + lVar14);
          *puVar1 = *puVar2;
          puVar1[1] = uVar7;
          puVar1 = (void*)(lVar13 + 0x10 + lVar14);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar14 = lVar14 + 0x20;
        } while (lVar15 != lVar14);
      }
      param_3 = (size_t)lVar15;
      uVar10 = uVar10 + (int64_t)param_1;
      if (param_1 == pvVar18) goto LAB_015c7b77;
    }
    uVar9 = ~(uint64_t)param_1;
    uVar11 = (uint64_t)pvVar18 & 3;
    if ((uVar17 & 3) != 0) {
      do {
        lVar15 = (int64_t)param_1 * 4;
        param_1 = (void *)((int64_t)param_1 + 1);
        *(void*)(lVar3 + uVar10 * 4) = *(void*)(uVar8 + lVar15);
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (2 < uVar9 + (int64_t)pvVar18) {
      lVar3 = lVar3 + uVar10 * 4;
      pvVar18 = (void *)((int64_t)pvVar18 - (int64_t)param_1);
      lVar15 = uVar8 + (int64_t)param_1 * 4;
      param_1 = (void *)0x0;
      do {
        *(void*)(lVar3 + (int64_t)param_1 * 4) =
             *(void*)(lVar15 + (int64_t)param_1 * 4);
        *(void*)(lVar3 + 4 + (int64_t)param_1 * 4) =
             *(void*)(lVar15 + 4 + (int64_t)param_1 * 4);
        *(void*)(lVar3 + 8 + (int64_t)param_1 * 4) =
             *(void*)(lVar15 + 8 + (int64_t)param_1 * 4);
        *(void*)(lVar3 + 0xc + (int64_t)param_1 * 4) =
             *(void*)(lVar15 + 0xc + (int64_t)param_1 * 4);
        param_1 = (void *)((int64_t)param_1 + 4);
      } while (pvVar18 != param_1);
      uVar10 = uVar10 + (int64_t)param_1;
    }
  }
LAB_015c7b77:
  if ((int)(uint)uVar10 < iVar6) {
    _memset_pattern16(param_1,(void *)((uint64_t)(iVar6 + ~(uint)uVar10) * 4 + 4),param_3);
  }
  FUN_00e83070();
  return *(int64_t *)(this_ptr + 0x80);
}



// ============================================================
// 015c6350
// ============================================================
// Function: MUSpectralTimeSlice_getTrueFreqData
// Address: 015c6350
// Size: 864 bytes
// Class: MUSpectralTimeSlice
// String references:
//   "MUSpectralTimeSlice::getTrueFreqData(): no trueFreq data"
// === MUSpectralTimeSlice properties ===
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


void MUSpectralTimeSlice_getTrueFreqData(uint64_t param_1,char param_2)

{
  float fVar1;
  uint32_t uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int iVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint uVar13;
  int64_t *arg1;
  int iVar14;
  int64_t this_ptr;
  uint64_t uVar15;
  void*puVar16;
  int64_t lVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if (*(int64_t *)(this_ptr + 0x28) == 0) {
    FUN_00e828a0();
    lVar7 = *(int64_t *)(this_ptr + 0x30);
  }
  else {
    lVar7 = *(int64_t *)(this_ptr + 0x30);
  }
  if (lVar7 != 0) {
    FUN_00e83070();
    *(void*)(this_ptr + 0x30) = 0;
  }
  uVar6 = FUN_00e83010();
  *(void*)(this_ptr + 0x30) = uVar6;
  if (param_2 == '\0') {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_015c7920();
  }
  fVar19 = g_02394250;
  uVar5 = g_02390140;
  iVar3 = *(int *)(*arg1 + 0x58);
  uVar4 = *(uint *)(this_ptr + 0xc);
  lVar17 = (int64_t)(int)uVar4;
  if (lVar17 < 6) {
    puVar16 = *(void**)(this_ptr + 0x30);
  }
  else {
    fVar21 = (float)*(double *)(*arg1 + 0x50);
    fVar20 = g_02390124 / fVar21;
    lVar9 = *(int64_t *)(this_ptr + 0x28);
    puVar16 = *(void**)(this_ptr + 0x30);
    lVar11 = 1;
    uVar10 = 3;
    do {
      uVar13 = (int)uVar10 + 3;
      if ((int)uVar4 <= (int)uVar13) {
        uVar13 = uVar4 - 1;
      }
      if ((int64_t)(uVar10 - 2) < (int64_t)(int)uVar13) {
        fVar1 = *(float *)(lVar9 + uVar10 * 4);
        uVar15 = (uint64_t)uVar13;
        fVar22 = (float)((uint)(fVar1 - *(float *)(lVar9 + lVar11 * 4)) & uVar5);
        fVar22 = (float)(-(uint)(fVar22 < fVar21) & (uint)((fVar21 - fVar22) * fVar20 + 0.0));
        if (((lVar11 + 1U != uVar15) &&
            (fVar23 = (float)((uint)(fVar1 - *(float *)(lVar9 + 4 + lVar11 * 4)) & uVar5),
            uVar18 = -(uint)(fVar23 < fVar21),
            fVar22 = (float)(~uVar18 & (uint)fVar22 |
                            (uint)(fVar22 + (fVar21 - fVar23) * fVar20) & uVar18),
            lVar11 + 2U != uVar15)) && (uVar12 = lVar11 + 3, uVar12 != uVar15)) {
          if (((uVar13 - (int)lVar11) + 1 & 1) != 0) {
            if ((uVar12 != uVar10) &&
               (fVar23 = (float)((uint)(fVar1 - *(float *)(lVar9 + 0xc + lVar11 * 4)) & uVar5),
               fVar23 < fVar21)) {
              fVar22 = fVar22 + (fVar21 - fVar23) * fVar20;
            }
            uVar12 = lVar11 + 4;
          }
          if (uVar15 - 4 != lVar11) {
            do {
              if ((uVar10 != uVar12) &&
                 (fVar23 = (float)((uint)(fVar1 - *(float *)(lVar9 + uVar12 * 4)) & uVar5),
                 fVar23 < fVar21)) {
                fVar22 = fVar22 + (fVar21 - fVar23) * fVar20;
              }
              if ((uVar12 + 1 != uVar10) &&
                 (fVar23 = (float)((uint)(fVar1 - *(float *)(lVar9 + 4 + uVar12 * 4)) & uVar5),
                 fVar23 < fVar21)) {
                fVar22 = fVar22 + (fVar21 - fVar23) * fVar20;
              }
              uVar12 = uVar12 + 2;
            } while (uVar12 != uVar15);
          }
        }
      }
      else {
        fVar22 = 0.0;
      }
      lVar11 = lVar11 + 1;
      puVar16[uVar10] = fVar22 * fVar19;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar4 - 2);
  }
  uVar2 = puVar16[3];
  *puVar16 = uVar2;
  puVar16[1] = uVar2;
  puVar16[2] = uVar2;
  lVar9 = (int64_t)(int)(uVar4 - 2);
  puVar16[lVar9] = puVar16[lVar17 + -3];
  if (lVar9 + 1 < lVar17) {
    puVar16[lVar9 + 1] = puVar16[lVar17 + -3];
  }
  if ((param_2 != '\0') && (0 < (int)uVar4)) {
    fVar19 = (float)iVar3;
    iVar8 = iVar3 + -1;
    if (uVar4 == 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        iVar14 = (int)((float)puVar16[uVar10] * fVar19);
        if (iVar14 < 0) {
          iVar14 = 0;
        }
        if (iVar3 <= iVar14) {
          iVar14 = iVar8;
        }
        puVar16[uVar10] = *(void*)(lVar7 + (int64_t)iVar14 * 4);
        iVar14 = (int)((float)puVar16[uVar10 + 1] * fVar19);
        if (iVar14 < 0) {
          iVar14 = 0;
        }
        if (iVar3 <= iVar14) {
          iVar14 = iVar8;
        }
        puVar16[uVar10 + 1] = *(void*)(lVar7 + (int64_t)iVar14 * 4);
        uVar10 = uVar10 + 2;
      } while ((uVar4 & 0xfffffffe) != uVar10);
    }
    if ((uVar4 & 1) != 0) {
      iVar14 = 0;
      if (-1 < (int)(fVar19 * (float)puVar16[uVar10])) {
        iVar14 = (int)(fVar19 * (float)puVar16[uVar10]);
      }
      if (iVar14 < iVar3) {
        iVar8 = iVar14;
      }
      puVar16[uVar10] = *(void*)(lVar7 + (int64_t)iVar8 * 4);
    }
  }
  return;
}



// ============================================================
// 015cc880
// ============================================================
// Function: FUN_015cc880
// Address: 015cc880
// Size: 1395 bytes
// Class: MUSpectralTimeSlice
// === MUSpectralTimeSlice properties ===
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


void FUN_015cc880(int64_t param_1)

{
  uint64_t uVar1;
  int64_t *plVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  code *pcVar6;
  char cVar7;
  void*puVar8;
  void*puVar9;
  void *pvVar10;
  int64_t lVar11;
  int64_t lVar12;
  void*puVar13;
  void*puVar14;
  void* pVar15;
  int64_t *arg1;
  int64_t *plVar16;
  int64_t lVar17;
  float fVar18;
  uint32_t uVar19;
  uint32_t uVar20;
  
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_02572358;
  pcVar6 = g_02572370;
  (*g_02572370)();
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_02572358;
  (*pcVar6)();
  lVar11 = *arg1;
  if (0 < *(int *)(lVar11 + 0xc)) {
    lVar17 = 0;
    do {
      plVar2 = *(int64_t **)(*(int64_t *)(lVar11 + 0x10) + lVar17 * 8);
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pvVar10 = _pthread_getspecific((void*)param_1);
      if ((pvVar10 == (void *)0x0) || (lVar11 = FUN_00e8b990(), lVar11 == 0)) {
        lVar11 = plVar2[0x28];
      }
      else {
        lVar11 = *(int64_t *)(plVar2[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4] + 0x140);
      }
      if (lVar11 != 0) {
        FUN_00d50b00();
      }
      pvVar10 = _pthread_getspecific((void*)param_1);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar3 = (double)FUN_014bb640();
      pvVar10 = _pthread_getspecific((void*)param_1);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar18 = (float)FUN_014ecc50();
      if (fVar18 <= g_02411268) {
        if (lVar11 != 0) {
          puVar13 = (void*)0x0;
          goto LAB_015ccbc1;
        }
      }
      else {
        pvVar10 = _pthread_getspecific((void*)param_1);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar4 = (double)FUN_014bb710();
        pvVar10 = _pthread_getspecific((void*)param_1);
        plVar16 = plVar2;
        if ((pvVar10 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
          plVar16 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
        }
        uVar19 = (**(code **)(*plVar16 + 0x3e0))();
        pvVar10 = _pthread_getspecific((void*)param_1);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar20 = FUN_014ecb20();
        puVar13 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar13 = &g_025f30f8;
        puVar13[2] = 0;
        puVar13[3] = 0;
        *(void*)((int64_t)puVar13 + 0x1c) = 0;
        *(void*)((int64_t)puVar13 + 0x24) = 0;
        FUN_00d500e0();
        puVar13[2] = dVar3;
        *(void*)(puVar13 + 4) = uVar20;
        *(void*)(puVar13 + 5) = uVar20;
        *(void*)((int64_t)puVar13 + 0x24) = uVar19;
        puVar13[3] = dVar4 - dVar3;
        FUN_00d21140();
        if (lVar11 == 0) {
          uVar1 = puVar13[2];
          uVar19 = *(void*)(puVar13 + 4);
          puVar14 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar14 = &g_025f30f8;
          puVar14[2] = 0;
          puVar14[3] = 0;
          *(void*)((int64_t)puVar14 + 0x1c) = 0;
          *(void*)((int64_t)puVar14 + 0x24) = 0;
          FUN_00d500e0();
          puVar14[2] = uVar1;
          *(void*)(puVar14 + 4) = uVar19;
          FUN_00d21140();
          FUN_00d50b20();
LAB_015ccd24:
          if (puVar13 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        else {
LAB_015ccbc1:
          bVar5 = fVar18 <= g_02411268;
          pVar15 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),bVar5);
          cVar7 = FUN_00d23d70();
          if (cVar7 == '\0') {
            pvVar10 = _pthread_getspecific(pVar15);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar19 = FUN_014bae60();
            puVar14 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar14 = &g_025f30f8;
            puVar14[2] = 0;
            puVar14[3] = 0;
            *(void*)((int64_t)puVar14 + 0x1c) = 0;
            *(void*)((int64_t)puVar14 + 0x24) = 0;
            FUN_00d500e0();
            puVar14[2] = dVar3;
            *(void*)(puVar14 + 4) = uVar19;
            FUN_00d21140();
            FUN_00d50b20();
            FUN_00d21140();
          }
          if (!bVar5) goto LAB_015ccd24;
        }
        if (lVar11 != 0) {
          FUN_00d50b20();
        }
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      lVar17 = lVar17 + 1;
      lVar11 = *arg1;
      param_1 = (int64_t)*(int *)(lVar11 + 0xc);
    } while (lVar17 < param_1);
  }
  FUN_015cabc0();
  if (puVar9 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar8 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 015c73a0
// ============================================================
// Function: FUN_015c73a0
// Address: 015c73a0
// Size: 683 bytes
// Class: MUSpectralTimeSlice
// === MUSpectralTimeSlice properties ===
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


void FUN_015c73a0(void)

{
  float *pfVar1;
  void*puVar2;
  double dVar3;
  uint uVar4;
  int64_t lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  int64_t arg1;
  int64_t lVar20;
  int64_t *this_ptr;
  int64_t lVar21;
  int64_t lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int64_t local_30;
  char local_28;
  
  lVar22 = *(int64_t *)(arg1 + 0x70);
  if (lVar22 != 0) goto LAB_015c760e;
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar22 = *(int64_t *)(arg1 + 0x70);
  if (lVar22 == local_30) {
    if (local_30 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(arg1 + 0x70) = local_30;
    if (lVar22 != 0) {
      FUN_00d50b20();
    }
  }
  iVar17 = _UNK_023de2dc;
  iVar16 = _UNK_023de2d8;
  iVar15 = _UNK_023de2d4;
  iVar14 = g_023de2d0;
  iVar13 = _UNK_023de2cc;
  iVar12 = _UNK_023de2c8;
  iVar11 = _UNK_023de2c4;
  iVar10 = g_023de2c0;
  iVar9 = _UNK_023de2bc;
  iVar8 = _UNK_023de2b8;
  iVar7 = _UNK_023de2b4;
  iVar6 = g_023de2b0;
  iVar26 = _UNK_0239418c;
  iVar25 = _UNK_02394188;
  iVar24 = _UNK_02394184;
  iVar23 = g_02394180;
  uVar4 = *(uint *)(arg1 + 0x24);
  if ((int)uVar4 < 1) {
    lVar22 = *(int64_t *)(arg1 + 0x70);
    goto LAB_015c760e;
  }
  dVar3 = *(double *)(arg1 + 0x50);
  lVar22 = *(int64_t *)(arg1 + 0x70);
  lVar5 = *(int64_t *)(lVar22 + 0x10);
  if (uVar4 < 8) {
    uVar18 = 0;
  }
  else {
    uVar18 = (uint64_t)(uVar4 & 0xfffffff8);
    uVar19 = (uVar18 - 8 >> 3) + 1;
    iVar27 = g_0238fcc0;
    iVar28 = _UNK_0238fcc4;
    iVar29 = _UNK_0238fcc8;
    iVar30 = _UNK_0238fccc;
    if (uVar18 - 8 == 0) {
      lVar20 = 0;
LAB_015c758e:
      iVar23 = g_02394180 + iVar27;
      iVar24 = _UNK_02394184 + iVar28;
      iVar25 = _UNK_02394188 + iVar29;
      iVar26 = _UNK_0239418c + iVar30;
      pfVar1 = (float *)(lVar5 + lVar20 * 4);
      *pfVar1 = (float)((double)iVar27 * dVar3);
      pfVar1[1] = (float)((double)iVar28 * dVar3);
      pfVar1[2] = (float)((double)iVar29 * dVar3);
      pfVar1[3] = (float)((double)iVar30 * dVar3);
      pfVar1 = (float *)(lVar5 + 0x10 + lVar20 * 4);
      *pfVar1 = (float)((double)iVar23 * dVar3);
      pfVar1[1] = (float)((double)iVar24 * dVar3);
      pfVar1[2] = (float)((double)iVar25 * dVar3);
      pfVar1[3] = (float)((double)iVar26 * dVar3);
    }
    else {
      lVar21 = -(uVar19 & 0xfffffffffffffffe);
      lVar20 = 0;
      do {
        pfVar1 = (float *)(lVar5 + lVar20 * 4);
        *pfVar1 = (float)((double)iVar27 * dVar3);
        pfVar1[1] = (float)((double)iVar28 * dVar3);
        pfVar1[2] = (float)((double)iVar29 * dVar3);
        pfVar1[3] = (float)((double)iVar30 * dVar3);
        pfVar1 = (float *)(lVar5 + 0x10 + lVar20 * 4);
        *pfVar1 = (float)((double)(iVar27 + iVar23) * dVar3);
        pfVar1[1] = (float)((double)(iVar28 + iVar24) * dVar3);
        pfVar1[2] = (float)((double)(iVar29 + iVar25) * dVar3);
        pfVar1[3] = (float)((double)(iVar30 + iVar26) * dVar3);
        pfVar1 = (float *)(lVar5 + 0x20 + lVar20 * 4);
        *pfVar1 = (float)((double)(iVar27 + iVar6) * dVar3);
        pfVar1[1] = (float)((double)(iVar28 + iVar7) * dVar3);
        pfVar1[2] = (float)((double)(iVar29 + iVar8) * dVar3);
        pfVar1[3] = (float)((double)(iVar30 + iVar9) * dVar3);
        puVar2 = (void*)(lVar5 + 0x30 + lVar20 * 4);
        *puVar2 = CONCAT44((float)((double)(iVar28 + iVar11) * dVar3),
                           (float)((double)(iVar27 + iVar10) * dVar3));
        puVar2[1] = CONCAT44((float)((double)(iVar30 + iVar13) * dVar3),
                             (float)((double)(iVar29 + iVar12) * dVar3));
        lVar20 = lVar20 + 0x10;
        iVar27 = iVar27 + iVar14;
        iVar28 = iVar28 + iVar15;
        iVar29 = iVar29 + iVar16;
        iVar30 = iVar30 + iVar17;
        lVar21 = lVar21 + 2;
      } while (lVar21 != 0);
      if ((uVar19 & 1) != 0) goto LAB_015c758e;
    }
    if (uVar18 == uVar4) goto LAB_015c760e;
  }
  do {
    *(float *)(lVar5 + uVar18 * 4) = (float)((double)(int)uVar18 * dVar3);
    uVar18 = uVar18 + 1;
  } while (uVar4 != uVar18);
LAB_015c760e:
  *(void*)(this_ptr + 1) = 0;
  if (lVar22 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar22;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 015c7140
// ============================================================
// Function: FUN_015c7140
// Address: 015c7140
// Size: 515 bytes
// Class: MUSpectralTimeSlice
// === MUSpectralTimeSlice properties ===
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


void FUN_015c7140(void)

{
  float *pfVar1;
  uint uVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint64_t uVar16;
  int64_t lVar17;
  int64_t arg1;
  int64_t lVar18;
  int64_t *this_ptr;
  int64_t lVar19;
  uint64_t uVar20;
  float fVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int64_t local_30;
  char local_28;
  
  lVar17 = *(int64_t *)(arg1 + 0x68);
  if (lVar17 != 0) goto LAB_015c7309;
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar17 = *(int64_t *)(arg1 + 0x68);
  if (lVar17 == local_30) {
    if (local_30 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(arg1 + 0x68) = local_30;
    if (lVar17 != 0) {
      FUN_00d50b20();
    }
  }
  iVar15 = _UNK_023de2dc;
  iVar14 = _UNK_023de2d8;
  iVar13 = _UNK_023de2d4;
  iVar12 = g_023de2d0;
  iVar11 = _UNK_023de2cc;
  iVar10 = _UNK_023de2c8;
  iVar9 = _UNK_023de2c4;
  iVar8 = g_023de2c0;
  iVar7 = _UNK_023de2bc;
  iVar6 = _UNK_023de2b8;
  iVar5 = _UNK_023de2b4;
  iVar4 = g_023de2b0;
  iVar29 = _UNK_0239418c;
  iVar27 = _UNK_02394188;
  iVar25 = _UNK_02394184;
  iVar23 = g_02394180;
  uVar2 = *(uint *)(arg1 + 0x24);
  if ((int)uVar2 < 1) {
    lVar17 = *(int64_t *)(arg1 + 0x68);
    goto LAB_015c7309;
  }
  fVar21 = g_02394278 / *(float *)(arg1 + 0x2c);
  lVar17 = *(int64_t *)(arg1 + 0x68);
  lVar3 = *(int64_t *)(lVar17 + 0x10);
  if (uVar2 < 8) {
    uVar16 = 0;
  }
  else {
    uVar16 = (uint64_t)(uVar2 & 0xfffffff8);
    uVar20 = (uVar16 - 8 >> 3) + 1;
    iVar22 = g_0238fcc0;
    iVar24 = _UNK_0238fcc4;
    iVar26 = _UNK_0238fcc8;
    iVar28 = _UNK_0238fccc;
    if (uVar16 - 8 == 0) {
      lVar19 = 0;
LAB_015c72c8:
      iVar23 = iVar22 + g_02394180;
      iVar25 = iVar24 + _UNK_02394184;
      iVar27 = iVar26 + _UNK_02394188;
      iVar29 = iVar28 + _UNK_0239418c;
      pfVar1 = (float *)(lVar3 + lVar19 * 4);
      *pfVar1 = (float)iVar22 * fVar21;
      pfVar1[1] = (float)iVar24 * fVar21;
      pfVar1[2] = (float)iVar26 * fVar21;
      pfVar1[3] = (float)iVar28 * fVar21;
      pfVar1 = (float *)(lVar3 + 0x10 + lVar19 * 4);
      *pfVar1 = (float)iVar23 * fVar21;
      pfVar1[1] = (float)iVar25 * fVar21;
      pfVar1[2] = (float)iVar27 * fVar21;
      pfVar1[3] = (float)iVar29 * fVar21;
    }
    else {
      lVar18 = -(uVar20 & 0xfffffffffffffffe);
      lVar19 = 0;
      do {
        pfVar1 = (float *)(lVar3 + lVar19 * 4);
        *pfVar1 = (float)iVar22 * fVar21;
        pfVar1[1] = (float)iVar24 * fVar21;
        pfVar1[2] = (float)iVar26 * fVar21;
        pfVar1[3] = (float)iVar28 * fVar21;
        pfVar1 = (float *)(lVar3 + 0x10 + lVar19 * 4);
        *pfVar1 = (float)(iVar22 + iVar23) * fVar21;
        pfVar1[1] = (float)(iVar24 + iVar25) * fVar21;
        pfVar1[2] = (float)(iVar26 + iVar27) * fVar21;
        pfVar1[3] = (float)(iVar28 + iVar29) * fVar21;
        pfVar1 = (float *)(lVar3 + 0x20 + lVar19 * 4);
        *pfVar1 = (float)(iVar22 + iVar4) * fVar21;
        pfVar1[1] = (float)(iVar24 + iVar5) * fVar21;
        pfVar1[2] = (float)(iVar26 + iVar6) * fVar21;
        pfVar1[3] = (float)(iVar28 + iVar7) * fVar21;
        pfVar1 = (float *)(lVar3 + 0x30 + lVar19 * 4);
        *pfVar1 = (float)(iVar22 + iVar8) * fVar21;
        pfVar1[1] = (float)(iVar24 + iVar9) * fVar21;
        pfVar1[2] = (float)(iVar26 + iVar10) * fVar21;
        pfVar1[3] = (float)(iVar28 + iVar11) * fVar21;
        lVar19 = lVar19 + 0x10;
        iVar22 = iVar22 + iVar12;
        iVar24 = iVar24 + iVar13;
        iVar26 = iVar26 + iVar14;
        iVar28 = iVar28 + iVar15;
        lVar18 = lVar18 + 2;
      } while (lVar18 != 0);
      if ((uVar20 & 1) != 0) goto LAB_015c72c8;
    }
    if (uVar16 == uVar2) goto LAB_015c7309;
  }
  do {
    *(float *)(lVar3 + uVar16 * 4) = (float)(int)uVar16 * fVar21;
    uVar16 = uVar16 + 1;
  } while (uVar2 != uVar16);
LAB_015c7309:
  *(void*)(this_ptr + 1) = 0;
  if (lVar17 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar17;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 015c6700
// ============================================================
// Function: MUSpectralTimeSlice_takeDataFromTimeSlice
// Address: 015c6700
// Size: 1118 bytes
// Class: MUSpectralTimeSlice
// String references:
//   "MUSpectralTimeSlice::takeDataFromTimeSlice(): inconsistent data"
//   "MUSpectralTimeSlice::getComplexSpectrum(): no complexSpectrum data"
//   "MUSpectralTimeSlice::getMagnitudeData(): no magnitude data"
//   "MUSpectralTimeSlice::getPhaseData(): no phase data"
//   "MUSpectralTimeSlice::getTrueFreqData(): no trueFreq data"
//   "MUSpectralTimeSlice::getTonalityData(): no tonality data"
//   "MUSpectralTimeSlice::getTrueTimeSampleOffsetData(): no trueTimeSampleOffsetData data"
//   "MUSpectralTimeSlice::getTransiencyData(): no transiencyData data"
//   "MUSpectralTimeSlice::getTransiencyData(): no vectorData data"
// === MUSpectralTimeSlice properties ===
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


void MUSpectralTimeSlice_takeDataFromTimeSlice(void *param_1,byte param_2,size_t param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *arg1;
  int64_t this_ptr;
  
  if ((*arg1 == 0) || (*(int *)(*arg1 + 0xc) != *(int *)(this_ptr + 0xc))) {
    FUN_00e828a0();
  }
  if ((param_2 & 1) != 0) {
    if (*(int64_t *)(*arg1 + 0x10) == 0) {
      FUN_00e828a0();
      lVar1 = *(int64_t *)(this_ptr + 0x10);
    }
    else {
      lVar1 = *(int64_t *)(this_ptr + 0x10);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(void*)(this_ptr + 0x10) = uVar2;
    }
    _memcpy(param_1,(void *)((int64_t)*(int *)(this_ptr + 0xc) << 3),param_3);
  }
  if ((param_2 & 2) != 0) {
    if (*(int64_t *)(*arg1 + 0x18) == 0) {
      FUN_00e828a0();
      lVar1 = *(int64_t *)(this_ptr + 0x18);
    }
    else {
      lVar1 = *(int64_t *)(this_ptr + 0x18);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(void*)(this_ptr + 0x18) = uVar2;
    }
    _memcpy(param_1,(void *)((int64_t)*(int *)(this_ptr + 0xc) << 2),param_3);
  }
  if ((param_2 & 4) != 0) {
    if (*(int64_t *)(*arg1 + 0x20) == 0) {
      FUN_00e828a0();
      lVar1 = *(int64_t *)(this_ptr + 0x20);
    }
    else {
      lVar1 = *(int64_t *)(this_ptr + 0x20);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(void*)(this_ptr + 0x20) = uVar2;
    }
    _memcpy(param_1,(void *)((int64_t)*(int *)(this_ptr + 0xc) << 2),param_3);
  }
  if ((param_2 & 8) != 0) {
    if (*(int64_t *)(*arg1 + 0x28) == 0) {
      FUN_00e828a0();
      lVar1 = *(int64_t *)(this_ptr + 0x28);
    }
    else {
      lVar1 = *(int64_t *)(this_ptr + 0x28);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(void*)(this_ptr + 0x28) = uVar2;
    }
    _memcpy(param_1,(void *)((int64_t)*(int *)(this_ptr + 0xc) << 2),param_3);
  }
  if ((param_2 & 0x10) != 0) {
    if (*(int64_t *)(*arg1 + 0x30) == 0) {
      FUN_00e828a0();
      lVar1 = *(int64_t *)(this_ptr + 0x30);
    }
    else {
      lVar1 = *(int64_t *)(this_ptr + 0x30);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(void*)(this_ptr + 0x30) = uVar2;
    }
    _memcpy(param_1,(void *)((int64_t)*(int *)(this_ptr + 0xc) << 2),param_3);
  }
  if ((param_2 & 0x20) != 0) {
    if (*(int64_t *)(*arg1 + 0x38) == 0) {
      FUN_00e828a0();
      lVar1 = *(int64_t *)(this_ptr + 0x38);
    }
    else {
      lVar1 = *(int64_t *)(this_ptr + 0x38);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(void*)(this_ptr + 0x38) = uVar2;
    }
    _memcpy(param_1,(void *)((int64_t)*(int *)(this_ptr + 0xc) << 2),param_3);
  }
  if ((param_2 & 0x40) != 0) {
    if (*(int64_t *)(*arg1 + 0x40) == 0) {
      FUN_00e828a0();
      lVar1 = *(int64_t *)(this_ptr + 0x40);
    }
    else {
      lVar1 = *(int64_t *)(this_ptr + 0x40);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(void*)(this_ptr + 0x40) = uVar2;
    }
    _memcpy(param_1,(void *)((int64_t)*(int *)(this_ptr + 0xc) << 2),param_3);
  }
  if ((char)param_2 < '\0') {
    if (*(int64_t *)(*arg1 + 0x48) == 0) {
      FUN_00e828a0();
      lVar1 = *(int64_t *)(this_ptr + 0x48);
    }
    else {
      lVar1 = *(int64_t *)(this_ptr + 0x48);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(void*)(this_ptr + 0x48) = uVar2;
    }
    _memcpy(param_1,(void *)((int64_t)*(int *)(this_ptr + 0xc) << 3),param_3);
    return;
  }
  return;
}



// ============================================================
// 015c9600
// ============================================================
// Function: FUN_015c9600
// Address: 015c9600
// Size: 626 bytes
// Class: MUSpectralTimeSlice
// === MUSpectralTimeSlice properties ===
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


uint64_t FUN_015c9600(void)

{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar12;
  
  lVar10 = *(int64_t *)(this_ptr + 0x38);
  if ((((lVar10 == 0) || (lVar2 = *(int64_t *)(this_ptr + 0x18), lVar2 == 0)) ||
      (*(int64_t *)(lVar2 + 0x38) == 0)) ||
     (((*(int64_t *)(this_ptr + 0x30) == 0 || (*(int64_t *)(lVar2 + 0x28) == 0)) ||
      (*(int64_t *)(lVar2 + 0x30) == 0)))) {
    uVar11 = 0;
  }
  else {
    lVar2 = *(int64_t *)(lVar2 + 0x18);
    if (lVar2 != 0) {
      FUN_00d50b00();
      lVar10 = *(int64_t *)(this_ptr + 0x38);
    }
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    lVar3 = *(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x38);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    iVar5 = FUN_00d237a0();
    iVar6 = FUN_00d237a0();
    iVar7 = FUN_00d237a0();
    iVar8 = FUN_00d237a0();
    uVar12 = extraout_XMM0_Da;
    while (iVar9 = *(int *)(lVar10 + 0xc), iVar7 + 1 < iVar9) {
      uVar12 = FUN_00d23740();
    }
    if (0 < iVar8) {
      do {
        uVar12 = FUN_00d23620();
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      iVar9 = *(int *)(lVar10 + 0xc);
    }
    FUN_00d214d0(uVar12,iVar9);
    *(void*)(this_ptr + 0x30) =
         *(void*)(*(int64_t *)(lVar10 + 0x10) + (int64_t)((iVar7 + 1 + iVar5) - iVar6) * 8)
    ;
    lVar4 = *(int64_t *)(this_ptr + 0x18);
    *(void*)(this_ptr + 0x48) = *(void*)(lVar4 + 0x48);
    fVar1 = *(float *)(lVar4 + 0x54);
    if (*(float *)(this_ptr + 0x54) <= fVar1 && fVar1 != *(float *)(this_ptr + 0x54)) {
      *(float *)(this_ptr + 0x54) = fVar1;
    }
    *(void*)(lVar4 + 0x18) = 0;
    *(void*)(*(int64_t *)(this_ptr + 0x18) + 0x20) = 0;
    *(void*)(this_ptr + 0x18) = 0;
    if (lVar2 != 0) {
      *(int64_t *)(this_ptr + 0x18) = lVar2;
      *(int64_t *)(lVar2 + 0x20) = this_ptr;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    uVar11 = CONCAT71((int7)((uint64_t)lVar10 >> 8),1);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar11 & 0xffffffff;
}



// ============================================================
// 015c91d0
// ============================================================
// Function: FUN_015c91d0
// Address: 015c91d0
// Size: 680 bytes
// Class: MUSpectralTimeSlice
// === MUSpectralTimeSlice properties ===
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


void* FUN_015c91d0(void)

{
  bool bVar1;
  void*puVar2;
  int64_t lVar3;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar4;
  bool bVar5;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  if (arg1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d21140();
  if (arg1 == 0) {
    bVar5 = false;
    lVar4 = 0;
    lVar3 = segment_command_00000020._0_8_;
    if (segment_command_00000020._0_8_ == 0) goto LAB_015c9367;
LAB_015c9290:
    do {
      FUN_00d50b00();
      FUN_00d23370();
      if (lVar3 == lVar4) {
        bVar1 = bVar5;
        if (!bVar5) {
          FUN_00d50b00();
          bVar1 = true;
        }
      }
      else {
        FUN_00d50b00();
        lVar4 = lVar3;
        bVar1 = true;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      bVar5 = bVar1;
      FUN_00d50b20();
      lVar3 = *(int64_t *)(lVar4 + 0x20);
    } while (*(int64_t *)(lVar4 + 0x20) != 0);
    if (lVar4 != arg1) goto LAB_015c9331;
LAB_015c9373:
    bVar1 = bVar5;
    if (bVar5) {
      lVar3 = *(int64_t *)(arg1 + 0x18);
      goto joined_r0x015c9466;
    }
    if (arg1 != 0) {
      bVar1 = true;
      FUN_00d50b00();
    }
  }
  else {
    FUN_00d50b20();
    FUN_00d50b00();
    bVar5 = true;
    lVar3 = *(int64_t *)(arg1 + 0x20);
    lVar4 = arg1;
    if (*(int64_t *)(arg1 + 0x20) != 0) goto LAB_015c9290;
LAB_015c9367:
    if (lVar4 == arg1) goto LAB_015c9373;
LAB_015c9331:
    if (arg1 != 0) {
      FUN_00d50b00();
    }
    bVar1 = true;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  lVar3 = *(int64_t *)(arg1 + 0x18);
joined_r0x015c9466:
  for (; lVar3 != 0; lVar3 = *(int64_t *)(lVar3 + 0x18)) {
    FUN_00d50b00();
    FUN_00d21140();
    if (lVar3 == arg1) {
      lVar3 = arg1;
      bVar5 = bVar1;
      if (!bVar1) {
        FUN_00d50b00();
        bVar5 = true;
      }
    }
    else {
      FUN_00d50b00();
      bVar5 = true;
      if (bVar1) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    arg1 = lVar3;
    bVar1 = bVar5;
  }
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  if (bVar1) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 011aa9e0
// ============================================================
// Function: FUN_011aa9e0
// Address: 011aa9e0
// Size: 2213 bytes
// Class: MUSpectralTimeSlice
// String references:
//   "MUSpectralTimeSlice"
// === MUSpectralTimeSlice properties ===
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


void FUN_011aa9e0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025f1488;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b0c4b == '\0') {
    FUN_011ab2c0();
    FUN_00e87980();
  }
  this_ptr[2] = 0;
  // [STATIC_INIT: property registration]
  if (g_027b0c4b == '\0') {
    FUN_011ab430();
    FUN_00e87980();
  }
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_027b0c4b == '\0') {
    FUN_011ab5a0();
    FUN_00e87980();
  }
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_027b0c4b == '\0') {
    FUN_011ab710();
    FUN_00e87980();
  }
  this_ptr[5] = 0;
  // [STATIC_INIT: property registration]
  if (g_027b0c4b == '\0') {
    FUN_011ab880();
    FUN_00e87980();
  }
  this_ptr[6] = 0;
  // [STATIC_INIT: property registration]
  if (g_027b0c4b == '\0') {
    FUN_011ab9f0();
    FUN_00e87980();
  }
  this_ptr[7] = 0;
  // [STATIC_INIT: property registration]
  if (g_027b0c4b == '\0') {
    FUN_011abb60();
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  // [STATIC_INIT: property registration]
  if (g_027b0c4b == '\0') {
    FUN_011abcd0();
    FUN_00e87980();
  }
  this_ptr[9] = 0;
  // [STATIC_INIT: property registration]
  if (g_027b0c4b == '\0') {
    FUN_011abe40();
    FUN_00e87980();
  }
  this_ptr[10] = 0;
  // [STATIC_INIT: property registration]
  if (g_027b0c4b == '\0') {
    FUN_011abfb0();
    FUN_00e87980();
  }
  return;
}

