// Function: FUN_00ede48d
// Address: 00ede48d
// Size: 2255 bytes
// Class: GNString


ulonglong FUN_00ede48d(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  ulonglong *puVar11;
  longlong lVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  byte bVar15;
  byte bVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  ulonglong *unaff_RSI;
  ulonglong uVar26;
  longlong unaff_RDI;
  char cVar27;
  ulonglong *puVar28;
  ulonglong uVar29;
  longlong lVar30;
  uint uVar31;
  ulonglong uVar32;
  undefined1 *puVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 local_138 [16] [16];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar8 = *(longlong *)(unaff_RDI + 0x70);
  lVar18 = *(longlong *)(unaff_RDI + 0x38);
  lVar4 = *(longlong *)(unaff_RDI + 8);
  uVar6 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar32 = (longlong)unaff_RSI - lVar4;
  uVar24 = *(uint *)(unaff_RDI + 0x1c);
  uVar31 = (uint)uVar32;
  uVar22 = uVar31 - uVar6;
  if (uVar31 - uVar24 <= uVar6) {
    uVar22 = uVar24;
  }
  lVar5 = *(longlong *)(unaff_RDI + 0x10);
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar22 = uVar24;
  }
  uVar24 = 5;
  if (*(uint *)(unaff_RDI + 0x10c) < 5) {
    uVar24 = *(uint *)(unaff_RDI + 0x10c);
  }
  uVar6 = *(uint *)(unaff_RDI + 0x18);
  uVar17 = (ulonglong)uVar6;
  iVar23 = 1 << ((byte)uVar24 & 0x1f);
  uVar26 = *(ulonglong *)(unaff_RDI + 0x60);
  cVar27 = (char)*(undefined4 *)(unaff_RDI + 0x34);
  if (*(int *)(unaff_RDI + 300) == 0) {
    uVar24 = *(uint *)(unaff_RDI + 0x2c);
    uVar9 = (ulonglong)uVar24;
    bVar10 = 0x38 - cVar27;
    lVar12 = lVar8;
    lVar30 = lVar18;
    bVar16 = bVar10;
    if (0x180 < uVar31 - uVar24) {
      if (uVar24 < 0xffffffa0) {
        uVar29 = uVar9 + 0x5f;
        uVar21 = uVar26;
        while( true ) {
          uVar14 = (ulonglong)((uint)uVar9 & 7);
          uVar24 = *(uint *)(unaff_RDI + 0x40 + uVar14 * 4);
          *(int *)(unaff_RDI + 0x40 + uVar14 * 4) =
               (int)((*(longlong *)(lVar4 + 8 + uVar9) * -0x30e4432345000000 ^ uVar21) >>
                    (bVar10 & 0x3f));
          uVar21 = (ulonglong)(uVar24 >> 3) & 0x1fffffe0;
          bVar16 = *(char *)(lVar18 + uVar21) - 1U & 0x1f;
          lVar30 = 0;
          if (bVar16 == 0) {
            lVar30 = 0x1f;
          }
          lVar30 = (ulonglong)bVar16 + lVar30;
          *(char *)(lVar18 + uVar21) = (char)lVar30;
          *(char *)(lVar18 + uVar21 + lVar30) = (char)uVar24;
          *(uint *)(lVar8 + (lVar30 + uVar21) * 4) = (uint)uVar9;
          if (uVar29 == uVar9) break;
          uVar21 = *(ulonglong *)(unaff_RDI + 0x60);
          uVar9 = uVar9 + 1;
        }
        lVar30 = *(longlong *)(unaff_RDI + 0x38);
        lVar12 = *(longlong *)(unaff_RDI + 0x70);
        bVar16 = 0x38 - (char)*(undefined4 *)(unaff_RDI + 0x34);
      }
      uVar9 = (ulonglong)(uVar31 - 0x20);
      uVar24 = 0;
      if (lVar4 + uVar9 <= (longlong)unaff_RSI + 1U) {
        uVar24 = ((int)((longlong)unaff_RSI + 1U) - (int)(lVar4 + uVar9)) + 1;
      }
      uVar25 = 8;
      if (uVar24 < 8) {
        uVar25 = uVar24;
      }
      uVar24 = (uVar25 + uVar31) - 0x20;
      if (uVar31 - 0x20 < uVar24) {
        uVar21 = *(ulonglong *)(unaff_RDI + 0x60);
        uVar29 = uVar9;
        do {
          *(int *)(unaff_RDI + 0x40 + (ulonglong)((uint)uVar29 & 7) * 4) =
               (int)((*(longlong *)(lVar4 + uVar29) * -0x30e4432345000000 ^ uVar21) >>
                    (bVar16 & 0x3f));
          uVar29 = uVar29 + 1;
        } while (uVar24 != uVar29);
      }
    }
    if ((uint)uVar9 < uVar31) {
      lVar19 = *(longlong *)(unaff_RDI + 8);
      do {
        uVar21 = (ulonglong)((uint)uVar9 & 7);
        uVar24 = *(uint *)(unaff_RDI + 0x40 + uVar21 * 4);
        *(int *)(unaff_RDI + 0x40 + uVar21 * 4) =
             (int)((*(longlong *)(lVar19 + 8 + uVar9) * -0x30e4432345000000 ^
                   *(ulonglong *)(unaff_RDI + 0x60)) >> (bVar16 & 0x3f));
        uVar21 = (ulonglong)(uVar24 >> 3) & 0x1fffffe0;
        bVar15 = *(char *)(lVar30 + uVar21) - 1U & 0x1f;
        lVar7 = 0;
        if (bVar15 == 0) {
          lVar7 = 0x1f;
        }
        lVar7 = (ulonglong)bVar15 + lVar7;
        *(char *)(lVar30 + uVar21) = (char)lVar7;
        *(char *)(lVar30 + uVar21 + lVar7) = (char)uVar24;
        *(uint *)(lVar12 + (lVar7 + uVar21) * 4) = (uint)uVar9;
        uVar9 = uVar9 + 1;
      } while ((uVar32 & 0xffffffff) != uVar9);
    }
    *(uint *)(unaff_RDI + 0x2c) = uVar31;
    uVar9 = (ulonglong)*(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar31 & 7) * 4);
    *(int *)(unaff_RDI + 0x40 + (ulonglong)(uVar31 & 7) * 4) =
         (int)((*(longlong *)((uVar32 & 0xffffffff) + 8 + lVar4) * -0x30e4432345000000 ^ uVar26) >>
              (bVar10 & 0x3f));
  }
  else {
    uVar32 = *unaff_RSI;
    *(uint *)(unaff_RDI + 0x2c) = uVar31;
    uVar9 = (uVar32 * -0x30e4432345000000 ^ uVar26) >> (0x38U - cVar27 & 0x3f) & 0xffffffff;
  }
  *(int *)(unaff_RDI + 0x68) = *(int *)(unaff_RDI + 0x68) + (uint)uVar9;
  uVar32 = (ulonglong)((uint)(uVar9 >> 3) & 0x1fffffe0);
  bVar16 = *(byte *)(lVar18 + uVar32);
  puVar33 = (undefined1 *)(lVar18 + uVar32);
  auVar34 = pshufb(ZEXT416((uint)uVar9),(undefined1  [16])0x0);
  local_138[0] = (undefined1  [16])0x0;
  lVar18 = 0;
  do {
    pcVar3 = puVar33 + lVar18 * 4;
    auVar35[0] = -(*pcVar3 == auVar34[0]);
    auVar35[1] = -(pcVar3[1] == auVar34[1]);
    auVar35[2] = -(pcVar3[2] == auVar34[2]);
    auVar35[3] = -(pcVar3[3] == auVar34[3]);
    auVar35[4] = -(pcVar3[4] == auVar34[4]);
    auVar35[5] = -(pcVar3[5] == auVar34[5]);
    auVar35[6] = -(pcVar3[6] == auVar34[6]);
    auVar35[7] = -(pcVar3[7] == auVar34[7]);
    auVar35[8] = -(pcVar3[8] == auVar34[8]);
    auVar35[9] = -(pcVar3[9] == auVar34[9]);
    auVar35[10] = -(pcVar3[10] == auVar34[10]);
    auVar35[0xb] = -(pcVar3[0xb] == auVar34[0xb]);
    auVar35[0xc] = -(pcVar3[0xc] == auVar34[0xc]);
    auVar35[0xd] = -(pcVar3[0xd] == auVar34[0xd]);
    auVar35[0xe] = -(pcVar3[0xe] == auVar34[0xe]);
    auVar35[0xf] = -(pcVar3[0xf] == auVar34[0xf]);
    *(uint *)(local_138[0] + lVar18) =
         (uint)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar35[0xf] >> 7) << 0xf);
    lVar18 = lVar18 + 4;
  } while (lVar18 != 8);
  uVar24 = local_138[0]._4_4_ << 0x10 | local_138[0]._0_4_;
  uVar24 = uVar24 >> (bVar16 & 0x1f) | uVar24 << 0x20 - (bVar16 & 0x1f);
  lVar8 = lVar8 + uVar32 * 4;
  lVar18 = 0;
  if (uVar24 != 0) {
    uVar32 = (ulonglong)uVar24;
    lVar30 = 0;
    do {
      lVar12 = 0;
      if (uVar32 != 0) {
        for (; (uVar32 >> lVar12 & 1) == 0; lVar12 = lVar12 + 1) {
        }
      }
      uVar26 = (ulonglong)((int)lVar12 + (uint)bVar16 & 0x1f);
      if (uVar26 != 0) {
        uVar24 = *(uint *)(lVar8 + uVar26 * 4);
        if (uVar24 < uVar22) goto LAB_00ede7b1;
        *(uint *)(local_138[0] + lVar30 * 4) = uVar24;
        lVar30 = lVar30 + 1;
        iVar23 = iVar23 + -1;
      }
      uVar32 = uVar32 & uVar32 - 1;
      if ((uVar32 == 0) || (iVar23 == 0)) goto LAB_00ede7b1;
    } while( true );
  }
  lVar30 = 0;
