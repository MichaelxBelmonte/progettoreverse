// Function: FUN_00ed53ef
// Address: 00ed53ef
// Size: 1504 bytes
// Class: GNString


ulonglong FUN_00ed53ef(ulonglong *param_1,ulonglong *param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  byte bVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  byte bVar14;
  ushort uVar15;
  uint uVar16;
  char cVar17;
  ulonglong uVar18;
  ulonglong *unaff_RSI;
  longlong unaff_RDI;
  byte bVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  ulonglong *puVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint auStack_138 [64];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar2 = *(longlong *)(unaff_RDI + 8);
  uVar6 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar22 = (longlong)unaff_RSI - lVar2;
  uVar10 = *(uint *)(unaff_RDI + 0x1c);
  uVar21 = (uint)uVar22;
  uVar5 = uVar21 - uVar6;
  if (uVar21 - uVar10 <= uVar6) {
    uVar5 = uVar10;
  }
  lVar11 = *(longlong *)(unaff_RDI + 0x70);
  lVar3 = *(longlong *)(unaff_RDI + 0x38);
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar5 = uVar10;
  }
  uVar10 = 4;
  if (*(uint *)(unaff_RDI + 0x10c) < 4) {
    uVar10 = *(uint *)(unaff_RDI + 0x10c);
  }
  iVar24 = 1 << ((byte)uVar10 & 0x1f);
  uVar12 = *(undefined8 *)(unaff_RDI + 0x60);
  uVar10 = (uint)uVar12;
  cVar17 = (char)*(undefined4 *)(unaff_RDI + 0x34);
  if (*(int *)(unaff_RDI + 300) == 0) {
    uVar6 = *(uint *)(unaff_RDI + 0x2c);
    uVar18 = (ulonglong)uVar6;
    bVar9 = 0x18 - cVar17;
    lVar25 = lVar11;
    lVar20 = lVar3;
    bVar14 = bVar9;
    if (0x180 < uVar21 - uVar6) {
      if (uVar6 < 0xffffffa0) {
        uVar7 = uVar18 + 0x5f;
        while( true ) {
          uVar13 = (ulonglong)((uint)uVar18 & 7);
          uVar6 = *(uint *)(unaff_RDI + 0x40 + uVar13 * 4);
          *(uint *)(unaff_RDI + 0x40 + uVar13 * 4) =
               (*(int *)(lVar2 + 8 + uVar18) * -0x61c8864f ^ (uint)uVar12) >> (bVar9 & 0x1f);
          uVar13 = (ulonglong)(uVar6 >> 4 & 0xffffff0);
          bVar14 = *(char *)(lVar3 + uVar13) - 1U & 0xf;
          lVar20 = 0;
          if (bVar14 == 0) {
            lVar20 = 0xf;
          }
          lVar20 = (ulonglong)bVar14 + lVar20;
          *(char *)(lVar3 + uVar13) = (char)lVar20;
          *(char *)(lVar3 + uVar13 + lVar20) = (char)uVar6;
          *(uint *)(lVar11 + (lVar20 + uVar13) * 4) = (uint)uVar18;
          if (uVar7 == uVar18) break;
          uVar12 = *(undefined8 *)(unaff_RDI + 0x60);
          uVar18 = uVar18 + 1;
        }
        lVar20 = *(longlong *)(unaff_RDI + 0x38);
        lVar25 = *(longlong *)(unaff_RDI + 0x70);
        bVar14 = 0x18 - (char)*(undefined4 *)(unaff_RDI + 0x34);
      }
      uVar18 = (ulonglong)(uVar21 - 0x20);
      uVar6 = 0;
      if (lVar2 + uVar18 <= (longlong)unaff_RSI + 1U) {
        uVar6 = ((int)((longlong)unaff_RSI + 1U) - (int)(lVar2 + uVar18)) + 1;
      }
      uVar16 = 8;
      if (uVar6 < 8) {
        uVar16 = uVar6;
      }
      uVar6 = (uVar16 + uVar21) - 0x20;
      if (uVar21 - 0x20 < uVar6) {
        uVar16 = *(uint *)(unaff_RDI + 0x60);
        uVar7 = uVar18;
        do {
          *(uint *)(unaff_RDI + 0x40 + (ulonglong)((uint)uVar7 & 7) * 4) =
               (*(int *)(lVar2 + uVar7) * -0x61c8864f ^ uVar16) >> (bVar14 & 0x1f);
          uVar7 = uVar7 + 1;
        } while (uVar6 != uVar7);
      }
    }
    if ((uint)uVar18 < uVar21) {
      lVar4 = *(longlong *)(unaff_RDI + 8);
      do {
        uVar7 = (ulonglong)((uint)uVar18 & 7);
        uVar6 = *(uint *)(unaff_RDI + 0x40 + uVar7 * 4);
        *(uint *)(unaff_RDI + 0x40 + uVar7 * 4) =
             (*(int *)(lVar4 + 8 + uVar18) * -0x61c8864f ^ *(uint *)(unaff_RDI + 0x60)) >>
             (bVar14 & 0x1f);
        uVar7 = (ulonglong)(uVar6 >> 4 & 0xffffff0);
        bVar19 = *(char *)(lVar20 + uVar7) - 1U & 0xf;
        lVar23 = 0;
        if (bVar19 == 0) {
          lVar23 = 0xf;
        }
        lVar23 = (ulonglong)bVar19 + lVar23;
        *(char *)(lVar20 + uVar7) = (char)lVar23;
        *(char *)(lVar20 + uVar7 + lVar23) = (char)uVar6;
        *(uint *)(lVar25 + (lVar23 + uVar7) * 4) = (uint)uVar18;
        uVar18 = uVar18 + 1;
      } while ((uVar22 & 0xffffffff) != uVar18);
    }
    *(uint *)(unaff_RDI + 0x2c) = uVar21;
    uVar6 = *(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar21 & 7) * 4);
    *(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar21 & 7) * 4) =
         (*(int *)((uVar22 & 0xffffffff) + 8 + lVar2) * -0x61c8864f ^ uVar10) >> (bVar9 & 0x1f);
  }
  else {
    uVar6 = ((int)*unaff_RSI * -0x61c8864f ^ uVar10) >> (0x18U - cVar17 & 0x1f);
    *(uint *)(unaff_RDI + 0x2c) = uVar21;
  }
  *(int *)(unaff_RDI + 0x68) = *(int *)(unaff_RDI + 0x68) + uVar6;
  uVar22 = (ulonglong)(uVar6 >> 4 & 0xfffffff0);
  bVar14 = *(byte *)(lVar3 + uVar22);
  auVar27 = pshufb(ZEXT416(uVar6),(undefined1  [16])0x0);
  pcVar1 = (char *)(lVar3 + uVar22);
  auVar28[0] = -(*pcVar1 == auVar27[0]);
  auVar28[1] = -(pcVar1[1] == auVar27[1]);
  auVar28[2] = -(pcVar1[2] == auVar27[2]);
  auVar28[3] = -(pcVar1[3] == auVar27[3]);
  auVar28[4] = -(pcVar1[4] == auVar27[4]);
  auVar28[5] = -(pcVar1[5] == auVar27[5]);
  auVar28[6] = -(pcVar1[6] == auVar27[6]);
  auVar28[7] = -(pcVar1[7] == auVar27[7]);
  auVar28[8] = -(pcVar1[8] == auVar27[8]);
  auVar28[9] = -(pcVar1[9] == auVar27[9]);
  auVar28[10] = -(pcVar1[10] == auVar27[10]);
  auVar28[0xb] = -(pcVar1[0xb] == auVar27[0xb]);
  auVar28[0xc] = -(pcVar1[0xc] == auVar27[0xc]);
  auVar28[0xd] = -(pcVar1[0xd] == auVar27[0xd]);
  auVar28[0xe] = -(pcVar1[0xe] == auVar27[0xe]);
  auVar28[0xf] = -(pcVar1[0xf] == auVar27[0xf]);
  uVar15 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
  uVar15 = uVar15 >> (bVar14 & 0xf) | uVar15 << 0x10 - (bVar14 & 0xf);
  lVar11 = lVar11 + uVar22 * 4;
  lVar20 = 0;
  if (uVar15 != 0) {
    uVar18 = (ulonglong)uVar15;
    lVar25 = 0;
    do {
      lVar4 = 0;
      if (uVar18 != 0) {
        for (; (uVar18 >> lVar4 & 1) == 0; lVar4 = lVar4 + 1) {
        }
      }
      uVar7 = (ulonglong)((int)lVar4 + (uint)bVar14 & 0xf);
      if (uVar7 != 0) {
        uVar10 = *(uint *)(lVar11 + uVar7 * 4);
        if (uVar10 < uVar5) goto LAB_00ed568b;
        auStack_138[lVar25] = uVar10;
        lVar25 = lVar25 + 1;
        iVar24 = iVar24 + -1;
      }
      uVar18 = uVar18 & uVar18 - 1;
      if ((uVar18 == 0) || (iVar24 == 0)) goto LAB_00ed568b;
    } while( true );
  }
  lVar25 = 0;
