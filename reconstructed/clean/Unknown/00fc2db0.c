// Function: FUN_00fc2db0
// Address: 00fc2db0
// Size: 515 bytes
// Class: Unknown
// String references:
//   "crypto/dsa/dsa_pmeth.c"

uint64_t FUN_00fc2db0(EVP_MD *param_1,uint param_2,uint64_t param_3,char *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  EVP_MD *pEVar5;
  int unaff_ESI;
  int64_t this_ptr;
  int in_stack_00000008;
  
  puVar1 = *(uint **)(this_ptr + 0x28);
  if (unaff_ESI < 0x1001) {
    if (0xc < unaff_ESI - 1U) {
      return 0xfffffffe;
    }
    pEVar5 = (EVP_MD *)
             ((int64_t)&switchD_00fc2de5::switchdataD_00fc2fb4 +
             (int64_t)(int)(&switchD_00fc2de5::switchdataD_00fc2fb4)[unaff_ESI - 1U]);
    uVar4 = 1;
    switch(unaff_ESI) {
    case 1:
      iVar3 = _EVP_MD_type(pEVar5);
      if (((((iVar3 != 0x40) && (iVar3 = _EVP_MD_type(pEVar5), iVar3 != 0x74)) &&
           ((iVar3 = _EVP_MD_type(pEVar5), iVar3 != 0x42 &&
            ((((iVar3 = _EVP_MD_type(pEVar5), iVar3 != 0x2a3 &&
               (iVar3 = _EVP_MD_type(pEVar5), iVar3 != 0x2a0)) &&
              (iVar3 = _EVP_MD_type(pEVar5), iVar3 != 0x2a1)) &&
             ((iVar3 = _EVP_MD_type(pEVar5), iVar3 != 0x2a2 &&
              (iVar3 = _EVP_MD_type(pEVar5), iVar3 != 0x448)))))))) &&
          (iVar3 = _EVP_MD_type(pEVar5), iVar3 != 0x449)) &&
         ((iVar3 = _EVP_MD_type(pEVar5), iVar3 != 0x44a &&
          (iVar3 = _EVP_MD_type(pEVar5), iVar3 != 1099)))) {
        iVar3 = 0x92;
        goto LAB_00fc2f89;
      }
      *(EVP_MD **)(puVar1 + 6) = param_1;
      break;
    case 2:
      _ERR_put_error(0x200cb2e,0x96,0xa3,param_4,in_stack_00000008);
    default:
      return 0xfffffffe;
    case 5:
    case 7:
    case 0xb:
      goto switchD_00fc2de5_caseD_5;
    case 0xd:
      uVar2 = puVar1[7];
      param_1->type = puVar1[6];
      param_1->pkey_type = uVar2;
    }
    return 1;
  }
  if (unaff_ESI == 0x1003) {
    pEVar5 = param_1;
    iVar3 = _EVP_MD_type(param_1);
    if (((iVar3 == 0x40) || (iVar3 = _EVP_MD_type(pEVar5), iVar3 == 0x2a3)) ||
       (iVar3 = _EVP_MD_type(pEVar5), iVar3 == 0x2a0)) {
      *(EVP_MD **)(puVar1 + 2) = param_1;
      return 1;
    }
    iVar3 = 0x80;
LAB_00fc2f89:
    _ERR_put_error(0x200cb2e,0x6a,iVar3,param_4,in_stack_00000008);
    return 0;
  }
  if (unaff_ESI != 0x1002) {
    if (unaff_ESI != 0x1001) {
      return 0xfffffffe;
    }
    if (0xff < (int)param_2) {
      *puVar1 = param_2;
      return 1;
    }
    return 0xfffffffe;
  }
  uVar4 = 0xfffffffe;
  if (((param_2 << 0x1b | param_2 >> 5) < 9) && ((0x1a1U >> (param_2 >> 5 & 0x1f) & 1) != 0)) {
    puVar1[1] = param_2;
    return 1;
  }
switchD_00fc2de5_caseD_5:
  return uVar4;
}

