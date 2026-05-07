// Function: FUN_00ed7900
// Address: 00ed7900
// Size: 1608 bytes
// Class: GNString


ulonglong FUN_00ed7900(ulonglong *param_1,ulonglong *param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  byte bVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  ushort uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  byte bVar18;
  uint uVar19;
  ulonglong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
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
  uVar23 = (longlong)unaff_RSI - lVar2;
  uVar7 = *(uint *)(unaff_RDI + 0x1c);
  uVar22 = (uint)uVar23;
  uVar19 = uVar22 - uVar6;
  if (uVar22 - uVar7 <= uVar6) {
    uVar19 = uVar7;
  }
  lVar11 = *(longlong *)(unaff_RDI + 0x70);
  lVar3 = *(longlong *)(unaff_RDI + 0x38);
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar19 = uVar7;
  }
  uVar7 = 4;
  if (*(uint *)(unaff_RDI + 0x10c) < 4) {
    uVar7 = *(uint *)(unaff_RDI + 0x10c);
  }
  iVar24 = 1 << ((byte)uVar7 & 0x1f);
  uVar17 = *(ulonglong *)(unaff_RDI + 0x60);
  cVar5 = (char)*(undefined4 *)(unaff_RDI + 0x34);
  if (*(int *)(unaff_RDI + 300) == 0) {
    uVar7 = *(uint *)(unaff_RDI + 0x2c);
    uVar8 = (ulonglong)uVar7;
    bVar10 = 0x38 - cVar5;
    lVar25 = lVar11;
    lVar21 = lVar3;
    bVar14 = bVar10;
    if (0x180 < uVar22 - uVar7) {
      if (uVar7 < 0xffffffa0) {
        uVar16 = uVar8 + 0x5f;
        uVar13 = uVar17;
        while( true ) {
          uVar12 = (ulonglong)((uint)uVar8 & 7);
          uVar7 = *(uint *)(unaff_RDI + 0x40 + uVar12 * 4);
          *(int *)(unaff_RDI + 0x40 + uVar12 * 4) =
               (int)((*(longlong *)(lVar2 + 8 + uVar8) * -0x30e4432340650000 ^ uVar13) >>
                    (bVar10 & 0x3f));
          uVar13 = (ulonglong)(uVar7 >> 4) & 0xffffff0;
          bVar14 = *(char *)(lVar3 + uVar13) - 1U & 0xf;
          lVar21 = 0;
          if (bVar14 == 0) {
            lVar21 = 0xf;
          }
          lVar21 = (ulonglong)bVar14 + lVar21;
          *(char *)(lVar3 + uVar13) = (char)lVar21;
          *(char *)(uVar13 + lVar3 + lVar21) = (char)uVar7;
          *(uint *)(lVar11 + (lVar21 + uVar13) * 4) = (uint)uVar8;
          if (uVar16 == uVar8) break;
          uVar13 = *(ulonglong *)(unaff_RDI + 0x60);
          uVar8 = uVar8 + 1;
        }
        lVar21 = *(longlong *)(unaff_RDI + 0x38);
        lVar25 = *(longlong *)(unaff_RDI + 0x70);
        bVar14 = 0x38 - (char)*(undefined4 *)(unaff_RDI + 0x34);
      }
      uVar8 = (ulonglong)(uVar22 - 0x20);
      uVar7 = 0;
      if (lVar2 + uVar8 <= (longlong)unaff_RSI + 1U) {
        uVar7 = ((int)((longlong)unaff_RSI + 1U) - (int)(lVar2 + uVar8)) + 1;
      }
      uVar6 = 8;
      if (uVar7 < 8) {
        uVar6 = uVar7;
      }
      uVar7 = (uVar6 + uVar22) - 0x20;
      if (uVar22 - 0x20 < uVar7) {
        uVar16 = *(ulonglong *)(unaff_RDI + 0x60);
        uVar13 = uVar8;
        do {
          *(int *)(unaff_RDI + 0x40 + (ulonglong)((uint)uVar13 & 7) * 4) =
               (int)((*(longlong *)(lVar2 + uVar13) * -0x30e4432340650000 ^ uVar16) >>
                    (bVar14 & 0x3f));
          uVar13 = uVar13 + 1;
        } while (uVar7 != uVar13);
      }
    }
    if ((uint)uVar8 < uVar22) {
      lVar4 = *(longlong *)(unaff_RDI + 8);
      do {
        uVar16 = (ulonglong)((uint)uVar8 & 7);
        uVar7 = *(uint *)(unaff_RDI + 0x40 + uVar16 * 4);
        *(int *)(unaff_RDI + 0x40 + uVar16 * 4) =
             (int)((*(longlong *)(lVar4 + 8 + uVar8) * -0x30e4432340650000 ^
                   *(ulonglong *)(unaff_RDI + 0x60)) >> (bVar14 & 0x3f));
        uVar16 = (ulonglong)(uVar7 >> 4) & 0xffffff0;
        bVar18 = *(char *)(lVar21 + uVar16) - 1U & 0xf;
        lVar20 = 0;
        if (bVar18 == 0) {
          lVar20 = 0xf;
        }
        lVar20 = (ulonglong)bVar18 + lVar20;
        *(char *)(lVar21 + uVar16) = (char)lVar20;
        *(char *)(lVar21 + uVar16 + lVar20) = (char)uVar7;
        *(uint *)(lVar25 + (lVar20 + uVar16) * 4) = (uint)uVar8;
        uVar8 = uVar8 + 1;
      } while ((uVar23 & 0xffffffff) != uVar8);
    }
    *(uint *)(unaff_RDI + 0x2c) = uVar22;
    uVar8 = (ulonglong)*(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar22 & 7) * 4);
    *(int *)(unaff_RDI + 0x40 + (ulonglong)(uVar22 & 7) * 4) =
         (int)((*(longlong *)((uVar23 & 0xffffffff) + 8 + lVar2) * -0x30e4432340650000 ^ uVar17) >>
              (bVar10 & 0x3f));
  }
  else {
    uVar23 = *unaff_RSI;
    *(uint *)(unaff_RDI + 0x2c) = uVar22;
    uVar8 = (uVar23 * -0x30e4432340650000 ^ uVar17) >> (0x38U - cVar5 & 0x3f) & 0xffffffff;
  }
  *(int *)(unaff_RDI + 0x68) = *(int *)(unaff_RDI + 0x68) + (uint)uVar8;
  uVar23 = (ulonglong)((uint)(uVar8 >> 4) & 0xffffff0);
  bVar14 = *(byte *)(lVar3 + uVar23);
  auVar27 = pshufb(ZEXT416((uint)uVar8),(undefined1  [16])0x0);
  pcVar1 = (char *)(lVar3 + uVar23);
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
  lVar11 = lVar11 + uVar23 * 4;
  lVar21 = 0;
  if (uVar15 != 0) {
    uVar17 = (ulonglong)uVar15;
    lVar25 = 0;
    do {
      lVar4 = 0;
      if (uVar17 != 0) {
        for (; (uVar17 >> lVar4 & 1) == 0; lVar4 = lVar4 + 1) {
        }
      }
      uVar16 = (ulonglong)((int)lVar4 + (uint)bVar14 & 0xf);
      if (uVar16 != 0) {
        uVar7 = *(uint *)(lVar11 + uVar16 * 4);
        if (uVar7 < uVar19) goto LAB_00ed7bbf;
        auStack_138[lVar25] = uVar7;
        lVar25 = lVar25 + 1;
        iVar24 = iVar24 + -1;
      }
      uVar17 = uVar17 & uVar17 - 1;
      if ((uVar17 == 0) || (iVar24 == 0)) goto LAB_00ed7bbf;
    } while( true );
  }
  lVar25 = 0;
