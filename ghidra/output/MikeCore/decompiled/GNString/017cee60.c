// Function: FUN_017cee60
// Address: 017cee60
// Size: 514 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017cee60(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
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
  
  plVar1 = *(longlong **)(unaff_RSI + 0x58);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(param_1);
  plVar2 = plVar1;
  lVar3 = DAT_027d3860;
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar3 = DAT_027d3860, lVar7 != 0)) {
    plVar2 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
  }
  DAT_027d3860 = lVar3;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  pplVar8 = &local_50;
  local_40 = lVar3;
  (**(code **)(*plVar2 + 0x88))();
  plVar2 = local_50;
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
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_017cef37;
  }
  pplVar8 = (longlong **)&DAT_02802688;
LAB_017cef37:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  plVar2 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    *unaff_RDI = (longlong)plVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *unaff_RDI = (longlong)plVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


