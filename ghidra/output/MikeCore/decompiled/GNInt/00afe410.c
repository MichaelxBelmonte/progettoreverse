// Function: FUN_00afe410
// Address: 00afe410
// Size: 559 bytes
// Class: GNInt
// String references:
//   "float"
//   "_frame"
//   "_frequency"
//   "_amplitude"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00afe410(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_005fea00();
  *unaff_RDI = &DAT_02533468;
  *(undefined4 *)(unaff_RDI + 0x12) = 0;
  lVar2 = FUN_00afe200();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757208 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027571d0 = FUN_00afe200();
        _DAT_027571c8 = "_frequency";
        _DAT_027571d8 = 0;
        _DAT_027571e0 = 0x6600;
        _DAT_027571e8 = "float";
        _DAT_027571f0 = 0;
        uRam00000000027571f8 = 0;
        _DAT_02757200 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x94) = 0;
  lVar2 = FUN_00afe200();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757250 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757218 = FUN_00afe200();
        _DAT_02757210 = "_amplitude";
        _DAT_02757220 = 0;
        _DAT_02757228 = 0x6600;
        _DAT_02757230 = "float";
        _DAT_02757238 = 0;
        uRam0000000002757240 = 0;
        _DAT_02757248 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x13) = 0;
  lVar2 = FUN_00afe200();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757298 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757260 = FUN_00afe200();
        _DAT_02757258 = "_frame";
        _DAT_02757268 = 0;
        _DAT_02757270 = 0x6900;
        _DAT_02757278 = "GNInt";
        _DAT_02757280 = 0;
        uRam0000000002757288 = 0;
        _DAT_02757290 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


