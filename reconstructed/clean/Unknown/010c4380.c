// Function: FUN_010c4380
// Address: 010c4380
// Size: 515 bytes
// Class: Unknown
// String references:
//   "unused"
//   "keyCompromise"
//   "CACompromise"
//   "affiliationChanged"
//   "superseded"
//   "cessationOfOperation"
//   "certificateHold"
//   "privilegeWithdrawn"
//   "AACompromise"

uint64_t FUN_010c4380(ASN1_BIT_STRING *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  STACK *pSVar3;
  ASN1_BIT_STRING *pAVar4;
  uint64_t uVar5;
  int64_t *this_ptr;
  void*puVar6;
  
  pSVar3 = _X509V3_parse_list((char *)param_1);
  if (pSVar3 == (STACK *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (*this_ptr == 0) {
      iVar1 = _OPENSSL_sk_num();
      if (0 < iVar1) {
        iVar1 = 0;
        uVar5 = 0;
        do {
          _OPENSSL_sk_value();
          if (*this_ptr == 0) {
            pAVar4 = _ASN1_BIT_STRING_new();
            *this_ptr = (int64_t)pAVar4;
            if (pAVar4 == (ASN1_BIT_STRING *)0x0) {
              uVar5 = 0;
              goto LAB_010c455b;
            }
          }
          iVar2 = _strcmp((char *)param_1,param_2);
          puVar6 = &g_025b8de0;
          if (iVar2 != 0) {
            iVar2 = _strcmp((char *)param_1,param_2);
            puVar6 = &g_025b8df8;
            if (iVar2 != 0) {
              iVar2 = _strcmp((char *)param_1,param_2);
              puVar6 = &g_025b8e10;
              if (iVar2 != 0) {
                iVar2 = _strcmp((char *)param_1,param_2);
                puVar6 = &g_025b8e28;
                if (iVar2 != 0) {
                  iVar2 = _strcmp((char *)param_1,param_2);
                  puVar6 = &g_025b8e40;
                  if (iVar2 != 0) {
                    iVar2 = _strcmp((char *)param_1,param_2);
                    puVar6 = &g_025b8e58;
                    if (iVar2 != 0) {
                      iVar2 = _strcmp((char *)param_1,param_2);
                      puVar6 = &g_025b8e70;
                      if (iVar2 != 0) {
                        iVar2 = _strcmp((char *)param_1,param_2);
                        puVar6 = &g_025b8e88;
                        if (iVar2 != 0) {
                          iVar2 = _strcmp((char *)param_1,param_2);
                          puVar6 = &g_025b8ea0;
                          if (iVar2 != 0) {
                            uVar5 = 0;
                            goto LAB_010c455b;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          param_2 = (char *)((int64_t)&MACH_HEADER.magic + 1);
          iVar2 = _ASN1_BIT_STRING_set_bit(param_1,1,param_3);
          if ((iVar2 == 0) || (*(int64_t *)(puVar6 + 2) == 0)) goto LAB_010c455b;
          iVar1 = iVar1 + 1;
          iVar2 = _OPENSSL_sk_num();
        } while (iVar1 < iVar2);
      }
      uVar5 = 1;
    }
LAB_010c455b:
    _OPENSSL_sk_pop_free();
  }
  return uVar5;
}

