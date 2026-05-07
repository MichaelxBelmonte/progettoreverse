// Function: FUN_016d72a0
// Address: 016d72a0
// Size: 571 bytes
// Class: Unknown

void FUN_016d72a0(void* param_1,uint64_t param_2)

{
  char cVar1;
  void *pvVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  void* pVar5;
  int64_t *this_ptr;
  int64_t local_40;
  char local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar5 = 0;
  FUN_018fef60(0,param_2);
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar5 = 0;
  FUN_018fea90(0,param_2);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_016d737f;
    }
LAB_016d73f2:
    if (local_40 == 0) {
      *this_ptr = 0;
      *(void*)(this_ptr + 1) = 1;
      return;
    }
    FUN_00d50b00();
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
LAB_016d737f:
    if ((local_40 == 0) || (local_40 == 0)) {
      if (local_40 == 0) goto LAB_016d73f2;
      FUN_00d50b00();
    }
    else {
      pvVar2 = _pthread_getspecific(pVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      uVar3 = FUN_00e7bfe0();
      pvVar2 = _pthread_getspecific(pVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar4 = FUN_019079b0();
      if (((uVar3 >> 0x20 == 0) || (uVar4 >> 0x20 == 0)) || (cVar1 = FUN_00e7c020(), cVar1 == '\0'))
      {
        FUN_00d50b00();
      }
      else {
        FUN_00d50b00();
      }
    }
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    if (local_40 == 0) {
      return;
    }
  }
  FUN_00d50b20();
  return;
}

