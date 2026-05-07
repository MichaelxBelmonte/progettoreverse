// Function: FUN_00f03899
// Address: 00f03899
// Size: 7545 bytes
// Class: Unknown

uint64_t FUN_00f03899(uint64_t param_1,ushort *param_2,uint *param_3)

{
  ushort *puVar1;
  void*puVar2;
  void*puVar3;
  void*puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  int64_t lVar12;
  int64_t lVar13;
  uint uVar14;
  uint64_t uVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  char cVar19;
  uint64_t uVar20;
  int64_t lVar21;
  void*puVar22;
  void*puVar23;
  uint64_t uVar24;
  uint uVar25;
  uint64_t arg1;
  uint64_t uVar26;
  void*this_ptr;
  byte *pbVar27;
  void*puVar28;
  uint uVar29;
  uint uVar30;
  byte *pbVar31;
  uint uVar32;
  byte *pbVar33;
  uint64_t uVar34;
  void*puVar35;
  uint uVar36;
  byte *pbVar37;
  uint uVar38;
  uint uVar39;
  byte *pbVar40;
  uint64_t uVar41;
  bool bVar42;
  int64_t local_f8;
  int64_t local_d0;
  uint64_t local_c8;
  int64_t local_a0;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_80;
  uint64_t local_78;
  uint64_t local_68;
  int64_t local_58;
  void*local_48;
  byte *local_40;
  void*local_38;
  
  if (param_1 < 10) {
    return 0xffffffffffffffec;
  }
  uVar9 = *param_2;
  uVar41 = (uint64_t)uVar9;
  uVar10 = param_2[1];
  uVar24 = (uint64_t)uVar10;
  uVar11 = param_2[2];
  uVar26 = (uint64_t)uVar11;
  uVar15 = uVar24 + uVar41 + uVar26 + 6;
  uVar20 = param_1 - uVar15;
  if (param_1 < uVar15) {
    return 0xffffffffffffffec;
  }
  puVar2 = (void*)((int64_t)this_ptr + arg1);
  uVar15 = arg1 + 3 >> 2;
  puVar3 = (void*)((int64_t)this_ptr + uVar15);
  puVar4 = (void*)((int64_t)puVar3 + uVar15);
  puVar22 = (void*)(uVar15 + (int64_t)puVar4);
  if (puVar2 < puVar22) {
    return 0xffffffffffffffec;
  }
  if (arg1 < 6) {
    return 0xffffffffffffffec;
  }
  if (uVar41 == 0) {
    return 0xffffffffffffffb8;
  }
  puVar1 = param_2 + 3;
  uVar30 = *param_3;
  if (uVar9 < 8) {
    local_40 = (byte *)(uint64_t)(byte)*puVar1;
    switch(uVar9) {
    case 7:
      local_40 = (byte *)((uint64_t)local_40 | (uint64_t)(byte)param_2[6] << 0x30);
    case 6:
      local_40 = (byte *)((int64_t)local_40 +
                         ((uint64_t)*(byte *)((int64_t)param_2 + 0xb) << 0x28));
    case 5:
      local_40 = (byte *)((int64_t)local_40 + ((uint64_t)(byte)param_2[5] << 0x20));
    case 4:
      local_40 = (byte *)((int64_t)local_40 +
                         (uint64_t)*(byte *)((int64_t)param_2 + 9) * 0x1000000);
    case 3:
      local_40 = (byte *)((int64_t)local_40 + (uint64_t)(byte)param_2[4] * 0x10000);
    case 2:
      local_40 = (byte *)((int64_t)local_40 + (uint64_t)*(byte *)((int64_t)param_2 + 7) * 0x100);
    }
    bVar5 = *(byte *)((uVar41 - 1) + (int64_t)puVar1);
    if (bVar5 == 0) {
      return 0xffffffffffffffec;
    }
    uVar36 = LZCOUNT((uint)bVar5) + (uint)uVar9 * -8 + 0x29;
    local_38 = (void*)0x6;
  }
  else {
    bVar5 = *(byte *)((uVar41 - 1) + (int64_t)puVar1);
    if (bVar5 == 0) {
      return 0xffffffffffffffff;
    }
    local_38 = (void*)(uVar41 - 2);
    local_40 = *(byte **)((int64_t)param_2 + (int64_t)local_38);
    uVar36 = LZCOUNT((uint)bVar5) - 0x17;
  }
  local_c8 = (uint64_t)uVar36;
  if (uVar24 == 0) {
    return 0xffffffffffffffb8;
  }
  pbVar33 = (byte *)((int64_t)param_2 + uVar41 + 6);
  if (uVar10 < 8) {
    local_80 = (uint64_t)*pbVar33;
    switch(uVar10) {
    case 7:
      local_80 = local_80 | (uint64_t)*(byte *)((int64_t)param_2 + uVar41 + 0xc) << 0x30;
    case 6:
      local_80 = local_80 + ((uint64_t)*(byte *)((int64_t)param_2 + uVar41 + 0xb) << 0x28);
    case 5:
      local_80 = local_80 + ((uint64_t)*(byte *)((int64_t)param_2 + uVar41 + 10) << 0x20);
    case 4:
      local_80 = local_80 + (uint64_t)*(byte *)((int64_t)param_2 + uVar41 + 9) * 0x1000000;
    case 3:
      local_80 = local_80 + (uint64_t)*(byte *)((int64_t)param_2 + uVar41 + 8) * 0x10000;
    case 2:
      local_80 = local_80 + (uint64_t)*(byte *)((int64_t)param_2 + uVar41 + 7) * 0x100;
    }
    if (pbVar33[uVar24 - 1] == 0) {
      return 0xffffffffffffffec;
    }
    uVar36 = LZCOUNT((uint)pbVar33[uVar24 - 1]) + (uint)uVar10 * -8 + 0x29;
    local_58 = 0;
  }
  else {
    if (pbVar33[uVar24 - 1] == 0) {
      return 0xffffffffffffffff;
    }
    local_58 = uVar24 - 8;
    local_80 = *(uint64_t *)(pbVar33 + local_58);
    uVar36 = LZCOUNT((uint)pbVar33[uVar24 - 1]) - 0x17;
  }
  local_68 = (uint64_t)uVar36;
  if (uVar26 == 0) {
    return 0xffffffffffffffb8;
  }
  pbVar27 = pbVar33 + uVar24;
  if (uVar11 < 8) {
    local_78 = (uint64_t)*pbVar27;
    switch(uVar11) {
    case 7:
      local_78 = local_78 | (uint64_t)pbVar27[6] << 0x30;
    case 6:
      local_78 = local_78 + ((uint64_t)pbVar27[5] << 0x28);
    case 5:
      local_78 = local_78 + ((uint64_t)pbVar27[4] << 0x20);
    case 4:
      local_78 = local_78 + (uint64_t)pbVar27[3] * 0x1000000;
    case 3:
      local_78 = local_78 + (uint64_t)pbVar27[2] * 0x10000;
    case 2:
      local_78 = local_78 + (uint64_t)pbVar27[1] * 0x100;
    }
    if (pbVar27[uVar26 - 1] == 0) {
      return 0xffffffffffffffec;
    }
    uVar36 = LZCOUNT((uint)pbVar27[uVar26 - 1]) + (uint)uVar11 * -8 + 0x29;
    local_a0 = 0;
  }
  else {
    if (pbVar27[uVar26 - 1] == 0) {
      return 0xffffffffffffffff;
    }
    local_a0 = uVar26 - 8;
    local_78 = *(uint64_t *)(pbVar27 + local_a0);
    uVar36 = LZCOUNT((uint)pbVar27[uVar26 - 1]) - 0x17;
  }
  local_88 = (uint64_t)uVar36;
  if (uVar20 == 0) {
    return 0xffffffffffffffb8;
  }
  pbVar40 = pbVar27 + uVar26;
  if (uVar20 < 8) {
    local_90 = (uint64_t)*pbVar40;
    switch(uVar20) {
    case 7:
      local_90 = local_90 | (uint64_t)pbVar40[6] << 0x30;
    case 6:
      local_90 = local_90 + ((uint64_t)pbVar40[5] << 0x28);
    case 5:
      local_90 = local_90 + ((uint64_t)pbVar40[4] << 0x20);
    case 4:
      local_90 = local_90 + (uint64_t)pbVar40[3] * 0x1000000;
    case 3:
      local_90 = local_90 + (uint64_t)pbVar40[2] * 0x10000;
    case 2:
      local_90 = local_90 + (uint64_t)pbVar40[1] * 0x100;
    }
    if (pbVar40[uVar20 - 1] == 0) {
      return 0xffffffffffffffec;
    }
    uVar36 = LZCOUNT((uint)pbVar40[uVar20 - 1]) + (int)uVar20 * -8 + 0x29;
    lVar21 = 0;
  }
  else {
    if (pbVar40[uVar20 - 1] == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < uVar20) {
      return uVar20;
    }
    local_90 = *(uint64_t *)(pbVar40 + (uVar20 - 8));
    lVar21 = uVar20 - 8;
    uVar36 = LZCOUNT((uint)pbVar40[uVar20 - 1]) - 0x17;
  }
  uVar15 = (uint64_t)uVar36;
  puVar23 = (void*)((int64_t)this_ptr + (arg1 - 7));
  uVar36 = uVar30 >> 0x10;
  lVar16 = local_a0;
  puVar28 = puVar4;
  puVar35 = puVar3;
  local_48 = puVar22;
  if ((7 < (uint64_t)((int64_t)puVar2 - (int64_t)puVar22)) && (puVar22 < puVar23)) {
    uVar29 = -uVar36 & 0x3f;
    bVar5 = 1;
    lVar17 = lVar21;
    do {
      uVar20 = (uint64_t)((int64_t)local_40 << (local_c8 & 0x3f)) >> uVar29;
      *this_ptr = (short)param_3[uVar20 + 1];
      uVar14 = (uint)*(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + (int)local_c8;
      uVar24 = (uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7);
      uVar20 = (uint64_t)((int64_t)local_40 << ((uint64_t)uVar14 & 0x3f)) >> uVar29;
      *(short *)((int64_t)this_ptr + uVar24) = (short)param_3[uVar20 + 1];
      uVar14 = *(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + uVar14;
      uVar41 = (uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7);
      lVar18 = uVar41 + uVar24;
      uVar20 = (uint64_t)((int64_t)local_40 << ((uint64_t)uVar14 & 0x3f)) >> uVar29;
      *(short *)((int64_t)this_ptr + uVar41 + uVar24) = (short)param_3[uVar20 + 1];
      uVar14 = *(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + uVar14;
      uVar24 = (uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7);
      uVar20 = (uint64_t)((int64_t)local_40 << ((uint64_t)uVar14 & 0x3f)) >> uVar29;
      *(short *)((int64_t)this_ptr + uVar24 + lVar18) = (short)param_3[uVar20 + 1];
      uVar14 = *(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + uVar14;
      bVar6 = *(byte *)((int64_t)param_3 + uVar20 * 4 + 7);
      uVar20 = (local_80 << (local_68 & 0x3f)) >> uVar29;
      *puVar35 = (short)param_3[uVar20 + 1];
      uVar38 = (uint)*(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + (int)local_68;
      uVar41 = (uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7);
      uVar20 = (local_80 << ((uint64_t)uVar38 & 0x3f)) >> uVar29;
      *(short *)((int64_t)puVar35 + uVar41) = (short)param_3[uVar20 + 1];
      uVar38 = *(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + uVar38;
      uVar26 = (uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7);
      uVar20 = (local_80 << ((uint64_t)uVar38 & 0x3f)) >> uVar29;
      *(short *)((int64_t)puVar35 + uVar26 + uVar41) = (short)param_3[uVar20 + 1];
      lVar12 = uVar26 + uVar41;
      uVar38 = *(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + uVar38;
      uVar20 = (uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7);
      uVar41 = (local_80 << ((uint64_t)uVar38 & 0x3f)) >> uVar29;
      *(short *)((int64_t)puVar35 + uVar20 + lVar12) = (short)param_3[uVar41 + 1];
      local_d0 = (int64_t)local_38;
      if (0xd < (int64_t)local_38) {
        local_d0 = (int64_t)local_38 - (uint64_t)(uVar14 >> 3);
        uVar14 = uVar14 & 7;
        local_40 = *(byte **)((int64_t)param_2 + local_d0);
      }
      local_c8 = (uint64_t)uVar14;
      uVar38 = uVar38 + *(byte *)((int64_t)param_3 + uVar41 * 4 + 6);
      bVar7 = *(byte *)((int64_t)param_3 + uVar41 * 4 + 7);
      if (local_58 < 8) {
        local_f8 = local_58;
      }
      else {
        local_f8 = local_58 - (uint64_t)(uVar38 >> 3);
        uVar38 = uVar38 & 7;
        local_80 = *(uint64_t *)(pbVar33 + local_f8);
      }
      local_68 = (uint64_t)uVar38;
      uVar41 = (local_78 << (local_88 & 0x3f)) >> uVar29;
      *puVar28 = (short)param_3[uVar41 + 1];
      uVar14 = (uint)*(byte *)((int64_t)param_3 + uVar41 * 4 + 6) + (int)local_88;
      uVar26 = (uint64_t)*(byte *)((int64_t)param_3 + uVar41 * 4 + 7);
      uVar41 = (local_78 << ((uint64_t)uVar14 & 0x3f)) >> uVar29;
      *(short *)((int64_t)puVar28 + uVar26) = (short)param_3[uVar41 + 1];
      uVar14 = *(byte *)((int64_t)param_3 + uVar41 * 4 + 6) + uVar14;
      uVar34 = (uint64_t)*(byte *)((int64_t)param_3 + uVar41 * 4 + 7);
      lVar13 = uVar34 + uVar26;
      uVar41 = (local_78 << ((uint64_t)uVar14 & 0x3f)) >> uVar29;
      *(short *)((int64_t)puVar28 + uVar34 + uVar26) = (short)param_3[uVar41 + 1];
      uVar14 = *(byte *)((int64_t)param_3 + uVar41 * 4 + 6) + uVar14;
      uVar26 = (uint64_t)*(byte *)((int64_t)param_3 + uVar41 * 4 + 7);
      uVar41 = (local_78 << ((uint64_t)uVar14 & 0x3f)) >> uVar29;
      *(short *)((int64_t)puVar28 + uVar26 + lVar13) = (short)param_3[uVar41 + 1];
      uVar14 = *(byte *)((int64_t)param_3 + uVar41 * 4 + 6) + uVar14;
      bVar8 = *(byte *)((int64_t)param_3 + uVar41 * 4 + 7);
      uVar41 = (local_90 << (uVar15 & 0x3f)) >> uVar29;
      *local_48 = (short)param_3[uVar41 + 1];
      uVar38 = (uint)*(byte *)((int64_t)param_3 + uVar41 * 4 + 6) + (int)uVar15;
      uVar34 = (uint64_t)*(byte *)((int64_t)param_3 + uVar41 * 4 + 7);
      uVar15 = (local_90 << ((uint64_t)uVar38 & 0x3f)) >> uVar29;
      *(short *)((int64_t)local_48 + uVar34) = (short)param_3[uVar15 + 1];
      uVar38 = *(byte *)((int64_t)param_3 + uVar15 * 4 + 6) + uVar38;
      uVar41 = (uint64_t)*(byte *)((int64_t)param_3 + uVar15 * 4 + 7);
      uVar15 = (local_90 << ((uint64_t)uVar38 & 0x3f)) >> uVar29;
      *(short *)((int64_t)local_48 + uVar41 + uVar34) = (short)param_3[uVar15 + 1];
      lVar21 = uVar41 + uVar34;
      uVar38 = *(byte *)((int64_t)param_3 + uVar15 * 4 + 6) + uVar38;
      uVar41 = (uint64_t)*(byte *)((int64_t)param_3 + uVar15 * 4 + 7);
      uVar15 = (local_90 << ((uint64_t)uVar38 & 0x3f)) >> uVar29;
      *(short *)((int64_t)local_48 + uVar41 + lVar21) = (short)param_3[uVar15 + 1];
      lVar16 = local_a0;
      if (7 < local_a0) {
        lVar16 = local_a0 - (uint64_t)(uVar14 >> 3);
        uVar14 = uVar14 & 7;
        local_78 = *(uint64_t *)(pbVar27 + lVar16);
      }
      local_88 = (uint64_t)uVar14;
      uVar38 = uVar38 + *(byte *)((int64_t)param_3 + uVar15 * 4 + 6);
      local_48 = (void*)
                 ((int64_t)local_48 +
                 (uint64_t)*(byte *)((int64_t)param_3 + uVar15 * 4 + 7) + uVar41 + lVar21);
      lVar21 = lVar17;
      if (7 < lVar17) {
        lVar21 = lVar17 - (uint64_t)(uVar38 >> 3);
        uVar38 = uVar38 & 7;
        local_90 = *(uint64_t *)(pbVar40 + lVar21);
      }
      uVar15 = (uint64_t)uVar38;
      this_ptr = (void*)((int64_t)this_ptr + (uint64_t)bVar6 + uVar24 + lVar18);
      puVar35 = (void*)((int64_t)puVar35 + (uint64_t)bVar7 + uVar20 + lVar12);
      puVar28 = (void*)((int64_t)puVar28 + (uint64_t)bVar8 + uVar26 + lVar13);
      bVar5 = bVar5 & 7 < lVar17 & ((0xd < (int64_t)local_38 && 7 < local_58) && 7 < local_a0);
      local_58 = local_f8;
      lVar17 = lVar21;
      local_38 = (void*)local_d0;
      local_a0 = lVar16;
    } while ((bool)(bVar5 & local_48 < puVar23));
  }
  if (puVar3 < this_ptr) {
    return 0xffffffffffffffec;
  }
  if (puVar4 < puVar35) {
    return 0xffffffffffffffec;
  }
  if (puVar22 < puVar28) {
    return 0xffffffffffffffec;
  }
  uVar14 = uVar36 & 0xff;
  uVar29 = (uint)local_c8;
  if ((uint64_t)((int64_t)puVar3 - (int64_t)this_ptr) < 8) {
    if (uVar29 < 0x41) {
      if ((int64_t)local_38 < 0xe) {
        if (local_38 == (void*)0x6) {
LAB_00f04609:
          local_38 = (void*)0x6;
          goto LAB_00f0461e;
        }
        uVar20 = (uint64_t)((int)local_38 - 6);
        if (5 < (int64_t)((int64_t)local_38 - (local_c8 >> 3))) {
          uVar20 = local_c8 >> 3;
        }
        uVar29 = uVar29 + (int)uVar20 * -8;
      }
      else {
        uVar20 = local_c8 >> 3;
        uVar29 = uVar29 & 7;
      }
      local_c8 = (uint64_t)uVar29;
      local_38 = (void*)((int64_t)local_38 - uVar20);
      local_40 = *(byte **)((int64_t)param_2 + (int64_t)local_38);
    }
  }
  else if (uVar14 < 0xc) {
    if (uVar29 < 0x41) {
      uVar29 = -uVar36 & 0x3f;
      do {
        if ((int64_t)local_38 < 0xe) {
          if (local_38 == (void*)0x6) goto LAB_00f04609;
          lVar17 = (int64_t)local_38 - (local_c8 >> 3);
          bVar42 = lVar17 < 6;
          uVar20 = (uint64_t)((int)local_38 - 6);
          if (5 < lVar17) {
            uVar20 = local_c8 >> 3;
          }
          uVar38 = (uint)local_c8 + (int)uVar20 * -8;
        }
        else {
          uVar20 = local_c8 >> 3;
          uVar38 = (uint)local_c8 & 7;
          bVar42 = false;
        }
        local_c8 = (uint64_t)uVar38;
        local_38 = (void*)((int64_t)local_38 - uVar20);
        local_40 = *(byte **)((int64_t)param_2 + (int64_t)local_38);
        if (((void*)((int64_t)puVar3 - 9U) <= this_ptr) || (bVar42)) break;
        uVar20 = (uint64_t)((int64_t)local_40 << (local_c8 & 0x3f)) >> uVar29;
        *this_ptr = (short)param_3[uVar20 + 1];
        uVar38 = *(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + uVar38;
        uVar41 = (uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7);
        uVar20 = (uint64_t)((int64_t)local_40 << ((uint64_t)uVar38 & 0x3f)) >> uVar29;
        *(short *)((int64_t)this_ptr + uVar41) = (short)param_3[uVar20 + 1];
        uVar38 = *(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + uVar38;
        uVar20 = (uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7);
        lVar17 = uVar20 + uVar41;
        uVar24 = (uint64_t)((int64_t)local_40 << ((uint64_t)uVar38 & 0x3f)) >> uVar29;
        *(short *)((int64_t)this_ptr + uVar20 + uVar41) = (short)param_3[uVar24 + 1];
        uVar38 = *(byte *)((int64_t)param_3 + uVar24 * 4 + 6) + uVar38;
        uVar20 = (uint64_t)*(byte *)((int64_t)param_3 + uVar24 * 4 + 7);
        lVar18 = uVar20 + lVar17;
        uVar24 = (uint64_t)((int64_t)local_40 << ((uint64_t)uVar38 & 0x3f)) >> uVar29;
        *(short *)((int64_t)this_ptr + uVar20 + lVar17) = (short)param_3[uVar24 + 1];
        uVar38 = *(byte *)((int64_t)param_3 + uVar24 * 4 + 6) + uVar38;
        uVar20 = (uint64_t)*(byte *)((int64_t)param_3 + uVar24 * 4 + 7);
        uVar24 = (uint64_t)((int64_t)local_40 << ((uint64_t)uVar38 & 0x3f)) >> uVar29;
        *(short *)((int64_t)this_ptr + uVar20 + lVar18) = (short)param_3[uVar24 + 1];
        uVar38 = *(byte *)((int64_t)param_3 + uVar24 * 4 + 6) + uVar38;
        local_c8 = (uint64_t)uVar38;
        this_ptr = (void*)
                    ((int64_t)this_ptr +
                    (uint64_t)*(byte *)((int64_t)param_3 + uVar24 * 4 + 7) + uVar20 + lVar18);
      } while (uVar38 < 0x41);
    }
  }
  else if (uVar29 < 0x41) {
    uVar29 = -uVar36 & 0x3f;
    do {
      if ((int64_t)local_38 < 0xe) {
        if (local_38 == (void*)0x6) goto LAB_00f04609;
        lVar17 = (int64_t)local_38 - (local_c8 >> 3);
        bVar42 = lVar17 < 6;
        uVar20 = (uint64_t)((int)local_38 - 6);
        if (5 < lVar17) {
          uVar20 = local_c8 >> 3;
        }
        uVar38 = (uint)local_c8 + (int)uVar20 * -8;
      }
      else {
        uVar20 = local_c8 >> 3;
        uVar38 = (uint)local_c8 & 7;
        bVar42 = false;
      }
      local_c8 = (uint64_t)uVar38;
      local_38 = (void*)((int64_t)local_38 - uVar20);
      local_40 = *(byte **)((int64_t)param_2 + (int64_t)local_38);
      if (((void*)((int64_t)puVar3 - 7U) <= this_ptr) || (bVar42)) break;
      uVar20 = (uint64_t)((int64_t)local_40 << (local_c8 & 0x3f)) >> uVar29;
      *this_ptr = (short)param_3[uVar20 + 1];
      uVar38 = *(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + uVar38;
      uVar41 = (uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7);
      uVar20 = (uint64_t)((int64_t)local_40 << ((uint64_t)uVar38 & 0x3f)) >> uVar29;
      *(short *)((int64_t)this_ptr + uVar41) = (short)param_3[uVar20 + 1];
      uVar38 = *(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + uVar38;
      uVar20 = (uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7);
      lVar17 = uVar20 + uVar41;
      uVar24 = (uint64_t)((int64_t)local_40 << ((uint64_t)uVar38 & 0x3f)) >> uVar29;
      *(short *)((int64_t)this_ptr + uVar20 + uVar41) = (short)param_3[uVar24 + 1];
      uVar38 = *(byte *)((int64_t)param_3 + uVar24 * 4 + 6) + uVar38;
      uVar20 = (uint64_t)*(byte *)((int64_t)param_3 + uVar24 * 4 + 7);
      uVar24 = (uint64_t)((int64_t)local_40 << ((uint64_t)uVar38 & 0x3f)) >> uVar29;
      *(short *)((int64_t)this_ptr + uVar20 + lVar17) = (short)param_3[uVar24 + 1];
      uVar38 = *(byte *)((int64_t)param_3 + uVar24 * 4 + 6) + uVar38;
      local_c8 = (uint64_t)uVar38;
      this_ptr = (void*)
                  ((int64_t)this_ptr +
                  (uint64_t)*(byte *)((int64_t)param_3 + uVar24 * 4 + 7) + uVar20 + lVar17);
    } while (uVar38 < 0x41);
  }
LAB_00f0461e:
  lVar17 = (int64_t)local_38;
  if (1 < (uint64_t)((int64_t)puVar3 - (int64_t)this_ptr)) {
    while (uVar29 = (uint)local_c8, lVar17 = (int64_t)local_38, uVar29 < 0x41) {
      if ((int64_t)local_38 < 0xe) {
        if (local_38 == (void*)0x6) {
          lVar17 = 6;
          break;
        }
        lVar17 = (int64_t)local_38 - (local_c8 >> 3);
        bVar42 = lVar17 < 6;
        uVar38 = (int)local_38 - 6;
        if (5 < lVar17) {
          uVar38 = (uint)(local_c8 >> 3);
        }
        uVar29 = uVar29 + uVar38 * -8;
      }
      else {
        uVar38 = (uint)(local_c8 >> 3);
        uVar29 = uVar29 & 7;
        bVar42 = false;
      }
      local_c8 = (uint64_t)uVar29;
      local_38 = (void*)((int64_t)local_38 - (uint64_t)uVar38);
      local_40 = *(byte **)((int64_t)param_2 + (int64_t)local_38);
      lVar17 = (int64_t)local_38;
      if ((puVar3 + -1 < this_ptr) || (bVar42)) break;
      uVar20 = (uint64_t)((int64_t)local_40 << (local_c8 & 0x3f)) >> (-uVar36 & 0x3f);
      *this_ptr = (short)param_3[uVar20 + 1];
      this_ptr = (void*)
                  ((int64_t)this_ptr + (uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7));
      local_c8 = (uint64_t)(*(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + uVar29);
    }
    for (; this_ptr <= puVar3 + -1;
        this_ptr = (void*)
                    ((uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7) + (int64_t)this_ptr)
        ) {
      uVar20 = (uint64_t)((int64_t)local_40 << (local_c8 & 0x3f)) >> (-uVar36 & 0x3f);
      *this_ptr = (short)param_3[uVar20 + 1];
      local_c8 = (uint64_t)((uint)*(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + (int)local_c8);
    }
  }
  uVar29 = (uint)local_c8;
  cVar19 = (char)(uVar30 >> 0x10);
  if (this_ptr < puVar3) {
    uVar20 = (uint64_t)((int64_t)local_40 << (local_c8 & 0x3f)) >>
             ((uint64_t)(byte)-cVar19 & 0x3f);
    *(char *)this_ptr = (char)param_3[uVar20 + 1];
    if (*(char *)((int64_t)param_3 + uVar20 * 4 + 7) == '\x01') {
      uVar29 = uVar29 + *(byte *)((int64_t)param_3 + uVar20 * 4 + 6);
    }
    else if (uVar29 < 0x40) {
      uVar30 = uVar29 + *(byte *)((int64_t)param_3 + uVar20 * 4 + 6);
      uVar29 = 0x40;
      if (uVar30 < 0x40) {
        uVar29 = uVar30;
      }
    }
  }
  uVar30 = (uint)local_68;
  local_38 = puVar35;
  if ((uint64_t)((int64_t)puVar4 - (int64_t)puVar35) < 8) {
    if (uVar30 < 0x41) {
      if (local_58 < 8) {
        if (local_58 == 0) {
LAB_00f04ac7:
          local_58 = 0;
          goto LAB_00f04ad2;
        }
        uVar38 = (uint)local_58;
        if (-1 < (int64_t)(local_58 - (local_68 >> 3))) {
          uVar38 = (uint)(local_68 >> 3);
        }
        uVar30 = uVar30 + uVar38 * -8;
      }
      else {
        uVar38 = (uint)(local_68 >> 3);
        uVar30 = uVar30 & 7;
      }
      local_68 = (uint64_t)uVar30;
      local_58 = local_58 - (uint64_t)uVar38;
      local_80 = *(uint64_t *)(pbVar33 + local_58);
    }
  }
  else if (uVar14 < 0xc) {
    if (uVar30 < 0x41) {
      uVar30 = -uVar36 & 0x3f;
      do {
        if (local_58 < 8) {
          if (local_58 == 0) goto LAB_00f04ac7;
          lVar18 = local_58 - (local_68 >> 3);
          uVar38 = (uint)local_58;
          if (-1 < lVar18) {
            uVar38 = (uint)(local_68 >> 3);
          }
          uVar25 = (uint)((uint64_t)lVar18 >> 0x3f);
          uVar39 = (uint)local_68 + uVar38 * -8;
        }
        else {
          uVar38 = (uint)(local_68 >> 3);
          uVar39 = (uint)local_68 & 7;
          uVar25 = 0;
        }
        local_68 = (uint64_t)uVar39;
        local_58 = local_58 - (uint64_t)uVar38;
        local_80 = *(uint64_t *)(pbVar33 + local_58);
        if (((void*)((int64_t)puVar4 - 9U) <= local_38) || (uVar25 != 0)) break;
        uVar20 = (local_80 << (local_68 & 0x3f)) >> uVar30;
        *local_38 = (short)param_3[uVar20 + 1];
        uVar39 = *(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + uVar39;
        uVar20 = (uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7);
        uVar24 = (local_80 << ((uint64_t)uVar39 & 0x3f)) >> uVar30;
        *(short *)((int64_t)local_38 + uVar20) = (short)param_3[uVar24 + 1];
        uVar39 = *(byte *)((int64_t)param_3 + uVar24 * 4 + 6) + uVar39;
        uVar24 = (uint64_t)*(byte *)((int64_t)param_3 + uVar24 * 4 + 7);
        lVar18 = uVar24 + uVar20;
        uVar41 = (local_80 << ((uint64_t)uVar39 & 0x3f)) >> uVar30;
        *(short *)((int64_t)local_38 + uVar24 + uVar20) = (short)param_3[uVar41 + 1];
        uVar39 = *(byte *)((int64_t)param_3 + uVar41 * 4 + 6) + uVar39;
        uVar20 = (uint64_t)*(byte *)((int64_t)param_3 + uVar41 * 4 + 7);
        lVar12 = uVar20 + lVar18;
        uVar24 = (local_80 << ((uint64_t)uVar39 & 0x3f)) >> uVar30;
        *(short *)((int64_t)local_38 + uVar20 + lVar18) = (short)param_3[uVar24 + 1];
        uVar39 = *(byte *)((int64_t)param_3 + uVar24 * 4 + 6) + uVar39;
        uVar20 = (uint64_t)*(byte *)((int64_t)param_3 + uVar24 * 4 + 7);
        uVar24 = (local_80 << ((uint64_t)uVar39 & 0x3f)) >> uVar30;
        *(short *)((int64_t)local_38 + uVar20 + lVar12) = (short)param_3[uVar24 + 1];
        uVar39 = *(byte *)((int64_t)param_3 + uVar24 * 4 + 6) + uVar39;
        local_68 = (uint64_t)uVar39;
        local_38 = (void*)
                   ((int64_t)local_38 +
                   (uint64_t)*(byte *)((int64_t)param_3 + uVar24 * 4 + 7) + uVar20 + lVar12);
      } while (uVar39 < 0x41);
    }
  }
  else if (uVar30 < 0x41) {
    uVar30 = -uVar36 & 0x3f;
    do {
      if (local_58 < 8) {
        if (local_58 == 0) goto LAB_00f04ac7;
        lVar18 = local_58 - (local_68 >> 3);
        uVar38 = (uint)local_58;
        if (-1 < lVar18) {
          uVar38 = (uint)(local_68 >> 3);
        }
        uVar25 = (uint)((uint64_t)lVar18 >> 0x3f);
        uVar39 = (uint)local_68 + uVar38 * -8;
      }
      else {
        uVar38 = (uint)(local_68 >> 3);
        uVar39 = (uint)local_68 & 7;
        uVar25 = 0;
      }
      local_68 = (uint64_t)uVar39;
      local_58 = local_58 - (uint64_t)uVar38;
      local_80 = *(uint64_t *)(pbVar33 + local_58);
      if (((void*)((int64_t)puVar4 - 7U) <= local_38) || (uVar25 != 0)) break;
      uVar20 = (local_80 << (local_68 & 0x3f)) >> uVar30;
      *local_38 = (short)param_3[uVar20 + 1];
      uVar39 = *(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + uVar39;
      uVar20 = (uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7);
      uVar24 = (local_80 << ((uint64_t)uVar39 & 0x3f)) >> uVar30;
      *(short *)((int64_t)local_38 + uVar20) = (short)param_3[uVar24 + 1];
      uVar39 = *(byte *)((int64_t)param_3 + uVar24 * 4 + 6) + uVar39;
      uVar24 = (uint64_t)*(byte *)((int64_t)param_3 + uVar24 * 4 + 7);
      lVar18 = uVar24 + uVar20;
      uVar41 = (local_80 << ((uint64_t)uVar39 & 0x3f)) >> uVar30;
      *(short *)((int64_t)local_38 + uVar24 + uVar20) = (short)param_3[uVar41 + 1];
      uVar39 = *(byte *)((int64_t)param_3 + uVar41 * 4 + 6) + uVar39;
      uVar20 = (uint64_t)*(byte *)((int64_t)param_3 + uVar41 * 4 + 7);
      uVar24 = (local_80 << ((uint64_t)uVar39 & 0x3f)) >> uVar30;
      *(short *)((int64_t)local_38 + uVar20 + lVar18) = (short)param_3[uVar24 + 1];
      uVar39 = *(byte *)((int64_t)param_3 + uVar24 * 4 + 6) + uVar39;
      local_68 = (uint64_t)uVar39;
      local_38 = (void*)
                 ((int64_t)local_38 +
                 (uint64_t)*(byte *)((int64_t)param_3 + uVar24 * 4 + 7) + uVar20 + lVar18);
    } while (uVar39 < 0x41);
  }
LAB_00f04ad2:
  local_40 = pbVar33 + local_58;
  if (1 < (uint64_t)((int64_t)puVar4 - (int64_t)local_38)) {
    if ((uint)local_68 < 0x41) {
      do {
        if (local_58 < 8) {
          if (local_58 == 0) break;
          bVar42 = local_40 + -(local_68 >> 3) < pbVar33;
          uVar30 = (uint)local_58;
          if (!bVar42) {
            uVar30 = (uint)(local_68 >> 3);
          }
          uVar38 = (uint)local_68 + uVar30 * -8;
        }
        else {
          uVar30 = (uint)(local_68 >> 3);
          uVar38 = (uint)local_68 & 7;
          bVar42 = false;
        }
        local_68 = (uint64_t)uVar38;
        local_58 = local_58 - (uint64_t)uVar30;
        local_40 = pbVar33 + local_58;
        local_80 = *(uint64_t *)(pbVar33 + local_58);
        if ((puVar4 + -1 < local_38) || (bVar42)) break;
        uVar20 = (local_80 << (local_68 & 0x3f)) >> (-uVar36 & 0x3f);
        *local_38 = (short)param_3[uVar20 + 1];
        uVar38 = *(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + uVar38;
        local_68 = (uint64_t)uVar38;
        local_38 = (void*)
                   ((int64_t)local_38 + (uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7));
        if (0x40 < uVar38) break;
      } while( true );
    }
    for (; local_38 <= puVar4 + -1;
        local_38 = (void*)
                   ((uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7) + (int64_t)local_38))
    {
      uVar20 = (local_80 << (local_68 & 0x3f)) >> (-uVar36 & 0x3f);
      *local_38 = (short)param_3[uVar20 + 1];
      local_68 = (uint64_t)((uint)*(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + (int)local_68);
    }
  }
  uVar30 = (uint)local_68;
  if (local_38 < puVar4) {
    uVar20 = (local_80 << (local_68 & 0x3f)) >> ((uint64_t)(byte)-cVar19 & 0x3f);
    *(char *)local_38 = (char)param_3[uVar20 + 1];
    if (*(char *)((int64_t)param_3 + uVar20 * 4 + 7) == '\x01') {
      uVar30 = uVar30 + *(byte *)((int64_t)param_3 + uVar20 * 4 + 6);
    }
    else if (uVar30 < 0x40) {
      uVar38 = uVar30 + *(byte *)((int64_t)param_3 + uVar20 * 4 + 6);
      uVar30 = 0x40;
      if (uVar38 < 0x40) {
        uVar30 = uVar38;
      }
    }
  }
  uVar38 = (uint)local_88;
  if ((uint64_t)((int64_t)puVar22 - (int64_t)puVar28) < 8) {
    if (uVar38 < 0x41) {
      if (lVar16 < 8) {
        if (lVar16 == 0) {
LAB_00f04f65:
          lVar16 = 0;
          goto LAB_00f04f68;
        }
        uVar25 = (uint)lVar16;
        if (-1 < (int64_t)(lVar16 - (local_88 >> 3))) {
          uVar25 = (uint)(local_88 >> 3);
        }
        uVar38 = uVar38 + uVar25 * -8;
      }
      else {
        uVar25 = (uint)(local_88 >> 3);
        uVar38 = uVar38 & 7;
      }
      local_88 = (uint64_t)uVar38;
      lVar16 = lVar16 - (uint64_t)uVar25;
      local_78 = *(uint64_t *)(pbVar27 + lVar16);
    }
  }
  else if (uVar14 < 0xc) {
    if (uVar38 < 0x41) {
      uVar38 = -uVar36 & 0x3f;
      do {
        if (lVar16 < 8) {
          if (lVar16 == 0) goto LAB_00f04f65;
          lVar18 = lVar16 - (local_88 >> 3);
          uVar25 = (uint)lVar16;
          if (-1 < lVar18) {
            uVar25 = (uint)(local_88 >> 3);
          }
          uVar39 = (uint)((uint64_t)lVar18 >> 0x3f);
          uVar32 = (uint)local_88 + uVar25 * -8;
        }
        else {
          uVar25 = (uint)(local_88 >> 3);
          uVar32 = (uint)local_88 & 7;
          uVar39 = 0;
        }
        local_88 = (uint64_t)uVar32;
        lVar16 = lVar16 - (uint64_t)uVar25;
        local_78 = *(uint64_t *)(pbVar27 + lVar16);
        if (((void*)((int64_t)puVar22 - 9U) <= puVar28) || (uVar39 != 0)) break;
        uVar20 = (local_78 << (local_88 & 0x3f)) >> uVar38;
        *puVar28 = (short)param_3[uVar20 + 1];
        uVar32 = *(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + uVar32;
        uVar20 = (uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7);
        uVar24 = (local_78 << ((uint64_t)uVar32 & 0x3f)) >> uVar38;
        *(short *)((int64_t)puVar28 + uVar20) = (short)param_3[uVar24 + 1];
        uVar32 = *(byte *)((int64_t)param_3 + uVar24 * 4 + 6) + uVar32;
        uVar24 = (uint64_t)*(byte *)((int64_t)param_3 + uVar24 * 4 + 7);
        lVar18 = uVar24 + uVar20;
        uVar41 = (local_78 << ((uint64_t)uVar32 & 0x3f)) >> uVar38;
        *(short *)((int64_t)puVar28 + uVar24 + uVar20) = (short)param_3[uVar41 + 1];
        uVar32 = *(byte *)((int64_t)param_3 + uVar41 * 4 + 6) + uVar32;
        uVar20 = (uint64_t)*(byte *)((int64_t)param_3 + uVar41 * 4 + 7);
        lVar12 = uVar20 + lVar18;
        uVar24 = (local_78 << ((uint64_t)uVar32 & 0x3f)) >> uVar38;
        *(short *)((int64_t)puVar28 + uVar20 + lVar18) = (short)param_3[uVar24 + 1];
        uVar32 = *(byte *)((int64_t)param_3 + uVar24 * 4 + 6) + uVar32;
        uVar20 = (uint64_t)*(byte *)((int64_t)param_3 + uVar24 * 4 + 7);
        uVar24 = (local_78 << ((uint64_t)uVar32 & 0x3f)) >> uVar38;
        *(short *)((int64_t)puVar28 + uVar20 + lVar12) = (short)param_3[uVar24 + 1];
        uVar32 = *(byte *)((int64_t)param_3 + uVar24 * 4 + 6) + uVar32;
        local_88 = (uint64_t)uVar32;
        puVar28 = (void*)
                  ((int64_t)puVar28 +
                  (uint64_t)*(byte *)((int64_t)param_3 + uVar24 * 4 + 7) + uVar20 + lVar12);
      } while (uVar32 < 0x41);
    }
  }
  else if (uVar38 < 0x41) {
    uVar38 = -uVar36 & 0x3f;
    do {
      if (lVar16 < 8) {
        if (lVar16 == 0) goto LAB_00f04f65;
        lVar18 = lVar16 - (local_88 >> 3);
        uVar25 = (uint)lVar16;
        if (-1 < lVar18) {
          uVar25 = (uint)(local_88 >> 3);
        }
        uVar39 = (uint)((uint64_t)lVar18 >> 0x3f);
        uVar32 = (uint)local_88 + uVar25 * -8;
      }
      else {
        uVar25 = (uint)(local_88 >> 3);
        uVar32 = (uint)local_88 & 7;
        uVar39 = 0;
      }
      local_88 = (uint64_t)uVar32;
      lVar16 = lVar16 - (uint64_t)uVar25;
      local_78 = *(uint64_t *)(pbVar27 + lVar16);
      if (((void*)((int64_t)puVar22 - 7U) <= puVar28) || (uVar39 != 0)) break;
      uVar20 = (local_78 << (local_88 & 0x3f)) >> uVar38;
      *puVar28 = (short)param_3[uVar20 + 1];
      uVar32 = *(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + uVar32;
      uVar20 = (uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7);
      uVar24 = (local_78 << ((uint64_t)uVar32 & 0x3f)) >> uVar38;
      *(short *)((int64_t)puVar28 + uVar20) = (short)param_3[uVar24 + 1];
      uVar32 = *(byte *)((int64_t)param_3 + uVar24 * 4 + 6) + uVar32;
      uVar24 = (uint64_t)*(byte *)((int64_t)param_3 + uVar24 * 4 + 7);
      lVar18 = uVar24 + uVar20;
      uVar41 = (local_78 << ((uint64_t)uVar32 & 0x3f)) >> uVar38;
      *(short *)((int64_t)puVar28 + uVar24 + uVar20) = (short)param_3[uVar41 + 1];
      uVar32 = *(byte *)((int64_t)param_3 + uVar41 * 4 + 6) + uVar32;
      uVar20 = (uint64_t)*(byte *)((int64_t)param_3 + uVar41 * 4 + 7);
      uVar24 = (local_78 << ((uint64_t)uVar32 & 0x3f)) >> uVar38;
      *(short *)((int64_t)puVar28 + uVar20 + lVar18) = (short)param_3[uVar24 + 1];
      uVar32 = *(byte *)((int64_t)param_3 + uVar24 * 4 + 6) + uVar32;
      local_88 = (uint64_t)uVar32;
      puVar28 = (void*)
                ((int64_t)puVar28 +
                (uint64_t)*(byte *)((int64_t)param_3 + uVar24 * 4 + 7) + uVar20 + lVar18);
    } while (uVar32 < 0x41);
  }
LAB_00f04f68:
  pbVar31 = pbVar27 + lVar16;
  if (1 < (uint64_t)((int64_t)puVar22 - (int64_t)puVar28)) {
    while (uVar38 = (uint)local_88, uVar38 < 0x41) {
      if (lVar16 < 8) {
        if (lVar16 == 0) break;
        bVar42 = pbVar31 + -(local_88 >> 3) < pbVar27;
        uVar25 = (uint)lVar16;
        if (!bVar42) {
          uVar25 = (uint)(local_88 >> 3);
        }
        uVar38 = uVar38 + uVar25 * -8;
      }
      else {
        uVar25 = (uint)(local_88 >> 3);
        uVar38 = uVar38 & 7;
        bVar42 = false;
      }
      local_88 = (uint64_t)uVar38;
      lVar16 = lVar16 - (uint64_t)uVar25;
      pbVar31 = pbVar27 + lVar16;
      local_78 = *(uint64_t *)(pbVar27 + lVar16);
      if ((puVar22 + -1 < puVar28) || (bVar42)) break;
      uVar20 = (local_78 << (local_88 & 0x3f)) >> (-uVar36 & 0x3f);
      *puVar28 = (short)param_3[uVar20 + 1];
      puVar28 = (void*)
                ((int64_t)puVar28 + (uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7));
      local_88 = (uint64_t)(*(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + uVar38);
    }
    for (; puVar28 <= puVar22 + -1;
        puVar28 = (void*)
                  ((uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7) + (int64_t)puVar28)) {
      uVar20 = (local_78 << (local_88 & 0x3f)) >> (-uVar36 & 0x3f);
      *puVar28 = (short)param_3[uVar20 + 1];
      local_88 = (uint64_t)((uint)*(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + (int)local_88);
    }
  }
  uVar38 = (uint)local_88;
  if (puVar28 < puVar22) {
    uVar20 = (local_78 << (local_88 & 0x3f)) >> ((uint64_t)(byte)-cVar19 & 0x3f);
    *(char *)puVar28 = (char)param_3[uVar20 + 1];
    if (*(char *)((int64_t)param_3 + uVar20 * 4 + 7) == '\x01') {
      uVar38 = uVar38 + *(byte *)((int64_t)param_3 + uVar20 * 4 + 6);
    }
    else if (uVar38 < 0x40) {
      uVar25 = uVar38 + *(byte *)((int64_t)param_3 + uVar20 * 4 + 6);
      uVar38 = 0x40;
      if (uVar25 < 0x40) {
        uVar38 = uVar25;
      }
    }
  }
  uVar25 = (uint)uVar15;
  local_58 = lVar21;
  if ((uint64_t)((int64_t)puVar2 - (int64_t)local_48) < 8) {
    if (uVar25 < 0x41) {
      if (lVar21 < 8) {
        if (lVar21 == 0) {
LAB_00f05408:
          local_58 = 0;
          goto LAB_00f05427;
        }
        uVar14 = (uint)lVar21;
        if (-1 < (int64_t)(lVar21 - (uVar15 >> 3))) {
          uVar14 = (uint)(uVar15 >> 3);
        }
        uVar25 = uVar25 + uVar14 * -8;
      }
      else {
        uVar14 = (uint)(uVar15 >> 3);
        uVar25 = uVar25 & 7;
      }
      uVar15 = (uint64_t)uVar25;
      local_58 = lVar21 - (uint64_t)uVar14;
      local_90 = *(uint64_t *)(pbVar40 + local_58);
    }
  }
  else if (uVar14 < 0xc) {
    if (uVar25 < 0x41) {
      uVar14 = -uVar36 & 0x3f;
      do {
        if (local_58 < 8) {
          if (local_58 == 0) goto LAB_00f05408;
          lVar21 = local_58 - (uVar15 >> 3);
          uVar25 = (uint)local_58;
          if (-1 < lVar21) {
            uVar25 = (uint)(uVar15 >> 3);
          }
          uVar32 = (uint)((uint64_t)lVar21 >> 0x3f);
          uVar39 = (uint)uVar15 + uVar25 * -8;
        }
        else {
          uVar25 = (uint)(uVar15 >> 3);
          uVar39 = (uint)uVar15 & 7;
          uVar32 = 0;
        }
        uVar15 = (uint64_t)uVar39;
        local_58 = local_58 - (uint64_t)uVar25;
        local_90 = *(uint64_t *)(pbVar40 + local_58);
        if (((void*)((int64_t)puVar2 - 9U) <= local_48) || (uVar32 != 0)) break;
        uVar15 = (local_90 << (uVar15 & 0x3f)) >> uVar14;
        *local_48 = (short)param_3[uVar15 + 1];
        uVar39 = *(byte *)((int64_t)param_3 + uVar15 * 4 + 6) + uVar39;
        uVar20 = (uint64_t)*(byte *)((int64_t)param_3 + uVar15 * 4 + 7);
        uVar15 = (local_90 << ((uint64_t)uVar39 & 0x3f)) >> uVar14;
        *(short *)((int64_t)local_48 + uVar20) = (short)param_3[uVar15 + 1];
        uVar39 = *(byte *)((int64_t)param_3 + uVar15 * 4 + 6) + uVar39;
        uVar15 = (uint64_t)*(byte *)((int64_t)param_3 + uVar15 * 4 + 7);
        lVar21 = uVar15 + uVar20;
        uVar24 = (local_90 << ((uint64_t)uVar39 & 0x3f)) >> uVar14;
        *(short *)((int64_t)local_48 + uVar15 + uVar20) = (short)param_3[uVar24 + 1];
        uVar39 = *(byte *)((int64_t)param_3 + uVar24 * 4 + 6) + uVar39;
        uVar15 = (uint64_t)*(byte *)((int64_t)param_3 + uVar24 * 4 + 7);
        lVar16 = uVar15 + lVar21;
        uVar20 = (local_90 << ((uint64_t)uVar39 & 0x3f)) >> uVar14;
        *(short *)((int64_t)local_48 + uVar15 + lVar21) = (short)param_3[uVar20 + 1];
        uVar39 = *(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + uVar39;
        uVar20 = (uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7);
        uVar24 = (local_90 << ((uint64_t)uVar39 & 0x3f)) >> uVar14;
        *(short *)((int64_t)local_48 + uVar20 + lVar16) = (short)param_3[uVar24 + 1];
        uVar39 = *(byte *)((int64_t)param_3 + uVar24 * 4 + 6) + uVar39;
        uVar15 = (uint64_t)uVar39;
        local_48 = (void*)
                   ((int64_t)local_48 +
                   (uint64_t)*(byte *)((int64_t)param_3 + uVar24 * 4 + 7) + uVar20 + lVar16);
      } while (uVar39 < 0x41);
    }
  }
  else if (uVar25 < 0x41) {
    uVar14 = -uVar36 & 0x3f;
    do {
      if (local_58 < 8) {
        if (local_58 == 0) {
          local_58 = 0;
          break;
        }
        lVar21 = local_58 - (uVar15 >> 3);
        uVar25 = (uint)local_58;
        if (-1 < lVar21) {
          uVar25 = (uint)(uVar15 >> 3);
        }
        uVar32 = (uint)((uint64_t)lVar21 >> 0x3f);
        uVar39 = (uint)uVar15 + uVar25 * -8;
      }
      else {
        uVar25 = (uint)(uVar15 >> 3);
        uVar39 = (uint)uVar15 & 7;
        uVar32 = 0;
      }
      uVar15 = (uint64_t)uVar39;
      local_58 = local_58 - (uint64_t)uVar25;
      local_90 = *(uint64_t *)(pbVar40 + local_58);
      if ((puVar23 <= local_48) || (uVar32 != 0)) break;
      uVar15 = (local_90 << (uVar15 & 0x3f)) >> uVar14;
      *local_48 = (short)param_3[uVar15 + 1];
      uVar39 = *(byte *)((int64_t)param_3 + uVar15 * 4 + 6) + uVar39;
      uVar15 = (uint64_t)*(byte *)((int64_t)param_3 + uVar15 * 4 + 7);
      uVar20 = (local_90 << ((uint64_t)uVar39 & 0x3f)) >> uVar14;
      *(short *)((int64_t)local_48 + uVar15) = (short)param_3[uVar20 + 1];
      uVar39 = *(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + uVar39;
      uVar20 = (uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7);
      lVar21 = uVar20 + uVar15;
      uVar24 = (local_90 << ((uint64_t)uVar39 & 0x3f)) >> uVar14;
      *(short *)((int64_t)local_48 + uVar20 + uVar15) = (short)param_3[uVar24 + 1];
      uVar39 = *(byte *)((int64_t)param_3 + uVar24 * 4 + 6) + uVar39;
      uVar20 = (uint64_t)*(byte *)((int64_t)param_3 + uVar24 * 4 + 7);
      uVar24 = (local_90 << ((uint64_t)uVar39 & 0x3f)) >> uVar14;
      *(short *)((int64_t)local_48 + uVar20 + lVar21) = (short)param_3[uVar24 + 1];
      uVar39 = *(byte *)((int64_t)param_3 + uVar24 * 4 + 6) + uVar39;
      uVar15 = (uint64_t)uVar39;
      local_48 = (void*)
                 ((int64_t)local_48 +
                 (uint64_t)*(byte *)((int64_t)param_3 + uVar24 * 4 + 7) + uVar20 + lVar21);
      if (0x40 < uVar39) break;
    } while( true );
  }
LAB_00f05427:
  pbVar37 = pbVar40 + local_58;
  if (1 < (uint64_t)((int64_t)puVar2 - (int64_t)local_48)) {
    if ((uint)uVar15 < 0x41) {
      do {
        if (local_58 < 8) {
          if (local_58 == 0) break;
          bVar42 = pbVar37 + -(uVar15 >> 3) < pbVar40;
          uVar14 = (uint)local_58;
          if (!bVar42) {
            uVar14 = (uint)(uVar15 >> 3);
          }
          uVar25 = (uint)uVar15 + uVar14 * -8;
        }
        else {
          uVar14 = (uint)(uVar15 >> 3);
          uVar25 = (uint)uVar15 & 7;
          bVar42 = false;
        }
        uVar15 = (uint64_t)uVar25;
        local_58 = local_58 - (uint64_t)uVar14;
        pbVar37 = pbVar40 + local_58;
        local_90 = *(uint64_t *)(pbVar40 + local_58);
        if ((puVar2 + -1 < local_48) || (bVar42)) break;
        uVar20 = (local_90 << (uVar15 & 0x3f)) >> (-uVar36 & 0x3f);
        *local_48 = (short)param_3[uVar20 + 1];
        uVar25 = *(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + uVar25;
        uVar15 = (uint64_t)uVar25;
        local_48 = (void*)
                   ((int64_t)local_48 + (uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7));
        if (0x40 < uVar25) break;
      } while( true );
    }
    for (; local_48 <= puVar2 + -1;
        local_48 = (void*)
                   ((uint64_t)*(byte *)((int64_t)param_3 + uVar20 * 4 + 7) + (int64_t)local_48))
    {
      uVar20 = (local_90 << (uVar15 & 0x3f)) >> (-uVar36 & 0x3f);
      *local_48 = (short)param_3[uVar20 + 1];
      uVar15 = (uint64_t)((uint)*(byte *)((int64_t)param_3 + uVar20 * 4 + 6) + (int)uVar15);
    }
  }
  uVar36 = (uint)uVar15;
  if (local_48 < puVar2) {
    uVar15 = (local_90 << (uVar15 & 0x3f)) >> ((uint64_t)(byte)-cVar19 & 0x3f);
    *(char *)local_48 = (char)param_3[uVar15 + 1];
    if (*(char *)((int64_t)param_3 + uVar15 * 4 + 7) == '\x01') {
      uVar36 = uVar36 + *(byte *)((int64_t)param_3 + uVar15 * 4 + 6);
    }
    else if (uVar36 < 0x40) {
      uVar14 = uVar36 + *(byte *)((int64_t)param_3 + uVar15 * 4 + 6);
      uVar36 = 0x40;
      if (uVar14 < 0x40) {
        uVar36 = uVar14;
      }
    }
  }
  if (uVar36 != 0x40) {
    arg1 = 0xffffffffffffffec;
  }
  if (pbVar37 != pbVar40) {
    arg1 = 0xffffffffffffffec;
  }
  if (uVar38 != 0x40) {
    arg1 = 0xffffffffffffffec;
  }
  if (pbVar31 != pbVar27) {
    arg1 = 0xffffffffffffffec;
  }
  if (uVar30 != 0x40) {
    arg1 = 0xffffffffffffffec;
  }
  if (local_40 != pbVar33) {
    arg1 = 0xffffffffffffffec;
  }
  if (uVar29 != 0x40) {
    arg1 = 0xffffffffffffffec;
  }
  if (lVar17 != 6) {
    return 0xffffffffffffffec;
  }
  return arg1;
}

