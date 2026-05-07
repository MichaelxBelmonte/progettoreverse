// Function: FUN_01a771f0
// Address: 01a771f0
// Size: 523 bytes
// Class: MUTimeHandleToolViewInfo
// String references:
//   "MUTimeHandleToolViewInfo"


/* WARNING: Removing unreachable block (ram,0x01a77310) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a771f0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_48;
  longlong local_40;
  undefined8 *local_28;
  
  if ((DAT_027e2958 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027e28a8 = FUN_00d4fe50();
    _DAT_027e2890 = "MUTimeHandleToolViewInfo";
    _DAT_027e2898 = 0x20;
    _DAT_027e28a0 = FUN_01a80ad0;
    _DAT_027e28b0 = 0;
    uRam00000000027e28b8 = 0;
    _DAT_027e28c0 = 0;
    _DAT_027e2938 = 0;
    uRam00000000027e2940 = 0;
    _DAT_027e2948 = 0;
    DAT_027e294a = 1;
    _DAT_027e28c8 = 0;
    uRam00000000027e28d0 = 0;
    _DAT_027e28d8 = 0;
    uRam00000000027e28e0 = 0;
    _DAT_027e28e8 = 0;
    uRam00000000027e28f0 = 0;
    _DAT_027e28f8 = 0;
    uRam00000000027e2900 = 0;
    _DAT_027e2908 = 0;
    uRam00000000027e2910 = 0;
    _DAT_027e2918 = 0;
    uRam00000000027e2920 = 0;
    _DAT_027e2928 = 0;
    uRam00000000027e2930 = 0;
    DAT_027e2953 = 0;
    _DAT_027e294b = 0;
    ___cxa_guard_release();
  }
  if (DAT_027e294b == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    local_28 = (undefined8 *)0x0;
    if (1 < DAT_02802630) {
      local_28 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_28 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_00d4ff80();
    FUN_01a80dc0();
    FUN_01a810f0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (local_28 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}


