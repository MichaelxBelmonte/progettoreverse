// Function: FUN_000916b0
// Address: 000916b0
// Size: 1990 bytes
// Class: MDMetaWindowController


void FUN_000916b0(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  
  FUN_0006daf0();
  unaff_RDI[0x27] = 0;
  *unaff_RDI = &DAT_02626f88;
  unaff_RDI[2] = &DAT_02628600;
  unaff_RDI[0x28] = &DAT_02628640;
  unaff_RDI[0x29] = &DAT_02628690;
  unaff_RDI[0x2a] = &DAT_026286c0;
  *(undefined2 *)(unaff_RDI + 0x2b) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x15a) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x15c) = 0;
  unaff_RDI[0x3d] = 0;
  unaff_RDI[0x2d] = 0;
  unaff_RDI[0x2e] = 0;
  unaff_RDI[0x2f] = 0;
  unaff_RDI[0x30] = 0;
  unaff_RDI[0x31] = 0;
  unaff_RDI[0x32] = 0;
  unaff_RDI[0x33] = 0;
  unaff_RDI[0x34] = 0;
  unaff_RDI[0x35] = 0;
  unaff_RDI[0x36] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x1b5) = 0;
  unaff_RDI[0x38] = 0;
  unaff_RDI[0x39] = 0;
  unaff_RDI[0x3a] = 0;
  unaff_RDI[0x3b] = 0;
  *(undefined4 *)(unaff_RDI + 0x3c) = 0;
  iVar2 = DAT_02802630;
  if (DAT_02802630 < 2) {
    unaff_RDI[0x3e] = 0;
LAB_000918c7:
    unaff_RDI[0x3f] = 0;
    unaff_RDI[0x40] = 0;
    unaff_RDI[0x41] = 0;
LAB_000918e7:
    unaff_RDI[0x42] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x3d] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x3e] = 0;
    if (iVar2 < 2) goto LAB_000918c7;
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    unaff_RDI[0x3e] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x3f] = 0;
    unaff_RDI[0x40] = 0;
    unaff_RDI[0x41] = 0;
    if (iVar2 < 2) goto LAB_000918e7;
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    unaff_RDI[0x41] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x42] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x42] = puVar3;
      iVar2 = DAT_02802630;
    }
  }
  *(undefined4 *)(unaff_RDI + 0x43) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x21c) = 0;
  unaff_RDI[0x44] = 0;
  unaff_RDI[0x45] = 0;
  unaff_RDI[0x46] = 0;
  if (iVar2 < 2) {
    unaff_RDI[0x47] = 0;
    unaff_RDI[0x48] = 0;
LAB_00091a61:
    unaff_RDI[0x49] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x46] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x47] = 0;
    unaff_RDI[0x48] = 0;
    if (iVar2 < 2) goto LAB_00091a61;
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    unaff_RDI[0x48] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x49] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x49] = puVar3;
      iVar2 = DAT_02802630;
      unaff_RDI[0x4a] = 0;
      if (1 < iVar2) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        (*pcVar1)();
        unaff_RDI[0x4a] = puVar3;
        iVar2 = DAT_02802630;
      }
      goto LAB_00091a8d;
    }
  }
  unaff_RDI[0x4a] = 0;
