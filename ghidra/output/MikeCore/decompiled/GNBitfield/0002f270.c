// Function: FUN_0002f270
// Address: 0002f270
// Size: 519 bytes
// Class: GNBitfield


void FUN_0002f270(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff40();
  *unaff_RDI = &DAT_02567a20;
  unaff_RDI[2] = 0;
  unaff_RDI[3] = 0;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  iVar2 = DAT_02802630;
  if (DAT_02802630 < 2) {
    unaff_RDI[6] = 0;
    unaff_RDI[7] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[5] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[6] = 0;
    if (iVar2 < 2) {
      unaff_RDI[7] = 0;
      unaff_RDI[8] = 0;
      goto LAB_0002f3e2;
    }
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    unaff_RDI[6] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[7] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[7] = puVar3;
      iVar2 = DAT_02802630;
      unaff_RDI[8] = 0;
      if (1 < iVar2) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        (*pcVar1)();
        unaff_RDI[8] = puVar3;
        iVar2 = DAT_02802630;
      }
      goto LAB_0002f3e2;
    }
  }
  unaff_RDI[8] = 0;
LAB_0002f3e2:
  *(undefined2 *)(unaff_RDI + 9) = 0;
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  unaff_RDI[0xe] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x71) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x79) = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x18] = 0;
  unaff_RDI[0x19] = 0;
  unaff_RDI[0x1a] = 0;
  if (1 < iVar2) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x1a] = puVar3;
  }
  return;
}


