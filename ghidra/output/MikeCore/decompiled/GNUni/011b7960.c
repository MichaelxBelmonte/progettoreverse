// Function: FUN_011b7960
// Address: 011b7960
// Size: 718 bytes
// Class: GNUni


void FUN_011b7960(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff40();
  *(undefined4 *)(unaff_RDI + 7) = 0;
  *unaff_RDI = &DAT_0260a060;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  if (1 < DAT_02802630) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0xb] = puVar3;
  }
  iVar2 = DAT_02802630;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  if (iVar2 < 2) {
    unaff_RDI[0x10] = 0;
    unaff_RDI[0x11] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0xf] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x10] = 0;
    if (iVar2 < 2) {
      unaff_RDI[0x11] = 0;
      unaff_RDI[0x12] = 0;
      goto LAB_011b7b56;
    }
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    unaff_RDI[0x10] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x11] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x11] = puVar3;
      iVar2 = DAT_02802630;
      unaff_RDI[0x12] = 0;
      if (1 < iVar2) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        (*pcVar1)();
        unaff_RDI[0x12] = puVar3;
        iVar2 = DAT_02802630;
      }
      goto LAB_011b7b56;
    }
  }
  unaff_RDI[0x12] = 0;
LAB_011b7b56:
  *(undefined4 *)(unaff_RDI + 0x13) = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x17] = 0;
  if (iVar2 < 2) {
    *(undefined4 *)(unaff_RDI + 0x18) = 0;
    unaff_RDI[0x19] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x17] = puVar3;
    iVar2 = DAT_02802630;
    *(undefined4 *)(unaff_RDI + 0x18) = 0;
    unaff_RDI[0x19] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      unaff_RDI[0x19] = puVar3;
    }
  }
  unaff_RDI[0x1a] = 0;
  *(undefined4 *)(unaff_RDI + 0x1b) = 0;
  return;
}


