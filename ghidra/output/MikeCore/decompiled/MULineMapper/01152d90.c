// Function: FUN_01152d90
// Address: 01152d90
// Size: 1120 bytes
// Class: MULineMapper


void FUN_01152d90(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff40();
  *(undefined4 *)(unaff_RDI + 7) = 0;
  *unaff_RDI = &DAT_026043c0;
  *(undefined1 *)((longlong)unaff_RDI + 0x3c) = 0;
  unaff_RDI[0xd] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  *(undefined4 *)(unaff_RDI + 0xc) = 0;
  iVar2 = DAT_02802630;
  if (DAT_02802630 < 2) {
    unaff_RDI[0xe] = 0;
    unaff_RDI[0xf] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0xd] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0xe] = 0;
    if (iVar2 < 2) {
      unaff_RDI[0xf] = 0;
    }
    else {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0xe] = puVar3;
      iVar2 = DAT_02802630;
      unaff_RDI[0xf] = 0;
      if (1 < iVar2) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        (*DAT_02572370)();
        unaff_RDI[0xf] = puVar3;
        iVar2 = DAT_02802630;
      }
    }
  }
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x10] = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x18] = 0;
  if (iVar2 < 2) {
    unaff_RDI[0x19] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x18] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x19] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x19] = puVar3;
      iVar2 = DAT_02802630;
    }
  }
  *(undefined4 *)(unaff_RDI + 0x1e) = 0;
  unaff_RDI[0x1a] = 0;
  unaff_RDI[0x1b] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xdd) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xe5) = 0;
  unaff_RDI[0x1f] = 0;
  unaff_RDI[0x20] = 0;
  if (iVar2 < 2) {
    unaff_RDI[0x21] = 0;
    unaff_RDI[0x22] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x20] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x21] = 0;
    if (iVar2 < 2) {
      unaff_RDI[0x22] = 0;
      unaff_RDI[0x23] = 0;
      unaff_RDI[0x24] = 0;
      goto joined_r0x01153189;
    }
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
      unaff_RDI[0x23] = 0;
      unaff_RDI[0x24] = 0;
      goto joined_r0x01153189;
    }
  }
  unaff_RDI[0x23] = 0;
  unaff_RDI[0x24] = 0;
joined_r0x01153189:
  if (iVar2 < 2) {
    unaff_RDI[0x25] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x24] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x25] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x25] = puVar3;
    }
  }
  *(undefined4 *)(unaff_RDI + 0x26) = 0;
  *(undefined4 *)(unaff_RDI + 0x2c) = 0;
  unaff_RDI[0x27] = 0;
  unaff_RDI[0x28] = 0;
  unaff_RDI[0x29] = 0;
  unaff_RDI[0x2a] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x157) = 0;
  unaff_RDI[0x2d] = 0;
  unaff_RDI[0x2e] = 0;
  *(undefined4 *)(unaff_RDI + 0x2f) = 0;
  return;
}


