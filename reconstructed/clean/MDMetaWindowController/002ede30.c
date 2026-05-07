// Function: FUN_002ede30
// Address: 002ede30
// Size: 757 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void FUN_002ede30(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t *plVar6;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar6 = this_ptr;
  do {
    (**(code **)(*plVar6 + 0x370))();
    if (local_48 == plVar6) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_002edec7;
      }
    }
    else {
      plVar6 = local_48;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar4 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar4 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_002edec7:
        local_38[0] = '\x01';
        pcVar4 = local_40;
      }
      *pcVar4 = '\0';
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
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
    plVar5 = &g_02802688;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar5 = (int64_t *)&stack0xffffffffffffffa8;
      if (cVar1 == '\0') {
        plVar5 = &g_02802688;
      }
    }
    if (*plVar5 != 0) {
      if ((local_38[0] == '\0') && (plVar6 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      goto joined_r0x002ee03c;
    }
  } while (plVar6 != (int64_t *)0x0);
  plVar6 = (int64_t *)0x0;
joined_r0x002ee03c:
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar6 == (int64_t *)0x0) {
    return;
  }
  FUN_0063f230();
  if (local_40[0] == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_002ee116;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (int64_t *)0x0) goto LAB_002ee116;
  FUN_0021a630();
  if (local_48 == (int64_t *)0x0) {
    bVar2 = 0;
  }
  else {
    bVar2 = FUN_00212c70();
    bVar2 = bVar2 ^ 1;
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar2 != 0) {
    FUN_0021a630();
    (**(code **)(*local_48 + 0xca0))();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_002ee116:
  FUN_00d50b20();
  return;
}

