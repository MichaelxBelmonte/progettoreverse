// Function: FUN_010bb450
// Address: 010bb450
// Size: 1908 bytes
// Class: Unknown
// String references:
//   " \t"
//   "crypto/x509v3/v3_addr.c"
//   "IPv4"
//   "IPv6"
//   "IPv4-SAFI"
//   "IPv6-SAFI"
//   "inherit"
//   "section:"
//   ",name:"
//   ",value:"
//   "0123456789."
//   "0123456789.:abcdefABCDEF"

uchar * FUN_010bb450(uint64_t param_1,char *param_2,void*param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  size_t sVar5;
  size_t sVar6;
  size_t sVar7;
  uint uVar8;
  ASN1_NULL *pAVar9;
  int *piVar10;
  void*puVar11;
  ulong *puVar12;
  uint32_t extraout_var;
  uint32_t extraout_var_00;
  char *pcVar13;
  int64_t lVar14;
  uchar *ipout;
  char *name;
  dword *ipasc;
  uint64_t uVar15;
  uint64_t uVar16;
  ulong local_8c;
  int line;
  void*in_stack_ffffffffffffff78;
  char *local_80;
  uint local_68;
  uchar *local_60;
  uint8_t local_58 [16];
  uchar local_48 [16];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_60 = (uchar *)_OPENSSL_sk_new();
  if (local_60 == (uchar *)0x0) {
    _ERR_put_error(0x201db1e,0x41,0x382,param_4,(int)in_stack_ffffffffffffff78);
  }
  else {
    name = (char *)local_60;
    iVar2 = _OPENSSL_sk_num();
    if (0 < iVar2) {
      iVar2 = 0;
LAB_010bb526:
      puVar11 = (void*)_OPENSSL_sk_value();
      iVar3 = _name_cmp(name,param_2);
      if (iVar3 != 0) {
        iVar3 = _name_cmp(name,param_2);
        if (iVar3 == 0) {
          local_68 = 0x10;
          goto LAB_010bb5e2;
        }
        iVar3 = _name_cmp(name,param_2);
        if (iVar3 == 0) {
          local_68 = 4;
LAB_010bb61f:
          pcVar13 = (char *)0x0;
          uVar4 = _strtoul(name,(char **)0x0,(int)param_3);
          local_8c = uVar4;
          sVar5 = _strspn(name,pcVar13);
          line = (int)in_stack_ffffffffffffff78;
          if ((0xff < uVar4) || (local_80[CONCAT44(extraout_var,sVar5)] != ':')) {
            iVar2 = 0xa4;
            iVar3 = 0x3b1;
            goto LAB_010bba46;
          }
          sVar6 = _strspn(name,pcVar13);
          local_80 = local_80 + CONCAT44(extraout_var,sVar5) + CONCAT44(extraout_var_00,sVar6) + 1;
          ipasc = (dword *)((int64_t)&section_00000388.size + 6);
          pcVar13 = _CRYPTO_strdup(name,(char *)((int64_t)&section_00000388.size + 6),(int)param_3)
          ;
          iVar3 = (int)in_stack_ffffffffffffff78;
          puVar12 = &local_8c;
          ipout = (uchar *)name;
          goto joined_r0x010bb6ae;
        }
        iVar3 = _name_cmp(name,param_2);
        line = (int)in_stack_ffffffffffffff78;
        if (iVar3 == 0) {
          local_68 = 0x10;
          goto LAB_010bb61f;
        }
        iVar2 = 0x73;
        iVar3 = 0x399;
LAB_010bba46:
        _ERR_put_error(0x201db1e,iVar2,iVar3,param_4,line);
        uVar15 = *puVar11;
        uVar16 = puVar11[1];
LAB_010bbb5a:
        name = ",name:";
        _ERR_add_error_data(0x201e68a,uVar15,uVar16,",value:");
        goto LAB_010bbb66;
      }
      local_68 = 4;
LAB_010bb5e2:
      ipasc = &section_00000388.offset;
      pcVar13 = _CRYPTO_strdup(name,(char *)&section_00000388.offset,(int)param_3);
      iVar3 = (int)in_stack_ffffffffffffff78;
      puVar12 = (ulong *)0x0;
      ipout = (uchar *)name;
joined_r0x010bb6ae:
      if (pcVar13 == (char *)0x0) {
        name = "crypto/x509v3/v3_addr.c";
        _ERR_put_error(0x201db1e,0x41,0x3bb,param_4,iVar3);
        goto LAB_010bbb66;
      }
      iVar3 = _strcmp((char *)ipout,(char *)ipasc);
      sVar5 = (size_t)param_3;
      if (iVar3 == 0) {
        lVar14 = FUN_010ba370();
        if ((lVar14 == 0) || (piVar10 = *(int **)(lVar14 + 8), piVar10 == (int *)0x0)) {
LAB_010bb949:
          iVar2 = 0xa5;
          iVar3 = 0x3c6;
          goto LAB_010bbb2e;
        }
        if (*piVar10 == 0) {
          param_2 = (char *)((int64_t)&section_00000388.flags + 2);
          name = (char *)0x0;
          if (*(int64_t *)(piVar10 + 2) != 0) goto LAB_010bb4f8;
LAB_010bb4d3:
          pAVar9 = _ASN1_NULL_new();
          name = *(char **)(lVar14 + 8);
          *(ASN1_NULL **)(name + 8) = pAVar9;
          if (pAVar9 == (ASN1_NULL *)0x0) goto LAB_010bb949;
          piVar10 = *(int **)(lVar14 + 8);
        }
        else {
          if (*piVar10 == 1) {
            if (*(int64_t *)(piVar10 + 2) != 0) goto LAB_010bb949;
            goto LAB_010bb4d3;
          }
          name = *(char **)(piVar10 + 2);
          if ((uchar *)name == (uchar *)0x0) goto LAB_010bb4d3;
        }
        *piVar10 = 0;
        param_2 = (char *)((int64_t)&section_00000388.flags + 2);
      }
      else {
        sVar6 = _strspn((char *)ipout,(char *)ipasc);
        sVar7 = _strspn((char *)ipout,(char *)ipasc);
        cVar1 = pcVar13[(int)(sVar7 + sVar6)];
        pcVar13[(int)sVar6] = '\0';
        uVar8 = _a2i_ipadd(ipout,(char *)ipasc);
        if (uVar8 != local_68) {
          _ERR_put_error(0x201db1e,0xa6,0x3d5,param_4,(int)puVar11);
          name = ",name:";
          _ERR_add_error_data(0x201e68a,*puVar11,puVar11[1],",value:");
          goto LAB_010bbb66;
        }
        if (cVar1 != '\0') {
          iVar3 = sVar7 + sVar6 + 1;
          if (cVar1 != '-') {
            in_stack_ffffffffffffff78 = puVar11;
            if (cVar1 == '/') {
              uVar4 = _strtoul((char *)ipout,(char **)((int64_t)&MACH_HEADER.cpusubtype + 2),sVar5)
              ;
              if ((local_80 != pcVar13 + iVar3) && (*local_80 == '\0')) {
                name = (char *)local_48;
                param_3 = (void*)(uint64_t)uVar4;
                iVar3 = _X509v3_addr_add_prefix(name,puVar12);
                param_2 = (char *)((int64_t)&segment_command_000003d8.filesize + 7);
                if (iVar3 != 0) goto LAB_010bb4f8;
                name = "crypto/x509v3/v3_addr.c";
                _ERR_put_error(0x201db1e,0x41,0x3e4,param_4,(int)in_stack_ffffffffffffff78);
                goto LAB_010bbb66;
              }
              iVar2 = 0x3df;
            }
            else {
              iVar2 = 0x40a;
            }
            _ERR_put_error(0x201db1e,0x74,iVar2,param_4,(int)in_stack_ffffffffffffff78);
            uVar15 = *puVar11;
            uVar16 = puVar11[1];
            goto LAB_010bbb5a;
          }
          sVar6 = _strspn((char *)ipout,(char *)ipasc);
          sVar7 = _strspn((char *)ipout,(char *)ipasc);
          in_stack_ffffffffffffff78 = puVar11;
          if ((sVar7 == 0) || (pcVar13[(int)(sVar6 + iVar3 + sVar7)] != '\0')) {
            iVar2 = 0x74;
            iVar3 = 0x3ed;
          }
          else {
            param_3 = local_58;
            uVar8 = _a2i_ipadd(ipout,(char *)ipasc);
            if (uVar8 != local_68) {
              iVar2 = 0xa6;
              iVar3 = 0x3f3;
              goto LAB_010bbb2e;
            }
            name = (char *)local_48;
            iVar3 = _memcmp(ipout,(void *)(uint64_t)local_68,sVar5);
            if (iVar3 < 1) {
              iVar3 = _X509v3_addr_add_range(name,puVar12);
              param_2 = (char *)((int64_t)&segment_command_000003d8.filesize + 7);
              if (iVar3 != 0) goto LAB_010bb4f8;
              name = "crypto/x509v3/v3_addr.c";
              _ERR_put_error(0x201db1e,0x41,0x3fe,param_4,(int)in_stack_ffffffffffffff78);
              goto LAB_010bbb66;
            }
            iVar2 = 0x74;
            iVar3 = 0x3f9;
          }
LAB_010bbb2e:
          _ERR_put_error(0x201db1e,iVar2,iVar3,param_4,(int)in_stack_ffffffffffffff78);
          uVar15 = *puVar11;
          uVar16 = puVar11[1];
          goto LAB_010bbb5a;
        }
        name = (char *)local_48;
        param_3 = (void*)(uint64_t)(local_68 << 3);
        iVar3 = _X509v3_addr_add_prefix(name,puVar12);
        param_2 = (char *)((int64_t)&segment_command_000003d8.filesize + 7);
        in_stack_ffffffffffffff78 = puVar11;
        if (iVar3 == 0) {
          name = "crypto/x509v3/v3_addr.c";
          _ERR_put_error(0x201db1e,0x41,0x404,param_4,(int)puVar11);
          goto LAB_010bbb66;
        }
      }
LAB_010bb4f8:
      _CRYPTO_free(name);
      iVar2 = iVar2 + 1;
      iVar3 = _OPENSSL_sk_num();
      if (iVar3 <= iVar2) goto LAB_010bb90d;
      goto LAB_010bb526;
    }
LAB_010bb90d:
    iVar2 = _X509v3_addr_canonize();
    if (iVar2 != 0) goto LAB_010bbb90;
LAB_010bbb66:
    _CRYPTO_free(name);
    _OPENSSL_sk_pop_free();
  }
  local_60 = (uchar *)0x0;
LAB_010bbb90:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return local_60;
}

