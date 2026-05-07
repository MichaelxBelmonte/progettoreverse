// Function: FUN_00f03899
// Address: 00f03899
// Size: 7545 bytes
// Class: Unknown


ulonglong FUN_00f03899(ulonglong param_1,ushort *param_2,uint *param_3)

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
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  char cVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined2 *puVar22;
  undefined2 *puVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong unaff_RSI;
  ulonglong uVar26;
  undefined2 *unaff_RDI;
  byte *pbVar27;
  undefined2 *puVar28;
  uint uVar29;
  uint uVar30;
  byte *pbVar31;
  uint uVar32;
  byte *pbVar33;
  ulonglong uVar34;
  undefined2 *puVar35;
  uint uVar36;
  byte *pbVar37;
  uint uVar38;
  uint uVar39;
  byte *pbVar40;
  ulonglong uVar41;
  bool bVar42;
  longlong local_f8;
  longlong local_d0;
  ulonglong local_c8;
  longlong local_a0;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_68;
  longlong local_58;
  undefined2 *local_48;
  byte *local_40;
  undefined2 *local_38;
  
  if (param_1 < 10) {
    return 0xffffffffffffffec;
  }
  uVar9 = *param_2;
  uVar41 = (ulonglong)uVar9;
  uVar10 = param_2[1];
  uVar24 = (ulonglong)uVar10;
  uVar11 = param_2[2];
  uVar26 = (ulonglong)uVar11;
  uVar15 = uVar24 + uVar41 + uVar26 + 6;
  uVar20 = param_1 - uVar15;
  if (param_1 < uVar15) {
    return 0xffffffffffffffec;
  }
  puVar2 = (undefined2 *)((longlong)unaff_RDI + unaff_RSI);
  uVar15 = unaff_RSI + 3 >> 2;
  puVar3 = (undefined2 *)((longlong)unaff_RDI + uVar15);
  puVar4 = (undefined2 *)((longlong)puVar3 + uVar15);
  puVar22 = (undefined2 *)(uVar15 + (longlong)puVar4);
  if (puVar2 < puVar22) {
    return 0xffffffffffffffec;
  }
  if (unaff_RSI < 6) {
    return 0xffffffffffffffec;
  }
  if (uVar41 == 0) {
    return 0xffffffffffffffb8;
  }
  puVar1 = param_2 + 3;
  uVar30 = *param_3;
  if (uVar9 < 8) {
    local_40 = (byte *)(ulonglong)(byte)*puVar1;
    switch(uVar9) {
    case 7:
      local_40 = (byte *)((ulonglong)local_40 | (ulonglong)(byte)param_2[6] << 0x30);
    case 6:
      local_40 = (byte *)((longlong)local_40 +
                         ((ulonglong)*(byte *)((longlong)param_2 + 0xb) << 0x28));
    case 5:
      local_40 = (byte *)((longlong)local_40 + ((ulonglong)(byte)param_2[5] << 0x20));
    case 4:
      local_40 = (byte *)((longlong)local_40 +
                         (ulonglong)*(byte *)((longlong)param_2 + 9) * 0x1000000);
    case 3:
      local_40 = (byte *)((longlong)local_40 + (ulonglong)(byte)param_2[4] * 0x10000);
    case 2:
      local_40 = (byte *)((longlong)local_40 + (ulonglong)*(byte *)((longlong)param_2 + 7) * 0x100);
    }
    bVar5 = *(byte *)((uVar41 - 1) + (longlong)puVar1);
    if (bVar5 == 0) {
      return 0xffffffffffffffec;
    }
    uVar36 = LZCOUNT((uint)bVar5) + (uint)uVar9 * -8 + 0x29;
    local_38 = (undefined2 *)0x6;
  }
  else {
    bVar5 = *(byte *)((uVar41 - 1) + (longlong)puVar1);
    if (bVar5 == 0) {
      return 0xffffffffffffffff;
    }
    local_38 = (undefined2 *)(uVar41 - 2);
    local_40 = *(byte **)((longlong)param_2 + (longlong)local_38);
    uVar36 = LZCOUNT((uint)bVar5) - 0x17;
  }
  local_c8 = (ulonglong)uVar36;
  if (uVar24 == 0) {
    return 0xffffffffffffffb8;
  }
  pbVar33 = (byte *)((longlong)param_2 + uVar41 + 6);
  if (uVar10 < 8) {
    local_80 = (ulonglong)*pbVar33;
    switch(uVar10) {
    case 7:
      local_80 = local_80 | (ulonglong)*(byte *)((longlong)param_2 + uVar41 + 0xc) << 0x30;
    case 6:
      local_80 = local_80 + ((ulonglong)*(byte *)((longlong)param_2 + uVar41 + 0xb) << 0x28);
    case 5:
      local_80 = local_80 + ((ulonglong)*(byte *)((longlong)param_2 + uVar41 + 10) << 0x20);
    case 4:
      local_80 = local_80 + (ulonglong)*(byte *)((longlong)param_2 + uVar41 + 9) * 0x1000000;
    case 3:
      local_80 = local_80 + (ulonglong)*(byte *)((longlong)param_2 + uVar41 + 8) * 0x10000;
    case 2:
      local_80 = local_80 + (ulonglong)*(byte *)((longlong)param_2 + uVar41 + 7) * 0x100;
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
    local_80 = *(ulonglong *)(pbVar33 + local_58);
    uVar36 = LZCOUNT((uint)pbVar33[uVar24 - 1]) - 0x17;
  }
  local_68 = (ulonglong)uVar36;
  if (uVar26 == 0) {
    return 0xffffffffffffffb8;
  }
  pbVar27 = pbVar33 + uVar24;
  if (uVar11 < 8) {
    local_78 = (ulonglong)*pbVar27;
    switch(uVar11) {
    case 7:
      local_78 = local_78 | (ulonglong)pbVar27[6] << 0x30;
    case 6:
      local_78 = local_78 + ((ulonglong)pbVar27[5] << 0x28);
    case 5:
      local_78 = local_78 + ((ulonglong)pbVar27[4] << 0x20);
    case 4:
      local_78 = local_78 + (ulonglong)pbVar27[3] * 0x1000000;
    case 3:
      local_78 = local_78 + (ulonglong)pbVar27[2] * 0x10000;
    case 2:
      local_78 = local_78 + (ulonglong)pbVar27[1] * 0x100;
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
    local_78 = *(ulonglong *)(pbVar27 + local_a0);
    uVar36 = LZCOUNT((uint)pbVar27[uVar26 - 1]) - 0x17;
  }
  local_88 = (ulonglong)uVar36;
  if (uVar20 == 0) {
    return 0xffffffffffffffb8;
  }
  pbVar40 = pbVar27 + uVar26;
  if (uVar20 < 8) {
    local_90 = (ulonglong)*pbVar40;
    switch(uVar20) {
    case 7:
      local_90 = local_90 | (ulonglong)pbVar40[6] << 0x30;
    case 6:
      local_90 = local_90 + ((ulonglong)pbVar40[5] << 0x28);
    case 5:
      local_90 = local_90 + ((ulonglong)pbVar40[4] << 0x20);
    case 4:
      local_90 = local_90 + (ulonglong)pbVar40[3] * 0x1000000;
    case 3:
      local_90 = local_90 + (ulonglong)pbVar40[2] * 0x10000;
    case 2:
      local_90 = local_90 + (ulonglong)pbVar40[1] * 0x100;
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
    local_90 = *(ulonglong *)(pbVar40 + (uVar20 - 8));
    lVar21 = uVar20 - 8;
    uVar36 = LZCOUNT((uint)pbVar40[uVar20 - 1]) - 0x17;
  }
  uVar15 = (ulonglong)uVar36;
  puVar23 = (undefined2 *)((longlong)unaff_RDI + (unaff_RSI - 7));
  uVar36 = uVar30 >> 0x10;
  lVar16 = local_a0;
  puVar28 = puVar4;
  puVar35 = puVar3;
  local_48 = puVar22;
  if ((7 < (ulonglong)((longlong)puVar2 - (longlong)puVar22)) && (puVar22 < puVar23)) {
    uVar29 = -uVar36 & 0x3f;
    bVar5 = 1;
    lVar17 = lVar21;
    do {
      uVar20 = (ulonglong)((longlong)local_40 << (local_c8 & 0x3f)) >> uVar29;
      *unaff_RDI = (short)param_3[uVar20 + 1];
      uVar14 = (uint)*(byte *)((longlong)param_3 + uVar20 * 4 + 6) + (int)local_c8;
      uVar24 = (ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7);
      uVar20 = (ulonglong)((longlong)local_40 << ((ulonglong)uVar14 & 0x3f)) >> uVar29;
      *(short *)((longlong)unaff_RDI + uVar24) = (short)param_3[uVar20 + 1];
      uVar14 = *(byte *)((longlong)param_3 + uVar20 * 4 + 6) + uVar14;
      uVar41 = (ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7);
      lVar18 = uVar41 + uVar24;
      uVar20 = (ulonglong)((longlong)local_40 << ((ulonglong)uVar14 & 0x3f)) >> uVar29;
      *(short *)((longlong)unaff_RDI + uVar41 + uVar24) = (short)param_3[uVar20 + 1];
      uVar14 = *(byte *)((longlong)param_3 + uVar20 * 4 + 6) + uVar14;
      uVar24 = (ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7);
      uVar20 = (ulonglong)((longlong)local_40 << ((ulonglong)uVar14 & 0x3f)) >> uVar29;
      *(short *)((longlong)unaff_RDI + uVar24 + lVar18) = (short)param_3[uVar20 + 1];
      uVar14 = *(byte *)((longlong)param_3 + uVar20 * 4 + 6) + uVar14;
      bVar6 = *(byte *)((longlong)param_3 + uVar20 * 4 + 7);
      uVar20 = (local_80 << (local_68 & 0x3f)) >> uVar29;
      *puVar35 = (short)param_3[uVar20 + 1];
      uVar38 = (uint)*(byte *)((longlong)param_3 + uVar20 * 4 + 6) + (int)local_68;
      uVar41 = (ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7);
      uVar20 = (local_80 << ((ulonglong)uVar38 & 0x3f)) >> uVar29;
      *(short *)((longlong)puVar35 + uVar41) = (short)param_3[uVar20 + 1];
      uVar38 = *(byte *)((longlong)param_3 + uVar20 * 4 + 6) + uVar38;
      uVar26 = (ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7);
      uVar20 = (local_80 << ((ulonglong)uVar38 & 0x3f)) >> uVar29;
      *(short *)((longlong)puVar35 + uVar26 + uVar41) = (short)param_3[uVar20 + 1];
      lVar12 = uVar26 + uVar41;
      uVar38 = *(byte *)((longlong)param_3 + uVar20 * 4 + 6) + uVar38;
      uVar20 = (ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7);
      uVar41 = (local_80 << ((ulonglong)uVar38 & 0x3f)) >> uVar29;
      *(short *)((longlong)puVar35 + uVar20 + lVar12) = (short)param_3[uVar41 + 1];
      local_d0 = (longlong)local_38;
      if (0xd < (longlong)local_38) {
        local_d0 = (longlong)local_38 - (ulonglong)(uVar14 >> 3);
        uVar14 = uVar14 & 7;
        local_40 = *(byte **)((longlong)param_2 + local_d0);
      }
      local_c8 = (ulonglong)uVar14;
      uVar38 = uVar38 + *(byte *)((longlong)param_3 + uVar41 * 4 + 6);
      bVar7 = *(byte *)((longlong)param_3 + uVar41 * 4 + 7);
      if (local_58 < 8) {
        local_f8 = local_58;
      }
      else {
        local_f8 = local_58 - (ulonglong)(uVar38 >> 3);
        uVar38 = uVar38 & 7;
        local_80 = *(ulonglong *)(pbVar33 + local_f8);
      }
      local_68 = (ulonglong)uVar38;
      uVar41 = (local_78 << (local_88 & 0x3f)) >> uVar29;
      *puVar28 = (short)param_3[uVar41 + 1];
      uVar14 = (uint)*(byte *)((longlong)param_3 + uVar41 * 4 + 6) + (int)local_88;
      uVar26 = (ulonglong)*(byte *)((longlong)param_3 + uVar41 * 4 + 7);
      uVar41 = (local_78 << ((ulonglong)uVar14 & 0x3f)) >> uVar29;
      *(short *)((longlong)puVar28 + uVar26) = (short)param_3[uVar41 + 1];
      uVar14 = *(byte *)((longlong)param_3 + uVar41 * 4 + 6) + uVar14;
      uVar34 = (ulonglong)*(byte *)((longlong)param_3 + uVar41 * 4 + 7);
      lVar13 = uVar34 + uVar26;
      uVar41 = (local_78 << ((ulonglong)uVar14 & 0x3f)) >> uVar29;
      *(short *)((longlong)puVar28 + uVar34 + uVar26) = (short)param_3[uVar41 + 1];
      uVar14 = *(byte *)((longlong)param_3 + uVar41 * 4 + 6) + uVar14;
      uVar26 = (ulonglong)*(byte *)((longlong)param_3 + uVar41 * 4 + 7);
      uVar41 = (local_78 << ((ulonglong)uVar14 & 0x3f)) >> uVar29;
      *(short *)((longlong)puVar28 + uVar26 + lVar13) = (short)param_3[uVar41 + 1];
      uVar14 = *(byte *)((longlong)param_3 + uVar41 * 4 + 6) + uVar14;
      bVar8 = *(byte *)((longlong)param_3 + uVar41 * 4 + 7);
      uVar41 = (local_90 << (uVar15 & 0x3f)) >> uVar29;
      *local_48 = (short)param_3[uVar41 + 1];
      uVar38 = (uint)*(byte *)((longlong)param_3 + uVar41 * 4 + 6) + (int)uVar15;
      uVar34 = (ulonglong)*(byte *)((longlong)param_3 + uVar41 * 4 + 7);
      uVar15 = (local_90 << ((ulonglong)uVar38 & 0x3f)) >> uVar29;
      *(short *)((longlong)local_48 + uVar34) = (short)param_3[uVar15 + 1];
      uVar38 = *(byte *)((longlong)param_3 + uVar15 * 4 + 6) + uVar38;
      uVar41 = (ulonglong)*(byte *)((longlong)param_3 + uVar15 * 4 + 7);
      uVar15 = (local_90 << ((ulonglong)uVar38 & 0x3f)) >> uVar29;
      *(short *)((longlong)local_48 + uVar41 + uVar34) = (short)param_3[uVar15 + 1];
      lVar21 = uVar41 + uVar34;
      uVar38 = *(byte *)((longlong)param_3 + uVar15 * 4 + 6) + uVar38;
      uVar41 = (ulonglong)*(byte *)((longlong)param_3 + uVar15 * 4 + 7);
      uVar15 = (local_90 << ((ulonglong)uVar38 & 0x3f)) >> uVar29;
      *(short *)((longlong)local_48 + uVar41 + lVar21) = (short)param_3[uVar15 + 1];
      lVar16 = local_a0;
      if (7 < local_a0) {
        lVar16 = local_a0 - (ulonglong)(uVar14 >> 3);
        uVar14 = uVar14 & 7;
        local_78 = *(ulonglong *)(pbVar27 + lVar16);
      }
      local_88 = (ulonglong)uVar14;
      uVar38 = uVar38 + *(byte *)((longlong)param_3 + uVar15 * 4 + 6);
      local_48 = (undefined2 *)
                 ((longlong)local_48 +
                 (ulonglong)*(byte *)((longlong)param_3 + uVar15 * 4 + 7) + uVar41 + lVar21);
      lVar21 = lVar17;
      if (7 < lVar17) {
        lVar21 = lVar17 - (ulonglong)(uVar38 >> 3);
        uVar38 = uVar38 & 7;
        local_90 = *(ulonglong *)(pbVar40 + lVar21);
      }
      uVar15 = (ulonglong)uVar38;
      unaff_RDI = (undefined2 *)((longlong)unaff_RDI + (ulonglong)bVar6 + uVar24 + lVar18);
      puVar35 = (undefined2 *)((longlong)puVar35 + (ulonglong)bVar7 + uVar20 + lVar12);
      puVar28 = (undefined2 *)((longlong)puVar28 + (ulonglong)bVar8 + uVar26 + lVar13);
      bVar5 = bVar5 & 7 < lVar17 & ((0xd < (longlong)local_38 && 7 < local_58) && 7 < local_a0);
      local_58 = local_f8;
      lVar17 = lVar21;
      local_38 = (undefined2 *)local_d0;
      local_a0 = lVar16;
    } while ((bool)(bVar5 & local_48 < puVar23));
  }
  if (puVar3 < unaff_RDI) {
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
  if ((ulonglong)((longlong)puVar3 - (longlong)unaff_RDI) < 8) {
    if (uVar29 < 0x41) {
      if ((longlong)local_38 < 0xe) {
        if (local_38 == (undefined2 *)0x6) {
LAB_00f04609:
          local_38 = (undefined2 *)0x6;
          goto LAB_00f0461e;
        }
        uVar20 = (ulonglong)((int)local_38 - 6);
        if (5 < (longlong)((longlong)local_38 - (local_c8 >> 3))) {
          uVar20 = local_c8 >> 3;
        }
        uVar29 = uVar29 + (int)uVar20 * -8;
      }
      else {
        uVar20 = local_c8 >> 3;
        uVar29 = uVar29 & 7;
      }
      local_c8 = (ulonglong)uVar29;
      local_38 = (undefined2 *)((longlong)local_38 - uVar20);
      local_40 = *(byte **)((longlong)param_2 + (longlong)local_38);
    }
  }
  else if (uVar14 < 0xc) {
    if (uVar29 < 0x41) {
      uVar29 = -uVar36 & 0x3f;
      do {
        if ((longlong)local_38 < 0xe) {
          if (local_38 == (undefined2 *)0x6) goto LAB_00f04609;
          lVar17 = (longlong)local_38 - (local_c8 >> 3);
          bVar42 = lVar17 < 6;
          uVar20 = (ulonglong)((int)local_38 - 6);
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
        local_c8 = (ulonglong)uVar38;
        local_38 = (undefined2 *)((longlong)local_38 - uVar20);
        local_40 = *(byte **)((longlong)param_2 + (longlong)local_38);
        if (((undefined2 *)((longlong)puVar3 - 9U) <= unaff_RDI) || (bVar42)) break;
        uVar20 = (ulonglong)((longlong)local_40 << (local_c8 & 0x3f)) >> uVar29;
        *unaff_RDI = (short)param_3[uVar20 + 1];
        uVar38 = *(byte *)((longlong)param_3 + uVar20 * 4 + 6) + uVar38;
        uVar41 = (ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7);
        uVar20 = (ulonglong)((longlong)local_40 << ((ulonglong)uVar38 & 0x3f)) >> uVar29;
        *(short *)((longlong)unaff_RDI + uVar41) = (short)param_3[uVar20 + 1];
        uVar38 = *(byte *)((longlong)param_3 + uVar20 * 4 + 6) + uVar38;
        uVar20 = (ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7);
        lVar17 = uVar20 + uVar41;
        uVar24 = (ulonglong)((longlong)local_40 << ((ulonglong)uVar38 & 0x3f)) >> uVar29;
        *(short *)((longlong)unaff_RDI + uVar20 + uVar41) = (short)param_3[uVar24 + 1];
        uVar38 = *(byte *)((longlong)param_3 + uVar24 * 4 + 6) + uVar38;
        uVar20 = (ulonglong)*(byte *)((longlong)param_3 + uVar24 * 4 + 7);
        lVar18 = uVar20 + lVar17;
        uVar24 = (ulonglong)((longlong)local_40 << ((ulonglong)uVar38 & 0x3f)) >> uVar29;
        *(short *)((longlong)unaff_RDI + uVar20 + lVar17) = (short)param_3[uVar24 + 1];
        uVar38 = *(byte *)((longlong)param_3 + uVar24 * 4 + 6) + uVar38;
        uVar20 = (ulonglong)*(byte *)((longlong)param_3 + uVar24 * 4 + 7);
        uVar24 = (ulonglong)((longlong)local_40 << ((ulonglong)uVar38 & 0x3f)) >> uVar29;
        *(short *)((longlong)unaff_RDI + uVar20 + lVar18) = (short)param_3[uVar24 + 1];
        uVar38 = *(byte *)((longlong)param_3 + uVar24 * 4 + 6) + uVar38;
        local_c8 = (ulonglong)uVar38;
        unaff_RDI = (undefined2 *)
                    ((longlong)unaff_RDI +
                    (ulonglong)*(byte *)((longlong)param_3 + uVar24 * 4 + 7) + uVar20 + lVar18);
      } while (uVar38 < 0x41);
    }
  }
  else if (uVar29 < 0x41) {
    uVar29 = -uVar36 & 0x3f;
    do {
      if ((longlong)local_38 < 0xe) {
        if (local_38 == (undefined2 *)0x6) goto LAB_00f04609;
        lVar17 = (longlong)local_38 - (local_c8 >> 3);
        bVar42 = lVar17 < 6;
        uVar20 = (ulonglong)((int)local_38 - 6);
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
      local_c8 = (ulonglong)uVar38;
      local_38 = (undefined2 *)((longlong)local_38 - uVar20);
      local_40 = *(byte **)((longlong)param_2 + (longlong)local_38);
      if (((undefined2 *)((longlong)puVar3 - 7U) <= unaff_RDI) || (bVar42)) break;
      uVar20 = (ulonglong)((longlong)local_40 << (local_c8 & 0x3f)) >> uVar29;
      *unaff_RDI = (short)param_3[uVar20 + 1];
      uVar38 = *(byte *)((longlong)param_3 + uVar20 * 4 + 6) + uVar38;
      uVar41 = (ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7);
      uVar20 = (ulonglong)((longlong)local_40 << ((ulonglong)uVar38 & 0x3f)) >> uVar29;
      *(short *)((longlong)unaff_RDI + uVar41) = (short)param_3[uVar20 + 1];
      uVar38 = *(byte *)((longlong)param_3 + uVar20 * 4 + 6) + uVar38;
      uVar20 = (ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7);
      lVar17 = uVar20 + uVar41;
      uVar24 = (ulonglong)((longlong)local_40 << ((ulonglong)uVar38 & 0x3f)) >> uVar29;
      *(short *)((longlong)unaff_RDI + uVar20 + uVar41) = (short)param_3[uVar24 + 1];
      uVar38 = *(byte *)((longlong)param_3 + uVar24 * 4 + 6) + uVar38;
      uVar20 = (ulonglong)*(byte *)((longlong)param_3 + uVar24 * 4 + 7);
      uVar24 = (ulonglong)((longlong)local_40 << ((ulonglong)uVar38 & 0x3f)) >> uVar29;
      *(short *)((longlong)unaff_RDI + uVar20 + lVar17) = (short)param_3[uVar24 + 1];
      uVar38 = *(byte *)((longlong)param_3 + uVar24 * 4 + 6) + uVar38;
      local_c8 = (ulonglong)uVar38;
      unaff_RDI = (undefined2 *)
                  ((longlong)unaff_RDI +
                  (ulonglong)*(byte *)((longlong)param_3 + uVar24 * 4 + 7) + uVar20 + lVar17);
    } while (uVar38 < 0x41);
  }
LAB_00f0461e:
  lVar17 = (longlong)local_38;
  if (1 < (ulonglong)((longlong)puVar3 - (longlong)unaff_RDI)) {
    while (uVar29 = (uint)local_c8, lVar17 = (longlong)local_38, uVar29 < 0x41) {
      if ((longlong)local_38 < 0xe) {
        if (local_38 == (undefined2 *)0x6) {
          lVar17 = 6;
          break;
        }
        lVar17 = (longlong)local_38 - (local_c8 >> 3);
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
      local_c8 = (ulonglong)uVar29;
      local_38 = (undefined2 *)((longlong)local_38 - (ulonglong)uVar38);
      local_40 = *(byte **)((longlong)param_2 + (longlong)local_38);
      lVar17 = (longlong)local_38;
      if ((puVar3 + -1 < unaff_RDI) || (bVar42)) break;
      uVar20 = (ulonglong)((longlong)local_40 << (local_c8 & 0x3f)) >> (-uVar36 & 0x3f);
      *unaff_RDI = (short)param_3[uVar20 + 1];
      unaff_RDI = (undefined2 *)
                  ((longlong)unaff_RDI + (ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7));
      local_c8 = (ulonglong)(*(byte *)((longlong)param_3 + uVar20 * 4 + 6) + uVar29);
    }
    for (; unaff_RDI <= puVar3 + -1;
        unaff_RDI = (undefined2 *)
                    ((ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7) + (longlong)unaff_RDI)
        ) {
      uVar20 = (ulonglong)((longlong)local_40 << (local_c8 & 0x3f)) >> (-uVar36 & 0x3f);
      *unaff_RDI = (short)param_3[uVar20 + 1];
      local_c8 = (ulonglong)((uint)*(byte *)((longlong)param_3 + uVar20 * 4 + 6) + (int)local_c8);
    }
  }
  uVar29 = (uint)local_c8;
  cVar19 = (char)(uVar30 >> 0x10);
  if (unaff_RDI < puVar3) {
    uVar20 = (ulonglong)((longlong)local_40 << (local_c8 & 0x3f)) >>
             ((ulonglong)(byte)-cVar19 & 0x3f);
    *(char *)unaff_RDI = (char)param_3[uVar20 + 1];
    if (*(char *)((longlong)param_3 + uVar20 * 4 + 7) == '\x01') {
      uVar29 = uVar29 + *(byte *)((longlong)param_3 + uVar20 * 4 + 6);
    }
    else if (uVar29 < 0x40) {
      uVar30 = uVar29 + *(byte *)((longlong)param_3 + uVar20 * 4 + 6);
      uVar29 = 0x40;
      if (uVar30 < 0x40) {
        uVar29 = uVar30;
      }
    }
  }
  uVar30 = (uint)local_68;
  local_38 = puVar35;
  if ((ulonglong)((longlong)puVar4 - (longlong)puVar35) < 8) {
    if (uVar30 < 0x41) {
      if (local_58 < 8) {
        if (local_58 == 0) {
LAB_00f04ac7:
          local_58 = 0;
          goto LAB_00f04ad2;
        }
        uVar38 = (uint)local_58;
        if (-1 < (longlong)(local_58 - (local_68 >> 3))) {
          uVar38 = (uint)(local_68 >> 3);
        }
        uVar30 = uVar30 + uVar38 * -8;
      }
      else {
        uVar38 = (uint)(local_68 >> 3);
        uVar30 = uVar30 & 7;
      }
      local_68 = (ulonglong)uVar30;
      local_58 = local_58 - (ulonglong)uVar38;
      local_80 = *(ulonglong *)(pbVar33 + local_58);
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
          uVar25 = (uint)((ulonglong)lVar18 >> 0x3f);
          uVar39 = (uint)local_68 + uVar38 * -8;
        }
        else {
          uVar38 = (uint)(local_68 >> 3);
          uVar39 = (uint)local_68 & 7;
          uVar25 = 0;
        }
        local_68 = (ulonglong)uVar39;
        local_58 = local_58 - (ulonglong)uVar38;
        local_80 = *(ulonglong *)(pbVar33 + local_58);
        if (((undefined2 *)((longlong)puVar4 - 9U) <= local_38) || (uVar25 != 0)) break;
        uVar20 = (local_80 << (local_68 & 0x3f)) >> uVar30;
        *local_38 = (short)param_3[uVar20 + 1];
        uVar39 = *(byte *)((longlong)param_3 + uVar20 * 4 + 6) + uVar39;
        uVar20 = (ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7);
        uVar24 = (local_80 << ((ulonglong)uVar39 & 0x3f)) >> uVar30;
        *(short *)((longlong)local_38 + uVar20) = (short)param_3[uVar24 + 1];
        uVar39 = *(byte *)((longlong)param_3 + uVar24 * 4 + 6) + uVar39;
        uVar24 = (ulonglong)*(byte *)((longlong)param_3 + uVar24 * 4 + 7);
        lVar18 = uVar24 + uVar20;
        uVar41 = (local_80 << ((ulonglong)uVar39 & 0x3f)) >> uVar30;
        *(short *)((longlong)local_38 + uVar24 + uVar20) = (short)param_3[uVar41 + 1];
        uVar39 = *(byte *)((longlong)param_3 + uVar41 * 4 + 6) + uVar39;
        uVar20 = (ulonglong)*(byte *)((longlong)param_3 + uVar41 * 4 + 7);
        lVar12 = uVar20 + lVar18;
        uVar24 = (local_80 << ((ulonglong)uVar39 & 0x3f)) >> uVar30;
        *(short *)((longlong)local_38 + uVar20 + lVar18) = (short)param_3[uVar24 + 1];
        uVar39 = *(byte *)((longlong)param_3 + uVar24 * 4 + 6) + uVar39;
        uVar20 = (ulonglong)*(byte *)((longlong)param_3 + uVar24 * 4 + 7);
        uVar24 = (local_80 << ((ulonglong)uVar39 & 0x3f)) >> uVar30;
        *(short *)((longlong)local_38 + uVar20 + lVar12) = (short)param_3[uVar24 + 1];
        uVar39 = *(byte *)((longlong)param_3 + uVar24 * 4 + 6) + uVar39;
        local_68 = (ulonglong)uVar39;
        local_38 = (undefined2 *)
                   ((longlong)local_38 +
                   (ulonglong)*(byte *)((longlong)param_3 + uVar24 * 4 + 7) + uVar20 + lVar12);
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
        uVar25 = (uint)((ulonglong)lVar18 >> 0x3f);
        uVar39 = (uint)local_68 + uVar38 * -8;
      }
      else {
        uVar38 = (uint)(local_68 >> 3);
        uVar39 = (uint)local_68 & 7;
        uVar25 = 0;
      }
      local_68 = (ulonglong)uVar39;
      local_58 = local_58 - (ulonglong)uVar38;
      local_80 = *(ulonglong *)(pbVar33 + local_58);
      if (((undefined2 *)((longlong)puVar4 - 7U) <= local_38) || (uVar25 != 0)) break;
      uVar20 = (local_80 << (local_68 & 0x3f)) >> uVar30;
      *local_38 = (short)param_3[uVar20 + 1];
      uVar39 = *(byte *)((longlong)param_3 + uVar20 * 4 + 6) + uVar39;
      uVar20 = (ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7);
      uVar24 = (local_80 << ((ulonglong)uVar39 & 0x3f)) >> uVar30;
      *(short *)((longlong)local_38 + uVar20) = (short)param_3[uVar24 + 1];
      uVar39 = *(byte *)((longlong)param_3 + uVar24 * 4 + 6) + uVar39;
      uVar24 = (ulonglong)*(byte *)((longlong)param_3 + uVar24 * 4 + 7);
      lVar18 = uVar24 + uVar20;
      uVar41 = (local_80 << ((ulonglong)uVar39 & 0x3f)) >> uVar30;
      *(short *)((longlong)local_38 + uVar24 + uVar20) = (short)param_3[uVar41 + 1];
      uVar39 = *(byte *)((longlong)param_3 + uVar41 * 4 + 6) + uVar39;
      uVar20 = (ulonglong)*(byte *)((longlong)param_3 + uVar41 * 4 + 7);
      uVar24 = (local_80 << ((ulonglong)uVar39 & 0x3f)) >> uVar30;
      *(short *)((longlong)local_38 + uVar20 + lVar18) = (short)param_3[uVar24 + 1];
      uVar39 = *(byte *)((longlong)param_3 + uVar24 * 4 + 6) + uVar39;
      local_68 = (ulonglong)uVar39;
      local_38 = (undefined2 *)
                 ((longlong)local_38 +
                 (ulonglong)*(byte *)((longlong)param_3 + uVar24 * 4 + 7) + uVar20 + lVar18);
    } while (uVar39 < 0x41);
  }
LAB_00f04ad2:
  local_40 = pbVar33 + local_58;
  if (1 < (ulonglong)((longlong)puVar4 - (longlong)local_38)) {
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
        local_68 = (ulonglong)uVar38;
        local_58 = local_58 - (ulonglong)uVar30;
        local_40 = pbVar33 + local_58;
        local_80 = *(ulonglong *)(pbVar33 + local_58);
        if ((puVar4 + -1 < local_38) || (bVar42)) break;
        uVar20 = (local_80 << (local_68 & 0x3f)) >> (-uVar36 & 0x3f);
        *local_38 = (short)param_3[uVar20 + 1];
        uVar38 = *(byte *)((longlong)param_3 + uVar20 * 4 + 6) + uVar38;
        local_68 = (ulonglong)uVar38;
        local_38 = (undefined2 *)
                   ((longlong)local_38 + (ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7));
        if (0x40 < uVar38) break;
      } while( true );
    }
    for (; local_38 <= puVar4 + -1;
        local_38 = (undefined2 *)
                   ((ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7) + (longlong)local_38))
    {
      uVar20 = (local_80 << (local_68 & 0x3f)) >> (-uVar36 & 0x3f);
      *local_38 = (short)param_3[uVar20 + 1];
      local_68 = (ulonglong)((uint)*(byte *)((longlong)param_3 + uVar20 * 4 + 6) + (int)local_68);
    }
  }
  uVar30 = (uint)local_68;
  if (local_38 < puVar4) {
    uVar20 = (local_80 << (local_68 & 0x3f)) >> ((ulonglong)(byte)-cVar19 & 0x3f);
    *(char *)local_38 = (char)param_3[uVar20 + 1];
    if (*(char *)((longlong)param_3 + uVar20 * 4 + 7) == '\x01') {
      uVar30 = uVar30 + *(byte *)((longlong)param_3 + uVar20 * 4 + 6);
    }
    else if (uVar30 < 0x40) {
      uVar38 = uVar30 + *(byte *)((longlong)param_3 + uVar20 * 4 + 6);
      uVar30 = 0x40;
      if (uVar38 < 0x40) {
        uVar30 = uVar38;
      }
    }
  }
  uVar38 = (uint)local_88;
  if ((ulonglong)((longlong)puVar22 - (longlong)puVar28) < 8) {
    if (uVar38 < 0x41) {
      if (lVar16 < 8) {
        if (lVar16 == 0) {
LAB_00f04f65:
          lVar16 = 0;
          goto LAB_00f04f68;
        }
        uVar25 = (uint)lVar16;
        if (-1 < (longlong)(lVar16 - (local_88 >> 3))) {
          uVar25 = (uint)(local_88 >> 3);
        }
        uVar38 = uVar38 + uVar25 * -8;
      }
      else {
        uVar25 = (uint)(local_88 >> 3);
        uVar38 = uVar38 & 7;
      }
      local_88 = (ulonglong)uVar38;
      lVar16 = lVar16 - (ulonglong)uVar25;
      local_78 = *(ulonglong *)(pbVar27 + lVar16);
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
          uVar39 = (uint)((ulonglong)lVar18 >> 0x3f);
          uVar32 = (uint)local_88 + uVar25 * -8;
        }
        else {
          uVar25 = (uint)(local_88 >> 3);
          uVar32 = (uint)local_88 & 7;
          uVar39 = 0;
        }
        local_88 = (ulonglong)uVar32;
        lVar16 = lVar16 - (ulonglong)uVar25;
        local_78 = *(ulonglong *)(pbVar27 + lVar16);
        if (((undefined2 *)((longlong)puVar22 - 9U) <= puVar28) || (uVar39 != 0)) break;
        uVar20 = (local_78 << (local_88 & 0x3f)) >> uVar38;
        *puVar28 = (short)param_3[uVar20 + 1];
        uVar32 = *(byte *)((longlong)param_3 + uVar20 * 4 + 6) + uVar32;
        uVar20 = (ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7);
        uVar24 = (local_78 << ((ulonglong)uVar32 & 0x3f)) >> uVar38;
        *(short *)((longlong)puVar28 + uVar20) = (short)param_3[uVar24 + 1];
        uVar32 = *(byte *)((longlong)param_3 + uVar24 * 4 + 6) + uVar32;
        uVar24 = (ulonglong)*(byte *)((longlong)param_3 + uVar24 * 4 + 7);
        lVar18 = uVar24 + uVar20;
        uVar41 = (local_78 << ((ulonglong)uVar32 & 0x3f)) >> uVar38;
        *(short *)((longlong)puVar28 + uVar24 + uVar20) = (short)param_3[uVar41 + 1];
        uVar32 = *(byte *)((longlong)param_3 + uVar41 * 4 + 6) + uVar32;
        uVar20 = (ulonglong)*(byte *)((longlong)param_3 + uVar41 * 4 + 7);
        lVar12 = uVar20 + lVar18;
        uVar24 = (local_78 << ((ulonglong)uVar32 & 0x3f)) >> uVar38;
        *(short *)((longlong)puVar28 + uVar20 + lVar18) = (short)param_3[uVar24 + 1];
        uVar32 = *(byte *)((longlong)param_3 + uVar24 * 4 + 6) + uVar32;
        uVar20 = (ulonglong)*(byte *)((longlong)param_3 + uVar24 * 4 + 7);
        uVar24 = (local_78 << ((ulonglong)uVar32 & 0x3f)) >> uVar38;
        *(short *)((longlong)puVar28 + uVar20 + lVar12) = (short)param_3[uVar24 + 1];
        uVar32 = *(byte *)((longlong)param_3 + uVar24 * 4 + 6) + uVar32;
        local_88 = (ulonglong)uVar32;
        puVar28 = (undefined2 *)
                  ((longlong)puVar28 +
                  (ulonglong)*(byte *)((longlong)param_3 + uVar24 * 4 + 7) + uVar20 + lVar12);
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
        uVar39 = (uint)((ulonglong)lVar18 >> 0x3f);
        uVar32 = (uint)local_88 + uVar25 * -8;
      }
      else {
        uVar25 = (uint)(local_88 >> 3);
        uVar32 = (uint)local_88 & 7;
        uVar39 = 0;
      }
      local_88 = (ulonglong)uVar32;
      lVar16 = lVar16 - (ulonglong)uVar25;
      local_78 = *(ulonglong *)(pbVar27 + lVar16);
      if (((undefined2 *)((longlong)puVar22 - 7U) <= puVar28) || (uVar39 != 0)) break;
      uVar20 = (local_78 << (local_88 & 0x3f)) >> uVar38;
      *puVar28 = (short)param_3[uVar20 + 1];
      uVar32 = *(byte *)((longlong)param_3 + uVar20 * 4 + 6) + uVar32;
      uVar20 = (ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7);
      uVar24 = (local_78 << ((ulonglong)uVar32 & 0x3f)) >> uVar38;
      *(short *)((longlong)puVar28 + uVar20) = (short)param_3[uVar24 + 1];
      uVar32 = *(byte *)((longlong)param_3 + uVar24 * 4 + 6) + uVar32;
      uVar24 = (ulonglong)*(byte *)((longlong)param_3 + uVar24 * 4 + 7);
      lVar18 = uVar24 + uVar20;
      uVar41 = (local_78 << ((ulonglong)uVar32 & 0x3f)) >> uVar38;
      *(short *)((longlong)puVar28 + uVar24 + uVar20) = (short)param_3[uVar41 + 1];
      uVar32 = *(byte *)((longlong)param_3 + uVar41 * 4 + 6) + uVar32;
      uVar20 = (ulonglong)*(byte *)((longlong)param_3 + uVar41 * 4 + 7);
      uVar24 = (local_78 << ((ulonglong)uVar32 & 0x3f)) >> uVar38;
      *(short *)((longlong)puVar28 + uVar20 + lVar18) = (short)param_3[uVar24 + 1];
      uVar32 = *(byte *)((longlong)param_3 + uVar24 * 4 + 6) + uVar32;
      local_88 = (ulonglong)uVar32;
      puVar28 = (undefined2 *)
                ((longlong)puVar28 +
                (ulonglong)*(byte *)((longlong)param_3 + uVar24 * 4 + 7) + uVar20 + lVar18);
    } while (uVar32 < 0x41);
  }
LAB_00f04f68:
  pbVar31 = pbVar27 + lVar16;
  if (1 < (ulonglong)((longlong)puVar22 - (longlong)puVar28)) {
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
      local_88 = (ulonglong)uVar38;
      lVar16 = lVar16 - (ulonglong)uVar25;
      pbVar31 = pbVar27 + lVar16;
      local_78 = *(ulonglong *)(pbVar27 + lVar16);
      if ((puVar22 + -1 < puVar28) || (bVar42)) break;
      uVar20 = (local_78 << (local_88 & 0x3f)) >> (-uVar36 & 0x3f);
      *puVar28 = (short)param_3[uVar20 + 1];
      puVar28 = (undefined2 *)
                ((longlong)puVar28 + (ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7));
      local_88 = (ulonglong)(*(byte *)((longlong)param_3 + uVar20 * 4 + 6) + uVar38);
    }
    for (; puVar28 <= puVar22 + -1;
        puVar28 = (undefined2 *)
                  ((ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7) + (longlong)puVar28)) {
      uVar20 = (local_78 << (local_88 & 0x3f)) >> (-uVar36 & 0x3f);
      *puVar28 = (short)param_3[uVar20 + 1];
      local_88 = (ulonglong)((uint)*(byte *)((longlong)param_3 + uVar20 * 4 + 6) + (int)local_88);
    }
  }
  uVar38 = (uint)local_88;
  if (puVar28 < puVar22) {
    uVar20 = (local_78 << (local_88 & 0x3f)) >> ((ulonglong)(byte)-cVar19 & 0x3f);
    *(char *)puVar28 = (char)param_3[uVar20 + 1];
    if (*(char *)((longlong)param_3 + uVar20 * 4 + 7) == '\x01') {
      uVar38 = uVar38 + *(byte *)((longlong)param_3 + uVar20 * 4 + 6);
    }
    else if (uVar38 < 0x40) {
      uVar25 = uVar38 + *(byte *)((longlong)param_3 + uVar20 * 4 + 6);
      uVar38 = 0x40;
      if (uVar25 < 0x40) {
        uVar38 = uVar25;
      }
    }
  }
  uVar25 = (uint)uVar15;
  local_58 = lVar21;
  if ((ulonglong)((longlong)puVar2 - (longlong)local_48) < 8) {
    if (uVar25 < 0x41) {
      if (lVar21 < 8) {
        if (lVar21 == 0) {
LAB_00f05408:
          local_58 = 0;
          goto LAB_00f05427;
        }
        uVar14 = (uint)lVar21;
        if (-1 < (longlong)(lVar21 - (uVar15 >> 3))) {
          uVar14 = (uint)(uVar15 >> 3);
        }
        uVar25 = uVar25 + uVar14 * -8;
      }
      else {
        uVar14 = (uint)(uVar15 >> 3);
        uVar25 = uVar25 & 7;
      }
      uVar15 = (ulonglong)uVar25;
      local_58 = lVar21 - (ulonglong)uVar14;
      local_90 = *(ulonglong *)(pbVar40 + local_58);
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
          uVar32 = (uint)((ulonglong)lVar21 >> 0x3f);
          uVar39 = (uint)uVar15 + uVar25 * -8;
        }
        else {
          uVar25 = (uint)(uVar15 >> 3);
          uVar39 = (uint)uVar15 & 7;
          uVar32 = 0;
        }
        uVar15 = (ulonglong)uVar39;
        local_58 = local_58 - (ulonglong)uVar25;
        local_90 = *(ulonglong *)(pbVar40 + local_58);
        if (((undefined2 *)((longlong)puVar2 - 9U) <= local_48) || (uVar32 != 0)) break;
        uVar15 = (local_90 << (uVar15 & 0x3f)) >> uVar14;
        *local_48 = (short)param_3[uVar15 + 1];
        uVar39 = *(byte *)((longlong)param_3 + uVar15 * 4 + 6) + uVar39;
        uVar20 = (ulonglong)*(byte *)((longlong)param_3 + uVar15 * 4 + 7);
        uVar15 = (local_90 << ((ulonglong)uVar39 & 0x3f)) >> uVar14;
        *(short *)((longlong)local_48 + uVar20) = (short)param_3[uVar15 + 1];
        uVar39 = *(byte *)((longlong)param_3 + uVar15 * 4 + 6) + uVar39;
        uVar15 = (ulonglong)*(byte *)((longlong)param_3 + uVar15 * 4 + 7);
        lVar21 = uVar15 + uVar20;
        uVar24 = (local_90 << ((ulonglong)uVar39 & 0x3f)) >> uVar14;
        *(short *)((longlong)local_48 + uVar15 + uVar20) = (short)param_3[uVar24 + 1];
        uVar39 = *(byte *)((longlong)param_3 + uVar24 * 4 + 6) + uVar39;
        uVar15 = (ulonglong)*(byte *)((longlong)param_3 + uVar24 * 4 + 7);
        lVar16 = uVar15 + lVar21;
        uVar20 = (local_90 << ((ulonglong)uVar39 & 0x3f)) >> uVar14;
        *(short *)((longlong)local_48 + uVar15 + lVar21) = (short)param_3[uVar20 + 1];
        uVar39 = *(byte *)((longlong)param_3 + uVar20 * 4 + 6) + uVar39;
        uVar20 = (ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7);
        uVar24 = (local_90 << ((ulonglong)uVar39 & 0x3f)) >> uVar14;
        *(short *)((longlong)local_48 + uVar20 + lVar16) = (short)param_3[uVar24 + 1];
        uVar39 = *(byte *)((longlong)param_3 + uVar24 * 4 + 6) + uVar39;
        uVar15 = (ulonglong)uVar39;
        local_48 = (undefined2 *)
                   ((longlong)local_48 +
                   (ulonglong)*(byte *)((longlong)param_3 + uVar24 * 4 + 7) + uVar20 + lVar16);
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
        uVar32 = (uint)((ulonglong)lVar21 >> 0x3f);
        uVar39 = (uint)uVar15 + uVar25 * -8;
      }
      else {
        uVar25 = (uint)(uVar15 >> 3);
        uVar39 = (uint)uVar15 & 7;
        uVar32 = 0;
      }
      uVar15 = (ulonglong)uVar39;
      local_58 = local_58 - (ulonglong)uVar25;
      local_90 = *(ulonglong *)(pbVar40 + local_58);
      if ((puVar23 <= local_48) || (uVar32 != 0)) break;
      uVar15 = (local_90 << (uVar15 & 0x3f)) >> uVar14;
      *local_48 = (short)param_3[uVar15 + 1];
      uVar39 = *(byte *)((longlong)param_3 + uVar15 * 4 + 6) + uVar39;
      uVar15 = (ulonglong)*(byte *)((longlong)param_3 + uVar15 * 4 + 7);
      uVar20 = (local_90 << ((ulonglong)uVar39 & 0x3f)) >> uVar14;
      *(short *)((longlong)local_48 + uVar15) = (short)param_3[uVar20 + 1];
      uVar39 = *(byte *)((longlong)param_3 + uVar20 * 4 + 6) + uVar39;
      uVar20 = (ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7);
      lVar21 = uVar20 + uVar15;
      uVar24 = (local_90 << ((ulonglong)uVar39 & 0x3f)) >> uVar14;
      *(short *)((longlong)local_48 + uVar20 + uVar15) = (short)param_3[uVar24 + 1];
      uVar39 = *(byte *)((longlong)param_3 + uVar24 * 4 + 6) + uVar39;
      uVar20 = (ulonglong)*(byte *)((longlong)param_3 + uVar24 * 4 + 7);
      uVar24 = (local_90 << ((ulonglong)uVar39 & 0x3f)) >> uVar14;
      *(short *)((longlong)local_48 + uVar20 + lVar21) = (short)param_3[uVar24 + 1];
      uVar39 = *(byte *)((longlong)param_3 + uVar24 * 4 + 6) + uVar39;
      uVar15 = (ulonglong)uVar39;
      local_48 = (undefined2 *)
                 ((longlong)local_48 +
                 (ulonglong)*(byte *)((longlong)param_3 + uVar24 * 4 + 7) + uVar20 + lVar21);
      if (0x40 < uVar39) break;
    } while( true );
  }
