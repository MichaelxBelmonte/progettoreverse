// Function: FUN_000f3ac0
// Address: 000f3ac0
// Size: 611 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void FUN_000f3ac0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t *plVar5;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar5 = this_ptr;
  do {
    (**(code **)(*plVar5 + 0x370))();
    if (local_48 == plVar5) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_000f3b57;
      }
    }
    else {
      plVar5 = local_48;
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
LAB_000f3b57:
        local_38[0] = '\x01';
        pcVar3 = local_40;
      }
      *pcVar3 = '\0';
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
    plVar4 = &g_02802688;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = (int64_t *)&stack0xffffffffffffffa8;
      if (cVar1 == '\0') {
        plVar4 = &g_02802688;
      }
    }
    if (*plVar4 != 0) {
      if ((local_38[0] == '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if (this_ptr == (int64_t *)0x0) goto LAB_000f3ce4;
      goto LAB_000f3cdc;
    }
    if (plVar5 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      if (this_ptr != (int64_t *)0x0) {
LAB_000f3cdc:
        FUN_00d50b20();
      }
LAB_000f3ce4:
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x5e0))();
        this_ptr[0x17] = (int64_t)local_48;
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      return;
    }
  } while( true );
}

