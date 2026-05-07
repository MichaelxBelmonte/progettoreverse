// Function: FUN_012f7880
// Address: 012f7880
// Size: 725 bytes
// Class: MULSSGenerator

void FUN_012f7880(void* param_1)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *pvVar4;
  void* pVar5;
  int64_t lVar6;
  int64_t this_ptr;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  int local_40;
  
  *(int *)(this_ptr + 0x6c) = *(int *)(this_ptr + 0x6c) + 1;
  lVar2 = FUN_00e8b990();
  if (lVar2 != 0) {
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3260();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = *(int64_t *)(this_ptr + 0xb0);
  if (lVar2 != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
LAB_012f792b:
    while( true ) {
      lVar3 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_40) break;
      lVar6 = *(int64_t *)(lVar2 + 0x10);
      local_58 = *(int64_t *)(lVar6 + 8 + lVar3 * 8);
      pvVar4 = _pthread_getspecific((void*)lVar6);
      pVar5 = (void*)lVar6;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01274b60();
      if (local_70 == '\0') goto LAB_012f79d0;
      if (local_78 != 0) goto LAB_012f7a00;
    }
    FUN_001159b0();
    param_1 = (void*)lVar2;
    if (*(int64_t *)(this_ptr + 0xb0) != 0) {
      FUN_00d50b00();
      bVar1 = false;
      goto LAB_012f7a97;
    }
  }
  bVar1 = true;
LAB_012f7a97:
  FUN_012edae0();
  if (!bVar1) {
    FUN_00d50b20();
  }
  lVar2 = FUN_00e8b990();
  if (lVar2 != 0) {
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  *(int *)(this_ptr + 0x6c) = *(int *)(this_ptr + 0x6c) + -1;
  if (*(int64_t *)(this_ptr + 0x58) != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50b00();
    FUN_012f5460();
    FUN_00d50b20();
  }
  return;
LAB_012f79d0:
  if (local_78 != 0) {
    FUN_00d50b00();
LAB_012f7a00:
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0129a1f0();
    FUN_00d50b20();
  }
  goto LAB_012f792b;
}

