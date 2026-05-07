// Function: FUN_0125a2f0
// Address: 0125a2f0
// Size: 565 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0125a2f0(void* param_1)

{
  void *pvVar1;
  int64_t this_ptr;
  float fVar2;
  int64_t local_30;
  char local_28;
  
  if ((!NAN(*(float *)(this_ptr + 0xf8))) && (*(int64_t *)(this_ptr + 0xd8) != 0)) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef460();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar2 = (float)FUN_013ddd00();
      if ((*(float *)(this_ptr + 0xf8) != fVar2) ||
         (NAN(*(float *)(this_ptr + 0xf8)) || NAN(fVar2))) {
        FUN_00d64850();
        *(float *)(this_ptr + 0xf8) = fVar2;
        FUN_00d64910();
      }
      FUN_0125a5f0();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if (*(int64_t *)(this_ptr + 200) != 0) {
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ec70();
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152de20();
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152dfb0();
      }
    }
  }
  return;
}

