// Function: FUN_01e18770
// Address: 01e18770
// Size: 635 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01e18770(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_30;
  char local_28;
  
  if (((char)this_ptr[0x2a] == '\0') || (this_ptr[0x30] != 0)) goto LAB_01e189c7;
  if (*(char *)((int64_t)this_ptr + 0x174) == '\0') {
    FUN_00d403d0();
    FUN_00d50b00();
    local_90 = g_027f32f0;
    if (g_027f32f0 != 0) {
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
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_70 = g_027f32f8;
    if (g_027f32f8 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    local_60 = 0;
    local_58 = '\0';
    FUN_00d41430(&local_60,&local_70);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 0x31) = 1;
  FUN_01e1eb80(g_023942d0);
  lVar1 = this_ptr[0x30];
  lVar2 = lVar1;
  if (lVar1 != local_30) {
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar2 = 0;
        goto LAB_01e187ed;
      }
      FUN_00d50b00();
      lVar1 = this_ptr[0x30];
      this_ptr[0x30] = local_30;
    }
    else {
      local_28 = '\0';
LAB_01e187ed:
      this_ptr[0x30] = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x620))();
LAB_01e189c7:
  if ((int64_t *)this_ptr[0x38] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x38] + 0x20))();
  }
  return;
}

