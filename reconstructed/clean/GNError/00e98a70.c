// Function: FUN_00e98a70
// Address: 00e98a70
// Size: 729 bytes
// Class: GNError
// String references:
//   "%@%@"
//   "%@null"

void* FUN_00e98a70(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  void*puVar3;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar4;
  uint8_t local_a8 [8];
  int64_t local_98;
  char local_90;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025795a8;
  (*g_025795c0)();
  FUN_00d4ffd0();
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  FUN_00d8dbf0();
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(arg1 + 0x10);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar4 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar4 * 8);
        if (plVar2 == (int64_t *)0x0) {
          FUN_00d92220();
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          local_70 = local_40;
          local_68 = '\x01';
          FUN_00d94d80();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00d92220();
          (**(code **)(*plVar2 + 400))();
          FUN_00083ea0(2,local_a8);
          FUN_00d94d80();
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_00083b20();
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

