// Function: FUN_00cab720
// Address: 00cab720
// Size: 516 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00cab8ea) */
/* WARNING: Removing unreachable block (ram,0x00cab8f3) */
/* WARNING: Removing unreachable block (ram,0x00cab86f) */
/* WARNING: Removing unreachable block (ram,0x00cab878) */
/* WARNING: Removing unreachable block (ram,0x00cab8fe) */
/* WARNING: Removing unreachable block (ram,0x00cab907) */
/* WARNING: Removing unreachable block (ram,0x00cab8b0) */
/* WARNING: Removing unreachable block (ram,0x00cab8b9) */
/* WARNING: Removing unreachable block (ram,0x00cab771) */
/* WARNING: Removing unreachable block (ram,0x00cab77a) */

void FUN_00cab720(void)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  bool bVar4;
  longlong local_38;
  char local_30;
  
  if ((int)unaff_RSI == unaff_RSI) {
    FUN_00d46530();
  }
  else {
    FUN_00d468f0();
  }
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  if ((DAT_028a72c0 == (undefined8 *)0x0) || (DAT_028a72c9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a72c0 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_0258a670;
      (*DAT_0258a688)();
      if (DAT_028a72c0 == puVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028a72c0 != (undefined8 *)0x0;
        DAT_028a72c0 = puVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a72c8 == '\0') {
        DAT_028a72c8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      DAT_028a72c9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a72c9 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00cab5c0();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  if (local_38 == 0) {
    FUN_00cab670();
    *unaff_RDI = 0;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *unaff_RDI = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


