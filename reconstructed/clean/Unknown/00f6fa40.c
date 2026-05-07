// Function: FUN_00f6fa40
// Address: 00f6fa40
// Size: 927 bytes
// Class: Unknown
// String references:
//   "crypto/asn1/tasn_dec.c"

uint32_t FUN_00f6fa40(uint64_t *param_1,char *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  ASN1_VALUE **pval;
  char *pcVar5;
  ASN1_ITEM *pAVar6;
  uint32_t uVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int reason;
  char **file;
  uint64_t in_stack_ffffffffffffffb8;
  char *local_40;
  char local_31;
  
  iVar3 = (int)in_stack_ffffffffffffffb8;
  if (this_ptr == (int64_t *)0x0) {
    return 0;
  }
  uVar1 = *param_1;
  local_40 = (char *)*arg1;
  if ((uVar1 & 0x1000) != 0) {
    this_ptr = (int64_t *)&stack0xffffffffffffffa0;
  }
  if ((uVar1 & 6) == 0) {
    if ((uVar1 & 8) == 0) {
      file = (char **)0x0;
      iVar2 = FUN_00f6e2c0(param_1[4],param_2,0xffffffff);
      if (iVar2 == -1) {
        return 0xffffffff;
      }
      if (iVar2 == 0) {
        iVar2 = 0x3a;
        reason = 0x286;
        goto LAB_00f6fd28;
      }
    }
    else {
      pcVar5 = (char *)(uint64_t)((uint)uVar1 & 0xc0);
      iVar2 = FUN_00f6e2c0(param_1[4],param_2,(int)param_1[1]);
      if (iVar2 == -1) {
        return 0xffffffff;
      }
      if (iVar2 == 0) {
        _ERR_put_error(0x2008e8a,0x3a,0x27d,pcVar5,iVar3);
        return 0;
      }
    }
LAB_00f6fda1:
    *arg1 = (int64_t)local_40;
    uVar7 = 1;
  }
  else {
    pval = (ASN1_VALUE **)&local_31;
    file = &local_40;
    pAVar6 = (ASN1_ITEM *)0x0;
    iVar2 = FUN_00f6f7e0(pval,0,0,file,param_4);
    iVar3 = (int)in_stack_ffffffffffffffb8;
    if (iVar2 == -1) {
      return 0xffffffff;
    }
    if (iVar2 == 0) {
      iVar2 = 0x3a;
      reason = 0x23c;
    }
    else {
      if (*this_ptr == 0) {
        lVar4 = _OPENSSL_sk_new_null();
        *this_ptr = lVar4;
      }
      else {
        iVar3 = _OPENSSL_sk_num();
        while (0 < iVar3) {
          in_stack_ffffffffffffffb8 = _OPENSSL_sk_pop();
          _ASN1_item_ex_free(pval,pAVar6);
          iVar3 = _OPENSSL_sk_num();
        }
        lVar4 = *this_ptr;
      }
      iVar3 = (int)in_stack_ffffffffffffffb8;
      pcVar5 = local_40;
      if (lVar4 == 0) {
        iVar2 = 0x41;
        reason = 0x24f;
      }
      else {
        while( true ) {
          local_40 = pcVar5;
          if ((int64_t)param_2 < 1) {
            if (local_31 == '\0') goto LAB_00f6fda1;
            iVar2 = 0x89;
            reason = 0x274;
            goto LAB_00f6fd28;
          }
          iVar3 = (int)in_stack_ffffffffffffffb8;
          if (((param_2 != (char *)0x1) && (*pcVar5 == '\0')) && (pcVar5[1] == '\0')) break;
          in_stack_ffffffffffffffb8 = 0;
          file = (char **)0x0;
          iVar2 = FUN_00f6e2c0(param_1[4],param_2,0xffffffff);
          iVar3 = (int)in_stack_ffffffffffffffb8;
          if (iVar2 == 0) {
            pAVar6 = (ASN1_ITEM *)((int64_t)&segment_command_00000020.vmaddr + 2);
            iVar2 = 0x267;
            goto LAB_00f6fd6f;
          }
          param_2 = pcVar5 + ((int64_t)param_2 - (int64_t)local_40);
          iVar2 = _OPENSSL_sk_push();
          iVar3 = (int)in_stack_ffffffffffffffb8;
          pcVar5 = local_40;
          if (iVar2 == 0) {
            pAVar6 = (ASN1_ITEM *)((int64_t)&segment_command_00000020.vmsize + 1);
            iVar2 = 0x26e;
LAB_00f6fd6f:
            pcVar5 = "crypto/asn1/tasn_dec.c";
            _ERR_put_error(0x2008e8a,(int)pAVar6,iVar2,(char *)file,iVar3);
            _ASN1_item_free((ASN1_VALUE *)pcVar5,pAVar6);
            return 0;
          }
        }
        local_40 = pcVar5 + 2;
        if (local_31 != '\0') goto LAB_00f6fda1;
        iVar2 = 0x9f;
        reason = 0x25b;
      }
    }
LAB_00f6fd28:
    _ERR_put_error(0x2008e8a,iVar2,reason,(char *)file,iVar3);
    uVar7 = 0;
  }
  return uVar7;
}

