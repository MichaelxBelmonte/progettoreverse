// Function: FUN_01502670
// Address: 01502670
// Size: 3016 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01502670(undefined1 *param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  undefined1 *puVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong **pplVar11;
  longlong *plVar12;
  undefined4 uVar13;
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
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_c8 = 0;
  lVar8 = *(longlong *)(unaff_RSI + 0x18);
  puVar10 = param_1;
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  pVar9 = (pthread_key_t)puVar10;
  local_c8 = '\x01';
  local_d0 = lVar8;
  FUN_00b810f0();
  plVar6 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
       (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  *param_1 = 0;
  local_70 = plVar6;
  if (*(longlong *)(unaff_RSI + 0x28) != 0) {
    plVar6 = (longlong *)FUN_00e8fc40();
    FUN_0002cb50();
    (**(code **)(*plVar6 + 0x18))();
    local_b8 = 0;
    local_c0 = *(longlong *)(unaff_RSI + 0x30);
    local_68 = plVar6;
    if (local_c0 != 0) {
      FUN_00d50b00();
    }
    local_b8 = '\x01';
    local_a8 = 0;
    lVar8 = *(longlong *)(unaff_RSI + 0x18);
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    local_b0 = lVar8;
    uVar13 = FUN_00be3f10(&local_b0,&local_c0);
    plVar6 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != (longlong *)0x0) && (uVar13 = FUN_00d50b00(), local_58 != '\0')) &&
         (local_60 != (longlong *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    local_170 = plVar6;
    local_168 = '\0';
    FUN_00e549d0(uVar13,&local_170);
    plVar12 = local_60;
    if ((DAT_026fdd40 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
    pplVar11 = (longlong **)&DAT_02802688;
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 != '\0') {
        if ((DAT_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
        cVar3 = FUN_00e8db60();
        pplVar11 = &local_60;
        if (cVar3 == '\0') {
          pplVar11 = (longlong **)&DAT_02802688;
        }
      }
    }
    plVar12 = *pplVar11;
    if (*(char *)(pplVar11 + 1) == '\0') {
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar11 + 1) = 0;
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar12 != (longlong *)0x0) {
      pVar9 = 0;
      FUN_01501fc0(0,param_1);
      plVar12 = local_60;
      if (local_60 == (longlong *)0x0) {
        plVar12 = (longlong *)0x0;
        bVar1 = false;
      }
      else {
        bVar1 = true;
        if (local_58 == '\0') {
          FUN_00d50b00();
        }
      }
      FUN_00d50b20();
      if (plVar12 != (longlong *)0x0) {
        if (plVar6 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto LAB_01502eff;
      }
    }
    lVar8 = DAT_027c2538;
    if (DAT_027c2538 != 0) {
      FUN_00d50b00();
    }
    plVar12 = local_70;
    lVar2 = DAT_027c2540;
    local_160 = lVar8;
    local_158 = '\x01';
    if (DAT_027c2540 != 0) {
      FUN_00d50b00();
    }
    lVar8 = DAT_027c24e8;
    local_150 = lVar2;
    local_148 = '\x01';
    if (DAT_027c24e8 != 0) {
      FUN_00d50b00();
    }
    local_78 = *(undefined8 *)(unaff_RSI + 0x18);
    uVar13 = FUN_00083ea0(2,&local_78);
    FUN_00e972c0(uVar13,&local_60);
    local_60 = (longlong *)&DAT_0253d630;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_60 = &DAT_024c5048;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto joined_r0x015030b7;
  }
  if (*(longlong *)(unaff_RSI + 0x20) == 0) {
    lVar8 = *(longlong *)(unaff_RSI + 0x10);
    if (lVar8 == 0) {
      bVar1 = false;
      plVar12 = (longlong *)0x0;
    }
    else {
      local_98 = 0;
      uVar13 = FUN_00d50b00();
      local_98 = '\x01';
      local_100 = *param_2;
      local_f8 = '\0';
      local_a0 = lVar8;
      FUN_0158be60(uVar13,&local_100);
      plVar12 = local_60;
      if (local_60 == (longlong *)0x0) {
        plVar12 = (longlong *)0x0;
        bVar1 = false;
      }
      else if (local_58 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = '\0';
        bVar1 = true;
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      lVar8 = DAT_027c2550;
      if (plVar12 == (longlong *)0x0) {
        if (DAT_027c2550 != 0) {
          FUN_00d50b00();
        }
        plVar12 = local_70;
        lVar2 = DAT_027c2558;
        local_f0 = lVar8;
        local_e8 = '\x01';
        if (DAT_027c2558 != 0) {
          FUN_00d50b00();
        }
        lVar8 = DAT_027c24e8;
        local_e0 = lVar2;
        local_d8 = '\x01';
        if (DAT_027c24e8 != 0) {
          FUN_00d50b00();
        }
        local_78 = *(undefined8 *)(unaff_RSI + 0x10);
        uVar13 = FUN_00083ea0(2,&local_78);
        FUN_00e972c0(uVar13,&local_60);
        local_60 = (longlong *)&DAT_0253d630;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        local_60 = &DAT_024c5048;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_015030a8;
      }
    }
  }
  else {
    uVar13 = FUN_015016a0();
    plVar6 = local_60;
    if (local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        uVar13 = FUN_00d50b00();
        goto LAB_01502ba8;
      }
    }
    else if (local_60 != (longlong *)0x0) {
LAB_01502ba8:
      lVar8 = DAT_0270b838;
      local_68 = plVar6;
      if (DAT_0270b838 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_140 = lVar8;
      local_138 = '\x01';
      pplVar11 = &local_60;
      FUN_000175c0(uVar13,&local_140);
      plVar6 = local_60;
      FUN_00053ac0();
      if (plVar6 == (longlong *)0x0) {
LAB_01502c11:
        pplVar11 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar6 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_01502c11;
      }
      plVar6 = *pplVar11;
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar6 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar11 + 1) = 0;
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (longlong *)0x0) {
        uVar4 = FUN_00d45ad0();
        *param_1 = uVar4;
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar8 = DAT_027c2548;
    if (DAT_027c2548 != 0) {
      FUN_00d50b00();
    }
    local_130 = lVar8;
    local_128 = '\x01';
    pplVar11 = &local_60;
    pVar9 = 0xd;
    FUN_00e8a230(0xd,&local_130,0);
    plVar6 = local_60;
    FUN_002771e0();
    if (plVar6 == (longlong *)0x0) {
LAB_01502cfb:
      pplVar11 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar6 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01502cfb;
    }
    plVar12 = *pplVar11;
    if (plVar12 == (longlong *)0x0) {
      bVar1 = false;
      plVar12 = (longlong *)0x0;
    }
    else {
      if (*(char *)(pplVar11 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(undefined1 *)(pplVar11 + 1) = 0;
      }
      bVar1 = true;
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    lVar8 = DAT_027c2538;
    if (plVar12 == (longlong *)0x0) {
      if (DAT_027c2538 != 0) {
        FUN_00d50b00();
      }
      plVar12 = local_70;
      lVar2 = DAT_027c2540;
      local_120 = lVar8;
      local_118 = '\x01';
      if (DAT_027c2540 != 0) {
        FUN_00d50b00();
      }
      lVar8 = DAT_027c24e8;
      local_110 = lVar2;
      local_108 = '\x01';
      if (DAT_027c24e8 != 0) {
        FUN_00d50b00();
      }
      local_78 = *(undefined8 *)(unaff_RSI + 0x10);
      uVar13 = FUN_00083ea0(2,&local_78);
      FUN_00e972c0(uVar13,&local_60);
      local_60 = (longlong *)&DAT_0253d630;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_60 = &DAT_024c5048;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
LAB_015030a8:
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      goto joined_r0x015030b7;
    }
  }
LAB_01502eff:
  pvVar7 = _pthread_getspecific(pVar9);
  plVar6 = plVar12;
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    plVar6 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  plVar6[7] = *param_2;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar1) && (plVar12 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = plVar12;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  plVar12 = local_70;
joined_r0x015030b7:
  if (plVar12 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


