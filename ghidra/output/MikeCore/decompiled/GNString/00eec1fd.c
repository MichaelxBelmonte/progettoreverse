// Function: FUN_00eec1fd
// Address: 00eec1fd
// Size: 3165 bytes
// Class: GNString


ulonglong FUN_00eec1fd(ulonglong *param_1,ulonglong *param_2)

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
  ulonglong uVar11;
  ulonglong *puVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  byte bVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 uVar21;
  longlong lVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong *puVar27;
  ulonglong *puVar28;
  uint uVar29;
  uint uVar30;
  ulonglong *unaff_RSI;
  int iVar31;
  longlong unaff_RDI;
  char cVar32;
  ulonglong *puVar33;
  undefined1 *puVar34;
  uint uVar35;
  uint uVar36;
  ulonglong uVar37;
  longlong lVar38;
  ulonglong *puVar39;
  int iVar40;
  uint uVar41;
  ulonglong uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 local_138 [16] [16];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar17 = *(longlong *)(unaff_RDI + 8);
  uVar10 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar37 = (longlong)unaff_RSI - lVar17;
  uVar29 = *(uint *)(unaff_RDI + 0x1c);
  uVar36 = (uint)uVar37;
  uVar41 = uVar36 - uVar10;
  if (uVar36 - uVar29 <= uVar10) {
    uVar41 = uVar29;
  }
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar41 = uVar29;
  }
  uVar29 = *(uint *)(unaff_RDI + 0x10c);
  uVar10 = 5;
  if (uVar29 < 5) {
    uVar10 = uVar29;
  }
  iVar40 = 1 << ((byte)uVar10 & 0x1f);
  uVar35 = (int)*unaff_RSI * -0x61c8864f;
  puVar7 = *(undefined8 **)(unaff_RDI + 0xf8);
  uVar25 = (ulonglong)(uVar35 >> (0x22U - *(char *)(puVar7 + 0x21) & 0x1f));
  lVar13 = *(longlong *)(unaff_RDI + 0x70);
  lVar22 = *(longlong *)(unaff_RDI + 0x38);
  uVar10 = *(uint *)(unaff_RDI + 0x18);
  uVar11 = (ulonglong)uVar10;
  uVar21 = *(undefined8 *)(unaff_RDI + 0x60);
  iVar31 = 0;
  if (5 < uVar29) {
    iVar31 = 1 << ((char)uVar29 - 5U & 0x1f);
  }
  uVar29 = (uint)uVar21;
  cVar32 = (char)*(undefined4 *)(unaff_RDI + 0x34);
  if (*(int *)(unaff_RDI + 300) == 0) {
    uVar35 = *(uint *)(unaff_RDI + 0x2c);
    uVar42 = (ulonglong)uVar35;
    bVar18 = 0x18 - cVar32;
    lVar14 = lVar13;
    lVar38 = lVar22;
    bVar9 = bVar18;
    if (0x180 < uVar36 - uVar35) {
      if (uVar35 < 0xffffffa0) {
        uVar19 = uVar42 + 0x5f;
        while( true ) {
          uVar16 = (ulonglong)((uint)uVar42 & 7);
          uVar35 = *(uint *)(unaff_RDI + 0x40 + uVar16 * 4);
          *(uint *)(unaff_RDI + 0x40 + uVar16 * 4) =
               (*(int *)(lVar17 + 8 + uVar42) * -0x61c8864f ^ (uint)uVar21) >> (bVar18 & 0x1f);
          uVar16 = (ulonglong)(uVar35 >> 3 & 0x1fffffe0);
          bVar9 = *(char *)(lVar22 + uVar16) - 1U & 0x1f;
          lVar38 = 0;
          if (bVar9 == 0) {
            lVar38 = 0x1f;
          }
          lVar38 = (ulonglong)bVar9 + lVar38;
          *(char *)(lVar22 + uVar16) = (char)lVar38;
          *(char *)(lVar22 + uVar16 + lVar38) = (char)uVar35;
          *(uint *)(lVar13 + (lVar38 + uVar16) * 4) = (uint)uVar42;
          if (uVar19 == uVar42) break;
          uVar21 = *(undefined8 *)(unaff_RDI + 0x60);
          uVar42 = uVar42 + 1;
        }
        lVar38 = *(longlong *)(unaff_RDI + 0x38);
        lVar14 = *(longlong *)(unaff_RDI + 0x70);
        bVar9 = 0x18 - (char)*(undefined4 *)(unaff_RDI + 0x34);
      }
      uVar42 = (ulonglong)(uVar36 - 0x20);
      uVar35 = 0;
      if (lVar17 + uVar42 <= (longlong)unaff_RSI + 1U) {
        uVar35 = ((int)((longlong)unaff_RSI + 1U) - (int)(lVar17 + uVar42)) + 1;
      }
      uVar30 = 8;
      if (uVar35 < 8) {
        uVar30 = uVar35;
      }
      uVar35 = (uVar30 + uVar36) - 0x20;
      if (uVar36 - 0x20 < uVar35) {
        uVar30 = *(uint *)(unaff_RDI + 0x60);
        uVar19 = uVar42;
        do {
          *(uint *)(unaff_RDI + 0x40 + (ulonglong)((uint)uVar19 & 7) * 4) =
               (*(int *)(lVar17 + uVar19) * -0x61c8864f ^ uVar30) >> (bVar9 & 0x1f);
          uVar19 = uVar19 + 1;
        } while (uVar35 != uVar19);
      }
    }
    if ((uint)uVar42 < uVar36) {
      lVar20 = *(longlong *)(unaff_RDI + 8);
      do {
        uVar19 = (ulonglong)((uint)uVar42 & 7);
        uVar35 = *(uint *)(unaff_RDI + 0x40 + uVar19 * 4);
        *(uint *)(unaff_RDI + 0x40 + uVar19 * 4) =
             (*(int *)(lVar20 + 8 + uVar42) * -0x61c8864f ^ *(uint *)(unaff_RDI + 0x60)) >>
             (bVar9 & 0x1f);
        uVar19 = (ulonglong)(uVar35 >> 3 & 0x1fffffe0);
        bVar8 = *(char *)(lVar38 + uVar19) - 1U & 0x1f;
        lVar26 = 0;
        if (bVar8 == 0) {
          lVar26 = 0x1f;
        }
        lVar26 = (ulonglong)bVar8 + lVar26;
        *(char *)(lVar38 + uVar19) = (char)lVar26;
        *(char *)(lVar38 + uVar19 + lVar26) = (char)uVar35;
        *(uint *)(lVar14 + (lVar26 + uVar19) * 4) = (uint)uVar42;
        uVar42 = uVar42 + 1;
      } while ((uVar37 & 0xffffffff) != uVar42);
    }
    *(uint *)(unaff_RDI + 0x2c) = uVar36;
    uVar35 = *(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar36 & 7) * 4);
    *(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar36 & 7) * 4) =
         (*(int *)((uVar37 & 0xffffffff) + 8 + lVar17) * -0x61c8864f ^ uVar29) >> (bVar18 & 0x1f);
  }
  else {
    uVar35 = (uVar35 ^ uVar29) >> (0x18U - cVar32 & 0x1f);
    *(uint *)(unaff_RDI + 0x2c) = uVar36;
  }
  puVar4 = (ulonglong *)(lVar17 + uVar11);
  *(int *)(unaff_RDI + 0x68) = *(int *)(unaff_RDI + 0x68) + uVar35;
  uVar37 = (ulonglong)(uVar35 >> 3 & 0xffffffe0);
  bVar9 = *(byte *)(lVar22 + uVar37);
  puVar34 = (undefined1 *)(lVar22 + uVar37);
  auVar43 = pshufb(ZEXT416(uVar35),(undefined1  [16])0x0);
  local_138[0] = (undefined1  [16])0x0;
  lVar22 = 0;
  do {
    pcVar5 = puVar34 + lVar22 * 4;
    auVar44[0] = -(*pcVar5 == auVar43[0]);
    auVar44[1] = -(pcVar5[1] == auVar43[1]);
    auVar44[2] = -(pcVar5[2] == auVar43[2]);
    auVar44[3] = -(pcVar5[3] == auVar43[3]);
    auVar44[4] = -(pcVar5[4] == auVar43[4]);
    auVar44[5] = -(pcVar5[5] == auVar43[5]);
    auVar44[6] = -(pcVar5[6] == auVar43[6]);
    auVar44[7] = -(pcVar5[7] == auVar43[7]);
    auVar44[8] = -(pcVar5[8] == auVar43[8]);
    auVar44[9] = -(pcVar5[9] == auVar43[9]);
    auVar44[10] = -(pcVar5[10] == auVar43[10]);
    auVar44[0xb] = -(pcVar5[0xb] == auVar43[0xb]);
    auVar44[0xc] = -(pcVar5[0xc] == auVar43[0xc]);
    auVar44[0xd] = -(pcVar5[0xd] == auVar43[0xd]);
    auVar44[0xe] = -(pcVar5[0xe] == auVar43[0xe]);
    auVar44[0xf] = -(pcVar5[0xf] == auVar43[0xf]);
    *(uint *)(local_138[0] + lVar22) =
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
    lVar22 = lVar22 + 4;
  } while (lVar22 != 8);
  uVar29 = local_138[0]._4_4_ << 0x10 | local_138[0]._0_4_;
  uVar29 = uVar29 >> (bVar9 & 0x1f) | uVar29 << 0x20 - (bVar9 & 0x1f);
  lVar13 = lVar13 + uVar37 * 4;
  lVar22 = 0;
  if (uVar29 != 0) {
    uVar37 = (ulonglong)uVar29;
    lVar38 = 0;
    do {
      lVar14 = 0;
      if (uVar37 != 0) {
        for (; (uVar37 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
        }
      }
      uVar42 = (ulonglong)((int)lVar14 + (uint)bVar9 & 0x1f);
      if (uVar42 != 0) {
        uVar29 = *(uint *)(lVar13 + uVar42 * 4);
        if (uVar29 < uVar41) goto LAB_00eec569;
        *(uint *)(local_138[0] + lVar38 * 4) = uVar29;
        lVar38 = lVar38 + 1;
        iVar40 = iVar40 + -1;
      }
      uVar37 = uVar37 & uVar37 - 1;
      if ((uVar37 == 0) || (iVar40 == 0)) goto LAB_00eec569;
    } while( true );
  }
  lVar38 = 0;
LAB_00eec569:
  uVar37 = (ulonglong)(bVar9 - 1 & 0x1f);
  if (uVar37 == 0) {
    lVar22 = 0x1f;
  }
  lVar22 = lVar22 + uVar37;
  *puVar34 = (char)lVar22;
  puVar34[lVar22] = (char)uVar35;
  iVar6 = *(int *)(unaff_RDI + 0x2c);
  *(int *)(unaff_RDI + 0x2c) = iVar6 + 1;
  *(int *)(lVar13 + lVar22 * 4) = iVar6;
  puVar1 = (ulonglong *)((longlong)param_2 - 7);
  puVar2 = (ulonglong *)((longlong)param_2 - 3);
  puVar12 = (ulonglong *)((longlong)param_2 + -1);
  if (lVar38 == 0) {
    uVar37 = 3;
  }
  else {
    lVar13 = 0;
    uVar42 = 3;
    do {
      uVar29 = *(uint *)(local_138[0] + lVar13 * 4);
      puVar27 = (ulonglong *)(lVar17 + (ulonglong)uVar29);
      if (*(int *)((uVar42 - 3) + (longlong)puVar27) == *(int *)((longlong)unaff_RSI + (uVar42 - 3))
         ) {
        puVar23 = unaff_RSI;
        if (unaff_RSI < puVar1) {
          uVar19 = *unaff_RSI ^ *puVar27;
          if (uVar19 == 0) {
            lVar22 = lVar17 + 8 + (ulonglong)uVar29;
            lVar14 = 0;
            do {
              puVar23 = (ulonglong *)((longlong)unaff_RSI + lVar14 + 8);
              if (puVar1 <= puVar23) {
                puVar27 = (ulonglong *)(lVar22 + lVar14);
                goto LAB_00eec61a;
              }
              lVar20 = lVar14 + 8;
              uVar37 = *(ulonglong *)((longlong)unaff_RSI + lVar14 + 8) ^
                       *(ulonglong *)(lVar22 + lVar14);
              lVar14 = lVar20;
            } while (uVar37 == 0);
            uVar19 = 0;
            if (uVar37 != 0) {
              for (; (uVar37 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
              }
            }
            uVar37 = (uVar19 >> 3) + lVar20;
          }
          else {
            uVar37 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
              }
            }
            uVar37 = uVar37 >> 3;
          }
        }
        else {
LAB_00eec61a:
          if ((puVar23 < puVar2) && ((int)*puVar27 == (int)*puVar23)) {
            puVar23 = (ulonglong *)((longlong)puVar23 + 4);
            puVar27 = (ulonglong *)((longlong)puVar27 + 4);
          }
          if ((puVar23 < puVar12) && ((short)*puVar27 == (short)*puVar23)) {
            puVar23 = (ulonglong *)((longlong)puVar23 + 2);
            puVar27 = (ulonglong *)((longlong)puVar27 + 2);
          }
          if (puVar23 < param_2) {
            puVar23 = (ulonglong *)
                      ((longlong)puVar23 + (ulonglong)((char)*puVar27 == (char)*puVar23));
          }
          uVar37 = (longlong)puVar23 - (longlong)unaff_RSI;
        }
        if ((uVar42 < uVar37) &&
           (*param_1 = (ulonglong)((uVar36 + 3) - uVar29), uVar42 = uVar37,
           (ulonglong *)((longlong)unaff_RSI + uVar37) == param_2)) break;
      }
      uVar37 = uVar42;
      lVar13 = lVar13 + 1;
      uVar42 = uVar37;
    } while (lVar13 != lVar38);
  }
  puVar27 = (ulonglong *)((longlong)unaff_RSI + 4);
  pcVar5 = (char *)*puVar7;
  lVar13 = puVar7[1];
  lVar22 = puVar7[0xe];
  lVar38 = 0;
  do {
    lVar38 = lVar38 + 1;
  } while (lVar38 != 3);
  uVar41 = iVar40 + iVar31;
  uVar29 = 3;
  if (uVar41 < 3) {
    uVar29 = uVar41;
  }
  uVar35 = *(uint *)(lVar22 + (uVar25 << 4 | 0xc));
  uVar42 = (ulonglong)(uVar35 >> 8);
  lVar38 = puVar7[0x10];
  iVar31 = (((int)pcVar5 - (int)lVar13) - uVar10) + uVar36 + 3;
  if (uVar29 != 0) {
    lVar14 = uVar11 + lVar17 + 8;
    uVar19 = 0;
    do {
      uVar10 = *(uint *)(lVar22 + (uVar19 + uVar25 * 4) * 4);
      uVar16 = (ulonglong)uVar10;
      if (uVar16 == 0) goto LAB_00eeccbc;
      if (*(int *)(lVar13 + uVar16) == (int)*unaff_RSI) {
        puVar39 = (ulonglong *)((int *)(lVar13 + uVar16) + 1);
        puVar23 = (ulonglong *)(((longlong)pcVar5 - (longlong)puVar39) + (longlong)puVar27);
        if (param_2 <= puVar23) {
          puVar23 = param_2;
        }
        puVar28 = puVar27;
        puVar33 = puVar39;
        if (puVar27 < (ulonglong *)((longlong)puVar23 - 7U)) {
          uVar15 = *puVar27 ^ *puVar39;
          if (uVar15 == 0) {
            lVar20 = lVar13 + 0xc + uVar16;
            lVar26 = 0;
            do {
              puVar28 = (ulonglong *)((longlong)unaff_RSI + lVar26 + 0xc);
              if ((ulonglong *)((longlong)puVar23 - 7U) <= puVar28) {
                puVar33 = (ulonglong *)(lVar20 + lVar26);
                goto LAB_00eec8a1;
              }
              lVar3 = lVar26 + 8;
              uVar16 = *(ulonglong *)((longlong)unaff_RSI + lVar26 + 0xc) ^
                       *(ulonglong *)(lVar20 + lVar26);
              lVar26 = lVar3;
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
LAB_00eec8a1:
          if ((puVar28 < (ulonglong *)((longlong)puVar23 - 3U)) && ((int)*puVar33 == (int)*puVar28))
          {
            puVar28 = (ulonglong *)((longlong)puVar28 + 4);
            puVar33 = (ulonglong *)((longlong)puVar33 + 4);
          }
          if ((puVar28 < (ulonglong *)((longlong)puVar23 - 1U)) &&
             ((short)*puVar33 == (short)*puVar28)) {
            puVar28 = (ulonglong *)((longlong)puVar28 + 2);
            puVar33 = (ulonglong *)((longlong)puVar33 + 2);
          }
          if (puVar28 < puVar23) {
            puVar28 = (ulonglong *)
                      ((longlong)puVar28 + (ulonglong)((char)*puVar33 == (char)*puVar28));
          }
          uVar16 = (longlong)puVar28 - (longlong)puVar27;
        }
        if ((char *)((longlong)puVar39 + uVar16) == pcVar5) {
          puVar23 = (ulonglong *)((longlong)puVar27 + uVar16);
          puVar28 = puVar4;
          puVar39 = puVar23;
          if (puVar23 < puVar1) {
            uVar15 = *puVar23 ^ *puVar4;
            if (uVar15 == 0) {
              lVar20 = 0;
              do {
                puVar39 = (ulonglong *)((longlong)unaff_RSI + lVar20 + uVar16 + 0xc);
                if (puVar1 <= puVar39) {
                  puVar28 = (ulonglong *)(lVar20 + lVar14);
                  goto LAB_00eec98f;
                }
                lVar26 = lVar20 + 8;
                uVar15 = *(ulonglong *)((longlong)unaff_RSI + lVar20 + uVar16 + 0xc) ^
                         *(ulonglong *)(lVar14 + lVar20);
                lVar20 = lVar26;
              } while (uVar15 == 0);
              uVar24 = 0;
              if (uVar15 != 0) {
                for (; (uVar15 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
                }
              }
              uVar24 = (uVar24 >> 3) + lVar26;
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
LAB_00eec98f:
            if ((puVar39 < puVar2) && ((int)*puVar28 == (int)*puVar39)) {
              puVar39 = (ulonglong *)((longlong)puVar39 + 4);
              puVar28 = (ulonglong *)((longlong)puVar28 + 4);
            }
            if ((puVar39 < puVar12) && ((short)*puVar28 == (short)*puVar39)) {
              puVar39 = (ulonglong *)((longlong)puVar39 + 2);
              puVar28 = (ulonglong *)((longlong)puVar28 + 2);
            }
            if (puVar39 < param_2) {
              puVar39 = (ulonglong *)
                        ((longlong)puVar39 + (ulonglong)((char)*puVar28 == (char)*puVar39));
            }
            uVar24 = (longlong)puVar39 - (longlong)puVar23;
          }
          uVar16 = uVar16 + uVar24;
        }
        uVar16 = uVar16 + 4;
        if ((uVar37 < uVar16) &&
           (*param_1 = (ulonglong)(iVar31 - uVar10), uVar37 = uVar16,
           (ulonglong *)((longlong)unaff_RSI + uVar16) == param_2)) goto LAB_00eeccbc;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar29);
  }
  uVar41 = uVar41 - uVar29;
  if ((uVar35 & 0xff) < uVar41) {
    uVar41 = uVar35 & 0xff;
  }
  if (uVar41 != 0) {
    uVar25 = 0;
    do {
      uVar25 = uVar25 + 1;
    } while (uVar41 != uVar25);
    uVar25 = *unaff_RSI;
    lVar17 = lVar17 + uVar11 + 8;
    uVar29 = 0;
    uVar11 = uVar37;
    do {
      uVar10 = *(uint *)(lVar38 + uVar42 * 4);
      uVar37 = (ulonglong)uVar10;
      if (*(int *)(lVar13 + uVar37) == (int)uVar25) {
        puVar39 = (ulonglong *)(lVar13 + uVar37 + 4);
        puVar23 = (ulonglong *)(((longlong)pcVar5 - (longlong)puVar39) + (longlong)puVar27);
        if (param_2 <= puVar23) {
          puVar23 = param_2;
        }
        puVar28 = puVar27;
        puVar33 = puVar39;
        if (puVar27 < (ulonglong *)((longlong)puVar23 - 7U)) {
          uVar19 = *puVar27 ^ *puVar39;
          if (uVar19 == 0) {
            lVar22 = lVar13 + 0xc + uVar37;
            lVar14 = 0;
            do {
              puVar28 = (ulonglong *)((longlong)unaff_RSI + lVar14 + 0xc);
              if ((ulonglong *)((longlong)puVar23 - 7U) <= puVar28) {
                puVar33 = (ulonglong *)(lVar22 + lVar14);
                goto LAB_00eecb3f;
              }
              lVar20 = lVar14 + 8;
              uVar37 = *(ulonglong *)((longlong)unaff_RSI + lVar14 + 0xc) ^
                       *(ulonglong *)(lVar22 + lVar14);
              lVar14 = lVar20;
            } while (uVar37 == 0);
            uVar19 = 0;
            if (uVar37 != 0) {
              for (; (uVar37 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
              }
            }
            uVar37 = (uVar19 >> 3) + lVar20;
          }
          else {
            uVar37 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
              }
            }
            uVar37 = uVar37 >> 3;
          }
        }
        else {
LAB_00eecb3f:
          if ((puVar28 < (ulonglong *)((longlong)puVar23 - 3U)) && ((int)*puVar33 == (int)*puVar28))
          {
            puVar28 = (ulonglong *)((longlong)puVar28 + 4);
            puVar33 = (ulonglong *)((longlong)puVar33 + 4);
          }
          if ((puVar28 < (ulonglong *)((longlong)puVar23 - 1U)) &&
             ((short)*puVar33 == (short)*puVar28)) {
            puVar28 = (ulonglong *)((longlong)puVar28 + 2);
            puVar33 = (ulonglong *)((longlong)puVar33 + 2);
          }
          if (puVar28 < puVar23) {
            puVar28 = (ulonglong *)
                      ((longlong)puVar28 + (ulonglong)((char)*puVar33 == (char)*puVar28));
          }
          uVar37 = (longlong)puVar28 - (longlong)puVar27;
        }
        if ((char *)((longlong)puVar39 + uVar37) == pcVar5) {
          puVar23 = (ulonglong *)((longlong)puVar27 + uVar37);
          puVar39 = puVar23;
          puVar28 = puVar4;
          if (puVar23 < puVar1) {
            uVar19 = *puVar23 ^ *puVar4;
            if (uVar19 == 0) {
              lVar22 = 0;
              do {
                puVar39 = (ulonglong *)((longlong)unaff_RSI + lVar22 + uVar37 + 0xc);
                if (puVar1 <= puVar39) {
                  puVar28 = (ulonglong *)(lVar22 + lVar17);
                  goto LAB_00eecc1b;
                }
                lVar14 = lVar22 + 8;
                uVar19 = *(ulonglong *)((longlong)unaff_RSI + lVar22 + uVar37 + 0xc) ^
                         *(ulonglong *)(lVar17 + lVar22);
                lVar22 = lVar14;
              } while (uVar19 == 0);
              uVar16 = 0;
              if (uVar19 != 0) {
                for (; (uVar19 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
                }
              }
              uVar16 = (uVar16 >> 3) + lVar14;
            }
            else {
              uVar16 = 0;
              if (uVar19 != 0) {
                for (; (uVar19 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
                }
              }
              uVar16 = uVar16 >> 3;
            }
          }
          else {
LAB_00eecc1b:
            if ((puVar39 < puVar2) && ((int)*puVar28 == (int)*puVar39)) {
              puVar39 = (ulonglong *)((longlong)puVar39 + 4);
              puVar28 = (ulonglong *)((longlong)puVar28 + 4);
            }
            if ((puVar39 < puVar12) && ((short)*puVar28 == (short)*puVar39)) {
              puVar39 = (ulonglong *)((longlong)puVar39 + 2);
              puVar28 = (ulonglong *)((longlong)puVar28 + 2);
            }
            if (puVar39 < param_2) {
              puVar39 = (ulonglong *)
                        ((longlong)puVar39 + (ulonglong)((char)*puVar28 == (char)*puVar39));
            }
            uVar16 = (longlong)puVar39 - (longlong)puVar23;
          }
          uVar37 = uVar37 + uVar16;
        }
        uVar37 = uVar37 + 4;
        if ((uVar11 < uVar37) &&
           (*param_1 = (ulonglong)(iVar31 - uVar10), uVar11 = uVar37,
           (ulonglong *)((longlong)unaff_RSI + uVar37) == param_2)) break;
      }
      uVar37 = uVar11;
      uVar29 = uVar29 + 1;
      uVar42 = uVar42 + 1;
      uVar11 = uVar37;
    } while (uVar29 != uVar41);
  }
LAB_00eeccbc:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar37;
}


