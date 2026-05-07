// Function: FUN_00992af2
// Address: 00992af2
// Size: 808 bytes
// Class: GNString
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/ILokCert.cpp"
//   "ILokCert object has not been initialized"
//   "virtual CERT_HeaderPtr pace::ILokCert::findStartOfCertificate(CERT_HeaderPtr, uint32_t &, uint32_t ...
//   "Bad cert chain size: header size = %d, content size = %d"
//   "The signed section of the current cert is not within the cert chain (this should never happen)"
//   "Bad cert size (%d)"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t FUN_00992af2(uint *param_1,uint *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t arg1;
  int64_t this_ptr;
  uint *puVar4;
  code *pcVar5;
  void*puVar6;
  uint local_38;
  uint local_34;
  
  if (*(char *)(this_ptr + 8) == '\0') {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("virtual CERT_HeaderPtr pace::ILokCert::findStartOfCertificate(CERT_HeaderPtr, uint32_t &, uint32_t &)"
                 ,0x5cd);
    FUN_009c720b();
  }
  if ((arg1 < *(uint64_t *)(this_ptr + 0x1b0)) ||
     (*(uint64_t *)(this_ptr + 0x1b8) <= arg1)) {
    arg1 = *(uint64_t *)(this_ptr + 0x1b0) + 4;
  }
  uVar2 = *(uint64_t *)(this_ptr + 0x10);
  local_34 = FUN_0096e139();
  if (((0x1400 < local_34) || (0x1400 < local_38)) || (0x1400 < local_38 + local_34)) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    puVar4 = &local_34;
    pcVar5 = FUN_009595d8;
    puVar6 = &LAB_009977a0;
    FUN_00983230();
    FUN_00928ab0("virtual CERT_HeaderPtr pace::ILokCert::findStartOfCertificate(CERT_HeaderPtr, uint32_t &, uint32_t &)"
                 ,0x5e3,param_3,param_4,puVar4,pcVar5,puVar6);
    FUN_009c720b();
  }
  if ((arg1 < uVar2) ||
     (uVar1 = (uint64_t)local_38, (uint64_t)local_34 + uVar2 + uVar1 < arg1)) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("virtual CERT_HeaderPtr pace::ILokCert::findStartOfCertificate(CERT_HeaderPtr, uint32_t &, uint32_t &)"
                 ,0x5ea);
    FUN_009c720b();
    uVar1 = (uint64_t)local_38;
  }
  lVar3 = uVar2 + uVar1;
  local_34 = FUN_0096e139();
  if (0x500 < local_34) {
    FUN_00925fd0();
    FUN_00926010();
    puVar4 = &local_34;
    pcVar5 = FUN_009595d8;
    puVar6 = &LAB_009977a0;
    FUN_00983230();
    FUN_00928ab0("virtual CERT_HeaderPtr pace::ILokCert::findStartOfCertificate(CERT_HeaderPtr, uint32_t &, uint32_t &)"
                 ,0x5f7,param_3,param_4,puVar4,pcVar5,puVar6);
    FUN_009c720b();
  }
  uVar2 = (uint64_t)local_38;
  if ((uint64_t)local_34 + uVar2 + lVar3 < arg1) {
    do {
      lVar3 = (uint64_t)(local_34 + (int)uVar2) + lVar3;
      local_34 = FUN_0096e139(uVar2,&local_38);
      if (0x500 < local_34) {
        FUN_00925fd0();
        FUN_00926010();
        puVar4 = &local_34;
        pcVar5 = FUN_009595d8;
        puVar6 = &LAB_009977a0;
        FUN_00983230();
        FUN_00928ab0("virtual CERT_HeaderPtr pace::ILokCert::findStartOfCertificate(CERT_HeaderPtr, uint32_t &, uint32_t &)"
                     ,0x608,param_3,param_4,puVar4,pcVar5,puVar6);
        FUN_009c720b();
      }
      uVar2 = (uint64_t)local_38;
    } while ((uint64_t)local_34 + uVar2 + lVar3 < arg1);
  }
  *param_2 = local_38;
  *param_1 = local_34;
  return lVar3;
}

