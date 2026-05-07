// Function: FUN_01862050
// Address: 01862050
// Size: 10095 bytes
// Class: Unknown

void FUN_01862050(float param_1,char param_2,int *param_3,float *param_4,void*param_5,
                 char param_6)

{
  int64_t *plVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  void*puVar8;
  int64_t lVar9;
  int64_t lVar10;
  void*puVar11;
  char *pcVar12;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  bool bVar24;
  code *pcVar25;
  int iVar26;
  uint8_t uVar27;
  uint8_t uVar28;
  int iVar29;
  int iVar30;
  void*puVar31;
  void*puVar32;
  void*puVar33;
  float *pfVar34;
  int iVar35;
  int64_t *in_RCX;
  int64_t lVar36;
  void*puVar37;
  byte bVar38;
  int iVar39;
  uint uVar40;
  uint64_t uVar41;
  uint uVar42;
  uint64_t uVar43;
  int64_t lVar44;
  char unaff_SIL;
  char cVar45;
  byte bVar46;
  uint64_t uVar47;
  char *pcVar48;
  byte bVar49;
  int64_t *this_ptr;
  uint64_t uVar50;
  uint64_t uVar51;
  char cVar52;
  uint64_t uVar53;
  uint64_t uVar54;
  char *pcVar55;
  byte bVar56;
  uint64_t uVar57;
  uint64_t uVar58;
  byte bVar59;
  uint64_t uVar60;
  byte bVar61;
  uint64_t uVar62;
  bool bVar63;
  float fVar64;
  uint32_t uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  void*local_res8;
  int64_t *local_res10;
  int *local_res18;
  float *local_res20;
  int64_t local_58;
  int64_t local_40;
  char local_38;
  
  fVar64 = param_1;
  if (param_6 != '\0') {
    fVar64 = (float)FUN_015b3150();
  }
  if ((g_028afc98 == (void*)0x0) || (g_028afca1 == '\0')) {
    FUN_00e8cb50();
    if (g_028afc98 == (void*)0x0) {
      puVar31 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar31 = &g_02572358;
      (*g_02572370)();
      bVar63 = g_028afc98 == (void*)0x0;
      g_028afc98 = puVar31;
      if (((bVar63) || (FUN_00d50b20(), g_028afc98 != (void*)0x0)) &&
         (g_028afca0 == '\0')) {
        g_028afca0 = '\x01';
        FUN_00e8cb90();
      }
      puVar31 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar31 = &g_025683c0;
      (*g_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      bVar63 = g_028afca8 == (void*)0x0;
      g_028afca8 = puVar31;
      if (((bVar63) || (FUN_00d50b20(), g_028afca8 != (void*)0x0)) &&
         (g_028afcb0 == '\0')) {
        g_028afcb0 = '\x01';
        FUN_00e8cb90();
      }
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      ___bzero();
      uVar65 = FUN_00d21140();
      **(void**)(local_40 + 0x10) = 1;
      puVar31 = g_028afca8;
      iVar29 = *(int *)(g_028afca8 + 3);
      FUN_00c8e340(uVar65,1);
      *(void*)(puVar31[2] + (int64_t)iVar29) = 0x3f96e316;
      FUN_00c8e690();
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      ___bzero();
      FUN_00d50b20();
      uVar65 = FUN_00d21140();
      puVar37 = *(void**)(local_40 + 0x10);
      *puVar37 = 1;
      puVar37[3] = 1;
      puVar31 = g_028afca8;
      iVar29 = *(int *)(g_028afca8 + 3);
      FUN_00c8e340(uVar65,1);
      *(void*)(puVar31[2] + (int64_t)iVar29) = 0x3f938456;
      FUN_00c8e690();
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      ___bzero();
      FUN_00d50b20();
      uVar65 = FUN_00d21140();
      puVar37 = *(void**)(local_40 + 0x10);
      *puVar37 = 1;
      puVar37[4] = 1;
      puVar31 = g_028afca8;
      iVar29 = *(int *)(g_028afca8 + 3);
      FUN_00c8e340(uVar65,1);
      *(void*)(puVar31[2] + (int64_t)iVar29) = 0x3f938456;
      FUN_00c8e690();
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      ___bzero();
      FUN_00d50b20();
      uVar65 = FUN_00d21140();
      puVar37 = *(void**)(local_40 + 0x10);
      *puVar37 = 1;
      puVar37[7] = 1;
      puVar31 = g_028afca8;
      iVar29 = *(int *)(g_028afca8 + 3);
      FUN_00c8e340(uVar65,1);
      *(void*)(puVar31[2] + (int64_t)iVar29) = 0x3f938456;
      FUN_00c8e690();
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      ___bzero();
      FUN_00d50b20();
      uVar65 = FUN_00d21140();
      puVar37 = *(void**)(local_40 + 0x10);
      *puVar37 = 1;
      puVar37[6] = 1;
      puVar31 = g_028afca8;
      iVar29 = *(int *)(g_028afca8 + 3);
      FUN_00c8e340(uVar65,1);
      *(void*)(puVar31[2] + (int64_t)iVar29) = 0x3f800000;
      FUN_00c8e690();
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      ___bzero();
      FUN_00d50b20();
      uVar65 = FUN_00d21140();
      puVar37 = *(void**)(local_40 + 0x10);
      *puVar37 = 1;
      puVar37[4] = 1;
      puVar37[7] = 1;
      puVar31 = g_028afca8;
      iVar29 = *(int *)(g_028afca8 + 3);
      FUN_00c8e340(uVar65,1);
      *(void*)(puVar31[2] + (int64_t)iVar29) = 0x3f800000;
      FUN_00c8e690();
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      ___bzero();
      FUN_00d50b20();
      uVar65 = FUN_00d21140();
      puVar37 = *(void**)(local_40 + 0x10);
      *puVar37 = 1;
      puVar37[3] = 1;
      puVar37[7] = 1;
      puVar31 = g_028afca8;
      iVar29 = *(int *)(g_028afca8 + 3);
      FUN_00c8e340(uVar65,1);
      *(void*)(puVar31[2] + (int64_t)iVar29) = 0x3f800000;
      FUN_00c8e690();
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      ___bzero();
      FUN_00d50b20();
      uVar65 = FUN_00d21140();
      puVar37 = *(void**)(local_40 + 0x10);
      *puVar37 = 1;
      puVar37[3] = 1;
      puVar37[6] = 1;
      puVar31 = g_028afca8;
      iVar29 = *(int *)(g_028afca8 + 3);
      FUN_00c8e340(uVar65,1);
      *(void*)(puVar31[2] + (int64_t)iVar29) = 0x3f800000;
      FUN_00c8e690();
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      ___bzero();
      FUN_00d50b20();
      uVar65 = FUN_00d21140();
      puVar37 = *(void**)(local_40 + 0x10);
      *puVar37 = 1;
      puVar37[5] = 1;
      puVar37[7] = 1;
      puVar31 = g_028afca8;
      iVar29 = *(int *)(g_028afca8 + 3);
      FUN_00c8e340(uVar65,1);
      *(void*)(puVar31[2] + (int64_t)iVar29) = 0x3f800000;
      FUN_00c8e690();
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      ___bzero();
      FUN_00d50b20();
      uVar65 = FUN_00d21140();
      puVar37 = *(void**)(local_40 + 0x10);
      *puVar37 = 1;
      puVar37[7] = 1;
      puVar37[10] = 1;
      puVar31 = g_028afca8;
      iVar29 = *(int *)(g_028afca8 + 3);
      FUN_00c8e340(uVar65,1);
      *(void*)(puVar31[2] + (int64_t)iVar29) = 0x3f800000;
      FUN_00c8e690();
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      ___bzero();
      FUN_00d50b20();
      local_38 = '\0';
      uVar65 = FUN_00d21140();
      puVar37 = *(void**)(local_40 + 0x10);
      *puVar37 = 1;
      puVar37[7] = 1;
      puVar37[9] = 1;
      puVar31 = g_028afca8;
      iVar29 = *(int *)(g_028afca8 + 3);
      FUN_00c8e340(uVar65,1);
      *(void*)(puVar31[2] + (int64_t)iVar29) = 0x3f800000;
      FUN_00d50b20();
      g_028afca1 = '\x01';
      fVar64 = (float)FUN_00e8cb70();
    }
    else {
      g_028afca1 = '\x01';
      fVar64 = (float)FUN_00e8cb70();
    }
  }
  uVar40 = *(uint *)((int64_t)g_028afc98 + 0xc);
  uVar65 = FUN_00c8e340(fVar64,0);
  FUN_00c8e340(uVar65,0);
  pfVar34 = *(float **)(*this_ptr + 0x10);
  fVar64 = *pfVar34;
  fVar73 = pfVar34[1];
  fVar75 = pfVar34[2];
  fVar66 = pfVar34[3];
  fVar71 = pfVar34[4];
  fVar67 = pfVar34[5];
  fVar72 = pfVar34[6];
  fVar68 = pfVar34[7];
  fVar76 = pfVar34[8];
  fVar69 = pfVar34[9];
  fVar74 = pfVar34[10];
  fVar70 = pfVar34[0xb];
  uVar42 = uVar40 - 2;
  if (param_2 != '\0') {
    uVar42 = uVar40;
  }
  puVar31 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar31 = &g_02572358;
  pcVar25 = g_02572370;
  (*g_02572370)();
  puVar32 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar32 = &g_02572358;
  (*pcVar25)();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (fVar64 <= 0.0) {
    fVar64 = 0.0;
  }
  if (fVar73 <= fVar64) {
    fVar73 = fVar64;
  }
  if (fVar75 <= fVar73) {
    fVar75 = fVar73;
  }
  if (fVar66 <= fVar75) {
    fVar66 = fVar75;
  }
  if (fVar71 <= fVar66) {
    fVar71 = fVar66;
  }
  if (fVar67 <= fVar71) {
    fVar67 = fVar71;
  }
  if (fVar72 <= fVar67) {
    fVar72 = fVar67;
  }
  if (fVar68 <= fVar72) {
    fVar68 = fVar72;
  }
  if (fVar76 <= fVar68) {
    fVar76 = fVar68;
  }
  if (fVar69 <= fVar76) {
    fVar69 = fVar76;
  }
  if (fVar74 <= fVar69) {
    fVar74 = fVar69;
  }
  if (fVar70 <= fVar74) {
    fVar70 = fVar74;
  }
  fVar70 = fVar70 * param_1;
  fVar64 = fVar70 + fVar70;
  plVar1 = (int64_t *)(local_40 + 0x10);
  ___bzero();
  uVar41 = 0xb;
  uVar54 = 10;
  uVar53 = 9;
  uVar51 = 8;
  uVar47 = 7;
  uVar50 = 6;
  uVar43 = 5;
  uVar60 = 4;
  uVar58 = 3;
  uVar57 = 2;
  uVar62 = 1;
  local_58 = 0;
  do {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar41;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar54;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar53;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar51;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar47;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar50;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar43;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar60;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar58;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar57;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar62;
    FUN_00c8e690();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    FUN_00d21140();
    lVar44 = *(int64_t *)(*this_ptr + 0x10);
    puVar8 = *(void**)(local_40 + 0x10);
    *puVar8 = *(void*)(lVar44 + local_58);
    puVar8[1] = *(void*)
                 (local_58 +
                 (SUB168(auVar23 * ZEXT816(0xaaaaaaaaaaaaaaab),8) * 2 & 0xfffffffffffffff0U) * -3 +
                 4 + lVar44);
    puVar8[2] = *(void*)
                 (local_58 +
                 (SUB168(auVar22 * ZEXT816(0xaaaaaaaaaaaaaaab),8) * 2 & 0xfffffffffffffff0U) * -3 +
                 8 + lVar44);
    puVar8[3] = *(void*)
                 (local_58 +
                 (SUB168(auVar21 * ZEXT816(0xaaaaaaaaaaaaaaab),8) * 2 & 0xfffffffffffffff0U) * -3 +
                 0xc + lVar44);
    puVar8[4] = *(void*)
                 (local_58 +
                 (SUB168(auVar20 * ZEXT816(0xaaaaaaaaaaaaaaab),8) * 2 & 0xfffffffffffffff0U) * -3 +
                 0x10 + lVar44);
    puVar8[5] = *(void*)
                 (local_58 +
                 (SUB168(auVar19 * ZEXT816(0xaaaaaaaaaaaaaaab),8) * 2 & 0xfffffffffffffff0U) * -3 +
                 0x14 + lVar44);
    puVar8[6] = *(void*)
                 (local_58 +
                 (SUB168(auVar18 * ZEXT816(0xaaaaaaaaaaaaaaab),8) * 2 & 0xfffffffffffffff0U) * -3 +
                 0x18 + lVar44);
    puVar8[7] = *(void*)
                 (local_58 +
                 (SUB168(auVar17 * ZEXT816(0xaaaaaaaaaaaaaaab),8) * 2 & 0xfffffffffffffff0U) * -3 +
                 0x1c + lVar44);
    puVar8[8] = *(void*)
                 (local_58 +
                 (SUB168(auVar16 * ZEXT816(0xaaaaaaaaaaaaaaab),8) * 2 & 0xfffffffffffffff0U) * -3 +
                 0x20 + lVar44);
    puVar8[9] = *(void*)
                 (local_58 +
                 (SUB168(auVar15 * ZEXT816(0xaaaaaaaaaaaaaaab),8) * 2 & 0xfffffffffffffff0U) * -3 +
                 0x24 + lVar44);
    puVar8[10] = *(void*)
                  (local_58 +
                  (SUB168(auVar14 * ZEXT816(0xaaaaaaaaaaaaaaab),8) * 2 & 0xfffffffffffffff0U) * -3 +
                  0x28 + lVar44);
    puVar8[0xb] = *(void*)
                   (local_58 +
                   (SUB168(auVar13 * ZEXT816(0xaaaaaaaaaaaaaaab),8) * 2 & 0xfffffffffffffff0U) * -3
                   + 0x2c + lVar44);
    FUN_00c8e690();
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    ___bzero();
    local_38 = '\0';
    FUN_00d21140();
    FUN_00d50b20();
    FUN_00d50b20();
    uVar41 = uVar41 + 1;
    local_58 = local_58 + 4;
    uVar54 = uVar54 + 1;
    uVar53 = uVar53 + 1;
    uVar51 = uVar51 + 1;
    uVar47 = uVar47 + 1;
    uVar50 = uVar50 + 1;
    uVar43 = uVar43 + 1;
    uVar60 = uVar60 + 1;
    uVar58 = uVar58 + 1;
    uVar57 = uVar57 + 1;
    uVar62 = uVar62 + 1;
  } while (local_58 != 0x30);
  lVar44 = 0;
  fVar73 = g_02391074;
  do {
    lVar9 = *(int64_t *)(puVar31[2] + lVar44 * 8);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    lVar10 = *(int64_t *)(puVar32[2] + lVar44 * 8);
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    fVar75 = fVar73;
    if (0 < (int)uVar42) {
      uVar43 = 0xffffffff;
      uVar41 = 0;
      fVar66 = g_02391074;
      do {
        lVar36 = *(int64_t *)(g_028afc98[2] + uVar41 * 8);
        if (lVar36 != 0) {
          FUN_00d50b00();
        }
        pcVar55 = *(char **)(lVar36 + 0x10);
        if (*pcVar55 == '\0') {
          fVar71 = 0.0;
          cVar2 = pcVar55[1];
        }
        else {
          fVar71 = **(float **)(lVar9 + 0x10) + g_0239424c;
          cVar2 = pcVar55[1];
        }
        if (cVar2 != '\0') {
          fVar71 = fVar71 + *(float *)(*(int64_t *)(lVar9 + 0x10) + 4);
        }
        if (pcVar55[2] != '\0') {
          fVar71 = fVar71 + *(float *)(*(int64_t *)(lVar9 + 0x10) + 8);
        }
        if (pcVar55[3] != '\0') {
          fVar71 = fVar71 + *(float *)(*(int64_t *)(lVar9 + 0x10) + 0xc);
        }
        if (pcVar55[4] != '\0') {
          fVar71 = fVar71 + *(float *)(*(int64_t *)(lVar9 + 0x10) + 0x10);
        }
        if (pcVar55[5] != '\0') {
          fVar71 = fVar71 + *(float *)(*(int64_t *)(lVar9 + 0x10) + 0x14);
        }
        if (pcVar55[6] != '\0') {
          fVar71 = fVar71 + *(float *)(*(int64_t *)(lVar9 + 0x10) + 0x18);
        }
        bVar61 = pcVar55[7];
        if (bVar61 != 0) {
          fVar71 = fVar71 + *(float *)(*(int64_t *)(lVar9 + 0x10) + 0x1c);
        }
        if (pcVar55[8] != '\0') {
          fVar71 = fVar71 + *(float *)(*(int64_t *)(lVar9 + 0x10) + 0x20);
        }
        if (pcVar55[9] != '\0') {
          fVar71 = fVar71 + *(float *)(*(int64_t *)(lVar9 + 0x10) + 0x24);
        }
        if (pcVar55[10] != '\0') {
          fVar71 = fVar71 + *(float *)(*(int64_t *)(lVar9 + 0x10) + 0x28);
        }
        pfVar34 = *(float **)(lVar9 + 0x10);
        if (pcVar55[0xb] != '\0') {
          fVar71 = fVar71 + pfVar34[0xb];
        }
        fVar67 = *(float *)(g_028afca8[2] + uVar41 * 4);
        fVar72 = *pfVar34;
        if (pcVar55[6] != '\0' || bVar61 != 0) {
          fVar72 = SQRT(fVar72 * pfVar34[(uint64_t)bVar61 + 6]);
        }
        fVar72 = (float)_powf(fVar72,g_02391090);
        fVar72 = fVar71 * fVar67 * fVar72;
        if (fVar66 < fVar72) {
          uVar43 = uVar41 & 0xffffffff;
        }
        fVar74 = fVar72;
        FUN_00d50b20();
        if (fVar72 <= fVar66) {
          fVar72 = fVar66;
        }
        uVar41 = uVar41 + 1;
        fVar66 = fVar72;
      } while (uVar42 != uVar41);
      if ((int)uVar43 != -1) {
        lVar36 = *(int64_t *)(g_028afc98[2] + (int64_t)(int)uVar43 * 8);
        if (lVar36 != 0) {
          FUN_00d50b00();
        }
        puVar37 = *(void**)(lVar36 + 0x10);
        puVar11 = *(void**)(lVar10 + 0x10);
        *puVar11 = *puVar37;
        puVar11[1] = puVar37[1];
        puVar11[2] = puVar37[2];
        puVar11[3] = puVar37[3];
        puVar11[4] = puVar37[4];
        puVar11[5] = puVar37[5];
        puVar11[6] = puVar37[6];
        puVar11[7] = puVar37[7];
        puVar11[8] = puVar37[8];
        puVar11[9] = puVar37[9];
        puVar11[10] = puVar37[10];
        puVar11[0xb] = puVar37[0xb];
        *(float *)(*plVar1 + lVar44 * 4) = fVar72;
        FUN_00d50b20();
        fVar75 = fVar72;
        if (fVar72 <= fVar73) {
          fVar75 = fVar73;
        }
      }
    }
    fVar73 = fVar75;
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    lVar44 = lVar44 + 1;
  } while (lVar44 != 0xc);
  puVar33 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar33 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  pfVar34 = (float *)*plVar1;
  fVar75 = *pfVar34;
  if ((fVar75 == fVar73) && (!NAN(fVar75) && !NAN(fVar73))) {
    iVar29 = *(int *)(puVar33 + 3);
    FUN_00c8e340(fVar75,1);
    *(void*)(puVar33[2] + (int64_t)iVar29) = 0;
    pfVar34 = (float *)*plVar1;
  }
  fVar75 = pfVar34[1];
  if ((fVar75 == fVar73) && (!NAN(fVar75) && !NAN(fVar73))) {
    iVar29 = *(int *)(puVar33 + 3);
    FUN_00c8e340(fVar75,1);
    *(void*)(puVar33[2] + (int64_t)iVar29) = 1;
    pfVar34 = (float *)*plVar1;
  }
  fVar75 = pfVar34[2];
  if ((fVar75 == fVar73) && (!NAN(fVar75) && !NAN(fVar73))) {
    iVar29 = *(int *)(puVar33 + 3);
    FUN_00c8e340(fVar75,1);
    *(void*)(puVar33[2] + (int64_t)iVar29) = 2;
    pfVar34 = (float *)*plVar1;
  }
  fVar75 = pfVar34[3];
  if ((fVar75 == fVar73) && (!NAN(fVar75) && !NAN(fVar73))) {
    iVar29 = *(int *)(puVar33 + 3);
    FUN_00c8e340(fVar75,1);
    *(void*)(puVar33[2] + (int64_t)iVar29) = 3;
    pfVar34 = (float *)*plVar1;
  }
  fVar75 = pfVar34[4];
  if ((fVar75 == fVar73) && (!NAN(fVar75) && !NAN(fVar73))) {
    iVar29 = *(int *)(puVar33 + 3);
    FUN_00c8e340(fVar75,1);
    *(void*)(puVar33[2] + (int64_t)iVar29) = 4;
    pfVar34 = (float *)*plVar1;
  }
  fVar75 = pfVar34[5];
  if ((fVar75 == fVar73) && (!NAN(fVar75) && !NAN(fVar73))) {
    iVar29 = *(int *)(puVar33 + 3);
    FUN_00c8e340(fVar75,1);
    *(void*)(puVar33[2] + (int64_t)iVar29) = 5;
    pfVar34 = (float *)*plVar1;
  }
  fVar75 = pfVar34[6];
  if ((fVar75 == fVar73) && (!NAN(fVar75) && !NAN(fVar73))) {
    iVar29 = *(int *)(puVar33 + 3);
    FUN_00c8e340(fVar75,1);
    *(void*)(puVar33[2] + (int64_t)iVar29) = 6;
    pfVar34 = (float *)*plVar1;
  }
  fVar75 = pfVar34[7];
  if ((fVar75 == fVar73) && (!NAN(fVar75) && !NAN(fVar73))) {
    iVar29 = *(int *)(puVar33 + 3);
    FUN_00c8e340(fVar75,1);
    *(void*)(puVar33[2] + (int64_t)iVar29) = 7;
    pfVar34 = (float *)*plVar1;
  }
  fVar75 = pfVar34[8];
  if ((fVar75 == fVar73) && (!NAN(fVar75) && !NAN(fVar73))) {
    iVar29 = *(int *)(puVar33 + 3);
    FUN_00c8e340(fVar75,1);
    *(void*)(puVar33[2] + (int64_t)iVar29) = 8;
    pfVar34 = (float *)*plVar1;
  }
  fVar75 = pfVar34[9];
  if ((fVar75 == fVar73) && (!NAN(fVar75) && !NAN(fVar73))) {
    iVar29 = *(int *)(puVar33 + 3);
    FUN_00c8e340(fVar75,1);
    *(void*)(puVar33[2] + (int64_t)iVar29) = 9;
    pfVar34 = (float *)*plVar1;
  }
  fVar75 = pfVar34[10];
  if ((fVar75 == fVar73) && (!NAN(fVar75) && !NAN(fVar73))) {
    iVar29 = *(int *)(puVar33 + 3);
    FUN_00c8e340(fVar75,1);
    *(void*)(puVar33[2] + (int64_t)iVar29) = 10;
    pfVar34 = (float *)*plVar1;
  }
  fVar75 = pfVar34[0xb];
  if ((fVar75 == fVar73) && (!NAN(fVar75) && !NAN(fVar73))) {
    iVar29 = *(int *)(puVar33 + 3);
    FUN_00c8e340(fVar75,1);
    *(void*)(puVar33[2] + (int64_t)iVar29) = 0xb;
  }
  iVar29 = 0;
  fVar73 = 0.0;
  if (*(int *)(puVar33 + 3) + 3U < 7) {
    iVar39 = 0;
    goto LAB_01863780;
  }
  iVar30 = *(int *)puVar33[2];
  if (7 < *(int *)(puVar33 + 3)) {
    lVar44 = 0;
    iVar29 = 0;
    fVar73 = 0.0;
    do {
      iVar39 = *(int *)(puVar33[2] + lVar44 * 4);
      lVar9 = *(int64_t *)(puVar31[2] + (int64_t)iVar39 * 8);
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      lVar10 = *(int64_t *)(puVar32[2] + (int64_t)iVar39 * 8);
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      lVar10 = *(int64_t *)(lVar10 + 0x10);
      if (*(char *)(lVar10 + 7) == '\0') {
        pfVar34 = *(float **)(lVar9 + 0x10);
        if (*(char *)(lVar10 + 6) == '\0') {
          fVar75 = 0.0;
        }
        else {
          fVar75 = pfVar34[6] * g_02390120;
        }
      }
      else {
        pfVar34 = *(float **)(lVar9 + 0x10);
        fVar75 = pfVar34[7];
      }
      fVar75 = fVar75 + *pfVar34;
      if (fVar73 < fVar75) {
        iVar29 = (int)lVar44;
        iVar30 = iVar39;
      }
      FUN_00d50b20();
      FUN_00d50b20();
      lVar44 = lVar44 + 1;
      iVar39 = *(int *)(puVar33 + 3);
      iVar35 = iVar39 + 3;
      if (-1 < iVar39) {
        iVar35 = iVar39;
      }
      if (fVar75 <= fVar73) {
        fVar75 = fVar73;
      }
      fVar73 = fVar75;
    } while (lVar44 < iVar35 >> 2);
    iVar35 = *(int *)(puVar33[2] + (int64_t)((iVar29 + 1) % (iVar35 >> 2)) * 4);
    goto joined_r0x0186391d;
  }
  iVar39 = 0;
  if (iVar30 == 0) {
LAB_01863780:
    fVar75 = *(float *)(*plVar1 + 4);
    iVar35 = 1;
    if (*(float *)(*plVar1 + 4) <= fVar73) {
      fVar75 = fVar73;
      iVar35 = iVar29;
    }
    fVar73 = fVar75;
    iVar30 = 2;
    iVar26 = iVar39;
    iVar29 = iVar35;
    if (iVar39 != 2) goto LAB_018637a5;
LAB_018637cc:
    if (fVar73 < *(float *)(*plVar1 + 0xc)) {
      iVar35 = 3;
      fVar73 = *(float *)(*plVar1 + 0xc);
    }
    iVar39 = 4;
    iVar29 = iVar30;
    if (iVar30 != 4) goto LAB_018637f0;
LAB_01863817:
    iVar30 = iVar39;
    if (fVar73 < *(float *)(*plVar1 + 0x14)) {
      iVar35 = 5;
      fVar73 = *(float *)(*plVar1 + 0x14);
    }
    iVar29 = 6;
    if (iVar30 != 6) goto LAB_0186383b;
LAB_01863862:
    iVar39 = iVar29;
    if (fVar73 < *(float *)(*plVar1 + 0x1c)) {
      iVar35 = 7;
      fVar73 = *(float *)(*plVar1 + 0x1c);
    }
    iVar29 = 8;
    if (iVar39 != 8) goto LAB_01863886;
LAB_018638ad:
    if (fVar73 < *(float *)(*plVar1 + 0x24)) {
      iVar35 = 9;
      fVar73 = *(float *)(*plVar1 + 0x24);
    }
    iVar39 = 10;
    fVar74 = fVar73;
    iVar30 = iVar29;
    if (iVar29 != 10) goto LAB_018638d2;
  }
  else {
    fVar73 = *(float *)*plVar1;
    iVar29 = 0;
    if (fVar73 <= 0.0) {
      fVar73 = 0.0;
      iVar29 = iVar30;
    }
    iVar39 = iVar30;
    iVar26 = 1;
    if (iVar30 != 1) goto LAB_01863780;
LAB_018637a5:
    iVar30 = iVar26;
    iVar35 = iVar29;
    if (fVar73 < *(float *)(*plVar1 + 8)) {
      fVar73 = *(float *)(*plVar1 + 8);
      iVar35 = 2;
    }
    iVar29 = 3;
    if (iVar30 != 3) goto LAB_018637cc;
LAB_018637f0:
    if (fVar73 < *(float *)(*plVar1 + 0x10)) {
      iVar35 = 4;
      fVar73 = *(float *)(*plVar1 + 0x10);
    }
    iVar30 = 5;
    iVar39 = iVar29;
    if (iVar29 != 5) goto LAB_01863817;
LAB_0186383b:
    if (fVar73 < *(float *)(*plVar1 + 0x18)) {
      iVar35 = 6;
      fVar73 = *(float *)(*plVar1 + 0x18);
    }
    iVar39 = 7;
    iVar29 = iVar30;
    if (iVar30 != 7) goto LAB_01863862;
LAB_01863886:
    if (fVar73 < *(float *)(*plVar1 + 0x20)) {
      iVar35 = 8;
      fVar73 = *(float *)(*plVar1 + 0x20);
    }
    iVar29 = iVar39;
    iVar30 = 9;
    if (iVar39 != 9) goto LAB_018638ad;
LAB_018638d2:
    iVar39 = iVar30;
    fVar75 = *(float *)(*plVar1 + 0x28);
    iVar29 = 10;
    if (fVar75 <= fVar73) {
      iVar29 = iVar35;
    }
    iVar35 = iVar29;
    fVar74 = fVar73;
    iVar30 = 0xb;
    if (iVar39 == 0xb) goto joined_r0x0186391d;
    fVar74 = fVar75;
    if (fVar75 <= fVar73) {
      fVar74 = fVar73;
    }
  }
  iVar30 = iVar39;
  if (fVar74 < *(float *)(*plVar1 + 0x2c)) {
    iVar35 = 0xb;
  }
joined_r0x0186391d:
  if (param_6 != '\0') {
    lVar44 = puVar32[2];
    lVar9 = *(int64_t *)(lVar44 + (int64_t)iVar30 * 8);
    if (lVar9 != 0) {
      FUN_00d50b00();
      lVar44 = puVar32[2];
    }
    lVar44 = *(int64_t *)(lVar44 + (int64_t)iVar35 * 8);
    lVar10 = lVar9;
    if (lVar9 != lVar44) {
      if (lVar44 != 0) {
        FUN_00d50b00();
      }
      lVar10 = lVar44;
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
  }
  bVar63 = true;
  do {
    bVar24 = bVar63;
    fVar73 = fVar74;
    iVar29 = iVar35;
    if (bVar24) {
      iVar29 = iVar30;
    }
    lVar44 = *(int64_t *)(puVar31[2] + (int64_t)iVar29 * 8);
    if (lVar44 != 0) {
      FUN_00d50b00();
    }
    lVar9 = *(int64_t *)(puVar32[2] + (int64_t)iVar29 * 8);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    pcVar12 = *(char **)(lVar9 + 0x10);
    cVar2 = *pcVar12;
    cVar3 = pcVar12[1];
    cVar4 = pcVar12[2];
    cVar5 = pcVar12[3];
    cVar52 = pcVar12[4];
    cVar6 = pcVar12[5];
    cVar7 = pcVar12[6];
    bVar61 = pcVar12[7];
    bVar46 = pcVar12[8];
    bVar49 = pcVar12[9];
    bVar59 = pcVar12[10];
    bVar56 = pcVar12[0xb];
    uVar40 = (uint)(byte)(cVar2 + cVar3 + cVar4 + cVar5 + cVar52 + cVar6 + cVar7) + (uint)bVar61 +
             (uint)bVar46 + (uint)bVar49 + (uint)bVar59 + (uint)bVar56;
    pcVar55 = pcVar12 + 7;
    if (uVar40 == 1) {
      lVar9 = *(int64_t *)(lVar44 + 0x10);
      fVar75 = *(float *)(lVar9 + 0x1c);
      uVar40 = 2;
      if (((fVar70 < fVar75) &&
          (*(float *)(lVar9 + 0x18) <= fVar75 && fVar75 != *(float *)(lVar9 + 0x18))) &&
         (*(float *)(lVar9 + 0x20) <= fVar75 && fVar75 != *(float *)(lVar9 + 0x20))) {
        *pcVar55 = '\x01';
        uVar40 = 3;
        bVar61 = 1;
      }
      fVar75 = *(float *)(lVar9 + 0xc);
      fVar66 = *(float *)(lVar9 + 0x10);
      if (((fVar70 < fVar75) && (fVar66 < fVar75)) &&
         (*(float *)(lVar9 + 0x14) <= fVar75 && fVar75 != *(float *)(lVar9 + 0x14))) {
        cVar5 = '\x01';
        pcVar48 = pcVar12 + 3;
        cVar45 = cVar52;
LAB_01863c57:
        cVar52 = cVar45;
        *pcVar48 = '\x01';
        goto LAB_01863c5d;
      }
      if (((fVar70 < fVar66) && (fVar75 < fVar66)) &&
         (pcVar48 = pcVar12 + 4, cVar45 = '\x01',
         *(float *)(lVar9 + 0x14) <= fVar66 && fVar66 != *(float *)(lVar9 + 0x14)))
      goto LAB_01863c57;
LAB_01863c62:
      if (bVar61 == 0) {
        if (cVar52 == '\0') {
          if (cVar5 == '\0') {
            cVar5 = '\0';
          }
          else {
            lVar9 = *(int64_t *)(lVar44 + 0x10);
            fVar75 = *(float *)(lVar9 + 0x1c);
            cVar5 = '\x01';
            if ((fVar70 < fVar75) &&
               (*(float *)(lVar9 + 0x20) <= fVar75 && fVar75 != *(float *)(lVar9 + 0x20))) {
              cVar45 = '\0';
              cVar5 = '\x01';
              bVar38 = 1;
              bVar61 = 0;
              cVar52 = '\0';
              if (fVar75 < *(float *)(lVar9 + 0x18) || fVar75 == *(float *)(lVar9 + 0x18))
              goto joined_r0x01864127;
              goto LAB_01863fed;
            }
          }
          bVar61 = 0;
          cVar52 = '\0';
          goto joined_r0x01864127;
        }
        lVar9 = *(int64_t *)(lVar44 + 0x10);
        fVar75 = *(float *)(lVar9 + 0x1c);
        fVar66 = *(float *)(lVar9 + 0x20);
        if (((fVar75 <= fVar70) || (fVar75 <= fVar66)) ||
           (bVar38 = 1, fVar75 < *(float *)(lVar9 + 0x18) || fVar75 == *(float *)(lVar9 + 0x18))) {
          bVar38 = 0;
          cVar45 = '\x01';
          if ((fVar66 <= fVar64) || (fVar66 <= fVar75)) {
            bVar61 = 0;
            cVar52 = '\x01';
            goto joined_r0x01864127;
          }
          pcVar55 = pcVar12 + 8;
          bVar46 = 1;
        }
        else {
          cVar45 = '\x01';
        }
LAB_01863fed:
        *pcVar55 = '\x01';
        bVar61 = bVar38;
        cVar52 = cVar45;
      }
      else {
        lVar9 = *(int64_t *)(lVar44 + 0x10);
        fVar75 = *(float *)(lVar9 + 0xc);
        fVar66 = *(float *)(lVar9 + 0x10);
        if (((fVar70 < fVar75) && (fVar66 < fVar75)) &&
           (bVar38 = 1, *(float *)(lVar9 + 0x14) <= fVar75 && fVar75 != *(float *)(lVar9 + 0x14))) {
          cVar5 = '\x01';
          pcVar55 = pcVar12 + 3;
          cVar45 = cVar52;
          goto LAB_01863fed;
        }
        bVar61 = 1;
        if ((fVar70 < fVar66) && (bVar61 = 1, fVar75 < fVar66)) {
          bVar38 = 1;
          cVar45 = '\x01';
          pcVar55 = pcVar12 + 4;
          bVar61 = 1;
          if (*(float *)(lVar9 + 0x14) <= fVar66 && fVar66 != *(float *)(lVar9 + 0x14))
          goto LAB_01863fed;
        }
      }
joined_r0x01864127:
      if (unaff_SIL == '\0') goto joined_r0x01864144;
LAB_01863ec4:
      lVar9 = *(int64_t *)(lVar44 + 0x10);
      fVar75 = *(float *)(lVar9 + 0x24);
      if (((fVar75 <= fVar70) || (cVar52 == '\0')) ||
         ((bVar61 == 0 ||
          ((((bVar46 != 0 ||
             (fVar75 < *(float *)(lVar9 + 0x20) || fVar75 == *(float *)(lVar9 + 0x20))) ||
            (fVar75 < *(float *)(lVar9 + 0x28) || fVar75 == *(float *)(lVar9 + 0x28))) ||
           (fVar75 < *(float *)(lVar9 + 0x2c) || fVar75 == *(float *)(lVar9 + 0x2c))))))) {
        fVar66 = *(float *)(lVar9 + 0x28);
        if (fVar64 < fVar66) {
          if (bVar49 != 0) {
            bVar49 = 1;
            goto LAB_01863f5a;
          }
          if (*(float *)(lVar9 + 0x2c) <= fVar66 && fVar66 != *(float *)(lVar9 + 0x2c)) {
            pcVar12[10] = '\x01';
            bVar59 = 1;
          }
          bVar49 = 0;
          fVar71 = *(float *)(lVar9 + 0x2c);
        }
        else {
LAB_01863f5a:
          fVar71 = *(float *)(lVar9 + 0x2c);
        }
        bVar38 = bVar49;
        if (fVar64 < fVar71) goto LAB_01863f6c;
LAB_018640c0:
        if ((fVar75 <= fVar70) || (cVar5 == '\0')) goto joined_r0x01864144;
      }
      else {
        pcVar12[9] = '\x01';
        fVar66 = *(float *)(lVar9 + 0x28);
        bVar49 = 1;
        fVar71 = *(float *)(lVar9 + 0x2c);
        bVar38 = 1;
        if (fVar71 <= fVar64) goto LAB_018640c0;
LAB_01863f6c:
        bVar49 = bVar38;
        if (cVar52 == '\0') goto LAB_018640c0;
        if (cVar5 == '\0') {
          if (((cVar6 == '\0' && bVar46 == 0) && (bVar49 == 0)) && (fVar66 < fVar71)) {
            pcVar12[0xb] = '\x01';
            bVar56 = 1;
          }
          goto LAB_018640c0;
        }
        if (fVar75 <= fVar70) goto joined_r0x01864144;
      }
      if (cVar7 == '\0') goto joined_r0x01864144;
      if (bVar59 == 0) {
        if (bVar56 != 0) {
          bVar56 = 1;
          bVar59 = 0;
          goto joined_r0x01864144;
        }
        pcVar12[9] = '\x01';
        bVar49 = 1;
        bVar56 = 0;
        bVar59 = 0;
      }
      else {
        bVar59 = 1;
      }
      if (cVar2 != '\0') goto LAB_01863cf8;
LAB_01864100:
      fVar74 = 0.0;
    }
    else {
LAB_01863c5d:
      if (uVar40 < 3) goto LAB_01863c62;
      if (unaff_SIL != '\0') goto LAB_01863ec4;
joined_r0x01864144:
      if (cVar2 == '\0') goto LAB_01864100;
LAB_01863cf8:
      fVar74 = **(float **)(lVar44 + 0x10) + g_0239424c;
    }
    if (cVar3 != '\0') {
      fVar74 = fVar74 + *(float *)(*(int64_t *)(lVar44 + 0x10) + 4);
    }
    if (cVar4 != '\0') {
      fVar74 = fVar74 + *(float *)(*(int64_t *)(lVar44 + 0x10) + 8);
    }
    if (cVar5 != '\0') {
      fVar74 = fVar74 + *(float *)(*(int64_t *)(lVar44 + 0x10) + 0xc);
    }
    if (cVar52 != '\0') {
      fVar74 = fVar74 + *(float *)(*(int64_t *)(lVar44 + 0x10) + 0x10);
    }
    if (cVar6 != '\0') {
      fVar74 = fVar74 + *(float *)(*(int64_t *)(lVar44 + 0x10) + 0x14);
    }
    if (cVar7 != '\0') {
      fVar74 = fVar74 + *(float *)(*(int64_t *)(lVar44 + 0x10) + 0x18);
    }
    if (bVar61 != 0) {
      fVar74 = fVar74 + *(float *)(*(int64_t *)(lVar44 + 0x10) + 0x1c);
    }
    if (bVar46 != 0) {
      fVar74 = fVar74 + *(float *)(*(int64_t *)(lVar44 + 0x10) + 0x20);
    }
    if (bVar49 != 0) {
      fVar74 = fVar74 + *(float *)(*(int64_t *)(lVar44 + 0x10) + 0x24);
    }
    if (bVar59 != 0) {
      fVar74 = fVar74 + *(float *)(*(int64_t *)(lVar44 + 0x10) + 0x28);
    }
    pfVar34 = *(float **)(lVar44 + 0x10);
    if (bVar56 != 0) {
      fVar74 = fVar74 + pfVar34[0xb];
    }
    fVar75 = *pfVar34;
    if (cVar7 != '\0' || bVar61 != 0) {
      fVar75 = SQRT(fVar75 * pfVar34[(uint64_t)(bVar61 != 0) + 6]);
    }
    fVar75 = (float)_powf(fVar75,g_02391090);
    FUN_00d50b20();
    FUN_00d50b20();
    fVar74 = fVar74 * fVar75;
    bVar63 = false;
  } while (bVar24);
  fVar64 = fVar74;
  iVar29 = iVar30;
  if (fVar73 < fVar74) {
    fVar64 = fVar73;
    fVar73 = fVar74;
    iVar29 = iVar35;
    iVar35 = iVar30;
  }
  if (param_6 != '\0') {
    lVar44 = puVar32[2];
    lVar9 = *(int64_t *)(lVar44 + (int64_t)iVar29 * 8);
    if (lVar9 != 0) {
      FUN_00d50b00();
      lVar44 = puVar32[2];
    }
    lVar44 = *(int64_t *)(lVar44 + (int64_t)iVar35 * 8);
    lVar10 = lVar9;
    if (lVar9 != lVar44) {
      if (lVar44 != 0) {
        FUN_00d50b00();
      }
      lVar10 = lVar44;
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
  }
  bVar63 = true;
  do {
    if (bVar63) {
      lVar44 = *in_RCX;
      iVar39 = iVar29;
      if (lVar44 == 0) {
        lVar44 = 0;
        cVar2 = '\0';
      }
      else {
        cVar2 = (char)in_RCX[1];
        if (cVar2 != '\0') {
          FUN_00d50b00();
        }
      }
    }
    else {
      lVar44 = *local_res10;
      iVar39 = iVar35;
      if (lVar44 == 0) {
        lVar44 = 0;
        cVar2 = '\0';
      }
      else {
        cVar2 = (char)local_res10[1];
        if (cVar2 != '\0') {
          FUN_00d50b00();
        }
      }
    }
    lVar9 = *(int64_t *)(puVar32[2] + (int64_t)iVar39 * 8);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    lVar10 = *(int64_t *)(puVar31[2] + (int64_t)iVar39 * 8);
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    iVar30 = 0xc - iVar39;
    lVar36 = *(int64_t *)(lVar9 + 0x10);
    if (*(char *)(lVar36 + (int)(iVar30 + (((uint)(iVar30 / 6 + (iVar30 >> 0x1f)) >> 1) -
                                          (iVar30 >> 0x1f)) * -0xc)) != '\0') {
      iVar30 = *(int *)(lVar44 + 0x18);
      FUN_00c8e340(lVar36,1);
      *(void*)(*(int64_t *)(lVar44 + 0x10) + (int64_t)iVar30) = 0;
      lVar36 = *(int64_t *)(lVar9 + 0x10);
    }
    iVar30 = 0xd - iVar39;
    if (*(char *)(lVar36 + (int)(iVar30 + (((uint)(iVar30 / 6 + (iVar30 >> 0x1f)) >> 1) -
                                          (iVar30 >> 0x1f)) * -0xc)) != '\0') {
      iVar30 = *(int *)(lVar44 + 0x18);
      FUN_00c8e340(lVar36,1);
      *(void*)(*(int64_t *)(lVar44 + 0x10) + (int64_t)iVar30) = 1;
      lVar36 = *(int64_t *)(lVar9 + 0x10);
    }
    iVar30 = 0xe - iVar39;
    if (*(char *)(lVar36 + (int)(iVar30 + (((uint)(iVar30 / 6 + (iVar30 >> 0x1f)) >> 1) -
                                          (iVar30 >> 0x1f)) * -0xc)) != '\0') {
      iVar30 = *(int *)(lVar44 + 0x18);
      FUN_00c8e340(lVar36,1);
      *(void*)(*(int64_t *)(lVar44 + 0x10) + (int64_t)iVar30) = 2;
      lVar36 = *(int64_t *)(lVar9 + 0x10);
    }
    iVar30 = 0xf - iVar39;
    if (*(char *)(lVar36 + (int)(iVar30 + (((uint)(iVar30 / 6 + (iVar30 >> 0x1f)) >> 1) -
                                          (iVar30 >> 0x1f)) * -0xc)) != '\0') {
      iVar30 = *(int *)(lVar44 + 0x18);
      FUN_00c8e340(lVar36,1);
      *(void*)(*(int64_t *)(lVar44 + 0x10) + (int64_t)iVar30) = 3;
      lVar36 = *(int64_t *)(lVar9 + 0x10);
    }
    iVar30 = 0x10 - iVar39;
    if (*(char *)(lVar36 + (int)(iVar30 + (((uint)(iVar30 / 6 + (iVar30 >> 0x1f)) >> 1) -
                                          (iVar30 >> 0x1f)) * -0xc)) != '\0') {
      iVar30 = *(int *)(lVar44 + 0x18);
      FUN_00c8e340(lVar36,1);
      *(void*)(*(int64_t *)(lVar44 + 0x10) + (int64_t)iVar30) = 4;
      lVar36 = *(int64_t *)(lVar9 + 0x10);
    }
    iVar30 = 0x11 - iVar39;
    if (*(char *)(lVar36 + (int)(iVar30 + (((uint)(iVar30 / 6 + (iVar30 >> 0x1f)) >> 1) -
                                          (iVar30 >> 0x1f)) * -0xc)) != '\0') {
      iVar30 = *(int *)(lVar44 + 0x18);
      FUN_00c8e340(lVar36,1);
      *(void*)(*(int64_t *)(lVar44 + 0x10) + (int64_t)iVar30) = 5;
      lVar36 = *(int64_t *)(lVar9 + 0x10);
    }
    iVar30 = 0x12 - iVar39;
    if (*(char *)(lVar36 + (int)(iVar30 + (((uint)(iVar30 / 6 + (iVar30 >> 0x1f)) >> 1) -
                                          (iVar30 >> 0x1f)) * -0xc)) != '\0') {
      iVar30 = *(int *)(lVar44 + 0x18);
      FUN_00c8e340(lVar36,1);
      *(void*)(*(int64_t *)(lVar44 + 0x10) + (int64_t)iVar30) = 6;
      lVar36 = *(int64_t *)(lVar9 + 0x10);
    }
    iVar30 = 0x13 - iVar39;
    if (*(char *)(lVar36 + (int)(iVar30 + (((uint)(iVar30 / 6 + (iVar30 >> 0x1f)) >> 1) -
                                          (iVar30 >> 0x1f)) * -0xc)) != '\0') {
      iVar30 = *(int *)(lVar44 + 0x18);
      FUN_00c8e340(lVar36,1);
      *(void*)(*(int64_t *)(lVar44 + 0x10) + (int64_t)iVar30) = 7;
      lVar36 = *(int64_t *)(lVar9 + 0x10);
    }
    iVar30 = 0x14 - iVar39;
    if (*(char *)(lVar36 + (int)(iVar30 + (((uint)(iVar30 / 6 + (iVar30 >> 0x1f)) >> 1) -
                                          (iVar30 >> 0x1f)) * -0xc)) != '\0') {
      iVar30 = *(int *)(lVar44 + 0x18);
      FUN_00c8e340(lVar36,1);
      *(void*)(*(int64_t *)(lVar44 + 0x10) + (int64_t)iVar30) = 8;
      lVar36 = *(int64_t *)(lVar9 + 0x10);
    }
    iVar30 = 0x15 - iVar39;
    if (*(char *)(lVar36 + (int)(iVar30 + (((uint)(iVar30 / 6 + (iVar30 >> 0x1f)) >> 1) -
                                          (iVar30 >> 0x1f)) * -0xc)) != '\0') {
      iVar30 = *(int *)(lVar44 + 0x18);
      FUN_00c8e340(lVar36,1);
      *(void*)(*(int64_t *)(lVar44 + 0x10) + (int64_t)iVar30) = 9;
      lVar36 = *(int64_t *)(lVar9 + 0x10);
    }
    iVar30 = 0x16 - iVar39;
    if (*(char *)(lVar36 + (int)(iVar30 + (((uint)(iVar30 / 6 + (iVar30 >> 0x1f)) >> 1) -
                                          (iVar30 >> 0x1f)) * -0xc)) != '\0') {
      iVar30 = *(int *)(lVar44 + 0x18);
      FUN_00c8e340(lVar36,1);
      *(void*)(*(int64_t *)(lVar44 + 0x10) + (int64_t)iVar30) = 10;
      lVar36 = *(int64_t *)(lVar9 + 0x10);
    }
    iVar30 = 0x17 - iVar39;
    if (*(char *)(lVar36 + (int)(iVar30 + (((uint)(iVar30 / 6 + (iVar30 >> 0x1f)) >> 1) -
                                          (iVar30 >> 0x1f)) * -0xc)) != '\0') {
      iVar30 = *(int *)(lVar44 + 0x18);
      FUN_00c8e340(lVar36,1);
      *(void*)(*(int64_t *)(lVar44 + 0x10) + (int64_t)iVar30) = 0xb;
    }
    lVar10 = *(int64_t *)(lVar10 + 0x10);
    fVar75 = *(float *)(lVar10 + 0x10);
    if (fVar75 <= *(float *)(lVar10 + 0x14)) {
LAB_01864742:
      uVar28 = 0;
      uVar27 = uVar28;
      if (bVar63) goto LAB_01864748;
LAB_01864778:
      uVar28 = uVar27;
      *local_res18 = iVar39;
      *local_res20 = fVar64;
      puVar37 = param_5;
    }
    else {
      fVar66 = *(float *)(lVar10 + 0xc);
      if (fVar66 <= *(float *)(lVar10 + 0x14)) {
        uVar27 = 0;
        uVar28 = 0;
      }
      else {
        if (((*(char *)(*(int64_t *)(lVar9 + 0x10) + 3) == '\0') ||
            (fVar75 * g_02394244 <= fVar66)) &&
           ((*(char *)(*(int64_t *)(lVar9 + 0x10) + 4) == '\0' || (fVar66 * g_02394244 <= fVar75)
            ))) goto LAB_01864742;
        uVar27 = 1;
        uVar28 = 1;
      }
      if (!bVar63) goto LAB_01864778;
LAB_01864748:
      *param_3 = iVar39;
      *param_4 = fVar73;
      puVar37 = local_res8;
    }
    *puVar37 = uVar28;
    FUN_00d50b20();
    FUN_00d50b20();
    if ((cVar2 != '\0') && (lVar44 != 0)) {
      FUN_00d50b20();
    }
    bVar24 = !bVar63;
    bVar63 = false;
    if (bVar24) {
      if (puVar33 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d50b20();
      return;
    }
  } while( true );
}

