// Reconstructed implementation of GNSoundFileALACWriter
// From MikeCore binary — reverse-engineered pseudocode

#include "GNSoundFileALACWriter.h"

// ============================================================
// @007bc3f0 — 847 bytes
// str: ""GNSoundFileALACWriter""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007bc3f0(void)

{
  int iVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_007b7610();
  *unaff_RDI = &DAT_025404d8;
  unaff_RDI[9] = 0;
  if (DAT_0272d170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0275d768 = FUN_007b6e40();
      _DAT_0275d750 = "GNSoundFileALACWriter";
      _DAT_0275d758 = 0x80;
      _DAT_0275d760 = FUN_007bc390;
      _DAT_0275d770 = 0;
      uRam000000000275d778 = 0;
      _DAT_0275d780 = 0;
      _DAT_0275d7f8 = 0;
      uRam000000000275d800 = 0;
      _DAT_0275d808 = 0;
      DAT_0275d80a = 1;
      _DAT_0275d788 = 0;
      uRam000000000275d790 = 0;
      _DAT_0275d798 = 0;
      uRam000000000275d7a0 = 0;
      _DAT_0275d7a8 = 0;
      uRam000000000275d7b0 = 0;
      _DAT_0275d7b8 = 0;
      uRam000000000275d7c0 = 0;
      _DAT_0275d7c8 = 0;
      uRam000000000275d7d0 = 0;
      _DAT_0275d7d8 = 0;
      uRam000000000275d7e0 = 0;
      _DAT_0275d7e8 = 0;
      uRam000000000275d7f0 = 0;
      DAT_0275d813 = 0;
      _DAT_0275d80b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0275d80b == '\0') {
    FUN_007bc810();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 10) = 0;
  if (DAT_0272d170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0275d768 = FUN_007b6e40();
      _DAT_0275d750 = "GNSoundFileALACWriter";
      _DAT_0275d758 = 0x80;
      _DAT_0275d760 = FUN_007bc390;
      _DAT_0275d770 = 0;
      uRam000000000275d778 = 0;
      _DAT_0275d780 = 0;
      _DAT_0275d7f8 = 0;
      uRam000000000275d800 = 0;
      _DAT_0275d808 = 0;
      DAT_0275d80a = 1;
      _DAT_0275d788 = 0;
      uRam000000000275d790 = 0;
      _DAT_0275d798 = 0;
      uRam000000000275d7a0 = 0;
      _DAT_0275d7a8 = 0;
      uRam000000000275d7b0 = 0;
      _DAT_0275d7b8 = 0;
      uRam000000000275d7c0 = 0;
      _DAT_0275d7c8 = 0;
      uRam000000000275d7d0 = 0;
      _DAT_0275d7d8 = 0;
      uRam000000000275d7e0 = 0;
      _DAT_0275d7e8 = 0;
      uRam000000000275d7f0 = 0;
      DAT_0275d813 = 0;
      _DAT_0275d80b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0275d80b == '\0') {
    FUN_007bc9a0();
    FUN_00e87980();
  }
  FUN_007bcb30();
  FUN_007bcdf0();
  FUN_007bd0b0();
  unaff_RDI[0xe] = 0;
  if (DAT_0272d170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0275d768 = FUN_007b6e40();
      _DAT_0275d750 = "GNSoundFileALACWriter";
      _DAT_0275d758 = 0x80;
      _DAT_0275d760 = FUN_007bc390;
      _DAT_0275d770 = 0;
      uRam000000000275d778 = 0;
      _DAT_0275d780 = 0;
      _DAT_0275d7f8 = 0;
      uRam000000000275d800 = 0;
      _DAT_0275d808 = 0;
      DAT_0275d80a = 1;
      _DAT_0275d788 = 0;
      uRam000000000275d790 = 0;
      _DAT_0275d798 = 0;
      uRam000000000275d7a0 = 0;
      _DAT_0275d7a8 = 0;
      uRam000000000275d7b0 = 0;
      _DAT_0275d7b8 = 0;
      uRam000000000275d7c0 = 0;
      _DAT_0275d7c8 = 0;
      uRam000000000275d7d0 = 0;
      _DAT_0275d7d8 = 0;
      uRam000000000275d7e0 = 0;
      _DAT_0275d7e8 = 0;
      uRam000000000275d7f0 = 0;
      DAT_0275d813 = 0;
      _DAT_0275d80b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0275d80b == '\0') {
    FUN_007bd370();
    FUN_00e87980();
  }
  unaff_RDI[0xf] = *(undefined8 *)(unaff_RSI + 0x78);
  return;
}




// ============================================================
// @007bd5b0 — 619 bytes
// str: ""UInt32""
// str: ""_sampleRate""
// str: ""short""
// str: ""UInt64""
// str: ""_time""
// ============================================================

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




// ============================================================
// @007bdc90 — 618 bytes
// str: ""SInt64""
// str: ""UInt32""
// str: ""_dataSize""
// str: ""_formatID""
// str: ""_bytesPerPacket""
// ============================================================

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



