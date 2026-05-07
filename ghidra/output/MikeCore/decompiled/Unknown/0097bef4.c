// Function: FUN_0097bef4
// Address: 0097bef4
// Size: 569 bytes
// Class: Unknown


void FUN_0097bef4(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulong uVar9;
  longlong local_1b0;
  
  lVar2 = *(longlong *)PTR____stack_chk_guard_024a9898;
  puVar3 = operator_new((ulong)param_1);
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *puVar3 = &DAT_0252c2f0;
  uVar9 = 1;
  FUN_00a14fd8(1,0x400,0);
  plVar4 = operator_new(uVar9);
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  plVar4[1] = 0;
  *plVar4 = (longlong)&DAT_0251fb50;
  plVar4[3] = (longlong)puVar3;
  pvVar6 = operator_new(uVar9);
  LOCK();
  plVar4[1] = plVar4[1] + 1;
  UNLOCK();
  FUN_00977530();
  plVar7 = operator_new(uVar9);
  plVar7[2] = 0;
  plVar7[1] = 0;
  *plVar7 = (longlong)&DAT_0251fba0;
  plVar7[3] = (longlong)pvVar6;
  if (plVar4 != (longlong *)0x0) {
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
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


