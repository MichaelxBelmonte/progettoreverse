// Function: FUN_007c6620
// Address: 007c6620
// Size: 820 bytes
// Class: GNInt
// String references:
//   "bool"
//   "SInt64"
//   "_sampleRate"
//   "_sampleFrames"
//   "_channelCount"
//   "_didReadMetadata"
//   "double"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c6620(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02542f00;
  FUN_007b52b0();
  FUN_007b5570();
  *unaff_RDI = &DAT_025436d8;
  unaff_RDI[4] = 0;
  lVar2 = FUN_007c63e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272ea70 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272ea38 = FUN_007c63e0();
        _DAT_0272ea30 = "_sampleFrames";
        _DAT_0272ea40 = 0;
        _DAT_0272ea48 = 0x6c00;
        _DAT_0272ea50 = "SInt64";
        _DAT_0272ea58 = 0;
        uRam000000000272ea60 = 0;
        _DAT_0272ea68 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 5) = 0;
  lVar2 = FUN_007c63e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272eab8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272ea80 = FUN_007c63e0();
        _DAT_0272ea78 = "_channelCount";
        _DAT_0272ea88 = 0;
        _DAT_0272ea90 = 0x6900;
        _DAT_0272ea98 = "GNInt";
        _DAT_0272eaa0 = 0;
        uRam000000000272eaa8 = 0;
        _DAT_0272eab0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_007c63e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272eb00 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272eac8 = FUN_007c63e0();
        _DAT_0272eac0 = "_sampleRate";
        _DAT_0272ead0 = 0;
        _DAT_0272ead8 = 0x6400;
        _DAT_0272eae0 = "double";
        _DAT_0272eae8 = 0;
        uRam000000000272eaf0 = 0;
        _DAT_0272eaf8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 7) = 0;
  lVar2 = FUN_007c63e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272eb48 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272eb10 = FUN_007c63e0();
        _DAT_0272eb08 = "_didReadMetadata";
        _DAT_0272eb18 = 0;
        _DAT_0272eb20 = 0x6200;
        _DAT_0272eb28 = "bool";
        _DAT_0272eb30 = 0;
        uRam000000000272eb38 = 0;
        _DAT_0272eb40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_007c6a10();
  FUN_007c6af0();
  return;
}


