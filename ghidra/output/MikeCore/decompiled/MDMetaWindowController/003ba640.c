// Function: FUN_003ba640
// Address: 003ba640
// Size: 1251 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003ba640(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong *plVar4;
  char unaff_SIL;
  longlong *unaff_RDI;
  longlong *plVar5;
  longlong in_stack_ffffffffffffff80;
  char local_78;
  longlong *local_58;
  char local_50 [32];
  
  FUN_00075b90();
  if (local_78 == '\0') {
    if (in_stack_ffffffffffffff80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  FUN_004f9670();
  local_50[8] = local_50[0];
  pcVar3 = local_50 + 8;
  if (local_50[0] != '\0') {
    pcVar3 = local_50;
  }
  *pcVar3 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (in_stack_ffffffffffffff80 != 0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (in_stack_ffffffffffffff80 != 0)) {
    FUN_00d50b20();
  }
  FUN_003ba530();
  local_50[0x10] = local_50[0];
  pcVar3 = local_50 + 0x10;
  if (local_50[0] != '\0') {
    pcVar3 = local_50;
  }
  *pcVar3 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 == (longlong *)0x0) goto LAB_003baac7;
  cVar1 = FUN_003b7990();
  if (cVar1 != '\0') {
    FUN_003b7d00();
  }
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_58 + 0x450))();
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    FUN_00d50b00();
    local_50[0x18] = '\0';
    plVar5 = unaff_RDI;
    do {
      (**(code **)(*plVar5 + 0x370))();
      if (local_58 == plVar5) {
        if (((local_50[0x18] == '\0') && (local_58 != (longlong *)0x0)) && (local_50[0] != '\0')) {
          local_50[0x18] = 1;
          goto LAB_003ba827;
        }
      }
      else {
        plVar5 = local_58;
        if (local_50[0] == '\0') {
          if (local_50[0x18] == '\0') {
            pcVar3 = local_50 + 0x18;
          }
          else {
            FUN_00d50b20();
            pcVar3 = local_50 + 0x18;
          }
        }
        else {
          if (local_50[0x18] != '\0') {
            FUN_00d50b20();
          }
          local_50[0x18] = 1;
LAB_003ba827:
          local_50[0x18] = '\x01';
          pcVar3 = local_50;
        }
        *pcVar3 = '\0';
      }
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((DAT_026fddb0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
      plVar4 = &DAT_02802688;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x360))();
        cVar1 = FUN_00e85ea0();
        plVar4 = (longlong *)&stack0xffffffffffffff80;
        if (cVar1 == '\0') {
          plVar4 = &DAT_02802688;
        }
      }
      if (*plVar4 != 0) {
        if ((local_50[0x18] == '\0') && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        goto LAB_003ba99c;
      }
    } while (plVar5 != (longlong *)0x0);
    plVar5 = (longlong *)0x0;
LAB_003ba99c:
    FUN_00d50b20();
    if (plVar5 != (longlong *)0x0) {
      FUN_0063f230();
      if (local_50[0] == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_003ba9f2;
        }
      }
      else if (local_58 != (longlong *)0x0) {
LAB_003ba9f2:
        FUN_00228b30();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  if (((longlong *)unaff_RDI[0x10] != (longlong *)0x0) &&
     (((**(code **)(*(longlong *)unaff_RDI[0x10] + 0x998))(), unaff_SIL == '\0' ||
      (cVar1 = (**(code **)(*(longlong *)unaff_RDI[0x10] + 0xa78))(), cVar1 == '\0')))) {
    iVar2 = FUN_003b7980();
    if (iVar2 == 2) {
      (**(code **)(*(longlong *)unaff_RDI[0x10] + 0x918))();
    }
    else {
      (**(code **)(*(longlong *)unaff_RDI[0x10] + 0x918))();
    }
  }
  if (((longlong *)unaff_RDI[0x11] != (longlong *)0x0) &&
     (((**(code **)(*(longlong *)unaff_RDI[0x11] + 0x998))(), unaff_SIL == '\0' ||
      (cVar1 = (**(code **)(*(longlong *)unaff_RDI[0x11] + 0xa78))(), cVar1 == '\0')))) {
    plVar5 = (longlong *)unaff_RDI[0x11];
    FUN_003b7980();
    (**(code **)(*plVar5 + 0x918))();
  }
LAB_003baac7:
  FUN_003bad90();
  FUN_01d243a0();
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50[0x10] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50[8] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


