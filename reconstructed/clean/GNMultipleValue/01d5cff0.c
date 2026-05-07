// Function: FUN_01d5cff0
// Address: 01d5cff0
// Size: 856 bytes
// Class: GNMultipleValue
// String references:
//   "removeItemAtIndex:"

void FUN_01d5cff0(void)

{
  void*puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_40;
  char local_38;
  
  if (*(char *)(this_ptr + 0x21) != '\0') {
    FUN_00d403d0();
    FUN_00d50b00();
    local_b0 = 0;
    local_a8 = '\0';
    local_a0 = 0;
    local_98 = '\0';
    FUN_00d41040(&local_a0,&local_b0);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 0x21) = 1;
  FUN_00d403d0();
  FUN_00d50b00();
  local_90 = g_026fce70;
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  FUN_00d41430(&local_80,&local_90);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  _objc_alloc();
  puVar1 = PTR__objc_msgSend_024a9998;
  (*PTR__objc_msgSend_024a9998)();
  (*PTR__objc_release_024a99a0)();
  (*puVar1)();
  uVar2 = (*PTR__objc_retain_024a99a8)();
  *(void*)(this_ptr + 0x48) = uVar2;
  (*puVar1)();
  (*puVar1)();
  uVar3 = (*puVar1)();
  while (1 < uVar3) {
    (*puVar1)();
    (*puVar1)();
    (*puVar1)();
    (*puVar1)();
    (*puVar1)();
    (*puVar1)();
    (*puVar1)();
    uVar3 = (*puVar1)();
  }
  (*PTR__objc_release_024a99a0)();
  lVar4 = *(int64_t *)(this_ptr + 0x18);
  if (0 < *(int *)(lVar4 + 0xc)) {
    lVar5 = 0;
    do {
      lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar5 * 8);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      FUN_01d657b0();
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar5 = lVar5 + 1;
      lVar4 = *(int64_t *)(this_ptr + 0x18);
    } while (lVar5 < *(int *)(lVar4 + 0xc));
  }
  FUN_00d50b00();
  FUN_01d5b760();
  FUN_00d50b20();
  return;
}

