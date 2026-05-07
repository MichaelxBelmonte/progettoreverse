// Function: FUN_0165b470
// Address: 0165b470
// Size: 753 bytes
// Class: MULSSGenerator

void* FUN_0165b470(void*param_1)

{
  uint32_t uVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *arg1;
  void*this_ptr;
  int iVar7;
  int64_t local_48;
  char local_40;
  
  if ((*arg1 == 0) || (*(int *)(*arg1 + 0xc) == 0)) {
    FUN_0123fbe0(param_1,4);
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_00e7bdb0();
    FUN_0165b0c0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_025f68e8;
    puVar2[7] = &g_025f6c78;
    puVar2[8] = 0;
    *(void*)(puVar2 + 9) = 0;
    FUN_00d500e0();
    pvVar3 = _pthread_getspecific((void*)param_1);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      param_1 = puVar2;
    }
    FUN_0165b800();
    pVar6 = (void*)param_1;
    lVar4 = *arg1;
    if (lVar4 != 0) {
      for (iVar7 = 0; pVar6 = (void*)param_1, iVar7 < *(int *)(lVar4 + 0xc);
          iVar7 = iVar7 + 1) {
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          pVar6 = (void*)puVar2;
        }
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014ff950();
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar1 = FUN_014ff960();
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        param_1 = (void*)FUN_014ff9a0();
        FUN_0165b8b0(param_1,uVar1,0);
      }
      FUN_01660130();
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165bd00();
    *this_ptr = puVar2;
    *(void*)(this_ptr + 1) = 1;
  }
  return this_ptr;
}

