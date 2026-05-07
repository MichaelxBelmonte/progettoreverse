// Function: FUN_0097c422
// Address: 0097c422
// Size: 690 bytes
// Class: Unknown


void FUN_0097c422(ulong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulong uVar10;
  string *this;
  string *psVar11;
  ulonglong uVar12;
  longlong *unaff_RDI;
  longlong *plVar13;
  longlong local_1b0;
  
  lVar2 = *(longlong *)PTR____stack_chk_guard_024a9898;
  puVar4 = operator_new(param_1);
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  *puVar4 = &DAT_0252c2f0;
  uVar10 = 1;
  FUN_00a14fd8(1,0x400,0);
  plVar5 = operator_new(uVar10);
  plVar13 = plVar5 + 1;
  plVar5[2] = 0;
  plVar5[1] = 0;
  *plVar5 = (longlong)&DAT_0251fb50;
  plVar5[3] = (longlong)puVar4;
  pvVar6 = operator_new(uVar10);
  LOCK();
  plVar5[1] = plVar5[1] + 1;
  UNLOCK();
  FUN_00977530();
  plVar7 = operator_new(uVar10);
  plVar7[2] = 0;
  plVar7[1] = 0;
  *plVar7 = (longlong)&DAT_0251fba0;
  plVar7[3] = (longlong)pvVar6;
  if (plVar5 != (longlong *)0x0) {
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
  (**(code **)(*unaff_RDI + 0x18))();
  FUN_0098ede4();
  FUN_0098ef68();
  uVar3 = FUN_0098f810();
  uVar12 = (ulonglong)uVar3;
  psVar11 = *(string **)(param_2 + 0x118);
  uVar9 = *(longlong *)(param_2 + 0x120) - (longlong)psVar11;
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
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


