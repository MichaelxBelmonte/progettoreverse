// Function: FUN_002bf9b0
// Address: 002bf9b0
// Size: 669 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002bf9b0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  longlong *plVar6;
  longlong *local_50;
  char local_48 [8];
  char local_38 [8];
  
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar6 = unaff_RDI;
  do {
    (**(code **)(*plVar6 + 0x370))();
    if (local_50 == plVar6) {
      if (((local_38[0] == '\0') && (local_50 != (longlong *)0x0)) && (local_48[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_002bfa47;
      }
    }
    else {
      plVar6 = local_50;
      if (local_48[0] == '\0') {
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
LAB_002bfa47:
        local_38[0] = '\x01';
        pcVar4 = local_48;
      }
      *pcVar4 = '\0';
    }
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
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
    plVar5 = &DAT_02802688;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar5 = (longlong *)&stack0xffffffffffffffa8;
      if (cVar1 == '\0') {
        plVar5 = &DAT_02802688;
      }
    }
    if (*plVar5 != 0) {
      if ((local_38[0] == '\0') && (plVar6 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if (unaff_RDI == (longlong *)0x0) goto LAB_002bfbd4;
      goto LAB_002bfbcc;
    }
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
      if (unaff_RDI != (longlong *)0x0) {
LAB_002bfbcc:
        FUN_00d50b20();
      }
LAB_002bfbd4:
      if (plVar6 != (longlong *)0x0) {
        uVar3 = FUN_00644650();
        switch(uVar3) {
        case 0:
          (**(code **)(*(longlong *)unaff_RDI[0xe] + 0x918))();
          break;
        case 1:
          (**(code **)(*(longlong *)unaff_RDI[0xe] + 0x918))();
          break;
        case 2:
          (**(code **)(*(longlong *)unaff_RDI[0xe] + 0x918))();
          break;
        case 0xffffffff:
          (**(code **)(*(longlong *)unaff_RDI[0xe] + 0x918))();
        }
        FUN_00d50b20();
      }
      return;
    }
  } while( true );
}


