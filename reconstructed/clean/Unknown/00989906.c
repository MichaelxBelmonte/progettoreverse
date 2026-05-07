// Function: FUN_00989906
// Address: 00989906
// Size: 681 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "Missing some PublisherParticipantID data"
//   "virtual void pace::Asn1ParserCert::GetPublisherParticipantID(uint32_t &)"
//   "Unused bits are not supported in the PublisherParticipantID BitString"

void FUN_00989906(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  void*arg1;
  int64_t *this_ptr;
  int64_t *plVar4;
  uint32_t uVar5;
  int64_t *local_48;
  int64_t *plStack_40;
  
  *arg1 = 0;
  (**(code **)(*this_ptr + 0x38))(0,&g_023c8ba0);
  plVar4 = plStack_40;
  if (local_48 != (int64_t *)0x0) {
    (**(code **)(*local_48 + 0x40))(3,1);
    if (plStack_40 != (int64_t *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_40 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_48 == (int64_t *)0x0) {
      (**(code **)(*this_ptr + 0x48))(1,&g_023c8b68);
      plVar4 = (int64_t *)0x0;
      if (plStack_40 != (int64_t *)0x0) {
        LOCK();
        plVar1 = plStack_40 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plStack_40 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    else {
      (**(code **)(*local_48 + 0x30))();
      FUN_00925fd0();
      uVar3 = FUN_00926010();
      uVar5 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetPublisherParticipantID(uint32_t &)"
                           ,0x6fd);
      FUN_009c720b(uVar5,uVar3);
      if ((char)MACH_HEADER.magic != '\0') {
        FUN_00925fd0();
        uVar3 = FUN_00926010();
        uVar5 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetPublisherParticipantID(uint32_t &)"
                             ,0x705);
        FUN_009c720b(uVar5,uVar3);
      }
      uVar5 = FUN_00982800();
      *arg1 = uVar5;
    }
  }
  if (plVar4 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

