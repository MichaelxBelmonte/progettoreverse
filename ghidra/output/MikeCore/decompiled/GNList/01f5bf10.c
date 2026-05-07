// Function: FUN_01f5bf10
// Address: 01f5bf10
// Size: 8960 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_01f5bf10(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined7 uVar10;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong **pplVar8;
  ulonglong uVar9;
  longlong *plVar11;
  longlong *plVar12;
  char *pcVar13;
  char cVar14;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar15;
  undefined8 unaff_R14;
  bool bVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  longlong *local_2d0;
  undefined1 local_2c8;
  longlong *local_2c0;
  undefined1 local_2b8;
  longlong *local_2b0;
  undefined1 local_2a8;
  longlong local_2a0;
  char local_298;
  longlong local_290;
  char local_288;
  longlong *local_280;
  char local_278;
  longlong *local_270;
  char local_268;
  longlong *local_260;
  char local_258;
  longlong *local_250;
  char local_248;
  longlong *local_240;
  char local_238;
  longlong *local_230;
  char local_228;
  longlong *local_220;
  char local_218;
  longlong local_210;
  char local_208;
  longlong *local_200;
  char local_1f8;
  longlong *local_1f0;
  char local_1e8;
  longlong *local_1e0;
  char local_1d8;
  longlong *local_1d0;
  char local_1c8;
  longlong *local_1c0;
  char local_1b8;
  longlong *local_1b0;
  char local_1a8;
  longlong *local_1a0;
  char local_198;
  longlong *local_190;
  char local_188;
  longlong *local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong local_160;
  char local_158;
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
  undefined8 local_f0;
  ulonglong local_e8;
  longlong *local_e0;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  char local_b8;
  undefined7 uStack_b7;
  char local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  longlong *local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  char local_50 [8];
  longlong *local_48;
  ulonglong local_40;
  
  local_c8 = (longlong *)0x0;
  local_d0 = (longlong *)0x0;
  plVar11 = (longlong *)*param_1;
  if ((DAT_026fdd40 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
    ___cxa_guard_release();
  }
  if (plVar11 == (longlong *)0x0) {
LAB_01f5c00e:
    plVar11 = (longlong *)&DAT_02802688;
  }
  else {
    local_e8 = 0;
    local_e0 = (longlong *)0x0;
    local_c0 = 0;
    local_a8 = (longlong *)0x0;
    local_48 = (longlong *)0x0;
    local_a0 = 0;
    local_88 = (longlong *)0x0;
    local_60 = (longlong *)0x0;
    (**(code **)(*plVar11 + 0x360))();
    local_e8 = 0;
    local_e0 = (longlong *)0x0;
    local_c0 = 0;
    local_a8 = (longlong *)0x0;
    local_48 = (longlong *)0x0;
    local_a0 = 0;
    local_88 = (longlong *)0x0;
    local_60 = (longlong *)0x0;
    cVar1 = FUN_00e85ea0();
    plVar11 = param_1;
    if (cVar1 == '\0') goto LAB_01f5c00e;
  }
  plVar7 = (longlong *)*plVar11;
  if (plVar7 == (longlong *)0x0) {
    uVar15 = 0;
    plVar7 = (longlong *)0x0;
    plVar11 = *(longlong **)(unaff_RSI + 0x90);
    if (plVar11 != (longlong *)0x0) goto LAB_01f5c0a8;
LAB_01f5c2d2:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
LAB_01f5c2e4:
    local_f0 = 0;
    plVar11 = (longlong *)0x0;
LAB_01f5c2f8:
    cVar1 = (char)uVar15;
    local_c0 = 0;
    local_a8 = (longlong *)0x0;
    local_40 = 0;
    local_a0 = 0;
    local_88 = (longlong *)0x0;
    local_80 = 0;
LAB_01f5c325:
    local_60 = (longlong *)0x0;
joined_r0x01f5dc55:
    local_78 = 0;
    local_70 = (longlong *)0x0;
    cVar14 = '\0';
  }
  else {
    lVar4 = plVar11[1];
    if ((char)lVar4 != '\0') {
      local_e8 = 0;
      local_e0 = (longlong *)0x0;
      local_c0 = 0;
      local_a8 = (longlong *)0x0;
      local_48 = (longlong *)0x0;
      local_a0 = 0;
      local_88 = (longlong *)0x0;
      local_60 = (longlong *)0x0;
      FUN_00d50b00();
    }
    uVar15 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),(char)lVar4) & 0xffffffff;
    plVar11 = *(longlong **)(unaff_RSI + 0x90);
    if (plVar11 == (longlong *)0x0) goto LAB_01f5c2d2;
