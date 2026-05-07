// Function: FUN_00ee87fc
// Address: 00ee87fc
// Size: 2678 bytes
// Class: GNString


ulonglong FUN_00ee87fc(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte bVar15;
  sbyte sVar16;
  uint uVar17;
  ulonglong uVar18;
  char cVar19;
  byte bVar20;
  longlong lVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  byte bVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  byte *pbVar28;
  longlong lVar29;
  ulonglong *puVar30;
  ulonglong *unaff_RSI;
  longlong lVar31;
  longlong unaff_RDI;
  longlong lVar32;
  ulonglong *puVar33;
  uint uVar34;
  ulonglong uVar35;
  undefined1 *puVar36;
  int iVar37;
  ulonglong *puVar38;
  ulonglong uVar39;
  longlong lVar40;
  longlong lVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  byte local_1a8;
  undefined1 local_138 [16] [16];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar12 = *(longlong *)(unaff_RDI + 8);
  uVar9 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar35 = (longlong)unaff_RSI - lVar12;
  uVar17 = *(uint *)(unaff_RDI + 0x1c);
  uVar34 = (uint)uVar35;
  uVar6 = uVar34 - uVar9;
  if (uVar34 - uVar17 <= uVar9) {
    uVar6 = uVar17;
  }
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar6 = uVar17;
  }
  uVar17 = 5;
  if (*(uint *)(unaff_RDI + 0x10c) < 5) {
    uVar17 = *(uint *)(unaff_RDI + 0x10c);
  }
  iVar37 = 1 << ((byte)uVar17 & 0x1f);
  puVar7 = *(undefined8 **)(unaff_RDI + 0xf8);
  uVar26 = *unaff_RSI * -0x30e4432340650000 >> (0x38U - *(char *)((longlong)puVar7 + 0x34) & 0x3f);
  uVar18 = (ulonglong)((uint)(uVar26 >> 3) & 0x1fffffe0);
  lVar32 = *(longlong *)(unaff_RDI + 0x70);
  lVar21 = *(longlong *)(unaff_RDI + 0x38);
  uVar17 = *(uint *)(unaff_RDI + 0x18);
  uVar11 = *(ulonglong *)(unaff_RDI + 0x60);
  lVar40 = puVar7[7];
  lVar29 = puVar7[0xe];
  cVar19 = (char)*(undefined4 *)(unaff_RDI + 0x34);
  if (*(int *)(unaff_RDI + 300) == 0) {
    uVar9 = *(uint *)(unaff_RDI + 0x2c);
    uVar39 = (ulonglong)uVar9;
    bVar15 = 0x38 - cVar19;
    lVar31 = lVar21;
    lVar41 = lVar32;
    bVar24 = bVar15;
    if (0x180 < uVar34 - uVar9) {
      if (uVar9 < 0xffffffa0) {
        uVar27 = uVar39 + 0x5f;
        uVar14 = uVar11;
        while( true ) {
          uVar13 = (ulonglong)((uint)uVar39 & 7);
          uVar9 = *(uint *)(unaff_RDI + 0x40 + uVar13 * 4);
          *(int *)(unaff_RDI + 0x40 + uVar13 * 4) =
               (int)((*(longlong *)(lVar12 + 8 + uVar39) * -0x30e4432340650000 ^ uVar14) >>
                    (bVar15 & 0x3f));
          uVar14 = (ulonglong)(uVar9 >> 3) & 0x1fffffe0;
          bVar24 = *(char *)(lVar21 + uVar14) - 1U & 0x1f;
          lVar31 = 0;
          if (bVar24 == 0) {
            lVar31 = 0x1f;
          }
          lVar31 = (ulonglong)bVar24 + lVar31;
          *(char *)(lVar21 + uVar14) = (char)lVar31;
          *(char *)(lVar21 + uVar14 + lVar31) = (char)uVar9;
          *(uint *)(lVar32 + (lVar31 + uVar14) * 4) = (uint)uVar39;
          if (uVar27 == uVar39) break;
          uVar14 = *(ulonglong *)(unaff_RDI + 0x60);
          uVar39 = uVar39 + 1;
        }
        lVar31 = *(longlong *)(unaff_RDI + 0x38);
        lVar41 = *(longlong *)(unaff_RDI + 0x70);
        bVar24 = 0x38 - (char)*(undefined4 *)(unaff_RDI + 0x34);
      }
      uVar39 = (ulonglong)(uVar34 - 0x20);
      uVar9 = 0;
      if (uVar39 + lVar12 <= (longlong)unaff_RSI + 1U) {
        uVar9 = ((int)((longlong)unaff_RSI + 1U) - (int)(uVar39 + lVar12)) + 1;
      }
      uVar25 = 8;
      if (uVar9 < 8) {
        uVar25 = uVar9;
      }
      uVar9 = (uVar25 + uVar34) - 0x20;
      if (uVar34 - 0x20 < uVar9) {
        uVar27 = *(ulonglong *)(unaff_RDI + 0x60);
        uVar14 = uVar39;
        do {
          *(int *)(unaff_RDI + 0x40 + (ulonglong)((uint)uVar14 & 7) * 4) =
               (int)((*(longlong *)(lVar12 + uVar14) * -0x30e4432340650000 ^ uVar27) >>
                    (bVar24 & 0x3f));
          uVar14 = uVar14 + 1;
        } while (uVar9 != uVar14);
      }
    }
    if ((uint)uVar39 < uVar34) {
      lVar8 = *(longlong *)(unaff_RDI + 8);
      do {
        uVar27 = (ulonglong)((uint)uVar39 & 7);
        uVar9 = *(uint *)(unaff_RDI + 0x40 + uVar27 * 4);
        *(int *)(unaff_RDI + 0x40 + uVar27 * 4) =
             (int)((*(longlong *)(lVar8 + 8 + uVar39) * -0x30e4432340650000 ^
                   *(ulonglong *)(unaff_RDI + 0x60)) >> (bVar24 & 0x3f));
        uVar27 = (ulonglong)(uVar9 >> 3) & 0x1fffffe0;
        bVar20 = *(char *)(lVar31 + uVar27) - 1U & 0x1f;
        lVar10 = 0;
        if (bVar20 == 0) {
          lVar10 = 0x1f;
        }
        lVar10 = (ulonglong)bVar20 + lVar10;
        *(char *)(lVar31 + uVar27) = (char)lVar10;
        *(char *)(lVar31 + uVar27 + lVar10) = (char)uVar9;
        *(uint *)(lVar41 + (lVar10 + uVar27) * 4) = (uint)uVar39;
        uVar39 = uVar39 + 1;
      } while ((uVar35 & 0xffffffff) != uVar39);
    }
    *(uint *)(unaff_RDI + 0x2c) = uVar34;
    uVar9 = *(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar34 & 7) * 4);
    *(int *)(unaff_RDI + 0x40 + (ulonglong)(uVar34 & 7) * 4) =
         (int)((*(longlong *)((uVar35 & 0xffffffff) + 8 + lVar12) * -0x30e4432340650000 ^ uVar11) >>
              (bVar15 & 0x3f));
  }
  else {
    uVar9 = (uint)((*unaff_RSI * -0x30e4432340650000 ^ uVar11) >> (0x38U - cVar19 & 0x3f));
    *(uint *)(unaff_RDI + 0x2c) = uVar34;
  }
  puVar2 = (ulonglong *)(lVar12 + (ulonglong)uVar17);
  pbVar28 = (byte *)(lVar40 + uVar18);
  *(int *)(unaff_RDI + 0x68) = *(int *)(unaff_RDI + 0x68) + uVar9;
  uVar35 = (ulonglong)(uVar9 >> 3 & 0xffffffe0);
  bVar24 = *(byte *)(lVar21 + uVar35);
  puVar36 = (undefined1 *)(lVar21 + uVar35);
  auVar42 = pshufb(ZEXT416(uVar9),(undefined1  [16])0x0);
  local_138[0] = (undefined1  [16])0x0;
  lVar21 = 0;
  do {
    pcVar3 = puVar36 + lVar21 * 4;
    auVar43[0] = -(*pcVar3 == auVar42[0]);
    auVar43[1] = -(pcVar3[1] == auVar42[1]);
    auVar43[2] = -(pcVar3[2] == auVar42[2]);
    auVar43[3] = -(pcVar3[3] == auVar42[3]);
    auVar43[4] = -(pcVar3[4] == auVar42[4]);
    auVar43[5] = -(pcVar3[5] == auVar42[5]);
    auVar43[6] = -(pcVar3[6] == auVar42[6]);
    auVar43[7] = -(pcVar3[7] == auVar42[7]);
    auVar43[8] = -(pcVar3[8] == auVar42[8]);
    auVar43[9] = -(pcVar3[9] == auVar42[9]);
    auVar43[10] = -(pcVar3[10] == auVar42[10]);
    auVar43[0xb] = -(pcVar3[0xb] == auVar42[0xb]);
    auVar43[0xc] = -(pcVar3[0xc] == auVar42[0xc]);
    auVar43[0xd] = -(pcVar3[0xd] == auVar42[0xd]);
    auVar43[0xe] = -(pcVar3[0xe] == auVar42[0xe]);
    auVar43[0xf] = -(pcVar3[0xf] == auVar42[0xf]);
    *(uint *)(local_138[0] + lVar21) =
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
    lVar21 = lVar21 + 4;
  } while (lVar21 != 8);
  uVar25 = local_138[0]._4_4_ << 0x10 | local_138[0]._0_4_;
  uVar25 = uVar25 >> (bVar24 & 0x1f) | uVar25 << 0x20 - (bVar24 & 0x1f);
  uVar11 = (ulonglong)uVar25;
  lVar32 = lVar32 + uVar35 * 4;
  lVar21 = 0;
  if (uVar25 != 0) {
    lVar40 = 0;
    do {
      lVar31 = 0;
      if (uVar11 != 0) {
        for (; (uVar11 >> lVar31 & 1) == 0; lVar31 = lVar31 + 1) {
        }
      }
      uVar35 = (ulonglong)((int)lVar31 + (uint)bVar24 & 0x1f);
      if (uVar35 != 0) {
        uVar25 = *(uint *)(lVar32 + uVar35 * 4);
        if (uVar25 < uVar6) goto LAB_00ee8ba3;
        *(uint *)(local_138[0] + lVar40 * 4) = uVar25;
        lVar40 = lVar40 + 1;
        iVar37 = iVar37 + -1;
      }
      uVar11 = uVar11 & uVar11 - 1;
      if ((uVar11 == 0) || (iVar37 == 0)) goto LAB_00ee8ba3;
    } while( true );
  }
  lVar40 = 0;
