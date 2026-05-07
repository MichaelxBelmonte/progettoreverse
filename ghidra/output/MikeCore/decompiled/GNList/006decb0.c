// Function: FUN_006decb0
// Address: 006decb0
// Size: 7923 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNValue"
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006decb0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  char *pcVar10;
  longlong unaff_RDI;
  longlong **pplVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar12;
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
  longlong local_260;
  char local_258;
  longlong local_250;
  char local_248;
  longlong local_240;
  char local_238;
  longlong local_230;
  char local_228;
  longlong local_220;
  char local_218;
  longlong local_210;
  char local_208;
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
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
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
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68 [8];
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  undefined1 *local_40;
  char local_38 [8];
  
  FUN_00d50100();
  FUN_00d6f370();
  plVar3 = local_70;
  pcVar10 = local_38;
  if (local_68[0] != '\0') {
    pcVar10 = local_68;
  }
  local_38[0] = local_68[0];
  *pcVar10 = '\0';
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_70 + 0x450))();
  uVar12 = extraout_XMM0_Da;
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  lVar9 = DAT_027275e8;
  lVar2 = DAT_02727588;
  if (cVar4 == '\0') {
    if (DAT_027275e8 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_1a0 = lVar9;
    local_198 = '\x01';
    uVar12 = FUN_00d708a0(uVar12,0xffffffff);
    *(undefined4 *)(unaff_RDI + 0xc) = uVar12;
    uVar12 = extraout_XMM0_Da_04;
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    lVar2 = DAT_027275f0;
    if (DAT_027275f0 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_190 = lVar2;
    local_188 = '\x01';
    uVar12 = FUN_00d708a0(uVar12,0xffffffff);
    *(undefined4 *)(unaff_RDI + 0x10) = uVar12;
    uVar12 = extraout_XMM0_Da_05;
    if ((local_188 != '\0') && (local_190 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 0x2a) = 1;
    lVar2 = DAT_027275f8;
    if (DAT_027275f8 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_180 = lVar2;
    local_178 = '\x01';
    uVar5 = FUN_00d70f90(uVar12,0);
    *(undefined1 *)(unaff_RDI + 0x28) = uVar5;
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 0x29) = 0;
    lVar2 = DAT_02727600;
    if (DAT_02727600 != 0) {
      FUN_00d50b00();
    }
    local_170 = lVar2;
    local_168 = '\x01';
    local_160 = 0;
    local_158 = '\0';
    FUN_00d704d0(&local_160,&local_170);
    plVar1 = local_70;
    if (DAT_026fdd40 == '\0') {
      local_40 = &DAT_026fdd40;
      iVar6 = ___cxa_guard_acquire();
      if (iVar6 != 0) {
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
    }
    pplVar11 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 != '\0') {
        if (DAT_0270c850 == '\0') {
          local_40 = &DAT_0270c850;
          iVar6 = ___cxa_guard_acquire();
          if (iVar6 != 0) {
            _DAT_026d4348 = FUN_00d4fe50();
            _DAT_026d4330 = "GNValue";
            _DAT_026d4338 = 0x18;
            _DAT_026d4340 = FUN_00053cb0;
            _DAT_026d4350 = 0;
            uRam00000000026d4358 = 0;
            _DAT_026d4360 = 0;
            uRam00000000026d4368 = 0;
            _DAT_026d4370 = 0;
            uRam00000000026d4378 = 0;
            _DAT_026d4380 = 0;
            uRam00000000026d4388 = 0;
            _DAT_026d4390 = 0;
            uRam00000000026d4398 = 0;
            _DAT_026d43a0 = 0;
            uRam00000000026d43a8 = 0;
            _DAT_026d43b0 = 0;
            uRam00000000026d43b8 = 0;
            _DAT_026d43c0 = 0;
            uRam00000000026d43c8 = 0;
            _DAT_026d43d0 = 0;
            uRam00000000026d43d8 = 0;
            _DAT_026d43e0 = 0;
            uRam00000000026d43e8 = 0;
            _DAT_026d43f0 = 0;
            ___cxa_guard_release();
          }
        }
        cVar4 = FUN_00e8db60();
        if (cVar4 != '\0') {
          if (DAT_027048b0 == '\0') {
            local_40 = &DAT_027048b0;
            iVar6 = ___cxa_guard_acquire();
            if (iVar6 != 0) {
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
          }
          cVar4 = FUN_00e8dc10();
          pplVar11 = &local_70;
          if (cVar4 == '\0') {
            pplVar11 = (longlong **)&DAT_02802688;
          }
        }
      }
    }
    plVar7 = *(longlong **)(unaff_RDI + 0x18);
    plVar1 = *pplVar11;
    if (plVar7 != plVar1) {
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar1 == (longlong *)0x0) {
          *(undefined8 *)(unaff_RDI + 0x18) = 0;
        }
        else {
          FUN_00d50b00();
          plVar7 = *(longlong **)(unaff_RDI + 0x18);
          *(longlong **)(unaff_RDI + 0x18) = *pplVar11;
        }
      }
      else {
        *(undefined1 *)(pplVar11 + 1) = 0;
        *(longlong **)(unaff_RDI + 0x18) = plVar1;
      }
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_02727608;
    if (DAT_02727608 != 0) {
      FUN_00d50b00();
    }
    local_150 = lVar2;
    local_148 = '\x01';
    local_140 = 0;
    local_138 = '\0';
    FUN_00d704d0(&local_140,&local_150);
    plVar1 = local_70;
    if (DAT_026fdd40 == '\0') {
      local_40 = &DAT_026fdd40;
      iVar6 = ___cxa_guard_acquire();
      if (iVar6 != 0) {
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
    }
    pplVar11 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 != '\0') {
        if (DAT_0270c850 == '\0') {
          local_40 = &DAT_0270c850;
          iVar6 = ___cxa_guard_acquire();
          if (iVar6 != 0) {
            _DAT_026d4348 = FUN_00d4fe50();
            _DAT_026d4330 = "GNValue";
            _DAT_026d4338 = 0x18;
            _DAT_026d4340 = FUN_00053cb0;
            _DAT_026d4350 = 0;
            uRam00000000026d4358 = 0;
            _DAT_026d4360 = 0;
            uRam00000000026d4368 = 0;
            _DAT_026d4370 = 0;
            uRam00000000026d4378 = 0;
            _DAT_026d4380 = 0;
            uRam00000000026d4388 = 0;
            _DAT_026d4390 = 0;
            uRam00000000026d4398 = 0;
            _DAT_026d43a0 = 0;
            uRam00000000026d43a8 = 0;
            _DAT_026d43b0 = 0;
            uRam00000000026d43b8 = 0;
            _DAT_026d43c0 = 0;
            uRam00000000026d43c8 = 0;
            _DAT_026d43d0 = 0;
            uRam00000000026d43d8 = 0;
            _DAT_026d43e0 = 0;
            uRam00000000026d43e8 = 0;
            _DAT_026d43f0 = 0;
            ___cxa_guard_release();
          }
        }
        cVar4 = FUN_00e8db60();
        if (cVar4 != '\0') {
          if (DAT_027048b0 == '\0') {
            local_40 = &DAT_027048b0;
            iVar6 = ___cxa_guard_acquire();
            if (iVar6 != 0) {
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
          }
          cVar4 = FUN_00e8dc10();
          pplVar11 = &local_70;
          if (cVar4 == '\0') {
            pplVar11 = (longlong **)&DAT_02802688;
          }
        }
      }
    }
    plVar7 = *(longlong **)(unaff_RDI + 0x20);
    plVar1 = *pplVar11;
    if (plVar7 != plVar1) {
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar1 == (longlong *)0x0) {
          *(undefined8 *)(unaff_RDI + 0x20) = 0;
        }
        else {
          FUN_00d50b00();
          plVar7 = *(longlong **)(unaff_RDI + 0x20);
          *(longlong **)(unaff_RDI + 0x20) = *pplVar11;
        }
      }
      else {
        *(undefined1 *)(pplVar11 + 1) = 0;
        *(longlong **)(unaff_RDI + 0x20) = plVar1;
      }
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_138 != '\0') && (local_140 != 0)) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_02727610;
    if (DAT_02727610 != 0) {
      FUN_00d50b00();
    }
    local_130 = lVar2;
    local_128 = '\x01';
    local_120 = 0;
    local_118 = '\0';
    FUN_00d704d0(&local_120,&local_130);
    plVar1 = *(longlong **)(unaff_RDI + 0x40);
    plVar7 = plVar1;
    if (plVar1 != local_70) {
      if (local_68[0] == '\0') {
        if (local_70 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
          goto LAB_006df61f;
        }
        FUN_00d50b00();
        plVar1 = *(longlong **)(unaff_RDI + 0x40);
        *(longlong **)(unaff_RDI + 0x40) = local_70;
        plVar7 = local_70;
      }
      else {
        local_68[0] = '\0';
        plVar7 = local_70;
LAB_006df61f:
        *(longlong **)(unaff_RDI + 0x40) = plVar7;
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar7 = local_70;
      }
    }
    if ((local_68[0] != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_02727618;
    if (DAT_02727618 != 0) {
      FUN_00d50b00();
    }
    local_110 = lVar2;
    local_108 = '\x01';
    local_100 = 0;
    local_f8 = '\0';
    uVar12 = FUN_00d704d0(&local_100,&local_110);
    plVar1 = *(longlong **)(unaff_RDI + 0x48);
    plVar7 = plVar1;
    if (plVar1 != local_70) {
      if (local_68[0] == '\0') {
        if (local_70 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
          goto LAB_006df70e;
        }
        uVar12 = FUN_00d50b00();
        plVar1 = *(longlong **)(unaff_RDI + 0x48);
        *(longlong **)(unaff_RDI + 0x48) = local_70;
        plVar7 = local_70;
      }
      else {
        local_68[0] = '\0';
        plVar7 = local_70;
LAB_006df70e:
        *(longlong **)(unaff_RDI + 0x48) = plVar7;
      }
      if (plVar1 != (longlong *)0x0) {
        uVar12 = FUN_00d50b20();
        plVar7 = local_70;
      }
    }
    if ((local_68[0] != '\0') && (plVar7 != (longlong *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    *(undefined4 *)(unaff_RDI + 0x50) = 0xffffffff;
    *(undefined1 *)(unaff_RDI + 0x54) = 0;
    if (*(longlong *)(unaff_RDI + 0x58) != 0) {
      *(undefined8 *)(unaff_RDI + 0x58) = 0;
      uVar12 = FUN_00d50b20();
    }
    lVar2 = DAT_02727620;
    if (DAT_02727620 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_f0 = lVar2;
    local_e8 = '\x01';
    uVar5 = FUN_00d70f90(uVar12,0);
    *(undefined1 *)(unaff_RDI + 0x2b) = uVar5;
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    *(undefined4 *)(unaff_RDI + 0x70) = 0;
  }
  else {
    if (DAT_02727588 != 0) {
      uVar12 = FUN_00d50b00();
    }
    uVar12 = FUN_00d708a0(uVar12,0xffffffff);
    *(undefined4 *)(unaff_RDI + 0xc) = uVar12;
    uVar12 = extraout_XMM0_Da_00;
    if (lVar2 != 0) {
      uVar12 = FUN_00d50b20();
    }
    lVar2 = DAT_02727590;
    if (DAT_02727590 != 0) {
      uVar12 = FUN_00d50b00();
    }
    uVar12 = FUN_00d708a0(uVar12,0xffffffff);
    *(undefined4 *)(unaff_RDI + 0x10) = uVar12;
    uVar12 = extraout_XMM0_Da_01;
    if (lVar2 != 0) {
      uVar12 = FUN_00d50b20();
    }
    lVar2 = DAT_02727598;
    if (DAT_02727598 != 0) {
      uVar12 = FUN_00d50b00();
    }
    uVar5 = FUN_00d70f90(uVar12,1);
    *(undefined1 *)(unaff_RDI + 0x2a) = uVar5;
    uVar12 = extraout_XMM0_Da_02;
    if (lVar2 != 0) {
      uVar12 = FUN_00d50b20();
    }
    lVar2 = DAT_027275a0;
    if (DAT_027275a0 != 0) {
      uVar12 = FUN_00d50b00();
    }
    uVar5 = FUN_00d70f90(uVar12,1);
    *(undefined1 *)(unaff_RDI + 0x28) = uVar5;
    uVar12 = extraout_XMM0_Da_03;
    if (lVar2 != 0) {
      uVar12 = FUN_00d50b20();
    }
    lVar2 = DAT_027275a8;
    if (DAT_027275a8 != 0) {
      uVar12 = FUN_00d50b00();
    }
    uVar5 = FUN_00d70f90(uVar12,1);
    *(undefined1 *)(unaff_RDI + 0x29) = uVar5;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027275b0;
    if (DAT_027275b0 != 0) {
      FUN_00d50b00();
    }
    local_260 = lVar2;
    local_258 = '\x01';
    local_250 = 0;
    local_248 = '\0';
    FUN_00d704d0(&local_250,&local_260);
    plVar1 = local_70;
    if (DAT_026fdd40 == '\0') {
      local_40 = &DAT_026fdd40;
      iVar6 = ___cxa_guard_acquire();
      if (iVar6 != 0) {
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
    }
    pplVar11 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 != '\0') {
        if (DAT_0270c850 == '\0') {
          local_40 = &DAT_0270c850;
          iVar6 = ___cxa_guard_acquire();
          if (iVar6 != 0) {
            _DAT_026d4348 = FUN_00d4fe50();
            _DAT_026d4330 = "GNValue";
            _DAT_026d4338 = 0x18;
            _DAT_026d4340 = FUN_00053cb0;
            _DAT_026d4350 = 0;
            uRam00000000026d4358 = 0;
            _DAT_026d4360 = 0;
            uRam00000000026d4368 = 0;
            _DAT_026d4370 = 0;
            uRam00000000026d4378 = 0;
            _DAT_026d4380 = 0;
            uRam00000000026d4388 = 0;
            _DAT_026d4390 = 0;
            uRam00000000026d4398 = 0;
            _DAT_026d43a0 = 0;
            uRam00000000026d43a8 = 0;
            _DAT_026d43b0 = 0;
            uRam00000000026d43b8 = 0;
            _DAT_026d43c0 = 0;
            uRam00000000026d43c8 = 0;
            _DAT_026d43d0 = 0;
            uRam00000000026d43d8 = 0;
            _DAT_026d43e0 = 0;
            uRam00000000026d43e8 = 0;
            _DAT_026d43f0 = 0;
            ___cxa_guard_release();
          }
        }
        cVar4 = FUN_00e8db60();
        if (cVar4 != '\0') {
          if (DAT_027048b0 == '\0') {
            local_40 = &DAT_027048b0;
            iVar6 = ___cxa_guard_acquire();
            if (iVar6 != 0) {
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
          }
          cVar4 = FUN_00e8dc10();
          pplVar11 = &local_70;
          if (cVar4 == '\0') {
            pplVar11 = (longlong **)&DAT_02802688;
          }
        }
      }
    }
    plVar7 = *(longlong **)(unaff_RDI + 0x18);
    plVar1 = *pplVar11;
    if (plVar7 != plVar1) {
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar1 == (longlong *)0x0) {
          *(undefined8 *)(unaff_RDI + 0x18) = 0;
        }
        else {
          FUN_00d50b00();
          plVar7 = *(longlong **)(unaff_RDI + 0x18);
          *(longlong **)(unaff_RDI + 0x18) = *pplVar11;
        }
      }
      else {
        *(undefined1 *)(pplVar11 + 1) = 0;
        *(longlong **)(unaff_RDI + 0x18) = plVar1;
      }
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_248 != '\0') && (local_250 != 0)) {
      FUN_00d50b20();
    }
    if ((local_258 != '\0') && (local_260 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027275b8;
    if (DAT_027275b8 != 0) {
      FUN_00d50b00();
    }
    local_240 = lVar2;
    local_238 = '\x01';
    local_230 = 0;
    local_228 = '\0';
    FUN_00d704d0(&local_230,&local_240);
    plVar1 = local_70;
    if (DAT_026fdd40 == '\0') {
      local_40 = &DAT_026fdd40;
      iVar6 = ___cxa_guard_acquire();
      if (iVar6 != 0) {
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
    }
    pplVar11 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 != '\0') {
        if (DAT_0270c850 == '\0') {
          local_40 = &DAT_0270c850;
          iVar6 = ___cxa_guard_acquire();
          if (iVar6 != 0) {
            _DAT_026d4348 = FUN_00d4fe50();
            _DAT_026d4330 = "GNValue";
            _DAT_026d4338 = 0x18;
            _DAT_026d4340 = FUN_00053cb0;
            _DAT_026d4350 = 0;
            uRam00000000026d4358 = 0;
            _DAT_026d4360 = 0;
            uRam00000000026d4368 = 0;
            _DAT_026d4370 = 0;
            uRam00000000026d4378 = 0;
            _DAT_026d4380 = 0;
            uRam00000000026d4388 = 0;
            _DAT_026d4390 = 0;
            uRam00000000026d4398 = 0;
            _DAT_026d43a0 = 0;
            uRam00000000026d43a8 = 0;
            _DAT_026d43b0 = 0;
            uRam00000000026d43b8 = 0;
            _DAT_026d43c0 = 0;
            uRam00000000026d43c8 = 0;
            _DAT_026d43d0 = 0;
            uRam00000000026d43d8 = 0;
            _DAT_026d43e0 = 0;
            uRam00000000026d43e8 = 0;
            _DAT_026d43f0 = 0;
            ___cxa_guard_release();
          }
        }
        cVar4 = FUN_00e8db60();
        if (cVar4 != '\0') {
          if (DAT_027048b0 == '\0') {
            local_40 = &DAT_027048b0;
            iVar6 = ___cxa_guard_acquire();
            if (iVar6 != 0) {
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
          }
          cVar4 = FUN_00e8dc10();
          pplVar11 = &local_70;
          if (cVar4 == '\0') {
            pplVar11 = (longlong **)&DAT_02802688;
          }
        }
      }
    }
    plVar7 = *(longlong **)(unaff_RDI + 0x20);
    plVar1 = *pplVar11;
    if (plVar7 != plVar1) {
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar1 == (longlong *)0x0) {
          *(undefined8 *)(unaff_RDI + 0x20) = 0;
        }
        else {
          FUN_00d50b00();
          plVar7 = *(longlong **)(unaff_RDI + 0x20);
          *(longlong **)(unaff_RDI + 0x20) = *pplVar11;
        }
      }
      else {
        *(undefined1 *)(pplVar11 + 1) = 0;
        *(longlong **)(unaff_RDI + 0x20) = plVar1;
      }
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_228 != '\0') && (local_230 != 0)) {
      FUN_00d50b20();
    }
    if ((local_238 != '\0') && (local_240 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027275c0;
    if (DAT_027275c0 != 0) {
      FUN_00d50b00();
    }
    local_220 = lVar2;
    local_218 = '\x01';
    local_210 = 0;
    local_208 = '\0';
    FUN_00d704d0(&local_210,&local_220);
    plVar1 = *(longlong **)(unaff_RDI + 0x40);
    plVar7 = plVar1;
    if (plVar1 != local_70) {
      if (local_68[0] == '\0') {
        if (local_70 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
          goto LAB_006df8e4;
        }
        FUN_00d50b00();
        plVar1 = *(longlong **)(unaff_RDI + 0x40);
        *(longlong **)(unaff_RDI + 0x40) = local_70;
        plVar7 = local_70;
      }
      else {
        local_68[0] = '\0';
        plVar7 = local_70;
LAB_006df8e4:
        *(longlong **)(unaff_RDI + 0x40) = plVar7;
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar7 = local_70;
      }
    }
    if ((local_68[0] != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_208 != '\0') && (local_210 != 0)) {
      FUN_00d50b20();
    }
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027275c8;
    if (DAT_027275c8 != 0) {
      FUN_00d50b00();
    }
    local_200 = lVar2;
    local_1f8 = '\x01';
    local_1f0 = 0;
    local_1e8 = '\0';
    FUN_00d704d0(&local_1f0,&local_200);
    plVar1 = *(longlong **)(unaff_RDI + 0x48);
    plVar7 = plVar1;
    if (plVar1 != local_70) {
      if (local_68[0] == '\0') {
        if (local_70 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
          goto LAB_006df9d3;
        }
        FUN_00d50b00();
        plVar1 = *(longlong **)(unaff_RDI + 0x48);
        *(longlong **)(unaff_RDI + 0x48) = local_70;
        plVar7 = local_70;
      }
      else {
        local_68[0] = '\0';
        plVar7 = local_70;
LAB_006df9d3:
        *(longlong **)(unaff_RDI + 0x48) = plVar7;
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar7 = local_70;
      }
    }
    if ((local_68[0] != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1e8 != '\0') && (local_1f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027275d0;
    if (DAT_027275d0 != 0) {
      FUN_00d50b00();
    }
    local_1e0 = lVar2;
    local_1d8 = '\x01';
    local_1d0 = 0;
    local_1c8 = '\0';
    uVar12 = FUN_00d704d0(&local_1d0,&local_1e0);
    plVar1 = local_70;
    if (DAT_027048b0 == '\0') {
      local_40 = &DAT_027048b0;
      iVar6 = ___cxa_guard_acquire();
      uVar12 = extraout_XMM0_Da_09;
      if (iVar6 != 0) {
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
        uVar12 = ___cxa_guard_release();
      }
    }
    pplVar11 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      uVar12 = extraout_XMM0_Da_06;
      if (cVar4 != '\0') {
        if (DAT_0270c850 == '\0') {
          local_40 = &DAT_0270c850;
          iVar6 = ___cxa_guard_acquire();
          if (iVar6 != 0) {
            _DAT_026d4348 = FUN_00d4fe50();
            _DAT_026d4330 = "GNValue";
            _DAT_026d4338 = 0x18;
            _DAT_026d4340 = FUN_00053cb0;
            _DAT_026d4350 = 0;
            uRam00000000026d4358 = 0;
            _DAT_026d4360 = 0;
            uRam00000000026d4368 = 0;
            _DAT_026d4370 = 0;
            uRam00000000026d4378 = 0;
            _DAT_026d4380 = 0;
            uRam00000000026d4388 = 0;
            _DAT_026d4390 = 0;
            uRam00000000026d4398 = 0;
            _DAT_026d43a0 = 0;
            uRam00000000026d43a8 = 0;
            _DAT_026d43b0 = 0;
            uRam00000000026d43b8 = 0;
            _DAT_026d43c0 = 0;
            uRam00000000026d43c8 = 0;
            _DAT_026d43d0 = 0;
            uRam00000000026d43d8 = 0;
            _DAT_026d43e0 = 0;
            uRam00000000026d43e8 = 0;
            _DAT_026d43f0 = 0;
            ___cxa_guard_release();
          }
        }
        cVar4 = FUN_00e8da30();
        pplVar11 = &local_70;
        uVar12 = extraout_XMM0_Da_07;
        if (cVar4 == '\0') {
          pplVar11 = (longlong **)&DAT_02802688;
        }
      }
    }
    plVar7 = *(longlong **)(unaff_RDI + 0x30);
    plVar1 = *pplVar11;
    if (plVar7 != plVar1) {
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar1 == (longlong *)0x0) {
          *(undefined8 *)(unaff_RDI + 0x30) = 0;
        }
        else {
          uVar12 = FUN_00d50b00();
          plVar7 = *(longlong **)(unaff_RDI + 0x30);
          *(longlong **)(unaff_RDI + 0x30) = *pplVar11;
        }
      }
      else {
        *(undefined1 *)(pplVar11 + 1) = 0;
        *(longlong **)(unaff_RDI + 0x30) = plVar1;
      }
      if (plVar7 != (longlong *)0x0) {
        uVar12 = FUN_00d50b20();
      }
    }
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    if ((local_1c8 != '\0') && (local_1d0 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    if ((local_1d8 != '\0') && (local_1e0 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    *(undefined4 *)(unaff_RDI + 0x50) = 0xffffffff;
    *(undefined1 *)(unaff_RDI + 0x54) = 0;
    if (*(longlong *)(unaff_RDI + 0x58) != 0) {
      *(undefined8 *)(unaff_RDI + 0x58) = 0;
      uVar12 = FUN_00d50b20();
    }
    lVar2 = DAT_027275d8;
    if (DAT_027275d8 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_1c0 = lVar2;
    local_1b8 = '\x01';
    uVar5 = FUN_00d70f90(uVar12,0);
    *(undefined1 *)(unaff_RDI + 0x2b) = uVar5;
    uVar12 = extraout_XMM0_Da_08;
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    lVar2 = DAT_027275e0;
    if (DAT_027275e0 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_1b0 = lVar2;
    local_1a8 = '\x01';
    uVar12 = FUN_00d708a0(uVar12,0);
    *(undefined4 *)(unaff_RDI + 0x70) = uVar12;
    if ((local_1a8 != '\0') && (local_1b0 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar12 = FUN_00d6f370();
  local_e0 = DAT_026f6e58;
  if (DAT_026f6e58 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_d8 = '\x01';
  uVar5 = FUN_00d70f90(uVar12,1);
  *(undefined1 *)(unaff_RDI + 0x55) = uVar5;
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x68) != 0) {
    *(undefined8 *)(unaff_RDI + 0x68) = 0;
    FUN_00d50b20();
  }
  lVar2 = DAT_026fba80;
  if (*(longlong *)(unaff_RDI + 0x18) == 0) {
    if (DAT_026fba80 != 0) {
      FUN_00d50b00();
    }
    local_d0 = lVar2;
    local_c8 = '\x01';
    FUN_006e17f0();
    FUN_00d46530();
    local_b0 = local_a0;
    local_a8 = local_90;
    FUN_00083ea0(2,&local_a8);
    FUN_006e1750();
    lVar2 = *(longlong *)(unaff_RDI + 0x18);
    lVar9 = lVar2;
    if (lVar2 != local_80) {
      if (local_78 == '\0') {
        if (local_80 == 0) {
          lVar9 = 0;
          goto LAB_006dfe86;
        }
        FUN_00d50b00();
        lVar2 = *(longlong *)(unaff_RDI + 0x18);
        *(longlong *)(unaff_RDI + 0x18) = local_80;
        lVar9 = local_80;
      }
      else {
        local_78 = '\0';
        lVar9 = local_80;
LAB_006dfe86:
        *(longlong *)(unaff_RDI + 0x18) = lVar9;
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
        lVar9 = local_80;
      }
    }
    if ((local_78 != '\0') && (lVar9 != 0)) {
      FUN_00d50b20();
    }
    local_70 = (longlong *)&DAT_0253d630;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_70 = &DAT_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_027259d0;
  if (*(longlong *)(unaff_RDI + 0x20) != 0) goto LAB_006dfd39;
  if (DAT_027259d0 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar2;
  local_b8 = '\x01';
  FUN_006e17f0();
  FUN_00d46530();
  local_b0 = local_a0;
  local_a8 = local_90;
  FUN_00083ea0(2,&local_a8);
  FUN_006e1750();
  lVar2 = *(longlong *)(unaff_RDI + 0x20);
  lVar9 = lVar2;
  if (lVar2 != local_80) {
    if (local_78 == '\0') {
      if (local_80 == 0) {
        lVar9 = 0;
        goto LAB_006dff4a;
      }
      FUN_00d50b00();
      lVar2 = *(longlong *)(unaff_RDI + 0x20);
      *(longlong *)(unaff_RDI + 0x20) = local_80;
      lVar9 = local_80;
    }
    else {
      local_78 = '\0';
      lVar9 = local_80;
LAB_006dff4a:
      *(longlong *)(unaff_RDI + 0x20) = lVar9;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar9 = local_80;
    }
  }
  if ((local_78 != '\0') && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  local_70 = (longlong *)&DAT_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &DAT_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
LAB_006dfd39:
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  uVar12 = FUN_00c92160();
  lVar2 = *(longlong *)(unaff_RDI + 0x78);
  *(undefined8 **)(unaff_RDI + 0x78) = puVar8;
  if (lVar2 != 0) {
    uVar12 = FUN_00d50b20();
    puVar8 = *(undefined8 **)(unaff_RDI + 0x78);
  }
  iVar6 = *(int *)(puVar8 + 3);
  FUN_00c8e340(uVar12,1);
  *(undefined4 *)(puVar8[2] + (longlong)iVar6) = 1;
  if ((local_38[0] != '\0') && (plVar3 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


