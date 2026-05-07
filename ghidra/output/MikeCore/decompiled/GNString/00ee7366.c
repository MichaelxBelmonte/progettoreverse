// Function: FUN_00ee7366
// Address: 00ee7366
// Size: 2794 bytes
// Class: GNString


ulonglong FUN_00ee7366(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  char *pcVar2;
  byte *pbVar3;
  ulonglong *puVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong *puVar21;
  ulonglong *puVar22;
  byte bVar23;
  ulonglong uVar24;
  byte *pbVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong *puVar28;
  ulonglong *unaff_RSI;
  longlong lVar29;
  longlong unaff_RDI;
  longlong lVar30;
  ulonglong *puVar31;
  int iVar32;
  ulonglong *puVar33;
  byte bVar34;
  uint uVar35;
  ulonglong uVar36;
  longlong lVar37;
  undefined1 *puVar38;
  ulonglong uVar39;
  longlong lVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  byte local_1c0;
  undefined1 local_138 [16] [16];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar11 = *(longlong *)(unaff_RDI + 8);
  uVar9 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar36 = (longlong)unaff_RSI - lVar11;
  uVar16 = *(uint *)(unaff_RDI + 0x1c);
  uVar35 = (uint)uVar36;
  uVar15 = uVar35 - uVar9;
  if (uVar35 - uVar16 <= uVar9) {
    uVar15 = uVar16;
  }
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar15 = uVar16;
  }
  uVar16 = 6;
  if (*(uint *)(unaff_RDI + 0x10c) < 6) {
    uVar16 = *(uint *)(unaff_RDI + 0x10c);
  }
  iVar32 = 1 << ((byte)uVar16 & 0x1f);
  puVar6 = *(undefined8 **)(unaff_RDI + 0xf8);
  uVar10 = *unaff_RSI * -0x30e4432345000000 >> (0x38U - *(char *)((longlong)puVar6 + 0x34) & 0x3f);
  uVar12 = (ulonglong)((uint)(uVar10 >> 2) & 0x3fffffc0);
  lVar30 = *(longlong *)(unaff_RDI + 0x70);
  lVar19 = *(longlong *)(unaff_RDI + 0x38);
  uVar16 = *(uint *)(unaff_RDI + 0x18);
  uVar26 = *(ulonglong *)(unaff_RDI + 0x60);
  lVar37 = puVar6[7];
  lVar27 = puVar6[0xe];
  cVar8 = (char)*(undefined4 *)(unaff_RDI + 0x34);
  if (*(int *)(unaff_RDI + 300) == 0) {
    uVar9 = *(uint *)(unaff_RDI + 0x2c);
    uVar39 = (ulonglong)uVar9;
    bVar34 = 0x38 - cVar8;
    lVar20 = lVar19;
    lVar40 = lVar30;
    bVar23 = bVar34;
    if (0x180 < uVar35 - uVar9) {
      if (uVar9 < 0xffffffa0) {
        uVar24 = uVar39 + 0x5f;
        uVar14 = uVar26;
        while( true ) {
          uVar13 = (ulonglong)((uint)uVar39 & 7);
          uVar9 = *(uint *)(unaff_RDI + 0x40 + uVar13 * 4);
          *(int *)(unaff_RDI + 0x40 + uVar13 * 4) =
               (int)((*(longlong *)(lVar11 + 8 + uVar39) * -0x30e4432345000000 ^ uVar14) >>
                    (bVar34 & 0x3f));
          uVar14 = (ulonglong)(uVar9 >> 2) & 0x3fffffc0;
          bVar23 = *(char *)(lVar19 + uVar14) - 1U & 0x3f;
          lVar20 = 0;
          if (bVar23 == 0) {
            lVar20 = 0x3f;
          }
          lVar20 = (ulonglong)bVar23 + lVar20;
          *(char *)(lVar19 + uVar14) = (char)lVar20;
          *(char *)(lVar19 + uVar14 + lVar20) = (char)uVar9;
          *(uint *)(lVar30 + (lVar20 + uVar14) * 4) = (uint)uVar39;
          if (uVar24 == uVar39) break;
          uVar14 = *(ulonglong *)(unaff_RDI + 0x60);
          uVar39 = uVar39 + 1;
        }
        lVar20 = *(longlong *)(unaff_RDI + 0x38);
        lVar40 = *(longlong *)(unaff_RDI + 0x70);
        bVar23 = 0x38 - (char)*(undefined4 *)(unaff_RDI + 0x34);
      }
      uVar39 = (ulonglong)(uVar35 - 0x20);
      uVar9 = 0;
      if (lVar11 + uVar39 <= (longlong)unaff_RSI + 1U) {
        uVar9 = ((int)((longlong)unaff_RSI + 1U) - (int)(lVar11 + uVar39)) + 1;
      }
      uVar18 = 8;
      if (uVar9 < 8) {
        uVar18 = uVar9;
      }
      uVar9 = (uVar18 + uVar35) - 0x20;
      if (uVar35 - 0x20 < uVar9) {
        uVar24 = *(ulonglong *)(unaff_RDI + 0x60);
        uVar14 = uVar39;
        do {
          *(int *)(unaff_RDI + 0x40 + (ulonglong)((uint)uVar14 & 7) * 4) =
               (int)((*(longlong *)(lVar11 + uVar14) * -0x30e4432345000000 ^ uVar24) >>
                    (bVar23 & 0x3f));
          uVar14 = uVar14 + 1;
        } while (uVar9 != uVar14);
      }
    }
    if ((uint)uVar39 < uVar35) {
      lVar7 = *(longlong *)(unaff_RDI + 8);
      do {
        uVar24 = (ulonglong)((uint)uVar39 & 7);
        uVar9 = *(uint *)(unaff_RDI + 0x40 + uVar24 * 4);
        *(int *)(unaff_RDI + 0x40 + uVar24 * 4) =
             (int)((*(longlong *)(lVar7 + 8 + uVar39) * -0x30e4432345000000 ^
                   *(ulonglong *)(unaff_RDI + 0x60)) >> (bVar23 & 0x3f));
        uVar24 = (ulonglong)(uVar9 >> 2) & 0x3fffffc0;
        bVar17 = *(char *)(lVar20 + uVar24) - 1U & 0x3f;
        lVar29 = 0;
        if (bVar17 == 0) {
          lVar29 = 0x3f;
        }
        lVar29 = (ulonglong)bVar17 + lVar29;
        *(char *)(lVar20 + uVar24) = (char)lVar29;
        *(char *)(lVar20 + uVar24 + lVar29) = (char)uVar9;
        *(uint *)(lVar40 + (lVar29 + uVar24) * 4) = (uint)uVar39;
        uVar39 = uVar39 + 1;
      } while ((uVar36 & 0xffffffff) != uVar39);
    }
    *(uint *)(unaff_RDI + 0x2c) = uVar35;
    uVar9 = *(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar35 & 7) * 4);
    *(int *)(unaff_RDI + 0x40 + (ulonglong)(uVar35 & 7) * 4) =
         (int)((*(longlong *)((uVar36 & 0xffffffff) + 8 + lVar11) * -0x30e4432345000000 ^ uVar26) >>
              (bVar34 & 0x3f));
  }
  else {
    uVar9 = (uint)((*unaff_RSI * -0x30e4432345000000 ^ uVar26) >> (0x38U - cVar8 & 0x3f));
    *(uint *)(unaff_RDI + 0x2c) = uVar35;
  }
  puVar1 = (ulonglong *)(lVar11 + (ulonglong)uVar16);
  pbVar25 = (byte *)(lVar37 + uVar12);
  *(int *)(unaff_RDI + 0x68) = *(int *)(unaff_RDI + 0x68) + uVar9;
  uVar36 = (ulonglong)(uVar9 >> 2 & 0xffffffc0);
  bVar23 = *(byte *)(lVar19 + uVar36);
  puVar38 = (undefined1 *)(lVar19 + uVar36);
  auVar41 = pshufb(ZEXT416(uVar9),(undefined1  [16])0x0);
  local_138[0] = (undefined1  [16])0x0;
  lVar19 = 0;
  do {
    pcVar2 = puVar38 + lVar19 * 4;
    auVar42[0] = -(*pcVar2 == auVar41[0]);
    auVar42[1] = -(pcVar2[1] == auVar41[1]);
    auVar42[2] = -(pcVar2[2] == auVar41[2]);
    auVar42[3] = -(pcVar2[3] == auVar41[3]);
    auVar42[4] = -(pcVar2[4] == auVar41[4]);
    auVar42[5] = -(pcVar2[5] == auVar41[5]);
    auVar42[6] = -(pcVar2[6] == auVar41[6]);
    auVar42[7] = -(pcVar2[7] == auVar41[7]);
    auVar42[8] = -(pcVar2[8] == auVar41[8]);
    auVar42[9] = -(pcVar2[9] == auVar41[9]);
    auVar42[10] = -(pcVar2[10] == auVar41[10]);
    auVar42[0xb] = -(pcVar2[0xb] == auVar41[0xb]);
    auVar42[0xc] = -(pcVar2[0xc] == auVar41[0xc]);
    auVar42[0xd] = -(pcVar2[0xd] == auVar41[0xd]);
    auVar42[0xe] = -(pcVar2[0xe] == auVar41[0xe]);
    auVar42[0xf] = -(pcVar2[0xf] == auVar41[0xf]);
    *(uint *)(local_138[0] + lVar19) =
         (uint)(ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar42[0xf] >> 7) << 0xf);
    lVar19 = lVar19 + 4;
  } while (lVar19 != 0x10);
  uVar26 = (longlong)(int)local_138[0]._4_4_ << 0x10 | (longlong)(int)local_138[0]._0_4_ |
           (ulonglong)(uint)local_138[0]._8_4_ << 0x20 |
           (ulonglong)(uint)local_138[0]._12_4_ << 0x30;
  uVar26 = uVar26 >> (bVar23 & 0x3f) | uVar26 << 0x40 - (bVar23 & 0x3f);
  lVar30 = lVar30 + uVar36 * 4;
  lVar19 = 0;
  if (uVar26 != 0) {
    lVar37 = 0;
    do {
      lVar20 = 0;
      if (uVar26 != 0) {
        for (; (uVar26 >> lVar20 & 1) == 0; lVar20 = lVar20 + 1) {
        }
      }
      uVar36 = (ulonglong)((int)lVar20 + (uint)bVar23 & 0x3f);
      if (uVar36 != 0) {
        uVar18 = *(uint *)(lVar30 + uVar36 * 4);
        if (uVar18 < uVar15) goto LAB_00ee7759;
        *(uint *)(local_138[0] + lVar37 * 4) = uVar18;
        lVar37 = lVar37 + 1;
        iVar32 = iVar32 + -1;
      }
      uVar26 = uVar26 & uVar26 - 1;
      if ((uVar26 == 0) || (iVar32 == 0)) goto LAB_00ee7759;
    } while( true );
  }
  lVar37 = 0;
