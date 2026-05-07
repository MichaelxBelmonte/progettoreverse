// Function: FUN_00d07010
// Address: 00d07010
// Size: 614 bytes
// Class: GNList
// String references:
//   ") in %@"


undefined8 * FUN_00d07010(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar5;
  longlong local_40;
  char local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025795a8;
  (*DAT_025795c0)();
  lVar1 = DAT_02772078;
  if (DAT_02772078 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8dbf0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = unaff_RSI[3];
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      do {
        lVar3 = DAT_027d64a0;
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
        if ((int)lVar5 != 0) {
          if (DAT_027d64a0 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8dbf0();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*plVar2 + 400))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d8dbf0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_00083b20();
  }
  (**(code **)(*unaff_RSI + 0x3e0))();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00d94d80();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


