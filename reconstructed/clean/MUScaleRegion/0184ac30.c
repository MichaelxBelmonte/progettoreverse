// Function: FUN_0184ac30
// Address: 0184ac30
// Size: 533 bytes
// Class: MUScaleRegion
// String references:
//   "MUScaleRegion"

void FUN_0184ac30(void)

{
  int iVar1;
  void*puVar2;
  uint32_t uVar3;
  int64_t local_90;
  int64_t local_88;
  int64_t local_80;
  uint32_t uStack_48;
  uint32_t uStack_44;
  
  if ((g_027d6b78 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027d6ac8 = FUN_00d4fe50();
    g_027d6ab0 = "MUScaleRegion";
    g_027d6ab8 = 0x48;
    g_027d6ac0 = FUN_0187cb40;
    g_027d6ad0 = 0;
    ram_00000000027d6ad8 = 0;
    g_027d6ae0 = 0;
    ram_00000000027d6ae8 = 0;
    g_027d6af0 = 0;
    ram_00000000027d6af8 = 0;
    g_027d6b00 = 0;
    ram_00000000027d6b08 = 0;
    g_027d6b10 = 0;
    ram_00000000027d6b18 = 0;
    g_027d6b20 = 0;
    ram_00000000027d6b28 = 0;
    g_027d6b30 = 0;
    ram_00000000027d6b38 = 0;
    g_027d6b40 = 0;
    ram_00000000027d6b48 = 0;
    g_027d6b50 = 0;
    ram_00000000027d6b58 = 0;
    g_027d6b60 = 0;
    _ram_00000000027d6b68 = 0;
    g_027d6b70 = 0;
    ___cxa_guard_release();
  }
  if (g_027d6b6b == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    uStack_48 = 0;
    uStack_44 = 0;
    if (1 < g_02802630) {
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02572358;
      (*g_02572370)();
      uStack_48 = SUB84(puVar2,0);
      uStack_44 = (uint32_t)((uint64_t)puVar2 >> 0x20);
    }
    FUN_00d50c00();
    FUN_01880930();
    FUN_00d50c00();
    uVar3 = FUN_00e87770();
    FUN_00e87920(uVar3,0);
    if (local_80 != 0) {
      FUN_00d50b20();
    }
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (CONCAT44(uStack_44,uStack_48) != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}

