// Function: FUN_0097bef4
// Address: 0097bef4
// Size: 569 bytes
// Class: Unknown

void FUN_0097bef4(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  void *pvVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  ulong uVar9;
  int64_t local_1b0;
  
  lVar2 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  puVar3 = operator_new((ulong)param_1);
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *puVar3 = &g_0252c2f0;
  uVar9 = 1;
  FUN_00a14fd8(1,0x400,0);
  plVar4 = operator_new(uVar9);
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  plVar4[1] = 0;
  *plVar4 = (int64_t)&g_0251fb50;
  plVar4[3] = (int64_t)puVar3;
  pvVar6 = operator_new(uVar9);
  LOCK();
  plVar4[1] = plVar4[1] + 1;
  UNLOCK();
  FUN_00977530();
  plVar7 = operator_new(uVar9);
  plVar7[2] = 0;
  plVar7[1] = 0;
  *plVar7 = (int64_t)&g_0251fba0;
  plVar7[3] = (int64_t)pvVar6;
  if (plVar4 != (int64_t *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    lVar1 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = plVar7 + 1;
  FUN_008dcf76();
  FUN_0098ede4();
  FUN_0098ef68();
  FUN_009afe36();
  (**(code **)(local_1b0 + 0x48))(param_1,0);
  FUN_0098edfa();
  LOCK();
  lVar1 = *plVar8;
  *plVar8 = *plVar8 + -1;
  UNLOCK();
  if (lVar1 == 0) {
    (**(code **)(*plVar7 + 0x10))();
    std::__shared_weak_count::__release_weak();
  }
  LOCK();
  lVar1 = *plVar5;
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  if (lVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
    std::__shared_weak_count::__release_weak();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == lVar2) {
    return;
  }
                      ___stack_chk_fail();
}

