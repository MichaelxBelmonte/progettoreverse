// Function: FUN_000fdf90
// Address: 000fdf90
// Size: 589 bytes
// Class: MDToolbarQuantizeMacrosCtrl


void FUN_000fdf90(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff40();
  *(undefined8 *)((longlong)unaff_RDI + 0x2f) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x37) = 0;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x49) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x51) = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  *unaff_RDI = &DAT_025e4fa0;
  unaff_RDI[2] = &DAT_025e5360;
  unaff_RDI[3] = &DAT_025e5398;
  if (1 < DAT_02802630) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0xf] = puVar3;
  }
  iVar2 = DAT_02802630;
  *(undefined1 *)(unaff_RDI + 0x10) = 0;
  unaff_RDI[0x1b] = 0;
  *(undefined1 *)(unaff_RDI + 0x1c) = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x14] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xa5) = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x17] = 0;
  *(undefined2 *)(unaff_RDI + 0x18) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xc4) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xcc) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xd4) = 0;
  unaff_RDI[0x1d] = 0;
  unaff_RDI[0x1e] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xf4) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xfc) = 0;
  unaff_RDI[0x21] = 0;
  unaff_RDI[0x22] = 0;
  unaff_RDI[0x23] = 0;
  unaff_RDI[0x24] = 0;
  unaff_RDI[0x25] = 0;
  unaff_RDI[0x26] = 0;
  unaff_RDI[0x27] = 0;
  unaff_RDI[0x28] = 0;
  unaff_RDI[0x29] = 0;
  if (iVar2 < 2) {
    unaff_RDI[0x2a] = 0;
    unaff_RDI[0x2b] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x29] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x2a] = 0;
    if (iVar2 < 2) {
      unaff_RDI[0x2b] = 0;
      unaff_RDI[0x2c] = 0;
      goto LAB_000fe1b9;
    }
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    unaff_RDI[0x2a] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x2b] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x2b] = puVar3;
      iVar2 = DAT_02802630;
      unaff_RDI[0x2c] = 0;
      if (1 < iVar2) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        (*pcVar1)();
        unaff_RDI[0x2c] = puVar3;
      }
      goto LAB_000fe1b9;
    }
  }
  unaff_RDI[0x2c] = 0;
LAB_000fe1b9:
  unaff_RDI[0x2d] = 0;
  unaff_RDI[0x2e] = 0;
  unaff_RDI[0x2f] = 0;
  return;
}


