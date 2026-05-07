// Function: FUN_010c8a20
// Address: 010c8a20
// Size: 1797 bytes
// Class: GNString


void FUN_010c8a20(undefined8 param_1,undefined8 param_2,int *param_3,uint *param_4)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  long lVar5;
  longlong lVar6;
  int *piVar7;
  undefined4 extraout_var;
  longlong *plVar8;
  undefined4 extraout_var_00;
  undefined8 uVar9;
  void *pvVar10;
  undefined8 *puVar11;
  uint uVar12;
  ASN1_INTEGER *a;
  X509 *pXVar13;
  ASN1_BIT_STRING *pAVar14;
  ASN1_OBJECT *pAVar15;
  ASN1_OBJECT *pAVar16;
  X509_NAME *b;
  int iVar17;
  longlong unaff_RDI;
  int local_38;
  int local_34;
  
  if (*(int *)(unaff_RDI + 0x158) != 0) {
    return;
  }
  _CRYPTO_THREAD_write_lock();
  if ((*(byte *)(unaff_RDI + 0xe1) & 1) != 0) {
    _CRYPTO_THREAD_unlock();
    return;
  }
  puVar1 = (uint *)(unaff_RDI + 0xe0);
  _EVP_sha1();
  iVar4 = _X509_digest((X509 *)0x0,(EVP_MD *)(unaff_RDI + 0x130),(uchar *)param_3,param_4);
  if (iVar4 == 0) {
    *puVar1 = *puVar1 | 0x100080;
    lVar6 = _X509_get_version();
  }
  else {
    lVar6 = _X509_get_version();
  }
  if (lVar6 == 0) {
    *(byte *)puVar1 = *(byte *)puVar1 | 0x40;
  }
  a = (ASN1_INTEGER *)0x0;
  piVar7 = _X509_get_ext_d2i((X509 *)0x0,(int)&local_34,param_3,(int *)param_4);
  if (piVar7 == (int *)0x0) {
    uVar12 = 0x80;
    if (local_34 != -1) goto LAB_010c8b5d;
  }
  else {
    if (*piVar7 != 0) {
      *(byte *)puVar1 = *(byte *)puVar1 | 0x10;
    }
    if (*(longlong *)(piVar7 + 2) == 0) {
      *(undefined8 *)(unaff_RDI + 0xd0) = 0xffffffffffffffff;
    }
    else {
      if (*(int *)(*(longlong *)(piVar7 + 2) + 4) != 0x102) {
        lVar5 = _ASN1_INTEGER_get(a);
        *(longlong *)(unaff_RDI + 0xd0) = CONCAT44(extraout_var,lVar5);
        if ((*piVar7 != 0) || (CONCAT44(extraout_var,lVar5) == 0)) goto LAB_010c8b50;
      }
      *(byte *)(unaff_RDI + 0xe0) = *(byte *)(unaff_RDI + 0xe0) | 0x80;
      *(undefined8 *)(unaff_RDI + 0xd0) = 0;
    }
LAB_010c8b50:
    _BASIC_CONSTRAINTS_free((BASIC_CONSTRAINTS *)a);
    uVar12 = 1;
LAB_010c8b5d:
    *puVar1 = *puVar1 | uVar12;
  }
  pXVar13 = (X509 *)0x0;
  plVar8 = _X509_get_ext_d2i((X509 *)0x0,(int)&local_34,param_3,(int *)param_4);
  if (plVar8 == (longlong *)0x0) {
    uVar12 = 0x80;
    if (local_34 == -1) goto LAB_010c8bef;
  }
  else {
    if ((((*(byte *)puVar1 & 0x10) != 0) ||
        (iVar4 = _X509_get_ext_by_NID(pXVar13,-1,(int)param_3), -1 < iVar4)) ||
       (iVar4 = _X509_get_ext_by_NID(pXVar13,-1,(int)param_3), -1 < iVar4)) {
      *(byte *)puVar1 = *(byte *)puVar1 | 0x80;
    }
    if (*plVar8 == 0) {
      uVar9 = 0xffffffffffffffff;
    }
    else {
      lVar5 = _ASN1_INTEGER_get((ASN1_INTEGER *)pXVar13);
      uVar9 = CONCAT44(extraout_var_00,lVar5);
    }
    *(undefined8 *)(unaff_RDI + 0xd8) = uVar9;
    _PROXY_CERT_INFO_EXTENSION_free((PROXY_CERT_INFO_EXTENSION *)pXVar13);
    uVar12 = 0x400;
  }
  *puVar1 = *puVar1 | uVar12;
