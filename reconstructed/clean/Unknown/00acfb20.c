// Function: FUN_00acfb20
// Address: 00acfb20
// Size: 518 bytes
// Class: Unknown

void FUN_00acfb20(void)

{
  int *piVar1;
  uint uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  code *pcVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t this_ptr;
  bool bVar11;
  
  plVar3 = *(int64_t **)(this_ptr + 0x10);
  if (plVar3 == (int64_t *)0x0) {
LAB_00acfd31:
    FUN_00acfd90();
                        pcVar6 = invalidInstructionException();
    (*pcVar6)();
  }
  uVar7 = *(uint *)(plVar3 + 1);
  do {
    if (uVar7 == 0) goto LAB_00acfd31;
    plVar10 = (int64_t *)(uint64_t)(uVar7 + 1);
    LOCK();
    uVar2 = *(uint *)(plVar3 + 1);
    bVar11 = uVar7 == uVar2;
    if (bVar11) {
      *(uint *)(plVar3 + 1) = uVar7 + 1;
      uVar2 = uVar7;
    }
    uVar7 = uVar2;
    UNLOCK();
  } while (!bVar11);
  lVar4 = *(int64_t *)(this_ptr + 8);
  if (lVar4 != 0) {
    lVar8 = *(int64_t *)(lVar4 + 0x100);
    bVar11 = lVar8 == 0;
LAB_00acfb72:
    plVar9 = *(int64_t **)(lVar4 + 0xe8);
    if (bVar11) {
      if (plVar9 == (int64_t *)0x0) goto LAB_00acfcc9;
LAB_00acfbd4:
      do {
        *(int64_t *)(lVar4 + 0xe8) = plVar9[1];
        if ((int64_t *)*plVar9 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar9 + 0x10))();
          if ((int64_t *)*plVar9 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar9 + 8))();
          }
        }
        operator_delete(plVar10);
        plVar9 = *(int64_t **)(lVar4 + 0xe8);
      } while (plVar9 != (int64_t *)0x0);
      lVar5 = *(int64_t *)(lVar4 + 0x100);
    }
    else {
      lVar5 = lVar8;
      if (plVar9 != (int64_t *)0x0) goto LAB_00acfbd4;
    }
    bVar11 = true;
    lVar8 = 0;
    if (lVar5 != 0) {
      do {
        bVar11 = true;
        lVar8 = *(int64_t *)(lVar4 + 0xf0);
        if ((*(int64_t *)(lVar8 + 0x30) != 0) && (*(int64_t *)(lVar8 + 0x38) != 0)) {
          (**(code **)(lVar8 + 0x28))();
        }
        plVar10 = *(int64_t **)(lVar8 + 8);
        if (*(int64_t **)(lVar8 + 8) == (int64_t *)0x0) {
          plVar9 = *(int64_t **)(lVar8 + 0x10);
          plVar10 = (int64_t *)0x0;
          if (*plVar9 != lVar8) {
            plVar10 = (int64_t *)(lVar8 + 0x10);
            do {
              lVar5 = *plVar10;
              plVar9 = *(int64_t **)(lVar5 + 0x10);
              plVar10 = (int64_t *)(lVar5 + 0x10);
            } while (*plVar9 != lVar5);
          }
        }
        else {
          do {
            plVar9 = plVar10;
            plVar10 = (int64_t *)*plVar9;
          } while ((int64_t *)*plVar9 != (int64_t *)0x0);
          plVar10 = (int64_t *)0x0;
        }
        if (*(int64_t *)(lVar4 + 0xf0) == lVar8) {
          *(int64_t **)(lVar4 + 0xf0) = plVar9;
        }
        *(int64_t *)(lVar4 + 0x100) = *(int64_t *)(lVar4 + 0x100) + -1;
        FUN_0098ca80();
        operator_delete(plVar10);
      } while (*(int64_t *)(lVar4 + 0x100) != 0);
      lVar8 = 0;
    }
    goto LAB_00acfb72;
  }
LAB_00acfcf8:
  LOCK();
  plVar10 = plVar3 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)(*plVar3 + 0x10))();
    LOCK();
    piVar1 = (int *)((int64_t)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                                              (**(code **)(*plVar3 + 0x18))();
      return;
    }
  }
  return;
LAB_00acfcc9:
  plVar10 = *(int64_t **)(lVar4 + 0x20);
  *(void*)(lVar4 + 0x18) = 0;
  *(void*)(lVar4 + 0x20) = 0;
  if (plVar10 != (int64_t *)0x0) {
    LOCK();
    plVar9 = plVar10 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))();
      LOCK();
      piVar1 = (int *)((int64_t)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x18))();
      }
    }
  }
  goto LAB_00acfcf8;
}

