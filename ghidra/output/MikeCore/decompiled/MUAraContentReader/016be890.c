// Function: FUN_016be890
// Address: 016be890
// Size: 568 bytes
// Class: MUAraContentReader


void FUN_016be890(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff40();
  *unaff_RDI = &DAT_025f89b0;
  unaff_RDI[2] = &DAT_025f8d70;
  unaff_RDI[3] = 0;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  iVar2 = DAT_02802630;
  if (DAT_02802630 < 2) {
    unaff_RDI[10] = 0;
    unaff_RDI[0xb] = 0;
LAB_016bea35:
    unaff_RDI[0xc] = 0;
    unaff_RDI[0xd] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[9] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[10] = 0;
    if (iVar2 < 2) {
      unaff_RDI[0xb] = 0;
      unaff_RDI[0xc] = 0;
    }
    else {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[10] = puVar3;
      iVar2 = DAT_02802630;
      unaff_RDI[0xb] = 0;
      if (iVar2 < 2) goto LAB_016bea35;
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0xb] = puVar3;
      iVar2 = DAT_02802630;
      unaff_RDI[0xc] = 0;
      if (1 < iVar2) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        (*pcVar1)();
        unaff_RDI[0xc] = puVar3;
        iVar2 = DAT_02802630;
        unaff_RDI[0xd] = 0;
        if (1 < iVar2) {
          puVar3 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar3 = &DAT_02572358;
          (*DAT_02572370)();
          unaff_RDI[0xd] = puVar3;
          iVar2 = DAT_02802630;
        }
        goto LAB_016bea6f;
      }
    }
    unaff_RDI[0xd] = 0;
  }
LAB_016bea6f:
  unaff_RDI[0xf] = 0;
  *(undefined4 *)(unaff_RDI + 0xe) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x73) = 0;
  if (1 < iVar2) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0xf] = puVar3;
  }
  return;
}


