// Function: FUN_003696e0
// Address: 003696e0
// Size: 515 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_003696e0(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  longlong **pplVar5;
  ulonglong uVar6;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01f27fe0();
  FUN_01f2e7e0();
  plVar1 = local_48;
  pcVar4 = local_38;
  if (local_40[0] != '\0') {
    pcVar4 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar4 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    uVar6 = 0;
    goto LAB_0036980c;
  }
  pplVar5 = &local_48;
  FUN_01e5c650();
  plVar1 = local_48;
  if (DAT_026fddb0 == '\0') {
    iVar3 = ___cxa_guard_acquire();
    if (iVar3 != 0) {
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
  }
  if (plVar1 == (longlong *)0x0) {
LAB_0036979e:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_0036979e;
  }
  plVar1 = *pplVar5;
  local_58 = *(char *)(pplVar5 + 1);
  pplVar5 = pplVar5 + 1;
  if (local_58 == '\0') {
    pplVar5 = (longlong **)&local_58;
  }
  *(undefined1 *)pplVar5 = 0;
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar1 != (longlong *)0x0) && (param_2 != '\0')) {
    FUN_0064dc10();
  }
  uVar6 = CONCAT71((int7)((ulonglong)pplVar5 >> 8),plVar1 != (longlong *)0x0);
  if ((local_58 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
LAB_0036980c:
  return uVar6 & 0xffffffff;
}


