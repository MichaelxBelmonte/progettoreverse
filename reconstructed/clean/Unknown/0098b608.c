// Function: FUN_0098b608
// Address: 0098b608
// Size: 772 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "BasicConstraints extension is missing"
//   "virtual void pace::Asn1ParserCert::setBasicConstraints(bool)"
//   "BasicConstraints extension bit string is missing"

void FUN_0098b608(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  ulong uVar6;
  char unaff_SIL;
  int64_t *this_ptr;
  uint32_t uVar7;
  int64_t *local_58;
  int64_t *plStack_50;
  
  (**(code **)(*this_ptr + 0x38))(0,&g_023c8b82,param_3,param_4,0);
  if (local_58 == (int64_t *)0x0) {
    FUN_00925fd0();
    uVar3 = FUN_00926010();
    uVar7 = FUN_00928ab0("virtual void pace::Asn1ParserCert::setBasicConstraints(bool)",0xcbf);
    FUN_009c720b(uVar7,uVar3);
  }
  (**(code **)(*local_58 + 0x40))(0x30,1);
  if (plStack_50 != (int64_t *)0x0) {
    LOCK();
    plVar5 = plStack_50 + 1;
    lVar2 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_50 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_58 == (int64_t *)0x0) {
    FUN_00925fd0();
    uVar3 = FUN_00926010();
    uVar7 = FUN_00928ab0("virtual void pace::Asn1ParserCert::setBasicConstraints(bool)",0xcc3);
    FUN_009c720b(uVar7,uVar3);
  }
  uVar6 = 1;
  (**(code **)(*local_58 + 0x40))(1,1);
  plVar5 = (int64_t *)0x0;
  if (unaff_SIL != '\0') {
    plVar4 = operator_new(uVar6);
    FUN_00981a28();
    plVar5 = operator_new(uVar6);
    plVar5[2] = 0;
    plVar5[1] = 0;
    *plVar5 = (int64_t)&g_02520fe8;
    plVar5[3] = (int64_t)plVar4;
    *(void*)(plVar4 + 1) = 1;
    LOCK();
    plVar5[1] = plVar5[1] + 1;
    UNLOCK();
    (**(code **)(*local_58 + 0x10))();
    if (plVar5 != (int64_t *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    (**(code **)(*plVar4 + 0x30))();
    FUN_00958ec0();
    MACH_HEADER.magic._0_1_ = -unaff_SIL;
    (**(code **)(*plVar4 + 0x48))();
  }
  if (plVar5 != (int64_t *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    lVar2 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_50 != (int64_t *)0x0) {
    LOCK();
    plVar5 = plStack_50 + 1;
    lVar2 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_50 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

