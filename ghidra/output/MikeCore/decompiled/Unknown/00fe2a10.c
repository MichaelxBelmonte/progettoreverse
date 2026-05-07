// Function: FUN_00fe2a10
// Address: 00fe2a10
// Size: 797 bytes
// Class: Unknown
// String references:
//   "crypto/ec/ec_pmeth.c"


uint FUN_00fe2a10(EVP_MD *param_1,uint param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  EC_GROUP *pEVar4;
  longlong lVar5;
  EC_KEY *pEVar6;
  uint *puVar7;
  EVP_MD *md;
  int unaff_EBP;
  uint unaff_ESI;
  longlong unaff_RDI;
  int reason;
  
  plVar1 = *(longlong **)(unaff_RDI + 0x28);
  if (unaff_ESI - 0x1001 < 10) {
    puVar7 = &switchD_00fe2a3c::switchdataD_00fe2d30;
    switch(unaff_ESI) {
    case 0x1001:
      pEVar4 = _EC_GROUP_new_by_curve_name(0xfe2d30);
      if (pEVar4 == (EC_GROUP *)0x0) {
        iVar3 = 0x8d;
        reason = 0xe7;
LAB_00fe2cd0:
        _ERR_put_error(0x200ef38,iVar3,reason,param_4,unaff_EBP);
        return 0;
      }
      _EC_GROUP_free((EC_GROUP *)puVar7);
      *plVar1 = (longlong)pEVar4;
      break;
    case 0x1002:
      if (*plVar1 == 0) {
        iVar3 = 0x8b;
        reason = 0xf0;
        goto LAB_00fe2cd0;
      }
      _EC_GROUP_set_asn1_flag((EC_GROUP *)&switchD_00fe2a3c::switchdataD_00fe2d30,param_2);
      break;
    case 0x1003:
      if (param_2 == 0xfffffffe) {
        if ((int)(char)plVar1[3] == 0xffffffff) {
          uVar2 = _EC_KEY_get_flags();
          return uVar2 >> 0xc & 1;
        }
        return (int)(char)plVar1[3];
      }
      if (2 < param_2 + 1) {
        return 0xfffffffe;
      }
      *(char *)(plVar1 + 3) = (char)param_2;
      if (param_2 == 0xffffffff) {
        _EC_KEY_free((EC_KEY *)0x0);
        plVar1[2] = 0;
      }
      else {
        pEVar6 = *(EC_KEY **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x28) + 0x18);
        if (pEVar6 == (EC_KEY *)0x0) {
          return 0xfffffffe;
        }
        iVar3 = _BN_is_one();
        if (iVar3 == 0) {
          if (plVar1[2] == 0) {
            pEVar6 = _EC_KEY_dup(pEVar6);
            plVar1[2] = (longlong)pEVar6;
            if (pEVar6 == (EC_KEY *)0x0) {
              return 0;
            }
          }
          if (param_2 == 0) {
            _EC_KEY_clear_flags();
          }
          else {
            _EC_KEY_set_flags();
          }
        }
      }
      break;
    case 0x1004:
      if (param_2 == 0xfffffffe) {
        return (int)*(char *)((longlong)plVar1 + 0x19);
      }
      if (1 < param_2 - 1) {
        return 0xfffffffe;
      }
      *(char *)((longlong)plVar1 + 0x19) = (char)param_2;
      break;
    case 0x1005:
      plVar1[4] = (longlong)param_1;
      break;
    case 0x1006:
      lVar5 = plVar1[4];
      goto LAB_00fe2b16;
    case 0x1007:
      if ((int)param_2 < 1) {
        return 0xfffffffe;
      }
      plVar1[7] = (ulonglong)param_2;
      break;
    case 0x1008:
      param_1->type = (int)plVar1[7];
      break;
    case 0x1009:
      _CRYPTO_free(&switchD_00fe2a3c::switchdataD_00fe2d30);
      plVar1[5] = (longlong)param_1;
      if (param_1 == (EVP_MD *)0x0) {
        plVar1[6] = 0;
      }
      else {
        plVar1[6] = (longlong)(int)param_2;
      }
      break;
    case 0x100a:
      lVar5 = plVar1[5];
      param_1->type = (int)lVar5;
      param_1->pkey_type = (int)((ulonglong)lVar5 >> 0x20);
      return *(uint *)(plVar1 + 6);
    }
  }
  else {
    if (0xd < unaff_ESI) {
      return 0xfffffffe;
    }
    if ((0x8a4U >> (unaff_ESI & 0x1f) & 1) != 0) {
      return 1;
    }
    if (unaff_ESI == 1) {
      md = param_1;
      iVar3 = _EVP_MD_type(param_1);
      if ((((((iVar3 == 0x40) || (iVar3 = _EVP_MD_type(md), iVar3 == 0x1a0)) ||
            (iVar3 = _EVP_MD_type(md), iVar3 == 0x2a3)) ||
           ((iVar3 = _EVP_MD_type(md), iVar3 == 0x2a0 || (iVar3 = _EVP_MD_type(md), iVar3 == 0x2a1))
           )) || ((iVar3 = _EVP_MD_type(md), iVar3 == 0x2a2 ||
                  ((iVar3 = _EVP_MD_type(md), iVar3 == 0x448 ||
                   (iVar3 = _EVP_MD_type(md), iVar3 == 0x449)))))) ||
         ((iVar3 = _EVP_MD_type(md), iVar3 == 0x44a || (iVar3 = _EVP_MD_type(md), iVar3 == 1099))))
      {
        plVar1[1] = (longlong)param_1;
        return 1;
      }
      iVar3 = 0x8a;
      reason = 0x14b;
      goto LAB_00fe2cd0;
    }
    if (unaff_ESI != 0xd) {
      return 0xfffffffe;
    }
    lVar5 = plVar1[1];
LAB_00fe2b16:
    param_1->type = (int)lVar5;
    param_1->pkey_type = (int)((ulonglong)lVar5 >> 0x20);
  }
  return 1;
}


