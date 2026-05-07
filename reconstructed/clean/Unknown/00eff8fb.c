// Function: FUN_00eff8fb
// Address: 00eff8fb
// Size: 7861 bytes
// Class: Unknown

uint64_t FUN_00eff8fb(uint64_t param_1,ushort *param_2,void*param_3,uint64_t param_4)

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
  byte bVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  uint64_t uVar17;
  byte bVar18;
  void*puVar19;
  uint uVar20;
  uint64_t uVar21;
  void*puVar22;
  int64_t lVar23;
  int iVar24;
  uint64_t arg1;
  byte *pbVar25;
  uint64_t uVar26;
  int iVar27;
  void*this_ptr;
  void*puVar28;
  uint64_t uVar29;
  byte *pbVar30;
  uint64_t uVar31;
  int64_t lVar32;
  code *pcVar33;
  byte *pbVar34;
  byte *pbVar35;
  uint64_t uVar36;
  void*puVar37;
  uint uVar38;
  uint uVar39;
  byte *pbVar40;
  uint64_t uVar41;
  int64_t lVar42;
  bool bVar43;
  int64_t local_e8;
  int64_t local_a8;
  int64_t local_a0;
  int64_t local_90;
  uint64_t local_88;
  uint64_t local_80;
  uint64_t local_78;
  void*local_70;
  uint64_t local_68;
  int64_t local_60;
  uint local_54;
  byte *local_50;
  byte local_3c;
  uint local_38;
  uint local_34;
  
  if ((param_4 & 1) != 0) {
    if ((param_4 & 0x20) == 0) {
      pcVar33 = FUN_00f03614;
      if ((param_4 & 0x10) == 0) {
        pcVar33 = &HUF_decompress4X2_usingDTable_internal_fast_asm_loop;
      }
      uVar17 = FUN_00f05674(param_1,param_2,param_3,pcVar33);
      if (uVar17 != 0) {
        return uVar17;
      }
    }
    uVar17 = FUN_00f03899(param_1,param_2,param_3);
    return uVar17;
  }
  if (param_1 < 10) {
    return 0xffffffffffffffec;
  }
  uVar9 = *param_2;
  uVar29 = (uint64_t)uVar9;
  uVar10 = param_2[1];
  uVar21 = (uint64_t)uVar10;
  uVar11 = param_2[2];
  uVar26 = (uint64_t)uVar11;
  uVar17 = uVar29 + uVar21 + uVar26 + 6;
  uVar41 = param_1 - uVar17;
  if (param_1 < uVar17) {
    return 0xffffffffffffffec;
  }
  puVar2 = (void*)((int64_t)this_ptr + arg1);
  uVar17 = arg1 + 3 >> 2;
  puVar3 = (void*)((int64_t)this_ptr + uVar17);
  puVar4 = (void*)((int64_t)puVar3 + uVar17);
  puVar22 = (void*)(uVar17 + (int64_t)puVar4);
  if (puVar2 < puVar22) {
    return 0xffffffffffffffec;
  }
  if (arg1 < 6) {
    return 0xffffffffffffffec;
  }
  if (uVar29 == 0) {
    return 0xffffffffffffffb8;
  }
  puVar1 = param_2 + 3;
  if (uVar9 < 8) {
    local_68 = (uint64_t)(byte)*puVar1;
    switch(uVar9) {
    case 7:
      local_68 = local_68 | (uint64_t)(byte)param_2[6] << 0x30;
    case 6:
      local_68 = local_68 + ((uint64_t)*(byte *)((int64_t)param_2 + 0xb) << 0x28);
    case 5:
      local_68 = local_68 + ((uint64_t)(byte)param_2[5] << 0x20);
    case 4:
      local_68 = local_68 + (uint64_t)*(byte *)((int64_t)param_2 + 9) * 0x1000000;
    case 3:
      local_68 = local_68 + (uint64_t)(byte)param_2[4] * 0x10000;
    case 2:
      local_68 = local_68 + (uint64_t)*(byte *)((int64_t)param_2 + 7) * 0x100;
    }
    bVar18 = *(byte *)((uVar29 - 1) + (int64_t)puVar1);
    if (bVar18 == 0) {
      return 0xffffffffffffffec;
    }
    uVar20 = 0x1f;
    if (bVar18 != 0) {
      for (; bVar18 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    local_38 = (uVar20 ^ 0x1f) + (uint)uVar9 * -8 + 0x29;
    local_a0 = 6;
  }
  else {
    bVar18 = *(byte *)((uVar29 - 1) + (int64_t)puVar1);
    if (bVar18 == 0) {
      return 0xffffffffffffffff;
    }
    local_a0 = uVar29 - 2;
    local_68 = *(uint64_t *)((int64_t)param_2 + local_a0);
    uVar20 = 0x1f;
    if (bVar18 != 0) {
      for (; bVar18 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    local_38 = (uVar20 ^ 0x1f) - 0x17;
  }
  if (uVar21 == 0) {
    return 0xffffffffffffffb8;
  }
  pbVar25 = (byte *)((int64_t)param_2 + uVar29 + 6);
  if (uVar10 < 8) {
    local_88 = (uint64_t)*pbVar25;
    switch(uVar10) {
    case 7:
      local_88 = local_88 | (uint64_t)*(byte *)((int64_t)param_2 + uVar29 + 0xc) << 0x30;
    case 6:
      local_88 = local_88 + ((uint64_t)*(byte *)((int64_t)param_2 + uVar29 + 0xb) << 0x28);
    case 5:
      local_88 = local_88 + ((uint64_t)*(byte *)((int64_t)param_2 + uVar29 + 10) << 0x20);
    case 4:
      local_88 = local_88 + (uint64_t)*(byte *)((int64_t)param_2 + uVar29 + 9) * 0x1000000;
    case 3:
      local_88 = local_88 + (uint64_t)*(byte *)((int64_t)param_2 + uVar29 + 8) * 0x10000;
    case 2:
      local_88 = local_88 + (uint64_t)*(byte *)((int64_t)param_2 + uVar29 + 7) * 0x100;
    }
    bVar18 = pbVar25[uVar21 - 1];
    if (bVar18 == 0) {
      return 0xffffffffffffffec;
    }
    uVar20 = 0x1f;
    if (bVar18 != 0) {
      for (; bVar18 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    local_34 = (uVar20 ^ 0x1f) + (uint)uVar10 * -8 + 0x29;
    local_90 = 0;
  }
  else {
    bVar18 = pbVar25[uVar21 - 1];
    if (bVar18 == 0) {
      return 0xffffffffffffffff;
    }
    local_90 = uVar21 - 8;
    local_88 = *(uint64_t *)(pbVar25 + local_90);
    uVar20 = 0x1f;
    if (bVar18 != 0) {
      for (; bVar18 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    local_34 = (uVar20 ^ 0x1f) - 0x17;
  }
  if (uVar26 == 0) {
    return 0xffffffffffffffb8;
  }
  pbVar30 = pbVar25 + uVar21;
  if (uVar11 < 8) {
    local_80 = (uint64_t)*pbVar30;
    switch(uVar11) {
    case 7:
      local_80 = local_80 | (uint64_t)pbVar30[6] << 0x30;
    case 6:
      local_80 = local_80 + ((uint64_t)pbVar30[5] << 0x28);
    case 5:
      local_80 = local_80 + ((uint64_t)pbVar30[4] << 0x20);
    case 4:
      local_80 = local_80 + (uint64_t)pbVar30[3] * 0x1000000;
    case 3:
      local_80 = local_80 + (uint64_t)pbVar30[2] * 0x10000;
    case 2:
      local_80 = local_80 + (uint64_t)pbVar30[1] * 0x100;
    }
    bVar18 = pbVar30[uVar26 - 1];
    if (bVar18 == 0) {
      return 0xffffffffffffffec;
    }
    uVar20 = 0x1f;
    if (bVar18 != 0) {
      for (; bVar18 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    local_54 = (uVar20 ^ 0x1f) + (uint)uVar11 * -8 + 0x29;
    lVar32 = 0;
  }
  else {
    bVar18 = pbVar30[uVar26 - 1];
    if (bVar18 == 0) {
      return 0xffffffffffffffff;
    }
    lVar32 = uVar26 - 8;
    local_80 = *(uint64_t *)(pbVar30 + lVar32);
    uVar20 = 0x1f;
    if (bVar18 != 0) {
      for (; bVar18 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    local_54 = (uVar20 ^ 0x1f) - 0x17;
  }
  if (uVar41 == 0) {
    return 0xffffffffffffffb8;
  }
  pbVar34 = pbVar30 + uVar26;
  if (uVar41 < 8) {
    local_78 = (uint64_t)*pbVar34;
    switch(uVar41) {
    case 7:
      local_78 = local_78 | (uint64_t)pbVar34[6] << 0x30;
    case 6:
      local_78 = local_78 + ((uint64_t)pbVar34[5] << 0x28);
    case 5:
      local_78 = local_78 + ((uint64_t)pbVar34[4] << 0x20);
    case 4:
      local_78 = local_78 + (uint64_t)pbVar34[3] * 0x1000000;
    case 3:
      local_78 = local_78 + (uint64_t)pbVar34[2] * 0x10000;
    case 2:
      local_78 = local_78 + (uint64_t)pbVar34[1] * 0x100;
    }
    bVar18 = pbVar34[uVar41 - 1];
    if (bVar18 == 0) {
      return 0xffffffffffffffec;
    }
    uVar20 = 0x1f;
    if (bVar18 != 0) {
      for (; bVar18 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    uVar20 = (uVar20 ^ 0x1f) + (int)uVar41 * -8 + 0x29;
    local_60 = 0;
  }
  else {
    bVar18 = pbVar34[uVar41 - 1];
    if (bVar18 == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < uVar41) {
      return uVar41;
    }
    local_78 = *(uint64_t *)(pbVar34 + (uVar41 - 8));
    local_60 = uVar41 - 8;
    uVar20 = 0x1f;
    if (bVar18 != 0) {
      for (; bVar18 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    uVar20 = (uVar20 ^ 0x1f) - 0x17;
  }
  puVar19 = (void*)((int64_t)this_ptr + (arg1 - 7));
  local_3c = (byte)((uint)*param_3 >> 0x10);
  puVar28 = puVar22;
  puVar37 = puVar3;
  local_70 = puVar4;
  if ((7 < (uint64_t)((int64_t)puVar2 - (int64_t)puVar22)) && (puVar22 < puVar19)) {
    bVar18 = -local_3c & 0x3f;
    bVar12 = 1;
    lVar23 = local_a0;
    lVar42 = local_60;
    local_a8 = lVar32;
    do {
      uVar17 = (local_68 << ((byte)local_38 & 0x3f)) >> bVar18;
      *this_ptr = *(void*)(param_3 + uVar17 + 1);
      iVar27 = *(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + local_38;
      uVar29 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
      uVar17 = (local_68 << ((byte)iVar27 & 0x3f)) >> bVar18;
      *(void*)((int64_t)this_ptr + uVar29) = *(void*)(param_3 + uVar17 + 1);
      iVar27 = (uint)*(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + iVar27;
      uVar21 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
      lVar13 = uVar21 + uVar29;
      uVar17 = (local_68 << ((byte)iVar27 & 0x3f)) >> bVar18;
      *(void*)((int64_t)this_ptr + uVar21 + uVar29) = *(void*)(param_3 + uVar17 + 1)
      ;
      iVar27 = (uint)*(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + iVar27;
      uVar29 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
      uVar17 = (local_68 << ((byte)iVar27 & 0x3f)) >> bVar18;
      *(void*)((int64_t)this_ptr + uVar29 + lVar13) = *(void*)(param_3 + uVar17 + 1)
      ;
      bVar5 = *(byte *)((int64_t)param_3 + uVar17 * 4 + 6);
      uVar21 = (local_88 << ((byte)local_34 & 0x3f)) >> bVar18;
      bVar6 = *(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
      *puVar37 = *(void*)(param_3 + uVar21 + 1);
      iVar24 = *(byte *)((int64_t)param_3 + uVar21 * 4 + 6) + local_34;
      local_38 = (uint)bVar5 + iVar27;
      uVar17 = (local_88 << ((byte)iVar24 & 0x3f)) >> bVar18;
      uVar21 = (uint64_t)*(byte *)((int64_t)param_3 + uVar21 * 4 + 7);
      *(void*)((int64_t)puVar37 + uVar21) = *(void*)(param_3 + uVar17 + 1);
      iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + iVar24;
      uVar26 = (local_88 << ((byte)iVar24 & 0x3f)) >> bVar18;
      uVar17 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
      *(void*)((int64_t)puVar37 + uVar17 + uVar21) = *(void*)(param_3 + uVar26 + 1);
      iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar26 * 4 + 6) + iVar24;
      lVar14 = uVar17 + uVar21;
      uVar21 = (local_88 << ((byte)iVar24 & 0x3f)) >> bVar18;
      uVar17 = (uint64_t)*(byte *)((int64_t)param_3 + uVar26 * 4 + 7);
      *(void*)((int64_t)puVar37 + uVar17 + lVar14) = *(void*)(param_3 + uVar21 + 1);
      local_a0 = lVar23;
      if (0xd < lVar23) {
        local_a0 = lVar23 - (uint64_t)(local_38 >> 3);
        local_38 = local_38 & 7;
        local_68 = *(uint64_t *)((int64_t)param_2 + local_a0);
      }
      local_34 = iVar24 + (uint)*(byte *)((int64_t)param_3 + uVar21 * 4 + 6);
      bVar5 = *(byte *)((int64_t)param_3 + uVar21 * 4 + 7);
      if (local_90 < 8) {
        local_e8 = local_90;
      }
      else {
        local_e8 = local_90 - (uint64_t)(local_34 >> 3);
        local_34 = local_34 & 7;
        local_88 = *(uint64_t *)(pbVar25 + local_e8);
      }
      uVar21 = (local_80 << ((byte)local_54 & 0x3f)) >> bVar18;
      *local_70 = *(void*)(param_3 + uVar21 + 1);
      iVar24 = *(byte *)((int64_t)param_3 + uVar21 * 4 + 6) + local_54;
      uVar21 = (uint64_t)*(byte *)((int64_t)param_3 + uVar21 * 4 + 7);
      uVar26 = (local_80 << ((byte)iVar24 & 0x3f)) >> bVar18;
      *(void*)((int64_t)local_70 + uVar21) = *(void*)(param_3 + uVar26 + 1);
      iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar26 * 4 + 6) + iVar24;
      uVar26 = (uint64_t)*(byte *)((int64_t)param_3 + uVar26 * 4 + 7);
      lVar15 = uVar26 + uVar21;
      uVar41 = (local_80 << ((byte)iVar24 & 0x3f)) >> bVar18;
      *(void*)((int64_t)local_70 + uVar26 + uVar21) = *(void*)(param_3 + uVar41 + 1);
      iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar41 * 4 + 6) + iVar24;
      uVar26 = (uint64_t)*(byte *)((int64_t)param_3 + uVar41 * 4 + 7);
      uVar21 = (local_80 << ((byte)iVar24 & 0x3f)) >> bVar18;
      *(void*)((int64_t)local_70 + uVar26 + lVar15) = *(void*)(param_3 + uVar21 + 1);
      bVar7 = *(byte *)((int64_t)param_3 + uVar21 * 4 + 6);
      uVar41 = (local_78 << ((byte)uVar20 & 0x3f)) >> bVar18;
      bVar8 = *(byte *)((int64_t)param_3 + uVar21 * 4 + 7);
      *puVar28 = *(void*)(param_3 + uVar41 + 1);
      iVar27 = *(byte *)((int64_t)param_3 + uVar41 * 4 + 6) + uVar20;
      uVar21 = (local_78 << ((byte)iVar27 & 0x3f)) >> bVar18;
      uVar31 = (uint64_t)*(byte *)((int64_t)param_3 + uVar41 * 4 + 7);
      *(void*)((int64_t)puVar28 + uVar31) = *(void*)(param_3 + uVar21 + 1);
      iVar27 = (uint)*(byte *)((int64_t)param_3 + uVar21 * 4 + 6) + iVar27;
      uVar41 = (local_78 << ((byte)iVar27 & 0x3f)) >> bVar18;
      uVar21 = (uint64_t)*(byte *)((int64_t)param_3 + uVar21 * 4 + 7);
      *(void*)((int64_t)puVar28 + uVar21 + uVar31) = *(void*)(param_3 + uVar41 + 1);
      iVar27 = (uint)*(byte *)((int64_t)param_3 + uVar41 * 4 + 6) + iVar27;
      local_54 = (uint)bVar7 + iVar24;
      uVar36 = (local_78 << ((byte)iVar27 & 0x3f)) >> bVar18;
      lVar16 = uVar21 + uVar31;
      uVar21 = (uint64_t)*(byte *)((int64_t)param_3 + uVar41 * 4 + 7);
      *(void*)((int64_t)puVar28 + uVar21 + lVar16) = *(void*)(param_3 + uVar36 + 1);
      lVar32 = local_a8;
      if (7 < local_a8) {
        lVar32 = local_a8 - (uint64_t)(local_54 >> 3);
        local_54 = local_54 & 7;
        local_80 = *(uint64_t *)(pbVar30 + lVar32);
      }
      uVar20 = iVar27 + (uint)*(byte *)((int64_t)param_3 + uVar36 * 4 + 6);
      puVar28 = (void*)
                ((int64_t)puVar28 +
                (uint64_t)*(byte *)((int64_t)param_3 + uVar36 * 4 + 7) + uVar21 + lVar16);
      local_60 = lVar42;
      if (7 < lVar42) {
        local_60 = lVar42 - (uint64_t)(uVar20 >> 3);
        uVar20 = uVar20 & 7;
        local_78 = *(uint64_t *)(pbVar34 + local_60);
      }
      this_ptr = (void*)((int64_t)this_ptr + (uint64_t)bVar6 + uVar29 + lVar13);
      puVar37 = (void*)((int64_t)puVar37 + (uint64_t)bVar5 + uVar17 + lVar14);
      local_70 = (void*)((int64_t)local_70 + (uint64_t)bVar8 + uVar26 + lVar15);
      bVar12 = bVar12 & 7 < lVar42 & ((0xd < lVar23 && 7 < local_90) && 7 < local_a8);
      local_90 = local_e8;
      lVar23 = local_a0;
      lVar42 = local_60;
      local_a8 = lVar32;
    } while ((bool)(bVar12 & puVar28 < puVar19));
  }
  if (puVar3 < this_ptr) {
    return 0xffffffffffffffec;
  }
  if (puVar4 < puVar37) {
    return 0xffffffffffffffec;
  }
  if (puVar22 < local_70) {
    return 0xffffffffffffffec;
  }
  if ((uint64_t)((int64_t)puVar3 - (int64_t)this_ptr) < 8) {
    if (local_38 < 0x41) {
      if (local_a0 < 0xe) {
        if (local_a0 == 6) {
          local_a0 = 6;
          goto LAB_00f006f0;
        }
        uVar39 = (int)local_a0 - 6;
        if (5 < (int64_t)(local_a0 - (uint64_t)(local_38 >> 3))) {
          uVar39 = local_38 >> 3;
        }
        local_38 = local_38 + uVar39 * -8;
      }
      else {
        uVar39 = local_38 >> 3;
        local_38 = local_38 & 7;
      }
      local_a0 = local_a0 - (uint64_t)uVar39;
      local_68 = *(uint64_t *)((int64_t)param_2 + local_a0);
    }
  }
  else if (local_3c < 0xc) {
    if (local_38 < 0x41) {
      bVar18 = -local_3c & 0x3f;
      do {
        if (local_a0 < 0xe) {
          if (local_a0 == 6) goto LAB_00f006c7;
          lVar23 = local_a0 - (uint64_t)(local_38 >> 3);
          bVar43 = lVar23 < 6;
          uVar39 = (int)local_a0 - 6;
          if (5 < lVar23) {
            uVar39 = local_38 >> 3;
          }
          local_38 = local_38 + uVar39 * -8;
        }
        else {
          uVar39 = local_38 >> 3;
          local_38 = local_38 & 7;
          bVar43 = false;
        }
        local_a0 = local_a0 - (uint64_t)uVar39;
        local_68 = *(uint64_t *)((int64_t)param_2 + local_a0);
        if (((void*)((int64_t)puVar3 - 9U) <= this_ptr) || (bVar43)) break;
        uVar17 = (local_68 << ((byte)local_38 & 0x3f)) >> bVar18;
        *this_ptr = *(void*)(param_3 + uVar17 + 1);
        iVar24 = *(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + local_38;
        uVar21 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
        uVar17 = (local_68 << ((byte)iVar24 & 0x3f)) >> bVar18;
        *(void*)((int64_t)this_ptr + uVar21) = *(void*)(param_3 + uVar17 + 1);
        iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + iVar24;
        uVar29 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
        uVar17 = (local_68 << ((byte)iVar24 & 0x3f)) >> bVar18;
        lVar23 = uVar29 + uVar21;
        *(void*)((int64_t)this_ptr + uVar29 + uVar21) =
             *(void*)(param_3 + uVar17 + 1);
        iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + iVar24;
        uVar17 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
        uVar29 = (local_68 << ((byte)iVar24 & 0x3f)) >> bVar18;
        lVar42 = uVar17 + lVar23;
        *(void*)((int64_t)this_ptr + uVar17 + lVar23) =
             *(void*)(param_3 + uVar29 + 1);
        iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar29 * 4 + 6) + iVar24;
        uVar17 = (uint64_t)*(byte *)((int64_t)param_3 + uVar29 * 4 + 7);
        uVar29 = (local_68 << ((byte)iVar24 & 0x3f)) >> bVar18;
        *(void*)((int64_t)this_ptr + uVar17 + lVar42) =
             *(void*)(param_3 + uVar29 + 1);
        local_38 = (uint)*(byte *)((int64_t)param_3 + uVar29 * 4 + 6) + iVar24;
        this_ptr = (void*)
                    ((int64_t)this_ptr +
                    (uint64_t)*(byte *)((int64_t)param_3 + uVar29 * 4 + 7) + uVar17 + lVar42);
      } while (local_38 < 0x41);
    }
  }
  else if (local_38 < 0x41) {
    bVar18 = -local_3c & 0x3f;
    do {
      if (local_a0 < 0xe) {
        if (local_a0 == 6) goto LAB_00f006c7;
        lVar23 = local_a0 - (uint64_t)(local_38 >> 3);
        bVar43 = lVar23 < 6;
        uVar39 = (int)local_a0 - 6;
        if (5 < lVar23) {
          uVar39 = local_38 >> 3;
        }
        local_38 = local_38 + uVar39 * -8;
      }
      else {
        uVar39 = local_38 >> 3;
        local_38 = local_38 & 7;
        bVar43 = false;
      }
      local_a0 = local_a0 - (uint64_t)uVar39;
      local_68 = *(uint64_t *)((int64_t)param_2 + local_a0);
      if (((void*)((int64_t)puVar3 - 7U) <= this_ptr) || (bVar43)) break;
      uVar17 = (local_68 << ((byte)local_38 & 0x3f)) >> bVar18;
      *this_ptr = *(void*)(param_3 + uVar17 + 1);
      iVar24 = *(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + local_38;
      uVar21 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
      uVar17 = (local_68 << ((byte)iVar24 & 0x3f)) >> bVar18;
      *(void*)((int64_t)this_ptr + uVar21) = *(void*)(param_3 + uVar17 + 1);
      iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + iVar24;
      uVar29 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
      uVar17 = (local_68 << ((byte)iVar24 & 0x3f)) >> bVar18;
      lVar23 = uVar29 + uVar21;
      *(void*)((int64_t)this_ptr + uVar29 + uVar21) = *(void*)(param_3 + uVar17 + 1)
      ;
      iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + iVar24;
      uVar17 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
      uVar29 = (local_68 << ((byte)iVar24 & 0x3f)) >> bVar18;
      *(void*)((int64_t)this_ptr + uVar17 + lVar23) = *(void*)(param_3 + uVar29 + 1)
      ;
      local_38 = (uint)*(byte *)((int64_t)param_3 + uVar29 * 4 + 6) + iVar24;
      this_ptr = (void*)
                  ((int64_t)this_ptr +
                  (uint64_t)*(byte *)((int64_t)param_3 + uVar29 * 4 + 7) + uVar17 + lVar23);
    } while (local_38 < 0x41);
  }
LAB_00f006f0:
  if (1 < (uint64_t)((int64_t)puVar3 - (int64_t)this_ptr)) {
    if (local_38 < 0x41) {
      do {
        if (local_a0 < 0xe) {
          if (local_a0 == 6) {
            local_a0 = 6;
            break;
          }
          lVar23 = local_a0 - (uint64_t)(local_38 >> 3);
          bVar43 = lVar23 < 6;
          uVar39 = (int)local_a0 - 6;
          if (5 < lVar23) {
            uVar39 = local_38 >> 3;
          }
          local_38 = local_38 + uVar39 * -8;
        }
        else {
          uVar39 = local_38 >> 3;
          local_38 = local_38 & 7;
          bVar43 = false;
        }
        local_a0 = local_a0 - (uint64_t)uVar39;
        local_68 = *(uint64_t *)((int64_t)param_2 + local_a0);
        if ((puVar3 + -1 < this_ptr) || (bVar43)) break;
        uVar17 = (local_68 << ((byte)local_38 & 0x3f)) >> (-local_3c & 0x3f);
        *this_ptr = *(void*)(param_3 + uVar17 + 1);
        local_38 = *(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + local_38;
        this_ptr = (void*)
                    ((int64_t)this_ptr + (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7))
        ;
        if (0x40 < local_38) break;
      } while( true );
    }
    for (; this_ptr <= puVar3 + -1;
        this_ptr = (void*)
                    ((uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7) + (int64_t)this_ptr)
        ) {
      uVar17 = (local_68 << ((byte)local_38 & 0x3f)) >> (-local_3c & 0x3f);
      *this_ptr = *(void*)(param_3 + uVar17 + 1);
      local_38 = *(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + local_38;
    }
  }
  if (this_ptr < puVar3) {
    uVar17 = (local_68 << ((byte)local_38 & 0x3f)) >> (-local_3c & 0x3f);
    *(void*)this_ptr = *(void*)(param_3 + uVar17 + 1);
    if (*(char *)((int64_t)param_3 + uVar17 * 4 + 7) == '\x01') {
      local_38 = local_38 + *(byte *)((int64_t)param_3 + uVar17 * 4 + 6);
    }
    else if ((local_38 < 0x40) &&
            (local_38 = local_38 + *(byte *)((int64_t)param_3 + uVar17 * 4 + 6), 0x3f < local_38))
    {
      local_38 = 0x40;
    }
  }
  if ((uint64_t)((int64_t)puVar4 - (int64_t)puVar37) < 8) {
    if (local_34 < 0x41) {
      if (local_90 < 8) {
        if (local_90 == 0) {
          local_90 = 0;
          goto LAB_00f00be5;
        }
        uVar39 = (uint)local_90;
        if (-1 < (int64_t)(local_90 - (uint64_t)(local_34 >> 3))) {
          uVar39 = local_34 >> 3;
        }
        local_34 = local_34 + uVar39 * -8;
      }
      else {
        uVar39 = local_34 >> 3;
        local_34 = local_34 & 7;
      }
      local_90 = local_90 - (uint64_t)uVar39;
      local_88 = *(uint64_t *)(pbVar25 + local_90);
    }
  }
  else if (local_3c < 0xc) {
    if (local_34 < 0x41) {
      bVar18 = -local_3c & 0x3f;
      do {
        if (local_90 < 8) {
          if (local_90 == 0) goto LAB_00f00bd0;
          lVar23 = local_90 - (uint64_t)(local_34 >> 3);
          uVar39 = (uint)local_90;
          if (-1 < lVar23) {
            uVar39 = local_34 >> 3;
          }
          uVar38 = (uint)((uint64_t)lVar23 >> 0x3f);
          local_34 = local_34 + uVar39 * -8;
        }
        else {
          uVar39 = local_34 >> 3;
          local_34 = local_34 & 7;
          uVar38 = 0;
        }
        local_90 = local_90 - (uint64_t)uVar39;
        local_88 = *(uint64_t *)(pbVar25 + local_90);
        if (((void*)((int64_t)puVar4 - 9U) <= puVar37) || (uVar38 != 0)) break;
        uVar17 = (local_88 << ((byte)local_34 & 0x3f)) >> bVar18;
        *puVar37 = *(void*)(param_3 + uVar17 + 1);
        iVar24 = *(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + local_34;
        uVar21 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
        uVar17 = (local_88 << ((byte)iVar24 & 0x3f)) >> bVar18;
        *(void*)((int64_t)puVar37 + uVar21) = *(void*)(param_3 + uVar17 + 1);
        iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + iVar24;
        uVar29 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
        uVar17 = (local_88 << ((byte)iVar24 & 0x3f)) >> bVar18;
        lVar23 = uVar29 + uVar21;
        *(void*)((int64_t)puVar37 + uVar29 + uVar21) = *(void*)(param_3 + uVar17 + 1)
        ;
        iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + iVar24;
        uVar17 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
        uVar29 = (local_88 << ((byte)iVar24 & 0x3f)) >> bVar18;
        lVar42 = uVar17 + lVar23;
        *(void*)((int64_t)puVar37 + uVar17 + lVar23) = *(void*)(param_3 + uVar29 + 1)
        ;
        iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar29 * 4 + 6) + iVar24;
        uVar29 = (uint64_t)*(byte *)((int64_t)param_3 + uVar29 * 4 + 7);
        uVar17 = (local_88 << ((byte)iVar24 & 0x3f)) >> bVar18;
        *(void*)((int64_t)puVar37 + uVar29 + lVar42) = *(void*)(param_3 + uVar17 + 1)
        ;
        local_34 = (uint)*(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + iVar24;
        puVar37 = (void*)
                  ((int64_t)puVar37 +
                  (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7) + uVar29 + lVar42);
      } while (local_34 < 0x41);
    }
  }
  else if (local_34 < 0x41) {
    bVar18 = -local_3c & 0x3f;
    do {
      if (local_90 < 8) {
        if (local_90 == 0) goto LAB_00f00bd0;
        lVar23 = local_90 - (uint64_t)(local_34 >> 3);
        uVar39 = (uint)local_90;
        if (-1 < lVar23) {
          uVar39 = local_34 >> 3;
        }
        uVar38 = (uint)((uint64_t)lVar23 >> 0x3f);
        local_34 = local_34 + uVar39 * -8;
      }
      else {
        uVar39 = local_34 >> 3;
        local_34 = local_34 & 7;
        uVar38 = 0;
      }
      local_90 = local_90 - (uint64_t)uVar39;
      local_88 = *(uint64_t *)(pbVar25 + local_90);
      if (((void*)((int64_t)puVar4 - 7U) <= puVar37) || (uVar38 != 0)) break;
      uVar17 = (local_88 << ((byte)local_34 & 0x3f)) >> bVar18;
      *puVar37 = *(void*)(param_3 + uVar17 + 1);
      iVar24 = *(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + local_34;
      uVar21 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
      uVar17 = (local_88 << ((byte)iVar24 & 0x3f)) >> bVar18;
      *(void*)((int64_t)puVar37 + uVar21) = *(void*)(param_3 + uVar17 + 1);
      iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + iVar24;
      uVar29 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
      uVar17 = (local_88 << ((byte)iVar24 & 0x3f)) >> bVar18;
      lVar23 = uVar29 + uVar21;
      *(void*)((int64_t)puVar37 + uVar29 + uVar21) = *(void*)(param_3 + uVar17 + 1);
      iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + iVar24;
      uVar17 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
      uVar29 = (local_88 << ((byte)iVar24 & 0x3f)) >> bVar18;
      *(void*)((int64_t)puVar37 + uVar17 + lVar23) = *(void*)(param_3 + uVar29 + 1);
      local_34 = (uint)*(byte *)((int64_t)param_3 + uVar29 * 4 + 6) + iVar24;
      puVar37 = (void*)
                ((int64_t)puVar37 +
                (uint64_t)*(byte *)((int64_t)param_3 + uVar29 * 4 + 7) + uVar17 + lVar23);
    } while (local_34 < 0x41);
  }
LAB_00f00be5:
  local_50 = pbVar25 + local_90;
  if (1 < (uint64_t)((int64_t)puVar4 - (int64_t)puVar37)) {
    if (local_34 < 0x41) {
      do {
        if (local_90 < 8) {
          if (local_90 == 0) break;
          bVar43 = local_50 + -(uint64_t)(local_34 >> 3) < pbVar25;
          uVar39 = (uint)local_90;
          if (!bVar43) {
            uVar39 = local_34 >> 3;
          }
          local_34 = local_34 + uVar39 * -8;
        }
        else {
          uVar39 = local_34 >> 3;
          local_34 = local_34 & 7;
          bVar43 = false;
        }
        local_90 = local_90 - (uint64_t)uVar39;
        local_50 = pbVar25 + local_90;
        local_88 = *(uint64_t *)(pbVar25 + local_90);
        if ((puVar4 + -1 < puVar37) || (bVar43)) break;
        uVar17 = (local_88 << ((byte)local_34 & 0x3f)) >> (-local_3c & 0x3f);
        *puVar37 = *(void*)(param_3 + uVar17 + 1);
        local_34 = *(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + local_34;
        puVar37 = (void*)
                  ((int64_t)puVar37 + (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7));
        if (0x40 < local_34) break;
      } while( true );
    }
    for (; puVar37 <= puVar4 + -1;
        puVar37 = (void*)
                  ((uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7) + (int64_t)puVar37)) {
      uVar17 = (local_88 << ((byte)local_34 & 0x3f)) >> (-local_3c & 0x3f);
      *puVar37 = *(void*)(param_3 + uVar17 + 1);
      local_34 = *(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + local_34;
    }
  }
  if (puVar37 < puVar4) {
    uVar17 = (local_88 << ((byte)local_34 & 0x3f)) >> (-local_3c & 0x3f);
    *(void*)puVar37 = *(void*)(param_3 + uVar17 + 1);
    if (*(char *)((int64_t)param_3 + uVar17 * 4 + 7) == '\x01') {
      local_34 = local_34 + *(byte *)((int64_t)param_3 + uVar17 * 4 + 6);
    }
    else if ((local_34 < 0x40) &&
            (local_34 = local_34 + *(byte *)((int64_t)param_3 + uVar17 * 4 + 6), 0x3f < local_34))
    {
      local_34 = 0x40;
    }
  }
  local_68 = lVar32;
  if ((uint64_t)((int64_t)puVar22 - (int64_t)local_70) < 8) {
    if (local_54 < 0x41) {
      if (lVar32 < 8) {
        if (lVar32 == 0) {
LAB_00f010bf:
          local_68 = 0;
          goto LAB_00f010c5;
        }
        uVar39 = (uint)lVar32;
        if (-1 < (int64_t)(lVar32 - (uint64_t)(local_54 >> 3))) {
          uVar39 = local_54 >> 3;
        }
        local_54 = local_54 + uVar39 * -8;
      }
      else {
        uVar39 = local_54 >> 3;
        local_54 = local_54 & 7;
      }
      local_68 = lVar32 - (uint64_t)uVar39;
      local_80 = *(uint64_t *)(pbVar30 + local_68);
    }
  }
  else if (local_3c < 0xc) {
    if (local_54 < 0x41) {
      bVar18 = -local_3c & 0x3f;
      do {
        if ((int64_t)local_68 < 8) {
          if (local_68 == 0) goto LAB_00f010bf;
          lVar32 = local_68 - (local_54 >> 3);
          uVar39 = (uint)local_68;
          if (-1 < lVar32) {
            uVar39 = local_54 >> 3;
          }
          uVar38 = (uint)((uint64_t)lVar32 >> 0x3f);
          local_54 = local_54 + uVar39 * -8;
        }
        else {
          uVar39 = local_54 >> 3;
          local_54 = local_54 & 7;
          uVar38 = 0;
        }
        local_68 = local_68 - uVar39;
        local_80 = *(uint64_t *)(pbVar30 + local_68);
        if (((void*)((int64_t)puVar22 - 9U) <= local_70) || (uVar38 != 0)) break;
        uVar17 = (local_80 << ((byte)local_54 & 0x3f)) >> bVar18;
        *local_70 = *(void*)(param_3 + uVar17 + 1);
        iVar24 = *(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + local_54;
        uVar21 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
        uVar17 = (local_80 << ((byte)iVar24 & 0x3f)) >> bVar18;
        *(void*)((int64_t)local_70 + uVar21) = *(void*)(param_3 + uVar17 + 1);
        iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + iVar24;
        uVar29 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
        uVar17 = (local_80 << ((byte)iVar24 & 0x3f)) >> bVar18;
        lVar32 = uVar29 + uVar21;
        *(void*)((int64_t)local_70 + uVar29 + uVar21) =
             *(void*)(param_3 + uVar17 + 1);
        iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + iVar24;
        uVar17 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
        uVar29 = (local_80 << ((byte)iVar24 & 0x3f)) >> bVar18;
        lVar23 = uVar17 + lVar32;
        *(void*)((int64_t)local_70 + uVar17 + lVar32) =
             *(void*)(param_3 + uVar29 + 1);
        iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar29 * 4 + 6) + iVar24;
        uVar29 = (uint64_t)*(byte *)((int64_t)param_3 + uVar29 * 4 + 7);
        uVar17 = (local_80 << ((byte)iVar24 & 0x3f)) >> bVar18;
        *(void*)((int64_t)local_70 + uVar29 + lVar23) =
             *(void*)(param_3 + uVar17 + 1);
        local_54 = (uint)*(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + iVar24;
        local_70 = (void*)
                   ((int64_t)local_70 +
                   (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7) + uVar29 + lVar23);
      } while (local_54 < 0x41);
    }
  }
  else if (local_54 < 0x41) {
    bVar18 = -local_3c & 0x3f;
    do {
      if ((int64_t)local_68 < 8) {
        if (local_68 == 0) goto LAB_00f010bf;
        lVar32 = local_68 - (local_54 >> 3);
        uVar39 = (uint)local_68;
        if (-1 < lVar32) {
          uVar39 = local_54 >> 3;
        }
        uVar38 = (uint)((uint64_t)lVar32 >> 0x3f);
        local_54 = local_54 + uVar39 * -8;
      }
      else {
        uVar39 = local_54 >> 3;
        local_54 = local_54 & 7;
        uVar38 = 0;
      }
      local_68 = local_68 - uVar39;
      local_80 = *(uint64_t *)(pbVar30 + local_68);
      if (((void*)((int64_t)puVar22 - 7U) <= local_70) || (uVar38 != 0)) break;
      uVar17 = (local_80 << ((byte)local_54 & 0x3f)) >> bVar18;
      *local_70 = *(void*)(param_3 + uVar17 + 1);
      iVar24 = *(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + local_54;
      uVar21 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
      uVar17 = (local_80 << ((byte)iVar24 & 0x3f)) >> bVar18;
      *(void*)((int64_t)local_70 + uVar21) = *(void*)(param_3 + uVar17 + 1);
      iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + iVar24;
      uVar29 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
      uVar17 = (local_80 << ((byte)iVar24 & 0x3f)) >> bVar18;
      lVar32 = uVar29 + uVar21;
      *(void*)((int64_t)local_70 + uVar29 + uVar21) = *(void*)(param_3 + uVar17 + 1);
      iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + iVar24;
      uVar17 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
      uVar29 = (local_80 << ((byte)iVar24 & 0x3f)) >> bVar18;
      *(void*)((int64_t)local_70 + uVar17 + lVar32) = *(void*)(param_3 + uVar29 + 1);
      local_54 = (uint)*(byte *)((int64_t)param_3 + uVar29 * 4 + 6) + iVar24;
      local_70 = (void*)
                 ((int64_t)local_70 +
                 (uint64_t)*(byte *)((int64_t)param_3 + uVar29 * 4 + 7) + uVar17 + lVar32);
    } while (local_54 < 0x41);
  }
LAB_00f010c5:
  pbVar35 = pbVar30 + local_68;
  if (1 < (uint64_t)((int64_t)puVar22 - (int64_t)local_70)) {
    if (local_54 < 0x41) {
      do {
        if ((int64_t)local_68 < 8) {
          if (local_68 == 0) break;
          bVar43 = pbVar35 + -(uint64_t)(local_54 >> 3) < pbVar30;
          uVar39 = (uint)local_68;
          if (!bVar43) {
            uVar39 = local_54 >> 3;
          }
          local_54 = local_54 + uVar39 * -8;
        }
        else {
          uVar39 = local_54 >> 3;
          local_54 = local_54 & 7;
          bVar43 = false;
        }
        local_68 = local_68 - uVar39;
        pbVar35 = pbVar30 + local_68;
        local_80 = *(uint64_t *)(pbVar30 + local_68);
        if ((puVar22 + -1 < local_70) || (bVar43)) break;
        uVar17 = (local_80 << ((byte)local_54 & 0x3f)) >> (-local_3c & 0x3f);
        *local_70 = *(void*)(param_3 + uVar17 + 1);
        local_54 = *(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + local_54;
        local_70 = (void*)
                   ((int64_t)local_70 + (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7));
        if (0x40 < local_54) break;
      } while( true );
    }
    for (; local_70 <= puVar22 + -1;
        local_70 = (void*)
                   ((uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7) + (int64_t)local_70))
    {
      uVar17 = (local_80 << ((byte)local_54 & 0x3f)) >> (-local_3c & 0x3f);
      *local_70 = *(void*)(param_3 + uVar17 + 1);
      local_54 = *(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + local_54;
    }
  }
  if (local_70 < puVar22) {
    uVar17 = (local_80 << ((byte)local_54 & 0x3f)) >> (-local_3c & 0x3f);
    *(void*)local_70 = *(void*)(param_3 + uVar17 + 1);
    if (*(char *)((int64_t)param_3 + uVar17 * 4 + 7) == '\x01') {
      local_54 = local_54 + *(byte *)((int64_t)param_3 + uVar17 * 4 + 6);
    }
    else if ((local_54 < 0x40) &&
            (local_54 = local_54 + *(byte *)((int64_t)param_3 + uVar17 * 4 + 6), 0x3f < local_54))
    {
      local_54 = 0x40;
    }
  }
  if ((uint64_t)((int64_t)puVar2 - (int64_t)puVar28) < 8) {
    if (uVar20 < 0x41) {
      if (local_60 < 8) {
        if (local_60 == 0) {
          uVar17 = (uint64_t)uVar20;
LAB_00f015a0:
          local_60 = 0;
          goto LAB_00f015b1;
        }
        uVar39 = (uint)local_60;
        if (-1 < (int64_t)(local_60 - (uint64_t)(uVar20 >> 3))) {
          uVar39 = uVar20 >> 3;
        }
        uVar20 = uVar20 + uVar39 * -8;
      }
      else {
        uVar39 = uVar20 >> 3;
        uVar20 = uVar20 & 7;
      }
      uVar17 = (uint64_t)uVar20;
      local_60 = local_60 - (uint64_t)uVar39;
      local_78 = *(uint64_t *)(pbVar34 + local_60);
    }
    else {
      uVar17 = (uint64_t)uVar20;
    }
  }
  else if (local_3c < 0xc) {
    uVar17 = (uint64_t)uVar20;
    if (uVar20 < 0x41) {
      bVar18 = -local_3c & 0x3f;
      do {
        if (local_60 < 8) {
          if (local_60 == 0) {
            local_60 = 0;
            break;
          }
          lVar32 = local_60 - (uVar17 >> 3);
          uVar20 = (uint)local_60;
          if (-1 < lVar32) {
            uVar20 = (uint)(uVar17 >> 3);
          }
          uVar39 = (uint)((uint64_t)lVar32 >> 0x3f);
          uVar38 = (uint)uVar17 + uVar20 * -8;
        }
        else {
          uVar20 = (uint)(uVar17 >> 3);
          uVar38 = (uint)uVar17 & 7;
          uVar39 = 0;
        }
        uVar17 = (uint64_t)uVar38;
        local_60 = local_60 - (uint64_t)uVar20;
        local_78 = *(uint64_t *)(pbVar34 + local_60);
        if (((void*)((int64_t)puVar2 - 9U) <= puVar28) || (uVar39 != 0)) break;
        uVar17 = (local_78 << ((byte)uVar38 & 0x3f)) >> bVar18;
        *puVar28 = *(void*)(param_3 + uVar17 + 1);
        iVar24 = *(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + uVar38;
        uVar21 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
        uVar17 = (local_78 << ((byte)iVar24 & 0x3f)) >> bVar18;
        *(void*)((int64_t)puVar28 + uVar21) = *(void*)(param_3 + uVar17 + 1);
        iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + iVar24;
        uVar29 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
        uVar17 = (local_78 << ((byte)iVar24 & 0x3f)) >> bVar18;
        lVar32 = uVar29 + uVar21;
        *(void*)((int64_t)puVar28 + uVar29 + uVar21) = *(void*)(param_3 + uVar17 + 1)
        ;
        iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + iVar24;
        uVar17 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
        uVar29 = (local_78 << ((byte)iVar24 & 0x3f)) >> bVar18;
        lVar23 = uVar17 + lVar32;
        *(void*)((int64_t)puVar28 + uVar17 + lVar32) = *(void*)(param_3 + uVar29 + 1)
        ;
        iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar29 * 4 + 6) + iVar24;
        uVar17 = (uint64_t)*(byte *)((int64_t)param_3 + uVar29 * 4 + 7);
        uVar29 = (local_78 << ((byte)iVar24 & 0x3f)) >> bVar18;
        *(void*)((int64_t)puVar28 + uVar17 + lVar23) = *(void*)(param_3 + uVar29 + 1)
        ;
        uVar20 = (uint)*(byte *)((int64_t)param_3 + uVar29 * 4 + 6) + iVar24;
        puVar28 = (void*)
                  ((int64_t)puVar28 +
                  (uint64_t)*(byte *)((int64_t)param_3 + uVar29 * 4 + 7) + uVar17 + lVar23);
        uVar17 = (uint64_t)uVar20;
        if (0x40 < uVar20) break;
      } while( true );
    }
  }
  else {
    uVar17 = (uint64_t)uVar20;
    if (uVar20 < 0x41) {
      bVar18 = -local_3c & 0x3f;
      do {
        if (local_60 < 8) {
          if (local_60 == 0) goto LAB_00f015a0;
          lVar32 = local_60 - (uVar17 >> 3);
          uVar20 = (uint)local_60;
          if (-1 < lVar32) {
            uVar20 = (uint)(uVar17 >> 3);
          }
          uVar38 = (uint)((uint64_t)lVar32 >> 0x3f);
          uVar39 = (uint)uVar17 + uVar20 * -8;
        }
        else {
          uVar20 = (uint)(uVar17 >> 3);
          uVar39 = (uint)uVar17 & 7;
          uVar38 = 0;
        }
        local_60 = local_60 - (uint64_t)uVar20;
        local_78 = *(uint64_t *)(pbVar34 + local_60);
        uVar17 = (uint64_t)uVar39;
        if ((puVar19 <= puVar28) || (uVar38 != 0)) break;
        uVar17 = (local_78 << ((byte)uVar39 & 0x3f)) >> bVar18;
        *puVar28 = *(void*)(param_3 + uVar17 + 1);
        iVar24 = *(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + uVar39;
        uVar21 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
        uVar17 = (local_78 << ((byte)iVar24 & 0x3f)) >> bVar18;
        *(void*)((int64_t)puVar28 + uVar21) = *(void*)(param_3 + uVar17 + 1);
        iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + iVar24;
        uVar29 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
        uVar17 = (local_78 << ((byte)iVar24 & 0x3f)) >> bVar18;
        lVar32 = uVar29 + uVar21;
        *(void*)((int64_t)puVar28 + uVar29 + uVar21) = *(void*)(param_3 + uVar17 + 1)
        ;
        iVar24 = (uint)*(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + iVar24;
        uVar17 = (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7);
        uVar29 = (local_78 << ((byte)iVar24 & 0x3f)) >> bVar18;
        *(void*)((int64_t)puVar28 + uVar17 + lVar32) = *(void*)(param_3 + uVar29 + 1)
        ;
        uVar20 = (uint)*(byte *)((int64_t)param_3 + uVar29 * 4 + 6) + iVar24;
        puVar28 = (void*)
                  ((int64_t)puVar28 +
                  (uint64_t)*(byte *)((int64_t)param_3 + uVar29 * 4 + 7) + uVar17 + lVar32);
        uVar17 = (uint64_t)uVar20;
      } while (uVar20 < 0x41);
    }
  }
LAB_00f015b1:
  uVar20 = (uint)uVar17;
  pbVar40 = pbVar34 + local_60;
  if (1 < (uint64_t)((int64_t)puVar2 - (int64_t)puVar28)) {
    if (uVar20 < 0x41) {
      do {
        if (local_60 < 8) {
          if (local_60 == 0) break;
          bVar43 = pbVar40 + -(uVar17 >> 3) < pbVar34;
          uVar20 = (uint)local_60;
          if (!bVar43) {
            uVar20 = (uint)(uVar17 >> 3);
          }
          uVar39 = (uint)uVar17 + uVar20 * -8;
        }
        else {
          uVar20 = (uint)(uVar17 >> 3);
          uVar39 = (uint)uVar17 & 7;
          bVar43 = false;
        }
        uVar17 = (uint64_t)uVar39;
        local_60 = local_60 - (uint64_t)uVar20;
        pbVar40 = pbVar34 + local_60;
        local_78 = *(uint64_t *)(pbVar34 + local_60);
        if ((puVar2 + -1 < puVar28) || (bVar43)) break;
        uVar17 = (local_78 << ((byte)uVar39 & 0x3f)) >> (-local_3c & 0x3f);
        *puVar28 = *(void*)(param_3 + uVar17 + 1);
        uVar39 = *(byte *)((int64_t)param_3 + uVar17 * 4 + 6) + uVar39;
        puVar28 = (void*)
                  ((int64_t)puVar28 + (uint64_t)*(byte *)((int64_t)param_3 + uVar17 * 4 + 7));
        uVar17 = (uint64_t)uVar39;
        if (0x40 < uVar39) break;
      } while( true );
    }
    uVar20 = (uint)uVar17;
    for (; puVar28 <= puVar2 + -1;
        puVar28 = (void*)
                  ((uint64_t)*(byte *)((int64_t)param_3 + uVar29 * 4 + 7) + (int64_t)puVar28)) {
      uVar29 = (local_78 << ((byte)uVar17 & 0x3f)) >> (-local_3c & 0x3f);
      *puVar28 = *(void*)(param_3 + uVar29 + 1);
      uVar20 = (uint)*(byte *)((int64_t)param_3 + uVar29 * 4 + 6) + (int)uVar17;
      uVar17 = (uint64_t)uVar20;
    }
  }
  if (puVar28 < puVar2) {
    uVar17 = (local_78 << ((byte)uVar20 & 0x3f)) >> (-local_3c & 0x3f);
    *(void*)puVar28 = *(void*)(param_3 + uVar17 + 1);
    if (*(char *)((int64_t)param_3 + uVar17 * 4 + 7) == '\x01') {
      uVar20 = uVar20 + *(byte *)((int64_t)param_3 + uVar17 * 4 + 6);
    }
    else if ((uVar20 < 0x40) &&
            (uVar20 = uVar20 + *(byte *)((int64_t)param_3 + uVar17 * 4 + 6), 0x3f < uVar20)) {
      uVar20 = 0x40;
    }
  }
  if (uVar20 != 0x40) {
    arg1 = 0xffffffffffffffec;
  }
  if (pbVar40 != pbVar34) {
    arg1 = 0xffffffffffffffec;
  }
  if (local_54 != 0x40) {
    arg1 = 0xffffffffffffffec;
  }
  if (pbVar35 != pbVar30) {
    arg1 = 0xffffffffffffffec;
  }
  if (local_34 != 0x40) {
    arg1 = 0xffffffffffffffec;
  }
  if (local_50 != pbVar25) {
    arg1 = 0xffffffffffffffec;
  }
  if (local_38 != 0x40) {
    arg1 = 0xffffffffffffffec;
  }
  if (local_a0 != 6) {
    return 0xffffffffffffffec;
  }
  return arg1;
LAB_00f006c7:
  local_a0 = 6;
  goto LAB_00f006f0;
LAB_00f00bd0:
  local_90 = 0;
  goto LAB_00f00be5;
}

