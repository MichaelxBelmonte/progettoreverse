// Function: FUN_0097c422
// Address: 0097c422
// Size: 690 bytes
// Class: Unknown

void FUN_0097c422(ulong param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  void*puVar4;
  int64_t *plVar5;
  void *pvVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  ulong uVar10;
  string *this;
  string *psVar11;
  uint64_t uVar12;
  int64_t *this_ptr;
  int64_t *plVar13;
  int64_t local_1b0;
  
  lVar2 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  puVar4 = operator_new(param_1);
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  *puVar4 = &g_0252c2f0;
  uVar10 = 1;
  FUN_00a14fd8(1,0x400,0);
  plVar5 = operator_new(uVar10);
  plVar13 = plVar5 + 1;
  plVar5[2] = 0;
  plVar5[1] = 0;
  *plVar5 = (int64_t)&g_0251fb50;
  plVar5[3] = (int64_t)puVar4;
  pvVar6 = operator_new(uVar10);
  LOCK();
  plVar5[1] = plVar5[1] + 1;
  UNLOCK();
  FUN_00977530();
  plVar7 = operator_new(uVar10);
  plVar7[2] = 0;
  plVar7[1] = 0;
  *plVar7 = (int64_t)&g_0251fba0;
  plVar7[3] = (int64_t)pvVar6;
  if (plVar5 != (int64_t *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    lVar1 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = plVar7 + 1;
  (**(code **)(*this_ptr + 0x18))();
  FUN_0098ede4();
  FUN_0098ef68();
  uVar3 = FUN_0098f810();
  uVar12 = (uint64_t)uVar3;
  psVar11 = *(string **)(param_2 + 0x118);
  uVar9 = *(int64_t *)(param_2 + 0x120) - (int64_t)psVar11;
  if (uVar9 < uVar12) {
    FUN_0088d550();
    psVar11 = *(string **)(param_2 + 0x118);
  }
  else if (uVar12 < uVar9) {
    *(string **)(param_2 + 0x120) = psVar11 + uVar12;
  }
  this = (string *)0x0;
  (**(code **)(local_1b0 + 0x48))();
  FUN_008dfe28();
  std::string::operator=(this,psVar11);
  FUN_008d6858();
  std::string::operator=(this,psVar11);
  std::string::operator=(this,psVar11);
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
  lVar1 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar1 == 0) {
    (**(code **)(*plVar5 + 0x10))();
    std::__shared_weak_count::__release_weak();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == lVar2) {
    return;
  }
                      ___stack_chk_fail();
}

