// Function: FUN_00986f16
// Address: 00986f16
// Size: 859 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "signatureEcdsa_R is missing"
//   "virtual void pace::Asn1ParserCert::GetEcdsaSignature(BIG_SignatureECDSA_Struct &)"
//   "signatureEcdsa_R data is missing"
//   "[%d] BIG_BytesToBigNumber error- Getting the R Signature in Asn1ParserCert::GetEcdsaSignature"
//   "signatureEcdsa_S is missing"
//   "signatureEcdsa_S data is missing"
//   "[%d] BIG_BytesToBigNumber error- Getting the S Signature in Asn1ParserCert::GetEcdsaSignature"

void FUN_00986f16(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  code *pcVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t arg1;
  int64_t *this_ptr;
  uint32_t uVar5;
  uint32_t extraout_XMM0_Da;
  int64_t *local_78;
  code *pcStackY_70;
  void*puVar6;
  int local_34;
  
  pcVar2 = pcStackY_70;
  (**(code **)(*this_ptr + 0x20))(0,&g_023cd044);
  if (local_78 == (int64_t *)0x0) {
    FUN_00925fd0();
    uVar4 = FUN_00926010();
    uVar5 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetEcdsaSignature(BIG_SignatureECDSA_Struct &)"
                         ,0x423);
    FUN_009c720b(uVar5,uVar4);
  }
  (**(code **)(*local_78 + 0x30))();
  FUN_00925fd0();
  uVar4 = FUN_00926010();
  uVar5 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetEcdsaSignature(BIG_SignatureECDSA_Struct &)"
                       ,0x428);
  uVar5 = FUN_009c720b(uVar5,uVar4);
  local_34 = FUN_0096dcbd(uVar5,arg1);
  uVar5 = extraout_XMM0_Da;
  if (local_34 != 0) {
    FUN_00925fd0();
    uVar4 = FUN_00926010();
    local_78 = (int64_t *)&local_34;
    pcStackY_70 = FUN_009595d8;
    puVar6 = &LAB_009977a0;
    FUN_00983230();
    uVar5 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetEcdsaSignature(BIG_SignatureECDSA_Struct &)"
                         ,0x431,param_3,param_4,puVar6);
    uVar5 = FUN_009c720b(uVar5,uVar4);
  }
  (**(code **)(*this_ptr + 0x20))(uVar5,&g_023cd04d);
  if (pcVar2 != 0x0) {
    LOCK();
    pcVar1 = pcVar2 + 8;
    lVar3 = *(int64_t *)pcVar1;
    *(int64_t *)pcVar1 = *(int64_t *)pcVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*(int64_t *)pcVar2 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_78 == (int64_t *)0x0) {
    FUN_00925fd0();
    uVar4 = FUN_00926010();
    uVar5 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetEcdsaSignature(BIG_SignatureECDSA_Struct &)"
                         ,0x436);
    FUN_009c720b(uVar5,uVar4);
  }
  (**(code **)(*local_78 + 0x30))();
  FUN_00925fd0();
  uVar4 = FUN_00926010();
  uVar5 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetEcdsaSignature(BIG_SignatureECDSA_Struct &)"
                       ,0x43b);
  uVar5 = FUN_009c720b(uVar5,uVar4);
  local_34 = FUN_0096dcbd(uVar5,arg1 + 0x38);
  if (local_34 != 0) {
    FUN_00925fd0();
    uVar4 = FUN_00926010();
    puVar6 = &LAB_009977a0;
    FUN_00983230();
    uVar5 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetEcdsaSignature(BIG_SignatureECDSA_Struct &)"
                         ,0x444,param_3,param_4,puVar6);
    FUN_009c720b(uVar5,uVar4);
  }
  if (pcStackY_70 != 0x0) {
    LOCK();
    pcVar2 = pcStackY_70 + 8;
    lVar3 = *(int64_t *)pcVar2;
    *(int64_t *)pcVar2 = *(int64_t *)pcVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*(int64_t *)pcStackY_70 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

