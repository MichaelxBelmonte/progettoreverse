// Function: FUN_010599e0
// Address: 010599e0
// Size: 837 bytes
// Class: Unknown
// String references:
//   "crypto/pkcs12/p12_mutl.c"
//   "LEGACY_GOST_PKCS12"

bool FUN_010599e0(ASN1_OBJECT *param_1,uint64_t param_2,void **param_3,X509_ALGOR *param_4)

{
  uint uVar1;
  int64_t lVar2;
  uint *puVar3;
  int iVar4;
  long lVar5;
  size_t sVar6;
  uint32_t extraout_var;
  EVP_MD *ptr;
  int64_t lVar8;
  char *ptr_00;
  size_t len;
  uint64_t uVar9;
  int unaff_ESI;
  int64_t this_ptr;
  void **ppval;
  EVP_MD *file;
  code *pcVar10;
  bool bVar11;
  EVP_MD *local_118;
  int in_stack_ffffffffffffff08;
  EVP_MD *pEVar7;
  
  lVar2 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  pcVar10 = param_4;
  if (param_4 == (X509_ALGOR *)0x0) {
    pcVar10 = _PKCS12_key_gen_utf8;
  }
  ppval = param_3;
  iVar4 = _OBJ_obj2nid(param_1);
  if (iVar4 != 0x15) {
    _ERR_put_error(0x2019a17,0x79,0x5c,(char *)param_4,in_stack_ffffffffffffff08);
    bVar11 = false;
    goto LAB_01059cfb;
  }
  puVar3 = *(uint **)(*(int64_t *)(this_ptr + 8) + 8);
  uVar9 = *(void*)(puVar3 + 2);
  uVar1 = *puVar3;
  if (*(int64_t *)(*(int64_t *)(this_ptr + 8) + 0x10) == 0) {
    pEVar7 = (EVP_MD *)((int64_t)&MACH_HEADER.magic + 1);
  }
  else {
    lVar5 = _ASN1_INTEGER_get((ASN1_INTEGER *)(uint64_t)uVar1);
    pEVar7 = (EVP_MD *)CONCAT44(extraout_var,lVar5);
  }
  bVar11 = false;
  _X509_SIG_get0();
  _X509_ALGOR_get0((ASN1_OBJECT **)local_118,(int *)0x0,ppval,param_4);
  _OBJ_obj2nid((ASN1_OBJECT *)local_118);
  _OBJ_nid2sn((int)local_118);
  ptr = _EVP_get_digestbyname((char *)local_118);
  if (ptr == (EVP_MD *)0x0) {
    _ERR_put_error(0x2019a17,0x76,0x69,(char *)param_4,unaff_ESI);
    goto LAB_01059cfb;
  }
  sVar6 = _EVP_MD_size(local_118);
  iVar4 = _EVP_MD_type(local_118);
  if ((int)sVar6 < 0) goto LAB_01059cfb;
  if (((iVar4 - 0x3d6U < 2) || (iVar4 == 0x329)) && (lVar8 = _ossl_safe_getenv(), lVar8 == 0)) {
    ptr_00 = (char *)(uint64_t)uVar1;
    file = ptr;
    iVar4 = _PKCS5_PBKDF2_HMAC(ptr_00,uVar9,pEVar7);
    len = (size_t)uVar9;
    if (iVar4 == 0) {
      iVar4 = 0x77;
      goto LAB_01059cd7;
    }
    _OPENSSL_cleanse(ptr_00,len);
    lVar8 = _HMAC_CTX_new();
    sVar6 = 0x20;
    if (lVar8 == 0) goto LAB_01059cdc;
LAB_01059c3b:
    len = sVar6;
    bVar11 = false;
    iVar4 = _HMAC_Init_ex(ptr,len,0);
    if (iVar4 != 0) {
      len = **(size_t **)(*(int64_t *)(this_ptr + 0x10) + 0x20);
      iVar4 = _HMAC_Update();
      if (iVar4 != 0) {
        iVar4 = _HMAC_Final();
        len = (size_t)param_3;
        bVar11 = iVar4 != 0;
      }
    }
  }
  else {
    ptr_00 = (char *)(uint64_t)uVar1;
    iVar4 = (*pcVar10)(ptr_00,uVar9,3);
    len = (size_t)uVar9;
    if (iVar4 == 0) {
      iVar4 = 0x7d;
      file = pEVar7;
LAB_01059cd7:
      len = 0x6b;
      ptr_00 = "crypto/pkcs12/p12_mutl.c";
      _ERR_put_error(0x2019a17,0x6b,iVar4,(char *)file,unaff_ESI);
    }
    else {
      lVar8 = _HMAC_CTX_new();
      if (lVar8 != 0) goto LAB_01059c3b;
    }
LAB_01059cdc:
    ptr = (EVP_MD *)ptr_00;
    bVar11 = false;
  }
  _OPENSSL_cleanse(ptr,len);
  _HMAC_CTX_free();
LAB_01059cfb:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar2) {
                        ___stack_chk_fail();
  }
  return bVar11;
}

