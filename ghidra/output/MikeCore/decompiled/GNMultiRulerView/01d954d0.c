// Function: FUN_01d954d0
// Address: 01d954d0
// Size: 533 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d954d0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_168;
  undefined8 *local_28;
  
  if (DAT_027f1760 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f16b0 = FUN_0006d940();
      _DAT_027f1698 = "GNMultiRulerView";
      _DAT_027f16a0 = 0x140;
      _DAT_027f16a8 = FUN_01da14a0;
      _DAT_027f16b8 = 0;
      uRam00000000027f16c0 = 0;
      _DAT_027f16c8 = 0;
      uRam00000000027f16d0 = 0;
      _DAT_027f16d8 = 0;
      uRam00000000027f16e0 = 0;
      _DAT_027f16e8 = 0;
      uRam00000000027f16f0 = 0;
      _DAT_027f16f8 = 0;
      uRam00000000027f1700 = 0;
      _DAT_027f1708 = 0;
      uRam00000000027f1710 = 0;
      _DAT_027f1718 = 0;
      uRam00000000027f1720 = 0;
      _DAT_027f1728 = 0;
      uRam00000000027f1730 = 0;
      _DAT_027f1738 = 0;
      uRam00000000027f1740 = 0;
      _DAT_027f1748 = 0;
      _uRam00000000027f1750 = 0;
      _DAT_027f1758 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f1753 == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    local_28 = (undefined8 *)0x0;
    if (1 < DAT_02802630) {
      local_28 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_28 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_000a32b0();
    FUN_01da1d70();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_168 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    if (local_28 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
  }
  return;
}