LAB_00ede7b1:
  uVar32 = (ulonglong)(bVar16 - 1 & 0x1f);
  if (uVar32 == 0) {
    lVar18 = 0x1f;
  }
  lVar18 = lVar18 + uVar32;
  *puVar33 = (char)lVar18;
  puVar33[lVar18] = (char)uVar9;
  iVar23 = *(int *)(unaff_RDI + 0x2c);
  *(int *)(unaff_RDI + 0x2c) = iVar23 + 1;
  *(int *)(lVar8 + lVar18 * 4) = iVar23;
  if (lVar30 == 0) {
    uVar32 = 3;
  }
  else {
    puVar1 = (ulonglong *)((longlong)param_2 - 7);
    puVar2 = (ulonglong *)((longlong)unaff_RSI + 4);
    lVar8 = uVar17 + lVar4 + 8;
    lVar18 = 0;
    uVar26 = 3;
    do {
      uVar24 = *(uint *)(local_138[0] + lVar18 * 4);
      uVar32 = (ulonglong)uVar24;
      if (uVar24 < uVar6) {
        if (*(int *)(lVar5 + uVar32) == (int)*unaff_RSI) {
          puVar28 = (ulonglong *)(lVar5 + uVar32 + 4);
          puVar11 = (ulonglong *)
                    (((longlong)(uVar17 + lVar5) - (longlong)puVar28) + (longlong)puVar2);
          if (param_2 <= puVar11) {
            puVar11 = param_2;
          }
          puVar13 = puVar2;
          puVar20 = puVar28;
          if (puVar2 < (ulonglong *)((longlong)puVar11 - 7U)) {
            uVar9 = *puVar2 ^ *puVar28;
            if (uVar9 == 0) {
              lVar12 = lVar5 + 0xc + uVar32;
              lVar19 = 0;
              do {
                puVar13 = (ulonglong *)((longlong)unaff_RSI + lVar19 + 0xc);
                if ((ulonglong *)((longlong)puVar11 - 7U) <= puVar13) {
                  puVar20 = (ulonglong *)(lVar12 + lVar19);
                  goto LAB_00ede9d9;
                }
                lVar7 = lVar19 + 8;
                uVar32 = *(ulonglong *)((longlong)unaff_RSI + lVar19 + 0xc) ^
                         *(ulonglong *)(lVar12 + lVar19);
                lVar19 = lVar7;
              } while (uVar32 == 0);
              uVar9 = 0;
              if (uVar32 != 0) {
                for (; (uVar32 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
                }
              }
              uVar32 = (uVar9 >> 3) + lVar7;
            }
            else {
              uVar32 = 0;
              if (uVar9 != 0) {
                for (; (uVar9 >> uVar32 & 1) == 0; uVar32 = uVar32 + 1) {
                }
              }
              uVar32 = uVar32 >> 3;
            }
          }
          else {
LAB_00ede9d9:
            if ((puVar13 < (ulonglong *)((longlong)puVar11 - 3U)) &&
               ((int)*puVar20 == (int)*puVar13)) {
              puVar13 = (ulonglong *)((longlong)puVar13 + 4);
              puVar20 = (ulonglong *)((longlong)puVar20 + 4);
            }
            if ((puVar13 < (ulonglong *)((longlong)puVar11 - 1U)) &&
               ((short)*puVar20 == (short)*puVar13)) {
              puVar13 = (ulonglong *)((longlong)puVar13 + 2);
              puVar20 = (ulonglong *)((longlong)puVar20 + 2);
            }
            if (puVar13 < puVar11) {
              puVar13 = (ulonglong *)
                        ((longlong)puVar13 + (ulonglong)((char)*puVar20 == (char)*puVar13));
            }
            uVar32 = (longlong)puVar13 - (longlong)puVar2;
          }
          if ((char *)((longlong)puVar28 + uVar32) == (char *)(uVar17 + lVar5)) {
            puVar11 = (ulonglong *)((longlong)puVar2 + uVar32);
            puVar13 = (ulonglong *)(lVar4 + uVar17);
            puVar28 = puVar11;
            if (puVar11 < puVar1) {
              uVar9 = *puVar11 ^ *(ulonglong *)(lVar4 + uVar17);
              if (uVar9 == 0) {
                lVar12 = 0;
                do {
                  puVar28 = (ulonglong *)((longlong)unaff_RSI + lVar12 + uVar32 + 0xc);
                  if (puVar1 <= puVar28) {
                    puVar13 = (ulonglong *)(lVar12 + lVar8);
                    goto LAB_00edeab3;
                  }
                  lVar19 = lVar12 + 8;
                  uVar9 = *(ulonglong *)((longlong)unaff_RSI + lVar12 + uVar32 + 0xc) ^
                          *(ulonglong *)(lVar8 + lVar12);
                  lVar12 = lVar19;
                } while (uVar9 == 0);
                uVar21 = 0;
                if (uVar9 != 0) {
                  for (; (uVar9 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
                  }
                }
                uVar21 = (uVar21 >> 3) + lVar19;
              }
              else {
                uVar21 = 0;
                if (uVar9 != 0) {
                  for (; (uVar9 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
                  }
                }
                uVar21 = uVar21 >> 3;
              }
            }
            else {
LAB_00edeab3:
              if ((puVar28 < (ulonglong *)((longlong)param_2 - 3U)) &&
                 ((int)*puVar13 == (int)*puVar28)) {
                puVar28 = (ulonglong *)((longlong)puVar28 + 4);
                puVar13 = (ulonglong *)((longlong)puVar13 + 4);
              }
              if ((puVar28 < (ulonglong *)((longlong)param_2 - 1U)) &&
                 ((short)*puVar13 == (short)*puVar28)) {
                puVar28 = (ulonglong *)((longlong)puVar28 + 2);
                puVar13 = (ulonglong *)((longlong)puVar13 + 2);
              }
              if (puVar28 < param_2) {
                puVar28 = (ulonglong *)
                          ((longlong)puVar28 + (ulonglong)((char)*puVar13 == (char)*puVar28));
              }
              uVar21 = (longlong)puVar28 - (longlong)puVar11;
            }
            uVar32 = uVar32 + uVar21;
          }
          uVar32 = uVar32 + 4;
LAB_00edeb1b:
          if ((uVar26 < uVar32) &&
             (*param_1 = (ulonglong)((uVar31 + 3) - uVar24), uVar26 = uVar32,
             (ulonglong *)((longlong)unaff_RSI + uVar32) == param_2)) break;
        }
      }
      else {
        puVar11 = (ulonglong *)(lVar4 + uVar32);
        if (*(int *)((uVar26 - 3) + (longlong)puVar11) ==
            *(int *)((longlong)unaff_RSI + (uVar26 - 3))) {
          puVar28 = unaff_RSI;
          if (unaff_RSI < puVar1) {
            uVar9 = *unaff_RSI ^ *puVar11;
            if (uVar9 == 0) {
              lVar12 = lVar4 + 8 + uVar32;
              lVar19 = 0;
              do {
                puVar28 = (ulonglong *)((longlong)unaff_RSI + lVar19 + 8);
                if (puVar1 <= puVar28) {
                  puVar11 = (ulonglong *)(lVar12 + lVar19);
                  goto LAB_00ede90b;
                }
                lVar7 = lVar19 + 8;
                uVar32 = *(ulonglong *)((longlong)unaff_RSI + lVar19 + 8) ^
                         *(ulonglong *)(lVar12 + lVar19);
                lVar19 = lVar7;
              } while (uVar32 == 0);
              uVar9 = 0;
              if (uVar32 != 0) {
                for (; (uVar32 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
                }
              }
              uVar32 = (uVar9 >> 3) + lVar7;
            }
            else {
              uVar32 = 0;
              if (uVar9 != 0) {
                for (; (uVar9 >> uVar32 & 1) == 0; uVar32 = uVar32 + 1) {
                }
              }
              uVar32 = uVar32 >> 3;
            }
          }
          else {
LAB_00ede90b:
            if ((puVar28 < (ulonglong *)((longlong)param_2 - 3U)) &&
               ((int)*puVar11 == (int)*puVar28)) {
              puVar28 = (ulonglong *)((longlong)puVar28 + 4);
              puVar11 = (ulonglong *)((longlong)puVar11 + 4);
            }
            if ((puVar28 < (ulonglong *)((longlong)param_2 - 1U)) &&
               ((short)*puVar11 == (short)*puVar28)) {
              puVar28 = (ulonglong *)((longlong)puVar28 + 2);
              puVar11 = (ulonglong *)((longlong)puVar11 + 2);
            }
            if (puVar28 < param_2) {
              puVar28 = (ulonglong *)
                        ((longlong)puVar28 + (ulonglong)((char)*puVar11 == (char)*puVar28));
            }
            uVar32 = (longlong)puVar28 - (longlong)unaff_RSI;
          }
          goto LAB_00edeb1b;
        }
      }
      uVar32 = uVar26;
      lVar18 = lVar18 + 1;
      uVar26 = uVar32;
    } while (lVar18 != lVar30);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar32;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


