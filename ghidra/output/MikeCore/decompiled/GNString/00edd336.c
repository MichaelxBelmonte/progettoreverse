// Function: FUN_00edd336
// Address: 00edd336
// Size: 2210 bytes
// Class: GNString


ulonglong FUN_00edd336(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong *puVar14;
  undefined8 uVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  ulonglong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong *puVar26;
  byte bVar27;
  ulonglong *puVar28;
  longlong lVar29;
  longlong lVar30;
  undefined1 *puVar31;
  uint uVar32;
  ulonglong uVar33;
  uint uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 local_138 [16] [16];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar8 = *(longlong *)(unaff_RDI + 0x70);
  lVar4 = *(longlong *)(unaff_RDI + 8);
  uVar7 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar33 = (longlong)unaff_RSI - lVar4;
  uVar11 = *(uint *)(unaff_RDI + 0x1c);
  uVar32 = (uint)uVar33;
  uVar24 = uVar32 - uVar7;
  if (uVar32 - uVar11 <= uVar7) {
    uVar24 = uVar11;
  }
  lVar20 = *(longlong *)(unaff_RDI + 0x38);
  lVar5 = *(longlong *)(unaff_RDI + 0x10);
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar24 = uVar11;
  }
  uVar11 = 6;
  if (*(uint *)(unaff_RDI + 0x10c) < 6) {
    uVar11 = *(uint *)(unaff_RDI + 0x10c);
  }
  iVar25 = 1 << ((byte)uVar11 & 0x1f);
  uVar11 = *(uint *)(unaff_RDI + 0x18);
  uVar19 = (ulonglong)uVar11;
  uVar15 = *(undefined8 *)(unaff_RDI + 0x60);
  uVar7 = (uint)uVar15;
  cVar6 = (char)*(undefined4 *)(unaff_RDI + 0x34);
  if (*(int *)(unaff_RDI + 300) == 0) {
    uVar34 = *(uint *)(unaff_RDI + 0x2c);
    uVar21 = (ulonglong)uVar34;
    bVar10 = 0x18 - cVar6;
    lVar30 = lVar20;
    lVar13 = lVar8;
    bVar16 = bVar10;
    if (0x180 < uVar32 - uVar34) {
      if (uVar34 < 0xffffffa0) {
        uVar9 = uVar21 + 0x5f;
        while( true ) {
          uVar23 = (ulonglong)((uint)uVar21 & 7);
          uVar34 = *(uint *)(unaff_RDI + 0x40 + uVar23 * 4);
          *(uint *)(unaff_RDI + 0x40 + uVar23 * 4) =
               (*(int *)(lVar4 + 8 + uVar21) * -0x61c8864f ^ (uint)uVar15) >> (bVar10 & 0x1f);
          uVar23 = (ulonglong)(uVar34 >> 2 & 0x3fffffc0);
          bVar16 = *(char *)(lVar20 + uVar23) - 1U & 0x3f;
          lVar30 = 0;
          if (bVar16 == 0) {
            lVar30 = 0x3f;
          }
          lVar30 = (ulonglong)bVar16 + lVar30;
          *(char *)(lVar20 + uVar23) = (char)lVar30;
          *(char *)(lVar20 + uVar23 + lVar30) = (char)uVar34;
          *(uint *)(lVar8 + (lVar30 + uVar23) * 4) = (uint)uVar21;
          if (uVar9 == uVar21) break;
          uVar15 = *(undefined8 *)(unaff_RDI + 0x60);
          uVar21 = uVar21 + 1;
        }
        lVar30 = *(longlong *)(unaff_RDI + 0x38);
        lVar13 = *(longlong *)(unaff_RDI + 0x70);
        bVar16 = 0x18 - (char)*(undefined4 *)(unaff_RDI + 0x34);
      }
      uVar34 = uVar32 - 0x20;
      uVar21 = (ulonglong)uVar34;
      uVar18 = 0;
      if (lVar4 + uVar21 <= (longlong)unaff_RSI + 1U) {
        uVar18 = ((int)((longlong)unaff_RSI + 1U) - (int)(lVar4 + uVar21)) + 1;
      }
      uVar17 = 8;
      if (uVar18 < 8) {
        uVar17 = uVar18;
      }
      uVar18 = (uVar17 + uVar32) - 0x20;
      if (uVar34 < uVar18) {
        uVar17 = *(uint *)(unaff_RDI + 0x60);
        do {
          *(uint *)(unaff_RDI + 0x40 + (ulonglong)((uint)uVar21 & 7) * 4) =
               (*(int *)(lVar4 + uVar21) * -0x61c8864f ^ uVar17) >> (bVar16 & 0x1f);
          uVar21 = uVar21 + 1;
        } while (uVar18 != uVar21);
      }
    }
    if (uVar34 < uVar32) {
      lVar12 = *(longlong *)(unaff_RDI + 8);
      uVar21 = (ulonglong)uVar34;
      do {
        uVar9 = (ulonglong)((uint)uVar21 & 7);
        uVar34 = *(uint *)(unaff_RDI + 0x40 + uVar9 * 4);
        *(uint *)(unaff_RDI + 0x40 + uVar9 * 4) =
             (*(int *)(lVar12 + 8 + uVar21) * -0x61c8864f ^ *(uint *)(unaff_RDI + 0x60)) >>
             (bVar16 & 0x1f);
        uVar9 = (ulonglong)(uVar34 >> 2 & 0x3fffffc0);
        bVar27 = *(char *)(lVar30 + uVar9) - 1U & 0x3f;
        lVar29 = 0;
        if (bVar27 == 0) {
          lVar29 = 0x3f;
        }
        lVar29 = (ulonglong)bVar27 + lVar29;
        *(char *)(lVar30 + uVar9) = (char)lVar29;
        *(char *)(uVar9 + lVar30 + lVar29) = (char)uVar34;
        *(uint *)(lVar13 + (lVar29 + uVar9) * 4) = (uint)uVar21;
        uVar21 = uVar21 + 1;
      } while ((uVar33 & 0xffffffff) != uVar21);
    }
    *(uint *)(unaff_RDI + 0x2c) = uVar32;
    uVar34 = *(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar32 & 7) * 4);
    *(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar32 & 7) * 4) =
         (*(int *)((uVar33 & 0xffffffff) + 8 + lVar4) * -0x61c8864f ^ uVar7) >> (bVar10 & 0x1f);
  }
  else {
    uVar34 = ((int)*unaff_RSI * -0x61c8864f ^ uVar7) >> (0x18U - cVar6 & 0x1f);
    *(uint *)(unaff_RDI + 0x2c) = uVar32;
  }
  *(int *)(unaff_RDI + 0x68) = *(int *)(unaff_RDI + 0x68) + uVar34;
  uVar33 = (ulonglong)(uVar34 >> 2 & 0xffffffc0);
  bVar16 = *(byte *)(lVar20 + uVar33);
  puVar31 = (undefined1 *)(lVar20 + uVar33);
  auVar35 = pshufb(ZEXT416(uVar34),(undefined1  [16])0x0);
  local_138[0] = (undefined1  [16])0x0;
  lVar20 = 0;
  do {
    pcVar3 = puVar31 + lVar20 * 4;
    auVar36[0] = -(*pcVar3 == auVar35[0]);
    auVar36[1] = -(pcVar3[1] == auVar35[1]);
    auVar36[2] = -(pcVar3[2] == auVar35[2]);
    auVar36[3] = -(pcVar3[3] == auVar35[3]);
    auVar36[4] = -(pcVar3[4] == auVar35[4]);
    auVar36[5] = -(pcVar3[5] == auVar35[5]);
    auVar36[6] = -(pcVar3[6] == auVar35[6]);
    auVar36[7] = -(pcVar3[7] == auVar35[7]);
    auVar36[8] = -(pcVar3[8] == auVar35[8]);
    auVar36[9] = -(pcVar3[9] == auVar35[9]);
    auVar36[10] = -(pcVar3[10] == auVar35[10]);
    auVar36[0xb] = -(pcVar3[0xb] == auVar35[0xb]);
    auVar36[0xc] = -(pcVar3[0xc] == auVar35[0xc]);
    auVar36[0xd] = -(pcVar3[0xd] == auVar35[0xd]);
    auVar36[0xe] = -(pcVar3[0xe] == auVar35[0xe]);
    auVar36[0xf] = -(pcVar3[0xf] == auVar35[0xf]);
    *(uint *)(local_138[0] + lVar20) =
         (uint)(ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar36[0xf] >> 7) << 0xf);
    lVar20 = lVar20 + 4;
  } while (lVar20 != 0x10);
  uVar21 = (longlong)(int)local_138[0]._4_4_ << 0x10 | (longlong)(int)local_138[0]._0_4_ |
           (ulonglong)(uint)local_138[0]._8_4_ << 0x20 |
           (ulonglong)(uint)local_138[0]._12_4_ << 0x30;
  uVar21 = uVar21 >> (bVar16 & 0x3f) | uVar21 << 0x40 - (bVar16 & 0x3f);
  lVar8 = lVar8 + uVar33 * 4;
  lVar20 = 0;
  lVar30 = 0;
  if (uVar21 != 0) {
    do {
      lVar13 = 0;
      if (uVar21 != 0) {
        for (; (uVar21 >> lVar13 & 1) == 0; lVar13 = lVar13 + 1) {
        }
      }
      uVar33 = (ulonglong)((int)lVar13 + (uint)bVar16 & 0x3f);
      if (uVar33 != 0) {
        uVar7 = *(uint *)(lVar8 + uVar33 * 4);
        if (uVar7 < uVar24) break;
        *(uint *)(local_138[0] + lVar30 * 4) = uVar7;
        lVar30 = lVar30 + 1;
        iVar25 = iVar25 + -1;
      }
      uVar21 = uVar21 & uVar21 - 1;
      if ((uVar21 == 0) || (iVar25 == 0)) break;
    } while( true );
  }
  uVar33 = (ulonglong)(bVar16 - 1 & 0x3f);
  if (uVar33 == 0) {
    lVar20 = 0x3f;
  }
  lVar20 = lVar20 + uVar33;
  *puVar31 = (char)lVar20;
  puVar31[lVar20] = (char)uVar34;
  iVar25 = *(int *)(unaff_RDI + 0x2c);
  *(int *)(unaff_RDI + 0x2c) = iVar25 + 1;
  *(int *)(lVar8 + lVar20 * 4) = iVar25;
  if (lVar30 == 0) {
    uVar33 = 3;
  }
  else {
    puVar1 = (ulonglong *)((longlong)param_2 - 7);
    puVar2 = (ulonglong *)((longlong)unaff_RSI + 4);
    lVar8 = uVar19 + lVar4 + 8;
    lVar20 = 0;
    uVar21 = 3;
    do {
      uVar24 = *(uint *)(local_138[0] + lVar20 * 4);
      uVar33 = (ulonglong)uVar24;
      if (uVar24 < uVar11) {
        if (*(int *)(lVar5 + uVar33) == (int)*unaff_RSI) {
          puVar28 = (ulonglong *)(lVar5 + uVar33 + 4);
          puVar22 = (ulonglong *)
                    (((longlong)(lVar5 + uVar19) - (longlong)puVar28) + (longlong)puVar2);
          if (param_2 <= puVar22) {
            puVar22 = param_2;
          }
          puVar14 = puVar2;
          puVar26 = puVar28;
          if (puVar2 < (ulonglong *)((longlong)puVar22 - 7U)) {
            uVar9 = *puVar2 ^ *puVar28;
            if (uVar9 == 0) {
              lVar13 = lVar5 + 0xc + uVar33;
              lVar12 = 0;
              do {
                puVar14 = (ulonglong *)((longlong)unaff_RSI + lVar12 + 0xc);
                if ((ulonglong *)((longlong)puVar22 - 7U) <= puVar14) {
                  puVar26 = (ulonglong *)(lVar13 + lVar12);
                  goto LAB_00edd8b4;
                }
                lVar29 = lVar12 + 8;
                uVar33 = *(ulonglong *)((longlong)unaff_RSI + lVar12 + 0xc) ^
                         *(ulonglong *)(lVar13 + lVar12);
                lVar12 = lVar29;
              } while (uVar33 == 0);
              uVar9 = 0;
              if (uVar33 != 0) {
                for (; (uVar33 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
                }
              }
              uVar33 = (uVar9 >> 3) + lVar29;
            }
            else {
              uVar33 = 0;
              if (uVar9 != 0) {
                for (; (uVar9 >> uVar33 & 1) == 0; uVar33 = uVar33 + 1) {
                }
              }
              uVar33 = uVar33 >> 3;
            }
          }
          else {
LAB_00edd8b4:
            if ((puVar14 < (ulonglong *)((longlong)puVar22 - 3U)) &&
               ((int)*puVar26 == (int)*puVar14)) {
              puVar14 = (ulonglong *)((longlong)puVar14 + 4);
              puVar26 = (ulonglong *)((longlong)puVar26 + 4);
            }
            if ((puVar14 < (ulonglong *)((longlong)puVar22 - 1U)) &&
               ((short)*puVar26 == (short)*puVar14)) {
              puVar14 = (ulonglong *)((longlong)puVar14 + 2);
              puVar26 = (ulonglong *)((longlong)puVar26 + 2);
            }
            if (puVar14 < puVar22) {
              puVar14 = (ulonglong *)
                        ((longlong)puVar14 + (ulonglong)((char)*puVar26 == (char)*puVar14));
            }
            uVar33 = (longlong)puVar14 - (longlong)puVar2;
          }
          if ((char *)((longlong)puVar28 + uVar33) == (char *)(lVar5 + uVar19)) {
            puVar22 = (ulonglong *)((longlong)puVar2 + uVar33);
            puVar14 = (ulonglong *)(lVar4 + uVar19);
            puVar28 = puVar22;
            if (puVar22 < puVar1) {
              uVar9 = *puVar22 ^ *(ulonglong *)(lVar4 + uVar19);
              if (uVar9 == 0) {
                lVar13 = 0;
                do {
                  puVar28 = (ulonglong *)((longlong)unaff_RSI + lVar13 + uVar33 + 0xc);
                  if (puVar1 <= puVar28) {
                    puVar14 = (ulonglong *)(lVar13 + lVar8);
                    goto LAB_00edd984;
                  }
                  lVar12 = lVar13 + 8;
                  uVar9 = *(ulonglong *)((longlong)unaff_RSI + lVar13 + uVar33 + 0xc) ^
                          *(ulonglong *)(lVar8 + lVar13);
                  lVar13 = lVar12;
                } while (uVar9 == 0);
                uVar23 = 0;
                if (uVar9 != 0) {
                  for (; (uVar9 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
                  }
                }
                uVar23 = (uVar23 >> 3) + lVar12;
              }
              else {
                uVar23 = 0;
                if (uVar9 != 0) {
                  for (; (uVar9 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
                  }
                }
                uVar23 = uVar23 >> 3;
              }
            }
            else {
LAB_00edd984:
              if ((puVar28 < (ulonglong *)((longlong)param_2 - 3U)) &&
                 ((int)*puVar14 == (int)*puVar28)) {
                puVar28 = (ulonglong *)((longlong)puVar28 + 4);
                puVar14 = (ulonglong *)((longlong)puVar14 + 4);
              }
              if ((puVar28 < (ulonglong *)((longlong)param_2 - 1U)) &&
                 ((short)*puVar14 == (short)*puVar28)) {
                puVar28 = (ulonglong *)((longlong)puVar28 + 2);
                puVar14 = (ulonglong *)((longlong)puVar14 + 2);
              }
              if (puVar28 < param_2) {
                puVar28 = (ulonglong *)
                          ((longlong)puVar28 + (ulonglong)((char)*puVar14 == (char)*puVar28));
              }
              uVar23 = (longlong)puVar28 - (longlong)puVar22;
            }
            uVar33 = uVar33 + uVar23;
          }
          uVar33 = uVar33 + 4;
LAB_00edd9fa:
          if ((uVar21 < uVar33) &&
             (*param_1 = (ulonglong)((uVar32 + 3) - uVar24), uVar21 = uVar33,
             (ulonglong *)((longlong)unaff_RSI + uVar33) == param_2)) break;
        }
      }
      else {
        puVar22 = (ulonglong *)(lVar4 + uVar33);
        if (*(int *)((uVar21 - 3) + (longlong)puVar22) ==
            *(int *)((longlong)unaff_RSI + (uVar21 - 3))) {
          puVar28 = unaff_RSI;
          if (unaff_RSI < puVar1) {
            uVar9 = *unaff_RSI ^ *puVar22;
            if (uVar9 == 0) {
              lVar13 = lVar4 + 8 + uVar33;
              lVar12 = 0;
              do {
                puVar28 = (ulonglong *)((longlong)unaff_RSI + lVar12 + 8);
                if (puVar1 <= puVar28) {
                  puVar22 = (ulonglong *)(lVar13 + lVar12);
                  goto LAB_00edd7d5;
                }
                lVar29 = lVar12 + 8;
                uVar33 = *(ulonglong *)((longlong)unaff_RSI + lVar12 + 8) ^
                         *(ulonglong *)(lVar13 + lVar12);
                lVar12 = lVar29;
              } while (uVar33 == 0);
              uVar9 = 0;
              if (uVar33 != 0) {
                for (; (uVar33 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
                }
              }
              uVar33 = (uVar9 >> 3) + lVar29;
            }
            else {
              uVar33 = 0;
              if (uVar9 != 0) {
                for (; (uVar9 >> uVar33 & 1) == 0; uVar33 = uVar33 + 1) {
                }
              }
              uVar33 = uVar33 >> 3;
            }
          }
          else {
LAB_00edd7d5:
            if ((puVar28 < (ulonglong *)((longlong)param_2 - 3U)) &&
               ((int)*puVar22 == (int)*puVar28)) {
              puVar28 = (ulonglong *)((longlong)puVar28 + 4);
              puVar22 = (ulonglong *)((longlong)puVar22 + 4);
            }
            if ((puVar28 < (ulonglong *)((longlong)param_2 - 1U)) &&
               ((short)*puVar22 == (short)*puVar28)) {
              puVar28 = (ulonglong *)((longlong)puVar28 + 2);
              puVar22 = (ulonglong *)((longlong)puVar22 + 2);
            }
            if (puVar28 < param_2) {
              puVar28 = (ulonglong *)
                        ((longlong)puVar28 + (ulonglong)((char)*puVar22 == (char)*puVar28));
            }
            uVar33 = (longlong)puVar28 - (longlong)unaff_RSI;
          }
          goto LAB_00edd9fa;
        }
      }
      uVar33 = uVar21;
      lVar20 = lVar20 + 1;
      uVar21 = uVar33;
    } while (lVar20 != lVar30);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar33;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


