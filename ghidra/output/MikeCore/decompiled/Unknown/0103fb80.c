// Function: FUN_0103fb80
// Address: 0103fb80
// Size: 511 bytes
// Class: Unknown


longlong FUN_0103fb80(EVP_MD *param_1,size_t param_2,size_t param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *unaff_RDI;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  void *local_res8;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  uVar2 = _EVP_MD_size(param_1);
  pvVar9 = (void *)(longlong)(int)uVar2;
  if (((ulonglong)local_res8 | (ulonglong)pvVar9) >> 0x20 == 0) {
    uVar4 = ((ulonglong)local_res8 & 0xffffffff) / (ulonglong)uVar2;
    uVar6 = ((ulonglong)local_res8 & 0xffffffff) % (ulonglong)uVar2;
  }
  else {
    uVar4 = (ulonglong)local_res8 / (ulonglong)pvVar9;
    uVar6 = (ulonglong)local_res8 % (ulonglong)pvVar9;
  }
  uVar12 = (uVar4 + 1) - (ulonglong)(uVar6 == 0);
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
      if ((iVar3 != 0) && (lVar5 = param_4, uVar4 + 1 != (ulonglong)(uVar6 == 0))) {
        uVar4 = 1;
        lVar11 = 0;
        do {
          if (1 < (uint)uVar4) {
            param_2 = 0;
            unaff_RDI = (void *)0x0;
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
          pvVar7 = (void *)((longlong)local_res8 - lVar11);
          if ((void *)((longlong)pvVar9 + lVar11) <= local_res8) {
            pvVar7 = pvVar9;
          }
          unaff_RDI = local_res8;
          pvVar8 = pvVar7;
          _memcpy(local_res8,pvVar7,(size_t)uVar10);
          param_2 = (size_t)pvVar8;
          lVar11 = lVar11 + (longlong)pvVar7;
          uVar4 = (ulonglong)((uint)uVar4 + 1);
        } while (uVar4 <= uVar12);
      }
      _OPENSSL_cleanse(unaff_RDI,param_2);
      _HMAC_CTX_free();
    }
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar5;
}


