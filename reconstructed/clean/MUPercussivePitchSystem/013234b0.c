// Function: FUN_013234b0
// Address: 013234b0
// Size: 1078 bytes
// Class: MUPercussivePitchSystem

void FUN_013234b0(int64_t param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  
  cVar1 = (**(code **)(*this_ptr + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(this_ptr[8] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013df660();
      lVar3 = lVar3 + 1;
      param_1 = (int64_t)*(int *)(this_ptr[8] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*this_ptr + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(this_ptr[0x19] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (int64_t)*(int *)(this_ptr[0x19] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*this_ptr + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(this_ptr[0x1a] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (int64_t)*(int *)(this_ptr[0x1a] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*this_ptr + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(this_ptr[0x1d] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (int64_t)*(int *)(this_ptr[0x1d] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*this_ptr + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(this_ptr[0x20] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (int64_t)*(int *)(this_ptr[0x20] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*this_ptr + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(this_ptr[0x1c] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (int64_t)*(int *)(this_ptr[0x1c] + 0xc);
    } while (lVar3 < param_1);
  }
  *(void*)(this_ptr + 0x30) = 0xffffffff;
  if (this_ptr[0x32] != 0) {
    FUN_00e83070();
    this_ptr[0x32] = 0;
  }
  FUN_00e8b7e0();
  return;
}

