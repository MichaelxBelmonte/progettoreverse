// Function: FUN_00ed5fbe
// Address: 00ed5fbe
// Size: 1551 bytes
// Class: GNString


ulonglong FUN_00ed5fbe(ulonglong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  byte bVar9;
  uint uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  byte bVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong *unaff_RSI;
  longlong unaff_RDI;
  undefined1 *puVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  longlong lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 local_138 [16] [16];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar3 = *(longlong *)(unaff_RDI + 8);
  uVar6 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar24 = (longlong)unaff_RSI - lVar3;
  uVar10 = *(uint *)(unaff_RDI + 0x1c);
  uVar23 = (uint)uVar24;
  uVar4 = uVar23 - uVar6;
  if (uVar23 - uVar10 <= uVar6) {
    uVar4 = uVar10;
  }
  lVar19 = *(longlong *)(unaff_RDI + 0x70);
  lVar16 = *(longlong *)(unaff_RDI + 0x38);
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar4 = uVar10;
  }
  uVar10 = 6;
  if (*(uint *)(unaff_RDI + 0x10c) < 6) {
    uVar10 = *(uint *)(unaff_RDI + 0x10c);
  }
  iVar14 = 1 << ((byte)uVar10 & 0x1f);
  uVar11 = *(undefined8 *)(unaff_RDI + 0x60);
  uVar10 = (uint)uVar11;
  cVar5 = (char)*(undefined4 *)(unaff_RDI + 0x34);
  if (*(int *)(unaff_RDI + 300) == 0) {
    uVar6 = *(uint *)(unaff_RDI + 0x2c);
    uVar18 = (ulonglong)uVar6;
    bVar9 = 0x18 - cVar5;
    lVar26 = lVar16;
    lVar21 = lVar19;
    bVar13 = bVar9;
    if (0x180 < uVar23 - uVar6) {
      if (uVar6 < 0xffffffa0) {
        uVar7 = uVar18 + 0x5f;
        while( true ) {
          uVar12 = (ulonglong)((uint)uVar18 & 7);
          uVar6 = *(uint *)(unaff_RDI + 0x40 + uVar12 * 4);
          *(uint *)(unaff_RDI + 0x40 + uVar12 * 4) =
               (*(int *)(lVar3 + 8 + uVar18) * -0x61c8864f ^ (uint)uVar11) >> (bVar9 & 0x1f);
          uVar12 = (ulonglong)(uVar6 >> 2 & 0x3fffffc0);
          bVar13 = *(char *)(lVar16 + uVar12) - 1U & 0x3f;
          lVar26 = 0;
          if (bVar13 == 0) {
            lVar26 = 0x3f;
          }
          lVar26 = (ulonglong)bVar13 + lVar26;
          *(char *)(lVar16 + uVar12) = (char)lVar26;
          *(char *)(lVar16 + uVar12 + lVar26) = (char)uVar6;
          *(uint *)(lVar19 + (lVar26 + uVar12) * 4) = (uint)uVar18;
          if (uVar7 == uVar18) break;
          uVar11 = *(undefined8 *)(unaff_RDI + 0x60);
          uVar18 = uVar18 + 1;
        }
        lVar26 = *(longlong *)(unaff_RDI + 0x38);
        lVar21 = *(longlong *)(unaff_RDI + 0x70);
        bVar13 = 0x18 - (char)*(undefined4 *)(unaff_RDI + 0x34);
      }
      uVar18 = (ulonglong)(uVar23 - 0x20);
      uVar6 = 0;
      if (lVar3 + uVar18 <= (longlong)unaff_RSI + 1U) {
        uVar6 = ((int)((longlong)unaff_RSI + 1U) - (int)(lVar3 + uVar18)) + 1;
      }
      uVar15 = 8;
      if (uVar6 < 8) {
        uVar15 = uVar6;
      }
      uVar6 = (uVar15 + uVar23) - 0x20;
      if (uVar23 - 0x20 < uVar6) {
        uVar15 = *(uint *)(unaff_RDI + 0x60);
        uVar7 = uVar18;
        do {
          *(uint *)(unaff_RDI + 0x40 + (ulonglong)((uint)uVar7 & 7) * 4) =
               (*(int *)(lVar3 + uVar7) * -0x61c8864f ^ uVar15) >> (bVar13 & 0x1f);
          uVar7 = uVar7 + 1;
        } while (uVar6 != uVar7);
      }
    }
    if ((uint)uVar18 < uVar23) {
      lVar1 = *(longlong *)(unaff_RDI + 8);
      do {
        uVar7 = (ulonglong)((uint)uVar18 & 7);
        uVar6 = *(uint *)(unaff_RDI + 0x40 + uVar7 * 4);
        *(uint *)(unaff_RDI + 0x40 + uVar7 * 4) =
             (*(int *)(lVar1 + 8 + uVar18) * -0x61c8864f ^ *(uint *)(unaff_RDI + 0x60)) >>
             (bVar13 & 0x1f);
        uVar7 = (ulonglong)(uVar6 >> 2 & 0x3fffffc0);
        bVar17 = *(char *)(lVar26 + uVar7) - 1U & 0x3f;
        lVar22 = 0;
        if (bVar17 == 0) {
          lVar22 = 0x3f;
        }
        lVar22 = (ulonglong)bVar17 + lVar22;
        *(char *)(lVar26 + uVar7) = (char)lVar22;
        *(char *)(lVar26 + uVar7 + lVar22) = (char)uVar6;
        *(uint *)(lVar21 + (lVar22 + uVar7) * 4) = (uint)uVar18;
        uVar18 = uVar18 + 1;
      } while ((uVar24 & 0xffffffff) != uVar18);
    }
    *(uint *)(unaff_RDI + 0x2c) = uVar23;
    uVar6 = *(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar23 & 7) * 4);
    *(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar23 & 7) * 4) =
         (*(int *)((uVar24 & 0xffffffff) + 8 + lVar3) * -0x61c8864f ^ uVar10) >> (bVar9 & 0x1f);
  }
  else {
    uVar6 = ((int)*unaff_RSI * -0x61c8864f ^ uVar10) >> (0x18U - cVar5 & 0x1f);
    *(uint *)(unaff_RDI + 0x2c) = uVar23;
  }
  *(int *)(unaff_RDI + 0x68) = *(int *)(unaff_RDI + 0x68) + uVar6;
  uVar24 = (ulonglong)(uVar6 >> 2 & 0x3fffffc0);
  bVar13 = *(byte *)(lVar16 + uVar24);
  puVar20 = (undefined1 *)(lVar16 + uVar24);
  auVar27 = pshufb(ZEXT416(uVar6),(undefined1  [16])0x0);
  local_138[0] = (undefined1  [16])0x0;
  lVar16 = 0;
  do {
    pcVar2 = puVar20 + lVar16 * 4;
    auVar28[0] = -(*pcVar2 == auVar27[0]);
    auVar28[1] = -(pcVar2[1] == auVar27[1]);
    auVar28[2] = -(pcVar2[2] == auVar27[2]);
    auVar28[3] = -(pcVar2[3] == auVar27[3]);
    auVar28[4] = -(pcVar2[4] == auVar27[4]);
    auVar28[5] = -(pcVar2[5] == auVar27[5]);
    auVar28[6] = -(pcVar2[6] == auVar27[6]);
    auVar28[7] = -(pcVar2[7] == auVar27[7]);
    auVar28[8] = -(pcVar2[8] == auVar27[8]);
    auVar28[9] = -(pcVar2[9] == auVar27[9]);
    auVar28[10] = -(pcVar2[10] == auVar27[10]);
    auVar28[0xb] = -(pcVar2[0xb] == auVar27[0xb]);
    auVar28[0xc] = -(pcVar2[0xc] == auVar27[0xc]);
    auVar28[0xd] = -(pcVar2[0xd] == auVar27[0xd]);
    auVar28[0xe] = -(pcVar2[0xe] == auVar27[0xe]);
    auVar28[0xf] = -(pcVar2[0xf] == auVar27[0xf]);
    *(uint *)(local_138[0] + lVar16) =
         (uint)(ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar28[0xf] >> 7) << 0xf);
    lVar16 = lVar16 + 4;
  } while (lVar16 != 0x10);
  uVar18 = (longlong)(int)local_138[0]._4_4_ << 0x10 | (longlong)(int)local_138[0]._0_4_ |
           (ulonglong)(uint)local_138[0]._8_4_ << 0x20 |
           (ulonglong)(uint)local_138[0]._12_4_ << 0x30;
  uVar18 = uVar18 >> (bVar13 & 0x3f) | uVar18 << 0x40 - (bVar13 & 0x3f);
  lVar19 = lVar19 + uVar24 * 4;
  lVar26 = 0;
  lVar16 = 0;
  if (uVar18 != 0) {
    do {
      lVar21 = 0;
      if (uVar18 != 0) {
        for (; (uVar18 >> lVar21 & 1) == 0; lVar21 = lVar21 + 1) {
        }
      }
      uVar24 = (ulonglong)((int)lVar21 + (uint)bVar13 & 0x3f);
      if (uVar24 != 0) {
        uVar10 = *(uint *)(lVar19 + uVar24 * 4);
        if (uVar10 < uVar4) break;
        *(uint *)(local_138[0] + lVar16 * 4) = uVar10;
        lVar16 = lVar16 + 1;
        iVar14 = iVar14 + -1;
      }
      uVar18 = uVar18 & uVar18 - 1;
      if ((uVar18 == 0) || (iVar14 == 0)) break;
    } while( true );
  }
  uVar24 = (ulonglong)(bVar13 - 1 & 0x3f);
  if (uVar24 == 0) {
    lVar26 = 0x3f;
  }
  lVar26 = lVar26 + uVar24;
  *puVar20 = (char)lVar26;
  puVar20[lVar26] = (char)uVar6;
  iVar14 = *(int *)(unaff_RDI + 0x2c);
  *(int *)(unaff_RDI + 0x2c) = iVar14 + 1;
  *(int *)(lVar19 + lVar26 * 4) = iVar14;
  if (lVar16 == 0) {
    uVar24 = 3;
  }
  else {
    lVar19 = 0;
    uVar18 = 3;
    do {
      uVar10 = *(uint *)(local_138[0] + lVar19 * 4);
      puVar25 = (ulonglong *)(lVar3 + (ulonglong)uVar10);
      if (*(int *)((uVar18 - 3) + (longlong)puVar25) == *(int *)((longlong)unaff_RSI + (uVar18 - 3))
         ) {
        puVar8 = unaff_RSI;
        if (unaff_RSI < (ulonglong *)((longlong)param_2 - 7U)) {
          uVar7 = *unaff_RSI ^ *puVar25;
          if (uVar7 == 0) {
            lVar26 = lVar3 + 8 + (ulonglong)uVar10;
            lVar21 = 0;
            do {
              puVar8 = (ulonglong *)((longlong)unaff_RSI + lVar21 + 8);
              if ((ulonglong *)((longlong)param_2 - 7U) <= puVar8) {
                puVar25 = (ulonglong *)(lVar26 + lVar21);
                goto LAB_00ed633e;
              }
              lVar1 = lVar21 + 8;
              uVar24 = *(ulonglong *)((longlong)unaff_RSI + lVar21 + 8) ^
                       *(ulonglong *)(lVar26 + lVar21);
              lVar21 = lVar1;
            } while (uVar24 == 0);
            uVar7 = 0;
            if (uVar24 != 0) {
              for (; (uVar24 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
              }
            }
            uVar24 = (uVar7 >> 3) + lVar1;
          }
          else {
            uVar24 = 0;
            if (uVar7 != 0) {
              for (; (uVar7 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
              }
            }
            uVar24 = uVar24 >> 3;
          }
        }
        else {
LAB_00ed633e:
          if ((puVar8 < (ulonglong *)((longlong)param_2 - 3U)) && ((int)*puVar25 == (int)*puVar8)) {
            puVar8 = (ulonglong *)((longlong)puVar8 + 4);
            puVar25 = (ulonglong *)((longlong)puVar25 + 4);
          }
          if ((puVar8 < (ulonglong *)((longlong)param_2 - 1U)) &&
             ((short)*puVar25 == (short)*puVar8)) {
            puVar8 = (ulonglong *)((longlong)puVar8 + 2);
            puVar25 = (ulonglong *)((longlong)puVar25 + 2);
          }
          if (puVar8 < param_2) {
            puVar8 = (ulonglong *)((longlong)puVar8 + (ulonglong)((char)*puVar25 == (char)*puVar8));
          }
          uVar24 = (longlong)puVar8 - (longlong)unaff_RSI;
        }
        if ((uVar18 < uVar24) &&
           (*param_1 = (ulonglong)((uVar23 + 3) - uVar10), uVar18 = uVar24,
           (ulonglong *)((longlong)unaff_RSI + uVar24) == param_2)) break;
      }
      uVar24 = uVar18;
      lVar19 = lVar19 + 1;
      uVar18 = uVar24;
    } while (lVar19 != lVar16);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar24;
}


