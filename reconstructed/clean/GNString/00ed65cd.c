// Function: FUN_00ed65cd
// Address: 00ed65cd
// Size: 1608 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00ed65cd(uint64_t *param_1,uint64_t *param_2)

{
  char *pcVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  byte bVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  byte bVar14;
  ushort uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  byte bVar18;
  uint uVar19;
  uint64_t *arg1;
  int64_t this_ptr;
  int64_t lVar20;
  int64_t lVar21;
  uint uVar22;
  uint64_t uVar23;
  int iVar24;
  int64_t lVar25;
  uint64_t *puVar26;
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint auStack_138 [64];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  lVar2 = *(int64_t *)(this_ptr + 8);
  uVar6 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
  uVar23 = (int64_t)arg1 - lVar2;
  uVar7 = *(uint *)(this_ptr + 0x1c);
  uVar22 = (uint)uVar23;
  uVar19 = uVar22 - uVar6;
  if (uVar22 - uVar7 <= uVar6) {
    uVar19 = uVar7;
  }
  lVar11 = *(int64_t *)(this_ptr + 0x70);
  lVar3 = *(int64_t *)(this_ptr + 0x38);
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar19 = uVar7;
  }
  uVar7 = 4;
  if (*(uint *)(this_ptr + 0x10c) < 4) {
    uVar7 = *(uint *)(this_ptr + 0x10c);
  }
  iVar24 = 1 << ((byte)uVar7 & 0x1f);
  uVar17 = *(uint64_t *)(this_ptr + 0x60);
  cVar5 = (char)*(void*)(this_ptr + 0x34);
  if (*(int *)(this_ptr + 300) == 0) {
    uVar7 = *(uint *)(this_ptr + 0x2c);
    uVar8 = (uint64_t)uVar7;
    bVar10 = 0x38 - cVar5;
    lVar25 = lVar11;
    lVar21 = lVar3;
    bVar14 = bVar10;
    if (0x180 < uVar22 - uVar7) {
      if (uVar7 < 0xffffffa0) {
        uVar16 = uVar8 + 0x5f;
        uVar13 = uVar17;
        while( true ) {
          uVar12 = (uint64_t)((uint)uVar8 & 7);
          uVar7 = *(uint *)(this_ptr + 0x40 + uVar12 * 4);
          *(int *)(this_ptr + 0x40 + uVar12 * 4) =
               (int)((*(int64_t *)(lVar2 + 8 + uVar8) * -0x30e4432345000000 ^ uVar13) >>
                    (bVar10 & 0x3f));
          uVar13 = (uint64_t)(uVar7 >> 4) & 0xffffff0;
          bVar14 = *(char *)(lVar3 + uVar13) - 1U & 0xf;
          lVar21 = 0;
          if (bVar14 == 0) {
            lVar21 = 0xf;
          }
          lVar21 = (uint64_t)bVar14 + lVar21;
          *(char *)(lVar3 + uVar13) = (char)lVar21;
          *(char *)(uVar13 + lVar3 + lVar21) = (char)uVar7;
          *(uint *)(lVar11 + (lVar21 + uVar13) * 4) = (uint)uVar8;
          if (uVar16 == uVar8) break;
          uVar13 = *(uint64_t *)(this_ptr + 0x60);
          uVar8 = uVar8 + 1;
        }
        lVar21 = *(int64_t *)(this_ptr + 0x38);
        lVar25 = *(int64_t *)(this_ptr + 0x70);
        bVar14 = 0x38 - (char)*(void*)(this_ptr + 0x34);
      }
      uVar8 = (uint64_t)(uVar22 - 0x20);
      uVar7 = 0;
      if (lVar2 + uVar8 <= (int64_t)arg1 + 1U) {
        uVar7 = ((int)((int64_t)arg1 + 1U) - (int)(lVar2 + uVar8)) + 1;
      }
      uVar6 = 8;
      if (uVar7 < 8) {
        uVar6 = uVar7;
      }
      uVar7 = (uVar6 + uVar22) - 0x20;
      if (uVar22 - 0x20 < uVar7) {
        uVar16 = *(uint64_t *)(this_ptr + 0x60);
        uVar13 = uVar8;
        do {
          *(int *)(this_ptr + 0x40 + (uint64_t)((uint)uVar13 & 7) * 4) =
               (int)((*(int64_t *)(lVar2 + uVar13) * -0x30e4432345000000 ^ uVar16) >>
                    (bVar14 & 0x3f));
          uVar13 = uVar13 + 1;
        } while (uVar7 != uVar13);
      }
    }
    if ((uint)uVar8 < uVar22) {
      lVar4 = *(int64_t *)(this_ptr + 8);
      do {
        uVar16 = (uint64_t)((uint)uVar8 & 7);
        uVar7 = *(uint *)(this_ptr + 0x40 + uVar16 * 4);
        *(int *)(this_ptr + 0x40 + uVar16 * 4) =
             (int)((*(int64_t *)(lVar4 + 8 + uVar8) * -0x30e4432345000000 ^
                   *(uint64_t *)(this_ptr + 0x60)) >> (bVar14 & 0x3f));
        uVar16 = (uint64_t)(uVar7 >> 4) & 0xffffff0;
        bVar18 = *(char *)(lVar21 + uVar16) - 1U & 0xf;
        lVar20 = 0;
        if (bVar18 == 0) {
          lVar20 = 0xf;
        }
        lVar20 = (uint64_t)bVar18 + lVar20;
        *(char *)(lVar21 + uVar16) = (char)lVar20;
        *(char *)(lVar21 + uVar16 + lVar20) = (char)uVar7;
        *(uint *)(lVar25 + (lVar20 + uVar16) * 4) = (uint)uVar8;
        uVar8 = uVar8 + 1;
      } while ((uVar23 & 0xffffffff) != uVar8);
    }
    *(uint *)(this_ptr + 0x2c) = uVar22;
    uVar8 = (uint64_t)*(uint *)(this_ptr + 0x40 + (uint64_t)(uVar22 & 7) * 4);
    *(int *)(this_ptr + 0x40 + (uint64_t)(uVar22 & 7) * 4) =
         (int)((*(int64_t *)((uVar23 & 0xffffffff) + 8 + lVar2) * -0x30e4432345000000 ^ uVar17) >>
              (bVar10 & 0x3f));
  }
  else {
    uVar23 = *arg1;
    *(uint *)(this_ptr + 0x2c) = uVar22;
    uVar8 = (uVar23 * -0x30e4432345000000 ^ uVar17) >> (0x38U - cVar5 & 0x3f) & 0xffffffff;
  }
  *(int *)(this_ptr + 0x68) = *(int *)(this_ptr + 0x68) + (uint)uVar8;
  uVar23 = (uint64_t)((uint)(uVar8 >> 4) & 0xffffff0);
  bVar14 = *(byte *)(lVar3 + uVar23);
  auVar27 = pshufb(ZEXT416((uint)uVar8),(uint8_t  [16])0x0);
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
    uVar17 = (uint64_t)uVar15;
    lVar25 = 0;
    do {
      lVar4 = 0;
      if (uVar17 != 0) {
        for (; (uVar17 >> lVar4 & 1) == 0; lVar4 = lVar4 + 1) {
        }
      }
      uVar16 = (uint64_t)((int)lVar4 + (uint)bVar14 & 0xf);
      if (uVar16 != 0) {
        uVar7 = *(uint *)(lVar11 + uVar16 * 4);
        if (uVar7 < uVar19) goto LAB_00ed688c;
        auStack_138[lVar25] = uVar7;
        lVar25 = lVar25 + 1;
        iVar24 = iVar24 + -1;
      }
      uVar17 = uVar17 & uVar17 - 1;
      if ((uVar17 == 0) || (iVar24 == 0)) goto LAB_00ed688c;
    } while( true );
  }
  lVar25 = 0;
