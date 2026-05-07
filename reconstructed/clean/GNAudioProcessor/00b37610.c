// Function: FUN_00b37610
// Address: 00b37610
// Size: 506 bytes
// Class: GNAudioProcessor
// String references:
//   "GNAudioProcessor"

void FUN_00b37610(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t **pplVar4;
  int64_t *local_58;
  char local_50;
  int64_t local_38;
  char local_30;
  
  plVar1 = *(int64_t **)(arg1 + 0x90);
  if ((plVar1 == (int64_t *)0x0) || (*(int64_t *)(arg1 + 0x78) == 0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  FUN_00d50b00();
  local_38 = *(int64_t *)(arg1 + 0x78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_00d50b00();
  }
  local_30 = '\x01';
  pplVar4 = &local_58;
  (**(code **)(*plVar1 + 0x18))(&local_38,&stack0xffffffffffffffb8);
  plVar1 = local_58;
  if ((g_02723170 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_0270ba18 = FUN_00d4fe50();
    g_0270ba00 = "GNAudioProcessor";
    g_0270ba08 = 0x90;
    g_0270ba10 = FUN_00370f50;
    g_0270ba20 = 0;
    ram_000000000270ba28 = 0;
    g_0270ba30 = 0;
    ram_000000000270ba38 = 0;
    g_0270ba40 = 0;
    ram_000000000270ba48 = 0;
    g_0270ba50 = 0;
    ram_000000000270ba58 = 0;
    g_0270ba60 = 0;
    ram_000000000270ba68 = 0;
    g_0270ba70 = 0;
    ram_000000000270ba78 = 0;
    g_0270ba80 = 0;
    ram_000000000270ba88 = 0;
    g_0270ba90 = 0;
    ram_000000000270ba98 = 0;
    g_0270baa0 = 0;
    ram_000000000270baa8 = 0;
    g_0270bab0 = 0;
    ram_000000000270bab8 = 0;
    g_0270bac0 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_00b376c6;
  }
  pplVar4 = (int64_t **)&g_02802688;
LAB_00b376c6:
  *(void*)(this_ptr + 1) = 0;
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *this_ptr = (int64_t)plVar1;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = (int64_t)plVar1;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(pplVar4 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (arg1 != 0) {
    FUN_00d50b20();
  }
  return;
}

