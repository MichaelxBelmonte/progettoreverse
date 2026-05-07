// Function: FUN_010c1860
// Address: 010c1860
// Size: 602 bytes
// Class: Unknown
// String references:
//   "name="
//   "crypto/x509v3/v3_conf.c"
//   ",section="

uint64_t FUN_010c1860(v3_ext_method *param_1,char *param_2,v3_ext_ctx *param_3,char *param_4)

{
  X509V3_EXT_R2I method;
  int iVar1;
  X509V3_EXT_METHOD *pXVar2;
  v3_ext_ctx *ctx;
  ASN1_VALUE *val;
  uint64_t uVar3;
  char *pcVar4;
  v3_ext_method *method_00;
  ASN1_ITEM *it;
  int64_t arg1;
  int reason;
  v3_ext_ctx *values;
  int unaff_R14D;
  
  if ((int)param_2 == 0) {
    iVar1 = 0x82;
    reason = 0x4e;
LAB_010c18fa:
    _ERR_put_error(0x201e294,iVar1,reason,param_4,unaff_R14D);
    return 0;
  }
  method_00 = param_1;
  values = param_3;
  pXVar2 = _X509V3_EXT_get_nid((int)param_1);
  if (pXVar2 == (X509V3_EXT_METHOD *)0x0) {
    iVar1 = 0x81;
    reason = 0x52;
    goto LAB_010c18fa;
  }
  if (pXVar2->v2i == (X509V3_EXT_V2I)0x0) {
    if (pXVar2->s2i != (X509V3_EXT_S2I)0x0) {
      val = (*pXVar2->s2i)(method_00,param_3,(char *)values);
      if (val == (ASN1_VALUE *)0x0) {
        return 0;
      }
      goto LAB_010c197c;
    }
    method = pXVar2->r2i;
    if (method == (X509V3_EXT_R2I)0x0) {
      iVar1 = 0x201e294;
      _ERR_put_error(0x201e294,0x67,0x75,param_4,unaff_R14D);
      pcVar4 = _OBJ_nid2sn(iVar1);
      _ERR_add_error_data(iVar1,pcVar4);
      return 0;
    }
    if ((*(int64_t *)(arg1 + 0x30) == 0) || (*(int64_t *)(arg1 + 0x28) == 0)) {
      iVar1 = 0x88;
      reason = 0x6e;
      goto LAB_010c18fa;
    }
    val = (*method)((v3_ext_method *)method,param_3,(char *)values);
  }
  else {
    if ((char)param_3->flags == '@') {
      ctx = (v3_ext_ctx *)_NCONF_get_section((CONF *)method_00,param_2);
    }
    else {
      ctx = (v3_ext_ctx *)_X509V3_parse_list((char *)method_00);
    }
    if ((ctx == (v3_ext_ctx *)0x0) || (iVar1 = _OPENSSL_sk_num(), iVar1 < 1)) {
      iVar1 = 0x201e294;
      _ERR_put_error(0x201e294,0x69,0x5d,param_4,unaff_R14D);
      pcVar4 = _OBJ_nid2sn(iVar1);
      _ERR_add_error_data(0x201e2b5,pcVar4,param_3);
      if ((char)param_3->flags != '@') {
        _OPENSSL_sk_pop_free();
        return 0;
      }
      return 0;
    }
    val = (*pXVar2->v2i)(method_00,ctx,(STACK *)values);
    if ((char)param_3->flags != '@') {
      _OPENSSL_sk_pop_free();
    }
  }
  if (val == (ASN1_VALUE *)0x0) {
    return 0;
  }
LAB_010c197c:
  it = (ASN1_ITEM *)((uint64_t)param_1 & 0xffffffff);
  uVar3 = FUN_010c1c70();
  if (pXVar2->it == (ASN1_ITEM_EXP *)0x0) {
    (*pXVar2->ext_free)(val);
    return uVar3;
  }
  _ASN1_item_free(val,it);
  return uVar3;
}

