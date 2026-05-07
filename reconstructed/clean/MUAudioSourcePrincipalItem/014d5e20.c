// Function: FUN_014d5e20
// Address: 014d5e20
// Size: 670 bytes
// Class: MUAudioSourcePrincipalItem

void* FUN_014d5e20(float param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t lVar5;
  void *pvVar6;
  int64_t lVar7;
  int in_ECX;
  void*puVar8;
  int64_t lVar9;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar10;
  int64_t *plVar11;
  float fVar12;
  float fVar13;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar8 = &g_02572358;
  *puVar3 = &g_02572358;
  (*g_02572370)();
  fVar12 = (float)(**(code **)(*arg1 + 0x3e0))();
  lVar4 = (**(code **)(*arg1 + 0x380))();
  lVar5 = FUN_014bb590();
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar9 = 0;
      do {
        plVar11 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar9 * 8);
        if ((plVar11 != (int64_t *)0x0) && (plVar11 != arg1)) {
          pvVar6 = _pthread_getspecific((void*)puVar8);
          plVar10 = plVar11;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            plVar10 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
          cVar2 = (**(code **)(*plVar10 + 1000))();
          if (cVar2 != '\0') {
            pvVar6 = _pthread_getspecific((void*)puVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_014bc070();
            if (cVar2 == '\0') {
              pvVar6 = _pthread_getspecific((void*)puVar8);
              plVar10 = plVar11;
              if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                plVar10 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              }
              fVar13 = (float)(**(code **)(*plVar10 + 0x3e0))();
              if ((float)((uint)(fVar13 - fVar12) & g_02390140) < param_1) {
                pvVar6 = _pthread_getspecific((void*)puVar8);
                if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  plVar11 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                }
                lVar7 = (**(code **)(*plVar11 + 0x380))();
                if (lVar7 < lVar5 + in_ECX) {
                  pvVar6 = _pthread_getspecific((void*)puVar8);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  lVar7 = FUN_014bb590();
                  if (lVar4 - in_ECX < lVar7) {
                    FUN_00d21140();
                  }
                }
              }
            }
          }
        }
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < *(int *)(lVar1 + 0xc));
    }
    FUN_0131c810();
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

