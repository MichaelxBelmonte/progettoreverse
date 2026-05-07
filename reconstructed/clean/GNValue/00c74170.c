// Function: FUN_00c74170
// Address: 00c74170
// Size: 606 bytes
// Class: GNValue

void FUN_00c74170(void)

{
  uint8_t uVar1;
  int64_t lVar2;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *local_90;
  char local_88;
  int64_t local_40;
  char local_38;
  
  FUN_00c8e710();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00daa540();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  uVar1 = (**(code **)(*arg1 + 0x618))();
  *(void*)(arg1 + 0xd) = uVar1;
  (**(code **)(*arg1 + 0x608))();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    (**(code **)(*arg1 + 0x608))();
    (**(code **)(*local_90 + 0x368))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = 0;
  if (((char)arg1[0xd] != '\0') && (local_40 != 0)) {
    FUN_00d50b00();
    lVar2 = local_40;
  }
  *this_ptr = lVar2;
  *(void*)(this_ptr + 1) = 1;
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

