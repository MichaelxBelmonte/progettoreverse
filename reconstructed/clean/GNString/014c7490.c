// Function: FUN_014c7490
// Address: 014c7490
// Size: 16239 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_014c7490(float param_1,int64_t *param_2,int64_t *param_3,uint32_t param_4)

{
  float *pfVar1;
  uint *puVar2;
  float *pfVar3;
  uint *puVar4;
  uint32_t uVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  double dVar31;
  char cVar32;
  uint uVar33;
  int iVar34;
  uint32_t uVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int64_t lVar39;
  void*puVar40;
  void *pvVar41;
  int64_t lVar42;
  uint64_t uVar43;
  void*puVar44;
  void*puVar45;
  int64_t lVar46;
  int iVar47;
  uint uVar48;
  void* pVar49;
  int64_t *in_RCX;
  void* pVar50;
  uint64_t uVar51;
  int iVar52;
  uint uVar53;
  double dVar54;
  uint64_t uVar55;
  uint32_t unaff_ESI;
  int64_t lVar56;
  uint64_t uVar57;
  int64_t *this_ptr;
  uint64_t uVar58;
  size_t sVar59;
  void* pVar60;
  int64_t *in_R9;
  int iVar61;
  uint64_t uVar62;
  double dVar63;
  float fVar64;
  uint64_t uVar65;
  uint8_t auVar66 [16];
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar67 [16];
  uint8_t auVar68 [16];
  uint uVar72;
  uint8_t auVar69 [16];
  uint8_t auVar70 [16];
  uint8_t auVar71 [16];
  uint uVar73;
  uint uVar77;
  uint uVar78;
  uint8_t auVar74 [16];
  float fVar79;
  uint uVar80;
  uint8_t auVar75 [16];
  uint8_t auVar76 [16];
  uint8_t auVar81 [16];
  uint8_t auVar82 [16];
  uint8_t auVar83 [16];
  uint8_t auVar84 [16];
  uint8_t auVar85 [16];
  uint8_t auVar86 [16];
  uint8_t auVar87 [16];
  float fVar88;
  float fVar89;
  int64_t *local_res8;
  int64_t local_2b0;
  uint8_t local_2a8;
  int64_t local_2a0;
  uint8_t local_298;
  int64_t local_290;
  uint8_t local_288;
  void*local_280;
  uint8_t local_278;
  uint64_t local_270;
  int64_t local_268;
  int64_t local_260;
  uint64_t local_258;
  uint64_t local_250;
  uint64_t local_248;
  uint64_t local_240;
  int64_t local_238;
  int64_t local_230;
  int64_t local_228;
  int64_t *local_220;
  int local_218;
  float local_214;
  uint32_t local_210;
  uint local_20c;
  void*local_208;
  uint64_t local_200;
  int64_t local_1f8;
  void*local_1f0;
  uint64_t local_1e8;
  uint32_t uStack_1e0;
  uint32_t uStack_1dc;
  uint8_t local_1d8 [16];
  int64_t local_1c8;
  int64_t local_1c0;
  int64_t *local_1b8;
  void*local_1b0;
  int64_t local_1a8;
  char local_1a0;
  void*local_198;
  uint64_t local_190;
  void*local_188;
  void*puStack_180;
  void*local_178;
  int local_164;
  void*local_160;
  void*local_158;
  int64_t *local_150;
  uint64_t local_148;
  uint local_140;
  int local_13c;
  int64_t *local_138;
  double local_130;
  double local_128;
  void*local_120;
  void*local_118;
  int64_t local_110;
  int64_t local_108;
  void*local_100;
  double local_f8;
  uint64_t uStack_f0;
  uint local_dc;
  void*local_d8;
  void*local_d0;
  void*local_c8;
  uint64_t local_c0;
  void*local_b8;
  uint64_t uStack_b0;
  uint local_a4;
  double local_a0;
  double local_98;
  byte local_89;
  int64_t local_88;
  double local_80;
  uint8_t local_78 [16];
  double local_60;
  void*local_50;
  void*local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  
  local_a0 = (double)CONCAT44(local_a0._4_4_,param_4);
  local_214 = param_1;
  local_1b8 = param_2;
  local_150 = in_R9;
  local_138 = param_3;
  (**(code **)(*this_ptr + 0x378))();
  if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b00();
  }
  local_158 = local_40;
  FUN_014c4100();
  local_89 = in_RCX != (int64_t *)0x0 && local_1b8 != (int64_t *)0x0;
  if (in_RCX != (int64_t *)0x0 && local_1b8 != (int64_t *)0x0) {
    lVar39 = (**(code **)(*this_ptr + 0x380))();
    *local_1b8 = lVar39;
    lVar39 = (**(code **)(*this_ptr + 0x388))();
    *in_RCX = lVar39;
  }
  cVar32 = (**(code **)(*this_ptr + 0x3c0))();
  puVar40 = local_40;
  if (cVar32 != '\0') goto LAB_014ca381;
  puVar40 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar49 = 0x25f0d98;
  *puVar40 = &g_025f0d98;
  puVar40[2] = 0;
  puVar40[3] = 0;
  puVar40[4] = 0;
  puVar40[5] = 0;
  puVar40[6] = 0;
  puVar40[7] = 0;
  (*g_025f0db0)();
  local_d8 = puVar40;
  pvVar41 = _pthread_getspecific(pVar49);
  if (pvVar41 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_178 = (void*)FUN_01327990();
  local_210 = unaff_ESI;
  FUN_014bc090();
  if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b00();
  }
  local_208 = local_40;
  pvVar41 = _pthread_getspecific(pVar49);
  if (pvVar41 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb920();
  lVar39 = local_1a8;
  if (local_1a0 == '\0') {
    if (local_1a8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_1a0 = '\0';
  }
  local_220 = in_RCX;
  FUN_00c8e4f0();
  if (local_38 == '\0') {
    if (local_40 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00c92170();
  FUN_00c92160();
  if (lVar39 != 0) {
    FUN_00d50b20();
  }
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  local_1b0 = local_40;
  pvVar41 = _pthread_getspecific(pVar49);
  puVar40 = local_40;
  if ((pvVar41 != (void *)0x0) && (lVar39 = FUN_00e8b990(), lVar39 != 0)) {
    puVar40 = (void*)local_40[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
  }
  local_80 = (double)puVar40[10];
  uVar33 = *(uint *)(local_40 + 3);
  local_190 = (uint64_t)uVar33;
  local_60 = (double)(uint64_t)(uVar33 + 3);
  if (-1 < (int)uVar33) {
    local_60 = (double)local_190;
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_198 = local_40;
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b00();
  }
  local_120 = local_40;
  FUN_00c92170();
  FUN_00c92160();
  uVar33 = SUB84(local_60,0) >> 2;
  local_60 = (double)CONCAT44(0,uVar33);
  if (3 < (int)local_190) {
    uVar62 = local_1b0[2];
    uVar55 = local_120[2];
    uVar43 = local_198[2];
    dVar63 = local_60;
    if (uVar33 < 4) {
      dVar54 = 0.0;
    }
    else {
      uVar57 = uVar55 + (int64_t)local_60 * 4;
      uVar51 = uVar43 + (int64_t)local_60 * 4;
      uVar58 = (int64_t)local_60 * 4 + uVar62;
      dVar54 = 0.0;
      if (((uVar51 <= uVar55 || uVar57 <= uVar43) && (uVar58 <= uVar55 || uVar57 <= uVar62)) &&
         (dVar54 = 0.0, uVar58 <= uVar43 || uVar51 <= uVar62)) {
        dVar54 = (double)(uint64_t)(uVar33 & 0xfffffffc);
        local_188 = local_178;
        puStack_180 = local_178;
        local_1d8._0_8_ = local_60;
        local_98 = (double)((int64_t)local_60 * 4 & 0xfffffffffffffff0);
        dVar63 = 0.0;
        do {
          auVar66._0_8_ = (double)(float)*(void*)(uVar62 + (int64_t)dVar63);
          auVar66._8_8_ =
               (double)(float)((uint64_t)*(void*)(uVar62 + (int64_t)dVar63) >> 0x20);
          uVar65 = *(void*)(uVar62 + 8 + (int64_t)dVar63);
          auVar74._0_8_ = (double)(float)uVar65;
          auVar74._8_8_ = (double)(float)((uint64_t)uVar65 >> 0x20);
          auVar69._8_8_ = puStack_180;
          auVar69._0_8_ = local_188;
          auVar81 = divpd(auVar69,auVar74);
          auVar69 = divpd(auVar69,auVar66);
          local_f8 = (double)CONCAT44((float)(auVar81._8_8_ * _UNK_0240df78),
                                      (float)(auVar81._0_8_ * g_0240df70));
          uStack_f0 = 0;
          local_b8 = (void*)
                     CONCAT44((float)(auVar69._8_8_ * _UNK_0240df78),
                              (float)(auVar69._0_8_ * g_0240df70));
          uStack_b0 = 0;
          local_78._0_8_ = _logf();
          local_78._8_8_ = extraout_XMM0_Qb;
          auVar81._0_8_ = _logf();
          auVar81._8_8_ = extraout_XMM0_Qb_00;
          local_78 = insertps(local_78,auVar81,0x10);
          auVar67._0_8_ = _logf();
          auVar67._8_8_ = extraout_XMM0_Qb_01;
          local_78 = insertps(local_78,auVar67,0x20);
          auVar68._0_8_ = _logf();
          auVar68._8_8_ = extraout_XMM0_Qb_02;
          auVar69 = insertps(local_78,auVar68,0x30);
          fVar64 = auVar69._0_4_ * g_02394170;
          fVar88 = auVar69._4_4_ * _UNK_02394174;
          fVar89 = auVar69._8_4_ * _UNK_02394178;
          fVar79 = auVar69._12_4_ * _UNK_0239417c;
          pfVar1 = (float *)(uVar55 + (int64_t)dVar63);
          *pfVar1 = fVar64;
          pfVar1[1] = fVar88;
          pfVar1[2] = fVar89;
          pfVar1[3] = fVar79;
          pfVar1 = (float *)(uVar43 + (int64_t)dVar63);
          *pfVar1 = fVar64;
          pfVar1[1] = fVar88;
          pfVar1[2] = fVar89;
          pfVar1[3] = fVar79;
          dVar63 = (double)((int64_t)dVar63 + 0x10);
        } while (local_98 != dVar63);
        dVar63 = (double)local_1d8._0_8_;
        if (dVar54 == (double)local_1d8._0_8_) goto LAB_014c7a68;
      }
    }
    do {
      fVar64 = (float)_logf((float)(((double)local_178 /
                                    (double)*(float *)(uVar62 + (int64_t)dVar54 * 4)) *
                                   g_0240de70));
      fVar64 = fVar64 * g_02394208;
      *(float *)(uVar55 + (int64_t)dVar54 * 4) = fVar64;
      *(float *)(uVar43 + (int64_t)dVar54 * 4) = fVar64;
      dVar54 = (double)((int64_t)dVar54 + 1);
    } while (dVar63 != dVar54);
  }
LAB_014c7a68:
  local_1a8 = -1;
  local_228 = 0;
  local_1c8 = -1;
  local_1c0 = 0;
  local_2b0 = *local_138;
  local_2a8 = 0;
  local_2a0 = *local_150;
  local_298 = 0;
  local_290 = *local_res8;
  local_288 = 0;
  FUN_014c4af0(&local_1c8,&local_228,&local_1c0,&local_2b0);
  lVar39 = local_1a8;
  if ((local_1c8 != -1 & local_89) == 1) {
    *local_1b8 = local_1c8;
    *local_220 = local_1c0;
  }
  puVar40 = local_158;
  puVar44 = local_d8;
  if (local_1a8 != -1) {
    local_1f8 = local_1c8;
    lVar42 = (**(code **)(*this_ptr + 0x380))();
    uVar33 = FUN_00e7d850(((double)(lVar39 - lVar42) / (double)local_178) * local_80);
    puVar40 = local_120;
    iVar34 = FUN_00e7d850(((double)local_228 / (double)local_178) * local_80);
    lVar39 = (**(code **)(*this_ptr + 0x380))();
    local_13c = FUN_00e7d850(((double)(local_1f8 - lVar39) / (double)local_178) * local_80);
    lVar39 = local_1c0;
    local_164 = FUN_00e7d850(((double)local_1c0 / (double)local_178) * local_80);
    uVar35 = FUN_00e7d850(g_0241c3a0 * local_80);
    local_78._0_4_ = uVar35;
    local_270 = puVar40[2];
    FUN_015c15b0(CONCAT44((int)((uint64_t)(g_0240e4a8 * local_80) >> 0x20),
                          (float)(g_0240e4a8 * local_80)),local_60);
    FUN_00c8e4f0();
    if (local_38 == '\0') {
      if (local_40 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00c92170();
    FUN_00c92160();
    local_230 = lVar39;
    local_160 = local_40;
    local_200 = (uint64_t)uVar33;
    iVar36 = FUN_00e7d850(g_0241b598 * local_80);
    iVar37 = 0x7f;
    if (iVar36 < 0x7f) {
      iVar37 = iVar36;
    }
    fVar64 = (float)(**(code **)(*this_ptr + 0x3e0))();
    puVar40 = local_158;
    uVar33 = (uint)local_200;
    local_a4 = iVar34 + uVar33;
    if (iVar34 < 1) {
      uVar62 = (uint64_t)local_a4;
    }
    else {
      uVar43 = (uint64_t)(int)uVar33;
      uVar62 = (uint64_t)(int)local_a4;
      uVar55 = uVar43;
      do {
        uVar57 = uVar55;
        if ((float)((uint)(*(float *)(local_120[2] + uVar55 * 4) - fVar64) & g_02390140) <
            g_02394240) break;
        uVar55 = uVar55 + 1;
        uVar57 = local_200;
      } while ((int64_t)uVar55 < (int64_t)uVar62);
      uVar33 = (uint)uVar57;
      do {
        if ((float)((uint)(*(float *)(local_120[2] + uVar62 * 4) - fVar64) & g_02390140) <
            g_02394240) goto LAB_014c7e0b;
        uVar62 = uVar62 - 1;
      } while ((int64_t)uVar43 < (int64_t)uVar62);
      uVar62 = (uint64_t)local_a4;
    }
LAB_014c7e0b:
    local_268 = local_160[2];
    iVar34 = (int)uVar62;
    lVar39 = (int64_t)iVar34;
    uVar35 = *(void*)(local_268 + lVar39 * 4);
    if (0 < (int)uVar33) {
      uVar5 = *(void*)(local_268 + (int64_t)(int)uVar33 * 4);
      if (uVar33 < 8) {
        uVar62 = 0;
      }
      else {
        uVar62 = (uint64_t)(uVar33 & 0xfffffff8);
        auVar82._4_4_ = uVar5;
        auVar82._0_4_ = uVar5;
        auVar82._8_4_ = uVar5;
        auVar82._12_4_ = uVar5;
        uVar55 = (uVar62 - 8 >> 3) + 1;
        uVar43 = (uint64_t)((uint)uVar55 & 7);
        if (uVar62 - 8 < 0x38) {
          lVar42 = 0;
        }
        else {
          lVar56 = -(uVar55 & 0xfffffffffffffff8);
          lVar42 = 0;
          do {
            *(uint8_t (*) [16])(local_268 + lVar42 * 4) = auVar82;
            *(uint8_t (*) [16])(local_268 + 0x10 + lVar42 * 4) = auVar82;
            *(uint8_t (*) [16])(local_268 + 0x20 + lVar42 * 4) = auVar82;
            *(uint8_t (*) [16])(local_268 + 0x30 + lVar42 * 4) = auVar82;
            *(uint8_t (*) [16])(local_268 + 0x40 + lVar42 * 4) = auVar82;
            *(uint8_t (*) [16])(local_268 + 0x50 + lVar42 * 4) = auVar82;
            *(uint8_t (*) [16])(local_268 + 0x60 + lVar42 * 4) = auVar82;
            *(uint8_t (*) [16])(local_268 + 0x70 + lVar42 * 4) = auVar82;
            *(uint8_t (*) [16])(local_268 + 0x80 + lVar42 * 4) = auVar82;
            *(uint8_t (*) [16])(local_268 + 0x90 + lVar42 * 4) = auVar82;
            *(uint8_t (*) [16])(local_268 + 0xa0 + lVar42 * 4) = auVar82;
            *(uint8_t (*) [16])(local_268 + 0xb0 + lVar42 * 4) = auVar82;
            *(uint8_t (*) [16])(local_268 + 0xc0 + lVar42 * 4) = auVar82;
            *(uint8_t (*) [16])(local_268 + 0xd0 + lVar42 * 4) = auVar82;
            *(uint8_t (*) [16])(local_268 + 0xe0 + lVar42 * 4) = auVar82;
            *(uint8_t (*) [16])(local_268 + 0xf0 + lVar42 * 4) = auVar82;
            lVar42 = lVar42 + 0x40;
            lVar56 = lVar56 + 8;
          } while (lVar56 != 0);
        }
        if (uVar43 != 0) {
          lVar42 = local_268 + lVar42 * 4;
          lVar56 = 0;
          do {
            *(uint8_t (*) [16])(lVar42 + lVar56) = auVar82;
            *(uint8_t (*) [16])(lVar42 + 0x10 + lVar56) = auVar82;
            lVar56 = lVar56 + 0x20;
          } while (uVar43 << 5 != lVar56);
        }
        if (uVar62 == uVar33) goto LAB_014c7f3e;
      }
      do {
        *(void*)(local_268 + uVar62 * 4) = uVar5;
        uVar62 = uVar62 + 1;
      } while (uVar33 != uVar62);
    }
LAB_014c7f3e:
    if (iVar34 < (int)local_60._0_4_) {
      uVar62 = (int)local_60._0_4_ - lVar39;
      if (7 < uVar62) {
        uVar43 = uVar62 & 0xfffffffffffffff8;
        auVar83._4_4_ = uVar35;
        auVar83._0_4_ = uVar35;
        auVar83._8_4_ = uVar35;
        auVar83._12_4_ = uVar35;
        uVar55 = (uVar43 - 8 >> 3) + 1;
        uVar57 = (uint64_t)((uint)uVar55 & 3);
        if (uVar43 - 8 < 0x18) {
          lVar56 = 0;
        }
        else {
          lVar42 = local_268 + lVar39 * 4;
          lVar46 = -(uVar55 & 0xfffffffffffffffc);
          lVar56 = 0;
          do {
            *(uint8_t (*) [16])(lVar42 + lVar56 * 4) = auVar83;
            *(uint8_t (*) [16])(lVar42 + 0x10 + lVar56 * 4) = auVar83;
            *(uint8_t (*) [16])(lVar42 + 0x20 + lVar56 * 4) = auVar83;
            *(uint8_t (*) [16])(lVar42 + 0x30 + lVar56 * 4) = auVar83;
            *(uint8_t (*) [16])(lVar42 + 0x40 + lVar56 * 4) = auVar83;
            *(uint8_t (*) [16])(lVar42 + 0x50 + lVar56 * 4) = auVar83;
            *(uint8_t (*) [16])(lVar42 + 0x60 + lVar56 * 4) = auVar83;
            *(uint8_t (*) [16])(lVar42 + 0x70 + lVar56 * 4) = auVar83;
            lVar56 = lVar56 + 0x20;
            lVar46 = lVar46 + 4;
          } while (lVar46 != 0);
        }
        if (uVar57 != 0) {
          lVar42 = local_268 + (lVar56 + lVar39) * 4;
          lVar56 = 0;
          do {
            *(uint8_t (*) [16])(lVar42 + lVar56) = auVar83;
            *(uint8_t (*) [16])(lVar42 + 0x10 + lVar56) = auVar83;
            lVar56 = lVar56 + 0x20;
          } while (uVar57 << 5 != lVar56);
        }
        if (uVar62 == uVar43) goto LAB_014c802e;
        lVar39 = lVar39 + uVar43;
      }
      do {
        *(void*)(local_268 + lVar39 * 4) = uVar35;
        lVar39 = lVar39 + 1;
      } while ((int)local_60._0_4_ != lVar39);
    }
LAB_014c802e:
    FUN_015c15b0((float)iVar37,local_60);
    iVar37 = (int)(iVar34 - uVar33) / 3;
    if ((int)local_78._0_4_ <= iVar37) {
      iVar37 = local_78._0_4_;
    }
    uVar33 = uVar33 + iVar37;
    local_260 = local_160[2];
    lVar39 = (int64_t)(iVar34 - iVar37);
    uVar35 = *(void*)(local_260 + lVar39 * 4);
    if (0 < (int)uVar33) {
      uVar5 = *(void*)(local_260 + (int64_t)(int)uVar33 * 4);
      if (uVar33 < 8) {
        uVar62 = 0;
      }
      else {
        uVar62 = (uint64_t)(uVar33 & 0xfffffff8);
        auVar84._4_4_ = uVar5;
        auVar84._0_4_ = uVar5;
        auVar84._8_4_ = uVar5;
        auVar84._12_4_ = uVar5;
        uVar55 = (uVar62 - 8 >> 3) + 1;
        uVar43 = (uint64_t)((uint)uVar55 & 7);
        if (uVar62 - 8 < 0x38) {
          lVar42 = 0;
        }
        else {
          lVar56 = -(uVar55 & 0xfffffffffffffff8);
          lVar42 = 0;
          do {
            *(uint8_t (*) [16])(local_260 + lVar42 * 4) = auVar84;
            *(uint8_t (*) [16])(local_260 + 0x10 + lVar42 * 4) = auVar84;
            *(uint8_t (*) [16])(local_260 + 0x20 + lVar42 * 4) = auVar84;
            *(uint8_t (*) [16])(local_260 + 0x30 + lVar42 * 4) = auVar84;
            *(uint8_t (*) [16])(local_260 + 0x40 + lVar42 * 4) = auVar84;
            *(uint8_t (*) [16])(local_260 + 0x50 + lVar42 * 4) = auVar84;
            *(uint8_t (*) [16])(local_260 + 0x60 + lVar42 * 4) = auVar84;
            *(uint8_t (*) [16])(local_260 + 0x70 + lVar42 * 4) = auVar84;
            *(uint8_t (*) [16])(local_260 + 0x80 + lVar42 * 4) = auVar84;
            *(uint8_t (*) [16])(local_260 + 0x90 + lVar42 * 4) = auVar84;
            *(uint8_t (*) [16])(local_260 + 0xa0 + lVar42 * 4) = auVar84;
            *(uint8_t (*) [16])(local_260 + 0xb0 + lVar42 * 4) = auVar84;
            *(uint8_t (*) [16])(local_260 + 0xc0 + lVar42 * 4) = auVar84;
            *(uint8_t (*) [16])(local_260 + 0xd0 + lVar42 * 4) = auVar84;
            *(uint8_t (*) [16])(local_260 + 0xe0 + lVar42 * 4) = auVar84;
            *(uint8_t (*) [16])(local_260 + 0xf0 + lVar42 * 4) = auVar84;
            lVar42 = lVar42 + 0x40;
            lVar56 = lVar56 + 8;
          } while (lVar56 != 0);
        }
        if (uVar43 != 0) {
          lVar42 = local_260 + lVar42 * 4;
          lVar56 = 0;
          do {
            *(uint8_t (*) [16])(lVar42 + lVar56) = auVar84;
            *(uint8_t (*) [16])(lVar42 + 0x10 + lVar56) = auVar84;
            lVar56 = lVar56 + 0x20;
          } while (uVar43 << 5 != lVar56);
        }
        if (uVar62 == uVar33) goto LAB_014c81ae;
      }
      do {
        *(void*)(local_260 + uVar62 * 4) = uVar5;
        uVar62 = uVar62 + 1;
      } while (uVar33 != uVar62);
    }
LAB_014c81ae:
    if (iVar34 - iVar37 < (int)local_60._0_4_) {
      uVar62 = (int)local_60._0_4_ - lVar39;
      if (7 < uVar62) {
        uVar43 = uVar62 & 0xfffffffffffffff8;
        auVar85._4_4_ = uVar35;
        auVar85._0_4_ = uVar35;
        auVar85._8_4_ = uVar35;
        auVar85._12_4_ = uVar35;
        uVar55 = (uVar43 - 8 >> 3) + 1;
        uVar57 = (uint64_t)((uint)uVar55 & 3);
        if (uVar43 - 8 < 0x18) {
          lVar46 = 0;
        }
        else {
          lVar42 = local_260 + lVar39 * 4;
          lVar56 = -(uVar55 & 0xfffffffffffffffc);
          lVar46 = 0;
          do {
            *(uint8_t (*) [16])(lVar42 + lVar46 * 4) = auVar85;
            *(uint8_t (*) [16])(lVar42 + 0x10 + lVar46 * 4) = auVar85;
            *(uint8_t (*) [16])(lVar42 + 0x20 + lVar46 * 4) = auVar85;
            *(uint8_t (*) [16])(lVar42 + 0x30 + lVar46 * 4) = auVar85;
            *(uint8_t (*) [16])(lVar42 + 0x40 + lVar46 * 4) = auVar85;
            *(uint8_t (*) [16])(lVar42 + 0x50 + lVar46 * 4) = auVar85;
            *(uint8_t (*) [16])(lVar42 + 0x60 + lVar46 * 4) = auVar85;
            *(uint8_t (*) [16])(lVar42 + 0x70 + lVar46 * 4) = auVar85;
            lVar46 = lVar46 + 0x20;
            lVar56 = lVar56 + 4;
          } while (lVar56 != 0);
        }
        if (uVar57 != 0) {
          lVar42 = local_260 + (lVar46 + lVar39) * 4;
          lVar56 = 0;
          do {
            *(uint8_t (*) [16])(lVar42 + lVar56) = auVar85;
            *(uint8_t (*) [16])(lVar42 + 0x10 + lVar56) = auVar85;
            lVar56 = lVar56 + 0x20;
          } while (uVar57 << 5 != lVar56);
        }
        if (uVar62 == uVar43) goto LAB_014c829e;
        lVar39 = lVar39 + uVar43;
      }
      do {
        *(void*)(local_260 + lVar39 * 4) = uVar35;
        lVar39 = lVar39 + 1;
      } while ((int)local_60._0_4_ != lVar39);
    }
LAB_014c829e:
    FUN_015c1480((float)iVar36,local_60);
    local_50 = local_120;
    FUN_00c8e4f0();
    local_188 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00c92170();
    FUN_00c92160();
    if (3 < (int)local_190) {
      uVar62 = local_160[2];
      uVar55 = local_188[2];
      uVar43 = (uint64_t)local_60 & 0xffffffff;
      if ((SUB84(local_60,0) < 8) ||
         ((uVar55 < uVar62 + uVar43 * 4 && (uVar62 < uVar55 + uVar43 * 4)))) {
        uVar57 = 0;
      }
      else {
        uVar57 = (uint64_t)(SUB84(local_60,0) & 0xfffffff8);
        uVar51 = (uVar57 - 8 >> 3) + 1;
        if (uVar57 - 8 == 0) {
          lVar39 = 0;
        }
        else {
          lVar42 = -(uVar51 & 0xfffffffffffffffe);
          lVar39 = 0;
          do {
            pfVar1 = (float *)(uVar62 + lVar39 * 4);
            pfVar3 = (float *)(uVar62 + 0x10 + lVar39 * 4);
            fVar64 = *pfVar3;
            fVar88 = pfVar3[1];
            fVar89 = pfVar3[2];
            fVar79 = pfVar3[3];
            pfVar3 = (float *)(uVar55 + lVar39 * 4);
            auVar86._0_4_ = *pfVar3 - *pfVar1;
            auVar86._4_4_ = pfVar3[1] - pfVar1[1];
            auVar86._8_4_ = pfVar3[2] - pfVar1[2];
            auVar86._12_4_ = pfVar3[3] - pfVar1[3];
            pfVar1 = (float *)(uVar55 + 0x10 + lVar39 * 4);
            fVar6 = pfVar1[1];
            fVar9 = pfVar1[2];
            fVar10 = pfVar1[3];
            pfVar3 = (float *)(uVar55 + 0x20 + lVar39 * 4);
            fVar11 = *pfVar3;
            fVar12 = pfVar3[1];
            fVar13 = pfVar3[2];
            fVar14 = pfVar3[3];
            pfVar3 = (float *)(uVar55 + 0x30 + lVar39 * 4);
            fVar15 = *pfVar3;
            fVar16 = pfVar3[1];
            fVar17 = pfVar3[2];
            fVar18 = pfVar3[3];
            *(uint8_t (*) [16])(uVar55 + lVar39 * 4) = auVar86;
            pfVar3 = (float *)(uVar55 + 0x10 + lVar39 * 4);
            *pfVar3 = *pfVar1 - fVar64;
            pfVar3[1] = fVar6 - fVar88;
            pfVar3[2] = fVar9 - fVar89;
            pfVar3[3] = fVar10 - fVar79;
            pfVar1 = (float *)(uVar62 + 0x20 + lVar39 * 4);
            fVar64 = pfVar1[1];
            fVar88 = pfVar1[2];
            fVar89 = pfVar1[3];
            pfVar3 = (float *)(uVar62 + 0x30 + lVar39 * 4);
            fVar79 = *pfVar3;
            fVar6 = pfVar3[1];
            fVar9 = pfVar3[2];
            fVar10 = pfVar3[3];
            pfVar3 = (float *)(uVar55 + 0x20 + lVar39 * 4);
            *pfVar3 = fVar11 - *pfVar1;
            pfVar3[1] = fVar12 - fVar64;
            pfVar3[2] = fVar13 - fVar88;
            pfVar3[3] = fVar14 - fVar89;
            pfVar1 = (float *)(uVar55 + 0x30 + lVar39 * 4);
            *pfVar1 = fVar15 - fVar79;
            pfVar1[1] = fVar16 - fVar6;
            pfVar1[2] = fVar17 - fVar9;
            pfVar1[3] = fVar18 - fVar10;
            lVar39 = lVar39 + 0x10;
            lVar42 = lVar42 + 2;
          } while (lVar42 != 0);
        }
        if ((uVar51 & 1) != 0) {
          pfVar1 = (float *)(uVar62 + lVar39 * 4);
          pfVar3 = (float *)(uVar62 + 0x10 + lVar39 * 4);
          fVar64 = *pfVar3;
          fVar88 = pfVar3[1];
          fVar89 = pfVar3[2];
          fVar79 = pfVar3[3];
          pfVar3 = (float *)(uVar55 + lVar39 * 4);
          auVar87._0_4_ = *pfVar3 - *pfVar1;
          auVar87._4_4_ = pfVar3[1] - pfVar1[1];
          auVar87._8_4_ = pfVar3[2] - pfVar1[2];
          auVar87._12_4_ = pfVar3[3] - pfVar1[3];
          pfVar1 = (float *)(uVar55 + 0x10 + lVar39 * 4);
          fVar6 = pfVar1[1];
          fVar9 = pfVar1[2];
          fVar10 = pfVar1[3];
          *(uint8_t (*) [16])(uVar55 + lVar39 * 4) = auVar87;
          pfVar3 = (float *)(uVar55 + 0x10 + lVar39 * 4);
          *pfVar3 = *pfVar1 - fVar64;
          pfVar3[1] = fVar6 - fVar88;
          pfVar3[2] = fVar9 - fVar89;
          pfVar3[3] = fVar10 - fVar79;
        }
        if (uVar57 == uVar43) goto LAB_014c84f3;
      }
      uVar58 = ~uVar57;
      for (uVar51 = (uint64_t)local_60 & 3; uVar51 != 0; uVar51 = uVar51 - 1) {
        *(float *)(uVar55 + uVar57 * 4) =
             *(float *)(uVar55 + uVar57 * 4) - *(float *)(uVar62 + uVar57 * 4);
        uVar57 = uVar57 + 1;
      }
      if (2 < uVar58 + uVar43) {
        do {
          *(float *)(uVar55 + uVar57 * 4) =
               *(float *)(uVar55 + uVar57 * 4) - *(float *)(uVar62 + uVar57 * 4);
          *(float *)(uVar55 + 4 + uVar57 * 4) =
               *(float *)(uVar55 + 4 + uVar57 * 4) - *(float *)(uVar62 + 4 + uVar57 * 4);
          *(float *)(uVar55 + 8 + uVar57 * 4) =
               *(float *)(uVar55 + 8 + uVar57 * 4) - *(float *)(uVar62 + 8 + uVar57 * 4);
          *(float *)(uVar55 + 0xc + uVar57 * 4) =
               *(float *)(uVar55 + 0xc + uVar57 * 4) - *(float *)(uVar62 + 0xc + uVar57 * 4);
          uVar57 = uVar57 + 4;
        } while (uVar43 != uVar57);
      }
    }
LAB_014c84f3:
    puVar44 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar44 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    local_b8 = puVar44;
    if (7 < (int)local_190) {
      uVar62 = 2;
      if (2 < SUB84(local_60,0)) {
        uVar62 = (uint64_t)local_60 & 0xffffffff;
      }
      uVar55 = 1;
      do {
        lVar39 = local_188[2];
        fVar64 = *(float *)(lVar39 + -4 + uVar55 * 4);
        if (((0.0 <= fVar64) &&
            (pfVar1 = (float *)(lVar39 + uVar55 * 4), *pfVar1 <= 0.0 && *pfVar1 != 0.0)) ||
           ((fVar64 <= 0.0 && (0.0 < *(float *)(lVar39 + uVar55 * 4))))) {
          iVar34 = *(int *)(puVar44 + 3);
          FUN_00c8e340();
          *(int *)(puVar44[2] + (int64_t)iVar34) = (int)uVar55;
        }
        uVar55 = uVar55 + 1;
      } while (uVar62 != uVar55);
    }
    puVar45 = local_b8;
    pVar49 = *(void* *)(local_b8 + 3);
    local_148 = (uint64_t)pVar49;
    local_c0 = (uint64_t)(pVar49 + 3);
    if (-1 < (int)pVar49) {
      local_c0 = local_148;
    }
    uVar33 = (uint)local_c0 & 0xfffffffc;
    FUN_00c8e690();
    local_100 = local_40;
    if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    FUN_00c8e690();
    local_d0 = local_40;
    if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    FUN_00c8e690();
    local_c8 = local_40;
    if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    local_128 = g_0238fee8 / local_80;
    local_c0 = (uint64_t)(uint)((int)local_c0 >> 2);
    ___bzero();
    puVar44 = local_188;
    uVar73 = _UNK_0239014c;
    uVar72 = _UNK_02390148;
    uVar48 = _UNK_02390144;
    uVar53 = g_02390140;
    local_140 = 0;
    if ((int)(uint)local_148 < 0xc) {
      local_110 = -1;
      lVar39 = 0;
      local_130 = 0.0;
      local_88 = -1;
      uVar33 = local_a4;
    }
    else {
      if (3 < (int)local_190) {
        lVar39 = local_188[2];
        if (SUB84(local_60,0) < 8) {
          uVar62 = 0;
        }
        else {
          uVar62 = (uint64_t)(SUB84(local_60,0) & 0xfffffff8);
          uVar55 = (uVar62 - 8 >> 3) + 1;
          if (uVar62 - 8 == 0) {
            lVar42 = 0;
          }
          else {
            lVar56 = -(uVar55 & 0xfffffffffffffffe);
            lVar42 = 0;
            do {
              puVar2 = (uint *)(lVar39 + lVar42 * 4);
              uVar77 = puVar2[1];
              uVar78 = puVar2[2];
              uVar80 = puVar2[3];
              puVar4 = (uint *)(lVar39 + 0x10 + lVar42 * 4);
              uVar19 = *puVar4;
              uVar20 = puVar4[1];
              uVar21 = puVar4[2];
              uVar22 = puVar4[3];
              puVar4 = (uint *)(lVar39 + 0x20 + lVar42 * 4);
              uVar23 = *puVar4;
              uVar24 = puVar4[1];
              uVar25 = puVar4[2];
              uVar26 = puVar4[3];
              puVar4 = (uint *)(lVar39 + 0x30 + lVar42 * 4);
              uVar27 = *puVar4;
              uVar28 = puVar4[1];
              uVar29 = puVar4[2];
              uVar30 = puVar4[3];
              puVar4 = (uint *)(lVar39 + lVar42 * 4);
              *puVar4 = *puVar2 & uVar53;
              puVar4[1] = uVar77 & uVar48;
              puVar4[2] = uVar78 & uVar72;
              puVar4[3] = uVar80 & uVar73;
              puVar2 = (uint *)(lVar39 + 0x10 + lVar42 * 4);
              *puVar2 = uVar19 & uVar53;
              puVar2[1] = uVar20 & uVar48;
              puVar2[2] = uVar21 & uVar72;
              puVar2[3] = uVar22 & uVar73;
              puVar2 = (uint *)(lVar39 + 0x20 + lVar42 * 4);
              *puVar2 = uVar23 & uVar53;
              puVar2[1] = uVar24 & uVar48;
              puVar2[2] = uVar25 & uVar72;
              puVar2[3] = uVar26 & uVar73;
              puVar2 = (uint *)(lVar39 + 0x30 + lVar42 * 4);
              *puVar2 = uVar27 & uVar53;
              puVar2[1] = uVar28 & uVar48;
              puVar2[2] = uVar29 & uVar72;
              puVar2[3] = uVar30 & uVar73;
              lVar42 = lVar42 + 0x10;
              lVar56 = lVar56 + 2;
            } while (lVar56 != 0);
          }
          if ((uVar55 & 1) != 0) {
            puVar2 = (uint *)(lVar39 + lVar42 * 4);
            puVar4 = (uint *)(lVar39 + 0x10 + lVar42 * 4);
            uVar53 = puVar2[1] & _UNK_02390144;
            uVar48 = puVar2[2] & _UNK_02390148;
            uVar72 = puVar2[3] & _UNK_0239014c;
            uVar73 = *puVar4 & g_02390140;
            uVar77 = puVar4[1] & _UNK_02390144;
            uVar78 = puVar4[2] & _UNK_02390148;
            uVar80 = puVar4[3] & _UNK_0239014c;
            puVar4 = (uint *)(lVar39 + lVar42 * 4);
            *puVar4 = *puVar2 & g_02390140;
            puVar4[1] = uVar53;
            puVar4[2] = uVar48;
            puVar4[3] = uVar72;
            puVar2 = (uint *)(lVar39 + 0x10 + lVar42 * 4);
            *puVar2 = uVar73;
            puVar2[1] = uVar77;
            puVar2[2] = uVar78;
            puVar2[3] = uVar80;
          }
          puVar45 = local_b8;
          uVar53 = g_02390140;
          if (uVar62 == ((uint64_t)local_60 & 0xffffffff)) goto LAB_014c8886;
        }
        do {
          *(uint *)(lVar39 + uVar62 * 4) = *(uint *)(lVar39 + uVar62 * 4) & uVar53;
          uVar62 = uVar62 + 1;
        } while (((uint64_t)local_60 & 0xffffffff) != uVar62);
      }
LAB_014c8886:
      piVar7 = (int *)puVar45[2];
      iVar34 = *piVar7;
      iVar37 = *(int *)((int64_t)*(int *)(puVar45 + 3) + -4 + (int64_t)piVar7);
      local_20c = uVar33;
      if (0 < iVar34) {
        ___bzero();
      }
      puVar40 = local_100;
      if (iVar37 + 1 < (int)local_60._0_4_) {
        ___bzero();
      }
      fVar64 = g_0239011c;
      local_dc = (int)local_c0 - 1;
      if (3 < (int)(uint)local_148) {
        lVar39 = puVar40[2];
        uVar62 = 0;
        do {
          iVar36 = piVar7[uVar62];
          uVar55 = (uint64_t)iVar36;
          fVar89 = 0.0;
          fVar88 = 0.0;
          if (uVar62 != 0) {
            iVar47 = piVar7[(int)uVar62 - 1];
            uVar43 = (uint64_t)iVar47;
            fVar88 = 0.0;
            if (iVar47 < iVar36) {
              lVar42 = puVar44[2];
              uVar51 = ~uVar43;
              uVar57 = (uint64_t)(uint)(iVar36 - iVar47) & 3;
              if ((iVar36 - iVar47 & 3U) == 0) {
                fVar88 = 0.0;
              }
              else {
                fVar88 = 0.0;
                do {
                  fVar79 = *(float *)(lVar42 + uVar43 * 4);
                  if (fVar79 <= fVar88) {
                    fVar79 = fVar88;
                  }
                  fVar88 = fVar79;
                  uVar43 = uVar43 + 1;
                  uVar57 = uVar57 - 1;
                } while (uVar57 != 0);
              }
              if (2 < uVar51 + uVar55) {
                do {
                  fVar79 = *(float *)(lVar42 + uVar43 * 4);
                  if (fVar79 <= fVar88) {
                    fVar79 = fVar88;
                  }
                  fVar88 = *(float *)(lVar42 + 4 + uVar43 * 4);
                  if (fVar88 <= fVar79) {
                    fVar88 = fVar79;
                  }
                  fVar79 = *(float *)(lVar42 + 8 + uVar43 * 4);
                  if (fVar79 <= fVar88) {
                    fVar79 = fVar88;
                  }
                  fVar88 = *(float *)(lVar42 + 0xc + uVar43 * 4);
                  if (fVar88 <= fVar79) {
                    fVar88 = fVar79;
                  }
                  uVar43 = uVar43 + 4;
                } while (uVar55 != uVar43);
              }
            }
          }
          uVar43 = uVar62 + 1;
          if ((int64_t)uVar62 < (int64_t)(int)local_dc) {
            iVar47 = piVar7[uVar43];
            if (iVar36 < iVar47) {
              lVar42 = puVar44[2];
              uVar51 = ~uVar55;
              uVar57 = (uint64_t)(uint)(iVar47 - iVar36) & 3;
              if ((iVar47 - iVar36 & 3U) == 0) {
                fVar89 = 0.0;
              }
              else {
                fVar89 = 0.0;
                do {
                  fVar79 = *(float *)(lVar42 + uVar55 * 4);
                  if (fVar79 <= fVar89) {
                    fVar79 = fVar89;
                  }
                  fVar89 = fVar79;
                  uVar55 = uVar55 + 1;
                  uVar57 = uVar57 - 1;
                } while (uVar57 != 0);
              }
              puVar44 = local_188;
              if (2 < uVar51 + (int64_t)iVar47) {
                do {
                  fVar79 = *(float *)(lVar42 + uVar55 * 4);
                  if (fVar79 <= fVar89) {
                    fVar79 = fVar89;
                  }
                  fVar89 = *(float *)(lVar42 + 4 + uVar55 * 4);
                  if (fVar89 <= fVar79) {
                    fVar89 = fVar79;
                  }
                  fVar79 = *(float *)(lVar42 + 8 + uVar55 * 4);
                  if (fVar79 <= fVar89) {
                    fVar79 = fVar89;
                  }
                  fVar89 = *(float *)(lVar42 + 0xc + uVar55 * 4);
                  if (fVar89 <= fVar79) {
                    fVar89 = fVar79;
                  }
                  uVar55 = uVar55 + 4;
                } while ((int64_t)iVar47 != uVar55);
              }
            }
          }
          *(float *)(lVar39 + uVar62 * 4) = (fVar88 + fVar89) * fVar64;
          uVar62 = uVar43;
        } while (uVar43 != (local_c0 & 0xffffffff));
      }
      iVar37 = FUN_00e7d780((float)(iVar37 - iVar34) / (float)(int)local_dc);
      iVar36 = FUN_00e7d850(local_80 * g_0240e4c0);
      iVar34 = local_164;
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      fVar64 = g_0239011c;
      if (7 < (int)(uint)local_148) {
        piVar7 = (int *)local_b8[2];
        uVar62 = 2;
        if (2 < (int)local_c0) {
          uVar62 = local_c0 & 0xffffffff;
        }
        lVar39 = local_100[2];
        uVar55 = 1;
        iVar47 = *piVar7;
        do {
          iVar38 = piVar7[uVar55];
          uVar33 = iVar38 - iVar47;
          if ((uVar33 != 0 && iVar47 <= iVar38) && ((int)uVar33 < iVar36)) {
            *(float *)(local_40[2] + (uint64_t)uVar33 * 4) =
                 (*(float *)(lVar39 + -4 + uVar55 * 4) + *(float *)(lVar39 + uVar55 * 4)) * fVar64 +
                 *(float *)(local_40[2] + (uint64_t)uVar33 * 4);
          }
          uVar55 = uVar55 + 1;
          iVar47 = iVar38;
        } while (uVar62 != uVar55);
      }
      local_258 = local_40[2];
      local_1f0 = local_40;
      FUN_015c15b0(1,iVar36);
      local_250 = local_40[2];
      fVar64 = (float)FUN_015b32a0();
      puVar40 = local_d0;
      if (g_02394274 < fVar64) {
        iVar37 = local_218;
      }
      fVar64 = (float)iVar37;
      local_88 = CONCAT44(local_88._4_4_,fVar64);
      if (3 < (int)(uint)local_148) {
        pfVar1 = (float *)local_d0[2];
        iVar36 = -1;
        if (7 < (int)(uint)local_148) {
          iVar47 = ((int *)local_b8[2])[1] - (*(int *)local_b8[2] + iVar37);
          iVar36 = -iVar47;
          if (0 < iVar47) {
            iVar36 = iVar47;
          }
        }
        *pfVar1 = (float)(iVar36 * 2) / fVar64;
        if (((uint)local_148 & 0xfffffffc) != 4) {
          lVar39 = local_b8[2];
          uVar62 = 0;
          uVar55 = 1;
          do {
            iVar47 = *(int *)(lVar39 + uVar55 * 4) -
                     (*(int *)(lVar39 + (uVar62 & 0xffffffff) * 4) + iVar37);
            iVar36 = -iVar47;
            if (0 < iVar47) {
              iVar36 = iVar47;
            }
            uVar43 = uVar55 + 1;
            iVar47 = iVar36;
            if ((int64_t)uVar55 < (int64_t)(int)local_dc) {
              iVar38 = *(int *)(local_b8[2] + 4 + uVar55 * 4) -
                       (*(int *)(local_b8[2] + uVar55 * 4) + iVar37);
              iVar47 = -iVar38;
              if (0 < iVar38) {
                iVar47 = iVar38;
              }
            }
            pfVar1[uVar55] = (float)(iVar47 + iVar36) / fVar64;
            uVar62 = uVar62 + 1;
            uVar55 = uVar43;
          } while ((local_c0 & 0xffffffff) != uVar43);
        }
      }
      local_50 = local_b8;
      FUN_00c8e4f0();
      if (local_38 == '\0') {
        if (local_40 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_118 = local_40;
      FUN_00c92170();
      FUN_00c92160();
      iVar34 = iVar34 + local_13c;
      dVar63 = 9.88131291682493e-324;
      if (2 < (int)local_dc) {
        dVar63 = (double)(uint64_t)local_dc;
      }
      dVar54 = 4.94065645841247e-324;
      do {
        fVar64 = *(float *)(puVar40[2] + (int64_t)dVar54 * 4);
        fVar88 = fVar64 * fVar64 * g_02394298 + g_0239011c;
        fVar64 = g_02390124;
        if (fVar88 <= g_02390124) {
          fVar64 = fVar88;
        }
        lVar39 = local_118[2];
        fVar88 = (g_02390124 - fVar64) * g_0239011c;
        uVar35 = FUN_00e7d780((float)*(int *)(lVar39 + 4 + (int64_t)dVar54 * 4) * fVar88 +
                              (float)*(int *)(lVar39 + -4 + (int64_t)dVar54 * 4) * fVar88 +
                              (float)*(int *)(lVar39 + (int64_t)dVar54 * 4) * fVar64);
        puVar44 = local_100;
        *(void*)(local_b8[2] + (int64_t)dVar54 * 4) = uVar35;
        dVar54 = (double)((int64_t)dVar54 + 1);
      } while (dVar63 != dVar54);
      local_164 = iVar34;
      ___bzero();
      ___bzero();
      local_f8 = (double)CONCAT44(local_f8._4_4_,SUB84(local_60,0) + -1);
      local_108 = local_b8[2];
      local_110 = puVar40[2];
      local_238 = puVar44[2];
      dVar54 = 4.94065645841247e-324;
      fVar64 = g_02390124;
      iVar34 = *(int *)(local_108 + 4);
      local_130 = dVar63;
      do {
        iVar37 = *(int *)(local_108 + -4 + (int64_t)dVar54 * 4);
        iVar36 = *(int *)(local_108 + 4 + (int64_t)dVar54 * 4);
        iVar52 = iVar34 - iVar37;
        iVar61 = iVar36 - iVar34;
        iVar38 = iVar61 - iVar52;
        iVar47 = iVar52;
        if (iVar61 < iVar52) {
          iVar47 = iVar61;
        }
        iVar8 = -iVar38;
        if (0 < iVar38) {
          iVar8 = iVar38;
        }
        local_80 = (double)CONCAT44(local_80._4_4_,iVar36);
        fVar64 = ((float)iVar8 / (float)(iVar36 - iVar37)) * g_02394210 + fVar64;
        fVar88 = 0.0;
        if (0.0 <= fVar64) {
          fVar88 = fVar64;
        }
        local_98 = dVar54;
        local_78._0_4_ = fVar88;
        uVar33 = _logf((float)((iVar36 - iVar37) / 2) / (float)local_88);
        dVar31 = local_98;
        puVar45 = local_b8;
        dVar63 = local_130;
        fVar64 = g_02390124 - (float)(uVar33 & g_02390140);
        iVar36 = iVar47 + 3;
        if (-1 < iVar47) {
          iVar36 = iVar47;
        }
        fVar88 = 0.0;
        if (0.0 <= fVar64) {
          fVar88 = fVar64;
        }
        uVar48 = iVar36 >> 2;
        pvVar41 = (void *)(uint64_t)uVar48;
        sVar59 = uVar48 * 2 + 1;
        iVar36 = (int)((uVar48 * 2 - ((int)sVar59 >> 0x1f)) + 1) >> 1;
        uVar33 = (iVar52 / 2 + iVar37) - iVar36;
        uVar53 = uVar33 + 2 + uVar48 * 2;
        if ((int)uVar33 < 0) {
          uVar33 = 0;
        }
        if ((int)local_60._0_4_ <= (int)uVar53) {
          uVar53 = (uint)local_f8._0_4_;
        }
        auVar71 = ZEXT816(0);
        if ((int)uVar33 < (int)uVar53) {
          lVar39 = local_188[2];
          uVar62 = (uint64_t)uVar33;
          uVar55 = ~uVar62;
          if ((uVar53 - uVar33 & 7) == 0) {
            auVar71 = ZEXT816(0);
          }
          else {
            lVar42 = -((uint64_t)(uVar53 - uVar33) & 7);
            auVar71 = ZEXT816(0);
            do {
              auVar71._0_4_ = auVar71._0_4_ + *(float *)(lVar39 + uVar62 * 4);
              uVar62 = uVar62 + 1;
              lVar42 = lVar42 + 1;
            } while (lVar42 != 0);
          }
          if (6 < uVar55 + uVar53) {
            do {
              auVar71._0_4_ =
                   auVar71._0_4_ + *(float *)(lVar39 + uVar62 * 4) +
                   *(float *)(lVar39 + 4 + uVar62 * 4) + *(float *)(lVar39 + 8 + uVar62 * 4) +
                   *(float *)(lVar39 + 0xc + uVar62 * 4) + *(float *)(lVar39 + 0x10 + uVar62 * 4) +
                   *(float *)(lVar39 + 0x14 + uVar62 * 4) + *(float *)(lVar39 + 0x18 + uVar62 * 4) +
                   *(float *)(lVar39 + 0x1c + uVar62 * 4);
              uVar62 = uVar62 + 8;
            } while (uVar53 != uVar62);
          }
        }
        dVar54 = (double)((int64_t)local_98 + 1);
        local_78._0_4_ = (float)local_78._0_4_ * fVar88;
        uVar33 = (iVar61 / 2 + iVar34) - iVar36;
        uVar53 = uVar48 * 2 + 2 + uVar33;
        if ((int)uVar33 < 0) {
          uVar33 = 0;
        }
        if ((int)local_60._0_4_ <= (int)uVar53) {
          uVar53 = (uint)local_f8._0_4_;
        }
        auVar76 = ZEXT816(0);
        if ((int)uVar33 < (int)uVar53) {
          pvVar41 = (void *)local_188[2];
          uVar62 = (uint64_t)uVar33;
          uVar55 = ~uVar62;
          if ((uVar53 - uVar33 & 7) == 0) {
            auVar76 = ZEXT816(0);
          }
          else {
            lVar39 = -((uint64_t)(uVar53 - uVar33) & 7);
            auVar76 = ZEXT816(0);
            do {
              auVar76._0_4_ = auVar76._0_4_ + *(float *)((int64_t)pvVar41 + uVar62 * 4);
              uVar62 = uVar62 + 1;
              lVar39 = lVar39 + 1;
            } while (lVar39 != 0);
          }
          if (6 < uVar55 + uVar53) {
            do {
              auVar76._0_4_ =
                   auVar76._0_4_ + *(float *)((int64_t)pvVar41 + uVar62 * 4) +
                   *(float *)((int64_t)pvVar41 + uVar62 * 4 + 4) +
                   *(float *)((int64_t)pvVar41 + uVar62 * 4 + 8) +
                   *(float *)((int64_t)pvVar41 + uVar62 * 4 + 0xc) +
                   *(float *)((int64_t)pvVar41 + uVar62 * 4 + 0x10) +
                   *(float *)((int64_t)pvVar41 + uVar62 * 4 + 0x14) +
                   *(float *)((int64_t)pvVar41 + uVar62 * 4 + 0x18) +
                   *(float *)((int64_t)pvVar41 + uVar62 * 4 + 0x1c);
              uVar62 = uVar62 + 8;
            } while (uVar53 != uVar62);
          }
        }
        auVar69 = insertps(auVar71,auVar76,0x10);
        auVar75._0_4_ = (float)(int)sVar59;
        auVar75._4_4_ = auVar75._0_4_;
        auVar75._8_8_ = 0;
        auVar69 = divps(auVar69,auVar75);
        local_1d8 = maxps(g_023941a0,auVar69);
        fVar64 = local_1d8._4_4_;
        uStack_1e0 = local_1d8._12_4_;
        local_1e8 = (double)CONCAT44(fVar64,fVar64);
        auVar70._4_12_ = local_1d8._4_12_;
        auVar70._0_4_ = local_1d8._0_4_ / fVar64;
        uStack_1dc = uStack_1e0;
        uVar33 = _logf(auVar70._0_8_);
        puVar44 = local_c8;
        fVar64 = g_02390124;
        fVar89 = g_02390124 - (float)(uVar33 & g_02390140);
        fVar88 = 0.0;
        if (0.0 <= fVar89) {
          fVar88 = fVar89;
        }
        fVar89 = SQRT((float)local_78._0_4_ * SQRT((float)local_78._0_4_ * fVar88));
        fVar88 = SQRT(fVar88 * SQRT((float)local_78._0_4_ * fVar88));
        if (fVar89 <= fVar88) {
          fVar88 = fVar89;
        }
        *(float *)(local_110 + (int64_t)dVar31 * 4) = fVar88;
        *(float *)(local_238 + (int64_t)dVar31 * 4) =
             (float)((double)(((float)local_1d8._0_4_ + (float)local_1e8) * g_0239011c) *
                    g_02391030);
        iVar34 = (int)local_80._0_4_;
      } while (dVar54 != dVar63);
      _memcpy(pvVar41,(void *)(int64_t)(int)local_20c,sVar59);
      local_248 = puVar44[2];
      iVar34 = (int)local_c0;
      FUN_015c15b0(0,local_c0 & 0xffffffff);
      puVar40 = local_158;
      iVar37 = (int)local_148;
      iVar36 = iVar37 + 7;
      if (-1 < iVar37) {
        iVar36 = iVar37;
      }
      local_140 = iVar36 >> 3;
      local_240 = puVar44[2];
      uVar62 = local_148;
      uVar35 = FUN_015b32a0(local_148,&local_140);
      pVar49 = (void*)uVar62;
      local_78._0_4_ = uVar35;
      fVar88 = (float)_powf();
      fVar64 = 0.0;
      fVar89 = 0.0;
      if ((char)local_210 == '\0') {
        fVar89 = g_0239011c / fVar88;
      }
      fVar88 = g_02394254;
      if ((char)local_210 == '\0') {
        fVar88 = g_02421228;
        fVar64 = g_02394288;
      }
      local_110 = -1;
      uVar33 = local_a4;
      if ((float)local_78._0_4_ <= fVar64) {
        lVar39 = 0;
        local_130 = 0.0;
        local_88 = -1;
      }
      else {
        lVar39 = (int64_t)(int)local_140;
        uVar55 = (uint64_t)local_140;
        uVar62 = (uint64_t)local_140;
        puVar44 = puVar45;
        if (-1 < lVar39) {
          if (local_140 != 0) {
            do {
              uVar43 = (uint64_t)((int)uVar55 - 1);
              fVar64 = (float)(*(int *)(puVar45[2] + uVar55 * 4) - *(int *)(puVar45[2] + uVar43 * 4)
                              ) / (float)local_88;
              if (fVar64 < g_02390124) {
                fVar64 = g_02390124 / fVar64;
              }
              fVar79 = *(float *)(local_c8[2] + uVar55 * 4);
              fVar6 = *(float *)(local_c8[2] + uVar43 * 4);
              uVar62 = uVar55;
              puVar44 = local_b8;
              iVar34 = (int)local_c0;
              if (((((double)(*(float *)(local_d0[2] + uVar43 * 4) +
                             *(float *)(local_100[2] + uVar43 * 4)) < g_02390108) ||
                   (fVar79 < fVar6 && fVar79 < (float)local_78._0_4_ * g_02391094)) ||
                  (fVar6 < fVar88)) || (g_02394244 < fVar64)) goto joined_r0x014cb52c;
              uVar55 = uVar55 - 1;
            } while (uVar55 != 0);
          }
          uVar62 = 0;
        }
joined_r0x014cb52c:
        pVar60 = local_140;
        iVar37 = iVar34;
        if ((int)local_140 < iVar34) {
          lVar42 = local_c8[2] + lVar39 * 4;
          lVar56 = lVar39 * 4 + 4;
          lVar46 = 0;
          do {
            iVar37 = (int)local_c0;
            if (lVar39 + lVar46 < (int64_t)(int)local_dc) {
              fVar64 = (float)(*(int *)(local_b8[2] + lVar56 + lVar46 * 4) -
                              *(int *)(local_b8[2] + lVar56 + -4 + lVar46 * 4)) / (float)local_88;
              if (fVar64 < g_02390124) {
                fVar64 = g_02390124 / fVar64;
              }
              fVar79 = *(float *)(lVar42 + lVar46 * 4);
              fVar6 = *(float *)(lVar42 + 4 + lVar46 * 4);
              if ((((double)(*(float *)(local_d0[2] + lVar56 + lVar46 * 4) +
                            *(float *)(local_100[2] + lVar56 + lVar46 * 4)) < g_02390108) ||
                  (fVar79 < fVar6 && fVar79 < (float)local_78._0_4_ * g_02391094)) ||
                 ((fVar6 < fVar88 || (g_02394244 < fVar64)))) {
                pVar60 = local_140 + (int)lVar46;
                puVar44 = local_b8;
                break;
              }
            }
            lVar46 = lVar46 + 1;
            puVar44 = local_b8;
            pVar60 = local_dc;
          } while ((lVar39 - iVar34) + lVar46 != 0);
        }
        uVar48 = (uint)uVar62;
        iVar34 = pVar60 - uVar48;
        pVar49 = iVar34 % 2;
        uVar53 = uVar48;
        if (pVar49 == 1) {
          uVar53 = 0xffffffff;
          if (0 < (int)uVar48) {
            uVar53 = uVar48 - 1;
            fVar64 = (float)(*(int *)(puVar44[2] + (uVar62 & 0xffffffff) * 4) -
                            *(int *)(puVar44[2] + (uint64_t)uVar53 * 4)) / (float)local_88;
            if (fVar64 < g_02390124) {
              fVar64 = g_02390124 / fVar64;
            }
            if (g_02394244 < fVar64) {
              uVar53 = 0xffffffff;
            }
          }
          pVar49 = pVar60 + 1;
          pVar50 = 0xffffffff;
          if (((int)pVar49 < iVar37) && (pVar49 != 0xffffffff)) {
            fVar64 = (float)(*(int *)(puVar44[2] + (int64_t)(int)pVar49 * 4) -
                            *(int *)(puVar44[2] + (int64_t)(int)pVar60 * 4)) / (float)local_88;
            if (fVar64 < g_02390124) {
              fVar64 = g_02390124 / fVar64;
            }
            pVar50 = pVar49;
            if (g_02394244 < fVar64) {
              pVar50 = 0xffffffff;
            }
          }
          pVar49 = CONCAT31((int3)(pVar60 - local_140 >> 8),pVar50 != 0xffffffff);
          if (uVar53 == 0xffffffff) {
            uVar53 = uVar48;
          }
          if ((int)(pVar60 - local_140) < (int)(local_140 - uVar48) && pVar50 != 0xffffffff) {
            uVar53 = uVar48;
            pVar60 = pVar50;
          }
          iVar34 = pVar60 - uVar53;
        }
        fVar64 = 0.0;
        if ((int)uVar53 <= (int)pVar60) {
          lVar39 = local_100[2];
          lVar42 = (int64_t)(int)uVar53;
          fVar64 = 0.0;
          for (uVar48 = (pVar60 + 1) - uVar53 & 7; uVar48 != 0; uVar48 = uVar48 - 1) {
            fVar64 = fVar64 + *(float *)(lVar39 + lVar42 * 4);
            lVar42 = lVar42 + 1;
          }
          pVar49 = 0;
          if (6 < pVar60 - uVar53) {
            do {
              fVar64 = fVar64 + *(float *)(lVar39 + lVar42 * 4) +
                       *(float *)(lVar39 + 4 + lVar42 * 4) + *(float *)(lVar39 + 8 + lVar42 * 4) +
                       *(float *)(lVar39 + 0xc + lVar42 * 4) +
                       *(float *)(lVar39 + 0x10 + lVar42 * 4) +
                       *(float *)(lVar39 + 0x14 + lVar42 * 4) +
                       *(float *)(lVar39 + 0x18 + lVar42 * 4) +
                       *(float *)(lVar39 + 0x1c + lVar42 * 4);
              lVar42 = lVar42 + 8;
            } while (pVar60 + 1 != (int)lVar42);
          }
        }
        if ((fVar64 >= fVar89 && iVar34 >= 2) && (iVar34 % 2 == 1)) {
          iVar37 = pVar60 - local_140;
          pVar60 = pVar60 - ((int)(local_140 - uVar53) <= iVar37);
          pVar49 = (iVar37 < (int)(local_140 - uVar53)) + uVar53;
          uVar53 = pVar49;
        }
        uVar48 = pVar60 - uVar53;
        if ((int)uVar48 < 2 || (fVar64 < fVar89 || iVar34 < 2)) {
          lVar39 = 0;
          local_130 = 0.0;
          local_88 = -1;
          puVar45 = local_b8;
        }
        else {
          fVar88 = g_0239011c * (float)local_88;
          uVar62 = (uint64_t)(int)uVar53;
          lVar39 = local_b8[2];
          iVar34 = *(int *)(lVar39 + uVar62 * 4);
          fVar64 = (float)(iVar34 - local_13c);
          iVar37 = *(int *)(lVar39 + (int64_t)(int)pVar60 * 4);
          if ((fVar64 < fVar88) ||
             (uVar55 = uVar62, iVar36 = iVar37, uVar33 = uVar53, pVar49 = pVar60,
             (float)(local_164 - iVar37) < fVar88)) {
            if ((fVar88 <= fVar64 || fVar88 <= (float)(local_164 - iVar37)) &&
               ((uVar48 & 0xfffffffe) == 2)) {
              if (fVar88 <= fVar64) {
                if (0 < (int)uVar53) {
                  uVar33 = uVar53 - 1;
                  iVar36 = *(int *)(lVar39 + (uint64_t)uVar33 * 4);
                  fVar64 = (float)(iVar34 - iVar36) / (float)local_88;
                  if (fVar64 < g_02390124) {
                    fVar64 = g_02390124 / fVar64;
                  }
                  if ((fVar64 <= g_02394244) && (fVar88 <= (float)(iVar36 - local_13c))) {
                    iVar36 = *(int *)(lVar39 + (int64_t)(int)(pVar60 - 1) * 4);
                    uVar55 = (uint64_t)uVar33;
                    pVar49 = pVar60 - 1;
                    if (fVar88 <= (float)(local_164 - iVar36)) goto LAB_014c9958;
                  }
                }
              }
              else {
                pVar49 = pVar60 + 1;
                if (((int)pVar49 < (int)local_c0) && (pVar49 != 0xffffffff)) {
                  iVar36 = *(int *)(lVar39 + (int64_t)(int)pVar49 * 4);
                  fVar64 = (float)(iVar36 - iVar37) / (float)local_88;
                  if (fVar64 < g_02390124) {
                    fVar64 = g_02390124 / fVar64;
                  }
                  if (((fVar64 <= g_02394244) &&
                      (fVar88 <= (float)(*(int *)(lVar39 + 4 + (int64_t)(int)uVar53 * 4) -
                                        local_13c))) && (fVar88 <= (float)(local_164 - iVar36))) {
                    uVar55 = (int64_t)(int)uVar53 + 1;
                    uVar33 = uVar53 + 1;
                    goto LAB_014c9958;
                  }
                }
              }
            }
            uVar33 = uVar53 + 1;
            pVar49 = pVar60 - 1;
            uVar55 = uVar62;
            iVar36 = iVar37;
          }
LAB_014c9958:
          local_98 = (double)CONCAT44(local_98._4_4_,uVar33);
          local_80 = (double)CONCAT44(local_80._4_4_,pVar49);
          iVar34 = *(int *)(lVar39 + uVar55 * 4);
          uVar65 = FUN_014bb3e0();
          local_78._0_8_ = uVar65;
          local_f8 = (double)FUN_014bb3e0();
          local_88 = FUN_00e7dae0(((double)local_78._0_8_ + (double)iVar34 * local_128) *
                                  (double)local_178);
          puVar40 = local_158;
          dVar63 = (double)FUN_00e7dae0(((double)iVar36 * local_128 + local_f8) * (double)local_178)
          ;
          lVar39 = (**(code **)(*this_ptr + 0x380))();
          if (local_88 < lVar39) {
            local_88 = (**(code **)(*this_ptr + 0x380))();
          }
          lVar39 = (**(code **)(*this_ptr + 0x380))();
          lVar42 = (**(code **)(*this_ptr + 0x388))();
          if (lVar42 + lVar39 < (int64_t)dVar63) {
            lVar39 = (**(code **)(*this_ptr + 0x380))();
            lVar42 = (**(code **)(*this_ptr + 0x388))();
            dVar63 = (double)(lVar42 + lVar39);
          }
          iVar34 = (int)local_80._0_4_ - local_98._0_4_;
          local_f8 = dVar63;
          if (iVar34 < 2) {
            local_110 = -1;
            local_108 = 0;
          }
          else {
            lVar39 = local_b8[2];
            iVar37 = *(int *)(lVar39 + (int64_t)local_98._0_4_ * 4);
            iVar36 = *(int *)(lVar39 + (int64_t)(int)local_80._0_4_ * 4);
            uVar65 = FUN_014bb3e0();
            pVar49 = (void*)lVar39;
            local_78._0_8_ = uVar65;
            local_80 = (double)FUN_014bb3e0();
            local_110 = FUN_00e7dae0(((double)local_78._0_8_ + (double)iVar37 * local_128) *
                                     (double)local_178);
            lVar39 = FUN_00e7dae0(((double)iVar36 * local_128 + local_80) * (double)local_178);
            lVar42 = (**(code **)(*this_ptr + 0x380))();
            if (local_110 < lVar42) {
              local_110 = (**(code **)(*this_ptr + 0x380))();
            }
            lVar42 = (**(code **)(*this_ptr + 0x380))();
            lVar56 = (**(code **)(*this_ptr + 0x388))();
            if (lVar56 + lVar42 < lVar39) {
              lVar42 = (**(code **)(*this_ptr + 0x380))();
              lVar39 = (**(code **)(*this_ptr + 0x388))();
              lVar39 = lVar39 + lVar42;
            }
            local_108 = lVar39 - local_110;
          }
          local_130 = (double)((int64_t)local_f8 - local_88);
          iVar37 = FUN_00e7d780((float)(int64_t)local_130 / (float)((int)uVar48 / 2));
          local_78._0_4_ = iVar37;
          if (1 < iVar34) {
            uVar35 = FUN_00e7d780((float)local_108 / (float)(iVar34 / 2));
            local_78._0_4_ = uVar35;
          }
          puVar45 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar45 = &g_025e7120;
          puVar45[7] = 0;
          puVar45[8] = 0;
          *(void*)(puVar45 + 9) = 0;
          puVar45[10] = 0;
          puVar45[0xb] = 0;
          *(void*)(puVar45 + 0xc) = 0;
          FUN_00d500e0();
          pvVar41 = _pthread_getspecific(pVar49);
          puVar44 = puVar45;
          if ((pvVar41 != (void *)0x0) && (lVar39 = FUN_00e8b990(), lVar39 != 0)) {
            puVar44 = (void*)puVar45[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
          }
          if (puVar44[7] != local_88) {
            FUN_00d64850();
            puVar44[7] = local_88;
            FUN_00d64910();
          }
          pvVar41 = _pthread_getspecific(pVar49);
          puVar44 = puVar45;
          if ((pvVar41 != (void *)0x0) && (lVar39 = FUN_00e8b990(), lVar39 != 0)) {
            puVar44 = (void*)puVar45[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
          }
          if ((double)puVar44[8] != local_130) {
            FUN_00d64850();
            puVar44[8] = local_130;
            FUN_00d64910();
          }
          pvVar41 = _pthread_getspecific(pVar49);
          puVar44 = puVar45;
          if ((pvVar41 != (void *)0x0) && (lVar39 = FUN_00e8b990(), lVar39 != 0)) {
            puVar44 = (void*)puVar45[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
          }
          if (*(int *)(puVar44 + 9) != iVar37) {
            FUN_00d64850();
            *(int *)(puVar44 + 9) = iVar37;
            FUN_00d64910();
          }
          pvVar41 = _pthread_getspecific(pVar49);
          puVar44 = puVar45;
          if ((pvVar41 != (void *)0x0) && (lVar39 = FUN_00e8b990(), lVar39 != 0)) {
            puVar44 = (void*)puVar45[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
          }
          if (puVar44[10] != local_110) {
            FUN_00d64850();
            puVar44[10] = local_110;
            FUN_00d64910();
          }
          pvVar41 = _pthread_getspecific(pVar49);
          puVar44 = puVar45;
          if ((pvVar41 != (void *)0x0) && (lVar39 = FUN_00e8b990(), lVar39 != 0)) {
            puVar44 = (void*)puVar45[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
          }
          if (puVar44[0xb] != local_108) {
            FUN_00d64850();
            puVar44[0xb] = local_108;
            FUN_00d64910();
          }
          pvVar41 = _pthread_getspecific(pVar49);
          puVar44 = puVar45;
          if ((pvVar41 != (void *)0x0) && (lVar39 = FUN_00e8b990(), lVar39 != 0)) {
            puVar44 = (void*)puVar45[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
          }
          if (*(int *)(puVar44 + 0xc) != local_78._0_4_) {
            FUN_00d64850();
            *(void*)(puVar44 + 0xc) = local_78._0_4_;
            FUN_00d64910();
          }
          local_278 = 0;
          local_280 = puVar45;
          FUN_014c3ea0();
          if (local_89 != 0) {
            local_78._0_8_ = puVar45;
            lVar42 = FUN_00e7dae0(g_023944e0 * (double)local_178);
            lVar56 = local_88 - lVar42;
            lVar39 = local_1f8;
            if (lVar56 < local_1f8) {
              lVar39 = lVar56;
              local_1c8 = lVar56;
            }
            lVar56 = (**(code **)(*this_ptr + 0x380))();
            if (lVar39 < lVar56) {
              lVar56 = (**(code **)(*this_ptr + 0x380))();
              lVar39 = (**(code **)(*this_ptr + 0x380))();
              lVar39 = lVar39 + (local_88 - lVar56) / 2;
              local_1c8 = lVar39;
            }
            lVar56 = (**(code **)(*this_ptr + 0x380))();
            lVar46 = (**(code **)(*this_ptr + 0x388))();
            lVar46 = lVar46 + lVar56;
            local_1c0 = lVar42 + (int64_t)local_f8;
            if (lVar42 + (int64_t)local_f8 <= local_230 + local_1f8) {
              local_1c0 = local_230 + local_1f8;
            }
            if (lVar46 < local_1c0) {
              lVar46 = lVar46 - (lVar46 - (int64_t)local_f8) / 2;
              local_1c0 = lVar46;
            }
            pVar49 = (void*)lVar46;
            local_1c0 = local_1c0 - lVar39;
            *local_1b8 = lVar39;
            *local_220 = local_1c0;
          }
          uVar33 = local_a4;
          lVar39 = local_108;
          FUN_00d50b20();
          puVar45 = local_b8;
        }
      }
      if (local_118 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (local_1f0 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    if (((*local_138 != 0) && (*local_150 != 0)) && (*local_res8 != 0)) {
      pvVar41 = _pthread_getspecific(pVar49);
      if (pvVar41 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d790();
      if (local_38 == '\0') {
        if (local_40 != (void*)0x0) {
          FUN_00d50b00();
          goto LAB_014ca0d0;
        }
      }
      else if (local_40 != (void*)0x0) {
LAB_014ca0d0:
        local_80 = (double)CONCAT44(local_80._4_4_,(float)(g_023b2c70 / (double)local_40[7]));
        local_108 = lVar39;
        if (3 < (int)local_190) {
          local_98 = (double)(int64_t)(int)uVar33;
          lVar39 = (int64_t)(int)local_200;
          uVar62 = (uint64_t)local_60 & 0xffffffff;
          uVar55 = 0;
          do {
            local_78._0_4_ = *(void*)(local_198[2] + uVar55 * 4);
            local_f8 = (double)FUN_014bb3e0();
            FUN_014b7610();
            if (((int64_t)uVar55 < lVar39) || ((int64_t)local_98 < (int64_t)uVar55)) {
              FUN_014328b0();
              if (local_50 != (void*)0x0) {
                FUN_00d50b00();
              }
              FUN_00d21140();
              if (local_50 != (void*)0x0) {
                FUN_00d50b20();
              }
            }
            else {
              FUN_014328b0();
              if (local_50 != (void*)0x0) {
                FUN_00d50b00();
              }
              FUN_00d21140();
              if (local_50 != (void*)0x0) {
                FUN_00d50b20();
              }
            }
            uVar55 = uVar55 + 1;
          } while (uVar62 != uVar55);
          uVar55 = 0;
          do {
            local_78._0_4_ = *(void*)(local_160[2] + uVar55 * 4);
            local_f8 = (double)FUN_014bb3e0();
            FUN_014b7610();
            FUN_014328b0();
            if (local_50 != (void*)0x0) {
              FUN_00d50b00();
            }
            FUN_00d21140();
            if (local_50 != (void*)0x0) {
              FUN_00d50b20();
            }
            uVar55 = uVar55 + 1;
          } while (uVar62 != uVar55);
        }
        dVar63 = (double)FUN_014bb4b0();
        local_78._0_8_ = dVar63;
        fVar64 = (float)FUN_014b7610();
        fVar88 = local_a0._0_4_ * g_02411dec;
        local_a0 = (double)CONCAT44(local_a0._4_4_,fVar88);
        iVar34 = (int)fVar64 + -0x1e;
        iVar37 = (int)(g_0241b640 + fVar88 + g_023908e0);
        local_78._0_8_ = (double)((float)(double)local_78._0_8_ * local_80._0_4_);
        if (iVar34 < iVar37) {
          do {
            FUN_014328b0(local_78._0_8_,(double)iVar34);
            if (local_50 != (void*)0x0) {
              FUN_00d50b00();
            }
            FUN_00d21140();
            if (local_50 != (void*)0x0) {
              FUN_00d50b20();
            }
            iVar34 = iVar34 + 1;
          } while (iVar37 != iVar34);
        }
        iVar34 = -0x1e;
        do {
          FUN_014328b0(local_78._0_8_,(double)((float)iVar34 + local_a0._0_4_));
          if (local_50 != (void*)0x0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (local_50 != (void*)0x0) {
            FUN_00d50b20();
          }
          iVar34 = iVar34 + 1;
        } while (iVar34 != 0x1e);
        local_1d8._0_4_ = g_02390438 + local_a0._0_4_;
        uVar62 = local_c0;
        puVar45 = local_b8;
        if (3 < (int)local_190) {
          local_f8 = (double)local_a0._0_4_;
          local_98 = (double)(g_02390438 + local_a0._0_4_);
          local_1e8 = (double)(g_0241e854 + local_a0._0_4_);
          iVar34 = 0;
          do {
            dVar63 = (double)FUN_014bb3e0();
            dVar63 = (double)((float)((double)iVar34 * local_128 + dVar63) * local_80._0_4_);
            local_78._0_8_ = dVar63;
            FUN_014328b0(dVar63,local_f8);
            if (local_50 != (void*)0x0) {
              FUN_00d50b00();
            }
            FUN_00d21140();
            if (local_50 != (void*)0x0) {
              FUN_00d50b20();
            }
            FUN_014328b0(local_78._0_8_,local_98);
            if (local_50 != (void*)0x0) {
              FUN_00d50b00();
            }
            FUN_00d21140();
            if (local_50 != (void*)0x0) {
              FUN_00d50b20();
            }
            FUN_014328b0(local_78._0_8_,local_1e8);
            if (local_50 != (void*)0x0) {
              FUN_00d50b00();
            }
            FUN_00d21140();
            puVar45 = local_b8;
            uVar62 = local_c0;
            if (local_50 != (void*)0x0) {
              FUN_00d50b20();
            }
            iVar34 = iVar34 + 5;
          } while (iVar34 < (int)local_60._0_4_);
        }
        if ((g_0239011c < local_214) && (local_d0 != local_c8)) {
          if (local_c8 != (void*)0x0) {
            FUN_00d50b00();
          }
          if (local_d0 == (void*)0x0) {
            local_d0 = local_c8;
          }
          else {
            local_d0 = local_c8;
            FUN_00d50b20();
          }
        }
        if (3 < (int)(uint)local_148) {
          local_1e8 = (double)(uVar62 & 0xffffffff);
          dVar63 = 0.0;
          do {
            iVar34 = *(int *)(puVar45[2] + (int64_t)dVar63 * 4);
            dVar54 = (double)FUN_014bb3e0();
            local_98 = dVar63;
            local_78._0_8_ = dVar54;
            iVar37 = FUN_00e7d780(*(float *)(local_100[2] + (int64_t)dVar63 * 4) * g_02390438);
            local_60 = (double)((float)((double)local_78._0_8_ + (double)iVar34 * local_128) *
                               local_80._0_4_);
            local_78._0_8_ = local_60 + g_02390448;
            local_60 = local_60 + g_023942d0;
            if (0 < iVar37) {
              iVar34 = 0;
              do {
                local_f8 = (double)(local_a0._0_4_ - (float)iVar34);
                FUN_014328b0(local_78._0_8_);
                if (local_50 != (void*)0x0) {
                  FUN_00d50b00();
                }
                FUN_00d21140();
                if (local_50 != (void*)0x0) {
                  FUN_00d50b20();
                }
                FUN_014328b0(local_60,local_f8);
                if (local_50 != (void*)0x0) {
                  FUN_00d50b00();
                }
                FUN_00d21140();
                if (local_50 != (void*)0x0) {
                  FUN_00d50b20();
                }
                iVar34 = iVar34 + 1;
              } while (iVar37 != iVar34);
            }
            iVar34 = FUN_00e7d780(*(float *)(local_d0[2] + (int64_t)local_98 * 4) * g_02390438);
            if (0 < iVar34) {
              iVar37 = 0;
              do {
                local_f8 = (double)((float)iVar37 + local_a0._0_4_);
                FUN_014328b0(local_78._0_8_);
                if (local_50 != (void*)0x0) {
                  FUN_00d50b00();
                }
                FUN_00d21140();
                if (local_50 != (void*)0x0) {
                  FUN_00d50b20();
                }
                FUN_014328b0(local_60,local_f8);
                if (local_50 != (void*)0x0) {
                  FUN_00d50b00();
                }
                FUN_00d21140();
                if (local_50 != (void*)0x0) {
                  FUN_00d50b20();
                }
                iVar37 = iVar37 + 1;
              } while (iVar34 != iVar37);
            }
            dVar63 = (double)((int64_t)local_98 + 1);
            puVar45 = local_b8;
          } while (dVar63 != local_1e8);
        }
        if (0 < (int64_t)local_130) {
          fVar64 = (float)((double)local_88 / (double)local_178) * local_80._0_4_;
          local_78._0_4_ = fVar64;
          local_60 = (double)fVar64;
          iVar34 = -0x67;
          do {
            iVar34 = iVar34 + 3;
            FUN_014328b0(local_60,(double)((float)iVar34 + local_a0._0_4_));
            if (local_50 != (void*)0x0) {
              FUN_00d50b00();
            }
            FUN_00d21140();
            if (local_50 != (void*)0x0) {
              FUN_00d50b20();
            }
          } while (iVar34 < 0x255);
          fVar64 = (float)((double)(local_88 + (int64_t)local_130) / (double)local_178) *
                   local_80._0_4_;
          local_f8 = (double)CONCAT44(local_f8._4_4_,fVar64);
          local_60 = (double)fVar64;
          iVar34 = -0x67;
          do {
            iVar34 = iVar34 + 3;
            FUN_014328b0(local_60,(double)((float)iVar34 + local_a0._0_4_));
            if (local_50 != (void*)0x0) {
              FUN_00d50b00();
            }
            FUN_00d21140();
            if (local_50 != (void*)0x0) {
              FUN_00d50b20();
            }
            puVar40 = local_b8;
          } while (iVar34 < 0x255);
          local_1e8 = (double)FUN_014bb3e0();
          iVar34 = *(int *)(puVar40[2] + (int64_t)(int)local_140 * 4);
          if ((float)local_78._0_4_ < local_f8._0_4_) {
            local_60 = (double)(g_02390124 + (float)local_1d8._0_4_);
            local_98 = (double)(g_02390d34 + (float)local_1d8._0_4_);
            fVar64 = (float)local_78._0_4_;
            do {
              local_78._0_4_ = fVar64;
              local_a0 = (double)fVar64;
              FUN_014328b0(local_a0,local_60);
              if (local_50 != (void*)0x0) {
                FUN_00d50b00();
              }
              FUN_00d21140();
              if (local_50 != (void*)0x0) {
                FUN_00d50b20();
              }
              FUN_014328b0(local_a0,local_98);
              if (local_50 != (void*)0x0) {
                FUN_00d50b00();
              }
              FUN_00d21140();
              if (local_50 != (void*)0x0) {
                FUN_00d50b20();
              }
              fVar64 = (float)local_78._0_4_ + g_02390124;
            } while (fVar64 < local_f8._0_4_);
          }
          fVar88 = (float)((double)local_110 / (double)local_178) * local_80._0_4_;
          fVar64 = (float)((double)(local_108 + local_110) / (double)local_178) * local_80._0_4_;
          local_60 = (double)CONCAT44(local_60._4_4_,fVar64);
          if (fVar88 < fVar64) {
            local_f8 = (double)(g_0241f360 + (float)local_1d8._0_4_);
            local_98 = (double)(g_02390d28 + (float)local_1d8._0_4_);
            do {
              local_78._0_4_ = fVar88;
              local_a0 = (double)fVar88;
              FUN_014328b0(local_a0,local_f8);
              if (local_50 != (void*)0x0) {
                FUN_00d50b00();
              }
              FUN_00d21140();
              if (local_50 != (void*)0x0) {
                FUN_00d50b20();
              }
              FUN_014328b0(local_a0,local_98);
              if (local_50 != (void*)0x0) {
                FUN_00d50b00();
              }
              FUN_00d21140();
              if (local_50 != (void*)0x0) {
                FUN_00d50b20();
              }
              fVar88 = (float)local_78._0_4_ + g_02390124;
            } while (fVar88 < local_60._0_4_);
          }
          local_60 = (double)(local_80._0_4_ * (float)(local_1e8 + local_128 * (double)iVar34));
          local_78._0_8_ = local_60 + 0.0;
          local_60 = local_60 + g_023942d0;
          iVar34 = 3;
          do {
            local_a0 = (double)((float)iVar34 + (float)local_1d8._0_4_);
            FUN_014328b0(local_78._0_8_);
            if (local_50 != (void*)0x0) {
              FUN_00d50b00();
            }
            FUN_00d21140();
            if (local_50 != (void*)0x0) {
              FUN_00d50b20();
            }
            FUN_014328b0(local_60,local_a0);
            if (local_50 != (void*)0x0) {
              FUN_00d50b00();
            }
            FUN_00d21140();
            puVar45 = local_b8;
            if (local_50 != (void*)0x0) {
              FUN_00d50b20();
            }
            iVar34 = iVar34 + 1;
          } while (iVar34 != 9);
        }
        FUN_00d50b20();
        puVar40 = local_158;
      }
    }
    puVar44 = local_d8;
    if (local_c8 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (local_d0 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (local_100 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (puVar45 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (local_188 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (local_160 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  if (local_120 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_198 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_1b0 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_208 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar44 != (void*)0x0) {
    FUN_00d50b20();
  }
LAB_014ca381:
  if (puVar40 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

