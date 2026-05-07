// Function: FUN_0095583c
// Address: 0095583c
// Size: 556 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Pac...
//   "pace::SharedAuthorizationVerifier_T pace::eden::getNewAuthorizationVerifier(bool)"


void FUN_0095583c(ulong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  char unaff_SIL;
  undefined8 *unaff_RDI;
  undefined8 local_40;
  longlong *local_38;
  
  unaff_RDI[1] = 0;
  *unaff_RDI = 0;
  FUN_0095476e();
  FUN_009b4e10();
  if (DAT_0280d92c == 0) {
    pvVar4 = operator_new(param_1);
    FUN_00928774();
    puVar5 = operator_new(param_1);
    puVar5[2] = 0;
    puVar5[1] = 0;
    *puVar5 = &DAT_0251eaf0;
    puVar5[3] = pvVar4;
    *unaff_RDI = pvVar4;
    plVar3 = (longlong *)unaff_RDI[1];
    unaff_RDI[1] = puVar5;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    if (unaff_SIL == '\0') {
      FUN_0092e810(0,2,0,0);
    }
    else {
      FUN_00930dbe(0,2);
    }
    uVar6 = FUN_00954604();
    FUN_0092cb9a(0,uVar6);
    if (DAT_0280d92c == 0) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00928ab0("pace::SharedAuthorizationVerifier_T pace::eden::getNewAuthorizationVerifier(bool)"
                   ,0x4cb);
      FUN_009cb75b();
    }
  }
  else {
    pvVar4 = operator_new(param_1);
    puVar5 = (undefined8 *)FUN_00954604();
    local_40 = *puVar5;
    local_38 = (longlong *)puVar5[1];
    if (local_38 != (longlong *)0x0) {
      LOCK();
      local_38[1] = local_38[1] + 1;
      UNLOCK();
    }
    uVar7 = 0;
    FUN_00928b4e(0,&local_40);
    puVar5 = operator_new(uVar7);
    puVar5[2] = 0;
    puVar5[1] = 0;
    *puVar5 = &DAT_0251eaf0;
    puVar5[3] = pvVar4;
    *unaff_RDI = pvVar4;
    plVar3 = (longlong *)unaff_RDI[1];
    unaff_RDI[1] = puVar5;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      lVar2 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_38 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  FUN_0094d0ec();
  return;
}


