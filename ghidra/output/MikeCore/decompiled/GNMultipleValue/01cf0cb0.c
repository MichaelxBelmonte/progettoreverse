// Function: FUN_01cf0cb0
// Address: 01cf0cb0
// Size: 1257 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x01cf0d5c) */
/* WARNING: Removing unreachable block (ram,0x01cf0d65) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf0cb0(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_90;
  char local_88;
  longlong *local_48;
  char local_40;
  
  plVar6 = (longlong *)*unaff_RSI;
  if ((DAT_0277a3a0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  if (plVar6 == (longlong *)0x0) {
LAB_01cf0d00:
    plVar6 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar6 = unaff_RSI;
    if (cVar3 == '\0') goto LAB_01cf0d00;
  }
  cVar3 = (char)plVar6[1];
  if ((cVar3 == '\0') || (*plVar6 == 0)) {
    if (*plVar6 != 0) goto LAB_01cf0d2c;
  }
  else {
    FUN_00d50b00();
LAB_01cf0d2c:
    FUN_00e987e0();
    if (local_40 == '\0') {
      if (local_48 == (longlong *)0x0) goto LAB_01cf0d98;
      FUN_00d50b00();
    }
    else if (local_48 == (longlong *)0x0) {
LAB_01cf0d98:
      FUN_00d46530();
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      cVar4 = FUN_00e98920();
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        (**(code **)(*unaff_RDI + 0x918))();
      }
      else {
        (**(code **)(*unaff_RDI + 0x918))();
      }
      if (cVar3 == '\0') {
        return;
      }
      FUN_00d50b20();
      return;
    }
    plVar6 = (longlong *)*unaff_RSI;
    lVar1 = unaff_RSI[1];
    if (plVar6 == local_48) {
      if ((char)lVar1 == '\0') {
        FUN_00d50b00();
        goto LAB_01cf0dd3;
      }
    }
    else {
      FUN_00d50b00();
      *unaff_RSI = (longlong)local_48;
      if (((char)lVar1 != '\0') && (plVar6 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01cf0dd3:
      *(undefined1 *)(unaff_RSI + 1) = 1;
    }
    FUN_00d50b20();
    if (cVar3 != '\0') {
      FUN_00d50b20();
    }
  }
  plVar6 = (longlong *)*unaff_RSI;
  if (plVar6 == (longlong *)0x0) {
    (**(code **)(*unaff_RDI + 0x918))();
    return;
  }
  FUN_00053ac0();
  (**(code **)(*plVar6 + 0x360))();
  cVar3 = FUN_00e85ea0();
  plVar6 = unaff_RSI;
  if (cVar3 == '\0') {
    plVar6 = &DAT_02802688;
  }
  if (*plVar6 != 0) {
    FUN_00d45870();
    (**(code **)(*unaff_RDI + 0x918))();
    return;
  }
  plVar6 = (longlong *)*unaff_RSI;
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
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01cf0e9f;
  }
  unaff_RSI = &DAT_02802688;
LAB_01cf0e9f:
  if (*unaff_RSI == 0) {
    (**(code **)(*unaff_RDI + 0x918))();
  }
  else {
    FUN_00d99d60();
    lVar1 = DAT_0277ddb8;
    if (DAT_0277ddb8 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_48 + 0x50))();
    if (cVar3 == '\0') {
      FUN_00d99d60();
      lVar2 = DAT_027eeee8;
      if (DAT_027eeee8 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*local_90 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x918))();
  }
  return;
}


