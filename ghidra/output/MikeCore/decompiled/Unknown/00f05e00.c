// Function: FUN_00f05e00
// Address: 00f05e00
// Size: 4605 bytes
// Class: Unknown


ulonglong FUN_00f05e00(ulonglong param_1,ushort *param_2,longlong param_3)

{
  ushort *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong *puVar19;
  ulonglong unaff_RSI;
  ulonglong *puVar20;
  ulonglong *puVar21;
  undefined1 *unaff_RDI;
  undefined1 *puVar22;
  ushort uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong *puVar27;
  uint uVar28;
  undefined1 *puVar29;
  ulonglong uVar30;
  ulonglong *puVar31;
  undefined1 *puVar32;
  ulonglong uVar33;
  ulonglong *puVar34;
  bool bVar35;
  ulonglong local_e0;
  ulonglong local_d0;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong local_a8;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_80;
  ulonglong local_78;
  undefined1 *local_68;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong uVar26;
  
  if (param_1 < 10) {
    return 0xffffffffffffffec;
  }
  uVar23 = *param_2;
  uVar33 = (ulonglong)uVar23;
  uVar11 = param_2[1];
  uVar30 = (ulonglong)uVar11;
  uVar12 = param_2[2];
  uVar15 = (ulonglong)uVar12;
  uVar14 = uVar33 + uVar30 + uVar15 + 6;
  uVar16 = param_1 - uVar14;
  if (param_1 < uVar14) {
    return 0xffffffffffffffec;
  }
  puVar2 = unaff_RDI + unaff_RSI;
  uVar14 = unaff_RSI + 3 >> 2;
  puVar3 = unaff_RDI + uVar14;
  puVar4 = puVar3 + uVar14;
  puVar5 = puVar4 + uVar14;
  if (puVar2 < puVar5) {
    return 0xffffffffffffffec;
  }
  if (unaff_RSI < 6) {
    return 0xffffffffffffffec;
  }
  if (uVar33 == 0) {
    return 0xffffffffffffffb8;
  }
  puVar1 = param_2 + 3;
  uVar13 = *(ushort *)(param_3 + 2);
  if (uVar23 < 8) {
    local_78 = (ulonglong)(byte)*puVar1;
    switch(uVar23) {
    case 7:
      local_78 = local_78 | (ulonglong)(byte)param_2[6] << 0x30;
    case 6:
      local_78 = local_78 + ((ulonglong)*(byte *)((longlong)param_2 + 0xb) << 0x28);
    case 5:
      local_78 = local_78 + ((ulonglong)(byte)param_2[5] << 0x20);
    case 4:
      local_78 = local_78 + (ulonglong)*(byte *)((longlong)param_2 + 9) * 0x1000000;
    case 3:
      local_78 = local_78 + (ulonglong)(byte)param_2[4] * 0x10000;
    case 2:
      local_78 = local_78 + (ulonglong)*(byte *)((longlong)param_2 + 7) * 0x100;
    }
    bVar7 = *(byte *)((uVar33 - 1) + (longlong)puVar1);
    if (bVar7 == 0) {
      return 0xffffffffffffffec;
    }
    uVar25 = LZCOUNT((uint)bVar7) + (uint)uVar23 * -8 + 0x29;
    local_58 = 6;
  }
  else {
    bVar7 = *(byte *)((uVar33 - 1) + (longlong)puVar1);
    if (bVar7 == 0) {
      return 0xffffffffffffffff;
    }
    local_58 = uVar33 - 2;
    local_78 = *(ulonglong *)((longlong)param_2 + local_58);
    uVar25 = LZCOUNT((uint)bVar7) - 0x17;
  }
  uVar26 = (ulonglong)uVar25;
  if (uVar30 == 0) {
    return 0xffffffffffffffb8;
  }
  puVar34 = (ulonglong *)((longlong)param_2 + uVar33 + 6);
  if (uVar11 < 8) {
    local_90 = (ulonglong)(byte)*puVar34;
    switch(uVar11) {
    case 7:
      local_90 = local_90 | (ulonglong)*(byte *)((longlong)param_2 + uVar33 + 0xc) << 0x30;
    case 6:
      local_90 = local_90 + ((ulonglong)*(byte *)((longlong)param_2 + uVar33 + 0xb) << 0x28);
    case 5:
      local_90 = local_90 + ((ulonglong)*(byte *)((longlong)param_2 + uVar33 + 10) << 0x20);
    case 4:
      local_90 = local_90 + (ulonglong)*(byte *)((longlong)param_2 + uVar33 + 9) * 0x1000000;
    case 3:
      local_90 = local_90 + (ulonglong)*(byte *)((longlong)param_2 + uVar33 + 8) * 0x10000;
    case 2:
      local_90 = local_90 + (ulonglong)*(byte *)((longlong)param_2 + uVar33 + 7) * 0x100;
    }
    bVar7 = *(byte *)((uVar30 - 1) + (longlong)puVar34);
    if (bVar7 == 0) {
      return 0xffffffffffffffec;
    }
    uVar25 = LZCOUNT((uint)bVar7) + (uint)uVar11 * -8 + 0x29;
    local_80 = 0;
  }
  else {
    bVar7 = *(byte *)((uVar30 - 1) + (longlong)puVar34);
    if (bVar7 == 0) {
      return 0xffffffffffffffff;
    }
    local_80 = uVar30 - 8;
    local_90 = *(ulonglong *)((longlong)puVar34 + local_80);
    uVar25 = LZCOUNT((uint)bVar7) - 0x17;
  }
  local_c0 = (ulonglong)uVar25;
  if (uVar15 == 0) {
    return 0xffffffffffffffb8;
  }
  puVar31 = (ulonglong *)(uVar30 + (longlong)puVar34);
  if (uVar12 < 8) {
    local_50 = (ulonglong)(byte)*puVar31;
    switch(uVar12) {
    case 7:
      local_50 = local_50 | (ulonglong)*(byte *)((longlong)puVar31 + 6) << 0x30;
    case 6:
      local_50 = local_50 + ((ulonglong)*(byte *)((longlong)puVar31 + 5) << 0x28);
    case 5:
      local_50 = local_50 + ((ulonglong)*(byte *)((longlong)puVar31 + 4) << 0x20);
    case 4:
      local_50 = local_50 + (ulonglong)*(byte *)((longlong)puVar31 + 3) * 0x1000000;
    case 3:
      local_50 = local_50 + (ulonglong)*(byte *)((longlong)puVar31 + 2) * 0x10000;
    case 2:
      local_50 = local_50 + (ulonglong)*(byte *)((longlong)puVar31 + 1) * 0x100;
    }
    bVar7 = *(byte *)((uVar15 - 1) + (longlong)puVar31);
    if (bVar7 == 0) {
      return 0xffffffffffffffec;
    }
    uVar25 = LZCOUNT((uint)bVar7) + (uint)uVar12 * -8 + 0x29;
    local_e0 = 0;
  }
  else {
    bVar7 = *(byte *)((uVar15 - 1) + (longlong)puVar31);
    if (bVar7 == 0) {
      return 0xffffffffffffffff;
    }
    local_e0 = uVar15 - 8;
    local_50 = *(ulonglong *)((longlong)puVar31 + local_e0);
    uVar25 = LZCOUNT((uint)bVar7) - 0x17;
  }
  local_48 = (ulonglong)uVar25;
  if (uVar16 == 0) {
    return 0xffffffffffffffb8;
  }
  puVar20 = (ulonglong *)(uVar15 + (longlong)puVar31);
  if (uVar16 < 8) {
    local_98 = (ulonglong)(byte)*puVar20;
    switch(uVar16) {
    case 7:
      local_98 = local_98 | (ulonglong)*(byte *)((longlong)puVar20 + 6) << 0x30;
    case 6:
      local_98 = local_98 + ((ulonglong)*(byte *)((longlong)puVar20 + 5) << 0x28);
    case 5:
      local_98 = local_98 + ((ulonglong)*(byte *)((longlong)puVar20 + 4) << 0x20);
    case 4:
      local_98 = local_98 + (ulonglong)*(byte *)((longlong)puVar20 + 3) * 0x1000000;
    case 3:
      local_98 = local_98 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 0x10000;
    case 2:
      local_98 = local_98 + (ulonglong)*(byte *)((longlong)puVar20 + 1) * 0x100;
    }
    bVar7 = *(byte *)((uVar16 - 1) + (longlong)puVar20);
    if (bVar7 == 0) {
      return 0xffffffffffffffec;
    }
    uVar25 = LZCOUNT((uint)bVar7) + (int)uVar16 * -8 + 0x29;
    uVar16 = 0;
  }
  else {
    bVar7 = *(byte *)((uVar16 - 1) + (longlong)puVar20);
    if (bVar7 == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < uVar16) {
      return uVar16;
    }
    local_98 = *(ulonglong *)((longlong)puVar20 + (uVar16 - 8));
    uVar16 = uVar16 - 8;
    uVar25 = LZCOUNT((uint)bVar7) - 0x17;
  }
  local_40 = (ulonglong)uVar25;
  puVar29 = unaff_RDI + (unaff_RSI - 3);
  lVar6 = param_3 + 4;
  if (((ulonglong)((longlong)puVar2 - (longlong)puVar5) < 8) || (puVar29 <= puVar5)) {
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
      puVar32 = unaff_RDI;
      uVar15 = (local_78 << (uVar26 & 0x3f)) >> uVar23;
      uVar24 = (uint)*(byte *)(lVar6 + uVar15 * 2) + (int)uVar26;
      *puVar32 = *(undefined1 *)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_90 << (local_c0 & 0x3f)) >> uVar23;
      uVar25 = (uint)*(byte *)(lVar6 + uVar15 * 2) + (int)local_c0;
      puVar32[uVar14] = *(undefined1 *)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_50 << (local_48 & 0x3f)) >> uVar23;
      uVar17 = (uint)*(byte *)(lVar6 + uVar15 * 2) + (int)local_48;
      puVar32[uVar14 * 2] = *(undefined1 *)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_98 << (local_40 & 0x3f)) >> uVar23;
      uVar28 = (uint)*(byte *)(lVar6 + uVar15 * 2) + (int)local_40;
      puVar32[lVar18] = *(undefined1 *)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_78 << ((ulonglong)uVar24 & 0x3f)) >> uVar23;
      uVar24 = *(byte *)(lVar6 + uVar15 * 2) + uVar24;
      puVar32[1] = *(undefined1 *)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_90 << ((ulonglong)uVar25 & 0x3f)) >> uVar23;
      uVar25 = *(byte *)(lVar6 + uVar15 * 2) + uVar25;
      puVar32[uVar14 + 1] = *(undefined1 *)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_50 << ((ulonglong)uVar17 & 0x3f)) >> uVar23;
      uVar17 = *(byte *)(lVar6 + uVar15 * 2) + uVar17;
      puVar32[uVar14 * 2 + 1] = *(undefined1 *)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_98 << ((ulonglong)uVar28 & 0x3f)) >> uVar23;
      uVar28 = *(byte *)(lVar6 + uVar15 * 2) + uVar28;
      puVar32[lVar18 + 1] = *(undefined1 *)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_78 << ((ulonglong)uVar24 & 0x3f)) >> uVar23;
      uVar24 = *(byte *)(lVar6 + uVar15 * 2) + uVar24;
      puVar32[2] = *(undefined1 *)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_90 << ((ulonglong)uVar25 & 0x3f)) >> uVar23;
      uVar25 = *(byte *)(lVar6 + uVar15 * 2) + uVar25;
      puVar32[uVar14 + 2] = *(undefined1 *)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_50 << ((ulonglong)uVar17 & 0x3f)) >> uVar23;
      uVar17 = *(byte *)(lVar6 + uVar15 * 2) + uVar17;
      puVar32[uVar14 * 2 + 2] = *(undefined1 *)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_98 << ((ulonglong)uVar28 & 0x3f)) >> uVar23;
      uVar28 = *(byte *)(lVar6 + uVar15 * 2) + uVar28;
      puVar32[lVar18 + 2] = *(undefined1 *)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_78 << ((ulonglong)uVar24 & 0x3f)) >> uVar23;
      uVar24 = *(byte *)(lVar6 + uVar15 * 2) + uVar24;
      puVar32[3] = *(undefined1 *)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_90 << ((ulonglong)uVar25 & 0x3f)) >> uVar23;
      bVar8 = *(byte *)(lVar6 + uVar15 * 2);
      puVar32[uVar14 + 3] = *(undefined1 *)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_50 << ((ulonglong)uVar17 & 0x3f)) >> uVar23;
      bVar9 = *(byte *)(lVar6 + uVar15 * 2);
      puVar32[uVar14 * 2 + 3] = *(undefined1 *)(param_3 + 5 + uVar15 * 2);
      uVar15 = (local_98 << ((ulonglong)uVar28 & 0x3f)) >> uVar23;
      bVar10 = *(byte *)(lVar6 + uVar15 * 2);
      puVar32[lVar18 + 3] = *(undefined1 *)(param_3 + 5 + uVar15 * 2);
      if ((longlong)local_58 < 0xe) {
        local_a8 = local_58;
      }
      else {
        local_a8 = local_58 - (uVar24 >> 3);
        uVar24 = uVar24 & 7;
        local_78 = *(ulonglong *)((longlong)param_2 + local_a8);
      }
      uVar26 = (ulonglong)uVar24;
      uVar25 = uVar25 + bVar8;
      local_b8 = local_80;
      if (7 < (longlong)local_80) {
        local_b8 = local_80 - (uVar25 >> 3);
        uVar25 = uVar25 & 7;
        local_90 = *(ulonglong *)((longlong)puVar34 + local_b8);
      }
      local_c0 = (ulonglong)uVar25;
      uVar17 = uVar17 + bVar9;
      if ((longlong)local_e0 < 8) {
        local_d0 = local_e0;
      }
      else {
        local_d0 = local_e0 - (uVar17 >> 3);
        uVar17 = uVar17 & 7;
        local_50 = *(ulonglong *)((longlong)puVar31 + local_d0);
      }
      local_48 = (ulonglong)uVar17;
      uVar28 = uVar28 + bVar10;
      uVar15 = uVar16;
      if (7 < (longlong)uVar16) {
        uVar15 = uVar16 - (uVar28 >> 3);
        uVar28 = uVar28 & 7;
        local_98 = *(ulonglong *)((longlong)puVar20 + uVar15);
      }
      local_40 = (ulonglong)uVar28;
      bVar7 = bVar7 & 7 < (longlong)uVar16 &
              ((0xd < (longlong)local_58 && 7 < (longlong)local_80) && 7 < (longlong)local_e0);
      local_e0 = local_d0;
      local_58 = local_a8;
      uVar16 = uVar15;
      unaff_RDI = puVar32 + 4;
      local_80 = local_b8;
    } while ((bool)(bVar7 & puVar32 + lVar18 + 4 < puVar29));
    unaff_RDI = puVar32 + 4;
    puVar32 = unaff_RDI + uVar14 * 2;
    puVar22 = unaff_RDI + uVar14;
    local_68 = unaff_RDI + lVar18;
    local_58 = uVar15;
  }
  if (puVar3 < unaff_RDI) {
    return 0xffffffffffffffec;
  }
  if (puVar4 < puVar22) {
    return 0xffffffffffffffec;
  }
  if (puVar5 < puVar32) {
    return 0xffffffffffffffec;
  }
  uVar25 = (uint)uVar26;
  if ((longlong)puVar3 - (longlong)unaff_RDI < 4) {
    if (uVar25 < 0x41) {
      if (local_a8 < 0xe) {
        if (local_a8 == 6) {
          local_a8 = 6;
        }
        else {
          uVar16 = (ulonglong)((int)local_a8 - 6);
          if (5 < (longlong)(local_a8 - (uVar26 >> 3))) {
            uVar16 = uVar26 >> 3;
          }
          local_a8 = local_a8 - uVar16;
          uVar26 = (ulonglong)(uVar25 + (int)uVar16 * -8);
          local_78 = *(ulonglong *)((longlong)param_2 + local_a8);
        }
      }
      else {
        local_a8 = local_a8 - (uVar26 >> 3);
        uVar26 = (ulonglong)(uVar25 & 7);
        local_78 = *(ulonglong *)((longlong)param_2 + local_a8);
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
      uVar26 = (ulonglong)uVar28;
      local_a8 = local_a8 - (ulonglong)uVar17;
      local_78 = *(ulonglong *)((longlong)param_2 + local_a8);
      if ((puVar3 + -3 <= unaff_RDI) || (bVar35)) break;
      uVar16 = (local_78 << (uVar26 & 0x3f)) >> uVar25;
      uVar28 = *(byte *)(lVar6 + uVar16 * 2) + uVar28;
      *unaff_RDI = *(undefined1 *)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_78 << ((ulonglong)uVar28 & 0x3f)) >> uVar25;
      uVar28 = *(byte *)(lVar6 + uVar16 * 2) + uVar28;
      unaff_RDI[1] = *(undefined1 *)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_78 << ((ulonglong)uVar28 & 0x3f)) >> uVar25;
      uVar28 = *(byte *)(lVar6 + uVar16 * 2) + uVar28;
      unaff_RDI[2] = *(undefined1 *)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_78 << ((ulonglong)uVar28 & 0x3f)) >> uVar25;
      uVar28 = *(byte *)(lVar6 + uVar16 * 2) + uVar28;
      uVar26 = (ulonglong)uVar28;
      unaff_RDI[3] = *(undefined1 *)(param_3 + 5 + uVar16 * 2);
      unaff_RDI = unaff_RDI + 4;
      if (0x40 < uVar28) break;
    } while( true );
  }
  uVar23 = -uVar13 & 0x3f;
  if (unaff_RDI < puVar3) {
    lVar18 = 0;
    do {
      uVar16 = (local_78 << (uVar26 & 0x3f)) >> uVar23;
      uVar25 = (uint)*(byte *)(lVar6 + uVar16 * 2) + (int)uVar26;
      unaff_RDI[lVar18] = *(undefined1 *)(param_3 + 5 + uVar16 * 2);
      lVar18 = lVar18 + 1;
      uVar26 = (ulonglong)uVar25;
    } while ((longlong)puVar3 - (longlong)unaff_RDI != lVar18);
  }
  else {
    uVar25 = (uint)uVar26;
  }
  puVar27 = (ulonglong *)((longlong)puVar34 + local_b8);
  uVar17 = (uint)local_c0;
  if ((longlong)puVar4 - (longlong)puVar22 < 4) {
    if (uVar17 < 0x41) {
      if ((longlong)local_b8 < 8) {
        if (local_b8 == 0) goto LAB_00f06b32;
        uVar16 = local_b8 & 0xffffffff;
        if (puVar34 <= (ulonglong *)((longlong)puVar27 - (local_c0 >> 3))) {
          uVar16 = local_c0 >> 3;
        }
        uVar17 = uVar17 + (int)uVar16 * -8;
      }
      else {
        uVar16 = local_c0 >> 3;
        uVar17 = uVar17 & 7;
      }
      local_c0 = (ulonglong)uVar17;
      puVar27 = (ulonglong *)((longlong)puVar27 - uVar16);
      local_90 = *puVar27;
    }
  }
  else if (uVar17 < 0x41) {
    do {
      if ((longlong)local_b8 < 8) {
        puVar27 = (ulonglong *)((longlong)puVar34 + local_b8);
        if (local_b8 == 0) break;
        bVar35 = (ulonglong *)((longlong)puVar27 - (local_c0 >> 3)) < puVar34;
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
      local_c0 = (ulonglong)uVar28;
      local_b8 = local_b8 - uVar17;
      puVar27 = (ulonglong *)((longlong)puVar34 + local_b8);
      local_90 = *(ulonglong *)((longlong)puVar34 + local_b8);
      if ((puVar4 + -3 <= puVar22) || (bVar35)) break;
      uVar16 = (local_90 << (local_c0 & 0x3f)) >> uVar23;
      uVar28 = *(byte *)(lVar6 + uVar16 * 2) + uVar28;
      *puVar22 = *(undefined1 *)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_90 << ((ulonglong)uVar28 & 0x3f)) >> uVar23;
      uVar28 = *(byte *)(lVar6 + uVar16 * 2) + uVar28;
      puVar22[1] = *(undefined1 *)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_90 << ((ulonglong)uVar28 & 0x3f)) >> uVar23;
      uVar28 = *(byte *)(lVar6 + uVar16 * 2) + uVar28;
      puVar22[2] = *(undefined1 *)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_90 << ((ulonglong)uVar28 & 0x3f)) >> uVar23;
      uVar28 = *(byte *)(lVar6 + uVar16 * 2) + uVar28;
      local_c0 = (ulonglong)uVar28;
      puVar22[3] = *(undefined1 *)(param_3 + 5 + uVar16 * 2);
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
      puVar22[lVar18] = *(undefined1 *)(param_3 + 5 + uVar16 * 2);
      lVar18 = lVar18 + 1;
      local_c0 = (ulonglong)uVar17;
    } while ((longlong)puVar4 - (longlong)puVar22 != lVar18);
  }
  else {
    uVar17 = (uint)local_c0;
  }
  puVar21 = (ulonglong *)(local_d0 + (longlong)puVar31);
  if ((longlong)puVar5 - (longlong)puVar32 < 4) {
    if ((uint)local_48 < 0x41) {
      if ((longlong)local_d0 < 8) {
        if (local_d0 == 0) goto LAB_00f06d0c;
        uVar16 = local_d0 & 0xffffffff;
        if (puVar31 <= (ulonglong *)((longlong)puVar21 - (local_48 >> 3))) {
          uVar16 = local_48 >> 3;
        }
        local_48._0_4_ = (uint)local_48 + (int)uVar16 * -8;
      }
      else {
        uVar16 = local_48 >> 3;
        local_48._0_4_ = (uint)local_48 & 7;
      }
      local_48 = (ulonglong)(uint)local_48;
      puVar21 = (ulonglong *)((longlong)puVar21 - uVar16);
      local_50 = *puVar21;
    }
  }
  else if ((uint)local_48 < 0x41) {
    do {
      if ((longlong)local_d0 < 8) {
        puVar21 = (ulonglong *)(local_d0 + (longlong)puVar31);
        if (local_d0 == 0) break;
        bVar35 = (ulonglong *)((longlong)puVar21 - (local_48 >> 3)) < puVar31;
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
      local_48 = (ulonglong)uVar24;
      local_d0 = local_d0 - uVar28;
      puVar21 = (ulonglong *)(local_d0 + (longlong)puVar31);
      local_50 = *(ulonglong *)((longlong)puVar31 + local_d0);
      if ((puVar5 + -3 <= puVar32) || (bVar35)) break;
      uVar16 = (local_50 << (local_48 & 0x3f)) >> uVar23;
      uVar24 = *(byte *)(lVar6 + uVar16 * 2) + uVar24;
      *puVar32 = *(undefined1 *)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_50 << ((ulonglong)uVar24 & 0x3f)) >> uVar23;
      uVar24 = *(byte *)(lVar6 + uVar16 * 2) + uVar24;
      puVar32[1] = *(undefined1 *)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_50 << ((ulonglong)uVar24 & 0x3f)) >> uVar23;
      uVar24 = *(byte *)(lVar6 + uVar16 * 2) + uVar24;
      puVar32[2] = *(undefined1 *)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_50 << ((ulonglong)uVar24 & 0x3f)) >> uVar23;
      uVar24 = *(byte *)(lVar6 + uVar16 * 2) + uVar24;
      local_48 = (ulonglong)uVar24;
      puVar32[3] = *(undefined1 *)(param_3 + 5 + uVar16 * 2);
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
      puVar32[lVar18] = *(undefined1 *)(param_3 + 5 + uVar16 * 2);
      lVar18 = lVar18 + 1;
      local_48 = (ulonglong)uVar28;
    } while ((longlong)puVar5 - (longlong)puVar32 != lVar18);
  }
  else {
    uVar28 = (uint)local_48;
  }
  puVar19 = (ulonglong *)((longlong)puVar20 + local_58);
  if ((longlong)puVar2 - (longlong)local_68 < 4) {
    if ((uint)local_40 < 0x41) {
      if ((longlong)local_58 < 8) {
        if (local_58 != 0) {
          uVar16 = local_58 & 0xffffffff;
          if (puVar20 <= (ulonglong *)((longlong)puVar19 - (local_40 >> 3))) {
            uVar16 = local_40 >> 3;
          }
          puVar19 = (ulonglong *)((longlong)puVar19 - uVar16);
          local_40 = (ulonglong)((uint)local_40 + (int)uVar16 * -8);
          local_98 = *puVar19;
        }
      }
      else {
        puVar19 = (ulonglong *)((longlong)puVar19 - (local_40 >> 3));
        local_40 = (ulonglong)((uint)local_40 & 7);
        local_98 = *puVar19;
      }
    }
  }
  else if ((uint)local_40 < 0x41) {
    do {
      if ((longlong)local_58 < 8) {
        puVar19 = (ulonglong *)((longlong)puVar20 + local_58);
        if (local_58 == 0) break;
        bVar35 = (ulonglong *)((longlong)puVar19 - (local_40 >> 3)) < puVar20;
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
      local_40 = (ulonglong)uVar24;
      local_58 = local_58 - uVar16;
      puVar19 = (ulonglong *)((longlong)puVar20 + local_58);
      local_98 = *(ulonglong *)((longlong)puVar20 + local_58);
      if ((puVar29 <= local_68) || (bVar35)) break;
      uVar16 = (local_98 << (local_40 & 0x3f)) >> uVar23;
      uVar24 = *(byte *)(lVar6 + uVar16 * 2) + uVar24;
      *local_68 = *(undefined1 *)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_98 << ((ulonglong)uVar24 & 0x3f)) >> uVar23;
      uVar24 = *(byte *)(lVar6 + uVar16 * 2) + uVar24;
      local_68[1] = *(undefined1 *)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_98 << ((ulonglong)uVar24 & 0x3f)) >> uVar23;
      uVar24 = *(byte *)(lVar6 + uVar16 * 2) + uVar24;
      local_68[2] = *(undefined1 *)(param_3 + 5 + uVar16 * 2);
      uVar16 = (local_98 << ((ulonglong)uVar24 & 0x3f)) >> uVar23;
      uVar24 = *(byte *)(lVar6 + uVar16 * 2) + uVar24;
      local_40 = (ulonglong)uVar24;
      local_68[3] = *(undefined1 *)(param_3 + 5 + uVar16 * 2);
      local_68 = local_68 + 4;
      if (0x40 < uVar24) break;
    } while( true );
  }
  if (local_68 < puVar2) {
    lVar18 = 0;
    do {
      uVar16 = (local_98 << (local_40 & 0x3f)) >> uVar23;
      uVar24 = (uint)*(byte *)(lVar6 + uVar16 * 2) + (int)local_40;
      local_68[lVar18] = *(undefined1 *)(param_3 + 5 + uVar16 * 2);
      lVar18 = lVar18 + 1;
      local_40 = (ulonglong)uVar24;
    } while ((longlong)puVar2 - (longlong)local_68 != lVar18);
  }
  else {
    uVar24 = (uint)local_40;
  }
  if (uVar24 != 0x40) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (puVar19 != puVar20) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (uVar28 != 0x40) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (puVar21 != puVar31) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (uVar17 != 0x40) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (puVar27 != puVar34) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (uVar25 != 0x40) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (local_a8 != 6) {
    return 0xffffffffffffffec;
  }
  return unaff_RSI;
}


