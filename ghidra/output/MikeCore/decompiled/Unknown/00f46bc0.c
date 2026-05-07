// Function: FUN_00f46bc0
// Address: 00f46bc0
// Size: 3706 bytes
// Class: Unknown
// String references:
//   "invalid literal/length code"
//   "invalid distance code"
//   "invalid distance too far back"


/* WARNING: Type propagation algorithm not settling */

void FUN_00f46bc0(void)

{
  ulonglong uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  byte bVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  char *pcVar22;
  int iVar23;
  uint uVar24;
  undefined4 uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 *puVar28;
  longlong lVar29;
  int iVar30;
  uint unaff_ESI;
  uint uVar31;
  ulonglong uVar32;
  longlong lVar33;
  longlong *unaff_RDI;
  ulonglong uVar34;
  ulonglong uVar35;
  uint uVar36;
  undefined1 *puVar37;
  ulonglong uVar38;
  int iVar39;
  undefined1 *puVar40;
  ulonglong uVar41;
  uint uVar42;
  byte *pbVar43;
  ulonglong uVar44;
  int local_110;
  byte *local_48;
  uint local_38;
  
  lVar10 = unaff_RDI[7];
  local_48 = (byte *)*unaff_RDI;
  pbVar43 = local_48 + ((int)unaff_RDI[1] - 5);
  puVar40 = (undefined1 *)unaff_RDI[3];
  iVar8 = (int)unaff_RDI[4];
  uVar7 = *(uint *)(lVar10 + 0x44);
  iVar23 = (int)puVar40 + iVar8;
  local_110 = (int)puVar40 - (unaff_ESI - iVar8);
  bVar4 = *(byte *)(lVar10 + 0x78);
  bVar5 = *(byte *)(lVar10 + 0x7c);
  puVar37 = puVar40 + (iVar8 - 0x101);
  iVar30 = ~unaff_ESI + iVar23;
  uVar19 = uVar7 - 1;
  uVar1 = (ulonglong)uVar19 + 1;
  uVar26 = uVar1 & 0xffffffffffffffe0;
  uVar18 = (uVar26 - 0x20 >> 5) + 1;
  uVar32 = (ulonglong)((uint)uVar18 & 3);
  iVar8 = *(int *)(lVar10 + 0x3c);
  uVar9 = *(uint *)(lVar10 + 0x40);
  puVar11 = *(undefined1 **)(lVar10 + 0x48);
  uVar44 = *(ulonglong *)(lVar10 + 0x50);
  uVar17 = *(uint *)(lVar10 + 0x58);
  lVar29 = *(longlong *)(lVar10 + 0x68);
  lVar12 = *(longlong *)(lVar10 + 0x70);
LAB_00f46d24:
  if (uVar17 < 0xf) {
    bVar16 = *local_48;
    pbVar2 = local_48 + 1;
    local_48 = local_48 + 2;
    uVar44 = ((ulonglong)*pbVar2 << ((byte)uVar17 + 8 & 0x3f)) +
             ((ulonglong)bVar16 << ((byte)uVar17 & 0x3f)) + uVar44;
    uVar17 = uVar17 + 0x10;
  }
  uVar27 = (ulonglong)((uint)uVar44 & ~(-1 << (bVar4 & 0x1f)));
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
          uVar44 = uVar44 + ((ulonglong)bVar16 << ((byte)uVar17 & 0x3f));
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
        uVar44 = ((ulonglong)*pbVar2 << ((byte)uVar17 + 8 & 0x3f)) +
                 ((ulonglong)bVar16 << ((byte)uVar17 & 0x3f)) + uVar44;
        uVar17 = uVar17 + 0x10;
      }
      uVar27 = (ulonglong)((uint)uVar44 & ~(-1 << (bVar5 & 0x1f)));
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
    uVar27 = (ulonglong)(~(-1 << (bVar16 & 0x1f)) & (uint)uVar44) +
             (ulonglong)*(ushort *)(lVar29 + 2 + uVar27 * 4);
  }
  *puVar40 = *(undefined1 *)(lVar29 + 2 + uVar27 * 4);
  puVar40 = puVar40 + 1;
  goto LAB_00f46dac;
