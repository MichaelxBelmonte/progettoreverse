// Function: FUN_00834210
// Address: 00834210
// Size: 512 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "_dataSource"
//   "MUEnvelopeDrawPathDataSource"
//   "MUEnvelopeDrawPath"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00834210(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_02735548 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      iVar1 = FUN_00e7ddf0();
      if (DAT_02735508 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_02735458 = FUN_00d4fe50();
          _DAT_02735440 = "MUEnvelopeDrawPath";
          _DAT_02735448 = 0x40;
          _DAT_02735450 = FUN_00833ad0;
          _DAT_02735460 = 0;
          uRam0000000002735468 = 0;
          _DAT_02735470 = 0;
          _DAT_027354e8 = 0;
          uRam00000000027354f0 = 0;
          _DAT_027354f8 = 0;
          DAT_027354fa = 1;
          _DAT_02735478 = 0;
          uRam0000000002735480 = 0;
          _DAT_02735488 = 0;
          uRam0000000002735490 = 0;
          _DAT_02735498 = 0;
          uRam00000000027354a0 = 0;
          _DAT_027354a8 = 0;
          uRam00000000027354b0 = 0;
          _DAT_027354b8 = 0;
          uRam00000000027354c0 = 0;
          _DAT_027354c8 = 0;
          uRam00000000027354d0 = 0;
          _DAT_027354d8 = 0;
          uRam00000000027354e0 = 0;
          DAT_02735503 = 0;
          _DAT_027354fb = 0;
          ___cxa_guard_release();
        }
      }
      DAT_02735528 = (iVar1 != 0) << 6 | 0x82;
      _DAT_02735510 = "_dataSource";
      _DAT_02735518 = &DAT_02735440;
      _DAT_02735520 = 0;
      _DAT_02735530 = 0;
      uRam0000000002735538 = 0;
      _DAT_02735540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02735550 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02733cb0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027145d0 = "MUEnvelopeDrawPathDataSource";
          DAT_027145e0 = 0;
          _DAT_027145d8 = 0;
          ___cxa_guard_release();
        }
      }
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &DAT_02735510;
}


