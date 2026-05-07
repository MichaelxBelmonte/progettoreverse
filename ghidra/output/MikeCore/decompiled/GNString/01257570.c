// Function: FUN_01257570
// Address: 01257570
// Size: 673 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01257570(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *unaff_RSI;
  longlong **pplVar5;
  undefined4 uVar6;
  longlong local_90;
  char local_88;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar1 = local_40;
  lVar2 = DAT_027e2660;
  if (DAT_027e2660 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') goto LAB_0125772d;
  uVar6 = FUN_00d3ed20();
  local_70 = DAT_02704000;
  if (DAT_02704000 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_68 = '\x01';
  pplVar5 = &local_40;
  FUN_000175c0(uVar6,&local_70);
  plVar1 = local_40;
  if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar1 == (longlong *)0x0) {
LAB_0125766f:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0125766f;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027beb70;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_027beb70 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar2;
    local_58 = '\x01';
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_01256a50();
    }
    FUN_00d50b20();
  }
LAB_0125772d:
  local_50 = *unaff_RSI;
  local_48 = '\0';
  FUN_00d530a0();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return;
}


