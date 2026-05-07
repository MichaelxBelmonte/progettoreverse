// Function: FUN_00964fa1
// Address: 00964fa1
// Size: 1724 bytes
// Class: Unknown

uint64_t FUN_00964fa1(uint param_1,uint *param_2,uint *param_3)

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
  uint64_t uVar10;
  void*puVar11;
  uint64_t uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint64_t arg1;
  uint *this_ptr;
  uint64_t uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar21;
  void*puVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint64_t uVar26;
  uint64_t local_a0;
  int64_t local_68;
  uint64_t local_60;
  uint64_t local_50;
  uint local_3c;
  uint64_t uVar20;
  
  uVar10 = 99;
  if (((((((param_1 & 0x7f) == 0) && (this_ptr != (uint *)0x0)) && (arg1 != 0)) &&
       ((param_2 != (uint *)0x0 && (param_3 != (uint *)0x0)))) &&
      ((uVar10 = 0x1f5, ((uint64_t)this_ptr & 3) == 0 &&
       (((arg1 & 3) == 0 && (((uint64_t)param_2 & 3) == 0)))))) &&
     (((uint64_t)param_3 & 3) == 0)) {
    if (*(int *)(arg1 + 0xb8) != 1) {
      puVar22 = (void*)(arg1 + 0x38);
      puVar11 = (void*)(arg1 + 0xb0);
      do {
        uVar10 = *puVar22;
        *(void*)puVar22 = *(void*)puVar11;
        *(void*)((int64_t)puVar22 + 4) = *(void*)((int64_t)puVar11 + 4);
        *puVar11 = uVar10;
        puVar22 = puVar22 + 1;
        puVar11 = puVar11 + -1;
      } while (puVar22 < puVar11);
      *(void*)(arg1 + 0xb8) = 1;
    }
    if (this_ptr[4] == 0) {
      this_ptr[2] = 0;
      this_ptr[3] = 0;
      this_ptr[0] = 0;
      this_ptr[1] = 0;
    }
    if (param_1 == 0) {
      uVar10 = 0;
    }
    else {
      uVar13 = 0;
      do {
        uVar21 = *(uint *)(arg1 + 0x28) ^ *param_2;
        local_3c = *(uint *)(arg1 + 0x2c) ^ param_2[1];
        uVar18 = *(uint *)(arg1 + 0x30) ^ param_2[2];
        uVar20 = (uint64_t)uVar18;
        local_60 = (uint64_t)(uVar18 >> 8);
        uVar26 = (uint64_t)(uVar18 >> 0x10);
        uVar16 = (uint64_t)(uVar18 >> 0x18);
        uVar18 = *(uint *)(arg1 + 0x34) ^ param_2[3];
        local_50 = (uint64_t)(uVar18 >> 8);
        uVar12 = (uint64_t)(uVar18 >> 0x10);
        local_a0 = (uint64_t)(uVar18 >> 0x18);
        bVar1 = *(byte *)(arg1 + 0x14);
        bVar2 = *(byte *)(arg1 + 0x10);
        bVar3 = *(byte *)(arg1 + 0x11);
        bVar4 = *(byte *)(arg1 + 0x15);
        bVar5 = *(byte *)(arg1 + 0x16);
        bVar6 = *(byte *)(arg1 + 0x12);
        bVar7 = *(byte *)(arg1 + 0x17);
        bVar8 = *(byte *)(arg1 + 0x13);
        local_68 = 0x15;
        do {
          uVar17 = *(uint *)(&g_023c1890 +
                            (uint64_t)
                            ((&g_023c2490)
                             [(&g_023c2590)[(uint64_t)(uVar21 >> 8) & 0xff] ^ bVar4] ^ bVar3) * 4
                            ) ^
                   *(uint *)(&g_023c1490 +
                            (uint64_t)
                            ((&g_023c2490)[(&g_023c2490)[(uint64_t)uVar21 & 0xff] ^ bVar1] ^
                            bVar2) * 4) ^
                   *(uint *)(&g_023c1c90 +
                            (uint64_t)
                            ((&g_023c2590)
                             [(&g_023c2490)[(uint64_t)(uVar21 >> 0x10) & 0xff] ^ bVar5] ^ bVar6)
                            * 4) ^
                   *(uint *)(&g_023c2090 +
                            (uint64_t)
                            ((&g_023c2590)[(&g_023c2590)[uVar21 >> 0x18] ^ bVar7] ^ bVar8) * 4);
          uVar14 = *(uint *)(&g_023c1890 +
                            (uint64_t)
                            ((&g_023c2490)[(&g_023c2590)[(uint64_t)local_3c & 0xff] ^ bVar4] ^
                            bVar3) * 4) ^
                   *(uint *)(&g_023c1490 +
                            (uint64_t)
                            ((&g_023c2490)[(&g_023c2490)[local_3c >> 0x18] ^ bVar1] ^ bVar2) * 4
                            ) ^
                   *(uint *)(&g_023c1c90 +
                            (uint64_t)
                            ((&g_023c2590)
                             [(&g_023c2490)[(uint64_t)(local_3c >> 8) & 0xff] ^ bVar5] ^ bVar6) *
                            4) ^
                   *(uint *)(&g_023c2090 +
                            (uint64_t)
                            ((&g_023c2590)
                             [(&g_023c2590)[(uint64_t)(local_3c >> 0x10) & 0xff] ^ bVar7] ^ bVar8
                            ) * 4);
          uVar9 = (int)uVar20 * 2;
          uVar25 = (int)uVar26 << 0x11;
          uVar24 = (int)local_60 << 9;
          uVar19 = ((uint)uVar16 << 0x19 | (uint)uVar16 >> 7 | uVar25 & 0x1000000 |
                    uVar25 & 0xfe0000 | uVar24 & 0x10000 |
                   uVar9 & 0xff | uVar24 & 0xffff | uVar9 & 0x100) ^
                   uVar14 + uVar17 + *(int *)(arg1 + 8 + local_68 * 8);
          uVar20 = (uint64_t)uVar19;
          local_60 = (uint64_t)(uVar19 >> 8);
          uVar26 = (uint64_t)(uVar19 >> 0x10);
          uVar16 = (uint64_t)(uVar19 >> 0x18);
          uVar17 = (uVar18 & 0xff |
                   ((uint)local_50 & 0xff) << 8 |
                   ((uint)uVar12 & 0xff) << 0x10 | (int)local_a0 << 0x18) ^
                   uVar17 + uVar14 * 2 + *(int *)(arg1 + 0xc + local_68 * 8);
          uVar18 = uVar17 >> 1;
          uVar9 = uVar17 >> 1;
          uVar14 = (uint)((uVar17 & 1) != 0) << 0x1f;
          uVar25 = uVar17 >> 9;
          local_50 = (uint64_t)uVar25;
          local_a0 = (uint64_t)((uVar9 | uVar14) >> 0x18);
          uVar15 = *(uint *)(&g_023c1890 +
                            (uint64_t)
                            ((&g_023c2490)[(&g_023c2590)[local_60 & 0xff] ^ bVar4] ^ bVar3) * 4)
                   ^ *(uint *)(&g_023c1490 +
                              (uint64_t)
                              ((&g_023c2490)[(&g_023c2490)[uVar20 & 0xff] ^ bVar1] ^ bVar2) * 4)
                   ^ *(uint *)(&g_023c1c90 +
                              (uint64_t)
                              ((&g_023c2590)[(&g_023c2490)[uVar26 & 0xff] ^ bVar5] ^ bVar6) * 4)
                   ^ *(uint *)(&g_023c2090 +
                              (uint64_t)((&g_023c2590)[(&g_023c2590)[uVar16] ^ bVar7] ^ bVar8)
                              * 4);
          uVar17 = uVar17 >> 0x11;
          uVar12 = (uint64_t)uVar17;
          uVar23 = *(uint *)(&g_023c1890 +
                            (uint64_t)
                            ((&g_023c2490)[(&g_023c2590)[(uint64_t)uVar18 & 0xff] ^ bVar4] ^
                            bVar3) * 4) ^
                   *(uint *)(&g_023c1490 +
                            (uint64_t)((&g_023c2490)[(&g_023c2490)[local_a0] ^ bVar1] ^ bVar2)
                            * 4) ^
                   *(uint *)(&g_023c1c90 +
                            (uint64_t)
                            ((&g_023c2590)[(&g_023c2490)[local_50 & 0xff] ^ bVar5] ^ bVar6) * 4)
                   ^ *(uint *)(&g_023c2090 +
                              (uint64_t)
                              ((&g_023c2590)[(&g_023c2590)[uVar12 & 0xff] ^ bVar7] ^ bVar8) * 4)
          ;
          uVar24 = uVar21 * 2;
          uVar21 = ((uVar21 & 0x7f) << 1 | (uint)((int)uVar21 < 0) | uVar24 & 0xff0000 |
                    uVar24 & 0xff000000 | uVar24 & 0xff00) ^
                   uVar23 + uVar15 + *(int *)(arg1 + local_68 * 8);
          local_3c = local_3c ^ uVar15 + uVar23 * 2 + *(int *)(arg1 + 4 + local_68 * 8);
          local_3c = local_3c >> 1 | (uint)((local_3c & 1) != 0) << 0x1f;
          local_68 = local_68 + -2;
        } while (local_68 != 5);
        uVar24 = *(uint *)(arg1 + 0x18);
        uVar18 = (uint)((uint64_t)uVar18 & 0xff);
        if (this_ptr[4] == 0) {
          *param_3 = uVar24 ^ uVar19;
          param_3[1] = ((uVar25 & 0xff) << 8 | (uVar17 & 0xff) << 0x10 | uVar9 & 0xff000000 | uVar14
                       | uVar18) ^ *(uint *)(arg1 + 0x1c);
          param_3[2] = uVar21 ^ *(uint *)(arg1 + 0x20);
          local_3c = local_3c ^ *(uint *)(arg1 + 0x24);
        }
        else {
          uVar15 = *this_ptr;
          *this_ptr = *param_2;
          *param_3 = uVar24 ^ uVar19 ^ uVar15;
          uVar24 = *(uint *)(arg1 + 0x1c);
          uVar15 = this_ptr[1];
          this_ptr[1] = param_2[1];
          param_3[1] = ((uVar25 & 0xff) << 8 | (uVar17 & 0xff) << 0x10 | uVar9 & 0xff000000 | uVar14
                       | uVar18) ^ uVar24 ^ uVar15;
          uVar18 = *(uint *)(arg1 + 0x20);
          uVar9 = this_ptr[2];
          this_ptr[2] = param_2[2];
          param_3[2] = uVar21 ^ uVar18 ^ uVar9;
          local_3c = local_3c ^ *(uint *)(arg1 + 0x24) ^ this_ptr[3];
          this_ptr[3] = param_2[3];
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