LAB_00f05427:
  pbVar37 = pbVar40 + local_58;
  if (1 < (ulonglong)((longlong)puVar2 - (longlong)local_48)) {
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
        uVar15 = (ulonglong)uVar25;
        local_58 = local_58 - (ulonglong)uVar14;
        pbVar37 = pbVar40 + local_58;
        local_90 = *(ulonglong *)(pbVar40 + local_58);
        if ((puVar2 + -1 < local_48) || (bVar42)) break;
        uVar20 = (local_90 << (uVar15 & 0x3f)) >> (-uVar36 & 0x3f);
        *local_48 = (short)param_3[uVar20 + 1];
        uVar25 = *(byte *)((longlong)param_3 + uVar20 * 4 + 6) + uVar25;
        uVar15 = (ulonglong)uVar25;
        local_48 = (undefined2 *)
                   ((longlong)local_48 + (ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7));
        if (0x40 < uVar25) break;
      } while( true );
    }
    for (; local_48 <= puVar2 + -1;
        local_48 = (undefined2 *)
                   ((ulonglong)*(byte *)((longlong)param_3 + uVar20 * 4 + 7) + (longlong)local_48))
    {
      uVar20 = (local_90 << (uVar15 & 0x3f)) >> (-uVar36 & 0x3f);
      *local_48 = (short)param_3[uVar20 + 1];
      uVar15 = (ulonglong)((uint)*(byte *)((longlong)param_3 + uVar20 * 4 + 6) + (int)uVar15);
    }
  }
  uVar36 = (uint)uVar15;
  if (local_48 < puVar2) {
    uVar15 = (local_90 << (uVar15 & 0x3f)) >> ((ulonglong)(byte)-cVar19 & 0x3f);
    *(char *)local_48 = (char)param_3[uVar15 + 1];
    if (*(char *)((longlong)param_3 + uVar15 * 4 + 7) == '\x01') {
      uVar36 = uVar36 + *(byte *)((longlong)param_3 + uVar15 * 4 + 6);
    }
    else if (uVar36 < 0x40) {
      uVar14 = uVar36 + *(byte *)((longlong)param_3 + uVar15 * 4 + 6);
      uVar36 = 0x40;
      if (uVar14 < 0x40) {
        uVar36 = uVar14;
      }
    }
  }
  if (uVar36 != 0x40) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (pbVar37 != pbVar40) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (uVar38 != 0x40) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (pbVar31 != pbVar27) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (uVar30 != 0x40) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (local_40 != pbVar33) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (uVar29 != 0x40) {
    unaff_RSI = 0xffffffffffffffec;
  }
  if (lVar17 != 6) {
    return 0xffffffffffffffec;
  }
  return unaff_RSI;
}


