// Function: FUN_00f78df0
// Address: 00f78df0
// Size: 2723 bytes
// Class: Unknown
// String references:
//   "0123456789"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00f78df0(double param_1,undefined8 param_2,int param_3,uint param_4)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 in_RCX;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  bool bVar18;
  bool bVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  uint local_res8;
  int local_res10;
  ulonglong local_c8;
  int local_c0;
  char acStack_98 [31];
  char acStack_79 [32];
  char acStack_59 [33];
  longlong local_38;
  
  uVar2 = 6;
  if (-1 < (int)param_4) {
    uVar2 = param_4;
  }
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (0.0 <= param_1) {
    if ((local_res8 & 2) != 0) {
      iVar3 = 0x2b;
      goto LAB_00f78e6a;
    }
    bVar19 = (local_res8 & 4) == 0;
    iVar3 = (local_res8 & 4) << 3;
  }
  else {
    iVar3 = 0x2d;
LAB_00f78e6a:
    bVar19 = false;
  }
  iVar8 = local_res10;
  dVar22 = param_1;
  if (local_res10 == 2) {
    iVar8 = 0;
    if ((((param_1 != 0.0) || (NAN(param_1))) && (iVar8 = 1, DAT_023b67d8 <= param_1)) &&
       ((uVar2 != 0 || (param_1 < _DAT_0241eeb8)))) {
      if (0 < (int)uVar2) {
        dVar21 = DAT_0238fee8;
        uVar4 = uVar2;
        if ((uVar2 & 7) != 0) {
          uVar4 = 0;
          do {
            dVar21 = dVar21 * _DAT_0241eeb8;
            uVar4 = uVar4 + 1;
          } while ((uVar2 & 7) != uVar4);
          uVar4 = uVar2 - uVar4;
        }
        if (6 < uVar2 - 1) {
          do {
            dVar21 = dVar21 * _DAT_0241eeb8 * _DAT_0241eeb8 * _DAT_0241eeb8 * _DAT_0241eeb8 *
                     _DAT_0241eeb8 * _DAT_0241eeb8 * _DAT_0241eeb8 * _DAT_0241eeb8;
            uVar4 = uVar4 - 8;
          } while (uVar4 != 0);
        }
        iVar8 = 1;
        if (dVar21 <= param_1) goto LAB_00f78f52;
      }
      iVar8 = 0;
      goto LAB_00f78f52;
    }
LAB_00f78f5b:
    if ((param_1 != 0.0) || (NAN(param_1))) {
      uVar16 = 0;
      for (; dVar22 < DAT_0238fee8; dVar22 = dVar22 * _DAT_0241eeb8) {
        uVar16 = uVar16 - 1;
      }
      for (; _DAT_0241eeb8 < dVar22; dVar22 = dVar22 / _DAT_0241eeb8) {
        uVar16 = uVar16 + 1;
      }
    }
    else {
      uVar16 = 0;
    }
    if (local_res10 == 2) {
      uVar4 = 1;
      if (uVar2 != 0) {
        uVar4 = uVar2;
      }
      if (iVar8 == 0) {
        iVar8 = 0;
        uVar2 = uVar4 + ~(uint)uVar16;
        uVar17 = 0;
        dVar22 = param_1;
        if ((int)uVar2 < 0) goto LAB_00f79657;
        goto LAB_00f79026;
      }
      uVar2 = uVar4 - 1;
    }
    if (iVar8 != 1) {
      dVar22 = param_1;
    }
  }
  else {
LAB_00f78f52:
    if (local_res10 != 0) goto LAB_00f78f5b;
    uVar16 = 0;
  }
