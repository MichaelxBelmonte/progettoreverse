// Function: FUN_00988fe2
// Address: 00988fe2
// Size: 1136 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "Extensions are missing"
//   "virtual void pace::Asn1ParserCert::SetOrderNumberAndBOMID(bool, const std::__1::string &)"


void FUN_00988fe2(void)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulong uVar6;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  
  (**(code **)(*unaff_RDI + 0x48))(unaff_ESI,&DAT_023c8b70);
  local_50 = local_70;
  if (local_78 == (longlong *)0x0) {
    (**(code **)(*unaff_RDI + 0x20))();
    local_60 = local_70;
    local_68 = local_78;
    FUN_00925fd0();
    FUN_00926010();
    uVar6 = 0x1fc8c57;
    FUN_00928ab0("virtual void pace::Asn1ParserCert::SetOrderNumberAndBOMID(bool, const std::__1::string &)"
                 ,0x685);
    FUN_009c720b();
    plVar3 = operator_new(uVar6);
    FUN_0098106a();
    local_48 = operator_new(uVar6);
    local_48[2] = 0;
    local_48[1] = 0;
    *local_48 = (longlong)&DAT_02520f98;
    local_48[3] = (longlong)plVar3;
    *(undefined1 *)(plVar3 + 1) = 0x31;
    plVar5 = plVar3;
    plVar4 = operator_new((ulong)plVar3);
    uVar6 = (ulong)plVar5;
    FUN_0098106a();
    local_40 = operator_new(uVar6);
    local_40[2] = 0;
    local_40[1] = 0;
    *local_40 = (longlong)&DAT_02520f98;
    local_40[3] = (longlong)plVar4;
    *(undefined1 *)(plVar4 + 1) = 0x30;
    LOCK();
    local_40[1] = local_40[1] + 1;
    UNLOCK();
    (**(code **)(*plVar3 + 0x10))();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      lVar1 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*local_40 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar5 = operator_new(uVar6);
    FUN_00981a28();
    plVar3 = operator_new(uVar6);
    plVar3[2] = 0;
    plVar3[1] = 0;
    *plVar3 = (longlong)&DAT_02520fe8;
    plVar3[3] = (longlong)plVar5;
    *(undefined1 *)(plVar5 + 1) = 6;
    (**(code **)(*plVar5 + 0x58))();
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
    (**(code **)(*plVar4 + 0x10))();
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      lVar1 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    local_78 = operator_new(uVar6);
    FUN_00981a28();
    local_50 = operator_new(uVar6);
    local_50[2] = 0;
    local_50[1] = 0;
    *local_50 = (longlong)&DAT_02520fe8;
    local_50[3] = (longlong)local_78;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_70 + 1;
      lVar1 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*local_70 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    *(undefined1 *)(local_78 + 1) = 0x13;
    LOCK();
    local_50[1] = local_50[1] + 1;
    UNLOCK();
    (**(code **)(*plVar4 + 0x10))();
    bVar2 = true;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_50 + 1;
      lVar1 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*local_50 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  else {
    local_68 = (longlong *)0x0;
    local_60 = (longlong *)0x0;
    local_48 = (longlong *)0x0;
    local_40 = (longlong *)0x0;
    plVar3 = (longlong *)0x0;
    bVar2 = false;
  }
  (**(code **)(*local_78 + 0x50))();
  if (bVar2) {
    if (local_48 != (longlong *)0x0) {
      LOCK();
      local_48[1] = local_48[1] + 1;
      UNLOCK();
    }
    (**(code **)(*local_68 + 0x10))();
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_48 + 1;
      lVar1 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_48 + 1;
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_60 + 1;
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


