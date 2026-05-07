// Function: FUN_00ee07dd
// Address: 00ee07dd
// Size: 2301 bytes
// Class: GNString


ulonglong FUN_00ee07dd(ulonglong *param_1,ulonglong *param_2)

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
  longlong lVar10;
  ulonglong uVar11;
  byte bVar12;
  ulonglong *puVar13;
  longlong lVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong *unaff_RSI;
  longlong unaff_RDI;
  int iVar26;
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
  lVar10 = *(longlong *)(unaff_RDI + 0x70);
  lVar8 = *(longlong *)(unaff_RDI + 0x38);
  lVar4 = *(longlong *)(unaff_RDI + 8);
  uVar6 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar32 = (longlong)unaff_RSI - lVar4;
  uVar19 = *(uint *)(unaff_RDI + 0x1c);
  uVar31 = (uint)uVar32;
  uVar24 = uVar31 - uVar6;
  if (uVar31 - uVar19 <= uVar6) {
    uVar24 = uVar19;
  }
  lVar5 = *(longlong *)(unaff_RDI + 0x10);
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar24 = uVar19;
  }
  uVar19 = 6;
  if (*(uint *)(unaff_RDI + 0x10c) < 6) {
    uVar19 = *(uint *)(unaff_RDI + 0x10c);
  }
  uVar6 = *(uint *)(unaff_RDI + 0x18);
  uVar20 = (ulonglong)uVar6;
  iVar26 = 1 << ((byte)uVar19 & 0x1f);
  uVar9 = *(ulonglong *)(unaff_RDI + 0x60);
  cVar27 = (char)*(undefined4 *)(unaff_RDI + 0x34);
  if (*(int *)(unaff_RDI + 300) == 0) {
    uVar19 = *(uint *)(unaff_RDI + 0x2c);
    uVar11 = (ulonglong)uVar19;
    bVar12 = 0x38 - cVar27;
    lVar14 = lVar10;
    lVar30 = lVar8;
    bVar18 = bVar12;
    if (0x180 < uVar31 - uVar19) {
      if (uVar19 < 0xffffffa0) {
        uVar29 = uVar11 + 0x5f;
        uVar23 = uVar9;
        while( true ) {
          uVar16 = (ulonglong)((uint)uVar11 & 7);
          uVar19 = *(uint *)(unaff_RDI + 0x40 + uVar16 * 4);
          *(int *)(unaff_RDI + 0x40 + uVar16 * 4) =
               (int)((*(longlong *)(lVar4 + 8 + uVar11) * -0x30e4432340650000 ^ uVar23) >>
                    (bVar12 & 0x3f));
          uVar23 = (ulonglong)(uVar19 >> 2) & 0x3fffffc0;
          bVar18 = *(char *)(lVar8 + uVar23) - 1U & 0x3f;
          lVar30 = 0;
          if (bVar18 == 0) {
            lVar30 = 0x3f;
          }
          lVar30 = (ulonglong)bVar18 + lVar30;
          *(char *)(lVar8 + uVar23) = (char)lVar30;
          *(char *)(lVar8 + uVar23 + lVar30) = (char)uVar19;
          *(uint *)(lVar10 + (lVar30 + uVar23) * 4) = (uint)uVar11;
          if (uVar29 == uVar11) break;
          uVar23 = *(ulonglong *)(unaff_RDI + 0x60);
          uVar11 = uVar11 + 1;
        }
        lVar30 = *(longlong *)(unaff_RDI + 0x38);
        lVar14 = *(longlong *)(unaff_RDI + 0x70);
        bVar18 = 0x38 - (char)*(undefined4 *)(unaff_RDI + 0x34);
      }
      uVar11 = (ulonglong)(uVar31 - 0x20);
      uVar19 = 0;
      if (lVar4 + uVar11 <= (longlong)unaff_RSI + 1U) {
        uVar19 = ((int)((longlong)unaff_RSI + 1U) - (int)(lVar4 + uVar11)) + 1;
      }
      uVar25 = 8;
      if (uVar19 < 8) {
        uVar25 = uVar19;
      }
      uVar19 = (uVar25 + uVar31) - 0x20;
      if (uVar31 - 0x20 < uVar19) {
        uVar23 = *(ulonglong *)(unaff_RDI + 0x60);
        uVar29 = uVar11;
        do {
          *(int *)(unaff_RDI + 0x40 + (ulonglong)((uint)uVar29 & 7) * 4) =
               (int)((*(longlong *)(lVar4 + uVar29) * -0x30e4432340650000 ^ uVar23) >>
                    (bVar18 & 0x3f));
          uVar29 = uVar29 + 1;
        } while (uVar19 != uVar29);
      }
    }
    if ((uint)uVar11 < uVar31) {
      lVar21 = *(longlong *)(unaff_RDI + 8);
      do {
        uVar23 = (ulonglong)((uint)uVar11 & 7);
        uVar19 = *(uint *)(unaff_RDI + 0x40 + uVar23 * 4);
        *(int *)(unaff_RDI + 0x40 + uVar23 * 4) =
             (int)((*(longlong *)(lVar21 + 8 + uVar11) * -0x30e4432340650000 ^
                   *(ulonglong *)(unaff_RDI + 0x60)) >> (bVar18 & 0x3f));
        uVar23 = (ulonglong)(uVar19 >> 2) & 0x3fffffc0;
        bVar17 = *(char *)(lVar30 + uVar23) - 1U & 0x3f;
        lVar7 = 0;
        if (bVar17 == 0) {
          lVar7 = 0x3f;
        }
        lVar7 = (ulonglong)bVar17 + lVar7;
        *(char *)(lVar30 + uVar23) = (char)lVar7;
        *(char *)(lVar30 + uVar23 + lVar7) = (char)uVar19;
        *(uint *)(lVar14 + (lVar7 + uVar23) * 4) = (uint)uVar11;
        uVar11 = uVar11 + 1;
      } while ((uVar32 & 0xffffffff) != uVar11);
    }
    *(uint *)(unaff_RDI + 0x2c) = uVar31;
    uVar11 = (ulonglong)*(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar31 & 7) * 4);
    *(int *)(unaff_RDI + 0x40 + (ulonglong)(uVar31 & 7) * 4) =
         (int)((*(longlong *)((uVar32 & 0xffffffff) + 8 + lVar4) * -0x30e4432340650000 ^ uVar9) >>
              (bVar12 & 0x3f));
  }
  else {
    uVar32 = *unaff_RSI;
    *(uint *)(unaff_RDI + 0x2c) = uVar31;
    uVar11 = (uVar32 * -0x30e4432340650000 ^ uVar9) >> (0x38U - cVar27 & 0x3f) & 0xffffffff;
  }
  *(int *)(unaff_RDI + 0x68) = *(int *)(unaff_RDI + 0x68) + (uint)uVar11;
  uVar32 = (ulonglong)((uint)(uVar11 >> 2) & 0x3fffffc0);
  bVar18 = *(byte *)(lVar8 + uVar32);
  puVar33 = (undefined1 *)(lVar8 + uVar32);
  auVar34 = pshufb(ZEXT416((uint)uVar11),(undefined1  [16])0x0);
  local_138[0] = (undefined1  [16])0x0;
  lVar8 = 0;
  do {
    pcVar3 = puVar33 + lVar8 * 4;
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
    *(uint *)(local_138[0] + lVar8) =
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
    lVar8 = lVar8 + 4;
  } while (lVar8 != 0x10);
  uVar9 = (longlong)(int)local_138[0]._4_4_ << 0x10 | (longlong)(int)local_138[0]._0_4_ |
          (ulonglong)(uint)local_138[0]._8_4_ << 0x20 | (ulonglong)(uint)local_138[0]._12_4_ << 0x30
  ;
  uVar9 = uVar9 >> (bVar18 & 0x3f) | uVar9 << 0x40 - (bVar18 & 0x3f);
  lVar10 = lVar10 + uVar32 * 4;
  lVar8 = 0;
  lVar30 = 0;
  if (uVar9 != 0) {
    do {
      lVar14 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
        }
      }
      uVar32 = (ulonglong)((int)lVar14 + (uint)bVar18 & 0x3f);
      if (uVar32 != 0) {
        uVar19 = *(uint *)(lVar10 + uVar32 * 4);
        if (uVar19 < uVar24) break;
        *(uint *)(local_138[0] + lVar30 * 4) = uVar19;
        lVar30 = lVar30 + 1;
        iVar26 = iVar26 + -1;
      }
      uVar9 = uVar9 & uVar9 - 1;
      if ((uVar9 == 0) || (iVar26 == 0)) break;
    } while( true );
  }
  uVar32 = (ulonglong)(bVar18 - 1 & 0x3f);
  if (uVar32 == 0) {
    lVar8 = 0x3f;
  }
  lVar8 = lVar8 + uVar32;
  *puVar33 = (char)lVar8;
  puVar33[lVar8] = (char)uVar11;
  iVar26 = *(int *)(unaff_RDI + 0x2c);
  *(int *)(unaff_RDI + 0x2c) = iVar26 + 1;
  *(int *)(lVar10 + lVar8 * 4) = iVar26;
  if (lVar30 == 0) {
    uVar32 = 3;
  }
  else {
    puVar1 = (ulonglong *)((longlong)param_2 - 7);
    puVar2 = (ulonglong *)((longlong)unaff_RSI + 4);
    lVar10 = uVar20 + lVar4 + 8;
    lVar8 = 0;
    uVar9 = 3;
    do {
      uVar19 = *(uint *)(local_138[0] + lVar8 * 4);
      uVar32 = (ulonglong)uVar19;
      if (uVar19 < uVar6) {
        if (*(int *)(lVar5 + uVar32) == (int)*unaff_RSI) {
          puVar28 = (ulonglong *)(lVar5 + uVar32 + 4);
          puVar13 = (ulonglong *)
                    (((longlong)(uVar20 + lVar5) - (longlong)puVar28) + (longlong)puVar2);
          if (param_2 <= puVar13) {
            puVar13 = param_2;
          }
          puVar15 = puVar2;
          puVar22 = puVar28;
          if (puVar2 < (ulonglong *)((longlong)puVar13 - 7U)) {
            uVar11 = *puVar2 ^ *puVar28;
            if (uVar11 == 0) {
              lVar14 = lVar5 + 0xc + uVar32;
              lVar21 = 0;
              do {
                puVar15 = (ulonglong *)((longlong)unaff_RSI + lVar21 + 0xc);
                if ((ulonglong *)((longlong)puVar13 - 7U) <= puVar15) {
                  puVar22 = (ulonglong *)(lVar14 + lVar21);
                  goto LAB_00ee0d50;
                }
                lVar7 = lVar21 + 8;
                uVar32 = *(ulonglong *)((longlong)unaff_RSI + lVar21 + 0xc) ^
                         *(ulonglong *)(lVar14 + lVar21);
                lVar21 = lVar7;
              } while (uVar32 == 0);
              uVar11 = 0;
              if (uVar32 != 0) {
                for (; (uVar32 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
                }
              }
              uVar32 = (uVar11 >> 3) + lVar7;
            }
            else {
              uVar32 = 0;
              if (uVar11 != 0) {
                for (; (uVar11 >> uVar32 & 1) == 0; uVar32 = uVar32 + 1) {
                }
              }
              uVar32 = uVar32 >> 3;
            }
          }
          else {
LAB_00ee0d50:
            if ((puVar15 < (ulonglong *)((longlong)puVar13 - 3U)) &&
               ((int)*puVar22 == (int)*puVar15)) {
              puVar15 = (ulonglong *)((longlong)puVar15 + 4);
              puVar22 = (ulonglong *)((longlong)puVar22 + 4);
            }
            if ((puVar15 < (ulonglong *)((longlong)puVar13 - 1U)) &&
               ((short)*puVar22 == (short)*puVar15)) {
              puVar15 = (ulonglong *)((longlong)puVar15 + 2);
              puVar22 = (ulonglong *)((longlong)puVar22 + 2);
            }
            if (puVar15 < puVar13) {
              puVar15 = (ulonglong *)
                        ((longlong)puVar15 + (ulonglong)((char)*puVar22 == (char)*puVar15));
            }
            uVar32 = (longlong)puVar15 - (longlong)puVar2;
          }
          if ((char *)((longlong)puVar28 + uVar32) == (char *)(uVar20 + lVar5)) {
            puVar13 = (ulonglong *)((longlong)puVar2 + uVar32);
            puVar15 = (ulonglong *)(lVar4 + uVar20);
            puVar28 = puVar13;
            if (puVar13 < puVar1) {
              uVar11 = *puVar13 ^ *(ulonglong *)(lVar4 + uVar20);
              if (uVar11 == 0) {
                lVar14 = 0;
                do {
                  puVar28 = (ulonglong *)((longlong)unaff_RSI + lVar14 + uVar32 + 0xc);
                  if (puVar1 <= puVar28) {
                    puVar15 = (ulonglong *)(lVar14 + lVar10);
                    goto LAB_00ee0e2a;
                  }
                  lVar21 = lVar14 + 8;
                  uVar11 = *(ulonglong *)((longlong)unaff_RSI + lVar14 + uVar32 + 0xc) ^
                           *(ulonglong *)(lVar10 + lVar14);
                  lVar14 = lVar21;
                } while (uVar11 == 0);
                uVar23 = 0;
                if (uVar11 != 0) {
                  for (; (uVar11 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
                  }
                }
                uVar23 = (uVar23 >> 3) + lVar21;
              }
              else {
                uVar23 = 0;
                if (uVar11 != 0) {
                  for (; (uVar11 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
                  }
                }
                uVar23 = uVar23 >> 3;
              }
            }
            else {
LAB_00ee0e2a:
              if ((puVar28 < (ulonglong *)((longlong)param_2 - 3U)) &&
                 ((int)*puVar15 == (int)*puVar28)) {
                puVar28 = (ulonglong *)((longlong)puVar28 + 4);
                puVar15 = (ulonglong *)((longlong)puVar15 + 4);
              }
              if ((puVar28 < (ulonglong *)((longlong)param_2 - 1U)) &&
                 ((short)*puVar15 == (short)*puVar28)) {
                puVar28 = (ulonglong *)((longlong)puVar28 + 2);
                puVar15 = (ulonglong *)((longlong)puVar15 + 2);
              }
              if (puVar28 < param_2) {
                puVar28 = (ulonglong *)
                          ((longlong)puVar28 + (ulonglong)((char)*puVar15 == (char)*puVar28));
              }
              uVar23 = (longlong)puVar28 - (longlong)puVar13;
            }
            uVar32 = uVar32 + uVar23;
          }
          uVar32 = uVar32 + 4;
LAB_00ee0e92:
          if ((uVar9 < uVar32) &&
             (*param_1 = (ulonglong)((uVar31 + 3) - uVar19), uVar9 = uVar32,
             (ulonglong *)((longlong)unaff_RSI + uVar32) == param_2)) break;
        }
      }
      else {
        puVar13 = (ulonglong *)(lVar4 + uVar32);
        if (*(int *)((uVar9 - 3) + (longlong)puVar13) == *(int *)((longlong)unaff_RSI + (uVar9 - 3))
           ) {
          puVar28 = unaff_RSI;
          if (unaff_RSI < puVar1) {
            uVar11 = *unaff_RSI ^ *puVar13;
            if (uVar11 == 0) {
              lVar14 = lVar4 + 8 + uVar32;
              lVar21 = 0;
              do {
                puVar28 = (ulonglong *)((longlong)unaff_RSI + lVar21 + 8);
                if (puVar1 <= puVar28) {
                  puVar13 = (ulonglong *)(lVar14 + lVar21);
                  goto LAB_00ee0c82;
                }
                lVar7 = lVar21 + 8;
                uVar32 = *(ulonglong *)((longlong)unaff_RSI + lVar21 + 8) ^
                         *(ulonglong *)(lVar14 + lVar21);
                lVar21 = lVar7;
              } while (uVar32 == 0);
              uVar11 = 0;
              if (uVar32 != 0) {
                for (; (uVar32 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
                }
              }
              uVar32 = (uVar11 >> 3) + lVar7;
            }
            else {
              uVar32 = 0;
              if (uVar11 != 0) {
                for (; (uVar11 >> uVar32 & 1) == 0; uVar32 = uVar32 + 1) {
                }
              }
              uVar32 = uVar32 >> 3;
            }
          }
          else {
LAB_00ee0c82:
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
            uVar32 = (longlong)puVar28 - (longlong)unaff_RSI;
          }
          goto LAB_00ee0e92;
        }
      }
      uVar32 = uVar9;
      lVar8 = lVar8 + 1;
      uVar9 = uVar32;
    } while (lVar8 != lVar30);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar32;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


