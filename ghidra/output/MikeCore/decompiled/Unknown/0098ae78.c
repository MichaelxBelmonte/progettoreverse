// Function: FUN_0098ae78
// Address: 0098ae78
// Size: 563 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "Subject not provided by caller"
//   "virtual void pace::Asn1ParserCert::SetSubject(pace::SharedAsn1_T)"
//   "Subject is missing"


/* WARNING: Removing unreachable block (ram,0x0098afba) */
/* WARNING: Removing unreachable block (ram,0x0098afcc) */

void FUN_0098ae78(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  longlong *local_48;
  longlong *plStack_40;
  
  plVar5 = plStack_40;
  plVar3 = local_48;
  if (((longlong *)*unaff_RSI == (longlong *)0x0) ||
     (cVar7 = (**(code **)(*(longlong *)*unaff_RSI + 0x18))(), uVar11 = extraout_XMM0_Da,
     cVar7 == '\0')) {
    FUN_00925fd0();
    uVar8 = FUN_00926010();
    uVar11 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetSubject(pace::SharedAsn1_T)",0x830)
    ;
    uVar11 = FUN_009c720b(uVar11,uVar8);
  }
  (**(code **)(*unaff_RDI + 0x20))(uVar11,&DAT_023cd02f);
  if (local_48 == (longlong *)0x0) {
    FUN_00925fd0();
    uVar8 = FUN_00926010();
    uVar11 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetSubject(pace::SharedAsn1_T)",0x836)
    ;
    FUN_009c720b(uVar11,uVar8);
  }
  (**(code **)(*local_48 + 0x20))();
  iVar10 = 1;
  plVar9 = (longlong *)0x0;
  while( true ) {
    plVar6 = plStack_40;
    plVar2 = local_48;
    (**(code **)(*(longlong *)*unaff_RSI + 0x40))(0,iVar10);
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
    if (plVar9 != (longlong *)0x0) {
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
    if (plVar2 == (longlong *)0x0) break;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar6[1] = plVar6[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar3 + 0x10))();
    iVar10 = iVar10 + 1;
    plVar9 = plVar6;
    if (plVar6 != (longlong *)0x0) {
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
  if (plVar5 != (longlong *)0x0) {
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
  if (plVar6 != (longlong *)0x0) {
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


