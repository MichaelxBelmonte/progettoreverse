// Function: FUN_016e0170
// Address: 016e0170
// Size: 15910 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_016e0170(int64_t *param_1,double param_2,int param_3,int64_t *param_4)

{
  int64_t lVar1;
  void* pVar2;
  int64_t lVar3;
  int64_t *plVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint8_t uVar10;
  byte bVar11;
  void* pVar12;
  uint uVar13;
  void *pvVar14;
  int64_t **pplVar15;
  int64_t lVar16;
  int64_t *plVar17;
  int64_t *plVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  int64_t *plVar21;
  int64_t lVar22;
  void* pVar23;
  int iVar24;
  uint64_t in_RCX;
  int64_t *in_RDX;
  int64_t *arg1;
  uint uVar25;
  int64_t this_ptr;
  int iVar26;
  int64_t **pplVar27;
  int64_t lVar28;
  double dVar29;
  uint64_t uVar30;
  uint uVar31;
  uint uVar32;
  bool bVar33;
  uint32_t uVar34;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Db;
  double dVar35;
  void*local_res8;
  int64_t *local_2e0;
  uint8_t local_2d8;
  int64_t *local_2d0;
  uint8_t local_2c8;
  int64_t *local_2c0;
  int64_t **local_2b8;
  uint64_t local_2b0;
  uint64_t local_2a8;
  int64_t local_2a0;
  int64_t *local_298;
  int64_t local_290;
  char local_288;
  int64_t *local_280;
  char local_278;
  int64_t *local_270;
  char local_268;
  int64_t local_260;
  char local_258;
  int64_t *local_250;
  char local_248;
  int64_t *local_240;
  char local_238;
  int64_t *local_230;
  char local_228;
  int64_t *local_220;
  char local_218;
  int64_t *local_210;
  char local_208;
  int64_t *local_200;
  char local_1f8;
  int64_t *local_1f0;
  double local_1e8;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  uint64_t local_1a8;
  double local_1a0;
  int64_t *local_198;
  uint64_t local_190;
  int64_t *local_188;
  double local_180;
  double local_178;
  double local_170;
  int64_t *local_168;
  int64_t *local_160;
  uint64_t local_158;
  int64_t *local_150;
  uint64_t local_148;
  uint local_13c;
  double local_138;
  int64_t *local_130;
  uint64_t local_128;
  int64_t *local_120;
  int64_t *local_118;
  int64_t local_108;
  double local_100;
  int64_t *local_f8;
  int64_t *local_f0;
  int64_t *local_e8;
  char local_e0;
  byte local_d4;
  byte local_d3;
  byte local_d2;
  byte local_d1;
  int64_t *local_d0;
  double local_c8;
  int64_t *local_c0;
  uint64_t local_b8;
  double local_b0;
  uint64_t local_a8;
  int64_t *local_a0;
  int64_t *local_90;
  int64_t *local_78;
  int64_t *local_70;
  int64_t *local_68;
  int local_60;
  int64_t *local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38 [8];
  
  local_298 = param_4;
  local_1e8 = param_2;
  local_160 = param_1;
  local_158 = in_RCX;
  local_c0 = in_RDX;
  if ((param_3 == 1) && (*(char *)(this_ptr + 0x80) == '\0')) {
    lVar16 = *arg1;
    uVar13 = *(uint *)(lVar16 + 0xc);
    uVar30 = (uint64_t)uVar13;
    if (0 < (int)uVar13) {
      while( true ) {
        uVar13 = uVar13 - 1;
        in_RCX = (uint64_t)uVar13;
        lVar16 = *(int64_t *)(*(int64_t *)(lVar16 + 0x10) + in_RCX * 8);
        if (lVar16 != 0) {
          FUN_00d50b00();
          lVar22 = *(int64_t *)(this_ptr + 0x78);
          FUN_00d50b20();
          if ((lVar22 != 0) && (lVar22 == lVar16)) {
            FUN_00d23620();
          }
        }
        if ((int64_t)uVar30 < 2) break;
        uVar30 = uVar30 - 1;
        lVar16 = *arg1;
      }
    }
  }
  pVar12 = (void*)in_RCX;
  if (*(int *)(*arg1 + 0xc) != 0) {
    if ((((local_1e8 != g_0238fee8) || (NAN(local_1e8) || NAN(g_0238fee8))) ||
        ((double)local_160 != 0.0)) || (NAN((double)local_160))) {
      if (((local_1e8 != g_0238fee8) || (NAN(local_1e8) || NAN(g_0238fee8))) &&
         ((*(char *)(this_ptr + 0x80) != '\0' && (*local_c0 == *(int64_t *)(this_ptr + 0x78)))))
      {
        pvVar14 = _pthread_getspecific(pVar12);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_1d0 = 0;
        lVar16 = *(int64_t *)(this_ptr + 0x78);
        if (lVar16 != 0) {
          FUN_00d50b00();
        }
        local_1d0 = '\x01';
        pVar12 = 0;
        local_1d8 = lVar16;
        FUN_01900ec0(0,&local_1d8);
        plVar18 = local_40;
        if (local_38[0] == '\0') {
          if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38[0] = '\0';
        }
        if ((local_1d0 != '\0') && (local_1d8 != 0)) {
          FUN_00d50b20();
        }
        pvVar14 = _pthread_getspecific(pVar12);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar29 = (double)FUN_01907950();
        pvVar14 = _pthread_getspecific(pVar12);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_118 = (int64_t *)FUN_01907950();
        lVar16 = *(int64_t *)(this_ptr + 0x78);
        pvVar14 = _pthread_getspecific(pVar12);
        if (pvVar14 != (void *)0x0) {
          lVar16 = *(int64_t *)(this_ptr + 0x78);
          lVar22 = FUN_00e8b990();
          if (lVar22 != 0) {
            lVar16 = *(int64_t *)(lVar16 + 0x20 + (uint64_t)(*(uint *)(lVar22 + 0x154) & 1) * 8);
          }
        }
        pvVar14 = _pthread_getspecific(pVar12);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar35 = (double)FUN_01907950();
        FUN_01907cc0(SUB84(dVar35 - (dVar29 - (double)local_118) / local_1e8,0));
        uVar30 = CONCAT71((int7)((uint64_t)lVar16 >> 8),1);
        if (plVar18 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_016e0204;
      }
      pvVar14 = _pthread_getspecific(pVar12);
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018fbce0();
      local_f0 = local_40;
      if ((((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar14 = _pthread_getspecific(pVar12);
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_290 = *arg1;
      local_288 = '\0';
      FUN_01901690();
      local_d0 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      if ((local_288 != '\0') && (local_290 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      local_70 = local_40;
      pplVar27 = (int64_t **)local_38;
      local_e8 = (int64_t *)CONCAT71(local_e8._1_7_,local_38[0]);
      pplVar15 = pplVar27;
      if (local_38[0] == '\0') {
        pplVar15 = &local_e8;
      }
      *(char *)pplVar15 = '\0';
      if ((local_38[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_e8 == '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00d23340();
      local_68 = local_40;
      local_e8 = (int64_t *)CONCAT71(local_e8._1_7_,local_38[0]);
      pplVar15 = pplVar27;
      if (local_38[0] == '\0') {
        pplVar15 = &local_e8;
      }
      *(char *)pplVar15 = '\0';
      if ((local_38[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_e8 == '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      uVar13 = (uint)local_158;
      local_d4 = uVar13 == 5;
      local_d3 = uVar13 == 8;
      local_d2 = uVar13 == 0x15;
      local_60 = 1;
      uVar30 = local_158;
      if ((uVar13 < 0x16) && ((0x200920U >> (uVar13 & 0x1f) & 1) != 0)) {
        FUN_00d23340();
        plVar18 = local_40;
        local_e8 = (int64_t *)CONCAT71(local_e8._1_7_,local_38[0]);
        pplVar15 = pplVar27;
        if (local_38[0] == '\0') {
          pplVar15 = &local_e8;
        }
        *(char *)pplVar15 = '\0';
        if ((local_38[0] != '\0') && (plVar18 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_70 == plVar18) {
          if (((char)local_e8 != '\0') && (plVar18 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if ((char)local_e8 == '\0') {
          if (plVar18 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if (local_70 == (int64_t *)0x0) goto LAB_016e05c1;
          local_70 = plVar18;
          FUN_00d50b20();
        }
        else if (local_70 == (int64_t *)0x0) {
LAB_016e05c1:
          local_70 = plVar18;
        }
        else {
          FUN_00d50b20();
          local_70 = plVar18;
        }
        FUN_00d23310();
        local_e8 = (int64_t *)CONCAT71(local_e8._1_7_,local_38[0]);
        pplVar15 = pplVar27;
        if (local_38[0] == '\0') {
          pplVar15 = &local_e8;
        }
        *(char *)pplVar15 = '\0';
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_68 == local_40) {
          if (((char)local_e8 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if ((char)local_e8 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if (local_68 == (int64_t *)0x0) goto LAB_016e0659;
          local_68 = local_40;
          FUN_00d50b20();
        }
        else if (local_68 == (int64_t *)0x0) {
LAB_016e0659:
          local_68 = local_40;
        }
        else {
          FUN_00d50b20();
          local_68 = local_40;
        }
        local_60 = -1;
      }
      pVar12 = (void*)uVar30;
      plVar18 = *(int64_t **)local_f0[2];
      if (plVar18 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      local_40 = plVar18;
      cVar9 = FUN_00d24090();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_108 = CONCAT71(local_108._1_7_,1);
      if (cVar9 == '\0') {
        FUN_00d23340();
        plVar17 = local_40;
        if (local_38[0] == '\0') {
          pplVar27 = &local_e8;
        }
        local_e8 = (int64_t *)CONCAT71(local_e8._1_7_,local_38[0]);
        *(char *)pplVar27 = '\0';
        if ((local_38[0] != '\0') && (plVar17 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)local_e8 == '\0') {
          if (plVar17 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_e8 = (int64_t *)((uint64_t)local_e8 & 0xffffffffffffff00);
        }
        local_38[0] = '\0';
        local_40 = plVar17;
        uVar10 = FUN_00d24090();
        local_108 = CONCAT71(local_108._1_7_,uVar10);
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        bVar33 = (int)local_158 == 9;
        if (plVar17 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        local_108 = CONCAT71(local_108._1_7_,(byte)local_108 | bVar33);
      }
      if (plVar18 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      uVar32 = (uint)local_158;
      pVar2 = (void*)local_68;
      if (param_3 == 0) {
        uVar25 = (uint)(0x10001010001 >> ((char)local_158 * '\b' - 0x40U & 0x3f));
        if (5 < uVar32 - 8) {
          uVar25 = 0;
        }
        bVar33 = (uVar32 & 0xfffffffd) == 5;
        uVar31 = uVar25;
        if (bVar33) {
          uVar31 = 1;
        }
        if (uVar32 == 9) {
          uVar25 = 1;
        }
        local_190 = (uint64_t)uVar25;
        if (uVar32 == 6) {
          local_190 = 1;
        }
        if (uVar32 - 3 < 2) {
          local_190 = 1;
        }
        local_13c = (uint)(uVar32 == 2 || bVar33);
        bVar33 = true;
        local_100 = g_023b2c70;
      }
      else {
        if (uVar32 - 0xb < 0xb) {
          pVar12 = 0x2411a20;
          uVar31 = (uint)CONCAT71((int7)((uint64_t)plVar18 >> 8),
                                  (&g_02411a20)[(int)(uVar32 - 0xb)]);
          uVar25 = uVar31;
          pVar23 = 0x2411a20;
          if (uVar32 == 0x14) goto LAB_016e0866;
LAB_016e0835:
          pVar12 = pVar23;
          uVar31 = uVar25;
          local_100 = g_023b2c70;
          if ((*(char *)(this_ptr + 0x80) != '\0') && (uVar32 == 0x15)) goto LAB_016e0866;
        }
        else {
          uVar31 = 0;
          uVar25 = 0;
          pVar23 = pVar12;
          if (uVar32 != 0x14) goto LAB_016e0835;
LAB_016e0866:
          pvVar14 = _pthread_getspecific(pVar12);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            pVar12 = pVar2;
          }
          local_118 = (int64_t *)FUN_01907950();
          pvVar14 = _pthread_getspecific(pVar12);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar29 = (double)FUN_01907950();
          dVar29 = (double)((uint64_t)((double)local_118 - dVar29) & g_023908f0);
          dVar29 = dVar29 / (dVar29 + (double)local_160);
          if (dVar29 < g_0238fee8) {
            dVar29 = g_0238fee8 / dVar29;
          }
          local_100 = g_023b2c70;
          if ((g_024119c0 <= dVar29) && (local_100 = 0.0, dVar29 <= g_023942c0)) {
            local_100 = (g_023942c0 - dVar29) / g_024119c8;
            local_100 = local_100 * local_100;
            local_100 = local_100 + local_100;
          }
        }
        if ((int)local_158 == 0x15) {
          bVar33 = *(char *)(this_ptr + 0x80) == '\0';
          local_13c = (uint)CONCAT71((int7)((uint64_t)this_ptr >> 8),!bVar33);
        }
        else {
          bVar33 = true;
          local_13c = 0;
        }
        local_190 = 0;
      }
      FUN_016d53b0();
      local_1f0 = local_40;
      if ((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      local_170 = (double)CONCAT44(local_170._4_4_,uVar31);
      local_d1 = bVar33;
      plVar17 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar17 = (int64_t)&g_02572358;
      uVar34 = (*g_02572370)();
      plVar18 = local_f0 + 2;
      local_118 = plVar18;
      local_a0 = plVar17;
      if (0 < *(int *)((int64_t)local_f0 + 0xc)) {
        lVar16 = 0;
        pplVar27 = &local_40;
        do {
          pvVar14 = _pthread_getspecific((void*)plVar18);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_019079b0();
          pvVar14 = _pthread_getspecific((void*)plVar18);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01907950();
          FUN_01907b60();
          plVar17 = local_e8;
          if (local_e0 == '\0') {
            if (local_e8 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_e0 = '\0';
          }
          local_40 = plVar17;
          local_38[0] = '\0';
          uVar34 = FUN_00d21140();
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            uVar34 = FUN_00d50b20();
          }
          if (plVar17 != (int64_t *)0x0) {
            uVar34 = FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
            uVar34 = FUN_00d50b20();
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < *(int *)((int64_t)local_f0 + 0xc));
      }
      local_2e0 = local_70;
      local_2d8 = 0;
      FUN_016e5180(uVar34,&local_2e0);
      local_168 = local_40;
      if ((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      uVar32 = -(uint)((double)local_160 == 0.0) & 1;
      uVar30 = (uint64_t)uVar32;
      local_e8 = *(int64_t **)(this_ptr + 0x68);
      if (param_3 == 1) {
        pvVar14 = _pthread_getspecific((void*)plVar18);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_280 = local_68;
        local_278 = '\0';
        plVar18 = (int64_t *)0x0;
        FUN_01900ec0(0,&local_280);
        plVar17 = local_40;
        if (local_38[0] == '\0') {
          if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38[0] = '\0';
        }
        if ((local_278 != '\0') && (local_280 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((plVar17 == (int64_t *)0x0) || (*(int64_t **)(this_ptr + 0x78) == (int64_t *)0x0))
           || (pplVar27 = (int64_t **)CONCAT71((int7)((uint64_t)pplVar27 >> 8),1),
              *(int64_t **)(this_ptr + 0x78) != plVar17)) {
          pvVar14 = _pthread_getspecific((void*)plVar18);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01901340();
          pplVar27 = (int64_t **)
                     CONCAT71((int7)((uint64_t)pplVar27 >> 8),(int64_t *)*local_c0 == local_40);
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (local_168 == (int64_t *)0x0 || (char)uVar32 != '\0') {
          uVar19 = 0;
          local_148 = 0;
          local_f8 = (int64_t *)0x0;
        }
        else {
          plVar18 = (int64_t *)0x0;
          local_f8 = (int64_t *)0x0;
          uVar19 = 0;
          if (*(int64_t **)(this_ptr + 0x78) == (int64_t *)0x0) {
            local_148 = 0;
          }
          else {
            plVar18 = (int64_t *)0x0;
            local_148 = 0;
            if (*(int64_t **)(this_ptr + 0x78) == local_168) {
              lVar16 = *(int64_t *)(this_ptr + 0x50);
              pvVar14 = _pthread_getspecific(0);
              if (pvVar14 != (void *)0x0) {
                lVar16 = *(int64_t *)(this_ptr + 0x50);
                lVar22 = FUN_00e8b990();
                if (lVar22 != 0) {
                  lVar16 = *(int64_t *)
                            (lVar16 + 0x20 + (uint64_t)(*(uint *)(lVar22 + 0x154) & 1) * 8);
                }
              }
              local_270 = local_168;
              local_268 = '\0';
              FUN_01900ad0(0,&local_270);
              local_f8 = local_40;
              plVar18 = local_40;
              if (local_40 == (int64_t *)0x0) {
                local_f8 = (int64_t *)0x0;
                local_148 = 0;
              }
              else if (local_38[0] == '\0') {
                uVar19 = FUN_00d50b00();
                local_148 = CONCAT71((int7)((uint64_t)uVar19 >> 8),1);
                if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_38[0] = '\0';
                local_148 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
              }
              if ((local_268 != '\0') && (local_270 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              uVar19 = CONCAT71((int7)((uint64_t)lVar16 >> 8),1);
            }
          }
        }
        if (plVar17 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        local_148 = 0;
        local_f8 = (int64_t *)0x0;
        uVar19 = 0;
        pplVar27 = (int64_t **)0x0;
      }
      local_40 = local_70;
      local_38[0] = '\0';
      local_150 = (int64_t *)FUN_00d237a0();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_40 = local_68;
      local_38[0] = '\0';
      local_130 = (int64_t *)FUN_00d237a0();
      local_2b8 = pplVar27;
      local_2b0 = uVar19;
      local_2a8 = uVar30;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_40 = (int64_t *)*local_c0;
      local_38[0] = '\0';
      pVar12 = FUN_00d237a0();
      dVar29 = local_170;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_2a0 = (int64_t)*(int *)((int64_t)local_f0 + 0xc);
      pvVar14 = _pthread_getspecific((void*)plVar18);
      if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
        plVar18 = local_68;
      }
      local_120 = (int64_t *)FUN_01907950();
      pvVar14 = _pthread_getspecific((void*)plVar18);
      if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
        plVar18 = local_70;
      }
      dVar35 = (double)FUN_01907950();
      pvVar14 = _pthread_getspecific((void*)plVar18);
      if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
        plVar18 = local_70;
      }
      local_c8 = (double)FUN_01907950();
      pVar23 = (void*)plVar18;
      iVar26 = (int)local_130;
      local_b0 = (double)CONCAT44(local_b0._4_4_,iVar26);
      local_138 = (double)local_60;
      local_120 = (int64_t *)(((double)local_120 - dVar35) * local_138);
      if (((((uint64_t)dVar29 & 1) == 0) || ((double)local_160 != 0.0)) || (NAN((double)local_160))
         ) {
        local_b8 = (double)CONCAT44(local_b8._4_4_,
                                    (int)CONCAT71((int7)((uint64_t)local_130 >> 8),1));
        plVar17 = local_160;
        if (((double)local_160 != 0.0) || (plVar17 = local_160, NAN((double)local_160)))
        goto joined_r0x016e2b01;
        local_b8 = (double)((uint64_t)local_b8._4_4_ << 0x20);
        iVar24 = 0;
        if (iVar26 < *(int *)((int64_t)local_f0 + 0xc) + -1) {
          iVar24 = local_60;
        }
        local_b0 = (double)CONCAT44(local_b0._4_4_,iVar24 + iVar26);
        local_48 = local_160;
        plVar18 = local_130;
        if (((uint64_t)dVar29 & 1) == 0) goto LAB_016e1345;
LAB_016e1f41:
        local_50 = local_a0 + 2;
        if (1 < *(int *)((int64_t)local_d0 + 0xc)) {
          dVar29 = ((double)local_48 * local_138 + (double)local_120) / (double)local_120;
          lVar16 = 1;
          do {
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_b8 = (double)FUN_01907950();
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar35 = (double)FUN_01907950();
            dVar5 = (double)_pow(SUB84((double)(int)lVar16 /
                                       (double)(*(int *)((int64_t)local_d0 + 0xc) + -1),0),
                                 SUB84(local_100,0));
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01907cc0(SUB84((((local_b8 - local_c8) * dVar29 + local_c8) - dVar35) * dVar5 +
                               dVar35,0));
            lVar16 = lVar16 + 1;
          } while (lVar16 < *(int *)((int64_t)local_d0 + 0xc));
        }
      }
      else {
        pvVar14 = _pthread_getspecific(pVar23);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar23 = pVar2;
        }
        plVar18 = (int64_t *)FUN_019079b0();
        pvVar14 = _pthread_getspecific(pVar23);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_a8 = (int64_t *)FUN_019079b0();
        local_40 = plVar18;
        FUN_00e7b970();
        local_178 = (double)FUN_00e7c860();
        pvVar14 = _pthread_getspecific(pVar23);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar23 = pVar2;
        }
        dVar29 = (double)FUN_01907950();
        pvVar14 = _pthread_getspecific(pVar23);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar35 = (double)FUN_01907950();
        pvVar14 = _pthread_getspecific(pVar23);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_188 = (int64_t *)FUN_01907950();
        local_178 = local_178 * g_023b4df8;
        local_78 = (int64_t *)(local_178 / (dVar29 - dVar35));
        local_1a0 = (double)local_78 * local_1e8;
        local_198 = (int64_t *)
                    (*(double *)(&g_02411870 + (uint64_t)(local_1a0 < (double)local_78) * 8) *
                    local_138);
        uVar32 = *(int *)((int64_t)local_d0 + 0xc) - 2;
        plVar18 = (int64_t *)(uint64_t)uVar32;
        local_180 = (double)_pow(SUB84((double)(int)uVar32 /
                                       (double)(*(int *)((int64_t)local_d0 + 0xc) + -1),0),
                                 SUB84(local_100,0));
        iVar26 = 0x65;
        local_90 = local_198;
        local_48 = local_198;
        while( true ) {
          pvVar14 = _pthread_getspecific((void*)plVar18);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar29 = (double)FUN_01907950();
          pvVar14 = _pthread_getspecific((void*)plVar18);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar19 = FUN_01907950();
          dVar35 = ((double)local_48 * local_138 + (double)local_120) / (double)local_120;
          dVar35 = local_178 /
                   ((((double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) - local_c8) * dVar35 +
                    local_c8) -
                   ((((dVar29 - local_c8) * dVar35 + local_c8) - (double)local_188) * local_180 +
                   (double)local_188));
          local_b8 = (double)CONCAT44(local_b8._4_4_,(int)CONCAT71((int7)((uint64_t)uVar19 >> 8),1)
                                     );
          dVar29 = local_170;
          if ((g_023b36d0 < dVar35 / local_1a0) &&
             (plVar17 = local_48, dVar35 / local_1a0 < g_023b36d8)) break;
          if (((local_1a0 < (double)local_78) && (dVar35 < local_1a0)) ||
             (((double)local_78 < local_1a0 && (local_1a0 < dVar35)))) {
            local_90 = (int64_t *)((double)local_90 * g_02394dd0);
          }
          plVar17 = local_198;
          if (iVar26 == 0) break;
          iVar26 = iVar26 + -1;
          local_48 = (int64_t *)((double)local_48 + (double)local_90);
          local_78 = (int64_t *)dVar35;
        }
joined_r0x016e2b01:
        local_48 = plVar17;
        if (((uint64_t)dVar29 & 1) != 0) goto LAB_016e1f41;
LAB_016e1345:
        local_120 = (int64_t *)(int64_t)(int)pVar12;
        pvVar14 = _pthread_getspecific(pVar12);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        plVar18 = (int64_t *)FUN_019079b0();
        lVar16 = (int64_t)(int)(void*)local_150;
        pvVar14 = _pthread_getspecific((void*)local_150);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_a8 = (int64_t *)FUN_019079b0();
        local_40 = plVar18;
        FUN_00e7b970();
        FUN_00e7b820();
        local_c8 = (double)FUN_00e7c860();
        pvVar14 = _pthread_getspecific((void*)*local_118);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        plVar17 = (int64_t *)FUN_019079b0();
        plVar18 = local_120;
        pvVar14 = _pthread_getspecific((void*)local_120);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_a8 = (int64_t *)FUN_019079b0();
        local_40 = plVar17;
        FUN_00e7b970();
        FUN_00e7b820();
        dVar29 = (double)FUN_00e7c860();
        local_180 = (double)FUN_00e7c860();
        local_170 = (double)FUN_00e7c860();
        local_198 = (int64_t *)FUN_00e84280();
        iVar26 = FUN_00e84a40();
        local_1a0 = (double)CONCAT44(local_1a0._4_4_,iVar26);
        local_128 = (int64_t *)CONCAT44(local_128._4_4_,0xffffffff);
        local_50 = local_a0 + 2;
        if (0 < *(int *)((int64_t)local_d0 + 0xc)) {
          local_180 = local_180 * g_023b3bc0;
          local_170 = local_170 * g_023b3bc0;
          local_2a0 = local_2a0 + -1;
          if (local_180 <= local_c8) {
            local_180 = local_c8;
          }
          if (local_170 <= dVar29) {
            local_170 = dVar29;
          }
          local_138 = (double)iVar26 * g_023942d0;
          lVar22 = lVar16 * 8;
          lVar28 = 0;
          do {
            lVar3 = *(int64_t *)(*local_118 + lVar22 + lVar28 * 8);
            if (lVar3 != 0) {
              FUN_00d50b00();
            }
            lVar1 = lVar16 + lVar28;
            dVar29 = g_0238fee8;
            if ((byte)local_108 == '\0') {
              if (lVar1 < (int64_t)local_120) {
                pvVar14 = _pthread_getspecific((void*)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                plVar17 = (int64_t *)FUN_019079b0();
                pvVar14 = _pthread_getspecific((void*)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_a8 = (int64_t *)FUN_019079b0();
                local_40 = plVar17;
                FUN_00e7b970();
                dVar29 = (double)FUN_00e7c860();
                dVar29 = dVar29 / local_180;
              }
              else {
                pvVar14 = _pthread_getspecific((void*)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                plVar17 = (int64_t *)FUN_019079b0();
                pvVar14 = _pthread_getspecific((void*)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_a8 = (int64_t *)FUN_019079b0();
                local_40 = plVar17;
                FUN_00e7b970();
                dVar29 = (double)FUN_00e7c860();
                dVar29 = dVar29 / local_170;
              }
              uVar32 = (uint)((g_0238fee8 - dVar29) * local_138);
              dVar29 = g_0238fee8;
              if ((-1 < (int)uVar32) && ((int)uVar32 < local_1a0._0_4_)) {
                dVar29 = (double)*(float *)((int64_t)local_198 + (uint64_t)uVar32 * 4);
                plVar18 = local_198;
              }
            }
            local_c8 = dVar29;
            if ((char)local_b8 == '\0') {
              if (lVar1 < local_2a0) {
                pvVar14 = _pthread_getspecific((void*)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_258 = '\0';
                local_260 = lVar3;
                local_100 = (double)FUN_018fde50();
                if ((local_258 != '\0') && (local_260 != 0)) {
                  FUN_00d50b20();
                }
                lVar1 = *(int64_t *)(*local_118 + lVar22 + 8 + lVar28 * 8);
                if (lVar1 != 0) {
                  FUN_00d50b00();
                }
                pvVar14 = _pthread_getspecific((void*)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                plVar17 = (int64_t *)FUN_019079b0();
                pvVar14 = _pthread_getspecific((void*)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_a8 = (int64_t *)FUN_019079b0();
                local_40 = plVar17;
                FUN_00e7b970();
                local_178 = (double)FUN_00e7c860();
                local_c8 = (double)_pow(local_1e8._0_4_,SUB84(local_c8,0));
                pvVar14 = _pthread_getspecific((void*)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_188 = (int64_t *)FUN_01907950();
                pvVar14 = _pthread_getspecific((void*)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01907cc0(SUB84((g_023b4df8 / (local_c8 * local_100)) * local_178 +
                                   (double)local_188,0));
                if (lVar1 != 0) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              pvVar14 = _pthread_getspecific((void*)plVar18);
              if (pvVar14 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar14 = _pthread_getspecific((void*)plVar18);
              if (pvVar14 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar29 = (double)FUN_01907950();
              FUN_01907cc0(SUB84(local_c8 * (double)local_48 + dVar29,0));
            }
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            lVar28 = lVar28 + 1;
          } while (lVar28 < *(int *)((int64_t)local_d0 + 0xc));
        }
      }
      pvVar14 = _pthread_getspecific((void*)plVar18);
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_120 = (int64_t *)FUN_01907950();
      plVar18 = (int64_t *)CONCAT71((int7)((uint64_t)plVar18 >> 8),local_d4 | local_d3);
      bVar11 = uVar13 == 0xb | local_d2 | local_d4 | local_d3;
      pVar12 = (void*)plVar18;
      iVar26 = local_b0._0_4_;
      if ((char)local_13c == '\0') {
        if ((local_190 & 1) != 0) {
          iVar24 = -1;
          if (bVar11 == 0) {
            iVar24 = *(int *)((int64_t)local_a0 + 0xc);
          }
          pvVar14 = _pthread_getspecific(pVar12);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar29 = (double)FUN_01907950();
          pvVar14 = _pthread_getspecific((void*)plVar18);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar35 = (double)FUN_01907950();
          iVar26 = iVar26 - iVar24;
          while (iVar26 = iVar26 + local_60, iVar26 != 0) {
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar5 = (double)FUN_01907950();
            FUN_01907cc0(SUB84(dVar5 + (dVar29 - dVar35),0));
          }
        }
      }
      else {
        lVar16 = (int64_t)local_b0._0_4_;
        pvVar14 = _pthread_getspecific(pVar12);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_c0 = (int64_t *)FUN_01907950();
        pvVar14 = _pthread_getspecific(pVar12);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar29 = (double)FUN_01907950();
        pvVar14 = _pthread_getspecific(pVar12);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_b8 = (double)FUN_01907950();
        pvVar14 = _pthread_getspecific(pVar12);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar35 = (double)FUN_01907950();
        plVar18 = (int64_t *)0x0;
        if (bVar11 == 0) {
          plVar18 = (int64_t *)(uint64_t)(*(int *)((int64_t)local_a0 + 0xc) - 1);
        }
        iVar26 = local_b0._0_4_ - (int)plVar18;
        local_b0 = (double)CONCAT44(local_b0._4_4_,iVar26);
        if (iVar26 != 0) {
          local_c0 = (int64_t *)(((double)local_c0 - dVar29) / (local_b8 - dVar35));
          local_108 = (int64_t)local_60;
          lVar22 = local_108 * 8;
          do {
            lVar28 = *local_118;
            lVar3 = *(int64_t *)(lVar28 + lVar16 * 8);
            if (lVar3 != 0) {
              FUN_00d50b00();
              lVar28 = *local_118;
            }
            plVar18 = (int64_t *)(lVar28 + lVar22);
            lVar28 = plVar18[lVar16];
            if (lVar28 != 0) {
              FUN_00d50b00();
            }
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            plVar17 = (int64_t *)FUN_019079b0();
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_a8 = (int64_t *)FUN_019079b0();
            local_40 = plVar17;
            FUN_00e7b970();
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_b8 = (double)FUN_01907950();
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_c8 = (double)FUN_01907950();
            dVar29 = (double)FUN_00e7c860();
            dVar35 = (double)FUN_00e7c860();
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar5 = (double)FUN_01907950();
            FUN_01907cc0(SUB84((g_023b4df8 /
                               ((g_023b4df8 / (local_b8 - local_c8)) * dVar29 * (double)local_c0))
                               * dVar35 + dVar5,0));
            if (lVar28 != 0) {
              FUN_00d50b20();
            }
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            lVar16 = lVar16 + local_108;
            iVar26 = local_b0._0_4_ + local_60;
            local_b0 = (double)CONCAT44(local_b0._4_4_,iVar26);
          } while (iVar26 != 0);
        }
      }
      if (((local_d1 & bVar11) == 1) && (((char)local_13c != '\0' || ((local_190 & 1) != 0)))) {
        pvVar14 = _pthread_getspecific((void*)plVar18);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar29 = (double)FUN_01907950();
        if (0 < *(int *)((int64_t)local_a0 + 0xc)) {
          dVar29 = dVar29 - (double)local_120;
          lVar16 = 0;
          do {
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar35 = (double)FUN_01907950();
            FUN_01907cc0(SUB84(dVar35 - dVar29,0));
            lVar16 = lVar16 + 1;
          } while (lVar16 < *(int *)((int64_t)local_a0 + 0xc));
        }
      }
      dVar29 = (double)FUN_016cd860();
      bVar33 = true;
      bVar8 = true;
      if (1 < *(int *)((int64_t)local_a0 + 0xc)) {
        iVar26 = (int)local_130;
        iVar24 = (int)local_150;
        dVar35 = g_024119d0;
        if (dVar29 * g_023b1e98 <= g_024119d0) {
          dVar35 = dVar29 * g_023b1e98;
        }
        lVar16 = 1;
        bVar7 = true;
        bVar6 = true;
        do {
          lVar22 = *local_50;
          lVar28 = *(int64_t *)(lVar22 + lVar16 * 8);
          local_1c0 = 0;
          if (lVar28 != 0) {
            FUN_00d50b00();
            lVar22 = *local_50;
          }
          local_1c0 = '\x01';
          lVar3 = *(int64_t *)(lVar22 + -8 + lVar16 * 8);
          local_1b0 = 0;
          local_1c8 = lVar28;
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          local_1b0 = '\x01';
          local_1b8 = lVar3;
          dVar29 = (double)FUN_019079d0();
          if ((local_1b0 != '\0') && (local_1b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1c0 != '\0') && (local_1c8 != 0)) {
            FUN_00d50b20();
          }
          plVar18 = (int64_t *)
                    CONCAT71((int7)((uint64_t)lVar22 >> 8),dVar29 < g_023908b8 || dVar35 < dVar29
                            );
          bVar33 = false;
          bVar8 = bVar6;
          if ((iVar26 + iVar24) / 2 < lVar16) {
            bVar8 = false;
            bVar33 = bVar7;
          }
          if (dVar29 >= g_023908b8 && dVar29 <= dVar35) {
            bVar33 = bVar7;
            bVar8 = bVar6;
          }
          lVar16 = lVar16 + 1;
          bVar7 = bVar33;
          bVar6 = bVar8;
        } while (lVar16 < *(int *)((int64_t)local_a0 + 0xc));
      }
      if ((char)local_2b8 == '\0') {
        bVar7 = false;
LAB_016e3608:
        lVar16 = FUN_00e7bcc0();
        pVar12 = (void*)plVar18;
        if ((char)local_2b0 != '\0') {
          dVar29 = (double)(int64_t)((int)local_150 + -1);
          plVar17 = *(int64_t **)(*local_50 + (int64_t)dVar29 * 8);
          if (plVar17 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          pvVar14 = _pthread_getspecific(pVar12);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_210 = local_f8;
          local_208 = '\0';
          local_b0 = (double)FUN_018fde50();
          if ((local_208 != '\0') && (local_210 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_b8 = (double)FUN_00e7c860();
          plVar18 = (int64_t *)*local_50;
          pvVar14 = _pthread_getspecific((void*)plVar18);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar35 = (double)FUN_01907950();
          pvVar14 = _pthread_getspecific((void*)plVar18);
          if ((pvVar14 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
            plVar18 = plVar17;
          }
          dVar5 = (double)FUN_01907950();
          pVar12 = (void*)plVar18;
          local_b0 = (g_023b4df8 / local_b0) * local_b8;
          dVar35 = dVar35 + g_02394dd0 * local_b0;
          if (dVar35 <= dVar5) {
            pvVar14 = _pthread_getspecific(pVar12);
            if ((pvVar14 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
              pVar12 = (void*)plVar17;
            }
            pvVar14 = _pthread_getspecific(pVar12);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar5 = (double)FUN_01907950();
            FUN_01907cc0(SUB84(dVar5 - local_b0,0));
            plVar18 = local_150;
            local_b8 = dVar29;
            if ((int)local_150 <= *(int *)((int64_t)local_a0 + 0xc)) {
              do {
                pvVar14 = _pthread_getspecific((void*)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar14 = _pthread_getspecific((void*)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_40 = (int64_t *)FUN_019079b0();
                FUN_00e7b970();
                FUN_01907c60();
                dVar29 = (double)((int64_t)dVar29 + 1);
              } while ((int64_t)dVar29 < (int64_t)*(int *)((int64_t)local_a0 + 0xc));
            }
            FUN_00e7b970();
            dVar29 = local_b8;
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_a8 = (int64_t *)FUN_019079b0();
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if ((pvVar14 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
              plVar18 = local_f8;
            }
            local_40 = (int64_t *)FUN_019079b0();
            FUN_00e7b820();
            local_128 = local_40;
            if ((local_a8._4_4_ == 0) || ((uint64_t)local_40 >> 0x20 == 0)) {
              bVar7 = true;
            }
            else {
              cVar9 = FUN_00e7c020();
              plVar18 = (int64_t *)
                        CONCAT71((int7)((uint64_t)plVar18 >> 8),local_168 == (int64_t *)0x0);
              bVar7 = true;
              if (((cVar9 == '\0' && local_168 != (int64_t *)0x0) &&
                  (*(int64_t **)(this_ptr + 0x78) != (int64_t *)0x0)) &&
                 (*(int64_t **)(this_ptr + 0x78) == local_168)) {
                FUN_00d64850();
                if (*(int64_t *)(this_ptr + 0x78) != 0) {
                  *(int64_t *)(this_ptr + 0x78) = 0;
                  FUN_00d50b20();
                }
                FUN_00d64910();
              }
            }
          }
          pvVar14 = _pthread_getspecific((void*)plVar18);
          if ((pvVar14 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
            plVar18 = plVar17;
          }
          dVar5 = (double)FUN_01907950();
          if (dVar5 + local_b0 < dVar35) {
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if ((pvVar14 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
              plVar18 = plVar17;
            }
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar35 = (double)FUN_01907950();
            FUN_01907cc0(SUB84(local_b0 + dVar35,0));
            plVar18 = local_150;
            if ((int)local_150 <= *(int *)((int64_t)local_a0 + 0xc)) {
              do {
                pvVar14 = _pthread_getspecific((void*)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar14 = _pthread_getspecific((void*)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_40 = (int64_t *)FUN_019079b0();
                FUN_00e7b820();
                FUN_01907c60();
                dVar29 = (double)((int64_t)dVar29 + 1);
              } while ((int64_t)dVar29 < (int64_t)*(int *)((int64_t)local_a0 + 0xc));
            }
            bVar7 = true;
            FUN_00e7b820();
          }
          if (plVar17 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        if (1 < *(int *)((int64_t)local_a0 + 0xc)) {
          lVar22 = 1;
          do {
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar29 = (double)FUN_01907950();
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar35 = (double)FUN_01907950();
            if (dVar29 <= dVar35) goto LAB_016e3f6a;
            lVar22 = lVar22 + 1;
          } while (lVar22 < *(int *)((int64_t)local_a0 + 0xc));
        }
        uVar30 = 0;
        if ((bVar33) && (bVar8)) {
          if ((int)local_158 == 0xc) {
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01907950();
            FUN_01907cc0();
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01907950();
            FUN_01907cc0();
          }
          pvVar14 = _pthread_getspecific((void*)plVar18);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_200 = local_a0;
          local_1f8 = '\0';
          uVar34 = FUN_01903d50();
          plVar17 = local_1f0;
          if ((local_1f8 != '\0') && (local_200 != (int64_t *)0x0)) {
            uVar34 = FUN_00d50b20();
          }
          if (bVar7) {
            local_2d0 = plVar17;
            local_2c8 = 0;
            FUN_016d6df0(uVar34,1);
            if (local_298 != (int64_t *)0x0) {
              *local_298 = lVar16;
              plVar18 = local_298;
            }
          }
          pvVar14 = _pthread_getspecific((void*)plVar18);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar30 = CONCAT71((int7)((uint64_t)plVar17 >> 8),1);
          FUN_018f9310();
        }
      }
      else {
        pvVar14 = _pthread_getspecific((void*)plVar18);
        uVar30 = local_2a8;
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_250 = local_68;
        local_248 = '\0';
        pVar12 = 0;
        FUN_01900ec0(0,&local_250);
        plVar17 = local_40;
        if (local_38[0] == '\0') {
          if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38[0] = '\0';
        }
        if ((local_248 != '\0') && (local_250 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar17 == (int64_t *)0x0) {
          pvVar14 = _pthread_getspecific(pVar12);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01901340();
          pvVar14 = _pthread_getspecific(pVar12);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar34 = FUN_019079b0();
          FUN_016cbad0(uVar34,0);
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar14 = _pthread_getspecific(pVar12);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar34 = FUN_019079b0();
          FUN_016cbad0(uVar34,0);
        }
        local_188 = (int64_t *)(int64_t)(int)local_130;
        lVar16 = *local_50;
        plVar4 = *(int64_t **)(lVar16 + (int64_t)local_188 * 8);
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b00();
          lVar16 = *local_50;
        }
        iVar26 = (int)local_130 + 1;
        local_178 = (double)CONCAT44(local_178._4_4_,iVar26);
        local_120 = (int64_t *)(int64_t)iVar26;
        lVar16 = *(int64_t *)(lVar16 + (int64_t)local_120 * 8);
        if (lVar16 != 0) {
          FUN_00d50b00();
        }
        local_108 = lVar16;
        if (((int)local_130 < 1) ||
           (local_c0 = *(int64_t **)(*local_50 + (uint64_t)((int)local_130 - 1) * 8),
           local_c0 == (int64_t *)0x0)) {
          local_c0 = (int64_t *)0x0;
          local_100 = (double)CONCAT44(local_100._4_4_,1);
        }
        else {
          FUN_00d50b00();
          local_100 = (double)((uint64_t)local_100 & 0xffffffff00000000);
        }
        uVar13 = (int)local_130 + 2;
        uVar20 = (uint64_t)uVar13;
        plVar18 = local_a0;
        if ((int)uVar13 < *(int *)((int64_t)local_a0 + 0xc)) {
          uVar20 = (uint64_t)(int)uVar13;
          plVar18 = (int64_t *)*local_50;
          local_78 = (int64_t *)plVar18[uVar20];
          if (local_78 == (int64_t *)0x0) goto LAB_016e2c14;
          FUN_00d50b00();
          local_138 = (double)((uint64_t)local_138 & 0xffffffff00000000);
        }
        else {
LAB_016e2c14:
          local_138 = (double)CONCAT44(local_138._4_4_,(int)CONCAT71((int7)(uVar20 >> 8),1));
          local_78 = (int64_t *)0x0;
        }
        pvVar14 = _pthread_getspecific((void*)plVar18);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_240 = local_68;
        local_238 = '\0';
        local_48 = (int64_t *)FUN_018fde50();
        if ((local_238 != '\0') && (local_240 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_c0 != (int64_t *)0x0 && (char)uVar30 == '\0') {
          local_230 = local_c0;
          local_228 = '\0';
          local_218 = '\0';
          local_220 = plVar4;
          local_48 = (int64_t *)FUN_019079d0();
          if ((local_218 != '\0') && (local_220 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_228 != '\0') && (local_230 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_c8 = (double)FUN_00e7c860();
        local_b8 = g_023b4df8 /
                   ((double)(~-(uint64_t)((double)local_160 != 0.0) & (uint64_t)local_1e8 |
                            (uint64_t)g_0238fee8 & -(uint64_t)((double)local_160 != 0.0)) *
                   (double)local_48);
        local_c8 = local_c8 * local_b8;
        dVar29 = g_023b2568;
        if (local_78 != (int64_t *)0x0) {
          pvVar14 = _pthread_getspecific((void*)plVar18);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar18 = local_78;
          }
          dVar29 = (double)FUN_01907950();
          dVar29 = dVar29 + g_02394dd0 * local_c8;
        }
        local_b0 = dVar29;
        pvVar14 = _pthread_getspecific((void*)plVar18);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        plVar21 = (int64_t *)FUN_019079b0();
        pvVar14 = _pthread_getspecific((void*)plVar18);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          plVar18 = plVar4;
        }
        local_128 = (int64_t *)FUN_019079b0();
        local_40 = plVar21;
        FUN_00e7b970();
        local_a8 = local_40;
        dVar29 = (double)FUN_00e7c860();
        pvVar14 = _pthread_getspecific((void*)plVar18);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          plVar18 = plVar4;
        }
        local_1e8 = (double)FUN_01907950();
        local_128 = (int64_t *)FUN_00e7bdb0();
        dVar29 = dVar29 * local_b8 + local_1e8;
        if ((local_78 != (int64_t *)0x0) && (local_b0 <= dVar29)) {
          do {
            FUN_00e7b970();
            FUN_00e7b970();
            dVar35 = (double)FUN_00e7c860();
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              plVar18 = plVar4;
            }
            dVar29 = (double)FUN_01907950();
            dVar29 = dVar35 * local_b8 + dVar29;
          } while (local_b0 <= dVar29);
        }
        if ((local_78 != (int64_t *)0x0) && (local_c8 + dVar29 < local_b0)) {
          do {
            FUN_00e7b820();
            FUN_00e7b820();
            dVar35 = (double)FUN_00e7c860();
            pvVar14 = _pthread_getspecific((void*)plVar18);
            if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              plVar18 = plVar4;
            }
            dVar29 = (double)FUN_01907950();
            dVar29 = dVar35 * local_b8 + dVar29;
          } while (local_c8 + dVar29 < local_b0);
        }
        local_48._0_4_ = SUB84(dVar29,0);
        if ((((double)local_160 == 0.0) && (!NAN((double)local_160))) &&
           (local_78 != (int64_t *)0x0)) {
          pvVar14 = _pthread_getspecific((void*)plVar18);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar18 = local_78;
          }
          dVar29 = (double)FUN_01907950();
          pvVar14 = _pthread_getspecific((void*)plVar18);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar18 = plVar4;
          }
          local_b0 = (double)FUN_01907950();
          local_40 = local_a8;
          FUN_00e7b820();
          local_1a8 = local_40;
          local_b8 = (double)FUN_00e7c860();
          local_c8 = (double)FUN_00e7c860();
          pvVar14 = _pthread_getspecific((void*)plVar18);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar18 = plVar4;
          }
          dVar35 = (double)FUN_01907950();
          local_48._0_4_ = SUB84(((dVar29 - local_b0) / local_b8) * local_c8 + dVar35,0);
        }
        local_40 = (int64_t *)((uint64_t)local_40 & 0xffffffff00000000);
        if ((local_128._4_4_ == 0) || (cVar9 = FUN_00e7c630(), cVar9 == '\0')) {
          uVar30 = (uint64_t)local_178 & 0xffffffff;
          plVar18 = local_120;
          if (local_178._0_4_ < *(int *)((int64_t)local_a0 + 0xc)) {
            do {
              pvVar14 = _pthread_getspecific((void*)uVar30);
              if (pvVar14 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar14 = _pthread_getspecific((void*)uVar30);
              if (pvVar14 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_40 = (int64_t *)FUN_019079b0();
              FUN_00e7b820();
              FUN_01907c60();
              plVar18 = (int64_t *)((int64_t)plVar18 + 1);
            } while ((int64_t)plVar18 < (int64_t)*(int *)((int64_t)local_a0 + 0xc));
          }
          pvVar14 = _pthread_getspecific((void*)local_120);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_1a8 = (int64_t *)FUN_019079b0();
          plVar18 = local_188;
          pvVar14 = _pthread_getspecific((void*)local_188);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_40 = (int64_t *)FUN_019079b0();
          FUN_00e7b820();
          local_2c0 = local_40;
          if (((local_1a8._4_4_ == 0) || ((uint64_t)local_40 >> 0x20 == 0)) ||
             (cVar9 = FUN_00e7c020(), cVar9 != '\0')) {
            bVar7 = true;
            if (local_res8 != (void*)0x0) {
              *local_res8 = local_128;
              plVar18 = local_128;
            }
            goto LAB_016e3549;
          }
          bVar7 = true;
          bVar6 = false;
        }
        else {
          bVar7 = false;
LAB_016e3549:
          pvVar14 = _pthread_getspecific((void*)plVar18);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          bVar6 = true;
          FUN_01907cc0(local_48._0_4_);
          bVar8 = true;
        }
        if (SUB81(local_138,0) == '\0' && local_78 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        bVar11 = SUB81(local_100,0) | local_c0 == (int64_t *)0x0;
        plVar18 = (int64_t *)(uint64_t)CONCAT31((int3)((uint64_t)local_100 >> 8),bVar11);
        if (bVar11 == 0) {
          FUN_00d50b20();
        }
        if (local_108 != 0) {
          FUN_00d50b20();
        }
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (plVar17 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (bVar6) goto LAB_016e3608;
LAB_016e3f6a:
        uVar30 = 0;
      }
      if (((char)local_148 != '\0') && (local_f8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_168 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_a0 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_1f0 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_d0 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_f0 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_016e0204;
    }
  }
  uVar30 = 0;
LAB_016e0204:
  return uVar30 & 0xffffffff;
}

