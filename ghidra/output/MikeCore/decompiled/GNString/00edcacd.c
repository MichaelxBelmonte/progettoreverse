// Function: FUN_00edcacd
// Address: 00edcacd
// Size: 2153 bytes
// Class: GNString


ulonglong FUN_00edcacd(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong *puVar16;
  undefined8 uVar17;
  byte bVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong *unaff_RSI;
  longlong lVar24;
  longlong unaff_RDI;
  ulonglong *puVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  uint uVar30;
  ulonglong *puVar31;
  undefined1 *puVar32;
  int iVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 local_138 [16] [16];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar9 = *(longlong *)(unaff_RDI + 0x70);
  lVar4 = *(longlong *)(unaff_RDI + 8);
  uVar8 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar27 = (longlong)unaff_RSI - lVar4;
  uVar12 = *(uint *)(unaff_RDI + 0x1c);
  uVar26 = (uint)uVar27;
  uVar23 = uVar26 - uVar8;
  if (uVar26 - uVar12 <= uVar8) {
    uVar23 = uVar12;
  }
  lVar20 = *(longlong *)(unaff_RDI + 0x38);
  lVar5 = *(longlong *)(unaff_RDI + 0x10);
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar23 = uVar12;
  }
  uVar12 = 5;
  if (*(uint *)(unaff_RDI + 0x10c) < 5) {
    uVar12 = *(uint *)(unaff_RDI + 0x10c);
  }
  iVar33 = 1 << ((byte)uVar12 & 0x1f);
  uVar12 = *(uint *)(unaff_RDI + 0x18);
  uVar13 = (ulonglong)uVar12;
  uVar17 = *(undefined8 *)(unaff_RDI + 0x60);
  uVar8 = (uint)uVar17;
  cVar6 = (char)*(undefined4 *)(unaff_RDI + 0x34);
  if (*(int *)(unaff_RDI + 300) == 0) {
    uVar30 = *(uint *)(unaff_RDI + 0x2c);
    uVar28 = (ulonglong)uVar30;
    bVar11 = 0x18 - cVar6;
    lVar29 = lVar20;
    lVar15 = lVar9;
    bVar18 = bVar11;
    if (0x180 < uVar26 - uVar30) {
      if (uVar30 < 0xffffffa0) {
        uVar10 = uVar28 + 0x5f;
        while( true ) {
          uVar22 = (ulonglong)((uint)uVar28 & 7);
          uVar30 = *(uint *)(unaff_RDI + 0x40 + uVar22 * 4);
          *(uint *)(unaff_RDI + 0x40 + uVar22 * 4) =
               (*(int *)(lVar4 + 8 + uVar28) * -0x61c8864f ^ (uint)uVar17) >> (bVar11 & 0x1f);
          uVar22 = (ulonglong)(uVar30 >> 3 & 0x1fffffe0);
          bVar18 = *(char *)(lVar20 + uVar22) - 1U & 0x1f;
          lVar29 = 0;
          if (bVar18 == 0) {
            lVar29 = 0x1f;
          }
          lVar29 = (ulonglong)bVar18 + lVar29;
          *(char *)(lVar20 + uVar22) = (char)lVar29;
          *(char *)(lVar20 + uVar22 + lVar29) = (char)uVar30;
          *(uint *)(lVar9 + (lVar29 + uVar22) * 4) = (uint)uVar28;
          if (uVar10 == uVar28) break;
          uVar17 = *(undefined8 *)(unaff_RDI + 0x60);
          uVar28 = uVar28 + 1;
        }
        lVar29 = *(longlong *)(unaff_RDI + 0x38);
        lVar15 = *(longlong *)(unaff_RDI + 0x70);
        bVar18 = 0x18 - (char)*(undefined4 *)(unaff_RDI + 0x34);
      }
      uVar28 = (ulonglong)(uVar26 - 0x20);
      uVar30 = 0;
      if (lVar4 + uVar28 <= (longlong)unaff_RSI + 1U) {
        uVar30 = ((int)((longlong)unaff_RSI + 1U) - (int)(lVar4 + uVar28)) + 1;
      }
      uVar19 = 8;
      if (uVar30 < 8) {
        uVar19 = uVar30;
      }
      uVar30 = (uVar19 + uVar26) - 0x20;
      if (uVar26 - 0x20 < uVar30) {
        uVar19 = *(uint *)(unaff_RDI + 0x60);
        uVar10 = uVar28;
        do {
          *(uint *)(unaff_RDI + 0x40 + (ulonglong)((uint)uVar10 & 7) * 4) =
               (*(int *)(lVar4 + uVar10) * -0x61c8864f ^ uVar19) >> (bVar18 & 0x1f);
          uVar10 = uVar10 + 1;
        } while (uVar30 != uVar10);
      }
    }
    if ((uint)uVar28 < uVar26) {
      lVar14 = *(longlong *)(unaff_RDI + 8);
      do {
        uVar10 = (ulonglong)((uint)uVar28 & 7);
        uVar30 = *(uint *)(unaff_RDI + 0x40 + uVar10 * 4);
        *(uint *)(unaff_RDI + 0x40 + uVar10 * 4) =
             (*(int *)(lVar14 + 8 + uVar28) * -0x61c8864f ^ *(uint *)(unaff_RDI + 0x60)) >>
             (bVar18 & 0x1f);
        uVar10 = (ulonglong)(uVar30 >> 3 & 0x1fffffe0);
        bVar7 = *(char *)(lVar29 + uVar10) - 1U & 0x1f;
        lVar24 = 0;
        if (bVar7 == 0) {
          lVar24 = 0x1f;
        }
        lVar24 = (ulonglong)bVar7 + lVar24;
        *(char *)(lVar29 + uVar10) = (char)lVar24;
        *(char *)(uVar10 + lVar29 + lVar24) = (char)uVar30;
        *(uint *)(lVar15 + (lVar24 + uVar10) * 4) = (uint)uVar28;
        uVar28 = uVar28 + 1;
      } while ((uVar27 & 0xffffffff) != uVar28);
    }
    *(uint *)(unaff_RDI + 0x2c) = uVar26;
    uVar30 = *(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar26 & 7) * 4);
    *(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar26 & 7) * 4) =
         (*(int *)((uVar27 & 0xffffffff) + 8 + lVar4) * -0x61c8864f ^ uVar8) >> (bVar11 & 0x1f);
  }
  else {
    uVar30 = ((int)*unaff_RSI * -0x61c8864f ^ uVar8) >> (0x18U - cVar6 & 0x1f);
    *(uint *)(unaff_RDI + 0x2c) = uVar26;
  }
  *(int *)(unaff_RDI + 0x68) = *(int *)(unaff_RDI + 0x68) + uVar30;
  uVar27 = (ulonglong)(uVar30 >> 3 & 0x1fffffe0);
  bVar18 = *(byte *)(lVar20 + uVar27);
  puVar32 = (undefined1 *)(lVar20 + uVar27);
  auVar34 = pshufb(ZEXT416(uVar30),(undefined1  [16])0x0);
  local_138[0] = (undefined1  [16])0x0;
  lVar20 = 0;
  do {
    pcVar3 = puVar32 + lVar20 * 4;
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
    *(uint *)(local_138[0] + lVar20) =
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
    lVar20 = lVar20 + 4;
  } while (lVar20 != 8);
  uVar8 = local_138[0]._4_4_ << 0x10 | local_138[0]._0_4_;
  uVar8 = uVar8 >> (bVar18 & 0x1f) | uVar8 << 0x20 - (bVar18 & 0x1f);
  lVar9 = lVar9 + uVar27 * 4;
  lVar20 = 0;
  if (uVar8 != 0) {
    uVar27 = (ulonglong)uVar8;
    lVar29 = 0;
    do {
      lVar15 = 0;
      if (uVar27 != 0) {
        for (; (uVar27 >> lVar15 & 1) == 0; lVar15 = lVar15 + 1) {
        }
      }
      uVar28 = (ulonglong)((int)lVar15 + (uint)bVar18 & 0x1f);
      if (uVar28 != 0) {
        uVar8 = *(uint *)(lVar9 + uVar28 * 4);
        if (uVar8 < uVar23) goto LAB_00edcdbd;
        *(uint *)(local_138[0] + lVar29 * 4) = uVar8;
        lVar29 = lVar29 + 1;
        iVar33 = iVar33 + -1;
      }
      uVar27 = uVar27 & uVar27 - 1;
      if ((uVar27 == 0) || (iVar33 == 0)) goto LAB_00edcdbd;
    } while( true );
  }
  lVar29 = 0;
