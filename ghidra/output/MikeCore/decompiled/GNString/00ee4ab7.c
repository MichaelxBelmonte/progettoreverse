// Function: FUN_00ee4ab7
// Address: 00ee4ab7
// Size: 2564 bytes
// Class: GNString


ulonglong FUN_00ee4ab7(ulonglong *param_1,ulonglong *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  sbyte sVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong *puVar15;
  byte bVar16;
  byte bVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  char cVar23;
  ulonglong *puVar24;
  uint uVar25;
  ulonglong *unaff_RSI;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong unaff_RDI;
  longlong lVar29;
  ulonglong *puVar30;
  ulonglong uVar31;
  undefined1 *puVar32;
  uint uVar33;
  ulonglong uVar34;
  byte *pbVar35;
  longlong lVar36;
  longlong lVar37;
  int iVar38;
  uint uVar39;
  ulonglong *puVar40;
  ulonglong *puVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  byte local_1a8;
  undefined1 local_138 [16] [16];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar8 = *(longlong *)(unaff_RDI + 8);
  uVar6 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar34 = (longlong)unaff_RSI - lVar8;
  uVar13 = *(uint *)(unaff_RDI + 0x1c);
  uVar33 = (uint)uVar34;
  uVar12 = uVar33 - uVar6;
  if (uVar33 - uVar13 <= uVar6) {
    uVar12 = uVar13;
  }
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar12 = uVar13;
  }
  uVar13 = 5;
  if (*(uint *)(unaff_RDI + 0x10c) < 5) {
    uVar13 = *(uint *)(unaff_RDI + 0x10c);
  }
  iVar38 = 1 << ((byte)uVar13 & 0x1f);
  uVar39 = (int)*unaff_RSI * -0x61c8864f;
  puVar4 = *(undefined8 **)(unaff_RDI + 0xf8);
  uVar6 = uVar39 >> (0x18U - *(char *)((longlong)puVar4 + 0x34) & 0x1f);
  lVar29 = *(longlong *)(unaff_RDI + 0x70);
  uVar18 = (ulonglong)(uVar6 >> 3 & 0xffffffe0);
  lVar19 = *(longlong *)(unaff_RDI + 0x38);
  uVar13 = *(uint *)(unaff_RDI + 0x18);
  uVar9 = *(undefined8 *)(unaff_RDI + 0x60);
  lVar36 = puVar4[7];
  lVar14 = puVar4[0xe];
  uVar25 = (uint)uVar9;
  cVar23 = (char)*(undefined4 *)(unaff_RDI + 0x34);
  if (*(int *)(unaff_RDI + 300) == 0) {
    uVar39 = *(uint *)(unaff_RDI + 0x2c);
    uVar21 = (ulonglong)uVar39;
    bVar16 = 0x18 - cVar23;
    lVar28 = lVar19;
    lVar37 = lVar29;
    bVar11 = bVar16;
    if (0x180 < uVar33 - uVar39) {
      if (uVar39 < 0xffffffa0) {
        uVar27 = uVar21 + 0x5f;
        while( true ) {
          uVar31 = (ulonglong)((uint)uVar21 & 7);
          uVar39 = *(uint *)(unaff_RDI + 0x40 + uVar31 * 4);
          *(uint *)(unaff_RDI + 0x40 + uVar31 * 4) =
               (*(int *)(lVar8 + 8 + uVar21) * -0x61c8864f ^ (uint)uVar9) >> (bVar16 & 0x1f);
          uVar31 = (ulonglong)(uVar39 >> 3 & 0x1fffffe0);
          bVar11 = *(char *)(lVar19 + uVar31) - 1U & 0x1f;
          lVar28 = 0;
          if (bVar11 == 0) {
            lVar28 = 0x1f;
          }
          lVar28 = (ulonglong)bVar11 + lVar28;
          *(char *)(lVar19 + uVar31) = (char)lVar28;
          *(char *)(lVar19 + uVar31 + lVar28) = (char)uVar39;
          *(uint *)(lVar29 + (lVar28 + uVar31) * 4) = (uint)uVar21;
          if (uVar27 == uVar21) break;
          uVar9 = *(undefined8 *)(unaff_RDI + 0x60);
          uVar21 = uVar21 + 1;
        }
        lVar28 = *(longlong *)(unaff_RDI + 0x38);
        lVar37 = *(longlong *)(unaff_RDI + 0x70);
        bVar11 = 0x18 - (char)*(undefined4 *)(unaff_RDI + 0x34);
      }
      uVar21 = (ulonglong)(uVar33 - 0x20);
      uVar39 = 0;
      if (lVar8 + uVar21 <= (longlong)unaff_RSI + 1U) {
        uVar39 = ((int)((longlong)unaff_RSI + 1U) - (int)(lVar8 + uVar21)) + 1;
      }
      uVar7 = 8;
      if (uVar39 < 8) {
        uVar7 = uVar39;
      }
      uVar39 = (uVar7 + uVar33) - 0x20;
      if (uVar33 - 0x20 < uVar39) {
        uVar7 = *(uint *)(unaff_RDI + 0x60);
        uVar27 = uVar21;
        do {
          *(uint *)(unaff_RDI + 0x40 + (ulonglong)((uint)uVar27 & 7) * 4) =
               (*(int *)(lVar8 + uVar27) * -0x61c8864f ^ uVar7) >> (bVar11 & 0x1f);
          uVar27 = uVar27 + 1;
        } while (uVar39 != uVar27);
      }
    }
    if ((uint)uVar21 < uVar33) {
      lVar5 = *(longlong *)(unaff_RDI + 8);
      do {
        uVar27 = (ulonglong)((uint)uVar21 & 7);
        uVar39 = *(uint *)(unaff_RDI + 0x40 + uVar27 * 4);
        *(uint *)(unaff_RDI + 0x40 + uVar27 * 4) =
             (*(int *)(lVar5 + 8 + uVar21) * -0x61c8864f ^ *(uint *)(unaff_RDI + 0x60)) >>
             (bVar11 & 0x1f);
        uVar27 = (ulonglong)(uVar39 >> 3 & 0x1fffffe0);
        bVar17 = *(char *)(lVar28 + uVar27) - 1U & 0x1f;
        lVar26 = 0;
        if (bVar17 == 0) {
          lVar26 = 0x1f;
        }
        lVar26 = (ulonglong)bVar17 + lVar26;
        *(char *)(lVar28 + uVar27) = (char)lVar26;
        *(char *)(lVar28 + uVar27 + lVar26) = (char)uVar39;
        *(uint *)(lVar37 + (lVar26 + uVar27) * 4) = (uint)uVar21;
        uVar21 = uVar21 + 1;
      } while ((uVar34 & 0xffffffff) != uVar21);
    }
    *(uint *)(unaff_RDI + 0x2c) = uVar33;
    uVar39 = *(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar33 & 7) * 4);
    *(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar33 & 7) * 4) =
         (*(int *)((uVar34 & 0xffffffff) + 8 + lVar8) * -0x61c8864f ^ uVar25) >> (bVar16 & 0x1f);
  }
  else {
    uVar39 = (uVar39 ^ uVar25) >> (0x18U - cVar23 & 0x1f);
    *(uint *)(unaff_RDI + 0x2c) = uVar33;
  }
  puVar24 = (ulonglong *)((ulonglong)uVar13 + lVar8);
  pbVar35 = (byte *)(lVar36 + uVar18);
  *(int *)(unaff_RDI + 0x68) = *(int *)(unaff_RDI + 0x68) + uVar39;
  uVar34 = (ulonglong)(uVar39 >> 3 & 0xffffffe0);
  bVar11 = *(byte *)(lVar19 + uVar34);
  puVar32 = (undefined1 *)(lVar19 + uVar34);
  auVar42 = pshufb(ZEXT416(uVar39),(undefined1  [16])0x0);
  local_138[0] = (undefined1  [16])0x0;
  lVar19 = 0;
  do {
    pcVar1 = puVar32 + lVar19 * 4;
    auVar43[0] = -(*pcVar1 == auVar42[0]);
    auVar43[1] = -(pcVar1[1] == auVar42[1]);
    auVar43[2] = -(pcVar1[2] == auVar42[2]);
    auVar43[3] = -(pcVar1[3] == auVar42[3]);
    auVar43[4] = -(pcVar1[4] == auVar42[4]);
    auVar43[5] = -(pcVar1[5] == auVar42[5]);
    auVar43[6] = -(pcVar1[6] == auVar42[6]);
    auVar43[7] = -(pcVar1[7] == auVar42[7]);
    auVar43[8] = -(pcVar1[8] == auVar42[8]);
    auVar43[9] = -(pcVar1[9] == auVar42[9]);
    auVar43[10] = -(pcVar1[10] == auVar42[10]);
    auVar43[0xb] = -(pcVar1[0xb] == auVar42[0xb]);
    auVar43[0xc] = -(pcVar1[0xc] == auVar42[0xc]);
    auVar43[0xd] = -(pcVar1[0xd] == auVar42[0xd]);
    auVar43[0xe] = -(pcVar1[0xe] == auVar42[0xe]);
    auVar43[0xf] = -(pcVar1[0xf] == auVar42[0xf]);
    *(uint *)(local_138[0] + lVar19) =
         (uint)(ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar43[0xf] >> 7) << 0xf);
    lVar19 = lVar19 + 4;
  } while (lVar19 != 8);
  uVar25 = local_138[0]._4_4_ << 0x10 | local_138[0]._0_4_;
  uVar25 = uVar25 >> (bVar11 & 0x1f) | uVar25 << 0x20 - (bVar11 & 0x1f);
  lVar29 = lVar29 + uVar34 * 4;
  lVar19 = 0;
  if (uVar25 != 0) {
    uVar34 = (ulonglong)uVar25;
    lVar36 = 0;
    do {
      lVar28 = 0;
      if (uVar34 != 0) {
        for (; (uVar34 >> lVar28 & 1) == 0; lVar28 = lVar28 + 1) {
        }
      }
      uVar21 = (ulonglong)((int)lVar28 + (uint)bVar11 & 0x1f);
      if (uVar21 != 0) {
        uVar25 = *(uint *)(lVar29 + uVar21 * 4);
        if (uVar25 < uVar12) goto LAB_00ee4e34;
        *(uint *)(local_138[0] + lVar36 * 4) = uVar25;
        lVar36 = lVar36 + 1;
        iVar38 = iVar38 + -1;
      }
      uVar34 = uVar34 & uVar34 - 1;
      if ((uVar34 == 0) || (iVar38 == 0)) goto LAB_00ee4e34;
    } while( true );
  }
  lVar36 = 0;
