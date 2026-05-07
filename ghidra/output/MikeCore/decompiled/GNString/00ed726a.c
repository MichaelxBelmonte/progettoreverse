// Function: FUN_00ed726a
// Address: 00ed726a
// Size: 1686 bytes
// Class: GNString


ulonglong FUN_00ed726a(ulonglong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  byte bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte bVar15;
  uint uVar16;
  longlong lVar17;
  byte bVar18;
  longlong lVar19;
  ulonglong *unaff_RSI;
  longlong lVar20;
  longlong unaff_RDI;
  uint uVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  ulonglong *puVar24;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulonglong local_158;
  int local_13c;
  undefined1 local_138 [16] [16];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar4 = *(longlong *)(unaff_RDI + 8);
  uVar7 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar22 = (longlong)unaff_RSI - lVar4;
  uVar16 = *(uint *)(unaff_RDI + 0x1c);
  uVar21 = (uint)uVar22;
  uVar5 = uVar21 - uVar7;
  if (uVar21 - uVar16 <= uVar7) {
    uVar5 = uVar16;
  }
  lVar19 = *(longlong *)(unaff_RDI + 0x70);
  lVar8 = *(longlong *)(unaff_RDI + 0x38);
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar5 = uVar16;
  }
  uVar16 = 6;
  if (*(uint *)(unaff_RDI + 0x10c) < 6) {
    uVar16 = *(uint *)(unaff_RDI + 0x10c);
  }
  local_13c = 1 << ((byte)uVar16 & 0x1f);
  uVar9 = *(ulonglong *)(unaff_RDI + 0x60);
  cVar6 = (char)*(undefined4 *)(unaff_RDI + 0x34);
  if (*(int *)(unaff_RDI + 300) == 0) {
    uVar16 = *(uint *)(unaff_RDI + 0x2c);
    local_158 = (ulonglong)uVar16;
    bVar12 = 0x38 - cVar6;
    lVar25 = lVar8;
    lVar17 = lVar19;
    bVar15 = bVar12;
    if (0x180 < uVar21 - uVar16) {
      if (uVar16 < 0xffffffa0) {
        uVar10 = local_158 + 0x5f;
        uVar14 = uVar9;
        while( true ) {
          uVar13 = (ulonglong)((uint)local_158 & 7);
          uVar16 = *(uint *)(unaff_RDI + 0x40 + uVar13 * 4);
          *(int *)(unaff_RDI + 0x40 + uVar13 * 4) =
               (int)((*(longlong *)(lVar4 + 8 + local_158) * -0x30e4432345000000 ^ uVar14) >>
                    (bVar12 & 0x3f));
          uVar14 = (ulonglong)(uVar16 >> 2) & 0x3fffffc0;
          bVar15 = *(char *)(lVar8 + uVar14) - 1U & 0x3f;
          lVar25 = 0;
          if (bVar15 == 0) {
            lVar25 = 0x3f;
          }
          lVar25 = (ulonglong)bVar15 + lVar25;
          *(char *)(lVar8 + uVar14) = (char)lVar25;
          *(char *)(uVar14 + lVar8 + lVar25) = (char)uVar16;
          *(uint *)(lVar19 + (lVar25 + uVar14) * 4) = (uint)local_158;
          if (uVar10 == local_158) break;
          uVar14 = *(ulonglong *)(unaff_RDI + 0x60);
          local_158 = local_158 + 1;
        }
        lVar25 = *(longlong *)(unaff_RDI + 0x38);
        lVar17 = *(longlong *)(unaff_RDI + 0x70);
        bVar15 = 0x38 - (char)*(undefined4 *)(unaff_RDI + 0x34);
      }
      local_158 = (ulonglong)(uVar21 - 0x20);
      uVar16 = 0;
      if (lVar4 + local_158 <= (longlong)unaff_RSI + 1U) {
        uVar16 = ((int)((longlong)unaff_RSI + 1U) - (int)(lVar4 + local_158)) + 1;
      }
      uVar7 = 8;
      if (uVar16 < 8) {
        uVar7 = uVar16;
      }
      uVar16 = (uVar7 + uVar21) - 0x20;
      if (uVar21 - 0x20 < uVar16) {
        uVar10 = *(ulonglong *)(unaff_RDI + 0x60);
        uVar14 = local_158;
        do {
          *(int *)(unaff_RDI + 0x40 + (ulonglong)((uint)uVar14 & 7) * 4) =
               (int)((*(longlong *)(lVar4 + uVar14) * -0x30e4432345000000 ^ uVar10) >>
                    (bVar15 & 0x3f));
          uVar14 = uVar14 + 1;
        } while (uVar16 != uVar14);
      }
    }
    if ((uint)local_158 < uVar21) {
      lVar1 = *(longlong *)(unaff_RDI + 8);
      do {
        uVar10 = (ulonglong)((uint)local_158 & 7);
        uVar16 = *(uint *)(unaff_RDI + 0x40 + uVar10 * 4);
        *(int *)(unaff_RDI + 0x40 + uVar10 * 4) =
             (int)((*(longlong *)(lVar1 + 8 + local_158) * -0x30e4432345000000 ^
                   *(ulonglong *)(unaff_RDI + 0x60)) >> (bVar15 & 0x3f));
        uVar10 = (ulonglong)(uVar16 >> 2) & 0x3fffffc0;
        bVar18 = *(char *)(lVar25 + uVar10) - 1U & 0x3f;
        lVar20 = 0;
        if (bVar18 == 0) {
          lVar20 = 0x3f;
        }
        lVar20 = (ulonglong)bVar18 + lVar20;
        *(char *)(lVar25 + uVar10) = (char)lVar20;
        *(char *)(uVar10 + lVar25 + lVar20) = (char)uVar16;
        *(uint *)(lVar17 + (lVar20 + uVar10) * 4) = (uint)local_158;
        local_158 = local_158 + 1;
      } while ((uVar22 & 0xffffffff) != local_158);
    }
    *(uint *)(unaff_RDI + 0x2c) = uVar21;
    uVar10 = (ulonglong)*(uint *)(unaff_RDI + 0x40 + (ulonglong)(uVar21 & 7) * 4);
    *(int *)(unaff_RDI + 0x40 + (ulonglong)(uVar21 & 7) * 4) =
         (int)((*(longlong *)((uVar22 & 0xffffffff) + 8 + lVar4) * -0x30e4432345000000 ^ uVar9) >>
              (bVar12 & 0x3f));
  }
  else {
    uVar22 = *unaff_RSI;
    *(uint *)(unaff_RDI + 0x2c) = uVar21;
    uVar10 = (uVar22 * -0x30e4432345000000 ^ uVar9) >> (0x38U - cVar6 & 0x3f) & 0xffffffff;
  }
  *(int *)(unaff_RDI + 0x68) = *(int *)(unaff_RDI + 0x68) + (uint)uVar10;
  uVar22 = (ulonglong)((uint)(uVar10 >> 2) & 0x3fffffc0);
  bVar15 = *(byte *)(lVar8 + uVar22);
  puVar23 = (undefined1 *)(lVar8 + uVar22);
  auVar26 = pshufb(ZEXT416((uint)uVar10),(undefined1  [16])0x0);
  local_138[0] = (undefined1  [16])0x0;
  lVar8 = 0;
  do {
    pcVar2 = puVar23 + lVar8 * 4;
    auVar27[0] = -(*pcVar2 == auVar26[0]);
    auVar27[1] = -(pcVar2[1] == auVar26[1]);
    auVar27[2] = -(pcVar2[2] == auVar26[2]);
    auVar27[3] = -(pcVar2[3] == auVar26[3]);
    auVar27[4] = -(pcVar2[4] == auVar26[4]);
    auVar27[5] = -(pcVar2[5] == auVar26[5]);
    auVar27[6] = -(pcVar2[6] == auVar26[6]);
    auVar27[7] = -(pcVar2[7] == auVar26[7]);
    auVar27[8] = -(pcVar2[8] == auVar26[8]);
    auVar27[9] = -(pcVar2[9] == auVar26[9]);
    auVar27[10] = -(pcVar2[10] == auVar26[10]);
    auVar27[0xb] = -(pcVar2[0xb] == auVar26[0xb]);
    auVar27[0xc] = -(pcVar2[0xc] == auVar26[0xc]);
    auVar27[0xd] = -(pcVar2[0xd] == auVar26[0xd]);
    auVar27[0xe] = -(pcVar2[0xe] == auVar26[0xe]);
    auVar27[0xf] = -(pcVar2[0xf] == auVar26[0xf]);
    *(uint *)(local_138[0] + lVar8) =
         (uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar27[0xf] >> 7) << 0xf);
    lVar8 = lVar8 + 4;
  } while (lVar8 != 0x10);
  uVar9 = (longlong)(int)local_138[0]._4_4_ << 0x10 | (longlong)(int)local_138[0]._0_4_ |
          (ulonglong)(uint)local_138[0]._8_4_ << 0x20 | (ulonglong)(uint)local_138[0]._12_4_ << 0x30
  ;
  uVar9 = uVar9 >> (bVar15 & 0x3f) | uVar9 << 0x40 - (bVar15 & 0x3f);
  lVar19 = lVar19 + uVar22 * 4;
  lVar25 = 0;
  lVar8 = 0;
  if (uVar9 != 0) {
    do {
      lVar17 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> lVar17 & 1) == 0; lVar17 = lVar17 + 1) {
        }
      }
      uVar22 = (ulonglong)((int)lVar17 + (uint)bVar15 & 0x3f);
      if (uVar22 != 0) {
        uVar16 = *(uint *)(lVar19 + uVar22 * 4);
        if (uVar16 < uVar5) break;
        *(uint *)(local_138[0] + lVar8 * 4) = uVar16;
        lVar8 = lVar8 + 1;
        local_13c = local_13c + -1;
      }
      uVar9 = uVar9 & uVar9 - 1;
      if ((uVar9 == 0) || (local_13c == 0)) break;
    } while( true );
  }
  uVar22 = (ulonglong)(bVar15 - 1 & 0x3f);
  if (uVar22 == 0) {
    lVar25 = 0x3f;
  }
  lVar25 = lVar25 + uVar22;
  *puVar23 = (char)lVar25;
  puVar23[lVar25] = (char)uVar10;
  iVar3 = *(int *)(unaff_RDI + 0x2c);
  *(int *)(unaff_RDI + 0x2c) = iVar3 + 1;
  *(int *)(lVar19 + lVar25 * 4) = iVar3;
  if (lVar8 == 0) {
    uVar22 = 3;
  }
  else {
    lVar19 = 0;
    uVar9 = 3;
    do {
      uVar16 = *(uint *)(local_138[0] + lVar19 * 4);
      puVar24 = (ulonglong *)(lVar4 + (ulonglong)uVar16);
      if (*(int *)((uVar9 - 3) + (longlong)puVar24) == *(int *)((longlong)unaff_RSI + (uVar9 - 3)))
      {
        puVar11 = unaff_RSI;
        if (unaff_RSI < (ulonglong *)((longlong)param_2 - 7U)) {
          uVar10 = *unaff_RSI ^ *puVar24;
          if (uVar10 == 0) {
            lVar25 = lVar4 + 8 + (ulonglong)uVar16;
            lVar17 = 0;
            do {
              puVar11 = (ulonglong *)((longlong)unaff_RSI + lVar17 + 8);
              if ((ulonglong *)((longlong)param_2 - 7U) <= puVar11) {
                puVar24 = (ulonglong *)(lVar25 + lVar17);
                goto LAB_00ed7642;
              }
              lVar1 = lVar17 + 8;
              uVar22 = *(ulonglong *)((longlong)unaff_RSI + lVar17 + 8) ^
                       *(ulonglong *)(lVar25 + lVar17);
              lVar17 = lVar1;
            } while (uVar22 == 0);
            uVar10 = 0;
            if (uVar22 != 0) {
              for (; (uVar22 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
              }
            }
            uVar22 = (uVar10 >> 3) + lVar1;
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
LAB_00ed7642:
          if ((puVar11 < (ulonglong *)((longlong)param_2 - 3U)) && ((int)*puVar24 == (int)*puVar11))
          {
            puVar11 = (ulonglong *)((longlong)puVar11 + 4);
            puVar24 = (ulonglong *)((longlong)puVar24 + 4);
          }
          if ((puVar11 < (ulonglong *)((longlong)param_2 - 1U)) &&
             ((short)*puVar24 == (short)*puVar11)) {
            puVar11 = (ulonglong *)((longlong)puVar11 + 2);
            puVar24 = (ulonglong *)((longlong)puVar24 + 2);
          }
          if (puVar11 < param_2) {
            puVar11 = (ulonglong *)
                      ((longlong)puVar11 + (ulonglong)((char)*puVar24 == (char)*puVar11));
          }
          uVar22 = (longlong)puVar11 - (longlong)unaff_RSI;
        }
        if ((uVar9 < uVar22) &&
           (*param_1 = (ulonglong)((uVar21 + 3) - uVar16), uVar9 = uVar22,
           (ulonglong *)((longlong)unaff_RSI + uVar22) == param_2)) break;
      }
      uVar22 = uVar9;
      lVar19 = lVar19 + 1;
      uVar9 = uVar22;
    } while (lVar19 != lVar8);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar22;
}


