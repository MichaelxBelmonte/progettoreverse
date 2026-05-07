// Function: FUN_009b93be
// Address: 009b93be
// Size: 785 bytes
// Class: LsObjectCache

uint64_t FUN_009b93be(ulong param_1,uint64_t param_2,ulong param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  void*puVar8;
  ulong uVar9;
  uint64_t this_ptr;
  int64_t *plVar10;
  int64_t *plVar11;
  
  uVar9 = param_1;
  pvVar3 = operator_new(param_1);
  FUN_00adae60();
  plVar4 = operator_new(uVar9);
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  plVar4[1] = 0;
  *plVar4 = (int64_t)&g_0251fbf0;
  plVar4[3] = (int64_t)pvVar3;
  pvVar3 = operator_new(uVar9);
  LOCK();
  plVar4[1] = plVar4[1] + 1;
  UNLOCK();
  FUN_0094e0f0();
  plVar6 = operator_new(uVar9);
  plVar6[2] = 0;
  plVar6[1] = 0;
  *plVar6 = (int64_t)&g_0251e5e8;
  plVar6[3] = (int64_t)pvVar3;
  plVar7 = plVar6;
  if (plVar4 != (int64_t *)0x0) {
    LOCK();
    plVar10 = plVar4 + 1;
    lVar2 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar10 = plVar6 + 1;
  uVar9 = (ulong)plVar7;
  pvVar3 = operator_new(uVar9);
  LOCK();
  plVar6[1] = plVar6[1] + 1;
  UNLOCK();
  FUN_00977530();
  plVar7 = operator_new(uVar9);
  plVar7[2] = 0;
  plVar7[1] = 0;
  *plVar7 = (int64_t)&g_0251fba0;
  plVar7[3] = (int64_t)pvVar3;
  if (plVar6 != (int64_t *)0x0) {
    LOCK();
    plVar11 = plVar6 + 1;
    lVar2 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar11 = plVar7 + 1;
  LOCK();
  plVar6[1] = plVar6[1] + 1;
  UNLOCK();
  FUN_009f2044(param_3,param_1);
  if (plVar6 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar8 = operator_new(param_3);
  LOCK();
  plVar7[1] = plVar7[1] + 1;
  UNLOCK();
  *puVar8 = &g_0251dc10;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  LOCK();
  plVar7[1] = plVar7[1] + 1;
  UNLOCK();
  FUN_009ba1be();
  if (plVar7 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_009ba30c();
  LOCK();
  lVar2 = *plVar11;
  *plVar11 = *plVar11 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*plVar7 + 0x10))();
    std::__shared_weak_count::__release_weak();
  }
  LOCK();
  lVar2 = *plVar11;
  *plVar11 = *plVar11 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*plVar7 + 0x10))();
    std::__shared_weak_count::__release_weak();
  }
  LOCK();
  lVar2 = *plVar10;
  *plVar10 = *plVar10 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))();
    std::__shared_weak_count::__release_weak();
  }
  LOCK();
  lVar2 = *plVar5;
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))();
    std::__shared_weak_count::__release_weak();
  }
  return this_ptr;
}

