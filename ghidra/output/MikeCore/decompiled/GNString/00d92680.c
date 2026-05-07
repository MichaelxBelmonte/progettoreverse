// Function: FUN_00d92680
// Address: 00d92680
// Size: 693 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00d92680(undefined8 param_1,uint *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar7;
  longlong local_38;
  undefined1 local_30;
  
  plVar1 = (longlong *)*unaff_RDI;
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
  if (plVar1 == (longlong *)0x0) {
LAB_00d926cd:
    unaff_RDI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00d926cd;
  }
  lVar2 = *unaff_RDI;
  plVar1 = (longlong *)*unaff_RSI;
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
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_00d92714;
  }
  unaff_RSI = &DAT_02802688;
LAB_00d92714:
  lVar3 = *unaff_RSI;
  if (lVar2 == lVar3) {
    uVar6 = 0;
  }
  else {
    if (param_2 == (uint *)0x0) {
      uVar7 = 2;
    }
    else {
      uVar7 = *param_2;
    }
    if (lVar2 == 0) {
      uVar6 = 0xffffffff;
    }
    else if (lVar3 == 0) {
      uVar6 = 1;
    }
    else {
      if ((*(int *)(lVar2 + 0x20) == -1) && (*(longlong *)(lVar2 + 0x10) != 0)) {
        FUN_00e7dde0();
      }
      FUN_00e7b4e0();
      local_30 = 0;
      local_38 = lVar3;
      uVar6 = FUN_00d92950((uVar7 & 0xfffffffe) == 2 | 8,&local_38);
    }
    if ((uVar7 & 0xfffffffd) == 1) {
      if ((int)uVar6 == -1) {
        uVar6 = 1;
      }
      else if ((int)uVar6 == 1) {
        uVar6 = 0xffffffff;
      }
    }
  }
  return uVar6;
}


