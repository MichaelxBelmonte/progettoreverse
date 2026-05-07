// Function: FUN_009851a4
// Address: 009851a4
// Size: 1184 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "Sequence containing the PKStandard is missing"
//   "virtual void pace::Asn1ParserCert::GetEccPublicKey(uint32_t, uint32_t &, BIG_PublicKeyECC_Struct &)...
//   "Public Key PKStandard is missing"
//   "Unsupported PKStandard found in certificate"
//   "Public Key Value is missing"
//   "Public Key Value content is missing"
//   "[%d] CERT_InterpretECC_PublicKeyValue error in Asn1ParserCert::GetEccPublicKey"


void FUN_009851a4(char *param_1,undefined4 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  char *pcVar7;
  int iVar8;
  code *pcVar9;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  int local_8c;
  longlong *local_88;
  code *pcStack_80;
  undefined1 *local_78;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  code *local_48;
  undefined4 *local_40;
  code *local_38;
  
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  local_48 = (code *)0x0;
  local_38 = (code *)0x0;
  pcVar7 = param_1;
  local_40 = param_2;
  uVar10 = FUN_0096dfe2();
  (**(code **)(*unaff_RDI + 0x40))(uVar10,unaff_ESI);
  plVar3 = local_88;
  if (local_88 == (longlong *)0x0) {
    *local_40 = 0xffffffff;
    pcVar9 = pcStack_80;
  }
  else {
    local_48 = pcStack_80;
    (**(code **)(*local_88 + 0x40))(0x30,1);
    pcVar9 = pcStack_80;
    plVar4 = local_88;
    if (local_88 == (longlong *)0x0) {
      local_38 = (code *)FUN_00925fd0();
      uVar6 = FUN_00926010();
      uVar10 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetEccPublicKey(uint32_t, uint32_t &, BIG_PublicKeyECC_Struct &)"
                            ,0x2c2);
      FUN_009c720b(uVar10,uVar6);
    }
    (**(code **)(*plVar4 + 0x40))(6,2);
    plVar4 = local_88;
    local_38 = pcStack_80;
    local_88 = (longlong *)0x0;
    pcStack_80 = (code *)0x0;
    if (pcVar9 != (code *)0x0) {
      LOCK();
      pcVar1 = pcVar9 + 8;
      lVar2 = *(longlong *)pcVar1;
      *(longlong *)pcVar1 = *(longlong *)pcVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*(longlong *)pcVar9 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    if (pcStack_80 != (code *)0x0) {
      LOCK();
      pcVar9 = pcStack_80 + 8;
      lVar2 = *(longlong *)pcVar9;
      *(longlong *)pcVar9 = *(longlong *)pcVar9 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*(longlong *)pcStack_80 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_00925fd0();
      uVar6 = FUN_00926010();
      uVar10 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetEccPublicKey(uint32_t, uint32_t &, BIG_PublicKeyECC_Struct &)"
                            ,0x2c4);
      FUN_009c720b(uVar10,uVar6);
    }
    uVar10 = (**(code **)(*plVar4 + 0x30))();
    cVar5 = (**(code **)(*unaff_RDI + 400))(uVar10,&local_68);
    if (cVar5 == '\0') {
      cVar5 = (**(code **)(*unaff_RDI + 400))(extraout_XMM0_Da,&local_68);
      if (cVar5 == '\0') {
        cVar5 = (**(code **)(*unaff_RDI + 400))(extraout_XMM0_Da_00,&local_68);
        if (cVar5 == '\0') {
          cVar5 = (**(code **)(*unaff_RDI + 400))(extraout_XMM0_Da_01,&local_68);
          if (cVar5 == '\0') {
            FUN_00925fd0();
            uVar6 = FUN_00926010();
            uVar10 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetEccPublicKey(uint32_t, uint32_t &, BIG_PublicKeyECC_Struct &)"
                                  ,0x2da);
            FUN_009c720b(uVar10,uVar6);
          }
          else {
            *local_40 = 3;
          }
        }
        else {
          *local_40 = 2;
        }
      }
      else {
        *local_40 = 1;
      }
    }
    else {
      *local_40 = 0;
    }
    (**(code **)(*plVar3 + 0x40))(3,1);
    pcVar9 = pcStack_80;
    plVar3 = local_88;
    if (local_88 == (longlong *)0x0) {
      FUN_00925fd0();
      uVar6 = FUN_00926010();
      uVar10 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetEccPublicKey(uint32_t, uint32_t &, BIG_PublicKeyECC_Struct &)"
                            ,0x2df);
      FUN_009c720b(uVar10,uVar6);
    }
    (**(code **)(*plVar3 + 0x30))();
    iVar8 = (int)lStack_60 - (int)local_68;
    if (iVar8 == 0) {
      FUN_00925fd0();
      uVar6 = FUN_00926010();
      uVar10 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetEccPublicKey(uint32_t, uint32_t &, BIG_PublicKeyECC_Struct &)"
                            ,0x2e4);
      FUN_009c720b(uVar10,uVar6);
    }
    local_8c = FUN_0096fd7c(param_1,iVar8);
    pcVar7 = param_1;
    if (local_8c != 0) {
      FUN_00925fd0();
      uVar6 = FUN_00926010();
      local_88 = (longlong *)&local_8c;
      pcStack_80 = FUN_009595d8;
      local_78 = &LAB_009977a0;
      FUN_00983230();
      pcVar7 = 
      "virtual void pace::Asn1ParserCert::GetEccPublicKey(uint32_t, uint32_t &, BIG_PublicKeyECC_Struct &)"
      ;
      uVar10 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetEccPublicKey(uint32_t, uint32_t &, BIG_PublicKeyECC_Struct &)"
                            ,0x2f4);
      FUN_009c720b(uVar10,uVar6);
    }
    if (pcVar9 != (code *)0x0) {
      LOCK();
      pcVar1 = pcVar9 + 8;
      lVar2 = *(longlong *)pcVar1;
      *(longlong *)pcVar1 = *(longlong *)pcVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*(longlong *)pcVar9 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    pcVar9 = local_48;
    if (local_38 != (code *)0x0) {
      LOCK();
      pcVar1 = local_38 + 8;
      lVar2 = *(longlong *)pcVar1;
      *(longlong *)pcVar1 = *(longlong *)pcVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*(longlong *)local_38 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (pcVar9 != (code *)0x0) {
    LOCK();
    pcVar1 = pcVar9 + 8;
    lVar2 = *(longlong *)pcVar1;
    *(longlong *)pcVar1 = *(longlong *)pcVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*(longlong *)pcVar9 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_68 != 0) {
    lStack_60 = local_68;
    operator_delete(pcVar7);
  }
  return;
}


