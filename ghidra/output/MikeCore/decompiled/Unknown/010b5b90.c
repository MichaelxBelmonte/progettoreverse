// Function: FUN_010b5b90
// Address: 010b5b90
// Size: 1407 bytes
// Class: Unknown


undefined8 FUN_010b5b90(undefined8 param_1,undefined8 param_2,int *param_3,uint *param_4)

{
  longlong lVar1;
  int *piVar2;
  byte *pbVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  void *pvVar9;
  longlong lVar10;
  void *pvVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  ASN1_INTEGER *a;
  ASN1_OBJECT *pAVar15;
  byte bVar16;
  char cVar17;
  undefined8 uVar18;
  longlong *unaff_RSI;
  int unaff_EDI;
  int local_38;
  int local_34;
  
  uVar18 = 1;
  if (4 < unaff_EDI - 1U) {
    return 1;
  }
  lVar1 = *unaff_RSI;
  a = (ASN1_INTEGER *)
      ((longlong)&switchD_010b5bc3::switchdataD_010b6130 +
      (longlong)(int)(&switchD_010b5bc3::switchdataD_010b6130)[unaff_EDI - 1U]);
  switch(unaff_EDI) {
  case 2:
    break;
  case 3:
    pcVar4 = *(code **)(*(longlong *)(lVar1 + 0xd0) + 0x10);
    if ((pcVar4 == (code *)0x0) || (iVar5 = (*pcVar4)(), iVar5 != 0)) {
      _AUTHORITY_KEYID_free((AUTHORITY_KEYID *)a);
      _ISSUING_DIST_POINT_free();
      _ASN1_INTEGER_free(a);
      _ASN1_INTEGER_free(a);
      _OPENSSL_sk_pop_free();
      return 1;
    }
    goto LAB_010b611b;
  case 4:
    pcVar4 = *(code **)(*(longlong *)(lVar1 + 0xd0) + 0x10);
    if ((pcVar4 != (code *)0x0) && (iVar5 = (*pcVar4)(), iVar5 == 0)) goto LAB_010b611b;
    _AUTHORITY_KEYID_free((AUTHORITY_KEYID *)a);
    _ISSUING_DIST_POINT_free();
    _ASN1_INTEGER_free(a);
    _ASN1_INTEGER_free(a);
    _OPENSSL_sk_pop_free();
  case 1:
    *(undefined8 *)(lVar1 + 0x84) = 0;
    *(undefined8 *)(lVar1 + 0x8c) = 0;
    *(undefined8 *)(lVar1 + 0x94) = 0;
    *(undefined4 *)(lVar1 + 0x9c) = 0x807f;
    *(undefined8 *)(lVar1 + 0xd0) = DAT_0278bb68;
    *(undefined8 *)(lVar1 + 0xd8) = 0;
    *(undefined8 *)(lVar1 + 0xa0) = 0;
    *(undefined8 *)(lVar1 + 0xa8) = 0;
    *(undefined8 *)(lVar1 + 0xb0) = 0;
    break;
  case 5:
    _EVP_sha1();
    iVar5 = _X509_CRL_digest((X509_CRL *)0x0,(EVP_MD *)(lVar1 + 0xb8),(uchar *)param_3,param_4);
    if (iVar5 == 0) {
      *(byte *)(lVar1 + 0x84) = *(byte *)(lVar1 + 0x84) | 0x80;
    }
    pvVar9 = _X509_CRL_get_ext_d2i((X509_CRL *)0x0,(int)&local_34,param_3,(int *)param_4);
    *(void **)(lVar1 + 0x90) = pvVar9;
    if (pvVar9 == (void *)0x0) {
      if (local_34 != -1) goto LAB_010b5e2f;
    }
    else {
      uVar14 = *(uint *)(lVar1 + 0x98);
      uVar13 = uVar14 | 1;
      *(uint *)(lVar1 + 0x98) = uVar13;
      cVar17 = 0 < *(int *)((longlong)pvVar9 + 8);
      if ((bool)cVar17) {
        uVar13 = uVar14 | 5;
        *(uint *)(lVar1 + 0x98) = uVar13;
      }
      if (0 < *(int *)((longlong)pvVar9 + 0xc)) {
        cVar17 = cVar17 + '\x01';
        uVar13 = uVar13 | 8;
        *(uint *)(lVar1 + 0x98) = uVar13;
      }
      iVar5 = *(int *)((longlong)pvVar9 + 0x1c);
      uVar14 = uVar13 | 0x10;
      if (iVar5 < 1) {
        uVar14 = uVar13;
      }
      bVar16 = (0 < iVar5) + cVar17;
      uVar13 = uVar14 | 2;
      if (bVar16 < 2) {
        uVar13 = uVar14;
      }
      if ((0 < iVar5) || (1 < bVar16)) {
        *(uint *)(lVar1 + 0x98) = uVar13;
      }
      if (0 < *(int *)((longlong)pvVar9 + 0x18)) {
        uVar13 = uVar13 | 0x20;
        *(uint *)(lVar1 + 0x98) = uVar13;
      }
      piVar2 = *(int **)((longlong)pvVar9 + 0x10);
      if (piVar2 != (int *)0x0) {
        *(uint *)(lVar1 + 0x98) = uVar13 | 0x40;
        iVar5 = *piVar2;
        if (iVar5 < 1) {
          uVar14 = *(uint *)(lVar1 + 0x9c);
        }
        else {
          pbVar3 = *(byte **)(piVar2 + 2);
          bVar16 = *pbVar3;
          uVar14 = (uint)bVar16;
          *(uint *)(lVar1 + 0x9c) = (uint)bVar16;
          if (iVar5 != 1) {
            uVar14 = (uint)CONCAT11(pbVar3[1],bVar16);
          }
        }
        *(uint *)(lVar1 + 0x9c) = uVar14 & 0x807f;
      }
      _X509_CRL_get_issuer();
      iVar5 = _DIST_POINT_set_dpname();
      if (iVar5 == 0) {
LAB_010b5e2f:
        *(byte *)(lVar1 + 0x84) = *(byte *)(lVar1 + 0x84) | 0x80;
      }
    }
    pvVar9 = _X509_CRL_get_ext_d2i((X509_CRL *)0x0,(int)&local_34,param_3,(int *)param_4);
    *(void **)(lVar1 + 0x88) = pvVar9;
    if ((pvVar9 == (void *)0x0) && (local_34 != -1)) {
      *(byte *)(lVar1 + 0x84) = *(byte *)(lVar1 + 0x84) | 0x80;
    }
    pvVar9 = _X509_CRL_get_ext_d2i((X509_CRL *)0x0,(int)&local_34,param_3,(int *)param_4);
    *(void **)(lVar1 + 0xa0) = pvVar9;
    if ((pvVar9 == (void *)0x0) && (local_34 != -1)) {
      *(byte *)(lVar1 + 0x84) = *(byte *)(lVar1 + 0x84) | 0x80;
    }
    pAVar15 = (ASN1_OBJECT *)0x0;
    pvVar9 = _X509_CRL_get_ext_d2i((X509_CRL *)0x0,(int)&local_34,param_3,(int *)param_4);
    *(void **)(lVar1 + 0xa8) = pvVar9;
    if (((pvVar9 == (void *)0x0) && (local_34 != -1)) ||
       ((pvVar9 != (void *)0x0 && (*(longlong *)(lVar1 + 0xa0) == 0)))) {
      *(byte *)(lVar1 + 0x84) = *(byte *)(lVar1 + 0x84) | 0x80;
    }
    iVar5 = _OPENSSL_sk_num();
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        _OPENSSL_sk_value();
        _X509_EXTENSION_get_object((X509_EXTENSION *)pAVar15);
        iVar6 = _OBJ_obj2nid(pAVar15);
        if (iVar6 == 0x359) {
          *(byte *)(lVar1 + 0x85) = *(byte *)(lVar1 + 0x85) | 0x10;
        }
        iVar7 = _X509_EXTENSION_get_critical((X509_EXTENSION *)pAVar15);
        if ((((iVar7 != 0) && (iVar6 != 0x5a)) && (iVar6 != 0x8c)) && (iVar6 != 0x302)) {
          *(byte *)(lVar1 + 0x85) = *(byte *)(lVar1 + 0x85) | 2;
          break;
        }
        iVar5 = iVar5 + 1;
        iVar6 = _OPENSSL_sk_num();
      } while (iVar5 < iVar6);
    }
    _X509_CRL_get_REVOKED();
    iVar5 = _OPENSSL_sk_num();
    if (0 < iVar5) {
      iVar5 = 0;
      pvVar9 = (void *)0x0;
      do {
        lVar10 = _OPENSSL_sk_value();
        pvVar11 = _X509_REVOKED_get_ext_d2i
                            ((X509_REVOKED *)0x0,(int)&local_38,param_3,(int *)param_4);
        if ((pvVar11 == (void *)0x0) && (local_38 != -1)) {
LAB_010b60e8:
          *(byte *)(lVar1 + 0x84) = *(byte *)(lVar1 + 0x84) | 0x80;
          break;
        }
        if (pvVar11 != (void *)0x0) {
          if (*(longlong *)(lVar1 + 0xb0) == 0) {
            lVar12 = _OPENSSL_sk_new_null();
            *(longlong *)(lVar1 + 0xb0) = lVar12;
            if (lVar12 == 0) goto LAB_010b611b;
          }
          iVar6 = _OPENSSL_sk_push();
          pvVar9 = pvVar11;
          if (iVar6 == 0) goto LAB_010b611b;
        }
        *(void **)(lVar10 + 0x28) = pvVar9;
        pAVar15 = (ASN1_OBJECT *)0x0;
        pvVar11 = _X509_REVOKED_get_ext_d2i
                            ((X509_REVOKED *)0x0,(int)&local_38,param_3,(int *)param_4);
        if ((pvVar11 == (void *)0x0) && (local_38 != -1)) goto LAB_010b60e8;
        if (pvVar11 == (void *)0x0) {
          *(undefined4 *)(lVar10 + 0x30) = 0xffffffff;
        }
        else {
          lVar8 = _ASN1_ENUMERATED_get((ASN1_ENUMERATED *)pAVar15);
          *(long *)(lVar10 + 0x30) = lVar8;
          _ASN1_ENUMERATED_free((ASN1_ENUMERATED *)pAVar15);
        }
        local_38 = 0;
        iVar6 = _OPENSSL_sk_num();
        if (0 < iVar6) {
          do {
            _OPENSSL_sk_value();
            iVar6 = _X509_EXTENSION_get_critical((X509_EXTENSION *)pAVar15);
            if (iVar6 != 0) {
              _X509_EXTENSION_get_object((X509_EXTENSION *)pAVar15);
              iVar6 = _OBJ_obj2nid(pAVar15);
              if (iVar6 != 0x303) {
                *(byte *)(lVar1 + 0x85) = *(byte *)(lVar1 + 0x85) | 2;
                break;
              }
            }
            iVar7 = local_38 + 1;
            local_38 = iVar7;
            iVar6 = _OPENSSL_sk_num();
          } while (iVar7 < iVar6);
        }
        iVar5 = iVar5 + 1;
        iVar6 = _OPENSSL_sk_num();
      } while (iVar5 < iVar6);
    }
    pcVar4 = *(code **)(*(longlong *)(lVar1 + 0xd0) + 8);
    if ((pcVar4 == (code *)0x0) || (iVar5 = (*pcVar4)(), iVar5 != 0)) {
      *(byte *)(lVar1 + 0x85) = *(byte *)(lVar1 + 0x85) | 1;
      return 1;
    }
LAB_010b611b:
    uVar18 = 0;
  }
  return uVar18;
}


