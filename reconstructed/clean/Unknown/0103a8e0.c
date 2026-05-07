// Function: FUN_0103a8e0
// Address: 0103a8e0
// Size: 562 bytes
// Class: Unknown
// String references:
//   "crypto/evp/pmeth_lib.c"

int64_t * FUN_0103a8e0(ENGINE *param_1,int param_2,uint64_t param_3,char *param_4)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  EVP_PKEY *pkey;
  int64_t arg1;
  int64_t this_ptr;
  int reason;
  int in_stack_fffffffffffffee8;
  
  if ((param_2 == -1) && (this_ptr == 0)) {
    return (int64_t *)0x0;
  }
  if ((arg1 == 0) && (this_ptr != 0)) {
    arg1 = *(int64_t *)(this_ptr + 0x20);
    if (arg1 == 0) {
      arg1 = *(int64_t *)(this_ptr + 0x18);
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
      plVar3 = (int64_t *)_CRYPTO_zalloc();
      if (plVar3 != (int64_t *)0x0) {
        plVar3[1] = arg1;
        *plVar3 = lVar2;
        *(void*)(plVar3 + 4) = 0;
        plVar3[2] = this_ptr;
        if (this_ptr != 0) {
          _EVP_PKEY_up_ref();
        }
        pkey = *(EVP_PKEY **)(lVar2 + 8);
        if (pkey != (EVP_PKEY *)0x0) {
          iVar1 = (*pkey)();
          if (iVar1 < 1) {
            *plVar3 = 0;
            _EVP_PKEY_free(pkey);
            _EVP_PKEY_free(pkey);
            _ENGINE_finish((ENGINE *)pkey);
            _CRYPTO_free(pkey);
            return (int64_t *)0x0;
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
    if (arg1 != 0) goto LAB_0103a92f;
    arg1 = _ENGINE_get_pkey_meth_engine();
    if (arg1 != 0) goto LAB_0103a970;
    if ((g_028ab918 != 0) && (iVar1 = _OPENSSL_sk_find(), -1 < iVar1)) {
      lVar2 = _OPENSSL_sk_value();
      arg1 = 0;
      goto joined_r0x0103aa84;
    }
    param_1 = (ENGINE *)&MACH_HEADER.cpusubtype;
    plVar3 = (int64_t *)_OBJ_bsearch_(8,0x12,FUN_0103b670);
    if (plVar3 != (int64_t *)0x0) {
      lVar2 = *plVar3;
      arg1 = 0;
      goto joined_r0x0103aa84;
    }
  }
  _ENGINE_finish(param_1);
  iVar1 = 0x9c;
  reason = 0x8c;
LAB_0103aaae:
  _ERR_put_error(0x20116cf,iVar1,reason,param_4,in_stack_fffffffffffffee8);
  return (int64_t *)0x0;
}

