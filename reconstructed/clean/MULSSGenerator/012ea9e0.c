// Function: FUN_012ea9e0
// Address: 012ea9e0
// Size: 677 bytes
// Class: MULSSGenerator

void* FUN_012ea9e0(double param_1,double param_2)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  void*puVar6;
  void* in_ECX;
  code *pcVar7;
  int64_t lVar8;
  int64_t *arg1;
  void*this_ptr;
  int iVar9;
  uint64_t uVar10;
  
  uVar10 = ~-(uint64_t)(param_2 < 0.0) & (uint64_t)param_1 |
           (uint64_t)(param_1 + param_2) & -(uint64_t)(param_2 < 0.0);
  if (param_2 < 0.0) {
    param_2 = (double)((uint64_t)param_2 ^ g_023945b0);
  }
  if ((char)arg1[0x28] != '\0') {
    (**(code **)(*arg1 + 0x1a0))();
  }
  lVar8 = arg1[0x27];
  if (lVar8 != 0) {
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      lVar8 = arg1[0x27];
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar8 + 0x38) != '\0') {
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01529c50(uVar10,param_2);
      return this_ptr;
    }
  }
  pcVar2 = g_02572370;
  lVar8 = arg1[0x16];
  if (lVar8 == 0) {
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    if (*(int *)(lVar8 + 0xc) < 1) {
      bVar1 = false;
      puVar6 = (void*)0x0;
    }
    else {
      iVar9 = 0;
      puVar6 = (void*)0x0;
      bVar1 = false;
      pcVar7 = g_02572370;
      do {
        pvVar4 = _pthread_getspecific((void*)pcVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_01275530(uVar10,param_2);
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
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(lVar8 + 0xc));
    }
    FUN_001159b0();
    *(void*)(this_ptr + 1) = 0;
    if (bVar1) goto LAB_012eac75;
    if (puVar6 != (void*)0x0) {
      FUN_00d50b00();
      goto LAB_012eac75;
    }
  }
  puVar6 = (void*)0x0;
LAB_012eac75:
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

