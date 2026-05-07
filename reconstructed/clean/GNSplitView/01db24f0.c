// Function: FUN_01db24f0
// Address: 01db24f0
// Size: 739 bytes
// Class: GNSplitView

void* FUN_01db24f0(float param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  bool bVar5;
  bool bVar6;
  void*puVar7;
  int64_t lVar8;
  int64_t arg1;
  void*this_ptr;
  int iVar9;
  float fVar10;
  float fVar11;
  int64_t local_88;
  char local_80;
  
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*g_02572370)();
  FUN_01db2340();
  if (local_80 == '\0') {
    if (local_88 == 0) goto LAB_01db269f;
    FUN_00d50b00();
LAB_01db256e:
    fVar11 = 0.0;
    lVar1 = (uint64_t)(0.0 < param_1) * 8 + 0x10;
    if (param_1 <= 0.0) {
      if (0 < *(int *)(local_88 + 0xc)) {
        lVar8 = 0;
        do {
          lVar3 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + lVar8 * 8);
          plVar4 = *(int64_t **)(lVar3 + 0x20);
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar4 + 0x4d8))();
          FUN_00d50b20();
          uVar2 = *(void*)(lVar3 + lVar1);
          if (*(char *)(arg1 + 0x138) == '\0') {
            fVar10 = (float)((uint64_t)uVar2 >> 0x20) - fVar11;
          }
          else {
            fVar10 = (float)uVar2 - param_1;
          }
          fVar11 = 0.0;
          param_1 = 0.0;
          if (fVar10 < 0.0) {
            fVar11 = 0.0;
            param_1 = 0.0;
            FUN_00d21140();
          }
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < *(int *)(local_88 + 0xc));
      }
    }
    else if (0 < *(int *)(local_88 + 0xc)) {
      lVar8 = 0;
      do {
        lVar3 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + lVar8 * 8);
        plVar4 = *(int64_t **)(lVar3 + 0x20);
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar4 + 0x4d8))();
        FUN_00d50b20();
        uVar2 = *(void*)(lVar3 + lVar1);
        if (*(char *)(arg1 + 0x138) == '\0') {
          fVar10 = (float)((uint64_t)uVar2 >> 0x20) - fVar11;
          param_1 = fVar11;
        }
        else {
          fVar10 = (float)uVar2 - param_1;
        }
        if (g_0239424c < fVar10) {
          FUN_00d21140();
        }
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < *(int *)(local_88 + 0xc));
    }
    FUN_01db88f0();
    bVar6 = false;
    bVar5 = false;
    iVar9 = *(int *)((int64_t)puVar7 + 0xc);
    if (iVar9 == 0) goto LAB_01db26ae;
LAB_01db27d1:
    *this_ptr = puVar7;
    *(void*)(this_ptr + 1) = 1;
    if (bVar6) goto LAB_01db27e5;
  }
  else {
    if (local_88 != 0) goto LAB_01db256e;
LAB_01db269f:
    bVar6 = true;
    bVar5 = true;
    iVar9 = *(int *)((int64_t)puVar7 + 0xc);
    if (iVar9 != 0) goto LAB_01db27d1;
LAB_01db26ae:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    if (bVar5) goto LAB_01db27e5;
  }
  FUN_00d50b20();
LAB_01db27e5:
  if (iVar9 == 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

