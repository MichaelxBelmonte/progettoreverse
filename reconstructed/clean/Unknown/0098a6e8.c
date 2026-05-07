// Function: FUN_0098a6e8
// Address: 0098a6e8
// Size: 1458 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "Only ECC is supported for signature algorithms"
//   "virtual void pace::Asn1ParserCert::SetSignatureAlgorithm(uint32_t, uint32_t)"
//   "signedSignatureAlgorithm is missing"
//   "unsignedSignatureAlgorithm is missing"

void FUN_0098a6e8(ulong param_1,int param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  ulong uVar5;
  uint32_t unaff_ESI;
  int64_t *this_ptr;
  int64_t *plVar6;
  int64_t *local_90;
  int64_t *local_88;
  
  if (param_2 != 0) {
    FUN_00925fd0();
    FUN_00926010();
    param_1 = 0x1fc8feb;
    FUN_00928ab0("virtual void pace::Asn1ParserCert::SetSignatureAlgorithm(uint32_t, uint32_t)",
                 0x7ad);
    FUN_009c720b();
  }
  (**(code **)(*this_ptr + 0x20))();
  (**(code **)(*this_ptr + 0x20))();
  if (local_90 == (int64_t *)0x0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("virtual void pace::Asn1ParserCert::SetSignatureAlgorithm(uint32_t, uint32_t)",
                 0x7b4);
    FUN_009c720b();
    FUN_00925fd0();
    FUN_00926010();
    param_1 = 0x1fc8feb;
    FUN_00928ab0("virtual void pace::Asn1ParserCert::SetSignatureAlgorithm(uint32_t, uint32_t)",
                 0x7b5);
    FUN_009c720b();
  }
  (**(code **)(*local_90 + 0x20))();
  (**(code **)(*local_90 + 0x20))();
  plVar2 = operator_new(param_1);
  FUN_00981a28();
  plVar3 = operator_new(param_1);
  plVar4 = (int64_t *)0x0;
  plVar3[2] = 0;
  plVar3[1] = 0;
  *plVar3 = (int64_t)&g_02520fe8;
  plVar3[3] = (int64_t)plVar2;
  *(void*)(plVar2 + 1) = 6;
  plVar6 = (int64_t *)0x0;
  uVar5 = 0x98ae30;
  switch(unaff_ESI) {
  case 0:
    (**(code **)(*plVar2 + 0x58))(&switchD_0098a8b3::switchdataD_0098ae30,g_023c8c31);
    plVar4 = operator_new(uVar5);
    FUN_00981a28();
    plVar6 = operator_new(uVar5);
    goto LAB_0098aa73;
  case 1:
    plVar6 = (int64_t *)0x0;
    (**(code **)(*plVar2 + 0x58))(&switchD_0098a8b3::switchdataD_0098ae30,g_023c8c38);
    plVar4 = (int64_t *)0x0;
    break;
  case 2:
    plVar6 = (int64_t *)0x0;
    (**(code **)(*plVar2 + 0x58))(&switchD_0098a8b3::switchdataD_0098ae30,g_023c8c42);
    plVar4 = (int64_t *)0x0;
    break;
  case 3:
    (**(code **)(*plVar2 + 0x58))(&switchD_0098a8b3::switchdataD_0098ae30,g_023c8c4a);
    plVar4 = operator_new(uVar5);
    FUN_00981a28();
    plVar6 = operator_new(uVar5);
    goto LAB_0098aa73;
  case 4:
    plVar6 = (int64_t *)0x0;
    (**(code **)(*plVar2 + 0x58))(&switchD_0098a8b3::switchdataD_0098ae30,g_023c8c51);
    plVar4 = (int64_t *)0x0;
    break;
  case 5:
    plVar6 = (int64_t *)0x0;
    (**(code **)(*plVar2 + 0x58))(&switchD_0098a8b3::switchdataD_0098ae30,g_023c8c5a);
    plVar4 = (int64_t *)0x0;
    break;
  case 6:
    plVar6 = (int64_t *)0x0;
    (**(code **)(*plVar2 + 0x58))(&switchD_0098a8b3::switchdataD_0098ae30,g_023c8c63);
    plVar4 = (int64_t *)0x0;
    break;
  case 7:
    plVar6 = (int64_t *)0x0;
    (**(code **)(*plVar2 + 0x58))(&switchD_0098a8b3::switchdataD_0098ae30,g_023c8c6c);
    plVar4 = (int64_t *)0x0;
    break;
  case 8:
    (**(code **)(*plVar2 + 0x58))(&switchD_0098a8b3::switchdataD_0098ae30,g_023c8c75);
    plVar4 = operator_new(uVar5);
    FUN_00981a28();
    plVar6 = operator_new(uVar5);
    goto LAB_0098aa73;
  case 9:
    (**(code **)(*plVar2 + 0x58))(&switchD_0098a8b3::switchdataD_0098ae30,g_023c8c7f);
    plVar4 = operator_new(uVar5);
    FUN_00981a28();
    plVar6 = operator_new(uVar5);
LAB_0098aa73:
    plVar6[2] = 0;
    plVar6[1] = 0;
    *plVar6 = (int64_t)&g_02520fe8;
    plVar6[3] = (int64_t)plVar4;
  }
  LOCK();
  plVar3[1] = plVar3[1] + 1;
  UNLOCK();
  (**(code **)(*local_90 + 0x10))();
  if (plVar3 != (int64_t *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  LOCK();
  plVar3[1] = plVar3[1] + 1;
  UNLOCK();
  (**(code **)(*local_90 + 0x10))();
  if (plVar3 != (int64_t *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar4 != (int64_t *)0x0) {
    *(void*)(plVar4 + 1) = 6;
    (**(code **)(*plVar4 + 0x58))();
    if (plVar6 != (int64_t *)0x0) {
      LOCK();
      plVar6[1] = plVar6[1] + 1;
      UNLOCK();
    }
    (**(code **)(*local_90 + 0x10))();
    if (plVar6 != (int64_t *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar1 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plVar6 != (int64_t *)0x0) {
      LOCK();
      plVar6[1] = plVar6[1] + 1;
      UNLOCK();
    }
    (**(code **)(*local_90 + 0x10))();
    if (plVar6 != (int64_t *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar1 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  plVar2 = plVar3 + 1;
  if (plVar6 != (int64_t *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar1 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (lVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
    std::__shared_weak_count::__release_weak();
  }
  if (local_88 != (int64_t *)0x0) {
    LOCK();
    plVar2 = local_88 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_88 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_88 != (int64_t *)0x0) {
    LOCK();
    plVar2 = local_88 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_88 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

