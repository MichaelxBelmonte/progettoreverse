// Function: FUN_01990930
// Address: 01990930
// Size: 1251 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01990930(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint32_t uVar3;
  int64_t *this_ptr;
  bool bVar4;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t *local_30;
  char local_28;
  
  (**(code **)(*this_ptr + 0x978))();
  plVar2 = local_30;
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*this_ptr + 0x978))();
    plVar2 = local_30;
    local_a8 = 0;
    local_b0 = this_ptr[0x27];
    if (local_b0 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    (**(code **)(*plVar2 + 0x968))();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (this_ptr[0x7f] == 0) {
    (**(code **)(*this_ptr + 0xec0))();
  }
  *(void*)(this_ptr + 0x5a) = 0xffffffff;
  *(void*)((int64_t)this_ptr + 0x2d4) = 0xffffffff;
  *(void*)(this_ptr + 0x5b) = 0xffffffff;
  *(void*)((int64_t)this_ptr + 0x2dc) = 0xffffffff;
  if (this_ptr[0x80] != 0) {
    local_98 = 0;
    lVar1 = this_ptr[0x7f];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_98 = '\x01';
    local_a0 = lVar1;
    FUN_01e26eb0();
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_026fb948;
  plVar2 = (int64_t *)this_ptr[0x81];
  if (plVar2 != (int64_t *)0x0) {
    if (g_026fb948 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar2 + 0x948))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    FUN_01a17960();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar1 = this_ptr[0x84];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0xec8))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
              *this_ptr + 0x40))();
  (**(code **)(&g_000014b8 + *this_ptr))();
  uVar3 = FUN_01481010();
  (**(code **)(&g_000014c0 + *this_ptr))(*this_ptr,uVar3);
  (**(code **)(*this_ptr + 0x970))();
  if (local_30 == (int64_t *)0x0) {
    bVar4 = false;
  }
  else {
    (**(code **)(*this_ptr + 0x970))();
    FUN_0197cd20();
    bVar4 = local_40 != 0;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar4) {
    (**(code **)(*this_ptr + 0x970))();
    FUN_0197cd20();
    (**(code **)(*local_30 + 0x928))((int)this_ptr[0x6b]);
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e42030();
  if (local_30 == (int64_t *)0x0) {
    bVar4 = false;
  }
  else {
    FUN_01e42030();
    FUN_01d8c6e0();
    bVar4 = local_40 != 0;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar4) {
    FUN_00d403d0();
    FUN_00d50b00();
    local_c0 = g_027e1378;
    if (g_027e1378 != 0) {
      FUN_00d50b00();
    }
    local_b8 = '\x01';
    FUN_01e42030();
    FUN_01d8c6e0();
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    FUN_00d41430(&local_60,&local_c0);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}

