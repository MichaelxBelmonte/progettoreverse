// Function: FUN_0095eacc
// Address: 0095eacc
// Size: 7884 bytes
// Class: Unknown


longlong FUN_0095eacc(ulonglong param_1,ulonglong *param_2,byte param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint unaff_ESI;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong *unaff_RDI;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = *unaff_RDI;
  local_f0 = unaff_RDI[1];
  local_f8 = unaff_RDI[2];
  local_88 = unaff_RDI[3];
  local_d0 = unaff_RDI[4];
  local_70 = unaff_RDI[5];
  local_68 = unaff_RDI[6];
  local_98 = unaff_RDI[7];
  local_b8 = unaff_RDI[8];
  local_c8 = unaff_RDI[9];
  local_40 = unaff_RDI[10];
  local_48 = unaff_RDI[0xb];
  local_80 = unaff_RDI[0xc];
  local_b0 = unaff_RDI[0xd];
  local_c0 = unaff_RDI[0xe];
  local_e8 = unaff_RDI[0xf];
  local_50 = unaff_RDI[0x10];
  local_60 = unaff_RDI[0x11];
  local_d8 = unaff_RDI[0x12];
  local_90 = unaff_RDI[0x13];
  local_58 = unaff_RDI[0x14];
  local_a0 = unaff_RDI[0x15];
  uVar4 = unaff_RDI[0x16];
  local_a8 = unaff_RDI[0x17];
  uVar28 = unaff_RDI[0x18];
  uVar1 = (ulonglong)(unaff_ESI * 8);
  uVar25 = param_1;
  if (uVar1 <= param_1) {
    uVar17 = (ulonglong)param_3;
    do {
      if (unaff_ESI < 0x10) {
        uVar5 = local_50;
        if (unaff_ESI < 8) {
          if (unaff_ESI < 4) {
            if (unaff_ESI < 2) {
              uVar6 = uVar17;
              if (unaff_ESI != 0) {
                local_f0 = local_f0 ^ uVar17;
                uVar6 = *param_2;
              }
              local_38 = local_38 ^ uVar6;
            }
            else {
              local_38 = local_38 ^ *param_2;
              local_f0 = local_f0 ^ param_2[1];
              if (unaff_ESI == 2) {
                local_f8 = local_f8 ^ uVar17;
              }
              else {
                local_f8 = local_f8 ^ param_2[2];
                local_88 = local_88 ^ uVar17;
              }
            }
          }
          else {
            local_38 = local_38 ^ *param_2;
            local_f0 = local_f0 ^ param_2[1];
            local_f8 = local_f8 ^ param_2[2];
            local_88 = local_88 ^ param_2[3];
            if (unaff_ESI < 6) {
              if (unaff_ESI == 5) {
                local_d0 = local_d0 ^ param_2[4];
                local_70 = local_70 ^ uVar17;
              }
              else {
                local_d0 = local_d0 ^ uVar17;
              }
            }
            else {
              local_d0 = local_d0 ^ param_2[4];
              local_70 = local_70 ^ param_2[5];
              if (unaff_ESI == 6) {
                local_68 = local_68 ^ uVar17;
              }
              else {
                local_68 = local_68 ^ param_2[6];
                local_98 = local_98 ^ uVar17;
              }
            }
          }
        }
        else {
          local_38 = local_38 ^ *param_2;
          local_f0 = local_f0 ^ param_2[1];
          local_f8 = local_f8 ^ param_2[2];
          local_88 = local_88 ^ param_2[3];
          local_d0 = local_d0 ^ param_2[4];
          local_70 = local_70 ^ param_2[5];
          local_68 = local_68 ^ param_2[6];
          local_98 = local_98 ^ param_2[7];
          if (unaff_ESI < 0xc) {
            if (unaff_ESI < 10) {
              if (unaff_ESI == 9) {
                local_b8 = local_b8 ^ param_2[8];
                local_c8 = local_c8 ^ uVar17;
              }
              else {
                local_b8 = local_b8 ^ uVar17;
              }
            }
            else {
              local_b8 = local_b8 ^ param_2[8];
              local_c8 = local_c8 ^ param_2[9];
              if (unaff_ESI == 10) {
                local_40 = local_40 ^ uVar17;
              }
              else {
                local_40 = local_40 ^ param_2[10];
                local_48 = local_48 ^ uVar17;
              }
            }
          }
          else {
            local_b8 = local_b8 ^ param_2[8];
            local_c8 = local_c8 ^ param_2[9];
            local_40 = local_40 ^ param_2[10];
            local_48 = local_48 ^ param_2[0xb];
            if (unaff_ESI < 0xe) {
              if (unaff_ESI == 0xd) {
                local_80 = local_80 ^ param_2[0xc];
                local_b0 = local_b0 ^ uVar17;
              }
              else {
                local_80 = local_80 ^ uVar17;
              }
            }
            else {
              local_80 = local_80 ^ param_2[0xc];
              local_b0 = local_b0 ^ param_2[0xd];
              if (unaff_ESI == 0xe) {
                local_c0 = local_c0 ^ uVar17;
              }
              else {
                local_c0 = local_c0 ^ param_2[0xe];
                local_e8 = local_e8 ^ uVar17;
              }
            }
          }
        }
      }
      else {
        local_38 = local_38 ^ *param_2;
        local_f0 = local_f0 ^ param_2[1];
        local_f8 = local_f8 ^ param_2[2];
        local_88 = local_88 ^ param_2[3];
        local_d0 = local_d0 ^ param_2[4];
        local_70 = local_70 ^ param_2[5];
        local_68 = local_68 ^ param_2[6];
        local_98 = local_98 ^ param_2[7];
        local_b8 = local_b8 ^ param_2[8];
        local_c8 = local_c8 ^ param_2[9];
        local_40 = local_40 ^ param_2[10];
        local_48 = local_48 ^ param_2[0xb];
        local_80 = local_80 ^ param_2[0xc];
        local_b0 = local_b0 ^ param_2[0xd];
        local_c0 = local_c0 ^ param_2[0xe];
        local_e8 = local_e8 ^ param_2[0xf];
        if (unaff_ESI < 0x18) {
          if (unaff_ESI < 0x14) {
            if (unaff_ESI < 0x12) {
              uVar5 = uVar17;
              if (unaff_ESI == 0x11) {
                local_60 = local_60 ^ uVar17;
                uVar5 = param_2[0x10];
              }
              uVar5 = local_50 ^ uVar5;
            }
            else {
              local_60 = local_60 ^ param_2[0x11];
              uVar5 = local_50 ^ param_2[0x10];
              if (unaff_ESI == 0x12) {
                local_d8 = local_d8 ^ uVar17;
              }
              else {
                local_d8 = local_d8 ^ param_2[0x12];
                local_90 = local_90 ^ uVar17;
              }
            }
          }
          else {
            uVar5 = local_50 ^ param_2[0x10];
            local_60 = local_60 ^ param_2[0x11];
            local_d8 = local_d8 ^ param_2[0x12];
            local_90 = local_90 ^ param_2[0x13];
            if (unaff_ESI < 0x16) {
              if (unaff_ESI == 0x15) {
                local_58 = local_58 ^ param_2[0x14];
                local_a0 = local_a0 ^ uVar17;
              }
              else {
                local_58 = local_58 ^ uVar17;
              }
            }
            else {
              local_58 = local_58 ^ param_2[0x14];
              local_a0 = local_a0 ^ param_2[0x15];
              if (unaff_ESI == 0x16) {
                uVar4 = uVar4 ^ uVar17;
              }
              else {
                uVar4 = uVar4 ^ param_2[0x16];
                local_a8 = local_a8 ^ uVar17;
              }
            }
          }
        }
        else {
          local_60 = local_60 ^ param_2[0x11];
          local_d8 = local_d8 ^ param_2[0x12];
          local_90 = local_90 ^ param_2[0x13];
          local_58 = local_58 ^ param_2[0x14];
          local_a0 = local_a0 ^ param_2[0x15];
          uVar4 = uVar4 ^ param_2[0x16];
          local_a8 = local_a8 ^ param_2[0x17];
          uVar5 = local_50 ^ param_2[0x10];
          if (unaff_ESI == 0x18) {
            uVar28 = uVar28 ^ uVar17;
          }
          else {
            uVar28 = uVar28 ^ param_2[0x18];
          }
        }
      }
      uVar26 = local_40 ^ local_70 ^ local_38 ^ local_e8 ^ local_58;
      uVar15 = local_48 ^ local_68 ^ uVar5 ^ local_a0 ^ local_f0;
      uVar6 = local_80 ^ local_98 ^ local_60 ^ uVar4 ^ local_f8;
      uVar11 = local_b0 ^ local_b8 ^ local_d8 ^ local_a8 ^ local_88;
      uVar37 = local_c0 ^ local_c8 ^ local_90 ^ uVar28 ^ local_d0;
      local_50 = 0xfffffffffffffffa;
      do {
        uVar2 = (uVar11 << 1 | (ulonglong)((longlong)uVar11 < 0)) ^ uVar15;
        uVar16 = (uVar15 << 1 | (ulonglong)((longlong)uVar15 < 0)) ^ uVar37;
        uVar38 = (uVar37 << 1 | (ulonglong)((longlong)uVar37 < 0)) ^ uVar6;
        uVar6 = (uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0)) ^ uVar26;
        uVar11 = (uVar26 << 1 | (ulonglong)((longlong)uVar26 < 0)) ^ uVar11;
        uVar7 = (local_68 ^ uVar6) << 0x2c | (local_68 ^ uVar6) >> 0x14;
        local_38 = local_38 ^ uVar16;
        uVar18 = (local_80 ^ uVar2) << 0x2b | (local_80 ^ uVar2) >> 0x15;
        uVar15 = (local_d8 ^ uVar38) << 0x15 | (local_d8 ^ uVar38) >> 0x2b;
        uVar35 = (uVar28 ^ uVar11) << 0xe | (uVar28 ^ uVar11) >> 0x32;
        uVar8 = uVar15 & uVar35 ^ uVar18;
        uVar19 = (uVar18 ^ 0xffffffffffffffff | uVar15) ^ uVar7;
        uVar20 = (local_88 ^ uVar38) << 0x1c | (local_88 ^ uVar38) >> 0x24;
        uVar37 = (local_c8 ^ uVar11) << 0x14 | (local_c8 ^ uVar11) >> 0x2c;
        uVar26 = (local_40 ^ uVar16) << 3 | (local_40 ^ uVar16) >> 0x3d;
        uVar15 = (local_38 | uVar35) ^ uVar15;
        uVar28 = (uVar5 ^ uVar6) << 0x2d | (uVar5 ^ uVar6) >> 0x13;
        uVar35 = uVar7 & local_38 ^ uVar35;
        uVar30 = (uVar4 ^ uVar2) << 0x3d | (uVar4 ^ uVar2) >> 3;
        uVar9 = (uVar37 | uVar26) ^ uVar20;
        uVar3 = (uVar30 ^ 0xffffffffffffffff | uVar28) ^ uVar26;
        uVar4 = uVar26 & uVar28 ^ uVar37;
        uVar12 = (local_f0 ^ uVar6) << 1 | (ulonglong)((longlong)(local_f0 ^ uVar6) < 0);
        uVar28 = (uVar20 | uVar30) ^ uVar28;
        uVar26 = (local_98 ^ uVar2) << 6 | (local_98 ^ uVar2) >> 0x3a;
        uVar30 = uVar37 & uVar20 ^ uVar30;
        uVar14 = (local_b0 ^ uVar38) << 0x19 | (local_b0 ^ uVar38) >> 0x27;
        uVar5 = (local_90 ^ uVar11) << 8 | (local_90 ^ uVar11) >> 0x38;
        uVar37 = (local_58 ^ uVar16) << 0x12 | (local_58 ^ uVar16) >> 0x2e;
        uVar20 = (uVar26 | uVar14) ^ uVar12;
        uVar21 = uVar14 & uVar5 ^ uVar26;
        uVar5 = uVar5 ^ 0xffffffffffffffff;
        uVar13 = (local_d0 ^ uVar11) << 0x1b | (local_d0 ^ uVar11) >> 0x25;
        uVar10 = uVar26 & uVar12 ^ uVar37;
        uVar22 = (local_70 ^ uVar16) << 0x24 | (local_70 ^ uVar16) >> 0x1c;
        uVar31 = (local_48 ^ uVar6) << 10 | (local_48 ^ uVar6) >> 0x36;
        uVar14 = uVar37 & uVar5 ^ uVar14;
        uVar40 = (local_60 ^ uVar2) << 0xf | (local_60 ^ uVar2) >> 0x31;
        uVar5 = (uVar12 | uVar37) ^ uVar5;
        uVar12 = (local_a8 ^ uVar38) << 0x38 | (local_a8 ^ uVar38) >> 8;
        uVar26 = uVar22 & uVar31 ^ uVar13;
        uVar37 = (uVar31 | uVar40) ^ uVar22;
        uVar40 = uVar40 ^ 0xffffffffffffffff;
        uVar23 = (uVar22 | uVar13) ^ uVar12;
        uVar31 = (uVar12 | uVar40) ^ uVar31;
        uVar40 = uVar13 & uVar12 ^ uVar40;
        uVar36 = (uVar2 ^ local_f8) << 0x3e | (uVar2 ^ local_f8) >> 2;
        uVar39 = (uVar38 ^ local_b8) << 0x37 | (uVar38 ^ local_b8) >> 9;
        uVar12 = (uVar11 ^ local_c0) << 0x27 | (uVar11 ^ local_c0) >> 0x19;
        uVar11 = (uVar16 ^ local_e8) << 0x29 | (uVar16 ^ local_e8) >> 0x17;
        uVar41 = (uVar6 ^ local_a0) << 2 | (uVar6 ^ local_a0) >> 0x3e;
        uVar2 = uVar39 ^ 0xffffffffffffffff;
        uVar22 = (uVar36 | uVar41) ^ uVar11;
        uVar29 = uVar11 & uVar41 ^ uVar12;
        uVar6 = (uVar12 | uVar11) ^ uVar2;
        uVar13 = uVar19 ^ uVar37 ^ uVar6 ^ uVar4 ^ uVar21;
        uVar11 = uVar31 ^ uVar3 ^ uVar29 ^ uVar8 ^ uVar14;
        uVar38 = uVar12 & uVar2 ^ uVar36;
        uVar41 = uVar39 & uVar36 ^ uVar41;
        uVar2 = (uVar7 | uVar18) ^ local_38 ^ *(ulonglong *)(&UNK_023bf400 + local_50 * 8);
        uVar7 = uVar9 ^ uVar26 ^ uVar38 ^ uVar20 ^ uVar2;
        uVar27 = uVar15 ^ uVar22 ^ uVar28 ^ uVar40 ^ uVar5;
        uVar12 = uVar35 ^ uVar41 ^ uVar30 ^ uVar23 ^ uVar10;
        uVar16 = (uVar27 << 1 | (ulonglong)((longlong)uVar27 < 0)) ^ uVar13;
        uVar32 = (uVar13 << 1 | (ulonglong)((longlong)uVar13 < 0)) ^ uVar12;
        uVar33 = (uVar11 << 1 | (ulonglong)((longlong)uVar11 < 0)) ^ uVar7;
        uVar11 = (uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0)) ^ uVar11;
        uVar4 = uVar4 ^ uVar33;
        uVar12 = uVar4 << 0x2c | uVar4 >> 0x14;
        uVar27 = (uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0)) ^ uVar27;
        uVar14 = uVar14 ^ uVar16;
        uVar7 = uVar14 << 0x2b | uVar14 >> 0x15;
        uVar2 = uVar2 ^ uVar32;
        uVar24 = *(ulonglong *)(&UNK_023bf408 + local_50 * 8) ^ uVar2 ^ (uVar12 | uVar7);
        uVar40 = uVar40 ^ uVar11;
        uVar13 = uVar40 << 0x15 | uVar40 >> 0x2b;
        uVar41 = uVar41 ^ uVar27;
        uVar40 = uVar41 << 0xe | uVar41 >> 0x32;
        uVar4 = uVar40 & uVar13 ^ uVar7;
        uVar36 = (uVar7 ^ 0xffffffffffffffff | uVar13) ^ uVar12;
        uVar15 = uVar15 ^ uVar11;
        uVar41 = uVar15 << 0x1c | uVar15 >> 0x24;
        uVar14 = uVar12 & uVar2 ^ uVar40;
        uVar30 = uVar30 ^ uVar27;
        uVar34 = uVar30 << 0x14 | uVar30 >> 0x2c;
        uVar20 = uVar20 ^ uVar32;
        uVar15 = uVar20 << 3 | uVar20 >> 0x3d;
        uVar13 = (uVar40 | uVar2) ^ uVar13;
        uVar37 = uVar37 ^ uVar33;
        uVar40 = uVar37 << 0x2d | uVar37 >> 0x13;
        uVar29 = uVar29 ^ uVar16;
        uVar30 = uVar29 << 0x3d | uVar29 >> 3;
        uVar37 = (uVar30 | uVar41) ^ uVar40;
        uVar19 = uVar19 ^ uVar33;
        uVar20 = uVar19 << 1 | (ulonglong)((longlong)uVar19 < 0);
        uVar7 = (uVar30 ^ 0xffffffffffffffff | uVar40) ^ uVar15;
        uVar3 = uVar3 ^ uVar16;
        uVar2 = uVar3 << 6 | uVar3 >> 0x3a;
        uVar12 = (uVar34 | uVar15) ^ uVar41;
        uVar5 = uVar5 ^ uVar11;
        uVar18 = uVar5 << 0x19 | uVar5 >> 0x27;
        uVar29 = uVar40 & uVar15 ^ uVar34;
        uVar23 = uVar23 ^ uVar27;
        uVar39 = uVar23 << 8 | uVar23 >> 0x38;
        uVar38 = uVar38 ^ uVar32;
        uVar3 = uVar38 << 0x12 | uVar38 >> 0x2e;
        uVar30 = uVar34 & uVar41 ^ uVar30;
        uVar19 = (uVar2 | uVar18) ^ uVar20;
        uVar40 = uVar39 & uVar18 ^ uVar2;
        uVar39 = uVar39 ^ 0xffffffffffffffff;
        uVar5 = uVar2 & uVar20 ^ uVar3;
        uVar35 = uVar35 ^ uVar27;
        uVar35 = uVar35 << 0x1b | uVar35 >> 0x25;
        uVar9 = uVar9 ^ uVar32;
        uVar15 = uVar9 << 0x24 | uVar9 >> 0x1c;
        uVar18 = uVar3 & uVar39 ^ uVar18;
        uVar21 = uVar21 ^ uVar33;
        uVar2 = uVar21 << 10 | uVar21 >> 0x36;
        uVar39 = (uVar20 | uVar3) ^ uVar39;
        uVar31 = uVar31 ^ uVar16;
        uVar21 = uVar31 << 0xf | uVar31 >> 0x31;
        uVar22 = uVar22 ^ uVar11;
        uVar9 = uVar22 << 0x38 | uVar22 >> 8;
        uVar3 = uVar21 ^ 0xffffffffffffffff;
        uVar22 = (uVar9 | uVar3) ^ uVar2;
        uVar20 = uVar2 & uVar15 ^ uVar35;
        uVar21 = (uVar2 | uVar21) ^ uVar15;
        uVar3 = uVar35 & uVar9 ^ uVar3;
        uVar9 = (uVar15 | uVar35) ^ uVar9;
        uVar16 = uVar16 ^ uVar8;
        uVar11 = uVar11 ^ uVar28;
        uVar27 = uVar27 ^ uVar10;
        uVar32 = uVar32 ^ uVar26;
        uVar28 = uVar16 << 0x3e | uVar16 >> 2;
        uVar8 = uVar11 << 0x37 | uVar11 >> 9;
        uVar2 = uVar27 << 0x27 | uVar27 >> 0x19;
        uVar33 = uVar33 ^ uVar6;
        uVar38 = uVar8 ^ 0xffffffffffffffff;
        uVar26 = uVar2 & uVar38 ^ uVar28;
        uVar11 = uVar12 ^ uVar26 ^ uVar24 ^ uVar19 ^ uVar20;
        uVar31 = uVar32 << 0x29 | uVar32 >> 0x17;
        uVar15 = uVar33 << 2 | uVar33 >> 0x3e;
        uVar6 = uVar15 & uVar31 ^ uVar2;
        uVar38 = (uVar2 | uVar31) ^ uVar38;
        uVar2 = uVar8 & uVar28 ^ uVar15;
        uVar31 = (uVar15 | uVar28) ^ uVar31;
        uVar41 = uVar13 ^ uVar3 ^ uVar31 ^ uVar37 ^ uVar39;
        uVar23 = uVar21 ^ uVar36 ^ uVar29 ^ uVar40 ^ uVar38;
        uVar32 = uVar7 ^ uVar22 ^ uVar6 ^ uVar4 ^ uVar18;
        uVar28 = uVar5 ^ uVar2 ^ uVar14 ^ uVar30 ^ uVar9;
        uVar27 = (uVar23 << 1 | (ulonglong)((longlong)uVar23 < 0)) ^ uVar28;
        uVar35 = (uVar32 << 1 | (ulonglong)((longlong)uVar32 < 0)) ^ uVar11;
        uVar29 = uVar29 ^ uVar35;
        uVar8 = uVar29 << 0x2c | uVar29 >> 0x14;
        uVar23 = (uVar41 << 1 | (ulonglong)((longlong)uVar41 < 0)) ^ uVar23;
        uVar18 = uVar18 ^ uVar23;
        uVar15 = uVar18 << 0x2b | uVar18 >> 0x15;
        uVar32 = (uVar28 << 1 | (ulonglong)((longlong)uVar28 < 0)) ^ uVar32;
        uVar3 = uVar3 ^ uVar32;
        uVar28 = uVar3 << 0x15 | uVar3 >> 0x2b;
        uVar41 = (uVar11 << 1 | (ulonglong)((longlong)uVar11 < 0)) ^ uVar41;
        uVar2 = uVar2 ^ uVar41;
        uVar3 = uVar2 << 0xe | uVar2 >> 0x32;
        uVar24 = uVar24 ^ uVar27;
        uVar2 = *(ulonglong *)(&UNK_023bf410 + local_50 * 8) ^ uVar24 ^ (uVar8 | uVar15);
        uVar29 = uVar28 & uVar3 ^ uVar15;
        uVar13 = uVar13 ^ uVar32;
        uVar10 = uVar13 << 0x1c | uVar13 >> 0x24;
        uVar18 = (uVar15 ^ 0xffffffffffffffff | uVar28) ^ uVar8;
        uVar30 = uVar30 ^ uVar41;
        uVar15 = uVar30 << 0x14 | uVar30 >> 0x2c;
        uVar19 = uVar19 ^ uVar27;
        uVar11 = uVar19 << 3 | uVar19 >> 0x3d;
        uVar13 = uVar8 & uVar24 ^ uVar3;
        uVar21 = uVar21 ^ uVar35;
        uVar19 = uVar21 << 0x2d | uVar21 >> 0x13;
        uVar6 = uVar6 ^ uVar23;
        uVar8 = uVar6 << 0x3d | uVar6 >> 3;
        uVar28 = (uVar3 | uVar24) ^ uVar28;
        uVar6 = (uVar8 | uVar10) ^ uVar19;
        uVar3 = (uVar8 ^ 0xffffffffffffffff | uVar19) ^ uVar11;
        uVar21 = (uVar15 | uVar11) ^ uVar10;
        uVar36 = uVar36 ^ uVar35;
        uVar30 = uVar36 << 1 | (ulonglong)((longlong)uVar36 < 0);
        uVar16 = uVar19 & uVar11 ^ uVar15;
        uVar7 = uVar7 ^ uVar23;
        uVar11 = uVar7 << 6 | uVar7 >> 0x3a;
        uVar39 = uVar39 ^ uVar32;
        uVar36 = uVar39 << 0x19 | uVar39 >> 0x27;
        uVar8 = uVar15 & uVar10 ^ uVar8;
        uVar9 = uVar9 ^ uVar41;
        uVar15 = uVar9 << 8 | uVar9 >> 0x38;
        uVar26 = uVar26 ^ uVar27;
        uVar26 = uVar26 << 0x12 | uVar26 >> 0x2e;
        uVar7 = (uVar11 | uVar36) ^ uVar30;
        uVar9 = uVar36 & uVar15 ^ uVar11;
        uVar15 = uVar15 ^ 0xffffffffffffffff;
        uVar39 = uVar11 & uVar30 ^ uVar26;
        uVar36 = uVar26 & uVar15 ^ uVar36;
        uVar14 = uVar14 ^ uVar41;
        uVar10 = uVar14 << 0x1b | uVar14 >> 0x25;
        uVar15 = (uVar30 | uVar26) ^ uVar15;
        uVar40 = uVar40 ^ uVar35;
        uVar11 = uVar40 << 10 | uVar40 >> 0x36;
        uVar22 = uVar22 ^ uVar23;
        uVar40 = uVar22 << 0xf | uVar22 >> 0x31;
        uVar31 = uVar31 ^ uVar32;
        uVar31 = uVar31 << 0x38 | uVar31 >> 8;
        uVar22 = uVar40 ^ 0xffffffffffffffff;
        uVar14 = (uVar31 | uVar22) ^ uVar11;
        uVar12 = uVar12 ^ uVar27;
        uVar26 = uVar12 << 0x24 | uVar12 >> 0x1c;
        uVar19 = uVar11 & uVar26 ^ uVar10;
        uVar30 = (uVar11 | uVar40) ^ uVar26;
        uVar11 = (uVar26 | uVar10) ^ uVar31;
        uVar22 = uVar31 & uVar10 ^ uVar22;
        uVar23 = uVar23 ^ uVar4;
        uVar32 = uVar32 ^ uVar37;
        uVar41 = uVar41 ^ uVar5;
        uVar27 = uVar27 ^ uVar20;
        uVar35 = uVar35 ^ uVar38;
        uVar40 = uVar32 << 0x37 | uVar32 >> 9;
        uVar31 = uVar41 << 0x27 | uVar41 >> 0x19;
        uVar4 = uVar27 << 0x29 | uVar27 >> 0x17;
        uVar5 = uVar35 << 2 | uVar35 >> 0x3e;
        uVar26 = uVar40 ^ 0xffffffffffffffff;
        uVar35 = uVar5 & uVar4 ^ uVar31;
        uVar10 = (uVar31 | uVar4) ^ uVar26;
        uVar20 = uVar30 ^ uVar10 ^ uVar16 ^ uVar9 ^ uVar18;
        uVar37 = uVar23 << 0x3e | uVar23 >> 2;
        uVar12 = uVar40 & uVar37 ^ uVar5;
        uVar23 = uVar31 & uVar26 ^ uVar37;
        uVar4 = (uVar5 | uVar37) ^ uVar4;
        uVar24 = uVar15 ^ uVar22 ^ uVar28 ^ uVar6 ^ uVar4;
        uVar5 = (uVar24 << 1 | (ulonglong)((longlong)uVar24 < 0)) ^ uVar20;
        uVar26 = uVar39 ^ uVar11 ^ uVar13 ^ uVar8 ^ uVar12;
        uVar31 = (uVar20 << 1 | (ulonglong)((longlong)uVar20 < 0)) ^ uVar26;
        uVar37 = uVar36 ^ uVar14 ^ uVar29 ^ uVar3 ^ uVar35;
        uVar27 = (uVar26 << 1 | (ulonglong)((longlong)uVar26 < 0)) ^ uVar37;
        uVar26 = uVar7 ^ uVar21 ^ uVar19 ^ uVar23 ^ uVar2;
        uVar33 = (uVar37 << 1 | (ulonglong)((longlong)uVar37 < 0)) ^ uVar26;
        uVar24 = (uVar26 << 1 | (ulonglong)((longlong)uVar26 < 0)) ^ uVar24;
        uVar16 = uVar16 ^ uVar33;
        uVar40 = uVar16 << 0x2c | uVar16 >> 0x14;
        uVar2 = uVar2 ^ uVar31;
        uVar36 = uVar36 ^ uVar5;
        uVar36 = uVar36 << 0x2b | uVar36 >> 0x15;
        uVar26 = *(ulonglong *)(&UNK_023bf418 + local_50 * 8) ^ uVar2 ^ (uVar40 | uVar36);
        uVar22 = uVar22 ^ uVar27;
        uVar20 = uVar22 << 0x15 | uVar22 >> 0x2b;
        uVar12 = uVar12 ^ uVar24;
        uVar16 = uVar12 << 0xe | uVar12 >> 0x32;
        uVar37 = uVar16 & uVar20 ^ uVar36;
        uVar32 = (uVar36 ^ 0xffffffffffffffff | uVar20) ^ uVar40;
        uVar12 = uVar40 & uVar2 ^ uVar16;
        uVar28 = uVar28 ^ uVar27;
        uVar22 = uVar28 << 0x1c | uVar28 >> 0x24;
        uVar8 = uVar8 ^ uVar24;
        uVar8 = uVar8 << 0x14 | uVar8 >> 0x2c;
        uVar20 = (uVar16 | uVar2) ^ uVar20;
        uVar7 = uVar7 ^ uVar31;
        uVar2 = uVar7 << 3 | uVar7 >> 0x3d;
        uVar30 = uVar30 ^ uVar33;
        uVar38 = uVar30 << 0x2d | uVar30 >> 0x13;
        uVar35 = uVar35 ^ uVar5;
        uVar30 = uVar35 << 0x3d | uVar35 >> 3;
        uVar28 = (uVar8 | uVar2) ^ uVar22;
        uVar40 = (uVar30 ^ 0xffffffffffffffff | uVar38) ^ uVar2;
        uVar7 = uVar2 & uVar38 ^ uVar8;
        uVar18 = uVar18 ^ uVar33;
        uVar16 = uVar18 << 1 | (ulonglong)((longlong)uVar18 < 0);
        uVar3 = uVar3 ^ uVar5;
        uVar2 = uVar3 << 6 | uVar3 >> 0x3a;
        uVar35 = uVar8 & uVar22 ^ uVar30;
        uVar15 = uVar15 ^ uVar27;
        uVar15 = uVar15 << 0x19 | uVar15 >> 0x27;
        uVar11 = uVar11 ^ uVar24;
        uVar11 = uVar11 << 8 | uVar11 >> 0x38;
        uVar38 = (uVar30 | uVar22) ^ uVar38;
        uVar23 = uVar23 ^ uVar31;
        uVar3 = uVar23 << 0x12 | uVar23 >> 0x2e;
        uVar23 = uVar11 ^ 0xffffffffffffffff;
        uVar36 = uVar3 & uVar23 ^ uVar15;
        uVar30 = uVar11 & uVar15 ^ uVar2;
        uVar11 = uVar2 & uVar16 ^ uVar3;
        uVar22 = (uVar2 | uVar15) ^ uVar16;
        uVar13 = uVar13 ^ uVar24;
        uVar8 = uVar13 << 0x1b | uVar13 >> 0x25;
        uVar21 = uVar21 ^ uVar31;
        uVar15 = uVar21 << 0x24 | uVar21 >> 0x1c;
        uVar23 = (uVar3 | uVar16) ^ uVar23;
        uVar9 = uVar9 ^ uVar33;
        uVar2 = uVar9 << 10 | uVar9 >> 0x36;
        uVar14 = uVar14 ^ uVar5;
        uVar3 = uVar14 << 0xf | uVar14 >> 0x31;
        uVar4 = uVar4 ^ uVar27;
        uVar4 = uVar4 << 0x38 | uVar4 >> 8;
        uVar16 = uVar15 & uVar2 ^ uVar8;
        uVar41 = (uVar2 | uVar3) ^ uVar15;
        uVar3 = uVar3 ^ 0xffffffffffffffff;
        uVar9 = (uVar15 | uVar8) ^ uVar4;
        uVar2 = (uVar4 | uVar3) ^ uVar2;
        uVar3 = uVar8 & uVar4 ^ uVar3;
        uVar5 = uVar5 ^ uVar29;
        uVar27 = uVar27 ^ uVar6;
        uVar24 = uVar24 ^ uVar39;
        uVar31 = uVar31 ^ uVar19;
        uVar33 = uVar33 ^ uVar10;
        uVar10 = uVar5 << 0x3e | uVar5 >> 2;
        uVar21 = uVar27 << 0x37 | uVar27 >> 9;
        uVar6 = uVar24 << 0x27 | uVar24 >> 0x19;
        uVar5 = uVar31 << 0x29 | uVar31 >> 0x17;
        uVar13 = uVar33 << 2 | uVar33 >> 0x3e;
        uVar4 = uVar21 ^ 0xffffffffffffffff;
        uVar8 = (uVar13 | uVar10) ^ uVar5;
        uVar31 = uVar5 & uVar13 ^ uVar6;
        uVar19 = uVar6 & uVar4 ^ uVar10;
        uVar15 = uVar26 ^ uVar19 ^ uVar16 ^ uVar22 ^ uVar28;
        uVar4 = (uVar6 | uVar5) ^ uVar4;
        uVar13 = uVar21 & uVar10 ^ uVar13;
        uVar5 = uVar41 ^ uVar30 ^ uVar32 ^ uVar7 ^ uVar4;
        uVar10 = uVar31 ^ uVar37 ^ uVar2 ^ uVar40 ^ uVar36;
        uVar24 = uVar8 ^ uVar20 ^ uVar23 ^ uVar38 ^ uVar3;
        uVar6 = uVar13 ^ uVar35 ^ uVar11 ^ uVar12 ^ uVar9;
        uVar21 = (uVar24 << 1 | (ulonglong)((longlong)uVar24 < 0)) ^ uVar5;
        uVar18 = (uVar5 << 1 | (ulonglong)((longlong)uVar5 < 0)) ^ uVar6;
        uVar5 = (uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0)) ^ uVar15;
        uVar10 = (uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0)) ^ uVar10;
        uVar7 = uVar7 ^ uVar5;
        uVar6 = uVar7 << 0x2c | uVar7 >> 0x14;
        uVar24 = (uVar15 << 1 | (ulonglong)((longlong)uVar15 < 0)) ^ uVar24;
        uVar36 = uVar36 ^ uVar21;
        uVar7 = uVar36 << 0x2b | uVar36 >> 0x15;
        uVar26 = uVar26 ^ uVar18;
        uVar15 = *(ulonglong *)(&UNK_023bf420 + local_50 * 8) ^ uVar26 ^ (uVar6 | uVar7);
        uVar3 = uVar3 ^ uVar10;
        uVar39 = uVar3 << 0x15 | uVar3 >> 0x2b;
        uVar13 = uVar13 ^ uVar24;
        uVar36 = uVar13 << 0xe | uVar13 >> 0x32;
        uVar3 = uVar39 & uVar36 ^ uVar7;
        uVar7 = (uVar7 ^ 0xffffffffffffffff | uVar39) ^ uVar6;
        uVar20 = uVar20 ^ uVar10;
        uVar13 = uVar20 << 0x1c | uVar20 >> 0x24;
        uVar14 = uVar6 & uVar26 ^ uVar36;
        uVar35 = uVar35 ^ uVar24;
        uVar33 = uVar35 << 0x14 | uVar35 >> 0x2c;
        uVar22 = uVar22 ^ uVar18;
        uVar20 = uVar22 << 3 | uVar22 >> 0x3d;
        uVar39 = (uVar36 | uVar26) ^ uVar39;
        uVar41 = uVar41 ^ uVar5;
        uVar35 = uVar41 << 0x2d | uVar41 >> 0x13;
        uVar31 = uVar31 ^ uVar21;
        uVar22 = uVar31 << 0x3d | uVar31 >> 3;
        uVar6 = (uVar22 | uVar13) ^ uVar35;
        uVar32 = uVar32 ^ uVar5;
        uVar29 = uVar32 << 1 | (ulonglong)((longlong)uVar32 < 0);
        uVar36 = (uVar22 ^ 0xffffffffffffffff | uVar35) ^ uVar20;
        uVar40 = uVar40 ^ uVar21;
        uVar26 = uVar40 << 6 | uVar40 >> 0x3a;
        uVar27 = (uVar33 | uVar20) ^ uVar13;
        uVar23 = uVar23 ^ uVar10;
        uVar31 = uVar23 << 0x19 | uVar23 >> 0x27;
        uVar40 = uVar35 & uVar20 ^ uVar33;
        uVar9 = uVar9 ^ uVar24;
        uVar20 = uVar9 << 8 | uVar9 >> 0x38;
        uVar19 = uVar19 ^ uVar18;
        uVar19 = uVar19 << 0x12 | uVar19 >> 0x2e;
        uVar22 = uVar33 & uVar13 ^ uVar22;
        uVar13 = (uVar26 | uVar31) ^ uVar29;
        uVar9 = uVar31 & uVar20 ^ uVar26;
        uVar20 = uVar20 ^ 0xffffffffffffffff;
        uVar23 = uVar26 & uVar29 ^ uVar19;
        uVar31 = uVar19 & uVar20 ^ uVar31;
        uVar20 = (uVar29 | uVar19) ^ uVar20;
        uVar30 = uVar30 ^ uVar5;
        uVar30 = uVar30 << 10 | uVar30 >> 0x36;
        uVar2 = uVar2 ^ uVar21;
        uVar19 = uVar2 << 0xf | uVar2 >> 0x31;
        uVar8 = uVar8 ^ uVar10;
        uVar29 = uVar8 << 0x38 | uVar8 >> 8;
        uVar8 = uVar19 ^ 0xffffffffffffffff;
        uVar35 = (uVar29 | uVar8) ^ uVar30;
        uVar12 = uVar12 ^ uVar24;
        uVar26 = uVar12 << 0x1b | uVar12 >> 0x25;
        uVar28 = uVar28 ^ uVar18;
        uVar28 = uVar28 << 0x24 | uVar28 >> 0x1c;
        uVar2 = uVar30 & uVar28 ^ uVar26;
        uVar30 = (uVar30 | uVar19) ^ uVar28;
        uVar12 = (uVar28 | uVar26) ^ uVar29;
        uVar8 = uVar29 & uVar26 ^ uVar8;
        uVar21 = uVar21 ^ uVar37;
        uVar10 = uVar10 ^ uVar38;
        uVar24 = uVar24 ^ uVar11;
        uVar18 = uVar18 ^ uVar16;
        uVar5 = uVar5 ^ uVar4;
        uVar26 = uVar10 << 0x37 | uVar10 >> 9;
        uVar37 = uVar24 << 0x27 | uVar24 >> 0x19;
        uVar10 = uVar18 << 0x29 | uVar18 >> 0x17;
        uVar19 = uVar5 << 2 | uVar5 >> 0x3e;
        uVar4 = uVar26 ^ 0xffffffffffffffff;
        uVar16 = uVar19 & uVar10 ^ uVar37;
        uVar11 = (uVar37 | uVar10) ^ uVar4;
        uVar28 = uVar30 ^ uVar11 ^ uVar40 ^ uVar9 ^ uVar7;
        uVar5 = uVar21 << 0x3e | uVar21 >> 2;
        uVar21 = uVar26 & uVar5 ^ uVar19;
        uVar18 = uVar37 & uVar4 ^ uVar5;
        uVar10 = (uVar19 | uVar5) ^ uVar10;
        uVar4 = uVar13 ^ uVar27 ^ uVar2 ^ uVar18 ^ uVar15;
        uVar24 = uVar31 ^ uVar35 ^ uVar3 ^ uVar36 ^ uVar16;
        uVar26 = uVar20 ^ uVar8 ^ uVar39 ^ uVar6 ^ uVar10;
        uVar29 = uVar23 ^ uVar12 ^ uVar14 ^ uVar22 ^ uVar21;
        uVar37 = (uVar28 << 1 | (ulonglong)((longlong)uVar28 < 0)) ^ uVar29;
        uVar19 = (uVar24 << 1 | (ulonglong)((longlong)uVar24 < 0)) ^ uVar4;
        uVar40 = uVar40 ^ uVar19;
        uVar38 = uVar40 << 0x2c | uVar40 >> 0x14;
        uVar28 = (uVar26 << 1 | (ulonglong)((longlong)uVar26 < 0)) ^ uVar28;
        uVar31 = uVar31 ^ uVar28;
        uVar5 = uVar31 << 0x2b | uVar31 >> 0x15;
        uVar24 = (uVar29 << 1 | (ulonglong)((longlong)uVar29 < 0)) ^ uVar24;
        uVar8 = uVar8 ^ uVar24;
        local_88 = uVar8 << 0x15 | uVar8 >> 0x2b;
        uVar26 = (uVar4 << 1 | (ulonglong)((longlong)uVar4 < 0)) ^ uVar26;
        uVar21 = uVar21 ^ uVar26;
        uVar21 = uVar21 << 0xe | uVar21 >> 0x32;
        uVar15 = uVar15 ^ uVar37;
        local_38 = *(ulonglong *)(&UNK_023bf428 + local_50 * 8) ^ uVar15 ^ (uVar38 | uVar5);
        local_f8 = uVar21 & local_88 ^ uVar5;
        uVar39 = uVar39 ^ uVar24;
        uVar40 = uVar39 << 0x1c | uVar39 >> 0x24;
        local_f0 = (uVar5 ^ 0xffffffffffffffff | local_88) ^ uVar38;
        uVar22 = uVar22 ^ uVar26;
        uVar4 = uVar22 << 0x14 | uVar22 >> 0x2c;
        uVar13 = uVar13 ^ uVar37;
        uVar5 = uVar13 << 3 | uVar13 >> 0x3d;
        local_d0 = uVar38 & uVar15 ^ uVar21;
        uVar30 = uVar30 ^ uVar19;
        local_b8 = uVar30 << 0x2d | uVar30 >> 0x13;
        uVar16 = uVar16 ^ uVar28;
        uVar8 = uVar16 << 0x3d | uVar16 >> 3;
        local_88 = (uVar21 | uVar15) ^ local_88;
        local_70 = (uVar4 | uVar5) ^ uVar40;
        local_98 = (uVar8 ^ 0xffffffffffffffff | local_b8) ^ uVar5;
        local_68 = uVar5 & local_b8 ^ uVar4;
        uVar36 = uVar36 ^ uVar28;
        uVar21 = uVar36 << 6 | uVar36 >> 0x3a;
        local_c8 = uVar4 & uVar40 ^ uVar8;
        uVar20 = uVar20 ^ uVar24;
        uVar4 = uVar20 << 0x19 | uVar20 >> 0x27;
        uVar12 = uVar12 ^ uVar26;
        uVar15 = uVar12 << 8 | uVar12 >> 0x38;
        local_b8 = (uVar8 | uVar40) ^ local_b8;
        uVar18 = uVar18 ^ uVar37;
        uVar40 = uVar18 << 0x12 | uVar18 >> 0x2e;
        local_b0 = uVar15 ^ 0xffffffffffffffff;
        local_80 = uVar40 & local_b0 ^ uVar4;
        uVar7 = uVar7 ^ uVar19;
        uVar5 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
        local_48 = uVar15 & uVar4 ^ uVar21;
        uVar14 = uVar14 ^ uVar26;
        uVar15 = uVar14 << 0x1b | uVar14 >> 0x25;
        uVar27 = uVar27 ^ uVar37;
        uVar20 = uVar27 << 0x24 | uVar27 >> 0x1c;
        local_c0 = uVar21 & uVar5 ^ uVar40;
        uVar9 = uVar9 ^ uVar19;
        local_60 = uVar9 << 10 | uVar9 >> 0x36;
        local_40 = (uVar21 | uVar4) ^ uVar5;
        uVar35 = uVar35 ^ uVar28;
        local_d8 = uVar35 << 0xf | uVar35 >> 0x31;
        uVar10 = uVar10 ^ uVar24;
        uVar4 = uVar10 << 0x38 | uVar10 >> 8;
        local_b0 = (uVar40 | uVar5) ^ local_b0;
        local_e8 = uVar20 & local_60 ^ uVar15;
        uVar5 = (local_60 | local_d8) ^ uVar20;
        local_d8 = local_d8 ^ 0xffffffffffffffff;
        local_90 = (uVar20 | uVar15) ^ uVar4;
        local_60 = (uVar4 | local_d8) ^ local_60;
        local_d8 = uVar15 & uVar4 ^ local_d8;
        uVar28 = uVar28 ^ uVar3;
        uVar24 = uVar24 ^ uVar6;
        uVar26 = uVar26 ^ uVar23;
        uVar37 = uVar37 ^ uVar2;
        uVar15 = uVar28 << 0x3e | uVar28 >> 2;
        uVar2 = uVar24 << 0x37 | uVar24 >> 9;
        uVar6 = uVar26 << 0x27 | uVar26 >> 0x19;
        uVar37 = uVar37 << 0x29 | uVar37 >> 0x17;
        uVar19 = uVar19 ^ uVar11;
        uVar28 = uVar19 << 2 | uVar19 >> 0x3e;
        local_a0 = uVar2 ^ 0xffffffffffffffff;
        local_a8 = (uVar28 | uVar15) ^ uVar37;
        uVar4 = uVar37 & uVar28 ^ uVar6;
        local_58 = uVar6 & local_a0 ^ uVar15;
        uVar26 = local_38 ^ local_58 ^ local_e8 ^ local_40 ^ local_70;
        local_a0 = (uVar6 | uVar37) ^ local_a0;
        uVar28 = uVar2 & uVar15 ^ uVar28;
        uVar15 = uVar5 ^ local_48 ^ local_f0 ^ local_68 ^ local_a0;
        uVar6 = uVar4 ^ local_f8 ^ local_60 ^ local_98 ^ local_80;
        uVar11 = local_a8 ^ local_88 ^ local_b0 ^ local_b8 ^ local_d8;
        uVar37 = uVar28 ^ local_c8 ^ local_c0 ^ local_d0 ^ local_90;
        local_50 = local_50 + 6;
      } while (local_50 < 0x12);
      param_2 = param_2 + unaff_ESI;
      uVar25 = uVar25 - uVar1;
      local_50 = uVar5;
    } while (uVar1 <= uVar25);
  }
  *unaff_RDI = local_38;
  unaff_RDI[1] = local_f0;
  unaff_RDI[2] = local_f8;
  unaff_RDI[3] = local_88;
  unaff_RDI[4] = local_d0;
  unaff_RDI[5] = local_70;
  unaff_RDI[6] = local_68;
  unaff_RDI[7] = local_98;
  unaff_RDI[8] = local_b8;
  unaff_RDI[9] = local_c8;
  unaff_RDI[10] = local_40;
  unaff_RDI[0xb] = local_48;
  unaff_RDI[0xc] = local_80;
  unaff_RDI[0xd] = local_b0;
  unaff_RDI[0xe] = local_c0;
  unaff_RDI[0xf] = local_e8;
  unaff_RDI[0x10] = local_50;
  unaff_RDI[0x11] = local_60;
  unaff_RDI[0x12] = local_d8;
  unaff_RDI[0x13] = local_90;
  unaff_RDI[0x14] = local_58;
  unaff_RDI[0x15] = local_a0;
  unaff_RDI[0x16] = uVar4;
  unaff_RDI[0x17] = local_a8;
  unaff_RDI[0x18] = uVar28;
  return param_1 - uVar25;
}


