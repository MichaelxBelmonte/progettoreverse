// Function: FUN_01703070
// Address: 01703070
// Size: 701 bytes
// Class: Unknown

int64_t * FUN_01703070(void*param_1,void*param_2,void*param_3)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  void* pVar4;
  int64_t *this_ptr;
  void*puVar6;
  int64_t lVar7;
  int64_t local_80;
  char local_78;
  uint64_t local_70;
  uint32_t local_64;
  uint64_t local_60;
  uint32_t local_4c;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  void*puVar5;
  
  puVar6 = &local_64;
  if (param_3 != (void*)0x0) {
    puVar6 = param_3;
  }
  local_64 = 0xffffffff;
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar5 = param_2;
  FUN_0165c0f0(param_2,*param_2,param_1,puVar6);
  pVar4 = (void*)puVar5;
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar5 = param_1;
  FUN_0165c650(param_1,param_2,puVar6);
  lVar7 = local_48;
  pVar4 = (void*)puVar5;
  if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_38 = lVar7;
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_0165e830();
  if (cVar2 == '\0') {
    *this_ptr = local_38;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  local_60 = *param_2;
  local_70 = *param_1;
  local_4c = *puVar6;
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar5 = &local_70;
  FUN_0165c650(puVar5,&local_60,&local_4c);
  lVar7 = local_48;
  pVar4 = (void*)puVar5;
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_017032eb;
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == 0) {
LAB_017032eb:
    bVar1 = true;
    lVar7 = local_38;
    goto LAB_017032ff;
  }
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_0165e830();
  if (cVar2 != '\0') {
    *this_ptr = local_38;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    return this_ptr;
  }
  *param_2 = local_60;
  bVar1 = false;
LAB_017032ff:
  *this_ptr = lVar7;
  *(void*)(this_ptr + 1) = 1;
  if ((!bVar1) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

