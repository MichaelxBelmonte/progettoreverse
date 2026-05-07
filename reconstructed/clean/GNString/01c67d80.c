// Function: FUN_01c67d80
// Address: 01c67d80
// Size: 7019 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01c67d80(uint64_t param_1,uint64_t param_2,int64_t *param_3)

{
  int iVar1;
  uint uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  bool bVar8;
  int64_t lVar9;
  int64_t lVar10;
  char cVar11;
  uint32_t uVar12;
  int64_t lVar13;
  byte bVar14;
  byte bVar15;
  char cVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  int64_t *plVar20;
  void *pvVar21;
  int64_t lVar22;
  int64_t lVar23;
  uint in_ECX;
  void* pVar24;
  uint64_t uVar25;
  int64_t *plVar26;
  uint32_t in_EDX;
  uint64_t arg1;
  int64_t *this_ptr;
  bool bVar27;
  bool bVar28;
  float fVar29;
  float fVar31;
  float fVar32;
  float fVar30;
  double dVar33;
  double dVar39;
  float extraout_XMM0_Db;
  float fVar47;
  float extraout_XMM0_Db_03;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  float extraout_XMM0_Dd;
  uint8_t auVar40 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  float extraout_XMM0_Db_00;
  uint64_t extraout_XMM0_Qb_00;
  float extraout_XMM0_Dd_00;
  uint8_t auVar41 [16];
  float extraout_XMM0_Db_01;
  float extraout_XMM0_Dd_01;
  uint8_t auVar42 [16];
  float extraout_XMM0_Db_02;
  uint8_t auVar43 [16];
  uint8_t auVar44 [16];
  uint8_t auVar45 [16];
  uint8_t auVar46 [16];
  uint64_t extraout_XMM0_Qb_02;
  float extraout_XMM0_Dd_02;
  float fVar48;
  uint uVar49;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  int64_t local_1d8;
  char local_1d0;
  uint8_t local_1c8 [12];
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  uint local_1a8;
  uint32_t local_1a4;
  int64_t local_1a0;
  uint64_t local_198;
  double local_190;
  uint64_t local_188;
  uint64_t uStack_180;
  uint8_t local_178 [16];
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  uint64_t local_b0;
  double local_a8;
  uint8_t local_98 [16];
  float local_88;
  uint local_84;
  uint local_58;
  int64_t local_48;
  char local_40;
  uint64_t extraout_XMM0_Qb_01;
  
  lVar13 = local_48;
  fVar47 = (float)((uint64_t)param_2 >> 0x20);
  fVar29 = (float)param_2;
  local_188 = param_1;
  uStack_180 = in_XMM0_Qb;
  FUN_01c65c50();
  plVar3 = (int64_t *)this_ptr[0x31];
  if (plVar3 == (int64_t *)0x0) {
    FUN_01c67190();
    return;
  }
  FUN_00d50b00();
  iVar1 = (int)this_ptr[0x39];
  uVar2 = *(uint *)((int64_t)this_ptr + 0x1cc);
  plVar20 = (int64_t *)(uint64_t)uVar2;
  uVar25 = 0x487e;
  local_1c8[0] = (0x487eU >> (uVar2 - 4 & 0x1f) & 1) != 0;
  bVar14 = FUN_016bf4e0();
  pVar24 = (void*)CONCAT71((int7)((uint64_t)uVar25 >> 8),iVar1 == 1);
  if ((((bVar14 & iVar1 == 1) == 1) && (uVar2 != 0x10)) && (uVar2 != 0x11)) {
    FUN_01c67190();
    goto LAB_01c6975a;
  }
  FUN_016bf040();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  pvVar21 = _pthread_getspecific(pVar24);
  if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
    pVar24 = (void*)plVar3;
  }
  pvVar21 = _pthread_getspecific(pVar24);
  if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
    pVar24 = (void*)plVar3;
  }
  uVar25 = FUN_016c4760();
  dVar33 = (double)FUN_016c9410(uVar25,0);
  this_ptr[0x51] = (int64_t)dVar33;
  pvVar21 = _pthread_getspecific(pVar24);
  if (pvVar21 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_190 = (double)FUN_016c46a0(0,0);
  local_1a8 = uVar2 & 0xfffffffe;
  bVar14 = (byte)in_EDX ^ 1 | local_1a8 != 0x10;
  plVar26 = (int64_t *)(uint64_t)CONCAT31((int3)((uint)in_EDX >> 8),bVar14);
  if (bVar14 == 0) {
    uVar25 = (**(code **)(*(int64_t *)this_ptr[0x2e] + 0x390))(local_190);
    local_1b8 = (float)uVar25;
    fStack_1b4 = (float)((uint64_t)uVar25 >> 0x20);
    fStack_1b0 = (float)extraout_XMM0_Qb;
    fStack_1ac = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
    dVar34 = (double)this_ptr[0x51];
    FUN_01e3f820();
    fVar47 = extraout_XMM0_Db + fVar47;
    in_XMM1_Dc = extraout_XMM0_Dd + in_XMM1_Dd;
    fVar29 = fVar47 + g_02390d00;
    if ((int)this_ptr[0x39] == 1) {
      fVar29 = fVar29 + g_0241c6e8;
    }
    fVar30 = (float)_logf(CONCAT44((int)((uint64_t)(dVar34 / (double)this_ptr[0x38]) >> 0x20),
                                   (float)(dVar34 / (double)this_ptr[0x38])));
    fVar29 = fVar29 - (fVar30 / *(float *)(this_ptr + 0x55)) * fVar29;
    auVar7._4_4_ = fStack_1b4;
    auVar7._0_4_ = local_1b8;
    auVar7._8_4_ = fStack_1b0;
    auVar7._12_4_ = fStack_1ac;
    auVar40._4_4_ = fVar47;
    auVar40._0_4_ = fVar29;
    auVar40._8_4_ = in_XMM1_Dc;
    auVar40._12_4_ = in_XMM1_Dc;
    auVar40 = insertps(auVar7,auVar40,0x10);
    in_XMM1_Dd = in_XMM1_Dc;
    FUN_00dd65e0(auVar40._0_8_);
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01c6a320();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar21 = _pthread_getspecific((void*)plVar26);
  if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
    plVar26 = plVar3;
  }
  dVar34 = (double)FUN_016fd530();
  FUN_01c45750();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_01c45b80();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      goto LAB_01c6814b;
    }
    bVar27 = true;
  }
  else {
LAB_01c6814b:
    bVar27 = local_48 == 0;
    if ((uVar2 == 0x10) && (local_48 != 0)) {
      if (*(int *)(local_48 + 0xc) == 0) {
        bVar27 = false;
      }
      else {
        pvVar21 = _pthread_getspecific((void*)plVar26);
        if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
          plVar26 = plVar3;
        }
        FUN_016d8130();
        if ((local_40 == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        lVar22 = **(int64_t **)(local_48 + 0x10);
        if (lVar22 != 0) {
          FUN_00d50b00();
        }
        local_40 = '\0';
        local_1a4 = FUN_00d237a0();
        if (lVar22 != 0) {
          FUN_00d50b20();
        }
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        bVar27 = false;
        local_48 = lVar22;
      }
    }
  }
  lVar22 = local_48;
  dVar35 = (double)FUN_01c5c560();
  FUN_01e3f820();
  local_158 = 0;
  local_160 = this_ptr[0x42];
  local_1b8 = fVar29;
  fStack_1b4 = fVar47;
  fStack_1b0 = in_XMM1_Dc;
  fStack_1ac = in_XMM1_Dd;
  if (local_160 != 0) {
    FUN_00d50b00();
  }
  local_158 = '\x01';
  FUN_016beef0();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  bVar15 = FUN_01d3b590();
  plVar4 = (int64_t *)this_ptr[0x2e];
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  uVar25 = (**(code **)(*plVar4 + 0x388))();
  iVar18 = FUN_01c5f8c0(uVar25,(float)local_188);
  FUN_00d50b20();
  bVar28 = iVar18 == 1;
  lVar5 = *param_3;
  lVar9 = param_3[1];
  if (((char)lVar9 != '\0') && (lVar5 != 0)) {
    FUN_00d50b00();
  }
  plVar4 = (int64_t *)this_ptr[0x2e];
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  dVar36 = (double)(**(code **)(*plVar4 + 0x388))();
  FUN_00d50b20();
  if (this_ptr[0x2d] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar23 = this_ptr[0x2d];
    if (lVar23 != 0) {
      FUN_00d50b00();
    }
    FUN_01e436c0();
    if (lVar23 != 0) {
      FUN_00d50b20();
    }
  }
  uVar25 = FUN_00e7d6f0();
  local_178._0_8_ = uVar25;
  cVar11 = local_1c8[0];
  fVar31 = fStack_1b4 * g_02421228;
  bVar15 = bVar15 >> 3 & 1;
  fVar30 = local_188._4_4_;
  local_58 = 0;
  bVar17 = false;
  local_84 = 0;
  local_1b8 = (float)local_188;
  dVar38 = (double)CONCAT44(local_188._4_4_,local_188._4_4_);
  local_88 = local_188._4_4_;
  fVar47 = uStack_180._4_4_;
  fVar29 = (float)local_188;
  do {
    iVar18 = FUN_01d3a5a0();
    if ((iVar18 == 5) ||
       ((iVar18 = FUN_01d3a5a0(), iVar18 == 6 && (iVar18 = FUN_01d3b630(), iVar18 == 1)))) {
      if (bVar14 != 0) {
        bVar15 = FUN_01d3b590();
        bVar15 = bVar15 >> 3 & 1;
      }
      FUN_01d3abf0();
      local_1c8._0_8_ = FUN_01e466c0();
      register0x00001208 = extraout_XMM0_Qb_00;
      fVar29 = (float)local_1c8._0_8_ - fVar29;
      if (bVar15 != 0) {
        fVar29 = fVar29 * g_02391094;
      }
      plVar4 = (int64_t *)this_ptr[0x2e];
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_1b8 = local_1b8 + fVar29;
      dVar37 = (double)(**(code **)(*plVar4 + 0x388))();
      FUN_00d50b20();
      if (bVar28) {
        fVar29 = (float)((uint)((float)local_1c8._4_4_ - local_188._4_4_) & g_02390140);
        uVar49 = (uint)((float)local_1c8._4_4_ - local_188._4_4_) & _UNK_02390144;
        fVar47 = (float)((uint)(fStack_1bc - uStack_180._4_4_) & _UNK_0239014c);
        plVar26 = (int64_t *)0x0;
        if (g_0241c3ec < fVar29) {
          bVar28 = false;
        }
        dVar38 = (double)CONCAT44(uVar49,fVar29);
        if (((bVar28) &&
            (fVar32 = (float)((uint)((float)local_1c8._0_4_ - (float)local_188) & g_02390140),
            dVar38 = (double)CONCAT44(uVar49,fVar29), g_023945a4 < fVar32)) &&
           (dVar38 = (double)CONCAT44(uVar49,fVar29 + fVar29), fVar29 + fVar29 < fVar32)) {
          pvVar21 = _pthread_getspecific(0);
          if (pvVar21 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016d8920();
          this_ptr[0x51] = 0;
          FUN_01c6a320();
          FUN_01c67190();
          FUN_01e4ac90();
          if (this_ptr[0x2d] != 0) {
            FUN_00d50b00();
            FUN_00d50b20();
            if (iVar1 == 1) {
              lVar23 = this_ptr[0x2d];
              if (lVar23 != 0) {
                FUN_00d50b00();
              }
              FUN_019f1280();
              if (lVar23 != 0) {
                FUN_00d50b20();
              }
            }
          }
          FUN_01c63f60();
          goto LAB_01c69709;
        }
      }
      uVar49 = (uint)plVar26;
      dVar37 = (dVar37 - dVar36) * dVar35;
      if (uVar2 - 4 < 0x12 && cVar11 == '\0') {
        if (bVar14 == 0) {
          uVar49 = FUN_00e7d850(dVar37 / dVar34);
          fVar29 = (float)((uint64_t)dVar38 >> 0x20);
          plVar26 = (int64_t *)(uint64_t)uVar49;
          if (uVar49 != local_84) {
            bVar8 = true;
            bVar17 = false;
            goto LAB_01c6898d;
          }
          local_58 = local_84;
          goto LAB_01c69414;
        }
        local_a8 = dVar37;
        local_b0 = g_0238fee8;
        if ((dVar37 != g_02390448) || (NAN(dVar37) || NAN(g_02390448))) goto joined_r0x01c689f5;
        if (bVar17) goto LAB_01c68940;
      }
      else {
        if ((((iVar1 == 1 & (byte)in_EDX) == 0) || (cVar16 = FUN_016bf500(), cVar16 != '\0')) ||
           (cVar16 = FUN_016bf530(), cVar16 != '\0')) {
          dVar38 = (double)FUN_00e7d6f0();
          uVar25 = FUN_00e7d6f0();
          iVar18 = FUN_01d3a5a0();
          uVar12 = local_1c8._4_4_;
          fVar47 = fStack_1bc;
          fVar48 = 0.0;
          fVar29 = 0.0;
          fVar32 = 0.0;
          if (iVar18 != 6) {
            fVar48 = (float)local_1c8._4_4_ - local_88;
            fVar29 = (float)local_1c8._4_4_;
            fVar32 = fStack_1bc;
          }
          dVar39 = (double)CONCAT44(fVar29,fVar48);
          if (fVar48 != 0.0) {
            dVar39 = dVar38 - (double)local_178._0_8_;
            fVar32 = 0.0;
            if (g_02411158 <= dVar39) {
              dVar39 = (double)((uint64_t)_UNK_023945e4 << 0x20);
              fVar32 = _UNK_023945ec;
            }
          }
          FUN_01e3f820();
          auVar41._4_4_ = extraout_XMM0_Db_00 + (float)((uint64_t)dVar39 >> 0x20);
          auVar41._12_4_ = extraout_XMM0_Dd_00 + fVar32;
          auVar41._0_4_ = auVar41._4_4_;
          auVar41._8_4_ = auVar41._12_4_;
          local_178._4_12_ = auVar41._4_12_;
          local_178._0_4_ = auVar41._4_4_ + g_02390d00;
          FUN_01e3f820();
          fVar29 = (float)_expf();
          dVar38 = (double)this_ptr[0x38];
          FUN_01e3f820();
          auVar42._4_4_ = extraout_XMM0_Db_01 + (float)((uint64_t)dVar39 >> 0x20);
          auVar42._12_4_ = extraout_XMM0_Dd_01 + fVar32;
          auVar42._0_4_ = auVar42._4_4_;
          auVar42._8_4_ = auVar42._12_4_;
          local_178._4_12_ = auVar42._4_12_;
          local_178._0_4_ = auVar42._4_4_ + g_02390d00;
          lVar23 = this_ptr[0x39];
          FUN_01e3f820();
          auVar43._4_12_ = local_178._4_12_;
          auVar43._0_4_ = local_178._0_4_ + g_0241c6e8;
          if ((int)lVar23 != 1) {
            auVar43 = local_178;
          }
          auVar44._4_12_ = auVar43._4_12_;
          auVar44._0_4_ =
               ((auVar43._0_4_ - fVar30) /
               (extraout_XMM0_Db_02 + (float)((uint64_t)dVar39 >> 0x20) + g_02390d00)) *
               *(float *)(this_ptr + 0x55);
          fVar32 = (float)_expf(auVar44._0_8_);
          uVar49 = (uint)plVar26;
          dVar38 = ((double)fVar29 * dVar38 - (double)fVar32 * (double)this_ptr[0x38]) + dVar33;
          local_b0 = g_023908b8;
          if (g_023908b8 <= dVar38) {
            local_b0 = dVar38;
          }
          local_b0 = local_b0 / dVar33;
          local_a8 = 0.0;
          if ((local_b0 != g_0238fee8) || (NAN(local_b0) || NAN(g_0238fee8))) {
            local_178._0_8_ = uVar25;
            fVar47 = 0.0;
            dVar38 = local_b0;
            local_88 = (float)uVar12;
joined_r0x01c689f5:
            local_b0._4_4_ = (uint)((uint64_t)local_b0 >> 0x20);
            bVar8 = false;
            bVar17 = false;
          }
          else {
            dVar38 = (double)CONCAT44(uVar12,uVar12);
            local_88 = (float)uVar12;
            local_178._0_8_ = uVar25;
            if (!bVar17) {
              goto LAB_01c6940a;
            }
LAB_01c68940:
            bVar8 = false;
            bVar17 = false;
          }
joined_r0x01c68944:
          if ((in_ECX & 1) == 0) {
            pvVar21 = _pthread_getspecific(uVar49);
            if ((pvVar21 == (void *)0x0) || (lVar23 = FUN_00e8b990(), lVar23 == 0)) {
              lVar23 = this_ptr[0x42];
            }
            else {
              lVar23 = this_ptr[0x42];
            }
            if (lVar23 != 0) {
              local_148 = 0;
              FUN_00d50b00();
            }
            local_148 = '\x01';
            plVar26 = plVar20;
            local_150 = lVar23;
            FUN_016d8980(plVar20,&local_150,iVar1);
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            if ((local_148 != '\0') && (local_150 != 0)) {
              FUN_00d50b20();
            }
            cVar16 = FUN_016bf500();
            uVar49 = (uint)plVar26;
            if (cVar16 == '\0') {
              cVar16 = FUN_016bf530();
              uVar49 = (uint)plVar26;
              if ((cVar16 != '\0') && (local_48 != 0)) goto LAB_01c68afd;
              if (local_48 == 0) goto LAB_01c68be0;
            }
            else {
              if (local_48 == 0) {
LAB_01c68be0:
                in_ECX = 1;
                goto LAB_01c68c5a;
              }
LAB_01c68afd:
              uVar49 = (uint)plVar26;
              if (*(int *)(local_48 + 0xc) != 0) {
                pvVar21 = _pthread_getspecific(uVar49);
                if ((pvVar21 != (void *)0x0) && (lVar23 = FUN_00e8b990(), lVar23 != 0)) {
                  plVar26 = plVar3;
                }
                uVar49 = (uint)plVar26;
                pvVar21 = _pthread_getspecific(uVar49);
                if (pvVar21 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar25 = FUN_019079b0();
                arg1 = FUN_016caaa0(uVar25,0);
              }
            }
            in_ECX = 1;
            FUN_00d50b20();
          }
LAB_01c68c5a:
          local_138 = 0;
          lVar23 = this_ptr[0x42];
          if (lVar23 != 0) {
            FUN_00d50b00();
          }
          local_138 = '\x01';
          local_140 = lVar23;
          FUN_016bef60();
          if ((local_138 != '\0') && (local_140 != 0)) {
            FUN_00d50b20();
          }
          if (bVar17) {
            FUN_016beef0();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            pvVar21 = _pthread_getspecific(uVar49);
            if (pvVar21 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar19 = 0;
            FUN_016e5250(local_190,local_58,plVar20,iVar1);
            FUN_016bef60();
            if (local_48 != 0) {
              FUN_00d50b20();
            }
          }
          else if (bVar8) {
            uVar19 = local_58;
            if (uVar2 == 0x11) {
              pvVar21 = _pthread_getspecific(uVar49);
              if ((pvVar21 == (void *)0x0) || (lVar23 = FUN_00e8b990(), lVar23 == 0)) {
                lVar23 = this_ptr[0x42];
              }
              else {
                lVar23 = this_ptr[0x42];
              }
              if (lVar23 != 0) {
                local_128 = 0;
                FUN_00d50b00();
              }
              local_128 = '\x01';
              local_130 = lVar23;
              FUN_016fd730(local_58,arg1,1);
              if ((local_128 != '\0') && (local_130 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar21 = _pthread_getspecific(uVar49);
              if ((pvVar21 == (void *)0x0) || (lVar23 = FUN_00e8b990(), lVar23 == 0)) {
                lVar23 = this_ptr[0x42];
              }
              else {
                lVar23 = this_ptr[0x42];
              }
              if (lVar23 != 0) {
                local_118 = 0;
                FUN_00d50b00();
              }
              local_118 = '\x01';
              local_120 = lVar23;
              FUN_016fe3c0(local_58,local_1a4,1);
              if ((local_118 != '\0') && (local_120 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            pvVar21 = _pthread_getspecific(uVar49);
            if ((pvVar21 == (void *)0x0) || (lVar23 = FUN_00e8b990(), lVar23 == 0)) {
              lVar23 = this_ptr[0x42];
            }
            else {
              lVar23 = this_ptr[0x42];
            }
            if (lVar23 != 0) {
              local_108 = 0;
              FUN_00d50b00();
            }
            local_108 = '\x01';
            fVar47 = 0.0;
            local_110 = lVar23;
            uVar19 = uVar2;
            FUN_016dbc00(local_a8,arg1,iVar1,1);
            dVar38 = (double)((uint64_t)local_b0._4_4_ << 0x20);
            if ((local_108 != '\0') &&
               (dVar38 = (double)((uint64_t)local_b0._4_4_ << 0x20), local_110 != 0)) {
              FUN_00d50b20();
              dVar38 = (double)((uint64_t)local_b0._4_4_ << 0x20);
            }
          }
          pvVar21 = _pthread_getspecific(uVar19);
          if (pvVar21 != (void *)0x0) {
            FUN_00e8b990();
          }
          plVar26 = (int64_t *)0x0;
          FUN_016c46a0(0,0);
          FUN_01c66870();
          if ((!(bool)(bVar17 | local_1a8 == 0x10)) && (cVar16 = FUN_016bf390(), cVar16 == '\0')) {
            cVar16 = FUN_016bf4e0();
            if (cVar16 == '\0') {
              cVar16 = FUN_016bf500();
              if (cVar16 == '\0') {
                local_48 = FUN_016bf2e0();
                local_198 = FUN_016bf2e0();
                FUN_00e7b970();
                local_1a0 = local_48;
                FUN_00e7b820();
              }
              else {
                local_48 = FUN_016bf310();
                local_198 = FUN_016bf310();
                FUN_00e7b970();
                local_1a0 = local_48;
                FUN_00e7b820();
              }
            }
            in_ECX = 0;
          }
          pvVar21 = _pthread_getspecific((void*)plVar26);
          if ((pvVar21 != (void *)0x0) && (lVar23 = FUN_00e8b990(), lVar23 != 0)) {
            plVar26 = plVar3;
          }
          pvVar21 = _pthread_getspecific((void*)plVar26);
          if ((pvVar21 != (void *)0x0) && (lVar23 = FUN_00e8b990(), lVar23 != 0)) {
            plVar26 = plVar3;
          }
          uVar25 = FUN_016c4760();
          lVar23 = FUN_016c9410(uVar25,0);
          this_ptr[0x51] = lVar23;
          FUN_01c858c0();
          dVar39 = (double)FUN_00e7d6f0();
          if (g_023908d0 < dVar39 - g_028b7178) {
            FUN_00d403d0();
            lVar23 = g_027ebec0;
            if (g_027ebec0 != 0) {
              FUN_00d50b00();
            }
            FUN_00d50b00();
            local_1d8 = 0;
            local_1d0 = '\0';
            plVar26 = &local_1d8;
            FUN_00d40470(plVar26,&stack0xffffffffffffff00,3,3);
            if ((local_1d0 != '\0') && (local_1d8 != 0)) {
              FUN_00d50b20();
            }
            if (this_ptr != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if (lVar23 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            g_028b7178 = (double)FUN_00e7d6f0();
          }
          pvVar21 = _pthread_getspecific((void*)plVar26);
          if ((pvVar21 != (void *)0x0) && (lVar23 = FUN_00e8b990(), lVar23 != 0)) {
            plVar26 = plVar3;
          }
          bVar17 = true;
          FUN_016c1150();
        }
        else {
          fVar29 = local_188._4_4_ - (float)local_1c8._4_4_;
          uVar49 = 0;
          fVar47 = 0.0;
          auVar45._0_8_ = _powf();
          auVar45._8_8_ = extraout_XMM0_Qb_01;
          auVar46._4_12_ = auVar45._4_12_;
          auVar46._0_4_ = (float)auVar45._0_8_ / fVar31;
          uVar19 = FUN_00e7d780(auVar46._0_8_);
          dVar38 = (double)((uint64_t)uVar49 << 0x20);
          uVar49 = -uVar19;
          if (0.0 <= fVar29) {
            uVar49 = uVar19;
          }
          plVar26 = (int64_t *)(uint64_t)uVar49;
          if (uVar49 != local_84) {
            bVar17 = true;
            bVar8 = false;
LAB_01c6898d:
            local_a8 = 0.0;
            local_b0._4_4_ = (uint)((uint64_t)g_0238fee8 >> 0x20);
            local_84 = uVar49;
            local_58 = uVar49;
            goto joined_r0x01c68944;
          }
          local_58 = local_84;
        }
LAB_01c6940a:
        fVar29 = (float)((uint64_t)dVar38 >> 0x20);
        if (bVar14 == 0) {
LAB_01c69414:
          local_98._0_8_ = (**(code **)(*(int64_t *)this_ptr[0x2e] + 0x390))(dVar37 + local_190);
          local_98._8_8_ = extraout_XMM0_Qb_02;
          dVar38 = (double)this_ptr[0x51];
          FUN_01e3f820();
          fVar29 = extraout_XMM0_Db_03 + fVar29;
          fVar47 = extraout_XMM0_Dd_02 + fVar47;
          fVar32 = fVar29 + g_02390d00 + g_0241c6e8;
          if ((int)this_ptr[0x39] != 1) {
            fVar32 = fVar29 + g_02390d00;
          }
          fVar48 = (float)_logf(CONCAT44((int)((uint64_t)(dVar38 / (double)this_ptr[0x38]) >> 0x20
                                              ),(float)(dVar38 / (double)this_ptr[0x38])));
          auVar6._4_4_ = fVar29;
          auVar6._0_4_ = fVar32 - (fVar48 / *(float *)(this_ptr + 0x55)) * fVar32;
          auVar6._8_4_ = fVar47;
          auVar6._12_4_ = fVar47;
          auVar40 = insertps(local_98,auVar6,0x10);
          FUN_00dd65e0(auVar40._0_8_);
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_01c6a320();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          dVar38 = (double)((uint64_t)(uint)fVar29 << 0x20);
          if ((local_40 != '\0') &&
             (dVar38 = (double)((uint64_t)(uint)fVar29 << 0x20), local_48 != 0)) {
            FUN_00d50b20();
            dVar38 = (double)((uint64_t)(uint)fVar29 << 0x20);
          }
        }
      }
      iVar18 = FUN_01d3a5a0();
      if (iVar18 == 6) {
        pvVar21 = _pthread_getspecific((void*)plVar26);
        if (pvVar21 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016d88e0();
        if ((char)this_ptr[0x43] != '\0') {
          FUN_016bf0c0();
          *(void*)(this_ptr + 0x43) = 0;
          (**(code **)(*this_ptr + 0x620))();
        }
        break;
      }
      fVar29 = (float)local_1c8._0_4_;
    }
    (**(code **)(*this_ptr + 0x658))();
    lVar23 = *param_3;
    if (lVar23 == local_48) {
      if (((char)param_3[1] != '\0') || (local_48 == 0)) goto LAB_01c695f7;
      if (local_40 == '\0') {
        FUN_00d50b00();
        goto LAB_01c695f2;
      }
LAB_01c68490:
      *(void*)(param_3 + 1) = 1;
    }
    else {
      lVar10 = param_3[1];
      if (local_40 != '\0') {
        *param_3 = local_48;
        if (((char)lVar10 != '\0') && (lVar23 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01c68490;
      }
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      *param_3 = local_48;
      if (((char)lVar10 != '\0') && (lVar23 != 0)) {
        FUN_00d50b20();
      }
LAB_01c695f2:
      *(void*)(param_3 + 1) = 1;
LAB_01c695f7:
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  } while (*param_3 != 0);
  FUN_01c6a320();
  this_ptr[0x51] = 0;
  FUN_01c67190();
LAB_01c69709:
  if (((char)lVar9 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if (lVar22 != 0) {
    FUN_00d50b20();
  }
  if (!bVar27) {
    FUN_00d50b20();
  }
  if (lVar13 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
LAB_01c6975a:
  FUN_00d50b20();
  return;
}

