// Function: FUN_00016af0
// Address: 00016af0
// Size: 743 bytes
// Class: Unknown

void FUN_00016af0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char *pcVar3;
  int64_t *this_ptr;
  int64_t local_b0;
  char local_a8;
  int64_t *local_40;
  char local_38 [8];
  char local_30 [8];
  
  (**(code **)(*this_ptr + 0x670))();
  FUN_00d23310();
  pcVar3 = local_30;
  if (local_38[0] != '\0') {
    pcVar3 = local_38;
  }
  local_30[0] = local_38[0];
  *pcVar3 = '\0';
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30[0] == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)this_ptr[0x13];
  if (plVar1 != local_40) {
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x620))();
      FUN_00178ae0();
      plVar1 = (int64_t *)this_ptr[0x13];
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 == local_40) {
        lVar2 = this_ptr[0x13];
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_00177aa0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
    if (local_40 != (int64_t *)0x0) {
      plVar1 = (int64_t *)this_ptr[0x13];
      if (plVar1 != local_40) {
        FUN_00d50b00();
        this_ptr[0x13] = (int64_t)local_40;
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b00();
      (**(code **)(*local_40 + 0x688))();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      (**(code **)(*local_40 + 0x678))();
      if (local_38[0] == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      FUN_00177000();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  plVar1 = (int64_t *)this_ptr[0x13];
  if (plVar1 != (int64_t *)0x0) {
    lVar2 = this_ptr[0x10];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x620))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

