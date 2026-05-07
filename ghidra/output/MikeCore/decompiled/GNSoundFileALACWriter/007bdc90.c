// Function: FUN_007bdc90
// Address: 007bdc90
// Size: 618 bytes
// Class: GNSoundFileALACWriter
// String references:
//   "SInt64"
//   "UInt32"
//   "_dataSize"
//   "_formatID"
//   "_bytesPerPacket"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007bdc90(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_007b96b0();
  *unaff_RDI = &DAT_0252c518;
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_007bda60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272d420 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272d3e8 = FUN_007bda60();
        _DAT_0272d3e0 = "_dataSize";
        _DAT_0272d3f0 = 0;
        _DAT_0272d3f8 = 0x6c00;
        _DAT_0272d400 = "SInt64";
        _DAT_0272d408 = 0;
        uRam000000000272d410 = 0;
        _DAT_0272d418 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x15) = 0;
  lVar2 = FUN_007bda60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275d500 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275d4c8 = FUN_007bda60();
        _DAT_0275d4c0 = "_formatID";
        _DAT_0275d4d0 = 0;
        _DAT_0275d4d8 = 0x6900;
        _DAT_0275d4e0 = "UInt32";
        _DAT_0275d4e8 = 0;
        uRam000000000275d4f0 = 0;
        _DAT_0275d4f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xac) = 0;
  lVar2 = FUN_007bda60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272d470 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272d438 = FUN_007bda60();
        _DAT_0272d430 = "_bytesPerPacket";
        _DAT_0272d440 = 0;
        _DAT_0272d448 = 0x6900;
        _DAT_0272d450 = "UInt32";
        _DAT_0272d458 = 0;
        uRam000000000272d460 = 0;
        _DAT_0272d468 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_007bdf50();
  FUN_007be030();
  return;
}


