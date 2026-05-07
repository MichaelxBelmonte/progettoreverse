// Function: FUN_00069a10
// Address: 00069a10
// Size: 1054 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void FUN_00069a10(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t **pplVar6;
  int64_t *this_ptr;
  int64_t *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar1 = local_40;
  lVar3 = g_026d7800;
  if (g_026d7800 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    (**(code **)(*this_ptr + 0x918))();
  }
  FUN_00d3ecc0();
  plVar1 = local_40;
  lVar3 = g_026d7808;
  if (g_026d7808 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    if (this_ptr[0x2a] != 0) {
      this_ptr[0x2a] = 0;
      FUN_00d50b20();
    }
    *(void*)((int64_t)this_ptr + 0x189) = 1;
    (**(code **)(*this_ptr + 0x620))();
  }
  FUN_00d3ecc0();
  plVar1 = local_40;
  lVar3 = g_026f6d00;
  if (g_026f6d00 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') goto LAB_00069d2e;
  pplVar6 = &local_40;
  FUN_00d3ecf0();
  plVar1 = local_40;
  if ((g_026fddb0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
LAB_00069be3:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00069be3;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) goto LAB_00069d2e;
  (**(code **)(*plVar1 + 0x5e0))();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00069c6d;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_00069c6d:
    FUN_00756eb0();
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_00069ca1;
      }
      if (this_ptr[0x33] != 0) {
        this_ptr[0x33] = 0;
        goto LAB_00069ce0;
      }
    }
    else {
      local_38 = '\0';
LAB_00069ca1:
      plVar2 = (int64_t *)this_ptr[0x33];
      if (plVar2 != plVar1) {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        this_ptr[0x33] = (int64_t)plVar1;
        if (plVar2 != (int64_t *)0x0) {
LAB_00069ce0:
          FUN_00d50b20();
        }
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x918))();
  FUN_00d50b20();
LAB_00069d2e:
  FUN_00d530a0();
  return;
}

