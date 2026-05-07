// Function: FUN_01984dd0
// Address: 01984dd0
// Size: 12250 bytes
// Class: MUSpectrumShaper
// String references:
//   "%@%@"
//   "%@"
//   "/%@"
//   "                       "
//   "          "
//   "---"
//   "%.3f"


/* WARNING: Removing unreachable block (ram,0x01985e4c) */
/* WARNING: Removing unreachable block (ram,0x01985e58) */
/* WARNING: Removing unreachable block (ram,0x01986659) */
/* WARNING: Removing unreachable block (ram,0x01986665) */
/* WARNING: Removing unreachable block (ram,0x01985e18) */
/* WARNING: Removing unreachable block (ram,0x01985e24) */
/* WARNING: Removing unreachable block (ram,0x019862d5) */
/* WARNING: Removing unreachable block (ram,0x019862e1) */
/* WARNING: Removing unreachable block (ram,0x01986abb) */
/* WARNING: Removing unreachable block (ram,0x01986ac7) */
/* WARNING: Removing unreachable block (ram,0x01985e32) */
/* WARNING: Removing unreachable block (ram,0x01985e3e) */
/* WARNING: Removing unreachable block (ram,0x019866a8) */
/* WARNING: Removing unreachable block (ram,0x019866b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01984dd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  void *pvVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  pthread_key_t pVar20;
  longlong *plVar21;
  longlong *plVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar25;
  longlong *plVar26;
  undefined4 uVar27;
  undefined7 uVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar33 [16];
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 in_XMM1_Qb;
  undefined1 auVar36 [16];
  undefined4 uStack_3c0;
  undefined1 local_388 [16];
  longlong local_308;
  char local_300;
  longlong local_2f8;
  char local_2f0;
  longlong *local_2e8;
  char local_2e0;
  longlong local_2d8;
  char local_2d0;
  longlong local_2c8;
  char local_2c0;
  longlong *local_2b8;
  char local_2b0;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  undefined4 local_28c;
  longlong *local_288;
  char local_280;
  longlong *local_278;
  char local_270;
  longlong local_268;
  longlong *local_260;
  undefined1 local_258 [16];
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
  longlong *local_1c0;
  char local_1b8;
  longlong *local_1b0;
  char local_1a8;
  longlong *local_1a0;
  char local_198;
  longlong *local_190;
  char local_188;
  longlong *local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  undefined8 *local_140;
  undefined1 local_138 [16];
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [8];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_100;
  char local_f8;
  undefined8 *local_f0;
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  longlong *local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  undefined8 uStack_a0;
  longlong *local_78;
  char local_70;
  longlong *local_60;
  uint local_58;
  undefined4 local_54;
  undefined8 *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (unaff_RDI[0x30] == 0) {
    puVar11 = (undefined8 *)FUN_00e8fc40();
    FUN_00b6fa70();
    *puVar11 = &DAT_0253d290;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    (*DAT_0253d2a8)();
    lVar13 = unaff_RDI[0x30];
    unaff_RDI[0x30] = (longlong)puVar11;
    if (lVar13 != 0) {
      FUN_00d50b20();
    }
    local_280 = 0;
    FUN_00d50b00();
    local_280 = '\x01';
    local_288 = unaff_RDI;
    FUN_00b6bd70();
    if ((local_280 != '\0') && (local_288 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00b6bec0();
    if (DAT_028b0f48 != (longlong *)0x0) goto LAB_01984ecd;
LAB_01984eda:
    FUN_00e8cb50();
    if (DAT_028b0f48 == (longlong *)0x0) {
      FUN_00c8e690();
      plVar21 = local_60;
      if (((char)local_58 == '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00c92170();
      ___bzero();
      plVar26 = DAT_028b0f48;
      if (DAT_028b0f48 == plVar21) {
        bVar7 = false;
        bVar25 = false;
      }
      else {
        DAT_028b0f48 = plVar21;
        bVar7 = true;
        bVar25 = true;
        if (plVar26 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b0f50 == '\0') {
        DAT_028b0f50 = '\x01';
        FUN_00e8cb90();
        bVar25 = bVar7;
      }
      if (!bVar25) {
        FUN_00d50b20();
      }
      FUN_00c8e690();
      plVar21 = local_60;
      if (((char)local_58 == '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      plVar26 = DAT_028b0f58;
      if (DAT_028b0f58 == plVar21) {
        bVar7 = false;
        bVar25 = false;
      }
      else {
        DAT_028b0f58 = plVar21;
        bVar7 = true;
        bVar25 = true;
        if (plVar26 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b0f60 == '\0') {
        DAT_028b0f60 = '\x01';
        FUN_00e8cb90();
        bVar25 = bVar7;
      }
      if (!bVar25) {
        FUN_00d50b20();
      }
      FUN_00c8e690();
      plVar21 = local_60;
      if (((char)local_58 == '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      plVar26 = DAT_028b0f78;
      if (DAT_028b0f78 == plVar21) {
        bVar7 = false;
        bVar25 = false;
      }
      else {
        DAT_028b0f78 = plVar21;
        bVar7 = true;
        bVar25 = true;
        if (plVar26 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b0f80 == '\0') {
        DAT_028b0f80 = '\x01';
        FUN_00e8cb90();
        bVar25 = bVar7;
      }
      if (!bVar25) {
        FUN_00d50b20();
      }
      FUN_00c8e690();
      plVar21 = local_60;
      if (((char)local_58 == '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      plVar26 = DAT_028b0f68;
      if (DAT_028b0f68 == plVar21) {
        bVar7 = false;
        bVar25 = false;
      }
      else {
        DAT_028b0f68 = plVar21;
        bVar7 = true;
        bVar25 = true;
        if (plVar26 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b0f70 == '\0') {
        DAT_028b0f70 = '\x01';
        FUN_00e8cb90();
        bVar25 = bVar7;
      }
      if (!bVar25) {
        FUN_00d50b20();
      }
      DAT_028b0f90 = 0;
      DAT_028b0f8c = 0;
      DAT_028b0f88 = 1;
      DAT_028b0f94 = '\x01';
      DAT_028b0f51 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0f51 = '\x01';
      FUN_00e8cb70();
    }
  }
  else {
    if (DAT_028b0f48 == (longlong *)0x0) goto LAB_01984eda;
LAB_01984ecd:
    if (DAT_028b0f51 == '\0') goto LAB_01984eda;
  }
  if (unaff_RDI[0x31] == 0) {
    FUN_01e1eb80(DAT_02390108,unaff_RDI);
    plVar21 = (longlong *)unaff_RDI[0x31];
    plVar26 = plVar21;
    if (plVar21 != local_60) {
      if ((char)local_58 == '\0') {
        if (local_60 == (longlong *)0x0) {
          plVar26 = (longlong *)0x0;
        }
        else {
          FUN_00d50b00();
          plVar21 = (longlong *)unaff_RDI[0x31];
          plVar26 = local_60;
        }
      }
      else {
        local_58 = local_58 & 0xffffff00;
        plVar26 = local_60;
      }
      unaff_RDI[0x31] = (longlong)plVar26;
      if (plVar21 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar26 = local_60;
      }
    }
    if (((char)local_58 != '\0') && (plVar26 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e3f820();
  local_388._8_8_ = in_XMM1_Qb;
  local_388._0_8_ = param_2;
  FUN_01e3f820();
  local_d8 = (float)param_2;
  fStack_d4 = (float)((ulonglong)param_2 >> 0x20);
  fStack_d0 = (float)in_XMM1_Qb;
  fStack_cc = (float)((ulonglong)in_XMM1_Qb >> 0x20);
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_78 + 0x398))();
  local_240 = local_60;
  local_238 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_238 = '\x01';
  FUN_01d488d0();
  if ((local_238 != '\0') && (local_240 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  auVar33._4_4_ = fStack_d4;
  auVar33._0_4_ = local_d8;
  auVar33._8_4_ = fStack_d0;
  auVar33._12_4_ = fStack_cc;
  auVar33 = blendps(auVar33,local_388,0xd);
  local_d8 = auVar33._0_4_ * _DAT_023945d0;
  fStack_2a4 = auVar33._4_4_ * _UNK_023945d4;
  fStack_2a0 = auVar33._8_4_ * _UNK_023945d8;
  fStack_29c = auVar33._12_4_ * _UNK_023945dc;
  local_2a8 = local_d8;
  if (fStack_2a4 <= local_d8) {
    local_2a8 = fStack_2a4;
  }
  local_2a8 = local_2a8 * DAT_023945a0;
  auVar33 = ZEXT416(_DAT_023945e0 & (uint)(DAT_0240b530 * local_2a8)) | _DAT_023945f0;
  auVar36._4_12_ = auVar33._4_12_;
  auVar36._0_4_ = auVar33._0_4_ + DAT_0240b530 * local_2a8;
  auVar33 = roundss(ZEXT816(0),auVar36,0xb);
  plVar21 = (longlong *)*unaff_RSI;
  local_128 = fStack_2a4;
  fStack_124 = fStack_2a4;
  fStack_120 = fStack_29c;
  fStack_11c = fStack_29c;
  fStack_d4 = fStack_2a4;
  fStack_d0 = fStack_2a0;
  fStack_cc = fStack_29c;
  FUN_01e3f820();
  (**(code **)(*plVar21 + 0x3b0))();
  fVar5 = auVar33._0_4_;
  fVar29 = fVar5 + fVar5;
  DAT_028b0f98 = fVar29;
  FUN_0173ba80();
  local_c0 = local_60;
  if (((char)local_58 == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  fVar30 = DAT_0241b548 * local_2a8;
  ___bzero();
  uVar23 = 0;
  do {
    cVar8 = FUN_00b6a760();
    if (cVar8 != '\0') {
      *(undefined1 *)(DAT_028b0f48[2] + uVar23 + (uVar23 / 3 & 0xfffffffffffffffc) * -3) = 1;
    }
    uVar23 = uVar23 + 1;
  } while ((int)uVar23 != 0x7f);
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar20 = 0x25f4940;
  *puVar11 = &DAT_025f4940;
  puVar11[7] = 0;
  puVar11[8] = 0;
  puVar11[9] = 0;
  (*DAT_025f4958)();
  pvVar12 = _pthread_getspecific(pVar20);
  plVar21 = DAT_028b0f58;
  if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), plVar21 = DAT_028b0f58, lVar13 != 0)) {
    pVar20 = (pthread_key_t)puVar11;
  }
  DAT_028b0f58 = plVar21;
  if (plVar21 != (longlong *)0x0) {
    local_270 = 0;
    FUN_00d50b00();
  }
  local_270 = '\x01';
  local_278 = plVar21;
  FUN_015ff220();
  if ((local_270 != '\0') && (local_278 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar12 = _pthread_getspecific(pVar20);
  if ((pvVar12 == (void *)0x0) || (lVar13 = FUN_00e8b990(), lVar13 == 0)) {
    lVar13 = puVar11[7];
  }
  else {
    lVar13 = *(longlong *)(puVar11[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4] + 0x38);
  }
  if (lVar13 != 0) {
    FUN_00d50b00();
  }
  local_268 = lVar13;
  puVar14 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar14 = &DAT_02572358;
  local_a8 = (undefined1  [8])DAT_02572370;
  (*DAT_02572370)();
  lVar13 = 0;
  local_140 = puVar14;
  do {
    FUN_014328b0((double)(int)lVar13,(double)*(float *)(DAT_028b0f78[2] + lVar13 * 4));
    if (local_70 == '\0') {
      if (local_78 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    local_60 = local_78;
    local_58 = local_58 & 0xffffff00;
    uVar31 = FUN_00d21140();
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      uVar31 = FUN_00d50b20();
    }
    if (local_78 != (longlong *)0x0) {
      uVar31 = FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      uVar31 = FUN_00d50b20();
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0xc);
  FUN_00d242c0(uVar31,0);
  puVar14 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar14 = &DAT_02572358;
  (*(code *)local_a8)();
  FUN_00d227d0();
  local_60 = (longlong *)0x0;
  local_58 = local_58 & 0xffffff00;
  FUN_00d21140();
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = (longlong *)0x0;
  local_58 = local_58 & 0xffffff00;
  FUN_00d21140();
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = (longlong *)0x0;
  local_58 = local_58 & 0xffffff00;
  FUN_00d21140();
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = (longlong *)0x0;
  local_58 = local_58 & 0xffffff00;
  FUN_00d21140();
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar21 = local_140 + 2;
  lVar13 = local_140[2];
  if (DAT_0241b598 < *(double *)(*(longlong *)(lVar13 + 0x20) + 0x18)) {
    FUN_00c8e690();
    plVar26 = local_60;
    if (((char)local_58 == '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    uVar31 = ___bzero();
    local_58 = local_58 & 0xffffff00;
    local_60 = plVar26;
    FUN_00d233f0(uVar31,0);
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    iVar9 = FUN_00e7d850(*(undefined8 *)(*(longlong *)*plVar21 + 0x10));
    *(undefined1 *)(plVar26[2] + (longlong)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(undefined8 *)(*(longlong *)(*plVar21 + 8) + 0x10));
    *(undefined1 *)(plVar26[2] + (longlong)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(undefined8 *)(*(longlong *)(*plVar21 + 0x10) + 0x10));
    *(undefined1 *)(plVar26[2] + (longlong)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(undefined8 *)(*(longlong *)(*plVar21 + 0x18) + 0x10));
    *(undefined1 *)(plVar26[2] + (longlong)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(undefined8 *)(*(longlong *)(*plVar21 + 0x20) + 0x10));
    *(undefined1 *)(plVar26[2] + (longlong)iVar9) = 1;
    FUN_00c8e690();
    plVar22 = local_60;
    if (((char)local_58 == '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    ___bzero();
    if (plVar26 == plVar22) {
      uVar31 = FUN_00d50b20();
    }
    else {
      uVar31 = FUN_00d50b20();
      plVar26 = plVar22;
    }
    local_58 = local_58 & 0xffffff00;
    local_60 = plVar26;
    FUN_00d233f0(uVar31,1);
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    iVar9 = FUN_00e7d850(*(undefined8 *)(*(longlong *)*plVar21 + 0x10));
    *(undefined1 *)(plVar26[2] + (longlong)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(undefined8 *)(*(longlong *)(*plVar21 + 8) + 0x10));
    *(undefined1 *)(plVar26[2] + (longlong)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(undefined8 *)(*(longlong *)(*plVar21 + 0x10) + 0x10));
    *(undefined1 *)(plVar26[2] + (longlong)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(undefined8 *)(*(longlong *)(*plVar21 + 0x18) + 0x10));
    *(undefined1 *)(plVar26[2] + (longlong)iVar9) = 0;
    iVar9 = FUN_00e7d850(*(undefined8 *)(*(longlong *)(*plVar21 + 0x20) + 0x10));
    *(undefined1 *)(plVar26[2] + (longlong)iVar9) = 1;
    FUN_00d50b20();
    lVar13 = *plVar21;
  }
  if (DAT_0241b598 < *(double *)(*(longlong *)(lVar13 + 0x18) + 0x18)) {
    FUN_00c8e690();
    plVar26 = local_60;
    if (((char)local_58 == '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    uVar31 = ___bzero();
    local_58 = local_58 & 0xffffff00;
    local_60 = plVar26;
    FUN_00d233f0(uVar31,2);
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    iVar9 = FUN_00e7d850(*(undefined8 *)(*(longlong *)*plVar21 + 0x10));
    *(undefined1 *)(plVar26[2] + (longlong)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(undefined8 *)(*(longlong *)(*plVar21 + 8) + 0x10));
    *(undefined1 *)(plVar26[2] + (longlong)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(undefined8 *)(*(longlong *)(*plVar21 + 0x10) + 0x10));
    *(undefined1 *)(plVar26[2] + (longlong)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(undefined8 *)(*(longlong *)(*plVar21 + 0x18) + 0x10));
    *(undefined1 *)(plVar26[2] + (longlong)iVar9) = 1;
    FUN_00d50b20();
    lVar13 = *plVar21;
  }
  if (DAT_0241b598 < *(double *)(*(longlong *)(lVar13 + 0x10) + 0x18)) {
    FUN_00c8e690();
    plVar26 = local_60;
    if (((char)local_58 == '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    uVar31 = ___bzero();
    local_58 = local_58 & 0xffffff00;
    local_60 = plVar26;
    FUN_00d233f0(uVar31,3);
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    iVar9 = FUN_00e7d850(*(undefined8 *)(*(longlong *)*plVar21 + 0x10));
    *(undefined1 *)(plVar26[2] + (longlong)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(undefined8 *)(*(longlong *)(*plVar21 + 8) + 0x10));
    *(undefined1 *)(plVar26[2] + (longlong)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(undefined8 *)(*(longlong *)(*plVar21 + 0x10) + 0x10));
    *(undefined1 *)(plVar26[2] + (longlong)iVar9) = 1;
    FUN_00d50b20();
  }
  uVar31 = DAT_025908a0;
  local_28c = DAT_028b0f8c;
  local_258._0_8_ = DAT_025795c0;
  lVar13 = 0;
  plVar21 = (longlong *)&DAT_025795a8;
  local_138._0_8_ = &DAT_025795a8;
  do {
    puVar15 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar15 = local_138._0_8_;
    uVar32 = (*(code *)local_258._0_8_)();
    uVar32 = FUN_00d94d80(uVar32,uVar31);
    for (lVar24 = lVar13; lVar24 != 0; lVar24 = lVar24 + -1) {
      uVar32 = FUN_00d94d80(uVar32,uVar31);
    }
    lVar24 = *(longlong *)(puVar14[2] + lVar13 * 8);
    local_a8 = (undefined1  [8])lVar24;
    if (lVar24 == 0) {
LAB_01986180:
      FUN_00d94d80(uVar32,uVar31);
      if (local_a8 != (undefined1  [8])0x0) goto LAB_0198619e;
    }
    else {
      FUN_00d50b00();
      plVar21 = (longlong *)0x0;
      uVar32 = FUN_018daf60(0,local_28c,0,0);
      local_118 = (undefined1  [8])local_60;
      if ((char)local_58 == '\0') {
        if (local_60 != (longlong *)0x0) {
          uVar32 = FUN_00d50b00();
          if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            uVar32 = FUN_00d50b20();
          }
        }
      }
      else {
        local_58 = local_58 & 0xffffff00;
      }
      if (local_118 == (undefined1  [8])0x0) goto LAB_01986180;
      if (*(int *)((longlong)local_118 + 0xc) == 0) {
        uVar32 = FUN_00d50b20();
        goto LAB_01986180;
      }
      lVar24 = **(longlong **)((longlong)local_118 + 0x10);
      if (lVar24 != 0) {
        FUN_00d50b00();
      }
      local_b8._0_8_ = lVar24;
      FUN_018e0500();
      plVar26 = local_60;
      if (((char)local_58 == '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      iVar9 = *(int *)(local_b8._0_8_ + 0x18);
      plVar22 = (longlong *)(longlong)*(int *)(local_b8._0_8_ + 0x1c);
      FUN_018d8720();
      local_e8 = (undefined1  [8])local_60;
      if (((char)local_58 == '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      plVar21 = *(longlong **)(plVar26[2] + (longlong)iVar9 * 8);
      if (plVar21 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_260 = plVar21;
      puVar16 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar16 = local_138._0_8_;
      (*(code *)local_258._0_8_)();
      local_78 = local_260;
      local_100 = (longlong *)local_e8;
      local_f0 = puVar16;
      uVar32 = FUN_00083ea0(2,&local_100);
      uVar32 = FUN_00d94d80(uVar32,&local_60);
      local_60 = (longlong *)&DAT_0253d630;
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar32 = FUN_00d50b20();
      }
      puVar16 = local_f0;
      local_60 = &DAT_024c5048;
      if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
        uVar32 = FUN_00d50b20();
      }
      plVar21 = (longlong *)local_b8._0_8_;
      if ((int)*(longlong *)(local_b8._0_8_ + 0x18) != *(int *)(local_b8._0_8_ + 0x1c)) {
        puVar1 = *(undefined8 **)(plVar26[2] + (longlong)plVar22 * 8);
        local_58 = 1;
        local_60 = &DAT_024c5048;
        local_48 = 0;
        plVar21 = plVar22;
        if (puVar1 != (undefined8 *)0x0) {
          uVar32 = FUN_00d50b00();
          plVar21 = plVar22;
        }
        puVar16 = local_f0;
        local_48 = '\x01';
        local_50 = puVar1;
        FUN_00d94d80(uVar32,&local_60);
        local_60 = &DAT_024c5048;
        if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_58 = 1;
      local_60 = &DAT_024c5048;
      local_48 = 0;
      uVar32 = FUN_00d50b00();
      local_48 = '\x01';
      local_50 = puVar16;
      FUN_00d94d80(uVar32,&local_60);
      local_60 = &DAT_024c5048;
      if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (local_260 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_e8 != (undefined1  [8])0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d50b20();
      FUN_00d50b20();
LAB_0198619e:
      FUN_00d50b20();
    }
    if (puVar15 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 4);
  pfVar2 = (float *)DAT_028b0f58[2];
  uVar28 = (undefined7)((ulonglong)puVar15 >> 8);
  if (((((((0.0 < *pfVar2) || (0.0 < pfVar2[1])) || (0.0 < pfVar2[2])) ||
        ((0.0 < pfVar2[3] || (0.0 < pfVar2[4])))) ||
       ((0.0 < pfVar2[5] || ((0.0 < pfVar2[6] || (0.0 < pfVar2[7])))))) || (0.0 < pfVar2[8])) ||
     (((0.0 < pfVar2[9] || (0.0 < pfVar2[10])) || (0.0 < pfVar2[0xb])))) {
    uVar31 = FUN_015ffad0();
    plVar26 = local_60;
    if (local_60 == (longlong *)0x0) {
      local_f0 = (undefined8 *)0x0;
      plVar26 = (longlong *)0x0;
    }
    else if ((char)local_58 == '\0') {
      uVar31 = FUN_00d50b00();
      local_f0 = (undefined8 *)CONCAT71((int7)((ulonglong)uVar31 >> 8),1);
      if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
      local_f0 = (undefined8 *)CONCAT71((int7)((ulonglong)uVar31 >> 8),1);
    }
    auVar36 = _local_118;
    uVar27 = (undefined4)CONCAT71(uVar28,plVar26 == (longlong *)0x0);
    if ((DAT_028b0f94 != '\0') && (plVar26 != (longlong *)0x0)) {
      iVar9 = *(int *)((longlong)plVar26 + 0xc);
      if (iVar9 != 0) {
        plVar21 = (longlong *)(ulonglong)DAT_028b0f90;
        local_118._0_4_ = iVar9 - 1;
        if ((int)DAT_028b0f90 < iVar9) {
          local_118._0_4_ = DAT_028b0f90;
        }
        local_118._4_4_ = 0;
        uVar23 = (ulonglong)local_118;
        _local_118 = auVar36;
        (**(code **)(*unaff_RDI + 0x640))();
        (**(code **)(*local_100 + 0x370))();
        FUN_01d44d80();
        local_230 = local_60;
        local_228 = 0;
        if ((char)local_58 == '\0') {
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = local_58 & 0xffffff00;
        }
        local_228 = '\x01';
        FUN_01d48a10();
        if ((local_228 != '\0') && (local_230 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        _local_118 = CONCAT88(_uStack_110,uVar23);
        if (0 < *(int *)((longlong)plVar26 + 0xc)) {
          local_b8 = insertps(local_388,ZEXT416((uint)DAT_028b0f98),0x10);
          local_a8._4_4_ = DAT_028b0f98;
          local_a8._0_4_ = DAT_028b0f98;
          uStack_a0 = 0;
          lVar13 = 0;
          do {
            if (local_118 == (undefined1  [8])lVar13) {
              FUN_01cfbee0();
              plVar22 = local_60;
              local_218 = 0;
              if ((char)local_58 == '\0') {
                if (local_60 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = local_58 & 0xffffff00;
              }
              local_218 = '\x01';
              local_220 = plVar22;
              FUN_01d488d0();
              if ((local_218 != '\0') && (local_220 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              FUN_01cfbee0();
              plVar22 = local_60;
              local_208 = 0;
              if ((char)local_58 == '\0') {
                if (local_60 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = local_58 & 0xffffff00;
              }
              local_208 = '\x01';
              local_210 = plVar22;
              FUN_01d488d0();
              if ((local_208 != '\0') && (local_210 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            pvVar12 = _pthread_getspecific((pthread_key_t)plVar21);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_015feec0();
            plVar22 = local_60;
            if ((char)local_58 == '\0') {
              if (local_60 != (longlong *)0x0) {
                FUN_00d50b00();
                if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              local_58 = local_58 & 0xffffff00;
            }
            (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))();
            auVar34._4_4_ = local_a8._4_4_;
            auVar34._0_4_ = local_a8._4_4_;
            auVar34._8_4_ = uStack_a0._4_4_;
            auVar34._12_4_ = uStack_a0._4_4_;
            register0x00001204 = auVar34._4_12_;
            local_e8._0_4_ = (float)local_a8._4_4_ + DAT_028b0f98;
            if (plVar22 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            _local_a8 = insertps(_local_a8,local_e8._0_4_,0x10);
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)((longlong)plVar26 + 0xc));
        }
        (**(code **)(*unaff_RDI + 0x640))();
        (**(code **)(*local_100 + 0x370))();
        FUN_01d44d80();
        local_200 = local_60;
        local_1f8 = 0;
        if ((char)local_58 == '\0') {
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = local_58 & 0xffffff00;
        }
        local_1f8 = '\x01';
        FUN_01d48a10();
        if ((local_1f8 != '\0') && (local_200 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (0 < *(int *)((longlong)plVar26 + 0xc)) {
          insertps(local_388,ZEXT416((uint)DAT_028b0f98),0x10);
          _local_a8 = insertps(ZEXT416((uint)(DAT_023908d8 * DAT_028b0f98)),
                               ZEXT416((uint)DAT_028b0f98),0x10);
          lVar13 = 0;
          do {
            pVar20 = (pthread_key_t)plVar21;
            if (local_118 == (undefined1  [8])lVar13) {
              FUN_01cfbee0();
              plVar21 = local_60;
              local_1e8 = 0;
              if ((char)local_58 == '\0') {
                if (local_60 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = local_58 & 0xffffff00;
              }
              local_1e8 = '\x01';
              local_1f0 = plVar21;
              FUN_01d488d0();
              if ((local_1e8 != '\0') && (local_1f0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              FUN_01cfbee0();
              plVar21 = local_60;
              local_1d8 = 0;
              if ((char)local_58 == '\0') {
                if (local_60 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = local_58 & 0xffffff00;
              }
              local_1d8 = '\x01';
              local_1e0 = plVar21;
              FUN_01d488d0();
              if ((local_1d8 != '\0') && (local_1e0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            lVar24 = *(longlong *)(plVar26[2] + lVar13 * 8);
            if (lVar24 != 0) {
              FUN_00d50b00();
            }
            puVar15 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar15 = local_138._0_8_;
            (*(code *)local_258._0_8_)();
            pvVar12 = _pthread_getspecific(pVar20);
            lVar18 = lVar24;
            if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              lVar18 = *(longlong *)(lVar24 + 0x20 + (ulonglong)(*(uint *)(lVar17 + 0x154) & 1) * 8)
              ;
            }
            local_58 = 1;
            plVar21 = &DAT_024d0b28;
            local_60 = &DAT_024d0b28;
            local_54 = *(undefined4 *)(lVar18 + 0x4c);
            FUN_00d94d80(&DAT_024d0b28,&local_60);
            (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))();
            auVar35._4_4_ = local_a8._4_4_;
            auVar35._0_4_ = local_a8._4_4_;
            auVar35._8_4_ = uStack_a0._4_4_;
            auVar35._12_4_ = uStack_a0._4_4_;
            register0x00001204 = auVar35._4_12_;
            local_e8._0_4_ = (float)local_a8._4_4_ + DAT_028b0f98;
            FUN_00d50b20();
            if (lVar24 != 0) {
              FUN_00d50b20();
            }
            _local_a8 = insertps(_local_a8,local_e8._0_4_,0x10);
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)((longlong)plVar26 + 0xc));
          uVar27 = 0;
          goto LAB_01986b0d;
        }
      }
      uVar27 = 0;
    }
  }
  else {
    uVar27 = (undefined4)CONCAT71(uVar28,1);
    local_f0 = (undefined8 *)0x0;
    plVar26 = (longlong *)0x0;
  }
LAB_01986b0d:
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_78 + 0x3a0))();
  local_1d0 = local_60;
  local_1c8 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_1c8 = '\x01';
  FUN_01d488d0();
  if ((local_1c8 != '\0') && (local_1d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40();
  local_e8._0_4_ = local_2a8 + local_2a8;
  local_e8._4_4_ = fStack_2a4;
  fStack_e0 = fStack_2a0;
  fStack_dc = fStack_29c;
  local_138._0_4_ = _DAT_023945e0 ^ local_e8._0_4_;
  local_138._4_4_ = _UNK_023945e4 ^ (uint)fStack_2a4;
  local_138._8_4_ = _UNK_023945e8 ^ (uint)fStack_2a0;
  local_138._12_4_ = _UNK_023945ec ^ (uint)fStack_29c;
  insertps(ZEXT416((uint)(DAT_0241b54c * (float)local_e8._0_4_)),local_138,0x10);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  _local_a8 = ZEXT416((uint)(DAT_0241b554 * (float)local_e8._0_4_));
  insertps(ZEXT416((uint)(DAT_0241b550 * (float)local_e8._0_4_)),_local_a8,0x10);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  _local_118 = ZEXT416((uint)(DAT_0241b55c * (float)local_e8._0_4_));
  insertps(ZEXT416((uint)(DAT_0241b558 * (float)local_e8._0_4_)),_local_118,0x10);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  insertps(_local_e8,ZEXT416((uint)(DAT_0241b560 * local_e8._0_4_)),0x10);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  local_b8 = ZEXT416((uint)(DAT_0241b564 * (float)local_e8._0_4_));
  local_258 = ZEXT416((uint)(DAT_0241b568 * (float)local_e8._0_4_));
  insertps(local_b8,local_258,0x10);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  insertps(local_258,local_b8._0_4_,0x10);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  insertps(ZEXT416((uint)(DAT_0241b56c * local_e8._0_4_)),_local_e8,0x10);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  insertps(_local_118,ZEXT416((uint)(DAT_0241b570 * (float)local_e8._0_4_)),0x10);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  insertps(_local_a8,ZEXT416((uint)(DAT_0241b574 * (float)local_e8._0_4_)),0x10);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  insertps(local_138,ZEXT416((uint)(DAT_0241b578 * (float)local_e8._0_4_)),0x10);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  insertps(_local_a8,ZEXT416((uint)(DAT_0241b57c * (float)local_e8._0_4_)),0x10);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  insertps(_local_118,ZEXT416((uint)(DAT_0241b580 * (float)local_e8._0_4_)),0x10);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_100 + 0x370))();
  FUN_01d44d80();
  local_1c0 = local_60;
  local_1b8 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_1b8 = '\x01';
  FUN_01d48a10();
  if ((local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_78 + 0x390))();
  local_1b0 = local_60;
  local_1a8 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_1a8 = '\x01';
  FUN_01d488d0();
  if ((local_1a8 != '\0') && (local_1b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_b8._0_4_ = uVar27;
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uStack_3c0 = auVar33._8_4_;
  local_a8._4_4_ = fVar29;
  local_a8._0_4_ = fVar29;
  uStack_a0._0_4_ = uStack_3c0;
  uStack_a0._4_4_ = uStack_3c0;
  local_118._4_4_ = fVar5;
  local_118._0_4_ = fVar5;
  uStack_110 = uStack_3c0;
  uStack_10c = uStack_3c0;
  local_138._4_4_ = fVar30;
  local_138._0_4_ = fVar30;
  local_138._8_8_ = 0;
  iVar9 = 0;
  do {
    pVar20 = (pthread_key_t)plVar21;
    iVar10 = FUN_015b5e20();
    local_258._0_8_ = ___sincosf_stret((float)iVar10 * _DAT_0241b584 + DAT_024204d0);
    local_258._8_8_ = extraout_XMM0_Qb;
    pvVar12 = _pthread_getspecific(pVar20);
    lVar13 = DAT_026e3bc8;
    plVar22 = local_c0;
    if ((pvVar12 != (void *)0x0) &&
       (lVar24 = FUN_00e8b990(), lVar13 = DAT_026e3bc8, plVar22 = local_c0, lVar24 != 0)) {
      plVar22 = (longlong *)local_c0[(ulonglong)(*(uint *)(lVar24 + 0x154) & 1) + 4];
    }
    DAT_026e3bc8 = lVar13;
    if (lVar13 != 0) {
      FUN_00d50b00();
    }
    local_300 = '\x01';
    local_2f8 = 0;
    local_2f0 = '\0';
    plVar21 = &local_308;
    local_308 = lVar13;
    (**(code **)(*plVar22 + 0x3c8))(plVar21,iVar9,&local_2f8);
    plVar22 = local_60;
    if ((char)local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    if ((local_2f0 != '\0') && (local_2f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_300 != '\0') && (local_308 != 0)) {
      FUN_00d50b20();
    }
    local_2e8 = plVar22;
    local_2e0 = '\0';
    (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))();
    if ((local_2e0 != '\0') && (local_2e8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar22 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0xc);
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_78 + 0x3a8))();
  local_1a0 = local_60;
  local_198 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_198 = '\x01';
  FUN_01d488d0();
  if ((local_198 != '\0') && (local_1a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  iVar9 = 0;
  do {
    iVar10 = FUN_015b5e90();
    iVar10 = iVar10 + 0x11;
    iVar19 = ((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 2) - (iVar10 >> 0x1f);
    pVar20 = iVar19 * 0x18;
    local_258._0_8_ =
         ___sincosf_stret((float)(iVar10 + iVar19 * -0x18) * _DAT_0241b588 + DAT_024204d0);
    local_258._8_8_ = extraout_XMM0_Qb_00;
    pvVar12 = _pthread_getspecific(pVar20);
    lVar13 = DAT_026e3bc8;
    plVar21 = local_c0;
    if ((pvVar12 != (void *)0x0) &&
       (lVar24 = FUN_00e8b990(), lVar13 = DAT_026e3bc8, plVar21 = local_c0, lVar24 != 0)) {
      plVar21 = (longlong *)local_c0[(ulonglong)(*(uint *)(lVar24 + 0x154) & 1) + 4];
    }
    DAT_026e3bc8 = lVar13;
    if (lVar13 != 0) {
      FUN_00d50b00();
    }
    local_2d0 = '\x01';
    local_2c8 = 0;
    local_2c0 = '\0';
    local_2d8 = lVar13;
    (**(code **)(*plVar21 + 0x3c8))(&local_2d8,iVar9,&local_2c8);
    plVar21 = local_60;
    if ((char)local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    if ((local_2c0 != '\0') && (local_2c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2d0 != '\0') && (local_2d8 != 0)) {
      FUN_00d50b20();
    }
    local_2b8 = plVar21;
    local_2b0 = '\0';
    (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))();
    if ((local_2b0 != '\0') && (local_2b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar21 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0xc);
  bVar25 = true;
  uVar23 = 0;
  lVar13 = 0;
  iVar9 = 0;
  do {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar23;
    local_118._0_4_ = (float)iVar9 * _DAT_0241b588;
    _local_a8 = ZEXT416((uint)(*(float *)(*(longlong *)(local_268 + 0x10) +
                                         lVar13 + (SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) *
                                                   2 & 0xffffffffffffffe0U) * -3) * local_2a8 +
                              local_2a8));
    ___sincosf_stret((float)iVar9 * _DAT_0241b588 + _DAT_0241b58c + DAT_024204d0);
    local_a8._4_4_ = local_a8._0_4_;
    uStack_a0._4_4_ = (undefined4)uStack_a0;
    if (bVar25) {
      (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))();
    }
    else {
      (**(code **)(*(longlong *)*unaff_RSI + 0x4e8))();
    }
    ___sincosf_stret((float)local_118._0_4_ + _DAT_0241b590 + DAT_024204d0);
    (**(code **)(*(longlong *)*unaff_RSI + 0x4e8))();
    iVar9 = iVar9 + 1;
    lVar13 = lVar13 + 4;
    uVar23 = uVar23 + 1;
    bVar25 = false;
  } while (iVar9 != 0x19);
  (**(code **)(*(longlong *)*unaff_RSI + 0x558))();
  FUN_01cfbee0();
  local_190 = local_60;
  local_188 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_188 = '\x01';
  FUN_01d488d0();
  if ((local_188 != '\0') && (local_190 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x518))();
  FUN_01d48b40();
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_78 + 0x3a8))();
  local_180 = local_60;
  local_178 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_178 = '\x01';
  FUN_01d488d0();
  if ((local_178 != '\0') && (local_180 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x520))();
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_78 + 0x3a0))();
  local_170 = local_60;
  local_168 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_168 = '\x01';
  FUN_01d488d0();
  if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3c8))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3c8))();
  FUN_01d48b40();
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_78 + 0x3a0))();
  local_160 = local_60;
  local_158 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_158 = '\x01';
  FUN_01d488d0();
  if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar23 = 0;
  lVar13 = 0;
  do {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar23;
    _local_a8 = ZEXT416((uint)(*(float *)(*(longlong *)(local_268 + 0x10) +
                                         lVar13 + (SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),8) *
                                                   2 & 0xffffffffffffffe0U) * -3) * local_2a8 +
                              local_2a8));
    ___sincosf_stret((float)(int)uVar23 * _DAT_0241b588 + DAT_024204d0);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    uVar23 = uVar23 + 1;
    lVar13 = lVar13 + 4;
  } while ((int)uVar23 != 0x19);
  cVar8 = local_b8[0];
  if ((DAT_028b0f94 != '\0' && cVar8 == '\0') &&
     (iVar9 = *(int *)((longlong)plVar26 + 0xc), iVar9 != 0)) {
    uVar6 = iVar9 - 1;
    if ((int)DAT_028b0f90 < iVar9) {
      uVar6 = DAT_028b0f90;
    }
    lVar13 = plVar26[2];
    lVar24 = *(longlong *)(lVar13 + (longlong)(int)uVar6 * 8);
    if (lVar24 != 0) {
      FUN_00d50b00();
    }
    local_138._0_8_ = lVar24;
    pVar20 = (pthread_key_t)lVar13;
    pvVar12 = _pthread_getspecific(pVar20);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar9 = FUN_015ff8d0();
    pvVar12 = _pthread_getspecific(pVar20);
    if ((pvVar12 == (void *)0x0) || (lVar13 = FUN_00e8b990(), lVar13 == 0)) {
      lVar13 = *(longlong *)(lVar24 + 0x38);
    }
    else {
      lVar13 = *(longlong *)
                (*(longlong *)(lVar24 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8) +
                0x38);
    }
    if (lVar13 != 0) {
      FUN_00d50b00();
    }
    FUN_01cfcdc0();
    local_150 = local_60;
    local_148 = 0;
    if ((char)local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    local_148 = '\x01';
    FUN_01d488d0();
    if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar25 = true;
    iVar10 = 0;
    do {
      iVar19 = iVar9 + iVar10;
      local_118._0_4_ = (float)iVar10 * _DAT_0241b588;
      _local_a8 = ZEXT416((uint)(*(float *)(*(longlong *)(lVar13 + 0x10) +
                                           (longlong)
                                           (int)(iVar19 + (((uint)(iVar19 / 6 + (iVar19 >> 0x1f)) >>
                                                           2) - (iVar19 >> 0x1f)) * -0x18) * 4) *
                                 local_2a8 + local_2a8));
      ___sincosf_stret((float)iVar10 * _DAT_0241b588 + _DAT_0241b58c + DAT_024204d0);
      local_a8._4_4_ = local_a8._0_4_;
      uStack_a0._4_4_ = (undefined4)uStack_a0;
      if (bVar25) {
        (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))();
      }
      else {
        (**(code **)(*(longlong *)*unaff_RSI + 0x4e8))();
      }
      ___sincosf_stret((float)local_118._0_4_ + _DAT_0241b590 + DAT_024204d0);
      (**(code **)(*(longlong *)*unaff_RSI + 0x4e8))();
      iVar10 = iVar10 + 1;
      bVar25 = false;
    } while (iVar10 != 0x19);
    (**(code **)(*(longlong *)*unaff_RSI + 0x558))();
    (**(code **)(*(longlong *)*unaff_RSI + 0x518))();
    FUN_00d50b20();
    cVar8 = local_b8[0];
    if (local_138._0_8_ != 0) {
      FUN_00d50b20();
    }
  }
  if ((char)local_f0 != '\0' && cVar8 == '\0') {
    FUN_00d50b20();
  }
  if (puVar14 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_140 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_268 != 0) {
    FUN_00d50b20();
  }
  if (puVar11 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_c0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