LAB_00ed568b:
  uVar18 = (ulonglong)(bVar14 - 1 & 0xf);
  if (uVar18 == 0) {
    lVar20 = 0xf;
  }
  lVar20 = lVar20 + uVar18;
  *(undefined1 *)(lVar3 + uVar22) = (char)lVar20;
  ((undefined1 *)(lVar3 + uVar22))[lVar20] = (char)uVar6;
  iVar24 = *(int *)(unaff_RDI + 0x2c);
  *(int *)(unaff_RDI + 0x2c) = iVar24 + 1;
  *(int *)(lVar11 + lVar20 * 4) = iVar24;
  if (lVar25 == 0) {
    uVar22 = 3;
  }
  else {
    lVar11 = 0;
    uVar18 = 3;
    do {
      uVar10 = auStack_138[lVar11];
      puVar26 = (ulonglong *)(lVar2 + (ulonglong)uVar10);
      if (*(int *)((uVar18 - 3) + (longlong)puVar26) == *(int *)((longlong)unaff_RSI + (uVar18 - 3))
         ) {
        puVar8 = unaff_RSI;
        if (unaff_RSI < (ulonglong *)((longlong)param_2 - 7U)) {
          uVar7 = *unaff_RSI ^ *puVar26;
          if (uVar7 == 0) {
            lVar3 = lVar2 + 8 + (ulonglong)uVar10;
            lVar20 = 0;
            do {
              puVar8 = (ulonglong *)((longlong)unaff_RSI + lVar20 + 8);
              if ((ulonglong *)((longlong)param_2 - 7U) <= puVar8) {
                puVar26 = (ulonglong *)(lVar3 + lVar20);
                goto LAB_00ed572f;
              }
              lVar4 = lVar20 + 8;
              uVar22 = *(ulonglong *)((longlong)unaff_RSI + lVar20 + 8) ^
                       *(ulonglong *)(lVar3 + lVar20);
              lVar20 = lVar4;
            } while (uVar22 == 0);
            uVar7 = 0;
            if (uVar22 != 0) {
              for (; (uVar22 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
              }
            }
            uVar22 = (uVar7 >> 3) + lVar4;
          }
          else {
            uVar22 = 0;
            if (uVar7 != 0) {
              for (; (uVar7 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
              }
            }
            uVar22 = uVar22 >> 3;
          }
        }
        else {
LAB_00ed572f:
          if ((puVar8 < (ulonglong *)((longlong)param_2 - 3U)) && ((int)*puVar26 == (int)*puVar8)) {
            puVar8 = (ulonglong *)((longlong)puVar8 + 4);
            puVar26 = (ulonglong *)((longlong)puVar26 + 4);
          }
          if ((puVar8 < (ulonglong *)((longlong)param_2 - 1U)) &&
             ((short)*puVar26 == (short)*puVar8)) {
            puVar8 = (ulonglong *)((longlong)puVar8 + 2);
            puVar26 = (ulonglong *)((longlong)puVar26 + 2);
          }
          if (puVar8 < param_2) {
            puVar8 = (ulonglong *)((longlong)puVar8 + (ulonglong)((char)*puVar26 == (char)*puVar8));
          }
          uVar22 = (longlong)puVar8 - (longlong)unaff_RSI;
        }
        if ((uVar18 < uVar22) &&
           (*param_1 = (ulonglong)((uVar21 + 3) - uVar10), uVar18 = uVar22,
           (ulonglong *)((longlong)unaff_RSI + uVar22) == param_2)) break;
      }
      uVar22 = uVar18;
      lVar11 = lVar11 + 1;
      uVar18 = uVar22;
    } while (lVar11 != lVar25);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar22;
}


