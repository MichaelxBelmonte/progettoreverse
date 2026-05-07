// Function: FUN_00756aa0
// Address: 00756aa0
// Size: 679 bytes
// Class: MUAudioIOSlot

void FUN_00756aa0(void* param_1)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  uint32_t uVar4;
  uint64_t uVar5;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (this_ptr[0xe] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    (**(code **)(*this_ptr + 0x628))();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a7c90();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      plVar1 = (int64_t *)this_ptr[0xe];
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_013201a0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar4 = FUN_01320130();
      (**(code **)(*plVar1 + 0x428))(uVar5,uVar4);
      FUN_00d50b20();
      plVar1 = (int64_t *)this_ptr[0xe];
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x628))();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a7cd0();
      lVar3 = *plVar1;
      (**(code **)(lVar3 + 0x400))();
      param_1 = (void*)lVar3;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)this_ptr[0xe];
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x628))();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a7cf0();
    (**(code **)(*plVar1 + 0x3a8))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

