// Function: FUN_0031cb70
// Address: 0031cb70
// Size: 761 bytes
// Class: Unknown

void FUN_0031cb70(void* param_1)

{
  int64_t lVar1;
  bool bVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264970();
  lVar1 = *(int64_t *)(local_40 + 0x28);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  lVar4 = local_40;
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264970();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e78c0();
    if (local_40 == 0) {
      lVar4 = 0;
      bVar2 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
    }
    else {
      local_38 = '\0';
      bVar2 = true;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) goto LAB_0031cdd8;
  }
  (**(code **)(*this_ptr + 0x438))();
  FUN_012d25b0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e78c0();
  if (local_40 == 0) {
    lVar4 = 0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar2 = true;
    lVar4 = local_40;
  }
  else {
    local_38 = '\0';
    bVar2 = true;
    lVar4 = local_40;
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
LAB_0031cdd8:
  (**(code **)(*this_ptr + 0x438))();
  FUN_012d99f0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  return;
}

