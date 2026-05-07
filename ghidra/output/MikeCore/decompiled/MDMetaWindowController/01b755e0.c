// Function: FUN_01b755e0
// Address: 01b755e0
// Size: 4087 bytes
// Class: MDMetaWindowController


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b755e0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  longlong **pplVar4;
  void *pvVar5;
  longlong **pplVar6;
  longlong lVar7;
  undefined8 *puVar8;
  pthread_key_t pVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  longlong *in_RDX;
  char unaff_SIL;
  longlong *unaff_RDI;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar15 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar31;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  longlong *local_170;
  longlong *local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong local_118;
  char local_110;
  undefined1 local_108 [16];
  undefined1 local_d8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  int iStack_84;
  undefined8 local_80;
  longlong *local_78;
  char local_70;
  undefined8 local_68;
  longlong *local_60;
  char local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  longlong *local_38;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  
  local_98._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  local_98._0_4_ = (undefined4)param_2;
  plVar11 = param_1;
  if (unaff_RDI[0x29] != 0) {
    FUN_01b791a0();
  }
  *(char *)(unaff_RDI + 0x3b) = unaff_SIL;
  cVar3 = (**(code **)(*unaff_RDI + 0x998))();
  if (cVar3 != '\0') {
    local_158 = '\0';
    local_160 = 0;
    (**(code **)(*unaff_RDI + 0x9a8))();
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
  }
  local_d8 = ZEXT416(DAT_023941f0);
  if (unaff_RDI[0x37] == 0) {
LAB_01b7581b:
    if (unaff_RDI[0x2c] == 0) goto LAB_01b7589c;
LAB_01b75828:
    FUN_01a8c310();
    local_38 = local_60;
    plVar11 = local_60;
    if (local_60 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (((local_58[0] == '\0') && (FUN_00d50b00(), local_58[0] != '\0')) &&
         (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00ca1380();
    plVar2 = local_60;
    local_78 = (longlong *)CONCAT71(local_78._1_7_,local_58[0]);
    pplVar4 = (longlong **)local_58;
    if (local_58[0] == '\0') {
      pplVar4 = &local_78;
    }
    *(char *)pplVar4 = '\0';
    if ((local_58[0] != '\0') && (plVar2 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    iVar12 = *(int *)((longlong)plVar2 + 0xc);
    if (((char)local_78 != '\0') && (plVar2 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar12 < 1) goto LAB_01b7581b;
    FUN_00ca1380();
    plVar2 = local_60;
    pplVar4 = (longlong **)local_58;
    if (local_58[0] == '\0') {
      pplVar4 = &local_78;
    }
    local_78 = (longlong *)CONCAT71(local_78._1_7_,local_58[0]);
    *(char *)pplVar4 = '\0';
    if ((local_58[0] != '\0') && (plVar2 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_78 == '\0') {
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_01b7574f;
      }
    }
    else if (plVar2 != (longlong *)0x0) {
LAB_01b7574f:
      local_58[0] = '\0';
      local_60 = (longlong *)0x0;
      local_50 = plVar2;
      local_48 = 0xffffffff;
      local_40 = 0;
      local_d8 = ZEXT416(DAT_0241f360);
      iVar12 = 0;
      while( true ) {
        if (iVar12 != 0) {
          if (iVar12 < 1) {
            iVar12 = -iVar12;
          }
          else {
            local_48 = CONCAT44(local_48._4_4_,(int)local_48 - iVar12);
            FUN_00d23690(iVar12,iVar12);
            local_40 = local_40 + local_48._4_4_;
            iVar12 = 0;
          }
          local_48 = CONCAT44(iVar12,(int)local_48);
        }
        lVar7 = (longlong)(int)local_48;
        iVar12 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar12);
        if (*(int *)((longlong)local_50 + 0xc) <= iVar12) break;
        local_60 = *(longlong **)(local_50[2] + 8 + lVar7 * 8);
        FUN_00dd6ab0();
        if ((float)local_d8._0_4_ < (float)local_98._0_4_) {
          FUN_00dd6ab0();
          local_d8._4_4_ = local_98._4_4_;
          local_d8._0_4_ = local_98._0_4_;
          local_d8._8_4_ = in_XMM1_Dc;
          local_d8._12_4_ = in_XMM1_Dd;
        }
        iVar12 = local_48._4_4_;
      }
      plVar11 = local_50;
      FUN_00115a50();
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_01b7581b;
    }
    local_d8 = ZEXT416(DAT_0241f360);
    if (unaff_RDI[0x2c] != 0) goto LAB_01b75828;
LAB_01b7589c:
    bVar1 = false;
    local_38 = (longlong *)0x0;
  }
  pVar9 = (pthread_key_t)plVar11;
  local_80 = (longlong *)FUN_00e7bdb0();
  iStack_84 = (int)((ulonglong)param_1 >> 0x20);
  if (iStack_84 == 0) {
    lVar7 = unaff_RDI[0x2b];
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar10 = &local_68;
    FUN_01252670(puVar10,0,&local_80,0);
    plVar11 = local_60;
    pVar9 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar10 >> 8),local_58[0]);
    pplVar4 = &local_78;
    if (local_58[0] != '\0') {
      pplVar4 = (longlong **)local_58;
    }
    local_78 = (longlong *)CONCAT71(local_78._1_7_,local_58[0]);
    *(char *)pplVar4 = '\0';
    if ((local_58[0] != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_78 != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (plVar11 == (longlong *)0x0) goto LAB_01b75978;
LAB_01b75a55:
    unaff_RDI[0x2a] = (longlong)local_68;
  }
  else {
LAB_01b75978:
    lVar7 = unaff_RDI[0x2b];
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012521f0(param_1,0,&local_68,&local_80);
    plVar11 = local_60;
    local_78 = (longlong *)CONCAT71(local_78._1_7_,local_58[0]);
    pplVar4 = &local_78;
    pplVar6 = (longlong **)local_58;
    if (local_58[0] == '\0') {
      pplVar6 = pplVar4;
    }
    *(char *)pplVar6 = '\0';
    if ((local_58[0] != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pVar9 = (pthread_key_t)pplVar4;
    if (((char)local_78 != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (plVar11 == (longlong *)0x0) {
      if (local_38 != (longlong *)0x0) {
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar9 = 0;
        lVar7 = FUN_016cac90(0,1);
        unaff_RDI[0x2a] = lVar7;
        lVar7 = unaff_RDI[0x2b];
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        plVar11 = unaff_RDI + 0x2a;
        FUN_012521f0(*plVar11,0,&local_170,&local_168);
        plVar2 = local_60;
        pplVar4 = (longlong **)local_58;
        if (local_58[0] == '\0') {
          pplVar4 = &local_78;
        }
        local_78 = (longlong *)CONCAT71(local_78._1_7_,local_58[0]);
        *(char *)pplVar4 = '\0';
        if ((local_58[0] != '\0') && (plVar2 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_78 != '\0') && (plVar2 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if (plVar2 == (longlong *)0x0) {
          local_168 = (longlong *)*plVar11;
        }
        else {
          *plVar11 = (longlong)local_168;
        }
        local_68 = local_168;
        pvVar5 = _pthread_getspecific((pthread_key_t)local_168);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        if (((iStack_84 != 0) && (*(int *)((longlong)unaff_RDI + 0x154) != 0)) &&
           (cVar3 = FUN_00e7c000(), cVar3 != '\0')) {
          local_78 = (longlong *)CONCAT44(local_78._4_4_,1);
          local_60 = param_1;
          FUN_00e7c260();
        }
        plVar11 = (longlong *)0x0;
        local_80 = (longlong *)FUN_016cac90(0,2);
        local_120 = 0xffffffff;
        local_58[0] = '\0';
        local_60 = (longlong *)0x0;
        do {
          pVar9 = (pthread_key_t)plVar11;
          lVar7 = unaff_RDI[0x2b];
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          pvVar5 = _pthread_getspecific(pVar9);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          plVar11 = local_80;
          cVar3 = FUN_01252960(local_80,local_68,&local_60,&local_170);
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if (cVar3 == '\0') {
            pVar9 = local_80._4_4_;
            goto joined_r0x01b76009;
          }
        } while (local_60 == (longlong *)0x0);
        pVar9 = (pthread_key_t)((ulonglong)local_170 >> 0x20);
        local_80 = local_170;
joined_r0x01b76009:
        if (((pVar9 != 0) && (local_68._4_4_ != 0)) && (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
          local_11c = 1;
          local_78 = local_68;
          FUN_00e7c260();
          local_80 = local_78;
        }
        FUN_01e436c0();
        local_108._4_4_ = local_98._4_4_;
        local_108._0_4_ = local_98._0_4_;
        local_108._8_4_ = in_XMM1_Dc;
        local_108._12_4_ = in_XMM1_Dd;
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b75a70;
      }
      local_60 = param_1;
      FUN_00e7c860();
      local_68 = (longlong *)FUN_00e7cc50();
      unaff_RDI[0x2a] = (longlong)local_68;
      local_78 = (longlong *)FUN_00e7bcc0();
      local_60 = local_68;
      FUN_00e7b820();
      local_80 = local_60;
    }
    else {
      if (unaff_SIL == '\0') goto LAB_01b75a55;
      unaff_RDI[0x2a] = (longlong)param_1;
      local_68 = param_1;
    }
  }
  local_108 = ZEXT416(DAT_0241d9d0);
LAB_01b75a70:
  local_a8._0_8_ = FUN_01e3f820();
  local_a8._8_8_ = extraout_XMM0_Qb;
  local_98._8_4_ = in_XMM1_Dc;
  local_98._12_4_ = in_XMM1_Dd;
  uVar13 = FUN_01e436c0();
  auVar28._8_4_ = (int)extraout_XMM0_Qb_00;
  auVar28._0_8_ = uVar13;
  auVar28._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  if (local_68._4_4_ == 0) {
    auVar15 = blendps(local_a8,auVar28,0xd);
  }
  else {
    uVar14 = (**(code **)(*unaff_RDI + 0xa68))();
    auVar15._0_4_ = _DAT_023945e0 & (uint)(float)uVar14;
    auVar15._4_4_ = _UNK_023945e4 & (uint)((ulonglong)uVar14 >> 0x20);
    auVar15._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_01;
    auVar15._12_4_ = _UNK_023945ec & (uint)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
    auVar30._4_12_ = SUB1612(auVar15 | _DAT_023945f0,4);
    auVar30._0_4_ = SUB164(auVar15 | _DAT_023945f0,0) + (float)uVar14;
    auVar15 = roundss(ZEXT816(0),auVar30,0xb);
    if ((float)uVar13 <= auVar15._0_4_) {
      auVar15 = blendps(local_a8,auVar15,1);
      auVar28 = auVar15;
    }
    else {
      auVar15 = blendps(local_a8,auVar28,0xd);
      auVar28 = auVar30;
    }
  }
  if ((ulonglong)local_80 >> 0x20 == 0) {
    auVar17._0_8_ = FUN_01e436c0();
    auVar17._8_8_ = extraout_XMM0_Qb_03;
    auVar16._4_12_ = auVar17._4_12_;
    auVar16._0_4_ = (float)auVar17._0_8_ + auVar28._0_4_ + DAT_02390d00;
  }
  else {
    uVar13 = (**(code **)(*unaff_RDI + 0xa68))();
    auVar26._0_4_ = _DAT_023945e0 & (uint)(float)uVar13;
    auVar26._4_4_ = _UNK_023945e4 & (uint)((ulonglong)uVar13 >> 0x20);
    auVar26._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_02;
    auVar26._12_4_ = _UNK_023945ec & (uint)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
    auVar27._4_12_ = SUB1612(auVar26 | _DAT_023945f0,4);
    auVar27._0_4_ = SUB164(auVar26 | _DAT_023945f0,0) + (float)uVar13;
    auVar16 = roundss(ZEXT816(0),auVar27,0xb);
  }
  local_a8._0_4_ = auVar15._0_4_;
  auVar18._4_12_ = auVar16._4_12_;
  auVar18._0_4_ = auVar16._0_4_ - (float)local_a8._0_4_;
  auVar28 = blendps(local_98,auVar18,1);
  local_98 = auVar28;
  if (((float)local_108._0_4_ < auVar18._0_4_) || (auVar18._0_4_ < (float)local_d8._0_4_)) {
    if (local_38 == (longlong *)0x0) {
      if (auVar18._0_4_ <= (float)local_108._0_4_) {
        local_98 = blendps(auVar28,local_d8,1);
      }
      else {
        local_98 = blendps(auVar28,local_108,1);
      }
    }
    else if (auVar18._0_4_ <= (float)local_108._0_4_) {
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      auVar19._4_12_ = local_d8._4_12_;
      auVar19._0_4_ = (float)local_d8._0_4_ + (float)local_a8._0_4_;
      (**(code **)(*(longlong *)unaff_RDI[0x2c] + 0x3c8))(auVar19._0_8_);
      FUN_016cb690(0,0);
      auVar20._0_8_ = (**(code **)(*unaff_RDI + 0xa68))();
      auVar20._8_8_ = extraout_XMM0_Qb_04;
      auVar21._4_12_ = auVar20._4_12_;
      auVar21._0_4_ = (float)auVar20._0_8_ - (float)local_a8._0_4_;
      local_98 = blendps(auVar28,auVar21,1);
    }
    else if (local_68._4_4_ != 0) {
      pvVar5 = _pthread_getspecific(pVar9);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        pVar9 = (pthread_key_t)local_38;
      }
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_60 = (longlong *)FUN_016caaa0();
      local_78 = (longlong *)CONCAT44(local_78._4_4_,1);
      uVar13 = FUN_00e7c260();
      FUN_016c4760(uVar13,0);
      auVar22._0_8_ = (**(code **)(*unaff_RDI + 0xa68))();
      auVar22._8_8_ = extraout_XMM0_Qb_05;
      auVar23._4_12_ = auVar22._4_12_;
      auVar23._0_4_ = (float)auVar22._0_8_ - (float)local_a8._0_4_;
      if ((float)local_d8._0_4_ < auVar23._0_4_) {
        local_98 = blendps(auVar23,auVar28,0xe);
      }
      if (local_68._4_4_ == 0) {
        local_98 = auVar28;
      }
    }
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(puVar8 + 0x27) = 0;
  puVar8[0x2e] = 0;
  *(undefined4 *)(puVar8 + 0x2f) = 0;
  puVar8[0x30] = 0;
  *(undefined1 *)(puVar8 + 0x31) = 0;
  puVar8[0x28] = 0;
  puVar8[0x29] = 0;
  *(undefined4 *)(puVar8 + 0x2a) = 0;
  puVar8[0x2b] = 0;
  puVar8[0x2c] = 0;
  *(undefined8 *)((longlong)puVar8 + 0x165) = 0;
  *(undefined8 *)((longlong)puVar8 + 0x18c) = 0;
  *(undefined8 *)((longlong)puVar8 + 0x194) = 0;
  *(undefined8 *)((longlong)puVar8 + 0x199) = 0;
  puVar8[0x35] = 0;
  puVar8[0x36] = 0;
  puVar8[0x37] = 0;
  puVar8[0x38] = 0;
  *puVar8 = &DAT_0269c118;
  puVar8[2] = &DAT_0269cc70;
  puVar8[0x39] = &DAT_0269ccb0;
  puVar8[0x45] = 0;
  *(undefined2 *)(puVar8 + 0x46) = 0;
  puVar8[0x47] = 0;
  puVar8[0x3a] = 0;
  puVar8[0x3b] = 0;
  *(undefined4 *)(puVar8 + 0x3c) = 0;
  puVar8[0x3f] = 0;
  puVar8[0x40] = 0;
  puVar8[0x3d] = 0;
  puVar8[0x3e] = 0;
  *(undefined8 *)((longlong)puVar8 + 0x205) = 0;
  puVar8[0x42] = 0;
  puVar8[0x43] = 0;
  *(undefined8 *)((longlong)puVar8 + 0x21d) = 0;
  (*DAT_0269c130)();
  puVar10 = (undefined8 *)unaff_RDI[0x29];
  if (puVar10 == puVar8) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x29] = (longlong)puVar8;
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  fVar31 = local_98._4_4_;
  auVar24._4_4_ = fVar31;
  auVar24._0_4_ = fVar31;
  auVar24._8_4_ = local_98._12_4_;
  auVar24._12_4_ = local_98._12_4_;
  auVar25._4_12_ = auVar24._4_12_;
  auVar25._0_4_ = fVar31 + DAT_02390d00;
  auVar29._4_12_ = local_98._4_12_;
  auVar29._0_4_ = local_98._0_4_ + DAT_02390d00;
  auVar30 = insertps(auVar29,auVar25,0x10);
  auVar28 = blendps(auVar15,ZEXT416((uint)(DAT_02390124 + (float)local_a8._0_4_)),1);
  (**(code **)(*(longlong *)unaff_RDI[0x29] + 0x4d0))(auVar28._0_8_,auVar30._0_8_);
  plVar11 = (longlong *)unaff_RDI[0x29];
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_78 + 0x370))();
  plVar2 = local_60;
  if (local_58[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58[0] = '\0';
  }
  (**(code **)(*plVar11 + 0x9d8))();
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x29] + 0x3a0))();
  plVar11 = (longlong *)unaff_RDI[0x29];
  local_150 = *in_RDX;
  local_148 = '\0';
  (**(code **)(*unaff_RDI + 0x940))(unaff_RDI[0x2a],&local_150);
  plVar2 = local_60;
  if (local_58[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58[0] = '\0';
  }
  (**(code **)(*plVar11 + 0x968))();
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  plVar11 = (longlong *)unaff_RDI[0x29];
  FUN_00d50b00();
  (**(code **)(*plVar11 + 0xa20))();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  lVar7 = DAT_027ebf00;
  plVar11 = (longlong *)unaff_RDI[0x29];
  if (DAT_027ebf00 != 0) {
    FUN_00d50b00();
  }
  local_140 = lVar7;
  local_138 = '\x01';
  (**(code **)(*plVar11 + 0xa10))();
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e073f0();
  local_110 = 0;
  local_118 = unaff_RDI[0x29];
  if (local_118 != 0) {
    FUN_00d50b00();
  }
  local_110 = '\x01';
  (**(code **)(*unaff_RDI + 0x450))();
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  local_130 = *param_3;
  local_128 = '\0';
  (**(code **)(*(longlong *)unaff_RDI[0x29] + 0xac0))();
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x620))();
  if ((bVar1) && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


