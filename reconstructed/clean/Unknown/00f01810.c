// Function: FUN_00f01810
// Address: 00f01810
// Size: 4765 bytes
// Class: Unknown

uint64_t FUN_00f01810(uint64_t param_1,ushort *param_2,int64_t param_3,uint64_t param_4)

{
  void*puVar1;
  void*puVar2;
  void*puVar3;
  ushort *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  char cVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  uint64_t uVar15;
  uint64_t *puVar16;
  uint64_t uVar17;
  uint64_t *puVar18;
  byte bVar19;
  uint uVar20;
  void*puVar21;
  int iVar22;
  int64_t lVar23;
  int64_t lVar24;
  uint64_t arg1;
  void*this_ptr;
  uint64_t uVar25;
  uint64_t uVar26;
  uint64_t *puVar27;
  void*puVar28;
  uint64_t *puVar29;
  code *pcVar30;
  uint64_t *puVar31;
  uint64_t *puVar32;
  void*puVar33;
  int iVar34;
  void*puVar35;
  uint64_t uVar36;
  bool bVar37;
  uint64_t local_d8;
  uint64_t local_c8;
  uint64_t local_c0;
  void*local_a8;
  uint64_t local_98;
  uint64_t local_88;
  uint local_7c;
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  int64_t local_58;
  uint64_t local_50;
  uint local_44;
  uint local_38;
  uint local_34;
  
  if ((param_4 & 1) != 0) {
    if ((param_4 & 0x20) == 0) {
      pcVar30 = FUN_00f05be4;
      if ((param_4 & 0x10) == 0) {
        pcVar30 = HUF_decompress4X1_usingDTable_internal_fast_asm_loop;
      }
      uVar36 = FUN_00f07060(param_1,param_2,param_3,pcVar30);
      if (uVar36 != 0) {
        return uVar36;
      }
    }
    uVar36 = FUN_00f05e00(param_1,param_2,param_3);
    return uVar36;
  }
  if (param_1 < 10) {
    return 0xffffffffffffffec;
  }
  uVar8 = *param_2;
  uVar25 = (uint64_t)uVar8;
  uVar9 = param_2[1];
  uVar17 = (uint64_t)uVar9;
  uVar10 = param_2[2];
  uVar26 = (uint64_t)uVar10;
  uVar15 = uVar17 + uVar25 + uVar26 + 6;
  uVar36 = param_1 - uVar15;
  if (param_1 < uVar15) {
    return 0xffffffffffffffec;
  }
  puVar35 = this_ptr + arg1;
  uVar15 = arg1 + 3 >> 2;
  puVar1 = this_ptr + uVar15;
  puVar2 = puVar1 + uVar15;
  puVar3 = puVar2 + uVar15;
  if (puVar35 < puVar3) {
    return 0xffffffffffffffec;
  }
  if (arg1 < 6) {
    return 0xffffffffffffffec;
  }
  if (uVar25 == 0) {
    return 0xffffffffffffffb8;
  }
  puVar4 = param_2 + 3;
  if (uVar8 < 8) {
    local_70 = (uint64_t)(byte)*puVar4;
    switch(uVar8) {
    case 7:
      local_70 = local_70 | (uint64_t)(byte)param_2[6] << 0x30;
    case 6:
      local_70 = local_70 + ((uint64_t)*(byte *)((int64_t)param_2 + 0xb) << 0x28);
    case 5:
      local_70 = local_70 + ((uint64_t)(byte)param_2[5] << 0x20);
    case 4:
      local_70 = local_70 + (uint64_t)*(byte *)((int64_t)param_2 + 9) * 0x1000000;
    case 3:
      local_70 = local_70 + (uint64_t)(byte)param_2[4] * 0x10000;
    case 2:
      local_70 = local_70 + (uint64_t)*(byte *)((int64_t)param_2 + 7) * 0x100;
    }
    bVar19 = *(byte *)((uVar25 - 1) + (int64_t)puVar4);
    if (bVar19 == 0) {
      return 0xffffffffffffffec;
    }
    uVar20 = 0x1f;
    if (bVar19 != 0) {
      for (; bVar19 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    local_44 = (uVar20 ^ 0x1f) + (uint)uVar8 * -8 + 0x29;
    local_60 = 6;
  }
  else {
    bVar19 = *(byte *)((uVar25 - 1) + (int64_t)puVar4);
    if (bVar19 == 0) {
      return 0xffffffffffffffff;
    }
    local_60 = uVar25 - 2;
    local_70 = *(uint64_t *)((int64_t)param_2 + local_60);
    uVar20 = 0x1f;
    if (bVar19 != 0) {
      for (; bVar19 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    local_44 = (uVar20 ^ 0x1f) - 0x17;
  }
  if (uVar17 == 0) {
    return 0xffffffffffffffb8;
  }
  puVar31 = (uint64_t *)((int64_t)param_2 + uVar25 + 6);
  if (uVar9 < 8) {
    local_68 = (uint64_t)(byte)*puVar31;
    switch(uVar9) {
    case 7:
      local_68 = local_68 | (uint64_t)*(byte *)((int64_t)param_2 + uVar25 + 0xc) << 0x30;
    case 6:
      local_68 = local_68 + ((uint64_t)*(byte *)((int64_t)param_2 + uVar25 + 0xb) << 0x28);
    case 5:
      local_68 = local_68 + ((uint64_t)*(byte *)((int64_t)param_2 + uVar25 + 10) << 0x20);
    case 4:
      local_68 = local_68 + (uint64_t)*(byte *)((int64_t)param_2 + uVar25 + 9) * 0x1000000;
    case 3:
      local_68 = local_68 + (uint64_t)*(byte *)((int64_t)param_2 + uVar25 + 8) * 0x10000;
    case 2:
      local_68 = local_68 + (uint64_t)*(byte *)((int64_t)param_2 + uVar25 + 7) * 0x100;
    }
    bVar19 = *(byte *)((uVar17 - 1) + (int64_t)puVar31);
    if (bVar19 == 0) {
      return 0xffffffffffffffec;
    }
    uVar20 = 0x1f;
    if (bVar19 != 0) {
      for (; bVar19 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    local_7c = (uVar20 ^ 0x1f) + (uint)uVar9 * -8 + 0x29;
    local_98 = 0;
  }
  else {
    bVar19 = *(byte *)((uVar17 - 1) + (int64_t)puVar31);
    if (bVar19 == 0) {
      return 0xffffffffffffffff;
    }
    local_98 = uVar17 - 8;
    local_68 = *(uint64_t *)((int64_t)puVar31 + local_98);
    uVar20 = 0x1f;
    if (bVar19 != 0) {
      for (; bVar19 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    local_7c = (uVar20 ^ 0x1f) - 0x17;
  }
  if (uVar26 == 0) {
    return 0xffffffffffffffb8;
  }
  puVar27 = (uint64_t *)(uVar17 + (int64_t)puVar31);
  if (uVar10 < 8) {
    local_50 = (uint64_t)(byte)*puVar27;
    switch(uVar10) {
    case 7:
      local_50 = local_50 | (uint64_t)*(byte *)((int64_t)puVar27 + 6) << 0x30;
    case 6:
      local_50 = local_50 + ((uint64_t)*(byte *)((int64_t)puVar27 + 5) << 0x28);
    case 5:
      local_50 = local_50 + ((uint64_t)*(byte *)((int64_t)puVar27 + 4) << 0x20);
    case 4:
      local_50 = local_50 + (uint64_t)*(byte *)((int64_t)puVar27 + 3) * 0x1000000;
    case 3:
      local_50 = local_50 + (uint64_t)*(byte *)((int64_t)puVar27 + 2) * 0x10000;
    case 2:
      local_50 = local_50 + (uint64_t)*(byte *)((int64_t)puVar27 + 1) * 0x100;
    }
    bVar19 = *(byte *)((uVar26 - 1) + (int64_t)puVar27);
    if (bVar19 == 0) {
      return 0xffffffffffffffec;
    }
    uVar20 = 0x1f;
    if (bVar19 != 0) {
      for (; bVar19 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    local_34 = (uVar20 ^ 0x1f) + (uint)uVar10 * -8 + 0x29;
    local_c8 = 0;
  }
  else {
    bVar19 = *(byte *)((uVar26 - 1) + (int64_t)puVar27);
    if (bVar19 == 0) {
      return 0xffffffffffffffff;
    }
    local_c8 = uVar26 - 8;
    local_50 = *(uint64_t *)((int64_t)puVar27 + local_c8);
    uVar20 = 0x1f;
    if (bVar19 != 0) {
      for (; bVar19 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    local_34 = (uVar20 ^ 0x1f) - 0x17;
  }
  if (uVar36 == 0) {
    return 0xffffffffffffffb8;
  }
  puVar16 = (uint64_t *)(uVar26 + (int64_t)puVar27);
  if (uVar36 < 8) {
    local_88 = (uint64_t)(byte)*puVar16;
    switch(uVar36) {
    case 7:
      local_88 = local_88 | (uint64_t)*(byte *)((int64_t)puVar16 + 6) << 0x30;
    case 6:
      local_88 = local_88 + ((uint64_t)*(byte *)((int64_t)puVar16 + 5) << 0x28);
    case 5:
      local_88 = local_88 + ((uint64_t)*(byte *)((int64_t)puVar16 + 4) << 0x20);
    case 4:
      local_88 = local_88 + (uint64_t)*(byte *)((int64_t)puVar16 + 3) * 0x1000000;
    case 3:
      local_88 = local_88 + (uint64_t)*(byte *)((int64_t)puVar16 + 2) * 0x10000;
    case 2:
      local_88 = local_88 + (uint64_t)*(byte *)((int64_t)puVar16 + 1) * 0x100;
    }
    bVar19 = *(byte *)((uVar36 - 1) + (int64_t)puVar16);
    if (bVar19 == 0) {
      return 0xffffffffffffffec;
    }
    uVar20 = 0x1f;
    if (bVar19 != 0) {
      for (; bVar19 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    local_38 = (uVar20 ^ 0x1f) + (int)uVar36 * -8 + 0x29;
    uVar36 = 0;
  }
  else {
    bVar19 = *(byte *)((uVar36 - 1) + (int64_t)puVar16);
    if (bVar19 == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < uVar36) {
      return uVar36;
    }
    local_88 = *(uint64_t *)((int64_t)puVar16 + (uVar36 - 8));
    uVar36 = uVar36 - 8;
    uVar20 = 0x1f;
    if (bVar19 != 0) {
      for (; bVar19 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    local_38 = (uVar20 ^ 0x1f) - 0x17;
  }
  puVar21 = this_ptr + (arg1 - 3);
  lVar23 = param_3 + 4;
  cVar11 = (char)*(void*)(param_3 + 2);
  puVar33 = puVar2;
  puVar28 = puVar1;
  local_a8 = puVar3;
  if ((uint64_t)((int64_t)puVar35 - (int64_t)puVar3) < 8) {
    local_58 = local_60;
    local_d8 = local_98;
    local_c0 = local_c8;
    local_60 = uVar36;
  }
  else if (puVar3 < puVar21) {
    bVar19 = -cVar11 & 0x3f;
    lVar24 = uVar15 * 3;
    bVar12 = 1;
    do {
      puVar33 = this_ptr;
      uVar17 = (local_70 << ((byte)local_44 & 0x3f)) >> bVar19;
      uVar25 = (local_68 << ((byte)local_7c & 0x3f)) >> bVar19;
      iVar13 = *(byte *)(lVar23 + uVar17 * 2) + local_44;
      *puVar33 = *(void*)(param_3 + 5 + uVar17 * 2);
      iVar34 = *(byte *)(lVar23 + uVar25 * 2) + local_7c;
      puVar33[uVar15] = *(void*)(param_3 + 5 + uVar25 * 2);
      uVar25 = (local_50 << ((byte)local_34 & 0x3f)) >> bVar19;
      uVar17 = (local_88 << ((byte)local_38 & 0x3f)) >> bVar19;
      iVar22 = *(byte *)(lVar23 + uVar25 * 2) + local_34;
      puVar33[uVar15 * 2] = *(void*)(param_3 + 5 + uVar25 * 2);
      iVar14 = *(byte *)(lVar23 + uVar17 * 2) + local_38;
      puVar33[lVar24] = *(void*)(param_3 + 5 + uVar17 * 2);
      uVar17 = (local_70 << ((byte)iVar13 & 0x3f)) >> bVar19;
      uVar25 = (local_68 << ((byte)iVar34 & 0x3f)) >> bVar19;
      iVar13 = (uint)*(byte *)(lVar23 + uVar17 * 2) + iVar13;
      puVar33[1] = *(void*)(param_3 + 5 + uVar17 * 2);
      iVar34 = (uint)*(byte *)(lVar23 + uVar25 * 2) + iVar34;
      puVar33[uVar15 + 1] = *(void*)(param_3 + 5 + uVar25 * 2);
      uVar25 = (local_50 << ((byte)iVar22 & 0x3f)) >> bVar19;
      uVar17 = (local_88 << ((byte)iVar14 & 0x3f)) >> bVar19;
      iVar22 = (uint)*(byte *)(lVar23 + uVar25 * 2) + iVar22;
      puVar33[uVar15 * 2 + 1] = *(void*)(param_3 + 5 + uVar25 * 2);
      iVar14 = (uint)*(byte *)(lVar23 + uVar17 * 2) + iVar14;
      puVar33[lVar24 + 1] = *(void*)(param_3 + 5 + uVar17 * 2);
      uVar17 = (local_70 << ((byte)iVar13 & 0x3f)) >> bVar19;
      uVar25 = (local_68 << ((byte)iVar34 & 0x3f)) >> bVar19;
      iVar13 = (uint)*(byte *)(lVar23 + uVar17 * 2) + iVar13;
      puVar33[2] = *(void*)(param_3 + 5 + uVar17 * 2);
      iVar34 = (uint)*(byte *)(lVar23 + uVar25 * 2) + iVar34;
      puVar33[uVar15 + 2] = *(void*)(param_3 + 5 + uVar25 * 2);
      uVar17 = (local_50 << ((byte)iVar22 & 0x3f)) >> bVar19;
      uVar25 = (local_88 << ((byte)iVar14 & 0x3f)) >> bVar19;
      iVar22 = (uint)*(byte *)(lVar23 + uVar17 * 2) + iVar22;
      puVar33[uVar15 * 2 + 2] = *(void*)(param_3 + 5 + uVar17 * 2);
      uVar17 = (local_70 << ((byte)iVar13 & 0x3f)) >> bVar19;
      uVar26 = (local_68 << ((byte)iVar34 & 0x3f)) >> bVar19;
      iVar14 = (uint)*(byte *)(lVar23 + uVar25 * 2) + iVar14;
      puVar33[lVar24 + 2] = *(void*)(param_3 + 5 + uVar25 * 2);
      local_44 = (uint)*(byte *)(lVar23 + uVar17 * 2) + iVar13;
      puVar33[3] = *(void*)(param_3 + 5 + uVar17 * 2);
      uVar17 = (local_50 << ((byte)iVar22 & 0x3f)) >> bVar19;
      bVar5 = *(byte *)(lVar23 + uVar26 * 2);
      puVar33[uVar15 + 3] = *(void*)(param_3 + 5 + uVar26 * 2);
      bVar6 = *(byte *)(lVar23 + uVar17 * 2);
      puVar33[uVar15 * 2 + 3] = *(void*)(param_3 + 5 + uVar17 * 2);
      uVar17 = (local_88 << ((byte)iVar14 & 0x3f)) >> bVar19;
      bVar7 = *(byte *)(lVar23 + uVar17 * 2);
      puVar33[lVar24 + 3] = *(void*)(param_3 + 5 + uVar17 * 2);
      local_58 = local_60;
      if (0xd < (int64_t)local_60) {
        local_58 = local_60 - (local_44 >> 3);
        local_44 = local_44 & 7;
        local_70 = *(uint64_t *)((int64_t)param_2 + local_58);
      }
      local_7c = iVar34 + (uint)bVar5;
      if ((int64_t)local_98 < 8) {
        local_d8 = local_98;
      }
      else {
        local_d8 = local_98 - (local_7c >> 3);
        local_7c = local_7c & 7;
        local_68 = *(uint64_t *)((int64_t)puVar31 + local_d8);
      }
      local_34 = iVar22 + (uint)bVar6;
      if ((int64_t)local_c8 < 8) {
        local_c0 = local_c8;
      }
      else {
        local_c0 = local_c8 - (local_34 >> 3);
        local_34 = local_34 & 7;
        local_50 = *(uint64_t *)((int64_t)puVar27 + local_c0);
      }
      local_38 = iVar14 + (uint)bVar7;
      uVar17 = uVar36;
      if (7 < (int64_t)uVar36) {
        uVar17 = uVar36 - (local_38 >> 3);
        local_38 = local_38 & 7;
        local_88 = *(uint64_t *)((int64_t)puVar16 + uVar17);
      }
      bVar12 = bVar12 & 7 < (int64_t)uVar36 &
               ((0xd < (int64_t)local_60 && 7 < (int64_t)local_98) && 7 < (int64_t)local_c8);
      local_c8 = local_c0;
      local_98 = local_d8;
      local_60 = local_58;
      this_ptr = puVar33 + 4;
      uVar36 = uVar17;
    } while ((bool)(bVar12 & puVar33 + lVar24 + 4 < puVar21));
    this_ptr = puVar33 + 4;
    puVar33 = this_ptr + uVar15 * 2;
    puVar28 = this_ptr + uVar15;
    local_a8 = this_ptr + lVar24;
    local_60 = uVar17;
  }
  else {
    local_58 = local_60;
    local_d8 = local_98;
    local_c0 = local_c8;
    local_60 = uVar36;
  }
  if (puVar1 < this_ptr) {
    return 0xffffffffffffffec;
  }
  if (puVar2 < puVar28) {
    return 0xffffffffffffffec;
  }
  if (puVar3 < puVar33) {
    return 0xffffffffffffffec;
  }
  if ((int64_t)puVar1 - (int64_t)this_ptr < 4) {
    if (local_44 < 0x41) {
      if (local_58 < 0xe) {
        if (local_58 == 6) {
LAB_00f023d9:
          local_58 = 6;
          goto LAB_00f02426;
        }
        uVar20 = (int)local_58 - 6;
        if (5 < (int64_t)(local_58 - (uint64_t)(local_44 >> 3))) {
          uVar20 = local_44 >> 3;
        }
        local_44 = local_44 + uVar20 * -8;
      }
      else {
        uVar20 = local_44 >> 3;
        local_44 = local_44 & 7;
      }
      local_58 = local_58 - (uint64_t)uVar20;
      local_70 = *(uint64_t *)((int64_t)param_2 + local_58);
    }
  }
  else if (local_44 < 0x41) {
    bVar19 = -cVar11 & 0x3f;
    do {
      if (local_58 < 0xe) {
        if (local_58 == 6) goto LAB_00f023d9;
        lVar24 = local_58 - (uint64_t)(local_44 >> 3);
        bVar37 = lVar24 < 6;
        uVar20 = (int)local_58 - 6;
        if (5 < lVar24) {
          uVar20 = local_44 >> 3;
        }
        local_44 = local_44 + uVar20 * -8;
      }
      else {
        uVar20 = local_44 >> 3;
        local_44 = local_44 & 7;
        bVar37 = false;
      }
      local_58 = local_58 - (uint64_t)uVar20;
      local_70 = *(uint64_t *)((int64_t)param_2 + local_58);
      if ((puVar1 + -3 <= this_ptr) || (bVar37)) break;
      uVar36 = (local_70 << ((byte)local_44 & 0x3f)) >> bVar19;
      iVar14 = *(byte *)(lVar23 + uVar36 * 2) + local_44;
      uVar17 = (local_70 << ((byte)iVar14 & 0x3f)) >> bVar19;
      *this_ptr = *(void*)(param_3 + 5 + uVar36 * 2);
      iVar14 = (uint)*(byte *)(lVar23 + uVar17 * 2) + iVar14;
      this_ptr[1] = *(void*)(param_3 + 5 + uVar17 * 2);
      uVar17 = (local_70 << ((byte)iVar14 & 0x3f)) >> bVar19;
      iVar14 = (uint)*(byte *)(lVar23 + uVar17 * 2) + iVar14;
      uVar36 = (local_70 << ((byte)iVar14 & 0x3f)) >> bVar19;
      this_ptr[2] = *(void*)(param_3 + 5 + uVar17 * 2);
      local_44 = (uint)*(byte *)(lVar23 + uVar36 * 2) + iVar14;
      this_ptr[3] = *(void*)(param_3 + 5 + uVar36 * 2);
      this_ptr = this_ptr + 4;
    } while (local_44 < 0x41);
  }
LAB_00f02426:
  bVar19 = -cVar11 & 0x3f;
  if (this_ptr < puVar1) {
    lVar24 = 0;
    do {
      uVar36 = (local_70 << ((byte)local_44 & 0x3f)) >> bVar19;
      local_44 = local_44 + *(byte *)(lVar23 + uVar36 * 2);
      this_ptr[lVar24] = *(void*)(param_3 + 5 + uVar36 * 2);
      lVar24 = lVar24 + 1;
    } while ((int64_t)puVar1 - (int64_t)this_ptr != lVar24);
  }
  puVar32 = (uint64_t *)((int64_t)puVar31 + local_d8);
  if ((int64_t)puVar2 - (int64_t)puVar28 < 4) {
    if (local_7c < 0x41) {
      if ((int64_t)local_d8 < 8) {
        if (local_d8 == 0) goto LAB_00f0264f;
        local_d8 = local_d8 & 0xffffffff;
        if (puVar31 <= (uint64_t *)((int64_t)puVar32 - (uint64_t)(local_7c >> 3))) {
          local_d8 = (uint64_t)(local_7c >> 3);
        }
        local_7c = local_7c + (int)local_d8 * -8;
      }
      else {
        local_d8 = (uint64_t)(local_7c >> 3);
        local_7c = local_7c & 7;
      }
      puVar32 = (uint64_t *)((int64_t)puVar32 - local_d8);
      local_68 = *puVar32;
    }
  }
  else if (local_7c < 0x41) {
    do {
      if ((int64_t)local_d8 < 8) {
        puVar32 = (uint64_t *)((int64_t)puVar31 + local_d8);
        if (local_d8 == 0) break;
        bVar37 = (uint64_t *)((int64_t)puVar32 - (uint64_t)(local_7c >> 3)) < puVar31;
        uVar20 = (uint)local_d8;
        if (!bVar37) {
          uVar20 = local_7c >> 3;
        }
        local_7c = local_7c + uVar20 * -8;
      }
      else {
        uVar20 = local_7c >> 3;
        local_7c = local_7c & 7;
        bVar37 = false;
      }
      local_d8 = local_d8 - uVar20;
      puVar32 = (uint64_t *)((int64_t)puVar31 + local_d8);
      local_68 = *(uint64_t *)((int64_t)puVar31 + local_d8);
      if ((puVar2 + -3 <= puVar28) || (bVar37)) break;
      uVar17 = (local_68 << ((byte)local_7c & 0x3f)) >> bVar19;
      iVar14 = *(byte *)(lVar23 + uVar17 * 2) + local_7c;
      uVar36 = (local_68 << ((byte)iVar14 & 0x3f)) >> bVar19;
      *puVar28 = *(void*)(param_3 + 5 + uVar17 * 2);
      iVar14 = (uint)*(byte *)(lVar23 + uVar36 * 2) + iVar14;
      puVar28[1] = *(void*)(param_3 + 5 + uVar36 * 2);
      uVar36 = (local_68 << ((byte)iVar14 & 0x3f)) >> bVar19;
      iVar14 = (uint)*(byte *)(lVar23 + uVar36 * 2) + iVar14;
      uVar17 = (local_68 << ((byte)iVar14 & 0x3f)) >> bVar19;
      puVar28[2] = *(void*)(param_3 + 5 + uVar36 * 2);
      local_7c = (uint)*(byte *)(lVar23 + uVar17 * 2) + iVar14;
      puVar28[3] = *(void*)(param_3 + 5 + uVar17 * 2);
      puVar28 = puVar28 + 4;
      if (0x40 < local_7c) break;
    } while( true );
  }
LAB_00f0264f:
  if (puVar28 < puVar2) {
    lVar24 = 0;
    do {
      uVar36 = (local_68 << ((byte)local_7c & 0x3f)) >> bVar19;
      local_7c = local_7c + *(byte *)(lVar23 + uVar36 * 2);
      puVar28[lVar24] = *(void*)(param_3 + 5 + uVar36 * 2);
      lVar24 = lVar24 + 1;
    } while ((int64_t)puVar2 - (int64_t)puVar28 != lVar24);
  }
  puVar18 = (uint64_t *)((int64_t)puVar27 + local_c0);
  if ((int64_t)puVar3 - (int64_t)puVar33 < 4) {
    if (local_34 < 0x41) {
      if ((int64_t)local_c0 < 8) {
        if (local_c0 != 0) {
          local_c0 = local_c0 & 0xffffffff;
          if (puVar27 <= (uint64_t *)((int64_t)puVar18 - (uint64_t)(local_34 >> 3))) {
            local_c0 = (uint64_t)(local_34 >> 3);
          }
          puVar18 = (uint64_t *)((int64_t)puVar18 - local_c0);
          local_34 = local_34 + (int)local_c0 * -8;
          local_50 = *puVar18;
        }
      }
      else {
        puVar18 = (uint64_t *)((int64_t)puVar18 - (uint64_t)(local_34 >> 3));
        local_34 = local_34 & 7;
        local_50 = *puVar18;
      }
    }
  }
  else if (local_34 < 0x41) {
    do {
      if ((int64_t)local_c0 < 8) {
        puVar18 = (uint64_t *)((int64_t)puVar27 + local_c0);
        if (local_c0 == 0) break;
        bVar37 = (uint64_t *)((int64_t)puVar18 - (uint64_t)(local_34 >> 3)) < puVar27;
        uVar20 = (uint)local_c0;
        if (!bVar37) {
          uVar20 = local_34 >> 3;
        }
        local_34 = local_34 + uVar20 * -8;
      }
      else {
        uVar20 = local_34 >> 3;
        local_34 = local_34 & 7;
        bVar37 = false;
      }
      local_c0 = local_c0 - uVar20;
      puVar18 = (uint64_t *)((int64_t)puVar27 + local_c0);
      local_50 = *(uint64_t *)((int64_t)puVar27 + local_c0);
      if ((puVar3 + -3 <= puVar33) || (bVar37)) break;
      uVar36 = (local_50 << ((byte)local_34 & 0x3f)) >> bVar19;
      iVar14 = *(byte *)(lVar23 + uVar36 * 2) + local_34;
      uVar17 = (local_50 << ((byte)iVar14 & 0x3f)) >> bVar19;
      *puVar33 = *(void*)(param_3 + 5 + uVar36 * 2);
      iVar14 = (uint)*(byte *)(lVar23 + uVar17 * 2) + iVar14;
      puVar33[1] = *(void*)(param_3 + 5 + uVar17 * 2);
      uVar36 = (local_50 << ((byte)iVar14 & 0x3f)) >> bVar19;
      iVar14 = (uint)*(byte *)(lVar23 + uVar36 * 2) + iVar14;
      uVar17 = (local_50 << ((byte)iVar14 & 0x3f)) >> bVar19;
      puVar33[2] = *(void*)(param_3 + 5 + uVar36 * 2);
      local_34 = (uint)*(byte *)(lVar23 + uVar17 * 2) + iVar14;
      puVar33[3] = *(void*)(param_3 + 5 + uVar17 * 2);
      puVar33 = puVar33 + 4;
      if (0x40 < local_34) break;
    } while( true );
  }
  if (puVar33 < puVar3) {
    lVar24 = 0;
    do {
      uVar36 = (local_50 << ((byte)local_34 & 0x3f)) >> bVar19;
      local_34 = local_34 + *(byte *)(lVar23 + uVar36 * 2);
      puVar33[lVar24] = *(void*)(param_3 + 5 + uVar36 * 2);
      lVar24 = lVar24 + 1;
    } while ((int64_t)puVar3 - (int64_t)puVar33 != lVar24);
  }
  puVar29 = (uint64_t *)((int64_t)puVar16 + local_60);
  if ((int64_t)puVar35 - (int64_t)local_a8 < 4) {
    if (local_38 < 0x41) {
      if ((int64_t)local_60 < 8) {
        if (local_60 == 0) goto LAB_00f02a0f;
        local_60 = local_60 & 0xffffffff;
        if (puVar16 <= (uint64_t *)((int64_t)puVar29 - (uint64_t)(local_38 >> 3))) {
          local_60 = (uint64_t)(local_38 >> 3);
        }
        local_38 = local_38 + (int)local_60 * -8;
      }
      else {
        local_60 = (uint64_t)(local_38 >> 3);
        local_38 = local_38 & 7;
      }
      puVar29 = (uint64_t *)((int64_t)puVar29 - local_60);
      local_88 = *puVar29;
    }
  }
  else if (local_38 < 0x41) {
    do {
      if ((int64_t)local_60 < 8) {
        puVar29 = (uint64_t *)((int64_t)puVar16 + local_60);
        if (local_60 == 0) break;
        bVar37 = (uint64_t *)((int64_t)puVar29 - (uint64_t)(local_38 >> 3)) < puVar16;
        uVar20 = (uint)local_60;
        if (!bVar37) {
          uVar20 = local_38 >> 3;
        }
        local_38 = local_38 + uVar20 * -8;
      }
      else {
        uVar20 = local_38 >> 3;
        local_38 = local_38 & 7;
        bVar37 = false;
      }
      local_60 = local_60 - uVar20;
      puVar29 = (uint64_t *)((int64_t)puVar16 + local_60);
      local_88 = *(uint64_t *)((int64_t)puVar16 + local_60);
      if ((puVar21 <= local_a8) || (bVar37)) break;
      uVar36 = (local_88 << ((byte)local_38 & 0x3f)) >> bVar19;
      iVar14 = *(byte *)(lVar23 + uVar36 * 2) + local_38;
      uVar17 = (local_88 << ((byte)iVar14 & 0x3f)) >> bVar19;
      *local_a8 = *(void*)(param_3 + 5 + uVar36 * 2);
      iVar14 = (uint)*(byte *)(lVar23 + uVar17 * 2) + iVar14;
      local_a8[1] = *(void*)(param_3 + 5 + uVar17 * 2);
      uVar36 = (local_88 << ((byte)iVar14 & 0x3f)) >> bVar19;
      iVar14 = (uint)*(byte *)(lVar23 + uVar36 * 2) + iVar14;
      uVar17 = (local_88 << ((byte)iVar14 & 0x3f)) >> bVar19;
      local_a8[2] = *(void*)(param_3 + 5 + uVar36 * 2);
      local_38 = (uint)*(byte *)(lVar23 + uVar17 * 2) + iVar14;
      local_a8[3] = *(void*)(param_3 + 5 + uVar17 * 2);
      local_a8 = local_a8 + 4;
      if (0x40 < local_38) break;
    } while( true );
  }
LAB_00f02a0f:
  if (local_a8 < puVar35) {
    lVar24 = 0;
    do {
      uVar36 = (local_88 << ((byte)local_38 & 0x3f)) >> bVar19;
      local_38 = local_38 + *(byte *)(lVar23 + uVar36 * 2);
      local_a8[lVar24] = *(void*)(param_3 + 5 + uVar36 * 2);
      lVar24 = lVar24 + 1;
    } while ((int64_t)puVar35 - (int64_t)local_a8 != lVar24);
  }
  if (local_38 != 0x40) {
    arg1 = 0xffffffffffffffec;
  }
  if (puVar29 != puVar16) {
    arg1 = 0xffffffffffffffec;
  }
  if (local_34 != 0x40) {
    arg1 = 0xffffffffffffffec;
  }
  if (puVar18 != puVar27) {
    arg1 = 0xffffffffffffffec;
  }
  if (local_7c != 0x40) {
    arg1 = 0xffffffffffffffec;
  }
  if (puVar32 != puVar31) {
    arg1 = 0xffffffffffffffec;
  }
  if (local_44 != 0x40) {
    arg1 = 0xffffffffffffffec;
  }
  if (local_58 != 6) {
    return 0xffffffffffffffec;
  }
  return arg1;
}

