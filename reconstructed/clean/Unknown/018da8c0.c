// Function: FUN_018da8c0
// Address: 018da8c0
// Size: 1390 bytes
// Class: Unknown

int64_t * FUN_018da8c0(int param_1,int param_2)

{
  uint64_t in_RAX;
  uint64_t uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int64_t lVar7;
  uint uVar8;
  uint32_t uVar9;
  int64_t *plVar10;
  undefined7 uVar11;
  uint uVar12;
  int64_t *arg1;
  int64_t lVar13;
  int64_t *this_ptr;
  int iVar14;
  int64_t lVar15;
  void*local_88;
  char local_80;
  uint64_t local_78;
  int local_6c;
  int64_t local_68;
  int64_t local_60;
  char local_58;
  void*local_50;
  int64_t local_48;
  int64_t local_40;
  uint32_t local_38;
  char local_31;
  
  lVar15 = *arg1;
  cVar2 = (char)arg1[1];
  local_38 = (uint32_t)CONCAT71((int7)((uint64_t)in_RAX >> 8),cVar2);
  local_31 = lVar15 != 0 && cVar2 != '\0';
  local_6c = param_1;
  if (lVar15 != 0 && cVar2 != '\0') {
    FUN_00d50b00();
  }
  FUN_018da560();
  lVar13 = local_60;
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  iVar14 = *(int *)(lVar13 + 0x18);
  iVar3 = iVar14 + 3;
  if (-1 < iVar14) {
    iVar3 = iVar14;
  }
  if (3 < iVar14) {
    lVar7 = 0;
    do {
      if (*(int *)(*(int64_t *)(lVar13 + 0x10) + lVar7 * 4) == param_2) {
        lVar7 = 0;
        goto LAB_018da990;
      }
      lVar7 = lVar7 + 1;
    } while (iVar3 >> 2 != (int)lVar7);
  }
  goto LAB_018dadfa;
LAB_018da990:
  if (*(int *)(*(int64_t *)(lVar13 + 0x10) + lVar7 * 4) != local_6c) {
    lVar7 = lVar7 + 1;
    if (iVar3 >> 2 == (int)lVar7) goto LAB_018dadfa;
    goto LAB_018da990;
  }
  local_78 = FUN_01715480();
  FUN_018da170();
  lVar7 = local_60;
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  if ((int)*(uint *)(lVar7 + 0x18) < 4) goto LAB_018dadf2;
  iVar14 = (int)local_78 + 0x18;
  uVar5 = *(uint *)(lVar7 + 0x18) >> 2;
  local_68 = lVar7;
  lVar7 = *(int64_t *)(lVar7 + 0x10);
  if (uVar5 == 1) {
    iVar3 = -1;
    uVar1 = 0;
    plVar10 = this_ptr;
  }
  else {
    iVar3 = -1;
    uVar1 = 0;
    do {
      iVar6 = *(int *)(lVar7 + uVar1 * 4) + iVar14;
      iVar4 = iVar3;
      if (iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc == param_2)
      {
        iVar4 = (int)uVar1;
      }
      iVar6 = *(int *)(lVar7 + 4 + uVar1 * 4) + iVar14;
      plVar10 = (int64_t *)0x0;
      iVar3 = (int)uVar1 + 1;
      if (iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc != param_2)
      {
        iVar3 = iVar4;
      }
      uVar1 = uVar1 + 2;
    } while ((uVar5 & 0xfffffffe) != uVar1);
  }
  if (((uVar5 & 1) != 0) &&
     (iVar14 = iVar14 + *(int *)(lVar7 + uVar1 * 4),
     iVar14 + (((uint)(iVar14 / 6 + (iVar14 >> 0x1f)) >> 1) - (iVar14 >> 0x1f)) * -0xc == param_2))
  {
    iVar3 = (int)uVar1;
  }
  uVar9 = local_38;
  if (iVar3 != -1) {
    local_48 = lVar13;
    local_40 = lVar15;
    local_50 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_50 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    local_88 = local_50;
    uVar5 = *(uint *)(local_68 + 0x18);
    if (3 < (int)uVar5) {
      iVar14 = (param_2 - (int)local_78) + 0xc;
      local_78 = (uint64_t)
                 (iVar14 + (((uint)(iVar14 / 6 + (iVar14 >> 0x1f)) >> 1) - (iVar14 >> 0x1f)) * -0xc)
      ;
      uVar12 = uVar5 >> 2;
      plVar10 = (int64_t *)0x0;
      do {
        iVar14 = *(int *)(*(int64_t *)(local_68 + 0x10) +
                         (int64_t)(((int)plVar10 + iVar3) % (int)uVar12) * 4);
        iVar6 = iVar14 - (int)local_78;
        iVar4 = 0;
        if (0 < iVar6) {
          iVar4 = iVar6;
        }
        iVar14 = (iVar4 + (int)local_78) - iVar14;
        uVar12 = (uint)(iVar14 != 0);
        uVar12 = (iVar6 + ((iVar14 - uVar12) / 0xc + uVar12) * 0xc) % 0xc;
        iVar4 = *(int *)(local_88 + 3);
        lVar15 = (int64_t)iVar4;
        iVar6 = iVar4 + 3;
        if (-1 < lVar15) {
          iVar6 = iVar4;
        }
        if (3 < lVar15) {
          lVar13 = 0;
          do {
            if (*(uint *)(local_88[2] + lVar13 * 4) == uVar12) goto LAB_018dabbb;
            lVar13 = lVar13 + 1;
          } while (iVar6 >> 2 != (int)lVar13);
        }
        FUN_00c8e340(iVar14 != 0,1);
        *(uint *)(local_88[2] + lVar15) = uVar12;
        uVar5 = *(uint *)(local_68 + 0x18);
LAB_018dabbb:
        uVar8 = (int)plVar10 + 1;
        plVar10 = (int64_t *)(uint64_t)uVar8;
        uVar12 = uVar5 + 3;
        if (-1 < (int)uVar5) {
          uVar12 = uVar5;
        }
        uVar12 = (int)uVar12 >> 2;
      } while ((int)uVar8 < (int)uVar12);
    }
    iVar14 = param_2 * 7;
    iVar14 = iVar14 + (((uint)(iVar14 / 6 + (iVar14 >> 0x1f)) >> 1) - (iVar14 >> 0x1f)) * -0xc;
    cVar2 = ((byte)(iVar14 >> 0x1f) & 0xc) + (char)iVar14 + '\x06';
    uVar5 = cVar2 * 0x2b;
    local_80 = '\0';
    FUN_017167a0((int)(char)(cVar2 + ((char)((uVar5 & 0xffff) >> 0xf) + (char)(uVar5 >> 9)) * -0xc +
                            -6),&local_88);
    lVar13 = local_48;
    lVar15 = local_60;
    uVar11 = (undefined7)((uint64_t)plVar10 >> 8);
    if (local_40 == local_60) {
      lVar15 = local_40;
      uVar9 = local_38;
      if (((char)local_38 == '\0') && (local_40 != 0)) {
        if (local_58 != '\0') goto LAB_018dad34;
        FUN_00d50b00();
        uVar9 = (int)CONCAT71(uVar11,1);
      }
LAB_018dad77:
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
        uVar9 = (uint32_t)CONCAT71(uVar11,1);
        if (local_31 != '\0') {
          FUN_00d50b20();
        }
        goto LAB_018dad77;
      }
      if (local_31 != '\0') {
        FUN_00d50b20();
      }
LAB_018dad34:
      local_58 = '\0';
      uVar9 = (uint32_t)CONCAT71(uVar11,1);
    }
    if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
      FUN_00d50b20();
    }
    FUN_01716100((uint64_t)((int64_t)((local_6c - param_2) + 0xc) * 0x2aaaaaab) >> 0x3f);
    if (local_50 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  local_38 = uVar9;
  if (local_68 != 0) {
LAB_018dadf2:
    FUN_00d50b20();
  }
LAB_018dadfa:
  *(void*)(this_ptr + 1) = 0;
  if (((char)local_38 == '\0') && (lVar15 != 0)) {
    FUN_00d50b00();
  }
  *this_ptr = lVar15;
  *(void*)(this_ptr + 1) = 1;
  if (lVar13 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

