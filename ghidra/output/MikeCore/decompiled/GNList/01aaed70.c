// Function: FUN_01aaed70
// Address: 01aaed70
// Size: 833 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01aaf057) */
/* WARNING: Removing unreachable block (ram,0x01aaf060) */
/* WARNING: Removing unreachable block (ram,0x01aaee6e) */
/* WARNING: Removing unreachable block (ram,0x01aaee7a) */
/* WARNING: Removing unreachable block (ram,0x01aaeeec) */
/* WARNING: Removing unreachable block (ram,0x01aaeef5) */
/* WARNING: Removing unreachable block (ram,0x01aaf06b) */
/* WARNING: Removing unreachable block (ram,0x01aaf074) */
/* WARNING: Removing unreachable block (ram,0x01aaefab) */
/* WARNING: Removing unreachable block (ram,0x01aaf00f) */
/* WARNING: Removing unreachable block (ram,0x01aaeff0) */
/* WARNING: Removing unreachable block (ram,0x01aaeea4) */
/* WARNING: Removing unreachable block (ram,0x01aaeead) */
/* WARNING: Removing unreachable block (ram,0x01aaf002) */
/* WARNING: Removing unreachable block (ram,0x01aaef93) */
/* WARNING: Removing unreachable block (ram,0x01aaef9d) */
/* WARNING: Removing unreachable block (ram,0x01aaefb4) */

void FUN_01aaed70(void)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar3;
  bool bVar4;
  longlong local_40;
  char local_38;
  
  if ((DAT_028b31c8 == (undefined8 *)0x0) || (DAT_028b31d1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b31c8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_0258a670;
      (*DAT_0258a688)();
      bVar4 = DAT_028b31c8 == (undefined8 *)0x0;
      DAT_028b31c8 = puVar2;
      if (((bVar4) || (FUN_00d50b20(), DAT_028b31c8 != (undefined8 *)0x0)) && (DAT_028b31d0 == '\0')
         ) {
        DAT_028b31d0 = '\x01';
        FUN_00e8cb90();
      }
      DAT_028b31d1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b31d1 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00cabdd0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if (local_40 != 0) {
    *unaff_RDI = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
  FUN_00ddb860();
  cVar1 = (**(code **)(MACH_HEADER._0_8_ + 0x410))();
  lVar3 = DAT_026e17f8;
  if (cVar1 != '\0') {
    if (DAT_026e17f8 != 0) {
      FUN_00d50b00();
    }
    cVar1 = (**(code **)(MACH_HEADER._0_8_ + 1000))(0,0);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      (**(code **)(MACH_HEADER._0_8_ + 0x380))();
      FUN_00d8f140();
      cVar1 = '\x01';
      lVar3 = 0;
      goto LAB_01aaf029;
    }
  }
  lVar3 = *unaff_RSI;
  if (lVar3 == 0) {
    cVar1 = '\x01';
    lVar3 = 0;
  }
  else {
    cVar1 = (char)unaff_RSI[1];
    if (cVar1 != '\0') {
      FUN_00d50b00();
    }
  }
LAB_01aaf029:
  FUN_00cabe80();
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((cVar1 == '\0') && (lVar3 != 0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return;
}


