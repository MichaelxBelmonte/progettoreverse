// Function: FUN_00f33170
// Address: 00f33170
// Size: 618 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00f333eb) */

undefined4 FUN_00f33170(size_t param_1,char *param_2,size_t param_3,mbstate_t *param_4)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  void *pvVar4;
  char *pcVar5;
  wchar_t *pwVar6;
  ulonglong uVar7;
  longlong lVar8;
  char *unaff_RSI;
  longlong lVar9;
  void *pvVar10;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar11 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
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
         ((ulonglong)(param_2 + -1) >> 0x20 == 0)) {
        pcVar5 = (char *)((ulonglong)param_2 & 0xfffffffffffffff8);
        uVar7 = ((ulonglong)(pcVar5 + -8) >> 3) + 1;
        if (pcVar5 + -8 == (char *)0x0) {
          lVar8 = 0;
          auVar11 = extraout_XMM0;
LAB_00f333b5:
          auVar11 = pmovzxbd(auVar11,*(undefined4 *)(unaff_RSI + lVar8));
          auVar12 = pmovzxbd(in_XMM1,*(undefined4 *)(unaff_RSI + lVar8 + 4));
          *(undefined1 (*) [16])((longlong)pvVar4 + lVar8 * 4) = auVar11;
          *(undefined1 (*) [16])((longlong)pvVar4 + lVar8 * 4 + 0x10) = auVar12;
        }
        else {
          lVar9 = -(uVar7 & 0xfffffffffffffffe);
          lVar8 = 0;
          auVar11 = extraout_XMM0;
          do {
            auVar11 = pmovzxbd(auVar11,*(undefined4 *)(unaff_RSI + lVar8));
            auVar12 = pmovzxbd(in_XMM1,*(undefined4 *)(unaff_RSI + lVar8 + 4));
            *(undefined1 (*) [16])((longlong)pvVar4 + lVar8 * 4) = auVar11;
            *(undefined1 (*) [16])((longlong)pvVar4 + lVar8 * 4 + 0x10) = auVar12;
            auVar11 = pmovzxbd(auVar11,*(undefined4 *)(unaff_RSI + lVar8 + 8));
            in_XMM1 = pmovzxbd(auVar12,*(undefined4 *)(unaff_RSI + lVar8 + 0xc));
            *(undefined1 (*) [16])((longlong)pvVar4 + lVar8 * 4 + 0x20) = auVar11;
            *(undefined1 (*) [16])((longlong)pvVar4 + lVar8 * 4 + 0x30) = in_XMM1;
            lVar8 = lVar8 + 0x10;
            lVar9 = lVar9 + 2;
          } while (lVar9 != 0);
          if ((uVar7 & 1) != 0) goto LAB_00f333b5;
        }
        if (pcVar5 == param_2) goto LAB_00f332d9;
        unaff_RSI = unaff_RSI + (longlong)pcVar5;
        pvVar10 = (void *)((longlong)pvVar4 + (longlong)pcVar5 * 4);
      }
      lVar8 = 0;
      do {
        *(uint *)((longlong)pvVar10 + lVar8 * 4) = (uint)(byte)unaff_RSI[lVar8];
        iVar1 = (int)lVar8;
        lVar8 = lVar8 + 1;
      } while ((char *)(ulonglong)(uint)((int)pcVar5 + 1 + iVar1) < param_2);
    }
  }
  else {
    local_48 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
    local_a8 = (undefined1  [16])0x0;
    local_b8 = (undefined1  [16])0x0;
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
          if (*unaff_RSI != '\0') goto LAB_00f332aa;
        }
        else if (sVar2 == 0xffffffff) {
LAB_00f332aa:
          _free(pwVar6);
          uVar3 = 2;
          goto LAB_00f332fc;
        }
        unaff_RSI = unaff_RSI + (int)sVar2;
        pvVar10 = (void *)((longlong)pvVar10 + 4);
        param_2 = param_2 + -(longlong)(int)sVar2;
      } while (param_2 != (char *)0x0);
    }
    param_2 = (char *)((ulonglong)((longlong)pvVar10 - (longlong)pvVar4) >> 2);
  }
LAB_00f332d9:
  pvVar10 = (void *)(ulonglong)param_1;
  *(undefined4 *)((longlong)pvVar4 + (longlong)(int)param_2 * 4) = 0;
  uVar3 = FUN_00f33a70();
  _free(pvVar10);
LAB_00f332fc:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


