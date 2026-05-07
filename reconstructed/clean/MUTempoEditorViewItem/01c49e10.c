// Function: FUN_01c49e10
// Address: 01c49e10
// Size: 601 bytes
// Class: MUTempoEditorViewItem
// String references:
//   "MUTempoEditorViewItem"

void FUN_01c49e10(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_b0;
  int64_t local_a8;
  int64_t local_a0;
  void*puStack_38;
  
  if ((g_027ec0c8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027ec018 = FUN_00d4fe50();
    g_027ec000 = "MUTempoEditorViewItem";
    g_027ec008 = 0x78;
    g_027ec010 = FUN_01c7a1a0;
    g_027ec020 = 0;
    ram_00000000027ec028 = 0;
    g_027ec030 = 0;
    g_027ec0a8 = 0;
    ram_00000000027ec0b0 = 0;
    g_027ec0b8 = 0;
    g_027ec0ba = 1;
    g_027ec038 = 0;
    ram_00000000027ec040 = 0;
    g_027ec048 = 0;
    ram_00000000027ec050 = 0;
    g_027ec058 = 0;
    ram_00000000027ec060 = 0;
    g_027ec068 = 0;
    ram_00000000027ec070 = 0;
    g_027ec078 = 0;
    ram_00000000027ec080 = 0;
    g_027ec088 = 0;
    ram_00000000027ec090 = 0;
    g_027ec098 = 0;
    ram_00000000027ec0a0 = 0;
    g_027ec0c3 = 0;
    g_027ec0bb = 0;
    ___cxa_guard_release();
  }
  if (g_027ec0bb == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    puStack_38 = (void*)0x0;
    if (1 < g_02802630) {
      puStack_38 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puStack_38 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_01c7a3d0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_a0 != 0) {
      FUN_00d50b20();
    }
    if (local_a8 != 0) {
      FUN_00d50b20();
    }
    if (local_b0 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (puStack_38 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}

