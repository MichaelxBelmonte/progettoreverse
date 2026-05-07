// Function: FUN_00964fa1
// Address: 00964fa1
// Size: 1724 bytes
// Class: Unknown


undefined8 FUN_00964fa1(uint param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong unaff_RSI;
  uint *unaff_RDI;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar21;
  undefined8 *puVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong local_a0;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_50;
  uint local_3c;
  ulonglong uVar20;
  
  uVar10 = 99;
  if (((((((param_1 & 0x7f) == 0) && (unaff_RDI != (uint *)0x0)) && (unaff_RSI != 0)) &&
       ((param_2 != (uint *)0x0 && (param_3 != (uint *)0x0)))) &&
      ((uVar10 = 0x1f5, ((ulonglong)unaff_RDI & 3) == 0 &&
       (((unaff_RSI & 3) == 0 && (((ulonglong)param_2 & 3) == 0)))))) &&
     (((ulonglong)param_3 & 3) == 0)) {
    if (*(int *)(unaff_RSI + 0xb8) != 1) {
      puVar22 = (undefined8 *)(unaff_RSI + 0x38);
      puVar11 = (undefined8 *)(unaff_RSI + 0xb0);
      do {
        uVar10 = *puVar22;
        *(undefined4 *)puVar22 = *(undefined4 *)puVar11;
        *(undefined4 *)((longlong)puVar22 + 4) = *(undefined4 *)((longlong)puVar11 + 4);
        *puVar11 = uVar10;
        puVar22 = puVar22 + 1;
        puVar11 = puVar11 + -1;
      } while (puVar22 < puVar11);
      *(undefined4 *)(unaff_RSI + 0xb8) = 1;
    }
    if (unaff_RDI[4] == 0) {
      unaff_RDI[2] = 0;
      unaff_RDI[3] = 0;
      unaff_RDI[0] = 0;
      unaff_RDI[1] = 0;
    }
    if (param_1 == 0) {
      uVar10 = 0;
    }
    else {
      uVar13 = 0;
      do {
        uVar21 = *(uint *)(unaff_RSI + 0x28) ^ *param_2;
        local_3c = *(uint *)(unaff_RSI + 0x2c) ^ param_2[1];
        uVar18 = *(uint *)(unaff_RSI + 0x30) ^ param_2[2];
        uVar20 = (ulonglong)uVar18;
        local_60 = (ulonglong)(uVar18 >> 8);
        uVar26 = (ulonglong)(uVar18 >> 0x10);
        uVar16 = (ulonglong)(uVar18 >> 0x18);
        uVar18 = *(uint *)(unaff_RSI + 0x34) ^ param_2[3];
        local_50 = (ulonglong)(uVar18 >> 8);
        uVar12 = (ulonglong)(uVar18 >> 0x10);
        local_a0 = (ulonglong)(uVar18 >> 0x18);
        bVar1 = *(byte *)(unaff_RSI + 0x14);
        bVar2 = *(byte *)(unaff_RSI + 0x10);
        bVar3 = *(byte *)(unaff_RSI + 0x11);
        bVar4 = *(byte *)(unaff_RSI + 0x15);
        bVar5 = *(byte *)(unaff_RSI + 0x16);
        bVar6 = *(byte *)(unaff_RSI + 0x12);
        bVar7 = *(byte *)(unaff_RSI + 0x17);
        bVar8 = *(byte *)(unaff_RSI + 0x13);
        local_68 = 0x15;
        do {
          uVar17 = *(uint *)(&DAT_023c1890 +
                            (ulonglong)
                            ((&DAT_023c2490)
                             [(&DAT_023c2590)[(ulonglong)(uVar21 >> 8) & 0xff] ^ bVar4] ^ bVar3) * 4
                            ) ^
                   *(uint *)(&DAT_023c1490 +
                            (ulonglong)
                            ((&DAT_023c2490)[(&DAT_023c2490)[(ulonglong)uVar21 & 0xff] ^ bVar1] ^
                            bVar2) * 4) ^
                   *(uint *)(&DAT_023c1c90 +
                            (ulonglong)
                            ((&DAT_023c2590)
                             [(&DAT_023c2490)[(ulonglong)(uVar21 >> 0x10) & 0xff] ^ bVar5] ^ bVar6)
                            * 4) ^
                   *(uint *)(&DAT_023c2090 +
                            (ulonglong)
                            ((&DAT_023c2590)[(&DAT_023c2590)[uVar21 >> 0x18] ^ bVar7] ^ bVar8) * 4);
          uVar14 = *(uint *)(&DAT_023c1890 +
                            (ulonglong)
                            ((&DAT_023c2490)[(&DAT_023c2590)[(ulonglong)local_3c & 0xff] ^ bVar4] ^
                            bVar3) * 4) ^
                   *(uint *)(&DAT_023c1490 +
                            (ulonglong)
                            ((&DAT_023c2490)[(&DAT_023c2490)[local_3c >> 0x18] ^ bVar1] ^ bVar2) * 4
                            ) ^
                   *(uint *)(&DAT_023c1c90 +
                            (ulonglong)
                            ((&DAT_023c2590)
                             [(&DAT_023c2490)[(ulonglong)(local_3c >> 8) & 0xff] ^ bVar5] ^ bVar6) *
                            4) ^
                   *(uint *)(&DAT_023c2090 +
                            (ulonglong)
                            ((&DAT_023c2590)
                             [(&DAT_023c2590)[(ulonglong)(local_3c >> 0x10) & 0xff] ^ bVar7] ^ bVar8
                            ) * 4);
          uVar9 = (int)uVar20 * 2;
          uVar25 = (int)uVar26 << 0x11;
          uVar24 = (int)local_60 << 9;
          uVar19 = ((uint)uVar16 << 0x19 | (uint)uVar16 >> 7 | uVar25 & 0x1000000 |
                    uVar25 & 0xfe0000 | uVar24 & 0x10000 |
                   uVar9 & 0xff | uVar24 & 0xffff | uVar9 & 0x100) ^
                   uVar14 + uVar17 + *(int *)(unaff_RSI + 8 + local_68 * 8);
          uVar20 = (ulonglong)uVar19;
          local_60 = (ulonglong)(uVar19 >> 8);
          uVar26 = (ulonglong)(uVar19 >> 0x10);
          uVar16 = (ulonglong)(uVar19 >> 0x18);
          uVar17 = (uVar18 & 0xff |
                   ((uint)local_50 & 0xff) << 8 |
                   ((uint)uVar12 & 0xff) << 0x10 | (int)local_a0 << 0x18) ^
                   uVar17 + uVar14 * 2 + *(int *)(unaff_RSI + 0xc + local_68 * 8);
          uVar18 = uVar17 >> 1;
          uVar9 = uVar17 >> 1;
          uVar14 = (uint)((uVar17 & 1) != 0) << 0x1f;
          uVar25 = uVar17 >> 9;
          local_50 = (ulonglong)uVar25;
          local_a0 = (ulonglong)((uVar9 | uVar14) >> 0x18);
          uVar15 = *(uint *)(&DAT_023c1890 +
                            (ulonglong)
                            ((&DAT_023c2490)[(&DAT_023c2590)[local_60 & 0xff] ^ bVar4] ^ bVar3) * 4)
                   ^ *(uint *)(&DAT_023c1490 +
                              (ulonglong)
                              ((&DAT_023c2490)[(&DAT_023c2490)[uVar20 & 0xff] ^ bVar1] ^ bVar2) * 4)
                   ^ *(uint *)(&DAT_023c1c90 +
                              (ulonglong)
                              ((&DAT_023c2590)[(&DAT_023c2490)[uVar26 & 0xff] ^ bVar5] ^ bVar6) * 4)
                   ^ *(uint *)(&DAT_023c2090 +
                              (ulonglong)((&DAT_023c2590)[(&DAT_023c2590)[uVar16] ^ bVar7] ^ bVar8)
                              * 4);
          uVar17 = uVar17 >> 0x11;
          uVar12 = (ulonglong)uVar17;
          uVar23 = *(uint *)(&DAT_023c1890 +
                            (ulonglong)
                            ((&DAT_023c2490)[(&DAT_023c2590)[(ulonglong)uVar18 & 0xff] ^ bVar4] ^
                            bVar3) * 4) ^
                   *(uint *)(&DAT_023c1490 +
                            (ulonglong)((&DAT_023c2490)[(&DAT_023c2490)[local_a0] ^ bVar1] ^ bVar2)
                            * 4) ^
                   *(uint *)(&DAT_023c1c90 +
                            (ulonglong)
                            ((&DAT_023c2590)[(&DAT_023c2490)[local_50 & 0xff] ^ bVar5] ^ bVar6) * 4)
                   ^ *(uint *)(&DAT_023c2090 +
                              (ulonglong)
                              ((&DAT_023c2590)[(&DAT_023c2590)[uVar12 & 0xff] ^ bVar7] ^ bVar8) * 4)
          ;
          uVar24 = uVar21 * 2;
          uVar21 = ((uVar21 & 0x7f) << 1 | (uint)((int)uVar21 < 0) | uVar24 & 0xff0000 |
                    uVar24 & 0xff000000 | uVar24 & 0xff00) ^
                   uVar23 + uVar15 + *(int *)(unaff_RSI + local_68 * 8);
          local_3c = local_3c ^ uVar15 + uVar23 * 2 + *(int *)(unaff_RSI + 4 + local_68 * 8);
          local_3c = local_3c >> 1 | (uint)((local_3c & 1) != 0) << 0x1f;
          local_68 = local_68 + -2;
        } while (local_68 != 5);
        uVar24 = *(uint *)(unaff_RSI + 0x18);
        uVar18 = (uint)((ulonglong)uVar18 & 0xff);
        if (unaff_RDI[4] == 0) {
          *param_3 = uVar24 ^ uVar19;
          param_3[1] = ((uVar25 & 0xff) << 8 | (uVar17 & 0xff) << 0x10 | uVar9 & 0xff000000 | uVar14
                       | uVar18) ^ *(uint *)(unaff_RSI + 0x1c);
          param_3[2] = uVar21 ^ *(uint *)(unaff_RSI + 0x20);
          local_3c = local_3c ^ *(uint *)(unaff_RSI + 0x24);
        }
        else {
          uVar15 = *unaff_RDI;
          *unaff_RDI = *param_2;
          *param_3 = uVar24 ^ uVar19 ^ uVar15;
          uVar24 = *(uint *)(unaff_RSI + 0x1c);
          uVar15 = unaff_RDI[1];
          unaff_RDI[1] = param_2[1];
          param_3[1] = ((uVar25 & 0xff) << 8 | (uVar17 & 0xff) << 0x10 | uVar9 & 0xff000000 | uVar14
                       | uVar18) ^ uVar24 ^ uVar15;
          uVar18 = *(uint *)(unaff_RSI + 0x20);
          uVar9 = unaff_RDI[2];
          unaff_RDI[2] = param_2[2];
          param_3[2] = uVar21 ^ uVar18 ^ uVar9;
          local_3c = local_3c ^ *(uint *)(unaff_RSI + 0x24) ^ unaff_RDI[3];
          unaff_RDI[3] = param_2[3];
        }
        param_3[3] = local_3c;
        uVar13 = uVar13 + 0x80;
        param_2 = param_2 + 4;
        param_3 = param_3 + 4;
        uVar10 = 0;
      } while (uVar13 < param_1);
    }
  }
  return uVar10;
}