LAB_00f79026:
  dVar22 = (double)(~-(ulonglong)(dVar22 < 0.0) & (ulonglong)dVar22 |
                   (_DAT_023945b0 ^ (ulonglong)dVar22) & -(ulonglong)(dVar22 < 0.0));
  uVar17 = 0;
  if (_DAT_023ed350 <= dVar22) goto LAB_00f79657;
  uVar5 = (longlong)(dVar22 - _DAT_023907c8) & (longlong)dVar22 >> 0x3f | (longlong)dVar22;
  local_c8 = 9;
  if ((int)uVar2 < 9) {
    local_c8 = (ulonglong)uVar2;
  }
  uVar4 = (uint)local_c8;
  dVar21 = DAT_0238fee8;
  if (uVar4 == 0) {
    uVar12 = 1;
  }
  else {
    uVar9 = uVar4;
    dVar20 = DAT_0238fee8;
    if ((local_c8 & 7) != 0) {
      uVar9 = 0;
      do {
        dVar20 = dVar20 * _DAT_0241eeb8;
        uVar9 = uVar9 + 1;
      } while ((uVar4 & 7) != uVar9);
      uVar9 = uVar4 - uVar9;
    }
    if (6 < uVar4 - 1) {
      do {
        dVar20 = dVar20 * _DAT_0241eeb8 * _DAT_0241eeb8 * _DAT_0241eeb8 * _DAT_0241eeb8 *
                 _DAT_0241eeb8 * _DAT_0241eeb8 * _DAT_0241eeb8 * _DAT_0241eeb8;
        uVar9 = uVar9 - 8;
      } while (uVar9 != 0);
    }
    uVar12 = ((longlong)dVar20 + 1) - (ulonglong)(dVar20 - (double)(longlong)dVar20 < DAT_023942d0);
    uVar9 = uVar4;
    if ((local_c8 & 7) != 0) {
      uVar9 = 0;
      do {
        dVar21 = dVar21 * _DAT_0241eeb8;
        uVar9 = uVar9 + 1;
      } while ((uVar4 & 7) != uVar9);
      uVar9 = uVar4 - uVar9;
    }
    if (6 < uVar4 - 1) {
      do {
        dVar21 = dVar21 * _DAT_0241eeb8 * _DAT_0241eeb8 * _DAT_0241eeb8 * _DAT_0241eeb8 *
                 _DAT_0241eeb8 * _DAT_0241eeb8 * _DAT_0241eeb8 * _DAT_0241eeb8;
        uVar9 = uVar9 - 8;
      } while (uVar9 != 0);
    }
  }
  auVar23._8_4_ = (int)(uVar5 >> 0x20);
  auVar23._0_8_ = uVar5;
  auVar23._12_4_ = _UNK_023e16c4;
  dVar21 = (dVar22 - ((auVar23._8_8_ - _UNK_023e16d8) +
                     ((double)CONCAT44(_DAT_023e16c0,(int)uVar5) - _DAT_023e16d0))) * dVar21;
  lVar13 = (longlong)dVar21;
  uVar14 = (lVar13 + 1) - (ulonglong)(dVar21 - (double)lVar13 < DAT_023942d0);
  uVar5 = (uVar5 + 1) - (ulonglong)(uVar14 < uVar12);
  uVar6 = 0;
  if (uVar14 < uVar12) {
    uVar12 = uVar6;
  }
  do {
    uVar15 = uVar6 + 1;
    acStack_59[uVar6 + 1] = "0123456789"[uVar5 % 10];
    if (uVar5 < 10) break;
    bVar18 = uVar6 < 0x13;
    uVar5 = uVar5 / 10;
    uVar6 = uVar15;
  } while (bVar18);
  uVar14 = uVar14 - uVar12;
  uVar5 = (ulonglong)((int)uVar15 - 1);
  if ((int)uVar15 != 0x14) {
    uVar5 = uVar15 & 0xffffffff;
  }
  acStack_59[uVar5 + 1] = '\0';
  if (local_res10 == 2) {
    uVar4 = 1;
    if ((int)uVar2 < 1) {
      uVar4 = uVar2;
    }
    if (-1 < (int)uVar2) {
      uVar2 = 0;
    }
    do {
      iVar10 = (int)local_c8;
      if (iVar10 < 1) {
        uVar12 = 0;
        local_c8._0_4_ = uVar2;
        goto LAB_00f793fc;
      }
      uVar12 = 0;
      while( true ) {
        if (uVar12 == 0 && uVar14 % 10 == 0) break;
        acStack_79[uVar12 + 1] = "0123456789"[uVar14 % 10];
        uVar12 = uVar12 + 1;
        uVar14 = uVar14 / 10;
        if (local_c8 == uVar12) {
          uVar6 = local_c8;
          local_c8 = local_c8 & 0xffffffff;
          goto LAB_00f793ef;
        }
      }
      local_c8 = local_c8 - 1;
      uVar14 = uVar14 / 10;
      uVar12 = (ulonglong)(uVar4 - 1);
    } while (1 < iVar10);
LAB_00f79349:
    local_c8 = uVar12;
    uVar12 = 0;
  }
  else {
    uVar12 = local_c8;
    if ((int)uVar2 < 1) goto LAB_00f79349;
    if ((int)uVar4 < 2) {
      uVar12 = 0;
      uVar6 = 1;
    }
    else {
      uVar12 = 0;
      do {
        acStack_79[uVar12 + 1] = "0123456789"[uVar14 % 10];
        acStack_79[uVar12 + 2] =
             "0123456789"[uVar14 / 10 + ((uVar14 / 10) / 5 & 0xfffffffffffffffe) * -5];
        uVar12 = uVar12 + 2;
        uVar14 = uVar14 / 100;
        uVar6 = local_c8;
      } while ((uVar4 & 0x7ffffffe) != uVar12);
    }
    if ((uVar6 & 1) != 0) {
      acStack_79[uVar12 + 1] = "0123456789"[uVar14 + (uVar14 / 5 & 0xfffffffffffffffe) * -5];
    }
LAB_00f793ef:
    uVar12 = 0x13;
    if ((int)uVar6 != 0x14) {
      uVar12 = uVar6 & 0xffffffff;
    }
  }
