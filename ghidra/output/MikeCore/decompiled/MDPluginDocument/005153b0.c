// Function: FUN_005153b0
// Address: 005153b0
// Size: 512 bytes
// Class: MDPluginDocument
// String references:
//   "MDPluginDocument"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005153b0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  if (DAT_026e3d90 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270bae8 = FUN_0015e380();
      _DAT_0270bad0 = "MDPluginDocument";
      _DAT_0270bad8 = 0x80;
      _DAT_0270bae0 = FUN_0015e980;
      _DAT_0270baf0 = 0;
      uRam000000000270baf8 = 0;
      _DAT_0270bb00 = 0;
      _DAT_0270bb78 = 0;
      uRam000000000270bb80 = 0;
      _DAT_0270bb88 = 0;
      DAT_0270bb8a = 2;
      _DAT_0270bb08 = 0;
      uRam000000000270bb10 = 0;
      _DAT_0270bb18 = 0;
      uRam000000000270bb20 = 0;
      _DAT_0270bb28 = 0;
      uRam000000000270bb30 = 0;
      _DAT_0270bb38 = 0;
      uRam000000000270bb40 = 0;
      _DAT_0270bb48 = 0;
      uRam000000000270bb50 = 0;
      _DAT_0270bb58 = 0;
      uRam000000000270bb60 = 0;
      _DAT_0270bb68 = 0;
      uRam000000000270bb70 = 0;
      DAT_0270bb93 = 0;
      _DAT_0270bb8b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270bb8b != '\0') {
    return;
  }
  FUN_0053c370();
  FUN_00e87760();
  FUN_00d4ff40();
  if (1 < DAT_02802630) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
  }
  FUN_00d50c00();
  FUN_0053c980();
  FUN_00d50c00();
  uVar3 = FUN_00e87770();
  FUN_00e87920(uVar3,0);
  FUN_0015e250();
  FUN_0015e250();
  return;
}


