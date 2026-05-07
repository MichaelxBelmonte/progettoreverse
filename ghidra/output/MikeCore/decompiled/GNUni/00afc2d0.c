// Function: FUN_00afc2d0
// Address: 00afc2d0
// Size: 1989 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNAudioProcessor"
//   "UInt64"
//   "_loadedTargetRingBufferIndex"
//   "_targetRingBufferSize"
//   "_targetRingBufferMask"
//   "_loadedSourceRingBufferIndex"
//   "_sourceRingBufferSize"
//   "_sourceRingBufferMask"
//   "_targetSampleIndex"
//   "_sourceSampleRate"
//   "_targetSampleRate"
//   "_rateFactor"
//   "double"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00afc2d0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_005fea00();
  *unaff_RDI = &DAT_02547748;
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00afcb90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNAudioProcessor");
  }
  unaff_RDI[0x13] = *(undefined8 *)(unaff_RSI + 0x98);
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02756980 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02756948 = FUN_00afc080();
        _DAT_02756940 = "_loadedTargetRingBufferIndex";
        _DAT_02756950 = 0;
        _DAT_02756958 = 0x6c00;
        _DAT_02756960 = "UInt64";
        _DAT_02756968 = 0;
        uRam0000000002756970 = 0;
        _DAT_02756978 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x15) = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027569c8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02756990 = FUN_00afc080();
        _DAT_02756988 = "_targetRingBufferSize";
        _DAT_02756998 = 0;
        _DAT_027569a0 = 0x6900;
        _DAT_027569a8 = "GNInt";
        _DAT_027569b0 = 0;
        uRam00000000027569b8 = 0;
        _DAT_027569c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xac) = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02756a10 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027569d8 = FUN_00afc080();
        _DAT_027569d0 = "_targetRingBufferMask";
        _DAT_027569e0 = 0;
        _DAT_027569e8 = 0x6900;
        _DAT_027569f0 = "GNInt";
        _DAT_027569f8 = 0;
        uRam0000000002756a00 = 0;
        _DAT_02756a08 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x16] = *(undefined8 *)(unaff_RSI + 0xb0);
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02756a58 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02756a20 = FUN_00afc080();
        _DAT_02756a18 = "_loadedSourceRingBufferIndex";
        _DAT_02756a28 = 0;
        _DAT_02756a30 = 0x6c00;
        _DAT_02756a38 = "UInt64";
        _DAT_02756a40 = 0;
        uRam0000000002756a48 = 0;
        _DAT_02756a50 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x18) = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02756aa0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02756a68 = FUN_00afc080();
        _DAT_02756a60 = "_sourceRingBufferSize";
        _DAT_02756a70 = 0;
        _DAT_02756a78 = 0x6900;
        _DAT_02756a80 = "GNInt";
        _DAT_02756a88 = 0;
        uRam0000000002756a90 = 0;
        _DAT_02756a98 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xc4) = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02756ae8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02756ab0 = FUN_00afc080();
        _DAT_02756aa8 = "_sourceRingBufferMask";
        _DAT_02756ab8 = 0;
        _DAT_02756ac0 = 0x6900;
        _DAT_02756ac8 = "GNInt";
        _DAT_02756ad0 = 0;
        uRam0000000002756ad8 = 0;
        _DAT_02756ae0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x19] = *(undefined8 *)(unaff_RSI + 200);
  unaff_RDI[0x1a] = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02756b30 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02756af8 = FUN_00afc080();
        _DAT_02756af0 = "_targetSampleIndex";
        _DAT_02756b00 = 0;
        _DAT_02756b08 = 0x6c00;
        _DAT_02756b10 = "UInt64";
        _DAT_02756b18 = 0;
        uRam0000000002756b20 = 0;
        _DAT_02756b28 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x1b] = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02756b78 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02756b40 = FUN_00afc080();
        _DAT_02756b38 = "_sourceSampleRate";
        _DAT_02756b48 = 0;
        _DAT_02756b50 = 0x6400;
        _DAT_02756b58 = "double";
        _DAT_02756b60 = 0;
        uRam0000000002756b68 = 0;
        _DAT_02756b70 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x1c] = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02756bc0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02756b88 = FUN_00afc080();
        _DAT_02756b80 = "_targetSampleRate";
        _DAT_02756b90 = 0;
        _DAT_02756b98 = 0x6400;
        _DAT_02756ba0 = "double";
        _DAT_02756ba8 = 0;
        uRam0000000002756bb0 = 0;
        _DAT_02756bb8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x1d] = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02756c08 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02756bd0 = FUN_00afc080();
        _DAT_02756bc8 = "_rateFactor";
        _DAT_02756bd8 = 0;
        _DAT_02756be0 = 0x6400;
        _DAT_02756be8 = "double";
        _DAT_02756bf0 = 0;
        uRam0000000002756bf8 = 0;
        _DAT_02756c00 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1e) = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00afcc80();
    FUN_00e87980();
  }
  return;
}


