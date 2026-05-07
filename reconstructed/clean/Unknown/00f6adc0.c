// Function: FUN_00f6adc0
// Address: 00f6adc0
// Size: 874 bytes
// Class: Unknown
// String references:
//   "min"
//   "none"
//   "crypto/asn1/asn_mstbl.c"
//   "mask"
//   "flags"
//   "nomask"
//   "field="
//   "max"
//   "name="
//   ", value="

char * FUN_00f6adc0(CONF *param_1,char *param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  STACK *pSVar5;
  int64_t lVar6;
  uint32_t extraout_var;
  char *s;
  int iVar7;
  ulong uVar8;
  uint32_t uVar9;
  char *local_68;
  char *local_58;
  uint64_t in_stack_ffffffffffffffb8;
  uint64_t uVar10;
  
  uVar9 = (uint32_t)((uint64_t)param_4 >> 0x20);
  uVar8 = (ulong)param_4;
  _CONF_imodule_get_value((CONF_IMODULE *)param_1);
  pSVar5 = _NCONF_get_section(param_1,param_2);
  iVar2 = (int)in_stack_ffffffffffffffb8;
  if (pSVar5 == (STACK *)0x0) {
    iVar7 = 0xac;
    iVar3 = 0x1d;
LAB_00f6b133:
    _ERR_put_error(0x2008c33,iVar7,iVar3,(char *)CONCAT44(uVar9,uVar8),iVar2);
    s = (char *)0x0;
  }
  else {
    iVar2 = _OPENSSL_sk_num();
    s = (char *)((int64_t)&MACH_HEADER.magic + 1);
    if (0 < iVar2) {
      iVar7 = 0;
      do {
        lVar6 = _OPENSSL_sk_value();
        local_68 = *(char **)(lVar6 + 8);
        uVar10 = *(void*)(lVar6 + 0x10);
        iVar2 = _OBJ_sn2nid(s);
        if (((iVar2 == 0) && (iVar2 = _OBJ_ln2nid(s), iVar2 == 0)) ||
           (pSVar5 = _X509V3_parse_list(s), pSVar5 == (STACK *)0x0)) {
          _ERR_put_error(0x2008c33,0xda,99,(char *)CONCAT44(uVar9,uVar8),
                         (int)in_stack_ffffffffffffffb8);
          s = ", value=";
          _ERR_add_error_data(0x201e2ac);
          iVar3 = 0;
        }
        else {
          iVar2 = _OPENSSL_sk_num();
          if (iVar2 < 1) {
            local_68 = (char *)0xffffffffffffffff;
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            local_68 = (char *)0xffffffffffffffff;
            iVar2 = 0;
            do {
              lVar6 = _OPENSSL_sk_value();
              iVar3 = _strcmp(s,param_2);
              if (iVar3 == 0) {
                param_2 = (char *)0x0;
                _strtoul(s,(char **)0x0,(int)param_3);
                cVar1 = *local_58;
joined_r0x00f6aea9:
                in_stack_ffffffffffffffb8 = uVar10;
                if (cVar1 != '\0') {
LAB_00f6b057:
                  _ERR_put_error(0x2008c33,0xda,99,(char *)CONCAT44(uVar9,uVar8),
                                 (int)in_stack_ffffffffffffffb8);
                  local_68 = *(char **)(lVar6 + 8);
                  uVar10 = *(void*)(lVar6 + 0x10);
                  iVar3 = 0;
                  s = ", value=";
                  _ERR_add_error_data(0x201e2ac);
                  goto LAB_00f6b0cb;
                }
              }
              else {
                iVar3 = _strcmp(s,param_2);
                if (iVar3 == 0) {
                  param_2 = (char *)0x0;
                  uVar4 = _strtoul(s,(char **)0x0,(int)param_3);
                  local_68 = (char *)CONCAT44(extraout_var,uVar4);
                  cVar1 = *local_58;
                  goto joined_r0x00f6aea9;
                }
                iVar3 = _strcmp(s,param_2);
                if (iVar3 == 0) {
                  _ASN1_str2mask();
                  in_stack_ffffffffffffffb8 = uVar10;
                  goto LAB_00f6b057;
                }
                iVar3 = _strcmp(s,param_2);
                in_stack_ffffffffffffffb8 = uVar10;
                if (iVar3 != 0) goto LAB_00f6b057;
                iVar3 = _strcmp(s,param_2);
                if (iVar3 == 0) {
                  uVar10 = 2;
                }
                else {
                  iVar3 = _strcmp(s,param_2);
                  s = (char *)((int64_t)&MACH_HEADER.magic + 1);
                  uVar10 = 1;
                  in_stack_ffffffffffffffb8 = uVar10;
                  if (iVar3 != 0) goto LAB_00f6b057;
                }
              }
              iVar2 = iVar2 + 1;
              iVar3 = _OPENSSL_sk_num();
              in_stack_ffffffffffffffb8 = uVar10;
            } while (iVar2 < iVar3);
          }
          s = (char *)0x0;
          iVar3 = _ASN1_STRING_TABLE_add
                            (0,(long)local_68,(long)uVar10,uVar8,(ulong)in_stack_ffffffffffffffb8);
          if (iVar3 == 0) {
            local_68 = (char *)((int64_t)&segment_command_00000020.vmsize + 1);
            s = "crypto/asn1/asn_mstbl.c";
            uVar10 = 0x6d;
            _ERR_put_error(0x2008c33,0x41,0x6d,(char *)CONCAT44(uVar9,uVar8),
                           (int)in_stack_ffffffffffffffb8);
            iVar3 = 0;
          }
        }
LAB_00f6b0cb:
        _OPENSSL_sk_pop_free();
        iVar2 = (int)in_stack_ffffffffffffffb8;
        if (iVar3 == 0) {
          iVar7 = 0xdb;
          iVar3 = 0x23;
          goto LAB_00f6b133;
        }
        iVar7 = iVar7 + 1;
        iVar2 = _OPENSSL_sk_num();
        param_2 = local_68;
        param_3 = uVar10;
      } while (iVar7 < iVar2);
      s = (char *)((int64_t)&MACH_HEADER.magic + 1);
    }
  }
  return s;
}

