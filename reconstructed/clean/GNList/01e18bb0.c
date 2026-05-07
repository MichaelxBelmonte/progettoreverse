// Function: FUN_01e18bb0
// Address: 01e18bb0
// Size: 957 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_01e18bb0(void)

{
  char cVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t *this_ptr;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_30;
  char local_28;
  
  if (*(char *)((int64_t)this_ptr + 0x174) == '\0') {
    FUN_00d403d0();
    FUN_00d50b00();
    local_c0 = g_027f32f0;
    if (g_027f32f0 != 0) {
      FUN_00d50b00();
    }
    local_b8 = '\x01';
    local_b0 = 0;
    local_a8 = '\0';
    FUN_00d41040(&local_b0,&local_c0);
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_a0 = g_027f32f8;
    if (g_027f32f8 != 0) {
      FUN_00d50b00();
    }
    local_98 = '\x01';
    local_90 = 0;
    local_88 = '\0';
    FUN_00d41040(&local_90,&local_a0);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar2 = (int64_t *)this_ptr[0x36];
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
    cVar1 = (**(code **)(*plVar2 + 0x28))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (*(char *)((int64_t)this_ptr + 0x174) == '\0') {
      (**(code **)(*this_ptr + 0x980))();
    }
    else if (this_ptr[6] != 0) {
      FUN_01e40eb0();
      plVar2 = local_70;
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_01e40eb0();
        local_80 = 0;
        local_78 = '\0';
        (**(code **)(*local_70 + 0xa90))(*local_70,&local_80);
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (cVar1 == '\0') {
      uVar3 = 0;
      goto LAB_01e18f5d;
    }
  }
  if (this_ptr[0x30] != 0) {
    FUN_01e1e360();
    if (this_ptr[0x30] != 0) {
      this_ptr[0x30] = 0;
      FUN_00d50b20();
    }
    if (((int)this_ptr[0x2d] == 0) && ((char)this_ptr[0x31] != '\0')) {
      (**(code **)(*this_ptr + 0x620))();
    }
  }
  if (0 < (int)this_ptr[0x2d]) {
    FUN_00e7b4e0();
    (**(code **)(*this_ptr + 0x968))();
  }
  if (*(char *)((int64_t)this_ptr + 0x174) != '\0') {
    (**(code **)(*this_ptr + 0x948))();
  }
  uVar3 = CONCAT71((int7)((uint64_t)plVar2 >> 8),1);
  if ((int64_t *)this_ptr[0x38] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x38] + 0x20))();
  }
LAB_01e18f5d:
  return uVar3 & 0xffffffff;
}

