// Function: FUN_007dd720
// Address: 007dd720
// Size: 8569 bytes
// Class: GNData
// String references:
//   "GNData"
//   "GNString"
//   "GNDictionary"


/* WARNING: Removing unreachable block (ram,0x007dd8b7) */
/* WARNING: Removing unreachable block (ram,0x007dd8c3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_007dd720(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  void *pvVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  byte bVar13;
  pthread_key_t pVar14;
  undefined4 uVar15;
  undefined8 *unaff_RDI;
  longlong **pplVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  longlong local_1d0;
  char local_1c8;
  longlong *local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong *local_1a0;
  char local_198;
  longlong *local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_78;
  longlong *local_58;
  longlong *local_48;
  char local_40;
  undefined8 local_38;
  
  local_78 = (longlong *)FUN_00e8fc40();
  FUN_0002cb50();
  uVar18 = (**(code **)(*local_78 + 0x18))();
  local_1d0 = DAT_0272f2e0;
  local_38 = param_2;
  if (DAT_0272f2e0 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_1c8 = '\x01';
  pplVar16 = &local_48;
  uVar18 = FUN_000175c0(uVar18,&local_1d0);
  plVar7 = local_48;
  if ((DAT_026fd0c0 == '\0') &&
     (iVar6 = ___cxa_guard_acquire(), uVar18 = extraout_XMM0_Da_12, iVar6 != 0)) {
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
    uVar18 = ___cxa_guard_release();
  }
  if (plVar7 == (longlong *)0x0) {
LAB_007dd7d1:
    pplVar16 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar5 = FUN_00e85ea0();
    uVar18 = extraout_XMM0_Da;
    if (cVar5 == '\0') goto LAB_007dd7d1;
  }
  plVar7 = *pplVar16;
  if (*(char *)(pplVar16 + 1) == '\0') {
    if (plVar7 != (longlong *)0x0) {
      uVar18 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar16 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  lVar10 = DAT_0270b848;
  if (plVar7 == (longlong *)0x0) {
    if (DAT_0270b848 != 0) {
      uVar18 = FUN_00d50b00();
    }
    local_1b0 = lVar10;
    local_1a8 = '\x01';
    pplVar16 = &local_48;
    uVar18 = FUN_000175c0(uVar18,&local_1b0);
    plVar7 = local_48;
    if ((DAT_026d0220 == '\0') &&
       (iVar6 = ___cxa_guard_acquire(), uVar18 = extraout_XMM0_Da_13, iVar6 != 0)) {
      _DAT_02789148 = FUN_00d4fe50();
      DAT_02789130 = "GNData";
      _DAT_02789138 = 0x28;
      _DAT_02789140 = FUN_000378a0;
      _DAT_02789150 = 0;
      uRam0000000002789158 = 0;
      _DAT_02789160 = 0;
      uRam0000000002789168 = 0;
      _DAT_02789170 = 0;
      uRam0000000002789178 = 0;
      _DAT_02789180 = 0;
      uRam0000000002789188 = 0;
      _DAT_02789190 = 0;
      uRam0000000002789198 = 0;
      _DAT_027891a0 = 0;
      uRam00000000027891a8 = 0;
      _DAT_027891b0 = 0;
      uRam00000000027891b8 = 0;
      _DAT_027891c0 = 0;
      uRam00000000027891c8 = 0;
      _DAT_027891d0 = 0;
      uRam00000000027891d8 = 0;
      _DAT_027891e0 = 0;
      uRam00000000027891e8 = 0;
      _DAT_027891f0 = 0;
      uVar18 = ___cxa_guard_release();
    }
    if (plVar7 == (longlong *)0x0) {
LAB_007dd968:
      pplVar16 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar7 + 0x360))();
      cVar5 = FUN_00e85ea0();
      uVar18 = extraout_XMM0_Da_00;
      if (cVar5 == '\0') goto LAB_007dd968;
    }
    local_58 = *pplVar16;
    plVar7 = local_58;
    if (local_58 == (longlong *)0x0) {
      bVar17 = false;
      local_58 = (longlong *)0x0;
    }
    else {
      if (*(char *)(pplVar16 + 1) == '\0') {
        uVar18 = FUN_00d50b00();
      }
      else {
        *(undefined1 *)(pplVar16 + 1) = 0;
      }
      bVar17 = true;
    }
    pVar14 = (pthread_key_t)plVar7;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_1a8 != '\0') && (local_1b0 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    local_1b8 = '\0';
    local_1c0 = plVar7;
    FUN_00cddf30();
    plVar7 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00c8e830();
    local_58 = local_48;
    plVar11 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    pVar14 = (pthread_key_t)plVar11;
    bVar17 = local_58 == (longlong *)0x0;
    if (bVar17) {
      local_58 = (longlong *)0x0;
    }
    else {
      FUN_00c92170();
    }
    bVar17 = !bVar17;
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    uVar18 = FUN_00d50b20();
  }
  lVar10 = DAT_0270b870;
  if (local_58 == (longlong *)0x0) {
    if (DAT_0270b870 != 0) {
      uVar18 = FUN_00d50b00();
    }
    local_160 = lVar10;
    local_158 = '\x01';
    pplVar16 = &local_48;
    FUN_000175c0(uVar18,&local_160);
    plVar7 = local_48;
    if ((DAT_026d0220 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      _DAT_02789148 = FUN_00d4fe50();
      DAT_02789130 = "GNData";
      _DAT_02789138 = 0x28;
      _DAT_02789140 = FUN_000378a0;
      _DAT_02789150 = 0;
      uRam0000000002789158 = 0;
      _DAT_02789160 = 0;
      uRam0000000002789168 = 0;
      _DAT_02789170 = 0;
      uRam0000000002789178 = 0;
      _DAT_02789180 = 0;
      uRam0000000002789188 = 0;
      _DAT_02789190 = 0;
      uRam0000000002789198 = 0;
      _DAT_027891a0 = 0;
      uRam00000000027891a8 = 0;
      _DAT_027891b0 = 0;
      uRam00000000027891b8 = 0;
      _DAT_027891c0 = 0;
      uRam00000000027891c8 = 0;
      _DAT_027891d0 = 0;
      uRam00000000027891d8 = 0;
      _DAT_027891e0 = 0;
      uRam00000000027891e8 = 0;
      _DAT_027891f0 = 0;
      ___cxa_guard_release();
    }
    if (plVar7 == (longlong *)0x0) {
LAB_007ddb1f:
      pplVar16 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar7 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_007ddb1f;
    }
    local_58 = *pplVar16;
    if (local_58 == (longlong *)0x0) {
      bVar3 = true;
      local_58 = (longlong *)0x0;
    }
    else {
      if (*(char *)(pplVar16 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(undefined1 *)(pplVar16 + 1) = 0;
      }
      bVar3 = false;
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      plVar7 = (longlong *)0x0;
      local_58 = (longlong *)0x0;
      goto LAB_007df4c6;
    }
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_025f02c0;
    pVar14 = 0x25f0658;
    puVar8[2] = &DAT_025f0658;
    puVar8[3] = 0;
    *(undefined2 *)(puVar8 + 4) = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    uVar18 = (*DAT_025f02d8)();
    lVar10 = DAT_0280d130;
    if (DAT_0280d130 != 0) {
      local_98 = 0;
      FUN_00d50b00();
      local_a0 = lVar10;
      local_98 = '\x01';
      uVar18 = FUN_015531c0();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        uVar18 = FUN_00d50b20();
      }
    }
    lVar10 = DAT_0280d140;
    if (DAT_0280d140 != 0) {
      local_88 = 0;
      FUN_00d50b00();
      local_90 = lVar10;
      local_88 = '\x01';
      uVar18 = FUN_01553240();
      if ((local_88 != '\0') && (local_90 != 0)) {
        uVar18 = FUN_00d50b20();
      }
    }
    local_148 = '\0';
    local_150 = local_58;
    FUN_0159bec0(uVar18,&local_150);
    plVar11 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar11 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
      bVar4 = false;
    }
    else {
      plVar7 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar7 = (longlong)&DAT_0250f0e0;
      plVar7[7] = 0;
      *(undefined1 *)(plVar7 + 8) = 0;
      plVar7[9] = 0;
      plVar7[10] = 0;
      plVar7[0xb] = 0;
      plVar7[0xc] = 0;
      plVar7[0xd] = 0;
      plVar7[0xe] = 0;
      plVar7[0xf] = 0;
      FUN_00d500e0();
      pvVar9 = _pthread_getspecific(pVar14);
      if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
        plVar2 = (longlong *)plVar7[9];
        plVar1 = plVar7;
      }
      else {
        plVar1 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
        plVar2 = (longlong *)plVar1[9];
      }
      if (plVar2 != plVar11) {
        FUN_00d50b00();
        plVar1[9] = (longlong)plVar11;
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      pvVar9 = _pthread_getspecific(pVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_007e0970();
      pvVar9 = _pthread_getspecific(pVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar9 = _pthread_getspecific(pVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar9 = _pthread_getspecific(pVar14);
      if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
        lVar10 = plVar7[9];
      }
      else {
        lVar10 = *(longlong *)(plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4] + 0x48);
      }
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      FUN_007dc1e0();
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific(pVar14);
      plVar11 = plVar7;
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
      *(undefined1 *)(plVar11 + 8) = 1;
      FUN_00d50b20();
      pVar14 = (pthread_key_t)plVar11;
      bVar4 = true;
    }
    FUN_00d50b20();
    if (!bVar3) {
      FUN_00d50b20();
    }
    local_58 = (longlong *)0x0;
    if (plVar7 != (longlong *)0x0) goto LAB_007de3bc;
LAB_007de10a:
    bVar3 = true;
    plVar7 = (longlong *)0x0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    local_1a0 = local_58;
    local_198 = '\0';
    pplVar16 = &local_48;
    FUN_00e549d0(uVar18,&local_1a0);
    plVar7 = local_48;
    FUN_0053ef40();
    if (plVar7 == (longlong *)0x0) {
LAB_007dda7b:
      pplVar16 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar7 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_007dda7b;
    }
    plVar7 = *pplVar16;
    if (plVar7 == (longlong *)0x0) {
      bVar4 = false;
      plVar7 = (longlong *)0x0;
    }
    else {
      if (*(char *)(pplVar16 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(undefined1 *)(pplVar16 + 1) = 0;
      }
      bVar4 = true;
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)FUN_00e8fc40();
      FUN_000649c0();
      uVar18 = (**(code **)(*plVar7 + 0x18))();
      local_190 = local_58;
      local_188 = '\0';
      pplVar16 = &local_48;
      uVar18 = (**(code **)(*plVar7 + 0x5f8))(uVar18,&local_190);
      plVar7 = local_48;
      if ((DAT_026fdd40 == '\0') &&
         (iVar6 = ___cxa_guard_acquire(), uVar18 = extraout_XMM0_Da_14, iVar6 != 0)) {
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
        uVar18 = ___cxa_guard_release();
      }
      if (plVar7 == (longlong *)0x0) {
LAB_007ddc1e:
        pplVar16 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar7 + 0x360))();
        cVar5 = FUN_00e85ea0();
        uVar18 = extraout_XMM0_Da_01;
        if (cVar5 == '\0') goto LAB_007ddc1e;
      }
      plVar11 = *pplVar16;
      if (plVar11 == (longlong *)0x0) {
        uVar15 = (undefined4)CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
        plVar11 = (longlong *)0x0;
      }
      else {
        if (*(char *)(pplVar16 + 1) == '\0') {
          uVar18 = FUN_00d50b00();
        }
        else {
          *(undefined1 *)(pplVar16 + 1) = 0;
        }
        uVar15 = 0;
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      lVar10 = DAT_0270b848;
      if (DAT_0270b848 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_180 = lVar10;
      local_178 = '\x01';
      pplVar16 = &local_48;
      FUN_000175c0(uVar18,&local_180);
      plVar7 = local_48;
      if ((DAT_026d0220 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        _DAT_02789148 = FUN_00d4fe50();
        DAT_02789130 = "GNData";
        _DAT_02789138 = 0x28;
        _DAT_02789140 = FUN_000378a0;
        _DAT_02789150 = 0;
        uRam0000000002789158 = 0;
        _DAT_02789160 = 0;
        uRam0000000002789168 = 0;
        _DAT_02789170 = 0;
        uRam0000000002789178 = 0;
        _DAT_02789180 = 0;
        uRam0000000002789188 = 0;
        _DAT_02789190 = 0;
        uRam0000000002789198 = 0;
        _DAT_027891a0 = 0;
        uRam00000000027891a8 = 0;
        _DAT_027891b0 = 0;
        uRam00000000027891b8 = 0;
        _DAT_027891c0 = 0;
        uRam00000000027891c8 = 0;
        _DAT_027891d0 = 0;
        uRam00000000027891d8 = 0;
        _DAT_027891e0 = 0;
        uRam00000000027891e8 = 0;
        _DAT_027891f0 = 0;
        ___cxa_guard_release();
      }
      if (plVar7 == (longlong *)0x0) {
LAB_007de1e2:
        pplVar16 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar7 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_007de1e2;
      }
      plVar7 = *pplVar16;
      if (plVar7 == local_58) {
        if (!bVar17) {
          if (*(char *)(pplVar16 + 1) != '\0') goto LAB_007de250;
          FUN_00d50b00();
        }
      }
      else {
        local_58 = plVar7;
        if (*(char *)(pplVar16 + 1) == '\0') {
          if (plVar7 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if (bVar17) {
            FUN_00d50b20();
          }
        }
        else {
          if (bVar17) {
            FUN_00d50b20();
          }
LAB_007de250:
          *(undefined1 *)(pplVar16 + 1) = 0;
        }
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)FUN_00e8fc40();
        FUN_0002cb50();
        (**(code **)(*plVar7 + 0x18))();
        if (local_78 == plVar7) {
          uVar18 = FUN_00d50b20();
        }
        else {
          uVar18 = FUN_00d50b20();
          local_78 = plVar7;
        }
        local_168 = '\0';
        pplVar16 = &local_48;
        local_170 = local_58;
        FUN_00e549d0(uVar18,&local_170);
        plVar7 = local_48;
        FUN_0053ef40();
        if (plVar7 == (longlong *)0x0) {
LAB_007de32a:
          pplVar16 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar7 + 0x360))();
          cVar5 = FUN_00e85ea0();
          if (cVar5 == '\0') goto LAB_007de32a;
        }
        plVar7 = *pplVar16;
        if (plVar7 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          if (*(char *)(pplVar16 + 1) == '\0') {
            FUN_00d50b00();
          }
          else {
            *(undefined1 *)(pplVar16 + 1) = 0;
          }
          bVar4 = true;
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar13 = (byte)uVar15 | plVar11 == (longlong *)0x0;
      pVar14 = CONCAT31((int3)((uint)uVar15 >> 8),bVar13);
      if (bVar13 == 0) {
        FUN_00d50b20();
      }
      bVar17 = true;
      FUN_00d50b20();
      if (plVar7 == (longlong *)0x0) goto LAB_007de10a;
    }
LAB_007de3bc:
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
      cVar5 = (char)plVar7[8];
    }
    else {
      cVar5 = *(char *)(plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4] + 0x40);
    }
    if (cVar5 == '\0') {
      pvVar9 = _pthread_getspecific(pVar14);
      plVar11 = plVar7;
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
      *(undefined4 *)((longlong)plVar11 + 0x54) = 0x3f800000;
      plVar11 = DAT_02705b68;
      if (DAT_02705b68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_48 = plVar11;
      local_40 = '\0';
      cVar5 = FUN_00ca18c0();
      uVar18 = extraout_XMM0_Da_02;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      plVar11 = DAT_02705b68;
      if (cVar5 != '\0') {
        if (DAT_02705b68 != (longlong *)0x0) {
          uVar18 = FUN_00d50b00();
        }
        local_140 = plVar11;
        local_138 = '\x01';
        pplVar16 = &local_48;
        FUN_000175c0(uVar18,&local_140);
        plVar11 = local_48;
        FUN_00053ac0();
        if (plVar11 == (longlong *)0x0) {
LAB_007de505:
          pplVar16 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar11 + 0x360))();
          cVar5 = FUN_00e85ea0();
          if (cVar5 == '\0') goto LAB_007de505;
        }
        plVar11 = *pplVar16;
        if (*(char *)(pplVar16 + 1) == '\0') {
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar16 + 1) = 0;
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (longlong *)0x0) {
          uVar18 = FUN_00d459e0();
          pvVar9 = _pthread_getspecific(pVar14);
          plVar11 = plVar7;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          *(undefined4 *)((longlong)plVar11 + 0x54) = uVar18;
          FUN_00d50b20();
          pVar14 = (pthread_key_t)plVar11;
        }
      }
      pvVar9 = _pthread_getspecific(pVar14);
      plVar11 = plVar7;
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
      *(undefined4 *)(plVar11 + 10) = 0;
      plVar11 = DAT_026fb950;
      if (DAT_026fb950 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_48 = plVar11;
      local_40 = '\0';
      cVar5 = FUN_00ca18c0();
      uVar18 = extraout_XMM0_Da_03;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      plVar11 = DAT_026fb950;
      if (cVar5 != '\0') {
        if (DAT_026fb950 != (longlong *)0x0) {
          uVar18 = FUN_00d50b00();
        }
        local_130 = plVar11;
        local_128 = '\x01';
        pplVar16 = &local_48;
        FUN_000175c0(uVar18,&local_130);
        plVar11 = local_48;
        FUN_00053ac0();
        if (plVar11 == (longlong *)0x0) {
LAB_007de6a9:
          pplVar16 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar11 + 0x360))();
          cVar5 = FUN_00e85ea0();
          if (cVar5 == '\0') goto LAB_007de6a9;
        }
        plVar11 = *pplVar16;
        if (*(char *)(pplVar16 + 1) == '\0') {
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar16 + 1) = 0;
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (longlong *)0x0) {
          uVar18 = FUN_00d459e0();
          pvVar9 = _pthread_getspecific(pVar14);
          plVar11 = plVar7;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          *(undefined4 *)(plVar11 + 10) = uVar18;
          FUN_00d50b20();
          pVar14 = (pthread_key_t)plVar11;
        }
      }
      pvVar9 = _pthread_getspecific(pVar14);
      plVar11 = plVar7;
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
      *(undefined4 *)(plVar11 + 0xc) = 0x41400000;
      plVar11 = DAT_0272f2e8;
      if (DAT_0272f2e8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_48 = plVar11;
      local_40 = '\0';
      cVar5 = FUN_00ca18c0();
      uVar18 = extraout_XMM0_Da_04;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      plVar11 = DAT_0272f2e8;
      if (cVar5 != '\0') {
        if (DAT_0272f2e8 != (longlong *)0x0) {
          uVar18 = FUN_00d50b00();
        }
        local_120 = plVar11;
        local_118 = '\x01';
        pplVar16 = &local_48;
        FUN_000175c0(uVar18,&local_120);
        plVar11 = local_48;
        FUN_00053ac0();
        if (plVar11 == (longlong *)0x0) {
LAB_007de84d:
          pplVar16 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar11 + 0x360))();
          cVar5 = FUN_00e85ea0();
          if (cVar5 == '\0') goto LAB_007de84d;
        }
        plVar11 = *pplVar16;
        if (*(char *)(pplVar16 + 1) == '\0') {
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar16 + 1) = 0;
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (longlong *)0x0) {
          uVar18 = FUN_00d459e0();
          pvVar9 = _pthread_getspecific(pVar14);
          plVar11 = plVar7;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          *(undefined4 *)(plVar11 + 0xc) = uVar18;
          FUN_00d50b20();
          pVar14 = (pthread_key_t)plVar11;
        }
      }
      pvVar9 = _pthread_getspecific(pVar14);
      plVar11 = plVar7;
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
      *(undefined4 *)(plVar11 + 0xb) = 0;
      plVar11 = DAT_026fb978;
      if (DAT_026fb978 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_48 = plVar11;
      local_40 = '\0';
      cVar5 = FUN_00ca18c0();
      uVar18 = extraout_XMM0_Da_05;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      plVar11 = DAT_026fb978;
      if (cVar5 != '\0') {
        if (DAT_026fb978 != (longlong *)0x0) {
          uVar18 = FUN_00d50b00();
        }
        local_110 = plVar11;
        local_108 = '\x01';
        pplVar16 = &local_48;
        FUN_000175c0(uVar18,&local_110);
        plVar11 = local_48;
        FUN_00053ac0();
        if (plVar11 == (longlong *)0x0) {
LAB_007de9f1:
          pplVar16 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar11 + 0x360))();
          cVar5 = FUN_00e85ea0();
          if (cVar5 == '\0') goto LAB_007de9f1;
        }
        plVar11 = *pplVar16;
        if (*(char *)(pplVar16 + 1) == '\0') {
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar16 + 1) = 0;
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (longlong *)0x0) {
          uVar18 = FUN_00d459e0();
          pvVar9 = _pthread_getspecific(pVar14);
          plVar11 = plVar7;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          *(undefined4 *)(plVar11 + 0xb) = uVar18;
          FUN_00d50b20();
          pVar14 = (pthread_key_t)plVar11;
        }
      }
      pvVar9 = _pthread_getspecific(pVar14);
      plVar11 = plVar7;
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
      *(undefined4 *)((longlong)plVar11 + 0x5c) = 0x41400000;
      plVar11 = DAT_0272f2f0;
      if (DAT_0272f2f0 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_48 = plVar11;
      local_40 = '\0';
      cVar5 = FUN_00ca18c0();
      uVar18 = extraout_XMM0_Da_06;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      plVar11 = DAT_0272f2f0;
      if (cVar5 != '\0') {
        if (DAT_0272f2f0 != (longlong *)0x0) {
          uVar18 = FUN_00d50b00();
        }
        local_100 = plVar11;
        local_f8 = '\x01';
        pplVar16 = &local_48;
        FUN_000175c0(uVar18,&local_100);
        plVar11 = local_48;
        FUN_00053ac0();
        if (plVar11 == (longlong *)0x0) {
LAB_007deb95:
          pplVar16 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar11 + 0x360))();
          cVar5 = FUN_00e85ea0();
          if (cVar5 == '\0') goto LAB_007deb95;
        }
        plVar11 = *pplVar16;
        if (*(char *)(pplVar16 + 1) == '\0') {
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar16 + 1) = 0;
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (longlong *)0x0) {
          uVar18 = FUN_00d459e0();
          pvVar9 = _pthread_getspecific(pVar14);
          plVar11 = plVar7;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          *(undefined4 *)((longlong)plVar11 + 0x5c) = uVar18;
          FUN_00d50b20();
          pVar14 = (pthread_key_t)plVar11;
        }
      }
      pvVar9 = _pthread_getspecific(pVar14);
      plVar11 = plVar7;
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
      *(undefined4 *)((longlong)plVar11 + 100) = 0;
      plVar11 = DAT_0272f2f8;
      if (DAT_0272f2f8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_48 = plVar11;
      local_40 = '\0';
      cVar5 = FUN_00ca18c0();
      uVar18 = extraout_XMM0_Da_07;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      plVar11 = DAT_0272f2f8;
      if (cVar5 != '\0') {
        if (DAT_0272f2f8 != (longlong *)0x0) {
          uVar18 = FUN_00d50b00();
        }
        local_f0 = plVar11;
        local_e8 = '\x01';
        pplVar16 = &local_48;
        FUN_000175c0(uVar18,&local_f0);
        plVar11 = local_48;
        FUN_00053ac0();
        if (plVar11 == (longlong *)0x0) {
LAB_007ded39:
          pplVar16 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar11 + 0x360))();
          cVar5 = FUN_00e85ea0();
          if (cVar5 == '\0') goto LAB_007ded39;
        }
        plVar11 = *pplVar16;
        if (*(char *)(pplVar16 + 1) == '\0') {
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar16 + 1) = 0;
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (longlong *)0x0) {
          uVar18 = FUN_00d459e0();
          pvVar9 = _pthread_getspecific(pVar14);
          plVar11 = plVar7;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          *(undefined4 *)((longlong)plVar11 + 100) = uVar18;
          FUN_00d50b20();
          pVar14 = (pthread_key_t)plVar11;
        }
      }
    }
    pvVar9 = _pthread_getspecific(pVar14);
    plVar11 = plVar7;
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
    pVar14 = 0;
    plVar11[0xd] = -0x4010000000000000;
    plVar11 = DAT_02727940;
    if (DAT_02727940 != (longlong *)0x0) {
      pVar14 = 0;
      FUN_00d50b00();
    }
    local_48 = plVar11;
    local_40 = '\0';
    cVar5 = FUN_00ca18c0();
    uVar18 = extraout_XMM0_Da_08;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    if (plVar11 != (longlong *)0x0) {
      uVar18 = FUN_00d50b20();
    }
    plVar11 = DAT_02727940;
    if (cVar5 != '\0') {
      if (DAT_02727940 != (longlong *)0x0) {
        uVar18 = FUN_00d50b00();
      }
      local_e0 = plVar11;
      local_d8 = '\x01';
      pplVar16 = &local_48;
      FUN_000175c0(uVar18,&local_e0);
      plVar11 = local_48;
      FUN_00053ac0();
      if (plVar11 == (longlong *)0x0) {
LAB_007deee4:
        pplVar16 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar11 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_007deee4;
      }
      plVar11 = *pplVar16;
      if (*(char *)(pplVar16 + 1) == '\0') {
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar16 + 1) = 0;
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        lVar10 = FUN_00d45bc0();
        pvVar9 = _pthread_getspecific(pVar14);
        plVar11 = plVar7;
        if ((pvVar9 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
          plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
        }
        plVar11[0xd] = lVar10;
        FUN_00d50b20();
        pVar14 = (pthread_key_t)plVar11;
      }
    }
    pvVar9 = _pthread_getspecific(pVar14);
    plVar11 = plVar7;
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
    plVar11[0xe] = 0;
    plVar11 = DAT_02727948;
    if (DAT_02727948 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_48 = plVar11;
    local_40 = '\0';
    cVar5 = FUN_00ca18c0();
    uVar18 = extraout_XMM0_Da_09;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    if (plVar11 != (longlong *)0x0) {
      uVar18 = FUN_00d50b20();
    }
    plVar11 = DAT_02727948;
    if (cVar5 != '\0') {
      if (DAT_02727948 != (longlong *)0x0) {
        uVar18 = FUN_00d50b00();
      }
      local_d0 = plVar11;
      local_c8 = '\x01';
      pplVar16 = &local_48;
      FUN_000175c0(uVar18,&local_d0);
      plVar11 = local_48;
      FUN_00053ac0();
      if (plVar11 == (longlong *)0x0) {
LAB_007df089:
        pplVar16 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar11 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_007df089;
      }
      plVar11 = *pplVar16;
      if (*(char *)(pplVar16 + 1) == '\0') {
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar16 + 1) = 0;
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        lVar10 = FUN_00d45bc0();
        pvVar9 = _pthread_getspecific(pVar14);
        plVar11 = plVar7;
        if ((pvVar9 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
          plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
        }
        plVar11[0xe] = lVar10;
        FUN_00d50b20();
        pVar14 = (pthread_key_t)plVar11;
      }
    }
    pvVar9 = _pthread_getspecific(pVar14);
    plVar11 = plVar7;
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
    *(undefined4 *)(plVar11 + 0xf) = 0xbf800000;
    plVar11 = DAT_02727950;
    if (DAT_02727950 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_48 = plVar11;
    local_40 = '\0';
    cVar5 = FUN_00ca18c0();
    uVar18 = extraout_XMM0_Da_10;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    if (plVar11 != (longlong *)0x0) {
      uVar18 = FUN_00d50b20();
    }
    plVar11 = DAT_02727950;
    if (cVar5 != '\0') {
      if (DAT_02727950 != (longlong *)0x0) {
        uVar18 = FUN_00d50b00();
      }
      local_c0 = plVar11;
      local_b8 = '\x01';
      pplVar16 = &local_48;
      FUN_000175c0(uVar18,&local_c0);
      plVar11 = local_48;
      FUN_00053ac0();
      if (plVar11 == (longlong *)0x0) {
LAB_007df22d:
        pplVar16 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar11 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_007df22d;
      }
      plVar11 = *pplVar16;
      if (*(char *)(pplVar16 + 1) == '\0') {
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar16 + 1) = 0;
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        uVar18 = FUN_00d459e0();
        pvVar9 = _pthread_getspecific(pVar14);
        plVar11 = plVar7;
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
        }
        *(undefined4 *)(plVar11 + 0xf) = uVar18;
        FUN_00d50b20();
        pVar14 = (pthread_key_t)plVar11;
      }
    }
    pvVar9 = _pthread_getspecific(pVar14);
    plVar11 = plVar7;
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
    *(undefined4 *)((longlong)plVar11 + 0x7c) = 0;
    plVar11 = DAT_02727958;
    if (DAT_02727958 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_48 = plVar11;
    local_40 = '\0';
    cVar5 = FUN_00ca18c0();
    uVar18 = extraout_XMM0_Da_11;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    if (plVar11 != (longlong *)0x0) {
      uVar18 = FUN_00d50b20();
    }
    plVar11 = DAT_02727958;
    if (cVar5 != '\0') {
      if (DAT_02727958 != (longlong *)0x0) {
        uVar18 = FUN_00d50b00();
      }
      local_b0 = plVar11;
      local_a8 = '\x01';
      pplVar16 = &local_48;
      FUN_000175c0(uVar18,&local_b0);
      plVar11 = local_48;
      FUN_00053ac0();
      if (plVar11 == (longlong *)0x0) {
LAB_007df3d1:
        pplVar16 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar11 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_007df3d1;
      }
      plVar11 = *pplVar16;
      if (*(char *)(pplVar16 + 1) == '\0') {
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar16 + 1) = 0;
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        uVar18 = FUN_00d459e0();
        local_38 = CONCAT44(local_38._4_4_,uVar18);
        pvVar9 = _pthread_getspecific(pVar14);
        plVar11 = plVar7;
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
        }
        *(undefined4 *)((longlong)plVar11 + 0x7c) = (undefined4)local_38;
        FUN_00d50b20();
        pVar14 = (pthread_key_t)plVar11;
      }
    }
    pvVar9 = _pthread_getspecific(pVar14);
    plVar11 = plVar7;
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
    *(undefined1 *)(plVar11 + 8) = 1;
    bVar3 = false;
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  if ((!bVar4) && (!bVar3)) {
    FUN_00d50b00();
  }
LAB_007df4c6:
  *unaff_RDI = plVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_78 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar17) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


