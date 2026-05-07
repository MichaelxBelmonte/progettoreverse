// Function: FUN_00bb2c20
// Address: 00bb2c20
// Size: 4003 bytes
// Class: GNData
// String references:
//   "GNData"


/* WARNING: Removing unreachable block (ram,0x00bb2d0c) */
/* WARNING: Removing unreachable block (ram,0x00bb2d18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00bb2c20(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  code **ppcVar10;
  code *pcVar11;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  char cVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  code *pcVar15;
  code *pcVar16;
  undefined7 uVar17;
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
  longlong local_238;
  char local_230;
  longlong local_228;
  char local_220;
  longlong local_218;
  char local_210;
  longlong local_208;
  char local_200;
  longlong local_1f8;
  char local_1f0;
  longlong local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  code *local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  uint local_8c;
  code *local_88;
  longlong local_80;
  code *local_78;
  code *local_70;
  char local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (*unaff_RSI == 0) {
    puVar3 = (undefined8 *)0x0;
    goto LAB_00bb3c30;
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  local_b8 = puVar3;
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar4 = (longlong)&DAT_0256d868;
  plVar4[2] = 0;
  *(undefined8 *)((longlong)plVar4 + 0x1c) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x24) = 0;
  *(undefined4 *)((longlong)plVar4 + 0x2c) = 0;
  (*DAT_0256d880)();
  local_a8 = plVar4;
  FUN_00cccf90();
  local_88 = (code *)0x0;
  local_a0 = 0;
  local_78 = (code *)0x0;
  local_c0 = 0;
  local_b0 = (code *)0x0;
  local_60 = 0;
  local_98 = 0;
  local_80 = 0;
  uVar18 = FUN_00ccce80();
  local_150 = DAT_02765310;
  lVar9 = *unaff_RSI;
  if (DAT_02765310 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_148 = '\x01';
  uVar18 = FUN_000175c0(uVar18,&local_150);
  pcVar2 = local_70;
  if (local_70 == (code *)0x0) {
    uVar6 = 0;
    pcVar11 = (code *)0x0;
joined_r0x00bb2dd3:
    if ((local_68 != '\0') && (local_70 != (code *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    uVar17 = (undefined7)((ulonglong)lVar9 >> 8);
    if (local_68 == '\0') {
      uVar18 = FUN_00d50b00();
      uVar6 = CONCAT71(uVar17,1);
      pcVar11 = pcVar2;
      goto joined_r0x00bb2dd3;
    }
    local_68 = '\0';
    uVar6 = CONCAT71(uVar17,1);
    pcVar11 = local_70;
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  local_c0 = uVar6;
  local_b0 = pcVar11;
  if ((pcVar11 == (code *)0x0) || (*(int *)(pcVar11 + 0xc) == 0)) {
    local_88 = (code *)0x0;
    local_a0 = 0;
    local_78 = (code *)0x0;
    local_60 = 0;
    local_98 = 0;
    local_80 = 0;
    FUN_00ccdf50(uVar18,0);
    if ((local_1b0 != '\0') && (local_1b8 != 0)) {
      FUN_00d50b20();
    }
LAB_00bb3b3f:
    uVar13 = 0;
    local_88 = (code *)0x0;
    local_a0 = 0;
    local_78 = (code *)0x0;
    local_60 = 0;
    pcVar11 = (code *)0x0;
    local_98 = 0;
    local_80 = 0;
  }
  else {
    local_88 = (code *)0x0;
    local_a0 = 0;
    local_78 = (code *)0x0;
    local_60 = 0;
    local_98 = 0;
    local_80 = 0;
    FUN_00ccdf50();
    if ((local_230 != '\0') && (local_238 != 0)) {
      FUN_00d50b20();
    }
    if (*(int *)(local_b0 + 0xc) < 1) goto LAB_00bb3b3f;
    lVar9 = 0;
    local_80 = 0;
    local_98 = 0;
    pcVar11 = (code *)0x0;
    local_60 = 0;
    local_78 = (code *)0x0;
    local_a0 = 0;
    local_88 = (code *)0x0;
    uVar13 = 0;
    do {
      local_8c = (uint)uVar13;
      uVar13 = local_a0 & 0xffffffff;
      lVar5 = *(longlong *)(local_b0 + 0x10);
      lVar1 = *(longlong *)(lVar5 + lVar9 * 8);
      pcVar8 = local_b0;
      if (local_80 == lVar1) {
        if (((char)local_98 == '\0') && (local_80 != 0)) {
          local_98 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          lVar5 = FUN_00d50b00();
        }
        if (((char)local_98 == '\0') || (local_80 == 0)) {
          local_98 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
          local_80 = lVar1;
        }
        else {
          local_80 = lVar1;
          uVar6 = FUN_00d50b20();
          local_98 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        }
      }
      lVar5 = DAT_02764910;
      uVar18 = 0;
      local_58 = 0;
      uStack_50 = 0;
      if (DAT_02764910 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_140 = lVar5;
      local_138 = '\x01';
      FUN_000175c0(uVar18,&local_140);
      pcVar16 = local_70;
      uVar6 = 0;
      if ((DAT_026d0220 == '\0') && (uVar6 = ___cxa_guard_acquire(), (int)uVar6 != 0)) {
        _DAT_02789148 = FUN_00d4fe50();
        DAT_02789130 = "GNData";
        _DAT_02789138 = 0x28;
        pcVar8 = FUN_000378a0;
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
        uVar6 = ___cxa_guard_release();
      }
      ppcVar10 = (code **)&DAT_02802688;
      if (pcVar16 != (code *)0x0) {
        (**(code **)(*(longlong *)pcVar16 + 0x360))();
        uVar6 = FUN_00e85ea0();
        ppcVar10 = &local_70;
        if ((char)uVar6 == '\0') {
          ppcVar10 = (code **)&DAT_02802688;
        }
      }
      pcVar16 = *ppcVar10;
      cVar12 = (char)uVar13;
      if (pcVar16 == local_78) {
        local_a0 = uVar13;
        pcVar15 = local_78;
        if ((cVar12 == '\0') && (pcVar16 != (code *)0x0)) {
          if (*(char *)(ppcVar10 + 1) != '\0') goto LAB_00bb3084;
          local_a0 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          FUN_00d50b00();
          pcVar15 = local_78;
        }
      }
      else {
        pcVar15 = pcVar16;
        if (*(char *)(ppcVar10 + 1) == '\0') {
          if (pcVar16 != (code *)0x0) {
            uVar6 = FUN_00d50b00();
          }
          local_a0 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          if ((cVar12 != '\0') && (local_78 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((cVar12 != '\0') && (local_78 != (code *)0x0)) {
            uVar6 = FUN_00d50b20();
          }
LAB_00bb3084:
          *(undefined1 *)(ppcVar10 + 1) = 0;
          local_a0 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          pcVar16 = pcVar15;
        }
      }
      local_78 = pcVar15;
      if ((local_68 != '\0') && (local_70 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      if (local_78 != (code *)0x0) {
        if ((longlong)*(int *)(local_78 + 0x18) < 0x11) {
          _memcpy(pcVar8,(void *)(longlong)*(int *)(local_78 + 0x18),param_3);
        }
        else {
          local_58 = **(undefined8 **)(local_78 + 0x10);
          uStack_50 = (*(undefined8 **)(local_78 + 0x10))[1];
        }
      }
      uVar18 = (**(code **)(*local_a8 + 0x388))(0x10,&local_58);
      if ((local_220 != '\0') && (local_228 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      lVar5 = DAT_02765320;
      if (DAT_02765320 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_130 = lVar5;
      local_128 = '\x01';
      uVar18 = FUN_000175c0(uVar18,&local_130);
      pcVar8 = local_70;
      uVar17 = (undefined7)(uVar13 >> 8);
      if (local_70 == pcVar11) {
        if (((char)local_60 == '\0') && (local_70 != (code *)0x0)) {
          pcVar8 = pcVar11;
          if (local_68 != '\0') goto LAB_00bb31f4;
          uVar13 = CONCAT71(uVar17,1);
          uVar18 = FUN_00d50b00();
        }
        else {
          uVar13 = local_60 & 0xffffffff;
        }
      }
      else {
        if (local_68 == '\0') {
          if (local_70 != (code *)0x0) {
            uVar18 = FUN_00d50b00();
          }
          uVar13 = CONCAT71(uVar17,1);
          if (((char)local_60 != '\0') && (pcVar11 != (code *)0x0)) {
            uVar18 = FUN_00d50b20();
            pcVar11 = pcVar8;
            goto LAB_00bb3240;
          }
        }
        else {
          if (((char)local_60 != '\0') && (pcVar11 != (code *)0x0)) {
            uVar18 = FUN_00d50b20();
          }
LAB_00bb31f4:
          local_68 = '\0';
        }
        uVar13 = CONCAT71(uVar17,1);
        pcVar11 = pcVar8;
      }
LAB_00bb3240:
      if ((local_68 != '\0') && (local_70 != (code *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if (pcVar11 == (code *)0x0) {
        local_170 = 0;
        lVar5 = DAT_02764920;
      }
      else {
        local_60 = uVar13;
        local_170 = FUN_00d45790();
        uVar18 = extraout_XMM0_Da;
        lVar5 = DAT_02764920;
      }
      DAT_02764920 = lVar5;
      if (lVar5 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_118 = '\x01';
      local_120 = lVar5;
      uVar6 = FUN_000175c0(uVar18,&local_120);
      pcVar8 = local_70;
      cVar12 = (char)uVar13;
      uVar18 = extraout_XMM0_Da_00;
      if (local_70 == pcVar11) {
        pcVar8 = pcVar11;
        local_60 = uVar13;
        if ((cVar12 == '\0') && (local_70 != (code *)0x0)) {
          if (local_68 != '\0') goto LAB_00bb3323;
          local_60 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          uVar18 = FUN_00d50b00();
        }
      }
      else if (local_68 == '\0') {
        if (local_70 != (code *)0x0) {
          uVar6 = FUN_00d50b00();
          uVar18 = extraout_XMM0_Da_02;
        }
        local_60 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        if ((cVar12 != '\0') && (pcVar11 != (code *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
      }
      else {
        if ((cVar12 != '\0') && (pcVar11 != (code *)0x0)) {
          uVar6 = FUN_00d50b20();
          uVar18 = extraout_XMM0_Da_01;
        }
LAB_00bb3323:
        local_68 = '\0';
        local_60 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      }
      if ((local_68 != '\0') && (local_70 != (code *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      local_178 = param_1;
      if (pcVar8 != (code *)0x0) {
        local_178 = FUN_00d45790();
        uVar18 = extraout_XMM0_Da_03;
      }
      lVar5 = DAT_02765330;
      if (DAT_02765330 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_110 = lVar5;
      local_108 = '\x01';
      uVar18 = FUN_000175c0(uVar18,&local_110);
      pcVar11 = local_70;
      uVar17 = (undefined7)((ulonglong)pcVar16 >> 8);
      if (local_70 == pcVar8) {
        if (((char)local_60 == '\0') && (local_70 != (code *)0x0)) {
          pcVar11 = pcVar8;
          if (local_68 != '\0') goto LAB_00bb3454;
          uVar14 = CONCAT71(uVar17,1);
          uVar18 = FUN_00d50b00();
        }
        else {
          uVar14 = local_60 & 0xffffffff;
        }
      }
      else {
        if (local_68 == '\0') {
          if (local_70 != (code *)0x0) {
            uVar18 = FUN_00d50b00();
          }
          uVar14 = CONCAT71(uVar17,1);
          if (((char)local_60 != '\0') && (pcVar8 != (code *)0x0)) {
            uVar18 = FUN_00d50b20();
            pcVar8 = pcVar11;
            goto LAB_00bb34a0;
          }
        }
        else {
          if (((char)local_60 != '\0') && (pcVar8 != (code *)0x0)) {
            uVar18 = FUN_00d50b20();
          }
LAB_00bb3454:
          local_68 = '\0';
        }
        uVar14 = CONCAT71(uVar17,1);
        pcVar8 = pcVar11;
      }
LAB_00bb34a0:
      if ((local_68 != '\0') && (local_70 != (code *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if (pcVar8 == (code *)0x0) {
        local_168 = 0;
        lVar5 = DAT_02764930;
      }
      else {
        local_60 = uVar14 & 0xffffffff;
        local_168 = FUN_00d45790();
        uVar18 = extraout_XMM0_Da_04;
        lVar5 = DAT_02764930;
      }
      DAT_02764930 = lVar5;
      if (lVar5 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_f8 = '\x01';
      local_100 = lVar5;
      uVar18 = FUN_000175c0(uVar18,&local_100);
      pcVar11 = local_70;
      uVar17 = (undefined7)(uVar13 >> 8);
      cVar12 = (char)uVar14;
      if (local_70 == pcVar8) {
        if ((cVar12 == '\0') && (local_70 != (code *)0x0)) {
          pcVar11 = pcVar8;
          if (local_68 != '\0') goto LAB_00bb3583;
          uVar14 = CONCAT71(uVar17,1);
          uVar18 = FUN_00d50b00();
        }
        else {
          uVar14 = uVar14 & 0xffffffff;
        }
      }
      else {
        if (local_68 == '\0') {
          if (local_70 != (code *)0x0) {
            uVar18 = FUN_00d50b00();
          }
          uVar14 = CONCAT71(uVar17,1);
          if ((cVar12 != '\0') && (pcVar8 != (code *)0x0)) {
            uVar18 = FUN_00d50b20();
            pcVar8 = pcVar11;
            goto LAB_00bb35d0;
          }
        }
        else {
          if ((cVar12 != '\0') && (pcVar8 != (code *)0x0)) {
            uVar18 = FUN_00d50b20();
          }
LAB_00bb3583:
          local_68 = '\0';
        }
        uVar14 = CONCAT71(uVar17,1);
        pcVar8 = pcVar11;
      }
LAB_00bb35d0:
      if ((local_68 != '\0') && (local_70 != (code *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if (pcVar8 == (code *)0x0) {
        uVar6 = 0;
        lVar5 = DAT_02765340;
      }
      else {
        local_60 = uVar14;
        uVar6 = FUN_00d45790();
        uVar18 = extraout_XMM0_Da_05;
        lVar5 = DAT_02765340;
      }
      DAT_02765340 = lVar5;
      if (lVar5 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_e8 = '\x01';
      local_f0 = lVar5;
      uVar7 = FUN_000175c0(uVar18,&local_f0);
      pcVar11 = local_70;
      cVar12 = (char)uVar14;
      uVar18 = extraout_XMM0_Da_06;
      if (local_70 == pcVar8) {
        pcVar11 = pcVar8;
        local_60 = uVar14;
        if ((cVar12 == '\0') && (local_70 != (code *)0x0)) {
          if (local_68 != '\0') goto LAB_00bb36a3;
          local_60 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          uVar18 = FUN_00d50b00();
        }
      }
      else if (local_68 == '\0') {
        if (local_70 != (code *)0x0) {
          uVar7 = FUN_00d50b00();
          uVar18 = extraout_XMM0_Da_08;
        }
        local_60 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
        if ((cVar12 != '\0') && (pcVar8 != (code *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
      }
      else {
        if ((cVar12 != '\0') && (pcVar8 != (code *)0x0)) {
          uVar7 = FUN_00d50b20();
          uVar18 = extraout_XMM0_Da_07;
        }
LAB_00bb36a3:
        local_68 = '\0';
        local_60 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      }
      if ((local_68 != '\0') && (local_70 != (code *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if (pcVar11 == (code *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_00d45790();
        uVar18 = extraout_XMM0_Da_09;
      }
      uVar18 = FUN_00ccdf90(uVar18,local_170);
      if ((local_210 != '\0') && (local_218 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      uVar18 = FUN_00ccdf90(uVar18,local_178);
      if ((local_200 != '\0') && (local_208 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      uVar18 = FUN_00ccdf90(uVar18,local_168);
      if ((local_1f0 != '\0') && (local_1f8 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      uVar18 = FUN_00ccdf90(uVar18,uVar6);
      if ((local_1e0 != '\0') && (local_1e8 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      FUN_00ccdf90(uVar18,uVar7);
      if ((local_1d0 != '\0') && (local_1d8 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = DAT_02729550;
      uVar18 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      if (DAT_02729550 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_e0 = lVar5;
      local_d8 = '\x01';
      uVar18 = FUN_000175c0(uVar18,&local_e0);
      pcVar8 = local_70;
      uVar17 = (undefined7)(uVar14 >> 8);
      if (local_70 == local_88) {
        if (((char)local_8c == '\0') && (local_70 != (code *)0x0)) {
          pcVar8 = local_88;
          if (local_68 != '\0') goto LAB_00bb38d8;
          uVar13 = CONCAT71(uVar17,1);
          uVar18 = FUN_00d50b00();
        }
        else {
          uVar13 = (ulonglong)local_8c;
        }
      }
      else {
        if (local_68 == '\0') {
          if (local_70 != (code *)0x0) {
            uVar18 = FUN_00d50b00();
          }
          uVar13 = CONCAT71(uVar17,1);
          if (((char)local_8c != '\0') && (local_88 != (code *)0x0)) {
            uVar18 = FUN_00d50b20();
            local_88 = pcVar8;
            goto LAB_00bb3940;
          }
        }
        else {
          if (((char)local_8c != '\0') && (local_88 != (code *)0x0)) {
            uVar18 = FUN_00d50b20();
          }
LAB_00bb38d8:
          local_68 = '\0';
        }
        uVar13 = CONCAT71(uVar17,1);
        local_88 = pcVar8;
      }
LAB_00bb3940:
      if ((local_68 != '\0') && (local_70 != (code *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      lVar5 = DAT_02729550;
      if (local_88 != (code *)0x0) {
        if (DAT_02729550 != 0) {
          uVar18 = FUN_00d50b00();
        }
        local_d0 = lVar5;
        local_c8 = '\x01';
        FUN_000175c0(uVar18,&local_d0);
        FUN_00d8d460();
        if ((local_68 != '\0') && (local_70 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
      }
      local_8c = (uint)uVar13;
      (**(code **)(*local_a8 + 0x388))(0x20,&local_58);
      if ((local_1c0 != '\0') && (local_1c8 != 0)) {
        FUN_00d50b20();
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(local_b0 + 0xc));
  }
  (**(code **)(*local_a8 + 0x368))();
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  if (((char)uVar13 != '\0') && (local_88 != (code *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  pcVar8 = local_b0;
  puVar3 = local_b8;
  if (((char)local_a0 != '\0') && (local_78 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if ((pcVar2 != (code *)0x0) && (pcVar8 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (pcVar11 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_98 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
LAB_00bb3c30:
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return unaff_RDI;
}


