// Function: FUN_00ed7f48
// Address: 00ed7f48
// Size: 1621 bytes
// Class: GNString


ulonglong FUN_00ed7f48(ulonglong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  char *pcVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte bVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  byte bVar18;
  int iVar19;
  longlong lVar20;
  ulonglong *unaff_RSI;
  longlong lVar21;
  longlong unaff_RDI;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 *puVar25;
  ulonglong *puVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 local_138 [16] [16];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar4 = *(longlong *)(unaff_RDI + 8);
  uVar7 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar23 = (longlong)unaff_RSI - lVar4;
  uVar14 = *(uint *)(unaff_RDI + 0x1c);
  uVar22 = (uint)uVar23;
  uVar5 = uVar22 - uVar7;
  if (uVar22 - uVar14 <= uVar7) {
    uVar5 = uVar14;
  }
  lVar20 = *(longlong *)(unaff_RDI + 0x70);
  lVar16 = *(longlong *)(unaff_RDI + 0x38);
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar5 = uVar14;
  }
  uVar14 = 5;
  if (*(uint *)(unaff_RDI + 0x10c) < 5) {
    uVar14 = *(uint *)(unaff_RDI + 0x10c);
  }
  iVar19 = 1 << ((byte)uVar14 & 0x1f);
  uVar8 = *(ulonglong *)(unaff_RDI + 0x60);
  cVar6 = (char)*(undefined4 *)(unaff_RDI + 0x34);
  if (*(int *)(unaff_RDI + 300) == 0) {
    uVar14 = *(uint *)(unaff_RDI + 0x2c);
    uVar9 = (ulonglong)uVar14;
    bVar3 = 0x38 - cVar6;
    lVar24 = lVar16;
    lVar17 = lVar20;
    bVar13 = bVar3;
    if (0x180 < uVar22 - uVar14) {
      if (uVar14 < 0xffffffa0) {
        uVar15 = uVar9 + 0x5f;
        uVar12 = uVar8;
        while( true ) {
          uVar11 = (ulonglong)((uint)uVar9 & 7);
          uVar14 = *(uint *)(unaff_RDI + 0x40 + uVar11 * 4);
          *(int *)(unaff_RDI + 0x40 + uVar11 * 4) =
               (int)((*(longlong *)(lVar4 + 8 + uVar9) * -0x30e4432340650000 ^ uVar12) >>
                    (bVar3 & 0x3f));
          uVar12 = (ulonglong)(uVar14 >> 3) & 0x1fffffe0;
          bVar13 = *(char *)(lVar16 + uVar12) - 1U & 0x1f;
          lVar24 = 0;
          if (bVar13 == 0) {
            lVar24 = 0x1f;
          }
          lVar24 = (ulonglong)bVar13 + lVar24;
          *(char *)(lVar16 + uVar12) = (char)lVar24;
          *(char *)(uVar12 + lVar16 + lVar24) = (char)uVar14;
          *(uint *)(lVar20 + (lVar24 + uVar12) * 4) = (uint)uVar9;
          if (uVar15 == uVar9) break;
          uVar12 = *(ulonglong *)(unaff_RDI + 0x60);
          uVar9 = uVar9 + 1;
        }
        lVar24 = *(longlong *)(unaff_RDI + 0x38);
        lVar17 = *(longlong *)(unaff_RDI + 0x70);
        bVar13 = 0x38 - (char)*(undefined4 *)(unaff_RDI + 0x34);
      }
      uVar9 = (ulonglong)(uVar22 - 0x20);
      uVar14 = 0;
      if (lVar4 + uVar9 <= (longlong)unaff_RSI + 1U) {
        uVar14 = ((int)((longlong)unaff_RSI + 1U) - (int)(lVar4 + uVar9)) + 1;
      }
      uVar7 = 8;
      if (uVar14 < 8) {
        uVar7 = uVar14;
      }
      uVar14 = (uVar7 + uVar22) - 0x20;
      if (uVar22 - 0x20 < uVar14) {
        uVar15 = *(ulonglong *)(unaff_RDI + 0x60);
        uVar12 = uVar9;
        do {
          *(int *)(unaff_RDI + 0x40 + (ulonglong)((uint)uVar12 & 7) * 4) =
               (int)((*(longlong *)(lVar4 + uVar12) * -0x30e4432340650000 ^ uVar15) >>
                    (bVar13 & 0x3f));
          uVar12 = uVar12 + 1;
        } while (uVar14 != uVar12);
      }
    }
    if ((uint)uVar9 < uVar22) {
      lVar1 = *(longlong *)(unaff_RDI + 8);
      do {
        uVar15 = (ulonglong)((uint)uVar9 & 7);
        uVar14 = *(uint *)(unaff_RDI + 0x40 + uVar15 * 4);
        *(int *)(unaff_RDI + 0x40 + uVar15 * 4) =
             (int)((*(longlong *)(lVar1 + 8 + uVar9) * -0x30e4432340650000 ^
                   *(ulonglong *)(unaff_RDI + 0x60)) >> (bVar13 & 0x3f));
        uVar15 = (ulonglong)(uVar14 >> 3) & 0x1fffffe0;
        bVar18 = *(char *)(lVar24 + uVar15) - 1U & 0x1f;
        lVar21 = 0;
        if (bVar18 == 0) {
          lVar21 = 0x1f;
        }
        lVar21 = (ulonglong)bVar18 + lVar21;
        *(char *)(lVar24 + uVar15) = (char)lVar21;
        *(char *)(uVar15 + lVar24 + lVar21) = (char)uVar14;
        *(uint *)(lVar17 + (lVar21 + uVar15) * 4) = (uint)uVar9;
        uVar9 = uVar9 + 1;
      } while ((uVar23 & 0xffffffff) != uVar9);
    }
    *(uint *)(unaff_RDI + 0x2c) = uVar22;
    uVar9 = (ulonglong)*(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar22 & 7) * 4);
    *(int *)(unaff_RDI + 0x40 + (ulonglong)(uVar22 & 7) * 4) =
         (int)((*(longlong *)((uVar23 & 0xffffffff) + 8 + lVar4) * -0x30e4432340650000 ^ uVar8) >>
              (bVar3 & 0x3f));
  }
  else {
    uVar23 = *unaff_RSI;
    *(uint *)(unaff_RDI + 0x2c) = uVar22;
    uVar9 = (uVar23 * -0x30e4432340650000 ^ uVar8) >> (0x38U - cVar6 & 0x3f) & 0xffffffff;
  }
  *(int *)(unaff_RDI + 0x68) = *(int *)(unaff_RDI + 0x68) + (uint)uVar9;
  uVar23 = (ulonglong)((uint)(uVar9 >> 3) & 0x1fffffe0);
  bVar3 = *(byte *)(lVar16 + uVar23);
  puVar25 = (undefined1 *)(lVar16 + uVar23);
  auVar27 = pshufb(ZEXT416((uint)uVar9),(undefined1  [16])0x0);
  local_138[0] = (undefined1  [16])0x0;
  lVar16 = 0;
  do {
    pcVar2 = puVar25 + lVar16 * 4;
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
  uVar14 = uVar14 >> (bVar3 & 0x1f) | uVar14 << 0x20 - (bVar3 & 0x1f);
  lVar20 = lVar20 + uVar23 * 4;
  lVar16 = 0;
  if (uVar14 != 0) {
    uVar23 = (ulonglong)uVar14;
    lVar24 = 0;
    do {
      lVar17 = 0;
      if (uVar23 != 0) {
        for (; (uVar23 >> lVar17 & 1) == 0; lVar17 = lVar17 + 1) {
        }
      }
      uVar8 = (ulonglong)((int)lVar17 + (uint)bVar3 & 0x1f);
      if (uVar8 != 0) {
        uVar14 = *(uint *)(lVar20 + uVar8 * 4);
        if (uVar14 < uVar5) goto LAB_00ed8241;
        *(uint *)(local_138[0] + lVar24 * 4) = uVar14;
        lVar24 = lVar24 + 1;
        iVar19 = iVar19 + -1;
      }
      uVar23 = uVar23 & uVar23 - 1;
      if ((uVar23 == 0) || (iVar19 == 0)) goto LAB_00ed8241;
    } while( true );
  }
  lVar24 = 0;
LAB_00ed8241:
  uVar23 = (ulonglong)(bVar3 - 1 & 0x1f);
  if (uVar23 == 0) {
    lVar16 = 0x1f;
  }
  lVar16 = lVar16 + uVar23;
  *puVar25 = (char)lVar16;
  puVar25[lVar16] = (char)uVar9;
  iVar19 = *(int *)(unaff_RDI + 0x2c);
  *(int *)(unaff_RDI + 0x2c) = iVar19 + 1;
  *(int *)(lVar20 + lVar16 * 4) = iVar19;
  if (lVar24 == 0) {
    uVar23 = 3;
  }
  else {
    lVar20 = 0;
    uVar8 = 3;
    do {
      uVar14 = *(uint *)(local_138[0] + lVar20 * 4);
      puVar26 = (ulonglong *)(lVar4 + (ulonglong)uVar14);
      if (*(int *)((uVar8 - 3) + (longlong)puVar26) == *(int *)((longlong)unaff_RSI + (uVar8 - 3)))
      {
        puVar10 = unaff_RSI;
        if (unaff_RSI < (ulonglong *)((longlong)param_2 - 7U)) {
          uVar9 = *unaff_RSI ^ *puVar26;
          if (uVar9 == 0) {
            lVar16 = lVar4 + 8 + (ulonglong)uVar14;
            lVar17 = 0;
            do {
              puVar10 = (ulonglong *)((longlong)unaff_RSI + lVar17 + 8);
              if ((ulonglong *)((longlong)param_2 - 7U) <= puVar10) {
                puVar26 = (ulonglong *)(lVar16 + lVar17);
                goto LAB_00ed82e6;
              }
              lVar1 = lVar17 + 8;
              uVar23 = *(ulonglong *)((longlong)unaff_RSI + lVar17 + 8) ^
                       *(ulonglong *)(lVar16 + lVar17);
              lVar17 = lVar1;
            } while (uVar23 == 0);
            uVar9 = 0;
            if (uVar23 != 0) {
              for (; (uVar23 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
              }
            }
            uVar23 = (uVar9 >> 3) + lVar1;
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
LAB_00ed82e6:
          if ((puVar10 < (ulonglong *)((longlong)param_2 - 3U)) && ((int)*puVar26 == (int)*puVar10))
          {
            puVar10 = (ulonglong *)((longlong)puVar10 + 4);
            puVar26 = (ulonglong *)((longlong)puVar26 + 4);
          }
          if ((puVar10 < (ulonglong *)((longlong)param_2 - 1U)) &&
             ((short)*puVar26 == (short)*puVar10)) {
            puVar10 = (ulonglong *)((longlong)puVar10 + 2);
            puVar26 = (ulonglong *)((longlong)puVar26 + 2);
          }
          if (puVar10 < param_2) {
            puVar10 = (ulonglong *)
                      ((longlong)puVar10 + (ulonglong)((char)*puVar26 == (char)*puVar10));
          }
          uVar23 = (longlong)puVar10 - (longlong)unaff_RSI;
        }
        if ((uVar8 < uVar23) &&
           (*param_1 = (ulonglong)((uVar22 + 3) - uVar14), uVar8 = uVar23,
           (ulonglong *)((longlong)unaff_RSI + uVar23) == param_2)) break;
      }
      uVar23 = uVar8;
      lVar20 = lVar20 + 1;
      uVar8 = uVar23;
    } while (lVar20 != lVar24);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar23;
}


