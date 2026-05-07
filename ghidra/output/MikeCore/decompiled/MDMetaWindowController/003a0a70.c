// Function: FUN_003a0a70
// Address: 003a0a70
// Size: 1049 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_003a0a70(undefined8 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar6;
  longlong local_88;
  char local_80;
  undefined8 *local_78;
  char local_70;
  longlong *plVar7;
  char local_60;
  longlong *plVar8;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar7 = unaff_RSI;
  do {
    (**(code **)(*plVar7 + 0x370))();
    if (local_48 == plVar7) {
      if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_003a0b37;
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
LAB_003a0b37:
        local_38[0] = '\x01';
        pcVar4 = local_40;
      }
      *pcVar4 = '\0';
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
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
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar5 = (longlong *)&stack0xffffffffffffff98;
      if (cVar1 == '\0') {
        plVar5 = &DAT_02802688;
      }
    }
    if (*plVar5 != 0) {
      if ((local_38[0] == '\0') && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      plVar5 = plVar7;
      if (unaff_RSI == (longlong *)0x0) goto LAB_003a0cc3;
      goto LAB_003a0cbe;
    }
  } while (plVar7 != (longlong *)0x0);
  plVar5 = (longlong *)0x0;
  if (unaff_RSI != (longlong *)0x0) {
LAB_003a0cbe:
    FUN_00d50b20();
  }
LAB_003a0cc3:
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x5d8))();
    plVar8 = local_48;
    if (local_40[0] != '\0') goto LAB_003a0d16;
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_003a0d16;
    }
  }
  plVar8 = (longlong *)0x0;
LAB_003a0d16:
  if (0 < param_2) {
    do {
      uVar6 = FUN_006f3f00();
      local_88 = 0;
      local_80 = '\0';
      FUN_0078a130(uVar6,&local_88);
      if (local_40[0] == '\0') {
        if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_40[0] = '\0';
      FUN_00d21140();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  FUN_006f4810();
  local_70 = '\0';
  local_78 = puVar3;
  FUN_002ea230();
  if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


