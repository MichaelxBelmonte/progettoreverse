// Function: FUN_00eedae7
// Address: 00eedae7
// Size: 3143 bytes
// Class: GNString


ulonglong FUN_00eedae7(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  char *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  byte bVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  int iVar23;
  longlong lVar24;
  ulonglong *puVar25;
  byte bVar26;
  uint uVar27;
  ulonglong *unaff_RSI;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong *puVar30;
  longlong unaff_RDI;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong *puVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  ulonglong uVar38;
  char cVar39;
  ulonglong *puVar40;
  longlong lVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint auStack_138 [64];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar16 = *(longlong *)(unaff_RDI + 8);
  uVar9 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar38 = (longlong)unaff_RSI - lVar16;
  uVar35 = *(uint *)(unaff_RDI + 0x1c);
  uVar36 = (uint)uVar38;
  uVar37 = uVar36 - uVar9;
  if (uVar36 - uVar35 <= uVar9) {
    uVar37 = uVar35;
  }
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar37 = uVar35;
  }
  uVar35 = *(uint *)(unaff_RDI + 0x10c);
  uVar9 = 4;
  if (uVar35 < 4) {
    uVar9 = uVar35;
  }
  iVar34 = 1 << ((byte)uVar9 & 0x1f);
  puVar6 = *(undefined8 **)(unaff_RDI + 0xf8);
  uVar28 = *unaff_RSI * -0x30e4432345000000 >> (0x42U - *(char *)(puVar6 + 0x21) & 0x3f);
  lVar18 = *(longlong *)(unaff_RDI + 0x70);
  lVar24 = *(longlong *)(unaff_RDI + 0x38);
  uVar9 = *(uint *)(unaff_RDI + 0x18);
  uVar17 = (ulonglong)uVar9;
  uVar11 = *(ulonglong *)(unaff_RDI + 0x60);
  iVar23 = 0;
  if (4 < uVar35) {
    iVar23 = 1 << ((char)uVar35 - 4U & 0x1f);
  }
  cVar39 = (char)*(undefined4 *)(unaff_RDI + 0x34);
  if (*(int *)(unaff_RDI + 300) == 0) {
    uVar35 = *(uint *)(unaff_RDI + 0x2c);
    uVar21 = (ulonglong)uVar35;
    bVar26 = 0x38 - cVar39;
    lVar41 = lVar18;
    lVar29 = lVar24;
    bVar7 = bVar26;
    if (0x180 < uVar36 - uVar35) {
      if (uVar35 < 0xffffffa0) {
        uVar32 = uVar21 + 0x5f;
        uVar15 = uVar11;
        while( true ) {
          uVar14 = (ulonglong)((uint)uVar21 & 7);
          uVar35 = *(uint *)(unaff_RDI + 0x40 + uVar14 * 4);
          *(int *)(unaff_RDI + 0x40 + uVar14 * 4) =
               (int)((*(longlong *)(lVar16 + 8 + uVar21) * -0x30e4432345000000 ^ uVar15) >>
                    (bVar26 & 0x3f));
          uVar15 = (ulonglong)(uVar35 >> 4) & 0xffffff0;
          bVar7 = *(char *)(lVar24 + uVar15) - 1U & 0xf;
          lVar29 = 0;
          if (bVar7 == 0) {
            lVar29 = 0xf;
          }
          lVar29 = (ulonglong)bVar7 + lVar29;
          *(char *)(lVar24 + uVar15) = (char)lVar29;
          *(char *)(lVar24 + uVar15 + lVar29) = (char)uVar35;
          *(uint *)(lVar18 + (lVar29 + uVar15) * 4) = (uint)uVar21;
          if (uVar32 == uVar21) break;
          uVar15 = *(ulonglong *)(unaff_RDI + 0x60);
          uVar21 = uVar21 + 1;
        }
        lVar29 = *(longlong *)(unaff_RDI + 0x38);
        lVar41 = *(longlong *)(unaff_RDI + 0x70);
        bVar7 = 0x38 - (char)*(undefined4 *)(unaff_RDI + 0x34);
      }
      uVar21 = (ulonglong)(uVar36 - 0x20);
      uVar35 = 0;
      if (lVar16 + uVar21 <= (longlong)unaff_RSI + 1U) {
        uVar35 = ((int)((longlong)unaff_RSI + 1U) - (int)(lVar16 + uVar21)) + 1;
      }
      uVar27 = 8;
      if (uVar35 < 8) {
        uVar27 = uVar35;
      }
      uVar35 = (uVar27 + uVar36) - 0x20;
      if (uVar36 - 0x20 < uVar35) {
        uVar32 = *(ulonglong *)(unaff_RDI + 0x60);
        uVar15 = uVar21;
        do {
          *(int *)(unaff_RDI + 0x40 + (ulonglong)((uint)uVar15 & 7) * 4) =
               (int)((*(longlong *)(lVar16 + uVar15) * -0x30e4432345000000 ^ uVar32) >>
                    (bVar7 & 0x3f));
          uVar15 = uVar15 + 1;
        } while (uVar35 != uVar15);
      }
    }
    if ((uint)uVar21 < uVar36) {
      lVar19 = *(longlong *)(unaff_RDI + 8);
      do {
        uVar32 = (ulonglong)((uint)uVar21 & 7);
        uVar35 = *(uint *)(unaff_RDI + 0x40 + uVar32 * 4);
        *(int *)(unaff_RDI + 0x40 + uVar32 * 4) =
             (int)((*(longlong *)(lVar19 + 8 + uVar21) * -0x30e4432345000000 ^
                   *(ulonglong *)(unaff_RDI + 0x60)) >> (bVar7 & 0x3f));
        uVar32 = (ulonglong)(uVar35 >> 4) & 0xffffff0;
        bVar20 = *(char *)(lVar29 + uVar32) - 1U & 0xf;
        lVar10 = 0;
        if (bVar20 == 0) {
          lVar10 = 0xf;
        }
        lVar10 = (ulonglong)bVar20 + lVar10;
        *(char *)(lVar29 + uVar32) = (char)lVar10;
        *(char *)(lVar29 + uVar32 + lVar10) = (char)uVar35;
        *(uint *)(lVar41 + (lVar10 + uVar32) * 4) = (uint)uVar21;
        uVar21 = uVar21 + 1;
      } while ((uVar38 & 0xffffffff) != uVar21);
    }
    *(uint *)(unaff_RDI + 0x2c) = uVar36;
    uVar35 = *(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar36 & 7) * 4);
    *(int *)(unaff_RDI + 0x40 + (ulonglong)(uVar36 & 7) * 4) =
         (int)((*(longlong *)((uVar38 & 0xffffffff) + 8 + lVar16) * -0x30e4432345000000 ^ uVar11) >>
              (bVar26 & 0x3f));
  }
  else {
    uVar35 = (uint)((*unaff_RSI * -0x30e4432345000000 ^ uVar11) >> (0x38U - cVar39 & 0x3f));
    *(uint *)(unaff_RDI + 0x2c) = uVar36;
  }
  *(int *)(unaff_RDI + 0x68) = *(int *)(unaff_RDI + 0x68) + uVar35;
  uVar38 = (ulonglong)(uVar35 >> 4 & 0xfffffff0);
  bVar7 = *(byte *)(lVar24 + uVar38);
  auVar42 = pshufb(ZEXT416(uVar35),(undefined1  [16])0x0);
  pcVar4 = (char *)(lVar24 + uVar38);
  auVar43[0] = -(*pcVar4 == auVar42[0]);
  auVar43[1] = -(pcVar4[1] == auVar42[1]);
  auVar43[2] = -(pcVar4[2] == auVar42[2]);
  auVar43[3] = -(pcVar4[3] == auVar42[3]);
  auVar43[4] = -(pcVar4[4] == auVar42[4]);
  auVar43[5] = -(pcVar4[5] == auVar42[5]);
  auVar43[6] = -(pcVar4[6] == auVar42[6]);
  auVar43[7] = -(pcVar4[7] == auVar42[7]);
  auVar43[8] = -(pcVar4[8] == auVar42[8]);
  auVar43[9] = -(pcVar4[9] == auVar42[9]);
  auVar43[10] = -(pcVar4[10] == auVar42[10]);
  auVar43[0xb] = -(pcVar4[0xb] == auVar42[0xb]);
  auVar43[0xc] = -(pcVar4[0xc] == auVar42[0xc]);
  auVar43[0xd] = -(pcVar4[0xd] == auVar42[0xd]);
  auVar43[0xe] = -(pcVar4[0xe] == auVar42[0xe]);
  auVar43[0xf] = -(pcVar4[0xf] == auVar42[0xf]);
  uVar8 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
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
          (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(auVar43[0xf] >> 7) << 0xf;
  uVar8 = uVar8 >> (bVar7 & 0xf) | uVar8 << 0x10 - (bVar7 & 0xf);
  lVar18 = lVar18 + uVar38 * 4;
  lVar29 = 0;
  if (uVar8 != 0) {
    uVar11 = (ulonglong)uVar8;
    lVar41 = 0;
    do {
      lVar19 = 0;
      if (uVar11 != 0) {
        for (; (uVar11 >> lVar19 & 1) == 0; lVar19 = lVar19 + 1) {
        }
      }
      uVar21 = (ulonglong)((int)lVar19 + (uint)bVar7 & 0xf);
      if (uVar21 != 0) {
        uVar27 = *(uint *)(lVar18 + uVar21 * 4);
        if (uVar27 < uVar37) goto LAB_00eede02;
        auStack_138[lVar41] = uVar27;
        lVar41 = lVar41 + 1;
        iVar34 = iVar34 + -1;
      }
      uVar11 = uVar11 & uVar11 - 1;
      if ((uVar11 == 0) || (iVar34 == 0)) goto LAB_00eede02;
    } while( true );
  }
  lVar41 = 0;
LAB_00eede02:
  uVar11 = (ulonglong)(bVar7 - 1 & 0xf);
  if (uVar11 == 0) {
    lVar29 = 0xf;
  }
  lVar29 = lVar29 + uVar11;
  *(undefined1 *)(lVar24 + uVar38) = (char)lVar29;
  ((undefined1 *)(lVar24 + uVar38))[lVar29] = (char)uVar35;
  iVar5 = *(int *)(unaff_RDI + 0x2c);
  *(int *)(unaff_RDI + 0x2c) = iVar5 + 1;
  *(int *)(lVar18 + lVar29 * 4) = iVar5;
  puVar1 = (ulonglong *)((longlong)param_2 - 7);
  puVar2 = (ulonglong *)((longlong)param_2 - 3);
  puVar12 = (ulonglong *)((longlong)param_2 + -1);
  if (lVar41 == 0) {
    uVar38 = 3;
  }
  else {
    lVar18 = 0;
    uVar11 = 3;
    do {
      uVar35 = auStack_138[lVar18];
      puVar13 = (ulonglong *)(lVar16 + (ulonglong)uVar35);
      if (*(int *)((uVar11 - 3) + (longlong)puVar13) == *(int *)((longlong)unaff_RSI + (uVar11 - 3))
         ) {
        puVar30 = unaff_RSI;
        if (unaff_RSI < puVar1) {
          uVar21 = *unaff_RSI ^ *puVar13;
          if (uVar21 == 0) {
            lVar24 = lVar16 + 8 + (ulonglong)uVar35;
            lVar29 = 0;
            do {
              puVar30 = (ulonglong *)((longlong)unaff_RSI + lVar29 + 8);
              if (puVar1 <= puVar30) {
                puVar13 = (ulonglong *)(lVar24 + lVar29);
                goto LAB_00eedeb7;
              }
              lVar19 = lVar29 + 8;
              uVar38 = *(ulonglong *)((longlong)unaff_RSI + lVar29 + 8) ^
                       *(ulonglong *)(lVar24 + lVar29);
              lVar29 = lVar19;
            } while (uVar38 == 0);
            uVar21 = 0;
            if (uVar38 != 0) {
              for (; (uVar38 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
              }
            }
            uVar38 = (uVar21 >> 3) + lVar19;
          }
          else {
            uVar38 = 0;
            if (uVar21 != 0) {
              for (; (uVar21 >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
              }
            }
            uVar38 = uVar38 >> 3;
          }
        }
        else {
LAB_00eedeb7:
          if ((puVar30 < puVar2) && ((int)*puVar13 == (int)*puVar30)) {
            puVar30 = (ulonglong *)((longlong)puVar30 + 4);
            puVar13 = (ulonglong *)((longlong)puVar13 + 4);
          }
          if ((puVar30 < puVar12) && ((short)*puVar13 == (short)*puVar30)) {
            puVar30 = (ulonglong *)((longlong)puVar30 + 2);
            puVar13 = (ulonglong *)((longlong)puVar13 + 2);
          }
          if (puVar30 < param_2) {
            puVar30 = (ulonglong *)
                      ((longlong)puVar30 + (ulonglong)((char)*puVar13 == (char)*puVar30));
          }
          uVar38 = (longlong)puVar30 - (longlong)unaff_RSI;
        }
        if ((uVar11 < uVar38) &&
           (*param_1 = (ulonglong)((uVar36 + 3) - uVar35), uVar11 = uVar38,
           (ulonglong *)((longlong)unaff_RSI + uVar38) == param_2)) break;
      }
      uVar38 = uVar11;
      lVar18 = lVar18 + 1;
      uVar11 = uVar38;
    } while (lVar18 != lVar41);
  }
  puVar30 = (ulonglong *)(lVar16 + uVar17);
  puVar13 = (ulonglong *)((longlong)unaff_RSI + 4);
  pcVar4 = (char *)*puVar6;
  lVar18 = puVar6[1];
  lVar24 = puVar6[0xe];
  lVar29 = 0;
  do {
    lVar29 = lVar29 + 1;
  } while (lVar29 != 3);
  uVar35 = iVar34 + iVar23;
  uVar11 = 3;
  if (uVar35 < 3) {
    uVar11 = (ulonglong)uVar35;
  }
  uVar37 = *(uint *)(lVar24 + (uVar28 << 4 | 0xc));
  uVar21 = (ulonglong)(uVar37 >> 8);
  lVar29 = puVar6[0x10];
  iVar23 = (((int)pcVar4 - (int)lVar18) - uVar9) + uVar36 + 3;
  if ((int)uVar11 != 0) {
    lVar41 = uVar17 + lVar16 + 8;
    uVar32 = 0;
    do {
      uVar9 = *(uint *)(lVar24 + (uVar32 + uVar28 * 4) * 4);
      uVar15 = (ulonglong)uVar9;
      if (uVar15 == 0) goto LAB_00eee592;
      if (*(int *)(lVar18 + uVar15) == (int)*unaff_RSI) {
        puVar40 = (ulonglong *)((int *)(lVar18 + uVar15) + 1);
        puVar22 = (ulonglong *)(((longlong)pcVar4 - (longlong)puVar40) + (longlong)puVar13);
        if (param_2 <= puVar22) {
          puVar22 = param_2;
        }
        puVar25 = puVar13;
        puVar33 = puVar40;
        if (puVar13 < (ulonglong *)((longlong)puVar22 - 7U)) {
          uVar14 = *puVar13 ^ *puVar40;
          if (uVar14 == 0) {
            lVar19 = lVar18 + 0xc + uVar15;
            lVar10 = 0;
            do {
              puVar25 = (ulonglong *)((longlong)unaff_RSI + lVar10 + 0xc);
              if ((ulonglong *)((longlong)puVar22 - 7U) <= puVar25) {
                puVar33 = (ulonglong *)(lVar19 + lVar10);
                goto LAB_00eee149;
              }
              lVar3 = lVar10 + 8;
              uVar15 = *(ulonglong *)((longlong)unaff_RSI + lVar10 + 0xc) ^
                       *(ulonglong *)(lVar19 + lVar10);
              lVar10 = lVar3;
            } while (uVar15 == 0);
            uVar14 = 0;
            if (uVar15 != 0) {
              for (; (uVar15 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
              }
            }
            uVar15 = (uVar14 >> 3) + lVar3;
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
LAB_00eee149:
          if ((puVar25 < (ulonglong *)((longlong)puVar22 - 3U)) && ((int)*puVar33 == (int)*puVar25))
          {
            puVar25 = (ulonglong *)((longlong)puVar25 + 4);
            puVar33 = (ulonglong *)((longlong)puVar33 + 4);
          }
          if ((puVar25 < (ulonglong *)((longlong)puVar22 - 1U)) &&
             ((short)*puVar33 == (short)*puVar25)) {
            puVar25 = (ulonglong *)((longlong)puVar25 + 2);
            puVar33 = (ulonglong *)((longlong)puVar33 + 2);
          }
          if (puVar25 < puVar22) {
            puVar25 = (ulonglong *)
                      ((longlong)puVar25 + (ulonglong)((char)*puVar33 == (char)*puVar25));
          }
          uVar15 = (longlong)puVar25 - (longlong)puVar13;
        }
        if ((char *)((longlong)puVar40 + uVar15) == pcVar4) {
          puVar22 = (ulonglong *)((longlong)puVar13 + uVar15);
          puVar25 = puVar30;
          puVar40 = puVar22;
          if (puVar22 < puVar1) {
            uVar14 = *puVar22 ^ *puVar30;
            if (uVar14 == 0) {
              lVar19 = 0;
              do {
                puVar40 = (ulonglong *)((longlong)unaff_RSI + lVar19 + uVar15 + 0xc);
                if (puVar1 <= puVar40) {
                  puVar25 = (ulonglong *)(lVar19 + lVar41);
                  goto LAB_00eee238;
                }
                lVar10 = lVar19 + 8;
                uVar14 = *(ulonglong *)((longlong)unaff_RSI + lVar19 + uVar15 + 0xc) ^
                         *(ulonglong *)(lVar41 + lVar19);
                lVar19 = lVar10;
              } while (uVar14 == 0);
              uVar31 = 0;
              if (uVar14 != 0) {
                for (; (uVar14 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
                }
              }
              uVar31 = (uVar31 >> 3) + lVar10;
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
LAB_00eee238:
            if ((puVar40 < puVar2) && ((int)*puVar25 == (int)*puVar40)) {
              puVar40 = (ulonglong *)((longlong)puVar40 + 4);
              puVar25 = (ulonglong *)((longlong)puVar25 + 4);
            }
            if ((puVar40 < puVar12) && ((short)*puVar25 == (short)*puVar40)) {
              puVar40 = (ulonglong *)((longlong)puVar40 + 2);
              puVar25 = (ulonglong *)((longlong)puVar25 + 2);
            }
            if (puVar40 < param_2) {
              puVar40 = (ulonglong *)
                        ((longlong)puVar40 + (ulonglong)((char)*puVar25 == (char)*puVar40));
            }
            uVar31 = (longlong)puVar40 - (longlong)puVar22;
          }
          uVar15 = uVar15 + uVar31;
        }
        uVar15 = uVar15 + 4;
        if ((uVar38 < uVar15) &&
           (*param_1 = (ulonglong)(iVar23 - uVar9), uVar38 = uVar15,
           (ulonglong *)((longlong)unaff_RSI + uVar15) == param_2)) goto LAB_00eee592;
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 != uVar11);
  }
  uVar35 = uVar35 - (int)uVar11;
  if ((uVar37 & 0xff) < uVar35) {
    uVar35 = uVar37 & 0xff;
  }
  if (uVar35 != 0) {
    uVar11 = 0;
    do {
      uVar11 = uVar11 + 1;
    } while (uVar35 != uVar11);
    uVar11 = *unaff_RSI;
    lVar16 = lVar16 + uVar17 + 8;
    uVar37 = 0;
    uVar17 = uVar38;
    do {
      uVar9 = *(uint *)(lVar29 + uVar21 * 4);
      uVar38 = (ulonglong)uVar9;
      if (*(int *)(lVar18 + uVar38) == (int)uVar11) {
        puVar40 = (ulonglong *)(lVar18 + uVar38 + 4);
        puVar22 = (ulonglong *)(((longlong)pcVar4 - (longlong)puVar40) + (longlong)puVar13);
        if (param_2 <= puVar22) {
          puVar22 = param_2;
        }
        puVar25 = puVar13;
        puVar33 = puVar40;
        if (puVar13 < (ulonglong *)((longlong)puVar22 - 7U)) {
          uVar28 = *puVar13 ^ *puVar40;
          if (uVar28 == 0) {
            lVar24 = lVar18 + 0xc + uVar38;
            lVar41 = 0;
            do {
              puVar25 = (ulonglong *)((longlong)unaff_RSI + lVar41 + 0xc);
              if ((ulonglong *)((longlong)puVar22 - 7U) <= puVar25) {
                puVar33 = (ulonglong *)(lVar24 + lVar41);
                goto LAB_00eee401;
              }
              lVar19 = lVar41 + 8;
              uVar38 = *(ulonglong *)((longlong)unaff_RSI + lVar41 + 0xc) ^
                       *(ulonglong *)(lVar24 + lVar41);
              lVar41 = lVar19;
            } while (uVar38 == 0);
            uVar28 = 0;
            if (uVar38 != 0) {
              for (; (uVar38 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
              }
            }
            uVar38 = (uVar28 >> 3) + lVar19;
          }
          else {
            uVar38 = 0;
            if (uVar28 != 0) {
              for (; (uVar28 >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
              }
            }
            uVar38 = uVar38 >> 3;
          }
        }
        else {
LAB_00eee401:
          if ((puVar25 < (ulonglong *)((longlong)puVar22 - 3U)) && ((int)*puVar33 == (int)*puVar25))
          {
            puVar25 = (ulonglong *)((longlong)puVar25 + 4);
            puVar33 = (ulonglong *)((longlong)puVar33 + 4);
          }
          if ((puVar25 < (ulonglong *)((longlong)puVar22 - 1U)) &&
             ((short)*puVar33 == (short)*puVar25)) {
            puVar25 = (ulonglong *)((longlong)puVar25 + 2);
            puVar33 = (ulonglong *)((longlong)puVar33 + 2);
          }
          if (puVar25 < puVar22) {
            puVar25 = (ulonglong *)
                      ((longlong)puVar25 + (ulonglong)((char)*puVar33 == (char)*puVar25));
          }
          uVar38 = (longlong)puVar25 - (longlong)puVar13;
        }
        if ((char *)((longlong)puVar40 + uVar38) == pcVar4) {
          puVar22 = (ulonglong *)((longlong)puVar13 + uVar38);
          puVar40 = puVar22;
          puVar25 = puVar30;
          if (puVar22 < puVar1) {
            uVar28 = *puVar22 ^ *puVar30;
            if (uVar28 == 0) {
              lVar24 = 0;
              do {
                puVar40 = (ulonglong *)((longlong)unaff_RSI + lVar24 + uVar38 + 0xc);
                if (puVar1 <= puVar40) {
                  puVar25 = (ulonglong *)(lVar24 + lVar16);
                  goto LAB_00eee4db;
                }
                lVar41 = lVar24 + 8;
                uVar28 = *(ulonglong *)((longlong)unaff_RSI + lVar24 + uVar38 + 0xc) ^
                         *(ulonglong *)(lVar16 + lVar24);
                lVar24 = lVar41;
              } while (uVar28 == 0);
              uVar32 = 0;
              if (uVar28 != 0) {
                for (; (uVar28 >> uVar32 & 1) == 0; uVar32 = uVar32 + 1) {
                }
              }
              uVar32 = (uVar32 >> 3) + lVar41;
            }
            else {
              uVar32 = 0;
              if (uVar28 != 0) {
                for (; (uVar28 >> uVar32 & 1) == 0; uVar32 = uVar32 + 1) {
                }
              }
              uVar32 = uVar32 >> 3;
            }
          }
          else {
LAB_00eee4db:
            if ((puVar40 < puVar2) && ((int)*puVar25 == (int)*puVar40)) {
              puVar40 = (ulonglong *)((longlong)puVar40 + 4);
              puVar25 = (ulonglong *)((longlong)puVar25 + 4);
            }
            if ((puVar40 < puVar12) && ((short)*puVar25 == (short)*puVar40)) {
              puVar40 = (ulonglong *)((longlong)puVar40 + 2);
              puVar25 = (ulonglong *)((longlong)puVar25 + 2);
            }
            if (puVar40 < param_2) {
              puVar40 = (ulonglong *)
                        ((longlong)puVar40 + (ulonglong)((char)*puVar25 == (char)*puVar40));
            }
            uVar32 = (longlong)puVar40 - (longlong)puVar22;
          }
          uVar38 = uVar38 + uVar32;
        }
        uVar38 = uVar38 + 4;
        if ((uVar17 < uVar38) &&
           (*param_1 = (ulonglong)(iVar23 - uVar9), uVar17 = uVar38,
           (ulonglong *)((longlong)unaff_RSI + uVar38) == param_2)) break;
      }
      uVar38 = uVar17;
      uVar37 = uVar37 + 1;
      uVar21 = uVar21 + 1;
      uVar17 = uVar38;
    } while (uVar37 != uVar35);
  }
LAB_00eee592:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar38;
}


