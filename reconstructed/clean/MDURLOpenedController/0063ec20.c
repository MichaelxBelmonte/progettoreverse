// Function: FUN_0063ec20
// Address: 0063ec20
// Size: 765 bytes
// Class: MDURLOpenedController

void FUN_0063ec20(void)

{
  int64_t lVar1;
  char cVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_b0;
  char local_a8;
  int64_t local_98;
  char local_90;
  int64_t local_40;
  char local_38;
  
  cVar2 = FUN_0063f180();
  if ((cVar2 != '\0') && (FUN_0063f230(), local_40 != 0)) {
    FUN_0063f230();
    cVar2 = FUN_00212c70();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_0063f230();
      FUN_002218f0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00631670();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_0063f230();
  if (local_40 != 0) {
    FUN_0063f230();
    FUN_00221930();
    lVar1 = *arg1;
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (local_98 == lVar1) {
      FUN_0063f230();
      FUN_00221970();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_0063f230();
      FUN_00226060();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if (*(int64_t *)(this_ptr + 0xb0) != 0) {
    FUN_00177aa0();
  }
  FUN_00d23f50();
  (**(code **)(*(int64_t *)*arg1 + 0x5e0))();
  if (local_40 == *arg1) {
    FUN_0062a580();
    *(void*)(this_ptr + 0x158) = 0;
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}

