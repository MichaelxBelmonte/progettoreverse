// Function: FUN_00b10260
// Address: 00b10260
// Size: 538 bytes
// Class: GNInt
// String references:
//   "void *"
//   "_overloudEffectID"
//   "_overloudInstance"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b10260(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_005fea00();
  *unaff_RDI = &DAT_0254f0b8;
  FUN_00b10520();
  FUN_00b10600();
  FUN_00b106e0();
  *(undefined4 *)(unaff_RDI + 0x15) = 0;
  lVar2 = FUN_00b10020();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b107c0();
    FUN_00e87980();
  }
  FUN_00b10940();
  *(undefined4 *)(unaff_RDI + 0x17) = 0;
  lVar2 = FUN_00b10020();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275bdc8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275bd90 = FUN_00b10020();
        _DAT_0275bd88 = "_overloudEffectID";
        _DAT_0275bd98 = 0;
        _DAT_0275bda0 = 0x6901;
        _DAT_0275bda8 = "GNInt";
        _DAT_0275bdb0 = 0;
        uRam000000000275bdb8 = 0;
        _DAT_0275bdc0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_00b10020();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275be10 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275bdd8 = FUN_00b10020();
        _DAT_0275bdd0 = "_overloudInstance";
        _DAT_0275bde0 = 0;
        _DAT_0275bde8 = 0x5e01;
        _DAT_0275bdf0 = "void *";
        _DAT_0275bdf8 = 0;
        uRam000000000275be00 = 0;
        _DAT_0275be08 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


