// Function: FUN_01892140
// Address: 01892140
// Size: 630 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01892140(pthread_key_t param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar8;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RSI + 0x70) != 0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018babe0();
    return;
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x48);
  if (lVar1 != 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    FUN_00d50b00();
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
  plVar2 = *(longlong **)(unaff_RSI + 0x68);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(param_1);
  plVar3 = plVar2;
  lVar1 = DAT_027d8ea8;
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar1 = DAT_027d8ea8, lVar7 != 0)) {
    plVar3 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
  }
  DAT_027d8ea8 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  pplVar8 = &local_50;
  local_40 = lVar1;
  (**(code **)(*plVar3 + 0x88))();
  plVar3 = local_50;
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
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_0189228a;
  }
  pplVar8 = (longlong **)&DAT_02802688;
LAB_0189228a:
  plVar3 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    *unaff_RDI = (longlong)plVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return;
}


