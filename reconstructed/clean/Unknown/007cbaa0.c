// Function: FUN_007cbaa0
// Address: 007cbaa0
// Size: 520 bytes
// Class: Unknown

void FUN_007cbaa0(void)

{
  int64_t lVar1;
  int64_t *this_ptr;
  uint32_t uVar2;
  int64_t local_28;
  char local_20;
  
  (**(code **)(*this_ptr + 0x5e8))();
  lVar1 = this_ptr[0x10];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  uVar2 = FUN_00364b20();
  if (local_20 == '\0') {
    if (local_28 != 0) {
      uVar2 = FUN_00d50b00();
    }
  }
  else {
    local_20 = '\0';
  }
  FUN_01a296f0(uVar2,0);
  if (local_28 != 0) {
    FUN_00d50b20();
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((char)this_ptr[0x19] != '\0') {
    lVar1 = this_ptr[0x10];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00364b20();
    if (local_20 == '\0') {
      if (local_28 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_20 = '\0';
    }
    FUN_01a2db70();
    if (local_28 != 0) {
      FUN_00d50b20();
    }
    if ((local_20 != '\0') && (local_28 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00364f30();
  if (local_20 == '\0') {
    if (local_28 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_20 = '\0';
  }
  FUN_01289850((int)this_ptr[0x16],*(void*)((int64_t)this_ptr + 0xb4));
  if (local_28 != 0) {
    FUN_00d50b20();
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x5f0))();
  return;
}

