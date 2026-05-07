// Function: FUN_00ed59cf
// Address: 00ed59cf
// Size: 1519 bytes
// Class: GNString


ulonglong FUN_00ed59cf(ulonglong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  byte bVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  byte bVar17;
  longlong lVar18;
  ulonglong *unaff_RSI;
  longlong unaff_RDI;
  int iVar19;
  undefined1 *puVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 local_138 [16] [16];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar3 = *(longlong *)(unaff_RDI + 8);
  uVar6 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar25 = (longlong)unaff_RSI - lVar3;
  uVar14 = *(uint *)(unaff_RDI + 0x1c);
  uVar24 = (uint)uVar25;
  uVar4 = uVar24 - uVar6;
  if (uVar24 - uVar14 <= uVar6) {
    uVar4 = uVar14;
  }
  lVar18 = *(longlong *)(unaff_RDI + 0x70);
  lVar16 = *(longlong *)(unaff_RDI + 0x38);
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar4 = uVar14;
  }
  uVar14 = 5;
  if (*(uint *)(unaff_RDI + 0x10c) < 5) {
    uVar14 = *(uint *)(unaff_RDI + 0x10c);
  }
  iVar19 = 1 << ((byte)uVar14 & 0x1f);
  uVar11 = *(undefined8 *)(unaff_RDI + 0x60);
  uVar14 = (uint)uVar11;
  cVar5 = (char)*(undefined4 *)(unaff_RDI + 0x34);
  if (*(int *)(unaff_RDI + 300) == 0) {
    uVar6 = *(uint *)(unaff_RDI + 0x2c);
    uVar7 = (ulonglong)uVar6;
    bVar10 = 0x18 - cVar5;
    lVar22 = lVar16;
    lVar21 = lVar18;
    bVar13 = bVar10;
    if (0x180 < uVar24 - uVar6) {
      if (uVar6 < 0xffffffa0) {
        uVar8 = uVar7 + 0x5f;
        while( true ) {
          uVar12 = (ulonglong)((uint)uVar7 & 7);
          uVar6 = *(uint *)(unaff_RDI + 0x40 + uVar12 * 4);
          *(uint *)(unaff_RDI + 0x40 + uVar12 * 4) =
               (*(int *)(lVar3 + 8 + uVar7) * -0x61c8864f ^ (uint)uVar11) >> (bVar10 & 0x1f);
          uVar12 = (ulonglong)(uVar6 >> 3 & 0x1fffffe0);
          bVar13 = *(char *)(lVar16 + uVar12) - 1U & 0x1f;
          lVar22 = 0;
          if (bVar13 == 0) {
            lVar22 = 0x1f;
          }
          lVar22 = (ulonglong)bVar13 + lVar22;
          *(char *)(lVar16 + uVar12) = (char)lVar22;
          *(char *)(lVar16 + uVar12 + lVar22) = (char)uVar6;
          *(uint *)(lVar18 + (lVar22 + uVar12) * 4) = (uint)uVar7;
          if (uVar8 == uVar7) break;
          uVar11 = *(undefined8 *)(unaff_RDI + 0x60);
          uVar7 = uVar7 + 1;
        }
        lVar22 = *(longlong *)(unaff_RDI + 0x38);
        lVar21 = *(longlong *)(unaff_RDI + 0x70);
        bVar13 = 0x18 - (char)*(undefined4 *)(unaff_RDI + 0x34);
      }
      uVar7 = (ulonglong)(uVar24 - 0x20);
      uVar6 = 0;
      if (lVar3 + uVar7 <= (longlong)unaff_RSI + 1U) {
        uVar6 = ((int)((longlong)unaff_RSI + 1U) - (int)(lVar3 + uVar7)) + 1;
      }
      uVar15 = 8;
      if (uVar6 < 8) {
        uVar15 = uVar6;
      }
      uVar6 = (uVar15 + uVar24) - 0x20;
      if (uVar24 - 0x20 < uVar6) {
        uVar15 = *(uint *)(unaff_RDI + 0x60);
        uVar8 = uVar7;
        do {
          *(uint *)(unaff_RDI + 0x40 + (ulonglong)((uint)uVar8 & 7) * 4) =
               (*(int *)(lVar3 + uVar8) * -0x61c8864f ^ uVar15) >> (bVar13 & 0x1f);
          uVar8 = uVar8 + 1;
        } while (uVar6 != uVar8);
      }
    }
    if ((uint)uVar7 < uVar24) {
      lVar1 = *(longlong *)(unaff_RDI + 8);
      do {
        uVar8 = (ulonglong)((uint)uVar7 & 7);
        uVar6 = *(uint *)(unaff_RDI + 0x40 + uVar8 * 4);
        *(uint *)(unaff_RDI + 0x40 + uVar8 * 4) =
             (*(int *)(lVar1 + 8 + uVar7) * -0x61c8864f ^ *(uint *)(unaff_RDI + 0x60)) >>
             (bVar13 & 0x1f);
        uVar8 = (ulonglong)(uVar6 >> 3 & 0x1fffffe0);
        bVar17 = *(char *)(lVar22 + uVar8) - 1U & 0x1f;
        lVar23 = 0;
        if (bVar17 == 0) {
          lVar23 = 0x1f;
        }
        lVar23 = (ulonglong)bVar17 + lVar23;
        *(char *)(lVar22 + uVar8) = (char)lVar23;
        *(char *)(lVar22 + uVar8 + lVar23) = (char)uVar6;
        *(uint *)(lVar21 + (lVar23 + uVar8) * 4) = (uint)uVar7;
        uVar7 = uVar7 + 1;
      } while ((uVar25 & 0xffffffff) != uVar7);
    }
    *(uint *)(unaff_RDI + 0x2c) = uVar24;
    uVar6 = *(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar24 & 7) * 4);
    *(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar24 & 7) * 4) =
         (*(int *)((uVar25 & 0xffffffff) + 8 + lVar3) * -0x61c8864f ^ uVar14) >> (bVar10 & 0x1f);
  }
  else {
    uVar6 = ((int)*unaff_RSI * -0x61c8864f ^ uVar14) >> (0x18U - cVar5 & 0x1f);
    *(uint *)(unaff_RDI + 0x2c) = uVar24;
  }
  *(int *)(unaff_RDI + 0x68) = *(int *)(unaff_RDI + 0x68) + uVar6;
  uVar25 = (ulonglong)(uVar6 >> 3 & 0x1fffffe0);
  bVar13 = *(byte *)(lVar16 + uVar25);
  puVar20 = (undefined1 *)(lVar16 + uVar25);
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
  } while (lVar16 != 8);
  uVar14 = local_138[0]._4_4_ << 0x10 | local_138[0]._0_4_;
  uVar14 = uVar14 >> (bVar13 & 0x1f) | uVar14 << 0x20 - (bVar13 & 0x1f);
  uVar7 = (ulonglong)uVar14;
  lVar18 = lVar18 + uVar25 * 4;
  lVar16 = 0;
  if (uVar14 != 0) {
    lVar22 = 0;
    do {
      lVar21 = 0;
      if (uVar7 != 0) {
        for (; (uVar7 >> lVar21 & 1) == 0; lVar21 = lVar21 + 1) {
        }
      }
      uVar25 = (ulonglong)((int)lVar21 + (uint)bVar13 & 0x1f);
      if (uVar25 != 0) {
        uVar14 = *(uint *)(lVar18 + uVar25 * 4);
        if (uVar14 < uVar4) goto LAB_00ed5c8f;
        *(uint *)(local_138[0] + lVar22 * 4) = uVar14;
        lVar22 = lVar22 + 1;
        iVar19 = iVar19 + -1;
      }
      uVar7 = uVar7 & uVar7 - 1;
      if ((uVar7 == 0) || (iVar19 == 0)) goto LAB_00ed5c8f;
    } while( true );
  }
  lVar22 = 0;
