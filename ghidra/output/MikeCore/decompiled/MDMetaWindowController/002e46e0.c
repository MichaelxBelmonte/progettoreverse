// Function: FUN_002e46e0
// Address: 002e46e0
// Size: 864 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_002e46e0(void)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar6;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00275ab0();
  *plVar3 = (longlong)&DAT_024e31c0;
  plVar3[2] = (longlong)&DAT_024e3c40;
  plVar3[0x27] = (longlong)&DAT_024e3c80;
  *(undefined1 *)((longlong)plVar3 + 0x1ae) = 0;
  plVar3[0x36] = 0;
  plVar3[0x37] = 0;
  plVar3[0x38] = 0;
  plVar3[0x39] = 0;
  *(undefined1 *)(plVar3 + 0x3a) = 0;
  (*DAT_024e31d8)();
  (**(code **)(*plVar3 + 0x4d0))(0,_DAT_023b1e60);
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar6 = unaff_RSI;
  do {
    (**(code **)(*plVar6 + 0x370))();
    if (local_48 == plVar6) {
      if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_002e47f7;
      }
    }
    else {
      plVar6 = local_48;
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
LAB_002e47f7:
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
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar5 = (longlong *)&stack0xffffffffffffff90;
      if (cVar1 == '\0') {
        plVar5 = &DAT_02802688;
      }
    }
    if (*plVar5 != 0) {
      if ((local_38[0] == '\0') && (plVar6 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if (unaff_RSI == (longlong *)0x0) goto LAB_002e498c;
      goto LAB_002e4984;
    }
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
      if (unaff_RSI != (longlong *)0x0) {
LAB_002e4984:
        FUN_00d50b20();
      }
LAB_002e498c:
      FUN_00756eb0();
      plVar5 = local_48 + 2;
      if (local_48 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
      }
      if (local_40[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))();
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      FUN_01a34e60();
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      *unaff_RDI = plVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      return unaff_RDI;
    }
  } while( true );
}


