// Function: FUN_010a1510
// Address: 010a1510
// Size: 580 bytes
// Class: Unknown
// String references:
//   "PRIVATE KEY"


longlong FUN_010a1510(EVP_PKEY *param_1,EVP_PKEY *param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  EVP_PKEY *pEVar5;
  ENGINE *pEVar6;
  code *pcVar7;
  PKCS8_PRIV_KEY_INFO *pPVar8;
  EVP_PKEY *pEVar9;
  longlong unaff_RDI;
  long len;
  undefined4 uVar10;
  long length;
  ulonglong uVar11;
  EVP_PKEY *local_68;
  EVP_PKEY *local_60;
  longlong local_58;
  EVP_PKEY *local_50;
  EVP_PKEY *local_48;
  EVP_PKEY *local_40;
  int *local_38;
  
  length = (long)param_4;
  uVar10 = (undefined4)((ulonglong)param_3 >> 0x20);
  len = (long)param_3;
  local_60 = param_2;
  local_48 = param_1;
  local_38 = param_4;
  if (unaff_RDI == 0) {
    pEVar6 = _ENGINE_get_first();
    if (pEVar6 == (ENGINE *)0x0) {
      local_40 = (EVP_PKEY *)0x0;
    }
    else {
      local_40 = (EVP_PKEY *)0x0;
      do {
        pcVar7 = (code *)_ENGINE_get_pkey_asn1_meths();
        if (pcVar7 != (code *)0x0) {
          local_50 = (EVP_PKEY *)0x0;
          param_1 = (EVP_PKEY *)0x0;
          uVar2 = (*pcVar7)(0,&local_50);
          if (0 < (int)uVar2) {
            uVar11 = 0;
            do {
              local_58 = 0;
              param_1 = (EVP_PKEY *)(ulonglong)(uint)(&local_50->type)[uVar11];
              local_68 = param_2;
              iVar1 = (*pcVar7)(param_1,0);
              if ((((iVar1 != 0) && (local_58 != 0)) && ((*(byte *)(local_58 + 8) & 1) == 0)) &&
                 (param_1 = local_48,
                 pEVar5 = _d2i_PrivateKey((int)local_48,&local_68,(uchar **)CONCAT44(uVar10,len),
                                          length), pEVar5 != (EVP_PKEY *)0x0)) {
                if (local_40 != (EVP_PKEY *)0x0) {
                  _EVP_PKEY_free(param_1);
                  pEVar5 = local_40;
                }
                local_40 = pEVar5;
                *local_38 = *local_38 + 1;
              }
              uVar11 = uVar11 + 1;
            } while (uVar2 != uVar11);
          }
        }
        pEVar6 = _ENGINE_get_next((ENGINE *)param_1);
      } while (pEVar6 != (ENGINE *)0x0);
    }
    iVar1 = _EVP_PKEY_asn1_get_count();
    pEVar5 = local_40;
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        local_50 = param_2;
        lVar4 = _EVP_PKEY_asn1_get0();
        if (((*(byte *)(lVar4 + 8) & 1) == 0) &&
           (param_1 = local_48,
           pEVar9 = _d2i_PrivateKey((int)local_48,&local_50,(uchar **)CONCAT44(uVar10,len),length),
           pEVar9 != (EVP_PKEY *)0x0)) {
          if (pEVar5 != (EVP_PKEY *)0x0) {
            _EVP_PKEY_free(param_1);
            pEVar9 = pEVar5;
          }
          *local_38 = *local_38 + 1;
          pEVar5 = pEVar9;
        }
        iVar1 = iVar1 + 1;
        iVar3 = _EVP_PKEY_asn1_get_count();
      } while (iVar1 < iVar3);
    }
    if (1 < *local_38) goto LAB_010a1740;
  }
  else {
    iVar1 = _strcmp((char *)param_1,(char *)param_2);
    if (iVar1 == 0) {
      pEVar5 = (EVP_PKEY *)0x0;
      pPVar8 = _d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)param_1,(uchar **)local_48,len);
      *local_38 = 1;
      if (pPVar8 != (PKCS8_PRIV_KEY_INFO *)0x0) {
        pEVar5 = _EVP_PKCS82PKEY((PKCS8_PRIV_KEY_INFO *)param_1);
      }
      _PKCS8_PRIV_KEY_INFO_free((PKCS8_PRIV_KEY_INFO *)param_1);
    }
    else {
      iVar1 = _pem_check_suffix();
      if (iVar1 < 1) {
        return 0;
      }
      lVar4 = _EVP_PKEY_asn1_find_str();
      if (lVar4 == 0) {
        return 0;
      }
      *local_38 = 1;
      param_1 = local_48;
      pEVar5 = _d2i_PrivateKey((int)local_48,&local_60,(uchar **)CONCAT44(uVar10,len),length);
    }
  }
  if (pEVar5 == (EVP_PKEY *)0x0) {
    return 0;
  }
  lVar4 = _OSSL_STORE_INFO_new_PKEY();
  if (lVar4 != 0) {
    return lVar4;
  }
LAB_010a1740:
  _EVP_PKEY_free(param_1);
  return 0;
}


