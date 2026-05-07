// Function: FUN_019412f0
// Address: 019412f0
// Size: 529 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01941482) */
/* WARNING: Removing unreachable block (ram,0x0194148b) */

void FUN_019412f0(pthread_key_t param_1,int param_2)

{
  char cVar1;
  void *pvVar2;
  longlong unaff_RDI;
  bool bVar3;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  bVar3 = true;
  if (param_2 == 0) {
    bVar3 = *(int *)(unaff_RDI + 0x580) == 1;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264970();
  cVar1 = '\x01';
  if (!(bool)(local_40 != 0 & bVar3)) {
    cVar1 = FUN_019415b0();
    if (cVar1 == '\0') {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_0134a7d0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      cVar1 = '\0';
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264970();
    FUN_01539260();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264970();
    *(undefined1 *)(local_40 + 0x21) = 1;
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}


