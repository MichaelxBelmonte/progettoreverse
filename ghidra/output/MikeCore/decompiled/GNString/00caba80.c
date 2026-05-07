// Function: FUN_00caba80
// Address: 00caba80
// Size: 503 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00cabc3b) */
/* WARNING: Removing unreachable block (ram,0x00cabc44) */
/* WARNING: Removing unreachable block (ram,0x00cabbbe) */
/* WARNING: Removing unreachable block (ram,0x00cabbc7) */
/* WARNING: Removing unreachable block (ram,0x00cabc4f) */
/* WARNING: Removing unreachable block (ram,0x00cabc58) */
/* WARNING: Removing unreachable block (ram,0x00cabac0) */
/* WARNING: Removing unreachable block (ram,0x00cabac9) */
/* WARNING: Removing unreachable block (ram,0x00cabc01) */
/* WARNING: Removing unreachable block (ram,0x00cabc0a) */

void FUN_00caba80(void)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong *unaff_RDI;
  bool bVar4;
  longlong local_38;
  char local_30;
  
  FUN_00d93730();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  if ((DAT_028a72a0 == (undefined8 *)0x0) || (DAT_028a72a9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a72a0 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_0258a670;
      (*DAT_0258a688)();
      if (DAT_028a72a0 == puVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028a72a0 != (undefined8 *)0x0;
        DAT_028a72a0 = puVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a72a8 == '\0') {
        DAT_028a72a8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      DAT_028a72a9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a72a9 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00cabdd0();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  if (local_38 == 0) {
    FUN_00cabe80();
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


