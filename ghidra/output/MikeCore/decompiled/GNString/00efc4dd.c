// Function: FUN_00efc4dd
// Address: 00efc4dd
// Size: 872 bytes
// Class: GNString


ulonglong FUN_00efc4dd(int *param_1,int *param_2,undefined2 *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *unaff_RSI;
  int *piVar14;
  longlong unaff_RDI;
  bool bVar15;
  size_t sVar16;
  int iVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 *local_res8;
  void *local_res10;
  int local_res18;
  int local_res20;
  longlong lVar17;
  
  lVar5 = *(longlong *)PTR____stack_chk_guard_024a9898;
  iVar10 = param_2[2];
  uVar6 = *(undefined8 *)param_2;
  if (local_res20 != 0) {
    lVar17 = *unaff_RSI;
    uVar11 = (ulonglong)(unaff_RSI[1] - lVar17) >> 3;
    uVar19 = (uint)uVar11;
    uVar12 = uVar19;
    if ((int)unaff_RSI[9] == 1) {
      uVar12 = *(uint *)((longlong)unaff_RSI + 0x4c);
    }
    if (uVar19 != 0) {
      uVar13 = 0;
      do {
        bVar20 = *(short *)(lVar17 + 4 + uVar13 * 8) == 0;
        bVar15 = uVar12 != uVar13 && bVar20;
        uVar4 = *(uint *)(lVar17 + uVar13 * 8);
        uVar19 = uVar4 - 1;
        uVar9 = uVar4;
        if (uVar19 < 3) {
          uVar7 = uVar19 + bVar15;
          if (uVar7 == 3) {
            iVar18 = *param_2 + -1;
            iVar8 = *param_1 + -1;
          }
          else {
            iVar18 = param_2[uVar7];
            iVar8 = param_1[uVar7];
          }
          if (iVar18 != iVar8) {
            uVar9 = iVar8 + 3;
            *(uint *)(lVar17 + uVar13 * 8) = uVar9;
            goto LAB_00efc5cf;
          }
LAB_00efc5e3:
          uVar9 = uVar9 - (uVar12 == uVar13 || !bVar20);
          if (uVar9 != 0) {
            if (uVar9 == 3) {
              iVar8 = *param_2;
              iVar18 = iVar8 + -1;
            }
            else {
              iVar18 = param_2[uVar9];
              iVar8 = *param_2;
            }
            piVar14 = param_2 + 2;
            if (1 < uVar9) {
              piVar14 = param_2 + 1;
            }
            param_2[2] = *piVar14;
            param_2[1] = iVar8;
            goto LAB_00efc61f;
          }
        }
        else {
LAB_00efc5cf:
          if (uVar9 < 4) goto LAB_00efc5e3;
          *(undefined8 *)(param_2 + 1) = *(undefined8 *)param_2;
          iVar18 = uVar9 - 3;
LAB_00efc61f:
          *param_2 = iVar18;
        }
        if (uVar4 < 4) {
          uVar19 = uVar19 + bVar15;
          if (uVar19 != 0) {
            if (uVar19 == 3) {
              iVar8 = *param_1;
              iVar18 = iVar8 + -1;
            }
            else {
              iVar18 = param_1[uVar19];
              iVar8 = *param_1;
            }
            piVar14 = param_1 + 2;
            if (1 < uVar19) {
              piVar14 = param_1 + 1;
            }
            param_1[2] = *piVar14;
            param_1[1] = iVar8;
            goto LAB_00efc66a;
          }
        }
        else {
          *(undefined8 *)(param_1 + 1) = *(undefined8 *)param_1;
          iVar18 = uVar4 - 3;
LAB_00efc66a:
          *param_1 = iVar18;
        }
        uVar13 = uVar13 + 1;
      } while ((uVar11 & 0xffffffff) != uVar13);
    }
  }
  uVar13 = 0xffffffffffffffba;
  uVar11 = uVar13;
  if (2 < param_4) {
    lVar17 = (longlong)param_3 + 3;
    uVar11 = FUN_00efcddc(unaff_RDI + 0xe0,*(undefined8 *)(unaff_RDI + 0xc70),lVar17,param_4 - 3);
    sVar16 = (size_t)lVar17;
    if (uVar11 < 0xffffffffffffff89) {
      if (((*(int *)(unaff_RDI + 0x398) == 0) && (uVar11 < 0x19)) &&
         (iVar18 = FUN_00efc3c1(), iVar18 != 0)) {
        uVar11 = 1;
      }
      if (*(int *)(unaff_RDI + 0x378) == 0) {
        if (uVar11 == 1) {
          uVar11 = uVar13;
          if (param_4 < 4) goto LAB_00efc81e;
          uVar3 = *local_res8;
          iVar18 = local_res18 + (int)local_res10 * 8 + 2;
          *param_3 = (short)iVar18;
          *(char *)(param_3 + 1) = (char)((uint)iVar18 >> 0x10);
          *(undefined1 *)((longlong)param_3 + 3) = uVar3;
          param_2[2] = iVar10;
          *(undefined8 *)param_2 = uVar6;
          uVar11 = 4;
        }
        else if (uVar11 == 0) {
          uVar1 = (longlong)local_res10 + 3;
          uVar11 = uVar13;
          if (param_4 < uVar1) goto LAB_00efc81e;
          iVar18 = local_res18 + (int)local_res10 * 8;
          *param_3 = (short)iVar18;
          *(char *)(param_3 + 1) = (char)((uint)iVar18 >> 0x10);
          _memcpy(param_3,local_res10,sVar16);
          uVar11 = uVar1;
          if (0xffffffffffffff88 < uVar1) goto LAB_00efc81e;
          param_2[2] = iVar10;
          *(undefined8 *)param_2 = uVar6;
        }
        else {
          auVar2 = *(undefined1 (*) [16])(unaff_RDI + 0xc68);
          auVar22._0_8_ = auVar2._8_8_;
          auVar22._8_4_ = auVar2._0_4_;
          auVar22._12_4_ = auVar2._4_4_;
          *(undefined1 (*) [16])(unaff_RDI + 0xc68) = auVar22;
          iVar10 = local_res18 + (int)uVar11 * 8 + 4;
          *param_3 = (short)iVar10;
          *(char *)(param_3 + 1) = (char)((uint)iVar10 >> 0x10);
          uVar11 = uVar11 + 3;
        }
        if (*(int *)(&DAT_000015e4 + *(longlong *)(unaff_RDI + 0xc68)) == 2) {
          *(undefined4 *)(&DAT_000015e4 + *(longlong *)(unaff_RDI + 0xc68)) = 1;
        }
      }
      else {
        FUN_00efd10d();
        auVar2 = *(undefined1 (*) [16])(unaff_RDI + 0xc68);
        auVar21._0_8_ = auVar2._8_8_;
        auVar21._8_4_ = auVar2._0_4_;
        auVar21._12_4_ = auVar2._4_4_;
        *(undefined1 (*) [16])(unaff_RDI + 0xc68) = auVar21;
        uVar11 = 0;
      }
    }
  }
LAB_00efc81e:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar5) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar11;
}


