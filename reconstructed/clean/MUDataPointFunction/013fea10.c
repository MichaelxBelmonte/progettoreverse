// Function: FUN_013fea10
// Address: 013fea10
// Size: 767 bytes
// Class: MUDataPointFunction

void FUN_013fea10(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t this_ptr;
  int64_t local_78;
  char local_70;
  int64_t local_38;
  char local_30;
  
  if (*(int64_t *)(this_ptr + 0x70) != 0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x48);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_012cbe00();
  lVar2 = *(int64_t *)(this_ptr + 0x70);
  lVar4 = lVar2;
  if (lVar2 == local_38) goto LAB_013feb28;
  lVar4 = local_38;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar4 = 0;
      goto LAB_013feae6;
    }
    FUN_00d50b00();
    lVar2 = *(int64_t *)(this_ptr + 0x70);
    *(int64_t *)(this_ptr + 0x70) = local_38;
  }
  else {
    local_30 = '\0';
LAB_013feae6:
    *(int64_t *)(this_ptr + 0x70) = lVar4;
  }
  param_1 = (void*)lVar2;
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar4 = local_38;
  }
LAB_013feb28:
  if ((local_30 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126ef70();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_0124c640();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012642b0(*(void*)(this_ptr + 0x60));
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01259540(0);
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x70);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_012e6a70();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

