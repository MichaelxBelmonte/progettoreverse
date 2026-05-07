// Function: FUN_002aa330
// Address: 002aa330
// Size: 791 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void FUN_002aa330(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int64_t **pplVar5;
  int64_t *this_ptr;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  int64_t *local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  FUN_01f27fe0();
  FUN_01f2e7e0();
  plVar1 = local_50;
  local_40[0] = local_48[0];
  pcVar4 = local_40;
  if (local_48[0] != '\0') {
    pcVar4 = local_48;
  }
  *pcVar4 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  pplVar5 = &local_50;
  FUN_01e5c650();
  plVar1 = local_50;
  if ((g_026fddb0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026e0ab8 = FUN_00015ff0();
    g_026e0aa0 = "MDMetaWindowController";
    g_026e0aa8 = 0x198;
    g_026e0ab0 = FUN_0006dea0;
    g_026e0ac0 = 0;
    ram_00000000026e0ac8 = 0;
    g_026e0ad0 = 0;
    g_026e0b48 = 0;
    ram_00000000026e0b50 = 0;
    g_026e0b58 = 0;
    g_026e0b5a = 1;
    g_026e0ad8 = 0;
    ram_00000000026e0ae0 = 0;
    g_026e0ae8 = 0;
    ram_00000000026e0af0 = 0;
    g_026e0af8 = 0;
    ram_00000000026e0b00 = 0;
    g_026e0b08 = 0;
    ram_00000000026e0b10 = 0;
    g_026e0b18 = 0;
    ram_00000000026e0b20 = 0;
    g_026e0b28 = 0;
    ram_00000000026e0b30 = 0;
    g_026e0b38 = 0;
    ram_00000000026e0b40 = 0;
    g_026e0b63 = 0;
    g_026e0b5b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_002aa3f2:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_002aa3f2;
  }
  plVar1 = *pplVar5;
  local_60 = *(char *)(pplVar5 + 1);
  pplVar5 = pplVar5 + 1;
  if (local_60 == '\0') {
    pplVar5 = (int64_t **)&local_60;
  }
  *(void*)pplVar5 = 0;
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    goto LAB_002aa560;
  }
  (**(code **)(*plVar1 + 0x5d8))();
  plVar1 = local_50;
  pcVar4 = local_48;
  if (local_48[0] == '\0') {
    pcVar4 = local_38;
  }
  local_38[0] = local_48[0];
  *pcVar4 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    pplVar5 = &local_50;
    FUN_01e55ec0();
    plVar1 = local_50;
    FUN_00082eb0();
    if (plVar1 == (int64_t *)0x0) {
LAB_002aa4b5:
      pplVar5 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_002aa4b5;
    }
    *(void*)(this_ptr + 1) = 0;
    plVar1 = *pplVar5;
    if (*(char *)(pplVar5 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *this_ptr = (int64_t)plVar1;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      *this_ptr = (int64_t)plVar1;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(pplVar5 + 1) = 0;
    }
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  if (local_60 != '\0') {
    FUN_00d50b20();
  }
LAB_002aa560:
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  return;
}

