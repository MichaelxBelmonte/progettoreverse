// Function: FUN_014d9720
// Address: 014d9720
// Size: 10307 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_014d9720(int64_t *param_1,char param_2)

{
  double dVar1;
  uint uVar2;
  void*puVar3;
  int iVar4;
  double dVar5;
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  char cVar8;
  code *pcVar9;
  int iVar10;
  uint32_t uVar11;
  int iVar12;
  void *pvVar13;
  int64_t *plVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  void*puVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  undefined7 uVar25;
  float *pfVar23;
  void*puVar24;
  void* pVar26;
  uint64_t uVar27;
  int64_t lVar28;
  int64_t lVar29;
  int64_t lVar30;
  int64_t *plVar31;
  int64_t *arg1;
  uint64_t uVar32;
  int64_t lVar33;
  int64_t *this_ptr;
  uint64_t uVar34;
  uint64_t uVar35;
  uint uVar36;
  int iVar37;
  uint uVar38;
  uint64_t uVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  uint8_t auVar46 [16];
  int64_t *local_250;
  char local_248;
  void*local_240;
  char local_238;
  int64_t local_230;
  char local_228;
  int64_t *local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t *local_200;
  char local_1f8;
  void*local_1f0;
  char local_1e8;
  void*local_1e0;
  char local_1d8;
  int64_t *local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  int64_t *local_1a0;
  char local_198;
  int local_18c;
  uint64_t local_188;
  uint64_t local_180;
  uint64_t local_178;
  double local_170;
  int64_t *local_168;
  uint32_t local_15c;
  uint local_158;
  float local_154;
  void*local_150;
  int64_t *local_148;
  char local_140;
  void*local_138;
  int64_t *local_130;
  uint64_t local_128;
  double local_120;
  uint64_t local_118;
  float local_10c;
  void*local_108;
  void*local_100;
  uint64_t local_f8;
  void*local_f0;
  int local_e0;
  uint32_t local_d8;
  uint32_t local_d4;
  int64_t *local_d0;
  int64_t *local_c8;
  void*local_a0;
  uint local_88;
  uint64_t local_78;
  void*local_50;
  int64_t *local_48;
  char local_40;
  int local_38;
  
  cVar8 = (char)param_1;
  (**(code **)(*this_ptr + 0x378))();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    (**(code **)(*this_ptr + 0x378))();
    plVar14 = (int64_t *)*arg1;
    if (plVar14 == local_48) {
      if (((char)arg1[1] != '\0') || (local_48 == (int64_t *)0x0)) goto LAB_014d982f;
      if (local_40 == '\0') {
        FUN_00d50b00();
        goto LAB_014d9826;
      }
    }
    else {
      lVar15 = arg1[1];
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)local_48;
        if (((char)lVar15 != '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_014d9826:
        *(void*)(arg1 + 1) = 1;
LAB_014d982f:
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_014d9843;
      }
      *arg1 = (int64_t)local_48;
      if (((char)lVar15 != '\0') && (plVar14 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(arg1 + 1) = 1;
  }
LAB_014d9843:
  pvVar13 = _pthread_getspecific((void*)param_1);
  if (param_2 == '\0') {
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar10 = FUN_01326de0();
    if (iVar10 != 1) {
      return;
    }
  }
  else {
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar10 = FUN_01326de0();
    if (iVar10 != 1) {
      pvVar13 = _pthread_getspecific((void*)param_1);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar10 = FUN_01326de0();
      if (iVar10 != 3) {
        return;
      }
    }
  }
  if (*(int *)(this_ptr[0x21] + 0xc) == 0) {
    return;
  }
  if ((g_028acf58 == (int64_t *)0x0) || (g_028acf61 == '\0')) {
    FUN_00e8cb50();
    if (g_028acf58 == (int64_t *)0x0) {
      plVar14 = (int64_t *)FUN_00e8fc40();
      FUN_011410f0();
      (**(code **)(*plVar14 + 0x18))();
      if (g_028acf58 == plVar14) {
        bVar42 = false;
        bVar41 = false;
      }
      else {
        bVar42 = true;
        bVar41 = true;
        bVar40 = g_028acf58 != (int64_t *)0x0;
        g_028acf58 = plVar14;
        if (bVar40) {
          FUN_00d50b20();
        }
      }
      if (g_028acf60 == '\0') {
        g_028acf60 = '\x01';
        FUN_00e8cb90();
        bVar41 = bVar42;
      }
      if (!bVar41) {
        FUN_00d50b20();
      }
      g_028acf61 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028acf61 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_014832d0();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_168 = local_48;
  lVar15 = FUN_014838f0();
  lVar16 = FUN_01483910();
  pvVar13 = _pthread_getspecific((void*)param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  local_c8 = local_48;
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pvVar13 = _pthread_getspecific((void*)param_1);
  plVar14 = local_c8;
  if ((pvVar13 != (void *)0x0) && (lVar17 = FUN_00e8b990(), plVar14 = local_c8, lVar17 != 0)) {
    param_1 = local_c8;
    plVar14 = (int64_t *)local_c8[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
  }
  pVar26 = (void*)param_1;
  local_120 = (double)(**(code **)(*plVar14 + 0x370))();
  (**(code **)(*this_ptr + 0x380))();
  lVar17 = (**(code **)(*this_ptr + 0x388))();
  FUN_014bc090();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pvVar13 = _pthread_getspecific(pVar26);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb920();
  uVar2 = *(uint *)(local_48 + 3);
  uVar38 = uVar2 + 3;
  if (-1 < (int)uVar2) {
    uVar38 = uVar2;
  }
  local_f8 = (uint64_t)uVar38;
  uVar38 = uVar2;
  if (local_40 != '\0') {
    FUN_00d50b20();
  }
  pvVar13 = _pthread_getspecific(uVar38);
  plVar14 = local_48;
  if ((pvVar13 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
    plVar14 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar18 + 0x154) & 1) + 4];
  }
  local_170 = (double)plVar14[10];
  puVar19 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar26 = 0x25f0d98;
  *puVar19 = &g_025f0d98;
  puVar19[2] = 0;
  puVar19[3] = 0;
  puVar19[4] = 0;
  puVar19[5] = 0;
  puVar19[6] = 0;
  puVar19[7] = 0;
  (*g_025f0db0)();
  local_f8 = (uint64_t)(uint)((int)local_f8 >> 2);
  dVar5 = g_0238fee8 / local_170;
  local_f0 = puVar19;
  if (cVar8 == '\0') {
    pvVar13 = _pthread_getspecific(pVar26);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_148 = local_48;
    local_140 = '\0';
    FUN_00c8e4f0();
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00(local_48);
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    uVar22 = FUN_00c92160();
    local_118 = CONCAT71((int7)((uint64_t)uVar22 >> 8),local_48 != (int64_t *)0x0);
    FUN_015c15b0((float)(g_0241c3a0 / dVar5),local_f8);
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_014bd640(SUB84(local_120,0));
    fVar43 = (float)(**(code **)(*this_ptr + 0x3e0))();
    fVar43 = (float)_exp2f(fVar43 * g_023941f4);
    FUN_00c8e690();
    if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    fVar43 = (float)(local_120 / (double)(fVar43 * g_023941f8));
    if ((fVar43 != 0.0) || (NAN(fVar43))) {
      uVar38 = *(uint *)(local_48 + 3);
      uVar36 = uVar38 + 3;
      if (-1 < (int)uVar38) {
        uVar36 = uVar38;
      }
      uVar20 = (uint64_t)uVar36;
      if (3 < (int)uVar38) {
        uVar36 = (int)uVar36 >> 2;
        uVar20 = (uint64_t)uVar36;
        lVar18 = local_48[2];
        uVar21 = 0;
        if (6 < uVar36 - 1) {
          uVar27 = (uint64_t)(uVar36 - 1) + 1;
          uVar21 = uVar27 & 0x1fffffff8;
          uVar32 = (uVar21 - 8 >> 3) + 1;
          uVar39 = (uint64_t)((uint)uVar32 & 7);
          if (uVar21 - 8 < 0x38) {
            lVar28 = 0;
          }
          else {
            lVar30 = -(uVar32 & 0xfffffffffffffff8);
            lVar28 = 0;
            do {
              pfVar23 = (float *)(lVar18 + lVar28 * 4);
              *pfVar23 = fVar43;
              pfVar23[1] = fVar43;
              pfVar23[2] = fVar43;
              pfVar23[3] = fVar43;
              pfVar23 = (float *)(lVar18 + 0x10 + lVar28 * 4);
              *pfVar23 = fVar43;
              pfVar23[1] = fVar43;
              pfVar23[2] = fVar43;
              pfVar23[3] = fVar43;
              pfVar23 = (float *)(lVar18 + 0x20 + lVar28 * 4);
              *pfVar23 = fVar43;
              pfVar23[1] = fVar43;
              pfVar23[2] = fVar43;
              pfVar23[3] = fVar43;
              pfVar23 = (float *)(lVar18 + 0x30 + lVar28 * 4);
              *pfVar23 = fVar43;
              pfVar23[1] = fVar43;
              pfVar23[2] = fVar43;
              pfVar23[3] = fVar43;
              pfVar23 = (float *)(lVar18 + 0x40 + lVar28 * 4);
              *pfVar23 = fVar43;
              pfVar23[1] = fVar43;
              pfVar23[2] = fVar43;
              pfVar23[3] = fVar43;
              pfVar23 = (float *)(lVar18 + 0x50 + lVar28 * 4);
              *pfVar23 = fVar43;
              pfVar23[1] = fVar43;
              pfVar23[2] = fVar43;
              pfVar23[3] = fVar43;
              pfVar23 = (float *)(lVar18 + 0x60 + lVar28 * 4);
              *pfVar23 = fVar43;
              pfVar23[1] = fVar43;
              pfVar23[2] = fVar43;
              pfVar23[3] = fVar43;
              pfVar23 = (float *)(lVar18 + 0x70 + lVar28 * 4);
              *pfVar23 = fVar43;
              pfVar23[1] = fVar43;
              pfVar23[2] = fVar43;
              pfVar23[3] = fVar43;
              pfVar23 = (float *)(lVar18 + 0x80 + lVar28 * 4);
              *pfVar23 = fVar43;
              pfVar23[1] = fVar43;
              pfVar23[2] = fVar43;
              pfVar23[3] = fVar43;
              pfVar23 = (float *)(lVar18 + 0x90 + lVar28 * 4);
              *pfVar23 = fVar43;
              pfVar23[1] = fVar43;
              pfVar23[2] = fVar43;
              pfVar23[3] = fVar43;
              pfVar23 = (float *)(lVar18 + 0xa0 + lVar28 * 4);
              *pfVar23 = fVar43;
              pfVar23[1] = fVar43;
              pfVar23[2] = fVar43;
              pfVar23[3] = fVar43;
              pfVar23 = (float *)(lVar18 + 0xb0 + lVar28 * 4);
              *pfVar23 = fVar43;
              pfVar23[1] = fVar43;
              pfVar23[2] = fVar43;
              pfVar23[3] = fVar43;
              pfVar23 = (float *)(lVar18 + 0xc0 + lVar28 * 4);
              *pfVar23 = fVar43;
              pfVar23[1] = fVar43;
              pfVar23[2] = fVar43;
              pfVar23[3] = fVar43;
              pfVar23 = (float *)(lVar18 + 0xd0 + lVar28 * 4);
              *pfVar23 = fVar43;
              pfVar23[1] = fVar43;
              pfVar23[2] = fVar43;
              pfVar23[3] = fVar43;
              pfVar23 = (float *)(lVar18 + 0xe0 + lVar28 * 4);
              *pfVar23 = fVar43;
              pfVar23[1] = fVar43;
              pfVar23[2] = fVar43;
              pfVar23[3] = fVar43;
              pfVar23 = (float *)(lVar18 + 0xf0 + lVar28 * 4);
              *pfVar23 = fVar43;
              pfVar23[1] = fVar43;
              pfVar23[2] = fVar43;
              pfVar23[3] = fVar43;
              lVar28 = lVar28 + 0x40;
              lVar30 = lVar30 + 8;
            } while (lVar30 != 0);
          }
          if (uVar39 != 0) {
            lVar28 = lVar18 + lVar28 * 4;
            lVar30 = 0;
            do {
              pfVar23 = (float *)(lVar28 + lVar30);
              *pfVar23 = fVar43;
              pfVar23[1] = fVar43;
              pfVar23[2] = fVar43;
              pfVar23[3] = fVar43;
              pfVar23 = (float *)(lVar28 + 0x10 + lVar30);
              *pfVar23 = fVar43;
              pfVar23[1] = fVar43;
              pfVar23[2] = fVar43;
              pfVar23[3] = fVar43;
              lVar30 = lVar30 + 0x20;
            } while (uVar39 << 5 != lVar30);
          }
          if (uVar27 == uVar21) goto LAB_014da03d;
          lVar18 = lVar18 + uVar21 * 4;
        }
        uVar36 = uVar36 - (int)uVar21;
        uVar20 = (uint64_t)uVar36;
        lVar28 = 0;
        do {
          *(float *)(lVar18 + lVar28 * 4) = fVar43;
          lVar28 = lVar28 + 1;
        } while (uVar36 != (uint)lVar28);
      }
    }
    else {
      uVar20 = ___bzero();
    }
LAB_014da03d:
    local_118 = CONCAT71((int7)(uVar20 >> 8),local_48 != (int64_t *)0x0);
  }
  puVar19 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar19 = &g_025f1800;
  puVar19[7] = 0;
  *(void*)(puVar19 + 8) = 0;
  *(void*)(puVar19 + 0xc) = 0;
  puVar19[2] = 0;
  puVar19[3] = 0;
  puVar19[4] = 0;
  puVar19[5] = 0;
  *(void*)(puVar19 + 6) = 0;
  puVar19[9] = 0;
  puVar19[10] = 0;
  *(void*)((int64_t)puVar19 + 0x55) = 0;
  puVar19[0xd] = 0;
  puVar19[0xe] = 0;
  puVar19[0xf] = 0;
  puVar19[0x10] = 0;
  (*g_025f1818)();
  local_150 = puVar19;
  FUN_015c6ee0(SUB84(local_120,0),8);
  dVar1 = (double)puVar19[7];
  local_100 = (void*)puVar19[10];
  iVar10 = *(int *)(puVar19 + 6);
  uVar20 = FUN_014832c0();
  local_10c = (float)iVar10;
  uVar21 = FUN_00e7d780((float)lVar17 / local_10c);
  puVar19 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar19 = &g_02572358;
  pcVar9 = g_02572370;
  (*g_02572370)();
  local_88 = (uint)uVar21;
  local_108 = puVar19;
  if (0 < (int)local_88) {
    uVar39 = uVar21 & 0xffffffff;
    do {
      FUN_00c8e690();
      if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      local_40 = '\0';
      FUN_00d21140();
      FUN_00d50b20();
      uVar38 = (int)uVar39 - 1;
      uVar39 = (uint64_t)uVar38;
    } while (uVar38 != 0);
  }
  puVar19 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar19 = &g_02572358;
  (*pcVar9)();
  local_138 = puVar19;
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  GNFastFourierTransformer_create();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_188 = FUN_00e83da0();
  local_180 = FUN_00e83010();
  local_178 = FUN_00e83010();
  local_a0 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *local_a0 = &g_025f1488;
  *(void*)((int64_t)local_a0 + 0xc) = 0;
  *(void*)((int64_t)local_a0 + 0x14) = 0;
  *(void*)((int64_t)local_a0 + 0x1c) = 0;
  *(void*)((int64_t)local_a0 + 0x24) = 0;
  *(void*)((int64_t)local_a0 + 0x2c) = 0;
  *(void*)((int64_t)local_a0 + 0x34) = 0;
  *(void*)((int64_t)local_a0 + 0x3c) = 0;
  *(void*)((int64_t)local_a0 + 0x44) = 0;
  local_a0[9] = 0;
  local_a0[10] = 0;
  pcVar9 = g_025f14a0;
  (*g_025f14a0)();
  local_250 = local_c8;
  local_248 = '\0';
  local_240 = local_150;
  local_238 = '\0';
  local_230 = 0;
  local_228 = '\0';
  local_220 = local_48;
  local_218 = '\0';
  local_210 = 0;
  local_208 = '\0';
  FUN_015c4d90(0,local_178,&local_250,&local_240,&local_220,local_188,0,6,&local_210);
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  if ((local_218 != '\0') && (local_220 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  if ((local_238 != '\0') && (local_240 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_248 != '\0') && (local_250 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_154 = (float)(dVar1 / dVar5);
  local_128 = uVar21 & 0xffffffff;
  if ((int)local_88 < 1) {
    uVar39 = 1;
    local_78 = 0;
    local_50 = (void*)0x0;
  }
  else {
    local_100 = (void*)CONCAT44(local_100._4_4_,(float)(double)local_100);
    local_18c = (int)local_f8 + -1;
    local_d0 = (int64_t *)
               CONCAT44(local_d0._4_4_,(int)CONCAT71((uint7)(uint3)((uint)local_18c >> 8),1));
    uVar32 = 0;
    local_50 = (void*)0x0;
    uVar27 = 0;
    do {
      lVar17 = *(int64_t *)(local_108[2] + uVar32 * 8);
      if (lVar17 != 0) {
        FUN_00d50b00();
      }
      puVar19 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar19 = &g_025f1488;
      *(void*)((int64_t)puVar19 + 0xc) = 0;
      *(void*)((int64_t)puVar19 + 0x14) = 0;
      *(void*)((int64_t)puVar19 + 0x1c) = 0;
      *(void*)((int64_t)puVar19 + 0x24) = 0;
      *(void*)((int64_t)puVar19 + 0x2c) = 0;
      *(void*)((int64_t)puVar19 + 0x34) = 0;
      *(void*)((int64_t)puVar19 + 0x3c) = 0;
      *(void*)((int64_t)puVar19 + 0x44) = 0;
      puVar19[9] = 0;
      puVar19[10] = 0;
      uVar22 = (*pcVar9)();
      uVar25 = (undefined7)((uint64_t)uVar22 >> 8);
      if (puVar19 == local_50) {
        puVar19 = local_50;
        if ((char)uVar27 == '\0') {
          local_78 = CONCAT71(uVar25,1);
        }
        else {
          FUN_00d50b20();
          local_78 = uVar27;
        }
      }
      else {
        local_78 = CONCAT71(uVar25,1);
        if (((char)uVar27 != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      local_e0 = (int)uVar32;
      local_200 = local_c8;
      local_1f8 = '\0';
      local_1f0 = local_150;
      local_1e8 = '\0';
      local_1e0 = local_a0;
      local_1d8 = '\0';
      local_1d0 = local_48;
      local_1c8 = '\0';
      local_1c0 = 0;
      local_1b8 = '\0';
      FUN_015c4d90(0,local_178,&local_200,&local_1f0,&local_1d0,local_188,0,0x1e,&local_1c0);
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1c8 != '\0') && (local_1d0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1d8 != '\0') && (local_1e0 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1e8 != '\0') && (local_1f0 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1f8 != '\0') && (local_200 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_015c6b60();
      FUN_015c66c0();
      local_38 = (int)uVar20;
      if (0 < local_38) {
        uVar39 = 0;
        do {
          fVar43 = (float)FUN_014b2e80(*(void*)(local_168[2] + uVar39 * 4),0x2000);
          fVar43 = fVar43 * *(float *)(lVar15 + uVar39 * 4);
          uVar27 = (uint)-*(int *)(lVar16 + 4) + uVar39;
          iVar10 = (int)uVar27;
          if ((-1 < iVar10) && (iVar10 < local_38)) {
            uVar27 = uVar27 & 0xffffffff;
            *(float *)(*(int64_t *)(lVar17 + 0x10) + uVar27 * 4) =
                 *(float *)(*(int64_t *)(lVar17 + 0x10) + uVar27 * 4) + fVar43;
          }
          uVar27 = (uint)-*(int *)(lVar16 + 8) + uVar39;
          iVar10 = (int)uVar27;
          if ((-1 < iVar10) && (iVar10 < local_38)) {
            uVar27 = uVar27 & 0xffffffff;
            *(float *)(*(int64_t *)(lVar17 + 0x10) + uVar27 * 4) =
                 *(float *)(*(int64_t *)(lVar17 + 0x10) + uVar27 * 4) + fVar43;
          }
          uVar27 = (uint)-*(int *)(lVar16 + 0xc) + uVar39;
          iVar10 = (int)uVar27;
          if ((-1 < iVar10) && (iVar10 < local_38)) {
            uVar27 = uVar27 & 0xffffffff;
            *(float *)(*(int64_t *)(lVar17 + 0x10) + uVar27 * 4) =
                 *(float *)(*(int64_t *)(lVar17 + 0x10) + uVar27 * 4) + fVar43;
          }
          uVar27 = (uint)-*(int *)(lVar16 + 0x10) + uVar39;
          iVar10 = (int)uVar27;
          if ((-1 < iVar10) && (iVar10 < local_38)) {
            uVar27 = uVar27 & 0xffffffff;
            *(float *)(*(int64_t *)(lVar17 + 0x10) + uVar27 * 4) =
                 *(float *)(*(int64_t *)(lVar17 + 0x10) + uVar27 * 4) + fVar43;
          }
          uVar27 = (uint)-*(int *)(lVar16 + 0x14) + uVar39;
          iVar10 = (int)uVar27;
          if ((-1 < iVar10) && (iVar10 < local_38)) {
            uVar27 = uVar27 & 0xffffffff;
            *(float *)(*(int64_t *)(lVar17 + 0x10) + uVar27 * 4) =
                 *(float *)(*(int64_t *)(lVar17 + 0x10) + uVar27 * 4) + fVar43;
          }
          uVar27 = (uint)-*(int *)(lVar16 + 0x18) + uVar39;
          iVar10 = (int)uVar27;
          if ((-1 < iVar10) && (iVar10 < local_38)) {
            uVar27 = uVar27 & 0xffffffff;
            *(float *)(*(int64_t *)(lVar17 + 0x10) + uVar27 * 4) =
                 *(float *)(*(int64_t *)(lVar17 + 0x10) + uVar27 * 4) + fVar43;
          }
          uVar27 = (uint)-*(int *)(lVar16 + 0x1c) + uVar39;
          iVar10 = (int)uVar27;
          if ((-1 < iVar10) && (iVar10 < local_38)) {
            uVar27 = uVar27 & 0xffffffff;
            *(float *)(*(int64_t *)(lVar17 + 0x10) + uVar27 * 4) =
                 *(float *)(*(int64_t *)(lVar17 + 0x10) + uVar27 * 4) + fVar43;
          }
          uVar27 = (uint)-*(int *)(lVar16 + 0x20) + uVar39;
          iVar10 = (int)uVar27;
          if ((-1 < iVar10) && (iVar10 < local_38)) {
            uVar27 = uVar27 & 0xffffffff;
            *(float *)(*(int64_t *)(lVar17 + 0x10) + uVar27 * 4) =
                 fVar43 + *(float *)(*(int64_t *)(lVar17 + 0x10) + uVar27 * 4);
          }
          uVar39 = uVar39 + 1;
        } while ((uVar20 & 0xffffffff) != uVar39);
      }
      FUN_015c15b0(g_0240e494,uVar20 & 0xffffffff);
      FUN_015b4130(0,uVar20 & 0xffffffff);
      if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      local_40 = '\0';
      local_130 = local_48;
      FUN_00d21140();
      iVar10 = FUN_00e7d780((float)local_e0 * local_154);
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      if ((int)local_f8 <= iVar10) {
        iVar10 = local_18c;
      }
      fVar43 = (float)_logf((float)((local_120 /
                                    (double)*(float *)(local_48[2] + (int64_t)iVar10 * 4)) *
                                   g_0240de70));
      uVar11 = FUN_01483610(fVar43 * g_02394208);
      FUN_014ebf30(uVar20,uVar11,&local_d8,&local_d4);
      *(void*)(local_48[2] + uVar32 * 4) = local_d8;
      lVar17 = local_48[2];
      *(void*)(lVar17 + uVar32 * 4) = local_d4;
      if (local_a0 == puVar19) {
        puVar24 = local_a0;
        if (((char)local_d0 == '\0') && (local_a0 != (void*)0x0)) {
          uVar39 = CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
          local_d0 = (int64_t *)((uint64_t)local_d0 & 0xffffffff00000000);
          FUN_00d50b00();
        }
        else {
          uVar39 = (uint64_t)local_d0 & 0xffffffff;
        }
      }
      else {
        if (puVar19 != (void*)0x0) {
          FUN_00d50b00();
        }
        uVar39 = local_78;
        puVar24 = puVar19;
        if (((char)local_d0 != '\0') && (local_a0 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      local_a0 = puVar24;
      if (local_130 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      uVar32 = uVar32 + 1;
      uVar27 = local_78 & 0xffffffff;
      local_d0 = (int64_t *)CONCAT44(local_d0._4_4_,(int)uVar39);
      local_50 = puVar19;
    } while (uVar32 != local_128);
  }
  FUN_00e83070();
  FUN_00e83070();
  FUN_00e83070();
  plVar14 = local_c8;
  if (0 < (int)local_88) {
    uVar32 = 0;
    do {
      iVar10 = FUN_01483610(*(void*)(local_48[2] + uVar32 * 4));
      *(float *)(local_48[2] + (int64_t)iVar10 * 4) =
           *(float *)(local_48[2] + uVar32 * 4) + *(float *)(local_48[2] + (int64_t)iVar10 * 4);
      uVar32 = uVar32 + 1;
    } while (local_128 != uVar32);
  }
  FUN_015c15b0(g_0240e494,uVar20 & 0xffffffff);
  FUN_015b32a0(g_02391074,&local_15c);
  local_148 = local_48;
  local_140 = '\0';
  FUN_00c8e4f0();
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_015c15b0((float)(g_0240de98 / dVar1),uVar21 & 0xffffffff);
  local_d0 = local_48;
  FUN_015b32a0(g_02391074,&local_158);
  uVar32 = (uint64_t)(int)local_88;
  bVar41 = true;
  do {
    bVar42 = bVar41;
    lVar18 = (int64_t)(int)local_158;
    lVar15 = local_48[2];
    lVar17 = lVar18 << 0x20;
    iVar10 = -local_158;
    fVar43 = *(float *)(lVar15 + lVar18 * 4);
    lVar16 = lVar18;
    uVar38 = local_158;
    do {
      fVar45 = fVar43;
      lVar16 = lVar16 + 1;
      if ((int64_t)uVar32 <= lVar16) goto LAB_014db2f0;
      fVar43 = *(float *)(lVar15 + lVar16 * 4);
      lVar17 = lVar17 + 0x100000000;
      iVar10 = iVar10 + -1;
      uVar38 = uVar38 + 1;
    } while ((float)((uint)(fVar45 - fVar43) & g_02390140) <= g_02394240);
    if ((iVar10 != 1) && (-iVar10 < (int)local_88)) {
      uVar27 = lVar17 >> 0x20;
      if (bVar42) {
        uVar34 = uVar21 & 0xffffffff;
        do {
          lVar15 = *(int64_t *)(local_108[2] + uVar27 * 8);
          if (lVar15 != 0) {
            FUN_00d50b00();
          }
          lVar16 = *(int64_t *)(local_138[2] + uVar27 * 8);
          if (lVar16 != 0) {
            FUN_00d50b00();
          }
          FUN_014ebf30(uVar20,local_15c,&local_d8,&local_d4);
          *(void*)(local_48[2] + uVar27 * 4) = local_d8;
          *(void*)(local_48[2] + uVar27 * 4) = local_d4;
          if (lVar16 != 0) {
            FUN_00d50b20();
          }
          if (lVar15 != 0) {
            FUN_00d50b20();
          }
          uVar27 = uVar27 + 1;
          uVar36 = (int)uVar34 - 1;
          uVar34 = (uint64_t)uVar36;
        } while (uVar38 != uVar36);
        lVar15 = local_48[2];
        lVar18 = (int64_t)(int)local_158;
        plVar14 = local_c8;
      }
      else {
        lVar16 = local_48[2];
        uVar34 = uVar32 - uVar27;
        if ((7 < uVar34) &&
           ((lVar15 + uVar32 * 4 <= lVar16 + uVar27 * 4 ||
            (lVar16 + uVar32 * 4 <= lVar15 + uVar27 * 4)))) {
          uVar35 = uVar34 & 0xfffffffffffffff8;
          lVar17 = (int64_t)(int)uVar38;
          if (uVar35 - 8 < 0x18) {
            lVar33 = 0;
          }
          else {
            lVar28 = lVar15 + lVar17 * 4;
            lVar30 = lVar16 + lVar17 * 4;
            lVar29 = -(((uVar32 - lVar17 & 0xfffffffffffffff8) - 8 >> 3) + 1 & 0xfffffffffffffffc);
            lVar33 = 0;
            do {
              puVar19 = (void*)(lVar30 + lVar33 * 4);
              *puVar19 = 0;
              puVar19[1] = 0;
              puVar19 = (void*)(lVar30 + 0x10 + lVar33 * 4);
              *puVar19 = 0;
              puVar19[1] = 0;
              pfVar23 = (float *)(lVar28 + lVar33 * 4);
              *pfVar23 = fVar45;
              pfVar23[1] = fVar45;
              pfVar23[2] = fVar45;
              pfVar23[3] = fVar45;
              pfVar23 = (float *)(lVar28 + 0x10 + lVar33 * 4);
              *pfVar23 = fVar45;
              pfVar23[1] = fVar45;
              pfVar23[2] = fVar45;
              pfVar23[3] = fVar45;
              puVar19 = (void*)(lVar30 + 0x20 + lVar33 * 4);
              *puVar19 = 0;
              puVar19[1] = 0;
              puVar19 = (void*)(lVar30 + 0x30 + lVar33 * 4);
              *puVar19 = 0;
              puVar19[1] = 0;
              pfVar23 = (float *)(lVar28 + 0x20 + lVar33 * 4);
              *pfVar23 = fVar45;
              pfVar23[1] = fVar45;
              pfVar23[2] = fVar45;
              pfVar23[3] = fVar45;
              pfVar23 = (float *)(lVar28 + 0x30 + lVar33 * 4);
              *pfVar23 = fVar45;
              pfVar23[1] = fVar45;
              pfVar23[2] = fVar45;
              pfVar23[3] = fVar45;
              puVar19 = (void*)(lVar30 + 0x40 + lVar33 * 4);
              *puVar19 = 0;
              puVar19[1] = 0;
              puVar19 = (void*)(lVar30 + 0x50 + lVar33 * 4);
              *puVar19 = 0;
              puVar19[1] = 0;
              pfVar23 = (float *)(lVar28 + 0x40 + lVar33 * 4);
              *pfVar23 = fVar45;
              pfVar23[1] = fVar45;
              pfVar23[2] = fVar45;
              pfVar23[3] = fVar45;
              pfVar23 = (float *)(lVar28 + 0x50 + lVar33 * 4);
              *pfVar23 = fVar45;
              pfVar23[1] = fVar45;
              pfVar23[2] = fVar45;
              pfVar23[3] = fVar45;
              puVar19 = (void*)(lVar30 + 0x60 + lVar33 * 4);
              *puVar19 = 0;
              puVar19[1] = 0;
              puVar19 = (void*)(lVar30 + 0x70 + lVar33 * 4);
              *puVar19 = 0;
              puVar19[1] = 0;
              pfVar23 = (float *)(lVar28 + 0x60 + lVar33 * 4);
              *pfVar23 = fVar45;
              pfVar23[1] = fVar45;
              pfVar23[2] = fVar45;
              pfVar23[3] = fVar45;
              pfVar23 = (float *)(lVar28 + 0x70 + lVar33 * 4);
              *pfVar23 = fVar45;
              pfVar23[1] = fVar45;
              pfVar23[2] = fVar45;
              pfVar23[3] = fVar45;
              lVar33 = lVar33 + 0x20;
              lVar29 = lVar29 + 4;
            } while (lVar29 != 0);
          }
          if (((uVar35 - 8 >> 3) + 1 & 3) != 0) {
            lVar28 = lVar15 + (lVar33 + lVar17) * 4;
            lVar17 = lVar16 + (lVar33 + lVar17) * 4;
            lVar30 = 0;
            do {
              *(uint8_t (*) [16])(lVar17 + lVar30) = ZEXT816(0);
              *(uint8_t (*) [16])(lVar17 + 0x10 + lVar30) = ZEXT816(0);
              pfVar23 = (float *)(lVar28 + lVar30);
              *pfVar23 = fVar45;
              pfVar23[1] = fVar45;
              pfVar23[2] = fVar45;
              pfVar23[3] = fVar45;
              pfVar23 = (float *)(lVar28 + 0x10 + lVar30);
              *pfVar23 = fVar45;
              pfVar23[1] = fVar45;
              pfVar23[2] = fVar45;
              pfVar23[3] = fVar45;
              lVar30 = lVar30 + 0x20;
            } while ((uint64_t)
                     ((byte)(((byte)(((char)uVar21 - (char)uVar38 & 0x18U) - 8) >> 3) + 1) & 3) << 5
                     != lVar30);
          }
          if (uVar34 == uVar35) goto LAB_014db2f0;
          uVar27 = uVar27 + uVar35;
        }
        uVar38 = local_88 - (int)uVar27;
        uVar34 = ~uVar27;
        uVar35 = (uint64_t)uVar38 & 3;
        if ((uVar38 & 3) != 0) {
          do {
            *(void*)(lVar16 + uVar27 * 4) = 0;
            *(float *)(lVar15 + uVar27 * 4) = fVar45;
            uVar27 = uVar27 + 1;
            uVar35 = uVar35 - 1;
          } while (uVar35 != 0);
        }
        if (2 < uVar34 + uVar32) {
          do {
            *(void*)(lVar16 + uVar27 * 4) = 0;
            *(float *)(lVar15 + uVar27 * 4) = fVar45;
            *(void*)(lVar16 + 4 + uVar27 * 4) = 0;
            *(float *)(lVar15 + 4 + uVar27 * 4) = fVar45;
            *(void*)(lVar16 + 8 + uVar27 * 4) = 0;
            *(float *)(lVar15 + 8 + uVar27 * 4) = fVar45;
            *(void*)(lVar16 + 0xc + uVar27 * 4) = 0;
            *(float *)(lVar15 + 0xc + uVar27 * 4) = fVar45;
            uVar27 = uVar27 + 4;
          } while (uVar32 != uVar27);
        }
      }
    }
LAB_014db2f0:
    uVar27 = (uint64_t)local_158;
    fVar43 = *(float *)(lVar15 + lVar18 * 4);
    uVar38 = local_158;
    do {
      fVar45 = fVar43;
      uVar34 = uVar27;
      uVar38 = uVar38 - 1;
      if ((int)uVar34 < 1) goto LAB_014daf10;
      fVar43 = *(float *)(lVar15 + -4 + uVar34 * 4);
      uVar27 = uVar34 - 1;
    } while ((float)((uint)(fVar45 - fVar43) & g_02390140) <= g_02394240);
    iVar10 = (int)uVar27;
    uVar27 = uVar27 & 0xffffffff;
    if (bVar42) {
      do {
        lVar15 = *(int64_t *)(local_108[2] + uVar27 * 8);
        if (lVar15 != 0) {
          FUN_00d50b00();
        }
        lVar16 = *(int64_t *)(local_138[2] + uVar27 * 8);
        if (lVar16 != 0) {
          FUN_00d50b00();
        }
        FUN_014ebf30(uVar20,local_15c,&local_d8,&local_d4);
        *(void*)(local_48[2] + uVar27 * 4) = local_d8;
        *(void*)(local_48[2] + uVar27 * 4) = local_d4;
        if (lVar16 != 0) {
          FUN_00d50b20();
        }
        if (lVar15 != 0) {
          FUN_00d50b20();
        }
        uVar27 = uVar27 - 1;
        uVar38 = (int)uVar34 - 1;
        uVar34 = (uint64_t)uVar38;
      } while (0 < (int)uVar38);
    }
    else {
      iVar12 = 0;
      if (iVar10 < 0) {
        iVar12 = iVar10;
      }
      if (6 < (uint)(iVar10 - iVar12)) {
        uVar34 = (uint64_t)(uint)(iVar10 - iVar12) + 1;
        uVar35 = uVar34 & 0x1fffffff8;
        if (uVar35 - 8 < 0x18) {
          lVar18 = 0;
        }
        else {
          uVar36 = 0;
          if ((int)uVar38 < 0) {
            uVar36 = uVar38;
          }
          lVar17 = -((((uint64_t)(uVar38 - uVar36) + 1 & 0xfffffffffffffff8) - 8 >> 3) + 1 &
                    0xfffffffffffffffc);
          lVar16 = 0x10;
          do {
            lVar18 = lVar16;
            lVar16 = uVar27 - lVar18;
            pfVar23 = (float *)(lVar15 + 0x34 + lVar16 * 4);
            *pfVar23 = fVar45;
            pfVar23[1] = fVar45;
            pfVar23[2] = fVar45;
            pfVar23[3] = fVar45;
            pfVar23 = (float *)(lVar15 + 0x24 + lVar16 * 4);
            *pfVar23 = fVar45;
            pfVar23[1] = fVar45;
            pfVar23[2] = fVar45;
            pfVar23[3] = fVar45;
            pfVar23 = (float *)(lVar15 + 0x14 + lVar16 * 4);
            *pfVar23 = fVar45;
            pfVar23[1] = fVar45;
            pfVar23[2] = fVar45;
            pfVar23[3] = fVar45;
            pfVar23 = (float *)(lVar15 + 4 + lVar16 * 4);
            *pfVar23 = fVar45;
            pfVar23[1] = fVar45;
            pfVar23[2] = fVar45;
            pfVar23[3] = fVar45;
            pfVar23 = (float *)(lVar15 + -0xc + lVar16 * 4);
            *pfVar23 = fVar45;
            pfVar23[1] = fVar45;
            pfVar23[2] = fVar45;
            pfVar23[3] = fVar45;
            pfVar23 = (float *)(lVar15 + -0x1c + lVar16 * 4);
            *pfVar23 = fVar45;
            pfVar23[1] = fVar45;
            pfVar23[2] = fVar45;
            pfVar23[3] = fVar45;
            pfVar23 = (float *)(lVar15 + -0x2c + lVar16 * 4);
            *pfVar23 = fVar45;
            pfVar23[1] = fVar45;
            pfVar23[2] = fVar45;
            pfVar23[3] = fVar45;
            pfVar23 = (float *)(lVar15 + -0x3c + lVar16 * 4);
            *pfVar23 = fVar45;
            pfVar23[1] = fVar45;
            pfVar23[2] = fVar45;
            pfVar23[3] = fVar45;
            lVar17 = lVar17 + 4;
            lVar16 = lVar18 + 0x20;
          } while (lVar17 != 0);
          lVar18 = lVar18 + 0x10;
        }
        if (((uVar35 - 8 >> 3) + 1 & 3) != 0) {
          uVar36 = 0;
          if ((int)uVar38 < 0) {
            uVar36 = uVar38;
          }
          lVar16 = -(uint64_t)
                    ((byte)(((byte)((((char)uVar38 - (char)uVar36) + 1U & 0x18) - 8) >> 3) + 1) & 3)
          ;
          do {
            pfVar23 = (float *)(lVar15 + -0xc + (uVar27 - lVar18) * 4);
            *pfVar23 = fVar45;
            pfVar23[1] = fVar45;
            pfVar23[2] = fVar45;
            pfVar23[3] = fVar45;
            pfVar23 = (float *)(lVar15 + -0x1c + (uVar27 - lVar18) * 4);
            *pfVar23 = fVar45;
            pfVar23[1] = fVar45;
            pfVar23[2] = fVar45;
            pfVar23[3] = fVar45;
            lVar18 = lVar18 + 8;
            lVar16 = lVar16 + 1;
          } while (lVar16 != 0);
        }
        if (uVar34 == uVar35) goto LAB_014daf10;
        uVar27 = uVar27 - uVar35;
      }
      iVar10 = (int)uVar27 + 1;
      pfVar23 = (float *)(lVar15 + uVar27 * 4);
      do {
        *pfVar23 = fVar45;
        iVar10 = iVar10 + -1;
        pfVar23 = pfVar23 + -1;
      } while (0 < iVar10);
    }
LAB_014daf10:
    bVar41 = false;
  } while (bVar42);
  if ((int)local_88 < 1) goto LAB_014db6f7;
  lVar15 = local_48[2];
  uVar38 = (uint)local_128;
  fVar43 = g_02394274;
  if (local_128 - 1 < 3) {
    uVar20 = 0;
  }
  else {
    uVar20 = 0;
    do {
      fVar45 = *(float *)(lVar15 + uVar20 * 4);
      if (fVar45 <= fVar43) {
        fVar45 = fVar43;
      }
      fVar43 = *(float *)(lVar15 + 4 + uVar20 * 4);
      if (fVar43 <= fVar45) {
        fVar43 = fVar45;
      }
      fVar45 = *(float *)(lVar15 + 8 + uVar20 * 4);
      if (fVar45 <= fVar43) {
        fVar45 = fVar43;
      }
      fVar43 = *(float *)(lVar15 + 0xc + uVar20 * 4);
      if (fVar43 <= fVar45) {
        fVar43 = fVar45;
      }
      uVar20 = uVar20 + 4;
    } while ((uVar38 & 0xfffffffc) != uVar20);
  }
  if ((uint64_t)(uVar38 & 3) != 0) {
    uVar32 = 0;
    fVar45 = fVar43;
    do {
      fVar43 = *(float *)(lVar15 + uVar20 * 4 + uVar32 * 4);
      if (fVar43 <= fVar45) {
        fVar43 = fVar45;
      }
      uVar32 = uVar32 + 1;
      fVar45 = fVar43;
    } while ((uVar38 & 3) != uVar32);
  }
  lVar15 = local_48[2];
  if (local_88 < 4) {
    uVar20 = 0;
  }
  else {
    uVar20 = (uint64_t)(uVar38 & 0xfffffffc);
    uVar32 = (uVar20 - 4 >> 2) + 1;
    if (uVar20 - 4 == 0) {
      lVar16 = 0;
LAB_014db6c7:
      auVar7._4_4_ = fVar43;
      auVar7._0_4_ = fVar43;
      auVar7._8_4_ = fVar43;
      auVar7._12_4_ = fVar43;
      auVar46 = divps(*(uint8_t (*) [16])(lVar15 + lVar16 * 4),auVar7);
      *(uint8_t (*) [16])(lVar15 + lVar16 * 4) = auVar46;
    }
    else {
      lVar17 = -(uVar32 & 0xfffffffffffffffe);
      lVar16 = 0;
      do {
        auVar46._4_4_ = fVar43;
        auVar46._0_4_ = fVar43;
        auVar46._8_4_ = fVar43;
        auVar46._12_4_ = fVar43;
        auVar46 = divps(*(uint8_t (*) [16])(lVar15 + lVar16 * 4),auVar46);
        *(uint8_t (*) [16])(lVar15 + lVar16 * 4) = auVar46;
        auVar6._4_4_ = fVar43;
        auVar6._0_4_ = fVar43;
        auVar6._8_4_ = fVar43;
        auVar6._12_4_ = fVar43;
        auVar46 = divps(*(uint8_t (*) [16])(lVar15 + 0x10 + lVar16 * 4),auVar6);
        *(uint8_t (*) [16])(lVar15 + 0x10 + lVar16 * 4) = auVar46;
        lVar16 = lVar16 + 8;
        lVar17 = lVar17 + 2;
      } while (lVar17 != 0);
      if ((uVar32 & 1) != 0) goto LAB_014db6c7;
    }
    if (uVar20 == local_128) goto LAB_014db6f7;
  }
  do {
    *(float *)(lVar15 + uVar20 * 4) = *(float *)(lVar15 + uVar20 * 4) / fVar43;
    uVar20 = uVar20 + 1;
  } while (local_128 != uVar20);
LAB_014db6f7:
  FUN_015c15b0(g_02411290,uVar21);
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  iVar10 = local_88 - 1;
  if (3 < (int)uVar2) {
    fVar43 = (float)local_120;
    local_130 = (int64_t *)(local_f8 & 0xffffffff);
    plVar31 = (int64_t *)0x0;
    do {
      fVar45 = (float)(int)plVar31 / local_154;
      iVar12 = FUN_00e7d780();
      if (iVar12 < 0) {
        iVar12 = 0;
        fVar45 = 0.0;
        bVar42 = SBORROW4(0,local_88);
        bVar41 = (int)-local_88 < 0;
        if ((int)local_88 < 1) goto LAB_014db96e;
LAB_014db9af:
        if (bVar42 == bVar41) goto LAB_014db9b1;
LAB_014db975:
        iVar37 = iVar12 + 1;
        iVar4 = iVar37 - local_88;
      }
      else {
        fVar45 = fVar45 - (float)iVar12;
        bVar42 = SBORROW4(iVar12,local_88);
        bVar41 = (int)(iVar12 - local_88) < 0;
        if (iVar12 < (int)local_88) goto LAB_014db9af;
LAB_014db96e:
        iVar12 = iVar10;
        if (bVar42 != bVar41) goto LAB_014db975;
LAB_014db9b1:
        fVar45 = 0.0;
        iVar37 = iVar12 + 1;
        iVar4 = iVar37 - local_88;
      }
      if ((int)local_88 <= iVar37) {
        fVar45 = 0.0;
      }
      if (SBORROW4(iVar37,local_88) == iVar4 < 0) {
        iVar37 = iVar10;
      }
      lVar15 = local_48[2];
      fVar44 = (float)_exp2f(*(float *)(lVar15 + (int64_t)iVar12 * 4) * g_023941f4);
      local_100 = (void*)CONCAT44(local_100._4_4_,fVar43 / (fVar44 * g_023941f8));
      lVar16 = local_48[2];
      fVar44 = (float)_exp2f(*(float *)(lVar15 + (int64_t)iVar37 * 4) * g_023941f4);
      *(float *)(lVar16 + (int64_t)plVar31 * 4) =
           (fVar43 / (fVar44 * g_023941f8) - local_100._0_4_) * fVar45 + local_100._0_4_;
      fVar44 = *(float *)(local_48[2] + (int64_t)iVar12 * 4);
      *(float *)(local_48[2] + (int64_t)plVar31 * 4) =
           (*(float *)(local_48[2] + (int64_t)iVar37 * 4) - fVar44) * fVar45 + fVar44;
      plVar31 = (int64_t *)((int64_t)plVar31 + 1);
      plVar14 = local_c8;
    } while (local_130 != plVar31);
  }
  puVar19 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)(puVar19 + 7) = 0;
  *(void*)((int64_t)puVar19 + 0x3c) = 0;
  *(void*)(puVar19 + 8) = 0;
  pVar26 = 0x25dc9e8;
  local_100 = &g_025dc9e8;
  *puVar19 = &g_025dc9e8;
  puVar19[9] = 0;
  puVar19[10] = 0;
  pcVar9 = g_025dca00;
  (*g_025dca00)();
  pvVar13 = _pthread_getspecific(pVar26);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb950(SUB84(local_170,0));
  pvVar13 = _pthread_getspecific(pVar26);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_1b0 = local_48;
  local_1a8 = '\0';
  FUN_013eb890();
  if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((void*)this_ptr[0x11] != puVar19) {
    FUN_00d64850();
    puVar24 = (void*)this_ptr[0x11];
    if (puVar24 != puVar19) {
      FUN_00d50b00();
      this_ptr[0x11] = (int64_t)puVar19;
      if (puVar24 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  puVar24 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)(puVar24 + 7) = 0;
  *(void*)((int64_t)puVar24 + 0x3c) = 0;
  *(void*)(puVar24 + 8) = 0;
  *puVar24 = local_100;
  puVar24[9] = 0;
  puVar24[10] = 0;
  (*pcVar9)();
  pvVar13 = _pthread_getspecific(pVar26);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb950(SUB84(local_170,0));
  pvVar13 = _pthread_getspecific(pVar26);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_1a0 = local_48;
  local_198 = '\0';
  FUN_013eb890();
  if ((local_198 != '\0') && (local_1a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((void*)this_ptr[9] != puVar24) {
    FUN_00d64850();
    puVar3 = (void*)this_ptr[9];
    if (puVar3 != puVar24) {
      FUN_00d50b00();
      this_ptr[9] = (int64_t)puVar24;
      if (puVar3 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  pvVar13 = _pthread_getspecific(pVar26);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (0 < *(int *)(this_ptr[0x21] + 0xc)) {
    local_10c = local_10c / (float)(int)local_48[6];
    lVar15 = 0;
    do {
      fVar43 = (float)(int)lVar15 / local_10c;
      iVar12 = FUN_00e7d780();
      if (iVar12 < 0) {
        iVar12 = 0;
        fVar43 = 0.0;
        bVar42 = SBORROW4(0,local_88);
        bVar41 = (int)-local_88 < 0;
        if ((int)local_88 < 1) goto LAB_014dbddf;
LAB_014dbe20:
        if (bVar42 == bVar41) goto LAB_014dbe22;
LAB_014dbde6:
        iVar37 = iVar12 + 1;
        iVar4 = iVar37 - local_88;
      }
      else {
        fVar43 = fVar43 - (float)iVar12;
        bVar42 = SBORROW4(iVar12,local_88);
        bVar41 = (int)(iVar12 - local_88) < 0;
        if (iVar12 < (int)local_88) goto LAB_014dbe20;
LAB_014dbddf:
        iVar12 = iVar10;
        if (bVar42 != bVar41) goto LAB_014dbde6;
LAB_014dbe22:
        fVar43 = 0.0;
        iVar37 = iVar12 + 1;
        iVar4 = iVar37 - local_88;
      }
      if ((int)local_88 <= iVar37) {
        fVar43 = 0.0;
      }
      if (SBORROW4(iVar37,local_88) == iVar4 < 0) {
        iVar37 = iVar10;
      }
      fVar45 = *(float *)(local_48[2] + (int64_t)iVar12 * 4);
      lVar16 = this_ptr[0x21];
      lVar17 = *(int64_t *)(*(int64_t *)(lVar16 + 0x10) + lVar15 * 8);
      *(float *)(lVar17 + 0x14) =
           (*(float *)(local_48[2] + (int64_t)iVar37 * 4) - fVar45) * fVar43 + fVar45;
      fVar45 = *(float *)(local_48[2] + (int64_t)iVar12 * 4);
      *(float *)(lVar17 + 0x10) =
           (*(float *)(local_48[2] + (int64_t)iVar37 * 4) - fVar45) * fVar43 + fVar45;
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(lVar16 + 0xc));
  }
  FUN_014bd640(SUB84(local_120,0));
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (puVar24 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar19 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (local_d0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)uVar39 != '\0') && (local_a0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_78 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_138 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_108 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_150 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_118 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_f0 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar14 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_168 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

