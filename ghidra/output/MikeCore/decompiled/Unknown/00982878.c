// Function: FUN_00982878
// Address: 00982878
// Size: 1840 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1Parser.cpp...
//   "    "
//   "The ASN1 item pointer or cert instance pointer is NULL"
//   "virtual void pace::Asn1Parser::decodeContainer(pace::SharedAsn1_T, CERT_ContentPtr, uint32_t, Cert_...
//   "decodeContainer: 1: The ASN1 bytes have a bad header or content size"
//   "decodeContainer: 2: The ASN1 bytes have a bad header or content size"
//   "This parser does not support unued bits in a bit string"


void FUN_00982878(string *param_1,string *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  string *psVar5;
  char cVar6;
  uint uVar7;
  string *psVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulong uVar12;
  char *pcVar13;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar14;
  ulonglong uVar15;
  string *psVar16;
  byte local_128 [24];
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  byte local_e8;
  byte local_d0;
  byte local_70;
  char local_6f [15];
  char *local_60;
  string *local_58;
  string *local_50;
  uint local_44;
  longlong *local_40;
  string local_31;
  
  uVar15 = (ulonglong)param_1 & 0xffffffff;
  psVar8 = param_1;
  lVar14 = param_3;
  std::string::string(param_1,param_2);
  std::string::append((char *)psVar8);
  if ((param_3 == 0) || (*unaff_RSI == 0)) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("virtual void pace::Asn1Parser::decodeContainer(pace::SharedAsn1_T, CERT_ContentPtr, uint32_t, Cert_InstancePtr, std::__1::string, bool)"
                 ,0x189);
    FUN_009c720b();
  }
  if ((param_2 == (string *)0x0) || ((int)param_1 + 1U < 2)) {
    FUN_00925fd0();
    FUN_00926010();
    pcVar13 = 
    "virtual void pace::Asn1Parser::decodeContainer(pace::SharedAsn1_T, CERT_ContentPtr, uint32_t, Cert_InstancePtr, std::__1::string, bool)"
    ;
    FUN_00928ab0("virtual void pace::Asn1Parser::decodeContainer(pace::SharedAsn1_T, CERT_ContentPtr, uint32_t, Cert_InstancePtr, std::__1::string, bool)"
                 ,399);
    FUN_009c720b();
    if ((int)param_1 == 0) {
      plVar11 = (longlong *)0x0;
      goto LAB_00982f58;
    }
  }
  plVar11 = (longlong *)0x0;
  do {
    local_58 = param_2;
    local_40 = plVar11;
    local_50 = (string *)FUN_0096e139();
    if ((int)local_50 == -1) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00928ab0("virtual void pace::Asn1Parser::decodeContainer(pace::SharedAsn1_T, CERT_ContentPtr, uint32_t, Cert_InstancePtr, std::__1::string, bool)"
                   ,0x1a0);
      FUN_009c720b();
    }
    psVar16 = local_58 + local_44;
    pcVar13 = (char *)&local_31;
    psVar8 = local_50;
    cVar6 = FUN_00980c70();
    if (cVar6 == '\0') {
      if ((char)unaff_RDI[5] != '\0') {
        FUN_009824a2();
        if ((local_70 & 1) == 0) {
          uVar12 = (ulong)(local_70 >> 1);
          pcVar13 = local_6f;
        }
        else {
          uVar12 = (ulong)local_6f._7_8_;
          pcVar13 = local_60;
        }
        puVar9 = (ulonglong *)std::string::insert(uVar12,pcVar13,(ulong)lVar14);
        uVar2 = *puVar9;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        FUN_009824a2();
        if ((local_70 & 1) == 0) {
          uVar12 = (ulong)(local_70 >> 1);
          pcVar13 = local_6f;
        }
        else {
          uVar12 = (ulong)local_6f._7_8_;
          pcVar13 = local_60;
        }
        puVar9 = (ulonglong *)std::string::insert(uVar12,pcVar13,(ulong)lVar14);
        uVar3 = *puVar9;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        pcVar13 = (char *)local_58;
        FUN_0098242c(local_58,local_44 + (int)local_50);
        if ((uVar3 & 1) != 0) {
          operator_delete(pcVar13);
        }
        if ((local_d0 & 1) != 0) {
          operator_delete(pcVar13);
        }
        if ((uVar2 & 1) != 0) {
          operator_delete(pcVar13);
        }
        if ((local_e8 & 1) != 0) {
          operator_delete(pcVar13);
        }
      }
      plVar10 = operator_new((ulong)pcVar13);
      FUN_00981a28();
      plVar11 = operator_new((ulong)pcVar13);
      plVar11[2] = 0;
      plVar11[1] = 0;
      *plVar11 = (longlong)&DAT_02520fe8;
      plVar11[3] = (longlong)plVar10;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        lVar1 = *plVar4;
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (lVar1 == 0) {
          (**(code **)(*local_40 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
      *(string *)(plVar10 + 1) = *local_58;
      if ((int)local_50 == 0) {
        local_50 = (string *)0x0;
      }
      else {
        (**(code **)(*plVar10 + 0x58))();
      }
    }
    else {
      if (*local_58 == (string)0x3) {
        if (*psVar16 != (string)0x0) {
          FUN_00925fd0();
          psVar8 = (string *)FUN_00926010();
          pcVar13 = 
          "virtual void pace::Asn1Parser::decodeContainer(pace::SharedAsn1_T, CERT_ContentPtr, uint32_t, Cert_InstancePtr, std::__1::string, bool)"
          ;
          FUN_00928ab0("virtual void pace::Asn1Parser::decodeContainer(pace::SharedAsn1_T, CERT_ContentPtr, uint32_t, Cert_InstancePtr, std::__1::string, bool)"
                       ,0x1b1);
          FUN_009c720b();
        }
        psVar16 = psVar16 + 1;
        local_44 = local_44 + 1;
        local_50 = (string *)(ulonglong)((int)local_50 - 1);
      }
      if ((char)unaff_RDI[5] != '\0') {
        FUN_009824a2();
        if ((local_70 & 1) == 0) {
          uVar12 = (ulong)(local_70 >> 1);
          pcVar13 = local_6f;
        }
        else {
          uVar12 = (ulong)local_6f._7_8_;
          pcVar13 = local_60;
        }
        puVar9 = (ulonglong *)std::string::insert(uVar12,pcVar13,(ulong)lVar14);
        uVar2 = *puVar9;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        FUN_009824a2();
        if ((local_70 & 1) == 0) {
          uVar12 = (ulong)(local_70 >> 1);
          pcVar13 = local_6f;
        }
        else {
          uVar12 = (ulong)local_6f._7_8_;
          pcVar13 = local_60;
        }
        puVar9 = (ulonglong *)std::string::insert(uVar12,pcVar13,(ulong)lVar14);
        uVar3 = *puVar9;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        psVar8 = (string *)(ulonglong)local_44;
        pcVar13 = (char *)local_58;
        FUN_0098242c();
        if ((uVar3 & 1) != 0) {
          operator_delete(pcVar13);
        }
        if ((local_d0 & 1) != 0) {
          operator_delete(pcVar13);
        }
        if ((uVar2 & 1) != 0) {
          operator_delete(pcVar13);
        }
        if ((local_e8 & 1) != 0) {
          operator_delete(pcVar13);
        }
      }
      plVar10 = operator_new((ulong)pcVar13);
      FUN_0098106a();
      plVar11 = operator_new((ulong)pcVar13);
      psVar5 = local_50;
      plVar11[2] = 0;
      plVar11[1] = 0;
      *plVar11 = (longlong)&DAT_02520f98;
      plVar11[3] = (longlong)plVar10;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        lVar1 = *plVar4;
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (lVar1 == 0) {
          (**(code **)(*local_40 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
      *(string *)(plVar10 + 1) = *local_58;
      if ((int)psVar5 == 0) {
        local_50 = (string *)0x0;
      }
      else {
        LOCK();
        plVar11[1] = plVar11[1] + 1;
        UNLOCK();
        local_110 = plVar10;
        local_108 = plVar11;
        std::string::string((string *)pcVar13,psVar8);
        pcVar13 = (char *)local_50;
        lVar14 = param_3;
        (**(code **)(*unaff_RDI + 0x30))(local_50,psVar16,param_3,local_128);
        if ((local_128[0] & 1) != 0) {
          operator_delete(pcVar13);
        }
        if (local_108 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_108 + 1;
          lVar1 = *plVar4;
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (lVar1 == 0) {
            (**(code **)(*local_108 + 0x10))();
            std::__shared_weak_count::__release_weak();
          }
        }
      }
    }
    plVar4 = (longlong *)*unaff_RSI;
    LOCK();
    plVar11[1] = plVar11[1] + 1;
    UNLOCK();
    local_100 = plVar10;
    local_f8 = plVar11;
    (**(code **)(*plVar4 + 0x10))();
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_f8 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*local_f8 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar7 = (int)local_50 + local_44;
    param_2 = local_58 + uVar7;
    uVar7 = (int)uVar15 - uVar7;
    uVar15 = (ulonglong)uVar7;
  } while (uVar7 != 0);
LAB_00982f58:
  if ((local_70 & 1) != 0) {
    operator_delete(pcVar13);
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar11 + 1;
    lVar14 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar11 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


