// Function: FUN_00f46bc0
// Address: 00f46bc0
// Size: 3706 bytes
// Class: Unknown
// String references:
//   "invalid literal/length code"
//   "invalid distance code"
//   "invalid distance too far back"

void FUN_00f46bc0(void)

{
  uint64_t uVar1;
  byte *pbVar2;
  void*puVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int64_t lVar10;
  void*puVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  byte bVar16;
  uint uVar17;
  uint64_t uVar18;
  uint uVar19;
  uint64_t uVar20;
  int64_t lVar21;
  char *pcVar22;
  int iVar23;
  uint uVar24;
  uint32_t uVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  void*puVar28;
  int64_t lVar29;
  int iVar30;
  uint unaff_ESI;
  uint uVar31;
  uint64_t uVar32;
  int64_t lVar33;
  int64_t *this_ptr;
  uint64_t uVar34;
  uint64_t uVar35;
  uint uVar36;
  void*puVar37;
  uint64_t uVar38;
  int iVar39;
  void*puVar40;
  uint64_t uVar41;
  uint uVar42;
  byte *pbVar43;
  uint64_t uVar44;
  int local_110;
  byte *local_48;
  uint local_38;
  
  lVar10 = this_ptr[7];
  local_48 = (byte *)*this_ptr;
  pbVar43 = local_48 + ((int)this_ptr[1] - 5);
  puVar40 = (void*)this_ptr[3];
  iVar8 = (int)this_ptr[4];
  uVar7 = *(uint *)(lVar10 + 0x44);
  iVar23 = (int)puVar40 + iVar8;
  local_110 = (int)puVar40 - (unaff_ESI - iVar8);
  bVar4 = *(byte *)(lVar10 + 0x78);
  bVar5 = *(byte *)(lVar10 + 0x7c);
  puVar37 = puVar40 + (iVar8 - 0x101);
  iVar30 = ~unaff_ESI + iVar23;
  uVar19 = uVar7 - 1;
  uVar1 = (uint64_t)uVar19 + 1;
  uVar26 = uVar1 & 0xffffffffffffffe0;
  uVar18 = (uVar26 - 0x20 >> 5) + 1;
  uVar32 = (uint64_t)((uint)uVar18 & 3);
  iVar8 = *(int *)(lVar10 + 0x3c);
  uVar9 = *(uint *)(lVar10 + 0x40);
  puVar11 = *(void**)(lVar10 + 0x48);
  uVar44 = *(uint64_t *)(lVar10 + 0x50);
  uVar17 = *(uint *)(lVar10 + 0x58);
  lVar29 = *(int64_t *)(lVar10 + 0x68);
  lVar12 = *(int64_t *)(lVar10 + 0x70);
LAB_00f46d24:
  if (uVar17 < 0xf) {
    bVar16 = *local_48;
    pbVar2 = local_48 + 1;
    local_48 = local_48 + 2;
    uVar44 = ((uint64_t)*pbVar2 << ((byte)uVar17 + 8 & 0x3f)) +
             ((uint64_t)bVar16 << ((byte)uVar17 & 0x3f)) + uVar44;
    uVar17 = uVar17 + 0x10;
  }
  uVar27 = (uint64_t)((uint)uVar44 & ~(-1 << (bVar4 & 0x1f)));
  while( true ) {
    bVar16 = *(byte *)(lVar29 + 1 + uVar27 * 4);
    uVar44 = uVar44 >> (bVar16 & 0x3f);
    uVar17 = uVar17 - bVar16;
    bVar16 = *(byte *)(lVar29 + uVar27 * 4);
    if (bVar16 == 0) break;
    if ((bVar16 & 0x10) != 0) {
      uVar6 = *(ushort *)(lVar29 + 2 + uVar27 * 4);
      uVar36 = (uint)uVar6;
      if ((bVar16 & 0xf) != 0) {
        uVar24 = bVar16 & 0xf;
        if (uVar17 < uVar24) {
          bVar16 = *local_48;
          local_48 = local_48 + 1;
          uVar44 = uVar44 + ((uint64_t)bVar16 << ((byte)uVar17 & 0x3f));
          uVar17 = uVar17 + 8;
        }
        uVar36 = (uint)uVar6 + (~(-1 << (sbyte)uVar24) & (uint)uVar44);
        uVar44 = uVar44 >> (sbyte)uVar24;
        uVar17 = uVar17 - uVar24;
      }
      if (uVar17 < 0xf) {
        bVar16 = *local_48;
        pbVar2 = local_48 + 1;
        local_48 = local_48 + 2;
        uVar44 = ((uint64_t)*pbVar2 << ((byte)uVar17 + 8 & 0x3f)) +
                 ((uint64_t)bVar16 << ((byte)uVar17 & 0x3f)) + uVar44;
        uVar17 = uVar17 + 0x10;
      }
      uVar27 = (uint64_t)((uint)uVar44 & ~(-1 << (bVar5 & 0x1f)));
      bVar16 = *(byte *)(lVar12 + 1 + uVar27 * 4);
      uVar44 = uVar44 >> (bVar16 & 0x3f);
      uVar17 = uVar17 - bVar16;
      bVar16 = *(byte *)(lVar12 + uVar27 * 4);
      goto joined_r0x00f46e69;
    }
    if ((bVar16 & 0x40) != 0) {
      uVar25 = 0x3f3f;
      if ((bVar16 & 0x20) != 0) goto LAB_00f479d1;
      pcVar22 = "invalid literal/length code";
      goto LAB_00f479c8;
    }
    uVar27 = (uint64_t)(~(-1 << (bVar16 & 0x1f)) & (uint)uVar44) +
             (uint64_t)*(ushort *)(lVar29 + 2 + uVar27 * 4);
  }
  *puVar40 = *(void*)(lVar29 + 2 + uVar27 * 4);
  puVar40 = puVar40 + 1;
  goto LAB_00f46dac;
joined_r0x00f46e69:
  if ((bVar16 & 0x10) != 0) goto LAB_00f46ea6;
  if ((bVar16 & 0x40) != 0) {
    pcVar22 = "invalid distance code";
    goto LAB_00f479c8;
  }
  uVar27 = (uint64_t)(~(-1 << (bVar16 & 0x1f)) & (uint)uVar44) +
           (uint64_t)*(ushort *)(lVar12 + 2 + uVar27 * 4);
  bVar16 = *(byte *)(lVar12 + 1 + uVar27 * 4);
  uVar44 = uVar44 >> (bVar16 & 0x3f);
  uVar17 = uVar17 - bVar16;
  bVar16 = *(byte *)(lVar12 + uVar27 * 4);
  goto joined_r0x00f46e69;
LAB_00f46ea6:
  bVar16 = bVar16 & 0xf;
  if (uVar17 < bVar16) {
    uVar44 = ((uint64_t)*local_48 << ((byte)uVar17 & 0x3f)) + uVar44;
    uVar24 = uVar17 + 8;
    if (uVar24 < bVar16) {
      pbVar2 = local_48 + 1;
      local_48 = local_48 + 2;
      uVar44 = uVar44 + ((uint64_t)*pbVar2 << ((byte)uVar24 & 0x3f));
      uVar17 = uVar17 + 0x10;
    }
    else {
      local_48 = local_48 + 1;
      uVar17 = uVar24;
    }
  }
  uVar6 = *(ushort *)(lVar12 + 2 + uVar27 * 4);
  uVar24 = ~(-1 << bVar16) & (uint)uVar44;
  uVar44 = uVar44 >> bVar16;
  uVar27 = (uint64_t)uVar24 + (uint64_t)uVar6;
  uVar17 = uVar17 - bVar16;
  iVar39 = (int)puVar40;
  local_38 = (uint)uVar27 - (iVar39 - local_110);
  if ((uint)uVar27 < (uint)(iVar39 - local_110) || local_38 == 0) {
    uVar27 = uVar27 & 0xffffffff;
    lVar33 = 0;
    uVar24 = uVar36;
    do {
      lVar21 = lVar33;
      puVar40[lVar21] = puVar40[lVar21 - uVar27];
      puVar40[lVar21 + 1] = puVar40[lVar21 + (1 - uVar27)];
      puVar40[lVar21 + 2] = puVar40[lVar21 + (2 - uVar27)];
      uVar24 = uVar24 - 3;
      lVar33 = lVar21 + 3;
    } while (2 < uVar24);
    if ((uint)lVar33 == uVar36) {
      puVar40 = puVar40 + lVar33;
    }
    else {
      puVar40[lVar33] = puVar40[lVar33 + -uVar27];
      if ((uint)lVar33 - uVar36 == -1) {
        puVar40 = puVar40 + lVar21 + 4;
      }
      else {
        puVar40[lVar21 + 4] = puVar40[lVar21 + 4 + -uVar27];
        puVar40 = puVar40 + lVar21 + 5;
      }
    }
    goto LAB_00f46dac;
  }
  if ((uVar9 < local_38) && (*(int *)(&g_00001be8 + lVar10) != 0)) {
    pcVar22 = "invalid distance too far back";
LAB_00f479c8:
    this_ptr[6] = (int64_t)pcVar22;
    uVar25 = 0x3f51;
LAB_00f479d1:
    *(void*)(lVar10 + 8) = uVar25;
LAB_00f479db:
    lVar29 = (int64_t)local_48 - (uint64_t)(uVar17 >> 3);
    *this_ptr = lVar29;
    this_ptr[3] = (int64_t)puVar40;
    *(int *)(this_ptr + 1) = ((int)pbVar43 - (int)lVar29) + 5;
    *(int *)(this_ptr + 4) = ((int)puVar37 - (int)puVar40) + 0x101;
    *(uint64_t *)(lVar10 + 0x50) = (uint64_t)((uint)uVar44 & ~(-1 << (sbyte)(uVar17 & 7)));
    *(uint *)(lVar10 + 0x58) = uVar17 & 7;
    return;
  }
  if (uVar7 == 0) {
    uVar20 = (uint64_t)(iVar8 - local_38);
    puVar28 = puVar11 + uVar20;
    uVar31 = uVar36 - local_38;
    if (uVar36 < local_38 || uVar31 == 0) goto joined_r0x00f473a3;
    uVar36 = (uVar24 + iVar30 + (uint)uVar6) - iVar39;
    if ((uVar36 < 0x1f) ||
       ((uVar41 = (uint64_t)uVar36 + 1, puVar40 < puVar11 + uVar20 + uVar36 + 1 &&
        (puVar28 < puVar40 + uVar41)))) {
LAB_00f472f3:
      uVar36 = local_38 - 1;
      if ((local_38 & 7) != 0) {
        lVar33 = 0;
        do {
          puVar40[lVar33] = puVar28[lVar33];
          lVar33 = lVar33 + 1;
        } while ((local_38 & 7) != (uint)lVar33);
        puVar40 = puVar40 + lVar33;
        local_38 = local_38 - (uint)lVar33;
        puVar28 = puVar28 + lVar33;
      }
      if (6 < uVar36) {
        lVar33 = 0;
        do {
          puVar40[lVar33] = puVar28[lVar33];
          puVar40[lVar33 + 1] = puVar28[lVar33 + 1];
          puVar40[lVar33 + 2] = puVar28[lVar33 + 2];
          puVar40[lVar33 + 3] = puVar28[lVar33 + 3];
          puVar40[lVar33 + 4] = puVar28[lVar33 + 4];
          puVar40[lVar33 + 5] = puVar28[lVar33 + 5];
          puVar40[lVar33 + 6] = puVar28[lVar33 + 6];
          puVar40[lVar33 + 7] = puVar28[lVar33 + 7];
          lVar33 = lVar33 + 8;
        } while (local_38 != (uint)lVar33);
        puVar40 = puVar40 + lVar33;
      }
    }
    else {
      uVar34 = uVar41 & 0x1ffffffe0;
      uVar38 = (uVar34 - 0x20 >> 5) + 1;
      uVar35 = (uint64_t)((uint)uVar38 & 3);
      if (uVar34 - 0x20 < 0x60) {
        lVar21 = 0;
      }
      else {
        lVar33 = -(uVar38 & 0xfffffffffffffffc);
        lVar21 = 0;
        do {
          uVar13 = *(void*)((int64_t)(puVar11 + lVar21 + uVar20) + 8);
          uVar14 = *(void*)(puVar11 + lVar21 + uVar20 + 0x10);
          uVar15 = *(void*)((int64_t)(puVar11 + lVar21 + uVar20 + 0x10) + 8);
          *(void*)(puVar40 + lVar21) = *(void*)(puVar11 + lVar21 + uVar20);
          *(void*)((int64_t)(puVar40 + lVar21) + 8) = uVar13;
          *(void*)(puVar40 + lVar21 + 0x10) = uVar14;
          *(void*)((int64_t)(puVar40 + lVar21 + 0x10) + 8) = uVar15;
          uVar13 = *(void*)((int64_t)(puVar11 + lVar21 + uVar20 + 0x20) + 8);
          uVar14 = *(void*)(puVar11 + lVar21 + uVar20 + 0x30);
          uVar15 = *(void*)((int64_t)(puVar11 + lVar21 + uVar20 + 0x30) + 8);
          *(void*)(puVar40 + lVar21 + 0x20) =
               *(void*)(puVar11 + lVar21 + uVar20 + 0x20);
          *(void*)((int64_t)(puVar40 + lVar21 + 0x20) + 8) = uVar13;
          *(void*)(puVar40 + lVar21 + 0x30) = uVar14;
          *(void*)((int64_t)(puVar40 + lVar21 + 0x30) + 8) = uVar15;
          uVar13 = *(void*)((int64_t)(puVar11 + lVar21 + uVar20 + 0x40) + 8);
          uVar14 = *(void*)(puVar11 + lVar21 + uVar20 + 0x50);
          uVar15 = *(void*)((int64_t)(puVar11 + lVar21 + uVar20 + 0x50) + 8);
          *(void*)(puVar40 + lVar21 + 0x40) =
               *(void*)(puVar11 + lVar21 + uVar20 + 0x40);
          *(void*)((int64_t)(puVar40 + lVar21 + 0x40) + 8) = uVar13;
          *(void*)(puVar40 + lVar21 + 0x50) = uVar14;
          *(void*)((int64_t)(puVar40 + lVar21 + 0x50) + 8) = uVar15;
          uVar13 = *(void*)((int64_t)(puVar11 + lVar21 + uVar20 + 0x60) + 8);
          uVar14 = *(void*)(puVar11 + lVar21 + uVar20 + 0x70);
          uVar15 = *(void*)((int64_t)(puVar11 + lVar21 + uVar20 + 0x70) + 8);
          *(void*)(puVar40 + lVar21 + 0x60) =
               *(void*)(puVar11 + lVar21 + uVar20 + 0x60);
          *(void*)((int64_t)(puVar40 + lVar21 + 0x60) + 8) = uVar13;
          *(void*)(puVar40 + lVar21 + 0x70) = uVar14;
          *(void*)((int64_t)(puVar40 + lVar21 + 0x70) + 8) = uVar15;
          lVar21 = lVar21 + 0x80;
          lVar33 = lVar33 + 4;
        } while (lVar33 != 0);
      }
      if (uVar35 != 0) {
        lVar33 = 0;
        do {
          uVar13 = *(void*)((int64_t)(puVar11 + lVar33 + uVar20 + lVar21) + 8);
          uVar14 = *(void*)(puVar11 + lVar33 + uVar20 + lVar21 + 0x10);
          uVar15 = *(void*)((int64_t)(puVar11 + lVar33 + uVar20 + lVar21 + 0x10) + 8);
          *(void*)(puVar40 + lVar33 + lVar21) =
               *(void*)(puVar11 + lVar33 + uVar20 + lVar21);
          *(void*)((int64_t)(puVar40 + lVar33 + lVar21) + 8) = uVar13;
          *(void*)(puVar40 + lVar33 + lVar21 + 0x10) = uVar14;
          *(void*)((int64_t)(puVar40 + lVar33 + lVar21 + 0x10) + 8) = uVar15;
          lVar33 = lVar33 + 0x20;
        } while (uVar35 << 5 != lVar33);
      }
      puVar40 = puVar40 + uVar34;
      if (uVar41 != uVar34) {
        local_38 = local_38 - (int)uVar34;
        puVar28 = puVar28 + uVar34;
        goto LAB_00f472f3;
      }
    }
    uVar36 = uVar31;
    puVar28 = puVar40 + -uVar27;
  }
  else {
    uVar20 = (uint64_t)(uVar7 - local_38);
    if (uVar7 < local_38) {
      uVar20 = (uint64_t)((uVar7 + iVar8) - local_38);
      puVar28 = puVar11 + uVar20;
      local_38 = local_38 - uVar7;
      uVar42 = uVar36 - local_38;
      if (local_38 <= uVar36 && uVar42 != 0) {
        uVar36 = (uVar24 + ((~uVar7 + iVar23) - unaff_ESI) + (uint)uVar6) - iVar39;
        if ((uVar36 < 0x1f) ||
           ((uVar41 = (uint64_t)uVar36 + 1, puVar40 < puVar11 + uVar20 + uVar36 + 1 &&
            (puVar28 < puVar40 + uVar41)))) {
LAB_00f4762f:
          uVar36 = local_38 - 1;
          if ((local_38 & 7) != 0) {
            lVar33 = 0;
            do {
              puVar40[lVar33] = puVar28[lVar33];
              lVar33 = lVar33 + 1;
            } while ((local_38 & 7) != (uint)lVar33);
            puVar40 = puVar40 + lVar33;
            local_38 = local_38 - (uint)lVar33;
            puVar28 = puVar28 + lVar33;
          }
          if (6 < uVar36) {
            lVar33 = 0;
            do {
              puVar40[lVar33] = puVar28[lVar33];
              puVar40[lVar33 + 1] = puVar28[lVar33 + 1];
              puVar40[lVar33 + 2] = puVar28[lVar33 + 2];
              puVar40[lVar33 + 3] = puVar28[lVar33 + 3];
              puVar40[lVar33 + 4] = puVar28[lVar33 + 4];
              puVar40[lVar33 + 5] = puVar28[lVar33 + 5];
              puVar40[lVar33 + 6] = puVar28[lVar33 + 6];
              puVar40[lVar33 + 7] = puVar28[lVar33 + 7];
              lVar33 = lVar33 + 8;
            } while (local_38 != (uint)lVar33);
            puVar40 = puVar40 + lVar33;
          }
        }
        else {
          uVar35 = uVar41 & 0x1ffffffe0;
          uVar34 = (uVar35 - 0x20 >> 5) + 1;
          uVar38 = (uint64_t)((uint)uVar34 & 3);
          if (uVar35 - 0x20 < 0x60) {
            lVar33 = 0;
          }
          else {
            lVar21 = -(uVar34 & 0xfffffffffffffffc);
            lVar33 = 0;
            do {
              uVar13 = *(void*)((int64_t)(puVar11 + lVar33 + uVar20) + 8);
              uVar14 = *(void*)(puVar11 + lVar33 + uVar20 + 0x10);
              uVar15 = *(void*)((int64_t)(puVar11 + lVar33 + uVar20 + 0x10) + 8);
              *(void*)(puVar40 + lVar33) = *(void*)(puVar11 + lVar33 + uVar20);
              *(void*)((int64_t)(puVar40 + lVar33) + 8) = uVar13;
              *(void*)(puVar40 + lVar33 + 0x10) = uVar14;
              *(void*)((int64_t)(puVar40 + lVar33 + 0x10) + 8) = uVar15;
              uVar13 = *(void*)((int64_t)(puVar11 + lVar33 + uVar20 + 0x20) + 8);
              uVar14 = *(void*)(puVar11 + lVar33 + uVar20 + 0x30);
              uVar15 = *(void*)((int64_t)(puVar11 + lVar33 + uVar20 + 0x30) + 8);
              *(void*)(puVar40 + lVar33 + 0x20) =
                   *(void*)(puVar11 + lVar33 + uVar20 + 0x20);
              *(void*)((int64_t)(puVar40 + lVar33 + 0x20) + 8) = uVar13;
              *(void*)(puVar40 + lVar33 + 0x30) = uVar14;
              *(void*)((int64_t)(puVar40 + lVar33 + 0x30) + 8) = uVar15;
              uVar13 = *(void*)((int64_t)(puVar11 + lVar33 + uVar20 + 0x40) + 8);
              uVar14 = *(void*)(puVar11 + lVar33 + uVar20 + 0x50);
              uVar15 = *(void*)((int64_t)(puVar11 + lVar33 + uVar20 + 0x50) + 8);
              *(void*)(puVar40 + lVar33 + 0x40) =
                   *(void*)(puVar11 + lVar33 + uVar20 + 0x40);
              *(void*)((int64_t)(puVar40 + lVar33 + 0x40) + 8) = uVar13;
              *(void*)(puVar40 + lVar33 + 0x50) = uVar14;
              *(void*)((int64_t)(puVar40 + lVar33 + 0x50) + 8) = uVar15;
              uVar13 = *(void*)((int64_t)(puVar11 + lVar33 + uVar20 + 0x60) + 8);
              uVar14 = *(void*)(puVar11 + lVar33 + uVar20 + 0x70);
              uVar15 = *(void*)((int64_t)(puVar11 + lVar33 + uVar20 + 0x70) + 8);
              *(void*)(puVar40 + lVar33 + 0x60) =
                   *(void*)(puVar11 + lVar33 + uVar20 + 0x60);
              *(void*)((int64_t)(puVar40 + lVar33 + 0x60) + 8) = uVar13;
              *(void*)(puVar40 + lVar33 + 0x70) = uVar14;
              *(void*)((int64_t)(puVar40 + lVar33 + 0x70) + 8) = uVar15;
              lVar33 = lVar33 + 0x80;
              lVar21 = lVar21 + 4;
            } while (lVar21 != 0);
          }
          if (uVar38 != 0) {
            lVar21 = 0;
            do {
              uVar13 = *(void*)((int64_t)(puVar11 + lVar21 + uVar20 + lVar33) + 8);
              uVar14 = *(void*)(puVar11 + lVar21 + uVar20 + lVar33 + 0x10);
              uVar15 = *(void*)((int64_t)(puVar11 + lVar21 + uVar20 + lVar33 + 0x10) + 8);
              *(void*)(puVar40 + lVar21 + lVar33) =
                   *(void*)(puVar11 + lVar21 + uVar20 + lVar33);
              *(void*)((int64_t)(puVar40 + lVar21 + lVar33) + 8) = uVar13;
              *(void*)(puVar40 + lVar21 + lVar33 + 0x10) = uVar14;
              *(void*)((int64_t)(puVar40 + lVar21 + lVar33 + 0x10) + 8) = uVar15;
              lVar21 = lVar21 + 0x20;
            } while (uVar38 << 5 != lVar21);
          }
          puVar40 = puVar40 + uVar35;
          if (uVar41 != uVar35) {
            local_38 = local_38 - (int)uVar35;
            puVar28 = puVar28 + uVar35;
            goto LAB_00f4762f;
          }
        }
        uVar31 = uVar42 - uVar7;
        uVar36 = uVar42;
        puVar28 = puVar11;
        if (uVar7 <= uVar42 && uVar31 != 0) {
          uVar36 = uVar7;
          if ((0x1e < uVar19) &&
             ((puVar11 + (uint64_t)uVar19 + 1 <= puVar40 || (puVar40 + uVar1 <= puVar11)))) {
            if (uVar26 - 0x20 < 0x60) {
              lVar21 = 0;
            }
            else {
              lVar21 = 0;
              lVar33 = -(uVar18 & 0xfffffffffffffffc);
              do {
                uVar13 = *(void*)((int64_t)(puVar11 + lVar21) + 8);
                uVar14 = *(void*)(puVar11 + lVar21 + 0x10);
                uVar15 = *(void*)((int64_t)(puVar11 + lVar21 + 0x10) + 8);
                *(void*)(puVar40 + lVar21) = *(void*)(puVar11 + lVar21);
                *(void*)((int64_t)(puVar40 + lVar21) + 8) = uVar13;
                *(void*)(puVar40 + lVar21 + 0x10) = uVar14;
                *(void*)((int64_t)(puVar40 + lVar21 + 0x10) + 8) = uVar15;
                uVar13 = *(void*)((int64_t)(puVar11 + lVar21 + 0x20) + 8);
                uVar14 = *(void*)(puVar11 + lVar21 + 0x30);
                uVar15 = *(void*)((int64_t)(puVar11 + lVar21 + 0x30) + 8);
                *(void*)(puVar40 + lVar21 + 0x20) = *(void*)(puVar11 + lVar21 + 0x20);
                *(void*)((int64_t)(puVar40 + lVar21 + 0x20) + 8) = uVar13;
                *(void*)(puVar40 + lVar21 + 0x30) = uVar14;
                *(void*)((int64_t)(puVar40 + lVar21 + 0x30) + 8) = uVar15;
                uVar13 = *(void*)((int64_t)(puVar11 + lVar21 + 0x40) + 8);
                uVar14 = *(void*)(puVar11 + lVar21 + 0x50);
                uVar15 = *(void*)((int64_t)(puVar11 + lVar21 + 0x50) + 8);
                *(void*)(puVar40 + lVar21 + 0x40) = *(void*)(puVar11 + lVar21 + 0x40);
                *(void*)((int64_t)(puVar40 + lVar21 + 0x40) + 8) = uVar13;
                *(void*)(puVar40 + lVar21 + 0x50) = uVar14;
                *(void*)((int64_t)(puVar40 + lVar21 + 0x50) + 8) = uVar15;
                uVar13 = *(void*)((int64_t)(puVar11 + lVar21 + 0x60) + 8);
                uVar14 = *(void*)(puVar11 + lVar21 + 0x70);
                uVar15 = *(void*)((int64_t)(puVar11 + lVar21 + 0x70) + 8);
                *(void*)(puVar40 + lVar21 + 0x60) = *(void*)(puVar11 + lVar21 + 0x60);
                *(void*)((int64_t)(puVar40 + lVar21 + 0x60) + 8) = uVar13;
                *(void*)(puVar40 + lVar21 + 0x70) = uVar14;
                *(void*)((int64_t)(puVar40 + lVar21 + 0x70) + 8) = uVar15;
                lVar21 = lVar21 + 0x80;
                lVar33 = lVar33 + 4;
              } while (lVar33 != 0);
            }
            if (uVar32 != 0) {
              lVar33 = 0;
              do {
                uVar13 = *(void*)((int64_t)(puVar11 + lVar33 + lVar21) + 8);
                uVar14 = *(void*)(puVar11 + lVar33 + lVar21 + 0x10);
                uVar15 = *(void*)((int64_t)(puVar11 + lVar33 + lVar21 + 0x10) + 8);
                *(void*)(puVar40 + lVar33 + lVar21) =
                     *(void*)(puVar11 + lVar33 + lVar21);
                *(void*)((int64_t)(puVar40 + lVar33 + lVar21) + 8) = uVar13;
                *(void*)(puVar40 + lVar33 + lVar21 + 0x10) = uVar14;
                *(void*)((int64_t)(puVar40 + lVar33 + lVar21 + 0x10) + 8) = uVar15;
                lVar33 = lVar33 + 0x20;
              } while (uVar32 << 5 != lVar33);
            }
            puVar40 = puVar40 + uVar26;
            puVar28 = puVar11 + uVar26;
            uVar36 = uVar7 - (int)uVar26;
            if (uVar1 == uVar26) goto LAB_00f478d1;
          }
          uVar24 = uVar36 - 1;
          if ((uVar36 & 7) != 0) {
            lVar33 = 0;
            do {
              puVar40[lVar33] = puVar28[lVar33];
              lVar33 = lVar33 + 1;
            } while ((uVar36 & 7) != (uint)lVar33);
            puVar40 = puVar40 + lVar33;
            uVar36 = uVar36 - (uint)lVar33;
            puVar28 = puVar28 + lVar33;
          }
          if (6 < uVar24) {
            lVar33 = 0;
            do {
              puVar40[lVar33] = puVar28[lVar33];
              puVar40[lVar33 + 1] = puVar28[lVar33 + 1];
              puVar40[lVar33 + 2] = puVar28[lVar33 + 2];
              puVar40[lVar33 + 3] = puVar28[lVar33 + 3];
              puVar40[lVar33 + 4] = puVar28[lVar33 + 4];
              puVar40[lVar33 + 5] = puVar28[lVar33 + 5];
              puVar40[lVar33 + 6] = puVar28[lVar33 + 6];
              puVar40[lVar33 + 7] = puVar28[lVar33 + 7];
              lVar33 = lVar33 + 8;
            } while (uVar36 != (uint)lVar33);
            puVar40 = puVar40 + lVar33;
          }
          goto LAB_00f478d1;
        }
      }
    }
    else {
      puVar28 = puVar11 + uVar20;
      uVar31 = uVar36 - local_38;
      if (uVar36 < local_38 || uVar31 == 0) goto joined_r0x00f473a3;
      uVar36 = (uVar24 + iVar30 + (uint)uVar6) - iVar39;
      if ((uVar36 < 0x1f) ||
         ((uVar41 = (uint64_t)uVar36 + 1, puVar40 < puVar11 + uVar20 + uVar36 + 1 &&
          (puVar28 < puVar40 + uVar41)))) {
LAB_00f47571:
        uVar36 = local_38 - 1;
        if ((local_38 & 7) != 0) {
          lVar33 = 0;
          do {
            puVar40[lVar33] = puVar28[lVar33];
            lVar33 = lVar33 + 1;
          } while ((local_38 & 7) != (uint)lVar33);
          puVar40 = puVar40 + lVar33;
          local_38 = local_38 - (uint)lVar33;
          puVar28 = puVar28 + lVar33;
        }
        if (6 < uVar36) {
          lVar33 = 0;
          do {
            puVar40[lVar33] = puVar28[lVar33];
            puVar40[lVar33 + 1] = puVar28[lVar33 + 1];
            puVar40[lVar33 + 2] = puVar28[lVar33 + 2];
            puVar40[lVar33 + 3] = puVar28[lVar33 + 3];
            puVar40[lVar33 + 4] = puVar28[lVar33 + 4];
            puVar40[lVar33 + 5] = puVar28[lVar33 + 5];
            puVar40[lVar33 + 6] = puVar28[lVar33 + 6];
            puVar40[lVar33 + 7] = puVar28[lVar33 + 7];
            lVar33 = lVar33 + 8;
          } while (local_38 != (uint)lVar33);
          puVar40 = puVar40 + lVar33;
        }
      }
      else {
        uVar38 = uVar41 & 0x1ffffffe0;
        uVar35 = (uVar38 - 0x20 >> 5) + 1;
        uVar34 = (uint64_t)((uint)uVar35 & 3);
        if (uVar38 - 0x20 < 0x60) {
          lVar21 = 0;
        }
        else {
          lVar33 = -(uVar35 & 0xfffffffffffffffc);
          lVar21 = 0;
          do {
            uVar13 = *(void*)((int64_t)(puVar11 + lVar21 + uVar20) + 8);
            uVar14 = *(void*)(puVar11 + lVar21 + uVar20 + 0x10);
            uVar15 = *(void*)((int64_t)(puVar11 + lVar21 + uVar20 + 0x10) + 8);
            *(void*)(puVar40 + lVar21) = *(void*)(puVar11 + lVar21 + uVar20);
            *(void*)((int64_t)(puVar40 + lVar21) + 8) = uVar13;
            *(void*)(puVar40 + lVar21 + 0x10) = uVar14;
            *(void*)((int64_t)(puVar40 + lVar21 + 0x10) + 8) = uVar15;
            uVar13 = *(void*)((int64_t)(puVar11 + lVar21 + uVar20 + 0x20) + 8);
            uVar14 = *(void*)(puVar11 + lVar21 + uVar20 + 0x30);
            uVar15 = *(void*)((int64_t)(puVar11 + lVar21 + uVar20 + 0x30) + 8);
            *(void*)(puVar40 + lVar21 + 0x20) =
                 *(void*)(puVar11 + lVar21 + uVar20 + 0x20);
            *(void*)((int64_t)(puVar40 + lVar21 + 0x20) + 8) = uVar13;
            *(void*)(puVar40 + lVar21 + 0x30) = uVar14;
            *(void*)((int64_t)(puVar40 + lVar21 + 0x30) + 8) = uVar15;
            uVar13 = *(void*)((int64_t)(puVar11 + lVar21 + uVar20 + 0x40) + 8);
            uVar14 = *(void*)(puVar11 + lVar21 + uVar20 + 0x50);
            uVar15 = *(void*)((int64_t)(puVar11 + lVar21 + uVar20 + 0x50) + 8);
            *(void*)(puVar40 + lVar21 + 0x40) =
                 *(void*)(puVar11 + lVar21 + uVar20 + 0x40);
            *(void*)((int64_t)(puVar40 + lVar21 + 0x40) + 8) = uVar13;
            *(void*)(puVar40 + lVar21 + 0x50) = uVar14;
            *(void*)((int64_t)(puVar40 + lVar21 + 0x50) + 8) = uVar15;
            uVar13 = *(void*)((int64_t)(puVar11 + lVar21 + uVar20 + 0x60) + 8);
            uVar14 = *(void*)(puVar11 + lVar21 + uVar20 + 0x70);
            uVar15 = *(void*)((int64_t)(puVar11 + lVar21 + uVar20 + 0x70) + 8);
            *(void*)(puVar40 + lVar21 + 0x60) =
                 *(void*)(puVar11 + lVar21 + uVar20 + 0x60);
            *(void*)((int64_t)(puVar40 + lVar21 + 0x60) + 8) = uVar13;
            *(void*)(puVar40 + lVar21 + 0x70) = uVar14;
            *(void*)((int64_t)(puVar40 + lVar21 + 0x70) + 8) = uVar15;
            lVar21 = lVar21 + 0x80;
            lVar33 = lVar33 + 4;
          } while (lVar33 != 0);
        }
        if (uVar34 != 0) {
          lVar33 = 0;
          do {
            uVar13 = *(void*)((int64_t)(puVar11 + lVar33 + uVar20 + lVar21) + 8);
            uVar14 = *(void*)(puVar11 + lVar33 + uVar20 + lVar21 + 0x10);
            uVar15 = *(void*)((int64_t)(puVar11 + lVar33 + uVar20 + lVar21 + 0x10) + 8);
            *(void*)(puVar40 + lVar33 + lVar21) =
                 *(void*)(puVar11 + lVar33 + uVar20 + lVar21);
            *(void*)((int64_t)(puVar40 + lVar33 + lVar21) + 8) = uVar13;
            *(void*)(puVar40 + lVar33 + lVar21 + 0x10) = uVar14;
            *(void*)((int64_t)(puVar40 + lVar33 + lVar21 + 0x10) + 8) = uVar15;
            lVar33 = lVar33 + 0x20;
          } while (uVar34 << 5 != lVar33);
        }
        puVar40 = puVar40 + uVar38;
        if (uVar41 != uVar38) {
          local_38 = local_38 - (int)uVar38;
          puVar28 = puVar28 + uVar38;
          goto LAB_00f47571;
        }
      }
LAB_00f478d1:
      uVar36 = uVar31;
      puVar28 = puVar40 + -(uVar27 & 0xffffffff);
    }
  }
joined_r0x00f473a3:
  if (2 < uVar36) {
    uVar24 = uVar36 - 3;
    uVar31 = uVar36;
    uVar36 = uVar24;
    if (((uint64_t)uVar24 / 3 & 1) == 0) {
      *puVar40 = *puVar28;
      puVar40[1] = puVar28[1];
      puVar3 = puVar28 + 2;
      puVar28 = puVar28 + 3;
      puVar40[2] = *puVar3;
      puVar40 = puVar40 + 3;
      uVar31 = uVar24;
    }
    while (2 < uVar36) {
      *puVar40 = *puVar28;
      puVar40[1] = puVar28[1];
      puVar40[2] = puVar28[2];
      puVar40[3] = puVar28[3];
      puVar40[4] = puVar28[4];
      puVar3 = puVar28 + 5;
      puVar28 = puVar28 + 6;
      puVar40[5] = *puVar3;
      puVar40 = puVar40 + 6;
      uVar31 = uVar31 - 6;
      uVar36 = uVar31;
    }
  }
  if (uVar36 != 0) {
    *puVar40 = *puVar28;
    if (uVar36 == 1) {
      puVar40 = puVar40 + 1;
    }
    else {
      puVar40[1] = puVar28[1];
      puVar40 = puVar40 + 2;
    }
  }
LAB_00f46dac:
  if ((pbVar43 <= local_48) || (puVar37 <= puVar40)) goto LAB_00f479db;
  goto LAB_00f46d24;
}