LAB_010c8bef:
  pAVar14 = (ASN1_BIT_STRING *)0x0;
  piVar7 = _X509_get_ext_d2i((X509 *)0x0,(int)&local_34,param_3,(int *)param_4);
  if (piVar7 == (int *)0x0) {
    if (local_34 != -1) {
      *(byte *)puVar1 = *(byte *)puVar1 | 0x80;
    }
  }
  else {
    iVar4 = *piVar7;
    if (iVar4 < 1) {
      *(undefined4 *)(unaff_RDI + 0xe4) = 0;
    }
    else {
      pbVar3 = *(byte **)(piVar7 + 2);
      bVar2 = *pbVar3;
      pAVar14 = (ASN1_BIT_STRING *)(ulonglong)bVar2;
      *(uint *)(unaff_RDI + 0xe4) = (uint)bVar2;
      if (iVar4 != 1) {
        *(uint *)(unaff_RDI + 0xe4) = (uint)CONCAT11(pbVar3[1],bVar2);
      }
    }
    *(byte *)puVar1 = *(byte *)puVar1 | 2;
    _ASN1_BIT_STRING_free(pAVar14);
  }
  *(undefined4 *)(unaff_RDI + 0xe8) = 0;
  pAVar16 = (ASN1_OBJECT *)0x0;
  pvVar10 = _X509_get_ext_d2i((X509 *)0x0,(int)&local_34,param_3,(int *)param_4);
  if (pvVar10 == (void *)0x0) {
    if (local_34 != -1) {
      *(byte *)puVar1 = *(byte *)puVar1 | 0x80;
    }
  }
  else {
    *(byte *)puVar1 = *(byte *)puVar1 | 4;
    local_34 = 0;
    iVar4 = _OPENSSL_sk_num();
    if (0 < iVar4) {
      do {
        _OPENSSL_sk_value();
        iVar4 = _OBJ_obj2nid(pAVar16);
        pAVar15 = (ASN1_OBJECT *)(ulonglong)(iVar4 - 0x81U);
        if (0x33 < iVar4 - 0x81U) {
          pAVar16 = pAVar15;
          if (iVar4 == 0x129) {
            uVar12 = 0x80;
          }
          else {
            if (iVar4 != 0x38e) goto switchD_010c8cf6_caseD_86;
            uVar12 = 0x100;
          }
          goto switchD_010c8cf6_caseD_81;
        }
        uVar12 = 1;
        pAVar16 = (ASN1_OBJECT *)
                  ((longlong)&switchD_010c8cf6::switchdataD_010c9148 +
                  (longlong)(int)(&switchD_010c8cf6::switchdataD_010c9148)[(longlong)pAVar15]);
        switch(pAVar15) {
        case (ASN1_OBJECT *)0x0:
          break;
        case (ASN1_OBJECT *)0x1:
          uVar12 = 2;
          break;
        case (ASN1_OBJECT *)0x2:
          uVar12 = 8;
          break;
        case (ASN1_OBJECT *)0x3:
          uVar12 = 4;
          break;
        case (ASN1_OBJECT *)0x4:
          uVar12 = 0x40;
          break;
        default:
          goto switchD_010c8cf6_caseD_86;
        case (ASN1_OBJECT *)0x8:
        case (ASN1_OBJECT *)0xa:
          uVar12 = 0x10;
          break;
        case (ASN1_OBJECT *)0x33:
          uVar12 = 0x20;
        }
switchD_010c8cf6_caseD_81:
        *(uint *)(unaff_RDI + 0xe8) = *(uint *)(unaff_RDI + 0xe8) | uVar12;
switchD_010c8cf6_caseD_86:
        iVar17 = local_34 + 1;
        local_34 = iVar17;
        iVar4 = _OPENSSL_sk_num();
      } while (iVar17 < iVar4);
    }
    _OPENSSL_sk_pop_free();
  }
  uVar12 = 0;
  pAVar14 = (ASN1_BIT_STRING *)0x0;
  piVar7 = _X509_get_ext_d2i((X509 *)0x0,(int)&local_34,param_3,(int *)param_4);
  if (piVar7 == (int *)0x0) {
    if (local_34 != -1) {
      *(byte *)puVar1 = *(byte *)puVar1 | 0x80;
    }
  }
  else {
    if (0 < *piVar7) {
      pAVar14 = *(ASN1_BIT_STRING **)(piVar7 + 2);
      uVar12 = (uint)(byte)pAVar14->length;
    }
    *(uint *)(unaff_RDI + 0xec) = uVar12;
    *(byte *)(unaff_RDI + 0xe0) = *(byte *)(unaff_RDI + 0xe0) | 8;
    _ASN1_BIT_STRING_free(pAVar14);
  }
  pvVar10 = _X509_get_ext_d2i((X509 *)0x0,(int)&local_34,param_3,(int *)param_4);
  *(void **)(unaff_RDI + 0xf0) = pvVar10;
  if ((pvVar10 == (void *)0x0) && (local_34 != -1)) {
    *(byte *)puVar1 = *(byte *)puVar1 | 0x80;
  }
  b = (X509_NAME *)&local_34;
  pXVar13 = (X509 *)0x0;
  pvVar10 = _X509_get_ext_d2i((X509 *)0x0,(int)b,param_3,(int *)param_4);
  *(void **)(unaff_RDI + 0xf8) = pvVar10;
  if ((pvVar10 == (void *)0x0) && (local_34 != -1)) {
    *(byte *)puVar1 = *(byte *)puVar1 | 0x80;
  }
  _X509_get_subject_name(pXVar13);
  _X509_get_issuer_name(pXVar13);
  iVar4 = _X509_NAME_cmp((X509_NAME *)pXVar13,b);
  if (iVar4 == 0) {
    *(byte *)(unaff_RDI + 0xe0) = *(byte *)(unaff_RDI + 0xe0) | 0x20;
    iVar4 = _X509_check_akid();
    if (iVar4 == 0) {
      _X509_get0_pubkey();
      iVar4 = FUN_010c9b00();
      if (iVar4 == 0) {
        *(byte *)(unaff_RDI + 0xe1) = *(byte *)(unaff_RDI + 0xe1) | 0x20;
      }
    }
  }
  pvVar10 = _X509_get_ext_d2i((X509 *)0x0,(int)&local_34,param_3,(int *)param_4);
  *(void **)(unaff_RDI + 0x110) = pvVar10;
  if ((pvVar10 == (void *)0x0) && (local_34 != -1)) {
    *(byte *)puVar1 = *(byte *)puVar1 | 0x80;
  }
  pvVar10 = _X509_get_ext_d2i((X509 *)0x0,(int)&local_34,param_3,(int *)param_4);
  *(void **)(unaff_RDI + 0x118) = pvVar10;
  if ((pvVar10 == (void *)0x0) && (local_34 != -1)) {
    *(byte *)puVar1 = *(byte *)puVar1 | 0x80;
  }
  pXVar13 = (X509 *)0x0;
  pvVar10 = _X509_get_ext_d2i((X509 *)0x0,(int)&local_38,param_3,(int *)param_4);
  *(void **)(unaff_RDI + 0x108) = pvVar10;
  if ((pvVar10 == (void *)0x0) && (local_38 != -1)) {
LAB_010c8eca:
    *(byte *)puVar1 = *(byte *)puVar1 | 0x80;
  }
  else {
    local_38 = 0;
    iVar4 = _OPENSSL_sk_num();
    if (0 < iVar4) {
      do {
        puVar11 = (undefined8 *)_OPENSSL_sk_value();
        piVar7 = (int *)puVar11[1];
        if (piVar7 == (int *)0x0) {
          *(undefined4 *)(puVar11 + 3) = 0x807f;
          piVar7 = (int *)*puVar11;
        }
        else {
          iVar4 = *piVar7;
          if (iVar4 < 1) {
            uVar12 = *(uint *)(puVar11 + 3);
          }
          else {
            pbVar3 = *(byte **)(piVar7 + 2);
            bVar2 = *pbVar3;
            uVar12 = (uint)bVar2;
            *(uint *)(puVar11 + 3) = (uint)bVar2;
            if (iVar4 != 1) {
              uVar12 = (uint)CONCAT11(pbVar3[1],bVar2);
            }
          }
          pXVar13 = (X509 *)(ulonglong)(uVar12 & 0x807f);
          *(uint *)(puVar11 + 3) = uVar12 & 0x807f;
          piVar7 = (int *)*puVar11;
        }
        if ((piVar7 != (int *)0x0) && (*piVar7 == 1)) {
          iVar4 = _OPENSSL_sk_num();
          if (0 < iVar4) {
            iVar4 = 0;
            do {
              piVar7 = (int *)_OPENSSL_sk_value();
              if (*piVar7 == 4) {
                if (*(longlong *)(piVar7 + 2) != 0) goto LAB_010c903b;
                break;
              }
              iVar4 = iVar4 + 1;
              iVar17 = _OPENSSL_sk_num();
            } while (iVar4 < iVar17);
          }
          _X509_get_issuer_name(pXVar13);
LAB_010c903b:
          iVar4 = _DIST_POINT_set_dpname();
          if (iVar4 == 0) goto LAB_010c8eca;
        }
        iVar17 = local_38 + 1;
        local_38 = iVar17;
        iVar4 = _OPENSSL_sk_num();
      } while (iVar17 < iVar4);
    }
  }
  pvVar10 = _X509_get_ext_d2i((X509 *)0x0,(int)&local_34,param_3,(int *)param_4);
  *(void **)(unaff_RDI + 0x120) = pvVar10;
  if ((pvVar10 == (void *)0x0) && (local_34 != -1)) {
    *(byte *)puVar1 = *(byte *)puVar1 | 0x80;
  }
  piVar7 = &local_34;
  pXVar13 = (X509 *)0x0;
  pvVar10 = _X509_get_ext_d2i((X509 *)0x0,(int)piVar7,param_3,(int *)param_4);
  *(void **)(unaff_RDI + 0x128) = pvVar10;
  if ((pvVar10 == (void *)0x0) && (local_34 != -1)) {
    *(byte *)puVar1 = *(byte *)puVar1 | 0x80;
  }
  local_34 = 0;
  iVar4 = _X509_get_ext_count(pXVar13);
  if (0 < iVar4) {
    do {
      _X509_get_ext(pXVar13,(int)piVar7);
      _X509_EXTENSION_get_object((X509_EXTENSION *)pXVar13);
      iVar4 = _OBJ_obj2nid((ASN1_OBJECT *)pXVar13);
      if (iVar4 == 0x359) {
        *(byte *)(unaff_RDI + 0xe1) = *(byte *)(unaff_RDI + 0xe1) | 0x10;
      }
      iVar4 = _X509_EXTENSION_get_critical((X509_EXTENSION *)pXVar13);
      if (iVar4 != 0) {
        _X509_EXTENSION_get_object((X509_EXTENSION *)pXVar13);
        iVar4 = _OBJ_obj2nid((ASN1_OBJECT *)pXVar13);
        if (iVar4 != 0) {
          piVar7 = (int *)((longlong)&MACH_HEADER.filetype + 2);
          pXVar13 = (X509 *)&MACH_HEADER.cputype;
          lVar6 = _OBJ_bsearch_(4,0xe,FUN_010ca330);
          if (lVar6 != 0) goto LAB_010c8f60;
        }
        *(byte *)(unaff_RDI + 0xe1) = *(byte *)(unaff_RDI + 0xe1) | 2;
        break;
      }
LAB_010c8f60:
      iVar17 = local_34 + 1;
      local_34 = iVar17;
      iVar4 = _X509_get_ext_count(pXVar13);
    } while (iVar17 < iVar4);
  }
  _x509_init_sig_info();
  *(byte *)(unaff_RDI + 0xe1) = *(byte *)(unaff_RDI + 0xe1) | 1;
  *(undefined4 *)(unaff_RDI + 0x158) = 1;
  _CRYPTO_THREAD_unlock();
  return;
}


