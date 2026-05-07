// Function: FUN_00987326
// Address: 00987326
// Size: 856 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "signatureEcdsa_R is missing"
//   "signatureEcdsa_S is missing"
//   "virtual void pace::Asn1ParserCert::SetEcdsaSignature(const BIG_SignatureECDSA_Struct &)"
//   "[%d] BIG_BigNumberToBytes error - Setting the R Signature in Asn1ParserCert::SetEcdsaSignature"
//   "[%d] BIG_BigNumberToBytes error - Setting the S Signature in Asn1ParserCert::SetEcdsaSignature"

void FUN_00987326(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  code *pcVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t *this_ptr;
  uint32_t uVar6;
  int64_t *local_78;
  code *pcStackY_70;
  void*puVar7;
  int local_34;
  
  pcVar2 = pcStackY_70;
  plVar4 = local_78;
  (**(code **)(*this_ptr + 0x20))();
  if (local_78 == (int64_t *)0x0) {
    FUN_00925fd0();
    uVar5 = FUN_00926010();
    uVar6 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetEcdsaSignature(const BIG_SignatureECDSA_Struct &)"
                         ,0x467);
    FUN_009c720b(uVar6,uVar5);
  }
  FUN_00958ec0();
  local_34 = FUN_0096db7a(0,0);
  if (local_34 != 0) {
    FUN_00925fd0();
    uVar5 = FUN_00926010();
    local_78 = (int64_t *)&local_34;
    pcStackY_70 = FUN_009595d8;
    puVar7 = &LAB_009977a0;
    FUN_00983230();
    uVar6 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetEcdsaSignature(const BIG_SignatureECDSA_Struct &)"
                         ,0x473,param_3,param_4,puVar7);
    FUN_009c720b(uVar6,uVar5);
  }
  (**(code **)(*this_ptr + 0x28))();
  uVar6 = (**(code **)(*plVar4 + 0x48))();
  (**(code **)(*this_ptr + 0x20))(uVar6,&g_023cd04d);
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
    uVar5 = FUN_00926010();
    uVar6 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetEcdsaSignature(const BIG_SignatureECDSA_Struct &)"
                         ,0x47f);
    FUN_009c720b(uVar6,uVar5);
  }
  FUN_00958ec0();
  local_34 = FUN_0096db7a(0,0);
  if (local_34 != 0) {
    FUN_00925fd0();
    uVar5 = FUN_00926010();
    puVar7 = &LAB_009977a0;
    FUN_00983230();
    uVar6 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetEcdsaSignature(const BIG_SignatureECDSA_Struct &)"
                         ,0x48b,param_3,param_4,puVar7);
    FUN_009c720b(uVar6,uVar5);
  }
  (**(code **)(*this_ptr + 0x28))();
  (**(code **)(*local_78 + 0x48))();
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

