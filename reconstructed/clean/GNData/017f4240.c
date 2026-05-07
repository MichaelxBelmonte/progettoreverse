// Function: FUN_017f4240
// Address: 017f4240
// Size: 766 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_017f4240(void* param_1)

{
  void *pvVar1;
  int64_t this_ptr;
  
  if ((*(float *)(this_ptr + 0xb8) != 0.0) || (NAN(*(float *)(this_ptr + 0xb8)))) {
    FUN_00d64850();
    *(void*)(this_ptr + 0xb8) = 0;
    FUN_00d64910();
  }
  if ((*(float *)(this_ptr + 0xbc) != 0.0) || (NAN(*(float *)(this_ptr + 0xbc)))) {
    FUN_00d64850();
    *(void*)(this_ptr + 0xbc) = 0;
    FUN_00d64910();
  }
  if ((*(float *)(this_ptr + 0xcc) != 0.0) || (NAN(*(float *)(this_ptr + 0xcc)))) {
    FUN_00d64850();
    *(void*)(this_ptr + 0xcc) = 0;
    FUN_00d64910();
  }
  if ((*(float *)(this_ptr + 0xc4) != g_02390124) ||
     (NAN(*(float *)(this_ptr + 0xc4)) || NAN(g_02390124))) {
    FUN_00d64850();
    *(void*)(this_ptr + 0xc4) = 0x3f800000;
    FUN_00d64910();
  }
  if ((*(float *)(this_ptr + 200) != g_02390124) ||
     (NAN(*(float *)(this_ptr + 200)) || NAN(g_02390124))) {
    FUN_00d64850();
    *(void*)(this_ptr + 200) = 0x3f800000;
    FUN_00d64910();
  }
  if ((*(float *)(this_ptr + 0xc0) != 0.0) || (NAN(*(float *)(this_ptr + 0xc0)))) {
    FUN_00d64850();
    *(void*)(this_ptr + 0xc0) = 0;
    FUN_00d64910();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0188f2b0();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0188f2b0();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0188f2b0();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015be040();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015be040();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015be040();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015be040();
  return;
}

