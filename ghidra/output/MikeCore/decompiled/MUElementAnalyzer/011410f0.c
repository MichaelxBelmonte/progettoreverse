// Function: FUN_011410f0
// Address: 011410f0
// Size: 1009 bytes
// Class: MUElementAnalyzer


void FUN_011410f0(void)

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
  *unaff_RDI = &DAT_025e5748;
  unaff_RDI[2] = &DAT_025e5b00;
  unaff_RDI[3] = &DAT_025e5b38;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  *(undefined4 *)(unaff_RDI + 0x10) = 0;
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
  iVar2 = DAT_02802630;
  if (DAT_02802630 < 2) {
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
      iVar2 = DAT_02802630;
    }
  }
  *(undefined2 *)(unaff_RDI + 0x1c) = 0;
  unaff_RDI[0x28] = 0;
  *(undefined4 *)(unaff_RDI + 0x29) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xe4) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xec) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xf4) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xfc) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x104) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x10c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x114) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x11c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x124) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 300) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x131) = 0;
  unaff_RDI[0x2a] = 0;
  unaff_RDI[0x2b] = 0;
  unaff_RDI[0x2c] = 0;
  if (iVar2 < 2) {
    unaff_RDI[0x2d] = 0;
    unaff_RDI[0x2e] = 0;
LAB_011413f7:
    unaff_RDI[0x2f] = 0;
    unaff_RDI[0x30] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[0x2c] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[0x2d] = 0;
    if (iVar2 < 2) {
      unaff_RDI[0x2e] = 0;
      unaff_RDI[0x2f] = 0;
LAB_0114140d:
      unaff_RDI[0x30] = 0;
    }
    else {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x2d] = puVar3;
      iVar2 = DAT_02802630;
      unaff_RDI[0x2e] = 0;
      if (iVar2 < 2) goto LAB_011413f7;
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x2e] = puVar3;
      iVar2 = DAT_02802630;
      unaff_RDI[0x2f] = 0;
      if (iVar2 < 2) goto LAB_0114140d;
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0x2f] = puVar3;
      iVar2 = DAT_02802630;
      unaff_RDI[0x30] = 0;
      if (1 < iVar2) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        (*DAT_02572370)();
        unaff_RDI[0x30] = puVar3;
        iVar2 = DAT_02802630;
        unaff_RDI[0x31] = 0;
        if (1 < iVar2) {
          puVar3 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar3 = &DAT_02572358;
          (*DAT_02572370)();
          unaff_RDI[0x31] = puVar3;
        }
        goto LAB_01141423;
      }
    }
  }
  unaff_RDI[0x31] = 0;
LAB_01141423:
  unaff_RDI[0x32] = 0;
  *(undefined1 *)(unaff_RDI + 0x33) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x19c) = 0;
  unaff_RDI[0x35] = 0;
  unaff_RDI[0x36] = 0;
  unaff_RDI[0x37] = 0;
  unaff_RDI[0x38] = 0;
  unaff_RDI[0x39] = 0;
  unaff_RDI[0x3a] = 0;
  *(undefined4 *)(unaff_RDI + 0x3b) = 0;
  unaff_RDI[0x3c] = 0;
  unaff_RDI[0x3d] = 0;
  unaff_RDI[0x3e] = 0;
  unaff_RDI[0x3f] = 0;
  unaff_RDI[0x40] = 0;
  unaff_RDI[0x41] = 0;
  unaff_RDI[0x42] = 0;
  unaff_RDI[0x43] = 0;
  unaff_RDI[0x44] = 0;
  unaff_RDI[0x45] = 0;
  *(undefined4 *)(unaff_RDI + 0x46) = 0;
  unaff_RDI[0x47] = 0;
  unaff_RDI[0x48] = 0;
  unaff_RDI[0x49] = 0;
  unaff_RDI[0x4a] = 0;
  unaff_RDI[0x4b] = 0;
  unaff_RDI[0x4c] = 0;
  unaff_RDI[0x4d] = 0;
  unaff_RDI[0x4e] = 0;
  unaff_RDI[0x4f] = 0;
  unaff_RDI[0x50] = 0;
  unaff_RDI[0x51] = 0;
  unaff_RDI[0x52] = 0;
  unaff_RDI[0x53] = 0;
  unaff_RDI[0x54] = 0;
  unaff_RDI[0x55] = 0;
  unaff_RDI[0x56] = 0;
  unaff_RDI[0x57] = 0;
  return;
}


