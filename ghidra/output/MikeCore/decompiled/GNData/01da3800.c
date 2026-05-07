// Function: FUN_01da3800
// Address: 01da3800
// Size: 2177 bytes
// Class: GNData
// String references:
//   "GNData"
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01da3800(void)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong **pplVar6;
  longlong unaff_RDI;
  longlong *plVar7;
  undefined4 uVar8;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_00d50100();
  FUN_00d6f370();
  local_c8 = DAT_027f1f98;
  if (DAT_027f1f98 != 0) {
    FUN_00d50b00();
  }
  local_c0 = '\x01';
  local_b8 = 0;
  local_b0 = '\0';
  pplVar6 = &local_40;
  FUN_00d704d0(&local_b8,&local_c8);
  plVar7 = local_40;
  if ((DAT_026d0220 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
LAB_01da38b0:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01da38b0;
  }
  plVar7 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027f1fa0;
  if (plVar7 == (longlong *)0x0) {
    if (DAT_027f1fa0 != 0) {
      FUN_00d50b00();
    }
    FUN_01da28b0();
    plVar7 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_01da3a2a;
      }
      if (*(longlong *)(unaff_RDI + 0x10) != 0) {
        *(undefined8 *)(unaff_RDI + 0x10) = 0;
LAB_01da3be8:
        FUN_00d50b20();
        goto LAB_01da3bf0;
      }
    }
    else {
LAB_01da3a2a:
      plVar5 = *(longlong **)(unaff_RDI + 0x10);
      if (plVar5 != plVar7) {
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *(longlong **)(unaff_RDI + 0x10) = plVar7;
        if (plVar5 != (longlong *)0x0) goto LAB_01da3be8;
      }
LAB_01da3bf0:
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = plVar7;
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0004b090();
    uVar8 = (**(code **)(*plVar5 + 0x18))();
    local_a0 = '\0';
    pplVar6 = &local_40;
    local_a8 = plVar7;
    (**(code **)(*plVar5 + 0x5f8))(uVar8,&local_a8);
    plVar7 = local_40;
    if ((DAT_026fdd40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
    if (plVar7 == (longlong *)0x0) {
LAB_01da39c0:
      pplVar6 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar7 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01da39c0;
    }
    plVar7 = *pplVar6;
    if (*(char *)(pplVar6 + 1) == '\0') {
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar6 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 != (longlong *)0x0) {
      plVar5 = *(longlong **)(unaff_RDI + 0x10);
      if (plVar5 == plVar7) {
LAB_01da3ae6:
        FUN_00d50b00();
        bVar1 = false;
      }
      else {
        FUN_00d50b00();
        *(longlong **)(unaff_RDI + 0x10) = plVar7;
        if ((plVar5 == (longlong *)0x0) || (FUN_00d50b20(), *(longlong *)(unaff_RDI + 0x10) != 0))
        goto LAB_01da3ae6;
        bVar1 = true;
      }
      lVar2 = DAT_027f1fa0;
      if (DAT_027f1fa0 != 0) {
        FUN_00d50b00();
      }
      FUN_01da25f0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar2 = DAT_027f1fa0;
    if (*(longlong *)(unaff_RDI + 0x10) == 0) {
      if (DAT_027f1fa0 != 0) {
        FUN_00d50b00();
      }
      FUN_01da28b0();
      plVar7 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_01da3baf;
        }
        if (*(longlong *)(unaff_RDI + 0x10) != 0) {
          *(undefined8 *)(unaff_RDI + 0x10) = 0;
LAB_01da3c25:
          FUN_00d50b20();
          goto LAB_01da3c2d;
        }
      }
      else {
LAB_01da3baf:
        plVar5 = *(longlong **)(unaff_RDI + 0x10);
        if (plVar5 != plVar7) {
          if (plVar7 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          *(longlong **)(unaff_RDI + 0x10) = plVar7;
          if (plVar5 != (longlong *)0x0) goto LAB_01da3c25;
        }
LAB_01da3c2d:
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    uVar8 = FUN_00d6f370();
    local_88 = DAT_027f1f98;
    local_98 = 0;
    local_90 = '\0';
    if (DAT_027f1f98 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_80 = '\x01';
    FUN_00d6f570(uVar8,&local_88);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
  }
  lVar2 = DAT_027f1fa8;
  if (DAT_027f1fa8 != 0) {
    FUN_00d50b00();
  }
  FUN_01da28b0();
  plVar5 = local_40;
  plVar7 = *(longlong **)(unaff_RDI + 0x18);
  if (plVar7 == local_40) {
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
      plVar7 = *(longlong **)(unaff_RDI + 0x18);
    }
    *(longlong **)(unaff_RDI + 0x18) = plVar5;
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027f1fb0;
  if (DAT_027f1fb0 != 0) {
    FUN_00d50b00();
  }
  FUN_01da28b0();
  plVar5 = local_40;
  plVar7 = *(longlong **)(unaff_RDI + 0x20);
  if (plVar7 == local_40) {
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
      plVar7 = *(longlong **)(unaff_RDI + 0x20);
    }
    *(longlong **)(unaff_RDI + 0x20) = plVar5;
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  local_78 = DAT_027f1fb8;
  if (DAT_027f1fb8 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  local_68 = 0;
  local_60 = '\0';
  FUN_00d710b0(&local_68,&local_78);
  plVar7 = *(longlong **)(unaff_RDI + 0x30);
  plVar5 = plVar7;
  if (plVar7 == local_40) goto LAB_01da3ea8;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
      goto LAB_01da3e63;
    }
    FUN_00d50b00();
    plVar7 = *(longlong **)(unaff_RDI + 0x30);
    *(longlong **)(unaff_RDI + 0x30) = local_40;
    plVar5 = local_40;
  }
  else {
    local_38 = '\0';
    plVar5 = local_40;
LAB_01da3e63:
    *(longlong **)(unaff_RDI + 0x30) = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar5 = local_40;
  }
LAB_01da3ea8:
  if ((local_38 != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return;
}


