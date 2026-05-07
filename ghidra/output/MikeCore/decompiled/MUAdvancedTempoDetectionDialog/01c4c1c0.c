// Function: FUN_01c4c1c0
// Address: 01c4c1c0
// Size: 3207 bytes
// Class: MUAdvancedTempoDetectionDialog


/* WARNING: Removing unreachable block (ram,0x01c4c69f) */
/* WARNING: Removing unreachable block (ram,0x01c4c6ab) */
/* WARNING: Removing unreachable block (ram,0x01c4c40a) */
/* WARNING: Removing unreachable block (ram,0x01c4c416) */
/* WARNING: Removing unreachable block (ram,0x01c4ca95) */
/* WARNING: Removing unreachable block (ram,0x01c4caa1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c4c1c0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong *plVar6;
  char cVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  void *pvVar11;
  longlong *plVar12;
  longlong lVar13;
  pthread_key_t pVar14;
  longlong *in_RCX;
  char *pcVar15;
  int iVar16;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar17;
  undefined8 uVar18;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  uint uVar26;
  undefined1 auVar27 [16];
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
  longlong *local_108;
  char local_100;
  char local_f8;
  undefined7 uStack_f7;
  char local_f0;
  float local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50 [8];
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  plVar6 = local_58;
  local_e8 = (float)param_1;
  uStack_e4 = (undefined4)((ulonglong)param_1 >> 0x20);
  plVar12 = in_RCX;
  auVar22 = in_XMM1;
  (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))();
  auVar19._0_8_ = FUN_01e3f820();
  auVar19._8_8_ = extraout_XMM0_Qb;
  if ((int)unaff_RDI[0x39] == 1) {
    auVar2._4_4_ = auVar22._4_4_;
    auVar2._0_4_ = auVar22._4_4_ + DAT_0241c6e8 + DAT_02390d00;
    auVar2._8_4_ = auVar22._12_4_;
    auVar2._12_4_ = auVar22._12_4_;
    auVar19 = insertps(auVar19,auVar2,0x10);
    uVar26 = DAT_02392fd8;
  }
  else {
    auVar19 = blendps(auVar19,auVar22,2);
    uVar26 = 0;
  }
  auVar22 = insertps(auVar22,ZEXT416(uVar26),0x10);
  auVar25._8_8_ = 0;
  auVar25._0_8_ = *(ulonglong *)(*in_RCX + 0x1c);
  local_88 = blendps(auVar19,auVar25,0xd);
  uVar18 = local_88._0_8_;
  local_98 = auVar22;
  if (*param_2 == 0) {
    local_88 = blendps(ZEXT816(0),local_88,2);
    if (*param_3 == 0) {
      fVar24 = (float)FUN_01e3f820(uVar18,auVar22._0_8_,local_e8,in_XMM1._0_4_);
      auVar22._0_4_ = auVar22._0_4_ + fVar24 + DAT_02390d00;
      local_98 = blendps(local_98,auVar22,1);
    }
    else {
      auVar27._8_8_ = 0;
      auVar27._0_8_ = *(ulonglong *)(*param_3 + 0x1c);
      local_98 = insertps(auVar27,ZEXT416(uVar26),0x10);
    }
  }
  else {
    fVar24 = (float)*(ulonglong *)(*in_RCX + 0x1c);
    if (*param_3 == 0) {
      fVar17 = (float)FUN_01e3f820(uVar18,auVar22._0_8_,local_e8,in_XMM1._0_4_);
      auVar23._4_12_ = auVar22._4_12_;
      auVar23._0_4_ = (auVar22._0_4_ + fVar17 + DAT_02390d00) - fVar24;
      local_98 = blendps(local_98,auVar23,1);
    }
    else {
      local_98 = blendps(auVar22,ZEXT416((uint)(*(float *)(*param_3 + 0x1c) - fVar24)),1);
    }
  }
  cVar7 = FUN_00d054a0();
  if (cVar7 == '\0') {
  }
  else {
    local_88._0_8_ = FUN_00d05360();
    auVar3._8_8_ = _UNK_0241e9e8;
    auVar3._0_8_ = _DAT_0241e9e0;
    local_98 = blendps(local_98,auVar3,0xe);
    local_88._8_8_ = extraout_XMM0_Qb_00;
  }
  bVar1 = DAT_023908e8 <= local_98._0_4_;
  uVar18 = _DAT_0241e9e0;
  uStack_e0 = _UNK_0241e9e8;
  if (bVar1) {
    uVar18 = _DAT_0241e9f0;
    uStack_e0 = _UNK_0241e9f8;
  }
  local_e8 = (float)uVar18;
  uStack_e4 = (undefined4)((ulonglong)uVar18 >> 0x20);
  FUN_01e40eb0();
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 == (longlong *)0x0) {
    (**(code **)(*unaff_RDI + 0x450))();
  }
  fVar24 = ((float)local_98._0_4_ * DAT_0239011c + local_88._0_4_) - DAT_0239011c * local_e8;
  auVar20._0_4_ = _DAT_023945e0 & (uint)fVar24;
  auVar20._4_4_ = _UNK_023945e4 & local_98._4_4_;
  auVar20._8_4_ = _UNK_023945e8 & local_98._8_4_;
  auVar20._12_4_ = _UNK_023945ec & local_98._12_4_;
  auVar21._4_12_ = SUB1612(auVar20 | _DAT_023945f0,4);
  auVar21._0_4_ = SUB164(auVar20 | _DAT_023945f0,0) + fVar24;
  auVar22 = roundss(auVar21,auVar21,0xb);
  auVar22 = blendps(auVar22,local_88,0xe);
  (**(code **)(*(longlong *)*unaff_RSI + 0x4d0))(auVar22._0_8_);
  (**(code **)(*(longlong *)*unaff_RSI + 0x4a0))();
  uVar26 = *(uint *)((longlong)local_58 + 0xc);
  if (local_50[0] != '\0') {
    FUN_00d50b20();
  }
  if (uVar26 != bVar1) {
    (**(code **)(*(longlong *)*unaff_RSI + 0x480))();
    if (DAT_023908e8 <= (float)local_98._0_4_) {
      plVar9 = (longlong *)FUN_00e8fc40();
      FUN_001e3c20();
      (**(code **)(*plVar9 + 0x18))();
      local_d0 = 0;
      FUN_00d50b00();
      local_d0 = '\x01';
      local_d8 = unaff_RDI;
      (**(code **)(*plVar9 + 0xa20))();
      if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      auVar5._4_4_ = uStack_e4;
      auVar5._0_4_ = local_e8;
      auVar5._8_8_ = uStack_e0;
      auVar4._8_8_ = _UNK_0241e9e8;
      auVar4._0_8_ = _DAT_0241e9e0;
      blendps(auVar5,auVar4,0xe);
      (**(code **)(*plVar9 + 0x4d0))();
      (**(code **)(*plVar9 + 0x558))();
      FUN_01cef4c0();
      (**(code **)(*unaff_RDI + 0x640))();
      (**(code **)(*local_68 + 0x370))();
      local_c0 = 0;
      if (local_50[0] == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50[0] = '\0';
      }
      local_c0 = '\x01';
      local_c8 = local_58;
      (**(code **)(*plVar9 + 0x9d8))();
      if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar10 = DAT_027ebc20;
      if (DAT_027ebc20 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar9 + 0xa10))();
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x450))();
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x4a0))();
  if (local_50[0] == '\0') {
    if (local_58 == (longlong *)0x0) goto LAB_01c4c799;
    FUN_00d50b00();
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (longlong *)0x0) goto LAB_01c4c799;
  local_50[0] = '\0';
  local_58 = (longlong *)0x0;
  local_48 = plVar6;
  local_40 = 0xffffffff;
  local_38 = 0;
  while( true ) {
    lVar10 = (longlong)(int)local_40;
    iVar16 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar16);
    if (*(int *)((longlong)local_48 + 0xc) <= iVar16) break;
    local_58 = *(longlong **)(local_48[2] + 8 + lVar10 * 8);
    (**(code **)(*local_58 + 0xa80))();
    if (local_40._4_4_ != 0) {
      if (local_40 < 0) {
        iVar16 = -local_40._4_4_;
      }
      else {
        local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar16 = 0;
      }
      local_40 = CONCAT44(iVar16,(int)local_40);
    }
  }
  plVar12 = local_48;
  FUN_000a9680();
  FUN_00d50b20();
LAB_01c4c799:
  plVar6 = local_58;
  (**(code **)(*(longlong *)*unaff_RSI + 0x4a0))();
  iVar16 = *(int *)((longlong)local_58 + 0xc);
  if (local_50[0] != '\0') {
    FUN_00d50b20();
  }
  if (0 < iVar16) {
    (**(code **)(*(longlong *)*unaff_RSI + 0x4a0))();
    FUN_00d23310();
    pVar14 = (pthread_key_t)CONCAT71((int7)((ulonglong)plVar12 >> 8),local_50[0]);
    pcVar15 = &local_f8;
    if (local_50[0] != '\0') {
      pcVar15 = local_50;
    }
    local_f8 = local_50[0];
    *pcVar15 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f8 == '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar10 = unaff_RDI[0x31];
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    pvVar11 = _pthread_getspecific(pVar14);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01c82aa0();
    local_b0 = 0;
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_b0 = '\x01';
    local_b8 = local_68;
    FUN_017011a0(unaff_RDI + 0x4c);
    local_88._0_8_ = local_58;
    if (local_50[0] == '\0') {
      if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
         (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
    }
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    uVar8 = (**(code **)(*local_58 + 0xa88))();
    local_98._0_4_ = uVar8;
    plVar12 = (longlong *)FUN_00e8fc40();
    FUN_001d7da0();
    uVar18 = (**(code **)(*plVar12 + 0x18))();
    if ((longlong *)local_88._0_8_ != (longlong *)0x0) {
      local_50[0] = '\0';
      local_58 = (longlong *)0x0;
      local_48 = (longlong *)local_88._0_8_;
      local_40 = 0xffffffff;
      local_38 = 0;
      local_40._4_4_ = 0;
      while( true ) {
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar16 = -local_40._4_4_;
          }
          else {
            iVar16 = (int)local_40 - local_40._4_4_;
            local_40 = CONCAT44(local_40._4_4_,iVar16);
            uVar18 = FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar16 = 0;
          }
          local_40 = CONCAT44(iVar16,(int)local_40);
        }
        lVar10 = DAT_027ebc28;
        lVar13 = (longlong)(int)local_40;
        iVar16 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar16);
        if (*(int *)((longlong)local_48 + 0xc) <= iVar16) break;
        local_58 = *(longlong **)(local_48[2] + 8 + lVar13 * 8);
        if (DAT_027ebc28 != 0) {
          uVar18 = FUN_00d50b00();
        }
        local_158 = lVar10;
        local_150 = '\x01';
        FUN_01d5d9b0(uVar18,&local_158);
        if ((local_150 != '\0') && (local_158 != 0)) {
          FUN_00d50b20();
        }
        FUN_01d5e230();
        uVar18 = FUN_01d65490();
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
        if (local_38 + (int)local_40 == (int)unaff_RDI[0x4c]) {
          FUN_01d5e230();
          uVar18 = FUN_01d66ab0();
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            uVar18 = FUN_00d50b20();
          }
        }
      }
      FUN_00018280();
    }
    FUN_01d5dc80();
    local_148 = DAT_027ebc30;
    if (DAT_027ebc30 != 0) {
      FUN_00d50b00();
    }
    lVar10 = DAT_027ebc38;
    local_140 = '\x01';
    if (DAT_027ebc38 != 0) {
      FUN_00d50b00();
    }
    local_138 = lVar10;
    local_130 = '\x01';
    local_128 = 0;
    local_120 = '\0';
    uVar18 = FUN_00d31230(&local_128,&local_138);
    local_a0 = 0;
    local_118 = DAT_027ebc40;
    if (local_50[0] == '\0') {
      if (local_58 != (longlong *)0x0) {
        uVar18 = FUN_00d50b00();
        local_118 = DAT_027ebc40;
      }
    }
    else {
      local_50[0] = '\0';
    }
    local_a0 = '\x01';
    local_a8 = local_58;
    DAT_027ebc40 = local_118;
    if (local_118 != 0) {
      local_a0 = '\x01';
      uVar18 = FUN_00d50b00();
    }
    local_110 = '\x01';
    FUN_01d5d9b0(uVar18,&local_118);
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    FUN_01d65490();
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d70010();
    if (local_58 == (longlong *)0x0) {
      cVar7 = '\0';
    }
    else {
      FUN_01d70010();
      FUN_01d65ea0();
      cVar7 = FUN_01d5aed0();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (CONCAT71(uStack_f7,local_f8) != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar7 == '\0') {
      local_100 = '\0';
      local_108 = plVar12;
      FUN_01d6ed60();
      if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d6ed40();
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_88._0_8_ != 0) {
        FUN_00d50b20();
      }
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_88._0_8_ != 0) {
        FUN_00d50b20();
      }
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


