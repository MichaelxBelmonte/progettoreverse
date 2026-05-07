// Function: FUN_00f05e00
// Address: 00f05e00
// Size: 4605 bytes
// Class: Unknown

uint64_t FUN_00f05e00(uint64_t param_1,ushort *param_2,int64_t param_3)

{
  ushort *puVar1;
  void*puVar2;
  void*puVar3;
  void*puVar4;
  void*puVar5;
  int64_t lVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint uVar17;
  int64_t lVar18;
  uint64_t *puVar19;
  uint64_t arg1;
  uint64_t *puVar20;
  uint64_t *puVar21;
  void*this_ptr;
  void*puVar22;
  ushort uVar23;
  uint uVar24;
  uint uVar25;
  uint64_t *puVar27;
  uint uVar28;
  void*puVar29;
  uint64_t uVar30;
  uint64_t *puVar31;
  void*puVar32;
  uint64_t uVar33;
  uint64_t *puVar34;
  bool bVar35;
  uint64_t local_e0;
  uint64_t local_d0;
  uint64_t local_c0;
  uint64_t local_b8;
  int64_t local_a8;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_80;
  uint64_t local_78;
  void*local_68;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t uVar26;
  
  if (param_1 < 10) {
    return 0xffffffffffffffec;
  }
  uVar23 = *param_2;
  uVar33 = (uint64_t)uVar23;
  uVar11 = param_2[1];
  uVar30 = (uint64_t)uVar11;
  uVar12 = param_2[2];
  uVar15 = (uint64_t)uVar12;
  uVar14 = uVar33 + uVar30 + uVar15 + 6;
  uVar16 = param_1 - uVar14;
  if (param_1 < uVar14) {
    return 0xffffffffffffffec;
  }
  puVar2 = this_ptr + arg1;
  uVar14 = arg1 + 3 >> 2;
  puVar3 = this_ptr + uVar14;
  puVar4 = puVar3 + uVar14;
  puVar5 = puVar4 + uVar14;
  if (puVar2 < puVar5) {
    return 0xffffffffffffffec;
  }
  if (arg1 < 6) {
    return 0xffffffffffffffec;
  }
  if (uVar33 == 0) {
    return 0xffffffffffffffb8;
  }
  puVar1 = param_2 + 3;
  uVar13 = *(ushort *)(param_3 + 2);
  if (uVar23 < 8) {
    local_78 = (uint64_t)(byte)*puVar1;
    switch(uVar23) {
    case 7:
      local_78 = local_78 | (uint64_t)(byte)param_2[6] << 0x30;
    case 6:
      local_78 = local_78 + ((uint64_t)*(byte *)((int64_t)param_2 + 0xb) << 0x28);
    case 5:
      local_78 = local_78 + ((uint64_t)(byte)param_2[5] << 0x20);
    case 4:
      local_78 = local_78 + (uint64_t)*(byte *)((int64_t)param_2 + 9) * 0x1000000;
    case 3:
      local_78 = local_78 + (uint64_t)(byte)param_2[4] * 0x10000;
    case 2:
      local_78 = local_78 + (uint64_t)*(byte *)((int64_t)param_2 + 7) * 0x100;
    }
    bVar7 = *(byte *)((uVar33 - 1) + (int64_t)puVar1);
    if (bVar7 == 0) {
      return 0xffffffffffffffec;
    }
    uVar25 = LZCOUNT((uint)bVar7) + (uint)uVar23 * -8 + 0x29;
    local_58 = 6;
  }
  else {
    bVar7 = *(byte *)((uVar33 - 1) + (int64_t)puVar1);
    if (bVar7 == 0) {
      return 0xffffffffffffffff;
    }
    local_58 = uVar33 - 2;
    local_78 = *(uint64_t *)((int64_t)param_2 + local_58);
    uVar25 = LZCOUNT((uint)bVar7) - 0x17;
  }
  uVar26 = (uint64_t)uVar25;
  if (uVar30 == 0) {
    return 0xffffffffffffffb8;
  }
  puVar34 = (uint64_t *)((int64_t)param_2 + uVar33 + 6);
  if (uVar11 < 8) {
    local_90 = (uint64_t)(byte)*puVar34;
    switch(uVar11) {
    case 7:
      local_90 = local_90 | (uint64_t)*(byte *)((int64_t)param_2 + uVar33 + 0xc) << 0x30;
    case 6:
      local_90 = local_90 + ((uint64_t)*(byte *)((int64_t)param_2 + uVar33 + 0xb) << 0x28);
    case 5:
      local_90 = local_90 + ((uint64_t)*(byte *)((int64_t)param_2 + uVar33 + 10) << 0x20);
    case 4:
      local_90 = local_90 + (uint64_t)*(byte *)((int64_t)param_2 + uVar33 + 9) * 0x1000000;
    case 3:
      local_90 = local_90 + (uint64_t)*(byte *)((int64_t)param_2 + uVar33 + 8) * 0x10000;
    case 2:
      local_90 = local_90 + (uint64_t)*(byte *)((int64_t)param_2 + uVar33 + 7) * 0x100;
    }
    bVar7 = *(byte *)((uVar30 - 1) + (int64_t)puVar34);
    if (bVar7 == 0) {
      return 0xffffffffffffffec;
    }
    uVar25 = LZCOUNT((uint)bVar7) + (uint)uVar11 * -8 + 0x29;
    local_80 = 0;
  }
  else {
    bVar7 = *(byte *)((uVar30 - 1) + (int64_t)puVar34);
    if (bVar7 == 0) {
      return 0xffffffffffffffff;
    }
    local_80 = uVar30 - 8;
    local_90 = *(uint64_t *)((int64_t)puVar34 + local_80);
    uVar25 = LZCOUNT((uint)bVar7) - 0x17;
  }
  local_c0 = (uint64_t)uVar25;
  if (uVar15 == 0) {
    return 0xffffffffffffffb8;
  }
  puVar31 = (uint64_t *)(uVar30 + (int64_t)puVar34);
  if (uVar12 < 8) {
    local_50 = (uint64_t)(byte)*puVar31;
    switch(uVar12) {
    case 7:
      local_50 = local_50 | (uint64_t)*(byte *)((int64_t)puVar31 + 6) << 0x30;
    case 6:
      local_50 = local_50 + ((uint64_t)*(byte *)((int64_t)puVar31 + 5) << 0x28);
    case 5:
      local_50 = local_50 + ((uint64_t)*(byte *)((int64_t)puVar31 + 4) << 0x20);
    case 4:
      local_50 = local_50 + (uint64_t)*(byte *)((int64_t)puVar31 + 3) * 0x1000000;
    case 3:
      local_50 = local_50 + (uint64_t)*(byte *)((int64_t)puVar31 + 2) * 0x10000;
    case 2:
      local_50 = local_50 + (uint64_t)*(byte *)((int64_t)puVar31 + 1) * 0x100;
    }
    bVar7 = *(byte *)((uVar15 - 1) + (int64_t)puVar31);
    if (bVar7 == 0) {
      return 0xffffffffffffffec;
    }
    uVar25 = LZCOUNT((uint)bVar7) + (uint)uVar12 * -8 + 0x29;
    local_e0 = 0;
  }
  else {
    bVar7 = *(byte *)((uVar15 - 1) + (int64_t)puVar31);
    if (bVar7 == 0) {
      return 0xffffffffffffffff;
    }
    local_e0 = uVar15 - 8;
    local_50 = *(uint64_t *)((int64_t)puVar31 + local_e0);
    uVar25 = LZCOUNT((uint)bVar7) - 0x17;
  }
  local_48 = (uint64_t)uVar25;
  if (uVar16 == 0) {
    return 0xffffffffffffffb8;
  }
  puVar20 = (uint64_t *)(uVar15 + (int64_t)puVar31);
  if (uVar16 < 8) {
    local_98 = (uint64_t)(byte)*puVar20;
    switch(uVar16) {
    case 7:
      local_98 = local_98 | (uint64_t)*(byte *)((int64_t)puVar20 + 6) << 0x30;
    case 6:
      local_98 = local_98 + ((uint64_t)*(byte *)((int64_t)puVar20 + 5) << 0x28);
    case 5:
      local_98 = local_98 + ((uint64_t)*(byte *)((int64_t)puVar20 + 4) << 0x20);
    case 4:
      local_98 = local_98 + (uint64_t)*(byte *)((int64_t)puVar20 + 3) * 0x1000000;
    case 3:
      local_98 = local_98 + (uint64_t)*(byte *)((int64_t)puVar20 + 2) * 0x10000;
    case 2:
      local_98 = local_98 + (uint64_t)*(byte *)((int64_t)puVar20 + 1) * 0x100;
    }
    bVar7 = *(byte *)((uVar16 - 1) + (int64_t)puVar20);
    if (bVar7 == 0) {
      return 0xffffffffffffffec;
    }
    uVar25 = LZCOUNT((uint)bVar7) + (int)uVar16 * -8 + 0x29;
    uVar16 = 0;
  }
  else {
    bVar7 = *(byte *)((uVar16 - 1) + (int64_t)puVar20);
    if (bVar7 == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < uVar16) {
      return uVar16;
    }
    local_98 = *(uint64_t *)((int64_t)puVar20 + (uVar16 - 8));
    uVar16 = uVar16 - 8;
    uVar25 = LZCOUNT((uint)bVar7) - 0x17;
  }
  local_40 = (uint64_t)uVar25;
  puVar29 = this_ptr + (arg1 - 3);
  lVar6 = param_3 + 4;
  if (((uint64_t)((int64_t)puVar2 - (int64_t)puVar5) < 8) || (puVar29 <= puVar5)) {
    local_b8 = local_80;
    puVar32 = puVar4;
    local_a8 = local_58;
    local_d0 = local_e0;
    puVar22 = puVar3;
    local_68 = puVar5;
    local_58 = uVar16;
  }
  else {
    uVar23 = -uVar13 & 0x3f;
    lVar18 = uVar14 * 3;
    bVar7 = 1;
    do {
      puVar32 = this_ptr;
      uVar15 = (local_78 << (uVar26 & 0x3f)) >> uVar23;
      uVar24 = (uint)*(byte *)(lVar6 + uVar15 * 2) + (int)uVar26;
      *puVar32 = *(void*)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_90 << (local_c0 & 0x3f)) >> uVar23;
      uVar25 = (uint)*(byte *)(lVar6 + uVar15 * 2) + (int)local_c0;
      puVar32[uVar14] = *(void*)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_50 << (local_48 & 0x3f)) >> uVar23;
      uVar17 = (uint)*(byte *)(lVar6 + uVar15 * 2) + (int)local_48;
      puVar32[uVar14 * 2] = *(void*)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_98 << (local_40 & 0x3f)) >> uVar23;
      uVar28 = (uint)*(byte *)(lVar6 + uVar15 * 2) + (int)local_40;
      puVar32[lVar18] = *(void*)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_78 << ((uint64_t)uVar24 & 0x3f)) >> uVar23;
      uVar24 = *(byte *)(lVar6 + uVar15 * 2) + uVar24;
      puVar32[1] = *(void*)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_90 << ((uint64_t)uVar25 & 0x3f)) >> uVar23;
      uVar25 = *(byte *)(lVar6 + uVar15 * 2) + uVar25;
      puVar32[uVar14 + 1] = *(void*)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_50 << ((uint64_t)uVar17 & 0x3f)) >> uVar23;
      uVar17 = *(byte *)(lVar6 + uVar15 * 2) + uVar17;
      puVar32[uVar14 * 2 + 1] = *(void*)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_98 << ((uint64_t)uVar28 & 0x3f)) >> uVar23;
      uVar28 = *(byte *)(lVar6 + uVar15 * 2) + uVar28;
      puVar32[lVar18 + 1] = *(void*)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_78 << ((uint64_t)uVar24 & 0x3f)) >> uVar23;
      uVar24 = *(byte *)(lVar6 + uVar15 * 2) + uVar24;
      puVar32[2] = *(void*)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_90 << ((uint64_t)uVar25 & 0x3f)) >> uVar23;
      uVar25 = *(byte *)(lVar6 + uVar15 * 2) + uVar25;
      puVar32[uVar14 + 2] = *(void*)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_50 << ((uint64_t)uVar17 & 0x3f)) >> uVar23;
      uVar17 = *(byte *)(lVar6 + uVar15 * 2) + uVar17;
      puVar32[uVar14 * 2 + 2] = *(void*)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_98 << ((uint64_t)uVar28 & 0x3f)) >> uVar23;
      uVar28 = *(byte *)(lVar6 + uVar15 * 2) + uVar28;
      puVar32[lVar18 + 2] = *(void*)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_78 << ((uint64_t)uVar24 & 0x3f)) >> uVar23;
      uVar24 = *(byte *)(lVar6 + uVar15 * 2) + uVar24;
      puVar32[3] = *(void*)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_90 << ((uint64_t)uVar25 & 0x3f)) >> uVar23;
      bVar8 = *(byte *)(lVar6 + uVar15 * 2);
      puVar32[uVar14 + 3] = *(void*)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_50 << ((uint64_t)uVar17 & 0x3f)) >> uVar23;
      bVar9 = *(byte *)(lVar6 + uVar15 * 2);
      puVar32[uVar14 * 2 + 3] = *(void*)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_98 << ((uint64_t)uVar28 & 0x3f)) >> uVar23;
      bVar10 = *(byte *)(lVar6 + uVar15 * 2);
      puVar32[lVar18 + 3] = *(void*)(param_3 + 5 + uVar15 * 2);
      if ((int64_t)local_58 < 0xe) {
        local_a8 = local_58;
      }
      else {
        local_a8 = local_58 - (uVar24 >> 3);
        uVar24 = uVar24 & 7;
        local_78 = *(uint64_t *)((int64_t)param_2 + local_a8);
      }
      uVar26 = (uint64_t)uVar24;
      uVar25 = uVar25 + bVar8;
      local_b8 = local_80;
      if (7 < (int64_t)local_80) {
        local_b8 = local_80 - (uVar25 >> 3);
        uVar25 = uVar25 & 7;
        local_90 = *(uint64_t *)((int64_t)puVar34 + local_b8);
      }
      local_c0 = (uint64_t)uVar25;
      uVar17 = uVar17 + bVar9;
      if ((int64_t)local_e0 < 8) {
        local_d0 = local_e0;
      }
      else {
        local_d0 = local_e0 - (uVar17 >> 3);
        uVar17 = uVar17 & 7;
        local_50 = *(uint64_t *)((int64_t)puVar31 + local_d0);
      }
      local_48 = (uint64_t)uVar17;
      uVar28 = uVar28 + bVar10;
      uVar15 = uVar16;
      if (7 < (int64_t)uVar16) {
        uVar15 = uVar16 - (uVar28 >> 3);
        uVar28 = uVar28 & 7;
        local_98 = *(uint64_t *)((int64_t)puVar20 + uVar15);
      }
      local_40 = (uint64_t)uVar28;
      bVar7 = bVar7 & 7 < (int64_t)uVar16 &
              ((0xd < (int64_t)local_58 && 7 < (int64_t)local_80) && 7 < (int64_t)local_e0);
      local_e0 = local_d0;
      local_58 = local_a8;
      uVar16 = uVar15;
      this_ptr = puVar32 + 4;
      local_80 = local_b8;
    } while ((bool)(bVar7 & puVar32 + lVar18 + 4 < puVar29));
    this_ptr = puVar32 + 4;
    puVar32 = this_ptr + uVar14 * 2;
    puVar22 = this_ptr + uVar14;
    local_68 = this_ptr + lVar18;
    local_58 = uVar15;
  }
  if (puVar3 < this_ptr) {
    return 0xffffffffffffffec;
  }
  if (puVar4 < puVar22) {
    return 0xffffffffffffffec;
  }
  if (puVar5 < puVar32) {
    return 0xffffffffffffffec;
  }
  uVar25 = (uint)uVar26;
  if ((int64_t)puVar3 - (int64_t)this_ptr < 4) {
    if (uVar25 < 0x41) {
      if (local_a8 < 0xe) {
        if (local_a8 == 6) {
          local_a8 = 6;
        }
        else {
          uVar16 = (uint64_t)((int)local_a8 - 6);
          if (5 < (int64_t)(local_a8 - (uVar26 >> 3))) {
            uVar16 = uVar26 >> 3;
          }
          local_a8 = local_a8 - uVar16;
          uVar26 = (uint64_t)(uVar25 + (int)uVar16 * -8);
          local_78 = *(uint64_t *)((int64_t)param_2 + local_a8);
        }
      }
      else {
        local_a8 = local_a8 - (uVar26 >> 3);
        uVar26 = (uint64_t)(uVar25 & 7);
        local_78 = *(uint64_t *)((int64_t)param_2 + local_a8);
      }
    }
  }
  else if (uVar25 < 0x41) {
    uVar25 = -(uint)uVar13 & 0x3f;
    do {
      if (local_a8 < 0xe) {
        if (local_a8 == 6) {
          local_a8 = 6;
          break;
        }
        lVar18 = local_a8 - (uVar26 >> 3);
        bVar35 = lVar18 < 6;
        uVar17 = (int)local_a8 - 6;
        if (5 < lVar18) {
          uVar17 = (uint)(uVar26 >> 3);
        }
        uVar28 = (uint)uVar26 + uVar17 * -8;
      }
      else {
        uVar17 = (uint)(uVar26 >> 3);
        uVar28 = (uint)uVar26 & 7;
        bVar35 = false;
      }
      uVar26 = (uint64_t)uVar28;
      local_a8 = local_a8 - (uint64_t)uVar17;
      local_78 = *(uint64_t *)((int64_t)param_2 + local_a8);
      if ((puVar3 + -3 <= this_ptr) || (bVar35)) break;
      uVar16 = (local_78 << (uVar26 & 0x3f)) >> uVar25;
      uVar28 = *(byte *)(lVar6 + uVar16 * 2) + uVar28;
      *this_ptr = *(void*)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_78 << ((uint64_t)uVar28 & 0x3f)) >> uVar25;
      uVar28 = *(byte *)(lVar6 + uVar16 * 2) + uVar28;
      this_ptr[1] = *(void*)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_78 << ((uint64_t)uVar28 & 0x3f)) >> uVar25;
      uVar28 = *(byte *)(lVar6 + uVar16 * 2) + uVar28;
      this_ptr[2] = *(void*)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_78 << ((uint64_t)uVar28 & 0x3f)) >> uVar25;
      uVar28 = *(byte *)(lVar6 + uVar16 * 2) + uVar28;
      uVar26 = (uint64_t)uVar28;
      this_ptr[3] = *(void*)(param_3 + 5 + uVar16 * 2);
      this_ptr = this_ptr + 4;
      if (0x40 < uVar28) break;
    } while( true );
  }
  uVar23 = -uVar13 & 0x3f;
  if (this_ptr < puVar3) {
    lVar18 = 0;
    do {
      uVar16 = (local_78 << (uVar26 & 0x3f)) >> uVar23;
      uVar25 = (uint)*(byte *)(lVar6 + uVar16 * 2) + (int)uVar26;
      this_ptr[lVar18] = *(void*)(param_3 + 5 + uVar16 * 2);
      lVar18 = lVar18 + 1;
      uVar26 = (uint64_t)uVar25;
    } while ((int64_t)puVar3 - (int64_t)this_ptr != lVar18);
  }
  else {
    uVar25 = (uint)uVar26;
  }
  puVar27 = (uint64_t *)((int64_t)puVar34 + local_b8);
  uVar17 = (uint)local_c0;
  if ((int64_t)puVar4 - (int64_t)puVar22 < 4) {
    if (uVar17 < 0x41) {
      if ((int64_t)local_b8 < 8) {
        if (local_b8 == 0) goto LAB_00f06b32;
        uVar16 = local_b8 & 0xffffffff;
        if (puVar34 <= (uint64_t *)((int64_t)puVar27 - (local_c0 >> 3))) {
          uVar16 = local_c0 >> 3;
        }
        uVar17 = uVar17 + (int)uVar16 * -8;
      }
      else {
        uVar16 = local_c0 >> 3;
        uVar17 = uVar17 & 7;
      }
      local_c0 = (uint64_t)uVar17;
      puVar27 = (uint64_t *)((int64_t)puVar27 - uVar16);
      local_90 = *puVar27;
    }
  }
  else if (uVar17 < 0x41) {
    do {
      if ((int64_t)local_b8 < 8) {
        puVar27 = (uint64_t *)((int64_t)puVar34 + local_b8);
        if (local_b8 == 0) break;
        bVar35 = (uint64_t *)((int64_t)puVar27 - (local_c0 >> 3)) < puVar34;
        uVar17 = (uint)local_b8;
        if (!bVar35) {
          uVar17 = (uint)(local_c0 >> 3);
        }
        uVar28 = (uint)local_c0 + uVar17 * -8;
      }
      else {
        uVar17 = (uint)(local_c0 >> 3);
        uVar28 = (uint)local_c0 & 7;
        bVar35 = false;
      }
      local_c0 = (uint64_t)uVar28;
      local_b8 = local_b8 - uVar17;
      puVar27 = (uint64_t *)((int64_t)puVar34 + local_b8);
      local_90 = *(uint64_t *)((int64_t)puVar34 + local_b8);
      if ((puVar4 + -3 <= puVar22) || (bVar35)) break;
      uVar16 = (local_90 << (local_c0 & 0x3f)) >> uVar23;
      uVar28 = *(byte *)(lVar6 + uVar16 * 2) + uVar28;
      *puVar22 = *(void*)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_90 << ((uint64_t)uVar28 & 0x3f)) >> uVar23;
      uVar28 = *(byte *)(lVar6 + uVar16 * 2) + uVar28;
      puVar22[1] = *(void*)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_90 << ((uint64_t)uVar28 & 0x3f)) >> uVar23;
      uVar28 = *(byte *)(lVar6 + uVar16 * 2) + uVar28;
      puVar22[2] = *(void*)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_90 << ((uint64_t)uVar28 & 0x3f)) >> uVar23;
      uVar28 = *(byte *)(lVar6 + uVar16 * 2) + uVar28;
      local_c0 = (uint64_t)uVar28;
      puVar22[3] = *(void*)(param_3 + 5 + uVar16 * 2);
      puVar22 = puVar22 + 4;
      if (0x40 < uVar28) break;
    } while( true );
  }
