// Function: FUN_01dae3c0
// Address: 01dae3c0
// Size: 866 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dae3c0(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_38;
  char local_30;
  
  plVar4 = (longlong *)*unaff_RSI;
  if ((DAT_0277a3a0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  if (plVar4 == (longlong *)0x0) {
LAB_01dae40d:
    plVar4 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = unaff_RSI;
    if (cVar2 == '\0') goto LAB_01dae40d;
  }
  lVar1 = plVar4[1];
  if (((char)lVar1 != '\0') && (*plVar4 != 0)) {
    FUN_00d50b00();
LAB_01dae434:
    FUN_00e991a0();
    (**(code **)(*unaff_RDI + 0x928))();
    if ((char)lVar1 != '\0') {
      FUN_00d50b20();
    }
    return;
  }
  if (*plVar4 != 0) goto LAB_01dae434;
  plVar4 = (longlong *)*unaff_RSI;
  FUN_00053ac0();
  if (plVar4 == (longlong *)0x0) {
LAB_01dae48c:
    plVar4 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = unaff_RSI;
    if (cVar2 == '\0') goto LAB_01dae48c;
  }
  if (*plVar4 != 0) {
    FUN_00d459e0();
    goto LAB_01dae4f0;
  }
  plVar4 = (longlong *)*unaff_RSI;
  if ((DAT_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  if (plVar4 == (longlong *)0x0) {
LAB_01dae4db:
    unaff_RSI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01dae4db;
  }
  if (*unaff_RSI == 0) {
    (**(code **)(*unaff_RDI + 0x990))();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != 0) {
      (**(code **)(*unaff_RDI + 0x990))();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_00c71d60();
      (**(code **)(*unaff_RDI + 0x928))();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if (local_30 == '\0') {
        return;
      }
      if (local_38 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    (**(code **)(*unaff_RDI + 0xac0))();
  }
  else {
    FUN_00d8d7b0();
  }
LAB_01dae4f0:
  (**(code **)(*unaff_RDI + 0x928))();
  return;
}


