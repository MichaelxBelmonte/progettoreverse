// Function: FUN_000830c0
// Address: 000830c0
// Size: 635 bytes
// Class: MUElementAnalyzer


void FUN_000830c0(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff40();
  *(undefined1 *)((longlong)unaff_RDI + 0xc) = 0;
  *unaff_RDI = &DAT_0267fa98;
  unaff_RDI[2] = 0;
  if (1 < DAT_02802630) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[2] = puVar3;
  }
  iVar2 = DAT_02802630;
  *(undefined1 *)(unaff_RDI + 7) = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[3] = 0;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  *unaff_RDI = &DAT_0250c388;
  unaff_RDI[9] = &DAT_0250c9e8;
  unaff_RDI[10] = &DAT_0250ca38;
  unaff_RDI[0xb] = &DAT_0250ca68;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[0x10] = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x17] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xb9) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xc1) = 0;
  unaff_RDI[0x1a] = 0;
  unaff_RDI[0x1b] = 0;
  *(undefined1 *)(unaff_RDI + 0x1c) = 0;
  unaff_RDI[0x1d] = 0;
  unaff_RDI[0x1e] = 0;
  unaff_RDI[0x1f] = 0;
  unaff_RDI[0x20] = 0;
  unaff_RDI[0x21] = 0;
  unaff_RDI[0x22] = 0;
  unaff_RDI[0x23] = 0;
  if (iVar2 < 2) {
    unaff_RDI[0x24] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x23] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x24] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x24] = puVar3;
      iVar2 = DAT_02802630;
    }
  }
  unaff_RDI[0x2c] = 0;
  *(undefined2 *)(unaff_RDI + 0x2d) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x174) = 0;
  *(undefined2 *)(unaff_RDI + 0x2f) = 0;
  unaff_RDI[0x25] = 0;
  unaff_RDI[0x26] = 0;
  unaff_RDI[0x27] = 0;
  unaff_RDI[0x28] = 0;
  unaff_RDI[0x29] = 0;
  unaff_RDI[0x2a] = 0;
  *(undefined2 *)(unaff_RDI + 0x2b) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x16c) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x16f) = 0;
  unaff_RDI[0x30] = 0;
  unaff_RDI[0x31] = 0;
  unaff_RDI[0x32] = 0;
  unaff_RDI[0x33] = 0;
  unaff_RDI[0x34] = 0;
  unaff_RDI[0x35] = 0;
  unaff_RDI[0x36] = 0;
  if (1 < iVar2) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x36] = puVar3;
  }
  return;
}


