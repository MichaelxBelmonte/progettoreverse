// Function: FUN_00c65f80
// Address: 00c65f80
// Size: 1208 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00c65f80(uint param_1,int64_t *param_2,int param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int64_t lVar6;
  int iVar7;
  uint uVar8;
  uint32_t uVar9;
  uint uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int *arg1;
  uint *this_ptr;
  int64_t lVar19;
  uint uVar20;
  int iVar21;
  uint64_t local_40;
  uint local_38;
  int local_34;
  
  uVar10 = this_ptr[6];
  uVar1 = this_ptr[7];
  *param_4 = 0;
  uVar11 = 0xffffffce;
  if (param_3 - 1U < 0x20) {
    lVar6 = *param_2;
    uVar2 = *(uint *)(param_2 + 2);
    local_40 = (uint64_t)uVar2;
    uVar18 = this_ptr[1];
    uVar3 = this_ptr[2];
    *this_ptr = uVar18;
    if (param_1 != 0) {
      uVar4 = this_ptr[3];
      uVar5 = this_ptr[4];
      lVar19 = (int64_t)(int)(uVar10 - uVar1) + 1;
      local_40 = (uint64_t)uVar2;
      iVar21 = 0;
      local_34 = 0;
      uVar10 = 0;
      do {
        iVar7 = FUN_00c66440();
        uVar15 = 0x1fU - iVar7;
        if (uVar4 < 0x1fU - iVar7) {
          uVar15 = uVar4;
        }
        uVar17 = ~(-1 << ((byte)uVar15 & 0x1f));
        iVar7 = *arg1;
        iVar21 = iVar21 + 1;
        iVar14 = -iVar7;
        if (0 < iVar7) {
          iVar14 = iVar7;
        }
        iVar7 = (iVar7 >> 0x1f) + iVar14 * 2;
        uVar20 = local_34 + iVar7;
        uVar8 = uVar20 / uVar17;
        if ((uVar8 < 9) && (uVar15 = uVar15 + uVar8 + (uint)(uVar20 % uVar17 != 0), uVar15 < 0x1a))
        {
          FUN_00c6c310();
          uVar9 = FUN_00c6c320();
          *(void*)(lVar6 + (uint64_t)((uint)local_40 >> 3)) = uVar9;
          uVar15 = uVar15 + (uint)local_40;
        }
        else {
          FUN_00c6c310();
          uVar9 = FUN_00c6c320(local_40 & 0xffffff07 ^ 0x17);
          *(void*)(lVar6 + (local_40 >> 3)) = uVar9;
          local_40._0_4_ = (uint)local_40 + 9;
          iVar16 = ((uint)local_40 & 7) + param_3;
          FUN_00c6c310();
          iVar14 = 0x20 - iVar16;
          if (iVar14 < 0) {
            bVar13 = 0x28 - (char)iVar16;
            iVar14 = CONCAT31((int3)((uint)iVar16 >> 8),bVar13);
            uVar15 = uVar20 << (bVar13 & 0x1f);
            *(char *)(lVar6 + 4 + (uint64_t)((uint)local_40 >> 3)) = (char)uVar15;
          }
          else {
            uVar15 = ~((0xffffffffU >> (-(char)param_3 & 0x1fU)) << ((byte)iVar14 & 0x1f));
          }
          uVar9 = FUN_00c6c320(iVar14,uVar15);
          *(void*)(lVar6 + (uint64_t)((uint)local_40 >> 3)) = uVar9;
          uVar15 = (uint)local_40 + param_3;
        }
        local_40 = (uint64_t)uVar15;
        if (iVar21 < (int)uVar1) {
          lVar12 = 1;
        }
        else {
          iVar21 = 0;
          lVar12 = lVar19;
        }
        uVar18 = (uVar18 - (uVar18 * uVar3 >> 9)) + iVar7 * uVar3;
        if (0xffff < uVar20) {
          uVar18 = 0xffff;
        }
        if (param_1 <= uVar10) {
          return 0xffffffce;
        }
        local_38 = uVar10 + 1;
        arg1 = arg1 + lVar12;
        local_34 = 0;
        if (((uVar18 & 0x3fffff80) == 0) && (local_34 = 0, local_38 < param_1)) {
          iVar16 = ~uVar10 + param_1;
          local_38 = uVar10 + 0x10000;
          iVar14 = 0;
          iVar7 = uVar10 - param_1;
          while (iVar7 != -1) {
            if (*arg1 != 0) {
              local_38 = uVar10 + iVar14 + 1;
              iVar16 = iVar14;
LAB_00c663c0:
              local_34 = -1;
              goto LAB_00c663c7;
            }
            iVar21 = iVar21 + 1;
            if (iVar21 < (int)uVar1) {
              lVar12 = 1;
            }
            else {
              iVar21 = 0;
              lVar12 = lVar19;
            }
            arg1 = arg1 + lVar12;
            if (iVar14 == 0xfffe) {
              local_34 = 0;
              iVar16 = 0xffff;
              goto LAB_00c663c7;
            }
            if (iVar7 == -2) break;
            if (*arg1 != 0) {
              local_38 = uVar10 + iVar14 + 2;
              iVar16 = iVar14 + 1;
              goto LAB_00c663c0;
            }
            iVar14 = iVar14 + 2;
            iVar21 = iVar21 + 1;
            if (iVar21 < (int)uVar1) {
              lVar12 = 1;
            }
            else {
              iVar21 = 0;
              lVar12 = lVar19;
            }
            arg1 = arg1 + lVar12;
            iVar7 = (uVar10 - param_1) + iVar14;
          }
          local_34 = -1;
          local_38 = param_1;
LAB_00c663c7:
          iVar7 = FUN_00c66440();
          iVar7 = (uVar18 + 0x10 >> 6) + iVar7 + -0x18;
          uVar18 = ~(-1 << ((byte)iVar7 & 0x1f)) & uVar5;
          uVar10 = iVar16 / (int)uVar18;
          if (uVar10 < 9) {
            uVar18 = iVar7 + uVar10 + (uint)(iVar16 % (int)uVar18 != 0);
            uVar10 = 0x19;
            if (uVar18 < 0x1a) {
              uVar10 = uVar18;
            }
          }
          else {
            uVar10 = 0x19;
          }
          FUN_00c6c310();
          iVar7 = (uVar15 & 7) + uVar10;
          uVar9 = FUN_00c6c320(CONCAT31((int3)((uint)iVar7 >> 8),-(char)iVar7));
          *(void*)(lVar6 + (uint64_t)(uVar15 >> 3)) = uVar9;
          uVar18 = 0;
          local_40 = (uint64_t)(uVar10 + uVar15);
        }
        uVar10 = local_38;
      } while (local_38 < param_1);
    }
    *param_4 = (int)local_40 - uVar2;
    FUN_00c66820();
    uVar11 = 0;
  }
  return uVar11;
}

