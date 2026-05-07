// Function: FUN_005f6c40
// Address: 005f6c40
// Size: 1392 bytes
// Class: MDWorkspaceModuleViewController
// String references:
//   "MDWorkspaceModuleViewController"
//   "MDWorkspaceLayoutDelegate"
//   "MDTabTargetDelegate"

void FUN_005f6c40(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  this_ptr[0xe] = &g_025061a8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0xf] = &g_025057b8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_024d59d8;
  this_ptr[0xe] = &g_024d6028;
  this_ptr[0xf] = &g_024d6090;
  FUN_005f7250();
  *(void*)(this_ptr + 0x11) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e48fb == '\0') {
    FUN_005f7580();
    FUN_00e87980();
  }
  FUN_005f7710();
  FUN_005f7a40();
  *(void*)(this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e48fb == '\0') {
    FUN_005f7d60();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa1) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e48fb == '\0') {
    FUN_005f7ef0();
    FUN_00e87980();
  }
  FUN_005f8080();
  *(void*)(this_ptr + 0x16) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e48fb == '\0') {
    FUN_005f8340();
    FUN_00e87980();
  }
  return;
}

