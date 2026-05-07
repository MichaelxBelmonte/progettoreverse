// Function: FUN_00244b20
// Address: 00244b20
// Size: 2266 bytes
// Class: GNSoundFile
// String references:
//   "GNSoundFile"
//   "GNString"
//   "GNDictionary"


/* WARNING: Removing unreachable block (ram,0x00244d7f) */
/* WARNING: Removing unreachable block (ram,0x00244d84) */
/* WARNING: Removing unreachable block (ram,0x00244e7f) */
/* WARNING: Removing unreachable block (ram,0x00244e84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00244b20(void)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  longlong *plVar10;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  double dVar14;
  undefined8 uVar15;
  float extraout_XMM0_Db;
  ulonglong uVar16;
  uint extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  uint extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float fVar21;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar26 [16];
  float fVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  double local_80;
  longlong *local_78;
  char local_70;
  longlong *local_58;
  bool local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar6 = FUN_00245720();
  if (cVar6 == '\0') goto LAB_00244c11;
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  plVar10 = local_48;
  local_38[0] = local_40[0];
  pcVar9 = local_38;
  if (local_40[0] != '\0') {
    pcVar9 = local_40;
  }
  *pcVar9 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 == (longlong *)0x0) {
    plVar10 = *(longlong **)(unaff_RDI + 0x90);
LAB_00244ba0:
    FUN_00d50b00();
  }
  else if (local_38[0] == '\0') goto LAB_00244ba0;
  (**(code **)(*plVar10 + 0x988))();
  iVar8 = *(int *)((longlong)local_58 + 0xc);
  if (local_50 != false) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (iVar8 == 0) {
LAB_00244c11:
    local_98 = *unaff_RSI;
    local_90 = '\0';
    uVar7 = FUN_01e56d30();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    return uVar7;
  }
  pplVar11 = &local_58;
  FUN_01d384d0();
  local_78 = local_58;
  local_70 = 0;
  if (local_50 == false) {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = false;
  }
  local_70 = '\x01';
  FUN_0010f340();
  plVar1 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != false) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_88 = plVar1;
  cVar6 = FUN_0010f8e0();
  uVar7 = 0;
  if (cVar6 == '\0') goto LAB_0024517c;
  FUN_0010db00();
  plVar1 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d23310();
  plVar10 = local_48;
  bVar12 = local_40[0] == '\0';
  local_58 = local_48;
  if (bVar12) {
    local_50 = false;
  }
  else {
    local_50 = true;
    local_40[0] = '\0';
  }
  local_50 = !bVar12;
  if ((DAT_026d8478 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    _DAT_026f9358 = FUN_00d4fe50();
    _DAT_026f9340 = "GNSoundFile";
    _DAT_026f9348 = 0x98;
    _DAT_026f9350 = FUN_00083bc0;
    _DAT_026f9360 = 0;
    uRam00000000026f9368 = 0;
    _DAT_026f9370 = 0;
    _DAT_026f93e8 = 0;
    uRam00000000026f93f0 = 0;
    _DAT_026f93f8 = 0;
    DAT_026f93fa = 3;
    _DAT_026f9378 = 0;
    uRam00000000026f9380 = 0;
    _DAT_026f9388 = 0;
    uRam00000000026f9390 = 0;
    _DAT_026f9398 = 0;
    uRam00000000026f93a0 = 0;
    _DAT_026f93a8 = 0;
    uRam00000000026f93b0 = 0;
    _DAT_026f93b8 = 0;
    uRam00000000026f93c0 = 0;
    _DAT_026f93c8 = 0;
    uRam00000000026f93d0 = 0;
    _DAT_026f93d8 = 0;
    uRam00000000026f93e0 = 0;
    DAT_026f9403 = 0;
    _DAT_026f93fb = 0;
    ___cxa_guard_release();
  }
  if (plVar10 == (longlong *)0x0) {
LAB_00244dbe:
    pplVar11 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_00244dbe;
  }
  plVar10 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar11 + 1) = 0;
  }
  if ((local_50 != false) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 == (longlong *)0x0) {
    uVar13 = FUN_00d23310();
    plVar2 = local_48;
    bVar12 = local_40[0] == '\0';
    local_58 = local_48;
    if (bVar12) {
      local_50 = false;
    }
    else {
      local_50 = true;
      local_40[0] = '\0';
    }
    local_50 = !bVar12;
    if ((DAT_026fdd40 == '\0') &&
       (iVar8 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_01, iVar8 != 0)) {
      _DAT_026cd0e8 = FUN_00d4fe50();
      DAT_026cd0d0 = "GNDictionary";
      _DAT_026cd0d8 = 0x28;
      _DAT_026cd0e0 = FUN_00022d20;
      _DAT_026cd0f0 = 0;
      uRam00000000026cd0f8 = 0;
      _DAT_026cd100 = 0;
      _DAT_026cd178 = 0;
      uRam00000000026cd180 = 0;
      _DAT_026cd188 = 0;
      DAT_026cd18a = 6;
      _DAT_026cd108 = 0;
      uRam00000000026cd110 = 0;
      _DAT_026cd118 = 0;
      uRam00000000026cd120 = 0;
      _DAT_026cd128 = 0;
      uRam00000000026cd130 = 0;
      _DAT_026cd138 = 0;
      uRam00000000026cd140 = 0;
      _DAT_026cd148 = 0;
      uRam00000000026cd150 = 0;
      _DAT_026cd158 = 0;
      uRam00000000026cd160 = 0;
      _DAT_026cd168 = 0;
      uRam00000000026cd170 = 0;
      DAT_026cd193 = 0;
      _DAT_026cd18b = 0;
      uVar13 = ___cxa_guard_release();
    }
    pplVar11 = (longlong **)&DAT_02802688;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar6 = FUN_00e85ea0();
      uVar13 = extraout_XMM0_Da;
      if (cVar6 != '\0') {
        if ((DAT_026fd0c0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
        cVar6 = FUN_00e8db60();
        uVar13 = extraout_XMM0_Da_00;
        if (cVar6 == '\0') {
          pplVar11 = (longlong **)&DAT_02802688;
        }
        else {
          pplVar11 = &local_58;
        }
      }
    }
    plVar2 = *pplVar11;
    if (*(char *)(pplVar11 + 1) == '\0') {
      if (plVar2 != (longlong *)0x0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar11 + 1) = 0;
    }
    if ((local_50 != false) && (local_58 != (longlong *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
    lVar4 = DAT_026f6ee0;
    if (DAT_026f6ee0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_a8 = lVar4;
    local_a0 = '\x01';
    FUN_000175c0(uVar13,&local_a8);
    plVar5 = local_48;
    FUN_00053ac0();
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      FUN_00e85ea0();
    }
    local_80 = (double)FUN_00d45bc0();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((0 < *(int *)((longlong)plVar1 + 0xc)) && (0.0 < local_80)) goto LAB_0024500d;
  }
  else {
    local_80 = (double)FUN_00b7a6e0();
    if ((0 < *(int *)((longlong)plVar1 + 0xc)) && (0.0 < local_80)) {
LAB_0024500d:
      fVar21 = 0.0;
      dVar14 = local_80;
      FUN_01d384c0();
      fVar29 = (float)((ulonglong)dVar14 >> 0x20);
      dVar14 = (double)FUN_00244970();
      uVar15 = (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 3000))();
      FUN_01e436c0();
      uVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x938))(SUB84(dVar14,0));
      uVar16 = (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x938))(SUB84(local_80 + dVar14,0));
      fVar22 = (float)uVar15 * DAT_02394dc4;
      auVar26._0_4_ = _DAT_023945e0 & (uint)fVar22;
      auVar26._4_4_ = _UNK_023945e4 & (uint)((ulonglong)uVar15 >> 0x20);
      auVar26._8_4_ = _UNK_023945e8 & extraout_XMM0_Dc;
      auVar26._12_4_ = _UNK_023945ec & extraout_XMM0_Dd;
      auVar27._4_4_ = _UNK_023945f4;
      auVar27._0_4_ = _DAT_023945f0;
      auVar27._8_4_ = _UNK_023945f8;
      auVar27._12_4_ = _UNK_023945fc;
      auVar17._4_12_ = SUB1612(auVar26 | auVar27,4);
      auVar17._0_4_ = SUB164(auVar26 | auVar27,0) + fVar22;
      auVar26 = roundss(in_XMM3,auVar17,0xb);
      fVar29 = fVar29 + extraout_XMM0_Db;
      auVar23._4_4_ = fVar29;
      auVar23._0_4_ = fVar29;
      auVar23._8_4_ = fVar21 + extraout_XMM0_Dd_00;
      auVar23._12_4_ = fVar21 + extraout_XMM0_Dd_00;
      auVar24._4_12_ = auVar23._4_12_;
      auVar24._0_4_ =
           (((fVar29 + DAT_02390d00) - extraout_XMM0_Db) - auVar26._0_4_) * DAT_0239011c +
           extraout_XMM0_Db;
      auVar25._8_4_ = extraout_XMM0_Dc_00;
      auVar25._0_8_ = uVar3;
      auVar25._12_4_ = extraout_XMM0_Dd_01;
      auVar27 = insertps(auVar25,auVar24,0x10);
      auVar18._0_4_ = (float)(_DAT_023945e0 & (uint)auVar27._0_4_ | _DAT_023945f0) + auVar27._0_4_;
      auVar18._4_4_ = (float)(_UNK_023945e4 & (uint)auVar27._4_4_ | _UNK_023945f4) + auVar27._4_4_;
      auVar18._8_4_ = (float)(_UNK_023945e8 & (uint)auVar27._8_4_ | _UNK_023945f8) + auVar27._8_4_;
      auVar18._12_4_ =
           (float)(_UNK_023945ec & (uint)auVar27._12_4_ | _UNK_023945fc) + auVar27._12_4_;
      auVar25 = roundps(auVar24,auVar18,0xb);
      auVar28._0_8_ = DAT_02394dc8 & _DAT_02390140;
      auVar28._8_8_ = 0;
      auVar19._0_8_ = ~_DAT_02390140 & uVar16;
      auVar19._8_8_ = ~_UNK_02390148 & CONCAT44(extraout_XMM0_Dd_02,extraout_XMM0_Dc_01);
      auVar20._4_12_ = SUB1612(auVar19 | auVar28,4);
      auVar20._0_4_ = SUB164(auVar19 | auVar28,0) + (float)uVar16;
      auVar27 = roundss(auVar20,auVar20,0xb);
      auVar27 = insertps(auVar27,auVar26,0x10);
      (**(code **)((longlong)&dylib_command_00001348.cmd + **(longlong **)(unaff_RDI + 0x90)))
                (auVar25._0_4_,auVar27._0_8_);
      if (plVar10 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      uVar7 = 1;
      FUN_00d50b20();
      goto LAB_0024517c;
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_0024517c:
  if (local_88 == (longlong *)0x0) {
    return uVar7;
  }
  FUN_00d50b20();
  return uVar7;
}


