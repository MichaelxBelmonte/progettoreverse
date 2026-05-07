// Function: FUN_01017e50
// Address: 01017e50
// Size: 2055 bytes
// Class: Unknown
// String references:
//   "crypto/engine/eng_dyn.c"
//   "v_check"
//   "bind_engine"

bool FUN_01017e50(ENGINE *param_1,uint64_t param_2,DSO_METHOD *param_3,code *param_4)

{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  DSO *pDVar5;
  DSO_FUNC_TYPE pDVar6;
  void*puVar7;
  DSO *dso;
  char *pcVar8;
  uint64_t uVar9;
  int iVar10;
  ENGINE *pEVar11;
  int unaff_ESI;
  size_t sVar12;
  uint32_t uVar13;
  int in_stack_fffffffffffffef8;
  uint32_t in_stack_fffffffffffffefc;
  void*in_stack_ffffffffffffff00;
  void *local_60 [3];
  uint8_t local_48 [8];
  
  pcVar8 = (char *)param_1;
  uVar9 = param_2;
  if (g_0278acf0 < 0) {
    param_4 = FUN_01018680;
    uVar9 = 0;
    pcVar8 = (char *)0x0;
    param_3 = (DSO_METHOD *)0x0;
    iVar1 = _CRYPTO_get_ex_new_index
                      (0,0,(void *)0x0,FUN_01018680,
                       (void*)CONCAT44(in_stack_fffffffffffffefc,in_stack_fffffffffffffef8),
                       in_stack_ffffffffffffff00);
    if (iVar1 != -1) {
      _CRYPTO_THREAD_write_lock();
      if (g_0278acf0 < 0) {
        g_0278acf0 = iVar1;
      }
      _CRYPTO_THREAD_unlock();
      goto LAB_01017ee4;
    }
    _ERR_put_error(0x200f2b2,0x90,0xd2,(char *)param_4,in_stack_fffffffffffffef8);
    goto LAB_01018098;
  }
LAB_01017ee4:
  plVar2 = _ENGINE_get_ex_data((ENGINE *)pcVar8,(int)uVar9);
  if (plVar2 != (int64_t *)0x0) {
    lVar3 = *plVar2;
    goto joined_r0x01017fdd;
  }
  iVar1 = 0x9c;
  plVar2 = (int64_t *)_CRYPTO_zalloc();
  if (plVar2 == (int64_t *)0x0) {
    _ERR_put_error(0x200f2b2,0x41,0xa0,(char *)param_4,in_stack_fffffffffffffef8);
LAB_01018098:
    iVar1 = 0x70;
    iVar10 = 0x127;
    goto LAB_010180b4;
  }
  lVar3 = _OPENSSL_sk_new_null();
  plVar2[10] = lVar3;
  if (lVar3 == 0) {
    pcVar8 = "crypto/engine/eng_dyn.c";
    _ERR_put_error(0x200f2b2,0x41,0xa5,(char *)param_4,in_stack_fffffffffffffef8);
LAB_01018093:
    _CRYPTO_free(pcVar8);
    goto LAB_01018098;
  }
  plVar2[7] = (int64_t)"v_check";
  plVar2[8] = (int64_t)"bind_engine";
  *(void*)(plVar2 + 9) = 1;
  _CRYPTO_THREAD_write_lock();
  plVar4 = _ENGINE_get_ex_data((ENGINE *)pcVar8,iVar1);
  if (plVar4 == (int64_t *)0x0) {
    iVar1 = _ENGINE_set_ex_data((ENGINE *)pcVar8,(int)plVar2,param_3);
    _CRYPTO_THREAD_unlock();
    if (iVar1 == 0) {
      _OPENSSL_sk_free();
      goto LAB_01018093;
    }
    _CRYPTO_free(pcVar8);
    lVar3 = *plVar2;
  }
  else {
    _CRYPTO_THREAD_unlock();
    _OPENSSL_sk_free();
    _CRYPTO_free(pcVar8);
    lVar3 = *plVar4;
    plVar2 = plVar4;
  }
joined_r0x01017fdd:
  if (lVar3 != 0) {
    iVar1 = 100;
    iVar10 = 0x12d;
    goto LAB_010180b4;
  }
  if (6 < unaff_ESI - 200U) {
    iVar1 = 0x77;
    iVar10 = 0x16e;
    goto LAB_010180b4;
  }
  dso = (DSO *)((int64_t)&switchD_01018002::switchdataD_01018658 +
               (int64_t)(int)(&switchD_01018002::switchdataD_01018658)[unaff_ESI - 200U]);
  switch(unaff_ESI) {
  case 200:
    if (param_1 == (ENGINE *)0x0) {
      pEVar11 = (ENGINE *)0x0;
    }
    else {
      pEVar11 = (ENGINE *)0x0;
      if (*param_1 != (ENGINE)0x0) {
        pEVar11 = param_1;
      }
    }
    _CRYPTO_free(dso);
    if (pEVar11 == (ENGINE *)0x0) {
      pcVar8 = (char *)0x0;
    }
    else {
      pcVar8 = _CRYPTO_strdup((char *)dso,(char *)((int64_t)&section_00000108.size + 7),
                              (int)param_3);
    }
    plVar2[3] = (int64_t)pcVar8;
    goto LAB_010183f5;
  case 0xc9:
    *(uint *)(plVar2 + 4) = (uint)(param_2 != 0);
    return true;
  case 0xca:
    if (param_1 == (ENGINE *)0x0) {
      pEVar11 = (ENGINE *)0x0;
    }
    else {
      pEVar11 = (ENGINE *)0x0;
      if (*param_1 != (ENGINE)0x0) {
        pEVar11 = param_1;
      }
    }
    _CRYPTO_free(dso);
    if (pEVar11 == (ENGINE *)0x0) {
      pcVar8 = (char *)0x0;
    }
    else {
      pcVar8 = _CRYPTO_strdup((char *)dso,(char *)&section_00000108.nrelocs,(int)param_3);
    }
    plVar2[5] = (int64_t)pcVar8;
LAB_010183f5:
    return pcVar8 != (char *)0x0;
  case 0xcb:
    if (param_2 < 3) {
      *(int *)(plVar2 + 6) = (int)param_2;
      return true;
    }
    iVar1 = 0x8f;
    iVar10 = 0x14a;
    break;
  case 0xcc:
    if (param_2 < 3) {
      *(int *)(plVar2 + 9) = (int)param_2;
      return true;
    }
    iVar1 = 0x8f;
    iVar10 = 0x153;
    break;
  case 0xcd:
    if ((param_1 == (ENGINE *)0x0) || (*param_1 == (ENGINE)0x0)) {
      iVar1 = 0x8f;
      iVar10 = 0x15b;
    }
    else {
      pcVar8 = _CRYPTO_strdup((char *)dso,section_00000158.sectname + 7,(int)param_3);
      if (pcVar8 == (char *)0x0) {
        iVar1 = 0x41;
        iVar10 = 0x161;
      }
      else {
        iVar1 = _OPENSSL_sk_push();
        if (iVar1 != 0) {
          return true;
        }
        _CRYPTO_free(dso);
        iVar1 = 0x41;
        iVar10 = 0x166;
      }
    }
    break;
  case 0xce:
    pDVar5 = _DSO_new();
    *plVar2 = (int64_t)pDVar5;
    if (pDVar5 == (DSO *)0x0) {
      return false;
    }
    if (plVar2[3] == 0) {
      if (plVar2[5] == 0) {
        return false;
      }
      pcVar8 = (char *)((int64_t)&MACH_HEADER.magic + 2);
      dso = (DSO *)0x0;
      _DSO_ctrl((DSO *)0x0,2,(long)param_3,param_4);
      pcVar8 = _DSO_convert_filename(dso,pcVar8);
      plVar2[3] = (int64_t)pcVar8;
    }
    if ((int)plVar2[9] != 2) {
      pcVar8 = (char *)0x0;
      dso = (DSO *)0x0;
      pDVar5 = _DSO_load((DSO *)0x0,(char *)0x0,param_3,(int)param_4);
      if (pDVar5 != (DSO *)0x0) {
LAB_0101848d:
        pDVar6 = _DSO_bind_func(dso,pcVar8);
        plVar2[2] = (int64_t)pDVar6;
        if (pDVar6 == (DSO_FUNC_TYPE)0x0) {
          plVar2[2] = 0;
          _DSO_free(dso);
          *plVar2 = 0;
          _ERR_put_error(0x200f2b2,0x68,0x1ab,(char *)param_4,in_stack_fffffffffffffef8);
          return false;
        }
        if ((int)plVar2[4] == 0) {
          pDVar6 = _DSO_bind_func(dso,pcVar8);
          plVar2[1] = (int64_t)pDVar6;
          if ((pDVar6 == (DSO_FUNC_TYPE)0x0) ||
             (puVar7 = (void*)(*pDVar6)(), puVar7 <= &UNK_0002ffff)) {
            plVar2[1] = 0;
            plVar2[2] = 0;
            _DSO_free(dso);
            *plVar2 = 0;
            _ERR_put_error(0x200f2b2,0x91,0x1c6,(char *)param_4,in_stack_fffffffffffffef8);
            return false;
          }
        }
        _memcpy(dso,section_000000b8.sectname + 8,(size_t)param_3);
        local_60[0] = _ENGINE_get_static_state();
        _CRYPTO_get_mem_functions((m *)dso,(r *)local_48,(f *)param_3);
        uVar13 = _engine_set_all_null();
        iVar1 = (*plVar2[2])(uVar13,local_60);
        if (iVar1 == 0) {
          plVar2[1] = 0;
          plVar2[2] = 0;
          _DSO_free(dso);
          *plVar2 = 0;
          pcVar8 = "crypto/engine/eng_dyn.c";
          sVar12 = 0x1e5;
          _ERR_put_error(0x200f2b2,0x6d,0x1e5,(char *)param_4,in_stack_fffffffffffffef8);
          _memcpy(pcVar8,section_000000b8.sectname + 8,sVar12);
          return false;
        }
        if ((0 < (int)plVar2[6]) && (iVar1 = _ENGINE_add((ENGINE *)dso), iVar1 == 0)) {
          if (1 < (int)plVar2[6]) {
            _ERR_put_error(0x200f2b2,0x67,0x1f6,(char *)param_4,in_stack_fffffffffffffef8);
            return false;
          }
          _ERR_clear_error();
        }
        return true;
      }
      if ((int)plVar2[9] == 0) goto LAB_01018421;
    }
    iVar1 = _OPENSSL_sk_num();
    if (0 < iVar1) {
      iVar10 = 0;
      do {
        pcVar8 = (char *)_OPENSSL_sk_value();
        pcVar8 = _DSO_merge(dso,pcVar8,(char *)param_3);
        if (pcVar8 == (char *)0x0) break;
        dso = (DSO *)0x0;
        pDVar5 = _DSO_load((DSO *)0x0,(char *)0x0,param_3,(int)param_4);
        if (pDVar5 != (DSO *)0x0) {
          pcVar8 = (char *)((int64_t)&section_00000158.size + 4);
          _CRYPTO_free(dso);
          goto LAB_0101848d;
        }
        _CRYPTO_free(dso);
        iVar10 = iVar10 + 1;
      } while (iVar1 != iVar10);
    }
LAB_01018421:
    pcVar8 = "crypto/engine/eng_dyn.c";
    _ERR_put_error(0x200f2b2,0x84,0x19e,(char *)param_4,in_stack_fffffffffffffef8);
    _DSO_free((DSO *)pcVar8);
    *plVar2 = 0;
    return false;
  }
LAB_010180b4:
  _ERR_put_error(0x200f2b2,iVar1,iVar10,(char *)param_4,in_stack_fffffffffffffef8);
  return false;
}