LAB_00ee4e34:
  uVar34 = (ulonglong)(bVar11 - 1 & 0x1f);
  if (uVar34 == 0) {
    lVar19 = 0x1f;
  }
  lVar19 = lVar19 + uVar34;
  *puVar32 = (char)lVar19;
  puVar32[lVar19] = (char)uVar39;
  iVar3 = *(int *)(unaff_RDI + 0x2c);
  *(int *)(unaff_RDI + 0x2c) = iVar3 + 1;
  *(int *)(lVar29 + lVar19 * 4) = iVar3;
  puVar41 = (ulonglong *)((longlong)param_2 + -7);
  if (lVar36 == 0) {
    uVar34 = 3;
  }
  else {
    lVar29 = 0;
    uVar21 = 3;
    do {
      uVar12 = *(uint *)(local_138[0] + lVar29 * 4);
      puVar20 = (ulonglong *)(lVar8 + (ulonglong)uVar12);
      if (*(int *)((uVar21 - 3) + (longlong)puVar20) == *(int *)((longlong)unaff_RSI + (uVar21 - 3))
         ) {
        puVar22 = unaff_RSI;
        if (unaff_RSI < puVar41) {
          uVar27 = *unaff_RSI ^ *puVar20;
          if (uVar27 == 0) {
            lVar19 = lVar8 + 8 + (ulonglong)uVar12;
            lVar28 = 0;
            do {
              puVar22 = (ulonglong *)((longlong)unaff_RSI + lVar28 + 8);
              if (puVar41 <= puVar22) {
                puVar20 = (ulonglong *)(lVar19 + lVar28);
                goto LAB_00ee4ee8;
              }
              lVar37 = lVar28 + 8;
              uVar34 = *(ulonglong *)((longlong)unaff_RSI + lVar28 + 8) ^
                       *(ulonglong *)(lVar19 + lVar28);
              lVar28 = lVar37;
            } while (uVar34 == 0);
            uVar27 = 0;
            if (uVar34 != 0) {
              for (; (uVar34 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
              }
            }
            uVar34 = (uVar27 >> 3) + lVar37;
          }
          else {
            uVar34 = 0;
            if (uVar27 != 0) {
              for (; (uVar27 >> uVar34 & 1) == 0; uVar34 = uVar34 + 1) {
              }
            }
            uVar34 = uVar34 >> 3;
          }
        }
        else {
LAB_00ee4ee8:
          if ((puVar22 < (ulonglong *)((longlong)param_2 - 3U)) && ((int)*puVar20 == (int)*puVar22))
          {
            puVar22 = (ulonglong *)((longlong)puVar22 + 4);
            puVar20 = (ulonglong *)((longlong)puVar20 + 4);
          }
          if ((puVar22 < (ulonglong *)((longlong)param_2 - 1U)) &&
             ((short)*puVar20 == (short)*puVar22)) {
            puVar22 = (ulonglong *)((longlong)puVar22 + 2);
            puVar20 = (ulonglong *)((longlong)puVar20 + 2);
          }
          if (puVar22 < param_2) {
            puVar22 = (ulonglong *)
                      ((longlong)puVar22 + (ulonglong)((char)*puVar20 == (char)*puVar22));
          }
          uVar34 = (longlong)puVar22 - (longlong)unaff_RSI;
        }
        if ((uVar21 < uVar34) &&
           (*param_1 = (ulonglong)((uVar33 + 3) - uVar12), uVar21 = uVar34,
           (ulonglong *)((longlong)unaff_RSI + uVar34) == param_2)) break;
      }
      uVar34 = uVar21;
      lVar29 = lVar29 + 1;
      uVar21 = uVar34;
    } while (lVar29 != lVar36);
  }
  puVar20 = (ulonglong *)((longlong)unaff_RSI + 4);
  uVar12 = *(uint *)(puVar4 + 3);
  pcVar1 = (char *)*puVar4;
  lVar29 = puVar4[1];
  uVar39 = *pbVar35 & 0x1f;
  local_1a8 = (byte)uVar6;
  auVar42 = pshufb(ZEXT116(local_1a8),(undefined1  [16])0x0);
  local_138[0] = (undefined1  [16])0x0;
  lVar19 = 0;
  do {
    pbVar2 = pbVar35 + lVar19 * 4;
    auVar44[0] = -(*pbVar2 == auVar42[0]);
    auVar44[1] = -(pbVar2[1] == auVar42[1]);
    auVar44[2] = -(pbVar2[2] == auVar42[2]);
    auVar44[3] = -(pbVar2[3] == auVar42[3]);
    auVar44[4] = -(pbVar2[4] == auVar42[4]);
    auVar44[5] = -(pbVar2[5] == auVar42[5]);
    auVar44[6] = -(pbVar2[6] == auVar42[6]);
    auVar44[7] = -(pbVar2[7] == auVar42[7]);
    auVar44[8] = -(pbVar2[8] == auVar42[8]);
    auVar44[9] = -(pbVar2[9] == auVar42[9]);
    auVar44[10] = -(pbVar2[10] == auVar42[10]);
    auVar44[0xb] = -(pbVar2[0xb] == auVar42[0xb]);
    auVar44[0xc] = -(pbVar2[0xc] == auVar42[0xc]);
    auVar44[0xd] = -(pbVar2[0xd] == auVar42[0xd]);
    auVar44[0xe] = -(pbVar2[0xe] == auVar42[0xe]);
    auVar44[0xf] = -(pbVar2[0xf] == auVar42[0xf]);
    *(uint *)(local_138[0] + lVar19) =
         (uint)(ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar44[0xf] >> 7) << 0xf);
    lVar19 = lVar19 + 4;
  } while (lVar19 != 8);
  uVar6 = local_138[0]._4_4_ << 0x10 | local_138[0]._0_4_;
  sVar10 = (sbyte)uVar39;
  uVar6 = uVar6 >> sVar10 | uVar6 << 0x20 - sVar10;
  if ((uVar6 != 0) && (iVar38 != 0)) {
    uVar21 = (ulonglong)uVar6;
    lVar19 = 0;
    do {
      lVar36 = 0;
      if (uVar21 != 0) {
        for (; (uVar21 >> lVar36 & 1) == 0; lVar36 = lVar36 + 1) {
        }
      }
      uVar27 = (ulonglong)((int)lVar36 + uVar39 & 0x1f);
      if (uVar27 != 0) {
        uVar6 = *(uint *)(lVar14 + uVar18 * 4 + uVar27 * 4);
        if (uVar6 < uVar12) goto LAB_00ee50a0;
        *(uint *)(local_138[0] + lVar19 * 4) = uVar6;
        lVar19 = lVar19 + 1;
        iVar38 = iVar38 + -1;
      }
      uVar21 = uVar21 & uVar21 - 1;
      if ((uVar21 == 0) || (iVar38 == 0)) goto LAB_00ee50a0;
    } while( true );
  }
  goto LAB_00ee5307;
