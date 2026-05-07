// Function: FUN_0148ced0
// Address: 0148ced0
// Size: 9979 bytes
// Class: MDPluginDocument


/* WARNING: Removing unreachable block (ram,0x0148f613) */
/* WARNING: Removing unreachable block (ram,0x0148e665) */
/* WARNING: Removing unreachable block (ram,0x0148dc77) */
/* WARNING: Removing unreachable block (ram,0x0148e857) */
/* WARNING: Removing unreachable block (ram,0x0148da85) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0148ced0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iVar28;
  uint uVar29;
  void *pvVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  undefined8 uVar34;
  longlong *plVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  char in_CL;
  pthread_key_t pVar38;
  ulonglong uVar39;
  void *pvVar40;
  void *pvVar41;
  void *in_RDX;
  longlong lVar42;
  longlong lVar43;
  ulonglong uVar44;
  longlong lVar45;
  longlong *unaff_RSI;
  longlong lVar46;
  ulonglong uVar47;
  longlong unaff_RDI;
  ulonglong uVar48;
  ulonglong uVar49;
  longlong lVar50;
  int in_R8D;
  size_t sVar51;
  char in_R9B;
  ulonglong uVar52;
  float fVar53;
  longlong lVar54;
  int iVar55;
  bool bVar56;
  undefined4 uVar57;
  double dVar58;
  int iVar69;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar62 [16];
  int iVar68;
  int iVar70;
  undefined1 auVar63 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar74;
  float fVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  char local_res8;
  char local_res10;
  char local_res18;
  undefined4 local_res20;
  longlong local_350;
  undefined1 local_348;
  longlong local_340;
  undefined1 local_338;
  longlong local_330;
  undefined1 local_328;
  longlong local_320;
  undefined1 local_318;
  longlong local_310;
  undefined1 local_308;
  longlong local_300;
  undefined1 local_2f8;
  longlong local_2f0;
  undefined1 local_2e8;
  longlong local_2e0;
  undefined1 local_2d8;
  longlong local_2d0;
  undefined1 local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  ulonglong local_2a0;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  undefined1 local_288 [16];
  ulonglong local_278;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  undefined1 local_248 [16];
  longlong local_230;
  char local_228;
  void *local_220;
  char local_218;
  longlong local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  ulonglong local_1c0;
  undefined8 local_1b8;
  int iStack_1b0;
  int iStack_1ac;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  longlong local_a8;
  uint local_80;
  void *local_70;
  undefined1 local_68 [16];
  char local_49;
  longlong local_48;
  char local_40;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  
  pVar38 = *(pthread_key_t *)(*unaff_RSI + 0x24);
  uVar39 = (ulonglong)(int)pVar38;
  local_2a8 = *(undefined8 *)(*unaff_RSI + 0x38);
  local_d8 = uVar39;
  local_1d0 = param_4;
  local_1c4 = param_1;
  local_1cc = param_3;
  local_1c8 = param_2;
  if (in_R8D != 0) {
    FUN_00d216c0();
    pVar38 = (pthread_key_t)uVar39;
  }
  uVar39 = local_d8;
  if (local_res18 != '\0') {
    FUN_00d216c0();
    uVar39 = local_d8;
  }
  uVar5 = uVar39 & 0xffffffff;
  local_d8 = uVar39;
  if (local_res10 != '\0') {
    FUN_00d216c0();
  }
  pvVar41 = *(void **)(unaff_RDI + 0x160);
  iVar55 = (int)uVar39;
  local_70 = pvVar41;
  if (pvVar41 == (void *)0x0) {
    if (MACH_HEADER.filetype == 0) goto LAB_0148d012;
LAB_0148cf99:
    local_49 = local_res8;
    local_248 = ZEXT416((uint)DAT_02390124);
    local_a8 = 0;
    local_d0 = 0;
    if (in_R9B != '\0') goto LAB_0148e896;
  }
  else {
    FUN_00d50b00();
    if (*(int *)(*(longlong *)(unaff_RDI + 0x160) + 0xc) != 0) goto LAB_0148cf99;
LAB_0148d012:
    plVar35 = *(longlong **)(unaff_RDI + 0x68);
    pvVar30 = _pthread_getspecific(pVar38);
    if (pvVar30 != (void *)0x0) {
      plVar35 = *(longlong **)(unaff_RDI + 0x68);
      lVar31 = FUN_00e8b990();
      if (lVar31 != 0) {
        plVar35 = (longlong *)plVar35[(ulonglong)(*(uint *)(lVar31 + 0x154) & 1) + 4];
      }
    }
    iVar28 = (**(code **)(*plVar35 + 0x3a0))();
    if ((iVar28 == 2) && (in_CL != '\0')) {
      dVar58 = (double)*(int *)(*unaff_RSI + 0x20) * *(double *)(*unaff_RSI + 0x18) + DAT_023942d0;
      local_48 = FUN_00e83010();
      ___bzero();
      plVar35 = *(longlong **)(unaff_RDI + 0x68);
      pvVar30 = _pthread_getspecific(pVar38);
      if (pvVar30 != (void *)0x0) {
        plVar35 = *(longlong **)(unaff_RDI + 0x68);
        lVar31 = FUN_00e8b990();
        if (lVar31 != 0) {
          plVar35 = (longlong *)plVar35[(ulonglong)(*(uint *)(lVar31 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar35 + 0x388))(0,DAT_0238fee8,1);
      lVar31 = *(longlong *)(unaff_RDI + 0x68);
      if (lVar31 != 0) {
        FUN_00d50b00();
      }
      lVar45 = *(longlong *)(unaff_RDI + 0x160);
      if (lVar45 != 0) {
        FUN_00d50b00();
      }
      local_348 = 1;
      local_340 = *unaff_RSI;
      local_338 = 0;
      pvVar30 = in_RDX;
      local_350 = lVar45;
      FUN_014b0a60(in_RDX,&local_350,&local_340,0);
      pVar38 = (pthread_key_t)pvVar30;
      if (lVar45 != 0) {
        FUN_00d50b20();
      }
      if (lVar31 != 0) {
        FUN_00d50b20();
      }
      ___bzero();
      plVar35 = *(longlong **)(unaff_RDI + 0x68);
      pvVar30 = _pthread_getspecific(pVar38);
      if (pvVar30 != (void *)0x0) {
        plVar35 = *(longlong **)(unaff_RDI + 0x68);
        lVar31 = FUN_00e8b990();
        if (lVar31 != 0) {
          plVar35 = (longlong *)plVar35[(ulonglong)(*(uint *)(lVar31 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar35 + 0x388))(1,DAT_0238fee8,1,(longlong)-((int)dVar58 / 2));
      lVar31 = *(longlong *)(unaff_RDI + 0x68);
      if (lVar31 != 0) {
        FUN_00d50b00();
      }
      local_328 = 1;
      lVar45 = *(longlong *)(unaff_RDI + 0x168);
      local_330 = lVar31;
      if (lVar45 != 0) {
        FUN_00d50b00();
      }
      local_318 = 1;
      local_310 = *unaff_RSI;
      local_308 = 0;
      plVar35 = &local_310;
      local_320 = lVar45;
      FUN_014b0a60(in_RDX,&local_320,plVar35,0);
      sVar51 = (size_t)plVar35;
      if (lVar45 != 0) {
        FUN_00d50b20();
      }
      if (lVar31 != 0) {
        FUN_00d50b20();
      }
      FUN_00e83070();
      local_48 = 0;
      pvVar30 = *(void **)(unaff_RDI + 0x160);
      if (pvVar41 != pvVar30) {
        pvVar40 = pvVar41;
        if (pvVar30 != (void *)0x0) {
          FUN_00d50b00();
        }
        bVar56 = pvVar41 != (void *)0x0;
        pvVar41 = pvVar40;
        local_70 = pvVar30;
        if (bVar56) {
          FUN_00d50b20();
          pvVar41 = pvVar40;
        }
      }
      local_a8 = *(longlong *)(unaff_RDI + 0x168);
      if (local_a8 == 0) {
        local_d0 = 0;
      }
      else {
        local_d0 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
        FUN_00d50b00();
      }
      local_248 = ZEXT416((uint)DAT_0239011c);
    }
    else {
      lVar31 = *(longlong *)(unaff_RDI + 0x68);
      if (lVar31 != 0) {
        FUN_00d50b00();
      }
      local_2f8 = 1;
      lVar45 = *(longlong *)(unaff_RDI + 0x160);
      local_300 = lVar31;
      if (lVar45 != 0) {
        FUN_00d50b00();
      }
      local_2e8 = 1;
      local_2e0 = *unaff_RSI;
      local_2d8 = 0;
      plVar35 = &local_2e0;
      pvVar41 = in_RDX;
      local_2f0 = lVar45;
      FUN_014b0a60(in_RDX,&local_2f0,plVar35,0);
      sVar51 = (size_t)plVar35;
      if (lVar45 != 0) {
        FUN_00d50b20();
      }
      local_248 = ZEXT416((uint)DAT_02390124);
      if (lVar31 != 0) {
        FUN_00d50b20();
      }
      local_d0 = 0;
      local_a8 = 0;
    }
    FUN_018acae0();
    local_230 = DAT_027db9e8;
    if (DAT_027db9e8 != 0) {
      FUN_00d50b00();
    }
    local_228 = '\x01';
    dVar58 = (double)FUN_018ade30();
    if ((local_228 != '\0') && (local_230 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_49 = '\x01';
    if (DAT_023942d0 < dVar58) {
      FUN_00c8e690();
      lVar31 = local_48;
      if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      FUN_00c8e690();
      lVar45 = local_48;
      if (((local_40 == '\0') && (local_48 != 0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != 0)))) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      FUN_00c8e690();
      lVar50 = local_48;
      if (((local_40 == '\0') && (local_48 != 0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != 0)))) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      if (3 < (int)*(uint *)(lVar50 + 0x18)) {
        _memset_pattern16(pvVar41,(void *)((ulonglong)((*(uint *)(lVar50 + 0x18) >> 2) - 1) * 4 + 4)
                          ,sVar51);
      }
      lVar33 = *(longlong *)(unaff_RDI + 0x160);
      if (0 < *(int *)(lVar33 + 0xc)) {
        if (iVar55 < 2) {
          lVar54 = 0;
          do {
            lVar33 = *(longlong *)(*(longlong *)(lVar33 + 0x10) + lVar54 * 8);
            if (lVar33 != 0) {
              FUN_00d50b00();
            }
            FUN_015c6b60();
            if (lVar33 != 0) {
              FUN_00d50b20();
            }
            lVar54 = lVar54 + 1;
            lVar33 = *(longlong *)(unaff_RDI + 0x160);
          } while (lVar54 < *(int *)(lVar33 + 0xc));
        }
        else {
          uVar39 = uVar5 - 1;
          if (uVar39 < 8) {
            uVar52 = (ulonglong)((uint)uVar39 & 3);
            lVar54 = 0;
            do {
              lVar33 = *(longlong *)(*(longlong *)(lVar33 + 0x10) + lVar54 * 8);
              if (lVar33 != 0) {
                FUN_00d50b00();
              }
              lVar32 = FUN_015c6b60();
              lVar43 = *(longlong *)(lVar31 + 0x10);
              lVar42 = 1;
              if (2 < uVar5 - 2) {
                uVar47 = 0;
                do {
                  uVar49 = uVar47;
                  *(float *)(lVar43 + 4 + uVar49 * 4) =
                       *(float *)(lVar32 + 4 + uVar49 * 4) + *(float *)(lVar43 + 4 + uVar49 * 4);
                  *(float *)(lVar43 + 8 + uVar49 * 4) =
                       *(float *)(lVar32 + 8 + uVar49 * 4) + *(float *)(lVar43 + 8 + uVar49 * 4);
                  *(float *)(lVar43 + 0xc + uVar49 * 4) =
                       *(float *)(lVar32 + 0xc + uVar49 * 4) + *(float *)(lVar43 + 0xc + uVar49 * 4)
                  ;
                  *(float *)(lVar43 + 0x10 + uVar49 * 4) =
                       *(float *)(lVar32 + 0x10 + uVar49 * 4) +
                       *(float *)(lVar43 + 0x10 + uVar49 * 4);
                  uVar47 = uVar49 + 4;
                } while ((uVar39 & 0xfffffffffffffffc) != uVar49 + 4);
                lVar42 = uVar49 + 5;
              }
              if (uVar52 != 0) {
                lVar43 = lVar43 + lVar42 * 4;
                uVar47 = 0;
                do {
                  *(float *)(lVar43 + uVar47 * 4) =
                       *(float *)(lVar32 + lVar42 * 4 + uVar47 * 4) +
                       *(float *)(lVar43 + uVar47 * 4);
                  uVar47 = uVar47 + 1;
                } while (uVar52 != uVar47);
              }
              if (lVar33 != 0) {
                FUN_00d50b20();
              }
              lVar54 = lVar54 + 1;
              lVar33 = *(longlong *)(unaff_RDI + 0x160);
            } while (lVar54 < *(int *)(lVar33 + 0xc));
          }
          else {
            uVar52 = uVar39 & 0xfffffffffffffff8;
            if (uVar39 == uVar52) {
              uVar49 = (uVar52 - 8 >> 3) + 1;
              uVar48 = (ulonglong)((uint)uVar39 & 3);
              local_1b8 = -(uVar49 & 0xfffffffffffffffe);
              lVar54 = 0;
              uVar47 = uVar49;
              do {
                lVar33 = *(longlong *)(*(longlong *)(lVar33 + 0x10) + lVar54 * 8);
                if (lVar33 != 0) {
                  FUN_00d50b00(uVar47);
                }
                lVar32 = FUN_015c6b60();
                lVar43 = *(longlong *)(lVar31 + 0x10);
                if ((lVar43 + 4U < lVar32 + uVar5 * 4) && (lVar32 + 4U < lVar43 + uVar5 * 4)) {
                  lVar42 = 1;
                  if (2 < uVar5 - 2) {
                    uVar47 = 0;
                    do {
                      uVar44 = uVar47;
                      *(float *)(lVar43 + 4 + uVar44 * 4) =
                           *(float *)(lVar32 + 4 + uVar44 * 4) + *(float *)(lVar43 + 4 + uVar44 * 4)
                      ;
                      *(float *)(lVar43 + 8 + uVar44 * 4) =
                           *(float *)(lVar32 + 8 + uVar44 * 4) + *(float *)(lVar43 + 8 + uVar44 * 4)
                      ;
                      *(float *)(lVar43 + 0xc + uVar44 * 4) =
                           *(float *)(lVar32 + 0xc + uVar44 * 4) +
                           *(float *)(lVar43 + 0xc + uVar44 * 4);
                      *(float *)(lVar43 + 0x10 + uVar44 * 4) =
                           *(float *)(lVar32 + 0x10 + uVar44 * 4) +
                           *(float *)(lVar43 + 0x10 + uVar44 * 4);
                      uVar47 = uVar44 + 4;
                    } while ((uVar39 & 0xfffffffffffffffc) != uVar44 + 4);
                    lVar42 = uVar44 + 5;
                  }
                  if (uVar48 != 0) {
                    lVar43 = lVar43 + lVar42 * 4;
                    uVar47 = 0;
                    do {
                      *(float *)(lVar43 + uVar47 * 4) =
                           *(float *)(lVar32 + lVar42 * 4 + uVar47 * 4) +
                           *(float *)(lVar43 + uVar47 * 4);
                      uVar47 = uVar47 + 1;
                    } while (uVar48 != uVar47);
                  }
                }
                else {
                  if (uVar52 - 8 == 0) {
                    lVar42 = 0;
                  }
                  else {
                    lVar42 = 0;
                    lVar46 = local_1b8;
                    do {
                      pfVar1 = (float *)(lVar32 + 4 + lVar42 * 4);
                      fVar53 = pfVar1[1];
                      fVar74 = pfVar1[2];
                      fVar79 = pfVar1[3];
                      pfVar2 = (float *)(lVar32 + 0x14 + lVar42 * 4);
                      fVar7 = *pfVar2;
                      fVar4 = pfVar2[1];
                      fVar8 = pfVar2[2];
                      fVar9 = pfVar2[3];
                      pfVar2 = (float *)(lVar43 + 4 + lVar42 * 4);
                      fVar10 = pfVar2[1];
                      fVar75 = pfVar2[2];
                      fVar11 = pfVar2[3];
                      pfVar3 = (float *)(lVar43 + 0x14 + lVar42 * 4);
                      fVar12 = *pfVar3;
                      fVar13 = pfVar3[1];
                      fVar14 = pfVar3[2];
                      fVar15 = pfVar3[3];
                      pfVar3 = (float *)(lVar43 + 0x24 + lVar42 * 4);
                      fVar16 = *pfVar3;
                      fVar17 = pfVar3[1];
                      fVar18 = pfVar3[2];
                      fVar19 = pfVar3[3];
                      pfVar3 = (float *)(lVar43 + 0x34 + lVar42 * 4);
                      fVar20 = *pfVar3;
                      fVar21 = pfVar3[1];
                      fVar22 = pfVar3[2];
                      fVar23 = pfVar3[3];
                      pfVar3 = (float *)(lVar43 + 4 + lVar42 * 4);
                      *pfVar3 = *pfVar2 + *pfVar1;
                      pfVar3[1] = fVar10 + fVar53;
                      pfVar3[2] = fVar75 + fVar74;
                      pfVar3[3] = fVar11 + fVar79;
                      pfVar1 = (float *)(lVar43 + 0x14 + lVar42 * 4);
                      *pfVar1 = fVar12 + fVar7;
                      pfVar1[1] = fVar13 + fVar4;
                      pfVar1[2] = fVar14 + fVar8;
                      pfVar1[3] = fVar15 + fVar9;
                      pfVar1 = (float *)(lVar32 + 0x24 + lVar42 * 4);
                      fVar53 = pfVar1[1];
                      fVar74 = pfVar1[2];
                      fVar79 = pfVar1[3];
                      pfVar2 = (float *)(lVar32 + 0x34 + lVar42 * 4);
                      auVar60._0_4_ = *pfVar2 + fVar20;
                      auVar60._4_4_ = pfVar2[1] + fVar21;
                      auVar60._8_4_ = pfVar2[2] + fVar22;
                      auVar60._12_4_ = pfVar2[3] + fVar23;
                      pfVar2 = (float *)(lVar43 + 0x24 + lVar42 * 4);
                      *pfVar2 = *pfVar1 + fVar16;
                      pfVar2[1] = fVar53 + fVar17;
                      pfVar2[2] = fVar74 + fVar18;
                      pfVar2[3] = fVar79 + fVar19;
                      *(undefined1 (*) [16])(lVar43 + 0x34 + lVar42 * 4) = auVar60;
                      lVar42 = lVar42 + 0x10;
                      lVar46 = lVar46 + 2;
                    } while (lVar46 != 0);
                    if ((uVar49 & 1) == 0) goto LAB_0148da64;
                  }
                  uVar47 = lVar42 << 2 | 4;
                  pfVar1 = (float *)(lVar32 + uVar47);
                  fVar53 = pfVar1[1];
                  fVar74 = pfVar1[2];
                  fVar79 = pfVar1[3];
                  auVar77 = *(undefined1 (*) [16])(lVar32 + 0x10 + uVar47);
                  pfVar2 = (float *)(lVar43 + uVar47);
                  fVar7 = pfVar2[1];
                  fVar4 = pfVar2[2];
                  fVar8 = pfVar2[3];
                  pfVar3 = (float *)(lVar43 + 0x10 + uVar47);
                  fVar9 = *pfVar3;
                  fVar10 = pfVar3[1];
                  fVar75 = pfVar3[2];
                  fVar11 = pfVar3[3];
                  pfVar3 = (float *)(lVar43 + uVar47);
                  *pfVar3 = *pfVar2 + *pfVar1;
                  pfVar3[1] = fVar7 + fVar53;
                  pfVar3[2] = fVar4 + fVar74;
                  pfVar3[3] = fVar8 + fVar79;
                  pfVar1 = (float *)(lVar43 + 0x10 + uVar47);
                  *pfVar1 = fVar9 + auVar77._0_4_;
                  pfVar1[1] = fVar10 + auVar77._4_4_;
                  pfVar1[2] = fVar75 + auVar77._8_4_;
                  pfVar1[3] = fVar11 + auVar77._12_4_;
                }
LAB_0148da64:
                if (lVar33 != 0) {
                  FUN_00d50b20();
                }
                lVar54 = lVar54 + 1;
                lVar33 = *(longlong *)(unaff_RDI + 0x160);
                uVar47 = (ulonglong)*(int *)(lVar33 + 0xc);
              } while (lVar54 < (longlong)uVar47);
            }
            else {
              uVar47 = (uVar52 - 8 >> 3) + 1;
              lVar54 = 0;
              uVar39 = uVar47;
              do {
                lVar33 = *(longlong *)(*(longlong *)(lVar33 + 0x10) + lVar54 * 8);
                if (lVar33 != 0) {
                  FUN_00d50b00(uVar39);
                }
                lVar32 = FUN_015c6b60();
                lVar43 = *(longlong *)(lVar31 + 0x10);
                if ((lVar32 + uVar5 * 4 <= lVar43 + 4U) ||
                   (uVar39 = 1, lVar43 + uVar5 * 4 <= lVar32 + 4U)) {
                  uVar39 = uVar52 + 1;
                  if (uVar52 - 8 == 0) {
                    lVar42 = 0;
                  }
                  else {
                    lVar42 = 0;
                    lVar46 = -(uVar47 & 0xfffffffffffffffe);
                    do {
                      pfVar1 = (float *)(lVar32 + 4 + lVar42 * 4);
                      fVar53 = pfVar1[1];
                      fVar74 = pfVar1[2];
                      fVar79 = pfVar1[3];
                      pfVar2 = (float *)(lVar32 + 0x14 + lVar42 * 4);
                      fVar7 = *pfVar2;
                      fVar4 = pfVar2[1];
                      fVar8 = pfVar2[2];
                      fVar9 = pfVar2[3];
                      pfVar2 = (float *)(lVar43 + 4 + lVar42 * 4);
                      fVar10 = pfVar2[1];
                      fVar75 = pfVar2[2];
                      fVar11 = pfVar2[3];
                      pfVar3 = (float *)(lVar43 + 0x14 + lVar42 * 4);
                      fVar12 = *pfVar3;
                      fVar13 = pfVar3[1];
                      fVar14 = pfVar3[2];
                      fVar15 = pfVar3[3];
                      pfVar3 = (float *)(lVar43 + 0x24 + lVar42 * 4);
                      fVar16 = *pfVar3;
                      fVar17 = pfVar3[1];
                      fVar18 = pfVar3[2];
                      fVar19 = pfVar3[3];
                      pfVar3 = (float *)(lVar43 + 0x34 + lVar42 * 4);
                      fVar20 = *pfVar3;
                      fVar21 = pfVar3[1];
                      fVar22 = pfVar3[2];
                      fVar23 = pfVar3[3];
                      pfVar3 = (float *)(lVar43 + 4 + lVar42 * 4);
                      *pfVar3 = *pfVar2 + *pfVar1;
                      pfVar3[1] = fVar10 + fVar53;
                      pfVar3[2] = fVar75 + fVar74;
                      pfVar3[3] = fVar11 + fVar79;
                      pfVar1 = (float *)(lVar43 + 0x14 + lVar42 * 4);
                      *pfVar1 = fVar12 + fVar7;
                      pfVar1[1] = fVar13 + fVar4;
                      pfVar1[2] = fVar14 + fVar8;
                      pfVar1[3] = fVar15 + fVar9;
                      pfVar1 = (float *)(lVar32 + 0x24 + lVar42 * 4);
                      fVar53 = pfVar1[1];
                      fVar74 = pfVar1[2];
                      fVar79 = pfVar1[3];
                      pfVar2 = (float *)(lVar32 + 0x34 + lVar42 * 4);
                      auVar77._0_4_ = *pfVar2 + fVar20;
                      auVar77._4_4_ = pfVar2[1] + fVar21;
                      auVar77._8_4_ = pfVar2[2] + fVar22;
                      auVar77._12_4_ = pfVar2[3] + fVar23;
                      pfVar2 = (float *)(lVar43 + 0x24 + lVar42 * 4);
                      *pfVar2 = *pfVar1 + fVar16;
                      pfVar2[1] = fVar53 + fVar17;
                      pfVar2[2] = fVar74 + fVar18;
                      pfVar2[3] = fVar79 + fVar19;
                      *(undefined1 (*) [16])(lVar43 + 0x34 + lVar42 * 4) = auVar77;
                      lVar42 = lVar42 + 0x10;
                      lVar46 = lVar46 + 2;
                    } while (lVar46 != 0);
                    if ((uVar47 & 1) == 0) goto LAB_0148dbcc;
                  }
                  uVar49 = lVar42 << 2 | 4;
                  pfVar1 = (float *)(lVar32 + uVar49);
                  fVar53 = pfVar1[1];
                  fVar74 = pfVar1[2];
                  fVar79 = pfVar1[3];
                  auVar77 = *(undefined1 (*) [16])(lVar32 + 0x10 + uVar49);
                  pfVar2 = (float *)(lVar43 + uVar49);
                  fVar7 = pfVar2[1];
                  fVar4 = pfVar2[2];
                  fVar8 = pfVar2[3];
                  pfVar3 = (float *)(lVar43 + 0x10 + uVar49);
                  fVar9 = *pfVar3;
                  fVar10 = pfVar3[1];
                  fVar75 = pfVar3[2];
                  fVar11 = pfVar3[3];
                  pfVar3 = (float *)(lVar43 + uVar49);
                  *pfVar3 = *pfVar2 + *pfVar1;
                  pfVar3[1] = fVar7 + fVar53;
                  pfVar3[2] = fVar4 + fVar74;
                  pfVar3[3] = fVar8 + fVar79;
                  pfVar1 = (float *)(lVar43 + 0x10 + uVar49);
                  *pfVar1 = fVar9 + auVar77._0_4_;
                  pfVar1[1] = fVar10 + auVar77._4_4_;
                  pfVar1[2] = fVar75 + auVar77._8_4_;
                  pfVar1[3] = fVar11 + auVar77._12_4_;
                }
LAB_0148dbcc:
                uVar29 = iVar55 - (int)uVar39;
                uVar49 = ~uVar39;
                uVar48 = (ulonglong)uVar29 & 3;
                if ((uVar29 & 3) != 0) {
                  do {
                    *(float *)(lVar43 + uVar39 * 4) =
                         *(float *)(lVar32 + uVar39 * 4) + *(float *)(lVar43 + uVar39 * 4);
                    uVar39 = uVar39 + 1;
                    uVar48 = uVar48 - 1;
                  } while (uVar48 != 0);
                }
                if (2 < uVar49 + uVar5) {
                  do {
                    *(float *)(lVar43 + uVar39 * 4) =
                         *(float *)(lVar32 + uVar39 * 4) + *(float *)(lVar43 + uVar39 * 4);
                    *(float *)(lVar43 + 4 + uVar39 * 4) =
                         *(float *)(lVar32 + 4 + uVar39 * 4) + *(float *)(lVar43 + 4 + uVar39 * 4);
                    *(float *)(lVar43 + 8 + uVar39 * 4) =
                         *(float *)(lVar32 + 8 + uVar39 * 4) + *(float *)(lVar43 + 8 + uVar39 * 4);
                    *(float *)(lVar43 + 0xc + uVar39 * 4) =
                         *(float *)(lVar32 + 0xc + uVar39 * 4) +
                         *(float *)(lVar43 + 0xc + uVar39 * 4);
                    uVar39 = uVar39 + 4;
                  } while (uVar5 != uVar39);
                }
                if (lVar33 != 0) {
                  FUN_00d50b20();
                }
                lVar54 = lVar54 + 1;
                lVar33 = *(longlong *)(unaff_RDI + 0x160);
                uVar39 = (ulonglong)*(int *)(lVar33 + 0xc);
              } while (lVar54 < (longlong)uVar39);
            }
          }
        }
      }
      fVar53 = DAT_02390124;
      if (iVar55 < 2) {
        local_2c0 = *(longlong *)(lVar45 + 0x10);
      }
      else {
        lVar33 = *(longlong *)(lVar31 + 0x10);
        local_2c0 = *(longlong *)(lVar45 + 0x10);
        uVar52 = 1;
        lVar54 = 2;
        uVar39 = 0;
        do {
          fVar74 = *(float *)(lVar33 + uVar52 * 4) / (float)(int)uVar52;
          fVar74 = fVar74 + fVar74;
          *(float *)(local_2c0 + uVar52 * 4) = *(float *)(local_2c0 + uVar52 * 4) + fVar74;
          if (1 < uVar52) {
            iVar28 = 1;
            lVar43 = lVar54;
            uVar47 = uVar39;
            do {
              fVar79 = (fVar53 - (float)iVar28 / (float)(int)uVar52) * fVar74;
              if (0 < (longlong)uVar47) {
                *(float *)(local_2c0 + (uVar47 & 0xffffffff) * 4) =
                     *(float *)(local_2c0 + (uVar47 & 0xffffffff) * 4) + fVar79;
              }
              if ((int)lVar43 < iVar55) {
                *(float *)(local_2c0 + lVar43 * 4) = fVar79 + *(float *)(local_2c0 + lVar43 * 4);
              }
              lVar43 = lVar43 + 1;
              iVar28 = iVar28 + 1;
              uVar47 = uVar47 - 1;
            } while (uVar47 != 0);
          }
          uVar52 = uVar52 + 1;
          lVar54 = lVar54 + 1;
          uVar39 = uVar39 + 1;
        } while (uVar52 != uVar5);
      }
      FUN_015b32a0(local_2c0,&local_48);
      fVar7 = _UNK_0241109c;
      fVar79 = _UNK_02411098;
      fVar74 = _UNK_02411094;
      fVar53 = _DAT_02411090;
      auVar77 = _DAT_0240e220;
      iVar70 = _UNK_0239418c;
      iVar69 = _UNK_02394188;
      iVar68 = _UNK_02394184;
      iVar28 = _DAT_02394180;
      if (1 < iVar55) {
        lVar33 = *(longlong *)(lVar45 + 0x10);
        fVar4 = *(float *)(lVar33 + (longlong)(int)local_48 * 4);
        fVar75 = (float)(int)local_48;
        lVar54 = *(longlong *)(lVar50 + 0x10);
        uVar39 = uVar5 - 1;
        uVar52 = 1;
        fVar8 = DAT_02394298;
        fVar9 = DAT_02394274;
        fVar10 = DAT_02390124;
        if ((3 < uVar39) &&
           ((lVar33 + uVar5 * 4 <= lVar54 + 4U || (lVar54 + uVar5 * 4 <= lVar33 + 4U)))) {
          uVar49 = uVar39 & 0xfffffffffffffffc;
          uVar52 = uVar49 + 1;
          uVar47 = 0;
          auVar24._4_4_ = _UNK_023b2d54;
          auVar24._0_4_ = _DAT_023b2d50;
          auVar24._8_4_ = _UNK_023b2d58;
          auVar24._12_4_ = _UNK_023b2d5c;
          iVar80 = _DAT_02394150;
          iVar81 = _UNK_02394154;
          iVar82 = _UNK_02394158;
          iVar83 = _UNK_0239415c;
          do {
            auVar59._0_4_ = (float)iVar80;
            auVar59._4_4_ = (float)iVar81;
            auVar59._8_4_ = (float)iVar82;
            auVar59._12_4_ = (float)iVar83;
            auVar85._4_4_ = fVar75;
            auVar85._0_4_ = fVar75;
            auVar85._8_4_ = fVar75;
            auVar85._12_4_ = fVar75;
            auVar60 = divps(auVar59,auVar85);
            pfVar1 = (float *)(lVar33 + 4 + uVar47 * 4);
            auVar84._0_4_ = *pfVar1 * auVar60._0_4_;
            auVar84._4_4_ = pfVar1[1] * auVar60._4_4_;
            auVar84._8_4_ = pfVar1[2] * auVar60._8_4_;
            auVar84._12_4_ = pfVar1[3] * auVar60._12_4_;
            auVar6._4_4_ = fVar4;
            auVar6._0_4_ = fVar4;
            auVar6._8_4_ = fVar4;
            auVar6._12_4_ = fVar4;
            auVar60 = divps(auVar84,auVar6);
            auVar61._4_4_ = -(uint)(auVar60._4_4_ < fVar74);
            auVar61._0_4_ = -(uint)(auVar60._0_4_ < fVar53);
            auVar61._8_4_ = -(uint)(auVar60._8_4_ < fVar79);
            auVar61._12_4_ = -(uint)(auVar60._12_4_ < fVar7);
            auVar85 = divps(auVar24,auVar60);
            auVar60 = blendvps(auVar85,auVar60,auVar61);
            auVar60 = minps(auVar77,auVar60);
            *(undefined1 (*) [16])(lVar54 + 4 + uVar47 * 4) = auVar60;
            uVar47 = uVar47 + 4;
            iVar80 = iVar80 + iVar28;
            iVar81 = iVar81 + iVar68;
            iVar82 = iVar82 + iVar69;
            iVar83 = iVar83 + iVar70;
          } while (uVar49 != uVar47);
          fVar8 = DAT_02394298;
          fVar9 = DAT_02394274;
          fVar10 = DAT_02390124;
          if (uVar39 == uVar49) goto LAB_0148de98;
        }
        do {
          fVar53 = (((float)(int)uVar52 / fVar75) * *(float *)(lVar33 + uVar52 * 4)) / fVar4;
          if (fVar9 <= fVar53) {
            fVar53 = fVar10 / fVar53;
          }
          fVar74 = fVar8;
          if (fVar53 <= fVar8) {
            fVar74 = fVar53;
          }
          *(float *)(lVar54 + uVar52 * 4) = fVar74;
          uVar52 = uVar52 + 1;
        } while (uVar5 != uVar52);
      }
LAB_0148de98:
      uVar29 = FUN_00e7d850(DAT_023b4df8 / *(double *)(*unaff_RSI + 0x50));
      uVar39 = (ulonglong)(int)uVar29;
      lVar33 = *(longlong *)(lVar50 + 0x10);
      if (1 < (int)uVar29) {
        local_268 = (float)(int)uVar29;
        uVar52 = (ulonglong)uVar29 - 1;
        uVar47 = 1;
        fStack_264 = 0.0;
        fStack_260 = 0.0;
        fStack_25c = 0.0;
        if (3 < uVar52) {
          uVar47 = uVar52 & 0xfffffffffffffffc;
          local_258 = (float)uVar47;
          fStack_254 = (float)(uVar47 >> 0x20);
          uVar47 = uVar47 + 1;
          lVar54 = 0;
          iVar28 = _DAT_02394150;
          iVar68 = _UNK_02394154;
          iVar69 = _UNK_02394158;
          iVar70 = _UNK_0239415c;
          local_2a0 = uVar52;
          local_298 = local_268;
          fStack_294 = local_268;
          fStack_290 = local_268;
          fStack_28c = local_268;
          local_1c0 = uVar39;
          do {
            auVar71._0_4_ = (float)iVar28;
            auVar71._4_4_ = (float)iVar68;
            auVar71._8_4_ = (float)iVar69;
            auVar71._12_4_ = (float)iVar70;
            auVar25._4_4_ = fStack_294;
            auVar25._0_4_ = local_298;
            auVar25._8_4_ = fStack_290;
            auVar25._12_4_ = fStack_28c;
            divps(auVar71,auVar25);
            uVar34 = _powf();
            local_1b8._0_4_ = (int)uVar34;
            local_1b8._4_4_ = (int)((ulonglong)uVar34 >> 0x20);
            iStack_1b0 = (int)extraout_XMM0_Qb;
            iStack_1ac = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
            local_288._0_8_ = _powf();
            local_288._8_8_ = extraout_XMM0_Qb_00;
            local_278 = _powf();
            auVar62._0_8_ = _powf();
            auVar62._8_8_ = extraout_XMM0_Qb_01;
            auVar27._8_4_ = iStack_1b0;
            auVar27._0_8_ = local_1b8;
            auVar27._12_4_ = iStack_1ac;
            auVar77 = insertps(auVar27,local_288._0_4_,0x10);
            auVar77 = insertps(auVar77,(undefined4)local_278,0x20);
            auVar77 = insertps(auVar77,auVar62,0x30);
            *(undefined1 (*) [16])(lVar33 + 4 + lVar54 * 4) = auVar77;
            lVar54 = lVar54 + 4;
            iVar28 = iVar28 + _DAT_02394180;
            iVar68 = iVar68 + _UNK_02394184;
            iVar69 = iVar69 + _UNK_02394188;
            iVar70 = iVar70 + _UNK_0239418c;
          } while (CONCAT44(fStack_254,local_258) != lVar54);
          uVar39 = local_1c0;
          if (local_2a0 == CONCAT44(fStack_254,local_258)) goto LAB_0148e03b;
        }
        do {
          uVar57 = _powf();
          *(undefined4 *)(lVar33 + uVar47 * 4) = uVar57;
          uVar47 = uVar47 + 1;
        } while (uVar29 != uVar47);
      }
LAB_0148e03b:
      *(float *)(lVar33 + uVar39 * 4) =
           (*(float *)(lVar33 + -4 + uVar39 * 4) + *(float *)(lVar33 + 4 + uVar39 * 4)) *
           DAT_0239011c;
      iVar28 = iVar55 + 3;
      if (-1 < iVar55) {
        iVar28 = iVar55;
      }
      fVar53 = (float)(iVar28 >> 2);
      uVar39 = local_d8;
      lVar54 = local_1b8;
      if ((int)fVar53 < (int)local_d8) {
        fVar74 = (float)(iVar55 - (int)fVar53);
        local_288 = ZEXT416((uint)fVar74);
        uVar52 = (ulonglong)(int)fVar53;
        uVar39 = local_d8 - uVar52;
        if (3 < uVar39) {
          local_278 = uVar39 & 0xfffffffffffffffc;
          uVar47 = local_278 + uVar52;
          fStack_294 = 0.0;
          local_1b8._0_4_ = _DAT_0238fcc0 + (int)fVar53;
          local_1b8._4_4_ = _UNK_0238fcc4 + (int)fVar53;
          iVar28 = _UNK_0238fcc8 + (int)fVar53;
          iVar68 = _UNK_0238fccc + (int)fVar53;
          uVar49 = 0;
          local_298 = fVar53;
          local_268 = fVar53;
          fStack_264 = fVar53;
          fStack_260 = fVar53;
          fStack_25c = fVar53;
          local_258 = fVar74;
          fStack_254 = fVar74;
          fStack_250 = fVar74;
          fStack_24c = fVar74;
          local_1c0 = uVar39;
          do {
            auVar63._0_4_ = (float)((int)local_1b8 - (int)local_268);
            auVar63._4_4_ = (float)(local_1b8._4_4_ - (int)fStack_264);
            auVar63._8_4_ = (float)(iVar28 - (int)fStack_260);
            auVar63._12_4_ = (float)(iVar68 - (int)fStack_25c);
            auVar26._4_4_ = fStack_254;
            auVar26._0_4_ = local_258;
            auVar26._8_4_ = fStack_250;
            auVar26._12_4_ = fStack_24c;
            divps(auVar63,auVar26);
            iStack_1b0 = iVar28;
            iStack_1ac = iVar68;
            local_68._0_8_ = _powf();
            local_68._8_8_ = extraout_XMM0_Qb_02;
            auVar64._0_8_ = _powf();
            auVar64._8_8_ = extraout_XMM0_Qb_03;
            auVar77 = insertps(local_68,auVar64,0x10);
            auVar65._0_8_ = _powf();
            auVar65._8_8_ = extraout_XMM0_Qb_04;
            auVar77 = insertps(auVar77,auVar65,0x20);
            auVar66._0_8_ = _powf();
            lVar54 = CONCAT44(local_1b8._4_4_,(int)local_1b8);
            auVar66._8_8_ = extraout_XMM0_Qb_05;
            auVar77 = insertps(auVar77,auVar66,0x30);
            *(undefined1 (*) [16])(lVar33 + uVar52 * 4 + uVar49 * 4) = auVar77;
            uVar49 = uVar49 + 4;
            local_1b8._0_4_ = (int)local_1b8 + _DAT_02394180;
            local_1b8._4_4_ = local_1b8._4_4_ + _UNK_02394184;
            iVar28 = iStack_1b0 + _UNK_02394188;
            iVar68 = iStack_1ac + _UNK_0239418c;
          } while (local_278 != uVar49);
          uVar52 = uVar47;
          uVar39 = local_d8;
          fVar53 = local_298;
          local_1b8 = lVar54;
          if (local_1c0 == local_278) goto LAB_0148e2a0;
        }
        uVar39 = local_d8;
        do {
          fVar74 = DAT_02390124 - (float)((int)uVar52 - (int)fVar53) / local_288._0_4_;
          uVar57 = _powf(*(undefined4 *)(lVar33 + uVar52 * 4),fVar74 * fVar74);
          *(undefined4 *)(lVar33 + uVar52 * 4) = uVar57;
          uVar52 = uVar52 + 1;
          lVar54 = local_1b8;
        } while (uVar39 != uVar52);
      }
LAB_0148e2a0:
      lVar33 = *(longlong *)(unaff_RDI + 0x160);
      local_1b8 = lVar54;
      if (0 < *(int *)(lVar33 + 0xc)) {
        if ((int)uVar39 < 2) {
          lVar54 = 0;
          do {
            lVar33 = *(longlong *)(*(longlong *)(lVar33 + 0x10) + lVar54 * 8);
            if (lVar33 != 0) {
              FUN_00d50b00();
            }
            FUN_015c6b60();
            if (lVar33 != 0) {
              FUN_00d50b20();
            }
            lVar54 = lVar54 + 1;
            lVar33 = *(longlong *)(unaff_RDI + 0x160);
          } while (lVar54 < *(int *)(lVar33 + 0xc));
        }
        else {
          uVar39 = uVar5 - 1;
          if (uVar39 < 8) {
            uVar52 = (ulonglong)((uint)uVar39 & 3);
            lVar54 = 0;
            do {
              lVar33 = *(longlong *)(*(longlong *)(lVar33 + 0x10) + lVar54 * 8);
              if (lVar33 != 0) {
                FUN_00d50b00();
              }
              lVar43 = FUN_015c6b60();
              lVar32 = *(longlong *)(lVar50 + 0x10);
              lVar42 = 1;
              if (2 < uVar5 - 2) {
                uVar47 = 0;
                do {
                  uVar49 = uVar47;
                  *(float *)(lVar43 + 4 + uVar49 * 4) =
                       *(float *)(lVar32 + 4 + uVar49 * 4) * *(float *)(lVar43 + 4 + uVar49 * 4);
                  *(float *)(lVar43 + 8 + uVar49 * 4) =
                       *(float *)(lVar32 + 8 + uVar49 * 4) * *(float *)(lVar43 + 8 + uVar49 * 4);
                  *(float *)(lVar43 + 0xc + uVar49 * 4) =
                       *(float *)(lVar32 + 0xc + uVar49 * 4) * *(float *)(lVar43 + 0xc + uVar49 * 4)
                  ;
                  *(float *)(lVar43 + 0x10 + uVar49 * 4) =
                       *(float *)(lVar32 + 0x10 + uVar49 * 4) *
                       *(float *)(lVar43 + 0x10 + uVar49 * 4);
                  uVar47 = uVar49 + 4;
                } while ((uVar39 & 0xfffffffffffffffc) != uVar49 + 4);
                lVar42 = uVar49 + 5;
              }
              if (uVar52 != 0) {
                lVar43 = lVar43 + lVar42 * 4;
                uVar47 = 0;
                do {
                  *(float *)(lVar43 + uVar47 * 4) =
                       *(float *)(lVar32 + lVar42 * 4 + uVar47 * 4) *
                       *(float *)(lVar43 + uVar47 * 4);
                  uVar47 = uVar47 + 1;
                } while (uVar52 != uVar47);
              }
              if (lVar33 != 0) {
                FUN_00d50b20();
              }
              lVar54 = lVar54 + 1;
              lVar33 = *(longlong *)(unaff_RDI + 0x160);
            } while (lVar54 < *(int *)(lVar33 + 0xc));
          }
          else {
            uVar52 = uVar39 & 0xfffffffffffffff8;
            if (uVar39 == uVar52) {
              uVar49 = (uVar52 - 8 >> 3) + 1;
              uVar48 = (ulonglong)((uint)uVar39 & 3);
              local_1b8 = -(uVar49 & 0xfffffffffffffffe);
              lVar54 = 0;
              uVar47 = uVar49;
              do {
                lVar33 = *(longlong *)(*(longlong *)(lVar33 + 0x10) + lVar54 * 8);
                if (lVar33 != 0) {
                  FUN_00d50b00(uVar47);
                }
                lVar43 = FUN_015c6b60();
                lVar32 = *(longlong *)(lVar50 + 0x10);
                if ((lVar43 + 4U < lVar32 + uVar5 * 4) && (lVar32 + 4U < lVar43 + uVar5 * 4)) {
                  lVar42 = 1;
                  if (2 < uVar5 - 2) {
                    uVar47 = 0;
                    do {
                      uVar44 = uVar47;
                      *(float *)(lVar43 + 4 + uVar44 * 4) =
                           *(float *)(lVar32 + 4 + uVar44 * 4) * *(float *)(lVar43 + 4 + uVar44 * 4)
                      ;
                      *(float *)(lVar43 + 8 + uVar44 * 4) =
                           *(float *)(lVar32 + 8 + uVar44 * 4) * *(float *)(lVar43 + 8 + uVar44 * 4)
                      ;
                      *(float *)(lVar43 + 0xc + uVar44 * 4) =
                           *(float *)(lVar32 + 0xc + uVar44 * 4) *
                           *(float *)(lVar43 + 0xc + uVar44 * 4);
                      *(float *)(lVar43 + 0x10 + uVar44 * 4) =
                           *(float *)(lVar32 + 0x10 + uVar44 * 4) *
                           *(float *)(lVar43 + 0x10 + uVar44 * 4);
                      uVar47 = uVar44 + 4;
                    } while ((uVar39 & 0xfffffffffffffffc) != uVar44 + 4);
                    lVar42 = uVar44 + 5;
                  }
                  if (uVar48 != 0) {
                    lVar43 = lVar43 + lVar42 * 4;
                    uVar47 = 0;
                    do {
                      *(float *)(lVar43 + uVar47 * 4) =
                           *(float *)(lVar32 + lVar42 * 4 + uVar47 * 4) *
                           *(float *)(lVar43 + uVar47 * 4);
                      uVar47 = uVar47 + 1;
                    } while (uVar48 != uVar47);
                  }
                }
                else {
                  if (uVar52 - 8 == 0) {
                    lVar42 = 0;
                  }
                  else {
                    lVar42 = 0;
                    lVar46 = local_1b8;
                    do {
                      pfVar1 = (float *)(lVar32 + 4 + lVar42 * 4);
                      fVar53 = pfVar1[1];
                      fVar74 = pfVar1[2];
                      fVar79 = pfVar1[3];
                      pfVar2 = (float *)(lVar32 + 0x14 + lVar42 * 4);
                      fVar7 = *pfVar2;
                      fVar4 = pfVar2[1];
                      fVar8 = pfVar2[2];
                      fVar9 = pfVar2[3];
                      pfVar2 = (float *)(lVar43 + 4 + lVar42 * 4);
                      fVar10 = pfVar2[1];
                      fVar75 = pfVar2[2];
                      fVar11 = pfVar2[3];
                      pfVar3 = (float *)(lVar43 + 0x14 + lVar42 * 4);
                      fVar12 = *pfVar3;
                      fVar13 = pfVar3[1];
                      fVar14 = pfVar3[2];
                      fVar15 = pfVar3[3];
                      pfVar3 = (float *)(lVar43 + 0x24 + lVar42 * 4);
                      fVar16 = *pfVar3;
                      fVar17 = pfVar3[1];
                      fVar18 = pfVar3[2];
                      fVar19 = pfVar3[3];
                      pfVar3 = (float *)(lVar43 + 0x34 + lVar42 * 4);
                      fVar20 = *pfVar3;
                      fVar21 = pfVar3[1];
                      fVar22 = pfVar3[2];
                      fVar23 = pfVar3[3];
                      pfVar3 = (float *)(lVar43 + 4 + lVar42 * 4);
                      *pfVar3 = *pfVar2 * *pfVar1;
                      pfVar3[1] = fVar10 * fVar53;
                      pfVar3[2] = fVar75 * fVar74;
                      pfVar3[3] = fVar11 * fVar79;
                      pfVar1 = (float *)(lVar43 + 0x14 + lVar42 * 4);
                      *pfVar1 = fVar12 * fVar7;
                      pfVar1[1] = fVar13 * fVar4;
                      pfVar1[2] = fVar14 * fVar8;
                      pfVar1[3] = fVar15 * fVar9;
                      pfVar1 = (float *)(lVar32 + 0x24 + lVar42 * 4);
                      fVar53 = pfVar1[1];
                      fVar74 = pfVar1[2];
                      fVar79 = pfVar1[3];
                      pfVar2 = (float *)(lVar32 + 0x34 + lVar42 * 4);
                      auVar72._0_4_ = *pfVar2 * fVar20;
                      auVar72._4_4_ = pfVar2[1] * fVar21;
                      auVar72._8_4_ = pfVar2[2] * fVar22;
                      auVar72._12_4_ = pfVar2[3] * fVar23;
                      pfVar2 = (float *)(lVar43 + 0x24 + lVar42 * 4);
                      *pfVar2 = *pfVar1 * fVar16;
                      pfVar2[1] = fVar53 * fVar17;
                      pfVar2[2] = fVar74 * fVar18;
                      pfVar2[3] = fVar79 * fVar19;
                      *(undefined1 (*) [16])(lVar43 + 0x34 + lVar42 * 4) = auVar72;
                      lVar42 = lVar42 + 0x10;
                      lVar46 = lVar46 + 2;
                    } while (lVar46 != 0);
                    if ((uVar49 & 1) == 0) goto LAB_0148e644;
                  }
                  uVar47 = lVar42 << 2 | 4;
                  pfVar1 = (float *)(lVar32 + uVar47);
                  fVar53 = pfVar1[1];
                  fVar74 = pfVar1[2];
                  fVar79 = pfVar1[3];
                  auVar77 = *(undefined1 (*) [16])(lVar32 + 0x10 + uVar47);
                  pfVar2 = (float *)(lVar43 + uVar47);
                  fVar7 = pfVar2[1];
                  fVar4 = pfVar2[2];
                  fVar8 = pfVar2[3];
                  pfVar3 = (float *)(lVar43 + 0x10 + uVar47);
                  fVar9 = *pfVar3;
                  fVar10 = pfVar3[1];
                  fVar75 = pfVar3[2];
                  fVar11 = pfVar3[3];
                  pfVar3 = (float *)(lVar43 + uVar47);
                  *pfVar3 = *pfVar2 * *pfVar1;
                  pfVar3[1] = fVar7 * fVar53;
                  pfVar3[2] = fVar4 * fVar74;
                  pfVar3[3] = fVar8 * fVar79;
                  pfVar1 = (float *)(lVar43 + 0x10 + uVar47);
                  *pfVar1 = fVar9 * auVar77._0_4_;
                  pfVar1[1] = fVar10 * auVar77._4_4_;
                  pfVar1[2] = fVar75 * auVar77._8_4_;
                  pfVar1[3] = fVar11 * auVar77._12_4_;
                }
LAB_0148e644:
                if (lVar33 != 0) {
                  FUN_00d50b20();
                }
                lVar54 = lVar54 + 1;
                lVar33 = *(longlong *)(unaff_RDI + 0x160);
                uVar47 = (ulonglong)*(int *)(lVar33 + 0xc);
              } while (lVar54 < (longlong)uVar47);
            }
            else {
              uVar47 = (uVar52 - 8 >> 3) + 1;
              lVar54 = 0;
              uVar39 = uVar47;
              do {
                lVar33 = *(longlong *)(*(longlong *)(lVar33 + 0x10) + lVar54 * 8);
                if (lVar33 != 0) {
                  FUN_00d50b00(uVar39);
                }
                lVar32 = FUN_015c6b60();
                lVar43 = *(longlong *)(lVar50 + 0x10);
                if ((lVar43 + uVar5 * 4 <= lVar32 + 4U) ||
                   (uVar39 = 1, lVar32 + uVar5 * 4 <= lVar43 + 4U)) {
                  uVar39 = uVar52 + 1;
                  if (uVar52 - 8 == 0) {
                    lVar42 = 0;
                  }
                  else {
                    lVar42 = 0;
                    lVar46 = -(uVar47 & 0xfffffffffffffffe);
                    do {
                      pfVar1 = (float *)(lVar43 + 4 + lVar42 * 4);
                      fVar53 = pfVar1[1];
                      fVar74 = pfVar1[2];
                      fVar79 = pfVar1[3];
                      pfVar2 = (float *)(lVar43 + 0x14 + lVar42 * 4);
                      fVar7 = *pfVar2;
                      fVar4 = pfVar2[1];
                      fVar8 = pfVar2[2];
                      fVar9 = pfVar2[3];
                      pfVar2 = (float *)(lVar32 + 4 + lVar42 * 4);
                      fVar10 = pfVar2[1];
                      fVar75 = pfVar2[2];
                      fVar11 = pfVar2[3];
                      pfVar3 = (float *)(lVar32 + 0x14 + lVar42 * 4);
                      fVar12 = *pfVar3;
                      fVar13 = pfVar3[1];
                      fVar14 = pfVar3[2];
                      fVar15 = pfVar3[3];
                      pfVar3 = (float *)(lVar32 + 0x24 + lVar42 * 4);
                      fVar16 = *pfVar3;
                      fVar17 = pfVar3[1];
                      fVar18 = pfVar3[2];
                      fVar19 = pfVar3[3];
                      pfVar3 = (float *)(lVar32 + 0x34 + lVar42 * 4);
                      fVar20 = *pfVar3;
                      fVar21 = pfVar3[1];
                      fVar22 = pfVar3[2];
                      fVar23 = pfVar3[3];
                      pfVar3 = (float *)(lVar32 + 4 + lVar42 * 4);
                      *pfVar3 = *pfVar2 * *pfVar1;
                      pfVar3[1] = fVar10 * fVar53;
                      pfVar3[2] = fVar75 * fVar74;
                      pfVar3[3] = fVar11 * fVar79;
                      pfVar1 = (float *)(lVar32 + 0x14 + lVar42 * 4);
                      *pfVar1 = fVar12 * fVar7;
                      pfVar1[1] = fVar13 * fVar4;
                      pfVar1[2] = fVar14 * fVar8;
                      pfVar1[3] = fVar15 * fVar9;
                      pfVar1 = (float *)(lVar43 + 0x24 + lVar42 * 4);
                      fVar53 = pfVar1[1];
                      fVar74 = pfVar1[2];
                      fVar79 = pfVar1[3];
                      pfVar2 = (float *)(lVar43 + 0x34 + lVar42 * 4);
                      auVar73._0_4_ = *pfVar2 * fVar20;
                      auVar73._4_4_ = pfVar2[1] * fVar21;
                      auVar73._8_4_ = pfVar2[2] * fVar22;
                      auVar73._12_4_ = pfVar2[3] * fVar23;
                      pfVar2 = (float *)(lVar32 + 0x24 + lVar42 * 4);
                      *pfVar2 = *pfVar1 * fVar16;
                      pfVar2[1] = fVar53 * fVar17;
                      pfVar2[2] = fVar74 * fVar18;
                      pfVar2[3] = fVar79 * fVar19;
                      *(undefined1 (*) [16])(lVar32 + 0x34 + lVar42 * 4) = auVar73;
                      lVar42 = lVar42 + 0x10;
                      lVar46 = lVar46 + 2;
                    } while (lVar46 != 0);
                    if ((uVar47 & 1) == 0) goto LAB_0148e7ac;
                  }
                  uVar49 = lVar42 << 2 | 4;
                  pfVar1 = (float *)(lVar43 + uVar49);
                  fVar53 = pfVar1[1];
                  fVar74 = pfVar1[2];
                  fVar79 = pfVar1[3];
                  auVar77 = *(undefined1 (*) [16])(lVar43 + 0x10 + uVar49);
                  pfVar2 = (float *)(lVar32 + uVar49);
                  fVar7 = pfVar2[1];
                  fVar4 = pfVar2[2];
                  fVar8 = pfVar2[3];
                  pfVar3 = (float *)(lVar32 + 0x10 + uVar49);
                  fVar9 = *pfVar3;
                  fVar10 = pfVar3[1];
                  fVar75 = pfVar3[2];
                  fVar11 = pfVar3[3];
                  pfVar3 = (float *)(lVar32 + uVar49);
                  *pfVar3 = *pfVar2 * *pfVar1;
                  pfVar3[1] = fVar7 * fVar53;
                  pfVar3[2] = fVar4 * fVar74;
                  pfVar3[3] = fVar8 * fVar79;
                  pfVar1 = (float *)(lVar32 + 0x10 + uVar49);
                  *pfVar1 = fVar9 * auVar77._0_4_;
                  pfVar1[1] = fVar10 * auVar77._4_4_;
                  pfVar1[2] = fVar75 * auVar77._8_4_;
                  pfVar1[3] = fVar11 * auVar77._12_4_;
                }
LAB_0148e7ac:
                uVar29 = iVar55 - (int)uVar39;
                uVar49 = ~uVar39;
                uVar48 = (ulonglong)uVar29 & 3;
                if ((uVar29 & 3) != 0) {
                  do {
                    *(float *)(lVar32 + uVar39 * 4) =
                         *(float *)(lVar43 + uVar39 * 4) * *(float *)(lVar32 + uVar39 * 4);
                    uVar39 = uVar39 + 1;
                    uVar48 = uVar48 - 1;
                  } while (uVar48 != 0);
                }
                if (2 < uVar49 + uVar5) {
                  do {
                    *(float *)(lVar32 + uVar39 * 4) =
                         *(float *)(lVar43 + uVar39 * 4) * *(float *)(lVar32 + uVar39 * 4);
                    *(float *)(lVar32 + 4 + uVar39 * 4) =
                         *(float *)(lVar43 + 4 + uVar39 * 4) * *(float *)(lVar32 + 4 + uVar39 * 4);
                    *(float *)(lVar32 + 8 + uVar39 * 4) =
                         *(float *)(lVar43 + 8 + uVar39 * 4) * *(float *)(lVar32 + 8 + uVar39 * 4);
                    *(float *)(lVar32 + 0xc + uVar39 * 4) =
                         *(float *)(lVar43 + 0xc + uVar39 * 4) *
                         *(float *)(lVar32 + 0xc + uVar39 * 4);
                    uVar39 = uVar39 + 4;
                  } while (uVar5 != uVar39);
                }
                if (lVar33 != 0) {
                  FUN_00d50b20();
                }
                lVar54 = lVar54 + 1;
                lVar33 = *(longlong *)(unaff_RDI + 0x160);
                uVar39 = (ulonglong)*(int *)(lVar33 + 0xc);
              } while (lVar54 < (longlong)uVar39);
            }
          }
        }
      }
      if (lVar50 != 0) {
        FUN_00d50b20();
      }
      if (lVar45 != 0) {
        FUN_00d50b20();
      }
      if (lVar31 != 0) {
        FUN_00d50b20();
      }
    }
LAB_0148e896:
    if (*(longlong *)(unaff_RDI + 0x248) != 0) {
      FUN_00e83070();
      *(undefined8 *)(unaff_RDI + 0x248) = 0;
    }
    if (*(longlong *)(unaff_RDI + 0x250) != 0) {
      FUN_00e83070();
      *(undefined8 *)(unaff_RDI + 0x250) = 0;
    }
  }
  if (*(longlong *)(unaff_RDI + 0x248) == 0) {
    uVar34 = FUN_00e83010();
    *(undefined8 *)(unaff_RDI + 0x248) = uVar34;
    local_2b0 = FUN_00e83010();
    *(undefined8 *)(unaff_RDI + 0x250) = local_2b0;
    lVar31 = *(longlong *)(unaff_RDI + 0x160);
    if (lVar31 != 0) {
      FUN_00d50b00();
      local_2b0 = *(undefined8 *)(unaff_RDI + 0x250);
    }
    local_2c8 = 1;
    local_2b8 = *(undefined8 *)(unaff_RDI + 0x248);
    local_2d0 = lVar31;
    FUN_014b25b0(local_2a8,&local_2b0,uVar5);
    if (lVar31 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  lVar31 = local_48;
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  local_80 = (uint)in_RDX;
  if ((int)local_80 < 1) goto LAB_0148eb12;
  uVar39 = *(ulonglong *)(unaff_RDI + 0x250);
  uVar5 = *(ulonglong *)(lVar31 + 0x10);
  uVar52 = (ulonglong)in_RDX & 0xffffffff;
  if ((local_80 < 4) || ((uVar5 < uVar39 + uVar52 * 4 && (uVar39 < uVar5 + uVar52 * 4)))) {
    uVar47 = 0;
  }
  else {
    uVar47 = (ulonglong)(local_80 & 0xfffffffc);
    auVar67._0_8_ = CONCAT44(local_248._0_4_,local_248._0_4_);
    auVar67._8_4_ = local_248._0_4_;
    auVar67._12_4_ = local_248._0_4_;
    uVar49 = (uVar47 - 4 >> 2) + 1;
    if (uVar47 - 4 == 0) {
      lVar45 = 0;
LAB_0148eafe:
      auVar77 = divps(auVar67,*(undefined1 (*) [16])(uVar39 + lVar45 * 4));
      *(undefined1 (*) [16])(uVar5 + lVar45 * 4) = auVar77;
    }
    else {
      lVar50 = -(uVar49 & 0xfffffffffffffffe);
      lVar45 = 0;
      do {
        auVar76._8_4_ = local_248._0_4_;
        auVar76._0_8_ = auVar67._0_8_;
        auVar76._12_4_ = local_248._0_4_;
        auVar77 = divps(auVar76,*(undefined1 (*) [16])(uVar39 + lVar45 * 4));
        *(undefined1 (*) [16])(uVar5 + lVar45 * 4) = auVar77;
        auVar78._8_4_ = local_248._0_4_;
        auVar78._0_8_ = auVar67._0_8_;
        auVar78._12_4_ = local_248._0_4_;
        auVar77 = divps(auVar78,*(undefined1 (*) [16])(uVar39 + 0x10 + lVar45 * 4));
        *(undefined1 (*) [16])(uVar5 + 0x10 + lVar45 * 4) = auVar77;
        lVar45 = lVar45 + 8;
        lVar50 = lVar50 + 2;
      } while (lVar50 != 0);
      if ((uVar49 & 1) != 0) goto LAB_0148eafe;
    }
    if (uVar47 == uVar52) goto LAB_0148eb12;
  }
  uVar49 = ~uVar47;
  if (((ulonglong)in_RDX & 1) != 0) {
    *(float *)(uVar5 + uVar47 * 4) = (float)local_248._0_4_ / *(float *)(uVar39 + uVar47 * 4);
    uVar47 = uVar47 | 1;
  }
  if (uVar49 + uVar52 != 0) {
    do {
      *(float *)(uVar5 + uVar47 * 4) = (float)local_248._0_4_ / *(float *)(uVar39 + uVar47 * 4);
      *(float *)(uVar5 + 4 + uVar47 * 4) =
           (float)local_248._0_4_ / *(float *)(uVar39 + 4 + uVar47 * 4);
      uVar47 = uVar47 + 2;
    } while (uVar52 != uVar47);
  }
LAB_0148eb12:
  if ((((*(longlong *)(unaff_RDI + 0x1e0) == 0) || (*(longlong *)(unaff_RDI + 0x1e8) == 0)) ||
      (*(longlong *)(unaff_RDI + 0x1f0) == 0)) ||
     ((*(longlong *)(unaff_RDI + 0x1f8) == 0 ||
      (*(longlong *)(unaff_RDI + 0x200) == 0 || local_49 != '\0')))) {
    FUN_00c8e690();
    lVar45 = local_48;
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    lVar50 = *(longlong *)(unaff_RDI + 0x1e0);
    if (lVar50 == lVar45) {
      FUN_00d50b20();
    }
    else {
      *(longlong *)(unaff_RDI + 0x1e0) = lVar45;
      if (lVar50 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00c8e690();
    lVar45 = local_48;
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    lVar50 = *(longlong *)(unaff_RDI + 0x1e8);
    if (lVar50 == lVar45) {
      FUN_00d50b20();
    }
    else {
      *(longlong *)(unaff_RDI + 0x1e8) = lVar45;
      if (lVar50 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00c8e690();
    lVar45 = local_48;
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    lVar50 = *(longlong *)(unaff_RDI + 0x1f0);
    if (lVar50 == lVar45) {
      FUN_00d50b20();
    }
    else {
      *(longlong *)(unaff_RDI + 0x1f0) = lVar45;
      if (lVar50 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00c8e690();
    lVar45 = local_48;
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    lVar50 = *(longlong *)(unaff_RDI + 0x1f8);
    if (lVar50 == lVar45) {
      FUN_00d50b20();
    }
    else {
      *(longlong *)(unaff_RDI + 0x1f8) = lVar45;
      if (lVar50 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00c8e690();
    lVar45 = local_48;
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    lVar50 = *(longlong *)(unaff_RDI + 0x200);
    if (lVar50 == lVar45) {
      FUN_00d50b20();
    }
    else {
      *(longlong *)(unaff_RDI + 0x200) = lVar45;
      if (lVar50 != 0) {
        FUN_00d50b20();
      }
    }
    uVar57 = 1;
    lVar45 = *(longlong *)(unaff_RDI + 0x268);
  }
  else {
    uVar57 = 0;
    lVar45 = *(longlong *)(unaff_RDI + 0x268);
  }
  if (lVar45 == 0) {
    puVar37 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar37 = &DAT_02572358;
    (*DAT_02572370)();
    puVar36 = *(undefined8 **)(unaff_RDI + 0x268);
    if (puVar36 == puVar37) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0x268) = puVar37;
      if (puVar36 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (*(longlong *)(unaff_RDI + 0x270) == 0) {
    puVar37 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar37 = &DAT_02572358;
    (*DAT_02572370)();
    puVar36 = *(undefined8 **)(unaff_RDI + 0x270);
    if (puVar36 == puVar37) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0x270) = puVar37;
      if (puVar36 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (*(longlong *)(unaff_RDI + 0x278) == 0) {
    puVar37 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar37 = &DAT_02572358;
    (*DAT_02572370)();
    puVar36 = *(undefined8 **)(unaff_RDI + 0x278);
    if (puVar36 == puVar37) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0x278) = puVar37;
      if (puVar36 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d216c0();
  FUN_00d216c0();
  FUN_00d216c0();
  plVar35 = (longlong *)FUN_011e67a0();
  (**(code **)(*plVar35 + 0x18))();
  lVar45 = *(longlong *)(unaff_RDI + 0x208);
  *(longlong **)(unaff_RDI + 0x208) = plVar35;
  if (lVar45 != 0) {
    FUN_00d50b20();
  }
  puVar36 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar36 = &DAT_02572358;
  (*DAT_02572370)();
  lVar45 = *(longlong *)(unaff_RDI + 0x210);
  *(undefined8 **)(unaff_RDI + 0x210) = puVar36;
  if (lVar45 != 0) {
    FUN_00d50b20();
  }
  local_220 = local_70;
  local_218 = '\0';
  local_210 = local_a8;
  local_208 = '\0';
  local_200 = *unaff_RSI;
  local_1f8 = '\0';
  local_1f0 = lVar31;
  local_1e8 = '\0';
  local_1a0 = 0;
  lVar45 = *(longlong *)(unaff_RDI + 0x1e0);
  if (lVar45 != 0) {
    FUN_00d50b00();
  }
  local_1a0 = '\x01';
  local_190 = 0;
  lVar50 = *(longlong *)(unaff_RDI + 0x1e8);
  local_1a8 = lVar45;
  if (lVar50 != 0) {
    FUN_00d50b00();
  }
  local_190 = '\x01';
  local_180 = 0;
  lVar45 = *(longlong *)(unaff_RDI + 0x1f0);
  local_198 = lVar50;
  if (lVar45 != 0) {
    FUN_00d50b00();
  }
  local_180 = '\x01';
  local_170 = 0;
  lVar50 = *(longlong *)(unaff_RDI + 0x1f8);
  local_188 = lVar45;
  if (lVar50 != 0) {
    FUN_00d50b00();
  }
  local_170 = '\x01';
  local_160 = 0;
  lVar45 = *(longlong *)(unaff_RDI + 0x200);
  local_178 = lVar50;
  if (lVar45 != 0) {
    FUN_00d50b00();
  }
  local_160 = '\x01';
  local_150 = 0;
  lVar50 = *(longlong *)(unaff_RDI + 0x208);
  local_168 = lVar45;
  if (lVar50 != 0) {
    FUN_00d50b00();
  }
  local_150 = '\x01';
  local_140 = 0;
  lVar45 = *(longlong *)(unaff_RDI + 0x68);
  local_158 = lVar50;
  if (lVar45 != 0) {
    FUN_00d50b00();
  }
  local_140 = '\x01';
  uVar34 = *(undefined8 *)(unaff_RDI + 0x250);
  local_1d8 = '\0';
  local_1e0 = 0;
  local_130 = 0;
  lVar50 = *(longlong *)(unaff_RDI + 0x188);
  local_148 = lVar45;
  if (lVar50 != 0) {
    FUN_00d50b00();
  }
  local_130 = '\x01';
  local_120 = 0;
  lVar45 = *(longlong *)(unaff_RDI + 0x170);
  local_138 = lVar50;
  if (lVar45 != 0) {
    FUN_00d50b00();
  }
  local_120 = '\x01';
  local_110 = 0;
  lVar50 = *(longlong *)(unaff_RDI + 0x210);
  local_128 = lVar45;
  if (lVar50 != 0) {
    FUN_00d50b00();
  }
  local_110 = '\x01';
  local_100 = 0;
  lVar45 = *(longlong *)(unaff_RDI + 0x268);
  local_118 = lVar50;
  if (lVar45 != 0) {
    FUN_00d50b00();
  }
  local_100 = '\x01';
  local_f0 = 0;
  lVar50 = *(longlong *)(unaff_RDI + 0x270);
  local_108 = lVar45;
  if (lVar50 != 0) {
    FUN_00d50b00();
  }
  local_f0 = '\x01';
  local_e0 = 0;
  lVar45 = *(longlong *)(unaff_RDI + 0x278);
  local_f8 = lVar50;
  if (lVar45 != 0) {
    FUN_00d50b00();
  }
  local_e0 = '\x01';
  local_e8 = lVar45;
  FUN_01606530(&local_200,in_RDX,&local_1f0,local_1d0,&local_158,&local_148,uVar34,0,local_res20,
               param_5,uVar57,local_res10,local_res18,&local_1e0,&local_138,&local_128,&local_118,
               &local_108,&local_f8,&local_e8,param_6);
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  if ((local_190 != '\0') && (local_198 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  if ((local_218 != '\0') && (local_220 != (void *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar31 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_d0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != (void *)0x0) {
    FUN_00d50b20();
  }
  return;
}


