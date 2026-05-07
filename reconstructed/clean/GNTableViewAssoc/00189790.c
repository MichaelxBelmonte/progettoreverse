// Function: FUN_00189790
// Address: 00189790
// Size: 501 bytes
// Class: GNTableViewAssoc
// String references:
//   "GNTableViewAssoc"

void FUN_00189790(void)

{
  int iVar1;
  void*puVar2;
  uint32_t uVar3;
  
  // [STATIC_INIT: property registration]
  if (g_026f240b != '\0') {
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
  FUN_001f3c10();
  FUN_00d50c00();
  uVar3 = FUN_00e87770();
  FUN_00e87920(uVar3,0);
  FUN_001bb300();
  FUN_001bb300();
  return;
}

