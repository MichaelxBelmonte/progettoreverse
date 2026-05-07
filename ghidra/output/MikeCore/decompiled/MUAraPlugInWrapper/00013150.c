// Function: FUN_00013150
// Address: 00013150
// Size: 1063 bytes
// Class: MUAraPlugInWrapper


void FUN_00013150(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff40();
  *(undefined8 *)((longlong)unaff_RDI + 0x7c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x84) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x6c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x74) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x5c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 100) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x4c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x54) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x3c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x44) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x2c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x34) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x1c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x24) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xc) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x14) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x8c) = 0;
  *unaff_RDI = &DAT_02501518;
  unaff_RDI[0x12] = &DAT_02501b50;
  unaff_RDI[0x13] = &DAT_02501b80;
  *(undefined1 *)(unaff_RDI + 0x14) = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x17] = 0;
  iVar2 = DAT_02802630;
  if (DAT_02802630 < 2) {
    unaff_RDI[0x18] = 0;
    unaff_RDI[0x19] = 0;
LAB_00013314:
    unaff_RDI[0x1a] = 0;
    unaff_RDI[0x1b] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x17] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x18] = 0;
    unaff_RDI[0x19] = 0;
    if (iVar2 < 2) goto LAB_00013314;
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    unaff_RDI[0x19] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x1a] = 0;
    unaff_RDI[0x1b] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x1b] = puVar3;
      iVar2 = DAT_02802630;
      unaff_RDI[0x1c] = 0;
      if (1 < iVar2) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        (*pcVar1)();
        unaff_RDI[0x1c] = puVar3;
        iVar2 = DAT_02802630;
      }
      goto LAB_0001333f;
    }
  }
  unaff_RDI[0x1c] = 0;
LAB_0001333f:
  *(undefined4 *)(unaff_RDI + 0x47) = 0;
  unaff_RDI[0x53] = 0;
  *(undefined1 *)(unaff_RDI + 0x54) = 0;
  unaff_RDI[0x5d] = 0;
  unaff_RDI[0x1d] = 0;
  unaff_RDI[0x1e] = 0;
  unaff_RDI[0x1f] = 0;
  unaff_RDI[0x20] = 0;
  unaff_RDI[0x21] = 0;
  unaff_RDI[0x22] = 0;
  unaff_RDI[0x48] = 0;
  unaff_RDI[0x49] = 0;
  unaff_RDI[0x4a] = 0;
  unaff_RDI[0x4b] = 0;
  unaff_RDI[0x4c] = 0;
  unaff_RDI[0x4d] = 0;
  unaff_RDI[0x4e] = 0;
  unaff_RDI[0x4f] = 0;
  unaff_RDI[0x50] = 0;
  unaff_RDI[0x51] = 0;
  *(undefined4 *)(unaff_RDI + 0x52) = 0;
  unaff_RDI[0x55] = 0;
  unaff_RDI[0x56] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x2b4) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 700) = 0;
  unaff_RDI[0x59] = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x2cf) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x2df) = 0;
  unaff_RDI[0x5b] = 0;
  if (1 < iVar2) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x5d] = puVar3;
  }
  unaff_RDI[0x60] = 0;
  unaff_RDI[0x61] = 0;
  unaff_RDI[0x5e] = 0;
  unaff_RDI[0x5f] = 0;
  unaff_RDI[0x62] = 0;
  if (DAT_02802630 < 2) {
    unaff_RDI[99] = 0;
    unaff_RDI[100] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x62] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[99] = 0;
    if (iVar2 < 2) {
      unaff_RDI[100] = 0;
    }
    else {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[99] = puVar3;
      iVar2 = DAT_02802630;
      unaff_RDI[100] = 0;
      if (1 < iVar2) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        (*DAT_02572370)();
        unaff_RDI[100] = puVar3;
      }
    }
  }
  unaff_RDI[0x69] = 0;
  unaff_RDI[0x6a] = 0;
  unaff_RDI[0x67] = 0;
  unaff_RDI[0x68] = 0;
  unaff_RDI[0x65] = 0;
  unaff_RDI[0x66] = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x357) = 0;
  unaff_RDI[0x6c] = 0;
  unaff_RDI[0x6d] = 0;
  *(undefined2 *)(unaff_RDI + 0x6e) = 0;
  unaff_RDI[0x6f] = 0;
  unaff_RDI[0x70] = 0;
  unaff_RDI[0x71] = 0;
  unaff_RDI[0x72] = 0;
  unaff_RDI[0x73] = 0;
  unaff_RDI[0x74] = 0;
  unaff_RDI[0x75] = 0;
  return;
}


