// Function: FUN_017f1c80
// Address: 017f1c80
// Size: 2550 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_017f1c80(void* param_1,uint64_t param_2,size_t param_3)

{
  uint8_t (*pauVar1) [16];
  uint8_t (*pauVar2) [16];
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  void *pvVar15;
  void *pvVar16;
  void*puVar17;
  void *pvVar18;
  void* pVar19;
  uint8_t (*pauVar20) [16];
  int64_t lVar21;
  int64_t lVar22;
  int64_t this_ptr;
  uint8_t auVar23 [16];
  float fVar24;
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  uint8_t auVar39 [16];
  uint8_t auVar40 [16];
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  uint8_t auVar43 [16];
  uint8_t auVar44 [16];
  uint8_t auVar45 [16];
  uint8_t auVar46 [16];
  uint8_t auVar47 [16];
  uint8_t auVar48 [16];
  uint8_t auVar49 [16];
  int64_t local_b0;
  uint8_t local_a8;
  uint64_t local_a0;
  int64_t local_98;
  void *local_90;
  char local_88;
  void *local_80;
  char local_78;
  void *local_70;
  char local_68;
  void *local_60;
  void *local_58;
  void *local_50;
  void *local_48;
  void *local_40;
  char local_38;
  
  lVar21 = *(int64_t *)(this_ptr + 0x88);
  if (lVar21 != 0) {
    FUN_00d50b00();
    local_98 = lVar21;
    pvVar16 = _pthread_getspecific(param_1);
    if (pvVar16 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015b9950();
    pvVar16 = local_40;
    if ((((local_38 == '\0') && (local_40 != (void *)0x0)) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (void *)0x0)) {
      FUN_00d50b20();
    }
    local_60 = pvVar16;
    pvVar16 = _pthread_getspecific(param_1);
    if (pvVar16 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015b7c80();
    pvVar16 = local_60;
    local_50 = local_40;
    if (((local_38 == '\0') && (local_40 != (void *)0x0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (void *)0x0)))) {
      FUN_00d50b20();
    }
    FUN_00c8e690();
    local_48 = local_40;
    pvVar18 = local_40;
    if (((local_38 == '\0') && (local_40 != (void *)0x0)) &&
       ((FUN_00d50b00(), pvVar18 = local_48, local_38 != '\0' && (local_40 != (void *)0x0)))) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    if (3 < (int)*(uint *)((int64_t)pvVar18 + 0x18)) {
      _memset_pattern16(local_48,(void *)((uint64_t)
                                          ((*(uint *)((int64_t)pvVar18 + 0x18) >> 2) - 1) * 4 + 4),
                        param_3);
    }
    if ((local_50 != (void *)0x0) && (pvVar16 != (void *)0x0)) {
      pauVar20 = *(uint8_t (**) [16])((int64_t)pvVar16 + 0x10);
      pauVar1 = *(uint8_t (**) [16])((int64_t)local_50 + 0x10);
      pauVar2 = *(uint8_t (**) [16])((int64_t)local_48 + 0x10);
      lVar22 = 0;
      if (((uint8_t (*) [16])(pauVar1[0x19] + 8) <= pauVar2 ||
           (uint8_t (*) [16])(pauVar2[0x19] + 8) <= pauVar1) &&
         ((uint8_t (*) [16])(pauVar20[0x19] + 8) <= pauVar2 ||
          (uint8_t (*) [16])(pauVar2[0x19] + 8) <= pauVar20)) {
        auVar23 = divps(*pauVar1,*pauVar20);
        *pauVar2 = auVar23;
        auVar23 = divps(pauVar1[1],pauVar20[1]);
        pauVar2[1] = auVar23;
        auVar23 = divps(pauVar1[2],pauVar20[2]);
        pauVar2[2] = auVar23;
        auVar23 = divps(pauVar1[3],pauVar20[3]);
        pauVar2[3] = auVar23;
        auVar23 = divps(pauVar1[4],pauVar20[4]);
        pauVar2[4] = auVar23;
        auVar23 = divps(pauVar1[5],pauVar20[5]);
        pauVar2[5] = auVar23;
        auVar23 = divps(pauVar1[6],pauVar20[6]);
        pauVar2[6] = auVar23;
        auVar23 = divps(pauVar1[7],pauVar20[7]);
        pauVar2[7] = auVar23;
        auVar23 = divps(pauVar1[8],pauVar20[8]);
        pauVar2[8] = auVar23;
        auVar23 = divps(pauVar1[9],pauVar20[9]);
        pauVar2[9] = auVar23;
        auVar23 = divps(pauVar1[10],pauVar20[10]);
        pauVar2[10] = auVar23;
        auVar23 = divps(pauVar1[0xb],pauVar20[0xb]);
        pauVar2[0xb] = auVar23;
        auVar23 = divps(pauVar1[0xc],pauVar20[0xc]);
        pauVar2[0xc] = auVar23;
        auVar23 = divps(pauVar1[0xd],pauVar20[0xd]);
        pauVar2[0xd] = auVar23;
        auVar23 = divps(pauVar1[0xe],pauVar20[0xe]);
        pauVar2[0xe] = auVar23;
        auVar23 = divps(pauVar1[0xf],pauVar20[0xf]);
        pauVar2[0xf] = auVar23;
        auVar23 = divps(pauVar1[0x10],pauVar20[0x10]);
        pauVar2[0x10] = auVar23;
        auVar23 = divps(pauVar1[0x11],pauVar20[0x11]);
        pauVar2[0x11] = auVar23;
        auVar23 = divps(pauVar1[0x12],pauVar20[0x12]);
        pauVar2[0x12] = auVar23;
        auVar23 = divps(pauVar1[0x13],pauVar20[0x13]);
        pauVar2[0x13] = auVar23;
        auVar23 = divps(pauVar1[0x14],pauVar20[0x14]);
        pauVar2[0x14] = auVar23;
        auVar23 = divps(pauVar1[0x15],pauVar20[0x15]);
        pauVar2[0x15] = auVar23;
        auVar23 = divps(pauVar1[0x16],pauVar20[0x16]);
        pauVar2[0x16] = auVar23;
        auVar23 = divps(pauVar1[0x17],pauVar20[0x17]);
        pauVar2[0x17] = auVar23;
        auVar23 = divps(pauVar1[0x18],pauVar20[0x18]);
        pauVar2[0x18] = auVar23;
        lVar22 = 100;
      }
      do {
        *(float *)(*pauVar2 + lVar22 * 4) =
             *(float *)(*pauVar1 + lVar22 * 4) / *(float *)(*pauVar20 + lVar22 * 4);
        *(float *)(*pauVar2 + lVar22 * 4 + 4) =
             *(float *)(*pauVar1 + lVar22 * 4 + 4) / *(float *)(*pauVar20 + lVar22 * 4 + 4);
        lVar22 = lVar22 + 2;
      } while (lVar22 != 0x66);
    }
    local_a8 = 0;
    local_b0 = lVar21;
    FUN_017f2dc0((float)*(int *)(this_ptr + 0xa8) * *(float *)(this_ptr + 0xac),&local_b0);
    pvVar16 = local_40;
    if ((local_38 == '\0') && (local_40 != (void *)0x0)) {
      FUN_00d50b00();
    }
    local_58 = pvVar16;
    puVar17 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar17 = &g_025f0d98;
    puVar17[2] = 0;
    puVar17[3] = 0;
    puVar17[4] = 0;
    puVar17[5] = 0;
    puVar17[6] = 0;
    puVar17[7] = 0;
    (*g_025f0db0)();
    local_a0 = *(void*)((int64_t)pvVar16 + 0x10);
    FUN_015c15b0(1,0x66);
    local_90 = pvVar16;
    local_88 = '\0';
    FUN_00c8e4f0();
    pvVar16 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (void *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (void *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != (void *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    auVar23 = g_02416630;
    pfVar3 = *(float **)((int64_t)local_48 + 0x10);
    pauVar20 = *(uint8_t (**) [16])((int64_t)pvVar16 + 0x10);
    if ((pauVar20 < (uint8_t (*) [16])(pfVar3 + 0x66)) &&
       (pfVar3 < (float *)((int64_t)pauVar20[0x19] + 8))) {
      lVar21 = 0;
      fVar5 = g_0240d16c;
    }
    else {
      auVar49._0_4_ = *(float *)*pauVar20 * *pfVar3;
      auVar49._4_4_ = *(float *)((int64_t)*pauVar20 + 4) * pfVar3[1];
      auVar49._8_4_ = *(float *)((int64_t)*pauVar20 + 8) * pfVar3[2];
      auVar49._12_4_ = *(float *)((int64_t)*pauVar20 + 0xc) * pfVar3[3];
      fVar5 = *(float *)pauVar20[1];
      fVar4 = *(float *)((int64_t)pauVar20[1] + 4);
      fVar24 = *(float *)((int64_t)pauVar20[1] + 8);
      fVar6 = *(float *)((int64_t)pauVar20[1] + 0xc);
      fVar7 = *(float *)pauVar20[2];
      fVar8 = *(float *)((int64_t)pauVar20[2] + 4);
      fVar9 = *(float *)((int64_t)pauVar20[2] + 8);
      fVar10 = *(float *)((int64_t)pauVar20[2] + 0xc);
      fVar11 = *(float *)pauVar20[3];
      fVar12 = *(float *)((int64_t)pauVar20[3] + 4);
      fVar13 = *(float *)((int64_t)pauVar20[3] + 8);
      fVar14 = *(float *)((int64_t)pauVar20[3] + 0xc);
      auVar49 = maxps(g_02416630,auVar49);
      *pauVar20 = auVar49;
      auVar25._0_4_ = pfVar3[4] * fVar5;
      auVar25._4_4_ = pfVar3[5] * fVar4;
      auVar25._8_4_ = pfVar3[6] * fVar24;
      auVar25._12_4_ = pfVar3[7] * fVar6;
      auVar49 = maxps(auVar23,auVar25);
      pauVar20[1] = auVar49;
      auVar26._0_4_ = pfVar3[8] * fVar7;
      auVar26._4_4_ = pfVar3[9] * fVar8;
      auVar26._8_4_ = pfVar3[10] * fVar9;
      auVar26._12_4_ = pfVar3[0xb] * fVar10;
      auVar49 = maxps(auVar23,auVar26);
      pauVar20[2] = auVar49;
      auVar27._0_4_ = pfVar3[0xc] * fVar11;
      auVar27._4_4_ = pfVar3[0xd] * fVar12;
      auVar27._8_4_ = pfVar3[0xe] * fVar13;
      auVar27._12_4_ = pfVar3[0xf] * fVar14;
      auVar49 = maxps(auVar23,auVar27);
      pauVar20[3] = auVar49;
      auVar28._0_4_ = *(float *)pauVar20[4] * pfVar3[0x10];
      auVar28._4_4_ = *(float *)((int64_t)pauVar20[4] + 4) * pfVar3[0x11];
      auVar28._8_4_ = *(float *)((int64_t)pauVar20[4] + 8) * pfVar3[0x12];
      auVar28._12_4_ = *(float *)((int64_t)pauVar20[4] + 0xc) * pfVar3[0x13];
      auVar49 = maxps(auVar23,auVar28);
      pauVar20[4] = auVar49;
      auVar29._0_4_ = *(float *)pauVar20[5] * pfVar3[0x14];
      auVar29._4_4_ = *(float *)((int64_t)pauVar20[5] + 4) * pfVar3[0x15];
      auVar29._8_4_ = *(float *)((int64_t)pauVar20[5] + 8) * pfVar3[0x16];
      auVar29._12_4_ = *(float *)((int64_t)pauVar20[5] + 0xc) * pfVar3[0x17];
      auVar49 = maxps(auVar23,auVar29);
      pauVar20[5] = auVar49;
      auVar30._0_4_ = *(float *)pauVar20[6] * pfVar3[0x18];
      auVar30._4_4_ = *(float *)((int64_t)pauVar20[6] + 4) * pfVar3[0x19];
      auVar30._8_4_ = *(float *)((int64_t)pauVar20[6] + 8) * pfVar3[0x1a];
      auVar30._12_4_ = *(float *)((int64_t)pauVar20[6] + 0xc) * pfVar3[0x1b];
      auVar49 = maxps(auVar23,auVar30);
      pauVar20[6] = auVar49;
      auVar31._0_4_ = *(float *)pauVar20[7] * pfVar3[0x1c];
      auVar31._4_4_ = *(float *)((int64_t)pauVar20[7] + 4) * pfVar3[0x1d];
      auVar31._8_4_ = *(float *)((int64_t)pauVar20[7] + 8) * pfVar3[0x1e];
      auVar31._12_4_ = *(float *)((int64_t)pauVar20[7] + 0xc) * pfVar3[0x1f];
      auVar49 = maxps(auVar23,auVar31);
      pauVar20[7] = auVar49;
      auVar32._0_4_ = *(float *)pauVar20[8] * pfVar3[0x20];
      auVar32._4_4_ = *(float *)((int64_t)pauVar20[8] + 4) * pfVar3[0x21];
      auVar32._8_4_ = *(float *)((int64_t)pauVar20[8] + 8) * pfVar3[0x22];
      auVar32._12_4_ = *(float *)((int64_t)pauVar20[8] + 0xc) * pfVar3[0x23];
      auVar49 = maxps(auVar23,auVar32);
      pauVar20[8] = auVar49;
      auVar33._0_4_ = *(float *)pauVar20[9] * pfVar3[0x24];
      auVar33._4_4_ = *(float *)((int64_t)pauVar20[9] + 4) * pfVar3[0x25];
      auVar33._8_4_ = *(float *)((int64_t)pauVar20[9] + 8) * pfVar3[0x26];
      auVar33._12_4_ = *(float *)((int64_t)pauVar20[9] + 0xc) * pfVar3[0x27];
      auVar49 = maxps(auVar23,auVar33);
      pauVar20[9] = auVar49;
      auVar34._0_4_ = *(float *)pauVar20[10] * pfVar3[0x28];
      auVar34._4_4_ = *(float *)((int64_t)pauVar20[10] + 4) * pfVar3[0x29];
      auVar34._8_4_ = *(float *)((int64_t)pauVar20[10] + 8) * pfVar3[0x2a];
      auVar34._12_4_ = *(float *)((int64_t)pauVar20[10] + 0xc) * pfVar3[0x2b];
      auVar49 = maxps(auVar23,auVar34);
      pauVar20[10] = auVar49;
      auVar35._0_4_ = *(float *)pauVar20[0xb] * pfVar3[0x2c];
      auVar35._4_4_ = *(float *)((int64_t)pauVar20[0xb] + 4) * pfVar3[0x2d];
      auVar35._8_4_ = *(float *)((int64_t)pauVar20[0xb] + 8) * pfVar3[0x2e];
      auVar35._12_4_ = *(float *)((int64_t)pauVar20[0xb] + 0xc) * pfVar3[0x2f];
      auVar49 = maxps(auVar23,auVar35);
      pauVar20[0xb] = auVar49;
      auVar36._0_4_ = *(float *)pauVar20[0xc] * pfVar3[0x30];
      auVar36._4_4_ = *(float *)((int64_t)pauVar20[0xc] + 4) * pfVar3[0x31];
      auVar36._8_4_ = *(float *)((int64_t)pauVar20[0xc] + 8) * pfVar3[0x32];
      auVar36._12_4_ = *(float *)((int64_t)pauVar20[0xc] + 0xc) * pfVar3[0x33];
      auVar49 = maxps(auVar23,auVar36);
      pauVar20[0xc] = auVar49;
      auVar37._0_4_ = *(float *)pauVar20[0xd] * pfVar3[0x34];
      auVar37._4_4_ = *(float *)((int64_t)pauVar20[0xd] + 4) * pfVar3[0x35];
      auVar37._8_4_ = *(float *)((int64_t)pauVar20[0xd] + 8) * pfVar3[0x36];
      auVar37._12_4_ = *(float *)((int64_t)pauVar20[0xd] + 0xc) * pfVar3[0x37];
      auVar49 = maxps(auVar23,auVar37);
      pauVar20[0xd] = auVar49;
      auVar38._0_4_ = *(float *)pauVar20[0xe] * pfVar3[0x38];
      auVar38._4_4_ = *(float *)((int64_t)pauVar20[0xe] + 4) * pfVar3[0x39];
      auVar38._8_4_ = *(float *)((int64_t)pauVar20[0xe] + 8) * pfVar3[0x3a];
      auVar38._12_4_ = *(float *)((int64_t)pauVar20[0xe] + 0xc) * pfVar3[0x3b];
      auVar49 = maxps(auVar23,auVar38);
      pauVar20[0xe] = auVar49;
      auVar39._0_4_ = *(float *)pauVar20[0xf] * pfVar3[0x3c];
      auVar39._4_4_ = *(float *)((int64_t)pauVar20[0xf] + 4) * pfVar3[0x3d];
      auVar39._8_4_ = *(float *)((int64_t)pauVar20[0xf] + 8) * pfVar3[0x3e];
      auVar39._12_4_ = *(float *)((int64_t)pauVar20[0xf] + 0xc) * pfVar3[0x3f];
      auVar49 = maxps(auVar23,auVar39);
      pauVar20[0xf] = auVar49;
      auVar40._0_4_ = *(float *)pauVar20[0x10] * pfVar3[0x40];
      auVar40._4_4_ = *(float *)((int64_t)pauVar20[0x10] + 4) * pfVar3[0x41];
      auVar40._8_4_ = *(float *)((int64_t)pauVar20[0x10] + 8) * pfVar3[0x42];
      auVar40._12_4_ = *(float *)((int64_t)pauVar20[0x10] + 0xc) * pfVar3[0x43];
      auVar49 = maxps(auVar23,auVar40);
      pauVar20[0x10] = auVar49;
      auVar41._0_4_ = *(float *)pauVar20[0x11] * pfVar3[0x44];
      auVar41._4_4_ = *(float *)((int64_t)pauVar20[0x11] + 4) * pfVar3[0x45];
      auVar41._8_4_ = *(float *)((int64_t)pauVar20[0x11] + 8) * pfVar3[0x46];
      auVar41._12_4_ = *(float *)((int64_t)pauVar20[0x11] + 0xc) * pfVar3[0x47];
      auVar49 = maxps(auVar23,auVar41);
      pauVar20[0x11] = auVar49;
      auVar42._0_4_ = *(float *)pauVar20[0x12] * pfVar3[0x48];
      auVar42._4_4_ = *(float *)((int64_t)pauVar20[0x12] + 4) * pfVar3[0x49];
      auVar42._8_4_ = *(float *)((int64_t)pauVar20[0x12] + 8) * pfVar3[0x4a];
      auVar42._12_4_ = *(float *)((int64_t)pauVar20[0x12] + 0xc) * pfVar3[0x4b];
      auVar49 = maxps(auVar23,auVar42);
      pauVar20[0x12] = auVar49;
      auVar43._0_4_ = *(float *)pauVar20[0x13] * pfVar3[0x4c];
      auVar43._4_4_ = *(float *)((int64_t)pauVar20[0x13] + 4) * pfVar3[0x4d];
      auVar43._8_4_ = *(float *)((int64_t)pauVar20[0x13] + 8) * pfVar3[0x4e];
      auVar43._12_4_ = *(float *)((int64_t)pauVar20[0x13] + 0xc) * pfVar3[0x4f];
      auVar49 = maxps(auVar23,auVar43);
      pauVar20[0x13] = auVar49;
      auVar44._0_4_ = *(float *)pauVar20[0x14] * pfVar3[0x50];
      auVar44._4_4_ = *(float *)((int64_t)pauVar20[0x14] + 4) * pfVar3[0x51];
      auVar44._8_4_ = *(float *)((int64_t)pauVar20[0x14] + 8) * pfVar3[0x52];
      auVar44._12_4_ = *(float *)((int64_t)pauVar20[0x14] + 0xc) * pfVar3[0x53];
      auVar49 = maxps(auVar23,auVar44);
      pauVar20[0x14] = auVar49;
      auVar45._0_4_ = *(float *)pauVar20[0x15] * pfVar3[0x54];
      auVar45._4_4_ = *(float *)((int64_t)pauVar20[0x15] + 4) * pfVar3[0x55];
      auVar45._8_4_ = *(float *)((int64_t)pauVar20[0x15] + 8) * pfVar3[0x56];
      auVar45._12_4_ = *(float *)((int64_t)pauVar20[0x15] + 0xc) * pfVar3[0x57];
      auVar49 = maxps(auVar23,auVar45);
      pauVar20[0x15] = auVar49;
      auVar46._0_4_ = *(float *)pauVar20[0x16] * pfVar3[0x58];
      auVar46._4_4_ = *(float *)((int64_t)pauVar20[0x16] + 4) * pfVar3[0x59];
      auVar46._8_4_ = *(float *)((int64_t)pauVar20[0x16] + 8) * pfVar3[0x5a];
      auVar46._12_4_ = *(float *)((int64_t)pauVar20[0x16] + 0xc) * pfVar3[0x5b];
      auVar49 = maxps(auVar23,auVar46);
      pauVar20[0x16] = auVar49;
      auVar47._0_4_ = *(float *)pauVar20[0x17] * pfVar3[0x5c];
      auVar47._4_4_ = *(float *)((int64_t)pauVar20[0x17] + 4) * pfVar3[0x5d];
      auVar47._8_4_ = *(float *)((int64_t)pauVar20[0x17] + 8) * pfVar3[0x5e];
      auVar47._12_4_ = *(float *)((int64_t)pauVar20[0x17] + 0xc) * pfVar3[0x5f];
      auVar49 = maxps(auVar23,auVar47);
      pauVar20[0x17] = auVar49;
      auVar48._0_4_ = *(float *)pauVar20[0x18] * pfVar3[0x60];
      auVar48._4_4_ = *(float *)((int64_t)pauVar20[0x18] + 4) * pfVar3[0x61];
      auVar48._8_4_ = *(float *)((int64_t)pauVar20[0x18] + 8) * pfVar3[0x62];
      auVar48._12_4_ = *(float *)((int64_t)pauVar20[0x18] + 0xc) * pfVar3[99];
      auVar23 = maxps(auVar23,auVar48);
      pauVar20[0x18] = auVar23;
      lVar21 = 100;
      fVar5 = g_0240d16c;
    }
    do {
      fVar24 = pfVar3[lVar21] * *(float *)((int64_t)*pauVar20 + lVar21 * 4);
      fVar4 = fVar5;
      if (fVar5 <= fVar24) {
        fVar4 = fVar24;
      }
      *(float *)((int64_t)*pauVar20 + lVar21 * 4) = fVar4;
      fVar24 = pfVar3[lVar21 + 1] * *(float *)((int64_t)*pauVar20 + (lVar21 + 1) * 4);
      fVar4 = fVar5;
      if (fVar5 <= fVar24) {
        fVar4 = fVar24;
      }
      *(float *)((int64_t)*pauVar20 + (lVar21 + 1) * 4) = fVar4;
      lVar21 = lVar21 + 2;
    } while (lVar21 != 0x66);
    pvVar18 = _pthread_getspecific((void*)pauVar20);
    pVar19 = (void*)pauVar20;
    if (pvVar18 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_80 = local_58;
    local_78 = '\0';
    FUN_015ba230();
    if ((local_78 != '\0') && (local_80 != (void *)0x0)) {
      FUN_00d50b20();
    }
    pvVar18 = _pthread_getspecific(pVar19);
    if (pvVar18 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar15 = local_48;
    pvVar18 = local_50;
    local_70 = pvVar16;
    local_68 = '\0';
    FUN_015b7cb0();
    if ((local_68 != '\0') && (local_70 != (void *)0x0)) {
      FUN_00d50b20();
    }
    if (pvVar16 != (void *)0x0) {
      FUN_00d50b20();
    }
    if (puVar17 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (local_58 != (void *)0x0) {
      FUN_00d50b20();
    }
    if (pvVar15 != (void *)0x0) {
      FUN_00d50b20();
    }
    if (pvVar18 != (void *)0x0) {
      FUN_00d50b20();
    }
    if (local_60 != (void *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

