// ===================================================================
// MDActivityDiagramView — Complete reconstructed pseudocode
// 5 functions
// ===================================================================

// Registered properties (5):
//                   _voicesDiagramView
//                   _displayLoadDiagramView
//                   _ioLoadDiagramView
//                   _fftCountDiagramView
//                   _jobDiagramView


// ============================================================
// 00552720
// ============================================================
// Function: FUN_00552720
// Address: 00552720
// Size: 2010 bytes
// Class: MDActivityDiagramView
// String references:
//   "%@ (%@)"
// === MDActivityDiagramView properties ===
//                   _voicesDiagramView
//                   _displayLoadDiagramView
//                   _ioLoadDiagramView
//                   _fftCountDiagramView
//                   _jobDiagramView


void FUN_00552720(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  int64_t *plVar6;
  void*puVar7;
  int iVar8;
  void*arg1;
  int64_t *this_ptr;
  int64_t *plVar9;
  int64_t lVar10;
  double dVar11;
  uint64_t uVar12;
  double dVar13;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  float fVar16;
  uint64_t in_XMM1_Qb;
  uint8_t auVar18 [16];
  float fVar17;
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t local_140 [8];
  int64_t local_128;
  char local_120;
  float local_d8;
  float fStack_d4;
  uint32_t uStack_d0;
  uint uStack_cc;
  float local_b8;
  uint32_t uStack_b4;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  dVar11 = (double)FUN_00e7d6f0();
  uVar12 = FUN_01e3f820();
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_70 + 0x3f0))(uVar12,param_2,0,1);
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d05530();
  local_d8 = (float)param_2;
  fStack_d4 = (float)((uint64_t)param_2 >> 0x20);
  uStack_d0 = (uint32_t)in_XMM1_Qb;
  uStack_cc = (uint)((uint64_t)in_XMM1_Qb >> 0x20);
  FUN_01d48370();
  (**(code **)(*(int64_t *)*arg1 + 0x370))();
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_40 + 0x3a0))();
  plVar6 = local_70;
  if (local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_01d488d0();
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02680400;
  *(void*)((int64_t)puVar7 + 0xc) = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  *(void*)((int64_t)puVar7 + 0x39) = 0;
  *(void*)((int64_t)puVar7 + 0x41) = 0;
  (*g_02680418)();
  dVar13 = (double)FUN_00e7d6f0();
  FUN_00e7d850(dVar13 * (double)*(float *)(this_ptr + 0x27));
  lVar2 = this_ptr[0x28];
  fVar17 = 0.0;
  if (3 < *(int *)(lVar2 + 0x18)) {
    lVar10 = 0;
    fVar16 = 0.0;
    do {
      fVar17 = *(float *)(*(int64_t *)(lVar2 + 0x10) + lVar10 * 4);
      iVar1 = *(int *)(this_ptr[0x28] + 0x18);
      iVar8 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar8 = iVar1;
      }
      auVar20._4_4_ = fStack_d4;
      auVar20._0_4_ = fStack_d4;
      auVar20._8_4_ = uStack_cc;
      auVar20._12_4_ = uStack_cc;
      auVar18._4_12_ = auVar20._4_12_;
      auVar18._0_4_ = fStack_d4 - (fVar17 / *(float *)((int64_t)this_ptr + 0x13c)) * fStack_d4;
      FUN_01d38ba0(((float)(int)lVar10 * local_d8) / (float)(iVar8 >> 2),auVar18._0_8_);
      iVar1 = *(int *)(lVar2 + 0x18);
      iVar8 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar8 = iVar1;
      }
      if (fVar17 <= fVar16) {
        fVar17 = fVar16;
      }
      lVar10 = lVar10 + 1;
      fVar16 = fVar17;
    } while ((int)lVar10 < iVar8 >> 2);
  }
  FUN_01d38ba0(param_2,CONCAT44(fStack_d4,fStack_d4));
  FUN_01d38ba0(0,CONCAT44(fStack_d4,fStack_d4));
  FUN_01d38b10();
  (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  if (this_ptr[0x29] == 0) goto LAB_00552eaf;
  fVar17 = fStack_d4 - (fVar17 / *(float *)((int64_t)this_ptr + 0x13c)) * fStack_d4;
  auVar14._0_4_ = g_023945e0 & (uint)fVar17;
  auVar14._4_4_ = _UNK_023945e4 & (uint)fStack_d4;
  auVar14._8_4_ = _UNK_023945e8 & uStack_cc;
  auVar14._12_4_ = _UNK_023945ec & uStack_cc;
  auVar15._4_12_ = SUB1612(auVar14 | g_023945f0,4);
  auVar15._0_4_ = SUB164(auVar14 | g_023945f0,0) + fVar17;
  auVar19._0_12_ = ZEXT812(0);
  auVar19._12_4_ = 0;
  auVar20 = roundss(auVar19,auVar15,0xb);
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  local_b8 = auVar20._0_4_;
  uStack_b4 = auVar20._4_4_;
  uStack_b0 = auVar20._8_4_;
  uStack_ac = auVar20._12_4_;
  local_b8 = local_b8 + g_023941fc;
  if (local_b8 < g_02390d34) {
    auVar4._4_4_ = uStack_b4;
    auVar4._0_4_ = local_b8 + g_023942a8;
    auVar4._8_4_ = uStack_b0;
    auVar4._12_4_ = uStack_ac;
    insertps(g_023b5520,auVar4,0x1c);
  }
  else {
    auVar3._4_4_ = uStack_b4;
    auVar3._0_4_ = local_b8;
    auVar3._8_4_ = uStack_b0;
    auVar3._12_4_ = uStack_ac;
    insertps(g_023b5520,auVar3,0x10);
  }
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_40 + 0x378))();
  plVar6 = local_70;
  if (local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_01d48a10();
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_40 + 0x390))();
  plVar6 = local_70;
  if (local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_01d488d0();
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)this_ptr[0x29] + 0x378))();
  plVar6 = local_70;
  if ((((local_68 == '\0') && (local_70 != (int64_t *)0x0)) && (FUN_00d50b00(), local_68 != '\0'))
     && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar9 = plVar6;
  if ((int64_t *)this_ptr[0x2a] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x2a] + 0x378))();
    uVar12 = FUN_00083ea0(2,local_140);
    FUN_00d8cb40(uVar12,&local_70);
    plVar9 = local_40;
    if (plVar6 == local_40) {
LAB_00552de1:
      plVar9 = plVar6;
      if (local_38 != '\0') {
LAB_00552de7:
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (plVar6 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar6 = plVar9;
          goto LAB_00552de1;
        }
        if (local_38 == '\0') goto LAB_00552df5;
        goto LAB_00552de7;
      }
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
    }
