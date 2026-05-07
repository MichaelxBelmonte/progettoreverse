// Function: FUN_00057c70
// Address: 00057c70
// Size: 756 bytes
// Class: GNRange
// String references:
//   "bool"
//   "_destinationCardinality"
//   "GNRange"
//   "_sourceOwnsDestination"
//   "_sourceRetainsDestination"
//   "_isDestinationListOrdered"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00057c70(void)

{
  int iVar1;
  longlong lVar2;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_000278b0();
  *unaff_RDI = &DAT_025783f8;
  FUN_00057ff0();
  FUN_000580d0();
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_00057a80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d5140 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d5108 = FUN_00057a80();
        _DAT_026d5100 = "_destinationCardinality";
        _DAT_026d5110 = 0;
        _DAT_026d5118 = 0x4300;
        _DAT_026d5120 = "GNRange";
        _DAT_026d5128 = 0;
        uRam00000000026d5130 = 0;
        _DAT_026d5138 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0xd) = 0;
  lVar2 = FUN_00057a80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d5188 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d5150 = FUN_00057a80();
        _DAT_026d5148 = "_sourceOwnsDestination";
        _DAT_026d5158 = 0;
        _DAT_026d5160 = 0x6200;
        _DAT_026d5168 = "bool";
        _DAT_026d5170 = 0;
        uRam00000000026d5178 = 0;
        _DAT_026d5180 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x69) = 0;
  lVar2 = FUN_00057a80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d51d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d5198 = FUN_00057a80();
        _DAT_026d5190 = "_sourceRetainsDestination";
        _DAT_026d51a0 = 0;
        _DAT_026d51a8 = 0x6200;
        _DAT_026d51b0 = "bool";
        _DAT_026d51b8 = 0;
        uRam00000000026d51c0 = 0;
        _DAT_026d51c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x6a) = 0;
  lVar2 = FUN_00057a80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d5218 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d51e0 = FUN_00057a80();
        _DAT_026d51d8 = "_isDestinationListOrdered";
        _DAT_026d51e8 = 0;
        _DAT_026d51f0 = 0x6200;
        _DAT_026d51f8 = "bool";
        _DAT_026d5200 = 0;
        uRam00000000026d5208 = 0;
        _DAT_026d5210 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xe] = *(undefined8 *)(unaff_RSI + 0x70);
  return;
}


