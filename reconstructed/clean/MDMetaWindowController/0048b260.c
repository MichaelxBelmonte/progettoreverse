// Function: FUN_0048b260
// Address: 0048b260
// Size: 880 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void* FUN_0048b260(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int64_t *plVar4;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar5;
  int64_t **pplVar6;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar5 = arg1;
  do {
    (**(code **)(*plVar5 + 0x370))();
    plVar4 = local_48;
    if (local_48 == plVar5) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_0048b2f7;
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar3 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar3 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
        plVar5 = plVar4;
LAB_0048b2f7:
        local_38[0] = '\x01';
        pcVar3 = local_40;
        plVar4 = plVar5;
      }
      *pcVar3 = '\0';
      plVar5 = plVar4;
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_026fddb0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
    plVar4 = (int64_t *)&g_02802688;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = (int64_t *)&stack0xffffffffffffffa0;
      if (cVar1 == '\0') {
        plVar4 = (int64_t *)&g_02802688;
      }
    }
    if (*plVar4 != 0) {
      if ((local_38[0] == '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      goto joined_r0x0048b470;
    }
  } while (plVar5 != (int64_t *)0x0);
  plVar5 = (int64_t *)0x0;
joined_r0x0048b470:
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  FUN_0063f230();
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0048b4e3;
    }
  }
  else if (local_48 != (int64_t *)0x0) {
LAB_0048b4e3:
    cVar1 = FUN_00212c70();
    if (cVar1 != '\0') {
      pplVar6 = &local_48;
      FUN_0021cc50();
      plVar5 = local_48;
      FUN_0034d920();
      if (plVar5 == (int64_t *)0x0) {
        pplVar6 = &g_02802688;
        *(void*)(this_ptr + 1) = 0;
        plVar5 = g_02802688;
        if (g_02802690 != '\0') goto LAB_0048b544;
LAB_0048b58a:
        if (plVar5 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *this_ptr = plVar5;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        (**(code **)(*plVar5 + 0x360))();
        cVar1 = FUN_00e85ea0();
        if (cVar1 == '\0') {
          pplVar6 = &g_02802688;
        }
        *(void*)(this_ptr + 1) = 0;
        plVar5 = *pplVar6;
        if (*(char *)(pplVar6 + 1) == '\0') goto LAB_0048b58a;
LAB_0048b544:
        *this_ptr = plVar5;
        *(void*)(this_ptr + 1) = 1;
        *(void*)(pplVar6 + 1) = 0;
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_0048b5be;
    }
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_0048b5be:
  FUN_00d50b20();
  return this_ptr;
}

