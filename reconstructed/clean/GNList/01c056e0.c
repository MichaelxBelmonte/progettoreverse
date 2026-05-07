// Function: FUN_01c056e0
// Address: 01c056e0
// Size: 4385 bytes
// Class: GNList
// String references:
//   "GNList"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01c056e0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint8_t auVar3 [12];
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  int iVar7;
  void*puVar8;
  int64_t lVar9;
  void *pvVar10;
  int64_t lVar11;
  int64_t lVar12;
  void* pVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  void*arg1;
  int64_t **pplVar17;
  int64_t *plVar18;
  bool bVar19;
  double dVar20;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_168;
  char local_160;
  uint8_t local_118 [32];
  int64_t *local_d0;
  int64_t local_c0;
  char local_b8;
  int local_a8;
  int64_t local_90;
  char local_88;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01a9a5c0();
  FUN_01cfc9f0();
  plVar4 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  FUN_01d488d0();
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e3f820();
  FUN_00e7d780();
  FUN_00c8e690();
  plVar4 = local_68;
  if ((((local_60 == '\0') && (local_68 != (int64_t *)0x0)) && (FUN_00d50b00(), local_60 != '\0'))
     && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_01e3f820();
  FUN_00e7d780();
  FUN_00c8e690();
  plVar5 = local_68;
  if (((local_60 == '\0') && (local_68 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_60 != '\0' && (local_68 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_01f27fe0();
  FUN_01f46070();
  plVar1 = local_68;
  if ((g_027048b0 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
    g_026cd478 = FUN_00d4fe50();
    g_026cd460 = "GNList";
    g_026cd468 = 0x20;
    g_026cd470 = FUN_00018210;
    g_026cd480 = 0;
    ram_00000000026cd488 = 0;
    g_026cd490 = 0;
    g_026cd508 = 0;
    ram_00000000026cd510 = 0;
    g_026cd518 = 0;
    g_026cd51a = 6;
    g_026cd498 = 0;
    ram_00000000026cd4a0 = 0;
    g_026cd4a8 = 0;
    ram_00000000026cd4b0 = 0;
    g_026cd4b8 = 0;
    ram_00000000026cd4c0 = 0;
    g_026cd4c8 = 0;
    ram_00000000026cd4d0 = 0;
    g_026cd4d8 = 0;
    ram_00000000026cd4e0 = 0;
    g_026cd4e8 = 0;
    ram_00000000026cd4f0 = 0;
    g_026cd4f8 = 0;
    ram_00000000026cd500 = 0;
    g_026cd523 = 0;
    g_026cd51b = 0;
    ___cxa_guard_release();
  }
  pplVar17 = (int64_t **)&g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 != '\0') {
      FUN_0006e1c0();
      cVar6 = FUN_00e8da30();
      pplVar17 = &local_68;
      if (cVar6 == '\0') {
        pplVar17 = (int64_t **)&g_02802688;
      }
    }
  }
  plVar1 = *pplVar17;
  if (*(char *)(pplVar17 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar17 + 1) = 0;
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar13 = 0x2572358;
  *puVar8 = &g_02572358;
  (*g_02572370)();
  if (plVar1 != (int64_t *)0x0) {
    local_60 = '\0';
    local_68 = (int64_t *)0x0;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    local_58 = plVar1;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar15 = -local_50._4_4_;
        }
        else {
          iVar15 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar15);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar15 = 0;
        }
        local_50 = CONCAT44(iVar15,(int)local_50);
      }
      lVar9 = (int64_t)(int)local_50;
      iVar15 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar15);
      if (*(int *)((int64_t)local_58 + 0xc) <= iVar15) break;
      lVar11 = local_58[2];
      local_68 = *(int64_t **)(lVar11 + 8 + lVar9 * 8);
      pvVar10 = _pthread_getspecific((void*)lVar11);
      pVar13 = (void*)lVar11;
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (local_c0 != 0) {
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        local_c0 = (int64_t)local_40;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_b8 = '\0';
        FUN_00d21140();
        if (local_c0 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    plVar18 = local_58;
    FUN_001159b0();
    pVar13 = (void*)plVar18;
  }
  FUN_01a99bd0();
  FUN_01788770();
  FUN_017879e0();
  pvVar10 = _pthread_getspecific(pVar13);
  lVar9 = local_c0;
  if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
    lVar9 = *(int64_t *)(local_c0 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
  }
  if (local_68 == *(int64_t **)(lVar9 + 0x60)) {
    bVar19 = true;
  }
  else {
    FUN_01a99bd0();
    FUN_01788770();
    FUN_017879e0();
    pvVar10 = _pthread_getspecific(pVar13);
    lVar9 = local_90;
    if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
      lVar9 = *(int64_t *)(local_90 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
    }
    if (local_78 == *(int64_t *)(lVar9 + 0x68)) {
      bVar19 = true;
    }
    else {
      FUN_01a99bd0();
      FUN_01788770();
      FUN_017879e0();
      pvVar10 = _pthread_getspecific(pVar13);
      lVar9 = local_168;
      if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        lVar9 = *(int64_t *)(local_168 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
      }
      bVar19 = local_198 == *(int64_t *)(lVar9 + 0x78);
      if ((local_160 != '\0') && (local_168 != 0)) {
        FUN_00d50b20();
      }
      if ((local_180 != '\0') && (local_188 != 0)) {
        FUN_00d50b20();
      }
      if ((local_190 != '\0') && (local_198 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1a0 != '\0') && (local_1a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar19) {
    FUN_01788770();
    FUN_01794a80();
    plVar18 = local_68;
    if (local_60 == '\0') {
      if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar18 != (int64_t *)0x0) {
      local_60 = '\0';
      local_68 = (int64_t *)0x0;
      local_58 = plVar18;
      local_50 = 0xffffffff;
      local_48 = 0;
      iVar15 = 0;
      iVar7 = 0;
      while( true ) {
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          if (iVar7 < 1) {
            iVar7 = -iVar7;
          }
          else {
            local_50 = CONCAT44(local_50._4_4_,(int)local_50 - iVar7);
            FUN_00d23690(iVar7,iVar7);
            local_48 = local_48 + local_50._4_4_;
            iVar7 = 0;
          }
          local_50 = CONCAT44(iVar7,(int)local_50);
        }
        lVar9 = (int64_t)(int)local_50;
        iVar16 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar16);
        if (*(int *)((int64_t)local_58 + 0xc) <= iVar16) break;
        plVar18 = *(int64_t **)(local_58[2] + 8 + lVar9 * 8);
        local_68 = plVar18;
        if (plVar18 != (int64_t *)0x0) {
          local_a8 = -1;
          while( true ) {
            lVar9 = (int64_t)local_a8;
            local_a8 = local_a8 + 1;
            if (*(int *)((int64_t)plVar18 + 0xc) <= local_a8) break;
            lVar11 = plVar18[2];
            lVar9 = *(int64_t *)(lVar11 + 8 + lVar9 * 8);
            pvVar10 = _pthread_getspecific((void*)lVar11);
            pVar13 = (void*)lVar11;
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01508450();
            plVar2 = local_40;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar2 != (int64_t *)0x0) {
              FUN_01a99bd0();
              FUN_01788770();
              FUN_017879e0();
              pvVar10 = _pthread_getspecific(pVar13);
              lVar11 = local_78;
              if ((pvVar10 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
                lVar11 = *(int64_t *)
                          (local_78 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
              }
              plVar2 = local_40;
              lVar11 = *(int64_t *)(lVar11 + 0x60);
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              if ((local_88 != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              auVar3 = local_118._4_12_;
              auVar21._12_4_ = 0;
              auVar21._0_12_ = local_118._4_12_;
              local_118._0_16_ = auVar21 << 0x20;
              if (plVar2 == (int64_t *)lVar11) {
                dVar20 = (double)FUN_01790600();
                local_118._0_4_ = (float)dVar20;
                local_118._0_16_ = CONCAT124(auVar3,local_118._0_4_);
              }
              FUN_01a99bd0();
              FUN_01788770();
              FUN_017879e0();
              pvVar10 = _pthread_getspecific(pVar13);
              lVar11 = local_78;
              if ((pvVar10 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
                lVar11 = *(int64_t *)
                          (local_78 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
              }
              plVar2 = local_40;
              lVar11 = *(int64_t *)(lVar11 + 0x68);
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              if ((local_88 != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar2 == (int64_t *)lVar11) {
                dVar20 = (double)FUN_01790670();
                local_118._0_4_ = (float)dVar20;
              }
              FUN_01a99bd0();
              FUN_01788770();
              FUN_017879e0();
              pvVar10 = _pthread_getspecific(pVar13);
              lVar11 = local_78;
              if ((pvVar10 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
                lVar11 = *(int64_t *)
                          (local_78 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
              }
              plVar2 = local_40;
              lVar11 = *(int64_t *)(lVar11 + 0x78);
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              if ((local_88 != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar2 == (int64_t *)lVar11) {
                dVar20 = (double)FUN_017906e0();
                local_118._0_4_ = (float)dVar20;
              }
              dVar20 = (double)FUN_01a99d00((double)(float)local_118._0_4_);
              auVar23._0_4_ = SUB84(dVar20,0) & g_023945b0;
              auVar23._4_4_ = (uint)((uint64_t)dVar20 >> 0x20) & _UNK_023945b4;
              auVar23._8_4_ = (uint)extraout_XMM0_Qb & _UNK_023945b8;
              auVar23._12_4_ = (uint)((uint64_t)extraout_XMM0_Qb >> 0x20) & _UNK_023945bc;
              auVar24._8_8_ = SUB168(auVar23 | g_023945c0,8);
              auVar24._0_8_ = SUB168(auVar23 | g_023945c0,0) + dVar20;
              auVar21 = roundsd(ZEXT816(0),auVar24,0xb);
              auVar22._4_12_ = auVar21._4_12_;
              auVar22._0_4_ = (float)auVar21._0_8_;
              iVar7 = FUN_00e7d780(auVar22._0_8_);
              if (iVar7 < 0) {
                iVar7 = 0;
              }
              iVar16 = (int)plVar4[3];
              iVar14 = iVar16 + 3;
              if (-1 < iVar16) {
                iVar14 = iVar16;
              }
              iVar16 = (iVar14 >> 2) + -1;
              if (iVar16 <= iVar7) {
                iVar7 = iVar16;
              }
              lVar11 = (int64_t)iVar7;
              iVar7 = *(int *)(plVar4[2] + lVar11 * 4);
              if (iVar15 < iVar7) {
                iVar15 = iVar7;
              }
              *(int *)(plVar4[2] + lVar11 * 4) = iVar7 + 1;
              local_38 = '\0';
              local_40 = (int64_t *)lVar9;
              cVar6 = FUN_00d23d70();
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar6 != '\0') {
                *(void*)(plVar5[2] + lVar11 * 4) = 1;
              }
            }
          }
          FUN_0015ed50();
          iVar7 = local_50._4_4_;
        }
      }
      FUN_01c076c0();
      FUN_00d50b20();
    }
  }
  FUN_01cfc9f0();
  plVar18 = local_68;
  if (local_60 == '\0') {
    if (local_68 == (int64_t *)0x0) {
      plVar18 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01cfbee0();
  local_d0 = local_68;
  if (local_60 == '\0') {
    if (local_68 == (int64_t *)0x0) {
      local_40 = (int64_t *)0x0;
      local_d0 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      local_40 = local_d0;
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_d0 = local_68;
    local_40 = local_68;
  }
  if (3 < (int)plVar4[3]) {
    lVar9 = 0;
    do {
      FUN_01d488d0();
      FUN_01d48b40((float)*(int *)(plVar5[2] + lVar9 * 4) + g_02390124);
      if (*(int *)(plVar4[2] + lVar9 * 4) != 0) {
        plVar2 = (int64_t *)*arg1;
        FUN_01e3f820();
        FUN_01e3f820();
        FUN_01e3f820();
        (**(code **)(*plVar2 + 0x3e0))();
      }
      lVar9 = lVar9 + 1;
      iVar15 = (int)plVar4[3];
      iVar7 = iVar15 + 3;
      if (-1 < iVar15) {
        iVar7 = iVar15;
      }
    } while (lVar9 < iVar7 >> 2);
  }
  if (local_d0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar18 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (puVar8 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

