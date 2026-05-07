// Function: FUN_01cb0670
// Address: 01cb0670
// Size: 5422 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNDictionary"
//   "Parsing XML property list failed."
//   "Value of 'actions' is not an array"
//   "An action has to be a 'dict'"
//   "Action %@ has no entry 'action'"
//   "No 'actions' found."


/* WARNING: Removing unreachable block (ram,0x01cb0742) */
/* WARNING: Removing unreachable block (ram,0x01cb074e) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cb0670(void)

{
  code *pcVar1;
  dword dVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong **pplVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined7 uVar14;
  longlong lVar11;
  uint *puVar12;
  longlong lVar13;
  uint *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong unaff_RDI;
  longlong *plVar18;
  ulonglong uVar19;
  longlong *plVar20;
  bool bVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar22;
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
  undefined4 extraout_XMM0_Da_15;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong *local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_d8;
  char local_d0;
  longlong *local_c0;
  char local_b8;
  undefined7 uStack_b7;
  char local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  uint local_98 [2];
  longlong *local_90;
  char local_88;
  ulonglong local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  longlong *local_40;
  uint local_34;
  
  local_118 = '\0';
  local_120 = (longlong *)0x0;
  uVar7 = FUN_00ca94c0();
  plVar18 = local_a0;
  uVar22 = extraout_XMM0_Da;
  if (local_a0 == (longlong *)0x0) {
    bVar3 = true;
    plVar18 = (longlong *)0x0;
    local_128 = 0;
  }
  else {
    if ((char)local_98[0] == '\0') {
      uVar7 = FUN_00d50b00();
      bVar3 = false;
      local_128 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      uVar22 = extraout_XMM0_Da_00;
      if (((char)local_98[0] == '\0') || (local_a0 == (longlong *)0x0)) goto LAB_01cb0739;
      uVar22 = FUN_00d50b20();
    }
    else {
      local_98[0] = local_98[0] & 0xffffff00;
      local_128 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    }
    bVar3 = false;
  }
LAB_01cb0739:
  lVar16 = DAT_027fffb0;
  if (plVar18 == (longlong *)0x0) {
    if (DAT_027fffb0 != 0) {
      uVar22 = FUN_00d50b00();
    }
    uVar22 = FUN_00cc7b40(uVar22,DAT_025908a0);
    if (lVar16 != 0) {
      uVar22 = FUN_00d50b20();
    }
  }
  lVar16 = DAT_027edc10;
  if (DAT_027edc10 != 0) {
    uVar22 = FUN_00d50b00();
  }
  local_200 = lVar16;
  local_1f8 = '\x01';
  FUN_000175c0(uVar22,&local_200);
  plVar20 = local_a0;
  if (local_a0 == (longlong *)0x0) {
    plVar20 = (longlong *)0x0;
  }
  else if ((char)local_98[0] == '\0') {
    FUN_00d50b00();
    local_120 = plVar20;
    local_118 = '\x01';
    if (((char)local_98[0] != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_120 = local_a0;
    local_118 = '\x01';
    local_98[0] = local_98[0] & 0xffffff00;
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  lVar16 = DAT_027edc18;
  if (DAT_027edc18 != 0) {
    FUN_00d50b00();
  }
  local_1f0 = lVar16;
  local_1e8 = '\x01';
  FUN_000175c0();
  plVar10 = (longlong *)CONCAT71(uStack_b7,local_b8);
  if (local_b0 == '\0') {
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_b0 = '\0';
  }
  local_98[0] = local_98[0] & 0xffffff00;
  local_a0 = plVar10;
  uVar22 = FUN_00d243f0();
  if (((char)local_98[0] != '\0') && (local_a0 != (longlong *)0x0)) {
    uVar22 = FUN_00d50b20();
  }
  if (plVar10 != (longlong *)0x0) {
    uVar22 = FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (CONCAT71(uStack_b7,local_b8) != 0)) {
    uVar22 = FUN_00d50b20();
  }
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    uVar22 = FUN_00d50b20();
  }
  lVar16 = DAT_027fffb0;
  if (plVar20 == (longlong *)0x0) {
    if (DAT_027fffb0 != 0) {
      uVar22 = FUN_00d50b00();
    }
    local_140 = lVar16;
    local_138 = '\x01';
    FUN_00cc7b40(uVar22,DAT_025908a0);
    if ((local_138 != '\0') && (local_140 != 0)) {
      FUN_00d50b20();
    }
    local_58 = 0;
    local_68 = 0;
    local_40 = (longlong *)0x0;
    local_48 = 0;
    local_70 = (longlong *)0x0;
    local_78 = 0;
    goto joined_r0x01cb1b61;
  }
  if ((DAT_027048b0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_026cd478 = FUN_00d4fe50();
    DAT_026cd460 = "GNList";
    _DAT_026cd468 = 0x20;
    _DAT_026cd470 = FUN_00018210;
    _DAT_026cd480 = 0;
    uRam00000000026cd488 = 0;
    _DAT_026cd490 = 0;
    _DAT_026cd508 = 0;
    uRam00000000026cd510 = 0;
    _DAT_026cd518 = 0;
    DAT_026cd51a = 6;
    _DAT_026cd498 = 0;
    uRam00000000026cd4a0 = 0;
    _DAT_026cd4a8 = 0;
    uRam00000000026cd4b0 = 0;
    _DAT_026cd4b8 = 0;
    uRam00000000026cd4c0 = 0;
    _DAT_026cd4c8 = 0;
    uRam00000000026cd4d0 = 0;
    _DAT_026cd4d8 = 0;
    uRam00000000026cd4e0 = 0;
    _DAT_026cd4e8 = 0;
    uRam00000000026cd4f0 = 0;
    _DAT_026cd4f8 = 0;
    uRam00000000026cd500 = 0;
    DAT_026cd523 = 0;
    _DAT_026cd51b = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar20 + 0x360))();
  cVar5 = FUN_00e85ea0();
  lVar16 = DAT_027fffb0;
  if (cVar5 == '\0') {
    pplVar8 = &DAT_02802688;
    plVar20 = DAT_02802688;
    if (DAT_02802688 == (longlong *)0x0) goto LAB_01cb1acc;
LAB_01cb09aa:
    local_78 = CONCAT71((int7)((ulonglong)pplVar8 >> 8),*(char *)(pplVar8 + 1));
    uVar22 = extraout_XMM0_Da_01;
    if (*(char *)(pplVar8 + 1) != '\0') {
      uVar22 = FUN_00d50b00();
    }
    local_70 = plVar20;
    uVar7 = DAT_025908a0;
    pcVar1 = DAT_026717d0;
    dVar2 = *(dword *)((longlong)plVar20 + 0xc);
  }
  else {
    pplVar8 = &local_120;
    plVar20 = local_120;
    if (local_120 != (longlong *)0x0) goto LAB_01cb09aa;
LAB_01cb1acc:
    if (DAT_027fffb0 != 0) {
      FUN_00d50b00();
    }
    uVar7 = DAT_025908a0;
    local_1e0 = lVar16;
    local_1d8 = '\x01';
    uVar22 = FUN_00cc7b40();
    if ((local_1d8 != '\0') && (local_1e0 != 0)) {
      uVar22 = FUN_00d50b20();
    }
    local_78 = 0;
    local_70 = (longlong *)0x0;
    pcVar1 = DAT_026717d0;
    dVar2 = MACH_HEADER.filetype;
  }
  DAT_026717d0 = pcVar1;
  if ((int)dVar2 < 1) {
    local_58 = 0;
    local_68 = 0;
    local_40 = (longlong *)0x0;
    local_48 = 0;
  }
  else {
    lVar16 = 0;
    local_58 = 0;
    local_68 = 0;
    local_40 = (longlong *)0x0;
    local_48 = 0;
    plVar20 = (longlong *)0x0;
    uVar19 = 0;
    local_c0 = (longlong *)0x0;
    local_a8 = 0;
    local_60 = (longlong *)0x0;
    local_80 = 0;
    local_130 = plVar18;
    do {
      local_50 = uVar19;
      uVar19 = local_48 & 0xffffffff;
      plVar18 = *(longlong **)(local_70[2] + lVar16 * 8);
      local_a0 = plVar18;
      local_98[0] = local_98[0] & 0xffffff00;
      uVar9 = CONCAT71((int7)((ulonglong)local_70[2] >> 8),DAT_026fdd40);
      if ((DAT_026fdd40 == '\0') &&
         (uVar9 = ___cxa_guard_acquire(), uVar22 = extraout_XMM0_Da_14, (int)uVar9 != 0)) {
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
        uVar9 = ___cxa_guard_release();
        uVar22 = extraout_XMM0_Da_15;
      }
      pplVar8 = &DAT_02802688;
      if (plVar18 != (longlong *)0x0) {
        (**(code **)(*plVar18 + 0x360))();
        uVar9 = FUN_00e85ea0();
        pplVar8 = &local_a0;
        uVar22 = extraout_XMM0_Da_02;
        if ((char)uVar9 == '\0') {
          pplVar8 = &DAT_02802688;
        }
      }
      plVar18 = *pplVar8;
      cVar5 = (char)uVar19;
      if (plVar18 == local_40) {
        local_48 = uVar19;
        plVar10 = local_40;
        if ((cVar5 == '\0') && (plVar18 != (longlong *)0x0)) {
          plVar18 = local_40;
          if (*(char *)(pplVar8 + 1) != '\0') goto LAB_01cb0b14;
          local_48 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
          uVar22 = FUN_00d50b00();
          plVar10 = local_40;
        }
      }
      else if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar18 != (longlong *)0x0) {
          uVar9 = FUN_00d50b00();
          uVar22 = extraout_XMM0_Da_04;
        }
        local_48 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
        plVar10 = plVar18;
        if ((cVar5 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar22 = FUN_00d50b20();
        }
      }
      else {
        if ((cVar5 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar9 = FUN_00d50b20();
          uVar22 = extraout_XMM0_Da_03;
        }
LAB_01cb0b14:
        *(undefined1 *)(pplVar8 + 1) = 0;
        local_48 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
        plVar10 = plVar18;
      }
      local_40 = plVar10;
      if (((char)local_98[0] != '\0') && (local_a0 != (longlong *)0x0)) {
        uVar22 = FUN_00d50b20();
      }
      lVar11 = DAT_027fffb0;
      if (local_40 == (longlong *)0x0) {
        if (DAT_027fffb0 != 0) {
          uVar22 = FUN_00d50b00();
        }
        local_1d0 = lVar11;
        local_1c8 = '\x01';
        uVar22 = FUN_00cc7b40(uVar22,uVar7);
        if ((local_1c8 != '\0') && (local_1d0 != 0)) {
          uVar22 = FUN_00d50b20();
        }
      }
      lVar11 = DAT_027edfc8;
      if (DAT_027edfc8 != 0) {
        uVar22 = FUN_00d50b00();
      }
      local_1c0 = lVar11;
      local_1b8 = '\x01';
      uVar9 = FUN_01de4130(uVar22,&local_1c0);
      plVar18 = local_a0;
      uVar22 = extraout_XMM0_Da_05;
      if (local_a0 == plVar20) {
        plVar18 = plVar20;
        if (((char)local_50 != '\0') || (local_a0 == (longlong *)0x0)) {
          local_34 = (uint)local_50;
          goto joined_r0x01cb0ce0;
        }
        if ((char)local_98[0] == '\0') {
          local_34 = (uint)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
          uVar22 = FUN_00d50b00();
          goto LAB_01cb0d00;
        }
LAB_01cb0c87:
        plVar20 = plVar18;
        local_98[0] = local_98[0] & 0xffffff00;
        local_34 = (uint)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
      }
      else {
        if ((char)local_98[0] != '\0') {
          if (((char)local_50 != '\0') && (plVar20 != (longlong *)0x0)) {
            uVar9 = FUN_00d50b20();
            uVar22 = extraout_XMM0_Da_06;
          }
          goto LAB_01cb0c87;
        }
        if (local_a0 != (longlong *)0x0) {
          uVar9 = FUN_00d50b00();
          uVar22 = extraout_XMM0_Da_07;
        }
        local_34 = (uint)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
        if (((char)local_50 != '\0') && (plVar20 != (longlong *)0x0)) {
          uVar22 = FUN_00d50b20();
          plVar20 = plVar18;
LAB_01cb0d00:
          plVar18 = plVar20;
        }
joined_r0x01cb0ce0:
        plVar20 = plVar18;
        if (((char)local_98[0] != '\0') && (local_a0 != (longlong *)0x0)) {
          uVar22 = FUN_00d50b20();
        }
      }
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        uVar22 = FUN_00d50b20();
      }
      lVar11 = DAT_027fffb0;
      if (plVar20 == (longlong *)0x0) {
        if (DAT_027fffb0 != 0) {
          uVar22 = FUN_00d50b00();
        }
        plVar18 = local_40;
        local_1b0 = lVar11;
        local_1a8 = '\x01';
        local_98[0] = 1;
        local_a0 = &DAT_024c5048;
        local_88 = 0;
        if (local_40 != (longlong *)0x0) {
          uVar22 = FUN_00d50b00();
        }
        local_90 = plVar18;
        local_88 = '\x01';
        FUN_00cc7b40(uVar22,&local_a0);
        local_a0 = &DAT_024c5048;
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1a8 != '\0') && (local_1b0 != 0)) {
          FUN_00d50b20();
        }
      }
      plVar10 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar10 = (longlong)&DAT_026717b8;
      plVar10[2] = 0;
      plVar10[3] = 0;
      plVar10[4] = 0;
      plVar10[5] = 0;
      *(undefined8 *)((longlong)plVar10 + 0x2c) = 0;
      *(undefined8 *)((longlong)plVar10 + 0x34) = 0;
      uVar9 = (*pcVar1)();
      uVar14 = (undefined7)((ulonglong)uVar9 >> 8);
      if (plVar10 == local_c0) {
        plVar10 = local_c0;
        if ((char)local_a8 == '\0') {
          local_a8 = CONCAT71(uVar14,1);
        }
        else {
          FUN_00d50b20();
        }
      }
      else {
        bVar21 = (char)local_a8 != '\0';
        local_a8 = CONCAT71(uVar14,1);
        if ((bVar21) && (local_c0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_198 = '\0';
      local_1a0 = plVar20;
      uVar22 = FUN_01caeb20();
      if ((local_198 != '\0') && (local_1a0 != (longlong *)0x0)) {
        uVar22 = FUN_00d50b20();
      }
      lVar11 = *(longlong *)(unaff_RDI + 0x18);
      if (*(int *)(lVar11 + 0xc) < 1) {
        local_50 = CONCAT44(local_50._4_4_,(int)local_80);
      }
      else {
        lVar17 = 0;
        local_50 = CONCAT44(local_50._4_4_,(int)local_80);
        do {
          lVar11 = *(longlong *)(lVar11 + 0x10);
          lVar13 = *(longlong *)(lVar11 + lVar17 * 8);
          if (local_58 == lVar13) {
            lVar4 = DAT_027edfc8;
            if (((char)local_68 == '\0') && (local_58 != 0)) {
              local_68 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
              uVar22 = FUN_00d50b00();
              lVar4 = DAT_027edfc8;
            }
          }
          else {
            if (lVar13 != 0) {
              lVar11 = FUN_00d50b00();
              uVar22 = extraout_XMM0_Da_08;
            }
            if (((char)local_68 == '\0') || (local_58 == 0)) {
              local_68 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
              lVar4 = DAT_027edfc8;
              local_58 = lVar13;
            }
            else {
              local_58 = lVar13;
              uVar9 = FUN_00d50b20();
              local_68 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
              uVar22 = extraout_XMM0_Da_09;
              lVar4 = DAT_027edfc8;
            }
          }
          DAT_027edfc8 = lVar4;
          if (lVar4 != 0) {
            uVar22 = FUN_00d50b00();
          }
          local_188 = '\x01';
          local_190 = lVar4;
          FUN_000175c0(uVar22,&local_190);
          plVar18 = local_a0;
          local_108 = 0;
          if ((char)local_98[0] == '\0') {
            if (local_a0 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_98[0] = local_98[0] & 0xffffff00;
          }
          local_108 = '\x01';
          local_110 = plVar18;
          cVar5 = (**(code **)(*plVar20 + 0x50))();
          uVar22 = extraout_XMM0_Da_10;
          if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
            uVar22 = FUN_00d50b20();
          }
          if (((char)local_98[0] != '\0') && (local_a0 != (longlong *)0x0)) {
            uVar22 = FUN_00d50b20();
          }
          if ((local_188 != '\0') && (local_190 != 0)) {
            uVar22 = FUN_00d50b20();
          }
          if (cVar5 != '\0') {
            uVar22 = FUN_00c9fe20();
            plVar18 = local_a0;
            local_b8 = (char)local_98[0];
            puVar15 = (uint *)&local_b8;
            puVar12 = local_98;
            if ((char)local_98[0] == '\0') {
              puVar12 = puVar15;
            }
            *(undefined1 *)puVar12 = 0;
            if (((char)local_98[0] != '\0') && (plVar18 != (longlong *)0x0)) {
              puVar12 = (uint *)FUN_00d50b20();
              uVar22 = extraout_XMM0_Da_11;
            }
            if (plVar18 == local_60) {
              if (((char)local_50 == '\0') && (plVar18 != (longlong *)0x0)) {
                local_80 = CONCAT71((int7)((ulonglong)puVar15 >> 8),1);
                if (local_b8 == '\0') {
                  uVar22 = FUN_00d50b00();
                }
              }
              else {
                if ((local_b8 != '\0') && (plVar18 != (longlong *)0x0)) {
                  uVar22 = FUN_00d50b20();
                  local_80 = local_50 & 0xffffffff;
                  goto LAB_01cb11c0;
                }
                local_80 = local_50 & 0xffffffff;
              }
              iVar6 = *(int *)((longlong)local_60 + 0xc);
            }
            else if (local_b8 == '\0') {
              if (plVar18 != (longlong *)0x0) {
                puVar12 = (uint *)FUN_00d50b00();
                uVar22 = extraout_XMM0_Da_12;
              }
              local_80 = CONCAT71((int7)((ulonglong)puVar12 >> 8),1);
              if ((char)local_50 == '\0') goto LAB_01cb1184;
              if (local_60 != (longlong *)0x0) {
                uVar22 = FUN_00d50b20();
                local_60 = plVar18;
                goto LAB_01cb11c0;
              }
              iVar6 = *(int *)((longlong)plVar18 + 0xc);
              local_60 = plVar18;
            }
            else {
              local_80 = CONCAT71((int7)((ulonglong)puVar12 >> 8),1);
              if (((char)local_50 == '\0') || (local_60 == (longlong *)0x0)) {
LAB_01cb1184:
                iVar6 = *(int *)((longlong)plVar18 + 0xc);
                local_60 = plVar18;
              }
              else {
                uVar22 = FUN_00d50b20();
                local_60 = plVar18;
LAB_01cb11c0:
                iVar6 = *(int *)((longlong)local_60 + 0xc);
              }
            }
            if (0 < iVar6) {
              lVar11 = 0;
              do {
                lVar13 = local_60[2];
                plVar18 = *(longlong **)(lVar13 + lVar11 * 8);
                if (plVar20 == plVar18) {
                  lVar4 = DAT_027edfc8;
                  if ((char)local_34 == '\0') {
                    local_34 = (uint)CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
                    FUN_00d50b00();
                    lVar4 = DAT_027edfc8;
                  }
                }
                else {
                  if (plVar18 != (longlong *)0x0) {
                    lVar13 = FUN_00d50b00();
                  }
                  plVar20 = plVar18;
                  if ((char)local_34 == '\0') {
                    local_34 = (uint)CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
                    lVar4 = DAT_027edfc8;
                  }
                  else {
                    uVar9 = FUN_00d50b20();
                    local_34 = (uint)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
                    lVar4 = DAT_027edfc8;
                  }
                }
                DAT_027edfc8 = lVar4;
                if (lVar4 != 0) {
                  FUN_00d50b00();
                }
                local_178 = '\x01';
                local_180 = lVar4;
                cVar5 = (**(code **)(*plVar20 + 0x50))();
                uVar22 = extraout_XMM0_Da_13;
                if ((local_178 != '\0') && (local_180 != 0)) {
                  uVar22 = FUN_00d50b20();
                }
                if (cVar5 == '\0') {
                  uVar22 = FUN_01caec40();
                  local_168 = '\0';
                  local_170 = plVar20;
                  uVar22 = FUN_000175c0(uVar22,&local_170);
                  local_f8 = 0;
                  if (local_d0 == '\0') {
                    if (local_d8 != 0) {
                      uVar22 = FUN_00d50b00();
                    }
                  }
                  else {
                    local_d0 = '\0';
                  }
                  local_f8 = '\x01';
                  local_100 = local_d8;
                  local_98[0] = local_98[0] & 0xffffff00;
                  local_a0 = plVar20;
                  uVar22 = FUN_00ca0840(uVar22,&local_a0);
                  if (((char)local_98[0] != '\0') && (local_a0 != (longlong *)0x0)) {
                    uVar22 = FUN_00d50b20();
                  }
                  if ((local_f8 != '\0') && (local_100 != 0)) {
                    uVar22 = FUN_00d50b20();
                  }
                  if ((local_d0 != '\0') && (local_d8 != 0)) {
                    uVar22 = FUN_00d50b20();
                  }
                  if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
                    uVar22 = FUN_00d50b20();
                  }
                  if ((local_b0 != '\0') && (CONCAT71(uStack_b7,local_b8) != 0)) {
                    uVar22 = FUN_00d50b20();
                  }
                }
                lVar11 = lVar11 + 1;
              } while (lVar11 < *(int *)((longlong)local_60 + 0xc));
            }
            local_50 = CONCAT44(local_50._4_4_,(int)local_80);
          }
          lVar17 = lVar17 + 1;
          lVar11 = *(longlong *)(unaff_RDI + 0x18);
        } while (lVar17 < *(int *)(lVar11 + 0xc));
      }
      FUN_00c9fe20();
      plVar18 = local_a0;
      local_b8 = (char)local_98[0];
      puVar15 = (uint *)&local_b8;
      puVar12 = local_98;
      if ((char)local_98[0] == '\0') {
        puVar12 = puVar15;
      }
      *(undefined1 *)puVar12 = 0;
      if (((char)local_98[0] != '\0') && (plVar18 != (longlong *)0x0)) {
        puVar12 = (uint *)FUN_00d50b20();
      }
      if (plVar18 == local_60) {
        if (((char)local_50 == '\0') && (plVar18 != (longlong *)0x0)) {
          local_80 = CONCAT71((int7)((ulonglong)puVar15 >> 8),1);
          if (local_b8 == '\0') {
            FUN_00d50b00();
          }
        }
        else {
          if ((local_b8 != '\0') && (plVar18 != (longlong *)0x0)) {
            FUN_00d50b20();
            local_80 = local_50 & 0xffffffff;
            goto LAB_01cb15b0;
          }
          local_80 = local_50 & 0xffffffff;
        }
        iVar6 = *(int *)((longlong)local_60 + 0xc);
joined_r0x01cb1803:
        if (0 < iVar6) goto LAB_01cb15c1;
LAB_01cb1809:
        uVar19 = (ulonglong)local_34;
      }
      else {
        if (local_b8 == '\0') {
          if (plVar18 != (longlong *)0x0) {
            puVar12 = (uint *)FUN_00d50b00();
          }
          local_80 = CONCAT71((int7)((ulonglong)puVar12 >> 8),1);
          if ((char)local_50 == '\0') goto LAB_01cb1570;
          if (local_60 == (longlong *)0x0) {
            iVar6 = *(int *)((longlong)plVar18 + 0xc);
            local_60 = plVar18;
            goto joined_r0x01cb1803;
          }
          FUN_00d50b20();
          local_60 = plVar18;
        }
        else {
          local_80 = CONCAT71((int7)((ulonglong)puVar12 >> 8),1);
          if (((char)local_50 == '\0') || (local_60 == (longlong *)0x0)) {
LAB_01cb1570:
            iVar6 = *(int *)((longlong)plVar18 + 0xc);
            local_60 = plVar18;
            goto joined_r0x01cb1803;
          }
          FUN_00d50b20();
          local_60 = plVar18;
        }
LAB_01cb15b0:
        if (*(int *)((longlong)local_60 + 0xc) < 1) goto LAB_01cb1809;
LAB_01cb15c1:
        lVar11 = 0;
        uVar19 = (ulonglong)local_34;
        do {
          plVar18 = *(longlong **)(local_60[2] + lVar11 * 8);
          uVar14 = (undefined7)(uVar19 >> 8);
          if (plVar20 == plVar18) {
            lVar17 = DAT_027edfc8;
            if (((char)uVar19 == '\0') && (plVar20 != (longlong *)0x0)) {
              uVar19 = CONCAT71(uVar14,1);
              FUN_00d50b00();
              lVar17 = DAT_027edfc8;
            }
          }
          else {
            if (plVar18 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if (((char)uVar19 == '\0') || (plVar20 == (longlong *)0x0)) {
              uVar19 = CONCAT71(uVar14,1);
              plVar20 = plVar18;
              lVar17 = DAT_027edfc8;
            }
            else {
              FUN_00d50b20();
              uVar19 = CONCAT71(uVar14,1);
              plVar20 = plVar18;
              lVar17 = DAT_027edfc8;
            }
          }
          DAT_027edfc8 = lVar17;
          if (lVar17 != 0) {
            FUN_00d50b00();
          }
          local_158 = '\x01';
          local_160 = lVar17;
          cVar5 = (**(code **)(*plVar20 + 0x50))();
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
          if (cVar5 == '\0') {
            uVar22 = FUN_01caec40();
            local_148 = '\0';
            local_150 = plVar20;
            uVar22 = FUN_01de4130(uVar22,&local_150);
            local_e8 = 0;
            if (local_d0 == '\0') {
              if (local_d8 != 0) {
                uVar22 = FUN_00d50b00();
              }
            }
            else {
              local_d0 = '\0';
            }
            local_e8 = '\x01';
            local_f0 = local_d8;
            local_98[0] = local_98[0] & 0xffffff00;
            local_a0 = plVar20;
            FUN_00ca0840(uVar22,&local_a0);
            if (((char)local_98[0] != '\0') && (local_a0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_b0 != '\0') && (CONCAT71(uStack_b7,local_b8) != 0)) {
              FUN_00d50b20();
            }
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)((longlong)local_60 + 0xc));
      }
      local_98[0] = local_98[0] & 0xffffff00;
      local_a0 = plVar10;
      uVar22 = FUN_00d21140();
      if (((char)local_98[0] != '\0') && (local_a0 != (longlong *)0x0)) {
        uVar22 = FUN_00d50b20();
      }
      lVar16 = lVar16 + 1;
      local_c0 = plVar10;
    } while (lVar16 < *(int *)((longlong)local_70 + 0xc));
    if ((char)local_80 != '\0') {
      FUN_00d50b20();
    }
    plVar18 = local_130;
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (((char)uVar19 != '\0') && (plVar20 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
joined_r0x01cb1b61:
  if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_78 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar3 && plVar18 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


