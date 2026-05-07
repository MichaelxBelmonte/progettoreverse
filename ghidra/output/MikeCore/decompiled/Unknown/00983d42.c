// Function: FUN_00983d42
// Address: 00983d42
// Size: 658 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "Main Public Key is missing"
//   "virtual pace::SharedAsn1_T pace::Asn1ParserCert::FindPublicKeySequence(uint32_t)"


/* WARNING: Removing unreachable block (ram,0x00983ed5) */
/* WARNING: Removing unreachable block (ram,0x00983eeb) */
/* WARNING: Removing unreachable block (ram,0x00983dbf) */
/* WARNING: Removing unreachable block (ram,0x00983dd1) */
/* WARNING: Removing unreachable block (ram,0x00983e49) */
/* WARNING: Removing unreachable block (ram,0x00983e5b) */
/* WARNING: Removing unreachable block (ram,0x00983f58) */
/* WARNING: Removing unreachable block (ram,0x00983f6a) */

void FUN_00983d42(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  unaff_RDI[1] = 0;
  *unaff_RDI = 0;
  if (param_2 == 0) {
    (**(code **)(*unaff_RSI + 0x20))(param_1,&DAT_023cd028);
    plVar3 = (longlong *)unaff_RDI[1];
    *(undefined4 *)unaff_RDI = local_38;
    *(undefined4 *)((longlong)unaff_RDI + 4) = uStack_34;
    *(undefined4 *)(unaff_RDI + 1) = uStack_30;
    *(undefined4 *)((longlong)unaff_RDI + 0xc) = uStack_2c;
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
    if (*unaff_RDI == 0) {
      FUN_00925fd0();
      uVar4 = FUN_00926010();
      uVar5 = FUN_00928ab0("virtual pace::SharedAsn1_T pace::Asn1ParserCert::FindPublicKeySequence(uint32_t)"
                           ,300);
      FUN_009c720b(uVar5,uVar4);
    }
  }
  else {
    (**(code **)(*unaff_RSI + 0x38))(param_1,&DAT_023c8b96);
    plVar3 = (longlong *)unaff_RDI[1];
    *(undefined4 *)unaff_RDI = local_38;
    *(undefined4 *)((longlong)unaff_RDI + 4) = uStack_34;
    *(undefined4 *)(unaff_RDI + 1) = uStack_30;
    *(undefined4 *)((longlong)unaff_RDI + 0xc) = uStack_2c;
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
    if ((longlong *)*unaff_RDI != (longlong *)0x0) {
      (**(code **)(*(longlong *)*unaff_RDI + 0x40))(0x30,1);
      plVar3 = (longlong *)unaff_RDI[1];
      *(undefined4 *)unaff_RDI = 0;
      *(undefined4 *)((longlong)unaff_RDI + 4) = 0;
      *(undefined4 *)(unaff_RDI + 1) = 0;
      *(undefined4 *)((longlong)unaff_RDI + 0xc) = 0;
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
      if ((longlong *)*unaff_RDI != (longlong *)0x0) {
        (**(code **)(*(longlong *)*unaff_RDI + 0x40))(0x30,param_2);
        plVar3 = (longlong *)unaff_RDI[1];
        *(undefined4 *)unaff_RDI = 0;
        *(undefined4 *)((longlong)unaff_RDI + 4) = 0;
        *(undefined4 *)(unaff_RDI + 1) = 0;
        *(undefined4 *)((longlong)unaff_RDI + 0xc) = 0;
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
      }
    }
  }
  return;
}


