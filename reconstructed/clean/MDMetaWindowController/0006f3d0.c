// Function: FUN_0006f3d0
// Address: 0006f3d0
// Size: 576 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void FUN_0006f3d0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  int64_t local_40;
  char local_38;
  int64_t *local_30;
  char local_28;
  
  pplVar5 = &local_30;
  FUN_00d3ecf0();
  plVar1 = local_30;
  if ((g_026fddb0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
LAB_0006f425:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0006f425;
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
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x5e0))();
    plVar2 = local_30;
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x5e0))();
      FUN_00752180();
      plVar1 = local_30;
      if (local_28 == '\0') {
        if (local_30 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_0006f700();
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0006f537;
    }
  }
  FUN_0006f700();
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
LAB_0006f537:
  FUN_00d50b20();
  return;
}

