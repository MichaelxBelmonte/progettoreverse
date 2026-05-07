// Function: FUN_00043ac0
// Address: 00043ac0
// Size: 538 bytes
// Class: GNFraction
// String references:
//   "bool"
//   "_showsMixedFraction"
//   "_reducingDisabled"
//   "_resolution"
//   "GNFraction"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00043ac0(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_025910f8;
  *(undefined1 *)((longlong)unaff_RDI + 0xc) = 0;
  lVar2 = FUN_000438c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027785d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02778598 = FUN_000438c0();
        _DAT_02778590 = "_showsMixedFraction";
        _DAT_027785a0 = 0;
        _DAT_027785a8 = 0x6200;
        _DAT_027785b0 = "bool";
        _DAT_027785b8 = 0;
        uRam00000000027785c0 = 0;
        _DAT_027785c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xd) = 0;
  lVar2 = FUN_000438c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d1c50 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d1c18 = FUN_000438c0();
        _DAT_026d1c10 = "_reducingDisabled";
        _DAT_026d1c20 = 0;
        _DAT_026d1c28 = 0x6200;
        _DAT_026d1c30 = "bool";
        _DAT_026d1c38 = 0;
        uRam00000000026d1c40 = 0;
        _DAT_026d1c48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[2] = 0x100000000;
  lVar2 = FUN_000438c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02778620 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027785e8 = FUN_000438c0();
        _DAT_027785e0 = "_resolution";
        _DAT_027785f0 = 0;
        _DAT_027785f8 = 0x7100;
        _DAT_02778600 = "GNFraction";
        _DAT_02778608 = 0;
        uRam0000000002778610 = 0;
        _DAT_02778618 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


