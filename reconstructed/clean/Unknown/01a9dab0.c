// Function: FUN_01a9dab0
// Address: 01a9dab0
// Size: 549 bytes
// Class: Unknown

void* FUN_01a9dab0(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  void*puVar5;
  void *pvVar6;
  int64_t lVar7;
  void* pVar8;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t local_50;
  int64_t local_48;
  char local_40;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar8 = 0x2572358;
  *puVar5 = &g_02572358;
  (*g_02572370)();
  if (*(int64_t *)(arg1 + 0x1e0) != 0) {
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    if (local_48 == 0) {
      bVar3 = true;
      local_50 = 0;
      lVar7 = *(int64_t *)(arg1 + 0x1e8);
      iVar1 = *(int *)(lVar7 + 0xc);
    }
    else {
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
      bVar3 = false;
      lVar7 = *(int64_t *)(arg1 + 0x1e8);
      iVar1 = *(int *)(lVar7 + 0xc);
      local_50 = local_48;
    }
    if (iVar1 < 1) {
      bVar2 = false;
      lVar11 = 0;
    }
    else {
      lVar9 = 0;
      bVar2 = false;
      lVar10 = 0;
      do {
        lVar7 = *(int64_t *)
                 (*(int64_t *)(local_50 + 0x10) +
                 (int64_t)*(int *)(*(int64_t *)(*(int64_t *)(lVar7 + 0x10) + lVar9 * 8) + 0xc) *
                 8);
        if (lVar10 == lVar7) {
          lVar11 = lVar10;
          bVar4 = bVar2;
          if ((!bVar2) && (lVar7 != 0)) {
            FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          lVar11 = lVar7;
          if ((bVar2) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar2 = bVar4;
        FUN_00d21140();
        lVar9 = lVar9 + 1;
        lVar7 = *(int64_t *)(arg1 + 0x1e8);
        lVar10 = lVar11;
      } while (lVar9 < *(int *)(lVar7 + 0xc));
    }
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
    if ((bVar2) && (lVar11 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar3 && local_50 != 0) {
      FUN_00d50b20();
    }
    return this_ptr;
  }
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

