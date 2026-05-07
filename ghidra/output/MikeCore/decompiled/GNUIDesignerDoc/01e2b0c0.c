// Function: FUN_01e2b0c0
// Address: 01e2b0c0
// Size: 4000 bytes
// Class: GNUIDesignerDoc
// String references:
//   "GNUIDesignerDoc"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01e2b0c0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  uint uVar10;
  longlong lVar11;
  longlong **pplVar12;
  bool bVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_1f0;
  undefined1 local_1e8;
  longlong *local_1e0;
  undefined1 local_1d8;
  longlong local_1d0;
  undefined1 local_1c8;
  longlong *local_1c0;
  undefined1 local_1b8;
  longlong local_1b0;
  undefined1 local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong *local_158;
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
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  char local_90;
  undefined8 *local_88;
  longlong *local_80;
  longlong *local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  char local_58 [8];
  undefined8 local_50;
  longlong *local_40;
  char local_38 [8];
  
  local_80 = param_2;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  local_88 = puVar4;
  (*DAT_02572370)();
  lVar11 = *unaff_RSI;
  lVar1 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar1 != lVar11) {
    if (lVar11 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x40) = lVar11;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x3f0))();
  local_a8 = local_40;
  plVar5 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
      (FUN_00d50b00(), plVar5 = local_a8, local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_38[0] = '\0';
  local_40 = plVar5;
  FUN_00d21140();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_a8 + 0x368))();
  local_198 = DAT_027f3820;
  if (DAT_027f3820 != 0) {
    FUN_00d50b00();
  }
  local_190 = '\x01';
  cVar2 = FUN_00d8f400();
  uVar14 = extraout_XMM0_Da;
  if ((local_190 != '\0') && (local_198 != 0)) {
    uVar14 = FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    uVar14 = FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    (**(code **)(*local_a8 + 0x3f0))();
    plVar5 = (longlong *)CONCAT71(uStack_67,local_68);
    if (local_60 == '\0') {
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_38[0] = '\0';
    local_40 = plVar5;
    uVar14 = FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    if (plVar5 != (longlong *)0x0) {
      uVar14 = FUN_00d50b20();
    }
    if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
      uVar14 = FUN_00d50b20();
    }
  }
  uVar10 = *(uint *)((longlong)local_88 + 0xc);
  if (0 < (int)uVar10) {
    lVar11 = (ulonglong)uVar10 + 1;
    do {
      uVar10 = uVar10 - 1;
      FUN_01f27fe0();
      lVar1 = *(longlong *)(local_88[2] + (ulonglong)uVar10 * 8);
      local_110 = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_110 = '\x01';
      local_118 = lVar1;
      uVar14 = FUN_01f42b10();
      if ((local_110 != '\0') && (local_118 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      lVar11 = lVar11 + -1;
    } while (1 < lVar11);
  }
  plVar5 = (longlong *)*local_80;
  plVar6 = *(longlong **)(unaff_RDI + 0x28);
  if (plVar6 != plVar5) {
    if (plVar5 != (longlong *)0x0) {
      uVar14 = FUN_00d50b00();
    }
    *(longlong **)(unaff_RDI + 0x28) = plVar5;
    if (plVar6 != (longlong *)0x0) {
      uVar14 = FUN_00d50b20();
    }
  }
  if (DAT_028b95b0 == 0) {
LAB_01e2b3fe:
    local_188 = *unaff_RSI;
    local_180 = '\0';
    uVar14 = FUN_00d17c40();
    local_70 = local_40;
    if (local_40 == (longlong *)0x0) {
      local_70 = (longlong *)0x0;
      local_a0 = 0;
    }
    else if (local_38[0] == '\0') {
      uVar8 = FUN_00d50b00();
      local_a0 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      uVar14 = extraout_XMM0_Da_00;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
      local_a0 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
    }
    if ((local_180 != '\0') && (local_188 != 0)) {
      uVar14 = FUN_00d50b20();
    }
    if (DAT_028b95b0 != 0) {
      local_1e0 = local_70;
      local_1d8 = 0;
      local_1d0 = *unaff_RSI;
      local_1c8 = 0;
      FUN_01e29660(uVar14,&local_1d0);
    }
    if (local_70 == (longlong *)0x0) {
      plVar6 = (longlong *)FUN_00e8fc40();
      FUN_000649c0();
      uVar14 = (**(code **)(*plVar6 + 0x18))();
      local_178 = *unaff_RSI;
      local_170 = '\0';
      uVar14 = (**(code **)(*plVar6 + 0x610))(uVar14,&local_178);
      local_70 = local_40;
      if (local_40 == (longlong *)0x0) {
        local_70 = (longlong *)0x0;
joined_r0x01e2b561:
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
      }
      else {
        if (local_38[0] == '\0') {
          uVar8 = FUN_00d50b00();
          local_a0 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
          uVar14 = extraout_XMM0_Da_01;
          goto joined_r0x01e2b561;
        }
        local_38[0] = '\0';
        local_a0 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
      }
      if ((local_170 != '\0') && (local_178 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      if (DAT_028b95b0 != 0) {
        local_1c0 = local_70;
        local_1b8 = 0;
        local_1b0 = *unaff_RSI;
        local_1a8 = 0;
        FUN_01e29660(uVar14,&local_1b0);
      }
      FUN_00d50b20();
    }
  }
  else {
    local_1f0 = *unaff_RSI;
    local_1e8 = 0;
    FUN_01e29580(uVar14,&local_1f0);
    local_70 = local_40;
    if (local_40 == (longlong *)0x0) goto LAB_01e2b3fe;
    plVar5 = local_40;
    if (local_38[0] == '\0') {
      plVar5 = (longlong *)FUN_00d50b00();
    }
    local_a0 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
  }
  uVar10 = (uint)plVar6;
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_0004b090();
  (**(code **)(*plVar5 + 0x18))();
  local_80 = plVar5;
  FUN_00d1fc80();
  local_100 = 0;
  (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x10))();
  FUN_00d50b00();
  local_100 = '\x01';
  local_108 = (longlong *)(unaff_RDI + 0x10);
  FUN_00d1fc70();
  if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
    (**(code **)(*local_108 + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(*local_80 + 0x5e0))();
  uVar14 = FUN_00d46300();
  local_d0 = local_98;
  local_c8 = 0;
  plVar5 = DAT_027f3828;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      uVar14 = FUN_00d50b00();
      plVar5 = DAT_027f3828;
    }
  }
  else {
    local_90 = '\0';
  }
  local_c8 = '\x01';
  DAT_027f3828 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    local_c8 = '\x01';
    uVar14 = FUN_00d50b00();
  }
  local_38[0] = '\0';
  local_40 = plVar5;
  FUN_00ca0840(uVar14,&local_40);
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_80 + 0x5e0))();
  local_f0 = 0;
  uVar14 = FUN_00d50b00();
  plVar5 = DAT_027f3830;
  local_f0 = '\x01';
  local_f8 = unaff_RDI;
  if (DAT_027f3830 != (longlong *)0x0) {
    uVar14 = FUN_00d50b00();
  }
  local_40 = plVar5;
  local_38[0] = '\0';
  uVar14 = FUN_00ca0840(uVar14,&local_40);
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    uVar14 = FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    uVar14 = FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    uVar14 = FUN_00d50b20();
  }
  if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
    uVar14 = FUN_00d50b20();
  }
  local_168 = local_70;
  local_160 = '\0';
  pplVar12 = &local_40;
  FUN_00d18390(uVar14,&local_168);
  plVar5 = local_40;
  if ((DAT_026f4460 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026f43b0 = FUN_00d4fe50();
    _DAT_026f4398 = "GNUIDesignerDoc";
    _DAT_026f43a0 = 0x60;
    _DAT_026f43a8 = FUN_00205ef0;
    _DAT_026f43b8 = 0;
    uRam00000000026f43c0 = 0;
    _DAT_026f43c8 = 0;
    uRam00000000026f43d0 = 0;
    _DAT_026f43d8 = 0;
    uRam00000000026f43e0 = 0;
    _DAT_026f43e8 = 0;
    uRam00000000026f43f0 = 0;
    _DAT_026f43f8 = 0;
    uRam00000000026f4400 = 0;
    _DAT_026f4408 = 0;
    uRam00000000026f4410 = 0;
    _DAT_026f4418 = 0;
    uRam00000000026f4420 = 0;
    _DAT_026f4428 = 0;
    uRam00000000026f4430 = 0;
    _DAT_026f4438 = 0;
    uRam00000000026f4440 = 0;
    _DAT_026f4448 = 0;
    uRam00000000026f4450 = 0;
    _DAT_026f4458 = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (longlong *)0x0) {
LAB_01e2b8a7:
    pplVar12 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01e2b8a7;
  }
  plVar6 = *(longlong **)(unaff_RDI + 0x18);
  plVar5 = *pplVar12;
  if (plVar6 != plVar5) {
    if (*(char *)(pplVar12 + 1) == '\0') {
      if (plVar5 == (longlong *)0x0) {
        *(undefined8 *)(unaff_RDI + 0x18) = 0;
      }
      else {
        FUN_00d50b00();
        plVar6 = *(longlong **)(unaff_RDI + 0x18);
        *(longlong **)(unaff_RDI + 0x18) = *pplVar12;
      }
    }
    else {
      *(undefined1 *)(pplVar12 + 1) = 0;
      *(longlong **)(unaff_RDI + 0x18) = plVar5;
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x18) != 0) {
    FUN_01e2ce50();
    FUN_00d1fc90();
    plVar5 = local_40;
    if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
        (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar10 = *(uint *)((longlong)plVar5 + 0xc);
    if (0 < (int)uVar10) {
      uVar9 = 0;
      do {
        local_158 = local_80;
        local_150 = '\0';
        (**(code **)(**(longlong **)(plVar5[2] + uVar9 * 8) + 0x138))();
        if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar9 = uVar9 + 1;
      } while (uVar10 != uVar9);
    }
    FUN_00d50b20();
  }
  if (((DAT_028b95c0 != '\0') || (*(longlong *)(unaff_RDI + 0x18) == 0)) ||
     (lVar11 = *(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x18), lVar11 == 0)) {
    local_50 = 0;
    plVar5 = (longlong *)0x0;
    goto LAB_01e2baac;
  }
  FUN_00d50b00();
  local_d8 = lVar11;
  FUN_00d30620();
  plVar5 = local_40;
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) {
LAB_01e2bfb0:
    plVar5 = (longlong *)0x0;
    local_50 = 0;
  }
  else {
    FUN_00d30620();
    local_c0 = local_40;
    local_b8 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_b8 = '\x01';
    FUN_00e41520();
    if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d2fd00();
    if (CONCAT71(uStack_67,local_68) == 0) {
      bVar13 = false;
    }
    else {
      FUN_00d2fd00();
      if (*(int *)(local_98 + 0xc) < 2) {
        bVar13 = false;
      }
      else if (*(longlong *)(unaff_RDI + 0x28) == 0) {
        bVar13 = false;
      }
      else {
        FUN_00ca1380();
        plVar5 = local_40;
        pcVar7 = local_58;
        if (local_38[0] != '\0') {
          pcVar7 = local_38;
        }
        local_58[0] = local_38[0];
        *pcVar7 = '\0';
        if ((local_38[0] != '\0') && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar10 = *(uint *)((longlong)plVar5 + 0xc);
        bVar13 = 0 < (int)uVar10;
        if ((local_58[0] != '\0') && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
      FUN_00d50b20();
    }
    lVar11 = DAT_027f3838;
    if (!bVar13) goto LAB_01e2bfb0;
    if (DAT_027f3838 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar11;
    if ((int)uVar10 < 1) {
      local_50 = 0;
      plVar5 = (longlong *)0x0;
    }
    else {
      local_1a0 = (ulonglong)uVar10;
      uVar9 = 0;
      plVar5 = (longlong *)0x0;
      local_50 = 0;
      do {
        FUN_00ca1380();
        plVar6 = local_40;
        local_68 = local_38[0];
        pcVar7 = local_38;
        if (local_38[0] == '\0') {
          pcVar7 = &local_68;
        }
        *pcVar7 = '\0';
        if ((local_38[0] != '\0') && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar11 = plVar6[2];
        plVar6 = *(longlong **)(lVar11 + uVar9 * 8);
        if (plVar5 == plVar6) {
          if (((char)local_50 == '\0') && (plVar5 != (longlong *)0x0)) {
            local_50 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
            FUN_00d50b00();
          }
        }
        else {
          if (plVar6 != (longlong *)0x0) {
            lVar11 = FUN_00d50b00();
          }
          if (((char)local_50 == '\0') || (plVar5 == (longlong *)0x0)) {
            local_50 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
            plVar5 = plVar6;
          }
          else {
            uVar8 = FUN_00d50b20();
            local_50 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
            plVar5 = plVar6;
          }
        }
        if (local_68 != '\0') {
          FUN_00d50b20();
        }
        uVar14 = FUN_00d4efa0();
        if (local_40 == (longlong *)0x0) {
          bVar13 = false;
        }
        else {
          uVar14 = FUN_00d4efa0();
          local_148 = local_b0;
          local_140 = '\0';
          uVar14 = FUN_00c841b0(uVar14,&local_148);
          bVar13 = CONCAT71(uStack_67,local_68) != 0;
          if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
            uVar14 = FUN_00d50b20();
          }
          if ((local_140 != '\0') && (local_148 != 0)) {
            uVar14 = FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            uVar14 = FUN_00d50b20();
          }
        }
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
        if (bVar13) {
          local_138 = local_d8;
          local_130 = '\0';
          local_128 = local_b0;
          local_120 = '\0';
          (**(code **)(*plVar5 + 0x80))(uVar14,&local_128);
          if ((local_120 != '\0') && (local_128 != 0)) {
            FUN_00d50b20();
          }
          if ((local_130 != '\0') && (local_138 != 0)) {
            FUN_00d50b20();
          }
          FUN_00e41d40();
        }
        uVar9 = uVar9 + 1;
      } while (local_1a0 != uVar9);
    }
    if (local_b0 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01e2baac:
  uVar10 = *(uint *)((longlong)local_88 + 0xc);
  if (0 < (int)uVar10) {
    lVar11 = (ulonglong)uVar10 + 1;
    do {
      uVar10 = uVar10 - 1;
      FUN_01f27fe0();
      lVar1 = *(longlong *)(local_88[2] + (ulonglong)uVar10 * 8);
      local_e0 = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_e0 = '\x01';
      local_e8 = lVar1;
      FUN_01f42b80();
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar11 = lVar11 + -1;
    } while (1 < lVar11);
  }
  lVar11 = *(longlong *)(unaff_RDI + 0x18);
  if (local_80 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_a0 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_a8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return lVar11 != 0;
}