LAB_00552df5:
    local_70 = (int64_t *)&g_0253d630;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_70 = &g_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
  }
  auVar5._8_4_ = uStack_d0;
  auVar5._0_8_ = param_2;
  auVar5._12_4_ = uStack_cc;
  blendps(auVar5,g_023b27c0,0xe);
  (**(code **)(*(int64_t *)*arg1 + 0x3f8))();
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_00552eaf:
  FUN_01d48390();
  dVar13 = (double)FUN_00e7d6f0();
  FUN_01d428f0(dVar13 - dVar11);
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00551ad0
// ============================================================
// Function: FUN_00551ad0
// Address: 00551ad0
// Size: 1187 bytes
// Class: MDActivityDiagramView
// === MDActivityDiagramView properties ===
//                   _voicesDiagramView
//                   _displayLoadDiagramView
//                   _ioLoadDiagramView
//                   _fftCountDiagramView
//                   _jobDiagramView


void FUN_00551ad0(void)

{
  int64_t *plVar1;
  void*puVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  void*puVar6;
  int64_t this_ptr;
  float fVar7;
  
  FUN_01e534b0();
  plVar1 = *(int64_t **)(this_ptr + 0x80);
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)puVar6 + 0xc) = 0;
  *(void*)((int64_t)puVar6 + 0x14) = 0;
  *(void*)((int64_t)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  *puVar6 = &g_02576dc8;
  pcVar4 = g_02576de0;
  (*g_02576de0)();
  puVar2 = (void*)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (int64_t)puVar6;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(int64_t **)(this_ptr + 0x88);
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02576110;
  *(void*)((int64_t)puVar6 + 0xc) = 0;
  *(void*)((int64_t)puVar6 + 0x14) = 0;
  *(void*)((int64_t)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  pcVar3 = g_02576128;
  (*g_02576128)();
  puVar2 = (void*)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (int64_t)puVar6;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(int64_t **)(this_ptr + 0x88);
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02576110;
  *(void*)((int64_t)puVar6 + 0xc) = 0;
  *(void*)((int64_t)puVar6 + 0x14) = 0;
  *(void*)((int64_t)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  (*pcVar3)();
  puVar2 = (void*)plVar1[0x2a];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x2a] = (int64_t)puVar6;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(int64_t **)(this_ptr + 0x88);
  if ((*(float *)((int64_t)plVar1 + 0x13c) != g_023b36b0) ||
     (NAN(*(float *)((int64_t)plVar1 + 0x13c)) || NAN(g_023b36b0))) {
    *(void*)((int64_t)plVar1 + 0x13c) = 0x41000000;
    (**(code **)(*plVar1 + 0x620))();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)puVar6 + 0xc) = 0;
  *(void*)((int64_t)puVar6 + 0x14) = 0;
  *(void*)((int64_t)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  *puVar6 = &g_02576dc8;
  (*pcVar4)();
  puVar2 = (void*)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (int64_t)puVar6;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  if ((*(float *)((int64_t)plVar1 + 0x13c) != g_02390d34) ||
     (NAN(*(float *)((int64_t)plVar1 + 0x13c)) || NAN(g_02390d34))) {
    *(void*)((int64_t)plVar1 + 0x13c) = 0x40000000;
    (**(code **)(*plVar1 + 0x620))();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x98);
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)puVar6 + 0xc) = 0;
  *(void*)((int64_t)puVar6 + 0x14) = 0;
  *(void*)((int64_t)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  *puVar6 = &g_02576dc8;
  (*pcVar4)();
  puVar2 = (void*)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (int64_t)puVar6;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(int64_t **)(this_ptr + 0x98);
  if ((*(float *)((int64_t)plVar1 + 0x13c) != g_02394dc0) ||
     (NAN(*(float *)((int64_t)plVar1 + 0x13c)) || NAN(g_02394dc0))) {
    *(void*)((int64_t)plVar1 + 0x13c) = 0x3f99999a;
    (**(code **)(*plVar1 + 0x620))();
  }
  plVar1 = *(int64_t **)(this_ptr + 0xa0);
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02576110;
  *(void*)((int64_t)puVar6 + 0xc) = 0;
  *(void*)((int64_t)puVar6 + 0x14) = 0;
  *(void*)((int64_t)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  (*pcVar3)();
  puVar2 = (void*)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (int64_t)puVar6;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(int64_t **)(this_ptr + 0xa8);
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02576110;
  *(void*)((int64_t)puVar6 + 0xc) = 0;
  *(void*)((int64_t)puVar6 + 0x14) = 0;
  *(void*)((int64_t)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  (*pcVar3)();
  puVar2 = (void*)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (int64_t)puVar6;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(int64_t **)(this_ptr + 0xa8);
  iVar5 = FUN_00e36330();
  fVar7 = (float)iVar5;
  if ((*(float *)((int64_t)plVar1 + 0x13c) == fVar7) &&
     (!NAN(*(float *)((int64_t)plVar1 + 0x13c)) && !NAN(fVar7))) {
    return;
  }
  *(float *)((int64_t)plVar1 + 0x13c) = fVar7;
                                          (**(code **)(*plVar1 + 0x620))();
  return;
}



// ============================================================
// 00552090
// ============================================================
// Function: FUN_00552090
// Address: 00552090
// Size: 1158 bytes
// Class: MDActivityDiagramView
// === MDActivityDiagramView properties ===
//                   _voicesDiagramView
//                   _displayLoadDiagramView
//                   _ioLoadDiagramView
//                   _fftCountDiagramView
//                   _jobDiagramView


void FUN_00552090(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int64_t this_ptr;
  int64_t *plVar7;
  float fVar8;
  uint32_t uVar9;
  double dVar10;
  int64_t *local_38;
  char local_30;
  float local_24;
  
  local_24 = (float)FUN_01256f00();
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_38 + 0x450))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_00b160d0();
    fVar8 = (float)(**(code **)(*local_38 + 0x6e0))();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_24 = local_24 + fVar8;
  }
  plVar7 = *(int64_t **)(this_ptr + 0x80);
  dVar10 = (double)FUN_00e7d6f0();
  iVar3 = FUN_00e7d850(dVar10 * (double)*(float *)(plVar7 + 0x27));
  iVar4 = *(int *)(plVar7[0x28] + 0x18);
  iVar6 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  iVar3 = iVar3 % (iVar6 >> 2);
  iVar4 = (int)plVar7[0x2b];
  lVar1 = *(int64_t *)(plVar7[0x28] + 0x10);
  do {
    iVar4 = iVar4 + 1;
    if (iVar6 >> 2 <= iVar4) {
      iVar4 = 0;
    }
    *(float *)(lVar1 + (int64_t)iVar4 * 4) = local_24;
  } while (iVar4 != iVar3);
  *(int *)(plVar7 + 0x2b) = iVar3;
  (**(code **)(*plVar7 + 0x620))();
  iVar4 = FUN_012a7610();
  fVar8 = (float)iVar4;
  plVar7 = *(int64_t **)(this_ptr + 0x88);
  if ((*(float *)((int64_t)plVar7 + 0x13c) != fVar8) ||
     (NAN(*(float *)((int64_t)plVar7 + 0x13c)) || NAN(fVar8))) {
    *(float *)((int64_t)plVar7 + 0x13c) = fVar8;
    (**(code **)(*plVar7 + 0x620))();
    plVar7 = *(int64_t **)(this_ptr + 0x88);
  }
  iVar3 = FUN_0142fdf0();
  dVar10 = (double)FUN_00e7d6f0();
  iVar5 = FUN_00e7d850(dVar10 * (double)*(float *)(plVar7 + 0x27));
  iVar4 = *(int *)(plVar7[0x28] + 0x18);
  iVar6 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  iVar5 = iVar5 % (iVar6 >> 2);
  iVar4 = (int)plVar7[0x2b];
  lVar1 = *(int64_t *)(plVar7[0x28] + 0x10);
  do {
    iVar4 = iVar4 + 1;
    if (iVar6 >> 2 <= iVar4) {
      iVar4 = 0;
    }
    *(float *)(lVar1 + (int64_t)iVar4 * 4) = (float)iVar3;
  } while (iVar4 != iVar5);
  *(int *)(plVar7 + 0x2b) = iVar5;
  (**(code **)(*plVar7 + 0x620))();
  plVar7 = *(int64_t **)(this_ptr + 0x90);
  uVar9 = FUN_01d428e0();
  dVar10 = (double)FUN_00e7d6f0();
  iVar3 = FUN_00e7d850(dVar10 * (double)*(float *)(plVar7 + 0x27));
  iVar4 = *(int *)(plVar7[0x28] + 0x18);
  iVar6 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  iVar3 = iVar3 % (iVar6 >> 2);
  iVar4 = (int)plVar7[0x2b];
  lVar1 = *(int64_t *)(plVar7[0x28] + 0x10);
  do {
    iVar4 = iVar4 + 1;
    if (iVar6 >> 2 <= iVar4) {
      iVar4 = 0;
    }
    *(void*)(lVar1 + (int64_t)iVar4 * 4) = uVar9;
  } while (iVar4 != iVar3);
  *(int *)(plVar7 + 0x2b) = iVar3;
  (**(code **)(*plVar7 + 0x620))();
  plVar7 = *(int64_t **)(this_ptr + 0x98);
  uVar9 = FUN_00bcacc0();
  dVar10 = (double)FUN_00e7d6f0();
  iVar3 = FUN_00e7d850(dVar10 * (double)*(float *)(plVar7 + 0x27));
  iVar4 = *(int *)(plVar7[0x28] + 0x18);
  iVar6 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  iVar3 = iVar3 % (iVar6 >> 2);
  iVar4 = (int)plVar7[0x2b];
  lVar1 = *(int64_t *)(plVar7[0x28] + 0x10);
  do {
    iVar4 = iVar4 + 1;
    if (iVar6 >> 2 <= iVar4) {
      iVar4 = 0;
    }
    *(void*)(lVar1 + (int64_t)iVar4 * 4) = uVar9;
  } while (iVar4 != iVar3);
  *(int *)(plVar7 + 0x2b) = iVar3;
  (**(code **)(*plVar7 + 0x620))();
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_38 + 0x450))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_00b160d0();
    fVar8 = (float)(**(code **)(*local_38 + 0x6e8))();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar7 = *(int64_t **)(this_ptr + 0xa0);
    if (*(float *)((int64_t)plVar7 + 0x13c) <= fVar8 &&
        fVar8 != *(float *)((int64_t)plVar7 + 0x13c)) {
      *(float *)((int64_t)plVar7 + 0x13c) = fVar8;
      (**(code **)(*plVar7 + 0x620))();
      plVar7 = *(int64_t **)(this_ptr + 0xa0);
    }
    dVar10 = (double)FUN_00e7d6f0();
    iVar3 = FUN_00e7d850(dVar10 * (double)*(float *)(plVar7 + 0x27));
    iVar4 = *(int *)(plVar7[0x28] + 0x18);
    iVar6 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar6 = iVar4;
    }
    iVar3 = iVar3 % (iVar6 >> 2);
    iVar4 = (int)plVar7[0x2b];
    lVar1 = *(int64_t *)(plVar7[0x28] + 0x10);
    do {
      iVar4 = iVar4 + 1;
      if (iVar6 >> 2 <= iVar4) {
        iVar4 = 0;
      }
      *(float *)(lVar1 + (int64_t)iVar4 * 4) = fVar8;
    } while (iVar4 != iVar3);
    *(int *)(plVar7 + 0x2b) = iVar3;
    (**(code **)(*plVar7 + 0x620))();
  }
  plVar7 = *(int64_t **)(this_ptr + 0xa8);
  FUN_00e36840();
  iVar3 = FUN_00e37ca0();
  dVar10 = (double)FUN_00e7d6f0();
  iVar5 = FUN_00e7d850(dVar10 * (double)*(float *)(plVar7 + 0x27));
  iVar4 = *(int *)(plVar7[0x28] + 0x18);
  iVar6 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  iVar5 = iVar5 % (iVar6 >> 2);
  iVar4 = (int)plVar7[0x2b];
  lVar1 = *(int64_t *)(plVar7[0x28] + 0x10);
  do {
    iVar4 = iVar4 + 1;
    if (iVar6 >> 2 <= iVar4) {
      iVar4 = 0;
    }
    *(float *)(lVar1 + (int64_t)iVar4 * 4) = (float)iVar3;
  } while (iVar4 != iVar5);
  *(int *)(plVar7 + 0x2b) = iVar5;
  (**(code **)(*plVar7 + 0x620))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 005513c0
