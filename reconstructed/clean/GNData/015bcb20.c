// Function: FUN_015bcb20
// Address: 015bcb20
// Size: 608 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_015bcb20(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t this_ptr;
  
  cVar1 = FUN_00d59e50();
  if (cVar1 == '\0') {
    cVar1 = FUN_00d59e50();
    if (((cVar1 == '\0') && (cVar1 = FUN_00d59e50(), cVar1 == '\0')) &&
       (cVar1 = FUN_00d59e50(), cVar1 == '\0')) {
      cVar1 = FUN_00d59e50();
      if (cVar1 == '\0') {
        cVar1 = FUN_00d59e50();
        if ((((cVar1 == '\0') && (cVar1 = FUN_00d59e50(), cVar1 == '\0')) &&
            ((cVar1 = FUN_00d59e50(), cVar1 == '\0' &&
             ((cVar1 = FUN_00d59e50(), cVar1 == '\0' && (cVar1 = FUN_00d59e50(), cVar1 == '\0'))))))
           && (cVar1 = FUN_00d59e50(), cVar1 == '\0')) {
          cVar1 = FUN_00d59e50();
          if (((cVar1 != '\0') || (cVar1 = FUN_00d59e50(), cVar1 != '\0')) &&
             (*(int64_t *)(this_ptr + 0x38) != 0)) {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017f4eb0();
          }
          goto LAB_015bcc46;
        }
      }
      else {
        FUN_015bc4e0();
      }
    }
    else {
      FUN_015bc420();
    }
    FUN_015bc5a0();
  }
  else {
    if (*(int64_t *)(this_ptr + 0x38) != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017f4ee0();
    }
    *(void*)(this_ptr + 0x4a) = 0;
    FUN_015b7be0();
    if ((*(int64_t *)(this_ptr + 0x38) != 0) && (*(int *)(this_ptr + 0x40) == 3)) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017f5140();
    }
  }
LAB_015bcc46:
  FUN_00d654d0();
  return;
}

