// Function: FUN_00f33170
// Address: 00f33170
// Size: 618 bytes
// Class: Unknown

uint32_t FUN_00f33170(size_t param_1,char *param_2,size_t param_3,mbstate_t *param_4)

{
  int iVar1;
  size_t sVar2;
  uint32_t uVar3;
  void *pvVar4;
  char *pcVar5;
  wchar_t *pwVar6;
  uint64_t uVar7;
  int64_t lVar8;
  char *arg1;
  int64_t lVar9;
  void *pvVar10;
  uint8_t extraout_XMM0 [16];
  uint8_t auVar11 [16];
  uint8_t in_XMM1 [16];
  uint8_t auVar12 [16];
  uint8_t local_b8 [16];
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  uint8_t local_78 [16];
  uint8_t local_68 [16];
  uint8_t local_58 [16];
  uint8_t local_48 [16];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  pvVar4 = _malloc(param_1);
  if (pvVar4 == (void *)0x0) {
    uVar3 = 0xc;
    goto LAB_00f332fc;
  }
  if (*(int *)PTR____mb_cur_max_024a9890 == 1) {
    pcVar5 = (char *)0x0;
    if (param_2 == (char *)0x0) {
      param_2 = (char *)0x0;
    }
    else {
      pvVar10 = pvVar4;
      if (((&MACH_HEADER.cpusubtype <= param_2) && ((int)(param_2 + -1) != -1)) &&
         ((uint64_t)(param_2 + -1) >> 0x20 == 0)) {
        pcVar5 = (char *)((uint64_t)param_2 & 0xfffffffffffffff8);
        uVar7 = ((uint64_t)(pcVar5 + -8) >> 3) + 1;
        if (pcVar5 + -8 == (char *)0x0) {
          lVar8 = 0;
          auVar11 = extraout_XMM0;
LAB_00f333b5:
          auVar11 = pmovzxbd(auVar11,*(void*)(arg1 + lVar8));
          auVar12 = pmovzxbd(in_XMM1,*(void*)(arg1 + lVar8 + 4));
          *(uint8_t (*) [16])((int64_t)pvVar4 + lVar8 * 4) = auVar11;
          *(uint8_t (*) [16])((int64_t)pvVar4 + lVar8 * 4 + 0x10) = auVar12;
        }
        else {
          lVar9 = -(uVar7 & 0xfffffffffffffffe);
          lVar8 = 0;
          auVar11 = extraout_XMM0;
          do {
            auVar11 = pmovzxbd(auVar11,*(void*)(arg1 + lVar8));
            auVar12 = pmovzxbd(in_XMM1,*(void*)(arg1 + lVar8 + 4));
            *(uint8_t (*) [16])((int64_t)pvVar4 + lVar8 * 4) = auVar11;
            *(uint8_t (*) [16])((int64_t)pvVar4 + lVar8 * 4 + 0x10) = auVar12;
            auVar11 = pmovzxbd(auVar11,*(void*)(arg1 + lVar8 + 8));
            in_XMM1 = pmovzxbd(auVar12,*(void*)(arg1 + lVar8 + 0xc));
            *(uint8_t (*) [16])((int64_t)pvVar4 + lVar8 * 4 + 0x20) = auVar11;
            *(uint8_t (*) [16])((int64_t)pvVar4 + lVar8 * 4 + 0x30) = in_XMM1;
            lVar8 = lVar8 + 0x10;
            lVar9 = lVar9 + 2;
          } while (lVar9 != 0);
          if ((uVar7 & 1) != 0) goto LAB_00f333b5;
        }
        if (pcVar5 == param_2) goto LAB_00f332d9;
        arg1 = arg1 + (int64_t)pcVar5;
        pvVar10 = (void *)((int64_t)pvVar4 + (int64_t)pcVar5 * 4);
      }
      lVar8 = 0;
      do {
        *(uint *)((int64_t)pvVar10 + lVar8 * 4) = (uint)(byte)arg1[lVar8];
        iVar1 = (int)lVar8;
        lVar8 = lVar8 + 1;
      } while ((char *)(uint64_t)(uint)((int)pcVar5 + 1 + iVar1) < param_2);
    }
  }
  else {
    local_48 = (uint8_t  [16])0x0;
    local_58 = (uint8_t  [16])0x0;
    local_68 = (uint8_t  [16])0x0;
    local_78 = (uint8_t  [16])0x0;
    local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    local_b8 = (uint8_t  [16])0x0;
    pvVar10 = pvVar4;
    if (param_2 != (char *)0x0) {
      do {
        pwVar6 = (wchar_t *)local_b8;
        sVar2 = _mbrtowc((wchar_t *)local_b8,param_2,param_3,param_4);
        if (sVar2 == 0xfffffffe) {
          sVar2 = (size_t)param_2;
        }
        else if (sVar2 == 0) {
          sVar2 = 1;
          if (*arg1 != '\0') goto LAB_00f332aa;
        }
        else if (sVar2 == 0xffffffff) {
LAB_00f332aa:
          _free(pwVar6);
          uVar3 = 2;
          goto LAB_00f332fc;
        }
        arg1 = arg1 + (int)sVar2;
        pvVar10 = (void *)((int64_t)pvVar10 + 4);
        param_2 = param_2 + -(int64_t)(int)sVar2;
      } while (param_2 != (char *)0x0);
    }
    param_2 = (char *)((uint64_t)((int64_t)pvVar10 - (int64_t)pvVar4) >> 2);
  }
LAB_00f332d9:
  pvVar10 = (void *)(uint64_t)param_1;
  *(void*)((int64_t)pvVar4 + (int64_t)(int)param_2 * 4) = 0;
  uVar3 = FUN_00f33a70();
  _free(pvVar10);
LAB_00f332fc:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar3;
  }
                      ___stack_chk_fail();
}