LAB_00ee8ba3:
  uVar35 = (ulonglong)(bVar24 - 1 & 0x1f);
  if (uVar35 == 0) {
    lVar21 = 0x1f;
  }
  lVar21 = lVar21 + uVar35;
  *puVar36 = (char)lVar21;
  puVar36[lVar21] = (char)uVar9;
  iVar5 = *(int *)(unaff_RDI + 0x2c);
  *(int *)(unaff_RDI + 0x2c) = iVar5 + 1;
  *(int *)(lVar32 + lVar21 * 4) = iVar5;
  puVar1 = (ulonglong *)((longlong)param_2 - 7);
  if (lVar40 == 0) {
    uVar35 = 3;
  }
  else {
    uVar35 = 3;
    lVar32 = 0;
    do {
      uVar6 = *(uint *)(local_138[0] + lVar32 * 4);
      puVar22 = (ulonglong *)(lVar12 + (ulonglong)uVar6);
      if (*(int *)((uVar35 - 3) + (longlong)puVar22) == *(int *)((longlong)unaff_RSI + (uVar35 - 3))
         ) {
        puVar23 = unaff_RSI;
        if (unaff_RSI < puVar1) {
          uVar11 = *unaff_RSI ^ *puVar22;
          if (uVar11 == 0) {
            lVar21 = lVar12 + 8 + (ulonglong)uVar6;
            lVar31 = 0;
            do {
              puVar23 = (ulonglong *)((longlong)unaff_RSI + lVar31 + 8);
              if (puVar1 <= puVar23) {
                puVar22 = (ulonglong *)(lVar21 + lVar31);
                goto LAB_00ee8c52;
              }
              lVar41 = lVar31 + 8;
              uVar11 = *(ulonglong *)((longlong)unaff_RSI + lVar31 + 8) ^
                       *(ulonglong *)(lVar21 + lVar31);
              lVar31 = lVar41;
            } while (uVar11 == 0);
            uVar39 = 0;
            if (uVar11 != 0) {
              for (; (uVar11 >> uVar39 & 1) == 0; uVar39 = uVar39 + 1) {
              }
            }
            uVar39 = (uVar39 >> 3) + lVar41;
          }
          else {
            uVar39 = 0;
            if (uVar11 != 0) {
              for (; (uVar11 >> uVar39 & 1) == 0; uVar39 = uVar39 + 1) {
              }
            }
            uVar39 = uVar39 >> 3;
          }
        }
        else {
LAB_00ee8c52:
          if ((puVar23 < (ulonglong *)((longlong)param_2 - 3U)) && ((int)*puVar22 == (int)*puVar23))
          {
            puVar23 = (ulonglong *)((longlong)puVar23 + 4);
            puVar22 = (ulonglong *)((longlong)puVar22 + 4);
          }
          if ((puVar23 < (ulonglong *)((longlong)param_2 - 1U)) &&
             ((short)*puVar22 == (short)*puVar23)) {
            puVar23 = (ulonglong *)((longlong)puVar23 + 2);
            puVar22 = (ulonglong *)((longlong)puVar22 + 2);
          }
          if (puVar23 < param_2) {
            puVar23 = (ulonglong *)
                      ((longlong)puVar23 + (ulonglong)((char)*puVar22 == (char)*puVar23));
          }
          uVar39 = (longlong)puVar23 - (longlong)unaff_RSI;
        }
        if ((uVar35 < uVar39) &&
           (*param_1 = (ulonglong)((uVar34 + 3) - uVar6), uVar35 = uVar39,
           (ulonglong *)((longlong)unaff_RSI + uVar39) == param_2)) break;
      }
      lVar32 = lVar32 + 1;
    } while (lVar32 != lVar40);
  }
  puVar22 = (ulonglong *)((longlong)unaff_RSI + 4);
  uVar6 = *(uint *)(puVar7 + 3);
  pcVar3 = (char *)*puVar7;
  lVar32 = puVar7[1];
  uVar9 = *pbVar28 & 0x1f;
  local_1a8 = (byte)uVar26;
  auVar42 = pshufb(ZEXT116(local_1a8),(undefined1  [16])0x0);
  local_138[0] = (undefined1  [16])0x0;
  lVar21 = 0;
  do {
    pbVar4 = pbVar28 + lVar21 * 4;
    auVar44[0] = -(*pbVar4 == auVar42[0]);
    auVar44[1] = -(pbVar4[1] == auVar42[1]);
    auVar44[2] = -(pbVar4[2] == auVar42[2]);
    auVar44[3] = -(pbVar4[3] == auVar42[3]);
    auVar44[4] = -(pbVar4[4] == auVar42[4]);
    auVar44[5] = -(pbVar4[5] == auVar42[5]);
    auVar44[6] = -(pbVar4[6] == auVar42[6]);
    auVar44[7] = -(pbVar4[7] == auVar42[7]);
    auVar44[8] = -(pbVar4[8] == auVar42[8]);
    auVar44[9] = -(pbVar4[9] == auVar42[9]);
    auVar44[10] = -(pbVar4[10] == auVar42[10]);
    auVar44[0xb] = -(pbVar4[0xb] == auVar42[0xb]);
    auVar44[0xc] = -(pbVar4[0xc] == auVar42[0xc]);
    auVar44[0xd] = -(pbVar4[0xd] == auVar42[0xd]);
    auVar44[0xe] = -(pbVar4[0xe] == auVar42[0xe]);
    auVar44[0xf] = -(pbVar4[0xf] == auVar42[0xf]);
    *(uint *)(local_138[0] + lVar21) =
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
    lVar21 = lVar21 + 4;
  } while (lVar21 != 8);
  uVar25 = local_138[0]._4_4_ << 0x10 | local_138[0]._0_4_;
  sVar16 = (sbyte)uVar9;
  uVar25 = uVar25 >> sVar16 | uVar25 << 0x20 - sVar16;
  if ((uVar25 != 0) && (iVar37 != 0)) {
    uVar11 = (ulonglong)uVar25;
    lVar21 = 0;
    do {
      lVar40 = 0;
      if (uVar11 != 0) {
        for (; (uVar11 >> lVar40 & 1) == 0; lVar40 = lVar40 + 1) {
        }
      }
      uVar26 = (ulonglong)((int)lVar40 + uVar9 & 0x1f);
      if (uVar26 != 0) {
        uVar25 = *(uint *)(lVar29 + uVar18 * 4 + uVar26 * 4);
        if (uVar25 < uVar6) goto LAB_00ee8e34;
        *(uint *)(local_138[0] + lVar21 * 4) = uVar25;
        lVar21 = lVar21 + 1;
        iVar37 = iVar37 + -1;
      }
      uVar11 = uVar11 & uVar11 - 1;
      if ((uVar11 == 0) || (iVar37 == 0)) goto LAB_00ee8e34;
    } while( true );
  }
  goto LAB_00ee90ab;
