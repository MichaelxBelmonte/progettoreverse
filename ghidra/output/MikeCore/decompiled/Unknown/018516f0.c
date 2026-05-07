// Function: FUN_018516f0
// Address: 018516f0
// Size: 19056 bytes
// Class: Unknown


/* WARNING: Type propagation algorithm not settling */

void FUN_018516f0(ulonglong param_1,longlong *param_2,undefined4 param_3,longlong *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  int *piVar4;
  longlong *plVar5;
  code *pcVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  void *pvVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  char *pcVar18;
  longlong lVar19;
  char *pcVar20;
  longlong *plVar21;
  pthread_key_t pVar22;
  longlong **pplVar23;
  byte *pbVar24;
  byte bVar25;
  ulonglong uVar26;
  bool bVar27;
  int iVar28;
  int iVar29;
  longlong unaff_RSI;
  ulonglong uVar30;
  longlong *unaff_RDI;
  longlong *plVar31;
  undefined7 uVar32;
  longlong *plVar33;
  longlong lVar34;
  longlong lVar35;
  pthread_key_t *ppVar36;
  longlong lVar37;
  bool bVar38;
  bool bVar39;
  float fVar40;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 uVar41;
  char *local_res8;
  byte local_res10;
  char *in_stack_fffffffffffffc28;
  longlong *local_3c8;
  undefined1 local_3c0;
  longlong local_3b8;
  undefined1 local_3b0;
  longlong local_3a8;
  undefined1 local_3a0;
  longlong local_398;
  undefined1 local_390;
  longlong local_388;
  undefined1 local_380;
  longlong local_378;
  undefined1 local_370;
  longlong local_368;
  undefined1 local_360;
  longlong local_358;
  undefined1 local_350;
  longlong local_348;
  undefined1 local_340;
  longlong local_338;
  undefined1 local_330;
  longlong local_328;
  undefined1 local_320;
  longlong *local_318;
  undefined1 local_310;
  longlong *local_308;
  undefined1 local_300;
  longlong local_2f8;
  undefined1 local_2f0;
  longlong local_2e8;
  undefined1 local_2e0;
  longlong *local_2d8;
  undefined1 local_2d0;
  longlong *local_2c8;
  undefined1 local_2c0;
  longlong local_2b8;
  undefined1 local_2b0;
  longlong *local_2a8;
  undefined1 local_2a0;
  longlong local_298;
  undefined1 local_290;
  longlong local_288;
  undefined1 local_280;
  ulonglong local_278;
  code *local_270;
  undefined *local_268;
  longlong *local_260;
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
  char local_1e8;
  longlong *local_1e0;
  char local_1d8;
  longlong *local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  uint local_18c;
  longlong *local_188;
  ulonglong local_180;
  longlong *local_178;
  ulonglong local_170;
  int iStack_14c;
  int iStack_144;
  longlong *local_130;
  int local_114;
  undefined8 local_f0;
  pthread_key_t *local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  ulonglong local_b0;
  char local_a4;
  char local_a3;
  byte local_a2;
  byte local_a1;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  char local_82;
  byte local_81;
  ulonglong local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40 [8];
  
  bVar38 = (ulonglong)param_2 >> 0x20 != 0;
  pVar22 = (pthread_key_t)(param_1 >> 0x20);
  bVar39 = param_1 >> 0x20 != 0;
  bVar27 = bVar39 && bVar38;
  local_a0 = (longlong *)FUN_00e7bdb0();
  local_c0 = (longlong *)FUN_00e7bdb0();
  local_180 = param_1;
  local_178 = param_2;
  local_170 = param_1;
  local_130 = param_2;
  local_a1 = bVar27;
  if (bVar39 && bVar38) {
    pvVar14 = _pthread_getspecific(pVar22);
    if (pvVar14 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = (longlong *)FUN_016caaa0();
    FUN_00e7c860();
    local_a0 = (longlong *)FUN_00e7cc50();
    pvVar14 = _pthread_getspecific(pVar22);
    if (pvVar14 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = (longlong *)FUN_016caaa0();
    FUN_00e7c860();
    local_c0 = (longlong *)FUN_00e7cc50();
    local_f0 = CONCAT44(local_f0._4_4_,1);
    local_48 = local_a0;
    FUN_00e7c260();
    local_70 = local_48;
    if (((local_c0._4_4_ != 0) && ((ulonglong)local_48 >> 0x20 != 0)) &&
       (cVar7 = FUN_00e7c020(), cVar7 != '\0')) {
      local_70 = (longlong *)CONCAT44(local_70._4_4_,1);
      local_48 = local_a0;
      FUN_00e7c260();
      local_c0 = local_48;
    }
    pvVar14 = _pthread_getspecific(pVar22);
    if (pvVar14 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_130 = (longlong *)FUN_016c4760();
    pvVar14 = _pthread_getspecific(pVar22);
    if (pvVar14 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_170 = FUN_016c4760();
  }
  pvVar14 = _pthread_getspecific(pVar22);
  if (pvVar14 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_81 = FUN_01787440();
  pvVar14 = _pthread_getspecific(pVar22);
  if (pvVar14 != (void *)0x0) {
    FUN_00e8b990();
  }
  bVar8 = (byte)param_3 & local_a1;
  local_82 = FUN_017873e0();
  pcVar6 = DAT_025683d8;
  local_e8 = (pthread_key_t *)(unaff_RSI + 0x34);
  local_e0 = unaff_RSI + 0x3c;
  local_98 = (longlong *)(unaff_RSI + 200);
  local_270 = DAT_02572370;
  uVar17 = CONCAT71((int7)((ulonglong)DAT_02572370 >> 8),1);
  local_50 = (longlong *)CONCAT44(local_50._4_4_,DAT_0240b530);
  local_80 = 0;
  do {
    local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,(int)uVar17);
    plVar15 = (longlong *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar15 = (longlong)&DAT_025683c0;
    (*pcVar6)();
    FUN_00c92170();
    local_60 = plVar15;
    FUN_00c92160();
    puVar16 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar16 = &DAT_025683c0;
    (*pcVar6)();
    FUN_00c92170();
    FUN_00c92160();
    local_b8 = puVar16;
    if (bVar8 == 0) {
      if (0 < (int)*local_e8) {
        lVar37 = 0;
        do {
          pVar22 = (pthread_key_t)uVar17;
          local_48 = (longlong *)FUN_00e7bcc0();
          FUN_00e7b820();
          local_70 = local_48;
          pvVar14 = _pthread_getspecific(pVar22);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar17 = 0;
          local_48 = (longlong *)FUN_016c4630(0,1);
          if (((local_70._4_4_ == 0) || ((ulonglong)local_48 >> 0x20 == 0)) ||
             (cVar7 = FUN_00e7c000(), fVar40 = extraout_XMM0_Da_04, cVar7 == '\0')) {
            fVar40 = *(float *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x58) + 0x10) + lVar37 * 4);
            if (local_50._0_4_ < fVar40) goto LAB_01851d40;
            if ((local_a0._4_4_ != 0) && (local_70._4_4_ != 0)) {
              cVar7 = FUN_00e7c000();
              fVar40 = extraout_XMM0_Da_05;
              if (cVar7 != '\0') goto LAB_01851d40;
            }
            if (((local_c0._4_4_ != 0) && (local_70._4_4_ != 0)) &&
               (cVar7 = FUN_00e7c000(), fVar40 = extraout_XMM0_Da_06, cVar7 != '\0'))
            goto LAB_01851d40;
          }
          else {
LAB_01851d40:
            iVar28 = *(int *)(local_b8 + 3);
            FUN_00c8e340(fVar40,1);
            *(int *)(local_b8[2] + (longlong)iVar28) = (int)lVar37;
          }
          lVar37 = lVar37 + 1;
        } while (lVar37 < (int)*local_e8);
      }
    }
    else if (0 < (int)*local_e8) {
      lVar37 = 0;
      do {
        pVar22 = (pthread_key_t)uVar17;
        local_48 = (longlong *)FUN_00e7bcc0();
        FUN_00e7b820();
        local_70 = local_48;
        pvVar14 = _pthread_getspecific(pVar22);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar17 = 0;
        local_48 = (longlong *)FUN_016c4630(0,1);
        if (((local_70._4_4_ == 0) || ((ulonglong)local_48 >> 0x20 == 0)) ||
           (cVar7 = FUN_00e7c000(), fVar40 = extraout_XMM0_Da, cVar7 == '\0')) {
          fVar40 = *(float *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x58) + 0x10) + lVar37 * 4);
          if (local_50._0_4_ < fVar40) goto LAB_01851c72;
          if (local_70._4_4_ != 0) {
            if (local_a0._4_4_ != 0) {
              cVar7 = FUN_00e7c000();
              fVar40 = extraout_XMM0_Da_02;
              if (cVar7 != '\0') goto LAB_01851c72;
              if (local_70._4_4_ == 0) goto LAB_01851ba7;
            }
            bVar38 = true;
            if ((local_c0._4_4_ != 0) &&
               (cVar7 = FUN_00e7c000(), fVar40 = extraout_XMM0_Da_03, cVar7 != '\0'))
            goto LAB_01851c72;
            goto LAB_01851c74;
          }
        }
        else {
LAB_01851c72:
          bVar38 = false;
LAB_01851c74:
          if ((((local_70._4_4_ == 0) || (local_a0._4_4_ == 0)) ||
              (cVar7 = FUN_00e7c020(), fVar40 = extraout_XMM0_Da_00, cVar7 == '\0')) ||
             ((local_70._4_4_ == 0 || (local_c0._4_4_ == 0)))) {
            if (!bVar38) goto LAB_01851b80;
          }
          else {
            cVar7 = FUN_00e7c020();
            fVar40 = extraout_XMM0_Da_01;
            if (!bVar38 && cVar7 == '\0') {
LAB_01851b80:
              iVar28 = *(int *)(local_b8 + 3);
              FUN_00c8e340(fVar40,1);
              *(int *)(local_b8[2] + (longlong)iVar28) = (int)lVar37;
            }
          }
        }
LAB_01851ba7:
        lVar37 = lVar37 + 1;
      } while (lVar37 < (int)*local_e8);
    }
    if (3 < *(int *)(local_b8 + 3)) {
      lVar37 = 0;
      do {
        plVar15 = local_60;
        uVar17 = FUN_00e7b4e0();
        lVar34 = plVar15[3];
        FUN_00c8e340(extraout_XMM0_Da_07,1);
        lVar37 = lVar37 + 1;
        *(undefined8 *)(plVar15[2] + (longlong)(int)lVar34) = uVar17;
        iVar28 = *(int *)(local_b8 + 3);
        iVar10 = iVar28 + 3;
        if (-1 < iVar28) {
          iVar10 = iVar28;
        }
      } while (lVar37 < iVar10 >> 2);
    }
    uVar12 = *(uint *)(local_60 + 3);
    local_b0 = (ulonglong)uVar12;
    uVar13 = uVar12 + 7;
    if (-1 < (int)uVar12) {
      uVar13 = uVar12;
    }
    local_a4 = '\0';
    local_a3 = '\0';
    puVar16 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    local_268 = &DAT_02572358;
    *puVar16 = &DAT_02572358;
    (*local_270)();
    lVar37 = *local_98;
    *local_98 = (longlong)puVar16;
    if (lVar37 != 0) {
      FUN_00d50b20();
    }
    plVar15 = (longlong *)(ulonglong)(uint)((int)uVar13 >> 3);
    local_90 = plVar15;
    if (7 < (int)local_b0) {
      plVar33 = (longlong *)0x0;
      do {
        plVar15 = (longlong *)FUN_0187ff80();
        (**(code **)(*plVar15 + 0x18))();
        uVar17 = FUN_00e7bcc0();
        *(undefined8 *)((longlong)plVar15 + 0xc) = uVar17;
        uVar17 = FUN_00e7bcc0();
        *(undefined8 *)((longlong)plVar15 + 0x14) = uVar17;
        local_40[0] = '\0';
        local_48 = plVar15;
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar15 = (longlong *)FUN_00d50b20();
        plVar33 = (longlong *)((longlong)plVar33 + 1);
      } while (local_90 != plVar33);
    }
    cVar7 = '\0';
    local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
    iVar28 = 0;
LAB_01852070:
    local_c8 = (longlong *)CONCAT44(local_c8._4_4_,iVar28);
    bVar38 = iVar28 == 2;
    pcVar18 = (char *)CONCAT71((int7)((ulonglong)plVar15 >> 8),bVar38);
    pplVar23 = (longlong **)0x0;
    bVar25 = iVar28 != 1;
    if (bVar38) {
      bVar25 = local_81;
    }
    local_78 = (longlong *)CONCAT44(local_78._4_4_,(uint)bVar25);
    if (7 < (int)local_b0) {
      local_d8 = CONCAT44(local_d8._4_4_,(uint)(byte)((iVar28 != 1 | local_81) ^ 1 | bVar38));
      plVar15 = (longlong *)0x0;
      do {
        iVar28 = *(int *)(local_60[2] + (longlong)plVar15 * 8);
        iVar10 = *(int *)(local_60[2] + 4 + (longlong)plVar15 * 8);
        plVar33 = *(longlong **)(unaff_RSI + 0x50);
        local_68 = plVar15;
        if (plVar33 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_3c0 = 1;
        lVar37 = *(longlong *)(unaff_RSI + 0x60);
        local_3c8 = plVar33;
        local_50 = plVar33;
        if (lVar37 != 0) {
          FUN_00d50b00();
        }
        local_3b0 = 1;
        lVar34 = *(longlong *)(unaff_RSI + 0x68);
        local_3b8 = lVar37;
        if (lVar34 != 0) {
          FUN_00d50b00();
        }
        local_3a0 = 1;
        in_stack_fffffffffffffc28 =
             (char *)((ulonglong)in_stack_fffffffffffffc28 & 0xffffffff00000000);
        pplVar23 = &local_3c8;
        local_3a8 = lVar34;
        uVar41 = FUN_0185fab0(DAT_02391090,iVar10 + iVar28,&local_3b8,&local_3a8,
                              in_stack_fffffffffffffc28,0);
        plVar33 = local_48;
        if ((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) {
          uVar41 = FUN_00d50b00();
        }
        if (lVar34 != 0) {
          uVar41 = FUN_00d50b20();
        }
        if (lVar37 != 0) {
          uVar41 = FUN_00d50b20();
        }
        if (local_50 != (longlong *)0x0) {
          uVar41 = FUN_00d50b20();
        }
        plVar15 = local_68;
        lVar37 = *(longlong *)
                  (*(longlong *)(*(longlong *)(*local_98 + 0x10) + (longlong)local_68 * 8) + 0x20);
        if (lVar37 != 0) {
          uVar41 = FUN_00d50b00();
        }
        if ((char)local_d8 == '\0') {
          lVar34 = *(longlong *)plVar33[2];
          if (lVar34 != 0) {
            FUN_00d50b00();
          }
          local_40[0] = '\0';
          local_48 = (longlong *)lVar34;
          FUN_00d21140();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar34 != 0) {
            FUN_00d50b20();
          }
          plVar33 = *(longlong **)(plVar33[2] + 8);
          if (plVar33 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_40[0] = '\0';
          local_48 = plVar33;
          FUN_00d21140();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar33 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        else {
          lVar34 = ((longlong *)plVar33[2])[1];
          if (lVar34 != 0) {
            uVar41 = FUN_00d50b00();
          }
          local_40[0] = '\0';
          local_48 = (longlong *)lVar34;
          uVar41 = FUN_00d23370(uVar41,0);
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            uVar41 = FUN_00d50b20();
          }
          if (lVar34 != 0) {
            uVar41 = FUN_00d50b20();
          }
          plVar33 = *(longlong **)plVar33[2];
          if (plVar33 != (longlong *)0x0) {
            uVar41 = FUN_00d50b00();
          }
          local_40[0] = '\0';
          local_48 = plVar33;
          FUN_00d23370(uVar41,0);
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar33 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        if (lVar37 != 0) {
          FUN_00d50b20();
        }
        pcVar18 = (char *)FUN_00d50b20();
        plVar15 = (longlong *)((longlong)plVar15 + 1);
      } while (local_90 != plVar15);
    }
    iVar28 = (int)local_c8;
    if ((int)local_c8 == 0) {
      lVar37 = *local_98;
      if (lVar37 != 0) {
        FUN_00d50b00();
      }
      local_390 = 1;
      lVar34 = *(longlong *)(unaff_RSI + 0x60);
      local_398 = lVar37;
      if (lVar34 != 0) {
        FUN_00d50b00();
      }
      local_380 = 1;
      lVar35 = *(longlong *)(unaff_RSI + 0x68);
      local_388 = lVar34;
      if (lVar35 != 0) {
        FUN_00d50b00();
      }
      local_370 = 1;
      pVar22 = *local_e8;
      in_stack_fffffffffffffc28 = &local_a4;
      local_378 = lVar35;
      FUN_0186a3a0(DAT_0239109c,&local_378,&local_70,&local_f0,in_stack_fffffffffffffc28);
      if (lVar35 != 0) {
        FUN_00d50b20();
      }
      if (lVar34 != 0) {
        FUN_00d50b20();
      }
      if (lVar37 != 0) {
        FUN_00d50b20();
      }
      cVar7 = local_a4;
      pvVar14 = _pthread_getspecific(pVar22);
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01787500();
      pplVar23 = (longlong **)0x0;
      pcVar18 = local_res8;
      if (local_res8 != (char *)0x0) {
        *local_res8 = cVar7;
      }
    }
    plVar15 = (longlong *)CONCAT71((int7)((ulonglong)pcVar18 >> 8),local_a3);
    if (iVar28 != 1) {
LAB_01852523:
      if (((local_a3 != '\0' && (local_80 & 1) == 0) || (local_res10 != 0)) ||
         (iVar28 = iVar28 + 1, iVar28 == 3)) goto LAB_01852552;
      goto LAB_01852070;
    }
    local_58 = (longlong *)
               CONCAT44(local_58._4_4_,(int)CONCAT71((int7)((ulonglong)pplVar23 >> 8),1));
    if (local_a3 != '\0' || cVar7 != '\0') goto LAB_01852523;
    plVar15 = (longlong *)0x0;
LAB_01852552:
    cVar7 = (char)plVar15;
    *(char *)(unaff_RSI + 0x78) = cVar7;
    *(undefined4 *)(unaff_RSI + 0x7c) = 0;
    if (local_b8 != (undefined8 *)0x0) {
      plVar15 = (longlong *)FUN_00d50b20();
    }
    if (local_60 != (longlong *)0x0) {
      plVar15 = (longlong *)FUN_00d50b20();
    }
    local_80 = CONCAT71((int7)((ulonglong)plVar15 >> 8),1);
    local_50 = (longlong *)CONCAT44(local_50._4_4_,DAT_02391078);
    uVar17 = 0;
  } while (((byte)local_d0 & ((cVar7 == '\0' | local_res10) ^ 1)) != 0);
  if (local_res10 == 0) {
    FUN_0186be40();
    FUN_0186c0d0(0,0,0,1);
    plVar33 = local_48;
    plVar15 = *(longlong **)(unaff_RSI + 0x98);
    if (plVar15 == local_48) {
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b00();
        plVar15 = *(longlong **)(unaff_RSI + 0x98);
      }
      *(longlong **)(unaff_RSI + 0x98) = plVar33;
      if (plVar15 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    lVar37 = *local_98;
    if (lVar37 != 0) {
      FUN_00d50b00();
    }
    local_360 = 1;
    local_368 = lVar37;
    FUN_018721a0();
    if (lVar37 != 0) {
      FUN_00d50b20();
    }
    lVar37 = *local_98;
    if (lVar37 != 0) {
      FUN_00d50b00();
    }
    local_350 = 1;
    lVar34 = *(longlong *)(unaff_RSI + 0x60);
    local_358 = lVar37;
    if (lVar34 != 0) {
      FUN_00d50b00();
    }
    local_340 = 1;
    lVar35 = *(longlong *)(unaff_RSI + 0x20);
    local_348 = lVar34;
    if (lVar35 != 0) {
      FUN_00d50b00();
    }
    local_330 = 1;
    plVar15 = &local_338;
    plVar33 = local_a0;
    local_338 = lVar35;
    FUN_018728b0(*(undefined8 *)(unaff_RSI + 0x3c),plVar15,local_a0,local_c0);
    if (lVar35 != 0) {
      FUN_00d50b20();
    }
    if (lVar34 != 0) {
      FUN_00d50b20();
    }
    if (lVar37 != 0) {
      FUN_00d50b20();
    }
    local_a2 = bVar8 ^ 1;
    uVar17 = CONCAT71((uint7)(uint3)((uint)param_3 >> 8),1);
    do {
      local_18c = (uint)uVar17;
      lVar37 = *local_98;
      if (lVar37 != 0) {
        FUN_00d50b00();
      }
      local_320 = 1;
      local_328 = lVar37;
      FUN_01873700();
      plVar31 = local_48;
      if ((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      local_188 = plVar31;
      if (lVar37 != 0) {
        FUN_00d50b20();
      }
      local_318 = local_188;
      local_310 = 0;
      FUN_01873dc0();
      local_114 = 0;
      do {
        FUN_00c8e690();
        plVar31 = local_48;
        if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00c92170();
        ___bzero();
        FUN_00c8e690();
        local_c8 = local_48;
        if (((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
           ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (longlong *)0x0)))) {
          FUN_00d50b20();
        }
        FUN_00c92170();
        ___bzero();
        iVar28 = 0;
        if (*(int *)(*local_98 + 0xc) < 0) {
          bVar38 = false;
          local_d0 = (undefined8 *)0x0;
          local_b0 = 0;
          local_50 = (longlong *)0x0;
        }
        else {
          iVar10 = -1;
          local_90 = (longlong *)0x0;
          local_80 = 0xffffffff;
          local_50 = (longlong *)0x0;
          local_b0 = 0;
          local_d0 = (undefined8 *)0x0;
          bVar38 = false;
          do {
            local_e8 = (pthread_key_t *)FUN_00e7b4e0();
            local_58 = (longlong *)
                       CONCAT44(local_58._4_4_,(int)CONCAT71((int7)((ulonglong)plVar15 >> 8),1));
            if ((longlong)local_90 < (longlong)*(int *)(*local_98 + 0xc)) {
              lVar37 = *(longlong *)(*(longlong *)(*local_98 + 0x10) + (longlong)local_90 * 8);
              if (lVar37 != 0) {
                FUN_00d50b00();
              }
              lVar37 = *(longlong *)(lVar37 + 0x20);
              if (*(int *)(lVar37 + 0xc) == 0) {
                iVar9 = -1;
                local_d8 = 0;
                local_78 = (longlong *)0x0;
                local_b8 = (undefined8 *)0x0;
                local_60 = (longlong *)0x0;
              }
              else {
                puVar16 = *(undefined8 **)(lVar37 + 0x10);
                plVar15 = (longlong *)*puVar16;
                if (plVar15 == (longlong *)0x0) {
                  local_b8 = (undefined8 *)0x0;
                }
                else {
                  local_b8 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
                  FUN_00d50b00();
                }
                local_60 = plVar15;
                if (plVar15[2] == 0) {
                  iVar9 = -1;
                  local_d8 = 0;
                  local_78 = (longlong *)0x0;
                }
                else {
                  iVar9 = FUN_01715480();
                  lVar37 = local_60[2];
                  if (lVar37 != 0) {
                    FUN_00d50b00();
                  }
                  FUN_018da2a0();
                  local_78 = local_48;
                  if (local_48 == (longlong *)0x0) {
                    local_78 = (longlong *)0x0;
                    local_d8 = 0;
                  }
                  else if (local_40[0] == '\0') {
                    uVar17 = FUN_00d50b00();
                    local_d8 = CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
                    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_40[0] = '\0';
                    local_d8 = CONCAT71((int7)((ulonglong)local_48 >> 8),1);
                  }
                  if (lVar37 != 0) {
                    FUN_00d50b20();
                  }
                  pbVar24 = (byte *)local_78[2];
                  pbVar1 = (byte *)local_c8[2];
                  *pbVar1 = *pbVar1 | *pbVar24;
                  pbVar1[1] = pbVar1[1] | pbVar24[1];
                  pbVar1[2] = pbVar1[2] | pbVar24[2];
                  pbVar1[3] = pbVar1[3] | pbVar24[3];
                  pbVar1[4] = pbVar1[4] | pbVar24[4];
                  pbVar1[5] = pbVar1[5] | pbVar24[5];
                  pbVar1[6] = pbVar1[6] | pbVar24[6];
                  pbVar1[7] = pbVar1[7] | pbVar24[7];
                  pbVar1[8] = pbVar1[8] | pbVar24[8];
                  pbVar1[9] = pbVar1[9] | pbVar24[9];
                  pbVar1[10] = pbVar1[10] | pbVar24[10];
                  pbVar1[0xb] = pbVar1[0xb] | pbVar24[0xb];
                }
                FUN_00e7cea0();
                FUN_00e7cea0();
                local_e8 = (pthread_key_t *)FUN_00e7b4e0();
              }
              FUN_00d50b20();
              if (local_60 == (longlong *)0x0) {
                local_60 = (longlong *)0x0;
                goto joined_r0x01852a05;
              }
              if (local_60[2] != 0) {
                if (iVar9 != iVar10) goto LAB_01852fd5;
                switch(local_114) {
                case 0:
                case 9:
                  lVar37 = local_c8[2];
                  local_80 = 3;
                  if (((*(char *)(lVar37 + 2) == '\0') && (*(char *)(lVar37 + 4) == '\0')) &&
                     (*(char *)(lVar37 + 5) == '\0')) {
                    local_80 = 3;
                    cVar7 = *(char *)(lVar37 + 6);
joined_r0x01852e14:
                    if (cVar7 == '\0') goto switchD_01852bed_default;
                  }
                  break;
                case 1:
                case 10:
                  lVar37 = local_c8[2];
                  local_80 = 4;
                  if (((*(char *)(lVar37 + 2) == '\0') && (*(char *)(lVar37 + 3) == '\0')) &&
                     (*(char *)(lVar37 + 5) == '\0')) {
                    local_80 = 4;
                    cVar7 = *(char *)(lVar37 + 6);
                    goto joined_r0x01852e14;
                  }
                  break;
                case 2:
                  if (*(char *)(local_c8[2] + 6) == '\0') {
                    local_80 = 7;
                    cVar7 = *(char *)(local_c8[2] + 8);
                    goto joined_r0x01852e14;
                  }
                  local_80 = 7;
                  break;
                case 3:
                  lVar37 = local_c8[2];
                  iVar28 = 4;
                  local_80 = 9;
                  if (((*(char *)(lVar37 + 3) == '\0') && (*(char *)(lVar37 + 8) == '\0')) &&
                     (*(char *)(lVar37 + 10) == '\0')) {
                    iVar28 = 4;
LAB_01852d46:
                    local_80 = 9;
                    cVar7 = *(char *)(lVar37 + 0xb);
                    goto joined_r0x01852e14;
                  }
                  break;
                case 4:
                  lVar37 = local_c8[2];
                  iVar28 = 3;
                  local_80 = 9;
                  if (((*(char *)(lVar37 + 4) == '\0') && (*(char *)(lVar37 + 8) == '\0')) &&
                     (*(char *)(lVar37 + 10) == '\0')) {
                    iVar28 = 3;
                    goto LAB_01852d46;
                  }
                  break;
                case 5:
                  lVar37 = local_c8[2];
                  local_80 = 10;
                  if (((*(char *)(lVar37 + 2) == '\0') && (*(char *)(lVar37 + 5) == '\0')) &&
                     ((*(char *)(lVar37 + 8) == '\0' && (*(char *)(lVar37 + 9) == '\0')))) {
                    local_80 = 10;
                    cVar7 = *(char *)(lVar37 + 0xb);
                    goto joined_r0x01852e14;
                  }
                  break;
                case 6:
                  lVar37 = local_c8[2];
                  local_80 = 10;
                  if (((*(char *)(lVar37 + 2) == '\0') && (*(char *)(lVar37 + 3) == '\0')) &&
                     ((*(char *)(lVar37 + 8) == '\0' && (*(char *)(lVar37 + 9) == '\0')))) {
                    local_80 = 10;
                    cVar7 = *(char *)(lVar37 + 10);
                    goto joined_r0x01852e14;
                  }
                  break;
                case 7:
                  lVar37 = local_c8[2];
                  iVar28 = 3;
                  local_80 = 5;
                  if (((*(char *)(lVar37 + 2) == '\0') && (*(char *)(lVar37 + 4) == '\0')) &&
                     ((*(char *)(lVar37 + 6) == '\0' &&
                      (((*(char *)(lVar37 + 8) == '\0' && (*(char *)(lVar37 + 9) == '\0')) &&
                       (*(char *)(lVar37 + 10) == '\0')))))) {
                    iVar28 = 3;
LAB_01852ed1:
                    local_80 = 5;
                    cVar7 = *(char *)(lVar37 + 0xb);
                    goto joined_r0x01852e14;
                  }
                  break;
                case 8:
                  lVar37 = local_c8[2];
                  iVar28 = 4;
                  local_80 = 5;
                  if (((((*(char *)(lVar37 + 2) == '\0') && (*(char *)(lVar37 + 3) == '\0')) &&
                       (*(char *)(lVar37 + 6) == '\0')) &&
                      ((*(char *)(lVar37 + 8) == '\0' && (*(char *)(lVar37 + 9) == '\0')))) &&
                     (*(char *)(lVar37 + 10) == '\0')) {
                    iVar28 = 4;
                    goto LAB_01852ed1;
                  }
                  break;
                default:
switchD_01852bed_default:
                  if (local_50 != (longlong *)0x0) {
                    local_48 = local_60;
                    local_40[0] = '\0';
                    uVar41 = FUN_00d21140();
                    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                      uVar41 = FUN_00d50b20();
                    }
                    puVar16 = local_d0;
                    iVar9 = *(int *)(local_d0 + 3);
                    FUN_00c8e340(uVar41,1);
                    *(pthread_key_t **)(puVar16[2] + (longlong)iVar9) = local_e8;
                    pbVar1 = (byte *)local_78[2];
                    pbVar24 = (byte *)plVar31[2];
                    *pbVar24 = *pbVar24 | *pbVar1;
                    pbVar24[1] = pbVar24[1] | pbVar1[1];
                    pbVar24[2] = pbVar24[2] | pbVar1[2];
                    pbVar24[3] = pbVar24[3] | pbVar1[3];
                    pbVar24[4] = pbVar24[4] | pbVar1[4];
                    pbVar24[5] = pbVar24[5] | pbVar1[5];
                    pbVar24[6] = pbVar24[6] | pbVar1[6];
                    pbVar24[7] = pbVar24[7] | pbVar1[7];
                    pbVar24[8] = pbVar24[8] | pbVar1[8];
                    pbVar24[9] = pbVar24[9] | pbVar1[9];
                    pbVar24[10] = pbVar24[10] | pbVar1[10];
                    goto LAB_018534d0;
                  }
                  local_50 = (longlong *)0x0;
                  goto joined_r0x01852fb7;
                }
LAB_01852fd5:
                local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
                goto joined_r0x01852a05;
              }
LAB_018534d5:
joined_r0x01852fb7:
              bVar27 = false;
              bVar39 = false;
              cVar7 = (char)local_d8;
            }
            else {
              local_60 = (longlong *)0x0;
              local_b8 = (undefined8 *)0x0;
              local_78 = (longlong *)0x0;
              local_d8 = 0;
joined_r0x01852a05:
              if (((local_50 != (longlong *)0x0) && (1 < *(int *)((longlong)local_50 + 0xc))) &&
                 (((int)local_80 != -1 && (*(char *)(plVar31[2] + (longlong)(int)local_80) != '\0'))
                 )) {
                if ((int)local_80 == 5) {
                  bVar39 = true;
                  lVar37 = 0;
                  do {
                    lVar34 = *(longlong *)(*(longlong *)(local_50[2] + lVar37 * 8) + 0x10);
                    if (lVar34 != 0) {
                      FUN_00d50b00();
                    }
                    uVar17 = *(undefined8 *)(lVar34 + 0x18);
                    FUN_00d50b20();
                    if ((~(uint)uVar17 & 0xf00000) == 0) {
                      bVar39 = false;
                    }
                    lVar37 = lVar37 + 1;
                  } while (lVar37 < *(int *)((longlong)local_50 + 0xc));
                  if ((!bVar39) && (0 < *(int *)((longlong)local_50 + 0xc))) {
                    lVar37 = 0;
                    do {
                      lVar34 = *(longlong *)(*(longlong *)(local_50[2] + lVar37 * 8) + 0x10);
                      if (lVar34 != 0) {
                        FUN_00d50b00();
                      }
                      uVar30 = *(ulonglong *)(lVar34 + 0x18);
                      if (((~(uint)uVar30 & 0xf00000) != 0) &&
                         ((~(uint)(uVar30 >> (char)iVar28 * '\x04') & 0xf) != 0)) {
                        FUN_017163c0();
                        iVar10 = FUN_01716a70();
                        if (iVar10 == 5) {
                          FUN_01716100();
                        }
                      }
                      FUN_00d50b20();
                      lVar37 = lVar37 + 1;
                    } while (lVar37 < *(int *)((longlong)local_50 + 0xc));
                  }
                }
                else {
                  bVar39 = true;
                  if ((*(char *)(unaff_RSI + 0x78) == '\0') && ((int)local_80 == 10)) {
                    bVar39 = (~*(uint *)(*(longlong *)(*(longlong *)local_50[2] + 0x10) + 0x18) &
                             0xf0000) == 0;
                  }
                  local_68 = (longlong *)(ulonglong)(uint)((int)local_80 * 4);
                  local_278 = (ulonglong)(uint)(iVar28 * 4);
                  lVar37 = 0;
                  do {
                    plVar15 = (longlong *)local_50[2];
                    lVar34 = *(longlong *)(plVar15[lVar37] + 0x10);
                    if (lVar34 != 0) {
                      FUN_00d50b00();
                      plVar15 = (longlong *)local_50[2];
                    }
                    if ((~(uint)(*(ulonglong *)(lVar34 + 0x18) >> ((byte)local_68 & 0x3f)) & 0xf) !=
                        0) {
                      bVar39 = true;
                    }
                    lVar35 = *(longlong *)(*plVar15 + 0x10);
                    if (lVar35 != 0) {
                      FUN_00d50b00();
                    }
                    if ((lVar37 != 0) &&
                       (lVar19 = *(longlong *)(*(longlong *)(local_50[2] + -8 + lVar37 * 8) + 0x10),
                       lVar35 != lVar19)) {
                      if (lVar19 != 0) {
                        FUN_00d50b00();
                      }
                      bVar27 = lVar35 != 0;
                      lVar35 = lVar19;
                      if (bVar27) {
                        FUN_00d50b20();
                      }
                    }
                    uVar12 = (uint)*(undefined8 *)(lVar35 + 0x18);
                    if ((((~uVar12 & 0xf0000) == 0) || ((~*(uint *)(lVar34 + 0x18) & 0xf000) == 0))
                       && (((~uVar12 & 0xf000) == 0 || ((~*(uint *)(lVar34 + 0x18) & 0xf0000) == 0))
                          )) {
                      if (((bVar39) &&
                          ((~(uint)(*(ulonglong *)(lVar34 + 0x18) >> ((byte)local_68 & 0x3f)) & 0xf)
                           == 0)) &&
                         ((~(uint)(*(ulonglong *)(lVar34 + 0x18) >> ((byte)local_278 & 0x3f)) & 0xf)
                          != 0)) {
                        FUN_0171a310();
                      }
                    }
                    else {
                      bVar39 = false;
                    }
                    FUN_00d50b20();
                    FUN_00d50b20();
                    lVar37 = lVar37 + 1;
                  } while (lVar37 < *(int *)((longlong)local_50 + 0xc));
                }
              }
              ___bzero();
              ___bzero();
              if ((char)local_58 == '\0') {
                plVar15 = (longlong *)FUN_00e8fc40();
                FUN_00d4ff40();
                *plVar15 = (longlong)local_268;
                (*local_270)();
                if (((char)local_b0 != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                local_48 = local_60;
                local_40[0] = '\0';
                uVar17 = FUN_00d21140();
                if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                  uVar17 = FUN_00d50b20();
                }
                local_b0 = CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
                puVar16 = (undefined8 *)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar16 = &DAT_025683c0;
                (*pcVar6)();
                FUN_00c92170();
                uVar41 = FUN_00c92160();
                if ((bVar38) && (local_d0 != (undefined8 *)0x0)) {
                  uVar41 = FUN_00d50b20();
                }
                iVar10 = *(int *)(puVar16 + 3);
                FUN_00c8e340(uVar41,1);
                *(pthread_key_t **)(puVar16[2] + (longlong)iVar10) = local_e8;
                iVar10 = FUN_01715480();
                pbVar1 = (byte *)local_78[2];
                pbVar2 = (byte *)plVar31[2];
                pbVar24 = (byte *)local_c8[2];
                *pbVar2 = *pbVar2 | *pbVar1;
                *pbVar24 = *pbVar24 | *pbVar1;
                pbVar2[1] = pbVar2[1] | pbVar1[1];
                pbVar24[1] = pbVar24[1] | pbVar1[1];
                pbVar2[2] = pbVar2[2] | pbVar1[2];
                pbVar24[2] = pbVar24[2] | pbVar1[2];
                pbVar2[3] = pbVar2[3] | pbVar1[3];
                pbVar24[3] = pbVar24[3] | pbVar1[3];
                pbVar2[4] = pbVar2[4] | pbVar1[4];
                pbVar24[4] = pbVar24[4] | pbVar1[4];
                pbVar2[5] = pbVar2[5] | pbVar1[5];
                pbVar24[5] = pbVar24[5] | pbVar1[5];
                pbVar2[6] = pbVar2[6] | pbVar1[6];
                pbVar24[6] = pbVar24[6] | pbVar1[6];
                pbVar2[7] = pbVar2[7] | pbVar1[7];
                pbVar24[7] = pbVar24[7] | pbVar1[7];
                pbVar2[8] = pbVar2[8] | pbVar1[8];
                pbVar24[8] = pbVar24[8] | pbVar1[8];
                pbVar2[9] = pbVar2[9] | pbVar1[9];
                pbVar24[9] = pbVar24[9] | pbVar1[9];
                pbVar2[10] = pbVar2[10] | pbVar1[10];
                pbVar24[10] = pbVar24[10] | pbVar1[10];
                pbVar2[0xb] = pbVar2[0xb] | pbVar1[0xb];
                bVar38 = true;
                local_b0 = CONCAT71((int7)((ulonglong)pbVar2 >> 8),1);
                local_d0 = puVar16;
                local_50 = plVar15;
LAB_018534d0:
                pbVar24[0xb] = pbVar24[0xb] | pbVar1[0xb];
                goto LAB_018534d5;
              }
              iVar10 = -1;
              bVar27 = true;
              bVar39 = true;
              cVar7 = (char)local_d8;
            }
            if ((cVar7 != '\0') && (bVar39 = bVar27, local_78 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((char)local_b8 != '\0' && !bVar39) {
              FUN_00d50b20();
            }
            plVar21 = (longlong *)((longlong)local_90 + 1);
            bVar39 = (longlong)local_90 < (longlong)*(int *)(*local_98 + 0xc);
            plVar15 = local_90;
            local_90 = plVar21;
          } while (bVar39);
        }
        if (local_c8 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (plVar31 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((bVar38) && (local_d0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_b0 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_114 = local_114 + 1;
      } while (local_114 != 0xb);
      FUN_01867a80();
      lVar37 = *local_98;
      iVar28 = *(int *)(lVar37 + 0xc);
      if (0 < iVar28) {
        lVar34 = 0;
        do {
          plVar15 = *(longlong **)(*(longlong *)(lVar37 + 0x10) + lVar34 * 8);
          if (plVar15 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_50 = plVar15;
          if (*(int *)(plVar15[4] + 0xc) != 0) {
            plVar15 = *(longlong **)(**(longlong **)(plVar15[4] + 0x10) + 0x10);
            if (plVar15 != (longlong *)0x0) {
              FUN_00d50b00();
              iVar28 = FUN_01716a70();
              if (iVar28 != 0) {
                iVar28 = FUN_01715480();
                iVar10 = FUN_01716a70();
                local_258 = '\0';
                local_260 = plVar15;
                FUN_018df0d0();
                local_68 = local_48;
                if (local_40[0] == '\0') {
                  if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
                     (local_48 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_40[0] = '\0';
                }
                if ((local_258 != '\0') && (local_260 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (7 < (int)*(uint *)(local_68 + 3)) {
                  iVar10 = iVar10 + iVar28;
                  iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)
                                    ) * -0xc;
                  iVar10 = (iVar10 >> 0x1f & 0xcU) + iVar10;
                  uVar30 = 1;
                  do {
                    if (*(int *)(local_68[2] + uVar30 * 4) == iVar10) {
                      local_248 = '\0';
                      local_250 = plVar15;
                      FUN_018da8c0(iVar10,iVar10);
                      plVar31 = plVar15;
                      if (plVar15 == local_48) {
joined_r0x0185378d:
                        if ((local_40[0] != '\0') && (plVar31 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      else {
                        plVar15 = local_48;
                        if (local_40[0] == '\0') {
                          if (local_48 != (longlong *)0x0) {
                            FUN_00d50b00();
                          }
                          FUN_00d50b20();
                          plVar31 = local_48;
                          goto joined_r0x0185378d;
                        }
                        FUN_00d50b20();
                        local_40[0] = '\0';
                      }
                      if ((local_248 != '\0') && (local_250 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      lVar37 = **(longlong **)(local_50[4] + 0x10);
                      plVar31 = *(longlong **)(lVar37 + 0x10);
                      if (plVar31 != plVar15) {
                        if (plVar15 != (longlong *)0x0) {
                          FUN_00d50b00();
                        }
                        *(longlong **)(lVar37 + 0x10) = plVar15;
                        if (plVar31 != (longlong *)0x0) {
                          FUN_00d50b20();
                        }
                      }
                      break;
                    }
                    uVar30 = uVar30 + 1;
                  } while (*(uint *)(local_68 + 3) >> 2 != uVar30);
                  if (local_68 == (longlong *)0x0) goto LAB_0185382a;
                }
                FUN_00d50b20();
              }
            }
LAB_0185382a:
            if (plVar15 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          lVar34 = lVar34 + 1;
          lVar37 = *local_98;
          iVar28 = *(int *)(lVar37 + 0xc);
        } while (lVar34 < iVar28);
      }
      if ((1 < iVar28 & local_a2) == 1) {
        iVar10 = 1;
        do {
          lVar35 = (longlong)iVar10;
          lVar37 = *(longlong *)(lVar37 + 0x10);
          lVar34 = *(longlong *)(lVar37 + lVar35 * 8);
          if (lVar34 != 0) {
            FUN_00d50b00();
            lVar37 = *(longlong *)(*local_98 + 0x10);
          }
          lVar37 = *(longlong *)(lVar37 + -8 + lVar35 * 8);
          if (lVar37 != 0) {
            FUN_00d50b00();
          }
          if ((*(int *)(*(longlong *)(lVar34 + 0x20) + 0xc) != 0) &&
             (lVar19 = *(longlong *)(lVar37 + 0x20), *(int *)(lVar19 + 0xc) != 0)) {
            plVar15 = *(longlong **)(**(longlong **)(*(longlong *)(lVar34 + 0x20) + 0x10) + 0x10);
            if (plVar15 != (longlong *)0x0) {
              FUN_00d50b00();
              lVar19 = *(longlong *)(lVar37 + 0x20);
            }
            plVar31 = *(longlong **)(**(longlong **)(lVar19 + 0x10) + 0x10);
            if (plVar31 != (longlong *)0x0) {
              local_50 = plVar31;
              FUN_00d50b00();
              if (plVar15 != (longlong *)0x0) {
                plVar31 = *(longlong **)(lVar34 + 0xc);
                local_60 = plVar15;
                if (local_a0._4_4_ != 0) {
                  local_48 = plVar31;
                  FUN_00e7b820();
                  local_70 = local_48;
                  if ((((ulonglong)local_48 >> 0x20 != 0) && (local_a0._4_4_ != 0)) &&
                     (cVar7 = FUN_00e7c000(), plVar15 = local_60, cVar7 != '\0')) goto LAB_01853c74;
                }
                plVar15 = local_60;
                if (local_c0._4_4_ != 0) {
                  local_48 = plVar31;
                  FUN_00e7b820();
                  local_70 = local_48;
                  if ((((ulonglong)local_48 >> 0x20 != 0) && (local_c0._4_4_ != 0)) &&
                     (cVar7 = FUN_00e7c000(), cVar7 != '\0')) goto LAB_01853c74;
                }
                local_240 = plVar15;
                local_238 = '\0';
                FUN_018da560();
                local_68 = local_48;
                if (local_40[0] == '\0') {
                  if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
                     (local_48 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_40[0] = '\0';
                }
                if ((local_238 != '\0') && (local_240 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                local_230 = local_50;
                local_228 = '\0';
                FUN_018da560();
                local_90 = local_48;
                if (local_40[0] == '\0') {
                  if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
                     (local_48 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_40[0] = '\0';
                }
                if ((local_228 != '\0') && (local_230 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                iVar28 = (int)local_68[3];
                iVar9 = iVar28 + 3;
                if (-1 < iVar28) {
                  iVar9 = iVar28;
                }
                if (iVar28 < 4) {
LAB_01853af9:
                  uVar41 = FUN_01715480();
                  local_78 = (longlong *)CONCAT44(local_78._4_4_,uVar41);
                  iVar28 = FUN_01716a70();
                  iVar9 = FUN_01715480();
                  if ((int)local_78 == iVar9) {
LAB_01853b92:
                    *(undefined8 *)
                     (*(longlong *)(*(longlong *)(*local_98 + 0x10) + (lVar35 + -1) * 8) + 0x14) =
                         *(undefined8 *)
                          (*(longlong *)(*(longlong *)(*local_98 + 0x10) + lVar35 * 8) + 0x14);
                    FUN_00d23620();
                    iVar10 = iVar10 + -1;
                    plVar15 = local_60;
                  }
                  else {
                    iVar28 = iVar28 + (int)local_78;
                    iVar28 = iVar28 + (((uint)(iVar28 / 6 + (iVar28 >> 0x1f)) >> 1) -
                                      (iVar28 >> 0x1f)) * -0xc;
                    iVar28 = (iVar28 >> 0x1f & 0xcU) + iVar28;
                    if ((iVar28 == iVar9) ||
                       ((plVar15 = local_60, iVar28 != (int)local_78 &&
                        (iVar29 = iVar9 + 7 >> 0x1f,
                        iVar9 = iVar9 + (((uint)((iVar9 + 7) / 6 + iVar29) >> 1) - iVar29) * -0xc +
                                7, iVar28 == (iVar9 >> 0x1f & 0xcU) + iVar9)))) goto LAB_01853b92;
                  }
joined_r0x01853bd3:
                  if (local_90 != (longlong *)0x0) goto LAB_01853c61;
                }
                else {
                  iVar28 = (int)local_90[3];
                  iVar29 = iVar28 + 3;
                  if (-1 < iVar28) {
                    iVar29 = iVar28;
                  }
                  if (3 < iVar28) {
                    plVar33 = (longlong *)(ulonglong)(uint)(iVar9 >> 2);
                    plVar31 = (longlong *)0x0;
                    do {
                      lVar19 = 0;
                      while (*(int *)(local_90[2] + lVar19 * 4) !=
                             *(int *)(local_68[2] + (longlong)plVar31 * 4)) {
                        lVar19 = lVar19 + 1;
                        if (iVar29 >> 2 == (int)lVar19) goto joined_r0x01853bd3;
                      }
                      plVar31 = (longlong *)((longlong)plVar31 + 1);
                    } while (plVar31 != plVar33);
                    goto LAB_01853af9;
                  }
LAB_01853c61:
                  FUN_00d50b20();
                }
                if (local_68 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
              }
LAB_01853c74:
              FUN_00d50b20();
            }
            if (plVar15 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          if (lVar37 != 0) {
            FUN_00d50b20();
          }
          if (lVar34 != 0) {
            FUN_00d50b20();
          }
          iVar10 = iVar10 + 1;
          lVar37 = *local_98;
          iVar28 = *(int *)(lVar37 + 0xc);
        } while (iVar10 < iVar28);
      }
      lVar34 = unaff_RSI;
      if (*(longlong *)(unaff_RSI + 0x28) != 0) {
        local_70 = (longlong *)CONCAT44(local_70._4_4_,0xffffffff);
        if (0 < iVar28) {
          plVar15 = (longlong *)0x0;
          do {
            plVar31 = *(longlong **)(*(longlong *)(lVar37 + 0x10) + (longlong)plVar15 * 8);
            if (plVar31 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            pVar22 = (pthread_key_t)lVar37;
            local_50 = plVar31;
            if (*(int *)(plVar31[4] + 0xc) != 0) {
              pvVar14 = _pthread_getspecific(pVar22);
              if (pvVar14 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_48 = *(longlong **)((longlong)local_50 + 0xc);
              uVar41 = FUN_00e7b820();
              uVar17 = FUN_016c4760(uVar41,0);
              pvVar14 = _pthread_getspecific(pVar22);
              if (pvVar14 != (void *)0x0) {
                FUN_00e8b990();
              }
              lVar34 = 0;
              plVar33 = (longlong *)0x0;
              FUN_012521f0(uVar17,0,0,0);
              plVar31 = local_48;
              local_f0 = CONCAT71(local_f0._1_7_,local_40[0]);
              pcVar18 = (char *)&local_f0;
              pcVar20 = local_40;
              if (local_40[0] == '\0') {
                pcVar20 = pcVar18;
              }
              *pcVar20 = '\0';
              if ((local_40[0] != '\0') && (plVar31 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((char)local_f0 == '\0') {
                if (plVar31 != (longlong *)0x0) {
                  FUN_00d50b00();
                  goto LAB_01853e31;
                }
              }
              else if (plVar31 != (longlong *)0x0) {
LAB_01853e31:
                lVar37 = local_50[4];
                if (0 < *(int *)(lVar37 + 0xc)) {
                  lVar35 = 0;
                  local_68 = plVar15;
                  do {
                    pVar22 = (pthread_key_t)pcVar18;
                    if (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar37 + 0x10) + lVar35 * 8) + 0x10) != 0) {
                      FUN_00d50b00();
                      iVar28 = FUN_01715480();
                      pvVar14 = _pthread_getspecific(pVar22);
                      if (pvVar14 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      iVar10 = FUN_01743720();
                      pvVar14 = _pthread_getspecific(pVar22);
                      plVar15 = plVar31;
                      if ((pvVar14 != (void *)0x0) && (lVar37 = FUN_00e8b990(), lVar37 != 0)) {
                        plVar15 = (longlong *)
                                  plVar31[(ulonglong)(*(uint *)(lVar37 + 0x154) & 1) + 4];
                      }
                      cVar7 = (**(code **)(*plVar15 + 0x400))();
                      if (cVar7 == '\0') {
                        if (iVar10 < 1) goto LAB_01853f46;
LAB_01853f66:
                        iVar9 = iVar10 + -6;
                        if (iVar10 < 6) {
                          iVar9 = -1;
                        }
LAB_01853f74:
                        iVar28 = iVar28 * 7;
                        iVar28 = iVar28 + (((uint)(iVar28 / 6 + (iVar28 >> 0x1f)) >> 1) -
                                          (iVar28 >> 0x1f)) * -0xc;
                        iVar9 = ((iVar28 >> 0x1f & 0xcU) + iVar28) - iVar9;
                        lVar34 = 0;
                        pVar22 = (int)(iVar9 + (((uint)(iVar9 / 6 + (iVar9 >> 0x1f)) >> 1) -
                                               (iVar9 >> 0x1f)) * -0xc) >> 0x1f & 0xc;
                      }
                      else if (((iVar10 != 1) || (iVar28 != 6)) && ((iVar10 != 2 || (iVar28 != 1))))
                      {
                        iVar10 = iVar10 + -3;
                        if ((int)-(uint)(iVar10 == 0) < iVar10) goto LAB_01853f66;
LAB_01853f46:
                        iVar9 = iVar10 + -1;
                        if (-6 < iVar10) {
                          iVar9 = -6;
                        }
                        goto LAB_01853f74;
                      }
                      FUN_01715d30();
                      iVar28 = FUN_017154c0();
                      pvVar14 = _pthread_getspecific(pVar22);
                      if (pvVar14 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      iVar10 = FUN_01743720();
                      pvVar14 = _pthread_getspecific(pVar22);
                      plVar15 = plVar31;
                      if ((pvVar14 != (void *)0x0) && (lVar37 = FUN_00e8b990(), lVar37 != 0)) {
                        plVar15 = (longlong *)
                                  plVar31[(ulonglong)(*(uint *)(lVar37 + 0x154) & 1) + 4];
                      }
                      cVar7 = (**(code **)(*plVar15 + 0x400))();
                      if ((cVar7 == '\0') ||
                         (((iVar10 != 1 || (iVar28 != 6)) && ((iVar10 != 2 || (iVar28 != 1)))))) {
                        lVar34 = 0;
                      }
                      FUN_01716a00();
                      FUN_00d50b20();
                    }
                    lVar35 = lVar35 + 1;
                    lVar37 = local_50[4];
                    pcVar18 = (char *)(longlong)*(int *)(lVar37 + 0xc);
                  } while (lVar35 < (longlong)pcVar18);
                  plVar15 = local_68;
                  if (plVar31 == (longlong *)0x0) goto LAB_01854161;
                }
                FUN_00d50b20();
              }
            }
LAB_01854161:
            FUN_00d50b20();
            plVar15 = (longlong *)((longlong)plVar15 + 1);
            lVar37 = *local_98;
          } while ((longlong)plVar15 < (longlong)*(int *)(lVar37 + 0xc));
        }
      }
      iVar28 = *(int *)(lVar37 + 0xc);
      bVar25 = 1 < iVar28 & local_a2;
      plVar15 = (longlong *)CONCAT71((int7)((ulonglong)lVar34 >> 8),bVar25);
      if (bVar25 == 1) {
        iVar10 = 1;
        do {
          lVar35 = (longlong)iVar10;
          lVar37 = *(longlong *)(lVar37 + 0x10);
          lVar34 = *(longlong *)(lVar37 + lVar35 * 8);
          if (lVar34 != 0) {
            FUN_00d50b00();
            lVar37 = *(longlong *)(*local_98 + 0x10);
          }
          lVar37 = *(longlong *)(lVar37 + -8 + lVar35 * 8);
          if (lVar37 != 0) {
            FUN_00d50b00();
          }
          if ((*(int *)(*(longlong *)(lVar34 + 0x20) + 0xc) != 0) &&
             (lVar19 = *(longlong *)(lVar37 + 0x20), *(int *)(lVar19 + 0xc) != 0)) {
            plVar31 = *(longlong **)(**(longlong **)(*(longlong *)(lVar34 + 0x20) + 0x10) + 0x10);
            if (plVar31 != (longlong *)0x0) {
              FUN_00d50b00();
              lVar19 = *(longlong *)(lVar37 + 0x20);
            }
            plVar21 = *(longlong **)(**(longlong **)(lVar19 + 0x10) + 0x10);
            if (plVar21 != (longlong *)0x0) {
              local_50 = plVar21;
              FUN_00d50b00();
              if (plVar31 != (longlong *)0x0) {
                plVar21 = *(longlong **)(lVar34 + 0xc);
                local_68 = plVar31;
                if (local_a0._4_4_ != 0) {
                  local_48 = plVar21;
                  FUN_00e7b820();
                  local_70 = local_48;
                  if ((((ulonglong)local_48 >> 0x20 != 0) && (local_a0._4_4_ != 0)) &&
                     (cVar7 = FUN_00e7c000(), plVar31 = local_68, cVar7 != '\0')) goto LAB_01854371;
                }
                plVar31 = local_68;
                if (local_c0._4_4_ != 0) {
                  local_48 = plVar21;
                  FUN_00e7b820();
                  local_70 = local_48;
                  if ((((ulonglong)local_48 >> 0x20 != 0) && (local_c0._4_4_ != 0)) &&
                     (cVar7 = FUN_00e7c000(), cVar7 != '\0')) goto LAB_01854371;
                }
                local_220 = local_50;
                local_218 = '\0';
                cVar7 = (**(code **)(*plVar31 + 0x50))();
                if ((local_218 != '\0') && (local_220 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                plVar31 = local_68;
                if (cVar7 != '\0') {
                  *(undefined8 *)
                   (*(longlong *)(*(longlong *)(*local_98 + 0x10) + (lVar35 + -1) * 8) + 0x14) =
                       *(undefined8 *)
                        (*(longlong *)(*(longlong *)(*local_98 + 0x10) + lVar35 * 8) + 0x14);
                  plVar15 = local_98;
                  FUN_00d23620();
                  iVar10 = iVar10 + -1;
                }
              }
LAB_01854371:
              FUN_00d50b20();
            }
            if (plVar31 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          if (lVar37 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          iVar10 = iVar10 + 1;
          lVar37 = *local_98;
          iVar28 = *(int *)(lVar37 + 0xc);
        } while (iVar10 < iVar28);
      }
      local_70 = (longlong *)CONCAT44(local_70._4_4_,0xffffffff);
      if (0 < iVar28) {
        plVar15 = (longlong *)0x0;
        do {
          plVar31 = *(longlong **)(*(longlong *)(lVar37 + 0x10) + (longlong)plVar15 * 8);
          local_68 = plVar15;
          if (plVar31 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_50 = plVar31;
          if (*(int *)(plVar31[4] + 0xc) != 0) {
            plVar15 = *(longlong **)(**(longlong **)(plVar31[4] + 0x10) + 0x10);
            if (plVar15 != (longlong *)0x0) {
              FUN_00d50b00();
              uVar41 = FUN_01715480();
              iVar28 = FUN_00e7cea0();
              uVar11 = FUN_00e7cea0();
              local_60 = (longlong *)CONCAT44(local_60._4_4_,uVar11);
              local_300 = 0;
              lVar37 = *(longlong *)(unaff_RSI + 0x50);
              local_308 = plVar15;
              if (lVar37 != 0) {
                FUN_00d50b00();
              }
              local_90 = (longlong *)CONCAT44(local_90._4_4_,uVar41);
              local_2f0 = 1;
              lVar34 = *(longlong *)(unaff_RSI + 0x60);
              local_2f8 = lVar37;
              local_78 = plVar15;
              if (lVar34 != 0) {
                FUN_00d50b00();
              }
              local_2e0 = 1;
              plVar15 = &local_2f8;
              plVar33 = &local_2e8;
              local_2e8 = lVar34;
              uVar12 = FUN_0185f120(plVar15,(ulonglong)local_60 & 0xffffffff);
              pVar22 = (pthread_key_t)plVar15;
              uVar30 = (ulonglong)uVar12;
              if (lVar34 != 0) {
                FUN_00d50b20();
              }
              if (lVar37 != 0) {
                FUN_00d50b20();
              }
              if (uVar12 == 0xffffffff) {
                plVar15 = local_78;
                iVar28 = (int)local_90;
              }
              else {
                iVar10 = (int)local_60 - iVar28;
                if (1 < iVar10) {
                  local_2d8 = local_78;
                  local_2d0 = 0;
                  plVar15 = *(longlong **)(unaff_RSI + 0x50);
                  if (plVar15 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  local_2c0 = 1;
                  lVar37 = *(longlong *)(unaff_RSI + 0x60);
                  local_2c8 = plVar15;
                  local_58 = plVar15;
                  if (lVar37 != 0) {
                    FUN_00d50b00();
                  }
                  local_2b0 = 1;
                  local_2b8 = lVar37;
                  uVar41 = FUN_0185f120(&local_2c8,iVar10 / 2 + iVar28,&local_2b8);
                  plVar15 = local_78;
                  local_d8 = CONCAT44(local_d8._4_4_,uVar41);
                  if (lVar37 != 0) {
                    FUN_00d50b20();
                  }
                  if (local_58 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  local_2a8 = plVar15;
                  local_2a0 = 0;
                  lVar37 = *(longlong *)(unaff_RSI + 0x50);
                  if (lVar37 != 0) {
                    FUN_00d50b00();
                  }
                  local_290 = 1;
                  lVar34 = *(longlong *)(unaff_RSI + 0x60);
                  local_298 = lVar37;
                  if (lVar34 != 0) {
                    FUN_00d50b00();
                  }
                  local_280 = 1;
                  plVar15 = &local_298;
                  plVar33 = &local_288;
                  local_288 = lVar34;
                  uVar13 = FUN_0185f120(plVar15,(ulonglong)local_60 & 0xffffffff);
                  pVar22 = (pthread_key_t)plVar15;
                  if (lVar34 != 0) {
                    FUN_00d50b20();
                  }
                  if (lVar37 != 0) {
                    FUN_00d50b20();
                  }
                  if (uVar13 == (uint)local_90) {
                    uVar12 = (uint)local_90;
                  }
                  uVar30 = (ulonglong)uVar12;
                  if ((uint)local_d8 == (uint)local_90) {
                    uVar30 = (ulonglong)local_90 & 0xffffffff;
                  }
                }
                plVar15 = local_78;
                iVar10 = (int)uVar30;
                iVar28 = (uint)local_90;
                if (iVar10 != (uint)local_90) {
                  local_210 = local_78;
                  local_208 = '\0';
                  FUN_018df0d0();
                  plVar31 = local_48;
                  if (local_40[0] == '\0') {
                    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
                       (local_48 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_40[0] = '\0';
                  }
                  if ((local_208 != '\0') && (local_210 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  iVar28 = iVar10;
                  if (7 < (int)*(uint *)(plVar31 + 3)) {
                    uVar3 = plVar31[2];
                    uVar26 = 1;
                    do {
                      if (*(int *)(uVar3 + uVar26 * 4) == iVar10) {
                        local_200 = plVar15;
                        local_1f8 = '\0';
                        FUN_018da8c0(uVar30,uVar30);
                        plVar21 = local_48;
                        if (plVar15 == local_48) {
joined_r0x018547ac:
                          plVar21 = plVar15;
                          if ((local_40[0] != '\0') && (local_78 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        else {
                          if (local_40[0] == '\0') {
                            if (local_48 != (longlong *)0x0) {
                              FUN_00d50b00();
                            }
                            FUN_00d50b20();
                            local_78 = local_48;
                            plVar15 = plVar21;
                            goto joined_r0x018547ac;
                          }
                          FUN_00d50b20();
                          local_40[0] = '\0';
                        }
                        if ((local_1f8 != '\0') && (local_200 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        lVar37 = **(longlong **)(local_50[4] + 0x10);
                        plVar15 = *(longlong **)(lVar37 + 0x10);
                        if (plVar15 != plVar21) {
                          if (plVar21 != (longlong *)0x0) {
                            FUN_00d50b00();
                          }
                          *(longlong **)(lVar37 + 0x10) = plVar21;
                          if (plVar15 != (longlong *)0x0) {
                            FUN_00d50b20();
                          }
                        }
                        local_90 = (longlong *)CONCAT44(local_90._4_4_,iVar10);
                        uVar3 = uVar30;
                        plVar15 = plVar21;
                        break;
                      }
                      uVar26 = uVar26 + 1;
                    } while (*(uint *)(plVar31 + 3) >> 2 != uVar26);
                    pVar22 = (pthread_key_t)uVar3;
                    if (plVar31 == (longlong *)0x0) goto LAB_01854846;
                  }
                  FUN_00d50b20();
                }
              }
LAB_01854846:
              if (local_82 == '\0') {
                FUN_01716100();
              }
              else {
                iVar10 = (int)(iVar28 - (uint)local_90) >> 0x1f;
                pVar22 = (((uint)((int)(iVar28 - (uint)local_90) / 6 + iVar10) >> 1) - iVar10) * 0xc
                ;
                FUN_01716100();
              }
              if (*(longlong *)(unaff_RSI + 0x28) != 0) {
                pvVar14 = _pthread_getspecific(pVar22);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_48 = *(longlong **)((longlong)local_50 + 0xc);
                uVar41 = FUN_00e7b820();
                uVar17 = FUN_016c4760(uVar41,0);
                pvVar14 = _pthread_getspecific(pVar22);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                plVar33 = (longlong *)0x0;
                FUN_012521f0(uVar17,0,0,0);
                plVar31 = local_48;
                local_f0 = CONCAT71(local_f0._1_7_,local_40[0]);
                pcVar18 = (char *)&local_f0;
                pcVar20 = local_40;
                if (local_40[0] == '\0') {
                  pcVar20 = pcVar18;
                }
                *pcVar20 = '\0';
                if ((local_40[0] != '\0') && (plVar31 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                pVar22 = (pthread_key_t)pcVar18;
                if ((char)local_f0 == '\0') {
                  if (plVar31 != (longlong *)0x0) {
                    FUN_00d50b00();
                    goto LAB_018549bd;
                  }
                }
                else if (plVar31 != (longlong *)0x0) {
LAB_018549bd:
                  iVar28 = FUN_01715480();
                  pvVar14 = _pthread_getspecific(pVar22);
                  if (pvVar14 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  iVar10 = FUN_01743720();
                  pvVar14 = _pthread_getspecific(pVar22);
                  plVar21 = plVar31;
                  if ((pvVar14 != (void *)0x0) && (lVar37 = FUN_00e8b990(), lVar37 != 0)) {
                    plVar21 = (longlong *)plVar31[(ulonglong)(*(uint *)(lVar37 + 0x154) & 1) + 4];
                  }
                  cVar7 = (**(code **)(*plVar21 + 0x400))();
                  if (cVar7 == '\0') {
                    if (iVar10 < 1) goto LAB_01854a7a;
LAB_01854a90:
                    iVar9 = iVar10 + -6;
                    if (iVar10 < 6) {
                      iVar9 = -1;
                    }
LAB_01854a9e:
                    iVar28 = iVar28 * 7;
                    iVar28 = iVar28 + (((uint)(iVar28 / 6 + (iVar28 >> 0x1f)) >> 1) -
                                      (iVar28 >> 0x1f)) * -0xc;
                    iVar9 = ((iVar28 >> 0x1f & 0xcU) + iVar28) - iVar9;
                    pVar22 = (int)(iVar9 + (((uint)(iVar9 / 6 + (iVar9 >> 0x1f)) >> 1) -
                                           (iVar9 >> 0x1f)) * -0xc) >> 0x1f & 0xc;
                  }
                  else if (((iVar10 != 1) || (iVar28 != 6)) && ((iVar10 != 2 || (iVar28 != 1)))) {
                    iVar10 = iVar10 + -3;
                    if ((int)-(uint)(iVar10 == 0) < iVar10) goto LAB_01854a90;
LAB_01854a7a:
                    iVar9 = iVar10 + -1;
                    if (-6 < iVar10) {
                      iVar9 = -6;
                    }
                    goto LAB_01854a9e;
                  }
                  FUN_01715d30();
                  FUN_017154c0();
                  pvVar14 = _pthread_getspecific(pVar22);
                  if (pvVar14 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01743720();
                  pvVar14 = _pthread_getspecific(pVar22);
                  if ((pvVar14 != (void *)0x0) && (lVar37 = FUN_00e8b990(), lVar37 != 0)) {
                    plVar31 = (longlong *)plVar31[(ulonglong)(*(uint *)(lVar37 + 0x154) & 1) + 4];
                  }
                  (**(code **)(*plVar31 + 0x400))();
                  FUN_01716a00();
                  FUN_00d50b20();
                }
              }
            }
            if (plVar15 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          plVar15 = (longlong *)((longlong)local_68 + 1);
          lVar37 = *local_98;
        } while ((longlong)plVar15 < (longlong)*(int *)(lVar37 + 0xc));
        if (0 < *(int *)(lVar37 + 0xc)) {
          lVar34 = 0;
LAB_01854c90:
          lVar37 = *(longlong *)(*(longlong *)(lVar37 + 0x10) + lVar34 * 8);
          if (lVar37 != 0) {
            FUN_00d50b00();
          }
          if ((*(int *)(*(longlong *)(lVar37 + 0x20) + 0xc) != 0) &&
             (plVar31 = *(longlong **)(**(longlong **)(*(longlong *)(lVar37 + 0x20) + 0x10) + 0x10),
             plVar31 != (longlong *)0x0)) {
            FUN_00d50b00();
            local_1e8 = '\0';
            local_1f0 = plVar31;
            local_50 = plVar31;
            FUN_01716260();
            plVar15 = local_48;
            if (local_40[0] == '\0') {
              if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
                 (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40[0] = '\0';
            }
            if ((local_1e8 != '\0') && (local_1f0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            do {
              uVar30 = ~plVar15[3];
              iVar28 = 0xb;
              if (((uVar30 & 0xf00000000000) == 0) && (iVar28 = 9, (uVar30 & 0xf000000000) == 0)) {
                uVar12 = (uint)plVar15[3];
                uVar13 = uVar12 & 0xf0000000;
                if (((((uVar30 & 0xf00000000) == 0) || (iVar28 = 8, uVar13 == 0xf0000000)) &&
                    (((~uVar12 & 0xf000000) == 0 || (iVar28 = 6, uVar13 == 0xf0000000)))) &&
                   (((~uVar12 & 0xf00000) == 0 || (iVar28 = 5, (uVar12 & 0xff000) == 0xff000)))) {
                  uVar32 = (undefined7)((ulonglong)plVar33 >> 8);
                  if ((~uVar12 & 0xf000) == 0) {
                    bVar38 = (uVar12 & 0xf0000) != 0xf0000;
                    plVar33 = (longlong *)CONCAT71(uVar32,bVar38);
                  }
                  else {
                    iVar28 = 3;
                    if ((uVar12 & 0xf0000) != 0xf0000) goto LAB_01854e60;
                    plVar33 = (longlong *)CONCAT71(uVar32,1);
                    bVar38 = false;
                  }
                  if (((((~uVar12 & 0xf00) == 0) || (iVar28 = 2, (char)plVar33 == '\0')) &&
                      (iVar28 = 1, (~uVar12 & 0xf0) == 0)) &&
                     (((uVar30 & 0xf0000000000) == 0 ||
                      ((iVar28 = 10, (bool)((~uVar12 & 0xf00) == 0 & bVar38) &&
                       (uVar13 != 0xf0000000)))))) goto LAB_01854eb0;
                }
              }
LAB_01854e60:
              iVar10 = FUN_01716a70();
              iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) *
                                -0xc;
              if (iVar28 == (iVar10 >> 0x1f & 0xcU) + iVar10) {
                FUN_01716100();
              }
              FUN_017163c0();
            } while( true );
          }
          goto LAB_01854f97;
        }
      }
LAB_01854ff0:
      if (local_188 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      uVar17 = 0;
    } while ((local_18c & 1) != 0);
    plVar15 = (longlong *)FUN_00e8fc40();
    FUN_0111d0d0();
    (**(code **)(*plVar15 + 0x18))();
    lVar34 = *(longlong *)(unaff_RSI + 0x70);
    *(longlong **)(unaff_RSI + 0x70) = plVar15;
    if (lVar34 != 0) {
      FUN_00d50b20();
    }
    lVar34 = *local_98;
    if (0 < *(int *)(lVar34 + 0xc)) {
      lVar35 = 0;
      do {
        lVar34 = *(longlong *)(*(longlong *)(lVar34 + 0x10) + lVar35 * 8);
        if (lVar34 != 0) {
          FUN_00d50b00();
        }
        if ((*(int *)(*(longlong *)(lVar34 + 0x20) + 0xc) != 0) &&
           (plVar15 = *(longlong **)(**(longlong **)(*(longlong *)(lVar34 + 0x20) + 0x10) + 0x10),
           plVar15 != (longlong *)0x0)) {
          local_50 = plVar15;
          FUN_00d50b00();
          plVar15 = *(longlong **)(lVar34 + 0xc);
          plVar31 = *(longlong **)(lVar34 + 0x14);
          pvVar14 = _pthread_getspecific((pthread_key_t)lVar37);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_48 = plVar15;
          uVar41 = FUN_00e7b820();
          local_70 = (longlong *)FUN_016c4760(uVar41,0);
          pvVar14 = _pthread_getspecific((pthread_key_t)lVar37);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_48 = plVar31;
          uVar41 = FUN_00e7b820();
          uVar30 = FUN_016c4760(uVar41,0);
          plVar21 = local_50;
          local_f0 = uVar30;
          if (local_a1 == 0) {
            pvVar14 = _pthread_getspecific((pthread_key_t)lVar37);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_48 = local_50;
            local_40[0] = '\0';
            plVar33 = (longlong *)0x0;
            FUN_012502a0(local_f0);
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            iStack_14c = (int)((ulonglong)local_178 >> 0x20);
            iStack_144 = (int)(local_180 >> 0x20);
            local_68 = local_70;
            if ((local_a0._4_4_ == 0) || ((ulonglong)local_130 >> 0x20 == 0)) {
            }
            else {
              local_48 = plVar15;
              FUN_00e7b820();
              if ((((ulonglong)local_48 >> 0x20 != 0) && (local_a0._4_4_ != 0)) &&
                 (cVar7 = FUN_00e7c000(), cVar7 != '\0')) {
                iStack_14c = (int)((ulonglong)local_130 >> 0x20);
                local_68 = local_178;
              }
            }
            if (((local_c0._4_4_ != 0) && (local_170 >> 0x20 != 0)) &&
               ((local_48 = plVar31, FUN_00e7b820(), (ulonglong)local_48 >> 0x20 != 0 &&
                ((local_c0._4_4_ != 0 && (cVar7 = FUN_00e7c000(), cVar7 != '\0')))))) {
              iStack_144 = (int)(local_170 >> 0x20);
              uVar30 = local_180;
            }
            if ((local_70._4_4_ != 0) && (iStack_14c != 0)) {
              cVar7 = FUN_00e7c020();
              pVar22 = (pthread_key_t)CONCAT71((int7)((ulonglong)lVar37 >> 8),local_f0._4_4_ == 0);
              if ((cVar7 == '\0' && local_f0._4_4_ != 0) &&
                 ((iStack_144 != 0 && (cVar7 = FUN_00e7c020(), cVar7 == '\0')))) {
                pvVar14 = _pthread_getspecific(pVar22);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_48 = plVar21;
                local_40[0] = '\0';
                plVar33 = (longlong *)0x0;
                FUN_012502a0(uVar30);
                if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
        lVar35 = lVar35 + 1;
        lVar34 = *local_98;
        lVar37 = (longlong)*(int *)(lVar34 + 0xc);
      } while (lVar35 < lVar37);
    }
    if ((bVar8 != 0) && (*param_4 != 0)) {
      plVar15 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar15 = (longlong)local_268;
      (*DAT_02572370)();
      lVar34 = *local_98;
      local_68 = plVar15;
      if (0 < *(int *)(lVar34 + 0xc)) {
        ppVar36 = (pthread_key_t *)0x0;
        do {
          pVar22 = (pthread_key_t)lVar37;
          plVar31 = *(longlong **)(*(longlong *)(lVar34 + 0x10) + (longlong)ppVar36 * 8);
          if (plVar31 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_90 = plVar31;
          if (*(int *)(plVar31[4] + 0xc) == 0) {
            iVar28 = 0x56;
          }
          else {
            if (local_a0._4_4_ != 0) {
              local_48 = *(longlong **)((longlong)plVar31 + 0xc);
              FUN_00e7b820();
              local_70 = local_48;
              if (((ulonglong)local_48 >> 0x20 != 0) && (local_a0._4_4_ != 0)) {
                cVar7 = FUN_00e7c000();
                iVar28 = 0;
                if (cVar7 != '\0') {
                  lVar37 = *(longlong *)(unaff_RSI + 0x28);
                  local_e8 = ppVar36;
                  if (lVar37 == 0) {
                    plVar31 = (longlong *)0x0;
                    local_b8 = (undefined8 *)0x0;
                    puVar16 = local_b8;
                  }
                  else {
                    pvVar14 = _pthread_getspecific(pVar22);
                    if (pvVar14 != (void *)0x0) {
                      lVar37 = *(longlong *)(unaff_RSI + 0x28);
                      lVar34 = FUN_00e8b990();
                      if (lVar34 != 0) {
                        lVar37 = *(longlong *)
                                  (lVar37 + 0x20 + (ulonglong)(*(uint *)(lVar34 + 0x154) & 1) * 8);
                      }
                    }
                    plVar33 = (longlong *)0x0;
                    FUN_012521f0(local_130,0,0,0);
                    plVar31 = local_48;
                    local_70 = (longlong *)CONCAT71(local_70._1_7_,local_40[0]);
                    pcVar18 = local_40;
                    if (local_40[0] == '\0') {
                      pcVar18 = (char *)&local_70;
                    }
                    *pcVar18 = '\0';
                    if ((local_40[0] != '\0') && (plVar31 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (plVar31 == (longlong *)0x0) {
                      plVar31 = (longlong *)0x0;
                      puVar16 = (undefined8 *)0x0;
                    }
                    else {
                      puVar16 = (undefined8 *)CONCAT71((int7)((ulonglong)lVar37 >> 8),1);
                      if ((char)local_70 == '\0') {
                        FUN_00d50b00();
                      }
                    }
                  }
                  local_b8 = puVar16;
                  lVar37 = local_90[4];
                  if (0 < *(int *)(lVar37 + 0xc)) {
                    lVar34 = 0;
                    local_50 = plVar31;
                    do {
                      plVar21 = *(longlong **)
                                 (*(longlong *)(*(longlong *)(lVar37 + 0x10) + lVar34 * 8) + 0x10);
                      if (plVar21 != (longlong *)0x0) {
                        FUN_00d50b00();
                        local_1d8 = '\0';
                        local_1e0 = plVar21;
                        local_78 = plVar21;
                        FUN_018da560();
                        plVar15 = local_48;
                        if (local_40[0] == '\0') {
                          if (((local_48 != (longlong *)0x0) &&
                              (FUN_00d50b00(), local_40[0] != '\0')) &&
                             (local_48 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        else {
                          local_40[0] = '\0';
                        }
                        if ((local_1d8 != '\0') && (local_1e0 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        local_58 = plVar15;
                        iVar28 = FUN_01715480();
                        plVar15 = (longlong *)FUN_00e8fc40();
                        FUN_00d4ff40();
                        *plVar15 = (longlong)&DAT_025683c0;
                        (*pcVar6)();
                        FUN_00c92170();
                        FUN_00c92160();
                        uVar30 = plVar21[3];
                        local_d8 = lVar34;
                        local_60 = plVar15;
                        if ((~(uint)uVar30 & 0xf) != 0) {
                          lVar37 = plVar15[3];
                          FUN_00c8e340(~(uint)uVar30,1);
                          *(int *)(plVar15[2] + (longlong)(int)lVar37) = iVar28 + 0x30;
                          uVar30 = plVar21[3];
                        }
                        plVar15 = local_60;
                        if ((~(uint)uVar30 & 0xf0) != 0) {
                          lVar37 = local_60[3];
                          FUN_00c8e340(~(uint)uVar30,1);
                          *(int *)(plVar15[2] + (longlong)(int)lVar37) = iVar28 + 0x31;
                          uVar30 = plVar21[3];
                        }
                        plVar15 = local_60;
                        if ((~(uint)uVar30 & 0xf00) != 0) {
                          lVar37 = local_60[3];
                          FUN_00c8e340(~(uint)uVar30,1);
                          *(int *)(plVar15[2] + (longlong)(int)lVar37) = iVar28 + 0x32;
                          uVar30 = plVar21[3];
                        }
                        plVar15 = local_60;
                        if ((~(uint)uVar30 & 0xf000) != 0) {
                          lVar37 = local_60[3];
                          FUN_00c8e340(~(uint)uVar30,1);
                          *(int *)(plVar15[2] + (longlong)(int)lVar37) = iVar28 + 0x33;
                          uVar30 = plVar21[3];
                        }
                        plVar15 = local_60;
                        if ((~(uint)uVar30 & 0xf0000) != 0) {
                          lVar37 = local_60[3];
                          FUN_00c8e340(~(uint)uVar30,1);
                          *(int *)(plVar15[2] + (longlong)(int)lVar37) = iVar28 + 0x34;
                          uVar30 = plVar21[3];
                        }
                        plVar15 = local_60;
                        if ((~(uint)uVar30 & 0xf00000) != 0) {
                          lVar37 = local_60[3];
                          FUN_00c8e340(~(uint)uVar30,1);
                          *(int *)(plVar15[2] + (longlong)(int)lVar37) = iVar28 + 0x35;
                          uVar30 = plVar21[3];
                        }
                        plVar15 = local_60;
                        if ((~(uint)uVar30 & 0xf000000) != 0) {
                          lVar37 = local_60[3];
                          FUN_00c8e340(~(uint)uVar30,1);
                          *(int *)(plVar15[2] + (longlong)(int)lVar37) = iVar28 + 0x36;
                          uVar30 = plVar21[3];
                        }
                        plVar15 = local_60;
                        uVar12 = (uint)uVar30 & 0xf0000000;
                        if (uVar12 != 0xf0000000) {
                          lVar37 = local_60[3];
                          FUN_00c8e340(uVar12,1);
                          *(int *)(plVar15[2] + (longlong)(int)lVar37) = iVar28 + 0x37;
                          uVar30 = plVar21[3];
                        }
                        plVar15 = local_60;
                        if ((~uVar30 & 0xf00000000) != 0) {
                          lVar37 = local_60[3];
                          FUN_00c8e340(~uVar30,1);
                          *(int *)(plVar15[2] + (longlong)(int)lVar37) = iVar28 + 0x38;
                          uVar30 = plVar21[3];
                        }
                        plVar15 = local_60;
                        if ((~uVar30 & 0xf000000000) != 0) {
                          lVar37 = local_60[3];
                          FUN_00c8e340(~uVar30,1);
                          *(int *)(plVar15[2] + (longlong)(int)lVar37) = iVar28 + 0x39;
                          uVar30 = plVar21[3];
                        }
                        plVar15 = local_60;
                        if ((~uVar30 & 0xf0000000000) != 0) {
                          lVar37 = local_60[3];
                          FUN_00c8e340(~uVar30,1);
                          *(int *)(plVar15[2] + (longlong)(int)lVar37) = iVar28 + 0x3a;
                          uVar30 = plVar21[3];
                        }
                        plVar15 = local_60;
                        if ((~uVar30 & 0xf00000000000) != 0) {
                          lVar37 = local_60[3];
                          FUN_00c8e340(0xf00000000000,1);
                          *(int *)(plVar15[2] + (longlong)(int)lVar37) = iVar28 + 0x3b;
                        }
                        iVar10 = FUN_01716a70();
                        plVar15 = local_60;
                        iVar10 = iVar10 + iVar28;
                        iVar9 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) -
                                         (iVar10 >> 0x1f)) * -0xc;
                        uVar12 = iVar9 >> 0x1f & 0xc;
                        iVar28 = iVar9 + uVar12 + 0x31;
                        if (*(int *)local_60[2] < iVar28) {
                          iVar28 = *(int *)local_60[2];
                        }
                        lVar37 = local_60[3];
                        FUN_00c8e340((ulonglong)((longlong)iVar10 * 0x2aaaaaab) >> 0x3f,1);
                        iVar9 = iVar9 + uVar12;
                        uVar12 = (iVar9 - iVar28) + 0x3c;
                        piVar4 = (int *)plVar15[2];
                        _memmove((void *)(ulonglong)((uVar12 / 0xc) * 0xc),
                                 (void *)(longlong)(int)lVar37,(size_t)plVar33);
                        *piVar4 = iVar9 + (uVar12 % 0xc - uVar12) + 0x30;
                        local_48 = local_78;
                        local_40[0] = '\0';
                        FUN_00d21140();
                        plVar31 = local_50;
                        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        local_1d0 = local_60;
                        local_1c8 = '\0';
                        local_1c0 = 0;
                        local_1b8 = '\0';
                        local_1b0 = 0;
                        local_1a8 = '\0';
                        plVar15 = &local_1b0;
                        FUN_018dc310();
                        plVar21 = local_48;
                        if (local_40[0] == '\0') {
                          if (((local_48 != (longlong *)0x0) &&
                              (FUN_00d50b00(), local_40[0] != '\0')) &&
                             (local_48 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        else {
                          local_40[0] = '\0';
                        }
                        if ((local_1a8 != '\0') && (local_1b0 != 0)) {
                          FUN_00d50b20();
                        }
                        if ((local_1b8 != '\0') && (local_1c0 != 0)) {
                          FUN_00d50b20();
                        }
                        if ((local_1c8 != '\0') && (local_1d0 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (0 < *(int *)((longlong)plVar21 + 0xc)) {
                          lVar37 = 0;
                          do {
                            plVar5 = *(longlong **)(plVar21[2] + lVar37 * 8);
                            if (plVar5 != (longlong *)0x0) {
                              FUN_00d50b00();
                            }
                            if (local_82 == '\0') {
                              FUN_01716100();
                            }
                            if (local_50 != (longlong *)0x0) {
                              iVar28 = FUN_01715480();
                              pvVar14 = _pthread_getspecific((pthread_key_t)plVar15);
                              if ((pvVar14 != (void *)0x0) && (lVar34 = FUN_00e8b990(), lVar34 != 0)
                                 ) {
                                plVar15 = local_50;
                              }
                              iVar10 = FUN_01743720();
                              pvVar14 = _pthread_getspecific((pthread_key_t)plVar15);
                              plVar31 = local_50;
                              if ((pvVar14 != (void *)0x0) &&
                                 (lVar34 = FUN_00e8b990(), plVar31 = local_50, lVar34 != 0)) {
                                plVar15 = local_50;
                                plVar31 = (longlong *)
                                          local_50[(ulonglong)(*(uint *)(lVar34 + 0x154) & 1) + 4];
                              }
                              cVar7 = (**(code **)(*plVar31 + 0x400))();
                              if (cVar7 == '\0') {
                                if (iVar10 < 1) goto LAB_01855cd7;
LAB_01855cf6:
                                iVar9 = iVar10 + -6;
                                if (iVar10 < 6) {
                                  iVar9 = -1;
                                }
LAB_01855d04:
                                iVar28 = iVar28 * 7;
                                iVar28 = iVar28 + (((uint)(iVar28 / 6 + (iVar28 >> 0x1f)) >> 1) -
                                                  (iVar28 >> 0x1f)) * -0xc;
                                iVar9 = ((iVar28 >> 0x1f & 0xcU) + iVar28) - iVar9;
                                plVar15 = (longlong *)
                                          (ulonglong)
                                          ((int)(iVar9 + (((uint)(iVar9 / 6 + (iVar9 >> 0x1f)) >> 1)
                                                         - (iVar9 >> 0x1f)) * -0xc) >> 0x1f & 0xc);
                              }
                              else if (((iVar10 != 1) || (iVar28 != 6)) &&
                                      ((iVar10 != 2 || (iVar28 != 1)))) {
                                iVar10 = iVar10 + -3;
                                if ((int)-(uint)(iVar10 == 0) < iVar10) goto LAB_01855cf6;
LAB_01855cd7:
                                iVar9 = iVar10 + -1;
                                if (-6 < iVar10) {
                                  iVar9 = -6;
                                }
                                goto LAB_01855d04;
                              }
                              FUN_01715d30();
                              iVar28 = FUN_017154c0();
                              pvVar14 = _pthread_getspecific((pthread_key_t)plVar15);
                              if ((pvVar14 != (void *)0x0) && (lVar34 = FUN_00e8b990(), lVar34 != 0)
                                 ) {
                                plVar15 = local_50;
                              }
                              iVar10 = FUN_01743720();
                              pvVar14 = _pthread_getspecific((pthread_key_t)plVar15);
                              plVar31 = local_50;
                              if ((pvVar14 != (void *)0x0) &&
                                 (lVar34 = FUN_00e8b990(), plVar31 = local_50, lVar34 != 0)) {
                                plVar15 = local_50;
                                plVar31 = (longlong *)
                                          local_50[(ulonglong)(*(uint *)(lVar34 + 0x154) & 1) + 4];
                              }
                              cVar7 = (**(code **)(*plVar31 + 0x400))();
                              if (cVar7 == '\0') {
                                if (iVar10 < 1) goto LAB_01855e47;
LAB_01855e66:
                                iVar9 = iVar10 + -6;
                                if (iVar10 < 6) {
                                  iVar9 = -1;
                                }
LAB_01855e74:
                                iVar28 = iVar28 * 7;
                                iVar28 = iVar28 + (((uint)(iVar28 / 6 + (iVar28 >> 0x1f)) >> 1) -
                                                  (iVar28 >> 0x1f)) * -0xc;
                                iVar9 = ((iVar28 >> 0x1f & 0xcU) + iVar28) - iVar9;
                                plVar15 = (longlong *)
                                          (ulonglong)
                                          ((int)(iVar9 + (((uint)(iVar9 / 6 + (iVar9 >> 0x1f)) >> 1)
                                                         - (iVar9 >> 0x1f)) * -0xc) >> 0x1f & 0xc);
                              }
                              else if (((iVar10 != 1) || (iVar28 != 6)) &&
                                      ((iVar10 != 2 || (iVar28 != 1)))) {
                                iVar10 = iVar10 + -3;
                                if ((int)-(uint)(iVar10 == 0) < iVar10) goto LAB_01855e66;
LAB_01855e47:
                                iVar9 = iVar10 + -1;
                                if (-6 < iVar10) {
                                  iVar9 = -6;
                                }
                                goto LAB_01855e74;
                              }
                              FUN_01716a00();
                            }
                            local_40[0] = '\0';
                            local_48 = plVar5;
                            FUN_00d21140();
                            plVar31 = local_50;
                            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                              FUN_00d50b20();
                            }
                            if (plVar5 != (longlong *)0x0) {
                              FUN_00d50b20();
                            }
                            lVar37 = lVar37 + 1;
                          } while (lVar37 < *(int *)((longlong)plVar21 + 0xc));
                        }
                        FUN_00d50b20();
                        plVar15 = local_68;
                        lVar34 = local_d8;
                        if (local_60 != (longlong *)0x0) {
                          FUN_00d50b20();
                        }
                        if (local_58 != (longlong *)0x0) {
                          FUN_00d50b20();
                        }
                        FUN_00d50b20();
                      }
                      lVar34 = lVar34 + 1;
                      lVar37 = local_90[4];
                    } while (lVar34 < *(int *)(lVar37 + 0xc));
                  }
                  ppVar36 = local_e8;
                  iVar28 = 0x54;
                  if (((char)local_b8 != '\0') && (plVar31 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                goto LAB_01855625;
              }
            }
            iVar28 = 0;
          }
LAB_01855625:
          FUN_00d50b20();
          if ((iVar28 != 0x56) && (iVar28 != 0)) break;
          ppVar36 = (pthread_key_t *)((longlong)ppVar36 + 1);
          lVar34 = *local_98;
          lVar37 = (longlong)*(int *)(lVar34 + 0xc);
        } while ((longlong)ppVar36 < lVar37);
      }
      uVar12 = *(uint *)((longlong)plVar15 + 0xc);
      if (1 < (int)uVar12) {
        plVar15 = (longlong *)(ulonglong)(uVar12 - 2);
        local_60 = (longlong *)(ulonglong)uVar12;
        do {
          plVar33 = (longlong *)((longlong)local_60 + -1);
          lVar37 = *(longlong *)(local_68[2] + ((ulonglong)plVar33 & 0xffffffff) * 8);
          local_98 = (longlong *)CONCAT44(local_98._4_4_,uVar12 - 1);
          iVar28 = uVar12 - 1;
          local_90 = local_60;
          local_50 = plVar15;
          if (lVar37 != 0) {
            local_60 = plVar33;
            FUN_00d50b00();
            plVar15 = local_50;
            iVar28 = (uint)local_98;
            plVar33 = local_60;
          }
          do {
            local_60 = plVar33;
            local_198 = '\0';
            local_1a0 = lVar37;
            cVar7 = (**(code **)(**(longlong **)(local_68[2] + (longlong)plVar15 * 8) + 0x50))();
            if ((local_198 != '\0') && (local_1a0 != 0)) {
              FUN_00d50b20();
            }
            if (cVar7 != '\0') {
              FUN_00d23620();
              break;
            }
            plVar15 = (longlong *)((longlong)plVar15 + -1);
            iVar28 = iVar28 + -1;
            plVar33 = local_60;
          } while (0 < iVar28);
          if (lVar37 != 0) {
            FUN_00d50b20();
          }
          plVar15 = (longlong *)((longlong)local_50 + -1);
          uVar12 = (uint)local_98;
        } while (2 < (longlong)local_90);
      }
      FUN_00d216c0();
      iVar28 = *(int *)((longlong)local_68 + 0xc);
      while (iVar28 != 0) {
        plVar15 = *(longlong **)local_68[2];
        if (plVar15 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        iVar10 = FUN_01715480();
        local_40[0] = '\0';
        local_48 = plVar15;
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d23620();
        iVar28 = *(int *)((longlong)local_68 + 0xc);
        if (0 < iVar28) {
          iVar9 = 0;
          do {
            plVar33 = *(longlong **)(local_68[2] + (longlong)iVar9 * 8);
            if (plVar33 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            iVar28 = FUN_01715480();
            if (iVar28 == iVar10) {
              local_40[0] = '\0';
              local_48 = plVar33;
              FUN_00d21140();
              if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d23620();
              iVar9 = iVar9 + -1;
            }
            if (plVar33 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            iVar9 = iVar9 + 1;
            iVar28 = *(int *)((longlong)local_68 + 0xc);
          } while (iVar9 < iVar28);
        }
        if (plVar15 != (longlong *)0x0) {
          FUN_00d50b20();
          iVar28 = *(int *)((longlong)local_68 + 0xc);
        }
      }
      if (*(int *)(*param_4 + 0xc) != 0) {
        FUN_00d23620();
      }
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar37 = *(longlong *)(unaff_RSI + 0x70);
    if (lVar37 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar37;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  return;
LAB_01854eb0:
  plVar21 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar21 = (longlong)&DAT_0260d588;
  *(undefined4 *)((longlong)plVar21 + 0xc) = 0;
  plVar21[2] = 0;
  uVar41 = FUN_00d500e0();
  plVar31 = (longlong *)plVar21[2];
  if (plVar31 != plVar15) {
    uVar41 = FUN_00d50b00();
    plVar21[2] = (longlong)plVar15;
    if (plVar31 != (longlong *)0x0) {
      uVar41 = FUN_00d50b20();
    }
  }
  *(undefined4 *)((longlong)plVar21 + 0xc) =
       *(undefined4 *)(**(longlong **)(*(longlong *)(lVar37 + 0x20) + 0x10) + 0xc);
  local_48 = plVar21;
  if (local_81 == 0) {
    local_40[0] = '\0';
    plVar15 = (longlong *)0x0;
    FUN_00d23370(uVar41,0);
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
    plVar15 = (longlong *)0x0;
    FUN_00d23370(uVar41,1);
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
LAB_01854f97:
  FUN_00d50b20();
  lVar34 = lVar34 + 1;
  lVar37 = *local_98;
  if (*(int *)(lVar37 + 0xc) <= lVar34) goto LAB_01854ff0;
  goto LAB_01854c90;
}


