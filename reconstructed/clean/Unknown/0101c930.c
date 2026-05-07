// Function: FUN_0101c930
// Address: 0101c930
// Size: 811 bytes
// Class: Unknown
// String references:
//   "crypto/err/err.c"
//   "NA"

uint64_t FUN_0101c930(int64_t *param_1,int64_t *param_2,int64_t *param_3,int *param_4)

{
  uint64_t uVar1;
  int iVar2;
  ERR_STATE *pEVar3;
  int64_t lVar4;
  void *pvVar5;
  int iVar6;
  int unaff_ESI;
  int unaff_EDI;
  uint uVar7;
  void *pvVar8;
  
  pEVar3 = _ERR_get_state();
  if (pEVar3 != (ERR_STATE *)0x0) {
    if ((unaff_EDI != 0) && (unaff_ESI != 0)) {
      if (param_2 != (int64_t *)0x0) {
        *param_2 = (int64_t)"";
      }
      if (param_1 != (int64_t *)0x0) {
        *(void*)param_1 = 0;
      }
      if (param_3 != (int64_t *)0x0) {
        *param_3 = (int64_t)"";
      }
      if (param_4 != (int *)0x0) {
        *param_4 = 0;
        return 0x44;
      }
      return 0x44;
    }
    iVar2 = pEVar3[1].err_flags[0xb];
    iVar6 = pEVar3[1].err_flags[0xc];
    if (iVar6 != iVar2) {
      while( true ) {
        while (pvVar5 = (void *)(int64_t)iVar2, (pEVar3->err_flags[(int64_t)pvVar5 + -1] & 2) != 0
              ) {
          if ((pEVar3->err_data_flags[(int64_t)pvVar5 + 0xe] & 1) != 0) {
            _CRYPTO_free(pvVar5);
            pvVar5 = (void *)(int64_t)pEVar3[1].err_flags[0xb];
            pEVar3->err_data[(int64_t)pvVar5 + 7] = (char *)0x0;
          }
          pEVar3->err_data_flags[(int64_t)pvVar5 + 0xe] = 0;
          pEVar3->err_flags[(int64_t)pEVar3[1].err_flags[0xb] + -1] = 0;
          lVar4 = (int64_t)pEVar3[1].err_flags[0xb];
          (pEVar3->err_buffer + lVar4 * 2 + -1)[0] = 0;
          (pEVar3->err_buffer + lVar4 * 2 + -1)[1] = 0;
          pEVar3->err_file[lVar4 + 7] = (char *)0x0;
          pEVar3->err_line[lVar4 + 0xe] = -1;
          iVar2 = pEVar3[1].err_flags[0xb] + -1;
          if (pEVar3[1].err_flags[0xb] < 1) {
            iVar2 = 0xf;
          }
          pEVar3[1].err_flags[0xb] = iVar2;
          iVar6 = pEVar3[1].err_flags[0xc];
          if (iVar6 == iVar2) {
            return 0;
          }
        }
        uVar7 = iVar6 + 0x10;
        if (-1 < (int)(iVar6 + 1U)) {
          uVar7 = iVar6 + 1U;
        }
        iVar6 = (iVar6 - (uVar7 & 0xfffffff0)) + 1;
        pvVar8 = (void *)(int64_t)iVar6;
        if ((pEVar3->err_flags[(int64_t)pvVar8 + -1] & 2) == 0) break;
        pEVar3[1].err_flags[0xc] = iVar6;
        if ((pEVar3->err_data_flags[(int64_t)pvVar8 + 0xe] & 1) != 0) {
          _CRYPTO_free(pvVar5);
          pvVar8 = (void *)(int64_t)pEVar3[1].err_flags[0xc];
          pEVar3->err_data[(int64_t)pvVar8 + 7] = (char *)0x0;
        }
        pEVar3->err_data_flags[(int64_t)pvVar8 + 0xe] = 0;
        pEVar3->err_flags[(int64_t)pEVar3[1].err_flags[0xc] + -1] = 0;
        lVar4 = (int64_t)pEVar3[1].err_flags[0xc];
        (pEVar3->err_buffer + lVar4 * 2 + -1)[0] = 0;
        (pEVar3->err_buffer + lVar4 * 2 + -1)[1] = 0;
        pEVar3->err_file[lVar4 + 7] = (char *)0x0;
        pEVar3->err_line[lVar4 + 0xe] = -1;
        iVar2 = pEVar3[1].err_flags[0xb];
        iVar6 = pEVar3[1].err_flags[0xc];
        if (iVar6 == iVar2) {
          return 0;
        }
      }
      if (unaff_ESI != 0) {
        pvVar8 = pvVar5;
      }
      uVar1 = *(void*)(pEVar3->err_buffer + (int64_t)pvVar8 * 2 + -1);
      if (unaff_EDI != 0) {
        if (unaff_ESI != 0) {
          iVar6 = iVar2;
        }
        pEVar3[1].err_flags[0xc] = iVar6;
        (pEVar3->err_buffer + (int64_t)pvVar8 * 2 + -1)[0] = 0;
        (pEVar3->err_buffer + (int64_t)pvVar8 * 2 + -1)[1] = 0;
      }
      if ((param_2 != (int64_t *)0x0) && (param_1 != (int64_t *)0x0)) {
        if (pEVar3->err_file[(int64_t)pvVar8 + 7] == (char *)0x0) {
          *param_2 = (int64_t)"NA";
          iVar2 = 0;
        }
        else {
          *param_2 = (int64_t)pEVar3->err_file[(int64_t)pvVar8 + 7];
          iVar2 = pEVar3->err_line[(int64_t)pvVar8 + 0xe];
        }
        *(int *)param_1 = iVar2;
        param_2 = param_1;
      }
      if (param_3 == (int64_t *)0x0) {
        if (unaff_EDI != 0) {
          if ((pEVar3->err_data_flags[(int64_t)pvVar8 + 0xe] & 1) != 0) {
            _CRYPTO_free(param_2);
            pEVar3->err_data[(int64_t)pvVar8 + 7] = (char *)0x0;
          }
          pEVar3->err_data_flags[(int64_t)pvVar8 + 0xe] = 0;
          return uVar1;
        }
        return uVar1;
      }
      if (pEVar3->err_data[(int64_t)pvVar8 + 7] == (char *)0x0) {
        *param_3 = (int64_t)"";
        if (param_4 != (int *)0x0) {
          *param_4 = 0;
          return uVar1;
        }
        return uVar1;
      }
      *param_3 = (int64_t)pEVar3->err_data[(int64_t)pvVar8 + 7];
      if (param_4 != (int *)0x0) {
        *param_4 = pEVar3->err_data_flags[(int64_t)pvVar8 + 0xe];
        return uVar1;
      }
      return uVar1;
    }
  }
  return 0;
}

