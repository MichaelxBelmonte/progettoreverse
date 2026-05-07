// Function: FUN_00f439b0
// Address: 00f439b0
// Size: 1068 bytes
// Class: GNInt


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f439b0(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  longlong lVar16;
  short sVar17;
  uint uVar18;
  longlong *unaff_RDI;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  void *pvVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  uVar3 = *(uint *)(unaff_RDI + 10);
  uVar21 = *(uint *)((longlong)unaff_RDI + 0xb4);
  pvVar22 = (void *)(ulonglong)(uVar3 - 0x106);
  uVar20 = (ulonglong)uVar3;
  do {
    uVar19 = *(uint *)((longlong)unaff_RDI + 0xac);
    uVar21 = (int)unaff_RDI[0xd] - (uVar21 + uVar19);
    if ((int)uVar20 + (uVar3 - 0x106) <= uVar19) {
      _memcpy(pvVar22,(void *)(ulonglong)(uVar3 - uVar21),(size_t)param_3);
      *(uint *)(unaff_RDI + 0x16) = (int)unaff_RDI[0x16] - uVar3;
      uVar19 = *(int *)((longlong)unaff_RDI + 0xac) - uVar3;
      *(uint *)((longlong)unaff_RDI + 0xac) = uVar19;
      unaff_RDI[0x13] = unaff_RDI[0x13] - (ulonglong)uVar3;
      if (uVar19 < *(uint *)((longlong)unaff_RDI + 0x172c)) {
        *(uint *)((longlong)unaff_RDI + 0x172c) = uVar19;
      }
      auVar9 = _DAT_023e75a0;
      uVar8 = _UNK_023e759c;
      uVar7 = _UNK_023e7598;
      uVar6 = _UNK_023e7594;
      uVar5 = _DAT_023e7590;
      uVar15 = *(uint *)(unaff_RDI + 10);
      uVar18 = *(uint *)((longlong)unaff_RDI + 0x84);
      uVar20 = (ulonglong)uVar18;
      lVar12 = unaff_RDI[0xf] + uVar20 * 2;
      if (uVar18 - 1 < 0xf) {
LAB_00f43aff:
        lVar11 = 0;
        do {
          uVar2 = *(ushort *)(lVar12 + -2 + lVar11 * 2);
          sVar17 = uVar2 - (short)uVar15;
          if (uVar2 < uVar15) {
            sVar17 = 0;
          }
          *(short *)(lVar12 + -2 + lVar11 * 2) = sVar17;
          lVar11 = lVar11 + -1;
        } while (-uVar18 != (int)lVar11);
      }
      else {
        uVar24 = (ulonglong)(uVar18 - 1) + 1;
        param_3 = uVar24 & 0x1fffffff0;
        lVar12 = lVar12 + param_3 * -2;
        uVar18 = uVar18 - (int)param_3;
        lVar11 = unaff_RDI[0xf] + uVar20 * 2;
        lVar16 = 0;
        do {
          auVar26._0_4_ = (uVar5 < uVar15) * uVar5 | (uVar5 >= uVar15) * uVar15;
          auVar26._4_4_ = (uVar6 < uVar15) * uVar6 | (uVar6 >= uVar15) * uVar15;
          auVar26._8_4_ = (uVar7 < uVar15) * uVar7 | (uVar7 >= uVar15) * uVar15;
          auVar26._12_4_ = (uVar8 < uVar15) * uVar8 | (uVar8 >= uVar15) * uVar15;
          auVar26 = packusdw(auVar26,auVar26);
          auVar27 = pshufb(auVar26,auVar9);
          auVar26 = psubusw(*(undefined1 (*) [16])(lVar11 + -0x10 + lVar16 * 2),auVar27);
          *(undefined1 (*) [16])(lVar11 + -0x10 + lVar16 * 2) = auVar26;
          auVar26 = psubusw(*(undefined1 (*) [16])(lVar11 + -0x20 + lVar16 * 2),auVar27);
          *(undefined1 (*) [16])(lVar11 + -0x20 + lVar16 * 2) = auVar26;
          lVar16 = lVar16 + -0x10;
        } while (-lVar16 != (uVar24 & 0xfffffffffffffff0));
        if (uVar24 != param_3) goto LAB_00f43aff;
      }
      lVar12 = unaff_RDI[0xe] + (ulonglong)uVar15 * 2;
      uVar18 = uVar15;
      if (uVar15 - 1 < 0xf) {
LAB_00f43bcf:
        lVar11 = 0;
        do {
          uVar2 = *(ushort *)(lVar12 + -2 + lVar11 * 2);
          sVar17 = uVar2 - (short)uVar15;
          if (uVar2 < uVar15) {
            sVar17 = 0;
          }
          *(short *)(lVar12 + -2 + lVar11 * 2) = sVar17;
          lVar11 = lVar11 + -1;
        } while (-uVar18 != (int)lVar11);
      }
      else {
        uVar20 = (ulonglong)(uVar15 - 1) + 1;
        param_3 = uVar20 & 0x1fffffff0;
        lVar12 = lVar12 + param_3 * -2;
        lVar11 = unaff_RDI[0xe] + (ulonglong)uVar15 * 2;
        lVar16 = 0;
        do {
          auVar27._0_4_ = (uVar5 < uVar15) * uVar5 | (uVar5 >= uVar15) * uVar15;
          auVar27._4_4_ = (uVar6 < uVar15) * uVar6 | (uVar6 >= uVar15) * uVar15;
          auVar27._8_4_ = (uVar7 < uVar15) * uVar7 | (uVar7 >= uVar15) * uVar15;
          auVar27._12_4_ = (uVar8 < uVar15) * uVar8 | (uVar8 >= uVar15) * uVar15;
          auVar26 = packusdw(auVar27,auVar27);
          auVar27 = pshufb(auVar26,auVar9);
          auVar26 = psubusw(*(undefined1 (*) [16])(lVar11 + -0x10 + lVar16 * 2),auVar27);
          *(undefined1 (*) [16])(lVar11 + -0x10 + lVar16 * 2) = auVar26;
          auVar26 = psubusw(*(undefined1 (*) [16])(lVar11 + -0x20 + lVar16 * 2),auVar27);
          *(undefined1 (*) [16])(lVar11 + -0x20 + lVar16 * 2) = auVar26;
          lVar16 = lVar16 + -0x10;
        } while (-lVar16 != (uVar20 & 0xfffffffffffffff0));
        uVar18 = uVar15 - (int)param_3;
        if (uVar20 != param_3) goto LAB_00f43bcf;
      }
      uVar21 = uVar21 + uVar3;
    }
    plVar4 = (longlong *)*unaff_RDI;
    uVar15 = *(uint *)(plVar4 + 1);
    if (uVar15 == 0) {
LAB_00f43d67:
      uVar20 = unaff_RDI[0x2e7];
      uVar24 = unaff_RDI[0xd];
      uVar13 = uVar24 - uVar20;
      if (uVar20 <= uVar24 && uVar13 != 0) {
        uVar23 = (ulonglong)*(uint *)((longlong)unaff_RDI + 0xb4) +
                 (ulonglong)*(uint *)((longlong)unaff_RDI + 0xac);
        if (uVar20 < uVar23) {
          uVar20 = 0x102;
          if (uVar24 - uVar23 < 0x102) {
            uVar20 = uVar24 - uVar23;
          }
          ___bzero();
          lVar12 = uVar20 + uVar23;
        }
        else {
          uVar24 = (uVar23 + 0x102) - uVar20;
          if (uVar23 + 0x102 < uVar20 || uVar24 == 0) {
            return;
          }
          if (uVar13 < uVar24) {
            uVar24 = uVar13;
          }
          ___bzero();
          lVar12 = uVar24 + unaff_RDI[0x2e7];
        }
        unaff_RDI[0x2e7] = lVar12;
      }
      return;
    }
    iVar10 = *(int *)((longlong)unaff_RDI + 0xb4);
    if (uVar15 <= uVar21) {
      uVar21 = uVar15;
    }
    pvVar22 = (void *)(ulonglong)uVar21;
    if (uVar21 != 0) {
      *(uint *)(plVar4 + 1) = uVar15 - uVar21;
      _memcpy((void *)(ulonglong)uVar19,pvVar22,(size_t)param_3);
      if (*(int *)(plVar4[7] + 0x30) == 2) {
        lVar12 = FUN_00f43510();
LAB_00f43c7e:
        plVar4[0xc] = lVar12;
      }
      else if (*(int *)(plVar4[7] + 0x30) == 1) {
        lVar12 = FUN_00f42bd0();
        goto LAB_00f43c7e;
      }
      *plVar4 = *plVar4 + (longlong)pvVar22;
      plVar4[2] = plVar4[2] + (longlong)pvVar22;
      iVar10 = *(int *)((longlong)unaff_RDI + 0xb4);
    }
    uVar21 = iVar10 + uVar21;
    *(uint *)((longlong)unaff_RDI + 0xb4) = uVar21;
    iVar10 = *(int *)((longlong)unaff_RDI + 0x172c);
    pvVar22 = (void *)(ulonglong)(iVar10 + uVar21);
    if (2 < iVar10 + uVar21) {
      uVar15 = *(int *)((longlong)unaff_RDI + 0xac) - iVar10;
      uVar20 = (ulonglong)uVar15;
      param_3 = unaff_RDI[0xc];
      bVar1 = *(byte *)(param_3 + uVar20);
      *(uint *)(unaff_RDI + 0x10) = (uint)bVar1;
      pvVar22 = (void *)(ulonglong)*(uint *)(unaff_RDI + 0x12);
      bVar14 = (byte)*(uint *)(unaff_RDI + 0x12);
      uVar19 = *(uint *)((longlong)unaff_RDI + 0x8c);
      uVar15 = uVar19 & ((uint)*(byte *)(param_3 + (uVar15 + 1)) ^ (uint)bVar1 << (bVar14 & 0x1f));
      uVar24 = (ulonglong)uVar15;
      *(uint *)(unaff_RDI + 0x10) = uVar15;
      do {
        bVar25 = iVar10 == 0;
        iVar10 = iVar10 + -1;
        if (bVar25) break;
        uVar15 = (uint)uVar20;
        uVar18 = uVar19 & ((uint)*(byte *)(param_3 + (uVar15 + 2)) ^ (int)uVar24 << (bVar14 & 0x1f))
        ;
        uVar24 = (ulonglong)uVar18;
        *(uint *)(unaff_RDI + 0x10) = uVar18;
        lVar12 = unaff_RDI[0xf];
        *(undefined2 *)(unaff_RDI[0xe] + (ulonglong)(*(uint *)(unaff_RDI + 0xb) & uVar15) * 2) =
             *(undefined2 *)(lVar12 + uVar24 * 2);
        *(short *)(lVar12 + uVar24 * 2) = (short)uVar20;
        uVar20 = (ulonglong)(uVar15 + 1);
        *(int *)((longlong)unaff_RDI + 0x172c) = iVar10;
      } while (2 < uVar21 + iVar10);
    }
    if ((0x105 < uVar21) || (*(int *)(*unaff_RDI + 8) == 0)) goto LAB_00f43d67;
    uVar20 = (ulonglong)*(uint *)(unaff_RDI + 10);
  } while( true );
}


