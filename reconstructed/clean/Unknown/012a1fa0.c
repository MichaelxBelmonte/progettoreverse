// Function: FUN_012a1fa0
// Address: 012a1fa0
// Size: 687 bytes
// Class: Unknown

void FUN_012a1fa0(void)

{
  int64_t lVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  void*puVar6;
  int iVar7;
  int64_t *this_ptr;
  int64_t lVar8;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &g_02572358;
  *puVar2 = &g_02572358;
  (*g_02572370)();
  lVar1 = *this_ptr;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar8 = 0;
      do {
        lVar5 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar8 * 8);
        pvVar3 = _pthread_getspecific((void*)puVar6);
        if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
          lVar4 = *(int64_t *)(lVar5 + 0x48);
          if (lVar4 == 0) goto LAB_012a2092;
LAB_012a2120:
          FUN_00d50b00();
          pvVar3 = _pthread_getspecific((void*)puVar6);
          if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
            lVar5 = *(int64_t *)(lVar4 + 0x100);
          }
          else {
            lVar5 = *(int64_t *)
                     (*(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                     0x100);
          }
          if (lVar5 != 0) {
            FUN_00d50b00();
            FUN_00d235a0();
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        else {
          lVar4 = *(int64_t *)
                   (*(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) +
                   0x48);
          if (lVar4 != 0) goto LAB_012a2120;
LAB_012a2092:
          pvVar3 = _pthread_getspecific((void*)puVar6);
          if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
          }
          if (*(int64_t *)(lVar5 + 0x100) != 0) {
            FUN_00d50b00();
            FUN_00d235a0();
            FUN_00d50b20();
          }
        }
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
    if (puVar2 == (void*)0x0) {
      return;
    }
  }
  for (iVar7 = 0; iVar7 < *(int *)((int64_t)puVar2 + 0xc); iVar7 = iVar7 + 1) {
    pvVar3 = _pthread_getspecific((void*)puVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e4520();
  }
  FUN_000be170();
  FUN_00d50b20();
  return;
}

