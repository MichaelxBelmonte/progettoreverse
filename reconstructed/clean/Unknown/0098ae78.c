// Function: FUN_0098ae78
// Address: 0098ae78
// Size: 563 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "Subject not provided by caller"
//   "virtual void pace::Asn1ParserCert::SetSubject(pace::SharedAsn1_T)"
//   "Subject is missing"

void FUN_0098ae78(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  char cVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar11;
  int64_t *local_48;
  int64_t *plStack_40;
  
  plVar5 = plStack_40;
  plVar3 = local_48;
  if (((int64_t *)*arg1 == (int64_t *)0x0) ||
     (cVar7 = (**(code **)(*(int64_t *)*arg1 + 0x18))(), uVar11 = extraout_XMM0_Da,
     cVar7 == '\0')) {
    FUN_00925fd0();
    uVar8 = FUN_00926010();
    uVar11 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetSubject(pace::SharedAsn1_T)",0x830)
    ;
    uVar11 = FUN_009c720b(uVar11,uVar8);
  }
  (**(code **)(*this_ptr + 0x20))(uVar11,&g_023cd02f);
  if (local_48 == (int64_t *)0x0) {
    FUN_00925fd0();
    uVar8 = FUN_00926010();
    uVar11 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetSubject(pace::SharedAsn1_T)",0x836)
    ;
    FUN_009c720b(uVar11,uVar8);
  }
  (**(code **)(*local_48 + 0x20))();
  iVar10 = 1;
  plVar9 = (int64_t *)0x0;
  while( true ) {
    plVar6 = plStack_40;
    plVar2 = local_48;
    (**(code **)(*(int64_t *)*arg1 + 0x40))(0,iVar10);
    local_48 = (int64_t *)0x0;
    plStack_40 = (int64_t *)0x0;
    if (plVar9 != (int64_t *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plVar9 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plVar2 == (int64_t *)0x0) break;
    if (plVar6 != (int64_t *)0x0) {
      LOCK();
      plVar6[1] = plVar6[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar3 + 0x10))();
    iVar10 = iVar10 + 1;
    plVar9 = plVar6;
    if (plVar6 != (int64_t *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar4 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (plVar5 != (int64_t *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar4 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar6 != (int64_t *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    lVar4 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