LAB_01f5c0a8:
    plVar12 = (longlong *)*param_1;
    local_e8 = uVar15;
    local_e0 = plVar7;
    if (plVar12 != (longlong *)0x0) {
      if ((DAT_027048b0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
      local_c0 = 0;
      local_a8 = (longlong *)0x0;
      local_48 = (longlong *)0x0;
      local_a0 = 0;
      local_88 = (longlong *)0x0;
      local_60 = (longlong *)0x0;
      (**(code **)(*plVar12 + 0x360))();
      local_c0 = 0;
      local_a8 = (longlong *)0x0;
      local_48 = (longlong *)0x0;
      local_a0 = 0;
      local_88 = (longlong *)0x0;
      local_60 = (longlong *)0x0;
      uVar3 = FUN_00e85ea0();
      plVar7 = local_e0;
      uVar15 = local_e8;
      plVar11 = DAT_028007b8;
      plVar12 = param_1;
      if ((char)uVar3 == '\0') {
        plVar12 = (longlong *)&DAT_02802688;
      }
      if (*plVar12 != 0) {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        lVar4 = *param_1;
        if ((char)param_1[1] == '\0') {
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          *unaff_RDI = lVar4;
          *(undefined1 *)(unaff_RDI + 1) = 1;
        }
        else {
          *unaff_RDI = lVar4;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          *(undefined1 *)(param_1 + 1) = 0;
        }
        goto LAB_01f5c2e4;
      }
      if (local_e0 == (longlong *)0x0) {
LAB_01f5c34b:
        plVar11 = (longlong *)*param_1;
        cVar1 = (char)param_1[1];
        uVar10 = (undefined7)((ulonglong)uVar3 >> 8);
        local_78 = CONCAT71(uVar10,cVar1);
        if (plVar11 != local_c8) {
          if (plVar11 != (longlong *)0x0 && cVar1 != '\0') {
            local_c0 = 0;
            local_a8 = (longlong *)0x0;
            local_48 = (longlong *)0x0;
            local_a0 = 0;
            local_88 = (longlong *)0x0;
            local_60 = (longlong *)0x0;
            FUN_00d50b00();
          }
          goto LAB_01f5c3bb;
        }
        if (plVar11 == (longlong *)0x0 || cVar1 == '\0') {
          local_f0 = 0;
          local_c0 = 0;
          local_a8 = (longlong *)0x0;
          local_40 = 0;
          local_a0 = 0;
          local_88 = (longlong *)0x0;
          uVar15 = 0;
          local_60 = (longlong *)0x0;
          local_78 = 0;
        }
        else {
          local_78 = CONCAT71(uVar10,1);
          local_c0 = 0;
          local_a8 = (longlong *)0x0;
          local_48 = (longlong *)0x0;
          local_a0 = 0;
          local_88 = (longlong *)0x0;
          uVar15 = 0;
          local_60 = (longlong *)0x0;
          FUN_00d50b00();
          local_f0 = 0;
          local_40 = 0;
        }
        goto LAB_01f5c463;
      }
      if (DAT_028007b8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_58 = plVar11;
      local_50[0] = '\0';
      uVar3 = FUN_00c9ff50();
      cVar1 = (char)uVar3;
      uVar17 = extraout_XMM0_Da;
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        uVar3 = FUN_00d50b20();
        uVar17 = extraout_XMM0_Da_00;
      }
      if (plVar11 != (longlong *)0x0) {
        uVar3 = FUN_00d50b20();
        uVar17 = extraout_XMM0_Da_01;
      }
      lVar4 = DAT_027fec90;
      if (cVar1 == '\0') goto LAB_01f5c34b;
      if (DAT_027fec90 != 0) {
        uVar17 = FUN_00d50b00();
      }
      local_2a0 = lVar4;
      local_298 = '\x01';
      uVar17 = (**(code **)(*plVar7 + 0x88))(uVar17,&local_2a0);
      plVar11 = local_58;
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        uVar17 = FUN_00d50b20();
      }
      if ((local_298 != '\0') && (local_2a0 != 0)) {
        uVar17 = FUN_00d50b20();
      }
      lVar4 = DAT_028007c0;
      if (plVar11 != (longlong *)0x0) goto LAB_01f5c2d2;
      if (DAT_028007c0 != 0) {
        uVar17 = FUN_00d50b00();
      }
      local_290 = lVar4;
      local_288 = '\x01';
      uVar3 = (**(code **)(*plVar7 + 0x88))(uVar17,&local_290);
      plVar11 = local_58;
      uVar17 = extraout_XMM0_Da_02;
      if (local_58 == (longlong *)0x0) {
        local_f0 = 0;
        plVar11 = (longlong *)0x0;
LAB_01f5d8c8:
        bVar16 = plVar11 == (longlong *)0x0;
        if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
          uVar17 = FUN_00d50b20();
        }
      }
      else {
        if (local_50[0] == '\0') {
          uVar3 = FUN_00d50b00();
          local_f0 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
          uVar17 = extraout_XMM0_Da_03;
          goto LAB_01f5d8c8;
        }
        local_50[0] = '\0';
        local_f0 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        bVar16 = false;
      }
      if ((local_288 != '\0') && (local_290 != 0)) {
        uVar17 = FUN_00d50b20();
      }
      plVar12 = DAT_027756f0;
      if (!bVar16) {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        goto LAB_01f5c2f8;
      }
      if (DAT_027756f0 != (longlong *)0x0) {
        uVar17 = FUN_00d50b00();
      }
      local_280 = plVar12;
      local_278 = '\x01';
      uVar17 = (**(code **)(*plVar7 + 0x88))(uVar17,&local_280);
      local_a8 = local_58;
      if (local_58 == (longlong *)0x0) {
        local_c0 = 0;
        local_a8 = (longlong *)0x0;
LAB_01f5d9aa:
        if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
          uVar17 = FUN_00d50b20();
        }
      }
      else {
        if (local_50[0] == '\0') {
          uVar3 = FUN_00d50b00();
          local_c0 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
          uVar17 = extraout_XMM0_Da_04;
          goto LAB_01f5d9aa;
        }
        local_50[0] = '\0';
        local_c0 = CONCAT71((int7)((ulonglong)local_58 >> 8),1);
      }
      if ((local_278 != '\0') && (local_280 != (longlong *)0x0)) {
        uVar17 = FUN_00d50b20();
      }
      plVar11 = DAT_02704000;
      if (DAT_02704000 != (longlong *)0x0) {
        uVar17 = FUN_00d50b00();
      }
      local_270 = plVar11;
      local_268 = '\x01';
      uVar17 = (**(code **)(*plVar7 + 0x88))(uVar17,&local_270);
      local_88 = local_58;
      if (local_58 == (longlong *)0x0) {
        local_a0 = 0;
LAB_01f5da54:
        if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
          uVar17 = FUN_00d50b20();
        }
      }
      else {
        uVar10 = (undefined7)((ulonglong)local_58 >> 8);
        if (local_50[0] == '\0') {
          local_a0 = CONCAT71(uVar10,1);
          uVar17 = FUN_00d50b00();
          goto LAB_01f5da54;
        }
        local_50[0] = '\0';
        local_a0 = CONCAT71(uVar10,1);
      }
      if ((local_268 != '\0') && (local_270 != (longlong *)0x0)) {
        uVar17 = FUN_00d50b20();
      }
      plVar11 = DAT_027e7c20;
      if (DAT_027e7c20 != (longlong *)0x0) {
        uVar17 = FUN_00d50b00();
      }
      local_260 = plVar11;
      local_258 = '\x01';
      uVar3 = (**(code **)(*plVar7 + 0x88))(uVar17,&local_260);
      plVar11 = local_58;
      uVar10 = (undefined7)((ulonglong)uVar3 >> 8);
      uVar17 = extraout_XMM0_Da_05;
      if (local_58 == local_d0) {
        if (local_58 == (longlong *)0x0) {
          local_40 = 0;
        }
        else {
          if (local_50[0] != '\0') goto LAB_01f5dae6;
          local_40 = CONCAT71(uVar10,1);
          uVar17 = FUN_00d50b00();
        }
LAB_01f5db21:
        if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
          uVar17 = FUN_00d50b20();
        }
      }
      else {
        if (local_50[0] == '\0') {
          if (local_58 != (longlong *)0x0) {
            uVar3 = FUN_00d50b00();
            uVar17 = extraout_XMM0_Da_06;
          }
          local_d0 = plVar11;
          local_40 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
          goto LAB_01f5db21;
        }
        local_d0 = local_58;
LAB_01f5dae6:
        local_50[0] = '\0';
        local_40 = CONCAT71(uVar10,1);
      }
      if ((local_258 != '\0') && (local_260 != (longlong *)0x0)) {
        uVar17 = FUN_00d50b20();
      }
      local_250 = local_88;
      local_248 = '\0';
      FUN_00c841b0(uVar17,&local_250);
      local_60 = local_58;
      if (local_58 == (longlong *)0x0) {
        local_60 = (longlong *)0x0;
        local_80 = 0;
      }
      else if (local_50[0] == '\0') {
        uVar3 = FUN_00d50b00();
        local_80 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50[0] = '\0';
        local_80 = CONCAT71((int7)((ulonglong)local_58 >> 8),1);
      }
      if ((local_248 != '\0') && (local_250 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar11 = local_d0;
      if (local_60 == (longlong *)0x0) {
        if ((DAT_027048b0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
          uVar15 = local_e8;
        }
        if (plVar11 == (longlong *)0x0) {
          pplVar8 = &DAT_02802688;
        }
        else {
          local_60 = (longlong *)0x0;
          local_48 = (longlong *)local_40;
          (**(code **)(*plVar11 + 0x360))();
          local_60 = (longlong *)0x0;
          local_48 = (longlong *)local_40;
          cVar1 = FUN_00e85ea0();
          uVar15 = local_e8;
          if (cVar1 == '\0') {
            pplVar8 = &DAT_02802688;
          }
          else {
            pplVar8 = &local_d0;
          }
        }
        plVar11 = local_d0;
        plVar7 = local_e0;
        cVar1 = (char)uVar15;
        if (*pplVar8 == (longlong *)0x0) {
          if (local_d0 == (longlong *)0x0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            pplVar8 = (longlong **)(**(code **)(*local_d0 + 0x70))();
            plVar11 = local_d0;
            if ((char)pplVar8 != '\0') {
              *(undefined1 *)(unaff_RDI + 1) = 0;
              *unaff_RDI = 0;
              plVar11 = (longlong *)0x0;
              goto LAB_01f5c325;
            }
          }
          uVar15 = local_80;
          uVar10 = (undefined7)((ulonglong)pplVar8 >> 8);
          if (local_c8 == plVar11) {
            if ((char)local_40 == '\0') {
              uVar9 = 0;
            }
            else {
              uVar9 = CONCAT71(uVar10,1);
              if (plVar11 != (longlong *)0x0) {
                local_60 = (longlong *)0x0;
                local_48 = (longlong *)uVar9;
                uVar3 = FUN_00d50b00();
                uVar10 = (undefined7)((ulonglong)uVar3 >> 8);
                local_40 = CONCAT71(uVar10,1);
                local_78 = CONCAT71(uVar10,1);
                goto LAB_01f5c463;
              }
            }
            local_60 = (longlong *)0x0;
LAB_01f5df03:
            local_40 = uVar9;
            local_78 = 0;
            uVar15 = local_80;
            goto LAB_01f5c463;
          }
          if (((char)local_40 != '\0') && (plVar11 != (longlong *)0x0)) {
            local_48 = (longlong *)CONCAT71(uVar10,1);
            local_60 = (longlong *)0x0;
            FUN_00d50b00();
          }
          local_60 = (longlong *)0x0;
          local_c8 = plVar11;
LAB_01f5deab:
          local_78 = local_40;
          goto LAB_01f5c463;
        }
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (((char)local_40 == '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        *unaff_RDI = (longlong)plVar11;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        plVar11 = (longlong *)0x0;
        local_40 = 0;
        goto LAB_01f5c325;
      }
      local_48 = (longlong *)local_40;
      cVar1 = (**(code **)(*local_60 + 0x368))();
      if (cVar1 == '\0') {
        local_48 = (longlong *)local_40;
        uVar3 = FUN_00d77de0();
        uVar15 = local_80;
        plVar11 = local_d0;
        plVar7 = local_e0;
        if ((char)uVar3 == '\0') {
          uVar10 = (undefined7)((ulonglong)uVar3 >> 8);
          if (local_c8 == local_d0) {
            if ((char)local_40 == '\0') {
              uVar9 = 0;
            }
            else {
              uVar9 = CONCAT71(uVar10,1);
              if (local_d0 != (longlong *)0x0) {
                local_48 = (longlong *)uVar9;
                uVar3 = FUN_00d50b00();
                uVar10 = (undefined7)((ulonglong)uVar3 >> 8);
                local_40 = CONCAT71(uVar10,1);
                local_78 = CONCAT71(uVar10,1);
                goto LAB_01f5c463;
              }
            }
            goto LAB_01f5df03;
          }
          if (((char)local_40 != '\0') && (local_d0 != (longlong *)0x0)) {
            local_48 = (longlong *)CONCAT71(uVar10,1);
            FUN_00d50b00();
          }
          local_c8 = plVar11;
          goto LAB_01f5deab;
        }
        *(undefined1 *)(unaff_RDI + 1) = 0;
        cVar1 = (char)local_e8;
        if (((char)local_40 == '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        *unaff_RDI = (longlong)plVar11;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        plVar11 = (longlong *)0x0;
        local_40 = 0;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        plVar11 = (longlong *)0x0;
        cVar1 = (char)local_e8;
        plVar7 = local_e0;
      }
      goto joined_r0x01f5dc55;
    }
    if (plVar11 == local_c8) {
      local_78 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      local_c0 = 0;
      local_a8 = (longlong *)0x0;
      local_48 = (longlong *)0x0;
      local_a0 = 0;
      local_88 = (longlong *)0x0;
      uVar15 = 0;
      local_60 = (longlong *)0x0;
      FUN_00d50b00();
      local_f0 = 0;
      local_40 = 0;
    }
    else {
      local_c0 = 0;
      local_a8 = (longlong *)0x0;
      local_48 = (longlong *)0x0;
      local_a0 = 0;
      local_88 = (longlong *)0x0;
      local_60 = (longlong *)0x0;
      uVar3 = FUN_00d50b00();
      local_78 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
LAB_01f5c3bb:
      local_c8 = plVar11;
      local_f0 = 0;
      local_c0 = 0;
      local_a8 = (longlong *)0x0;
      local_40 = 0;
      local_a0 = 0;
      local_88 = (longlong *)0x0;
      uVar15 = 0;
      local_60 = (longlong *)0x0;
    }
LAB_01f5c463:
    local_80 = uVar15;
    if (local_c8 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      cVar14 = '\0';
      local_70 = (longlong *)0x0;
      cVar1 = (char)local_e8;
    }
    else {
      local_240 = local_c8;
      local_238 = '\0';
      cVar1 = FUN_00d24090();
      if ((local_238 != '\0') && (local_240 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar1 == '\0') {
        local_230 = local_c8;
        local_228 = '\0';
        FUN_00d21140();
        if ((local_228 != '\0') && (local_230 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar4 = FUN_00cafdf0();
        if (lVar4 != 0) {
          FUN_00d50b00();
          local_168 = 0;
          (**(code **)(*(longlong *)(unaff_RSI + 0x78) + 0x10))();
          FUN_00d50b00();
          local_168 = '\x01';
          local_220 = local_c8;
          local_218 = '\0';
          local_210 = 0;
          local_208 = '\0';
          local_170 = (longlong *)(unaff_RSI + 0x78);
          FUN_00cbad30(&local_210,&local_220,4);
          if ((local_208 != '\0') && (local_210 != 0)) {
            FUN_00d50b20();
          }
          if ((local_218 != '\0') && (local_220 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
            (**(code **)(*local_170 + 0x10))();
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      plVar11 = local_c8;
      if ((DAT_026fdd40 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
        ___cxa_guard_release();
      }
      uVar9 = local_80;
      plVar7 = DAT_02802688;
      if (plVar11 != (longlong *)0x0) {
        local_48 = (longlong *)local_40;
        (**(code **)(*plVar11 + 0x360))();
        local_48 = (longlong *)local_40;
        cVar1 = FUN_00e85ea0();
        uVar15 = uVar9;
        plVar7 = DAT_02802688;
        if (cVar1 != '\0') {
          plVar7 = local_c8;
        }
      }
      if (plVar7 == (longlong *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        uVar17 = (*DAT_02572370)();
        local_2c0 = local_c8;
        local_2b8 = 0;
        local_90 = puVar5;
        FUN_01f5f5b0(uVar17,&local_2c0);
        FUN_00c849b0();
        local_48 = local_58;
        if (local_58 == (longlong *)0x0) {
          local_48 = (longlong *)0x0;
          local_68 = 0;
        }
        else if (local_50[0] == '\0') {
          uVar3 = FUN_00d50b00();
          local_68 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_50[0] = '\0';
          local_68 = CONCAT71((int7)((ulonglong)local_58 >> 8),1);
        }
        if ((local_b0 != '\0') && (CONCAT71(uStack_b7,local_b8) != 0)) {
          FUN_00d50b20();
        }
        if (*(int *)((longlong)local_48 + 0xc) < 1) {
          uVar15 = local_40 & 0xffffffff;
        }
        else {
          lVar4 = 0;
          do {
            lVar6 = local_48[2];
            plVar11 = *(longlong **)(lVar6 + lVar4 * 8);
            if (local_60 == plVar11) {
              if (((char)local_80 == '\0') && (local_60 != (longlong *)0x0)) {
                local_80 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              if (plVar11 != (longlong *)0x0) {
                lVar6 = FUN_00d50b00();
              }
              if (((char)local_80 == '\0') || (local_60 == (longlong *)0x0)) {
                local_80 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
                local_60 = plVar11;
              }
              else {
                local_60 = plVar11;
                uVar3 = FUN_00d50b20();
                local_80 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
              }
            }
            cVar1 = FUN_00d74560();
            if (((cVar1 == '\0') &&
                ((*(char *)(unaff_RSI + 0xb9) == '\0' || (cVar1 = FUN_00d742e0(), cVar1 == '\0'))))
               && ((*(char *)(unaff_RSI + 0xba) == '\0' ||
                   (cVar1 = (**(code **)(*local_60 + 0x370))(), cVar1 == '\0')))) {
              plVar7 = (longlong *)FUN_00e8fc40();
              FUN_00022d50();
              (**(code **)(*plVar7 + 0x18))();
              uVar17 = FUN_00d46300();
              local_138 = 0;
              local_140 = CONCAT71(uStack_b7,local_b8);
              plVar11 = DAT_028007b8;
              if (local_b0 == '\0') {
                if (local_140 != 0) {
                  uVar17 = FUN_00d50b00();
                  plVar11 = DAT_028007b8;
                }
              }
              else {
                local_b0 = '\0';
              }
              local_138 = '\x01';
              DAT_028007b8 = plVar11;
              if (plVar11 != (longlong *)0x0) {
                local_138 = '\x01';
                uVar17 = FUN_00d50b00();
              }
              local_50[0] = '\0';
              local_58 = plVar11;
              FUN_00ca0840(uVar17,&local_58);
              if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar11 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_138 != '\0') && (local_140 != 0)) {
                FUN_00d50b20();
              }
              if ((local_b0 != '\0') && (CONCAT71(uStack_b7,local_b8) != 0)) {
                FUN_00d50b20();
              }
              uVar17 = FUN_00d74120();
              local_128 = 0;
              local_130 = CONCAT71(uStack_b7,local_b8);
              plVar11 = DAT_02704000;
              if (local_b0 == '\0') {
                if (local_130 != 0) {
                  uVar17 = FUN_00d50b00();
                  plVar11 = DAT_02704000;
                }
              }
              else {
                local_b0 = '\0';
              }
              local_128 = '\x01';
              DAT_02704000 = plVar11;
              if (plVar11 != (longlong *)0x0) {
                local_128 = '\x01';
                uVar17 = FUN_00d50b00();
              }
              local_50[0] = '\0';
              local_58 = plVar11;
              uVar17 = FUN_00ca0840(uVar17,&local_58);
              if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
                uVar17 = FUN_00d50b20();
              }
              if (plVar11 != (longlong *)0x0) {
                uVar17 = FUN_00d50b20();
              }
              if ((local_128 != '\0') && (local_130 != 0)) {
                uVar17 = FUN_00d50b20();
              }
              if ((local_b0 != '\0') && (CONCAT71(uStack_b7,local_b8) != 0)) {
                uVar17 = FUN_00d50b20();
              }
              local_2b0 = local_c8;
              local_2a8 = 0;
              uVar17 = FUN_01f5f5b0(uVar17,&local_2b0);
              local_118 = 0;
              local_120 = CONCAT71(uStack_b7,local_b8);
              plVar11 = DAT_027756f0;
              if (local_b0 == '\0') {
                if (local_120 != 0) {
                  uVar17 = FUN_00d50b00();
                  plVar11 = DAT_027756f0;
                }
              }
              else {
                local_b0 = '\0';
              }
              local_118 = '\x01';
              DAT_027756f0 = plVar11;
              if (plVar11 != (longlong *)0x0) {
                local_118 = '\x01';
                uVar17 = FUN_00d50b00();
              }
              local_50[0] = '\0';
              local_58 = plVar11;
              uVar17 = FUN_00ca0840(uVar17,&local_58);
              if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
                uVar17 = FUN_00d50b20();
              }
              if (plVar11 != (longlong *)0x0) {
                uVar17 = FUN_00d50b20();
              }
              if ((local_118 != '\0') && (local_120 != 0)) {
                uVar17 = FUN_00d50b20();
              }
              if ((local_b0 != '\0') && (CONCAT71(uStack_b7,local_b8) != 0)) {
                uVar17 = FUN_00d50b20();
              }
              plVar11 = DAT_0276caa0;
              local_1b0 = local_c8;
              local_1a8 = '\0';
              if (DAT_0276caa0 != (longlong *)0x0) {
                uVar17 = FUN_00d50b00();
              }
              local_58 = plVar11;
              local_50[0] = '\0';
              FUN_00ca0840(uVar17,&local_58);
              if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar11 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_1a8 != '\0') && (local_1b0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              plVar12 = local_c8;
              plVar11 = *(longlong **)(unaff_RSI + 0x80);
              uVar10 = (undefined7)(uVar15 >> 8);
              if (plVar11 == (longlong *)0x0) {
                uVar17 = FUN_00d74120();
                local_f8 = 0;
                local_100 = CONCAT71(uStack_b7,local_b8);
                if (local_b0 == '\0') {
                  if (local_100 != 0) {
                    uVar17 = FUN_00d50b00();
                  }
                }
                else {
                  local_b0 = '\0';
                }
                local_f8 = '\x01';
                uVar17 = (**(code **)(*plVar12 + 0x88))(uVar17,&local_100);
                plVar12 = local_58;
                plVar11 = local_d0;
                if (local_58 == local_d0) {
                  uVar15 = local_40 & 0xffffffff;
                  if (((char)local_40 == '\0') && (local_58 != (longlong *)0x0)) {
                    if (local_50[0] != '\0') goto LAB_01f5d542;
                    uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
                    local_40 = 0;
                    uVar17 = FUN_00d50b00();
                  }
LAB_01f5d60b:
                  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
                    uVar17 = FUN_00d50b20();
                  }
                }
                else {
                  if (local_50[0] == '\0') {
                    if (local_58 != (longlong *)0x0) {
                      uVar17 = FUN_00d50b00();
                    }
                    local_d0 = plVar12;
                    uVar15 = CONCAT71(uVar10,1);
                    if (((char)local_40 != '\0') && (plVar11 != (longlong *)0x0)) {
                      uVar17 = FUN_00d50b20();
                    }
                    goto LAB_01f5d60b;
                  }
                  local_d0 = local_58;
                  if (((char)local_40 != '\0') && (plVar11 != (longlong *)0x0)) {
                    uVar17 = FUN_00d50b20();
                  }
LAB_01f5d542:
                  local_50[0] = '\0';
                  uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
                }
                if ((local_f8 != '\0') && (local_100 != 0)) {
                  uVar17 = FUN_00d50b20();
                }
                if ((local_b0 != '\0') && (CONCAT71(uStack_b7,local_b8) != 0)) {
                  uVar17 = FUN_00d50b20();
                }
              }
              else {
                local_1a0 = local_c8;
                local_198 = '\0';
                FUN_00d74120();
                local_108 = 0;
                local_110 = CONCAT71(uStack_b7,local_b8);
                if (local_b0 == '\0') {
                  if (local_110 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_b0 = '\0';
                }
                local_108 = '\x01';
                uVar17 = (**(code **)(*plVar11 + 0x20))(&local_110,&local_1a0);
                plVar12 = local_58;
                plVar11 = local_d0;
                if (local_58 == local_d0) {
                  uVar15 = local_40 & 0xffffffff;
                  if (((char)local_40 == '\0') && (local_58 != (longlong *)0x0)) {
                    if (local_50[0] != '\0') goto LAB_01f5d479;
                    uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
                    local_40 = 0;
                    uVar17 = FUN_00d50b00();
                  }
LAB_01f5d596:
                  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
                    uVar17 = FUN_00d50b20();
                  }
                }
                else {
                  if (local_50[0] == '\0') {
                    if (local_58 != (longlong *)0x0) {
                      uVar17 = FUN_00d50b00();
                    }
                    local_d0 = plVar12;
                    uVar15 = CONCAT71(uVar10,1);
                    if (((char)local_40 != '\0') && (plVar11 != (longlong *)0x0)) {
                      uVar17 = FUN_00d50b20();
                    }
                    goto LAB_01f5d596;
                  }
                  local_d0 = local_58;
                  if (((char)local_40 != '\0') && (plVar11 != (longlong *)0x0)) {
                    uVar17 = FUN_00d50b20();
                  }
LAB_01f5d479:
                  local_50[0] = '\0';
                  uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
                }
                if ((local_108 != '\0') && (local_110 != 0)) {
                  uVar17 = FUN_00d50b20();
                }
                if ((local_b0 != '\0') && (CONCAT71(uStack_b7,local_b8) != 0)) {
                  uVar17 = FUN_00d50b20();
                }
                if ((local_198 != '\0') && (local_1a0 != (longlong *)0x0)) {
                  uVar17 = FUN_00d50b20();
                }
              }
              plVar11 = DAT_027e7c20;
              if (local_d0 != (longlong *)0x0) {
                local_190 = local_d0;
                local_188 = '\0';
                if (DAT_027e7c20 != (longlong *)0x0) {
                  uVar17 = FUN_00d50b00();
                }
                local_58 = plVar11;
                local_50[0] = '\0';
                FUN_00ca0840(uVar17,&local_58);
                if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar11 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_188 != '\0') && (local_190 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              local_178 = '\0';
              local_180 = plVar7;
              FUN_00d21140();
              if ((local_178 != '\0') && (local_180 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            else {
              uVar15 = local_40 & 0xffffffff;
            }
            lVar4 = lVar4 + 1;
            local_40 = uVar15 & 0xffffffff;
          } while (lVar4 < *(int *)((longlong)local_48 + 0xc));
        }
        *unaff_RDI = (longlong)local_90;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        cVar14 = '\0';
        local_70 = (longlong *)0x0;
        plVar11 = (longlong *)0x0;
        local_40 = uVar15 & 0xffffffff;
        cVar1 = (char)local_e8;
        plVar7 = local_e0;
        goto joined_r0x01f5dc55;
      }
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &DAT_02572358;
      (*DAT_02572370)();
      local_90 = puVar5;
      FUN_00c9fe20();
      plVar11 = local_58;
      pcVar13 = &local_b8;
      if (local_50[0] != '\0') {
        pcVar13 = local_50;
      }
      local_b8 = local_50[0];
      *pcVar13 = '\0';
      if ((local_50[0] != '\0') && (plVar11 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)0x0;
        uVar3 = 0;
      }
      else {
        uVar3 = CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
        if (local_b8 == '\0') {
          FUN_00d50b00();
        }
      }
      local_98 = uVar3;
      local_70 = plVar11;
      if (*(int *)((longlong)plVar11 + 0xc) < 1) {
        pcVar13 = (char *)(local_40 & 0xffffffff);
      }
      else {
        lVar4 = 0;
        do {
          lVar6 = local_70[2];
          plVar11 = *(longlong **)(lVar6 + lVar4 * 8);
          if (local_88 == plVar11) {
            plVar7 = local_88;
            if (((char)local_a0 == '\0') && (plVar11 != (longlong *)0x0)) {
              local_a0 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
              FUN_00d50b00();
              plVar7 = local_88;
            }
          }
          else {
            if (plVar11 != (longlong *)0x0) {
              lVar6 = FUN_00d50b00();
            }
            bVar16 = (char)local_a0 != '\0';
            local_a0 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
            plVar7 = plVar11;
            if ((bVar16) && (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_88 = plVar7;
          plVar7 = (longlong *)FUN_00e8fc40();
          FUN_00022d50();
          (**(code **)(*plVar7 + 0x18))();
          uVar17 = FUN_00d46300();
          local_158 = 0;
          pcVar13 = &local_b8;
          lVar6 = CONCAT71(uStack_b7,local_b8);
          plVar11 = DAT_028007b8;
          if (local_b0 == '\0') {
            if (lVar6 != 0) {
              uVar17 = FUN_00d50b00();
              plVar11 = DAT_028007b8;
            }
          }
          else {
            local_b0 = '\0';
          }
          local_158 = '\x01';
          DAT_028007b8 = plVar11;
          local_160 = lVar6;
          if (plVar11 != (longlong *)0x0) {
            local_158 = '\x01';
            uVar17 = FUN_00d50b00();
          }
          local_50[0] = '\0';
          local_58 = plVar11;
          uVar17 = FUN_00ca0840(uVar17,&local_58);
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            uVar17 = FUN_00d50b20();
          }
          if (plVar11 != (longlong *)0x0) {
            uVar17 = FUN_00d50b20();
          }
          if ((local_158 != '\0') && (local_160 != 0)) {
            uVar17 = FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (CONCAT71(uStack_b7,local_b8) != 0)) {
            uVar17 = FUN_00d50b20();
          }
          plVar11 = DAT_02704000;
          local_200 = local_88;
          local_1f8 = '\0';
          if (DAT_02704000 != (longlong *)0x0) {
            uVar17 = FUN_00d50b00();
          }
          local_58 = plVar11;
          local_50[0] = '\0';
          uVar17 = FUN_00ca0840(uVar17,&local_58);
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            uVar17 = FUN_00d50b20();
          }
          if (plVar11 != (longlong *)0x0) {
            uVar17 = FUN_00d50b20();
          }
          if ((local_1f8 != '\0') && (local_200 != (longlong *)0x0)) {
            uVar17 = FUN_00d50b20();
          }
          local_2d0 = local_c8;
          local_2c8 = 0;
          uVar17 = FUN_01f5f5b0(uVar17,&local_2d0);
          local_148 = 0;
          lVar6 = CONCAT71(uStack_b7,local_b8);
          plVar11 = DAT_027756f0;
          if (local_b0 == '\0') {
            if (lVar6 != 0) {
              uVar17 = FUN_00d50b00();
              plVar11 = DAT_027756f0;
            }
          }
          else {
            local_b0 = '\0';
          }
          local_148 = '\x01';
          DAT_027756f0 = plVar11;
          local_150 = lVar6;
          if (plVar11 != (longlong *)0x0) {
            local_148 = '\x01';
            uVar17 = FUN_00d50b00();
          }
          local_50[0] = '\0';
          local_58 = plVar11;
          uVar17 = FUN_00ca0840(uVar17,&local_58);
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            uVar17 = FUN_00d50b20();
          }
          if (plVar11 != (longlong *)0x0) {
            uVar17 = FUN_00d50b20();
          }
          if ((local_148 != '\0') && (local_150 != 0)) {
            uVar17 = FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (CONCAT71(uStack_b7,local_b8) != 0)) {
            uVar17 = FUN_00d50b20();
          }
          plVar11 = DAT_0276caa0;
          local_1f0 = local_c8;
          local_1e8 = '\0';
          if (DAT_0276caa0 != (longlong *)0x0) {
            uVar17 = FUN_00d50b00();
          }
          local_58 = plVar11;
          local_50[0] = '\0';
          uVar17 = FUN_00ca0840(uVar17,&local_58);
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            uVar17 = FUN_00d50b20();
          }
          if (plVar11 != (longlong *)0x0) {
            uVar17 = FUN_00d50b20();
          }
          if ((local_1e8 != '\0') && (local_1f0 != (longlong *)0x0)) {
            uVar17 = FUN_00d50b20();
          }
          local_1e0 = local_88;
          local_1d8 = '\0';
          uVar17 = (**(code **)(*local_c8 + 0x88))(uVar17,&local_1e0);
          plVar12 = local_58;
          plVar11 = local_d0;
          if (local_58 == local_d0) {
            pcVar13 = (char *)(local_40 & 0xffffffff);
            if (((char)local_40 == '\0') && (local_58 != (longlong *)0x0)) {
              if (local_50[0] != '\0') goto LAB_01f5cc26;
              pcVar13 = (char *)CONCAT71((int7)((ulonglong)pcVar13 >> 8),1);
              local_40 = 0;
              uVar17 = FUN_00d50b00();
            }
LAB_01f5cc70:
            if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
              uVar17 = FUN_00d50b20();
            }
          }
          else {
            if (local_50[0] == '\0') {
              if (local_58 != (longlong *)0x0) {
                uVar17 = FUN_00d50b00();
              }
              local_d0 = plVar12;
              pcVar13 = (char *)CONCAT71((int7)((ulonglong)pcVar13 >> 8),1);
              if (((char)local_40 != '\0') && (plVar11 != (longlong *)0x0)) {
                uVar17 = FUN_00d50b20();
              }
              goto LAB_01f5cc70;
            }
            local_d0 = local_58;
            if (((char)local_40 != '\0') && (plVar11 != (longlong *)0x0)) {
              uVar17 = FUN_00d50b20();
            }
LAB_01f5cc26:
            local_50[0] = '\0';
            pcVar13 = (char *)CONCAT71((int7)((ulonglong)pcVar13 >> 8),1);
          }
          if ((local_1d8 != '\0') && (local_1e0 != (longlong *)0x0)) {
            uVar17 = FUN_00d50b20();
          }
          plVar11 = DAT_027e7c20;
          if (local_d0 != (longlong *)0x0) {
            local_1d0 = local_d0;
            local_1c8 = '\0';
            if (DAT_027e7c20 != (longlong *)0x0) {
              uVar17 = FUN_00d50b00();
            }
            local_58 = plVar11;
            local_50[0] = '\0';
            FUN_00ca0840(uVar17,&local_58);
            if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar11 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_1c8 != '\0') && (local_1d0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_1b8 = '\0';
          local_1c0 = plVar7;
          FUN_00d21140();
          if ((local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          lVar4 = lVar4 + 1;
          local_40 = (ulonglong)pcVar13 & 0xffffffff;
        } while (lVar4 < *(int *)((longlong)local_70 + 0xc));
      }
      *unaff_RDI = (longlong)local_90;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      local_40 = (ulonglong)pcVar13 & 0xffffffff;
      cVar14 = (char)local_98;
      cVar1 = (char)local_e8;
    }
    plVar11 = (longlong *)0x0;
    plVar7 = local_e0;
  }
  local_48 = (longlong *)0x0;
  local_68 = 0;
joined_r0x01f5dc55:
  if ((cVar1 != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar7 = local_a8;
  uVar3 = local_c0;
  if ((cVar14 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_f0 != '\0') && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)uVar3 != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_40 != '\0') && (local_d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_a0 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_78 != '\0') && (local_c8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


