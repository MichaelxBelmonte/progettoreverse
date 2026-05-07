// Function: FUN_00b64180
// Address: 00b64180
// Size: 967 bytes
// Class: GNMidiFile


undefined8 * FUN_00b64180(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar4;
  longlong local_c0;
  char local_b8;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *(longlong *)(*unaff_RSI + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65690();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(*unaff_RSI + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65690();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(*unaff_RSI + 0x30);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65690();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(*unaff_RSI + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65690();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(*unaff_RSI + 0x20);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65770();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(*unaff_RSI + 0x48);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65770();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(*unaff_RSI + 0x10);
  if (lVar1 != 0) {
    FUN_00d50b00();
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        FUN_00b64970();
        if ((local_b8 == '\0') && (local_c0 != 0)) {
          FUN_00d50b00();
        }
        FUN_00b5da10();
        if (local_c0 != 0) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_00b66ae0();
  }
  lVar2 = *(longlong *)(*unaff_RSI + 0x40);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65770();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


