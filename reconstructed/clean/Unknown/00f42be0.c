// Function: FUN_00f42be0
// Address: 00f42be0
// Size: 2340 bytes
// Class: Unknown

uint64_t FUN_00f42be0(uint64_t param_1,uint64_t param_2)

{
  byte *pbVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint uVar11;
  uint64_t uVar12;
  uint uVar13;
  uint64_t uVar14;
  int64_t lVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t *arg1;
  uint64_t *puVar18;
  uint unaff_EDI;
  uint64_t uVar19;
  uint64_t uVar20;
  
  if (arg1 == (uint64_t *)0x0) {
    return 0;
  }
  uVar19 = (uint64_t)unaff_EDI ^ 0xffffffff;
  if (0x2e < param_2) {
    puVar18 = arg1;
    uVar14 = param_2;
    if (((uint64_t)arg1 & 7) != 0) {
      puVar18 = (uint64_t *)((int64_t)arg1 + 1);
      uVar19 = (uint64_t)
               *(uint *)(&g_023e5190 + (uVar19 & 0xff ^ (uint64_t)(byte)*arg1) * 4) ^
               uVar19 >> 8;
      uVar14 = param_2 - 1;
      if ((uVar14 != 0) && (((uint64_t)puVar18 & 7) != 0)) {
        puVar18 = (uint64_t *)((int64_t)arg1 + 2);
        uVar19 = (uint64_t)
                 *(uint *)(&g_023e5190 +
                          (uVar19 & 0xff ^ (uint64_t)*(byte *)((int64_t)arg1 + 1)) * 4) ^
                 uVar19 >> 8;
        uVar14 = param_2 - 2;
        if ((uVar14 != 0) && (((uint64_t)puVar18 & 7) != 0)) {
          puVar18 = (uint64_t *)((int64_t)arg1 + 3);
          uVar19 = (uint64_t)
                   *(uint *)(&g_023e5190 +
                            (uVar19 & 0xff ^ (uint64_t)*(byte *)((int64_t)arg1 + 2)) * 4) ^
                   uVar19 >> 8;
          uVar14 = param_2 - 3;
          if ((uVar14 != 0) && (((uint64_t)puVar18 & 7) != 0)) {
            puVar18 = (uint64_t *)((int64_t)arg1 + 4);
            uVar19 = (uint64_t)
                     *(uint *)(&g_023e5190 +
                              (uVar19 & 0xff ^ (uint64_t)*(byte *)((int64_t)arg1 + 3)) * 4) ^
                     uVar19 >> 8;
            uVar14 = param_2 - 4;
            if ((uVar14 != 0) && (((uint64_t)puVar18 & 7) != 0)) {
              puVar18 = (uint64_t *)((int64_t)arg1 + 5);
              uVar19 = (uint64_t)
                       *(uint *)(&g_023e5190 +
                                (uVar19 & 0xff ^ (uint64_t)*(byte *)((int64_t)arg1 + 4)) * 4)
                       ^ uVar19 >> 8;
              uVar14 = param_2 - 5;
              if ((uVar14 != 0) && (((uint64_t)puVar18 & 7) != 0)) {
                puVar18 = (uint64_t *)((int64_t)arg1 + 6);
                uVar19 = (uint64_t)
                         *(uint *)(&g_023e5190 +
                                  (uVar19 & 0xff ^ (uint64_t)*(byte *)((int64_t)arg1 + 5)) *
                                  4) ^ uVar19 >> 8;
                uVar14 = param_2 - 6;
                if ((uVar14 != 0) && (((uint64_t)puVar18 & 7) != 0)) {
                  puVar18 = (uint64_t *)((int64_t)arg1 + 7);
                  uVar19 = (uint64_t)
                           *(uint *)(&g_023e5190 +
                                    (uVar19 & 0xff ^ (uint64_t)*(byte *)((int64_t)arg1 + 6))
                                    * 4) ^ uVar19 >> 8;
                  uVar14 = param_2 - 7;
                  if ((uVar14 != 0) && (((uint64_t)puVar18 & 7) != 0)) {
                    uVar14 = param_2 - 8;
                    puVar18 = arg1 + 1;
                    uVar19 = (uint64_t)
                             *(uint *)(&g_023e5190 +
                                      (uVar19 & 0xff ^ (uint64_t)*(byte *)((int64_t)arg1 + 7)
                                      ) * 4) ^ uVar19 >> 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar12 = 0;
    lVar15 = uVar14 / 0x28 - 1;
    if (lVar15 == 0) {
      uVar20 = 0;
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      puVar8 = puVar18 + (uVar14 / 0x28) * 5 + -5;
      uVar9 = 0;
      uVar13 = 0;
      uVar11 = 0;
      uVar10 = uVar12;
      do {
        uVar12 = *puVar18;
        uVar19 = uVar19 ^ uVar12;
        uVar20 = puVar18[1];
        uVar16 = uVar13 ^ uVar20;
        uVar2 = puVar18[2];
        uVar17 = uVar11 ^ uVar2;
        uVar3 = puVar18[3];
        uVar9 = uVar9 ^ uVar3;
        uVar4 = puVar18[4];
        uVar10 = uVar10 ^ uVar4;
        uVar11 = (uint)(uVar12 >> 0x20);
        uVar13 = (uint)(uVar20 >> 0x20);
        uVar5 = (uint)(uVar2 >> 0x20);
        uVar6 = (uint)(uVar3 >> 0x20);
        uVar7 = (uint)(uVar4 >> 0x20);
        uVar19 = (uint64_t)
                 (*(uint *)(&g_023e5990 + (uVar19 >> 8 & 0xff) * 4) ^
                  *(uint *)(&g_023e5590 + (uVar19 & 0xff) * 4) ^
                  *(uint *)(&g_023e5d90 + ((uint)(uVar19 >> 0xe) & 0x3fc)) ^
                  *(uint *)(&g_023e6190 + ((uint)(uVar19 >> 0x16) & 0x3fc)) ^
                  *(uint *)(&g_023e6590 + ((uint)(uVar12 >> 0x1e) & 0x3fc)) ^
                  *(uint *)(&g_023e6990 + (uVar11 >> 6 & 0x3fc)) ^
                  *(uint *)(&g_023e6d90 + (uVar11 >> 0xe & 0x3fc)) ^
                 *(uint *)(&g_023e7190 + (uVar12 >> 0x38) * 4));
        uVar13 = *(uint *)(&g_023e5990 + (uVar16 >> 8 & 0xff) * 4) ^
                 *(uint *)(&g_023e5590 + (uVar16 & 0xff) * 4) ^
                 *(uint *)(&g_023e5d90 + ((uint)(uVar16 >> 0xe) & 0x3fc)) ^
                 *(uint *)(&g_023e6190 + ((uint)(uVar16 >> 0x16) & 0x3fc)) ^
                 *(uint *)(&g_023e6590 + ((uint)(uVar20 >> 0x1e) & 0x3fc)) ^
                 *(uint *)(&g_023e6990 + (uVar13 >> 6 & 0x3fc)) ^
                 *(uint *)(&g_023e6d90 + (uVar13 >> 0xe & 0x3fc)) ^
                 *(uint *)(&g_023e7190 + (uVar20 >> 0x38) * 4);
        uVar11 = *(uint *)(&g_023e5990 + (uVar17 >> 8 & 0xff) * 4) ^
                 *(uint *)(&g_023e5590 + (uVar17 & 0xff) * 4) ^
                 *(uint *)(&g_023e5d90 + ((uint)(uVar17 >> 0xe) & 0x3fc)) ^
                 *(uint *)(&g_023e6190 + ((uint)(uVar17 >> 0x16) & 0x3fc)) ^
                 *(uint *)(&g_023e6590 + ((uint)(uVar2 >> 0x1e) & 0x3fc)) ^
                 *(uint *)(&g_023e6990 + (uVar5 >> 6 & 0x3fc)) ^
                 *(uint *)(&g_023e6d90 + (uVar5 >> 0xe & 0x3fc)) ^
                 *(uint *)(&g_023e7190 + (uVar2 >> 0x38) * 4);
        uVar9 = (uint64_t)
                (*(uint *)(&g_023e5990 + (uVar9 >> 8 & 0xff) * 4) ^
                 *(uint *)(&g_023e5590 + (uVar9 & 0xff) * 4) ^
                 *(uint *)(&g_023e5d90 + ((uint)(uVar9 >> 0xe) & 0x3fc)) ^
                 *(uint *)(&g_023e6190 + ((uint)(uVar9 >> 0x16) & 0x3fc)) ^
                 *(uint *)(&g_023e6590 + ((uint)(uVar3 >> 0x1e) & 0x3fc)) ^
                 *(uint *)(&g_023e6990 + (uVar6 >> 6 & 0x3fc)) ^
                 *(uint *)(&g_023e6d90 + (uVar6 >> 0xe & 0x3fc)) ^
                *(uint *)(&g_023e7190 + (uVar3 >> 0x38) * 4));
        uVar10 = (uint64_t)
                 (*(uint *)(&g_023e5990 + (uVar10 >> 8 & 0xff) * 4) ^
                  *(uint *)(&g_023e5590 + (uVar10 & 0xff) * 4) ^
                  *(uint *)(&g_023e5d90 + ((uint)(uVar10 >> 0xe) & 0x3fc)) ^
                  *(uint *)(&g_023e6190 + ((uint)(uVar10 >> 0x16) & 0x3fc)) ^
                  *(uint *)(&g_023e6590 + ((uint)(uVar4 >> 0x1e) & 0x3fc)) ^
                  *(uint *)(&g_023e6990 + (uVar7 >> 6 & 0x3fc)) ^
                  *(uint *)(&g_023e6d90 + (uVar7 >> 0xe & 0x3fc)) ^
                 *(uint *)(&g_023e7190 + (uVar4 >> 0x38) * 4));
        puVar18 = puVar18 + 5;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      uVar20 = (uint64_t)uVar13;
      uVar12 = (uint64_t)uVar11;
      puVar18 = puVar8;
    }
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + ((uVar19 ^ *puVar18) & 0xff) * 4) ^
             (uVar19 ^ *puVar18) >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = uVar20 ^ puVar18[1] ^
             (uint64_t)((uint)(uVar19 >> 8) ^ *(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4));
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = uVar12 ^ puVar18[2] ^
             (uint64_t)((uint)(uVar19 >> 8) ^ *(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4));
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    param_2 = uVar14 % 0x28;
    uVar19 = uVar9 ^ puVar18[3] ^
             (uint64_t)((uint)(uVar19 >> 8) ^ *(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4));
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = uVar10 ^ puVar18[4] ^
             (uint64_t)((uint)(uVar19 >> 8) ^ *(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4));
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4) ^ uVar19 >> 8;
    uVar19 = (uint64_t)((uint)(uVar19 >> 8) ^ *(uint *)(&g_023e5190 + (uVar19 & 0xff) * 4));
    arg1 = puVar18 + 5;
  }
  for (; 7 < param_2; param_2 = param_2 - 8) {
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff ^ (uint64_t)(byte)*arg1) * 4)
             ^ uVar19 >> 8;
    uVar19 = (uint64_t)
             *(uint *)(&g_023e5190 +
                      (uVar19 & 0xff ^ (uint64_t)*(byte *)((int64_t)arg1 + 1)) * 4) ^
             uVar19 >> 8;
    uVar19 = (uint64_t)
             *(uint *)(&g_023e5190 +
                      (uVar19 & 0xff ^ (uint64_t)*(byte *)((int64_t)arg1 + 2)) * 4) ^
             uVar19 >> 8;
    uVar19 = (uint64_t)
             *(uint *)(&g_023e5190 +
                      (uVar19 & 0xff ^ (uint64_t)*(byte *)((int64_t)arg1 + 3)) * 4) ^
             uVar19 >> 8;
    uVar19 = (uint64_t)
             *(uint *)(&g_023e5190 +
                      (uVar19 & 0xff ^ (uint64_t)*(byte *)((int64_t)arg1 + 4)) * 4) ^
             uVar19 >> 8;
    uVar19 = (uint64_t)
             *(uint *)(&g_023e5190 +
                      (uVar19 & 0xff ^ (uint64_t)*(byte *)((int64_t)arg1 + 5)) * 4) ^
             uVar19 >> 8;
    uVar19 = (uint64_t)
             *(uint *)(&g_023e5190 +
                      (uVar19 & 0xff ^ (uint64_t)*(byte *)((int64_t)arg1 + 6)) * 4) ^
             uVar19 >> 8;
    pbVar1 = (byte *)((int64_t)arg1 + 7);
    arg1 = arg1 + 1;
    uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff ^ (uint64_t)*pbVar1) * 4) ^
             uVar19 >> 8;
  }
  if (param_2 != 0) {
    uVar14 = param_2;
    if ((param_2 & 1) != 0) {
      uVar14 = *arg1;
      arg1 = (uint64_t *)((int64_t)arg1 + 1);
      uVar19 = (uint64_t)*(uint *)(&g_023e5190 + (uVar19 & 0xff ^ (uint64_t)(byte)uVar14) * 4) ^
               uVar19 >> 8;
      uVar14 = param_2 - 1;
    }
    if (param_2 != 1) {
      uVar12 = 0;
      do {
        uVar19 = (uint64_t)
                 *(uint *)(&g_023e5190 +
                          (uVar19 & 0xff ^ (uint64_t)*(byte *)((int64_t)arg1 + uVar12)) * 4)
                 ^ uVar19 >> 8;
        uVar19 = (uint64_t)
                 *(uint *)(&g_023e5190 +
                          (uVar19 & 0xff ^ (uint64_t)*(byte *)((int64_t)arg1 + uVar12 + 1)) *
                          4) ^ uVar19 >> 8;
        uVar12 = uVar12 + 2;
      } while (uVar14 != uVar12);
    }
  }
  return uVar19 ^ 0xffffffff;
}

