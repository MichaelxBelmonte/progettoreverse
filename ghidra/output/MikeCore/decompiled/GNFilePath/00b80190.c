// Function: FUN_00b80190
// Address: 00b80190
// Size: 674 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x00b802ce) */
/* WARNING: Removing unreachable block (ram,0x00b802da) */
/* WARNING: Removing unreachable block (ram,0x00b80374) */
/* WARNING: Removing unreachable block (ram,0x00b8037d) */
/* WARNING: Removing unreachable block (ram,0x00b803e9) */
/* WARNING: Removing unreachable block (ram,0x00b803f2) */
/* WARNING: Removing unreachable block (ram,0x00b80406) */
/* WARNING: Removing unreachable block (ram,0x00b8030f) */
/* WARNING: Removing unreachable block (ram,0x00b80318) */
/* WARNING: Removing unreachable block (ram,0x00b803b7) */
/* WARNING: Removing unreachable block (ram,0x00b8041a) */

ulonglong FUN_00b80190(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong *unaff_RDI;
  undefined8 unaff_R14;
  ulonglong uVar6;
  bool bVar7;
  longlong local_a8;
  char local_a0;
  longlong local_38;
  char local_30;
  
  if (*unaff_RDI == 0) {
    uVar6 = 0;
  }
  else {
    if ((DAT_028a5660 == (undefined8 *)0x0) || (DAT_028a5669 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5660 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_0258a670;
        (*DAT_0258a688)();
        if (DAT_028a5660 == puVar5) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          bVar2 = true;
          bVar1 = true;
          bVar7 = DAT_028a5660 != (undefined8 *)0x0;
          DAT_028a5660 = puVar5;
          if (bVar7) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5668 == '\0') {
          DAT_028a5668 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        FUN_00e38130(0,0,0);
        DAT_028a5669 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5669 = '\x01';
        FUN_00e8cb70();
      }
    }
    FUN_00b807b0();
    if ((local_30 == '\0') && (local_38 != 0)) {
      FUN_00d50b00();
    }
    if (local_38 == 0) {
      cVar3 = (**(code **)(*(longlong *)*unaff_RDI + 0x3a0))();
      if (cVar3 == '\0') {
        FUN_00b9bdf0();
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        uVar6 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
      }
      else {
        uVar6 = 0;
      }
      FUN_00d46300();
      FUN_00b80860();
    }
    else {
      uVar4 = FUN_00d45ad0();
      uVar6 = (ulonglong)uVar4;
      FUN_00d50b20();
    }
  }
  return uVar6 & 0xffffffff;
}


