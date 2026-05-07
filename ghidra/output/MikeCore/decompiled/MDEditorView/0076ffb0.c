// Function: FUN_0076ffb0
// Address: 0076ffb0
// Size: 705 bytes
// Class: MDEditorView
// String references:
//   "MDEditorView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076ffb0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong unaff_RDI;
  longlong **pplVar5;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x70) == 0) {
    return;
  }
  FUN_00d50b00();
  FUN_00d50b20();
  pplVar5 = &local_40;
  FUN_00d3ecf0();
  plVar1 = local_40;
  FUN_000829c0();
  if (plVar1 == (longlong *)0x0) {
LAB_0077001f:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0077001f;
  }
  plVar1 = *pplVar5;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(unaff_RDI + 0x70);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00324fe0();
    if (lVar2 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  pplVar5 = &local_40;
  FUN_00d3ecf0();
  plVar1 = local_40;
  if ((DAT_0271a0b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_0272a1e8 = FUN_000914a0();
    _DAT_0272a1d0 = "MDEditorView";
    _DAT_0272a1d8 = 0x560;
    _DAT_0272a1e0 = FUN_0034df50;
    _DAT_0272a1f0 = 0;
    uRam000000000272a1f8 = 0;
    _DAT_0272a200 = 0;
    _DAT_0272a278 = 0;
    uRam000000000272a280 = 0;
    _DAT_0272a288 = 0;
    DAT_0272a28a = 1;
    _DAT_0272a208 = 0;
    uRam000000000272a210 = 0;
    _DAT_0272a218 = 0;
    uRam000000000272a220 = 0;
    _DAT_0272a228 = 0;
    uRam000000000272a230 = 0;
    _DAT_0272a238 = 0;
    uRam000000000272a240 = 0;
    _DAT_0272a248 = 0;
    uRam000000000272a250 = 0;
    _DAT_0272a258 = 0;
    uRam000000000272a260 = 0;
    _DAT_0272a268 = 0;
    uRam000000000272a270 = 0;
    DAT_0272a293 = 0;
    _DAT_0272a28b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_007700ba:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_007700ba;
  }
  plVar1 = *pplVar5;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(unaff_RDI + 0x70);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00324fe0();
    if (lVar2 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  pplVar5 = &local_40;
  FUN_00d3ecf0();
  plVar1 = local_40;
  FUN_0034d920();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00770154;
  }
  pplVar5 = (longlong **)&DAT_02802688;
LAB_00770154:
  plVar1 = *pplVar5;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(unaff_RDI + 0x70);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00324fe0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


