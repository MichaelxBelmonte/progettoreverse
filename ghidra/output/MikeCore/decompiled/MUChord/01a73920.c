// Function: FUN_01a73920
// Address: 01a73920
// Size: 647 bytes
// Class: MUChord
// String references:
//   "MUChord"


/* WARNING: Removing unreachable block (ram,0x01a73954) */
/* WARNING: Removing unreachable block (ram,0x01a7395d) */
/* WARNING: Removing unreachable block (ram,0x01a73ab7) */
/* WARNING: Removing unreachable block (ram,0x01a73ac0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a73920(pthread_key_t param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  uVar6 = FUN_01b7c310();
  if (*(char *)(unaff_RDI + 0x201) == '\0') {
    return;
  }
  plVar1 = (longlong *)*unaff_RSI;
  if ((DAT_02794b40 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), uVar6 = extraout_XMM0_Da_00, iVar4 != 0)) {
    _DAT_02794a90 = FUN_00d4fe50();
    _DAT_02794a78 = "MUChord";
    _DAT_02794a80 = 0x20;
    param_1 = 0x1113770;
    _DAT_02794a88 = FUN_01113770;
    _DAT_02794a98 = 0;
    uRam0000000002794aa0 = 0;
    _DAT_02794aa8 = 0;
    _DAT_02794b20 = 0;
    uRam0000000002794b28 = 0;
    _DAT_02794b30 = 0;
    DAT_02794b32 = 2;
    _DAT_02794ab0 = 0;
    uRam0000000002794ab8 = 0;
    _DAT_02794ac0 = 0;
    uRam0000000002794ac8 = 0;
    _DAT_02794ad0 = 0;
    uRam0000000002794ad8 = 0;
    _DAT_02794ae0 = 0;
    uRam0000000002794ae8 = 0;
    _DAT_02794af0 = 0;
    uRam0000000002794af8 = 0;
    _DAT_02794b00 = 0;
    uRam0000000002794b08 = 0;
    _DAT_02794b10 = 0;
    uRam0000000002794b18 = 0;
    DAT_02794b3b = 0;
    _DAT_02794b33 = 0;
    uVar6 = ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01a739a6:
    unaff_RSI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar6 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_01a739a6;
  }
  lVar2 = unaff_RSI[1];
  if (((char)lVar2 == '\0') || (*unaff_RSI == 0)) {
    if (*unaff_RSI == 0) {
      return;
    }
  }
  else {
    uVar6 = FUN_00d50b00();
  }
  if (*(longlong *)(unaff_RDI + 0x1f8) == 0) {
    local_48 = '\0';
    local_50 = 0;
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_01510b20(0,param_2,0,0);
    local_38 = 0;
    if (local_48 != '\0') {
      local_40 = local_50;
      local_48 = '\0';
      goto LAB_01a73a79;
    }
    if (local_50 != 0) {
      uVar6 = FUN_00d50b00();
      local_40 = local_50;
      goto LAB_01a73a79;
    }
  }
  local_40 = 0;
LAB_01a73a79:
  local_38 = '\x01';
  FUN_01b82620(uVar6,&local_40);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
  return;
}


