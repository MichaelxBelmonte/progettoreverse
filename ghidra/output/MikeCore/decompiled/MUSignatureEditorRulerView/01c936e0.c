// Function: FUN_01c936e0
// Address: 01c936e0
// Size: 5039 bytes
// Class: MUSignatureEditorRulerView


ulonglong FUN_01c936e0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  void *pvVar6;
  longlong lVar7;
  longlong **pplVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char *pcVar11;
  pthread_key_t pVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong **pplVar15;
  ulonglong uVar16;
  int iVar17;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar18;
  int iStack_294;
  longlong local_290;
  char local_288;
  longlong local_280;
  char local_278;
  longlong local_270;
  char local_268;
  longlong local_260;
  char local_258;
  longlong local_250;
  char local_248;
  longlong local_240;
  char local_238;
  longlong local_230;
  char local_228;
  longlong local_220;
  char local_218;
  longlong local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong *local_1e0;
  char local_1d8;
  longlong *local_1d0;
  char local_1c8;
  undefined8 *local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  undefined8 *local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  undefined8 *local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  longlong *local_88;
  char local_80;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58 [8];
  undefined8 *local_50;
  undefined8 local_48;
  int local_40;
  char local_38 [8];
  
  local_290 = *unaff_RSI;
  if (local_290 == 0) {
    uVar16 = 0;
    goto LAB_01c94a97;
  }
  local_288 = '\0';
  FUN_01c957d0(param_1,&local_290);
  plVar3 = local_60;
  lVar7 = *unaff_RSI;
  if ((longlong *)lVar7 == local_60) {
    if (((char)unaff_RSI[1] == '\0') && (local_60 != (longlong *)0x0)) {
      if (local_58[0] == '\0') {
        FUN_00d50b00();
      }
      goto LAB_01c937c3;
    }
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar14 = unaff_RSI[1];
    if (local_58[0] == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)plVar3;
      if (((char)lVar14 != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      *unaff_RSI = (longlong)local_60;
      if (((char)lVar14 != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_01c937c3:
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
  if ((local_288 != '\0') && (local_290 != 0)) {
    FUN_00d50b20();
  }
  plVar13 = (longlong *)*unaff_RSI;
  bVar18 = *(int *)((longlong)plVar13 + 0xc) == 0;
  uVar16 = CONCAT71((int7)((ulonglong)plVar3 >> 8),!bVar18);
  if ((bVar18) || ((char)param_1 == '\0')) goto LAB_01c94a97;
  local_278 = '\0';
  local_280 = (longlong)plVar13;
  FUN_01266770();
  plVar3 = local_60;
  if (local_58[0] == '\0') {
    if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
       (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58[0] = '\0';
  }
  if ((local_278 != '\0') && (local_280 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e7bcc0();
  iStack_294 = (int)((ulonglong)param_2 >> 0x20);
  if (iStack_294 != 0) {
    pvVar6 = _pthread_getspecific((pthread_key_t)plVar13);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      plVar13 = plVar3;
    }
    FUN_0125e930();
    plVar1 = local_60;
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      pvVar6 = _pthread_getspecific((pthread_key_t)plVar13);
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar13 = plVar3;
      }
      pVar12 = (pthread_key_t)plVar13;
      FUN_0125e930();
      pvVar6 = _pthread_getspecific(pVar12);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      pvVar6 = _pthread_getspecific(pVar12);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_88 = (longlong *)FUN_01507970();
      FUN_00e7b970();
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  local_270 = *unaff_RSI;
  local_268 = '\0';
  FUN_01273930();
  plVar13 = local_60;
  if (local_58[0] == '\0') {
    if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
       (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58[0] = '\0';
  }
  if ((local_268 != '\0') && (local_270 != 0)) {
    FUN_00d50b20();
  }
  FUN_01ca5d90();
  if (*(char *)((longlong)unaff_RDI + 0x2f) == '\0') {
    FUN_00d23310();
    plVar1 = local_60;
    pplVar15 = &local_70;
    if (local_58[0] != '\0') {
      pplVar15 = (longlong **)local_58;
    }
    local_70 = (longlong *)CONCAT71(local_70._1_7_,local_58[0]);
    *(char *)pplVar15 = '\0';
    if ((local_58[0] != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar7 = FUN_00cafdf0();
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    if (((char)local_70 != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00cb1f10();
      plVar1 = local_60;
      if (local_58[0] == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01c93b7f;
        }
      }
      else if (local_60 != (longlong *)0x0) {
LAB_01c93b7f:
        FUN_00d403d0();
        local_128 = 0;
        FUN_00d50b00();
        local_260 = DAT_026e0f70;
        local_128 = '\x01';
        local_130 = unaff_RDI;
        if (DAT_026e0f70 != 0) {
          FUN_00d50b00();
        }
        local_258 = '\x01';
        local_250 = (longlong)plVar1;
        local_248 = '\0';
        FUN_00d41430(&local_250,&local_260);
        if ((local_248 != '\0') && (local_250 != 0)) {
          FUN_00d50b20();
        }
        if ((local_258 != '\0') && (local_260 != 0)) {
          FUN_00d50b20();
        }
        if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        *(undefined1 *)((longlong)unaff_RDI + 0x2f) = 1;
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  local_60 = (longlong *)*unaff_RSI;
  local_58[0] = '\0';
  FUN_00d243f0();
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_118 = 0;
  lVar7 = unaff_RDI[7];
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  lVar14 = DAT_027ed420;
  local_118 = '\x01';
  local_120 = lVar7;
  if (DAT_027ed420 != 0) {
    FUN_00d50b00();
  }
  local_240 = lVar14;
  local_238 = '\x01';
  (**(code **)(*unaff_RDI + 0x370))();
  if ((local_238 != '\0') && (local_240 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  local_108 = 0;
  lVar7 = unaff_RDI[7];
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  lVar14 = DAT_027ed428;
  local_108 = '\x01';
  local_110 = lVar7;
  if (DAT_027ed428 != 0) {
    FUN_00d50b00();
  }
  local_230 = lVar14;
  local_228 = '\x01';
  (**(code **)(*unaff_RDI + 0x370))();
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  local_f8 = 0;
  (**(code **)(unaff_RDI[2] + 0x10))();
  FUN_00d50b00();
  local_220 = DAT_027ed418;
  local_f8 = '\x01';
  local_100 = unaff_RDI + 2;
  if (DAT_027ed418 != 0) {
    FUN_00d50b00();
  }
  local_218 = '\x01';
  FUN_01cacee0();
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
    (**(code **)(*local_100 + 0x10))();
    FUN_00d50b20();
  }
  FUN_01caddb0();
  local_f0 = local_60;
  local_e8 = 0;
  local_210 = DAT_027ed430;
  if (local_58[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      local_210 = DAT_027ed430;
    }
  }
  else {
    local_58[0] = '\0';
  }
  local_e8 = '\x01';
  DAT_027ed430 = local_210;
  if (local_210 != 0) {
    local_e8 = '\x01';
    FUN_00d50b00();
  }
  local_208 = '\x01';
  FUN_01ca93d0();
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c9fe20();
  plVar1 = local_60;
  pplVar15 = (longlong **)local_58;
  local_88 = (longlong *)CONCAT71(local_88._1_7_,local_58[0]);
  pplVar8 = &local_88;
  if (local_58[0] != '\0') {
    pplVar8 = pplVar15;
  }
  *(char *)pplVar8 = '\0';
  if ((local_58[0] != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pVar12 = (pthread_key_t)pplVar15;
  FUN_00d46530();
  local_e0 = local_70;
  local_d8 = 0;
  local_200 = DAT_027ed438;
  if (local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
      local_200 = DAT_027ed438;
    }
  }
  else {
    local_68 = '\0';
  }
  local_d8 = '\x01';
  DAT_027ed438 = local_200;
  if (local_200 != 0) {
    local_d8 = '\x01';
    FUN_00d50b00();
  }
  local_1f8 = '\x01';
  FUN_01ca93d0();
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_88 != '\0') {
    FUN_00d50b20();
  }
  FUN_00dd67f0();
  local_d0 = local_60;
  local_c8 = 0;
  local_1f0 = DAT_027ed440;
  if (local_58[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      local_1f0 = DAT_027ed440;
    }
  }
  else {
    local_58[0] = '\0';
  }
  local_c8 = '\x01';
  DAT_027ed440 = local_1f0;
  if (local_1f0 != 0) {
    local_c8 = '\x01';
    FUN_00d50b00();
  }
  local_1e8 = '\x01';
  FUN_01ca93d0();
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  local_a8 = puVar9;
  puVar10 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar10 = &DAT_02572358;
  (*pcVar2)();
  local_b0 = puVar10;
  if ((undefined8 *)*unaff_RSI != (undefined8 *)0x0) {
    local_58[0] = '\0';
    local_60 = (longlong *)0x0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    local_50 = (undefined8 *)*unaff_RSI;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar17 = -local_48._4_4_;
        }
        else {
          iVar17 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar17);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar17 = 0;
        }
        local_48 = CONCAT44(iVar17,(int)local_48);
      }
      lVar7 = (longlong)(int)local_48;
      iVar17 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar17);
      if (*(int *)((longlong)local_50 + 0xc) <= iVar17) break;
      lVar14 = local_50[2];
      local_60 = *(longlong **)(lVar14 + 8 + lVar7 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)lVar14);
      pVar12 = (pthread_key_t)lVar14;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar6 = _pthread_getspecific(pVar12);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f8400();
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_70 != (longlong *)0x0) {
        local_1e0 = local_70;
        local_1d8 = '\0';
        FUN_00d235a0();
        if ((local_1d8 != '\0') && (local_1e0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific(pVar12);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      plVar1 = local_70;
      if (local_68 == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01c943d0;
        }
      }
      else if (local_70 != (longlong *)0x0) {
LAB_01c943d0:
        local_1d0 = plVar1;
        local_1c8 = '\0';
        FUN_00d235a0();
        if ((local_1c8 != '\0') && (local_1d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    puVar9 = local_50;
    FUN_001159b0();
    pVar12 = (pthread_key_t)puVar9;
    puVar9 = local_a8;
  }
  puVar10 = local_b0;
  lVar7 = DAT_027ed448;
  if (*(int *)((longlong)puVar9 + 0xc) != 0) {
    local_1b8 = '\0';
    local_1c0 = puVar9;
    if (DAT_027ed448 != 0) {
      FUN_00d50b00();
    }
    local_1b0 = lVar7;
    local_1a8 = '\x01';
    FUN_01cac590();
    if ((local_1a8 != '\0') && (local_1b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1b8 != '\0') && (local_1c0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar7 = DAT_027ed450;
  if (*(int *)((longlong)puVar10 + 0xc) != 0) {
    local_198 = '\0';
    local_1a0 = puVar10;
    if (DAT_027ed450 != 0) {
      FUN_00d50b00();
    }
    local_190 = lVar7;
    local_188 = '\x01';
    FUN_01cac590();
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    puVar9 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar9 = &DAT_025683c0;
    (*DAT_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    local_58[0] = '\0';
    local_60 = (longlong *)0x0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    local_50 = puVar10;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar17 = -local_48._4_4_;
        }
        else {
          iVar17 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar17);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar17 = 0;
        }
        local_48 = CONCAT44(iVar17,(int)local_48);
      }
      lVar7 = (longlong)(int)local_48;
      iVar17 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar17);
      if (*(int *)((longlong)local_50 + 0xc) <= iVar17) break;
      plVar1 = *(longlong **)(local_50[2] + 8 + lVar7 * 8);
      local_70 = plVar1;
      local_60 = plVar1;
      FUN_002771e0();
      pplVar15 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar15 = &local_70;
        if (cVar4 == '\0') {
          pplVar15 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar15 != (longlong *)0x0) {
        pvVar6 = _pthread_getspecific((pthread_key_t)pplVar15);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar5 = FUN_013d8eb0();
        iVar17 = *(int *)(puVar9 + 3);
        FUN_00c8e340();
        *(undefined4 *)(puVar9[2] + (longlong)iVar17) = uVar5;
      }
    }
    puVar10 = local_50;
    FUN_01ca56a0();
    local_170 = DAT_027ed458;
    pVar12 = (pthread_key_t)puVar10;
    local_178 = '\0';
    local_180 = puVar9;
    if (DAT_027ed458 != 0) {
      FUN_00d50b00();
    }
    local_168 = '\x01';
    FUN_01ca93d0();
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar9 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d23310();
  plVar1 = local_60;
  local_38[0] = local_58[0];
  pcVar11 = local_58;
  if (local_58[0] == '\0') {
    pcVar11 = local_38;
  }
  *pcVar11 = '\0';
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar12);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  pvVar6 = _pthread_getspecific(pVar12);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f8680();
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar7 = DAT_027ed460;
  if (local_70 == (longlong *)0x0) {
    FUN_00d23310();
    plVar1 = local_60;
    pcVar11 = local_58;
    if (local_58[0] == '\0') {
      pcVar11 = local_38;
    }
    local_38[0] = local_58[0];
    *pcVar11 = '\0';
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    puVar9 = local_a8;
    pvVar6 = _pthread_getspecific((pthread_key_t)pcVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01267000();
    local_c0 = local_88;
    local_b8 = 0;
    local_140 = DAT_027ed468;
    if (local_80 == '\0') {
      if (local_88 != (longlong *)0x0) {
        FUN_00d50b00();
        local_140 = DAT_027ed468;
      }
    }
    else {
      local_80 = '\0';
    }
    local_b8 = '\x01';
    DAT_027ed468 = local_140;
    if (local_140 != 0) {
      local_b8 = '\x01';
      FUN_00d50b00();
    }
    local_138 = '\x01';
    FUN_01caa390();
    if ((local_138 != '\0') && (local_140 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_160 = local_70;
    local_158 = '\0';
    if (DAT_027ed460 != 0) {
      FUN_00d50b00();
    }
    puVar9 = local_a8;
    local_150 = lVar7;
    local_148 = '\x01';
    FUN_01caa390();
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_b0 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (plVar13 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  uVar16 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01c94a97:
  return uVar16 & 0xffffffff;
}


