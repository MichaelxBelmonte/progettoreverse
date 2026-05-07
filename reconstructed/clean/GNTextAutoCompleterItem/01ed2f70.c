// Function: FUN_01ed2f70
// Address: 01ed2f70
// Size: 2224 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ed2f70(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  int *piVar1;
  int64_t *plVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint7 uVar9;
  int64_t lVar8;
  int64_t *plVar10;
  void *pvVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint32_t uVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t *arg1;
  int iVar17;
  int64_t *this_ptr;
  uint uVar18;
  undefined7 uVar19;
  int64_t lVar20;
  int64_t lVar21;
  bool bVar22;
  uint uVar24;
  uint64_t uVar23;
  uint64_t extraout_XMM0_Qa;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  uint local_c4;
  int local_c0;
  uint local_bc;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  uint32_t local_64;
  uint64_t local_60;
  int64_t local_58;
  char local_50;
  uint64_t local_48;
  int64_t local_40;
  int64_t local_38;
  
  local_58 = *arg1;
  local_50 = '\0';
  iVar6 = FUN_00d23d20();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (iVar6 == -1) {
    return;
  }
  lVar20 = (int64_t)iVar6;
  lVar21 = *(int64_t *)(this_ptr[0x58] + 0x10);
  if (*(char *)(lVar21 + 4 + lVar20 * 8) == '\0') {
    return;
  }
  if (*(char *)(lVar21 + 5 + lVar20 * 8) != '\0') {
    return;
  }
  uVar18 = *(uint *)(this_ptr[0x58] + 0x18);
  uVar13 = 0;
  if (7 < (int)uVar18) {
    uVar25 = uVar18 >> 3;
    if (uVar18 < 0x48) {
      uVar12 = 0;
      uVar13 = 0;
    }
    else {
      uVar12 = 8;
      if ((uint64_t)(uVar25 & 7) != 0) {
        uVar12 = (uint64_t)(uVar25 & 7);
      }
      uVar12 = uVar25 - uVar12;
      uVar18 = 0;
      uVar24 = 0;
      uVar26 = 0;
      uVar27 = 0;
      uVar13 = 0;
      uVar28 = 0;
      uVar29 = 0;
      uVar30 = 0;
      uVar31 = 0;
      do {
        piVar1 = (int *)(lVar21 + uVar13 * 8);
        iVar7 = *piVar1;
        iVar17 = piVar1[2];
        piVar1 = (int *)(lVar21 + 0x10 + uVar13 * 8);
        iVar3 = *piVar1;
        iVar4 = piVar1[2];
        uVar18 = (uint)((int)uVar18 < iVar7) * iVar7 | ((int)uVar18 >= iVar7) * uVar18;
        uVar24 = (uint)((int)uVar24 < iVar17) * iVar17 | ((int)uVar24 >= iVar17) * uVar24;
        uVar26 = (uint)((int)uVar26 < iVar3) * iVar3 | ((int)uVar26 >= iVar3) * uVar26;
        uVar27 = (uint)((int)uVar27 < iVar4) * iVar4 | ((int)uVar27 >= iVar4) * uVar27;
        piVar1 = (int *)(lVar21 + 0x20 + uVar13 * 8);
        iVar7 = *piVar1;
        iVar17 = piVar1[2];
        piVar1 = (int *)(lVar21 + 0x30 + uVar13 * 8);
        iVar3 = *piVar1;
        iVar4 = piVar1[2];
        uVar28 = (uint)((int)uVar28 < iVar7) * iVar7 | ((int)uVar28 >= iVar7) * uVar28;
        uVar29 = (uint)((int)uVar29 < iVar17) * iVar17 | ((int)uVar29 >= iVar17) * uVar29;
        uVar30 = (uint)((int)uVar30 < iVar3) * iVar3 | ((int)uVar30 >= iVar3) * uVar30;
        uVar31 = (uint)((int)uVar31 < iVar4) * iVar4 | ((int)uVar31 >= iVar4) * uVar31;
        uVar13 = uVar13 + 8;
      } while (uVar12 != uVar13);
      uVar18 = ((int)uVar18 < (int)uVar28) * uVar28 | ((int)uVar18 >= (int)uVar28) * uVar18;
      uVar24 = ((int)uVar24 < (int)uVar29) * uVar29 | ((int)uVar24 >= (int)uVar29) * uVar24;
      uVar26 = ((int)uVar26 < (int)uVar30) * uVar30 | ((int)uVar26 >= (int)uVar30) * uVar26;
      uVar27 = ((int)uVar27 < (int)uVar31) * uVar31 | ((int)uVar27 >= (int)uVar31) * uVar27;
      uVar18 = ((int)uVar26 < (int)uVar18) * uVar18 | ((int)uVar26 >= (int)uVar18) * uVar26;
      uVar24 = ((int)uVar27 < (int)uVar24) * uVar24 | ((int)uVar27 >= (int)uVar24) * uVar27;
      uVar13 = (uint64_t)
               (((int)uVar24 < (int)uVar18) * uVar18 | ((int)uVar24 >= (int)uVar18) * uVar24);
    }
    do {
      uVar18 = *(uint *)(lVar21 + uVar12 * 8);
      if ((int)uVar13 < (int)uVar18) {
        uVar13 = (uint64_t)uVar18;
      }
      uVar12 = uVar12 + 1;
    } while (uVar25 != uVar12);
  }
  plVar10 = (int64_t *)this_ptr[0x55];
  if (plVar10 != (int64_t *)0x0) {
    uVar23 = FUN_00d50b00();
    local_118 = *arg1;
    local_110 = '\0';
    (**(code **)(*plVar10 + 0x18))(uVar23,&local_118);
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar10 = (int64_t *)this_ptr[0x54];
  FUN_00d50b00();
  local_108 = *arg1;
  local_100 = '\0';
  (**(code **)(*plVar10 + 0x18))(&local_108);
  lVar21 = local_58;
  local_bc = (uint)uVar13;
  if (local_58 == 0) {
    uVar14 = (uint32_t)CONCAT71((int7)(uVar13 >> 8),1);
    lVar21 = 0;
  }
  else {
    if (local_50 == '\0') {
      FUN_00d50b00();
      uVar14 = 0;
      if ((local_50 == '\0') || (local_58 == 0)) goto LAB_01ed31ba;
      FUN_00d50b20();
    }
    else {
      local_50 = '\0';
    }
    uVar14 = 0;
  }
LAB_01ed31ba:
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  iVar7 = *(int *)(*(int64_t *)(this_ptr[0x58] + 0x10) + lVar20 * 8);
  *(void*)(*(int64_t *)(this_ptr[0x58] + 0x10) + 5 + lVar20 * 8) = 1;
  uVar18 = *(uint *)(lVar21 + 0xc);
  uVar9 = (uint7)(uint3)(uVar18 >> 8);
  local_70 = lVar21;
  local_64 = uVar14;
  if ((int)uVar18 < 1) {
    local_48 = CONCAT71(uVar9,1);
    local_60 = 0;
    local_40 = 0;
    local_38 = 0;
  }
  else {
    local_c0 = iVar6 + 1;
    lVar21 = lVar20 * 8 + 8;
    lVar20 = (uint64_t)uVar18 + 1;
    local_48 = CONCAT71(uVar9,1);
    local_38 = 0;
    local_40 = 0;
    local_60 = 0;
    do {
      lVar15 = local_40;
      uVar18 = uVar18 - 1;
      lVar8 = *(int64_t *)(local_70 + 0x10);
      lVar16 = *(int64_t *)(lVar8 + (uint64_t)uVar18 * 8);
      if (local_40 == lVar16) {
        if (((char)local_60 == '\0') && (lVar16 != 0)) {
          local_60 = CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (lVar16 != 0) {
          lVar8 = FUN_00d50b00();
        }
        bVar22 = (char)local_60 != '\0';
        local_60 = CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
        lVar15 = lVar16;
        if ((bVar22) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      local_f0 = '\0';
      local_f8 = lVar15;
      local_40 = lVar15;
      FUN_00d23370();
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      plVar2 = (int64_t *)this_ptr[0x54];
      local_88 = 0;
      FUN_00d50b00();
      local_88 = '\x01';
      local_e8 = local_40;
      local_e0 = '\0';
      plVar10 = &local_e8;
      local_90 = this_ptr;
      uVar23 = (**(code **)(*plVar2 + 0x18))(plVar10,&local_90);
      lVar16 = local_38;
      lVar8 = local_58;
      uVar19 = (undefined7)((uint64_t)this_ptr >> 8);
      if (local_58 == local_38) {
        lVar8 = local_38;
        if (((char)local_48 == '\0') && (local_58 != 0)) {
          if (local_50 == '\0') {
            uVar23 = FUN_00d50b00();
            goto LAB_01ed3410;
          }
          goto LAB_01ed33b4;
        }
        uVar13 = local_48 & 0xffffffff;
joined_r0x01ed33fb:
        if ((local_50 != '\0') && (local_58 != 0)) {
          uVar23 = FUN_00d50b20();
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != 0) {
            uVar23 = FUN_00d50b00();
          }
          uVar13 = CONCAT71(uVar19,1);
          if (((char)local_48 != '\0') && (lVar16 != 0)) {
            uVar23 = FUN_00d50b20();
            lVar16 = lVar8;
LAB_01ed3410:
            uVar13 = CONCAT71(uVar19,1);
            lVar8 = lVar16;
          }
          goto joined_r0x01ed33fb;
        }
        if (((char)local_48 != '\0') && (local_38 != 0)) {
          uVar23 = FUN_00d50b20();
        }
LAB_01ed33b4:
        local_50 = '\0';
        uVar13 = CONCAT71(uVar19,1);
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        uVar23 = FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        uVar23 = FUN_00d50b20();
      }
      local_c4 = uVar18;
      if (lVar8 == 0) {
        local_38 = 0;
        uVar13 = uVar13 & 0xffffffff;
      }
      else {
        local_38 = lVar8;
        if ((*(int *)(lVar8 + 0xc) == 0) &&
           (cVar5 = (**(code **)(*this_ptr + 0xa40))(), uVar23 = extraout_XMM0_Qa, cVar5 == '\0'))
        {
          if ((char)uVar13 == '\0') {
            local_38 = 0;
            uVar13 = 0;
          }
          else {
            uVar13 = 0;
            local_38 = 0;
            uVar23 = FUN_00d50b20();
          }
        }
        else {
          uVar13 = uVar13 & 0xffffffff;
        }
      }
      lVar8 = this_ptr[0x54];
      lVar16 = this_ptr[0x58];
      iVar17 = *(int *)(lVar16 + 0x18);
      FUN_00c8e340(uVar23,1);
      bVar22 = local_38 != 0;
      lVar16 = *(int64_t *)(lVar16 + 0x10);
      local_48 = uVar13;
      _memmove(plVar10,(void *)(int64_t)(iVar17 - (int)lVar21),param_3);
      *(uint64_t *)(lVar16 + lVar21) = (uint64_t)CONCAT14(bVar22 && lVar8 != 0,iVar7 + 1);
      lVar20 = lVar20 + -1;
      uVar18 = local_c4;
    } while (1 < lVar20);
  }
  lVar21 = this_ptr[0x34];
  *(void*)(this_ptr + 0x30) = *(void*)(this_ptr[0x57] + 0xc);
  if ((lVar21 != 0) && (iVar7 = *(int *)(lVar21 + 0x18), 3 < iVar7)) {
    pvVar11 = *(void **)(lVar21 + 0x10);
    lVar20 = 0;
    bVar22 = false;
    do {
      iVar17 = *(int *)((int64_t)pvVar11 + lVar20 * 4);
      if (iVar6 < iVar17) {
        *(int *)((int64_t)pvVar11 + lVar20 * 4) = iVar17 + *(int *)(local_70 + 0xc);
        iVar7 = *(int *)(lVar21 + 0x18);
        bVar22 = true;
      }
      lVar20 = lVar20 + 1;
      iVar17 = iVar7 + 3;
      if (-1 < iVar7) {
        iVar17 = iVar7;
      }
    } while (lVar20 < iVar17 >> 2);
    if (bVar22) {
      uVar23 = FUN_00d50b00();
      FUN_00c8e340(uVar23,0);
      _memcpy(pvVar11,(void *)(int64_t)*(int *)(lVar21 + 0x18),param_3);
      FUN_00d50b20();
    }
  }
  lVar20 = local_40;
  uVar14 = local_64;
  lVar21 = local_70;
  iVar7 = (int)this_ptr[0x36];
  if ((iVar7 != -1) && (iVar6 < iVar7)) {
    *(int *)(this_ptr + 0x36) = iVar7 + *(int *)(local_70 + 0xc);
  }
  FUN_01dcfdb0();
  uVar18 = *(uint *)(this_ptr[0x58] + 0x18);
  uVar25 = 0;
  if (7 < (int)uVar18) {
    uVar24 = uVar18 >> 3;
    lVar8 = *(int64_t *)(this_ptr[0x58] + 0x10);
    if (uVar18 < 0x48) {
      uVar13 = 0;
      uVar25 = 0;
    }
    else {
      uVar13 = 8;
      if ((uint64_t)(uVar24 & 7) != 0) {
        uVar13 = (uint64_t)(uVar24 & 7);
      }
      uVar13 = uVar24 - uVar13;
      uVar18 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar27 = 0;
      uVar12 = 0;
      uVar28 = 0;
      uVar29 = 0;
      uVar30 = 0;
      uVar31 = 0;
      do {
        piVar1 = (int *)(lVar8 + uVar12 * 8);
        iVar6 = *piVar1;
        iVar7 = piVar1[2];
        piVar1 = (int *)(lVar8 + 0x10 + uVar12 * 8);
        iVar17 = *piVar1;
        iVar3 = piVar1[2];
        uVar18 = (uint)((int)uVar18 < iVar6) * iVar6 | ((int)uVar18 >= iVar6) * uVar18;
        uVar25 = (uint)((int)uVar25 < iVar7) * iVar7 | ((int)uVar25 >= iVar7) * uVar25;
        uVar26 = (uint)((int)uVar26 < iVar17) * iVar17 | ((int)uVar26 >= iVar17) * uVar26;
        uVar27 = (uint)((int)uVar27 < iVar3) * iVar3 | ((int)uVar27 >= iVar3) * uVar27;
        piVar1 = (int *)(lVar8 + 0x20 + uVar12 * 8);
        iVar6 = *piVar1;
        iVar7 = piVar1[2];
        piVar1 = (int *)(lVar8 + 0x30 + uVar12 * 8);
        iVar17 = *piVar1;
        iVar3 = piVar1[2];
        uVar28 = (uint)((int)uVar28 < iVar6) * iVar6 | ((int)uVar28 >= iVar6) * uVar28;
        uVar29 = (uint)((int)uVar29 < iVar7) * iVar7 | ((int)uVar29 >= iVar7) * uVar29;
        uVar30 = (uint)((int)uVar30 < iVar17) * iVar17 | ((int)uVar30 >= iVar17) * uVar30;
        uVar31 = (uint)((int)uVar31 < iVar3) * iVar3 | ((int)uVar31 >= iVar3) * uVar31;
        uVar12 = uVar12 + 8;
      } while (uVar13 != uVar12);
      uVar18 = ((int)uVar18 < (int)uVar28) * uVar28 | ((int)uVar18 >= (int)uVar28) * uVar18;
      uVar25 = ((int)uVar25 < (int)uVar29) * uVar29 | ((int)uVar25 >= (int)uVar29) * uVar25;
      uVar26 = ((int)uVar26 < (int)uVar30) * uVar30 | ((int)uVar26 >= (int)uVar30) * uVar26;
      uVar27 = ((int)uVar27 < (int)uVar31) * uVar31 | ((int)uVar27 >= (int)uVar31) * uVar27;
      uVar18 = ((int)uVar26 < (int)uVar18) * uVar18 | ((int)uVar26 >= (int)uVar18) * uVar26;
      uVar25 = ((int)uVar27 < (int)uVar25) * uVar25 | ((int)uVar27 >= (int)uVar25) * uVar27;
      uVar25 = ((int)uVar25 < (int)uVar18) * uVar18 | ((int)uVar25 >= (int)uVar18) * uVar25;
    }
    do {
      uVar18 = *(uint *)(lVar8 + uVar13 * 8);
      if ((int)uVar25 < (int)uVar18) {
        uVar25 = uVar18;
      }
      uVar13 = uVar13 + 1;
    } while (uVar24 != uVar13);
  }
  if (uVar25 != local_bc) {
    FUN_01dcb680();
  }
  plVar10 = (int64_t *)this_ptr[0x55];
  if (plVar10 != (int64_t *)0x0) {
    local_78 = 0;
    uVar23 = FUN_00d50b00();
    local_78 = '\x01';
    local_d8 = *arg1;
    local_d0 = '\0';
    local_80 = this_ptr;
    (**(code **)(*plVar10 + 0x28))(uVar23,&local_d8);
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0xa20))();
  (**(code **)(*this_ptr + 0x620))();
  if (((char)local_60 != '\0') && (lVar20 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((char)uVar14 == '\0' && lVar21 != 0) {
    FUN_00d50b20();
  }
  return;
}

