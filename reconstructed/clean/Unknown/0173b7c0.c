// Function: FUN_0173b7c0
// Address: 0173b7c0
// Size: 545 bytes
// Class: Unknown

void FUN_0173b7c0(void* param_1)

{
  void *pvVar1;
  int64_t lVar2;
  int64_t lVar3;
  void*this_ptr;
  int64_t *plVar4;
  float fVar5;
  float fVar6;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  
  FUN_0173ba80();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_0173b120();
  if ((local_68 == '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173bbf0();
  pvVar1 = _pthread_getspecific(param_1);
  if ((pvVar1 == (void *)0x0) || (lVar2 = FUN_00e8b990(), lVar2 == 0)) {
    lVar2 = local_70[0xc];
  }
  else {
    lVar2 = *(int64_t *)(local_70[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4] + 0x60);
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if ((pvVar1 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = local_70[0xc];
  }
  else {
    lVar3 = *(int64_t *)(local_70[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4] + 0x60);
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar5 = (float)FUN_01770220();
  fVar6 = (float)FUN_01773e50();
  FUN_01770230(fVar5 + fVar6);
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(param_1);
  plVar4 = local_70;
  if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
    plVar4 = (int64_t *)local_70[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar4 + 0x3f8))();
  *this_ptr = local_70;
  *(void*)(this_ptr + 1) = 1;
  return;
}