LAB_00f793fc:
  acStack_79[(longlong)(int)uVar12 + 1] = '\0';
  uVar2 = 0;
  if (iVar8 == 1) {
    uVar6 = -uVar16;
    if (0 < (longlong)uVar16) {
      uVar6 = uVar16;
    }
    uVar14 = 0;
    do {
      iVar10 = (int)uVar6;
      uVar6 = (ulonglong)(uint)(iVar10 / 10);
      uVar15 = uVar14 + 1;
      acStack_98[uVar14] = "0123456789"[iVar10 % 10];
      if (iVar10 < 10) break;
      bVar18 = uVar14 < 0x13;
      uVar14 = uVar15;
    } while (bVar18);
    if ((iVar10 < 10) && ((int)uVar15 == 1)) {
      acStack_98[1] = 0x30;
      uVar15 = 2;
    }
    uVar2 = (uint)uVar15;
    uVar17 = 0;
    if (9 < iVar10) goto LAB_00f79657;
  }
  iVar10 = -2 - uVar2;
  if (iVar8 != 1) {
    iVar10 = 0;
  }
  iVar10 = ((((param_3 - (uint)(bVar19 ^ 1)) - (int)uVar5) - (uint)local_c8) -
           (uint)(0 < (int)(uint)local_c8)) + iVar10;
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  iVar7 = -iVar10;
  if ((local_res8 & 1) == 0) {
    iVar7 = iVar10;
  }
  if (((local_res8 & 0x10) == 0) || (iVar7 < 1)) {
    if (0 < iVar7) {
      iVar7 = iVar7 + 1;
      do {
        iVar10 = FUN_00f789b0(in_RCX,param_2,0x20);
        if (iVar10 == 0) goto LAB_00f79654;
        iVar7 = iVar7 + -1;
      } while (1 < iVar7);
      iVar7 = 0;
    }
    local_c0 = iVar7;
    if ((iVar3 != 0) && (iVar3 = FUN_00f789b0(in_RCX,param_2), iVar3 == 0)) goto LAB_00f79654;
  }
  else {
    if (bVar19 == false) {
      iVar3 = FUN_00f789b0(in_RCX,param_2,iVar3);
      if (iVar3 == 0) goto LAB_00f79654;
      local_c0 = 0;
      if (iVar7 < 2) goto LAB_00f79610;
      iVar7 = iVar7 + -1;
    }
    iVar7 = iVar7 + 1;
    do {
      iVar3 = FUN_00f789b0(in_RCX,param_2,0x30);
      if (iVar3 == 0) goto LAB_00f79654;
      iVar7 = iVar7 + -1;
    } while (1 < iVar7);
    local_c0 = 0;
  }
LAB_00f79610:
  iVar3 = (uint)local_c8 - (int)uVar12;
  do {
    if ((int)uVar5 < 1) {
      if (((int)(uint)local_c8 < 1) && ((local_res8 & 8) == 0)) goto LAB_00f79699;
      iVar10 = FUN_00f789b0(in_RCX,param_2,0x2e);
      if (iVar10 != 0) goto LAB_00f79790;
      break;
    }
    pcVar1 = acStack_59 + uVar5;
    uVar5 = uVar5 - 1;
    iVar10 = FUN_00f789b0(in_RCX,param_2,(int)*pcVar1);
  } while (iVar10 != 0);
  goto LAB_00f79654;
LAB_00f79699:
  if (0 < iVar3) {
    iVar3 = iVar3 + 1;
    do {
      iVar10 = FUN_00f789b0(in_RCX,param_2,0x30);
      if (iVar10 == 0) goto LAB_00f79654;
      iVar3 = iVar3 + -1;
    } while (1 < iVar3);
  }
  if (iVar8 == 1) {
    iVar3 = FUN_00f789b0(in_RCX,param_2,local_res8 & 0x20 ^ 0x65);
    uVar17 = 0;
    if (iVar3 != 0) {
      if ((longlong)uVar16 < 0) {
        uVar11 = 0x2d;
      }
      else {
        uVar11 = 0x2b;
      }
      iVar3 = FUN_00f789b0(in_RCX,param_2,uVar11);
      if (iVar3 != 0) {
        uVar16 = (ulonglong)uVar2;
        do {
          if ((longlong)uVar16 < 1) goto LAB_00f7984a;
          uVar16 = uVar16 - 1;
          iVar3 = FUN_00f789b0(in_RCX,param_2,(int)acStack_98[uVar16 & 0xffffffff]);
          uVar17 = 0;
        } while (iVar3 != 0);
      }
    }
  }
  else {
LAB_00f7984a:
    uVar17 = 1;
    if (local_c0 < 0) {
      do {
        iVar3 = FUN_00f789b0(in_RCX,param_2,0x20);
        if (iVar3 == 0) goto LAB_00f79654;
        local_c0 = local_c0 + 1;
      } while (local_c0 != 0);
    }
  }
  goto LAB_00f79657;
  while( true ) {
    pcVar1 = acStack_79 + uVar12;
    uVar12 = uVar12 - 1;
    iVar10 = FUN_00f789b0(in_RCX,param_2,(int)*pcVar1);
    if (iVar10 == 0) break;
LAB_00f79790:
    if ((int)uVar12 < 1) goto LAB_00f79699;
  }
LAB_00f79654:
  uVar17 = 0;
LAB_00f79657:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


