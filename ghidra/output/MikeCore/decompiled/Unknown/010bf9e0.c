// Function: FUN_010bf9e0
// Address: 010bf9e0
// Size: 641 bytes
// Class: Unknown
// String references:
//   "crypto/x509v3/v3_asid.c"


undefined4 FUN_010bf9e0(undefined8 param_1,BIGNUM *param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  ASN1_INTEGER *pAVar8;
  int *piVar9;
  char *a;
  uint *unaff_RDI;
  int in_stack_ffffffffffffffc8;
  undefined4 local_34;
  
  local_34 = 1;
  if (unaff_RDI != (uint *)0x0) {
    uVar1 = *unaff_RDI;
    a = (char *)(ulonglong)uVar1;
    if (uVar1 != 0) {
      if ((uVar1 == 1) && (iVar2 = _OPENSSL_sk_num(), iVar2 != 0)) {
        iVar2 = 0;
        pBVar6 = (BIGNUM *)0x0;
        do {
          iVar3 = _OPENSSL_sk_num();
          if (iVar3 + -1 <= iVar2) {
            _OPENSSL_sk_num();
            piVar9 = (int *)_OPENSSL_sk_value();
            if (((piVar9 == (int *)0x0) || (*piVar9 != 1)) ||
               (iVar2 = _ASN1_INTEGER_cmp((ASN1_INTEGER *)a,(ASN1_INTEGER *)param_2), iVar2 < 1)) {
              local_34 = 1;
            }
            else {
LAB_010bfbd8:
              local_34 = 0;
            }
            break;
          }
          puVar4 = (uint *)_OPENSSL_sk_value();
          iVar2 = iVar2 + 1;
          puVar5 = (uint *)_OPENSSL_sk_value();
          if (puVar4 == (uint *)0x0) goto LAB_010bfbd8;
          uVar1 = *puVar4;
          a = (char *)(ulonglong)uVar1;
          if (uVar1 == 1) {
            puVar4 = *(uint **)(puVar4 + 2);
          }
          else {
            local_34 = 0;
            if (uVar1 != 0) break;
          }
          local_34 = 0;
          a = (char *)(puVar4 + 2);
          if (puVar5 == (uint *)0x0) break;
          uVar1 = *puVar5;
          a = (char *)(ulonglong)uVar1;
          if (uVar1 == 1) {
            puVar5 = *(uint **)(puVar5 + 2);
          }
          else if (uVar1 != 0) break;
          a = (char *)(puVar5 + 2);
          iVar3 = _ASN1_INTEGER_cmp((ASN1_INTEGER *)a,(ASN1_INTEGER *)param_2);
          if (((-1 < iVar3) ||
              (iVar3 = _ASN1_INTEGER_cmp((ASN1_INTEGER *)a,(ASN1_INTEGER *)param_2), 0 < iVar3)) ||
             (iVar3 = _ASN1_INTEGER_cmp((ASN1_INTEGER *)a,(ASN1_INTEGER *)param_2), 0 < iVar3))
          break;
          if (((pBVar6 == (BIGNUM *)0x0) && (pBVar6 = _BN_new(), pBVar6 == (BIGNUM *)0x0)) ||
             ((pBVar7 = _ASN1_INTEGER_to_BN((ASN1_INTEGER *)a,param_2), pBVar7 == (BIGNUM *)0x0 ||
              (iVar3 = _BN_add_word((BIGNUM *)a,(ulong)param_2), iVar3 == 0)))) {
            a = "crypto/x509v3/v3_asid.c";
            _ERR_put_error(0x201e05e,0x41,0x130,param_4,in_stack_ffffffffffffffc8);
            break;
          }
          pAVar8 = _BN_to_ASN1_INTEGER((BIGNUM *)a,(ASN1_INTEGER *)param_2);
          if (pAVar8 == (ASN1_INTEGER *)0x0) {
            a = "crypto/x509v3/v3_asid.c";
            _ERR_put_error(0x201e05e,0x41,0x138,param_4,in_stack_ffffffffffffffc8);
            break;
          }
          iVar3 = _ASN1_INTEGER_cmp((ASN1_INTEGER *)a,(ASN1_INTEGER *)param_2);
        } while (iVar3 < 0);
        _ASN1_INTEGER_free((ASN1_INTEGER *)a);
        _BN_free((BIGNUM *)a);
      }
      else {
        local_34 = 0;
      }
    }
  }
  return local_34;
}


