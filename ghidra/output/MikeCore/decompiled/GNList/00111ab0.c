// Function: FUN_00111ab0
// Address: 00111ab0
// Size: 4582 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNData"
//   "GNString"
//   "GNDictionary"


/* WARNING: Removing unreachable block (ram,0x0011262a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00111ab0(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  code *pcVar6;
  longlong lVar7;
  longlong *plVar8;
  void *pvVar9;
  pthread_key_t pVar10;
  uint uVar11;
  longlong lVar12;
  code *pcVar13;
  int iVar14;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar15;
  ulonglong uVar16;
  code **ppcVar17;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  longlong local_1d0;
  char local_1c8;
  undefined1 uVar19;
  longlong local_1b0;
  undefined1 local_1a8;
  code *local_1a0;
  undefined1 local_198;
  longlong local_190;
  undefined1 local_188;
  code *local_180;
  undefined1 local_178;
  code *local_170;
  ulonglong local_168;
  longlong local_158;
  char local_150;
  code *local_148;
  char local_140;
  code *local_138;
  char local_130;
  code *local_128;
  char local_120;
  int local_118;
  int local_114;
  code *local_110;
  longlong *local_108;
  char local_100;
  code *local_f8;
  undefined8 *local_f0;
  code *local_e8;
  char local_e0;
  code *local_d8;
  undefined8 local_d0;
  int local_c8;
  code *local_c0;
  code *local_b8;
  code *local_b0;
  code *local_a8;
  code *local_88;
  char local_80;
  code *local_78;
  undefined8 local_70;
  int local_68;
  longlong *local_60;
  code *local_58;
  char local_50;
  code *local_48;
  ulonglong local_40;
  undefined4 local_38;
  
  local_110 = param_2;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  local_f0 = puVar5;
  uVar18 = (*DAT_02572370)();
  local_158 = DAT_026e1378;
  if (DAT_026e1378 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_150 = '\x01';
  uVar18 = FUN_01cacbe0(uVar18,&local_158);
  pcVar13 = local_58;
  if ((DAT_026fdd40 == '\0') &&
     (iVar14 = ___cxa_guard_acquire(), uVar18 = extraout_XMM0_Da_02, iVar14 != 0)) {
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
  ppcVar17 = (code **)&DAT_02802688;
  if (pcVar13 != (code *)0x0) {
    (**(code **)(*(longlong *)pcVar13 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar18 = extraout_XMM0_Da;
    if (cVar4 != '\0') {
      if ((DAT_026fd0c0 == '\0') && (iVar14 = ___cxa_guard_acquire(), iVar14 != 0)) {
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
      cVar4 = FUN_00e8db60();
      ppcVar17 = &local_58;
      uVar18 = extraout_XMM0_Da_00;
      if (cVar4 == '\0') {
        ppcVar17 = (code **)&DAT_02802688;
      }
    }
  }
  local_b8 = *ppcVar17;
  if (*(char *)(ppcVar17 + 1) == '\0') {
    if (local_b8 != (code *)0x0) {
      uVar18 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(ppcVar17 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (code *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  lVar12 = DAT_026e13a0;
  if (local_b8 == (code *)0x0) {
    *unaff_RDI = local_f0;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
  uVar19 = 0;
  if (DAT_026e13a0 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_1b0 = lVar12;
  local_1a8 = 1;
  FUN_00110c20(uVar18,&local_1b0,param_3,param_4,uVar19);
  pcVar13 = local_58;
  pcVar6 = (code *)FUN_00dd6dc0();
  uVar18 = FUN_01f27fe0();
  *(bool *)(unaff_RSI + 0x48) = pcVar6 == local_88;
  if ((local_80 != '\0') && (local_88 != (code *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_50 != '\0') && (pcVar13 != (code *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if (lVar12 != 0) {
    uVar18 = FUN_00d50b20();
  }
  lVar12 = DAT_026e1398;
  local_1a0 = local_b8;
  local_198 = 0;
  if (DAT_026e1398 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_190 = lVar12;
  local_188 = 1;
  FUN_00110c20(uVar18,&local_190);
  pcVar6 = local_58;
  lVar7 = FUN_00dd6dc0();
  *(bool *)(unaff_RSI + 0x49) = lVar7 == *(longlong *)local_110;
  pcVar13 = local_110;
  if ((local_50 != '\0') && (pcVar6 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar12 != 0) {
    FUN_00d50b20();
  }
  plVar8 = (longlong *)FUN_00e8fc40();
  FUN_0004b090();
  (**(code **)(*plVar8 + 0x18))();
  local_100 = 0;
  local_60 = plVar8;
  (**(code **)(*(longlong *)(unaff_RSI + 0x18) + 0x10))();
  FUN_00d50b00();
  local_100 = '\x01';
  local_108 = (longlong *)(unaff_RSI + 0x18);
  uVar18 = FUN_00d1fc70();
  if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
    (**(code **)(*local_108 + 0x10))();
    uVar18 = FUN_00d50b20();
  }
  pcVar6 = DAT_026e13b0;
  if (DAT_026e13b0 != (code *)0x0) {
    uVar18 = FUN_00d50b00();
  }
  local_88 = pcVar6;
  local_80 = '\0';
  ppcVar17 = &local_58;
  uVar18 = FUN_000175c0(uVar18,&local_88);
  pcVar2 = local_58;
  if ((DAT_026d0220 == '\0') &&
     (iVar14 = ___cxa_guard_acquire(), uVar18 = extraout_XMM0_Da_03, iVar14 != 0)) {
    _DAT_02789148 = FUN_00d4fe50();
    DAT_02789130 = "GNData";
    _DAT_02789138 = 0x28;
    pcVar13 = FUN_000378a0;
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
  if (pcVar2 == (code *)0x0) {
LAB_00111e36:
    ppcVar17 = (code **)&DAT_02802688;
  }
  else {
    (**(code **)(*(longlong *)pcVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar18 = extraout_XMM0_Da_01;
    if (cVar4 == '\0') goto LAB_00111e36;
  }
  pcVar2 = *ppcVar17;
  if (*(char *)(ppcVar17 + 1) == '\0') {
    if (pcVar2 != (code *)0x0) {
      uVar18 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(ppcVar17 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (code *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (code *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  local_140 = '\x01';
  local_148 = pcVar2;
  uVar18 = (**(code **)(*local_60 + 0x5f8))(uVar18,&local_148);
  local_b0 = local_e8;
  if (local_e0 == '\0') {
    if (((local_e8 != (code *)0x0) && (uVar18 = FUN_00d50b00(), local_e0 != '\0')) &&
       (local_e8 != (code *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    local_e0 = '\0';
  }
  if ((local_140 != '\0') && (local_148 != (code *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if (pcVar6 != (code *)0x0) {
    uVar18 = FUN_00d50b20();
  }
  pcVar6 = DAT_026f6f60;
  if (local_b0 != (code *)0x0) {
    if (DAT_026f6f60 != (code *)0x0) {
      uVar18 = FUN_00d50b00();
    }
    local_88 = pcVar6;
    local_80 = '\0';
    FUN_000175c0(uVar18,&local_88);
    pcVar2 = local_58;
    if ((DAT_027048b0 == '\0') && (iVar14 = ___cxa_guard_acquire(), iVar14 != 0)) {
      _DAT_026cd478 = FUN_00d4fe50();
      DAT_026cd460 = "GNList";
      _DAT_026cd468 = 0x20;
      pcVar13 = FUN_00018210;
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
    ppcVar17 = (code **)&DAT_02802688;
    if (pcVar2 != (code *)0x0) {
      (**(code **)(*(longlong *)pcVar2 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 != '\0') {
        FUN_0006e1c0();
        cVar4 = FUN_00e8da30();
        ppcVar17 = &local_58;
        if (cVar4 == '\0') {
          ppcVar17 = (code **)&DAT_02802688;
        }
      }
    }
    local_a8 = *ppcVar17;
    if (*(char *)(ppcVar17 + 1) == '\0') {
      if (local_a8 != (code *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(ppcVar17 + 1) = 0;
    }
    if ((local_50 != '\0') && (local_58 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if (pcVar6 != (code *)0x0) {
      FUN_00d50b20();
    }
    pcVar6 = local_a8;
    if ((local_a8 != (code *)0x0) && (*(int *)(local_a8 + 0xc) != 0)) {
      local_180 = local_a8;
      local_178 = 0;
      uVar18 = FUN_001115a0();
      local_58 = pcVar6;
      local_50 = '\0';
      FUN_00d214d0(uVar18,*(undefined4 *)((longlong)local_f0 + 0xc));
      if ((local_50 != '\0') && (local_58 != (code *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (*(longlong *)(unaff_RSI + 0x38) != 0) {
      local_50 = '\0';
      local_58 = (code *)0x0;
      local_48 = *(code **)(*(longlong *)(unaff_RSI + 0x38) + 0x10);
      local_40 = local_40 & 0xffffffff00000000;
      if (0 < *(int *)(local_48 + 0xc)) {
        pcVar13 = (code *)0x0;
        do {
          lVar12 = (longlong)(int)pcVar13;
          local_58 = *(code **)(*(longlong *)(local_48 + 0x10) + lVar12 * 8);
          FUN_00113450(lVar12,&local_58);
          pcVar13 = local_88;
          pVar10 = (pthread_key_t)lVar12;
          if ((((local_80 == '\0') && (local_88 != (code *)0x0)) &&
              (FUN_00d50b00(), local_80 != '\0')) && (local_88 != (code *)0x0)) {
            FUN_00d50b20();
          }
          pvVar9 = _pthread_getspecific(pVar10);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_138 = local_58;
          local_130 = '\0';
          FUN_013ddad0();
          if ((local_130 != '\0') && (local_138 != (code *)0x0)) {
            FUN_00d50b20();
          }
          if (pcVar13 != (code *)0x0) {
            FUN_00d50b20();
          }
          uVar11 = (int)local_40 + 1;
          pcVar13 = (code *)(ulonglong)uVar11;
          local_40 = CONCAT44(local_40._4_4_,uVar11);
        } while ((int)uVar11 < *(int *)(local_48 + 0xc));
        if ((local_50 != '\0') && (local_58 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    pcVar6 = DAT_026fce90;
    if (DAT_026fce90 != (code *)0x0) {
      FUN_00d50b00();
    }
    local_88 = pcVar6;
    local_80 = '\0';
    FUN_000175c0();
    pcVar2 = local_58;
    if ((DAT_027048b0 == '\0') && (iVar14 = ___cxa_guard_acquire(), iVar14 != 0)) {
      _DAT_026cd478 = FUN_00d4fe50();
      DAT_026cd460 = "GNList";
      _DAT_026cd468 = 0x20;
      pcVar13 = FUN_00018210;
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
    ppcVar17 = (code **)&DAT_02802688;
    if (pcVar2 != (code *)0x0) {
      (**(code **)(*(longlong *)pcVar2 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 != '\0') {
        FUN_00115af0();
        cVar4 = FUN_00e8da30();
        ppcVar17 = &local_58;
        if (cVar4 == '\0') {
          ppcVar17 = (code **)&DAT_02802688;
        }
      }
    }
    pcVar2 = *ppcVar17;
    if (*(char *)(ppcVar17 + 1) == '\0') {
      if (pcVar2 != (code *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(ppcVar17 + 1) = 0;
    }
    if ((local_50 != '\0') && (local_58 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if (pcVar6 != (code *)0x0) {
      FUN_00d50b20();
    }
    uVar16 = (ulonglong)*(uint *)(pcVar2 + 0xc);
    if ((int)*(uint *)(pcVar2 + 0xc) < 1) {
LAB_001127f0:
      local_50 = '\0';
      local_58 = (code *)0x0;
      local_38 = 0;
      local_40 = 0;
      local_48 = pcVar2;
      if (0 < *(int *)(pcVar2 + 0xc)) {
        lVar12 = 0;
        do {
          pcVar6 = *(code **)(*(longlong *)(pcVar2 + 0x10) + lVar12 * 8);
          local_58 = pcVar6;
          pvVar9 = _pthread_getspecific((pthread_key_t)pcVar13);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_120 = '\0';
          local_128 = pcVar6;
          FUN_012cb4b0();
          if ((local_120 != '\0') && (local_128 != (code *)0x0)) {
            FUN_00d50b20();
          }
          lVar12 = lVar12 + 1;
          local_40 = CONCAT44(local_40._4_4_,(int)lVar12);
        } while ((int)lVar12 < *(int *)(pcVar2 + 0xc));
      }
      FUN_00115e00();
      FUN_00d50b20();
    }
    else {
      do {
        local_168 = uVar16 - 1;
        pcVar13 = (code *)(local_168 & 0xffffffff);
        pcVar6 = *(code **)(*(longlong *)(pcVar2 + 0x10) + (longlong)pcVar13 * 8);
        if (pcVar6 != (code *)0x0) {
          FUN_00d50b00();
        }
        local_c0 = pcVar6;
        pvVar9 = _pthread_getspecific((pthread_key_t)pcVar13);
        if ((pvVar9 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
          pcVar13 = local_c0;
        }
        FUN_0124c6e0();
        local_f8 = local_58;
        if (local_50 == '\0') {
          if (local_58 != (code *)0x0) {
            FUN_00d50b00();
            if ((local_50 != '\0') && (local_58 != (code *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_001123c9;
          }
LAB_001127a0:
          bVar3 = false;
        }
        else {
          if (local_58 == (code *)0x0) goto LAB_001127a0;
LAB_001123c9:
          local_50 = '\0';
          local_58 = (code *)0x0;
          local_38 = 0;
          local_40 = 0;
          bVar3 = false;
          local_48 = local_f8;
          if (0 < *(int *)(local_f8 + 0xc)) {
            lVar12 = 0;
            do {
              local_58 = *(code **)(*(longlong *)(local_f8 + 0x10) + lVar12 * 8);
              pvVar9 = _pthread_getspecific((pthread_key_t)local_f8);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01327a50();
              pcVar13 = local_88;
              if (local_80 == '\0') {
                if (local_88 != (code *)0x0) {
                  FUN_00d50b00();
                  if ((local_80 != '\0') && (local_88 != (code *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_001124b8;
                }
              }
              else if (local_88 != (code *)0x0) {
LAB_001124b8:
                local_80 = '\0';
                local_88 = (code *)0x0;
                local_170 = pcVar13;
                local_78 = pcVar13;
                local_70 = 0xffffffff;
                local_68 = 0;
                local_70._4_4_ = 0;
                while( true ) {
                  if (local_70._4_4_ != 0) {
                    if (local_70._4_4_ < 1) {
                      iVar14 = -local_70._4_4_;
                    }
                    else {
                      iVar14 = (int)local_70 - local_70._4_4_;
                      local_70 = CONCAT44(local_70._4_4_,iVar14);
                      FUN_00d23690();
                      local_68 = local_68 + local_70._4_4_;
                      iVar14 = 0;
                    }
                    local_70 = CONCAT44(iVar14,(int)local_70);
                  }
                  lVar7 = (longlong)(int)local_70;
                  local_118 = (int)local_70 + 1;
                  local_70 = CONCAT44(local_70._4_4_,local_118);
                  local_114 = *(int *)(local_78 + 0xc);
                  pcVar13 = local_78;
                  if (local_114 <= local_118) break;
                  local_88 = *(code **)(*(longlong *)(local_78 + 0x10) + 8 + lVar7 * 8);
                  pvVar9 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_78 + 0x10));
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013df790();
                  pcVar13 = local_e8;
                  if (local_e0 == '\0') {
                    if (local_e8 != (code *)0x0) {
                      FUN_00d50b00();
                      if ((local_e0 != '\0') && (local_e8 != (code *)0x0)) {
                        FUN_00d50b20();
                      }
                      goto LAB_001125ee;
                    }
                  }
                  else if (local_e8 != (code *)0x0) {
LAB_001125ee:
                    local_e0 = '\0';
                    local_e8 = (code *)0x0;
                    local_d8 = pcVar13;
                    local_d0 = 0xffffffff;
                    local_c8 = 0;
                    while( true ) {
                      lVar7 = (longlong)(int)local_d0;
                      iVar15 = (int)local_d0 + 1;
                      local_d0 = CONCAT44(local_d0._4_4_,iVar15);
                      iVar14 = *(int *)(local_d8 + 0xc);
                      pcVar13 = local_d8;
                      if (iVar14 <= iVar15) break;
                      pcVar13 = *(code **)(local_d8 + 0x10);
                      local_e8 = *(code **)(pcVar13 + (lVar7 + 1) * 8);
                      pvVar9 = _pthread_getspecific((pthread_key_t)pcVar13);
                      if (pvVar9 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_013dd790();
                      iVar1 = *(int *)(local_1d0 + 0xc);
                      if ((local_1c8 != '\0') && (local_1d0 != 0)) {
                        FUN_00d50b20();
                      }
                      if (iVar1 != 0) break;
                      if (local_d0._4_4_ != 0) {
                        if (local_d0._4_4_ < 1) {
                          iVar14 = -local_d0._4_4_;
                        }
                        else {
                          local_d0 = CONCAT44(local_d0._4_4_,(int)local_d0 - local_d0._4_4_);
                          FUN_00d23690();
                          local_c8 = local_c8 + local_d0._4_4_;
                          iVar14 = 0;
                        }
                        local_d0 = CONCAT44(iVar14,(int)local_d0);
                      }
                    }
                    FUN_00115050();
                    FUN_00d50b20();
                    if (iVar15 < iVar14) break;
                  }
                }
                FUN_001150f0();
                FUN_00d50b20();
                if (local_118 < local_114) {
                  bVar3 = true;
                  break;
                }
              }
              lVar12 = lVar12 + 1;
              local_40 = CONCAT44(local_40._4_4_,(int)lVar12);
              pcVar13 = local_f8;
            } while (lVar12 < *(int *)(local_f8 + 0xc));
          }
          FUN_00115190();
          FUN_00d50b20();
        }
        if (local_c0 != (code *)0x0) {
          FUN_00d50b20();
        }
        if (!bVar3) {
          FUN_00d23620();
        }
        bVar3 = 1 < (longlong)uVar16;
        uVar16 = local_168;
      } while (bVar3);
      if (pcVar2 != (code *)0x0) goto LAB_001127f0;
    }
    if (local_a8 != (code *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_60 == (longlong *)0x0) goto LAB_00112910;
  }
  FUN_00d50b20();
LAB_00112910:
  *unaff_RDI = local_f0;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return unaff_RDI;
}


