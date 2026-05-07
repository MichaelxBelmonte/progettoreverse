// Function: FUN_00b37610
// Address: 00b37610
// Size: 506 bytes
// Class: GNAudioProcessor
// String references:
//   "GNAudioProcessor"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b37610(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar4;
  longlong *local_58;
  char local_50;
  longlong local_38;
  char local_30;
  
  plVar1 = *(longlong **)(unaff_RSI + 0x90);
  if ((plVar1 == (longlong *)0x0) || (*(longlong *)(unaff_RSI + 0x78) == 0)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  FUN_00d50b00();
  local_38 = *(longlong *)(unaff_RSI + 0x78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_00d50b00();
  }
  local_30 = '\x01';
  pplVar4 = &local_58;
  (**(code **)(*plVar1 + 0x18))(&local_38,&stack0xffffffffffffffb8);
  plVar1 = local_58;
  if ((DAT_02723170 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_0270ba18 = FUN_00d4fe50();
    DAT_0270ba00 = "GNAudioProcessor";
    _DAT_0270ba08 = 0x90;
    _DAT_0270ba10 = FUN_00370f50;
    _DAT_0270ba20 = 0;
    uRam000000000270ba28 = 0;
    _DAT_0270ba30 = 0;
    uRam000000000270ba38 = 0;
    _DAT_0270ba40 = 0;
    uRam000000000270ba48 = 0;
    _DAT_0270ba50 = 0;
    uRam000000000270ba58 = 0;
    _DAT_0270ba60 = 0;
    uRam000000000270ba68 = 0;
    _DAT_0270ba70 = 0;
    uRam000000000270ba78 = 0;
    _DAT_0270ba80 = 0;
    uRam000000000270ba88 = 0;
    _DAT_0270ba90 = 0;
    uRam000000000270ba98 = 0;
    _DAT_0270baa0 = 0;
    uRam000000000270baa8 = 0;
    _DAT_0270bab0 = 0;
    uRam000000000270bab8 = 0;
    _DAT_0270bac0 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_00b376c6;
  }
  pplVar4 = (longlong **)&DAT_02802688;
LAB_00b376c6:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    *unaff_RDI = (longlong)plVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *unaff_RDI = (longlong)plVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RSI != 0) {
    FUN_00d50b20();
  }
  return;
}


