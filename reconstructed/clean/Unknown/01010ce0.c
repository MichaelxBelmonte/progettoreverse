// Function: FUN_01010ce0
// Address: 01010ce0
// Size: 1275 bytes
// Class: Unknown
// String references:
//   "/System/Library/Frameworks/AppKit.framework/Versions/C/AppKit"
//   "crypto/ec/ecp_nistz256.c"

uint64_t FUN_01010ce0(char *param_1,uint64_t param_2,EC_POINT *param_3,BN_CTX *param_4)

{
  int iVar1;
  EC_POINT *pEVar2;
  int64_t *plVar3;
  int64_t lVar4;
  void *pvVar5;
  EC_POINT *r;
  EC_POINT *r_00;
  char *pcVar6;
  EC_POINT *pEVar7;
  EC_POINT *pEVar8;
  uint64_t uVar9;
  BN_CTX *arg1;
  int64_t this_ptr;
  int reason;
  int in_stack_ffffffffffffff68;
  uint32_t in_stack_ffffffffffffff6c;
  EC_GROUP *local_60;
  int local_54;
  
  _EC_pre_comp_free();
  pEVar2 = _EC_GROUP_get0_generator((EC_GROUP *)param_1);
  if (pEVar2 == (EC_POINT *)0x0) {
    _ERR_put_error(0x200f0f3,0x71,0x33f,(char *)param_4,in_stack_ffffffffffffff68);
    return 0;
  }
  iVar1 = FUN_01011580();
  if (iVar1 != 0) {
    return 1;
  }
  if (this_ptr == 0) {
    return 0;
  }
  plVar3 = (int64_t *)_CRYPTO_zalloc();
  if (plVar3 == (int64_t *)0x0) {
    _ERR_put_error(0x200f0f3,0x41,0x4c8,(char *)param_4,in_stack_ffffffffffffff68);
    return 0;
  }
  *plVar3 = this_ptr;
  plVar3[1] = 6;
  LOCK();
  *(void*)(plVar3 + 4) = 1;
  UNLOCK();
  lVar4 = _CRYPTO_THREAD_lock_new();
  plVar3[5] = lVar4;
  if (lVar4 == 0) {
    pcVar6 = "crypto/ec/ecp_nistz256.c";
    _ERR_put_error(0x200f0f3,0x41,0x4d2,(char *)param_4,in_stack_ffffffffffffff68);
    _CRYPTO_free(pcVar6);
    return 0;
  }
  uVar9 = 0;
  if ((arg1 == (BN_CTX *)0x0) && (arg1 = _BN_CTX_new(), arg1 == (BN_CTX *)0x0)) {
    uVar9 = 0;
  }
  else {
    _BN_CTX_start((BN_CTX *)param_1);
    lVar4 = _EC_GROUP_get0_order();
    if (lVar4 != 0) {
      iVar1 = _BN_is_zero();
      if (iVar1 == 0) {
        pEVar7 = (EC_POINT *)((int64_t)&section_00000338.size + 2);
        pvVar5 = _CRYPTO_malloc((int)param_1,(char *)((int64_t)&section_00000338.size + 2),
                                (int)param_3);
        if (pvVar5 != (void *)0x0) {
          r = _EC_POINT_new((EC_GROUP *)param_1);
          r_00 = _EC_POINT_new((EC_GROUP *)param_1);
          if (((r != (EC_POINT *)0x0) && (r_00 != (EC_POINT *)0x0)) &&
             (iVar1 = _EC_POINT_copy((EC_POINT *)param_1,pEVar7), iVar1 != 0)) {
            pEVar8 = (EC_POINT *)(((uint64_t)pvVar5 & 0xffffffffffffffc0) + 0x40);
            param_1 = (char *)((int64_t)pvVar5 - (uint64_t)((uint)pvVar5 & 0x3f));
            uVar9 = 0;
            local_54 = 0;
            pEVar7 = pEVar8;
            do {
              iVar1 = _EC_POINT_copy((EC_POINT *)param_1,pEVar7);
              if (iVar1 == 0) goto LAB_01010e8c;
              local_60 = (EC_GROUP *)&segment_command_00000020.vmsize;
              do {
                iVar1 = _EC_POINT_make_affine
                                  ((EC_GROUP *)param_1,(EC_POINT *)arg1,(BN_CTX *)param_3);
                if (iVar1 == 0) goto LAB_01010e8c;
                iVar1 = _bn_copy_words();
                if ((iVar1 == 0) || (iVar1 = _bn_copy_words(), iVar1 == 0)) {
                  param_1 = "crypto/ec/ecp_nistz256.c";
                  _ERR_put_error(0x200f0f3,0x92,899,(char *)param_4,in_stack_ffffffffffffff68);
                  goto LAB_01010e8c;
                }
                _ecp_nistz256_scatter_w7(local_60,local_54);
                param_1 = (char *)arg1;
                iVar1 = _EC_POINT_dbl((EC_GROUP *)arg1,r,param_3,param_4);
                if (((iVar1 == 0) ||
                    (param_1 = (char *)arg1,
                    iVar1 = _EC_POINT_dbl((EC_GROUP *)arg1,r,param_3,param_4), iVar1 == 0)) ||
                   ((param_1 = (char *)arg1,
                    iVar1 = _EC_POINT_dbl((EC_GROUP *)arg1,r,param_3,param_4), iVar1 == 0 ||
                    ((((param_1 = (char *)arg1,
                       iVar1 = _EC_POINT_dbl((EC_GROUP *)arg1,r,param_3,param_4), iVar1 == 0 ||
                       (param_1 = (char *)arg1,
                       iVar1 = _EC_POINT_dbl((EC_GROUP *)arg1,r,param_3,param_4), iVar1 == 0))
                      || (param_1 = (char *)arg1,
                         iVar1 = _EC_POINT_dbl((EC_GROUP *)arg1,r,param_3,param_4), iVar1 == 0)
                      ) || (param_1 = (char *)arg1,
                           iVar1 = _EC_POINT_dbl((EC_GROUP *)arg1,r,param_3,param_4),
                           iVar1 == 0)))))) goto LAB_01010e8c;
                param_1 = (char *)(local_60 + 0x1000);
                local_60 = (EC_GROUP *)param_1;
              } while ((EC_GROUP *)param_1 != (EC_GROUP *)0x25040);
              param_1 = (char *)pEVar2;
              pEVar7 = r_00;
              param_3 = (EC_POINT *)arg1;
              iVar1 = _EC_POINT_add((EC_GROUP *)pEVar2,r_00,(EC_POINT *)arg1,
                                    (EC_POINT *)param_4,
                                    (BN_CTX *)
                                    CONCAT44(in_stack_ffffffffffffff6c,in_stack_ffffffffffffff68));
              if (iVar1 == 0) goto LAB_01010e8c;
              local_54 = local_54 + 1;
            } while (local_54 != 0x40);
            *plVar3 = this_ptr;
            plVar3[1] = 7;
            plVar3[2] = (int64_t)pEVar8;
            plVar3[3] = (int64_t)pvVar5;
            *(void*)(this_ptr + 0x98) = 4;
            *(int64_t **)(this_ptr + 0xa0) = plVar3;
            uVar9 = 1;
            plVar3 = (int64_t *)0x0;
          }
          goto LAB_01010e8c;
        }
        iVar1 = 0x41;
        reason = 0x363;
      }
      else {
        iVar1 = 0x72;
        reason = 0x35b;
      }
      param_1 = "crypto/ec/ecp_nistz256.c";
      _ERR_put_error(0x200f0f3,iVar1,reason,(char *)param_4,in_stack_ffffffffffffff68);
    }
    uVar9 = 0;
  }
LAB_01010e8c:
  _BN_CTX_end((BN_CTX *)param_1);
  _BN_CTX_free((BN_CTX *)param_1);
  if (plVar3 != (int64_t *)0x0) {
    LOCK();
    plVar3 = plVar3 + 4;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) || ((int)lVar4 < 2)) {
      _CRYPTO_free(param_1);
      _CRYPTO_THREAD_lock_free();
      _CRYPTO_free(param_1);
    }
  }
  _CRYPTO_free(param_1);
  _EC_POINT_free((EC_POINT *)param_1);
  _EC_POINT_free((EC_POINT *)param_1);
  return uVar9;
}

