// Function: FUN_011b4770
// Address: 011b4770
// Size: 561 bytes
// Class: GNInt
// String references:
//   "double"
//   "GNInt"
//   "_panorama"
//   "_panoramaInc"
//   "_panoramaSteps"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011b4770(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_010f30b0();
  *unaff_RDI = &DAT_025d5c88;
  unaff_RDI[0x1e] = 0;
  lVar2 = FUN_011b4520();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b2fe0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b2fa8 = FUN_011b4520();
        _DAT_027b2fa0 = "_panorama";
        _DAT_027b2fb0 = 0;
        _DAT_027b2fb8 = 0x6400;
        _DAT_027b2fc0 = "double";
        _DAT_027b2fc8 = 0;
        uRam00000000027b2fd0 = 0;
        _DAT_027b2fd8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x1f] = 0;
  lVar2 = FUN_011b4520();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b3028 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b2ff0 = FUN_011b4520();
        _DAT_027b2fe8 = "_panoramaInc";
        _DAT_027b2ff8 = 0;
        _DAT_027b3000 = 0x6400;
        _DAT_027b3008 = "double";
        _DAT_027b3010 = 0;
        uRam00000000027b3018 = 0;
        _DAT_027b3020 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x20) = 0;
  lVar2 = FUN_011b4520();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b3070 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b3038 = FUN_011b4520();
        _DAT_027b3030 = "_panoramaSteps";
        _DAT_027b3040 = 0;
        _DAT_027b3048 = 0x6900;
        _DAT_027b3050 = "GNInt";
        _DAT_027b3058 = 0;
        uRam00000000027b3060 = 0;
        _DAT_027b3068 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


