// Function: FUN_00ab94d4
// Address: 00ab94d4
// Size: 605 bytes
// Class: OsSignatureMac

void FUN_00ab94d4(ulong param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint uVar4;
  void *pvVar5;
  void*puVar6;
  uint64_t uVar7;
  string *this;
  string *psVar8;
  uint64_t uVar9;
  int64_t *this_ptr;
  int64_t lVar10;
  byte *local_res8;
  int64_t local_res10;
  int64_t local_res18;
  uint32_t local_res20;
  uint32_t in_stack_00000028;
  int64_t local_1b0;
  
  lVar2 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  this_ptr[1] = 0;
  *this_ptr = 0;
  pvVar5 = operator_new(param_1);
  FUN_0097c240();
  puVar6 = operator_new(param_1);
  puVar6[2] = 0;
  puVar6[1] = 0;
  *puVar6 = &g_0252b020;
  puVar6[3] = pvVar5;
  *this_ptr = (int64_t)pvVar5;
  plVar3 = (int64_t *)this_ptr[1];
  this_ptr[1] = (int64_t)puVar6;
  if (plVar3 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plVar3 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar10 = *this_ptr;
  *(void*)(lVar10 + 0x130) = 0x101;
  *(void*)(lVar10 + 8) = local_res20;
  *(void*)(lVar10 + 0xc) = in_stack_00000028;
  FUN_0098ede4();
  FUN_0098ef68();
  lVar10 = *this_ptr;
  uVar4 = FUN_0098f810();
  uVar9 = (uint64_t)uVar4;
  psVar8 = *(string **)(lVar10 + 0x118);
  uVar7 = *(int64_t *)(lVar10 + 0x120) - (int64_t)psVar8;
  if (uVar7 < uVar9) {
    FUN_0088d550();
    psVar8 = *(string **)(lVar10 + 0x118);
  }
  else if (uVar9 < uVar7) {
    *(string **)(lVar10 + 0x120) = psVar8 + uVar9;
  }
  this = (string *)0x0;
  (**(code **)(local_1b0 + 0x48))();
  lVar10 = *this_ptr;
  *(void*)(lVar10 + 0x139) = 1;
  if (local_res10 == 0) {
    *(void*)(lVar10 + 0x132) = 0;
  }
  else {
    *(void*)(lVar10 + 0x132) = 1;
    std::string::assign((char *)this);
    lVar10 = *this_ptr;
  }
  if (local_res18 == 0) {
    *(void*)(lVar10 + 0x133) = 0;
  }
  else {
    *(void*)(lVar10 + 0x133) = 1;
    std::string::assign((char *)this);
    lVar10 = *this_ptr;
  }
  *(void*)(lVar10 + 0x134) = 1;
  std::string::operator=(this,psVar8);
  lVar10 = *this_ptr;
  if (local_res8 != (byte *)0x0) {
    if ((*local_res8 & 1) == 0) {
      uVar7 = (uint64_t)(*local_res8 >> 1);
    }
    else {
      uVar7 = *(uint64_t *)(local_res8 + 8);
    }
    if (uVar7 != 0) {
      *(void*)(lVar10 + 0x136) = 1;
      std::string::operator=(this,psVar8);
      lVar10 = *this_ptr;
    }
  }
  *(void*)(lVar10 + 0x110) = 1;
  FUN_008d6858();
  std::string::operator=(this,psVar8);
  *(void*)(*this_ptr + 0x111) = 1;
  std::string::operator=(this,psVar8);
  FUN_0098edfa();
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == lVar2) {
    return;
  }
                      ___stack_chk_fail();
}

