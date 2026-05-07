// Function: FUN_010c73b0
// Address: 010c73b0
// Size: 1688 bytes
// Class: Unknown
// String references:
//   "file:"
//   "pathlen"
//   "section:"
//   ",name:"
//   ",value:"
//   "crypto/x509v3/v3_pci.c"
//   "language"
//   "hex:"
//   "text:"
//   "policy"


undefined8 FUN_010c73b0(BIO *param_1,ASN1_INTEGER **param_2,char *param_3,char *param_4)

{
  longlong lVar1;
  BIO_METHOD *pBVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  BIO_METHOD *pBVar6;
  ASN1_OBJECT *pAVar7;
  longlong lVar8;
  BIO *pBVar9;
  undefined4 extraout_var;
  void *pvVar10;
  BIO *b;
  char *pcVar11;
  ASN1_INTEGER **aint;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar12;
  undefined8 uVar13;
  char *local_848;
  int local_840;
  undefined4 uStackY_83c;
  int in_stack_fffffffffffff7c8;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  b = param_1;
  aint = param_2;
  iVar3 = _strcmp((char *)param_1,(char *)param_2);
  if (iVar3 == 0) {
    if (*unaff_RSI == 0) {
      pAVar7 = _OBJ_txt2obj((char *)b,(int)aint);
      *unaff_RSI = (longlong)pAVar7;
      uVar13 = 1;
      if (pAVar7 == (ASN1_OBJECT *)0x0) {
        _ERR_put_error(0x201ea51,0x6e,100,param_4,in_stack_fffffffffffff7c8);
        _ERR_add_error_data(0x201e68a,*unaff_RDI,unaff_RDI[1],",value:");
        uVar13 = 0;
      }
      goto LAB_010c7554;
    }
    iVar3 = 0x9b;
    iVar12 = 0x5e;
  }
  else {
    iVar3 = _strcmp((char *)b,(char *)aint);
    if (iVar3 != 0) {
      iVar3 = _strcmp((char *)b,(char *)aint);
      uVar13 = 1;
      if (iVar3 != 0) goto LAB_010c7554;
      pBVar2 = param_1->method;
      if (pBVar2 == (BIO_METHOD *)0x0) {
        pBVar6 = (BIO_METHOD *)_ASN1_OCTET_STRING_new();
        param_1->method = pBVar6;
        if (pBVar6 == (BIO_METHOD *)0x0) {
          iVar3 = 0x41;
          iVar12 = 0x7b;
          goto LAB_010c751b;
        }
      }
      iVar3 = _strncmp((char *)b,(char *)&MACH_HEADER.cputype,(size_t)param_3);
      if (iVar3 == 0) {
        lVar8 = _OPENSSL_hexstr2buf();
        if (lVar8 != 0) {
          pvVar10 = (void *)((longlong)&section_00000068.addr + 3);
          pcVar11 = _CRYPTO_realloc((void *)((longlong)&section_00000068.addr + 3),0x201ea51,param_3
                                    ,(int)param_4);
          if (pcVar11 != (char *)0x0) {
            pBVar2 = param_1->method;
            pBVar2->name = pcVar11;
            _memcpy(pBVar2,(void *)CONCAT44(uStackY_83c,local_840),(size_t)param_3);
            pBVar2 = param_1->method;
            iVar3 = pBVar2->type + local_840;
            pBVar2->type = iVar3;
            pBVar2->name[iVar3] = '\0';
            _CRYPTO_free((void *)(longlong)iVar3);
            goto LAB_010c7554;
          }
          _CRYPTO_free(pvVar10);
          _CRYPTO_free(pvVar10);
          param_1->method->name = (char *)0x0;
          param_1->method->type = 0;
          iVar3 = 0x41;
          iVar12 = 0x9b;
          goto LAB_010c7950;
        }
      }
      else {
        pcVar11 = (char *)((longlong)&MACH_HEADER.cputype + 1);
        iVar3 = _strncmp((char *)b,(char *)((longlong)&MACH_HEADER.cputype + 1),(size_t)param_3);
        if (iVar3 == 0) {
          pBVar9 = _BIO_new_file((char *)b,pcVar11);
          if (pBVar9 == (BIO *)0x0) {
            iVar3 = 0x20;
            iVar12 = 0xa5;
          }
          else {
            local_848 = (char *)0x0;
            do {
              while( true ) {
                iVar3 = 0x800;
                uVar4 = _BIO_read(b,&section_000007e0.addr,(int)param_3);
                if ((int)uVar4 < 1) break;
                pvVar10 = (void *)((longlong)&section_00000068.reserved1 + 3);
                local_848 = _CRYPTO_realloc((void *)((longlong)&section_00000068.reserved1 + 3),
                                            0x201ea51,param_3,(int)param_4);
                if (local_848 == (char *)0x0) {
                  _CRYPTO_free(pvVar10);
                  param_1->method->name = (char *)0x0;
                  param_1->method->type = 0;
                  _ERR_put_error(0x201ea51,0x41,0xb6,param_4,in_stack_fffffffffffff7c8);
                  pcVar11 = ",name:";
                  _ERR_add_error_data(0x201e68a,*unaff_RDI,unaff_RDI[1],",value:");
                  _BIO_free_all((BIO *)pcVar11);
                  goto joined_r0x010c7a38;
                }
                param_1->method->name = local_848;
                _memcpy(pvVar10,(void *)(ulonglong)uVar4,(size_t)param_3);
                pBVar6 = param_1->method;
                b = (BIO *)(longlong)pBVar6->type;
                lVar8 = (longlong)&b->method + (longlong)(int)uVar4;
                pBVar6->type = (int)lVar8;
                pBVar6->name[lVar8] = '\0';
              }
              if (uVar4 != 0) {
                _BIO_free_all(b);
                iVar3 = 0x20;
                iVar12 = 0xc4;
                goto LAB_010c7950;
              }
              iVar3 = _BIO_test_flags(b,iVar3);
            } while (iVar3 != 0);
            _BIO_free_all(b);
            if (local_848 != (char *)0x0) goto LAB_010c7554;
            iVar3 = 0x41;
            iVar12 = 0xe5;
          }
        }
        else {
          iVar3 = _strncmp((char *)b,(char *)((longlong)&MACH_HEADER.cputype + 1),(size_t)param_3);
          if (iVar3 == 0) {
            sVar5 = _strlen((char *)b);
            pcVar11 = _CRYPTO_realloc(section_000000b8.segname + 3,0x201ea51,param_3,(int)param_4);
            pBVar6 = param_1->method;
            if (pcVar11 != (char *)0x0) {
              pBVar6->name = pcVar11;
              _memcpy(pBVar6,(void *)CONCAT44(extraout_var,sVar5),(size_t)param_3);
              pBVar2 = param_1->method;
              iVar3 = sVar5 + pBVar2->type;
              pBVar2->type = iVar3;
              pBVar2->name[iVar3] = '\0';
              goto LAB_010c7554;
            }
            _CRYPTO_free(pBVar6);
            param_1->method->name = (char *)0x0;
            param_1->method->type = 0;
            iVar3 = 0x41;
            iVar12 = 0xda;
          }
          else {
            iVar3 = 0x98;
            iVar12 = 0xe0;
          }
        }
LAB_010c7950:
        _ERR_put_error(0x201ea51,iVar3,iVar12,param_4,in_stack_fffffffffffff7c8);
      }
      pcVar11 = ",name:";
      _ERR_add_error_data(0x201e68a,*unaff_RDI,unaff_RDI[1],",value:");
joined_r0x010c7a38:
      uVar13 = 0;
      if (pBVar2 == (BIO_METHOD *)0x0) {
        uVar13 = 0;
        _ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)pcVar11);
        param_1->method = (BIO_METHOD *)0x0;
      }
      goto LAB_010c7554;
    }
    if (*param_2 == (ASN1_INTEGER *)0x0) {
      iVar3 = _X509V3_get_value_int((CONF_VALUE *)b,aint);
      uVar13 = 1;
      if (iVar3 != 0) goto LAB_010c7554;
      iVar3 = 0x9c;
      iVar12 = 0x71;
    }
    else {
      iVar3 = 0x9d;
      iVar12 = 0x6b;
    }
  }
LAB_010c751b:
  _ERR_put_error(0x201ea51,iVar3,iVar12,param_4,in_stack_fffffffffffff7c8);
  uVar13 = 0;
  _ERR_add_error_data(0x201e68a,*unaff_RDI,unaff_RDI[1],",value:");
LAB_010c7554:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


