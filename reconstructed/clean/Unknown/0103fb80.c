// Function: FUN_0103fb80
// Address: 0103fb80
// Size: 511 bytes
// Class: Unknown

int64_t FUN_0103fb80(EVP_MD *param_1,size_t param_2,size_t param_3,int64_t param_4)

{
  int64_t lVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *this_ptr;
  uint64_t uVar10;
  int64_t lVar11;
  uint64_t uVar12;
  void *local_res8;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  uVar2 = _EVP_MD_size(param_1);
  pvVar9 = (void *)(int64_t)(int)uVar2;
  if (((uint64_t)local_res8 | (uint64_t)pvVar9) >> 0x20 == 0) {
    uVar4 = ((uint64_t)local_res8 & 0xffffffff) / (uint64_t)uVar2;
    uVar6 = ((uint64_t)local_res8 & 0xffffffff) % (uint64_t)uVar2;
  }
  else {
    uVar4 = (uint64_t)local_res8 / (uint64_t)pvVar9;
    uVar6 = (uint64_t)local_res8 % (uint64_t)pvVar9;
  }
  uVar12 = (uVar4 + 1) - (uint64_t)(uVar6 == 0);
  lVar5 = 0;
  if ((uVar12 < 0x100) && (param_4 != 0)) {
    lVar5 = _HMAC_CTX_new();
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      uVar10 = 0;
      iVar3 = _HMAC_Init_ex();
      lVar5 = 0;
      if ((iVar3 != 0) && (lVar5 = param_4, uVar4 + 1 != (uint64_t)(uVar6 == 0))) {
        uVar4 = 1;
        lVar11 = 0;
        do {
          if (1 < (uint)uVar4) {
            param_2 = 0;
            this_ptr = (void *)0x0;
            uVar10 = 0;
            iVar3 = _HMAC_Init_ex();
            if (iVar3 != 0) {
              pvVar7 = pvVar9;
              iVar3 = _HMAC_Update();
              param_2 = (size_t)pvVar7;
              if (iVar3 != 0) goto LAB_0103fcae;
            }
LAB_0103fd3a:
            lVar5 = 0;
            break;
          }
LAB_0103fcae:
          param_2 = param_3;
          iVar3 = _HMAC_Update();
          if (iVar3 == 0) goto LAB_0103fd3a;
          param_2 = 1;
          iVar3 = _HMAC_Update();
          if (iVar3 == 0) goto LAB_0103fd3a;
          param_2 = 0;
          iVar3 = _HMAC_Final();
          if (iVar3 == 0) goto LAB_0103fd3a;
          pvVar7 = (void *)((int64_t)local_res8 - lVar11);
          if ((void *)((int64_t)pvVar9 + lVar11) <= local_res8) {
            pvVar7 = pvVar9;
          }
          this_ptr = local_res8;
          pvVar8 = pvVar7;
          _memcpy(local_res8,pvVar7,(size_t)uVar10);
          param_2 = (size_t)pvVar8;
          lVar11 = lVar11 + (int64_t)pvVar7;
          uVar4 = (uint64_t)((uint)uVar4 + 1);
        } while (uVar4 <= uVar12);
      }
      _OPENSSL_cleanse(this_ptr,param_2);
      _HMAC_CTX_free();
    }
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar1) {
                        ___stack_chk_fail();
  }
  return lVar5;
}