LAB_00ee8e34:
  if (lVar21 != 0) {
    uVar11 = *unaff_RSI;
    lVar12 = (ulonglong)uVar17 + lVar12 + 8;
    lVar40 = 0;
    uVar18 = uVar35;
    do {
      uVar35 = (ulonglong)*(uint *)(local_138[0] + lVar40 * 4);
      if (*(int *)(lVar32 + uVar35) == (int)uVar11) {
        puVar38 = (ulonglong *)(lVar32 + uVar35 + 4);
        puVar23 = (ulonglong *)(((longlong)pcVar3 - (longlong)puVar38) + (longlong)puVar22);
        if (param_2 <= puVar23) {
          puVar23 = param_2;
        }
        puVar30 = puVar22;
        puVar33 = puVar38;
        if (puVar22 < (ulonglong *)((longlong)puVar23 - 7U)) {
          uVar26 = *puVar22 ^ *puVar38;
          if (uVar26 == 0) {
            lVar29 = lVar32 + 0xc + uVar35;
            lVar31 = 0;
            do {
              puVar30 = (ulonglong *)((longlong)unaff_RSI + lVar31 + 0xc);
              if ((ulonglong *)((longlong)puVar23 - 7U) <= puVar30) {
                puVar33 = (ulonglong *)(lVar29 + lVar31);
                goto LAB_00ee8f49;
              }
              lVar41 = lVar31 + 8;
              uVar35 = *(ulonglong *)((longlong)unaff_RSI + lVar31 + 0xc) ^
                       *(ulonglong *)(lVar29 + lVar31);
              lVar31 = lVar41;
            } while (uVar35 == 0);
            uVar26 = 0;
            if (uVar35 != 0) {
              for (; (uVar35 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
              }
            }
            uVar35 = (uVar26 >> 3) + lVar41;
          }
          else {
            uVar35 = 0;
            if (uVar26 != 0) {
              for (; (uVar26 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
              }
            }
            uVar35 = uVar35 >> 3;
          }
        }
        else {
LAB_00ee8f49:
          if ((puVar30 < (ulonglong *)((longlong)puVar23 - 3U)) && ((int)*puVar33 == (int)*puVar30))
          {
            puVar30 = (ulonglong *)((longlong)puVar30 + 4);
            puVar33 = (ulonglong *)((longlong)puVar33 + 4);
          }
          if ((puVar30 < (ulonglong *)((longlong)puVar23 - 1U)) &&
             ((short)*puVar33 == (short)*puVar30)) {
            puVar30 = (ulonglong *)((longlong)puVar30 + 2);
            puVar33 = (ulonglong *)((longlong)puVar33 + 2);
          }
          if (puVar30 < puVar23) {
            puVar30 = (ulonglong *)
                      ((longlong)puVar30 + (ulonglong)((char)*puVar33 == (char)*puVar30));
          }
          uVar35 = (longlong)puVar30 - (longlong)puVar22;
        }
        if ((char *)((longlong)puVar38 + uVar35) == pcVar3) {
          puVar23 = (ulonglong *)((longlong)puVar22 + uVar35);
          puVar30 = puVar2;
          puVar38 = puVar23;
          if (puVar23 < puVar1) {
            uVar26 = *puVar23 ^ *puVar2;
            if (uVar26 == 0) {
              lVar29 = 0;
              do {
                puVar38 = (ulonglong *)((longlong)unaff_RSI + lVar29 + uVar35 + 0xc);
                if (puVar1 <= puVar38) {
                  puVar30 = (ulonglong *)(lVar29 + lVar12);
                  goto LAB_00ee9006;
                }
                lVar31 = lVar29 + 8;
                uVar26 = *(ulonglong *)((longlong)unaff_RSI + lVar29 + uVar35 + 0xc) ^
                         *(ulonglong *)(lVar12 + lVar29);
                lVar29 = lVar31;
              } while (uVar26 == 0);
              uVar39 = 0;
              if (uVar26 != 0) {
                for (; (uVar26 >> uVar39 & 1) == 0; uVar39 = uVar39 + 1) {
                }
              }
              uVar39 = (uVar39 >> 3) + lVar31;
            }
            else {
              uVar39 = 0;
              if (uVar26 != 0) {
                for (; (uVar26 >> uVar39 & 1) == 0; uVar39 = uVar39 + 1) {
                }
              }
              uVar39 = uVar39 >> 3;
            }
          }
          else {
LAB_00ee9006:
            if ((puVar38 < (ulonglong *)((longlong)param_2 - 3U)) &&
               ((int)*puVar30 == (int)*puVar38)) {
              puVar38 = (ulonglong *)((longlong)puVar38 + 4);
              puVar30 = (ulonglong *)((longlong)puVar30 + 4);
            }
            if ((puVar38 < (ulonglong *)((longlong)param_2 - 1U)) &&
               ((short)*puVar30 == (short)*puVar38)) {
              puVar38 = (ulonglong *)((longlong)puVar38 + 2);
              puVar30 = (ulonglong *)((longlong)puVar30 + 2);
            }
            if (puVar38 < param_2) {
              puVar38 = (ulonglong *)
                        ((longlong)puVar38 + (ulonglong)((char)*puVar30 == (char)*puVar38));
            }
            uVar39 = (longlong)puVar38 - (longlong)puVar23;
          }
          uVar35 = uVar35 + uVar39;
        }
        uVar35 = uVar35 + 4;
        if ((uVar18 < uVar35) &&
           (*param_1 = (ulonglong)
                       (((uVar34 - uVar17) + ((int)pcVar3 - (int)lVar32) + 3) -
                       *(uint *)(local_138[0] + lVar40 * 4)), uVar18 = uVar35,
           (ulonglong *)((longlong)unaff_RSI + uVar35) == param_2)) break;
      }
      uVar35 = uVar18;
      lVar40 = lVar40 + 1;
      uVar18 = uVar35;
    } while (lVar40 != lVar21);
  }
LAB_00ee90ab:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar35;
}


