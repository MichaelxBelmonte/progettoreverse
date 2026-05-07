// Function: FUN_008192b0
// Address: 008192b0
// Size: 552 bytes
// Class: GNOutlineViewDataSource


void FUN_008192b0(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  
  FUN_0006daf0();
  *unaff_RDI = &DAT_02667c00;
  unaff_RDI[2] = &DAT_026685c8;
  unaff_RDI[0x27] = &DAT_02668608;
  unaff_RDI[0x28] = &DAT_02668660;
  unaff_RDI[0x29] = &DAT_026686c8;
  unaff_RDI[0x2a] = &DAT_02668750;
  unaff_RDI[0x2b] = &DAT_026687f0;
  *(undefined4 *)(unaff_RDI + 0x2c) = 0;
  unaff_RDI[0x2d] = 0;
  unaff_RDI[0x2e] = 0;
  iVar2 = DAT_02802630;
  if (DAT_02802630 < 2) {
    unaff_RDI[0x2f] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x2e] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x2f] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x2f] = puVar3;
      iVar2 = DAT_02802630;
    }
  }
  unaff_RDI[0x32] = 0;
  unaff_RDI[0x33] = 0;
  unaff_RDI[0x30] = 0;
  unaff_RDI[0x31] = 0;
  unaff_RDI[0x34] = 0;
  if (1 < iVar2) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x34] = puVar3;
    iVar2 = DAT_02802630;
  }
  unaff_RDI[0x35] = 0;
  unaff_RDI[0x36] = 0;
  *(undefined1 *)(unaff_RDI + 0x37) = 0;
  unaff_RDI[0x38] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x1c5) = 0;
  unaff_RDI[0x3a] = 0;
  unaff_RDI[0x3b] = 0;
  unaff_RDI[0x3c] = 0;
  unaff_RDI[0x3d] = 0;
  unaff_RDI[0x3e] = 0;
  if (1 < iVar2) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x3e] = puVar3;
  }
  unaff_RDI[0x3f] = 0;
  *(undefined4 *)(unaff_RDI + 0x40) = 0;
  return;
}