LAB_00edcdbd:
  uVar27 = (ulonglong)(bVar18 - 1 & 0x1f);
  if (uVar27 == 0) {
    lVar20 = 0x1f;
  }
  lVar20 = lVar20 + uVar27;
  *puVar32 = (char)lVar20;
  puVar32[lVar20] = (char)uVar30;
  iVar33 = *(int *)(unaff_RDI + 0x2c);
  *(int *)(unaff_RDI + 0x2c) = iVar33 + 1;
  *(int *)(lVar9 + lVar20 * 4) = iVar33;
  if (lVar29 == 0) {
    uVar27 = 3;
  }
  else {
    puVar1 = (ulonglong *)((longlong)param_2 - 7);
    puVar2 = (ulonglong *)((longlong)unaff_RSI + 4);
    lVar9 = uVar13 + lVar4 + 8;
    lVar20 = 0;
    uVar28 = 3;
    do {
      uVar23 = *(uint *)(local_138[0] + lVar20 * 4);
      uVar27 = (ulonglong)uVar23;
      if (uVar23 < uVar12) {
        if (*(int *)(lVar5 + uVar27) == (int)*unaff_RSI) {
          puVar31 = (ulonglong *)(lVar5 + uVar27 + 4);
          puVar21 = (ulonglong *)
                    (((longlong)(uVar13 + lVar5) - (longlong)puVar31) + (longlong)puVar2);
          if (param_2 <= puVar21) {
            puVar21 = param_2;
          }
          puVar16 = puVar2;
          puVar25 = puVar31;
          if (puVar2 < (ulonglong *)((longlong)puVar21 - 7U)) {
            uVar10 = *puVar2 ^ *puVar31;
            if (uVar10 == 0) {
              lVar15 = lVar5 + 0xc + uVar27;
              lVar14 = 0;
              do {
                puVar16 = (ulonglong *)((longlong)unaff_RSI + lVar14 + 0xc);
                if ((ulonglong *)((longlong)puVar21 - 7U) <= puVar16) {
                  puVar25 = (ulonglong *)(lVar15 + lVar14);
                  goto LAB_00edcff9;
                }
                lVar24 = lVar14 + 8;
                uVar27 = *(ulonglong *)((longlong)unaff_RSI + lVar14 + 0xc) ^
                         *(ulonglong *)(lVar15 + lVar14);
                lVar14 = lVar24;
              } while (uVar27 == 0);
              uVar10 = 0;
              if (uVar27 != 0) {
                for (; (uVar27 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                }
              }
              uVar27 = (uVar10 >> 3) + lVar24;
            }
            else {
              uVar27 = 0;
              if (uVar10 != 0) {
                for (; (uVar10 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
                }
              }
              uVar27 = uVar27 >> 3;
            }
          }
          else {
LAB_00edcff9:
            if ((puVar16 < (ulonglong *)((longlong)puVar21 - 3U)) &&
               ((int)*puVar25 == (int)*puVar16)) {
              puVar16 = (ulonglong *)((longlong)puVar16 + 4);
              puVar25 = (ulonglong *)((longlong)puVar25 + 4);
            }
            if ((puVar16 < (ulonglong *)((longlong)puVar21 - 1U)) &&
               ((short)*puVar25 == (short)*puVar16)) {
              puVar16 = (ulonglong *)((longlong)puVar16 + 2);
              puVar25 = (ulonglong *)((longlong)puVar25 + 2);
            }
            if (puVar16 < puVar21) {
              puVar16 = (ulonglong *)
                        ((longlong)puVar16 + (ulonglong)((char)*puVar25 == (char)*puVar16));
            }
            uVar27 = (longlong)puVar16 - (longlong)puVar2;
          }
          if ((char *)((longlong)puVar31 + uVar27) == (char *)(uVar13 + lVar5)) {
            puVar21 = (ulonglong *)((longlong)puVar2 + uVar27);
            puVar16 = (ulonglong *)(lVar4 + uVar13);
            puVar31 = puVar21;
            if (puVar21 < puVar1) {
              uVar10 = *puVar21 ^ *(ulonglong *)(lVar4 + uVar13);
              if (uVar10 == 0) {
                lVar15 = 0;
                do {
                  puVar31 = (ulonglong *)((longlong)unaff_RSI + lVar15 + uVar27 + 0xc);
                  if (puVar1 <= puVar31) {
                    puVar16 = (ulonglong *)(lVar15 + lVar9);
                    goto LAB_00edd0cd;
                  }
                  lVar14 = lVar15 + 8;
                  uVar10 = *(ulonglong *)((longlong)unaff_RSI + lVar15 + uVar27 + 0xc) ^
                           *(ulonglong *)(lVar9 + lVar15);
                  lVar15 = lVar14;
                } while (uVar10 == 0);
                uVar22 = 0;
                if (uVar10 != 0) {
                  for (; (uVar10 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
                  }
                }
                uVar22 = (uVar22 >> 3) + lVar14;
              }
              else {
                uVar22 = 0;
                if (uVar10 != 0) {
                  for (; (uVar10 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
                  }
                }
                uVar22 = uVar22 >> 3;
              }
            }
            else {
LAB_00edd0cd:
              if ((puVar31 < (ulonglong *)((longlong)param_2 - 3U)) &&
                 ((int)*puVar16 == (int)*puVar31)) {
                puVar31 = (ulonglong *)((longlong)puVar31 + 4);
                puVar16 = (ulonglong *)((longlong)puVar16 + 4);
              }
              if ((puVar31 < (ulonglong *)((longlong)param_2 - 1U)) &&
                 ((short)*puVar16 == (short)*puVar31)) {
                puVar31 = (ulonglong *)((longlong)puVar31 + 2);
                puVar16 = (ulonglong *)((longlong)puVar16 + 2);
              }
              if (puVar31 < param_2) {
                puVar31 = (ulonglong *)
                          ((longlong)puVar31 + (ulonglong)((char)*puVar16 == (char)*puVar31));
              }
              uVar22 = (longlong)puVar31 - (longlong)puVar21;
            }
            uVar27 = uVar27 + uVar22;
          }
          uVar27 = uVar27 + 4;
LAB_00edd13c:
          if ((uVar28 < uVar27) &&
             (*param_1 = (ulonglong)((uVar26 + 3) - uVar23), uVar28 = uVar27,
             (ulonglong *)((longlong)unaff_RSI + uVar27) == param_2)) break;
        }
      }
      else {
        puVar21 = (ulonglong *)(lVar4 + uVar27);
        if (*(int *)((uVar28 - 3) + (longlong)puVar21) ==
            *(int *)((longlong)unaff_RSI + (uVar28 - 3))) {
          puVar31 = unaff_RSI;
          if (unaff_RSI < puVar1) {
            uVar10 = *unaff_RSI ^ *puVar21;
            if (uVar10 == 0) {
              lVar15 = lVar4 + 8 + uVar27;
              lVar14 = 0;
              do {
                puVar31 = (ulonglong *)((longlong)unaff_RSI + lVar14 + 8);
                if (puVar1 <= puVar31) {
                  puVar21 = (ulonglong *)(lVar15 + lVar14);
                  goto LAB_00edcf2c;
                }
                lVar24 = lVar14 + 8;
                uVar27 = *(ulonglong *)((longlong)unaff_RSI + lVar14 + 8) ^
                         *(ulonglong *)(lVar15 + lVar14);
                lVar14 = lVar24;
              } while (uVar27 == 0);
              uVar10 = 0;
              if (uVar27 != 0) {
                for (; (uVar27 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                }
              }
              uVar27 = (uVar10 >> 3) + lVar24;
            }
            else {
              uVar27 = 0;
              if (uVar10 != 0) {
                for (; (uVar10 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
                }
              }
              uVar27 = uVar27 >> 3;
            }
          }
          else {
LAB_00edcf2c:
            if ((puVar31 < (ulonglong *)((longlong)param_2 - 3U)) &&
               ((int)*puVar21 == (int)*puVar31)) {
              puVar31 = (ulonglong *)((longlong)puVar31 + 4);
              puVar21 = (ulonglong *)((longlong)puVar21 + 4);
            }
            if ((puVar31 < (ulonglong *)((longlong)param_2 - 1U)) &&
               ((short)*puVar21 == (short)*puVar31)) {
              puVar31 = (ulonglong *)((longlong)puVar31 + 2);
              puVar21 = (ulonglong *)((longlong)puVar21 + 2);
            }
            if (puVar31 < param_2) {
              puVar31 = (ulonglong *)
                        ((longlong)puVar31 + (ulonglong)((char)*puVar21 == (char)*puVar31));
            }
            uVar27 = (longlong)puVar31 - (longlong)unaff_RSI;
          }
          goto LAB_00edd13c;
        }
      }
      uVar27 = uVar28;
      lVar20 = lVar20 + 1;
      uVar28 = uVar27;
    } while (lVar20 != lVar29);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar27;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


