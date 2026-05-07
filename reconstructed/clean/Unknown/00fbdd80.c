// Function: FUN_00fbdd80
// Address: 00fbdd80
// Size: 621 bytes
// Class: Unknown

int FUN_00fbdd80(uint64_t param_1,uint64_t param_2,char *param_3,BN_GENCB *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int64_t lVar4;
  DH *pDVar5;
  DSA *pDVar6;
  DH *pDVar7;
  uint *r;
  int iVar8;
  int64_t this_ptr;
  DSA *pDVar9;
  
  piVar2 = *(int **)(this_ptr + 0x28);
  r = &switchD_00fbddb0::switchdataD_00fbdff0;
  switch(piVar2[8]) {
  case 0:
    if (piVar2[9] != 0) {
      lVar4 = _DH_new_by_nid();
      if (lVar4 == 0) {
        return 0;
      }
      iVar3 = (int)lVar4;
      break;
    }
    if (*(int64_t *)(this_ptr + 0x38) == 0) {
      pDVar5 = (DH *)0x0;
      iVar3 = piVar2[2];
    }
    else {
      pDVar5 = (DH *)_BN_GENCB_new();
      if (pDVar5 == (DH *)0x0) {
        return 0;
      }
      _evp_pkey_set_cb_translate();
      iVar3 = piVar2[2];
    }
    if (iVar3 == 0) {
      pDVar7 = _DH_new();
      if (pDVar7 != (DH *)0x0) {
        iVar3 = _DH_generate_parameters_ex(pDVar5,piVar2[1],(int)param_3,param_4);
        _BN_GENCB_free();
        if (iVar3 == 0) {
          _DH_free(pDVar5);
          return 0;
        }
        _EVP_PKEY_assign((EVP_PKEY *)pDVar5,(int)pDVar7,param_3);
        return iVar3;
      }
      goto LAB_00fbdfe0;
    }
    if (2 < iVar3) goto LAB_00fbdfe0;
    iVar3 = *piVar2;
    iVar1 = piVar2[3];
    r = *(uint **)(piVar2 + 6);
    pDVar6 = _DSA_new();
    if (pDVar6 == (DSA *)0x0) goto LAB_00fbdfe0;
    iVar8 = 0xa0;
    if (0x7ff < iVar3) {
      iVar8 = 0x100;
    }
    if (iVar1 != -1) {
      iVar8 = iVar1;
    }
    pDVar9 = (DSA *)r;
    if ((DSA *)r == (DSA *)0x0) {
      if (iVar3 < 0x800) {
        r = (uint *)_EVP_sha1();
      }
      else {
        r = (uint *)_EVP_sha256();
      }
    }
    if (piVar2[2] == 2) {
      param_3 = (char *)0x0;
      iVar3 = _dsa_builtin_paramgen2(0,(int64_t)iVar8,0,0,pDVar5,pDVar9,pDVar6);
LAB_00fbdfa0:
      if (0 < iVar3) {
        _BN_GENCB_free();
        pDVar5 = _DSA_dup_DH((DSA *)r);
        _DSA_free((DSA *)r);
        if (pDVar5 == (DH *)0x0) {
          return 0;
        }
        iVar3 = (int)pDVar5;
        break;
      }
    }
    else if (piVar2[2] == 1) {
      param_3 = (char *)0x0;
      iVar3 = _dsa_builtin_paramgen(0,(int64_t)iVar8,0,0);
      goto LAB_00fbdfa0;
    }
    _DSA_free((DSA *)r);
LAB_00fbdfe0:
    _BN_GENCB_free();
    return 0;
  case 1:
    iVar3 = _DH_get_1024_160();
    break;
  case 2:
    iVar3 = _DH_get_2048_224();
    break;
  case 3:
    iVar3 = _DH_get_2048_256();
    break;
  default:
    return -2;
  }
  _EVP_PKEY_assign((EVP_PKEY *)r,iVar3,param_3);
  return 1;
}

