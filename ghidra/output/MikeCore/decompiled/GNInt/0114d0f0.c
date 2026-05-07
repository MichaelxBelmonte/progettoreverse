// Function: FUN_0114d0f0
// Address: 0114d0f0
// Size: 561 bytes
// Class: GNInt
// String references:
//   "_volume"
//   "double"
//   "GNInt"
//   "_volumeInc"
//   "_volumeSteps"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0114d0f0(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_010f30b0();
  *unaff_RDI = &DAT_025db568;
  unaff_RDI[0x1e] = 0;
  lVar2 = FUN_0114cea0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279ec50 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279ec18 = FUN_0114cea0();
        _DAT_0279ec10 = "_volume";
        _DAT_0279ec20 = 0;
        _DAT_0279ec28 = 0x6400;
        _DAT_0279ec30 = "double";
        _DAT_0279ec38 = 0;
        uRam000000000279ec40 = 0;
        _DAT_0279ec48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x1f] = 0;
  lVar2 = FUN_0114cea0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279ec98 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279ec60 = FUN_0114cea0();
        _DAT_0279ec58 = "_volumeInc";
        _DAT_0279ec68 = 0;
        _DAT_0279ec70 = 0x6400;
        _DAT_0279ec78 = "double";
        _DAT_0279ec80 = 0;
        uRam000000000279ec88 = 0;
        _DAT_0279ec90 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x20) = 0;
  lVar2 = FUN_0114cea0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279ece0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279eca8 = FUN_0114cea0();
        _DAT_0279eca0 = "_volumeSteps";
        _DAT_0279ecb0 = 0;
        _DAT_0279ecb8 = 0x6900;
        _DAT_0279ecc0 = "GNInt";
        _DAT_0279ecc8 = 0;
        uRam000000000279ecd0 = 0;
        _DAT_0279ecd8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


