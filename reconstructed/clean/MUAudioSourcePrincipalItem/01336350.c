// Function: FUN_01336350
// Address: 01336350
// Size: 13387 bytes
// Class: MUAudioSourcePrincipalItem
// String references:
//   "MUAudioSourcePrincipalItem"

void FUN_01336350(void* param_1,uint32_t param_2)

{
  double *****pppppdVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint64_t uVar4;
  byte bVar5;
  bool bVar6;
  double *******pppppppdVar7;
  char cVar8;
  char cVar9;
  void *pvVar10;
  int64_t lVar11;
  void*puVar12;
  int64_t lVar13;
  int64_t *plVar14;
  double *******pppppppdVar15;
  int64_t lVar16;
  void* pVar17;
  double *******pppppppdVar18;
  double ******ppppppdVar19;
  int64_t lVar20;
  int iVar21;
  void*arg1;
  int64_t this_ptr;
  double *****pppppdVar22;
  double *******pppppppdVar23;
  uint uVar24;
  int iVar25;
  code *pcVar26;
  int64_t lVar27;
  uint32_t uVar28;
  float fVar29;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Db;
  uint32_t extraout_XMM0_Db_00;
  uint32_t uVar31;
  double dVar30;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint64_t uVar34;
  uint8_t auVar35 [16];
  uint64_t local_340;
  uint8_t local_338;
  double *******local_330;
  uint8_t local_328;
  uint8_t local_320 [8];
  double *******local_2d0;
  char local_2c8;
  double *******local_2c0;
  char local_2b8;
  double *******local_2b0;
  char local_2a8;
  double *******local_2a0;
  char local_298;
  double *******local_290;
  char local_288;
  double *******local_280;
  char local_278;
  double *****local_270;
  char local_268;
  double *****local_260;
  char local_258;
  double *****local_250;
  char local_248;
  double *****local_240;
  char local_238;
  int64_t local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  void* local_1bc;
  int local_1b8;
  int local_1b4;
  int64_t local_1b0;
  int64_t local_1a8;
  double local_1a0;
  void*local_198;
  int64_t local_190;
  double *******local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  double local_150;
  int64_t *local_148;
  int64_t *local_140;
  void*local_138;
  code *local_130;
  double *******local_128;
  int64_t local_120;
  char local_118;
  void*local_110;
  double *******local_108;
  double *******local_f8;
  char local_f0;
  double *******local_e8;
  uint64_t local_e0;
  int local_d8;
  double *******local_d0;
  uint8_t local_c1;
  void*local_c0;
  double *******local_b8;
  code *local_a8;
  int64_t *local_a0;
  uint8_t local_98 [16];
  int64_t local_88;
  double *******local_80;
  uint8_t local_78 [16];
  double *******local_60;
  char local_58 [8];
  double *******local_50;
  uint64_t local_48;
  int local_40;
  double ******local_38;
  
  local_190 = CONCAT44(local_190._4_4_,param_2);
  plVar14 = *(int64_t **)(this_ptr + 0x38);
  if (plVar14 == (int64_t *)0x0) {
    return;
  }
  local_1bc = param_1;
  pvVar10 = _pthread_getspecific(param_1);
  if (pvVar10 != (void *)0x0) {
    plVar14 = *(int64_t **)(this_ptr + 0x38);
    lVar11 = FUN_00e8b990();
    if (lVar11 != 0) {
      plVar14 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
    }
  }
  local_1a0 = (double)(**(code **)(*plVar14 + 0x370))();
  local_1b8 = FUN_00e7d850(SUB84((double)g_0240f0f8 * local_1a0,0));
  local_1b4 = FUN_00e7d850(SUB84(g_0240f100 * local_1a0,0));
  lVar11 = *(int64_t *)(this_ptr + 0x40);
  if (lVar11 != 0) {
    FUN_00d50b00();
  }
  FUN_0147ce20();
  local_128 = local_60;
  if (local_58[0] == '\0') {
    if (((local_60 != (double *******)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
       (local_60 != (double *******)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58[0] = '\0';
  }
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  FUN_00d242c0();
  puVar12 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  local_38 = (double ******)&g_02572358;
  *puVar12 = &g_02572358;
  local_a8 = g_02572370;
  (*g_02572370)();
  local_110 = puVar12;
  if ((double *******)*arg1 != (double *******)0x0) {
    local_58[0] = '\0';
    local_60 = (double *******)0x0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    local_50 = (double *******)*arg1;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar21 = -local_48._4_4_;
        }
        else {
          iVar21 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar21);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar21 = 0;
        }
        local_48 = CONCAT44(iVar21,(int)local_48);
      }
      lVar11 = (int64_t)(int)local_48;
      iVar21 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar21);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar21) break;
      pppppppdVar15 = (double *******)local_50[2][lVar11 + 1];
      local_60 = pppppppdVar15;
      pvVar10 = _pthread_getspecific((void*)local_50[2]);
      pppppppdVar18 = local_60;
      if ((pvVar10 != (void *)0x0) &&
         (lVar11 = FUN_00e8b990(), pppppppdVar15 = pppppppdVar18, lVar11 != 0)) {
        pppppppdVar15 =
             (double *******)pppppppdVar18[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
      }
      pppppppdVar15 = (double *******)pppppppdVar15[8];
      if (pppppppdVar15 != (double *******)0x0) {
        FUN_00d50b00();
      }
      local_f0 = '\0';
      local_f8 = pppppppdVar15;
      FUN_00d214d0();
      if ((local_f0 != '\0') && (local_f8 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      if (pppppppdVar15 != (double *******)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00115190();
  }
  puVar12 = local_110;
  FUN_00d242c0();
  uVar24 = *(uint *)((int64_t)puVar12 + 0xc);
  if (0 < (int)uVar24) {
    lVar11 = (uint64_t)uVar24 + 1;
    do {
      uVar24 = uVar24 - 1;
      lVar13 = local_110[2];
      lVar27 = *(int64_t *)(lVar13 + (uint64_t)uVar24 * 8);
      if (lVar27 != 0) {
        FUN_00d50b00();
      }
      pVar17 = (void*)lVar13;
      pvVar10 = _pthread_getspecific(pVar17);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      pvVar10 = _pthread_getspecific(pVar17);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar8 = FUN_014bc070();
      cVar9 = '\x01';
      if (cVar8 == '\0') {
        pvVar10 = _pthread_getspecific(pVar17);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        pppppppdVar15 = local_f8;
        pvVar10 = _pthread_getspecific(pVar17);
        pppppppdVar18 = local_f8;
        if ((pvVar10 != (void *)0x0) &&
           (lVar13 = FUN_00e8b990(), pppppppdVar15 = pppppppdVar18, lVar13 != 0)) {
          pppppppdVar15 =
               (double *******)pppppppdVar18[(uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4];
        }
        cVar9 = (*(*pppppppdVar15)[0x78])();
        if ((local_f0 != '\0') && (local_f8 != (double *******)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      if (cVar9 != '\0') {
        FUN_00d23620();
      }
      if (lVar27 != 0) {
        FUN_00d50b20();
      }
      lVar11 = lVar11 + -1;
    } while (1 < lVar11);
  }
  plVar14 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar14 + 0x18))();
  local_a0 = plVar14;
  plVar14 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar14 + 0x18))();
  local_140 = plVar14;
  plVar14 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar14 + 0x18))();
  local_148 = plVar14;
  puVar12 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = local_38;
  (*local_a8)();
  local_c0 = puVar12;
  puVar12 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = local_38;
  (*local_a8)();
  local_138 = puVar12;
  puVar12 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = local_38;
  (*local_a8)();
  local_198 = puVar12;
  if (0 < *(int *)((int64_t)local_128 + 0xc)) {
    lVar11 = 0;
    do {
      local_78._0_8_ = lVar11;
      pppppppdVar15 = (double *******)local_128[2][lVar11];
      pppppppdVar18 = local_128;
      if (pppppppdVar15 != (double *******)0x0) {
        FUN_00d50b00();
      }
      local_98._0_8_ = pppppppdVar15;
      local_58[0] = '\0';
      local_60 = pppppppdVar15;
      cVar8 = FUN_00d23d70();
      if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      if (cVar8 == '\0') {
        pppppppdVar15 = (double *******)FUN_00e8fc40();
        FUN_00d4ff40();
        *pppppppdVar15 = local_38;
        (*local_a8)();
        local_58[0] = '\0';
        local_b8 = pppppppdVar15;
        local_60 = pppppppdVar15;
        FUN_00d21140();
        if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        pppppppdVar15 = (double *******)local_98._0_8_;
        if ((double *******)local_98._0_8_ != (double *******)0x0) {
          FUN_00d50b00();
        }
        while( true ) {
          pVar17 = (void*)pppppppdVar18;
          local_58[0] = '\0';
          local_60 = pppppppdVar15;
          cVar8 = FUN_00d23d70();
          if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          if (cVar8 != '\0') goto LAB_01336e11;
          local_58[0] = '\0';
          local_60 = pppppppdVar15;
          FUN_00d21140();
          if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          local_58[0] = '\0';
          local_60 = pppppppdVar15;
          FUN_00d21140();
          if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pppppppdVar7 = local_60;
          if ((((local_58[0] == '\0') && (local_60 != (double *******)0x0)) &&
              (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc420();
          pppppppdVar23 = local_60;
          if ((g_027c0170 == '\0') && (iVar21 = ___cxa_guard_acquire(), iVar21 != 0)) {
            g_02790158 = FUN_007ef2d0();
            g_02790140 = "MUAudioSourcePrincipalItem";
            g_02790148 = 0x138;
            g_02790150 = FUN_010fe5c0;
            g_02790160 = 0;
            ram_0000000002790168 = 0;
            g_02790170 = 0;
            ram_0000000002790178 = 0;
            g_02790180 = 0;
            ram_0000000002790188 = 0;
            g_02790190 = 0;
            ram_0000000002790198 = 0;
            g_027901a0 = 0;
            ram_00000000027901a8 = 0;
            g_027901b0 = 0;
            ram_00000000027901b8 = 0;
            g_027901c0 = 0;
            ram_00000000027901c8 = 0;
            g_027901d0 = 0;
            ram_00000000027901d8 = 0;
            g_027901e0 = 0;
            ram_00000000027901e8 = 0;
            g_027901f0 = 0;
            ram_00000000027901f8 = 0;
            g_02790200 = 0;
            ___cxa_guard_release();
          }
          pppppppdVar18 = (double *******)&g_02802688;
          if (pppppppdVar23 != (double *******)0x0) {
            (*(*pppppppdVar23)[0x6c])();
            cVar8 = FUN_00e85ea0();
            pppppppdVar18 = (double *******)&local_60;
            if (cVar8 == '\0') {
              pppppppdVar18 = (double *******)&g_02802688;
            }
          }
          pppppppdVar23 = (double *******)*pppppppdVar18;
          if (*(char *)(pppppppdVar18 + 1) == '\0') {
            if (pppppppdVar23 != (double *******)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(pppppppdVar18 + 1) = 0;
          }
          if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          if (pppppppdVar23 == (double *******)0x0) {
            pvVar10 = _pthread_getspecific((void*)pppppppdVar18);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014d1b50();
            if ((((local_60 != (double *******)0x0) &&
                 (pppppppdVar23 = local_60, local_58[0] == '\0')) &&
                (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (double *******)0x0)) {
              FUN_00d50b20();
            }
          }
          if (pppppppdVar23 == (double *******)0x0) break;
          pvVar10 = _pthread_getspecific((void*)pppppppdVar18);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014d1d00();
          pppppppdVar23 = local_60;
          if (local_60 == pppppppdVar15) {
LAB_01336ced:
            pppppppdVar23 = pppppppdVar15;
            if (local_58[0] != '\0') {
LAB_01336cf3:
              if (local_60 != (double *******)0x0) {
                FUN_00d50b20();
              }
            }
          }
          else {
            if (local_58[0] == '\0') {
              if (local_60 != (double *******)0x0) {
                FUN_00d50b00();
              }
              if (pppppppdVar15 != (double *******)0x0) {
                FUN_00d50b20();
                pppppppdVar15 = pppppppdVar23;
                goto LAB_01336ced;
              }
              if (local_58[0] == '\0') goto LAB_01336d10;
              goto LAB_01336cf3;
            }
            if (pppppppdVar15 != (double *******)0x0) {
              FUN_00d50b20();
            }
          }
LAB_01336d10:
          FUN_00d50b20();
          pppppppdVar15 = pppppppdVar23;
          if (pppppppdVar7 != (double *******)0x0) {
            FUN_00d50b20();
          }
        }
        if (pppppppdVar7 != (double *******)0x0) {
          FUN_00d50b20();
        }
LAB_01336e11:
        if (pppppppdVar15 != (double *******)0x0) {
          FUN_00d50b20();
        }
        if (local_b8 != (double *******)0x0) {
          FUN_00d50b20();
        }
      }
      if (local_98._0_8_ != 0) {
        FUN_00d50b20();
      }
      lVar11 = local_78._0_8_ + 1;
    } while (lVar11 < *(int *)((int64_t)local_128 + 0xc));
  }
  iVar21 = *(int *)((int64_t)local_c0 + 0xc);
  if (0 < iVar21) {
    pcVar26 = 0x0;
    do {
      lVar11 = *(int64_t *)(local_c0[2] + (int64_t)pcVar26 * 8);
      if (lVar11 != 0) {
        FUN_00d50b00();
      }
      if (0 < *(int *)(lVar11 + 0xc)) {
        lVar13 = 0;
        local_1a8 = lVar11;
        local_130 = pcVar26;
        do {
          lVar11 = *(int64_t *)(*(int64_t *)(local_1a8 + 0x10) + lVar13 * 8);
          local_1b0 = lVar13;
          if (lVar11 != 0) {
            FUN_00d50b00();
          }
          local_98._0_8_ = lVar11;
          pvVar10 = _pthread_getspecific((void*)lVar13);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            lVar13 = local_98._0_8_;
          }
          uVar28 = FUN_013de3b0();
          local_b8 = (double *******)CONCAT44(local_b8._4_4_,uVar28);
          pvVar10 = _pthread_getspecific((void*)lVar13);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            lVar13 = local_98._0_8_;
          }
          local_a8 = FUN_013de8d0();
          pvVar10 = _pthread_getspecific((void*)lVar13);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            lVar13 = local_98._0_8_;
          }
          local_150 = (double)FUN_013de9b0();
          pvVar10 = _pthread_getspecific((void*)lVar13);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            lVar13 = local_98._0_8_;
          }
          uVar34 = FUN_013de8d0();
          local_78._0_8_ = uVar34;
          pvVar10 = _pthread_getspecific((void*)lVar13);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            lVar13 = local_98._0_8_;
          }
          uVar34 = FUN_013de9b0();
          auVar35._12_4_ = extraout_XMM0_Dd;
          auVar35._8_4_ = extraout_XMM0_Dc;
          auVar35._0_8_ = uVar34;
          local_158 = FUN_00e7b500(local_78._0_4_);
          local_d0 = auVar35._0_8_;
          if (0 < *(int *)((int64_t)local_110 + 0xc)) {
            local_a8 = ((double)local_a8 + local_150);
            local_108 = (double *******)0x0;
            lVar11 = 0;
            local_80 = (double *******)0x0;
            local_88 = 0;
            do {
              pppppppdVar15 = *(double ********)(local_110[2] + lVar11 * 8);
              if (pppppppdVar15 != (double *******)0x0) {
                FUN_00d50b00();
              }
              pvVar10 = _pthread_getspecific((void*)lVar13);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar29 = (float)FUN_013de3b0();
              iVar21 = 0x14;
              if ((float)((uint)(fVar29 - local_b8._0_4_) & g_02390140) <= g_02394240) {
                pvVar10 = _pthread_getspecific((void*)lVar13);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar30 = (double)FUN_013de8d0();
                iVar21 = 0x12;
                if (dVar30 < (double)local_a8) {
                  pvVar10 = _pthread_getspecific((void*)lVar13);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar34 = FUN_013de8d0();
                  local_78._0_8_ = uVar34;
                  pvVar10 = _pthread_getspecific((void*)lVar13);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  ppppppdVar19 = (double ******)FUN_013de9b0();
                  uVar34 = FUN_00e7b500(local_78._0_4_);
                  local_78._0_8_ = uVar34;
                  local_38 = ppppppdVar19;
                  cVar8 = FUN_00e7b560((int)local_158,local_d0,uVar34,ppppppdVar19);
                  iVar25 = 0;
                  iVar21 = 0;
                  if (cVar8 != '\0') {
                    auVar32._8_8_ = 0;
                    auVar32._0_8_ = local_d0;
                    FUN_00e7b600((int)local_158,local_d0,local_78._0_8_,local_38);
                    iVar21 = iVar25;
                    if (g_02391030 < auVar32._0_8_) {
                      local_78._0_8_ = auVar32._0_8_;
                      pvVar10 = _pthread_getspecific((void*)lVar13);
                      if (pvVar10 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      uVar34 = FUN_013de9b0();
                      auVar33._0_8_ = local_150 / (double)local_78._0_8_;
                      dVar30 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) /
                               (double)local_78._0_8_;
                      auVar33._8_8_ = dVar30;
                      lVar27 = -(uint64_t)(g_0240d420._8_8_ < dVar30);
                      auVar35 = divpd(g_0240d420,auVar33);
                      auVar2._8_4_ = (int)lVar27;
                      auVar2._0_8_ = -(uint64_t)((double)g_0240d420 < auVar33._0_8_);
                      auVar2._12_4_ = (int)((uint64_t)lVar27 >> 0x20);
                      auVar35 = blendvpd(auVar33,auVar35,auVar2);
                      dVar30 = auVar35._8_8_ * auVar35._0_8_;
                      local_78._8_4_ = auVar35._8_4_;
                      local_78._0_8_ = dVar30;
                      local_78._12_4_ = auVar35._12_4_;
                      if ((double)local_108 < dVar30) {
                        if (local_80 == pppppppdVar15) {
                          if (((char)local_88 != '\0') || (local_80 == (double *******)0x0))
                          goto LAB_0133740f;
                          local_88 = CONCAT71((int7)((uint64_t)uVar34 >> 8),1);
                          FUN_00d50b00();
                          local_108 = local_78._0_8_;
                          iVar21 = 0;
                        }
                        else {
                          if (pppppppdVar15 != (double *******)0x0) {
                            uVar34 = FUN_00d50b00();
                          }
                          if (((char)local_88 == '\0') || (local_80 == (double *******)0x0)) {
                            local_88 = CONCAT71((int7)((uint64_t)uVar34 >> 8),1);
                            local_80 = pppppppdVar15;
LAB_0133740f:
                            local_108 = local_78._0_8_;
                            iVar21 = 0;
                          }
                          else {
                            local_80 = pppppppdVar15;
                            uVar34 = FUN_00d50b20();
                            local_88 = CONCAT71((int7)((uint64_t)uVar34 >> 8),1);
                            local_108 = local_78._0_8_;
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (pppppppdVar15 != (double *******)0x0) {
                FUN_00d50b20();
              }
              pcVar26 = local_130;
              pVar17 = (void*)lVar13;
            } while (((iVar21 == 0x14) || (iVar21 == 0)) &&
                    (lVar11 = lVar11 + 1, lVar11 < *(int *)((int64_t)local_110 + 0xc)));
            if (local_80 != (double *******)0x0) {
              pvVar10 = _pthread_getspecific(pVar17);
              if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                pVar17 = (void*)local_80;
              }
              local_b8 = (double *******)FUN_013de8d0();
              pvVar10 = _pthread_getspecific(pVar17);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar30 = (double)FUN_013de8d0();
              if (g_02390108 < (double)((uint64_t)((double)local_b8 - dVar30) & g_023908f0)) {
                if ((char)local_88 != '\0') {
                  local_80 = (double *******)0x0;
                  FUN_00d50b20();
                }
              }
              else {
                local_60 = local_80;
                local_58[0] = '\0';
                cVar8 = FUN_00d23d70();
                uVar28 = extraout_XMM0_Da_00;
                if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
                  uVar28 = FUN_00d50b20();
                }
                if (cVar8 != '\0') {
                  FUN_00c9fe20();
                  pppppppdVar15 = local_60;
                  local_f8 = (double *******)CONCAT71(local_f8._1_7_,local_58[0]);
                  pppppppdVar18 = (double *******)local_58;
                  if (local_58[0] == '\0') {
                    pppppppdVar18 = (double *******)&local_f8;
                  }
                  *(char *)pppppppdVar18 = '\0';
                  if ((local_58[0] != '\0') && (pppppppdVar15 != (double *******)0x0)) {
                    FUN_00d50b20();
                  }
                  if (((char)local_f8 == '\0') && (pppppppdVar15 != (double *******)0x0)) {
                    FUN_00d50b00();
                  }
                  if (0 < *(int *)((int64_t)pppppppdVar15 + 0xc)) {
                    lVar11 = 0;
                    do {
                      pppppppdVar18 = (double *******)pppppppdVar15[2][lVar11];
                      if (pppppppdVar18 != (double *******)0x0) {
                        FUN_00d50b00();
                      }
                      FUN_0133ae40();
                      pppppppdVar7 = local_60;
                      if (local_58[0] == '\0') {
                        if (((local_60 != (double *******)0x0) &&
                            (FUN_00d50b00(), local_58[0] != '\0')) &&
                           (local_60 != (double *******)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      else {
                        local_58[0] = '\0';
                      }
                      if (pppppppdVar7 == local_80) {
                        if (pppppppdVar18 != (double *******)0x0) {
                          FUN_00d50b00();
                        }
                        FUN_00d50b20();
                        if ((pppppppdVar18 != (double *******)0x0) &&
                           (FUN_00d50b20(), pppppppdVar18 != (double *******)0x0)) {
                          FUN_0133ae40();
                          local_b8 = (double *******)FUN_00d45bc0();
                          if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
                            FUN_00d50b20();
                          }
                          pcVar26 = local_130;
                          if ((double)local_b8 <= (double)local_108) {
                            local_58[0] = '\0';
                            local_60 = pppppppdVar18;
                            FUN_00ca13a0();
                            if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
                              FUN_00d50b20();
                            }
                          }
                          else {
                            if ((char)local_88 != '\0') {
                              FUN_00d50b20();
                            }
                            local_88 = 0;
                            local_80 = (double *******)0x0;
                          }
                          FUN_00d50b20();
                          goto LAB_013377c8;
                        }
                        break;
                      }
                      if (pppppppdVar7 != (double *******)0x0) {
                        FUN_00d50b20();
                      }
                      if (pppppppdVar18 != (double *******)0x0) {
                        FUN_00d50b20();
                      }
                      lVar11 = lVar11 + 1;
                    } while (lVar11 < *(int *)((int64_t)pppppppdVar15 + 0xc));
                  }
                  if ((char)local_88 == '\0') {
                    local_80 = (double *******)0x0;
                    local_88 = 0;
                    pcVar26 = local_130;
                  }
                  else {
                    FUN_00d50b20();
                    local_80 = (double *******)0x0;
                    local_88 = 0;
                    pcVar26 = local_130;
                  }
LAB_013377c8:
                  uVar28 = FUN_00d50b20();
                  if (local_80 == (double *******)0x0) goto LAB_01337950;
                }
                local_60 = (double *******)local_98._0_8_;
                local_58[0] = '\0';
                FUN_00ca0840(uVar28,&local_60);
                if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d470c0((int)local_108);
                pppppppdVar15 = local_f8;
                local_180 = 0;
                if (local_f0 == '\0') {
                  if (local_f8 != (double *******)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_f0 = '\0';
                }
                local_180 = '\x01';
                local_188 = pppppppdVar15;
                local_60 = (double *******)local_98._0_8_;
                local_58[0] = '\0';
                FUN_00ca0840();
                if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_180 != '\0') && (local_188 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_f0 != '\0') && (local_f8 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                local_60 = local_80;
                local_58[0] = '\0';
                FUN_00d235a0();
                if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                if ((char)local_88 != '\0') {
                  FUN_00d50b20();
                }
              }
            }
          }
LAB_01337950:
          if (local_98._0_8_ != 0) {
            FUN_00d50b20();
          }
          lVar13 = local_1b0 + 1;
        } while (lVar13 < *(int *)(local_1a8 + 0xc));
      }
      FUN_00d50b20();
      pcVar26 = pcVar26 + 1;
      iVar21 = *(int *)((int64_t)local_c0 + 0xc);
    } while ((int64_t)pcVar26 < (int64_t)iVar21);
  }
  if (((char)local_190 != '\0') && (0 < iVar21)) {
    ppppppdVar19 = (double ******)0x0;
    do {
      lVar11 = *(int64_t *)(local_c0[2] + (int64_t)ppppppdVar19 * 8);
      local_38 = ppppppdVar19;
      if (lVar11 != 0) {
        FUN_00d50b00();
      }
      if (1 < *(int *)(lVar11 + 0xc)) {
        lVar13 = 0;
        local_78._0_8_ = lVar11;
        do {
          lVar11 = *(int64_t *)(lVar11 + 0x10);
          pppppppdVar15 = *(double ********)(lVar11 + lVar13 * 8);
          if (pppppppdVar15 != (double *******)0x0) {
            FUN_00d50b00();
            lVar11 = *(int64_t *)(local_78._0_8_ + 0x10);
          }
          pppppppdVar18 = *(double ********)(lVar11 + 8 + lVar13 * 8);
          if (pppppppdVar18 != (double *******)0x0) {
            FUN_00d50b00();
          }
          pVar17 = (void*)lVar11;
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_b8 = (double *******)FUN_013de8d0();
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar34 = FUN_013de8d0();
          local_98._0_8_ = uVar34;
          local_2c8 = '\0';
          local_2d0 = pppppppdVar15;
          uVar28 = FUN_0133ae40((int)uVar34,&local_2d0);
          pppppppdVar7 = local_60;
          if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
            uVar28 = FUN_00d50b20();
          }
          if ((local_2c8 != '\0') && (local_2d0 != (double *******)0x0)) {
            uVar28 = FUN_00d50b20();
          }
          if (pppppppdVar7 != (double *******)0x0) {
            local_2b8 = '\0';
            local_2c0 = pppppppdVar15;
            FUN_0133ae40(uVar28,&local_2c0);
            pvVar10 = _pthread_getspecific(pVar17);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_b8 = (double *******)FUN_013de8d0();
            uVar28 = SUB84(local_b8,0);
            if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
              uVar28 = FUN_00d50b20();
            }
            if ((local_2b8 != '\0') && (local_2c0 != (double *******)0x0)) {
              uVar28 = FUN_00d50b20();
            }
          }
          local_2a8 = '\0';
          local_2b0 = pppppppdVar18;
          uVar28 = FUN_0133ae40(uVar28,&local_2b0);
          pppppppdVar7 = local_60;
          if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
            uVar28 = FUN_00d50b20();
          }
          if ((local_2a8 != '\0') && (local_2b0 != (double *******)0x0)) {
            uVar28 = FUN_00d50b20();
          }
          if (pppppppdVar7 != (double *******)0x0) {
            local_298 = '\0';
            local_2a0 = pppppppdVar18;
            FUN_0133ae40(uVar28,&local_2a0);
            pvVar10 = _pthread_getspecific(pVar17);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar34 = FUN_013de8d0();
            local_98._0_8_ = uVar34;
            if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
              FUN_00d50b20();
            }
            if ((local_298 != '\0') && (local_2a0 != (double *******)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((double)local_98._0_8_ < (double)local_b8 + g_02391030) {
            local_288 = '\0';
            local_290 = pppppppdVar15;
            uVar28 = FUN_0133ae40(SUB84((double)local_b8 + g_02391030,0),&local_290);
            pppppppdVar7 = local_60;
            if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
              uVar28 = FUN_00d50b20();
            }
            if ((local_288 != '\0') && (local_290 != (double *******)0x0)) {
              uVar28 = FUN_00d50b20();
            }
            if (pppppppdVar7 != (double *******)0x0) {
              local_58[0] = '\0';
              local_60 = pppppppdVar15;
              uVar28 = FUN_00ca13a0();
              if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
                uVar28 = FUN_00d50b20();
              }
            }
            local_278 = '\0';
            local_280 = pppppppdVar18;
            FUN_0133ae40(uVar28,&local_280);
            pppppppdVar7 = local_60;
            if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
              FUN_00d50b20();
            }
            if ((local_278 != '\0') && (local_280 != (double *******)0x0)) {
              FUN_00d50b20();
            }
            if (pppppppdVar7 != (double *******)0x0) {
              local_58[0] = '\0';
              local_60 = pppppppdVar18;
              FUN_00ca13a0();
              if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          if (pppppppdVar18 != (double *******)0x0) {
            FUN_00d50b20();
          }
          if (pppppppdVar15 != (double *******)0x0) {
            FUN_00d50b20();
          }
          lVar13 = lVar13 + 1;
          lVar11 = local_78._0_8_;
        } while (lVar13 < (int64_t)*(int *)(local_78._0_8_ + 0xc) + -1);
      }
      FUN_00d50b20();
      ppppppdVar19 = (double ******)((int64_t)local_38 + 1);
    } while ((int64_t)ppppppdVar19 < (int64_t)*(int *)((int64_t)local_c0 + 0xc));
  }
  if (local_128 != (double *******)0x0) {
    local_58[0] = '\0';
    local_60 = (double *******)0x0;
    local_50 = local_128;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar21 = -local_48._4_4_;
        }
        else {
          iVar21 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar21);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar21 = 0;
        }
        local_48 = CONCAT44(iVar21,(int)local_48);
      }
      lVar11 = (int64_t)(int)local_48;
      iVar21 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar21);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar21) break;
      ppppppdVar19 = local_50[2];
      local_60 = (double *******)ppppppdVar19[lVar11 + 1];
      pvVar10 = _pthread_getspecific((void*)ppppppdVar19);
      pVar17 = (void*)ppppppdVar19;
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfdd0();
      pppppppdVar15 = local_f8;
      if ((local_f0 != '\0') && (local_f8 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      if (pppppppdVar15 != (double *******)0x0) {
        pvVar10 = _pthread_getspecific(pVar17);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013df0a0();
        uVar28 = FUN_00d470c0();
        local_178 = local_120;
        local_170 = 0;
        if (local_118 == '\0') {
          if (local_120 != 0) {
            uVar28 = FUN_00d50b00();
          }
        }
        else {
          local_118 = '\0';
        }
        local_170 = '\x01';
        local_f8 = local_60;
        local_f0 = '\0';
        FUN_00ca0840(uVar28,&local_f8);
        if ((local_f0 != '\0') && (local_f8 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_170 != '\0') && (local_178 != 0)) {
          FUN_00d50b20();
        }
        if ((local_118 != '\0') && (local_120 != 0)) {
          FUN_00d50b20();
        }
        FUN_0133aef0();
      }
    }
    FUN_001150f0();
  }
  if (*(int *)(*(int64_t *)(this_ptr + 0xd0) + 0xc) != 0) {
    do {
      FUN_00d23340();
      pppppppdVar15 = local_60;
      local_f8 = (double *******)CONCAT71(local_f8._1_7_,local_58[0]);
      pppppppdVar18 = (double *******)local_58;
      if (local_58[0] == '\0') {
        pppppppdVar18 = (double *******)&local_f8;
      }
      *(void*)pppppppdVar18 = 0;
      if ((local_58[0] != '\0') && (pppppppdVar15 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_f8 == '\0') && (pppppppdVar15 != (double *******)0x0)) {
        FUN_00d50b00();
      }
      FUN_013291f0();
      if (pppppppdVar15 != (double *******)0x0) {
        FUN_00d50b20();
      }
    } while (*(int *)(*(int64_t *)(this_ptr + 0xd0) + 0xc) != 0);
  }
  uVar28 = FUN_0133b360();
  pppppppdVar15 = *(double ********)(this_ptr + 0xd0);
  if (pppppppdVar15 != (double *******)0x0) {
    uVar28 = FUN_00d50b00();
  }
  local_108 = pppppppdVar15;
  if ((char)local_190 == '\0') {
    iVar21 = *(int *)((int64_t)local_c0 + 0xc);
  }
  else {
    iVar21 = *(int *)((int64_t)local_c0 + 0xc);
    if (0 < iVar21) {
      ppppppdVar19 = (double ******)0x0;
      do {
        pppppppdVar15 = *(double ********)(local_c0[2] + (int64_t)ppppppdVar19 * 8);
        puVar12 = local_c0;
        local_38 = ppppppdVar19;
        if (pppppppdVar15 != (double *******)0x0) {
          uVar28 = FUN_00d50b00();
        }
        if (0 < *(int *)((int64_t)pppppppdVar15 + 0xc)) {
          lVar11 = 0;
          local_b8 = pppppppdVar15;
          do {
            pppppdVar1 = pppppppdVar15[2][lVar11];
            if (pppppdVar1 != (double *****)0x0) {
              uVar28 = FUN_00d50b00();
            }
            bVar5 = 1;
            if ((lVar11 == 0) ||
               (pppppdVar22 = local_b8[2][lVar11 + -1], pppppdVar22 == (double *****)0x0)) {
              pppppdVar22 = (double *****)0x0;
            }
            else {
              uVar28 = FUN_00d50b00();
              bVar5 = 0;
            }
            local_268 = '\0';
            local_270 = pppppdVar1;
            uVar28 = FUN_0133ae40(uVar28,&local_270);
            pppppppdVar15 = local_60;
            if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
              uVar28 = FUN_00d50b20();
            }
            if ((local_268 != '\0') && (local_270 != (double *****)0x0)) {
              uVar28 = FUN_00d50b20();
            }
            if (pppppppdVar15 != (double *******)0x0) {
              pvVar10 = _pthread_getspecific((void*)puVar12);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar34 = FUN_013de8d0();
              local_98._0_8_ = uVar34;
              local_258 = '\0';
              local_260 = pppppdVar1;
              FUN_0133ae40((int)uVar34,&local_260);
              pvVar10 = _pthread_getspecific((void*)puVar12);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar34 = FUN_013de8d0();
              local_78._0_8_ = uVar34;
              if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
                FUN_00d50b20();
              }
              if ((local_258 != '\0') && (local_260 != (double *****)0x0)) {
                FUN_00d50b20();
              }
              iVar21 = FUN_00e7d850(SUB84(((double)local_78._0_8_ - (double)local_98._0_8_) *
                                          local_1a0,0));
              uVar28 = extraout_XMM0_Da_01;
              if (iVar21 != 0) {
                puVar12 = (void*)(int64_t)iVar21;
                local_248 = '\0';
                local_238 = '\0';
                local_250 = pppppdVar22;
                local_240 = pppppdVar1;
                uVar28 = MUAudioSourceDescription_cleanupOverlappingPotentialItemsForPrincipalItem(puVar12,&local_240,local_320,&local_c1,0);
                if ((local_238 != '\0') && (local_240 != (double *****)0x0)) {
                  uVar28 = FUN_00d50b20();
                }
                if ((local_248 != '\0') && (local_250 != (double *****)0x0)) {
                  uVar28 = FUN_00d50b20();
                }
              }
            }
            if (!(bool)(bVar5 | pppppdVar22 == (double *****)0x0)) {
              uVar28 = FUN_00d50b20();
            }
            pppppppdVar15 = local_b8;
            if (pppppdVar1 != (double *****)0x0) {
              uVar28 = FUN_00d50b20();
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 < *(int *)((int64_t)pppppppdVar15 + 0xc));
        }
        uVar28 = FUN_00d50b20();
        ppppppdVar19 = (double ******)((int64_t)local_38 + 1);
        iVar21 = *(int *)((int64_t)local_c0 + 0xc);
      } while ((int64_t)ppppppdVar19 < (int64_t)iVar21);
    }
  }
  if (0 < iVar21) {
    local_1b0 = (int64_t)local_1b8;
    local_1a8 = (int64_t)local_1b4;
    lVar11 = 0;
    local_130 = g_025e6278;
    do {
      lVar13 = *(int64_t *)(local_c0[2] + lVar11 * 8);
      local_190 = lVar11;
      if (lVar13 != 0) {
        uVar28 = FUN_00d50b00();
      }
      if (0 < *(int *)(lVar13 + 0xc)) {
        lVar11 = 0;
        local_88 = lVar13;
        do {
          lVar27 = *(int64_t *)(*(int64_t *)(lVar13 + 0x10) + lVar11 * 8);
          local_158 = lVar11;
          if (lVar27 != 0) {
            uVar28 = FUN_00d50b00();
          }
          pVar17 = (void*)lVar11;
          local_78._0_8_ = lVar27;
          local_228 = '\0';
          local_230 = lVar27;
          uVar28 = FUN_0133ae40(uVar28,&local_230);
          pppppppdVar15 = local_60;
          if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
            uVar28 = FUN_00d50b20();
          }
          if ((local_228 != '\0') && (local_230 != 0)) {
            uVar28 = FUN_00d50b20();
          }
          if (pppppppdVar15 != (double *******)0x0) {
            pvVar10 = _pthread_getspecific(pVar17);
            if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
              pVar17 = local_78._0_4_;
            }
            FUN_013de560();
            pvVar10 = _pthread_getspecific(pVar17);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar8 = FUN_014bc070();
            cVar9 = '\x01';
            uVar28 = extraout_XMM0_Da_02;
            if (cVar8 == '\0') {
              pvVar10 = _pthread_getspecific(pVar17);
              if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                pVar17 = local_78._0_4_;
              }
              FUN_013de560();
              pppppppdVar15 = local_f8;
              pvVar10 = _pthread_getspecific(pVar17);
              pppppppdVar18 = local_f8;
              if ((pvVar10 != (void *)0x0) &&
                 (lVar11 = FUN_00e8b990(), pppppppdVar15 = pppppppdVar18, lVar11 != 0)) {
                pppppppdVar15 =
                     (double *******)pppppppdVar18[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
              }
              cVar9 = (*(*pppppppdVar15)[0x78])();
              uVar28 = extraout_XMM0_Da_03;
              if ((local_f0 != '\0') && (local_f8 != (double *******)0x0)) {
                uVar28 = FUN_00d50b20();
              }
            }
            if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
              uVar28 = FUN_00d50b20();
            }
            if (cVar9 == '\0') {
              local_220 = local_78._0_8_;
              local_218 = '\0';
              FUN_0133ae40(uVar28,&local_220);
              pppppppdVar15 = local_60;
              if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
                FUN_00d50b20();
              }
              if ((local_218 != '\0') && (local_220 != 0)) {
                FUN_00d50b20();
              }
              if (pppppppdVar15 == (double *******)0x0) {
                local_80 = (double *******)0x0;
LAB_01338894:
                local_200 = local_78._0_8_;
                local_1f8 = '\0';
                FUN_0133ae40();
                uVar34 = FUN_00d45bc0();
                local_a8 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_04);
                if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
                  uVar34 = FUN_00d50b20();
                }
                if ((local_1f8 != '\0') && (local_200 != 0)) {
                  uVar34 = FUN_00d50b20();
                }
                local_150 = (double)CONCAT44(local_150._4_4_,
                                             (int)CONCAT71((int7)((uint64_t)uVar34 >> 8),1));
                local_d0 = (double *******)0x0;
              }
              else {
                local_210 = local_78._0_8_;
                local_208 = '\0';
                FUN_0133ae40();
                local_d0 = local_60;
                pppppppdVar15 = local_60;
                if (local_60 == (double *******)0x0) {
                  local_80 = (double *******)0x0;
                  local_d0 = (double *******)0x0;
                }
                else if (local_58[0] == '\0') {
                  uVar34 = FUN_00d50b00();
                  local_80 = (double *******)CONCAT71((int7)((uint64_t)uVar34 >> 8),1);
                  if ((local_58[0] != '\0') && (local_60 != (double *******)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_58[0] = '\0';
                  local_80 = (double *******)CONCAT71((int7)((uint64_t)local_60 >> 8),1);
                }
                pVar17 = (void*)pppppppdVar15;
                if ((local_208 != '\0') && (local_210 != 0)) {
                  FUN_00d50b20();
                }
                if (local_d0 == (double *******)0x0) goto LAB_01338894;
                pvVar10 = _pthread_getspecific(pVar17);
                if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                  pVar17 = (void*)local_d0;
                }
                local_a8 = FUN_013df0a0();
                local_150 = (double)((uint64_t)local_150 & 0xffffffff00000000);
              }
              pvVar10 = _pthread_getspecific(pVar17);
              if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                pVar17 = local_78._0_4_;
              }
              dVar30 = (double)FUN_013de8d0();
              local_38 = (double ******)(dVar30 + g_0240dea8);
              if (local_108 == (double *******)0x0) {
LAB_01338b93:
                pvVar10 = _pthread_getspecific(pVar17);
                if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                  pVar17 = local_78._0_4_;
                }
                lVar11 = FUN_013de650();
                pvVar10 = _pthread_getspecific(pVar17);
                if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  pVar17 = local_78._0_4_;
                }
                lVar13 = FUN_013de790();
                pvVar10 = _pthread_getspecific(pVar17);
                if ((pvVar10 != (void *)0x0) && (lVar27 = FUN_00e8b990(), lVar27 != 0)) {
                  pVar17 = local_78._0_4_;
                }
                dVar30 = (double)FUN_013de8d0();
                pcVar26 = local_a8;
                if ((double)local_a8 < dVar30) {
                  pvVar10 = _pthread_getspecific(pVar17);
                  if ((pvVar10 != (void *)0x0) && (lVar27 = FUN_00e8b990(), lVar27 != 0)) {
                    pVar17 = local_78._0_4_;
                  }
                  dVar30 = (double)FUN_013de9b0();
                  local_a8 = g_0240f0f8;
                  if (dVar30 * g_023934c8 < (double)g_0240f0f8) {
                    pvVar10 = _pthread_getspecific(pVar17);
                    if ((pvVar10 != (void *)0x0) && (lVar27 = FUN_00e8b990(), lVar27 != 0)) {
                      pVar17 = local_78._0_4_;
                    }
                    dVar30 = (double)FUN_013de9b0();
                    local_a8 = (dVar30 * g_023934c8);
                  }
                  pvVar10 = _pthread_getspecific(pVar17);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar30 = (double)FUN_013de8d0();
                  pcVar26 = ((double)local_a8 + dVar30);
                }
                iVar21 = FUN_00e7d850(SUB84((double)pcVar26 * local_1a0,0));
                lVar16 = iVar21 - local_1b0;
                lVar27 = local_1b0;
                if (lVar16 < lVar11) {
                  lVar16 = lVar11;
                  lVar27 = iVar21 - lVar11;
                }
                lVar20 = (lVar13 + lVar11) - lVar16;
                if (lVar16 + local_1a8 <= lVar13 + lVar11) {
                  lVar20 = local_1a8;
                }
                puVar12 = (void*)FUN_00e8fc40();
                FUN_007ef480();
                pVar17 = 0x25e6250;
                *puVar12 = &g_025e6260;
                puVar12[7] = &g_025e66c0;
                puVar12[0x1c] = 0;
                puVar12[0x19] = 0;
                puVar12[0x1a] = 0;
                *(void*)(puVar12 + 0x1b) = 0;
                (*local_130)();
                pvVar10 = _pthread_getspecific(pVar17);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014bad20(lVar20,lVar27);
                uVar28 = FUN_01329030();
                bVar6 = true;
              }
              else {
                local_58[0] = '\0';
                local_60 = (double *******)0x0;
                local_50 = local_108;
                local_48 = 0xffffffff;
                local_40 = 0;
                pppppppdVar15 = (double *******)0x0;
                bVar6 = false;
                uVar28 = SUB84(g_02391030,0);
                uVar31 = (uint32_t)((uint64_t)g_02391030 >> 0x20);
                local_48._4_4_ = 0;
                while( true ) {
                  local_b8 = (double *******)CONCAT44(uVar31,uVar28);
                  if (local_48._4_4_ != 0) {
                    if (local_48._4_4_ < 1) {
                      iVar21 = -local_48._4_4_;
                    }
                    else {
                      iVar21 = (int)local_48 - local_48._4_4_;
                      local_48 = CONCAT44(local_48._4_4_,iVar21);
                      FUN_00d23690();
                      local_40 = local_40 + local_48._4_4_;
                      iVar21 = 0;
                    }
                    local_48 = CONCAT44(iVar21,(int)local_48);
                  }
                  lVar11 = (int64_t)(int)local_48;
                  iVar21 = (int)local_48 + 1;
                  local_48 = CONCAT44(local_48._4_4_,iVar21);
                  if (*(int *)((int64_t)local_50 + 0xc) <= iVar21) break;
                  local_60 = (double *******)local_50[2][lVar11 + 1];
                  pvVar10 = _pthread_getspecific((void*)local_50[2]);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar30 = (double)FUN_014bacf0();
                  pppppppdVar18 = local_60;
                  uVar28 = SUB84(local_b8,0);
                  uVar31 = (uint32_t)((uint64_t)local_b8 >> 0x20);
                  if ((double)local_38 <= dVar30) {
                    dVar30 = (double)((uint64_t)(dVar30 - (double)local_a8) & g_023908f0);
                    uVar4 = CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00) & _UNK_023908f8;
                    auVar3._8_4_ = (int)uVar4;
                    auVar3._0_8_ = dVar30;
                    auVar3._12_4_ = (int)(uVar4 >> 0x20);
                    local_98 = auVar3;
                    if (dVar30 < (double)local_b8) {
                      if (local_60 == pppppppdVar15) {
                        if ((!bVar6) && (local_60 != (double *******)0x0)) {
                          pppppppdVar18 = pppppppdVar15;
                          if (local_58[0] == '\0') {
                            FUN_00d50b00();
                            goto LAB_01338aec;
                          }
                          goto LAB_01338ae3;
                        }
                        local_98._0_4_ = SUB84(dVar30,0);
                        local_98._4_4_ = (uint32_t)((uint64_t)dVar30 >> 0x20);
                        uVar28 = local_98._0_4_;
                        uVar31 = local_98._4_4_;
                      }
                      else {
                        if (local_58[0] == '\0') {
                          if (local_60 != (double *******)0x0) {
                            FUN_00d50b00();
                          }
                          if ((bVar6) && (pppppppdVar15 != (double *******)0x0)) {
                            FUN_00d50b20();
                            pppppppdVar15 = pppppppdVar18;
                            uVar28 = local_98._0_4_;
                            uVar31 = local_98._4_4_;
                            bVar6 = true;
                            goto LAB_013389c7;
                          }
                        }
                        else {
                          if ((bVar6) && (pppppppdVar15 != (double *******)0x0)) {
                            FUN_00d50b20();
                          }
LAB_01338ae3:
                          local_58[0] = '\0';
                        }
LAB_01338aec:
                        pppppppdVar15 = pppppppdVar18;
                        uVar28 = local_98._0_4_;
                        uVar31 = local_98._4_4_;
                        bVar6 = true;
                      }
                    }
                  }
LAB_013389c7:
                }
                pppppppdVar18 = local_50;
                FUN_01a02100();
                pVar17 = (void*)pppppppdVar18;
                if (pppppppdVar15 == (double *******)0x0) goto LAB_01338b93;
                pvVar10 = _pthread_getspecific(pVar17);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_b8 = (double *******)FUN_014bacf0();
                pvVar10 = _pthread_getspecific(pVar17);
                if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                  pVar17 = local_78._0_4_;
                }
                dVar30 = (double)FUN_013de8d0();
                uVar28 = SUB84(dVar30,0);
                if ((double)local_b8 < dVar30) {
                  pvVar10 = _pthread_getspecific(pVar17);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar30 = (double)FUN_014bacf0();
                  local_b8 = (double *******)(dVar30 + g_0240dea8);
                  pvVar10 = _pthread_getspecific(pVar17);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar30 = (double)FUN_013de8d0();
                  iVar21 = FUN_00e7d850(SUB84(((double)local_b8 - dVar30) * local_1a0,0));
                  uVar28 = extraout_XMM0_Da_05;
                  if (iVar21 != 0) {
                    bVar5 = 1;
                    if ((local_158 == 0) ||
                       (lVar11 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + -8 + local_158 * 8),
                       lVar11 == 0)) {
                      lVar11 = 0;
                    }
                    else {
                      FUN_00d50b00();
                      bVar5 = 0;
                    }
                    local_1e8 = '\0';
                    local_1e0 = local_78._0_8_;
                    local_1d8 = '\0';
                    local_1f0 = lVar11;
                    uVar28 = MUAudioSourceDescription_cleanupOverlappingPotentialItemsForPrincipalItem((int64_t)iVar21,&local_1e0,local_320,&local_c1,0);
                    if ((local_1d8 != '\0') && (local_1e0 != 0)) {
                      uVar28 = FUN_00d50b20();
                    }
                    if ((local_1e8 != '\0') && (local_1f0 != 0)) {
                      uVar28 = FUN_00d50b20();
                    }
                    if (!(bool)(bVar5 | lVar11 == 0)) {
                      uVar28 = FUN_00d50b20();
                    }
                  }
                }
              }
              uVar28 = FUN_01346520(uVar28,0);
              if (bVar6) {
                uVar28 = FUN_00d50b20();
              }
              lVar13 = local_88;
              if ((char)local_80 != '\0' && local_150._0_1_ == '\0') {
                uVar28 = FUN_00d50b20();
              }
            }
          }
          if (local_78._0_8_ != 0) {
            uVar28 = FUN_00d50b20();
          }
          lVar11 = local_158 + 1;
        } while (lVar11 < *(int *)(lVar13 + 0xc));
      }
      uVar28 = FUN_00d50b20();
      lVar11 = local_190 + 1;
    } while (lVar11 < *(int *)((int64_t)local_c0 + 0xc));
  }
  pVar17 = (void*)local_c0;
  if (local_128 != (double *******)0x0) {
    local_58[0] = '\0';
    local_60 = (double *******)0x0;
    local_50 = local_128;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar21 = -local_48._4_4_;
        }
        else {
          iVar21 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar21);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar21 = 0;
        }
        local_48 = CONCAT44(iVar21,(int)local_48);
      }
      lVar11 = (int64_t)(int)local_48;
      iVar21 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar21);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar21) break;
      ppppppdVar19 = local_50[2];
      local_60 = (double *******)ppppppdVar19[lVar11 + 1];
      pvVar10 = _pthread_getspecific((void*)ppppppdVar19);
      pVar17 = (void*)ppppppdVar19;
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      pvVar10 = _pthread_getspecific(pVar17);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd790();
      local_b8 = local_f8;
      if (local_f0 == '\0') {
        if (((local_f8 != (double *******)0x0) && (FUN_00d50b00(), local_f0 != '\0')) &&
           (local_f8 != (double *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_f0 = '\0';
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      if (local_b8 != (double *******)0x0) {
        local_f0 = '\0';
        local_f8 = (double *******)0x0;
        local_e8 = local_b8;
        local_e0 = 0xffffffff;
        local_d8 = 0;
        local_e0._4_4_ = 0;
        while( true ) {
          if (local_e0._4_4_ != 0) {
            if (local_e0._4_4_ < 1) {
              iVar21 = -local_e0._4_4_;
            }
            else {
              iVar21 = (int)local_e0 - local_e0._4_4_;
              local_e0 = CONCAT44(local_e0._4_4_,iVar21);
              FUN_00d23690();
              local_d8 = local_d8 + local_e0._4_4_;
              iVar21 = 0;
            }
            local_e0 = CONCAT44(iVar21,(int)local_e0);
          }
          lVar11 = (int64_t)(int)local_e0;
          iVar21 = (int)local_e0 + 1;
          local_e0 = CONCAT44(local_e0._4_4_,iVar21);
          if (*(int *)((int64_t)local_e8 + 0xc) <= iVar21) break;
          ppppppdVar19 = local_e8[2];
          local_f8 = (double *******)ppppppdVar19[lVar11 + 1];
          pvVar10 = _pthread_getspecific((void*)ppppppdVar19);
          pVar17 = (void*)ppppppdVar19;
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef8d0();
          lVar11 = local_120;
          if (((local_118 == '\0') && (local_120 != 0)) &&
             ((FUN_00d50b00(), local_118 != '\0' && (local_120 != 0)))) {
            FUN_00d50b20();
          }
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de8d0();
          FUN_012642b0();
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de9b0();
          FUN_01259540();
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013defa0();
          FUN_01264390();
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126f610();
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125a5f0();
          if ((char)local_1bc != '\0') {
            local_1d0 = lVar11;
            local_1c8 = '\0';
            FUN_0039e8b0();
            local_168 = local_120;
            local_160 = 0;
            if (local_118 == '\0') {
              if (local_120 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_118 = '\0';
            }
            local_160 = '\x01';
            FUN_00e7bdb0();
            FUN_01287c80();
            if ((local_160 != '\0') && (local_168 != 0)) {
              FUN_00d50b20();
            }
            if ((local_118 != '\0') && (local_120 != 0)) {
              FUN_00d50b20();
            }
            if ((local_1c8 != '\0') && (local_1d0 != 0)) {
              FUN_00d50b20();
            }
          }
          if (lVar11 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_0015edf0();
        FUN_00d50b20();
      }
    }
    pppppppdVar15 = local_50;
    uVar28 = FUN_001150f0();
    pVar17 = (void*)pppppppdVar15;
  }
  local_340 = 0;
  local_338 = 0;
  FUN_013469e0(uVar28,&local_340);
  if (((*(int64_t *)(this_ptr + 0x1f8) == 0) && (*(int64_t *)(this_ptr + 0x200) == 0)) &&
     (*(int64_t *)(this_ptr + 0x148) != 0)) {
    pvVar10 = _pthread_getspecific(pVar17);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar21 = FUN_0141bab0();
    if (iVar21 != 3) goto LAB_013397ae;
  }
  else {
LAB_013397ae:
    cVar8 = FUN_01334f30();
    if (cVar8 == '\0') goto LAB_013397e5;
  }
  local_330 = local_128;
  local_328 = 0;
  FUN_013357a0();
LAB_013397e5:
  if (local_108 != (double *******)0x0) {
    FUN_00d50b20();
  }
  if (local_198 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_138 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_c0 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_148 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_140 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_a0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_110 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_128 != (double *******)0x0) {
    FUN_00d50b20();
  }
  return;
}

