// Function: FUN_007bd5b0
// Address: 007bd5b0
// Size: 619 bytes
// Class: GNSoundFileALACWriter
// String references:
//   "UInt32"
//   "_sampleRate"
//   "short"
//   "UInt64"
//   "_time"
//   "_bitsPerSample"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007bd5b0(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_007bc3f0();
  *unaff_RDI = &DAT_02538910;
  FUN_007bd8a0();
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_007bc130();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272d2b0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272d278 = FUN_007bc130();
        _DAT_0272d270 = "_time";
        _DAT_0272d280 = 0;
        _DAT_0272d288 = 0x6c00;
        _DAT_0272d290 = "UInt64";
        _DAT_0272d298 = 0;
        uRam000000000272d2a0 = 0;
        _DAT_0272d2a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x12) = 0;
  lVar2 = FUN_007bc130();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275da70 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275da38 = FUN_007bc130();
        _DAT_0275da30 = "_sampleRate";
        _DAT_0275da40 = 0;
        _DAT_0275da48 = 0x6900;
        _DAT_0275da50 = "UInt32";
        _DAT_0275da58 = 0;
        uRam000000000275da60 = 0;
        _DAT_0275da68 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_007bd980();
  *(undefined2 *)(unaff_RDI + 0x14) = 0;
  lVar2 = FUN_007bc130();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275dac0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275da88 = FUN_007bc130();
        _DAT_0275da80 = "_bitsPerSample";
        _DAT_0275da90 = 0;
        _DAT_0275da98 = 0x7300;
        _DAT_0275daa0 = "short";
        _DAT_0275daa8 = 0;
        uRam000000000275dab0 = 0;
        _DAT_0275dab8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