LAB_00091a8d:
  unaff_RDI[0x4f] = 0;
  *(undefined1 *)(unaff_RDI + 0x50) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x284) = 0;
  *(undefined1 *)(unaff_RDI + 0x51) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x28c) = 0;
  unaff_RDI[0x53] = 0;
  *(undefined1 *)(unaff_RDI + 0x54) = 0;
  unaff_RDI[0x55] = 0;
  *(undefined4 *)(unaff_RDI + 0x56) = 0;
  unaff_RDI[0x4b] = 0;
  unaff_RDI[0x4c] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x264) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x26c) = 0;
  unaff_RDI[0x57] = 0;
  unaff_RDI[0x58] = 0;
  unaff_RDI[0x59] = 0;
  unaff_RDI[0x5a] = 0;
  unaff_RDI[0x5b] = 0;
  unaff_RDI[0x5c] = 0;
  unaff_RDI[0x5d] = 0;
  unaff_RDI[0x5e] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x2f4) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x2fc) = 0;
  unaff_RDI[0x61] = 0;
  unaff_RDI[0x62] = 0;
  unaff_RDI[99] = 0;
  unaff_RDI[100] = 0;
  unaff_RDI[0x65] = 0;
  unaff_RDI[0x66] = 0;
  if (1 < iVar2) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x66] = puVar3;
    iVar2 = DAT_02802630;
  }
  unaff_RDI[0x67] = 0;
  *(undefined1 *)(unaff_RDI + 0x68) = 0;
  unaff_RDI[0x69] = 0;
  unaff_RDI[0x6a] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x355) = 0;
  unaff_RDI[0x6c] = 0;
  unaff_RDI[0x6d] = 0;
  unaff_RDI[0x6e] = 0;
  unaff_RDI[0x6f] = 0;
  unaff_RDI[0x70] = 0;
  unaff_RDI[0x71] = 0;
  unaff_RDI[0x72] = 0;
  unaff_RDI[0x73] = 0;
  unaff_RDI[0x74] = 0;
  unaff_RDI[0x75] = 0;
  unaff_RDI[0x76] = 0;
  unaff_RDI[0x77] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x3bc) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x3c4) = 0;
  unaff_RDI[0x7a] = 0;
  unaff_RDI[0x7b] = 0;
  unaff_RDI[0x7c] = 0;
  if (iVar2 < 2) {
    unaff_RDI[0x7d] = 0;
    unaff_RDI[0x7e] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x7c] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x7d] = 0;
    unaff_RDI[0x7e] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x7e] = puVar3;
      iVar2 = DAT_02802630;
    }
  }
  unaff_RDI[0x89] = 0;
  unaff_RDI[0x7f] = 0;
  unaff_RDI[0x80] = 0;
  unaff_RDI[0x81] = 0;
  unaff_RDI[0x82] = 0;
  unaff_RDI[0x83] = 0;
  unaff_RDI[0x84] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x425) = 0;
  unaff_RDI[0x86] = 0;
  unaff_RDI[0x87] = 0;
  *(undefined2 *)(unaff_RDI + 0x88) = 0;
  if (1 < iVar2) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x89] = puVar3;
    iVar2 = DAT_02802630;
  }
  *(undefined4 *)(unaff_RDI + 0x8a) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x454) = 0;
  unaff_RDI[0x8b] = 0;
  unaff_RDI[0x8c] = 0;
  unaff_RDI[0x8d] = 0;
  unaff_RDI[0x8e] = 0;
  unaff_RDI[0x8f] = 0;
  unaff_RDI[0x90] = 0;
  unaff_RDI[0x91] = 0;
  unaff_RDI[0x92] = 0;
  unaff_RDI[0x93] = 0;
  if (1 < iVar2) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x93] = puVar3;
    iVar2 = DAT_02802630;
  }
  unaff_RDI[0x97] = 0;
  *(undefined4 *)(unaff_RDI + 0x98) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x4c4) = 0;
  unaff_RDI[0x99] = 0;
  unaff_RDI[0x94] = 0;
  unaff_RDI[0x95] = 0;
  *(undefined1 *)(unaff_RDI + 0x96) = 0;
  if (1 < iVar2) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x99] = puVar3;
    iVar2 = DAT_02802630;
  }
  *(undefined1 *)(unaff_RDI + 0x9a) = 0;
  *(undefined4 *)(unaff_RDI + 0x9c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x4d4) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x4dc) = 0;
  unaff_RDI[0x9d] = 0;
  unaff_RDI[0x9e] = 0;
  *(undefined2 *)(unaff_RDI + 0x9f) = 0;
  unaff_RDI[0xa0] = 0;
  unaff_RDI[0xa1] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x50f) = 0;
  unaff_RDI[0xa3] = 0;
  *(undefined1 *)(unaff_RDI + 0xa4) = 0;
  unaff_RDI[0xa5] = 0;
  unaff_RDI[0xa6] = 0;
  if (1 < iVar2) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0xa6] = puVar3;
  }
  return;
}


