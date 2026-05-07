// Function: FUN_00cc56c0
// Address: 00cc56c0
// Size: 560 bytes
// Class: GNBinaryKeyValueArchiverDelegate
// String references:
//   "GNBinaryKeyValueArchiverDelegate"
//   "GNBinaryKeyValueUnarchiverDelegate"
//   "GNEditingSyncServer"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cc56c0(void)

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
  *unaff_RDI = &DAT_0256a5d0;
  unaff_RDI[2] = &DAT_0256a968;
  unaff_RDI[3] = &DAT_0256a9a0;
  FUN_00cc5940();
  *(undefined4 *)(unaff_RDI + 5) = 0;
  if (DAT_02773830 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02773780 = FUN_00d4fe50();
      _DAT_02773768 = "GNEditingSyncServer";
      _DAT_02773770 = 0x40;
      _DAT_02773778 = FUN_00cc11f0;
      _DAT_02773788 = 0;
      uRam0000000002773790 = 0;
      _DAT_02773798 = 0;
      uRam00000000027737a0 = 0;
      _DAT_027737a8 = 0;
      uRam00000000027737b0 = 0;
      _DAT_027737b8 = 0;
      uRam00000000027737c0 = 0;
      _DAT_027737c8 = 0;
      uRam00000000027737d0 = 0;
      _DAT_027737d8 = 0;
      uRam00000000027737e0 = 0;
      _DAT_027737e8 = 0;
      uRam00000000027737f0 = 0;
      _DAT_027737f8 = 0;
      uRam0000000002773800 = 0;
      _DAT_02773808 = 0;
      uRam0000000002773810 = 0;
      _DAT_02773818 = 0;
      _uRam0000000002773820 = 0;
      _DAT_02773828 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02773823 == '\0') {
    FUN_00cc5c40();
    FUN_00e87980();
  }
  FUN_00cc5db0();
  FUN_00cc60a0();
  return;
}


