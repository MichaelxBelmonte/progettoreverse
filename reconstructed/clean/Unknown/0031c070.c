// Function: FUN_0031c070
// Address: 0031c070
// Size: 852 bytes
// Class: Unknown

void FUN_0031c070(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  char unaff_SIL;
  int64_t *this_ptr;
  double dVar4;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  cVar2 = (**(code **)(*this_ptr + 0x3f0))();
  if (cVar2 == '\0') {
    return;
  }
  if (unaff_SIL == '\0') {
    FUN_00764730();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015305e0();
    lVar1 = this_ptr[5];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    cVar2 = FUN_00d23d70();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      return;
    }
    FUN_00764730();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar1 = this_ptr[5];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01530740();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar4 = (double)FUN_013201b0();
    if ((dVar4 == 0.0) && (!NAN(dVar4))) {
      return;
    }
    FUN_00764730();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015305e0();
    lVar1 = this_ptr[5];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    cVar2 = FUN_00d23d70();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      return;
    }
    FUN_00764730();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar1 = this_ptr[5];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01530610();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00324d40();
  return;
}

