// Function: FUN_01efdfe0
// Address: 01efdfe0
// Size: 520 bytes
// Class: GNPopUpButton
// String references:
//   "GNPopUpButton"

void FUN_01efdfe0(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  int64_t this_ptr;
  int64_t lVar5;
  int64_t local_50;
  char local_48;
  
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  if ((g_027f94e0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026efe08 = FUN_000f5df0();
    g_026efdf0 = "GNPopUpButton";
    g_026efdf8 = 0x240;
    g_026efe00 = FUN_001e3bf0;
    g_026efe10 = 0;
    ram_00000000026efe18 = 0;
    g_026efe20 = 0;
    ram_00000000026efe28 = 0;
    g_026efe30 = 0;
    ram_00000000026efe38 = 0;
    g_026efe40 = 0;
    ram_00000000026efe48 = 0;
    g_026efe50 = 0;
    ram_00000000026efe58 = 0;
    g_026efe60 = 0;
    ram_00000000026efe68 = 0;
    g_026efe70 = 0;
    ram_00000000026efe78 = 0;
    g_026efe80 = 0;
    ram_00000000026efe88 = 0;
    g_026efe90 = 0;
    ram_00000000026efe98 = 0;
    g_026efea0 = 0;
    ram_00000000026efea8 = 0;
    g_026efeb0 = 0;
    ___cxa_guard_release();
  }
  lVar4 = g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    lVar4 = g_02802688;
    if (cVar2 != '\0') {
      lVar4 = *(int64_t *)(this_ptr + 0x90);
    }
  }
  if (lVar4 != 0) {
    FUN_00d50b00();
    FUN_01d6f8d0();
    lVar4 = *(int64_t *)(this_ptr + 0x78);
    if (0 < *(int *)(lVar4 + 0xc)) {
      lVar5 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(lVar4 + 0x10) + lVar5 * 8);
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar1 + 0x380))();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_01d6f990();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        lVar5 = lVar5 + 1;
        lVar4 = *(int64_t *)(this_ptr + 0x78);
      } while (lVar5 < *(int *)(lVar4 + 0xc));
    }
    FUN_00d50b20();
  }
  return;
}

