// Function: FUN_01a82870
// Address: 01a82870
// Size: 832 bytes
// Class: Unknown

void FUN_01a82870(void* param_1,int64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  void *pvVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01a81c00();
  (**(code **)(*arg1 + 0x928))();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == local_50) {
    *(void*)(this_ptr + 1) = 0;
    lVar1 = *param_2;
    if ((char)param_2[1] == '\0') {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar1;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      *this_ptr = lVar1;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(param_2 + 1) = 0;
    }
  }
  else {
    (**(code **)(*arg1 + 0x928))();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0126e7e0();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = *param_2;
    iVar2 = FUN_00d237a0();
    if (iVar2 == -1) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      FUN_01a81c00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126e7e0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013f2b00();
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + (int64_t)iVar2 * 8);
      *(void*)(this_ptr + 1) = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar1;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