LAB_00ed7bbf:
  uVar17 = (ulonglong)(bVar14 - 1 & 0xf);
  if (uVar17 == 0) {
    lVar21 = 0xf;
  }
  lVar21 = lVar21 + uVar17;
  *(undefined1 *)(uVar23 + lVar3) = (char)lVar21;
  ((undefined1 *)(uVar23 + lVar3))[lVar21] = (char)uVar8;
  iVar24 = *(int *)(unaff_RDI + 0x2c);
  *(int *)(unaff_RDI + 0x2c) = iVar24 + 1;
  *(int *)(lVar11 + lVar21 * 4) = iVar24;
  if (lVar25 == 0) {
    uVar23 = 3;
  }
  else {
    lVar11 = 0;
    uVar17 = 3;
    do {
      uVar7 = auStack_138[lVar11];
      puVar26 = (ulonglong *)(lVar2 + (ulonglong)uVar7);
      if (*(int *)((uVar17 - 3) + (longlong)puVar26) == *(int *)((longlong)unaff_RSI + (uVar17 - 3))
         ) {
        puVar9 = unaff_RSI;
        if (unaff_RSI < (ulonglong *)((longlong)param_2 - 7U)) {
          uVar8 = *unaff_RSI ^ *puVar26;
          if (uVar8 == 0) {
            lVar3 = lVar2 + 8 + (ulonglong)uVar7;
            lVar21 = 0;
            do {
              puVar9 = (ulonglong *)((longlong)unaff_RSI + lVar21 + 8);
              if ((ulonglong *)((longlong)param_2 - 7U) <= puVar9) {
                puVar26 = (ulonglong *)(lVar3 + lVar21);
                goto LAB_00ed7c5b;
              }
              lVar4 = lVar21 + 8;
              uVar23 = *(ulonglong *)((longlong)unaff_RSI + lVar21 + 8) ^
                       *(ulonglong *)(lVar3 + lVar21);
              lVar21 = lVar4;
            } while (uVar23 == 0);
            uVar8 = 0;
            if (uVar23 != 0) {
              for (; (uVar23 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
              }
            }
            uVar23 = (uVar8 >> 3) + lVar4;
          }
          else {
            uVar23 = 0;
            if (uVar8 != 0) {
              for (; (uVar8 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
              }
            }
            uVar23 = uVar23 >> 3;
          }
        }
        else {
LAB_00ed7c5b:
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
          uVar23 = (longlong)puVar9 - (longlong)unaff_RSI;
        }
        if ((uVar17 < uVar23) &&
           (*param_1 = (ulonglong)((uVar22 + 3) - uVar7), uVar17 = uVar23,
           (ulonglong *)((longlong)unaff_RSI + uVar23) == param_2)) break;
      }
      uVar23 = uVar17;
      lVar11 = lVar11 + 1;
      uVar17 = uVar23;
    } while (lVar11 != lVar25);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar23;
}


