// Function: FUN_00989906
// Address: 00989906
// Size: 681 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "Missing some PublisherParticipantID data"
//   "virtual void pace::Asn1ParserCert::GetPublisherParticipantID(uint32_t &)"
//   "Unused bits are not supported in the PublisherParticipantID BitString"


/* WARNING: Removing unreachable block (ram,0x00989b25) */
/* WARNING: Removing unreachable block (ram,0x00989b50) */
/* WARNING: Removing unreachable block (ram,0x00989b5c) */
/* WARNING: Removing unreachable block (ram,0x009899ab) */
/* WARNING: Removing unreachable block (ram,0x009899bd) */
/* WARNING: Removing unreachable block (ram,0x00989afd) */
/* WARNING: Removing unreachable block (ram,0x00989b0f) */
/* WARNING: Removing unreachable block (ram,0x00989b97) */

void FUN_00989906(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar4;
  undefined4 uVar5;
  longlong *local_48;
  longlong *plStack_40;
  
  *unaff_RSI = 0;
  (**(code **)(*unaff_RDI + 0x38))(0,&DAT_023c8ba0);
  plVar4 = plStack_40;
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x40))(3,1);
    if (plStack_40 != (longlong *)0x0) {
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
    if (local_48 == (longlong *)0x0) {
      (**(code **)(*unaff_RDI + 0x48))(1,&DAT_023c8b68);
      plVar4 = (longlong *)0x0;
      if (plStack_40 != (longlong *)0x0) {
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
      *unaff_RSI = uVar5;
    }
  }
  if (plVar4 != (longlong *)0x0) {
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


