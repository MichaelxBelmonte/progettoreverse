// Function: FUN_00c364b0
// Address: 00c364b0
// Size: 869 bytes
// Class: GNOverloudTapedesk

void FUN_00c364b0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t this_ptr;
  uint64_t local_78;
  uint8_t local_70;
  uint32_t local_40;
  
  FUN_01cc9350();
  lVar1 = *(int64_t *)(this_ptr + 0x78);
  if (lVar1 != 0) {
    local_40 = -1;
    while( true ) {
      lVar4 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) break;
      (**(code **)(**(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8) + 0xa20))();
    }
    FUN_007f7b50();
  }
  FUN_00d216c0();
  FUN_01ccad60();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_00d21140();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x60) != 0) {
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x68) != 0) {
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x70) != 0) {
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x78);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar4 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar4 * 8);
        FUN_00d50b00();
        (**(code **)(*plVar2 + 0xa20))();
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_027ef7e8;
        if (g_027ef7e8 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar2 + 0xa10))();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_007f7b50();
  }
  return;
}

