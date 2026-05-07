// Function: FUN_001381c0
// Address: 001381c0
// Size: 998 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001381c0(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  byte bVar6;
  longlong *plVar7;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_003baf40();
  FUN_003ba620();
  if (local_40[0] == '\0') {
    if (local_48 == (longlong *)0x0) goto LAB_00138402;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (longlong *)0x0) {
LAB_00138402:
    bVar6 = 0;
    lVar1 = unaff_RDI[0x17];
    goto joined_r0x001384c1;
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar7 = unaff_RDI;
  do {
    (**(code **)(*plVar7 + 0x370))();
    if (local_48 == plVar7) {
      if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_001382a7;
      }
    }
    else {
      plVar7 = local_48;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar4 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar4 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_001382a7:
        local_38[0] = '\x01';
        pcVar4 = local_40;
      }
      *pcVar4 = '\0';
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_026fddb0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
    plVar5 = &DAT_02802688;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar5 = (longlong *)&stack0xffffffffffffffa8;
      if (cVar2 == '\0') {
        plVar5 = &DAT_02802688;
      }
    }
    if (*plVar5 != 0) {
      plVar5 = plVar7;
      if ((local_38[0] == '\0') && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      goto joined_r0x00138438;
    }
  } while (plVar7 != (longlong *)0x0);
  plVar5 = (longlong *)0x0;
joined_r0x00138438:
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) {
    bVar6 = 0;
  }
  else {
    FUN_0062abf0();
    FUN_0051be00();
    bVar6 = 1;
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  lVar1 = unaff_RDI[0x17];
joined_r0x001384c1:
  if (lVar1 != 0) {
    FUN_01e40eb0();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((bool)(local_48 != (longlong *)0x0 & (bVar6 ^ 1))) {
      (**(code **)(*(longlong *)unaff_RDI[0x17] + 0x478))();
    }
    else {
      FUN_01e40eb0();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((bool)(local_48 == (longlong *)0x0 & bVar6)) {
        FUN_01e53c20();
        lVar1 = unaff_RDI[0x17];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*local_48 + 0x450))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}


