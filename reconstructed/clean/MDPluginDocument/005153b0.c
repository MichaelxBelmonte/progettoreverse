// Function: FUN_005153b0
// Address: 005153b0
// Size: 512 bytes
// Class: MDPluginDocument
// String references:
//   "MDPluginDocument"

void FUN_005153b0(void)

{
  int iVar1;
  void*puVar2;
  uint32_t uVar3;
  
  // [STATIC_INIT: property registration]
  if (g_0270bb8b != '\0') {
    return;
  }
  FUN_0053c370();
  FUN_00e87760();
  FUN_00d4ff40();
  if (1 < g_02802630) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
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

