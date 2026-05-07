// Function: FUN_00ce69c0
// Address: 00ce69c0
// Size: 717 bytes
// Class: GNFilePath

void FUN_00ce69c0(uint64_t param_1,void*param_2)

{
  char cVar1;
  int64_t *arg1;
  void*this_ptr;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*arg1 + 0x368))();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_00ce6a1d;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_00ce6a1d:
    FUN_00d8a060();
    if (local_40 != (int64_t *)0x0) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      (**(code **)(*(int64_t *)*param_2 + 0x368))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 == (int64_t *)0x0) {
        local_40 = (int64_t *)0x0;
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
      }
      else {
        FUN_00d8ee20();
        if (local_40 != (int64_t *)0x0) {
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          FUN_00d8ef00();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 != (int64_t *)0x0) {
            FUN_00cddf30();
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
                goto LAB_00ce6bf2;
              }
            }
            else if (local_40 != (int64_t *)0x0) {
LAB_00ce6bf2:
              cVar1 = (**(code **)(*local_40 + 0x398))();
              if (((cVar1 != '\0') || (cVar1 = (**(code **)(*local_40 + 0x3a0))(), cVar1 != '\0'))
                 || (cVar1 = (**(code **)(*local_40 + 0x4a8))(), cVar1 != '\0')) {
                *this_ptr = local_40;
                *(void*)(this_ptr + 1) = 1;
                FUN_00d50b20();
                goto LAB_00ce6c61;
              }
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
      }
LAB_00ce6c61:
      FUN_00d50b20();
      goto LAB_00ce6c6e;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_00ce6c6e:
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

