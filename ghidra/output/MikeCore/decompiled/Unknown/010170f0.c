// Function: FUN_010170f0
// Address: 010170f0
// Size: 1229 bytes
// Class: Unknown
// String references:
//   "EMPTY"
//   "crypto/engine/eng_cnf.c"
//   "engine_id"
//   "soft_load"
//   "dynamic_path"
//   "init"
//   "default_algorithms"
//   ", name="
//   "SO_PATH"
//   "dynamic"
//   "LIST_ADD"
//   "LOAD"
//   "section="
//   ", value="


undefined8 FUN_010170f0(CONF *param_1,char *param_2,char *param_3,long *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  STACK *pSVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 *puVar9;
  LHASH *pLVar10;
  char *pcVar11;
  int iVar12;
  undefined8 uVar13;
  char *in_stack_ffffffffffffff98;
  CONF local_58;
  
  _CONF_imodule_get_value((CONF_IMODULE *)param_1);
  pSVar5 = _NCONF_get_section(param_1,param_2);
  iVar2 = (int)in_stack_ffffffffffffff98;
  if (pSVar5 == (STACK *)0x0) {
    iVar12 = 0x94;
    iVar3 = 0xa5;
LAB_010174d6:
    _ERR_put_error(0x200f221,iVar12,iVar3,(char *)param_4,iVar2);
LAB_010174db:
    uVar13 = 0;
  }
  else {
    iVar2 = _OPENSSL_sk_num();
    uVar13 = 1;
    if (0 < iVar2) {
      iVar12 = 0;
      local_58.meth_data = pSVar5;
      do {
        lVar6 = _OPENSSL_sk_value();
        pcVar11 = *(char **)(lVar6 + 8);
        local_58.meth = (CONF_METHOD *)0xffffffffffffffff;
        pcVar7 = _strchr((char *)param_1,(int)param_2);
        pSVar5 = _NCONF_get_section(param_1,param_2);
        iVar2 = (int)in_stack_ffffffffffffff98;
        if (pSVar5 == (STACK *)0x0) {
          iVar12 = 0x95;
          iVar3 = 0x3d;
          goto LAB_010174d6;
        }
        iVar2 = _OPENSSL_sk_num();
        if (0 < iVar2) {
          pcVar8 = pcVar7 + 1;
          if (pcVar7 == (char *)0x0) {
            pcVar8 = pcVar11;
          }
          bVar1 = false;
          pLVar10 = (LHASH *)0x0;
          iVar2 = 0;
          do {
            puVar9 = (undefined8 *)_OPENSSL_sk_value();
            _strchr((char *)param_1,(int)param_2);
            pcVar11 = (char *)puVar9[2];
            iVar3 = _strcmp((char *)param_1,param_2);
            in_stack_ffffffffffffff98 = pcVar11;
            if (iVar3 != 0) {
              iVar3 = _strcmp((char *)param_1,param_2);
              if (iVar3 == 0) {
                bVar1 = true;
                in_stack_ffffffffffffff98 = pcVar8;
              }
              else {
                iVar3 = _strcmp((char *)param_1,param_2);
                if (iVar3 == 0) {
                  pLVar10 = (LHASH *)_ENGINE_by_id((char *)param_1);
                  iVar3 = (int)pcVar8;
                  if (pLVar10 == (LHASH *)0x0) goto LAB_01017540;
                  iVar4 = _ENGINE_ctrl_cmd_string((ENGINE *)0x0,pcVar11,param_3,(int)param_4);
                  iVar3 = (int)pcVar8;
                  if (iVar4 == 0) goto LAB_01017540;
                  iVar4 = _ENGINE_ctrl_cmd_string((ENGINE *)0x0,"2",param_3,(int)param_4);
                  iVar3 = (int)pcVar8;
                  if (iVar4 == 0) goto LAB_01017540;
                  pcVar7 = (char *)0x0;
                  in_stack_ffffffffffffff98 = pcVar8;
LAB_0101734e:
                  param_1 = (CONF *)0x0;
                  iVar4 = _ENGINE_ctrl_cmd_string((ENGINE *)0x0,pcVar7,param_3,(int)param_4);
                  iVar3 = (int)in_stack_ffffffffffffff98;
                  param_2 = pcVar7;
                }
                else {
                  in_stack_ffffffffffffff98 = pcVar8;
                  if (pLVar10 == (LHASH *)0x0) {
                    pLVar10 = (LHASH *)_ENGINE_by_id((char *)param_1);
                    iVar3 = (int)pcVar8;
                    if ((pLVar10 == (LHASH *)0x0) && (bVar1)) {
                      _ERR_clear_error();
                      goto LAB_01017493;
                    }
                    in_stack_ffffffffffffff98 = pcVar8;
                    if (pLVar10 == (LHASH *)0x0) goto LAB_01017540;
                  }
                  local_58.data = pLVar10;
                  iVar3 = _strcmp((char *)param_1,param_2);
                  pcVar7 = (char *)0x0;
                  if (iVar3 != 0) {
                    pcVar7 = pcVar11;
                  }
                  iVar3 = _strcmp((char *)param_1,param_2);
                  if (iVar3 == 0) {
                    param_2 = "init";
                    param_1 = &local_58;
                    iVar4 = _NCONF_get_number_e(param_1,"init",param_3,param_4);
                    pLVar10 = local_58.data;
                    iVar3 = (int)in_stack_ffffffffffffff98;
                    if (iVar4 == 0) goto LAB_01017540;
                    if (local_58.meth == (CONF_METHOD *)0x0) goto LAB_010171c4;
                    if (local_58.meth != (CONF_METHOD *)((longlong)&MACH_HEADER.magic + 1)) {
                      _ERR_put_error(0x200f221,0x97,0x7a,(char *)param_4,iVar3);
                      goto LAB_01017540;
                    }
                    iVar4 = _ENGINE_init((ENGINE *)param_1);
                    iVar3 = (int)in_stack_ffffffffffffff98;
                    if (iVar4 == 0) goto LAB_01017540;
                    if (DAT_028a8ea0 == 0) {
                      DAT_028a8ea0 = _OPENSSL_sk_new_null();
                      iVar3 = (int)in_stack_ffffffffffffff98;
                      if (DAT_028a8ea0 != 0) goto LAB_010173c6;
                    }
                    else {
LAB_010173c6:
                      iVar4 = _OPENSSL_sk_push();
                      iVar3 = (int)in_stack_ffffffffffffff98;
                      if (iVar4 != 0) goto LAB_010171c4;
                    }
                    _ENGINE_finish((ENGINE *)param_1);
                    goto LAB_01017540;
                  }
                  iVar3 = _strcmp((char *)param_1,param_2);
                  pLVar10 = local_58.data;
                  if (iVar3 != 0) goto LAB_0101734e;
                  iVar4 = _ENGINE_set_default_string((ENGINE *)param_1,param_2);
                  iVar3 = (int)in_stack_ffffffffffffff98;
                }
                if (iVar4 == 0) {
LAB_01017540:
                  _ERR_put_error(0x200f221,0x66,0x8d,(char *)param_4,iVar3);
                  pcVar11 = ", name=";
                  _ERR_add_error_data(0x200f272,*puVar9,puVar9[1],", value=");
                  _ENGINE_free((ENGINE *)pcVar11);
                  return 0;
                }
              }
            }
LAB_010171c4:
            iVar2 = iVar2 + 1;
            iVar3 = _OPENSSL_sk_num();
            pcVar8 = in_stack_ffffffffffffff98;
          } while (iVar2 < iVar3);
          if ((pLVar10 != (LHASH *)0x0) && (local_58.meth == (CONF_METHOD *)0xffffffffffffffff)) {
            iVar2 = _ENGINE_init((ENGINE *)param_1);
            iVar3 = (int)in_stack_ffffffffffffff98;
            if (iVar2 != 0) {
              if (DAT_028a8ea0 == 0) {
                DAT_028a8ea0 = _OPENSSL_sk_new_null();
                iVar3 = (int)in_stack_ffffffffffffff98;
                if (DAT_028a8ea0 != 0) goto LAB_01017467;
              }
              else {
LAB_01017467:
                iVar2 = _OPENSSL_sk_push();
                iVar3 = (int)in_stack_ffffffffffffff98;
                if (iVar2 != 0) goto LAB_0101748e;
              }
              _ENGINE_finish((ENGINE *)param_1);
            }
            pcVar11 = "crypto/engine/eng_cnf.c";
            _ERR_put_error(0x200f221,0x66,0x8d,(char *)param_4,iVar3);
            _ENGINE_free((ENGINE *)pcVar11);
            goto LAB_010174db;
          }
        }
LAB_0101748e:
        _ENGINE_free((ENGINE *)param_1);
        pcVar8 = in_stack_ffffffffffffff98;
LAB_01017493:
        iVar12 = iVar12 + 1;
        iVar2 = _OPENSSL_sk_num();
        in_stack_ffffffffffffff98 = pcVar8;
      } while (iVar12 < iVar2);
      uVar13 = 1;
    }
  }
  return uVar13;
}


