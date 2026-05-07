// Function: FUN_00244b20
// Address: 00244b20
// Size: 2266 bytes
// Class: GNSoundFile
// String references:
//   "GNSoundFile"
//   "GNString"
//   "GNDictionary"
// === GNSoundFile properties ===
//   GNSoundFileLayout _fileLayout
//   GNSoundFileFormat _format
//   GNAudioSampleFormat _sampleFormat


uint32_t FUN_00244b20(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t *plVar5;
  char cVar6;
  uint32_t uVar7;
  int iVar8;
  char *pcVar9;
  int64_t *plVar10;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t **pplVar11;
  bool bVar12;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  double dVar14;
  uint64_t uVar15;
  float extraout_XMM0_Db;
  uint64_t uVar16;
  uint extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dc_01;
  uint extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  uint32_t extraout_XMM0_Dd_01;
  uint32_t extraout_XMM0_Dd_02;
  float fVar21;
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  float fVar22;
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t in_XMM3 [16];
  uint8_t auVar26 [16];
  float fVar29;
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  double local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_58;
  bool local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar6 = FUN_00245720();
  if (cVar6 == '\0') goto LAB_00244c11;
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  plVar10 = local_48;
  local_38[0] = local_40[0];
  pcVar9 = local_38;
  if (local_40[0] != '\0') {
    pcVar9 = local_40;
  }
  *pcVar9 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 == (int64_t *)0x0) {
    plVar10 = *(int64_t **)(this_ptr + 0x90);
LAB_00244ba0:
    FUN_00d50b00();
  }
  else if (local_38[0] == '\0') goto LAB_00244ba0;
  (**(code **)(*plVar10 + 0x988))();
  iVar8 = *(int *)((int64_t)local_58 + 0xc);
  if (local_50 != false) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (iVar8 == 0) {
LAB_00244c11:
    local_98 = *arg1;
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
    if (local_58 != (int64_t *)0x0) {
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
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != false) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_88 = plVar1;
  cVar6 = FUN_0010f8e0();
  uVar7 = 0;
  if (cVar6 == '\0') goto LAB_0024517c;
  FUN_0010db00();
  plVar1 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
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
  if ((g_026d8478 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    g_026f9358 = FUN_00d4fe50();
    g_026f9340 = "GNSoundFile";
    g_026f9348 = 0x98;
    g_026f9350 = FUN_00083bc0;
    g_026f9360 = 0;
    ram_00000000026f9368 = 0;
    g_026f9370 = 0;
    g_026f93e8 = 0;
    ram_00000000026f93f0 = 0;
    g_026f93f8 = 0;
    g_026f93fa = 3;
    g_026f9378 = 0;
    ram_00000000026f9380 = 0;
    g_026f9388 = 0;
    ram_00000000026f9390 = 0;
    g_026f9398 = 0;
    ram_00000000026f93a0 = 0;
    g_026f93a8 = 0;
    ram_00000000026f93b0 = 0;
    g_026f93b8 = 0;
    ram_00000000026f93c0 = 0;
    g_026f93c8 = 0;
    ram_00000000026f93d0 = 0;
    g_026f93d8 = 0;
    ram_00000000026f93e0 = 0;
    g_026f9403 = 0;
    g_026f93fb = 0;
    ___cxa_guard_release();
  }
  if (plVar10 == (int64_t *)0x0) {
LAB_00244dbe:
    pplVar11 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_00244dbe;
  }
  plVar10 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar11 + 1) = 0;
  }
  if ((local_50 != false) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 == (int64_t *)0x0) {
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
    if ((g_026fdd40 == '\0') &&
       (iVar8 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_01, iVar8 != 0)) {
      g_026cd0e8 = FUN_00d4fe50();
      g_026cd0d0 = "GNDictionary";
      g_026cd0d8 = 0x28;
      g_026cd0e0 = FUN_00022d20;
      g_026cd0f0 = 0;
      ram_00000000026cd0f8 = 0;
      g_026cd100 = 0;
      g_026cd178 = 0;
      ram_00000000026cd180 = 0;
      g_026cd188 = 0;
      g_026cd18a = 6;
      g_026cd108 = 0;
      ram_00000000026cd110 = 0;
      g_026cd118 = 0;
      ram_00000000026cd120 = 0;
      g_026cd128 = 0;
      ram_00000000026cd130 = 0;
      g_026cd138 = 0;
      ram_00000000026cd140 = 0;
      g_026cd148 = 0;
      ram_00000000026cd150 = 0;
      g_026cd158 = 0;
      ram_00000000026cd160 = 0;
      g_026cd168 = 0;
      ram_00000000026cd170 = 0;
      g_026cd193 = 0;
      g_026cd18b = 0;
      uVar13 = ___cxa_guard_release();
    }
    pplVar11 = (int64_t **)&g_02802688;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar6 = FUN_00e85ea0();
      uVar13 = extraout_XMM0_Da;
      if (cVar6 != '\0') {
        if ((g_026fd0c0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
          g_026d5e58 = FUN_00d4fe50();
          g_026d5e40 = "GNString";
          g_026d5e48 = 0x40;
          g_026d5e50 = FUN_0005d920;
          g_026d5e60 = 0;
          ram_00000000026d5e68 = 0;
          g_026d5e70 = 0;
          ram_00000000026d5e78 = 0;
          g_026d5e80 = 0;
          ram_00000000026d5e88 = 0;
          g_026d5e90 = 0;
          ram_00000000026d5e98 = 0;
          g_026d5ea0 = 0;
          ram_00000000026d5ea8 = 0;
          g_026d5eb0 = 0;
          ram_00000000026d5eb8 = 0;
          g_026d5ec0 = 0;
          ram_00000000026d5ec8 = 0;
          g_026d5ed0 = 0;
          ram_00000000026d5ed8 = 0;
          g_026d5ee0 = 0;
          ram_00000000026d5ee8 = 0;
          g_026d5ef0 = 0;
          ram_00000000026d5ef8 = 0;
          g_026d5f00 = 0;
          ___cxa_guard_release();
        }
        cVar6 = FUN_00e8db60();
        uVar13 = extraout_XMM0_Da_00;
        if (cVar6 == '\0') {
          pplVar11 = (int64_t **)&g_02802688;
        }
        else {
          pplVar11 = &local_58;
        }
      }
    }
    plVar2 = *pplVar11;
    if (*(char *)(pplVar11 + 1) == '\0') {
      if (plVar2 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar11 + 1) = 0;
    }
    if ((local_50 != false) && (local_58 != (int64_t *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
    lVar4 = g_026f6ee0;
    if (g_026f6ee0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_a8 = lVar4;
    local_a0 = '\x01';
    FUN_000175c0(uVar13,&local_a8);
    plVar5 = local_48;
    FUN_00053ac0();
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      FUN_00e85ea0();
    }
    local_80 = (double)FUN_00d45bc0();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((0 < *(int *)((int64_t)plVar1 + 0xc)) && (0.0 < local_80)) goto LAB_0024500d;
  }
  else {
    local_80 = (double)FUN_00b7a6e0();
    if ((0 < *(int *)((int64_t)plVar1 + 0xc)) && (0.0 < local_80)) {
LAB_0024500d:
      fVar21 = 0.0;
      dVar14 = local_80;
      FUN_01d384c0();
      fVar29 = (float)((uint64_t)dVar14 >> 0x20);
      dVar14 = (double)FUN_00244970();
      uVar15 = (**(code **)(**(int64_t **)(this_ptr + 0x90) + 3000))();
      FUN_01e436c0();
      uVar3 = (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x938))(SUB84(dVar14,0));
      uVar16 = (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x938))(SUB84(local_80 + dVar14,0));
      fVar22 = (float)uVar15 * g_02394dc4;
      auVar26._0_4_ = g_023945e0 & (uint)fVar22;
      auVar26._4_4_ = _UNK_023945e4 & (uint)((uint64_t)uVar15 >> 0x20);
      auVar26._8_4_ = _UNK_023945e8 & extraout_XMM0_Dc;
      auVar26._12_4_ = _UNK_023945ec & extraout_XMM0_Dd;
      auVar27._4_4_ = _UNK_023945f4;
      auVar27._0_4_ = g_023945f0;
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
           (((fVar29 + g_02390d00) - extraout_XMM0_Db) - auVar26._0_4_) * g_0239011c +
           extraout_XMM0_Db;
      auVar25._8_4_ = extraout_XMM0_Dc_00;
      auVar25._0_8_ = uVar3;
      auVar25._12_4_ = extraout_XMM0_Dd_01;
      auVar27 = insertps(auVar25,auVar24,0x10);
      auVar18._0_4_ = (float)(g_023945e0 & (uint)auVar27._0_4_ | g_023945f0) + auVar27._0_4_;
      auVar18._4_4_ = (float)(_UNK_023945e4 & (uint)auVar27._4_4_ | _UNK_023945f4) + auVar27._4_4_;
      auVar18._8_4_ = (float)(_UNK_023945e8 & (uint)auVar27._8_4_ | _UNK_023945f8) + auVar27._8_4_;
      auVar18._12_4_ =
           (float)(_UNK_023945ec & (uint)auVar27._12_4_ | _UNK_023945fc) + auVar27._12_4_;
      auVar25 = roundps(auVar24,auVar18,0xb);
      auVar28._0_8_ = g_02394dc8 & g_02390140;
      auVar28._8_8_ = 0;
      auVar19._0_8_ = ~g_02390140 & uVar16;
      auVar19._8_8_ = ~_UNK_02390148 & CONCAT44(extraout_XMM0_Dd_02,extraout_XMM0_Dc_01);
      auVar20._4_12_ = SUB1612(auVar19 | auVar28,4);
      auVar20._0_4_ = SUB164(auVar19 | auVar28,0) + (float)uVar16;
      auVar27 = roundss(auVar20,auVar20,0xb);
      auVar27 = insertps(auVar27,auVar26,0x10);
      (**(code **)((int64_t)&dylib_command_00001348.cmd + **(int64_t **)(this_ptr + 0x90)))
                (auVar25._0_4_,auVar27._0_8_);
      if (plVar10 != (int64_t *)0x0) {
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
  if (local_88 == (int64_t *)0x0) {
    return uVar7;
  }
  FUN_00d50b20();
  return uVar7;
}

