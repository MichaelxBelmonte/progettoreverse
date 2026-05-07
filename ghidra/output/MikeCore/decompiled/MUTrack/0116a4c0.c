// Function: FUN_0116a4c0
// Address: 0116a4c0
// Size: 600 bytes
// Class: MUTrack


void FUN_0116a4c0(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff40();
  unaff_RDI[0x1b] = 0;
  unaff_RDI[0x1c] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xc6) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xce) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xbc) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xc4) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xac) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xb4) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x9c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xa4) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x8c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x94) = 0;
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
  *unaff_RDI = &DAT_025e3768;
  unaff_RDI[0x1d] = 0;
  unaff_RDI[0x1e] = 0;
  iVar2 = DAT_02802630;
  if (DAT_02802630 < 2) {
    unaff_RDI[0x1f] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x1e] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x1f] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x1f] = puVar3;
      iVar2 = DAT_02802630;
    }
  }
  *(undefined4 *)(unaff_RDI + 0x20) = 0;
  unaff_RDI[0x21] = 0;
  unaff_RDI[0x22] = 0;
  if (iVar2 < 2) {
    unaff_RDI[0x23] = 0;
    unaff_RDI[0x24] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x22] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x23] = 0;
    if (iVar2 < 2) {
      unaff_RDI[0x24] = 0;
      unaff_RDI[0x25] = 0;
      return;
    }
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
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
      unaff_RDI[0x25] = 0;
      if (iVar2 < 2) {
        return;
      }
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x25] = puVar3;
      return;
    }
  }
  unaff_RDI[0x25] = 0;
  return;
}


