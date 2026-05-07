// Function: FUN_00cc6460
// Address: 00cc6460
// Size: 560 bytes
// Class: GNBinaryKeyValueArchiverDelegate
// String references:
//   "GNBinaryKeyValueArchiverDelegate"
//   "GNBinaryKeyValueUnarchiverDelegate"
//   "GNEditingSyncClient"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cc6460(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  unaff_RDI[2] = &DAT_0258ce70;
  if (DAT_026ceea0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026cee88 = "GNBinaryKeyValueArchiverDelegate";
      DAT_026cee98 = 0;
      _DAT_026cee90 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  unaff_RDI[3] = &DAT_0258dd80;
  if (DAT_02710710 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026cf580 = "GNBinaryKeyValueUnarchiverDelegate";
      DAT_026cf590 = 0;
      _DAT_026cf588 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_0256a9e8;
  unaff_RDI[2] = &DAT_0256ad78;
  unaff_RDI[3] = &DAT_0256adb0;
  FUN_00cc66e0();
  *(undefined4 *)(unaff_RDI + 5) = 0;
  if (DAT_02773900 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02773850 = FUN_00d4fe50();
      _DAT_02773838 = "GNEditingSyncClient";
      _DAT_02773840 = 0x40;
      _DAT_02773848 = FUN_00cc1250;
      _DAT_02773858 = 0;
      uRam0000000002773860 = 0;
      _DAT_02773868 = 0;
      uRam0000000002773870 = 0;
      _DAT_02773878 = 0;
      uRam0000000002773880 = 0;
      _DAT_02773888 = 0;
      uRam0000000002773890 = 0;
      _DAT_02773898 = 0;
      uRam00000000027738a0 = 0;
      _DAT_027738a8 = 0;
      uRam00000000027738b0 = 0;
      _DAT_027738b8 = 0;
      uRam00000000027738c0 = 0;
      _DAT_027738c8 = 0;
      uRam00000000027738d0 = 0;
      _DAT_027738d8 = 0;
      uRam00000000027738e0 = 0;
      _DAT_027738e8 = 0;
      _uRam00000000027738f0 = 0;
      _DAT_027738f8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027738f3 == '\0') {
    FUN_00cc69e0();
    FUN_00e87980();
  }
  FUN_00cc6b50();
  FUN_00cc6e40();
  return;
}


