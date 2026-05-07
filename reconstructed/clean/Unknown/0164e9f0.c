// Function: FUN_0164e9f0
// Address: 0164e9f0
// Size: 1872 bytes
// Class: Unknown

void FUN_0164e9f0(void)

{
  void*puVar1;
  int64_t lVar2;
  void *pvVar3;
  void* pVar4;
  int64_t lVar5;
  int64_t this_ptr;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int64_t local_70;
  char local_68;
  int local_58;
  int64_t local_48;
  char local_40;
  
  if ((*(char *)(this_ptr + 0xb3) != '\0') || (*(char *)(this_ptr + 0xb4) != '\0')) {
    puVar1 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar4 = 0x2572358;
    *puVar1 = &g_02572358;
    (*g_02572370)();
    FUN_00d21370();
    lVar5 = *(int64_t *)(this_ptr + 0x98);
    if (lVar5 != 0) {
      local_68 = '\0';
      local_70 = 0;
      local_58 = -1;
      while( true ) {
        lVar2 = (int64_t)local_58;
        local_58 = local_58 + 1;
        if (*(int *)(lVar5 + 0xc) <= local_58) break;
        local_70 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + 8 + lVar2 * 8);
        pvVar3 = _pthread_getspecific((void*)*(int64_t *)(lVar5 + 0x10));
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016557b0();
        local_40 = '\0';
        FUN_00d21140();
        local_48 = local_70;
      }
      FUN_00277f20();
      pVar4 = (void*)lVar5;
    }
    if (*(int *)((int64_t)puVar1 + 0xc) != 0) {
      FUN_0165a430();
      FUN_01650210();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar6 = (double)FUN_012ebfe0();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_01650210();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar7 = (double)FUN_012ebd30();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar8 = (double)FUN_01666eb0();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505900();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      dVar9 = 0.0;
      if (dVar6 <= 0.0) {
        dVar9 = dVar6;
      }
      if (dVar8 <= dVar7) {
        dVar8 = dVar7;
      }
      FUN_01518160(dVar9,dVar8,*(void*)(this_ptr + 0xb4),0);
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      FUN_01733c10();
    }
    *(void*)(this_ptr + 0xb3) = 0;
    FUN_00d50b20();
  }
  return;
}