LAB_00ee50a0:
  if (lVar19 != 0) {
    uVar18 = *unaff_RSI;
    lVar8 = lVar8 + (ulonglong)uVar13 + 8;
    lVar36 = 0;
    uVar21 = uVar34;
    do {
      uVar34 = (ulonglong)*(uint *)(local_138[0] + lVar36 * 4);
      if (*(int *)(lVar29 + uVar34) == (int)uVar18) {
        puVar40 = (ulonglong *)(lVar29 + uVar34 + 4);
        puVar22 = (ulonglong *)(((longlong)pcVar1 - (longlong)puVar40) + (longlong)puVar20);
        if (param_2 <= puVar22) {
          puVar22 = param_2;
        }
        puVar15 = puVar20;
        puVar30 = puVar40;
        if (puVar20 < (ulonglong *)((longlong)puVar22 - 7U)) {
          uVar27 = *puVar20 ^ *puVar40;
          if (uVar27 == 0) {
            lVar14 = lVar29 + 0xc + uVar34;
            lVar28 = 0;
            do {
              puVar15 = (ulonglong *)((longlong)unaff_RSI + lVar28 + 0xc);
              if ((ulonglong *)((longlong)puVar22 - 7U) <= puVar15) {
                puVar30 = (ulonglong *)(lVar14 + lVar28);
                goto LAB_00ee519c;
              }
              lVar37 = lVar28 + 8;
              uVar34 = *(ulonglong *)((longlong)unaff_RSI + lVar28 + 0xc) ^
                       *(ulonglong *)(lVar14 + lVar28);
              lVar28 = lVar37;
            } while (uVar34 == 0);
            uVar27 = 0;
            if (uVar34 != 0) {
              for (; (uVar34 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
              }
            }
            uVar34 = (uVar27 >> 3) + lVar37;
          }
          else {
            uVar34 = 0;
            if (uVar27 != 0) {
              for (; (uVar27 >> uVar34 & 1) == 0; uVar34 = uVar34 + 1) {
              }
            }
            uVar34 = uVar34 >> 3;
          }
        }
        else {
LAB_00ee519c:
          if ((puVar15 < (ulonglong *)((longlong)puVar22 - 3U)) && ((int)*puVar30 == (int)*puVar15))
          {
            puVar15 = (ulonglong *)((longlong)puVar15 + 4);
            puVar30 = (ulonglong *)((longlong)puVar30 + 4);
          }
          if ((puVar15 < (ulonglong *)((longlong)puVar22 - 1U)) &&
             ((short)*puVar30 == (short)*puVar15)) {
            puVar15 = (ulonglong *)((longlong)puVar15 + 2);
            puVar30 = (ulonglong *)((longlong)puVar30 + 2);
          }
          if (puVar15 < puVar22) {
            puVar15 = (ulonglong *)
                      ((longlong)puVar15 + (ulonglong)((char)*puVar30 == (char)*puVar15));
          }
          uVar34 = (longlong)puVar15 - (longlong)puVar20;
        }
        if ((char *)((longlong)puVar40 + uVar34) == pcVar1) {
          puVar22 = (ulonglong *)((longlong)puVar20 + uVar34);
          puVar15 = puVar24;
          puVar40 = puVar22;
          if (puVar22 < puVar41) {
            uVar27 = *puVar22 ^ *puVar24;
            if (uVar27 == 0) {
              lVar14 = 0;
              do {
                puVar40 = (ulonglong *)((longlong)unaff_RSI + lVar14 + uVar34 + 0xc);
                if (puVar41 <= puVar40) {
                  puVar15 = (ulonglong *)(lVar14 + lVar8);
                  goto LAB_00ee5261;
                }
                lVar28 = lVar14 + 8;
                uVar27 = *(ulonglong *)((longlong)unaff_RSI + lVar14 + uVar34 + 0xc) ^
                         *(ulonglong *)(lVar8 + lVar14);
                lVar14 = lVar28;
              } while (uVar27 == 0);
              uVar31 = 0;
              if (uVar27 != 0) {
                for (; (uVar27 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
                }
              }
              uVar31 = (uVar31 >> 3) + lVar28;
            }
            else {
              uVar31 = 0;
              if (uVar27 != 0) {
                for (; (uVar27 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
                }
              }
              uVar31 = uVar31 >> 3;
            }
          }
          else {
LAB_00ee5261:
            if ((puVar40 < (ulonglong *)((longlong)param_2 - 3U)) &&
               ((int)*puVar15 == (int)*puVar40)) {
              puVar40 = (ulonglong *)((longlong)puVar40 + 4);
              puVar15 = (ulonglong *)((longlong)puVar15 + 4);
            }
            if ((puVar40 < (ulonglong *)((longlong)param_2 - 1U)) &&
               ((short)*puVar15 == (short)*puVar40)) {
              puVar40 = (ulonglong *)((longlong)puVar40 + 2);
              puVar15 = (ulonglong *)((longlong)puVar15 + 2);
            }
            if (puVar40 < param_2) {
              puVar40 = (ulonglong *)
                        ((longlong)puVar40 + (ulonglong)((char)*puVar15 == (char)*puVar40));
            }
            uVar31 = (longlong)puVar40 - (longlong)puVar22;
          }
          uVar34 = uVar34 + uVar31;
        }
        uVar34 = uVar34 + 4;
        if ((uVar21 < uVar34) &&
           (*param_1 = (ulonglong)
                       (((uVar33 - uVar13) + ((int)pcVar1 - (int)lVar29) + 3) -
                       *(uint *)(local_138[0] + lVar36 * 4)), uVar21 = uVar34,
           (ulonglong *)((longlong)unaff_RSI + uVar34) == param_2)) break;
      }
      uVar34 = uVar21;
      lVar36 = lVar36 + 1;
      uVar21 = uVar34;
    } while (lVar36 != lVar19);
  }
LAB_00ee5307:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar34;
}


