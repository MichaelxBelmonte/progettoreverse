// Function: FUN_003acd80
// Address: 003acd80
// Size: 646 bytes
// Class: MDMetaWindowController

void FUN_003acd80(void)

{
  int64_t lVar1;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_30;
  char local_28;
  
  if (*arg1 != 0) {
    if (*(int64_t *)(*arg1 + 0x308) == 0) {
      if (*(int64_t *)(this_ptr + 0xa0) != 0) {
        FUN_01e40eb0();
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
        if (local_30 != 0) {
          (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x478))();
        }
      }
      if (*(int64_t *)(this_ptr + 0x98) != 0) {
        FUN_01e40eb0();
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
        if (local_30 == 0) {
          FUN_01e53c20();
          lVar1 = *(int64_t *)(this_ptr + 0x98);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(MACH_HEADER._0_8_ + 0x450))();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
      }
    }
    else {
      if (*(int64_t *)(this_ptr + 0xa0) != 0) {
        FUN_01e40eb0();
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
        if (local_30 == 0) {
          FUN_01e53c20();
          lVar1 = *(int64_t *)(this_ptr + 0xa0);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(MACH_HEADER._0_8_ + 0x450))();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        if (*(int64_t *)(this_ptr + 0xa0) != 0) {
          FUN_01d77960();
          lVar1 = *(int64_t *)(this_ptr + 0xa0);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_01d62b10();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_28 != '\0') && (local_30 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      if (*(int64_t *)(this_ptr + 0x98) != 0) {
        FUN_01e40eb0();
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
        if (local_30 != 0) {
          (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x478))();
        }
      }
    }
  }
  return;
}

