// Function: FUN_00989c0e
// Address: 00989c0e
// Size: 1346 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "Extensions are missing"
//   "PublisherParticipantID cannot be zero"
//   "virtual void pace::Asn1ParserCert::SetPublisherParticipantID(uint32_t)"


/* WARNING: Removing unreachable block (ram,0x00989fc1) */
/* WARNING: Removing unreachable block (ram,0x00989fc7) */
/* WARNING: Removing unreachable block (ram,0x0098a135) */

void FUN_00989c0e(void)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulong uVar7;
  int unaff_ESI;
  longlong *unaff_RDI;
  undefined4 uVar8;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_60;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  
  uVar8 = 0;
  if (unaff_ESI == 0) {
    FUN_00925fd0();
    uVar3 = FUN_00926010();
    uVar8 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetPublisherParticipantID(uint32_t)",
                         0x736);
    uVar8 = FUN_009c720b(uVar8,uVar3);
  }
  (**(code **)(*unaff_RDI + 0x38))(uVar8,&DAT_023c8ba0);
  local_50 = local_88;
  if (local_90 == (longlong *)0x0) {
    (**(code **)(*unaff_RDI + 0x20))();
    local_60 = local_88;
    FUN_00925fd0();
    FUN_00926010();
    uVar7 = 0x1fc8e7b;
    FUN_00928ab0("virtual void pace::Asn1ParserCert::SetPublisherParticipantID(uint32_t)",0x73f);
    FUN_009c720b();
    local_80 = local_90;
    plVar4 = operator_new(uVar7);
    FUN_0098106a();
    local_48 = operator_new(uVar7);
    local_48[2] = 0;
    local_48[1] = 0;
    *local_48 = (longlong)&DAT_02520f98;
    local_48[3] = (longlong)plVar4;
    *(undefined1 *)(plVar4 + 1) = 0x30;
    plVar6 = plVar4;
    plVar5 = operator_new((ulong)plVar4);
    uVar7 = (ulong)plVar6;
    FUN_00981a28();
    local_40 = operator_new(uVar7);
    local_40[2] = 0;
    local_40[1] = 0;
    uVar7 = 0x2520fe8;
    *local_40 = (longlong)&DAT_02520fe8;
    local_40[3] = (longlong)plVar5;
    *(undefined1 *)(plVar5 + 1) = 6;
    (**(code **)(*plVar5 + 0x58))(&DAT_02520fe8,DAT_023c8b96);
    LOCK();
    local_40[1] = local_40[1] + 1;
    UNLOCK();
    (**(code **)(*plVar4 + 0x10))();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_40 + 1;
      lVar1 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*local_40 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar6 = operator_new(uVar7);
    FUN_0098106a();
    plVar5 = operator_new(uVar7);
    plVar5[2] = 0;
    plVar5[1] = 0;
    *plVar5 = (longlong)&DAT_02520f98;
    plVar5[3] = (longlong)plVar6;
    *(undefined1 *)(plVar6 + 1) = 4;
    LOCK();
    plVar5[1] = plVar5[1] + 1;
    UNLOCK();
    (**(code **)(*plVar4 + 0x10))();
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      lVar1 = *plVar4;
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    local_90 = operator_new(uVar7);
    FUN_00981a28();
    local_50 = operator_new(uVar7);
    local_50[2] = 0;
    local_50[1] = 0;
    *local_50 = (longlong)&DAT_02520fe8;
    local_50[3] = (longlong)local_90;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_88 + 1;
      lVar1 = *plVar4;
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*local_88 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    *(undefined1 *)(local_90 + 1) = 3;
    LOCK();
    local_50[1] = local_50[1] + 1;
    UNLOCK();
    (**(code **)(*plVar6 + 0x10))();
    bVar2 = true;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_50 + 1;
      lVar1 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*local_50 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  else {
    local_80 = (longlong *)0x0;
    local_60 = (longlong *)0x0;
    local_48 = (longlong *)0x0;
    local_40 = (longlong *)0x0;
    plVar5 = (longlong *)0x0;
    bVar2 = false;
  }
  uVar8 = FUN_00958ec0();
  MACH_HEADER.magic._0_1_ = 0;
  FUN_0098283e(uVar8,4);
  (**(code **)(*local_90 + 0x48))();
  if (bVar2) {
    if (local_48 != (longlong *)0x0) {
      LOCK();
      local_48[1] = local_48[1] + 1;
      UNLOCK();
    }
    (**(code **)(*local_80 + 0x10))();
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_48 + 1;
      lVar1 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_50 + 1;
    lVar1 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    lVar1 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    lVar1 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_48 + 1;
    lVar1 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_60 + 1;
    lVar1 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


