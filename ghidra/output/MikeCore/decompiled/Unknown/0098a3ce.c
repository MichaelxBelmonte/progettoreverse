// Function: FUN_0098a3ce
// Address: 0098a3ce
// Size: 678 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "signedSignatureAlgorithmOid1 is missing"
//   "virtual void pace::Asn1ParserCert::GetSignatureAlgorithm(uint32_t &, uint32_t &)"
//   "A properly sized signedSignatureAlgorithmOid content is missing"
//   "A properly sized signedSignatureAlgorithm2Oid content is missing"


/* WARNING: Removing unreachable block (ram,0x0098a557) */
/* WARNING: Removing unreachable block (ram,0x0098a569) */
/* WARNING: Removing unreachable block (ram,0x0098a65c) */

void FUN_0098a3ce(undefined8 param_1,int *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  int *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar5;
  int local_74;
  longlong *local_68;
  longlong *plStack_60;
  undefined1 local_31;
  
  (**(code **)(*unaff_RDI + 0x20))(0,&DAT_023cd056);
  if (local_68 == (longlong *)0x0) {
    FUN_00925fd0();
    uVar4 = FUN_00926010();
    uVar5 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetSignatureAlgorithm(uint32_t &, uint32_t &)"
                         ,0x77a);
    FUN_009c720b(uVar5,uVar4);
  }
  (**(code **)(*local_68 + 0x30))();
  local_31 = 0;
  FUN_00925fd0();
  uVar4 = FUN_00926010();
  uVar5 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetSignatureAlgorithm(uint32_t &, uint32_t &)"
                       ,0x77f);
  uVar5 = FUN_009c720b(uVar5,uVar4);
  FUN_00980652(uVar5,&local_31);
  iVar3 = FUN_00970eef();
  *unaff_RSI = iVar3;
  if ((iVar3 == -1) || (*param_2 == -0x10000)) {
    (**(code **)(*unaff_RDI + 0x20))(unaff_RSI,&DAT_023cd05f);
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_60 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x30))();
      local_31 = 0;
      FUN_00925fd0();
      uVar4 = FUN_00926010();
      uVar5 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetSignatureAlgorithm(uint32_t &, uint32_t &)"
                           ,0x78f);
      uVar5 = FUN_009c720b(uVar5,uVar4);
      FUN_00980652(uVar5,&local_31);
      iVar3 = FUN_00970eef();
      if (*unaff_RSI == -1) {
        *unaff_RSI = iVar3;
      }
      if (*param_2 == -0x10000) {
        *param_2 = local_74;
      }
    }
  }
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_60 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


