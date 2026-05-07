// Function: FUN_000c49f0
// Address: 000c49f0
// Size: 3184 bytes
// Class: GNRootView
// String references:
//   "GNRootView"
//   "MDMetaWindowController"


/* WARNING: Removing unreachable block (ram,0x000c51b1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c49f0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  longlong **pplVar8;
  longlong *unaff_RSI;
  bool bVar9;
  undefined4 uVar10;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  char local_90;
  undefined7 uStack_8f;
  char local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50 [8];
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  FUN_00d3ecc0();
  plVar1 = local_58;
  lVar6 = DAT_026cb128;
  if (DAT_026cb128 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00d3ecc0();
    plVar1 = local_58;
    local_e0 = DAT_026cb130;
    if (DAT_026cb130 != 0) {
      FUN_00d50b00();
    }
    local_d8 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') goto LAB_000c5300;
    pplVar8 = &local_58;
    FUN_00d3ecf0();
    plVar1 = local_58;
    if ((DAT_026e85e0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_027f4bd8 = FUN_0006d940();
      _DAT_027f4bc0 = "GNRootView";
      _DAT_027f4bc8 = 0x1d0;
      _DAT_027f4bd0 = FUN_00097da0;
      _DAT_027f4be0 = 0;
      uRam00000000027f4be8 = 0;
      _DAT_027f4bf0 = 0;
      uRam00000000027f4bf8 = 0;
      _DAT_027f4c00 = 0;
      uRam00000000027f4c08 = 0;
      _DAT_027f4c10 = 0;
      uRam00000000027f4c18 = 0;
      _DAT_027f4c20 = 0;
      uRam00000000027f4c28 = 0;
      _DAT_027f4c30 = 0;
      uRam00000000027f4c38 = 0;
      _DAT_027f4c40 = 0;
      uRam00000000027f4c48 = 0;
      _DAT_027f4c50 = 0;
      uRam00000000027f4c58 = 0;
      _DAT_027f4c60 = 0;
      uRam00000000027f4c68 = 0;
      _DAT_027f4c70 = 0;
      uRam00000000027f4c78 = 0;
      _DAT_027f4c80 = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (longlong *)0x0) {
LAB_000c4bab:
      pplVar8 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_000c4bab;
    }
    plVar1 = *pplVar8;
    if (*(char *)(pplVar8 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar8 + 1) = 0;
    }
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_80 = plVar1;
    (**(code **)(*plVar1 + 0x4a0))();
    FUN_00d23310();
    plVar1 = local_58;
    pcVar7 = &local_90;
    if (local_50[0] != '\0') {
      pcVar7 = local_50;
    }
    local_90 = local_50[0];
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pplVar8 = &local_68;
    (**(code **)(*plVar1 + 0x370))();
    plVar1 = local_68;
    if ((DAT_026fddb0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_026e0ab8 = FUN_00015ff0();
      _DAT_026e0aa0 = "MDMetaWindowController";
      _DAT_026e0aa8 = 0x198;
      _DAT_026e0ab0 = FUN_0006dea0;
      _DAT_026e0ac0 = 0;
      uRam00000000026e0ac8 = 0;
      _DAT_026e0ad0 = 0;
      _DAT_026e0b48 = 0;
      uRam00000000026e0b50 = 0;
      _DAT_026e0b58 = 0;
      DAT_026e0b5a = 1;
      _DAT_026e0ad8 = 0;
      uRam00000000026e0ae0 = 0;
      _DAT_026e0ae8 = 0;
      uRam00000000026e0af0 = 0;
      _DAT_026e0af8 = 0;
      uRam00000000026e0b00 = 0;
      _DAT_026e0b08 = 0;
      uRam00000000026e0b10 = 0;
      _DAT_026e0b18 = 0;
      uRam00000000026e0b20 = 0;
      _DAT_026e0b28 = 0;
      uRam00000000026e0b30 = 0;
      _DAT_026e0b38 = 0;
      uRam00000000026e0b40 = 0;
      DAT_026e0b63 = 0;
      _DAT_026e0b5b = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (longlong *)0x0) {
LAB_000c4fd7:
      pplVar8 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_000c4fd7;
    }
    plVar1 = *pplVar8;
    if (*(char *)(pplVar8 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar8 + 1) = 0;
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_90 != '\0') {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e561b0();
    if (local_58 == (longlong *)0x0) {
      bVar9 = false;
    }
    else {
      FUN_01e561b0();
      FUN_01d8f0f0();
      bVar9 = local_68 != (longlong *)0x0;
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar9) {
      FUN_01e561b0();
      FUN_01d8b010();
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*plVar1 + 0x5f8))();
    local_a0 = local_68;
    local_98 = 0;
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_98 = '\x01';
    FUN_000c5e20();
    plVar2 = local_58;
    if (local_50[0] == '\0') {
      if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
         (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      local_50[0] = '\0';
      local_58 = (longlong *)0x0;
      local_48 = plVar2;
      local_40 = 0xffffffff;
      local_38 = 0;
      while( true ) {
        lVar6 = (longlong)(int)local_40;
        iVar5 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar5);
        if (*(int *)((longlong)local_48 + 0xc) <= iVar5) break;
        local_d0 = *(longlong **)(local_48[2] + 8 + lVar6 * 8);
        local_c8 = '\0';
        local_58 = local_d0;
        (**(code **)(*plVar1 + 0x608))();
        if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50130();
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar5 = -local_40._4_4_;
          }
          else {
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar5 = 0;
          }
          local_40 = CONCAT44(iVar5,(int)local_40);
        }
      }
      FUN_000e3600();
      FUN_00d50b20();
    }
    FUN_00612250();
    plVar3 = local_58;
    plVar2 = local_80;
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00612250();
      local_b8 = '\0';
      local_c0 = plVar1;
      (**(code **)(*local_58 + 0x4b8))();
      if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_000c5300;
  }
  pplVar8 = &local_58;
  FUN_00d3ecf0();
  plVar1 = local_58;
  if ((DAT_026e85e0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_027f4bd8 = FUN_0006d940();
    _DAT_027f4bc0 = "GNRootView";
    _DAT_027f4bc8 = 0x1d0;
    _DAT_027f4bd0 = FUN_00097da0;
    _DAT_027f4be0 = 0;
    uRam00000000027f4be8 = 0;
    _DAT_027f4bf0 = 0;
    uRam00000000027f4bf8 = 0;
    _DAT_027f4c00 = 0;
    uRam00000000027f4c08 = 0;
    _DAT_027f4c10 = 0;
    uRam00000000027f4c18 = 0;
    _DAT_027f4c20 = 0;
    uRam00000000027f4c28 = 0;
    _DAT_027f4c30 = 0;
    uRam00000000027f4c38 = 0;
    _DAT_027f4c40 = 0;
    uRam00000000027f4c48 = 0;
    _DAT_027f4c50 = 0;
    uRam00000000027f4c58 = 0;
    _DAT_027f4c60 = 0;
    uRam00000000027f4c68 = 0;
    _DAT_027f4c70 = 0;
    uRam00000000027f4c78 = 0;
    _DAT_027f4c80 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_000c4aca:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_000c4aca;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_80 = plVar1;
  (**(code **)(*plVar1 + 0x4a0))();
  FUN_00d23310();
  plVar1 = local_58;
  pcVar7 = &local_90;
  if (local_50[0] != '\0') {
    pcVar7 = local_50;
  }
  local_90 = local_50[0];
  *pcVar7 = '\0';
  if ((local_50[0] != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pplVar8 = &local_68;
  (**(code **)(*plVar1 + 0x370))();
  plVar1 = local_68;
  if ((DAT_026fddb0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026e0ab8 = FUN_00015ff0();
    _DAT_026e0aa0 = "MDMetaWindowController";
    _DAT_026e0aa8 = 0x198;
    _DAT_026e0ab0 = FUN_0006dea0;
    _DAT_026e0ac0 = 0;
    uRam00000000026e0ac8 = 0;
    _DAT_026e0ad0 = 0;
    _DAT_026e0b48 = 0;
    uRam00000000026e0b50 = 0;
    _DAT_026e0b58 = 0;
    DAT_026e0b5a = 1;
    _DAT_026e0ad8 = 0;
    uRam00000000026e0ae0 = 0;
    _DAT_026e0ae8 = 0;
    uRam00000000026e0af0 = 0;
    _DAT_026e0af8 = 0;
    uRam00000000026e0b00 = 0;
    _DAT_026e0b08 = 0;
    uRam00000000026e0b10 = 0;
    _DAT_026e0b18 = 0;
    uRam00000000026e0b20 = 0;
    _DAT_026e0b28 = 0;
    uRam00000000026e0b30 = 0;
    _DAT_026e0b38 = 0;
    uRam00000000026e0b40 = 0;
    DAT_026e0b63 = 0;
    _DAT_026e0b5b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_000c4c8c:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_000c4c8c;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_90 != '\0') {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0062abf0();
  uVar10 = FUN_00521db0();
  plVar2 = local_58;
  if (local_50[0] == '\0') {
    if (((local_58 != (longlong *)0x0) && (uVar10 = FUN_00d50b00(), local_50[0] != '\0')) &&
       (local_58 != (longlong *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  local_f8 = '\0';
  local_100 = plVar1;
  (**(code **)(*plVar2 + 0x600))(uVar10,&local_100);
  plVar2 = local_58;
  if (local_50[0] == '\0') {
    if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
       (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_f0 = plVar2;
  local_e8 = '\0';
  (**(code **)(*plVar1 + 0x600))();
  if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0062abf0();
  FUN_00b34cb0();
  if (local_58 == (longlong *)0x0) {
    cVar4 = '\0';
  }
  else {
    FUN_0062abf0();
    FUN_00b34cb0();
    cVar4 = (**(code **)(*local_78 + 0x58))();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      (**(code **)(*local_78 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    (**(code **)(*local_58 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_0064dff0();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
LAB_000c5300:
  local_b0 = *unaff_RSI;
  local_a8 = '\0';
  FUN_00292f50();
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  return;
}


