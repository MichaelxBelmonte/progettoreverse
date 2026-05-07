// Function: FUN_0147a0a0
// Address: 0147a0a0
// Size: 4495 bytes
// Class: Unknown

void FUN_0147a0a0(void* param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  float *pfVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  void*puVar9;
  float *pfVar10;
  float fVar11;
  int64_t lVar12;
  int64_t lVar13;
  void*puVar14;
  int iVar15;
  int iVar16;
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  code *pcVar19;
  code *pcVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  void *pvVar25;
  int64_t lVar26;
  uint64_t uVar27;
  void*puVar28;
  void*puVar29;
  void*puVar30;
  uint64_t uVar31;
  int iVar32;
  uint64_t uVar33;
  int64_t lVar34;
  uint uVar35;
  int iVar36;
  int64_t this_ptr;
  uint uVar37;
  uint uVar38;
  int iVar39;
  uint64_t uVar40;
  uint64_t uVar41;
  uint64_t uVar42;
  uint64_t uVar43;
  uint uVar44;
  bool bVar45;
  float fVar46;
  uint32_t uVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  uint64_t uVar51;
  uint8_t auVar52 [16];
  int iVar55;
  int iVar56;
  uint8_t auVar53 [16];
  uint8_t auVar54 [16];
  uint8_t auVar57 [16];
  uint8_t auVar58 [16];
  uint8_t auVar59 [16];
  uint8_t auVar60 [16];
  uint8_t auVar61 [16];
  int iVar64;
  uint8_t auVar62 [16];
  int iVar65;
  uint8_t auVar63 [16];
  int iVar67;
  uint8_t auVar66 [16];
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  float fVar77;
  uint8_t auVar78 [16];
  int64_t lVar79;
  int64_t local_110;
  char local_108;
  void*local_100;
  char local_f8;
  float local_f0;
  float local_ec;
  int64_t local_e8;
  char local_e0;
  uint64_t local_d8;
  double local_d0;
  uint8_t local_c8 [16];
  void*local_b0;
  uint local_a4;
  int local_a0;
  uint local_9c;
  int64_t local_98;
  void*local_90;
  void*local_88;
  void*local_80;
  void*local_78;
  void*local_70;
  uint64_t local_68;
  uint64_t local_60;
  void*local_58;
  void*local_50;
  void*local_48;
  void*local_40;
  char local_38;
  
  pvVar25 = _pthread_getspecific(param_1);
  if (pvVar25 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01328c30();
  local_80 = local_40;
  if ((((local_38 == '\0') && (local_40 != (void*)0x0)) && (FUN_00d50b00(), local_38 != '\0')
      ) && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  pvVar25 = _pthread_getspecific(param_1);
  if (pvVar25 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013293b0();
  local_88 = local_40;
  if (((local_38 == '\0') && (local_40 != (void*)0x0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (void*)0x0)))) {
    FUN_00d50b20();
  }
  lVar34 = *(int64_t *)(this_ptr + 0x68);
  pvVar25 = _pthread_getspecific(param_1);
  if (pvVar25 != (void *)0x0) {
    lVar34 = *(int64_t *)(this_ptr + 0x68);
    lVar26 = FUN_00e8b990();
    if (lVar26 != 0) {
      lVar34 = *(int64_t *)(lVar34 + 0x20 + (uint64_t)(*(uint *)(lVar26 + 0x154) & 1) * 8);
    }
  }
  FUN_0132d790();
  local_d0 = (double)local_40[7];
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  pcVar20 = g_025f0db0;
  pcVar19 = g_02572370;
  dVar48 = g_0240d308 / local_d0;
  local_ec = (float)(g_0240de90 / local_d0);
  dVar49 = g_0240de98 / local_d0;
  dVar50 = g_0238fee8 / local_d0;
  uVar51 = CONCAT71((int7)((uint64_t)lVar34 >> 8),1);
  do {
    if ((char)uVar51 == '\0') {
      FUN_00352bd0();
      local_50 = local_40;
      puVar30 = local_40;
      if (local_40 == (void*)0x0) {
        local_50 = (void*)0x0;
        local_68 = 0;
      }
      else if (local_38 == '\0') {
        uVar27 = FUN_00d50b00();
        local_68 = CONCAT71((int7)((uint64_t)uVar27 >> 8),1);
        if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        local_68 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
      }
    }
    else {
      FUN_00352bd0();
      local_50 = local_40;
      puVar30 = local_40;
      if (local_40 == (void*)0x0) {
        local_50 = (void*)0x0;
        local_68 = 0;
      }
      else if (local_38 == '\0') {
        uVar27 = FUN_00d50b00();
        local_68 = CONCAT71((int7)((uint64_t)uVar27 >> 8),1);
        if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        local_68 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
      }
    }
    local_9c = (uint)uVar51;
    puVar28 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    local_c8._0_8_ = &g_02572358;
    *puVar28 = &g_02572358;
    (*pcVar19)();
    local_78 = puVar28;
    while (*(int *)((int64_t)local_50 + 0xc) != 0) {
      puVar28 = *(void**)local_50[2];
      if (puVar28 != (void*)0x0) {
        FUN_00d50b00();
      }
      while( true ) {
        pvVar25 = _pthread_getspecific((void*)puVar30);
        if (pvVar25 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc340();
        puVar29 = local_40;
        if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (puVar29 == (void*)0x0) break;
        pvVar25 = _pthread_getspecific((void*)puVar30);
        if (pvVar25 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc340();
        puVar14 = local_40;
        puVar29 = puVar28;
        if (local_40 == puVar28) {
joined_r0x0147a531:
          puVar28 = puVar29;
          if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_38 == '\0') {
            if (local_40 != (void*)0x0) {
              FUN_00d50b00();
            }
            puVar29 = puVar14;
            if (puVar28 != (void*)0x0) {
              FUN_00d50b20();
            }
            goto joined_r0x0147a531;
          }
          bVar45 = puVar28 != (void*)0x0;
          puVar28 = puVar14;
          if (bVar45) {
            FUN_00d50b20();
          }
        }
      }
      puVar29 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar29 = local_c8._0_8_;
      (*pcVar19)();
      local_38 = '\0';
      local_40 = puVar29;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      while (puVar28 != (void*)0x0) {
        pvVar25 = _pthread_getspecific((void*)puVar30);
        if (pvVar25 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar51 = FUN_014c2a40();
        lVar34 = local_e8;
        if (local_e0 == '\0') {
          if (local_e8 != 0) {
            uVar51 = FUN_00d50b00();
          }
        }
        else {
          local_e0 = '\0';
        }
        local_40 = (void*)lVar34;
        local_38 = '\0';
        FUN_00d214d0(uVar51,*(void*)((int64_t)puVar29 + 0xc));
        if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (lVar34 != 0) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        local_38 = '\0';
        local_40 = puVar28;
        FUN_00d23f50();
        if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b20();
        }
        pvVar25 = _pthread_getspecific((void*)puVar30);
        if (pvVar25 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc420();
        puVar14 = puVar28;
        if (local_40 == puVar28) {
joined_r0x0147a727:
          if ((local_38 != '\0') && (puVar14 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          puVar28 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (void*)0x0) {
              FUN_00d50b00();
            }
            FUN_00d50b20();
            puVar14 = local_40;
            goto joined_r0x0147a727;
          }
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    iVar21 = FUN_00e7d850(dVar48);
    if (iVar21 < 1) {
      iVar21 = 1;
    }
    puVar30 = (void*)FUN_00e8fc40();
    uVar44 = local_9c;
    FUN_00d4ff40();
    *puVar30 = &g_025f0d98;
    puVar30[2] = 0;
    puVar30[3] = 0;
    puVar30[4] = 0;
    puVar30[5] = 0;
    puVar30[6] = 0;
    puVar30[7] = 0;
    (*pcVar20)();
    local_f0 = (float)iVar21 + g_02391090;
    if (*(int *)((int64_t)local_78 + 0xc) < 1) {
LAB_0147b250:
      FUN_00d50b20();
    }
    else {
      lVar34 = 0;
      local_58 = puVar30;
      do {
        lVar26 = *(int64_t *)(local_78[2] + lVar34 * 8);
        if (lVar26 != 0) {
          FUN_00d50b00();
          local_60 = (uint64_t)*(uint *)(lVar26 + 0xc);
          if (local_60 != 0) {
            iVar22 = FUN_00e7d850(dVar49);
            local_a0 = (int)local_60 * 4;
            FUN_00c8e690();
            puVar30 = local_40;
            uVar42 = local_60;
            if ((((local_38 == '\0') && (local_40 != (void*)0x0)) &&
                (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (void*)0x0)) {
              FUN_00d50b20();
            }
            FUN_00c92170();
            FUN_00c92160();
            FUN_00c8e690();
            puVar28 = local_40;
            if (((local_38 == '\0') && (local_40 != (void*)0x0)) &&
               ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (void*)0x0)))) {
              FUN_00d50b20();
            }
            FUN_00c92170();
            FUN_00c92160();
            uVar44 = (uint)uVar42;
            local_48 = puVar28;
            if (0 < (int)uVar44) {
              lVar4 = *(int64_t *)(lVar26 + 0x10);
              lVar5 = puVar30[2];
              lVar6 = puVar28[2];
              if (uVar44 == 1) {
                uVar31 = 0;
              }
              else {
                uVar31 = 0;
                do {
                  uVar47 = *(void*)(*(int64_t *)(lVar4 + uVar31 * 8) + 0x14);
                  *(void*)(lVar5 + uVar31 * 4) = uVar47;
                  *(void*)(lVar6 + uVar31 * 4) = uVar47;
                  uVar47 = *(void*)(*(int64_t *)(lVar4 + 8 + uVar31 * 8) + 0x14);
                  *(void*)(lVar5 + 4 + uVar31 * 4) = uVar47;
                  *(void*)(lVar6 + 4 + uVar31 * 4) = uVar47;
                  uVar31 = uVar31 + 2;
                } while ((uVar44 & 0xfffffffe) != uVar31);
              }
              if ((uVar42 & 1) != 0) {
                uVar47 = *(void*)(*(int64_t *)(lVar4 + uVar31 * 8) + 0x14);
                *(void*)(lVar5 + uVar31 * 4) = uVar47;
                *(void*)(lVar6 + uVar31 * 4) = uVar47;
              }
            }
            FUN_015c15b0(1,uVar42 & 0xffffffff);
            local_110 = 0;
            local_108 = '\0';
            FUN_0161e150(dVar50,&local_110);
            local_b0 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (void*)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (void*)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            local_100 = local_b0;
            local_f8 = '\0';
            FUN_0161e1a0();
            local_90 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (void*)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (void*)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_f8 != '\0') && (local_100 != (void*)0x0)) {
              FUN_00d50b20();
            }
            local_a4 = uVar44 - 1;
            local_70 = puVar30;
            if (7 < (int)*(uint *)(local_90 + 3)) {
              fVar77 = (float)iVar22;
              local_d8 = (uint64_t)(*(uint *)(local_90 + 3) >> 3);
              lVar4 = local_90[2];
              uVar42 = 0;
              do {
                lVar6 = _UNK_0240dfb8;
                lVar5 = g_0240dfb0;
                auVar18 = g_0240dfa0;
                auVar17 = g_023b2d50;
                iVar16 = _UNK_0239418c;
                iVar15 = _UNK_02394188;
                iVar39 = _UNK_02394184;
                iVar36 = g_02394180;
                uVar44 = *(uint *)(lVar4 + uVar42 * 8);
                uVar35 = *(int *)(lVar4 + 4 + uVar42 * 8) + uVar44;
                if ((int)uVar44 < 0) {
                  uVar44 = 0;
                }
                if ((int)(uint)local_60 <= (int)uVar35) {
                  uVar35 = local_a4;
                }
                if ((int)uVar44 <= (int)uVar35) {
                  uVar37 = uVar35 + 1;
                  iVar23 = uVar35 - iVar22;
                  iVar32 = iVar22 + uVar44;
                  lVar7 = puVar30[2];
                  lVar8 = local_48[2];
                  uVar31 = (uint64_t)uVar44;
                  uVar33 = (uint64_t)uVar37;
                  uVar40 = uVar33 - uVar31;
                  uVar38 = uVar44;
                  if (3 < uVar40) {
                    uVar1 = lVar7 + uVar31 * 4;
                    uVar2 = lVar8 + uVar31 * 4;
                    if ((lVar8 + uVar33 * 4 <= uVar1) || (lVar7 + uVar33 * 4 <= uVar2)) {
                      iVar24 = 1 - uVar44;
                      uVar43 = uVar40 & 0xfffffffffffffffc;
                      uVar31 = uVar31 + uVar43;
                      auVar78._0_8_ = (uint64_t)uVar44 + g_0240df80;
                      auVar78._8_8_ = (uint64_t)uVar44 + _UNK_0240df88;
                      lVar12 = (uint64_t)uVar44 + g_0240df90;
                      lVar13 = (uint64_t)uVar44 + _UNK_0240df98;
                      iVar73 = uVar44 + g_0238fcc0;
                      iVar74 = uVar44 + _UNK_0238fcc4;
                      iVar75 = uVar44 + _UNK_0238fcc8;
                      iVar76 = uVar44 + _UNK_0238fccc;
                      local_c8._0_8_ = SEXT48(iVar32);
                      local_c8._8_4_ = iVar32;
                      local_c8._12_4_ = iVar32 >> 0x1f;
                      auVar52._0_8_ = (int64_t)iVar23;
                      auVar52._8_4_ = iVar23;
                      auVar52._12_4_ = iVar23 >> 0x1f;
                      uVar41 = 0;
                      fVar46 = g_023b2d50._4_4_;
                      fVar11 = g_023b2d50._12_4_;
                      iVar69 = iVar73;
                      iVar70 = iVar74;
                      iVar71 = iVar75;
                      iVar72 = iVar76;
                      do {
                        auVar62._8_4_ = (int)lVar13;
                        auVar62._0_8_ = lVar12;
                        auVar62._12_4_ = (int)((uint64_t)lVar13 >> 0x20);
                        auVar62 = auVar62 ^ auVar18;
                        auVar57 = local_c8 ^ auVar18;
                        iVar55 = auVar57._4_4_;
                        iVar64 = auVar62._4_4_;
                        iVar56 = auVar57._12_4_;
                        iVar65 = auVar62._12_4_;
                        auVar66 = auVar78 ^ auVar18;
                        iVar67 = auVar66._4_4_;
                        iVar68 = auVar66._12_4_;
                        auVar58._0_4_ = -(uint)(iVar55 == iVar64 && auVar62._0_4_ < auVar57._0_4_);
                        auVar58._4_4_ = -(uint)(iVar56 == iVar65 && auVar62._8_4_ < auVar57._8_4_);
                        auVar58._8_4_ = -(uint)(iVar55 == iVar67 && auVar66._0_4_ < auVar57._0_4_);
                        auVar58._12_4_ = -(uint)(iVar56 == iVar68 && auVar66._8_4_ < auVar57._8_4_);
                        auVar53._4_4_ = -(uint)(iVar65 < iVar56);
                        auVar53._0_4_ = -(uint)(iVar64 < iVar55);
                        auVar53._8_4_ = -(uint)(iVar67 < iVar55);
                        auVar53._12_4_ = -(uint)(iVar68 < iVar56);
                        auVar59._0_4_ = (float)(iVar24 + iVar73);
                        auVar59._4_4_ = (float)(iVar24 + iVar74);
                        auVar59._8_4_ = (float)(iVar24 + iVar75);
                        auVar59._12_4_ = (float)(iVar24 + iVar76);
                        auVar57._4_4_ = fVar77;
                        auVar57._0_4_ = fVar77;
                        auVar57._8_4_ = fVar77;
                        auVar57._12_4_ = fVar77;
                        auVar57 = divps(auVar59,auVar57);
                        auVar57 = blendvps(auVar17,auVar57,auVar53 | auVar58);
                        auVar60 = auVar52 ^ auVar18;
                        iVar55 = auVar60._4_4_;
                        iVar56 = auVar60._12_4_;
                        auVar63._0_4_ = -(uint)(iVar64 == iVar55 && auVar60._0_4_ < auVar62._0_4_);
                        auVar63._4_4_ = -(uint)(iVar65 == iVar56 && auVar60._8_4_ < auVar62._8_4_);
                        auVar63._8_4_ = -(uint)(iVar55 == iVar67 && auVar60._0_4_ < auVar66._0_4_);
                        auVar63._12_4_ = -(uint)(iVar56 == iVar68 && auVar60._8_4_ < auVar66._8_4_);
                        auVar66._4_4_ = -(uint)(iVar56 < iVar65);
                        auVar66._0_4_ = -(uint)(iVar55 < iVar64);
                        auVar66._8_4_ = -(uint)(iVar55 < iVar67);
                        auVar66._12_4_ = -(uint)(iVar56 < iVar68);
                        auVar61._0_4_ = (float)(int)(uVar37 - iVar69);
                        auVar61._4_4_ = (float)(int)(uVar37 - iVar70);
                        auVar61._8_4_ = (float)(int)(uVar37 - iVar71);
                        auVar61._12_4_ = (float)(int)(uVar37 - iVar72);
                        auVar60._4_4_ = fVar77;
                        auVar60._0_4_ = fVar77;
                        auVar60._8_4_ = fVar77;
                        auVar60._12_4_ = fVar77;
                        auVar60 = divps(auVar61,auVar60);
                        auVar57 = blendvps(auVar57,auVar60,auVar66 | auVar63);
                        pfVar10 = (float *)(uVar1 + uVar41 * 4);
                        pfVar3 = (float *)(uVar2 + uVar41 * 4);
                        auVar54._0_4_ =
                             *pfVar3 * auVar57._0_4_ + (auVar17._0_4_ - auVar57._0_4_) * *pfVar10;
                        auVar54._4_4_ =
                             pfVar3[1] * auVar57._4_4_ + (fVar46 - auVar57._4_4_) * pfVar10[1];
                        auVar54._8_4_ =
                             pfVar3[2] * auVar57._8_4_ +
                             (auVar17._8_4_ - auVar57._8_4_) * pfVar10[2];
                        auVar54._12_4_ =
                             pfVar3[3] * auVar57._12_4_ + (fVar11 - auVar57._12_4_) * pfVar10[3];
                        *(uint8_t (*) [16])(uVar1 + uVar41 * 4) = auVar54;
                        uVar41 = uVar41 + 4;
                        lVar12 = lVar12 + lVar5;
                        lVar13 = lVar13 + lVar6;
                        lVar79 = auVar78._8_8_;
                        auVar78._0_8_ = auVar78._0_8_ + lVar5;
                        auVar78._8_8_ = lVar79 + lVar6;
                        iVar73 = iVar73 + iVar36;
                        iVar74 = iVar74 + iVar39;
                        iVar75 = iVar75 + iVar15;
                        iVar76 = iVar76 + iVar16;
                        iVar69 = iVar69 + iVar36;
                        iVar70 = iVar70 + iVar39;
                        iVar71 = iVar71 + iVar15;
                        iVar72 = iVar72 + iVar16;
                      } while (uVar43 != uVar41);
                      uVar38 = uVar44 + (int)uVar43;
                      if (uVar40 == uVar43) goto LAB_0147ab40;
                    }
                  }
                  iVar36 = (uVar35 - (int)uVar31) + 1;
                  iVar39 = uVar38 - uVar44;
                  fVar46 = g_02390124;
                  do {
                    fVar11 = g_02390124;
                    iVar39 = iVar39 + 1;
                    if ((int64_t)uVar31 < (int64_t)iVar32) {
                      fVar46 = (float)iVar39 / fVar77;
                    }
                    if ((int64_t)iVar23 < (int64_t)uVar31) {
                      fVar46 = (float)iVar36 / fVar77;
                    }
                    *(float *)(lVar7 + uVar31 * 4) =
                         fVar46 * *(float *)(lVar8 + uVar31 * 4) +
                         (g_02390124 - fVar46) * *(float *)(lVar7 + uVar31 * 4);
                    uVar31 = uVar31 + 1;
                    iVar36 = iVar36 + -1;
                    fVar46 = fVar11;
                  } while (uVar33 != uVar31);
                }
LAB_0147ab40:
                uVar42 = uVar42 + 1;
              } while (uVar42 != local_d8);
            }
            if (0 < (int)(uint)local_60) {
              lVar4 = puVar30[2];
              lVar5 = *(int64_t *)(lVar26 + 0x10);
              if (local_60 - 1 < 3) {
                uVar42 = 0;
              }
              else {
                uVar42 = 0;
                do {
                  *(void*)(*(int64_t *)(lVar5 + uVar42 * 8) + 0x40) =
                       *(void*)(lVar4 + uVar42 * 4);
                  *(void*)(*(int64_t *)(lVar5 + 8 + uVar42 * 8) + 0x40) =
                       *(void*)(lVar4 + 4 + uVar42 * 4);
                  *(void*)(*(int64_t *)(lVar5 + 0x10 + uVar42 * 8) + 0x40) =
                       *(void*)(lVar4 + 8 + uVar42 * 4);
                  *(void*)(*(int64_t *)(lVar5 + 0x18 + uVar42 * 8) + 0x40) =
                       *(void*)(lVar4 + 0xc + uVar42 * 4);
                  uVar42 = uVar42 + 4;
                } while (((uint)local_60 & 0xfffffffc) != uVar42);
              }
              if ((uint64_t)((uint)local_60 & 3) != 0) {
                uVar31 = 0;
                do {
                  *(void*)(*(int64_t *)(lVar5 + uVar42 * 8 + uVar31 * 8) + 0x40) =
                       *(void*)(lVar4 + uVar42 * 4 + uVar31 * 4);
                  uVar31 = uVar31 + 1;
                } while (((uint)local_60 & 3) != uVar31);
              }
            }
            local_98 = lVar26;
            FUN_00c8e690();
            local_c8._0_8_ = local_40;
            if ((((local_38 == '\0') && (local_40 != (void*)0x0)) &&
                (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (void*)0x0)) {
              FUN_00d50b20();
            }
            FUN_00c92170();
            FUN_00c92160();
            uVar44 = g_02390140;
            iVar22 = (int)local_60;
            uVar51 = local_c8._0_8_;
            if (iVar22 < 3) {
              if (iVar22 == 2) {
                fVar77 = (float)((double)(float)((uint)(*(float *)local_70[2] -
                                                       ((float *)local_70[2])[1]) & g_02390140) /
                                local_d0);
                pfVar10 = *(float **)(local_c8._0_8_ + 0x10);
                *pfVar10 = fVar77;
                pfVar10[1] = fVar77;
              }
              else {
                **(void**)(local_c8._0_8_ + 0x10) = 0x43c80000;
              }
            }
            else {
              lVar26 = local_70[2];
              puVar9 = *(void**)(local_c8._0_8_ + 0x10);
              uVar42 = 1;
              do {
                uVar35 = (int)uVar42 - iVar21;
                uVar31 = (uint64_t)uVar35;
                if ((int)uVar35 < 0) {
                  uVar31 = 0;
                }
                uVar35 = iVar21 + (int)uVar42;
                if (iVar22 <= (int)uVar35) {
                  uVar35 = local_a4;
                }
                puVar9[uVar42] =
                     (float)((double)((float)((uint)(*(float *)(lVar26 + uVar31 * 4) -
                                                    *(float *)(lVar26 + (int64_t)(int)uVar35 * 4))
                                             & uVar44) / (float)(int)(uVar35 - (int)uVar31)) /
                            local_d0);
                uVar42 = uVar42 + 1;
              } while (local_a4 != uVar42);
              *puVar9 = puVar9[1];
              puVar9[(int)local_a4] = puVar9[iVar22 - 2];
            }
            FUN_015c15b0(1,local_60 & 0xffffffff);
            if (0 < iVar22) {
              uVar42 = 0;
              do {
                uVar47 = FUN_00e84a50();
                *(void*)(*(int64_t *)(*(int64_t *)(local_98 + 0x10) + uVar42 * 8) + 0x44) =
                     uVar47;
                uVar42 = uVar42 + 1;
              } while (local_60 != uVar42);
            }
            if (uVar51 != 0) {
              FUN_00d50b20();
            }
            puVar30 = local_b0;
            if (local_90 != (void*)0x0) {
              FUN_00d50b20();
            }
            puVar28 = local_70;
            if (puVar30 != (void*)0x0) {
              FUN_00d50b20();
            }
            if (local_48 != (void*)0x0) {
              FUN_00d50b20();
            }
            if (puVar28 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        lVar34 = lVar34 + 1;
      } while (lVar34 < *(int *)((int64_t)local_78 + 0xc));
      uVar44 = local_9c;
      if (local_58 != (void*)0x0) goto LAB_0147b250;
    }
    FUN_00d50b20();
    if (((char)local_68 != '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b20();
    }
    uVar51 = 0;
    if ((uVar44 & 1) == 0) {
      if (local_88 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (local_80 != (void*)0x0) {
        FUN_00d50b20();
      }
      return;
    }
  } while( true );
}

