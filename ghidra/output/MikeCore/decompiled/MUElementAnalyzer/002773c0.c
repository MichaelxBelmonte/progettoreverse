// Function: FUN_002773c0
// Address: 002773c0
// Size: 1546 bytes
// Class: MUElementAnalyzer


void FUN_002773c0(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff40();
  *unaff_RDI = &DAT_025d8f90;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  if (1 < DAT_02802630) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[8] = puVar3;
  }
  iVar2 = DAT_02802630;
  unaff_RDI[0x19] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[0x10] = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x14] = 0;
  *(undefined4 *)(unaff_RDI + 0x15) = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x17] = 0;
  *(undefined1 *)(unaff_RDI + 0x18) = 0;
  if (iVar2 < 2) {
    unaff_RDI[0x1a] = 0;
    unaff_RDI[0x1b] = 0;
LAB_00277772:
    unaff_RDI[0x1c] = 0;
    unaff_RDI[0x1d] = 0;
LAB_002777cc:
    unaff_RDI[0x1e] = 0;
LAB_002777e2:
    unaff_RDI[0x1f] = 0;
LAB_002777f8:
    unaff_RDI[0x20] = 0;
LAB_0027780e:
    unaff_RDI[0x21] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x19] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x1a] = 0;
    if (iVar2 < 2) {
      unaff_RDI[0x1b] = 0;
      unaff_RDI[0x1c] = 0;
LAB_002777b6:
      unaff_RDI[0x1d] = 0;
      goto LAB_002777cc;
    }
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    unaff_RDI[0x1a] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x1b] = 0;
    if (iVar2 < 2) goto LAB_00277772;
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    unaff_RDI[0x1b] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x1c] = 0;
    if (iVar2 < 2) goto LAB_002777b6;
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    unaff_RDI[0x1c] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x1d] = 0;
    if (iVar2 < 2) goto LAB_002777cc;
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x1d] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x1e] = 0;
    if (iVar2 < 2) goto LAB_002777e2;
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    unaff_RDI[0x1e] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x1f] = 0;
    if (iVar2 < 2) goto LAB_002777f8;
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    unaff_RDI[0x1f] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x20] = 0;
    if (iVar2 < 2) goto LAB_0027780e;
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    unaff_RDI[0x20] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x21] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x21] = puVar3;
      iVar2 = DAT_02802630;
      unaff_RDI[0x22] = 0;
      if (1 < iVar2) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        (*DAT_02572370)();
        unaff_RDI[0x22] = puVar3;
        iVar2 = DAT_02802630;
      }
      goto LAB_00277836;
    }
  }
  unaff_RDI[0x22] = 0;
LAB_00277836:
  *(undefined8 *)((longlong)unaff_RDI + 0x121) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x129) = 0;
  unaff_RDI[0x23] = 0;
  unaff_RDI[0x24] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x134) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x13a) = 0;
  unaff_RDI[0x29] = 0;
  unaff_RDI[0x2a] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x154) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x15c) = 0;
  unaff_RDI[0x2d] = 0;
  *(undefined4 *)(unaff_RDI + 0x2e) = 0;
  unaff_RDI[0x2f] = 0;
  unaff_RDI[0x30] = 0;
  *(undefined4 *)(unaff_RDI + 0x31) = 0;
  unaff_RDI[0x32] = 0;
  unaff_RDI[0x33] = 0;
  if (1 < iVar2) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x33] = puVar3;
    iVar2 = DAT_02802630;
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x1a5) = 0;
  unaff_RDI[0x34] = 0;
  unaff_RDI[0x36] = 0;
  unaff_RDI[0x37] = 0;
  unaff_RDI[0x38] = 0;
  unaff_RDI[0x39] = 0;
  *(undefined1 *)(unaff_RDI + 0x3a) = 0;
  unaff_RDI[0x3b] = 0;
  unaff_RDI[0x3c] = 0;
  unaff_RDI[0x3d] = 0;
  if (iVar2 < 2) {
    unaff_RDI[0x3e] = 0;
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
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x3e] = puVar3;
    }
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x201) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x209) = 0;
  unaff_RDI[0x3f] = 0;
  unaff_RDI[0x40] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x214) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x21c) = 0;
  return;
}


