// Function: FUN_00005710
// Address: 00005710
// Size: 511 bytes
// Class: GNPlugInControllerWrapper


void FUN_00005710(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff40();
  *(undefined1 *)((longlong)unaff_RDI + 0xc) = 0;
  *unaff_RDI = &DAT_026b98e8;
  unaff_RDI[2] = &DAT_026ba010;
  unaff_RDI[3] = 0;
  if (1 < DAT_02802630) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[3] = puVar2;
  }
  iVar1 = DAT_02802630;
  *(undefined4 *)(unaff_RDI + 4) = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  if (1 < iVar1) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[7] = puVar2;
    iVar1 = DAT_02802630;
  }
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  if (1 < iVar1) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0xd] = puVar2;
    iVar1 = DAT_02802630;
  }
  unaff_RDI[0xe] = 0;
  *(undefined1 *)(unaff_RDI + 0xf) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x7c) = 0;
  unaff_RDI[0x10] = 0;
  if (1 < iVar1) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x10] = puVar2;
    iVar1 = DAT_02802630;
  }
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x12] = 0;
  if (1 < iVar1) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x14] = puVar2;
  }
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x18] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x16] = 0;
  *(undefined4 *)((longlong)unaff_RDI + 199) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xdc) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0xe4) = 0;
  unaff_RDI[0x1d] = 0;
  unaff_RDI[0x1e] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xf6) = 0;
  return;
}


