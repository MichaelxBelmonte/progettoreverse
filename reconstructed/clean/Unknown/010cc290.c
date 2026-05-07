// Function: FUN_010cc290
// Address: 010cc290
// Size: 936 bytes
// Class: Unknown
// String references:
//   "crypto/x509v3/v3_utl.c"

int FUN_010cc290(uint param_1,X509 *param_2,int *param_3,X509 *param_4)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint32_t extraout_var;
  void *pvVar9;
  int *piVar10;
  ASN1_STRING *pAVar11;
  X509_CINF *pXVar12;
  char *pcVar13;
  X509 *a;
  ASN1_STRING *in;
  int iVar14;
  char *arg1;
  X509 *idx;
  code *local_70;
  uint local_60;
  uint local_48;
  
  param_1 = param_1 & 0xffff7fff;
  pcVar13 = (char *)(uint64_t)param_1;
  local_48 = 0x16;
  bVar2 = true;
  iVar8 = (int)param_3;
  if (iVar8 == 1) {
    local_70 = FUN_010ccc30;
  }
  else if (iVar8 == 2) {
    if ((X509 *)((int64_t)&MACH_HEADER.magic + 1) < param_2) {
      pcVar13 = (char *)(uint64_t)(param_1 | (uint)(*arg1 == '.') << 0xf);
    }
    local_70 = FUN_010ccd30;
    if (((uint64_t)pcVar13 & 2) == 0) {
      local_70 = FUN_010cce30;
    }
    param_1 = (uint)pcVar13;
  }
  else {
    local_70 = FUN_010cd3d0;
    local_48 = 4;
    bVar2 = false;
  }
  idx = param_4;
  if (param_2 == (X509 *)0x0) {
    sVar4 = _strlen(pcVar13);
    param_2 = (X509 *)CONCAT44(extraout_var,sVar4);
  }
  a = (X509 *)0x0;
  pvVar9 = _X509_get_ext_d2i((X509 *)0x0,0,param_3,(int *)idx);
  if (pvVar9 != (void *)0x0) {
    bVar3 = false;
    iVar5 = _OPENSSL_sk_num();
    if (0 < iVar5) {
      if (!bVar2) {
        bVar3 = false;
        iVar14 = 0;
        iVar5 = 1;
LAB_010cc478:
        piVar10 = (int *)_OPENSSL_sk_value();
        if (*piVar10 == iVar8) {
          puVar1 = *(uint **)(piVar10 + 2);
          if (*(int64_t *)(puVar1 + 2) != 0) {
            uVar7 = *puVar1;
            a = (X509 *)(uint64_t)uVar7;
            if (uVar7 != 0) {
              bVar3 = true;
              if ((puVar1[1] == local_48) && (local_60 = (uint)param_2, uVar7 == local_60)) {
                iVar6 = _memcmp(a,param_2,(size_t)param_3);
                if ((iVar6 != 0) || (param_4 == (X509 *)0x0)) {
                  a = (X509 *)((int64_t)&MACH_HEADER.magic + 1);
                  bVar3 = true;
                  if (iVar6 != 0) goto LAB_010cc469;
                  goto LAB_010cc642;
                }
                iVar5 = 1;
                goto LAB_010cc624;
              }
              goto LAB_010cc469;
            }
          }
          bVar3 = true;
        }
LAB_010cc469:
        iVar14 = iVar14 + 1;
        iVar6 = _OPENSSL_sk_num();
        if (iVar6 <= iVar14) goto LAB_010cc4e1;
        goto LAB_010cc478;
      }
      bVar3 = false;
      iVar14 = 0;
      do {
        piVar10 = (int *)_OPENSSL_sk_value();
        if (*piVar10 == iVar8) {
          piVar10 = *(int **)(piVar10 + 2);
          if (((*(int64_t *)(piVar10 + 2) == 0) || (*piVar10 == 0)) ||
             (bVar3 = true, piVar10[1] != local_48)) {
            bVar3 = true;
          }
          else {
            param_3 = (int *)(uint64_t)param_1;
            a = param_2;
            iVar5 = (*local_70)(param_2,arg1);
            if ((0 < iVar5) && (param_4 != (X509 *)0x0)) {
LAB_010cc624:
              pXVar12 = (X509_CINF *)_CRYPTO_strndup(0x31e,"crypto/x509v3/v3_utl.c");
              param_4->cert_info = pXVar12;
              a = param_4;
LAB_010cc642:
              _GENERAL_NAMES_free((GENERAL_NAMES *)a);
              return iVar5;
            }
            if (iVar5 != 0) goto LAB_010cc642;
          }
        }
        iVar14 = iVar14 + 1;
        iVar5 = _OPENSSL_sk_num();
      } while (iVar14 < iVar5);
    }
LAB_010cc4e1:
    _GENERAL_NAMES_free((GENERAL_NAMES *)a);
    if ((bVar3) && ((param_1 & 1) == 0)) {
      return 0;
    }
  }
  if ((bool)(bVar2 & (param_1 & 0x20) == 0)) {
    _X509_get_subject_name(a);
    in = (ASN1_STRING *)0xffffffff;
    while (uVar7 = _X509_NAME_get_index_by_NID((X509_NAME *)a,(int)in,(int)param_3), -1 < (int)uVar7
          ) {
      _X509_NAME_get_entry((X509_NAME *)a,(int)in);
      pAVar11 = _X509_NAME_ENTRY_get_data((X509_NAME_ENTRY *)a);
      iVar8 = 0;
      if ((pAVar11->data != (uchar *)0x0) && (pAVar11->length != 0)) {
        iVar8 = _ASN1_STRING_to_UTF8((uchar **)a,in);
        if (iVar8 < 0) {
          return -1;
        }
        param_3 = (int *)(uint64_t)param_1;
        a = param_2;
        iVar8 = (*local_70)(param_2,arg1);
        if ((0 < iVar8) && (param_4 != (X509 *)0x0)) {
          pXVar12 = (X509_CINF *)_CRYPTO_strndup(0x32c,"crypto/x509v3/v3_utl.c");
          param_4->cert_info = pXVar12;
          a = param_4;
        }
        _CRYPTO_free(a);
      }
      in = (ASN1_STRING *)(uint64_t)uVar7;
      if (iVar8 != 0) {
        return iVar8;
      }
    }
  }
  return 0;
}

