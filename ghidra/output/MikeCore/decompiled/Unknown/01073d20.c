// Function: FUN_01073d20
// Address: 01073d20
// Size: 1237 bytes
// Class: Unknown
// String references:
//   "crypto/rsa/rsa_pmeth.c"


uint FUN_01073d20(uint *param_1,uint param_2,undefined8 param_3,char *param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *md;
  EVP_MD *pEVar6;
  int unaff_ESI;
  undefined8 *unaff_RDI;
  int unaff_R14D;
  uint uVar7;
  
  puVar1 = (uint *)unaff_RDI[5];
  uVar7 = 1;
  if (unaff_ESI - 0x1001U < 0xd) {
    md = &switchD_01073d5a::switchdataD_0107422c;
    switch(unaff_ESI) {
    case 0x1001:
      if (param_2 - 1 < 6) {
        iVar3 = FUN_01074770();
        if (iVar3 == 0) {
          return 0;
        }
        if (param_2 == 6) {
          bVar2 = *(byte *)(unaff_RDI + 4) & 0x18;
        }
        else {
          if (*(int *)*unaff_RDI == 0x390) goto LAB_01074154;
          if (param_2 != 4) goto LAB_010741ae;
          bVar2 = *(byte *)((longlong)unaff_RDI + 0x21) & 3;
        }
        if (bVar2 != 0) {
          if (*(longlong *)(puVar1 + 8) == 0) {
            pEVar6 = _EVP_sha1();
            *(EVP_MD **)(puVar1 + 8) = pEVar6;
          }
LAB_010741ae:
          puVar1[7] = param_2;
          return 1;
        }
      }
LAB_01074154:
      iVar3 = 0x90;
      iVar4 = 0x1ac;
      break;
    default:
      if (puVar1[7] == 6) {
        if (unaff_ESI == 0x1007) {
          *param_1 = puVar1[0xc];
          return 1;
        }
        if (-4 < (int)param_2) {
          uVar7 = puVar1[0xd];
          if (uVar7 == 0xffffffff) goto LAB_010741ef;
          if (param_2 == 0xffffffff) {
            uVar5 = _EVP_MD_size((EVP_MD *)&switchD_01073d5a::switchdataD_0107422c);
          }
          else {
            if (param_2 == 0xfffffffe) {
              if (*(int *)(unaff_RDI + 4) != 0x10) goto LAB_010741ef;
              iVar3 = 0x92;
              iVar4 = 0x1c1;
              break;
            }
            uVar5 = param_2;
            if ((int)param_2 < 0) goto LAB_010741ef;
          }
          if ((int)uVar7 <= (int)uVar5) {
LAB_010741ef:
            puVar1[0xc] = param_2;
            return 1;
          }
          iVar3 = 0xa4;
          iVar4 = 0x1c7;
LAB_0107407e:
          _ERR_put_error(0x201b8ef,iVar3,iVar4,param_4,unaff_R14D);
          return 0;
        }
        goto switchD_01073d9a_caseD_6;
      }
      iVar3 = 0x92;
      iVar4 = 0x1b6;
      break;
    case 0x1003:
      if (0x1ff < (int)param_2) {
        *puVar1 = param_2;
        return 1;
      }
      iVar3 = 0x78;
      iVar4 = 0x1d1;
      break;
    case 0x1004:
      if (((param_1 != (uint *)0x0) && (iVar3 = _BN_is_odd(), iVar3 != 0)) &&
         (iVar3 = _BN_is_one(), iVar3 == 0)) {
        _BN_free((BIGNUM *)md);
        *(uint **)(puVar1 + 2) = param_1;
        return 1;
      }
      iVar3 = 0x65;
      iVar4 = 0x1d9;
      break;
    case 0x1005:
    case 0x1008:
      if ((puVar1[7] | 2) == 6) {
        if (unaff_ESI != 0x1008) {
          if (puVar1[0xd] == 0xffffffff) {
            *(uint **)(puVar1 + 10) = param_1;
            return 1;
          }
          iVar3 = _EVP_MD_type((EVP_MD *)&switchD_01073d5a::switchdataD_0107422c);
          iVar4 = _EVP_MD_type((EVP_MD *)md);
          if (iVar3 == iVar4) {
            return 1;
          }
          iVar3 = 0x98;
          iVar4 = 0x214;
          goto LAB_0107407e;
        }
        if (*(longlong *)(puVar1 + 10) != 0) {
          *(longlong *)param_1 = *(longlong *)(puVar1 + 10);
          return 1;
        }
switchD_01073d9a_caseD_d:
        *(longlong *)param_1 = *(longlong *)(puVar1 + 8);
        return 1;
      }
      iVar3 = 0x9c;
      iVar4 = 0x208;
      break;
    case 0x1006:
      *param_1 = puVar1[7];
      return 1;
    case 0x1009:
    case 0x100b:
      if (puVar1[7] == 4) {
        if (unaff_ESI != 0x100b) {
LAB_01074012:
          *(uint **)(puVar1 + 8) = param_1;
          return 1;
        }
        goto switchD_01073d9a_caseD_d;
      }
      iVar3 = 0x8d;
      iVar4 = 0x1eb;
      break;
    case 0x100a:
      if (puVar1[7] == 4) {
        _CRYPTO_free(&switchD_01073d5a::switchdataD_0107422c);
        if ((param_1 != (uint *)0x0) && (0 < (int)param_2)) {
          *(uint **)(puVar1 + 0x10) = param_1;
          *(ulonglong *)(puVar1 + 0x12) = (ulonglong)param_2;
          return 1;
        }
        puVar1[0x10] = 0;
        puVar1[0x11] = 0;
        puVar1[0x12] = 0;
        puVar1[0x13] = 0;
        return 1;
      }
      iVar3 = 0x8d;
      iVar4 = 0x21d;
      break;
    case 0x100c:
      if (puVar1[7] == 4) {
        *(longlong *)param_1 = *(longlong *)(puVar1 + 0x10);
        return puVar1[0x12];
      }
      iVar3 = 0x8d;
      iVar4 = 0x22c;
      break;
    case 0x100d:
      if (param_2 - 2 < 4) {
        puVar1[4] = param_2;
        return 1;
      }
      iVar3 = 0xa5;
      iVar4 = 0x1e2;
    }
LAB_01074170:
    _ERR_put_error(0x201b8ef,iVar3,iVar4,param_4,unaff_R14D);
  }
  else if (unaff_ESI - 1U < 0xd) {
    pEVar6 = (EVP_MD *)
             ((longlong)&switchD_01073d9a::switchdataD_010741f8 +
             (longlong)(int)(&switchD_01073d9a::switchdataD_010741f8)[unaff_ESI - 1U]);
    switch(unaff_ESI) {
    case 1:
      iVar3 = FUN_01074770();
      if (iVar3 == 0) {
        return 0;
      }
      if (puVar1[0xd] == 0xffffffff) goto LAB_01074012;
      iVar3 = _EVP_MD_type(pEVar6);
      iVar4 = _EVP_MD_type(pEVar6);
      if (iVar3 == iVar4) {
        return 1;
      }
      iVar3 = 0x91;
      iVar4 = 0x1fa;
      goto LAB_0107407e;
    default:
      if (*(int *)*unaff_RDI != 0x390) {
        return 1;
      }
    case 2:
      iVar3 = 0x94;
      iVar4 = 0x244;
      break;
    case 5:
    case 7:
    case 0xb:
      goto switchD_01073d9a_caseD_5;
    case 6:
    case 8:
    case 0xc:
      goto switchD_01073d9a_caseD_6;
    case 0xd:
      goto switchD_01073d9a_caseD_d;
    }
    goto LAB_01074170;
  }
switchD_01073d9a_caseD_6:
  uVar7 = 0xfffffffe;
switchD_01073d9a_caseD_5:
  return uVar7;
}


