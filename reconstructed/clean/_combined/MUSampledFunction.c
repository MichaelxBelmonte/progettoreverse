// ===================================================================
// MUSampledFunction — Complete reconstructed pseudocode
// 44 functions
// ===================================================================


// ============================================================
// 0125f0b0
// ============================================================
// Function: FUN_0125f0b0
// Address: 0125f0b0
// Size: 16690 bytes
// Class: MUSampledFunction
// String references:
//   "MUSampledFunction"

void FUN_0125f0b0(void* param_1,uint64_t param_2,uint64_t param_3)

{
  float *pfVar1;
  double dVar2;
  float fVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  void*puVar7;
  bool bVar8;
  bool bVar9;
  uint8_t auVar10 [12];
  uint8_t auVar11 [12];
  uint8_t auVar12 [12];
  uint8_t auVar13 [12];
  uint8_t auVar14 [12];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
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
  uint8_t auVar50 [16];
  uint8_t auVar51 [16];
  uint8_t auVar52 [16];
  uint8_t auVar53 [16];
  uint8_t auVar54 [16];
  uint8_t auVar55 [16];
  uint8_t auVar56 [16];
  uint8_t auVar57 [16];
  uint8_t auVar58 [16];
  uint8_t auVar59 [16];
  uint8_t auVar60 [16];
  uint8_t auVar61 [16];
  uint8_t auVar62 [16];
  uint8_t auVar63 [16];
  uint8_t auVar64 [16];
  uint8_t auVar65 [16];
  uint8_t auVar66 [16];
  uint8_t auVar67 [16];
  uint8_t auVar68 [16];
  uint8_t auVar69 [16];
  uint8_t auVar70 [16];
  uint8_t auVar71 [16];
  uint8_t auVar72 [16];
  uint8_t auVar73 [16];
  uint8_t auVar74 [16];
  uint8_t auVar75 [16];
  uint8_t auVar76 [16];
  uint8_t auVar77 [16];
  uint8_t auVar78 [16];
  uint8_t auVar79 [16];
  uint8_t auVar80 [16];
  uint8_t auVar81 [16];
  uint8_t auVar82 [16];
  bool bVar83;
  bool bVar84;
  bool bVar85;
  char cVar86;
  uint uVar87;
  int iVar88;
  void *pvVar89;
  int64_t lVar90;
  void*puVar92;
  float *pfVar93;
  float *pfVar94;
  float *pfVar95;
  void* pVar96;
  void* pVar97;
  void*puVar98;
  float *pfVar99;
  code *pcVar100;
  uint64_t uVar101;
  int64_t lVar102;
  uint64_t uVar103;
  uint64_t uVar104;
  int64_t this_ptr;
  int64_t *plVar105;
  uint64_t uVar106;
  size_t sVar107;
  int64_t lVar108;
  uint64_t uVar109;
  float **ppfVar110;
  uint uVar111;
  uint64_t uVar112;
  float *pfVar113;
  bool bVar114;
  bool bVar115;
  bool bVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  double dVar127;
  double dVar128;
  uint8_t auVar129 [16];
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar130 [16];
  uint8_t auVar131 [16];
  uint8_t auVar132 [16];
  uint8_t auVar133 [16];
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar134 [16];
  uint8_t auVar135 [16];
  uint8_t auVar136 [16];
  uint8_t auVar137 [16];
  uint64_t extraout_XMM0_Qb_07;
  uint8_t auVar138 [16];
  uint8_t auVar139 [16];
  uint8_t auVar140 [16];
  uint8_t auVar141 [16];
  uint8_t auVar142 [16];
  uint8_t auVar143 [16];
  uint32_t uVar126;
  uint8_t auVar144 [16];
  uint64_t extraout_XMM0_Qb_12;
  uint8_t auVar145 [16];
  uint8_t auVar146 [16];
  uint8_t auVar147 [16];
  uint8_t auVar148 [16];
  uint64_t extraout_XMM0_Qb_16;
  uint8_t auVar149 [16];
  uint8_t auVar150 [16];
  uint8_t auVar151 [16];
  uint8_t auVar152 [16];
  uint8_t auVar153 [16];
  uint8_t auVar154 [16];
  float fVar155;
  uint8_t auVar156 [16];
  uint8_t auVar157 [16];
  uint8_t auVar158 [16];
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  double local_138;
  float *local_128;
  float *local_120;
  int64_t local_108;
  char local_100;
  uint32_t local_f8;
  uint32_t uStack_f4;
  float *local_e0;
  float *local_b8;
  float *local_b0;
  float *local_a8;
  float *local_88;
  uint8_t local_68 [16];
  float *local_58;
  char local_50;
  uint8_t local_48 [4];
  uint8_t auStack_44 [4];
  uint64_t uStack_40;
  float *pfVar91;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_05;
  uint64_t extraout_XMM0_Qb_06;
  uint64_t extraout_XMM0_Qb_08;
  uint64_t extraout_XMM0_Qb_09;
  uint64_t extraout_XMM0_Qb_10;
  uint64_t extraout_XMM0_Qb_11;
  uint64_t extraout_XMM0_Qb_13;
  uint64_t extraout_XMM0_Qb_14;
  uint64_t extraout_XMM0_Qb_15;
  uint64_t extraout_XMM0_Qb_17;
  uint64_t extraout_XMM0_Qb_18;
  uint64_t extraout_XMM0_Qb_19;
  
  if (*(int64_t *)(this_ptr + 0xd8) == 0) {
    return;
  }
  pvVar89 = _pthread_getspecific(param_1);
  if (pvVar89 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011ef460();
  pfVar99 = local_58;
  if ((local_50 != '\0') && (local_58 != (float *)0x0)) {
    FUN_00d50b20();
  }
  if (pfVar99 == (float *)0x0) {
    return;
  }
  pvVar89 = _pthread_getspecific(param_1);
  if (pvVar89 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011ef460();
  pvVar89 = _pthread_getspecific(param_1);
  if (pvVar89 != (void *)0x0) {
    FUN_00e8b990();
  }
  ppfVar110 = &local_58;
  FUN_013ddc00();
  pfVar99 = local_58;
  if ((g_027c01a0 == '\0') && (iVar88 = ___cxa_guard_acquire(), iVar88 != 0)) {
    g_027af248 = FUN_001016a0();
    g_027af230 = "MUSampledFunction";
    g_027af238 = 0x58;
    g_027af240 = FUN_00101650;
    g_027af250 = 0;
    ram_00000000027af258 = 0;
    g_027af260 = 0;
    ram_00000000027af268 = 0;
    g_027af270 = 0;
    ram_00000000027af278 = 0;
    g_027af280 = 0;
    ram_00000000027af288 = 0;
    g_027af290 = 0;
    ram_00000000027af298 = 0;
    g_027af2a0 = 0;
    ram_00000000027af2a8 = 0;
    g_027af2b0 = 0;
    ram_00000000027af2b8 = 0;
    g_027af2c0 = 0;
    ram_00000000027af2c8 = 0;
    g_027af2d0 = 0;
    ram_00000000027af2d8 = 0;
    g_027af2e0 = 0;
    ram_00000000027af2e8 = 0;
    g_027af2f0 = 0;
    ___cxa_guard_release();
  }
  if (pfVar99 == (float *)0x0) {
LAB_0125f1fe:
    ppfVar110 = (float **)&g_02802688;
  }
  else {
    (**(code **)(*(int64_t *)pfVar99 + 0x360))();
    cVar86 = FUN_00e85ea0();
    if (cVar86 == '\0') goto LAB_0125f1fe;
  }
  local_b0 = *ppfVar110;
  pfVar99 = local_b0;
  if (local_b0 == (float *)0x0) {
    bVar84 = true;
    bVar85 = true;
    local_b0 = (float *)0x0;
  }
  else {
    if (*(char *)(ppfVar110 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(void*)(ppfVar110 + 1) = 0;
    }
    bVar84 = false;
    bVar85 = false;
  }
  pVar96 = (void*)pfVar99;
  if ((local_50 != '\0') && (bVar85 = bVar84, local_58 != (float *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  pvVar89 = _pthread_getspecific(pVar96);
  if (pvVar89 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011ef460();
  pvVar89 = _pthread_getspecific(pVar96);
  if (pvVar89 != (void *)0x0) {
    FUN_00e8b990();
  }
  ppfVar110 = &local_58;
  FUN_013ddc80();
  pfVar99 = local_58;
  if ((g_027c01a0 == '\0') && (iVar88 = ___cxa_guard_acquire(), iVar88 != 0)) {
    g_027af248 = FUN_001016a0();
    g_027af230 = "MUSampledFunction";
    g_027af238 = 0x58;
    g_027af240 = FUN_00101650;
    g_027af250 = 0;
    ram_00000000027af258 = 0;
    g_027af260 = 0;
    ram_00000000027af268 = 0;
    g_027af270 = 0;
    ram_00000000027af278 = 0;
    g_027af280 = 0;
    ram_00000000027af288 = 0;
    g_027af290 = 0;
    ram_00000000027af298 = 0;
    g_027af2a0 = 0;
    ram_00000000027af2a8 = 0;
    g_027af2b0 = 0;
    ram_00000000027af2b8 = 0;
    g_027af2c0 = 0;
    ram_00000000027af2c8 = 0;
    g_027af2d0 = 0;
    ram_00000000027af2d8 = 0;
    g_027af2e0 = 0;
    ram_00000000027af2e8 = 0;
    g_027af2f0 = 0;
    ___cxa_guard_release();
  }
  if (pfVar99 == (float *)0x0) {
LAB_0125f34d:
    ppfVar110 = (float **)&g_02802688;
  }
  else {
    (**(code **)(*(int64_t *)pfVar99 + 0x360))();
    cVar86 = FUN_00e85ea0();
    if (cVar86 == '\0') goto LAB_0125f34d;
  }
  local_e0 = *ppfVar110;
  pfVar99 = local_e0;
  if (local_e0 == (float *)0x0) {
    bVar83 = true;
    bVar84 = true;
    local_e0 = (float *)0x0;
  }
  else {
    if (*(char *)(ppfVar110 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(void*)(ppfVar110 + 1) = 0;
    }
    bVar83 = false;
    bVar84 = false;
  }
  pVar96 = (void*)pfVar99;
  if ((local_50 != '\0') && (bVar84 = bVar83, local_58 != (float *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if (local_e0 == (float *)0x0) {
    lVar90 = 0;
    if (*(int64_t *)(this_ptr + 0x100) == 0) goto LAB_0125f45b;
LAB_0125f469:
    if ((!NAN(*(float *)(this_ptr + 0xf8))) && (local_b0 != (float *)0x0)) {
      pvVar89 = _pthread_getspecific(pVar96);
      if (pvVar89 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      pvVar89 = _pthread_getspecific(pVar96);
      if (pvVar89 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar127 = (double)FUN_013dd730();
      if ((local_50 != '\0') && (local_58 != (float *)0x0)) {
        FUN_00d50b20();
      }
      pvVar89 = _pthread_getspecific(pVar96);
      if (pvVar89 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      pvVar89 = _pthread_getspecific(pVar96);
      if (pvVar89 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar117 = (float)FUN_013ddd00();
      if ((local_50 != '\0') && (local_58 != (float *)0x0)) {
        FUN_00d50b20();
      }
      pvVar89 = _pthread_getspecific(pVar96);
      if (pvVar89 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      pvVar89 = _pthread_getspecific(pVar96);
      if (pvVar89 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar128 = (double)FUN_013dd130();
      if ((local_50 != '\0') && (local_58 != (float *)0x0)) {
        FUN_00d50b20();
      }
      pvVar89 = _pthread_getspecific(pVar96);
      if (pvVar89 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb920();
      local_120 = local_58;
      if (local_58 == (float *)0x0) {
        local_120 = (float *)0x0;
        bVar83 = false;
      }
      else {
        bVar83 = true;
        if (((local_50 == '\0') && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != (float *)0x0)
           ) {
          FUN_00d50b20();
        }
      }
      fVar3 = local_120[6];
      fVar119 = (float)((int)fVar3 + 3);
      if (-1 < (int)fVar3) {
        fVar119 = fVar3;
      }
      pfVar99 = *(float **)(local_120 + 4);
      pcVar100 = pfVar99;
      FUN_00c8e690();
      local_b8 = local_58;
      if (((local_50 == '\0') && (local_58 != (float *)0x0)) &&
         ((FUN_00d50b00(), local_50 != '\0' && (local_58 != (float *)0x0)))) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      pfVar95 = (float *)(this_ptr + 0xf8);
      uVar87 = (int)fVar119 >> 2;
      pfVar91 = (float *)(uint64_t)uVar87;
      bVar114 = local_b8 != (float *)0x0;
      pfVar93 = *(float **)(local_b8 + 4);
      fVar119 = *pfVar95;
      fVar118 = (float)dVar127;
      local_68._0_8_ = pfVar93;
      if ((!NAN(fVar119)) && (3 < (int)fVar3)) {
        uVar101 = 0;
        if (uVar87 - 1 < 3) {
LAB_0125fa0a:
          lVar108 = 0;
          lVar102 = 0;
          do {
            fVar119 = *pfVar95;
            local_48 = (uint8_t  [4])fVar119;
            if (!NAN(pfVar99[lVar102])) {
              fVar119 = (float)_logf((fVar118 / pfVar99[lVar102]) * g_02394204);
              fVar119 = (float)local_48 + (fVar119 * g_02394208 - fVar117);
            }
            pfVar93[lVar102] = fVar119;
            lVar102 = lVar102 + 1;
            lVar108 = lVar108 + -4;
          } while (uVar87 - (int)uVar101 != (int)lVar102);
          local_68._0_8_ = (int64_t)pfVar93 - lVar108;
        }
        else {
          uVar103 = (uint64_t)(uVar87 - 1) + 1;
          pfVar94 = pfVar93 + uVar103;
          param_3 = CONCAT71((int7)((uint64_t)param_3 >> 8),pfVar93 < pfVar99 + uVar103);
          pcVar100 = CONCAT71((int7)((uint64_t)pfVar94 >> 8),pfVar95 < pfVar94);
          if ((pfVar93 < pfVar99 + uVar103 && pfVar99 < pfVar94) ||
             (pfVar93 < (float *)(this_ptr + 0xfc) && pfVar95 < pfVar94)) goto LAB_0125fa0a;
          uVar101 = uVar103 & 0xfffffffffffffffc;
          local_68._0_8_ = pfVar93 + uVar101;
          uVar112 = 0;
          do {
            auVar144 = *(uint8_t (*) [16])(pfVar99 + uVar112);
            auVar129._4_4_ = fVar118;
            auVar129._0_4_ = fVar118;
            auVar129._8_4_ = fVar118;
            auVar129._12_4_ = fVar118;
            auVar129 = divps(auVar129,auVar144);
            bVar9 = NAN(g_0238ff00);
            bVar8 = NAN(_UNK_0238ff04);
            bVar115 = NAN(_UNK_0238ff08);
            bVar116 = NAN(_UNK_0238ff0c);
            fVar121 = auVar129._4_4_ * _UNK_02394164;
            auVar131._8_4_ = auVar129._8_4_ * _UNK_02394168;
            auVar131._12_4_ = auVar129._12_4_ * _UNK_0239416c;
            _local_48 = (double)_logf();
            uStack_40 = extraout_XMM0_Qb;
            auVar130._0_8_ = _logf();
            auVar130._8_8_ = extraout_XMM0_Qb_00;
            _local_48 = insertps(_local_48,auVar130,0x10);
            auVar10._4_8_ = extraout_XMM0_Qb_00;
            auVar10._0_4_ = fVar121;
            auVar131._0_8_ = auVar10._0_8_ << 0x20;
            auVar132._0_8_ = _logf(auVar131._8_8_);
            auVar132._8_8_ = extraout_XMM0_Qb_01;
            _local_48 = insertps(_local_48,auVar132,0x20);
            auVar133._0_8_ = _logf();
            auVar133._8_8_ = extraout_XMM0_Qb_02;
            auVar24._4_4_ = fVar119;
            auVar24._0_4_ = fVar119;
            auVar24._8_4_ = fVar119;
            auVar24._12_4_ = fVar119;
            auVar129 = insertps(_local_48,auVar133,0x30);
            auVar156._0_4_ = (auVar129._0_4_ * g_02394170 - fVar117) + fVar119;
            auVar156._4_4_ = (auVar129._4_4_ * _UNK_02394174 - fVar117) + fVar119;
            auVar156._8_4_ = (auVar129._8_4_ * _UNK_02394178 - fVar117) + fVar119;
            auVar156._12_4_ = (auVar129._12_4_ * _UNK_0239417c - fVar117) + fVar119;
            auVar26._4_4_ = -(uint)(NAN(auVar144._4_4_) || bVar8);
            auVar26._0_4_ = -(uint)(NAN(auVar144._0_4_) || bVar9);
            auVar26._8_4_ = -(uint)(NAN(auVar144._8_4_) || bVar115);
            auVar26._12_4_ = -(uint)(NAN(auVar144._12_4_) || bVar116);
            auVar144 = blendvps(auVar156,auVar24,auVar26);
            *(uint8_t (*) [16])(pfVar93 + uVar112) = auVar144;
            uVar112 = uVar112 + 4;
          } while (uVar101 != uVar112);
          pfVar93 = (float *)local_68._0_8_;
          pfVar99 = pfVar99 + uVar101;
          if (uVar103 != uVar101) goto LAB_0125fa0a;
        }
        fVar119 = *pfVar95;
      }
      if (!NAN(fVar119)) {
        pvVar89 = _pthread_getspecific((void*)pcVar100);
        pfVar99 = local_b0;
        if ((pvVar89 != (void *)0x0) && (lVar102 = FUN_00e8b990(), lVar102 != 0)) {
          pfVar99 = *(float **)(local_b0 + (uint64_t)(*(uint *)(lVar102 + 0x154) & 1) * 2 + 8);
        }
        dVar2 = *(double *)(pfVar99 + 0x14);
        _local_48 = ZEXT416(*(uint *)(this_ptr + 0x98));
        local_88._0_4_ = *(float *)(this_ptr + 0x9c);
        cVar86 = FUN_01263cf0();
        if ((cVar86 != '\0') || (cVar86 = FUN_01263ef0(), cVar86 != '\0')) {
          _local_48 = ZEXT416((uint)g_02390124);
          local_88._0_4_ = g_02390124;
        }
        puVar92 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        puVar98 = &g_025f0d98;
        *puVar92 = &g_025f0d98;
        puVar92[2] = 0;
        puVar92[3] = 0;
        puVar92[4] = 0;
        puVar92[5] = 0;
        puVar92[6] = 0;
        puVar92[7] = 0;
        (*g_025f0db0)();
        pfVar93 = (float *)FUN_00e83010();
        fVar119 = (float)dVar2 / g_0240d008;
        local_68._0_8_ = *(void*)(local_b8 + 4);
        _memcpy(puVar98,(void *)((int64_t)(int)uVar87 << 2),(size_t)param_3);
        pfVar99 = (float *)((int64_t)&MACH_HEADER.magic + 1);
        FUN_015c1480(1,pfVar91);
        sVar107 = (size_t)param_3;
        if (3 < (int)fVar3) {
          if (uVar87 < 8) {
            pfVar99 = (float *)0x0;
          }
          else {
            pfVar94 = (float *)(local_68._0_8_ + pfVar91 * 4);
            sVar107 = (size_t)CONCAT71((int7)((uint64_t)param_3 >> 8),pfVar95 < pfVar94);
            pfVar99 = (float *)0x0;
            if (((float *)(this_ptr + 0xfc) <= (uint64_t)local_68._0_8_ || pfVar95 >= pfVar94) &&
               (pfVar93 + (int64_t)pfVar91 <= (uint64_t)local_68._0_8_ || pfVar94 <= pfVar93)) {
              pfVar99 = (float *)(uint64_t)(uVar87 & 0xfffffff8);
              fVar121 = *pfVar95;
              uVar101 = 0;
              do {
                pfVar94 = (float *)((int64_t)pfVar93 + uVar101);
                fVar122 = pfVar94[1];
                fVar120 = pfVar94[2];
                fVar155 = pfVar94[3];
                pfVar113 = (float *)((int64_t)pfVar93 + uVar101 + 0x10);
                fVar123 = *pfVar113;
                fVar124 = pfVar113[1];
                fVar125 = pfVar113[2];
                fVar15 = pfVar113[3];
                pfVar113 = (float *)(local_68._0_8_ + uVar101);
                fVar16 = pfVar113[1];
                fVar17 = pfVar113[2];
                fVar18 = pfVar113[3];
                pfVar1 = (float *)(local_68._0_8_ + uVar101 + 0x10);
                fVar19 = *pfVar1;
                fVar20 = pfVar1[1];
                fVar21 = pfVar1[2];
                fVar22 = pfVar1[3];
                pfVar1 = (float *)(local_68._0_8_ + uVar101);
                *pfVar1 = (*pfVar113 - *pfVar94) + (*pfVar94 - fVar121) * (float)local_48 + fVar121;
                pfVar1[1] = (fVar16 - fVar122) + (fVar122 - fVar121) * (float)local_48 + fVar121;
                pfVar1[2] = (fVar17 - fVar120) + (fVar120 - fVar121) * (float)local_48 + fVar121;
                pfVar1[3] = (fVar18 - fVar155) + (fVar155 - fVar121) * (float)local_48 + fVar121;
                pfVar94 = (float *)(local_68._0_8_ + uVar101 + 0x10);
                *pfVar94 = (fVar19 - fVar123) + (fVar123 - fVar121) * (float)local_48 + fVar121;
                pfVar94[1] = (fVar20 - fVar124) + (fVar124 - fVar121) * (float)local_48 + fVar121;
                pfVar94[2] = (fVar21 - fVar125) + (fVar125 - fVar121) * (float)local_48 + fVar121;
                pfVar94[3] = (fVar22 - fVar15) + (fVar15 - fVar121) * (float)local_48 + fVar121;
                uVar101 = uVar101 + 0x20;
              } while (((int64_t)pfVar91 * 4 & 0xffffffffffffffe0U) != uVar101);
              if (pfVar99 == pfVar91) goto LAB_0125ff1d;
            }
          }
          uVar101 = ~(uint64_t)pfVar99;
          if ((uVar87 & 1) != 0) {
            *(float *)(local_68._0_8_ + pfVar99 * 4) =
                 (*(float *)(local_68._0_8_ + pfVar99 * 4) - pfVar93[(int64_t)pfVar99]) +
                 (pfVar93[(int64_t)pfVar99] - *pfVar95) * (float)local_48 + *pfVar95;
            pfVar99 = (float *)((uint64_t)pfVar99 | 1);
          }
          if (uVar101 + (int64_t)pfVar91 != 0) {
            do {
              *(float *)(local_68._0_8_ + pfVar99 * 4) =
                   (*(float *)(local_68._0_8_ + pfVar99 * 4) - pfVar93[(int64_t)pfVar99]) +
                   (pfVar93[(int64_t)pfVar99] - *pfVar95) * (float)local_48 + *pfVar95;
              *(float *)(local_68._0_8_ + ((int64_t)pfVar99 + 1) * 4) =
                   (*(float *)(local_68._0_8_ + ((int64_t)pfVar99 + 1) * 4) -
                   pfVar93[(int64_t)pfVar99 + 1]) +
                   (pfVar93[(int64_t)pfVar99 + 1] - *pfVar95) * (float)local_48 + *pfVar95;
              pfVar99 = (float *)((int64_t)pfVar99 + 2);
            } while (pfVar91 != pfVar99);
          }
        }
LAB_0125ff1d:
        pvVar89 = _pthread_getspecific((void*)pfVar99);
        pfVar94 = local_b0;
        if ((pvVar89 != (void *)0x0) && (lVar102 = FUN_00e8b990(), lVar102 != 0)) {
          pfVar94 = *(float **)(local_b0 + (uint64_t)(*(uint *)(lVar102 + 0x154) & 1) * 2 + 8);
          pfVar99 = local_b0;
        }
        fVar122 = g_02390124;
        fVar121 = (float)dVar128 * g_0239011c;
        if (g_02391090 <= (float)dVar128 * g_0239011c) {
          fVar121 = g_02391090;
        }
        uStack_40 = 0;
        _local_48 = (double)fVar121 * *(double *)(pfVar94 + 0x14);
        uVar111 = (uint)((double)fVar121 * *(double *)(pfVar94 + 0x14));
        _memcpy(pfVar99,(void *)((int64_t)(int)uVar87 << 2),sVar107);
        fVar121 = g_02390124;
        if (0 < (int)uVar111) {
          fVar120 = g_02390124 / (float)(int)_local_48;
          pfVar99 = (float *)(uint64_t)(uVar87 - 1);
          uVar101 = 0;
          do {
            fVar155 = (float)(int)uVar101 * fVar120;
            pfVar93[uVar101] = pfVar93[uVar101] * fVar155 + *pfVar95 * (fVar121 - fVar155);
            iVar88 = (int)pfVar99;
            pfVar93[iVar88] = fVar155 * pfVar93[iVar88] + (fVar121 - fVar155) * *pfVar95;
            uVar101 = uVar101 + 1;
            pfVar99 = (float *)(uint64_t)(iVar88 - 1);
          } while (uVar111 != uVar101);
        }
        fVar121 = g_023b4df0;
        if ((lVar90 != 0) && (3 < (int)fVar3)) {
          if (((uint)fVar3 & 0xfffffffc) == 4) {
            pfVar99 = (float *)0x0;
          }
          else {
            pfVar99 = (float *)0x0;
            do {
              pfVar94 = (float *)(lVar90 + (int64_t)pfVar99 * 4);
              if (fVar121 < *pfVar94 || fVar121 == *pfVar94) {
                pfVar94 = (float *)(lVar90 + 4 + (int64_t)pfVar99 * 4);
                if (*pfVar94 <= fVar121 && fVar121 != *pfVar94) goto LAB_012601d7;
              }
              else {
                pfVar93[(int64_t)pfVar99] = *pfVar95;
                pfVar94 = (float *)(lVar90 + 4 + (int64_t)pfVar99 * 4);
                if (*pfVar94 <= fVar121 && fVar121 != *pfVar94) {
LAB_012601d7:
                  pfVar93[(int64_t)pfVar99 + 1] = *pfVar95;
                }
              }
              pfVar99 = (float *)((int64_t)pfVar99 + 2);
            } while ((float *)(uint64_t)(uVar87 & 0xfffffffe) != pfVar99);
          }
          if (((uVar87 & 1) != 0) &&
             (pfVar94 = (float *)(lVar90 + (int64_t)pfVar99 * 4),
             *pfVar94 <= g_023b4df0 && g_023b4df0 != *pfVar94)) {
            pfVar93[(int64_t)pfVar99] = *pfVar95;
          }
        }
        pVar96 = (void*)pfVar99;
        local_158 = *pfVar95;
        if (local_88._0_4_ < g_0239109c) {
          pvVar89 = _pthread_getspecific(pVar96);
          if (pvVar89 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef460();
          pvVar89 = _pthread_getspecific(pVar96);
          if (pvVar89 != (void *)0x0) {
            FUN_00e8b990();
          }
          ppfVar110 = &local_58;
          FUN_013ddeb0();
          pfVar99 = local_58;
          if ((g_027c01a0 == '\0') && (iVar88 = ___cxa_guard_acquire(), iVar88 != 0)) {
            g_027af248 = FUN_001016a0();
            g_027af230 = "MUSampledFunction";
            g_027af238 = 0x58;
            pVar96 = 0x101650;
            g_027af240 = FUN_00101650;
            g_027af250 = 0;
            ram_00000000027af258 = 0;
            g_027af260 = 0;
            ram_00000000027af268 = 0;
            g_027af270 = 0;
            ram_00000000027af278 = 0;
            g_027af280 = 0;
            ram_00000000027af288 = 0;
            g_027af290 = 0;
            ram_00000000027af298 = 0;
            g_027af2a0 = 0;
            ram_00000000027af2a8 = 0;
            g_027af2b0 = 0;
            ram_00000000027af2b8 = 0;
            g_027af2c0 = 0;
            ram_00000000027af2c8 = 0;
            g_027af2d0 = 0;
            ram_00000000027af2d8 = 0;
            g_027af2e0 = 0;
            ram_00000000027af2e8 = 0;
            g_027af2f0 = 0;
            ___cxa_guard_release();
          }
          if (pfVar99 == (float *)0x0) {
            ppfVar110 = (float **)&g_02802688;
          }
          else {
            (**(code **)(*(int64_t *)pfVar99 + 0x360))();
            cVar86 = FUN_00e85ea0();
            if (cVar86 == '\0') {
              ppfVar110 = (float **)&g_02802688;
            }
          }
          pfVar99 = *ppfVar110;
          if (*(char *)(ppfVar110 + 1) == '\0') {
            if (pfVar99 != (float *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(ppfVar110 + 1) = 0;
          }
          if ((local_50 != '\0') && (local_58 != (float *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          if ((local_e0 != (float *)0x0) && (pfVar99 != (float *)0x0)) {
            pvVar89 = _pthread_getspecific(pVar96);
            if (pvVar89 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar89 = _pthread_getspecific(pVar96);
            if (pvVar89 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013eb920();
            if (local_50 != '\0') {
              FUN_00d50b20();
            }
            pvVar89 = _pthread_getspecific(pVar96);
            if (pvVar89 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013eb920();
            uVar4 = *(void*)(local_58 + 4);
            if (local_50 != '\0') {
              FUN_00d50b20();
            }
            pfVar94 = (float *)FUN_00e83010();
            if (3 < (int)fVar3) {
              if ((uVar87 < 4) ||
                 ((pfVar94 < (float *)(local_68._0_8_ + pfVar91 * 4) &&
                  ((uint64_t)local_68._0_8_ < pfVar94 + (int64_t)pfVar91)))) {
                pfVar113 = (float *)0x0;
              }
              else {
                pfVar113 = (float *)(uint64_t)(uVar87 & 0xfffffffc);
                uVar101 = 0;
                do {
                  fVar121 = *(float *)(local_68._0_8_ + uVar101 + 4) * _UNK_0240e0f4;
                  auVar135._8_4_ = *(float *)(local_68._0_8_ + uVar101 + 8) * _UNK_0240e0f8;
                  auVar135._12_4_ = *(float *)(local_68._0_8_ + uVar101 + 0xc) * _UNK_0240e0fc;
                  _local_48 = (double)_exp2f();
                  uStack_40 = extraout_XMM0_Qb_03;
                  auVar134._0_8_ = _exp2f();
                  auVar134._8_8_ = extraout_XMM0_Qb_04;
                  _local_48 = insertps(_local_48,auVar134,0x10);
                  auVar11._4_8_ = extraout_XMM0_Qb_04;
                  auVar11._0_4_ = fVar121;
                  auVar135._0_8_ = auVar11._0_8_ << 0x20;
                  auVar136._0_8_ = _exp2f(auVar135._8_8_);
                  auVar136._8_8_ = extraout_XMM0_Qb_05;
                  _local_48 = insertps(_local_48,auVar136,0x20);
                  auVar137._0_8_ = _exp2f();
                  auVar137._8_8_ = extraout_XMM0_Qb_06;
                  auVar144 = insertps(_local_48,auVar137,0x30);
                  auVar153._0_4_ = auVar144._0_4_ * g_0240e1b0;
                  auVar153._4_4_ = auVar144._4_4_ * _UNK_0240e1b4;
                  auVar153._8_4_ = auVar144._8_4_ * _UNK_0240e1b8;
                  auVar153._12_4_ = auVar144._12_4_ * _UNK_0240e1bc;
                  auVar144._4_4_ = fVar118;
                  auVar144._0_4_ = fVar118;
                  auVar144._8_4_ = fVar118;
                  auVar144._12_4_ = fVar118;
                  auVar144 = divps(auVar144,auVar153);
                  *(uint8_t (*) [16])((int64_t)pfVar94 + uVar101) = auVar144;
                  uVar101 = uVar101 + 0x10;
                } while (((int64_t)pfVar91 * 4 & 0xfffffffffffffff0U) != uVar101);
                if (pfVar113 == pfVar91) goto LAB_01260567;
              }
              uVar101 = ~(uint64_t)pfVar113;
              if ((uVar87 & 1) != 0) {
                fVar121 = (float)_exp2f(*(float *)(local_68._0_8_ + pfVar113 * 4) * g_023941f4);
                pfVar94[(int64_t)pfVar113] = fVar118 / (fVar121 * g_023941f8);
                pfVar113 = (float *)((uint64_t)pfVar113 | 1);
              }
              if (uVar101 + (int64_t)pfVar91 != 0) {
                do {
                  fVar121 = (float)_exp2f(*(float *)(local_68._0_8_ + pfVar113 * 4) * g_023941f4);
                  pfVar94[(int64_t)pfVar113] = fVar118 / (fVar121 * g_023941f8);
                  fVar121 = (float)_exp2f(*(float *)(local_68._0_8_ + ((int64_t)pfVar113 + 1) * 4)
                                          * g_023941f4);
                  pfVar94[(int64_t)pfVar113 + 1] = fVar118 / (fVar121 * g_023941f8);
                  pfVar113 = (float *)((int64_t)pfVar113 + 2);
                } while (pfVar91 != pfVar113);
              }
            }
LAB_01260567:
            local_158 = (float)FUN_014bf230(dVar127,pfVar94,uVar4);
            FUN_00e83070();
          }
          if (pfVar99 != (float *)0x0) {
            FUN_00d50b20();
          }
        }
        pcVar100 = ((int64_t)&MACH_HEADER.magic + 1);
        FUN_015c1480(fVar119 * g_0241d9d0,pfVar91);
        if (3 < (int)fVar3) {
          if (uVar87 < 8) {
            pcVar100 = 0x0;
          }
          else {
            pcVar100 = 0x0;
            if (((float *)(this_ptr + 0xfc) <= (uint64_t)local_68._0_8_ ||
                 (float *)(local_68._0_8_ + pfVar91 * 4) <= pfVar95) &&
               (pfVar93 + (int64_t)pfVar91 <= (uint64_t)local_68._0_8_ ||
                (float *)(local_68._0_8_ + pfVar91 * 4) <= pfVar93)) {
              pcVar100 = (uint64_t)(uVar87 & 0xfffffff8);
              fVar119 = *pfVar95;
              uVar101 = 0;
              do {
                pfVar99 = (float *)((int64_t)pfVar93 + uVar101);
                fVar121 = pfVar99[1];
                fVar120 = pfVar99[2];
                fVar155 = pfVar99[3];
                pfVar94 = (float *)((int64_t)pfVar93 + uVar101 + 0x10);
                fVar123 = *pfVar94;
                fVar124 = pfVar94[1];
                fVar125 = pfVar94[2];
                fVar15 = pfVar94[3];
                pfVar94 = (float *)(local_68._0_8_ + uVar101);
                fVar16 = pfVar94[1];
                fVar17 = pfVar94[2];
                fVar18 = pfVar94[3];
                pfVar113 = (float *)(local_68._0_8_ + uVar101 + 0x10);
                fVar19 = *pfVar113;
                fVar20 = pfVar113[1];
                fVar21 = pfVar113[2];
                fVar22 = pfVar113[3];
                pfVar113 = (float *)(local_68._0_8_ + uVar101);
                *pfVar113 = (*pfVar94 - *pfVar99) + (*pfVar99 - fVar119) * local_88._0_4_ + fVar119;
                pfVar113[1] = (fVar16 - fVar121) + (fVar121 - fVar119) * local_88._0_4_ + fVar119;
                pfVar113[2] = (fVar17 - fVar120) + (fVar120 - fVar119) * local_88._0_4_ + fVar119;
                pfVar113[3] = (fVar18 - fVar155) + (fVar155 - fVar119) * local_88._0_4_ + fVar119;
                pfVar99 = (float *)(local_68._0_8_ + uVar101 + 0x10);
                *pfVar99 = (fVar19 - fVar123) + (fVar123 - fVar119) * local_88._0_4_ + fVar119;
                pfVar99[1] = (fVar20 - fVar124) + (fVar124 - fVar119) * local_88._0_4_ + fVar119;
                pfVar99[2] = (fVar21 - fVar125) + (fVar125 - fVar119) * local_88._0_4_ + fVar119;
                pfVar99[3] = (fVar22 - fVar15) + (fVar15 - fVar119) * local_88._0_4_ + fVar119;
                uVar101 = uVar101 + 0x20;
              } while (((int64_t)pfVar91 * 4 & 0xffffffffffffffe0U) != uVar101);
              if ((float *)pcVar100 == pfVar91) goto LAB_012607a1;
            }
          }
          uVar101 = ~(uint64_t)pcVar100;
          if ((uVar87 & 1) != 0) {
            *(float *)(local_68._0_8_ + pcVar100 * 4) =
                 (*(float *)(local_68._0_8_ + pcVar100 * 4) - pfVar93[(int64_t)pcVar100]) +
                 (pfVar93[(int64_t)pcVar100] - *pfVar95) * local_88._0_4_ + *pfVar95;
            pcVar100 = ((uint64_t)pcVar100 | 1);
          }
          if (uVar101 + (int64_t)pfVar91 != 0) {
            do {
              *(float *)(local_68._0_8_ + pcVar100 * 4) =
                   (*(float *)(local_68._0_8_ + pcVar100 * 4) - pfVar93[(int64_t)pcVar100]) +
                   (pfVar93[(int64_t)pcVar100] - *pfVar95) * local_88._0_4_ + *pfVar95;
              *(float *)(local_68._0_8_ + ((int64_t)pcVar100 + 1) * 4) =
                   (*(float *)(local_68._0_8_ + ((int64_t)pcVar100 + 1) * 4) -
                   pfVar93[(int64_t)pcVar100 + 1]) +
                   (pfVar93[(int64_t)pcVar100 + 1] - *pfVar95) * local_88._0_4_ + *pfVar95;
              pcVar100 = ((int64_t)pcVar100 + 2);
            } while (pfVar91 != (float *)pcVar100);
          }
        }
LAB_012607a1:
        if (local_88._0_4_ < g_0239109c) {
          if (g_02390120 < local_88._0_4_) {
            fVar122 = (g_0239109c - local_88._0_4_) / g_02391090;
          }
          pvVar89 = _pthread_getspecific((void*)pcVar100);
          if (pvVar89 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef460();
          pvVar89 = _pthread_getspecific((void*)pcVar100);
          if (pvVar89 != (void *)0x0) {
            FUN_00e8b990();
          }
          ppfVar110 = &local_58;
          FUN_013ddeb0();
          pfVar99 = local_58;
          if ((g_027c01a0 == '\0') && (iVar88 = ___cxa_guard_acquire(), iVar88 != 0)) {
            g_027af248 = FUN_001016a0();
            g_027af230 = "MUSampledFunction";
            g_027af238 = 0x58;
            pcVar100 = FUN_00101650;
            g_027af240 = FUN_00101650;
            g_027af250 = 0;
            ram_00000000027af258 = 0;
            g_027af260 = 0;
            ram_00000000027af268 = 0;
            g_027af270 = 0;
            ram_00000000027af278 = 0;
            g_027af280 = 0;
            ram_00000000027af288 = 0;
            g_027af290 = 0;
            ram_00000000027af298 = 0;
            g_027af2a0 = 0;
            ram_00000000027af2a8 = 0;
            g_027af2b0 = 0;
            ram_00000000027af2b8 = 0;
            g_027af2c0 = 0;
            ram_00000000027af2c8 = 0;
            g_027af2d0 = 0;
            ram_00000000027af2d8 = 0;
            g_027af2e0 = 0;
            ram_00000000027af2e8 = 0;
            g_027af2f0 = 0;
            ___cxa_guard_release();
          }
          if (pfVar99 == (float *)0x0) {
            ppfVar110 = (float **)&g_02802688;
          }
          else {
            (**(code **)(*(int64_t *)pfVar99 + 0x360))();
            cVar86 = FUN_00e85ea0();
            if (cVar86 == '\0') {
              ppfVar110 = (float **)&g_02802688;
            }
          }
          pfVar99 = *ppfVar110;
          if (*(char *)(ppfVar110 + 1) == '\0') {
            if (pfVar99 != (float *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(ppfVar110 + 1) = 0;
          }
          if ((local_50 != '\0') && (local_58 != (float *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          if ((local_e0 != (float *)0x0) && (pfVar99 != (float *)0x0)) {
            pvVar89 = _pthread_getspecific((void*)pcVar100);
            pfVar93 = pfVar99;
            if ((pvVar89 != (void *)0x0) && (lVar90 = FUN_00e8b990(), lVar90 != 0)) {
              pfVar93 = *(float **)(pfVar99 + (uint64_t)(*(uint *)(lVar90 + 0x154) & 1) * 2 + 8);
              pcVar100 = pfVar99;
            }
            uVar4 = *(void*)(pfVar93 + 0x14);
            pVar96 = (void*)pcVar100;
            pvVar89 = _pthread_getspecific(pVar96);
            if ((pvVar89 != (void *)0x0) && (lVar90 = FUN_00e8b990(), lVar90 != 0)) {
              pVar96 = (void*)pfVar99;
            }
            FUN_013eb920();
            pcVar100 = *(code **)(local_58 + 4);
            if (local_50 != '\0') {
              FUN_00d50b20();
            }
            pvVar89 = _pthread_getspecific(pVar96);
            if (pvVar89 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013eb920();
            uVar5 = *(void*)(local_58 + 4);
            if (local_50 != '\0') {
              FUN_00d50b20();
            }
            pfVar93 = (float *)FUN_00e83010();
            if (3 < (int)fVar3) {
              if ((uVar87 < 4) ||
                 ((pfVar93 < (float *)(local_68._0_8_ + pfVar91 * 4) &&
                  ((uint64_t)local_68._0_8_ < pfVar93 + (int64_t)pfVar91)))) {
                pfVar94 = (float *)0x0;
              }
              else {
                pfVar94 = (float *)(uint64_t)(uVar87 & 0xfffffffc);
                uVar101 = 0;
                do {
                  fVar119 = *(float *)(local_68._0_8_ + uVar101 + 4) * _UNK_0240e0f4;
                  auVar139._8_4_ = *(float *)(local_68._0_8_ + uVar101 + 8) * _UNK_0240e0f8;
                  auVar139._12_4_ = *(float *)(local_68._0_8_ + uVar101 + 0xc) * _UNK_0240e0fc;
                  _local_48 = (double)_exp2f();
                  uStack_40 = extraout_XMM0_Qb_07;
                  auVar138._0_8_ = _exp2f();
                  auVar138._8_8_ = extraout_XMM0_Qb_08;
                  _local_48 = insertps(_local_48,auVar138,0x10);
                  auVar12._4_8_ = extraout_XMM0_Qb_08;
                  auVar12._0_4_ = fVar119;
                  auVar139._0_8_ = auVar12._0_8_ << 0x20;
                  auVar140._0_8_ = _exp2f(auVar139._8_8_);
                  auVar140._8_8_ = extraout_XMM0_Qb_09;
                  _local_48 = insertps(_local_48,auVar140,0x20);
                  auVar141._0_8_ = _exp2f();
                  auVar141._8_8_ = extraout_XMM0_Qb_10;
                  auVar144 = insertps(_local_48,auVar141,0x30);
                  auVar154._0_4_ = auVar144._0_4_ * g_0240e1b0;
                  auVar154._4_4_ = auVar144._4_4_ * _UNK_0240e1b4;
                  auVar154._8_4_ = auVar144._8_4_ * _UNK_0240e1b8;
                  auVar154._12_4_ = auVar144._12_4_ * _UNK_0240e1bc;
                  auVar25._4_4_ = fVar118;
                  auVar25._0_4_ = fVar118;
                  auVar25._8_4_ = fVar118;
                  auVar25._12_4_ = fVar118;
                  auVar144 = divps(auVar25,auVar154);
                  *(uint8_t (*) [16])((int64_t)pfVar93 + uVar101) = auVar144;
                  uVar101 = uVar101 + 0x10;
                } while (((int64_t)pfVar91 * 4 & 0xfffffffffffffff0U) != uVar101);
                if (pfVar94 == pfVar91) goto LAB_01260c3b;
              }
              uVar101 = ~(uint64_t)pfVar94;
              if ((uVar87 & 1) != 0) {
                fVar119 = (float)_exp2f(*(float *)(local_68._0_8_ + pfVar94 * 4) * g_023941f4);
                pfVar93[(int64_t)pfVar94] = fVar118 / (fVar119 * g_023941f8);
                pfVar94 = (float *)((uint64_t)pfVar94 | 1);
              }
              if (uVar101 + (int64_t)pfVar91 != 0) {
                do {
                  fVar119 = (float)_exp2f(*(float *)(local_68._0_8_ + pfVar94 * 4) * g_023941f4);
                  pfVar93[(int64_t)pfVar94] = fVar118 / (fVar119 * g_023941f8);
                  fVar119 = (float)_exp2f(*(float *)(local_68._0_8_ + ((int64_t)pfVar94 + 1) * 4) *
                                          g_023941f4);
                  pfVar93[(int64_t)pfVar94 + 1] = fVar118 / (fVar119 * g_023941f8);
                  pfVar94 = (float *)((int64_t)pfVar94 + 2);
                } while (pfVar91 != pfVar94);
              }
            }
LAB_01260c3b:
            fVar119 = (float)FUN_014bf230(dVar127,uVar4,uVar5);
            if ((!NAN(fVar119)) && (3 < (int)fVar3)) {
              fVar122 = fVar122 * (fVar119 - local_158);
              if (uVar87 < 8) {
                pcVar100 = 0x0;
              }
              else {
                pcVar100 = (uint64_t)(uVar87 & 0xfffffff8);
                uVar101 = ((uint64_t)((int64_t)pcVar100 + -8) >> 3) + 1;
                if ((float *)((int64_t)pcVar100 + -8) == (float *)0x0) {
                  lVar90 = 0;
                }
                else {
                  lVar102 = -(uVar101 & 0xfffffffffffffffe);
                  lVar90 = 0;
                  do {
                    pfVar93 = (float *)(local_68._0_8_ + lVar90 * 4);
                    fVar119 = pfVar93[1];
                    fVar121 = pfVar93[2];
                    fVar120 = pfVar93[3];
                    pfVar94 = (float *)(local_68._0_8_ + (lVar90 + 4) * 4);
                    pfVar113 = (float *)(local_68._0_8_ + (lVar90 + 8) * 4);
                    fVar155 = *pfVar113;
                    fVar123 = pfVar113[1];
                    fVar124 = pfVar113[2];
                    fVar125 = pfVar113[3];
                    pfVar113 = (float *)(local_68._0_8_ + (lVar90 + 0xc) * 4);
                    fVar15 = *pfVar113;
                    fVar16 = pfVar113[1];
                    fVar17 = pfVar113[2];
                    fVar18 = pfVar113[3];
                    auVar157._0_4_ = *pfVar94 - fVar122;
                    auVar157._4_4_ = pfVar94[1] - fVar122;
                    auVar157._8_4_ = pfVar94[2] - fVar122;
                    auVar157._12_4_ = pfVar94[3] - fVar122;
                    pfVar94 = (float *)(local_68._0_8_ + lVar90 * 4);
                    *pfVar94 = *pfVar93 - fVar122;
                    pfVar94[1] = fVar119 - fVar122;
                    pfVar94[2] = fVar121 - fVar122;
                    pfVar94[3] = fVar120 - fVar122;
                    *(uint8_t (*) [16])(local_68._0_8_ + (lVar90 + 4) * 4) = auVar157;
                    pfVar93 = (float *)(local_68._0_8_ + (lVar90 + 8) * 4);
                    *pfVar93 = fVar155 - fVar122;
                    pfVar93[1] = fVar123 - fVar122;
                    pfVar93[2] = fVar124 - fVar122;
                    pfVar93[3] = fVar125 - fVar122;
                    pfVar93 = (float *)(local_68._0_8_ + (lVar90 + 0xc) * 4);
                    *pfVar93 = fVar15 - fVar122;
                    pfVar93[1] = fVar16 - fVar122;
                    pfVar93[2] = fVar17 - fVar122;
                    pfVar93[3] = fVar18 - fVar122;
                    lVar90 = lVar90 + 0x10;
                    lVar102 = lVar102 + 2;
                  } while (lVar102 != 0);
                }
                if ((uVar101 & 1) != 0) {
                  pfVar93 = (float *)(local_68._0_8_ + lVar90 * 4);
                  fVar119 = pfVar93[1];
                  fVar121 = pfVar93[2];
                  fVar120 = pfVar93[3];
                  pfVar94 = (float *)(local_68._0_8_ + (lVar90 + 4) * 4);
                  auVar158._0_4_ = *pfVar94 - fVar122;
                  auVar158._4_4_ = pfVar94[1] - fVar122;
                  auVar158._8_4_ = pfVar94[2] - fVar122;
                  auVar158._12_4_ = pfVar94[3] - fVar122;
                  pfVar94 = (float *)(local_68._0_8_ + lVar90 * 4);
                  *pfVar94 = *pfVar93 - fVar122;
                  pfVar94[1] = fVar119 - fVar122;
                  pfVar94[2] = fVar121 - fVar122;
                  pfVar94[3] = fVar120 - fVar122;
                  *(uint8_t (*) [16])(local_68._0_8_ + (lVar90 + 4) * 4) = auVar158;
                }
                if ((float *)pcVar100 == pfVar91) goto LAB_01260d87;
              }
              do {
                *(float *)(local_68._0_8_ + pcVar100 * 4) =
                     *(float *)(local_68._0_8_ + pcVar100 * 4) - fVar122;
                pcVar100 = ((int64_t)pcVar100 + 1);
              } while (pfVar91 != (float *)pcVar100);
            }
LAB_01260d87:
            FUN_00e83070();
          }
          if (pfVar99 != (float *)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_00e83070();
        if (puVar92 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      fVar121 = g_0240d010;
      fVar119 = g_0240d00c;
      if (3 < (int)fVar3) {
        if (((uint)fVar3 & 0xfffffffc) == 4) {
          uVar101 = 0;
        }
        else {
          uVar101 = 0;
          do {
            fVar122 = fVar119;
            if ((*(float *)(local_68._0_8_ + uVar101 * 4) < fVar119) ||
               (fVar122 = fVar121, fVar121 < *(float *)(local_68._0_8_ + uVar101 * 4))) {
              *(float *)(local_68._0_8_ + uVar101 * 4) = fVar122;
            }
            fVar122 = fVar119;
            if ((*(float *)(local_68._0_8_ + (uVar101 + 1) * 4) < fVar119) ||
               (fVar122 = fVar121, fVar121 < *(float *)(local_68._0_8_ + (uVar101 + 1) * 4))) {
              *(float *)(local_68._0_8_ + (uVar101 + 1) * 4) = fVar122;
            }
            uVar101 = uVar101 + 2;
          } while ((uVar87 & 0xfffffffe) != uVar101);
        }
        pcVar100 = pfVar91;
        if (((uVar87 & 1) != 0) &&
           ((fVar119 = g_0240d00c, pcVar100 = local_68._0_8_,
            *(float *)(local_68._0_8_ + uVar101 * 4) < g_0240d00c ||
            (fVar119 = g_0240d010, g_0240d010 < *(float *)(local_68._0_8_ + uVar101 * 4))))) {
          *(float *)(local_68._0_8_ + uVar101 * 4) = fVar119;
        }
      }
      pVar97 = (void*)pcVar100;
      fVar119 = *pfVar95;
      pVar96 = (void*)this_ptr;
      if (NAN(fVar119)) {
        bVar9 = false;
        lVar90 = 0;
      }
      else {
        if (*(int64_t *)(this_ptr + 0xa8) == 0) {
          bVar9 = false;
          lVar90 = 0;
        }
        else {
          auVar27._8_8_ = 0;
          auVar27._0_8_ = uStack_40;
          _local_48 = auVar27 << 0x40;
          pvVar89 = _pthread_getspecific(pVar97);
          if (pvVar89 != (void *)0x0) {
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uStack_40;
            _local_48 = auVar28 << 0x40;
            FUN_00e8b990();
          }
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uStack_40;
          _local_48 = auVar29 << 0x40;
          dVar127 = (double)FUN_012dfb80();
          if (dVar127 <= 0.0) {
            bVar9 = false;
            lVar90 = 0;
          }
          else {
            if (*(int64_t *)(this_ptr + 0xa8) == 0) {
              local_50 = '\0';
              local_58 = (float *)0x0;
LAB_01261069:
              local_128 = (float *)0x0;
              bVar9 = false;
              local_f8 = 0;
              uStack_f4 = 0;
              bVar8 = false;
            }
            else {
              pvVar89 = _pthread_getspecific(pVar97);
              if (pvVar89 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dff70();
              local_128 = local_58;
              if (local_58 == (float *)0x0) goto LAB_01261069;
              if (local_50 == '\0') {
                FUN_00d50b00();
              }
              else {
                local_50 = '\0';
              }
              pvVar89 = _pthread_getspecific(pVar97);
              pfVar99 = local_128;
              if ((pvVar89 != (void *)0x0) && (lVar90 = FUN_00e8b990(), lVar90 != 0)) {
                pfVar99 = *(float **)
                           (local_128 + (uint64_t)(*(uint *)(lVar90 + 0x154) & 1) * 2 + 8);
              }
              bVar8 = !NAN(pfVar99[0x3e]) && !NAN(pfVar99[0x3e]);
              bVar9 = true;
              local_f8 = SUB84(local_128,0);
              uStack_f4 = (uint32_t)((uint64_t)local_128 >> 0x20);
            }
            if ((local_50 != '\0') && (local_58 != (float *)0x0)) {
              FUN_00d50b20();
            }
            if (bVar8) {
              local_138 = *(double *)(this_ptr + 0xf0);
              auVar30._8_8_ = 0;
              auVar30._0_8_ = uStack_40;
              _local_48 = auVar30 << 0x40;
              pvVar89 = _pthread_getspecific(pVar97);
              pfVar99 = local_128;
              if (pvVar89 != (void *)0x0) {
                auVar31._8_8_ = 0;
                auVar31._0_8_ = uStack_40;
                _local_48 = auVar31 << 0x40;
                lVar90 = FUN_00e8b990();
                if (lVar90 == 0) {
                  pfVar99 = (float *)CONCAT44(uStack_f4,local_f8);
                }
                else {
                  pfVar99 = *(float **)
                             (CONCAT44(uStack_f4,local_f8) + 0x20 +
                             (uint64_t)(*(uint *)(lVar90 + 0x154) & 1) * 8);
                }
              }
              if (*(double *)(pfVar99 + 0x3c) <= local_138 &&
                  local_138 != *(double *)(pfVar99 + 0x3c)) {
                auVar32._8_8_ = 0;
                auVar32._0_8_ = uStack_40;
                _local_48 = auVar32 << 0x40;
                pvVar89 = _pthread_getspecific(0x2802558);
                pfVar99 = local_128;
                if (pvVar89 != (void *)0x0) {
                  auVar33._8_8_ = 0;
                  auVar33._0_8_ = uStack_40;
                  _local_48 = auVar33 << 0x40;
                  lVar90 = FUN_00e8b990();
                  if (lVar90 == 0) {
                    pfVar99 = (float *)CONCAT44(uStack_f4,local_f8);
                  }
                  else {
                    pfVar99 = *(float **)
                               (CONCAT44(uStack_f4,local_f8) + 0x20 +
                               (uint64_t)(*(uint *)(lVar90 + 0x154) & 1) * 8);
                  }
                }
                local_138 = *(double *)(pfVar99 + 0x3c);
              }
              pVar97 = 0x2802558;
              auVar34._8_8_ = 0;
              auVar34._0_8_ = uStack_40;
              _local_48 = auVar34 << 0x40;
              pvVar89 = _pthread_getspecific(0x2802558);
              if (pvVar89 != (void *)0x0) {
                auVar35._8_8_ = 0;
                auVar35._0_8_ = uStack_40;
                _local_48 = auVar35 << 0x40;
                FUN_00e8b990();
              }
              auVar36._8_8_ = 0;
              auVar36._0_8_ = uStack_40;
              _local_48 = auVar36 << 0x40;
              dVar127 = (double)FUN_012dfb80();
              plVar6 = *(int64_t **)(this_ptr + 0xd0);
              if (plVar6 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              pvVar89 = _pthread_getspecific(pVar97);
              plVar105 = plVar6;
              if ((pvVar89 != (void *)0x0) && (lVar90 = FUN_00e8b990(), lVar90 != 0)) {
                plVar105 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar90 + 0x154) & 1) + 4];
              }
              dVar127 = (double)(**(code **)(*plVar105 + 0x380))(local_138 * dVar127);
              if (plVar6 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              auVar37._8_8_ = 0;
              auVar37._0_8_ = uStack_40;
              _local_48 = auVar37 << 0x40;
              pvVar89 = _pthread_getspecific(pVar97);
              pfVar99 = local_b0;
              if (pvVar89 != (void *)0x0) {
                auVar38._8_8_ = 0;
                auVar38._0_8_ = uStack_40;
                _local_48 = auVar38 << 0x40;
                lVar90 = FUN_00e8b990();
                if (lVar90 != 0) {
                  pfVar99 = *(float **)
                             (local_b0 + (uint64_t)(*(uint *)(lVar90 + 0x154) & 1) * 2 + 8);
                }
              }
              uVar111 = (uint)(dVar127 * *(double *)(pfVar99 + 0x14) * g_023942d0);
              if ((int)uVar87 < (int)uVar111) {
                uVar111 = uVar87;
              }
              auVar39._8_8_ = 0;
              auVar39._0_8_ = uStack_40;
              _local_48 = auVar39 << 0x40;
              pVar97 = pVar96;
              pvVar89 = _pthread_getspecific(pVar96);
              if (pvVar89 != (void *)0x0) {
                auVar40._8_8_ = 0;
                auVar40._0_8_ = uStack_40;
                _local_48 = auVar40 << 0x40;
                FUN_00e8b990();
              }
              auVar41._8_8_ = 0;
              auVar41._0_8_ = uStack_40;
              _local_48 = auVar41 << 0x40;
              fVar119 = (float)FUN_012dfb90();
              pvVar89 = _pthread_getspecific(pVar97);
              if (pvVar89 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e7c0();
              pvVar89 = _pthread_getspecific(pVar97);
              if (pvVar89 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar121 = (float)FUN_013de3b0();
              if ((local_50 != '\0') && (local_58 != (float *)0x0)) {
                FUN_00d50b20();
              }
              auVar42._8_8_ = 0;
              auVar42._0_8_ = uStack_40;
              _local_48 = auVar42 << 0x40;
              pvVar89 = _pthread_getspecific(pVar97);
              pfVar99 = local_128;
              if (pvVar89 != (void *)0x0) {
                auVar43._8_8_ = 0;
                auVar43._0_8_ = uStack_40;
                _local_48 = auVar43 << 0x40;
                lVar90 = FUN_00e8b990();
                if (lVar90 == 0) {
                  pfVar99 = (float *)CONCAT44(uStack_f4,local_f8);
                }
                else {
                  pfVar99 = *(float **)
                             (CONCAT44(uStack_f4,local_f8) + 0x20 +
                             (uint64_t)(*(uint *)(lVar90 + 0x154) & 1) * 8);
                }
              }
              fVar122 = 0.0;
              if ((!NAN(fVar121)) && (!NAN(pfVar99[0x3e]))) {
                fVar122 = (fVar117 - *pfVar95) - (fVar121 - pfVar99[0x3e]);
              }
              lVar90 = *(int64_t *)(local_b8 + 4);
              auVar44._8_8_ = 0;
              auVar44._0_8_ = uStack_40;
              _local_48 = auVar44 << 0x40;
              pvVar89 = _pthread_getspecific((void*)pfVar99);
              pfVar99 = local_128;
              if (pvVar89 != (void *)0x0) {
                auVar45._8_8_ = 0;
                auVar45._0_8_ = uStack_40;
                _local_48 = auVar45 << 0x40;
                lVar102 = FUN_00e8b990();
                if (lVar102 == 0) {
                  pfVar99 = (float *)CONCAT44(uStack_f4,local_f8);
                }
                else {
                  pfVar99 = *(float **)
                             (CONCAT44(uStack_f4,local_f8) + 0x20 +
                             (uint64_t)(*(uint *)(lVar102 + 0x154) & 1) * 8);
                }
              }
              if (NAN(pfVar99[0x3e])) {
                fVar121 = 0.0;
              }
              else {
                auVar46._8_8_ = 0;
                auVar46._0_8_ = uStack_40;
                _local_48 = auVar46 << 0x40;
                pvVar89 = _pthread_getspecific((void*)pfVar99);
                if (pvVar89 != (void *)0x0) {
                  auVar47._8_8_ = 0;
                  auVar47._0_8_ = uStack_40;
                  _local_48 = auVar47 << 0x40;
                  lVar102 = FUN_00e8b990();
                  if (lVar102 == 0) {
                    local_128 = (float *)CONCAT44(uStack_f4,local_f8);
                  }
                  else {
                    local_128 = *(float **)
                                 (CONCAT44(uStack_f4,local_f8) + 0x20 +
                                 (uint64_t)(*(uint *)(lVar102 + 0x154) & 1) * 8);
                  }
                }
                fVar121 = (local_128[0x3e] - *pfVar95) * g_02390118;
              }
              if ((int)uVar111 < 1) {
                lVar90 = CONCAT44(uStack_f4,local_f8);
              }
              else {
                fVar119 = fVar119 * g_023b3888;
                local_48 = (uint8_t  [4])g_02394294;
                fVar120 = g_02394294 / (float)(int)uVar111;
                fVar122 = fVar122 * g_0239011c;
                lVar102 = 0;
                do {
                  fVar123 = (float)_sinf();
                  fVar123 = fVar123 + g_02390d00;
                  fVar155 = *pfVar95;
                  fVar124 = (float)_sinf();
                  fVar124 = fVar124 * g_0239011c + g_0239011c;
                  fVar125 = fVar124 * fVar122 + *(float *)(lVar90 + lVar102 * 4);
                  *(float *)(lVar90 + lVar102 * 4) =
                       ((fVar123 * fVar121 + fVar155) - fVar125) * fVar119 * fVar124 + fVar125;
                  local_48 = (uint8_t  [4])((float)local_48 + fVar120 + fVar120);
                  lVar102 = lVar102 + 1;
                } while (uVar111 != (uint)lVar102);
                lVar90 = CONCAT44(uStack_f4,local_f8);
              }
            }
            else {
              lVar90 = CONCAT44(uStack_f4,local_f8);
            }
          }
        }
        fVar119 = *pfVar95;
      }
      pfVar99 = (float *)(uint64_t)(uint)fVar3;
      if ((NAN(fVar119)) || (*(int64_t *)(this_ptr + 0xa0) == 0)) {
        bVar8 = false;
        local_a8 = (float *)0x0;
      }
      else {
        auVar48._8_8_ = 0;
        auVar48._0_8_ = uStack_40;
        _local_48 = auVar48 << 0x40;
        pvVar89 = _pthread_getspecific((void*)fVar3);
        if (pvVar89 != (void *)0x0) {
          auVar49._8_8_ = 0;
          auVar49._0_8_ = uStack_40;
          _local_48 = auVar49 << 0x40;
          FUN_00e8b990();
        }
        auVar50._8_8_ = 0;
        auVar50._0_8_ = uStack_40;
        _local_48 = auVar50 << 0x40;
        dVar127 = (double)FUN_012dfb80();
        if (dVar127 <= 0.0) {
          bVar8 = false;
          local_a8 = (float *)0x0;
        }
        else {
          if (*(int64_t *)(this_ptr + 0xa0) == 0) {
            local_50 = '\0';
            local_58 = (float *)0x0;
LAB_01261f02:
            bVar8 = false;
            local_a8 = (float *)0x0;
            bVar115 = false;
          }
          else {
            pvVar89 = _pthread_getspecific((void*)pfVar99);
            if (pvVar89 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff00();
            local_a8 = local_58;
            if (local_58 == (float *)0x0) goto LAB_01261f02;
            if (local_50 == '\0') {
              FUN_00d50b00();
            }
            else {
              local_50 = '\0';
            }
            pvVar89 = _pthread_getspecific((void*)pfVar99);
            pfVar93 = local_a8;
            if ((pvVar89 != (void *)0x0) && (lVar102 = FUN_00e8b990(), lVar102 != 0)) {
              pfVar93 = *(float **)(local_a8 + (uint64_t)(*(uint *)(lVar102 + 0x154) & 1) * 2 + 8);
            }
            bVar115 = !NAN(pfVar93[0x3e]) && !NAN(pfVar93[0x3e]);
            bVar8 = true;
          }
          if ((local_50 != '\0') && (local_58 != (float *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar115) {
            local_138 = *(double *)(this_ptr + 0xf0);
            auVar51._8_8_ = 0;
            auVar51._0_8_ = uStack_40;
            _local_48 = auVar51 << 0x40;
            pvVar89 = _pthread_getspecific((void*)pfVar99);
            pfVar99 = local_a8;
            if (pvVar89 != (void *)0x0) {
              auVar52._8_8_ = 0;
              auVar52._0_8_ = uStack_40;
              _local_48 = auVar52 << 0x40;
              lVar102 = FUN_00e8b990();
              if (lVar102 != 0) {
                pfVar99 = *(float **)
                           (local_a8 + (uint64_t)(*(uint *)(lVar102 + 0x154) & 1) * 2 + 8);
              }
            }
            if (*(double *)(pfVar99 + 0x3c) <= local_138 && local_138 != *(double *)(pfVar99 + 0x3c)
               ) {
              auVar53._8_8_ = 0;
              auVar53._0_8_ = uStack_40;
              _local_48 = auVar53 << 0x40;
              pvVar89 = _pthread_getspecific(0x2802558);
              pfVar99 = local_a8;
              if (pvVar89 != (void *)0x0) {
                auVar54._8_8_ = 0;
                auVar54._0_8_ = uStack_40;
                _local_48 = auVar54 << 0x40;
                lVar102 = FUN_00e8b990();
                if (lVar102 != 0) {
                  pfVar99 = *(float **)
                             (local_a8 + (uint64_t)(*(uint *)(lVar102 + 0x154) & 1) * 2 + 8);
                }
              }
              local_138 = *(double *)(pfVar99 + 0x3c);
            }
            pVar97 = 0x2802558;
            auVar55._8_8_ = 0;
            auVar55._0_8_ = uStack_40;
            _local_48 = auVar55 << 0x40;
            pvVar89 = _pthread_getspecific(0x2802558);
            if (pvVar89 != (void *)0x0) {
              auVar56._8_8_ = 0;
              auVar56._0_8_ = uStack_40;
              _local_48 = auVar56 << 0x40;
              FUN_00e8b990();
            }
            auVar57._8_8_ = 0;
            auVar57._0_8_ = uStack_40;
            _local_48 = auVar57 << 0x40;
            dVar127 = (double)FUN_012dfb80();
            plVar6 = *(int64_t **)(this_ptr + 0xd0);
            if (plVar6 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            pvVar89 = _pthread_getspecific(pVar97);
            plVar105 = plVar6;
            if ((pvVar89 != (void *)0x0) && (lVar102 = FUN_00e8b990(), lVar102 != 0)) {
              plVar105 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar102 + 0x154) & 1) + 4];
            }
            dVar127 = (double)(**(code **)(*plVar105 + 0x380))
                                        (*(double *)(this_ptr + 0xf0) - local_138 * dVar127);
            if (plVar6 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            auVar58._8_8_ = 0;
            auVar58._0_8_ = uStack_40;
            _local_48 = auVar58 << 0x40;
            pvVar89 = _pthread_getspecific(pVar97);
            pfVar99 = local_b0;
            if (pvVar89 != (void *)0x0) {
              auVar59._8_8_ = 0;
              auVar59._0_8_ = uStack_40;
              _local_48 = auVar59 << 0x40;
              lVar102 = FUN_00e8b990();
              if (lVar102 != 0) {
                pfVar99 = *(float **)
                           (local_b0 + (uint64_t)(*(uint *)(lVar102 + 0x154) & 1) * 2 + 8);
              }
            }
            uVar111 = (uint)((dVar128 - dVar127) * *(double *)(pfVar99 + 0x14) * g_023942d0);
            if ((int)uVar87 < (int)uVar111) {
              uVar111 = uVar87;
            }
            auVar60._8_8_ = 0;
            auVar60._0_8_ = uStack_40;
            _local_48 = auVar60 << 0x40;
            pvVar89 = _pthread_getspecific(pVar96);
            if (pvVar89 != (void *)0x0) {
              auVar61._8_8_ = 0;
              auVar61._0_8_ = uStack_40;
              _local_48 = auVar61 << 0x40;
              FUN_00e8b990();
            }
            auVar62._8_8_ = 0;
            auVar62._0_8_ = uStack_40;
            _local_48 = auVar62 << 0x40;
            fVar119 = (float)FUN_012dfb90();
            pvVar89 = _pthread_getspecific(pVar96);
            if (pvVar89 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            pvVar89 = _pthread_getspecific(pVar96);
            if (pvVar89 != (void *)0x0) {
              FUN_00e8b990();
            }
            fVar121 = (float)FUN_013de3b0();
            if ((local_50 != '\0') && (local_58 != (float *)0x0)) {
              FUN_00d50b20();
            }
            auVar63._8_8_ = 0;
            auVar63._0_8_ = uStack_40;
            _local_48 = auVar63 << 0x40;
            pvVar89 = _pthread_getspecific(pVar96);
            pfVar99 = local_a8;
            if (pvVar89 != (void *)0x0) {
              auVar64._8_8_ = 0;
              auVar64._0_8_ = uStack_40;
              _local_48 = auVar64 << 0x40;
              lVar102 = FUN_00e8b990();
              if (lVar102 != 0) {
                pfVar99 = *(float **)
                           (local_a8 + (uint64_t)(*(uint *)(lVar102 + 0x154) & 1) * 2 + 8);
              }
            }
            fVar122 = 0.0;
            if ((!NAN(fVar121)) && (!NAN(pfVar99[0x3e]))) {
              fVar122 = (fVar117 - *pfVar95) - (fVar121 - pfVar99[0x3e]);
            }
            lVar102 = *(int64_t *)(local_b8 + 4);
            auVar65._8_8_ = 0;
            auVar65._0_8_ = uStack_40;
            _local_48 = auVar65 << 0x40;
            pvVar89 = _pthread_getspecific((void*)pfVar99);
            pfVar99 = local_a8;
            if (pvVar89 != (void *)0x0) {
              auVar66._8_8_ = 0;
              auVar66._0_8_ = uStack_40;
              _local_48 = auVar66 << 0x40;
              lVar108 = FUN_00e8b990();
              if (lVar108 != 0) {
                pfVar99 = *(float **)
                           (local_a8 + (uint64_t)(*(uint *)(lVar108 + 0x154) & 1) * 2 + 8);
              }
            }
            if (NAN(pfVar99[0x3e])) {
              fVar117 = 0.0;
            }
            else {
              auVar67._8_8_ = 0;
              auVar67._0_8_ = uStack_40;
              _local_48 = auVar67 << 0x40;
              pvVar89 = _pthread_getspecific((void*)pfVar99);
              pfVar93 = local_a8;
              if (pvVar89 != (void *)0x0) {
                auVar68._8_8_ = 0;
                auVar68._0_8_ = uStack_40;
                _local_48 = auVar68 << 0x40;
                lVar108 = FUN_00e8b990();
                if (lVar108 != 0) {
                  pfVar99 = local_a8;
                  pfVar93 = *(float **)
                             (local_a8 + (uint64_t)(*(uint *)(lVar108 + 0x154) & 1) * 2 + 8);
                }
              }
              fVar117 = (pfVar93[0x3e] - *pfVar95) * g_0239011c;
            }
            if (0 < (int)uVar111) {
              fVar119 = fVar119 * g_023b3888;
              fVar121 = g_02394294 / (float)(int)uVar111;
              fVar122 = fVar122 * g_0239011c;
              lVar102 = lVar102 + (int64_t)(int)(uVar87 - uVar111) * 4;
              lVar108 = 0;
              local_48 = (uint8_t  [4])g_024204d0;
              do {
                fVar155 = (float)_sinf();
                fVar155 = fVar155 + g_02390124;
                fVar120 = *pfVar95;
                fVar123 = (float)_sinf();
                fVar123 = fVar123 * g_0239011c + g_0239011c;
                fVar124 = fVar123 * fVar122 + *(float *)(lVar102 + lVar108 * 4);
                *(float *)(lVar102 + lVar108 * 4) =
                     ((fVar155 * fVar117 + fVar120) - fVar124) * fVar119 * fVar123 + fVar124;
                local_48 = (uint8_t  [4])((float)local_48 + fVar121 + fVar121);
                lVar108 = lVar108 + 1;
              } while (uVar111 != (uint)lVar108);
            }
          }
        }
      }
      uVar101 = *(uint64_t *)(local_b8 + 4);
      uVar103 = *(uint64_t *)(local_120 + 4);
      FUN_00c8e690();
      local_88 = local_58;
      if ((((local_50 == '\0') && (local_58 != (float *)0x0)) && (FUN_00d50b00(), local_50 != '\0'))
         && (local_58 != (float *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      bVar115 = local_88 != (float *)0x0;
      if (3 < (int)fVar3) {
        uVar112 = *(uint64_t *)(local_88 + 4);
        uVar104 = 0;
        if (2 < uVar87 - 1) {
          uVar106 = (uint64_t)(uVar87 - 1) + 1;
          uVar109 = uVar112 + uVar106 * 4;
          pfVar99 = (float *)CONCAT71((int7)(uVar109 >> 8),uVar103 < uVar109);
          if ((uVar101 + uVar106 * 4 <= uVar112 || uVar109 <= uVar101) &&
             (uVar106 * 4 + uVar103 <= uVar112 || uVar103 >= uVar109)) {
            uVar104 = uVar106 & 0xfffffffffffffffc;
            uVar109 = 0;
            do {
              puVar92 = (void*)(uVar101 + uVar109 * 4);
              uVar4 = *puVar92;
              uVar5 = puVar92[1];
              auVar23._4_4_ = fVar118;
              auVar23._0_4_ = fVar118;
              auVar23._8_4_ = fVar118;
              auVar23._12_4_ = fVar118;
              auVar144 = divps(auVar23,*(uint8_t (*) [16])(uVar103 + uVar109 * 4));
              fVar117 = auVar144._4_4_ * _UNK_02394164;
              auVar146._8_4_ = auVar144._8_4_ * _UNK_02394168;
              auVar146._12_4_ = auVar144._12_4_ * _UNK_0239416c;
              _local_48 = (double)_logf();
              uStack_40 = extraout_XMM0_Qb_12;
              auVar145._0_8_ = _logf();
              auVar145._8_8_ = extraout_XMM0_Qb_13;
              _local_48 = insertps(_local_48,auVar145,0x10);
              auVar13._4_8_ = extraout_XMM0_Qb_13;
              auVar13._0_4_ = fVar117;
              auVar146._0_8_ = auVar13._0_8_ << 0x20;
              auVar147._0_8_ = _logf(auVar146._8_8_);
              auVar147._8_8_ = extraout_XMM0_Qb_14;
              _local_48 = insertps(_local_48,auVar147,0x20);
              auVar148._0_8_ = _logf();
              auVar148._8_8_ = extraout_XMM0_Qb_15;
              auVar144 = insertps(_local_48,auVar148,0x30);
              local_168 = (float)uVar4;
              fStack_164 = (float)((uint64_t)uVar4 >> 0x20);
              fStack_160 = (float)uVar5;
              fStack_15c = (float)((uint64_t)uVar5 >> 0x20);
              auStack_44 = (uint8_t  [4])
                           ((auVar144._4_4_ * _UNK_0240cfb4 + fStack_164) * _UNK_0240e0f4);
              local_48 = (uint8_t  [4])
                         ((auVar144._0_4_ * g_0240cfb0 + local_168) * g_0240e0f0);
              uStack_40._0_4_ = (auVar144._8_4_ * _UNK_0240cfb8 + fStack_160) * _UNK_0240e0f8;
              uStack_40._4_4_ = (auVar144._12_4_ * _UNK_0240cfbc + fStack_15c) * _UNK_0240e0fc;
              local_68._0_8_ = _exp2f();
              local_68._8_8_ = extraout_XMM0_Qb_16;
              auVar149._0_8_ = _exp2f();
              auVar149._8_8_ = extraout_XMM0_Qb_17;
              auVar144 = insertps(local_68,auVar149,0x10);
              auVar14._4_8_ = extraout_XMM0_Qb_17;
              auVar14._0_4_ = auStack_44;
              auVar150._0_8_ = auVar14._0_8_ << 0x20;
              auVar150._8_4_ = (uint32_t)uStack_40;
              auVar150._12_4_ = uStack_40._4_4_;
              auVar151._0_8_ = _exp2f(auVar150._8_8_);
              auVar151._8_8_ = extraout_XMM0_Qb_18;
              auVar144 = insertps(auVar144,auVar151,0x20);
              auVar152._0_8_ = _exp2f();
              auVar152._8_8_ = extraout_XMM0_Qb_19;
              auVar144 = insertps(auVar144,auVar152,0x30);
              *(uint8_t (*) [16])(uVar112 + uVar109 * 4) = auVar144;
              uVar109 = uVar109 + 4;
            } while (uVar104 != uVar109);
            uVar101 = uVar101 + uVar104 * 4;
            uVar112 = uVar112 + uVar104 * 4;
            uVar103 = uVar104 * 4 + uVar103;
            if (uVar106 == uVar104) goto LAB_012628b4;
          }
        }
        lVar102 = 0;
        do {
          auVar142._0_8_ = _logf((fVar118 / *(float *)(uVar103 + lVar102 * 4)) * g_02394204);
          auVar142._8_8_ = extraout_XMM0_Qb_11;
          auVar143._4_12_ = auVar142._4_12_;
          auVar143._0_4_ =
               ((float)auVar142._0_8_ * g_0240e498 + *(float *)(uVar101 + lVar102 * 4)) *
               g_023941f4;
          uVar126 = _exp2f(auVar143._0_8_);
          *(void*)(uVar112 + lVar102 * 4) = uVar126;
          lVar102 = lVar102 + 1;
        } while (uVar87 - (int)uVar104 != (int)lVar102);
      }
LAB_012628b4:
      if (*(int64_t *)(this_ptr + 0xd8) == 0) {
        local_50 = '\0';
        local_58 = (float *)0x0;
        bVar116 = false;
      }
      else {
        pvVar89 = _pthread_getspecific((void*)pfVar99);
        if (pvVar89 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef490();
        if (local_58 == (float *)0x0) {
          bVar116 = false;
        }
        else {
          if (*(int64_t *)(this_ptr + 0xd8) == 0) {
            local_100 = '\0';
            local_108 = 0;
          }
          else {
            pvVar89 = _pthread_getspecific((void*)pfVar99);
            if (pvVar89 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef490();
          }
          pvVar89 = _pthread_getspecific((void*)pfVar99);
          if (pvVar89 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar88 = FUN_01326de0();
          bVar116 = iVar88 == 3;
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((local_50 != '\0') && (local_58 != (float *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar116) {
        puVar92 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar92 = &g_025f0d98;
        puVar92[2] = 0;
        puVar92[3] = 0;
        puVar92[4] = 0;
        puVar92[5] = 0;
        puVar92[6] = 0;
        puVar92[7] = 0;
        (*g_025f0db0)();
        pfVar99 = (float *)((int64_t)&MACH_HEADER.magic + 3);
        FUN_015c1500(3,pfVar91,1);
        FUN_00d50b20();
      }
      pfVar95 = (float *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void*)(pfVar95 + 0xe) = 0;
      pfVar95[0xf] = 0.0;
      *(void*)(pfVar95 + 0x10) = 0;
      *(void**)pfVar95 = &g_025dc9e8;
      pfVar95[0x12] = 0.0;
      pfVar95[0x13] = 0.0;
      pfVar95[0x14] = 0.0;
      pcVar100 = g_025dca00;
      pfVar95[0x15] = 0.0;
      (*g_025dca00)();
      auVar69._8_8_ = 0;
      auVar69._0_8_ = uStack_40;
      _local_48 = auVar69 << 0x40;
      pvVar89 = _pthread_getspecific((void*)pfVar99);
      if (pvVar89 != (void *)0x0) {
        auVar70._8_8_ = 0;
        auVar70._0_8_ = uStack_40;
        _local_48 = auVar70 << 0x40;
        lVar102 = FUN_00e8b990();
        if (lVar102 != 0) {
          pfVar99 = pfVar95;
        }
      }
      auVar71._8_8_ = 0;
      auVar71._0_8_ = uStack_40;
      _local_48 = auVar71 << 0x40;
      pvVar89 = _pthread_getspecific((void*)pfVar99);
      pfVar93 = local_b0;
      if (pvVar89 != (void *)0x0) {
        auVar72._8_8_ = 0;
        auVar72._0_8_ = uStack_40;
        _local_48 = auVar72 << 0x40;
        lVar102 = FUN_00e8b990();
        if (lVar102 != 0) {
          pfVar93 = *(float **)(local_b0 + (uint64_t)(*(uint *)(lVar102 + 0x154) & 1) * 2 + 8);
          pfVar99 = local_b0;
        }
      }
      auVar73._8_8_ = 0;
      auVar73._0_8_ = uStack_40;
      _local_48 = auVar73 << 0x40;
      FUN_013eb950(*(void*)(pfVar93 + 0x14));
      auVar74._8_8_ = 0;
      auVar74._0_8_ = uStack_40;
      _local_48 = auVar74 << 0x40;
      pvVar89 = _pthread_getspecific((void*)pfVar99);
      if (pvVar89 != (void *)0x0) {
        auVar75._8_8_ = 0;
        auVar75._0_8_ = uStack_40;
        _local_48 = auVar75 << 0x40;
        lVar102 = FUN_00e8b990();
        if (lVar102 != 0) {
          pfVar99 = pfVar95;
        }
      }
      FUN_013eb890();
      auVar76._8_8_ = 0;
      auVar76._0_8_ = uStack_40;
      _local_48 = auVar76 << 0x40;
      pvVar89 = _pthread_getspecific((void*)pfVar99);
      if (pvVar89 != (void *)0x0) {
        auVar77._8_8_ = 0;
        auVar77._0_8_ = uStack_40;
        _local_48 = auVar77 << 0x40;
        lVar102 = FUN_00e8b990();
        if (lVar102 != 0) {
          pfVar99 = pfVar95;
        }
      }
      auVar78._8_8_ = 0;
      auVar78._0_8_ = uStack_40;
      _local_48 = auVar78 << 0x40;
      FUN_013eb720();
      auVar79._8_8_ = 0;
      auVar79._0_8_ = uStack_40;
      _local_48 = auVar79 << 0x40;
      FUN_00d64850();
      pfVar93 = *(float **)(this_ptr + 0x198);
      if (pfVar93 != pfVar95) {
        auVar80._8_8_ = 0;
        auVar80._0_8_ = uStack_40;
        _local_48 = auVar80 << 0x40;
        FUN_00d50b00();
        *(float **)(this_ptr + 0x198) = pfVar95;
        if (pfVar93 != (float *)0x0) {
          auVar81._8_8_ = 0;
          auVar81._0_8_ = uStack_40;
          _local_48 = auVar81 << 0x40;
          FUN_00d50b20();
        }
      }
      auVar82._8_8_ = 0;
      auVar82._0_8_ = uStack_40;
      _local_48 = auVar82 << 0x40;
      FUN_00d64910();
      puVar92 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void*)(puVar92 + 7) = 0;
      *(void*)((int64_t)puVar92 + 0x3c) = 0;
      *(void*)(puVar92 + 8) = 0;
      *puVar92 = &g_025dc9e8;
      puVar92[9] = 0;
      puVar92[10] = 0;
      (*pcVar100)();
      _local_48 = (double)&g_02802501;
      pvVar89 = _pthread_getspecific((void*)pfVar99);
      if (pvVar89 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar89 = _pthread_getspecific((void*)pfVar99);
      pfVar95 = local_b0;
      if ((pvVar89 != (void *)0x0) && (lVar102 = FUN_00e8b990(), lVar102 != 0)) {
        pfVar95 = *(float **)(local_b0 + (uint64_t)(*(uint *)(lVar102 + 0x154) & 1) * 2 + 8);
        pfVar99 = local_b0;
      }
      pVar96 = (void*)pfVar99;
      FUN_013eb950(*(void*)(pfVar95 + 0x14));
      pvVar89 = _pthread_getspecific(pVar96);
      if (pvVar89 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb890();
      pvVar89 = _pthread_getspecific(pVar96);
      if (pvVar89 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb720();
      plVar6 = (int64_t *)(this_ptr + 0x1a0);
      FUN_00d64850();
      puVar7 = (void*)*plVar6;
      if (puVar7 != puVar92) {
        FUN_00d50b00();
        *plVar6 = (int64_t)puVar92;
        if (puVar7 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
      lVar102 = FUN_00e8b990();
      if (lVar102 != 0) {
        FUN_00e8b990();
        lVar102 = *plVar6;
        if (lVar102 != 0) {
          FUN_00d50b00();
        }
        FUN_00cb00c0();
        if (lVar102 != 0) {
          FUN_00d50b20();
        }
      }
      if ((bVar8) && (local_a8 != (float *)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar9) && (lVar90 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d50b20();
      goto LAB_01263126;
    }
    puVar92 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)(puVar92 + 7) = 0;
    *(void*)((int64_t)puVar92 + 0x3c) = 0;
    *(void*)(puVar92 + 8) = 0;
    pVar96 = 0x25e3350;
    *puVar92 = &g_025e3350;
    puVar92[9] = 0;
    puVar92[10] = 0;
    *(void*)(puVar92 + 0xb) = 0;
    (*g_025e3368)();
    pvVar89 = _pthread_getspecific(pVar96);
    if (pvVar89 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0142cfa0(g_0238fee8);
    pvVar89 = _pthread_getspecific(pVar96);
    if (pvVar89 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb720();
    plVar6 = (int64_t *)(this_ptr + 0x1a0);
    FUN_00d64850();
    puVar7 = (void*)*plVar6;
    if (puVar7 != puVar92) {
      FUN_00d50b00();
      *plVar6 = (int64_t)puVar92;
      if (puVar7 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    FUN_00d64850();
    if (*(int64_t *)(this_ptr + 0x198) != 0) {
      *(int64_t *)(this_ptr + 0x198) = 0;
      FUN_00d50b20();
    }
    FUN_00d64910();
    lVar90 = FUN_00e8b990();
    if (lVar90 != 0) {
      FUN_00e8b990();
      lVar90 = *plVar6;
      if (lVar90 != 0) {
        FUN_00d50b00();
      }
      FUN_00cb00c0();
      if (lVar90 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  else {
    pvVar89 = _pthread_getspecific(pVar96);
    if ((pvVar89 != (void *)0x0) && (lVar90 = FUN_00e8b990(), lVar90 != 0)) {
      pVar96 = (void*)local_e0;
    }
    FUN_013eb920();
    lVar90 = *(int64_t *)(local_58 + 4);
    if (local_50 != '\0') {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x100) != 0) goto LAB_0125f469;
LAB_0125f45b:
    if (*(int64_t *)(this_ptr + 0x108) != 0) goto LAB_0125f469;
  }
  bVar83 = false;
  local_120 = (float *)0x0;
  bVar114 = false;
  local_b8 = (float *)0x0;
  bVar115 = false;
  local_88 = (float *)0x0;
LAB_01263126:
  if (!bVar84 && local_e0 != (float *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar85 && local_b0 != (float *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar83) && (local_120 != (float *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar114) && (local_b8 != (float *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar115) && (local_88 != (float *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 013764e0
// ============================================================
// Function: FUN_013764e0
// Address: 013764e0
// Size: 12143 bytes
// Class: MUSampledFunction
// String references:
//   "MUSampledFunction"

void FUN_013764e0(int64_t *param_1,int64_t *param_2)

{
  float *pfVar1;
  double dVar2;
  int64_t *plVar3;
  bool bVar4;
  uint8_t auVar5 [12];
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  char cVar10;
  uint32_t uVar11;
  uint uVar12;
  int iVar13;
  void *pvVar14;
  int64_t lVar15;
  int64_t lVar16;
  void*puVar17;
  void*puVar18;
  int64_t **pplVar19;
  int64_t *plVar20;
  int64_t *plVar21;
  int64_t *plVar22;
  void* pVar23;
  int iVar24;
  int64_t **pplVar25;
  int64_t *plVar26;
  int iVar27;
  int iVar28;
  double dVar29;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar30;
  uint64_t uVar31;
  int iVar32;
  double dVar33;
  char cVar34;
  int iVar35;
  uint uVar36;
  bool bVar37;
  uint64_t uVar38;
  float fVar39;
  uint64_t uVar41;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar42 [16];
  float fVar40;
  uint8_t auVar43 [16];
  uint8_t auVar44 [16];
  uint8_t auVar45 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar46 [16];
  uint8_t auVar47 [16];
  uint8_t auVar48 [16];
  uint8_t auVar49 [16];
  uint8_t auVar50 [16];
  uint8_t auVar51 [16];
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  uint8_t auVar52 [16];
  uint8_t auVar53 [16];
  uint8_t auVar54 [16];
  float fVar56;
  float fVar57;
  uint8_t auVar55 [16];
  uint8_t auVar58 [16];
  double dVar59;
  int64_t *local_390;
  uint8_t local_388;
  uint64_t local_380;
  uint8_t local_378;
  int64_t *local_370;
  uint8_t local_368;
  int64_t *local_360;
  uint8_t local_358;
  int64_t *local_350;
  uint8_t local_348;
  void*local_340;
  uint8_t local_338;
  int64_t local_330;
  int64_t local_328;
  double local_320;
  void*local_318;
  code *local_310;
  int64_t *local_308;
  double local_300;
  void*local_2f8;
  code *local_2f0;
  uint8_t local_2e8 [16];
  int64_t local_2d0;
  char local_2c8;
  int64_t local_2c0;
  char local_2b8;
  double local_2b0;
  uint64_t local_2a8;
  double local_2a0;
  double local_298;
  int64_t local_290;
  char local_288;
  int64_t local_280;
  char local_278;
  int64_t *local_270;
  char local_268;
  int64_t *local_260;
  char local_258;
  int64_t *local_250;
  char local_248;
  int64_t local_240;
  char local_238;
  int64_t local_230;
  char local_228;
  int64_t *local_220;
  char local_218;
  int64_t *local_210;
  char local_208;
  int64_t *local_200;
  char local_1f8;
  int64_t *local_1f0;
  char local_1e8;
  int64_t *local_1e0;
  char local_1d8;
  int64_t *local_1d0;
  char local_1c8;
  int64_t *local_1c0;
  char local_1b8;
  uint32_t local_1b0;
  float local_1ac;
  int64_t *local_1a8;
  int64_t *local_1a0;
  uint64_t local_198;
  uint64_t local_190;
  double local_188;
  int64_t *local_180;
  uint64_t local_178;
  void*local_170;
  int64_t *local_138;
  uint64_t uStack_110;
  int local_f0;
  int local_ec;
  double local_e8;
  int64_t local_e0;
  uint8_t local_d8 [16];
  int64_t *local_c8;
  double local_c0;
  int64_t **local_b8;
  int64_t **local_b0;
  uint64_t local_a8;
  float fStack_a0;
  float fStack_9c;
  double local_98;
  uint64_t uStack_90;
  int64_t *local_88;
  int64_t *local_80;
  double local_78;
  double local_70;
  int64_t *local_68;
  double local_60;
  uint64_t local_58;
  int64_t *local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_05;
  
  lVar16 = *arg1;
  pvVar14 = _pthread_getspecific((void*)param_1);
  if (pvVar14 != (void *)0x0) {
    lVar16 = *arg1;
    lVar15 = FUN_00e8b990();
    if (lVar15 != 0) {
      lVar16 = *(int64_t *)(lVar16 + 0x20 + (uint64_t)(*(uint *)(lVar15 + 0x154) & 1) * 8);
    }
  }
  lVar16 = *(int64_t *)(lVar16 + 0x40);
  if (lVar16 != 0) {
    FUN_00d50b00();
  }
  local_288 = '\x01';
  local_290 = lVar16;
  uVar41 = FUN_0147ce20();
  plVar3 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (int64_t *)0x0) && (uVar41 = FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      uVar41 = FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_288 != '\0') && (local_290 != 0)) {
    uVar41 = FUN_00d50b20();
  }
  local_180 = plVar3;
  FUN_00d242c0(uVar41,0);
  lVar16 = *arg1;
  pvVar14 = _pthread_getspecific((void*)param_1);
  if (pvVar14 != (void *)0x0) {
    lVar16 = *arg1;
    lVar15 = FUN_00e8b990();
    if (lVar15 != 0) {
      lVar16 = *(int64_t *)(lVar16 + 0x20 + (uint64_t)(*(uint *)(lVar15 + 0x154) & 1) * 8);
    }
  }
  plVar3 = *(int64_t **)(lVar16 + 0x38);
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  plVar22 = *(int64_t **)(this_ptr + 0x38);
  pvVar14 = _pthread_getspecific((void*)param_1);
  if (pvVar14 != (void *)0x0) {
    plVar22 = *(int64_t **)(this_ptr + 0x38);
    lVar16 = FUN_00e8b990();
    if (lVar16 != 0) {
      plVar22 = (int64_t *)plVar22[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
    }
  }
  local_298 = (double)(**(code **)(*plVar22 + 0x370))();
  pvVar14 = _pthread_getspecific((void*)param_1);
  plVar22 = plVar3;
  if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
    param_1 = plVar3;
    plVar22 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
  }
  pVar23 = (void*)param_1;
  local_188 = (double)(**(code **)(*plVar22 + 0x370))();
  lVar16 = *arg1;
  pvVar14 = _pthread_getspecific(pVar23);
  if (pvVar14 != (void *)0x0) {
    lVar16 = *arg1;
    lVar15 = FUN_00e8b990();
    if (lVar15 != 0) {
      lVar16 = *(int64_t *)(lVar16 + 0x20 + (uint64_t)(*(uint *)(lVar15 + 0x154) & 1) * 8);
    }
  }
  lVar15 = *(int64_t *)(lVar16 + 0x1a0);
  if (lVar15 == 0) {
    FUN_0132d640();
    lVar15 = *(int64_t *)(lVar16 + 0x1a0);
  }
  if (lVar15 != 0) {
    FUN_00d50b00();
  }
  local_320 = *(double *)(lVar15 + 0x38);
  FUN_00d50b20();
  lVar16 = *(int64_t *)(this_ptr + 0x1a0);
  if (lVar16 == 0) {
    FUN_0132d640();
    lVar16 = *(int64_t *)(this_ptr + 0x1a0);
  }
  if (lVar16 != 0) {
    FUN_00d50b00();
  }
  dVar2 = *(double *)(lVar16 + 0x38);
  FUN_00d50b20();
  lVar16 = *arg1;
  pvVar14 = _pthread_getspecific(pVar23);
  if (pvVar14 != (void *)0x0) {
    lVar16 = *arg1;
    lVar15 = FUN_00e8b990();
    if (lVar15 != 0) {
      lVar16 = *(int64_t *)(lVar16 + 0x20 + (uint64_t)(*(uint *)(lVar15 + 0x154) & 1) * 8);
    }
  }
  local_ec = 5;
  if ((*(int64_t *)(lVar16 + 0x1f8) == 0) && (local_ec = 6, *(int64_t *)(lVar16 + 0x200) == 0)) {
    if (*(int64_t *)(lVar16 + 0x148) == 0) {
      local_ec = 0;
    }
    else {
      pvVar14 = _pthread_getspecific(pVar23);
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_ec = FUN_0141bab0();
    }
  }
  plVar22 = *(int64_t **)(this_ptr + 0x38);
  pvVar14 = _pthread_getspecific(pVar23);
  if (pvVar14 != (void *)0x0) {
    plVar22 = *(int64_t **)(this_ptr + 0x38);
    lVar16 = FUN_00e8b990();
    if (lVar16 != 0) {
      plVar22 = (int64_t *)plVar22[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
    }
  }
  local_300 = (double)(**(code **)(*plVar22 + 0x398))();
  local_1b0 = *(void*)(*param_2 + 0x18);
  local_2b0 = (double)FUN_015c70e0(local_188);
  plVar22 = local_180;
  GNFastFourierTransformer_create();
  plVar6 = local_48;
  if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c8e690();
  plVar20 = local_48;
  if (((local_40 == '\0') && (local_48 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_1a0 = plVar20;
  FUN_00c8e690();
  plVar20 = local_48;
  if (((local_40 == '\0') && (local_48 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_1a8 = plVar20;
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
  puVar18 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  local_2f8 = &g_02572358;
  *puVar18 = &g_02572358;
  local_2f0 = g_02572370;
  (*g_02572370)();
  local_198 = (uint64_t)*(uint *)((int64_t)plVar22 + 0xc);
  local_170 = puVar18;
  if (0 < (int)*(uint *)((int64_t)plVar22 + 0xc)) {
    local_2a0 = g_0238fee8 / dVar2;
    local_1ac = (float)((local_188 / local_2b0) * g_023942d0);
    fVar39 = (float)local_188;
    local_2e8 = ZEXT416((uint)fVar39);
    local_310 = g_025e74b8;
    bVar37 = false;
    local_318 = &g_025e74a0;
    local_2a8 = local_198;
    do {
      pVar23 = (int)local_198 - 1;
      local_198 = (uint64_t)pVar23;
      lVar16 = *(int64_t *)(plVar22[2] + local_198 * 8);
      if (lVar16 != 0) {
        FUN_00d50b00();
      }
      local_e0 = lVar16;
      pvVar14 = _pthread_getspecific(pVar23);
      if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
        pVar23 = (void*)local_e0;
      }
      FUN_013de560();
      local_50 = local_48;
      if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar14 = _pthread_getspecific(pVar23);
      if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
        pVar23 = (void*)local_50;
      }
      cVar10 = FUN_014bc070();
      bVar4 = true;
      if (cVar10 == '\0') {
        pvVar14 = _pthread_getspecific(pVar23);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar23 = (void*)local_e0;
        }
        FUN_013dfdd0();
        plVar22 = local_48;
        if (local_48 == (int64_t *)0x0) {
          local_190 = 0;
          local_138 = (int64_t *)0x0;
          local_178 = 0;
          local_c8 = (int64_t *)0x0;
        }
        else {
          if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) &&
             (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar14 = _pthread_getspecific(pVar23);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dd6a0();
          local_c8 = local_48;
          plVar20 = local_48;
          if (local_48 == (int64_t *)0x0) {
            local_c8 = (int64_t *)0x0;
            uVar41 = 0;
            local_178 = 0;
          }
          else if (local_40 == '\0') {
            uVar41 = FUN_00d50b00();
            uVar41 = CONCAT71((int7)((uint64_t)uVar41 >> 8),1);
            local_178 = uVar41;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              uVar41 = FUN_00d50b20();
            }
          }
          else {
            local_40 = '\0';
            uVar41 = CONCAT71((int7)((uint64_t)local_48 >> 8),1);
            local_178 = uVar41;
          }
          pVar23 = (void*)plVar20;
          local_190 = CONCAT71((int7)((uint64_t)uVar41 >> 8),1);
          local_138 = plVar22;
        }
        pvVar14 = _pthread_getspecific(pVar23);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar23 = (void*)local_50;
        }
        local_98 = (double)FUN_014bb3e0();
        uStack_90 = extraout_XMM0_Qb;
        pvVar14 = _pthread_getspecific(pVar23);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar23 = (void*)local_50;
        }
        local_d8._0_8_ = FUN_014bb310();
        local_d8._8_8_ = extraout_XMM0_Qb_00;
        uVar11 = FUN_00e7d850(local_2a0 * local_98);
        local_38 = (int64_t *)CONCAT44(local_38._4_4_,uVar11);
        uVar38 = -(uint64_t)(local_300 < (double)local_d8._0_8_ + local_98);
        auVar52._0_8_ = (uint64_t)(local_300 - local_98) & uVar38;
        auVar52._8_8_ = 0;
        auVar58._0_8_ = ~uVar38 & local_d8._0_8_;
        auVar58._8_8_ = local_d8._8_8_;
        dVar59 = SUB168(auVar58 | auVar52,0);
        uVar11 = FUN_00e7d850((local_98 + dVar59) * local_2a0);
        local_58 = CONCAT44(local_58._4_4_,uVar11);
        pvVar14 = _pthread_getspecific(pVar23);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc090();
        plVar20 = local_48;
        local_308 = plVar22;
        if ((g_027c01a0 == '\0') && (iVar32 = ___cxa_guard_acquire(), iVar32 != 0)) {
          g_027af248 = FUN_001016a0();
          g_027af230 = "MUSampledFunction";
          g_027af238 = 0x58;
          g_027af240 = FUN_00101650;
          g_027af250 = 0;
          ram_00000000027af258 = 0;
          g_027af260 = 0;
          ram_00000000027af268 = 0;
          g_027af270 = 0;
          ram_00000000027af278 = 0;
          g_027af280 = 0;
          ram_00000000027af288 = 0;
          g_027af290 = 0;
          ram_00000000027af298 = 0;
          g_027af2a0 = 0;
          ram_00000000027af2a8 = 0;
          g_027af2b0 = 0;
          ram_00000000027af2b8 = 0;
          g_027af2c0 = 0;
          ram_00000000027af2c8 = 0;
          g_027af2d0 = 0;
          ram_00000000027af2d8 = 0;
          g_027af2e0 = 0;
          ram_00000000027af2e8 = 0;
          g_027af2f0 = 0;
          ___cxa_guard_release();
        }
        pplVar25 = (int64_t **)&g_02802688;
        if (plVar20 != (int64_t *)0x0) {
          (**(code **)(*plVar20 + 0x360))();
          cVar10 = FUN_00e85ea0();
          pplVar25 = &local_48;
          if (cVar10 == '\0') {
            pplVar25 = (int64_t **)&g_02802688;
          }
        }
        local_b8 = (int64_t **)*pplVar25;
        if (*(char *)(pplVar25 + 1) == '\0') {
          if (local_b8 != (int64_t **)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar25 + 1) = 0;
        }
        pVar23 = (void*)pplVar25;
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar14 = _pthread_getspecific(pVar23);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc0d0();
        plVar22 = local_48;
        if ((g_027c01a0 == '\0') && (iVar32 = ___cxa_guard_acquire(), iVar32 != 0)) {
          g_027af248 = FUN_001016a0();
          g_027af230 = "MUSampledFunction";
          g_027af238 = 0x58;
          g_027af240 = FUN_00101650;
          g_027af250 = 0;
          ram_00000000027af258 = 0;
          g_027af260 = 0;
          ram_00000000027af268 = 0;
          g_027af270 = 0;
          ram_00000000027af278 = 0;
          g_027af280 = 0;
          ram_00000000027af288 = 0;
          g_027af290 = 0;
          ram_00000000027af298 = 0;
          g_027af2a0 = 0;
          ram_00000000027af2a8 = 0;
          g_027af2b0 = 0;
          ram_00000000027af2b8 = 0;
          g_027af2c0 = 0;
          ram_00000000027af2c8 = 0;
          g_027af2d0 = 0;
          ram_00000000027af2d8 = 0;
          g_027af2e0 = 0;
          ram_00000000027af2e8 = 0;
          g_027af2f0 = 0;
          ___cxa_guard_release();
        }
        pplVar25 = (int64_t **)&g_02802688;
        if (plVar22 != (int64_t *)0x0) {
          (**(code **)(*plVar22 + 0x360))();
          cVar10 = FUN_00e85ea0();
          pplVar25 = &local_48;
          if (cVar10 == '\0') {
            pplVar25 = (int64_t **)&g_02802688;
          }
        }
        local_b0 = (int64_t **)*pplVar25;
        if (*(char *)(pplVar25 + 1) == '\0') {
          if (local_b0 != (int64_t **)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar25 + 1) = 0;
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != (int64_t **)0x0) && (local_b0 != (int64_t **)0x0)) {
          pvVar14 = _pthread_getspecific((void*)pplVar25);
          iVar32 = (int)local_38;
          pplVar19 = local_b8;
          if ((pvVar14 != (void *)0x0) &&
             (lVar16 = FUN_00e8b990(), pplVar19 = local_b8, lVar16 != 0)) {
            pplVar19 = (int64_t **)local_b8[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
            pplVar25 = local_b8;
          }
          local_68 = pplVar19[10];
          pvVar14 = _pthread_getspecific((void*)pplVar25);
          pplVar19 = local_b0;
          if ((pvVar14 != (void *)0x0) &&
             (lVar16 = FUN_00e8b990(), pplVar19 = local_b0, lVar16 != 0)) {
            pplVar19 = (int64_t **)local_b0[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
            pplVar25 = local_b0;
          }
          plVar22 = pplVar19[10];
          pvVar14 = _pthread_getspecific((void*)pplVar25);
          if ((pvVar14 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
            plVar20 = local_b8[9];
            if (plVar20 == (int64_t *)0x0) goto LAB_0137713c;
LAB_01377151:
            iVar27 = (int)plVar20[3];
            iVar24 = iVar27 + 3;
            if (-1 < iVar27) {
              iVar24 = iVar27;
            }
            dVar29 = (double)(uint64_t)(uint)(iVar24 >> 2);
          }
          else {
            plVar20 = (int64_t *)local_b8[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4][9];
            pplVar25 = local_b8;
            if (plVar20 != (int64_t *)0x0) goto LAB_01377151;
LAB_0137713c:
            dVar29 = 0.0;
          }
          pvVar14 = _pthread_getspecific((void*)pplVar25);
          if ((pvVar14 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
            plVar20 = local_b0[9];
            if (plVar20 == (int64_t *)0x0) goto LAB_013771a5;
LAB_013771bd:
            iVar27 = (int)plVar20[3];
            iVar24 = iVar27 + 3;
            if (-1 < iVar27) {
              iVar24 = iVar27;
            }
            pVar23 = iVar24 >> 2;
            local_78 = (double)(uint64_t)pVar23;
          }
          else {
            plVar20 = (int64_t *)local_b0[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4][9];
            pplVar25 = local_b0;
            if (plVar20 != (int64_t *)0x0) goto LAB_013771bd;
LAB_013771a5:
            pVar23 = (void*)pplVar25;
            local_78 = 0.0;
          }
          pvVar14 = _pthread_getspecific(pVar23);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            pVar23 = (void*)local_b8;
          }
          FUN_013eb920();
          plVar20 = local_48;
          if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) &&
              (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar14 = _pthread_getspecific(pVar23);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013eb920();
          plVar7 = local_48;
          if (((local_40 == '\0') && (local_48 != (int64_t *)0x0)) &&
             ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (int64_t *)0x0)))) {
            FUN_00d50b20();
          }
          FUN_00c8e690();
          plVar8 = local_48;
          if (((local_40 == '\0') && (local_48 != (int64_t *)0x0)) &&
             ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (int64_t *)0x0)))) {
            FUN_00d50b20();
          }
          FUN_00c92170();
          FUN_00c92160();
          local_f0 = -1;
          iVar27 = SUB84(local_78,0);
          iVar35 = iVar27 + -1;
          iVar13 = (int)local_58;
          iVar24 = local_f0;
          if (iVar32 < (int)local_58) {
            iVar28 = iVar32;
            do {
              iVar24 = (int)(((double)iVar28 * dVar2 - local_98) * (double)plVar22);
              if (iVar24 < 0) {
                iVar24 = 0;
                if (0 < iVar27) goto LAB_0137739e;
LAB_013773c5:
                fVar40 = *(float *)(plVar7[2] + (int64_t)iVar35 * 4);
                iVar24 = iVar35;
              }
              else {
                if (iVar27 <= iVar24) goto LAB_013773c5;
LAB_0137739e:
                fVar40 = *(float *)(plVar7[2] + (int64_t)iVar24 * 4);
              }
            } while ((fVar40 < g_023b4df0) &&
                    (iVar28 = iVar28 + 1, iVar24 = local_f0, (int)local_58 != iVar28));
          }
          do {
            local_f0 = iVar24;
            iVar24 = local_f0;
            if (iVar13 <= iVar32) goto LAB_01377461;
            iVar28 = (int)(((double)(iVar13 + -1) * dVar2 - local_98) * (double)plVar22);
            if (iVar28 < 0) {
              iVar28 = 0;
            }
            if (iVar27 <= iVar28) {
              iVar28 = iVar35;
            }
            iVar13 = iVar13 + -1;
          } while (*(float *)(plVar7[2] + (int64_t)iVar28 * 4) < g_023b4df0);
          if ((local_f0 == -1) || (iVar28 == -1)) {
LAB_01377461:
            local_f0 = 0;
            local_330 = plVar7[2];
            FUN_015b32a0(iVar24,&local_f0);
            iVar28 = local_f0;
          }
          local_e8 = (double)CONCAT44(local_e8._4_4_,iVar35);
          local_d8._0_4_ = (float)(double)plVar22;
          local_a8 = (double)CONCAT44(local_a8._4_4_,(float)(double)local_68);
          uVar11 = FUN_00e7d780(((float)local_f0 / (float)(double)plVar22) * (float)(double)local_68
                               );
          local_80 = (int64_t *)CONCAT44(local_80._4_4_,uVar11);
          uVar12 = FUN_00e7d780(((float)iVar28 / (float)local_d8._0_4_) * (float)local_a8);
          uVar36 = SUB84(dVar29,0);
          local_c0 = dVar29;
          if (0 < (int)uVar36) {
            uVar38 = plVar20[2];
            uVar30 = plVar8[2];
            local_70 = dVar29;
            if ((uVar36 < 4) ||
               ((uVar30 < (int64_t)dVar29 * 4 + uVar38 && (uVar38 < uVar30 + (int64_t)dVar29 * 4))
               )) {
              local_60 = 0.0;
            }
            else {
              local_60 = (double)(uint64_t)(uVar36 & 0xfffffffc);
              dVar29 = 0.0;
              do {
                auVar45._4_4_ = fVar39;
                auVar45._0_4_ = fVar39;
                auVar45._8_4_ = fVar39;
                auVar45._12_4_ = fVar39;
                auVar45 = divps(auVar45,*(uint8_t (*) [16])(uVar38 + (int64_t)dVar29 * 4));
                fStack_a0 = auVar45._8_4_ * _UNK_02394168;
                fStack_9c = auVar45._12_4_ * _UNK_0239416c;
                local_a8 = (double)CONCAT44(auVar45._4_4_ * _UNK_02394164,
                                            auVar45._0_4_ * g_02394160);
                local_d8._0_8_ = _logf();
                local_d8._8_8_ = extraout_XMM0_Qb_01;
                auVar46._0_8_ = _logf();
                auVar46._8_8_ = extraout_XMM0_Qb_02;
                local_d8 = insertps(local_d8,auVar46,0x10);
                auVar5._4_8_ = extraout_XMM0_Qb_02;
                auVar5._0_4_ = local_a8._4_4_;
                auVar47._0_8_ = auVar5._0_8_ << 0x20;
                auVar47._8_4_ = fStack_a0;
                auVar47._12_4_ = fStack_9c;
                auVar48._0_8_ = _logf(auVar47._8_8_);
                auVar48._8_8_ = extraout_XMM0_Qb_03;
                local_d8 = insertps(local_d8,auVar48,0x20);
                auVar49._0_8_ = _logf();
                auVar49._8_8_ = extraout_XMM0_Qb_04;
                auVar45 = insertps(local_d8,auVar49,0x30);
                fVar40 = auVar45._4_4_ * _UNK_02394174;
                fVar56 = auVar45._8_4_ * _UNK_02394178;
                fVar57 = auVar45._12_4_ * _UNK_0239417c;
                pfVar1 = (float *)(uVar30 + (int64_t)dVar29 * 4);
                *pfVar1 = auVar45._0_4_ * g_02394170;
                pfVar1[1] = fVar40;
                pfVar1[2] = fVar56;
                pfVar1[3] = fVar57;
                dVar29 = (double)((int64_t)dVar29 + 4);
              } while (local_60 != dVar29);
              if (local_60 == local_70) goto LAB_01377700;
            }
            dVar29 = local_60;
            if (((uint64_t)local_70 & 1) != 0) {
              auVar42._4_12_ = local_2e8._4_12_;
              auVar42._0_4_ =
                   (local_2e8._0_4_ / *(float *)(uVar38 + (int64_t)local_60 * 4)) * g_02394204;
              fVar40 = (float)_logf(auVar42._0_8_);
              *(float *)(uVar30 + (int64_t)dVar29 * 4) = fVar40 * g_02394208;
              dVar29 = (double)((uint64_t)dVar29 | 1);
            }
            if (~(uint64_t)local_60 + (int64_t)local_70 != 0) {
              do {
                auVar43._4_12_ = local_2e8._4_12_;
                auVar43._0_4_ =
                     (local_2e8._0_4_ / *(float *)(uVar38 + (int64_t)dVar29 * 4)) * g_02394204;
                fVar40 = (float)_logf(auVar43._0_8_);
                *(float *)(uVar30 + (int64_t)dVar29 * 4) = fVar40 * g_02394208;
                auVar44._4_12_ = local_2e8._4_12_;
                auVar44._0_4_ =
                     (local_2e8._0_4_ / *(float *)(uVar38 + 4 + (int64_t)dVar29 * 4)) *
                     g_02394204;
                fVar40 = (float)_logf(auVar44._0_8_);
                *(float *)(uVar30 + 4 + (int64_t)dVar29 * 4) = fVar40 * g_02394208;
                dVar29 = (double)((int64_t)dVar29 + 2);
              } while (local_70 != dVar29);
            }
          }
LAB_01377700:
          if (0 < (int)(uint)local_80) {
            uVar38 = (uint64_t)local_80 & 0xffffffff;
            lVar16 = plVar8[2];
            if (uVar38 - 1 < 3) {
              uVar30 = 0;
            }
            else {
              uVar30 = 0;
              do {
                *(void*)(lVar16 + uVar30 * 4) = *(void*)(lVar16 + uVar38 * 4);
                *(void*)(lVar16 + 4 + uVar30 * 4) = *(void*)(lVar16 + uVar38 * 4);
                *(void*)(lVar16 + 8 + uVar30 * 4) = *(void*)(lVar16 + uVar38 * 4);
                *(void*)(lVar16 + 0xc + uVar30 * 4) = *(void*)(lVar16 + uVar38 * 4);
                uVar30 = uVar30 + 4;
              } while (((uint)local_80 & 0xfffffffc) != uVar30);
            }
            if ((uint64_t)((uint)local_80 & 3) != 0) {
              uVar31 = 0;
              do {
                *(void*)(lVar16 + uVar30 * 4 + uVar31 * 4) =
                     *(void*)(lVar16 + uVar38 * 4);
                uVar31 = uVar31 + 1;
              } while (((uint)local_80 & 3) != uVar31);
            }
          }
          iVar27 = SUB84(local_c0,0);
          iVar32 = (int)local_38;
          if ((int)(uVar12 + 1) < iVar27) {
            lVar15 = (int64_t)(int)uVar12;
            local_328 = plVar8[2];
            lVar16 = (int64_t)(int)(uVar12 + 1);
            for (uVar36 = ~uVar12 + iVar27 & 3; uVar36 != 0; uVar36 = uVar36 - 1) {
              *(void*)(local_328 + lVar16 * 4) = *(void*)(local_328 + lVar15 * 4);
              lVar16 = lVar16 + 1;
            }
            if (2 < (iVar27 - uVar12) - 2) {
              do {
                *(void*)(local_328 + lVar16 * 4) = *(void*)(local_328 + lVar15 * 4);
                *(void*)(local_328 + 4 + lVar16 * 4) =
                     *(void*)(local_328 + lVar15 * 4);
                *(void*)(local_328 + 8 + lVar16 * 4) =
                     *(void*)(local_328 + lVar15 * 4);
                *(void*)(local_328 + 0xc + lVar16 * 4) =
                     *(void*)(local_328 + lVar15 * 4);
                lVar16 = lVar16 + 4;
              } while (iVar27 != (int)lVar16);
            }
          }
          else {
            local_328 = plVar8[2];
          }
          plVar26 = (int64_t *)((int64_t)&MACH_HEADER.magic + 1);
          FUN_015c15b0((float)(dVar2 / (g_0238fee8 / (double)local_68)));
          puVar18 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar18 = local_2f8;
          (*local_2f0)();
          local_d8._0_8_ = puVar18;
          if (iVar32 < (int)local_58) {
            iVar27 = SUB84(local_c0,0);
            do {
              local_a8 = (double)iVar32 * dVar2;
              iVar24 = (int)((local_a8 - local_98) * (double)local_68);
              if (iVar24 < 0) {
                iVar24 = 0;
              }
              if (local_c0._0_4_ <= iVar24) {
                iVar24 = iVar27 + -1;
              }
              iVar13 = FUN_00e7d850(((double)iVar24 / (double)local_68) * (double)plVar22);
              if (local_78._0_4_ <= iVar13) {
                iVar13 = local_e8._0_4_;
              }
              local_70 = (double)CONCAT44(local_70._4_4_,
                                          *(void*)(plVar8[2] + (int64_t)iVar24 * 4));
              plVar26 = (int64_t *)plVar7[2];
              local_60 = (double)CONCAT44(local_60._4_4_,
                                          *(void*)((int64_t)plVar26 + (int64_t)iVar13 * 4))
              ;
              plVar21 = (int64_t *)FUN_00e8fc40();
              FUN_00d4ff40();
              *plVar21 = (int64_t)local_318;
              *(void*)((int64_t)plVar21 + 0xc) = 0;
              *(void*)((int64_t)plVar21 + 0x14) = 0;
              *(void*)((int64_t)plVar21 + 0x1c) = 0;
              *(void*)((int64_t)plVar21 + 0x24) = 0;
              *(void*)((int64_t)plVar21 + 0x2c) = 0;
              plVar21[6] = 0;
              plVar21[7] = 0;
              plVar21[8] = 0;
              plVar21[9] = 0;
              plVar21[10] = 0;
              plVar21[0xb] = 0;
              *(void*)(plVar21 + 0xc) = 0;
              (*local_310)();
              *(int *)((int64_t)plVar21 + 0xc) = iVar32;
              *(void*)((int64_t)plVar21 + 0x14) = local_70._0_4_;
              *(void*)(plVar21 + 2) = local_60._0_4_;
              FUN_00e7d850(local_a8 / local_320);
              pvVar14 = _pthread_getspecific((void*)plVar26);
              if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                plVar26 = local_50;
              }
              FUN_014c36d0();
              plVar9 = local_48;
              if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) &&
                  (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              *(void*)(plVar21 + 3) = *(void*)((int64_t)plVar21 + 0x14);
              *(void*)((int64_t)plVar21 + 0x1c) = *(void*)((int64_t)plVar9 + 0x1c);
              *(void*)((int64_t)plVar21 + 0x24) = *(void*)((int64_t)plVar9 + 0x24);
              *(int *)(plVar21 + 5) = (int)plVar9[5];
              *(int *)(plVar21 + 4) = (int)plVar9[4];
              local_40 = '\0';
              local_48 = plVar21;
              FUN_00d21140();
              if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
              FUN_00d50b20();
              iVar32 = iVar32 + 1;
            } while ((int)local_58 != iVar32);
          }
          plVar22 = (int64_t *)FUN_00e8fc40();
          FUN_010fe5f0();
          (**(code **)(*plVar22 + 0x18))();
          local_38 = plVar22;
          pvVar14 = _pthread_getspecific((void*)plVar26);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar26 = local_38;
          }
          local_280 = local_d8._0_8_;
          local_278 = '\0';
          FUN_014c2990();
          if ((local_278 != '\0') && (local_280 != 0)) {
            FUN_00d50b20();
          }
          bVar4 = true;
          if ((*(int *)((int64_t)local_170 + 0xc) == 0) ||
             (local_88 = *(int64_t **)local_170[2], local_88 == (int64_t *)0x0)) {
            local_88 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            bVar4 = false;
          }
          auVar50._8_8_ = uStack_90 & _UNK_023945b8;
          auVar50._0_8_ =
               (double)((uint64_t)(local_98 * local_298) & g_023945b0 | g_0240d3d8) +
               local_98 * local_298;
          roundsd(auVar50,auVar50,0xb);
          uStack_110 = SUB168(auVar58 | auVar52,8);
          dVar59 = dVar59 * local_298;
          auVar51._8_8_ = uStack_110 & _UNK_023945b8;
          auVar51._0_8_ = (double)((uint64_t)dVar59 & g_023945b0 | g_0240d3d8) + dVar59;
          roundsd(auVar51,auVar51,0xb);
          if (((local_ec != 3) && (!bVar37)) && (local_88 != (int64_t *)0x0)) {
            pvVar14 = _pthread_getspecific((void*)plVar26);
            plVar22 = local_88;
            if ((pvVar14 != (void *)0x0) &&
               (lVar16 = FUN_00e8b990(), plVar22 = local_88, lVar16 != 0)) {
              plVar26 = local_88;
              plVar22 = (int64_t *)local_88[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar22 + 0x380))();
          }
          pvVar14 = _pthread_getspecific((void*)plVar26);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar26 = local_38;
          }
          FUN_014bb250();
          pvVar14 = _pthread_getspecific((void*)plVar26);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar26 = local_38;
          }
          FUN_014bb2b0();
          pvVar14 = _pthread_getspecific((void*)plVar26);
          plVar22 = local_50;
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), plVar22 = local_50, lVar16 != 0)
             ) {
            plVar26 = local_50;
            plVar22 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
          }
          lVar16 = (**(code **)(*plVar22 + 0x398))();
          pvVar14 = _pthread_getspecific((void*)plVar26);
          plVar22 = local_38;
          if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), plVar22 = local_38, lVar15 != 0)
             ) {
            plVar26 = local_38;
            plVar22 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
          }
          lVar15 = (**(code **)(*plVar22 + 0x388))();
          dVar59 = ((double)lVar16 / local_188) * local_298;
          auVar55._0_8_ = (double)((uint64_t)dVar59 & g_023945b0 | g_023945c0) + dVar59;
          auVar55._8_8_ = _UNK_023945c8;
          auVar52 = roundsd(ZEXT816(0),auVar55,0xb);
          if (lVar15 < (int64_t)auVar52._0_8_) {
            pvVar14 = _pthread_getspecific((void*)plVar26);
            plVar22 = local_38;
            if ((pvVar14 != (void *)0x0) &&
               (lVar16 = FUN_00e8b990(), plVar22 = local_38, lVar16 != 0)) {
              plVar26 = local_38;
              plVar22 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar22 + 0x388))();
          }
          pvVar14 = _pthread_getspecific((void*)plVar26);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar26 = local_38;
          }
          FUN_014bcf80();
          pvVar14 = _pthread_getspecific((void*)plVar26);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar26 = local_38;
          }
          FUN_014bfad0();
          pvVar14 = _pthread_getspecific((void*)plVar26);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar26 = local_38;
          }
          FUN_014bc170();
          pvVar14 = _pthread_getspecific((void*)plVar26);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar26 = local_38;
          }
          local_270 = local_50;
          local_268 = '\0';
          dVar59 = (double)FUN_014d6170();
          if ((local_268 != '\0') && (local_270 != (int64_t *)0x0)) {
            dVar59 = (double)FUN_00d50b20();
          }
          if (local_c8 == (int64_t *)0x0) {
LAB_0137814e:
            local_80 = (int64_t *)0x0;
            local_58 = 0;
          }
          else {
            pvVar14 = _pthread_getspecific((void*)plVar26);
            if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              plVar26 = local_c8;
            }
            dVar59 = (double)FUN_014bacf0();
            lVar16 = *(int64_t *)(this_ptr + 0xd0);
            local_78 = dVar59;
            if (*(int *)(lVar16 + 0xc) < 1) goto LAB_0137814e;
            lVar15 = 0;
            local_98 = g_0241b670;
            uVar38 = 0;
            plVar26 = (int64_t *)0x0;
            local_80 = (int64_t *)0x0;
            do {
              pVar23 = (void*)plVar26;
              plVar22 = *(int64_t **)(*(int64_t *)(lVar16 + 0x10) + lVar15 * 8);
              if (plVar22 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              pvVar14 = _pthread_getspecific(pVar23);
              if (pvVar14 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar59 = (double)FUN_014bacf0();
              dVar29 = (double)((uint64_t)(dVar59 - local_78) & g_023908f0);
              dVar59 = local_98;
              plVar26 = local_80;
              uVar30 = uVar38;
              if (dVar29 < local_98) {
                pvVar14 = _pthread_getspecific(pVar23);
                plVar26 = plVar22;
                if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                  plVar26 = (int64_t *)plVar22[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
                }
                lVar16 = (**(code **)(*plVar26 + 0x380))();
                dVar59 = dVar29;
                plVar26 = local_80;
                if (-1 < lVar16) {
                  local_98 = dVar29;
                  if (local_80 == plVar22) {
                    if (((char)uVar38 == '\0') && (local_80 != (int64_t *)0x0)) {
                      local_58 = CONCAT71((int7)((uint64_t)lVar16 >> 8),1);
                      dVar59 = (double)FUN_00d50b00();
                      plVar26 = local_80;
                      uVar30 = local_58;
                    }
                  }
                  else {
                    if (plVar22 != (int64_t *)0x0) {
                      lVar16 = FUN_00d50b00();
                      dVar29 = extraout_XMM0_Qa;
                    }
                    local_58 = CONCAT71((int7)((uint64_t)lVar16 >> 8),1);
                    dVar59 = dVar29;
                    plVar26 = plVar22;
                    uVar30 = local_58;
                    if (((char)uVar38 != '\0') && (local_80 != (int64_t *)0x0)) {
                      local_80 = plVar22;
                      dVar59 = (double)FUN_00d50b20();
                      plVar26 = local_80;
                      uVar30 = local_58;
                    }
                  }
                }
              }
              local_58 = uVar30;
              local_80 = plVar26;
              if (plVar22 != (int64_t *)0x0) {
                dVar59 = (double)FUN_00d50b20();
              }
              lVar15 = lVar15 + 1;
              lVar16 = *(int64_t *)(this_ptr + 0xd0);
              plVar26 = (int64_t *)(int64_t)(int)*(void* *)(lVar16 + 0xc);
              uVar38 = local_58 & 0xffffffff;
            } while (lVar15 < (int64_t)plVar26);
            if (local_80 == (int64_t *)0x0) {
              local_80 = (int64_t *)0x0;
            }
            else {
              pvVar14 = _pthread_getspecific(*(void* *)(lVar16 + 0xc));
              plVar22 = local_80;
              if ((pvVar14 != (void *)0x0) &&
                 (lVar16 = FUN_00e8b990(), plVar22 = local_80, lVar16 != 0)) {
                plVar26 = local_80;
                plVar22 = (int64_t *)local_80[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
              }
              lVar16 = (**(code **)(*plVar22 + 0x380))();
              pvVar14 = _pthread_getspecific((void*)plVar26);
              plVar22 = local_38;
              if ((pvVar14 != (void *)0x0) &&
                 (lVar15 = FUN_00e8b990(), plVar22 = local_38, lVar15 != 0)) {
                plVar26 = local_38;
                plVar22 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
              }
              lVar15 = (**(code **)(*plVar22 + 0x380))();
              dVar59 = extraout_XMM0_Qa_00;
              if (lVar16 < lVar15) {
                pvVar14 = _pthread_getspecific((void*)plVar26);
                plVar22 = local_38;
                if ((pvVar14 != (void *)0x0) &&
                   (lVar16 = FUN_00e8b990(), plVar22 = local_38, lVar16 != 0)) {
                  plVar26 = local_38;
                  plVar22 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
                }
                (**(code **)(*plVar22 + 0x380))();
                pvVar14 = _pthread_getspecific((void*)plVar26);
                plVar22 = local_80;
                if ((pvVar14 != (void *)0x0) &&
                   (lVar16 = FUN_00e8b990(), plVar22 = local_80, lVar16 != 0)) {
                  plVar26 = local_80;
                  plVar22 = (int64_t *)local_80[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
                }
                (**(code **)(*plVar22 + 0x380))();
                pvVar14 = _pthread_getspecific((void*)plVar26);
                if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                  plVar26 = local_38;
                }
                pvVar14 = _pthread_getspecific((void*)plVar26);
                plVar22 = local_38;
                if ((pvVar14 != (void *)0x0) &&
                   (lVar16 = FUN_00e8b990(), plVar22 = local_38, lVar16 != 0)) {
                  plVar26 = local_38;
                  plVar22 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
                }
                (**(code **)(*plVar22 + 0x380))();
                FUN_014bb250();
                pvVar14 = _pthread_getspecific((void*)plVar26);
                if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                  plVar26 = local_38;
                }
                pvVar14 = _pthread_getspecific((void*)plVar26);
                plVar22 = local_38;
                if ((pvVar14 != (void *)0x0) &&
                   (lVar16 = FUN_00e8b990(), plVar22 = local_38, lVar16 != 0)) {
                  plVar26 = local_38;
                  plVar22 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
                }
                (**(code **)(*plVar22 + 0x388))();
                FUN_014bb2b0();
                pvVar14 = _pthread_getspecific((void*)plVar26);
                if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                  plVar26 = local_38;
                }
                pvVar14 = _pthread_getspecific((void*)plVar26);
                plVar22 = local_38;
                if ((pvVar14 != (void *)0x0) &&
                   (lVar16 = FUN_00e8b990(), plVar22 = local_38, lVar16 != 0)) {
                  plVar26 = local_38;
                  plVar22 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
                }
                (**(code **)(*plVar22 + 0x398))();
                FUN_014bcf80();
                pvVar14 = _pthread_getspecific((void*)plVar26);
                if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                  plVar26 = local_38;
                }
                dVar59 = (double)FUN_014bfad0();
              }
            }
          }
          pVar23 = (void*)plVar26;
          if (local_88 != (int64_t *)0x0) {
            pvVar14 = _pthread_getspecific(pVar23);
            if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              plVar26 = local_50;
            }
            dVar59 = (double)FUN_014bc420();
            pVar23 = (void*)plVar26;
            if (local_48 == (int64_t *)0x0) {
              bVar37 = false;
            }
            else {
              pvVar14 = _pthread_getspecific(pVar23);
              if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                plVar26 = local_50;
              }
              FUN_014bc420();
              pvVar14 = _pthread_getspecific((void*)plVar26);
              if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                plVar26 = local_88;
              }
              dVar59 = (double)FUN_014d6130();
              pVar23 = (void*)plVar26;
              if (local_2d0 == local_2c0) {
                pvVar14 = _pthread_getspecific(pVar23);
                if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                  plVar26 = local_38;
                }
                lVar16 = FUN_014bb590();
                pvVar14 = _pthread_getspecific((void*)plVar26);
                plVar22 = local_88;
                if ((pvVar14 != (void *)0x0) &&
                   (lVar15 = FUN_00e8b990(), plVar22 = local_88, lVar15 != 0)) {
                  plVar26 = local_88;
                  plVar22 = (int64_t *)local_88[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
                }
                pVar23 = (void*)plVar26;
                lVar15 = (**(code **)(*plVar22 + 0x380))();
                bVar37 = lVar16 == lVar15;
                dVar59 = extraout_XMM0_Qa_01;
              }
              else {
                bVar37 = false;
              }
              if ((local_2b8 != '\0') && (local_2c0 != 0)) {
                dVar59 = (double)FUN_00d50b20();
              }
              if ((local_2c8 != '\0') && (local_2d0 != 0)) {
                dVar59 = (double)FUN_00d50b20();
              }
            }
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              dVar59 = (double)FUN_00d50b20();
            }
            if (bVar37) {
              pvVar14 = _pthread_getspecific(pVar23);
              if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                pVar23 = (void*)local_38;
              }
              local_260 = local_88;
              local_258 = '\0';
              FUN_014bc360();
              if ((local_258 != '\0') && (local_260 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              pvVar14 = _pthread_getspecific(pVar23);
              if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                pVar23 = (void*)local_88;
              }
              local_250 = local_38;
              local_248 = '\0';
              dVar59 = (double)FUN_014bc2e0();
              if ((local_248 != '\0') && (local_250 != (int64_t *)0x0)) {
                dVar59 = (double)FUN_00d50b20();
              }
            }
          }
          local_48 = local_38;
          local_40 = '\0';
          FUN_00d23370(dVar59,0);
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar14 = _pthread_getspecific(pVar23);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc3d0();
          local_390 = local_38;
          local_388 = 0;
          local_380 = 0;
          local_378 = 0;
          local_240 = 0;
          local_238 = '\0';
          local_230 = 0;
          local_228 = '\0';
          pVar23 = 0;
          uVar41 = MUAudioSourceDescription__activateItem(0,&local_390,&local_380,&local_240);
          plVar22 = local_48;
          if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
            uVar41 = FUN_00d50b00();
          }
          if ((local_228 != '\0') && (local_230 != 0)) {
            uVar41 = FUN_00d50b20();
          }
          if ((local_238 != '\0') && (local_240 != 0)) {
            uVar41 = FUN_00d50b20();
          }
          if (plVar22 != (int64_t *)0x0) {
            if (local_80 != (int64_t *)0x0) {
              local_370 = local_80;
              local_368 = 0;
              local_360 = plVar22;
              local_358 = 0;
              FUN_01346520(uVar41,0);
            }
            local_350 = plVar22;
            local_348 = 0;
            FUN_0134aea0();
          }
          if (*(int *)(local_d8._0_8_ + 0xc) != 0) {
            local_98 = (double)*(int *)(**(int64_t **)(local_d8._0_8_ + 0x10) + 0xc);
            plVar26 = (int64_t *)FUN_00e8fc40();
            FUN_0110cb20();
            (**(code **)(*plVar26 + 0x18))();
            pvVar14 = _pthread_getspecific(pVar23);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_018c2f50(local_98 * dVar2);
            pvVar14 = _pthread_getspecific(pVar23);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_018c2fc0(dVar2);
            pvVar14 = _pthread_getspecific(pVar23);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_218 = '\0';
            local_220 = plVar26;
            FUN_014cc810();
            if ((local_218 != '\0') && (local_220 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (0 < *(int *)(local_d8._0_8_ + 0xc)) {
              lVar16 = 0;
              local_c0 = 0.0;
              local_68 = (int64_t *)((uint64_t)local_68 & 0xffffffff00000000);
              dVar59 = 0.0;
              dVar29 = 0.0;
              cVar10 = '\0';
              cVar34 = '\0';
              do {
                dVar33 = *(double *)(*(int64_t *)(local_d8._0_8_ + 0x10) + lVar16 * 8);
                if (dVar29 == dVar33) {
                  if ((cVar10 == '\0') && (dVar29 != 0.0)) {
                    local_78 = (double)CONCAT71(local_78._1_7_,1);
                    FUN_00d50b00();
                    local_98 = dVar29;
                    goto LAB_013788e0;
                  }
                  local_78 = (double)CONCAT71(local_78._1_7_,cVar10);
                  local_98 = dVar29;
                  if (lVar16 == 0) goto LAB_013789c0;
LAB_013788f0:
                  dVar29 = local_c0;
                  dVar33 = *(double *)(*(int64_t *)(local_d8._0_8_ + 0x10) + -8 + lVar16 * 8);
                  if (dVar59 == dVar33) {
                    if (((char)local_68 == '\0') && (dVar59 != 0.0)) {
                      local_70 = (double)CONCAT71(local_70._1_7_,1);
                      local_68 = (int64_t *)((uint64_t)local_68 & 0xffffffff00000000);
                      FUN_00d50b00();
                      local_a8 = dVar59;
                    }
                    else {
LAB_01378a90:
                      local_70 = (double)CONCAT71(local_70._1_7_,(char)local_68);
                      dVar29 = local_c0;
                      local_a8 = dVar59;
                    }
                  }
                  else {
                    local_a8 = dVar33;
                    if (dVar33 != 0.0) {
                      FUN_00d50b00();
                    }
                    local_70 = (double)CONCAT71(local_70._1_7_,1);
                    if (((char)local_68 != '\0') && (dVar59 != 0.0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  local_98 = dVar33;
                  if (dVar33 != 0.0) {
                    FUN_00d50b00();
                  }
                  local_78 = (double)CONCAT71(local_78._1_7_,1);
                  if ((cVar10 != '\0') && (dVar29 != 0.0)) {
                    FUN_00d50b20();
                  }
LAB_013788e0:
                  if (lVar16 != 0) goto LAB_013788f0;
LAB_013789c0:
                  dVar29 = local_c0;
                  if (dVar59 == local_98) {
                    if (((local_78._0_1_ != '\0') && ((char)local_68 == '\0')) && (dVar59 != 0.0)) {
                      local_70 = (double)CONCAT71(local_70._1_7_,1);
                      local_68 = (int64_t *)((uint64_t)local_68 & 0xffffffff00000000);
                      FUN_00d50b00();
                      local_a8 = dVar59;
                      goto LAB_01378a9d;
                    }
                    goto LAB_01378a90;
                  }
                  if ((local_78._0_1_ != '\0') && (local_98 != 0.0)) {
                    FUN_00d50b00();
                  }
                  dVar33 = local_98;
                  local_a8 = local_98;
                  local_70 = (double)CONCAT71(local_70._1_7_,local_78._0_1_);
                  if ((char)local_68 != '\0') {
                    local_a8 = local_98;
                    local_70 = (double)CONCAT71(local_70._1_7_,local_78._0_1_);
                    if (dVar59 != 0.0) {
                      FUN_00d50b20();
                      local_a8 = dVar33;
                      local_70 = (double)CONCAT71(local_70._1_7_,local_78._0_1_);
                    }
                  }
                }
LAB_01378a9d:
                if (lVar16 < (int64_t)*(int *)(local_d8._0_8_ + 0xc) + -1) {
                  dVar33 = *(double *)(*(int64_t *)(local_d8._0_8_ + 0x10) + 8 + lVar16 * 8);
                  if (dVar29 == dVar33) {
                    if ((cVar34 == '\0') && (dVar29 != 0.0)) {
                      local_60 = (double)CONCAT71(local_60._1_7_,1);
                      FUN_00d50b00();
                      dVar33 = dVar29;
                    }
                    else {
LAB_01378bf0:
                      local_60 = (double)CONCAT71(local_60._1_7_,cVar34);
                      dVar33 = dVar29;
                    }
                  }
                  else {
                    if (dVar33 != 0.0) {
                      FUN_00d50b00();
                    }
                    if ((cVar34 == '\0') ||
                       (local_60 = (double)CONCAT71(local_60._1_7_,1), dVar29 == 0.0)) {
                      local_60 = (double)CONCAT71(local_60._1_7_,1);
                    }
                    else {
                      FUN_00d50b20();
                    }
                  }
                }
                else if (dVar29 == local_98) {
                  if (((local_78._0_1_ == '\0') || (cVar34 != '\0')) || (dVar29 == 0.0))
                  goto LAB_01378bf0;
                  local_60 = (double)CONCAT71(local_60._1_7_,1);
                  local_68 = (int64_t *)CONCAT44(local_68._4_4_,(uint)local_70._0_1_);
                  FUN_00d50b00();
                  dVar33 = dVar29;
                }
                else {
                  if ((local_78._0_1_ != '\0') && (local_98 != 0.0)) {
                    local_68 = (int64_t *)CONCAT44(local_68._4_4_,(uint)local_70._0_1_);
                    FUN_00d50b00();
                  }
                  dVar33 = local_98;
                  local_60 = (double)CONCAT71(local_60._1_7_,local_78._0_1_);
                  if ((cVar34 != '\0') &&
                     (local_60 = (double)CONCAT71(local_60._1_7_,local_78._0_1_), dVar29 != 0.0)) {
                    local_68 = (int64_t *)CONCAT44(local_68._4_4_,(uint)local_70._0_1_);
                    FUN_00d50b20();
                    local_60 = (double)CONCAT71(local_60._1_7_,local_78._0_1_);
                  }
                }
                dVar59 = local_a8;
                local_68 = (int64_t *)(double)*(int *)((int64_t)local_98 + 0xc);
                local_e8 = dVar33;
                auVar53._0_8_ =
                     _exp2f((*(float *)((int64_t)dVar33 + 0x14) * g_0239426c +
                            *(float *)((int64_t)local_a8 + 0x14) * g_0239426c +
                            *(float *)((int64_t)local_98 + 0x14) * g_0239011c) * g_023941f4);
                auVar53._8_8_ = extraout_XMM0_Qb_05;
                auVar54._4_12_ = auVar53._4_12_;
                auVar54._0_4_ = (float)auVar53._0_8_ * g_023941f8;
                local_c0 = (double)CONCAT44(local_c0._4_4_,auVar54._0_4_);
                FUN_00c8e690(auVar54._0_8_,local_1ac / auVar54._0_4_);
                plVar21 = local_48;
                if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) &&
                    (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00c92170();
                FUN_00c92160();
                local_68 = (int64_t *)((double)local_68 * dVar2);
                ___bzero();
                local_210 = plVar21;
                local_208 = '\0';
                local_1f8 = '\0';
                local_1f0 = plVar6;
                local_1e8 = '\0';
                local_1e0 = local_1a0;
                local_1d8 = '\0';
                local_1d0 = local_1a8;
                local_1c8 = '\0';
                pVar23 = 0x1000;
                local_200 = plVar3;
                FUN_016450a0(local_68,&local_1f0,local_2b0,&local_1d0);
                if ((local_1c8 != '\0') && (local_1d0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_1d8 != '\0') && (local_1e0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_1e8 != '\0') && (local_1f0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_1f8 != '\0') && (local_200 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_208 != '\0') && (local_210 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                (**(code **)(g_02786500 + 0x20))();
                pvVar14 = _pthread_getspecific(pVar23);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_1c0 = plVar21;
                local_1b8 = '\0';
                FUN_018c3020();
                if ((local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
                lVar16 = lVar16 + 1;
                local_c0 = local_e8;
                local_68 = (int64_t *)CONCAT44(local_68._4_4_,(uint)local_70._0_1_);
                dVar29 = local_98;
                cVar10 = local_78._0_1_;
                cVar34 = local_60._0_1_;
              } while (lVar16 < *(int *)(local_d8._0_8_ + 0xc));
              if (local_60._0_1_ != '\0') {
                FUN_00d50b20();
              }
              if (local_70._0_1_ != '\0') {
                FUN_00d50b20();
              }
              if (local_78._0_1_ != '\0') {
                FUN_00d50b20();
              }
              if (plVar26 == (int64_t *)0x0) goto LAB_01378f6e;
            }
            FUN_00d50b20();
          }
LAB_01378f6e:
          if (plVar22 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (((char)local_58 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (!bVar4 && local_88 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (local_38 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (plVar8 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (plVar7 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (plVar20 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          bVar37 = false;
        }
        if (local_b0 != (int64_t **)0x0) {
          FUN_00d50b20();
        }
        if (local_b8 != (int64_t **)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_178 != '\0') && (local_c8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        bVar4 = bVar37;
        if ((local_308 != (int64_t *)0x0) && (local_138 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar37 = bVar4;
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_e0 != 0) {
        FUN_00d50b20();
      }
      uVar38 = local_2a8 - 1;
      bVar4 = 1 < (int64_t)local_2a8;
      plVar22 = local_180;
      local_2a8 = uVar38;
    } while (bVar4);
  }
  puVar18 = local_170;
  local_340 = local_170;
  local_338 = 0;
  FUN_0135d660();
  if (puVar18 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar17 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_1a8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_1a0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar22 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0079f9e0
// ============================================================
// Function: FUN_0079f9e0
// Address: 0079f9e0
// Size: 9493 bytes
// Class: MUSampledFunction
// String references:
//   "MUSampledFunction"
//   "%I %%"
//   ">100 %%"
//   "%I %% - >100 %%"
//   "%I %% - %I %%"

void FUN_0079f9e0(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  int64_t *plVar7;
  uint8_t auVar8 [8];
  byte bVar9;
  char cVar10;
  uint8_t uVar11;
  int64_t *plVar12;
  void *pvVar13;
  void*puVar14;
  int64_t lVar15;
  void* pVar16;
  int iVar17;
  int64_t *plVar18;
  int64_t **pplVar19;
  int iVar20;
  uint64_t uVar21;
  int64_t this_ptr;
  int64_t *plVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  int64_t lVar25;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar26;
  uint32_t uVar27;
  uint64_t uVar28;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  float fVar29;
  float fVar30;
  uint8_t auVar31 [16];
  float fVar32;
  uint8_t auVar33 [16];
  float fVar34;
  uint8_t auVar35 [16];
  float fVar37;
  uint8_t auVar36 [16];
  int64_t *local_248;
  char local_240;
  int64_t *local_238;
  char local_230;
  int64_t *local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t *local_1d8;
  char local_1d0;
  int64_t *local_1c8;
  char local_1c0;
  uint8_t local_1b8 [8];
  float fStack_1b0;
  float fStack_1ac;
  int64_t *local_1a0;
  char local_198;
  int64_t *local_190;
  char local_188;
  int64_t *local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  uint64_t local_128;
  uint32_t uStack_120;
  uint32_t uStack_11c;
  int64_t *local_110;
  int64_t local_108;
  char local_100;
  uint8_t local_f8 [16];
  void*local_e8;
  uint64_t local_e0;
  uint8_t local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  int64_t *local_c0;
  double local_b8;
  int64_t local_b0;
  float local_a8;
  float local_a4;
  int64_t *local_a0;
  uint64_t local_98;
  uint64_t uStack_90;
  uint8_t local_88 [16];
  uint64_t local_78;
  int64_t *local_70;
  uint64_t local_68;
  int64_t *local_60;
  uint local_58;
  uint32_t local_54;
  int64_t *local_50;
  uint local_48;
  uint32_t local_44;
  uint32_t local_40;
  
  *(void*)(this_ptr + 0xa8) = 0;
  (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x928))(0);
  plVar12 = *(int64_t **)(this_ptr + 0x98);
  local_54 = FUN_00e7d780(*(float *)(this_ptr + 0xa8) * g_023908e0);
  local_58 = 1;
  local_60 = &g_024cc6f0;
  FUN_00d8cb40(extraout_XMM0_Da,&local_60);
  local_1a0 = local_50;
  local_198 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_198 = '\x01';
  (**(code **)(*plVar12 + 0x968))();
  if ((local_198 != '\0') && (local_1a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x928))
            (g_02390124 - *(float *)(this_ptr + 0xac));
  plVar12 = *(int64_t **)(this_ptr + 0xa0);
  local_54 = FUN_00e7d780(*(float *)(this_ptr + 0xac) * g_023908e0);
  local_58 = 1;
  local_60 = &g_024cc6f0;
  FUN_00d8cb40(extraout_XMM0_Da_00,&local_60);
  local_190 = local_50;
  local_188 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_188 = '\x01';
  (**(code **)(*plVar12 + 0x968))();
  if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x998))();
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x998))();
  (**(code **)(**(int64_t **)(this_ptr + 0xb0) + 0x998))();
  if (*(int64_t *)(this_ptr + 0xb8) != 0) {
    *(void*)(this_ptr + 0xb8) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0xc0) != 0) {
    *(void*)(this_ptr + 0xc0) = 0;
    FUN_00d50b20();
  }
  FUN_00364b20();
  local_a0 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar20 = *(int *)((int64_t)local_a0 + 0xc);
  }
  else {
    if (local_50 == (int64_t *)0x0) {
      return;
    }
    iVar20 = *(int *)((int64_t)local_50 + 0xc);
  }
  if (iVar20 < 2) goto LAB_007a1f52;
  local_68._4_4_ = (uint)((uint64_t)local_68 >> 0x20);
  local_78._4_4_ = (uint)((uint64_t)local_78 >> 0x20);
  plVar12 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar12 + 0x18))();
  lVar25 = *(int64_t *)(this_ptr + 0xb8);
  *(int64_t **)(this_ptr + 0xb8) = plVar12;
  if (lVar25 != 0) {
    FUN_00d50b20();
  }
  plVar12 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar12 + 0x18))();
  lVar25 = *(int64_t *)(this_ptr + 0xc0);
  *(int64_t **)(this_ptr + 0xc0) = plVar12;
  if (lVar25 != 0) {
    FUN_00d50b20();
  }
  plVar12 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar12 + 0x18))();
  local_110 = plVar12;
  plVar12 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar12 + 0x18))();
  local_c0 = plVar12;
  plVar12 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar12 + 0x18))();
  local_130 = plVar12;
  if (*(int *)((int64_t)local_a0 + 0xc) < 1) {
    local_68 = (int64_t *)((uint64_t)local_68._4_4_ << 0x20);
    local_78 = (int64_t *)((uint64_t)local_78._4_4_ << 0x20);
  }
  else {
    lVar25 = 0;
    local_78 = (int64_t *)((uint64_t)local_78._4_4_ << 0x20);
    local_68 = (int64_t *)((uint64_t)local_68._4_4_ << 0x20);
    do {
      lVar15 = *(int64_t *)(local_a0[2] + lVar25 * 8);
      plVar12 = local_a0;
      if (lVar15 != 0) {
        FUN_00d50b00();
      }
      pVar16 = (void*)plVar12;
      pvVar13 = _pthread_getspecific(pVar16);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      plVar12 = local_50;
      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar12 != (int64_t *)0x0) {
        pvVar13 = _pthread_getspecific(pVar16);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        pvVar13 = _pthread_getspecific(pVar16);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0134a500();
        plVar12 = local_50;
        if ((char)local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
            if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_48 = local_48 & 0xffffff00;
        }
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar13 = _pthread_getspecific(pVar16);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        bVar9 = FUN_0141bac0();
        local_78 = (int64_t *)CONCAT44(local_78._4_4_,(int)local_78 + (uint)bVar9);
        local_68 = (int64_t *)CONCAT44(local_68._4_4_,(int)(float)local_68 + 1);
        if (plVar12 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if (lVar15 != 0) {
        FUN_00d50b20();
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 < *(int *)((int64_t)local_a0 + 0xc));
  }
  puVar14 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar14 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  local_e8 = puVar14;
  if (*(int *)((int64_t)local_a0 + 0xc) < 1) {
LAB_007a0f4a:
    plVar18 = local_c0;
    plVar12 = local_110;
    if (*(int64_t *)(this_ptr + 0xb8) != 0) {
      *(void*)(this_ptr + 0xb8) = 0;
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0xc0) != 0) {
      *(void*)(this_ptr + 0xc0) = 0;
      FUN_00d50b20();
    }
  }
  else {
    local_98 = CONCAT44(local_98._4_4_,(int)(float)local_68 / 2);
    lVar25 = 0;
    _local_d8 = ZEXT416((uint)g_02394274);
    do {
      plVar12 = *(int64_t **)(local_a0[2] + lVar25 * 8);
      plVar18 = local_a0;
      if (plVar12 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pVar16 = (void*)plVar18;
      pvVar13 = _pthread_getspecific(pVar16);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      pvVar13 = _pthread_getspecific(pVar16);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      pvVar13 = _pthread_getspecific(pVar16);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd6a0();
      plVar18 = local_50;
      if ((char)local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
          if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_48 = local_48 & 0xffffff00;
      }
      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      pvVar13 = _pthread_getspecific(pVar16);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar10 = FUN_014bc070();
      if (cVar10 == '\0') {
        pvVar13 = _pthread_getspecific(pVar16);
        plVar22 = plVar18;
        if ((pvVar13 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          plVar22 = (int64_t *)plVar18[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
        }
        cVar10 = (**(code **)(*plVar22 + 0x3c0))();
        if (cVar10 == '\0') {
          pvVar13 = _pthread_getspecific(pVar16);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc240();
          plVar22 = local_50;
          if ((g_027c01a0 == '\0') && (iVar20 = ___cxa_guard_acquire(), iVar20 != 0)) {
            g_027af248 = FUN_001016a0();
            g_027af230 = "MUSampledFunction";
            g_027af238 = 0x58;
            g_027af240 = FUN_00101650;
            g_027af250 = 0;
            ram_00000000027af258 = 0;
            g_027af260 = 0;
            ram_00000000027af268 = 0;
            g_027af270 = 0;
            ram_00000000027af278 = 0;
            g_027af280 = 0;
            ram_00000000027af288 = 0;
            g_027af290 = 0;
            ram_00000000027af298 = 0;
            g_027af2a0 = 0;
            ram_00000000027af2a8 = 0;
            g_027af2b0 = 0;
            ram_00000000027af2b8 = 0;
            g_027af2c0 = 0;
            ram_00000000027af2c8 = 0;
            g_027af2d0 = 0;
            ram_00000000027af2d8 = 0;
            g_027af2e0 = 0;
            ram_00000000027af2e8 = 0;
            g_027af2f0 = 0;
            ___cxa_guard_release();
          }
          pplVar19 = (int64_t **)&g_02802688;
          if (plVar22 != (int64_t *)0x0) {
            (**(code **)(*plVar22 + 0x360))();
            cVar10 = FUN_00e85ea0();
            pplVar19 = &local_50;
            if (cVar10 == '\0') {
              pplVar19 = (int64_t **)&g_02802688;
            }
          }
          plVar22 = *pplVar19;
          if (*(char *)(pplVar19 + 1) == '\0') {
            if (plVar22 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(pplVar19 + 1) = 0;
          }
          pVar16 = (void*)pplVar19;
          if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar13 = _pthread_getspecific(pVar16);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc0d0();
          plVar7 = local_50;
          if ((g_027c01a0 == '\0') && (iVar20 = ___cxa_guard_acquire(), iVar20 != 0)) {
            g_027af248 = FUN_001016a0();
            g_027af230 = "MUSampledFunction";
            g_027af238 = 0x58;
            g_027af240 = FUN_00101650;
            g_027af250 = 0;
            ram_00000000027af258 = 0;
            g_027af260 = 0;
            ram_00000000027af268 = 0;
            g_027af270 = 0;
            ram_00000000027af278 = 0;
            g_027af280 = 0;
            ram_00000000027af288 = 0;
            g_027af290 = 0;
            ram_00000000027af298 = 0;
            g_027af2a0 = 0;
            ram_00000000027af2a8 = 0;
            g_027af2b0 = 0;
            ram_00000000027af2b8 = 0;
            g_027af2c0 = 0;
            ram_00000000027af2c8 = 0;
            g_027af2d0 = 0;
            ram_00000000027af2d8 = 0;
            g_027af2e0 = 0;
            ram_00000000027af2e8 = 0;
            g_027af2f0 = 0;
            ___cxa_guard_release();
          }
          pplVar19 = (int64_t **)&g_02802688;
          if (plVar7 != (int64_t *)0x0) {
            (**(code **)(*plVar7 + 0x360))();
            cVar10 = FUN_00e85ea0();
            pplVar19 = &local_50;
            if (cVar10 == '\0') {
              pplVar19 = (int64_t **)&g_02802688;
            }
          }
          local_68 = *pplVar19;
          if (*(char *)(pplVar19 + 1) == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(pplVar19 + 1) = 0;
          }
          pVar16 = (void*)pplVar19;
          if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((plVar22 != (int64_t *)0x0) && (local_68 != (int64_t *)0x0)) {
            pvVar13 = _pthread_getspecific(pVar16);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013eb920();
            plVar7 = local_50;
            if (((char)local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b00();
              if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            local_128 = plVar7;
            pvVar13 = _pthread_getspecific(pVar16);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013eb920();
            local_70 = local_50;
            if (((char)local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b00();
              if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            uVar1 = *(uint *)(plVar7 + 3);
            uVar6 = uVar1;
            if ((int)uVar1 < 0) {
              uVar6 = uVar1 + 3;
            }
            if (uVar1 + 3 < 7) {
LAB_007a04d1:
              if (local_70 != (int64_t *)0x0) goto LAB_007a0573;
            }
            else {
              iVar20 = (int)local_70[3];
              iVar17 = iVar20 + 3;
              if (-1 < iVar20) {
                iVar17 = iVar20;
              }
              local_f8._0_4_ = (int)uVar6 >> 2;
              if (iVar17 >> 2 == (int)uVar6 >> 2) {
                pvVar13 = _pthread_getspecific(iVar17 >> 2);
                plVar7 = local_68;
                if ((pvVar13 != (void *)0x0) &&
                   (lVar15 = FUN_00e8b990(), plVar7 = local_68, lVar15 != 0)) {
                  plVar7 = (int64_t *)local_68[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
                }
                if ((int)uVar1 < 4) {
                  local_d8._4_4_ = (float)local_d8._4_4_ + 0.0;
                  local_d8._0_4_ = (float)local_d8._0_4_ + g_02394274;
                  fStack_d0 = fStack_d0 + 0.0;
                  fStack_cc = fStack_cc + 0.0;
                }
                else {
                  lVar15 = local_128[2];
                  uVar21 = (uint64_t)(uint)local_f8._0_4_;
                  fVar26 = g_02394274;
                  if (uVar21 - 1 < 3) {
                    uVar24 = 0;
                  }
                  else {
                    uVar24 = 0;
                    do {
                      fVar30 = *(float *)(lVar15 + uVar24 * 4);
                      if (fVar30 <= fVar26) {
                        fVar30 = fVar26;
                      }
                      fVar26 = *(float *)(lVar15 + 4 + uVar24 * 4);
                      if (fVar26 <= fVar30) {
                        fVar26 = fVar30;
                      }
                      fVar30 = *(float *)(lVar15 + 8 + uVar24 * 4);
                      if (fVar30 <= fVar26) {
                        fVar30 = fVar26;
                      }
                      fVar26 = *(float *)(lVar15 + 0xc + uVar24 * 4);
                      if (fVar26 <= fVar30) {
                        fVar26 = fVar30;
                      }
                      uVar24 = uVar24 + 4;
                    } while ((local_f8._0_4_ & 0xfffffffc) != uVar24);
                  }
                  if ((uint64_t)(local_f8._0_4_ & 3) != 0) {
                    uVar23 = 0;
                    fVar30 = fVar26;
                    do {
                      fVar26 = *(float *)(lVar15 + uVar24 * 4 + uVar23 * 4);
                      if (fVar26 <= fVar30) {
                        fVar26 = fVar30;
                      }
                      uVar23 = uVar23 + 1;
                      fVar30 = fVar26;
                    } while ((local_f8._0_4_ & 3) != uVar23);
                  }
                  lVar15 = local_128[2];
                  if ((int)(float)local_98 < (int)local_78) {
                    uVar24 = 0;
                    iVar20 = 0;
                    local_1b8._4_4_ = 0.0;
                    fStack_1b0 = 0.0;
                    fStack_1ac = 0.0;
                    local_1b8._0_4_ = g_02394274;
                    do {
                      fVar30 = *(float *)(lVar15 + uVar24 * 4);
                      fVar29 = fVar30 / fVar26;
                      fVar32 = *(float *)(local_70[2] + uVar24 * 4);
                      iVar20 = iVar20 + (uint)(fVar32 < g_023b4df0);
                      fVar34 = g_0239425c;
                      if (g_0239425c <= fVar32) {
                        fVar34 = fVar32;
                      }
                      fVar34 = fVar34 * fVar29 * fVar29;
                      auVar35 = insertps(ZEXT416((uint)fVar34),ZEXT416((uint)(fVar30 * fVar34)),0x10
                                        );
                      local_1b8._0_4_ = (float)local_1b8._0_4_ + auVar35._0_4_;
                      local_1b8._4_4_ = (float)local_1b8._4_4_ + auVar35._4_4_;
                      fStack_1b0 = fStack_1b0 + auVar35._8_4_;
                      fStack_1ac = fStack_1ac + auVar35._12_4_;
                      uVar24 = uVar24 + 1;
                    } while (uVar21 != uVar24);
                  }
                  else {
                    if (uVar21 == 1) {
                      uVar21 = 0;
                      auVar35 = ZEXT416((uint)g_02394274);
                    }
                    else {
                      uVar21 = 0;
                      auVar35 = ZEXT416((uint)g_02394274);
                      do {
                        fVar30 = *(float *)(lVar15 + uVar21 * 4);
                        fVar32 = *(float *)(lVar15 + 4 + uVar21 * 4);
                        fVar34 = fVar30 / fVar26;
                        fVar34 = fVar34 * fVar34;
                        auVar33 = insertps(ZEXT416((uint)fVar34),ZEXT416((uint)(fVar30 * fVar34)),
                                           0x10);
                        fVar34 = auVar35._4_4_;
                        fVar29 = auVar35._8_4_;
                        fVar37 = auVar35._12_4_;
                        fVar30 = fVar32 / fVar26;
                        fVar30 = fVar30 * fVar30;
                        auVar36 = insertps(ZEXT416((uint)fVar30),ZEXT416((uint)(fVar32 * fVar30)),
                                           0x10);
                        auVar35._0_4_ = auVar36._0_4_ + auVar33._0_4_ + auVar35._0_4_;
                        auVar35._4_4_ = auVar36._4_4_ + auVar33._4_4_ + fVar34;
                        auVar35._8_4_ = auVar36._8_4_ + auVar33._8_4_ + fVar29;
                        auVar35._12_4_ = auVar36._12_4_ + auVar33._12_4_ + fVar37;
                        uVar21 = uVar21 + 2;
                      } while ((local_f8._0_4_ & 0xfffffffe) != uVar21);
                    }
                    local_1b8._0_4_ = auVar35._0_4_;
                    local_1b8._4_4_ = auVar35._4_4_;
                    fStack_1b0 = auVar35._8_4_;
                    fStack_1ac = auVar35._12_4_;
                    if ((local_f8._0_4_ & 1) == 0) {
                      iVar20 = 0;
                    }
                    else {
                      iVar20 = 0;
                      fVar30 = *(float *)(lVar15 + uVar21 * 4);
                      fVar26 = fVar30 / fVar26;
                      fVar26 = fVar26 * fVar26;
                      auVar35 = insertps(ZEXT416((uint)fVar26),ZEXT416((uint)(fVar30 * fVar26)),0x10
                                        );
                      local_1b8._0_4_ = (float)local_1b8._0_4_ + auVar35._0_4_;
                      local_1b8._4_4_ = (float)local_1b8._4_4_ + auVar35._4_4_;
                      fStack_1b0 = fStack_1b0 + auVar35._8_4_;
                      fStack_1ac = fStack_1ac + auVar35._12_4_;
                    }
                  }
                  local_d8._4_4_ = (float)local_d8._4_4_ + (float)local_1b8._4_4_;
                  local_d8._0_4_ = (float)local_d8._0_4_ + (float)local_1b8._0_4_;
                  fStack_d0 = fStack_d0 + fStack_1b0;
                  fStack_cc = fStack_cc + fStack_1ac;
                  if (g_02394274 < (float)local_1b8._0_4_) {
                    local_b8 = (double)plVar7[10];
                    local_48 = local_48 & 0xffffff00;
                    pVar16 = local_f8._0_4_;
                    local_50 = plVar12;
                    uVar11 = FUN_00c9ff50();
                    local_88[0] = uVar11;
                    if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (local_88[0] == '\0') {
                      pvVar13 = _pthread_getspecific(pVar16);
                      if (pvVar13 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_0125e930();
                      if (local_50 == (int64_t *)0x0) {
                        auVar33._12_4_ = 0;
                        auVar33._0_12_ = local_88._4_12_;
                        local_88 = auVar33 << 0x20;
                      }
                      else {
                        pvVar13 = _pthread_getspecific(pVar16);
                        if (pvVar13 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_0125e930();
                        local_88._0_8_ = local_60;
                        pvVar13 = _pthread_getspecific(pVar16);
                        if (pvVar13 != (void *)0x0) {
                          local_88._0_8_ = local_60;
                          FUN_00e8b990();
                        }
                        uVar28 = FUN_0152e880();
                        local_88._0_4_ =
                             (int)CONCAT71((int7)((uint64_t)uVar28 >> 8),!NAN(extraout_XMM0_Da_01))
                        ;
                        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (local_88[0] == '\0') {
                        pvVar13 = _pthread_getspecific(pVar16);
                        if (pvVar13 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        uVar27 = FUN_01265b60();
                        local_88._0_4_ = uVar27;
                      }
                      else {
                        pvVar13 = _pthread_getspecific(pVar16);
                        if (pvVar13 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_0125e930();
                        local_88._0_8_ = local_50;
                        pvVar13 = _pthread_getspecific(pVar16);
                        if (pvVar13 != (void *)0x0) {
                          local_88._0_8_ = local_50;
                          FUN_00e8b990();
                        }
                        uVar27 = FUN_0152e880();
                        local_88._0_4_ = uVar27;
                        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      local_b0 = *(void*)(this_ptr + 0xc0);
                      uVar27 = FUN_00d46dc0(local_88._0_4_);
                      local_178 = 0;
                      if ((char)local_58 == '\0') {
                        plVar7 = local_60;
                        if (local_60 != (int64_t *)0x0) {
                          local_e0 = local_60;
                          uVar27 = FUN_00d50b00();
                          plVar7 = local_e0;
                        }
                      }
                      else {
                        local_180 = local_60;
                        local_58 = local_58 & 0xffffff00;
                        plVar7 = local_180;
                      }
                      local_180 = plVar7;
                      local_178 = '\x01';
                      local_48 = local_48 & 0xffffff00;
                      local_50 = plVar12;
                      FUN_00ca0840(uVar27,&local_50);
                      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      local_b0 = (int64_t)*(int *)(local_e8 + 3);
                      FUN_00c8e340(local_b0,1);
                      *(void*)(local_e8[2] + local_b0) = local_88._0_4_;
                      lVar15 = local_b0;
                      uVar27 = FUN_00d46dc0(local_1b8._0_4_);
                      pVar16 = (void*)lVar15;
                      local_168 = 0;
                      if ((char)local_58 == '\0') {
                        plVar7 = local_60;
                        if (local_60 != (int64_t *)0x0) {
                          local_88._0_8_ = local_60;
                          uVar27 = FUN_00d50b00();
                          plVar7 = (int64_t *)local_88._0_8_;
                        }
                      }
                      else {
                        local_170 = local_60;
                        local_58 = local_58 & 0xffffff00;
                        plVar7 = local_170;
                      }
                      local_170 = plVar7;
                      local_168 = '\x01';
                      local_48 = local_48 & 0xffffff00;
                      local_50 = plVar12;
                      FUN_00ca0840(uVar27,&local_50);
                      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      uVar27 = FUN_00d46dc0((float)local_1b8._4_4_ / (float)local_1b8._0_4_);
                      local_158 = 0;
                      if ((char)local_58 == '\0') {
                        auVar8 = (uint8_t  [8])local_60;
                        if (local_60 != (int64_t *)0x0) {
                          local_1b8 = (uint8_t  [8])local_60;
                          uVar27 = FUN_00d50b00();
                          auVar8 = local_1b8;
                        }
                      }
                      else {
                        local_160 = local_60;
                        local_58 = local_58 & 0xffffff00;
                        auVar8 = (uint8_t  [8])local_160;
                      }
                      local_160 = (int64_t *)auVar8;
                      local_158 = '\x01';
                      local_48 = local_48 & 0xffffff00;
                      local_50 = plVar12;
                      FUN_00ca0840(uVar27,&local_50);
                      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      fVar26 = g_02390124;
                      if ((int)(float)local_98 < (int)local_78) {
                        pvVar13 = _pthread_getspecific(pVar16);
                        if (pvVar13 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        dVar4 = (double)FUN_014bb310();
                        dVar5 = (double)(local_f8._0_4_ - iVar20) / local_b8;
                        fVar30 = (float)((dVar5 / dVar4) * dVar5 * g_02394dd8);
                        fVar26 = g_02390124;
                        if (fVar30 <= g_02390124) {
                          fVar26 = fVar30;
                        }
                      }
                      uVar27 = FUN_00d46dc0(fVar26);
                      plVar7 = local_60;
                      local_148 = 0;
                      if ((char)local_58 == '\0') {
                        if (local_60 != (int64_t *)0x0) {
                          uVar27 = FUN_00d50b00();
                        }
                      }
                      else {
                        local_58 = local_58 & 0xffffff00;
                      }
                      local_148 = '\x01';
                      local_150 = plVar7;
                      local_48 = local_48 & 0xffffff00;
                      local_50 = plVar12;
                      FUN_00ca0840(uVar27,&local_50);
                      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                  }
                }
                goto LAB_007a04d1;
              }
LAB_007a0573:
              FUN_00d50b20();
            }
            if (local_128 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (plVar22 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      if (plVar18 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar12 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 < *(int *)((int64_t)local_a0 + 0xc));
    local_128 = (int64_t *)CONCAT44(local_d8._4_4_,local_d8._4_4_);
    uStack_120 = fStack_cc;
    uStack_11c = fStack_cc;
    if ((float)local_d8._4_4_ < g_02394274) goto LAB_007a0f4a;
    if (*(int *)(local_e8 + 3) + 3U < 7) {
      local_f8._0_4_ = g_02390124;
    }
    else {
      puVar14 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar14 = &g_025f0d98;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      (*g_025f0db0)();
      iVar20 = *(int *)(local_e8 + 3);
      iVar17 = iVar20 + 3;
      if (-1 < iVar20) {
        iVar17 = iVar20;
      }
      uVar27 = FUN_015c22b0(local_e8,iVar17 >> 2);
      local_f8._0_4_ = uVar27;
      FUN_00d50b20();
    }
    bVar3 = (int)(float)local_98 < (int)local_78;
    FUN_00c9fe20();
    plVar12 = local_50;
    local_60 = (int64_t *)CONCAT71(local_60._1_7_,(char)local_48);
    pplVar19 = (int64_t **)&local_48;
    if ((char)local_48 == '\0') {
      pplVar19 = &local_60;
    }
    *(void*)pplVar19 = 0;
    if (((char)local_48 != '\0') && (plVar12 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_60 == '\0') && (plVar12 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    bVar2 = (int)local_78 <= (int)(float)local_98;
    local_98 = CONCAT71(local_98._1_7_,bVar2);
    local_78 = plVar12;
    if (0 < *(int *)((int64_t)plVar12 + 0xc)) {
      fVar26 = ((float)local_128 / (float)local_d8._0_4_) * (float)local_f8._0_4_;
      local_128 = (int64_t *)CONCAT44(local_128._4_4_,fVar26);
      local_f8._0_4_ = (float)local_f8._0_4_ * *(float *)(&g_023b81d8 + (uint64_t)bVar3 * 4);
      lVar25 = 0;
      do {
        plVar18 = *(int64_t **)(plVar12[2] + lVar25 * 8);
        if (plVar18 != (int64_t *)0x0) {
          fVar26 = (float)FUN_00d50b00();
        }
        local_240 = '\0';
        local_248 = plVar18;
        FUN_007a2fc0(fVar26,&local_248);
        uVar27 = FUN_00d459e0();
        local_70 = (int64_t *)CONCAT44(local_70._4_4_,uVar27);
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          uVar27 = FUN_00d50b20();
        }
        if ((local_240 != '\0') && (local_248 != (int64_t *)0x0)) {
          uVar27 = FUN_00d50b20();
        }
        local_230 = '\0';
        local_238 = plVar18;
        FUN_007a2fc0(uVar27,&local_238);
        uVar27 = FUN_00d459e0();
        local_68 = (int64_t *)CONCAT44(local_68._4_4_,uVar27);
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_230 != '\0') && (local_238 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        fVar26 = (float)local_128 / local_70._0_4_;
        if (fVar26 <= (float)local_f8._0_4_) {
          if ((float)local_68 < fVar26 && (char)local_98 == '\0') goto LAB_007a1257;
        }
        else {
          fVar30 = fVar26 / ((fVar26 / (float)local_f8._0_4_) * (fVar26 / (float)local_f8._0_4_));
          fVar26 = (float)local_68;
          if ((float)local_68 <= fVar30) {
            fVar26 = fVar30;
          }
          if ((float)local_68 < fVar26 && (char)local_98 == '\0') {
LAB_007a1257:
            local_70 = (int64_t *)CONCAT44(local_70._4_4_,fVar26);
            local_220 = '\0';
            local_228 = plVar18;
            FUN_007a2fc0(fVar26,&local_228);
            uVar27 = FUN_00d459e0();
            local_d8._0_4_ = uVar27;
            if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_220 != '\0') && (local_228 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            fVar30 = local_70._0_4_;
            if ((float)local_d8._0_4_ < g_02390124) {
              fVar30 = (float)_powf(local_70._0_4_);
            }
            fVar26 = (float)local_68;
            if ((float)local_68 <= fVar30) {
              fVar26 = fVar30;
            }
          }
        }
        uVar27 = FUN_00d46dc0(fVar26);
        plVar22 = local_60;
        local_138 = 0;
        if ((char)local_58 == '\0') {
          if (local_60 != (int64_t *)0x0) {
            uVar27 = FUN_00d50b00();
          }
        }
        else {
          local_58 = local_58 & 0xffffff00;
        }
        plVar12 = local_78;
        local_138 = '\x01';
        local_140 = plVar22;
        local_48 = local_48 & 0xffffff00;
        local_50 = plVar18;
        fVar26 = (float)FUN_00ca0840(uVar27,&local_50);
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          fVar26 = (float)FUN_00d50b20();
        }
        if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
          fVar26 = (float)FUN_00d50b20();
        }
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          fVar26 = (float)FUN_00d50b20();
        }
        if (plVar18 != (int64_t *)0x0) {
          fVar26 = (float)FUN_00d50b20();
        }
        lVar25 = lVar25 + 1;
      } while (lVar25 < *(int *)((int64_t)plVar12 + 0xc));
    }
    if (*(int64_t *)(this_ptr + 0xb8) != 0) {
      FUN_00c9fe20();
      plVar12 = local_50;
      pplVar19 = (int64_t **)&local_48;
      if ((char)local_48 == '\0') {
        pplVar19 = &local_60;
      }
      local_60 = (int64_t *)CONCAT71(local_60._1_7_,(char)local_48);
      *(void*)pplVar19 = 0;
      if (((char)local_48 != '\0') && (plVar12 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      iVar20 = *(int *)((int64_t)plVar12 + 0xc);
      if (((char)local_60 != '\0') && (plVar12 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar20 != 0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x998))();
        (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x998))();
      }
    }
    *(void*)(this_ptr + 0xa8) = 0x7fc000007fc00000;
    local_b8 = (double)((uint64_t)local_b8 & 0xffffffff00000000);
    if (*(int *)((int64_t)local_78 + 0xc) < 1) {
      local_88 = ZEXT416(g_02391078);
      _local_1b8 = ZEXT416(g_02391078);
      local_a4 = g_02391074;
      local_b0 = CONCAT44(local_b0._4_4_,g_02391074);
      local_a8 = 0.0;
      _local_d8 = ZEXT816(0);
      local_e0 = (int64_t *)((uint64_t)local_e0._4_4_ << 0x20);
      local_98 = 0;
      uStack_90 = 0;
    }
    else {
      lVar25 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_e0 = (int64_t *)((uint64_t)local_e0._4_4_ << 0x20);
      _local_d8 = ZEXT816(0);
      fVar26 = 0.0;
      local_a8 = 0.0;
      local_b0 = CONCAT44(local_b0._4_4_,g_02391074);
      local_a4 = g_02391074;
      _local_1b8 = ZEXT416(g_02391078);
      local_88 = ZEXT416(g_02391078);
      do {
        lVar15 = *(int64_t *)(local_78[2] + lVar25 * 8);
        plVar12 = local_78;
        if (lVar15 != 0) {
          fVar26 = (float)FUN_00d50b00();
        }
        pVar16 = (void*)plVar12;
        local_210 = '\0';
        local_218 = lVar15;
        fVar26 = (float)FUN_007a2fc0(fVar26,&local_218);
        plVar12 = local_50;
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          fVar26 = (float)FUN_00d50b20();
        }
        if ((local_210 != '\0') && (local_218 != 0)) {
          fVar26 = (float)FUN_00d50b20();
        }
        if (plVar12 != (int64_t *)0x0) {
          local_200 = '\0';
          local_208 = lVar15;
          FUN_007a2fc0(fVar26,&local_208);
          uVar27 = FUN_00d459e0();
          local_70 = (int64_t *)CONCAT44(local_70._4_4_,uVar27);
          if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            uVar27 = FUN_00d50b20();
          }
          if ((local_200 != '\0') && (local_208 != 0)) {
            uVar27 = FUN_00d50b20();
          }
          local_1f0 = '\0';
          local_1f8 = lVar15;
          FUN_007a2fc0(uVar27,&local_1f8);
          uVar27 = FUN_00d459e0();
          local_128 = (int64_t *)CONCAT44(local_128._4_4_,uVar27);
          if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_1f0 != '\0') && (local_1f8 != 0)) {
            FUN_00d50b20();
          }
          pvVar13 = _pthread_getspecific(pVar16);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar27 = FUN_01265b60();
          local_f8._0_4_ = uVar27;
          uVar27 = _logf((float)local_128);
          local_68 = (int64_t *)CONCAT44(local_68._4_4_,uVar27);
          uVar28 = _logf(local_70._0_4_);
          auVar36._8_4_ = extraout_XMM0_Dc;
          auVar36._0_8_ = uVar28;
          auVar36._12_4_ = extraout_XMM0_Dd;
          auVar31._4_12_ = auVar36._4_12_;
          auVar31._0_4_ = (float)uVar28 - (float)local_68;
          fVar26 = (float)((uint)auVar31._0_4_ & g_02390140);
          if (g_02394254 <= fVar26) {
            uVar27 = local_f8._0_4_;
            local_f8 = auVar31;
            fVar26 = (float)_logf(uVar27);
            fVar30 = (fVar26 - (float)local_68) / (float)local_f8._0_4_;
            fVar26 = 0.0;
            local_68 = (int64_t *)CONCAT44(local_68._4_4_,fVar30);
            if (0.0 <= fVar30) {
              local_1e0 = '\0';
              local_1e8 = lVar15;
              FUN_007a2fc0(0,&local_1e8);
              uVar27 = FUN_00d459e0();
              local_f8._0_4_ = uVar27;
              if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_1e0 != '\0') && (local_1e8 != 0)) {
                FUN_00d50b20();
              }
              fVar26 = g_02394244;
              if ((float)local_68 <= g_02394244) {
                fVar26 = (float)local_68;
              }
              if ((float)local_128 < local_70._0_4_) {
                fVar30 = fVar26;
                if ((float)local_88._0_4_ <= fVar26) {
                  fVar30 = (float)local_88._0_4_;
                }
                fVar32 = fVar26;
                if (fVar26 <= local_a4) {
                  fVar32 = local_a4;
                }
                local_a8 = local_a8 + fVar26 * (float)local_f8._0_4_;
                fVar26 = (float)local_d8._0_4_ + (float)local_f8._0_4_;
                local_d8._0_4_ = fVar26;
                local_88 = ZEXT416((uint)fVar30);
                local_a4 = fVar32;
              }
              else {
                fVar30 = fVar26;
                if ((float)local_1b8._0_4_ <= fVar26) {
                  fVar30 = (float)local_1b8._0_4_;
                }
                fVar32 = fVar26;
                if (fVar26 <= (float)local_b0) {
                  fVar32 = (float)local_b0;
                }
                local_e0 = (int64_t *)
                           CONCAT44(local_e0._4_4_,(float)local_e0 + fVar26 * (float)local_f8._0_4_)
                ;
                fVar26 = (float)local_98 + (float)local_f8._0_4_;
                local_98 = CONCAT44(local_98._4_4_,fVar26);
                _local_1b8 = ZEXT416((uint)fVar30);
                local_b0 = CONCAT44(local_b0._4_4_,fVar32);
              }
            }
          }
        }
        if (lVar15 != 0) {
          fVar26 = (float)FUN_00d50b20();
        }
        lVar25 = lVar25 + 1;
      } while (lVar25 < *(int *)((int64_t)local_78 + 0xc));
    }
    fVar30 = 0.0;
    fVar26 = 0.0;
    if (g_02394274 <= (float)local_d8._0_4_) {
      fVar30 = local_a8 / (float)local_d8._0_4_;
      fVar26 = local_a4;
    }
    local_68 = (int64_t *)CONCAT44(local_68._4_4_,fVar26);
    fVar26 = 0.0;
    if (g_02394274 <= (float)local_98) {
      fVar26 = (float)local_e0 / (float)local_98;
      local_b8 = (double)CONCAT44(local_b8._4_4_,(float)local_b0);
    }
    local_70 = (int64_t *)CONCAT44(local_70._4_4_,fVar26);
    fVar26 = g_02390124;
    if (fVar30 <= g_02390124) {
      fVar26 = fVar30;
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x928))(fVar26);
    fVar26 = g_02390124;
    if (local_70._0_4_ <= g_02390124) {
      fVar26 = local_70._0_4_;
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x928))(g_02390124 - fVar26);
    fVar26 = (float)(~-(uint)((float)local_d8._0_4_ < g_02394274) & local_88._0_4_);
    fVar30 = (float)(~-(uint)((float)local_98 < g_02394274) & local_1b8._0_4_);
    uVar1 = ~local_98._4_4_;
    local_98 = CONCAT44(uVar1 & local_1b8._4_4_,fVar30);
    if (((float)((uint)(fVar26 - (float)local_68) & g_02390140) < g_023b81d4) ||
       ((fVar32 = (float)local_68, g_02390124 <= fVar26 && (g_02390124 <= (float)local_68)))) {
      fVar32 = (fVar26 + (float)local_68) * g_0239011c;
      fVar26 = fVar32;
    }
    if (((float)((uint)(fVar30 - local_b8._0_4_) & g_02390140) < g_023b81d4) ||
       ((g_02390124 <= fVar30 && (g_02390124 <= local_b8._0_4_)))) {
      fVar30 = (fVar30 + local_b8._0_4_) * g_0239011c;
      local_98 = CONCAT44(uVar1 & local_1b8._4_4_,fVar30);
      local_b8 = (double)CONCAT44(local_b8._4_4_,fVar30);
    }
    uStack_90 = CONCAT44(~uStack_90._4_4_ & (uint)fStack_1ac,~(uint)uStack_90 & (uint)fStack_1b0);
    if (g_02394274 <= (float)((uint)(fVar26 - fVar32) & g_02390140)) {
      if (fVar32 <= g_02390124) {
        local_68 = (int64_t *)CONCAT44(local_68._4_4_,fVar32);
        uVar27 = FUN_00e7d780(fVar26 * g_023908e0);
        local_40 = FUN_00e7d780((float)local_68 * g_023908e0);
        local_48 = 2;
        local_50 = (int64_t *)&g_024c3df0;
        local_44 = uVar27;
        FUN_00d8cb40(&g_024c3df0,&local_50);
        plVar12 = local_60;
        if (local_60 == (int64_t *)0x0) goto LAB_007a1c2c;
        bVar3 = true;
        if ((char)local_58 == '\0') {
          FUN_00d50b00();
          if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_54 = FUN_00e7d780(fVar26 * g_023908e0);
        local_58 = 1;
        local_60 = &g_024cc6f0;
        FUN_00d8cb40(&g_024cc6f0,&local_60);
        plVar12 = local_50;
        if (local_50 == (int64_t *)0x0) goto LAB_007a1c2c;
        bVar3 = true;
        if ((char)local_48 == '\0') {
          FUN_00d50b00();
          if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    else if (fVar26 <= g_02390124) {
      local_54 = FUN_00e7d780(fVar26 * g_023908e0);
      local_58 = 1;
      local_60 = &g_024cc6f0;
      FUN_00d8cb40(&g_024cc6f0,&local_60);
      plVar12 = local_50;
      if (local_50 == (int64_t *)0x0) goto LAB_007a1c2c;
      bVar3 = true;
      if ((char)local_48 == '\0') {
        FUN_00d50b00();
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00d8cb40(fVar26,g_025908a0);
      plVar12 = local_50;
      if (local_50 == (int64_t *)0x0) {
LAB_007a1c2c:
        bVar3 = false;
      }
      else {
        bVar3 = true;
        if ((char)local_48 == '\0') {
          FUN_00d50b00();
          if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    if (g_02394274 <= (float)((uint)((float)local_98 - local_b8._0_4_) & g_02390140)) {
      if (local_b8._0_4_ <= g_02390124) {
        uVar27 = FUN_00e7d780((float)local_98 * g_023908e0);
        local_40 = FUN_00e7d780(local_b8._0_4_ * g_023908e0);
        local_48 = 2;
        local_50 = (int64_t *)&g_024c3df0;
        local_44 = uVar27;
        FUN_00d8cb40(&g_024c3df0,&local_50);
        plVar18 = local_60;
        if (local_60 == (int64_t *)0x0) goto LAB_007a1e58;
        bVar2 = true;
        if ((char)local_58 == '\0') {
          FUN_00d50b00();
          if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_54 = FUN_00e7d780((float)local_98 * g_023908e0);
        local_58 = 1;
        local_60 = &g_024cc6f0;
        FUN_00d8cb40(&g_024cc6f0,&local_60);
        plVar18 = local_50;
        if (local_50 == (int64_t *)0x0) goto LAB_007a1e58;
        bVar2 = true;
        if ((char)local_48 == '\0') {
          FUN_00d50b00();
          if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    else if ((float)local_98 <= g_02390124) {
      local_54 = FUN_00e7d780((float)local_98 * g_023908e0);
      local_58 = 1;
      local_60 = &g_024cc6f0;
      FUN_00d8cb40(&g_024cc6f0,&local_60);
      plVar18 = local_50;
      if (local_50 == (int64_t *)0x0) goto LAB_007a1e58;
      bVar2 = true;
      if ((char)local_48 == '\0') {
        FUN_00d50b00();
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00d8cb40((float)local_98,g_025908a0);
      plVar18 = local_50;
      if (local_50 == (int64_t *)0x0) {
LAB_007a1e58:
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if ((char)local_48 == '\0') {
          FUN_00d50b00();
          if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    local_1d0 = '\0';
    local_1d8 = plVar12;
    (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x968))();
    if ((local_1d0 != '\0') && (local_1d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_1c0 = '\0';
    local_1c8 = plVar18;
    (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x968))();
    if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar2) && (plVar18 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar3) && (plVar12 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    plVar12 = local_110;
    plVar18 = local_c0;
  }
  if (local_e8 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_130 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar18 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_007a1f52:
  FUN_00d50b20();
  return;
}



// ============================================================
// 014c03f0
// ============================================================
// Function: FUN_014c03f0
// Address: 014c03f0
// Size: 7885 bytes
// Class: MUSampledFunction
// String references:
//   "MUSampledFunction"

void FUN_014c03f0(int64_t *param_1,void*param_2,int64_t *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  uint8_t auVar6 [16];
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  void*puVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint32_t uVar16;
  void *pvVar17;
  int64_t lVar18;
  void*puVar19;
  int64_t lVar20;
  code *pcVar21;
  uint64_t uVar22;
  void* pVar23;
  int iVar24;
  int64_t *plVar25;
  int64_t lVar26;
  uint64_t uVar27;
  double dVar28;
  code *pcVar29;
  bool bVar30;
  int iVar31;
  int64_t *plVar32;
  int iVar33;
  int64_t **pplVar34;
  int64_t *plVar35;
  uint64_t uVar36;
  int iVar37;
  void*arg1;
  double dVar38;
  uint64_t uVar39;
  int64_t *this_ptr;
  double dVar40;
  bool bVar41;
  double dVar42;
  uint64_t uVar43;
  bool bVar44;
  uint uVar45;
  double dVar46;
  uint64_t extraout_XMM0_Qa;
  uint8_t auVar48 [16];
  uint8_t auVar49 [16];
  uint64_t extraout_XMM0_Qa_00;
  uint64_t uVar47;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint8_t auVar50 [16];
  uint8_t auVar51 [16];
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar52 [16];
  uint8_t auVar53 [16];
  uint8_t auVar54 [16];
  float fVar58;
  uint8_t auVar55 [16];
  uint8_t auVar56 [16];
  uint8_t auVar57 [16];
  float fVar59;
  float fVar60;
  uint8_t auVar61 [16];
  uint8_t auVar62 [16];
  uint8_t local_1c8 [32];
  int64_t *local_1a0;
  char local_198;
  void*local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  int64_t *local_148;
  double local_140;
  uint64_t local_138;
  uint64_t local_130;
  code *local_128;
  int64_t *local_120;
  double local_118;
  uint64_t uStack_110;
  int local_fc;
  void*local_f8;
  int64_t *local_f0;
  uint64_t local_e8;
  double local_e0;
  int64_t *local_d8;
  double local_d0;
  uint64_t local_c8;
  uint64_t local_c0;
  int64_t *local_b8;
  uint64_t local_b0;
  uint local_a4;
  float local_a0;
  uint32_t local_9c;
  void*local_98;
  double local_90;
  void*local_88;
  float local_7c;
  code *local_78;
  void*local_70;
  void*local_68;
  int64_t *local_60;
  int64_t *local_58;
  int64_t *local_50;
  uint64_t local_48;
  int64_t *local_40;
  char local_38;
  
  *arg1 = 0;
  *param_2 = 0x7fffffffffffffff;
  plVar25 = param_1;
  local_148 = param_3;
  if (*param_3 != 0) {
    FUN_00c8e340(param_1,0);
  }
  pVar23 = (void*)plVar25;
  cVar12 = FUN_014bc070();
  if (cVar12 != '\0') {
    return;
  }
  (**(code **)(*this_ptr + 0x378))();
  plVar25 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar25 != (int64_t *)0x0) {
    (**(code **)(*this_ptr + 0x378))();
    plVar32 = local_40;
    plVar25 = (int64_t *)*param_1;
    if (plVar25 == local_40) {
      if (((char)param_1[1] != '\0') || (local_40 == (int64_t *)0x0)) goto LAB_014c0526;
      local_58 = param_1 + 1;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_014c051f;
      }
    }
    else {
      local_58 = param_1 + 1;
      lVar18 = param_1[1];
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *param_1 = (int64_t)plVar32;
        if (((char)lVar18 != '\0') && (plVar25 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_014c051f:
        *(void*)local_58 = 1;
LAB_014c0526:
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_014c053a;
      }
      *param_1 = (int64_t)local_40;
      if (((char)lVar18 != '\0') && (plVar25 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(void*)local_58 = 1;
  }
LAB_014c053a:
  pvVar17 = _pthread_getspecific(pVar23);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  plVar25 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_d8 = plVar25;
  pvVar17 = _pthread_getspecific(pVar23);
  plVar32 = plVar25;
  if ((pvVar17 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
    plVar32 = (int64_t *)plVar25[(uint64_t)(*(uint *)(lVar18 + 0x154) & 1) + 4];
  }
  local_d0 = (double)(**(code **)(*plVar32 + 0x370))();
  puVar19 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pcVar29 = &g_025f1800;
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
  local_f8 = puVar19;
  FUN_015c6ee0(local_d0,8);
  local_58 = (int64_t *)(uint64_t)*(uint *)((int64_t)puVar19 + 0x24);
  local_e0 = (double)puVar19[10];
  local_90 = (double)puVar19[7];
  local_150 = (int64_t)*(int *)(puVar19 + 6);
  lVar18 = (**(code **)(*this_ptr + 0x380))();
  lVar20 = (**(code **)(*this_ptr + 0x388))();
  local_140 = (double)lVar18 / local_d0;
  local_e8 = FUN_00e7d850(local_140 / local_90);
  dVar46 = (double)lVar20 / local_d0 + local_140;
  iVar13 = FUN_00e7d850(dVar46 / local_90);
  local_b0 = (uint64_t)(uint)(iVar13 - (int)local_e8);
  if (1 < iVar13 - (int)local_e8) {
    pplVar34 = &local_40;
    FUN_014bc0d0();
    plVar32 = local_40;
    if ((g_027c01a0 == '\0') && (iVar13 = ___cxa_guard_acquire(), iVar13 != 0)) {
      g_027af248 = FUN_001016a0();
      g_027af230 = "MUSampledFunction";
      g_027af238 = 0x58;
      pcVar29 = FUN_00101650;
      g_027af240 = FUN_00101650;
      g_027af250 = 0;
      ram_00000000027af258 = 0;
      g_027af260 = 0;
      ram_00000000027af268 = 0;
      g_027af270 = 0;
      ram_00000000027af278 = 0;
      g_027af280 = 0;
      ram_00000000027af288 = 0;
      g_027af290 = 0;
      ram_00000000027af298 = 0;
      g_027af2a0 = 0;
      ram_00000000027af2a8 = 0;
      g_027af2b0 = 0;
      ram_00000000027af2b8 = 0;
      g_027af2c0 = 0;
      ram_00000000027af2c8 = 0;
      g_027af2d0 = 0;
      ram_00000000027af2d8 = 0;
      g_027af2e0 = 0;
      ram_00000000027af2e8 = 0;
      g_027af2f0 = 0;
      ___cxa_guard_release();
      plVar25 = local_d8;
    }
    if (plVar32 == (int64_t *)0x0) {
LAB_014c077d:
      pplVar34 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar32 + 0x360))();
      cVar12 = FUN_00e85ea0();
      if (cVar12 == '\0') goto LAB_014c077d;
    }
    local_78 = *pplVar34;
    if (*(char *)(pplVar34 + 1) == '\0') {
      if (local_78 != 0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar34 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_78 != 0x0) {
      pvVar17 = _pthread_getspecific((void*)pcVar29);
      pcVar21 = local_78;
      if ((pvVar17 != (void *)0x0) && (lVar18 = FUN_00e8b990(), pcVar21 = local_78, lVar18 != 0)) {
        pcVar21 = *(code **)(local_78 + (uint64_t)(*(uint *)(lVar18 + 0x154) & 1) * 8 + 0x20);
        pcVar29 = local_78;
      }
      local_118 = *(double *)(pcVar21 + 0x50);
      uStack_110 = 0;
      pvVar17 = _pthread_getspecific((void*)pcVar29);
      if ((pvVar17 == (void *)0x0) || (lVar18 = FUN_00e8b990(), lVar18 == 0)) {
        lVar18 = *(int64_t *)(local_78 + 0x48);
        if (lVar18 == 0) goto LAB_014c083c;
LAB_014c0851:
        iVar13 = *(int *)(lVar18 + 0x18);
        iVar14 = iVar13 + 3;
        if (-1 < iVar13) {
          iVar14 = iVar13;
        }
        pVar23 = iVar14 >> 2;
        local_68 = (void*)(uint64_t)pVar23;
      }
      else {
        lVar18 = *(int64_t *)
                  (*(int64_t *)(local_78 + (uint64_t)(*(uint *)(lVar18 + 0x154) & 1) * 8 + 0x20) +
                  0x48);
        pcVar29 = local_78;
        if (lVar18 != 0) goto LAB_014c0851;
LAB_014c083c:
        pVar23 = (void*)pcVar29;
        local_68 = (void*)0x0;
      }
      pvVar17 = _pthread_getspecific(pVar23);
      if (pvVar17 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb920();
      local_f0 = local_40;
      if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      puVar19 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar19 = &g_025683c0;
      pcVar29 = g_025683d8;
      (*g_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      local_88 = puVar19;
      if (-1 < (int)local_68) {
        plVar25 = (int64_t *)((uint64_t)local_68 & 0xffffffff);
        plVar32 = (int64_t *)(uint64_t)((int)local_68 + 1);
        iVar13 = -1;
        plVar35 = (int64_t *)0x0;
        local_60 = plVar32;
        local_48 = plVar25;
        do {
          if ((plVar25 <= plVar35) ||
             (*(float *)(local_f0[2] + (int64_t)plVar35 * 4) < g_023b4df0)) {
            iVar14 = -1;
            if (iVar13 != -1) {
              uVar22 = FUN_00e7b4e0();
              iVar13 = *(int *)(puVar19 + 3);
              FUN_00c8e340(extraout_XMM0_Qa,1);
              *(void*)(puVar19[2] + (int64_t)iVar13) = uVar22;
              plVar25 = local_48;
              plVar32 = local_60;
            }
          }
          else {
            iVar14 = (int)plVar35;
            if (iVar13 != -1) {
              iVar14 = iVar13;
            }
          }
          iVar13 = iVar14;
          plVar35 = (int64_t *)((int64_t)plVar35 + 1);
        } while (plVar32 != plVar35);
      }
      local_48 = (int64_t *)(g_023944e0 * local_118);
      iVar13 = FUN_00e7d850();
      plVar25 = local_d8;
      iVar14 = FUN_00e7d850(local_48);
      puVar19 = local_88;
      uVar45 = *(uint *)(local_88 + 3);
      if (7 < (int)uVar45) {
        piVar5 = (int *)local_88[2];
        if ((*piVar5 == 0) && (iVar24 = piVar5[1], iVar24 < iVar14)) {
          iVar33 = (int)local_68;
          if (0xf < (int)uVar45) {
            iVar33 = piVar5[2];
          }
          if (iVar33 - iVar24 <= iVar24) goto LAB_014c0a70;
          FUN_00e7b4e0();
          FUN_00c921e0();
          uVar45 = *(uint *)(puVar19 + 3);
          uVar15 = uVar45 + 7;
          if (-1 < (int)uVar45) {
            uVar15 = uVar45;
          }
          if ((int)uVar45 < 8) goto LAB_014c0abf;
          uVar15 = (int)uVar15 >> 3;
        }
        else {
LAB_014c0a70:
          uVar15 = uVar45 >> 3;
        }
        puVar19 = local_88;
        lVar18 = local_88[2];
        iVar24 = *(int *)(lVar18 + (uint64_t)(uVar15 - 1) * 8);
        iVar33 = *(int *)(lVar18 + 4 + (uint64_t)(uVar15 - 1) * 8);
        if ((iVar33 + iVar24 == (int)local_68) && (iVar33 < iVar14)) {
          iVar14 = 0;
          if (0xf < (int)uVar45) {
            iVar14 = *(int *)(lVar18 + 4 + (uint64_t)(uVar15 - 2) * 8) +
                     *(int *)(lVar18 + (uint64_t)(uVar15 - 2) * 8);
          }
          iVar24 = iVar24 - iVar14;
          if (iVar33 < iVar24) {
            FUN_00c8e340(iVar24,0);
            uVar45 = *(uint *)(puVar19 + 3);
          }
        }
      }
LAB_014c0abf:
      local_a4 = uVar45 + 7;
      if (local_a4 < 0xf) {
        local_1c8._0_16_ = ZEXT816(0);
        local_9c = 0;
        local_a0 = 0.0;
LAB_014c0af1:
        GNFastFourierTransformer_create();
        plVar32 = local_40;
        uVar39 = local_b0;
        if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_120 = plVar32;
        local_138 = FUN_00e83da0();
        local_70 = (void*)FUN_00e83010();
        local_130 = FUN_00e83010();
        uVar16 = FUN_00e7d780(g_02394268 / (float)local_e0);
        local_48 = (int64_t *)CONCAT44(local_48._4_4_,uVar16);
        iVar13 = (int)uVar39;
        local_fc = iVar13 * 4;
        FUN_00c8e690();
        plVar32 = local_40;
        if (((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
           ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (int64_t *)0x0)))) {
          FUN_00d50b20();
        }
        FUN_00c92170();
        FUN_00c92160();
        local_b8 = plVar32;
        ___bzero();
        FUN_00c8e690();
        plVar32 = local_40;
        if (((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
           ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (int64_t *)0x0)))) {
          FUN_00d50b20();
        }
        FUN_00c92170();
        FUN_00c92160();
        local_50 = plVar32;
        ___bzero();
        local_e0 = (double)(uVar39 & 0xffffffff);
        if (iVar13 < 1) {
          uVar16 = 0;
        }
        else {
          local_7c = (float)(int)local_58;
          local_128 = g_025f14a0;
          lVar18 = (int64_t)(int)(float)local_48;
          uVar39 = (int64_t)local_58 - 1;
          local_c8 = (int64_t)local_58 - 2;
          local_c0 = (uint64_t)((uint)uVar39 & 3);
          local_60 = (int64_t *)((uint64_t)local_60 & 0xffffffff00000000);
          dVar42 = 0.0;
          local_98 = (void*)&g_025f1488;
          do {
            puVar19 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar19 = local_98;
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
            (*local_128)();
            local_1a0 = plVar25;
            local_198 = '\0';
            local_190 = local_f8;
            local_188 = '\0';
            local_180 = 0;
            local_178 = '\0';
            local_170 = local_120;
            local_168 = '\0';
            local_160 = 0;
            local_158 = '\0';
            FUN_015c4d90(0,local_130,&local_1a0,&local_190,&local_170,local_138,0,2,&local_160);
            if ((local_158 != '\0') && (local_160 != 0)) {
              FUN_00d50b20();
            }
            if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_178 != '\0') && (local_180 != 0)) {
              FUN_00d50b20();
            }
            if ((local_188 != '\0') && (local_190 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if ((local_198 != '\0') && (local_1a0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            lVar20 = FUN_015c6b60();
            if ((int)local_58._0_4_ < 2) {
              *(void*)(local_50[2] + (int64_t)dVar42 * 4) = 0;
              fVar60 = 0.0;
              if (0.0 <= local_60._0_4_) {
                fVar60 = local_60._0_4_;
              }
              local_48 = (int64_t *)CONCAT44(local_48._4_4_,fVar60);
              *(void*)(local_b8[2] + (int64_t)dVar42 * 4) = 0;
LAB_014c0d20:
              FUN_00d50b20();
            }
            else {
              uVar43 = local_c0;
              if (local_c8 < 3) {
                fVar58 = 0.0;
                lVar26 = 1;
                fVar60 = 0.0;
              }
              else {
                fVar58 = 0.0;
                fVar60 = 0.0;
                uVar36 = 0;
                do {
                  uVar27 = uVar36;
                  fVar59 = *(float *)(lVar20 + 4 + uVar27 * 4);
                  if (lVar18 < (int64_t)(uVar27 + 1)) {
                    fVar60 = fVar60 + fVar59;
                  }
                  fVar2 = *(float *)(lVar20 + 8 + uVar27 * 4);
                  if (lVar18 <= (int64_t)(uVar27 + 1)) {
                    fVar60 = fVar60 + fVar2;
                  }
                  fVar3 = *(float *)(lVar20 + 0xc + uVar27 * 4);
                  if (lVar18 < (int64_t)(uVar27 + 3)) {
                    fVar60 = fVar60 + fVar3;
                  }
                  fVar4 = *(float *)(lVar20 + 0x10 + uVar27 * 4);
                  uVar36 = uVar27 + 4;
                  if (lVar18 < (int64_t)uVar36) {
                    fVar60 = fVar60 + fVar4;
                  }
                  fVar58 = fVar58 + fVar59 + fVar2 + fVar3 + fVar4;
                } while ((uVar39 & 0xfffffffffffffffc) != uVar36);
                lVar26 = uVar27 + 5;
              }
              for (; uVar43 != 0; uVar43 = uVar43 - 1) {
                fVar59 = *(float *)(lVar20 + lVar26 * 4);
                if (lVar18 < lVar26) {
                  fVar60 = fVar60 + fVar59;
                }
                fVar58 = fVar58 + fVar59;
                lVar26 = lVar26 + 1;
              }
              *(float *)(local_50[2] + (int64_t)dVar42 * 4) = fVar58;
              fVar59 = fVar58;
              if (fVar58 <= local_60._0_4_) {
                fVar59 = local_60._0_4_;
              }
              local_48 = (int64_t *)CONCAT44(local_48._4_4_,fVar59);
              fVar59 = 0.0;
              dVar28 = 4.94065645841247e-324;
              do {
                fVar59 = fVar59 + *(float *)(lVar20 + (int64_t)dVar28 * 4);
                if (fVar58 * g_0239011c <= fVar59) {
                  fVar58 = (float)SUB84(dVar28,0) / local_7c;
                  goto LAB_014c103c;
                }
                dVar28 = (double)((int64_t)dVar28 + 1);
              } while (local_58 != (int64_t *)dVar28);
              fVar58 = 0.0;
LAB_014c103c:
              *(float *)(local_b8[2] + (int64_t)dVar42 * 4) = fVar60 * fVar58;
              if (puVar19 != (void*)0x0) goto LAB_014c0d20;
            }
            dVar42 = (double)((int64_t)dVar42 + 1);
            local_60 = (int64_t *)CONCAT44(local_60._4_4_,(float)local_48);
            uVar16 = (float)local_48;
          } while (dVar42 != local_e0);
        }
        local_48 = (int64_t *)CONCAT44(local_48._4_4_,uVar16);
        FUN_00e83070();
        FUN_00e83070();
        FUN_00e83070();
        dVar42 = local_e0;
        if (local_a4 < 0xf) {
          local_c8 = CONCAT44(local_c8._4_4_,local_9c);
          local_7c = local_a0;
        }
        else {
          uVar16 = _powf();
          local_60 = (int64_t *)CONCAT44(local_60._4_4_,uVar16);
          bVar30 = true;
          local_7c = local_a0;
          local_c8 = CONCAT44(local_c8._4_4_,local_9c);
          bVar41 = false;
          do {
            if (((~bVar30 | local_a0._0_1_) & 1) != 0) {
              if (((~bVar41 | (byte)local_9c) & 1) == 0) break;
              if (bVar30 == false) {
                uVar22 = *(void*)((int64_t)*(int *)(local_88 + 3) + -8 + local_88[2]);
                iVar24 = (int)uVar22;
                iVar13 = FUN_00e7d850(((double)iVar24 / local_118) / local_90);
                iVar24 = (int)((uint64_t)uVar22 >> 0x20) + iVar24;
                iVar14 = FUN_00e7d850(((double)iVar24 / local_118) / local_90);
                if (iVar13 < 0) {
                  iVar13 = 0;
                }
                local_58 = (int64_t *)((double)((int)local_68 - iVar24) / local_118);
                iVar33 = (int)local_b0;
                iVar24 = iVar14;
                if (iVar33 < iVar14) {
                  iVar14 = iVar33;
                  iVar24 = iVar33;
                }
              }
              else {
                iVar13 = *(int *)local_88[2];
                iVar14 = ((int *)local_88[2])[1];
                local_58 = (int64_t *)((double)iVar13 / local_118);
                iVar33 = FUN_00e7d850((double)local_58 / local_90);
                iVar24 = FUN_00e7d850(((double)(iVar14 + iVar13) / local_118) / local_90);
                if ((int)local_b0 < iVar24) {
                  iVar24 = (int)local_b0;
                }
                iVar13 = iVar33;
                iVar14 = 0;
              }
              fVar60 = 0.0;
              if (bVar41 != false) {
                fVar60 = 0.0;
                fVar58 = 0.0;
                if (iVar14 + 2 < iVar33 + -2) {
                  lVar18 = local_50[2];
                  lVar20 = (int64_t)(iVar14 + 2);
                  fVar58 = 0.0;
                  for (uVar45 = (iVar33 - iVar14) + 4U & 7; uVar45 != 0; uVar45 = uVar45 - 1) {
                    fVar58 = fVar58 + *(float *)(lVar18 + lVar20 * 4);
                    lVar20 = lVar20 + 1;
                  }
                  if (6 < (iVar33 - iVar14) - 5U) {
                    do {
                      fVar58 = fVar58 + *(float *)(lVar18 + lVar20 * 4) +
                               *(float *)(lVar18 + 4 + lVar20 * 4) +
                               *(float *)(lVar18 + 8 + lVar20 * 4) +
                               *(float *)(lVar18 + 0xc + lVar20 * 4) +
                               *(float *)(lVar18 + 0x10 + lVar20 * 4) +
                               *(float *)(lVar18 + 0x14 + lVar20 * 4) +
                               *(float *)(lVar18 + 0x18 + lVar20 * 4) +
                               *(float *)(lVar18 + 0x1c + lVar20 * 4);
                      lVar20 = lVar20 + 8;
                    } while (iVar33 + -2 != (int)lVar20);
                  }
                }
                if (g_02394274 < local_60._0_4_) {
                  fVar60 = fVar58 / local_60._0_4_;
                }
              }
              local_48._4_4_ = (uint32_t)((uint64_t)local_48 >> 0x20);
              auVar50 = ZEXT816(0);
              iVar7 = iVar33 - iVar14;
              if (iVar33 - iVar14 < 1) {
                iVar7 = 1;
              }
              iVar37 = (int)local_b0;
              iVar33 = iVar7 + iVar14;
              if (iVar37 < iVar7 + iVar14) {
                iVar33 = iVar37;
              }
              iVar31 = (iVar24 - iVar13) / 3;
              iVar13 = iVar13 + iVar31;
              iVar24 = iVar24 - (iVar31 + iVar13);
              if (iVar24 < 1) {
                iVar24 = 1;
              }
              iVar31 = iVar24 + iVar13;
              if (iVar37 < iVar24 + iVar13) {
                iVar31 = iVar37;
              }
              if (iVar14 < iVar33) {
                lVar18 = local_b8[2];
                uVar39 = (uint64_t)iVar14;
                uVar43 = ~uVar39;
                if ((iVar33 - iVar14 & 7U) == 0) {
                  auVar50 = ZEXT816(0);
                }
                else {
                  lVar20 = -((uint64_t)(uint)(iVar33 - iVar14) & 7);
                  auVar50 = ZEXT816(0);
                  do {
                    auVar50._0_4_ = auVar50._0_4_ + *(float *)(lVar18 + uVar39 * 4);
                    uVar39 = uVar39 + 1;
                    lVar20 = lVar20 + 1;
                  } while (lVar20 != 0);
                }
                if (6 < uVar43 + (int64_t)iVar33) {
                  do {
                    auVar50._0_4_ =
                         auVar50._0_4_ + *(float *)(lVar18 + uVar39 * 4) +
                         *(float *)(lVar18 + 4 + uVar39 * 4) + *(float *)(lVar18 + 8 + uVar39 * 4) +
                         *(float *)(lVar18 + 0xc + uVar39 * 4) +
                         *(float *)(lVar18 + 0x10 + uVar39 * 4) +
                         *(float *)(lVar18 + 0x14 + uVar39 * 4) +
                         *(float *)(lVar18 + 0x18 + uVar39 * 4) +
                         *(float *)(lVar18 + 0x1c + uVar39 * 4);
                    uVar39 = uVar39 + 8;
                  } while ((int64_t)iVar33 != uVar39);
                }
              }
              local_48 = (int64_t *)CONCAT44(local_48._4_4_,fVar60);
              auVar51._4_12_ = auVar50._4_12_;
              auVar57 = ZEXT816(0);
              if (iVar13 < iVar31) {
                lVar18 = local_b8[2];
                uVar39 = (uint64_t)iVar13;
                uVar43 = ~uVar39;
                if ((iVar31 - iVar13 & 7U) == 0) {
                  auVar57 = ZEXT816(0);
                }
                else {
                  lVar20 = -((uint64_t)(uint)(iVar31 - iVar13) & 7);
                  auVar57 = ZEXT816(0);
                  do {
                    auVar57._0_4_ = auVar57._0_4_ + *(float *)(lVar18 + uVar39 * 4);
                    uVar39 = uVar39 + 1;
                    lVar20 = lVar20 + 1;
                  } while (lVar20 != 0);
                }
                if (6 < uVar43 + (int64_t)iVar31) {
                  do {
                    auVar57._0_4_ =
                         auVar57._0_4_ + *(float *)(lVar18 + uVar39 * 4) +
                         *(float *)(lVar18 + 4 + uVar39 * 4) + *(float *)(lVar18 + 8 + uVar39 * 4) +
                         *(float *)(lVar18 + 0xc + uVar39 * 4) +
                         *(float *)(lVar18 + 0x10 + uVar39 * 4) +
                         *(float *)(lVar18 + 0x14 + uVar39 * 4) +
                         *(float *)(lVar18 + 0x18 + uVar39 * 4) +
                         *(float *)(lVar18 + 0x1c + uVar39 * 4);
                    uVar39 = uVar39 + 8;
                  } while ((int64_t)uVar39 < (int64_t)iVar31);
                }
              }
              auVar51._0_4_ =
                   (auVar50._0_4_ / (float)iVar7 + g_0239425c) /
                   (auVar57._0_4_ / (float)iVar24 + g_0239425c);
              auVar52._0_8_ = _logf(auVar51._0_8_);
              auVar52._8_8_ = extraout_XMM0_Qb;
              if ((double)local_58 < g_0240d790) {
                fVar58 = (float)(((double)local_58 + g_0240d3e0) / g_023944e0);
                uVar45 = -(uint)(fVar58 <= g_02394270);
                fVar60 = (float)auVar52._0_8_;
                auVar52._0_4_ =
                     fVar60 * (float)(~uVar45 & (uint)SQRT(fVar58) & g_02390140 |
                                     uVar45 & g_023b3e04);
              }
              fVar60 = 0.0;
              uVar45 = (uint)(byte)local_c8;
              if ((float)local_48 < g_02390124) {
                uVar45 = 0;
              }
              fVar58 = (float)((uint)local_7c & 0xff);
              if (g_02391094 <= auVar52._0_4_) {
                uVar45 = (uint)(byte)local_c8;
                fVar60 = fVar58;
              }
              local_7c = fVar60;
              if (!bVar30) {
                local_7c = fVar58;
              }
              if (!bVar41) {
                uVar45 = (uint)(byte)local_c8;
              }
              local_c8 = CONCAT44(local_c8._4_4_,uVar45);
              dVar42 = local_e0;
            }
            bVar41 = true;
            bVar44 = bVar30 != false;
            bVar30 = false;
          } while (bVar44);
        }
        plVar25 = local_d8;
        if (*local_148 != 0) {
          puVar19 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar19 = &g_025f0d98;
          puVar19[2] = 0;
          puVar19[3] = 0;
          puVar19[4] = 0;
          puVar19[5] = 0;
          puVar19[6] = 0;
          puVar19[7] = 0;
          (*g_025f0db0)();
          uVar39 = local_b0;
          FUN_015c1480(3,local_b0 & 0xffffffff);
          local_68 = puVar19;
          FUN_015c1480(3,uVar39 & 0xffffffff);
          FUN_00c8e690();
          plVar32 = local_40;
          if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
              (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00c92170();
          FUN_00c92160();
          auVar56 = g_02411250;
          fVar2 = _UNK_0241124c;
          fVar59 = _UNK_02411248;
          fVar58 = _UNK_02411244;
          fVar60 = g_02411240;
          uVar10 = _UNK_0239014c;
          uVar9 = _UNK_02390148;
          uVar15 = _UNK_02390144;
          uVar45 = g_02390140;
          local_60 = plVar32;
          dVar28 = g_02411970 / local_90;
          if (0 < (int)(uint)local_b0) {
            uVar39 = local_50[2];
            uVar43 = local_b8[2];
            uVar36 = plVar32[2];
            uVar8 = g_023b3e04;
            fVar3 = g_02394270;
            if ((uint)local_b0 < 4) {
              dVar38 = 0.0;
            }
            else {
              uVar27 = uVar36 + (int64_t)dVar42 * 4;
              dVar38 = 0.0;
              if ((uVar39 + (int64_t)dVar42 * 4 <= uVar36 || uVar27 <= uVar39) &&
                 (uVar43 + (int64_t)dVar42 * 4 <= uVar36 || uVar27 <= uVar43)) {
                dVar38 = (double)(uint64_t)(SUB84(dVar42,0) & 0xfffffffc);
                dVar40 = 0.0;
                do {
                  auVar61 = *(uint8_t (*) [16])(uVar39 + (int64_t)dVar40 * 4);
                  pfVar1 = (float *)(uVar43 + (int64_t)dVar40 * 4);
                  auVar53._0_4_ = *pfVar1 * auVar61._0_4_;
                  auVar53._4_4_ = pfVar1[1] * auVar61._4_4_;
                  auVar53._8_4_ = pfVar1[2] * auVar61._8_4_;
                  auVar53._12_4_ = pfVar1[3] * auVar61._12_4_;
                  auVar61 = sqrtps(auVar61,auVar53);
                  auVar62._0_4_ = auVar61._0_4_ & uVar45;
                  auVar62._4_4_ = auVar61._4_4_ & uVar15;
                  auVar62._8_4_ = auVar61._8_4_ & uVar9;
                  auVar62._12_4_ = auVar61._12_4_ & uVar10;
                  auVar54._4_4_ = -(uint)(auVar53._4_4_ == fVar58);
                  auVar54._0_4_ = -(uint)(auVar53._0_4_ == fVar60);
                  auVar54._8_4_ = -(uint)(auVar53._8_4_ == fVar59);
                  auVar54._12_4_ = -(uint)(auVar53._12_4_ == fVar2);
                  auVar61 = blendvps(auVar62,auVar56,auVar54);
                  *(uint8_t (*) [16])(uVar36 + (int64_t)dVar40 * 4) = auVar61;
                  dVar40 = (double)((int64_t)dVar40 + 4);
                } while (dVar38 != dVar40);
                uVar8 = g_023b3e04;
                fVar3 = g_02394270;
                uVar45 = g_02390140;
                if (dVar38 == dVar42) goto LAB_014c12f3;
              }
            }
            do {
              fVar60 = *(float *)(uVar39 + (int64_t)dVar38 * 4) *
                       *(float *)(uVar43 + (int64_t)dVar38 * 4);
              uVar15 = -(uint)(fVar60 <= fVar3);
              *(uint *)(uVar36 + (int64_t)dVar38 * 4) =
                   uVar15 & uVar8 | ~uVar15 & (uint)SQRT(fVar60) & uVar45;
              dVar38 = (double)((int64_t)dVar38 + 1);
            } while (dVar42 != dVar38);
          }
LAB_014c12f3:
          local_150 = CONCAT44(local_150._4_4_,(int)dVar28);
          iVar13 = 0;
          do {
            if ((iVar13 != 0) || (local_a4 < 0xf)) {
              if (iVar13 == 1) {
                if (local_a0._0_1_ == '\0') goto LAB_014c1310;
                iVar24 = 0;
                iVar14 = FUN_00e7d850(((double)*(int *)local_88[2] / local_118) / local_90);
                local_e8 = local_e8 & 0xffffffff00000000;
              }
              else {
                local_e8 = local_e8 & 0xffffffff00000000;
                iVar14 = (int)local_b0;
                iVar24 = 0;
                if (iVar13 == 2) {
                  if ((byte)local_9c == '\0') break;
                  uVar22 = *(void*)((int64_t)*(int *)(local_88 + 3) + -8 + local_88[2]);
                  uVar22 = FUN_00e7d850(((double)((int)((uint64_t)uVar22 >> 0x20) + (int)uVar22) /
                                        local_118) / local_90);
                  iVar24 = (int)uVar22;
                  local_e8 = CONCAT44(local_e8._4_4_,(int)CONCAT71((int7)((uint64_t)uVar22 >> 8),1)
                                     );
                  iVar14 = (int)local_b0;
                }
              }
              local_e0 = (double)CONCAT44(local_e0._4_4_,iVar24);
              FUN_015b46b0((int64_t)iVar24,iVar14 - iVar24);
              plVar32 = local_40;
              if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
                  (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_48 = (int64_t *)CONCAT44(local_48._4_4_,iVar13);
              uVar39 = (uint64_t)*(uint *)((int64_t)plVar32 + 0xc);
              while (1 < (int)uVar39) {
                lVar18 = plVar32[2];
                uVar43 = 0xffffffff;
                uVar36 = 1;
                auVar48 = ZEXT416(g_02391078);
                do {
                  local_58 = (int64_t *)CONCAT44(local_58._4_4_,auVar48._0_4_);
                  iVar13 = FUN_00e7d850(*(double *)(*(int64_t *)(lVar18 + uVar36 * 8) + 0x10) -
                                        *(double *)(*(int64_t *)(lVar18 + -8 + uVar36 * 8) + 0x10))
                  ;
                  iVar14 = FUN_00e7d850(*(double *)
                                         (*(int64_t *)(plVar32[2] + 8 + uVar36 * 8) + 0x10) -
                                        *(double *)(*(int64_t *)(plVar32[2] + uVar36 * 8) + 0x10));
                  plVar25 = local_d8;
                  lVar18 = plVar32[2];
                  fVar60 = (float)*(double *)(*(int64_t *)(lVar18 + uVar36 * 8) + 0x18);
                  auVar56 = ZEXT816(0);
                  if (g_0239425c < fVar60) {
                    auVar49._4_4_ = fVar60;
                    auVar49._0_4_ = fVar60;
                    auVar49._8_8_ = 0;
                    auVar55._0_4_ = fVar60 * g_02391090;
                    auVar55._4_4_ = auVar55._0_4_;
                    auVar55._8_8_ = 0;
                    auVar6._4_4_ = (float)*(double *)(*(int64_t *)(lVar18 + 8 + uVar36 * 8) + 0x18)
                    ;
                    auVar6._0_4_ = (float)*(double *)
                                           (*(int64_t *)(lVar18 + -8 + uVar36 * 8) + 0x18);
                    auVar6._8_8_ = 0;
                    auVar56 = maxps(auVar55,auVar6);
                    auVar56 = divps(auVar49,auVar56);
                  }
                  fVar60 = (float)iVar13 * auVar56._0_4_;
                  fVar58 = (float)iVar14 * auVar56._4_4_;
                  fVar59 = auVar56._12_4_ * 0.0;
                  auVar48._4_4_ = fVar58;
                  auVar48._0_4_ = fVar58;
                  auVar48._8_4_ = fVar59;
                  auVar48._12_4_ = fVar59;
                  if (fVar60 <= fVar58) {
                    auVar48._0_4_ = fVar60;
                  }
                  if (auVar48._0_4_ < local_58._0_4_) {
                    uVar43 = uVar36 & 0xffffffff;
                  }
                  else {
                    auVar48._0_4_ = local_58._0_4_;
                  }
                  uVar36 = uVar36 + 2;
                  uVar39 = (uint64_t)*(int *)((int64_t)plVar32 + 0xc);
                } while ((int64_t)uVar36 < (int64_t)uVar39);
                if ((*(int *)((int64_t)plVar32 + 0xc) < 4) || (g_023908ec < auVar48._0_4_))
                break;
                if ((int)uVar43 != -1) {
                  FUN_00d23620();
                  FUN_00d23620();
                  uVar39 = (uint64_t)*(uint *)((int64_t)plVar32 + 0xc);
                }
                if ((int)uVar39 < 4) break;
              }
              puVar19 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar19 = &g_025683c0;
              (*pcVar29)();
              FUN_00c92170();
              FUN_00c92160();
              local_70 = puVar19;
              puVar19 = (void*)FUN_00e8fc40();
              iVar13 = (int)(float)local_48;
              FUN_00d4ff40();
              *puVar19 = &g_025683c0;
              (*pcVar29)();
              FUN_00c92170();
              local_98 = puVar19;
              if (*(int *)((int64_t)plVar32 + 0xc) < 2) {
LAB_014c1bca:
                FUN_00d50b20();
              }
              else {
                local_c0 = 0xffffffff;
                local_128 = ((uint64_t)local_128 & 0xffffffff00000000);
                lVar18 = 1;
                do {
                  iVar14 = FUN_00e7d850(*(void*)
                                         (*(int64_t *)(plVar32[2] + lVar18 * 8) + 0x10));
                  iVar13 = FUN_00e7d850(*(void*)
                                         (*(int64_t *)(plVar32[2] + -8 + lVar18 * 8) + 0x10));
                  iVar24 = FUN_00e7d850(*(void*)
                                         (*(int64_t *)(plVar32[2] + 8 + lVar18 * 8) + 0x10));
                  iVar14 = iVar14 + local_e0._0_4_;
                  iVar33 = (iVar24 + local_e0._0_4_) - (iVar13 + local_e0._0_4_);
                  bVar30 = (int)local_150 < iVar33;
                  if ((char)local_e8 != '\0') {
                    fVar60 = *(float *)(local_60[2] + (int64_t)iVar14 * 4);
                    if ((g_02394274 < fVar60) &&
                       (g_02390128 <
                        *(float *)(local_60[2] + (int64_t)(iVar13 + local_e0._0_4_) * 4) / fVar60))
                    {
                      bVar30 = false;
                    }
                  }
                  iVar13 = (int)(float)local_48;
                  if ((float)local_48 == 1.4013e-45) {
                    fVar60 = *(float *)(local_60[2] + (int64_t)iVar14 * 4);
                    if (fVar60 <= g_02394274) goto LAB_014c1790;
                    if ((*(float *)(local_60[2] + (int64_t)(iVar24 + local_e0._0_4_) * 4) / fVar60
                         <= g_02390128) && (!(bool)(bVar30 ^ 1))) goto LAB_014c179c;
                  }
                  else {
LAB_014c1790:
                    if (bVar30) {
LAB_014c179c:
                      lVar20 = (int64_t)iVar14;
                      fVar60 = *(float *)(local_b8[2] + lVar20 * 4);
                      fVar58 = g_023908e0;
                      if (g_02394274 < fVar60) {
                        fVar58 = *(float *)(local_50[2] + lVar20 * 4) / fVar60;
                      }
                      if (g_02394274 < *(float *)(local_60[2] + lVar20 * 4)) {
                        local_58 = (int64_t *)CONCAT44(local_58._4_4_,fVar58);
                        fVar58 = (float)_powf();
                        fVar58 = local_58._0_4_ / fVar58;
                      }
                      puVar11 = local_70;
                      local_58 = (int64_t *)CONCAT44(local_58._4_4_,fVar58);
                      local_138 = CONCAT71(local_138._1_7_,g_02392fd8 < fVar58);
                      local_130 = CONCAT44(local_130._4_4_,iVar33);
                      uVar22 = FUN_00e7b4e0();
                      iVar13 = *(int *)(puVar11 + 3);
                      uVar47 = FUN_00c8e340(extraout_XMM0_Qa_00,1);
                      puVar19 = local_98;
                      *(void*)(puVar11[2] + (int64_t)iVar13) = uVar22;
                      iVar13 = *(int *)(local_98 + 3);
                      FUN_00c8e340(uVar47,1);
                      fVar60 = g_02392fd8;
                      *(void*)(puVar19[2] + (int64_t)iVar13) = (uint8_t)local_138;
                      iVar13 = (int)(float)local_48;
                      if (fVar60 < local_58._0_4_) {
                        if ((int)local_128 < (int)local_130) {
                          iVar14 = *(int *)(local_70 + 3);
                          iVar24 = iVar14 + 7;
                          if (-1 < iVar14) {
                            iVar24 = iVar14;
                          }
                          local_c0 = (uint64_t)((iVar24 >> 3) - 1);
                          local_128 = CONCAT44(local_128._4_4_,(int)local_130);
                        }
                      }
                    }
                  }
                  puVar19 = local_70;
                  lVar18 = lVar18 + 2;
                } while (lVar18 < *(int *)((int64_t)plVar32 + 0xc));
                if ((uint)local_c0 != 0xffffffff) {
                  iVar14 = *(int *)(local_70 + 3);
                  uVar45 = (uint)local_c0;
                  if (0xf < iVar14) {
                    if (0 < (int)(uint)local_c0) {
                      uVar15 = (uint)local_c0 - 1;
                      if (*(char *)(local_98[2] + (uint64_t)uVar15) != '\0') {
                        FUN_00e7b4e0();
                        FUN_00c921e0();
                        FUN_00e7b4e0();
                        FUN_00c921e0();
                        uVar22 = FUN_00e7b4e0();
                        *(void*)(puVar19[2] + (uint64_t)uVar15 * 8) = uVar22;
                        iVar14 = *(int *)(puVar19 + 3);
                        uVar45 = uVar15;
                      }
                    }
                    iVar13 = iVar14 + 7;
                    if (-1 < iVar14) {
                      iVar13 = iVar14;
                    }
                    if (((int)uVar45 < (iVar13 >> 3) + -1) &&
                       (lVar18 = (int64_t)(int)uVar45, *(char *)(local_98[2] + 1 + lVar18) != '\0')
                       ) {
                      local_58 = (int64_t *)
                                 CONCAT44(local_58._4_4_,*(void*)(local_70[2] + lVar18 * 8));
                      FUN_00e7b4e0();
                      FUN_00c921e0();
                      FUN_00e7b4e0();
                      FUN_00c921e0();
                      uVar22 = FUN_00e7b4e0();
                      *(void*)(local_70[2] + lVar18 * 8) = uVar22;
                    }
                    iVar13 = (int)(float)local_48;
                    if (uVar45 == 0xffffffff) goto LAB_014c1bb5;
                  }
                  if (local_a4 < 0xf) {
                    if ((int)*(uint *)(local_70 + 3) < 0x10) goto LAB_014c1bb5;
                    uVar15 = (*(uint *)(local_70 + 3) >> 3) - 1;
                    bVar30 = 0 < (int)uVar45 && (int)uVar45 < (int)uVar15;
                    cVar12 = uVar45 == 0 || bVar30;
                    if ((bVar30) || (uVar45 == uVar15)) goto LAB_014c1aa2;
joined_r0x014c1b23:
                    if (cVar12 == '\0') goto LAB_014c1bb5;
                  }
                  else {
                    if (iVar13 != 1) {
                      if ((char)local_e8 == '\0') goto LAB_014c1bb5;
                      iVar14 = *(int *)(local_70 + 3);
                      iVar24 = iVar14 + 7;
                      if (-1 < iVar14) {
                        iVar24 = iVar14;
                      }
                      cVar12 = uVar45 != (iVar24 >> 3) - 1U;
LAB_014c1aa2:
                      dVar42 = (double)*(int *)(local_70[2] + (int64_t)(int)uVar45 * 8) * local_90
                               + local_140;
                      if (g_024111a0 < dVar42 - local_140) {
                        local_58 = (int64_t *)CONCAT71(local_58._1_7_,cVar12);
                        iVar14 = FUN_00e7d850(dVar42 * local_d0);
                        lVar18 = *local_148;
                        iVar13 = *(int *)(lVar18 + 0x18);
                        FUN_00c8e340(extraout_XMM0_Qa_01,1);
                        *(int64_t *)(*(int64_t *)(lVar18 + 0x10) + (int64_t)iVar13) =
                             (int64_t)iVar14;
                        iVar13 = (int)(float)local_48;
                        cVar12 = (char)local_58;
                      }
                      goto joined_r0x014c1b23;
                    }
                    cVar12 = true;
                    if (uVar45 != 0) goto LAB_014c1aa2;
                  }
                  dVar42 = (double)(*(int *)(local_70[2] + 4 + (int64_t)(int)uVar45 * 8) +
                                   *(int *)(local_70[2] + (int64_t)(int)uVar45 * 8)) * local_90 +
                           local_140;
                  if (g_024111a0 < dVar46 - dVar42) {
                    iVar14 = FUN_00e7d850(dVar42 * local_d0);
                    lVar18 = *local_148;
                    iVar13 = *(int *)(lVar18 + 0x18);
                    FUN_00c8e340(extraout_XMM0_Qa_02,1);
                    *(int64_t *)(*(int64_t *)(lVar18 + 0x10) + (int64_t)iVar13) =
                         (int64_t)iVar14;
                    iVar13 = (int)(float)local_48;
                  }
                }
LAB_014c1bb5:
                plVar25 = local_d8;
                if (local_98 != (void*)0x0) goto LAB_014c1bca;
              }
              if (local_70 != (void*)0x0) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
              if (local_a4 < 0xf) break;
            }
LAB_014c1310:
            iVar13 = iVar13 + 1;
          } while (iVar13 != 3);
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (local_68 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_b8 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_120 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (0xe < local_a4) goto LAB_014c1c64;
        *arg1 = 0x7fffffffffffffff;
      }
      else {
        iVar14 = *(int *)local_88[2];
        uVar39 = *(uint64_t *)((int64_t)(int)uVar45 + -8 + (int64_t)local_88[2]);
        iVar33 = (int)uVar39 + (int)(uVar39 >> 0x20);
        iVar24 = (int)local_68 - iVar33;
        local_9c = CONCAT31((int3)((uint)iVar33 >> 8),iVar13 < iVar24);
        auVar61._0_8_ = (double)iVar33;
        auVar61._8_8_ = (double)(_UNK_0240e464 + iVar14);
        auVar56._8_8_ = local_118;
        auVar56._0_8_ = local_118;
        local_1c8._0_16_ = divpd(auVar61,auVar56);
        local_a0 = (float)CONCAT31((int3)((uint)iVar14 >> 8),iVar13 < iVar14);
        if (iVar13 < iVar14) goto LAB_014c0af1;
        local_c8 = CONCAT44(local_c8._4_4_,local_9c);
        local_7c = local_a0;
        if (iVar13 < iVar24) goto LAB_014c0af1;
LAB_014c1c64:
        if (((uint)local_7c & 1) != 0) {
          uVar22 = FUN_00e7dae0((double)local_1c8._8_8_ * local_d0);
          *arg1 = uVar22;
        }
        if ((local_c8 & 1) != 0) {
          uVar22 = FUN_00e7dae0(local_d0 * (double)local_1c8._0_8_);
          *param_2 = uVar22;
        }
      }
      if (local_88 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (local_f0 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (local_f8 == (void*)0x0) goto LAB_014c1cf6;
    }
  }
  FUN_00d50b20();
LAB_014c1cf6:
  if (plVar25 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0175d1d0
// ============================================================
// Function: FUN_0175d1d0
// Address: 0175d1d0
// Size: 6878 bytes
// Class: MUSampledFunction
// String references:
//   "MUSampledFunction"
//   "MUAudioSourcePrincipalItem"

void* FUN_0175d1d0(uint param_1,char param_2,int param_3,int param_4)

{
  float fVar1;
  int64_t lVar2;
  double dVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  char cVar6;
  char cVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  int iVar13;
  uint uVar14;
  int64_t **pplVar15;
  void *pvVar16;
  int64_t *plVar17;
  undefined7 uVar20;
  int64_t lVar18;
  uint64_t uVar19;
  void* pVar21;
  uint uVar22;
  int64_t *plVar23;
  int iVar24;
  int64_t *arg1;
  void*this_ptr;
  bool bVar25;
  int64_t *plVar26;
  int64_t lVar27;
  uint64_t uVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  uint8_t local_c8 [16];
  int64_t *local_b8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  int64_t *local_88;
  int64_t *local_80;
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  char local_40;
  char local_36;
  char local_35;
  char local_34;
  char local_33;
  char local_32;
  char local_31;
  int iVar12;
  
  if (*(int *)(*arg1 + 0xc) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  uVar22 = (param_4 - param_3) + 1;
  if (param_2 != '\0') {
    uVar22 = param_1;
  }
  plVar26 = (int64_t *)**(int64_t **)(*arg1 + 0x10);
  local_48 = plVar26;
  if ((g_027c0170 == '\0') && (iVar13 = ___cxa_guard_acquire(), iVar13 != 0)) {
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
  if (plVar26 == (int64_t *)0x0) {
LAB_0175d254:
    pplVar15 = &g_02802688;
  }
  else {
    (**(code **)(*plVar26 + 0x360))();
    cVar9 = FUN_00e85ea0();
    if (cVar9 == '\0') goto LAB_0175d254;
    pplVar15 = &local_48;
  }
  plVar26 = *pplVar15;
  if (plVar26 == (int64_t *)0x0) {
    lVar18 = *arg1;
    bVar8 = false;
    local_b8 = (int64_t *)0x0;
  }
  else {
    FUN_00c8e690();
    local_b8 = local_48;
    if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) && (FUN_00d50b00(), local_40 != '\0')
        ) && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    lVar18 = *arg1;
    bVar8 = true;
    if (0 < *(int *)(lVar18 + 0xc)) {
      lVar27 = 0;
      bVar25 = false;
      do {
        plVar17 = *(int64_t **)(*(int64_t *)(lVar18 + 0x10) + lVar27 * 8);
        local_48 = plVar17;
        local_40 = '\0';
        if ((g_027c0170 == '\0') && (iVar13 = ___cxa_guard_acquire(), iVar13 != 0)) {
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
        pplVar15 = &g_02802688;
        if (plVar17 != (int64_t *)0x0) {
          (**(code **)(*plVar17 + 0x360))();
          cVar9 = FUN_00e85ea0();
          pplVar15 = &local_48;
          if (cVar9 == '\0') {
            pplVar15 = &g_02802688;
          }
        }
        plVar17 = *pplVar15;
        if (*(char *)(pplVar15 + 1) == '\0') {
          if (plVar17 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar15 + 1) = 0;
        }
        pVar21 = (void*)pplVar15;
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar17 != (int64_t *)0x0) {
          pvVar16 = _pthread_getspecific(pVar21);
          if (pvVar16 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014c2a40();
          plVar17 = local_48;
          if (local_40 == '\0') {
            if (local_48 == (int64_t *)0x0) goto LAB_0175d530;
            FUN_00d50b00();
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_0175d490:
            if (*(int *)((int64_t)plVar17 + 0xc) == 0) {
              bVar29 = false;
            }
            else if (*(int *)((int64_t)plVar17 + 0xc) < 1) {
              bVar29 = false;
              if (!bVar25) {
                *(void*)(this_ptr + 1) = 0;
                *this_ptr = 0;
                bVar29 = true;
              }
            }
            else if (param_2 == '\0') {
              lVar18 = 0;
              do {
                lVar2 = *(int64_t *)(plVar17[2] + lVar18 * 8);
                if (lVar2 != 0) {
                  FUN_00d50b00();
                }
                iVar13 = FUN_00e7d780(*(void*)(lVar2 + 0x14));
                uVar11 = iVar13 - param_3;
                if ((-1 < (int)uVar11) && ((int)uVar11 < (int)uVar22)) {
                  *(float *)(local_b8[2] + (uint64_t)uVar11 * 4) =
                       (float)(-(uint)(0.0 <= *(float *)(lVar2 + 0x10)) &
                              (uint)*(float *)(lVar2 + 0x10)) +
                       *(float *)(local_b8[2] + (uint64_t)uVar11 * 4);
                }
                FUN_00d50b20();
                lVar18 = lVar18 + 1;
              } while (lVar18 < *(int *)((int64_t)plVar17 + 0xc));
              bVar29 = false;
              bVar25 = true;
            }
            else {
              lVar18 = 0;
              do {
                lVar2 = *(int64_t *)(plVar17[2] + lVar18 * 8);
                if (lVar2 != 0) {
                  FUN_00d50b00();
                }
                iVar13 = FUN_00e7d780(*(void*)(lVar2 + 0x14));
                if (-1 < (int)((uint)((int64_t)iVar13 % (int64_t)(int)uVar22) | uVar22)) {
                  uVar28 = (int64_t)iVar13 % (int64_t)(int)uVar22 & 0xffffffff;
                  *(float *)(local_b8[2] + uVar28 * 4) =
                       (float)(-(uint)(0.0 <= *(float *)(lVar2 + 0x10)) &
                              (uint)*(float *)(lVar2 + 0x10)) + *(float *)(local_b8[2] + uVar28 * 4)
                  ;
                }
                FUN_00d50b20();
                lVar18 = lVar18 + 1;
              } while (lVar18 < *(int *)((int64_t)plVar17 + 0xc));
              bVar29 = false;
              bVar25 = true;
            }
            FUN_00d50b20();
          }
          else {
            if (local_48 != (int64_t *)0x0) goto LAB_0175d490;
LAB_0175d530:
            bVar29 = false;
          }
          FUN_00d50b20();
          if (bVar29) goto joined_r0x0175ec09;
        }
        lVar27 = lVar27 + 1;
        lVar18 = *arg1;
      } while (lVar27 < *(int *)(lVar18 + 0xc));
    }
  }
  plVar17 = (int64_t *)**(void**)(lVar18 + 0x10);
  local_48 = plVar17;
  FUN_0006e1c0();
  plVar23 = g_02802688;
  if (plVar17 != (int64_t *)0x0) {
    (**(code **)(*plVar17 + 0x360))();
    cVar9 = FUN_00e85ea0();
    plVar23 = g_02802688;
    if (cVar9 != '\0') {
      plVar23 = local_48;
    }
  }
  if (plVar23 == (int64_t *)0x0) goto LAB_0175ebc5;
  FUN_00c8e690();
  plVar17 = local_48;
  if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if (plVar17 == local_b8) {
    if (plVar26 != (int64_t *)0x0) {
      FUN_00d50b20();
      goto LAB_0175d7f4;
    }
    bVar8 = true;
    lVar18 = *arg1;
    if (0 < *(int *)(lVar18 + 0xc)) goto LAB_0175d808;
LAB_0175eaae:
    cVar7 = '\0';
    local_90 = (int64_t *)0x0;
    cVar6 = '\0';
    local_88 = (int64_t *)0x0;
    local_98 = '\0';
    local_80 = (int64_t *)0x0;
    cVar9 = '\0';
    local_60 = (int64_t *)0x0;
    local_70._0_1_ = '\0';
    local_58 = (int64_t *)0x0;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_c8._8_8_;
    local_c8 = auVar5 << 0x40;
    plVar26 = (int64_t *)0x0;
LAB_0175eafb:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    bVar29 = true;
    bVar25 = true;
  }
  else {
    bVar8 = true;
    if (plVar26 == (int64_t *)0x0 || local_b8 == (int64_t *)0x0) {
      lVar18 = *arg1;
      iVar13 = *(int *)(lVar18 + 0xc);
      local_b8 = plVar17;
    }
    else {
      FUN_00d50b20();
      local_b8 = plVar17;
LAB_0175d7f4:
      lVar18 = *arg1;
      iVar13 = *(int *)(lVar18 + 0xc);
    }
    if (iVar13 < 1) goto LAB_0175eaae;
LAB_0175d808:
    lVar27 = 0;
    bVar25 = false;
    cVar7 = '\0';
    local_90 = (int64_t *)0x0;
    cVar6 = '\0';
    local_88 = (int64_t *)0x0;
    local_98 = '\0';
    local_80 = (int64_t *)0x0;
    cVar9 = '\0';
    local_60 = (int64_t *)0x0;
    local_70 = (int64_t *)0x0;
    local_58 = (int64_t *)0x0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_c8._8_8_;
    local_c8 = auVar4 << 0x40;
    plVar26 = (int64_t *)0x0;
    do {
      plVar17 = *(int64_t **)(*(int64_t *)(lVar18 + 0x10) + lVar27 * 8);
      local_40 = '\0';
      local_48 = plVar17;
      FUN_0006e1c0();
      pplVar15 = &g_02802688;
      if (plVar17 != (int64_t *)0x0) {
        (**(code **)(*plVar17 + 0x360))();
        cVar10 = FUN_00e85ea0();
        pplVar15 = &local_48;
        if (cVar10 == '\0') {
          pplVar15 = &g_02802688;
        }
      }
      plVar23 = *pplVar15;
      if (*(char *)(pplVar15 + 1) == '\0') {
        if (plVar23 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar15 + 1) = 0;
        if ((local_40 != '\0') && (plVar17 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      pVar21 = (void*)pplVar15;
      if (plVar23 != (int64_t *)0x0) {
        pvVar16 = _pthread_getspecific(pVar21);
        if (pvVar16 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar10 = FUN_01263cf0();
        if (cVar10 == '\0') {
          pvVar16 = _pthread_getspecific(pVar21);
          if (pvVar16 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125a560();
          if (local_48 == (int64_t *)0x0) {
            bVar29 = false;
          }
          else {
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            bVar29 = local_e0 != 0;
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar29) {
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013ddc00();
            plVar17 = local_48;
            if ((g_027c01a0 == '\0') && (iVar13 = ___cxa_guard_acquire(), iVar13 != 0)) {
              g_027af248 = FUN_001016a0();
              g_027af230 = "MUSampledFunction";
              g_027af238 = 0x58;
              pVar21 = 0x101650;
              g_027af240 = FUN_00101650;
              g_027af250 = 0;
              ram_00000000027af258 = 0;
              g_027af260 = 0;
              ram_00000000027af268 = 0;
              g_027af270 = 0;
              ram_00000000027af278 = 0;
              g_027af280 = 0;
              ram_00000000027af288 = 0;
              g_027af290 = 0;
              ram_00000000027af298 = 0;
              g_027af2a0 = 0;
              ram_00000000027af2a8 = 0;
              g_027af2b0 = 0;
              ram_00000000027af2b8 = 0;
              g_027af2c0 = 0;
              ram_00000000027af2c8 = 0;
              g_027af2d0 = 0;
              ram_00000000027af2d8 = 0;
              g_027af2e0 = 0;
              ram_00000000027af2e8 = 0;
              g_027af2f0 = 0;
              ___cxa_guard_release();
            }
            pplVar15 = &g_02802688;
            if (plVar17 != (int64_t *)0x0) {
              (**(code **)(*plVar17 + 0x360))();
              cVar10 = FUN_00e85ea0();
              pplVar15 = &local_48;
              if (cVar10 == '\0') {
                pplVar15 = &g_02802688;
              }
            }
            local_50 = *pplVar15;
            if (local_50 == plVar26) {
              plVar17 = plVar26;
              local_31 = local_c8[0];
              if ((local_c8[0] == '\0') && (local_50 != (int64_t *)0x0)) {
                local_50 = plVar26;
                if (*(char *)(pplVar15 + 1) != '\0') goto LAB_0175dc78;
                local_31 = '\x01';
                FUN_00d50b00();
              }
            }
            else if (*(char *)(pplVar15 + 1) == '\0') {
              if (local_50 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              local_31 = '\x01';
              plVar17 = local_50;
              if ((local_c8[0] != '\0') && (plVar26 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if ((local_c8[0] != '\0') && (plVar26 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_0175dc78:
              *(void*)(pplVar15 + 1) = 0;
              local_31 = '\x01';
              plVar17 = local_50;
            }
            plVar26 = plVar17;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              FUN_00d50b20();
            }
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013ddc80();
            plVar17 = local_48;
            if ((g_027c01a0 == '\0') && (iVar13 = ___cxa_guard_acquire(), iVar13 != 0)) {
              g_027af248 = FUN_001016a0();
              g_027af230 = "MUSampledFunction";
              g_027af238 = 0x58;
              pVar21 = 0x101650;
              g_027af240 = FUN_00101650;
              g_027af250 = 0;
              ram_00000000027af258 = 0;
              g_027af260 = 0;
              ram_00000000027af268 = 0;
              g_027af270 = 0;
              ram_00000000027af278 = 0;
              g_027af280 = 0;
              ram_00000000027af288 = 0;
              g_027af290 = 0;
              ram_00000000027af298 = 0;
              g_027af2a0 = 0;
              ram_00000000027af2a8 = 0;
              g_027af2b0 = 0;
              ram_00000000027af2b8 = 0;
              g_027af2c0 = 0;
              ram_00000000027af2c8 = 0;
              g_027af2d0 = 0;
              ram_00000000027af2d8 = 0;
              g_027af2e0 = 0;
              ram_00000000027af2e8 = 0;
              g_027af2f0 = 0;
              ___cxa_guard_release();
            }
            pplVar15 = &g_02802688;
            if (plVar17 != (int64_t *)0x0) {
              (**(code **)(*plVar17 + 0x360))();
              cVar10 = FUN_00e85ea0();
              pplVar15 = &local_48;
              if (cVar10 == '\0') {
                pplVar15 = &g_02802688;
              }
            }
            plVar17 = *pplVar15;
            if (plVar17 == local_58) {
              plVar23 = local_58;
              local_32 = (char)local_70;
              if (((char)local_70 == '\0') && (plVar17 != (int64_t *)0x0)) {
                plVar17 = local_58;
                if (*(char *)(pplVar15 + 1) != '\0') goto LAB_0175de6c;
                local_32 = '\x01';
                FUN_00d50b00();
              }
            }
            else if (*(char *)(pplVar15 + 1) == '\0') {
              if (plVar17 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              local_32 = '\x01';
              plVar23 = plVar17;
              if (((char)local_70 != '\0') && (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (((char)local_70 != '\0') && (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_0175de6c:
              *(void*)(pplVar15 + 1) = 0;
              local_32 = '\x01';
              plVar23 = plVar17;
            }
            local_58 = plVar23;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              FUN_00d50b20();
            }
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125ebb0();
            plVar17 = local_48;
            if ((g_027c01a0 == '\0') && (iVar13 = ___cxa_guard_acquire(), iVar13 != 0)) {
              g_027af248 = FUN_001016a0();
              g_027af230 = "MUSampledFunction";
              g_027af238 = 0x58;
              pVar21 = 0x101650;
              g_027af240 = FUN_00101650;
              g_027af250 = 0;
              ram_00000000027af258 = 0;
              g_027af260 = 0;
              ram_00000000027af268 = 0;
              g_027af270 = 0;
              ram_00000000027af278 = 0;
              g_027af280 = 0;
              ram_00000000027af288 = 0;
              g_027af290 = 0;
              ram_00000000027af298 = 0;
              g_027af2a0 = 0;
              ram_00000000027af2a8 = 0;
              g_027af2b0 = 0;
              ram_00000000027af2b8 = 0;
              g_027af2c0 = 0;
              ram_00000000027af2c8 = 0;
              g_027af2d0 = 0;
              ram_00000000027af2d8 = 0;
              g_027af2e0 = 0;
              ram_00000000027af2e8 = 0;
              g_027af2f0 = 0;
              ___cxa_guard_release();
            }
            pplVar15 = &g_02802688;
            if (plVar17 != (int64_t *)0x0) {
              (**(code **)(*plVar17 + 0x360))();
              cVar10 = FUN_00e85ea0();
              pplVar15 = &local_48;
              if (cVar10 == '\0') {
                pplVar15 = &g_02802688;
              }
            }
            local_68 = *pplVar15;
            if (local_68 == local_60) {
              plVar17 = local_60;
              local_33 = cVar9;
              if ((cVar9 == '\0') && (local_68 != (int64_t *)0x0)) {
                if (*(char *)(pplVar15 + 1) != '\0') {
                  local_68 = local_60;
                  goto LAB_0175dfcc;
                }
                local_33 = '\x01';
                FUN_00d50b00();
              }
            }
            else if (*(char *)(pplVar15 + 1) == '\0') {
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              local_33 = '\x01';
              plVar17 = local_68;
              if ((cVar9 != '\0') && (plVar17 = local_68, local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
                plVar17 = local_68;
              }
            }
            else {
              if ((cVar9 != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_0175dfcc:
              *(void*)(pplVar15 + 1) = 0;
              local_33 = '\x01';
              plVar17 = local_68;
            }
            local_60 = plVar17;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            pvVar16 = _pthread_getspecific(pVar21);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar3 = (double)FUN_013dd730();
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            uVar20 = (undefined7)((uint64_t)local_60 >> 8);
            if (((plVar26 == (int64_t *)0x0) || (local_58 == (int64_t *)0x0)) ||
               (local_60 == (int64_t *)0x0)) {
LAB_0175d8a3:
              plVar17 = (int64_t *)CONCAT71(uVar20,local_32);
              local_70 = plVar17;
            }
            else {
              pvVar16 = _pthread_getspecific(pVar21);
              if ((pvVar16 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
                pVar21 = (void*)plVar26;
              }
              FUN_013eb920();
              plVar17 = local_48;
              if (local_48 == local_80) {
                plVar17 = local_80;
                local_34 = local_98;
                if ((local_98 != '\0') || (local_48 == (int64_t *)0x0)) goto LAB_0175e262;
                if (local_40 == '\0') {
                  local_34 = '\x01';
                  FUN_00d50b00();
                  if (local_40 == '\0') goto LAB_0175e276;
                  goto LAB_0175e268;
                }
                local_34 = '\x01';
              }
              else {
                if (local_40 != '\0') {
                  local_34 = '\x01';
                  if ((local_98 != '\0') && (local_80 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_0175e276;
                }
                if (local_48 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                local_34 = '\x01';
                if ((local_98 != '\0') && (local_80 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_0175e262:
                local_80 = plVar17;
                plVar17 = local_80;
                if (local_40 != '\0') {
LAB_0175e268:
                  plVar17 = local_80;
                  if (local_48 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                }
              }
LAB_0175e276:
              pvVar16 = _pthread_getspecific(pVar21);
              if (pvVar16 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013eb920();
              local_a0 = local_48;
              if (local_48 == local_88) {
                if ((cVar6 != '\0') || (local_48 == (int64_t *)0x0)) {
                  local_a0 = local_88;
                  local_35 = cVar6;
                  goto LAB_0175e363;
                }
                local_35 = '\x01';
                if (local_40 == '\0') {
                  local_35 = '\x01';
                  local_a0 = local_88;
                  FUN_00d50b00();
                  if (local_40 == '\0') goto LAB_0175e377;
                  goto LAB_0175e369;
                }
                local_a0 = local_88;
              }
              else {
                if (local_40 != '\0') {
                  local_35 = '\x01';
                  if ((cVar6 != '\0') && (local_88 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_0175e377;
                }
                if (local_48 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                local_35 = '\x01';
                if ((cVar6 != '\0') && (local_88 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_0175e363:
                if (local_40 != '\0') {
LAB_0175e369:
                  if (local_48 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                }
              }
LAB_0175e377:
              pvVar16 = _pthread_getspecific(pVar21);
              if (pvVar16 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013eb920();
              plVar23 = local_48;
              if (local_48 == local_90) {
                plVar23 = local_90;
                local_36 = cVar7;
                if ((cVar7 == '\0') && (local_48 != (int64_t *)0x0)) {
                  if (local_40 != '\0') {
                    local_36 = '\x01';
                    goto LAB_0175e541;
                  }
                  local_36 = '\x01';
                  FUN_00d50b00();
                }
LAB_0175e52d:
                if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_40 == '\0') {
                  if (local_48 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  local_36 = '\x01';
                  if ((cVar7 != '\0') && (local_90 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_0175e52d;
                }
                local_36 = '\x01';
                if ((cVar7 != '\0') && (local_90 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
LAB_0175e541:
              iVar13 = (int)plVar17[3];
              iVar12 = iVar13 + 3;
              if (-1 < iVar13) {
                iVar12 = iVar13;
              }
              uVar11 = iVar12 >> 2;
              iVar12 = (int)local_a0[3];
              iVar24 = iVar12 + 3;
              if (-1 < iVar12) {
                iVar24 = iVar12;
              }
              local_90 = plVar23;
              local_80 = plVar17;
              if (iVar24 >> 2 != uVar11) {
LAB_0175d895:
                local_88 = local_a0;
                local_98 = local_34;
                cVar6 = local_35;
                cVar7 = local_36;
                goto LAB_0175d8a3;
              }
              iVar12 = (int)plVar23[3];
              iVar24 = iVar12 + 3;
              if (-1 < iVar12) {
                iVar24 = iVar12;
              }
              if ((iVar24 >> 2 != uVar11) || (bVar25 = true, iVar13 < 4)) goto LAB_0175d895;
              if (param_2 != '\0') {
                uVar28 = 0;
                do {
                  fVar30 = (float)_logf(((float)dVar3 / *(float *)(plVar17[2] + uVar28 * 4)) *
                                        g_02394204);
                  fVar30 = fVar30 * g_02394208;
                  fVar1 = *(float *)(local_a0[2] + uVar28 * 4);
                  fVar31 = (float)_logf(*(void*)(plVar23[2] + uVar28 * 4));
                  iVar13 = FUN_00e7d780(fVar31 * g_02394208 + fVar30);
                  if (-1 < (int)((uint)((int64_t)iVar13 % (int64_t)(int)uVar22) | uVar22)) {
                    uVar19 = (int64_t)iVar13 % (int64_t)(int)uVar22 & 0xffffffff;
                    *(float *)(local_b8[2] + uVar19 * 4) =
                         (float)(~-(uint)(fVar1 < g_0239424c) & (uint)fVar1 |
                                ((uint)fVar1 ^ g_023945e0) & -(uint)(fVar1 < g_0239424c)) +
                         *(float *)(local_b8[2] + uVar19 * 4);
                  }
                  uVar28 = uVar28 + 1;
                } while (uVar11 != uVar28);
                local_88 = local_a0;
                local_98 = local_34;
                local_70 = (int64_t *)CONCAT71(uVar20,local_32);
                local_c8._1_7_ = (int7)((uint64_t)local_58 >> 8);
                local_c8[0] = local_31;
                local_c8._8_8_ = 0;
                cVar9 = local_33;
                cVar6 = local_35;
                cVar7 = local_36;
                goto LAB_0175d8cb;
              }
              uVar28 = 0;
              do {
                fVar30 = (float)_logf(((float)dVar3 / *(float *)(plVar17[2] + uVar28 * 4)) *
                                      g_02394204);
                fVar30 = fVar30 * g_02394208;
                fVar1 = *(float *)(local_a0[2] + uVar28 * 4);
                local_c8 = ZEXT416((uint)fVar1);
                fVar31 = (float)_logf(*(void*)(plVar23[2] + uVar28 * 4));
                iVar13 = FUN_00e7d780(fVar31 * g_02394208 + fVar30);
                uVar14 = iVar13 - param_3;
                if ((-1 < (int)uVar14) && ((int)uVar14 < (int)uVar22)) {
                  *(float *)(local_b8[2] + (uint64_t)uVar14 * 4) =
                       (float)(~-(uint)(fVar1 < g_0239424c) & (uint)fVar1 |
                              ((uint)fVar1 ^ g_023945e0) & -(uint)(fVar1 < g_0239424c)) +
                       *(float *)(local_b8[2] + (uint64_t)uVar14 * 4);
                }
                uVar28 = uVar28 + 1;
              } while (uVar11 != uVar28);
              local_88 = local_a0;
              local_98 = local_34;
              plVar17 = local_58;
              local_70 = (int64_t *)CONCAT71(uVar20,local_32);
              cVar6 = local_35;
              cVar7 = local_36;
            }
            auVar4 = local_c8;
            local_c8._1_7_ = (int7)((uint64_t)plVar17 >> 8);
            local_c8[0] = local_31;
            local_c8._8_8_ = auVar4._8_8_;
            cVar9 = local_33;
          }
        }
LAB_0175d8cb:
        FUN_00d50b20();
      }
      lVar27 = lVar27 + 1;
      lVar18 = *arg1;
    } while (lVar27 < *(int *)(lVar18 + 0xc));
    if (!bVar25) goto LAB_0175eafb;
    bVar29 = false;
    bVar25 = false;
  }
  if ((cVar7 != '\0') && (bVar25 = bVar29, local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar6 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar9 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_70 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8[0] != '\0') && (plVar26 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar25) {
    if (!bVar8) {
      return this_ptr;
    }
joined_r0x0175ec09:
    if (local_b8 == (int64_t *)0x0) {
      return this_ptr;
    }
    FUN_00d50b20();
    return this_ptr;
  }
LAB_0175ebc5:
  *(void*)(this_ptr + 1) = 0;
  if (bVar8) {
    *this_ptr = local_b8;
  }
  else {
    if (local_b8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *this_ptr = local_b8;
  }
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01268f00
// ============================================================
// Function: FUN_01268f00
// Address: 01268f00
// Size: 7699 bytes
// Class: MUSampledFunction

void FUN_01268f00(int64_t *param_1)

{
  float fVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  void* pVar10;
  int64_t *plVar12;
  int64_t this_ptr;
  bool bVar13;
  uint32_t uVar14;
  double dVar15;
  uint64_t extraout_XMM0_Qb;
  uint32_t uVar16;
  double dVar17;
  double dVar18;
  int64_t local_268;
  char local_260;
  int64_t local_258;
  char local_250;
  int64_t local_248;
  char local_240;
  int64_t local_238;
  char local_230;
  int64_t local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  double local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  uint64_t local_a8;
  int64_t *local_a0;
  int64_t *local_98;
  uint64_t uStack_90;
  uint64_t local_88;
  double local_80;
  int64_t *local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  double local_40;
  int64_t *local_38;
  int64_t lVar11;
  
  local_40 = *(double *)(this_ptr + 0xf0);
  local_80 = (double)CONCAT44(local_80._4_4_,*(void*)(this_ptr + 0x110));
  plVar5 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar5 + 0x18))();
  local_38 = plVar5;
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb6d0();
  local_98 = (int64_t *)0x0;
  if (*(int64_t *)(this_ptr + 0xa8) == 0) {
LAB_012690a2:
    local_a8 = 0;
LAB_012690ab:
    local_78 = (int64_t *)0x0;
    fVar1 = local_80._0_4_;
LAB_012690b6:
    local_a0 = (int64_t *)CONCAT44(local_a0._4_4_,fVar1);
  }
  else {
    local_88 = 0;
    local_48 = (int64_t *)0x0;
    local_a8 = 0;
    local_78 = (int64_t *)0x0;
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      local_88 = 0;
      local_48 = (int64_t *)0x0;
      local_a8 = 0;
      local_78 = (int64_t *)0x0;
      FUN_00e8b990();
    }
    local_88 = 0;
    local_48 = (int64_t *)0x0;
    local_a8 = 0;
    local_78 = (int64_t *)0x0;
    cVar3 = FUN_012df8b0();
    if (cVar3 == '\0') goto LAB_012690a2;
    if (*(int64_t *)(this_ptr + 0xa8) == 0) {
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
LAB_01269d9a:
      local_a8 = 0;
      local_78 = (int64_t *)0x0;
joined_r0x01269dad:
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_78 != (int64_t *)0x0) goto LAB_01269dc8;
      goto LAB_012690ab;
    }
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    local_78 = local_70;
    param_1 = local_70;
    if (local_70 == (int64_t *)0x0) goto LAB_01269d9a;
    if (local_68 == '\0') {
      uVar9 = FUN_00d50b00();
      local_a8 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
      goto joined_r0x01269dad;
    }
    local_a8 = CONCAT71((int7)((uint64_t)local_70 >> 8),1);
LAB_01269dc8:
    local_88 = 0;
    local_48 = (int64_t *)0x0;
    pvVar6 = _pthread_getspecific((void*)param_1);
    plVar5 = local_78;
    if (pvVar6 != (void *)0x0) {
      local_88 = 0;
      local_48 = (int64_t *)0x0;
      lVar7 = FUN_00e8b990();
      plVar5 = local_78;
      if (lVar7 != 0) {
        plVar5 = (int64_t *)local_78[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        param_1 = local_78;
      }
    }
    fVar1 = *(float *)(plVar5 + 0x22);
    local_a0 = (int64_t *)CONCAT44(local_a0._4_4_,fVar1);
    if ((fVar1 != *(float *)(this_ptr + 0x110)) ||
       (NAN(fVar1) || NAN(*(float *)(this_ptr + 0x110)))) {
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar15 = (double)FUN_012dfc00();
      local_98 = (int64_t *)(dVar15 * *(double *)(this_ptr + 0xf0));
      pvVar6 = _pthread_getspecific((void*)param_1);
      plVar5 = local_78;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_78, lVar7 != 0)) {
        plVar5 = (int64_t *)local_78[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        param_1 = local_78;
      }
      local_48 = (int64_t *)plVar5[0x1e];
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar15 = (double)FUN_012dfc00();
      dVar17 = (double)local_98 * g_023942d0;
      local_98 = (int64_t *)(dVar17 + 0.0);
      fVar1 = (float)((dVar17 / ((double)local_48 * dVar15 * g_023942d0 + dVar17)) *
                      (double)(local_a0._0_4_ - *(float *)(this_ptr + 0x110)) +
                     (double)*(float *)(this_ptr + 0x110));
      goto LAB_012690b6;
    }
  }
  if (*(int64_t *)(this_ptr + 0xa0) == 0) {
LAB_012691a3:
    local_88 = 0;
LAB_012691a9:
    local_48 = (int64_t *)0x0;
  }
  else {
    local_88 = 0;
    local_48 = (int64_t *)0x0;
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      local_88 = 0;
      local_48 = (int64_t *)0x0;
      FUN_00e8b990();
    }
    local_88 = 0;
    local_48 = (int64_t *)0x0;
    cVar3 = FUN_012df8b0();
    if (cVar3 == '\0') goto LAB_012691a3;
    if (*(int64_t *)(this_ptr + 0xa0) == 0) {
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
LAB_01269edb:
      local_88 = 0;
      local_48 = (int64_t *)0x0;
joined_r0x01269eeb:
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 != (int64_t *)0x0) goto LAB_01269f06;
      goto LAB_012691a9;
    }
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    local_48 = local_70;
    param_1 = local_70;
    if (local_70 == (int64_t *)0x0) goto LAB_01269edb;
    if (local_68 == '\0') {
      uVar9 = FUN_00d50b00();
      local_88 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
      goto joined_r0x01269eeb;
    }
    local_88 = CONCAT71((int7)((uint64_t)local_70 >> 8),1);
LAB_01269f06:
    pvVar6 = _pthread_getspecific((void*)param_1);
    plVar5 = local_48;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_48, lVar7 != 0)) {
      plVar5 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      param_1 = local_48;
    }
    fVar1 = *(float *)(plVar5 + 0x22);
    local_80 = (double)CONCAT44(local_80._4_4_,fVar1);
    if ((fVar1 != *(float *)(this_ptr + 0x110)) ||
       (NAN(fVar1) || NAN(*(float *)(this_ptr + 0x110)))) {
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_e0 = (double)FUN_012dfc00();
      local_e0 = local_e0 * *(double *)(this_ptr + 0xf0);
      pvVar6 = _pthread_getspecific((void*)param_1);
      plVar5 = local_48;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_48, lVar7 != 0)) {
        plVar5 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        param_1 = local_48;
      }
      dVar15 = (double)plVar5[0x1e];
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar17 = (double)FUN_012dfc00();
      dVar18 = local_e0 * g_023942d0;
      local_40 = local_40 - dVar18;
      local_80 = (double)CONCAT44(local_80._4_4_,
                                  (float)((dVar18 / (dVar15 * dVar17 * g_023942d0 + dVar18)) *
                                          (double)(local_80._0_4_ - *(float *)(this_ptr + 0x110)) +
                                         (double)*(float *)(this_ptr + 0x110)));
    }
  }
  if (((double)local_98 != 0.0) || (NAN((double)local_98))) {
    pvVar6 = _pthread_getspecific((void*)param_1);
    plVar5 = local_38;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_38, lVar7 != 0)) {
      param_1 = local_38;
      plVar5 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar5 + 0x410))();
    if ((local_260 != '\0') && (local_268 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific((void*)param_1);
    plVar5 = local_38;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_38, lVar7 != 0)) {
      param_1 = local_38;
      plVar5 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar5 + 0x410))(local_98,SUB84((double)*(float *)(this_ptr + 0x110),0));
    if ((local_250 != '\0') && (local_258 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar6 = _pthread_getspecific((void*)param_1);
    plVar5 = local_38;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_38, lVar7 != 0)) {
      param_1 = local_38;
      plVar5 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar5 + 0x410))();
    if ((local_240 != '\0') && (local_248 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  plVar5 = local_38;
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_38, lVar7 != 0)) {
    param_1 = local_38;
    plVar5 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar5 + 0x410))(local_40);
  if ((local_230 != '\0') && (local_238 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != *(double *)(this_ptr + 0xf0)) ||
     (NAN(local_40) || NAN(*(double *)(this_ptr + 0xf0)))) {
    pvVar6 = _pthread_getspecific((void*)param_1);
    plVar5 = local_38;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_38, lVar7 != 0)) {
      param_1 = local_38;
      plVar5 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar5 + 0x410))(*(void*)(this_ptr + 0xf0));
    if ((local_220 != '\0') && (local_228 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_0125e7c0();
  if (local_70 == (int64_t *)0x0) {
    bVar13 = false;
  }
  else {
    if (*(int64_t *)(this_ptr + 0xd8) == 0) {
      local_b0 = '\0';
      local_b8 = (int64_t *)0x0;
LAB_01269517:
      bVar13 = false;
    }
    else {
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef490();
      if (local_b8 == (int64_t *)0x0) goto LAB_01269517;
      local_40 = *(double *)(this_ptr + 0xf0);
      FUN_0125e7c0();
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar15 = (double)FUN_013de9b0();
      if (local_40 <= dVar15) {
        bVar13 = false;
      }
      else {
        iVar4 = FUN_0126b4b0();
        bVar13 = iVar4 == 1;
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar10 = (void*)param_1;
  plVar5 = local_38;
  if (bVar13) {
    FUN_0125e7c0();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bc240();
    plVar5 = local_b8;
    pvVar6 = _pthread_getspecific(pVar10);
    plVar8 = local_b8;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = plVar8, lVar7 != 0)) {
      plVar5 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar5 + 0x400))();
    plVar8 = local_70;
    if (local_68 == '\0') {
      if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    FUN_0125e7c0();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bc240();
    plVar5 = local_b8;
    pvVar6 = _pthread_getspecific(pVar10);
    plVar12 = local_b8;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = plVar12, lVar7 != 0)) {
      plVar5 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar5 + 0x400))();
    plVar12 = local_38;
    local_a0 = local_70;
    if (local_68 == '\0') {
      if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    plVar5 = local_70;
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_012698e5;
      }
    }
    else if (local_70 != (int64_t *)0x0) {
LAB_012698e5:
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
      local_60 = plVar5;
      local_58 = 0xffffffff;
      local_50 = 0;
      while( true ) {
        lVar7 = (int64_t)(int)local_58;
        iVar4 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar4);
        if (*(int *)((int64_t)local_60 + 0xc) <= iVar4) break;
        lVar11 = local_60[2];
        local_70 = *(int64_t **)(lVar11 + 8 + lVar7 * 8);
        pvVar6 = _pthread_getspecific((void*)lVar11);
        pVar10 = (void*)lVar11;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013faed0();
        FUN_01264500();
        FUN_013fae90();
        if (local_58._4_4_ != 0) {
          if (local_58 < 0) {
            iVar4 = -local_58._4_4_;
          }
          else {
            local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar4 = 0;
          }
          local_58 = CONCAT44(iVar4,(int)local_58);
        }
      }
      FUN_01a81420();
      FUN_00d50b20();
      plVar12 = local_38;
    }
    pVar10 = 0;
    FUN_013f9470();
    local_98 = local_70;
    if (local_68 == '\0') {
      if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    plVar5 = local_70;
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01269b57;
      }
    }
    else if (local_70 != (int64_t *)0x0) {
LAB_01269b57:
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
      local_60 = plVar5;
      local_58 = 0xffffffff;
      local_50 = 0;
      while( true ) {
        lVar7 = (int64_t)(int)local_58;
        iVar4 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar4);
        if (*(int *)((int64_t)local_60 + 0xc) <= iVar4) break;
        lVar11 = local_60[2];
        local_70 = *(int64_t **)(lVar11 + 8 + lVar7 * 8);
        pvVar6 = _pthread_getspecific((void*)lVar11);
        pVar10 = (void*)lVar11;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_80 = (double)FUN_013faf20();
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = (double)FUN_013faed0();
        pvVar6 = _pthread_getspecific(pVar10);
        plVar5 = plVar8;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar5 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
        dVar15 = (double)(**(code **)(*plVar5 + 0x380))(local_40);
        local_40 = 0.0;
        if ((dVar15 != 0.0) || (NAN(dVar15))) {
          local_40 = local_80 / dVar15;
        }
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar14 = 0;
        uVar16 = 0;
        if (0.0 <= local_40) {
          uVar14 = SUB84(local_40,0);
          uVar16 = (uint32_t)((uint64_t)local_40 >> 0x20);
        }
        dVar15 = g_0238fee8;
        if ((double)CONCAT44(uVar16,uVar14) <= g_0238fee8) {
          dVar15 = (double)CONCAT44(uVar16,uVar14);
        }
        FUN_013faee0(dVar15);
        if (local_58._4_4_ != 0) {
          if (local_58 < 0) {
            iVar4 = -local_58._4_4_;
          }
          else {
            local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar4 = 0;
          }
          local_58 = CONCAT44(iVar4,(int)local_58);
        }
      }
      FUN_01a81420();
      FUN_00d50b20();
      plVar12 = local_38;
    }
    local_118 = '\0';
    param_1 = (int64_t *)0x0;
    local_120 = plVar12;
    FUN_013f8740(0,&local_120);
    plVar2 = local_70;
    plVar5 = local_38;
    if (local_70 == plVar12) {
joined_r0x0126a019:
      local_38 = plVar5;
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar5 = plVar2;
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (local_38 != (int64_t *)0x0) {
          local_38 = plVar2;
          FUN_00d50b20();
          plVar5 = local_38;
        }
        goto joined_r0x0126a019;
      }
      if (local_38 != (int64_t *)0x0) {
        local_38 = local_70;
        FUN_00d50b20();
      }
      local_68 = '\0';
    }
    if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_98 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_a0 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  local_38 = plVar5;
  local_40 = (double)FUN_01267080();
  dVar15 = (double)FUN_012671f0();
  pVar10 = (void*)param_1;
  uVar9 = extraout_XMM0_Qb;
  if (NAN(local_40)) {
joined_r0x0126acaa:
    if (local_40 <= 0.0) goto LAB_0126a0eb;
LAB_0126a104:
    dVar17 = *(double *)(this_ptr + 0xf0);
    uVar14 = SUB84(dVar17,0);
    uVar16 = (uint32_t)((uint64_t)dVar17 >> 0x20);
    if (dVar17 < local_40) goto LAB_0126a11e;
    local_98 = (int64_t *)0x0;
    uStack_90 = 0;
    if (0.0 <= dVar15) goto LAB_0126a139;
LAB_0126a143:
    uVar14 = SUB84(local_40,0);
    uVar16 = (uint32_t)((uint64_t)local_40 >> 0x20);
    if (local_40 <= (double)local_98) {
      uVar14 = SUB84(local_98,0);
      uVar16 = (uint32_t)((uint64_t)local_98 >> 0x20);
    }
    local_98 = (int64_t *)
               (~-(uint64_t)(!NAN(local_40) && !NAN(local_40)) & (uint64_t)local_98 |
               CONCAT44(uVar16,uVar14) & -(uint64_t)(!NAN(local_40) && !NAN(local_40)));
  }
  else {
    if (dVar15 < local_40) {
      dVar15 = (local_40 + dVar15) * g_023942d0;
      uVar9 = 0;
      local_40 = dVar15;
      goto joined_r0x0126acaa;
    }
    if (0.0 < local_40) goto LAB_0126a104;
LAB_0126a0eb:
    uVar14 = SUB84(g_023908c8,0);
    uVar16 = (uint32_t)((uint64_t)g_023908c8 >> 0x20);
LAB_0126a11e:
    local_40 = (double)CONCAT44(uVar16,uVar14);
    local_98 = (int64_t *)0x0;
    uStack_90 = 0;
    if (dVar15 < 0.0) goto LAB_0126a143;
LAB_0126a139:
    uStack_90 = uVar9;
    local_98 = (int64_t *)dVar15;
    if (!NAN((double)local_98)) goto LAB_0126a143;
  }
  if (NAN((double)local_98)) {
    bVar13 = true;
    if (NAN(local_40)) goto LAB_0126a949;
  }
  else if (*(double *)(this_ptr + 0xf0) <= (double)local_98) {
    if (NAN(local_40)) goto LAB_0126a949;
    local_98 = (int64_t *)g_023908c8;
    uStack_90 = 0;
    bVar13 = true;
  }
  else {
    bVar13 = true;
    if (NAN(local_40)) {
      bVar13 = false;
    }
  }
  plVar8 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar8 + 0x18))();
  plVar5 = local_38;
  pVar10 = (void*)param_1;
  if (bVar13) {
    if (g_02391030 <=
        (double)((uint64_t)(*(double *)(this_ptr + 0x128) + g_023b19a0) & g_023908f0)) {
      pvVar6 = _pthread_getspecific(pVar10);
      plVar12 = plVar8;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar12 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar12 + 0x410))(0,0);
      if ((local_1f0 != '\0') && (local_1f8 != 0)) {
        FUN_00d50b20();
      }
      if (g_0240d198 < local_40) {
        local_80 = g_0240d198;
        do {
          pvVar6 = _pthread_getspecific((void*)param_1);
          plVar12 = plVar8;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            plVar12 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
          uVar14 = _pow(local_80 / local_40,(int)*(void*)(this_ptr + 0x128));
          plVar5 = local_38;
          (**(code **)(*plVar12 + 0x410))(local_80,uVar14);
          if ((local_1e0 != '\0') && (local_1e8 != 0)) {
            FUN_00d50b20();
          }
          local_80 = local_80 + g_0240d198;
        } while (local_80 < local_40);
      }
      pvVar6 = _pthread_getspecific((void*)param_1);
      plVar12 = plVar8;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar12 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar12 + 0x410))(local_40,SUB84(g_0238fee8,0));
      if ((local_1d0 != '\0') && (local_1d8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar6 = _pthread_getspecific(pVar10);
      plVar12 = plVar8;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar12 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar12 + 0x410))(0,0);
      if ((local_210 != '\0') && (local_218 != 0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific((void*)param_1);
      plVar12 = plVar8;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar12 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar12 + 0x410))(local_40,SUB84(g_0238fee8,0));
      if ((local_200 != '\0') && (local_208 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    pvVar6 = _pthread_getspecific(pVar10);
    plVar12 = plVar8;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      plVar12 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    local_40 = 0.0;
    (**(code **)(*plVar12 + 0x410))(0,SUB84(g_0238fee8,0));
    if ((local_1c0 != '\0') && (local_1c8 != 0)) {
      FUN_00d50b20();
    }
  }
  pVar10 = (void*)param_1;
  if (NAN((double)local_98)) {
    if (local_40 < *(double *)(this_ptr + 0xf0)) {
      pvVar6 = _pthread_getspecific(pVar10);
      plVar12 = plVar8;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar12 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      plVar5 = local_38;
      (**(code **)(*plVar12 + 0x410))(*(void*)(this_ptr + 0xf0),SUB84(g_0238fee8,0));
      if ((local_160 != '\0') && (local_168 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else if (g_02391030 <=
           (double)((uint64_t)(*(double *)(this_ptr + 0x130) + g_023b19a0) & g_023908f0)) {
    local_80 = *(double *)(this_ptr + 0xf0);
    if (local_40 < (double)local_98) {
      pvVar6 = _pthread_getspecific(pVar10);
      plVar12 = plVar8;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar12 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar12 + 0x410))(local_98,SUB84(g_0238fee8,0));
      if ((local_190 != '\0') && (local_198 != 0)) {
        FUN_00d50b20();
      }
    }
    pVar10 = (void*)param_1;
    local_40 = g_0240d198 + (double)local_98;
    if (local_40 < *(double *)(this_ptr + 0xf0)) {
      local_80 = local_80 - (double)local_98;
      do {
        pvVar6 = _pthread_getspecific((void*)param_1);
        plVar12 = plVar8;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar12 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
        uVar14 = _pow(g_0238fee8 - (local_40 - (double)local_98) / local_80,
                      (int)*(void*)(this_ptr + 0x130));
        plVar5 = local_38;
        (**(code **)(*plVar12 + 0x410))(local_40,uVar14);
        if ((local_180 != '\0') && (local_188 != 0)) {
          FUN_00d50b20();
        }
        pVar10 = (void*)param_1;
        local_40 = local_40 + g_0240d198;
      } while (local_40 < *(double *)(this_ptr + 0xf0));
    }
    pvVar6 = _pthread_getspecific(pVar10);
    plVar12 = plVar8;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      plVar12 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar12 + 0x410))(*(void*)(this_ptr + 0xf0),0);
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 < (double)local_98) {
      pvVar6 = _pthread_getspecific(pVar10);
      plVar12 = plVar8;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar12 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar12 + 0x410))(local_98,SUB84(g_0238fee8,0));
      if ((local_1b0 != '\0') && (local_1b8 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar6 = _pthread_getspecific(pVar10);
    plVar12 = plVar8;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      plVar12 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar12 + 0x410))(*(void*)(this_ptr + 0xf0),0);
    if ((local_1a0 != '\0') && (local_1a8 != 0)) {
      FUN_00d50b20();
    }
  }
  local_108 = '\0';
  local_f8 = '\0';
  pVar10 = 0;
  local_110 = plVar8;
  local_100 = plVar5;
  FUN_013f8740(0,&local_100);
  plVar2 = local_70;
  plVar12 = local_38;
  if (local_70 == plVar5) {
joined_r0x0126a8e5:
    local_38 = plVar12;
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar12 = plVar2;
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (local_38 != (int64_t *)0x0) {
        local_38 = plVar2;
        FUN_00d50b20();
        plVar12 = local_38;
      }
      goto joined_r0x0126a8e5;
    }
    if (local_38 != (int64_t *)0x0) {
      local_38 = local_70;
      FUN_00d50b20();
    }
    local_68 = '\0';
  }
  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_38 = plVar12;
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_0126a949:
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb720();
  plVar5 = (int64_t *)(this_ptr + 0x188);
  FUN_00d64850();
  plVar8 = (int64_t *)*plVar5;
  if (plVar8 != local_38) {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *plVar5 = (int64_t)local_38;
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  lVar7 = FUN_00e8b990();
  if (lVar7 != 0) {
    FUN_00e8b990();
    local_e8 = 0;
    local_f0 = *plVar5;
    if (local_f0 != 0) {
      FUN_00d50b00();
    }
    local_e8 = '\x01';
    FUN_00cb00c0();
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar5 = local_38;
  if (((char)local_88 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_a8 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0196e070
// ============================================================
// Function: FUN_0196e070
// Address: 0196e070
// Size: 5450 bytes
// Class: MUSampledFunction

void FUN_0196e070(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  char cVar5;
  uint8_t uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint32_t uVar10;
  uint uVar11;
  void *pvVar12;
  int64_t *plVar13;
  void* in_ECX;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar14;
  float fVar15;
  float fVar16;
  uint32_t uVar17;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t uVar18;
  double dVar19;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_05;
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint32_t extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  uint32_t extraout_XMM0_Dd;
  uint64_t extraout_XMM0_Qb_06;
  uint32_t extraout_XMM0_Dd_00;
  uint8_t auVar25 [16];
  float extraout_XMM0_Db_01;
  float extraout_XMM0_Dd_01;
  uint64_t extraout_XMM0_Qb_07;
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint64_t extraout_XMM0_Qb_08;
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint64_t extraout_XMM0_Qb_09;
  uint8_t auVar30 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  uint64_t local_208;
  uint64_t uStack_200;
  uint8_t local_1f8 [16];
  int64_t local_1e8;
  uint8_t local_1e0;
  int64_t local_1d8;
  uint8_t local_1d0;
  int64_t local_1c8;
  uint8_t local_1c0;
  int64_t local_1b8;
  uint8_t local_1b0;
  int64_t local_1a8;
  uint8_t local_1a0;
  int64_t local_198;
  uint8_t local_190;
  int64_t local_188;
  uint8_t local_180;
  int64_t local_178;
  uint8_t local_170;
  int64_t local_168;
  uint8_t local_160;
  int64_t *local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  uint8_t local_a8 [8];
  uint64_t uStack_a0;
  float local_8c;
  uint8_t local_88 [16];
  uint8_t local_78 [4];
  uint8_t auStack_74 [12];
  int64_t *local_68;
  char local_60;
  uint8_t local_58 [16];
  int64_t *local_40;
  char local_38;
  
  auStack_74._4_8_ = in_XMM0_Qb;
  _local_78 = param_1;
  local_58._8_8_ = in_XMM1_Qb;
  local_58._0_8_ = param_2;
  local_208 = param_1;
  uStack_200 = param_2;
  if ((char)this_ptr[0x37] != '\0') {
    FUN_0198a800();
  }
  FUN_01d48370();
  local_1e8 = *arg1;
  local_1e0 = 0;
  FUN_0195b5f0();
  if ((*(int *)(this_ptr[0x34] + 0xc) == 0) && (*(char *)((int64_t)this_ptr + 0x1c5) != '\0')) {
    FUN_0196c5e0();
  }
  FUN_01989f80();
  iVar8 = (**(code **)(*local_40 + 0xb70))();
  iVar9 = FUN_01989fa0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar8 == iVar9) {
    if (*(int *)(this_ptr[0x34] + 0xc) != 0) {
      pvVar12 = _pthread_getspecific(in_ECX);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar5 = FUN_0126cd60();
      if ((cVar5 == '\0') && (cVar5 = (**(code **)(*this_ptr + 0x9a0))(), cVar5 == '\0')) {
        local_1d8 = *arg1;
        local_1d0 = 0;
        FUN_0196b4b0();
      }
    }
    goto LAB_0196f59c;
  }
  if (((this_ptr[0x3b] != 0) || (FUN_0196d600(), this_ptr[0x3b] != 0)) || (this_ptr[0x3c] != 0))
  {
    local_1c8 = *arg1;
    local_1c0 = 0;
    FUN_01966600(_local_78);
  }
  FUN_01989f80();
  iVar8 = (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                      *local_40 + 0x10))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar8 != 0) {
    local_1b8 = *arg1;
    local_1b0 = 0;
    FUN_01989f80();
    uVar10 = (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                         *local_40 + 0x10))();
    FUN_0196a550(extraout_XMM0_Qa,uVar10);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (*(int *)(this_ptr[0x34] + 0xc) != 0) {
    pvVar12 = _pthread_getspecific(in_ECX);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar5 = FUN_0126cd60();
    if ((cVar5 == '\0') && (cVar5 = (**(code **)(*this_ptr + 0x9a0))(), cVar5 == '\0')) {
      local_1a8 = *arg1;
      local_1a0 = 0;
      FUN_0196b9b0();
    }
  }
  FUN_01989f80();
  cVar5 = FUN_019f7840();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    local_198 = *arg1;
    local_190 = 0;
    FUN_01989f80();
    uVar6 = FUN_019f7870();
    FUN_01970060(extraout_XMM0_Qa_00,uVar6);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01989f80();
  cVar5 = (**(code **)((int64_t)&dylib_command_000013a0.cmd + *local_40))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    local_188 = *arg1;
    local_180 = 0;
    FUN_01971280();
  }
  FUN_01989f80();
  cVar5 = (**(code **)(*local_40 + 0xb68))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    local_178 = *arg1;
    local_170 = 0;
    FUN_01971ef0();
  }
  FUN_01989f80();
  cVar5 = (**(code **)((int64_t)&dylib_command_000013a0.dylib.name.offset + *local_40))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    pvVar12 = _pthread_getspecific(in_ECX);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012640f0();
    plVar13 = local_40;
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_88._0_8_ = plVar13;
    pvVar12 = _pthread_getspecific(in_ECX);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012641c0();
    local_58._0_8_ = local_40;
    if (((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    FUN_01989f80();
    (**(code **)(*local_68 + 0xe20))();
    _local_78 = (int64_t)local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar12 = _pthread_getspecific(in_ECX);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    pvVar12 = _pthread_getspecific(in_ECX);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar8 = FUN_01326de0();
    cVar5 = '\x01';
    if (iVar8 == 3) {
      plVar13 = (int64_t *)this_ptr[0x2f];
      if (plVar13 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = plVar13;
      cVar7 = FUN_00d24090();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      cVar5 = '\x01';
      if (cVar7 == '\0') {
        local_40 = (int64_t *)local_88._0_8_;
        local_38 = '\0';
        cVar7 = FUN_00d24090();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar7 == '\0') {
          local_40 = (int64_t *)local_58._0_8_;
          local_38 = '\0';
          cVar5 = FUN_00d24090();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if (plVar13 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar18 = local_88._0_8_;
    uVar4 = local_58._0_8_;
    if (cVar5 != '\0') {
      local_148 = *arg1;
      local_140 = '\0';
      FUN_01973150();
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
    }
    if (_local_78 != 0) {
      FUN_00d50b20();
    }
    if (uVar4 != 0) {
      FUN_00d50b20();
    }
    if (uVar18 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01989f80();
  cVar5 = FUN_019f77e0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    pvVar12 = _pthread_getspecific(in_ECX);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar18 = FUN_012643f0();
    local_58._0_8_ = uVar18;
    pvVar12 = _pthread_getspecific(in_ECX);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar19 = (double)FUN_0125a280();
    local_58._0_8_ = dVar19 + (double)local_58._0_8_;
    FUN_01989f80();
    local_58._0_8_ = (**(code **)(*local_40 + 0x938))(local_58._0_8_);
    local_58._8_8_ = extraout_XMM0_Qb;
    _local_78 = (**(code **)(*this_ptr + 0x4d8))();
    auStack_74._4_8_ = extraout_XMM0_Qb_00;
    FUN_01989f80();
    plVar3 = local_68;
    FUN_01989f80();
    plVar13 = local_158;
    local_100 = 0;
    local_108 = this_ptr[0x2f];
    if (local_108 != 0) {
      FUN_00d50b00();
    }
    local_100 = '\x01';
    (**(code **)(*plVar13 + 0xc38))();
    local_88._0_8_ = (**(code **)(*plVar3 + 0xbf8))();
    local_88._8_8_ = extraout_XMM0_Qb_01;
    local_a8 = (uint8_t  [8])(**(code **)(*this_ptr + 0x4d8))();
    uStack_a0 = extraout_XMM0_Qb_02;
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01969310();
    local_d8 = local_40;
    local_d0 = 0;
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    FUN_01d488d0();
    if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    auVar20._4_12_ = local_58._4_12_;
    auVar20._0_4_ = local_58._0_4_ - (float)local_78;
    auVar21._4_4_ = local_88._4_4_;
    auVar21._0_4_ = (float)local_88._0_4_ - (float)local_a8._4_4_;
    auVar21._8_4_ = local_88._8_4_;
    auVar21._12_4_ = local_88._12_4_;
    auVar21 = insertps(auVar20,auVar21,0x10);
    (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar21._0_8_);
  }
  auVar31 = ZEXT816(0);
  if ((*(float *)((int64_t)this_ptr + 0x14c) != 0.0) ||
     (NAN(*(float *)((int64_t)this_ptr + 0x14c)))) {
    FUN_01989f80();
    cVar5 = (**(code **)(&g_00001478 + *local_40))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      FUN_01989f80();
      (**(code **)(*local_68 + 0xed0))();
      plVar13 = local_40;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar13 == (int64_t *)0x0) {
        uVar11 = 0;
      }
      else {
        FUN_01989f80();
        (**(code **)(*local_68 + 0xed0))();
        uVar11 = (**(code **)(*local_40 + 1000))();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01989f80();
      (**(code **)(&UNK_00001500 + *local_68))();
      local_c8 = local_40;
      local_c0 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_c0 = '\x01';
      FUN_01d488d0();
      if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d48b40();
      FUN_01989f80();
      local_8c = (float)(**(code **)(&UNK_00001418 + *local_40))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_8c != g_02390124) || (NAN(local_8c) || NAN(g_02390124))) {
        cVar5 = FUN_01968c50();
        if (cVar5 == '\0') {
          local_f0 = 0;
          lVar1 = this_ptr[0x2f];
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_f0 = '\x01';
          local_f8 = lVar1;
          (**(code **)(*this_ptr + 0x9d8))();
          FUN_01969020();
          plVar13 = local_40;
          if (local_40 == (int64_t *)0x0) {
            bVar2 = false;
            plVar13 = (int64_t *)0x0;
          }
          else if (local_38 == '\0') {
            FUN_00d50b00();
            bVar2 = true;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
            bVar2 = true;
          }
          if ((local_f0 != '\0') && (local_f8 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((g_028b0ec8 == (int64_t *)0x0) || (g_028b0ed1 == '\0')) {
            FUN_00e8cb50();
            if (g_028b0ec8 == (int64_t *)0x0) {
              plVar13 = (int64_t *)FUN_00e8fc40();
              FUN_00d4ff40();
              *plVar13 = (int64_t)&g_026792c0;
              plVar13[5] = 0;
              *(void*)((int64_t)plVar13 + 0xc) = 0;
              *(void*)((int64_t)plVar13 + 0x14) = 0;
              *(void*)((int64_t)plVar13 + 0x19) = 0;
              (*g_026792d8)();
              if (g_028b0ec8 == plVar13) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
                bVar14 = g_028b0ec8 != (int64_t *)0x0;
                g_028b0ec8 = plVar13;
                if (bVar14) {
                  FUN_00d50b20();
                }
              }
              if (g_028b0ed0 == '\0') {
                g_028b0ed0 = '\x01';
                FUN_00e8cb90();
              }
              if (!bVar2) {
                FUN_00d50b20();
              }
              FUN_01cfce50();
              g_028b0ed1 = '\x01';
              FUN_00e8cb70();
            }
            else {
              g_028b0ed1 = '\x01';
              FUN_00e8cb70();
            }
            if (g_028b0ec8 == (int64_t *)0x0) {
              plVar13 = (int64_t *)0x0;
              bVar2 = false;
              goto LAB_0196ee06;
            }
          }
          plVar13 = g_028b0ec8;
          FUN_00d50b00();
          bVar2 = true;
        }
LAB_0196ee06:
        fVar15 = *(float *)((int64_t)this_ptr + 0x14c) * *(float *)((int64_t)this_ptr + 0x14c) *
                 g_0239011c;
        fVar16 = *(float *)((int64_t)plVar13 + 0x1c);
        auVar31 = ZEXT416((uint)fVar16);
        if ((fVar16 != fVar15) || (NAN(fVar16) || NAN(fVar15))) {
          if (fVar15 <= g_02390124) {
            *(float *)((int64_t)plVar13 + 0x1c) = fVar15;
            fVar15 = fVar15 * g_02394220;
          }
          else {
            *(void*)((int64_t)plVar13 + 0x1c) = 0x3f800000;
            fVar15 = g_02394220;
          }
          auVar21 = ZEXT416(g_023945e0 & (uint)fVar15) | g_023945f0;
          auVar31._4_12_ = auVar21._4_12_;
          auVar31._0_4_ = auVar21._0_4_ + fVar15;
          auVar21 = roundss(ZEXT816(0),auVar31,0xb);
          *(char *)((int64_t)plVar13 + 0xf) = (char)(int64_t)auVar21._0_4_;
        }
        local_130 = '\0';
        local_138 = plVar13;
        FUN_01d488d0();
        if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((*(float *)((int64_t)plVar13 + 0x1c) != g_02390124) ||
           (NAN(*(float *)((int64_t)plVar13 + 0x1c)) || NAN(g_02390124))) {
          *(void*)((int64_t)plVar13 + 0x1c) = 0x3f800000;
          *(void*)((int64_t)plVar13 + 0xf) = 0xff;
        }
        if (bVar2) {
          FUN_00d50b20();
        }
      }
      _local_78 = FUN_01e3f820();
      auStack_74._4_8_ = extraout_XMM0_Qb_03;
      FUN_01e3f820();
      local_58._0_8_ = FUN_01e3f820();
      local_58._8_8_ = extraout_XMM0_Qb_04;
      uVar18 = FUN_01e3f820();
      if ((uVar11 & 2) == 0) {
        auVar22._4_4_ = auStack_74._0_4_;
        auVar22._0_4_ = auStack_74._0_4_;
        auVar22._8_4_ = auStack_74._8_4_;
        auVar22._12_4_ = auStack_74._8_4_;
        local_88._4_12_ = auVar22._4_12_;
        local_88._0_4_ = (float)auStack_74._0_4_ + g_02390124;
      }
      else {
        local_58._0_4_ = (float)local_58._0_4_ + g_02390124;
        auStack_74._0_4_ = (int)((uint64_t)uVar18 >> 0x20);
        local_78 = (uint8_t  [4])((float)uVar18 + auVar31._0_4_ + g_02390d00 + g_02390d00);
        auStack_74._4_4_ = (int)extraout_XMM0_Qb_05;
        auStack_74._8_4_ = (int)((uint64_t)extraout_XMM0_Qb_05 >> 0x20);
        if ((local_8c != g_02390124) || (NAN(local_8c) || NAN(g_02390124))) {
          while( true ) {
            fVar16 = (float)(**(code **)(*this_ptr + 0x990))();
            fVar15 = 0.0;
            uVar10 = 0;
            local_88._0_4_ = g_02390124 - fVar16;
            FUN_01e3f820();
            auVar23._4_4_ = fVar15;
            auVar23._0_4_ = fVar15;
            auVar23._8_4_ = uVar10;
            auVar23._12_4_ = uVar10;
            local_88._4_12_ = auVar23._4_12_;
            local_88._0_4_ = fVar15 * (float)local_88._0_4_ * g_0239011c;
            fVar15 = (float)FUN_01975b40();
            fVar16 = (float)local_58._0_4_;
            if ((float)local_88._0_4_ <= fVar15) break;
            if ((float)local_78 <= (float)local_58._0_4_) break;
            local_58._0_4_ = (float)local_58._0_4_ + g_02390d34;
          }
          while( true ) {
            local_88._0_4_ = fVar16;
            fVar16 = (float)(**(code **)(*this_ptr + 0x990))();
            fVar15 = 0.0;
            uVar10 = 0;
            local_a8._0_4_ = g_02390124 - fVar16;
            FUN_01e3f820();
            auVar24._4_4_ = fVar15;
            auVar24._0_4_ = fVar15;
            auVar24._8_4_ = uVar10;
            auVar24._12_4_ = uVar10;
            register0x00001204 = auVar24._4_12_;
            local_a8._0_4_ = fVar15 * (float)local_a8._0_4_ * g_0239011c;
            fVar16 = (float)FUN_01975b40();
            if ((fVar16 <= (float)local_a8._0_4_) || ((float)local_78 <= (float)local_88._0_4_))
            break;
            fVar16 = (float)local_88._0_4_ + g_02390d34;
          }
          _local_78 = ZEXT416((uint)local_88._0_4_);
        }
        else {
        }
        FUN_01e3f820();
        local_88._4_4_ = extraout_XMM0_Db;
        local_88._0_4_ = extraout_XMM0_Db;
        local_88._8_4_ = extraout_XMM0_Dd;
        local_88._12_4_ = extraout_XMM0_Dd;
        uVar18 = FUN_01975b40();
        auVar32._8_4_ = (int)extraout_XMM0_Qb_06;
        auVar32._0_8_ = uVar18;
        auVar32._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_06 >> 0x20);
        auVar31._4_12_ = auVar32._4_12_;
        auVar31._0_4_ = (float)uVar18 + (float)local_88._0_4_;
        local_88 = auVar31;
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      }
      FUN_01e3f820();
      auVar25._4_4_ = extraout_XMM0_Db_00;
      auVar25._0_4_ = extraout_XMM0_Db_00;
      auVar25._8_4_ = extraout_XMM0_Dd_00;
      auVar25._12_4_ = extraout_XMM0_Dd_00;
      local_58._4_12_ = auVar25._4_12_;
      local_58._0_4_ = extraout_XMM0_Db_00 + g_02390124;
      FUN_01e3f820();
      auVar33._4_4_ = auVar31._4_4_ + extraout_XMM0_Db_01;
      auVar33._12_4_ = auVar31._12_4_ + extraout_XMM0_Dd_01;
      auVar33._0_4_ = auVar33._4_4_;
      auVar33._8_4_ = auVar33._12_4_;
      auVar34._4_12_ = auVar33._4_12_;
      auVar34._0_4_ = auVar33._4_4_ + g_02390d00 + g_02390d00;
      _local_78 = auVar34;
      local_a8 = (uint8_t  [8])FUN_01e3f820();
      uStack_a0 = extraout_XMM0_Qb_07;
      FUN_01e3f820();
      if ((uVar11 & 4) != 0) {
        fVar16 = (float)FUN_01975c10();
        if ((local_8c != g_02390124) || (NAN(local_8c) || NAN(g_02390124))) {
          local_a8._0_4_ = fVar16 + (float)local_a8._0_4_;
          uVar10 = (**(code **)(*this_ptr + 0x990))();
          local_58._0_4_ = uVar10;
          FUN_01e3f820();
          fVar16 = auVar34._4_4_;
          auVar26._4_4_ = fVar16;
          auVar26._0_4_ = fVar16;
          auVar26._8_4_ = auVar34._12_4_;
          auVar26._12_4_ = auVar34._12_4_;
          auStack_74 = auVar26._4_12_;
          local_78 = (uint8_t  [4])(fVar16 * (float)local_58._0_4_ * g_0239011c);
          FUN_01e3f820();
          fVar16 = auVar34._4_4_;
          auVar27._4_4_ = fVar16;
          auVar27._0_4_ = fVar16;
          auVar27._8_4_ = auVar34._12_4_;
          auVar27._12_4_ = auVar34._12_4_;
          local_58._4_12_ = auVar27._4_12_;
          local_58._0_4_ = fVar16 * g_0239011c - (float)local_78;
          FUN_01e3f820();
          auStack_74._0_4_ = auVar34._4_4_;
          local_78 = (uint8_t  [4])
                     (auVar34._4_4_ * g_0239011c + (float)local_78 + g_023b1608);
          auStack_74._4_4_ = auVar34._12_4_;
          auStack_74._8_4_ = auVar34._12_4_;
        }
        auVar34 = local_88;
        if (local_88._0_4_ <= (float)local_58._0_4_) {
          auVar34._4_12_ = local_88._4_12_;
          auVar34._0_4_ = (float)local_58._0_4_;
        }
        local_58._0_4_ = auVar34._0_4_;
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
        local_58 = ZEXT416((uint)local_58._0_4_);
      }
      uVar18 = FUN_01e3f820();
      if ((uVar11 & 8) != 0) {
        uStack_a0 = extraout_XMM0_Qb_08;
        local_a8 = (uint8_t  [8])uVar18;
        local_1f8 = auVar34;
        fVar16 = (float)FUN_01975c10();
        fVar15 = 0.0;
        uVar10 = 0;
        if ((local_8c != g_02390124) || (NAN(local_8c) || NAN(g_02390124))) {
          local_a8._0_4_ = ((float)local_a8._0_4_ + (float)local_1f8._0_4_ + g_02390d00) - fVar16;
          uVar17 = (**(code **)(*this_ptr + 0x990))();
          local_58._0_4_ = uVar17;
          FUN_01e3f820();
          auVar28._4_4_ = fVar15;
          auVar28._0_4_ = fVar15;
          auVar28._8_4_ = uVar10;
          auVar28._12_4_ = uVar10;
          auStack_74 = auVar28._4_12_;
          local_78 = (uint8_t  [4])(fVar15 * (float)local_58._0_4_ * g_0239011c);
          FUN_01e3f820();
          auVar29._4_4_ = fVar15;
          auVar29._0_4_ = fVar15;
          auVar29._8_4_ = uVar10;
          auVar29._12_4_ = uVar10;
          local_58._4_12_ = auVar29._4_12_;
          local_58._0_4_ = fVar15 * g_0239011c - (float)local_78;
          FUN_01e3f820();
          auStack_74._0_4_ = fVar15;
          local_78 = (uint8_t  [4])(fVar15 * g_0239011c + (float)local_78 + g_023b1608);
          auStack_74._4_4_ = uVar10;
          auStack_74._8_4_ = uVar10;
        }
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      }
    }
  }
  FUN_01989f80();
  plVar13 = local_40;
  local_e0 = 0;
  local_e8 = this_ptr[0x2f];
  if (local_e8 != 0) {
    FUN_00d50b00();
  }
  local_e0 = '\x01';
  uVar10 = (**(code **)((int64_t)&dylib_command_000011b8.cmd + *plVar13))();
  local_58._0_4_ = uVar10;
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((!NAN((float)local_58._0_4_)) && (this_ptr[0x3b] != 0)) {
    FUN_01989f80();
    _local_78 = (**(code **)(*local_40 + 3000))();
    auStack_74._4_8_ = extraout_XMM0_Qb_09;
    uVar10 = FUN_01964590();
    local_88._0_4_ = uVar10;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_78 = (uint8_t  [4])(local_78 * ((float)local_88._0_4_ - (float)local_58._0_4_));
    auVar21 = insertps(_local_78,_local_78,0x1d);
    (**(code **)(*(int64_t *)*arg1 + 0x368))(auVar21._0_8_);
    FUN_01cfbee0();
    local_b8 = local_40;
    local_b0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_b0 = '\x01';
    FUN_01d488d0();
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_40 = (int64_t *)FUN_01968ab0();
    local_128 = *arg1;
    local_120 = '\0';
    local_110 = 0;
    local_118 = this_ptr[0x2f];
    if (local_118 != 0) {
      FUN_00d50b00();
    }
    local_110 = '\x01';
    uVar6 = (**(code **)(*this_ptr + 0x9d8))();
    FUN_019689c0(&local_128,1,&local_208,uVar6);
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    auVar30._0_4_ = (uint)local_78 ^ g_023945e0;
    auVar30._4_4_ = auStack_74._0_4_ ^ _UNK_023945e4;
    auVar30._8_4_ = auStack_74._4_4_ ^ _UNK_023945e8;
    auVar30._12_4_ = auStack_74._8_4_ ^ _UNK_023945ec;
    auVar21 = insertps(auVar30,auVar30,0x1d);
    (**(code **)(*(int64_t *)*arg1 + 0x368))(auVar21._0_8_);
  }
  FUN_01989f80();
  cVar5 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                      *local_40 + 0x40))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    local_168 = *arg1;
    local_160 = 0;
    FUN_01975d60();
  }
LAB_0196f59c:
  FUN_01d48390();
  return;
}



// ============================================================
// 01973150
// ============================================================
// Function: FUN_01973150
// Address: 01973150
// Size: 7673 bytes
// Class: MUSampledFunction

void FUN_01973150(void* param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *****ppppplVar3;
  bool bVar4;
  uint32_t uVar5;
  uint8_t auVar6 [12];
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  void *pvVar13;
  void*puVar14;
  int64_t lVar15;
  int64_t *******ppppppplVar16;
  byte bVar17;
  void* pVar18;
  void*puVar19;
  int64_t *******ppppppplVar20;
  undefined7 uVar21;
  uint64_t uVar22;
  int64_t *******ppppppplVar23;
  int64_t *****ppppplVar24;
  int64_t *****ppppplVar25;
  void*arg1;
  int64_t this_ptr;
  int64_t *******ppppppplVar26;
  byte bVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  double dVar31;
  uint8_t auVar36 [16];
  double dVar32;
  double dVar33;
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar39 [16];
  uint8_t auVar40 [16];
  int64_t *******local_1d8;
  char local_1d0;
  int64_t *******local_1c8;
  char local_1c0;
  int64_t *******local_1b8;
  char local_1b0;
  int64_t *******local_1a8;
  char local_1a0;
  uint32_t local_198;
  uint32_t local_194;
  int64_t *******local_190;
  uint64_t local_188;
  uint64_t local_180;
  int64_t *******local_178;
  char local_170;
  int64_t *******local_168;
  char local_160;
  int64_t *******local_158;
  char local_150;
  int64_t *******local_148;
  char local_140;
  uint64_t local_138;
  int64_t *******local_130;
  int64_t *******local_128;
  int64_t *******local_120;
  int64_t *******local_108;
  char local_100;
  uint8_t local_f8 [16];
  uint8_t local_d8 [16];
  int64_t *******local_a0;
  int64_t *******local_98;
  float local_88;
  int64_t *******local_70;
  int64_t *******local_60;
  int64_t *******local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb_01;
  
  if (*(int64_t *)(this_ptr + 0x178) == 0) {
    return;
  }
  plVar1 = (int64_t *)(this_ptr + 0x178);
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  ppppppplVar20 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (ppppppplVar20 == (int64_t *******)0x0) {
    return;
  }
  FUN_01d48b40();
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  ppppppplVar20 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *******)0x0)) &&
      (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  local_190 = ppppppplVar20;
  local_f8._0_8_ = FUN_01976670();
  local_f8._8_8_ = extraout_XMM0_Qb;
  local_88 = (float)param_2;
  FUN_01989f80();
  ppppppplVar20 = local_40;
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar29 = (double)FUN_013de8d0();
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar30 = (double)FUN_013de9b0();
  local_d8._0_8_ = (*(*ppppppplVar20)[0x127])(dVar29 + dVar30);
  local_d8._8_8_ = extraout_XMM0_Qb_00;
  FUN_01989f80();
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de8d0();
  fVar28 = (float)(*(*local_108)[0x127])();
  if ((local_100 != '\0') && (local_108 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar29 = (double)FUN_013de9b0();
  FUN_01d48370();
  FUN_01cfcdc0();
  local_178 = local_40;
  local_170 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *******)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_170 = '\x01';
  FUN_01d488d0();
  if ((local_170 != '\0') && (local_178 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  auVar34._4_12_ = local_d8._4_12_;
  auVar34._0_4_ = (float)local_d8._0_8_ - fVar28;
  auVar39._8_8_ = in_XMM1_Qb;
  auVar39._0_8_ = param_2;
  auVar39 = insertps(auVar39,auVar34,0x10);
  uVar5 = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
  fVar28 = (float)((uint64_t)local_f8._0_8_ >> 0x20);
  auVar35._4_4_ = fVar28;
  auVar35._0_4_ = fVar28 - (g_02390d30 + auVar34._0_4_);
  auVar35._8_4_ = uVar5;
  auVar35._12_4_ = uVar5;
  auVar35 = insertps(local_f8,auVar35,0x10);
  (**(code **)(*(int64_t *)*arg1 + 0x3b0))();
  FUN_01cfcdc0();
  local_168 = local_40;
  local_160 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *******)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_160 = '\x01';
  FUN_01d488d0();
  if ((local_160 != '\0') && (local_168 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  plVar2 = (int64_t *)*arg1;
  local_f8._0_8_ = auVar35._0_8_;
  FUN_01d39800(local_f8._0_8_,auVar39._0_8_);
  local_158 = local_40;
  local_150 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *******)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_150 = '\x01';
  (**(code **)(*plVar2 + 0x3a8))();
  if ((local_150 != '\0') && (local_158 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x390))(local_f8._0_8_);
  FUN_01d48b40();
  FUN_01cfcdc0(0,0,0,g_02390124);
  local_148 = local_40;
  local_140 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *******)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_140 = '\x01';
  FUN_01d488d0();
  if ((local_140 != '\0') && (local_148 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  puVar14 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar19 = &g_02680400;
  *puVar14 = &g_02680400;
  *(void*)((int64_t)puVar14 + 0xc) = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  *(void*)((int64_t)puVar14 + 0x39) = 0;
  *(void*)((int64_t)puVar14 + 0x41) = 0;
  (*g_02680418)();
  pVar18 = (void*)puVar19;
  dVar29 = (double)auVar34._0_4_ / dVar29;
  fVar28 = 0.0;
  if (0.0 < local_88) {
    do {
      pvVar13 = _pthread_getspecific((void*)puVar19);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264180();
      ppppppplVar20 = local_40;
      pvVar13 = _pthread_getspecific((void*)puVar19);
      ppppppplVar26 = local_40;
      if ((pvVar13 != (void *)0x0) &&
         (lVar15 = FUN_00e8b990(), ppppppplVar20 = ppppppplVar26, lVar15 != 0)) {
        ppppppplVar20 =
             (int64_t *******)ppppppplVar26[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
      (*(*ppppppplVar20)[0x70])((double)fVar28 / dVar29);
      FUN_01d38ba0();
      if ((local_38 != '\0') && (local_40 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      pVar18 = (void*)puVar19;
      fVar28 = fVar28 + g_02390124;
    } while (fVar28 < local_88);
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
  FUN_01d48390();
  local_120 = (int64_t *******)0x0;
  local_180 = 0;
  local_128 = (int64_t *******)0x0;
  local_188 = 0;
  local_130 = (int64_t *******)0x0;
  local_138 = 0;
  FUN_01d48370();
  pvVar13 = _pthread_getspecific(pVar18);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126e7e0();
  if (local_40 == (int64_t *******)0x0) {
    bVar4 = false;
  }
  else {
    pvVar13 = _pthread_getspecific(pVar18);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar30 = (double)FUN_01264170();
    pvVar13 = _pthread_getspecific(pVar18);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    pvVar13 = _pthread_getspecific(pVar18);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar31 = (double)FUN_013de9b0();
    if ((local_100 != '\0') && (local_108 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    bVar4 = dVar30 == dVar31;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (bVar4) {
    ppppppplVar20 = (int64_t *******)*plVar1;
    pvVar13 = _pthread_getspecific(pVar18);
    if (pvVar13 != (void *)0x0) {
      ppppppplVar20 = (int64_t *******)*plVar1;
      lVar15 = FUN_00e8b990();
      if (lVar15 != 0) {
        ppppppplVar20 =
             (int64_t *******)ppppppplVar20[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
    }
    ppppppplVar26 = (int64_t *******)&local_40;
    FUN_0126e7e0();
    ppppppplVar23 = local_40;
    ppppppplVar16 = (int64_t *******)FUN_01111330();
    if (ppppppplVar23 == (int64_t *******)0x0) {
LAB_01973bb2:
      ppppppplVar26 = (int64_t *******)&g_02802688;
    }
    else {
      (*(*ppppppplVar23)[0x6c])();
      cVar12 = FUN_00e85ea0();
      ppppppplVar20 = ppppppplVar16;
      if (cVar12 == '\0') goto LAB_01973bb2;
    }
    local_70 = (int64_t *******)*ppppppplVar26;
    ppppppplVar16 = local_70;
    if (local_70 == (int64_t *******)0x0) {
      bVar4 = false;
      local_70 = (int64_t *******)0x0;
    }
    else {
      if (*(char *)(ppppppplVar26 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(void*)(ppppppplVar26 + 1) = 0;
      }
      bVar4 = true;
    }
    pVar18 = (void*)ppppppplVar16;
    if ((local_38 != '\0') && (local_40 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    ppppppplVar20 = (int64_t *******)*plVar1;
    pvVar13 = _pthread_getspecific(pVar18);
    if (pvVar13 != (void *)0x0) {
      ppppppplVar20 = (int64_t *******)*plVar1;
      lVar15 = FUN_00e8b990();
      if (lVar15 != 0) {
        ppppppplVar20 =
             (int64_t *******)ppppppplVar20[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
    }
    ppppppplVar26 = (int64_t *******)&local_40;
    FUN_01264180();
    ppppppplVar23 = local_40;
    ppppppplVar16 = (int64_t *******)FUN_01111330();
    if (ppppppplVar23 == (int64_t *******)0x0) {
LAB_01973c59:
      ppppppplVar26 = (int64_t *******)&g_02802688;
    }
    else {
      (*(*ppppppplVar23)[0x6c])();
      cVar12 = FUN_00e85ea0();
      ppppppplVar20 = ppppppplVar16;
      if (cVar12 == '\0') goto LAB_01973c59;
    }
    local_70 = (int64_t *******)*ppppppplVar26;
    ppppppplVar16 = local_70;
    if (local_70 == (int64_t *******)0x0) {
      bVar4 = false;
      local_70 = (int64_t *******)0x0;
    }
    else {
      if (*(char *)(ppppppplVar26 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(void*)(ppppppplVar26 + 1) = 0;
      }
      bVar4 = true;
    }
    pVar18 = (void*)ppppppplVar16;
    if ((local_38 != '\0') && (local_40 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_70 == (int64_t *******)0x0) {
    bVar9 = false;
    local_98 = (int64_t *******)0x0;
    bVar7 = false;
    ppppplVar24 = (int64_t *****)0x0;
    ppppplVar25 = (int64_t *****)0x0;
    bVar10 = false;
    bVar8 = false;
    local_120 = (int64_t *******)0x0;
    local_180 = 0;
    local_a0 = (int64_t *******)0x0;
    local_128 = (int64_t *******)0x0;
    local_188 = 0;
    local_130 = (int64_t *******)0x0;
    local_138 = 0;
  }
  else {
    FUN_01cfcdc0(0,0,g_02390124,g_0239011c);
    local_120 = local_40;
    if (local_40 == (int64_t *******)0x0) {
      uVar22 = 0;
    }
    else {
      uVar22 = CONCAT71((int7)((uint64_t)ppppppplVar26 >> 8),1);
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
    local_180 = uVar22;
    FUN_01cfcdc0(0,0,0,g_0239011c);
    local_128 = local_40;
    if (local_40 == (int64_t *******)0x0) {
      uVar22 = 0;
    }
    else {
      uVar22 = CONCAT71((int7)((uint64_t)ppppppplVar23 >> 8),1);
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
    local_188 = uVar22;
    FUN_01cfcdc0(0,0,0,g_0241bdc0);
    local_130 = local_40;
    if (local_40 == (int64_t *******)0x0) {
      local_138 = 0;
    }
    else {
      local_138 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d48370();
    auVar36._0_8_ = (**(code **)(*(int64_t *)*arg1 + 0x368))();
    auVar36._8_8_ = extraout_XMM0_Qb_01;
    auVar35 = insertps(auVar36,auVar34._0_4_,0x1d);
    (**(code **)(*(int64_t *)*arg1 + 0x368))(auVar35._0_8_);
    ppppppplVar26 = (int64_t *******)0x0;
    (**(code **)(*(int64_t *)*arg1 + 0x380))();
    if (dVar29 <= g_023934d0) {
      bVar8 = false;
      local_a0 = (int64_t *******)0x0;
joined_r0x01974076:
      ppppppplVar23 = ppppppplVar26;
      bVar9 = false;
      ppppplVar24 = (int64_t *****)0x0;
      if (g_0241b248 < dVar29) goto LAB_01974597;
LAB_0197407c:
      local_98 = (int64_t *******)0x0;
      bVar7 = false;
LAB_019748e5:
      ppppplVar25 = (int64_t *****)0x0;
      bVar10 = false;
    }
    else {
      pvVar13 = _pthread_getspecific((void*)ppppppplVar26);
      ppppppplVar20 = local_70;
      if ((pvVar13 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        ppppppplVar26 = local_70;
        ppppppplVar20 = (int64_t *******)local_70[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
      FUN_013eca90();
      ppppppplVar23 = local_40;
      if (local_40 == (int64_t *******)0x0) {
        ppppppplVar23 = (int64_t *******)0x0;
        bVar8 = false;
      }
      else {
        bVar8 = true;
        if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      local_a0 = ppppppplVar23;
      if (*(int *)((int64_t)ppppppplVar23 + 0xc) < 1) goto joined_r0x01974076;
      lVar15 = 0;
      ppppplVar24 = (int64_t *****)0x0;
      bVar9 = false;
      do {
        ppppplVar25 = ppppppplVar23[2][lVar15];
        ppppppplVar20 = ppppppplVar23;
        if (ppppplVar24 == ppppplVar25) {
          ppppplVar25 = ppppplVar24;
          bVar7 = bVar9;
          if ((!bVar9) && (ppppplVar24 != (int64_t *****)0x0)) {
            FUN_00d50b00();
            bVar7 = true;
          }
        }
        else {
          if (ppppplVar25 != (int64_t *****)0x0) {
            FUN_00d50b00();
          }
          bVar7 = true;
          if ((bVar9) && (ppppplVar24 != (int64_t *****)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar9 = bVar7;
        ppppplVar24 = ppppplVar25;
        pVar18 = (void*)ppppppplVar20;
        pvVar13 = _pthread_getspecific(pVar18);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013faed0();
        pvVar13 = _pthread_getspecific(pVar18);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013faf20();
        pvVar13 = _pthread_getspecific(pVar18);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar30 = (double)FUN_0142c970();
        pvVar13 = _pthread_getspecific(pVar18);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar31 = (double)FUN_0142c980();
        pvVar13 = _pthread_getspecific(pVar18);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar32 = (double)FUN_0142c990();
        pvVar13 = _pthread_getspecific(pVar18);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar33 = (double)FUN_0142c9a0();
        FUN_01d488d0();
        local_d8._4_4_ = (int)((uint64_t)(dVar32 * dVar29) >> 0x20);
        local_d8._0_4_ = (float)(dVar32 * dVar29);
        local_d8._8_8_ = 0;
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
        auVar35 = insertps(ZEXT416((uint)(float)(dVar30 * dVar29)),(float)(dVar31 * dVar29),0x10);
        (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar35._0_8_);
        auVar35 = insertps(local_d8,(float)(dVar33 * dVar29),0x10);
        (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar35._0_8_);
        local_1d8 = local_128;
        local_1d0 = '\0';
        ppppppplVar20 = (int64_t *******)&local_1d8;
        FUN_01d488d0();
        if ((local_1d0 != '\0') && (local_1d8 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        plVar1 = (int64_t *)*arg1;
        pvVar13 = _pthread_getspecific(pVar18);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar30 = (double)FUN_013faed0();
        pvVar13 = _pthread_getspecific(pVar18);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar31 = (double)FUN_013faf20();
        auVar40._0_4_ = (float)(dVar30 * dVar29);
        auVar40._4_4_ = (int)((uint64_t)(dVar30 * dVar29) >> 0x20);
        auVar40._8_8_ = 0;
        auVar37._0_8_ = dVar31 * dVar29;
        auVar37._8_8_ = extraout_XMM0_Qb_02;
        auVar38._4_12_ = auVar37._4_12_;
        auVar38._0_4_ = (float)auVar37._0_8_;
        insertps(auVar40,auVar38,0x10);
        (**(code **)(*plVar1 + 0x3c0))();
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)((int64_t)ppppppplVar23 + 0xc));
      if (dVar29 <= g_0241b248) goto LAB_0197407c;
LAB_01974597:
      pvVar13 = _pthread_getspecific((void*)ppppppplVar23);
      ppppppplVar20 = local_70;
      if ((pvVar13 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        ppppppplVar23 = local_70;
        ppppppplVar20 = (int64_t *******)local_70[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
      pVar18 = (void*)ppppppplVar23;
      (*(*ppppppplVar20)[0x7f])();
      pvVar13 = _pthread_getspecific(pVar18);
      ppppppplVar20 = local_108;
      if ((pvVar13 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        ppppppplVar20 = (int64_t *******)local_108[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
      FUN_013f2b00();
      local_98 = local_40;
      ppppppplVar23 = local_40;
      if (local_40 == (int64_t *******)0x0) {
        bVar7 = false;
        local_98 = (int64_t *******)0x0;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar7 = true;
        if ((local_38 != '\0') && (local_40 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        bVar7 = true;
      }
      if ((local_100 != '\0') && (local_108 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if (*(int *)((int64_t)local_98 + 0xc) < 1) goto LAB_019748e5;
      lVar15 = 0;
      bVar10 = false;
      ppppplVar25 = (int64_t *****)0x0;
      do {
        ppppplVar3 = local_98[2][lVar15];
        ppppppplVar20 = local_98;
        if (ppppplVar25 == ppppplVar3) {
          ppppplVar3 = ppppplVar25;
          bVar11 = bVar10;
          if ((!bVar10) && (ppppplVar25 != (int64_t *****)0x0)) {
            FUN_00d50b00();
            bVar11 = true;
          }
        }
        else {
          if (ppppplVar3 != (int64_t *****)0x0) {
            FUN_00d50b00();
          }
          bVar11 = true;
          if ((bVar10) && (ppppplVar25 != (int64_t *****)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar10 = bVar11;
        ppppplVar25 = ppppplVar3;
        pVar18 = (void*)ppppppplVar20;
        local_1c8 = local_130;
        local_1c0 = '\0';
        ppppppplVar20 = (int64_t *******)&local_1c8;
        FUN_01d488d0();
        if ((local_1c0 != '\0') && (local_1c8 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        pvVar13 = _pthread_getspecific(pVar18);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar30 = (double)FUN_013faed0();
        pvVar13 = _pthread_getspecific(pVar18);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013faf20();
        auVar6._4_8_ = (uint64_t)(dVar30 * dVar29) >> 0x20;
        auVar6._0_4_ = (float)(dVar30 * dVar29) + g_023b1614;
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))(auVar6._0_8_);
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
        lVar15 = lVar15 + 1;
        ppppppplVar23 = local_98;
      } while (lVar15 < *(int *)((int64_t)local_98 + 0xc));
    }
    pVar18 = (void*)ppppppplVar23;
    FUN_01d48390();
  }
  if (dVar29 <= g_023934d0) {
    local_60 = (int64_t *******)0x0;
    bVar27 = 0;
    goto LAB_01974e93;
  }
  pvVar13 = _pthread_getspecific(pVar18);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar29 = (double)FUN_01264310();
  if ((dVar29 != 0.0) || (NAN(dVar29))) {
    FUN_01d4ab00();
  }
  else {
    FUN_01d4ab00();
  }
  FUN_01cfbee0();
  local_60 = local_40;
  if (local_40 == (int64_t *******)0x0) {
    local_194 = (uint32_t)CONCAT71((int7)((uint64_t)ppppppplVar20 >> 8),1);
    ppppppplVar20 = (int64_t *******)0x0;
  }
  else {
    ppppppplVar20 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_194 = 0;
      ppppppplVar20 = (int64_t *******)CONCAT71((int7)((uint64_t)ppppppplVar20 >> 8),1);
      if ((local_38 == '\0') || (local_40 == (int64_t *******)0x0)) goto LAB_01974a29;
      FUN_00d50b20();
    }
    ppppppplVar20 = (int64_t *******)CONCAT71((int7)((uint64_t)ppppppplVar20 >> 8),1);
    local_194 = 0;
  }
LAB_01974a29:
  pVar18 = (void*)ppppppplVar20;
  FUN_01989f80();
  ppppppplVar26 = local_40;
  pvVar13 = _pthread_getspecific(pVar18);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01259650();
  (*(*ppppppplVar26)[0x127])();
  if ((local_38 != '\0') && (local_40 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  local_1b8 = local_60;
  local_1b0 = '\0';
  FUN_01d488d0();
  if ((local_1b0 != '\0') && (local_1b8 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  FUN_01e3f820();
  local_198 = *(void*)(this_ptr + 0x110);
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x3e0))();
  pvVar13 = _pthread_getspecific(pVar18);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar29 = (double)FUN_01264380();
  pvVar13 = _pthread_getspecific(pVar18);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar30 = (double)FUN_01264170();
  if ((dVar29 != dVar30) || (NAN(dVar29) || NAN(dVar30))) {
    FUN_01d4ab00();
  }
  else {
    FUN_01d4ab00();
  }
  FUN_01cfcdc0();
  ppppppplVar26 = local_40;
  bVar27 = (byte)ppppppplVar20;
  if (local_60 == local_40) {
    ppppppplVar20 = local_60;
    if (((byte)local_194 & local_60 != (int64_t *******)0x0) == 1) {
      bVar27 = 1;
      if (local_38 != '\0') goto LAB_01974d47;
      bVar27 = 1;
      FUN_00d50b00();
    }
LAB_01974d29:
    if ((local_38 != '\0') && (local_40 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar21 = (undefined7)((uint64_t)ppppppplVar20 >> 8);
    if (local_38 == '\0') {
      if (local_40 != (int64_t *******)0x0) {
        FUN_00d50b00();
      }
      bVar17 = bVar27 & local_60 != (int64_t *******)0x0;
      ppppppplVar20 = (int64_t *******)CONCAT71(uVar21,bVar17);
      bVar27 = 1;
      local_60 = ppppppplVar26;
      if (bVar17 == 1) {
        FUN_00d50b20();
      }
      goto LAB_01974d29;
    }
    bVar17 = bVar27 & local_60 != (int64_t *******)0x0;
    ppppppplVar20 = (int64_t *******)CONCAT71(uVar21,bVar17);
    bVar27 = 1;
    local_60 = local_40;
    if (bVar17 == 1) {
      FUN_00d50b20();
      bVar27 = 1;
    }
  }
LAB_01974d47:
  pVar18 = (void*)ppppppplVar20;
  FUN_01989f80();
  ppppppplVar20 = local_40;
  pvVar13 = _pthread_getspecific(pVar18);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012646c0();
  (*(*ppppppplVar20)[0x127])();
  if ((local_38 != '\0') && (local_40 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  local_1a8 = local_60;
  local_1a0 = '\0';
  FUN_01d488d0();
  if ((local_1a0 != '\0') && (local_1a8 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  FUN_01e3f820();
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x3e0))();
LAB_01974e93:
  FUN_01d48390();
  if ((bVar27 != 0) && (local_60 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_138 != '\0') && (local_130 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  ppppppplVar20 = local_190;
  if (((char)local_188 != '\0') && (local_128 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_180 != '\0') && (local_120 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar10) && (ppppplVar25 != (int64_t *****)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar7) && (local_98 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar9) && (ppppplVar24 != (int64_t *****)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar8) && (local_a0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_70 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (ppppppplVar20 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  if (puVar14 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01316d80
// ============================================================
// Function: FUN_01316d80
// Address: 01316d80
// Size: 2635 bytes
// Class: MUSampledFunction
// String references:
//   "MUSampledFunction"

uint64_t FUN_01316d80(void* param_1,uint64_t param_2,uint64_t param_3,
                      uint64_t param_4)

{
  uint uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  uint8_t uVar4;
  char cVar5;
  uint uVar6;
  void *pvVar7;
  uint64_t uVar8;
  int64_t lVar9;
  undefined7 uVar10;
  byte bVar11;
  void* pVar12;
  int64_t lVar13;
  int64_t **pplVar14;
  int iVar15;
  byte unaff_SIL;
  uint64_t extraout_XMM0_Qa;
  double dVar16;
  double dVar17;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t uVar18;
  int64_t in_stack_ffffffffffffff58;
  char in_stack_ffffffffffffff60;
  uint8_t uVar19;
  int iVar20;
  uint64_t uVar21;
  int iVar22;
  byte local_74;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  uint8_t local_31;
  
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_0124c6e0();
  if (in_stack_ffffffffffffff60 == '\0') {
    if (in_stack_ffffffffffffff58 != 0) {
      lVar9 = in_stack_ffffffffffffff58;
      uVar18 = FUN_00d50b00();
      if ((in_stack_ffffffffffffff60 != '\0') && (lVar9 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      goto LAB_01316e24;
    }
  }
  else {
    uVar18 = extraout_XMM0_Qa;
    if (in_stack_ffffffffffffff58 != 0) {
LAB_01316e24:
      uVar19 = 0;
      uVar8 = 0;
      uVar21 = 0xffffffff;
      iVar22 = 0;
      local_74 = unaff_SIL ^ 1;
      local_31 = 1;
      iVar15 = 0;
      while( true ) {
        if (iVar15 != 0) {
          if (iVar15 < 1) {
            iVar15 = -iVar15;
          }
          else {
            uVar21 = (uint64_t)(uint)((int)uVar21 - iVar15);
            FUN_00d23690(uVar18,iVar15,param_3,param_4,uVar8,uVar19,in_stack_ffffffffffffff58,uVar21
                         ,iVar22);
            iVar22 = iVar22 + iVar15;
            iVar15 = 0;
          }
          uVar21 = CONCAT44(iVar15,(int)uVar21);
        }
        iVar20 = (int)uVar21;
        iVar15 = iVar20 + 1;
        uVar21 = CONCAT44((int)(uVar21 >> 0x20),iVar15);
        if (*(int *)(in_stack_ffffffffffffff58 + 0xc) <= iVar15) break;
        lVar9 = *(int64_t *)(in_stack_ffffffffffffff58 + 0x10);
        uVar8 = *(void*)(lVar9 + 8 + (int64_t)iVar20 * 8);
        pvVar7 = _pthread_getspecific((void*)lVar9);
        pVar12 = (void*)lVar9;
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01327a50();
        lVar9 = local_60;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01316f68;
          }
        }
        else if (local_60 != 0) {
LAB_01316f68:
          local_58 = '\0';
          local_60 = 0;
          local_50 = lVar9;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_48._4_4_ = 0;
          while( true ) {
            if (local_48._4_4_ != 0) {
              if (local_48._4_4_ < 1) {
                iVar15 = -local_48._4_4_;
              }
              else {
                iVar15 = (int)local_48 - local_48._4_4_;
                local_48 = CONCAT44(local_48._4_4_,iVar15);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar15 = 0;
              }
              local_48 = CONCAT44(iVar15,(int)local_48);
            }
            lVar9 = (int64_t)(int)local_48;
            iVar15 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar15);
            if (*(int *)(local_50 + 0xc) <= iVar15) break;
            lVar13 = *(int64_t *)(local_50 + 0x10);
            local_60 = *(int64_t *)(lVar13 + 8 + lVar9 * 8);
            pvVar7 = _pthread_getspecific((void*)lVar13);
            pVar12 = (void*)lVar13;
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfcb0();
            plVar2 = local_70;
            if ((((local_68 == '\0') && (local_70 != (int64_t *)0x0)) &&
                (FUN_00d50b00(), local_68 != '\0')) && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific(pVar12);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfdd0();
            plVar3 = local_70;
            if (local_68 == '\0') {
              if (local_70 != (int64_t *)0x0) {
                FUN_00d50b00();
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_013170a2;
              }
            }
            else {
LAB_013170a2:
              if ((plVar2 != (int64_t *)0x0) && (plVar3 != (int64_t *)0x0)) {
                pvVar7 = _pthread_getspecific(pVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar16 = (double)FUN_013dd200();
                pvVar7 = _pthread_getspecific(pVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar17 = (double)FUN_013dd200();
                if (dVar16 <= dVar17) {
                  pvVar7 = _pthread_getspecific(pVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013dd0b0();
                  pvVar7 = _pthread_getspecific(pVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013dd0b0();
                }
              }
              if (plVar3 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
            if (plVar2 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          lVar9 = local_50;
          FUN_001150f0();
          pVar12 = (void*)lVar9;
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar12);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01328c30();
        lVar9 = local_60;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01317278;
          }
        }
        else if (local_60 != 0) {
LAB_01317278:
          local_58 = '\0';
          local_60 = 0;
          local_50 = lVar9;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_48._4_4_ = 0;
          while( true ) {
            if (local_48._4_4_ != 0) {
              if (local_48._4_4_ < 1) {
                iVar15 = -local_48._4_4_;
              }
              else {
                iVar15 = (int)local_48 - local_48._4_4_;
                local_48 = CONCAT44(local_48._4_4_,iVar15);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar15 = 0;
              }
              local_48 = CONCAT44(iVar15,(int)local_48);
            }
            lVar9 = (int64_t)(int)local_48;
            iVar15 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar15);
            if (*(int *)(local_50 + 0xc) <= iVar15) break;
            local_60 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar9 * 8);
            pvVar7 = _pthread_getspecific((void*)*(int64_t *)(local_50 + 0x10));
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bc240();
            plVar2 = local_70;
            if ((g_027c01a0 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
              g_027af248 = FUN_001016a0();
              g_027af230 = "MUSampledFunction";
              g_027af238 = 0x58;
              g_027af240 = FUN_00101650;
              g_027af250 = 0;
              ram_00000000027af258 = 0;
              g_027af260 = 0;
              ram_00000000027af268 = 0;
              g_027af270 = 0;
              ram_00000000027af278 = 0;
              g_027af280 = 0;
              ram_00000000027af288 = 0;
              g_027af290 = 0;
              ram_00000000027af298 = 0;
              g_027af2a0 = 0;
              ram_00000000027af2a8 = 0;
              g_027af2b0 = 0;
              ram_00000000027af2b8 = 0;
              g_027af2c0 = 0;
              ram_00000000027af2c8 = 0;
              g_027af2d0 = 0;
              ram_00000000027af2d8 = 0;
              g_027af2e0 = 0;
              ram_00000000027af2e8 = 0;
              g_027af2f0 = 0;
              ___cxa_guard_release();
            }
            pplVar14 = (int64_t **)&g_02802688;
            if (plVar2 != (int64_t *)0x0) {
              (**(code **)(*plVar2 + 0x360))();
              cVar5 = FUN_00e85ea0();
              pplVar14 = &local_70;
              if (cVar5 == '\0') {
                pplVar14 = (int64_t **)&g_02802688;
              }
            }
            plVar2 = *pplVar14;
            if (*(char *)(pplVar14 + 1) == '\0') {
              if (plVar2 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(void*)(pplVar14 + 1) = 0;
            }
            if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar2 != (int64_t *)0x0) {
              pvVar7 = _pthread_getspecific((void*)pplVar14);
              if ((pvVar7 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
                lVar9 = plVar2[9];
                if (lVar9 == 0) goto LAB_013173ec;
LAB_013173fc:
                uVar1 = *(uint *)(lVar9 + 0x18);
                pplVar14 = (int64_t **)(uint64_t)uVar1;
                uVar6 = uVar1 + 3;
                if (-1 < (int)uVar1) {
                  uVar6 = uVar1;
                }
                iVar15 = (int)uVar6 >> 2;
              }
              else {
                lVar9 = *(int64_t *)(plVar2[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0x48);
                if (lVar9 != 0) goto LAB_013173fc;
LAB_013173ec:
                iVar15 = 0;
              }
              uVar4 = local_31;
              if (iVar15 < 1) {
                uVar4 = 0;
              }
              bVar11 = 0 < iVar15 | local_74;
              if (bVar11 == 0) {
                pvVar7 = _pthread_getspecific
                                   ((void*)CONCAT71((int7)((uint64_t)pplVar14 >> 8),bVar11)
                                   );
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_00c8e690();
                plVar2 = local_70;
                if ((((local_68 == '\0') && (local_70 != (int64_t *)0x0)) &&
                    (FUN_00d50b00(), local_68 != '\0')) && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00c92170();
                FUN_00c92160();
                ___bzero();
                FUN_013eb890();
                uVar4 = local_31;
                if (plVar2 != (int64_t *)0x0) {
                  FUN_00d50b20();
                  uVar4 = local_31;
                }
              }
              local_31 = uVar4;
              FUN_00d50b20();
            }
          }
          lVar9 = local_50;
          FUN_0131c810();
          pVar12 = (void*)lVar9;
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar12);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar15 = FUN_01326de0();
        uVar18 = extraout_XMM0_Qa_00;
        if (iVar15 == 3) {
          pvVar7 = _pthread_getspecific(pVar12);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar5 = FUN_0134a7d0();
          uVar18 = extraout_XMM0_Qa_01;
          if (cVar5 == '\0') {
            pvVar7 = _pthread_getspecific(pVar12);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar18 = FUN_01328c30();
            lVar9 = local_60;
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
                if ((local_58 != '\0') && (local_60 != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_013176c2;
              }
            }
            else if (local_60 != 0) {
LAB_013176c2:
              local_58 = '\0';
              local_60 = 0;
              local_50 = lVar9;
              local_48 = 0xffffffff;
              local_40 = 0;
              while( true ) {
                lVar9 = (int64_t)(int)local_48;
                iVar15 = (int)local_48 + 1;
                local_48 = CONCAT44(local_48._4_4_,iVar15);
                if (*(int *)(local_50 + 0xc) <= iVar15) break;
                lVar13 = *(int64_t *)(local_50 + 0x10);
                local_60 = *(int64_t *)(lVar13 + 8 + lVar9 * 8);
                pvVar7 = _pthread_getspecific((void*)lVar13);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014bc000();
                plVar2 = local_70;
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                uVar4 = local_31;
                if (plVar2 == (int64_t *)0x0) {
                  uVar4 = 0;
                }
                bVar11 = plVar2 != (int64_t *)0x0 | local_74;
                if (bVar11 == 0) {
                  pvVar7 = _pthread_getspecific
                                     ((void*)CONCAT71((int7)((uint64_t)lVar13 >> 8),bVar11)
                                     );
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0134a780();
                }
                else {
                  local_31 = uVar4;
                }
                if (local_48._4_4_ != 0) {
                  if (local_48._4_4_ < 1) {
                    iVar15 = -local_48._4_4_;
                  }
                  else {
                    iVar15 = (int)local_48 - local_48._4_4_;
                    local_48._4_4_ = (int)((uint64_t)local_48 >> 0x20);
                    local_48 = CONCAT44(local_48._4_4_,iVar15);
                    FUN_00d23690();
                    local_40 = local_40 + local_48._4_4_;
                    iVar15 = 0;
                  }
                  local_48 = CONCAT44(iVar15,(int)local_48);
                }
              }
              FUN_0131c8b0();
              uVar18 = FUN_00d50b20();
            }
          }
        }
        iVar15 = (int)(uVar21 >> 0x20);
      }
      FUN_00115190();
      uVar8 = FUN_00d50b20();
      uVar10 = (undefined7)((uint64_t)uVar8 >> 8);
      goto LAB_0131781d;
    }
  }
  uVar10 = (undefined7)((uint64_t)uVar8 >> 8);
  local_31 = 1;
LAB_0131781d:
  return CONCAT71(uVar10,local_31) & 0xffffffffffffff01;
}



// ============================================================
// 01970060
// ============================================================
// Function: FUN_01970060
// Address: 01970060
// Size: 3415 bytes
// Class: MUSampledFunction

void FUN_01970060(void* param_1,char param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  byte bVar11;
  byte bVar12;
  void *pvVar13;
  void*puVar14;
  void*puVar15;
  void*arg1;
  int64_t this_ptr;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint64_t uVar20;
  double dVar21;
  double dVar22;
  uint64_t uVar23;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar25 [16];
  double dVar24;
  uint64_t extraout_XMM0_Qb_02;
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
  uint8_t auVar50 [16];
  uint8_t auVar51 [16];
  float fVar52;
  float fStack_1c4;
  uint8_t local_1c8 [16];
  float fStack_1b4;
  uint8_t local_1b8 [16];
  uint8_t local_1a8 [48];
  float local_178;
  uint32_t uStack_174;
  uint32_t uStack_170;
  uint32_t uStack_16c;
  uint8_t local_148 [8];
  uint32_t uStack_140;
  uint32_t uStack_13c;
  float local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  int64_t *local_58;
  char local_50;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_05;
  
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  bVar11 = FUN_012686a0();
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  bVar12 = FUN_012686d0();
  if ((bVar12 | bVar11) == 1) {
    FUN_01989f80();
    if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    uVar20 = FUN_01968ab0();
    uStack_80 = extraout_XMM0_Qb;
    local_88 = (uint8_t  [8])uVar20;
    auVar33 = _local_88;
    pvVar13 = _pthread_getspecific(param_1);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar21 = (double)FUN_0125a280();
    pvVar13 = _pthread_getspecific(param_1);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar22 = (double)FUN_01264170();
    fVar16 = (float)(**(code **)(*local_58 + 0x938))(dVar21);
    uVar23 = (**(code **)(*local_58 + 0x938))();
    local_178 = (float)uVar23;
    uStack_174 = (uint32_t)((uint64_t)uVar23 >> 0x20);
    uStack_170 = (uint32_t)extraout_XMM0_Qb_00;
    uStack_16c = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
    lVar1 = *(int64_t *)(this_ptr + 0x178);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    auVar40._0_8_ = (**(code **)(*local_58 + 0xc38))();
    auVar40._8_8_ = extraout_XMM0_Qb_01;
    auVar25._4_12_ = auVar40._4_12_;
    auVar25._0_4_ = (float)auVar40._0_8_ + g_023b8c38;
    uVar23 = (**(code **)(*local_58 + 0xbf8))(auVar25._0_8_);
    local_a8 = (float)uVar23;
    uStack_a4 = (uint)((uint64_t)uVar23 >> 0x20);
    uStack_a0 = (uint)extraout_XMM0_Qb_02;
    uStack_9c = (uint)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
    lVar2 = *(int64_t *)(this_ptr + 0x178);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*local_58 + 0xc38))();
    fVar17 = (float)(**(code **)(*local_58 + 0xbf8))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    fVar17 = (float)((uint)(local_a8 - fVar17) & g_02390140);
    uStack_a4 = uStack_a4 & _UNK_02390144;
    uStack_a0 = uStack_a0 & _UNK_02390148;
    uStack_9c = uStack_9c & _UNK_0239014c;
    local_88._4_4_ = (uint32_t)((uint64_t)uVar20 >> 0x20);
    uStack_80._4_4_ = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
    local_88._0_4_ = (uint32_t)uVar20;
    if (bVar11 != 0) {
      pvVar13 = _pthread_getspecific(param_1);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar24 = (double)FUN_01268240();
      fVar18 = (float)(**(code **)(*local_58 + 0x938))(dVar21 + dVar24);
      pvVar13 = _pthread_getspecific(param_1);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266180();
      fVar18 = fVar18 - fVar16;
      uStack_80._0_4_ = (uint32_t)extraout_XMM0_Qb;
      fVar52 = (float)local_88._0_4_ + fVar18;
      auVar6._4_4_ = local_88._4_4_;
      auVar6._0_4_ = local_88._4_4_;
      auVar6._8_4_ = uStack_80._4_4_;
      auVar6._12_4_ = uStack_80._4_4_;
      auVar26._4_12_ = auVar6._4_12_;
      auVar26._0_4_ = (float)local_88._4_4_ - fVar17;
      auVar48._4_4_ = local_88._4_4_;
      auVar48._0_4_ = fVar52;
      auVar48._8_4_ = (uint32_t)uStack_80;
      auVar48._12_4_ = uStack_80._4_4_;
      local_1a8._0_16_ = insertps(auVar48,auVar26,0x10);
      auVar27._0_4_ = (float)local_88._4_4_ + fVar17;
      auVar27._4_12_ = auVar26._4_12_;
      auVar39._4_4_ = local_88._4_4_;
      auVar39._0_4_ = fVar52;
      auVar39._8_4_ = (uint32_t)uStack_80;
      auVar39._12_4_ = uStack_80._4_4_;
      auVar40 = insertps(auVar39,auVar27,0x10);
      fStack_1c4 = auVar40._4_4_;
      if (*(int64_t *)(this_ptr + 0x180) == 0) {
        local_148._4_4_ = local_88._4_4_;
        local_148._0_4_ = fVar52;
        uStack_140 = (uint32_t)uStack_80;
        uStack_13c = uStack_80._4_4_;
        puVar14 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        puVar15 = &g_02680400;
        *puVar14 = &g_02680400;
        *(void*)((int64_t)puVar14 + 0xc) = 0;
        puVar14[6] = 0;
        puVar14[7] = 0;
        *(void*)((int64_t)puVar14 + 0x39) = 0;
        *(void*)((int64_t)puVar14 + 0x41) = 0;
        (*g_02680418)();
        lVar1 = *(int64_t *)(this_ptr + 0x180);
        *(void**)(this_ptr + 0x180) = puVar14;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        FUN_01d38830();
        auVar41 = ZEXT416((uint)(g_02390d00 + fVar52));
        fVar19 = g_02390d00 + fVar52;
        while ((float)local_88._0_4_ < fVar19) {
          auVar28._4_12_ = auVar41._4_12_;
          auVar28._0_4_ = (auVar41._0_4_ - (float)local_88._0_4_) / fVar18;
          fVar19 = (float)_powf(auVar28._0_8_);
          auVar7._4_4_ = local_88._4_4_;
          auVar7._0_4_ = local_88._4_4_;
          auVar7._8_4_ = uStack_80._4_4_;
          auVar7._12_4_ = uStack_80._4_4_;
          auVar42._4_12_ = auVar7._4_12_;
          auVar42._0_4_ = (float)local_88._4_4_ - fVar19 * fVar17;
          auVar40 = insertps(auVar41,auVar42,0x10);
          FUN_01d38830(auVar40._0_8_);
          auVar41._0_4_ = auVar41._0_4_ + g_023b1608;
          auVar41._4_12_ = auVar28._4_12_;
          fVar19 = auVar41._0_4_;
        }
        FUN_01d38830();
        param_1 = (void*)puVar15;
        auVar43 = ZEXT416((uint)(g_02390124 + (float)local_88._0_4_));
        fVar19 = g_02390124 + (float)local_88._0_4_;
        while (fVar19 < fVar52) {
          auVar29._4_12_ = auVar43._4_12_;
          auVar29._0_4_ = (auVar43._0_4_ - (float)local_88._0_4_) / fVar18;
          auVar30._0_8_ = _powf(auVar29._0_8_);
          auVar30._8_8_ = extraout_XMM0_Qb_03;
          auVar31._4_12_ = auVar30._4_12_;
          auVar31._0_4_ = (float)auVar30._0_8_ * fVar17 + (float)local_88._4_4_;
          insertps(auVar43,auVar31,0x10);
          FUN_01d38830();
          param_1 = (void*)puVar15;
          auVar43._0_4_ = auVar43._0_4_ + g_02390d34;
          auVar43._4_12_ = auVar29._4_12_;
          fVar19 = auVar43._0_4_;
        }
        FUN_01d38830();
      }
    }
    if (bVar12 != 0) {
      fVar18 = (float)(**(code **)(*local_58 + 0x938))(dVar22 + dVar21);
      pvVar13 = _pthread_getspecific(param_1);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar24 = (double)FUN_01268260();
      fVar52 = (float)(**(code **)(*local_58 + 0x938))((dVar22 + dVar21) - dVar24);
      pvVar13 = _pthread_getspecific(param_1);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012661f0();
      fVar16 = (local_178 - fVar16) + (float)local_88._0_4_;
      fVar18 = fVar18 - fVar52;
      fVar52 = fVar16 - fVar18;
      auVar8._4_4_ = local_88._4_4_;
      auVar8._0_4_ = local_88._4_4_;
      auVar8._8_4_ = uStack_80._4_4_;
      auVar8._12_4_ = uStack_80._4_4_;
      auVar44._4_12_ = auVar8._4_12_;
      auVar44._0_4_ = (float)local_88._4_4_ - fVar17;
      auVar51._4_4_ = uStack_174;
      auVar51._0_4_ = fVar52;
      auVar51._8_4_ = uStack_170;
      auVar51._12_4_ = uStack_16c;
      _local_148 = insertps(auVar51,auVar44,0x10);
      auVar45._0_4_ = (float)local_88._4_4_ + fVar17;
      auVar45._4_12_ = auVar44._4_12_;
      auVar49._4_4_ = uStack_174;
      auVar49._0_4_ = fVar52;
      auVar49._8_4_ = uStack_170;
      auVar49._12_4_ = uStack_16c;
      auVar40 = insertps(auVar49,auVar45,0x10);
      fStack_1b4 = auVar40._4_4_;
      if (*(int64_t *)(this_ptr + 0x188) == 0) {
        puVar14 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar14 = &g_02680400;
        *(void*)((int64_t)puVar14 + 0xc) = 0;
        puVar14[6] = 0;
        puVar14[7] = 0;
        *(void*)((int64_t)puVar14 + 0x39) = 0;
        *(void*)((int64_t)puVar14 + 0x41) = 0;
        (*g_02680418)();
        lVar1 = *(int64_t *)(this_ptr + 0x188);
        *(void**)(this_ptr + 0x188) = puVar14;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        FUN_01d38830();
        auVar50 = ZEXT416((uint)(g_02390124 + fVar52));
        fVar19 = g_02390124 + fVar52;
        while (auVar10._4_4_ = uStack_174, auVar10._0_4_ = fVar16, auVar10._8_4_ = uStack_170,
              auVar10._12_4_ = uStack_16c, fVar19 < fVar16) {
          auVar32._4_12_ = auVar10._4_12_;
          auVar32._0_4_ = (fVar16 - auVar50._0_4_) / fVar18;
          fVar19 = (float)_powf(auVar32._0_8_);
          auVar9._4_4_ = local_88._4_4_;
          auVar9._0_4_ = local_88._4_4_;
          auVar9._8_4_ = uStack_80._4_4_;
          auVar9._12_4_ = uStack_80._4_4_;
          auVar46._4_12_ = auVar9._4_12_;
          auVar46._0_4_ = (float)local_88._4_4_ - fVar19 * fVar17;
          auVar40 = insertps(auVar50,auVar46,0x10);
          FUN_01d38830(auVar40._0_8_);
          auVar50._0_4_ = auVar50._0_4_ + g_02390d34;
          fVar19 = auVar50._0_4_;
        }
        auVar33 = blendps(auVar33,auVar10,1);
        FUN_01d38830(auVar33._0_8_);
        auVar33 = ZEXT416((uint)(g_02390d00 + fVar16));
        fVar19 = g_02390d00 + fVar16;
        while (fVar52 < fVar19) {
          auVar4._4_4_ = uStack_174;
          auVar4._0_4_ = fVar16;
          auVar4._8_4_ = uStack_170;
          auVar4._12_4_ = uStack_16c;
          auVar34._4_12_ = auVar4._4_12_;
          auVar34._0_4_ = (fVar16 - auVar33._0_4_) / fVar18;
          auVar35._0_8_ = _powf(auVar34._0_8_);
          auVar35._8_8_ = extraout_XMM0_Qb_04;
          auVar36._4_12_ = auVar35._4_12_;
          auVar36._0_4_ = (float)auVar35._0_8_ * fVar17 + (float)local_88._4_4_;
          insertps(auVar33,auVar36,0x10);
          FUN_01d38830();
          auVar33._0_4_ = auVar33._0_4_ + g_023b1608;
          fVar19 = auVar33._0_4_;
        }
        FUN_01d38830();
      }
      FUN_01d48b40();
    }
    FUN_01d48b30();
    FUN_01d48b10();
    FUN_01d48b40();
    FUN_0196a1c0();
    if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x188);
    if (lVar1 != 0) {
      plVar3 = (int64_t *)*arg1;
      FUN_00d50b00();
      (**(code **)(*plVar3 + 0x3a8))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = *(int64_t *)(this_ptr + 0x180);
    if (lVar1 != 0) {
      plVar3 = (int64_t *)*arg1;
      FUN_00d50b00();
      (**(code **)(*plVar3 + 0x3a8))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01d48b40();
    FUN_01969e40();
    if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x188);
    if (lVar1 != 0) {
      plVar3 = (int64_t *)*arg1;
      FUN_00d50b00();
      (**(code **)(*plVar3 + 0x3a8))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = *(int64_t *)(this_ptr + 0x180);
    if (lVar1 != 0) {
      plVar3 = (int64_t *)*arg1;
      FUN_00d50b00();
      (**(code **)(*plVar3 + 0x3a8))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01d48b40();
    FUN_01969e40();
    if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x180) != 0) {
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    }
    if (*(int64_t *)(this_ptr + 0x188) != 0) {
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    }
    FUN_01d48b10();
    FUN_01d48b40();
    if (param_2 != '\0') {
      if (*(int64_t *)(this_ptr + 0x180) != 0) {
        FUN_01968c50();
        fVar16 = (fStack_1c4 + (float)local_1a8._4_4_) * g_0239011c;
        auVar37._0_8_ = _logf();
        auVar37._8_8_ = extraout_XMM0_Qb_05;
        auVar38._4_12_ = auVar37._4_12_;
        auVar38._0_4_ = (((float)auVar37._0_8_ / g_0241c6f0) * fVar17) / g_02394298 + fVar16;
        auVar33 = insertps(local_1a8._0_16_,auVar38,0x10);
        FUN_01a84670(1,auVar33._0_8_);
      }
      if (*(int64_t *)(this_ptr + 0x188) != 0) {
        FUN_01968c50();
        fVar16 = (fStack_1b4 + (float)local_148._4_4_) * g_0239011c;
        fVar18 = (float)_logf();
        auVar5._4_4_ = uStack_a4;
        auVar5._0_4_ = fVar17;
        auVar5._8_4_ = uStack_a0;
        auVar5._12_4_ = uStack_9c;
        auVar47._4_12_ = auVar5._4_12_;
        auVar47._0_4_ = (fVar17 * (fVar18 / g_0241c6f0)) / g_02394298 + fVar16;
        auVar33 = insertps(_local_148,auVar47,0x10);
        FUN_01a84670(auVar33._0_8_,0);
      }
    }
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 001001a0
// ============================================================
// Function: FUN_001001a0
// Address: 001001a0
// Size: 3335 bytes
// Class: MUSampledFunction
// String references:
//   "MUSampledFunction"

void FUN_001001a0(void* param_1,uint32_t param_2)

{
  char cVar1;
  uint32_t uVar2;
  void *pvVar3;
  code *pcVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int iVar8;
  void* pVar9;
  void*puVar11;
  code *pcVar12;
  void*puVar13;
  bool bVar14;
  int64_t this_ptr;
  code *pcVar15;
  code *pcVar16;
  uint uVar17;
  uint64_t uVar18;
  int iVar19;
  int64_t **pplVar20;
  double dVar21;
  code *local_118;
  uint8_t local_110;
  int64_t *local_d8;
  uint8_t local_d0;
  undefined7 uStack_cf;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  double local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  char local_98;
  code *local_90;
  code *local_88;
  uint32_t local_7c;
  code *local_78;
  char local_69;
  code *local_68;
  char local_59;
  uint8_t local_58 [8];
  code *local_50;
  uint8_t local_48 [8];
  int64_t *local_40;
  char local_31;
  int iVar10;
  
  local_40 = (int64_t *)CONCAT44(local_40._4_4_,param_2);
  FUN_013fe9d0();
  pcVar16 = local_50;
  if ((local_48[0] != (code)0x0) && (local_50 != 0x0)) {
    FUN_00d50b20();
  }
  if (pcVar16 == 0x0) {
    return;
  }
  pplVar20 = &local_a0;
  FUN_013fe9d0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126ef70();
  pcVar16 = local_50;
  if (local_48[0] == (code)0x0) {
    if (((local_50 != 0x0) && (FUN_00d50b00(), local_48[0] != (code)0x0)) &&
       (local_50 != 0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48[0] = (code)0x0;
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (pcVar16 == 0x0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124df30();
  pcVar12 = local_50;
  if (local_48[0] == (code)0x0) {
    if (local_50 == 0x0) goto LAB_00100dd0;
    FUN_00d50b00();
    if ((local_48[0] != (code)0x0) && (local_50 != 0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_50 == 0x0) goto LAB_00100dd0;
  local_78 = pcVar12;
  uVar2 = FUN_00e7dff0();
  local_90 = CONCAT44(local_90._4_4_,uVar2);
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01328c30();
  FUN_00d23310();
  pcVar15 = local_50;
  pcVar12 = local_48;
  local_58[0] = local_48[0];
  pcVar4 = local_58;
  if (local_48[0] != (code)0x0) {
    pcVar4 = pcVar12;
  }
  *pcVar4 = (code)0x0;
  if ((local_48[0] != (code)0x0) && (pcVar15 != 0x0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((void*)pcVar12);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc240();
  plVar7 = local_c0;
  if (local_b8 == '\0') {
    if (local_c0 == (int64_t *)0x0) {
      local_a0 = (int64_t *)0x0;
      local_98 = '\x01';
      plVar7 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      local_a0 = plVar7;
      local_98 = '\x01';
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_a0 = local_c0;
    local_98 = '\x01';
    local_b8 = '\0';
  }
  if ((local_58[0] != (code)0x0) && (pcVar15 != 0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (CONCAT71(uStack_cf,local_d0) != 0)) {
    FUN_00d50b20();
  }
  if ((g_027c01a0 == '\0') && (iVar19 = ___cxa_guard_acquire(), iVar19 != 0)) {
    local_68 = pcVar16;
    g_027af248 = FUN_001016a0();
    g_027af230 = "MUSampledFunction";
    g_027af238 = 0x58;
    pcVar12 = FUN_00101650;
    g_027af240 = FUN_00101650;
    g_027af250 = 0;
    ram_00000000027af258 = 0;
    g_027af260 = 0;
    ram_00000000027af268 = 0;
    g_027af270 = 0;
    ram_00000000027af278 = 0;
    g_027af280 = 0;
    ram_00000000027af288 = 0;
    g_027af290 = 0;
    ram_00000000027af298 = 0;
    g_027af2a0 = 0;
    ram_00000000027af2a8 = 0;
    g_027af2b0 = 0;
    ram_00000000027af2b8 = 0;
    g_027af2c0 = 0;
    ram_00000000027af2c8 = 0;
    g_027af2d0 = 0;
    ram_00000000027af2d8 = 0;
    g_027af2e0 = 0;
    ram_00000000027af2e8 = 0;
    g_027af2f0 = 0;
    ___cxa_guard_release();
    pcVar16 = local_68;
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_0010046a:
    pplVar20 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0010046a;
  }
  pVar9 = (void*)pcVar12;
  plVar7 = *pplVar20;
  cVar1 = *(char *)(pplVar20 + 1);
  bVar14 = plVar7 != (int64_t *)0x0 && cVar1 != '\0';
  if (plVar7 != (int64_t *)0x0 && cVar1 != '\0') {
    FUN_00d50b00();
LAB_00100515:
    local_d8 = local_a0;
    pvVar3 = _pthread_getspecific(pVar9);
    if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
      if (((double)plVar7[10] == g_023934d0) && (!NAN((double)plVar7[10]) && !NAN(g_023934d0)))
      goto LAB_0010054f;
    }
    else if ((*(double *)(plVar7[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4] + 0x50) ==
              g_023934d0) &&
            (!NAN(*(double *)(plVar7[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4] + 0x50)) &&
             !NAN(g_023934d0))) {
LAB_0010054f:
      pvVar3 = _pthread_getspecific(pVar9);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb920();
      local_88 = local_50;
      pcVar12 = 0x0;
      plVar6 = (int64_t *)0x0;
      if (local_50 == 0x0) goto LAB_00100607;
      if (((local_48[0] == (code)0x0) && (FUN_00d50b00(), local_48[0] != (code)0x0)) &&
         (local_50 != 0x0)) {
        FUN_00d50b20();
      }
      iVar19 = *(int *)(local_88 + 0x18);
      iVar8 = iVar19 + 3;
      if (-1 < iVar19) {
        iVar8 = iVar19;
      }
      pcVar12 = (uint64_t)(uint)(iVar8 >> 2);
      local_b0 = (double)(iVar8 >> 2) / g_023934d0;
      local_7c = 0;
      goto LAB_0010061e;
    }
  }
  else {
    local_d8 = local_a0;
    if ((local_a0 != (int64_t *)0x0) && (plVar7 == (int64_t *)0x0)) goto LAB_00100d96;
    plVar6 = local_a0;
    if (plVar7 != (int64_t *)0x0) goto LAB_00100515;
LAB_00100607:
    local_b0 = 0.0;
    local_7c = (uint32_t)CONCAT71((int7)((uint64_t)plVar6 >> 8),1);
    local_88 = 0x0;
LAB_0010061e:
    pvVar3 = _pthread_getspecific((void*)pcVar12);
    pcVar15 = pcVar16;
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pcVar15 = *(code **)(pcVar16 + ((uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4) * 8);
    }
    dVar21 = (double)(**(code **)(*(int64_t *)pcVar15 + 0x398))();
    if ((((char)local_40 != '\0') ||
        (((double)((uint64_t)local_90 & 0xffffffff) / g_023934c0) * g_023934c8 + g_02390108
         < dVar21 - local_b0)) &&
       (uVar17 = (uint)((dVar21 - local_b0) * g_023934d0), local_68 = pcVar16, 0 < (int)uVar17)) {
      local_69 = bVar14;
      local_31 = cVar1;
      if ((char)local_7c == '\0') {
        FUN_00c8e710();
        pcVar16 = local_50;
        if ((((local_48[0] == (code)0x0) && (local_50 != 0x0)) &&
            (FUN_00d50b00(), local_48[0] != (code)0x0)) && (local_50 != 0x0)) {
          FUN_00d50b20();
        }
        FUN_00c92170();
        uVar2 = FUN_00c92160();
        local_59 = pcVar16 != 0x0;
        local_90 = pcVar16;
        FUN_00c92190(uVar2,*(void*)(local_88 + 0x18));
      }
      else {
        FUN_00c8e710();
        pcVar16 = local_50;
        if (((local_48[0] == (code)0x0) && (local_50 != 0x0)) &&
           ((FUN_00d50b00(), local_48[0] != (code)0x0 && (local_50 != 0x0)))) {
          FUN_00d50b20();
        }
        FUN_00c92170();
        FUN_00c92160();
        local_90 = pcVar16;
        local_59 = pcVar16 != 0x0;
      }
      pvVar3 = _pthread_getspecific((void*)pcVar12);
      pcVar16 = local_68;
      if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), pcVar16 = local_68, lVar5 != 0)) {
        pcVar12 = local_68;
        pcVar16 = *(code **)(local_68 + ((uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4) * 8);
      }
      pVar9 = (void*)pcVar12;
      dVar21 = (double)(**(code **)(*(int64_t *)pcVar16 + 0x370))();
      iVar19 = (int)(dVar21 / g_023934d0);
      if (*(int64_t *)(this_ptr + 0x10) == 0) {
        FUN_00c8e690();
        pcVar16 = local_50;
        if ((((local_48[0] == (code)0x0) && (local_50 != 0x0)) &&
            (FUN_00d50b00(), local_48[0] != (code)0x0)) && (local_50 != 0x0)) {
          FUN_00d50b20();
        }
        FUN_00c92170();
        FUN_00c92160();
        pcVar12 = *(code **)(this_ptr + 0x10);
        if (pcVar12 == pcVar16) {
          if (pcVar16 != 0x0) {
            FUN_00d50b20();
          }
        }
        else {
          *(code **)(this_ptr + 0x10) = pcVar16;
          if (pcVar12 != 0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        iVar8 = *(int *)(*(int64_t *)(this_ptr + 0x10) + 0x18);
        iVar10 = iVar8 + 3;
        if (-1 < iVar8) {
          iVar10 = iVar8;
        }
        pVar9 = iVar10 >> 2;
        if ((int)pVar9 < iVar19) {
          FUN_00c8e340(pVar9,0);
        }
      }
      local_40 = plVar7;
      pvVar3 = _pthread_getspecific(pVar9);
      pcVar16 = local_68;
      if ((pvVar3 != (void *)0x0) &&
         (local_40 = plVar7, lVar5 = FUN_00e8b990(), pcVar16 = local_68, lVar5 != 0)) {
        pcVar16 = *(code **)(local_68 + ((uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4) * 8);
      }
      local_40 = plVar7;
      dVar21 = (double)(**(code **)(*(int64_t *)pcVar16 + 0x370))();
      dVar21 = local_b0 * dVar21;
      local_b0 = (double)(int64_t)iVar19;
      lVar5 = (int64_t)(int)dVar21;
      uVar18 = (uint64_t)uVar17;
      local_a8 = plVar7;
      do {
        local_118 = local_68;
        local_110 = 0;
        FUN_001014b0(*(void*)(*(int64_t *)(this_ptr + 0x10) + 0x10),&local_118,lVar5,iVar19
                    );
        pcVar16 = local_90;
        uVar2 = (**(code **)(g_02786500 + 0x10))();
        local_40 = (int64_t *)CONCAT44(local_40._4_4_,uVar2);
        iVar8 = *(int *)(pcVar16 + 0x18);
        FUN_00c8e340(uVar2,1);
        cVar1 = local_31;
        *(void*)(*(int64_t *)(pcVar16 + 0x10) + (int64_t)iVar8) = local_40._0_4_;
        lVar5 = lVar5 + (int64_t)local_b0;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
      plVar7 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void*)(plVar7 + 7) = 0;
      *(void*)((int64_t)plVar7 + 0x3c) = 0;
      *(void*)(plVar7 + 8) = 0;
      pVar9 = 0x25dc9e8;
      *plVar7 = (int64_t)&g_025dc9e8;
      plVar7[9] = 0;
      plVar7[10] = 0;
      (*g_025dca00)();
      if (local_a8 == plVar7) {
        if (cVar1 == '\0') {
          cVar1 = '\x01';
          local_40 = local_a8;
        }
        else {
          FUN_00d50b20();
          local_40 = local_a8;
        }
      }
      else {
        cVar1 = '\x01';
        local_40 = plVar7;
        if (local_69 != '\0') {
          FUN_00d50b20();
        }
      }
      local_31 = cVar1;
      pvVar3 = _pthread_getspecific(pVar9);
      if ((pvVar3 != (void *)0x0) && (local_31 = cVar1, lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pVar9 = (void*)local_40;
      }
      local_31 = cVar1;
      FUN_013eb950(SUB84(g_023934d0,0));
      local_31 = cVar1;
      pvVar3 = _pthread_getspecific(pVar9);
      if ((pvVar3 != (void *)0x0) && (local_31 = cVar1, lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pVar9 = (void*)local_40;
      }
      FUN_013eb890();
      pvVar3 = _pthread_getspecific(pVar9);
      if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pVar9 = (void*)local_78;
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      FUN_00db3260();
      if ((local_48[0] != (code)0x0) && (local_50 != 0x0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(pVar9);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01328c30();
      FUN_00d23310();
      pcVar16 = local_50;
      puVar11 = &local_d0;
      puVar13 = local_48;
      if (local_48[0] == (code)0x0) {
        puVar13 = puVar11;
      }
      local_d0 = local_48[0];
      *puVar13 = 0;
      if ((local_48[0] != (code)0x0) && (pcVar16 != 0x0)) {
        FUN_00d50b20();
      }
      pVar9 = (void*)puVar11;
      pvVar3 = _pthread_getspecific(pVar9);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc1d0();
      if ((local_d0 != (code)0x0) && (pcVar16 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar7 = local_40;
      pvVar3 = _pthread_getspecific(pVar9);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      FUN_00db3270();
      if ((local_48[0] != (code)0x0) && (local_50 != 0x0)) {
        FUN_00d50b20();
      }
      if (local_59 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((char)local_7c == '\0') {
      FUN_00d50b20();
    }
  }
LAB_00100d96:
  if ((cVar1 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_d8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00100dd0:
  FUN_00d50b20();
  return;
}



// ============================================================
// 012649d0
// ============================================================
// Function: FUN_012649d0
// Address: 012649d0
// Size: 3774 bytes
// Class: MUSampledFunction

void* FUN_012649d0(int64_t *param_1,int param_2)

{
  uint32_t uVar1;
  double dVar2;
  void*puVar3;
  float fVar4;
  bool bVar5;
  code *pcVar6;
  bool bVar7;
  int64_t *plVar8;
  void *pvVar9;
  int64_t lVar10;
  void*puVar11;
  void* pVar12;
  int64_t *plVar13;
  int64_t lVar14;
  int64_t *plVar15;
  int64_t *plVar16;
  int64_t arg1;
  void*this_ptr;
  void*puVar17;
  float fVar18;
  char local_9c;
  int local_80;
  int64_t local_60;
  char local_58;
  char local_50;
  
  plVar13 = param_1;
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_0006e3a0();
  (**(code **)(*plVar8 + 0x18))();
  if (param_2 == 0) {
    pvVar9 = _pthread_getspecific((void*)plVar13);
    plVar15 = plVar8;
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar13 = plVar8;
      plVar15 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
    dVar2 = *(double *)(arg1 + 0xe8);
    if (((double)plVar15[0x1d] != dVar2) || (NAN((double)plVar15[0x1d]) || NAN(dVar2))) {
      FUN_00d64850();
      plVar15[0x1d] = (int64_t)dVar2;
      FUN_00d64910();
    }
  }
  pvVar9 = _pthread_getspecific((void*)plVar13);
  plVar15 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar13 = plVar8;
    plVar15 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  dVar2 = *(double *)(arg1 + 0xf0);
  if (((double)plVar15[0x1e] != dVar2) || (NAN((double)plVar15[0x1e]) || NAN(dVar2))) {
    FUN_00d64850();
    plVar15[0x1e] = (int64_t)dVar2;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((void*)plVar13);
  plVar15 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar13 = plVar8;
    plVar15 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  fVar18 = *(float *)(arg1 + 0x110);
  if ((*(float *)(plVar15 + 0x22) != fVar18) || (NAN(*(float *)(plVar15 + 0x22)) || NAN(fVar18))) {
    FUN_00d64850();
    *(float *)(plVar15 + 0x22) = fVar18;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((void*)plVar13);
  plVar15 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar13 = plVar8;
    plVar15 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  fVar18 = *(float *)(arg1 + 0x98);
  if ((*(float *)(plVar15 + 0x13) != fVar18) || (NAN(*(float *)(plVar15 + 0x13)) || NAN(fVar18))) {
    FUN_00d64850();
    *(float *)(plVar15 + 0x13) = fVar18;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((void*)plVar13);
  plVar15 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar13 = plVar8;
    plVar15 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  fVar18 = *(float *)(arg1 + 0x9c);
  if ((*(float *)((int64_t)plVar15 + 0x9c) != fVar18) ||
     (NAN(*(float *)((int64_t)plVar15 + 0x9c)) || NAN(fVar18))) {
    FUN_00d64850();
    *(float *)((int64_t)plVar15 + 0x9c) = fVar18;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((void*)plVar13);
  plVar15 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar13 = plVar8;
    plVar15 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  uVar1 = *(void*)(arg1 + 0x13c);
  FUN_00d64850();
  *(void*)((int64_t)plVar15 + 0x13c) = uVar1;
  FUN_00d64910();
  pvVar9 = _pthread_getspecific((void*)plVar13);
  plVar15 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar13 = plVar8;
    plVar15 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  dVar2 = *(double *)(arg1 + 0xb8);
  if (((double)plVar15[0x17] != dVar2) || (NAN((double)plVar15[0x17]) || NAN(dVar2))) {
    FUN_00d64850();
    plVar15[0x17] = (int64_t)dVar2;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((void*)plVar13);
  plVar15 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar13 = plVar8;
    plVar15 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  dVar2 = *(double *)(arg1 + 0xc0);
  if (((double)plVar15[0x18] != dVar2) || (NAN((double)plVar15[0x18]) || NAN(dVar2))) {
    FUN_00d64850();
    plVar15[0x18] = (int64_t)dVar2;
    FUN_00d64910();
  }
  plVar15 = *(int64_t **)(arg1 + 0xe0);
  if (plVar15 == (int64_t *)0x0) {
    puVar17 = (void*)0x0;
    bVar5 = false;
    lVar10 = *(int64_t *)(arg1 + 0xd0);
    plVar15 = plVar13;
  }
  else {
    FUN_00d50b00();
    pcVar6 = g_025c86d8;
    local_80 = -1;
    bVar5 = false;
    puVar17 = (void*)0x0;
    while( true ) {
      lVar10 = (int64_t)local_80;
      local_80 = local_80 + 1;
      if (*(int *)((int64_t)plVar15 + 0xc) <= local_80) break;
      lVar14 = plVar15[2];
      lVar10 = *(int64_t *)(lVar14 + 8 + lVar10 * 8);
      puVar11 = (void*)FUN_00e8fc40();
      pVar12 = (void*)lVar14;
      FUN_00d4ff40();
      *puVar11 = &g_025c86c0;
      puVar11[7] = 0;
      puVar11[8] = 0;
      puVar11[9] = 0;
      puVar11[10] = 0;
      puVar11[0xb] = 0;
      puVar11[0xc] = 0;
      (*pcVar6)();
      if (puVar11 == puVar17) {
        puVar11 = puVar17;
        if (bVar5) {
          FUN_00d50b20();
          bVar7 = bVar5;
        }
        else {
          bVar7 = true;
        }
      }
      else {
        bVar7 = true;
        if ((bVar5) && (puVar17 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar5 = bVar7;
      pvVar9 = _pthread_getspecific(pVar12);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar9 = _pthread_getspecific(pVar12);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      FUN_011ef3f0();
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_50 = (char)param_1;
      if (local_50 != '\0') {
        pvVar9 = _pthread_getspecific(pVar12);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef460();
        pvVar9 = _pthread_getspecific(pVar12);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd9a0();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      puVar17 = puVar11;
      if (lVar10 == *(int64_t *)(arg1 + 0xd8)) {
        pvVar9 = _pthread_getspecific((void*)arg1);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265bc0();
      }
      else {
        pvVar9 = _pthread_getspecific((void*)arg1);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265db0();
      }
    }
    FUN_0015edf0();
    FUN_00d50b20();
    lVar10 = *(int64_t *)(arg1 + 0xd0);
  }
  if (lVar10 != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    pvVar9 = _pthread_getspecific((void*)plVar15);
    if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
      lVar10 = *(int64_t *)(arg1 + 0xd0);
    }
    else {
      lVar10 = *(int64_t *)(arg1 + 0xd0);
      plVar15 = plVar8;
    }
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    FUN_01265f70();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar9 = _pthread_getspecific((void*)plVar15);
  plVar13 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar15 = plVar8;
    plVar13 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  fVar18 = *(float *)(arg1 + 0xf8);
  if ((*(float *)(plVar13 + 0x1f) != fVar18) || (NAN(*(float *)(plVar13 + 0x1f)) || NAN(fVar18))) {
    FUN_00d64850();
    *(float *)(plVar13 + 0x1f) = fVar18;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((void*)plVar15);
  plVar13 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar15 = plVar8;
    plVar13 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  fVar18 = g_02390124;
  if (*(float *)(arg1 + 0x138) <= g_02390124) {
    fVar18 = *(float *)(arg1 + 0x138);
  }
  fVar4 = g_02390d00;
  if (g_02390d00 <= fVar18) {
    fVar4 = fVar18;
  }
  if ((*(float *)(plVar13 + 0x27) != fVar4) || (NAN(*(float *)(plVar13 + 0x27)) || NAN(fVar4))) {
    FUN_00d64850();
    *(float *)(plVar13 + 0x27) = fVar4;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((void*)plVar15);
  plVar13 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar15 = plVar8;
    plVar13 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  dVar2 = *(double *)(arg1 + 0x118);
  if (((double)plVar13[0x23] != dVar2) || (NAN((double)plVar13[0x23]) || NAN(dVar2))) {
    FUN_00d64850();
    plVar13[0x23] = (int64_t)dVar2;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((void*)plVar15);
  plVar13 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar15 = plVar8;
    plVar13 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  dVar2 = *(double *)(arg1 + 0x120);
  if (((double)plVar13[0x24] != dVar2) || (NAN((double)plVar13[0x24]) || NAN(dVar2))) {
    FUN_00d64850();
    plVar13[0x24] = (int64_t)dVar2;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((void*)plVar15);
  plVar13 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar15 = plVar8;
    plVar13 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  dVar2 = *(double *)(arg1 + 0x128);
  if (((double)plVar13[0x25] != dVar2) || (NAN((double)plVar13[0x25]) || NAN(dVar2))) {
    FUN_00d64850();
    plVar13[0x25] = (int64_t)dVar2;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific((void*)plVar15);
  plVar13 = plVar8;
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar15 = plVar8;
    plVar13 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  dVar2 = *(double *)(arg1 + 0x130);
  if (((double)plVar13[0x26] != dVar2) || (NAN((double)plVar13[0x26]) || NAN(dVar2))) {
    FUN_00d64850();
    plVar13[0x26] = (int64_t)dVar2;
    FUN_00d64910();
  }
  local_9c = (char)param_2;
  if (local_9c != '\0') {
    puVar11 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar11 = &g_025bd940;
    puVar11[5] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    *(void*)(puVar11 + 4) = 0;
    FUN_00d500e0();
    pvVar9 = _pthread_getspecific((void*)plVar15);
    if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
      puVar3 = (void*)plVar8[0x21];
      plVar13 = plVar8;
    }
    else {
      plVar13 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      puVar3 = (void*)plVar13[0x21];
      plVar15 = plVar8;
    }
    if (puVar3 != puVar11) {
      FUN_00d50b00();
      plVar13[0x21] = (int64_t)puVar11;
      if (puVar3 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    pvVar9 = _pthread_getspecific((void*)plVar15);
    plVar13 = plVar8;
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar15 = plVar8;
      plVar13 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar13 + 0x1a0))();
    pvVar9 = _pthread_getspecific((void*)plVar15);
    plVar13 = plVar8;
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar15 = plVar8;
      plVar13 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
    plVar16 = (int64_t *)plVar13[0x34];
    pvVar9 = _pthread_getspecific((void*)plVar15);
    if (pvVar9 != (void *)0x0) {
      plVar16 = (int64_t *)plVar13[0x34];
      lVar10 = FUN_00e8b990();
      if (lVar10 != 0) {
        plVar16 = (int64_t *)plVar16[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar16 + 0x1a0))();
    FUN_00d50b20();
  }
  *this_ptr = plVar8;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar5) && (puVar17 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01971ef0
// ============================================================
// Function: FUN_01971ef0
// Address: 01971ef0
// Size: 3145 bytes
// Class: MUSampledFunction

void FUN_01971ef0(int64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  void*puVar12;
  void* pVar13;
  void*arg1;
  int64_t *plVar14;
  int64_t *plVar15;
  int64_t this_ptr;
  uint64_t uVar16;
  uint64_t uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint32_t uVar21;
  uint64_t uVar22;
  float fVar26;
  double dVar23;
  double dVar24;
  uint8_t auVar25 [16];
  float fVar27;
  int64_t local_80;
  char local_78;
  int local_6c;
  int64_t *local_40;
  char local_38;
  
  plVar2 = local_40;
  fVar26 = (float)((uint64_t)param_2 >> 0x20);
  fVar27 = (float)param_2;
  FUN_01989f80();
  dVar3 = (double)(**(code **)(*local_40 + 0x928))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01989f80();
  local_6c = FUN_019f7a30();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (dVar3 < g_0241b230) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x198) != 0) goto LAB_01972978;
  lVar1 = *(int64_t *)(this_ptr + 0x178);
  if (lVar1 == 0) {
    local_38 = '\0';
    local_40 = (int64_t *)0x0;
LAB_0197295d:
    if (lVar1 != 0) goto LAB_01972962;
  }
  else {
    FUN_00d50b00();
    pvVar8 = _pthread_getspecific((void*)param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125a560();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_0197202e;
      }
      goto LAB_0197295d;
    }
    if (local_40 != (int64_t *)0x0) {
LAB_0197202e:
      pvVar8 = _pthread_getspecific((void*)param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_019720a4;
        }
      }
      else if (local_40 != (int64_t *)0x0) {
LAB_019720a4:
        pvVar8 = _pthread_getspecific((void*)param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd6a0();
        if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        pvVar8 = _pthread_getspecific((void*)param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc000();
        if (local_38 == '\0') {
          if (local_40 == (int64_t *)0x0) goto LAB_01972195;
          FUN_00d50b00();
        }
        else if (local_40 == (int64_t *)0x0) {
LAB_01972195:
          pvVar8 = _pthread_getspecific((void*)param_1);
          plVar14 = local_40;
          if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            param_1 = local_40;
            plVar14 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar14 + 0x378))();
          pvVar8 = _pthread_getspecific((void*)param_1);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01320d00();
          if (local_40 != (int64_t *)0x0) {
            if (local_38 == '\0') {
              FUN_00d50b00();
            }
            else {
              local_38 = '\0';
            }
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        if (local_40 != (int64_t *)0x0) {
          pvVar8 = _pthread_getspecific((void*)param_1);
          plVar14 = local_40;
          if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            param_1 = local_40;
            plVar14 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          }
          iVar6 = (**(code **)(*plVar14 + 0x3a0))();
          if (iVar6 <= local_6c) {
            pvVar8 = _pthread_getspecific((void*)param_1);
            plVar14 = local_40;
            if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              plVar14 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
            }
            uVar7 = (**(code **)(*plVar14 + 0x380))();
            uVar7 = uVar7 >> 8 & 0xff;
            param_1 = (int64_t *)(uint64_t)(uVar7 - 1);
            if (uVar7 == 0) {
              param_1 = (int64_t *)0x0;
            }
            local_6c = (int)param_1;
          }
          FUN_01e3f820();
          iVar6 = FUN_00e7d780(fVar27);
          pvVar8 = _pthread_getspecific((void*)param_1);
          plVar14 = local_40;
          if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            param_1 = local_40;
            plVar14 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          }
          dVar4 = (double)(**(code **)(*plVar14 + 0x370))();
          fVar18 = (float)iVar6 * g_02390d2c;
          FUN_00c8e690();
          if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          dVar23 = g_023b1e98 * dVar3;
          FUN_00c8e690(SUB84(dVar4 / dVar23 + g_023b2560,0));
          if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          plVar14 = local_40;
          if (0 < (int)fVar18) {
            dVar5 = g_0238fee8 / dVar23;
            uVar16 = 0;
            do {
              pVar13 = (void*)param_1;
              pvVar8 = _pthread_getspecific(pVar13);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar24 = (double)FUN_014bb3e0();
              dVar24 = (double)(int)uVar16 / dVar23 + dVar24;
              lVar9 = FUN_00e7dae0(SUB84(dVar4 * dVar24,0));
              lVar10 = FUN_00e7dae0(SUB84((dVar24 + dVar5) * dVar4,0));
              plVar14 = (int64_t *)local_40[2];
              pvVar8 = _pthread_getspecific(pVar13);
              plVar15 = local_40;
              if ((pvVar8 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                plVar15 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
              }
              uVar17 = lVar10 - lVar9;
              param_1 = (int64_t *)((int64_t)&MACH_HEADER.magic + 1);
              uVar7 = (uint)uVar17;
              (**(code **)(*plVar15 + 0x390))
                        (SUB84(g_0238fee8,0),local_6c,lVar9,uVar17 & 0xffffffff);
              lVar9 = local_40[2];
              *(void*)(lVar9 + uVar16 * 4) = 0;
              if ((int)uVar7 < 1) {
                fVar19 = 0.0;
              }
              else {
                lVar10 = local_40[2];
                param_1 = (int64_t *)(uint64_t)(uVar7 & 3);
                if ((uVar17 & 0xffffffff) - 1 < 3) {
                  fVar19 = 0.0;
                  lVar11 = 0;
                }
                else {
                  fVar19 = 0.0;
                  lVar11 = 0;
                  do {
                    fVar19 = fVar19 + *(float *)(lVar10 + lVar11 * 4);
                    *(float *)(lVar9 + uVar16 * 4) = fVar19;
                    fVar19 = fVar19 + *(float *)(lVar10 + 4 + lVar11 * 4);
                    *(float *)(lVar9 + uVar16 * 4) = fVar19;
                    fVar19 = fVar19 + *(float *)(lVar10 + 8 + lVar11 * 4);
                    *(float *)(lVar9 + uVar16 * 4) = fVar19;
                    fVar19 = fVar19 + *(float *)(lVar10 + 0xc + lVar11 * 4);
                    *(float *)(lVar9 + uVar16 * 4) = fVar19;
                    lVar11 = lVar11 + 4;
                  } while ((uVar17 & 0xffffffff) - (int64_t)param_1 != lVar11);
                }
                if (param_1 != (int64_t *)0x0) {
                  plVar15 = (int64_t *)0x0;
                  do {
                    fVar19 = fVar19 + *(float *)(lVar10 + lVar11 * 4 + (int64_t)plVar15 * 4);
                    *(float *)(lVar9 + uVar16 * 4) = fVar19;
                    plVar15 = (int64_t *)((int64_t)plVar15 + 1);
                  } while (param_1 != plVar15);
                }
              }
              *(float *)(lVar9 + uVar16 * 4) = fVar19 / (float)(int)uVar7;
              uVar16 = uVar16 + 1;
            } while (uVar16 != (uint)(int)fVar18);
          }
          local_40 = plVar14;
          puVar12 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          pVar13 = 0x2680400;
          *puVar12 = &g_02680400;
          *(void*)((int64_t)puVar12 + 0xc) = 0;
          puVar12[6] = 0;
          puVar12[7] = 0;
          *(void*)((int64_t)puVar12 + 0x39) = 0;
          *(void*)((int64_t)puVar12 + 0x41) = 0;
          (*g_02680418)();
          lVar9 = *(int64_t *)(this_ptr + 0x198);
          *(void**)(this_ptr + 0x198) = puVar12;
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          uVar22 = FUN_01968ab0();
          FUN_01989f80();
          pvVar8 = _pthread_getspecific(pVar13);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          if (local_78 == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          fVar18 = (float)(**(code **)(
                                      "/System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices"
                                      + *local_40 + 0x18))();
          if (local_80 != 0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01989f80();
          fVar19 = (float)FUN_019f7be0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          fVar27 = g_02390d2c * fVar27;
          fVar20 = 0.0;
          if (0.0 < fVar27) {
            fVar18 = fVar18 + g_02390124;
            lVar9 = 0;
            do {
              auVar25 = ZEXT416((uint)(*(float *)(plVar2[2] + lVar9 * 4) * fVar26 * fVar18 * fVar19)
                               );
              auVar25 = roundss(auVar25,auVar25,9);
              auVar25._0_4_ = auVar25._0_4_ + (float)((uint64_t)uVar22 >> 0x20);
              FUN_01d38ba0(fVar20 * g_0239426c + (float)uVar22,auVar25._0_8_);
              lVar9 = lVar9 + 1;
              fVar20 = (float)(int)lVar9;
            } while (fVar20 < fVar27);
          }
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b20();
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_0197295d;
    }
LAB_01972962:
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x198) == 0) {
    return;
  }
LAB_01972978:
  FUN_01d48b40(g_0239011c);
  uVar21 = FUN_01d48a00();
  fVar27 = g_02390124;
  if (dVar3 <= g_0241b238) {
    fVar27 = (float)((dVar3 + g_0241b240) / g_0241b230);
  }
  FUN_01d489d0(fVar27);
  if (local_6c == 0) {
    FUN_01969e40();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01cfbc00();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar2 = (int64_t *)*arg1;
  lVar1 = *(int64_t *)(this_ptr + 0x198);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar2 + 0x3a8))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_01d489d0(uVar21);
  return;
}



// ============================================================
// 0196c5e0
// ============================================================
// Function: FUN_0196c5e0
// Address: 0196c5e0
// Size: 2955 bytes
// Class: MUSampledFunction

void FUN_0196c5e0(void* param_1)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  void *pvVar6;
  code *pcVar7;
  undefined7 uVar13;
  float *pfVar8;
  uint64_t uVar9;
  int64_t lVar10;
  code *pcVar11;
  uint64_t uVar12;
  code *pcVar14;
  uint64_t uVar15;
  float *arg1;
  int64_t this_ptr;
  code *pcVar16;
  uint64_t uVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  int64_t local_110;
  uint8_t local_108;
  int64_t local_100;
  uint8_t local_f8;
  code *local_f0;
  uint8_t local_e8;
  void*local_e0;
  code *local_d8;
  float local_d0;
  float local_cc;
  double local_c8;
  code *local_c0;
  uint local_b4;
  double local_b0;
  uint64_t local_a8;
  uint32_t local_a0;
  float local_9c;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint local_7c;
  double local_78;
  code *local_60;
  float local_54;
  code *local_50;
  char local_41;
  code *local_40;
  char local_38;
  
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125ec20();
  if (local_38 == '\0') {
    if (local_40 == 0x0) {
      return;
    }
    local_c0 = local_40;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_c0 = local_40;
    if (local_40 == 0x0) {
      return;
    }
  }
  FUN_01989f80();
  local_b0 = (double)(**(code **)(*(int64_t *)local_40 + 0x930))(*arg1);
  if ((local_38 != '\0') && (local_40 != 0x0)) {
    FUN_00d50b20();
  }
  FUN_01989f80();
  pcVar14 = local_40;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125a280();
  local_d0 = (float)(**(code **)(*(int64_t *)pcVar14 + 0x938))();
  local_d0 = local_d0 - *arg1;
  if ((local_38 != '\0') && (local_40 != 0x0)) {
    FUN_00d50b20();
  }
  FUN_01964590();
  fVar19 = (float)FUN_0198a7d0();
  local_cc = (fVar19 + *(float *)(this_ptr + 0x1bc) * g_0241b660) - arg1[1];
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012640f0();
  local_50 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0x0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012641c0();
  pcVar14 = local_40;
  local_60 = local_40;
  pcVar7 = local_40;
  if (((local_38 == '\0') && (local_40 != 0x0)) &&
     ((pcVar7 = FUN_00d50b00(), local_38 != '\0' && (local_40 != 0x0)))) {
    pcVar7 = FUN_00d50b20();
  }
  uVar13 = (undefined7)((uint64_t)pcVar7 >> 8);
  local_90 = CONCAT71(uVar13,1);
  if (local_50 == 0x0) {
    uVar17 = 0;
    local_a8 = CONCAT71(uVar13,1);
    local_88 = CONCAT71(uVar13,1);
joined_r0x0196c98f:
    if (pcVar14 == 0x0) goto LAB_0196cae6;
LAB_0196c9ba:
    local_54 = g_02390d00 + arg1[2];
    local_90 = CONCAT71((int7)((uint64_t)arg1 >> 8),1);
    if ((local_54 < 0.0) || (local_54 < arg1[2] + g_023b1608)) goto LAB_0196cae6;
    local_7c = (uint)uVar17;
    do {
      FUN_01989f80();
      local_78 = (double)(**(code **)(*(int64_t *)local_40 + 0x930))(*arg1 + local_54);
      lVar10 = *(int64_t *)(this_ptr + 0x178);
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      local_f8 = 1;
      local_100 = lVar10;
      uVar9 = FUN_0196da90(SUB84(local_78 - local_b0,0),&local_41);
      bVar4 = (byte)uVar9;
      if (lVar10 != 0) {
        uVar9 = FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0x0)) {
        uVar9 = FUN_00d50b20();
      }
      local_54 = local_54 + g_02390d00;
      bVar3 = g_0239424c <= local_54 & bVar4;
      if (bVar3 != 1) {
        pfVar8 = (float *)CONCAT71((int7)((uint64_t)uVar9 >> 8),bVar3);
        if (bVar4 == 0) {
          FUN_00d50b20();
          uVar17 = (uint64_t)local_7c;
          uVar15 = CONCAT71((int7)((uint64_t)lVar10 >> 8),1);
          local_60 = 0x0;
          local_90 = 0;
          local_9c = arg1[2];
          bVar18 = true;
          goto LAB_0196cafe;
        }
        break;
      }
      pfVar8 = arg1;
    } while (arg1[2] + g_023b1608 <= local_54);
    local_90 = CONCAT71((int7)((uint64_t)pfVar8 >> 8),1);
    uVar15 = 0;
    uVar17 = (uint64_t)local_7c;
    local_9c = arg1[2];
    if (pcVar14 == 0x0) {
      bVar18 = true;
      goto LAB_0196cafe;
    }
  }
  else {
    fVar19 = 0.0;
    do {
      pfVar8 = arg1;
      if (arg1[2] <= fVar19) goto LAB_0196c9a1;
      FUN_01989f80();
      local_78 = (double)(**(code **)(*(int64_t *)local_40 + 0x930))(*arg1 + fVar19);
      lVar10 = *(int64_t *)(this_ptr + 0x178);
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      local_108 = 1;
      local_110 = lVar10;
      uVar9 = FUN_0196da90(SUB84(local_78 - local_b0,0),&local_41);
      bVar4 = (byte)uVar9;
      if (lVar10 != 0) {
        uVar9 = FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0x0)) {
        uVar9 = FUN_00d50b20();
      }
      fVar19 = fVar19 + g_02390124;
      pfVar8 = (float *)CONCAT71((int7)((uint64_t)uVar9 >> 8),fVar19 < g_02390d34);
    } while ((bVar4 & fVar19 < g_02390d34) != 0);
    if (bVar4 == 0) {
      FUN_00d50b20();
      uVar17 = CONCAT71((int7)((uint64_t)&local_110 >> 8),1);
      local_50 = 0x0;
      local_a8 = 0;
      local_88 = 0;
      goto joined_r0x0196c98f;
    }
LAB_0196c9a1:
    uVar13 = (undefined7)((uint64_t)pfVar8 >> 8);
    local_a8 = CONCAT71(uVar13,1);
    uVar17 = 0;
    local_88 = CONCAT71(uVar13,1);
    if (pcVar14 != 0x0) goto LAB_0196c9ba;
LAB_0196cae6:
    uVar15 = 0;
    local_9c = arg1[2];
    bVar18 = true;
    if (pcVar14 == 0x0) goto LAB_0196cafe;
  }
  bVar18 = pcVar14 == 0x0;
  uVar15 = 0;
  local_9c = local_9c + g_02390d34;
LAB_0196cafe:
  bVar4 = !bVar18 & (byte)local_90;
  fVar19 = 0.0;
  if (local_50 != 0x0) {
    fVar19 = g_023b1608;
  }
  if (fVar19 < local_9c) {
    local_7c = (uint)uVar17;
    local_b4 = (uint)uVar15;
    bVar3 = local_50 != 0x0 & (byte)local_a8;
    local_d8 = g_02680418;
    pcVar11 = 0x0;
    local_e0 = &g_02680400;
    uVar9 = 0;
    local_98 = 0;
    pcVar14 = g_02680418;
    pcVar7 = 0x0;
    do {
      cVar5 = (char)uVar9;
      if (0.0 <= fVar19) {
        if (arg1[2] <= fVar19) {
          FUN_01989f80();
          local_78 = (double)(**(code **)(*(int64_t *)local_40 + 0x930))(*arg1 + fVar19);
          pvVar6 = _pthread_getspecific((void*)pcVar14);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_c8 = (double)FUN_01264170();
          if ((local_38 != '\0') && (local_40 != 0x0)) {
            FUN_00d50b20();
          }
          local_78 = (double)(float)((local_78 - local_b0) - local_c8);
          if (pcVar7 == local_60) {
            pcVar16 = local_60;
            if ((((byte)local_90 != '\0') && (pcVar16 = local_60, cVar5 == '\0')) &&
               (pcVar16 = local_60, local_60 != 0x0)) {
              FUN_00d50b00();
              pcVar16 = local_60;
              uVar9 = 1;
            }
          }
          else {
            if (bVar4 != 0) {
              FUN_00d50b00();
            }
            pcVar16 = local_60;
            uVar9 = local_90;
            if ((cVar5 != '\0') && (pcVar16 = local_60, uVar9 = local_90, pcVar7 != 0x0)) {
              FUN_00d50b20();
              pcVar16 = local_60;
              uVar9 = local_90;
            }
          }
        }
        else {
          FUN_01989f80();
          local_78 = (double)(**(code **)(*(int64_t *)local_40 + 0x930))(*arg1 + fVar19);
          if ((local_38 != '\0') && (local_40 != 0x0)) {
            FUN_00d50b20();
          }
          local_78 = (double)(float)(local_78 - local_b0);
          pcVar16 = *(code **)(this_ptr + 0x178);
          if (pcVar7 == pcVar16) {
            pcVar16 = pcVar7;
            if ((cVar5 == '\0') && (pcVar7 != 0x0)) {
              FUN_00d50b00();
              uVar9 = 1;
            }
          }
          else {
            if (pcVar16 != 0x0) {
              FUN_00d50b00();
            }
            uVar9 = 1;
            if ((cVar5 != '\0') && (pcVar7 != 0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      else {
        FUN_01989f80();
        local_78 = (double)(**(code **)(*(int64_t *)local_40 + 0x930))(*arg1 + fVar19);
        pvVar6 = _pthread_getspecific((void*)pcVar14);
        if ((pvVar6 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          pcVar14 = local_50;
        }
        local_c8 = (double)FUN_01264170();
        if ((local_38 != '\0') && (local_40 != 0x0)) {
          FUN_00d50b20();
        }
        local_78 = (local_78 - local_b0) + local_c8;
        pcVar16 = local_50;
        if (pcVar7 == local_50) {
          if ((((byte)local_a8 != '\0') && (cVar5 == '\0')) && (local_50 != 0x0)) {
            FUN_00d50b00();
            uVar9 = 1;
          }
        }
        else {
          if (bVar3 != 0) {
            FUN_00d50b00();
          }
          uVar9 = local_88;
          if ((cVar5 != '\0') && (pcVar7 != 0x0)) {
            FUN_00d50b20();
            uVar9 = local_88;
          }
        }
      }
      local_e8 = 0;
      local_f0 = pcVar16;
      cVar5 = FUN_0196da90(SUB84(local_78,0),&local_41);
      if (cVar5 == '\0') {
        if (pcVar11 != 0x0) {
          FUN_01d38ea0();
          iVar1 = *(int *)(local_40 + 0x18);
          if (local_38 != '\0') {
            FUN_00d50b20();
          }
          if (0x37 < iVar1) {
            local_38 = '\0';
            local_40 = pcVar11;
            FUN_00d21140();
            if ((local_38 != '\0') && (local_40 != 0x0)) {
              FUN_00d50b20();
            }
          }
          if ((char)local_98 != '\0') {
            FUN_00d50b20();
          }
          local_98 = 0;
        }
        pcVar11 = 0x0;
      }
      else if (local_41 == '\0') {
        if (pcVar11 == 0x0) {
          pcVar11 = FUN_00e8fc40();
          FUN_00d4ff40();
          *(void**)pcVar11 = local_e0;
          *(void*)(pcVar11 + 0xc) = 0;
          *(int64_t *)(pcVar11 + 0x30) = 0;
          *(int64_t *)(pcVar11 + 0x38) = 0;
          *(void*)(pcVar11 + 0x39) = 0;
          *(void*)(pcVar11 + 0x41) = 0;
          (*local_d8)();
          uVar12 = FUN_01d38cd0(g_02421228);
          local_98 = CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
        }
        fVar20 = (float)FUN_0198a7d0(local_a0);
        FUN_01d38ba0(local_d0 + fVar19,(fVar20 - arg1[1]) - local_cc);
      }
      fVar19 = fVar19 + g_02390124;
      pcVar7 = pcVar16;
    } while (fVar19 < local_9c);
    if (pcVar11 == 0x0) {
      bVar2 = true;
      bVar18 = true;
    }
    else {
      FUN_01d38ea0();
      iVar1 = *(int *)(local_40 + 0x18);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
      if (0x37 < iVar1) {
        local_38 = '\0';
        local_40 = pcVar11;
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != 0x0)) {
          FUN_00d50b20();
        }
      }
      bVar2 = false;
      bVar18 = false;
    }
    if (((char)uVar9 != '\0') && (bVar18 = bVar2, pcVar16 != 0x0)) {
      FUN_00d50b20();
    }
    uVar15 = (uint64_t)local_b4;
    uVar17 = (uint64_t)local_7c;
    if ((char)local_98 != '\0' && !bVar18) {
      FUN_00d50b20();
    }
  }
  if ((char)uVar15 == '\0' && local_60 != 0x0) {
    FUN_00d50b20();
  }
  if ((char)uVar17 == '\0' && local_50 != 0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 014bfad0
// ============================================================
// Function: FUN_014bfad0
// Address: 014bfad0
// Size: 1439 bytes
// Class: MUSampledFunction

void FUN_014bfad0(void* param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  double dVar4;
  uint64_t uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  char cVar29;
  int iVar30;
  uint uVar31;
  void *pvVar32;
  int64_t lVar33;
  int64_t lVar34;
  uint64_t uVar35;
  int iVar36;
  uint64_t uVar37;
  uint64_t uVar38;
  uint64_t uVar39;
  uint64_t uVar40;
  int64_t *this_ptr;
  uint uVar41;
  float fVar42;
  float fVar43;
  int64_t local_48;
  char local_40;
  
  if ((this_ptr[9] != 0) && (this_ptr[8] != 0)) {
    pvVar32 = _pthread_getspecific(param_1);
    if (pvVar32 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    iVar30 = *(int *)(local_48 + 0x18);
    iVar36 = iVar30 + 3;
    if (-1 < iVar30) {
      iVar36 = iVar30;
    }
    if (local_40 != '\0') {
      FUN_00d50b20();
    }
    if (3 < iVar30) {
      lVar34 = this_ptr[8];
      pvVar32 = _pthread_getspecific(param_1);
      if (pvVar32 != (void *)0x0) {
        lVar34 = this_ptr[8];
        lVar33 = FUN_00e8b990();
        if (lVar33 != 0) {
          lVar34 = *(int64_t *)(lVar34 + 0x20 + (uint64_t)(*(uint *)(lVar33 + 0x154) & 1) * 8);
        }
      }
      dVar4 = *(double *)(lVar34 + 0x50);
      pvVar32 = _pthread_getspecific(param_1);
      if (pvVar32 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb920();
      uVar38 = *(uint64_t *)(local_48 + 0x10);
      if (local_40 != '\0') {
        FUN_00d50b20();
      }
      pvVar32 = _pthread_getspecific(param_1);
      if (pvVar32 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb920();
      uVar40 = *(uint64_t *)(local_48 + 0x10);
      if (local_40 != '\0') {
        FUN_00d50b20();
      }
      uVar41 = iVar36 >> 2;
      iVar30 = FUN_00e7d850(dVar4);
      uVar31 = FUN_00e7d850(dVar4 + dVar4);
      if ((int)uVar41 < (int)uVar31) {
        uVar31 = uVar41;
      }
      uVar37 = (uint64_t)uVar31;
      FUN_00c8e690();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      fVar28 = _UNK_0240f0dc;
      fVar27 = _UNK_0240f0d8;
      fVar43 = _UNK_0240f0d4;
      fVar42 = g_0240f0d0;
      if ((int)uVar31 < 1) {
        uVar38 = 0;
      }
      else {
        uVar5 = *(uint64_t *)(local_48 + 0x10);
        if (uVar31 < 8) {
          uVar35 = 0;
LAB_014bfced:
          uVar39 = ~uVar35;
          if ((uVar31 & 1) != 0) {
            fVar42 = *(float *)(uVar40 + uVar35 * 4);
            *(float *)(uVar5 + uVar35 * 4) =
                 (float)(~-(uint)(fVar42 < g_023b4df0) & (uint)fVar42) *
                 *(float *)(uVar38 + uVar35 * 4);
            uVar35 = uVar35 | 1;
          }
          fVar42 = g_023b4df0;
          if (uVar39 + uVar37 != 0) {
            do {
              fVar43 = *(float *)(uVar40 + uVar35 * 4);
              *(float *)(uVar5 + uVar35 * 4) =
                   (float)(~-(uint)(fVar43 < fVar42) & (uint)fVar43) *
                   *(float *)(uVar38 + uVar35 * 4);
              fVar43 = *(float *)(uVar40 + 4 + uVar35 * 4);
              *(float *)(uVar5 + 4 + uVar35 * 4) =
                   (float)(~-(uint)(fVar43 < fVar42) & (uint)fVar43) *
                   *(float *)(uVar38 + 4 + uVar35 * 4);
              uVar35 = uVar35 + 2;
            } while (uVar37 != uVar35);
          }
        }
        else {
          uVar39 = uVar5 + uVar37 * 4;
          uVar35 = 0;
          if ((uVar5 < uVar40 + uVar37 * 4 && uVar40 < uVar39) ||
             (uVar5 < uVar38 + uVar37 * 4 && uVar38 < uVar39)) goto LAB_014bfced;
          uVar35 = (uint64_t)(uVar31 & 0xfffffff8);
          uVar39 = (uVar35 - 8 >> 3) + 1;
          if (uVar35 - 8 == 0) {
            lVar34 = 0;
          }
          else {
            lVar33 = -(uVar39 & 0xfffffffffffffffe);
            lVar34 = 0;
            do {
              pfVar1 = (float *)(uVar40 + lVar34 * 4);
              fVar13 = pfVar1[1];
              fVar14 = pfVar1[2];
              fVar15 = pfVar1[3];
              pfVar2 = (float *)(uVar40 + 0x10 + lVar34 * 4);
              fVar16 = *pfVar2;
              fVar17 = pfVar2[1];
              fVar18 = pfVar2[2];
              fVar19 = pfVar2[3];
              pfVar2 = (float *)(uVar38 + lVar34 * 4);
              fVar20 = pfVar2[1];
              fVar21 = pfVar2[2];
              fVar22 = pfVar2[3];
              pfVar3 = (float *)(uVar38 + 0x10 + lVar34 * 4);
              fVar23 = *pfVar3;
              fVar24 = pfVar3[1];
              fVar25 = pfVar3[2];
              fVar26 = pfVar3[3];
              pfVar3 = (float *)(uVar5 + lVar34 * 4);
              *pfVar3 = *pfVar2 * (float)(-(uint)(fVar42 <= *pfVar1) & (uint)*pfVar1);
              pfVar3[1] = fVar20 * (float)(-(uint)(fVar43 <= fVar13) & (uint)fVar13);
              pfVar3[2] = fVar21 * (float)(-(uint)(fVar27 <= fVar14) & (uint)fVar14);
              pfVar3[3] = fVar22 * (float)(-(uint)(fVar28 <= fVar15) & (uint)fVar15);
              pfVar1 = (float *)(uVar5 + 0x10 + lVar34 * 4);
              *pfVar1 = fVar23 * (float)(-(uint)(fVar42 <= fVar16) & (uint)fVar16);
              pfVar1[1] = fVar24 * (float)(-(uint)(fVar43 <= fVar17) & (uint)fVar17);
              pfVar1[2] = fVar25 * (float)(-(uint)(fVar27 <= fVar18) & (uint)fVar18);
              pfVar1[3] = fVar26 * (float)(-(uint)(fVar28 <= fVar19) & (uint)fVar19);
              pfVar1 = (float *)(uVar40 + 0x20 + lVar34 * 4);
              fVar13 = pfVar1[1];
              fVar14 = pfVar1[2];
              fVar15 = pfVar1[3];
              pfVar2 = (float *)(uVar40 + 0x30 + lVar34 * 4);
              fVar16 = *pfVar2;
              fVar17 = pfVar2[1];
              fVar18 = pfVar2[2];
              fVar19 = pfVar2[3];
              pfVar2 = (float *)(uVar38 + 0x20 + lVar34 * 4);
              fVar20 = pfVar2[1];
              fVar21 = pfVar2[2];
              fVar22 = pfVar2[3];
              pfVar3 = (float *)(uVar38 + 0x30 + lVar34 * 4);
              fVar23 = *pfVar3;
              fVar24 = pfVar3[1];
              fVar25 = pfVar3[2];
              fVar26 = pfVar3[3];
              pfVar3 = (float *)(uVar5 + 0x20 + lVar34 * 4);
              *pfVar3 = *pfVar2 * (float)(-(uint)(fVar42 <= *pfVar1) & (uint)*pfVar1);
              pfVar3[1] = fVar20 * (float)(-(uint)(fVar43 <= fVar13) & (uint)fVar13);
              pfVar3[2] = fVar21 * (float)(-(uint)(fVar27 <= fVar14) & (uint)fVar14);
              pfVar3[3] = fVar22 * (float)(-(uint)(fVar28 <= fVar15) & (uint)fVar15);
              pfVar1 = (float *)(uVar5 + 0x30 + lVar34 * 4);
              *pfVar1 = fVar23 * (float)(-(uint)(fVar42 <= fVar16) & (uint)fVar16);
              pfVar1[1] = fVar24 * (float)(-(uint)(fVar43 <= fVar17) & (uint)fVar17);
              pfVar1[2] = fVar25 * (float)(-(uint)(fVar27 <= fVar18) & (uint)fVar18);
              pfVar1[3] = fVar26 * (float)(-(uint)(fVar28 <= fVar19) & (uint)fVar19);
              lVar34 = lVar34 + 0x10;
              lVar33 = lVar33 + 2;
            } while (lVar33 != 0);
          }
          if ((uVar39 & 1) != 0) {
            pfVar1 = (float *)(uVar40 + lVar34 * 4);
            fVar42 = pfVar1[1];
            fVar43 = pfVar1[2];
            fVar27 = pfVar1[3];
            pfVar2 = (float *)(uVar40 + 0x10 + lVar34 * 4);
            fVar28 = *pfVar2;
            fVar13 = pfVar2[1];
            fVar14 = pfVar2[2];
            fVar15 = pfVar2[3];
            bVar7 = _UNK_0240f0d4 <= fVar42;
            bVar9 = _UNK_0240f0d8 <= fVar43;
            bVar11 = _UNK_0240f0dc <= fVar27;
            bVar6 = g_0240f0d0 <= fVar28;
            bVar8 = _UNK_0240f0d4 <= fVar13;
            bVar10 = _UNK_0240f0d8 <= fVar14;
            bVar12 = _UNK_0240f0dc <= fVar15;
            pfVar2 = (float *)(uVar38 + lVar34 * 4);
            fVar16 = pfVar2[1];
            fVar17 = pfVar2[2];
            fVar18 = pfVar2[3];
            pfVar3 = (float *)(uVar38 + 0x10 + lVar34 * 4);
            fVar19 = *pfVar3;
            fVar20 = pfVar3[1];
            fVar21 = pfVar3[2];
            fVar22 = pfVar3[3];
            pfVar3 = (float *)(uVar5 + lVar34 * 4);
            *pfVar3 = *pfVar2 * (float)(-(uint)(g_0240f0d0 <= *pfVar1) & (uint)*pfVar1);
            pfVar3[1] = fVar16 * (float)(-(uint)bVar7 & (uint)fVar42);
            pfVar3[2] = fVar17 * (float)(-(uint)bVar9 & (uint)fVar43);
            pfVar3[3] = fVar18 * (float)(-(uint)bVar11 & (uint)fVar27);
            pfVar1 = (float *)(uVar5 + 0x10 + lVar34 * 4);
            *pfVar1 = fVar19 * (float)(-(uint)bVar6 & (uint)fVar28);
            pfVar1[1] = fVar20 * (float)(-(uint)bVar8 & (uint)fVar13);
            pfVar1[2] = fVar21 * (float)(-(uint)bVar10 & (uint)fVar14);
            pfVar1[3] = fVar22 * (float)(-(uint)bVar12 & (uint)fVar15);
          }
          if (uVar35 != uVar37) goto LAB_014bfced;
        }
        lVar34 = *(int64_t *)(local_48 + 0x10);
        if (uVar37 - 1 < 7) {
          fVar42 = 0.0;
          uVar38 = 0;
        }
        else {
          fVar42 = 0.0;
          uVar38 = 0;
          do {
            fVar42 = fVar42 + *(float *)(lVar34 + uVar38 * 4) + *(float *)(lVar34 + 4 + uVar38 * 4)
                     + *(float *)(lVar34 + 8 + uVar38 * 4) + *(float *)(lVar34 + 0xc + uVar38 * 4) +
                     *(float *)(lVar34 + 0x10 + uVar38 * 4) + *(float *)(lVar34 + 0x14 + uVar38 * 4)
                     + *(float *)(lVar34 + 0x18 + uVar38 * 4) +
                     *(float *)(lVar34 + 0x1c + uVar38 * 4);
            uVar38 = uVar38 + 8;
          } while ((uVar31 & 0xfffffff8) != uVar38);
        }
        if ((uint64_t)(uVar31 & 7) != 0) {
          uVar40 = 0;
          do {
            fVar42 = fVar42 + *(float *)(lVar34 + uVar38 * 4 + uVar40 * 4);
            uVar40 = uVar40 + 1;
          } while ((uVar31 & 7) != uVar40);
        }
        fVar43 = 0.0;
        uVar38 = 0;
        do {
          fVar43 = fVar43 + *(float *)(*(int64_t *)(local_48 + 0x10) + uVar38 * 4);
          if (fVar42 * g_0239011c <= fVar43) goto LAB_014bffd5;
          uVar38 = uVar38 + 1;
        } while (uVar37 != uVar38);
        uVar38 = 0;
      }
LAB_014bffd5:
      lVar34 = (**(code **)(*this_ptr + 0x388))();
      iVar36 = (int)uVar38;
      if (iVar30 < (int)uVar38) {
        iVar36 = iVar30;
      }
      lVar34 = FUN_00e7da10((float)lVar34 * ((float)iVar36 / (float)(int)uVar41));
      lVar33 = (**(code **)(*this_ptr + 0x388))();
      if (lVar33 <= lVar34) {
        lVar34 = (**(code **)(*this_ptr + 0x388))();
        lVar34 = lVar34 + -1;
      }
      cVar29 = (**(code **)(*this_ptr + 0x3c0))();
      if ((cVar29 == '\0') && (lVar34 < this_ptr[0x1d])) {
        lVar34 = this_ptr[0x1d];
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      goto LAB_014bfd7c;
    }
  }
  lVar34 = 0;
LAB_014bfd7c:
  if (this_ptr[0x1c] != lVar34) {
    FUN_00d64850();
    this_ptr[0x1c] = lVar34;
    FUN_00d64910();
  }
  return;
}



// ============================================================
// 0126d090
// ============================================================
// Function: FUN_0126d090
// Address: 0126d090
// Size: 2534 bytes
// Class: MUSampledFunction

void FUN_0126d090(int64_t param_1)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t *plVar10;
  int64_t this_ptr;
  float fVar11;
  double dVar12;
  double dVar13;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  double local_78;
  double local_70;
  int64_t local_60;
  char local_58;
  float local_48;
  float local_44;
  int64_t local_38;
  
  local_78 = *(double *)(this_ptr + 0xf0);
  local_44 = (float)_exp2f(*(float *)(this_ptr + 0x13c) * g_023941f4);
  plVar4 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar4 + 0x18))();
  pvVar5 = _pthread_getspecific((void*)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb6d0();
  pVar9 = (void*)param_1;
  if (*(int64_t *)(this_ptr + 0xa8) == 0) {
LAB_0126d22e:
    bVar3 = false;
LAB_0126d234:
    local_70 = 0.0;
    local_38 = 0;
    local_48 = local_44;
  }
  else {
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_012dfea0();
    pVar9 = (void*)param_1;
    if (dVar12 <= 0.0) goto LAB_0126d22e;
    if (*(int64_t *)(this_ptr + 0xa8) == 0) {
      local_58 = '\0';
      local_60 = 0;
LAB_0126d6a7:
      local_38 = 0;
      bVar3 = false;
      if (local_58 != '\0') {
        local_38 = 0;
        bVar3 = false;
        if (local_60 != 0) {
          FUN_00d50b20();
        }
      }
LAB_0126d6c7:
      pVar9 = (void*)param_1;
      if (local_38 != 0) goto LAB_0126d6d2;
      goto LAB_0126d234;
    }
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    local_38 = local_60;
    param_1 = local_60;
    if (local_60 == 0) goto LAB_0126d6a7;
    if (local_58 == '\0') {
      FUN_00d50b00();
      bVar3 = true;
      goto LAB_0126d6c7;
    }
    bVar3 = true;
LAB_0126d6d2:
    local_70 = 0.0;
    pvVar5 = _pthread_getspecific((void*)param_1);
    lVar8 = local_38;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      lVar8 = *(int64_t *)(local_38 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      param_1 = local_38;
    }
    local_48 = (float)_exp2f(*(float *)(lVar8 + 0x13c) * g_023941f4);
    fVar11 = (float)_exp2f(g_023941f4 * *(float *)(this_ptr + 0x13c));
    pVar9 = (void*)param_1;
    if ((local_48 != fVar11) || (NAN(local_48) || NAN(fVar11))) {
      pvVar5 = _pthread_getspecific(pVar9);
      lVar8 = local_38;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar8 = *(int64_t *)(local_38 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        param_1 = local_38;
      }
      pVar9 = (void*)param_1;
      dVar12 = *(double *)(this_ptr + 0xf0);
      if (*(double *)(lVar8 + 0xf0) <= *(double *)(this_ptr + 0xf0)) {
        dVar12 = *(double *)(lVar8 + 0xf0);
      }
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_012dfea0();
      dVar12 = dVar12 * dVar13 * g_023942d0;
      local_70 = dVar12 + 0.0;
      fVar11 = (float)_exp2f(*(float *)(this_ptr + 0x13c) * g_023941f4);
      local_48 = (float)((dVar12 / (dVar12 + dVar12)) * (double)(local_48 - fVar11) + (double)fVar11
                        );
    }
  }
  if (*(int64_t *)(this_ptr + 0xa0) == 0) {
LAB_0126d31d:
    bVar2 = false;
  }
  else {
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_012dfea0();
    if (dVar12 <= 0.0) goto LAB_0126d31d;
    if (*(int64_t *)(this_ptr + 0xa0) != 0) {
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff00();
      if (local_60 == 0) goto LAB_0126d7af;
      lVar8 = local_60;
      if (local_58 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
        goto LAB_0126d7cc;
      }
      bVar2 = true;
LAB_0126d7d5:
      pvVar5 = _pthread_getspecific(pVar9);
      lVar6 = lVar8;
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        lVar6 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
      }
      local_44 = (float)_exp2f(*(float *)(lVar6 + 0x13c) * g_023941f4);
      fVar11 = (float)_exp2f(g_023941f4 * *(float *)(this_ptr + 0x13c));
      if ((local_44 != fVar11) || (NAN(local_44) || NAN(fVar11))) {
        pvVar5 = _pthread_getspecific(pVar9);
        lVar6 = lVar8;
        if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          lVar6 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        dVar12 = *(double *)(this_ptr + 0xf0);
        if (*(double *)(lVar6 + 0xf0) <= *(double *)(this_ptr + 0xf0)) {
          dVar12 = *(double *)(lVar6 + 0xf0);
        }
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_012dfea0();
        dVar12 = dVar12 * dVar13 * g_023942d0;
        local_78 = local_78 - dVar12;
        fVar11 = (float)_exp2f(*(float *)(this_ptr + 0x13c) * g_023941f4);
        local_44 = (float)((dVar12 / (dVar12 + dVar12)) * (double)(local_44 - fVar11) +
                          (double)fVar11);
      }
      goto LAB_0126d326;
    }
    local_58 = '\0';
    local_60 = 0;
LAB_0126d7af:
    lVar8 = 0;
    bVar2 = false;
    if (local_58 != '\0') {
      bVar2 = false;
      lVar8 = 0;
      if (local_60 != 0) {
        FUN_00d50b20();
      }
    }
LAB_0126d7cc:
    if (lVar8 != 0) goto LAB_0126d7d5;
  }
  lVar8 = 0;
LAB_0126d326:
  if ((local_70 != 0.0) || (NAN(local_70))) {
    pvVar5 = _pthread_getspecific(pVar9);
    plVar10 = plVar4;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar10 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar10 + 0x410))(0,(double)local_48);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar9);
    plVar10 = plVar4;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar10 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    fVar11 = (float)_exp2f(*(float *)(this_ptr + 0x13c) * g_023941f4);
    (**(code **)(*plVar10 + 0x410))(local_70,(double)fVar11);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar5 = _pthread_getspecific(pVar9);
    plVar10 = plVar4;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar10 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    fVar11 = (float)_exp2f(*(float *)(this_ptr + 0x13c) * g_023941f4);
    (**(code **)(*plVar10 + 0x410))(0,(double)fVar11);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar5 = _pthread_getspecific(pVar9);
  plVar10 = plVar4;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar10 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  fVar11 = (float)_exp2f(*(float *)(this_ptr + 0x13c) * g_023941f4);
  (**(code **)(*plVar10 + 0x410))(local_78,(double)fVar11);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != *(double *)(this_ptr + 0xf0)) ||
     (NAN(local_78) || NAN(*(double *)(this_ptr + 0xf0)))) {
    pvVar5 = _pthread_getspecific(pVar9);
    plVar10 = plVar4;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar10 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar10 + 0x410))(*(void*)(this_ptr + 0xf0),(double)local_44);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb720();
  plVar10 = (int64_t *)(this_ptr + 400);
  FUN_00d64850();
  plVar1 = (int64_t *)*plVar10;
  if (plVar1 != plVar4) {
    FUN_00d50b00();
    *plVar10 = (int64_t)plVar4;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  lVar6 = FUN_00e8b990();
  if (lVar6 != 0) {
    FUN_00e8b990();
    lVar6 = *plVar10;
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    FUN_00cb00c0();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  if ((bVar2) && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01318610
// ============================================================
// Function: FUN_01318610
// Address: 01318610
// Size: 2543 bytes
// Class: MUSampledFunction

uint64_t FUN_01318610(uint64_t param_1,uint32_t param_2)

{
  uint3 uVar1;
  byte bVar2;
  char cVar3;
  uint32_t uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  int64_t *plVar8;
  int64_t **pplVar9;
  int64_t *plVar10;
  void* pVar11;
  int unaff_EDI;
  int64_t lVar12;
  uint64_t uVar13;
  int64_t *plVar14;
  undefined7 uVar15;
  bool bVar16;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar17;
  uint32_t extraout_XMM0_Da_01;
  int64_t *local_90;
  int local_84;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  int local_58;
  uint32_t uStack_54;
  uint32_t local_50;
  int64_t *local_38;
  
  local_84 = unaff_EDI;
  pvVar7 = _pthread_getspecific((void*)param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  plVar10 = local_70;
  pVar11 = (void*)param_1;
  uVar1 = (uint3)((uint)param_2 >> 8);
  bVar2 = (byte)param_2;
  if (local_68 == '\0') {
    if (local_70 == (int64_t *)0x0) goto LAB_01318829;
    FUN_00d50b00();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_013186b3:
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011f2610();
    plVar8 = local_70;
    if ((((local_68 == '\0') && (local_70 != (int64_t *)0x0)) && (FUN_00d50b00(), local_68 != '\0')
        ) && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011f2810();
    local_38 = local_70;
    local_90 = local_70;
    if (local_68 == '\0') {
      if (local_70 == (int64_t *)0x0) {
        local_90 = (int64_t *)0x0;
        local_38 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        local_38 = local_90;
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
    }
    uVar13 = (uint64_t)CONCAT31(uVar1,plVar8 != (int64_t *)0x0);
    if ((plVar8 == (int64_t *)0x0) && ((bVar2 ^ 1) == 0)) {
      plVar8 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void*)(plVar8 + 8) = 0;
      plVar8[7] = 0;
      plVar8[9] = 0;
      plVar8[10] = 0;
      plVar8[0xb] = 0;
      pVar11 = 0x25d2108;
      *plVar8 = (int64_t)&g_025d2108;
      *(void*)(plVar8 + 0xc) = 0;
      plVar8[0xd] = 0;
      (*g_025d2120)();
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57e0();
      FUN_011f0a90();
      pvVar7 = _pthread_getspecific(pVar11);
      plVar14 = plVar8;
      if ((pvVar7 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
        plVar14 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57e0();
      FUN_011f0ae0();
      if (local_38 == (int64_t *)0x0) {
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011f2270();
        uVar15 = (undefined7)((uint64_t)plVar14 >> 8);
      }
      else {
        pvVar7 = _pthread_getspecific(pVar11);
        if ((pvVar7 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
          plVar10 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011f2240();
        local_70 = local_38;
        local_68 = '\0';
        uVar4 = FUN_00d23d20();
        uVar17 = extraout_XMM0_Da;
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          uVar17 = FUN_00d50b20();
        }
        FUN_011f23a0(uVar17,uVar4);
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        uVar15 = (undefined7)((uint64_t)plVar10 >> 8);
      }
      uVar13 = CONCAT71(uVar15,1);
    }
    FUN_004fbac0();
    if (local_38 == (int64_t *)0x0) {
LAB_01318b8d:
      pplVar9 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*local_38 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01318b8d;
      pplVar9 = &local_90;
    }
    uVar5 = (uint)uVar13 & 0xff;
    if (*pplVar9 == (int64_t *)0x0) {
      uVar5 = 0;
    }
    if (*pplVar9 == (int64_t *)0x0 && (bVar2 ^ 1) == 0) {
      if (local_38 != (int64_t *)0x0) {
        pvVar7 = _pthread_getspecific(0);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011f24e0();
      }
      plVar10 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void*)(plVar10 + 8) = 0;
      plVar10[7] = 0;
      plVar10[9] = 0;
      plVar10[10] = 0;
      plVar10[0xb] = 0;
      pVar11 = 0x25d58b0;
      *plVar10 = (int64_t)&g_025d58b0;
      *(void*)(plVar10 + 0xc) = 0;
      (*g_025d58c8)();
      if (plVar10 == local_38) {
        FUN_00d50b20();
      }
      else {
        bVar16 = local_38 != (int64_t *)0x0;
        local_90 = plVar10;
        local_38 = plVar10;
        if (bVar16) {
          FUN_00d50b20();
        }
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
        pVar11 = (void*)local_38;
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57e0();
      FUN_011f0a90();
      pvVar7 = _pthread_getspecific(pVar11);
      if ((pvVar7 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
        pVar11 = (void*)local_38;
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57e0();
      FUN_011f0ae0();
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011f2240();
      local_68 = '\0';
      local_70 = plVar8;
      iVar6 = FUN_00d23d20();
      uVar17 = extraout_XMM0_Da_00;
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        uVar17 = FUN_00d50b20();
      }
      FUN_011f23a0(uVar17,iVar6 + 1);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar13 = (uint64_t)uVar5;
    }
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    pVar11 = 0;
    FUN_00d50b20();
  }
  else {
    if (local_70 != (int64_t *)0x0) goto LAB_013186b3;
LAB_01318829:
    if (bVar2 == 0) {
      pVar11 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),1);
      uVar13 = 0;
    }
    else {
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7900();
      pVar11 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),1);
      uVar13 = CONCAT71((uint7)uVar1,1);
    }
  }
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar17 = FUN_012e6160();
  plVar10 = local_70;
  if (local_68 == '\0') {
    if (local_70 == (int64_t *)0x0) goto LAB_01318fe6;
    uVar17 = FUN_00d50b00();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      uVar17 = FUN_00d50b20();
    }
  }
  else if (local_70 == (int64_t *)0x0) goto LAB_01318fe6;
  local_68 = 0;
  local_70 = (int64_t *)0x0;
  local_60 = plVar10;
  local_50 = 0;
  local_58 = 0;
  uStack_54 = 0;
  if (0 < *(int *)((int64_t)plVar10 + 0xc)) {
    local_84 = local_84 + 1;
    lVar12 = 0;
    do {
      local_70 = *(int64_t **)(plVar10[2] + lVar12 * 8);
      cVar3 = FUN_01318610(uVar17,bVar2);
      uVar13 = uVar13 & 0xff;
      if (cVar3 == '\0') {
        uVar13 = 0;
      }
      lVar12 = lVar12 + 1;
      local_58 = (int)lVar12;
      uVar17 = extraout_XMM0_Da_01;
    } while (local_58 < *(int *)((int64_t)plVar10 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_01318fe6:
  return uVar13 & 0xffffff01;
}



// ============================================================
// 013710d0
// ============================================================
// Function: FUN_013710d0
// Address: 013710d0
// Size: 2920 bytes
// Class: MUSampledFunction

uint64_t FUN_013710d0(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint uVar7;
  int64_t lVar8;
  bool bVar9;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014d1b50();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_014bc070();
  if (cVar1 == '\0') {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_014bc070();
    if (cVar1 == '\0') {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc420();
      if (local_40 == 0) {
        bVar9 = false;
      }
      else {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc420();
        bVar9 = local_60 == local_40;
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (bVar9) {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc360();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc2e0();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc3d0();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfcb0();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        uVar7 = *(uint *)(local_40 + 0xc);
        lVar6 = local_40;
        if (0 < (int)uVar7) {
          lVar8 = (uint64_t)uVar7 + 1;
          do {
            uVar7 = uVar7 - 1;
            pVar4 = uVar7;
            pvVar2 = _pthread_getspecific(uVar7);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            if ((local_38 == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            pvVar2 = _pthread_getspecific(pVar4);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012708c0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            lVar6 = local_40;
            if (local_40 != 0) {
              pvVar2 = _pthread_getspecific(pVar4);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012708c0();
              pvVar2 = _pthread_getspecific(pVar4);
              if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
                lVar6 = *(int64_t *)
                         (local_40 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
              }
              FUN_012dffb0();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
            if (local_40 != 0) {
              FUN_00d50b20();
            }
            lVar8 = lVar8 + -1;
          } while (1 < lVar8);
        }
        uVar5 = CONCAT71((int7)((uint64_t)lVar6 >> 8),1);
        FUN_00d50b20();
      }
      else {
        uVar5 = 0;
        if (local_40 != 0) {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc360();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc2e0();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc3d0();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dfcb0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfcb0();
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013ddf50();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dfcb0();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dd790();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          uVar7 = *(uint *)(local_40 + 0xc);
          lVar6 = local_40;
          if (0 < (int)uVar7) {
            lVar8 = (uint64_t)uVar7 + 1;
            do {
              uVar7 = uVar7 - 1;
              pVar4 = uVar7;
              pvVar2 = _pthread_getspecific(uVar7);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_011ef8d0();
              if ((local_38 == '\0') && (local_40 != 0)) {
                FUN_00d50b00();
              }
              pvVar2 = _pthread_getspecific(pVar4);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              pvVar2 = _pthread_getspecific(pVar4);
              lVar6 = local_60;
              if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
                lVar6 = *(int64_t *)
                         (local_60 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
              }
              FUN_012e5ae0();
              if (local_38 == '\0') {
                if (local_40 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              FUN_0132a0a0();
              if (local_40 != 0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 != 0) {
                FUN_00d50b20();
              }
              lVar8 = lVar8 + -1;
            } while (1 < lVar8);
          }
          uVar5 = CONCAT71((int7)((uint64_t)lVar6 >> 8),1);
          FUN_00d50b20();
        }
      }
      goto LAB_013712ab;
    }
  }
  uVar5 = 0;
LAB_013712ab:
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffff;
}



// ============================================================
// 013157a0
// ============================================================
// Function: FUN_013157a0
// Address: 013157a0
// Size: 2866 bytes
// Class: MUSampledFunction

uint64_t FUN_013157a0(uint64_t param_1,uint64_t param_2,uint32_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  void *pvVar7;
  int64_t lVar8;
  void* pVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t *this_ptr;
  uint uVar12;
  uint64_t uVar13;
  int64_t lVar14;
  uint64_t local_108;
  uint8_t local_100;
  uint8_t local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  uint32_t local_c4;
  int64_t local_c0;
  uint64_t local_b8;
  int64_t local_b0;
  int64_t local_a8;
  char local_a0;
  uint64_t local_80;
  char local_78;
  int local_68;
  byte local_54;
  int64_t local_40;
  char local_38;
  
  uVar11 = local_80;
  uVar10 = param_1;
  pvVar7 = _pthread_getspecific((void*)param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  iVar1 = *(int *)(local_80 + 0xc);
  pvVar7 = _pthread_getspecific((void*)uVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150eff0();
  iVar2 = *(int *)(local_40 + 0xc);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (iVar1 != iVar2) {
    return 0;
  }
  pvVar7 = _pthread_getspecific((void*)uVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_78 == '\0') {
    if (local_80 == 0) goto LAB_0131607e;
    FUN_00d50b00();
  }
  else if (local_80 == 0) {
LAB_0131607e:
    uVar13 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    uVar11 = uVar10;
    goto LAB_01316081;
  }
  local_78 = '\0';
  local_80 = 0;
  local_b8 = uVar11;
  local_68 = -1;
  local_c4 = param_3;
  uVar12 = 0xffffff01;
LAB_01315958:
  while( true ) {
    uVar6 = uVar12;
    lVar14 = (int64_t)local_68;
    local_68 = local_68 + 1;
    if (*(int *)(uVar11 + 0xc) <= local_68) break;
    lVar8 = *(int64_t *)(uVar11 + 0x10);
    local_80 = *(uint64_t *)(lVar8 + 8 + lVar14 * 8);
    pvVar7 = _pthread_getspecific((void*)lVar8);
    pVar9 = (void*)lVar8;
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar12 = uVar6;
    if (local_40 == 0) {
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a2d0();
    }
    else {
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150d280();
      local_38 = '\0';
      cVar5 = FUN_00d23d70();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') goto LAB_01315bc6;
      if (local_40 != 0) goto LAB_0131604c;
    }
  }
  FUN_001159b0();
  FUN_00d50b20();
  uVar13 = (uint64_t)uVar6;
  param_3 = local_c4;
LAB_01316081:
  pvVar7 = _pthread_getspecific((void*)uVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  iVar1 = *(int *)(local_80 + 0xc);
  if (local_78 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 != 0) {
    pvVar7 = _pthread_getspecific((void*)uVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if (local_78 == '\0') {
      if (local_80 == 0) {
        return uVar13;
      }
      FUN_00d50b00();
    }
    else if (local_80 == 0) {
      return uVar13;
    }
    uVar12 = (uint)uVar13;
    if (0 < *(int *)(local_80 + 0xc)) {
      local_b8 = CONCAT44(local_b8._4_4_,param_3) & 0xffffffff000000ff;
      lVar14 = 0;
      do {
        uVar3 = *(void*)(*(int64_t *)(local_80 + 0x10) + lVar14 * 8);
        pvVar7 = _pthread_getspecific((void*)uVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150eff0();
        lVar8 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + lVar14 * 8);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        local_100 = 0;
        uVar11 = (uint64_t)((void*)param_1 & 0xff);
        local_108 = uVar3;
        cVar5 = FUN_013157a0(uVar11,&local_108,local_b8 & 0xffffffff,param_4,lVar8,1);
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        uVar13 = uVar13 & 0xff;
        if (cVar5 == '\0') {
          uVar13 = 0;
        }
        uVar12 = (uint)uVar13;
        lVar14 = lVar14 + 1;
      } while ((int)lVar14 < *(int *)(local_80 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
    uVar13 = (uint64_t)uVar12;
  }
  return uVar13;
LAB_01315bc6:
  uVar12 = 0;
  if (local_40 == 0) goto LAB_01315958;
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01508450();
  if (local_40 == 0) {
    uVar6 = 0;
    goto LAB_0131604c;
  }
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01508450();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(pVar9);
  if ((pvVar7 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
    pVar9 = (void*)local_40;
  }
  FUN_0150fe10();
  local_b0 = local_40;
  local_54 = (byte)param_1;
  if (local_40 == 0) {
    lVar14 = *this_ptr;
    if (lVar14 == 0) {
      uVar6 = 0;
      goto LAB_0131604c;
    }
LAB_01315d45:
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      lVar14 = *this_ptr;
      lVar8 = FUN_00e8b990();
      if (lVar8 != 0) {
        lVar14 = *(int64_t *)(lVar14 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
    }
    lVar14 = *(int64_t *)(lVar14 + 0x40);
    if (lVar14 != 0) {
      FUN_00d50b00();
    }
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
joined_r0x01315f26:
    if (local_54 == 0) goto LAB_01316026;
    pvVar7 = _pthread_getspecific(pVar9);
    if ((pvVar7 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
      pVar9 = (void*)local_40;
    }
    local_e8 = local_40;
    local_e0 = '\0';
    FUN_0150d560();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_d8 = local_40;
    local_d0 = '\0';
    FUN_0150d3a0();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    lVar14 = *this_ptr;
    if (lVar14 != 0) {
      if (local_b0 == 0) goto LAB_01315d45;
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        lVar14 = *this_ptr;
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar14 = *(int64_t *)(lVar14 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar14 = *(int64_t *)(lVar14 + 0x40);
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pVar9 = (void*)lVar14;
      }
      FUN_015058d0();
      local_c0 = local_40;
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      local_f0 = 1;
      bVar4 = FUN_01315610();
      if (local_c0 != 0) {
        FUN_00d50b20();
      }
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
      local_54 = local_54 & bVar4;
      goto joined_r0x01315f26;
    }
LAB_01316026:
    uVar6 = 0;
  }
  if (local_b0 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
LAB_0131604c:
  local_38 = '\0';
  FUN_00d50b20();
  uVar12 = uVar6;
  goto LAB_01315958;
}



// ============================================================
// 01971280
// ============================================================
// Function: FUN_01971280
// Address: 01971280
// Size: 2029 bytes
// Class: MUSampledFunction

void FUN_01971280(void* param_1,uint64_t param_2)

{
  code *pcVar1;
  void *pvVar2;
  int64_t lVar3;
  void*puVar4;
  int64_t lVar5;
  void*puVar6;
  void*puVar7;
  int64_t *plVar8;
  void*arg1;
  int64_t this_ptr;
  int64_t *plVar9;
  float extraout_XMM0_Db;
  double dVar10;
  double dVar11;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  float fVar16;
  float fVar17;
  float local_58;
  int64_t *local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb_00;
  
  fVar17 = (float)((uint64_t)param_2 >> 0x20);
  fVar16 = (float)param_2;
  FUN_01976670();
  FUN_01d48370();
  FUN_01d48b40();
  FUN_01cfcdc0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3b0))();
  FUN_01cfcdc0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar9 = (int64_t *)*arg1;
  FUN_01d39800();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar9 + 0x3a8))();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x390))();
  FUN_01d48b40();
  FUN_01cfcdc0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar5 = *(int64_t *)(this_ptr + 0x178);
  if (lVar5 != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      lVar5 = *(int64_t *)(this_ptr + 0x178);
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
    }
    if (*(int64_t *)(lVar5 + 0x168) != 0) {
      FUN_01989f80();
      dVar10 = (double)(**(code **)(*local_40 + 0x930))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      puVar7 = &g_02680400;
      *puVar4 = &g_02680400;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(void*)((int64_t)puVar4 + 0x39) = 0;
      *(void*)((int64_t)puVar4 + 0x41) = 0;
      pcVar1 = g_02680418;
      (*g_02680418)();
      for (local_58 = 0.0; FUN_01e3f820(), local_58 < fVar16; local_58 = local_58 + g_02390124) {
        lVar5 = *(int64_t *)(this_ptr + 0x178);
        pvVar2 = _pthread_getspecific((void*)puVar7);
        if (pvVar2 != (void *)0x0) {
          lVar5 = *(int64_t *)(this_ptr + 0x178);
          lVar3 = FUN_00e8b990();
          if (lVar3 != 0) {
            lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
          }
        }
        plVar9 = *(int64_t **)(lVar5 + 0x168);
        pvVar2 = _pthread_getspecific((void*)puVar7);
        if (pvVar2 != (void *)0x0) {
          plVar9 = *(int64_t **)(lVar5 + 0x168);
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
        }
        FUN_01989f80();
        dVar11 = (double)(**(code **)(*local_40 + 0x930))(*(float *)(this_ptr + 0x10c) + local_58);
        auVar13._0_8_ = (double)(**(code **)(*plVar9 + 0x380))(dVar11 - dVar10);
        auVar13._8_8_ = extraout_XMM0_Qb;
        auVar12._4_12_ = auVar13._4_12_;
        auVar12._0_4_ = (float)auVar13._0_8_ * fVar17;
        auVar13 = roundss(auVar12,auVar12,9);
        fVar16 = (extraout_XMM0_Db + fVar17) - auVar13._0_4_;
        FUN_01d38ba0();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
      fVar16 = 0.0;
      FUN_01cfcdc0();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar5 = *(int64_t *)(this_ptr + 0x178);
      pvVar2 = _pthread_getspecific((void*)puVar7);
      if (pvVar2 != (void *)0x0) {
        lVar5 = *(int64_t *)(this_ptr + 0x178);
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
        }
      }
      plVar9 = *(int64_t **)(lVar5 + 0x188);
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_02680400;
      *(void*)((int64_t)puVar6 + 0xc) = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      *(void*)((int64_t)puVar6 + 0x39) = 0;
      *(void*)((int64_t)puVar6 + 0x41) = 0;
      (*pcVar1)();
      if (puVar4 == puVar6) {
        FUN_00d50b20();
        puVar6 = puVar4;
      }
      else if (puVar4 != (void*)0x0) {
        FUN_00d50b20();
      }
      for (local_58 = 0.0; FUN_01e3f820(), local_58 < fVar16; local_58 = local_58 + g_02390124) {
        pvVar2 = _pthread_getspecific((void*)puVar7);
        plVar8 = plVar9;
        if ((pvVar2 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          plVar8 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
        }
        FUN_01989f80();
        dVar11 = (double)(**(code **)(*local_40 + 0x930))(*(float *)(this_ptr + 0x10c) + local_58);
        auVar14._0_8_ = (double)(**(code **)(*plVar8 + 0x380))(dVar11 - dVar10);
        auVar14._8_8_ = extraout_XMM0_Qb_00;
        auVar15._4_12_ = auVar14._4_12_;
        auVar15._0_4_ = (float)auVar14._0_8_ * fVar17 * g_0239011c;
        auVar13 = roundss(auVar15,auVar15,9);
        fVar16 = (extraout_XMM0_Db + fVar17) - auVar13._0_4_;
        FUN_01d38ba0();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
      FUN_01d48390();
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (puVar6 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 0126de80
// ============================================================
// Function: FUN_0126de80
// Address: 0126de80
// Size: 2095 bytes
// Class: MUSampledFunction

void FUN_0126de80(void* param_1)

{
  uint uVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double local_78;
  double local_68;
  int64_t local_58;
  char local_50;
  double local_48;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eca90();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_00d6f370();
  lVar4 = g_027bebe0;
  if (g_027bebe0 != 0) {
    FUN_00d50b00();
  }
  dVar6 = (double)FUN_00d70d40(0);
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar1 = *(uint *)(local_58 + 0xc);
  if (0 < (int)uVar1) {
    dVar6 = (double)(~-(uint64_t)(dVar6 == 0.0) & (uint64_t)dVar6 |
                    g_023908d0 & -(uint64_t)(dVar6 == 0.0));
    lVar3 = (uint64_t)(uVar1 - 1) << 3;
    lVar5 = 0;
    lVar4 = lVar3;
    do {
      dVar7 = g_0238fee8;
      if ((lVar5 != 0) && (lVar3 != lVar5)) {
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar7 = (double)FUN_013faed0();
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_013faed0();
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_013faf20();
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_013faf20();
        dVar7 = g_0238fee8 / ((dVar7 - dVar8) / (dVar9 - dVar10));
      }
      if (lVar5 == 0) {
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c830(g_0240cfe0);
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c880(dVar7 * g_0240cfe0);
      }
      else {
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_013faed0();
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_013faed0();
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_013faf20();
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_013faf20();
        dVar8 = dVar8 - dVar9;
        dVar10 = dVar10 - dVar11;
        dVar9 = dVar6 * dVar8;
        local_78 = (SQRT(dVar10 * dVar10 + dVar8 * dVar8) * dVar6) /
                   SQRT(dVar7 * dVar7 + g_0238fee8);
        local_68 = dVar7 * local_78;
        if (local_78 <= dVar9) {
          if (dVar10 * dVar6 < local_68) goto LAB_0126e333;
        }
        else {
          local_68 = (local_68 * dVar9) / local_78;
          local_78 = dVar9;
          if (dVar10 * dVar6 < local_68) {
LAB_0126e333:
            local_78 = (local_78 * dVar10 * dVar6) / local_68;
            local_68 = dVar10 * dVar6;
          }
        }
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c830((uint64_t)local_78 ^ g_023945b0);
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c880((uint64_t)local_68 ^ g_023945b0);
      }
      if (lVar3 == lVar5) {
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c8d0(g_0240cfe8);
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c920(dVar7 * g_0240cfe8);
      }
      else {
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_013faed0();
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_013faed0();
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_013faf20();
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_013faf20();
        dVar8 = dVar8 - dVar9;
        dVar10 = dVar10 - dVar11;
        dVar9 = dVar6 * dVar8;
        local_48 = (SQRT(dVar10 * dVar10 + dVar8 * dVar8) * dVar6) /
                   SQRT(dVar7 * dVar7 + g_0238fee8);
        local_68 = dVar7 * local_48;
        if (local_48 <= dVar9) {
          if (dVar10 * dVar6 < local_68) goto LAB_0126e663;
        }
        else {
          local_68 = (local_68 * dVar9) / local_48;
          local_48 = dVar9;
          if (dVar10 * dVar6 < local_68) {
LAB_0126e663:
            local_48 = (local_48 * dVar10 * dVar6) / local_68;
            local_68 = dVar10 * dVar6;
          }
        }
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c8d0(local_48);
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c920(local_68);
      }
      lVar5 = lVar5 + 8;
    } while ((uint64_t)uVar1 << 3 != lVar5);
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 0126bf30
// ============================================================
// Function: FUN_0126bf30
// Address: 0126bf30
// Size: 1520 bytes
// Class: MUSampledFunction

void FUN_0126bf30(void* param_1)

{
  uint64_t uVar1;
  void*puVar2;
  uint64_t uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  void *pvVar8;
  void*puVar9;
  int64_t lVar10;
  void* pVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t this_ptr;
  uint64_t uVar14;
  bool bVar15;
  uint32_t uVar16;
  uint uVar17;
  uint64_t local_a8;
  int64_t local_80;
  char local_78;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_0125e7c0();
  if (local_40 == (int64_t *)0x0) {
    bVar15 = false;
  }
  else {
    FUN_0125e7c0();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfcb0();
    bVar15 = local_80 != 0;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar15) {
    FUN_0125e7c0();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfcb0();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013ddeb0();
    local_48 = local_40;
    if (local_40 == (int64_t *)0x0) {
      bVar15 = true;
      local_48 = (int64_t *)0x0;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar15 = false;
    }
    else {
      local_38 = '\0';
      bVar15 = false;
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != (int64_t *)0x0) {
      uVar7 = FUN_00e7d850(SUB84(*(double *)(this_ptr + 0xf0) * g_0240f0f0,0));
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      puVar9 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void*)(puVar9 + 7) = 0;
      *(void*)((int64_t)puVar9 + 0x3c) = 0;
      *(void*)(puVar9 + 8) = 0;
      plVar12 = (int64_t *)&g_025dc9e8;
      *puVar9 = &g_025dc9e8;
      puVar9[9] = 0;
      puVar9[10] = 0;
      (*g_025dca00)();
      pvVar8 = _pthread_getspecific((void*)plVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb950(SUB84(g_0240f0f0,0));
      pvVar8 = _pthread_getspecific((void*)plVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb890();
      pVar11 = (void*)plVar12;
      if (0 < (int)uVar7) {
        uVar14 = 0;
        do {
          dVar6 = (double)(int)uVar14 / g_0240f0f0;
          plVar13 = *(int64_t **)(this_ptr + 0xd0);
          pvVar8 = _pthread_getspecific((void*)plVar12);
          if (pvVar8 != (void *)0x0) {
            plVar13 = *(int64_t **)(this_ptr + 0xd0);
            lVar10 = FUN_00e8b990();
            if (lVar10 != 0) {
              plVar13 = (int64_t *)plVar13[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
            }
          }
          uVar1 = uVar14 + 1;
          uVar3 = (**(code **)(*plVar13 + 0x3b8))(SUB84((double)(int)uVar1 / g_0240f0f0,0));
          uVar16 = SUB84(dVar6,0);
          local_a8 = uVar3;
          if (uVar14 == 0) {
            plVar13 = *(int64_t **)(this_ptr + 0xd0);
            pvVar8 = _pthread_getspecific((void*)plVar12);
            if (pvVar8 != (void *)0x0) {
              plVar13 = *(int64_t **)(this_ptr + 0xd0);
              lVar10 = FUN_00e8b990();
              if (lVar10 != 0) {
                plVar13 = (int64_t *)plVar13[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
              }
            }
            uVar17 = (**(code **)(*plVar13 + 0x3b8))(uVar16);
            local_a8 = (uint64_t)uVar17;
          }
          pvVar8 = _pthread_getspecific((void*)plVar12);
          plVar13 = local_48;
          if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar12 = local_48;
            plVar13 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          dVar4 = (double)(**(code **)(*plVar13 + 0x3a8))((int)local_a8,uVar3);
          plVar13 = *(int64_t **)(this_ptr + 0x188);
          pvVar8 = _pthread_getspecific((void*)plVar12);
          if (pvVar8 != (void *)0x0) {
            plVar13 = *(int64_t **)(this_ptr + 0x188);
            lVar10 = FUN_00e8b990();
            if (lVar10 != 0) {
              plVar13 = (int64_t *)plVar13[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
            }
          }
          dVar5 = (double)(**(code **)(*plVar13 + 0x380))(uVar16);
          dVar6 = (double)FUN_0126c880(SUB84(dVar4 * dVar5,0),dVar6);
          pVar11 = (void*)plVar12;
          *(float *)(local_40[2] + uVar14 * 4) = (float)dVar6;
          uVar14 = uVar1;
        } while (uVar1 != uVar7);
      }
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb720();
      puVar2 = *(void**)(this_ptr + 0x78);
      if (puVar2 != puVar9) {
        if (puVar9 != (void*)0x0) {
          FUN_00d50b00();
        }
        *(void**)(this_ptr + 0x78) = puVar9;
        if (puVar2 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      if (puVar9 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (!bVar15) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 0196da90
// ============================================================
// Function: FUN_0196da90
// Address: 0196da90
// Size: 1316 bytes
// Class: MUSampledFunction
// String references:
//   "MUSampledFunction"

uint64_t FUN_0196da90(double param_1,char *param_2)

{
  double dVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t lVar8;
  void* in_ECX;
  void* pVar9;
  int64_t *plVar11;
  undefined7 uVar13;
  uint64_t uVar12;
  int64_t *arg1;
  float *this_ptr;
  int64_t *plVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  float fVar18;
  int64_t *local_68;
  double local_60;
  int64_t *local_58;
  char local_50;
  int iVar10;
  
  bVar17 = false;
  bVar16 = false;
  local_68 = (int64_t *)0x0;
  bVar15 = false;
  *param_2 = '\0';
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125ec20();
  if (local_58 == (int64_t *)0x0) {
    *this_ptr = 0.0;
    plVar14 = (int64_t *)0x0;
    plVar11 = local_68;
    goto LAB_0196deb5;
  }
  bVar15 = local_50 != '\0';
  local_68 = local_58;
  if (bVar15) {
    local_50 = '\0';
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264180();
  if (local_58 == (int64_t *)0x0) {
    plVar14 = (int64_t *)0x0;
    local_60 = param_1;
  }
  else {
    bVar16 = local_50 != '\0';
    if (bVar16) {
      local_50 = '\0';
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    plVar11 = local_58;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar11 = (int64_t *)local_58[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    local_60 = (double)(**(code **)(*plVar11 + 0x388))((float)param_1);
    plVar14 = local_58;
  }
  if ((g_027c01a0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027af248 = FUN_001016a0();
    g_027af230 = "MUSampledFunction";
    g_027af238 = 0x58;
    in_ECX = 0x101650;
    g_027af240 = FUN_00101650;
    g_027af250 = 0;
    ram_00000000027af258 = 0;
    g_027af260 = 0;
    ram_00000000027af268 = 0;
    g_027af270 = 0;
    ram_00000000027af278 = 0;
    g_027af280 = 0;
    ram_00000000027af288 = 0;
    g_027af290 = 0;
    ram_00000000027af298 = 0;
    g_027af2a0 = 0;
    ram_00000000027af2a8 = 0;
    g_027af2b0 = 0;
    ram_00000000027af2b8 = 0;
    g_027af2c0 = 0;
    ram_00000000027af2c8 = 0;
    g_027af2d0 = 0;
    ram_00000000027af2d8 = 0;
    g_027af2e0 = 0;
    ram_00000000027af2e8 = 0;
    g_027af2f0 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*local_58 + 0x360))();
  cVar3 = FUN_00e85ea0();
  if (cVar3 == '\0') {
    plVar11 = g_02802688;
    if (g_02802688 == (int64_t *)0x0) goto LAB_0196dd31;
LAB_0196dc84:
    pvVar5 = _pthread_getspecific(in_ECX);
    plVar7 = plVar11;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    dVar1 = (double)plVar7[10];
    pvVar5 = _pthread_getspecific(in_ECX);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar11 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    iVar4 = (int)(dVar1 * local_60) + 1;
    if (plVar11[9] == 0) {
      pVar9 = 0;
      in_ECX = 0;
      if (iVar4 < 0) goto LAB_0196dd31;
    }
    else {
      iVar2 = *(int *)(plVar11[9] + 0x18);
      iVar10 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar10 = iVar2;
      }
      pVar9 = iVar10 >> 2;
      in_ECX = pVar9;
      if (iVar4 < (int)pVar9) goto LAB_0196dd31;
    }
    *this_ptr = 0.0;
    *param_2 = '\x01';
LAB_0196dddd:
    lVar6 = *arg1;
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      lVar6 = *arg1;
      lVar8 = FUN_00e8b990();
      if (lVar8 != 0) {
        lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
    }
    FUN_0125ec90();
    uVar13 = (undefined7)((uint64_t)lVar6 >> 8);
    if (local_58 == (int64_t *)0x0) {
      uVar12 = CONCAT71(uVar13,1);
      plVar11 = (int64_t *)0x0;
      goto joined_r0x0196de4b;
    }
    bVar17 = local_50 != '\0';
    pvVar5 = _pthread_getspecific(pVar9);
    plVar11 = local_58;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar11 = (int64_t *)local_58[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    fVar18 = (float)(**(code **)(*plVar11 + 0x398))(SUB84(local_60,0));
    plVar11 = local_58;
    if (g_023b4df0 <= fVar18) {
      uVar12 = CONCAT71(uVar13,1);
      goto joined_r0x0196de4b;
    }
  }
  else {
    plVar11 = local_58;
    if (local_58 != (int64_t *)0x0) goto LAB_0196dc84;
LAB_0196dd31:
    pVar9 = in_ECX;
    if (*param_2 != '\0') goto LAB_0196dddd;
    pvVar5 = _pthread_getspecific(pVar9);
    plVar11 = local_58;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar11 = (int64_t *)local_58[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    fVar18 = (float)(**(code **)(*plVar11 + 0x398))(SUB84(local_60,0));
    *this_ptr = fVar18;
    plVar11 = (int64_t *)0x0;
    if ((!NAN(fVar18)) && ((fVar18 != 0.0 || (NAN(fVar18))))) {
      if ((fVar18 != g_02394274) || (NAN(fVar18) || NAN(g_02394274))) goto LAB_0196dddd;
    }
  }
LAB_0196deb5:
  uVar12 = 0;
  local_58 = local_68;
joined_r0x0196de4b:
  if ((bVar15) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar16) && (plVar14 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar17) && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return uVar12 & 0xffffffff;
}



// ============================================================
// 0126b620
// ============================================================
// Function: FUN_0126b620
// Address: 0126b620
// Size: 1315 bytes
// Class: MUSampledFunction

void FUN_0126b620(void* param_1)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  bool bVar6;
  uint64_t uVar7;
  double dVar8;
  double dVar9;
  int64_t local_b8;
  char local_b0;
  uint64_t local_a0;
  int64_t local_80;
  char local_78;
  double local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  double local_48;
  int64_t *local_40;
  
  FUN_0125e7c0();
  if (local_68 == (int64_t *)0x0) {
    bVar6 = false;
  }
  else {
    FUN_0125e7c0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfcb0();
    bVar6 = local_80 != 0;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar6) {
    FUN_0125e7c0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfcb0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013ddeb0();
    local_40 = local_68;
    if (local_68 == (int64_t *)0x0) {
      bVar6 = true;
      local_40 = (int64_t *)0x0;
    }
    else if (local_60 == '\0') {
      FUN_00d50b00();
      bVar6 = false;
    }
    else {
      bVar6 = false;
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      plVar3 = (int64_t *)FUN_000bea40();
      (**(code **)(*plVar3 + 0x18))();
      local_70 = 0.0;
      local_a0 = 0;
      do {
        if ((local_70 != g_02390448) || (dVar8 = local_70, NAN(local_70) || NAN(g_02390448))) {
          dVar9 = local_70 + g_024113c8;
          dVar8 = *(double *)(this_ptr + 0xf0);
          if (*(double *)(this_ptr + 0xf0) < dVar9) goto LAB_0126b891;
          plVar5 = *(int64_t **)(this_ptr + 0xd0);
          pvVar2 = _pthread_getspecific((void*)local_68);
          if (pvVar2 != (void *)0x0) {
            plVar5 = *(int64_t **)(this_ptr + 0xd0);
            lVar4 = FUN_00e8b990();
            if (lVar4 != 0) {
              plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
            }
          }
          uVar7 = (**(code **)(*plVar5 + 0x3b8))(dVar9);
          pvVar2 = _pthread_getspecific((void*)local_68);
          plVar5 = local_40;
          if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            local_68 = local_40;
            plVar5 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          local_48 = (double)(**(code **)(*plVar5 + 0x3a8))(local_a0,uVar7);
          plVar5 = *(int64_t **)(this_ptr + 0x188);
          pvVar2 = _pthread_getspecific((void*)local_68);
          if (pvVar2 != (void *)0x0) {
            plVar5 = *(int64_t **)(this_ptr + 0x188);
            lVar4 = FUN_00e8b990();
            if (lVar4 != 0) {
              plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
            }
          }
          dVar8 = (double)(**(code **)(*plVar5 + 0x380))(local_70);
          local_48 = local_48 * dVar8;
          local_a0 = uVar7;
        }
        else {
LAB_0126b891:
          local_70 = dVar8;
          local_48 = 0.0;
        }
        pvVar2 = _pthread_getspecific((void*)local_68);
        plVar5 = plVar3;
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar5 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar5 + 0x418))(local_70,local_48);
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        local_70 = local_70 + g_024113c8;
      } while (local_70 < *(double *)(this_ptr + 0xf0));
      pvVar2 = _pthread_getspecific((void*)local_68);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb720();
      plVar5 = (int64_t *)(this_ptr + 0x168);
      FUN_00d64850();
      plVar1 = (int64_t *)*plVar5;
      if (plVar1 != plVar3) {
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *plVar5 = (int64_t)plVar3;
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        FUN_00e8b990();
        lVar4 = *plVar5;
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_00cb00c0();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (!bVar6) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 01268710
// ============================================================
// Function: FUN_01268710
// Address: 01268710
// Size: 1247 bytes
// Class: MUSampledFunction

int64_t * FUN_01268710(void* param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  void* pVar10;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar11;
  int64_t lVar12;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(arg1 + 0x100) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_40 == 0) {
    bVar5 = true;
    lVar11 = 0;
  }
  else {
    lVar11 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar5 = false;
    }
    else {
      bVar5 = false;
    }
  }
  FUN_0125e7c0();
  if (local_40 != 0) {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      param_1 = (void*)local_40;
    }
    FUN_013e5de0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      if (*(int64_t *)(arg1 + 0xa8) == 0) {
LAB_01268986:
        if (*(int *)(lVar11 + 0xc) < 1) {
          lVar7 = 0;
          bVar4 = false;
        }
        else {
          lVar7 = 0;
          bVar4 = false;
          lVar12 = 0;
          do {
            lVar9 = *(int64_t *)(*(int64_t *)(lVar11 + 0x10) + lVar12 * 8);
            lVar8 = lVar11;
            if (lVar7 == lVar9) {
              if ((!bVar4) && (lVar7 != 0)) {
                bVar4 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar9 != 0) {
                FUN_00d50b00();
              }
              if ((bVar4) && (lVar7 != 0)) {
                FUN_00d50b20();
                bVar4 = true;
                lVar7 = lVar9;
              }
              else {
                bVar4 = true;
                lVar7 = lVar9;
              }
            }
            pVar10 = (void*)lVar8;
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            pvVar6 = _pthread_getspecific(pVar10);
            lVar9 = lVar7;
            if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              lVar9 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
            dVar1 = *(double *)(lVar9 + 0xe8);
            dVar2 = *(double *)(lVar9 + 0xf0);
            dVar3 = *(double *)(arg1 + 0xe8);
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((double)((uint64_t)((dVar1 + dVar2) - dVar3) & g_023908f0) < g_02391038) {
              *(void*)(this_ptr + 1) = 0;
              local_40 = lVar7;
              if (bVar4) {
                *this_ptr = lVar7;
                *(void*)(this_ptr + 1) = 1;
                bVar4 = false;
              }
              else {
                if (lVar7 != 0) {
                  FUN_00d50b00();
                }
                *this_ptr = lVar7;
                *(void*)(this_ptr + 1) = 1;
                bVar4 = false;
              }
              goto LAB_01268b86;
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 < *(int *)(lVar11 + 0xc));
        }
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        local_40 = lVar7;
      }
      else {
        pvVar6 = _pthread_getspecific(param_1);
        lVar7 = arg1;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar10 = (void*)lVar7;
        FUN_012dff70();
        if (local_40 == 0) goto LAB_01268986;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        *this_ptr = local_40;
        *(void*)(this_ptr + 1) = 1;
        bVar4 = false;
      }
LAB_01268b86:
      FUN_00d50b20();
      if ((bVar4) && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01268ba5;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_01268ba5:
  if (!bVar5 && lVar11 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01266770
// ============================================================
// Function: FUN_01266770
// Address: 01266770
// Size: 816 bytes
// Class: MUSampledFunction

int64_t * FUN_01266770(int64_t param_1)

{
  double *pdVar1;
  int64_t lVar2;
  uint32_t uVar3;
  char *pcVar4;
  void *pvVar5;
  int64_t lVar6;
  uint64_t uVar7;
  undefined7 uVar8;
  undefined7 extraout_var;
  void* pVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar10;
  uint32_t uVar11;
  int64_t lVar12;
  double local_68;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  uint32_t local_3c;
  char local_38 [8];
  
  FUN_00d23310();
  local_38[0] = local_50[0];
  pcVar4 = local_50;
  if (local_50[0] == '\0') {
    pcVar4 = local_38;
  }
  *pcVar4 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific((void*)param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    local_68 = *(double *)(local_58 + 0xe8);
  }
  else {
    local_68 = *(double *)
                (*(int64_t *)(local_58 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                0xe8);
  }
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar7 = FUN_00d23310();
  uVar8 = (undefined7)((uint64_t)uVar7 >> 8);
  pcVar4 = local_50;
  if (local_50[0] == '\0') {
    pcVar4 = local_38;
  }
  local_38[0] = local_50[0];
  *pcVar4 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
    uVar8 = extraout_var;
  }
  if (local_58 == 0) {
    local_3c = 0;
  }
  else {
    local_3c = (uint32_t)CONCAT71(uVar8,1);
    if (local_38[0] == '\0') {
      FUN_00d50b00();
    }
  }
  local_48 = local_58;
  lVar6 = *arg1;
  if (*(int *)(lVar6 + 0xc) < 2) {
    uVar11 = 0;
    lVar10 = 0;
  }
  else {
    lVar12 = 1;
    lVar10 = 0;
    uVar11 = 0;
    do {
      pVar9 = (void*)param_1;
      lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar12 * 8);
      if (lVar10 == lVar6) {
        if (((char)uVar11 == '\0') && (lVar10 != 0)) {
          uVar11 = 1;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if (((char)uVar11 == '\0') || (lVar10 == 0)) {
          uVar11 = 1;
          lVar10 = lVar6;
        }
        else {
          FUN_00d50b20();
          uVar11 = 1;
          lVar10 = lVar6;
        }
      }
      pvVar5 = _pthread_getspecific(pVar9);
      if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
        lVar6 = local_48;
        uVar3 = local_3c;
        if (*(double *)(lVar10 + 0xe8) <= local_68 && local_68 != *(double *)(lVar10 + 0xe8))
        goto LAB_012669a6;
      }
      else {
        pdVar1 = (double *)
                 (*(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                 0xe8);
        lVar6 = local_48;
        uVar3 = local_3c;
        if (*pdVar1 <= local_68 && local_68 != *pdVar1) {
LAB_012669a6:
          pvVar5 = _pthread_getspecific(pVar9);
          if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
            local_68 = *(double *)(lVar10 + 0xe8);
            lVar2 = lVar10;
          }
          else {
            lVar2 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
            local_68 = *(double *)(lVar2 + 0xe8);
          }
          if (local_48 == lVar10) {
            lVar6 = local_48;
            uVar3 = local_3c;
            if ((((char)uVar11 != '\0') && ((char)local_3c == '\0')) && (lVar10 != 0)) {
              local_3c = (uint32_t)CONCAT71((int7)((uint64_t)lVar2 >> 8),1);
              FUN_00d50b00();
              lVar6 = local_48;
              uVar3 = local_3c;
            }
          }
          else {
            if (((char)uVar11 != '\0') && (lVar10 != 0)) {
              FUN_00d50b00();
            }
            lVar6 = lVar10;
            uVar3 = uVar11;
            if (((char)local_3c != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      local_3c = uVar3;
      local_48 = lVar6;
      lVar12 = lVar12 + 1;
      lVar6 = *arg1;
      param_1 = (int64_t)*(int *)(lVar6 + 0xc);
    } while (lVar12 < param_1);
  }
  lVar6 = local_48;
  *(void*)(this_ptr + 1) = 0;
  if (((char)local_3c == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  if (((char)uVar11 != '\0') && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 014bf4a0
// ============================================================
// Function: FUN_014bf4a0
// Address: 014bf4a0
// Size: 1089 bytes
// Class: MUSampledFunction

void FUN_014bf4a0(void* param_1)

{
  void*puVar1;
  void*puVar2;
  float fVar3;
  uint32_t uVar4;
  int iVar5;
  int64_t lVar6;
  void*puVar7;
  int iVar8;
  void *pvVar9;
  void*puVar10;
  int64_t lVar11;
  int64_t lVar12;
  void* pVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint uVar16;
  uint64_t uVar17;
  int64_t this_ptr;
  int64_t local_40;
  char local_38;
  
  lVar12 = *(int64_t *)(this_ptr + 0x88);
  if (lVar12 == 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x48) == 0) {
    return;
  }
  FUN_00d50b00();
  pvVar9 = _pthread_getspecific(param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb920();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  lVar6 = *(int64_t *)(this_ptr + 0x48);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific(param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb920();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  iVar5 = *(int *)(local_40 + 0x18);
  iVar8 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar8 = iVar5;
  }
  if (iVar5 < 4) {
LAB_014bf8a0:
    if (local_40 == 0) goto LAB_014bf8ae;
  }
  else {
    fVar3 = **(float **)(local_40 + 0x10);
    if (fVar3 < g_023b4df0) {
      if (g_023b4df0 <= fVar3) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        do {
          if ((uint64_t)(uint)(iVar8 >> 2) - 1 == uVar17) goto LAB_014bf8a0;
          lVar11 = uVar17 + 1;
          uVar17 = uVar17 + 1;
        } while ((*(float **)(local_40 + 0x10))[lVar11] < g_023b4df0);
      }
      uVar16 = (uint)uVar17;
      uVar17 = uVar17 & 0xffffffff;
      uVar4 = *(void*)(*(int64_t *)(local_40 + 0x10) + uVar17 * 4);
      FUN_00c8e4f0();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      if (uVar16 != 0) {
        lVar11 = *(int64_t *)(local_40 + 0x10);
        if (uVar16 < 8) {
          uVar14 = 0;
        }
        else {
          uVar14 = uVar17 - (uVar16 & 7);
          uVar15 = 0;
          do {
            puVar2 = (void*)(lVar11 + uVar15 * 4);
            *puVar2 = uVar4;
            puVar2[1] = uVar4;
            puVar2[2] = uVar4;
            puVar2[3] = uVar4;
            puVar2 = (void*)(lVar11 + 0x10 + uVar15 * 4);
            *puVar2 = uVar4;
            puVar2[1] = uVar4;
            puVar2[2] = uVar4;
            puVar2[3] = uVar4;
            uVar15 = uVar15 + 8;
          } while (uVar14 != uVar15);
          if ((uint64_t)(uVar16 & 7) == 0) goto LAB_014bf72e;
        }
        do {
          *(void*)(lVar11 + uVar14 * 4) = uVar4;
          uVar14 = uVar14 + 1;
        } while (uVar17 != uVar14);
      }
LAB_014bf72e:
      puVar10 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void*)(puVar10 + 7) = 0;
      *(void*)((int64_t)puVar10 + 0x3c) = 0;
      *(void*)(puVar10 + 8) = 0;
      pVar13 = 0x25dc9e8;
      *puVar10 = &g_025dc9e8;
      puVar10[9] = 0;
      puVar10[10] = 0;
      (*g_025dca00)();
      pvVar9 = _pthread_getspecific(pVar13);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar9 = _pthread_getspecific(pVar13);
      if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
      }
      FUN_013eb950((int)*(void*)(lVar12 + 0x50));
      pvVar9 = _pthread_getspecific(pVar13);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb890();
      puVar1 = (void*)(this_ptr + 0x88);
      if ((void*)*puVar1 != puVar10) {
        FUN_00d64850();
        puVar7 = (void*)*puVar1;
        if (puVar7 != puVar10) {
          FUN_00d50b00();
          *puVar1 = puVar10;
          if (puVar7 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_00d64910();
      }
      FUN_00d50b20();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      goto LAB_014bf8a0;
    }
  }
  FUN_00d50b20();
LAB_014bf8ae:
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01266b80
// ============================================================
// Function: FUN_01266b80
// Address: 01266b80
// Size: 807 bytes
// Class: MUSampledFunction

int64_t * FUN_01266b80(int64_t param_1)

{
  uint32_t uVar1;
  char *pcVar2;
  void *pvVar3;
  int64_t lVar4;
  uint64_t uVar5;
  undefined7 uVar8;
  undefined7 extraout_var;
  int64_t lVar6;
  int64_t lVar7;
  void* pVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar10;
  int64_t lVar11;
  double dVar12;
  double local_68;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  uint32_t local_3c;
  char local_38 [8];
  
  FUN_00d23310();
  local_38[0] = local_50[0];
  pcVar2 = local_50;
  if (local_50[0] == '\0') {
    pcVar2 = local_38;
  }
  *pcVar2 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((void*)param_1);
  lVar6 = local_58;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    lVar6 = *(int64_t *)(local_58 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
  }
  local_68 = *(double *)(lVar6 + 0xe8) + *(double *)(lVar6 + 0xf0);
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = FUN_00d23310();
  uVar8 = (undefined7)((uint64_t)uVar5 >> 8);
  pcVar2 = local_50;
  if (local_50[0] == '\0') {
    pcVar2 = local_38;
  }
  local_38[0] = local_50[0];
  *pcVar2 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
    uVar8 = extraout_var;
  }
  if (local_58 == 0) {
    local_3c = 0;
  }
  else {
    local_3c = (uint32_t)CONCAT71(uVar8,1);
    if (local_38[0] == '\0') {
      FUN_00d50b00();
    }
  }
  local_48 = local_58;
  lVar6 = *arg1;
  if (*(int *)(lVar6 + 0xc) < 2) {
    uVar10 = 0;
    lVar4 = 0;
  }
  else {
    lVar11 = 1;
    lVar4 = 0;
    uVar10 = 0;
    do {
      pVar9 = (void*)param_1;
      lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar11 * 8);
      if (lVar4 == lVar6) {
        if (((char)uVar10 == '\0') && (lVar4 != 0)) {
          uVar10 = 1;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if (((char)uVar10 == '\0') || (lVar4 == 0)) {
          uVar10 = 1;
          lVar4 = lVar6;
        }
        else {
          FUN_00d50b20();
          uVar10 = 1;
          lVar4 = lVar6;
        }
      }
      pvVar3 = _pthread_getspecific(pVar9);
      if ((pvVar3 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
        dVar12 = *(double *)(lVar4 + 0xe8) + *(double *)(lVar4 + 0xf0);
      }
      else {
        lVar6 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        dVar12 = *(double *)(lVar6 + 0xe8) + *(double *)(lVar6 + 0xf0);
      }
      lVar6 = local_48;
      uVar1 = local_3c;
      if (local_68 < dVar12) {
        pvVar3 = _pthread_getspecific(pVar9);
        lVar7 = lVar4;
        if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          lVar7 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        }
        local_68 = *(double *)(lVar7 + 0xe8) + *(double *)(lVar7 + 0xf0);
        if (local_48 == lVar4) {
          lVar6 = local_48;
          uVar1 = local_3c;
          if ((((char)uVar10 != '\0') && ((char)local_3c == '\0')) && (lVar4 != 0)) {
            local_3c = (uint32_t)CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
            FUN_00d50b00();
            lVar6 = local_48;
            uVar1 = local_3c;
          }
        }
        else {
          if (((char)uVar10 != '\0') && (lVar4 != 0)) {
            FUN_00d50b00();
          }
          lVar6 = lVar4;
          uVar1 = uVar10;
          if (((char)local_3c != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      local_3c = uVar1;
      local_48 = lVar6;
      lVar11 = lVar11 + 1;
      lVar6 = *arg1;
      param_1 = (int64_t)*(int *)(lVar6 + 0xc);
    } while (lVar11 < param_1);
  }
  lVar6 = local_48;
  *(void*)(this_ptr + 1) = 0;
  if (((char)local_3c == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  if (((char)uVar10 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01267400
// ============================================================
// Function: FUN_01267400
// Address: 01267400
// Size: 1430 bytes
// Class: MUSampledFunction

void FUN_01267400(double param_1)

{
  void *pvVar1;
  void* in_ECX;
  int64_t this_ptr;
  uint64_t uVar2;
  double dVar3;
  double local_68;
  double local_58;
  int64_t local_40;
  char local_38;
  
  if (NAN(param_1)) {
    FUN_00d64850();
    *(void*)(this_ptr + 0x118) = 0x7ff8000000000000;
    FUN_00d64910();
    if ((*(double *)(this_ptr + 0x128) == g_0238fee8) &&
       (!NAN(*(double *)(this_ptr + 0x128)) && !NAN(g_0238fee8))) {
      return;
    }
    FUN_00d64850();
    *(void*)(this_ptr + 0x128) = 0x3ff0000000000000;
    FUN_00d64910();
    return;
  }
  param_1 = param_1 - *(double *)(this_ptr + 0xe8);
  dVar3 = *(double *)(this_ptr + 0xf0);
  if (param_1 <= *(double *)(this_ptr + 0xf0)) {
    dVar3 = param_1;
  }
  local_58 = (double)(~-(uint64_t)(0.0 < dVar3) & (uint64_t)g_023908c8 |
                     (uint64_t)dVar3 & -(uint64_t)(0.0 < dVar3));
  dVar3 = (double)FUN_012671f0();
  if (NAN(local_58)) {
    local_58 = g_023908c8;
    goto LAB_012678b2;
  }
  if (dVar3 < local_58) {
    uVar2 = -(uint64_t)(local_58 < *(double *)(this_ptr + 0xf0));
    local_68 = (double)(~uVar2 & (uint64_t)g_023908c8 | uVar2 & (uint64_t)local_58);
    if (NAN(local_68)) {
      local_68 = g_023908c8;
    }
    else {
      FUN_0125e7c0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_01267509;
        }
      }
      else if (local_40 != 0) {
LAB_01267509:
        local_68 = (double)FUN_012685b0(local_68);
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar3 = (double)FUN_013de8d0();
        FUN_00d50b20();
        local_68 = local_68 + dVar3;
      }
      if ((*(double *)(this_ptr + 0x120) == local_68) &&
         (!NAN(*(double *)(this_ptr + 0x120)) && !NAN(local_68))) goto LAB_012675bb;
    }
    FUN_00d64850();
    *(double *)(this_ptr + 0x120) = local_68;
    FUN_00d64910();
  }
LAB_012675bb:
  FUN_01268710();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_012675ec;
    }
  }
  else if (local_40 != 0) {
LAB_012675ec:
    FUN_0125e7c0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        goto LAB_01267631;
      }
    }
    else if (local_40 != 0) {
LAB_01267631:
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_012676a7;
        }
      }
      else if (local_40 != 0) {
LAB_012676a7:
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e61a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013df480();
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013710d0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_0125e7c0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_0126782a;
    }
  }
  else if (local_40 != 0) {
LAB_0126782a:
    local_58 = (double)FUN_012685b0(local_58);
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar3 = (double)FUN_013de8d0();
    FUN_00d50b20();
    local_58 = local_58 + dVar3;
  }
  if ((*(double *)(this_ptr + 0x118) == local_58) &&
     (!NAN(*(double *)(this_ptr + 0x118)) && !NAN(local_58))) {
    return;
  }
LAB_012678b2:
  FUN_00d64850();
  *(double *)(this_ptr + 0x118) = local_58;
  FUN_00d64910();
  return;
}



// ============================================================
// 01317d70
// ============================================================
// Function: FUN_01317d70
// Address: 01317d70
// Size: 1287 bytes
// Class: MUSampledFunction

uint64_t FUN_01317d70(void* param_1,byte param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  byte bVar4;
  void *pvVar5;
  int64_t lVar6;
  uint uVar7;
  uint uVar8;
  void* pVar9;
  int64_t lVar10;
  char unaff_SIL;
  int64_t *this_ptr;
  int64_t *plVar11;
  int64_t local_f8;
  char local_f0;
  int64_t local_98;
  char local_90;
  int64_t local_60;
  char local_58;
  int local_48;
  
  if (*this_ptr != 0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb480();
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_002aa7d0();
    if ((local_f0 == '\0') && (local_f8 != 0)) {
      FUN_00d50b00();
    }
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_f8 != 0) {
      if (0 < *(int *)(local_f8 + 0xc)) {
        uVar7 = 0;
        do {
          lVar2 = local_60;
          plVar1 = *(int64_t **)(*(int64_t *)(local_f8 + 0x10) + (uint64_t)uVar7 * 8);
          uVar8 = uVar7;
          if (unaff_SIL == '\0') {
            pvVar5 = _pthread_getspecific(uVar7);
            plVar11 = plVar1;
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar11 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            cVar3 = (**(code **)(*plVar11 + 0x3d8))();
            if (cVar3 != '\0') goto LAB_01317f44;
            if (param_2 != 0) {
              pvVar5 = _pthread_getspecific(uVar8);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012cb5e0();
            }
          }
          else {
LAB_01317f44:
            pvVar5 = _pthread_getspecific(uVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0124c6e0();
            if (local_90 == '\0') {
              if (local_98 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_90 = '\0';
            }
            FUN_01318520();
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            if (local_98 != 0) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if (local_60 != 0) {
              local_58 = '\0';
              local_60 = 0;
              local_48 = -1;
              while( true ) {
                lVar6 = (int64_t)local_48;
                local_48 = local_48 + 1;
                if (*(int *)(lVar2 + 0xc) <= local_48) break;
                lVar10 = *(int64_t *)(lVar2 + 0x10);
                local_60 = *(int64_t *)(lVar10 + 8 + lVar6 * 8);
                pvVar5 = _pthread_getspecific((void*)lVar10);
                pVar9 = (void*)lVar10;
                plVar11 = plVar1;
                if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                  plVar11 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
                }
                bVar4 = (**(code **)(*plVar11 + 1000))();
                if ((bVar4 & param_2) == 1) {
                  pvVar5 = _pthread_getspecific(pVar9);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0124c8f0();
                }
              }
              FUN_00115190();
              FUN_00d50b20();
            }
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < *(int *)(local_f8 + 0xc));
      }
      FUN_00115e00();
      FUN_00d50b20();
    }
  }
  return 1;
}



// ============================================================
// 0196d600
// ============================================================
// Function: FUN_0196d600
// Address: 0196d600
// Size: 934 bytes
// Class: MUSampledFunction

void FUN_0196d600(void* param_1)

{
  void*puVar1;
  int64_t lVar2;
  int64_t lVar3;
  double dVar4;
  uint64_t uVar5;
  char cVar6;
  uint8_t uVar7;
  void *pvVar8;
  void*puVar9;
  int64_t this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_30;
  char local_28;
  
  if ((*(int64_t *)(this_ptr + 0x178) != 0) &&
     (g_02390124 < *(float *)(this_ptr + 0x114) || g_02390124 == *(float *)(this_ptr + 0x114))
     ) {
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0126bcd0();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126ef70();
      if (local_30 == 0) {
        cVar6 = '\0';
      }
      else {
        pvVar8 = _pthread_getspecific(param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        pvVar8 = _pthread_getspecific(param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar6 = FUN_0124c5d0();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if (cVar6 == '\0') {
        puVar9 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &g_02513860;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        *(void*)((int64_t)puVar9 + 0x29) = 0;
        *(void*)((int64_t)puVar9 + 0x31) = 0;
        FUN_00d500e0();
        puVar1 = *(void**)(this_ptr + 0x1d8);
        if (puVar1 == puVar9) {
          FUN_00d50b20();
        }
        else {
          *(void**)(this_ptr + 0x1d8) = puVar9;
          if (puVar1 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*(int64_t *)(this_ptr + 0x170) + 0x10))();
        FUN_00d50b00();
        FUN_01a05b20();
        if ((int64_t *)(this_ptr + 0x170) != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)(this_ptr + 0x170) + 0x10))();
          FUN_00d50b20();
        }
        uVar7 = FUN_01968c50();
        *(void*)(*(int64_t *)(this_ptr + 0x1d8) + 0x38) = uVar7;
        if (*(int64_t *)(this_ptr + 0x1e0) == 0) {
          return;
        }
        *(void*)(this_ptr + 0x1e0) = 0;
      }
      else {
        dVar4 = (double)FUN_00e7d6f0();
        if (dVar4 - *(double *)(this_ptr + 0x1e8) <= g_023942d0) {
          return;
        }
        puVar9 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &g_02513860;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        *(void*)((int64_t)puVar9 + 0x29) = 0;
        *(void*)((int64_t)puVar9 + 0x31) = 0;
        FUN_00d500e0();
        puVar1 = *(void**)(this_ptr + 0x1d8);
        if (puVar1 == puVar9) {
          FUN_00d50b20();
        }
        else {
          *(void**)(this_ptr + 0x1d8) = puVar9;
          if (puVar1 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*(int64_t *)(this_ptr + 0x170) + 0x10))();
        FUN_00d50b00();
        FUN_01a05b20();
        if ((int64_t *)(this_ptr + 0x170) != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)(this_ptr + 0x170) + 0x10))();
          FUN_00d50b20();
        }
        uVar5 = FUN_00e7d6f0();
        *(void*)(this_ptr + 0x1e8) = uVar5;
        lVar2 = *(int64_t *)(this_ptr + 0x1d8);
        lVar3 = *(int64_t *)(this_ptr + 0x1e0);
        if (lVar3 == lVar2) {
          return;
        }
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        *(int64_t *)(this_ptr + 0x1e0) = lVar2;
        if (lVar3 == 0) {
          return;
        }
      }
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 0126c880
// ============================================================
// Function: FUN_0126c880
// Address: 0126c880
// Size: 1084 bytes
// Class: MUSampledFunction

double FUN_0126c880(double param_1,double param_2)

{
  float fVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  void* in_ECX;
  int64_t this_ptr;
  float fVar5;
  double dVar6;
  double dVar7;
  int64_t local_60;
  char local_58;
  double local_50;
  double local_38;
  
  fVar1 = *(float *)(this_ptr + 0x138);
  if ((fVar1 == 0.0) && (!NAN(fVar1))) {
    return param_1;
  }
  FUN_0125e7c0();
  if (local_58 == '\0') {
    if (local_60 == 0) {
      return param_1;
    }
    FUN_00d50b00();
  }
  else if (local_60 == 0) {
    return param_1;
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_013dee00();
  fVar5 = g_02390d00;
  if (g_02390d00 <= fVar1) {
    fVar5 = fVar1;
  }
  fVar5 = (fVar5 + g_02390124) * g_0239109c + g_02391090;
  local_38 = param_1;
  if ((cVar2 == '\0') && (cVar2 = FUN_01263cf0(), cVar2 == '\0')) {
    dVar6 = *(double *)(this_ptr + 0xf0) + g_0241b6a8;
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_013dee60();
    if (cVar2 == '\0') {
      local_50 = g_0240cfd8;
LAB_0126cad9:
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_013deec0();
      if (cVar2 == '\0') {
        dVar6 = dVar6 + g_0241b6a8;
      }
      else {
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar4 = FUN_013ded90();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar6 = (double)FUN_013de950();
        dVar6 = (double)FUN_01264500(dVar6 * (double)lVar4);
        if (dVar6 < param_2) {
          if (0.0 <= fVar1) goto LAB_0126c990;
          local_38 = (double)fVar5;
          if (param_2 < dVar6 + g_0241b6a8) {
            local_38 = local_38 +
                       (((dVar6 + g_0241b6a8) - param_2) / g_0241b6a8) *
                       (g_0238fee8 - local_38);
          }
          goto LAB_0126c982;
        }
      }
      if (fVar1 <= 0.0) goto LAB_0126c990;
      fVar5 = g_02390124;
      if (fVar1 <= g_02390124) {
        fVar5 = fVar1;
      }
      local_38 = (double)(g_02390124 - fVar5);
      if (g_0241b6a8 + param_2 <= dVar6) {
        if (g_0241b6b0 + param_2 < local_50) {
          local_38 = local_38 +
                     (((local_50 + g_0241b6a8) - param_2) / g_0241b6a8) *
                     (g_0238fee8 - local_38);
        }
        goto LAB_0126c982;
      }
      dVar7 = g_0238fee8 - local_38;
      local_50 = dVar6 + g_0241b6b0;
    }
    else {
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_013ded30();
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar7 = (double)FUN_013de950();
      local_50 = (double)FUN_01264500(dVar7 * (double)lVar4);
      if (local_50 <= param_2) goto LAB_0126cad9;
      if (0.0 <= fVar1) goto LAB_0126c990;
      local_38 = (double)fVar5;
      local_50 = local_50 + g_0241b6b0;
      if (param_2 <= local_50) goto LAB_0126c982;
      dVar7 = g_0238fee8 - local_38;
    }
    local_38 = local_38 + ((param_2 - local_50) / g_0241b6a8) * dVar7;
  }
  else {
    if (0.0 <= fVar1) goto LAB_0126c990;
    local_38 = (double)fVar5;
  }
LAB_0126c982:
  local_38 = param_1 * local_38;
LAB_0126c990:
  FUN_00d50b20();
  return local_38;
}



// ============================================================
// 01267c40
// ============================================================
// Function: FUN_01267c40
// Address: 01267c40
// Size: 1128 bytes
// Class: MUSampledFunction

void FUN_01267c40(double param_1)

{
  void *pvVar1;
  void* in_ECX;
  int64_t this_ptr;
  uint64_t uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_58;
  int64_t local_40;
  char local_38;
  
  if (NAN(param_1)) {
    FUN_00d64850();
    *(void*)(this_ptr + 0x120) = 0x7ff8000000000000;
    FUN_00d64910();
    if ((*(double *)(this_ptr + 0x130) == g_0238fee8) &&
       (!NAN(*(double *)(this_ptr + 0x130)) && !NAN(g_0238fee8))) {
      return;
    }
    FUN_00d64850();
    *(void*)(this_ptr + 0x130) = 0x3ff0000000000000;
    FUN_00d64910();
    return;
  }
  param_1 = param_1 - *(double *)(this_ptr + 0xe8);
  dVar4 = 0.0;
  if (0.0 <= param_1) {
    dVar4 = param_1;
  }
  uVar2 = -(uint64_t)(dVar4 < *(double *)(this_ptr + 0xf0));
  dVar4 = (double)(~uVar2 & (uint64_t)g_023908c8 | (uint64_t)dVar4 & uVar2);
  dVar3 = (double)FUN_01267080();
  dVar5 = dVar3;
  if (dVar3 <= dVar4) {
    dVar5 = dVar4;
  }
  local_58 = (double)(~-(uint64_t)(!NAN(dVar3) && !NAN(dVar3)) & (uint64_t)dVar4 |
                     (~-(uint64_t)(!NAN(dVar4) && !NAN(dVar4)) & (uint64_t)dVar4 |
                     (uint64_t)dVar5 & -(uint64_t)(!NAN(dVar4) && !NAN(dVar4))) &
                     -(uint64_t)(!NAN(dVar3) && !NAN(dVar3)));
  if (NAN(local_58)) {
    local_58 = g_023908c8;
    goto LAB_01267fdd;
  }
  FUN_01274c40(g_02391038);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01267d19;
    }
  }
  else if (local_40 != 0) {
LAB_01267d19:
    FUN_0125e7c0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        goto LAB_01267d5e;
      }
    }
    else if (local_40 != 0) {
LAB_01267d5e:
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_01267dd4;
        }
      }
      else if (local_40 != 0) {
LAB_01267dd4:
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e61a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013df480();
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013710d0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_0125e7c0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01267f57;
    }
  }
  else if (local_40 != 0) {
LAB_01267f57:
    local_58 = (double)FUN_012685b0();
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar4 = (double)FUN_013de8d0();
    FUN_00d50b20();
    local_58 = local_58 + dVar4;
  }
  if ((*(double *)(this_ptr + 0x120) == local_58) &&
     (!NAN(*(double *)(this_ptr + 0x120)) && !NAN(local_58))) {
    return;
  }
LAB_01267fdd:
  FUN_00d64850();
  *(double *)(this_ptr + 0x120) = local_58;
  FUN_00d64910();
  return;
}



// ============================================================
// 0125dfc0
// ============================================================
// Function: FUN_0125dfc0
// Address: 0125dfc0
// Size: 1551 bytes
// Class: MUSampledFunction

void FUN_0125dfc0(int64_t *param_1)

{
  int iVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  int64_t local_60;
  char local_58;
  int64_t *local_48;
  char local_40;
  
  FUN_0125e7c0();
  if (local_40 == '\0') {
    if (local_48 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_48 == (int64_t *)0x0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 200) == 0) goto LAB_0125e5b3;
  FUN_00d50b00();
  FUN_00d50b20();
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013df480();
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d820();
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = *(int64_t *)(this_ptr + 200);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01507e40();
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_0125e401;
    }
  }
  else if (local_48 != (int64_t *)0x0) {
LAB_0125e401:
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar1 = FUN_014ed790();
    if (iVar1 != 0) {
      pvVar2 = _pthread_getspecific((void*)param_1);
      plVar5 = local_48;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        param_1 = local_48;
        plVar5 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de3b0();
      (**(code **)(*plVar5 + 0x3a8))();
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ed790();
      pvVar2 = _pthread_getspecific((void*)param_1);
      plVar5 = local_48;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        param_1 = local_48;
        plVar5 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      pVar4 = (void*)param_1;
      (**(code **)(*plVar5 + 0x3a0))();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de3b0();
    }
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
LAB_0125e5b3:
  FUN_00d50b20();
  return;
}



// ============================================================
// 01964590
// ============================================================
// Function: FUN_01964590
// Address: 01964590
// Size: 813 bytes
// Class: MUSampledFunction

float FUN_01964590(void* param_1)

{
  void *pvVar1;
  int64_t lVar2;
  int64_t this_ptr;
  int64_t *plVar3;
  int64_t *plVar4;
  uint32_t uVar5;
  float fVar6;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  float local_48;
  float local_44;
  int64_t *local_40;
  char local_38;
  float local_2c;
  
  FUN_01989f80();
  local_2c = (float)(**(code **)(&UNK_00001418 + *local_40))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01989f80();
  plVar3 = local_40;
  lVar2 = *(int64_t *)(this_ptr + 0x178);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_44 = (float)(**(code **)(*plVar3 + 0xc38))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_2c == 0.0) && (!NAN(local_2c))) {
    if ((*(float *)(this_ptr + 0x1d0) == g_02390124) &&
       (!NAN(*(float *)(this_ptr + 0x1d0)) && !NAN(g_02390124))) {
      local_2c = *(float *)(this_ptr + 0x1d0);
      fVar6 = local_44;
      if ((local_2c == g_02390124) && (!NAN(local_2c) && !NAN(g_02390124))) {
        return local_44;
      }
      goto LAB_01964847;
    }
  }
  uVar5 = FUN_01989f80();
  local_50 = 0;
  local_58 = *(int64_t *)(this_ptr + 0x178);
  if (local_58 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_50 = '\x01';
  FUN_019d4fe0(uVar5,&local_58);
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (int64_t *)0x0) {
    fVar6 = local_2c * local_44 + (g_02390124 - local_2c) * local_44;
    local_2c = *(float *)(this_ptr + 0x1d0);
    if ((local_2c == g_02390124) && (!NAN(local_2c) && !NAN(g_02390124))) {
      return fVar6;
    }
  }
  else {
    pvVar1 = _pthread_getspecific(param_1);
    plVar4 = plVar3;
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      plVar4 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    }
    pvVar1 = _pthread_getspecific(param_1);
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      plVar3 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar3 + 0x3a8))(local_44);
    local_48 = (float)(**(code **)(*plVar4 + 0x3a0))();
    FUN_00d50b20();
    fVar6 = local_48 * local_2c + (g_02390124 - local_2c) * local_44;
    local_2c = *(float *)(this_ptr + 0x1d0);
    if ((local_2c == g_02390124) && (!NAN(local_2c) && !NAN(g_02390124))) {
      return fVar6;
    }
  }
LAB_01964847:
  FUN_01989f80(fVar6);
  local_48 = (float)(**(code **)(*local_40 + 0xcd8))();
  local_2c = (float)_powf(local_2c,g_02391090);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return local_2c * (local_44 - local_48) + local_48;
}



// ============================================================
// 012664b0
// ============================================================
// Function: FUN_012664b0
// Address: 012664b0
// Size: 556 bytes
// Class: MUSampledFunction

double FUN_012664b0(uint64_t param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  void* pVar8;
  int64_t lVar9;
  char *pcVar10;
  int64_t lVar11;
  int64_t *this_ptr;
  int64_t lVar12;
  double dVar13;
  int64_t local_58;
  char local_50 [8];
  double local_40;
  char local_38 [8];
  
  FUN_00d23310();
  pVar8 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_50[0]);
  pcVar10 = local_38;
  if (local_50[0] != '\0') {
    pcVar10 = local_50;
  }
  local_38[0] = local_50[0];
  *pcVar10 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar8);
  lVar6 = local_58;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    lVar6 = *(int64_t *)(local_58 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
  }
  local_40 = *(double *)(lVar6 + 0xe8) + *(double *)(lVar6 + 0xf0);
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar1 = *(uint *)(*this_ptr + 0xc);
  if ((int)uVar1 < 2) {
    return local_40;
  }
  lVar9 = (uint64_t)uVar1 - 2;
  lVar12 = 0;
  lVar11 = 0;
  bVar3 = false;
  bVar2 = false;
  lVar6 = *(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + 8);
  lVar5 = lVar9;
  if (lVar6 != 0) goto LAB_012665af;
  do {
    lVar6 = lVar11;
    if ((!bVar3) && (lVar11 != 0)) {
      FUN_00d50b00();
      bVar3 = true;
    }
    while( true ) {
      bVar2 = bVar3;
      lVar11 = lVar6;
      pvVar4 = _pthread_getspecific((void*)lVar5);
      if ((pvVar4 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
        dVar13 = *(double *)(lVar11 + 0xe8) + *(double *)(lVar11 + 0xf0);
      }
      else {
        lVar6 = *(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        dVar13 = *(double *)(lVar6 + 0xe8) + *(double *)(lVar6 + 0xf0);
      }
      if (local_40 < dVar13) {
        pvVar4 = _pthread_getspecific((void*)lVar5);
        lVar6 = lVar11;
        if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          lVar6 = *(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        local_40 = *(double *)(lVar6 + 0xe8) + *(double *)(lVar6 + 0xf0);
      }
      if (lVar9 == lVar12) {
        if (!bVar2) {
          return local_40;
        }
        if (lVar11 == 0) {
          return local_40;
        }
        FUN_00d50b20();
        return local_40;
      }
      lVar12 = lVar12 + 1;
      lVar6 = *(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + 8 + lVar12 * 8);
      bVar3 = bVar2;
      if (lVar11 == lVar6) break;
LAB_012665af:
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      bVar3 = true;
      if ((bVar2) && (lVar11 != 0)) {
        FUN_00d50b20();
      }
    }
  } while( true );
}



// ============================================================
// 01266200
// ============================================================
// Function: FUN_01266200
// Address: 01266200
// Size: 543 bytes
// Class: MUSampledFunction

double FUN_01266200(uint64_t param_1)

{
  double *pdVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  void* pVar8;
  int64_t lVar9;
  int64_t lVar10;
  char *pcVar11;
  int64_t lVar12;
  int64_t *this_ptr;
  int64_t lVar13;
  int64_t local_58;
  char local_50 [8];
  double local_40;
  char local_38 [8];
  
  FUN_00d23310();
  pVar8 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_50[0]);
  pcVar11 = local_38;
  if (local_50[0] != '\0') {
    pcVar11 = local_50;
  }
  local_38[0] = local_50[0];
  *pcVar11 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar8);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    local_40 = *(double *)(local_58 + 0xe8);
  }
  else {
    local_40 = *(double *)
                (*(int64_t *)(local_58 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                0xe8);
  }
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = *(uint *)(*this_ptr + 0xc);
  if ((int)uVar2 < 2) {
    return local_40;
  }
  lVar9 = (uint64_t)uVar2 - 2;
  lVar13 = 0;
  lVar12 = 0;
  bVar4 = false;
  bVar3 = false;
  lVar6 = *(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + 8);
  lVar10 = lVar9;
  if (lVar6 != 0) goto LAB_0126630f;
  do {
    lVar6 = lVar12;
    if ((!bVar4) && (lVar12 != 0)) {
      FUN_00d50b00();
      bVar4 = true;
    }
LAB_01266370:
    bVar3 = bVar4;
    lVar12 = lVar6;
    pvVar5 = _pthread_getspecific((void*)lVar10);
    if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
      if (*(double *)(lVar12 + 0xe8) <= local_40 && local_40 != *(double *)(lVar12 + 0xe8))
      goto LAB_012663c2;
    }
    else {
      pdVar1 = (double *)
               (*(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8) + 0xe8)
      ;
      if (*pdVar1 <= local_40 && local_40 != *pdVar1) {
LAB_012663c2:
        pvVar5 = _pthread_getspecific((void*)lVar10);
        lVar6 = lVar12;
        if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          lVar6 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        local_40 = *(double *)(lVar6 + 0xe8);
      }
    }
    if (lVar9 == lVar13) {
      if (!bVar3) {
        return local_40;
      }
      if (lVar12 == 0) {
        return local_40;
      }
      FUN_00d50b20();
      return local_40;
    }
    lVar13 = lVar13 + 1;
    lVar6 = *(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + 8 + lVar13 * 8);
    bVar4 = bVar3;
  } while (lVar12 == lVar6);
LAB_0126630f:
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  bVar4 = true;
  if ((bVar3) && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  goto LAB_01266370;
}



// ============================================================
// 01969e40
// ============================================================
// Function: FUN_01969e40
// Address: 01969e40
// Size: 672 bytes
// Class: MUSampledFunction

void FUN_01969e40(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  void*puVar5;
  int64_t *arg1;
  void*this_ptr;
  bool bVar6;
  
  if ((g_028b0e58 == (void*)0x0) || (g_028b0e61 == '\0')) {
    FUN_00e8cb50();
    if (g_028b0e58 == (void*)0x0) {
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &g_026792c0;
      puVar5[5] = 0;
      *(void*)((int64_t)puVar5 + 0xc) = 0;
      *(void*)((int64_t)puVar5 + 0x14) = 0;
      *(void*)((int64_t)puVar5 + 0x19) = 0;
      (*g_026792d8)();
      if (g_028b0e58 == puVar5) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar6 = g_028b0e58 != (void*)0x0;
        g_028b0e58 = puVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028b0e60 == '\0') {
        g_028b0e60 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      FUN_01cfcc50(g_0239011c,0,0);
      g_028b0e61 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b0e61 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028b0e68 == (void*)0x0) || (g_028b0e71 == '\0')) {
    FUN_00e8cb50();
    if (g_028b0e68 == (void*)0x0) {
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &g_026792c0;
      puVar5[5] = 0;
      *(void*)((int64_t)puVar5 + 0xc) = 0;
      *(void*)((int64_t)puVar5 + 0x14) = 0;
      *(void*)((int64_t)puVar5 + 0x19) = 0;
      (*g_026792d8)();
      if (g_028b0e68 == puVar5) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar6 = g_028b0e68 != (void*)0x0;
        g_028b0e68 = puVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028b0e70 == '\0') {
        g_028b0e70 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      FUN_01cfc880(g_0239011c);
      g_028b0e71 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b0e71 = '\x01';
      FUN_00e8cb70();
    }
  }
  lVar1 = arg1[0x2f];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*arg1 + 0x9d8))();
  if (cVar4 == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    cVar4 = *(char *)((int64_t)arg1 + 0x1c4);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      *(void*)(this_ptr + 1) = 0;
      puVar5 = g_028b0e58;
      goto joined_r0x0196a0be;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  puVar5 = g_028b0e68;
joined_r0x0196a0be:
  if (puVar5 == (void*)0x0) {
    puVar5 = (void*)0x0;
  }
  else {
    FUN_00d50b00();
  }
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 014c0100
// ============================================================
// Function: FUN_014c0100
// Address: 014c0100
// Size: 652 bytes
// Class: MUSampledFunction

void FUN_014c0100(int64_t *param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *plVar7;
  char unaff_SIL;
  int64_t *this_ptr;
  uint64_t local_80;
  uint8_t local_78;
  int64_t local_70;
  int64_t local_68;
  int64_t local_60;
  char local_58;
  uint32_t local_50;
  char local_4c;
  int64_t *local_48;
  int64_t local_40;
  char local_38;
  
  plVar7 = param_1;
  local_50 = param_2;
  local_4c = unaff_SIL;
  (**(code **)(*this_ptr + 0x378))();
  lVar5 = local_40;
  pVar6 = (void*)plVar7;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    (**(code **)(*this_ptr + 0x378))();
    lVar2 = local_40;
    lVar5 = *param_1;
    if (lVar5 == local_40) {
      if (((char)param_1[1] != '\0') || (local_40 == 0)) goto LAB_014c01e9;
      local_48 = param_1 + 1;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_014c01e2;
      }
    }
    else {
      local_48 = param_1 + 1;
      lVar1 = param_1[1];
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *param_1 = lVar2;
        if (((char)lVar1 != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
LAB_014c01e2:
        *(void*)local_48 = 1;
LAB_014c01e9:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_014c01fd;
      }
      *param_1 = local_40;
      if (((char)lVar1 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
    }
    *(void*)local_48 = 1;
  }
LAB_014c01fd:
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_01334f30();
  if (cVar3 == '\0') {
    return;
  }
  local_60 = *param_1;
  local_58 = '\0';
  local_80 = 0;
  local_78 = 0;
  FUN_014c03f0(&local_60,&local_68,&local_80);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_4c != '\0') {
    lVar5 = (**(code **)(*this_ptr + 0x388))();
    if (lVar5 < local_70) {
      if (this_ptr[0x1d] != 0x7fffffffffffffff) {
        FUN_00d64850();
        this_ptr[0x1d] = 0x7fffffffffffffff;
        FUN_00d64910();
      }
      if (this_ptr[0x1e] == 0x7fffffffffffffff) goto LAB_014c0332;
      FUN_00d64850();
      this_ptr[0x1e] = 0x7fffffffffffffff;
    }
    else {
      if (this_ptr[0x1d] == local_70) goto LAB_014c0332;
      FUN_00d64850();
      this_ptr[0x1d] = local_70;
    }
    FUN_00d64910();
  }
LAB_014c0332:
  if ((((char)local_50 != '\0') && (cVar3 = (**(code **)(*this_ptr + 0x3c0))(), cVar3 == '\0')) &&
     (this_ptr[0x1e] != local_68)) {
    FUN_00d64850();
    this_ptr[0x1e] = local_68;
    FUN_00d64910();
  }
  return;
}



// ============================================================
// 013168e0
// ============================================================
// Function: FUN_013168e0
// Address: 013168e0
// Size: 889 bytes
// Class: MUSampledFunction

uint64_t FUN_013168e0(void* param_1)

{
  uint uVar1;
  void *pvVar2;
  void* pVar3;
  byte unaff_SIL;
  uint64_t unaff_R12;
  undefined7 uVar5;
  uint64_t uVar4;
  bool bVar6;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  uVar5 = (undefined7)((uint64_t)unaff_R12 >> 8);
  if (local_40 == 0) {
    bVar6 = true;
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    bVar6 = local_70 == 0;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = CONCAT71(uVar5,bVar6) ^ 1;
  if (((char)uVar4 == '\0') && ((unaff_SIL ^ 1) == 0)) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150cac0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar4 = CONCAT71(uVar5,1);
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510280();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pVar3 = 0;
  uVar1 = (uint)uVar4 & 0xff;
  if (local_40 == 0) {
    uVar1 = 0;
  }
  if (local_40 == 0 && (unaff_SIL ^ 1) == 0) {
    pvVar2 = _pthread_getspecific(0);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150cb90();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar4 = (uint64_t)uVar1;
  }
  return uVar4 & 0xffffffff;
}



// ============================================================
// 014bf230
// ============================================================
// Function: FUN_014bf230
// Address: 014bf230
// Size: 595 bytes
// Class: MUSampledFunction

float FUN_014bf230(double param_1,int64_t param_2,int64_t param_3)

{
  int iVar1;
  int64_t in_RCX;
  int64_t lVar2;
  int unaff_ESI;
  int unaff_EDI;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar3 = g_023b26e8;
  if (unaff_EDI < unaff_ESI) {
    fVar8 = 0.0;
    fVar3 = 0.0;
    lVar2 = (int64_t)unaff_EDI;
    do {
      fVar5 = *(float *)(param_3 + lVar2 * 4);
      fVar4 = 0.0;
      if (g_023b4df0 <= fVar5) {
        fVar5 = (float)_powf(fVar5,g_02394298);
        fVar4 = (float)_powf(*(void*)(in_RCX + lVar2 * 4),g_0239426c);
        fVar4 = fVar4 * fVar5;
      }
      fVar5 = g_02411280;
      if (g_02411280 <= fVar4) {
        fVar5 = fVar4;
      }
      fVar4 = (float)_logf(((float)param_1 / *(float *)(param_2 + lVar2 * 4)) * g_02394204);
      fVar8 = fVar8 + fVar4 * g_02394208 * fVar5;
      fVar3 = fVar3 + fVar5;
      lVar2 = lVar2 + 1;
    } while (unaff_ESI != lVar2);
    iVar1 = 0;
    fVar5 = g_023908e0 + fVar8 / fVar3;
    fVar3 = fVar8 / fVar3;
    do {
      fVar8 = fVar3;
      if ((float)((uint)(fVar5 - fVar8) & g_02390140) <= g_02390124) {
        return fVar8;
      }
      fVar9 = 0.0;
      fVar4 = 0.0;
      lVar2 = (int64_t)unaff_EDI;
      do {
        fVar3 = *(float *)(param_3 + lVar2 * 4);
        fVar6 = (float)_logf(((float)param_1 / *(float *)(param_2 + lVar2 * 4)) * g_02394204);
        fVar6 = fVar6 * g_02394208;
        fVar7 = (float)((uint)(fVar8 - fVar6) & g_02390140) / g_0241eeb0 + g_02390124;
        fVar5 = 0.0;
        if (g_023b4df0 <= fVar3) {
          fVar11 = g_023b4df0;
          if (g_023b4df0 <= fVar3) {
            fVar11 = fVar3;
          }
          fVar10 = 0.0;
          if (0.0 <= fVar7) {
            fVar10 = fVar7;
          }
          fVar3 = (float)((uint)fVar3 & g_02390140);
          fVar5 = (float)_powf(*(void*)(in_RCX + lVar2 * 4),g_0239426c);
          fVar5 = fVar5 * fVar11 * fVar11 * fVar3 * fVar10;
        }
        fVar3 = g_02411280;
        if (g_02411280 <= fVar5) {
          fVar3 = fVar5;
        }
        fVar9 = fVar9 + fVar6 * fVar3;
        fVar4 = fVar4 + fVar3;
        lVar2 = lVar2 + 1;
      } while (unaff_ESI != lVar2);
      iVar1 = iVar1 + 1;
      fVar5 = fVar8;
      fVar3 = fVar9 / fVar4;
    } while (iVar1 != 0x16);
    fVar3 = (fVar8 + fVar9 / fVar4) * g_0239011c;
  }
  return fVar3;
}



// ============================================================
// 0126bcd0
// ============================================================
// Function: FUN_0126bcd0
// Address: 0126bcd0
// Size: 525 bytes
// Class: MUSampledFunction
// String references:
//   "MUSampledFunction"

void FUN_0126bcd0(void)

{
  double dVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_40;
  char local_38;
  
  if ((*(char *)((int64_t)arg1 + 0x181) != '\0') && (arg1[0xf] == 0)) {
    (**(code **)(*arg1 + 0x1a0))();
  }
  plVar7 = (int64_t *)arg1[0xf];
  if ((g_027c01a0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027af248 = FUN_001016a0();
    g_027af230 = "MUSampledFunction";
    g_027af238 = 0x58;
    g_027af240 = FUN_00101650;
    g_027af250 = 0;
    ram_00000000027af258 = 0;
    g_027af260 = 0;
    ram_00000000027af268 = 0;
    g_027af270 = 0;
    ram_00000000027af278 = 0;
    g_027af280 = 0;
    ram_00000000027af288 = 0;
    g_027af290 = 0;
    ram_00000000027af298 = 0;
    g_027af2a0 = 0;
    ram_00000000027af2a8 = 0;
    g_027af2b0 = 0;
    ram_00000000027af2b8 = 0;
    g_027af2c0 = 0;
    ram_00000000027af2c8 = 0;
    g_027af2d0 = 0;
    ram_00000000027af2d8 = 0;
    g_027af2e0 = 0;
    ram_00000000027af2e8 = 0;
    g_027af2f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_0126bd40:
    plVar7 = &g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar7 = arg1 + 0xf;
    if (cVar3 == '\0') goto LAB_0126bd40;
  }
  lVar2 = *plVar7;
  if (lVar2 == 0) goto LAB_0126bde2;
  FUN_00d50b00();
  pvVar5 = _pthread_getspecific((void*)plVar7);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    if ((*(double *)(lVar2 + 0x50) == g_0238fee8) &&
       (!NAN(*(double *)(lVar2 + 0x50)) && !NAN(g_0238fee8))) goto LAB_0126bdb1;
  }
  else {
    dVar1 = *(double *)
             (*(int64_t *)(lVar2 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8) + 0x50);
    if ((dVar1 == g_0238fee8) && (!NAN(dVar1) && !NAN(g_0238fee8))) {
LAB_0126bdb1:
      FUN_00da5ad0();
      cVar3 = *(char *)(local_40 + 0x18);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        FUN_00d50b20();
        return;
      }
      FUN_0126bf30();
    }
  }
  FUN_00d50b20();
LAB_0126bde2:
  *(void*)(this_ptr + 1) = 0;
  lVar2 = arg1[0xf];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 012682a0
// ============================================================
// Function: FUN_012682a0
// Address: 012682a0
// Size: 696 bytes
// Class: MUSampledFunction

void FUN_012682a0(void* param_1)

{
  void *pvVar1;
  int64_t this_ptr;
  double dVar2;
  double dVar3;
  int64_t local_48;
  char local_40;
  double local_38;
  double local_28;
  
  local_28 = (double)FUN_01267080();
  dVar2 = (double)FUN_012671f0();
  dVar3 = g_023908c8;
  if (NAN(local_28)) {
joined_r0x0126854d:
    if (local_28 <= 0.0) goto LAB_01268331;
LAB_01268317:
    dVar3 = *(double *)(this_ptr + 0xf0);
    if (*(double *)(this_ptr + 0xf0) < local_28) goto LAB_01268331;
    local_38 = 0.0;
    if (0.0 <= dVar2) goto LAB_0126834c;
LAB_0126835a:
    dVar2 = local_28;
    if (local_28 <= local_38) {
      dVar2 = local_38;
    }
    local_38 = (double)(~-(uint64_t)(!NAN(local_28) && !NAN(local_28)) & (uint64_t)local_38 |
                       (uint64_t)dVar2 & -(uint64_t)(!NAN(local_28) && !NAN(local_28)));
  }
  else {
    if (dVar2 < local_28) {
      local_28 = (local_28 + dVar2) * g_023942d0;
      dVar2 = local_28;
      goto joined_r0x0126854d;
    }
    if (0.0 < local_28) goto LAB_01268317;
LAB_01268331:
    local_38 = 0.0;
    local_28 = dVar3;
    if (dVar2 < 0.0) goto LAB_0126835a;
LAB_0126834c:
    local_38 = dVar2;
    if (!NAN(local_38)) goto LAB_0126835a;
  }
  if (*(double *)(this_ptr + 0xf0) <= local_38) {
    local_38 = g_023908c8;
  }
  FUN_0125e7c0();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_012684aa;
    FUN_00d50b00();
  }
  else if (local_48 == 0) goto LAB_012684aa;
  if (!NAN(local_28)) {
    local_28 = (double)FUN_012685b0();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar2 = (double)FUN_013de8d0();
    local_28 = local_28 + dVar2;
  }
  if (!NAN(local_38)) {
    local_38 = (double)FUN_012685b0();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar2 = (double)FUN_013de8d0();
    local_38 = local_38 + dVar2;
  }
  FUN_00d50b20();
LAB_012684aa:
  if ((*(double *)(this_ptr + 0x118) != local_28) ||
     (NAN(*(double *)(this_ptr + 0x118)) || NAN(local_28))) {
    FUN_00d64850();
    *(double *)(this_ptr + 0x118) = local_28;
    FUN_00d64910();
  }
  if ((*(double *)(this_ptr + 0x120) != local_38) ||
     (NAN(*(double *)(this_ptr + 0x120)) || NAN(local_38))) {
    FUN_00d64850();
    *(double *)(this_ptr + 0x120) = local_38;
    FUN_00d64910();
  }
  return;
}



// ============================================================
// 0125ec90
// ============================================================
// Function: FUN_0125ec90
// Address: 0125ec90
// Size: 585 bytes
// Class: MUSampledFunction

void FUN_0125ec90(void* param_1)

{
  void *pvVar1;
  int64_t arg1;
  void*this_ptr;
  bool bVar2;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if (*(int64_t *)(arg1 + 0xd8) != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef460();
    if (local_38 == 0) {
      bVar2 = false;
    }
    else {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd6a0();
      bVar2 = local_48 != 0;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (bVar2) {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd6a0();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc0d0();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == '\0') {
        return;
      }
      if (local_48 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

