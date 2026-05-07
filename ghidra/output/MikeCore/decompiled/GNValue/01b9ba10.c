// Function: FUN_01b9ba10
// Address: 01b9ba10
// Size: 2274 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x01b9c021) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b9ba10(pthread_key_t param_1,undefined8 param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  char *pcVar11;
  longlong *plVar12;
  longlong *unaff_RDI;
  bool bVar13;
  float fVar14;
  float extraout_XMM0_Db;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar15 [16];
  undefined8 extraout_XMM0_Qb_02;
  float extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qb_05;
  float fVar18;
  float in_XMM1_Dd;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  undefined8 local_e8;
  undefined1 local_a8 [16];
  undefined8 local_90;
  longlong *local_88;
  char local_80;
  undefined8 local_78;
  longlong *local_68;
  longlong *local_60;
  char local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  char local_38 [8];
  undefined8 extraout_XMM0_Qb_04;
  
  plVar3 = local_60;
  fVar18 = (float)((ulonglong)param_2 >> 0x20);
  local_90 = FUN_00e7bdb0();
  local_e8 = FUN_00e7bdb0();
  local_a8._0_8_ = FUN_01e436c0();
  local_a8._8_8_ = extraout_XMM0_Qb;
  iVar5 = FUN_01d3a5a0();
  plVar12 = local_60;
  if (iVar5 == 1) {
    FUN_01d3abf0();
    local_a8._0_8_ = FUN_01e466c0();
    local_a8._8_8_ = extraout_XMM0_Qb_00;
    FUN_01b920e0();
    plVar2 = local_88;
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*unaff_RDI + 0xa70))();
    FUN_012523c0(&local_90,0,&local_e8,0);
    local_38[0] = local_58[0];
    pcVar11 = local_38;
    pcVar8 = local_58;
    if (local_58[0] == '\0') {
      pcVar8 = pcVar11;
    }
    *pcVar8 = '\0';
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pVar10 = (pthread_key_t)pcVar11;
    if ((local_38[0] == '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_80 != '\0') && (plVar2 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01b920e0();
    plVar2 = local_88;
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*unaff_RDI + 0xa70))();
    FUN_012523c0(&local_90,0,&local_e8,0);
    pcVar11 = local_58;
    if (local_58[0] == '\0') {
      pcVar11 = local_38;
    }
    local_38[0] = local_58[0];
    *pcVar11 = '\0';
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_60 == (longlong *)0x0) {
      local_68 = (longlong *)0x0;
      local_78 = 0;
    }
    else {
      local_78 = CONCAT71((int7)((ulonglong)local_60 >> 8),1);
      local_68 = local_60;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_80 != '\0') && (plVar2 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x6f8))();
    if (local_60 == (longlong *)0x0) {
      bVar1 = false;
      plVar12 = (longlong *)0x0;
    }
    else {
      bVar1 = true;
      if (((local_58[0] == '\0') && (FUN_00d50b00(), local_58[0] != '\0')) &&
         (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (local_90._4_4_ == 0) {
      local_a8._0_8_ = FUN_01e436c0();
      local_a8._8_8_ = extraout_XMM0_Qb_02;
    }
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    cVar4 = (**(code **)(*unaff_RDI + 0x9d0))();
    if (cVar4 != '\0') {
      uVar7 = (**(code **)(*unaff_RDI + 0x9d8))();
      local_90 = uVar7;
      local_e8 = (**(code **)(*unaff_RDI + 0x9e0))();
      if (uVar7 >> 0x20 != 0) {
        auVar21._0_8_ = (**(code **)(*unaff_RDI + 0xa68))();
        auVar21._8_8_ = extraout_XMM0_Qb_01;
        auVar15._4_12_ = auVar21._4_12_;
        auVar15._0_4_ = (float)auVar21._0_8_ + DAT_02390124;
        auVar21 = blendps(auVar15,_DAT_023b1620,0xe);
        (**(code **)(*unaff_RDI + 0x6f8))(auVar21._0_8_);
        if (local_60 == (longlong *)0x0) {
          plVar12 = (longlong *)0x0;
          bVar1 = false;
        }
        else {
          bVar1 = true;
          if (((local_58[0] == '\0') && (FUN_00d50b00(), local_58[0] != '\0')) &&
             (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_78 = 0;
        local_68 = (longlong *)0x0;
        goto LAB_01b9bdb7;
      }
    }
    local_78 = 0;
    local_68 = (longlong *)0x0;
    bVar1 = false;
    plVar12 = (longlong *)0x0;
  }
LAB_01b9bdb7:
  (**(code **)(*unaff_RDI + 0x640))();
  lVar9 = DAT_027e2710;
  if (DAT_027e2710 != 0) {
    FUN_00d50b00();
  }
  local_128 = 0;
  local_120 = '\0';
  (**(code **)(*local_60 + 0x5d0))(0,&local_128);
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_90 >> 0x20 != 0) {
    local_a8._0_8_ = (**(code **)(*unaff_RDI + 0xa68))();
    local_a8._8_8_ = extraout_XMM0_Qb_03;
  }
  FUN_01e3f820();
  iVar5 = FUN_01d3a5a0();
  if (iVar5 == 1) {
    FUN_01d3abf0();
    auVar16._0_8_ = FUN_01e466c0();
    auVar16._8_8_ = extraout_XMM0_Qb_04;
    auVar17._4_12_ = auVar16._4_12_;
    auVar17._0_4_ = (float)auVar16._0_8_ + DAT_02394210;
    bVar13 = (float)local_a8._0_4_ < auVar17._0_4_;
    if (bVar13) {
      local_a8 = auVar17;
    }
  }
  fVar14 = (float)FUN_01e436c0();
  if ((float)local_a8._0_4_ < fVar14) {
    local_a8._0_8_ = FUN_01e436c0();
    local_a8._8_8_ = extraout_XMM0_Qb_05;
  }
  if (plVar12 == (longlong *)0x0) goto LAB_01b9c2bc;
  if (local_68 == (longlong *)0x0) {
    iVar5 = -1;
LAB_01b9c1ae:
    FUN_00d50b00();
    bVar13 = false;
  }
  else {
    local_118 = local_68;
    local_110 = '\0';
    (**(code **)(*unaff_RDI + 0x940))(local_90);
    if (local_58[0] == '\0') {
      if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
         (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58[0] = '\0';
    }
    if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_60 == (longlong *)0x0) goto LAB_01b9c2bc;
    FUN_01d5e2b0();
    if (local_58[0] == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b9bfea;
      }
LAB_01b9c0fb:
      iVar5 = -1;
      bVar13 = false;
    }
    else {
      if (local_60 == (longlong *)0x0) goto LAB_01b9c0fb;
LAB_01b9bfea:
      local_58[0] = '\0';
      local_60 = (longlong *)0x0;
      local_50 = plVar3;
      local_48 = 0xffffffff;
      local_40 = 0;
      bVar13 = false;
      while( true ) {
        lVar9 = (longlong)(int)local_48;
        iVar5 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar5);
        if (*(int *)((longlong)local_50 + 0xc) <= iVar5) break;
        local_60 = *(longlong **)(local_50[2] + 8 + lVar9 * 8);
        FUN_01d65230();
        local_108 = plVar3;
        local_100 = '\0';
        cVar4 = (**(code **)(*local_88 + 0x50))();
        if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          iVar5 = local_40 + (int)local_48;
          goto LAB_01b9c116;
        }
        cVar4 = FUN_01d65e30();
        if (cVar4 != '\0') {
          bVar13 = true;
        }
        if (local_48._4_4_ != 0) {
          if (local_48._4_4_ < 1) {
            iVar5 = -local_48._4_4_;
          }
          else {
            local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar5 = 0;
          }
          local_48 = CONCAT44(iVar5,(int)local_48);
        }
      }
      iVar5 = -1;
LAB_01b9c116:
      FUN_002a0a30();
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (bVar13) {
      (**(code **)(*unaff_RDI + 0x640))();
      fVar14 = (float)(**(code **)(*local_60 + 0x5c8))();
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_a8._0_4_ = local_a8._0_4_ - fVar14;
      goto LAB_01b9c1ae;
    }
    if (unaff_RDI != (longlong *)0x0) goto LAB_01b9c1ae;
    bVar13 = true;
  }
  FUN_01d62b10();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar13) {
    FUN_00d50b00();
  }
  fVar14 = (fVar18 - extraout_XMM0_Db) * DAT_0239011c;
  auVar19._0_4_ = _DAT_023945e0 & (uint)fVar14;
  auVar19._4_4_ = _UNK_023945e4 & (uint)(fVar18 - extraout_XMM0_Db);
  auVar19._8_4_ = _UNK_023945e8 & (uint)(in_XMM1_Dd - extraout_XMM0_Dd);
  auVar19._12_4_ = _UNK_023945ec & (uint)(in_XMM1_Dd - extraout_XMM0_Dd);
  auVar20._4_12_ = SUB1612(auVar19 | _DAT_023945f0,4);
  auVar20._0_4_ = SUB164(auVar19 | _DAT_023945f0,0) + fVar14;
  auVar21 = roundss(auVar20,auVar20,0xb);
  auVar21 = insertps(local_a8,auVar21,0x10);
  local_f8 = 0;
  local_f0 = '\0';
  FUN_01d5ef60(auVar21._0_8_,iVar5);
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_01d62b80();
LAB_01b9c2bc:
  if (((char)local_78 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (plVar12 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