LAB_00f06b32:
  if (puVar22 < puVar4) {
    lVar18 = 0;
    do {
      uVar16 = (local_90 << (local_c0 & 0x3f)) >> uVar23;
      uVar17 = (uint)*(byte *)(lVar6 + uVar16 * 2) + (int)local_c0;
      puVar22[lVar18] = *(void*)(param_3 + 5 + uVar16 * 2);
      lVar18 = lVar18 + 1;
      local_c0 = (uint64_t)uVar17;
    } while ((int64_t)puVar4 - (int64_t)puVar22 != lVar18);
  }
  else {
    uVar17 = (uint)local_c0;
  }
  puVar21 = (uint64_t *)(local_d0 + (int64_t)puVar31);
  if ((int64_t)puVar5 - (int64_t)puVar32 < 4) {
    if ((uint)local_48 < 0x41) {
      if ((int64_t)local_d0 < 8) {
        if (local_d0 == 0) goto LAB_00f06d0c;
        uVar16 = local_d0 & 0xffffffff;
        if (puVar31 <= (uint64_t *)((int64_t)puVar21 - (local_48 >> 3))) {
          uVar16 = local_48 >> 3;
        }
        local_48._0_4_ = (uint)local_48 + (int)uVar16 * -8;
      }
      else {
        uVar16 = local_48 >> 3;
        local_48._0_4_ = (uint)local_48 & 7;
      }
      local_48 = (uint64_t)(uint)local_48;
      puVar21 = (uint64_t *)((int64_t)puVar21 - uVar16);
      local_50 = *puVar21;
    }
  }
  else if ((uint)local_48 < 0x41) {
    do {
      if ((int64_t)local_d0 < 8) {
        puVar21 = (uint64_t *)(local_d0 + (int64_t)puVar31);
        if (local_d0 == 0) break;
        bVar35 = (uint64_t *)((int64_t)puVar21 - (local_48 >> 3)) < puVar31;
        uVar28 = (uint)local_d0;
        if (!bVar35) {
          uVar28 = (uint)(local_48 >> 3);
        }
        uVar24 = (uint)local_48 + uVar28 * -8;
      }
      else {
        uVar28 = (uint)(local_48 >> 3);
        uVar24 = (uint)local_48 & 7;
        bVar35 = false;
      }
      local_48 = (uint64_t)uVar24;
      local_d0 = local_d0 - uVar28;
      puVar21 = (uint64_t *)(local_d0 + (int64_t)puVar31);
      local_50 = *(uint64_t *)((int64_t)puVar31 + local_d0);
      if ((puVar5 + -3 <= puVar32) || (bVar35)) break;
      uVar16 = (local_50 << (local_48 & 0x3f)) >> uVar23;
      uVar24 = *(byte *)(lVar6 + uVar16 * 2) + uVar24;
      *puVar32 = *(void*)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_50 << ((uint64_t)uVar24 & 0x3f)) >> uVar23;
      uVar24 = *(byte *)(lVar6 + uVar16 * 2) + uVar24;
      puVar32[1] = *(void*)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_50 << ((uint64_t)uVar24 & 0x3f)) >> uVar23;
      uVar24 = *(byte *)(lVar6 + uVar16 * 2) + uVar24;
      puVar32[2] = *(void*)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_50 << ((uint64_t)uVar24 & 0x3f)) >> uVar23;
      uVar24 = *(byte *)(lVar6 + uVar16 * 2) + uVar24;
      local_48 = (uint64_t)uVar24;
      puVar32[3] = *(void*)(param_3 + 5 + uVar16 * 2);
      puVar32 = puVar32 + 4;
      if (0x40 < uVar24) break;
    } while( true );
  }
