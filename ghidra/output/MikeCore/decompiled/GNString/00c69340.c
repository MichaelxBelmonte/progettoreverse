// Function: FUN_00c69340
// Address: 00c69340
// Size: 3223 bytes
// Class: GNString
// String references:
//   "compressed frame too big: %u vs. %u\n"


/* WARNING: Removing unreachable block (ram,0x00c69ef8) */
/* WARNING: Removing unreachable block (ram,0x00c69f09) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00c69340(int param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  sbyte sVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  char *pcVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 (*unaff_RSI) [16];
  longlong lVar23;
  longlong unaff_RDI;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 local_b0 [24];
  undefined1 local_98 [16];
  undefined8 local_88;
  longlong local_80;
  ulonglong local_78;
  int local_3c;
  uint local_38;
  uint local_34;
  
  auVar28 = _DAT_023dbf10;
  local_88 = *(undefined8 *)unaff_RSI[1];
  local_98 = *unaff_RSI;
  sVar4 = *(short *)(unaff_RDI + 8);
  uVar17 = (uint)sVar4;
  local_78 = (ulonglong)uVar17;
  uVar11 = (ushort)(uVar17 - 0x10);
  uVar11 = uVar11 << 0xe | uVar11 >> 2;
  if (4 < uVar11) {
    return -0x32;
  }
  if (uVar11 == 3) {
    return -0x32;
  }
  local_34 = (uint)param_4;
  uVar22 = param_4 & 0xffffffff;
  uVar21 = 2;
  if (sVar4 != 0x20) {
    uVar21 = (uint)(0x17 < sVar4);
  }
  local_38 = uVar21 * 8;
  sVar10 = (sbyte)local_38;
  iVar18 = uVar17 + uVar21 * -8;
  uVar21 = *(uint *)(&DAT_0000205c + unaff_RDI);
  uVar17 = uVar17 << 0x1e | uVar17 - 0x10 >> 2;
  uVar19 = uVar22;
  if (4 < uVar17) goto switchD_00c6940e_caseD_3;
  uVar26 = ~(-1 << sVar10);
  uVar11 = (ushort)uVar26;
  switch(uVar17) {
  case 0:
    if (local_34 == 0) break;
    lVar9 = *(longlong *)(unaff_RDI + 0x20);
    uVar24 = 0;
    if (local_34 < 8) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      if (param_1 == 1) {
        uVar24 = (ulonglong)(local_34 & 0xfffffff8);
        uVar19 = (uVar24 - 8 >> 3) + 1;
        uVar17 = 0;
        if (uVar24 - 8 == 0) {
          uVar8 = 0;
          auVar28 = local_98;
LAB_00c694d2:
          auVar28 = pmovsxwd(auVar28,*(undefined8 *)(param_2 + (uVar8 & 0xffffffff) * 2));
          auVar29 = pmovsxwd(in_XMM1,*(undefined8 *)(param_2 + 8 + (uVar8 & 0xffffffff) * 2));
          *(undefined1 (*) [16])(lVar9 + uVar8 * 4) = auVar28;
          *(undefined1 (*) [16])(lVar9 + 0x10 + uVar8 * 4) = auVar29;
        }
        else {
          lVar25 = -(uVar19 & 0xfffffffffffffffe);
          uVar8 = 0;
          auVar28 = local_98;
          do {
            auVar28 = pmovsxwd(auVar28,*(undefined8 *)(param_2 + (ulonglong)uVar17 * 2));
            auVar29 = pmovsxwd(in_XMM1,*(undefined8 *)(param_2 + 8 + (ulonglong)uVar17 * 2));
            *(undefined1 (*) [16])(lVar9 + uVar8 * 4) = auVar28;
            *(undefined1 (*) [16])(lVar9 + 0x10 + uVar8 * 4) = auVar29;
            auVar28 = pmovsxwd(auVar28,*(undefined8 *)(param_2 + (ulonglong)(uVar17 + 8) * 2));
            in_XMM1 = pmovsxwd(auVar29,*(undefined8 *)(param_2 + 8 + (ulonglong)(uVar17 + 8) * 2));
            *(undefined1 (*) [16])(lVar9 + 0x20 + uVar8 * 4) = auVar28;
            *(undefined1 (*) [16])(lVar9 + 0x30 + uVar8 * 4) = in_XMM1;
            uVar8 = uVar8 + 0x10;
            uVar17 = uVar17 + 0x10;
            lVar25 = lVar25 + 2;
          } while (lVar25 != 0);
          if ((uVar19 & 1) != 0) goto LAB_00c694d2;
        }
        uVar19 = param_4 & 0xffffffff;
        if (uVar24 == uVar22) break;
        uVar8 = (ulonglong)(local_34 & 0xfffffff8);
      }
    }
    uVar19 = param_4 & 0xffffffff;
    uVar20 = ~uVar24;
    for (param_4 = param_4 & 3; param_4 != 0; param_4 = param_4 - 1) {
      *(int *)(lVar9 + uVar24 * 4) = (int)*(short *)(param_2 + uVar8 * 2);
      uVar24 = uVar24 + 1;
      uVar8 = (ulonglong)(uint)((int)uVar8 + param_1);
    }
    if (2 < uVar20 + uVar22) {
      do {
        iVar6 = (int)uVar8;
        *(int *)(lVar9 + uVar24 * 4) = (int)*(short *)(param_2 + uVar8 * 2);
        *(int *)(lVar9 + 4 + uVar24 * 4) =
             (int)*(short *)(param_2 + (ulonglong)(uint)(iVar6 + param_1) * 2);
        *(int *)(lVar9 + 8 + uVar24 * 4) =
             (int)*(short *)(param_2 + (ulonglong)(uint)(param_1 * 2 + iVar6) * 2);
        *(int *)(lVar9 + 0xc + uVar24 * 4) =
             (int)*(short *)(param_2 + (ulonglong)(uint)(iVar6 + param_1 * 3) * 2);
        uVar24 = uVar24 + 4;
        uVar8 = (ulonglong)(uint)(iVar6 + param_1 + param_1 * 3);
      } while (uVar22 != uVar24);
    }
    break;
  case 1:
    FUN_00c6d730(uVar22,*(undefined8 *)(unaff_RDI + 0x20));
    uVar19 = (ulonglong)local_34;
    break;
  case 2:
    FUN_00c6d7e0(uVar22,*(undefined8 *)(unaff_RDI + 0x20));
    auVar28 = _DAT_023dbf10;
    uVar19 = (ulonglong)local_34;
    if (local_34 == 0) break;
    lVar9 = *(longlong *)(unaff_RDI + 0x20);
    lVar25 = *(longlong *)(unaff_RDI + 0x40);
    if (local_34 < 8) {
      uVar22 = 0;
    }
    else {
      uVar22 = (ulonglong)(local_34 & 0xfffffff8);
      auVar30._4_4_ = uVar26;
      auVar30._0_4_ = uVar26;
      auVar30._8_4_ = uVar26;
      auVar30._12_4_ = uVar26;
      uVar24 = (uVar22 - 8 >> 3) + 1;
      auVar29 = pmovzxdq(ZEXT416(local_38),ZEXT416(local_38));
      if (uVar22 - 8 == 0) {
        lVar15 = 0;
LAB_00c69689:
        auVar28 = *(undefined1 (*) [16])(lVar9 + lVar15 * 4);
        auVar3 = *(undefined1 (*) [16])(lVar9 + 0x10 + lVar15 * 4);
        auVar31 = pshufb(auVar28 & auVar30,_DAT_023dbf10);
        auVar30 = pshufb(auVar30 & auVar3,_DAT_023dbf10);
        puVar1 = (undefined8 *)(lVar25 + lVar15 * 2);
        *puVar1 = auVar31._0_8_;
        puVar1[1] = auVar30._0_8_;
        piVar2 = (int *)(lVar9 + lVar15 * 4);
        *piVar2 = auVar28._0_4_ >> auVar29;
        piVar2[1] = auVar28._4_4_ >> auVar29;
        piVar2[2] = auVar28._8_4_ >> auVar29;
        piVar2[3] = auVar28._12_4_ >> auVar29;
        piVar2 = (int *)(lVar9 + 0x10 + lVar15 * 4);
        *piVar2 = auVar3._0_4_ >> auVar29;
        piVar2[1] = auVar3._4_4_ >> auVar29;
        piVar2[2] = auVar3._8_4_ >> auVar29;
        piVar2[3] = auVar3._12_4_ >> auVar29;
      }
      else {
        lVar23 = -(uVar24 & 0xfffffffffffffffe);
        lVar15 = 0;
        do {
          auVar3 = *(undefined1 (*) [16])(lVar9 + lVar15 * 4);
          auVar31 = *(undefined1 (*) [16])(lVar9 + 0x10 + lVar15 * 4);
          auVar32 = pshufb(auVar3 & auVar30,auVar28);
          auVar33 = pshufb(auVar31 & auVar30,auVar28);
          puVar1 = (undefined8 *)(lVar25 + lVar15 * 2);
          *puVar1 = auVar32._0_8_;
          puVar1[1] = auVar33._0_8_;
          piVar2 = (int *)(lVar9 + lVar15 * 4);
          *piVar2 = auVar3._0_4_ >> auVar29;
          piVar2[1] = auVar3._4_4_ >> auVar29;
          piVar2[2] = auVar3._8_4_ >> auVar29;
          piVar2[3] = auVar3._12_4_ >> auVar29;
          piVar2 = (int *)(lVar9 + 0x10 + lVar15 * 4);
          *piVar2 = auVar31._0_4_ >> auVar29;
          piVar2[1] = auVar31._4_4_ >> auVar29;
          piVar2[2] = auVar31._8_4_ >> auVar29;
          piVar2[3] = auVar31._12_4_ >> auVar29;
          auVar3 = *(undefined1 (*) [16])(lVar9 + 0x20 + lVar15 * 4);
          auVar31 = *(undefined1 (*) [16])(lVar9 + 0x30 + lVar15 * 4);
          auVar32 = pshufb(auVar3 & auVar30,auVar28);
          auVar33 = pshufb(auVar31 & auVar30,auVar28);
          puVar1 = (undefined8 *)(lVar25 + 0x10 + lVar15 * 2);
          *puVar1 = auVar32._0_8_;
          puVar1[1] = auVar33._0_8_;
          piVar2 = (int *)(lVar9 + 0x20 + lVar15 * 4);
          *piVar2 = auVar3._0_4_ >> auVar29;
          piVar2[1] = auVar3._4_4_ >> auVar29;
          piVar2[2] = auVar3._8_4_ >> auVar29;
          piVar2[3] = auVar3._12_4_ >> auVar29;
          piVar2 = (int *)(lVar9 + 0x30 + lVar15 * 4);
          *piVar2 = auVar31._0_4_ >> auVar29;
          piVar2[1] = auVar31._4_4_ >> auVar29;
          piVar2[2] = auVar31._8_4_ >> auVar29;
          piVar2[3] = auVar31._12_4_ >> auVar29;
          lVar15 = lVar15 + 0x10;
          lVar23 = lVar23 + 2;
        } while (lVar23 != 0);
        if ((uVar24 & 1) != 0) goto LAB_00c69689;
      }
      if (uVar22 == uVar19) break;
    }
    do {
      iVar6 = *(int *)(lVar9 + uVar22 * 4);
      *(ushort *)(lVar25 + uVar22 * 2) = (ushort)iVar6 & uVar11;
      *(int *)(lVar9 + uVar22 * 4) = iVar6 >> ((byte)local_38 & 0x1f);
      uVar22 = uVar22 + 1;
    } while (uVar19 != uVar22);
    break;
  case 4:
    if (local_34 != 0) {
      uVar24 = *(ulonglong *)(unaff_RDI + 0x20);
      lVar9 = *(longlong *)(unaff_RDI + 0x40);
      uVar8 = 0;
      if (local_34 < 8) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        uVar8 = 0;
        if (param_1 == 1) {
          if ((uVar24 < param_2 + uVar22 * 4) && (param_2 < uVar24 + uVar22 * 4)) {
            uVar8 = 0;
            uVar17 = 0;
          }
          else {
            uVar17 = local_34 & 0xfffffff8;
            uVar8 = (ulonglong)uVar17;
            auVar29._4_4_ = uVar26;
            auVar29._0_4_ = uVar26;
            auVar29._8_4_ = uVar26;
            auVar29._12_4_ = uVar26;
            uVar26 = 0;
            auVar30 = pmovzxdq(ZEXT416(local_38),ZEXT416(local_38));
            uVar19 = 0;
            do {
              auVar3 = *(undefined1 (*) [16])(param_2 + (ulonglong)uVar26 * 4);
              auVar31 = *(undefined1 (*) [16])(param_2 + 0x10 + (ulonglong)uVar26 * 4);
              auVar32 = pshufb(auVar3 & auVar29,auVar28);
              auVar33 = pshufb(auVar31 & auVar29,auVar28);
              *(undefined8 *)(lVar9 + uVar19) = auVar32._0_8_;
              ((undefined8 *)(lVar9 + uVar19))[1] = auVar33._0_8_;
              piVar2 = (int *)(uVar24 + uVar19 * 2);
              *piVar2 = auVar3._0_4_ >> auVar30;
              piVar2[1] = auVar3._4_4_ >> auVar30;
              piVar2[2] = auVar3._8_4_ >> auVar30;
              piVar2[3] = auVar3._12_4_ >> auVar30;
              piVar2 = (int *)(uVar24 + 0x10 + uVar19 * 2);
              *piVar2 = auVar31._0_4_ >> auVar30;
              piVar2[1] = auVar31._4_4_ >> auVar30;
              piVar2[2] = auVar31._8_4_ >> auVar30;
              piVar2[3] = auVar31._12_4_ >> auVar30;
              uVar19 = uVar19 + 0x10;
              uVar26 = uVar26 + 8;
            } while ((uVar22 * 2 & 0xfffffffffffffff0) != uVar19);
            uVar19 = param_4 & 0xffffffff;
            if (uVar8 == uVar22) break;
          }
        }
      }
      uVar20 = ~uVar8;
      if ((param_4 & 1) != 0) {
        iVar6 = *(int *)(param_2 + (ulonglong)uVar17 * 4);
        *(ushort *)(lVar9 + uVar8 * 2) = (ushort)iVar6 & uVar11;
        *(int *)(uVar24 + uVar8 * 4) = iVar6 >> sVar10;
        uVar8 = uVar8 | 1;
        uVar17 = uVar17 + param_1;
      }
      uVar19 = param_4 & 0xffffffff;
      if (uVar20 + uVar22 != 0) {
        do {
          iVar6 = *(int *)(param_2 + (ulonglong)uVar17 * 4);
          *(ushort *)(lVar9 + uVar8 * 2) = (ushort)iVar6 & uVar11;
          *(int *)(uVar24 + uVar8 * 4) = iVar6 >> sVar10;
          iVar6 = *(int *)(param_2 + (ulonglong)(uVar17 + param_1) * 4);
          *(ushort *)(lVar9 + 2 + uVar8 * 2) = (ushort)iVar6 & uVar11;
          *(int *)(uVar24 + 4 + uVar8 * 4) = iVar6 >> sVar10;
          uVar8 = uVar8 + 2;
          uVar17 = uVar17 + param_1 + param_1;
        } while (uVar22 != uVar8);
      }
    }
  }
switchD_00c6940e_caseD_3:
  uVar22 = uVar19 >> 5;
  uVar17 = (uint)uVar19 >> 3;
  FUN_00c66620();
  lVar9 = (param_3 & 0xffffffff) * 0x200;
  lVar25 = lVar9 + unaff_RDI + 0xb0;
  FUN_00c6b580(lVar25,uVar22,4,iVar18);
  FUN_00c6b580(lVar25,uVar22,4,iVar18);
  FUN_00c6b580(lVar25,uVar22,4,iVar18);
  FUN_00c6b580(lVar25,uVar22,4,iVar18);
  FUN_00c6b580(lVar25,uVar22,4,iVar18);
  FUN_00c6b580(lVar25,uVar22,4,iVar18);
  FUN_00c6b580(lVar25,uVar22,4,iVar18);
  FUN_00c6b580(lVar25,uVar17,4,iVar18);
  FUN_00c65990(0xe,0x28,uVar17,uVar17);
  iVar6 = FUN_00c65f80(uVar17,local_b0,iVar18,&local_3c);
  if (iVar6 == 0) {
    uVar26 = local_3c * 8 + 0x40;
    uVar12 = 0x80000000;
    if (-1 < (int)uVar26) {
      uVar12 = uVar26;
    }
    FUN_00c66620(uVar12,*(undefined4 *)(&DAT_00002060 + unaff_RDI));
    lVar25 = lVar9 + unaff_RDI + 0x130;
    FUN_00c6b580(lVar25,uVar22,8,iVar18);
    FUN_00c6b580(lVar25,uVar22,8,iVar18);
    FUN_00c6b580(lVar25,uVar22,8,iVar18);
    FUN_00c6b580(lVar25,uVar22,8,iVar18);
    FUN_00c6b580(lVar25,uVar22,8,iVar18);
    FUN_00c6b580(lVar25,uVar22,8,iVar18);
    FUN_00c6b580(lVar25,uVar22,8,iVar18);
    FUN_00c6b580(lVar25,uVar17,8,iVar18);
    FUN_00c65990(0xe,0x28,uVar17,uVar17);
    iVar6 = FUN_00c65f80(uVar17,local_b0,iVar18,&local_3c);
    uVar17 = local_34;
    if (iVar6 == 0) {
      uVar26 = local_3c * 8 + 0x80;
      uVar5 = uVar12;
      if (uVar26 < uVar12) {
        uVar5 = uVar26;
      }
      iVar13 = (uint)(uVar21 != local_34) * 0x20;
      iVar7 = 0x20;
      if (0x17 < (short)local_78) {
        iVar7 = local_38 * local_34 + 0x20;
      }
      uVar14 = iVar13 + (int)*(short *)(unaff_RDI + 8) * local_34 + 0x10;
      iVar6 = 0;
      if (iVar7 + iVar13 + uVar5 < uVar14) {
        iVar6 = (uint)(uVar26 < uVar12) * 4;
        uVar26 = iVar6 + 4;
        uVar27 = FUN_00c667a0(uVar14,0xc);
        uVar27 = FUN_00c667a0(uVar27,4);
        if (uVar21 != uVar17) {
          uVar27 = FUN_00c667a0(uVar27,0x20);
        }
        uVar22 = 0;
        uVar27 = FUN_00c667a0(uVar27,0x10);
        uVar27 = FUN_00c667a0(uVar27,8);
        uVar27 = FUN_00c667a0(uVar27,8);
        local_80 = (ulonglong)(iVar6 + 3) << 5;
        do {
          uVar27 = FUN_00c667a0(uVar27,0x10);
          uVar17 = local_38;
          uVar22 = uVar22 + 1;
        } while (uVar26 != uVar22);
        if ((0x17 < (short)local_78) && (local_34 != 0)) {
          uVar19 = (ulonglong)local_34;
          uVar22 = 0;
          do {
            uVar27 = FUN_00c667a0(uVar27,uVar17);
            uVar22 = uVar22 + 1;
          } while (uVar19 != uVar22);
        }
        uVar17 = local_34;
        uVar27 = FUN_00c6b580(local_80 + lVar9 + unaff_RDI + 0x50,local_34,uVar26,iVar18);
        FUN_00c65960(uVar27,uVar17);
        pcVar16 = (char *)(ulonglong)uVar17;
        iVar6 = FUN_00c65f80(pcVar16,unaff_RSI,iVar18,&local_3c);
        iVar18 = FUN_00c66700();
        iVar7 = FUN_00c66700();
        if ((uint)(iVar18 - iVar7) < uVar14) {
          return iVar6;
        }
        *(undefined8 *)unaff_RSI[1] = local_88;
        *(undefined8 *)*unaff_RSI = local_98._0_8_;
        *(undefined8 *)(*unaff_RSI + 8) = local_98._8_8_;
        _printf(pcVar16);
      }
      uVar27 = FUN_00c667a0();
      FUN_00c667a0(uVar27,4);
      if (uVar21 != local_34) {
        FUN_00c667a0(local_34,0x20);
      }
      switch((int)*(short *)(unaff_RDI + 8) << 0x1e | (int)*(short *)(unaff_RDI + 8) - 0x10U >> 2) {
      case 0:
        uVar17 = local_34 * param_1;
        if (uVar17 != 0) {
          uVar21 = 0;
          do {
            FUN_00c667a0(uVar17,0x10);
            uVar21 = uVar21 + param_1;
          } while (uVar21 < uVar17);
        }
        break;
      case 1:
        uVar27 = FUN_00c6d730(local_34,*(undefined8 *)(unaff_RDI + 0x20));
        if (local_34 != 0) {
          uVar19 = (ulonglong)local_34;
          uVar22 = 0;
          do {
            uVar27 = FUN_00c667a0(uVar27,0x14);
            uVar22 = uVar22 + 1;
          } while (uVar19 != uVar22);
        }
        break;
      case 2:
        uVar27 = FUN_00c6d7e0(local_34,*(undefined8 *)(unaff_RDI + 0x20));
        if (local_34 != 0) {
          uVar19 = (ulonglong)local_34;
          uVar22 = 0;
          do {
            uVar27 = FUN_00c667a0(uVar27,0x18);
            uVar22 = uVar22 + 1;
          } while (uVar19 != uVar22);
        }
        break;
      case 4:
        uVar17 = local_34 * param_1;
        if (uVar17 != 0) {
          uVar21 = 0;
          do {
            FUN_00c667a0(uVar17,0x20);
            uVar21 = uVar21 + param_1;
          } while (uVar21 < uVar17);
        }
      }
    }
  }
  return iVar6;
}


