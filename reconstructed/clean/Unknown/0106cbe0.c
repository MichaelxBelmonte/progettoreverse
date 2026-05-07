// Function: FUN_0106cbe0
// Address: 0106cbe0
// Size: 546 bytes
// Class: Unknown
// String references:
//   "crypto/rsa/rsa_ameth.c"

int FUN_0106cbe0(ASN1_OBJECT *param_1,uint64_t param_2,uint64_t param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  ASN1_OBJECT *o;
  EVP_MD *md;
  int unaff_ESI;
  char *file;
  char local_58 [8];
  uint64_t local_50;
  uint32_t local_44;
  uint64_t local_40;
  
  local_50 = 0;
  local_40 = 0;
  o = param_1;
  iVar1 = _OBJ_obj2nid(param_1);
  if (iVar1 != 0x390) {
    _ERR_put_error(0x201ab32,0x9b,0x2a4,param_4,unaff_ESI);
    return -1;
  }
  lVar4 = _ASN1_TYPE_unpack_sequence();
  if ((lVar4 != 0) && (*(int64_t *)(lVar4 + 8) != 0)) {
    iVar1 = _OBJ_obj2nid(o);
    if (iVar1 == 0x38f) {
      lVar5 = _ASN1_TYPE_unpack_sequence();
      *(int64_t *)(lVar4 + 0x20) = lVar5;
      if (lVar5 != 0) goto LAB_0106cca9;
    }
    else {
      *(void*)(lVar4 + 0x20) = 0;
    }
    _RSA_PSS_PARAMS_free();
  }
LAB_0106cca9:
  iVar1 = _rsa_pss_get_param(&local_44,&local_50);
  if (iVar1 == 0) {
    _ERR_put_error(0x201ab32,0x95,0x2ab,param_4,unaff_ESI);
    iVar1 = -1;
    goto LAB_0106cde9;
  }
  if (param_1 == (ASN1_OBJECT *)0x0) {
    iVar1 = -1;
    file = local_58;
    md = (EVP_MD *)((int64_t)&MACH_HEADER.filetype + 1);
    iVar3 = _EVP_PKEY_CTX_ctrl(0xd,0xf8,0);
    if (iVar3 < 1) goto LAB_0106cde9;
    iVar3 = _EVP_MD_type(md);
    iVar2 = _EVP_MD_type(md);
    if (iVar3 != iVar2) {
      _ERR_put_error(0x201ab32,0x9e,0x2b8,file,unaff_ESI);
      goto LAB_0106cde9;
    }
  }
  else {
    iVar1 = _EVP_DigestVerifyInit(0,local_40,param_1);
    if (iVar1 == 0) {
      iVar1 = -1;
      goto LAB_0106cde9;
    }
  }
  iVar1 = -1;
  iVar3 = _RSA_pkey_ctx_ctrl(6,0x1001,0);
  if ((0 < iVar3) && (iVar3 = _RSA_pkey_ctx_ctrl(local_44,0x1002,0), 0 < iVar3)) {
    iVar1 = _RSA_pkey_ctx_ctrl(0,0x1005,local_50);
    iVar1 = (uint)(0 < iVar1) * 2 + -1;
  }
LAB_0106cde9:
  _RSA_PSS_PARAMS_free();
  return iVar1;
}

