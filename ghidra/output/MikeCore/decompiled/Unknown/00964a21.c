// Function: FUN_00964a21
// Address: 00964a21
// Size: 1408 bytes
// Class: Unknown


undefined8 FUN_00964a21(uint param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong unaff_RSI;
  uint uVar14;
  uint *unaff_RDI;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined8 *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong local_48;
  longlong local_40;
  
  uVar9 = 99;
  if (((((((param_1 & 0x7f) == 0) && (unaff_RDI != (uint *)0x0)) && (unaff_RSI != 0)) &&
       ((param_2 != (uint *)0x0 && (param_3 != (uint *)0x0)))) &&
      ((uVar9 = 0x1f5, ((ulonglong)unaff_RDI & 3) == 0 &&
       (((unaff_RSI & 3) == 0 && (((ulonglong)param_2 & 3) == 0)))))) &&
     (((ulonglong)param_3 & 3) == 0)) {
    if (*(int *)(unaff_RSI + 0xb8) != 0) {
      puVar19 = (undefined8 *)(unaff_RSI + 0x38);
      puVar10 = (undefined8 *)(unaff_RSI + 0xb0);
      do {
        uVar9 = *puVar19;
        *(undefined4 *)puVar19 = *(undefined4 *)puVar10;
        *(undefined4 *)((longlong)puVar19 + 4) = *(undefined4 *)((longlong)puVar10 + 4);
        *puVar10 = uVar9;
        puVar19 = puVar19 + 1;
        puVar10 = puVar10 + -1;
      } while (puVar19 < puVar10);
      *(undefined4 *)(unaff_RSI + 0xb8) = 0;
    }
    if (unaff_RDI[4] == 0) {
      unaff_RDI[2] = 0;
      unaff_RDI[3] = 0;
      unaff_RDI[0] = 0;
      unaff_RDI[1] = 0;
    }
    if (param_1 == 0) {
      uVar9 = 0;
    }
    else {
      uVar13 = 0;
      do {
        uVar11 = *(uint *)(unaff_RSI + 0x18) ^ *param_2 ^ *unaff_RDI;
        uVar18 = *(uint *)(unaff_RSI + 0x1c) ^ param_2[1] ^ unaff_RDI[1];
        uVar21 = *(uint *)(unaff_RSI + 0x20) ^ param_2[2] ^ unaff_RDI[2];
        local_48 = (ulonglong)(uVar21 >> 8);
        uVar24 = (ulonglong)(uVar21 >> 0x10);
        uVar15 = (ulonglong)(uVar21 >> 0x18);
        uVar17 = (ulonglong)(*(uint *)(unaff_RSI + 0x24) ^ param_2[3] ^ unaff_RDI[3]);
        bVar1 = *(byte *)(unaff_RSI + 0x14);
        bVar2 = *(byte *)(unaff_RSI + 0x10);
        bVar3 = *(byte *)(unaff_RSI + 0x11);
        bVar4 = *(byte *)(unaff_RSI + 0x15);
        bVar5 = *(byte *)(unaff_RSI + 0x16);
        bVar6 = *(byte *)(unaff_RSI + 0x12);
        bVar7 = *(byte *)(unaff_RSI + 0x17);
        bVar8 = *(byte *)(unaff_RSI + 0x13);
        local_40 = 0x15;
        do {
          uVar20 = *(uint *)(&DAT_023c1890 +
                            (ulonglong)
                            ((&DAT_023c2490)
                             [(&DAT_023c2590)[(ulonglong)(uVar11 >> 8) & 0xff] ^ bVar4] ^ bVar3) * 4
                            ) ^
                   *(uint *)(&DAT_023c1490 +
                            (ulonglong)
                            ((&DAT_023c2490)[(&DAT_023c2490)[(ulonglong)uVar11 & 0xff] ^ bVar1] ^
                            bVar2) * 4) ^
                   *(uint *)(&DAT_023c1c90 +
                            (ulonglong)
                            ((&DAT_023c2590)
                             [(&DAT_023c2490)[(ulonglong)(uVar11 >> 0x10) & 0xff] ^ bVar5] ^ bVar6)
                            * 4) ^
                   *(uint *)(&DAT_023c2090 +
                            (ulonglong)
                            ((&DAT_023c2590)[(&DAT_023c2590)[uVar11 >> 0x18] ^ bVar7] ^ bVar8) * 4);
          uVar14 = *(uint *)(&DAT_023c1890 +
                            (ulonglong)
                            ((&DAT_023c2490)[(&DAT_023c2590)[(ulonglong)uVar18 & 0xff] ^ bVar4] ^
                            bVar3) * 4) ^
                   *(uint *)(&DAT_023c1490 +
                            (ulonglong)
                            ((&DAT_023c2490)[(&DAT_023c2490)[uVar18 >> 0x18] ^ bVar1] ^ bVar2) * 4)
                   ^ *(uint *)(&DAT_023c1c90 +
                              (ulonglong)
                              ((&DAT_023c2590)
                               [(&DAT_023c2490)[(ulonglong)(uVar18 >> 8) & 0xff] ^ bVar5] ^ bVar6) *
                              4) ^
                   *(uint *)(&DAT_023c2090 +
                            (ulonglong)
                            ((&DAT_023c2590)
                             [(&DAT_023c2590)[(ulonglong)(uVar18 >> 0x10) & 0xff] ^ bVar7] ^ bVar8)
                            * 4);
          uVar22 = (uVar21 & 0xff |
                   ((uint)local_48 & 0xff) << 8 |
                   ((uint)uVar24 & 0xff) << 0x10 | (int)uVar15 << 0x18) ^
                   uVar14 + uVar20 + *(int *)(unaff_RSI + 8 + local_40 * 8);
          uVar16 = uVar20 + uVar14 * 2 + *(int *)(unaff_RSI + 0xc + local_40 * 8) ^
                   ((int)uVar17 << 1 | (uint)((int)uVar17 < 0));
          uVar17 = (ulonglong)uVar16;
          uVar21 = uVar22 >> 1;
          uVar14 = (uint)((uVar22 & 1) != 0) << 0x1f;
          local_48 = (ulonglong)(uVar22 >> 9);
          uVar24 = (ulonglong)(uVar22 >> 0x11);
          uVar15 = (ulonglong)((uVar22 >> 1 | uVar14) >> 0x18);
          uVar23 = *(uint *)(&DAT_023c1890 +
                            (ulonglong)
                            ((&DAT_023c2490)[(&DAT_023c2590)[local_48 & 0xff] ^ bVar4] ^ bVar3) * 4)
                   ^ *(uint *)(&DAT_023c1490 +
                              (ulonglong)
                              ((&DAT_023c2490)[(&DAT_023c2490)[(ulonglong)uVar21 & 0xff] ^ bVar1] ^
                              bVar2) * 4) ^
                   *(uint *)(&DAT_023c1c90 +
                            (ulonglong)
                            ((&DAT_023c2590)[(&DAT_023c2490)[uVar24 & 0xff] ^ bVar5] ^ bVar6) * 4) ^
                   *(uint *)(&DAT_023c2090 +
                            (ulonglong)((&DAT_023c2590)[(&DAT_023c2590)[uVar15] ^ bVar7] ^ bVar8) *
                            4);
          uVar12 = *(uint *)(&DAT_023c1890 +
                            (ulonglong)
                            ((&DAT_023c2490)[(&DAT_023c2590)[uVar17 & 0xff] ^ bVar4] ^ bVar3) * 4) ^
                   *(uint *)(&DAT_023c1490 +
                            (ulonglong)
                            ((&DAT_023c2490)[(&DAT_023c2490)[uVar16 >> 0x18] ^ bVar1] ^ bVar2) * 4)
                   ^ *(uint *)(&DAT_023c1c90 +
                              (ulonglong)
                              ((&DAT_023c2590)
                               [(&DAT_023c2490)[(ulonglong)(uVar16 >> 8) & 0xff] ^ bVar5] ^ bVar6) *
                              4) ^
                   *(uint *)(&DAT_023c2090 +
                            (ulonglong)
                            ((&DAT_023c2590)
                             [(&DAT_023c2590)[(ulonglong)(uVar16 >> 0x10) & 0xff] ^ bVar7] ^ bVar8)
                            * 4);
          uVar11 = uVar11 ^ uVar12 + uVar23 + *(int *)(unaff_RSI + local_40 * 8);
          uVar20 = uVar18 * 2;
          uVar18 = ((uVar18 & 0x7f) << 1 | (uint)((int)uVar18 < 0) | uVar20 & 0xff0000 |
                    uVar20 & 0xff000000 | uVar20 & 0xff00) ^
                   uVar23 + uVar12 * 2 + *(int *)(unaff_RSI + 4 + local_40 * 8);
          uVar11 = uVar11 >> 1 | (uint)((uVar11 & 1) != 0) << 0x1f;
          local_40 = local_40 + -2;
        } while (local_40 != 5);
        uVar21 = ((uVar22 >> 9 & 0xff) << 8 |
                  (uVar22 >> 0x11 & 0xff) << 0x10 | uVar22 >> 1 & 0xff000000 | uVar14 |
                 (uint)((ulonglong)uVar21 & 0xff)) ^ *(uint *)(unaff_RSI + 0x28);
        *param_3 = uVar21;
        param_3[1] = uVar16 ^ *(uint *)(unaff_RSI + 0x2c);
        param_3[2] = uVar11 ^ *(uint *)(unaff_RSI + 0x30);
        param_3[3] = uVar18 ^ *(uint *)(unaff_RSI + 0x34);
        if (unaff_RDI[4] == 1) {
          *unaff_RDI = uVar21;
          unaff_RDI[1] = param_3[1];
          unaff_RDI[2] = param_3[2];
          unaff_RDI[3] = param_3[3];
        }
        uVar13 = uVar13 + 0x80;
        param_2 = param_2 + 4;
        param_3 = param_3 + 4;
        uVar9 = 0;
      } while (uVar13 < param_1);
    }
  }
  return uVar9;
}


