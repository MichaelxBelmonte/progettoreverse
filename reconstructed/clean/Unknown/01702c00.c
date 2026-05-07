// Function: FUN_01702c00
// Address: 01702c00
// Size: 888 bytes
// Class: Unknown

int64_t *
FUN_01702c00(void*param_1,uint64_t param_2,void*param_3,void*param_4)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  void* pVar5;
  void*puVar6;
  int64_t *this_ptr;
  void*puVar7;
  int64_t lVar8;
  uint32_t local_6c;
  uint64_t local_68;
  void*local_60;
  uint64_t local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_34;
  
  puVar7 = &local_6c;
  if (param_4 != (void*)0x0) {
    puVar7 = param_4;
  }
  local_6c = 0xffffffff;
  local_60 = param_3;
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar6 = param_1;
  FUN_0165c0f0(param_1,param_2,local_60,puVar7);
  lVar2 = local_48;
  pVar5 = (void*)puVar6;
  if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_0165e830();
  if (cVar3 == '\0') {
    local_50 = *param_1;
    local_68 = *local_60;
    local_34 = *puVar7;
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar6 = &local_68;
    FUN_0165c7f0(puVar6,&local_50,&local_34);
    pVar5 = (void*)puVar6;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01702ec0;
      }
    }
    else if (local_48 != 0) {
LAB_01702ec0:
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_0165e830();
      if (cVar3 != '\0') {
        *local_60 = local_68;
      }
      *this_ptr = lVar2;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      return this_ptr;
    }
    *this_ptr = lVar2;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  local_50 = *param_1;
  local_68 = *local_60;
  local_34 = *puVar7;
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar6 = &local_68;
  FUN_0165c650(puVar6,&local_50,&local_34);
  lVar8 = local_48;
  pVar5 = (void*)puVar6;
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_01702f2b;
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == 0) {
LAB_01702f2b:
    bVar1 = true;
    lVar8 = lVar2;
    goto LAB_01702f49;
  }
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_0165e830();
  if (cVar3 != '\0') {
    *this_ptr = lVar2;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    return this_ptr;
  }
  *param_1 = local_50;
  bVar1 = false;
LAB_01702f49:
  *this_ptr = lVar8;
  *(void*)(this_ptr + 1) = 1;
  if ((!bVar1) && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

