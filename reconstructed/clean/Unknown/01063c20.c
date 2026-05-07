// Function: FUN_01063c20
// Address: 01063c20
// Size: 521 bytes
// Class: Unknown
// String references:
//   "crypto/rand/drbg_lib.c"

int64_t FUN_01063c20(int64_t *param_1,uint64_t param_2,CRYPTO_EX_DATA *param_3,char *param_4)

{
  int iVar1;
  uint32_t uVar2;
  int64_t lVar3;
  uint class_index;
  int unaff_EBP;
  int unaff_EDI;
  
  if (unaff_EDI == 0) {
    lVar3 = _CRYPTO_zalloc(param_1,0xc0);
    if (lVar3 != 0) {
      class_index = 0;
      goto LAB_01063c88;
    }
  }
  else {
    lVar3 = _CRYPTO_secure_zalloc(param_1,0xbf);
    if (lVar3 != 0) {
      iVar1 = _CRYPTO_secure_allocated();
      class_index = (uint)(iVar1 != 0);
LAB_01063c88:
      *(uint *)(lVar3 + 0x10) = class_index;
      uVar2 = _openssl_get_fork_id();
      *(void*)(lVar3 + 0x18) = uVar2;
      *(int64_t **)(lVar3 + 8) = param_1;
      *(code **)(lVar3 + 0x158) = _rand_drbg_get_entropy;
      *(code **)(lVar3 + 0x160) = _rand_drbg_cleanup_entropy;
      if (param_1 == (int64_t *)0x0) {
        *(code **)(lVar3 + 0x168) = _rand_drbg_get_nonce;
        *(code **)(lVar3 + 0x170) = _rand_drbg_cleanup_nonce;
        *(void*)(lVar3 + 0x74) = g_0278b6f4;
        *(void*)(lVar3 + 0x80) = g_0278b700;
        iVar1 = _RAND_DRBG_set();
        if (iVar1 != 0) {
          return lVar3;
        }
      }
      else {
        *(void*)(lVar3 + 0x74) = g_0278b6f8;
        *(void*)(lVar3 + 0x80) = g_0278b708;
        iVar1 = _RAND_DRBG_set();
        if (iVar1 != 0) {
          if (*param_1 != 0) {
            _CRYPTO_THREAD_write_lock();
          }
          if (*(int *)(lVar3 + 0x30) <= (int)param_1[6]) {
            if (*param_1 != 0) {
              _CRYPTO_THREAD_unlock();
              return lVar3;
            }
            return lVar3;
          }
          if (*param_1 != 0) {
            _CRYPTO_THREAD_unlock();
          }
          class_index = 0x201a595;
          param_3 = (CRYPTO_EX_DATA *)&section_000000b8.align;
          _ERR_put_error(0x201a595,0x83,0xec,param_4,unaff_EBP);
        }
      }
      if (*(int64_t *)(lVar3 + 0x150) != 0) {
        (**(code **)(*(int64_t *)(lVar3 + 0x150) + 0x18))();
      }
      _rand_pool_free();
      _CRYPTO_THREAD_lock_free();
      _CRYPTO_free_ex_data(class_index,(void *)(lVar3 + 0xa0),param_3);
      if (*(int *)(lVar3 + 0x10) != 0) {
        _CRYPTO_secure_clear_free(0x113,"crypto/rand/drbg_lib.c");
        return 0;
      }
      _CRYPTO_clear_free(0x115,"crypto/rand/drbg_lib.c");
      return 0;
    }
  }
  _ERR_put_error(0x201a595,0x41,0xc3,param_4,unaff_EBP);
  return 0;
}