LAB_00ed688c:
  uVar17 = (uint64_t)(bVar14 - 1 & 0xf);
  if (uVar17 == 0) {
    lVar21 = 0xf;
  }
  lVar21 = lVar21 + uVar17;
  *(void*)(uVar23 + lVar3) = (char)lVar21;
  ((void*)(uVar23 + lVar3))[lVar21] = (char)uVar8;
  iVar24 = *(int *)(this_ptr + 0x2c);
  *(int *)(this_ptr + 0x2c) = iVar24 + 1;
  *(int *)(lVar11 + lVar21 * 4) = iVar24;
  if (lVar25 == 0) {
    uVar23 = 3;
  }
  else {
    lVar11 = 0;
    uVar17 = 3;
    do {
      uVar7 = auStack_138[lVar11];
      puVar26 = (uint64_t *)(lVar2 + (uint64_t)uVar7);
      if (*(int *)((uVar17 - 3) + (int64_t)puVar26) == *(int *)((int64_t)arg1 + (uVar17 - 3))
         ) {
        puVar9 = arg1;
        if (arg1 < (uint64_t *)((int64_t)param_2 - 7U)) {
          uVar8 = *arg1 ^ *puVar26;
          if (uVar8 == 0) {
            lVar3 = lVar2 + 8 + (uint64_t)uVar7;
            lVar21 = 0;
            do {
              puVar9 = (uint64_t *)((int64_t)arg1 + lVar21 + 8);
              if ((uint64_t *)((int64_t)param_2 - 7U) <= puVar9) {
                puVar26 = (uint64_t *)(lVar3 + lVar21);
                goto LAB_00ed6928;
              }
              lVar4 = lVar21 + 8;
              uVar23 = *(uint64_t *)((int64_t)arg1 + lVar21 + 8) ^
                       *(uint64_t *)(lVar3 + lVar21);
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
LAB_00ed6928:
          if ((puVar9 < (uint64_t *)((int64_t)param_2 - 3U)) && ((int)*puVar26 == (int)*puVar9)) {
            puVar9 = (uint64_t *)((int64_t)puVar9 + 4);
            puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
          }
          if ((puVar9 < (uint64_t *)((int64_t)param_2 - 1U)) &&
             ((short)*puVar26 == (short)*puVar9)) {
            puVar9 = (uint64_t *)((int64_t)puVar9 + 2);
            puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
          }
          if (puVar9 < param_2) {
            puVar9 = (uint64_t *)((int64_t)puVar9 + (uint64_t)((char)*puVar26 == (char)*puVar9));
          }
          uVar23 = (int64_t)puVar9 - (int64_t)arg1;
        }
        if ((uVar17 < uVar23) &&
           (*param_1 = (uint64_t)((uVar22 + 3) - uVar7), uVar17 = uVar23,
           (uint64_t *)((int64_t)arg1 + uVar23) == param_2)) break;
      }
      uVar23 = uVar17;
      lVar11 = lVar11 + 1;
      uVar17 = uVar23;
    } while (lVar11 != lVar25);
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return uVar23;
}

