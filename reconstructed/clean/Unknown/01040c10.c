// Function: FUN_01040c10
// Address: 01040c10
// Size: 1092 bytes
// Class: Unknown

uint64_t FUN_01040c10(EVP_MD *param_1,EVP_MD *param_2,EVP_MD *param_3,ENGINE *param_4)

{
  uint uVar1;
  int iVar2;
  _func_5514 *p_Var3;
  _func_5513 *p_Var4;
  _func_5516 *p_Var5;
  EVP_MD *pEVar6;
  EVP_MD *pkey;
  size_t len;
  EVP_MD_CTX *pEVar7;
  EVP_MD *in;
  uint64_t uVar8;
  size_t unaff_ESI;
  EVP_MD *this_ptr;
  size_t cnt;
  EVP_MD *local_res8;
  uint8_t local_c8 [24];
  uint8_t local_b0 [16];
  EVP_MD *local_a0;
  _func_5513 *local_98;
  _func_5514 *local_90;
  EVP_MD *local_88;
  _func_5516 *local_80;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  pkey = param_1;
  local_88 = param_2;
  uVar1 = _EVP_MD_size(param_1);
  len = (size_t)param_2;
  if ((int)uVar1 < 1) {
    uVar8 = 0;
    goto LAB_01041000;
  }
  local_c8._8_8_ = param_3;
  local_c8._16_8_ = param_1;
  p_Var3 = (_func_5514 *)_EVP_MD_CTX_new();
  p_Var4 = (_func_5513 *)_EVP_MD_CTX_new();
  p_Var5 = (_func_5516 *)_EVP_MD_CTX_new();
  local_90 = p_Var3;
  if (p_Var3 == (_func_5514 *)0x0) {
    uVar8 = 0;
    goto LAB_01041000;
  }
  local_98 = p_Var4;
  if ((p_Var4 == (_func_5513 *)0x0) || (p_Var5 == (_func_5516 *)0x0)) {
    uVar8 = 0;
    goto LAB_01041000;
  }
  local_b0._8_8_ = param_4;
  _EVP_MD_CTX_set_flags((EVP_MD_CTX *)pkey,len);
  pkey = local_88;
  len = unaff_ESI;
  pEVar6 = (EVP_MD *)_EVP_PKEY_new_raw_private_key();
  if (pEVar6 == (EVP_MD *)0x0) {
    uVar8 = 0;
    goto LAB_01041000;
  }
  uVar8 = 0;
  pkey = (EVP_MD *)0x0;
  local_88 = pEVar6;
  iVar2 = _EVP_DigestSignInit();
  if (((iVar2 == 0) ||
      (local_80 = p_Var5, iVar2 = _EVP_MD_CTX_copy_ex((EVP_MD_CTX *)pkey,(EVP_MD_CTX *)this_ptr),
      iVar2 == 0)) ||
     (((EVP_MD *)local_c8._16_8_ != (EVP_MD *)0x0 &&
      (this_ptr = (EVP_MD *)local_c8._8_8_,
      iVar2 = _EVP_DigestUpdate((EVP_MD_CTX *)pkey,(void *)local_c8._8_8_,(size_t)pEVar6),
      iVar2 == 0)))) {
LAB_01040ff5:
    len = (size_t)this_ptr;
  }
  else {
    pEVar7 = (EVP_MD_CTX *)local_b0;
    iVar2 = _EVP_DigestSignFinal();
    if ((iVar2 == 0) || (iVar2 = _EVP_MD_CTX_copy_ex((EVP_MD_CTX *)pkey,pEVar7), iVar2 == 0)) {
      len = (size_t)pEVar7;
    }
    else {
      local_a0 = local_res8;
      if ((EVP_MD *)local_c8._16_8_ != (EVP_MD *)0x0) {
        while( true ) {
          in = (EVP_MD *)local_b0._0_8_;
          iVar2 = _EVP_DigestUpdate((EVP_MD_CTX *)pkey,(void *)local_b0._0_8_,(size_t)pEVar6);
          cnt = (size_t)pEVar6;
          if (iVar2 == 0) goto LAB_01040f6b;
          if (local_a0 <= (EVP_MD *)(uint64_t)uVar1) break;
          iVar2 = _EVP_MD_CTX_copy_ex((EVP_MD_CTX *)pkey,(EVP_MD_CTX *)in);
          if ((iVar2 == 0) ||
             (in = (EVP_MD *)local_c8._8_8_,
             iVar2 = _EVP_DigestUpdate((EVP_MD_CTX *)pkey,(void *)local_c8._8_8_,(size_t)pEVar6),
             iVar2 == 0)) goto LAB_01040f6b;
          pEVar7 = (EVP_MD_CTX *)local_c8;
          iVar2 = _EVP_DigestSignFinal();
          uVar8 = local_c8._0_8_;
          if (iVar2 == 0) goto LAB_01040f7d;
          pEVar7 = (EVP_MD_CTX *)local_b0;
          iVar2 = _EVP_DigestSignFinal();
          if (iVar2 == 0) goto LAB_01040f7d;
          local_a0 = (EVP_MD *)((int64_t)local_a0 - uVar8);
          local_b0._8_8_ = local_b0._8_8_ + uVar8;
          iVar2 = _EVP_MD_CTX_copy_ex((EVP_MD_CTX *)pkey,pEVar7);
          len = (size_t)pEVar7;
          if (iVar2 == 0) goto LAB_01040f91;
        }
        pEVar6 = (EVP_MD *)local_c8._8_8_;
        iVar2 = _EVP_DigestUpdate((EVP_MD_CTX *)pkey,(void *)local_c8._8_8_,cnt);
        len = (size_t)pEVar6;
        if (iVar2 == 0) goto LAB_01040f71;
LAB_01040fbe:
        uVar8 = 0;
        this_ptr = (EVP_MD *)local_b0;
        iVar2 = _EVP_DigestSignFinal();
        if (iVar2 != 0) {
          this_ptr = local_a0;
          _memcpy(pkey,local_a0,cnt);
          uVar8 = 1;
        }
        goto LAB_01040ff5;
      }
      do {
        in = (EVP_MD *)local_b0._0_8_;
        iVar2 = _EVP_DigestUpdate((EVP_MD_CTX *)pkey,(void *)local_b0._0_8_,(size_t)pEVar6);
        cnt = (size_t)pEVar6;
        if (iVar2 == 0) goto LAB_01040f6b;
        if (local_a0 <= (EVP_MD *)(uint64_t)uVar1) goto LAB_01040fbe;
        iVar2 = _EVP_MD_CTX_copy_ex((EVP_MD_CTX *)pkey,(EVP_MD_CTX *)in);
        if (iVar2 == 0) goto LAB_01040f6b;
        pEVar7 = (EVP_MD_CTX *)local_c8;
        iVar2 = _EVP_DigestSignFinal();
        uVar8 = local_c8._0_8_;
        if (iVar2 == 0) goto LAB_01040f7d;
        pEVar7 = (EVP_MD_CTX *)local_b0;
        iVar2 = _EVP_DigestSignFinal();
        if (iVar2 == 0) goto LAB_01040f7d;
        local_a0 = (EVP_MD *)((int64_t)local_a0 - uVar8);
        local_b0._8_8_ = local_b0._8_8_ + uVar8;
        iVar2 = _EVP_MD_CTX_copy_ex((EVP_MD_CTX *)pkey,pEVar7);
        len = (size_t)pEVar7;
      } while (iVar2 != 0);
    }
LAB_01040f91:
    uVar8 = 0;
  }
LAB_01041000:
  _EVP_PKEY_free((EVP_PKEY *)pkey);
  _EVP_MD_CTX_free();
  _EVP_MD_CTX_free();
  _EVP_MD_CTX_free();
  _OPENSSL_cleanse(pkey,len);
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return uVar8;
LAB_01040f6b:
  len = (size_t)in;
LAB_01040f71:
  uVar8 = 0;
  goto LAB_01041000;
LAB_01040f7d:
  len = (size_t)pEVar7;
  goto LAB_01040f91;
}

