// Function: FUN_0158ac20
// Address: 0158ac20
// Size: 1149 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"


/* WARNING: Removing unreachable block (ram,0x0158ace1) */
/* WARNING: Removing unreachable block (ram,0x0158aced) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0158ac20(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar6;
  undefined4 extraout_XMM0_Da;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  if (*param_2 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_000649c0();
  (**(code **)(*plVar5 + 0x18))();
  local_58 = 0;
  (**(code **)(*(longlong *)(unaff_RSI + 0x10) + 0x10))();
  FUN_00d50b00();
  local_58 = '\x01';
  local_60 = (longlong *)(unaff_RSI + 0x10);
  FUN_00db1a90();
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar5 + 0x620))();
  lVar2 = DAT_027c79d8;
  if (cVar3 == '\0') {
    local_80 = *param_2;
    local_78 = '\0';
    pplVar6 = &local_40;
    (**(code **)(*plVar5 + 0x610))(extraout_XMM0_Da,&local_80);
    plVar5 = local_40;
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
    if (plVar5 == (longlong *)0x0) {
LAB_0158ae17:
      pplVar6 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_0158ae17;
    }
    plVar5 = *pplVar6;
    if (plVar5 == (longlong *)0x0) {
      bVar1 = false;
    }
    else if (*(char *)(pplVar6 + 1) == '\0') {
      bVar1 = true;
      FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar6 + 1) = 0;
      bVar1 = true;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_0158aec6;
  }
  if (DAT_027c79d8 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  local_90 = *param_2;
  local_88 = '\0';
  pplVar6 = &local_40;
  (**(code **)(*plVar5 + 0x630))(&local_90,&local_a0);
  plVar5 = local_40;
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
  if (plVar5 == (longlong *)0x0) {
LAB_0158ad82:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0158ad82;
  }
  plVar5 = *pplVar6;
  if (plVar5 == (longlong *)0x0) {
    bVar1 = false;
  }
  else if (*(char *)(pplVar6 + 1) == '\0') {
    bVar1 = true;
    FUN_00d50b00();
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
    bVar1 = true;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
LAB_0158aec6:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (!bVar1) {
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  *unaff_RDI = (longlong)plVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return;
}


