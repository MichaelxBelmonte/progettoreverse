// Function: FUN_01f91d90
// Address: 01f91d90
// Size: 1141 bytes
// Class: GNShortCutOutlineController
// String references:
//   "GNShortCutOutlineController"
//   "GNActionRegistration"


/* WARNING: Removing unreachable block (ram,0x01f9207b) */
/* WARNING: Removing unreachable block (ram,0x01f91fa0) */
/* WARNING: Removing unreachable block (ram,0x01f91fad) */
/* WARNING: Removing unreachable block (ram,0x01f91eb7) */
/* WARNING: Removing unreachable block (ram,0x01f91ec0) */
/* WARNING: Removing unreachable block (ram,0x01f91ef1) */
/* WARNING: Removing unreachable block (ram,0x01f91efa) */
/* WARNING: Removing unreachable block (ram,0x01f92084) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f91d90(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong **pplVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da;
  longlong *local_40;
  char local_38;
  
  pplVar7 = &local_40;
  (**(code **)(*unaff_RDI + 0x370))();
  plVar1 = local_40;
  if ((DAT_026d5790 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_028010b8 = FUN_00015ff0();
    _DAT_028010a0 = "GNShortCutOutlineController";
    _DAT_028010a8 = 0xa0;
    _DAT_028010b0 = FUN_0005a9c0;
    _DAT_028010c0 = 0;
    uRam00000000028010c8 = 0;
    _DAT_028010d0 = 0;
    uRam00000000028010d8 = 0;
    _DAT_028010e0 = 0;
    uRam00000000028010e8 = 0;
    _DAT_028010f0 = 0;
    uRam00000000028010f8 = 0;
    _DAT_02801100 = 0;
    uRam0000000002801108 = 0;
    _DAT_02801110 = 0;
    uRam0000000002801118 = 0;
    _DAT_02801120 = 0;
    uRam0000000002801128 = 0;
    _DAT_02801130 = 0;
    uRam0000000002801138 = 0;
    _DAT_02801140 = 0;
    uRam0000000002801148 = 0;
    _DAT_02801150 = 0;
    uRam0000000002801158 = 0;
    _DAT_02801160 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01f91df0:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_01f91df0;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 != 2) || (plVar1 == (longlong *)0x0)) {
    FUN_01ed9a40();
    if ((*unaff_RSI == 0) ||
       ((iVar6 = FUN_01d3a5a0(), iVar6 != 1 || (iVar6 = FUN_01d3b630(), iVar6 != 1))))
    goto LAB_01f92095;
    FUN_01d3abf0();
    uVar8 = FUN_01e466c0();
    FUN_01dd4960();
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) goto LAB_01f91fec;
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01f91fd8:
      if ((*(uint *)(plVar3 + 3) & 0xfffffffc) == 4) {
        iVar6 = *(int *)plVar3[2];
      }
      else {
        iVar6 = -1;
      }
      bVar2 = false;
      bVar4 = false;
      if ((int)unaff_RDI[0x5c] != iVar6) goto LAB_01f91ffd;
LAB_01f92025:
      if (iVar6 != -1) {
        FUN_01dcf710();
        uVar9 = FUN_01e0d030();
        cVar5 = FUN_00d05410(uVar8,uVar9,param_2);
        if ((cVar5 != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_01f89e00(extraout_XMM0_Da,1);
        }
      }
    }
    else {
      if (local_40 != (longlong *)0x0) goto LAB_01f91fd8;
LAB_01f91fec:
      iVar6 = -1;
      bVar2 = true;
      bVar4 = true;
      if ((int)unaff_RDI[0x5c] == -1) goto LAB_01f92025;
LAB_01f91ffd:
      bVar2 = bVar4;
      *(int *)(unaff_RDI + 0x5c) = iVar6;
      (**(code **)(*unaff_RDI + 0x620))();
    }
    if (!bVar2) {
      FUN_00d50b20();
    }
    goto LAB_01f92095;
  }
  pplVar7 = &local_40;
  FUN_01eda0f0();
  plVar3 = local_40;
  if ((DAT_026e7b78 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_026e7ac8 = FUN_00d4fe50();
    _DAT_026e7ab0 = "GNActionRegistration";
    _DAT_026e7ab8 = 0x38;
    _DAT_026e7ac0 = FUN_001a8af0;
    _DAT_026e7ad0 = 0;
    uRam00000000026e7ad8 = 0;
    _DAT_026e7ae0 = 0;
    uRam00000000026e7ae8 = 0;
    _DAT_026e7af0 = 0;
    uRam00000000026e7af8 = 0;
    _DAT_026e7b00 = 0;
    uRam00000000026e7b08 = 0;
    _DAT_026e7b10 = 0;
    uRam00000000026e7b18 = 0;
    _DAT_026e7b20 = 0;
    uRam00000000026e7b28 = 0;
    _DAT_026e7b30 = 0;
    uRam00000000026e7b38 = 0;
    _DAT_026e7b40 = 0;
    uRam00000000026e7b48 = 0;
    _DAT_026e7b50 = 0;
    uRam00000000026e7b58 = 0;
    _DAT_026e7b60 = 0;
    uRam00000000026e7b68 = 0;
    _DAT_026e7b70 = 0;
    ___cxa_guard_release();
  }
  if (plVar3 == (longlong *)0x0) {
LAB_01f91e86:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_01f91e86;
  }
  if (*pplVar7 == (longlong *)0x0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = FUN_01f8be80();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    FUN_01f8b430();
  }
LAB_01f92095:
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


