// Function: FUN_0062b480
// Address: 0062b480
// Size: 1466 bytes
// Class: MDPluginMenuViewController
// String references:
//   "MDPluginMenuViewController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062b480(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong unaff_RDI;
  longlong **pplVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 local_e8 [16];
  uint local_d8;
  undefined1 local_c8 [16];
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  if (*(longlong *)(unaff_RDI + 0xf0) != 0) {
    return;
  }
  plVar5 = (longlong *)FUN_00018320();
  (**(code **)(*plVar5 + 0x18))();
  plVar1 = *(longlong **)(unaff_RDI + 0xf0);
  if (plVar1 == plVar5) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(unaff_RDI + 0xf0) = plVar5;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar1 = *(longlong **)(unaff_RDI + 0xf0);
  local_50 = 0;
  lVar2 = *(longlong *)(unaff_RDI + 0x88);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_50 = '\x01';
  local_58 = lVar2;
  (**(code **)(*plVar1 + 0x4c8))(DAT_023dccec,DAT_023dccf4);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_38 + 0x918))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_38 + 0x948))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_38 + 0x928))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  plVar1 = local_38;
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_b8 + 0x450))();
  local_e8._0_4_ = DAT_02394298;
  if (cVar3 == '\0') {
    local_e8._0_4_ = DAT_02390124;
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_a8 + 0x450))();
  local_d8 = DAT_02394298;
  if (cVar3 == '\0') {
    local_d8 = DAT_02390124;
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_98 + 0x450))();
  local_c8._0_4_ = DAT_02394298;
  if (cVar3 == '\0') {
    local_c8._0_4_ = DAT_02390124;
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_88 + 0x450))();
  local_e8._4_4_ = 0;
  local_e8._8_8_ = _UNK_023945e8;
  local_e8._0_8_ = local_e8._0_8_ | _DAT_023945e0;
  local_d8 = local_d8 | (uint)_DAT_023945e0;
  local_c8._4_4_ = 0;
  local_c8._8_8_ = _UNK_023945e8;
  local_c8._0_8_ = local_c8._0_8_ | _DAT_023945e0;
  uVar7 = DAT_02394298;
  if (cVar3 == '\0') {
    uVar7 = DAT_02390124;
  }
  auVar10 = insertps(local_c8,ZEXT416(uVar7),0x10);
  auVar9 = insertps(local_e8,local_d8,0x10);
  (**(code **)(*plVar1 + 0x940))(auVar9._0_8_,auVar10._0_8_);
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027257c0;
  if (DAT_027257c0 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  local_68 = 0;
  local_60 = '\0';
  pplVar6 = &local_38;
  FUN_00176e40(&local_68,&local_78);
  plVar1 = local_38;
  if ((DAT_0271ca50 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_02708f48 = FUN_00015ff0();
    _DAT_02708f30 = "MDPluginMenuViewController";
    _DAT_02708f38 = 0x80;
    _DAT_02708f40 = FUN_004ad2e0;
    _DAT_02708f50 = 0;
    uRam0000000002708f58 = 0;
    _DAT_02708f60 = 0;
    uRam0000000002708f68 = 0;
    _DAT_02708f70 = 0;
    uRam0000000002708f78 = 0;
    _DAT_02708f80 = 0;
    uRam0000000002708f88 = 0;
    _DAT_02708f90 = 0;
    uRam0000000002708f98 = 0;
    _DAT_02708fa0 = 0;
    uRam0000000002708fa8 = 0;
    _DAT_02708fb0 = 0;
    uRam0000000002708fb8 = 0;
    _DAT_02708fc0 = 0;
    uRam0000000002708fc8 = 0;
    _DAT_02708fd0 = 0;
    uRam0000000002708fd8 = 0;
    _DAT_02708fe0 = 0;
    uRam0000000002708fe8 = 0;
    _DAT_02708ff0 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_0062b822;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_0062b822:
  plVar5 = *(longlong **)(unaff_RDI + 0xf8);
  plVar1 = *pplVar6;
  if (plVar5 != plVar1) {
    if (*(char *)(pplVar6 + 1) == '\0') {
      if (plVar1 == (longlong *)0x0) {
        *(undefined8 *)(unaff_RDI + 0xf8) = 0;
      }
      else {
        FUN_00d50b00();
        plVar5 = *(longlong **)(unaff_RDI + 0xf8);
        *(longlong **)(unaff_RDI + 0xf8) = *pplVar6;
      }
    }
    else {
      *(undefined1 *)(pplVar6 + 1) = 0;
      *(longlong **)(unaff_RDI + 0xf8) = plVar1;
    }
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x630))();
  plVar1 = *(longlong **)(unaff_RDI + 0x88);
  uVar8 = FUN_00176c40();
  local_48 = local_38;
  local_40 = 0;
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_40 = '\x01';
  (**(code **)(*plVar1 + 0x9e8))(uVar8,0);
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0xf8) != 0) {
    FUN_004aa180();
  }
  return;
}


