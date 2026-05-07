// Function: FUN_01252960
// Address: 01252960
// Size: 1389 bytes
// Class: GNNull

bool FUN_01252960(uint64_t param_1,uint64_t param_2,int64_t *param_3,uint64_t *param_4)

{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int iVar9;
  uint uVar10;
  uint64_t *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  char unaff_SIL;
  int64_t this_ptr;
  int iVar16;
  int64_t *plVar17;
  int iVar18;
  bool bVar19;
  uint64_t *local_res8;
  int *local_res10;
  uint64_t local_98;
  int64_t local_90;
  char local_88;
  uint64_t local_80;
  uint64_t local_78;
  int64_t local_70;
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  int64_t *local_50;
  uint64_t *local_48;
  
  local_58 = param_2;
  local_80 = param_1;
  local_78 = param_1;
  iVar1 = *local_res10;
  if ((int64_t)iVar1 == -2) goto LAB_01252e63;
  local_60 = '\0';
  local_68 = 0;
  plVar17 = &local_68;
  if (param_3 != (int64_t *)0x0) {
    plVar17 = param_3;
  }
  local_48 = local_res8;
  if (local_res8 == (uint64_t *)0x0) {
    local_48 = &local_98;
  }
  if (iVar1 == -1) {
    if (param_2 >> 0x20 == 0) {
      *local_res10 = 0;
      if (unaff_SIL == '\0') {
        lVar6 = *(int64_t *)(this_ptr + 0x48);
        uVar10 = *(uint *)(lVar6 + 0x18);
        uVar7 = 0;
        uVar15 = 0;
      }
      else {
        if (**(int64_t **)(*(int64_t *)(this_ptr + 0x50) + 0x10) == 0) {
          *local_res10 = 1;
        }
        lVar6 = *(int64_t *)(this_ptr + 0x48);
        uVar10 = *(uint *)(lVar6 + 0x18);
        uVar7 = 0;
        if ((int)uVar10 < 8) {
          uVar15 = 0;
        }
        else {
          plVar2 = *(int64_t **)(*(int64_t *)(this_ptr + 0x50) + 0x10);
          lVar3 = *plVar2;
          bVar19 = lVar3 == 0;
          uVar7 = (uint64_t)bVar19;
          uVar15 = (uint)bVar19;
          if ((uVar15 < uVar10 >> 3) && (uVar15 = (lVar3 == 0) + 1, plVar2[uVar15] != 0)) {
            uVar15 = (uint)bVar19;
          }
        }
      }
      if (param_4 != (uint64_t *)0x0) {
        uVar8 = FUN_00e7bdb0();
        *param_4 = uVar8;
        lVar6 = *(int64_t *)(this_ptr + 0x48);
        uVar10 = *(uint *)(lVar6 + 0x18);
      }
      uVar13 = uVar10 + 7;
      if (-1 < (int)uVar10) {
        uVar13 = uVar10;
      }
      if ((int)uVar15 < (int)uVar13 >> 3) {
        uVar8 = *(uint64_t *)(*(int64_t *)(lVar6 + 0x10) + (uint64_t)uVar15 * 8);
      }
      else {
        uVar8 = FUN_00e7bdb0();
      }
      *local_48 = uVar8;
      lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + uVar7 * 8);
      lVar3 = *plVar17;
      lVar4 = plVar17[1];
      if (lVar3 == lVar6) {
        if (((char)lVar4 != '\0') || (lVar6 == 0)) goto LAB_01252da5;
        FUN_00d50b00();
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        *plVar17 = lVar6;
        if (((char)lVar4 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_01252da0;
    }
    FUN_012521f0(param_2,unaff_SIL,param_4,local_48);
    lVar6 = *plVar17;
    if (lVar6 == local_90) {
      if (((char)plVar17[1] == '\0') && (local_90 != 0)) {
        if (local_88 == '\0') {
          FUN_00d50b00();
          local_50 = plVar17 + 1;
        }
        else {
          local_50 = plVar17 + 1;
        }
        goto LAB_01252e82;
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = lVar6;
      local_50 = plVar17 + 1;
      lVar3 = plVar17[1];
      if (local_88 == '\0') {
        if (local_90 != 0) {
          FUN_00d50b00();
        }
        *plVar17 = local_90;
        if (((char)lVar3 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *plVar17 = local_90;
        if (((char)lVar3 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_01252e82:
      *(void*)local_50 = 1;
    }
    if (((param_4 != (uint64_t *)0x0) && (unaff_SIL != '\0')) &&
       ((*(int *)((int64_t)param_4 + 4) == 0 ||
        ((local_58._4_4_ != 0 && (cVar5 = FUN_00e7c020(), cVar5 != '\0')))))) {
      *param_4 = local_58;
    }
  }
  else {
    lVar6 = *(int64_t *)(this_ptr + 0x48);
    iVar16 = *(int *)(lVar6 + 0x18);
    iVar9 = iVar16 + 7;
    if (-1 < iVar16) {
      iVar9 = iVar16;
    }
    iVar9 = iVar9 >> 3;
    iVar14 = iVar1;
    iVar18 = iVar1;
    iVar12 = iVar1;
    if ((unaff_SIL != '\0') && (7 < iVar16)) {
      plVar2 = *(int64_t **)(*(int64_t *)(this_ptr + 0x50) + 0x10);
      if (plVar2[iVar1] == 0) {
        if (iVar1 != 0) {
          iVar14 = iVar1 + -1;
          goto LAB_01252a26;
        }
        iVar18 = 1;
        iVar16 = 0;
LAB_01252c91:
        iVar12 = 0;
        if (*plVar2 != 0) {
          iVar12 = iVar16;
        }
        iVar14 = 1;
        if (iVar9 < 2) goto LAB_01252a52;
      }
      else {
LAB_01252a26:
        iVar16 = 1;
        if (iVar14 == 1) goto LAB_01252c91;
        iVar12 = iVar14;
        if (iVar9 <= iVar14) goto LAB_01252a52;
      }
      if (plVar2[(int64_t)iVar14 + 1] == 0) {
        iVar18 = iVar14 + 1;
      }
    }
LAB_01252a52:
    if (param_4 != (uint64_t *)0x0) {
      if (iVar12 < 1) {
        uVar7 = FUN_00e7bdb0();
      }
      else {
        uVar7 = *(uint64_t *)(*(int64_t *)(lVar6 + 0x10) + (uint64_t)(iVar12 - 1) * 8);
      }
      *param_4 = uVar7;
      lVar6 = *(int64_t *)(this_ptr + 0x48);
      iVar16 = *(int *)(lVar6 + 0x18);
      iVar9 = iVar16 + 7;
      if (-1 < iVar16) {
        iVar9 = iVar16;
      }
      iVar9 = iVar9 >> 3;
    }
    if (iVar18 < iVar9) {
      uVar7 = *(uint64_t *)(*(int64_t *)(lVar6 + 0x10) + (int64_t)iVar18 * 8);
    }
    else {
      uVar7 = FUN_00e7bdb0();
    }
    *local_48 = uVar7;
    lVar6 = *(int64_t *)
             (*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + (int64_t)iVar14 * 8);
    lVar3 = *plVar17;
    lVar4 = plVar17[1];
    if (lVar3 == lVar6) {
      if (((char)lVar4 != '\0') || (lVar6 == 0)) goto LAB_01252da5;
      FUN_00d50b00();
    }
    else {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *plVar17 = lVar6;
      if (((char)lVar4 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_01252da0:
    *(void*)(plVar17 + 1) = 1;
  }
LAB_01252da5:
  local_80 = local_80 >> 0x20;
  if (local_80 == 0) {
LAB_01252ddf:
    iVar16 = *(int *)(*(int64_t *)(this_ptr + 0x48) + 0x18);
    iVar9 = iVar16 + 7;
    if (-1 < iVar16) {
      iVar9 = iVar16;
    }
    iVar16 = *local_res10;
    iVar14 = -2;
    if (iVar16 == iVar9 >> 3) goto LAB_01252e4d;
    *local_res10 = iVar16 + 1;
    if ((unaff_SIL != '\0') &&
       (*(int64_t *)
         (*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + 8 + (int64_t)iVar16 * 8) == 0)) {
      iVar14 = -2;
      if (iVar16 + 1 != iVar9 >> 3) {
        iVar14 = iVar16 + 2;
      }
      goto LAB_01252e4d;
    }
  }
  else {
    if (*(int *)((int64_t)local_48 + 4) != 0) {
      puVar11 = &local_98;
      if (local_res8 != (uint64_t *)0x0) {
        puVar11 = local_res8;
      }
      if ((*(int *)((int64_t)puVar11 + 4) == 0) || (cVar5 = FUN_00e7c020(), cVar5 != '\0'))
      goto LAB_01252ddf;
    }
    iVar14 = -2;
    if (unaff_SIL != '\0') {
      *local_48 = local_78;
    }
LAB_01252e4d:
    *local_res10 = iVar14;
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
LAB_01252e63:
  return iVar1 != -2;
}

