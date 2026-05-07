// Function: FUN_017f4240
// Address: 017f4240
// Size: 766 bytes
// Class: GNData


void FUN_017f4240(pthread_key_t param_1)

{
  void *pvVar1;
  longlong unaff_RDI;
  
  if ((*(float *)(unaff_RDI + 0xb8) != 0.0) || (NAN(*(float *)(unaff_RDI + 0xb8)))) {
    FUN_00d64850();
    *(undefined4 *)(unaff_RDI + 0xb8) = 0;
    FUN_00d64910();
  }
  if ((*(float *)(unaff_RDI + 0xbc) != 0.0) || (NAN(*(float *)(unaff_RDI + 0xbc)))) {
    FUN_00d64850();
    *(undefined4 *)(unaff_RDI + 0xbc) = 0;
    FUN_00d64910();
  }
  if ((*(float *)(unaff_RDI + 0xcc) != 0.0) || (NAN(*(float *)(unaff_RDI + 0xcc)))) {
    FUN_00d64850();
    *(undefined4 *)(unaff_RDI + 0xcc) = 0;
    FUN_00d64910();
  }
  if ((*(float *)(unaff_RDI + 0xc4) != DAT_02390124) ||
     (NAN(*(float *)(unaff_RDI + 0xc4)) || NAN(DAT_02390124))) {
    FUN_00d64850();
    *(undefined4 *)(unaff_RDI + 0xc4) = 0x3f800000;
    FUN_00d64910();
  }
  if ((*(float *)(unaff_RDI + 200) != DAT_02390124) ||
     (NAN(*(float *)(unaff_RDI + 200)) || NAN(DAT_02390124))) {
    FUN_00d64850();
    *(undefined4 *)(unaff_RDI + 200) = 0x3f800000;
    FUN_00d64910();
  }
  if ((*(float *)(unaff_RDI + 0xc0) != 0.0) || (NAN(*(float *)(unaff_RDI + 0xc0)))) {
    FUN_00d64850();
    *(undefined4 *)(unaff_RDI + 0xc0) = 0;
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


