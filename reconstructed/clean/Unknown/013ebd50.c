// Function: FUN_013ebd50
// Address: 013ebd50
// Size: 580 bytes
// Class: Unknown

void* FUN_013ebd50(double param_1,double param_2)

{
  double dVar1;
  uint64_t uVar2;
  int iVar3;
  void*puVar4;
  void *pvVar5;
  int64_t lVar6;
  int iVar7;
  void* pVar8;
  void*puVar10;
  int64_t arg1;
  void*this_ptr;
  int64_t local_50;
  char local_48;
  void*puVar9;
  
  dVar1 = *(double *)(arg1 + 0x50);
  lVar6 = *(int64_t *)(arg1 + 0x48);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  iVar3 = *(int *)(lVar6 + 0x18);
  FUN_00d50b20();
  iVar7 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar7 = iVar3;
  }
  puVar9 = (void*)(uint64_t)(uint)(iVar7 >> 2);
  if (iVar7 >> 2 < (int)(param_2 * dVar1) + (int)(param_1 * dVar1)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)(puVar4 + 7) = 0;
    *(void*)((int64_t)puVar4 + 0x3c) = 0;
    *(void*)(puVar4 + 8) = 0;
    *puVar4 = &g_025dc9e8;
    puVar4[9] = 0;
    puVar4[10] = 0;
    FUN_00d500e0();
    pvVar5 = _pthread_getspecific((void*)puVar9);
    puVar10 = puVar4;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      puVar9 = puVar4;
      puVar10 = (void*)puVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    pVar8 = (void*)puVar9;
    uVar2 = *(void*)(arg1 + 0x50);
    FUN_00d64850();
    puVar10[10] = uVar2;
    FUN_00d64910();
    pvVar5 = _pthread_getspecific(pVar8);
    if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
      lVar6 = *(int64_t *)(arg1 + 0x48);
    }
    else {
      lVar6 = *(int64_t *)(arg1 + 0x48);
    }
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    FUN_00c92250();
    if ((local_48 == '\0') && (local_50 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    FUN_013eb890();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    *this_ptr = puVar4;
    *(void*)(this_ptr + 1) = 1;
  }
  return this_ptr;
}

