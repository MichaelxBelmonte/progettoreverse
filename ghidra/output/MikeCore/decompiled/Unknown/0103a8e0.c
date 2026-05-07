// Function: FUN_0103a8e0
// Address: 0103a8e0
// Size: 562 bytes
// Class: Unknown
// String references:
//   "crypto/evp/pmeth_lib.c"


longlong * FUN_0103a8e0(ENGINE *param_1,int param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  EVP_PKEY *pkey;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int reason;
  int in_stack_fffffffffffffee8;
  
  if ((param_2 == -1) && (unaff_RDI == 0)) {
    return (longlong *)0x0;
  }
  if ((unaff_RSI == 0) && (unaff_RDI != 0)) {
    unaff_RSI = *(longlong *)(unaff_RDI + 0x20);
    if (unaff_RSI == 0) {
      unaff_RSI = *(longlong *)(unaff_RDI + 0x18);
      goto LAB_0103a92a;
    }
LAB_0103a92f:
    iVar1 = _ENGINE_init(param_1);
    if (iVar1 == 0) {
      iVar1 = 0x26;
      reason = 0x77;
      goto LAB_0103aaae;
    }
LAB_0103a970:
    lVar2 = _ENGINE_get_pkey_meth();
joined_r0x0103aa84:
    if (lVar2 != 0) {
      plVar3 = (longlong *)_CRYPTO_zalloc();
      if (plVar3 != (longlong *)0x0) {
        plVar3[1] = unaff_RSI;
        *plVar3 = lVar2;
        *(undefined4 *)(plVar3 + 4) = 0;
        plVar3[2] = unaff_RDI;
        if (unaff_RDI != 0) {
          _EVP_PKEY_up_ref();
        }
        pkey = *(EVP_PKEY **)(lVar2 + 8);
        if (pkey != (EVP_PKEY *)0x0) {
          iVar1 = (*(code *)pkey)();
          if (iVar1 < 1) {
            *plVar3 = 0;
            _EVP_PKEY_free(pkey);
            _EVP_PKEY_free(pkey);
            _ENGINE_finish((ENGINE *)pkey);
            _CRYPTO_free(pkey);
            return (longlong *)0x0;
          }
          return plVar3;
        }
        return plVar3;
      }
      _ENGINE_finish(param_1);
      iVar1 = 0x41;
      reason = 0x95;
      goto LAB_0103aaae;
    }
  }
  else {
LAB_0103a92a:
    if (unaff_RSI != 0) goto LAB_0103a92f;
    unaff_RSI = _ENGINE_get_pkey_meth_engine();
    if (unaff_RSI != 0) goto LAB_0103a970;
    if ((DAT_028ab918 != 0) && (iVar1 = _OPENSSL_sk_find(), -1 < iVar1)) {
      lVar2 = _OPENSSL_sk_value();
      unaff_RSI = 0;
      goto joined_r0x0103aa84;
    }
    param_1 = (ENGINE *)&MACH_HEADER.cpusubtype;
    plVar3 = (longlong *)_OBJ_bsearch_(8,0x12,FUN_0103b670);
    if (plVar3 != (longlong *)0x0) {
      lVar2 = *plVar3;
      unaff_RSI = 0;
      goto joined_r0x0103aa84;
    }
  }
  _ENGINE_finish(param_1);
  iVar1 = 0x9c;
  reason = 0x8c;
LAB_0103aaae:
  _ERR_put_error(0x20116cf,iVar1,reason,param_4,in_stack_fffffffffffffee8);
  return (longlong *)0x0;
}


