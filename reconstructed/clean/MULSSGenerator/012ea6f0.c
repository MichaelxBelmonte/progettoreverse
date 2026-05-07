// Function: FUN_012ea6f0
// Address: 012ea6f0
// Size: 621 bytes
// Class: MULSSGenerator

void* FUN_012ea6f0(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  void*puVar6;
  void* in_ECX;
  code *pcVar7;
  int64_t *arg1;
  void*this_ptr;
  int iVar8;
  int64_t lVar9;
  
  if ((char)arg1[0x28] != '\0') {
    (**(code **)(*arg1 + 0x1a0))();
  }
  lVar9 = arg1[0x27];
  if (lVar9 != 0) {
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      lVar9 = arg1[0x27];
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar9 + 0x38) != '\0') {
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015298a0(param_1,param_2);
      return this_ptr;
    }
  }
  pcVar2 = g_02572370;
  lVar9 = arg1[0x16];
  if (lVar9 == 0) {
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    if (*(int *)(lVar9 + 0xc) < 1) {
      bVar1 = false;
      puVar6 = (void*)0x0;
    }
    else {
      iVar8 = 0;
      puVar6 = (void*)0x0;
      bVar1 = false;
      pcVar7 = g_02572370;
      do {
        pvVar4 = _pthread_getspecific((void*)pcVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_01275500(param_1,param_2);
        if (cVar3 != '\0') {
          if (puVar6 == (void*)0x0) {
            puVar6 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar6 = &g_02572358;
            (*pcVar2)();
            bVar1 = true;
          }
          pcVar7 = 0x0;
          FUN_00d24b60(0,FUN_012e8c90,0);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar9 + 0xc));
    }
    FUN_001159b0();
    *(void*)(this_ptr + 1) = 0;
    if (bVar1) goto LAB_012ea952;
    if (puVar6 != (void*)0x0) {
      FUN_00d50b00();
      goto LAB_012ea952;
    }
  }
  puVar6 = (void*)0x0;
LAB_012ea952:
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

