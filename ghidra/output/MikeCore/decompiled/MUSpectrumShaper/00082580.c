// Function: FUN_00082580
// Address: 00082580
// Size: 647 bytes
// Class: MUSpectrumShaper


void FUN_00082580(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff40();
  *unaff_RDI = &DAT_025d6680;
  unaff_RDI[7] = 0;
  if (1 < DAT_02802630) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    FUN_00d22760();
    unaff_RDI[7] = puVar3;
  }
  iVar2 = DAT_02802630;
  unaff_RDI[8] = 0;
  *(undefined4 *)(unaff_RDI + 9) = 0;
  unaff_RDI[10] = 0;
  if (1 < iVar2) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[10] = puVar3;
    iVar2 = DAT_02802630;
  }
  *(undefined8 *)((longlong)unaff_RDI + 100) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x6c) = 0;
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[0x10] = 0;
  *(undefined2 *)(unaff_RDI + 0x11) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x8c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x94) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x9c) = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x15] = 0;
  if (iVar2 < 2) {
    unaff_RDI[0x16] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x15] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x16] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x16] = puVar3;
      iVar2 = DAT_02802630;
    }
  }
  unaff_RDI[0x19] = 0;
  unaff_RDI[0x1a] = 0;
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x18] = 0;
  if (iVar2 < 2) {
    unaff_RDI[0x1b] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x1a] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x1b] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x1b] = puVar3;
    }
  }
  unaff_RDI[0x1c] = 0;
  *(undefined1 *)(unaff_RDI + 0x1d) = 0;
  unaff_RDI[0x1e] = 0;
  *(undefined4 *)(unaff_RDI + 0x1f) = 0;
  unaff_RDI[0x20] = 0;
  *(undefined4 *)(unaff_RDI + 0x21) = 0;
  unaff_RDI[0x29] = 0;
  unaff_RDI[0x22] = 0;
  unaff_RDI[0x23] = 0;
  unaff_RDI[0x24] = 0;
  unaff_RDI[0x25] = 0;
  unaff_RDI[0x26] = 0;
  unaff_RDI[0x27] = 0;
  *(undefined1 *)(unaff_RDI + 0x28) = 0;
  return;
}