joined_r0x00f46e69:
  if ((bVar16 & 0x10) != 0) goto LAB_00f46ea6;
  if ((bVar16 & 0x40) != 0) {
    pcVar22 = "invalid distance code";
    goto LAB_00f479c8;
  }
  uVar27 = (ulonglong)(~(-1 << (bVar16 & 0x1f)) & (uint)uVar44) +
           (ulonglong)*(ushort *)(lVar12 + 2 + uVar27 * 4);
  bVar16 = *(byte *)(lVar12 + 1 + uVar27 * 4);
  uVar44 = uVar44 >> (bVar16 & 0x3f);
  uVar17 = uVar17 - bVar16;
  bVar16 = *(byte *)(lVar12 + uVar27 * 4);
  goto joined_r0x00f46e69;
LAB_00f46ea6:
  bVar16 = bVar16 & 0xf;
  if (uVar17 < bVar16) {
    uVar44 = ((ulonglong)*local_48 << ((byte)uVar17 & 0x3f)) + uVar44;
    uVar24 = uVar17 + 8;
    if (uVar24 < bVar16) {
      pbVar2 = local_48 + 1;
      local_48 = local_48 + 2;
      uVar44 = uVar44 + ((ulonglong)*pbVar2 << ((byte)uVar24 & 0x3f));
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
  uVar27 = (ulonglong)uVar24 + (ulonglong)uVar6;
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
  if ((uVar9 < local_38) && (*(int *)(&DAT_00001be8 + lVar10) != 0)) {
    pcVar22 = "invalid distance too far back";
LAB_00f479c8:
    unaff_RDI[6] = (longlong)pcVar22;
    uVar25 = 0x3f51;
LAB_00f479d1:
    *(undefined4 *)(lVar10 + 8) = uVar25;
LAB_00f479db:
    lVar29 = (longlong)local_48 - (ulonglong)(uVar17 >> 3);
    *unaff_RDI = lVar29;
    unaff_RDI[3] = (longlong)puVar40;
    *(int *)(unaff_RDI + 1) = ((int)pbVar43 - (int)lVar29) + 5;
    *(int *)(unaff_RDI + 4) = ((int)puVar37 - (int)puVar40) + 0x101;
    *(ulonglong *)(lVar10 + 0x50) = (ulonglong)((uint)uVar44 & ~(-1 << (sbyte)(uVar17 & 7)));
    *(uint *)(lVar10 + 0x58) = uVar17 & 7;
    return;
  }
  if (uVar7 == 0) {
    uVar20 = (ulonglong)(iVar8 - local_38);
    puVar28 = puVar11 + uVar20;
    uVar31 = uVar36 - local_38;
    if (uVar36 < local_38 || uVar31 == 0) goto joined_r0x00f473a3;
    uVar36 = (uVar24 + iVar30 + (uint)uVar6) - iVar39;
    if ((uVar36 < 0x1f) ||
       ((uVar41 = (ulonglong)uVar36 + 1, puVar40 < puVar11 + uVar20 + uVar36 + 1 &&
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
      uVar35 = (ulonglong)((uint)uVar38 & 3);
      if (uVar34 - 0x20 < 0x60) {
        lVar21 = 0;
      }
      else {
        lVar33 = -(uVar38 & 0xfffffffffffffffc);
        lVar21 = 0;
        do {
          uVar13 = *(undefined8 *)((longlong)(puVar11 + lVar21 + uVar20) + 8);
          uVar14 = *(undefined8 *)(puVar11 + lVar21 + uVar20 + 0x10);
          uVar15 = *(undefined8 *)((longlong)(puVar11 + lVar21 + uVar20 + 0x10) + 8);
          *(undefined8 *)(puVar40 + lVar21) = *(undefined8 *)(puVar11 + lVar21 + uVar20);
          *(undefined8 *)((longlong)(puVar40 + lVar21) + 8) = uVar13;
          *(undefined8 *)(puVar40 + lVar21 + 0x10) = uVar14;
          *(undefined8 *)((longlong)(puVar40 + lVar21 + 0x10) + 8) = uVar15;
          uVar13 = *(undefined8 *)((longlong)(puVar11 + lVar21 + uVar20 + 0x20) + 8);
          uVar14 = *(undefined8 *)(puVar11 + lVar21 + uVar20 + 0x30);
          uVar15 = *(undefined8 *)((longlong)(puVar11 + lVar21 + uVar20 + 0x30) + 8);
          *(undefined8 *)(puVar40 + lVar21 + 0x20) =
               *(undefined8 *)(puVar11 + lVar21 + uVar20 + 0x20);
          *(undefined8 *)((longlong)(puVar40 + lVar21 + 0x20) + 8) = uVar13;
          *(undefined8 *)(puVar40 + lVar21 + 0x30) = uVar14;
          *(undefined8 *)((longlong)(puVar40 + lVar21 + 0x30) + 8) = uVar15;
          uVar13 = *(undefined8 *)((longlong)(puVar11 + lVar21 + uVar20 + 0x40) + 8);
          uVar14 = *(undefined8 *)(puVar11 + lVar21 + uVar20 + 0x50);
          uVar15 = *(undefined8 *)((longlong)(puVar11 + lVar21 + uVar20 + 0x50) + 8);
          *(undefined8 *)(puVar40 + lVar21 + 0x40) =
               *(undefined8 *)(puVar11 + lVar21 + uVar20 + 0x40);
          *(undefined8 *)((longlong)(puVar40 + lVar21 + 0x40) + 8) = uVar13;
          *(undefined8 *)(puVar40 + lVar21 + 0x50) = uVar14;
          *(undefined8 *)((longlong)(puVar40 + lVar21 + 0x50) + 8) = uVar15;
          uVar13 = *(undefined8 *)((longlong)(puVar11 + lVar21 + uVar20 + 0x60) + 8);
          uVar14 = *(undefined8 *)(puVar11 + lVar21 + uVar20 + 0x70);
          uVar15 = *(undefined8 *)((longlong)(puVar11 + lVar21 + uVar20 + 0x70) + 8);
          *(undefined8 *)(puVar40 + lVar21 + 0x60) =
               *(undefined8 *)(puVar11 + lVar21 + uVar20 + 0x60);
          *(undefined8 *)((longlong)(puVar40 + lVar21 + 0x60) + 8) = uVar13;
          *(undefined8 *)(puVar40 + lVar21 + 0x70) = uVar14;
          *(undefined8 *)((longlong)(puVar40 + lVar21 + 0x70) + 8) = uVar15;
          lVar21 = lVar21 + 0x80;
          lVar33 = lVar33 + 4;
        } while (lVar33 != 0);
      }
      if (uVar35 != 0) {
        lVar33 = 0;
        do {
          uVar13 = *(undefined8 *)((longlong)(puVar11 + lVar33 + uVar20 + lVar21) + 8);
          uVar14 = *(undefined8 *)(puVar11 + lVar33 + uVar20 + lVar21 + 0x10);
          uVar15 = *(undefined8 *)((longlong)(puVar11 + lVar33 + uVar20 + lVar21 + 0x10) + 8);
          *(undefined8 *)(puVar40 + lVar33 + lVar21) =
               *(undefined8 *)(puVar11 + lVar33 + uVar20 + lVar21);
          *(undefined8 *)((longlong)(puVar40 + lVar33 + lVar21) + 8) = uVar13;
          *(undefined8 *)(puVar40 + lVar33 + lVar21 + 0x10) = uVar14;
          *(undefined8 *)((longlong)(puVar40 + lVar33 + lVar21 + 0x10) + 8) = uVar15;
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
    uVar20 = (ulonglong)(uVar7 - local_38);
    if (uVar7 < local_38) {
      uVar20 = (ulonglong)((uVar7 + iVar8) - local_38);
      puVar28 = puVar11 + uVar20;
      local_38 = local_38 - uVar7;
      uVar42 = uVar36 - local_38;
      if (local_38 <= uVar36 && uVar42 != 0) {
        uVar36 = (uVar24 + ((~uVar7 + iVar23) - unaff_ESI) + (uint)uVar6) - iVar39;
        if ((uVar36 < 0x1f) ||
           ((uVar41 = (ulonglong)uVar36 + 1, puVar40 < puVar11 + uVar20 + uVar36 + 1 &&
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
          uVar38 = (ulonglong)((uint)uVar34 & 3);
          if (uVar35 - 0x20 < 0x60) {
            lVar33 = 0;
          }
          else {
            lVar21 = -(uVar34 & 0xfffffffffffffffc);
            lVar33 = 0;
            do {
              uVar13 = *(undefined8 *)((longlong)(puVar11 + lVar33 + uVar20) + 8);
              uVar14 = *(undefined8 *)(puVar11 + lVar33 + uVar20 + 0x10);
              uVar15 = *(undefined8 *)((longlong)(puVar11 + lVar33 + uVar20 + 0x10) + 8);
              *(undefined8 *)(puVar40 + lVar33) = *(undefined8 *)(puVar11 + lVar33 + uVar20);
              *(undefined8 *)((longlong)(puVar40 + lVar33) + 8) = uVar13;
              *(undefined8 *)(puVar40 + lVar33 + 0x10) = uVar14;
              *(undefined8 *)((longlong)(puVar40 + lVar33 + 0x10) + 8) = uVar15;
              uVar13 = *(undefined8 *)((longlong)(puVar11 + lVar33 + uVar20 + 0x20) + 8);
              uVar14 = *(undefined8 *)(puVar11 + lVar33 + uVar20 + 0x30);
              uVar15 = *(undefined8 *)((longlong)(puVar11 + lVar33 + uVar20 + 0x30) + 8);
              *(undefined8 *)(puVar40 + lVar33 + 0x20) =
                   *(undefined8 *)(puVar11 + lVar33 + uVar20 + 0x20);
              *(undefined8 *)((longlong)(puVar40 + lVar33 + 0x20) + 8) = uVar13;
              *(undefined8 *)(puVar40 + lVar33 + 0x30) = uVar14;
              *(undefined8 *)((longlong)(puVar40 + lVar33 + 0x30) + 8) = uVar15;
              uVar13 = *(undefined8 *)((longlong)(puVar11 + lVar33 + uVar20 + 0x40) + 8);
              uVar14 = *(undefined8 *)(puVar11 + lVar33 + uVar20 + 0x50);
              uVar15 = *(undefined8 *)((longlong)(puVar11 + lVar33 + uVar20 + 0x50) + 8);
              *(undefined8 *)(puVar40 + lVar33 + 0x40) =
                   *(undefined8 *)(puVar11 + lVar33 + uVar20 + 0x40);
              *(undefined8 *)((longlong)(puVar40 + lVar33 + 0x40) + 8) = uVar13;
              *(undefined8 *)(puVar40 + lVar33 + 0x50) = uVar14;
              *(undefined8 *)((longlong)(puVar40 + lVar33 + 0x50) + 8) = uVar15;
              uVar13 = *(undefined8 *)((longlong)(puVar11 + lVar33 + uVar20 + 0x60) + 8);
              uVar14 = *(undefined8 *)(puVar11 + lVar33 + uVar20 + 0x70);
              uVar15 = *(undefined8 *)((longlong)(puVar11 + lVar33 + uVar20 + 0x70) + 8);
              *(undefined8 *)(puVar40 + lVar33 + 0x60) =
                   *(undefined8 *)(puVar11 + lVar33 + uVar20 + 0x60);
              *(undefined8 *)((longlong)(puVar40 + lVar33 + 0x60) + 8) = uVar13;
              *(undefined8 *)(puVar40 + lVar33 + 0x70) = uVar14;
              *(undefined8 *)((longlong)(puVar40 + lVar33 + 0x70) + 8) = uVar15;
              lVar33 = lVar33 + 0x80;
              lVar21 = lVar21 + 4;
            } while (lVar21 != 0);
          }
          if (uVar38 != 0) {
            lVar21 = 0;
            do {
              uVar13 = *(undefined8 *)((longlong)(puVar11 + lVar21 + uVar20 + lVar33) + 8);
              uVar14 = *(undefined8 *)(puVar11 + lVar21 + uVar20 + lVar33 + 0x10);
              uVar15 = *(undefined8 *)((longlong)(puVar11 + lVar21 + uVar20 + lVar33 + 0x10) + 8);
              *(undefined8 *)(puVar40 + lVar21 + lVar33) =
                   *(undefined8 *)(puVar11 + lVar21 + uVar20 + lVar33);
              *(undefined8 *)((longlong)(puVar40 + lVar21 + lVar33) + 8) = uVar13;
              *(undefined8 *)(puVar40 + lVar21 + lVar33 + 0x10) = uVar14;
              *(undefined8 *)((longlong)(puVar40 + lVar21 + lVar33 + 0x10) + 8) = uVar15;
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
             ((puVar11 + (ulonglong)uVar19 + 1 <= puVar40 || (puVar40 + uVar1 <= puVar11)))) {
            if (uVar26 - 0x20 < 0x60) {
              lVar21 = 0;
            }
            else {
              lVar21 = 0;
              lVar33 = -(uVar18 & 0xfffffffffffffffc);
              do {
                uVar13 = *(undefined8 *)((longlong)(puVar11 + lVar21) + 8);
                uVar14 = *(undefined8 *)(puVar11 + lVar21 + 0x10);
                uVar15 = *(undefined8 *)((longlong)(puVar11 + lVar21 + 0x10) + 8);
                *(undefined8 *)(puVar40 + lVar21) = *(undefined8 *)(puVar11 + lVar21);
                *(undefined8 *)((longlong)(puVar40 + lVar21) + 8) = uVar13;
                *(undefined8 *)(puVar40 + lVar21 + 0x10) = uVar14;
                *(undefined8 *)((longlong)(puVar40 + lVar21 + 0x10) + 8) = uVar15;
                uVar13 = *(undefined8 *)((longlong)(puVar11 + lVar21 + 0x20) + 8);
                uVar14 = *(undefined8 *)(puVar11 + lVar21 + 0x30);
                uVar15 = *(undefined8 *)((longlong)(puVar11 + lVar21 + 0x30) + 8);
                *(undefined8 *)(puVar40 + lVar21 + 0x20) = *(undefined8 *)(puVar11 + lVar21 + 0x20);
                *(undefined8 *)((longlong)(puVar40 + lVar21 + 0x20) + 8) = uVar13;
                *(undefined8 *)(puVar40 + lVar21 + 0x30) = uVar14;
                *(undefined8 *)((longlong)(puVar40 + lVar21 + 0x30) + 8) = uVar15;
                uVar13 = *(undefined8 *)((longlong)(puVar11 + lVar21 + 0x40) + 8);
                uVar14 = *(undefined8 *)(puVar11 + lVar21 + 0x50);
                uVar15 = *(undefined8 *)((longlong)(puVar11 + lVar21 + 0x50) + 8);
                *(undefined8 *)(puVar40 + lVar21 + 0x40) = *(undefined8 *)(puVar11 + lVar21 + 0x40);
                *(undefined8 *)((longlong)(puVar40 + lVar21 + 0x40) + 8) = uVar13;
                *(undefined8 *)(puVar40 + lVar21 + 0x50) = uVar14;
                *(undefined8 *)((longlong)(puVar40 + lVar21 + 0x50) + 8) = uVar15;
                uVar13 = *(undefined8 *)((longlong)(puVar11 + lVar21 + 0x60) + 8);
                uVar14 = *(undefined8 *)(puVar11 + lVar21 + 0x70);
                uVar15 = *(undefined8 *)((longlong)(puVar11 + lVar21 + 0x70) + 8);
                *(undefined8 *)(puVar40 + lVar21 + 0x60) = *(undefined8 *)(puVar11 + lVar21 + 0x60);
                *(undefined8 *)((longlong)(puVar40 + lVar21 + 0x60) + 8) = uVar13;
                *(undefined8 *)(puVar40 + lVar21 + 0x70) = uVar14;
                *(undefined8 *)((longlong)(puVar40 + lVar21 + 0x70) + 8) = uVar15;
                lVar21 = lVar21 + 0x80;
                lVar33 = lVar33 + 4;
              } while (lVar33 != 0);
            }
            if (uVar32 != 0) {
              lVar33 = 0;
              do {
                uVar13 = *(undefined8 *)((longlong)(puVar11 + lVar33 + lVar21) + 8);
                uVar14 = *(undefined8 *)(puVar11 + lVar33 + lVar21 + 0x10);
                uVar15 = *(undefined8 *)((longlong)(puVar11 + lVar33 + lVar21 + 0x10) + 8);
                *(undefined8 *)(puVar40 + lVar33 + lVar21) =
                     *(undefined8 *)(puVar11 + lVar33 + lVar21);
                *(undefined8 *)((longlong)(puVar40 + lVar33 + lVar21) + 8) = uVar13;
                *(undefined8 *)(puVar40 + lVar33 + lVar21 + 0x10) = uVar14;
                *(undefined8 *)((longlong)(puVar40 + lVar33 + lVar21 + 0x10) + 8) = uVar15;
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
         ((uVar41 = (ulonglong)uVar36 + 1, puVar40 < puVar11 + uVar20 + uVar36 + 1 &&
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
        uVar34 = (ulonglong)((uint)uVar35 & 3);
        if (uVar38 - 0x20 < 0x60) {
          lVar21 = 0;
        }
        else {
          lVar33 = -(uVar35 & 0xfffffffffffffffc);
          lVar21 = 0;
          do {
            uVar13 = *(undefined8 *)((longlong)(puVar11 + lVar21 + uVar20) + 8);
            uVar14 = *(undefined8 *)(puVar11 + lVar21 + uVar20 + 0x10);
            uVar15 = *(undefined8 *)((longlong)(puVar11 + lVar21 + uVar20 + 0x10) + 8);
            *(undefined8 *)(puVar40 + lVar21) = *(undefined8 *)(puVar11 + lVar21 + uVar20);
            *(undefined8 *)((longlong)(puVar40 + lVar21) + 8) = uVar13;
            *(undefined8 *)(puVar40 + lVar21 + 0x10) = uVar14;
            *(undefined8 *)((longlong)(puVar40 + lVar21 + 0x10) + 8) = uVar15;
            uVar13 = *(undefined8 *)((longlong)(puVar11 + lVar21 + uVar20 + 0x20) + 8);
            uVar14 = *(undefined8 *)(puVar11 + lVar21 + uVar20 + 0x30);
            uVar15 = *(undefined8 *)((longlong)(puVar11 + lVar21 + uVar20 + 0x30) + 8);
            *(undefined8 *)(puVar40 + lVar21 + 0x20) =
                 *(undefined8 *)(puVar11 + lVar21 + uVar20 + 0x20);
            *(undefined8 *)((longlong)(puVar40 + lVar21 + 0x20) + 8) = uVar13;
            *(undefined8 *)(puVar40 + lVar21 + 0x30) = uVar14;
            *(undefined8 *)((longlong)(puVar40 + lVar21 + 0x30) + 8) = uVar15;
            uVar13 = *(undefined8 *)((longlong)(puVar11 + lVar21 + uVar20 + 0x40) + 8);
            uVar14 = *(undefined8 *)(puVar11 + lVar21 + uVar20 + 0x50);
            uVar15 = *(undefined8 *)((longlong)(puVar11 + lVar21 + uVar20 + 0x50) + 8);
            *(undefined8 *)(puVar40 + lVar21 + 0x40) =
                 *(undefined8 *)(puVar11 + lVar21 + uVar20 + 0x40);
            *(undefined8 *)((longlong)(puVar40 + lVar21 + 0x40) + 8) = uVar13;
            *(undefined8 *)(puVar40 + lVar21 + 0x50) = uVar14;
            *(undefined8 *)((longlong)(puVar40 + lVar21 + 0x50) + 8) = uVar15;
            uVar13 = *(undefined8 *)((longlong)(puVar11 + lVar21 + uVar20 + 0x60) + 8);
            uVar14 = *(undefined8 *)(puVar11 + lVar21 + uVar20 + 0x70);
            uVar15 = *(undefined8 *)((longlong)(puVar11 + lVar21 + uVar20 + 0x70) + 8);
            *(undefined8 *)(puVar40 + lVar21 + 0x60) =
                 *(undefined8 *)(puVar11 + lVar21 + uVar20 + 0x60);
            *(undefined8 *)((longlong)(puVar40 + lVar21 + 0x60) + 8) = uVar13;
            *(undefined8 *)(puVar40 + lVar21 + 0x70) = uVar14;
            *(undefined8 *)((longlong)(puVar40 + lVar21 + 0x70) + 8) = uVar15;
            lVar21 = lVar21 + 0x80;
            lVar33 = lVar33 + 4;
          } while (lVar33 != 0);
        }
        if (uVar34 != 0) {
          lVar33 = 0;
          do {
            uVar13 = *(undefined8 *)((longlong)(puVar11 + lVar33 + uVar20 + lVar21) + 8);
            uVar14 = *(undefined8 *)(puVar11 + lVar33 + uVar20 + lVar21 + 0x10);
            uVar15 = *(undefined8 *)((longlong)(puVar11 + lVar33 + uVar20 + lVar21 + 0x10) + 8);
            *(undefined8 *)(puVar40 + lVar33 + lVar21) =
                 *(undefined8 *)(puVar11 + lVar33 + uVar20 + lVar21);
            *(undefined8 *)((longlong)(puVar40 + lVar33 + lVar21) + 8) = uVar13;
            *(undefined8 *)(puVar40 + lVar33 + lVar21 + 0x10) = uVar14;
            *(undefined8 *)((longlong)(puVar40 + lVar33 + lVar21 + 0x10) + 8) = uVar15;
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
    if (((ulonglong)uVar24 / 3 & 1) == 0) {
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


