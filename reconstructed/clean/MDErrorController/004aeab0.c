// Function: FUN_004aeab0
// Address: 004aeab0
// Size: 1880 bytes
// Class: MDErrorController

bool FUN_004aeab0(uint64_t param_1,char param_2,uint64_t param_3,RSA *param_4)

{
  int64_t lVar1;
  bool bVar2;
  int iVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int64_t *plVar7;
  RSA *pRVar8;
  uchar *from;
  RSA *pRVar9;
  int64_t this_ptr;
  int iVar10;
  uint in_stack_ffffffffffffff18;
  void*local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0x80);
  if ((lVar1 != 0) && (param_2 != '\0')) {
    FUN_01ca6970();
    FUN_01ca5d90();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar7 + 0x18))();
    FUN_00e97840();
    lVar4 = g_027092b8;
    if ((local_48 == '\0') && (local_50 != 0)) {
      FUN_00d50b00();
      lVar4 = g_027092b8;
    }
    g_027092b8 = lVar4;
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    FUN_00e97870();
    local_40 = lVar4;
    if (lVar4 != 0) {
      FUN_00d50b00();
      local_40 = g_027092c0;
      in_stack_ffffffffffffff18 = in_stack_ffffffffffffff18 & 0xffffff00;
      if (g_027092c0 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if (((char)in_stack_ffffffffffffff18 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00e97f30();
    if (local_40 != 0) {
      FUN_00d50b00();
      FUN_00d8cbf0();
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      FUN_00170e00();
      pRVar9 = (RSA *)0x0;
      pRVar8 = (RSA *)_PEM_read_bio_RSA_PUBKEY(0,0);
      _BIO_free((BIO *)pRVar9);
      if (pRVar8 == (RSA *)0x0) {
LAB_004aeea1:
        local_58 = (void*)0x0;
      }
      else {
        iVar5 = _RSA_size(pRVar9);
        local_58 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        pRVar9 = (RSA *)&g_025683c0;
        *local_58 = &g_025683c0;
        (*g_025683d8)();
        FUN_00c92170();
        _RSA_size(pRVar9);
        from = (uchar *)FUN_00e83010();
        if (0 < *(int *)(local_40 + 0x18)) {
          iVar10 = *(int *)(local_40 + 0x18);
          do {
            _RSA_size(pRVar9);
            ___bzero();
            iVar3 = iVar5 + -0xb;
            if (iVar10 < iVar5 + -0xb) {
              iVar3 = iVar10;
            }
            pRVar9 = pRVar8;
            iVar6 = _RSA_public_encrypt((int)pRVar8,from,(uchar *)((int64_t)&MACH_HEADER.magic + 1)
                                        ,param_4,in_stack_ffffffffffffff18);
            if (iVar6 == -1) {
              FUN_00e83070();
              _RSA_free(pRVar9);
              if (local_58 != (void*)0x0) {
                FUN_00d50b20();
              }
              goto LAB_004aeea1;
            }
            FUN_00c92190();
            iVar6 = iVar10 - iVar3;
            bVar2 = iVar3 <= iVar10;
            iVar10 = iVar6;
          } while (iVar6 != 0 && bVar2);
        }
        FUN_00e83070();
        _RSA_free(pRVar9);
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      lVar4 = g_027092c8;
      if (local_58 != (void*)0x0) {
        if (g_027092c8 != 0) {
          FUN_00d50b00();
        }
        local_40 = lVar4;
        FUN_00ca0840();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00e978a0();
    if (local_40 != 0) {
      FUN_00e978a0();
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027092d0;
      local_40 = g_027092d0;
      if (g_027092d0 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00ca91d0();
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    FUN_00d93320();
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    FUN_01ca6970();
    lVar4 = g_026fceb8;
    if (g_026fceb8 != 0) {
      FUN_00d50b00();
    }
    FUN_01ca93d0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return lVar1 != 0;
}

