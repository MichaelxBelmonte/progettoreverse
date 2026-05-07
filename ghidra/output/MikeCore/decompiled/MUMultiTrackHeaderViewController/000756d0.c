// Function: FUN_000756d0
// Address: 000756d0
// Size: 815 bytes
// Class: MUMultiTrackHeaderViewController
// String references:
//   "MUMultiTrackHeaderViewController"


/* WARNING: Removing unreachable block (ram,0x000757fb) */
/* WARNING: Removing unreachable block (ram,0x00075807) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_000756d0(undefined4 param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong **pplVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  longlong *local_48;
  char local_40;
  undefined8 local_38;
  
  uVar1 = *(uint *)(unaff_RSI + 0x6c);
  uVar6 = (ulonglong)uVar1;
  lVar8 = DAT_026d83c8;
  if (((uVar1 == 3) || (lVar8 = DAT_026d83c0, uVar1 == 2)) || (lVar8 = DAT_026d83b8, uVar1 == 1)) {
    if (lVar8 != 0) {
      uVar6 = FUN_00d50b00();
      param_1 = extraout_XMM0_Da;
    }
    local_38 = CONCAT71((int7)(uVar6 >> 8),lVar8 != 0);
  }
  else {
    local_38 = 0;
    lVar8 = 0;
  }
  local_80 = 0;
  local_78 = '\0';
  pplVar7 = &local_48;
  local_50 = lVar8;
  uVar9 = FUN_01e51a60(param_1,&local_80);
  plVar2 = local_48;
  if ((DAT_02700010 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar9 = extraout_XMM0_Da_01, iVar5 != 0)) {
    _DAT_027e7e28 = FUN_00015ff0();
    DAT_027e7e10 = "MUMultiTrackHeaderViewController";
    _DAT_027e7e18 = 0x78;
    _DAT_027e7e20 = FUN_00081d20;
    _DAT_027e7e30 = 0;
    uRam00000000027e7e38 = 0;
    _DAT_027e7e40 = 0;
    _DAT_027e7eb8 = 0;
    uRam00000000027e7ec0 = 0;
    _DAT_027e7ec8 = 0;
    DAT_027e7eca = 1;
    _DAT_027e7e48 = 0;
    uRam00000000027e7e50 = 0;
    _DAT_027e7e58 = 0;
    uRam00000000027e7e60 = 0;
    _DAT_027e7e68 = 0;
    uRam00000000027e7e70 = 0;
    _DAT_027e7e78 = 0;
    uRam00000000027e7e80 = 0;
    _DAT_027e7e88 = 0;
    uRam00000000027e7e90 = 0;
    _DAT_027e7e98 = 0;
    uRam00000000027e7ea0 = 0;
    _DAT_027e7ea8 = 0;
    uRam00000000027e7eb0 = 0;
    DAT_027e7ed3 = 0;
    _DAT_027e7ecb = 0;
    uVar9 = ___cxa_guard_release();
  }
  if (plVar2 == (longlong *)0x0) {
LAB_000757aa:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar9 = extraout_XMM0_Da_00;
    if (cVar4 == '\0') goto LAB_000757aa;
  }
  plVar2 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar8 = DAT_026d83d0;
  if (DAT_026d83d0 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_70 = lVar8;
  local_68 = '\x01';
  pplVar7 = &local_48;
  FUN_01e57490(uVar9,&local_70);
  plVar3 = local_48;
  FUN_00081d60();
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_0007586e;
  }
  pplVar7 = (longlong **)&DAT_02802688;
LAB_0007586e:
  plVar3 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  lVar8 = *(longlong *)(unaff_RSI + 0x38);
  if (lVar8 == 0) {
    local_60 = 0;
  }
  else {
    FUN_00d50b00();
    local_60 = lVar8;
  }
  local_58 = '\x01';
  FUN_01d2a770();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = (longlong)plVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_38 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


