// Function: FUN_00fb2110
// Address: 00fb2110
// Size: 785 bytes
// Class: Unknown
// String references:
//   "crypto/conf/conf_ssl.c"
//   "name="
//   "section="
//   ", value="

uint64_t FUN_00fb2110(CONF *param_1,char *param_2,uint64_t param_3,char *param_4)

{
  int64_t lVar1;
  int iVar2;
  char *pcVar3;
  STACK *pSVar4;
  int64_t lVar5;
  int64_t lVar6;
  char *pcVar7;
  int iVar8;
  qword *section;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t arg1;
  uint64_t uVar11;
  int iVar12;
  STACK *local_38;
  
  pcVar3 = _CONF_imodule_get_value((CONF_IMODULE *)param_1);
  pSVar4 = _NCONF_get_section(param_1,param_2);
  iVar2 = _OPENSSL_sk_num();
  if (iVar2 < 1) {
    iVar2 = 0x200bb77;
    if (pSVar4 == (STACK *)0x0) {
      iVar8 = 0x78;
      iVar12 = 0x48;
    }
    else {
      iVar8 = 0x77;
      iVar12 = 0x4a;
    }
    _ERR_put_error(0x200bb77,iVar8,iVar12,param_4,(int)arg1);
    _ERR_add_error_data(iVar2,pcVar3);
  }
  else {
    iVar2 = _OPENSSL_sk_num();
    FUN_00fb2430();
    section = &segment_command_00000020.filesize;
    lVar5 = _CRYPTO_zalloc();
    g_028a8e70 = lVar5;
    if (lVar5 != 0) {
      if (iVar2 == 0) {
        g_028a8e78 = (int64_t)iVar2;
        return 1;
      }
      g_028a8e78 = (int64_t)iVar2;
      lVar6 = _OPENSSL_sk_value();
      local_38 = _NCONF_get_section(param_1,(char *)section);
      iVar2 = _OPENSSL_sk_num();
      iVar8 = (int)arg1;
      if (0 < iVar2) {
        uVar10 = 0;
        do {
          pcVar3 = _CRYPTO_strdup((char *)param_1,
                                  (char *)((int64_t)&segment_command_00000020.nsects + 3),
                                  (int)param_3);
          *(char **)(lVar5 + uVar10 * 0x18) = pcVar3;
          if (pcVar3 == (char *)0x0) goto LAB_00fb2400;
          iVar2 = _OPENSSL_sk_num();
          uVar11 = (uint64_t)iVar2;
          pcVar3 = (char *)((int64_t)&segment_command_00000020.flags + 3);
          lVar6 = _CRYPTO_zalloc();
          *(int64_t *)(lVar5 + 8 + uVar10 * 0x18) = lVar6;
          if (lVar6 == 0) goto LAB_00fb2400;
          *(uint64_t *)(lVar5 + 0x10 + uVar10 * 0x18) = uVar11;
          if (iVar2 != 0) {
            if (uVar11 < 2) {
              uVar11 = 1;
            }
            lVar6 = 0;
            uVar9 = 0;
            do {
              iVar2 = (int)pcVar3;
              _OPENSSL_sk_value();
              lVar1 = *(int64_t *)(lVar5 + uVar10 * 0x18 + 8);
              _strchr((char *)param_1,iVar2);
              pcVar3 = _CRYPTO_strdup((char *)param_1,section_00000068.sectname + 0xe,(int)param_3);
              *(char **)(lVar1 + lVar6) = pcVar3;
              pcVar3 = section_00000068.sectname + 0xf;
              pcVar7 = _CRYPTO_strdup((char *)param_1,section_00000068.sectname + 0xf,(int)param_3);
              *(char **)(lVar1 + 8 + lVar6) = pcVar7;
              if ((*(int64_t *)(lVar1 + lVar6) == 0) || (pcVar7 == (char *)0x0)) goto LAB_00fb2400;
              uVar9 = uVar9 + 1;
              lVar6 = lVar6 + 0x10;
            } while (uVar11 != uVar9);
          }
          lVar5 = g_028a8e70;
          uVar10 = uVar10 + 1;
          if (g_028a8e78 <= uVar10) {
            return 1;
          }
          lVar6 = _OPENSSL_sk_value();
          local_38 = _NCONF_get_section(param_1,pcVar3);
          iVar2 = _OPENSSL_sk_num();
          iVar8 = (int)arg1;
        } while (0 < iVar2);
      }
      if (local_38 == (STACK *)0x0) {
        iVar2 = 0x76;
        iVar12 = 0x5c;
      }
      else {
        iVar2 = 0x75;
        iVar12 = 0x5f;
      }
      _ERR_put_error(0x200bb77,iVar2,iVar12,param_4,iVar8);
      _ERR_add_error_data(0x201e2ac,*(void*)(lVar6 + 8),*(void*)(lVar6 + 0x10));
    }
  }
LAB_00fb2400:
  FUN_00fb2430();
  return 0;
}