LAB_00ed5c8f:
  uVar25 = (ulonglong)(bVar13 - 1 & 0x1f);
  if (uVar25 == 0) {
    lVar16 = 0x1f;
  }
  lVar16 = lVar16 + uVar25;
  *puVar20 = (char)lVar16;
  puVar20[lVar16] = (char)uVar6;
  iVar19 = *(int *)(unaff_RDI + 0x2c);
  *(int *)(unaff_RDI + 0x2c) = iVar19 + 1;
  *(int *)(lVar18 + lVar16 * 4) = iVar19;
  if (lVar22 == 0) {
    uVar25 = 3;
  }
  else {
    lVar18 = 0;
    uVar7 = 3;
    do {
      uVar14 = *(uint *)(local_138[0] + lVar18 * 4);
      puVar26 = (ulonglong *)(lVar3 + (ulonglong)uVar14);
      if (*(int *)((uVar7 - 3) + (longlong)puVar26) == *(int *)((longlong)unaff_RSI + (uVar7 - 3)))
      {
        puVar9 = unaff_RSI;
        if (unaff_RSI < (ulonglong *)((longlong)param_2 - 7U)) {
          uVar8 = *unaff_RSI ^ *puVar26;
          if (uVar8 == 0) {
            lVar16 = lVar3 + 8 + (ulonglong)uVar14;
            lVar21 = 0;
            do {
              puVar9 = (ulonglong *)((longlong)unaff_RSI + lVar21 + 8);
              if ((ulonglong *)((longlong)param_2 - 7U) <= puVar9) {
                puVar26 = (ulonglong *)(lVar16 + lVar21);
                goto LAB_00ed5d34;
              }
              lVar1 = lVar21 + 8;
              uVar25 = *(ulonglong *)((longlong)unaff_RSI + lVar21 + 8) ^
                       *(ulonglong *)(lVar16 + lVar21);
              lVar21 = lVar1;
            } while (uVar25 == 0);
            uVar8 = 0;
            if (uVar25 != 0) {
              for (; (uVar25 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
              }
            }
            uVar25 = (uVar8 >> 3) + lVar1;
          }
          else {
            uVar25 = 0;
            if (uVar8 != 0) {
              for (; (uVar8 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
              }
            }
            uVar25 = uVar25 >> 3;
          }
        }
        else {
LAB_00ed5d34:
          if ((puVar9 < (ulonglong *)((longlong)param_2 - 3U)) && ((int)*puVar26 == (int)*puVar9)) {
            puVar9 = (ulonglong *)((longlong)puVar9 + 4);
            puVar26 = (ulonglong *)((longlong)puVar26 + 4);
          }
          if ((puVar9 < (ulonglong *)((longlong)param_2 - 1U)) &&
             ((short)*puVar26 == (short)*puVar9)) {
            puVar9 = (ulonglong *)((longlong)puVar9 + 2);
            puVar26 = (ulonglong *)((longlong)puVar26 + 2);
          }
          if (puVar9 < param_2) {
            puVar9 = (ulonglong *)((longlong)puVar9 + (ulonglong)((char)*puVar26 == (char)*puVar9));
          }
          uVar25 = (longlong)puVar9 - (longlong)unaff_RSI;
        }
        if ((uVar7 < uVar25) &&
           (*param_1 = (ulonglong)((uVar24 + 3) - uVar14), uVar7 = uVar25,
           (ulonglong *)((longlong)unaff_RSI + uVar25) == param_2)) break;
      }
      uVar25 = uVar7;
      lVar18 = lVar18 + 1;
      uVar7 = uVar25;
    } while (lVar18 != lVar22);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar25;
}


