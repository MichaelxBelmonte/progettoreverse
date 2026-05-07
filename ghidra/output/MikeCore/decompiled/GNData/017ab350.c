// Function: FUN_017ab350
// Address: 017ab350
// Size: 18513 bytes
// Class: GNData
// String references:
//   "com.celemony.scale.%@.%@"
//   "com.celemony.mode.%@.%@"


/* WARNING: Removing unreachable block (ram,0x017ab583) */
/* WARNING: Removing unreachable block (ram,0x017ab58f) */
/* WARNING: Removing unreachable block (ram,0x017ab3fc) */
/* WARNING: Removing unreachable block (ram,0x017ab408) */
/* WARNING: Removing unreachable block (ram,0x017ae62a) */
/* WARNING: Removing unreachable block (ram,0x017ae63a) */
/* WARNING: Removing unreachable block (ram,0x017ae651) */
/* WARNING: Removing unreachable block (ram,0x017ae658) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_017ab350(undefined8 param_1,undefined4 param_2)

{
  code cVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  code *pcVar8;
  char cVar9;
  char cVar10;
  pthread_key_t pVar11;
  uint uVar12;
  code *pcVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  void *pvVar17;
  code *pcVar18;
  code *pcVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  undefined7 uVar23;
  code *pcVar24;
  code *pcVar25;
  int iVar26;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  byte bVar27;
  ulonglong uVar28;
  int iVar29;
  longlong lVar30;
  bool bVar31;
  float fVar32;
  undefined4 uVar33;
  uint uVar34;
  undefined8 uVar35;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  uint uVar38;
  uint uVar39;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 extraout_XMM0_Qb_00;
  uint uVar40;
  longlong local_640;
  char local_638;
  longlong local_630;
  char local_628;
  longlong local_620;
  char local_618;
  longlong local_610;
  char local_608;
  longlong local_600;
  char local_5f8;
  longlong local_5f0;
  char local_5e8;
  longlong local_5e0;
  char local_5d8;
  longlong local_5d0;
  char local_5c8;
  longlong local_5c0;
  char local_5b8;
  longlong local_5b0;
  char local_5a8;
  longlong local_5a0;
  char local_598;
  longlong local_590;
  char local_588;
  longlong local_580;
  char local_578;
  longlong local_570;
  char local_568;
  undefined8 *local_560;
  char local_558;
  longlong local_550;
  char local_548;
  longlong local_540;
  char local_538;
  longlong local_530;
  char local_528;
  longlong local_520;
  char local_518;
  longlong local_510;
  char local_508;
  longlong local_500;
  char local_4f8;
  longlong local_4f0;
  char local_4e8;
  longlong local_4e0;
  char local_4d8;
  longlong local_4d0;
  char local_4c8;
  longlong local_4c0;
  char local_4b8;
  longlong local_4b0;
  char local_4a8;
  longlong local_4a0;
  char local_498;
  longlong local_490;
  char local_488;
  longlong local_480;
  char local_478;
  longlong local_470;
  char local_468;
  code *local_460;
  char local_458;
  code *local_450;
  char local_448;
  longlong local_440;
  char local_438;
  longlong local_430;
  char local_428;
  longlong local_420;
  char local_418;
  code *local_410;
  char local_408;
  code *local_400;
  char local_3f8;
  longlong local_3f0;
  char local_3e8;
  longlong local_3e0;
  char local_3d8;
  longlong local_3d0;
  char local_3c8;
  longlong local_3c0;
  char local_3b8;
  longlong local_3b0;
  char local_3a8;
  longlong local_3a0;
  char local_398;
  longlong local_390;
  char local_388;
  longlong local_380;
  char local_378;
  longlong local_370;
  char local_368;
  longlong local_360;
  char local_358;
  code *local_350;
  char local_348;
  code *local_340;
  char local_338;
  code *local_330;
  char local_328;
  undefined8 *local_320;
  char local_318;
  code *local_310;
  char local_308;
  code *local_300;
  char local_2f8;
  longlong local_2f0;
  char local_2e8;
  longlong local_2e0;
  char local_2d8;
  longlong local_2d0;
  char local_2c8;
  longlong local_2c0;
  char local_2b8;
  code *local_2b0;
  char local_2a8;
  code *local_2a0;
  char local_298;
  longlong local_290;
  char local_288;
  longlong local_280;
  char local_278;
  longlong local_270;
  char local_268;
  code *local_250;
  code *local_248;
  longlong local_240;
  char local_238;
  longlong local_230;
  code *local_228;
  char local_220;
  code *local_218;
  char local_210;
  code *local_208;
  char local_200;
  code *local_1f8;
  char local_1f0;
  code *local_1e8;
  char local_1e0;
  code *local_1d8;
  char local_1d0;
  code *local_1c8;
  char local_1c0;
  code *local_1b8;
  char local_1b0;
  code *local_1a8;
  char local_1a0;
  code *local_198;
  char local_190;
  longlong local_178;
  char local_170;
  undefined8 local_168;
  uint uStack_160;
  uint uStack_15c;
  char local_130;
  float local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  code *local_e8;
  longlong local_c8;
  code *local_b8;
  longlong local_b0;
  char local_a8;
  code *local_a0;
  code *local_98;
  code *local_90;
  code *local_88;
  code *local_80;
  char local_78 [8];
  undefined8 *local_70;
  undefined8 local_68;
  int local_60;
  undefined4 uStack_5c;
  char local_58;
  code *local_50;
  code *local_48;
  uint local_40;
  pthread_key_t local_38;
  
  local_98 = (code *)CONCAT44(local_98._4_4_,param_2);
  pcVar13 = (code *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined **)pcVar13 = &DAT_026034e8;
  *(longlong *)(pcVar13 + 0x60) = 0;
  *(longlong *)(pcVar13 + 0x38) = 0;
  *(longlong *)(pcVar13 + 0x40) = 0;
  *(longlong *)(pcVar13 + 0x48) = 0;
  *(longlong *)(pcVar13 + 0x50) = 0;
  *(undefined8 *)(pcVar13 + 0x55) = 0;
  FUN_00d500e0();
  FUN_00d94e90();
  pcVar8 = local_80;
  if (local_78[0] == '\0') {
    if (((local_80 != (code *)0x0) && (FUN_00d50b00(), local_78[0] != '\0')) &&
       (local_80 != (code *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78[0] = '\0';
  }
  if (pcVar8 == (code *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    bVar31 = false;
    goto LAB_017afbc3;
  }
  uVar35 = FUN_00d92190();
  pcVar8 = local_80;
  if (((local_78[0] == '\0') && (local_80 != (code *)0x0)) &&
     ((uVar35 = FUN_00d50b00(), local_78[0] != '\0' && (local_80 != (code *)0x0)))) {
    uVar35 = FUN_00d50b20();
  }
  lVar30 = DAT_027f2a40;
  if ((char)local_98 == '\0') {
    if (DAT_027f2a40 != 0) {
      uVar35 = FUN_00d50b00();
    }
    local_640 = lVar30;
    local_638 = '\x01';
    FUN_00d95130(uVar35,&local_640);
    pcVar18 = local_80;
    if (local_80 == (code *)0x0) {
      bVar5 = false;
    }
    else if (local_78[0] == '\0') {
      FUN_00d50b00();
      bVar5 = true;
      if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_78[0] = '\0';
      bVar5 = true;
    }
    if ((local_638 != '\0') && (local_640 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    bVar5 = false;
    pcVar18 = (code *)0x0;
  }
  local_a0 = pcVar18;
  if (*(int *)(pcVar8 + 0xc) < 1) {
    local_c8 = 0;
    bVar4 = false;
LAB_017abc1b:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    bVar31 = true;
    local_48 = (code *)0x0;
    bVar3 = false;
    local_e8 = local_a0;
    local_b8 = (code *)0x0;
    bVar6 = false;
LAB_017afb19:
    FUN_00d50b20();
  }
  else {
    bVar31 = false;
    local_128 = (float)(uint)local_98;
    iVar29 = 0;
    local_c8 = 0;
    bVar4 = false;
    local_50 = pcVar13;
    do {
      lVar30 = *(longlong *)(*(longlong *)(pcVar8 + 0x10) + (longlong)iVar29 * 8);
      if (local_c8 == lVar30) {
        lVar20 = DAT_027d2a60;
        if ((!bVar4) && (local_c8 != 0)) {
          bVar4 = true;
          FUN_00d50b00();
          lVar20 = DAT_027d2a60;
        }
      }
      else {
        if (lVar30 != 0) {
          FUN_00d50b00();
        }
        if ((bVar4) && (local_c8 != 0)) {
          FUN_00d50b20();
          bVar4 = true;
          lVar20 = DAT_027d2a60;
          local_c8 = lVar30;
        }
        else {
          bVar4 = true;
          lVar20 = DAT_027d2a60;
          local_c8 = lVar30;
        }
      }
      DAT_027d2a60 = lVar20;
      if (lVar20 != 0) {
        FUN_00d50b00();
      }
      local_628 = '\x01';
      local_630 = lVar20;
      cVar9 = FUN_00d90eb0();
      if ((local_628 != '\0') && (local_630 != 0)) {
        FUN_00d50b20();
      }
      lVar30 = DAT_027d2a68;
      local_128 = (float)((uint)local_128 & 0xff);
      if (cVar9 != '\0') {
        local_128 = 0.0;
      }
      if (DAT_027d2a68 != 0) {
        FUN_00d50b00();
      }
      local_620 = lVar30;
      local_618 = '\x01';
      cVar9 = FUN_00d90eb0();
      if ((local_618 != '\0') && (local_620 != 0)) {
        FUN_00d50b20();
      }
      lVar30 = DAT_027d2a70;
      if (cVar9 != '\0') {
        bVar31 = true;
      }
      if (DAT_027d2a70 != 0) {
        FUN_00d50b00();
      }
      local_610 = lVar30;
      local_608 = '\x01';
      cVar9 = FUN_00d90eb0();
      if ((local_608 != '\0') && (local_610 != 0)) {
        FUN_00d50b20();
      }
      if (cVar9 != '\0') {
        local_5f8 = '\0';
        local_600 = local_c8;
        uVar35 = FUN_00ddb860();
        pcVar13 = local_80;
        if (local_78[0] == '\0') {
          if (((local_80 != (code *)0x0) && (uVar35 = FUN_00d50b00(), local_78[0] != '\0')) &&
             (local_80 != (code *)0x0)) {
            uVar35 = FUN_00d50b20();
          }
        }
        else {
          local_78[0] = '\0';
        }
        if ((local_5f8 != '\0') && (local_600 != 0)) {
          uVar35 = FUN_00d50b20();
        }
        lVar30 = DAT_027d2a70;
        if (DAT_027d2a70 != 0) {
          uVar35 = FUN_00d50b00();
        }
        local_5f0 = lVar30;
        local_5e8 = '\x01';
        (**(code **)(*(longlong *)pcVar13 + 0x3b0))(uVar35,0);
        if ((local_5e8 != '\0') && (local_5f0 != 0)) {
          FUN_00d50b20();
        }
        lVar30 = DAT_027d2a70;
        if (DAT_027d2a70 != 0) {
          FUN_00d50b00();
        }
        local_5e0 = lVar30;
        local_5d8 = '\x01';
        (**(code **)(*(longlong *)pcVar13 + 1000))(0);
        if ((local_5d8 != '\0') && (local_5e0 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d95590();
        local_228 = local_80;
        local_220 = 0;
        if (local_78[0] == '\0') {
          if (local_80 != (code *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78[0] = '\0';
        }
        local_220 = '\x01';
        (**(code **)(*(longlong *)pcVar13 + 0x3e0))();
        if ((local_220 != '\0') && (local_228 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)pcVar13 + 0x410))();
        FUN_00d50b20();
      }
      lVar30 = DAT_027d2a78;
      if (DAT_027d2a78 != 0) {
        FUN_00d50b00();
      }
      local_5d0 = lVar30;
      local_5c8 = '\x01';
      cVar9 = FUN_00d90eb0();
      if ((local_5c8 != '\0') && (local_5d0 != 0)) {
        FUN_00d50b20();
      }
      if (cVar9 != '\0') {
        local_5b8 = '\0';
        local_5c0 = local_c8;
        FUN_00ddb860();
        pcVar13 = local_80;
        if (local_78[0] == '\0') {
          if (((local_80 != (code *)0x0) && (FUN_00d50b00(), local_78[0] != '\0')) &&
             (local_80 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_78[0] = '\0';
        }
        if ((local_5b8 != '\0') && (local_5c0 != 0)) {
          FUN_00d50b20();
        }
        lVar30 = DAT_027d2a78;
        if (DAT_027d2a78 != 0) {
          FUN_00d50b00();
        }
        local_5b0 = lVar30;
        local_5a8 = '\x01';
        (**(code **)(*(longlong *)pcVar13 + 0x3b0))();
        if ((local_5a8 != '\0') && (local_5b0 != 0)) {
          FUN_00d50b20();
        }
        lVar30 = DAT_027d2a78;
        if (DAT_027d2a78 != 0) {
          FUN_00d50b00();
        }
        local_5a0 = lVar30;
        local_598 = '\x01';
        (**(code **)(*(longlong *)pcVar13 + 1000))(0);
        if ((local_598 != '\0') && (local_5a0 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d95590();
        local_218 = local_80;
        local_210 = 0;
        if (local_78[0] == '\0') {
          if (local_80 != (code *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78[0] = '\0';
        }
        local_210 = '\x01';
        (**(code **)(*(longlong *)pcVar13 + 0x3e0))();
        if ((local_210 != '\0') && (local_218 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)pcVar13 + 0x470))();
        FUN_00d50b20();
      }
      cVar9 = FUN_00d8ca70();
      if (cVar9 == '!') {
        FUN_00d23620();
        iVar29 = iVar29 + -1;
      }
      pcVar18 = local_a0;
      iVar29 = iVar29 + 1;
    } while (iVar29 < *(int *)(pcVar8 + 0xc));
    pcVar13 = local_50;
    if (*(int *)(pcVar8 + 0xc) < 2) goto LAB_017abc1b;
    pcVar13 = (code *)**(undefined8 **)(pcVar8 + 0x10);
    if (pcVar13 == (code *)0x0) {
      bVar6 = false;
      local_b8 = (code *)0x0;
      if ((char)local_98 != '\0') goto LAB_017abcf1;
LAB_017abdba:
      local_e8 = pcVar18;
      bVar3 = bVar5;
    }
    else {
      FUN_00d50b00();
      bVar6 = true;
      local_b8 = pcVar13;
      if ((char)local_98 == '\0') goto LAB_017abdba;
LAB_017abcf1:
      if (pcVar18 == local_b8) {
        if (((pcVar13 == (code *)0x0) || (bVar5)) || (pcVar18 == (code *)0x0)) goto LAB_017abdba;
        FUN_00d50b00();
        local_e8 = pcVar18;
        bVar3 = true;
      }
      else {
        if (pcVar13 != (code *)0x0 && local_b8 != (code *)0x0) {
          FUN_00d50b00();
        }
        local_e8 = local_b8;
        bVar3 = bVar6;
        if ((bVar5) && (pcVar18 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    bVar5 = bVar3;
    pVar11 = FUN_00d8d560();
    plVar14 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar14 + 0x18))();
    puVar15 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar15 = &DAT_02572358;
    (*DAT_02572370)();
    local_88 = DAT_025ffd78;
    local_38 = pVar11;
    if (2 < *(int *)(pcVar8 + 0xc)) {
      local_168 = DAT_025795c0;
      lVar30 = 2;
      local_48 = (code *)&DAT_025795a8;
      do {
        lVar20 = *(longlong *)(*(longlong *)(pcVar8 + 0x10) + lVar30 * 8);
        pcVar13 = pcVar8;
        if (local_c8 == lVar20) {
          if ((!bVar4) && (local_c8 != 0)) {
            bVar4 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar20 != 0) {
            FUN_00d50b00();
          }
          if ((bVar4) && (local_c8 != 0)) {
            FUN_00d50b20();
            bVar4 = true;
            local_c8 = lVar20;
          }
          else {
            bVar4 = true;
            local_c8 = lVar20;
          }
        }
        pVar11 = (pthread_key_t)pcVar13;
        local_590 = local_c8;
        local_588 = '\0';
        FUN_00ddb860();
        pcVar13 = local_80;
        if (local_78[0] == '\0') {
          if (((local_80 != (code *)0x0) && (FUN_00d50b00(), local_78[0] != '\0')) &&
             (local_80 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_78[0] = '\0';
        }
        if ((local_588 != '\0') && (local_590 != 0)) {
          FUN_00d50b20();
        }
        uVar35 = FUN_00d95590();
        pcVar18 = local_80;
        local_200 = 0;
        if (local_78[0] == '\0') {
          if (local_80 != (code *)0x0) {
            uVar35 = FUN_00d50b00();
          }
        }
        else {
          local_78[0] = '\0';
        }
        local_200 = '\x01';
        local_208 = pcVar18;
        (**(code **)(*(longlong *)pcVar13 + 0x3e0))(uVar35,0);
        if ((local_200 != '\0') && (local_208 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
          FUN_00d50b20();
        }
        puVar16 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar16 = local_48;
        (*local_168)();
        FUN_00d999c0();
        pcVar18 = local_80;
        local_1f0 = 0;
        if (local_78[0] == '\0') {
          if (local_80 != (code *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78[0] = '\0';
        }
        local_1f0 = '\x01';
        local_1f8 = pcVar18;
        FUN_00d8dbf0();
        if ((local_1f0 != '\0') && (local_1f8 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
          FUN_00d50b20();
        }
        lVar20 = DAT_02774da0;
        if (DAT_02774da0 != 0) {
          FUN_00d50b00();
        }
        local_580 = lVar20;
        local_578 = '\x01';
        FUN_00d8dbf0();
        if ((local_578 != '\0') && (local_580 != 0)) {
          FUN_00d50b20();
        }
        lVar20 = DAT_02704060;
        if (DAT_02704060 != 0) {
          FUN_00d50b00();
        }
        local_570 = lVar20;
        local_568 = '\x01';
        FUN_00d8dbf0();
        if ((local_568 != '\0') && (local_570 != 0)) {
          FUN_00d50b20();
        }
        local_a8 = '\0';
        local_b0 = 0;
        local_558 = '\0';
        local_560 = puVar16;
        uVar35 = (**(code **)(*(longlong *)pcVar13 + 0x3e0))();
        cVar9 = (char)uVar35;
        if ((local_558 != '\0') && (local_560 != (undefined8 *)0x0)) {
          uVar35 = FUN_00d50b20();
        }
        local_a0 = (code *)CONCAT44(local_a0._4_4_,(int)CONCAT71((int7)((ulonglong)uVar35 >> 8),1));
        if (cVar9 != '\0') {
          fVar32 = (float)FUN_00d8d7b0();
          if ((fVar32 != DAT_0239424c) || (NAN(fVar32) || NAN(DAT_0239424c))) {
            cVar9 = FUN_00d8ca50();
            if (cVar9 == '\0') {
              cVar9 = FUN_00d8ca50();
              if (cVar9 != '\0') {
                local_550 = local_b0;
                local_548 = '\0';
                local_80 = (code *)FUN_00d971f0();
                if ((local_548 != '\0') && (local_550 != 0)) {
                  FUN_00d50b20();
                }
                pVar11 = (pthread_key_t)((ulonglong)local_80 >> 0x20);
                if ((ulonglong)local_80 >> 0x20 == 0) {
                  *(undefined1 *)(unaff_RDI + 1) = 0;
                  *unaff_RDI = 0;
                  local_a0 = (code *)((ulonglong)local_a0 & 0xffffffff00000000);
                  goto LAB_017ac89c;
                }
                FUN_00e7c810();
              }
              _logf();
            }
            pcVar13 = (code *)FUN_00e8fc40();
            FUN_00d4ff40();
            *(undefined **)pcVar13 = &DAT_025ffd60;
            *(longlong *)(pcVar13 + 0x38) = 0;
            *(longlong *)(pcVar13 + 0x40) = 0;
            (*local_88)();
            local_90 = pcVar13;
            pvVar17 = _pthread_getspecific(pVar11);
            if (pvVar17 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01779ed0();
            local_78[0] = '\0';
            local_80 = pcVar13;
            FUN_00d21140();
            if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
              FUN_00d50b20();
            }
            lVar20 = DAT_027d2a80;
            if (DAT_027d2a80 != 0) {
              FUN_00d50b00();
            }
            local_540 = lVar20;
            local_538 = '\x01';
            cVar9 = FUN_00d90eb0();
            if ((local_538 != '\0') && (local_540 != 0)) {
              FUN_00d50b20();
            }
            lVar7 = DAT_027d2a88;
            lVar20 = DAT_027cd580;
            if (cVar9 == '\0' && !bVar31) {
              if (DAT_027d2a88 != 0) {
                FUN_00d50b00();
              }
              local_520 = lVar7;
              local_518 = '\x01';
              cVar9 = FUN_00d90eb0();
              if ((local_518 != '\0') && (local_520 != 0)) {
                FUN_00d50b20();
              }
              lVar7 = DAT_027d2a90;
              lVar20 = DAT_027cd560;
              if (cVar9 == '\0') {
                if (DAT_027d2a90 != 0) {
                  FUN_00d50b00();
                }
                local_500 = lVar7;
                local_4f8 = '\x01';
                cVar9 = FUN_00d90eb0();
                if ((local_4f8 != '\0') && (local_500 != 0)) {
                  FUN_00d50b20();
                }
                lVar7 = DAT_027e3b50;
                lVar20 = DAT_027d2a98;
                if (cVar9 == '\0') {
                  if (DAT_027d2a98 != 0) {
                    FUN_00d50b00();
                  }
                  local_4e0 = lVar20;
                  local_4d8 = '\x01';
                  cVar9 = FUN_00d90eb0();
                  if ((local_4d8 != '\0') && (local_4e0 != 0)) {
                    FUN_00d50b20();
                  }
                  lVar7 = DAT_027e3b58;
                  lVar20 = DAT_027d2aa0;
                  if (cVar9 == '\0') {
                    if (DAT_027d2aa0 != 0) {
                      FUN_00d50b00();
                    }
                    local_4c0 = lVar20;
                    local_4b8 = '\x01';
                    cVar9 = FUN_00d90eb0();
                    if ((local_4b8 != '\0') && (local_4c0 != 0)) {
                      FUN_00d50b20();
                    }
                    lVar7 = DAT_027e3b60;
                    lVar20 = DAT_027cd560;
                    if (cVar9 == '\0') {
                      if (DAT_027cd560 != 0) {
                        FUN_00d50b00();
                      }
                      local_4a0 = lVar20;
                      local_498 = '\x01';
                      local_80 = local_90;
                      local_78[0] = '\0';
                      FUN_00ca0840();
                      if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_498 != '\0') && (local_4a0 != 0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      if (DAT_027e3b60 != 0) {
                        FUN_00d50b00();
                      }
                      local_4b0 = lVar7;
                      local_4a8 = '\x01';
                      local_80 = local_90;
                      local_78[0] = '\0';
                      FUN_00ca0840();
                      if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_4a8 != '\0') && (local_4b0 != 0)) {
                        FUN_00d50b20();
                      }
                    }
                  }
                  else {
                    if (DAT_027e3b58 != 0) {
                      FUN_00d50b00();
                    }
                    local_4d0 = lVar7;
                    local_4c8 = '\x01';
                    local_80 = local_90;
                    local_78[0] = '\0';
                    FUN_00ca0840();
                    if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_4c8 != '\0') && (local_4d0 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  if (DAT_027e3b50 != 0) {
                    FUN_00d50b00();
                  }
                  local_4f0 = lVar7;
                  local_4e8 = '\x01';
                  local_80 = local_90;
                  local_78[0] = '\0';
                  FUN_00ca0840();
                  if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_4e8 != '\0') && (local_4f0 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              else {
                if (DAT_027cd560 != 0) {
                  FUN_00d50b00();
                }
                local_510 = lVar20;
                local_508 = '\x01';
                local_80 = local_90;
                local_78[0] = '\0';
                FUN_00ca0840();
                if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_508 != '\0') && (local_510 != 0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              if (DAT_027cd580 != 0) {
                FUN_00d50b00();
              }
              local_530 = lVar20;
              local_528 = '\x01';
              local_80 = local_90;
              local_78[0] = '\0';
              FUN_00ca0840();
              if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_528 != '\0') && (local_530 != 0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
          }
        }
LAB_017ac89c:
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        FUN_00d50b20();
        if ((char)local_a0 == '\0') {
          bVar31 = true;
          bVar3 = false;
          local_48 = (code *)0x0;
          pcVar13 = local_50;
          goto LAB_017afaed;
        }
        lVar30 = lVar30 + 1;
      } while (lVar30 < *(int *)(pcVar8 + 0xc));
    }
    pcVar13 = local_50;
    if (*(pthread_key_t *)((longlong)puVar15 + 0xc) == local_38) {
      pVar11 = local_38;
      pcVar18 = (code *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(undefined **)pcVar18 = &DAT_025ffd60;
      *(longlong *)(pcVar18 + 0x38) = 0;
      *(longlong *)(pcVar18 + 0x40) = 0;
      (*local_88)();
      local_248 = pcVar18;
      pvVar17 = _pthread_getspecific(pVar11);
      if (pvVar17 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar35 = FUN_01779ed0();
      local_78[0] = '\0';
      local_80 = pcVar18;
      uVar35 = FUN_00d23370(uVar35,0);
      if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
        uVar35 = FUN_00d50b20();
      }
      lVar30 = DAT_027cd560;
      if (DAT_027cd560 != 0) {
        uVar35 = FUN_00d50b00();
      }
      local_490 = lVar30;
      local_488 = '\x01';
      local_78[0] = '\0';
      local_80 = pcVar18;
      uVar35 = FUN_00ca0840(uVar35,&local_80);
      if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
        uVar35 = FUN_00d50b20();
      }
      if ((local_488 != '\0') && (local_490 != 0)) {
        uVar35 = FUN_00d50b20();
      }
      FUN_00d242c0(uVar35,0);
      if (1 < (int)*(uint *)((longlong)puVar15 + 0xc)) {
        lVar30 = (ulonglong)*(uint *)((longlong)puVar15 + 0xc) + 1;
        do {
          pVar11 = (pthread_key_t)puVar15[2];
          pvVar17 = _pthread_getspecific(pVar11);
          if (pvVar17 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar33 = FUN_01779ec0();
          local_a0 = (code *)CONCAT44(local_a0._4_4_,uVar33);
          pvVar17 = _pthread_getspecific(pVar11);
          if (pvVar17 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar32 = (float)FUN_01779ec0();
          if (local_a0._0_4_ - fVar32 < DAT_02391090) {
            FUN_00d23620();
          }
          lVar30 = lVar30 + -1;
        } while (2 < lVar30);
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
      local_480 = DAT_02704060;
      if (DAT_02704060 != 0) {
        FUN_00d50b00();
      }
      local_478 = '\x01';
      FUN_00d91000(1,&local_480);
      pcVar18 = local_80;
      if (local_78[0] == '\0') {
        if (((local_80 != (code *)0x0) && (FUN_00d50b00(), local_78[0] != '\0')) &&
           (local_80 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78[0] = '\0';
      }
      if ((local_478 != '\0') && (local_480 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      pcVar25 = DAT_027259e0;
      if (DAT_027259e0 != (code *)0x0) {
        FUN_00d50b00();
      }
      local_88 = pcVar25;
      if (1 < *(int *)(pcVar18 + 0xc)) {
        local_88 = *(code **)(*(longlong *)(pcVar18 + 0x10) +
                             (ulonglong)(*(int *)(pcVar18 + 0xc) - 2) * 8);
        if (pcVar25 == local_88) {
          local_88 = pcVar25;
        }
        else {
          if (local_88 != (code *)0x0) {
            FUN_00d50b00();
          }
          if (pcVar25 != (code *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      lVar30 = DAT_026e17f8;
      if (DAT_026e17f8 != 0) {
        FUN_00d50b00();
      }
      local_470 = lVar30;
      local_468 = '\x01';
      uVar35 = FUN_00d91000(1,&local_470);
      if (pcVar18 == local_80) {
LAB_017acd10:
        if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
          uVar35 = FUN_00d50b20();
        }
      }
      else {
        pcVar18 = local_80;
        if (local_78[0] == '\0') {
          if (local_80 != (code *)0x0) {
            FUN_00d50b00();
          }
          uVar35 = FUN_00d50b20();
          goto LAB_017acd10;
        }
        uVar35 = FUN_00d50b20();
        local_78[0] = '\0';
      }
      if ((local_468 != '\0') && (local_470 != 0)) {
        uVar35 = FUN_00d50b20();
      }
      if ((*(int *)(pcVar18 + 0xc) != 0) &&
         (iVar29 = FUN_00d8d560(), uVar35 = extraout_XMM0_Qa, 0 < iVar29)) {
        uVar35 = FUN_00d23620();
      }
      pcVar25 = DAT_027259e0;
      local_458 = '\0';
      local_460 = pcVar18;
      if (DAT_027259e0 != (code *)0x0) {
        uVar35 = FUN_00d50b00();
      }
      local_450 = pcVar25;
      local_448 = '\x01';
      uVar35 = FUN_00d95130(uVar35,&local_450);
      pcVar25 = local_80;
      if (local_80 == local_88) {
LAB_017acdf9:
        if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
          uVar35 = FUN_00d50b20();
        }
      }
      else {
        if (local_78[0] == '\0') {
          if (local_80 != (code *)0x0) {
            uVar35 = FUN_00d50b00();
          }
          if (local_88 == (code *)0x0) {
            local_88 = pcVar25;
          }
          else {
            local_88 = pcVar25;
            uVar35 = FUN_00d50b20();
          }
          goto LAB_017acdf9;
        }
        if (local_88 != (code *)0x0) {
          local_88 = local_80;
          uVar35 = FUN_00d50b20();
        }
        local_78[0] = '\0';
        local_88 = pcVar25;
      }
      if ((local_448 != '\0') && (local_450 != (code *)0x0)) {
        uVar35 = FUN_00d50b20();
      }
      if ((local_458 != '\0') && (local_460 != (code *)0x0)) {
        uVar35 = FUN_00d50b20();
      }
      lVar30 = DAT_02774da0;
      if (DAT_02774da0 != 0) {
        uVar35 = FUN_00d50b00();
      }
      pcVar25 = local_88;
      local_440 = lVar30;
      local_438 = '\x01';
      FUN_00d97fb0(uVar35,&local_440);
      pcVar24 = local_80;
      if (local_80 == pcVar25) {
LAB_017acecc:
        if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_78[0] == '\0') {
          if (local_80 != (code *)0x0) {
            FUN_00d50b00();
          }
          if (local_88 == (code *)0x0) {
            local_88 = pcVar24;
          }
          else {
            local_88 = pcVar24;
            FUN_00d50b20();
          }
          goto LAB_017acecc;
        }
        if (local_88 != (code *)0x0) {
          local_88 = local_80;
          FUN_00d50b20();
        }
        local_78[0] = '\0';
        local_88 = pcVar24;
      }
      if ((local_438 != '\0') && (local_440 != 0)) {
        FUN_00d50b20();
      }
      pcVar25 = DAT_027e3c30;
      if ((char)local_98 == '\0') {
        if (DAT_027e3c30 == (code *)0x0) {
          if (local_88 != (code *)0x0) goto LAB_017acf30;
        }
        else {
          FUN_00d50b00();
          if (local_88 == pcVar25) {
            FUN_00d50b20();
          }
          else {
LAB_017acf30:
            if (local_88 == (code *)0x0) {
              local_88 = pcVar25;
            }
            else {
              FUN_00d50b20();
              local_88 = pcVar25;
            }
          }
        }
      }
      uVar35 = (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
      pcVar25 = local_80;
      if ((((local_78[0] == '\0') && (local_80 != (code *)0x0)) &&
          (uVar35 = FUN_00d50b00(), local_78[0] != '\0')) && (local_80 != (code *)0x0)) {
        uVar35 = FUN_00d50b20();
      }
      lVar30 = DAT_02774da0;
      local_90 = pcVar25;
      if (DAT_02774da0 != 0) {
        uVar35 = FUN_00d50b00();
      }
      pcVar25 = local_90;
      local_430 = lVar30;
      local_428 = '\x01';
      FUN_00d97fb0(uVar35,&local_430);
      pcVar24 = local_80;
      if (pcVar25 == local_80) {
LAB_017ad029:
        pcVar24 = local_90;
        if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_78[0] == '\0') {
          if (local_80 != (code *)0x0) {
            FUN_00d50b00();
          }
          if (local_90 == (code *)0x0) {
            local_90 = pcVar24;
          }
          else {
            local_90 = pcVar24;
            FUN_00d50b20();
          }
          goto LAB_017ad029;
        }
        if (local_90 != (code *)0x0) {
          local_90 = local_80;
          FUN_00d50b20();
        }
        local_78[0] = '\0';
      }
      local_90 = pcVar24;
      if ((local_428 != '\0') && (local_430 != 0)) {
        FUN_00d50b20();
      }
      lVar30 = DAT_026e17f8;
      if (DAT_026e17f8 != 0) {
        FUN_00d50b00();
      }
      local_420 = lVar30;
      local_418 = '\x01';
      uVar35 = FUN_00d91000(1,&local_420);
      if (local_80 == pcVar18) {
LAB_017ad0e7:
        if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
          uVar35 = FUN_00d50b20();
        }
      }
      else {
        pcVar18 = local_80;
        if (local_78[0] == '\0') {
          if (local_80 != (code *)0x0) {
            FUN_00d50b00();
          }
          uVar35 = FUN_00d50b20();
          goto LAB_017ad0e7;
        }
        uVar35 = FUN_00d50b20();
        local_78[0] = '\0';
      }
      if ((local_418 != '\0') && (local_420 != 0)) {
        uVar35 = FUN_00d50b20();
      }
      if ((*(int *)(pcVar18 + 0xc) != 0) &&
         (iVar29 = FUN_00d8d560(), uVar35 = extraout_XMM0_Qa_00, 0 < iVar29)) {
        uVar35 = FUN_00d23620();
      }
      pcVar25 = DAT_027259e0;
      local_408 = '\0';
      local_410 = pcVar18;
      if (DAT_027259e0 != (code *)0x0) {
        uVar35 = FUN_00d50b00();
      }
      local_400 = pcVar25;
      local_3f8 = '\x01';
      FUN_00d95130(uVar35,&local_400);
      pcVar25 = local_80;
      if (local_80 == local_90) {
LAB_017ad1e8:
        pcVar25 = local_90;
        if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_78[0] == '\0') {
          if (local_80 != (code *)0x0) {
            FUN_00d50b00();
          }
          if (local_90 == (code *)0x0) {
            local_90 = pcVar25;
          }
          else {
            local_90 = pcVar25;
            FUN_00d50b20();
          }
          goto LAB_017ad1e8;
        }
        if (local_90 != (code *)0x0) {
          local_90 = local_80;
          FUN_00d50b20();
        }
        local_78[0] = '\0';
      }
      if ((local_3f8 != '\0') && (local_400 != (code *)0x0)) {
        FUN_00d50b20();
      }
      local_90 = pcVar25;
      if ((local_408 != '\0') && (local_410 != (code *)0x0)) {
        FUN_00d50b20();
      }
      lVar30 = DAT_027e3c18;
      if (DAT_027e3c18 != 0) {
        FUN_00d50b00();
      }
      local_3f0 = lVar30;
      local_3e8 = '\x01';
      cVar9 = (**(code **)(*(longlong *)local_88 + 0x50))();
      lVar30 = DAT_027e3bf0;
      if (cVar9 == '\0') {
        cVar9 = '\0';
      }
      else {
        if (DAT_027e3bf0 != 0) {
          FUN_00d50b00();
        }
        local_3e0 = lVar30;
        local_3d8 = '\x01';
        cVar10 = (**(code **)(*(longlong *)local_90 + 0x50))();
        lVar30 = DAT_027cd5b0;
        cVar9 = '\x01';
        if (cVar10 == '\0') {
          if (DAT_027cd5b0 != 0) {
            FUN_00d50b00();
          }
          local_3d0 = lVar30;
          local_3c8 = '\x01';
          cVar9 = (**(code **)(*(longlong *)local_90 + 0x50))();
          if ((local_3c8 != '\0') && (local_3d0 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_3d8 != '\0') && (local_3e0 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_3e8 != '\0') && (local_3f0 != 0)) {
        FUN_00d50b20();
      }
      pcVar25 = DAT_027e3c00;
      if (cVar9 != '\0') {
        if (DAT_027e3c00 == (code *)0x0) {
          if (local_88 != (code *)0x0) goto LAB_017ad382;
        }
        else {
          FUN_00d50b00();
          pcVar24 = local_88;
          if (local_88 == pcVar25) {
            FUN_00d50b20();
            local_88 = pcVar24;
          }
          else {
LAB_017ad382:
            FUN_00d50b20();
            local_88 = pcVar25;
          }
        }
      }
      local_250 = local_90;
      uVar35 = FUN_00083ea0(2,&local_250);
      FUN_00d8cb40(uVar35,&local_80);
      lVar30 = local_b0;
      if (local_a8 == '\0') {
        if (((local_b0 != 0) && (FUN_00d50b00(), local_a8 != '\0')) && (local_b0 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_a8 = '\0';
      }
      local_80 = (code *)&DAT_0253d630;
      if ((local_58 != '\0') && (CONCAT44(uStack_5c,local_60) != 0)) {
        FUN_00d50b20();
      }
      local_80 = (code *)&DAT_024c5048;
      if (((char)local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      pcVar25 = local_88;
      local_250 = local_90;
      FUN_00083ea0(2,&local_250);
      FUN_00d8cb40();
      local_230 = local_b0;
      if (local_a8 == '\0') {
        if (((local_b0 != 0) && (FUN_00d50b00(), local_a8 != '\0')) && (local_b0 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_a8 = '\0';
      }
      local_80 = (code *)&DAT_0253d630;
      if ((local_58 != '\0') && (CONCAT44(uStack_5c,local_60) != 0)) {
        FUN_00d50b20();
      }
      local_80 = (code *)&DAT_024c5048;
      if (((char)local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      lVar20 = DAT_027d2aa8;
      if (DAT_027d2aa8 != 0) {
        FUN_00d50b00();
      }
      local_3c0 = lVar20;
      local_3b8 = '\x01';
      cVar9 = FUN_00d90eb0();
      lVar20 = DAT_027cd590;
      cVar10 = '\x01';
      if (cVar9 == '\0') {
        if (DAT_027cd590 != 0) {
          FUN_00d50b00();
        }
        local_3b0 = lVar20;
        local_3a8 = '\x01';
        cVar9 = FUN_00d90eb0();
        lVar20 = DAT_027d2ab0;
        cVar10 = '\x01';
        if (cVar9 == '\0') {
          if (DAT_027d2ab0 != 0) {
            FUN_00d50b00();
          }
          local_3a0 = lVar20;
          local_398 = '\x01';
          cVar9 = FUN_00d90eb0();
          lVar20 = DAT_0277d5d0;
          cVar10 = '\x01';
          if (cVar9 == '\0') {
            if (DAT_0277d5d0 != 0) {
              FUN_00d50b00();
            }
            local_390 = lVar20;
            local_388 = '\x01';
            cVar9 = FUN_00d90eb0();
            lVar20 = DAT_027d2ab8;
            cVar10 = '\x01';
            if (cVar9 == '\0') {
              if (DAT_027d2ab8 != 0) {
                FUN_00d50b00();
              }
              local_380 = lVar20;
              local_378 = '\x01';
              cVar9 = FUN_00d90eb0();
              lVar20 = DAT_027d2ac0;
              cVar10 = '\x01';
              if (cVar9 == '\0') {
                if (DAT_027d2ac0 != 0) {
                  FUN_00d50b00();
                }
                local_370 = lVar20;
                local_368 = '\x01';
                cVar9 = FUN_00d90eb0();
                lVar20 = DAT_027d2ac8;
                cVar10 = '\x01';
                if (cVar9 == '\0') {
                  if (DAT_027d2ac8 != 0) {
                    FUN_00d50b00();
                  }
                  local_360 = lVar20;
                  local_358 = '\x01';
                  cVar10 = FUN_00d90eb0();
                  if ((local_358 != '\0') && (local_360 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_368 != '\0') && (local_370 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_378 != '\0') && (local_380 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_388 != '\0') && (local_390 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_398 != '\0') && (local_3a0 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_3a8 != '\0') && (local_3b0 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_3b8 != '\0') && (local_3c0 != 0)) {
        FUN_00d50b20();
      }
      local_40 = 0;
      if (cVar10 == '\0') {
        local_40 = (uint)local_128;
      }
      pcVar19 = (code *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(longlong *)(pcVar19 + 0x50) = 0;
      *(longlong *)(pcVar19 + 0x38) = 0;
      *(longlong *)(pcVar19 + 0x40) = 0;
      *(undefined4 *)(pcVar19 + 0x48) = 0;
      pcVar24 = (code *)&DAT_025fee18;
      *(undefined **)pcVar19 = &DAT_025fee18;
      *(undefined8 *)(pcVar19 + 0x6c) = 0;
      *(longlong *)(pcVar19 + 0x58) = 0;
      *(longlong *)(pcVar19 + 0x60) = 0;
      *(undefined2 *)(pcVar19 + 0x68) = 0;
      (*DAT_025fee30)();
      local_48 = pcVar19;
      pvVar17 = _pthread_getspecific((pthread_key_t)pcVar24);
      if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
        pcVar13 = *(code **)(pcVar13 + (ulonglong)(*(uint *)(lVar20 + 0x154) & 1) * 8 + 0x20);
      }
      pcVar19 = *(code **)(pcVar13 + 0x38);
      if (pcVar19 != local_48) {
        FUN_00d50b00();
        *(code **)(pcVar13 + 0x38) = local_48;
        if (pcVar19 != (code *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d23340();
      pcVar13 = local_80;
      local_b0 = CONCAT71(local_b0._1_7_,local_78[0]);
      plVar21 = (longlong *)local_78;
      if (local_78[0] == '\0') {
        plVar21 = &local_b0;
      }
      *(undefined1 *)plVar21 = 0;
      if ((local_78[0] != '\0') && (pcVar13 != (code *)0x0)) {
        FUN_00d50b20();
      }
      pvVar17 = _pthread_getspecific((pthread_key_t)pcVar24);
      if (pvVar17 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar32 = (float)FUN_01779ec0();
      pvVar17 = _pthread_getspecific((pthread_key_t)pcVar24);
      if (pvVar17 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar33 = FUN_01779ec0();
      local_a0 = (code *)CONCAT44(local_a0._4_4_,uVar33);
      if (((char)local_b0 != '\0') && (pcVar13 != (code *)0x0)) {
        FUN_00d50b20();
      }
      uVar35 = _exp2f((fVar32 - local_a0._0_4_) * DAT_023941f4);
      FUN_00d23310();
      pcVar13 = local_80;
      plVar21 = (longlong *)local_78;
      if (local_78[0] == '\0') {
        plVar21 = &local_b0;
      }
      local_b0 = CONCAT71(local_b0._1_7_,local_78[0]);
      *(undefined1 *)plVar21 = 0;
      if ((local_78[0] != '\0') && (pcVar13 != (code *)0x0)) {
        FUN_00d50b20();
      }
      pvVar17 = _pthread_getspecific((pthread_key_t)pcVar24);
      if (pvVar17 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar33 = FUN_01779ec0();
      local_a0 = (code *)CONCAT44(local_a0._4_4_,uVar33);
      if (((char)local_b0 != '\0') && (pcVar13 != (code *)0x0)) {
        FUN_00d50b20();
      }
      local_128 = (float)uVar35;
      uStack_124 = (uint)((ulonglong)uVar35 >> 0x20);
      uStack_120 = (uint)extraout_XMM0_Qb;
      uStack_11c = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar37._0_4_ = _DAT_023945e0 & (uint)local_128;
      auVar37._4_4_ = _UNK_023945e4 & uStack_124;
      auVar37._8_4_ = _UNK_023945e8 & uStack_120;
      auVar37._12_4_ = _UNK_023945ec & uStack_11c;
      auVar36._4_12_ = SUB1612(auVar37 | _DAT_023945f0,4);
      auVar36._0_4_ = SUB164(auVar37 | _DAT_023945f0,0) + local_128;
      auVar37 = roundss(auVar36,auVar36,0xb);
      bVar31 = 0.0 <= local_a0._0_4_;
      bVar3 = (double)(float)((uint)(auVar37._0_4_ - local_128) & _DAT_02390140) <= _DAT_02391038;
      iVar29 = *(int *)((longlong)puVar15 + 0xc);
      local_38 = CONCAT31(local_38._1_3_,1 < iVar29);
      pcVar19 = (code *)FUN_00e8fc40();
      FUN_01a016a0();
      (**(code **)(*(longlong *)pcVar19 + 0x18))();
      pcVar13 = (code *)FUN_00e8fc40();
      FUN_0013e060();
      (**(code **)(*(longlong *)pcVar13 + 0x18))();
      local_a0 = (code *)0x0;
      local_98 = pcVar13;
      pvVar17 = _pthread_getspecific((pthread_key_t)pcVar24);
      if (pvVar17 == (void *)0x0) {
LAB_017ada92:
        pcVar13 = local_50;
        if (*(code **)(local_50 + 0x48) != local_90) {
LAB_017adaa3:
          FUN_00d64850();
          pcVar2 = *(code **)(pcVar13 + 0x48);
          if (pcVar2 != local_90) {
            if (local_90 != (code *)0x0) {
              FUN_00d50b00();
            }
            *(code **)(pcVar13 + 0x48) = local_90;
            if (pcVar2 != (code *)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_00d64910();
        }
      }
      else {
        local_a0 = (code *)0x0;
        lVar20 = FUN_00e8b990();
        if (lVar20 == 0) goto LAB_017ada92;
        pcVar24 = local_50;
        pcVar13 = *(code **)(local_50 + (ulonglong)(*(uint *)(lVar20 + 0x154) & 1) * 8 + 0x20);
        if (*(code **)(*(code **)(local_50 + (ulonglong)(*(uint *)(lVar20 + 0x154) & 1) * 8 + 0x20)
                      + 0x48) != local_90) goto LAB_017adaa3;
      }
      local_a0 = (code *)0x0;
      pvVar17 = _pthread_getspecific((pthread_key_t)pcVar24);
      if (pvVar17 == (void *)0x0) {
LAB_017adb5d:
        lVar20 = *(longlong *)(local_50 + 0x40);
        pcVar13 = local_50;
      }
      else {
        local_a0 = (code *)0x0;
        lVar20 = FUN_00e8b990();
        if (lVar20 == 0) goto LAB_017adb5d;
        pcVar13 = *(code **)(local_50 + (ulonglong)(*(uint *)(lVar20 + 0x154) & 1) * 8 + 0x20);
        lVar20 = *(longlong *)(pcVar13 + 0x40);
        pcVar24 = local_50;
      }
      pVar11 = (pthread_key_t)pcVar24;
      if (lVar20 != lVar30) {
        FUN_00d64850();
        lVar20 = *(longlong *)(pcVar13 + 0x40);
        if (lVar20 != lVar30) {
          if (lVar30 != 0) {
            FUN_00d50b00();
          }
          *(longlong *)(pcVar13 + 0x40) = lVar30;
          if (lVar20 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d64910();
      }
      if (puVar15 != (undefined8 *)0x0) {
        local_78[0] = '\0';
        local_80 = (code *)0x0;
        local_68 = 0xffffffff;
        local_60 = 0;
        local_68._4_4_ = 0;
        local_70 = puVar15;
        while( true ) {
          if (local_68._4_4_ != 0) {
            if (local_68._4_4_ < 1) {
              iVar26 = -local_68._4_4_;
            }
            else {
              iVar26 = (int)local_68 - local_68._4_4_;
              local_68 = CONCAT44(local_68._4_4_,iVar26);
              FUN_00d23690();
              local_60 = local_60 + local_68._4_4_;
              iVar26 = 0;
            }
            local_68 = CONCAT44(iVar26,(int)local_68);
          }
          lVar20 = (longlong)(int)local_68;
          iVar26 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar26);
          if (*(int *)((longlong)local_70 + 0xc) <= iVar26) break;
          local_80 = *(code **)(local_70[2] + 8 + lVar20 * 8);
          pvVar17 = _pthread_getspecific((pthread_key_t)local_70[2]);
          if (pvVar17 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_350 = local_80;
          local_348 = '\0';
          FUN_0176fde0();
          if ((local_348 != '\0') && (local_350 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
        puVar16 = local_70;
        FUN_01777940();
        pVar11 = (pthread_key_t)puVar16;
      }
      local_a0 = (code *)0x0;
      pvVar17 = _pthread_getspecific(pVar11);
      if (pvVar17 != (void *)0x0) {
        local_a0 = (code *)0x0;
        lVar20 = FUN_00e8b990();
        if (lVar20 != 0) {
          pVar11 = (pthread_key_t)pcVar19;
        }
      }
      bVar27 = (byte)local_38 & bVar31 & bVar3;
      local_38 = CONCAT31(local_38._1_3_,bVar27);
      local_a0 = (code *)0x0;
      FUN_01770880();
      local_a0 = (code *)0x0;
      pvVar17 = _pthread_getspecific(pVar11);
      if (pvVar17 != (void *)0x0) {
        local_a0 = (code *)0x0;
        lVar20 = FUN_00e8b990();
        if (lVar20 != 0) {
          pVar11 = (pthread_key_t)local_98;
        }
      }
      local_340 = local_90;
      local_338 = '\0';
      FUN_01735c40();
      if ((local_338 != '\0') && (local_340 != (code *)0x0)) {
        FUN_00d50b20();
      }
      local_a0 = (code *)0x0;
      pvVar17 = _pthread_getspecific(pVar11);
      if (pvVar17 != (void *)0x0) {
        local_a0 = (code *)0x0;
        lVar20 = FUN_00e8b990();
        if (lVar20 != 0) {
          pVar11 = (pthread_key_t)local_98;
        }
      }
      local_330 = local_88;
      local_328 = '\0';
      FUN_01735120();
      if ((local_328 != '\0') && (local_330 != (code *)0x0)) {
        FUN_00d50b20();
      }
      local_a0 = (code *)0x0;
      pvVar17 = _pthread_getspecific(pVar11);
      if (pvVar17 != (void *)0x0) {
        local_a0 = (code *)0x0;
        lVar20 = FUN_00e8b990();
        if (lVar20 != 0) {
          pVar11 = (pthread_key_t)local_98;
        }
      }
      local_a0 = (code *)0x0;
      FUN_01736d20();
      uVar12 = iVar29 - (uint)bVar27;
      if ((int)uVar12 < 1) {
        puVar16 = (undefined8 *)0x0;
        local_a0 = (code *)0x0;
      }
      else {
        local_168 = DAT_025fe688;
        uVar28 = 0;
        local_a0 = (code *)0x0;
        puVar16 = (undefined8 *)0x0;
        pcVar13 = DAT_025fe688;
        do {
          puVar22 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar22 = &DAT_025fe670;
          puVar22[7] = 0;
          puVar22[8] = 0;
          puVar22[9] = 0;
          uVar35 = (*local_168)();
          uVar23 = (undefined7)((ulonglong)uVar35 >> 8);
          if (puVar22 == puVar16) {
            puVar22 = puVar16;
            if ((char)local_a0 == '\0') {
              local_a0 = (code *)CONCAT71(uVar23,1);
            }
            else {
              FUN_00d50b20();
            }
          }
          else {
            bVar31 = (char)local_a0 != '\0';
            local_a0 = (code *)CONCAT71(uVar23,1);
            if ((bVar31) && (puVar16 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
          puVar16 = puVar22;
          pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
          if (pvVar17 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar20 = *(longlong *)(puVar15[2] + uVar28 * 8);
          local_238 = 0;
          if (lVar20 != 0) {
            FUN_00d50b00();
          }
          local_238 = '\x01';
          local_240 = lVar20;
          FUN_017b2860();
          pcVar24 = local_80;
          local_1e0 = 0;
          if (local_78[0] == '\0') {
            if (local_80 != (code *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78[0] = '\0';
          }
          local_1e0 = '\x01';
          local_1e8 = pcVar24;
          FUN_017395b0();
          if ((local_1e0 != '\0') && (local_1e8 != (code *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_238 != '\0') && (local_240 != 0)) {
            FUN_00d50b20();
          }
          pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
          if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
            pcVar13 = local_98;
          }
          local_318 = '\0';
          local_320 = puVar16;
          FUN_01735cb0();
          if ((local_318 != '\0') && (local_320 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          pVar11 = (pthread_key_t)pcVar13;
          uVar28 = uVar28 + 1;
        } while (uVar12 != uVar28);
      }
      pvVar17 = _pthread_getspecific(pVar11);
      if (pvVar17 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_308 = '\0';
      pcVar13 = pcVar19;
      local_310 = pcVar19;
      FUN_0173b720();
      if ((local_308 != '\0') && (local_310 != (code *)0x0)) {
        FUN_00d50b20();
      }
      pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
      if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
        pcVar13 = local_48;
      }
      local_300 = local_98;
      local_2f8 = '\0';
      FUN_0173b680();
      if ((local_2f8 != '\0') && (local_300 != (code *)0x0)) {
        FUN_00d50b20();
      }
      pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
      if ((pvVar17 == (void *)0x0) || (lVar20 = FUN_00e8b990(), lVar20 == 0)) {
        pcVar2 = *(code **)(local_50 + 0x50);
        pcVar24 = local_50;
      }
      else {
        pcVar24 = *(code **)(local_50 + (ulonglong)(*(uint *)(lVar20 + 0x154) & 1) * 8 + 0x20);
        pcVar2 = *(code **)(pcVar24 + 0x50);
        pcVar13 = local_50;
      }
      if (pcVar2 != local_e8) {
        FUN_00d64850();
        pcVar2 = *(code **)(pcVar24 + 0x50);
        if (pcVar2 != local_e8) {
          if (local_e8 != (code *)0x0) {
            FUN_00d50b00();
          }
          *(code **)(pcVar24 + 0x50) = local_e8;
          if (pcVar2 != (code *)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_00d64910();
      }
      pVar11 = (pthread_key_t)pcVar13;
      if ((byte)local_38 == '\0') {
        if (0 < (int)uVar12) {
          uVar38 = 0;
          uVar39 = 0;
          uVar40 = 0;
          uVar28 = 0;
          fVar32 = DAT_02415634;
          do {
            local_168 = (code *)CONCAT44(uVar38,fVar32);
            uStack_160 = uVar39;
            uStack_15c = uVar40;
            pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
            if (pvVar17 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar34 = FUN_01779ec0();
            fVar32 = (float)local_168;
            uVar38 = local_168._4_4_;
            uVar39 = uStack_160;
            uVar40 = uStack_15c;
            if ((float)(uVar34 & _DAT_02390140) < (float)local_168) {
              pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar35 = FUN_01779ec0();
              fVar32 = (float)((uint)uVar35 & _DAT_02390140);
              uVar38 = (uint)((ulonglong)uVar35 >> 0x20) & _UNK_02390144;
              uVar39 = (uint)extraout_XMM0_Qb_00 & _UNK_02390148;
              uVar40 = (uint)((ulonglong)extraout_XMM0_Qb_00 >> 0x20) & _UNK_0239014c;
            }
            pVar11 = (pthread_key_t)pcVar13;
            uVar28 = uVar28 + 1;
          } while (uVar12 != uVar28);
        }
        pvVar17 = _pthread_getspecific(pVar11);
        if (pvVar17 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01770eb0();
        pvVar17 = _pthread_getspecific(pVar11);
        if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
          pVar11 = (pthread_key_t)local_98;
        }
        FUN_01736de0();
        pvVar17 = _pthread_getspecific(pVar11);
        if (pvVar17 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01736c00();
        pcVar13 = (code *)((longlong)&segment_command_00000020.vmaddr + 4);
        local_40 = 0;
      }
      else {
        pcVar13 = (code *)0xfff0bdc0;
      }
      pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
      if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
        pcVar13 = pcVar19;
      }
      FUN_01770300();
      pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
      if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
        pcVar13 = pcVar19;
      }
      FUN_01770230();
      pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
      if ((pvVar17 == (void *)0x0) || (lVar20 = FUN_00e8b990(), lVar20 == 0)) {
        cVar1 = local_50[0x58];
        pcVar24 = local_50;
      }
      else {
        pcVar24 = *(code **)(local_50 + (ulonglong)(*(uint *)(lVar20 + 0x154) & 1) * 8 + 0x20);
        cVar1 = pcVar24[0x58];
        pcVar13 = local_50;
      }
      if (cVar1 != (code)0x1) {
        FUN_00d64850();
        pcVar24[0x58] = (code)0x1;
        FUN_00d64910();
      }
      pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
      if ((pvVar17 == (void *)0x0) || (lVar20 = FUN_00e8b990(), lVar20 == 0)) {
        cVar1 = local_50[0x59];
        pcVar24 = local_50;
      }
      else {
        pcVar24 = *(code **)(local_50 + (ulonglong)(*(uint *)(lVar20 + 0x154) & 1) * 8 + 0x20);
        cVar1 = pcVar24[0x59];
        pcVar13 = local_50;
      }
      if (cVar1 != (code)0x1) {
        FUN_00d64850();
        pcVar24[0x59] = (code)0x1;
        FUN_00d64910();
      }
      pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
      if ((pvVar17 == (void *)0x0) || (lVar20 = FUN_00e8b990(), lVar20 == 0)) {
        cVar1 = local_50[0x5a];
        pcVar24 = local_50;
      }
      else {
        pcVar24 = *(code **)(local_50 + (ulonglong)(*(uint *)(lVar20 + 0x154) & 1) * 8 + 0x20);
        cVar1 = pcVar24[0x5a];
        pcVar13 = local_50;
      }
      if (cVar1 != (code)0x0) {
        FUN_00d64850();
        pcVar24[0x5a] = (code)0x0;
        FUN_00d64910();
      }
      pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
      if ((pvVar17 == (void *)0x0) || (lVar20 = FUN_00e8b990(), lVar20 == 0)) {
        cVar1 = local_50[0x5b];
        pcVar24 = local_50;
      }
      else {
        pcVar24 = *(code **)(local_50 + (ulonglong)(*(uint *)(lVar20 + 0x154) & 1) * 8 + 0x20);
        cVar1 = pcVar24[0x5b];
        pcVar13 = local_50;
      }
      if (cVar1 != (code)0x0) {
        FUN_00d64850();
        pcVar24[0x5b] = (code)0x0;
        FUN_00d64910();
      }
      pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
      if ((pvVar17 == (void *)0x0) || (lVar20 = FUN_00e8b990(), lVar20 == 0)) {
        cVar1 = local_50[0x5c];
        pcVar24 = local_50;
      }
      else {
        pcVar24 = *(code **)(local_50 + (ulonglong)(*(uint *)(lVar20 + 0x154) & 1) * 8 + 0x20);
        cVar1 = pcVar24[0x5c];
        pcVar13 = local_50;
      }
      if (cVar1 != (code)0x0) {
        FUN_00d64850();
        pcVar24[0x5c] = (code)0x0;
        FUN_00d64910();
      }
      lVar20 = DAT_027d2ad0;
      if (DAT_027d2ad0 != 0) {
        FUN_00d50b00();
      }
      local_178 = lVar20;
      local_170 = '\x01';
      cVar9 = (**(code **)(*(longlong *)local_90 + 0x50))();
      if (cVar9 == '\0') {
        pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
        if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
          pcVar13 = local_48;
        }
        cVar9 = FUN_0173f680();
        if (cVar9 == '\0') {
          if ((local_170 != '\0') && (local_178 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
          if (pvVar17 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar9 = FUN_017708d0();
          if (cVar9 == '\0') {
            if ((local_170 != '\0') && (local_178 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if ((local_170 != '\0') && (local_178 != 0)) {
              FUN_00d50b20();
            }
            if (uVar12 == 0xc) {
              FUN_0173ba80();
              pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0173b6f0();
              pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01736e70();
              pcVar24 = local_80;
              if (local_78[0] == '\0') {
                if (((local_80 != (code *)0x0) && (FUN_00d50b00(), local_78[0] != '\0')) &&
                   (local_80 != (code *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_78[0] = '\0';
              }
              if ((local_a8 != '\0') && (local_b0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_130 != '\0') && (pcVar25 != (code *)0x0)) {
                FUN_00d50b20();
              }
              local_168 = pcVar24;
              pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
              if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
                pcVar13 = local_48;
              }
              FUN_0173b6f0();
              pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01736e70();
              pcVar24 = local_80;
              if (local_78[0] == '\0') {
                if (((local_80 != (code *)0x0) && (FUN_00d50b00(), local_78[0] != '\0')) &&
                   (local_80 != (code *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_78[0] = '\0';
              }
              if ((local_a8 != '\0') && (local_b0 != 0)) {
                FUN_00d50b20();
              }
              if (0 < *(int *)(pcVar24 + 0xc)) {
                lVar20 = 0;
                do {
                  pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
                  if (pvVar17 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
                  if (pvVar17 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01739580();
                  pcVar2 = local_80;
                  local_1d0 = 0;
                  if (local_78[0] == '\0') {
                    if (local_80 != (code *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_78[0] = '\0';
                  }
                  local_1d0 = '\x01';
                  local_1d8 = pcVar2;
                  FUN_017395b0();
                  if ((local_1d0 != '\0') && (local_1d8 != (code *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
                    FUN_00d50b20();
                  }
                  lVar20 = lVar20 + 1;
                } while (lVar20 < *(int *)(pcVar24 + 0xc));
              }
              pcVar24 = local_50;
              pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
              if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
                pcVar13 = local_98;
              }
              FUN_0173ba80();
              pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0173b6f0();
              pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01736d70();
              local_1c8 = local_80;
              local_1c0 = 0;
              if (local_78[0] == '\0') {
                if (local_80 != (code *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_78[0] = '\0';
              }
              local_1c0 = '\x01';
              FUN_01735c40();
              if ((local_1c0 != '\0') && (local_1c8 != (code *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_a8 != '\0') && (local_b0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_130 != '\0') && (pcVar25 != (code *)0x0)) {
                FUN_00d50b20();
              }
              pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
              if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
                pcVar13 = local_98;
              }
              FUN_0173ba80();
              pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0173b6f0();
              pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01736da0();
              local_1b8 = local_80;
              local_1b0 = 0;
              if (local_78[0] == '\0') {
                if (local_80 != (code *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_78[0] = '\0';
              }
              local_1b0 = '\x01';
              FUN_01735120();
              if ((local_1b0 != '\0') && (local_1b8 != (code *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_a8 != '\0') && (local_b0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_130 != '\0') && (pcVar25 != (code *)0x0)) {
                FUN_00d50b20();
              }
              pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
              if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
                pcVar24 = *(code **)(pcVar24 + (ulonglong)(*(uint *)(lVar20 + 0x154) & 1) * 8 + 0x20
                                    );
              }
              if (pcVar24[0x59] != (code)0x0) {
                FUN_00d64850();
                pcVar24[0x59] = (code)0x0;
                FUN_00d64910();
              }
              FUN_00d50b20();
              if (local_168 != (code *)0x0) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
      else if ((local_170 != '\0') && (local_178 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 & 1) != 0) {
        pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
        if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
          pcVar13 = local_48;
        }
        FUN_01758890();
      }
      pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
      if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
        pcVar13 = local_48;
      }
      FUN_0173b790();
      pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
      if (pvVar17 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01775c40();
      if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
        FUN_00d50b20();
      }
      pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
      if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
        pcVar13 = local_48;
      }
      FUN_0174bd90();
      pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
      if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
        pcVar13 = local_48;
      }
      cVar9 = FUN_0173f680();
      if (cVar9 == '\0') {
        pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
        if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
          pcVar13 = local_98;
        }
        FUN_01736c00();
      }
      pvVar17 = _pthread_getspecific((pthread_key_t)pcVar13);
      if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
        pcVar13 = pcVar19;
      }
      cVar9 = FUN_017731a0();
      pVar11 = (pthread_key_t)pcVar13;
      if (cVar9 == '\0') {
LAB_017af447:
        pvVar17 = _pthread_getspecific(pVar11);
        if (pvVar17 != (void *)0x0) {
          FUN_00e8b990();
        }
        pcVar13 = local_50;
        local_2b0 = local_90;
        local_2a8 = '\0';
        FUN_0176fd70();
        if ((local_2a8 != '\0') && (local_2b0 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar17 = _pthread_getspecific(pVar11);
        if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
          pcVar13 = local_48;
        }
        cVar9 = FUN_0173f680();
        pVar11 = (pthread_key_t)pcVar13;
        if (cVar9 == '\0') goto LAB_017af447;
        FUN_00d99d60();
        pcVar25 = local_80;
        local_2f0 = DAT_027d2ad8;
        if (DAT_027d2ad8 != 0) {
          FUN_00d50b00();
        }
        local_2e8 = '\x01';
        cVar9 = (**(code **)(*(longlong *)pcVar25 + 0x50))();
        if ((local_2e8 != '\0') && (local_2f0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
          FUN_00d50b20();
        }
        pVar11 = (pthread_key_t)pcVar13;
        if (cVar9 == '\0') {
          pvVar17 = _pthread_getspecific(pVar11);
          pcVar25 = local_50;
          if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), pcVar25 = local_50, lVar20 != 0)
             ) {
            pcVar13 = local_50;
            pcVar25 = *(code **)(local_50 + (ulonglong)(*(uint *)(lVar20 + 0x154) & 1) * 8 + 0x20);
          }
          pVar11 = (pthread_key_t)pcVar13;
          if (pcVar25[0x58] != (code)0x0) {
            FUN_00d64850();
            pcVar25[0x58] = (code)0x0;
            FUN_00d64910();
          }
        }
        pvVar17 = _pthread_getspecific(pVar11);
        if (pvVar17 != (void *)0x0) {
          FUN_00e8b990();
        }
        pcVar13 = local_50;
        lVar20 = DAT_027cd5a0;
        if (DAT_027cd5a0 != 0) {
          FUN_00d50b00();
        }
        lVar7 = DAT_027cd5c0;
        local_2e0 = lVar20;
        local_2d8 = '\x01';
        if (DAT_027cd5c0 != 0) {
          FUN_00d50b00();
        }
        local_2d0 = lVar7;
        local_2c8 = '\x01';
        local_2c0 = 0;
        local_2b8 = '\0';
        FUN_00d31230(&local_2c0,&local_2d0);
        local_1a8 = local_80;
        local_1a0 = 0;
        if (local_78[0] == '\0') {
          if (local_80 != (code *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78[0] = '\0';
        }
        local_1a0 = '\x01';
        FUN_0176fd70();
        if ((local_1a0 != '\0') && (local_1a8 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_2b8 != '\0') && (local_2c0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_2c8 != '\0') && (local_2d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_2d8 != '\0') && (local_2e0 != 0)) {
          FUN_00d50b20();
        }
      }
      local_2a0 = local_b8;
      local_298 = '\0';
      uVar35 = FUN_00ddb860();
      pcVar25 = local_80;
      if (local_78[0] == '\0') {
        if (((local_80 != (code *)0x0) && (uVar35 = FUN_00d50b00(), local_78[0] != '\0')) &&
           (local_80 != (code *)0x0)) {
          uVar35 = FUN_00d50b20();
        }
      }
      else {
        local_78[0] = '\0';
      }
      if ((local_298 != '\0') && (local_2a0 != (code *)0x0)) {
        uVar35 = FUN_00d50b20();
      }
      lVar20 = DAT_026d7d30;
      if (DAT_026d7d30 != 0) {
        uVar35 = FUN_00d50b00();
      }
      local_290 = lVar20;
      local_288 = '\x01';
      cVar9 = (**(code **)(*(longlong *)pcVar25 + 0x3b0))(uVar35,0);
      if ((local_288 != '\0') && (local_290 != 0)) {
        FUN_00d50b20();
      }
      lVar20 = DAT_026d7d30;
      if (cVar9 != '\0') {
        if (DAT_026d7d30 != 0) {
          FUN_00d50b00();
        }
        local_280 = lVar20;
        local_278 = '\x01';
        (**(code **)(*(longlong *)pcVar25 + 1000))(0,0);
        if ((local_278 != '\0') && (local_280 != 0)) {
          FUN_00d50b20();
        }
        uVar35 = FUN_00d95590();
        local_198 = local_80;
        local_190 = 0;
        if (local_78[0] == '\0') {
          if (local_80 != (code *)0x0) {
            uVar35 = FUN_00d50b00();
          }
        }
        else {
          local_78[0] = '\0';
        }
        local_190 = '\x01';
        (**(code **)(*(longlong *)pcVar25 + 0x3e0))(uVar35,0);
        if ((local_190 != '\0') && (local_198 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_78[0] != '\0') && (local_80 != (code *)0x0)) {
          FUN_00d50b20();
        }
        lVar20 = DAT_026d8918;
        if (DAT_026d8918 != 0) {
          FUN_00d50b00();
        }
        local_270 = lVar20;
        local_268 = '\x01';
        uVar35 = 0;
        cVar9 = (**(code **)(*(longlong *)pcVar25 + 1000))(0,0);
        if ((local_268 != '\0') && (local_270 != 0)) {
          FUN_00d50b20();
        }
        if (cVar9 != '\0') {
          bVar27 = (**(code **)(*(longlong *)pcVar25 + 0x470))();
          pVar11 = (pthread_key_t)
                   CONCAT71((int7)((ulonglong)uVar35 >> 8),DAT_02394240 < local_80._0_4_);
          if ((bVar27 & DAT_02394240 < local_80._0_4_) != 0) {
            fVar32 = (float)_logf(local_80._0_4_ * DAT_02394204);
            local_168 = (code *)CONCAT44(local_168._4_4_,fVar32 * DAT_02394208);
            if (!NAN(fVar32 * DAT_02394208)) {
              pvVar17 = _pthread_getspecific(pVar11);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_00e7d780((float)local_168 / DAT_023908e0);
              FUN_01770300();
              pvVar17 = _pthread_getspecific(pVar11);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01770230();
              pvVar17 = _pthread_getspecific(pVar11);
              pcVar25 = pcVar13;
              if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
                pcVar25 = *(code **)(pcVar13 + (ulonglong)(*(uint *)(lVar20 + 0x154) & 1) * 8 + 0x20
                                    );
              }
              if (pcVar25[0x5a] != (code)0x1) {
                FUN_00d64850();
                pcVar25[0x5a] = (code)0x1;
                FUN_00d64910();
              }
              pvVar17 = _pthread_getspecific(pVar11);
              pcVar25 = pcVar13;
              if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
                pcVar25 = *(code **)(pcVar13 + (ulonglong)(*(uint *)(lVar20 + 0x154) & 1) * 8 + 0x20
                                    );
              }
              if (pcVar25[0x5b] != (code)0x1) {
                FUN_00d64850();
                pcVar25[0x5b] = (code)0x1;
                FUN_00d64910();
              }
            }
          }
        }
      }
      FUN_00d50b20();
      lVar20 = local_230;
      pcVar25 = local_248;
      if (((char)local_a0 != '\0') && (puVar16 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (local_98 != (code *)0x0) {
        FUN_00d50b20();
      }
      if (pcVar19 != (code *)0x0) {
        FUN_00d50b20();
      }
      if (lVar20 != 0) {
        FUN_00d50b20();
      }
      if (lVar30 != 0) {
        FUN_00d50b20();
      }
      if (local_90 != (code *)0x0) {
        FUN_00d50b20();
      }
      if (local_88 != (code *)0x0) {
        FUN_00d50b20();
      }
      if (pcVar18 != (code *)0x0) {
        FUN_00d50b20();
      }
      bVar31 = false;
      bVar3 = true;
      if (pcVar25 != (code *)0x0) {
        FUN_00d50b20();
      }
LAB_017afaed:
      if (puVar15 != (undefined8 *)0x0) goto LAB_017afaf9;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      bVar31 = true;
      local_48 = (code *)0x0;
      bVar3 = false;
LAB_017afaf9:
      FUN_00d50b20();
    }
    if (plVar14 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (pcVar8 != (code *)0x0) goto LAB_017afb19;
  }
  if ((bVar6) && (local_b8 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar5) && (local_e8 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  bVar31 = !bVar31;
  if (bVar31) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = pcVar13;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  FUN_00d50b20();
  if ((bVar3) && (local_48 != (code *)0x0)) {
    FUN_00d50b20();
  }
LAB_017afbc3:
  if ((!bVar31) && (pcVar13 != (code *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


