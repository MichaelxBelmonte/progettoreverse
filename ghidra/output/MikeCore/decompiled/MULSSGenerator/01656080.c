// Function: FUN_01656080
// Address: 01656080
// Size: 757 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x01656274) */
/* WARNING: Removing unreachable block (ram,0x01656281) */
/* WARNING: Removing unreachable block (ram,0x0165635e) */
/* WARNING: Removing unreachable block (ram,0x0165636b) */

double FUN_01656080(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  void *pvVar4;
  pthread_key_t in_ECX;
  longlong unaff_RDI;
  double dVar5;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  double local_38;
  
  FUN_016557b0();
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a10();
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01710460();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((*(char *)(unaff_RDI + 0x60) == '\0') || (local_48 == 0)) {
    local_38 = (param_1 - *(double *)(unaff_RDI + 0x40)) * *(double *)(unaff_RDI + 0x68) +
               *(double *)(unaff_RDI + 0x50);
  }
  else {
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01650210();
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)FUN_016c25f0(param_1);
    dVar1 = *(double *)(unaff_RDI + 0x78);
    dVar2 = *(double *)(unaff_RDI + 0x68);
    dVar3 = *(double *)(unaff_RDI + 0x70);
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38 = (double)FUN_016c26c0(dVar1 + (dVar5 - dVar3) * dVar2);
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return local_38;
}