// ============================================================
// Function: FUN_005513c0
// Address: 005513c0
// Size: 517 bytes
// Class: MDActivityDiagramView
// String references:
//   "MDActivityDiagramView"
// === MDActivityDiagramView properties ===
//                   _voicesDiagramView
//                   _displayLoadDiagramView
//                   _ioLoadDiagramView
//                   _fftCountDiagramView
//                   _jobDiagramView


void FUN_005513c0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_1a0;
  int64_t local_198;
  int64_t local_190;
  
  if ((g_0270d190 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_0270d0e0 = FUN_0006d940();
    g_0270d0c8 = "MDActivityDiagramView";
    g_0270d0d0 = 0x160;
    g_0270d0d8 = FUN_005537b0;
    g_0270d0e8 = 0;
    ram_000000000270d0f0 = 0;
    g_0270d0f8 = 0;
    ram_000000000270d100 = 0;
    g_0270d108 = 0;
    ram_000000000270d110 = 0;
    g_0270d118 = 0;
    ram_000000000270d120 = 0;
    g_0270d128 = 0;
    ram_000000000270d130 = 0;
    g_0270d138 = 0;
    ram_000000000270d140 = 0;
    g_0270d148 = 0;
    ram_000000000270d150 = 0;
    g_0270d158 = 0;
    ram_000000000270d160 = 0;
    g_0270d168 = 0;
    ram_000000000270d170 = 0;
    g_0270d178 = 0;
    _ram_000000000270d180 = 0;
    g_0270d188 = 0;
    ___cxa_guard_release();
  }
  if (g_0270d183 == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_00553810();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_190 != 0) {
      FUN_00d50b20();
    }
    if (local_198 != 0) {
      FUN_00d50b20();
    }
    if (local_1a0 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    FUN_0006d770();
  }
  return;
}



// ============================================================
// 00553810
// ============================================================
// Function: FUN_00553810
// Address: 00553810
// Size: 802 bytes
// Class: MDActivityDiagramView
// String references:
//   "MDActivityDiagramView"
// === MDActivityDiagramView properties ===
//                   _voicesDiagramView
//                   _displayLoadDiagramView
//                   _ioLoadDiagramView
//                   _fftCountDiagramView
//                   _jobDiagramView


void FUN_00553810(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_02503e00;
  this_ptr[2] = &g_02504728;
  *(void*)(this_ptr + 0x27) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270d183 == '\0') {
    FUN_00553bc0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x13c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270d183 == '\0') {
    FUN_00553d30();
    FUN_00e87980();
  }
  FUN_00553ea0();
  FUN_00554120();
  FUN_00554410();
  *(void*)(this_ptr + 0x2b) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270d183 == '\0') {
    FUN_00554700();
    FUN_00e87980();
  }
  return;
}

