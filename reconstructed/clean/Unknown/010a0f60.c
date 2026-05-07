// Function: FUN_010a0f60
// Address: 010a0f60
// Size: 511 bytes
// Class: Unknown
// String references:
//   "ENCRYPTED PRIVATE KEY"
//   "PRIVATE KEY"
//   "crypto/store/loader_file.c"
//   "PKCS8 decrypt password"

int64_t FUN_010a0f60(X509_SIG **param_1,char *param_2,long param_3,uchar *param_4)

{
  int64_t lVar1;
  int iVar2;
  size_t sVar3;
  X509_SIG *pXVar4;
  BUF_MEM *pBVar5;
  int64_t lVar6;
  uchar *puVar7;
  X509_SIG **a;
  char *pcVar8;
  int iVar9;
  int64_t this_ptr;
  uchar *in;
  uint64_t local_res10;
  uchar **data;
  int *datalen;
  int in_stack_fffffffffffffbc0;
  int local_43c;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  iVar9 = 0;
  data = (uchar **)0x0;
  datalen = (int *)0x0;
  a = param_1;
  in = param_4;
  if (this_ptr == 0) {
LAB_010a0fce:
    lVar6 = 0;
    pXVar4 = _d2i_X509_SIG(a,(uchar **)param_1,param_3);
    if (pXVar4 == (X509_SIG *)0x0) goto LAB_010a1137;
    param_4[0] = '\x01';
    param_4[1] = '\0';
    param_4[2] = '\0';
    param_4[3] = '\0';
    pBVar5 = _BUF_MEM_new();
    if (pBVar5 == (BUF_MEM *)0x0) {
      iVar9 = 0x41;
      iVar2 = 0x162;
LAB_010a1120:
      pcVar8 = "crypto/store/loader_file.c";
      _ERR_put_error(0x201bb0c,iVar9,iVar2,(char *)in,(int)datalen);
    }
    else {
      pcVar8 = "PKCS8 decrypt password";
      lVar6 = FUN_010a0a10("PKCS8 decrypt password",0x400,local_res10);
      if (lVar6 == 0) {
        iVar9 = 0x73;
        iVar2 = 0x169;
        goto LAB_010a1120;
      }
      _X509_SIG_get0();
      sVar3 = _strlen(pcVar8);
      pcVar8 = (char *)data[1];
      in = &stack0xfffffffffffffbb8;
      puVar7 = _PKCS12_pbe_crypt((X509_ALGOR *)pcVar8,(char *)(uint64_t)sVar3,*(int *)data,in,iVar9
                                 ,data,datalen,in_stack_fffffffffffffbc0);
      if (puVar7 != (uchar *)0x0) {
        pBVar5->data = (char *)datalen;
        *(int64_t *)pBVar5 = (int64_t)local_43c;
        *(int64_t *)&pBVar5->max = (int64_t)local_43c;
        _X509_SIG_free((X509_SIG *)pcVar8);
        lVar6 = _ossl_store_info_new_EMBEDDED();
        if (lVar6 != 0) goto LAB_010a1137;
        iVar9 = 0x41;
        iVar2 = 0x179;
        goto LAB_010a1120;
      }
    }
    _X509_SIG_free((X509_SIG *)pcVar8);
    _BUF_MEM_free((BUF_MEM *)pcVar8);
  }
  else {
    iVar9 = 0;
    iVar2 = _strcmp((char *)param_1,param_2);
    if (iVar2 == 0) {
      param_4[0] = '\x01';
      param_4[1] = '\0';
      param_4[2] = '\0';
      param_4[3] = '\0';
      goto LAB_010a0fce;
    }
  }
  lVar6 = 0;
LAB_010a1137:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return lVar6;
  }
                      ___stack_chk_fail();
}

