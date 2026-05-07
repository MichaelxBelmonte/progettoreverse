// Function: FUN_00efc4dd
// Address: 00efc4dd
// Size: 872 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00efc4dd(int *param_1,int *param_2,void*param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint8_t auVar2 [16];
  uint8_t uVar3;
  uint uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint64_t uVar11;
  uint uVar12;
  uint64_t uVar13;
  int64_t *arg1;
  int *piVar14;
  int64_t this_ptr;
  bool bVar15;
  size_t sVar16;
  int iVar18;
  uint uVar19;
  bool bVar20;
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  void*local_res8;
  void *local_res10;
  int local_res18;
  int local_res20;
  int64_t lVar17;
  
  lVar5 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  iVar10 = param_2[2];
  uVar6 = *(void*)param_2;
  if (local_res20 != 0) {
    lVar17 = *arg1;
    uVar11 = (uint64_t)(arg1[1] - lVar17) >> 3;
    uVar19 = (uint)uVar11;
    uVar12 = uVar19;
    if ((int)arg1[9] == 1) {
      uVar12 = *(uint *)((int64_t)arg1 + 0x4c);
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
          *(void*)(param_2 + 1) = *(void*)param_2;
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
          *(void*)(param_1 + 1) = *(void*)param_1;
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
    lVar17 = (int64_t)param_3 + 3;
    uVar11 = FUN_00efcddc(this_ptr + 0xe0,*(void*)(this_ptr + 0xc70),lVar17,param_4 - 3);
    sVar16 = (size_t)lVar17;
    if (uVar11 < 0xffffffffffffff89) {
      if (((*(int *)(this_ptr + 0x398) == 0) && (uVar11 < 0x19)) &&
         (iVar18 = FUN_00efc3c1(), iVar18 != 0)) {
        uVar11 = 1;
      }
      if (*(int *)(this_ptr + 0x378) == 0) {
        if (uVar11 == 1) {
          uVar11 = uVar13;
          if (param_4 < 4) goto LAB_00efc81e;
          uVar3 = *local_res8;
          iVar18 = local_res18 + (int)local_res10 * 8 + 2;
          *param_3 = (short)iVar18;
          *(char *)(param_3 + 1) = (char)((uint)iVar18 >> 0x10);
          *(void*)((int64_t)param_3 + 3) = uVar3;
          param_2[2] = iVar10;
          *(void*)param_2 = uVar6;
          uVar11 = 4;
        }
        else if (uVar11 == 0) {
          uVar1 = (int64_t)local_res10 + 3;
          uVar11 = uVar13;
          if (param_4 < uVar1) goto LAB_00efc81e;
          iVar18 = local_res18 + (int)local_res10 * 8;
          *param_3 = (short)iVar18;
          *(char *)(param_3 + 1) = (char)((uint)iVar18 >> 0x10);
          _memcpy(param_3,local_res10,sVar16);
          uVar11 = uVar1;
          if (0xffffffffffffff88 < uVar1) goto LAB_00efc81e;
          param_2[2] = iVar10;
          *(void*)param_2 = uVar6;
        }
        else {
          auVar2 = *(uint8_t (*) [16])(this_ptr + 0xc68);
          auVar22._0_8_ = auVar2._8_8_;
          auVar22._8_4_ = auVar2._0_4_;
          auVar22._12_4_ = auVar2._4_4_;
          *(uint8_t (*) [16])(this_ptr + 0xc68) = auVar22;
          iVar10 = local_res18 + (int)uVar11 * 8 + 4;
          *param_3 = (short)iVar10;
          *(char *)(param_3 + 1) = (char)((uint)iVar10 >> 0x10);
          uVar11 = uVar11 + 3;
        }
        if (*(int *)(&g_000015e4 + *(int64_t *)(this_ptr + 0xc68)) == 2) {
          *(void*)(&g_000015e4 + *(int64_t *)(this_ptr + 0xc68)) = 1;
        }
      }
      else {
        FUN_00efd10d();
        auVar2 = *(uint8_t (*) [16])(this_ptr + 0xc68);
        auVar21._0_8_ = auVar2._8_8_;
        auVar21._8_4_ = auVar2._0_4_;
        auVar21._12_4_ = auVar2._4_4_;
        *(uint8_t (*) [16])(this_ptr + 0xc68) = auVar21;
        uVar11 = 0;
      }
    }
  }
LAB_00efc81e:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar5) {
                        ___stack_chk_fail();
  }
  return uVar11;
}

