// Function: FUN_013fee70
// Address: 013fee70
// Size: 525 bytes
// Class: MUDataPointFunction

void FUN_013fee70(void* param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  
  if (*(int64_t *)(this_ptr + 0x70) == 0) {
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126ef70();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 == 0) {
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar5 = FUN_00e8b990();
  if (lVar5 == 0) {
    bVar2 = true;
  }
  else {
    FUN_00d50b00();
    FUN_00cb1f10();
    cVar3 = FUN_00db3690();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      bVar1 = true;
      bVar2 = false;
      goto LAB_013fefc4;
    }
    FUN_00cb1f10();
    FUN_00db3260();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    bVar2 = false;
  }
  bVar1 = false;
LAB_013fefc4:
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_01289e80();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (!bVar1 && !bVar2) {
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  if (lVar5 != 0 && !bVar2) {
    FUN_00d50b20();
  }
  return;
}

