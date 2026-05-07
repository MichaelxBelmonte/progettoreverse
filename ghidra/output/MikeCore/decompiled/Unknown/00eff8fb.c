// Function: FUN_00eff8fb
// Address: 00eff8fb
// Size: 7861 bytes
// Class: Unknown


ulonglong FUN_00eff8fb(ulonglong param_1,ushort *param_2,undefined4 *param_3,ulonglong param_4)

{
  ushort *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  byte bVar18;
  undefined2 *puVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined2 *puVar22;
  longlong lVar23;
  int iVar24;
  ulonglong unaff_RSI;
  byte *pbVar25;
  ulonglong uVar26;
  int iVar27;
  undefined2 *unaff_RDI;
  undefined2 *puVar28;
  ulonglong uVar29;
  byte *pbVar30;
  ulonglong uVar31;
  longlong lVar32;
  code *pcVar33;
  byte *pbVar34;
  byte *pbVar35;
  ulonglong uVar36;
  undefined2 *puVar37;
  uint uVar38;
  uint uVar39;
  byte *pbVar40;
  ulonglong uVar41;
  longlong lVar42;
  bool bVar43;
  longlong local_e8;
  longlong local_a8;
  longlong local_a0;
  longlong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined2 *local_70;
  ulonglong local_68;
  longlong local_60;
  uint local_54;
  byte *local_50;
  byte local_3c;
  uint local_38;
  uint local_34;
  
  if ((param_4 & 1) != 0) {
    if ((param_4 & 0x20) == 0) {
      pcVar33 = FUN_00f03614;
      if ((param_4 & 0x10) == 0) {
        pcVar33 = (code *)&HUF_decompress4X2_usingDTable_internal_fast_asm_loop;
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
  uVar29 = (ulonglong)uVar9;
  uVar10 = param_2[1];
  uVar21 = (ulonglong)uVar10;
  uVar11 = param_2[2];
  uVar26 = (ulonglong)uVar11;
  uVar17 = uVar29 + uVar21 + uVar26 + 6;
  uVar41 = param_1 - uVar17;
  if (param_1 < uVar17) {
    return 0xffffffffffffffec;
  }
  puVar2 = (undefined2 *)((longlong)unaff_RDI + unaff_RSI);
  uVar17 = unaff_RSI + 3 >> 2;
  puVar3 = (undefined2 *)((longlong)unaff_RDI + uVar17);
  puVar4 = (undefined2 *)((longlong)puVar3 + uVar17);
  puVar22 = (undefined2 *)(uVar17 + (longlong)puVar4);
  if (puVar2 < puVar22) {
    return 0xffffffffffffffec;
  }
  if (unaff_RSI < 6) {
    return 0xffffffffffffffec;
  }
  if (uVar29 == 0) {
    return 0xffffffffffffffb8;
  }
  puVar1 = param_2 + 3;
  if (uVar9 < 8) {
    local_68 = (ulonglong)(byte)*puVar1;
    switch(uVar9) {
    case 7:
      local_68 = local_68 | (ulonglong)(byte)param_2[6] << 0x30;
    case 6:
      local_68 = local_68 + ((ulonglong)*(byte *)((longlong)param_2 + 0xb) << 0x28);
    case 5:
      local_68 = local_68 + ((ulonglong)(byte)param_2[5] << 0x20);
    case 4:
      local_68 = local_68 + (ulonglong)*(byte *)((longlong)param_2 + 9) * 0x1000000;
    case 3:
      local_68 = local_68 + (ulonglong)(byte)param_2[4] * 0x10000;
    case 2:
      local_68 = local_68 + (ulonglong)*(byte *)((longlong)param_2 + 7) * 0x100;
    }
    bVar18 = *(byte *)((uVar29 - 1) + (longlong)puVar1);
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
    bVar18 = *(byte *)((uVar29 - 1) + (longlong)puVar1);
    if (bVar18 == 0) {
      return 0xffffffffffffffff;
    }
    local_a0 = uVar29 - 2;
    local_68 = *(ulonglong *)((longlong)param_2 + local_a0);
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
  pbVar25 = (byte *)((longlong)param_2 + uVar29 + 6);
  if (uVar10 < 8) {
    local_88 = (ulonglong)*pbVar25;
    switch(uVar10) {
    case 7:
      local_88 = local_88 | (ulonglong)*(byte *)((longlong)param_2 + uVar29 + 0xc) << 0x30;
    case 6:
      local_88 = local_88 + ((ulonglong)*(byte *)((longlong)param_2 + uVar29 + 0xb) << 0x28);
    case 5:
      local_88 = local_88 + ((ulonglong)*(byte *)((longlong)param_2 + uVar29 + 10) << 0x20);
    case 4:
      local_88 = local_88 + (ulonglong)*(byte *)((longlong)param_2 + uVar29 + 9) * 0x1000000;
    case 3:
      local_88 = local_88 + (ulonglong)*(byte *)((longlong)param_2 + uVar29 + 8) * 0x10000;
    case 2:
      local_88 = local_88 + (ulonglong)*(byte *)((longlong)param_2 + uVar29 + 7) * 0x100;
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
    local_88 = *(ulonglong *)(pbVar25 + local_90);
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
    local_80 = (ulonglong)*pbVar30;
    switch(uVar11) {
    case 7:
      local_80 = local_80 | (ulonglong)pbVar30[6] << 0x30;
    case 6:
      local_80 = local_80 + ((ulonglong)pbVar30[5] << 0x28);
    case 5:
      local_80 = local_80 + ((ulonglong)pbVar30[4] << 0x20);
    case 4:
      local_80 = local_80 + (ulonglong)pbVar30[3] * 0x1000000;
    case 3:
      local_80 = local_80 + (ulonglong)pbVar30[2] * 0x10000;
    case 2:
      local_80 = local_80 + (ulonglong)pbVar30[1] * 0x100;
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
    local_80 = *(ulonglong *)(pbVar30 + lVar32);
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
    local_78 = (ulonglong)*pbVar34;
    switch(uVar41) {
    case 7:
      local_78 = local_78 | (ulonglong)pbVar34[6] << 0x30;
    case 6:
      local_78 = local_78 + ((ulonglong)pbVar34[5] << 0x28);
    case 5:
      local_78 = local_78 + ((ulonglong)pbVar34[4] << 0x20);
    case 4:
      local_78 = local_78 + (ulonglong)pbVar34[3] * 0x1000000;
    case 3:
      local_78 = local_78 + (ulonglong)pbVar34[2] * 0x10000;
    case 2:
      local_78 = local_78 + (ulonglong)pbVar34[1] * 0x100;
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
    local_78 = *(ulonglong *)(pbVar34 + (uVar41 - 8));
    local_60 = uVar41 - 8;
    uVar20 = 0x1f;
    if (bVar18 != 0) {
      for (; bVar18 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    uVar20 = (uVar20 ^ 0x1f) - 0x17;
  }
  puVar19 = (undefined2 *)((longlong)unaff_RDI + (unaff_RSI - 7));
  local_3c = (byte)((uint)*param_3 >> 0x10);
  puVar28 = puVar22;
  puVar37 = puVar3;
  local_70 = puVar4;
  if ((7 < (ulonglong)((longlong)puVar2 - (longlong)puVar22)) && (puVar22 < puVar19)) {
    bVar18 = -local_3c & 0x3f;
    bVar12 = 1;
    lVar23 = local_a0;
    lVar42 = local_60;
    local_a8 = lVar32;
    do {
      uVar17 = (local_68 << ((byte)local_38 & 0x3f)) >> bVar18;
      *unaff_RDI = *(undefined2 *)(param_3 + uVar17 + 1);
      iVar27 = *(byte *)((longlong)param_3 + uVar17 * 4 + 6) + local_38;
      uVar29 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
      uVar17 = (local_68 << ((byte)iVar27 & 0x3f)) >> bVar18;
      *(undefined2 *)((longlong)unaff_RDI + uVar29) = *(undefined2 *)(param_3 + uVar17 + 1);
      iVar27 = (uint)*(byte *)((longlong)param_3 + uVar17 * 4 + 6) + iVar27;
      uVar21 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
      lVar13 = uVar21 + uVar29;
      uVar17 = (local_68 << ((byte)iVar27 & 0x3f)) >> bVar18;
      *(undefined2 *)((longlong)unaff_RDI + uVar21 + uVar29) = *(undefined2 *)(param_3 + uVar17 + 1)
      ;
      iVar27 = (uint)*(byte *)((longlong)param_3 + uVar17 * 4 + 6) + iVar27;
      uVar29 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
      uVar17 = (local_68 << ((byte)iVar27 & 0x3f)) >> bVar18;
      *(undefined2 *)((longlong)unaff_RDI + uVar29 + lVar13) = *(undefined2 *)(param_3 + uVar17 + 1)
      ;
      bVar5 = *(byte *)((longlong)param_3 + uVar17 * 4 + 6);
      uVar21 = (local_88 << ((byte)local_34 & 0x3f)) >> bVar18;
      bVar6 = *(byte *)((longlong)param_3 + uVar17 * 4 + 7);
      *puVar37 = *(undefined2 *)(param_3 + uVar21 + 1);
      iVar24 = *(byte *)((longlong)param_3 + uVar21 * 4 + 6) + local_34;
      local_38 = (uint)bVar5 + iVar27;
      uVar17 = (local_88 << ((byte)iVar24 & 0x3f)) >> bVar18;
      uVar21 = (ulonglong)*(byte *)((longlong)param_3 + uVar21 * 4 + 7);
      *(undefined2 *)((longlong)puVar37 + uVar21) = *(undefined2 *)(param_3 + uVar17 + 1);
      iVar24 = (uint)*(byte *)((longlong)param_3 + uVar17 * 4 + 6) + iVar24;
      uVar26 = (local_88 << ((byte)iVar24 & 0x3f)) >> bVar18;
      uVar17 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
      *(undefined2 *)((longlong)puVar37 + uVar17 + uVar21) = *(undefined2 *)(param_3 + uVar26 + 1);
      iVar24 = (uint)*(byte *)((longlong)param_3 + uVar26 * 4 + 6) + iVar24;
      lVar14 = uVar17 + uVar21;
      uVar21 = (local_88 << ((byte)iVar24 & 0x3f)) >> bVar18;
      uVar17 = (ulonglong)*(byte *)((longlong)param_3 + uVar26 * 4 + 7);
      *(undefined2 *)((longlong)puVar37 + uVar17 + lVar14) = *(undefined2 *)(param_3 + uVar21 + 1);
      local_a0 = lVar23;
      if (0xd < lVar23) {
        local_a0 = lVar23 - (ulonglong)(local_38 >> 3);
        local_38 = local_38 & 7;
        local_68 = *(ulonglong *)((longlong)param_2 + local_a0);
      }
      local_34 = iVar24 + (uint)*(byte *)((longlong)param_3 + uVar21 * 4 + 6);
      bVar5 = *(byte *)((longlong)param_3 + uVar21 * 4 + 7);
      if (local_90 < 8) {
        local_e8 = local_90;
      }
      else {
        local_e8 = local_90 - (ulonglong)(local_34 >> 3);
        local_34 = local_34 & 7;
        local_88 = *(ulonglong *)(pbVar25 + local_e8);
      }
      uVar21 = (local_80 << ((byte)local_54 & 0x3f)) >> bVar18;
      *local_70 = *(undefined2 *)(param_3 + uVar21 + 1);
      iVar24 = *(byte *)((longlong)param_3 + uVar21 * 4 + 6) + local_54;
      uVar21 = (ulonglong)*(byte *)((longlong)param_3 + uVar21 * 4 + 7);
      uVar26 = (local_80 << ((byte)iVar24 & 0x3f)) >> bVar18;
      *(undefined2 *)((longlong)local_70 + uVar21) = *(undefined2 *)(param_3 + uVar26 + 1);
      iVar24 = (uint)*(byte *)((longlong)param_3 + uVar26 * 4 + 6) + iVar24;
      uVar26 = (ulonglong)*(byte *)((longlong)param_3 + uVar26 * 4 + 7);
      lVar15 = uVar26 + uVar21;
      uVar41 = (local_80 << ((byte)iVar24 & 0x3f)) >> bVar18;
      *(undefined2 *)((longlong)local_70 + uVar26 + uVar21) = *(undefined2 *)(param_3 + uVar41 + 1);
      iVar24 = (uint)*(byte *)((longlong)param_3 + uVar41 * 4 + 6) + iVar24;
      uVar26 = (ulonglong)*(byte *)((longlong)param_3 + uVar41 * 4 + 7);
      uVar21 = (local_80 << ((byte)iVar24 & 0x3f)) >> bVar18;
      *(undefined2 *)((longlong)local_70 + uVar26 + lVar15) = *(undefined2 *)(param_3 + uVar21 + 1);
      bVar7 = *(byte *)((longlong)param_3 + uVar21 * 4 + 6);
      uVar41 = (local_78 << ((byte)uVar20 & 0x3f)) >> bVar18;
      bVar8 = *(byte *)((longlong)param_3 + uVar21 * 4 + 7);
      *puVar28 = *(undefined2 *)(param_3 + uVar41 + 1);
      iVar27 = *(byte *)((longlong)param_3 + uVar41 * 4 + 6) + uVar20;
      uVar21 = (local_78 << ((byte)iVar27 & 0x3f)) >> bVar18;
      uVar31 = (ulonglong)*(byte *)((longlong)param_3 + uVar41 * 4 + 7);
      *(undefined2 *)((longlong)puVar28 + uVar31) = *(undefined2 *)(param_3 + uVar21 + 1);
      iVar27 = (uint)*(byte *)((longlong)param_3 + uVar21 * 4 + 6) + iVar27;
      uVar41 = (local_78 << ((byte)iVar27 & 0x3f)) >> bVar18;
      uVar21 = (ulonglong)*(byte *)((longlong)param_3 + uVar21 * 4 + 7);
      *(undefined2 *)((longlong)puVar28 + uVar21 + uVar31) = *(undefined2 *)(param_3 + uVar41 + 1);
      iVar27 = (uint)*(byte *)((longlong)param_3 + uVar41 * 4 + 6) + iVar27;
      local_54 = (uint)bVar7 + iVar24;
      uVar36 = (local_78 << ((byte)iVar27 & 0x3f)) >> bVar18;
      lVar16 = uVar21 + uVar31;
      uVar21 = (ulonglong)*(byte *)((longlong)param_3 + uVar41 * 4 + 7);
      *(undefined2 *)((longlong)puVar28 + uVar21 + lVar16) = *(undefined2 *)(param_3 + uVar36 + 1);
      lVar32 = local_a8;
      if (7 < local_a8) {
        lVar32 = local_a8 - (ulonglong)(local_54 >> 3);
        local_54 = local_54 & 7;
        local_80 = *(ulonglong *)(pbVar30 + lVar32);
      }
      uVar20 = iVar27 + (uint)*(byte *)((longlong)param_3 + uVar36 * 4 + 6);
      puVar28 = (undefined2 *)
                ((longlong)puVar28 +
                (ulonglong)*(byte *)((longlong)param_3 + uVar36 * 4 + 7) + uVar21 + lVar16);
      local_60 = lVar42;
      if (7 < lVar42) {
        local_60 = lVar42 - (ulonglong)(uVar20 >> 3);
        uVar20 = uVar20 & 7;
        local_78 = *(ulonglong *)(pbVar34 + local_60);
      }
      unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)bVar6 + uVar29 + lVar13);
      puVar37 = (undefined2 *)((longlong)puVar37 + (ulonglong)bVar5 + uVar17 + lVar14);
      local_70 = (undefined2 *)((longlong)local_70 + (ulonglong)bVar8 + uVar26 + lVar15);
      bVar12 = bVar12 & 7 < lVar42 & ((0xd < lVar23 && 7 < local_90) && 7 < local_a8);
      local_90 = local_e8;
      lVar23 = local_a0;
      lVar42 = local_60;
      local_a8 = lVar32;
    } while ((bool)(bVar12 & puVar28 < puVar19));
  }
  if (puVar3 < unaff_RDI) {
    return 0xffffffffffffffec;
  }
  if (puVar4 < puVar37) {
    return 0xffffffffffffffec;
  }
  if (puVar22 < local_70) {
    return 0xffffffffffffffec;
  }
  if ((ulonglong)((longlong)puVar3 - (longlong)unaff_RDI) < 8) {
    if (local_38 < 0x41) {
      if (local_a0 < 0xe) {
        if (local_a0 == 6) {
          local_a0 = 6;
          goto LAB_00f006f0;
        }
        uVar39 = (int)local_a0 - 6;
        if (5 < (longlong)(local_a0 - (ulonglong)(local_38 >> 3))) {
          uVar39 = local_38 >> 3;
        }
        local_38 = local_38 + uVar39 * -8;
      }
      else {
        uVar39 = local_38 >> 3;
        local_38 = local_38 & 7;
      }
      local_a0 = local_a0 - (ulonglong)uVar39;
      local_68 = *(ulonglong *)((longlong)param_2 + local_a0);
    }
  }
  else if (local_3c < 0xc) {
    if (local_38 < 0x41) {
      bVar18 = -local_3c & 0x3f;
      do {
        if (local_a0 < 0xe) {
          if (local_a0 == 6) goto LAB_00f006c7;
          lVar23 = local_a0 - (ulonglong)(local_38 >> 3);
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
        local_a0 = local_a0 - (ulonglong)uVar39;
        local_68 = *(ulonglong *)((longlong)param_2 + local_a0);
        if (((undefined2 *)((longlong)puVar3 - 9U) <= unaff_RDI) || (bVar43)) break;
        uVar17 = (local_68 << ((byte)local_38 & 0x3f)) >> bVar18;
        *unaff_RDI = *(undefined2 *)(param_3 + uVar17 + 1);
        iVar24 = *(byte *)((longlong)param_3 + uVar17 * 4 + 6) + local_38;
        uVar21 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
        uVar17 = (local_68 << ((byte)iVar24 & 0x3f)) >> bVar18;
        *(undefined2 *)((longlong)unaff_RDI + uVar21) = *(undefined2 *)(param_3 + uVar17 + 1);
        iVar24 = (uint)*(byte *)((longlong)param_3 + uVar17 * 4 + 6) + iVar24;
        uVar29 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
        uVar17 = (local_68 << ((byte)iVar24 & 0x3f)) >> bVar18;
        lVar23 = uVar29 + uVar21;
        *(undefined2 *)((longlong)unaff_RDI + uVar29 + uVar21) =
             *(undefined2 *)(param_3 + uVar17 + 1);
        iVar24 = (uint)*(byte *)((longlong)param_3 + uVar17 * 4 + 6) + iVar24;
        uVar17 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
        uVar29 = (local_68 << ((byte)iVar24 & 0x3f)) >> bVar18;
        lVar42 = uVar17 + lVar23;
        *(undefined2 *)((longlong)unaff_RDI + uVar17 + lVar23) =
             *(undefined2 *)(param_3 + uVar29 + 1);
        iVar24 = (uint)*(byte *)((longlong)param_3 + uVar29 * 4 + 6) + iVar24;
        uVar17 = (ulonglong)*(byte *)((longlong)param_3 + uVar29 * 4 + 7);
        uVar29 = (local_68 << ((byte)iVar24 & 0x3f)) >> bVar18;
        *(undefined2 *)((longlong)unaff_RDI + uVar17 + lVar42) =
             *(undefined2 *)(param_3 + uVar29 + 1);
        local_38 = (uint)*(byte *)((longlong)param_3 + uVar29 * 4 + 6) + iVar24;
        unaff_RDI = (undefined2 *)
                    ((longlong)unaff_RDI +
                    (ulonglong)*(byte *)((longlong)param_3 + uVar29 * 4 + 7) + uVar17 + lVar42);
      } while (local_38 < 0x41);
    }
  }
  else if (local_38 < 0x41) {
    bVar18 = -local_3c & 0x3f;
    do {
      if (local_a0 < 0xe) {
        if (local_a0 == 6) goto LAB_00f006c7;
        lVar23 = local_a0 - (ulonglong)(local_38 >> 3);
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
      local_a0 = local_a0 - (ulonglong)uVar39;
      local_68 = *(ulonglong *)((longlong)param_2 + local_a0);
      if (((undefined2 *)((longlong)puVar3 - 7U) <= unaff_RDI) || (bVar43)) break;
      uVar17 = (local_68 << ((byte)local_38 & 0x3f)) >> bVar18;
      *unaff_RDI = *(undefined2 *)(param_3 + uVar17 + 1);
      iVar24 = *(byte *)((longlong)param_3 + uVar17 * 4 + 6) + local_38;
      uVar21 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
      uVar17 = (local_68 << ((byte)iVar24 & 0x3f)) >> bVar18;
      *(undefined2 *)((longlong)unaff_RDI + uVar21) = *(undefined2 *)(param_3 + uVar17 + 1);
      iVar24 = (uint)*(byte *)((longlong)param_3 + uVar17 * 4 + 6) + iVar24;
      uVar29 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
      uVar17 = (local_68 << ((byte)iVar24 & 0x3f)) >> bVar18;
      lVar23 = uVar29 + uVar21;
      *(undefined2 *)((longlong)unaff_RDI + uVar29 + uVar21) = *(undefined2 *)(param_3 + uVar17 + 1)
      ;
      iVar24 = (uint)*(byte *)((longlong)param_3 + uVar17 * 4 + 6) + iVar24;
      uVar17 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
      uVar29 = (local_68 << ((byte)iVar24 & 0x3f)) >> bVar18;
      *(undefined2 *)((longlong)unaff_RDI + uVar17 + lVar23) = *(undefined2 *)(param_3 + uVar29 + 1)
      ;
      local_38 = (uint)*(byte *)((longlong)param_3 + uVar29 * 4 + 6) + iVar24;
      unaff_RDI = (undefined2 *)
                  ((longlong)unaff_RDI +
                  (ulonglong)*(byte *)((longlong)param_3 + uVar29 * 4 + 7) + uVar17 + lVar23);
    } while (local_38 < 0x41);
  }
LAB_00f006f0:
  if (1 < (ulonglong)((longlong)puVar3 - (longlong)unaff_RDI)) {
    if (local_38 < 0x41) {
      do {
        if (local_a0 < 0xe) {
          if (local_a0 == 6) {
            local_a0 = 6;
            break;
          }
          lVar23 = local_a0 - (ulonglong)(local_38 >> 3);
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
        local_a0 = local_a0 - (ulonglong)uVar39;
        local_68 = *(ulonglong *)((longlong)param_2 + local_a0);
        if ((puVar3 + -1 < unaff_RDI) || (bVar43)) break;
        uVar17 = (local_68 << ((byte)local_38 & 0x3f)) >> (-local_3c & 0x3f);
        *unaff_RDI = *(undefined2 *)(param_3 + uVar17 + 1);
        local_38 = *(byte *)((longlong)param_3 + uVar17 * 4 + 6) + local_38;
        unaff_RDI = (undefined2 *)
                    ((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7))
        ;
        if (0x40 < local_38) break;
      } while( true );
    }
    for (; unaff_RDI <= puVar3 + -1;
        unaff_RDI = (undefined2 *)
                    ((ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7) + (longlong)unaff_RDI)
        ) {
      uVar17 = (local_68 << ((byte)local_38 & 0x3f)) >> (-local_3c & 0x3f);
      *unaff_RDI = *(undefined2 *)(param_3 + uVar17 + 1);
      local_38 = *(byte *)((longlong)param_3 + uVar17 * 4 + 6) + local_38;
    }
  }
  if (unaff_RDI < puVar3) {
    uVar17 = (local_68 << ((byte)local_38 & 0x3f)) >> (-local_3c & 0x3f);
    *(undefined1 *)unaff_RDI = *(undefined1 *)(param_3 + uVar17 + 1);
    if (*(char *)((longlong)param_3 + uVar17 * 4 + 7) == '\x01') {
      local_38 = local_38 + *(byte *)((longlong)param_3 + uVar17 * 4 + 6);
    }
    else if ((local_38 < 0x40) &&
            (local_38 = local_38 + *(byte *)((longlong)param_3 + uVar17 * 4 + 6), 0x3f < local_38))
    {
      local_38 = 0x40;
    }
  }
  if ((ulonglong)((longlong)puVar4 - (longlong)puVar37) < 8) {
    if (local_34 < 0x41) {
      if (local_90 < 8) {
        if (local_90 == 0) {
          local_90 = 0;
          goto LAB_00f00be5;
        }
        uVar39 = (uint)local_90;
        if (-1 < (longlong)(local_90 - (ulonglong)(local_34 >> 3))) {
          uVar39 = local_34 >> 3;
        }
        local_34 = local_34 + uVar39 * -8;
      }
      else {
        uVar39 = local_34 >> 3;
        local_34 = local_34 & 7;
      }
      local_90 = local_90 - (ulonglong)uVar39;
      local_88 = *(ulonglong *)(pbVar25 + local_90);
    }
  }
  else if (local_3c < 0xc) {
    if (local_34 < 0x41) {
      bVar18 = -local_3c & 0x3f;
      do {
        if (local_90 < 8) {
          if (local_90 == 0) goto LAB_00f00bd0;
          lVar23 = local_90 - (ulonglong)(local_34 >> 3);
          uVar39 = (uint)local_90;
          if (-1 < lVar23) {
            uVar39 = local_34 >> 3;
          }
          uVar38 = (uint)((ulonglong)lVar23 >> 0x3f);
          local_34 = local_34 + uVar39 * -8;
        }
        else {
          uVar39 = local_34 >> 3;
          local_34 = local_34 & 7;
          uVar38 = 0;
        }
        local_90 = local_90 - (ulonglong)uVar39;
        local_88 = *(ulonglong *)(pbVar25 + local_90);
        if (((undefined2 *)((longlong)puVar4 - 9U) <= puVar37) || (uVar38 != 0)) break;
        uVar17 = (local_88 << ((byte)local_34 & 0x3f)) >> bVar18;
        *puVar37 = *(undefined2 *)(param_3 + uVar17 + 1);
        iVar24 = *(byte *)((longlong)param_3 + uVar17 * 4 + 6) + local_34;
        uVar21 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
        uVar17 = (local_88 << ((byte)iVar24 & 0x3f)) >> bVar18;
        *(undefined2 *)((longlong)puVar37 + uVar21) = *(undefined2 *)(param_3 + uVar17 + 1);
        iVar24 = (uint)*(byte *)((longlong)param_3 + uVar17 * 4 + 6) + iVar24;
        uVar29 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
        uVar17 = (local_88 << ((byte)iVar24 & 0x3f)) >> bVar18;
        lVar23 = uVar29 + uVar21;
        *(undefined2 *)((longlong)puVar37 + uVar29 + uVar21) = *(undefined2 *)(param_3 + uVar17 + 1)
        ;
        iVar24 = (uint)*(byte *)((longlong)param_3 + uVar17 * 4 + 6) + iVar24;
        uVar17 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
        uVar29 = (local_88 << ((byte)iVar24 & 0x3f)) >> bVar18;
        lVar42 = uVar17 + lVar23;
        *(undefined2 *)((longlong)puVar37 + uVar17 + lVar23) = *(undefined2 *)(param_3 + uVar29 + 1)
        ;
        iVar24 = (uint)*(byte *)((longlong)param_3 + uVar29 * 4 + 6) + iVar24;
        uVar29 = (ulonglong)*(byte *)((longlong)param_3 + uVar29 * 4 + 7);
        uVar17 = (local_88 << ((byte)iVar24 & 0x3f)) >> bVar18;
        *(undefined2 *)((longlong)puVar37 + uVar29 + lVar42) = *(undefined2 *)(param_3 + uVar17 + 1)
        ;
        local_34 = (uint)*(byte *)((longlong)param_3 + uVar17 * 4 + 6) + iVar24;
        puVar37 = (undefined2 *)
                  ((longlong)puVar37 +
                  (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7) + uVar29 + lVar42);
      } while (local_34 < 0x41);
    }
  }
  else if (local_34 < 0x41) {
    bVar18 = -local_3c & 0x3f;
    do {
      if (local_90 < 8) {
        if (local_90 == 0) goto LAB_00f00bd0;
        lVar23 = local_90 - (ulonglong)(local_34 >> 3);
        uVar39 = (uint)local_90;
        if (-1 < lVar23) {
          uVar39 = local_34 >> 3;
        }
        uVar38 = (uint)((ulonglong)lVar23 >> 0x3f);
        local_34 = local_34 + uVar39 * -8;
      }
      else {
        uVar39 = local_34 >> 3;
        local_34 = local_34 & 7;
        uVar38 = 0;
      }
      local_90 = local_90 - (ulonglong)uVar39;
      local_88 = *(ulonglong *)(pbVar25 + local_90);
      if (((undefined2 *)((longlong)puVar4 - 7U) <= puVar37) || (uVar38 != 0)) break;
      uVar17 = (local_88 << ((byte)local_34 & 0x3f)) >> bVar18;
      *puVar37 = *(undefined2 *)(param_3 + uVar17 + 1);
      iVar24 = *(byte *)((longlong)param_3 + uVar17 * 4 + 6) + local_34;
      uVar21 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
      uVar17 = (local_88 << ((byte)iVar24 & 0x3f)) >> bVar18;
      *(undefined2 *)((longlong)puVar37 + uVar21) = *(undefined2 *)(param_3 + uVar17 + 1);
      iVar24 = (uint)*(byte *)((longlong)param_3 + uVar17 * 4 + 6) + iVar24;
      uVar29 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
      uVar17 = (local_88 << ((byte)iVar24 & 0x3f)) >> bVar18;
      lVar23 = uVar29 + uVar21;
      *(undefined2 *)((longlong)puVar37 + uVar29 + uVar21) = *(undefined2 *)(param_3 + uVar17 + 1);
      iVar24 = (uint)*(byte *)((longlong)param_3 + uVar17 * 4 + 6) + iVar24;
      uVar17 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
      uVar29 = (local_88 << ((byte)iVar24 & 0x3f)) >> bVar18;
      *(undefined2 *)((longlong)puVar37 + uVar17 + lVar23) = *(undefined2 *)(param_3 + uVar29 + 1);
      local_34 = (uint)*(byte *)((longlong)param_3 + uVar29 * 4 + 6) + iVar24;
      puVar37 = (undefined2 *)
                ((longlong)puVar37 +
                (ulonglong)*(byte *)((longlong)param_3 + uVar29 * 4 + 7) + uVar17 + lVar23);
    } while (local_34 < 0x41);
  }
LAB_00f00be5:
  local_50 = pbVar25 + local_90;
  if (1 < (ulonglong)((longlong)puVar4 - (longlong)puVar37)) {
    if (local_34 < 0x41) {
      do {
        if (local_90 < 8) {
          if (local_90 == 0) break;
          bVar43 = local_50 + -(ulonglong)(local_34 >> 3) < pbVar25;
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
        local_90 = local_90 - (ulonglong)uVar39;
        local_50 = pbVar25 + local_90;
        local_88 = *(ulonglong *)(pbVar25 + local_90);
        if ((puVar4 + -1 < puVar37) || (bVar43)) break;
        uVar17 = (local_88 << ((byte)local_34 & 0x3f)) >> (-local_3c & 0x3f);
        *puVar37 = *(undefined2 *)(param_3 + uVar17 + 1);
        local_34 = *(byte *)((longlong)param_3 + uVar17 * 4 + 6) + local_34;
        puVar37 = (undefined2 *)
                  ((longlong)puVar37 + (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7));
        if (0x40 < local_34) break;
      } while( true );
    }
    for (; puVar37 <= puVar4 + -1;
        puVar37 = (undefined2 *)
                  ((ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7) + (longlong)puVar37)) {
      uVar17 = (local_88 << ((byte)local_34 & 0x3f)) >> (-local_3c & 0x3f);
      *puVar37 = *(undefined2 *)(param_3 + uVar17 + 1);
      local_34 = *(byte *)((longlong)param_3 + uVar17 * 4 + 6) + local_34;
    }
  }
  if (puVar37 < puVar4) {
    uVar17 = (local_88 << ((byte)local_34 & 0x3f)) >> (-local_3c & 0x3f);
    *(undefined1 *)puVar37 = *(undefined1 *)(param_3 + uVar17 + 1);
    if (*(char *)((longlong)param_3 + uVar17 * 4 + 7) == '\x01') {
      local_34 = local_34 + *(byte *)((longlong)param_3 + uVar17 * 4 + 6);
    }
    else if ((local_34 < 0x40) &&
            (local_34 = local_34 + *(byte *)((longlong)param_3 + uVar17 * 4 + 6), 0x3f < local_34))
    {
      local_34 = 0x40;
    }
  }
  local_68 = lVar32;
  if ((ulonglong)((longlong)puVar22 - (longlong)local_70) < 8) {
    if (local_54 < 0x41) {
      if (lVar32 < 8) {
        if (lVar32 == 0) {
LAB_00f010bf:
          local_68 = 0;
          goto LAB_00f010c5;
        }
        uVar39 = (uint)lVar32;
        if (-1 < (longlong)(lVar32 - (ulonglong)(local_54 >> 3))) {
          uVar39 = local_54 >> 3;
        }
        local_54 = local_54 + uVar39 * -8;
      }
      else {
        uVar39 = local_54 >> 3;
        local_54 = local_54 & 7;
      }
      local_68 = lVar32 - (ulonglong)uVar39;
      local_80 = *(ulonglong *)(pbVar30 + local_68);
    }
  }
  else if (local_3c < 0xc) {
    if (local_54 < 0x41) {
      bVar18 = -local_3c & 0x3f;
      do {
        if ((longlong)local_68 < 8) {
          if (local_68 == 0) goto LAB_00f010bf;
          lVar32 = local_68 - (local_54 >> 3);
          uVar39 = (uint)local_68;
          if (-1 < lVar32) {
            uVar39 = local_54 >> 3;
          }
          uVar38 = (uint)((ulonglong)lVar32 >> 0x3f);
          local_54 = local_54 + uVar39 * -8;
        }
        else {
          uVar39 = local_54 >> 3;
          local_54 = local_54 & 7;
          uVar38 = 0;
        }
        local_68 = local_68 - uVar39;
        local_80 = *(ulonglong *)(pbVar30 + local_68);
        if (((undefined2 *)((longlong)puVar22 - 9U) <= local_70) || (uVar38 != 0)) break;
        uVar17 = (local_80 << ((byte)local_54 & 0x3f)) >> bVar18;
        *local_70 = *(undefined2 *)(param_3 + uVar17 + 1);
        iVar24 = *(byte *)((longlong)param_3 + uVar17 * 4 + 6) + local_54;
        uVar21 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
        uVar17 = (local_80 << ((byte)iVar24 & 0x3f)) >> bVar18;
        *(undefined2 *)((longlong)local_70 + uVar21) = *(undefined2 *)(param_3 + uVar17 + 1);
        iVar24 = (uint)*(byte *)((longlong)param_3 + uVar17 * 4 + 6) + iVar24;
        uVar29 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
        uVar17 = (local_80 << ((byte)iVar24 & 0x3f)) >> bVar18;
        lVar32 = uVar29 + uVar21;
        *(undefined2 *)((longlong)local_70 + uVar29 + uVar21) =
             *(undefined2 *)(param_3 + uVar17 + 1);
        iVar24 = (uint)*(byte *)((longlong)param_3 + uVar17 * 4 + 6) + iVar24;
        uVar17 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
        uVar29 = (local_80 << ((byte)iVar24 & 0x3f)) >> bVar18;
        lVar23 = uVar17 + lVar32;
        *(undefined2 *)((longlong)local_70 + uVar17 + lVar32) =
             *(undefined2 *)(param_3 + uVar29 + 1);
        iVar24 = (uint)*(byte *)((longlong)param_3 + uVar29 * 4 + 6) + iVar24;
        uVar29 = (ulonglong)*(byte *)((longlong)param_3 + uVar29 * 4 + 7);
        uVar17 = (local_80 << ((byte)iVar24 & 0x3f)) >> bVar18;
        *(undefined2 *)((longlong)local_70 + uVar29 + lVar23) =
             *(undefined2 *)(param_3 + uVar17 + 1);
        local_54 = (uint)*(byte *)((longlong)param_3 + uVar17 * 4 + 6) + iVar24;
        local_70 = (undefined2 *)
                   ((longlong)local_70 +
                   (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7) + uVar29 + lVar23);
      } while (local_54 < 0x41);
    }
  }
  else if (local_54 < 0x41) {
    bVar18 = -local_3c & 0x3f;
    do {
      if ((longlong)local_68 < 8) {
        if (local_68 == 0) goto LAB_00f010bf;
        lVar32 = local_68 - (local_54 >> 3);
        uVar39 = (uint)local_68;
        if (-1 < lVar32) {
          uVar39 = local_54 >> 3;
        }
        uVar38 = (uint)((ulonglong)lVar32 >> 0x3f);
        local_54 = local_54 + uVar39 * -8;
      }
      else {
        uVar39 = local_54 >> 3;
        local_54 = local_54 & 7;
        uVar38 = 0;
      }
      local_68 = local_68 - uVar39;
      local_80 = *(ulonglong *)(pbVar30 + local_68);
      if (((undefined2 *)((longlong)puVar22 - 7U) <= local_70) || (uVar38 != 0)) break;
      uVar17 = (local_80 << ((byte)local_54 & 0x3f)) >> bVar18;
      *local_70 = *(undefined2 *)(param_3 + uVar17 + 1);
      iVar24 = *(byte *)((longlong)param_3 + uVar17 * 4 + 6) + local_54;
      uVar21 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
      uVar17 = (local_80 << ((byte)iVar24 & 0x3f)) >> bVar18;
      *(undefined2 *)((longlong)local_70 + uVar21) = *(undefined2 *)(param_3 + uVar17 + 1);
      iVar24 = (uint)*(byte *)((longlong)param_3 + uVar17 * 4 + 6) + iVar24;
      uVar29 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
      uVar17 = (local_80 << ((byte)iVar24 & 0x3f)) >> bVar18;
      lVar32 = uVar29 + uVar21;
      *(undefined2 *)((longlong)local_70 + uVar29 + uVar21) = *(undefined2 *)(param_3 + uVar17 + 1);
      iVar24 = (uint)*(byte *)((longlong)param_3 + uVar17 * 4 + 6) + iVar24;
      uVar17 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
      uVar29 = (local_80 << ((byte)iVar24 & 0x3f)) >> bVar18;
      *(undefined2 *)((longlong)local_70 + uVar17 + lVar32) = *(undefined2 *)(param_3 + uVar29 + 1);
      local_54 = (uint)*(byte *)((longlong)param_3 + uVar29 * 4 + 6) + iVar24;
      local_70 = (undefined2 *)
                 ((longlong)local_70 +
                 (ulonglong)*(byte *)((longlong)param_3 + uVar29 * 4 + 7) + uVar17 + lVar32);
    } while (local_54 < 0x41);
  }
LAB_00f010c5:
  pbVar35 = pbVar30 + local_68;
  if (1 < (ulonglong)((longlong)puVar22 - (longlong)local_70)) {
    if (local_54 < 0x41) {
      do {
        if ((longlong)local_68 < 8) {
          if (local_68 == 0) break;
          bVar43 = pbVar35 + -(ulonglong)(local_54 >> 3) < pbVar30;
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
        local_80 = *(ulonglong *)(pbVar30 + local_68);
        if ((puVar22 + -1 < local_70) || (bVar43)) break;
        uVar17 = (local_80 << ((byte)local_54 & 0x3f)) >> (-local_3c & 0x3f);
        *local_70 = *(undefined2 *)(param_3 + uVar17 + 1);
        local_54 = *(byte *)((longlong)param_3 + uVar17 * 4 + 6) + local_54;
        local_70 = (undefined2 *)
                   ((longlong)local_70 + (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7));
        if (0x40 < local_54) break;
      } while( true );
    }
    for (; local_70 <= puVar22 + -1;
        local_70 = (undefined2 *)
                   ((ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7) + (longlong)local_70))
    {
      uVar17 = (local_80 << ((byte)local_54 & 0x3f)) >> (-local_3c & 0x3f);
      *local_70 = *(undefined2 *)(param_3 + uVar17 + 1);
      local_54 = *(byte *)((longlong)param_3 + uVar17 * 4 + 6) + local_54;
    }
  }
  if (local_70 < puVar22) {
    uVar17 = (local_80 << ((byte)local_54 & 0x3f)) >> (-local_3c & 0x3f);
    *(undefined1 *)local_70 = *(undefined1 *)(param_3 + uVar17 + 1);
    if (*(char *)((longlong)param_3 + uVar17 * 4 + 7) == '\x01') {
      local_54 = local_54 + *(byte *)((longlong)param_3 + uVar17 * 4 + 6);
    }
    else if ((local_54 < 0x40) &&
            (local_54 = local_54 + *(byte *)((longlong)param_3 + uVar17 * 4 + 6), 0x3f < local_54))
    {
      local_54 = 0x40;
    }
  }
  if ((ulonglong)((longlong)puVar2 - (longlong)puVar28) < 8) {
    if (uVar20 < 0x41) {
      if (local_60 < 8) {
        if (local_60 == 0) {
          uVar17 = (ulonglong)uVar20;
LAB_00f015a0:
          local_60 = 0;
          goto LAB_00f015b1;
        }
        uVar39 = (uint)local_60;
        if (-1 < (longlong)(local_60 - (ulonglong)(uVar20 >> 3))) {
          uVar39 = uVar20 >> 3;
        }
        uVar20 = uVar20 + uVar39 * -8;
      }
      else {
        uVar39 = uVar20 >> 3;
        uVar20 = uVar20 & 7;
      }
      uVar17 = (ulonglong)uVar20;
      local_60 = local_60 - (ulonglong)uVar39;
      local_78 = *(ulonglong *)(pbVar34 + local_60);
    }
    else {
      uVar17 = (ulonglong)uVar20;
    }
  }
  else if (local_3c < 0xc) {
    uVar17 = (ulonglong)uVar20;
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
          uVar39 = (uint)((ulonglong)lVar32 >> 0x3f);
          uVar38 = (uint)uVar17 + uVar20 * -8;
        }
        else {
          uVar20 = (uint)(uVar17 >> 3);
          uVar38 = (uint)uVar17 & 7;
          uVar39 = 0;
        }
        uVar17 = (ulonglong)uVar38;
        local_60 = local_60 - (ulonglong)uVar20;
        local_78 = *(ulonglong *)(pbVar34 + local_60);
        if (((undefined2 *)((longlong)puVar2 - 9U) <= puVar28) || (uVar39 != 0)) break;
        uVar17 = (local_78 << ((byte)uVar38 & 0x3f)) >> bVar18;
        *puVar28 = *(undefined2 *)(param_3 + uVar17 + 1);
        iVar24 = *(byte *)((longlong)param_3 + uVar17 * 4 + 6) + uVar38;
        uVar21 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
        uVar17 = (local_78 << ((byte)iVar24 & 0x3f)) >> bVar18;
        *(undefined2 *)((longlong)puVar28 + uVar21) = *(undefined2 *)(param_3 + uVar17 + 1);
        iVar24 = (uint)*(byte *)((longlong)param_3 + uVar17 * 4 + 6) + iVar24;
        uVar29 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
        uVar17 = (local_78 << ((byte)iVar24 & 0x3f)) >> bVar18;
        lVar32 = uVar29 + uVar21;
        *(undefined2 *)((longlong)puVar28 + uVar29 + uVar21) = *(undefined2 *)(param_3 + uVar17 + 1)
        ;
        iVar24 = (uint)*(byte *)((longlong)param_3 + uVar17 * 4 + 6) + iVar24;
        uVar17 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
        uVar29 = (local_78 << ((byte)iVar24 & 0x3f)) >> bVar18;
        lVar23 = uVar17 + lVar32;
        *(undefined2 *)((longlong)puVar28 + uVar17 + lVar32) = *(undefined2 *)(param_3 + uVar29 + 1)
        ;
        iVar24 = (uint)*(byte *)((longlong)param_3 + uVar29 * 4 + 6) + iVar24;
        uVar17 = (ulonglong)*(byte *)((longlong)param_3 + uVar29 * 4 + 7);
        uVar29 = (local_78 << ((byte)iVar24 & 0x3f)) >> bVar18;
        *(undefined2 *)((longlong)puVar28 + uVar17 + lVar23) = *(undefined2 *)(param_3 + uVar29 + 1)
        ;
        uVar20 = (uint)*(byte *)((longlong)param_3 + uVar29 * 4 + 6) + iVar24;
        puVar28 = (undefined2 *)
                  ((longlong)puVar28 +
                  (ulonglong)*(byte *)((longlong)param_3 + uVar29 * 4 + 7) + uVar17 + lVar23);
        uVar17 = (ulonglong)uVar20;
        if (0x40 < uVar20) break;
      } while( true );
    }
  }
  else {
    uVar17 = (ulonglong)uVar20;
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
          uVar38 = (uint)((ulonglong)lVar32 >> 0x3f);
          uVar39 = (uint)uVar17 + uVar20 * -8;
        }
        else {
          uVar20 = (uint)(uVar17 >> 3);
          uVar39 = (uint)uVar17 & 7;
          uVar38 = 0;
        }
        local_60 = local_60 - (ulonglong)uVar20;
        local_78 = *(ulonglong *)(pbVar34 + local_60);
        uVar17 = (ulonglong)uVar39;
        if ((puVar19 <= puVar28) || (uVar38 != 0)) break;
        uVar17 = (local_78 << ((byte)uVar39 & 0x3f)) >> bVar18;
        *puVar28 = *(undefined2 *)(param_3 + uVar17 + 1);
        iVar24 = *(byte *)((longlong)param_3 + uVar17 * 4 + 6) + uVar39;
        uVar21 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
        uVar17 = (local_78 << ((byte)iVar24 & 0x3f)) >> bVar18;
        *(undefined2 *)((longlong)puVar28 + uVar21) = *(undefined2 *)(param_3 + uVar17 + 1);
        iVar24 = (uint)*(byte *)((longlong)param_3 + uVar17 * 4 + 6) + iVar24;
        uVar29 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
        uVar17 = (local_78 << ((byte)iVar24 & 0x3f)) >> bVar18;
        lVar32 = uVar29 + uVar21;
        *(undefined2 *)((longlong)puVar28 + uVar29 + uVar21) = *(undefined2 *)(param_3 + uVar17 + 1)
        ;
        iVar24 = (uint)*(byte *)((longlong)param_3 + uVar17 * 4 + 6) + iVar24;
        uVar17 = (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7);
        uVar29 = (local_78 << ((byte)iVar24 & 0x3f)) >> bVar18;
        *(undefined2 *)((longlong)puVar28 + uVar17 + lVar32) = *(undefined2 *)(param_3 + uVar29 + 1)
        ;
        uVar20 = (uint)*(byte *)((longlong)param_3 + uVar29 * 4 + 6) + iVar24;
        puVar28 = (undefined2 *)
                  ((longlong)puVar28 +
                  (ulonglong)*(byte *)((longlong)param_3 + uVar29 * 4 + 7) + uVar17 + lVar32);
        uVar17 = (ulonglong)uVar20;
      } while (uVar20 < 0x41);
    }
  }
LAB_00f015b1:
  uVar20 = (uint)uVar17;
  pbVar40 = pbVar34 + local_60;
  if (1 < (ulonglong)((longlong)puVar2 - (longlong)puVar28)) {
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
        uVar17 = (ulonglong)uVar39;
        local_60 = local_60 - (ulonglong)uVar20;
        pbVar40 = pbVar34 + local_60;
        local_78 = *(ulonglong *)(pbVar34 + local_60);
        if ((puVar2 + -1 < puVar28) || (bVar43)) break;
        uVar17 = (local_78 << ((byte)uVar39 & 0x3f)) >> (-local_3c & 0x3f);
        *puVar28 = *(undefined2 *)(param_3 + uVar17 + 1);
        uVar39 = *(byte *)((longlong)param_3 + uVar17 * 4 + 6) + uVar39;
        puVar28 = (undefined2 *)
                  ((longlong)puVar28 + (ulonglong)*(byte *)((longlong)param_3 + uVar17 * 4 + 7));
        uVar17 = (ulonglong)uVar39;
        if (0x40 < uVar39) break;
      } while( true );
    }
    uVar20 = (uint)uVar17;
    for (; puVar28 <= puVar2 + -1;
        puVar28 = (undefined2 *)
                  ((ulonglong)*(byte *)((longlong)param_3 + uVar29 * 4 + 7) + (longlong)puVar28)) {
      uVar29 = (local_78 << ((byte)uVar17 & 0x3f)) >> (-local_3c & 0x3f);
      *puVar28 = *(undefined2 *)(param_3 + uVar29 + 1);
      uVar20 = (uint)*(byte *)((longlong)param_3 + uVar29 * 4 + 6) + (int)uVar17;
      uVar17 = (ulonglong)uVar20;
    }
  }
  if (puVar28 < puVar2) {
    uVar17 = (local_78 << ((byte)uVar20 & 0x3f)) >> (-local_3c & 0x3f);
    *(undefined1 *)puVar28 = *(undefined1 *)(param_3 + uVar17 + 1);
    if (*(char *)((longlong)param_3 + uVar17 * 4 + 7) == '\x01') {
      uVar20 = uVar20 + *(byte *)((longlong)param_3 + uVar17 * 4 + 6);
    }
    else if ((uVar20 < 0x40) &&
            (uVar20 = uVar20 + *(byte *)((longlong)param_3 + uVar17 * 4 + 6), 0x3f < uVar20)) {
      uVar20 = 0x40;
    }
  }
  if (uVar20 != 0x40) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (pbVar40 != pbVar34) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (local_54 != 0x40) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (pbVar35 != pbVar30) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (local_34 != 0x40) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (local_50 != pbVar25) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (local_38 != 0x40) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (local_a0 != 6) {
    return 0xffffffffffffffec;
  }
  return unaff_RSI;
LAB_00f006c7:
  local_a0 = 6;
  goto LAB_00f006f0;
LAB_00f00bd0:
  local_90 = 0;
  goto LAB_00f00be5;
}


