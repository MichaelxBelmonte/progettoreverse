// ===================================================================
// GNTextAutoCompleterItem — Complete reconstructed pseudocode
// 32 functions
// ===================================================================


// ============================================================
// 01ed2f70
// ============================================================
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



// ============================================================
// 01ed7f00
// ============================================================
// Function: FUN_01ed7f00
// Address: 01ed7f00
// Size: 2299 bytes
// Class: GNTextAutoCompleterItem

uint32_t FUN_01ed7f00(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int64_t lVar5;
  void*puVar6;
  int64_t lVar7;
  int iVar8;
  int iVar9;
  void*arg1;
  int64_t *this_ptr;
  int64_t lVar10;
  uint32_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint32_t uVar15;
  uint32_t uVar16;
  float fVar17;
  uint64_t local_148;
  uint8_t local_140;
  uint64_t local_138;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  void*local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  uint64_t local_88;
  uint32_t local_78;
  uint32_t uStack_74;
  char local_70;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  int64_t local_38;
  float fVar14;
  
  uVar16 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar15 = (uint32_t)param_2;
  FUN_01d384c0();
  local_120 = 0;
  local_118 = '\0';
  local_88 = FUN_01e437f0();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  uVar11 = FUN_01d384d0();
  local_110 = g_026e1380;
  if (g_026e1380 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_108 = '\x01';
  FUN_01cacbe0(uVar11,&local_110);
  lVar10 = local_60;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (CONCAT44(uStack_74,local_78) != 0)) {
    FUN_00d50b20();
  }
  uVar4 = (**(code **)(*this_ptr + 0x9d8))((uint32_t)local_88);
  if (*(int *)(lVar10 + 0xc) == 0) {
    local_88._0_4_ = 0;
    FUN_01dd3ae0();
    uVar12 = CONCAT44(uVar16,uVar15);
    iVar9 = *(int *)((int64_t)this_ptr + 0x2cc);
joined_r0x01ed80d9:
    bVar1 = true;
    iVar8 = -1;
    bVar2 = true;
    if (iVar9 != -1) {
LAB_01ed829e:
      bVar1 = bVar2;
      if (iVar9 != -1) {
        uVar13 = (**(code **)(*this_ptr + 0xa68))();
        fVar17 = (float)((uint64_t)uVar12 >> 0x20);
        fVar14 = (float)((uint64_t)uVar13 >> 0x20);
        if ((((((float)uVar13 != (float)g_023dccec) ||
              (NAN((float)uVar13) || NAN((float)g_023dccec))) || (fVar14 != g_023dccec._4_4_))
            || ((NAN(fVar14) || NAN(g_023dccec._4_4_) || ((float)uVar12 != (float)g_023dccf4))))
           || (NAN((float)uVar12) || NAN((float)g_023dccf4))) {
LAB_01ed82de:
          FUN_00d05530();
        }
        else if ((fVar17 != g_023dccf4._4_4_) || (NAN(fVar17) || NAN(g_023dccf4._4_4_)))
        goto LAB_01ed82de;
        (**(code **)(*this_ptr + 0x618))();
      }
      *(int *)((int64_t)this_ptr + 0x2cc) = iVar8;
      if (iVar8 != -1) {
        if (this_ptr[0x5b] != 0) {
          FUN_01e1e360();
          if (this_ptr[0x5b] != 0) {
            this_ptr[0x5b] = 0;
            FUN_00d50b20();
          }
        }
        uVar13 = (**(code **)(*this_ptr + 0xa68))();
        fVar17 = (float)((uint64_t)uVar12 >> 0x20);
        fVar14 = (float)((uint64_t)uVar13 >> 0x20);
        if (((((float)uVar13 != (float)g_023dccec) ||
             (NAN((float)uVar13) || NAN((float)g_023dccec))) || (fVar14 != g_023dccec._4_4_)) ||
           (((NAN(fVar14) || NAN(g_023dccec._4_4_) || ((float)uVar12 != (float)g_023dccf4)) ||
            (NAN((float)uVar12) || NAN((float)g_023dccf4))))) {
LAB_01ed837c:
          FUN_00d05530();
        }
        else if ((fVar17 != g_023dccf4._4_4_) || (NAN(fVar17) || NAN(g_023dccf4._4_4_)))
        goto LAB_01ed837c;
        (**(code **)(*this_ptr + 0x618))();
        local_f0 = g_027fe7b8;
        if (g_027fe7b8 != 0) {
          FUN_00d50b00();
        }
        local_e8 = '\x01';
        local_a0 = 0;
        FUN_00d50b00();
        local_a0 = '\x01';
        local_a8 = this_ptr;
        FUN_01e1ea80((int)g_02422870,&local_a8);
        lVar5 = this_ptr[0x5b];
        lVar7 = lVar5;
        if (lVar5 != local_60) {
          if (local_58 == '\0') {
            if (local_60 == 0) {
              lVar7 = 0;
              goto LAB_01ed8415;
            }
            FUN_00d50b00();
            lVar5 = this_ptr[0x5b];
            this_ptr[0x5b] = local_60;
            lVar7 = local_60;
          }
          else {
            local_58 = '\0';
            lVar7 = local_60;
LAB_01ed8415:
            this_ptr[0x5b] = lVar7;
          }
          if (lVar5 != 0) {
            FUN_00d50b20();
            lVar7 = local_60;
          }
        }
        if ((local_58 != '\0') && (lVar7 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    local_38 = lVar10;
    lVar5 = FUN_00dd6dc0();
    local_138._0_4_ = CONCAT31(local_138._1_3_,lVar5 == 0);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    lVar10 = 0;
    cVar3 = '\x01';
    if (((int)uVar4 < 0) || (*(int *)(this_ptr[0x57] + 0xc) <= (int)uVar4)) {
      bVar1 = true;
      bVar2 = bVar1;
      if (lVar5 != 0) goto LAB_01ed80ec;
LAB_01ed8143:
      bVar1 = (bool)(bVar2 | lVar10 == 0);
joined_r0x01ed814c:
      uVar12 = local_88;
      if (!bVar1) {
LAB_01ed814e:
        FUN_00d50b20();
        uVar12 = local_88;
      }
    }
    else {
      lVar10 = *(int64_t *)(*(int64_t *)(this_ptr[0x57] + 0x10) + (uint64_t)uVar4 * 8);
      if (lVar10 != 0) {
        FUN_00d50b00();
        bVar1 = false;
        bVar2 = bVar1;
        if (lVar5 != lVar10) goto LAB_01ed80ec;
        goto LAB_01ed8143;
      }
      bVar1 = false;
      lVar10 = 0;
      bVar2 = false;
      if (lVar5 == 0) goto LAB_01ed8143;
LAB_01ed80ec:
      cVar3 = (char)local_138;
      if ((int)uVar4 < 1) {
        bVar1 = (bool)(bVar1 | lVar10 == 0);
        goto joined_r0x01ed814c;
      }
      bVar2 = bVar1;
      if (*(int *)(this_ptr[0x57] + 0xc) < (int)uVar4) goto LAB_01ed8143;
      lVar7 = *(int64_t *)(*(int64_t *)(this_ptr[0x57] + 0x10) + (uint64_t)(uVar4 - 1) * 8);
      if (lVar7 != 0) {
        FUN_00d50b00();
        cVar3 = lVar5 == lVar7;
        FUN_00d50b20();
        goto LAB_01ed8143;
      }
      cVar3 = lVar5 == 0;
      uVar12 = local_88;
      if (!bVar1 && lVar10 != 0) goto LAB_01ed814e;
    }
    lVar10 = local_38;
    local_88._4_4_ = (uint32_t)((uint64_t)uVar12 >> 0x20);
    if (cVar3 == '\0') {
      *(void*)((int64_t)this_ptr + 0x224) = uVar12;
      local_88 = uVar12;
      FUN_01dd3ae0();
      *(void*)(this_ptr + 0x48) = 3;
      local_88._0_4_ = 0x10;
      (**(code **)(*this_ptr + 0x620))();
    }
    else {
      local_88._0_4_ = 0;
      FUN_01dd3ae0();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    uVar12 = CONCAT44(uVar16,uVar15);
    if (cVar3 != '\0') {
      local_88._0_4_ = 0;
      iVar9 = *(int *)((int64_t)this_ptr + 0x2cc);
      goto joined_r0x01ed80d9;
    }
    FUN_01d384c0();
    local_f8 = '\0';
    local_100 = 0;
    local_138 = FUN_01e437f0();
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    iVar9 = FUN_01dcea90((uint32_t)local_138);
    uVar12 = CONCAT44(uVar16,uVar15);
    iVar8 = -1;
    if (iVar9 != -1) {
      uVar12 = (**(code **)(*this_ptr + 0xa68))();
      cVar3 = FUN_00d05410((uint32_t)local_138,(int)uVar12,uVar15);
      iVar8 = -1;
      if (cVar3 != '\0') {
        iVar8 = iVar9;
      }
    }
    bVar1 = false;
    iVar9 = *(int *)((int64_t)this_ptr + 0x2cc);
    bVar2 = false;
    if (iVar9 != iVar8) goto LAB_01ed829e;
  }
  uVar15 = 0;
  if (bVar1) goto LAB_01ed87b8;
  FUN_01d384d0();
  local_e0 = g_026e1380;
  if (g_026e1380 != 0) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  FUN_01cacbe0();
  lVar5 = local_60;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (CONCAT44(uStack_74,local_78) != 0)) {
    FUN_00d50b20();
  }
  if ((lVar5 == 0) || (*(int *)(lVar5 + 0xc) == 0)) {
LAB_01ed8791:
    local_88._0_4_ = 0;
    FUN_01dd3ae0();
  }
  else {
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_02572358;
    (*g_02572370)();
    local_58 = 0;
    local_60 = 0;
    local_50 = lVar5;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar9 = -local_48._4_4_;
        }
        else {
          iVar9 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar9);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar9 = 0;
        }
        local_48 = CONCAT44(iVar9,(int)local_48);
      }
      lVar7 = (int64_t)(int)local_48;
      iVar9 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar9);
      if (*(int *)(local_50 + 0xc) <= iVar9) break;
      local_60 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar7 * 8);
      lVar7 = FUN_00dd6dc0();
      local_90 = 0;
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_90 = '\x01';
      local_98 = lVar7;
      FUN_00d21140();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00115a50();
    local_58 = '\0';
    local_60 = 0;
    local_78 = 0;
    local_148 = *arg1;
    local_140 = 0;
    FUN_01ed8cb0(&local_60,&local_148,&local_78);
    local_c8 = '\0';
    local_c0 = local_60;
    local_b8 = '\0';
    local_d0 = puVar6;
    cVar3 = (**(code **)(*(int64_t *)this_ptr[0x54] + 0x38))(local_78,&local_c0,0);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (puVar6 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') goto LAB_01ed8791;
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  uVar15 = (uint32_t)local_88;
  if (lVar10 == 0) {
    return (uint32_t)local_88;
  }
LAB_01ed87b8:
  FUN_00d50b20();
  return uVar15;
}



// ============================================================
// 01ed3c60
// ============================================================
// Function: FUN_01ed3c60
// Address: 01ed3c60
// Size: 1541 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ed3c60(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  int *piVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  uint64_t uVar10;
  int64_t lVar11;
  bool bVar12;
  int64_t *arg1;
  uint64_t uVar13;
  int iVar14;
  int64_t *this_ptr;
  int iVar15;
  int64_t lVar16;
  uint uVar17;
  bool bVar18;
  uint64_t uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int64_t local_e8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int local_90;
  uint local_8c;
  
  lVar16 = *arg1;
  iVar7 = FUN_00d23d20();
  lVar2 = *(int64_t *)(this_ptr[0x58] + 0x10);
  if (*(char *)(lVar2 + 5 + (int64_t)iVar7 * 8) != '\0') {
    uVar17 = *(uint *)(this_ptr[0x58] + 0x18);
    uVar20 = 0;
    if (7 < (int)uVar17) {
      uVar4 = uVar17 >> 3;
      if (uVar17 < 0x48) {
        uVar10 = 0;
        uVar20 = 0;
      }
      else {
        uVar10 = 8;
        if ((uint64_t)(uVar4 & 7) != 0) {
          uVar10 = (uint64_t)(uVar4 & 7);
        }
        uVar10 = uVar4 - uVar10;
        uVar17 = 0;
        uVar20 = 0;
        uVar21 = 0;
        uVar22 = 0;
        uVar13 = 0;
        uVar23 = 0;
        uVar24 = 0;
        uVar25 = 0;
        uVar26 = 0;
        do {
          piVar1 = (int *)(lVar2 + uVar13 * 8);
          iVar15 = *piVar1;
          iVar8 = piVar1[2];
          piVar1 = (int *)(lVar2 + 0x10 + uVar13 * 8);
          iVar14 = *piVar1;
          iVar5 = piVar1[2];
          uVar17 = (uint)((int)uVar17 < iVar15) * iVar15 | ((int)uVar17 >= iVar15) * uVar17;
          uVar20 = (uint)((int)uVar20 < iVar8) * iVar8 | ((int)uVar20 >= iVar8) * uVar20;
          uVar21 = (uint)((int)uVar21 < iVar14) * iVar14 | ((int)uVar21 >= iVar14) * uVar21;
          uVar22 = (uint)((int)uVar22 < iVar5) * iVar5 | ((int)uVar22 >= iVar5) * uVar22;
          piVar1 = (int *)(lVar2 + 0x20 + uVar13 * 8);
          iVar15 = *piVar1;
          iVar8 = piVar1[2];
          piVar1 = (int *)(lVar2 + 0x30 + uVar13 * 8);
          iVar14 = *piVar1;
          iVar5 = piVar1[2];
          uVar23 = (uint)((int)uVar23 < iVar15) * iVar15 | ((int)uVar23 >= iVar15) * uVar23;
          uVar24 = (uint)((int)uVar24 < iVar8) * iVar8 | ((int)uVar24 >= iVar8) * uVar24;
          uVar25 = (uint)((int)uVar25 < iVar14) * iVar14 | ((int)uVar25 >= iVar14) * uVar25;
          uVar26 = (uint)((int)uVar26 < iVar5) * iVar5 | ((int)uVar26 >= iVar5) * uVar26;
          uVar13 = uVar13 + 8;
        } while (uVar10 != uVar13);
        uVar17 = ((int)uVar17 < (int)uVar23) * uVar23 | ((int)uVar17 >= (int)uVar23) * uVar17;
        uVar20 = ((int)uVar20 < (int)uVar24) * uVar24 | ((int)uVar20 >= (int)uVar24) * uVar20;
        uVar21 = ((int)uVar21 < (int)uVar25) * uVar25 | ((int)uVar21 >= (int)uVar25) * uVar21;
        uVar22 = ((int)uVar22 < (int)uVar26) * uVar26 | ((int)uVar22 >= (int)uVar26) * uVar22;
        uVar17 = ((int)uVar21 < (int)uVar17) * uVar17 | ((int)uVar21 >= (int)uVar17) * uVar21;
        uVar20 = ((int)uVar22 < (int)uVar20) * uVar20 | ((int)uVar22 >= (int)uVar20) * uVar22;
        uVar20 = ((int)uVar20 < (int)uVar17) * uVar17 | ((int)uVar20 >= (int)uVar17) * uVar20;
      }
      do {
        uVar17 = *(uint *)(lVar2 + uVar10 * 8);
        if ((int)uVar20 < (int)uVar17) {
          uVar20 = uVar17;
        }
        uVar10 = uVar10 + 1;
      } while (uVar4 != uVar10);
    }
    plVar3 = (int64_t *)this_ptr[0x55];
    if (plVar3 != (int64_t *)0x0) {
      uVar19 = FUN_00d50b00();
      local_c0 = *arg1;
      local_b8 = '\0';
      (**(code **)(*plVar3 + 0x20))(uVar19,&local_c0);
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    plVar3 = (int64_t *)this_ptr[0x54];
    FUN_00d50b00();
    local_b0 = *arg1;
    local_a8 = '\0';
    (**(code **)(*plVar3 + 0x18))(&local_b0);
    bVar18 = lVar16 == 0;
    if (bVar18) {
      lVar16 = 0;
    }
    else {
      FUN_00d50b00();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    local_8c = uVar20;
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (0 < *(int *)(lVar16 + 0xc)) {
      uVar17 = iVar7 + 1;
      local_90 = iVar7 * 8 + 8;
      iVar15 = 0;
      do {
        if (*(char *)(*(int64_t *)(this_ptr[0x58] + 0x10) + 5 + (int64_t)(int)uVar17 * 8) != '\0'
           ) {
          if ((iVar7 < -1) || (*(int *)(this_ptr[0x57] + 0xc) <= (int)uVar17)) {
            local_e8 = 0;
          }
          else {
            local_e8 = *(int64_t *)(*(int64_t *)(this_ptr[0x57] + 0x10) + (uint64_t)uVar17 * 8);
            if (local_e8 != 0) {
              FUN_00d50b00();
            }
          }
          FUN_01ed3c60();
          if (local_e8 != 0) {
            FUN_00d50b20();
          }
        }
        cVar6 = FUN_01dd3250();
        if (cVar6 != '\0') {
          cVar6 = FUN_01dd3250();
          if (cVar6 == '\0') {
            FUN_01dd3d20();
          }
          FUN_01dd4720();
        }
        FUN_00d23620();
        FUN_00e7b4e0();
        FUN_00c921e0();
        lVar2 = this_ptr[0x34];
        if ((lVar2 != 0) && (iVar8 = *(int *)(lVar2 + 0x18), 3 < iVar8)) {
          pvVar9 = *(void **)(lVar2 + 0x10);
          lVar11 = 0;
          bVar12 = false;
          do {
            iVar14 = *(int *)((int64_t)pvVar9 + lVar11 * 4);
            if ((int)uVar17 < iVar14) {
              *(int *)((int64_t)pvVar9 + lVar11 * 4) = iVar14 + -1;
              iVar8 = *(int *)(lVar2 + 0x18);
              bVar12 = true;
            }
            lVar11 = lVar11 + 1;
            iVar14 = iVar8 + 3;
            if (-1 < iVar8) {
              iVar14 = iVar8;
            }
          } while (lVar11 < iVar14 >> 2);
          if (bVar12) {
            uVar19 = FUN_00d50b00();
            FUN_00c8e340(uVar19,0);
            _memcpy(pvVar9,(void *)(int64_t)*(int *)(lVar2 + 0x18),param_3);
            FUN_00d50b20();
          }
        }
        iVar8 = (int)this_ptr[0x36];
        if ((iVar8 != -1) && ((int)uVar17 < iVar8)) {
          *(int *)(this_ptr + 0x36) = iVar8 + -1;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(lVar16 + 0xc));
    }
    lVar2 = this_ptr[0x58];
    *(void*)(this_ptr + 0x30) = *(void*)(this_ptr[0x57] + 0xc);
    lVar11 = *(int64_t *)(lVar2 + 0x10);
    *(void*)(lVar11 + 5 + (int64_t)iVar7 * 8) = 0;
    uVar17 = *(uint *)(lVar2 + 0x18);
    uVar20 = 0;
    if (7 < (int)uVar17) {
      uVar4 = uVar17 >> 3;
      if (uVar17 < 0x48) {
        uVar10 = 0;
        uVar20 = 0;
      }
      else {
        uVar10 = 8;
        if ((uint64_t)(uVar4 & 7) != 0) {
          uVar10 = (uint64_t)(uVar4 & 7);
        }
        uVar10 = uVar4 - uVar10;
        uVar17 = 0;
        uVar20 = 0;
        uVar21 = 0;
        uVar22 = 0;
        uVar13 = 0;
        uVar23 = 0;
        uVar24 = 0;
        uVar25 = 0;
        uVar26 = 0;
        do {
          piVar1 = (int *)(lVar11 + uVar13 * 8);
          iVar7 = *piVar1;
          iVar15 = piVar1[2];
          piVar1 = (int *)(lVar11 + 0x10 + uVar13 * 8);
          iVar8 = *piVar1;
          iVar14 = piVar1[2];
          uVar17 = (uint)((int)uVar17 < iVar7) * iVar7 | ((int)uVar17 >= iVar7) * uVar17;
          uVar20 = (uint)((int)uVar20 < iVar15) * iVar15 | ((int)uVar20 >= iVar15) * uVar20;
          uVar21 = (uint)((int)uVar21 < iVar8) * iVar8 | ((int)uVar21 >= iVar8) * uVar21;
          uVar22 = (uint)((int)uVar22 < iVar14) * iVar14 | ((int)uVar22 >= iVar14) * uVar22;
          piVar1 = (int *)(lVar11 + 0x20 + uVar13 * 8);
          iVar7 = *piVar1;
          iVar15 = piVar1[2];
          piVar1 = (int *)(lVar11 + 0x30 + uVar13 * 8);
          iVar8 = *piVar1;
          iVar14 = piVar1[2];
          uVar23 = (uint)((int)uVar23 < iVar7) * iVar7 | ((int)uVar23 >= iVar7) * uVar23;
          uVar24 = (uint)((int)uVar24 < iVar15) * iVar15 | ((int)uVar24 >= iVar15) * uVar24;
          uVar25 = (uint)((int)uVar25 < iVar8) * iVar8 | ((int)uVar25 >= iVar8) * uVar25;
          uVar26 = (uint)((int)uVar26 < iVar14) * iVar14 | ((int)uVar26 >= iVar14) * uVar26;
          uVar13 = uVar13 + 8;
        } while (uVar10 != uVar13);
        uVar17 = ((int)uVar17 < (int)uVar23) * uVar23 | ((int)uVar17 >= (int)uVar23) * uVar17;
        uVar20 = ((int)uVar20 < (int)uVar24) * uVar24 | ((int)uVar20 >= (int)uVar24) * uVar20;
        uVar21 = ((int)uVar21 < (int)uVar25) * uVar25 | ((int)uVar21 >= (int)uVar25) * uVar21;
        uVar22 = ((int)uVar22 < (int)uVar26) * uVar26 | ((int)uVar22 >= (int)uVar26) * uVar22;
        uVar17 = ((int)uVar21 < (int)uVar17) * uVar17 | ((int)uVar21 >= (int)uVar17) * uVar21;
        uVar20 = ((int)uVar22 < (int)uVar20) * uVar20 | ((int)uVar22 >= (int)uVar20) * uVar22;
        uVar20 = ((int)uVar20 < (int)uVar17) * uVar17 | ((int)uVar20 >= (int)uVar17) * uVar20;
      }
      do {
        uVar17 = *(uint *)(lVar11 + uVar10 * 8);
        if ((int)uVar20 < (int)uVar17) {
          uVar20 = uVar17;
        }
        uVar10 = uVar10 + 1;
      } while (uVar4 != uVar10);
    }
    if (uVar20 != local_8c) {
      FUN_01dcb680();
    }
    uVar19 = FUN_01dcfdb0();
    plVar3 = (int64_t *)this_ptr[0x55];
    if (plVar3 != (int64_t *)0x0) {
      uVar19 = FUN_00d50b00();
      local_a0 = *arg1;
      local_98 = '\0';
      uVar19 = (**(code **)(*plVar3 + 0x30))(uVar19,&local_a0);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        uVar19 = FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        uVar19 = FUN_00d50b20();
      }
    }
    (**(code **)(*this_ptr + 0xa20))(uVar19,0);
    (**(code **)(*this_ptr + 0x620))();
    if (!bVar18 && lVar16 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01eceb50
// ============================================================
// Function: FUN_01eceb50
// Address: 01eceb50
// Size: 2038 bytes
// Class: GNTextAutoCompleterItem

uint64_t FUN_01eceb50(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int64_t *plVar8;
  void*arg1;
  int64_t *this_ptr;
  int64_t *plVar9;
  uint64_t unaff_R15;
  uint64_t uVar10;
  undefined7 uVar11;
  bool bVar12;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  char local_48 [8];
  int64_t *local_40;
  char local_38 [8];
  
  iVar3 = FUN_00d8c7a0();
  if (iVar3 == 0) goto LAB_01ecef03;
  (**(code **)(*this_ptr + 0x520))();
  cVar2 = FUN_00d90eb0();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_01e10550();
    FUN_00d8c7a0();
    FUN_00e7b4e0();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e10550();
    plVar9 = local_40;
    lVar1 = g_027d64a0;
    if (g_027d64a0 != 0) {
      FUN_00d50b00();
    }
    cVar2 = FUN_00d8f400();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = g_027d64a0;
    if (cVar2 == '\0') {
      plVar9 = (int64_t *)*arg1;
      if (g_027d64a0 != 0) {
        FUN_00d50b00();
      }
      FUN_01e15f00();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    uVar10 = CONCAT71((int7)((uint64_t)plVar9 >> 8),1);
    FUN_01e148d0();
    goto LAB_01ecef06;
  }
  FUN_00d8cbc0();
  cVar2 = FUN_00d9bc90();
  if (cVar2 == '\0') {
    FUN_00d8cbc0();
    cVar2 = FUN_00d9bcc0();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*this_ptr + 0x510))();
      if (cVar2 != '\0') {
        (**(code **)(*this_ptr + 0x4c8))();
        plVar9 = local_40;
        if (local_40 == (int64_t *)0x0) {
          plVar9 = (int64_t *)0x0;
        }
        else if (local_38[0] == '\0') {
          FUN_00d50b00();
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38[0] = '\0';
        }
        if (plVar9 != (int64_t *)0x0) {
          iVar3 = FUN_00d8c7a0();
          lVar1 = g_027fe6f8;
          if (iVar3 == 0) {
            plVar8 = (int64_t *)0x0;
            uVar10 = 0;
          }
          else {
            if (g_027fe6f8 != 0) {
              FUN_00d50b00();
            }
            local_d8 = lVar1;
            local_d0 = '\x01';
            local_c0 = '\0';
            local_c8 = plVar9;
            (**(code **)(*this_ptr + 0x4a8))(&local_c8,&local_d8,0);
            plVar8 = local_40;
            if (local_40 == (int64_t *)0x0) {
              bVar12 = true;
              plVar8 = (int64_t *)0x0;
            }
            else {
              if (local_38[0] == '\0') {
                FUN_00d50b00();
                bVar12 = false;
                if ((local_38[0] == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01ecef4e;
                FUN_00d50b20();
              }
              else {
                local_38[0] = '\0';
              }
              bVar12 = false;
            }
LAB_01ecef4e:
            if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
            if (!bVar12) {
              local_38[0] = '\0';
              local_40 = plVar8;
              FUN_00d214d0();
              if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            lVar1 = g_027fe6f8;
            if (*(int *)(this_ptr[5] + 0xc) == 0) {
              if (g_027fe6f8 != 0) {
                FUN_00d50b00();
              }
              local_b8 = lVar1;
              local_b0 = '\x01';
              local_a0 = '\0';
              local_a8 = plVar9;
              (**(code **)(*this_ptr + 0x4a8))(&local_a8,&local_b8,1);
              plVar9 = local_40;
              uVar11 = (undefined7)((uint64_t)unaff_R15 >> 8);
              if (local_40 == plVar8) {
LAB_01ecf06d:
                unaff_R15 = CONCAT71(uVar11,plVar8 == (int64_t *)0x0);
                if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_38[0] == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  bVar12 = plVar8 != (int64_t *)0x0;
                  plVar8 = plVar9;
                  if (bVar12) {
                    FUN_00d50b20();
                  }
                  goto LAB_01ecf06d;
                }
                if (plVar8 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                local_38[0] = '\0';
                unaff_R15 = CONCAT71(uVar11,plVar9 == (int64_t *)0x0);
                plVar8 = plVar9;
              }
              if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
              if ((char)unaff_R15 == '\0') {
                local_38[0] = '\0';
                local_40 = plVar8;
                FUN_00d214d0();
                if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            uVar10 = CONCAT71((int7)((uint64_t)unaff_R15 >> 8),1);
            if (*(int *)(this_ptr[5] + 0xc) != 0) {
              FUN_00d242c0();
              FUN_00d23310();
              plVar9 = local_40;
              pcVar7 = local_48;
              if (local_38[0] != '\0') {
                pcVar7 = local_38;
              }
              local_48[0] = local_38[0];
              *pcVar7 = '\0';
              if ((local_38[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              (**(code **)(*plVar9 + 0x370))();
              lVar1 = local_88;
              if (local_80 == '\0') {
                if (local_88 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_80 = '\0';
              }
              (**(code **)(*this_ptr + 0x488))();
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
              if (local_48[0] != '\0') {
                FUN_00d50b20();
              }
              iVar3 = FUN_01e15b70();
              FUN_00d8c7a0();
              FUN_00d8c7a0();
              FUN_00d8f140();
              plVar9 = local_40;
              if (local_40 == (int64_t *)0x0) {
                plVar9 = (int64_t *)0x0;
              }
              else if (((local_38[0] == '\0') && (FUN_00d50b00(), local_38[0] != '\0')) &&
                      (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_90 = '\0';
              local_98 = plVar9;
              FUN_01e15f00();
              if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              iVar4 = FUN_00d8c7a0();
              iVar5 = FUN_00d8c7a0();
              iVar6 = FUN_00d8c7a0();
              FUN_01e148d0(iVar4 + iVar3,(uint64_t)(uint)(iVar5 - iVar6) << 0x20);
              if (*(int *)(this_ptr[5] + 0xc) < 2) {
                (**(code **)(*this_ptr + 0x530))();
              }
              else {
                (**(code **)(*this_ptr + 0x4f8))();
              }
              if (plVar9 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
          }
          FUN_00d50b20();
          if (plVar8 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_01ecef06;
        }
      }
LAB_01ecef03:
      uVar10 = 0;
      goto LAB_01ecef06;
    }
  }
  (**(code **)(*this_ptr + 0x530))();
  uVar10 = 0;
LAB_01ecef06:
  return uVar10 & 0xffffffff;
}



// ============================================================
// 01ed0280
// ============================================================
// Function: FUN_01ed0280
// Address: 01ed0280
// Size: 1632 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ed0280(uint64_t param_1,uint64_t param_2)

{
  void*puVar1;
  int64_t lVar2;
  uint8_t auVar3 [16];
  int64_t lVar4;
  void*puVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int iVar8;
  int64_t *this_ptr;
  uint32_t uVar9;
  uint64_t uVar10;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar11;
  float fVar14;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t in_register_00001284 [12];
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
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
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  uint64_t local_48;
  float fStack_40;
  float fStack_3c;
  int64_t *local_38;
  
  fVar14 = (float)((uint64_t)param_2 >> 0x20);
  fVar11 = (float)param_2;
  if (this_ptr[8] == 0) {
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)((int64_t)puVar5 + 0xc) = 0;
    *puVar5 = &g_026a3350;
    puVar5[2] = &g_026a37c8;
    puVar5[3] = 0;
    puVar5[4] = 0;
    *(void*)(puVar5 + 5) = 0;
    puVar5[6] = 0;
    *(void*)((int64_t)puVar5 + 0x37) = 0;
    *(void*)((int64_t)puVar5 + 0x3c) = 0;
    *(void*)((int64_t)puVar5 + 0x44) = 0;
    *(void*)((int64_t)puVar5 + 0x4c) = 0;
    *(void*)((int64_t)puVar5 + 0x54) = 0;
    *(void*)((int64_t)puVar5 + 0x5c) = 0;
    *(void*)((int64_t)puVar5 + 100) = 0;
    *(void*)((int64_t)puVar5 + 0x69) = 0;
    puVar5[0xf] = 0;
    *(void*)((int64_t)puVar5 + 0x7f) = 0;
    *(void*)((int64_t)puVar5 + 0x84) = 0;
    *(void*)((int64_t)puVar5 + 0x8c) = 0;
    *(void*)((int64_t)puVar5 + 0x94) = 0;
    uVar9 = (*g_026a3368)();
    puVar1 = (void*)this_ptr[8];
    if (puVar1 != puVar5) {
      uVar9 = FUN_00d50b00();
      this_ptr[8] = (int64_t)puVar5;
      if (puVar1 != (void*)0x0) {
        uVar9 = FUN_00d50b20();
      }
    }
    local_130 = '\0';
    local_138 = 0;
    FUN_01e5b6f0(uVar9,&local_138);
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e5ca90();
    (**(code **)(*local_58 + 0x558))();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e5ca90();
    (**(code **)(*local_58 + 0x570))();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar4 = g_026fce30;
    if (g_026fce30 != 0) {
      FUN_00d50b00();
    }
    local_128 = lVar4;
    local_120 = '\x01';
    FUN_01e5a050();
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    local_48 = FUN_01e3f820();
    fStack_40 = extraout_XMM0_Dc;
    fStack_3c = extraout_XMM0_Dd;
    FUN_01e3f820();
    auVar13._8_4_ = fStack_40;
    auVar13._0_8_ = local_48;
    auVar13._12_4_ = fStack_3c;
    auVar12._0_4_ = fVar11 + (float)local_48;
    auVar12._4_4_ = fVar14 + local_48._4_4_;
    auVar12._8_4_ = in_XMM1_Dc + fStack_40;
    auVar12._12_4_ = in_XMM1_Dd + fStack_3c;
    auVar13 = blendps(auVar12,auVar13,0xd);
    uVar10 = FUN_01e46ed0(auVar13._0_4_);
    local_48 = uVar10;
    FUN_01e3f820();
    iVar8 = 4;
    if (*(int *)(this_ptr[5] + 0xc) < 4) {
      iVar8 = *(int *)(this_ptr[5] + 0xc);
    }
    auVar3._4_12_ = in_register_00001284;
    auVar3._0_4_ = (float)iVar8 * auVar13._4_4_ + auVar13._4_4_;
    insertps(auVar13,auVar3,0x10);
    local_110 = '\0';
    local_118 = 0;
    FUN_01e5ba50((float)local_48);
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    plVar6 = (int64_t *)FUN_00e8fc40();
    FUN_00193110();
    (**(code **)(*plVar6 + 0x18))();
    plVar7 = (int64_t *)this_ptr[9];
    local_48._0_4_ = SUB84(plVar6,0);
    local_48._4_4_ = (float)((uint64_t)plVar6 >> 0x20);
    if (plVar7 != plVar6) {
      FUN_00d50b00();
      this_ptr[9] = CONCAT44(local_48._4_4_,(float)local_48);
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)CONCAT44(local_48._4_4_,(float)local_48) + 0x4d0))(0);
    local_108 = CONCAT44(local_48._4_4_,(float)local_48);
    local_100 = '\0';
    (**(code **)(*this_ptr + 0x518))();
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    FUN_01dce590();
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_001de9e0();
    (**(code **)(*plVar7 + 0x18))();
    local_f8 = g_027edfd0;
    lVar4 = CONCAT44(local_48._4_4_,(float)local_48);
    local_38 = plVar7;
    if (g_027edfd0 != 0) {
      FUN_00d50b00();
    }
    local_f0 = '\x01';
    local_e8 = 0;
    local_e0 = '\0';
    local_70 = 0;
    lVar2 = this_ptr[6];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    local_78 = lVar2;
    (**(code **)(*local_38 + 0x468))(&local_78,&local_e8);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_02800140;
    if (g_02800140 != 0) {
      FUN_00d50b00();
    }
    local_d8 = lVar2;
    local_d0 = '\x01';
    local_c8 = 0;
    local_c0 = '\0';
    local_60 = 0;
    lVar2 = this_ptr[7];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    plVar7 = local_38;
    local_60 = '\x01';
    local_68 = lVar2;
    (**(code **)(*local_38 + 0x468))(&local_68,&local_c8);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    local_b0 = '\0';
    local_b8 = lVar4;
    FUN_01ccad10();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar7 + 0x478))();
    local_a8 = CONCAT44(local_48._4_4_,(float)local_48);
    local_a0 = '\0';
    (**(code **)(*this_ptr + 0x4e8))();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_00074c30();
    (**(code **)(*plVar7 + 0x18))();
    (**(code **)(*plVar7 + 0x4d0))(0);
    (**(code **)(*plVar7 + 0x558))();
    (**(code **)(*plVar7 + 0x570))();
    FUN_01d95060();
    FUN_01d94ee0();
    local_98 = CONCAT44(local_48._4_4_,(float)local_48);
    local_90 = '\0';
    FUN_01d978b0();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    local_80 = '\0';
    local_88 = plVar7;
    FUN_01e5c8b0();
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01ed9a40
// ============================================================
// Function: FUN_01ed9a40
// Address: 01ed9a40
// Size: 1297 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ed9a40(uint64_t param_1,uint32_t param_2)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar9;
  uint32_t uVar10;
  int64_t local_90;
  int64_t local_80;
  int64_t local_70;
  int64_t local_40;
  char local_38;
  
  iVar4 = FUN_01d3a5a0();
  if ((iVar4 == 2) || (iVar4 = FUN_01d3a5a0(), iVar4 == 8)) {
    uVar5 = FUN_01dd4c80();
    if (((int)uVar5 < 0) ||
       ((*(int *)(this_ptr[0x57] + 0xc) <= (int)uVar5 ||
        (lVar7 = *(int64_t *)(*(int64_t *)(this_ptr[0x57] + 0x10) + (uint64_t)uVar5 * 8),
        lVar7 == 0)))) {
      lVar7 = 0;
    }
    else {
      FUN_00d50b00();
    }
    iVar4 = FUN_01d3b590();
    if (iVar4 == 0x200) {
      if (lVar7 == 0) {
        return;
      }
      cVar3 = FUN_01ed4800();
      if ((cVar3 != '\0') && (cVar3 = FUN_01ed4710(), cVar3 == '\0')) {
        FUN_01ed2f70();
        FUN_00d50b20();
        return;
      }
      FUN_00d50b20();
      return;
    }
    iVar4 = FUN_01d3b590();
    if (iVar4 == 0x100) {
      if (lVar7 == 0) {
        return;
      }
      cVar3 = FUN_01ed4800();
      if ((cVar3 != '\0') && (cVar3 = FUN_01ed4710(), cVar3 != '\0')) {
        FUN_01ed3c60();
        FUN_00d50b20();
        return;
      }
      FUN_00d50b20();
      return;
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  iVar4 = FUN_01d3a5a0();
  if ((iVar4 == 1) && (iVar4 = FUN_01d3b630(), iVar4 == 1)) {
    FUN_01d3abf0();
    uVar9 = FUN_01e466c0();
    uVar5 = FUN_01dcea90();
    uVar8 = (uint64_t)uVar5;
    iVar4 = FUN_01dd3800(uVar9);
    if ((uVar5 != 0xffffffff) && (iVar4 == 0)) {
      uVar10 = (**(code **)(*this_ptr + 0xa68))();
      cVar3 = FUN_00d05410(uVar9,uVar10,param_2);
      if (cVar3 != '\0') {
        if (*(char *)(*(int64_t *)(this_ptr[0x58] + 0x10) + 5 + (int64_t)(int)uVar5 * 8) == '\0')
        {
          uVar6 = FUN_01d3b590();
          lVar7 = this_ptr[0x57];
          bVar1 = (int)uVar5 < *(int *)(lVar7 + 0xc);
          if ((uVar6 & 8) == 0) {
            if (-1 < (int)uVar5 && bVar1) {
              local_70 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + uVar8 * 8);
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_70 = 0;
            }
            FUN_01ed2f70();
            if (local_70 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            if (-1 < (int)uVar5 && bVar1) {
              local_80 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + uVar8 * 8);
              if (local_80 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_80 = 0;
            }
            FUN_01ed44d0();
            if (local_80 != 0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          if (((int)uVar5 < 0) || (*(int *)(this_ptr[0x57] + 0xc) <= (int)uVar5)) {
            local_90 = 0;
          }
          else {
            local_90 = *(int64_t *)(*(int64_t *)(this_ptr[0x57] + 0x10) + uVar8 * 8);
            if (local_90 != 0) {
              FUN_00d50b00();
            }
          }
          FUN_01ed3c60();
          if (local_90 != 0) {
            FUN_00d50b20();
          }
        }
        do {
          while( true ) {
            if (*arg1 == 0) {
              return;
            }
            iVar4 = FUN_01d3a5a0();
            if (iVar4 == 6) {
              return;
            }
            (**(code **)(*this_ptr + 0x658))();
            lVar7 = *arg1;
            if (lVar7 != local_40) break;
            if (((char)arg1[1] == '\0') && (local_40 != 0)) {
              if (local_38 != '\0') goto LAB_01ed9e90;
              FUN_00d50b00();
              goto LAB_01ed9f2b;
            }
LAB_01ed9f30:
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar2 = arg1[1];
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *arg1 = local_40;
            if (((char)lVar2 != '\0') && (lVar7 != 0)) {
              FUN_00d50b20();
            }
LAB_01ed9f2b:
            *(void*)(arg1 + 1) = 1;
            goto LAB_01ed9f30;
          }
          *arg1 = local_40;
          if (((char)lVar2 != '\0') && (lVar7 != 0)) {
            FUN_00d50b20();
          }
LAB_01ed9e90:
          *(void*)(arg1 + 1) = 1;
        } while( true );
      }
      cVar3 = FUN_01dce4b0();
      if (cVar3 != '\0') {
        (**(code **)(*this_ptr + 0xa28))(uVar9);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == 0) {
          *(void*)((int64_t)this_ptr + 0x27a) = 1;
          FUN_01dd9800();
          *(void*)((int64_t)this_ptr + 0x27a) = 0;
          return;
        }
      }
    }
  }
  FUN_01dd9800();
  return;
}



// ============================================================
// 01ecd140
// ============================================================
// Function: FUN_01ecd140
// Address: 01ecd140
// Size: 1219 bytes
// Class: GNTextAutoCompleterItem

uint64_t FUN_01ecd140(void)

{
  int64_t lVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_var;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t local_a0;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  uVar2 = FUN_01e15b70();
  (**(code **)(*this_ptr + 0x520))();
  lVar6 = local_48;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_a0 = FUN_01e1aa30(uVar2,1);
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e10550();
  FUN_00d8e3d0();
  local_38 = local_48;
  if (local_48 == 0) {
    local_38 = 0;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d95590();
  local_88 = local_58;
  local_80 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  lVar7 = local_38;
  local_80 = '\x01';
  FUN_00d97d10(2,&local_88);
  lVar6 = local_48;
  if (local_48 == lVar7) {
LAB_01ecd312:
    if (local_40 != '\0') {
LAB_01ecd318:
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      if (local_38 != 0) {
        local_38 = lVar6;
        FUN_00d50b20();
        goto LAB_01ecd312;
      }
      local_38 = lVar6;
      if (local_40 == '\0') goto LAB_01ecd326;
      goto LAB_01ecd318;
    }
    if (local_38 != 0) {
      local_38 = local_48;
      FUN_00d50b20();
    }
    local_40 = '\0';
    local_38 = lVar6;
  }
LAB_01ecd326:
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  iVar3 = FUN_00d8c7a0();
  iVar5 = (int)(local_a0 >> 0x20);
  iVar4 = iVar5;
  if (iVar3 < iVar5) {
    iVar3 = FUN_00d8c7a0();
    iVar4 = FUN_00d8c7a0();
    local_a0 = (uint64_t)(uint)((iVar5 + (int)local_a0) - iVar3);
  }
  (**(code **)(*this_ptr + 0x520))();
  local_78 = local_48;
  local_70 = 0;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_70 = '\x01';
  FUN_01e1aa30(uVar2,0);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e10550();
  lVar7 = local_38;
  FUN_00d8e3d0();
  lVar6 = local_48;
  if (local_48 == lVar7) {
LAB_01ecd482:
    lVar6 = lVar7;
    if (local_40 != '\0') {
LAB_01ecd488:
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
        lVar7 = lVar6;
        goto LAB_01ecd482;
      }
      if (local_40 == '\0') goto LAB_01ecd496;
      goto LAB_01ecd488;
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    local_40 = '\0';
  }
LAB_01ecd496:
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d95590();
  local_68 = local_58;
  local_60 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_60 = '\x01';
  FUN_00d97d10(4,&local_68);
  lVar1 = local_48;
  lVar7 = lVar6;
  if (local_48 != lVar6) {
    if (local_40 != '\0') {
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      local_40 = '\0';
      lVar7 = local_48;
      goto LAB_01ecd556;
    }
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    lVar7 = lVar1;
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_01ecd556:
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_38 = lVar7;
  iVar5 = FUN_00d8c7a0();
  iVar3 = extraout_var;
  if (iVar5 < extraout_var) {
    iVar3 = FUN_00d8c7a0();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  return CONCAT44(iVar3 + iVar4,(int)local_a0);
}



// ============================================================
// 01edb450
// ============================================================
// Function: FUN_01edb450
// Address: 01edb450
// Size: 1074 bytes
// Class: GNTextAutoCompleterItem

uint64_t FUN_01edb450(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  bool bVar2;
  uint3 uVar3;
  uint32_t uVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t *this_ptr;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  lVar6 = g_027fe7c0;
  if (g_027fe7c0 != 0) {
    FUN_00d50b00();
  }
  uVar4 = (**(code **)(*local_40 + 0x50))();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar4 == '\0') {
    FUN_01cae990();
    lVar6 = g_027fe7c8;
    if (g_027fe7c8 != 0) {
      FUN_00d50b00();
    }
    uVar4 = (**(code **)(*local_40 + 0x50))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar4 == '\0') {
      FUN_01cae990();
      lVar6 = g_027fe7d0;
      if (g_027fe7d0 != 0) {
        FUN_00d50b00();
      }
      uVar4 = (**(code **)(*local_40 + 0x50))();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)uVar4 == '\0') {
        FUN_01cae990();
        lVar6 = g_027fe7d8;
        if (g_027fe7d8 != 0) {
          FUN_00d50b00();
        }
        uVar4 = (**(code **)(*local_40 + 0x50))();
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)uVar4 == '\0') {
          FUN_01cae990();
          lVar6 = g_027fe7b8;
          if (g_027fe7b8 != 0) {
            FUN_00d50b00();
          }
          uVar4 = (**(code **)(*local_40 + 0x50))();
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)uVar4 != '\0') {
            if (param_2 == '\0') {
              return CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
            }
            uVar5 = *(uint *)((int64_t)this_ptr + 0x2cc);
            lVar6 = (int64_t)(int)uVar5;
            if ((lVar6 != -1) &&
               (*(char *)(*(int64_t *)(this_ptr[0x58] + 0x10) + 4 + lVar6 * 8) != '\0')) {
              lVar1 = this_ptr[0x57];
              bVar2 = (int)uVar5 < *(int *)(lVar1 + 0xc);
              if (*(char *)(*(int64_t *)(this_ptr[0x58] + 0x10) + 5 + lVar6 * 8) == '\0') {
                if (-1 < (int)uVar5 && bVar2) {
                  lVar6 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + (uint64_t)uVar5 * 8);
                  if (lVar6 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  lVar6 = 0;
                }
                FUN_01ed2f70();
                if (lVar6 != 0) {
                  FUN_00d50b20();
                }
              }
              else {
                if (-1 < (int)uVar5 && bVar2) {
                  lVar6 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + (uint64_t)uVar5 * 8);
                  if (lVar6 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  lVar6 = 0;
                }
                FUN_01ed3c60();
                if (lVar6 != 0) {
                  FUN_00d50b20();
                }
              }
            }
            *(void*)((int64_t)this_ptr + 0x2cc) = 0xffffffff;
            FUN_01e1e360();
            if (this_ptr[0x5b] != 0) {
              this_ptr[0x5b] = 0;
              FUN_00d50b20();
            }
          }
          uVar5 = FUN_01dde120();
          return (uint64_t)uVar5;
        }
        uVar3 = (uint3)((uint)uVar4 >> 8);
        lVar6 = 0x14c;
      }
      else {
        uVar3 = (uint3)((uint)uVar4 >> 8);
        lVar6 = 0x14b;
      }
    }
    else {
      uVar3 = (uint3)((uint)uVar4 >> 8);
      lVar6 = 0x14a;
    }
  }
  else {
    uVar3 = (uint3)((uint)uVar4 >> 8);
    lVar6 = 0x149;
  }
  if (param_2 != '\0') {
    (**(code **)(*this_ptr + lVar6 * 8))();
  }
  return CONCAT71((uint7)uVar3,1);
}



// ============================================================
// 01ed5530
// ============================================================
// Function: FUN_01ed5530
// Address: 01ed5530
// Size: 1285 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ed5530(int param_1,uint64_t param_2,int param_3)

{
  uint8_t auVar1 [16];
  uint64_t uVar2;
  uint64_t in_RCX;
  int64_t *in_RDX;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar3;
  float fVar4;
  float fVar5;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  uint64_t in_XMM1_Qb;
  int64_t *local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  uint8_t local_98 [16];
  int local_88;
  int64_t local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  
  local_98._8_8_ = in_XMM1_Qb;
  local_98._0_8_ = param_2;
  local_a0 = in_RDX;
  local_88 = param_1;
  uVar3 = (**(code **)(*this_ptr + 0x938))(in_RCX,param_3);
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto joined_r0x01ed5644;
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) goto joined_r0x01ed5644;
  local_100 = local_40;
  local_f8 = '\0';
  uVar3 = (**(code **)(*this_ptr + 0x9a0))(local_88,&local_100);
  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
    uVar3 = FUN_00d50b20();
  }
joined_r0x01ed5644:
  if ((int)in_RCX == 0) {
    FUN_01dcc290(uVar3,0);
    fVar4 = (float)FUN_01db9a40();
    fVar5 = fVar4;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      fVar5 = (float)FUN_00d50b20();
    }
    if (fVar4 < local_98._0_4_) {
      FUN_01dcc290(fVar5,0);
      uVar2 = FUN_01db9a40();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      auVar1._8_4_ = extraout_XMM0_Dc;
      auVar1._0_8_ = uVar2;
      auVar1._12_4_ = extraout_XMM0_Dd;
      local_98 = blendps(local_98,auVar1,1);
    }
    local_f0 = *arg1;
    local_e8 = '\0';
    (**(code **)(*this_ptr + 0xa30))(local_88,param_3);
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
  }
  if (((this_ptr[0x40] == 0) || ((int)this_ptr[0x41] != param_3)) ||
     (*(int *)((int64_t)this_ptr + 0x20c) != (int)in_RCX)) {
    FUN_01d48370();
    (**(code **)(*(int64_t *)*arg1 + 0x390))(local_88);
    (**(code **)(*(int64_t *)*arg1 + 0x368))(local_88);
    (**(code **)(*(int64_t *)*local_a0 + 0x4d0))(local_88);
    local_88 = param_3;
    (**(code **)(*this_ptr + 0x940))(in_RCX & 0xffffffff,param_3);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      local_e0 = local_40;
      local_d8 = '\0';
      FUN_01d488d0();
      if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01dd96b0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_01dd96b0();
      uVar3 = FUN_00d50b00();
      FUN_01dcc290(uVar3,in_RCX & 0xffffffff);
      local_60 = local_b0;
      local_58 = 0;
      if (local_a8 == '\0') {
        if (local_b0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a8 = '\0';
      }
      local_58 = '\x01';
      local_d0 = *local_a0;
      local_c8 = '\0';
      (**(code **)(*local_40 + 0x30))(&local_60,local_88,&local_d0);
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        (**(code **)(*local_40 + 0x10))();
        FUN_00d50b20();
      }
    }
    local_c0 = *arg1;
    local_b8 = '\0';
    (**(code **)(*(int64_t *)*local_a0 + 0x610))(0);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d48390();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01ed9200
// ============================================================
// Function: FUN_01ed9200
// Address: 01ed9200
// Size: 946 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ed9200(int64_t *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int64_t *arg1;
  uint64_t uVar8;
  int64_t this_ptr;
  int64_t lVar9;
  uint uVar10;
  int iVar11;
  int64_t local_90;
  char local_88;
  int local_34;
  
  if (param_2 == 0) {
    if ((param_1 != (int64_t *)0x0) && (*param_1 != 0)) {
      *param_1 = 0;
      if ((char)param_1[1] != '\0') {
        FUN_00d50b20();
      }
      *(void*)(param_1 + 1) = 0;
    }
    if (param_3 == (int *)0x0) {
      return;
    }
    *param_3 = 0;
    return;
  }
  iVar3 = FUN_01dcea80();
  uVar4 = param_2;
  if (iVar3 <= (int)param_2) {
    uVar4 = FUN_01dcea80();
  }
  uVar10 = 0xffffffff;
  if ((int)param_2 < 1) {
    local_34 = 0;
    uVar4 = uVar10;
    iVar3 = local_34;
  }
  else {
    lVar9 = *(int64_t *)(*(int64_t *)(this_ptr + 0x2c0) + 0x10);
    iVar11 = *(int *)(lVar9 + -8 + (int64_t)(int)uVar4 * 8);
    local_34 = 0;
    iVar5 = 0;
    uVar7 = param_2;
    while( true ) {
      uVar8 = (uint64_t)(uVar7 - 1);
      if ((*(char *)(lVar9 + 5 + uVar8 * 8) != '\0') &&
         (uVar4 = uVar7 - 1, iVar3 = local_34, uVar7 == param_2)) break;
      do {
        iVar1 = *(int *)(lVar9 + uVar8 * 8);
        uVar7 = (int)uVar8 - (uint)(iVar11 < iVar1);
        uVar8 = (uint64_t)uVar7;
        if (iVar1 <= iVar11) break;
      } while (-1 < (int)uVar7);
      uVar4 = uVar10;
      iVar3 = iVar5;
      if (((uVar7 == 0xffffffff) || (uVar4 = uVar7, iVar1 != iVar11)) ||
         (iVar5 = iVar5 + 1, uVar4 = uVar10, iVar3 = iVar5, (int)uVar7 < 1)) break;
    }
  }
  if (param_1 != (int64_t *)0x0) {
    if (uVar4 == 0xffffffff) {
      if (*param_1 != 0) {
        *param_1 = 0;
        if ((char)param_1[1] != '\0') {
          FUN_00d50b20();
        }
        *(void*)(param_1 + 1) = 0;
      }
    }
    else {
      if ((int)uVar4 < *(int *)(*(int64_t *)(this_ptr + 0x2b8) + 0xc)) {
        lVar9 = *(int64_t *)
                 (*(int64_t *)(*(int64_t *)(this_ptr + 0x2b8) + 0x10) + (uint64_t)uVar4 * 8);
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        lVar2 = *param_1;
        if (lVar2 == lVar9) {
          if (((char)param_1[1] != '\0') || (lVar9 == 0)) {
            if (lVar9 != 0) {
              FUN_00d50b20();
            }
            goto LAB_01ed93e7;
          }
        }
        else {
          *param_1 = lVar9;
          if (((char)param_1[1] != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        if (*param_1 == 0) goto LAB_01ed93e7;
        *param_1 = 0;
        if ((char)param_1[1] != '\0') {
          FUN_00d50b20();
        }
      }
      *(void*)(param_1 + 1) = 1;
    }
  }
LAB_01ed93e7:
  if (param_3 != (int *)0x0) {
    if (((int)uVar4 < 0) || (*(int *)(*(int64_t *)(this_ptr + 0x2b8) + 0xc) <= (int)uVar4)) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(int64_t *)
               (*(int64_t *)(*(int64_t *)(this_ptr + 0x2b8) + 0x10) + (uint64_t)uVar4 * 8);
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
    }
    FUN_01ed9690();
    if ((local_88 == '\0') && (local_90 != 0)) {
      FUN_00d50b00();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    lVar9 = *arg1;
    if (lVar9 == 0) {
      iVar11 = 0x7fffffff;
    }
    else {
      if (*(int *)(lVar9 + 0xc) < 1) {
        iVar11 = 0x7fffffff;
      }
      else {
        iVar11 = 0x7fffffff;
        iVar5 = 0;
        do {
          iVar6 = FUN_00d23d20();
          iVar1 = iVar11;
          if (iVar6 < iVar11) {
            iVar1 = iVar6;
          }
          if (iVar6 == -1) {
            iVar1 = iVar11;
          }
          iVar11 = iVar1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(lVar9 + 0xc));
      }
      FUN_00083b20();
    }
    *param_3 = iVar3 - (uint)(iVar11 < iVar3);
    if (local_90 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01ed4f50
// ============================================================
// Function: FUN_01ed4f50
// Address: 01ed4f50
// Size: 1002 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ed4f50(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  float fVar1;
  void*arg1;
  int64_t *this_ptr;
  int iVar2;
  int64_t *plVar3;
  bool bVar4;
  uint64_t uVar5;
  uint8_t in_XMM0 [16];
  uint8_t auVar6 [16];
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar7 [16];
  float fVar10;
  uint8_t in_XMM1 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  int64_t local_88;
  char local_80;
  int64_t *local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb_00;
  
  fVar1 = *(float *)(this_ptr + 0x5a);
  auVar6._4_12_ = in_XMM0._4_12_;
  auVar6._0_4_ = in_XMM0._0_4_ - fVar1;
  uVar5 = auVar6._0_8_;
  fVar10 = in_XMM1._4_4_;
  auVar12._4_4_ = fVar10;
  auVar12._0_4_ = fVar10;
  auVar12._8_4_ = in_XMM1._12_4_;
  auVar12._12_4_ = in_XMM1._12_4_;
  auVar8 = blendps(in_XMM1,ZEXT416((uint)fVar1),1);
  if (fVar1 < fVar10) {
    auVar11._4_12_ = auVar12._4_12_;
    auVar11._0_4_ = (fVar10 - fVar1) * g_0239011c;
    auVar12 = roundss(auVar11,auVar11,9);
    auVar6 = insertps(auVar6,auVar12,0x10);
    uVar5 = auVar6._0_8_;
    auVar9._0_4_ = auVar8._0_4_;
    auVar9._4_4_ = auVar9._0_4_;
    auVar9._8_4_ = auVar8._8_4_;
    auVar9._12_4_ = auVar9._8_4_;
    auVar8 = auVar9;
  }
  iVar2 = (int)param_2;
  if (*(char *)(*(int64_t *)(this_ptr[0x58] + 0x10) + 4 + (int64_t)iVar2 * 8) != '\0') {
    (**(code **)(*this_ptr + 0x640))();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    (**(code **)(*local_40 + 0x3f0))
              (0,0x14,*(void*)
                       (*(int64_t *)(this_ptr[0x58] + 0x10) + 5 + (int64_t)iVar2 * 8),1);
    if (*(int *)((int64_t)this_ptr + 0x2cc) == iVar2) {
      (**(code **)(*local_40 + 0x390))();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d48b40();
      plVar3 = (int64_t *)*arg1;
      uVar5 = (**(code **)(*this_ptr + 0xa68))();
      auVar6 = auVar8;
      auVar7._0_8_ = (**(code **)(*this_ptr + 0xa68))();
      auVar7._8_8_ = extraout_XMM0_Qb_00;
      blendps(auVar6,auVar8,2);
      auVar8._8_8_ = extraout_XMM0_Qb;
      auVar8._0_8_ = uVar5;
      blendps(auVar8,auVar7,2);
      (**(code **)(*plVar3 + 0x3c8))();
    }
    FUN_00d50b20();
    return;
  }
  if (this_ptr[0x3e] == 0) {
    return;
  }
  plVar3 = (int64_t *)this_ptr[0x55];
  if (plVar3 == (int64_t *)0x0) {
    return;
  }
  FUN_00d50b00(uVar5,param_2,param_3,param_4,auVar8);
  if ((iVar2 < 0) || (*(int *)(this_ptr[0x57] + 0xc) <= iVar2)) {
    local_88 = 0;
  }
  else {
    local_88 = *(int64_t *)(*(int64_t *)(this_ptr[0x57] + 0x10) + (param_2 & 0xffffffff) * 8);
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  local_80 = '\x01';
  (**(code **)(*plVar3 + 0x50))(&local_88,&stack0xffffffffffffffb0);
  if (local_40 == (int64_t *)0x0) {
    plVar3 = (int64_t *)0x0;
  }
  else {
    if (local_38 != '\0') {
      bVar4 = false;
      goto LAB_01ed5290;
    }
    FUN_00d50b00();
    plVar3 = local_40;
  }
  bVar4 = plVar3 == (int64_t *)0x0;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01ed5290:
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar4) {
    FUN_01d526f0();
    FUN_00d05510();
    (**(code **)(*(int64_t *)*arg1 + 0x400))();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01ed6a90
// ============================================================
// Function: FUN_01ed6a90
// Address: 01ed6a90
// Size: 1102 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ed6a90(uint64_t param_1,uint32_t param_2)

{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  bool bVar5;
  char cVar6;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t lVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x928))();
  FUN_01ed7190();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if (this_ptr[0x54] == 0) {
    *(void*)(this_ptr + 0x30) = 0;
  }
  else {
    local_50 = local_40;
    uVar9 = FUN_01e436c0();
    FUN_01ed48b0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    plVar2 = (int64_t *)this_ptr[0x54];
    local_78 = 0;
    local_88 = local_40;
    FUN_00d50b00();
    local_78 = '\x01';
    local_a8 = 0;
    local_a0 = '\0';
    local_80 = this_ptr;
    (**(code **)(*plVar2 + 0x18))(&local_a8,&local_80);
    lVar3 = local_98;
    if (local_90 == '\0') {
      if (local_98 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = '\0';
    }
    FUN_00d243f0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar3 = this_ptr[0x56];
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    uVar10 = FUN_00d243f0();
    if (lVar3 != 0) {
      uVar10 = FUN_00d50b20();
    }
    FUN_00c8e340(uVar10,0);
    iVar1 = *(int *)(this_ptr[0x57] + 0xc);
    *(int *)(this_ptr + 0x30) = iVar1;
    if (0 < iVar1) {
      lVar7 = 0;
      do {
        plVar2 = (int64_t *)this_ptr[0x54];
        local_68 = 0;
        FUN_00d50b00();
        local_68 = '\x01';
        lVar8 = *(int64_t *)(*(int64_t *)(this_ptr[0x57] + 0x10) + lVar7 * 8);
        local_58 = 0;
        local_70 = this_ptr;
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        local_58 = '\x01';
        local_60 = lVar8;
        uVar10 = (**(code **)(*plVar2 + 0x18))(&local_60,&local_70);
        if (lVar3 != 0) {
          uVar10 = FUN_00d50b00();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
        if (((lVar3 == 0) || (*(int *)(lVar3 + 0xc) != 0)) ||
           (cVar6 = (**(code **)(*this_ptr + 0xa40))(), uVar10 = extraout_XMM0_Da, cVar6 != '\0'))
        {
          bVar5 = false;
          lVar8 = lVar3;
        }
        else {
          uVar10 = FUN_00d50b20();
          bVar5 = true;
          lVar8 = 0;
        }
        lVar4 = this_ptr[0x58];
        iVar1 = *(int *)(lVar4 + 0x18);
        FUN_00c8e340(uVar10,1);
        *(uint64_t *)(*(int64_t *)(lVar4 + 0x10) + (int64_t)iVar1) =
             (uint64_t)(lVar8 != 0) << 0x20;
        if (!bVar5 && lVar8 != 0) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < (int)this_ptr[0x30]);
    }
    FUN_01ed4a40();
    FUN_01e3f820();
    cVar6 = FUN_00d05440();
    if (cVar6 != '\0') {
      (**(code **)(*this_ptr + 0x518))(uVar9,param_2);
    }
    local_40 = local_50;
    if (local_88 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01dcfdb0();
  FUN_01ed73b0();
  (**(code **)(*this_ptr + 0x930))();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01edc770
// ============================================================
// Function: FUN_01edc770
// Address: 01edc770
// Size: 880 bytes
// Class: GNTextAutoCompleterItem

uint64_t FUN_01edc770(uint64_t param_1,char param_2)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  uint64_t local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  plVar8 = local_40;
  lVar2 = g_027fe828;
  if (g_027fe828 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar8 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027e7c20;
  if (cVar3 == '\0') {
    local_78 = *arg1;
    local_70 = '\0';
    uVar4 = FUN_01d827c0(param_1,param_2);
    uVar7 = (uint64_t)uVar4;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_01edcacb;
  }
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar2;
  local_a0 = '\x01';
  FUN_01ccaae0(param_1,&local_a8);
  plVar8 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  uVar7 = CONCAT71((int7)((uint64_t)arg1 >> 8),1);
  if ((plVar8 == (int64_t *)0x0) || (param_2 == '\0')) goto LAB_01edcacb;
  FUN_01ccad60();
  plVar8 = local_40;
  if ((local_38 == '\0') &&
     (((local_40 != (int64_t *)0x0 && (FUN_00d50b00(), local_38 != '\0')) &&
      (local_40 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  uVar6 = (**(code **)(*plVar8 + 0x960))();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01edc94d;
    }
LAB_01edc985:
    local_48 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
LAB_01edc98b:
    plVar8 = (int64_t *)0x0;
    bVar1 = false;
  }
  else {
    if (local_40 == (int64_t *)0x0) goto LAB_01edc985;
LAB_01edc94d:
    iVar5 = FUN_00d8c7a0();
    if (iVar5 == 0) {
      local_48 = 0;
      goto LAB_01edc98b;
    }
    (**(code **)(*plVar8 + 0x960))();
    local_58 = local_68;
    local_50 = 0;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_50 = '\x01';
    FUN_01d51a40();
    plVar8 = local_40;
    if (local_40 == (int64_t *)0x0) {
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    local_48 = 0;
  }
  lVar2 = g_027e7c20;
  local_90 = '\0';
  local_98 = plVar8;
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar2;
  local_80 = '\x01';
  (**(code **)(*this_ptr + 0x4d0))(param_1,&local_88);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_48 == '\0') {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01edcacb:
  return uVar7 & 0xffffffff;
}



// ============================================================
// 01ecc1e0
// ============================================================
// Function: FUN_01ecc1e0
// Address: 01ecc1e0
// Size: 801 bytes
// Class: GNTextAutoCompleterItem

uint32_t FUN_01ecc1e0(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint32_t uVar4;
  void*arg1;
  void*this_ptr;
  bool bVar5;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  plVar1 = (int64_t *)*this_ptr;
  plVar2 = (int64_t *)*arg1;
  (**(code **)(*plVar1 + 0x3a0))();
  if (local_38 == (int64_t *)0x0) {
    bVar5 = false;
  }
  else {
    (**(code **)(*plVar2 + 0x3a0))();
    bVar5 = local_48 == 0;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar4 = 0xffffffff;
  if (!bVar5) {
    (**(code **)(*plVar1 + 0x3a0))();
    if (local_38 == (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x3a0))();
      bVar5 = local_48 != 0;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      bVar5 = false;
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar4 = 1;
    if (!bVar5) {
      (**(code **)(*plVar1 + 0x3a0))();
      if (local_38 == (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x3a0))();
        bVar5 = local_48 == 0;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar5 = false;
      }
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe6f8;
      if (bVar5) {
        (**(code **)(*plVar1 + 0x370))();
        plVar1 = local_38;
        (**(code **)(*plVar2 + 0x370))();
        local_68 = local_48;
        local_60 = 0;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_60 = '\x01';
        uVar4 = (**(code **)(*plVar1 + 0x58))();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (g_027fe6f8 != 0) {
          FUN_00d50b00();
        }
        local_88 = lVar3;
        local_80 = '\x01';
        (**(code **)(*plVar1 + 0x88))(param_1,&local_88);
        plVar1 = local_38;
        local_78 = g_027fe6f8;
        if (g_027fe6f8 != 0) {
          FUN_00d50b00();
        }
        local_70 = '\x01';
        (**(code **)(*plVar2 + 0x88))(param_1,&local_78);
        local_58 = local_48;
        local_50 = 0;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_50 = '\x01';
        uVar4 = (**(code **)(*plVar1 + 0x58))();
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  return uVar4;
}



// ============================================================
// 01eda150
// ============================================================
// Function: FUN_01eda150
// Address: 01eda150
// Size: 751 bytes
// Class: GNTextAutoCompleterItem

void* FUN_01eda150(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  void*puVar4;
  uint64_t uVar5;
  undefined7 uVar7;
  uint64_t uVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t local_68;
  char local_60;
  void*local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  uint64_t local_38;
  
  FUN_01ed7190();
  local_40 = local_50;
  if (local_50 == 0) {
    bVar3 = true;
    local_40 = 0;
  }
  else {
    if (local_48 == '\0') {
      FUN_00d50b00();
    }
    if ((*(int *)(local_40 + 0xc) != 0) && (*(int64_t *)(arg1 + 0x2a0) != 0)) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      local_58 = puVar4;
      if (*(int *)(local_40 + 0xc) < 1) {
        local_38 = 0;
        lVar9 = 0;
      }
      else {
        lVar10 = 0;
        lVar9 = 0;
        local_38 = 0;
        do {
          plVar1 = *(int64_t **)(arg1 + 0x2a0);
          FUN_00d50b00();
          lVar2 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + lVar10 * 8);
          local_60 = 0;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_60 = '\x01';
          local_68 = lVar2;
          uVar5 = (**(code **)(*plVar1 + 0x40))(&local_68,&stack0xffffffffffffff88);
          lVar8 = local_50;
          uVar7 = (undefined7)((uint64_t)lVar2 >> 8);
          if (local_50 == lVar9) {
            lVar8 = lVar9;
            if (((char)local_38 != '\0') || (local_50 == 0)) {
              uVar6 = local_38 & 0xffffffff;
              goto joined_r0x01eda2f9;
            }
            if (local_48 == '\0') {
              FUN_00d50b00();
              goto LAB_01eda310;
            }
LAB_01eda2a4:
            local_48 = '\0';
            local_38 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
            lVar9 = lVar8;
          }
          else {
            if (local_48 != '\0') {
              if (((char)local_38 != '\0') && (lVar9 != 0)) {
                uVar5 = FUN_00d50b20();
              }
              goto LAB_01eda2a4;
            }
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            uVar6 = CONCAT71(uVar7,1);
            if (((char)local_38 != '\0') && (lVar9 != 0)) {
              FUN_00d50b20();
              lVar9 = lVar8;
LAB_01eda310:
              uVar6 = CONCAT71(uVar7,1);
              lVar8 = lVar9;
            }
joined_r0x01eda2f9:
            lVar9 = lVar8;
            if ((local_48 == '\0') || (local_50 == 0)) {
              local_38 = uVar6 & 0xffffffff;
            }
            else {
              FUN_00d50b20();
              local_38 = uVar6 & 0xffffffff;
            }
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if (arg1 != 0) {
            FUN_00d50b20();
          }
          if (lVar9 != 0) {
            FUN_00d21140();
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)(local_40 + 0xc));
      }
      *this_ptr = local_58;
      *(void*)(this_ptr + 1) = 1;
      bVar3 = false;
      if (((char)local_38 != '\0') && (lVar9 != 0)) {
        FUN_00d50b20();
        bVar3 = false;
      }
      goto LAB_01eda3ec;
    }
    bVar3 = false;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_01eda3ec:
  if (!bVar3) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01ed8d70
// ============================================================
// Function: FUN_01ed8d70
// Address: 01ed8d70
// Size: 724 bytes
// Class: GNTextAutoCompleterItem

uint32_t FUN_01ed8d70(void)

{
  uint32_t uVar1;
  void*puVar2;
  int64_t lVar3;
  int iVar4;
  void*arg1;
  int64_t this_ptr;
  uint64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  void*local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  uint32_t local_68;
  uint32_t uStack_64;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  *(void*)(this_ptr + 0x2cc) = 0xffffffff;
  FUN_01d384d0();
  local_a8 = g_026e1380;
  if (g_026e1380 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  FUN_01cacbe0();
  lVar3 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (CONCAT44(uStack_64,local_68) != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(lVar3 + 0xc) == 0) {
      uVar1 = 0;
    }
    else {
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02572358;
      (*g_02572370)();
      local_50 = 0;
      local_58 = 0;
      local_48 = lVar3;
      local_40 = 0xffffffff;
      local_38 = 0;
      local_40._4_4_ = 0;
      while( true ) {
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar4 = -local_40._4_4_;
          }
          else {
            iVar4 = (int)local_40 - local_40._4_4_;
            local_40 = CONCAT44(local_40._4_4_,iVar4);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar4 = 0;
          }
          local_40 = CONCAT44(iVar4,(int)local_40);
        }
        lVar3 = (int64_t)(int)local_40;
        iVar4 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar4);
        if (*(int *)(local_48 + 0xc) <= iVar4) break;
        local_58 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar3 * 8);
        local_98 = FUN_00dd6dc0();
        local_90 = '\0';
        FUN_00d21140();
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00115a50();
      local_50 = '\0';
      local_58 = 0;
      local_68 = 0;
      local_b8 = *arg1;
      local_b0 = 0;
      FUN_01ed8cb0(&local_58,&local_b8,&local_68);
      *(void*)(this_ptr + 0x240) = 0;
      local_80 = '\0';
      local_78 = local_58;
      local_70 = '\0';
      local_88 = puVar2;
      uVar1 = (**(code **)(**(int64_t **)(this_ptr + 0x2a0) + 0x38))(local_68,&local_78,1);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return uVar1;
}



// ============================================================
// 01ece4b0
// ============================================================
// Function: FUN_01ece4b0
// Address: 01ece4b0
// Size: 886 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ece4b0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  uint32_t uVar4;
  int64_t *this_ptr;
  int64_t *plVar5;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01d836c0();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  uVar4 = FUN_01e15b70();
  (**(code **)(*this_ptr + 0x520))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01e1aa30(uVar4,1);
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e10550();
  FUN_00d8e3d0();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d95590();
  local_70 = local_50;
  local_68 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_68 = '\x01';
  FUN_00d97d10(2,&local_70);
  plVar5 = local_40;
  plVar3 = plVar2;
  if (plVar2 != local_40) {
    if (local_38 != '\0') {
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      goto LAB_01ece6a9;
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    plVar3 = plVar5;
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar5 = plVar3;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01ece6a9:
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar1 + 0x370))();
  local_60 = local_40;
  local_58 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_58 = '\x01';
  (**(code **)(*this_ptr + 0x488))();
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d8c7a0();
  FUN_00d8f140();
  plVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e15f00();
  FUN_00d8c7a0();
  FUN_01e148d0(uVar4);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01edad20
// ============================================================
// Function: FUN_01edad20
// Address: 01edad20
// Size: 798 bytes
// Class: GNTextAutoCompleterItem

void* FUN_01edad20(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  void*puVar7;
  void*puVar8;
  int64_t arg1;
  void*this_ptr;
  uint64_t uVar9;
  int64_t lVar10;
  
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  pcVar3 = g_02572370;
  (*g_02572370)();
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_02572358;
  (*pcVar3)();
  if (*param_2 != 0) {
    FUN_00d21140();
    iVar4 = FUN_01ed4e60();
    if (iVar4 != -1) {
      uVar5 = FUN_00d23d20();
      uVar9 = (uint64_t)uVar5;
      if (0 < (int)uVar5) {
        do {
          uVar5 = uVar5 - 1;
          if ((int64_t)*(int *)(*(int64_t *)(arg1 + 0x2b8) + 0xc) < (int64_t)uVar9) {
            if (*param_2 != 0) {
              *param_2 = 0;
              if ((char)param_2[1] != '\0') {
                FUN_00d50b20();
              }
              goto LAB_01edaef0;
            }
          }
          else {
            lVar10 = *(int64_t *)
                      (*(int64_t *)(*(int64_t *)(arg1 + 0x2b8) + 0x10) + (uint64_t)uVar5 * 8
                      );
            if (lVar10 != 0) {
              FUN_00d50b00();
            }
            lVar1 = *param_2;
            if (lVar1 == lVar10) {
              if (((char)param_2[1] != '\0') || (lVar10 == 0)) {
                if (lVar10 != 0) {
                  FUN_00d50b20();
                }
                goto LAB_01edaef4;
              }
            }
            else {
              *param_2 = lVar10;
              if (((char)param_2[1] != '\0') && (lVar1 != 0)) {
                FUN_00d50b20();
              }
            }
LAB_01edaef0:
            *(void*)(param_2 + 1) = 1;
          }
LAB_01edaef4:
          iVar6 = FUN_01ed4e60();
          if (iVar6 < iVar4) {
            FUN_00d21140();
            iVar4 = FUN_01ed4e60();
            if (iVar4 == 0) break;
          }
          bVar2 = 1 < (int64_t)uVar9;
          uVar9 = uVar9 - 1;
        } while (bVar2);
      }
      uVar5 = *(uint *)((int64_t)puVar7 + 0xc);
      if (0 < (int)uVar5) {
        lVar10 = (uint64_t)uVar5 + 1;
        do {
          uVar5 = uVar5 - 1;
          lVar1 = *(int64_t *)(puVar7[2] + (uint64_t)uVar5 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + -1;
        } while (1 < lVar10);
      }
      if (*(int *)((int64_t)puVar8 + 0xc) != 0) {
        *this_ptr = puVar8;
        *(void*)(this_ptr + 1) = 1;
        goto LAB_01edb03f;
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  FUN_00d50b20();
LAB_01edb03f:
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 01ed5f90
// ============================================================
// Function: FUN_01ed5f90
// Address: 01ed5f90
// Size: 682 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ed5f90(int param_1,uint param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint uVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar4;
  bool bVar5;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  uint local_34;
  
  lVar4 = *(int64_t *)
           (*(int64_t *)
             (*(int64_t *)
               (*(int64_t *)(*(int64_t *)(arg1 + 0x178) + 0x10) + (int64_t)param_1 * 8) +
             0x10) + (int64_t)(int)param_2 * 8);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  local_34 = param_2;
  FUN_01dca160();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != lVar4) goto LAB_01ed6005;
  plVar1 = *(int64_t **)(arg1 + 0x2a0);
  uVar3 = local_34;
  local_40 = lVar4;
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
    if (((int)local_34 < 0) || (*(int *)(*(int64_t *)(arg1 + 0x2b8) + 0xc) <= (int)local_34))
    {
      local_90 = 0;
    }
    else {
      local_90 = *(int64_t *)
                  (*(int64_t *)(*(int64_t *)(arg1 + 0x2b8) + 0x10) + (uint64_t)local_34 * 8)
      ;
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    local_88 = '\x01';
    FUN_01dcc290();
    local_50 = local_80;
    local_48 = 0;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_48 = '\x01';
    (**(code **)(*plVar1 + 0x20))(&local_90,&stack0xffffffffffffff90,&local_50);
    lVar2 = local_40;
    lVar4 = local_40;
    if (local_60 == local_40) {
LAB_01ed6146:
      bVar5 = local_58 == '\0';
      uVar3 = local_34;
joined_r0x01ed614a:
      local_34 = uVar3;
      if ((!bVar5) && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar4 = local_60;
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
          goto LAB_01ed6146;
        }
        bVar5 = true;
        uVar3 = local_34;
        goto joined_r0x01ed614a;
      }
      uVar3 = local_34;
      if (local_40 != 0) {
        FUN_00d50b20();
        uVar3 = local_34;
      }
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (arg1 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    FUN_00d233f0((int64_t)param_1,uVar3);
  }
LAB_01ed6005:
  *this_ptr = lVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01ed75d0
// ============================================================
// Function: FUN_01ed75d0
// Address: 01ed75d0
// Size: 743 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ed75d0(uint32_t param_1)

{
  int iVar1;
  uint8_t auVar2 [16];
  int iVar3;
  uint uVar4;
  void*arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  float fVar6;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  uint8_t auVar7 [16];
  uint8_t local_68 [8];
  uint32_t uStack_60;
  uint32_t uStack_5c;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x640))();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((int)this_ptr[0x48] != 3) {
    FUN_01dd32f0(param_1);
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    goto LAB_01ed78a0;
  }
  (**(code **)(*local_40 + 0x390))();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(g_02394298);
  iVar3 = (**(code **)(*this_ptr + 0x9d8))((int)*(void*)((int64_t)this_ptr + 0x224));
  local_68 = (uint8_t  [8])FUN_01dcf710();
  fVar6 = (float)((uint64_t)local_68 >> 0x20);
  uStack_60 = extraout_XMM0_Dc;
  uStack_5c = extraout_XMM0_Dd;
  if (iVar3 == 0) {
    auVar7._4_4_ = fVar6;
    auVar7._0_4_ = fVar6 + g_02390124;
    auVar7._8_4_ = extraout_XMM0_Dd;
    auVar7._12_4_ = extraout_XMM0_Dd;
    _local_68 = insertps(_local_68,auVar7,0x10);
    if ((int)this_ptr[0x30] == 0) goto LAB_01ed7776;
  }
  else if (iVar3 == (int)this_ptr[0x30]) {
LAB_01ed7776:
    auVar2._4_4_ = local_68._4_4_;
    auVar2._0_4_ = local_68._4_4_ + g_023b1608;
    auVar2._8_4_ = local_68._12_4_;
    auVar2._12_4_ = local_68._12_4_;
    auVar7 = insertps(_local_68,auVar2,0x10);
    local_68 = auVar7._0_8_;
  }
  fVar6 = g_02390124;
  if (1 < iVar3 + 1U) {
    iVar1 = *(int *)(*(int64_t *)(this_ptr[0x58] + 0x10) + (int64_t)(int)(iVar3 - 1U) * 8);
    if ((iVar3 < 1) || (*(int *)(this_ptr[0x57] + 0xc) < iVar3)) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(int64_t *)(*(int64_t *)(this_ptr[0x57] + 0x10) + (uint64_t)(iVar3 - 1U) * 8);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
    }
    uVar4 = FUN_01ed4710();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    fVar6 = (float)(int)((uVar4 & 0xff) + iVar1 + 1);
  }
  local_68._4_4_ = (uint32_t)((uint64_t)local_68 >> 0x20);
  fVar6 = fVar6 * *(float *)(this_ptr + 0x5a) + (float)local_68._0_4_;
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))
            (fVar6,g_023b1d84 + (float)local_68._4_4_,fVar6,(float)local_68._4_4_ + g_02394298);
LAB_01ed78a0:
  FUN_00d50b20();
  return;
}



// ============================================================
// 01ecada0
// ============================================================
// Function: FUN_01ecada0
// Address: 01ecada0
// Size: 674 bytes
// Class: GNTextAutoCompleterItem
// String references:
//   "GNTextAutoCompleterItem"

void FUN_01ecada0(void)

{
  int64_t *plVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t this_ptr;
  
  FUN_00d50100();
  plVar3 = (int64_t *)FUN_00e8fc40();
  func_0x00081f40();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = *(int64_t **)(this_ptr + 0x30);
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x30) = plVar3;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((g_026f2c30 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    g_027fa828 = FUN_00d4fe50();
    g_027fa810 = "GNTextAutoCompleterItem";
    g_027fa818 = 0x30;
    g_027fa820 = FUN_001f7e30;
    g_027fa830 = 0;
    ram_00000000027fa838 = 0;
    g_027fa840 = 0;
    ram_00000000027fa848 = 0;
    g_027fa850 = 0;
    ram_00000000027fa858 = 0;
    g_027fa860 = 0;
    ram_00000000027fa868 = 0;
    g_027fa870 = 0;
    ram_00000000027fa878 = 0;
    g_027fa880 = 0;
    ram_00000000027fa888 = 0;
    g_027fa890 = 0;
    ram_00000000027fa898 = 0;
    g_027fa8a0 = 0;
    ram_00000000027fa8a8 = 0;
    g_027fa8b0 = 0;
    ram_00000000027fa8b8 = 0;
    g_027fa8c0 = 0;
    ram_00000000027fa8c8 = 0;
    g_027fa8d0 = 0;
    ___cxa_guard_release();
  }
  lVar4 = FUN_00e86210();
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_01d25f20();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)FUN_00e8fc40();
  func_0x00081f40();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = *(int64_t **)(this_ptr + 0x38);
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x38) = plVar3;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((g_026f2c30 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    g_027fa828 = FUN_00d4fe50();
    g_027fa810 = "GNTextAutoCompleterItem";
    g_027fa818 = 0x30;
    g_027fa820 = FUN_001f7e30;
    g_027fa830 = 0;
    ram_00000000027fa838 = 0;
    g_027fa840 = 0;
    ram_00000000027fa848 = 0;
    g_027fa850 = 0;
    ram_00000000027fa858 = 0;
    g_027fa860 = 0;
    ram_00000000027fa868 = 0;
    g_027fa870 = 0;
    ram_00000000027fa878 = 0;
    g_027fa880 = 0;
    ram_00000000027fa888 = 0;
    g_027fa890 = 0;
    ram_00000000027fa898 = 0;
    g_027fa8a0 = 0;
    ram_00000000027fa8a8 = 0;
    g_027fa8b0 = 0;
    ram_00000000027fa8b8 = 0;
    g_027fa8c0 = 0;
    ram_00000000027fa8c8 = 0;
    g_027fa8d0 = 0;
    ___cxa_guard_release();
  }
  lVar4 = FUN_00e86210();
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_01d25f20();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00d97d10
// ============================================================
// Function: FUN_00d97d10
// Address: 00d97d10
// Size: 522 bytes
// Class: GNTextAutoCompleterItem

int64_t * FUN_00d97d10(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint64_t uVar7;
  uint uVar8;
  int64_t arg1;
  uint64_t uVar9;
  int64_t *this_ptr;
  uint uVar10;
  
  uVar10 = *(uint *)(arg1 + 0x20);
  if (uVar10 == 0xffffffff) {
    FUN_00d931c0();
    uVar10 = *(uint *)(arg1 + 0x20);
    lVar1 = *(int64_t *)(arg1 + 0x18);
    if (uVar10 == 0xffffffff) {
      if (*(int64_t *)(arg1 + 0x10) == 0) {
        uVar10 = 0;
        lVar2 = *param_2;
        uVar6 = *(uint *)(lVar2 + 0x20);
        goto joined_r0x00d97d9a;
      }
      uVar10 = FUN_00e7dde0();
    }
    lVar2 = *param_2;
    uVar6 = *(uint *)(lVar2 + 0x20);
  }
  else {
    lVar1 = *(int64_t *)(arg1 + 0x18);
    lVar2 = *param_2;
    uVar6 = *(uint *)(lVar2 + 0x20);
  }
joined_r0x00d97d9a:
  if (uVar6 == 0xffffffff) {
    FUN_00d931c0();
    uVar6 = *(uint *)(*param_2 + 0x20);
    lVar2 = *(int64_t *)(lVar2 + 0x18);
    if (uVar6 == 0xffffffff) {
      if (*(int64_t *)(*param_2 + 0x10) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_00e7dde0();
      }
    }
  }
  else {
    lVar2 = *(int64_t *)(lVar2 + 0x18);
  }
  if ((((param_1 & 4) != 0) && (0 < (int)uVar10)) && (0 < (int)uVar6)) {
    do {
      uVar8 = uVar10 - 1;
      bVar4 = true;
      uVar7 = (uint64_t)uVar6;
      uVar5 = uVar6;
      do {
        uVar5 = uVar5 - 1;
        if (*(short *)(lVar1 + (uint64_t)uVar8 * 2) == *(short *)(lVar2 + (uint64_t)uVar5 * 2)) {
          bVar4 = false;
        }
      } while ((bVar4) && (bVar3 = 1 < (int64_t)uVar7, uVar7 = uVar7 - 1, bVar3));
    } while ((!bVar4) && (uVar10 = uVar8, 0 < (int)uVar8));
  }
  uVar7 = 0;
  if ((((param_1 & 2) != 0) && (0 < (int)uVar10)) && (0 < (int)uVar6)) {
    uVar7 = 0;
    do {
      bVar4 = true;
      uVar9 = (uint64_t)uVar6;
      uVar8 = uVar6;
      do {
        uVar8 = uVar8 - 1;
        if (*(short *)(lVar1 + uVar7 * 2) == *(short *)(lVar2 + (uint64_t)uVar8 * 2)) {
          bVar4 = false;
        }
      } while ((bVar4) && (bVar3 = 1 < (int64_t)uVar9, uVar9 = uVar9 - 1, bVar3));
      uVar10 = uVar10 - (bVar4 == false);
      uVar7 = (uint64_t)((int)uVar7 + (uint)(bVar4 ^ 1));
    } while ((bVar4 == false) && (0 < (int)uVar10));
  }
  if ((int)uVar10 < 1) {
    *(void*)(this_ptr + 1) = 0;
    lVar1 = g_028a8368;
    if (g_028a8368 != 0) {
      FUN_00d50b00(uVar7);
    }
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    FUN_00d920f0(uVar7,uVar10);
  }
  return this_ptr;
}



// ============================================================
// 01ed0d70
// ============================================================
// Function: FUN_01ed0d70
// Address: 01ed0d70
// Size: 623 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ed0d70(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint8_t auVar3 [16];
  int64_t lVar4;
  int iVar5;
  int64_t *this_ptr;
  float fVar6;
  uint64_t uVar7;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  float fVar12;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  uint8_t auVar11 [16];
  uint8_t in_register_00001284 [12];
  float local_98;
  int64_t local_30;
  char local_28;
  uint64_t extraout_XMM0_Qb_00;
  
  fVar12 = (float)((uint64_t)param_2 >> 0x20);
  fVar6 = (float)param_2;
  if (this_ptr[8] == 0) {
    (**(code **)(*this_ptr + 0x508))();
  }
  FUN_01e5b880();
  uVar7 = FUN_01e3f820();
  FUN_01e3f820();
  auVar8._8_8_ = extraout_XMM0_Qb;
  auVar8._0_8_ = uVar7;
  auVar11._0_4_ = fVar6 + (float)uVar7;
  auVar11._4_4_ = fVar12 + (float)((uint64_t)uVar7 >> 0x20);
  auVar11._8_4_ = in_XMM1_Dc + (float)extraout_XMM0_Qb;
  auVar11._12_4_ = in_XMM1_Dd + (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
  auVar8 = blendps(auVar8,auVar11,2);
  FUN_01e46ed0(auVar8._0_8_);
  FUN_01e3f820();
  iVar5 = 4;
  if (*(int *)(this_ptr[5] + 0xc) < 4) {
    iVar5 = *(int *)(this_ptr[5] + 0xc);
  }
  auVar3._4_12_ = in_register_00001284;
  auVar3._0_4_ = (float)iVar5 * auVar11._4_4_ + auVar11._4_4_;
  auVar8 = insertps(auVar11,auVar3,0x10);
  FUN_01e5ba50();
  FUN_01e5d9c0();
  lVar1 = this_ptr[5];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d2a8f0();
  FUN_01dd4c60();
  FUN_01ddd080();
  FUN_01dcb680();
  fVar6 = (float)FUN_01dd38e0();
  local_98 = auVar11._0_4_;
  if (local_98 < fVar6) {
    auVar9._0_8_ = FUN_01dd38e0();
    auVar9._8_8_ = extraout_XMM0_Qb_00;
    auVar10._4_12_ = auVar9._4_12_;
    auVar10._0_4_ = ((float)auVar9._0_8_ - local_98) + local_98;
    blendps(auVar8,auVar10,1);
    FUN_01e5ba50();
  }
  FUN_01e42030();
  if (local_30 == 0) {
    lVar2 = this_ptr[10];
    lVar4 = 0;
  }
  else {
    if (local_28 == '\0') {
      FUN_00d50b00();
    }
    lVar2 = this_ptr[10];
    lVar4 = local_30;
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_01d8c820();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01d8c6e0();
  FUN_01e5d9c0();
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01ecfac0
// ============================================================
// Function: FUN_01ecfac0
// Address: 01ecfac0
// Size: 599 bytes
// Class: GNTextAutoCompleterItem

uint64_t FUN_01ecfac0(void)

{
  int64_t lVar1;
  int iVar2;
  int64_t *this_ptr;
  int64_t *plVar3;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  local_48 = 0;
  lVar1 = this_ptr[3];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  local_50 = lVar1;
  (**(code **)(*this_ptr + 0x490))();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x4c0))();
  FUN_01e10550();
  FUN_00d8e3d0();
  plVar3 = local_40;
  if (local_40 == (int64_t *)0x0) {
    plVar3 = (int64_t *)0x0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027fe6f8;
  local_58 = plVar3;
  if (g_027fe6f8 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar1;
  local_80 = '\x01';
  local_70 = '\0';
  local_78 = plVar3;
  (**(code **)(*this_ptr + 0x4a0))(&local_78,&local_88,0);
  plVar3 = local_40;
  if (local_40 == (int64_t *)0x0) {
    plVar3 = (int64_t *)0x0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x4f8))();
  if (plVar3 == (int64_t *)0x0) {
    (**(code **)(*this_ptr + 0x4e0))();
  }
  else {
    local_60 = '\0';
    local_68 = plVar3;
    iVar2 = FUN_01ed2ec0();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar2 != -1) {
      FUN_01dd3d10();
    }
    (**(code **)(*plVar3 + 0x370))();
    FUN_00d8c7a0();
    FUN_00e7b4e0();
    FUN_01e148d0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}



// ============================================================
// 01ecd9a0
// ============================================================
// Function: FUN_01ecd9a0
// Address: 01ecd9a0
// Size: 895 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ecd9a0(uint64_t param_1,int64_t *param_2)

{
  uint32_t uVar1;
  void*puVar2;
  uint64_t uVar3;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar4;
  int64_t lVar5;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  uVar1 = FUN_01e15b70();
  (**(code **)(*arg1 + 0x520))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  uVar3 = FUN_01e1aa30(uVar1,1);
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (((int)uVar3 == -1) || ((int)((uint64_t)uVar3 >> 0x20) < 1)) {
    lVar4 = 0;
    goto LAB_01ecdc01;
  }
  FUN_01e10550();
  FUN_00d8e3d0();
  lVar5 = local_40;
  if (local_40 == 0) {
    lVar5 = 0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d95590();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00d97f20();
  if (local_40 == lVar5) {
LAB_01ecdb9d:
    lVar4 = lVar5;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar4 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
        lVar5 = local_40;
        goto LAB_01ecdb9d;
      }
    }
    else if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d21140();
LAB_01ecdc01:
  lVar5 = *param_2;
  FUN_00d21140();
  if (*(int *)((int64_t)puVar2 + 0xc) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_00d8ede0();
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    FUN_00d95130();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01ece090
// ============================================================
// Function: FUN_01ece090
// Address: 01ece090
// Size: 583 bytes
// Class: GNTextAutoCompleterItem

bool FUN_01ece090(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x4c0))();
  FUN_01e10550();
  FUN_00d8e3d0();
  local_48 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027fe6f8;
  if (g_027fe6f8 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar1;
  local_70 = '\x01';
  local_68 = local_48;
  local_60 = '\0';
  (**(code **)(*this_ptr + 0x4a0))(&local_68,&local_78,param_2);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x370))();
    local_58 = local_40;
    local_50 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_50 = '\x01';
    FUN_01e15f00();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar2 + 0x370))();
    FUN_00d8c7a0();
    FUN_00e7b4e0();
    FUN_01e148d0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return plVar2 != (int64_t *)0x0;
}



// ============================================================
// 01ecc740
// ============================================================
// Function: FUN_01ecc740
// Address: 01ecc740
// Size: 790 bytes
// Class: GNTextAutoCompleterItem

void* FUN_01ecc740(uint64_t param_1,uint64_t param_2,char param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  void*puVar4;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar5;
  int64_t local_70;
  char local_68;
  int64_t *local_40;
  char local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  lVar1 = *(int64_t *)(arg1 + 0x18);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8);
        (**(code **)(*plVar2 + 0x88))();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if (local_40 != (int64_t *)0x0) {
          if (param_3 == '\0') {
            cVar3 = FUN_00d90870();
            if (cVar3 != '\0') {
              local_38 = '\0';
              FUN_00d21140();
              local_40 = plVar2;
            }
          }
          else {
            FUN_00d99300();
            FUN_00d99300();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            cVar3 = FUN_00d90870();
            if (local_70 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar3 != '\0') {
              local_38 = '\0';
              FUN_00d21140();
              local_40 = plVar2;
            }
          }
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_01ed1330();
  }
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01ecbb20
// ============================================================
// Function: FUN_01ecbb20
// Address: 01ecbb20
// Size: 1218 bytes
// Class: GNTextAutoCompleterItem

int64_t * FUN_01ecbb20(uint64_t param_1,uint64_t param_2,int param_3)

{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  char *pcVar4;
  int64_t lVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  iVar2 = FUN_00d8c7a0();
  if ((iVar2 == 0) && (0 < param_3)) {
    FUN_00d23310();
    pcVar4 = local_38;
    if (local_40[0] != '\0') {
      pcVar4 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    iVar2 = FUN_00d8c7a0();
    if ((iVar2 != 0) || (-1 < param_3)) {
      lVar3 = *(int64_t *)(arg1 + 0x18);
      if (0 < *(int *)(lVar3 + 0xc)) {
        lVar5 = 0;
        do {
          plVar1 = *(int64_t **)(*(int64_t *)(lVar3 + 0x10) + lVar5 * 8);
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar1 + 0x3a0))();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 == 0) && ((**(code **)(*plVar1 + 0x88))(), local_40[0] != '\0')) {
            local_40[0] = '\0';
          }
          FUN_00d50b20();
          lVar5 = lVar5 + 1;
          lVar3 = *(int64_t *)(arg1 + 0x18);
        } while (lVar5 < *(int *)(lVar3 + 0xc));
      }
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return this_ptr;
    }
    FUN_00d23340();
    pcVar4 = local_38;
    if (local_40[0] != '\0') {
      pcVar4 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  if ((local_38[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01ed1bf0
// ============================================================
// Function: FUN_01ed1bf0
// Address: 01ed1bf0
// Size: 680 bytes
// Class: GNTextAutoCompleterItem
// String references:
//   "-> %@"

void FUN_01ed1bf0(void)

{
  int64_t lVar1;
  void*puVar2;
  int64_t *arg1;
  int64_t local_a0;
  char local_98;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  (**(code **)(*arg1 + 0x3a0))();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 == 0) {
    (**(code **)(*arg1 + 0x380))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00d21140();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = arg1[3];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*arg1 + 0x380))();
    if (local_a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_00d21140();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (local_a0 != 0) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_027259e0;
  if (g_027259e0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01ecff20
// ============================================================
// Function: FUN_01ecff20
// Address: 01ecff20
// Size: 512 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ecff20(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *plVar4;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02692468;
  puVar3[2] = &g_026927f8;
  puVar3[0xc] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *(void*)((int64_t)puVar3 + 0x24) = 0;
  *(void*)((int64_t)puVar3 + 0x2c) = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *(void*)(puVar3 + 0xb) = 0;
  (*g_02692480)();
  lVar2 = g_027fe700;
  if (g_027fe700 != 0) {
    FUN_00d50b00();
  }
  FUN_01db9840();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01db9690(g_023908e0);
  FUN_01db99c0();
  FUN_01dcbe90();
  plVar4 = (int64_t *)FUN_001f28d0();
  (**(code **)(*plVar4 + 0x18))();
  FUN_01ccad10();
  lVar2 = g_027e7c20;
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_027fe708;
  if (g_027fe708 != 0) {
    FUN_00d50b00();
  }
  local_48 = lVar1;
  local_40 = '\x01';
  local_30 = 0;
  lVar1 = *(int64_t *)(this_ptr + 0x30);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_30 = '\x01';
  local_38 = lVar1;
  (**(code **)(*plVar4 + 0x468))(&local_38,&local_48);
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar4 + 0x478))();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}



// ============================================================
// 01ed20d0
// ============================================================
// Function: FUN_01ed20d0
// Address: 01ed20d0
// Size: 654 bytes
// Class: GNTextAutoCompleterItem
// String references:
//   "-> %@"

void FUN_01ed20d0(void)

{
  int64_t lVar1;
  void*puVar2;
  int64_t *arg1;
  int64_t local_98;
  char local_90;
  int64_t local_68;
  char local_60;
  int64_t local_38;
  char local_30;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  FUN_00d4ffd0();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_00d21140();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = arg1[3];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d21140();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*arg1 + 0x3a0))();
  if (lVar1 != 0) {
    (**(code **)(*arg1 + 0x380))();
    if (local_98 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_00d21140();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (local_98 != 0) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_027259e0;
  if (g_027259e0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01ed1670
// ============================================================
// Function: FUN_01ed1670
// Address: 01ed1670
// Size: 531 bytes
// Class: GNTextAutoCompleterItem
// String references:
//   "GNTextAutoCompleterItem"
//   "GNString"
//   "getMenuTitle"

void FUN_01ed1670(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028ba5a8 = "getMenuTitle";
      g_028ba5b0 = &g_027fa810;
      g_028ba5b8 = 0;
      g_028ba5c0 = &g_027fe710;
      g_028ba5c8 = FUN_01ed2750;
      g_028ba5d0 = g_02422860;
      ram_00000000028ba5d4 = _UNK_02422864;
      ram_00000000028ba5d8 = _UNK_02422868;
      ram_00000000028ba5dc = _UNK_0242286c;
      // [STATIC_INIT: property registration]
      g_028ba5e0 = g_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

