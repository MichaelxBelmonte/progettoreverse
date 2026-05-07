// Function: FUN_00eee72e
// Address: 00eee72e
// Size: 3280 bytes
// Class: GNString


ulonglong FUN_00eee72e(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  ulonglong *puVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  ulonglong *puVar27;
  ulonglong *unaff_RSI;
  longlong lVar28;
  int iVar29;
  longlong unaff_RDI;
  char cVar30;
  ulonglong uVar31;
  ulonglong *puVar32;
  uint uVar33;
  uint uVar34;
  ulonglong uVar35;
  undefined1 *puVar36;
  byte bVar37;
  uint uVar38;
  longlong lVar39;
  ulonglong *puVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 local_138 [16] [16];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar17 = *(longlong *)(unaff_RDI + 8);
  uVar10 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar35 = (longlong)unaff_RSI - lVar17;
  uVar34 = *(uint *)(unaff_RDI + 0x1c);
  uVar33 = (uint)uVar35;
  uVar38 = uVar33 - uVar10;
  if (uVar33 - uVar34 <= uVar10) {
    uVar38 = uVar34;
  }
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar38 = uVar34;
  }
  uVar34 = *(uint *)(unaff_RDI + 0x10c);
  uVar10 = 5;
  if (uVar34 < 5) {
    uVar10 = uVar34;
  }
  iVar11 = 1 << ((byte)uVar10 & 0x1f);
  puVar7 = *(undefined8 **)(unaff_RDI + 0xf8);
  uVar25 = *unaff_RSI * -0x30e4432345000000 >> (0x42U - *(char *)(puVar7 + 0x21) & 0x3f);
  lVar13 = *(longlong *)(unaff_RDI + 0x70);
  lVar22 = *(longlong *)(unaff_RDI + 0x38);
  uVar10 = *(uint *)(unaff_RDI + 0x18);
  uVar18 = (ulonglong)uVar10;
  uVar19 = *(ulonglong *)(unaff_RDI + 0x60);
  iVar29 = 0;
  if (5 < uVar34) {
    iVar29 = 1 << ((char)uVar34 - 5U & 0x1f);
  }
  cVar30 = (char)*(undefined4 *)(unaff_RDI + 0x34);
  if (*(int *)(unaff_RDI + 300) == 0) {
    uVar34 = *(uint *)(unaff_RDI + 0x2c);
    uVar41 = (ulonglong)uVar34;
    bVar37 = 0x38 - cVar30;
    lVar39 = lVar22;
    lVar14 = lVar13;
    bVar9 = bVar37;
    if (0x180 < uVar33 - uVar34) {
      if (uVar34 < 0xffffffa0) {
        uVar31 = uVar41 + 0x5f;
        uVar16 = uVar19;
        while( true ) {
          uVar15 = (ulonglong)((uint)uVar41 & 7);
          uVar34 = *(uint *)(unaff_RDI + 0x40 + uVar15 * 4);
          *(int *)(unaff_RDI + 0x40 + uVar15 * 4) =
               (int)((*(longlong *)(lVar17 + 8 + uVar41) * -0x30e4432345000000 ^ uVar16) >>
                    (bVar37 & 0x3f));
          uVar16 = (ulonglong)(uVar34 >> 3) & 0x1fffffe0;
          bVar9 = *(char *)(lVar22 + uVar16) - 1U & 0x1f;
          lVar39 = 0;
          if (bVar9 == 0) {
            lVar39 = 0x1f;
          }
          lVar39 = (ulonglong)bVar9 + lVar39;
          *(char *)(lVar22 + uVar16) = (char)lVar39;
          *(char *)(lVar22 + uVar16 + lVar39) = (char)uVar34;
          *(uint *)(lVar13 + (lVar39 + uVar16) * 4) = (uint)uVar41;
          if (uVar31 == uVar41) break;
          uVar16 = *(ulonglong *)(unaff_RDI + 0x60);
          uVar41 = uVar41 + 1;
        }
        lVar39 = *(longlong *)(unaff_RDI + 0x38);
        lVar14 = *(longlong *)(unaff_RDI + 0x70);
        bVar9 = 0x38 - (char)*(undefined4 *)(unaff_RDI + 0x34);
      }
      uVar41 = (ulonglong)(uVar33 - 0x20);
      uVar34 = 0;
      if (lVar17 + uVar41 <= (longlong)unaff_RSI + 1U) {
        uVar34 = ((int)((longlong)unaff_RSI + 1U) - (int)(lVar17 + uVar41)) + 1;
      }
      uVar21 = 8;
      if (uVar34 < 8) {
        uVar21 = uVar34;
      }
      uVar34 = (uVar21 + uVar33) - 0x20;
      if (uVar33 - 0x20 < uVar34) {
        uVar31 = *(ulonglong *)(unaff_RDI + 0x60);
        uVar16 = uVar41;
        do {
          *(int *)(unaff_RDI + 0x40 + (ulonglong)((uint)uVar16 & 7) * 4) =
               (int)((*(longlong *)(lVar17 + uVar16) * -0x30e4432345000000 ^ uVar31) >>
                    (bVar9 & 0x3f));
          uVar16 = uVar16 + 1;
        } while (uVar34 != uVar16);
      }
    }
    if ((uint)uVar41 < uVar33) {
      lVar20 = *(longlong *)(unaff_RDI + 8);
      do {
        uVar31 = (ulonglong)((uint)uVar41 & 7);
        uVar34 = *(uint *)(unaff_RDI + 0x40 + uVar31 * 4);
        *(int *)(unaff_RDI + 0x40 + uVar31 * 4) =
             (int)((*(longlong *)(lVar20 + 8 + uVar41) * -0x30e4432345000000 ^
                   *(ulonglong *)(unaff_RDI + 0x60)) >> (bVar9 & 0x3f));
        uVar31 = (ulonglong)(uVar34 >> 3) & 0x1fffffe0;
        bVar8 = *(char *)(lVar39 + uVar31) - 1U & 0x1f;
        lVar28 = 0;
        if (bVar8 == 0) {
          lVar28 = 0x1f;
        }
        lVar28 = (ulonglong)bVar8 + lVar28;
        *(char *)(lVar39 + uVar31) = (char)lVar28;
        *(char *)(lVar39 + uVar31 + lVar28) = (char)uVar34;
        *(uint *)(lVar14 + (lVar28 + uVar31) * 4) = (uint)uVar41;
        uVar41 = uVar41 + 1;
      } while ((uVar35 & 0xffffffff) != uVar41);
    }
    *(uint *)(unaff_RDI + 0x2c) = uVar33;
    uVar34 = *(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar33 & 7) * 4);
    *(int *)(unaff_RDI + 0x40 + (ulonglong)(uVar33 & 7) * 4) =
         (int)((*(longlong *)((uVar35 & 0xffffffff) + 8 + lVar17) * -0x30e4432345000000 ^ uVar19) >>
              (bVar37 & 0x3f));
  }
  else {
    uVar34 = (uint)((*unaff_RSI * -0x30e4432345000000 ^ uVar19) >> (0x38U - cVar30 & 0x3f));
    *(uint *)(unaff_RDI + 0x2c) = uVar33;
  }
  puVar4 = (ulonglong *)(lVar17 + uVar18);
  *(int *)(unaff_RDI + 0x68) = *(int *)(unaff_RDI + 0x68) + uVar34;
  uVar35 = (ulonglong)(uVar34 >> 3 & 0xffffffe0);
  bVar9 = *(byte *)(lVar22 + uVar35);
  puVar36 = (undefined1 *)(lVar22 + uVar35);
  auVar42 = pshufb(ZEXT416(uVar34),(undefined1  [16])0x0);
  local_138[0] = (undefined1  [16])0x0;
  lVar22 = 0;
  do {
    pcVar5 = puVar36 + lVar22 * 4;
    auVar43[0] = -(*pcVar5 == auVar42[0]);
    auVar43[1] = -(pcVar5[1] == auVar42[1]);
    auVar43[2] = -(pcVar5[2] == auVar42[2]);
    auVar43[3] = -(pcVar5[3] == auVar42[3]);
    auVar43[4] = -(pcVar5[4] == auVar42[4]);
    auVar43[5] = -(pcVar5[5] == auVar42[5]);
    auVar43[6] = -(pcVar5[6] == auVar42[6]);
    auVar43[7] = -(pcVar5[7] == auVar42[7]);
    auVar43[8] = -(pcVar5[8] == auVar42[8]);
    auVar43[9] = -(pcVar5[9] == auVar42[9]);
    auVar43[10] = -(pcVar5[10] == auVar42[10]);
    auVar43[0xb] = -(pcVar5[0xb] == auVar42[0xb]);
    auVar43[0xc] = -(pcVar5[0xc] == auVar42[0xc]);
    auVar43[0xd] = -(pcVar5[0xd] == auVar42[0xd]);
    auVar43[0xe] = -(pcVar5[0xe] == auVar42[0xe]);
    auVar43[0xf] = -(pcVar5[0xf] == auVar42[0xf]);
    *(uint *)(local_138[0] + lVar22) =
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
    lVar22 = lVar22 + 4;
  } while (lVar22 != 8);
  uVar21 = local_138[0]._4_4_ << 0x10 | local_138[0]._0_4_;
  uVar21 = uVar21 >> (bVar9 & 0x1f) | uVar21 << 0x20 - (bVar9 & 0x1f);
  lVar13 = lVar13 + uVar35 * 4;
  lVar22 = 0;
  if (uVar21 != 0) {
    uVar35 = (ulonglong)uVar21;
    lVar39 = 0;
    do {
      lVar14 = 0;
      if (uVar35 != 0) {
        for (; (uVar35 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
        }
      }
      uVar19 = (ulonglong)((int)lVar14 + (uint)bVar9 & 0x1f);
      if (uVar19 != 0) {
        uVar21 = *(uint *)(lVar13 + uVar19 * 4);
        if (uVar21 < uVar38) goto LAB_00eeeabe;
        *(uint *)(local_138[0] + lVar39 * 4) = uVar21;
        lVar39 = lVar39 + 1;
        iVar11 = iVar11 + -1;
      }
      uVar35 = uVar35 & uVar35 - 1;
      if ((uVar35 == 0) || (iVar11 == 0)) goto LAB_00eeeabe;
    } while( true );
  }
  lVar39 = 0;
LAB_00eeeabe:
  uVar35 = (ulonglong)(bVar9 - 1 & 0x1f);
  if (uVar35 == 0) {
    lVar22 = 0x1f;
  }
  lVar22 = lVar22 + uVar35;
  *puVar36 = (char)lVar22;
  puVar36[lVar22] = (char)uVar34;
  iVar6 = *(int *)(unaff_RDI + 0x2c);
  *(int *)(unaff_RDI + 0x2c) = iVar6 + 1;
  *(int *)(lVar13 + lVar22 * 4) = iVar6;
  puVar1 = (ulonglong *)((longlong)param_2 - 7);
  puVar2 = (ulonglong *)((longlong)param_2 - 3);
  puVar12 = (ulonglong *)((longlong)param_2 + -1);
  if (lVar39 == 0) {
    uVar35 = 3;
  }
  else {
    uVar35 = 3;
    lVar13 = 0;
    do {
      uVar34 = *(uint *)(local_138[0] + lVar13 * 4);
      puVar26 = (ulonglong *)(lVar17 + (ulonglong)uVar34);
      if (*(int *)((uVar35 - 3) + (longlong)puVar26) == *(int *)((longlong)unaff_RSI + (uVar35 - 3))
         ) {
        puVar23 = unaff_RSI;
        if (unaff_RSI < puVar1) {
          uVar19 = *unaff_RSI ^ *puVar26;
          if (uVar19 == 0) {
            lVar22 = lVar17 + 8 + (ulonglong)uVar34;
            lVar14 = 0;
            do {
              puVar23 = (ulonglong *)((longlong)unaff_RSI + lVar14 + 8);
              if (puVar1 <= puVar23) {
                puVar26 = (ulonglong *)(lVar22 + lVar14);
                goto LAB_00eeeb7a;
              }
              lVar20 = lVar14 + 8;
              uVar19 = *(ulonglong *)((longlong)unaff_RSI + lVar14 + 8) ^
                       *(ulonglong *)(lVar22 + lVar14);
              lVar14 = lVar20;
            } while (uVar19 == 0);
            uVar41 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> uVar41 & 1) == 0; uVar41 = uVar41 + 1) {
              }
            }
            uVar41 = (uVar41 >> 3) + lVar20;
          }
          else {
            uVar41 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> uVar41 & 1) == 0; uVar41 = uVar41 + 1) {
              }
            }
            uVar41 = uVar41 >> 3;
          }
        }
        else {
LAB_00eeeb7a:
          if ((puVar23 < puVar2) && ((int)*puVar26 == (int)*puVar23)) {
            puVar23 = (ulonglong *)((longlong)puVar23 + 4);
            puVar26 = (ulonglong *)((longlong)puVar26 + 4);
          }
          if ((puVar23 < puVar12) && ((short)*puVar26 == (short)*puVar23)) {
            puVar23 = (ulonglong *)((longlong)puVar23 + 2);
            puVar26 = (ulonglong *)((longlong)puVar26 + 2);
          }
          if (puVar23 < param_2) {
            puVar23 = (ulonglong *)
                      ((longlong)puVar23 + (ulonglong)((char)*puVar26 == (char)*puVar23));
          }
          uVar41 = (longlong)puVar23 - (longlong)unaff_RSI;
        }
        if ((uVar35 < uVar41) &&
           (*param_1 = (ulonglong)((uVar33 + 3) - uVar34), uVar35 = uVar41,
           (ulonglong *)((longlong)unaff_RSI + uVar41) == param_2)) break;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != lVar39);
  }
  puVar26 = (ulonglong *)((longlong)unaff_RSI + 4);
  pcVar5 = (char *)*puVar7;
  lVar13 = puVar7[1];
  lVar22 = puVar7[0xe];
  lVar39 = 0;
  do {
    lVar39 = lVar39 + 1;
  } while (lVar39 != 3);
  uVar34 = iVar11 + iVar29;
  uVar19 = 3;
  if (uVar34 < 3) {
    uVar19 = (ulonglong)uVar34;
  }
  uVar38 = *(uint *)(lVar22 + (uVar25 << 4 | 0xc));
  uVar41 = (ulonglong)(uVar38 >> 8);
  lVar39 = puVar7[0x10];
  iVar29 = (((int)pcVar5 - (int)lVar13) - uVar10) + uVar33 + 3;
  if ((int)uVar19 != 0) {
    lVar14 = lVar17 + uVar18 + 8;
    uVar31 = 0;
    do {
      uVar10 = *(uint *)(lVar22 + (uVar31 + uVar25 * 4) * 4);
      uVar16 = (ulonglong)uVar10;
      if (uVar16 == 0) goto LAB_00eef213;
      if (*(int *)(lVar13 + uVar16) == (int)*unaff_RSI) {
        puVar40 = (ulonglong *)((int *)(lVar13 + uVar16) + 1);
        puVar23 = (ulonglong *)(((longlong)pcVar5 - (longlong)puVar40) + (longlong)puVar26);
        if (param_2 <= puVar23) {
          puVar23 = param_2;
        }
        puVar27 = puVar26;
        puVar32 = puVar40;
        if (puVar26 < (ulonglong *)((longlong)puVar23 - 7U)) {
          uVar15 = *puVar26 ^ *puVar40;
          if (uVar15 == 0) {
            lVar20 = lVar13 + 0xc + uVar16;
            lVar28 = 0;
            do {
              puVar27 = (ulonglong *)((longlong)unaff_RSI + lVar28 + 0xc);
              if ((ulonglong *)((longlong)puVar23 - 7U) <= puVar27) {
                puVar32 = (ulonglong *)(lVar20 + lVar28);
                goto LAB_00eeedfb;
              }
              lVar3 = lVar28 + 8;
              uVar16 = *(ulonglong *)((longlong)unaff_RSI + lVar28 + 0xc) ^
                       *(ulonglong *)(lVar20 + lVar28);
              lVar28 = lVar3;
            } while (uVar16 == 0);
            uVar15 = 0;
            if (uVar16 != 0) {
              for (; (uVar16 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
              }
            }
            uVar16 = (uVar15 >> 3) + lVar3;
          }
          else {
            uVar16 = 0;
            if (uVar15 != 0) {
              for (; (uVar15 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
              }
            }
            uVar16 = uVar16 >> 3;
          }
        }
        else {
LAB_00eeedfb:
          if ((puVar27 < (ulonglong *)((longlong)puVar23 - 3U)) && ((int)*puVar32 == (int)*puVar27))
          {
            puVar27 = (ulonglong *)((longlong)puVar27 + 4);
            puVar32 = (ulonglong *)((longlong)puVar32 + 4);
          }
          if ((puVar27 < (ulonglong *)((longlong)puVar23 - 1U)) &&
             ((short)*puVar32 == (short)*puVar27)) {
            puVar27 = (ulonglong *)((longlong)puVar27 + 2);
            puVar32 = (ulonglong *)((longlong)puVar32 + 2);
          }
          if (puVar27 < puVar23) {
            puVar27 = (ulonglong *)
                      ((longlong)puVar27 + (ulonglong)((char)*puVar32 == (char)*puVar27));
          }
          uVar16 = (longlong)puVar27 - (longlong)puVar26;
        }
        if ((char *)((longlong)puVar40 + uVar16) == pcVar5) {
          puVar23 = (ulonglong *)((longlong)puVar26 + uVar16);
          puVar27 = puVar4;
          puVar40 = puVar23;
          if (puVar23 < puVar1) {
            uVar15 = *puVar23 ^ *puVar4;
            if (uVar15 == 0) {
              lVar20 = 0;
              do {
                puVar40 = (ulonglong *)((longlong)unaff_RSI + lVar20 + uVar16 + 0xc);
                if (puVar1 <= puVar40) {
                  puVar27 = (ulonglong *)(lVar20 + lVar14);
                  goto LAB_00eeeef0;
                }
                lVar28 = lVar20 + 8;
                uVar15 = *(ulonglong *)((longlong)unaff_RSI + lVar20 + uVar16 + 0xc) ^
                         *(ulonglong *)(lVar14 + lVar20);
                lVar20 = lVar28;
              } while (uVar15 == 0);
              uVar24 = 0;
              if (uVar15 != 0) {
                for (; (uVar15 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
                }
              }
              uVar24 = (uVar24 >> 3) + lVar28;
            }
            else {
              uVar24 = 0;
              if (uVar15 != 0) {
                for (; (uVar15 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
                }
              }
              uVar24 = uVar24 >> 3;
            }
          }
          else {
LAB_00eeeef0:
            if ((puVar40 < puVar2) && ((int)*puVar27 == (int)*puVar40)) {
              puVar40 = (ulonglong *)((longlong)puVar40 + 4);
              puVar27 = (ulonglong *)((longlong)puVar27 + 4);
            }
            if ((puVar40 < puVar12) && ((short)*puVar27 == (short)*puVar40)) {
              puVar40 = (ulonglong *)((longlong)puVar40 + 2);
              puVar27 = (ulonglong *)((longlong)puVar27 + 2);
            }
            if (puVar40 < param_2) {
              puVar40 = (ulonglong *)
                        ((longlong)puVar40 + (ulonglong)((char)*puVar27 == (char)*puVar40));
            }
            uVar24 = (longlong)puVar40 - (longlong)puVar23;
          }
          uVar16 = uVar16 + uVar24;
        }
        uVar16 = uVar16 + 4;
        if ((uVar35 < uVar16) &&
           (*param_1 = (ulonglong)(iVar29 - uVar10), uVar35 = uVar16,
           (ulonglong *)((longlong)unaff_RSI + uVar16) == param_2)) goto LAB_00eef213;
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 != uVar19);
  }
  uVar34 = uVar34 - (int)uVar19;
  if ((uVar38 & 0xff) < uVar34) {
    uVar34 = uVar38 & 0xff;
  }
  if (uVar34 != 0) {
    uVar19 = 0;
    do {
      uVar19 = uVar19 + 1;
    } while (uVar34 != uVar19);
    uVar19 = *unaff_RSI;
    lVar17 = lVar17 + uVar18 + 8;
    uVar38 = 0;
    uVar25 = uVar35;
    do {
      uVar10 = *(uint *)(lVar39 + uVar41 * 4);
      uVar35 = (ulonglong)uVar10;
      if (*(int *)(lVar13 + uVar35) == (int)uVar19) {
        puVar40 = (ulonglong *)(lVar13 + uVar35 + 4);
        puVar23 = (ulonglong *)(((longlong)pcVar5 - (longlong)puVar40) + (longlong)puVar26);
        if (param_2 <= puVar23) {
          puVar23 = param_2;
        }
        puVar27 = puVar26;
        puVar32 = puVar40;
        if (puVar26 < (ulonglong *)((longlong)puVar23 - 7U)) {
          uVar18 = *puVar26 ^ *puVar40;
          if (uVar18 == 0) {
            lVar22 = lVar13 + 0xc + uVar35;
            lVar14 = 0;
            do {
              puVar27 = (ulonglong *)((longlong)unaff_RSI + lVar14 + 0xc);
              if ((ulonglong *)((longlong)puVar23 - 7U) <= puVar27) {
                puVar32 = (ulonglong *)(lVar22 + lVar14);
                goto LAB_00eef099;
              }
              lVar20 = lVar14 + 8;
              uVar35 = *(ulonglong *)((longlong)unaff_RSI + lVar14 + 0xc) ^
                       *(ulonglong *)(lVar22 + lVar14);
              lVar14 = lVar20;
            } while (uVar35 == 0);
            uVar18 = 0;
            if (uVar35 != 0) {
              for (; (uVar35 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
              }
            }
            uVar35 = (uVar18 >> 3) + lVar20;
          }
          else {
            uVar35 = 0;
            if (uVar18 != 0) {
              for (; (uVar18 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
              }
            }
            uVar35 = uVar35 >> 3;
          }
        }
        else {
LAB_00eef099:
          if ((puVar27 < (ulonglong *)((longlong)puVar23 - 3U)) && ((int)*puVar32 == (int)*puVar27))
          {
            puVar27 = (ulonglong *)((longlong)puVar27 + 4);
            puVar32 = (ulonglong *)((longlong)puVar32 + 4);
          }
          if ((puVar27 < (ulonglong *)((longlong)puVar23 - 1U)) &&
             ((short)*puVar32 == (short)*puVar27)) {
            puVar27 = (ulonglong *)((longlong)puVar27 + 2);
            puVar32 = (ulonglong *)((longlong)puVar32 + 2);
          }
          if (puVar27 < puVar23) {
            puVar27 = (ulonglong *)
                      ((longlong)puVar27 + (ulonglong)((char)*puVar32 == (char)*puVar27));
          }
          uVar35 = (longlong)puVar27 - (longlong)puVar26;
        }
        if ((char *)((longlong)puVar40 + uVar35) == pcVar5) {
          puVar23 = (ulonglong *)((longlong)puVar26 + uVar35);
          puVar40 = puVar23;
          puVar27 = puVar4;
          if (puVar23 < puVar1) {
            uVar18 = *puVar23 ^ *puVar4;
            if (uVar18 == 0) {
              lVar22 = 0;
              do {
                puVar40 = (ulonglong *)((longlong)unaff_RSI + lVar22 + uVar35 + 0xc);
                if (puVar1 <= puVar40) {
                  puVar27 = (ulonglong *)(lVar22 + lVar17);
                  goto LAB_00eef172;
                }
                lVar14 = lVar22 + 8;
                uVar18 = *(ulonglong *)((longlong)unaff_RSI + lVar22 + uVar35 + 0xc) ^
                         *(ulonglong *)(lVar17 + lVar22);
                lVar22 = lVar14;
              } while (uVar18 == 0);
              uVar31 = 0;
              if (uVar18 != 0) {
                for (; (uVar18 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
                }
              }
              uVar31 = (uVar31 >> 3) + lVar14;
            }
            else {
              uVar31 = 0;
              if (uVar18 != 0) {
                for (; (uVar18 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
                }
              }
              uVar31 = uVar31 >> 3;
            }
          }
          else {
LAB_00eef172:
            if ((puVar40 < puVar2) && ((int)*puVar27 == (int)*puVar40)) {
              puVar40 = (ulonglong *)((longlong)puVar40 + 4);
              puVar27 = (ulonglong *)((longlong)puVar27 + 4);
            }
            if ((puVar40 < puVar12) && ((short)*puVar27 == (short)*puVar40)) {
              puVar40 = (ulonglong *)((longlong)puVar40 + 2);
              puVar27 = (ulonglong *)((longlong)puVar27 + 2);
            }
            if (puVar40 < param_2) {
              puVar40 = (ulonglong *)
                        ((longlong)puVar40 + (ulonglong)((char)*puVar27 == (char)*puVar40));
            }
            uVar31 = (longlong)puVar40 - (longlong)puVar23;
          }
          uVar35 = uVar35 + uVar31;
        }
        uVar35 = uVar35 + 4;
        if ((uVar25 < uVar35) &&
           (*param_1 = (ulonglong)(iVar29 - uVar10), uVar25 = uVar35,
           (ulonglong *)((longlong)unaff_RSI + uVar35) == param_2)) break;
      }
      uVar35 = uVar25;
      uVar38 = uVar38 + 1;
      uVar41 = uVar41 + 1;
      uVar25 = uVar35;
    } while (uVar38 != uVar34);
  }
LAB_00eef213:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar35;
}


