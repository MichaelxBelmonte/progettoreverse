// Function: FUN_00655410
// Address: 00655410
// Size: 644 bytes
// Class: GNInfoController
// String references:
//   "GNInfoController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00655410(undefined4 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  longlong unaff_RDI;
  longlong *local_70;
  char local_68;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  
  lVar2 = DAT_02725a20;
  if (param_2 == 0) {
    return 1;
  }
  if (*(longlong *)(unaff_RDI + 0x80) == 0) {
    FUN_01f27fe0();
    (**(code **)(*local_70 + 0x5e0))();
    FUN_01f7e230();
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_68 == '\0') {
      return 1;
    }
    if (local_70 == (longlong *)0x0) {
      return 1;
    }
    FUN_00d50b20();
    return 1;
  }
  if (DAT_02725a20 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_50 = 0;
  local_48 = '\0';
  pplVar5 = &local_30;
  FUN_01e51a60(param_1,&local_50);
  plVar1 = local_30;
  if ((DAT_0270fbd0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026eddd8 = FUN_00015ff0();
    _DAT_026eddc0 = "GNInfoController";
    _DAT_026eddc8 = 0xa8;
    _DAT_026eddd0 = FUN_001d1e30;
    _DAT_026edde0 = 0;
    uRam00000000026edde8 = 0;
    _DAT_026eddf0 = 0;
    uRam00000000026eddf8 = 0;
    _DAT_026ede00 = 0;
    uRam00000000026ede08 = 0;
    _DAT_026ede10 = 0;
    uRam00000000026ede18 = 0;
    _DAT_026ede20 = 0;
    uRam00000000026ede28 = 0;
    _DAT_026ede30 = 0;
    uRam00000000026ede38 = 0;
    _DAT_026ede40 = 0;
    uRam00000000026ede48 = 0;
    _DAT_026ede50 = 0;
    uRam00000000026ede58 = 0;
    _DAT_026ede60 = 0;
    uRam00000000026ede68 = 0;
    _DAT_026ede70 = 0;
    uRam00000000026ede78 = 0;
    _DAT_026ede80 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_006554af;
  }
  pplVar5 = (longlong **)&DAT_02802688;
LAB_006554af:
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_01e561b0();
    local_40 = local_30;
    local_38 = 0;
    if (local_28 == '\0') {
      if (local_30 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    local_38 = '\x01';
    FUN_01f7e1a0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return 1;
}


