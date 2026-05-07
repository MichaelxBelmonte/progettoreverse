// Function: FUN_00967b0c
// Address: 00967b0c
// Size: 553 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00967b0c(uint *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint *arg1;
  uint uVar8;
  int iVar9;
  uint *this_ptr;
  int iVar10;
  uint uVar11;
  bool bVar12;
  
  uVar11 = *arg1;
  uVar4 = *param_2;
  if ((int)uVar11 < (int)uVar4) {
    if (arg1 == param_1) {
      uVar7 = (uint64_t)uVar4;
      uVar11 = uVar4;
    }
    else {
      FUN_00969bc3();
      uVar7 = (uint64_t)uVar11;
      uVar11 = uVar4;
    }
  }
  else {
    uVar8 = uVar11;
    if (param_2 != param_1) {
      FUN_00969bc3();
      uVar8 = uVar4;
    }
    uVar7 = (uint64_t)uVar8;
  }
  *param_1 = uVar11;
  piVar1 = *(int **)(arg1 + 2);
  piVar2 = *(int **)(param_2 + 2);
  piVar3 = *(int **)(param_1 + 2);
  if (((int)uVar11 < (int)this_ptr[4]) || (this_ptr[5] == 0)) {
    *param_1 = uVar11 + 1;
  }
  uVar4 = *this_ptr;
  iVar10 = (int)uVar7;
  if (uVar4 == 0) {
    if (0 < iVar10) {
      uVar6 = 0;
      iVar9 = 0;
      do {
        uVar4 = piVar1[uVar6];
        uVar8 = uVar4 + iVar9 + piVar2[uVar6];
        if (uVar8 < uVar4) {
          iVar9 = 1;
        }
        if (uVar4 < uVar8) {
          iVar9 = 0;
        }
        piVar3[uVar6] = uVar8;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
      if ((iVar9 != 0) && (iVar10 < (int)uVar11)) {
        do {
          uVar4 = piVar1[uVar7];
          uVar8 = uVar4 + iVar9 + piVar2[uVar7];
          if (uVar8 < uVar4) {
            iVar9 = 1;
          }
          if (uVar4 < uVar8) {
            iVar9 = 0;
          }
          piVar3[uVar7] = uVar8;
          uVar7 = uVar7 + 1;
        } while ((iVar9 != 0) && ((int64_t)uVar7 < (int64_t)(int)uVar11));
        uVar7 = uVar7 & 0xffffffff;
      }
      if (iVar9 != 0) {
        if ((this_ptr[5] != 0) && ((int)this_ptr[4] <= (int)uVar7)) goto LAB_00967d1a;
        piVar3[uVar7] = iVar9;
      }
    }
  }
  else if (0 < iVar10) {
    bVar12 = uVar4 <= (uint)(*piVar1 + *piVar2);
    if (!bVar12) {
      uVar4 = 0;
    }
    *piVar3 = (*piVar1 + *piVar2) - uVar4;
    if (iVar10 != 1) {
      uVar6 = 1;
      do {
        uVar8 = (uint)bVar12 + piVar1[uVar6] + piVar2[uVar6];
        bVar12 = *this_ptr <= uVar8;
        uVar4 = *this_ptr;
        if (!bVar12) {
          uVar4 = 0;
        }
        piVar3[uVar6] = uVar8 - uVar4;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    uVar4 = (uint)bVar12;
    if ((iVar10 < (int)uVar11) && (bVar12 != false)) {
      uVar4 = 1;
      do {
        uVar5 = uVar4 + piVar1[uVar7] + piVar2[uVar7];
        uVar8 = *this_ptr;
        bVar12 = uVar8 <= uVar5;
        uVar4 = (uint)bVar12;
        if (!bVar12) {
          uVar8 = 0;
        }
        piVar3[uVar7] = uVar5 - uVar8;
        uVar7 = uVar7 + 1;
      } while (((int64_t)uVar7 < (int64_t)(int)uVar11) && (bVar12));
      uVar7 = uVar7 & 0xffffffff;
    }
    if (uVar4 != 0) {
      if ((this_ptr[5] != 0) && ((int)this_ptr[4] <= (int)uVar7)) {
LAB_00967d1a:
        FUN_0096936d();
        return;
      }
      piVar3[uVar7] = uVar4;
    }
  }
  if (piVar3[*param_1 - 1] == 0) {
    *param_1 = *param_1 - 1;
  }
  return;
}

