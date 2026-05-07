// Function: FUN_01e191f0
// Address: 01e191f0
// Size: 2056 bytes
// Class: GNList


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e191f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar11;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar13 [16];
  undefined8 uVar12;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 in_XMM1_Qb;
  float fVar22;
  float fVar23;
  undefined1 local_128 [8];
  undefined1 local_120;
  longlong *local_118;
  char local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  undefined8 *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  longlong *local_58;
  char local_50;
  undefined8 *local_48;
  longlong *local_40;
  char local_38;
  
  if (DAT_028b9438 != '\0') {
    return;
  }
  local_f8 = *unaff_RSI;
  local_f0 = '\0';
  local_108 = param_2;
  uStack_100 = in_XMM1_Qb;
  (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x3f0))();
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  DAT_028b9438 = 1;
  FUN_01e19e70();
  FUN_01d48370();
  (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
  local_e8 = *unaff_RSI;
  local_e0 = '\0';
  fVar19 = (float)local_108;
  fVar23 = local_108._4_4_;
  fVar20 = (float)uStack_100;
  fVar22 = uStack_100._4_4_;
  (**(code **)(*unaff_RDI + 0x818))();
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((*(char *)((longlong)unaff_RDI + 0x174) == '\0') ||
     (*(char *)((longlong)unaff_RDI + 0x1d3) == '\0')) {
    local_48 = (undefined8 *)0x0;
  }
  else {
    puVar10 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar10 = &DAT_025795a8;
    pcVar5 = DAT_025795c0;
    local_68 = SUB84(puVar10,0);
    fStack_64 = (float)((ulonglong)puVar10 >> 0x20);
    (*DAT_025795c0)();
    puVar10 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar10 = &DAT_025795a8;
    (*pcVar5)();
    local_48 = puVar10;
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x378))();
    local_88 = local_58;
    local_80 = 0;
    if (local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_80 = '\x01';
    FUN_00d8dbf0();
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x378))();
    iVar7 = FUN_00d8c7a0();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (0 < iVar7) {
      iVar7 = iVar7 + 1;
      do {
        lVar3 = DAT_02726ce0;
        if (DAT_02726ce0 != 0) {
          FUN_00d50b00();
        }
        local_d8 = lVar3;
        local_d0 = '\x01';
        FUN_00d8dbf0();
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        iVar7 = iVar7 + -1;
      } while (1 < iVar7);
    }
    lVar3 = CONCAT44(fStack_64,local_68);
    local_c0 = '\0';
    local_c8 = lVar3;
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x370))();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  cVar1 = *(char *)((longlong)unaff_RDI + 0x161);
  if (cVar1 == '\0') {
    FUN_01f27fe0();
    cVar6 = (**(code **)(*local_58 + 0x6c0))();
    uVar12 = extraout_XMM0_Qa;
    if (cVar6 == '\0') {
      bVar11 = false;
    }
    else {
      if ((int)unaff_RDI[0x2d] != 0) goto LAB_01e1951c;
      bVar11 = false;
    }
joined_r0x01e199fb:
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
  }
  else {
    if ((int)unaff_RDI[0x2d] == 0) goto LAB_01e19656;
LAB_01e1951c:
    uVar12 = FUN_01e42030();
    if (local_40 == (longlong *)0x0) {
      bVar11 = false;
    }
    else {
      FUN_01e42030();
      uVar12 = FUN_01d8b200();
      bVar11 = local_118 == unaff_RDI;
      if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        uVar12 = FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    if (cVar1 == '\0') goto joined_r0x01e199fb;
  }
  if (bVar11) {
    uVar12 = FUN_01e1a940(uVar12,*(undefined8 *)((longlong)unaff_RDI + 0x164));
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        uVar12 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_120 = 1;
    FUN_01e19f20(uVar12,local_128);
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_01e19656:
  fVar18 = 0.0;
  fVar21 = 0.0;
  if ((*(byte *)(unaff_RDI + 0x2e) & 0x20) != 0) {
    FUN_01e3f820();
    local_68 = fVar19;
    fStack_64 = fVar23;
    fStack_60 = fVar20;
    fStack_5c = fVar22;
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x3c8))();
    local_68 = local_68 - fVar19;
    fStack_64 = fStack_64 - fVar23;
    fStack_60 = fStack_60 - fVar20;
    fStack_5c = fStack_5c - fVar22;
    auVar13._4_4_ = fStack_64;
    auVar13._0_4_ = local_68;
    auVar13._8_4_ = fStack_60;
    auVar13._12_4_ = fStack_5c;
    auVar13 = blendps(ZEXT816(0),auVar13,2);
    (**(code **)(*(longlong *)*unaff_RSI + 0x368))(auVar13._0_8_);
    fVar18 = fStack_64;
    fVar21 = fStack_5c;
  }
  local_68 = *(float *)((longlong)unaff_RDI + 0x17c);
  if (DAT_02390d30 <= local_68) {
    plVar2 = (longlong *)*unaff_RSI;
    FUN_01e3f820();
    (**(code **)(*plVar2 + 0x368))();
  }
  local_b8 = *unaff_RSI;
  local_b0 = '\0';
  FUN_01eab940();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (DAT_02390d30 <= local_68) {
    plVar2 = (longlong *)*unaff_RSI;
    uVar12 = FUN_01e3f820();
    auVar14._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
    auVar14._0_4_ = auVar14._4_4_;
    auVar14._8_4_ = extraout_XMM0_Dd;
    auVar14._12_4_ = extraout_XMM0_Dd;
    auVar15._4_12_ = auVar14._4_12_;
    auVar15._0_4_ = auVar14._4_4_ + *(float *)((longlong)unaff_RDI + 0x17c);
    insertps(ZEXT416((uint)(*(float *)(unaff_RDI + 0x2f) + (float)uVar12)),auVar15,0x10);
    FUN_00d05550();
    (**(code **)(*plVar2 + 0x368))();
  }
  fVar19 = fVar18;
  fVar23 = fVar21;
  if ((fVar18 != 0.0) || (NAN(fVar18))) {
    auVar16._0_4_ = (uint)fVar18 ^ _DAT_023945e0;
    auVar16._4_4_ = (uint)fVar18 ^ _UNK_023945e4;
    auVar16._8_4_ = (uint)fVar21 ^ _UNK_023945e8;
    auVar16._12_4_ = (uint)fVar21 ^ _UNK_023945ec;
    auVar13 = insertps(auVar16,auVar16,0x1d);
    (**(code **)(*(longlong *)*unaff_RSI + 0x368))(auVar13._0_8_);
  }
  if (((char)unaff_RDI[0x2a] != '\0') && ((int)unaff_RDI[0x2d] == 0)) {
    FUN_01e42030();
    if (local_40 == (longlong *)0x0) {
      bVar11 = false;
    }
    else {
      FUN_01e42030();
      FUN_01d8b200();
      bVar11 = local_118 == unaff_RDI;
      if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar11) {
      iVar7 = *(int *)((longlong)unaff_RDI + 0x164);
      iVar8 = (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x3e0))();
      if ((((iVar8 == -1) || (iVar9 = FUN_01eab6a0(), iVar7 != iVar9)) ||
          (*(int *)((longlong)unaff_RDI + 0x1cc) == -1)) ||
         (*(int *)((longlong)unaff_RDI + 0x1cc) != iVar8 + -1)) {
        uVar12 = FUN_01eabe50();
      }
      else {
        uVar12 = FUN_01eabe50();
        local_68 = (float)uVar12;
        fStack_64 = (float)((ulonglong)uVar12 >> 0x20);
        fStack_60 = (float)extraout_XMM0_Qb;
        fStack_5c = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
        local_108 = CONCAT44(fVar19,fVar18);
        uStack_100 = CONCAT44(fVar23,fVar21);
        FUN_01eabd30();
        auVar4._4_4_ = fStack_64;
        auVar4._0_4_ = local_68;
        auVar4._8_4_ = fStack_60;
        auVar4._12_4_ = fStack_5c;
        auVar17._0_4_ = fVar18 + local_68;
        auVar17._4_4_ = fVar19 + fStack_64;
        auVar17._8_4_ = fVar21 + fStack_60;
        auVar17._12_4_ = fVar23 + fStack_5c;
        auVar13 = blendps(auVar17,auVar4,2);
        uVar12 = auVar13._0_8_;
      }
      FUN_01e1a190(uVar12);
    }
  }
  if (local_48 != (undefined8 *)0x0) {
    local_a8 = local_48;
    local_a0 = '\0';
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x370))();
    if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d48390();
  if ((char)unaff_RDI[0x39] != '\0') {
    FUN_01cb4790();
    plVar2 = local_40;
    local_98 = *unaff_RSI;
    local_90 = '\0';
    uVar12 = FUN_01e436c0();
    (**(code **)(*plVar2 + 0x518))(uVar12,0x11);
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  DAT_028b9438 = 0;
  if (local_48 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


