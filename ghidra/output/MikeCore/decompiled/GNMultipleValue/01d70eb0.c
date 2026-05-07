// Function: FUN_01d70eb0
// Address: 01d70eb0
// Size: 914 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x01d710d7) */
/* WARNING: Removing unreachable block (ram,0x01d710e0) */
/* WARNING: Removing unreachable block (ram,0x01d70f7b) */
/* WARNING: Removing unreachable block (ram,0x01d70f84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d70eb0(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_60;
  char local_58;
  
  plVar5 = (longlong *)*unaff_RSI;
  if (plVar5 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01d70f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_RDI + 0x918))();
    return;
  }
  if ((DAT_0277a3a0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026d3c38 = FUN_00d4fe50();
    _DAT_026d3c20 = "GNMultipleValue";
    _DAT_026d3c28 = 0x18;
    _DAT_026d3c30 = FUN_00050c70;
    _DAT_026d3c40 = 0;
    uRam00000000026d3c48 = 0;
    _DAT_026d3c50 = 0;
    uRam00000000026d3c58 = 0;
    _DAT_026d3c60 = 0;
    uRam00000000026d3c68 = 0;
    _DAT_026d3c70 = 0;
    uRam00000000026d3c78 = 0;
    _DAT_026d3c80 = 0;
    uRam00000000026d3c88 = 0;
    _DAT_026d3c90 = 0;
    uRam00000000026d3c98 = 0;
    _DAT_026d3ca0 = 0;
    uRam00000000026d3ca8 = 0;
    _DAT_026d3cb0 = 0;
    uRam00000000026d3cb8 = 0;
    _DAT_026d3cc0 = 0;
    uRam00000000026d3cc8 = 0;
    _DAT_026d3cd0 = 0;
    uRam00000000026d3cd8 = 0;
    _DAT_026d3ce0 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar5 + 0x360))();
  cVar3 = FUN_00e85ea0();
  plVar5 = unaff_RSI;
  if (cVar3 == '\0') {
    plVar5 = &DAT_02802688;
  }
  cVar3 = (char)plVar5[1];
  if ((cVar3 == '\0') || (*plVar5 == 0)) {
    if (*plVar5 != 0) goto LAB_01d70f4b;
  }
  else {
    FUN_00d50b00();
LAB_01d70f4b:
    FUN_00e987e0();
    if (local_58 == '\0') {
      if (local_60 == 0) goto LAB_01d70fb7;
      FUN_00d50b00();
    }
    else if (local_60 == 0) {
LAB_01d70fb7:
      (**(code **)(*unaff_RDI + 0x918))();
      if (cVar3 == '\0') {
        return;
      }
      FUN_00d50b20();
      return;
    }
    lVar1 = *unaff_RSI;
    lVar2 = unaff_RSI[1];
    if (lVar1 == local_60) {
      if ((char)lVar2 == '\0') {
        FUN_00d50b00();
        goto LAB_01d70fed;
      }
    }
    else {
      FUN_00d50b00();
      *unaff_RSI = local_60;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01d70fed:
      *(undefined1 *)(unaff_RSI + 1) = 1;
    }
    FUN_00d50b20();
    if (cVar3 != '\0') {
      FUN_00d50b20();
    }
  }
  plVar5 = (longlong *)*unaff_RSI;
  FUN_00053ac0();
  if (plVar5 == (longlong *)0x0) {
LAB_01d71038:
    plVar5 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar5 = unaff_RSI;
    if (cVar3 == '\0') goto LAB_01d71038;
  }
  if (*plVar5 != 0) {
    FUN_00d45870();
    (**(code **)(*unaff_RDI + 0x918))();
    return;
  }
  plVar5 = (longlong *)*unaff_RSI;
  if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01d710af;
  }
  unaff_RSI = &DAT_02802688;
LAB_01d710af:
  if (*unaff_RSI != 0) {
    (**(code **)(*unaff_RDI + 0x968))();
  }
  return;
}