LAB_00f06d0c:
  if (puVar32 < puVar5) {
    lVar18 = 0;
    do {
      uVar16 = (local_50 << (local_48 & 0x3f)) >> uVar23;
      uVar28 = (uint)*(byte *)(lVar6 + uVar16 * 2) + (int)local_48;
      puVar32[lVar18] = *(void*)(param_3 + 5 + uVar16 * 2);
      lVar18 = lVar18 + 1;
      local_48 = (uint64_t)uVar28;
    } while ((int64_t)puVar5 - (int64_t)puVar32 != lVar18);
  }
  else {
    uVar28 = (uint)local_48;
  }
  puVar19 = (uint64_t *)((int64_t)puVar20 + local_58);
  if ((int64_t)puVar2 - (int64_t)local_68 < 4) {
    if ((uint)local_40 < 0x41) {
      if ((int64_t)local_58 < 8) {
        if (local_58 != 0) {
          uVar16 = local_58 & 0xffffffff;
          if (puVar20 <= (uint64_t *)((int64_t)puVar19 - (local_40 >> 3))) {
            uVar16 = local_40 >> 3;
          }
          puVar19 = (uint64_t *)((int64_t)puVar19 - uVar16);
          local_40 = (uint64_t)((uint)local_40 + (int)uVar16 * -8);
          local_98 = *puVar19;
        }
      }
      else {
        puVar19 = (uint64_t *)((int64_t)puVar19 - (local_40 >> 3));
        local_40 = (uint64_t)((uint)local_40 & 7);
        local_98 = *puVar19;
      }
    }
  }
  else if ((uint)local_40 < 0x41) {
    do {
      if ((int64_t)local_58 < 8) {
        puVar19 = (uint64_t *)((int64_t)puVar20 + local_58);
        if (local_58 == 0) break;
        bVar35 = (uint64_t *)((int64_t)puVar19 - (local_40 >> 3)) < puVar20;
        uVar16 = local_58 & 0xffffffff;
        if (!bVar35) {
          uVar16 = local_40 >> 3;
        }
        uVar24 = (uint)local_40 + (int)uVar16 * -8;
      }
      else {
        uVar16 = local_40 >> 3;
        uVar24 = (uint)local_40 & 7;
        bVar35 = false;
      }
      local_40 = (uint64_t)uVar24;
      local_58 = local_58 - uVar16;
      puVar19 = (uint64_t *)((int64_t)puVar20 + local_58);
      local_98 = *(uint64_t *)((int64_t)puVar20 + local_58);
      if ((puVar29 <= local_68) || (bVar35)) break;
      uVar16 = (local_98 << (local_40 & 0x3f)) >> uVar23;
      uVar24 = *(byte *)(lVar6 + uVar16 * 2) + uVar24;
      *local_68 = *(void*)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_98 << ((uint64_t)uVar24 & 0x3f)) >> uVar23;
      uVar24 = *(byte *)(lVar6 + uVar16 * 2) + uVar24;
      local_68[1] = *(void*)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_98 << ((uint64_t)uVar24 & 0x3f)) >> uVar23;
      uVar24 = *(byte *)(lVar6 + uVar16 * 2) + uVar24;
      local_68[2] = *(void*)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_98 << ((uint64_t)uVar24 & 0x3f)) >> uVar23;
      uVar24 = *(byte *)(lVar6 + uVar16 * 2) + uVar24;
      local_40 = (uint64_t)uVar24;
      local_68[3] = *(void*)(param_3 + 5 + uVar16 * 2);
      local_68 = local_68 + 4;
      if (0x40 < uVar24) break;
    } while( true );
  }
  if (local_68 < puVar2) {
    lVar18 = 0;
    do {
      uVar16 = (local_98 << (local_40 & 0x3f)) >> uVar23;
      uVar24 = (uint)*(byte *)(lVar6 + uVar16 * 2) + (int)local_40;
      local_68[lVar18] = *(void*)(param_3 + 5 + uVar16 * 2);
      lVar18 = lVar18 + 1;
      local_40 = (uint64_t)uVar24;
    } while ((int64_t)puVar2 - (int64_t)local_68 != lVar18);
  }
  else {
    uVar24 = (uint)local_40;
  }
  if (uVar24 != 0x40) {
    arg1 = 0xffffffffffffffec;
  }
  if (puVar19 != puVar20) {
    arg1 = 0xffffffffffffffec;
  }
  if (uVar28 != 0x40) {
    arg1 = 0xffffffffffffffec;
  }
  if (puVar21 != puVar31) {
    arg1 = 0xffffffffffffffec;
  }
  if (uVar17 != 0x40) {
    arg1 = 0xffffffffffffffec;
  }
  if (puVar27 != puVar34) {
    arg1 = 0xffffffffffffffec;
  }
  if (uVar25 != 0x40) {
    arg1 = 0xffffffffffffffec;
  }
  if (local_a8 != 6) {
    return 0xffffffffffffffec;
  }
  return arg1;
}