LAB_00ee7759:
  uVar36 = (ulonglong)(bVar23 - 1 & 0x3f);
  if (uVar36 == 0) {
    lVar19 = 0x3f;
  }
  lVar19 = lVar19 + uVar36;
  *puVar38 = (char)lVar19;
  puVar38[lVar19] = (char)uVar9;
  iVar5 = *(int *)(unaff_RDI + 0x2c);
  *(int *)(unaff_RDI + 0x2c) = iVar5 + 1;
  *(int *)(lVar30 + lVar19 * 4) = iVar5;
  puVar4 = (ulonglong *)((longlong)param_2 - 7);
  if (lVar37 == 0) {
    uVar36 = 3;
  }
  else {
    uVar36 = 3;
    lVar30 = 0;
    do {
      uVar15 = *(uint *)(local_138[0] + lVar30 * 4);
      puVar21 = (ulonglong *)(lVar11 + (ulonglong)uVar15);
      if (*(int *)((uVar36 - 3) + (longlong)puVar21) == *(int *)((longlong)unaff_RSI + (uVar36 - 3))
         ) {
        puVar22 = unaff_RSI;
        if (unaff_RSI < puVar4) {
          uVar26 = *unaff_RSI ^ *puVar21;
          if (uVar26 == 0) {
            lVar20 = lVar11 + 8 + (ulonglong)uVar15;
            lVar19 = 0;
            do {
              puVar22 = (ulonglong *)((longlong)unaff_RSI + lVar19 + 8);
              if (puVar4 <= puVar22) {
                puVar21 = (ulonglong *)(lVar20 + lVar19);
                goto LAB_00ee7816;
              }
              lVar40 = lVar19 + 8;
              uVar26 = *(ulonglong *)((longlong)unaff_RSI + lVar19 + 8) ^
                       *(ulonglong *)(lVar20 + lVar19);
              lVar19 = lVar40;
            } while (uVar26 == 0);
            uVar39 = 0;
            if (uVar26 != 0) {
              for (; (uVar26 >> uVar39 & 1) == 0; uVar39 = uVar39 + 1) {
              }
            }
            uVar39 = (uVar39 >> 3) + lVar40;
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
LAB_00ee7816:
          if ((puVar22 < (ulonglong *)((longlong)param_2 - 3U)) && ((int)*puVar21 == (int)*puVar22))
          {
            puVar22 = (ulonglong *)((longlong)puVar22 + 4);
            puVar21 = (ulonglong *)((longlong)puVar21 + 4);
          }
          if ((puVar22 < (ulonglong *)((longlong)param_2 - 1U)) &&
             ((short)*puVar21 == (short)*puVar22)) {
            puVar22 = (ulonglong *)((longlong)puVar22 + 2);
            puVar21 = (ulonglong *)((longlong)puVar21 + 2);
          }
          if (puVar22 < param_2) {
            puVar22 = (ulonglong *)
                      ((longlong)puVar22 + (ulonglong)((char)*puVar21 == (char)*puVar22));
          }
          uVar39 = (longlong)puVar22 - (longlong)unaff_RSI;
        }
        if ((uVar36 < uVar39) &&
           (*param_1 = (ulonglong)((uVar35 + 3) - uVar15), uVar36 = uVar39,
           (ulonglong *)((longlong)unaff_RSI + uVar39) == param_2)) break;
      }
      lVar30 = lVar30 + 1;
    } while (lVar30 != lVar37);
  }
  puVar21 = (ulonglong *)((longlong)unaff_RSI + 4);
  uVar15 = *(uint *)(puVar6 + 3);
  pcVar2 = (char *)*puVar6;
  lVar30 = puVar6[1];
  bVar23 = *pbVar25;
  local_1c0 = (byte)uVar10;
  auVar41 = pshufb(ZEXT116(local_1c0),(undefined1  [16])0x0);
  local_138[0] = (undefined1  [16])0x0;
  lVar19 = 0;
  do {
    pbVar3 = pbVar25 + lVar19 * 4;
    auVar43[0] = -(*pbVar3 == auVar41[0]);
    auVar43[1] = -(pbVar3[1] == auVar41[1]);
    auVar43[2] = -(pbVar3[2] == auVar41[2]);
    auVar43[3] = -(pbVar3[3] == auVar41[3]);
    auVar43[4] = -(pbVar3[4] == auVar41[4]);
    auVar43[5] = -(pbVar3[5] == auVar41[5]);
    auVar43[6] = -(pbVar3[6] == auVar41[6]);
    auVar43[7] = -(pbVar3[7] == auVar41[7]);
    auVar43[8] = -(pbVar3[8] == auVar41[8]);
    auVar43[9] = -(pbVar3[9] == auVar41[9]);
    auVar43[10] = -(pbVar3[10] == auVar41[10]);
    auVar43[0xb] = -(pbVar3[0xb] == auVar41[0xb]);
    auVar43[0xc] = -(pbVar3[0xc] == auVar41[0xc]);
    auVar43[0xd] = -(pbVar3[0xd] == auVar41[0xd]);
    auVar43[0xe] = -(pbVar3[0xe] == auVar41[0xe]);
    auVar43[0xf] = -(pbVar3[0xf] == auVar41[0xf]);
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
  } while (lVar19 != 0x10);
  uVar26 = (longlong)(int)local_138[0]._4_4_ << 0x10 | (longlong)(int)local_138[0]._0_4_ |
           (ulonglong)(uint)local_138[0]._8_4_ << 0x20 |
           (ulonglong)(uint)local_138[0]._12_4_ << 0x30;
  bVar34 = bVar23 & 0x3f;
  uVar26 = uVar26 >> bVar34 | uVar26 << 0x40 - bVar34;
  if ((uVar26 != 0) && (iVar32 != 0)) {
    lVar19 = 0;
    do {
      lVar37 = 0;
      if (uVar26 != 0) {
        for (; (uVar26 >> lVar37 & 1) == 0; lVar37 = lVar37 + 1) {
        }
      }
      uVar10 = (ulonglong)((int)lVar37 + (uint)bVar23 & 0x3f);
      if (uVar10 != 0) {
        uVar9 = *(uint *)(lVar27 + uVar12 * 4 + uVar10 * 4);
        if (uVar9 < uVar15) goto LAB_00ee7a17;
        *(uint *)(local_138[0] + lVar19 * 4) = uVar9;
        lVar19 = lVar19 + 1;
        iVar32 = iVar32 + -1;
      }
      uVar26 = uVar26 & uVar26 - 1;
      if ((uVar26 == 0) || (iVar32 == 0)) goto LAB_00ee7a17;
    } while( true );
  }
  goto LAB_00ee7c85;
LAB_00ee7a17:
  if (lVar19 != 0) {
    uVar26 = *unaff_RSI;
    lVar11 = (ulonglong)uVar16 + lVar11 + 8;
    lVar37 = 0;
    uVar10 = uVar36;
    do {
      uVar36 = (ulonglong)*(uint *)(local_138[0] + lVar37 * 4);
      if (*(int *)(lVar30 + uVar36) == (int)uVar26) {
        puVar33 = (ulonglong *)(lVar30 + uVar36 + 4);
        puVar22 = (ulonglong *)(((longlong)pcVar2 - (longlong)puVar33) + (longlong)puVar21);
        if (param_2 <= puVar22) {
          puVar22 = param_2;
        }
        puVar28 = puVar21;
        puVar31 = puVar33;
        if (puVar21 < (ulonglong *)((longlong)puVar22 - 7U)) {
          uVar12 = *puVar21 ^ *puVar33;
          if (uVar12 == 0) {
            lVar27 = lVar30 + 0xc + uVar36;
            lVar20 = 0;
            do {
              puVar28 = (ulonglong *)((longlong)unaff_RSI + lVar20 + 0xc);
              if ((ulonglong *)((longlong)puVar22 - 7U) <= puVar28) {
                puVar31 = (ulonglong *)(lVar27 + lVar20);
                goto LAB_00ee7b2e;
              }
              lVar40 = lVar20 + 8;
              uVar36 = *(ulonglong *)((longlong)unaff_RSI + lVar20 + 0xc) ^
                       *(ulonglong *)(lVar27 + lVar20);
              lVar20 = lVar40;
            } while (uVar36 == 0);
            uVar12 = 0;
            if (uVar36 != 0) {
              for (; (uVar36 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
              }
            }
            uVar36 = (uVar12 >> 3) + lVar40;
          }
          else {
            uVar36 = 0;
            if (uVar12 != 0) {
              for (; (uVar12 >> uVar36 & 1) == 0; uVar36 = uVar36 + 1) {
              }
            }
            uVar36 = uVar36 >> 3;
          }
        }
        else {
LAB_00ee7b2e:
          if ((puVar28 < (ulonglong *)((longlong)puVar22 - 3U)) && ((int)*puVar31 == (int)*puVar28))
          {
            puVar28 = (ulonglong *)((longlong)puVar28 + 4);
            puVar31 = (ulonglong *)((longlong)puVar31 + 4);
          }
          if ((puVar28 < (ulonglong *)((longlong)puVar22 - 1U)) &&
             ((short)*puVar31 == (short)*puVar28)) {
            puVar28 = (ulonglong *)((longlong)puVar28 + 2);
            puVar31 = (ulonglong *)((longlong)puVar31 + 2);
          }
          if (puVar28 < puVar22) {
            puVar28 = (ulonglong *)
                      ((longlong)puVar28 + (ulonglong)((char)*puVar31 == (char)*puVar28));
          }
          uVar36 = (longlong)puVar28 - (longlong)puVar21;
        }
        if ((char *)((longlong)puVar33 + uVar36) == pcVar2) {
          puVar22 = (ulonglong *)((longlong)puVar21 + uVar36);
          puVar28 = puVar1;
          puVar33 = puVar22;
          if (puVar22 < puVar4) {
            uVar12 = *puVar22 ^ *puVar1;
            if (uVar12 == 0) {
              lVar27 = 0;
              do {
                puVar33 = (ulonglong *)((longlong)unaff_RSI + lVar27 + uVar36 + 0xc);
                if (puVar4 <= puVar33) {
                  puVar28 = (ulonglong *)(lVar27 + lVar11);
                  goto LAB_00ee7bf4;
                }
                lVar20 = lVar27 + 8;
                uVar12 = *(ulonglong *)((longlong)unaff_RSI + lVar27 + uVar36 + 0xc) ^
                         *(ulonglong *)(lVar11 + lVar27);
                lVar27 = lVar20;
              } while (uVar12 == 0);
              uVar39 = 0;
              if (uVar12 != 0) {
                for (; (uVar12 >> uVar39 & 1) == 0; uVar39 = uVar39 + 1) {
                }
              }
              uVar39 = (uVar39 >> 3) + lVar20;
            }
            else {
              uVar39 = 0;
              if (uVar12 != 0) {
                for (; (uVar12 >> uVar39 & 1) == 0; uVar39 = uVar39 + 1) {
                }
              }
              uVar39 = uVar39 >> 3;
            }
          }
          else {
LAB_00ee7bf4:
            if ((puVar33 < (ulonglong *)((longlong)param_2 - 3U)) &&
               ((int)*puVar28 == (int)*puVar33)) {
              puVar33 = (ulonglong *)((longlong)puVar33 + 4);
              puVar28 = (ulonglong *)((longlong)puVar28 + 4);
            }
            if ((puVar33 < (ulonglong *)((longlong)param_2 - 1U)) &&
               ((short)*puVar28 == (short)*puVar33)) {
              puVar33 = (ulonglong *)((longlong)puVar33 + 2);
              puVar28 = (ulonglong *)((longlong)puVar28 + 2);
            }
            if (puVar33 < param_2) {
              puVar33 = (ulonglong *)
                        ((longlong)puVar33 + (ulonglong)((char)*puVar28 == (char)*puVar33));
            }
            uVar39 = (longlong)puVar33 - (longlong)puVar22;
          }
          uVar36 = uVar36 + uVar39;
        }
        uVar36 = uVar36 + 4;
        if ((uVar10 < uVar36) &&
           (*param_1 = (ulonglong)
                       (((uVar35 - uVar16) + ((int)pcVar2 - (int)lVar30) + 3) -
                       *(uint *)(local_138[0] + lVar37 * 4)), uVar10 = uVar36,
           (ulonglong *)((longlong)unaff_RSI + uVar36) == param_2)) break;
      }
      uVar36 = uVar10;
      lVar37 = lVar37 + 1;
      uVar10 = uVar36;
    } while (lVar37 != lVar19);
  }
LAB_00ee7c85:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar36;
}


