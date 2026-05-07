// Function: FUN_002a9ac0
// Address: 002a9ac0
// Size: 996 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void FUN_002a9ac0(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar5;
  int64_t **pplVar6;
  bool bVar7;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  bool local_38;
  
  pplVar6 = &local_40;
  FUN_01f27fe0();
  FUN_01f2e7e0();
  plVar4 = local_50;
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != false) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (int64_t *)0x0) {
    bVar1 = false;
  }
  else {
    FUN_01f27fe0();
    FUN_01f2e7e0();
    pplVar5 = &local_50;
    FUN_01e5c650();
    plVar4 = local_50;
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
    if (plVar4 == (int64_t *)0x0) {
LAB_002a9b7c:
      pplVar5 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar4 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_002a9b7c;
    }
    plVar4 = *pplVar5;
    if (plVar4 == (int64_t *)0x0) {
      bVar1 = false;
      plVar4 = (int64_t *)0x0;
    }
    else {
      if (*(char *)(pplVar5 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(void*)(pplVar5 + 1) = 0;
      }
      bVar1 = true;
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != false) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (int64_t *)0x0) goto LAB_002a9ce4;
  }
  (**(code **)(*arg1 + 0x4a0))();
  FUN_00d23310();
  bVar7 = local_48 == '\0';
  local_40 = local_50;
  if (bVar7) {
    local_38 = false;
  }
  else {
    local_38 = true;
    local_48 = '\0';
  }
  local_38 = !bVar7;
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
  if (local_50 == (int64_t *)0x0) {
LAB_002a9c8a:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*local_50 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_002a9c8a;
  }
  plVar4 = *pplVar6;
  if (plVar4 == (int64_t *)0x0) {
    plVar4 = (int64_t *)0x0;
  }
  else {
    if (*(char *)(pplVar6 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(void*)(pplVar6 + 1) = 0;
    }
    bVar1 = true;
  }
  if ((local_38 != false) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
LAB_002a9ce4:
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar1) && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  *this_ptr = (int64_t)plVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

