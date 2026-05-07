// Function: FUN_013e61a0
// Address: 013e61a0
// Size: 682 bytes
// Class: Unknown

int64_t * FUN_013e61a0(void* param_1)

{
  int64_t lVar1;
  bool bVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  
  if (*(int64_t *)(arg1 + 0x60) == 0) {
LAB_013e62f3:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  FUN_013de560();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 == 0) goto LAB_013e62f3;
  FUN_013de560();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc420();
  local_40 = local_68;
  lVar4 = local_68;
  if (local_68 == 0) {
    bVar2 = true;
    local_40 = 0;
  }
  else if (local_60 == '\0') {
    FUN_00d50b00();
    bVar2 = false;
  }
  else {
    local_60 = '\0';
    bVar2 = false;
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == 0) goto LAB_013e62f3;
  pvVar3 = _pthread_getspecific((void*)lVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_013e6336;
    }
  }
  else if (local_68 != 0) {
LAB_013e6336:
    lVar5 = 0;
    do {
      if (*(int *)(local_68 + 0xc) <= (int)lVar5) {
        FUN_001150f0();
        FUN_00d50b20();
        goto LAB_013e63ff;
      }
      lVar1 = *(int64_t *)(*(int64_t *)(local_68 + 0x10) + lVar5 * 8);
      pvVar3 = _pthread_getspecific((void*)lVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = lVar5 + 1;
    } while (local_78 != local_40);
    *(void*)(this_ptr + 1) = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
    FUN_001150f0();
    FUN_00d50b20();
    goto LAB_013e643f;
  }
LAB_013e63ff:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_013e643f:
  if (bVar2) {
    return this_ptr;
  }
  FUN_00d50b20();
  return this_ptr;
}

