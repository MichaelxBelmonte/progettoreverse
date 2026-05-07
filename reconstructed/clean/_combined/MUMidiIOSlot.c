// ===================================================================
// MUMidiIOSlot — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 010dd260
// ============================================================
// Function: FUN_010dd260
// Address: 010dd260
// Size: 508 bytes
// Class: MUMidiIOSlot
// String references:
//   "MUMidiIOSlot"

void FUN_010dd260(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_30;
  int64_t local_28;
  
  if ((g_027a6060 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027a5fb0 = FUN_000e3190();
    g_027a5f98 = "MUMidiIOSlot";
    g_027a5fa0 = 0x48;
    g_027a5fa8 = FUN_0116fa10;
    g_027a5fb8 = 0;
    ram_00000000027a5fc0 = 0;
    g_027a5fc8 = 0;
    ram_00000000027a5fd0 = 0;
    g_027a5fd8 = 0;
    ram_00000000027a5fe0 = 0;
    g_027a5fe8 = 0;
    ram_00000000027a5ff0 = 0;
    g_027a5ff8 = 0;
    ram_00000000027a6000 = 0;
    g_027a6008 = 0;
    ram_00000000027a6010 = 0;
    g_027a6018 = 0;
    ram_00000000027a6020 = 0;
    g_027a6028 = 0;
    ram_00000000027a6030 = 0;
    g_027a6038 = 0;
    ram_00000000027a6040 = 0;
    g_027a6048 = 0;
    _ram_00000000027a6050 = 0;
    g_027a6058 = 0;
    ___cxa_guard_release();
  }
  if (g_027a6053 == '\0') {
    FUN_010d94f0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_00d4ff80();
    FUN_010f7c30();
    FUN_0116fb90();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_28 != 0) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}

