// Function: FUN_00039550
// Address: 00039550
// Size: 546 bytes
// Class: GNInt


void FUN_00039550(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff40();
  unaff_RDI[2] = 0;
  *unaff_RDI = &DAT_02569280;
  unaff_RDI[3] = &DAT_025697c0;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  if (1 < DAT_02802630) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[9] = puVar2;
  }
  iVar1 = DAT_02802630;
  unaff_RDI[0xd] = 0;
  *(undefined4 *)(unaff_RDI + 0xe) = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  *(undefined4 *)(unaff_RDI + 0xc) = 0;
  if (1 < iVar1) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0xf] = puVar2;
    iVar1 = DAT_02802630;
  }
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x10] = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x16] = 0;
  if (1 < iVar1) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x16] = puVar2;
    iVar1 = DAT_02802630;
  }
  unaff_RDI[0x1b] = 0;
  *(undefined2 *)(unaff_RDI + 0x1c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xe4) = 0;
  unaff_RDI[0x28] = 0;
  unaff_RDI[0x18] = 0;
  unaff_RDI[0x19] = 0;
  *(undefined4 *)(unaff_RDI + 0x1a) = 0;
  unaff_RDI[0x1e] = 0;
  unaff_RDI[0x1f] = 0;
  *(undefined1 *)(unaff_RDI + 0x20) = 0;
  unaff_RDI[0x21] = 0;
  unaff_RDI[0x22] = 0;
  unaff_RDI[0x23] = 0;
  unaff_RDI[0x24] = 0;
  unaff_RDI[0x25] = 0;
  unaff_RDI[0x26] = 0;
  *(undefined4 *)(unaff_RDI + 0x27) = 0;
  if (1 < iVar1) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    FUN_00d22760();
    unaff_RDI[0x28] = puVar2;
  }
  unaff_RDI[0x29] = 0;
  unaff_RDI[0x2b] = 0;
  return;
}


