// Function: FUN_016e5250
// Address: 016e5250
// Size: 14395 bytes
// Class: GNString


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016e5250(double param_1,uint param_2,int param_3,int param_4)

{
  longlong *plVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  pthread_key_t pVar7;
  int iVar8;
  double *pdVar9;
  double *pdVar10;
  ulonglong uVar11;
  double dVar12;
  void *pvVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  char in_CL;
  longlong lVar17;
  uint uVar18;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar19;
  ulonglong uVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  double dVar22;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar25;
  undefined4 extraout_XMM0_Dd_00;
  double dVar26;
  double dVar27;
  char local_res8;
  undefined1 uVar28;
  ulonglong local_2e0;
  undefined1 local_2d8;
  undefined8 *local_2d0;
  undefined1 local_2c8;
  double local_2c0;
  undefined1 local_2b8;
  longlong local_2b0;
  undefined1 local_2a8;
  undefined8 *local_2a0;
  undefined1 local_298;
  undefined8 *local_290;
  undefined1 local_288;
  longlong local_280;
  char local_278;
  longlong local_270;
  char local_268;
  longlong local_260;
  undefined1 local_258;
  longlong local_250;
  undefined1 local_248;
  undefined8 *local_240;
  undefined1 local_238;
  double local_230;
  undefined1 local_228;
  longlong local_220;
  undefined1 local_218;
  undefined8 *local_210;
  undefined1 local_208;
  undefined8 *local_200;
  undefined1 local_1f8;
  undefined8 *local_1f0;
  undefined1 local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  double local_1d0;
  undefined1 local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined8 *local_1b0;
  undefined1 local_1a8;
  undefined8 *local_1a0;
  undefined1 local_198;
  double local_190;
  undefined1 local_188;
  double local_180;
  ulonglong local_178;
  char local_170;
  ulonglong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  ulonglong local_148;
  double local_140;
  double local_138;
  char local_130;
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  double local_110;
  int local_104;
  double local_100;
  double local_f8;
  double local_f0;
  ulonglong local_e8;
  double local_e0;
  double local_d8;
  undefined8 *local_d0;
  ulonglong local_c8;
  uint local_bc;
  double local_b8;
  double local_b0;
  double local_a8;
  int local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  undefined8 local_68;
  undefined8 *local_60;
  double local_58;
  char local_50;
  double local_40;
  char local_38 [8];
  
  uVar21 = SUB84(param_1,0);
  local_bc = param_2;
  local_b8 = param_1;
  if (((*(int *)(*unaff_RSI + 0x10) != 0) && (*(int *)(*unaff_RSI + 0x18) != 0)) &&
     (cVar4 = FUN_00e7c000(), uVar21 = extraout_XMM0_Da, cVar4 != '\0')) {
    return;
  }
  if (local_res8 != '\0') {
    uVar21 = FUN_016d7580();
  }
  lVar19 = *unaff_RSI;
  uVar11 = *(ulonglong *)(lVar19 + 0xc);
  if (uVar11 >> 0x20 == 0) {
    if (param_4 == 1) {
      return;
    }
LAB_016e5445:
    if (param_4 == 0) {
joined_r0x016e5bf3:
      if ((uVar11 >> 0x20 == 0) || (*(int *)(lVar19 + 0x18) == 0)) {
        bVar3 = false;
      }
      else {
        cVar4 = FUN_00e7c000();
        uVar21 = extraout_XMM0_Da_00;
        if (((cVar4 == '\0') && (dVar12 = *(double *)(lVar19 + 0xc), (ulonglong)dVar12 >> 0x20 != 0)
            ) && (*(int *)(lVar19 + 0x18) != 0)) {
          local_68 = (double)CONCAT44(local_68._4_4_,2);
          uVar21 = FUN_00e7c260();
          local_58 = dVar12;
          if ((((ulonglong)dVar12 >> 0x20 != 0) && (*(int *)(lVar19 + 0x18) != 0)) &&
             (cVar4 = FUN_00e7c020(), uVar21 = extraout_XMM0_Da_01, cVar4 == '\0')) {
            bVar3 = false;
            goto LAB_016e5a7d;
          }
        }
        bVar3 = true;
      }
LAB_016e5a7d:
      local_60 = (undefined8 *)FUN_016cdc10(uVar21,0);
      dVar12 = (double)(int)local_bc;
      if (in_CL != '\0') {
        dVar12 = dVar12 * DAT_023934c8;
      }
      if (bVar3) {
        dVar12 = dVar12 + dVar12;
      }
      local_98._0_4_ = SUB84(dVar12,0);
      local_98._4_4_ = (undefined4)((ulonglong)dVar12 >> 0x20);
      uVar28 = 0;
      FUN_00e7bdb0();
      FUN_016dbc00(0,((double)CONCAT44(local_98._4_4_,(pthread_key_t)local_98) + (double)local_60) /
                     (double)local_60,0,0,uVar28);
      return;
    }
  }
  else {
    if ((*(int *)(lVar19 + 0x18) == 0) && (param_4 == 1)) {
      return;
    }
    if (param_4 != 1) goto LAB_016e5445;
    if (*(longlong *)(unaff_RDI + 0x78) != 0) {
      pvVar13 = _pthread_getspecific((pthread_key_t)(uVar11 >> 0x20));
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_150 = 0;
      lVar19 = *(longlong *)(unaff_RDI + 0x78);
      if (lVar19 != 0) {
        FUN_00d50b00();
      }
      local_150 = '\x01';
      pVar7 = 0;
      local_158 = lVar19;
      FUN_01900ad0(0,&local_158);
      pvVar13 = _pthread_getspecific(pVar7);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      pvVar13 = _pthread_getspecific(pVar7);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_68 = (double)FUN_0165cf20(0,0);
      dVar12 = *(double *)(*unaff_RSI + 0x14);
      pVar7 = (pthread_key_t)((ulonglong)dVar12 >> 0x20);
      if ((ulonglong)dVar12 >> 0x20 == 0) {
        dVar12 = (double)FUN_00e7bdb0();
      }
      else {
        local_b0 = (double)CONCAT44(local_b0._4_4_,1);
        local_58 = dVar12;
        FUN_00e7c280();
        dVar12 = local_58;
      }
      cVar4 = '\0';
      if ((local_68._4_4_ != 0) && ((ulonglong)dVar12 >> 0x20 != 0)) {
        cVar4 = FUN_00e7c000();
      }
      if ((local_38[0] != '\0') && (local_40 != 0.0)) {
        FUN_00d50b20();
      }
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') goto LAB_016e5449;
      pvVar13 = _pthread_getspecific(pVar7);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_018fe5d0();
      if (cVar4 == '\0') {
        return;
      }
      lVar19 = *unaff_RSI;
      uVar11 = *(ulonglong *)(lVar19 + 0xc);
      uVar21 = extraout_XMM0_Da_02;
      goto joined_r0x016e5bf3;
    }
  }
LAB_016e5449:
  if (param_3 == 8) {
    local_68 = (double)FUN_00e7bcc0();
    dVar12 = *(double *)(*unaff_RSI + 0x14);
    if ((ulonglong)dVar12 >> 0x20 == 0) {
      dVar12 = (double)FUN_00e7bdb0();
    }
    else {
      FUN_00e7c280();
    }
    if (*(ulonglong *)(*unaff_RSI + 0xc) >> 0x20 == 0) {
      FUN_00e7bdb0();
    }
    FUN_00e7b970();
    local_58 = dVar12;
    if (((ulonglong)dVar12 >> 0x20 != 0) && (cVar4 = FUN_00e7c6b0(), cVar4 == '\0')) {
      lVar19 = *unaff_RSI;
      dVar12 = *(double *)(lVar19 + 0xc);
      if ((ulonglong)dVar12 >> 0x20 == 0) {
        dVar12 = (double)FUN_00e7bdb0();
      }
      local_b0 = (double)CONCAT44(local_b0._4_4_,3);
      FUN_00e7c260();
      local_58 = dVar12;
      uVar11 = FUN_00e7bdb0();
      if ((((ulonglong)dVar12 >> 0x20 == 0) || (uVar11 >> 0x20 == 0)) ||
         (cVar4 = FUN_00e7c000(), dVar12 = local_58, cVar4 == '\0')) {
        FUN_00e7c260();
      }
      else {
        dVar12 = (double)FUN_00e7bdb0();
      }
      *(double *)(lVar19 + 0x14) = dVar12;
    }
    lVar19 = *unaff_RSI;
    uVar11 = *(ulonglong *)(lVar19 + 0xc);
    if (uVar11 >> 0x20 == 0) {
      uVar11 = FUN_00e7bdb0();
      lVar19 = *unaff_RSI;
    }
    pVar7 = (pthread_key_t)(*(ulonglong *)(lVar19 + 0x14) >> 0x20);
    if (*(ulonglong *)(lVar19 + 0x14) >> 0x20 == 0) {
      FUN_00e7bdb0();
    }
    else {
      local_58 = (double)CONCAT44(local_58._4_4_,1);
      FUN_00e7c280();
    }
    local_58 = (double)CONCAT44(local_58._4_4_,1);
    FUN_00e7c260();
    FUN_00e7b970();
    local_104 = FUN_00e7cea0();
    local_104 = local_104 + 1;
    FUN_00e7c260();
    local_e8 = uVar11;
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar14 = FUN_0165d690();
    local_98._0_4_ = (pthread_key_t)uVar14;
    local_98._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a8 = (double)FUN_018fcb10();
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_c8 = unaff_RDI + 0x58;
    local_b0 = (double)FUN_0165d690();
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_018fcb10();
    uVar21 = FUN_016da710(SUB84(dVar12,0),local_b0);
    if ((local_38[0] == '\0') && (uVar11 != 0)) {
      uVar21 = FUN_00d50b00();
    }
    local_148 = uVar11;
    FUN_016da710(uVar21,CONCAT44(local_98._4_4_,(pthread_key_t)local_98));
    if ((local_38[0] == '\0') && (uVar11 != 0)) {
      FUN_00d50b00();
    }
    dVar22 = local_b0;
    local_58 = *(double *)(unaff_RDI + 0x68);
    local_110 = (double)uVar11;
    uVar21 = FUN_00e7b820();
    FUN_016da710(uVar21,dVar22);
    if ((local_278 != '\0') && (local_280 != 0)) {
      FUN_00d50b20();
    }
    local_58 = *(double *)(unaff_RDI + 0x68);
    lVar19 = CONCAT44(local_98._4_4_,(pthread_key_t)local_98);
    uVar21 = FUN_00e7b820();
    FUN_016da710(uVar21,lVar19);
    if ((local_268 != '\0') && (local_270 != 0)) {
      FUN_00d50b20();
    }
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_178 = local_148;
    local_170 = '\0';
    pVar7 = 0;
    FUN_01900ec0(0,&local_178);
    local_118 = lVar19;
    if (local_38[0] == '\0') {
      if (((lVar19 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (lVar19 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_168 = (ulonglong)local_110;
    local_160 = '\0';
    pVar7 = 0;
    FUN_01900ec0();
    local_120 = lVar19;
    if (local_38[0] == '\0') {
      if (((lVar19 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (lVar19 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165d690();
    dVar22 = *(double *)(unaff_RDI + 0x68);
    local_58 = dVar22;
    FUN_00e7b970();
    pVar7 = SUB84(dVar22,0);
    local_140 = (double)FUN_016cbad0();
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165d690();
    local_100 = (double)FUN_016cbad0();
    local_e0 = local_140;
    dVar22 = local_140;
    if ((((ulonglong)local_100 >> 0x20 != 0) &&
        (dVar22 = (double)((ulonglong)local_140 >> 0x20), dVar22 != 0.0)) &&
       (cVar4 = FUN_00e7c020(), cVar4 != '\0')) {
      local_e0 = local_100;
    }
    pVar7 = SUB84(dVar22,0);
    if ((local_68._4_4_ == 0) || (cVar4 = FUN_00e7c6b0(), cVar4 == '\0')) {
      FUN_00e7b970();
      pvVar13 = _pthread_getspecific(pVar7);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_58 = (double)FUN_0165d690();
      local_40 = local_b0;
      FUN_00e7b970();
    }
    else {
      local_40 = local_100;
      FUN_00e7bac0();
    }
    local_f0 = local_40;
    FUN_00e7b970();
    FUN_00e7b820();
    FUN_00e7bdc0();
    uVar21 = FUN_00e7cea0();
    local_d8 = (double)CONCAT44(local_d8._4_4_,uVar21);
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165d690();
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_60 = (undefined8 *)FUN_018fd630();
    local_f8 = (double)FUN_00e7c860();
    local_180 = (double)FUN_016cd860();
    local_b8 = (double)FUN_00e7c860();
    puVar15 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar15 = &DAT_02572358;
    (*DAT_02572370)();
    local_88 = puVar15;
    FUN_00e7b820();
    FUN_01907b60(SUB84(local_a8,0));
    local_40 = local_58;
    if (local_50 == '\0') {
      if (local_58 != 0.0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_38[0] = '\0';
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != 0.0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0.0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0.0)) {
      FUN_00d50b20();
    }
    local_9c = 1;
    if (1 < local_d8._0_4_) {
      local_128 = (double)local_d8._0_4_;
      local_f8 = (DAT_023b4df8 / (double)local_60) * local_f8 * local_128;
      local_d0 = (undefined8 *)(local_a8 - dVar12);
      dVar22 = DAT_024119d0;
      if (local_180 * _DAT_023b1e98 <= DAT_024119d0) {
        dVar22 = local_180 * _DAT_023b1e98;
      }
      local_b8 = (local_b8 * DAT_023b4df8) / dVar22;
      do {
        dVar22 = (double)local_9c / local_128;
        dVar27 = local_a8 - local_f8 * dVar22;
        dVar27 = ((local_a8 - (double)local_d0 * dVar22) - dVar27) * dVar22 * dVar22 + dVar27;
        if (dVar27 - dVar12 < local_b8) {
          if ((*(longlong *)(unaff_RDI + 0x88) != 0) &&
             (*(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x88) + 0x10) + 0x10) != 0)) {
            FUN_016d7580();
          }
          goto LAB_016e896d;
        }
        local_60 = (undefined8 *)dVar27;
        FUN_00e7b820();
        dVar22 = local_e0;
        FUN_00e7c2a0();
        local_58 = dVar22;
        FUN_00e7b970();
        uVar21 = FUN_01907b60((int)local_60);
        local_40 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0.0) {
            uVar21 = FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_38[0] = '\0';
        FUN_00d23370(uVar21,0);
        if ((local_38[0] != '\0') && (local_40 != 0.0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0.0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0.0)) {
          FUN_00d50b20();
        }
        local_9c = local_9c + 1;
      } while (local_9c < local_d8._0_4_);
    }
    FUN_016d53b0();
    if ((local_38[0] == '\0') && (local_40 != 0.0)) {
      FUN_00d50b00();
    }
    dVar12 = local_b0;
    local_260 = local_118;
    local_258 = 0;
    local_250 = local_120;
    local_248 = 0;
    local_240 = local_88;
    local_238 = 0;
    local_58 = *(double *)(unaff_RDI + 0x68);
    FUN_00e7b820();
    uVar21 = FUN_016e9760(0,&local_250,&local_240,dVar12);
    local_230 = local_40;
    local_228 = 0;
    FUN_016d6df0(uVar21,1);
    lVar19 = *unaff_RSI;
    if (*(ulonglong *)(lVar19 + 0xc) >> 0x20 == 0) {
      FUN_00e7bdb0();
      lVar19 = *unaff_RSI;
    }
    uVar11 = *(ulonglong *)(lVar19 + 0x14);
    if (uVar11 >> 0x20 == 0) {
      uVar11 = FUN_00e7bdb0();
    }
    else {
      local_58 = (double)CONCAT44(local_58._4_4_,1);
      FUN_00e7c280();
    }
    uVar21 = FUN_00e7b970();
    FUN_016bf110(uVar21,uVar11);
    local_220 = *unaff_RSI;
    local_218 = 0;
    FUN_016d4110();
    puVar15 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar15 = &DAT_025683c0;
    (*DAT_025683d8)();
    FUN_00c92170();
    uVar21 = FUN_00c92160();
    iVar8 = *(int *)(puVar15 + 3);
    FUN_00c8e340(uVar21,1);
    *(double *)(puVar15[2] + (longlong)iVar8) = local_b0;
    dVar12 = local_b0;
    pvVar13 = _pthread_getspecific(SUB84(local_b0,0));
    pVar7 = SUB84(dVar12,0);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165d690();
    local_58 = (double)CONCAT44(local_58._4_4_,1);
    FUN_00e7c280();
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar7 = 0;
    FUN_0165cf20(0,0);
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165d690();
    local_9c = 2;
    FUN_00e7c260();
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar14 = FUN_0165cf20(0,0);
    puVar16 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar16 = &DAT_025fa538;
    uVar24 = _UNK_0239372c;
    uVar23 = _UNK_02393728;
    uVar21 = _UNK_02393724;
    *(undefined4 *)((longlong)puVar16 + 0xc) = _DAT_02393720;
    *(undefined4 *)(puVar16 + 2) = uVar21;
    *(undefined4 *)((longlong)puVar16 + 0x14) = uVar23;
    *(undefined4 *)(puVar16 + 3) = uVar24;
    uVar21 = FUN_00d500e0();
    FUN_016bf110(uVar21,uVar14);
    local_208 = 1;
    local_1f8 = 0;
    pVar7 = 8;
    local_210 = puVar16;
    local_200 = puVar15;
    FUN_016dcbf0(8,&local_200);
    FUN_00d50b20();
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018f9310();
    if (local_res8 != '\0') {
      FUN_016d8330();
    }
    FUN_00d50b20();
    if (local_40 != 0.0) {
      FUN_00d50b20();
    }
LAB_016e896d:
    if (local_88 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (local_120 != 0) {
      FUN_00d50b20();
    }
    if (local_118 != 0) {
      FUN_00d50b20();
    }
    if (local_110 != 0.0) {
      FUN_00d50b20();
    }
    if (local_148 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if (param_3 == 10) {
    local_68 = (double)FUN_00e7bcc0();
    dVar12 = *(double *)(*unaff_RSI + 0x14);
    if ((ulonglong)dVar12 >> 0x20 == 0) {
      dVar12 = (double)FUN_00e7bdb0();
    }
    else {
      FUN_00e7c280();
    }
    if (*(ulonglong *)(*unaff_RSI + 0xc) >> 0x20 == 0) {
      FUN_00e7bdb0();
    }
    FUN_00e7b970();
    local_58 = dVar12;
    if (((ulonglong)dVar12 >> 0x20 != 0) && (cVar4 = FUN_00e7c6b0(), cVar4 == '\0')) {
      lVar19 = *unaff_RSI;
      uVar11 = *(ulonglong *)(lVar19 + 0x14);
      if (uVar11 >> 0x20 == 0) {
        uVar11 = FUN_00e7bdb0();
      }
      else {
        local_58 = (double)CONCAT44(local_58._4_4_,1);
        FUN_00e7c280();
      }
      FUN_00e7c280();
      local_58 = (double)FUN_00e7bdb0();
      if (((uVar11 >> 0x20 != 0) && ((ulonglong)local_58 >> 0x20 != 0)) &&
         (cVar4 = FUN_00e7c000(), cVar4 != '\0')) {
        uVar11 = FUN_00e7bdb0();
      }
      *(ulonglong *)(lVar19 + 0xc) = uVar11;
    }
    uVar11 = *(ulonglong *)(*unaff_RSI + 0x14);
    if (uVar11 >> 0x20 == 0) {
      uVar11 = FUN_00e7bdb0();
    }
    else {
      local_58 = (double)CONCAT44(local_58._4_4_,1);
      FUN_00e7c280();
    }
    local_58 = (double)CONCAT44(local_58._4_4_,1);
    FUN_00e7c260();
    dVar12 = *(double *)(*unaff_RSI + 0xc);
    if ((ulonglong)dVar12 >> 0x20 == 0) {
      dVar12 = (double)FUN_00e7bdb0();
    }
    local_58 = dVar12;
    FUN_00e7b970();
    local_104 = FUN_00e7cea0();
    local_104 = local_104 + 1;
    FUN_00e7c280();
    lVar19 = unaff_RDI + 0x58;
    local_98._0_4_ = (pthread_key_t)lVar19;
    local_98._4_4_ = (undefined4)((ulonglong)lVar19 >> 0x20);
    local_d0 = (undefined8 *)uVar11;
    pvVar13 = _pthread_getspecific((pthread_key_t)local_98);
    pVar7 = (pthread_key_t)lVar19;
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar14 = FUN_0165d690();
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a8 = (double)FUN_018fcb10();
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b0 = (double)FUN_0165d690();
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b8 = (double)FUN_018fcb10();
    FUN_016da710(SUB84(local_b8,0),uVar14);
    if ((local_38[0] == '\0') && (uVar11 != 0)) {
      FUN_00d50b00();
    }
    local_e8 = uVar11;
    FUN_016da710();
    if ((local_38[0] == '\0') && (uVar11 != 0)) {
      FUN_00d50b00();
    }
    local_c8 = uVar11;
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165d690();
    local_140 = (double)FUN_016cbad0();
    local_58 = (double)CONCAT44(local_58._4_4_,1);
    FUN_00e7c280();
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165d690();
    local_100 = (double)FUN_016cbad0();
    local_e0 = local_140;
    dVar12 = local_140;
    if ((((ulonglong)local_100 >> 0x20 != 0) &&
        (dVar12 = (double)((ulonglong)local_140 >> 0x20), dVar12 != 0.0)) &&
       (cVar4 = FUN_00e7c020(), cVar4 != '\0')) {
      local_e0 = local_100;
    }
    pVar7 = SUB84(dVar12,0);
    if ((local_68._4_4_ == 0) || (cVar4 = FUN_00e7c6b0(), cVar4 == '\0')) {
      FUN_00e7b820();
      pvVar13 = _pthread_getspecific(pVar7);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_40 = (double)FUN_0165d690();
      FUN_00e7b970();
    }
    else {
      local_40 = local_100;
      FUN_00e7bac0();
    }
    local_f0 = local_40;
    FUN_00e7b970();
    FUN_00e7b820();
    FUN_00e7bdc0();
    iVar8 = FUN_00e7cea0();
    local_58 = (double)CONCAT44(local_58._4_4_,1);
    FUN_00e7c280();
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165d690();
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_60 = (undefined8 *)FUN_018fd630();
    dVar12 = (double)FUN_00e7c860();
    local_110 = (double)FUN_016cd860();
    local_d8 = (double)FUN_00e7c860();
    puVar15 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar15 = &DAT_02572358;
    (*DAT_02572370)();
    local_88 = puVar15;
    FUN_01907b60(SUB84(local_a8,0));
    local_40 = local_58;
    if (local_50 == '\0') {
      if (local_58 != 0.0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_38[0] = '\0';
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != 0.0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0.0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0.0)) {
      FUN_00d50b20();
    }
    local_9c = 1;
    if (1 < iVar8) {
      local_f8 = (double)iVar8;
      dVar12 = (DAT_023b4df8 / (double)local_60) * dVar12 * local_f8;
      local_128 = local_b8 - local_a8;
      dVar22 = DAT_024119d0;
      if (local_110 * _DAT_023b1e98 <= DAT_024119d0) {
        dVar22 = local_110 * _DAT_023b1e98;
      }
      local_d8 = (local_d8 * DAT_023b4df8) / dVar22;
      do {
        uVar20 = local_c8;
        dVar27 = local_e0;
        uVar11 = local_e8;
        dVar22 = (double)local_9c / local_f8;
        dVar26 = dVar12 * dVar22 + local_a8;
        dVar26 = ((local_128 * dVar22 + local_a8) - dVar26) * dVar22 * dVar22 + dVar26;
        if (local_b8 - dVar26 < local_d8) {
          if ((*(longlong *)(unaff_RDI + 0x88) != 0) &&
             (*(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x88) + 0x10) + 0x10) != 0)) {
            FUN_016d7580();
          }
          goto LAB_016e7a1f;
        }
        local_60 = (undefined8 *)dVar26;
        FUN_00e7c2a0();
        local_58 = dVar27;
        FUN_00e7b820();
        FUN_01907b60((int)local_60);
        local_40 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0.0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_38[0] = '\0';
        FUN_00d21140();
        if ((local_38[0] != '\0') && (local_40 != 0.0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0.0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0.0)) {
          FUN_00d50b20();
        }
        local_9c = local_9c + 1;
      } while (local_9c < iVar8);
    }
    FUN_016d53b0();
    local_2e0 = local_c8;
    if ((local_38[0] == '\0') && (local_40 != 0.0)) {
      FUN_00d50b00();
    }
    local_60 = (undefined8 *)local_40;
    local_2d8 = 0;
    local_2d0 = local_88;
    local_2c8 = 0;
    FUN_016e9760(0,&local_2e0,&local_2d0,local_b0);
    dVar12 = local_b0;
    FUN_00e7b820();
    puVar15 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar15 = &DAT_025683c0;
    (*DAT_025683d8)();
    FUN_00c92170();
    uVar21 = FUN_00c92160();
    iVar8 = *(int *)(puVar15 + 3);
    uVar21 = FUN_00c8e340(uVar21,1);
    *(double *)(puVar15[2] + (longlong)iVar8) = dVar12;
    local_2c0 = (double)local_60;
    local_2b8 = 0;
    FUN_016d6df0(uVar21,1);
    pVar7 = (pthread_key_t)(*(ulonglong *)(*unaff_RSI + 0xc) >> 0x20);
    if (*(ulonglong *)(*unaff_RSI + 0xc) >> 0x20 == 0) {
      FUN_00e7bdb0();
    }
    FUN_00e7b820();
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar7 = 0;
    uVar14 = FUN_0165cf20(0,0);
    local_58 = (double)CONCAT44(local_58._4_4_,1);
    uVar21 = FUN_00e7c280();
    FUN_016bf110(uVar21,uVar14);
    uVar20 = local_c8;
    local_2b0 = *unaff_RSI;
    local_2a8 = 0;
    FUN_016d4110();
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165d690();
    local_58 = (double)CONCAT44(local_58._4_4_,2);
    FUN_00e7c280();
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar7 = 0;
    FUN_0165cf20(0,0);
    local_9c = 1;
    FUN_00e7c260();
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar14 = FUN_0165cf20(0,0);
    puVar16 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar16 = &DAT_025fa538;
    uVar24 = _UNK_0239372c;
    uVar23 = _UNK_02393728;
    uVar21 = _UNK_02393724;
    *(undefined4 *)((longlong)puVar16 + 0xc) = _DAT_02393720;
    *(undefined4 *)(puVar16 + 2) = uVar21;
    *(undefined4 *)((longlong)puVar16 + 0x14) = uVar23;
    *(undefined4 *)(puVar16 + 3) = uVar24;
    uVar21 = FUN_00d500e0();
    FUN_016bf110(uVar21,uVar14);
    local_298 = 1;
    local_288 = 0;
    pVar7 = 10;
    local_2a0 = puVar16;
    local_290 = puVar15;
    FUN_016dcbf0(10,&local_290);
    FUN_00d50b20();
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018f9310();
    if (local_res8 != '\0') {
      FUN_016d8330();
    }
    FUN_00d50b20();
    uVar11 = local_e8;
    if (local_60 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
LAB_016e7a1f:
    if (local_88 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (uVar20 != 0) {
      FUN_00d50b20();
    }
    if (uVar11 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  uVar5 = ((0 < (int)local_bc) - 1) + (uint)(0 < (int)local_bc);
  FUN_016bf560(5,0xffffffff);
  if (*(ulonglong *)(*unaff_RSI + 0xc) >> 0x20 == 0) {
    FUN_00e7bdb0();
  }
  local_68 = (double)CONCAT44(local_68._4_4_,1);
  FUN_00e7c260();
  dVar12 = *(double *)(*unaff_RSI + 0x14);
  if ((ulonglong)dVar12 >> 0x20 == 0) {
    dVar12 = (double)FUN_00e7bdb0();
  }
  else {
    local_58 = (double)CONCAT44(local_58._4_4_,1);
    FUN_00e7c280();
  }
  local_58 = (double)CONCAT44(local_58._4_4_,1);
  FUN_00e7c280();
  puVar15 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar15 = &DAT_025fa538;
  uVar24 = _UNK_0239372c;
  uVar23 = _UNK_02393728;
  uVar21 = _UNK_02393724;
  *(undefined4 *)((longlong)puVar15 + 0xc) = _DAT_02393720;
  *(undefined4 *)(puVar15 + 2) = uVar21;
  *(undefined4 *)((longlong)puVar15 + 0x14) = uVar23;
  *(undefined4 *)(puVar15 + 3) = uVar24;
  uVar21 = FUN_00d500e0();
  FUN_016bf110(uVar21,dVar12);
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  uVar14 = 6;
  local_1f0 = puVar15;
  local_d0 = puVar15;
  FUN_016d23e0(6,&local_1f0,1,1);
  if ((local_38[0] == '\0') && (dVar12 != 0.0)) {
    FUN_00d50b00();
  }
  pVar7 = (pthread_key_t)uVar14;
  if (NAN(local_b8)) {
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b8 = (double)FUN_01907950();
    FUN_00d23340();
    pVar7 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar14 >> 8),local_38[0]);
    pdVar10 = (double *)local_38;
    if (local_38[0] == '\0') {
      pdVar10 = &local_58;
    }
    local_58 = (double)CONCAT71(local_58._1_7_,local_38[0]);
    *(undefined1 *)pdVar10 = 0;
    if ((local_38[0] != '\0') && (dVar12 != 0.0)) {
      FUN_00d50b20();
    }
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_60 = (undefined8 *)FUN_01907950();
    if ((local_58._0_1_ != '\0') && (dVar12 != 0.0)) {
      FUN_00d50b20();
    }
    local_b8 = (local_b8 + (double)local_60) * DAT_023942d0;
  }
  pvVar13 = _pthread_getspecific(pVar7);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar22 = (double)FUN_01907950();
  if (local_b8 < dVar22) {
    pvVar13 = _pthread_getspecific(pVar7);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b8 = (double)FUN_01907950();
  }
  FUN_00d23340();
  local_58 = (double)CONCAT71(local_58._1_7_,local_38[0]);
  pdVar10 = &local_58;
  pdVar9 = (double *)local_38;
  if (local_38[0] == '\0') {
    pdVar9 = pdVar10;
  }
  *(undefined1 *)pdVar9 = 0;
  if ((local_38[0] != '\0') && (dVar12 != 0.0)) {
    FUN_00d50b20();
  }
  pvVar13 = _pthread_getspecific((pthread_key_t)pdVar10);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_60 = (undefined8 *)FUN_01907950();
  if ((local_58._0_1_ != '\0') && (dVar12 != 0.0)) {
    FUN_00d50b20();
  }
  if ((double)local_60 < local_b8) {
    FUN_00d23340();
    local_58 = (double)CONCAT71(local_58._1_7_,local_38[0]);
    pdVar10 = &local_58;
    pdVar9 = (double *)local_38;
    if (local_38[0] == '\0') {
      pdVar9 = pdVar10;
    }
    *(undefined1 *)pdVar9 = 0;
    if ((local_38[0] != '\0') && (dVar12 != 0.0)) {
      FUN_00d50b20();
    }
    pvVar13 = _pthread_getspecific((pthread_key_t)pdVar10);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b8 = (double)FUN_01907950();
    if ((local_58._0_1_ != '\0') && (dVar12 != 0.0)) {
      FUN_00d50b20();
    }
  }
  puVar15 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar15 = &DAT_02572358;
  (*DAT_02572370)();
  local_60 = puVar15;
  if (0 < *(int *)((longlong)dVar12 + 0xc)) {
    lVar19 = 0;
    do {
      pVar7 = SUB84(dVar12,0);
      pvVar13 = _pthread_getspecific(pVar7);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      pvVar13 = _pthread_getspecific(pVar7);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01907950();
      FUN_01907b60();
      if ((((local_38[0] == '\0') && (dVar12 != 0.0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
         (dVar12 != 0.0)) {
        FUN_00d50b20();
      }
      local_38[0] = '\0';
      FUN_00d21140();
      if ((local_38[0] != '\0') && (dVar12 != 0.0)) {
        FUN_00d50b20();
      }
      if (dVar12 != 0.0) {
        FUN_00d50b20();
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < *(int *)((longlong)dVar12 + 0xc));
  }
  dVar22 = dVar12;
  local_40 = dVar12;
  if (local_bc != 0) {
    local_128 = (double)(CONCAT44(local_128._4_4_,uVar5 >> 0x1f) | 2);
    plVar1 = local_60 + 2;
    dVar22 = (double)(ulonglong)*(uint *)((longlong)local_60 + 0xc);
    local_f8 = 0.0;
    do {
      if (SUB84(dVar22,0) < (int)local_128) {
        if ((*(longlong *)(unaff_RDI + 0x88) != 0) &&
           (*(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x88) + 0x10) + 0x10) != 0)) {
          FUN_016d7580();
        }
        goto LAB_016e6d0b;
      }
      iVar8 = (int)(((uint)((ulonglong)dVar22 >> 0x1f) & 1) + SUB84(dVar22,0)) >> 1;
      lVar19 = *plVar1;
      pvVar13 = _pthread_getspecific((pthread_key_t)lVar19);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar22 = (double)FUN_01907950();
      iVar6 = *(int *)((longlong)local_60 + 0xc);
      if (0 < iVar6) {
        uVar11 = (ulonglong)(dVar22 - local_b8) & _DAT_023908f0;
        uVar21 = (undefined4)uVar11;
        uVar23 = (undefined4)(uVar11 >> 0x20);
        uVar11 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) & _UNK_023908f8;
        uVar24 = (undefined4)uVar11;
        uVar25 = (undefined4)(uVar11 >> 0x20);
        lVar17 = 0;
        do {
          local_98._0_4_ = uVar21;
          local_98._4_4_ = uVar23;
          uStack_90 = uVar24;
          uStack_8c = uVar25;
          pvVar13 = _pthread_getspecific((pthread_key_t)lVar19);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar22 = (double)FUN_01907950();
          dVar22 = (double)((ulonglong)(dVar22 - local_b8) & _DAT_023908f0);
          uVar21 = SUB84(dVar22,0);
          uVar23 = (undefined4)((ulonglong)dVar22 >> 0x20);
          uVar11 = CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00) & _UNK_023908f8;
          uVar24 = (undefined4)uVar11;
          uVar25 = (undefined4)(uVar11 >> 0x20);
          iVar6 = (int)lVar17;
          if (local_98 <= dVar22) {
            uVar21 = (pthread_key_t)local_98;
            uVar23 = local_98._4_4_;
            iVar6 = iVar8;
          }
          iVar8 = iVar6;
          lVar17 = lVar17 + 1;
          iVar6 = *(int *)((longlong)local_60 + 0xc);
        } while (lVar17 < iVar6);
      }
      pVar7 = (uint)(iVar8 < iVar6 + -1 && 0 < (int)uVar5) + iVar8;
      local_a8 = (double)CONCAT44(local_a8._4_4_,pVar7);
      lVar19 = (longlong)(int)pVar7;
      if (pVar7 == 0) {
        pvVar13 = _pthread_getspecific(0);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = (double)FUN_019079b0();
        pvVar13 = _pthread_getspecific((pthread_key_t)lVar19);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_58 = (double)FUN_019079b0();
        FUN_00e7b970();
        local_88 = (undefined8 *)local_40;
        pvVar13 = _pthread_getspecific((pthread_key_t)lVar19);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar22 = (double)FUN_01907950();
        local_98 = dVar22;
        pvVar13 = _pthread_getspecific((pthread_key_t)lVar19);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar22 = (double)FUN_01907950();
      }
      else {
        pvVar13 = _pthread_getspecific(pVar7);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = (double)FUN_019079b0();
        pvVar13 = _pthread_getspecific(pVar7);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_58 = (double)FUN_019079b0();
        FUN_00e7b970();
        local_88 = (undefined8 *)local_40;
        pvVar13 = _pthread_getspecific(pVar7);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar22 = (double)FUN_01907950();
        lVar19 = *plVar1;
        local_98 = dVar22;
        pvVar13 = _pthread_getspecific((pthread_key_t)lVar19);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar22 = (double)FUN_01907950();
      }
      puVar15 = local_60;
      local_98 = local_98 - dVar22;
      if ((int)uVar5 < 1) {
        iVar8 = local_a8._0_4_;
        FUN_00d23620();
        if (iVar8 < *(int *)((longlong)puVar15 + 0xc)) goto LAB_016e6276;
      }
      else {
        pvVar13 = _pthread_getspecific((pthread_key_t)lVar19);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_019079b0();
        pvVar13 = _pthread_getspecific((pthread_key_t)lVar19);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01907950();
        uVar21 = FUN_01907b60();
        local_40 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0.0) {
            uVar21 = FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_38[0] = '\0';
        FUN_00d23370(uVar21,(ulonglong)local_a8 & 0xffffffff);
        if ((local_38[0] != '\0') && (local_40 != 0.0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0.0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0.0)) {
          FUN_00d50b20();
        }
        iVar8 = local_a8._0_4_ + 1;
        if (iVar8 < *(int *)((longlong)local_60 + 0xc)) {
LAB_016e6276:
          lVar17 = (longlong)iVar8;
          do {
            pvVar13 = _pthread_getspecific((pthread_key_t)lVar19);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar13 = _pthread_getspecific((pthread_key_t)lVar19);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_40 = (double)FUN_019079b0();
            puVar15 = local_88;
            FUN_00e7c2a0();
            local_58 = (double)puVar15;
            FUN_00e7b820();
            FUN_01907c60();
            pvVar13 = _pthread_getspecific((pthread_key_t)lVar19);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar13 = _pthread_getspecific((pthread_key_t)lVar19);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar22 = (double)FUN_01907950();
            FUN_01907cc0(SUB84(dVar22 + (double)(int)uVar5 * local_98,0));
            lVar17 = lVar17 + 1;
          } while (lVar17 < *(int *)((longlong)local_60 + 0xc));
        }
      }
      FUN_00d23340();
      local_58 = (double)CONCAT71(local_58._1_7_,local_38[0]);
      pdVar10 = &local_58;
      pdVar9 = (double *)local_38;
      if (local_38[0] == '\0') {
        pdVar9 = pdVar10;
      }
      *(undefined1 *)pdVar9 = 0;
      if ((local_38[0] != '\0') && (local_40 != 0.0)) {
        FUN_00d50b20();
      }
      pVar7 = (pthread_key_t)pdVar10;
      pvVar13 = _pthread_getspecific(pVar7);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_d8 = (double)FUN_01907950();
      pvVar13 = _pthread_getspecific(pVar7);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar22 = (double)FUN_01907950();
      local_98 = dVar22;
      FUN_00d23340();
      local_68 = (double)CONCAT71(local_68._1_7_,local_38[0]);
      pdVar10 = (double *)&local_68;
      pdVar9 = (double *)local_38;
      if (local_38[0] == '\0') {
        pdVar9 = pdVar10;
      }
      *(undefined1 *)pdVar9 = 0;
      if ((local_38[0] != '\0') && (local_40 != 0.0)) {
        FUN_00d50b20();
      }
      pVar7 = (pthread_key_t)pdVar10;
      pvVar13 = _pthread_getspecific(pVar7);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_88 = (undefined8 *)FUN_01907950();
      pvVar13 = _pthread_getspecific(pVar7);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_a8 = (double)FUN_01907950();
      if (((char)local_68 != '\0') && (local_40 != 0.0)) {
        FUN_00d50b20();
      }
      if ((local_58._0_1_ != '\0') && (local_40 != 0.0)) {
        FUN_00d50b20();
      }
      dVar22 = (double)(ulonglong)*(uint *)((longlong)local_60 + 0xc);
      if (0 < (int)*(uint *)((longlong)local_60 + 0xc)) {
        local_d8 = (local_d8 - local_98) / ((double)local_88 - local_a8);
        lVar19 = 0;
        do {
          pVar7 = SUB84(dVar22,0);
          pvVar13 = _pthread_getspecific(pVar7);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar22 = (double)FUN_01907950();
          local_98 = dVar22;
          pvVar13 = _pthread_getspecific(pVar7);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_88 = (undefined8 *)FUN_01907950();
          pvVar13 = _pthread_getspecific(pVar7);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_a8 = (double)FUN_01907950();
          pvVar13 = _pthread_getspecific(pVar7);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01907cc0(SUB84(local_98 + ((double)local_88 - local_a8) * local_d8,0));
          lVar19 = lVar19 + 1;
          dVar22 = (double)(longlong)*(int *)((longlong)local_60 + 0xc);
        } while (lVar19 < (longlong)dVar22);
      }
      uVar18 = SUB84(local_f8,0) + 1;
      local_f8 = (double)(ulonglong)uVar18;
      uVar2 = -local_bc;
      if (0 < (int)local_bc) {
        uVar2 = local_bc;
      }
    } while (uVar18 < uVar2);
  }
  pVar7 = SUB84(dVar22,0);
  FUN_016d53b0();
  if ((local_38[0] == '\0') && (local_40 != 0.0)) {
    FUN_00d50b00();
  }
  local_a8 = local_40;
  dVar22 = **(double **)((longlong)dVar12 + 0x10);
  if (dVar22 != 0.0) {
    FUN_00d50b00();
  }
  local_88 = (undefined8 *)dVar22;
  pvVar13 = _pthread_getspecific(pVar7);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d23340();
  local_68 = (double)CONCAT71(local_68._1_7_,local_38[0]);
  pdVar10 = (double *)local_38;
  if (local_38[0] == '\0') {
    pdVar10 = (double *)&local_68;
  }
  *(undefined1 *)pdVar10 = 0;
  if ((local_38[0] != '\0') && (local_40 != 0.0)) {
    FUN_00d50b20();
  }
  local_130 = 0;
  if ((char)local_68 == '\0') {
    if (local_40 != 0.0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = (double)((ulonglong)local_68 & 0xffffffffffffff00);
  }
  local_130 = '\x01';
  local_138 = local_40;
  FUN_01900ec0(0,&local_138);
  local_98._0_4_ = SUB84(local_58,0);
  local_98._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  if (local_50 == '\0') {
    if (((local_58 != 0.0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0.0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_130 != '\0') && (local_138 != 0.0)) {
    FUN_00d50b20();
  }
  FUN_00d23340();
  pdVar10 = (double *)&local_68;
  if (local_38[0] != '\0') {
    pdVar10 = (double *)local_38;
  }
  local_68 = (double)CONCAT71(local_68._1_7_,local_38[0]);
  *(undefined1 *)pdVar10 = 0;
  if ((local_38[0] != '\0') && (local_40 != 0.0)) {
    FUN_00d50b20();
  }
  pvVar13 = _pthread_getspecific((pthread_key_t)pdVar10);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_019079b0();
  FUN_00d23340();
  pdVar10 = &local_b0;
  pdVar9 = (double *)local_38;
  if (local_38[0] == '\0') {
    pdVar9 = pdVar10;
  }
  local_b0 = (double)CONCAT71(local_b0._1_7_,local_38[0]);
  *(undefined1 *)pdVar9 = 0;
  if ((local_38[0] != '\0') && (local_40 != 0.0)) {
    FUN_00d50b20();
  }
  pVar7 = (pthread_key_t)pdVar10;
  pvVar13 = _pthread_getspecific(pVar7);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_58 = (double)FUN_019079b0();
  FUN_00e7b970();
  if ((local_b0._0_1_ != '\0') && (local_40 != 0.0)) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_40 != 0.0)) {
    FUN_00d50b20();
  }
  FUN_00e7bcc0();
  FUN_016cb850(SUB84(local_b8,0));
  FUN_00e7cd00();
  pvVar13 = _pthread_getspecific(pVar7);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar14 = FUN_0165d690();
  local_1d0 = (double)local_88;
  local_1c8 = 0;
  local_1c0 = CONCAT44(local_98._4_4_,(pthread_key_t)local_98);
  local_1b8 = 0;
  local_1b0 = local_60;
  local_1a8 = 0;
  local_58 = *(double *)(unaff_RDI + 0x68);
  FUN_00e7b970();
  FUN_016e9760(0,&local_1c0,&local_1b0,uVar14);
  lVar19 = *unaff_RSI;
  dVar22 = *(double *)(lVar19 + 0x14);
  if ((ulonglong)dVar22 >> 0x20 == 0) {
    dVar22 = (double)FUN_00e7bdb0();
  }
  else {
    local_58 = (double)CONCAT44(local_58._4_4_,1);
    FUN_00e7c280();
  }
  FUN_00e7c260();
  local_58 = dVar22;
  uVar11 = FUN_00e7bdb0();
  if ((((ulonglong)dVar22 >> 0x20 == 0) || (uVar11 >> 0x20 == 0)) ||
     (cVar4 = FUN_00e7c000(), dVar22 = local_58, cVar4 == '\0')) {
    local_68 = (double)CONCAT44(local_68._4_4_,1);
    FUN_00e7c260();
  }
  else {
    dVar22 = (double)FUN_00e7bdb0();
  }
  *(double *)(lVar19 + 0x14) = dVar22;
  if (*(ulonglong *)(*unaff_RSI + 0xc) >> 0x20 == 0) {
    FUN_00e7bdb0();
  }
  local_68 = (double)CONCAT44(local_68._4_4_,1);
  FUN_00e7c280();
  uVar11 = *(ulonglong *)(*unaff_RSI + 0x14);
  if (uVar11 >> 0x20 == 0) {
    uVar11 = FUN_00e7bdb0();
  }
  else {
    local_58 = (double)CONCAT44(local_58._4_4_,1);
    FUN_00e7c280();
  }
  local_58 = (double)CONCAT44(local_58._4_4_,2);
  FUN_00e7c260();
  puVar15 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar15 = &DAT_025fa538;
  uVar24 = _UNK_0239372c;
  uVar23 = _UNK_02393728;
  uVar21 = _UNK_02393724;
  *(undefined4 *)((longlong)puVar15 + 0xc) = _DAT_02393720;
  *(undefined4 *)(puVar15 + 2) = uVar21;
  *(undefined4 *)((longlong)puVar15 + 0x14) = uVar23;
  *(undefined4 *)(puVar15 + 3) = uVar24;
  uVar21 = FUN_00d500e0();
  FUN_016bf110(uVar21,uVar11);
  local_198 = 1;
  pVar7 = 1;
  local_1a0 = puVar15;
  FUN_016e9c70(1,2);
  uVar21 = FUN_00d50b20();
  local_190 = local_a8;
  local_188 = 0;
  FUN_016d6df0(uVar21,1);
  pvVar13 = _pthread_getspecific(pVar7);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018f9310();
  if (local_res8 != '\0') {
    FUN_016d8330();
  }
  if (CONCAT44(local_98._4_4_,(pthread_key_t)local_98) != 0) {
    FUN_00d50b20();
  }
  puVar15 = local_60;
  if (local_88 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_a8 != 0.0) {
    FUN_00d50b20();
  }
  if (puVar15 != (undefined8 *)0x0) {
LAB_016e6d0b:
    FUN_00d50b20();
    if (dVar12 == 0.0) goto LAB_016e6d23;
  }
  FUN_00d50b20();
LAB_016e6d23:
  if (local_d0 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


