// Function: FUN_0078e160
// Address: 0078e160
// Size: 745 bytes
// Class: MUElementAnalyzer
// String references:
//   "MUElementAnalyzer"


/* WARNING: Removing unreachable block (ram,0x0078e276) */
/* WARNING: Removing unreachable block (ram,0x0078e27f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0078e160(void)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong **pplVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  uVar7 = FUN_00e8b020();
  plVar1 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) {
      return;
    }
    uVar7 = FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  else if (local_58 == (longlong *)0x0) {
    return;
  }
  local_50 = 0;
  local_58 = (longlong *)0x0;
  local_48 = plVar1;
  local_40 = -1;
  iStack_3c = 0;
  local_38 = 0;
  while( true ) {
    iVar4 = iStack_3c;
    if (iStack_3c != 0) {
      if (iStack_3c < 1) {
        iStack_3c = -iStack_3c;
      }
      else {
        local_40 = local_40 - iStack_3c;
        FUN_00d23690(uVar7,iStack_3c);
        local_38 = local_38 + iVar4;
        iStack_3c = 0;
      }
    }
    lVar5 = (longlong)local_40;
    local_40 = local_40 + 1;
    if (*(int *)((longlong)local_48 + 0xc) <= local_40) break;
    plVar1 = *(longlong **)(local_48[2] + 8 + lVar5 * 8);
    local_58 = plVar1;
    FUN_00e8afb0();
    cVar2 = FUN_00e34a50();
    cVar3 = FUN_00e34240();
    if (cVar2 == '\0' && cVar3 == '\0') {
      if ((DAT_026e0c38 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026e0b88 = FUN_000fddb0();
        _DAT_026e0b70 = "MUElementAnalyzer";
        _DAT_026e0b78 = 0x180;
        _DAT_026e0b80 = FUN_000fdd80;
        _DAT_026e0b90 = 0;
        uRam00000000026e0b98 = 0;
        _DAT_026e0ba0 = 0;
        _DAT_026e0c18 = 0;
        uRam00000000026e0c20 = 0;
        _DAT_026e0c28 = 0;
        DAT_026e0c2a = 1;
        _DAT_026e0ba8 = 0;
        uRam00000000026e0bb0 = 0;
        _DAT_026e0bb8 = 0;
        uRam00000000026e0bc0 = 0;
        _DAT_026e0bc8 = 0;
        uRam00000000026e0bd0 = 0;
        _DAT_026e0bd8 = 0;
        uRam00000000026e0be0 = 0;
        _DAT_026e0be8 = 0;
        uRam00000000026e0bf0 = 0;
        _DAT_026e0bf8 = 0;
        uRam00000000026e0c00 = 0;
        _DAT_026e0c08 = 0;
        uRam00000000026e0c10 = 0;
        DAT_026e0c33 = 0;
        _DAT_026e0c2b = 0;
        ___cxa_guard_release();
      }
      pplVar6 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar6 = &local_58;
        if (cVar2 == '\0') {
          pplVar6 = (longlong **)&DAT_02802688;
        }
      }
      plVar1 = local_58;
      if (*pplVar6 == (longlong *)0x0) {
        uVar7 = FUN_0079bbe0();
        pplVar6 = (longlong **)&DAT_02802688;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar6 = &local_58;
          uVar7 = extraout_XMM0_Da_00;
          if (cVar2 == '\0') {
            pplVar6 = (longlong **)&DAT_02802688;
          }
        }
        if (*pplVar6 != (longlong *)0x0) {
          uVar7 = FUN_0077b140();
        }
      }
      else {
        uVar7 = FUN_00774db0();
      }
    }
    else {
      uVar7 = FUN_0074ea80(extraout_XMM0_Da,1);
    }
  }
  FUN_00097c40();
  FUN_00d50b20();
  return;
}


