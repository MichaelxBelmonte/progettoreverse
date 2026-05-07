// Function: FUN_0017fbd0
// Address: 0017fbd0
// Size: 506 bytes
// Class: GNControlAssoc
// String references:
//   "GNControlAssoc"

void FUN_0017fbd0(void)

{
  int iVar1;
  void*puVar2;
  uint32_t uVar3;
  
  // [STATIC_INIT: property registration]
  if (g_027f641b != '\0') {
    return;
  }
  FUN_001ba5f0();
  FUN_00e87760();
  FUN_00d4ff40();
  if (1 < g_02802630) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
  }
  FUN_00d50c00();
  FUN_001bcb00();
  FUN_00d50c00();
  uVar3 = FUN_00e87770();
  FUN_00e87920(uVar3,0);
  FUN_001bb300();
  FUN_001bb300();
  return;
}

