// Function: FUN_00eeb611
// Address: 00eeb611
// Size: 3052 bytes
// Class: GNString


ulonglong FUN_00eeb611(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  char *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  byte bVar8;
  byte bVar9;
  ushort uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 uVar19;
  ulonglong *puVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong *puVar26;
  byte bVar27;
  uint uVar28;
  ulonglong *unaff_RSI;
  longlong lVar29;
  ulonglong *puVar30;
  longlong unaff_RDI;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong *puVar33;
  char cVar34;
  uint uVar35;
  ulonglong uVar36;
  ulonglong *puVar37;
  uint uVar38;
  ulonglong uVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  longlong lVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  uint auStack_138 [64];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar16 = *(longlong *)(unaff_RDI + 8);
  uVar11 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar36 = (longlong)unaff_RSI - lVar16;
  uVar41 = *(uint *)(unaff_RDI + 0x1c);
  uVar35 = (uint)uVar36;
  uVar42 = uVar35 - uVar11;
  if (uVar35 - uVar41 <= uVar11) {
    uVar42 = uVar41;
  }
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar42 = uVar41;
  }
  uVar41 = *(uint *)(unaff_RDI + 0x10c);
  uVar11 = 4;
  if (uVar41 < 4) {
    uVar11 = uVar41;
  }
  iVar40 = 1 << ((byte)uVar11 & 0x1f);
  uVar38 = (int)*unaff_RSI * -0x61c8864f;
  puVar7 = *(undefined8 **)(unaff_RDI + 0xf8);
  uVar22 = (ulonglong)(uVar38 >> (0x22U - *(char *)(puVar7 + 0x21) & 0x1f));
  lVar18 = *(longlong *)(unaff_RDI + 0x70);
  lVar32 = *(longlong *)(unaff_RDI + 0x38);
  uVar11 = *(uint *)(unaff_RDI + 0x18);
  uVar17 = (ulonglong)uVar11;
  uVar19 = *(undefined8 *)(unaff_RDI + 0x60);
  iVar23 = 0;
  if (4 < uVar41) {
    iVar23 = 1 << ((char)uVar41 - 4U & 0x1f);
  }
  uVar41 = (uint)uVar19;
  cVar34 = (char)*(undefined4 *)(unaff_RDI + 0x34);
  if (*(int *)(unaff_RDI + 300) == 0) {
    uVar38 = *(uint *)(unaff_RDI + 0x2c);
    uVar12 = (ulonglong)uVar38;
    bVar27 = 0x18 - cVar34;
    lVar29 = lVar32;
    lVar43 = lVar18;
    bVar9 = bVar27;
    if (0x180 < uVar35 - uVar38) {
      if (uVar38 < 0xffffffa0) {
        uVar13 = uVar12 + 0x5f;
        while( true ) {
          uVar39 = (ulonglong)((uint)uVar12 & 7);
          uVar38 = *(uint *)(unaff_RDI + 0x40 + uVar39 * 4);
          *(uint *)(unaff_RDI + 0x40 + uVar39 * 4) =
               (*(int *)(lVar16 + 8 + uVar12) * -0x61c8864f ^ (uint)uVar19) >> (bVar27 & 0x1f);
          uVar39 = (ulonglong)(uVar38 >> 4 & 0xffffff0);
          bVar9 = *(char *)(lVar32 + uVar39) - 1U & 0xf;
          lVar29 = 0;
          if (bVar9 == 0) {
            lVar29 = 0xf;
          }
          lVar29 = (ulonglong)bVar9 + lVar29;
          *(char *)(lVar32 + uVar39) = (char)lVar29;
          *(char *)(lVar32 + uVar39 + lVar29) = (char)uVar38;
          *(uint *)(lVar18 + (lVar29 + uVar39) * 4) = (uint)uVar12;
          if (uVar13 == uVar12) break;
          uVar19 = *(undefined8 *)(unaff_RDI + 0x60);
          uVar12 = uVar12 + 1;
        }
        lVar29 = *(longlong *)(unaff_RDI + 0x38);
        lVar43 = *(longlong *)(unaff_RDI + 0x70);
        bVar9 = 0x18 - (char)*(undefined4 *)(unaff_RDI + 0x34);
      }
      uVar12 = (ulonglong)(uVar35 - 0x20);
      uVar38 = 0;
      if (lVar16 + uVar12 <= (longlong)unaff_RSI + 1U) {
        uVar38 = ((int)((longlong)unaff_RSI + 1U) - (int)(lVar16 + uVar12)) + 1;
      }
      uVar28 = 8;
      if (uVar38 < 8) {
        uVar28 = uVar38;
      }
      uVar38 = (uVar28 + uVar35) - 0x20;
      if (uVar35 - 0x20 < uVar38) {
        uVar28 = *(uint *)(unaff_RDI + 0x60);
        uVar13 = uVar12;
        do {
          *(uint *)(unaff_RDI + 0x40 + (ulonglong)((uint)uVar13 & 7) * 4) =
               (*(int *)(lVar16 + uVar13) * -0x61c8864f ^ uVar28) >> (bVar9 & 0x1f);
          uVar13 = uVar13 + 1;
        } while (uVar38 != uVar13);
      }
    }
    if ((uint)uVar12 < uVar35) {
      lVar25 = *(longlong *)(unaff_RDI + 8);
      do {
        uVar13 = (ulonglong)((uint)uVar12 & 7);
        uVar38 = *(uint *)(unaff_RDI + 0x40 + uVar13 * 4);
        *(uint *)(unaff_RDI + 0x40 + uVar13 * 4) =
             (*(int *)(lVar25 + 8 + uVar12) * -0x61c8864f ^ *(uint *)(unaff_RDI + 0x60)) >>
             (bVar9 & 0x1f);
        uVar13 = (ulonglong)(uVar38 >> 4 & 0xffffff0);
        bVar8 = *(char *)(lVar29 + uVar13) - 1U & 0xf;
        lVar24 = 0;
        if (bVar8 == 0) {
          lVar24 = 0xf;
        }
        lVar24 = (ulonglong)bVar8 + lVar24;
        *(char *)(lVar29 + uVar13) = (char)lVar24;
        *(char *)(lVar29 + uVar13 + lVar24) = (char)uVar38;
        *(uint *)(lVar43 + (lVar24 + uVar13) * 4) = (uint)uVar12;
        uVar12 = uVar12 + 1;
      } while ((uVar36 & 0xffffffff) != uVar12);
    }
    *(uint *)(unaff_RDI + 0x2c) = uVar35;
    uVar38 = *(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar35 & 7) * 4);
    *(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar35 & 7) * 4) =
         (*(int *)((uVar36 & 0xffffffff) + 8 + lVar16) * -0x61c8864f ^ uVar41) >> (bVar27 & 0x1f);
  }
  else {
    uVar38 = (uVar38 ^ uVar41) >> (0x18U - cVar34 & 0x1f);
    *(uint *)(unaff_RDI + 0x2c) = uVar35;
  }
  *(int *)(unaff_RDI + 0x68) = *(int *)(unaff_RDI + 0x68) + uVar38;
  uVar36 = (ulonglong)(uVar38 >> 4 & 0xfffffff0);
  bVar9 = *(byte *)(lVar32 + uVar36);
  auVar44 = pshufb(ZEXT416(uVar38),(undefined1  [16])0x0);
  pcVar5 = (char *)(lVar32 + uVar36);
  auVar45[0] = -(*pcVar5 == auVar44[0]);
  auVar45[1] = -(pcVar5[1] == auVar44[1]);
  auVar45[2] = -(pcVar5[2] == auVar44[2]);
  auVar45[3] = -(pcVar5[3] == auVar44[3]);
  auVar45[4] = -(pcVar5[4] == auVar44[4]);
  auVar45[5] = -(pcVar5[5] == auVar44[5]);
  auVar45[6] = -(pcVar5[6] == auVar44[6]);
  auVar45[7] = -(pcVar5[7] == auVar44[7]);
  auVar45[8] = -(pcVar5[8] == auVar44[8]);
  auVar45[9] = -(pcVar5[9] == auVar44[9]);
  auVar45[10] = -(pcVar5[10] == auVar44[10]);
  auVar45[0xb] = -(pcVar5[0xb] == auVar44[0xb]);
  auVar45[0xc] = -(pcVar5[0xc] == auVar44[0xc]);
  auVar45[0xd] = -(pcVar5[0xd] == auVar44[0xd]);
  auVar45[0xe] = -(pcVar5[0xe] == auVar44[0xe]);
  auVar45[0xf] = -(pcVar5[0xf] == auVar44[0xf]);
  uVar10 = (ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe | (ushort)(auVar45[0xf] >> 7) << 0xf;
  uVar10 = uVar10 >> (bVar9 & 0xf) | uVar10 << 0x10 - (bVar9 & 0xf);
  lVar18 = lVar18 + uVar36 * 4;
  lVar29 = 0;
  if (uVar10 != 0) {
    uVar12 = (ulonglong)uVar10;
    lVar43 = 0;
    do {
      lVar25 = 0;
      if (uVar12 != 0) {
        for (; (uVar12 >> lVar25 & 1) == 0; lVar25 = lVar25 + 1) {
        }
      }
      uVar13 = (ulonglong)((int)lVar25 + (uint)bVar9 & 0xf);
      if (uVar13 != 0) {
        uVar41 = *(uint *)(lVar18 + uVar13 * 4);
        if (uVar41 < uVar42) goto LAB_00eeb905;
        auStack_138[lVar43] = uVar41;
        lVar43 = lVar43 + 1;
        iVar40 = iVar40 + -1;
      }
      uVar12 = uVar12 & uVar12 - 1;
      if ((uVar12 == 0) || (iVar40 == 0)) goto LAB_00eeb905;
    } while( true );
  }
  lVar43 = 0;
LAB_00eeb905:
  uVar12 = (ulonglong)(bVar9 - 1 & 0xf);
  if (uVar12 == 0) {
    lVar29 = 0xf;
  }
  lVar29 = lVar29 + uVar12;
  *(undefined1 *)(lVar32 + uVar36) = (char)lVar29;
  ((undefined1 *)(lVar32 + uVar36))[lVar29] = (char)uVar38;
  iVar6 = *(int *)(unaff_RDI + 0x2c);
  *(int *)(unaff_RDI + 0x2c) = iVar6 + 1;
  *(int *)(lVar18 + lVar29 * 4) = iVar6;
  puVar1 = (ulonglong *)((longlong)param_2 - 7);
  puVar2 = (ulonglong *)((longlong)param_2 - 3);
  puVar3 = (ulonglong *)((longlong)param_2 - 1);
  if (lVar43 == 0) {
    uVar36 = 3;
  }
  else {
    lVar18 = 0;
    uVar12 = 3;
    do {
      uVar41 = auStack_138[lVar18];
      puVar20 = (ulonglong *)(lVar16 + (ulonglong)uVar41);
      if (*(int *)((uVar12 - 3) + (longlong)puVar20) == *(int *)((longlong)unaff_RSI + (uVar12 - 3))
         ) {
        puVar30 = unaff_RSI;
        if (unaff_RSI < puVar1) {
          uVar13 = *unaff_RSI ^ *puVar20;
          if (uVar13 == 0) {
            lVar32 = lVar16 + 8 + (ulonglong)uVar41;
            lVar29 = 0;
            do {
              puVar30 = (ulonglong *)((longlong)unaff_RSI + lVar29 + 8);
              if (puVar1 <= puVar30) {
                puVar20 = (ulonglong *)(lVar32 + lVar29);
                goto LAB_00eeb9bb;
              }
              lVar25 = lVar29 + 8;
              uVar36 = *(ulonglong *)((longlong)unaff_RSI + lVar29 + 8) ^
                       *(ulonglong *)(lVar32 + lVar29);
              lVar29 = lVar25;
            } while (uVar36 == 0);
            uVar13 = 0;
            if (uVar36 != 0) {
              for (; (uVar36 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
              }
            }
            uVar36 = (uVar13 >> 3) + lVar25;
          }
          else {
            uVar36 = 0;
            if (uVar13 != 0) {
              for (; (uVar13 >> uVar36 & 1) == 0; uVar36 = uVar36 + 1) {
              }
            }
            uVar36 = uVar36 >> 3;
          }
        }
        else {
LAB_00eeb9bb:
          if ((puVar30 < puVar2) && ((int)*puVar20 == (int)*puVar30)) {
            puVar30 = (ulonglong *)((longlong)puVar30 + 4);
            puVar20 = (ulonglong *)((longlong)puVar20 + 4);
          }
          if ((puVar30 < puVar3) && ((short)*puVar20 == (short)*puVar30)) {
            puVar30 = (ulonglong *)((longlong)puVar30 + 2);
            puVar20 = (ulonglong *)((longlong)puVar20 + 2);
          }
          if (puVar30 < param_2) {
            puVar30 = (ulonglong *)
                      ((longlong)puVar30 + (ulonglong)((char)*puVar20 == (char)*puVar30));
          }
          uVar36 = (longlong)puVar30 - (longlong)unaff_RSI;
        }
        if ((uVar12 < uVar36) &&
           (*param_1 = (ulonglong)((uVar35 + 3) - uVar41), uVar12 = uVar36,
           (ulonglong *)((longlong)unaff_RSI + uVar36) == param_2)) break;
      }
      uVar36 = uVar12;
      lVar18 = lVar18 + 1;
      uVar12 = uVar36;
    } while (lVar18 != lVar43);
  }
  puVar30 = (ulonglong *)(lVar16 + uVar17);
  puVar20 = (ulonglong *)((longlong)unaff_RSI + 4);
  pcVar5 = (char *)*puVar7;
  lVar18 = puVar7[1];
  lVar32 = puVar7[0xe];
  lVar29 = 0;
  do {
    lVar29 = lVar29 + 1;
  } while (lVar29 != 3);
  uVar41 = iVar40 + iVar23;
  uVar12 = 3;
  if (uVar41 < 3) {
    uVar12 = (ulonglong)uVar41;
  }
  uVar42 = *(uint *)(lVar32 + (uVar22 << 4 | 0xc));
  uVar13 = (ulonglong)(uVar42 >> 8);
  lVar29 = puVar7[0x10];
  iVar23 = (((int)pcVar5 - (int)lVar18) - uVar11) + uVar35 + 3;
  if ((int)uVar12 != 0) {
    lVar43 = lVar16 + uVar17 + 8;
    uVar39 = 0;
    do {
      uVar11 = *(uint *)(lVar32 + (uVar22 * 4 + uVar39) * 4);
      uVar15 = (ulonglong)uVar11;
      if (uVar15 == 0) goto LAB_00eec06d;
      if (*(int *)(lVar18 + uVar15) == (int)*unaff_RSI) {
        puVar37 = (ulonglong *)((int *)(lVar18 + uVar15) + 1);
        puVar21 = (ulonglong *)(((longlong)pcVar5 - (longlong)puVar37) + (longlong)puVar20);
        if (param_2 <= puVar21) {
          puVar21 = param_2;
        }
        puVar33 = puVar20;
        puVar26 = puVar37;
        if (puVar20 < (ulonglong *)((longlong)puVar21 - 7U)) {
          uVar14 = *puVar20 ^ *puVar37;
          if (uVar14 == 0) {
            lVar25 = lVar18 + 0xc + uVar15;
            lVar24 = 0;
            do {
              puVar33 = (ulonglong *)((longlong)unaff_RSI + lVar24 + 0xc);
              if ((ulonglong *)((longlong)puVar21 - 7U) <= puVar33) {
                puVar26 = (ulonglong *)(lVar25 + lVar24);
                goto LAB_00eebc4c;
              }
              lVar4 = lVar24 + 8;
              uVar15 = *(ulonglong *)((longlong)unaff_RSI + lVar24 + 0xc) ^
                       *(ulonglong *)(lVar25 + lVar24);
              lVar24 = lVar4;
            } while (uVar15 == 0);
            uVar14 = 0;
            if (uVar15 != 0) {
              for (; (uVar15 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
              }
            }
            uVar15 = (uVar14 >> 3) + lVar4;
          }
          else {
            uVar15 = 0;
            if (uVar14 != 0) {
              for (; (uVar14 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
              }
            }
            uVar15 = uVar15 >> 3;
          }
        }
        else {
LAB_00eebc4c:
          if ((puVar33 < (ulonglong *)((longlong)puVar21 - 3U)) && ((int)*puVar26 == (int)*puVar33))
          {
            puVar33 = (ulonglong *)((longlong)puVar33 + 4);
            puVar26 = (ulonglong *)((longlong)puVar26 + 4);
          }
          if ((puVar33 < (ulonglong *)((longlong)puVar21 - 1U)) &&
             ((short)*puVar26 == (short)*puVar33)) {
            puVar33 = (ulonglong *)((longlong)puVar33 + 2);
            puVar26 = (ulonglong *)((longlong)puVar26 + 2);
          }
          if (puVar33 < puVar21) {
            puVar33 = (ulonglong *)
                      ((longlong)puVar33 + (ulonglong)((char)*puVar26 == (char)*puVar33));
          }
          uVar15 = (longlong)puVar33 - (longlong)puVar20;
        }
        if ((char *)((longlong)puVar37 + uVar15) == pcVar5) {
          puVar21 = (ulonglong *)((longlong)puVar20 + uVar15);
          puVar33 = puVar30;
          puVar37 = puVar21;
          if (puVar21 < puVar1) {
            uVar14 = *puVar21 ^ *puVar30;
            if (uVar14 == 0) {
              lVar25 = 0;
              do {
                puVar37 = (ulonglong *)((longlong)unaff_RSI + lVar25 + uVar15 + 0xc);
                if (puVar1 <= puVar37) {
                  puVar33 = (ulonglong *)(lVar25 + lVar43);
                  goto LAB_00eebd22;
                }
                lVar24 = lVar25 + 8;
                uVar14 = *(ulonglong *)((longlong)unaff_RSI + lVar25 + uVar15 + 0xc) ^
                         *(ulonglong *)(lVar43 + lVar25);
                lVar25 = lVar24;
              } while (uVar14 == 0);
              uVar31 = 0;
              if (uVar14 != 0) {
                for (; (uVar14 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
                }
              }
              uVar31 = (uVar31 >> 3) + lVar24;
            }
            else {
              uVar31 = 0;
              if (uVar14 != 0) {
                for (; (uVar14 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
                }
              }
              uVar31 = uVar31 >> 3;
            }
          }
          else {
LAB_00eebd22:
            if ((puVar37 < puVar2) && ((int)*puVar33 == (int)*puVar37)) {
              puVar37 = (ulonglong *)((longlong)puVar37 + 4);
              puVar33 = (ulonglong *)((longlong)puVar33 + 4);
            }
            if ((puVar37 < puVar3) && ((short)*puVar33 == (short)*puVar37)) {
              puVar37 = (ulonglong *)((longlong)puVar37 + 2);
              puVar33 = (ulonglong *)((longlong)puVar33 + 2);
            }
            if (puVar37 < param_2) {
              puVar37 = (ulonglong *)
                        ((longlong)puVar37 + (ulonglong)((char)*puVar33 == (char)*puVar37));
            }
            uVar31 = (longlong)puVar37 - (longlong)puVar21;
          }
          uVar15 = uVar15 + uVar31;
        }
        uVar15 = uVar15 + 4;
        if ((uVar36 < uVar15) &&
           (*param_1 = (ulonglong)(iVar23 - uVar11), uVar36 = uVar15,
           (ulonglong *)((longlong)unaff_RSI + uVar15) == param_2)) goto LAB_00eec06d;
      }
      uVar39 = uVar39 + 1;
    } while (uVar39 != uVar12);
  }
  uVar41 = uVar41 - (int)uVar12;
  if ((uVar42 & 0xff) < uVar41) {
    uVar41 = uVar42 & 0xff;
  }
  if (uVar41 != 0) {
    uVar22 = 0;
    do {
      uVar22 = uVar22 + 1;
    } while (uVar41 != uVar22);
    uVar22 = *unaff_RSI;
    lVar16 = lVar16 + uVar17 + 8;
    uVar42 = 0;
    uVar17 = uVar36;
    do {
      uVar11 = *(uint *)(lVar29 + uVar13 * 4);
      uVar36 = (ulonglong)uVar11;
      if (*(int *)(lVar18 + uVar36) == (int)uVar22) {
        puVar37 = (ulonglong *)(lVar18 + uVar36 + 4);
        puVar21 = (ulonglong *)(((longlong)pcVar5 - (longlong)puVar37) + (longlong)puVar20);
        if (param_2 <= puVar21) {
          puVar21 = param_2;
        }
        puVar33 = puVar20;
        puVar26 = puVar37;
        if (puVar20 < (ulonglong *)((longlong)puVar21 - 7U)) {
          uVar12 = *puVar20 ^ *puVar37;
          if (uVar12 == 0) {
            lVar32 = lVar18 + 0xc + uVar36;
            lVar43 = 0;
            do {
              puVar33 = (ulonglong *)((longlong)unaff_RSI + lVar43 + 0xc);
              if ((ulonglong *)((longlong)puVar21 - 7U) <= puVar33) {
                puVar26 = (ulonglong *)(lVar32 + lVar43);
                goto LAB_00eebeeb;
              }
              lVar25 = lVar43 + 8;
              uVar36 = *(ulonglong *)((longlong)unaff_RSI + lVar43 + 0xc) ^
                       *(ulonglong *)(lVar32 + lVar43);
              lVar43 = lVar25;
            } while (uVar36 == 0);
            uVar12 = 0;
            if (uVar36 != 0) {
              for (; (uVar36 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
              }
            }
            uVar36 = (uVar12 >> 3) + lVar25;
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
LAB_00eebeeb:
          if ((puVar33 < (ulonglong *)((longlong)puVar21 - 3U)) && ((int)*puVar26 == (int)*puVar33))
          {
            puVar33 = (ulonglong *)((longlong)puVar33 + 4);
            puVar26 = (ulonglong *)((longlong)puVar26 + 4);
          }
          if ((puVar33 < (ulonglong *)((longlong)puVar21 - 1U)) &&
             ((short)*puVar26 == (short)*puVar33)) {
            puVar33 = (ulonglong *)((longlong)puVar33 + 2);
            puVar26 = (ulonglong *)((longlong)puVar26 + 2);
          }
          if (puVar33 < puVar21) {
            puVar33 = (ulonglong *)
                      ((longlong)puVar33 + (ulonglong)((char)*puVar26 == (char)*puVar33));
          }
          uVar36 = (longlong)puVar33 - (longlong)puVar20;
        }
        if ((char *)((longlong)puVar37 + uVar36) == pcVar5) {
          puVar21 = (ulonglong *)((longlong)puVar20 + uVar36);
          puVar37 = puVar21;
          puVar33 = puVar30;
          if (puVar21 < puVar1) {
            uVar12 = *puVar21 ^ *puVar30;
            if (uVar12 == 0) {
              lVar32 = 0;
              do {
                puVar37 = (ulonglong *)((longlong)unaff_RSI + lVar32 + uVar36 + 0xc);
                if (puVar1 <= puVar37) {
                  puVar33 = (ulonglong *)(lVar32 + lVar16);
                  goto LAB_00eebfd3;
                }
                lVar43 = lVar32 + 8;
                uVar12 = *(ulonglong *)((longlong)unaff_RSI + lVar32 + uVar36 + 0xc) ^
                         *(ulonglong *)(lVar16 + lVar32);
                lVar32 = lVar43;
              } while (uVar12 == 0);
              uVar39 = 0;
              if (uVar12 != 0) {
                for (; (uVar12 >> uVar39 & 1) == 0; uVar39 = uVar39 + 1) {
                }
              }
              uVar39 = (uVar39 >> 3) + lVar43;
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
LAB_00eebfd3:
            if ((puVar37 < puVar2) && ((int)*puVar33 == (int)*puVar37)) {
              puVar37 = (ulonglong *)((longlong)puVar37 + 4);
              puVar33 = (ulonglong *)((longlong)puVar33 + 4);
            }
            if ((puVar37 < puVar3) && ((short)*puVar33 == (short)*puVar37)) {
              puVar37 = (ulonglong *)((longlong)puVar37 + 2);
              puVar33 = (ulonglong *)((longlong)puVar33 + 2);
            }
            if (puVar37 < param_2) {
              puVar37 = (ulonglong *)
                        ((longlong)puVar37 + (ulonglong)((char)*puVar33 == (char)*puVar37));
            }
            uVar39 = (longlong)puVar37 - (longlong)puVar21;
          }
          uVar36 = uVar36 + uVar39;
        }
        uVar36 = uVar36 + 4;
        if ((uVar17 < uVar36) &&
           (*param_1 = (ulonglong)(iVar23 - uVar11), uVar17 = uVar36,
           (ulonglong *)((longlong)unaff_RSI + uVar36) == param_2)) break;
      }
      uVar36 = uVar17;
      uVar42 = uVar42 + 1;
      uVar13 = uVar13 + 1;
      uVar17 = uVar36;
    } while (uVar42 != uVar41);
  }
LAB_00eec06d:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar36;
}


