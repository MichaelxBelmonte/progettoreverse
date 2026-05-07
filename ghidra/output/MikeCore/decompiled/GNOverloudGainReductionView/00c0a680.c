// Function: FUN_00c0a680
// Address: 00c0a680
// Size: 1580 bytes
// Class: GNOverloudGainReductionView


/* WARNING: Removing unreachable block (ram,0x00c0abfc) */
/* WARNING: Removing unreachable block (ram,0x00c0ac05) */
/* WARNING: Removing unreachable block (ram,0x00c0ab5c) */
/* WARNING: Removing unreachable block (ram,0x00c0ab65) */
/* WARNING: Removing unreachable block (ram,0x00c0aabc) */
/* WARNING: Removing unreachable block (ram,0x00c0aac5) */
/* WARNING: Removing unreachable block (ram,0x00c0aa1c) */
/* WARNING: Removing unreachable block (ram,0x00c0aa25) */
/* WARNING: Removing unreachable block (ram,0x00c0a97c) */
/* WARNING: Removing unreachable block (ram,0x00c0a985) */
/* WARNING: Removing unreachable block (ram,0x00c0a8dc) */
/* WARNING: Removing unreachable block (ram,0x00c0a8e5) */
/* WARNING: Removing unreachable block (ram,0x00c0a83c) */
/* WARNING: Removing unreachable block (ram,0x00c0a845) */
/* WARNING: Removing unreachable block (ram,0x00c0a79c) */
/* WARNING: Removing unreachable block (ram,0x00c0a7a5) */
/* WARNING: Removing unreachable block (ram,0x00c0a7ec) */
/* WARNING: Removing unreachable block (ram,0x00c0a7f5) */
/* WARNING: Removing unreachable block (ram,0x00c0a88c) */
/* WARNING: Removing unreachable block (ram,0x00c0a895) */
/* WARNING: Removing unreachable block (ram,0x00c0a92c) */
/* WARNING: Removing unreachable block (ram,0x00c0a935) */
/* WARNING: Removing unreachable block (ram,0x00c0a9cc) */
/* WARNING: Removing unreachable block (ram,0x00c0a9d5) */
/* WARNING: Removing unreachable block (ram,0x00c0aa6c) */
/* WARNING: Removing unreachable block (ram,0x00c0aa75) */
/* WARNING: Removing unreachable block (ram,0x00c0ab0c) */
/* WARNING: Removing unreachable block (ram,0x00c0ab15) */
/* WARNING: Removing unreachable block (ram,0x00c0abac) */
/* WARNING: Removing unreachable block (ram,0x00c0abb5) */
/* WARNING: Removing unreachable block (ram,0x00c0ac4c) */
/* WARNING: Removing unreachable block (ram,0x00c0ac55) */

void FUN_00c0a680(undefined8 param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  puVar4 = DAT_028a5c88;
  if (param_2 != 1) {
    FUN_00b34370();
    return;
  }
  if ((DAT_028a5c88 == (undefined8 *)0x0) || (DAT_028a5c91 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5c88 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028a5c88 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028a5c88 != (undefined8 *)0x0;
        DAT_028a5c88 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a5c90 == '\0') {
        DAT_028a5c90 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c130;
      if (DAT_0276c130 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c078;
      if (DAT_0276c078 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c070;
      if (DAT_0276c070 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c068;
      if (DAT_0276c068 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c060;
      if (DAT_0276c060 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026d7d38;
      if (DAT_026d7d38 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c050;
      if (DAT_0276c050 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c048;
      if (DAT_0276c048 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c040;
      if (DAT_0276c040 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c038;
      if (DAT_0276c038 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c030;
      if (DAT_0276c030 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026d7d40;
      if (DAT_026d7d40 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c020;
      if (DAT_0276c020 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c018;
      if (DAT_0276c018 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c010;
      if (DAT_0276c010 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c008;
      if (DAT_0276c008 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5c91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5c91 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = DAT_028a5c88;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_00c0ac90;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00c0ac90:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


