// Function: FUN_00371b30
// Address: 00371b30
// Size: 653 bytes
// Class: MDFileBrowserInsp
// String references:
//   "MDFileBrowserInsp"
// === MDFileBrowserInsp properties ===
//   MDFileBrowserInspectorMode _mode


void FUN_00371b30(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar6;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  (**(code **)(*arg1 + 0xad8))();
  pplVar5 = &local_38;
  FUN_01c259e0();
  plVar1 = local_38;
  if ((g_02704150 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_0271b2f8 = FUN_00018750();
    g_0271b2e0 = "MDFileBrowserInsp";
    g_0271b2e8 = 0x170;
    g_0271b2f0 = FUN_0038a3b0;
    g_0271b300 = 0;
    ram_000000000271b308 = 0;
    g_0271b310 = 0;
    g_0271b388 = 0;
    ram_000000000271b390 = 0;
    g_0271b398 = 0;
    g_0271b39a = 1;
    g_0271b318 = 0;
    ram_000000000271b320 = 0;
    g_0271b328 = 0;
    ram_000000000271b330 = 0;
    g_0271b338 = 0;
    ram_000000000271b340 = 0;
    g_0271b348 = 0;
    ram_000000000271b350 = 0;
    g_0271b358 = 0;
    ram_000000000271b360 = 0;
    g_0271b368 = 0;
    ram_000000000271b370 = 0;
    g_0271b378 = 0;
    ram_000000000271b380 = 0;
    g_0271b3a3 = 0;
    g_0271b39b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_00371b98:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00371b98;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*arg1 + 0xae0))();
  plVar2 = local_38;
  if (local_30 == '\0') {
    if (local_38 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      goto joined_r0x00371cf3;
    }
    FUN_00d50b00();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((plVar1 == (int64_t *)0x0) || (plVar2 == (int64_t *)0x0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    if (plVar2 == (int64_t *)0x0) goto joined_r0x00371cf3;
  }
  else {
    uVar6 = (**(code **)(*plVar2 + 0x388))();
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        uVar6 = FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    (**(code **)(*plVar1 + 0x6a0))(uVar6,&local_48);
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
joined_r0x00371cf3:
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

