// Function: FUN_0010c180
// Address: 0010c180
// Size: 523 bytes
// Class: MUTempoEditorView


void FUN_0010c180(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  
  FUN_0006daf0();
  *unaff_RDI = &DAT_0266bec8;
  unaff_RDI[2] = &DAT_0266c900;
  unaff_RDI[0x27] = &DAT_0266c940;
  unaff_RDI[0x28] = &DAT_0266c990;
  unaff_RDI[0x29] = 0;
  unaff_RDI[0x2a] = 0;
  unaff_RDI[0x2b] = 0;
  unaff_RDI[0x2c] = 0;
  unaff_RDI[0x2d] = 0;
  unaff_RDI[0x2e] = 0;
  unaff_RDI[0x2f] = 0;
  unaff_RDI[0x30] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x181) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x189) = 0;
  unaff_RDI[0x33] = 0;
  unaff_RDI[0x34] = 0;
  unaff_RDI[0x35] = 0;
  unaff_RDI[0x36] = 0;
  unaff_RDI[0x37] = 0;
  unaff_RDI[0x38] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x1c1) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x1c9) = 0;
  unaff_RDI[0x3b] = 0;
  unaff_RDI[0x3c] = 0;
  unaff_RDI[0x3d] = 0;
  unaff_RDI[0x3e] = 0;
  unaff_RDI[0x3f] = 0;
  if (DAT_02802630 < 2) {
    unaff_RDI[0x40] = 0;
    unaff_RDI[0x41] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x3f] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x40] = 0;
    if (iVar2 < 2) {
      unaff_RDI[0x41] = 0;
    }
    else {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x40] = puVar3;
      iVar2 = DAT_02802630;
      unaff_RDI[0x41] = 0;
      if (1 < iVar2) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        (*DAT_02572370)();
        unaff_RDI[0x41] = puVar3;
      }
    }
  }
  unaff_RDI[0x42] = 0;
  *(undefined1 *)(unaff_RDI + 0x43) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x21c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x224) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x229) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x231) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x23c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x244) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x249) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x254) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x25c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x264) = 0;
  unaff_RDI[0x4e] = 0;
  unaff_RDI[0x4f] = 0;
  unaff_RDI[0x50] = 0;
  unaff_RDI[0x51] = 0;
  unaff_RDI[0x52] = 0;
  unaff_RDI[0x53] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x29c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x2a4) = 0;
  unaff_RDI[0x56] = 0;
  unaff_RDI[0x57] = 0;
  unaff_RDI[0x58] = 0;
  unaff_RDI[0x59] = 0;
  unaff_RDI[0x5a] = 0;
  unaff_RDI[0x5b] = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x2df) = 0;
  return;
}


