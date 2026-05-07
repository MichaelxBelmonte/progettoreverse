// Function: FUN_0141f4b0
// Address: 0141f4b0
// Size: 22100 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0141f4b0(void)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  int64_t *plVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  void* pVar11;
  int64_t *plVar12;
  int64_t lVar13;
  int64_t *plVar14;
  void *pvVar15;
  int64_t *plVar16;
  void**ppuVar17;
  uint64_t uVar18;
  int64_t lVar19;
  void*puVar20;
  void*puVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t *puVar24;
  void* pVar25;
  int64_t *plVar26;
  void**ppuVar27;
  float *pfVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  int64_t this_ptr;
  size_t sVar34;
  uint uVar35;
  int64_t lVar36;
  int64_t *plVar37;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  uint32_t uVar38;
  uint32_t extraout_XMM0_Da_08;
  float fVar39;
  double dVar40;
  double local_2e8;
  int64_t local_2a8;
  char local_2a0;
  int64_t *local_298;
  char local_290;
  int64_t *local_288;
  char local_280;
  int64_t *local_278;
  char local_270;
  int64_t *local_268;
  char local_260;
  double local_258;
  char local_250;
  int64_t *local_248;
  char local_240;
  int64_t *local_238;
  char local_230;
  uint32_t local_224;
  uint32_t local_220;
  void* local_21c;
  uint64_t local_218;
  void*local_210;
  double local_208;
  uint64_t local_200;
  void*local_1f8;
  code *local_1f0;
  uint64_t local_1e8;
  uint32_t local_1e0;
  int iStack_1dc;
  uint64_t local_1d8;
  int64_t local_1d0;
  char local_1c8;
  uint64_t local_1c0;
  void*local_1b8;
  uint32_t local_1ac;
  uint64_t local_1a8;
  int64_t local_1a0;
  double local_198;
  int64_t *local_190;
  int64_t *local_188;
  int64_t *local_180;
  int64_t *local_178;
  void*local_170;
  uint64_t local_168;
  uint64_t *local_160;
  double local_158;
  void*local_150;
  uint64_t local_130;
  uint64_t local_128;
  double local_120;
  uint64_t local_118;
  int64_t *local_110;
  uint64_t local_108;
  char local_100;
  uint64_t local_f8;
  uint local_ec;
  uint local_e8;
  void* local_e4;
  uint64_t local_e0;
  char local_d8;
  int64_t local_d0;
  uint64_t local_c8;
  int local_c0;
  uint64_t local_b8;
  char local_b0 [8];
  int64_t *local_a8;
  uint64_t local_a0;
  int local_98;
  void*local_90;
  int64_t *local_88;
  uint64_t local_80;
  char local_78;
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  void*local_58;
  uint64_t local_50;
  int local_48;
  int iStack_44;
  int local_40;
  double local_38;
  
  local_1e8 = FUN_00e7bcc0();
  plVar12 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  local_1f8 = &g_02572358;
  *plVar12 = (int64_t)&g_02572358;
  local_1f0 = g_02572370;
  (*g_02572370)();
  if (*(int64_t **)(this_ptr + 0x60) != (int64_t *)0x0) {
    local_58 = (void*)((uint64_t)local_58 & 0xffffffffffffff00);
    local_60 = (int64_t *)0x0;
    local_48 = -1;
    iStack_44 = 0;
    local_40 = 0;
    local_50 = *(int64_t **)(this_ptr + 0x60);
    while( true ) {
      if (iStack_44 != 0) {
        if (iStack_44 < 1) {
          iStack_44 = -iStack_44;
        }
        else {
          local_48 = local_48 - iStack_44;
          FUN_00d23690();
          local_40 = local_40 + iStack_44;
          iStack_44 = 0;
        }
      }
      lVar13 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((int64_t)local_50 + 0xc) <= local_48) break;
      plVar14 = *(int64_t **)(local_50[2] + 8 + lVar13 * 8);
      local_e0 = plVar14;
      local_60 = plVar14;
      FUN_0006e1c0();
      plVar26 = &g_02802688;
      if (plVar14 != (int64_t *)0x0) {
        (**(code **)(*plVar14 + 0x360))();
        cVar7 = FUN_00e85ea0();
        plVar26 = &local_e0;
        if (cVar7 == '\0') {
          plVar26 = &g_02802688;
        }
      }
      if (*plVar26 != 0) {
        local_e0 = local_60;
        local_d8 = '\0';
        FUN_00d21140();
        if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_002d7220();
  }
  if (*(int *)((int64_t)plVar12 + 0xc) != 0) {
    plVar14 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar14 = (int64_t)local_1f8;
    (*local_1f0)();
    local_188 = plVar14;
    plVar14 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar14 = (int64_t)local_1f8;
    (*local_1f0)();
    local_190 = plVar14;
    FUN_00d23310();
    plVar14 = local_60;
    ppuVar27 = &local_58;
    local_80 = (int64_t *)CONCAT71(local_80._1_7_,(char)local_58);
    ppuVar17 = (void**)&local_80;
    if ((char)local_58 != '\0') {
      ppuVar17 = ppuVar27;
    }
    *(void*)ppuVar17 = 0;
    if (((char)local_58 != '\0') && (plVar14 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pVar11 = (void*)ppuVar27;
    pvVar15 = _pthread_getspecific(pVar11);
    if (pvVar15 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01267000();
    pvVar15 = _pthread_getspecific(pVar11);
    if (pvVar15 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    local_88 = local_e0;
    if (local_d8 == '\0') {
      if (((local_e0 != (int64_t *)0x0) && (FUN_00d50b00(), local_d8 != '\0')) &&
         (local_e0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_d8 = '\0';
    }
    if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_80 != '\0') && (plVar14 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar15 = _pthread_getspecific(pVar11);
    if (pvVar15 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar14 = (int64_t *)&local_1e0;
    FUN_016ca8d0();
    plVar26 = local_60;
    if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_0141f879:
    do {
      plVar16 = (int64_t *)FUN_00e8fc40();
      FUN_01427f10();
      (**(code **)(*plVar16 + 0x18))();
      plVar37 = (int64_t *)plVar16[6];
      if (plVar37 != plVar26) {
        if (plVar26 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar16[6] = (int64_t)plVar26;
        if (plVar37 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      *(void*)((int64_t)plVar16 + 0xc) = local_218;
      *(uint64_t *)((int64_t)plVar16 + 0x14) = CONCAT44(iStack_1dc,local_1e0);
      pvVar15 = _pthread_getspecific((void*)plVar14);
      if ((pvVar15 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
        plVar14 = local_88;
      }
      lVar13 = FUN_016c98e0();
      pVar11 = (void*)plVar14;
      plVar16[4] = lVar13;
      dVar40 = g_023b2568;
      if (iStack_1dc != 0) {
        pvVar15 = _pthread_getspecific(pVar11);
        if ((pvVar15 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          plVar14 = local_88;
        }
        pVar11 = (void*)plVar14;
        dVar40 = (double)FUN_016c98e0();
      }
      plVar16[5] = (int64_t)dVar40;
      FUN_017c3fe0();
      plVar14 = (int64_t *)plVar16[7];
      plVar37 = plVar14;
      if (plVar14 != local_60) {
        if ((char)local_58 == '\0') {
          if (local_60 == (int64_t *)0x0) {
            plVar37 = (int64_t *)0x0;
            goto LAB_0141f9bd;
          }
          FUN_00d50b00();
          plVar14 = (int64_t *)plVar16[7];
          plVar16[7] = (int64_t)local_60;
          plVar37 = local_60;
        }
        else {
          local_58 = (void*)((uint64_t)local_58 & 0xffffffffffffff00);
          plVar37 = local_60;
LAB_0141f9bd:
          plVar16[7] = (int64_t)plVar37;
        }
        pVar11 = (void*)plVar14;
        if (plVar14 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar37 = local_60;
        }
      }
      if (((char)local_58 != '\0') && (plVar37 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar15 = _pthread_getspecific(pVar11);
      if (pvVar15 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_60 = (int64_t *)FUN_017c4300();
      FUN_00e7bac0();
      FUN_00e7cea0();
      FUN_00c8e690();
      plVar14 = local_60;
      if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      lVar13 = plVar16[9];
      if ((int64_t *)lVar13 == plVar14) {
        FUN_00d50b20();
      }
      else {
        plVar16[9] = (int64_t)plVar14;
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
      }
      local_58 = (void*)((uint64_t)local_58 & 0xffffffffffffff00);
      local_60 = (int64_t *)0x0;
      local_48 = -1;
      iStack_44 = 0;
      local_40 = 0;
      local_50 = plVar12;
      while( true ) {
        if (iStack_44 != 0) {
          if (iStack_44 < 1) {
            iStack_44 = -iStack_44;
          }
          else {
            local_48 = local_48 - iStack_44;
            FUN_00d23690();
            local_40 = local_40 + iStack_44;
            iStack_44 = 0;
          }
        }
        lVar13 = (int64_t)local_48;
        local_48 = local_48 + 1;
        if (*(int *)((int64_t)local_50 + 0xc) <= local_48) break;
        local_60 = *(int64_t **)(local_50[2] + 8 + lVar13 * 8);
        pvVar15 = _pthread_getspecific((void*)local_50[2]);
        if (pvVar15 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar40 = (double)FUN_01259650();
        if (((double)plVar16[4] <= dVar40) && (dVar40 < (double)plVar16[5])) {
          local_e0 = local_60;
          local_d8 = '\0';
          FUN_00d21140();
          if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      plVar14 = local_50;
      FUN_001159b0();
      pVar11 = (void*)plVar14;
      if ((((double)plVar16[5] == g_023b2568) && (!NAN((double)plVar16[5]) && !NAN(g_023b2568)))
         && (*(int *)(plVar16[8] + 0xc) != 0)) {
        pvVar15 = _pthread_getspecific(pVar11);
        if (pvVar15 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d23340();
        plVar14 = local_60;
        local_e0 = (int64_t *)CONCAT71(local_e0._1_7_,(char)local_58);
        ppuVar27 = (void**)&local_e0;
        ppuVar17 = &local_58;
        if ((char)local_58 == '\0') {
          ppuVar17 = ppuVar27;
        }
        *(void*)ppuVar17 = 0;
        if (((char)local_58 != '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar15 = _pthread_getspecific((void*)ppuVar27);
        if (pvVar15 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01259650();
        pVar11 = 0;
        uVar18 = FUN_016cb690(0,0);
        *(void*)((int64_t)plVar16 + 0x14) = uVar18;
        if (((char)local_e0 != '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar15 = _pthread_getspecific(pVar11);
        if ((pvVar15 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar11 = (void*)local_88;
        }
        lVar13 = FUN_016c98e0();
        plVar16[5] = lVar13;
      }
      local_58 = (void*)((uint64_t)local_58 & 0xffffffffffffff00);
      local_60 = plVar16;
      FUN_00d21140();
      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      pvVar15 = _pthread_getspecific(pVar11);
      if (pvVar15 != (void *)0x0) {
        FUN_00e8b990();
      }
      plVar14 = (int64_t *)&local_1e0;
      uVar22 = 0;
      FUN_016ca9d0();
      plVar37 = local_60;
      if (local_60 == plVar26) {
LAB_0141fead:
      }
      else {
        if ((char)local_58 != '\0') {
          if (plVar26 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar26 = plVar37;
          if (plVar37 == (int64_t *)0x0) break;
          goto LAB_0141f879;
        }
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (plVar26 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar26 = plVar37;
          goto LAB_0141fead;
        }
        plVar26 = plVar37;
      }
      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    } while (plVar26 != (int64_t *)0x0);
    pcVar5 = g_025f0db0;
    pcVar4 = g_0258a688;
    pcVar3 = g_025683d8;
    if (*(int64_t *)(this_ptr + 0x78) != 0) {
      local_d8 = '\0';
      local_e0 = (int64_t *)0x0;
      local_c8 = 0xffffffff;
      local_c0 = 0;
      local_210 = (void*)(this_ptr + 0x70);
      local_d0 = *(int64_t *)(this_ptr + 0x78);
      while( true ) {
        if (local_c8._4_4_ != 0) {
          if (local_c8._4_4_ < 1) {
            iVar29 = -local_c8._4_4_;
          }
          else {
            local_c8 = CONCAT44(local_c8._4_4_,(int)local_c8 - local_c8._4_4_);
            FUN_00d23690();
            local_c0 = local_c0 + local_c8._4_4_;
            iVar29 = 0;
          }
          local_c8 = CONCAT44(iVar29,(int)local_c8);
        }
        lVar13 = (int64_t)(int)local_c8;
        iVar29 = (int)local_c8 + 1;
        local_c8 = CONCAT44(local_c8._4_4_,iVar29);
        if (*(int *)(local_d0 + 0xc) <= iVar29) break;
        local_e0 = *(int64_t **)(*(int64_t *)(local_d0 + 0x10) + 8 + lVar13 * 8);
        local_224 = 0xffffffff;
        local_220 = 0xffffffff;
        if ((int64_t *)local_e0[8] != (int64_t *)0x0) {
          local_58 = (void*)((uint64_t)local_58 & 0xffffffffffffff00);
          local_60 = (int64_t *)0x0;
          local_48 = -1;
          iStack_44 = 0;
          local_40 = 0;
          local_50 = (int64_t *)local_e0[8];
          while( true ) {
            if (iStack_44 != 0) {
              if (iStack_44 < 1) {
                iStack_44 = -iStack_44;
              }
              else {
                local_48 = local_48 - iStack_44;
                FUN_00d23690();
                local_40 = local_40 + iStack_44;
                iStack_44 = 0;
              }
            }
            lVar13 = (int64_t)local_48;
            local_48 = local_48 + 1;
            if (*(int *)((int64_t)local_50 + 0xc) <= local_48) break;
            lVar19 = local_50[2];
            local_60 = *(int64_t **)(lVar19 + 8 + lVar13 * 8);
            pvVar15 = _pthread_getspecific((void*)lVar19);
            pVar11 = (void*)lVar19;
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar7 = FUN_01263cf0();
            if (cVar7 == '\0') {
              pvVar15 = _pthread_getspecific(pVar11);
              if ((pvVar15 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                pVar11 = (void*)local_88;
              }
              pvVar15 = _pthread_getspecific(pVar11);
              if (pvVar15 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_70 = (int64_t *)FUN_01259650();
              local_b8 = (int64_t *)CONCAT44(local_b8._4_4_,1);
              FUN_00e7c4f0();
              pVar11 = (void*)&local_224;
              plVar14 = (int64_t *)FUN_016cb9d0((int)local_70,0);
              pvVar15 = _pthread_getspecific(pVar11);
              if (pvVar15 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_80 = (int64_t *)FUN_016cac90(&local_220,1);
              local_b8 = plVar14;
              FUN_00e7b970();
              plVar14 = local_b8;
              local_b8 = (int64_t *)FUN_00e7bcc0();
              FUN_00e7bac0();
              iVar9 = FUN_00e7cea0();
              local_b8 = plVar14;
              FUN_00e7bac0();
              uVar10 = FUN_00e7cea0();
              fVar39 = g_02390124;
              uVar22 = (uint64_t)uVar10;
              iVar29 = *(int *)(local_e0[9] + 0x18);
              iVar32 = iVar29 + 3;
              if (-1 < iVar29) {
                iVar32 = iVar29;
              }
              uVar35 = iVar32 >> 2;
              uVar31 = -uVar35;
              if (0 < (int)uVar35) {
                uVar31 = uVar35;
              }
              if ((int)(uVar10 - iVar9) <= (int)(uVar10 + iVar9)) {
                lVar13 = *(int64_t *)(local_e0[9] + 0x10);
                iVar32 = iVar9 * 2 + 1;
                iVar29 = -iVar9;
                do {
                  iVar33 = -iVar29;
                  if (0 < iVar29) {
                    iVar33 = iVar29;
                  }
                  iVar30 = (int)(uVar10 + iVar29) % (int)uVar35;
                  lVar19 = (int64_t)(int)((iVar30 >> 0x1f & uVar31) + iVar30);
                  *(float *)(lVar13 + lVar19 * 4) =
                       (fVar39 - (float)iVar33 / (float)iVar9) + *(float *)(lVar13 + lVar19 * 4);
                  iVar29 = iVar29 + 1;
                  iVar32 = iVar32 + -1;
                } while (iVar32 != 0);
              }
            }
          }
          FUN_001159b0();
        }
        puVar20 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar20 = &g_025f0d98;
        puVar20[2] = 0;
        puVar20[3] = 0;
        puVar20[4] = 0;
        puVar20[5] = 0;
        puVar20[6] = 0;
        puVar20[7] = 0;
        (*pcVar5)();
        iVar29 = *(int *)(local_e0[9] + 0x18);
        iVar32 = iVar29 + 3;
        if (-1 < iVar29) {
          iVar32 = iVar29;
        }
        FUN_015c1480(g_02390d30,iVar32 >> 2);
        local_90 = puVar20;
        FUN_015b3350(0);
        plVar14 = local_60;
        if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b00();
          if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00c8e710();
        plVar26 = local_60;
        if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b00();
          if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00c92170();
        FUN_00c92160();
        plVar37 = (int64_t *)local_e0[10];
        if (plVar37 == plVar26) {
          if (plVar26 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        else {
          local_e0[10] = (int64_t)plVar26;
          if (plVar37 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        local_58 = (void*)((uint64_t)local_58 & 0xffffffffffffff00);
        local_60 = (int64_t *)0x0;
        local_50 = plVar14;
        local_48 = -1;
        iStack_44 = 0;
        local_40 = 0;
        while( true ) {
          sVar34 = (size_t)uVar22;
          lVar13 = (int64_t)local_48;
          local_48 = local_48 + 1;
          if (*(int *)((int64_t)local_50 + 0xc) <= local_48) break;
          local_60 = *(int64_t **)(local_50[2] + 8 + lVar13 * 8);
          lVar13 = local_e0[10];
          uVar18 = FUN_00e7d000((int)local_60[2],g_023b67d8);
          iVar29 = *(int *)(lVar13 + 0x18);
          FUN_00c8e340(extraout_XMM0_Da,1);
          *(void*)(*(int64_t *)(lVar13 + 0x10) + (int64_t)iVar29) = uVar18;
          if (iStack_44 != 0) {
            if (iStack_44 < 0) {
              iStack_44 = -iStack_44;
            }
            else {
              local_48 = local_48 - iStack_44;
              FUN_00d23690();
              local_40 = local_40 + iStack_44;
              iStack_44 = 0;
            }
          }
        }
        FUN_0142bde0();
        if ((7 < *(int *)(local_e0[9] + 0x18)) &&
           (pfVar28 = *(float **)(local_e0[9] + 0x10), pfVar28[1] <= *pfVar28)) {
          lVar13 = local_e0[10];
          if (0xe < *(int *)(lVar13 + 0x18) + 7U) {
            lVar13 = *(int64_t *)(lVar13 + 0x10);
            local_80 = (int64_t *)CONCAT44(local_80._4_4_,1);
            local_b8 = (int64_t *)FUN_00e7bcc0();
            local_60 = (int64_t *)FUN_00e7c4f0();
            if (((*(int *)(lVar13 + 4) == 0) || ((uint64_t)local_60 >> 0x20 == 0)) ||
               (cVar7 = FUN_00e7c020(), cVar7 == '\0')) goto LAB_014205f0;
            lVar13 = local_e0[10];
          }
          uVar18 = FUN_00e7bcc0();
          iVar29 = *(int *)(lVar13 + 0x18);
          FUN_00c8e340(extraout_XMM0_Da_00,1);
          puVar21 = *(void**)(lVar13 + 0x10);
          _memmove(pfVar28,(void *)(int64_t)iVar29,sVar34);
          *puVar21 = uVar18;
        }
LAB_014205f0:
        puVar21 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar21 = &g_025683c0;
        (*pcVar3)();
        FUN_00c92170();
        FUN_00c92160();
        uVar18 = FUN_00e7bcc0();
        iVar29 = *(int *)(puVar21 + 3);
        FUN_00c8e340(extraout_XMM0_Da_01,1);
        *(void*)(puVar21[2] + (int64_t)iVar29) = uVar18;
        uVar18 = FUN_00e7bcc0();
        iVar29 = *(int *)(puVar21 + 3);
        FUN_00c8e340(extraout_XMM0_Da_02,1);
        *(void*)(puVar21[2] + (int64_t)iVar29) = uVar18;
        uVar18 = FUN_00e7bcc0();
        iVar29 = *(int *)(puVar21 + 3);
        FUN_00c8e340(extraout_XMM0_Da_03,1);
        *(void*)(puVar21[2] + (int64_t)iVar29) = uVar18;
        uVar18 = FUN_00e7bcc0();
        iVar29 = *(int *)(puVar21 + 3);
        FUN_00c8e340(extraout_XMM0_Da_04,1);
        *(void*)(puVar21[2] + (int64_t)iVar29) = uVar18;
        uVar18 = FUN_00e7bcc0();
        iVar29 = *(int *)(puVar21 + 3);
        FUN_00c8e340(extraout_XMM0_Da_05,1);
        *(void*)(puVar21[2] + (int64_t)iVar29) = uVar18;
        uVar18 = FUN_00e7bcc0();
        iVar29 = *(int *)(puVar21 + 3);
        FUN_00c8e340(extraout_XMM0_Da_06,1);
        *(void*)(puVar21[2] + (int64_t)iVar29) = uVar18;
        uVar18 = FUN_00e7bcc0();
        iVar29 = *(int *)(puVar21 + 3);
        FUN_00c8e340(extraout_XMM0_Da_07,1);
        *(void*)(puVar21[2] + (int64_t)iVar29) = uVar18;
        uVar18 = FUN_00e7bcc0();
        iVar29 = *(int *)(puVar21 + 3);
        uVar38 = FUN_00c8e340();
        *(void*)(puVar21[2] + (int64_t)iVar29) = uVar18;
        uVar22 = *(uint64_t *)(this_ptr + 0x70) >> 0x20;
        local_170 = puVar21;
        if (uVar22 != 0) {
          iVar29 = *(int *)(puVar21 + 3);
          iVar32 = iVar29 + 7;
          if (-1 < iVar29) {
            iVar32 = iVar29;
          }
          if (7 < iVar29) {
            iVar32 = iVar32 >> 3;
            iVar29 = *(int *)(puVar21[2] + 4);
            lVar13 = puVar21[2];
            while( true ) {
              iVar32 = iVar32 + -1;
              if (((iVar29 != 0) && ((int)uVar22 != 0)) &&
                 (cVar7 = FUN_00e7c000(), uVar38 = extraout_XMM0_Da_08, cVar7 != '\0')) {
                if (local_170 == (void*)0x0) goto LAB_01420aac;
                goto LAB_01420858;
              }
              if (iVar32 == 0) break;
              uVar22 = (uint64_t)*(uint *)(this_ptr + 0x74);
              iVar29 = *(int *)(lVar13 + 0xc);
              lVar13 = lVar13 + 8;
            }
            iVar29 = *(int *)(local_170 + 3);
          }
          puVar21 = local_170;
          FUN_00c8e340(uVar38,1);
          *(void*)(puVar21[2] + (int64_t)iVar29) = *local_210;
        }
LAB_01420858:
        local_58 = local_170;
        local_50 = (int64_t *)0xffffffff;
        local_48 = 0;
        local_50._4_4_ = 0;
        while( true ) {
          iVar29 = 0;
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar29 = -local_50._4_4_;
            }
            else {
              iVar29 = (int)local_50 - local_50._4_4_;
              local_50 = (int64_t *)CONCAT44(local_50._4_4_,iVar29);
              FUN_00e7b4e0();
              FUN_00c921e0();
              local_48 = local_48 + local_50._4_4_;
              iVar29 = 0;
            }
            local_50 = (int64_t *)CONCAT44(iVar29,(int)local_50);
          }
          lVar13 = (int64_t)(int)local_50;
          iVar33 = (int)local_50 + 1;
          local_50 = (int64_t *)CONCAT44(local_50._4_4_,iVar33);
          iVar32 = *(int *)(local_58 + 3);
          iVar9 = iVar32 + 7;
          if (-1 < iVar32) {
            iVar9 = iVar32;
          }
          if (iVar9 >> 3 <= iVar33) break;
          local_60 = *(int64_t **)(local_58[2] + 8 + lVar13 * 8);
          lVar13 = this_ptr;
          if ((*(int *)(this_ptr + 0x74) == 0) ||
             (((uint64_t)local_60 >> 0x20 != 0 && (cVar7 = FUN_00e7c000(), cVar7 != '\0')))) {
            pVar11 = (void*)lVar13;
            plVar26 = (int64_t *)FUN_00e8fc40();
            FUN_0142a380();
            (**(code **)(*plVar26 + 0x18))();
            plVar26[2] = (int64_t)local_e0;
            plVar26[5] = (int64_t)local_60;
            pvVar15 = _pthread_getspecific(pVar11);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar38 = FUN_017c4300();
            FUN_017c3c30(uVar38,local_60);
            plVar37 = (int64_t *)plVar26[3];
            plVar16 = plVar37;
            if (plVar37 != local_b8) {
              if (local_b0[0] == '\0') {
                if (local_b8 == (int64_t *)0x0) {
                  plVar16 = (int64_t *)0x0;
                  goto LAB_014209d3;
                }
                FUN_00d50b00();
                plVar37 = (int64_t *)plVar26[3];
                plVar26[3] = (int64_t)local_b8;
                plVar16 = local_b8;
              }
              else {
                local_b0[0] = '\0';
                plVar16 = local_b8;
LAB_014209d3:
                plVar26[3] = (int64_t)plVar16;
              }
              if (plVar37 != (int64_t *)0x0) {
                FUN_00d50b20();
                plVar16 = local_b8;
              }
            }
            if ((local_b0[0] != '\0') && (plVar16 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_b0[0] = '\0';
            local_b8 = plVar26;
            FUN_00d21140();
            if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01426870();
            FUN_00d50b20();
          }
        }
        if (iVar29 != 0) {
          FUN_00e7b4e0();
          FUN_00c921e0();
        }
LAB_01420aac:
        if ((int64_t *)local_e0[0xd] == (int64_t *)0x0) {
          iVar29 = -1;
LAB_01420cb6:
          iVar32 = iVar29;
        }
        else {
          local_b0[0] = '\0';
          local_b8 = (int64_t *)0x0;
          local_a0 = 0xffffffff;
          local_98 = 0;
          iVar32 = -1;
          local_a0._4_4_ = 0;
          local_110 = (int64_t *)CONCAT44(local_110._4_4_,g_02391078);
          iVar29 = -1;
          local_a8 = (int64_t *)local_e0[0xd];
          fVar39 = g_02391078;
          while( true ) {
            local_70 = (int64_t *)CONCAT44(local_70._4_4_,fVar39);
            if (local_a0._4_4_ != 0) {
              if (local_a0._4_4_ < 1) {
                iVar9 = -local_a0._4_4_;
              }
              else {
                iVar9 = (void*)local_a0 - local_a0._4_4_;
                local_a0 = CONCAT44(local_a0._4_4_,iVar9);
                FUN_00d23690();
                local_98 = local_98 + local_a0._4_4_;
                iVar9 = 0;
              }
              local_a0 = CONCAT44(iVar9,(void*)local_a0);
            }
            lVar13 = (int64_t)(int)(void*)local_a0;
            iVar9 = (void*)local_a0 + 1;
            local_a0 = CONCAT44(local_a0._4_4_,iVar9);
            if (*(int *)((int64_t)local_a8 + 0xc) <= iVar9) break;
            local_b8 = *(int64_t **)(local_a8[2] + 8 + lVar13 * 8);
            fVar39 = (float)FUN_014274d0();
            plVar26 = (int64_t *)local_b8[4];
            if (plVar26 == (int64_t *)0x0) {
LAB_01420c50:
              if (fVar39 < local_110._0_4_) {
                iVar32 = local_98 + (void*)local_a0;
                local_110 = (int64_t *)CONCAT44(local_110._4_4_,fVar39);
              }
              fVar39 = local_70._0_4_;
            }
            else {
              local_58 = (void*)((uint64_t)local_58 & 0xffffffffffffff00);
              local_60 = (int64_t *)0x0;
              iStack_44 = 0;
              local_40 = 0;
              local_48 = 0;
              local_68 = (int64_t *)CONCAT44(local_68._4_4_,fVar39);
              if ((int)*(uint *)((int64_t)plVar26 + 0xc) < 1) {
                iVar9 = 0;
              }
              else {
                uVar22 = 0;
                iVar9 = 0;
                plVar37 = (int64_t *)0x0;
                do {
                  local_60 = *(int64_t **)(plVar26[2] + uVar22 * 8);
                  if (plVar37 != (int64_t *)0x0) {
                    iVar9 = iVar9 + (uint)(*(int *)((int64_t)plVar37 + 0xc) ==
                                          *(int *)((int64_t)local_60 + 0xc));
                  }
                  if (local_60 != plVar37) {
                    plVar37 = local_60;
                  }
                  uVar22 = uVar22 + 1;
                  local_48 = (int)uVar22;
                } while (*(uint *)((int64_t)plVar26 + 0xc) != uVar22);
              }
              local_50 = plVar26;
              FUN_0142bf20();
              fVar39 = local_68._0_4_;
              if (iVar9 == 0) goto LAB_01420c50;
              fVar39 = local_70._0_4_;
              if (local_68._0_4_ < local_70._0_4_) {
                iVar29 = local_98 + (void*)local_a0;
                fVar39 = local_68._0_4_;
              }
            }
          }
          FUN_0142be80();
          if (iVar32 == -1) goto LAB_01420cb6;
        }
        plVar26 = (int64_t *)(int64_t)iVar32;
        lVar13 = *(int64_t *)(*(int64_t *)(local_e0[0xd] + 0x10) + (int64_t)plVar26 * 8);
        if (lVar13 != 0) {
          FUN_00d50b00();
        }
        local_1a0 = lVar13;
        pvVar15 = _pthread_getspecific((void*)plVar26);
        if (pvVar15 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d51d20();
        local_68 = local_60;
        if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b00();
          if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        puVar21 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar21 = local_1f8;
        (*local_1f0)();
        local_1b8 = puVar21;
        if (*(int64_t **)(local_1a0 + 0x20) != (int64_t *)0x0) {
          local_58 = (void*)((uint64_t)local_58 & 0xffffffffffffff00);
          local_60 = (int64_t *)0x0;
          local_48 = -1;
          iStack_44 = 0;
          local_40 = 0;
          local_50 = *(int64_t **)(local_1a0 + 0x20);
          while( true ) {
            if (iStack_44 != 0) {
              if (iStack_44 < 1) {
                iStack_44 = -iStack_44;
              }
              else {
                local_48 = local_48 - iStack_44;
                FUN_00d23690();
                local_40 = local_40 + iStack_44;
                iStack_44 = 0;
              }
            }
            lVar13 = (int64_t)local_48;
            local_48 = local_48 + 1;
            if (*(int *)((int64_t)local_50 + 0xc) <= local_48) break;
            local_60 = *(int64_t **)(local_50[2] + 8 + lVar13 * 8);
            pvVar15 = _pthread_getspecific((void*)local_50[2]);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017c4410();
            lVar13 = local_b8[2];
            plVar26 = *(int64_t **)(lVar13 + (int64_t)*(int *)((int64_t)local_60 + 0xc) * 8);
            if (plVar26 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            pVar11 = (void*)lVar13;
            if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar15 = _pthread_getspecific(pVar11);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_00e7c860();
            FUN_017c3290();
            local_b0[0] = '\0';
            local_b8 = plVar26;
            FUN_00d21140();
            if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar26 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          plVar26 = local_50;
          FUN_0142bf20();
        }
        if (*(int *)(this_ptr + 0x74) == 0) {
          pvVar15 = _pthread_getspecific((void*)plVar26);
          if ((pvVar15 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            plVar26 = local_68;
          }
          FUN_017c4410();
          uVar10 = *(uint *)((int64_t)local_60 + 0xc);
          if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (0 < (int)uVar10) {
            lVar13 = (uint64_t)uVar10 + 1;
            do {
              uVar10 = uVar10 - 1;
              pvVar15 = _pthread_getspecific((void*)plVar26);
              if (pvVar15 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_017c4410();
              plVar26 = (int64_t *)local_60[2];
              plVar37 = (int64_t *)plVar26[uVar10];
              if (plVar37 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_58 = (void*)((uint64_t)local_58 & 0xffffffffffffff00);
              local_60 = plVar37;
              cVar7 = FUN_00d23d70();
              if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar7 == '\0') {
                pvVar15 = _pthread_getspecific((void*)plVar26);
                if ((pvVar15 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                  plVar26 = local_68;
                }
                FUN_017c4440();
              }
              if (plVar37 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              lVar13 = lVar13 + -1;
            } while (1 < lVar13);
          }
        }
        plVar6 = local_68;
        plVar16 = local_e0;
        plVar37 = (int64_t *)local_e0[7];
        if (plVar37 != local_68) {
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          plVar16[7] = (int64_t)plVar6;
          if (plVar37 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        local_60 = *(int64_t **)((int64_t)local_e0 + 0x14);
        FUN_00e7b970();
        plVar37 = local_60;
        pvVar15 = _pthread_getspecific((void*)plVar26);
        if ((pvVar15 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          plVar26 = local_68;
        }
        local_80 = (int64_t *)FUN_017c4300();
        local_60 = plVar37;
        FUN_00e7bdc0();
        plVar37 = local_60;
        pvVar15 = _pthread_getspecific((void*)plVar26);
        if ((pvVar15 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          plVar26 = local_68;
        }
        FUN_017c4410();
        local_108 = (int64_t *)CONCAT44(local_108._4_4_,*(void*)((int64_t)local_60 + 0xc));
        local_b8 = plVar37;
        FUN_00e7c2a0();
        FUN_00e7cea0();
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00c8e710();
        plVar37 = local_60;
        if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b00();
          if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00c92170();
        FUN_00c92160();
        plVar16 = (int64_t *)local_e0[0xb];
        if (plVar16 == plVar37) {
          if (plVar37 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        else {
          local_e0[0xb] = (int64_t)plVar37;
          if (plVar16 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_00c8e710();
        plVar37 = local_60;
        if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b00();
          if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00c92170();
        FUN_00c92160();
        plVar16 = (int64_t *)local_e0[0xc];
        if (plVar16 == plVar37) {
          if (plVar37 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        else {
          local_e0[0xc] = (int64_t)plVar37;
          if (plVar16 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        local_1d8 = *(int64_t **)((int64_t)local_e0 + 0xc);
        local_1ac = 0xffffffff;
        if (((uint64_t)local_1d8 >> 0x20 != 0) && ((int)local_e0[3] != 0)) {
          while (cVar7 = FUN_00e7c020(), cVar7 == '\0') {
            pvVar15 = _pthread_getspecific((void*)plVar26);
            if ((pvVar15 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
              plVar26 = local_68;
            }
            FUN_017c4410();
            plVar37 = local_60;
            if ((char)local_58 == '\0') {
              if (local_60 != (int64_t *)0x0) {
                FUN_00d50b00();
                if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01421470;
              }
            }
            else if (local_60 != (int64_t *)0x0) {
LAB_01421470:
              local_58 = (void*)((uint64_t)local_58 & 0xffffffffffffff00);
              local_60 = (int64_t *)0x0;
              local_50 = plVar37;
              local_48 = -1;
              iStack_44 = 0;
              local_40 = 0;
              while( true ) {
                lVar13 = (int64_t)local_48;
                local_48 = local_48 + 1;
                if (*(int *)((int64_t)local_50 + 0xc) <= local_48) break;
                lVar19 = local_50[2];
                local_60 = *(int64_t **)(lVar19 + 8 + lVar13 * 8);
                pvVar15 = _pthread_getspecific((void*)lVar19);
                pVar11 = (void*)lVar19;
                if (pvVar15 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_80 = (int64_t *)FUN_017c3170();
                local_b8 = local_1d8;
                FUN_00e7b820();
                plVar26 = local_b8;
                pvVar15 = _pthread_getspecific(pVar11);
                if ((pvVar15 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  pVar11 = (void*)local_88;
                }
                local_70 = (int64_t *)FUN_016c98e0();
                pvVar15 = _pthread_getspecific(pVar11);
                if ((pvVar15 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  pVar11 = (void*)local_88;
                }
                local_110 = (int64_t *)FUN_016c9380((int)local_70);
                pvVar15 = _pthread_getspecific(pVar11);
                if (pvVar15 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_150 = (void*)FUN_017c4c00();
                lVar13 = local_e0[0xb];
                iVar29 = *(int *)(lVar13 + 0x18);
                uVar38 = FUN_00c8e340((int)local_150,1);
                *(int64_t **)(*(int64_t *)(lVar13 + 0x10) + (int64_t)iVar29) = plVar26;
                lVar13 = local_e0[0xc];
                iVar29 = *(int *)(lVar13 + 0x18);
                FUN_00c8e340(uVar38,1);
                *(double *)(*(int64_t *)(lVar13 + 0x10) + (int64_t)iVar29) =
                     (double)local_70 + (double)local_110 * (double)local_150;
                if (iStack_44 != 0) {
                  if (iStack_44 < 0) {
                    iStack_44 = -iStack_44;
                  }
                  else {
                    local_48 = local_48 - iStack_44;
                    FUN_00d23690();
                    local_40 = local_40 + iStack_44;
                    iStack_44 = 0;
                  }
                }
              }
              plVar26 = local_50;
              FUN_0142bf90();
              FUN_00d50b20();
            }
            pvVar15 = _pthread_getspecific((void*)plVar26);
            if ((pvVar15 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
              plVar26 = local_68;
            }
            local_60 = (int64_t *)FUN_017c4300();
            FUN_00e7b820();
            if ((local_1d8._4_4_ == 0) || ((int)local_e0[3] == 0)) break;
          }
        }
        local_1c8 = 0;
        lVar13 = local_e0[8];
        if (lVar13 != 0) {
          FUN_00d50b00();
        }
        local_1c8 = '\x01';
        local_2a8 = 0;
        local_2a0 = '\0';
        local_1d0 = lVar13;
        FUN_01271d60(&local_2a8,0);
        local_178 = local_60;
        if ((char)local_58 == '\0') {
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b00();
            if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_58 = (void*)((uint64_t)local_58 & 0xffffffffffffff00);
        }
        if ((local_2a0 != '\0') && (local_2a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1c8 != '\0') && (local_1d0 != 0)) {
          FUN_00d50b20();
        }
        if (local_178 != (int64_t *)0x0) {
          local_58 = (void*)((uint64_t)local_58 & 0xffffffffffffff00);
          local_60 = (int64_t *)0x0;
          local_50 = local_178;
          iStack_44 = 0;
          local_40 = 0;
          uVar10 = *(uint *)((int64_t)local_178 + 0xc);
          if ((int)uVar10 < 1) {
            uVar22 = 0;
          }
          else {
            uVar31 = uVar10 & 3;
            uVar22 = 0;
            if (2 < uVar10 - 1) {
              uVar22 = 0;
              do {
                local_60 = *(int64_t **)(local_178[2] + 0x18 + uVar22 * 8);
                uVar22 = uVar22 + 4;
              } while ((uVar10 & 0xfffffffc) != (uint)uVar22);
            }
            if (uVar31 != 0) {
              uVar22 = uVar22 & 0xffffffff;
              do {
                local_60 = *(int64_t **)(local_178[2] + uVar22 * 8);
                uVar22 = uVar22 + 1;
                uVar31 = uVar31 - 1;
              } while (uVar31 != 0);
            }
          }
          local_48 = (int)uVar22;
          FUN_01a02020();
        }
        puVar21 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar21 = &g_0258a670;
        (*pcVar4)();
        local_150 = puVar21;
        plVar26 = (int64_t *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar26 = (int64_t)&g_0258a670;
        (*pcVar4)();
        local_110 = plVar26;
        FUN_00e38130(1,1,1);
        pVar11 = 1;
        uVar22 = 1;
        FUN_00e38130();
        if (local_178 != (int64_t *)0x0) {
          local_58 = (void*)((uint64_t)local_58 & 0xffffffffffffff00);
          local_60 = (int64_t *)0x0;
          local_50 = local_178;
          local_48 = -1;
          iStack_44 = 0;
          local_40 = 0;
          while( true ) {
            if (iStack_44 != 0) {
              if (iStack_44 < 1) {
                iStack_44 = -iStack_44;
              }
              else {
                local_48 = local_48 - iStack_44;
                FUN_00d23690();
                local_40 = local_40 + iStack_44;
                iStack_44 = 0;
              }
            }
            lVar13 = (int64_t)local_48;
            local_48 = local_48 + 1;
            if (*(int *)((int64_t)local_50 + 0xc) <= local_48) break;
            local_60 = *(int64_t **)(local_50[2] + 8 + lVar13 * 8);
            if (local_60 != (int64_t *)0x0) {
              local_b0[0] = '\0';
              local_b8 = (int64_t *)0x0;
              local_a0 = 0xffffffff;
              local_98 = 0;
              local_a0._4_4_ = 0;
              bVar1 = false;
              plVar26 = (int64_t *)0x0;
              local_a8 = local_60;
              while( true ) {
                if (local_a0._4_4_ != 0) {
                  if (local_a0._4_4_ < 1) {
                    iVar29 = -local_a0._4_4_;
                  }
                  else {
                    iVar29 = (void*)local_a0 - local_a0._4_4_;
                    local_a0 = CONCAT44(local_a0._4_4_,iVar29);
                    FUN_00d23690();
                    local_98 = local_98 + local_a0._4_4_;
                    iVar29 = 0;
                  }
                  local_a0 = CONCAT44(iVar29,(void*)local_a0);
                }
                lVar13 = (int64_t)(int)(void*)local_a0;
                pVar11 = (void*)local_a0 + 1;
                local_a0 = CONCAT44(local_a0._4_4_,pVar11);
                iVar29 = *(int *)((int64_t)local_a8 + 0xc);
                if (iVar29 <= (int)pVar11) break;
                local_b8 = *(int64_t **)(local_a8[2] + 8 + lVar13 * 8);
                if (local_98 == 0 && pVar11 == 0) {
                  local_78 = '\0';
                  local_80 = local_b8;
                  FUN_00d21140();
                  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  iVar29 = *(int *)((int64_t)local_a8 + 0xc);
                  pVar11 = (void*)local_a0;
                }
                pVar25 = iVar29 - 1;
                if (pVar11 == pVar25) {
                  local_80 = local_b8;
                  local_78 = '\0';
                  FUN_00d21140();
                  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                pvVar15 = _pthread_getspecific(pVar25);
                if (pvVar15 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125e930();
                plVar37 = local_80;
                if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar37 == (int64_t *)0x0) {
                  if (plVar26 == (int64_t *)0x0) {
LAB_01421ea7:
                    plVar26 = (int64_t *)0x0;
                  }
                  else {
                    bVar2 = !bVar1;
                    bVar1 = false;
                    if (bVar2) goto LAB_01421ea7;
                    plVar26 = (int64_t *)0x0;
                    FUN_00d50b20();
                    bVar1 = false;
                  }
                }
                else {
                  pvVar15 = _pthread_getspecific(pVar25);
                  if (pvVar15 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0125e930();
                  pvVar15 = _pthread_getspecific(pVar25);
                  if (pvVar15 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar38 = FUN_0152ebe0();
                  plVar37 = local_80;
                  if (local_78 == '\0') {
                    if (((local_80 != (int64_t *)0x0) &&
                        (uVar38 = FUN_00d50b00(), local_78 != '\0')) &&
                       (local_80 != (int64_t *)0x0)) {
                      uVar38 = FUN_00d50b20();
                    }
                  }
                  else {
                    local_78 = '\0';
                  }
                  if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
                    uVar38 = FUN_00d50b20();
                  }
                  if (plVar26 != (int64_t *)0x0) {
                    local_290 = '\0';
                    local_288 = plVar37;
                    local_280 = '\0';
                    local_298 = plVar26;
                    uVar38 = FUN_01427640(uVar38,&local_288);
                    if ((local_280 != '\0') && (local_288 != (int64_t *)0x0)) {
                      uVar38 = FUN_00d50b20();
                    }
                    if ((local_290 != '\0') && (local_298 != (int64_t *)0x0)) {
                      uVar38 = FUN_00d50b20();
                    }
                    local_278 = plVar37;
                    local_270 = '\0';
                    local_260 = '\0';
                    local_268 = plVar26;
                    FUN_01427640(uVar38,&local_268);
                    if ((local_260 != '\0') && (local_268 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_270 != '\0') && (local_278 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  if (plVar37 == plVar26) {
                    plVar16 = plVar26;
                    bVar2 = bVar1;
                    if (bVar1) goto joined_r0x01421e95;
                    if (plVar37 == (int64_t *)0x0) goto LAB_01421ac9;
                    bVar1 = true;
                    FUN_00d50b00();
                  }
                  else {
                    if (plVar37 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    bVar2 = true;
                    plVar16 = plVar37;
                    if ((bVar1) && (plVar26 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
joined_r0x01421e95:
                    bVar1 = bVar2;
                    plVar26 = plVar16;
                    if (plVar37 == (int64_t *)0x0) goto LAB_01421ac9;
                  }
                  FUN_00d50b20();
                }
LAB_01421ac9:
              }
              FUN_001159b0();
              if ((bVar1) && (plVar26 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          plVar26 = local_50;
          FUN_01a02020();
          pVar11 = (void*)plVar26;
        }
        FUN_014276f0();
        local_70 = local_60;
        if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b00();
          if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_0025e9a0();
        local_180 = local_60;
        if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b00();
          if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((int64_t *)local_e0[8] != (int64_t *)0x0) {
          local_58 = (void*)((uint64_t)local_58 & 0xffffffffffffff00);
          local_60 = (int64_t *)0x0;
          local_48 = -1;
          iStack_44 = 0;
          local_40 = 0;
          local_50 = (int64_t *)local_e0[8];
          while( true ) {
            if (iStack_44 != 0) {
              if (iStack_44 < 1) {
                iStack_44 = -iStack_44;
              }
              else {
                local_48 = local_48 - iStack_44;
                FUN_00d23690();
                local_40 = local_40 + iStack_44;
                iStack_44 = 0;
              }
            }
            lVar13 = (int64_t)local_48;
            local_48 = local_48 + 1;
            if (*(int *)((int64_t)local_50 + 0xc) <= local_48) break;
            lVar19 = local_50[2];
            local_60 = *(int64_t **)(lVar19 + 8 + lVar13 * 8);
            pvVar15 = _pthread_getspecific((void*)lVar19);
            pVar11 = (void*)lVar19;
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            plVar26 = local_b8;
            if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar26 != (int64_t *)0x0) {
              pvVar15 = _pthread_getspecific(pVar11);
              if (pvVar15 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e930();
              pvVar15 = _pthread_getspecific(pVar11);
              if (pvVar15 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0152ebe0();
              plVar26 = local_80;
              if (local_78 == '\0') {
                if (local_80 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_78 = '\0';
              }
              local_b8 = plVar26;
              local_b0[0] = '\0';
              FUN_00d21140();
              if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar26 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_b8 = local_60;
              local_b0[0] = '\0';
              FUN_00d21140();
              if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          plVar26 = local_50;
          FUN_001159b0();
          pVar11 = (void*)plVar26;
        }
        local_80 = (int64_t *)FUN_00e7bdb0();
        local_b8 = (int64_t *)CONCAT44(local_b8._4_4_,0x10);
        local_60 = *(int64_t **)((int64_t)local_e0 + 0xc);
        FUN_00e7c280();
        local_108 = local_60;
        pvVar15 = _pthread_getspecific(pVar11);
        if (pvVar15 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_208 = (double)FUN_016c92f0();
        local_60 = (int64_t *)FUN_00e7bcc0();
        local_38 = (double)FUN_00e7c860();
        local_b8 = (int64_t *)CONCAT44(local_b8._4_4_,2);
        local_60 = (int64_t *)FUN_00e7bcc0();
        local_1c0 = FUN_00e7c4f0();
        if (0 < *(int *)((int64_t)local_70 + 0xc)) {
          local_208 = local_208 * local_38;
          local_160 = (uint64_t *)(local_1a0 + 0x28);
          uVar10 = (uint)(*(int *)(this_ptr + 0x74) == 0);
          uVar23 = 0;
          local_2e8 = 0.0;
          do {
            local_258 = *(double *)(local_70[2] + (int64_t)(int)uVar23 * 8);
            lVar13 = local_180[2];
            local_250 = '\0';
            local_1a8 = uVar23;
            local_38 = local_258;
            FUN_01427790();
            plVar26 = local_60;
            if ((char)local_58 == '\0') {
              if (local_60 != (int64_t *)0x0) {
                FUN_00d50b00();
                if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              local_58 = (void*)((uint64_t)local_58 & 0xffffffffffffff00);
            }
            if ((local_250 != '\0') && (local_258 != 0.0)) {
              FUN_00d50b20();
            }
            uVar10 = uVar10 & 0xff;
            if (plVar26 != (int64_t *)0x0) {
              uVar10 = 1;
            }
            pvVar15 = _pthread_getspecific((void*)lVar13);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar40 = (double)FUN_01259650();
            local_b8 = (int64_t *)FUN_01427840();
            pvVar15 = _pthread_getspecific((void*)lVar13);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012646c0();
            local_128 = FUN_01427840();
            if (((local_128 >> 0x20 != 0) && (local_b8._4_4_ != 0)) &&
               (cVar7 = FUN_00e7c000(), cVar7 != '\0')) {
              FUN_00e7b820();
            }
            pVar11 = (void*)lVar13;
            if ((local_b8._4_4_ == 0) || (local_108._4_4_ == 0)) {
LAB_01423080:
              pvVar15 = _pthread_getspecific(pVar11);
              if ((pvVar15 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                pVar11 = SUB84(local_38,0);
              }
              FUN_015084d0();
              pvVar15 = _pthread_getspecific(pVar11);
              if ((pvVar15 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                local_38 = *(double *)
                            ((int64_t)local_38 + 0x20 +
                            (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
              }
              FUN_015085a0();
              local_2e8 = dVar40;
              local_80 = local_b8;
            }
            else {
              cVar7 = FUN_00e7c020();
              pVar11 = (void*)lVar13;
              if (cVar7 == '\0') goto LAB_01423080;
              if (plVar26 == (int64_t *)0x0) {
LAB_014225d0:
                pVar11 = (void*)lVar13;
                if ((local_80._4_4_ != 0) && (local_b8._4_4_ != 0)) {
                  bVar8 = FUN_00e7c000();
                  bVar1 = local_208 < dVar40 - local_2e8;
                  pVar11 = (void*)CONCAT71((int7)((uint64_t)lVar13 >> 8),bVar1);
                  if ((bVar8 & bVar1) == 1) goto LAB_0142261c;
                }
                goto LAB_01423080;
              }
              pvVar15 = _pthread_getspecific(pVar11);
              if (pvVar15 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_60 = (int64_t *)FUN_01507970();
              if ((((uint64_t)local_60 >> 0x20 == 0) || (local_b8._4_4_ == 0)) ||
                 (cVar7 = FUN_00e7c020(), cVar7 != '\0')) goto LAB_014225d0;
LAB_0142261c:
              local_168 = local_80;
              local_118 = (uint64_t)plVar26;
              local_e8 = uVar10;
              if ((int)local_e4 < 1) {
LAB_01422ac1:
                local_108 = local_b8;
              }
              else {
                local_168 = *(int64_t **)
                             (*(int64_t *)(local_e0[0xb] + 0x10) + (uint64_t)(local_e4 - 1) * 8);
                local_60 = *(int64_t **)
                            (*(int64_t *)(local_e0[0xb] + 0x10) + (uint64_t)local_e4 * 8);
                FUN_00e7b970();
                local_f8 = (uint64_t)local_60;
                if ((((uint64_t)local_60 >> 0x20 != 0) && (local_1c0._4_4_ != 0)) &&
                   (cVar7 = FUN_00e7c020(), cVar7 != '\0')) goto LAB_01422ac1;
                FUN_00e7bdb0();
                lVar19 = (int64_t)(int)local_e4;
                lVar13 = *(int64_t *)(local_e0[0xb] + 0x10);
                local_60 = *(int64_t **)(lVar13 + lVar19 * 8);
                FUN_00e7b970();
                local_f8 = (uint64_t)local_60;
                uVar10 = local_e8;
                if (((*(int *)(lVar13 + -4 + lVar19 * 8) == 0) || ((uint64_t)local_60 >> 0x20 == 0)
                    ) || (cVar7 = FUN_00e7c020(), uVar10 = local_e8, cVar7 == '\0')) {
LAB_01422980:
                  bVar1 = false;
                  if ((uVar10 & 1) == 0) goto LAB_01422abd;
                  local_60 = *(int64_t **)
                              (*(int64_t *)(local_e0[0xb] + 0x10) + -8 +
                              (int64_t)(int)local_e4 * 8);
                  FUN_00e7b820();
                  local_f8 = CONCAT44(local_f8._4_4_,2);
                  FUN_00e7c3c0();
                  plVar26 = local_60;
                  pVar11 = local_e4;
                  lVar19 = (int64_t)(int)local_e4;
                  pvVar15 = *(void **)(local_e0[0xc] + 0x10);
                  lVar13 = local_e0[0xb];
                  local_120 = (*(double *)((int64_t)pvVar15 + lVar19 * 8 + -8) +
                              *(double *)((int64_t)pvVar15 + lVar19 * 8)) * g_023942d0;
                  iVar29 = *(int *)(lVar13 + 0x18);
                  FUN_00c8e340(pvVar15,1);
                  lVar13 = *(int64_t *)(lVar13 + 0x10);
                  _memmove(pvVar15,(void *)(int64_t)(int)(iVar29 + pVar11 * -8),(size_t)uVar22);
                  pVar11 = local_e4;
                  *(int64_t **)(lVar13 + lVar19 * 8) = plVar26;
                  lVar13 = local_e0[0xc];
                  lVar19 = (int64_t)(int)local_e4;
                  iVar29 = *(int *)(lVar13 + 0x18);
                  FUN_00c8e340();
                  lVar13 = *(int64_t *)(lVar13 + 0x10);
                  _memmove(pvVar15,(void *)(int64_t)(int)(iVar29 + pVar11 * -8),(size_t)uVar22);
                  *(double *)(lVar13 + lVar19 * 8) = local_120;
                  local_e4 = local_e4 + 1;
                  plVar26 = (int64_t *)local_118;
                  uVar10 = local_e8;
                }
                else {
                  pvVar15 = (void *)(int64_t)(int)local_e4;
                  local_f8 = *(uint64_t *)
                              (*(int64_t *)(local_e0[0xb] + 0x10) + -8 + (int64_t)pvVar15 * 8);
                  local_60 = *(int64_t **)
                              (*(int64_t *)(local_e0[0xb] + 0x10) + (int64_t)pvVar15 * 8);
                  local_198 = *(double *)
                               (*(int64_t *)(local_e0[0xc] + 0x10) + -8 + (int64_t)pvVar15 * 8);
                  local_158 = *(double *)
                               (*(int64_t *)(local_e0[0xc] + 0x10) + (int64_t)pvVar15 * 8);
                  FUN_00e7b970();
                  FUN_00e7bdc0();
                  uVar23 = FUN_00e7cea0();
                  local_ec = 1;
                  if ((int)uVar23 < 2) goto LAB_01422980;
                  local_158 = (local_158 - local_198) / (double)(int)uVar23;
                  local_200 = uVar23;
                  do {
                    local_60 = (int64_t *)*local_160;
                    FUN_00e7c2a0();
                    local_130 = (uint64_t)local_60;
                    local_60 = (int64_t *)local_f8;
                    uVar38 = FUN_00e7b820();
                    plVar26 = local_60;
                    pVar11 = local_e4;
                    local_120 = (double)CONCAT44(local_120._4_4_,local_ec);
                    lVar13 = local_e0[0xb];
                    iVar32 = *(int *)(lVar13 + 0x18);
                    FUN_00c8e340(uVar38,1);
                    iVar29 = (pVar11 + local_120._0_4_) * 8 + -8;
                    lVar13 = *(int64_t *)(lVar13 + 0x10);
                    _memmove(pvVar15,(void *)(int64_t)(iVar32 - iVar29),(size_t)uVar22);
                    pVar11 = local_e4;
                    uVar10 = local_ec;
                    *(int64_t **)(lVar13 + iVar29) = plVar26;
                    lVar13 = local_e0[0xc];
                    iVar32 = *(int *)(lVar13 + 0x18);
                    FUN_00c8e340();
                    local_120 = (double)local_120._0_4_ * local_158 + local_198;
                    iVar29 = (uVar10 + pVar11) * 8 + -8;
                    lVar13 = *(int64_t *)(lVar13 + 0x10);
                    _memmove(pvVar15,(void *)(int64_t)(iVar32 - iVar29),(size_t)uVar22);
                    *(double *)(lVar13 + iVar29) = local_120;
                    local_ec = local_ec + 1;
                    pvVar15 = (void *)(uint64_t)local_ec;
                  } while ((int)local_ec < (int)local_200);
                  local_e4 = ((int)local_200 + local_e4) - 1;
                  bVar1 = true;
                  puVar20 = local_90;
                  plVar26 = (int64_t *)local_118;
                  uVar10 = local_e8;
LAB_01422abd:
                  if (!bVar1) goto LAB_01422ac1;
                }
              }
              iVar29 = *(int *)(local_e0[0xb] + 0x18);
              iVar32 = iVar29 + 7;
              if (-1 < iVar29) {
                iVar32 = iVar29;
              }
              lVar13 = (int64_t)(int)local_e4;
              pVar11 = local_e4;
              if ((int)local_e4 < (iVar32 >> 3) + -1) {
                local_60 = *(int64_t **)(*(int64_t *)(local_e0[0xb] + 0x10) + 8 + lVar13 * 8);
                FUN_00e7b970();
                pVar11 = (void*)lVar13;
                local_f8 = (uint64_t)local_60;
                if ((((uint64_t)local_60 >> 0x20 == 0) || (local_1c0._4_4_ == 0)) ||
                   (cVar7 = FUN_00e7c020(), cVar7 == '\0')) {
                  FUN_00e7bdb0();
                  lVar19 = (int64_t)(int)local_e4;
                  lVar13 = *(int64_t *)(local_e0[0xb] + 0x10);
                  local_60 = *(int64_t **)(lVar13 + lVar19 * 8);
                  FUN_00e7b820();
                  local_f8 = (uint64_t)local_60;
                  if ((*(int *)(lVar13 + 0xc + lVar19 * 8) == 0) ||
                     ((uint64_t)local_60 >> 0x20 == 0)) {
                    pVar11 = 0;
LAB_01422e0b:
                    if ((local_e8 & 1) != 0) {
                      local_60 = *(int64_t **)
                                  (*(int64_t *)(local_e0[0xb] + 0x10) + 8 +
                                  (int64_t)(int)local_e4 * 8);
                      FUN_00e7b820();
                      local_f8 = CONCAT44(local_f8._4_4_,2);
                      FUN_00e7c3c0();
                      plVar26 = local_60;
                      pVar11 = local_e4;
                      pvVar15 = *(void **)(local_e0[0xc] + 0x10);
                      lVar13 = local_e0[0xb];
                      local_120 = (*(double *)((int64_t)pvVar15 + (int64_t)(int)local_e4 * 8 + 8)
                                  + *(double *)((int64_t)pvVar15 + (int64_t)(int)local_e4 * 8)) *
                                  g_023942d0;
                      iVar29 = *(int *)(lVar13 + 0x18);
                      FUN_00c8e340(pvVar15,1);
                      lVar13 = *(int64_t *)(lVar13 + 0x10);
                      _memmove(pvVar15,(void *)(int64_t)(int)(iVar29 + (pVar11 + 1) * -8),
                               (size_t)uVar22);
                      pVar25 = local_e4;
                      *(int64_t **)(lVar13 + (int64_t)(int)(pVar11 + 1) * 8) = plVar26;
                      lVar13 = local_e0[0xc];
                      iVar32 = *(int *)(lVar13 + 0x18);
                      FUN_00c8e340();
                      iVar29 = pVar25 * 8 + 8;
                      lVar13 = *(int64_t *)(lVar13 + 0x10);
                      _memmove(pvVar15,(void *)(int64_t)(iVar32 - iVar29),(size_t)uVar22);
                      pVar11 = (void*)pvVar15;
                      *(double *)(lVar13 + iVar29) = local_120;
                      puVar20 = local_90;
                      plVar26 = (int64_t *)local_118;
                      uVar10 = local_e8;
                      goto LAB_01422f65;
                    }
                  }
                  else {
                    cVar7 = FUN_00e7c020();
                    if (cVar7 == '\0') {
                      pVar11 = 0;
                      goto LAB_01422e0b;
                    }
                    lVar13 = (int64_t)(int)local_e4;
                    local_f8 = *(uint64_t *)(*(int64_t *)(local_e0[0xb] + 0x10) + lVar13 * 8);
                    local_60 = *(int64_t **)(*(int64_t *)(local_e0[0xb] + 0x10) + 8 + lVar13 * 8);
                    local_198 = *(double *)(*(int64_t *)(local_e0[0xc] + 0x10) + lVar13 * 8);
                    local_158 = *(double *)(*(int64_t *)(local_e0[0xc] + 0x10) + 8 + lVar13 * 8);
                    FUN_00e7b970();
                    FUN_00e7bdc0();
                    uVar23 = FUN_00e7cea0();
                    iVar29 = (int)uVar23;
                    local_ec = 1;
                    local_21c = (void*)CONCAT71((int7)(uVar23 >> 8),1 < iVar29);
                    if (1 < iVar29) {
                      local_158 = (local_158 - local_198) / (double)iVar29;
                      local_200 = CONCAT44(local_200._4_4_,iVar29);
                      do {
                        pvVar15 = (void *)(uVar23 & 0xffffffff);
                        local_60 = (int64_t *)*local_160;
                        FUN_00e7c2a0();
                        local_130 = (uint64_t)local_60;
                        local_60 = (int64_t *)local_f8;
                        uVar38 = FUN_00e7b820();
                        plVar26 = local_60;
                        uVar10 = local_ec;
                        lVar36 = (int64_t)(int)local_ec;
                        lVar13 = local_e0[0xb];
                        lVar19 = (int64_t)(int)local_e4;
                        iVar29 = *(int *)(lVar13 + 0x18);
                        FUN_00c8e340(uVar38,1);
                        lVar13 = *(int64_t *)(lVar13 + 0x10);
                        _memmove(pvVar15,(void *)(int64_t)(iVar29 + (int)(lVar19 + lVar36) * -8),
                                 (size_t)uVar22);
                        *(int64_t **)(lVar13 + (lVar19 + lVar36) * 8) = plVar26;
                        lVar13 = local_e0[0xc];
                        lVar36 = (int64_t)(int)local_e4;
                        lVar19 = (int64_t)(int)local_ec;
                        iVar29 = *(int *)(lVar13 + 0x18);
                        FUN_00c8e340();
                        local_120 = (double)(int)uVar10 * local_158 + local_198;
                        lVar13 = *(int64_t *)(lVar13 + 0x10);
                        _memmove(pvVar15,(void *)(int64_t)(iVar29 + (int)(lVar19 + lVar36) * -8),
                                 (size_t)uVar22);
                        *(double *)(lVar13 + (lVar19 + lVar36) * 8) = local_120;
                        local_ec = local_ec + 1;
                        uVar23 = local_200;
                      } while ((int)local_ec < (int)local_200);
                    }
                    puVar20 = local_90;
                    plVar26 = (int64_t *)local_118;
                    pVar11 = local_21c;
                    if ((char)local_21c == '\0') goto LAB_01422e0b;
                  }
                  uVar10 = local_e8;
                  if ((char)pVar11 != '\0') goto LAB_01422f65;
                }
                local_108 = local_b8;
              }
LAB_01422f65:
              if (((local_108._4_4_ == 0) || (local_b8._4_4_ == 0)) ||
                 (cVar7 = FUN_00e7c020(), cVar7 == '\0')) goto LAB_01423080;
              if (-1 < (int)local_1a8) {
                uVar23 = local_1a8 & 0xffffffff;
                do {
                  local_1a8 = uVar23;
                  pvVar15 = _pthread_getspecific((void*)uVar23);
                  if (pvVar15 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_60 = (int64_t *)FUN_01507970();
                  uVar10 = local_e8;
                  if ((((uint64_t)local_60 >> 0x20 == 0) || (local_168._4_4_ == 0)) ||
                     (cVar7 = FUN_00e7c020(), uVar10 = local_e8, cVar7 != '\0')) goto LAB_0142304a;
                  uVar23 = local_1a8 - 1;
                } while (0 < (int64_t)local_1a8);
                local_1a8 = 0xffffffff;
              }
LAB_0142304a:
              local_80 = (int64_t *)FUN_00e7bdb0();
            }
            if (plVar26 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            uVar31 = (int)local_1a8 + 1;
            uVar23 = (uint64_t)uVar31;
          } while ((int)uVar31 < *(int *)((int64_t)local_70 + 0xc));
        }
        local_58 = (void*)((uint64_t)local_58 & 0xffffffffffffff00);
        local_60 = (int64_t *)0x0;
        local_50 = local_70;
        local_48 = -1;
        iStack_44 = 0;
        local_40 = 0;
LAB_01423183:
        if (iStack_44 != 0) {
          if (iStack_44 < 1) {
            iStack_44 = -iStack_44;
          }
          else {
            local_48 = local_48 - iStack_44;
            FUN_00d23690();
            local_40 = local_40 + iStack_44;
            iStack_44 = 0;
          }
        }
        iVar29 = local_40;
        iVar32 = local_48 + 1;
        local_48 = iVar32;
        if (iVar32 < *(int *)((int64_t)local_50 + 0xc)) {
          lVar13 = (int64_t)iVar32;
          local_248 = *(int64_t **)(local_50[2] + lVar13 * 8);
          local_130 = local_130 & 0xffffffffffffff00;
          local_240 = '\0';
          local_60 = local_248;
          FUN_01427790(lVar13,&local_248);
          plVar26 = local_b8;
          if (local_b8 == (int64_t *)0x0) {
            plVar26 = (int64_t *)0x0;
          }
          else {
            puVar24 = &local_130;
            if (local_b0[0] != '\0') {
              local_130 = CONCAT71(local_130._1_7_,1);
              puVar24 = (uint64_t *)local_b0;
            }
            *(void*)puVar24 = 0;
            if (local_b0[0] != '\0') {
              FUN_00d50b20();
            }
          }
          if ((local_240 != '\0') && (local_248 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pVar11 = (void*)lVar13;
          if (plVar26 == (int64_t *)0x0) {
            lVar19 = (int64_t)(iVar32 + iVar29);
            do {
              lVar19 = lVar19 + 1;
              if (*(int *)((int64_t)local_70 + 0xc) <= lVar19) break;
              pvVar15 = _pthread_getspecific((void*)lVar13);
              if (pvVar15 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_b8 = (int64_t *)FUN_01507970();
              pvVar15 = _pthread_getspecific((void*)lVar13);
              if (pvVar15 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_128 = FUN_01507970();
              if (((local_b8._4_4_ != 0) && (local_128 >> 0x20 != 0)) &&
                 (cVar7 = FUN_00e7c020(), cVar7 != '\0')) {
                pvVar15 = _pthread_getspecific((void*)lVar13);
                if (pvVar15 != (void *)0x0) {
                  FUN_00e8b990();
                }
                iVar29 = FUN_01507f00();
                pvVar15 = _pthread_getspecific((void*)lVar13);
                if (pvVar15 != (void *)0x0) {
                  FUN_00e8b990();
                }
                iVar32 = FUN_01507f00();
                pVar11 = (void*)lVar13;
                uVar31 = iVar29 - iVar32;
                uVar10 = -uVar31;
                if (0 < (int)uVar31) {
                  uVar10 = uVar31;
                }
                if (uVar10 < 3) {
                  if (*(int64_t *)(local_70[2] + lVar19 * 8) != 0) {
                    local_130 = local_130 & 0xffffffffffffff00;
                    pvVar15 = _pthread_getspecific(pVar11);
                    if (pvVar15 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    plVar26 = (int64_t *)FUN_01507970();
                    pvVar15 = _pthread_getspecific(pVar11);
                    if (pvVar15 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    local_168 = (int64_t *)FUN_01508610();
                    local_b8 = plVar26;
                    FUN_00e7b970();
                    local_128 = FUN_00e7bdb0();
                    local_f8 = CONCAT44(local_f8._4_4_,1);
                    if ((local_128 >> 0x20 == 0) || (cVar7 = FUN_00e7c6b0(), cVar7 != '\0'))
                    goto LAB_01423589;
                    goto LAB_01423285;
                  }
                  break;
                }
              }
              pvVar15 = _pthread_getspecific((void*)lVar13);
              if (pvVar15 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_128 = FUN_01507970();
              pvVar15 = _pthread_getspecific((void*)lVar13);
              if (pvVar15 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_b8 = (int64_t *)FUN_01507970();
              local_f8 = CONCAT44(local_f8._4_4_,1);
              FUN_00e7c260();
              local_168 = local_b8;
            } while (((local_128._4_4_ == 0) || ((uint64_t)local_b8 >> 0x20 == 0)) ||
                    (cVar7 = FUN_00e7c020(), cVar7 == '\0'));
          }
          else {
LAB_01423285:
            pvVar15 = _pthread_getspecific(pVar11);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar15 = _pthread_getspecific(pVar11);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01507970();
            FUN_015085a0();
LAB_01423589:
            if ((char)local_130 != '\0') {
              FUN_00d50b20();
            }
          }
          goto LAB_01423183;
        }
        FUN_0015ed50();
        if (local_180 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_110 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_150 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (local_178 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_1b8 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_1a0 != 0) {
          FUN_00d50b20();
        }
        if (local_170 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (plVar14 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (puVar20 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_0142bd40();
    }
    local_110 = *(int64_t **)(this_ptr + 0x70);
    if ((uint64_t)local_110 >> 0x20 == 0) {
      local_110 = (int64_t *)FUN_00e7bcc0();
    }
    if (local_190 != (int64_t *)0x0) {
      local_58 = (void*)((uint64_t)local_58 & 0xffffffffffffff00);
      local_60 = (int64_t *)0x0;
      local_50 = local_190;
      local_48 = -1;
      iStack_44 = 0;
      local_40 = 0;
      while( true ) {
        if (iStack_44 != 0) {
          if (iStack_44 < 1) {
            iStack_44 = -iStack_44;
          }
          else {
            local_48 = local_48 - iStack_44;
            FUN_00d23690();
            local_40 = local_40 + iStack_44;
            iStack_44 = 0;
          }
        }
        lVar13 = (int64_t)local_48;
        local_48 = local_48 + 1;
        if (*(int *)((int64_t)local_50 + 0xc) <= local_48) break;
        plVar14 = (int64_t *)local_50[2];
        local_60 = (int64_t *)plVar14[lVar13 + 1];
        pvVar15 = _pthread_getspecific((void*)plVar14);
        if (pvVar15 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01268710();
        local_70 = local_e0;
        if ((((local_d8 == '\0') && (local_e0 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_d8 != '\0')) && (local_e0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar15 = _pthread_getspecific((void*)plVar14);
        if (pvVar15 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01268dd0();
        local_68 = local_e0;
        if (((local_d8 == '\0') && (local_e0 != (int64_t *)0x0)) &&
           ((FUN_00d50b00(), local_d8 != '\0' && (local_e0 != (int64_t *)0x0)))) {
          FUN_00d50b20();
        }
        pvVar15 = _pthread_getspecific((void*)plVar14);
        if (pvVar15 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if (local_b8 == (int64_t *)0x0) {
          local_d8 = '\0';
          local_e0 = (int64_t *)0x0;
          plVar26 = (int64_t *)0x0;
        }
        else {
          pvVar15 = _pthread_getspecific((void*)plVar14);
          if (pvVar15 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar15 = _pthread_getspecific((void*)plVar14);
          if (pvVar15 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          plVar26 = local_e0;
          if (local_d8 == '\0') {
            if (local_e0 == (int64_t *)0x0) {
              plVar26 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_d8 = '\0';
          }
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_70 == (int64_t *)0x0) {
          plVar37 = (int64_t *)0x0;
        }
        else {
          pvVar15 = _pthread_getspecific((void*)plVar14);
          if ((pvVar15 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            plVar14 = local_70;
          }
          FUN_0125e930();
          if (local_b8 == (int64_t *)0x0) {
            local_d8 = '\0';
            local_e0 = (int64_t *)0x0;
            plVar37 = (int64_t *)0x0;
          }
          else {
            pvVar15 = _pthread_getspecific((void*)plVar14);
            if ((pvVar15 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
              plVar14 = local_70;
            }
            FUN_0125e930();
            pvVar15 = _pthread_getspecific((void*)plVar14);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            plVar37 = local_e0;
            if (local_d8 == '\0') {
              if (local_e0 == (int64_t *)0x0) {
                plVar37 = (int64_t *)0x0;
              }
              else {
                FUN_00d50b00();
                if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              local_d8 = '\0';
            }
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (local_68 == (int64_t *)0x0) {
          plVar16 = (int64_t *)0x0;
        }
        else {
          pvVar15 = _pthread_getspecific((void*)plVar14);
          if ((pvVar15 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            plVar14 = local_68;
          }
          FUN_0125e930();
          if (local_b8 == (int64_t *)0x0) {
            local_d8 = '\0';
            local_e0 = (int64_t *)0x0;
            plVar16 = (int64_t *)0x0;
          }
          else {
            pvVar15 = _pthread_getspecific((void*)plVar14);
            if ((pvVar15 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
              plVar14 = local_68;
            }
            FUN_0125e930();
            pvVar15 = _pthread_getspecific((void*)plVar14);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            plVar16 = local_e0;
            if (local_d8 == '\0') {
              if (local_e0 == (int64_t *)0x0) {
                plVar16 = (int64_t *)0x0;
              }
              else {
                FUN_00d50b00();
                if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              local_d8 = '\0';
            }
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (plVar26 == (int64_t *)0x0) {
          if (plVar16 != (int64_t *)0x0) goto LAB_014242b3;
        }
        else if (plVar16 != (int64_t *)0x0) {
          pvVar15 = _pthread_getspecific((void*)plVar14);
          if (pvVar15 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_e0 = (int64_t *)FUN_01507970();
          pvVar15 = _pthread_getspecific((void*)plVar14);
          if (pvVar15 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_b8 = (int64_t *)FUN_01507970();
          pVar11 = (void*)plVar14;
          if ((local_e0._4_4_ != 0) && ((uint64_t)local_b8 >> 0x20 != 0)) {
            cVar7 = FUN_00e7c020();
            pVar11 = (void*)plVar14;
            if (cVar7 == '\0') {
              local_b8 = local_110;
              if (plVar37 == (int64_t *)0x0) {
                pvVar15 = _pthread_getspecific(pVar11);
                if (pvVar15 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_e0 = (int64_t *)FUN_01507970();
                FUN_00e7b970();
                local_80 = local_e0;
                local_108 = (int64_t *)FUN_00e7bcc0();
                local_e0 = local_b8;
                FUN_00e7bac0();
                local_b8 = local_e0;
              }
              else {
                do {
                  pvVar15 = _pthread_getspecific((void*)plVar14);
                  if (pvVar15 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_e0 = (int64_t *)FUN_01507970();
                  FUN_00e7b970();
                  local_80 = local_e0;
                  local_108 = (int64_t *)FUN_00e7bcc0();
                  local_e0 = local_b8;
                  FUN_00e7bac0();
                  local_b8 = local_e0;
                  pvVar15 = _pthread_getspecific((void*)plVar14);
                  if (pvVar15 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_e0 = (int64_t *)FUN_01507970();
                  pVar11 = (void*)plVar14;
                  if ((local_80._4_4_ == 0) || ((uint64_t)local_e0 >> 0x20 == 0)) break;
                  cVar7 = FUN_00e7c020();
                  pVar11 = (void*)plVar14;
                } while (cVar7 == '\0');
              }
              pvVar15 = _pthread_getspecific(pVar11);
              if (pvVar15 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_015084d0();
              if (plVar37 != (int64_t *)0x0) {
                pvVar15 = _pthread_getspecific(pVar11);
                if (pvVar15 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_015085a0();
              }
            }
          }
          pvVar15 = _pthread_getspecific(pVar11);
          if (pvVar15 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar15 = _pthread_getspecific(pVar11);
          if (pvVar15 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01507970();
          FUN_015085a0();
LAB_014242b3:
          FUN_00d50b20();
        }
        if (plVar37 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (plVar26 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_001159b0();
    }
    if (local_188 != (int64_t *)0x0) {
      local_58 = (void*)((uint64_t)local_58 & 0xffffffffffffff00);
      local_60 = (int64_t *)0x0;
      local_50 = local_188;
      local_48 = -1;
      iStack_44 = 0;
      local_40 = 0;
      while( true ) {
        if (iStack_44 != 0) {
          if (iStack_44 < 1) {
            iStack_44 = -iStack_44;
          }
          else {
            local_48 = local_48 - iStack_44;
            FUN_00d23690();
            local_40 = local_40 + iStack_44;
            iStack_44 = 0;
          }
        }
        lVar13 = (int64_t)local_48;
        local_48 = local_48 + 1;
        if (*(int *)((int64_t)local_50 + 0xc) <= local_48) break;
        plVar14 = (int64_t *)local_50[2];
        local_60 = (int64_t *)plVar14[lVar13 + 1];
        pvVar15 = _pthread_getspecific((void*)plVar14);
        if (pvVar15 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01268710();
        local_70 = local_e0;
        if ((((local_d8 == '\0') && (local_e0 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_d8 != '\0')) && (local_e0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar15 = _pthread_getspecific((void*)plVar14);
        if (pvVar15 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01268dd0();
        local_68 = local_e0;
        if (((local_d8 == '\0') && (local_e0 != (int64_t *)0x0)) &&
           ((FUN_00d50b00(), local_d8 != '\0' && (local_e0 != (int64_t *)0x0)))) {
          FUN_00d50b20();
        }
        pvVar15 = _pthread_getspecific((void*)plVar14);
        if (pvVar15 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if (local_b8 == (int64_t *)0x0) {
          local_d8 = '\0';
          local_e0 = (int64_t *)0x0;
          plVar26 = (int64_t *)0x0;
        }
        else {
          pvVar15 = _pthread_getspecific((void*)plVar14);
          if (pvVar15 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar15 = _pthread_getspecific((void*)plVar14);
          if (pvVar15 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          plVar26 = local_e0;
          if (local_d8 == '\0') {
            if (local_e0 == (int64_t *)0x0) {
              plVar26 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_d8 = '\0';
          }
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_70 == (int64_t *)0x0) {
          plVar37 = (int64_t *)0x0;
        }
        else {
          pvVar15 = _pthread_getspecific((void*)plVar14);
          if ((pvVar15 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            plVar14 = local_70;
          }
          FUN_0125e930();
          if (local_b8 == (int64_t *)0x0) {
            local_d8 = '\0';
            local_e0 = (int64_t *)0x0;
            plVar37 = (int64_t *)0x0;
          }
          else {
            pvVar15 = _pthread_getspecific((void*)plVar14);
            if ((pvVar15 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
              plVar14 = local_70;
            }
            FUN_0125e930();
            pvVar15 = _pthread_getspecific((void*)plVar14);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            plVar37 = local_e0;
            if (local_d8 == '\0') {
              if (local_e0 == (int64_t *)0x0) {
                plVar37 = (int64_t *)0x0;
              }
              else {
                FUN_00d50b00();
                if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              local_d8 = '\0';
            }
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (local_68 == (int64_t *)0x0) {
          plVar16 = (int64_t *)0x0;
        }
        else {
          pvVar15 = _pthread_getspecific((void*)plVar14);
          if ((pvVar15 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            plVar14 = local_68;
          }
          FUN_0125e930();
          if (local_b8 == (int64_t *)0x0) {
            local_d8 = '\0';
            local_e0 = (int64_t *)0x0;
            plVar16 = (int64_t *)0x0;
          }
          else {
            pvVar15 = _pthread_getspecific((void*)plVar14);
            if ((pvVar15 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
              plVar14 = local_68;
            }
            FUN_0125e930();
            pvVar15 = _pthread_getspecific((void*)plVar14);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            plVar16 = local_e0;
            if (local_d8 == '\0') {
              if (local_e0 == (int64_t *)0x0) {
                plVar16 = (int64_t *)0x0;
              }
              else {
                FUN_00d50b00();
                if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              local_d8 = '\0';
            }
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((plVar26 != (int64_t *)0x0) && (plVar37 != (int64_t *)0x0)) {
          pvVar15 = _pthread_getspecific((void*)plVar14);
          if (pvVar15 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_e0 = (int64_t *)FUN_01507970();
          pvVar15 = _pthread_getspecific((void*)plVar14);
          if (pvVar15 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_b8 = (int64_t *)FUN_01507970();
          pVar11 = (void*)plVar14;
          if ((local_e0._4_4_ != 0) && ((uint64_t)local_b8 >> 0x20 != 0)) {
            cVar7 = FUN_00e7c020();
            pVar11 = (void*)plVar14;
            if (cVar7 == '\0') {
              local_b8 = local_110;
              if (plVar16 == (int64_t *)0x0) {
                pvVar15 = _pthread_getspecific(pVar11);
                if (pvVar15 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_e0 = (int64_t *)FUN_01507970();
                FUN_00e7b820();
                local_80 = local_e0;
                local_108 = (int64_t *)FUN_00e7bcc0();
                local_e0 = local_b8;
                FUN_00e7bac0();
                local_b8 = local_e0;
              }
              else {
                do {
                  pvVar15 = _pthread_getspecific((void*)plVar14);
                  if (pvVar15 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_e0 = (int64_t *)FUN_01507970();
                  FUN_00e7b820();
                  local_80 = local_e0;
                  local_108 = (int64_t *)FUN_00e7bcc0();
                  local_e0 = local_b8;
                  FUN_00e7bac0();
                  local_b8 = local_e0;
                  pvVar15 = _pthread_getspecific((void*)plVar14);
                  if (pvVar15 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_e0 = (int64_t *)FUN_01507970();
                  pVar11 = (void*)plVar14;
                  if ((local_80._4_4_ == 0) || ((uint64_t)local_e0 >> 0x20 == 0)) break;
                  cVar7 = FUN_00e7c020();
                  pVar11 = (void*)plVar14;
                } while (cVar7 == '\0');
              }
              pvVar15 = _pthread_getspecific(pVar11);
              if (pvVar15 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_015084d0();
              if (plVar16 != (int64_t *)0x0) {
                pvVar15 = _pthread_getspecific(pVar11);
                if (pvVar15 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar15 = _pthread_getspecific(pVar11);
                if (pvVar15 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01507970();
                FUN_015085a0();
              }
            }
          }
          pvVar15 = _pthread_getspecific(pVar11);
          if (pvVar15 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar15 = _pthread_getspecific(pVar11);
          if (pvVar15 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01507970();
          FUN_015085a0();
        }
        if (plVar16 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (plVar37 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (plVar26 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_001159b0();
    }
    local_230 = '\0';
    local_238 = plVar12;
    FUN_0152eef0();
    if ((local_230 != '\0') && (local_238 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_88 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_190 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_188 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}

