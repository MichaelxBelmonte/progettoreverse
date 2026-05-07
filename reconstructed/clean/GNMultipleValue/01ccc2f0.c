// Function: FUN_01ccc2f0
// Address: 01ccc2f0
// Size: 596 bytes
// Class: GNMultipleValue

void* FUN_01ccc2f0(uint64_t param_1,void*param_2)

{
  int64_t lVar1;
  void*this_ptr;
  uint64_t local_90;
  uint8_t local_88;
  uint64_t local_80;
  uint8_t local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  
  local_90 = *param_2;
  local_88 = 0;
  FUN_01ccab60(param_1,&local_90);
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01ccc387;
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) {
LAB_01ccc387:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  FUN_01cc98b0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01ccc3ac;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_01ccc3ac:
    lVar1 = local_40[5];
    FUN_00d50b20();
    if (lVar1 != 0) {
      FUN_00d50b00();
      local_70 = local_40;
      local_68 = '\0';
      FUN_01d26d00(param_1 & 0xffffffff,&local_70);
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_80 = *param_2;
      local_78 = 0;
      FUN_01ccac20();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_01ccc47c;
        }
      }
      else if (local_40 != (int64_t *)0x0) {
LAB_01ccc47c:
        local_60 = local_40;
        local_58 = '\0';
        (**(code **)(*local_40 + 0x370))();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      goto LAB_01ccc528;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_01ccc528:
  FUN_00d50b20();
  return this_ptr;
}

