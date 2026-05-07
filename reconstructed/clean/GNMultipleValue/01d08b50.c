// Function: FUN_01d08b50
// Address: 01d08b50
// Size: 865 bytes
// Class: GNMultipleValue

void* FUN_01d08b50(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar4;
  int64_t local_d0;
  char local_c8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  FUN_00d403d0();
  lVar3 = g_027ef530;
  if (g_027ef530 != 0) {
    FUN_00d50b00();
  }
  local_68 = 0;
  if (arg1 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  local_70 = arg1;
  FUN_00d40470(&local_b0,&local_70,3,3);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_001d7da0();
  (**(code **)(*plVar2 + 0x18))();
  FUN_01d5e5a0();
  lVar3 = *(int64_t *)(arg1 + 0x240);
  if (0 < *(int *)(lVar3 + 0xc)) {
    lVar4 = 0;
    do {
      lVar3 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar4 * 8) + 0x10);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      lVar1 = g_027ef538;
      local_98 = '\x01';
      local_a0 = lVar3;
      if (g_027ef538 != 0) {
        FUN_00d50b00();
      }
      local_90 = lVar1;
      local_88 = '\x01';
      local_80 = 0;
      local_78 = '\0';
      local_58 = 0;
      FUN_00d50b00();
      local_58 = '\x01';
      local_60 = arg1;
      FUN_01d5da60(&local_80,&local_90,&local_60);
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (*(int *)(arg1 + 0x250) - 1U < 3) {
        FUN_01d5e230();
        local_40 = *(int64_t *)(*(int64_t *)(*(int64_t *)(arg1 + 0x240) + 0x10) + lVar4 * 8)
        ;
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\0';
        FUN_00d23d70();
        FUN_01d66ab0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d5e230();
      FUN_01d65260();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar4 = lVar4 + 1;
      lVar3 = *(int64_t *)(arg1 + 0x240);
    } while (lVar4 < *(int *)(lVar3 + 0xc));
  }
  *this_ptr = plVar2;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

