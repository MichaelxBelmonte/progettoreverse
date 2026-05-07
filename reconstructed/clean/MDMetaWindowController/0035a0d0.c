// Function: FUN_0035a0d0
// Address: 0035a0d0
// Size: 1120 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void FUN_0035a0d0(void)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  int64_t *plVar7;
  int64_t *this_ptr;
  int64_t *plVar8;
  int64_t **pplVar9;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (this_ptr[0x1b] == 0) {
    return;
  }
  if (this_ptr[0xe] == 0) {
    return;
  }
  FUN_01bbfb40();
  plVar1 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
  pplVar9 = &local_48;
  FUN_01bbfb40();
  plVar1 = local_48;
  FUN_000829c0();
  if (plVar1 == (int64_t *)0x0) {
LAB_0035a164:
    pplVar9 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0035a164;
  }
  plVar1 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar9 + 1) = 0;
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_003ba620();
  if (local_40[0] == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_0035a266;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_0035a1ea:
    FUN_002e4b80();
    plVar8 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_002e4b80();
      cVar3 = FUN_0078d680();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar2 = false;
      goto LAB_0035a276;
    }
    bVar2 = false;
  }
  else {
    if (local_48 != (int64_t *)0x0) goto LAB_0035a1ea;
LAB_0035a266:
    bVar2 = true;
  }
  cVar3 = '\0';
LAB_0035a276:
  FUN_00d50b00();
  local_38[0] = '\0';
  plVar8 = this_ptr;
  do {
    (**(code **)(*plVar8 + 0x370))();
    plVar7 = local_48;
    if (local_48 == plVar8) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_0035a2f7;
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar6 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar6 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
        plVar8 = plVar7;
LAB_0035a2f7:
        local_38[0] = '\x01';
        pcVar6 = local_40;
        plVar7 = plVar8;
      }
      *pcVar6 = '\0';
      plVar8 = plVar7;
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
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
    plVar7 = &g_02802688;
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(*plVar8 + 0x360))();
      cVar4 = FUN_00e85ea0();
      plVar7 = (int64_t *)&stack0xffffffffffffffa0;
      if (cVar4 == '\0') {
        plVar7 = &g_02802688;
      }
    }
    if (*plVar7 != 0) {
      if ((local_38[0] == '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      goto LAB_0035a46b;
    }
    if (plVar8 == (int64_t *)0x0) {
      plVar8 = (int64_t *)0x0;
LAB_0035a46b:
      FUN_00d50b20();
      if ((cVar3 != '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_0063f230();
        plVar7 = local_48;
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 != (int64_t *)0x0) {
          FUN_0063f230();
          FUN_00212c70();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      (**(code **)(*(int64_t *)this_ptr[0x1b] + 0x998))();
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
  } while( true );
}

