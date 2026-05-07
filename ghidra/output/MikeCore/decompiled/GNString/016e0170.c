// Function: FUN_016e0170
// Address: 016e0170
// Size: 15910 bytes
// Class: GNString


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_016e0170(longlong *param_1,double param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  pthread_key_t pVar2;
  longlong lVar3;
  longlong *plVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  undefined1 uVar10;
  byte bVar11;
  pthread_key_t pVar12;
  uint uVar13;
  void *pvVar14;
  longlong **pplVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  pthread_key_t pVar23;
  int iVar24;
  ulonglong in_RCX;
  longlong *in_RDX;
  longlong *unaff_RSI;
  uint uVar25;
  longlong unaff_RDI;
  int iVar26;
  longlong **pplVar27;
  longlong lVar28;
  double dVar29;
  ulonglong uVar30;
  uint uVar31;
  uint uVar32;
  bool bVar33;
  undefined4 uVar34;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  double dVar35;
  undefined8 *local_res8;
  longlong *local_2e0;
  undefined1 local_2d8;
  longlong *local_2d0;
  undefined1 local_2c8;
  longlong *local_2c0;
  longlong **local_2b8;
  undefined8 local_2b0;
  ulonglong local_2a8;
  longlong local_2a0;
  longlong *local_298;
  longlong local_290;
  char local_288;
  longlong *local_280;
  char local_278;
  longlong *local_270;
  char local_268;
  longlong local_260;
  char local_258;
  longlong *local_250;
  char local_248;
  longlong *local_240;
  char local_238;
  longlong *local_230;
  char local_228;
  longlong *local_220;
  char local_218;
  longlong *local_210;
  char local_208;
  longlong *local_200;
  char local_1f8;
  longlong *local_1f0;
  double local_1e8;
  longlong local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  undefined8 local_1a8;
  double local_1a0;
  longlong *local_198;
  ulonglong local_190;
  longlong *local_188;
  double local_180;
  double local_178;
  double local_170;
  longlong *local_168;
  longlong *local_160;
  ulonglong local_158;
  longlong *local_150;
  undefined8 local_148;
  uint local_13c;
  double local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong *local_120;
  longlong *local_118;
  longlong local_108;
  double local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  char local_e0;
  byte local_d4;
  byte local_d3;
  byte local_d2;
  byte local_d1;
  longlong *local_d0;
  double local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  double local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_90;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  int local_60;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38 [8];
  
  local_298 = param_4;
  local_1e8 = param_2;
  local_160 = param_1;
  local_158 = in_RCX;
  local_c0 = in_RDX;
  if ((param_3 == 1) && (*(char *)(unaff_RDI + 0x80) == '\0')) {
    lVar16 = *unaff_RSI;
    uVar13 = *(uint *)(lVar16 + 0xc);
    uVar30 = (ulonglong)uVar13;
    if (0 < (int)uVar13) {
      while( true ) {
        uVar13 = uVar13 - 1;
        in_RCX = (ulonglong)uVar13;
        lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x10) + in_RCX * 8);
        if (lVar16 != 0) {
          FUN_00d50b00();
          lVar22 = *(longlong *)(unaff_RDI + 0x78);
          FUN_00d50b20();
          if ((lVar22 != 0) && (lVar22 == lVar16)) {
            FUN_00d23620();
          }
        }
        if ((longlong)uVar30 < 2) break;
        uVar30 = uVar30 - 1;
        lVar16 = *unaff_RSI;
      }
    }
  }
  pVar12 = (pthread_key_t)in_RCX;
  if (*(int *)(*unaff_RSI + 0xc) != 0) {
    if ((((local_1e8 != DAT_0238fee8) || (NAN(local_1e8) || NAN(DAT_0238fee8))) ||
        ((double)local_160 != 0.0)) || (NAN((double)local_160))) {
      if (((local_1e8 != DAT_0238fee8) || (NAN(local_1e8) || NAN(DAT_0238fee8))) &&
         ((*(char *)(unaff_RDI + 0x80) != '\0' && (*local_c0 == *(longlong *)(unaff_RDI + 0x78)))))
      {
        pvVar14 = _pthread_getspecific(pVar12);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_1d0 = 0;
        lVar16 = *(longlong *)(unaff_RDI + 0x78);
        if (lVar16 != 0) {
          FUN_00d50b00();
        }
        local_1d0 = '\x01';
        pVar12 = 0;
        local_1d8 = lVar16;
        FUN_01900ec0(0,&local_1d8);
        plVar18 = local_40;
        if (local_38[0] == '\0') {
          if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
             (local_40 != (longlong *)0x0)) {
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
        local_118 = (longlong *)FUN_01907950();
        lVar16 = *(longlong *)(unaff_RDI + 0x78);
        pvVar14 = _pthread_getspecific(pVar12);
        if (pvVar14 != (void *)0x0) {
          lVar16 = *(longlong *)(unaff_RDI + 0x78);
          lVar22 = FUN_00e8b990();
          if (lVar22 != 0) {
            lVar16 = *(longlong *)(lVar16 + 0x20 + (ulonglong)(*(uint *)(lVar22 + 0x154) & 1) * 8);
          }
        }
        pvVar14 = _pthread_getspecific(pVar12);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar35 = (double)FUN_01907950();
        FUN_01907cc0(SUB84(dVar35 - (dVar29 - (double)local_118) / local_1e8,0));
        uVar30 = CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
        if (plVar18 != (longlong *)0x0) {
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
      if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar14 = _pthread_getspecific(pVar12);
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_290 = *unaff_RSI;
      local_288 = '\0';
      FUN_01901690();
      local_d0 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
           (local_40 != (longlong *)0x0)) {
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
      pplVar27 = (longlong **)local_38;
      local_e8 = (longlong *)CONCAT71(local_e8._1_7_,local_38[0]);
      pplVar15 = pplVar27;
      if (local_38[0] == '\0') {
        pplVar15 = &local_e8;
      }
      *(char *)pplVar15 = '\0';
      if ((local_38[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_e8 == '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00d23340();
      local_68 = local_40;
      local_e8 = (longlong *)CONCAT71(local_e8._1_7_,local_38[0]);
      pplVar15 = pplVar27;
      if (local_38[0] == '\0') {
        pplVar15 = &local_e8;
      }
      *(char *)pplVar15 = '\0';
      if ((local_38[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_e8 == '\0') && (local_68 != (longlong *)0x0)) {
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
        local_e8 = (longlong *)CONCAT71(local_e8._1_7_,local_38[0]);
        pplVar15 = pplVar27;
        if (local_38[0] == '\0') {
          pplVar15 = &local_e8;
        }
        *(char *)pplVar15 = '\0';
        if ((local_38[0] != '\0') && (plVar18 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_70 == plVar18) {
          if (((char)local_e8 != '\0') && (plVar18 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if ((char)local_e8 == '\0') {
          if (plVar18 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if (local_70 == (longlong *)0x0) goto LAB_016e05c1;
          local_70 = plVar18;
          FUN_00d50b20();
        }
        else if (local_70 == (longlong *)0x0) {
LAB_016e05c1:
          local_70 = plVar18;
        }
        else {
          FUN_00d50b20();
          local_70 = plVar18;
        }
        FUN_00d23310();
        local_e8 = (longlong *)CONCAT71(local_e8._1_7_,local_38[0]);
        pplVar15 = pplVar27;
        if (local_38[0] == '\0') {
          pplVar15 = &local_e8;
        }
        *(char *)pplVar15 = '\0';
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_68 == local_40) {
          if (((char)local_e8 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if ((char)local_e8 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if (local_68 == (longlong *)0x0) goto LAB_016e0659;
          local_68 = local_40;
          FUN_00d50b20();
        }
        else if (local_68 == (longlong *)0x0) {
LAB_016e0659:
          local_68 = local_40;
        }
        else {
          FUN_00d50b20();
          local_68 = local_40;
        }
        local_60 = -1;
      }
      pVar12 = (pthread_key_t)uVar30;
      plVar18 = *(longlong **)local_f0[2];
      if (plVar18 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      local_40 = plVar18;
      cVar9 = FUN_00d24090();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_108 = CONCAT71(local_108._1_7_,1);
      if (cVar9 == '\0') {
        FUN_00d23340();
        plVar17 = local_40;
        if (local_38[0] == '\0') {
          pplVar27 = &local_e8;
        }
        local_e8 = (longlong *)CONCAT71(local_e8._1_7_,local_38[0]);
        *(char *)pplVar27 = '\0';
        if ((local_38[0] != '\0') && (plVar17 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)local_e8 == '\0') {
          if (plVar17 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_e8 = (longlong *)((ulonglong)local_e8 & 0xffffffffffffff00);
        }
        local_38[0] = '\0';
        local_40 = plVar17;
        uVar10 = FUN_00d24090();
        local_108 = CONCAT71(local_108._1_7_,uVar10);
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        bVar33 = (int)local_158 == 9;
        if (plVar17 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        local_108 = CONCAT71(local_108._1_7_,(byte)local_108 | bVar33);
      }
      if (plVar18 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      uVar32 = (uint)local_158;
      pVar2 = (pthread_key_t)local_68;
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
        local_190 = (ulonglong)uVar25;
        if (uVar32 == 6) {
          local_190 = 1;
        }
        if (uVar32 - 3 < 2) {
          local_190 = 1;
        }
        local_13c = (uint)(uVar32 == 2 || bVar33);
        bVar33 = true;
        local_100 = DAT_023b2c70;
      }
      else {
        if (uVar32 - 0xb < 0xb) {
          pVar12 = 0x2411a20;
          uVar31 = (uint)CONCAT71((int7)((ulonglong)plVar18 >> 8),
                                  (&DAT_02411a20)[(int)(uVar32 - 0xb)]);
          uVar25 = uVar31;
          pVar23 = 0x2411a20;
          if (uVar32 == 0x14) goto LAB_016e0866;
LAB_016e0835:
          pVar12 = pVar23;
          uVar31 = uVar25;
          local_100 = DAT_023b2c70;
          if ((*(char *)(unaff_RDI + 0x80) != '\0') && (uVar32 == 0x15)) goto LAB_016e0866;
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
          local_118 = (longlong *)FUN_01907950();
          pvVar14 = _pthread_getspecific(pVar12);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar29 = (double)FUN_01907950();
          dVar29 = (double)((ulonglong)((double)local_118 - dVar29) & _DAT_023908f0);
          dVar29 = dVar29 / (dVar29 + (double)local_160);
          if (dVar29 < DAT_0238fee8) {
            dVar29 = DAT_0238fee8 / dVar29;
          }
          local_100 = DAT_023b2c70;
          if ((DAT_024119c0 <= dVar29) && (local_100 = 0.0, dVar29 <= DAT_023942c0)) {
            local_100 = (DAT_023942c0 - dVar29) / _DAT_024119c8;
            local_100 = local_100 * local_100;
            local_100 = local_100 + local_100;
          }
        }
        if ((int)local_158 == 0x15) {
          bVar33 = *(char *)(unaff_RDI + 0x80) == '\0';
          local_13c = (uint)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),!bVar33);
        }
        else {
          bVar33 = true;
          local_13c = 0;
        }
        local_190 = 0;
      }
      FUN_016d53b0();
      local_1f0 = local_40;
      if ((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      local_170 = (double)CONCAT44(local_170._4_4_,uVar31);
      local_d1 = bVar33;
      plVar17 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar17 = (longlong)&DAT_02572358;
      uVar34 = (*DAT_02572370)();
      plVar18 = local_f0 + 2;
      local_118 = plVar18;
      local_a0 = plVar17;
      if (0 < *(int *)((longlong)local_f0 + 0xc)) {
        lVar16 = 0;
        pplVar27 = &local_40;
        do {
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_019079b0();
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01907950();
          FUN_01907b60();
          plVar17 = local_e8;
          if (local_e0 == '\0') {
            if (local_e8 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_e0 = '\0';
          }
          local_40 = plVar17;
          local_38[0] = '\0';
          uVar34 = FUN_00d21140();
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            uVar34 = FUN_00d50b20();
          }
          if (plVar17 != (longlong *)0x0) {
            uVar34 = FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
            uVar34 = FUN_00d50b20();
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < *(int *)((longlong)local_f0 + 0xc));
      }
      local_2e0 = local_70;
      local_2d8 = 0;
      FUN_016e5180(uVar34,&local_2e0);
      local_168 = local_40;
      if ((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      uVar32 = -(uint)((double)local_160 == 0.0) & 1;
      uVar30 = (ulonglong)uVar32;
      local_e8 = *(longlong **)(unaff_RDI + 0x68);
      if (param_3 == 1) {
        pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_280 = local_68;
        local_278 = '\0';
        plVar18 = (longlong *)0x0;
        FUN_01900ec0(0,&local_280);
        plVar17 = local_40;
        if (local_38[0] == '\0') {
          if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
             (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38[0] = '\0';
        }
        if ((local_278 != '\0') && (local_280 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((plVar17 == (longlong *)0x0) || (*(longlong **)(unaff_RDI + 0x78) == (longlong *)0x0))
           || (pplVar27 = (longlong **)CONCAT71((int7)((ulonglong)pplVar27 >> 8),1),
              *(longlong **)(unaff_RDI + 0x78) != plVar17)) {
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01901340();
          pplVar27 = (longlong **)
                     CONCAT71((int7)((ulonglong)pplVar27 >> 8),(longlong *)*local_c0 == local_40);
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (local_168 == (longlong *)0x0 || (char)uVar32 != '\0') {
          uVar19 = 0;
          local_148 = 0;
          local_f8 = (longlong *)0x0;
        }
        else {
          plVar18 = (longlong *)0x0;
          local_f8 = (longlong *)0x0;
          uVar19 = 0;
          if (*(longlong **)(unaff_RDI + 0x78) == (longlong *)0x0) {
            local_148 = 0;
          }
          else {
            plVar18 = (longlong *)0x0;
            local_148 = 0;
            if (*(longlong **)(unaff_RDI + 0x78) == local_168) {
              lVar16 = *(longlong *)(unaff_RDI + 0x50);
              pvVar14 = _pthread_getspecific(0);
              if (pvVar14 != (void *)0x0) {
                lVar16 = *(longlong *)(unaff_RDI + 0x50);
                lVar22 = FUN_00e8b990();
                if (lVar22 != 0) {
                  lVar16 = *(longlong *)
                            (lVar16 + 0x20 + (ulonglong)(*(uint *)(lVar22 + 0x154) & 1) * 8);
                }
              }
              local_270 = local_168;
              local_268 = '\0';
              FUN_01900ad0(0,&local_270);
              local_f8 = local_40;
              plVar18 = local_40;
              if (local_40 == (longlong *)0x0) {
                local_f8 = (longlong *)0x0;
                local_148 = 0;
              }
              else if (local_38[0] == '\0') {
                uVar19 = FUN_00d50b00();
                local_148 = CONCAT71((int7)((ulonglong)uVar19 >> 8),1);
                if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_38[0] = '\0';
                local_148 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
              }
              if ((local_268 != '\0') && (local_270 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              uVar19 = CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
            }
          }
        }
        if (plVar17 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        local_148 = 0;
        local_f8 = (longlong *)0x0;
        uVar19 = 0;
        pplVar27 = (longlong **)0x0;
      }
      local_40 = local_70;
      local_38[0] = '\0';
      local_150 = (longlong *)FUN_00d237a0();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_40 = local_68;
      local_38[0] = '\0';
      local_130 = (longlong *)FUN_00d237a0();
      local_2b8 = pplVar27;
      local_2b0 = uVar19;
      local_2a8 = uVar30;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_40 = (longlong *)*local_c0;
      local_38[0] = '\0';
      pVar12 = FUN_00d237a0();
      dVar29 = local_170;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_2a0 = (longlong)*(int *)((longlong)local_f0 + 0xc);
      pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
      if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
        plVar18 = local_68;
      }
      local_120 = (longlong *)FUN_01907950();
      pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
      if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
        plVar18 = local_70;
      }
      dVar35 = (double)FUN_01907950();
      pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
      if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
        plVar18 = local_70;
      }
      local_c8 = (double)FUN_01907950();
      pVar23 = (pthread_key_t)plVar18;
      iVar26 = (int)local_130;
      local_b0 = (double)CONCAT44(local_b0._4_4_,iVar26);
      local_138 = (double)local_60;
      local_120 = (longlong *)(((double)local_120 - dVar35) * local_138);
      if (((((ulonglong)dVar29 & 1) == 0) || ((double)local_160 != 0.0)) || (NAN((double)local_160))
         ) {
        local_b8 = (double)CONCAT44(local_b8._4_4_,
                                    (int)CONCAT71((int7)((ulonglong)local_130 >> 8),1));
        plVar17 = local_160;
        if (((double)local_160 != 0.0) || (plVar17 = local_160, NAN((double)local_160)))
        goto joined_r0x016e2b01;
        local_b8 = (double)((ulonglong)local_b8._4_4_ << 0x20);
        iVar24 = 0;
        if (iVar26 < *(int *)((longlong)local_f0 + 0xc) + -1) {
          iVar24 = local_60;
        }
        local_b0 = (double)CONCAT44(local_b0._4_4_,iVar24 + iVar26);
        local_48 = local_160;
        plVar18 = local_130;
        if (((ulonglong)dVar29 & 1) == 0) goto LAB_016e1345;
LAB_016e1f41:
        local_50 = local_a0 + 2;
        if (1 < *(int *)((longlong)local_d0 + 0xc)) {
          dVar29 = ((double)local_48 * local_138 + (double)local_120) / (double)local_120;
          lVar16 = 1;
          do {
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_b8 = (double)FUN_01907950();
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar35 = (double)FUN_01907950();
            dVar5 = (double)_pow(SUB84((double)(int)lVar16 /
                                       (double)(*(int *)((longlong)local_d0 + 0xc) + -1),0),
                                 SUB84(local_100,0));
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01907cc0(SUB84((((local_b8 - local_c8) * dVar29 + local_c8) - dVar35) * dVar5 +
                               dVar35,0));
            lVar16 = lVar16 + 1;
          } while (lVar16 < *(int *)((longlong)local_d0 + 0xc));
        }
      }
      else {
        pvVar14 = _pthread_getspecific(pVar23);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar23 = pVar2;
        }
        plVar18 = (longlong *)FUN_019079b0();
        pvVar14 = _pthread_getspecific(pVar23);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_a8 = (longlong *)FUN_019079b0();
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
        local_188 = (longlong *)FUN_01907950();
        local_178 = local_178 * DAT_023b4df8;
        local_78 = (longlong *)(local_178 / (dVar29 - dVar35));
        local_1a0 = (double)local_78 * local_1e8;
        local_198 = (longlong *)
                    (*(double *)(&DAT_02411870 + (ulonglong)(local_1a0 < (double)local_78) * 8) *
                    local_138);
        uVar32 = *(int *)((longlong)local_d0 + 0xc) - 2;
        plVar18 = (longlong *)(ulonglong)uVar32;
        local_180 = (double)_pow(SUB84((double)(int)uVar32 /
                                       (double)(*(int *)((longlong)local_d0 + 0xc) + -1),0),
                                 SUB84(local_100,0));
        iVar26 = 0x65;
        local_90 = local_198;
        local_48 = local_198;
        while( true ) {
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar29 = (double)FUN_01907950();
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
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
          local_b8 = (double)CONCAT44(local_b8._4_4_,(int)CONCAT71((int7)((ulonglong)uVar19 >> 8),1)
                                     );
          dVar29 = local_170;
          if ((DAT_023b36d0 < dVar35 / local_1a0) &&
             (plVar17 = local_48, dVar35 / local_1a0 < DAT_023b36d8)) break;
          if (((local_1a0 < (double)local_78) && (dVar35 < local_1a0)) ||
             (((double)local_78 < local_1a0 && (local_1a0 < dVar35)))) {
            local_90 = (longlong *)((double)local_90 * DAT_02394dd0);
          }
          plVar17 = local_198;
          if (iVar26 == 0) break;
          iVar26 = iVar26 + -1;
          local_48 = (longlong *)((double)local_48 + (double)local_90);
          local_78 = (longlong *)dVar35;
        }
joined_r0x016e2b01:
        local_48 = plVar17;
        if (((ulonglong)dVar29 & 1) != 0) goto LAB_016e1f41;
LAB_016e1345:
        local_120 = (longlong *)(longlong)(int)pVar12;
        pvVar14 = _pthread_getspecific(pVar12);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        plVar18 = (longlong *)FUN_019079b0();
        lVar16 = (longlong)(int)(pthread_key_t)local_150;
        pvVar14 = _pthread_getspecific((pthread_key_t)local_150);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_a8 = (longlong *)FUN_019079b0();
        local_40 = plVar18;
        FUN_00e7b970();
        FUN_00e7b820();
        local_c8 = (double)FUN_00e7c860();
        pvVar14 = _pthread_getspecific((pthread_key_t)*local_118);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        plVar17 = (longlong *)FUN_019079b0();
        plVar18 = local_120;
        pvVar14 = _pthread_getspecific((pthread_key_t)local_120);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_a8 = (longlong *)FUN_019079b0();
        local_40 = plVar17;
        FUN_00e7b970();
        FUN_00e7b820();
        dVar29 = (double)FUN_00e7c860();
        local_180 = (double)FUN_00e7c860();
        local_170 = (double)FUN_00e7c860();
        local_198 = (longlong *)FUN_00e84280();
        iVar26 = FUN_00e84a40();
        local_1a0 = (double)CONCAT44(local_1a0._4_4_,iVar26);
        local_128 = (longlong *)CONCAT44(local_128._4_4_,0xffffffff);
        local_50 = local_a0 + 2;
        if (0 < *(int *)((longlong)local_d0 + 0xc)) {
          local_180 = local_180 * DAT_023b3bc0;
          local_170 = local_170 * DAT_023b3bc0;
          local_2a0 = local_2a0 + -1;
          if (local_180 <= local_c8) {
            local_180 = local_c8;
          }
          if (local_170 <= dVar29) {
            local_170 = dVar29;
          }
          local_138 = (double)iVar26 * DAT_023942d0;
          lVar22 = lVar16 * 8;
          lVar28 = 0;
          do {
            lVar3 = *(longlong *)(*local_118 + lVar22 + lVar28 * 8);
            if (lVar3 != 0) {
              FUN_00d50b00();
            }
            lVar1 = lVar16 + lVar28;
            dVar29 = DAT_0238fee8;
            if ((byte)local_108 == '\0') {
              if (lVar1 < (longlong)local_120) {
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                plVar17 = (longlong *)FUN_019079b0();
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_a8 = (longlong *)FUN_019079b0();
                local_40 = plVar17;
                FUN_00e7b970();
                dVar29 = (double)FUN_00e7c860();
                dVar29 = dVar29 / local_180;
              }
              else {
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                plVar17 = (longlong *)FUN_019079b0();
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_a8 = (longlong *)FUN_019079b0();
                local_40 = plVar17;
                FUN_00e7b970();
                dVar29 = (double)FUN_00e7c860();
                dVar29 = dVar29 / local_170;
              }
              uVar32 = (uint)((DAT_0238fee8 - dVar29) * local_138);
              dVar29 = DAT_0238fee8;
              if ((-1 < (int)uVar32) && ((int)uVar32 < local_1a0._0_4_)) {
                dVar29 = (double)*(float *)((longlong)local_198 + (ulonglong)uVar32 * 4);
                plVar18 = local_198;
              }
            }
            local_c8 = dVar29;
            if ((char)local_b8 == '\0') {
              if (lVar1 < local_2a0) {
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_258 = '\0';
                local_260 = lVar3;
                local_100 = (double)FUN_018fde50();
                if ((local_258 != '\0') && (local_260 != 0)) {
                  FUN_00d50b20();
                }
                lVar1 = *(longlong *)(*local_118 + lVar22 + 8 + lVar28 * 8);
                if (lVar1 != 0) {
                  FUN_00d50b00();
                }
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                plVar17 = (longlong *)FUN_019079b0();
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_a8 = (longlong *)FUN_019079b0();
                local_40 = plVar17;
                FUN_00e7b970();
                local_178 = (double)FUN_00e7c860();
                local_c8 = (double)_pow(local_1e8._0_4_,SUB84(local_c8,0));
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_188 = (longlong *)FUN_01907950();
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01907cc0(SUB84((DAT_023b4df8 / (local_c8 * local_100)) * local_178 +
                                   (double)local_188,0));
                if (lVar1 != 0) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
              if (pvVar14 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
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
          } while (lVar28 < *(int *)((longlong)local_d0 + 0xc));
        }
      }
      pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_120 = (longlong *)FUN_01907950();
      plVar18 = (longlong *)CONCAT71((int7)((ulonglong)plVar18 >> 8),local_d4 | local_d3);
      bVar11 = uVar13 == 0xb | local_d2 | local_d4 | local_d3;
      pVar12 = (pthread_key_t)plVar18;
      iVar26 = local_b0._0_4_;
      if ((char)local_13c == '\0') {
        if ((local_190 & 1) != 0) {
          iVar24 = -1;
          if (bVar11 == 0) {
            iVar24 = *(int *)((longlong)local_a0 + 0xc);
          }
          pvVar14 = _pthread_getspecific(pVar12);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar29 = (double)FUN_01907950();
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar35 = (double)FUN_01907950();
          iVar26 = iVar26 - iVar24;
          while (iVar26 = iVar26 + local_60, iVar26 != 0) {
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar5 = (double)FUN_01907950();
            FUN_01907cc0(SUB84(dVar5 + (dVar29 - dVar35),0));
          }
        }
      }
      else {
        lVar16 = (longlong)local_b0._0_4_;
        pvVar14 = _pthread_getspecific(pVar12);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_c0 = (longlong *)FUN_01907950();
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
        plVar18 = (longlong *)0x0;
        if (bVar11 == 0) {
          plVar18 = (longlong *)(ulonglong)(*(int *)((longlong)local_a0 + 0xc) - 1);
        }
        iVar26 = local_b0._0_4_ - (int)plVar18;
        local_b0 = (double)CONCAT44(local_b0._4_4_,iVar26);
        if (iVar26 != 0) {
          local_c0 = (longlong *)(((double)local_c0 - dVar29) / (local_b8 - dVar35));
          local_108 = (longlong)local_60;
          lVar22 = local_108 * 8;
          do {
            lVar28 = *local_118;
            lVar3 = *(longlong *)(lVar28 + lVar16 * 8);
            if (lVar3 != 0) {
              FUN_00d50b00();
              lVar28 = *local_118;
            }
            plVar18 = (longlong *)(lVar28 + lVar22);
            lVar28 = plVar18[lVar16];
            if (lVar28 != 0) {
              FUN_00d50b00();
            }
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            plVar17 = (longlong *)FUN_019079b0();
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_a8 = (longlong *)FUN_019079b0();
            local_40 = plVar17;
            FUN_00e7b970();
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_b8 = (double)FUN_01907950();
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_c8 = (double)FUN_01907950();
            dVar29 = (double)FUN_00e7c860();
            dVar35 = (double)FUN_00e7c860();
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar5 = (double)FUN_01907950();
            FUN_01907cc0(SUB84((DAT_023b4df8 /
                               ((DAT_023b4df8 / (local_b8 - local_c8)) * dVar29 * (double)local_c0))
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
        pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar29 = (double)FUN_01907950();
        if (0 < *(int *)((longlong)local_a0 + 0xc)) {
          dVar29 = dVar29 - (double)local_120;
          lVar16 = 0;
          do {
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar35 = (double)FUN_01907950();
            FUN_01907cc0(SUB84(dVar35 - dVar29,0));
            lVar16 = lVar16 + 1;
          } while (lVar16 < *(int *)((longlong)local_a0 + 0xc));
        }
      }
      dVar29 = (double)FUN_016cd860();
      bVar33 = true;
      bVar8 = true;
      if (1 < *(int *)((longlong)local_a0 + 0xc)) {
        iVar26 = (int)local_130;
        iVar24 = (int)local_150;
        dVar35 = DAT_024119d0;
        if (dVar29 * _DAT_023b1e98 <= DAT_024119d0) {
          dVar35 = dVar29 * _DAT_023b1e98;
        }
        lVar16 = 1;
        bVar7 = true;
        bVar6 = true;
        do {
          lVar22 = *local_50;
          lVar28 = *(longlong *)(lVar22 + lVar16 * 8);
          local_1c0 = 0;
          if (lVar28 != 0) {
            FUN_00d50b00();
            lVar22 = *local_50;
          }
          local_1c0 = '\x01';
          lVar3 = *(longlong *)(lVar22 + -8 + lVar16 * 8);
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
          plVar18 = (longlong *)
                    CONCAT71((int7)((ulonglong)lVar22 >> 8),dVar29 < DAT_023908b8 || dVar35 < dVar29
                            );
          bVar33 = false;
          bVar8 = bVar6;
          if ((iVar26 + iVar24) / 2 < lVar16) {
            bVar8 = false;
            bVar33 = bVar7;
          }
          if (dVar29 >= DAT_023908b8 && dVar29 <= dVar35) {
            bVar33 = bVar7;
            bVar8 = bVar6;
          }
          lVar16 = lVar16 + 1;
          bVar7 = bVar33;
          bVar6 = bVar8;
        } while (lVar16 < *(int *)((longlong)local_a0 + 0xc));
      }
      if ((char)local_2b8 == '\0') {
        bVar7 = false;
LAB_016e3608:
        lVar16 = FUN_00e7bcc0();
        pVar12 = (pthread_key_t)plVar18;
        if ((char)local_2b0 != '\0') {
          dVar29 = (double)(longlong)((int)local_150 + -1);
          plVar17 = *(longlong **)(*local_50 + (longlong)dVar29 * 8);
          if (plVar17 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          pvVar14 = _pthread_getspecific(pVar12);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_210 = local_f8;
          local_208 = '\0';
          local_b0 = (double)FUN_018fde50();
          if ((local_208 != '\0') && (local_210 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_b8 = (double)FUN_00e7c860();
          plVar18 = (longlong *)*local_50;
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar35 = (double)FUN_01907950();
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
          if ((pvVar14 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
            plVar18 = plVar17;
          }
          dVar5 = (double)FUN_01907950();
          pVar12 = (pthread_key_t)plVar18;
          local_b0 = (DAT_023b4df8 / local_b0) * local_b8;
          dVar35 = dVar35 + DAT_02394dd0 * local_b0;
          if (dVar35 <= dVar5) {
            pvVar14 = _pthread_getspecific(pVar12);
            if ((pvVar14 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
              pVar12 = (pthread_key_t)plVar17;
            }
            pvVar14 = _pthread_getspecific(pVar12);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar5 = (double)FUN_01907950();
            FUN_01907cc0(SUB84(dVar5 - local_b0,0));
            plVar18 = local_150;
            local_b8 = dVar29;
            if ((int)local_150 <= *(int *)((longlong)local_a0 + 0xc)) {
              do {
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_40 = (longlong *)FUN_019079b0();
                FUN_00e7b970();
                FUN_01907c60();
                dVar29 = (double)((longlong)dVar29 + 1);
              } while ((longlong)dVar29 < (longlong)*(int *)((longlong)local_a0 + 0xc));
            }
            FUN_00e7b970();
            dVar29 = local_b8;
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_a8 = (longlong *)FUN_019079b0();
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if ((pvVar14 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
              plVar18 = local_f8;
            }
            local_40 = (longlong *)FUN_019079b0();
            FUN_00e7b820();
            local_128 = local_40;
            if ((local_a8._4_4_ == 0) || ((ulonglong)local_40 >> 0x20 == 0)) {
              bVar7 = true;
            }
            else {
              cVar9 = FUN_00e7c020();
              plVar18 = (longlong *)
                        CONCAT71((int7)((ulonglong)plVar18 >> 8),local_168 == (longlong *)0x0);
              bVar7 = true;
              if (((cVar9 == '\0' && local_168 != (longlong *)0x0) &&
                  (*(longlong **)(unaff_RDI + 0x78) != (longlong *)0x0)) &&
                 (*(longlong **)(unaff_RDI + 0x78) == local_168)) {
                FUN_00d64850();
                if (*(longlong *)(unaff_RDI + 0x78) != 0) {
                  *(longlong *)(unaff_RDI + 0x78) = 0;
                  FUN_00d50b20();
                }
                FUN_00d64910();
              }
            }
          }
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
          if ((pvVar14 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
            plVar18 = plVar17;
          }
          dVar5 = (double)FUN_01907950();
          if (dVar5 + local_b0 < dVar35) {
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if ((pvVar14 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
              plVar18 = plVar17;
            }
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar35 = (double)FUN_01907950();
            FUN_01907cc0(SUB84(local_b0 + dVar35,0));
            plVar18 = local_150;
            if ((int)local_150 <= *(int *)((longlong)local_a0 + 0xc)) {
              do {
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_40 = (longlong *)FUN_019079b0();
                FUN_00e7b820();
                FUN_01907c60();
                dVar29 = (double)((longlong)dVar29 + 1);
              } while ((longlong)dVar29 < (longlong)*(int *)((longlong)local_a0 + 0xc));
            }
            bVar7 = true;
            FUN_00e7b820();
          }
          if (plVar17 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        if (1 < *(int *)((longlong)local_a0 + 0xc)) {
          lVar22 = 1;
          do {
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar29 = (double)FUN_01907950();
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar35 = (double)FUN_01907950();
            if (dVar29 <= dVar35) goto LAB_016e3f6a;
            lVar22 = lVar22 + 1;
          } while (lVar22 < *(int *)((longlong)local_a0 + 0xc));
        }
        uVar30 = 0;
        if ((bVar33) && (bVar8)) {
          if ((int)local_158 == 0xc) {
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01907950();
            FUN_01907cc0();
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01907950();
            FUN_01907cc0();
          }
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_200 = local_a0;
          local_1f8 = '\0';
          uVar34 = FUN_01903d50();
          plVar17 = local_1f0;
          if ((local_1f8 != '\0') && (local_200 != (longlong *)0x0)) {
            uVar34 = FUN_00d50b20();
          }
          if (bVar7) {
            local_2d0 = plVar17;
            local_2c8 = 0;
            FUN_016d6df0(uVar34,1);
            if (local_298 != (longlong *)0x0) {
              *local_298 = lVar16;
              plVar18 = local_298;
            }
          }
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar30 = CONCAT71((int7)((ulonglong)plVar17 >> 8),1);
          FUN_018f9310();
        }
      }
      else {
        pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
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
          if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
             (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38[0] = '\0';
        }
        if ((local_248 != '\0') && (local_250 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar17 == (longlong *)0x0) {
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
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
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
        local_188 = (longlong *)(longlong)(int)local_130;
        lVar16 = *local_50;
        plVar4 = *(longlong **)(lVar16 + (longlong)local_188 * 8);
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b00();
          lVar16 = *local_50;
        }
        iVar26 = (int)local_130 + 1;
        local_178 = (double)CONCAT44(local_178._4_4_,iVar26);
        local_120 = (longlong *)(longlong)iVar26;
        lVar16 = *(longlong *)(lVar16 + (longlong)local_120 * 8);
        if (lVar16 != 0) {
          FUN_00d50b00();
        }
        local_108 = lVar16;
        if (((int)local_130 < 1) ||
           (local_c0 = *(longlong **)(*local_50 + (ulonglong)((int)local_130 - 1) * 8),
           local_c0 == (longlong *)0x0)) {
          local_c0 = (longlong *)0x0;
          local_100 = (double)CONCAT44(local_100._4_4_,1);
        }
        else {
          FUN_00d50b00();
          local_100 = (double)((ulonglong)local_100 & 0xffffffff00000000);
        }
        uVar13 = (int)local_130 + 2;
        uVar20 = (ulonglong)uVar13;
        plVar18 = local_a0;
        if ((int)uVar13 < *(int *)((longlong)local_a0 + 0xc)) {
          uVar20 = (ulonglong)(int)uVar13;
          plVar18 = (longlong *)*local_50;
          local_78 = (longlong *)plVar18[uVar20];
          if (local_78 == (longlong *)0x0) goto LAB_016e2c14;
          FUN_00d50b00();
          local_138 = (double)((ulonglong)local_138 & 0xffffffff00000000);
        }
        else {
LAB_016e2c14:
          local_138 = (double)CONCAT44(local_138._4_4_,(int)CONCAT71((int7)(uVar20 >> 8),1));
          local_78 = (longlong *)0x0;
        }
        pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_240 = local_68;
        local_238 = '\0';
        local_48 = (longlong *)FUN_018fde50();
        if ((local_238 != '\0') && (local_240 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_c0 != (longlong *)0x0 && (char)uVar30 == '\0') {
          local_230 = local_c0;
          local_228 = '\0';
          local_218 = '\0';
          local_220 = plVar4;
          local_48 = (longlong *)FUN_019079d0();
          if ((local_218 != '\0') && (local_220 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_228 != '\0') && (local_230 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_c8 = (double)FUN_00e7c860();
        local_b8 = DAT_023b4df8 /
                   ((double)(~-(ulonglong)((double)local_160 != 0.0) & (ulonglong)local_1e8 |
                            (ulonglong)DAT_0238fee8 & -(ulonglong)((double)local_160 != 0.0)) *
                   (double)local_48);
        local_c8 = local_c8 * local_b8;
        dVar29 = DAT_023b2568;
        if (local_78 != (longlong *)0x0) {
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar18 = local_78;
          }
          dVar29 = (double)FUN_01907950();
          dVar29 = dVar29 + DAT_02394dd0 * local_c8;
        }
        local_b0 = dVar29;
        pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        plVar21 = (longlong *)FUN_019079b0();
        pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          plVar18 = plVar4;
        }
        local_128 = (longlong *)FUN_019079b0();
        local_40 = plVar21;
        FUN_00e7b970();
        local_a8 = local_40;
        dVar29 = (double)FUN_00e7c860();
        pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          plVar18 = plVar4;
        }
        local_1e8 = (double)FUN_01907950();
        local_128 = (longlong *)FUN_00e7bdb0();
        dVar29 = dVar29 * local_b8 + local_1e8;
        if ((local_78 != (longlong *)0x0) && (local_b0 <= dVar29)) {
          do {
            FUN_00e7b970();
            FUN_00e7b970();
            dVar35 = (double)FUN_00e7c860();
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              plVar18 = plVar4;
            }
            dVar29 = (double)FUN_01907950();
            dVar29 = dVar35 * local_b8 + dVar29;
          } while (local_b0 <= dVar29);
        }
        if ((local_78 != (longlong *)0x0) && (local_c8 + dVar29 < local_b0)) {
          do {
            FUN_00e7b820();
            FUN_00e7b820();
            dVar35 = (double)FUN_00e7c860();
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
            if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              plVar18 = plVar4;
            }
            dVar29 = (double)FUN_01907950();
            dVar29 = dVar35 * local_b8 + dVar29;
          } while (local_c8 + dVar29 < local_b0);
        }
        local_48._0_4_ = SUB84(dVar29,0);
        if ((((double)local_160 == 0.0) && (!NAN((double)local_160))) &&
           (local_78 != (longlong *)0x0)) {
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar18 = local_78;
          }
          dVar29 = (double)FUN_01907950();
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar18 = plVar4;
          }
          local_b0 = (double)FUN_01907950();
          local_40 = local_a8;
          FUN_00e7b820();
          local_1a8 = local_40;
          local_b8 = (double)FUN_00e7c860();
          local_c8 = (double)FUN_00e7c860();
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar18 = plVar4;
          }
          dVar35 = (double)FUN_01907950();
          local_48._0_4_ = SUB84(((dVar29 - local_b0) / local_b8) * local_c8 + dVar35,0);
        }
        local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff00000000);
        if ((local_128._4_4_ == 0) || (cVar9 = FUN_00e7c630(), cVar9 == '\0')) {
          uVar30 = (ulonglong)local_178 & 0xffffffff;
          plVar18 = local_120;
          if (local_178._0_4_ < *(int *)((longlong)local_a0 + 0xc)) {
            do {
              pvVar14 = _pthread_getspecific((pthread_key_t)uVar30);
              if (pvVar14 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar14 = _pthread_getspecific((pthread_key_t)uVar30);
              if (pvVar14 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_40 = (longlong *)FUN_019079b0();
              FUN_00e7b820();
              FUN_01907c60();
              plVar18 = (longlong *)((longlong)plVar18 + 1);
            } while ((longlong)plVar18 < (longlong)*(int *)((longlong)local_a0 + 0xc));
          }
          pvVar14 = _pthread_getspecific((pthread_key_t)local_120);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_1a8 = (longlong *)FUN_019079b0();
          plVar18 = local_188;
          pvVar14 = _pthread_getspecific((pthread_key_t)local_188);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_40 = (longlong *)FUN_019079b0();
          FUN_00e7b820();
          local_2c0 = local_40;
          if (((local_1a8._4_4_ == 0) || ((ulonglong)local_40 >> 0x20 == 0)) ||
             (cVar9 = FUN_00e7c020(), cVar9 != '\0')) {
            bVar7 = true;
            if (local_res8 != (undefined8 *)0x0) {
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
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar18);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          bVar6 = true;
          FUN_01907cc0(local_48._0_4_);
          bVar8 = true;
        }
        if (SUB81(local_138,0) == '\0' && local_78 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        bVar11 = SUB81(local_100,0) | local_c0 == (longlong *)0x0;
        plVar18 = (longlong *)(ulonglong)CONCAT31((int3)((ulonglong)local_100 >> 8),bVar11);
        if (bVar11 == 0) {
          FUN_00d50b20();
        }
        if (local_108 != 0) {
          FUN_00d50b20();
        }
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (plVar17 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (bVar6) goto LAB_016e3608;
LAB_016e3f6a:
        uVar30 = 0;
      }
      if (((char)local_148 != '\0') && (local_f8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_168 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_a0 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_1f0 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_d0 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_f0 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_016e0204;
    }
  }
  uVar30 = 0;
LAB_016e0204:
  return uVar30 & 0xffffffff;
}


