// Function: FUN_00f6ab60
// Address: 00f6ab60
// Size: 522 bytes
// Class: Unknown
// String references:
//   "crypto/asn1/asn_moid.c"


char * FUN_00f6ab60(CONF *param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  STACK *pSVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  char *oid;
  int iVar8;
  undefined8 unaff_R12;
  char *pcVar9;
  
  _CONF_imodule_get_value((CONF_IMODULE *)param_1);
  pSVar4 = _NCONF_get_section(param_1,param_2);
  iVar2 = (int)unaff_R12;
  if (pSVar4 == (STACK *)0x0) {
    iVar8 = 0xac;
    iVar3 = 0x20;
LAB_00f6ad6b:
    _ERR_put_error(0x2008c0f,iVar8,iVar3,param_4,iVar2);
    oid = (char *)0x0;
  }
  else {
    iVar2 = _OPENSSL_sk_num();
    oid = (char *)((longlong)&MACH_HEADER.magic + 1);
    if (0 < iVar2) {
      iVar8 = 0;
      do {
        iVar2 = (int)param_2;
        lVar5 = _OPENSSL_sk_value();
        pcVar7 = *(char **)(lVar5 + 8);
        pcVar1 = *(char **)(lVar5 + 0x10);
        pcVar6 = _strrchr(oid,iVar2);
        iVar2 = (int)unaff_R12;
        if (pcVar6 != (char *)0x0) {
          if (pcVar6[1] != '\0') {
            iVar2 = _ossl_ctype_check();
            while (iVar2 != 0) {
              iVar2 = _ossl_ctype_check();
            }
            oid = pcVar6 + -(longlong)pcVar1;
            do {
              pcVar7 = pcVar1;
              pcVar9 = oid;
              iVar2 = _ossl_ctype_check();
              oid = pcVar9 + -1;
              pcVar1 = pcVar7 + 1;
            } while (iVar2 != 0);
            while( true ) {
              iVar3 = _ossl_ctype_check();
              iVar2 = (int)unaff_R12;
              if (iVar3 == 0) break;
              pcVar6 = pcVar6 + -1;
              pcVar9 = pcVar9 + -1;
              if (pcVar6 == pcVar7) goto LAB_00f6ad4f;
            }
            pcVar7 = _CRYPTO_malloc((int)oid,(char *)((longlong)&segment_command_00000020.filesize +
                                                     6),(int)param_3);
            iVar2 = (int)unaff_R12;
            if (pcVar7 != (char *)0x0) {
              _memcpy(oid,pcVar9,(size_t)param_3);
              pcVar7[(longlong)pcVar9] = '\0';
              goto LAB_00f6acc6;
            }
            _ERR_put_error(0x2008c0f,0x41,0x57,param_4,iVar2);
          }
LAB_00f6ad4f:
          iVar8 = 0xab;
          iVar3 = 0x26;
          goto LAB_00f6ad6b;
        }
LAB_00f6acc6:
        iVar3 = _OBJ_create(oid,pcVar7,param_3);
        param_2 = (char *)((longlong)&segment_command_00000020.nsects + 1);
        _CRYPTO_free(oid);
        iVar2 = (int)unaff_R12;
        if (iVar3 == 0) goto LAB_00f6ad4f;
        iVar8 = iVar8 + 1;
        iVar2 = _OPENSSL_sk_num();
      } while (iVar8 < iVar2);
      oid = (char *)((longlong)&MACH_HEADER.magic + 1);
    }
  }
  return oid;
}


