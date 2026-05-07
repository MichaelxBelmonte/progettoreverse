// Function: FUN_00ed53ef
// Address: 00ed53ef
// Size: 1504 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00ed53ef(uint64_t *param_1,uint64_t *param_2)

{
  char *pcVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint uVar5;
  uint uVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  byte bVar9;
  uint uVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  byte bVar14;
  ushort uVar15;
  uint uVar16;
  char cVar17;
  uint64_t uVar18;
  uint64_t *arg1;
  int64_t this_ptr;
  byte bVar19;
  int64_t lVar20;
  uint uVar21;
  uint64_t uVar22;
  int64_t lVar23;
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
  uVar22 = (int64_t)arg1 - lVar2;
  uVar10 = *(uint *)(this_ptr + 0x1c);
  uVar21 = (uint)uVar22;
  uVar5 = uVar21 - uVar6;
  if (uVar21 - uVar10 <= uVar6) {
    uVar5 = uVar10;
  }
  lVar11 = *(int64_t *)(this_ptr + 0x70);
  lVar3 = *(int64_t *)(this_ptr + 0x38);
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar5 = uVar10;
  }
  uVar10 = 4;
  if (*(uint *)(this_ptr + 0x10c) < 4) {
    uVar10 = *(uint *)(this_ptr + 0x10c);
  }
  iVar24 = 1 << ((byte)uVar10 & 0x1f);
  uVar12 = *(void*)(this_ptr + 0x60);
  uVar10 = (uint)uVar12;
  cVar17 = (char)*(void*)(this_ptr + 0x34);
  if (*(int *)(this_ptr + 300) == 0) {
    uVar6 = *(uint *)(this_ptr + 0x2c);
    uVar18 = (uint64_t)uVar6;
    bVar9 = 0x18 - cVar17;
    lVar25 = lVar11;
    lVar20 = lVar3;
    bVar14 = bVar9;
    if (0x180 < uVar21 - uVar6) {
      if (uVar6 < 0xffffffa0) {
        uVar7 = uVar18 + 0x5f;
        while( true ) {
          uVar13 = (uint64_t)((uint)uVar18 & 7);
          uVar6 = *(uint *)(this_ptr + 0x40 + uVar13 * 4);
          *(uint *)(this_ptr + 0x40 + uVar13 * 4) =
               (*(int *)(lVar2 + 8 + uVar18) * -0x61c8864f ^ (uint)uVar12) >> (bVar9 & 0x1f);
          uVar13 = (uint64_t)(uVar6 >> 4 & 0xffffff0);
          bVar14 = *(char *)(lVar3 + uVar13) - 1U & 0xf;
          lVar20 = 0;
          if (bVar14 == 0) {
            lVar20 = 0xf;
          }
          lVar20 = (uint64_t)bVar14 + lVar20;
          *(char *)(lVar3 + uVar13) = (char)lVar20;
          *(char *)(lVar3 + uVar13 + lVar20) = (char)uVar6;
          *(uint *)(lVar11 + (lVar20 + uVar13) * 4) = (uint)uVar18;
          if (uVar7 == uVar18) break;
          uVar12 = *(void*)(this_ptr + 0x60);
          uVar18 = uVar18 + 1;
        }
        lVar20 = *(int64_t *)(this_ptr + 0x38);
        lVar25 = *(int64_t *)(this_ptr + 0x70);
        bVar14 = 0x18 - (char)*(void*)(this_ptr + 0x34);
      }
      uVar18 = (uint64_t)(uVar21 - 0x20);
      uVar6 = 0;
      if (lVar2 + uVar18 <= (int64_t)arg1 + 1U) {
        uVar6 = ((int)((int64_t)arg1 + 1U) - (int)(lVar2 + uVar18)) + 1;
      }
      uVar16 = 8;
      if (uVar6 < 8) {
        uVar16 = uVar6;
      }
      uVar6 = (uVar16 + uVar21) - 0x20;
      if (uVar21 - 0x20 < uVar6) {
        uVar16 = *(uint *)(this_ptr + 0x60);
        uVar7 = uVar18;
        do {
          *(uint *)(this_ptr + 0x40 + (uint64_t)((uint)uVar7 & 7) * 4) =
               (*(int *)(lVar2 + uVar7) * -0x61c8864f ^ uVar16) >> (bVar14 & 0x1f);
          uVar7 = uVar7 + 1;
        } while (uVar6 != uVar7);
      }
    }
    if ((uint)uVar18 < uVar21) {
      lVar4 = *(int64_t *)(this_ptr + 8);
      do {
        uVar7 = (uint64_t)((uint)uVar18 & 7);
        uVar6 = *(uint *)(this_ptr + 0x40 + uVar7 * 4);
        *(uint *)(this_ptr + 0x40 + uVar7 * 4) =
             (*(int *)(lVar4 + 8 + uVar18) * -0x61c8864f ^ *(uint *)(this_ptr + 0x60)) >>
             (bVar14 & 0x1f);
        uVar7 = (uint64_t)(uVar6 >> 4 & 0xffffff0);
        bVar19 = *(char *)(lVar20 + uVar7) - 1U & 0xf;
        lVar23 = 0;
        if (bVar19 == 0) {
          lVar23 = 0xf;
        }
        lVar23 = (uint64_t)bVar19 + lVar23;
        *(char *)(lVar20 + uVar7) = (char)lVar23;
        *(char *)(lVar20 + uVar7 + lVar23) = (char)uVar6;
        *(uint *)(lVar25 + (lVar23 + uVar7) * 4) = (uint)uVar18;
        uVar18 = uVar18 + 1;
      } while ((uVar22 & 0xffffffff) != uVar18);
    }
    *(uint *)(this_ptr + 0x2c) = uVar21;
    uVar6 = *(uint *)(this_ptr + 0x40 + (uint64_t)(uVar21 & 7) * 4);
    *(uint *)(this_ptr + 0x40 + (uint64_t)(uVar21 & 7) * 4) =
         (*(int *)((uVar22 & 0xffffffff) + 8 + lVar2) * -0x61c8864f ^ uVar10) >> (bVar9 & 0x1f);
  }
  else {
    uVar6 = ((int)*arg1 * -0x61c8864f ^ uVar10) >> (0x18U - cVar17 & 0x1f);
    *(uint *)(this_ptr + 0x2c) = uVar21;
  }
  *(int *)(this_ptr + 0x68) = *(int *)(this_ptr + 0x68) + uVar6;
  uVar22 = (uint64_t)(uVar6 >> 4 & 0xfffffff0);
  bVar14 = *(byte *)(lVar3 + uVar22);
  auVar27 = pshufb(ZEXT416(uVar6),(uint8_t  [16])0x0);
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
    uVar18 = (uint64_t)uVar15;
    lVar25 = 0;
    do {
      lVar4 = 0;
      if (uVar18 != 0) {
        for (; (uVar18 >> lVar4 & 1) == 0; lVar4 = lVar4 + 1) {
        }
      }
      uVar7 = (uint64_t)((int)lVar4 + (uint)bVar14 & 0xf);
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
  uVar18 = (uint64_t)(bVar14 - 1 & 0xf);
  if (uVar18 == 0) {
    lVar20 = 0xf;
  }
  lVar20 = lVar20 + uVar18;
  *(void*)(lVar3 + uVar22) = (char)lVar20;
  ((void*)(lVar3 + uVar22))[lVar20] = (char)uVar6;
  iVar24 = *(int *)(this_ptr + 0x2c);
  *(int *)(this_ptr + 0x2c) = iVar24 + 1;
  *(int *)(lVar11 + lVar20 * 4) = iVar24;
  if (lVar25 == 0) {
    uVar22 = 3;
  }
  else {
    lVar11 = 0;
    uVar18 = 3;
    do {
      uVar10 = auStack_138[lVar11];
      puVar26 = (uint64_t *)(lVar2 + (uint64_t)uVar10);
      if (*(int *)((uVar18 - 3) + (int64_t)puVar26) == *(int *)((int64_t)arg1 + (uVar18 - 3))
         ) {
        puVar8 = arg1;
        if (arg1 < (uint64_t *)((int64_t)param_2 - 7U)) {
          uVar7 = *arg1 ^ *puVar26;
          if (uVar7 == 0) {
            lVar3 = lVar2 + 8 + (uint64_t)uVar10;
            lVar20 = 0;
            do {
              puVar8 = (uint64_t *)((int64_t)arg1 + lVar20 + 8);
              if ((uint64_t *)((int64_t)param_2 - 7U) <= puVar8) {
                puVar26 = (uint64_t *)(lVar3 + lVar20);
                goto LAB_00ed572f;
              }
              lVar4 = lVar20 + 8;
              uVar22 = *(uint64_t *)((int64_t)arg1 + lVar20 + 8) ^
                       *(uint64_t *)(lVar3 + lVar20);
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
          if ((puVar8 < (uint64_t *)((int64_t)param_2 - 3U)) && ((int)*puVar26 == (int)*puVar8)) {
            puVar8 = (uint64_t *)((int64_t)puVar8 + 4);
            puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
          }
          if ((puVar8 < (uint64_t *)((int64_t)param_2 - 1U)) &&
             ((short)*puVar26 == (short)*puVar8)) {
            puVar8 = (uint64_t *)((int64_t)puVar8 + 2);
            puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
          }
          if (puVar8 < param_2) {
            puVar8 = (uint64_t *)((int64_t)puVar8 + (uint64_t)((char)*puVar26 == (char)*puVar8));
          }
          uVar22 = (int64_t)puVar8 - (int64_t)arg1;
        }
        if ((uVar18 < uVar22) &&
           (*param_1 = (uint64_t)((uVar21 + 3) - uVar10), uVar18 = uVar22,
           (uint64_t *)((int64_t)arg1 + uVar22) == param_2)) break;
      }
      uVar22 = uVar18;
      lVar11 = lVar11 + 1;
      uVar18 = uVar22;
    } while (lVar11 != lVar25);
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return uVar22;
}

