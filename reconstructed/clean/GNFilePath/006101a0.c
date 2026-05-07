// Function: FUN_006101a0
// Address: 006101a0
// Size: 535 bytes
// Class: GNFilePath

uint64_t FUN_006101a0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  
  (**(code **)(*(int64_t *)this_ptr[0x41] + 0x478))();
  lVar1 = this_ptr[0x42];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d237a0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)this_ptr[0x41] + 0x960))();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0xa78))();
  (**(code **)(*(int64_t *)this_ptr[0x41] + 0x960))();
  lVar2 = this_ptr[0x42];
  lVar3 = *(int64_t *)(lVar2 + 0x18);
  if (lVar3 != lVar1) {
    if (lVar1 == 0) {
      *(void*)(lVar2 + 0x18) = 0;
    }
    else {
      FUN_00d50b00();
      lVar3 = *(int64_t *)(lVar2 + 0x18);
      *(int64_t *)(lVar2 + 0x18) = lVar1;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if ((int64_t *)this_ptr[0x40] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x40] + 0x38))();
  }
  if (this_ptr[0x41] != 0) {
    this_ptr[0x41] = 0;
    FUN_00d50b20();
  }
  if (this_ptr[0x42] != 0) {
    this_ptr[0x42] = 0;
    FUN_00d50b20();
  }
  FUN_006083c0();
  (**(code **)(*this_ptr + 0x620))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return 1;
}

